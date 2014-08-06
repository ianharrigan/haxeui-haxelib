#include <hxcpp.h>

#ifndef INCLUDED_tools_haxelib__Main_CommandCategory
#include <tools/haxelib/_Main/CommandCategory.h>
#endif
namespace tools{
namespace haxelib{
namespace _Main{

::tools::haxelib::_Main::CommandCategory CommandCategory_obj::Basic;

::tools::haxelib::_Main::CommandCategory CommandCategory_obj::Development;

::tools::haxelib::_Main::CommandCategory CommandCategory_obj::Information;

::tools::haxelib::_Main::CommandCategory CommandCategory_obj::Miscellaneous;

HX_DEFINE_CREATE_ENUM(CommandCategory_obj)

int CommandCategory_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Basic")) return 0;
	if (inName==HX_CSTRING("Development")) return 2;
	if (inName==HX_CSTRING("Information")) return 1;
	if (inName==HX_CSTRING("Miscellaneous")) return 3;
	return super::__FindIndex(inName);
}

int CommandCategory_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Basic")) return 0;
	if (inName==HX_CSTRING("Development")) return 0;
	if (inName==HX_CSTRING("Information")) return 0;
	if (inName==HX_CSTRING("Miscellaneous")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic CommandCategory_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Basic")) return Basic;
	if (inName==HX_CSTRING("Development")) return Development;
	if (inName==HX_CSTRING("Information")) return Information;
	if (inName==HX_CSTRING("Miscellaneous")) return Miscellaneous;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Basic"),
	HX_CSTRING("Information"),
	HX_CSTRING("Development"),
	HX_CSTRING("Miscellaneous"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CommandCategory_obj::Basic,"Basic");
	HX_MARK_MEMBER_NAME(CommandCategory_obj::Development,"Development");
	HX_MARK_MEMBER_NAME(CommandCategory_obj::Information,"Information");
	HX_MARK_MEMBER_NAME(CommandCategory_obj::Miscellaneous,"Miscellaneous");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CommandCategory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CommandCategory_obj::Basic,"Basic");
	HX_VISIT_MEMBER_NAME(CommandCategory_obj::Development,"Development");
	HX_VISIT_MEMBER_NAME(CommandCategory_obj::Information,"Information");
	HX_VISIT_MEMBER_NAME(CommandCategory_obj::Miscellaneous,"Miscellaneous");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class CommandCategory_obj::__mClass;

Dynamic __Create_CommandCategory_obj() { return new CommandCategory_obj; }

void CommandCategory_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib._Main.CommandCategory"), hx::TCanCast< CommandCategory_obj >,sStaticFields,sMemberFields,
	&__Create_CommandCategory_obj, &__Create,
	&super::__SGetClass(), &CreateCommandCategory_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CommandCategory_obj::__boot()
{
hx::Static(Basic) = hx::CreateEnum< CommandCategory_obj >(HX_CSTRING("Basic"),0);
hx::Static(Development) = hx::CreateEnum< CommandCategory_obj >(HX_CSTRING("Development"),2);
hx::Static(Information) = hx::CreateEnum< CommandCategory_obj >(HX_CSTRING("Information"),1);
hx::Static(Miscellaneous) = hx::CreateEnum< CommandCategory_obj >(HX_CSTRING("Miscellaneous"),3);
}


} // end namespace tools
} // end namespace haxelib
} // end namespace _Main
