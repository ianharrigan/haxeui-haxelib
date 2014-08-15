package haxe.ui.haxelib;

import haxe.Http;
import haxe.zip.Reader;
import openfl.events.ProgressEvent;
import openfl.net.URLLoader;
import openfl.net.URLLoaderDataFormat;
import openfl.net.URLRequest;
import sys.FileSystem;
import sys.io.File;
import tools.haxelib.Data;
import tools.haxelib.Data.UserInfos;

#if neko
import neko.vm.Thread;
#else
import cpp.vm.Thread;
#end

class Downloader extends haxe.io.Output {
	var o : haxe.io.Output;
	public var cur : Int;
	var max : Int;
	var start : Float;

	var lastPercent:Int = 0;
	
	public function new(o) {
		this.o = o;
		cur = 0;
		start = Timer.stamp();
	}

	function bytes(n) {
		cur += n;
		var details:Dynamic = { };
		var newPercent:Int = 0;
		#if neko
		if( max == null ) {
			details = { cur: cur, max: 0, percent: 0 };
		} else {
			details = { cur: cur, max: max, percent: Std.int((cur * 100.0) / max) };
			newPercent = Std.int((cur * 100.0) / max);
		}
		#else
		if ( max == 0 ) {
			details = { cur: cur, max: 0, percent: 0 };
		} else {
			details = { cur: cur, max: max, percent: Std.int((cur * 100.0) / max) };
			newPercent = Std.int((cur * 100.0) / max);
		}
		#end
		
		if (newPercent != lastPercent) {
			UIManager.instance.dispatchDownloadProgress(details);
			lastPercent = newPercent;
			//trace("% = " + lastPercent);
		}
	}

	public override function writeByte(c) {
		o.writeByte(c);
		bytes(1);
	}

	public override function writeBytes(s,p,l) {
		var r = o.writeBytes(s,p,l);
		bytes(r);
		return r;
	}

	public override function close() {
		super.close();
		o.close();
		var time = Timer.stamp() - start;
		var speed = (cur / time) / 1024;
		time = Std.int(time * 10) / 10;
		speed = Std.int(speed * 10) / 10;
		
		var details:Dynamic = {
			cur: cur,
			max: max,
			percent: 100,
			speed: speed,
			time: time,
		};
		UIManager.instance.dispatchDownloadProgress(details);
		
		//Sys.print("Download complete : "+cur+" bytes in "+time+"s ("+speed+"KB/s)\n");
	}

	public override function prepare(m) {
		max = m;
	}
}

class HaxeLibManager extends tools.haxelib.Main {
	private static var _instance:HaxeLibManager;
	public static var instance(get, null):HaxeLibManager;
	private static function get_instance():HaxeLibManager {
		if (_instance == null) {
			_instance = new HaxeLibManager();
		}
		return _instance;
	}
	
	private function new() {
		super();
	}
	
	public function hasLocalVersion(project:String, version:String):Bool {
		var pdir = getRepository() + Data.safe(project);
		var vdir = pdir + "/" + Data.safe(version);
		return FileSystem.exists(vdir);
	}
	
	public function getLocalVersion(project:String):String {
		var pdir = getRepository() + Data.safe(project);
		if ( !FileSystem.exists(pdir) ) {
			return null;
		}
		return getCurrent(pdir);
	}
	
	public function setLocalVersion(project:String, version:String):Void {
		if (hasLocalVersion(project, version)) {
			if (getLocalVersion(project) != version) {
				var pdir = getRepository() + Data.safe(project);
				File.saveContent(pdir+"/.current",version);
			}
		}
	}
	
	public function installRemoteProject(project:String, version:String):Void {
		if (hasLocalVersion(project, version)) {
			setLocalVersion(project, version);
		} else {
			var rep = getRepository();
			var filename = Data.fileName(project, version);
			var filepath = rep + filename;
			var out = File.write(filepath, true);
			trace(filepath);
			
			var downloader = new Downloader(out);
			var h = new Http(siteUrl + Data.REPOSITORY + "/" + filename);
			h.onError = function(e) {
				downloader.close();
				FileSystem.deleteFile(filepath);
				throw e;
			};
			h.customRequest(false, downloader);
			installLocalZip(filepath);
		}
	}
	
	public function installLocalZip(filepath:String, setcurrent:Bool = true, nodelete:Bool = false):Void {
		// read zip content
		var f = File.read(filepath, true);
		var zip = Reader.readZip(f);
		f.close();
		var infos = Data.readInfos(zip,false);
		// create directories
		var pdir = getRepository() + Data.safe(infos.project);
		safeDir(pdir);
		pdir += "/";
		var target = pdir + Data.safe("" + infos.version);
		safeDir(target);
		target += "/";

		// locate haxelib.json base path
		var basepath = Data.locateBasePath(zip);

		// unzip content
		for( zipfile in zip ) {
			var n = zipfile.fileName;
			if( StringTools.startsWith(n, basepath) ) {
				// remove basepath
				n = n.substr(basepath.length,n.length-basepath.length);
				if( n.charAt(0) == "/" || n.charAt(0) == "\\" || n.split("..").length > 1 )
					throw "Invalid filename : "+n;
				var dirs = ~/[\/\\]/g.split(n);
				var path = "";
				var file = dirs.pop();
				for( d in dirs ) {
					path += d;
					safeDir(target+path);
					path += "/";
				}
				if( file == "" ) {
					//if( path != "" ) print("  Created "+path);
					continue; // was just a directory
				}
				path += file;
				//print("  Install "+path);
				var data = Reader.unzip(zipfile);
				File.saveBytes(target+path,data);
			}
		}

		// set current version
		if( setcurrent || !FileSystem.exists(pdir+".current") ) {
			File.saveContent(pdir + ".current", "" + infos.version);
			//print("  Current version is now "+infos.version);
		}

		// end
		if( !nodelete )
			FileSystem.deleteFile(filepath);
		//print("Done");

		// process dependencies
		//doInstallDependencies(infos.dependencies);
		var p:Dynamic = {
			name: infos.project,
			currentVersion: getLocalVersion(infos.project),
		}
		
		UIManager.instance.dispatchInstallationComplete(p);
	}
	
	public function installRemoteProjectAsync(project:String, version:String, fn:Dynamic->Void = null):Void {
		var t = Thread.create(installRemoteProjectThread);
		t.sendMessage(project);
		t.sendMessage(version);
	}
	
	private static function installRemoteProjectThread():Void {
		var project:String = Thread.readMessage(true);
		var version:String = Thread.readMessage(true);
		HaxeLibManager.instance.installRemoteProject(project, version);
	}
	
	public function queryUser(username:String):UserInfos {
		return site.user(username);
	}
	
	public function queryProject(projectName:String):ProjectInfos {
		var infos:ProjectInfos = null;
		try  {
			infos = site.infos(projectName);
		} catch (e:Dynamic) {
			// project might not be on haxelib, e.g. if installed via haxelib git
		}
		return infos;
	}
	
	public function listLocalProjects(filter:String = null, loadRemote:Bool = false):Array<Dynamic> {
		var rep = getRepository();
		var folders = FileSystem.readDirectory(rep);
		if ( filter != null )
			folders = folders.filter( function (f) return f.toLowerCase().indexOf(filter.toLowerCase()) > -1 );
		var all = [];
		for( p in folders ) {
			if( p.charAt(0) != "." ) {
				var versions = new Array();
				var current = null;
				try {
					current = getCurrent(rep + p);
				} catch (e:Dynamic) {
					current = null;
				}
				if (current != null) {
					var dev = null;
					try {
						dev = StringTools.trim(File.getContent(rep + p + "/.dev"));
					} catch ( e : Dynamic ) {
						
					}

					for( v in FileSystem.readDirectory(rep+p) ) {
						if( v.charAt(0) != "." ) {
							v = Data.unsafe(v);
							/*
							if( dev == null && v == current )
								v = v;
								*/
							versions.push(v);
						}
					}
					if( dev != null )
						versions.push("dev:" + dev + "");
					var o = {
						name: Data.unsafe(p),
						localVersions: versions,
						remoteProject: null,
						currentVersion: current,
					}
					
					if (loadRemote == true) {
						o.remoteProject = queryProject(o.name);
					}
					all.push(o);
				}
			}
		}
		all.sort(function(s1, s2) return Reflect.compare(s1.name.toLowerCase(), s2.name.toLowerCase()));
		var list:Array<Dynamic> = new Array<Dynamic>();
		for (p in all) {
			list.push(p);
		}
		return list;
	}
}