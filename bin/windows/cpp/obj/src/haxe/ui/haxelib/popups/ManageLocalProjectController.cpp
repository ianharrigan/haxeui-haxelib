#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_HaxeLibManager
#include <haxe/ui/haxelib/HaxeLibManager.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_UIManager
#include <haxe/ui/haxelib/UIManager.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_popups_ManageLocalProjectController
#include <haxe/ui/haxelib/popups/ManageLocalProjectController.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#include <haxe/ui/toolkit/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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
namespace popups{

Void ManageLocalProjectController_obj::__construct(Dynamic project)
{
HX_STACK_FRAME("haxe.ui.haxelib.popups.ManageLocalProjectController","new",0x52231fe7,"haxe.ui.haxelib.popups.ManageLocalProjectController.new","haxe/ui/toolkit/core/Macros.hx",389,0x3fba9eca)
HX_STACK_THIS(this)
HX_STACK_ARG(project,"project")
{
	HX_STACK_LINE(12)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(9)
	super::__construct(HX_CSTRING("assets/ui/popups/manage-local-project.xml"));
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::containers::ListView _g1 = this->getComponentAs(HX_CSTRING("projectVersions"),hx::ClassOf< ::haxe::ui::toolkit::containers::ListView >());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(9)
	this->projectVersions = _g1;
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::controls::Text _g11 = this->getComponentAs(HX_CSTRING("projectDescription"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(9)
	this->projectDescription = _g11;
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::controls::Button _g2 = this->getComponentAs(HX_CSTRING("close"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(9)
	this->close = _g2;
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::controls::Button _g3 = this->getComponentAs(HX_CSTRING("updateToLatest"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(9)
	this->updateToLatest = _g3;
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::controls::Button _g4 = this->getComponentAs(HX_CSTRING("uninstall"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(9)
	this->uninstall = _g4;
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::controls::Image _g5 = this->getComponentAs(HX_CSTRING("projectIcon"),hx::ClassOf< ::haxe::ui::toolkit::controls::Image >());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(9)
	this->projectIcon = _g5;
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::controls::Text _g6 = this->getComponentAs(HX_CSTRING("projectTitle"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(9)
	this->projectTitle = _g6;
	HX_STACK_LINE(9)
	::haxe::ui::toolkit::controls::Button _g7 = this->getComponentAs(HX_CSTRING("queryUser"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(9)
	this->queryUser = _g7;
	HX_STACK_LINE(13)
	this->_project = project;
	HX_STACK_LINE(15)
	this->refreshDetails();
	HX_STACK_LINE(16)
	this->refreshVersions();

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",19,0x019259e9)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(19)
			(hx::TCast< haxe::ui::toolkit::controls::popups::Popup >::cast(_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >()->get_view()->__Field(HX_CSTRING("get_parent"),true)()->__Field(HX_CSTRING("get_parent"),true)()))->clickButton((int)1048576);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(18)
	this->close->set_onClick( Dynamic(new _Function_1_1(_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",23,0x019259e9)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(23)
			::haxe::ui::haxelib::UIManager_obj::get_instance()->showQueryUser(_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >()->_project->__Field(HX_CSTRING("remoteProject"),true)->__Field(HX_CSTRING("owner"),true));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(22)
	this->queryUser->set_onClick( Dynamic(new _Function_1_2(_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,_g)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",27,0x019259e9)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(27)
			_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >()->setVersion(e->data->__Field(HX_CSTRING("version"),true));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(26)
	this->projectVersions->set_onComponentEvent( Dynamic(new _Function_1_3(_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,Array< ::Dynamic >,_g)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",31,0x019259e9)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(31)
			_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >()->setVersion(_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >()->updateToLatest->userData);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(30)
	this->updateToLatest->set_onClick( Dynamic(new _Function_1_4(_g)));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_5)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",35,0x019259e9)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(35)
			::haxe::ui::haxelib::UIManager_obj::get_instance()->showNotImplemented(null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(34)
	this->uninstall->set_onClick( Dynamic(new _Function_1_5()));
}
;
	return null();
}

//ManageLocalProjectController_obj::~ManageLocalProjectController_obj() { }

Dynamic ManageLocalProjectController_obj::__CreateEmpty() { return  new ManageLocalProjectController_obj; }
hx::ObjectPtr< ManageLocalProjectController_obj > ManageLocalProjectController_obj::__new(Dynamic project)
{  hx::ObjectPtr< ManageLocalProjectController_obj > result = new ManageLocalProjectController_obj();
	result->__construct(project);
	return result;}

Dynamic ManageLocalProjectController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ManageLocalProjectController_obj > result = new ManageLocalProjectController_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ManageLocalProjectController_obj::setVersion( ::String version){
{
		HX_STACK_FRAME("haxe.ui.haxelib.popups.ManageLocalProjectController","setVersion",0xa0b3caef,"haxe.ui.haxelib.popups.ManageLocalProjectController.setVersion","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",39,0x019259e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(version,"version")
		HX_STACK_LINE(40)
		bool hasLocalVersion = ::haxe::ui::haxelib::HaxeLibManager_obj::get_instance()->hasLocalVersion(this->_project->__Field(HX_CSTRING("name"),true),version);		HX_STACK_VAR(hasLocalVersion,"hasLocalVersion");
		HX_STACK_LINE(41)
		if (((hasLocalVersion == false))){
			HX_STACK_LINE(42)
			::String _g = ::Std_obj::string(this->_project->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			::String _g1 = (((HX_CSTRING("You do not have version ") + version) + HX_CSTRING(" of ")) + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			::String _g2 = (_g1 + HX_CSTRING(" in your local repository.\n\nDo wish to download and install it now?"));		HX_STACK_VAR(_g2,"_g2");

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
			Void run(int button){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",43,0x019259e9)
				HX_STACK_ARG(button,"button")
				{
					HX_STACK_LINE(43)
					if (((button == (int)16))){
						HX_STACK_LINE(44)
						::haxe::ui::haxelib::UIManager_obj::get_instance()->showNotImplemented(null());
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(42)
			this->showSimplePopup(_g2,HX_CSTRING("Local version not found"),(int)272, Dynamic(new _Function_2_1()));
		}
		else{
			HX_STACK_LINE(48)
			::haxe::ui::haxelib::HaxeLibManager_obj::get_instance()->setLocalVersion(this->_project->__Field(HX_CSTRING("name"),true),version);
			HX_STACK_LINE(49)
			this->_project->__FieldRef(HX_CSTRING("currentVersion")) = version;
			HX_STACK_LINE(50)
			this->refreshProject(this->_project);
			HX_STACK_LINE(52)
			::haxe::ui::haxelib::UIManager_obj::get_instance()->dispatchProjectVersionChanged(this->_project);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ManageLocalProjectController_obj,setVersion,(void))

Void ManageLocalProjectController_obj::refreshProject( Dynamic project){
{
		HX_STACK_FRAME("haxe.ui.haxelib.popups.ManageLocalProjectController","refreshProject",0x1c580217,"haxe.ui.haxelib.popups.ManageLocalProjectController.refreshProject","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",56,0x019259e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(project,"project")
		HX_STACK_LINE(57)
		this->_project = project;
		HX_STACK_LINE(58)
		this->refreshDetails();
		HX_STACK_LINE(59)
		this->refreshVersions();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ManageLocalProjectController_obj,refreshProject,(void))

Void ManageLocalProjectController_obj::refreshDetails( ){
{
		HX_STACK_FRAME("haxe.ui.haxelib.popups.ManageLocalProjectController","refreshDetails",0xd1c3cc00,"haxe.ui.haxelib.popups.ManageLocalProjectController.refreshDetails","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",62,0x019259e9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		Dynamic remoteProject = this->_project->__Field(HX_CSTRING("remoteProject"),true);		HX_STACK_VAR(remoteProject,"remoteProject");
		HX_STACK_LINE(64)
		this->projectTitle->set_text(remoteProject->__Field(HX_CSTRING("name"),true));
		HX_STACK_LINE(65)
		if (((remoteProject->__Field(HX_CSTRING("owner"),true) != null()))){
			HX_STACK_LINE(66)
			::haxe::ui::toolkit::controls::Text _g = this->projectTitle;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			::String _g1 = _g->get_text();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(66)
			::String _g11 = (_g1 + (((HX_CSTRING(" (") + remoteProject->__Field(HX_CSTRING("owner"),true)) + HX_CSTRING(")"))));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(66)
			_g->set_text(_g11);
		}
		HX_STACK_LINE(68)
		::String desc = remoteProject->__Field(HX_CSTRING("desc"),true);		HX_STACK_VAR(desc,"desc");
		HX_STACK_LINE(69)
		if (((remoteProject->__Field(HX_CSTRING("tags"),true) != null()))){
			HX_STACK_LINE(70)
			::String _g2 = remoteProject->__Field(HX_CSTRING("tags"),true)->__Field(HX_CSTRING("join"),true)(HX_CSTRING(", "));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(70)
			::String _g3 = (HX_CSTRING(" (") + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(70)
			::String _g4 = (_g3 + HX_CSTRING(")."));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(70)
			hx::AddEq(desc,_g4);
		}
		HX_STACK_LINE(72)
		if (((remoteProject->__Field(HX_CSTRING("website"),true) != null()))){
			HX_STACK_LINE(73)
			hx::AddEq(desc,((HX_CSTRING(" ") + remoteProject->__Field(HX_CSTRING("website"),true)) + HX_CSTRING(".")));
		}
		HX_STACK_LINE(75)
		if (((remoteProject->__Field(HX_CSTRING("license"),true) != null()))){
			HX_STACK_LINE(76)
			hx::AddEq(desc,((HX_CSTRING(" Licence: ") + remoteProject->__Field(HX_CSTRING("license"),true)) + HX_CSTRING(".")));
		}
		HX_STACK_LINE(78)
		this->projectDescription->set_text(desc);
		HX_STACK_LINE(80)
		if (((remoteProject->__Field(HX_CSTRING("curversion"),true) != this->_project->__Field(HX_CSTRING("currentVersion"),true)))){
			HX_STACK_LINE(81)
			this->projectIcon->set_resource(HX_CSTRING("img/blue-folder-horizontal-exclamation.png"));
			HX_STACK_LINE(82)
			this->updateToLatest->set_text(((HX_CSTRING("Upgrade to latest (") + remoteProject->__Field(HX_CSTRING("curversion"),true)) + HX_CSTRING(")")));
			HX_STACK_LINE(83)
			this->updateToLatest->userData = remoteProject->__Field(HX_CSTRING("curversion"),true);
			HX_STACK_LINE(84)
			this->updateToLatest->set_visible(true);
		}
		else{
			HX_STACK_LINE(86)
			this->projectIcon->set_resource(HX_CSTRING("img/blue-folder-horizontal-tick.png"));
			HX_STACK_LINE(87)
			this->updateToLatest->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ManageLocalProjectController_obj,refreshDetails,(void))

Void ManageLocalProjectController_obj::refreshVersions( ){
{
		HX_STACK_FRAME("haxe.ui.haxelib.popups.ManageLocalProjectController","refreshVersions",0x4f9cb55d,"haxe.ui.haxelib.popups.ManageLocalProjectController.refreshVersions","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",91,0x019259e9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		this->projectVersions->get_dataSource()->removeAll();
		HX_STACK_LINE(93)
		this->projectVersions->get_dataSource()->__Field(HX_CSTRING("set_allowEvents"),true)(false);
		HX_STACK_LINE(95)
		Dynamic remoteProject = this->_project->__Field(HX_CSTRING("remoteProject"),true);		HX_STACK_VAR(remoteProject,"remoteProject");
		HX_STACK_LINE(96)
		Array< ::String > localVersions = this->_project->__Field(HX_CSTRING("localVersions"),true);		HX_STACK_VAR(localVersions,"localVersions");
		HX_STACK_LINE(97)
		::String currentVersion = this->_project->__Field(HX_CSTRING("currentVersion"),true);		HX_STACK_VAR(currentVersion,"currentVersion");
		HX_STACK_LINE(99)
		int currentVersionIndex = (int)-1;		HX_STACK_VAR(currentVersionIndex,"currentVersionIndex");
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(100)
			int _g = remoteProject->__Field(HX_CSTRING("versions"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(100)
			while((true)){
				HX_STACK_LINE(100)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(100)
					break;
				}
				HX_STACK_LINE(100)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(101)
				Dynamic remoteVersion = remoteProject->__Field(HX_CSTRING("versions"),true)->__GetItem(((remoteProject->__Field(HX_CSTRING("versions"),true)->__Field(HX_CSTRING("length"),true) - n) - (int)1));		HX_STACK_VAR(remoteVersion,"remoteVersion");
				HX_STACK_LINE(102)
				if (((remoteVersion->__Field(HX_CSTRING("name"),true) == currentVersion))){
					HX_STACK_LINE(103)
					currentVersionIndex = n;
					HX_STACK_LINE(104)
					break;
				}
			}
		}
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(108)
			int _g = remoteProject->__Field(HX_CSTRING("versions"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			while((true)){
				HX_STACK_LINE(108)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(108)
					break;
				}
				HX_STACK_LINE(108)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(109)
				Dynamic remoteVersion = remoteProject->__Field(HX_CSTRING("versions"),true)->__GetItem(((remoteProject->__Field(HX_CSTRING("versions"),true)->__Field(HX_CSTRING("length"),true) - n) - (int)1));		HX_STACK_VAR(remoteVersion,"remoteVersion");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &remoteVersion){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/haxelib/popups/ManageLocalProjectController.hx",111,0x019259e9)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("text") , remoteVersion->__Field(HX_CSTRING("name"),true),false);
							__result->Add(HX_CSTRING("subtext") , ((HX_CSTRING("(") + remoteVersion->__Field(HX_CSTRING("date"),true)) + HX_CSTRING(")")),false);
							__result->Add(HX_CSTRING("version") , remoteVersion->__Field(HX_CSTRING("name"),true),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(111)
				Dynamic o = _Function_3_1::Block(remoteVersion);		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(116)
				if (((bool((remoteVersion->__Field(HX_CSTRING("comments"),true) != null())) && bool((remoteVersion->__Field(HX_CSTRING("comments"),true)->__Field(HX_CSTRING("length"),true) > (int)0))))){
					HX_STACK_LINE(117)
					::String _g2 = ::Std_obj::string(o->__Field(HX_CSTRING("subtext"),true));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(117)
					::String _g11 = ((remoteVersion->__Field(HX_CSTRING("comments"),true) + HX_CSTRING(" ")) + _g2);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(117)
					o->__FieldRef(HX_CSTRING("subtext")) = _g11;
				}
				HX_STACK_LINE(120)
				if (((remoteVersion->__Field(HX_CSTRING("name"),true) != currentVersion))){
					HX_STACK_LINE(129)
					o->__FieldRef(HX_CSTRING("controlId")) = HX_CSTRING("installButton");
					HX_STACK_LINE(130)
					o->__FieldRef(HX_CSTRING("componentType")) = HX_CSTRING("button");
					HX_STACK_LINE(131)
					o->__FieldRef(HX_CSTRING("componentValue")) = HX_CSTRING("Upgrade");
					HX_STACK_LINE(132)
					if (((n > currentVersionIndex))){
						HX_STACK_LINE(133)
						o->__FieldRef(HX_CSTRING("componentValue")) = HX_CSTRING("Downgrade");
					}
					HX_STACK_LINE(135)
					o->__FieldRef(HX_CSTRING("componentSize")) = (int)90;
				}
				HX_STACK_LINE(141)
				if (((n == currentVersionIndex))){
					HX_STACK_LINE(142)
					o->__FieldRef(HX_CSTRING("icon")) = HX_CSTRING("img/arrow.png");
				}
				else{
					HX_STACK_LINE(143)
					if (((n > currentVersionIndex))){
						HX_STACK_LINE(144)
						o->__FieldRef(HX_CSTRING("icon")) = HX_CSTRING("img/arrow-270.png");
					}
					else{
						HX_STACK_LINE(145)
						if (((n < currentVersionIndex))){
							HX_STACK_LINE(146)
							o->__FieldRef(HX_CSTRING("icon")) = HX_CSTRING("img/arrow-090.png");
						}
					}
				}
				HX_STACK_LINE(149)
				this->projectVersions->get_dataSource()->add(o);
			}
		}
		HX_STACK_LINE(152)
		this->projectVersions->get_dataSource()->__Field(HX_CSTRING("set_allowEvents"),true)(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ManageLocalProjectController_obj,refreshVersions,(void))


ManageLocalProjectController_obj::ManageLocalProjectController_obj()
{
}

void ManageLocalProjectController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ManageLocalProjectController);
	HX_MARK_MEMBER_NAME(_project,"_project");
	HX_MARK_MEMBER_NAME(queryUser,"queryUser");
	HX_MARK_MEMBER_NAME(projectTitle,"projectTitle");
	HX_MARK_MEMBER_NAME(projectIcon,"projectIcon");
	HX_MARK_MEMBER_NAME(uninstall,"uninstall");
	HX_MARK_MEMBER_NAME(updateToLatest,"updateToLatest");
	HX_MARK_MEMBER_NAME(close,"close");
	HX_MARK_MEMBER_NAME(projectDescription,"projectDescription");
	HX_MARK_MEMBER_NAME(projectVersions,"projectVersions");
	::haxe::ui::toolkit::core::Controller_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ManageLocalProjectController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_project,"_project");
	HX_VISIT_MEMBER_NAME(queryUser,"queryUser");
	HX_VISIT_MEMBER_NAME(projectTitle,"projectTitle");
	HX_VISIT_MEMBER_NAME(projectIcon,"projectIcon");
	HX_VISIT_MEMBER_NAME(uninstall,"uninstall");
	HX_VISIT_MEMBER_NAME(updateToLatest,"updateToLatest");
	HX_VISIT_MEMBER_NAME(close,"close");
	HX_VISIT_MEMBER_NAME(projectDescription,"projectDescription");
	HX_VISIT_MEMBER_NAME(projectVersions,"projectVersions");
	::haxe::ui::toolkit::core::Controller_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ManageLocalProjectController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_project") ) { return _project; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"queryUser") ) { return queryUser; }
		if (HX_FIELD_EQ(inName,"uninstall") ) { return uninstall; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setVersion") ) { return setVersion_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"projectIcon") ) { return projectIcon; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"projectTitle") ) { return projectTitle; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"refreshProject") ) { return refreshProject_dyn(); }
		if (HX_FIELD_EQ(inName,"refreshDetails") ) { return refreshDetails_dyn(); }
		if (HX_FIELD_EQ(inName,"updateToLatest") ) { return updateToLatest; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"refreshVersions") ) { return refreshVersions_dyn(); }
		if (HX_FIELD_EQ(inName,"projectVersions") ) { return projectVersions; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectDescription") ) { return projectDescription; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ManageLocalProjectController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { close=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_project") ) { _project=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"queryUser") ) { queryUser=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uninstall") ) { uninstall=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"projectIcon") ) { projectIcon=inValue.Cast< ::haxe::ui::toolkit::controls::Image >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"projectTitle") ) { projectTitle=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateToLatest") ) { updateToLatest=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"projectVersions") ) { projectVersions=inValue.Cast< ::haxe::ui::toolkit::containers::ListView >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"projectDescription") ) { projectDescription=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ManageLocalProjectController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_project"));
	outFields->push(HX_CSTRING("queryUser"));
	outFields->push(HX_CSTRING("projectTitle"));
	outFields->push(HX_CSTRING("projectIcon"));
	outFields->push(HX_CSTRING("uninstall"));
	outFields->push(HX_CSTRING("updateToLatest"));
	outFields->push(HX_CSTRING("close"));
	outFields->push(HX_CSTRING("projectDescription"));
	outFields->push(HX_CSTRING("projectVersions"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ManageLocalProjectController_obj,_project),HX_CSTRING("_project")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(ManageLocalProjectController_obj,queryUser),HX_CSTRING("queryUser")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(ManageLocalProjectController_obj,projectTitle),HX_CSTRING("projectTitle")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Image*/ ,(int)offsetof(ManageLocalProjectController_obj,projectIcon),HX_CSTRING("projectIcon")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(ManageLocalProjectController_obj,uninstall),HX_CSTRING("uninstall")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(ManageLocalProjectController_obj,updateToLatest),HX_CSTRING("updateToLatest")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(ManageLocalProjectController_obj,close),HX_CSTRING("close")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(ManageLocalProjectController_obj,projectDescription),HX_CSTRING("projectDescription")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::ListView*/ ,(int)offsetof(ManageLocalProjectController_obj,projectVersions),HX_CSTRING("projectVersions")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_project"),
	HX_CSTRING("setVersion"),
	HX_CSTRING("refreshProject"),
	HX_CSTRING("refreshDetails"),
	HX_CSTRING("refreshVersions"),
	HX_CSTRING("queryUser"),
	HX_CSTRING("projectTitle"),
	HX_CSTRING("projectIcon"),
	HX_CSTRING("uninstall"),
	HX_CSTRING("updateToLatest"),
	HX_CSTRING("close"),
	HX_CSTRING("projectDescription"),
	HX_CSTRING("projectVersions"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManageLocalProjectController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManageLocalProjectController_obj::__mClass,"__mClass");
};

#endif

Class ManageLocalProjectController_obj::__mClass;

void ManageLocalProjectController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.popups.ManageLocalProjectController"), hx::TCanCast< ManageLocalProjectController_obj> ,sStaticFields,sMemberFields,
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

void ManageLocalProjectController_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
} // end namespace popups
