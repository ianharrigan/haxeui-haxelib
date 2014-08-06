#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Screen_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","new",0x4e2964ab,"haxe.ui.toolkit.core.Screen.new","haxe/ui/toolkit/core/Screen.hx",21,0x1b965f65)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new()
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

Void Screen_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","addEventListener",0x1f6964a2,"haxe.ui.toolkit.core.Screen.addEventListener","haxe/ui/toolkit/core/Screen.hx",25,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(26)
		::openfl::display::Stage target = ::openfl::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(27)
		target->addEventListener(type,listener,useCapture,priority,useWeakReference);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Screen_obj,addEventListener,(void))

Void Screen_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture){
bool useCapture = __o_useCapture.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","removeEventListener",0xb021a215,"haxe.ui.toolkit.core.Screen.removeEventListener","haxe/ui/toolkit/core/Screen.hx",30,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
{
		HX_STACK_LINE(31)
		::openfl::display::Stage target = ::openfl::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(32)
		target->removeEventListener(type,listener,useCapture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Screen_obj,removeEventListener,(void))

Float Screen_obj::get_width( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","get_width",0x811270e8,"haxe.ui.toolkit.core.Screen.get_width","haxe/ui/toolkit/core/Screen.hx",36,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	return ::openfl::Lib_obj::get_current()->get_stage()->get_stageWidth();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_width,return )

Float Screen_obj::get_height( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","get_height",0x255fd2c5,"haxe.ui.toolkit.core.Screen.get_height","haxe/ui/toolkit/core/Screen.hx",40,0x1b965f65)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return ::openfl::Lib_obj::get_current()->get_stage()->get_stageHeight();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_height,return )

::haxe::ui::toolkit::core::Screen Screen_obj::_instance;

::haxe::ui::toolkit::core::Screen Screen_obj::instance;

::haxe::ui::toolkit::core::Screen Screen_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Screen","get_instance",0x41a3ddf3,"haxe.ui.toolkit.core.Screen.get_instance","haxe/ui/toolkit/core/Screen.hx",8,0x1b965f65)
	HX_STACK_LINE(9)
	if (((::haxe::ui::toolkit::core::Screen_obj::_instance == null()))){
		HX_STACK_LINE(10)
		::haxe::ui::toolkit::core::Screen _g = ::haxe::ui::toolkit::core::Screen_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(10)
		::haxe::ui::toolkit::core::Screen_obj::_instance = _g;
	}
	HX_STACK_LINE(12)
	return ::haxe::ui::toolkit::core::Screen_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,get_instance,return )


Screen_obj::Screen_obj()
{
}

Dynamic Screen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::Screen >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::Screen >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Screen_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(Screen_obj,height),HX_CSTRING("height")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Screen_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(Screen_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Screen_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(Screen_obj::instance,"instance");
};

#endif

Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Screen"), hx::TCanCast< Screen_obj> ,sStaticFields,sMemberFields,
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

void Screen_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
