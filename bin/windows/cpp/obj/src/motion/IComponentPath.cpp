#include <hxcpp.h>

#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
namespace motion{

HX_DEFINE_DYNAMIC_FUNC1(IComponentPath_obj,calculate,return )


static ::String sMemberFields[] = {
	HX_CSTRING("end"),
	HX_CSTRING("start"),
	HX_CSTRING("calculate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IComponentPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IComponentPath_obj::__mClass,"__mClass");
};

#endif

Class IComponentPath_obj::__mClass;

void IComponentPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.IComponentPath"), hx::TCanCast< IComponentPath_obj> ,0,sMemberFields,
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

void IComponentPath_obj::__boot()
{
}

} // end namespace motion
