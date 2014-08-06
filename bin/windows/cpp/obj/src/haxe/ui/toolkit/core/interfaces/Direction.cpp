#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_Direction
#include <haxe/ui/toolkit/core/interfaces/Direction.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{

Void Direction_obj::__construct()
{
	return null();
}

//Direction_obj::~Direction_obj() { }

Dynamic Direction_obj::__CreateEmpty() { return  new Direction_obj; }
hx::ObjectPtr< Direction_obj > Direction_obj::__new()
{  hx::ObjectPtr< Direction_obj > result = new Direction_obj();
	result->__construct();
	return result;}

Dynamic Direction_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Direction_obj > result = new Direction_obj();
	result->__construct();
	return result;}

::String Direction_obj::HORIZONTAL;

::String Direction_obj::VERTICAL;


Direction_obj::Direction_obj()
{
}

Dynamic Direction_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Direction_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Direction_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("HORIZONTAL"),
	HX_CSTRING("VERTICAL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Direction_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Direction_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(Direction_obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Direction_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Direction_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(Direction_obj::VERTICAL,"VERTICAL");
};

#endif

Class Direction_obj::__mClass;

void Direction_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.interfaces.Direction"), hx::TCanCast< Direction_obj> ,sStaticFields,sMemberFields,
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

void Direction_obj::__boot()
{
	HORIZONTAL= HX_CSTRING("horizontal");
	VERTICAL= HX_CSTRING("vertical");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces
