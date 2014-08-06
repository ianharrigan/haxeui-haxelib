#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_base_HorizontalAlign
#include <haxe/ui/toolkit/core/base/HorizontalAlign.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace base{

Void HorizontalAlign_obj::__construct()
{
	return null();
}

//HorizontalAlign_obj::~HorizontalAlign_obj() { }

Dynamic HorizontalAlign_obj::__CreateEmpty() { return  new HorizontalAlign_obj; }
hx::ObjectPtr< HorizontalAlign_obj > HorizontalAlign_obj::__new()
{  hx::ObjectPtr< HorizontalAlign_obj > result = new HorizontalAlign_obj();
	result->__construct();
	return result;}

Dynamic HorizontalAlign_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HorizontalAlign_obj > result = new HorizontalAlign_obj();
	result->__construct();
	return result;}

::String HorizontalAlign_obj::LEFT;

::String HorizontalAlign_obj::RIGHT;

::String HorizontalAlign_obj::CENTER;


HorizontalAlign_obj::HorizontalAlign_obj()
{
}

Dynamic HorizontalAlign_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic HorizontalAlign_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HorizontalAlign_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("CENTER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorizontalAlign_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HorizontalAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(HorizontalAlign_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(HorizontalAlign_obj::CENTER,"CENTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(HorizontalAlign_obj::CENTER,"CENTER");
};

#endif

Class HorizontalAlign_obj::__mClass;

void HorizontalAlign_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.base.HorizontalAlign"), hx::TCanCast< HorizontalAlign_obj> ,sStaticFields,sMemberFields,
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

void HorizontalAlign_obj::__boot()
{
	LEFT= HX_CSTRING("left");
	RIGHT= HX_CSTRING("right");
	CENTER= HX_CSTRING("center");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace base
