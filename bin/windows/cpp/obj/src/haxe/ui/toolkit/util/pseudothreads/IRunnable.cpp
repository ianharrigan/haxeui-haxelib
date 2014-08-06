#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{

HX_DEFINE_DYNAMIC_FUNC0(IRunnable_obj,run,)


static ::String sMemberFields[] = {
	HX_CSTRING("run"),
	HX_CSTRING("isComplete"),
	HX_CSTRING("progress"),
	HX_CSTRING("total"),
	HX_CSTRING("runningTimeShare"),
	HX_CSTRING("needToExit"),
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IRunnable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IRunnable_obj::__mClass,"__mClass");
};

#endif

Class IRunnable_obj::__mClass;

void IRunnable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.util.pseudothreads.IRunnable"), hx::TCanCast< IRunnable_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IRunnable_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads
