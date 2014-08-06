package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if (flash || js)
import openfl.display.Loader;
import openfl.events.Event;
import openfl.net.URLLoader;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		path.set ("styles/default/circle.png", "styles/default/circle.png");
		type.set ("styles/default/circle.png", AssetType.IMAGE);
		path.set ("styles/default/collapse.png", "styles/default/collapse.png");
		type.set ("styles/default/collapse.png", AssetType.IMAGE);
		path.set ("styles/default/cross.png", "styles/default/cross.png");
		type.set ("styles/default/cross.png", AssetType.IMAGE);
		path.set ("styles/default/expand.png", "styles/default/expand.png");
		type.set ("styles/default/expand.png", AssetType.IMAGE);
		path.set ("styles/default/up_down.png", "styles/default/up_down.png");
		type.set ("styles/default/up_down.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_down.png", "styles/gradient/arrow_down.png");
		type.set ("styles/gradient/arrow_down.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_down_dark.png", "styles/gradient/arrow_down_dark.png");
		type.set ("styles/gradient/arrow_down_dark.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_down_disabled.png", "styles/gradient/arrow_down_disabled.png");
		type.set ("styles/gradient/arrow_down_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_left.png", "styles/gradient/arrow_left.png");
		type.set ("styles/gradient/arrow_left.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_left_disabled.png", "styles/gradient/arrow_left_disabled.png");
		type.set ("styles/gradient/arrow_left_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_right.png", "styles/gradient/arrow_right.png");
		type.set ("styles/gradient/arrow_right.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_right2.png", "styles/gradient/arrow_right2.png");
		type.set ("styles/gradient/arrow_right2.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_right_dark.png", "styles/gradient/arrow_right_dark.png");
		type.set ("styles/gradient/arrow_right_dark.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_right_disabled.png", "styles/gradient/arrow_right_disabled.png");
		type.set ("styles/gradient/arrow_right_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_up.png", "styles/gradient/arrow_up.png");
		type.set ("styles/gradient/arrow_up.png", AssetType.IMAGE);
		path.set ("styles/gradient/arrow_up_disabled.png", "styles/gradient/arrow_up_disabled.png");
		type.set ("styles/gradient/arrow_up_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/circle_dark.png", "styles/gradient/circle_dark.png");
		type.set ("styles/gradient/circle_dark.png", AssetType.IMAGE);
		path.set ("styles/gradient/cross_dark.png", "styles/gradient/cross_dark.png");
		type.set ("styles/gradient/cross_dark.png", AssetType.IMAGE);
		path.set ("styles/gradient/cross_dark_disabled.png", "styles/gradient/cross_dark_disabled.png");
		type.set ("styles/gradient/cross_dark_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/gradient.css", "styles/gradient/gradient.css");
		type.set ("styles/gradient/gradient.css", AssetType.TEXT);
		path.set ("styles/gradient/gradient.min.css", "styles/gradient/gradient.min.css");
		type.set ("styles/gradient/gradient.min.css", AssetType.TEXT);
		path.set ("styles/gradient/gradient_mobile.css", "styles/gradient/gradient_mobile.css");
		type.set ("styles/gradient/gradient_mobile.css", AssetType.TEXT);
		path.set ("styles/gradient/gradient_mobile.min.css", "styles/gradient/gradient_mobile.min.css");
		type.set ("styles/gradient/gradient_mobile.min.css", AssetType.TEXT);
		path.set ("styles/gradient/gripper_horizontal.png", "styles/gradient/gripper_horizontal.png");
		type.set ("styles/gradient/gripper_horizontal.png", AssetType.IMAGE);
		path.set ("styles/gradient/gripper_horizontal_disabled.png", "styles/gradient/gripper_horizontal_disabled.png");
		type.set ("styles/gradient/gripper_horizontal_disabled.png", AssetType.IMAGE);
		path.set ("styles/gradient/gripper_vertical.png", "styles/gradient/gripper_vertical.png");
		type.set ("styles/gradient/gripper_vertical.png", AssetType.IMAGE);
		path.set ("styles/gradient/gripper_vertical_disabled.png", "styles/gradient/gripper_vertical_disabled.png");
		type.set ("styles/gradient/gripper_vertical_disabled.png", AssetType.IMAGE);
		path.set ("styles/windows/accordion.css", "styles/windows/accordion.css");
		type.set ("styles/windows/accordion.css", AssetType.TEXT);
		path.set ("styles/windows/accordion.min.css", "styles/windows/accordion.min.css");
		type.set ("styles/windows/accordion.min.css", AssetType.TEXT);
		path.set ("styles/windows/button.png", "styles/windows/button.png");
		type.set ("styles/windows/button.png", AssetType.IMAGE);
		path.set ("styles/windows/buttons.css", "styles/windows/buttons.css");
		type.set ("styles/windows/buttons.css", AssetType.TEXT);
		path.set ("styles/windows/buttons.min.css", "styles/windows/buttons.min.css");
		type.set ("styles/windows/buttons.min.css", AssetType.TEXT);
		path.set ("styles/windows/calendar.css", "styles/windows/calendar.css");
		type.set ("styles/windows/calendar.css", AssetType.TEXT);
		path.set ("styles/windows/checkbox.png", "styles/windows/checkbox.png");
		type.set ("styles/windows/checkbox.png", AssetType.IMAGE);
		path.set ("styles/windows/container.png", "styles/windows/container.png");
		type.set ("styles/windows/container.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/down_arrow.png", "styles/windows/glyphs/down_arrow.png");
		type.set ("styles/windows/glyphs/down_arrow.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", "styles/windows/glyphs/hscroll_thumb_gripper_down.png");
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_down.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", "styles/windows/glyphs/hscroll_thumb_gripper_over.png");
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_over.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", "styles/windows/glyphs/hscroll_thumb_gripper_up.png");
		type.set ("styles/windows/glyphs/hscroll_thumb_gripper_up.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/left_arrow.png", "styles/windows/glyphs/left_arrow.png");
		type.set ("styles/windows/glyphs/left_arrow.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/right_arrow.png", "styles/windows/glyphs/right_arrow.png");
		type.set ("styles/windows/glyphs/right_arrow.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/up_arrow.png", "styles/windows/glyphs/up_arrow.png");
		type.set ("styles/windows/glyphs/up_arrow.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", "styles/windows/glyphs/vscroll_thumb_gripper_down.png");
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_down.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", "styles/windows/glyphs/vscroll_thumb_gripper_over.png");
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_over.png", AssetType.IMAGE);
		path.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", "styles/windows/glyphs/vscroll_thumb_gripper_up.png");
		type.set ("styles/windows/glyphs/vscroll_thumb_gripper_up.png", AssetType.IMAGE);
		path.set ("styles/windows/hprogress.png", "styles/windows/hprogress.png");
		type.set ("styles/windows/hprogress.png", AssetType.IMAGE);
		path.set ("styles/windows/hscroll.png", "styles/windows/hscroll.png");
		type.set ("styles/windows/hscroll.png", AssetType.IMAGE);
		path.set ("styles/windows/listview.css", "styles/windows/listview.css");
		type.set ("styles/windows/listview.css", AssetType.TEXT);
		path.set ("styles/windows/listview.min.css", "styles/windows/listview.min.css");
		type.set ("styles/windows/listview.min.css", AssetType.TEXT);
		path.set ("styles/windows/listview.png", "styles/windows/listview.png");
		type.set ("styles/windows/listview.png", AssetType.IMAGE);
		path.set ("styles/windows/menus.css", "styles/windows/menus.css");
		type.set ("styles/windows/menus.css", AssetType.TEXT);
		path.set ("styles/windows/optionbox.png", "styles/windows/optionbox.png");
		type.set ("styles/windows/optionbox.png", AssetType.IMAGE);
		path.set ("styles/windows/popup.png", "styles/windows/popup.png");
		type.set ("styles/windows/popup.png", AssetType.IMAGE);
		path.set ("styles/windows/popups.css", "styles/windows/popups.css");
		type.set ("styles/windows/popups.css", AssetType.TEXT);
		path.set ("styles/windows/rtf.css", "styles/windows/rtf.css");
		type.set ("styles/windows/rtf.css", AssetType.TEXT);
		path.set ("styles/windows/scrolls.css", "styles/windows/scrolls.css");
		type.set ("styles/windows/scrolls.css", AssetType.TEXT);
		path.set ("styles/windows/scrolls.min.css", "styles/windows/scrolls.min.css");
		type.set ("styles/windows/scrolls.min.css", AssetType.TEXT);
		path.set ("styles/windows/sliders.css", "styles/windows/sliders.css");
		type.set ("styles/windows/sliders.css", AssetType.TEXT);
		path.set ("styles/windows/tab.png", "styles/windows/tab.png");
		type.set ("styles/windows/tab.png", AssetType.IMAGE);
		path.set ("styles/windows/tabs.css", "styles/windows/tabs.css");
		type.set ("styles/windows/tabs.css", AssetType.TEXT);
		path.set ("styles/windows/textinput.png", "styles/windows/textinput.png");
		type.set ("styles/windows/textinput.png", AssetType.IMAGE);
		path.set ("styles/windows/vprogress.png", "styles/windows/vprogress.png");
		type.set ("styles/windows/vprogress.png", AssetType.IMAGE);
		path.set ("styles/windows/vscroll.png", "styles/windows/vscroll.png");
		type.set ("styles/windows/vscroll.png", AssetType.IMAGE);
		path.set ("styles/windows/windows.css", "styles/windows/windows.css");
		type.set ("styles/windows/windows.css", AssetType.TEXT);
		path.set ("img/slinky_small.jpg", "img/slinky_small.jpg");
		type.set ("img/slinky_small.jpg", AssetType.IMAGE);
		path.set ("img/slinky_tiny.jpg", "img/slinky_tiny.jpg");
		type.set ("img/slinky_tiny.jpg", AssetType.IMAGE);
		path.set ("fonts/Oxygen-Bold.ttf", "fonts/Oxygen-Bold.ttf");
		type.set ("fonts/Oxygen-Bold.ttf", AssetType.FONT);
		path.set ("fonts/Oxygen.ttf", "fonts/Oxygen.ttf");
		type.set ("fonts/Oxygen.ttf", AssetType.FONT);
		path.set ("assets/application-default-icon.svg", "assets/application-default-icon.svg");
		type.set ("assets/application-default-icon.svg", AssetType.TEXT);
		path.set ("assets/img/arrow-090-small.png", "assets/img/arrow-090-small.png");
		type.set ("assets/img/arrow-090-small.png", AssetType.IMAGE);
		path.set ("assets/img/arrow-090.png", "assets/img/arrow-090.png");
		type.set ("assets/img/arrow-090.png", AssetType.IMAGE);
		path.set ("assets/img/arrow-180-small.png", "assets/img/arrow-180-small.png");
		type.set ("assets/img/arrow-180-small.png", AssetType.IMAGE);
		path.set ("assets/img/arrow-180.png", "assets/img/arrow-180.png");
		type.set ("assets/img/arrow-180.png", AssetType.IMAGE);
		path.set ("assets/img/arrow-270-small.png", "assets/img/arrow-270-small.png");
		type.set ("assets/img/arrow-270-small.png", AssetType.IMAGE);
		path.set ("assets/img/arrow-270.png", "assets/img/arrow-270.png");
		type.set ("assets/img/arrow-270.png", AssetType.IMAGE);
		path.set ("assets/img/arrow-small.png", "assets/img/arrow-small.png");
		type.set ("assets/img/arrow-small.png", AssetType.IMAGE);
		path.set ("assets/img/arrow.png", "assets/img/arrow.png");
		type.set ("assets/img/arrow.png", AssetType.IMAGE);
		path.set ("assets/img/blue-folder-horizontal-exclamation-disabled.png", "assets/img/blue-folder-horizontal-exclamation-disabled.png");
		type.set ("assets/img/blue-folder-horizontal-exclamation-disabled.png", AssetType.IMAGE);
		path.set ("assets/img/blue-folder-horizontal-exclamation.png", "assets/img/blue-folder-horizontal-exclamation.png");
		type.set ("assets/img/blue-folder-horizontal-exclamation.png", AssetType.IMAGE);
		path.set ("assets/img/blue-folder-horizontal-tick-disabled.png", "assets/img/blue-folder-horizontal-tick-disabled.png");
		type.set ("assets/img/blue-folder-horizontal-tick-disabled.png", AssetType.IMAGE);
		path.set ("assets/img/blue-folder-horizontal-tick.png", "assets/img/blue-folder-horizontal-tick.png");
		type.set ("assets/img/blue-folder-horizontal-tick.png", AssetType.IMAGE);
		path.set ("assets/img/blue-folder-horizontal.png", "assets/img/blue-folder-horizontal.png");
		type.set ("assets/img/blue-folder-horizontal.png", AssetType.IMAGE);
		path.set ("assets/img/blue-folder.png", "assets/img/blue-folder.png");
		type.set ("assets/img/blue-folder.png", AssetType.IMAGE);
		path.set ("assets/img/exclamation-disabled.png", "assets/img/exclamation-disabled.png");
		type.set ("assets/img/exclamation-disabled.png", AssetType.IMAGE);
		path.set ("assets/img/exclamation-small.png", "assets/img/exclamation-small.png");
		type.set ("assets/img/exclamation-small.png", AssetType.IMAGE);
		path.set ("assets/img/exclamation.png", "assets/img/exclamation.png");
		type.set ("assets/img/exclamation.png", AssetType.IMAGE);
		path.set ("assets/img/folder-disabled.png", "assets/img/folder-disabled.png");
		type.set ("assets/img/folder-disabled.png", AssetType.IMAGE);
		path.set ("assets/img/folder-horizontal.png", "assets/img/folder-horizontal.png");
		type.set ("assets/img/folder-horizontal.png", AssetType.IMAGE);
		path.set ("assets/img/folder.png", "assets/img/folder.png");
		type.set ("assets/img/folder.png", AssetType.IMAGE);
		path.set ("assets/img/information.png", "assets/img/information.png");
		type.set ("assets/img/information.png", AssetType.IMAGE);
		path.set ("assets/img/pencil-disabled.png", "assets/img/pencil-disabled.png");
		type.set ("assets/img/pencil-disabled.png", AssetType.IMAGE);
		path.set ("assets/img/pencil.png", "assets/img/pencil.png");
		type.set ("assets/img/pencil.png", AssetType.IMAGE);
		path.set ("assets/img/user-silhouette-question.png", "assets/img/user-silhouette-question.png");
		type.set ("assets/img/user-silhouette-question.png", AssetType.IMAGE);
		path.set ("assets/img/user-silhouette.png", "assets/img/user-silhouette.png");
		type.set ("assets/img/user-silhouette.png", AssetType.IMAGE);
		path.set ("assets/ui/main.xml", "assets/ui/main.xml");
		type.set ("assets/ui/main.xml", AssetType.TEXT);
		path.set ("assets/ui/popups/login.xml", "assets/ui/popups/login.xml");
		type.set ("assets/ui/popups/login.xml", AssetType.TEXT);
		path.set ("assets/ui/popups/manage-local-project.xml", "assets/ui/popups/manage-local-project.xml");
		type.set ("assets/ui/popups/manage-local-project.xml", AssetType.TEXT);
		path.set ("assets/ui/popups/not-implemented.xml", "assets/ui/popups/not-implemented.xml");
		type.set ("assets/ui/popups/not-implemented.xml", AssetType.TEXT);
		path.set ("assets/ui/popups/query-user.xml", "assets/ui/popups/query-user.xml");
		type.set ("assets/ui/popups/query-user.xml", AssetType.TEXT);
		path.set ("img/arrow-090-small.png", "img/arrow-090-small.png");
		type.set ("img/arrow-090-small.png", AssetType.IMAGE);
		path.set ("img/arrow-090.png", "img/arrow-090.png");
		type.set ("img/arrow-090.png", AssetType.IMAGE);
		path.set ("img/arrow-180-small.png", "img/arrow-180-small.png");
		type.set ("img/arrow-180-small.png", AssetType.IMAGE);
		path.set ("img/arrow-180.png", "img/arrow-180.png");
		type.set ("img/arrow-180.png", AssetType.IMAGE);
		path.set ("img/arrow-270-small.png", "img/arrow-270-small.png");
		type.set ("img/arrow-270-small.png", AssetType.IMAGE);
		path.set ("img/arrow-270.png", "img/arrow-270.png");
		type.set ("img/arrow-270.png", AssetType.IMAGE);
		path.set ("img/arrow-small.png", "img/arrow-small.png");
		type.set ("img/arrow-small.png", AssetType.IMAGE);
		path.set ("img/arrow.png", "img/arrow.png");
		type.set ("img/arrow.png", AssetType.IMAGE);
		path.set ("img/blue-folder-horizontal-exclamation-disabled.png", "img/blue-folder-horizontal-exclamation-disabled.png");
		type.set ("img/blue-folder-horizontal-exclamation-disabled.png", AssetType.IMAGE);
		path.set ("img/blue-folder-horizontal-exclamation.png", "img/blue-folder-horizontal-exclamation.png");
		type.set ("img/blue-folder-horizontal-exclamation.png", AssetType.IMAGE);
		path.set ("img/blue-folder-horizontal-tick-disabled.png", "img/blue-folder-horizontal-tick-disabled.png");
		type.set ("img/blue-folder-horizontal-tick-disabled.png", AssetType.IMAGE);
		path.set ("img/blue-folder-horizontal-tick.png", "img/blue-folder-horizontal-tick.png");
		type.set ("img/blue-folder-horizontal-tick.png", AssetType.IMAGE);
		path.set ("img/blue-folder-horizontal.png", "img/blue-folder-horizontal.png");
		type.set ("img/blue-folder-horizontal.png", AssetType.IMAGE);
		path.set ("img/blue-folder.png", "img/blue-folder.png");
		type.set ("img/blue-folder.png", AssetType.IMAGE);
		path.set ("img/exclamation-disabled.png", "img/exclamation-disabled.png");
		type.set ("img/exclamation-disabled.png", AssetType.IMAGE);
		path.set ("img/exclamation-small.png", "img/exclamation-small.png");
		type.set ("img/exclamation-small.png", AssetType.IMAGE);
		path.set ("img/exclamation.png", "img/exclamation.png");
		type.set ("img/exclamation.png", AssetType.IMAGE);
		path.set ("img/folder-disabled.png", "img/folder-disabled.png");
		type.set ("img/folder-disabled.png", AssetType.IMAGE);
		path.set ("img/folder-horizontal.png", "img/folder-horizontal.png");
		type.set ("img/folder-horizontal.png", AssetType.IMAGE);
		path.set ("img/folder.png", "img/folder.png");
		type.set ("img/folder.png", AssetType.IMAGE);
		path.set ("img/information.png", "img/information.png");
		type.set ("img/information.png", AssetType.IMAGE);
		path.set ("img/pencil-disabled.png", "img/pencil-disabled.png");
		type.set ("img/pencil-disabled.png", AssetType.IMAGE);
		path.set ("img/pencil.png", "img/pencil.png");
		type.set ("img/pencil.png", AssetType.IMAGE);
		path.set ("img/user-silhouette-question.png", "img/user-silhouette-question.png");
		type.set ("img/user-silhouette-question.png", AssetType.IMAGE);
		path.set ("img/user-silhouette.png", "img/user-silhouette.png");
		type.set ("img/user-silhouette.png", AssetType.IMAGE);
		path.set ("ui/main.xml", "ui/main.xml");
		type.set ("ui/main.xml", AssetType.TEXT);
		path.set ("ui/popups/login.xml", "ui/popups/login.xml");
		type.set ("ui/popups/login.xml", AssetType.TEXT);
		path.set ("ui/popups/manage-local-project.xml", "ui/popups/manage-local-project.xml");
		type.set ("ui/popups/manage-local-project.xml", AssetType.TEXT);
		path.set ("ui/popups/not-implemented.xml", "ui/popups/not-implemented.xml");
		type.set ("ui/popups/not-implemented.xml", AssetType.TEXT);
		path.set ("ui/popups/query-user.xml", "ui/popups/query-user.xml");
		type.set ("ui/popups/query-user.xml", AssetType.TEXT);
		
		
		#elseif html5
		
		var id;
		
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);

		#elseif (js || openfl_html5 || pixi)
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash




































































































































#elseif html5



































































@:keep class __ASSET__fonts_oxygen_bold_ttf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "fonts/Oxygen-Bold.ttf"; } #end }
@:keep class __ASSET__fonts_oxygen_ttf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "fonts/Oxygen.ttf"; } #end }































































#elseif (windows || mac || linux)




#end
