#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_haxelib_popups_LoginController
#include <haxe/ui/haxelib/popups/LoginController.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CheckBox
#include <haxe/ui/toolkit/controls/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
namespace haxe{
namespace ui{
namespace haxelib{
namespace popups{

Void LoginController_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.haxelib.popups.LoginController","new",0xe8db8051,"haxe.ui.haxelib.popups.LoginController.new","haxe/ui/toolkit/core/Macros.hx",389,0x3fba9eca)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct(HX_CSTRING("assets/ui/popups/login.xml"));
	HX_STACK_LINE(5)
	::haxe::ui::toolkit::controls::TextInput _g = this->getComponentAs(HX_CSTRING("password"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(5)
	this->password = _g;
	HX_STACK_LINE(5)
	::haxe::ui::toolkit::controls::CheckBox _g1 = this->getComponentAs(HX_CSTRING("rememberMe"),hx::ClassOf< ::haxe::ui::toolkit::controls::CheckBox >());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(5)
	this->rememberMe = _g1;
	HX_STACK_LINE(5)
	::haxe::ui::toolkit::controls::TextInput _g2 = this->getComponentAs(HX_CSTRING("username"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(5)
	this->username = _g2;
}
;
	return null();
}

//LoginController_obj::~LoginController_obj() { }

Dynamic LoginController_obj::__CreateEmpty() { return  new LoginController_obj; }
hx::ObjectPtr< LoginController_obj > LoginController_obj::__new()
{  hx::ObjectPtr< LoginController_obj > result = new LoginController_obj();
	result->__construct();
	return result;}

Dynamic LoginController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoginController_obj > result = new LoginController_obj();
	result->__construct();
	return result;}


LoginController_obj::LoginController_obj()
{
}

void LoginController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoginController);
	HX_MARK_MEMBER_NAME(username,"username");
	HX_MARK_MEMBER_NAME(rememberMe,"rememberMe");
	HX_MARK_MEMBER_NAME(password,"password");
	::haxe::ui::toolkit::core::Controller_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoginController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(username,"username");
	HX_VISIT_MEMBER_NAME(rememberMe,"rememberMe");
	HX_VISIT_MEMBER_NAME(password,"password");
	::haxe::ui::toolkit::core::Controller_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LoginController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"username") ) { return username; }
		if (HX_FIELD_EQ(inName,"password") ) { return password; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rememberMe") ) { return rememberMe; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LoginController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"username") ) { username=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		if (HX_FIELD_EQ(inName,"password") ) { password=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"rememberMe") ) { rememberMe=inValue.Cast< ::haxe::ui::toolkit::controls::CheckBox >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoginController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("username"));
	outFields->push(HX_CSTRING("rememberMe"));
	outFields->push(HX_CSTRING("password"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(LoginController_obj,username),HX_CSTRING("username")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::CheckBox*/ ,(int)offsetof(LoginController_obj,rememberMe),HX_CSTRING("rememberMe")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(LoginController_obj,password),HX_CSTRING("password")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("username"),
	HX_CSTRING("rememberMe"),
	HX_CSTRING("password"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoginController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoginController_obj::__mClass,"__mClass");
};

#endif

Class LoginController_obj::__mClass;

void LoginController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.popups.LoginController"), hx::TCanCast< LoginController_obj> ,sStaticFields,sMemberFields,
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

void LoginController_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
} // end namespace popups
