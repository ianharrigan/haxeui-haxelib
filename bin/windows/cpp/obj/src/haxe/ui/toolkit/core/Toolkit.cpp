#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Menu
#include <haxe/ui/toolkit/controls/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#include <haxe/ui/toolkit/core/ClassManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_RootManager
#include <haxe/ui/toolkit/core/RootManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_DataProcessor
#include <haxe/ui/toolkit/core/xml/DataProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_StyleProcessor
#include <haxe/ui/toolkit/core/xml/StyleProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_UIProcessor
#include <haxe/ui/toolkit/core/xml/UIProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ClientWrapper
#include <haxe/ui/toolkit/hscript/ClientWrapper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_DefaultStyles
#include <haxe/ui/toolkit/style/DefaultStyles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_DefaultTheme
#include <haxe/ui/toolkit/themes/DefaultTheme.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Toolkit_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","new",0xcf7551c3,"haxe.ui.toolkit.core.Toolkit.new","haxe/ui/toolkit/core/Toolkit.hx",211,0xd65388cd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(211)
	this->initInstance();
}
;
	return null();
}

//Toolkit_obj::~Toolkit_obj() { }

Dynamic Toolkit_obj::__CreateEmpty() { return  new Toolkit_obj; }
hx::ObjectPtr< Toolkit_obj > Toolkit_obj::__new()
{  hx::ObjectPtr< Toolkit_obj > result = new Toolkit_obj();
	result->__construct();
	return result;}

Dynamic Toolkit_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Toolkit_obj > result = new Toolkit_obj();
	result->__construct();
	return result;}

Void Toolkit_obj::initInstance( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","initInstance",0xa68a6102,"haxe.ui.toolkit.core.Toolkit.initInstance","haxe/ui/toolkit/core/Toolkit.hx",216,0xd65388cd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(216)
		::haxe::ui::toolkit::core::ClassManager_obj::get_instance();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,initInstance,(void))

::haxe::ui::toolkit::core::Toolkit Toolkit_obj::_instance;

::haxe::ui::toolkit::core::Toolkit Toolkit_obj::instance;

::haxe::ui::toolkit::core::Toolkit Toolkit_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_instance",0xb6ed8ddb,"haxe.ui.toolkit.core.Toolkit.get_instance","haxe/ui/toolkit/core/Toolkit.hx",23,0xd65388cd)
	HX_STACK_LINE(24)
	if (((::haxe::ui::toolkit::core::Toolkit_obj::_instance == null()))){
		HX_STACK_LINE(25)
		::openfl::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(26)
		::openfl::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(27)
		::haxe::ui::toolkit::core::Toolkit _g = ::haxe::ui::toolkit::core::Toolkit_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(27)
		::haxe::ui::toolkit::core::Toolkit_obj::_instance = _g;
	}
	HX_STACK_LINE(29)
	return ::haxe::ui::toolkit::core::Toolkit_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_instance,return )

Void Toolkit_obj::init( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","init",0xb3eaf04d,"haxe.ui.toolkit.core.Toolkit.init","haxe/ui/toolkit/core/Toolkit.hx",32,0xd65388cd)
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.ScrollView"),HX_CSTRING("scrollview"));
			HX_STACK_LINE(41)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.VSlider"),HX_CSTRING("vslider"));
			HX_STACK_LINE(44)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Text"),HX_CSTRING("text"));
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.CalendarDay"),HX_CSTRING("calendarday"));
			HX_STACK_LINE(50)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.VProgress"),HX_CSTRING("vprogress"));
			HX_STACK_LINE(56)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.ContinuousVBox"),HX_CSTRING("continuousvbox"));
			HX_STACK_LINE(65)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.TextInput"),HX_CSTRING("textinput"));
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.Absolute"),HX_CSTRING("absolute"));
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.TabBar"),HX_CSTRING("tabbar"));
			HX_STACK_LINE(73)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Image"),HX_CSTRING("image"));
			HX_STACK_LINE(75)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.ListView"),HX_CSTRING("listview"));
			HX_STACK_LINE(77)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.OptionBoxValue"),HX_CSTRING("optionboxvalue"));
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.VBox"),HX_CSTRING("vbox"));
			HX_STACK_LINE(81)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.HSlider"),HX_CSTRING("hslider"));
			HX_STACK_LINE(82)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Menu"),HX_CSTRING("menu"));
			HX_STACK_LINE(84)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.ContinuousHBox"),HX_CSTRING("continuoushbox"));
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.core.renderers.ComponentItemRenderer"),HX_CSTRING("componentitemrenderer"));
			HX_STACK_LINE(95)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.core.renderers.ItemRenderer"),HX_CSTRING("itemrenderer"));
			HX_STACK_LINE(101)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.TableView"),HX_CSTRING("tableview"));
			HX_STACK_LINE(106)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.core.Component"),HX_CSTRING("component"));
			HX_STACK_LINE(110)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.HBox"),HX_CSTRING("hbox"));
			HX_STACK_LINE(112)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.MenuItem"),HX_CSTRING("menuitem"));
			HX_STACK_LINE(115)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.Container"),HX_CSTRING("container"));
			HX_STACK_LINE(121)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.CheckBox"),HX_CSTRING("checkbox"));
			HX_STACK_LINE(124)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Spacer"),HX_CSTRING("spacer"));
			HX_STACK_LINE(126)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.TableViewRow"),HX_CSTRING("tableviewrow"));
			HX_STACK_LINE(131)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.VScroll"),HX_CSTRING("vscroll"));
			HX_STACK_LINE(134)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.core.DisplayObject"),HX_CSTRING("displayobject"));
			HX_STACK_LINE(137)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.OptionBox"),HX_CSTRING("optionbox"));
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.MenuBar"),HX_CSTRING("menubar"));
			HX_STACK_LINE(143)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Value"),HX_CSTRING("value"));
			HX_STACK_LINE(146)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.core.Root"),HX_CSTRING("root"));
			HX_STACK_LINE(150)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.core.DisplayObjectContainer"),HX_CSTRING("displayobjectcontainer"));
			HX_STACK_LINE(153)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.Box"),HX_CSTRING("box"));
			HX_STACK_LINE(159)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.CheckBoxValue"),HX_CSTRING("checkboxvalue"));
			HX_STACK_LINE(162)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.HScroll"),HX_CSTRING("hscroll"));
			HX_STACK_LINE(165)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.HProgress"),HX_CSTRING("hprogress"));
			HX_STACK_LINE(168)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.core.StyleableDisplayObject"),HX_CSTRING("styleabledisplayobject"));
			HX_STACK_LINE(174)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.AccordionButton"),HX_CSTRING("accordionbutton"));
			HX_STACK_LINE(176)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.Grid"),HX_CSTRING("grid"));
			HX_STACK_LINE(179)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.Stack"),HX_CSTRING("stack"));
			HX_STACK_LINE(182)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.TabView"),HX_CSTRING("tabview"));
			HX_STACK_LINE(187)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Progress"),HX_CSTRING("progress"));
			HX_STACK_LINE(191)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.ExpandablePanel"),HX_CSTRING("expandablepanel"));
			HX_STACK_LINE(193)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Slider"),HX_CSTRING("slider"));
			HX_STACK_LINE(199)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.MenuButton"),HX_CSTRING("menubutton"));
			HX_STACK_LINE(201)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.selection.ListSelector"),HX_CSTRING("listselector"));
			HX_STACK_LINE(207)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.Accordion"),HX_CSTRING("accordion"));
			HX_STACK_LINE(209)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Button"),HX_CSTRING("button"));
			HX_STACK_LINE(210)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Scroll"),HX_CSTRING("scroll"));
			HX_STACK_LINE(216)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.selection.DropDownList"),HX_CSTRING("dropdownlist"));
			HX_STACK_LINE(220)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.core.renderers.BasicItemRenderer"),HX_CSTRING("basicitemrenderer"));
			HX_STACK_LINE(224)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.CalendarView"),HX_CSTRING("calendarview"));
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.containers.ExpandableButton"),HX_CSTRING("expandablebutton"));
			HX_STACK_LINE(231)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.Calendar"),HX_CSTRING("calendar"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.controls.selection.DateSelector"),HX_CSTRING("dateselector"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerComponentClassName(HX_CSTRING("haxe.ui.toolkit.core.StateComponent"),HX_CSTRING("statecomponent"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerDataSourceClassName(HX_CSTRING("haxe.ui.toolkit.data.ArrayDataSource"),HX_CSTRING("array"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerDataSourceClassName(HX_CSTRING("haxe.ui.toolkit.data.XMLDataSource"),HX_CSTRING("xml"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerDataSourceClassName(HX_CSTRING("haxe.ui.toolkit.data.JSONDataSource"),HX_CSTRING("json"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerDataSourceClassName(HX_CSTRING("haxe.ui.toolkit.data.FilesDataSource"),HX_CSTRING("files"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->registerDataSourceClassName(HX_CSTRING("haxe.ui.toolkit.data.MySQLDataSource"),HX_CSTRING("mysql"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("gradient"),HX_CSTRING("styles/gradient/gradient.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("default"),hx::ClassOf< ::haxe::ui::toolkit::style::DefaultStyles >());
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("gradient_mobile"),HX_CSTRING("styles/gradient/gradient_mobile.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/windows.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/buttons.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/tabs.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/listview.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/scrolls.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/sliders.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/accordion.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/rtf.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/calendar.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/popups.css"));
			HX_STACK_LINE(236)
			::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("windows"),HX_CSTRING("styles/windows/menus.css"));
		}
		HX_STACK_LINE(38)
		::haxe::ui::toolkit::core::Toolkit_obj::get_instance();
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::UIProcessor >(),HX_CSTRING("ui"));
		HX_STACK_LINE(40)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::UIProcessor >(),HX_CSTRING("selection"));
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::StyleProcessor >(),HX_CSTRING("style"));
		HX_STACK_LINE(42)
		::haxe::ui::toolkit::core::Toolkit_obj::registerXMLProcessor(hx::ClassOf< ::haxe::ui::toolkit::core::xml::DataProcessor >(),HX_CSTRING("data"));
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Toolkit.hx",44,0xd65388cd)
				{
					HX_STACK_LINE(44)
					::String _g = ::Type_obj::getClassName(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(44)
					::String _g1 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister->get(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(44)
					return (_g1 == null());
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		if (((  (((bool((::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition != HX_CSTRING("none"))) && bool((::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister != null()))))) ? bool(_Function_1_1::Block()) : bool(false) ))){
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::core::Toolkit_obj::setTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >(),HX_CSTRING("fade"));
		}
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::themes::Theme t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(49)
		if ((::Std_obj::is(::haxe::ui::toolkit::core::Toolkit_obj::theme,hx::ClassOf< ::haxe::ui::toolkit::themes::Theme >()))){
			HX_STACK_LINE(50)
			t = ::haxe::ui::toolkit::core::Toolkit_obj::theme;
		}
		else{
			HX_STACK_LINE(51)
			if ((::Std_obj::is(::haxe::ui::toolkit::core::Toolkit_obj::theme,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(52)
				::haxe::ui::toolkit::themes::Theme _g2 = ::haxe::ui::toolkit::themes::Theme_obj::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(52)
				t = _g2;
				HX_STACK_LINE(53)
				t->name = ::haxe::ui::toolkit::core::Toolkit_obj::theme;
			}
		}
		HX_STACK_LINE(56)
		if (((bool((t == null())) && bool((::haxe::ui::toolkit::core::Toolkit_obj::useDefaultTheme == true))))){
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::themes::DefaultTheme _g3 = ::haxe::ui::toolkit::themes::DefaultTheme_obj::__new();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(57)
			t = _g3;
		}
		HX_STACK_LINE(60)
		if (((t != null()))){
			HX_STACK_LINE(61)
			t->apply();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,init,(void))

::haxe::ds::StringMap Toolkit_obj::_registeredProcessors;

Void Toolkit_obj::registerXMLProcessor( ::Class cls,::String prefix){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","registerXMLProcessor",0x096212bb,"haxe.ui.toolkit.core.Toolkit.registerXMLProcessor","haxe/ui/toolkit/core/Toolkit.hx",66,0xd65388cd)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(prefix,"prefix")
		HX_STACK_LINE(67)
		if (((::haxe::ui::toolkit::core::Toolkit_obj::_registeredProcessors == null()))){
			HX_STACK_LINE(68)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::core::Toolkit_obj::_registeredProcessors = _g;
		}
		HX_STACK_LINE(70)
		::String _g1 = ::Type_obj::getClassName(cls);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		::haxe::ui::toolkit::core::Toolkit_obj::_registeredProcessors->set(prefix,_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,registerXMLProcessor,(void))

bool Toolkit_obj::useDefaultTheme;

Dynamic Toolkit_obj::theme;

Dynamic Toolkit_obj::processXmlResource( ::String resourceId){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","processXmlResource",0xc500f993,"haxe.ui.toolkit.core.Toolkit.processXmlResource","haxe/ui/toolkit/core/Toolkit.hx",83,0xd65388cd)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_LINE(84)
	::Xml _g = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getXML(resourceId,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(84)
	return ::haxe::ui::toolkit::core::Toolkit_obj::processXml(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,processXmlResource,return )

Dynamic Toolkit_obj::processXml( ::Xml xml){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","processXml",0x282b33a5,"haxe.ui.toolkit.core.Toolkit.processXml","haxe/ui/toolkit/core/Toolkit.hx",87,0xd65388cd)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(88)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(90)
	::Xml _g = xml->firstElement();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(90)
	Dynamic _g1 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlNode(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(90)
	result = _g1;
	HX_STACK_LINE(92)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,processXml,return )

Dynamic Toolkit_obj::processXmlNode( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","processXmlNode",0xbe41a047,"haxe.ui.toolkit.core.Toolkit.processXmlNode","haxe/ui/toolkit/core/Toolkit.hx",95,0xd65388cd)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(96)
	if (((node == null()))){
		HX_STACK_LINE(97)
		return null();
	}
	HX_STACK_LINE(100)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(101)
	::String nodeName = node->get_nodeName();		HX_STACK_VAR(nodeName,"nodeName");
	HX_STACK_LINE(102)
	int n = nodeName.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(103)
	if (((n != (int)-1))){
		HX_STACK_LINE(104)
		::String _g = nodeName.substr((n + (int)1),nodeName.length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		nodeName = _g;
	}
	HX_STACK_LINE(106)
	::String _g1 = nodeName.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(106)
	nodeName = _g1;
	HX_STACK_LINE(108)
	::String condition = node->get(HX_CSTRING("condition"));		HX_STACK_VAR(condition,"condition");
	HX_STACK_LINE(109)
	if (((condition != null()))){
		HX_STACK_LINE(110)
		::hscript::Parser parser = ::hscript::Parser_obj::__new();		HX_STACK_VAR(parser,"parser");
		HX_STACK_LINE(111)
		::hscript::Expr program = parser->parseString(condition);		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(112)
		::hscript::Interp interp = ::hscript::Interp_obj::__new();		HX_STACK_VAR(interp,"interp");
		HX_STACK_LINE(113)
		::haxe::ui::toolkit::hscript::ClientWrapper clientWrapper = ::haxe::ui::toolkit::hscript::ClientWrapper_obj::__new();		HX_STACK_VAR(clientWrapper,"clientWrapper");
		HX_STACK_LINE(114)
		interp->variables->set(HX_CSTRING("Client"),clientWrapper);
		HX_STACK_LINE(115)
		bool conditionResult = interp->execute(program);		HX_STACK_VAR(conditionResult,"conditionResult");
		HX_STACK_LINE(116)
		if (((conditionResult == false))){
			HX_STACK_LINE(117)
			return null();
		}
	}
	HX_STACK_LINE(121)
	if (((nodeName == HX_CSTRING("import")))){
		HX_STACK_LINE(122)
		::String importResource = node->get(HX_CSTRING("resource"));		HX_STACK_VAR(importResource,"importResource");
		HX_STACK_LINE(123)
		if (((importResource != null()))){
			HX_STACK_LINE(124)
			::String importData = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(importResource,null());		HX_STACK_VAR(importData,"importData");
			HX_STACK_LINE(125)
			if (((importData != null()))){
				HX_STACK_LINE(126)
				::Xml importXml = ::Xml_obj::parse(importData);		HX_STACK_VAR(importXml,"importXml");
				HX_STACK_LINE(127)
				return ::haxe::ui::toolkit::core::Toolkit_obj::processXml(importXml);
			}
		}
	}
	else{
		HX_STACK_LINE(130)
		if (((nodeName == HX_CSTRING("script")))){
			HX_STACK_LINE(131)
			::String scriptResource = node->get(HX_CSTRING("resource"));		HX_STACK_VAR(scriptResource,"scriptResource");
			HX_STACK_LINE(132)
			::String scriptData = HX_CSTRING("");		HX_STACK_VAR(scriptData,"scriptData");
			HX_STACK_LINE(133)
			if (((scriptResource != null()))){
				HX_STACK_LINE(134)
				::String _g2 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(scriptResource,null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(134)
				hx::AddEq(scriptData,_g2);
			}
			HX_STACK_LINE(136)
			::String scriptNodeData = node->firstChild()->get_nodeValue();		HX_STACK_VAR(scriptNodeData,"scriptNodeData");
			HX_STACK_LINE(137)
			if (((scriptNodeData != null()))){
				HX_STACK_LINE(138)
				::String _g3 = ::StringTools_obj::trim(scriptNodeData);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(138)
				scriptNodeData = _g3;
				HX_STACK_LINE(139)
				hx::AddEq(scriptData,(HX_CSTRING("\n\n") + scriptNodeData));
			}
			HX_STACK_LINE(141)
			::haxe::ui::toolkit::hscript::ScriptManager_obj::get_instance()->addScript(scriptData);
		}
		else{
			HX_STACK_LINE(142)
			if (((nodeName == HX_CSTRING("style")))){
				HX_STACK_LINE(143)
				::haxe::ui::toolkit::core::xml::IXMLProcessor p = ::haxe::ui::toolkit::core::xml::StyleProcessor_obj::__new();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(144)
				Dynamic _g4 = p->process(node);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(144)
				result = _g4;
			}
			else{
				HX_STACK_LINE(146)
				if ((::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->hasDataSourceClass(nodeName))){
					HX_STACK_LINE(147)
					::haxe::ui::toolkit::core::xml::IXMLProcessor p = ::haxe::ui::toolkit::core::xml::DataProcessor_obj::__new();		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(148)
					Dynamic _g5 = p->process(node);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(148)
					result = _g5;
				}
				else{
					HX_STACK_LINE(150)
					::haxe::ui::toolkit::core::xml::IXMLProcessor p = ::haxe::ui::toolkit::core::xml::UIProcessor_obj::__new();		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(151)
					Dynamic _g6 = p->process(node);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(151)
					result = _g6;
					HX_STACK_LINE(152)
					if (((result == null()))){
						HX_STACK_LINE(153)
						::haxe::Log_obj::trace(((HX_CSTRING("WARNING: Could not find processor for '") + nodeName) + HX_CSTRING("'")),hx::SourceInfo(HX_CSTRING("Toolkit.hx"),153,HX_CSTRING("haxe.ui.toolkit.core.Toolkit"),HX_CSTRING("processXmlNode")));
					}
				}
			}
		}
	}
	HX_STACK_LINE(158)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
		::Xml child = __it->next();
		{
			HX_STACK_LINE(159)
			Dynamic childResult = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlNode(child);		HX_STACK_VAR(childResult,"childResult");
			HX_STACK_LINE(161)
			if (((  ((::Std_obj::is(childResult,hx::ClassOf< ::haxe::ui::toolkit::data::IDataSource >()))) ? bool(::Std_obj::is(result,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDataComponent >())) : bool(false) ))){
				HX_STACK_LINE(162)
				::haxe::ui::toolkit::data::IDataSource _g7;		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(162)
				_g7 = hx::TCast< haxe::ui::toolkit::data::IDataSource >::cast(childResult);
				HX_STACK_LINE(162)
				(hx::TCast< haxe::ui::toolkit::core::interfaces::IDataComponent >::cast(result))->__Field(HX_CSTRING("set_dataSource"),true)(_g7);
			}
			HX_STACK_LINE(165)
			if (((  ((::Std_obj::is(childResult,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >()))) ? bool(::Std_obj::is(result,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >())) : bool(false) ))){
				HX_STACK_LINE(166)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject _g8;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(166)
				_g8 = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(childResult);
				HX_STACK_LINE(166)
				(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(result))->addChild(_g8);
			}
		}
;
	}
	HX_STACK_LINE(170)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,processXmlNode,return )

::String Toolkit_obj::_defaultTransition;

::haxe::ds::StringMap Toolkit_obj::_transitionRegister;

::String Toolkit_obj::get_defaultTransition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","get_defaultTransition",0x6463deb0,"haxe.ui.toolkit.core.Toolkit.get_defaultTransition","haxe/ui/toolkit/core/Toolkit.hx",182,0xd65388cd)
	HX_STACK_LINE(182)
	return ::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Toolkit_obj,get_defaultTransition,return )

::String Toolkit_obj::set_defaultTransition( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","set_defaultTransition",0xb86cacbc,"haxe.ui.toolkit.core.Toolkit.set_defaultTransition","haxe/ui/toolkit/core/Toolkit.hx",185,0xd65388cd)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(186)
	::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition = value;
	HX_STACK_LINE(187)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,set_defaultTransition,return )

::String Toolkit_obj::getTransitionForClass( ::Class cls){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","getTransitionForClass",0x0e947f7d,"haxe.ui.toolkit.core.Toolkit.getTransitionForClass","haxe/ui/toolkit/core/Toolkit.hx",190,0xd65388cd)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(191)
	::String s = ::haxe::ui::toolkit::core::Toolkit_obj::_defaultTransition;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(192)
	::String className = ::Type_obj::getClassName(cls);		HX_STACK_VAR(className,"className");
	struct _Function_1_1{
		inline static bool Block( ::String &className){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Toolkit.hx",193,0xd65388cd)
			{
				HX_STACK_LINE(193)
				::String _g = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister->get(className);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(193)
				return (_g != null());
			}
			return null();
		}
	};
	HX_STACK_LINE(193)
	if (((  (((::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister != null()))) ? bool(_Function_1_1::Block(className)) : bool(false) ))){
		HX_STACK_LINE(194)
		::String _g1 = ::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister->get(className);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(194)
		s = _g1;
	}
	HX_STACK_LINE(196)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,getTransitionForClass,return )

Void Toolkit_obj::setTransitionForClass( ::Class cls,::String transition){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","setTransitionForClass",0x629d4d89,"haxe.ui.toolkit.core.Toolkit.setTransitionForClass","haxe/ui/toolkit/core/Toolkit.hx",199,0xd65388cd)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(transition,"transition")
		HX_STACK_LINE(200)
		if (((::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister == null()))){
			HX_STACK_LINE(201)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister = _g;
		}
		HX_STACK_LINE(203)
		::String className = ::Type_obj::getClassName(cls);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(204)
		::haxe::ui::toolkit::core::Toolkit_obj::_transitionRegister->set(className,transition);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,setTransitionForClass,(void))

::haxe::ui::toolkit::core::Root Toolkit_obj::openFullscreen( Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","openFullscreen",0xc39f2622,"haxe.ui.toolkit.core.Toolkit.openFullscreen","haxe/ui/toolkit/core/Toolkit.hx",219,0xd65388cd)
	HX_STACK_ARG(fn,"fn")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Toolkit.hx",220,0xd65388cd)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , (int)0,false);
				__result->Add(HX_CSTRING("y") , (int)0,false);
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(220)
	::haxe::ui::toolkit::core::Root root = ::haxe::ui::toolkit::core::RootManager_obj::get_instance()->createRoot(_Function_1_1::Block(),fn);		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(221)
	return root;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Toolkit_obj,openFullscreen,return )

::haxe::ui::toolkit::core::Root Toolkit_obj::openPopup( Dynamic options,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Toolkit","openPopup",0xfd3fa7a5,"haxe.ui.toolkit.core.Toolkit.openPopup","haxe/ui/toolkit/core/Toolkit.hx",224,0xd65388cd)
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(225)
	if (((options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Toolkit.hx",226,0xd65388cd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(226)
		options = _Function_2_1::Block();
	}
	HX_STACK_LINE(229)
	if (((options->__Field(HX_CSTRING("x"),true) != null()))){
		HX_STACK_LINE(229)
		options->__FieldRef(HX_CSTRING("x")) = options->__Field(HX_CSTRING("x"),true);
	}
	else{
		HX_STACK_LINE(229)
		options->__FieldRef(HX_CSTRING("x")) = (int)20;
	}
	HX_STACK_LINE(230)
	if (((options->__Field(HX_CSTRING("y"),true) != null()))){
		HX_STACK_LINE(230)
		options->__FieldRef(HX_CSTRING("y")) = options->__Field(HX_CSTRING("y"),true);
	}
	else{
		HX_STACK_LINE(230)
		options->__FieldRef(HX_CSTRING("y")) = (int)20;
	}
	HX_STACK_LINE(231)
	if (((options->__Field(HX_CSTRING("styleName"),true) != null()))){
		HX_STACK_LINE(231)
		options->__FieldRef(HX_CSTRING("styleName")) = options->__Field(HX_CSTRING("styleName"),true);
	}
	else{
		HX_STACK_LINE(231)
		options->__FieldRef(HX_CSTRING("styleName")) = HX_CSTRING("popup");
	}
	HX_STACK_LINE(233)
	::haxe::ui::toolkit::core::Root root = ::haxe::ui::toolkit::core::RootManager_obj::get_instance()->createRoot(options,fn);		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(234)
	return root;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Toolkit_obj,openPopup,return )


Toolkit_obj::Toolkit_obj()
{
}

Dynamic Toolkit_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { return theme; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"openPopup") ) { return openPopup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"processXml") ) { return processXml_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"initInstance") ) { return initInstance_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processXmlNode") ) { return processXmlNode_dyn(); }
		if (HX_FIELD_EQ(inName,"openFullscreen") ) { return openFullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useDefaultTheme") ) { return useDefaultTheme; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTransition") ) { return get_defaultTransition(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"processXmlResource") ) { return processXmlResource_dyn(); }
		if (HX_FIELD_EQ(inName,"_defaultTransition") ) { return _defaultTransition; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_transitionRegister") ) { return _transitionRegister; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"registerXMLProcessor") ) { return registerXMLProcessor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredProcessors") ) { return _registeredProcessors; }
		if (HX_FIELD_EQ(inName,"get_defaultTransition") ) { return get_defaultTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTransition") ) { return set_defaultTransition_dyn(); }
		if (HX_FIELD_EQ(inName,"getTransitionForClass") ) { return getTransitionForClass_dyn(); }
		if (HX_FIELD_EQ(inName,"setTransitionForClass") ) { return setTransitionForClass_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Toolkit_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"theme") ) { theme=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::Toolkit >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::Toolkit >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useDefaultTheme") ) { useDefaultTheme=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTransition") ) { return set_defaultTransition(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_defaultTransition") ) { _defaultTransition=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_transitionRegister") ) { _transitionRegister=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_registeredProcessors") ) { _registeredProcessors=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Toolkit_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	HX_CSTRING("init"),
	HX_CSTRING("_registeredProcessors"),
	HX_CSTRING("registerXMLProcessor"),
	HX_CSTRING("useDefaultTheme"),
	HX_CSTRING("theme"),
	HX_CSTRING("processXmlResource"),
	HX_CSTRING("processXml"),
	HX_CSTRING("processXmlNode"),
	HX_CSTRING("_defaultTransition"),
	HX_CSTRING("_transitionRegister"),
	HX_CSTRING("get_defaultTransition"),
	HX_CSTRING("set_defaultTransition"),
	HX_CSTRING("getTransitionForClass"),
	HX_CSTRING("setTransitionForClass"),
	HX_CSTRING("openFullscreen"),
	HX_CSTRING("openPopup"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("initInstance"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Toolkit_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Toolkit_obj::instance,"instance");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_registeredProcessors,"_registeredProcessors");
	HX_MARK_MEMBER_NAME(Toolkit_obj::useDefaultTheme,"useDefaultTheme");
	HX_MARK_MEMBER_NAME(Toolkit_obj::theme,"theme");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_defaultTransition,"_defaultTransition");
	HX_MARK_MEMBER_NAME(Toolkit_obj::_transitionRegister,"_transitionRegister");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Toolkit_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::instance,"instance");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_registeredProcessors,"_registeredProcessors");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::useDefaultTheme,"useDefaultTheme");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::theme,"theme");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_defaultTransition,"_defaultTransition");
	HX_VISIT_MEMBER_NAME(Toolkit_obj::_transitionRegister,"_transitionRegister");
};

#endif

Class Toolkit_obj::__mClass;

void Toolkit_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Toolkit"), hx::TCanCast< Toolkit_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Toolkit_obj::__boot()
{
	useDefaultTheme= true;
	_defaultTransition= HX_CSTRING("slide");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
