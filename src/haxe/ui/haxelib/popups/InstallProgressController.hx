package haxe.ui.haxelib.popups;

import haxe.ui.haxelib.UIManager.DownloadProgressEvent;
import haxe.ui.haxelib.UIManager.InstallationCompleteEvent;
import haxe.ui.toolkit.controls.popups.Popup;
import haxe.ui.toolkit.core.PopupManager.PopupButton;
import haxe.ui.toolkit.core.XMLController;

@:build(haxe.ui.toolkit.core.Macros.buildController("assets/ui/popups/install-progress.xml"))
class InstallProgressController extends XMLController {
	private var _projectName:String;
	private var _projectVersion:String;
	public function new(project:String, version:String) {
		_projectName = project;
		_projectVersion = version;
		UIManager.instance.addListener(UIManager.DOWNLOAD_PROGRESS, onProgress);
		UIManager.instance.addListener(UIManager.INSTALLATION_COMPLETE, onComplete);

		close.onClick = function(e) {
			cast(view.parent.parent, Popup).clickButton(PopupButton.CLOSE);
		};
		
		footer.text = "Downloading...";
		HaxeLibManager.instance.installRemoteProjectAsync(project, version);
	}
	
	
	private function onProgress(event:DownloadProgressEvent):Void {
		// TODO: updating the text crashes it!
		if (event.max != 0) {
			progress.max = event.max;
			progress.pos = event.cur;
			footer.text = event.cur + "/" + event.max + " (" + Std.int((event.cur * 100.0) / event.max) + "%)";
		} else {
			footer.text = event.cur + " bytes";
		}
		
		
		if (event.cur == event.max) {
			footer.text = ("Download complete : " + event.cur + " bytes in " + event.time+"s (" + event.speed + "KB/s)\n");
			buttonBar.visible = true;
		}
	}
	
	private function onComplete(event:InstallationCompleteEvent):Void {
		header.text = "Installation complete";
	}
}
