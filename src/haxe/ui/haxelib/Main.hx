package haxe.ui.haxelib;

import haxe.ui.toolkit.controls.popups.Popup;
import haxe.ui.toolkit.core.Root;
import haxe.ui.toolkit.core.Toolkit;
import haxe.ui.toolkit.themes.GradientTheme;

class Main {
	public static function main() {
		Toolkit.defaultTransition = "none";
		Toolkit.theme = new GradientTheme();
		Toolkit.init();
		Toolkit.openFullscreen(function(root:Root) {
			root.addChild(new MainController().view);
			/*
			trace(HaxeLibManager.instance.queryUser("ianharrigan"));
			trace(HaxeLibManager.instance.queryProject("haxeui"));
			trace(HaxeLibManager.instance.listLocalProjects());
			*/
		});
	}
}
