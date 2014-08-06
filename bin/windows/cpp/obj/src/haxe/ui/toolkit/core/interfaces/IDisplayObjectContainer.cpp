#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC1(IDisplayObjectContainer_obj,indexOfChild,return )

HX_DEFINE_DYNAMIC_FUNC1(IDisplayObjectContainer_obj,getChildAt,return )

HX_DEFINE_DYNAMIC_FUNC2(IDisplayObjectContainer_obj,addChildAt,return )

HX_DEFINE_DYNAMIC_FUNC1(IDisplayObjectContainer_obj,addChild,return )

HX_DEFINE_DYNAMIC_FUNC2(IDisplayObjectContainer_obj,removeChild,return )

HX_DEFINE_DYNAMIC_FUNC2(IDisplayObjectContainer_obj,removeChildAt,return )

HX_DEFINE_DYNAMIC_FUNC3(IDisplayObjectContainer_obj,findChild,return )

HX_DEFINE_DYNAMIC_FUNC1(IDisplayObjectContainer_obj,findChildAs,return )

HX_DEFINE_DYNAMIC_FUNC1(IDisplayObjectContainer_obj,removeAllChildren,)

HX_DEFINE_DYNAMIC_FUNC1(IDisplayObjectContainer_obj,contains,return )

HX_DEFINE_DYNAMIC_FUNC2(IDisplayObjectContainer_obj,setChildIndex,)


static ::String sMemberFields[] = {
	HX_CSTRING("numChildren"),
	HX_CSTRING("children"),
	HX_CSTRING("indexOfChild"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("addChild"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("findChild"),
	HX_CSTRING("findChildAs"),
	HX_CSTRING("removeAllChildren"),
	HX_CSTRING("contains"),
	HX_CSTRING("setChildIndex"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

Class IDisplayObjectContainer_obj::__mClass;

void IDisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.interfaces.IDisplayObjectContainer"), hx::TCanCast< IDisplayObjectContainer_obj> ,0,sMemberFields,
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

void IDisplayObjectContainer_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces
