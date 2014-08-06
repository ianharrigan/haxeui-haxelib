#include <hxcpp.h>

#ifndef INCLUDED_tools_haxelib_Preview
#include <tools/haxelib/Preview.h>
#endif
namespace tools{
namespace haxelib{

::tools::haxelib::Preview Preview_obj::ALPHA;

::tools::haxelib::Preview Preview_obj::BETA;

::tools::haxelib::Preview Preview_obj::RC;

HX_DEFINE_CREATE_ENUM(Preview_obj)

int Preview_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ALPHA")) return 0;
	if (inName==HX_CSTRING("BETA")) return 1;
	if (inName==HX_CSTRING("RC")) return 2;
	return super::__FindIndex(inName);
}

int Preview_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ALPHA")) return 0;
	if (inName==HX_CSTRING("BETA")) return 0;
	if (inName==HX_CSTRING("RC")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Preview_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ALPHA")) return ALPHA;
	if (inName==HX_CSTRING("BETA")) return BETA;
	if (inName==HX_CSTRING("RC")) return RC;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("ALPHA"),
	HX_CSTRING("BETA"),
	HX_CSTRING("RC"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Preview_obj::ALPHA,"ALPHA");
	HX_MARK_MEMBER_NAME(Preview_obj::BETA,"BETA");
	HX_MARK_MEMBER_NAME(Preview_obj::RC,"RC");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Preview_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Preview_obj::ALPHA,"ALPHA");
	HX_VISIT_MEMBER_NAME(Preview_obj::BETA,"BETA");
	HX_VISIT_MEMBER_NAME(Preview_obj::RC,"RC");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Preview_obj::__mClass;

Dynamic __Create_Preview_obj() { return new Preview_obj; }

void Preview_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.Preview"), hx::TCanCast< Preview_obj >,sStaticFields,sMemberFields,
	&__Create_Preview_obj, &__Create,
	&super::__SGetClass(), &CreatePreview_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Preview_obj::__boot()
{
hx::Static(ALPHA) = hx::CreateEnum< Preview_obj >(HX_CSTRING("ALPHA"),0);
hx::Static(BETA) = hx::CreateEnum< Preview_obj >(HX_CSTRING("BETA"),1);
hx::Static(RC) = hx::CreateEnum< Preview_obj >(HX_CSTRING("RC"),2);
}


} // end namespace tools
} // end namespace haxelib
