#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_HaxeLibManager
#include <haxe/ui/haxelib/HaxeLibManager.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_MainController
#include <haxe/ui/haxelib/MainController.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_RemoteFetchRunner
#include <haxe/ui/haxelib/RemoteFetchRunner.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_UIManager
#include <haxe/ui/haxelib/UIManager.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_VersionChangedEvent
#include <haxe/ui/haxelib/VersionChangedEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#include <haxe/ui/toolkit/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TabView
#include <haxe/ui/toolkit/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HProgress
#include <haxe/ui/toolkit/controls/HProgress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuButton
#include <haxe/ui/toolkit/controls/MenuButton.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuItem
#include <haxe/ui/toolkit/controls/MenuItem.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Spacer
#include <haxe/ui/toolkit/controls/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#include <haxe/ui/toolkit/core/XMLController.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_AsyncThreadCaller
#include <haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_tools_haxelib_Main
#include <tools/haxelib/Main.h>
#endif
namespace haxe{
namespace ui{
namespace haxelib{

Void MainController_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.haxelib.MainController","new",0xbc638f88,"haxe.ui.haxelib.MainController.new","haxe/ui/toolkit/core/Macros.hx",389,0x3fba9eca)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	super::__construct(HX_CSTRING("assets/ui/main.xml"));
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuItem _g1 = this->getComponentAs(HX_CSTRING("menuQueryUser"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(21)
	this->menuQueryUser = _g1;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuItem _g11 = this->getComponentAs(HX_CSTRING("menuSettings"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(21)
	this->menuSettings = _g11;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::Text _g2 = this->getComponentAs(HX_CSTRING("title"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(21)
	this->title = _g2;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuButton _g3 = this->getComponentAs(HX_CSTRING("menuHelp"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuButton >());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(21)
	this->menuHelp = _g3;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::containers::HBox _g4 = this->getComponentAs(HX_CSTRING("localProgressBox"),hx::ClassOf< ::haxe::ui::toolkit::containers::HBox >());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(21)
	this->localProgressBox = _g4;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuItem _g5 = this->getComponentAs(HX_CSTRING("menuAbout"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(21)
	this->menuAbout = _g5;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::Spacer _g6 = this->getComponentAs(HX_CSTRING("localProgressSpacer"),hx::ClassOf< ::haxe::ui::toolkit::controls::Spacer >());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(21)
	this->localProgressSpacer = _g6;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::containers::ListView _g7 = this->getComponentAs(HX_CSTRING("localProjects"),hx::ClassOf< ::haxe::ui::toolkit::containers::ListView >());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(21)
	this->localProjects = _g7;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuItem _g8 = this->getComponentAs(HX_CSTRING("menuExit"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(21)
	this->menuExit = _g8;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::HProgress _g9 = this->getComponentAs(HX_CSTRING("localProgressBar"),hx::ClassOf< ::haxe::ui::toolkit::controls::HProgress >());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(21)
	this->localProgressBar = _g9;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuItem _g10 = this->getComponentAs(HX_CSTRING("menuLogout"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(21)
	this->menuLogout = _g10;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuItem _g111 = this->getComponentAs(HX_CSTRING("menuCreateAccount"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >());		HX_STACK_VAR(_g111,"_g111");
	HX_STACK_LINE(21)
	this->menuCreateAccount = _g111;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::Text _g12 = this->getComponentAs(HX_CSTRING("localProgressLabel"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >());		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(21)
	this->localProgressLabel = _g12;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuButton _g13 = this->getComponentAs(HX_CSTRING("menuFile"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuButton >());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(21)
	this->menuFile = _g13;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuButton _g14 = this->getComponentAs(HX_CSTRING("menuTools"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuButton >());		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(21)
	this->menuTools = _g14;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::MenuItem _g15 = this->getComponentAs(HX_CSTRING("menuFindProjects"),hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >());		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(21)
	this->menuFindProjects = _g15;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::Button _g16 = this->getComponentAs(HX_CSTRING("refreshLocal"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(21)
	this->refreshLocal = _g16;
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::containers::TabView _g17 = this->getComponentAs(HX_CSTRING("mainTabs"),hx::ClassOf< ::haxe::ui::toolkit::containers::TabView >());		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(21)
	this->mainTabs = _g17;
	HX_STACK_LINE(26)
	this->refreshLocalRepository();
	HX_STACK_LINE(27)
	this->refreshRemoteInfo();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/haxelib/MainController.hx",29,0x45da5d27)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(30)
			_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::MainController >()->refreshLocalRepository();
			HX_STACK_LINE(31)
			_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::MainController >()->refreshRemoteInfo();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(29)
	this->refreshLocal->set_onClick( Dynamic(new _Function_1_1(_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/haxelib/MainController.hx",34,0x45da5d27)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(35)
			Dynamic project = e->data->__Field(HX_CSTRING("project"),true);		HX_STACK_VAR(project,"project");
			HX_STACK_LINE(36)
			_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::MainController >()->modifyLocalProject(project);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(34)
	this->localProjects->set_onComponentEvent( Dynamic(new _Function_1_2(_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","haxe/ui/haxelib/MainController.hx",40,0x45da5d27)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(40)
			if (((_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::MainController >()->mainTabs->get_selectedIndex() == (int)1))){

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","haxe/ui/haxelib/MainController.hx",42,0x45da5d27)
					{
						HX_STACK_LINE(42)
						_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::MainController >()->mainTabs->set_selectedIndex((int)0);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(41)
				::haxe::ui::haxelib::UIManager_obj::get_instance()->showLogin( Dynamic(new _Function_3_1(_g)));
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(39)
	this->mainTabs->set_onChange( Dynamic(new _Function_1_3(_g)));
	HX_STACK_LINE(46)
	this->addMenuHandlers();
	HX_STACK_LINE(52)
	::haxe::ui::haxelib::UIManager_obj::get_instance()->addListener(HX_CSTRING("VersionChanged"),this->onProjectVersionChanged_dyn());
}
;
	return null();
}

//MainController_obj::~MainController_obj() { }

Dynamic MainController_obj::__CreateEmpty() { return  new MainController_obj; }
hx::ObjectPtr< MainController_obj > MainController_obj::__new()
{  hx::ObjectPtr< MainController_obj > result = new MainController_obj();
	result->__construct();
	return result;}

Dynamic MainController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MainController_obj > result = new MainController_obj();
	result->__construct();
	return result;}

Void MainController_obj::modifyLocalProject( Dynamic project){
{
		HX_STACK_FRAME("haxe.ui.haxelib.MainController","modifyLocalProject",0xde680220,"haxe.ui.haxelib.MainController.modifyLocalProject","haxe/ui/haxelib/MainController.hx",56,0x45da5d27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(project,"project")
		HX_STACK_LINE(56)
		::haxe::ui::haxelib::UIManager_obj::get_instance()->modifyLocalProject(project);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainController_obj,modifyLocalProject,(void))

Void MainController_obj::refreshLocalRepository( ){
{
		HX_STACK_FRAME("haxe.ui.haxelib.MainController","refreshLocalRepository",0x108cb712,"haxe.ui.haxelib.MainController.refreshLocalRepository","haxe/ui/haxelib/MainController.hx",89,0x45da5d27)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		this->localProjects->get_dataSource()->removeAll();
		HX_STACK_LINE(92)
		this->localProjects->get_dataSource()->__Field(HX_CSTRING("set_allowEvents"),true)(false);
		HX_STACK_LINE(93)
		Dynamic projects = ::haxe::ui::haxelib::HaxeLibManager_obj::get_instance()->listLocalProjects(null(),null());		HX_STACK_VAR(projects,"projects");
		HX_STACK_LINE(94)
		int n = (int)0;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				if ((!(((_g < projects->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				Dynamic project = projects->__GetItem(_g);		HX_STACK_VAR(project,"project");
				HX_STACK_LINE(95)
				++(_g);
				HX_STACK_LINE(96)
				::String _g1 = ::Std_obj::string(project->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(96)
				::String _g11 = (_g1 + HX_CSTRING(" ["));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(96)
				::String _g2 = ::Std_obj::string(project->__Field(HX_CSTRING("currentVersion"),true));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(96)
				::String _g3 = (_g11 + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(96)
				::String displayName = (_g3 + HX_CSTRING("]"));		HX_STACK_VAR(displayName,"displayName");
				struct _Function_3_1{
					inline static Dynamic Block( ::String &displayName,Dynamic &project){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/haxelib/MainController.hx",98,0x45da5d27)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("icon") , HX_CSTRING("img/folder-disabled.png"),false);
							__result->Add(HX_CSTRING("text") , displayName,false);
							__result->Add(HX_CSTRING("project") , project,false);
							__result->Add(HX_CSTRING("subtext") , HX_CSTRING("Retrieving remote info..."),false);
							__result->Add(HX_CSTRING("controlId") , HX_CSTRING("modifyButton"),false);
							__result->Add(HX_CSTRING("componentType") , HX_CSTRING("button"),false);
							__result->Add(HX_CSTRING("componentValue") , HX_CSTRING("Modify"),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(98)
				Dynamic o = _Function_3_1::Block(displayName,project);		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(108)
				this->localProjects->get_dataSource()->add(o);
				HX_STACK_LINE(109)
				(n)++;
				HX_STACK_LINE(110)
				if (((n > (int)1))){
				}
			}
		}
		HX_STACK_LINE(114)
		this->localProjects->get_dataSource()->__Field(HX_CSTRING("set_allowEvents"),true)(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainController_obj,refreshLocalRepository,(void))

Void MainController_obj::refreshRemoteInfo( ){
{
		HX_STACK_FRAME("haxe.ui.haxelib.MainController","refreshRemoteInfo",0x64f58cf7,"haxe.ui.haxelib.MainController.refreshRemoteInfo","haxe/ui/haxelib/MainController.hx",117,0x45da5d27)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		if (((this->_caller != null()))){
			HX_STACK_LINE(119)
			this->_caller->cancel();
		}
		HX_STACK_LINE(121)
		::haxe::ui::haxelib::RemoteFetchRunner _g = ::haxe::ui::haxelib::RemoteFetchRunner_obj::__new(this->localProjects,this->localProgressBox,.5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller _g1 = ::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(121)
		this->_caller = _g1;
		HX_STACK_LINE(122)
		this->_caller->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainController_obj,refreshRemoteInfo,(void))

Void MainController_obj::addMenuHandlers( ){
{
		HX_STACK_FRAME("haxe.ui.haxelib.MainController","addMenuHandlers",0xae01a111,"haxe.ui.haxelib.MainController.addMenuHandlers","haxe/ui/haxelib/MainController.hx",125,0x45da5d27)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(::haxe::ui::toolkit::events::UIEvent e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/haxelib/MainController.hx",127,0x45da5d27)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(127)
				::String _g = e->get_component()->get_id();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(127)
				::String _switch_1 = (_g);
				if (  ( _switch_1==HX_CSTRING("menuSettings"))){
					HX_STACK_LINE(129)
					::haxe::ui::haxelib::UIManager_obj::get_instance()->showNotImplemented(null());
				}
				else if (  ( _switch_1==HX_CSTRING("menuCreateAccount"))){
					HX_STACK_LINE(131)
					::haxe::ui::haxelib::UIManager_obj::get_instance()->showNotImplemented(null());
				}
				else if (  ( _switch_1==HX_CSTRING("menuLogout"))){
					HX_STACK_LINE(133)
					::haxe::ui::haxelib::UIManager_obj::get_instance()->showNotImplemented(null());
				}
				else if (  ( _switch_1==HX_CSTRING("menuExit"))){
					HX_STACK_LINE(135)
					::Sys_obj::exit((int)0);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(126)
		this->menuFile->set_onMenuSelect( Dynamic(new _Function_1_1()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
		Void run(::haxe::ui::toolkit::events::UIEvent e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/haxelib/MainController.hx",140,0x45da5d27)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(140)
				::String _g = e->get_component()->get_id();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(140)
				::String _switch_2 = (_g);
				if (  ( _switch_2==HX_CSTRING("menuQueryUser"))){
					HX_STACK_LINE(142)
					::haxe::ui::haxelib::UIManager_obj::get_instance()->showQueryUser(HX_CSTRING("ianharrigan"));
				}
				else if (  ( _switch_2==HX_CSTRING("menuFindProjects"))){
					HX_STACK_LINE(144)
					::haxe::ui::haxelib::UIManager_obj::get_instance()->showNotImplemented(null());
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(139)
		this->menuTools->set_onMenuSelect( Dynamic(new _Function_1_2()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
		Void run(::haxe::ui::toolkit::events::UIEvent e){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","haxe/ui/haxelib/MainController.hx",149,0x45da5d27)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(149)
				::String _g = e->get_component()->get_id();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(149)
				::String _switch_3 = (_g);
				if (  ( _switch_3==HX_CSTRING("menuAbout"))){
					HX_STACK_LINE(151)
					::haxe::ui::haxelib::UIManager_obj::get_instance()->showNotImplemented(null());
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(148)
		this->menuHelp->set_onMenuSelect( Dynamic(new _Function_1_3()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MainController_obj,addMenuHandlers,(void))

Void MainController_obj::onProjectVersionChanged( ::haxe::ui::haxelib::VersionChangedEvent e){
{
		HX_STACK_FRAME("haxe.ui.haxelib.MainController","onProjectVersionChanged",0x0b1588fe,"haxe.ui.haxelib.MainController.onProjectVersionChanged","haxe/ui/haxelib/MainController.hx",156,0x45da5d27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(157)
		this->localProjects->get_dataSource()->moveFirst();
		HX_STACK_LINE(158)
		while((true)){
			HX_STACK_LINE(159)
			Dynamic data = this->localProjects->get_dataSource()->get();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(160)
			if (((e->project->__Field(HX_CSTRING("name"),true) == data->__Field(HX_CSTRING("project"),true)->__Field(HX_CSTRING("name"),true)))){
				HX_STACK_LINE(161)
				::String _g = ::Std_obj::string(e->project->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(161)
				::String _g1 = (_g + HX_CSTRING(" ["));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(161)
				::String _g2 = ::Std_obj::string(e->project->__Field(HX_CSTRING("currentVersion"),true));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(161)
				::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(161)
				::String displayName = (_g3 + HX_CSTRING("]"));		HX_STACK_VAR(displayName,"displayName");
				HX_STACK_LINE(162)
				data->__FieldRef(HX_CSTRING("text")) = displayName;
				HX_STACK_LINE(163)
				if (((e->project->__Field(HX_CSTRING("currentVersion"),true) != data->__Field(HX_CSTRING("project"),true)->__Field(HX_CSTRING("remoteProject"),true)->__Field(HX_CSTRING("curversion"),true)))){
					HX_STACK_LINE(164)
					data->__FieldRef(HX_CSTRING("componentValue")) = (data->__Field(HX_CSTRING("project"),true)->__Field(HX_CSTRING("remoteProject"),true)->__Field(HX_CSTRING("curversion"),true) + HX_CSTRING(" Available"));
					HX_STACK_LINE(165)
					data->__FieldRef(HX_CSTRING("icon")) = HX_CSTRING("img/blue-folder-horizontal-exclamation.png");
				}
				else{
					HX_STACK_LINE(167)
					data->__FieldRef(HX_CSTRING("componentValue")) = HX_CSTRING("Modify");
					HX_STACK_LINE(168)
					data->__FieldRef(HX_CSTRING("icon")) = HX_CSTRING("img/blue-folder-horizontal-tick.png");
				}
				HX_STACK_LINE(170)
				this->localProjects->invalidate((int)65536,null());
				HX_STACK_LINE(171)
				break;
			}
			HX_STACK_LINE(158)
			if ((!(this->localProjects->get_dataSource()->moveNext()))){
				HX_STACK_LINE(158)
				break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MainController_obj,onProjectVersionChanged,(void))


MainController_obj::MainController_obj()
{
}

void MainController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainController);
	HX_MARK_MEMBER_NAME(_caller,"_caller");
	HX_MARK_MEMBER_NAME(mainTabs,"mainTabs");
	HX_MARK_MEMBER_NAME(refreshLocal,"refreshLocal");
	HX_MARK_MEMBER_NAME(menuFindProjects,"menuFindProjects");
	HX_MARK_MEMBER_NAME(menuTools,"menuTools");
	HX_MARK_MEMBER_NAME(menuFile,"menuFile");
	HX_MARK_MEMBER_NAME(localProgressLabel,"localProgressLabel");
	HX_MARK_MEMBER_NAME(menuCreateAccount,"menuCreateAccount");
	HX_MARK_MEMBER_NAME(menuLogout,"menuLogout");
	HX_MARK_MEMBER_NAME(localProgressBar,"localProgressBar");
	HX_MARK_MEMBER_NAME(menuExit,"menuExit");
	HX_MARK_MEMBER_NAME(localProjects,"localProjects");
	HX_MARK_MEMBER_NAME(localProgressSpacer,"localProgressSpacer");
	HX_MARK_MEMBER_NAME(menuAbout,"menuAbout");
	HX_MARK_MEMBER_NAME(localProgressBox,"localProgressBox");
	HX_MARK_MEMBER_NAME(menuHelp,"menuHelp");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(menuSettings,"menuSettings");
	HX_MARK_MEMBER_NAME(menuQueryUser,"menuQueryUser");
	::haxe::ui::toolkit::core::Controller_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_caller,"_caller");
	HX_VISIT_MEMBER_NAME(mainTabs,"mainTabs");
	HX_VISIT_MEMBER_NAME(refreshLocal,"refreshLocal");
	HX_VISIT_MEMBER_NAME(menuFindProjects,"menuFindProjects");
	HX_VISIT_MEMBER_NAME(menuTools,"menuTools");
	HX_VISIT_MEMBER_NAME(menuFile,"menuFile");
	HX_VISIT_MEMBER_NAME(localProgressLabel,"localProgressLabel");
	HX_VISIT_MEMBER_NAME(menuCreateAccount,"menuCreateAccount");
	HX_VISIT_MEMBER_NAME(menuLogout,"menuLogout");
	HX_VISIT_MEMBER_NAME(localProgressBar,"localProgressBar");
	HX_VISIT_MEMBER_NAME(menuExit,"menuExit");
	HX_VISIT_MEMBER_NAME(localProjects,"localProjects");
	HX_VISIT_MEMBER_NAME(localProgressSpacer,"localProgressSpacer");
	HX_VISIT_MEMBER_NAME(menuAbout,"menuAbout");
	HX_VISIT_MEMBER_NAME(localProgressBox,"localProgressBox");
	HX_VISIT_MEMBER_NAME(menuHelp,"menuHelp");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(menuSettings,"menuSettings");
	HX_VISIT_MEMBER_NAME(menuQueryUser,"menuQueryUser");
	::haxe::ui::toolkit::core::Controller_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MainController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_caller") ) { return _caller; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mainTabs") ) { return mainTabs; }
		if (HX_FIELD_EQ(inName,"menuFile") ) { return menuFile; }
		if (HX_FIELD_EQ(inName,"menuExit") ) { return menuExit; }
		if (HX_FIELD_EQ(inName,"menuHelp") ) { return menuHelp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuTools") ) { return menuTools; }
		if (HX_FIELD_EQ(inName,"menuAbout") ) { return menuAbout; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuLogout") ) { return menuLogout; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"refreshLocal") ) { return refreshLocal; }
		if (HX_FIELD_EQ(inName,"menuSettings") ) { return menuSettings; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localProjects") ) { return localProjects; }
		if (HX_FIELD_EQ(inName,"menuQueryUser") ) { return menuQueryUser; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addMenuHandlers") ) { return addMenuHandlers_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"menuFindProjects") ) { return menuFindProjects; }
		if (HX_FIELD_EQ(inName,"localProgressBar") ) { return localProgressBar; }
		if (HX_FIELD_EQ(inName,"localProgressBox") ) { return localProgressBox; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"refreshRemoteInfo") ) { return refreshRemoteInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"menuCreateAccount") ) { return menuCreateAccount; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"modifyLocalProject") ) { return modifyLocalProject_dyn(); }
		if (HX_FIELD_EQ(inName,"localProgressLabel") ) { return localProgressLabel; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"localProgressSpacer") ) { return localProgressSpacer; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"refreshLocalRepository") ) { return refreshLocalRepository_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onProjectVersionChanged") ) { return onProjectVersionChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MainController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_caller") ) { _caller=inValue.Cast< ::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mainTabs") ) { mainTabs=inValue.Cast< ::haxe::ui::toolkit::containers::TabView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuFile") ) { menuFile=inValue.Cast< ::haxe::ui::toolkit::controls::MenuButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuExit") ) { menuExit=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuHelp") ) { menuHelp=inValue.Cast< ::haxe::ui::toolkit::controls::MenuButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuTools") ) { menuTools=inValue.Cast< ::haxe::ui::toolkit::controls::MenuButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuAbout") ) { menuAbout=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"menuLogout") ) { menuLogout=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"refreshLocal") ) { refreshLocal=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuSettings") ) { menuSettings=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"localProjects") ) { localProjects=inValue.Cast< ::haxe::ui::toolkit::containers::ListView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuQueryUser") ) { menuQueryUser=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"menuFindProjects") ) { menuFindProjects=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localProgressBar") ) { localProgressBar=inValue.Cast< ::haxe::ui::toolkit::controls::HProgress >(); return inValue; }
		if (HX_FIELD_EQ(inName,"localProgressBox") ) { localProgressBox=inValue.Cast< ::haxe::ui::toolkit::containers::HBox >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"menuCreateAccount") ) { menuCreateAccount=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"localProgressLabel") ) { localProgressLabel=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"localProgressSpacer") ) { localProgressSpacer=inValue.Cast< ::haxe::ui::toolkit::controls::Spacer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MainController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_caller"));
	outFields->push(HX_CSTRING("mainTabs"));
	outFields->push(HX_CSTRING("refreshLocal"));
	outFields->push(HX_CSTRING("menuFindProjects"));
	outFields->push(HX_CSTRING("menuTools"));
	outFields->push(HX_CSTRING("menuFile"));
	outFields->push(HX_CSTRING("localProgressLabel"));
	outFields->push(HX_CSTRING("menuCreateAccount"));
	outFields->push(HX_CSTRING("menuLogout"));
	outFields->push(HX_CSTRING("localProgressBar"));
	outFields->push(HX_CSTRING("menuExit"));
	outFields->push(HX_CSTRING("localProjects"));
	outFields->push(HX_CSTRING("localProgressSpacer"));
	outFields->push(HX_CSTRING("menuAbout"));
	outFields->push(HX_CSTRING("localProgressBox"));
	outFields->push(HX_CSTRING("menuHelp"));
	outFields->push(HX_CSTRING("title"));
	outFields->push(HX_CSTRING("menuSettings"));
	outFields->push(HX_CSTRING("menuQueryUser"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller*/ ,(int)offsetof(MainController_obj,_caller),HX_CSTRING("_caller")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::TabView*/ ,(int)offsetof(MainController_obj,mainTabs),HX_CSTRING("mainTabs")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(MainController_obj,refreshLocal),HX_CSTRING("refreshLocal")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(MainController_obj,menuFindProjects),HX_CSTRING("menuFindProjects")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuButton*/ ,(int)offsetof(MainController_obj,menuTools),HX_CSTRING("menuTools")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuButton*/ ,(int)offsetof(MainController_obj,menuFile),HX_CSTRING("menuFile")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(MainController_obj,localProgressLabel),HX_CSTRING("localProgressLabel")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(MainController_obj,menuCreateAccount),HX_CSTRING("menuCreateAccount")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(MainController_obj,menuLogout),HX_CSTRING("menuLogout")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::HProgress*/ ,(int)offsetof(MainController_obj,localProgressBar),HX_CSTRING("localProgressBar")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(MainController_obj,menuExit),HX_CSTRING("menuExit")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::ListView*/ ,(int)offsetof(MainController_obj,localProjects),HX_CSTRING("localProjects")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Spacer*/ ,(int)offsetof(MainController_obj,localProgressSpacer),HX_CSTRING("localProgressSpacer")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(MainController_obj,menuAbout),HX_CSTRING("menuAbout")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::HBox*/ ,(int)offsetof(MainController_obj,localProgressBox),HX_CSTRING("localProgressBox")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuButton*/ ,(int)offsetof(MainController_obj,menuHelp),HX_CSTRING("menuHelp")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(MainController_obj,title),HX_CSTRING("title")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(MainController_obj,menuSettings),HX_CSTRING("menuSettings")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(MainController_obj,menuQueryUser),HX_CSTRING("menuQueryUser")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_caller"),
	HX_CSTRING("modifyLocalProject"),
	HX_CSTRING("refreshLocalRepository"),
	HX_CSTRING("refreshRemoteInfo"),
	HX_CSTRING("addMenuHandlers"),
	HX_CSTRING("onProjectVersionChanged"),
	HX_CSTRING("mainTabs"),
	HX_CSTRING("refreshLocal"),
	HX_CSTRING("menuFindProjects"),
	HX_CSTRING("menuTools"),
	HX_CSTRING("menuFile"),
	HX_CSTRING("localProgressLabel"),
	HX_CSTRING("menuCreateAccount"),
	HX_CSTRING("menuLogout"),
	HX_CSTRING("localProgressBar"),
	HX_CSTRING("menuExit"),
	HX_CSTRING("localProjects"),
	HX_CSTRING("localProgressSpacer"),
	HX_CSTRING("menuAbout"),
	HX_CSTRING("localProgressBox"),
	HX_CSTRING("menuHelp"),
	HX_CSTRING("title"),
	HX_CSTRING("menuSettings"),
	HX_CSTRING("menuQueryUser"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainController_obj::__mClass,"__mClass");
};

#endif

Class MainController_obj::__mClass;

void MainController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.MainController"), hx::TCanCast< MainController_obj> ,sStaticFields,sMemberFields,
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

void MainController_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
