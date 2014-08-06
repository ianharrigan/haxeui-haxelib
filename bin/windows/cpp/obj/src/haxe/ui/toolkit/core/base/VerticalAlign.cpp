#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_base_VerticalAlign
#include <haxe/ui/toolkit/core/base/VerticalAlign.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace base{

Void VerticalAlign_obj::__construct()
{
	return null();
}

//VerticalAlign_obj::~VerticalAlign_obj() { }

Dynamic VerticalAlign_obj::__CreateEmpty() { return  new VerticalAlign_obj; }
hx::ObjectPtr< VerticalAlign_obj > VerticalAlign_obj::__new()
{  hx::ObjectPtr< VerticalAlign_obj > result = new VerticalAlign_obj();
	result->__construct();
	return result;}

Dynamic VerticalAlign_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VerticalAlign_obj > result = new VerticalAlign_obj();
	result->__construct();
	return result;}

::String VerticalAlign_obj::TOP;

::String VerticalAlign_obj::BOTTOM;

::String VerticalAlign_obj::CENTER;


VerticalAlign_obj::VerticalAlign_obj()
{
}

Dynamic VerticalAlign_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic VerticalAlign_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void VerticalAlign_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TOP"),
	HX_CSTRING("BOTTOM"),
	HX_CSTRING("CENTER"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VerticalAlign_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VerticalAlign_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(VerticalAlign_obj::BOTTOM,"BOTTOM");
	HX_MARK_MEMBER_NAME(VerticalAlign_obj::CENTER,"CENTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VerticalAlign_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(VerticalAlign_obj::BOTTOM,"BOTTOM");
	HX_VISIT_MEMBER_NAME(VerticalAlign_obj::CENTER,"CENTER");
};

#endif

Class VerticalAlign_obj::__mClass;

void VerticalAlign_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.base.VerticalAlign"), hx::TCanCast< VerticalAlign_obj> ,sStaticFields,sMemberFields,
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

void VerticalAlign_obj::__boot()
{
	TOP= HX_CSTRING("top");
	BOTTOM= HX_CSTRING("bottom");
	CENTER= HX_CSTRING("center");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace base
