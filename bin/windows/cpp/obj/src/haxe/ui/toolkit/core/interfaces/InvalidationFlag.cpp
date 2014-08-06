#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_InvalidationFlag
#include <haxe/ui/toolkit/core/interfaces/InvalidationFlag.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{

Void InvalidationFlag_obj::__construct()
{
	return null();
}

//InvalidationFlag_obj::~InvalidationFlag_obj() { }

Dynamic InvalidationFlag_obj::__CreateEmpty() { return  new InvalidationFlag_obj; }
hx::ObjectPtr< InvalidationFlag_obj > InvalidationFlag_obj::__new()
{  hx::ObjectPtr< InvalidationFlag_obj > result = new InvalidationFlag_obj();
	result->__construct();
	return result;}

Dynamic InvalidationFlag_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InvalidationFlag_obj > result = new InvalidationFlag_obj();
	result->__construct();
	return result;}

int InvalidationFlag_obj::LAYOUT;

int InvalidationFlag_obj::DISPLAY;

int InvalidationFlag_obj::SIZE;

int InvalidationFlag_obj::STATE;

int InvalidationFlag_obj::DATA;

int InvalidationFlag_obj::STYLE;

int InvalidationFlag_obj::ALL;


InvalidationFlag_obj::InvalidationFlag_obj()
{
}

Dynamic InvalidationFlag_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic InvalidationFlag_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void InvalidationFlag_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LAYOUT"),
	HX_CSTRING("DISPLAY"),
	HX_CSTRING("SIZE"),
	HX_CSTRING("STATE"),
	HX_CSTRING("DATA"),
	HX_CSTRING("STYLE"),
	HX_CSTRING("ALL"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::LAYOUT,"LAYOUT");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::DISPLAY,"DISPLAY");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::STATE,"STATE");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::DATA,"DATA");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::STYLE,"STYLE");
	HX_MARK_MEMBER_NAME(InvalidationFlag_obj::ALL,"ALL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::LAYOUT,"LAYOUT");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::DISPLAY,"DISPLAY");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::STATE,"STATE");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::DATA,"DATA");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::STYLE,"STYLE");
	HX_VISIT_MEMBER_NAME(InvalidationFlag_obj::ALL,"ALL");
};

#endif

Class InvalidationFlag_obj::__mClass;

void InvalidationFlag_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.interfaces.InvalidationFlag"), hx::TCanCast< InvalidationFlag_obj> ,sStaticFields,sMemberFields,
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

void InvalidationFlag_obj::__boot()
{
	LAYOUT= (int)1;
	DISPLAY= (int)16;
	SIZE= (int)256;
	STATE= (int)4096;
	DATA= (int)65536;
	STYLE= (int)1048576;
	ALL= (int)1118481;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces
