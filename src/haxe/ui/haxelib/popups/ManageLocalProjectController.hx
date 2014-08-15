package haxe.ui.haxelib.popups;

import haxe.ui.haxelib.UIManager.InstallationCompleteEvent;
import haxe.ui.haxelib.UIManager.VersionChangedEvent;
import haxe.ui.toolkit.controls.popups.Popup;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.events.UIEvent;
import openfl.Lib;
import openfl.net.URLRequest;
import tools.haxelib.Data.ProjectInfos;

@:build(haxe.ui.toolkit.core.Macros.buildController("assets/ui/popups/manage-local-project.xml"))
class ManageLocalProjectController extends XMLController {
	private var _project:Dynamic;
	public function new(project:Dynamic) {
		_project = project;
		
		if (_project.remoteProject != null) {
			refreshDetails();
			refreshVersions();
			queryUser.onClick = function(e) {
				UIManager.instance.showQueryUser(_project.remoteProject.owner);
			};
			projectWebsite.onClick = function(e) {
				Lib.getURL(new URLRequest(_project.remoteProject.website));
			};
		}
		
		close.onClick = function(e) {
			cast(view.parent.parent, Popup).clickButton(PopupButton.CLOSE);
		};
		
		projectVersions.onComponentEvent = function(e:UIEvent) {
			setVersion(e.data.version);
		};
		
		updateToLatest.onClick = function(e) {
			setVersion(updateToLatest.userData);
		};
		
		uninstall.onClick = function(e) {
			UIManager.instance.showNotImplemented();
		}
		
		UIManager.instance.addListener(UIManager.VERSION_CHANGED, onProjectVersionChanged);
		UIManager.instance.addListener(UIManager.INSTALLATION_COMPLETE, onProjectInstallComplete);
	}
	
	private function setVersion(version:String):Void {
		var hasLocalVersion:Bool = HaxeLibManager.instance.hasLocalVersion(_project.name, version);
		if (hasLocalVersion == false) {
			showSimplePopup("You do not have version " + version + " of " + _project.name + " in your local repository.\n\nDo wish to download and install it now?", "Local version not found", PopupButton.YES | PopupButton.NO, function(button) {
				if (button == PopupButton.YES) {
					//UIManager.instance.showNotImplemented();
					//HaxeLibManager.instance.installRemoteProject(_project.name, version);
					UIManager.instance.showInstallProgress(_project.name, version);
				}
			});
		} else {
			HaxeLibManager.instance.setLocalVersion(_project.name, version);
			_project.currentVersion = version;
			UIManager.instance.dispatchProjectVersionChanged(_project);
		}
	}
	
	private function onProjectVersionChanged(e:VersionChangedEvent):Void {
		if (e.project.name == _project.name) {
			_project.currentVersion = e.project.currentVersion;
			refreshProject(_project);
		}
	}

	private function onProjectInstallComplete(e:InstallationCompleteEvent):Void {
		trace(e.project.name);
		if (e.project.name == _project.name) {
			_project.currentVersion = e.project.currentVersion;
			refreshProject(_project);
		}
	}
	
	public function refreshProject(project:Dynamic):Void {
		_project = project;
		refreshDetails();
		refreshVersions();
	}
	
	private function refreshDetails():Void {
		var remoteProject:ProjectInfos = _project.remoteProject;
		projectTitle.text = remoteProject.name;
		if (remoteProject.owner != null) {
			projectTitle.text += " (" + remoteProject.owner + ")";
		}
		
		projectDescription.text = remoteProject.desc;
		projectTags.text = remoteProject.tags.join(", ");
		projectWebsite.text = remoteProject.website;
		projectVersion.text = remoteProject.curversion;
		projectOwner.text = remoteProject.owner;
		projectLicense.text = remoteProject.license;
		
		if (remoteProject.curversion != _project.currentVersion) {
			projectIcon.resource = "img/blue-folder-horizontal-exclamation.png";
			updateToLatest.text = "Upgrade to latest (" + remoteProject.curversion + ")";
			updateToLatest.userData = remoteProject.curversion;
			updateToLatest.visible = true;
		} else {
			projectIcon.resource = "img/blue-folder-horizontal-tick.png";
			updateToLatest.visible = false;
		}
	}
	
	private function refreshVersions():Void {
		projectVersions.dataSource.removeAll();
		projectVersions.dataSource.allowEvents = false;
		
		var remoteProject:ProjectInfos = _project.remoteProject;
		var localVersions:Array<String> = _project.localVersions;
		var currentVersion:String = _project.currentVersion;

		var currentVersionIndex:Int = -1;
		for (n in 0...remoteProject.versions.length) {
			var remoteVersion = remoteProject.versions[remoteProject.versions.length - n - 1];
			if (remoteVersion.name == currentVersion) {
				currentVersionIndex = n;
				break;
			}
		}
		
		for (n in 0...remoteProject.versions.length) {
			var remoteVersion = remoteProject.versions[remoteProject.versions.length - n - 1];
		//for (remoteVersion in remoteProject.versions) {
			var o:Dynamic = {
				text: remoteVersion.name,
				subtext: "(" + remoteVersion.date + ")",
				version: remoteVersion.name,
			}
			if (remoteVersion.comments != null && remoteVersion.comments.length > 0) {
				o.subtext = remoteVersion.comments + " " + o.subtext;
			}
			
			if (remoteVersion.name != currentVersion) {
				/*
				if (localVersions.indexOf(remoteVersion.name) != -1) { // means version is already available
					o.controlId = "setButton";
					o.componentType = "button";
					o.componentValue = "Set";
					o.componentSize = 90;
				} else {
				*/
					o.controlId = "installButton";
					o.componentType = "button";
					o.componentValue = "Upgrade";
					if (n > currentVersionIndex) {
						o.componentValue = "Downgrade";
					}
					o.componentSize = 90;
				/*	
				}
				*/
			}
			
			if (n == currentVersionIndex) {
				o.icon = "img/arrow.png";
			} else if (n > currentVersionIndex) {
				o.icon = "img/arrow-270.png";
			} else if (n < currentVersionIndex) {
				o.icon = "img/arrow-090.png";
			}
			
			projectVersions.dataSource.add(o) ;
		}
		
		projectVersions.dataSource.allowEvents = true;
	}
}