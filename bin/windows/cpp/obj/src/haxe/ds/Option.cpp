#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
namespace haxe{
namespace ds{

::haxe::ds::Option Option_obj::None;

::haxe::ds::Option  Option_obj::Some(Dynamic v)
	{ return hx::CreateEnum< Option_obj >(HX_CSTRING("Some"),0,hx::DynamicArray(0,1).Add(v)); }

HX_DEFINE_CREATE_ENUM(Option_obj)

int Option_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("None")) return 1;
	if (inName==HX_CSTRING("Some")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Option_obj,Some,return)

int Option_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("None")) return 0;
	if (inName==HX_CSTRING("Some")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Option_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("None")) return None;
	if (inName==HX_CSTRING("Some")) return Some_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Some"),
	HX_CSTRING("None"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Option_obj::None,"None");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Option_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Option_obj::None,"None");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Option_obj::__mClass;

Dynamic __Create_Option_obj() { return new Option_obj; }

void Option_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ds.Option"), hx::TCanCast< Option_obj >,sStaticFields,sMemberFields,
	&__Create_Option_obj, &__Create,
	&super::__SGetClass(), &CreateOption_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Option_obj::__boot()
{
hx::Static(None) = hx::CreateEnum< Option_obj >(HX_CSTRING("None"),1);
}


} // end namespace haxe
} // end namespace ds
