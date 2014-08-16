package haxe.ui.haxelib;

import haxe.Timer;
import haxe.ui.haxelib.popups.ManageLocalProjectController;
import haxe.ui.haxelib.popups.QueryUserController;
import haxe.ui.haxelib.UIManager.InstallationCompleteEvent;
import haxe.ui.haxelib.UIManager.VersionChangedEvent;
import haxe.ui.toolkit.containers.ListView;
import haxe.ui.toolkit.core.interfaces.InvalidationFlag;
import haxe.ui.toolkit.core.PopupManager.PopupButton;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.events.UIEvent;
import haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller;
import openfl.Lib;
import tools.haxelib.Data.ProjectInfos;

/*
#if neko
import neko.vm.Thread;
#else
import cpp.vm.Thread;
#end
*/

@:build(haxe.ui.toolkit.core.Macros.buildController("assets/ui/main.xml"))
class MainController extends XMLController {
	private var _caller:AsyncThreadCaller;
	private var _listData:Array<Dynamic>;
	private var _lastFilterInput:Int;
	private var _filterUpdateTreshold:Int = 75;
	
	public function new() {
		refreshLocalRepository();
		refreshRemoteInfo();
		
		refreshLocal.onClick = function(e) {
			refreshLocalRepository();
			refreshRemoteInfo();
		};

		localProjects.onComponentEvent = function(e:UIEvent) {
			var project:Dynamic = e.data.project;
			modifyLocalProject(project);
		};
		
		mainTabs.onChange = function(e) {
			if (mainTabs.selectedIndex == 1) {
				UIManager.instance.showLogin(function() {
					mainTabs.selectedIndex = 0;
				});
			}
		};
		addMenuHandlers();
		
		filter.onChange = function(_) {
			var currentTime = Lib.getTimer();
			_lastFilterInput = currentTime;
			
			Timer.delay(function() {
				// no new input since this timer was started?
				if (_lastFilterInput == currentTime) {
					setProjectFilter(filter.text);
				}
			}, _filterUpdateTreshold);
		};
		
		/*
		var t = Thread.create(testFunc);
		t.sendMessage(localProjects);
		*/
		UIManager.instance.addListener(UIManager.VERSION_CHANGED, onProjectVersionChanged);
		UIManager.instance.addListener(UIManager.INSTALLATION_COMPLETE, onProjectInstallationComplete);
	}
	
	private function modifyLocalProject(project:Dynamic):Void {
		UIManager.instance.modifyLocalProject(project);
	}
	
	/*
	static function testFunc() {
		var lv:ListView = Thread.readMessage(true);
		trace("thread started");
		
		lv.dataSource.moveFirst();
		var x:Int = 0;
		do {
			var data:Dynamic = lv.dataSource.get();
			var projectName:String = data.project.name;
			var currentVersion:String = data.project.currentVersion;
			trace(projectName);
			var remoteProject:ProjectInfos = HaxeLibManager.instance.queryProject(projectName);
			data.project.remoteProject = remoteProject;
			var currentVersion:String = data.project.currentVersion;

			data.subtext = remoteProject.desc;
			
			lv.invalidate(InvalidationFlag.DATA);			

			lv.dataSource.moveFirst();
			for (n in 0...x) {
				lv.dataSource.moveNext();
			}
			x++;
		} while (lv.dataSource.moveNext()); 
		trace("thread ended");
	}
	*/
	
	private function refreshLocalRepository():Void {
		// TODO: remove all doesnt work properly (actually its synui in listview)
		localProjects.dataSource.removeAll();
		localProjects.dataSource.allowEvents = false;
		var projects:Array<Dynamic> = HaxeLibManager.instance.listLocalProjects();
		var n:Int = 0;
		_listData = [];
		for (project in projects) {
			var displayName:String = project.name + " [" + project.currentVersion + "]";
			
			var o = {
				icon: "img/folder-disabled.png",
				text: displayName,
				project: project,
				subtext: "Retrieving remote info...",
				controlId: "modifyButton",
				componentType: "button",
				componentValue: "Modify",
			};
			
			localProjects.dataSource.add(o);
			_listData.push(o);
			n++;
			if (n > 1) {
				//break;
			}
		}
		localProjects.dataSource.allowEvents = true;
	}
	
	private function refreshRemoteInfo():Void {
		if (_caller != null) {
			_caller.cancel();
		}
		_caller = new AsyncThreadCaller(new RemoteFetchRunner(localProjects, localProgressBox, .5));
		_caller.start();
	}
	
	private function addMenuHandlers():Void {
		menuFile.onMenuSelect = function(e:UIEvent) {
			switch(e.component.id) {
				case "menuSettings":
					UIManager.instance.showNotImplemented();
				case "menuCreateAccount":
					UIManager.instance.showNotImplemented();
				case "menuLogout":
					UIManager.instance.showNotImplemented();
				case "menuExit":
					Sys.exit(0);
			}
		};
		
		menuTools.onMenuSelect = function(e:UIEvent) {
			switch (e.component.id) {
				case "menuQueryUser":
					UIManager.instance.showQueryUser("ianharrigan");
				case "menuFindProjects":
					UIManager.instance.showNotImplemented();
			}
		};
		
		menuHelp.onMenuSelect = function(e:UIEvent) {
			switch (e.component.id) {
				case "menuAbout":
					UIManager.instance.showNotImplemented();
			}
		};
	}
	
	private function setProjectFilter(filter:String):Void {
		localProjects.dataSource.removeAll();
		localProjects.dataSource.allowEvents = false;
		
		for (data in _listData) {
			var projectName:String = cast data.project.name;
			if (projectName.indexOf(filter) != -1) {
				localProjects.dataSource.add(data);
			}
		}
		
		localProjects.dataSource.allowEvents = true;
	}
	
	private function onProjectVersionChanged(e:VersionChangedEvent):Void {
		localProjects.dataSource.moveFirst();
		do {
			var data = localProjects.dataSource.get();
			if (e.project.name == data.project.name) {
				var displayName:String = e.project.name + " [" + e.project.currentVersion + "]";
				data.text = displayName;
				if (e.project.currentVersion != data.project.remoteProject.curversion) {
					data.componentValue = data.project.remoteProject.curversion + " Available";
					data.icon = "img/blue-folder-horizontal-exclamation.png";
				} else {
					data.componentValue = "Modify";
					data.icon = "img/blue-folder-horizontal-tick.png";
				}
				localProjects.invalidate(InvalidationFlag.DATA);
				break;
			}
		} while (localProjects.dataSource.moveNext());
	}
	
	private function onProjectInstallationComplete(e:InstallationCompleteEvent):Void {
		localProjects.dataSource.moveFirst();
		do {
			var data = localProjects.dataSource.get();
			if (e.project.name == data.project.name) {
				var displayName:String = e.project.name + " [" + e.project.currentVersion + "]";
				data.text = displayName;
				if (e.project.currentVersion != data.project.remoteProject.curversion) {
					data.componentValue = data.project.remoteProject.curversion + " Available";
					data.icon = "img/blue-folder-horizontal-exclamation.png";
				} else {
					data.componentValue = "Modify";
					data.icon = "img/blue-folder-horizontal-tick.png";
				}
				localProjects.invalidate(InvalidationFlag.DATA);
				break;
			}
		} while (localProjects.dataSource.moveNext());
	}
}