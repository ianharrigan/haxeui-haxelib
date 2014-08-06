package haxe.ui.haxelib;

import sys.FileSystem;
import sys.io.File;
import tools.haxelib.Data;
import tools.haxelib.Data.UserInfos;


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
	
	public function queryUser(username:String):UserInfos {
		return site.user(username);
	}
	
	public function queryProject(projectName:String):ProjectInfos {
		return site.infos(projectName);
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