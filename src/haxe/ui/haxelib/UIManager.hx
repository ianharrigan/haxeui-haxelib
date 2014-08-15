package haxe.ui.haxelib;

import haxe.ui.haxelib.popups.InstallProgressController;
import haxe.ui.haxelib.popups.LoginController;
import haxe.ui.haxelib.popups.ManageLocalProjectController;
import haxe.ui.haxelib.popups.NotImplementedController;
import haxe.ui.haxelib.popups.QueryUserController;
import haxe.ui.toolkit.core.Controller;
import haxe.ui.toolkit.core.PopupManager;
import openfl.events.Event;
import openfl.events.EventDispatcher;

class UIManager extends EventDispatcher {
	public static inline var VERSION_CHANGED:String = "haxelib_VersionChanged";
	public static inline var DOWNLOAD_PROGRESS:String = "haxelib_DownloadProgress";
	public static inline var INSTALLATION_COMPLETE:String = "haxelib_InstallationComplete";
	
	private static var _instance:UIManager;
	public static var instance(get, null):UIManager;
	private static function get_instance():UIManager {
		if (_instance == null) {
			_instance = new UIManager();
		}
		return _instance;
	}
	
	private var _popups:Array<Controller>;
	public function new() {
		super();
		_popups = new Array<Controller>();
	}
	
	public function showLogin(fn:Void->Void):Void {
		var loginPopup:LoginController = new LoginController();
		PopupManager.instance.showCustom(loginPopup.view, "Login", { buttons: PopupButton.CLOSE | PopupButton.OK }, function(button) {
			showNotImplemented(fn);
		});
	}
	
	public function showNotImplemented(fn:Void->Void = null):Void {
		var notImplementedPopup:NotImplementedController = new NotImplementedController();
		PopupManager.instance.showCustom(notImplementedPopup.view, "Not Implemented", { buttons: PopupButton.OK }, function(button) {
			if (fn != null) {
				fn();
			}
		});
	}
	
	public function showQueryUser(username:String = null):Void {
		var queryUserPopup:QueryUserController = cast findPopup(QueryUserController);
		if (queryUserPopup == null) {
			queryUserPopup = new QueryUserController(username);
			_popups.push(queryUserPopup);
			PopupManager.instance.showCustom(queryUserPopup.view, "Query User", { width: 400, buttons: PopupButton.CLOSE }, function(button) {
				_popups.remove(queryUserPopup);
			});
		} else {
			queryUserPopup.performQuery(username);
		}
		
	}
	
	public function modifyLocalProject(project:Dynamic):Void {
		project.remoteProject = HaxeLibManager.instance.queryProject(project.name);
		var managePopup:ManageLocalProjectController = cast findPopup(ManageLocalProjectController);
		if (managePopup == null) {
			managePopup = new ManageLocalProjectController(project);
			_popups.push(managePopup);
			var config:Dynamic = {
				width: 550
			};
			
			PopupManager.instance.showCustom(managePopup.view, "Manage Project", config, function(button) {
				_popups.remove(managePopup);
			});
		} else {
			managePopup.refreshProject(project);
		}
	}
	
	private function findPopup(cls:Class<Controller>) {
		var foundPopup:Controller = null;
		for (p in _popups) {
			if (Std.is(p, cls) == true) {
				foundPopup = p;
				break;
			}
		}
		return foundPopup;
	}
	
	public function dispatchProjectVersionChanged(project:Dynamic):Void {
		dispatchEvent(new VersionChangedEvent(project));
	}

	public function dispatchDownloadProgress(details:Dynamic):Void {
		dispatchEvent(new DownloadProgressEvent(details));
	}

	public function dispatchInstallationComplete(project:Dynamic):Void {
		dispatchEvent(new InstallationCompleteEvent(project));
	}
	
	public function addListener(type:String, listener:Dynamic->Void):Void {
		addEventListener(type, listener, false, 0, false);
	}
	
	public function showInstallProgress(project:String, version:String):Void {
		var progressPopup:InstallProgressController = new InstallProgressController(project, version);
		var config:Dynamic = {
			width: 450
		}
		PopupManager.instance.showCustom(progressPopup.view, "Installing " + project + " " + version + "", config);
	}
}

class InstallationCompleteEvent extends Event {
	public var project(default, default):Dynamic;
	
	public function new(project:Dynamic) {
		super(UIManager.INSTALLATION_COMPLETE, false, false);
		this.project = project;
	}
}

class DownloadProgressEvent extends Event {
	private var _details:Dynamic;
	public function new(details:Dynamic) {
		super(UIManager.DOWNLOAD_PROGRESS, false, false);
		_details = details;
	}
	
	public var cur(get, null):Int;
	private function get_cur():Int {
		return _details.cur;
	}
	
	public var max(get, null):Int;
	private function get_max():Int {
		return _details.max;
	}
	
	public var percent(get, null):Int;
	private function get_percent():Int {
		return _details.percent;
	}
	
	public var speed(get, null):Int;
	private function get_speed():Int {
		return _details.speed;
	}
	
	public var time(get, null):Int;
	private function get_time():Int {
		return _details.time;
	}
}

class VersionChangedEvent extends Event {
	public var project(default, default):Dynamic;
	
	public function new(project:Dynamic) {
		super(UIManager.VERSION_CHANGED, false, false);
		this.project = project;
	}
}