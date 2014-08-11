package haxe.ui.haxelib;

import haxe.ui.toolkit.containers.ListView;
import haxe.ui.toolkit.controls.Button;
import haxe.ui.toolkit.controls.Progress;
import haxe.ui.toolkit.controls.Spacer;
import haxe.ui.toolkit.controls.Text;
import haxe.ui.toolkit.core.Component;
import haxe.ui.toolkit.core.interfaces.InvalidationFlag;
import haxe.ui.toolkit.util.pseudothreads.Runner;
import tools.haxelib.Data.ProjectInfos;

class RemoteFetchRunner extends Runner {
	private var _lv:ListView;
	private var _progressLabel:Text;
	private var _progressBar:Progress;
	private var _progressSpacer:Spacer;
	private var _progressButton:Button;
	private var _totalProjects:Int;
	private var _outOfDateProjects:Int;
	
	private var _breakIndex:Int = 0;
	
	public function new(lv:ListView, progressBox:Component, timeShare:Float = .9) {
		super();
		_runningTimeShare = timeShare;
		_lv = lv;
		_progressLabel = progressBox.findChild("localProgressLabel");
		_progressBar = progressBox.findChild("localProgressBar");
		_progressSpacer = progressBox.findChild("localProgressSpacer");
		_progressButton = progressBox.findChild("refreshLocal");
		_progressBar.max = _lv.dataSource.size();
		_totalProjects = Std.int(_progressBar.max);
		_outOfDateProjects = 0;
		_progressLabel.text = "Refreshing local repository, please wait...";
	}
	
	public override function run() {
		_progressBar.visible = true;
		_progressSpacer.visible = false;
		_progressButton.disabled = true;
		_lv.disabled = true;
		
		_lv.dataSource.moveFirst();
		for (x in 0..._breakIndex) {
			_lv.dataSource.moveNext();
		}

		var n:Int = _breakIndex;
		var x:Int = 0;
		do {
			if (_needToExit() == true && x == 1) {
				_progressBar.pos = n;
				_breakIndex = n;
				_lv.invalidate(InvalidationFlag.DATA);
				return;
			}
			
			var data:Dynamic = _lv.dataSource.get();
			var projectName:String = data.project.name;
			var currentVersion:String = data.project.currentVersion;
			var remoteProject:ProjectInfos = HaxeLibManager.instance.queryProject(projectName);
			
			if (remoteProject != null) {
				data.project.remoteProject = remoteProject;
				var currentVersion:String = data.project.currentVersion;
				if (currentVersion != remoteProject.curversion) {
					data.componentValue = remoteProject.curversion + " Available";
					data.icon = "img/blue-folder-horizontal-exclamation-disabled.png";
					_outOfDateProjects++;
				} else {
					data.icon = "img/blue-folder-horizontal-tick-disabled.png";
				}
				/*
				trace(projectName + ":");
				trace("localVersions = " + data.project.localVersions);
				trace("remoteVersions = " + remoteInfo.versions);
				trace("");
				*/
				data.subtext = remoteProject.desc;
			} else {
				data.icon = "img/blue-folder-horizontal.png";
				data.subtext = "";
			}
			
			n++;
			x++;
		} while (_lv.dataSource.moveNext()); 
		
		// disabled prop on images doesnt work, this is a work around
		_lv.dataSource.moveFirst();
		do {
			var data:Dynamic = _lv.dataSource.get();
			if (data.icon == "img/blue-folder-horizontal-exclamation-disabled.png") {
				data.icon = "img/blue-folder-horizontal-exclamation.png";
			} else if (data.icon != "img/blue-folder-horizontal.png") {
				data.icon = "img/blue-folder-horizontal-tick.png";
			}
		} while (_lv.dataSource.moveNext()); 
		
		_lv.disabled = false;
		_lv.invalidate(InvalidationFlag.DATA);
		_progressBar.pos = n;
		var text:String = "" + _totalProjects + " project";
		if (_totalProjects > 1) {
			text += "s";
		}
		if (_outOfDateProjects == 0) {
			text += ", all update date.";
		} else {
			text += ", " + _outOfDateProjects + " with updates";
		}
		_progressLabel.text = text;
		_progressBar.visible = false;
		_progressSpacer.visible = true;
		_progressButton.disabled = false;
		_needToExit = null;
		_isComplete = true;
	}
}