#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_HaxeLibManager
#include <haxe/ui/haxelib/HaxeLibManager.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_UIManager
#include <haxe/ui/haxelib/UIManager.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_VersionChangedEvent
#include <haxe/ui/haxelib/VersionChangedEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_popups_LoginController
#include <haxe/ui/haxelib/popups/LoginController.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_popups_ManageLocalProjectController
#include <haxe/ui/haxelib/popups/ManageLocalProjectController.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_popups_NotImplementedController
#include <haxe/ui/haxelib/popups/NotImplementedController.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_popups_QueryUserController
#include <haxe/ui/haxelib/popups/QueryUserController.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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

Void UIManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.haxelib.UIManager","new",0x1f7b75ca,"haxe.ui.haxelib.UIManager.new","haxe/ui/haxelib/UIManager.hx",25,0xd8089507)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	super::__construct(null());
	HX_STACK_LINE(27)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->_popups = _g;
}
;
	return null();
}

//UIManager_obj::~UIManager_obj() { }

Dynamic UIManager_obj::__CreateEmpty() { return  new UIManager_obj; }
hx::ObjectPtr< UIManager_obj > UIManager_obj::__new()
{  hx::ObjectPtr< UIManager_obj > result = new UIManager_obj();
	result->__construct();
	return result;}

Dynamic UIManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIManager_obj > result = new UIManager_obj();
	result->__construct();
	return result;}

Void UIManager_obj::showLogin( Dynamic fn){
{
		HX_STACK_FRAME("haxe.ui.haxelib.UIManager","showLogin",0xab2cd016,"haxe.ui.haxelib.UIManager.showLogin","haxe/ui/haxelib/UIManager.hx",30,0xd8089507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fn,"fn")
		HX_STACK_LINE(30)
		Dynamic fn1 = Dynamic( Array_obj<Dynamic>::__new().Add(fn));		HX_STACK_VAR(fn1,"fn1");
		HX_STACK_LINE(30)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		::haxe::ui::haxelib::popups::LoginController loginPopup = ::haxe::ui::haxelib::popups::LoginController_obj::__new();		HX_STACK_VAR(loginPopup,"loginPopup");
		HX_STACK_LINE(32)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g1 = loginPopup->get_view();		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/haxelib/UIManager.hx",32,0xd8089507)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("buttons") , (int)1048577,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g,Dynamic,fn1)
		Void run(Dynamic button){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/haxelib/UIManager.hx",33,0xd8089507)
			HX_STACK_ARG(button,"button")
			{
				HX_STACK_LINE(33)
				_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::UIManager >()->showNotImplemented(fn1->__GetItem((int)0));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(32)
		::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showCustom(_g1,HX_CSTRING("Login"),_Function_1_1::Block(), Dynamic(new _Function_1_2(_g,fn1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIManager_obj,showLogin,(void))

Void UIManager_obj::showNotImplemented( Dynamic fn){
{
		HX_STACK_FRAME("haxe.ui.haxelib.UIManager","showNotImplemented",0x6f658622,"haxe.ui.haxelib.UIManager.showNotImplemented","haxe/ui/haxelib/UIManager.hx",37,0xd8089507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fn,"fn")
		HX_STACK_LINE(37)
		Dynamic fn1 = Dynamic( Array_obj<Dynamic>::__new().Add(fn));		HX_STACK_VAR(fn1,"fn1");
		HX_STACK_LINE(38)
		::haxe::ui::haxelib::popups::NotImplementedController notImplementedPopup = ::haxe::ui::haxelib::popups::NotImplementedController_obj::__new();		HX_STACK_VAR(notImplementedPopup,"notImplementedPopup");
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g = notImplementedPopup->get_view();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/haxelib/UIManager.hx",39,0xd8089507)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("buttons") , (int)1,false);
					return __result;
				}
				return null();
			}
		};

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Dynamic,fn1)
		Void run(Dynamic button){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/haxelib/UIManager.hx",40,0xd8089507)
			HX_STACK_ARG(button,"button")
			{
				HX_STACK_LINE(40)
				if (((fn1->__GetItem((int)0) != null()))){
					HX_STACK_LINE(41)
					fn1->__GetItem((int)0)().Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(39)
		::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showCustom(_g,HX_CSTRING("Not Implemented"),_Function_1_1::Block(), Dynamic(new _Function_1_2(fn1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIManager_obj,showNotImplemented,(void))

Void UIManager_obj::showQueryUser( ::String username){
{
		HX_STACK_FRAME("haxe.ui.haxelib.UIManager","showQueryUser",0xfe85bea0,"haxe.ui.haxelib.UIManager.showQueryUser","haxe/ui/haxelib/UIManager.hx",46,0xd8089507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(username,"username")
		HX_STACK_LINE(46)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		Array< ::Dynamic > queryUserPopup = Array_obj< ::Dynamic >::__new().Add(this->findPopup(hx::ClassOf< ::haxe::ui::haxelib::popups::QueryUserController >()));		HX_STACK_VAR(queryUserPopup,"queryUserPopup");
		HX_STACK_LINE(48)
		if (((queryUserPopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::QueryUserController >() == null()))){
			HX_STACK_LINE(49)
			::haxe::ui::haxelib::popups::QueryUserController _g1 = ::haxe::ui::haxelib::popups::QueryUserController_obj::__new(username);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			queryUserPopup[(int)0] = _g1;
			HX_STACK_LINE(50)
			this->_popups->push(queryUserPopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::QueryUserController >());
			HX_STACK_LINE(51)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g11 = queryUserPopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::QueryUserController >()->get_view();		HX_STACK_VAR(_g11,"_g11");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/haxelib/UIManager.hx",51,0xd8089507)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("width") , (int)400,false);
						__result->Add(HX_CSTRING("buttons") , (int)1048576,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g,Array< ::Dynamic >,queryUserPopup)
			Void run(Dynamic button){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/haxelib/UIManager.hx",52,0xd8089507)
				HX_STACK_ARG(button,"button")
				{
					HX_STACK_LINE(52)
					_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::UIManager >()->_popups->remove(queryUserPopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::QueryUserController >());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(51)
			::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showCustom(_g11,HX_CSTRING("Query User"),_Function_2_1::Block(), Dynamic(new _Function_2_2(_g,queryUserPopup)));
		}
		else{
			HX_STACK_LINE(55)
			queryUserPopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::QueryUserController >()->performQuery(username);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIManager_obj,showQueryUser,(void))

Void UIManager_obj::modifyLocalProject( Dynamic project){
{
		HX_STACK_FRAME("haxe.ui.haxelib.UIManager","modifyLocalProject",0x2c8d761e,"haxe.ui.haxelib.UIManager.modifyLocalProject","haxe/ui/haxelib/UIManager.hx",60,0xd8089507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(project,"project")
		HX_STACK_LINE(60)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		Dynamic _g1 = ::haxe::ui::haxelib::HaxeLibManager_obj::get_instance()->queryProject(project->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		project->__FieldRef(HX_CSTRING("remoteProject")) = _g1;
		HX_STACK_LINE(62)
		Array< ::Dynamic > managePopup = Array_obj< ::Dynamic >::__new().Add(this->findPopup(hx::ClassOf< ::haxe::ui::haxelib::popups::ManageLocalProjectController >()));		HX_STACK_VAR(managePopup,"managePopup");
		HX_STACK_LINE(63)
		if (((managePopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >() == null()))){
			HX_STACK_LINE(64)
			::haxe::ui::haxelib::popups::ManageLocalProjectController _g11 = ::haxe::ui::haxelib::popups::ManageLocalProjectController_obj::__new(project);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(64)
			managePopup[(int)0] = _g11;
			HX_STACK_LINE(65)
			this->_popups->push(managePopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >());
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/haxelib/UIManager.hx",66,0xd8089507)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("width") , (int)550,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(66)
			Dynamic config = _Function_2_1::Block();		HX_STACK_VAR(config,"config");
			HX_STACK_LINE(70)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g2 = managePopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >()->get_view();		HX_STACK_VAR(_g2,"_g2");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g,Array< ::Dynamic >,managePopup)
			Void run(Dynamic button){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/haxelib/UIManager.hx",71,0xd8089507)
				HX_STACK_ARG(button,"button")
				{
					HX_STACK_LINE(71)
					_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::UIManager >()->_popups->remove(managePopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(70)
			::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showCustom(_g2,HX_CSTRING("Manage Project"),config, Dynamic(new _Function_2_2(_g,managePopup)));
		}
		else{
			HX_STACK_LINE(74)
			managePopup->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::ManageLocalProjectController >()->refreshProject(project);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIManager_obj,modifyLocalProject,(void))

::haxe::ui::toolkit::core::Controller UIManager_obj::findPopup( ::Class cls){
	HX_STACK_FRAME("haxe.ui.haxelib.UIManager","findPopup",0xb960cc1d,"haxe.ui.haxelib.UIManager.findPopup","haxe/ui/haxelib/UIManager.hx",78,0xd8089507)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cls,"cls")
	HX_STACK_LINE(79)
	::haxe::ui::toolkit::core::Controller foundPopup = null();		HX_STACK_VAR(foundPopup,"foundPopup");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		Array< ::Dynamic > _g1 = this->_popups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(80)
		while((true)){
			HX_STACK_LINE(80)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(80)
				break;
			}
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::core::Controller p = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::core::Controller >();		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(80)
			++(_g);
			HX_STACK_LINE(81)
			bool _g2 = ::Std_obj::is(p,cls);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(81)
			if (((_g2 == true))){
				HX_STACK_LINE(82)
				foundPopup = p;
				HX_STACK_LINE(83)
				break;
			}
		}
	}
	HX_STACK_LINE(86)
	return foundPopup;
}


HX_DEFINE_DYNAMIC_FUNC1(UIManager_obj,findPopup,return )

Void UIManager_obj::dispatchProjectVersionChanged( Dynamic project){
{
		HX_STACK_FRAME("haxe.ui.haxelib.UIManager","dispatchProjectVersionChanged",0x753b0245,"haxe.ui.haxelib.UIManager.dispatchProjectVersionChanged","haxe/ui/haxelib/UIManager.hx",89,0xd8089507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(project,"project")
		HX_STACK_LINE(90)
		::haxe::ui::haxelib::VersionChangedEvent _g = ::haxe::ui::haxelib::VersionChangedEvent_obj::__new(project);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(UIManager_obj,dispatchProjectVersionChanged,(void))

Void UIManager_obj::addListener( ::String type,Dynamic listener){
{
		HX_STACK_FRAME("haxe.ui.haxelib.UIManager","addListener",0x7858571f,"haxe.ui.haxelib.UIManager.addListener","haxe/ui/haxelib/UIManager.hx",94,0xd8089507)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(94)
		this->addEventListener(type,listener,false,(int)0,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UIManager_obj,addListener,(void))

::String UIManager_obj::VERSION_CHANGED;

::haxe::ui::haxelib::UIManager UIManager_obj::_instance;

::haxe::ui::haxelib::UIManager UIManager_obj::instance;

::haxe::ui::haxelib::UIManager UIManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.haxelib.UIManager","get_instance",0xf10c30f4,"haxe.ui.haxelib.UIManager.get_instance","haxe/ui/haxelib/UIManager.hx",17,0xd8089507)
	HX_STACK_LINE(18)
	if (((::haxe::ui::haxelib::UIManager_obj::_instance == null()))){
		HX_STACK_LINE(19)
		::haxe::ui::haxelib::UIManager _g = ::haxe::ui::haxelib::UIManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		::haxe::ui::haxelib::UIManager_obj::_instance = _g;
	}
	HX_STACK_LINE(21)
	return ::haxe::ui::haxelib::UIManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(UIManager_obj,get_instance,return )


UIManager_obj::UIManager_obj()
{
}

void UIManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIManager);
	HX_MARK_MEMBER_NAME(_popups,"_popups");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_popups,"_popups");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_popups") ) { return _popups; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"showLogin") ) { return showLogin_dyn(); }
		if (HX_FIELD_EQ(inName,"findPopup") ) { return findPopup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addListener") ) { return addListener_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showQueryUser") ) { return showQueryUser_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"showNotImplemented") ) { return showNotImplemented_dyn(); }
		if (HX_FIELD_EQ(inName,"modifyLocalProject") ) { return modifyLocalProject_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"dispatchProjectVersionChanged") ) { return dispatchProjectVersionChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_popups") ) { _popups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::haxelib::UIManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::haxelib::UIManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_popups"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERSION_CHANGED"),
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UIManager_obj,_popups),HX_CSTRING("_popups")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_popups"),
	HX_CSTRING("showLogin"),
	HX_CSTRING("showNotImplemented"),
	HX_CSTRING("showQueryUser"),
	HX_CSTRING("modifyLocalProject"),
	HX_CSTRING("findPopup"),
	HX_CSTRING("dispatchProjectVersionChanged"),
	HX_CSTRING("addListener"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIManager_obj::VERSION_CHANGED,"VERSION_CHANGED");
	HX_MARK_MEMBER_NAME(UIManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(UIManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIManager_obj::VERSION_CHANGED,"VERSION_CHANGED");
	HX_VISIT_MEMBER_NAME(UIManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(UIManager_obj::instance,"instance");
};

#endif

Class UIManager_obj::__mClass;

void UIManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.UIManager"), hx::TCanCast< UIManager_obj> ,sStaticFields,sMemberFields,
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

void UIManager_obj::__boot()
{
	VERSION_CHANGED= HX_CSTRING("VersionChanged");
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
