#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Client
#include <haxe/ui/toolkit/core/Client.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_Capabilities
#include <openfl/system/Capabilities.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Client_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Client","new",0xbed64f0a,"haxe.ui.toolkit.core.Client.new","haxe/ui/toolkit/core/Client.hx",19,0xab9725e6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Client_obj::~Client_obj() { }

Dynamic Client_obj::__CreateEmpty() { return  new Client_obj; }
hx::ObjectPtr< Client_obj > Client_obj::__new()
{  hx::ObjectPtr< Client_obj > result = new Client_obj();
	result->__construct();
	return result;}

Dynamic Client_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Client_obj > result = new Client_obj();
	result->__construct();
	return result;}

Void Client_obj::init( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Client","init",0x39679126,"haxe.ui.toolkit.core.Client.init","haxe/ui/toolkit/core/Client.hx",23,0xab9725e6)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,init,(void))

::String Client_obj::get_language( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_language",0xe8dc9077,"haxe.ui.toolkit.core.Client.get_language","haxe/ui/toolkit/core/Client.hx",37,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return ::openfl::system::Capabilities_obj::get_language();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_language,return )

Float Client_obj::get_dpi( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_dpi",0xad79279e,"haxe.ui.toolkit.core.Client.get_dpi","haxe/ui/toolkit/core/Client.hx",41,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	return ::openfl::system::Capabilities_obj::get_screenDPI();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_dpi,return )

::String Client_obj::get_platform( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_platform",0xd6c4c2d2,"haxe.ui.toolkit.core.Client.get_platform","haxe/ui/toolkit/core/Client.hx",44,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return HX_CSTRING("windows");
	HX_STACK_LINE(53)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_platform,return )

::String Client_obj::get_target( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_target",0x3cdd6db0,"haxe.ui.toolkit.core.Client.get_target","haxe/ui/toolkit/core/Client.hx",56,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return HX_CSTRING("cpp");
	HX_STACK_LINE(63)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_target,return )

bool Client_obj::get_mobile( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_mobile",0x756826c1,"haxe.ui.toolkit.core.Client.get_mobile","haxe/ui/toolkit/core/Client.hx",70,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_mobile,return )

Float Client_obj::get_screenWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_screenWidth",0xcbe4903b,"haxe.ui.toolkit.core.Client.get_screenWidth","haxe/ui/toolkit/core/Client.hx",75,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return ::openfl::system::Capabilities_obj::get_screenResolutionX();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_screenWidth,return )

Float Client_obj::get_screenHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_screenHeight",0x52691c12,"haxe.ui.toolkit.core.Client.get_screenHeight","haxe/ui/toolkit/core/Client.hx",79,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(79)
	return ::openfl::system::Capabilities_obj::get_screenResolutionY();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_screenHeight,return )

Float Client_obj::get_windowWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_windowWidth",0x0531d937,"haxe.ui.toolkit.core.Client.get_windowWidth","haxe/ui/toolkit/core/Client.hx",83,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	return ::openfl::Lib_obj::get_current()->get_stage()->get_stageWidth();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_windowWidth,return )

Float Client_obj::get_windowHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_windowHeight",0x3cbbaf96,"haxe.ui.toolkit.core.Client.get_windowHeight","haxe/ui/toolkit/core/Client.hx",87,0xab9725e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	return ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();
}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_windowHeight,return )

::haxe::ui::toolkit::core::Client Client_obj::_instance;

::haxe::ui::toolkit::core::Client Client_obj::instance;

::haxe::ui::toolkit::core::Client Client_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Client","get_instance",0xc8ac2fb4,"haxe.ui.toolkit.core.Client.get_instance","haxe/ui/toolkit/core/Client.hx",8,0xab9725e6)
	HX_STACK_LINE(9)
	if (((::haxe::ui::toolkit::core::Client_obj::_instance == null()))){
		HX_STACK_LINE(10)
		::haxe::ui::toolkit::core::Client _g = ::haxe::ui::toolkit::core::Client_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(10)
		::haxe::ui::toolkit::core::Client_obj::_instance = _g;
		HX_STACK_LINE(11)
		::haxe::ui::toolkit::core::Client_obj::_instance->init();
	}
	HX_STACK_LINE(13)
	return ::haxe::ui::toolkit::core::Client_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Client_obj,get_instance,return )


Client_obj::Client_obj()
{
}

void Client_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Client);
	HX_MARK_MEMBER_NAME(language,"language");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(platform,"platform");
	HX_MARK_MEMBER_NAME(screenWidth,"screenWidth");
	HX_MARK_MEMBER_NAME(screenHeight,"screenHeight");
	HX_MARK_MEMBER_NAME(windowWidth,"windowWidth");
	HX_MARK_MEMBER_NAME(windowHeight,"windowHeight");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(mobile,"mobile");
	HX_MARK_END_CLASS();
}

void Client_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(language,"language");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(platform,"platform");
	HX_VISIT_MEMBER_NAME(screenWidth,"screenWidth");
	HX_VISIT_MEMBER_NAME(screenHeight,"screenHeight");
	HX_VISIT_MEMBER_NAME(windowWidth,"windowWidth");
	HX_VISIT_MEMBER_NAME(windowHeight,"windowHeight");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(mobile,"mobile");
}

Dynamic Client_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return inCallProp ? get_dpi() : dpi; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return inCallProp ? get_target() : target; }
		if (HX_FIELD_EQ(inName,"mobile") ) { return inCallProp ? get_mobile() : mobile; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_dpi") ) { return get_dpi_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"language") ) { return inCallProp ? get_language() : language; }
		if (HX_FIELD_EQ(inName,"platform") ) { return inCallProp ? get_platform() : platform; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mobile") ) { return get_mobile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { return inCallProp ? get_screenWidth() : screenWidth; }
		if (HX_FIELD_EQ(inName,"windowWidth") ) { return inCallProp ? get_windowWidth() : windowWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"screenHeight") ) { return inCallProp ? get_screenHeight() : screenHeight; }
		if (HX_FIELD_EQ(inName,"windowHeight") ) { return inCallProp ? get_windowHeight() : windowHeight; }
		if (HX_FIELD_EQ(inName,"get_language") ) { return get_language_dyn(); }
		if (HX_FIELD_EQ(inName,"get_platform") ) { return get_platform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_screenWidth") ) { return get_screenWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_windowWidth") ) { return get_windowWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_screenHeight") ) { return get_screenHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_windowHeight") ) { return get_windowHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Client_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mobile") ) { mobile=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::Client >(); return inValue; }
		if (HX_FIELD_EQ(inName,"language") ) { language=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::Client >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"screenWidth") ) { screenWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowWidth") ) { windowWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"screenHeight") ) { screenHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowHeight") ) { windowHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Client_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("language"));
	outFields->push(HX_CSTRING("dpi"));
	outFields->push(HX_CSTRING("platform"));
	outFields->push(HX_CSTRING("screenWidth"));
	outFields->push(HX_CSTRING("screenHeight"));
	outFields->push(HX_CSTRING("windowWidth"));
	outFields->push(HX_CSTRING("windowHeight"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("mobile"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Client_obj,language),HX_CSTRING("language")},
	{hx::fsFloat,(int)offsetof(Client_obj,dpi),HX_CSTRING("dpi")},
	{hx::fsString,(int)offsetof(Client_obj,platform),HX_CSTRING("platform")},
	{hx::fsFloat,(int)offsetof(Client_obj,screenWidth),HX_CSTRING("screenWidth")},
	{hx::fsFloat,(int)offsetof(Client_obj,screenHeight),HX_CSTRING("screenHeight")},
	{hx::fsFloat,(int)offsetof(Client_obj,windowWidth),HX_CSTRING("windowWidth")},
	{hx::fsFloat,(int)offsetof(Client_obj,windowHeight),HX_CSTRING("windowHeight")},
	{hx::fsString,(int)offsetof(Client_obj,target),HX_CSTRING("target")},
	{hx::fsBool,(int)offsetof(Client_obj,mobile),HX_CSTRING("mobile")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	HX_CSTRING("language"),
	HX_CSTRING("dpi"),
	HX_CSTRING("platform"),
	HX_CSTRING("screenWidth"),
	HX_CSTRING("screenHeight"),
	HX_CSTRING("windowWidth"),
	HX_CSTRING("windowHeight"),
	HX_CSTRING("target"),
	HX_CSTRING("mobile"),
	HX_CSTRING("get_language"),
	HX_CSTRING("get_dpi"),
	HX_CSTRING("get_platform"),
	HX_CSTRING("get_target"),
	HX_CSTRING("get_mobile"),
	HX_CSTRING("get_screenWidth"),
	HX_CSTRING("get_screenHeight"),
	HX_CSTRING("get_windowWidth"),
	HX_CSTRING("get_windowHeight"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Client_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Client_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Client_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Client_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Client_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Client_obj::instance,"instance");
};

#endif

Class Client_obj::__mClass;

void Client_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Client"), hx::TCanCast< Client_obj> ,sStaticFields,sMemberFields,
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

void Client_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
