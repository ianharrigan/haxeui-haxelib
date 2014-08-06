package haxe.ui.haxelib.popups;

import haxe.ui.haxelib.HaxeLibManager;
import haxe.ui.toolkit.containers.Box;
import haxe.ui.toolkit.containers.HBox;
import haxe.ui.toolkit.containers.ListView;
import haxe.ui.toolkit.containers.VBox;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.controls.popups.Popup;
import haxe.ui.toolkit.controls.TextInput;
import haxe.ui.toolkit.core.interfaces.InvalidationFlag;
import haxe.ui.toolkit.core.PopupManager;
import haxe.ui.toolkit.core.XMLController;
import haxe.ui.toolkit.events.UIEvent;
import haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller;
import haxe.ui.toolkit.util.pseudothreads.Runner;
import tools.haxelib.Data.ProjectInfos;
import tools.haxelib.Data.UserInfos;

@:build(haxe.ui.toolkit.core.Macros.buildController("assets/ui/popups/query-user.xml"))
class QueryUserController extends XMLController {
	private var _caller:AsyncThreadCaller;
	
	public function new(usernameToQuery:String = null) {
		if (usernameToQuery != null) {
			performQuery(usernameToQuery);
		}
		
		query.onClick = function(e) {
			performQuery(username.text);
		}
		
		userProjects.onComponentEvent = function(e:UIEvent) {
			var project:Dynamic = e.data.project;
			switch(e.component.text) {
				case "Modify":
					UIManager.instance.modifyLocalProject(project);
					cast(view.parent.parent, Popup).clickButton(PopupButton.CLOSE);
				case "Update":
					UIManager.instance.modifyLocalProject(project);
					cast(view.parent.parent, Popup).clickButton(PopupButton.CLOSE);
				default:
			}
		}
	}
	
	public function performQuery(usernameToQuery:String):Void {
		username.text = usernameToQuery;
		if (_caller != null) {
			_caller.cancel();
		}

		_caller = new AsyncThreadCaller(new QueryUserRunner(this, .5));
		_caller.start();
	}
}

class QueryUserRunner extends Runner {
	private var _stage:Int = 0;
	private var _controller:QueryUserController;
	private var _userInfo:UserInfos;
	private var _localProjects:Array<Dynamic>;
	private var _filteredProjects:Array<Dynamic>;
	private var _breakIndex:Int = 0;
	private var _lastError:Dynamic;
	
	public function new(controller:QueryUserController, timeShare:Float = .9) {
		super();
		_runningTimeShare = timeShare;
		_controller = controller;
	}
	
	public override function run() {
		while (_needToExit != null && _needToExit() == false) {
			switch (_stage) {
				case 0: // clean up
					_controller.username.disabled = true;
					//_username.disabled = true;
					_controller.query.disabled = true;
					_controller.warning.visible = false;
					_controller.userProjects.dataSource.removeAll();
					_stage++;
				case 1: // query
					try {
						_userInfo = HaxeLibManager.instance.queryUser(_controller.username.text);
						_stage++;
					} catch (e:Dynamic) {
						_lastError = e;
					}
					_stage++;
				case 2: // failure
					_controller.warningText.text = "" + _lastError;
					_controller.warning.visible = true;
					_controller.results.visible = false;
					PopupManager.instance.centerPopup((cast(_controller.view.parent.parent, Popup)));
					_stage = 7;
				case 3: // success - set title/email/etc
					_controller.results.visible = true;
					_controller.userTitle.text = _userInfo.fullname + " (" + _userInfo.name + ")";
					_controller.userEmail.text = _userInfo.email;
					PopupManager.instance.centerPopup((cast(_controller.view.parent.parent, Popup)));
					_stage++;
				case 4: // success - remove list items, load local projects
					_localProjects = HaxeLibManager.instance.listLocalProjects();
					_stage++;
				case 5: // success - filter local projects
					_filteredProjects = new Array<Dynamic>();
					for (l in _localProjects) {
						if (_userInfo.projects.indexOf(l.name) != -1) {
							_filteredProjects.push(l);
						}
					}
					_stage++;
				case 6: // start adding the projects
					var p = _userInfo.projects[_breakIndex];
					var projectInfo:ProjectInfos = HaxeLibManager.instance.queryProject(p);
					
					var o:Dynamic = {
						text: projectInfo.name + " [" + projectInfo.curversion + "]",
						subtext: "Last updated: " + projectInfo.versions[projectInfo.versions.length - 1].date,
					}
					
					var localProject = null;
					for (f in _filteredProjects) {
						if (f.name == projectInfo.name) {
							localProject = f;
							break;
						}
					}
					o.project = localProject;
					if (localProject != null) {
						o.project.remoteProject = projectInfo;
					}
					
					if (localProject == null) {
						o.controlId = "installButton";
						o.componentType = "button";
						o.componentValue = "Install";
					} else {
						if (localProject.currentVersion != projectInfo.curversion) {
							o.controlId = "updateButton";
							o.componentType = "button";
							o.componentValue = "Update";
						} else {
							o.controlId = "modifyButton";
							o.componentType = "button";
							o.componentValue = "Modify";
						}
					}
					
					_controller.userProjects.dataSource.add(o);
					_breakIndex++;
					
					if (_breakIndex >= _userInfo.projects.length) {
						_stage++;
					}
				case 7:
					_controller.username.disabled = false;
					_controller.query.disabled = false;
					_stage = 100;
				default:
					_needToExit = null;
					_isComplete = true;
			}
		}
	}
}