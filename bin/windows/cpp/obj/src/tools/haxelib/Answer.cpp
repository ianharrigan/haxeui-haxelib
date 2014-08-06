#include <hxcpp.h>

#ifndef INCLUDED_tools_haxelib_Answer
#include <tools/haxelib/Answer.h>
#endif
namespace tools{
namespace haxelib{

::tools::haxelib::Answer Answer_obj::Always;

::tools::haxelib::Answer Answer_obj::No;

::tools::haxelib::Answer Answer_obj::Yes;

HX_DEFINE_CREATE_ENUM(Answer_obj)

int Answer_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Always")) return 2;
	if (inName==HX_CSTRING("No")) return 1;
	if (inName==HX_CSTRING("Yes")) return 0;
	return super::__FindIndex(inName);
}

int Answer_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Always")) return 0;
	if (inName==HX_CSTRING("No")) return 0;
	if (inName==HX_CSTRING("Yes")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Answer_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Always")) return Always;
	if (inName==HX_CSTRING("No")) return No;
	if (inName==HX_CSTRING("Yes")) return Yes;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Yes"),
	HX_CSTRING("No"),
	HX_CSTRING("Always"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Answer_obj::Always,"Always");
	HX_MARK_MEMBER_NAME(Answer_obj::No,"No");
	HX_MARK_MEMBER_NAME(Answer_obj::Yes,"Yes");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Answer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Answer_obj::Always,"Always");
	HX_VISIT_MEMBER_NAME(Answer_obj::No,"No");
	HX_VISIT_MEMBER_NAME(Answer_obj::Yes,"Yes");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Answer_obj::__mClass;

Dynamic __Create_Answer_obj() { return new Answer_obj; }

void Answer_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.Answer"), hx::TCanCast< Answer_obj >,sStaticFields,sMemberFields,
	&__Create_Answer_obj, &__Create,
	&super::__SGetClass(), &CreateAnswer_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Answer_obj::__boot()
{
hx::Static(Always) = hx::CreateEnum< Answer_obj >(HX_CSTRING("Always"),2);
hx::Static(No) = hx::CreateEnum< Answer_obj >(HX_CSTRING("No"),1);
hx::Static(Yes) = hx::CreateEnum< Answer_obj >(HX_CSTRING("Yes"),0);
}


} // end namespace tools
} // end namespace haxelib
