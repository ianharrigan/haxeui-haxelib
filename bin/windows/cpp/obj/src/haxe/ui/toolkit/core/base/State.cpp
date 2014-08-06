#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_base_State
#include <haxe/ui/toolkit/core/base/State.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace base{

Void State_obj::__construct()
{
	return null();
}

//State_obj::~State_obj() { }

Dynamic State_obj::__CreateEmpty() { return  new State_obj; }
hx::ObjectPtr< State_obj > State_obj::__new()
{  hx::ObjectPtr< State_obj > result = new State_obj();
	result->__construct();
	return result;}

Dynamic State_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< State_obj > result = new State_obj();
	result->__construct();
	return result;}

::String State_obj::NORMAL;

::String State_obj::OVER;

::String State_obj::DOWN;

::String State_obj::DISABLED;


State_obj::State_obj()
{
}

Dynamic State_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic State_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void State_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NORMAL"),
	HX_CSTRING("OVER"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("DISABLED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(State_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(State_obj::OVER,"OVER");
	HX_MARK_MEMBER_NAME(State_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(State_obj::DISABLED,"DISABLED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(State_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(State_obj::OVER,"OVER");
	HX_VISIT_MEMBER_NAME(State_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(State_obj::DISABLED,"DISABLED");
};

#endif

Class State_obj::__mClass;

void State_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.base.State"), hx::TCanCast< State_obj> ,sStaticFields,sMemberFields,
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

void State_obj::__boot()
{
	NORMAL= HX_CSTRING("normal");
	OVER= HX_CSTRING("over");
	DOWN= HX_CSTRING("down");
	DISABLED= HX_CSTRING("disabled");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace base
