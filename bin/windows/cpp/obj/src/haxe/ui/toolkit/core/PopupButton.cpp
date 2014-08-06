#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButton
#include <haxe/ui/toolkit/core/PopupButton.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void PopupButton_obj::__construct()
{
	return null();
}

//PopupButton_obj::~PopupButton_obj() { }

Dynamic PopupButton_obj::__CreateEmpty() { return  new PopupButton_obj; }
hx::ObjectPtr< PopupButton_obj > PopupButton_obj::__new()
{  hx::ObjectPtr< PopupButton_obj > result = new PopupButton_obj();
	result->__construct();
	return result;}

Dynamic PopupButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupButton_obj > result = new PopupButton_obj();
	result->__construct();
	return result;}

int PopupButton_obj::OK;

int PopupButton_obj::YES;

int PopupButton_obj::NO;

int PopupButton_obj::CANCEL;

int PopupButton_obj::CONFIRM;

int PopupButton_obj::CLOSE;

int PopupButton_obj::CUSTOM;


PopupButton_obj::PopupButton_obj()
{
}

Dynamic PopupButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic PopupButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupButton_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("OK"),
	HX_CSTRING("YES"),
	HX_CSTRING("NO"),
	HX_CSTRING("CANCEL"),
	HX_CSTRING("CONFIRM"),
	HX_CSTRING("CLOSE"),
	HX_CSTRING("CUSTOM"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PopupButton_obj::OK,"OK");
	HX_MARK_MEMBER_NAME(PopupButton_obj::YES,"YES");
	HX_MARK_MEMBER_NAME(PopupButton_obj::NO,"NO");
	HX_MARK_MEMBER_NAME(PopupButton_obj::CANCEL,"CANCEL");
	HX_MARK_MEMBER_NAME(PopupButton_obj::CONFIRM,"CONFIRM");
	HX_MARK_MEMBER_NAME(PopupButton_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(PopupButton_obj::CUSTOM,"CUSTOM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::OK,"OK");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::YES,"YES");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::NO,"NO");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::CANCEL,"CANCEL");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::CONFIRM,"CONFIRM");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(PopupButton_obj::CUSTOM,"CUSTOM");
};

#endif

Class PopupButton_obj::__mClass;

void PopupButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.PopupButton"), hx::TCanCast< PopupButton_obj> ,sStaticFields,sMemberFields,
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

void PopupButton_obj::__boot()
{
	OK= (int)1;
	YES= (int)16;
	NO= (int)256;
	CANCEL= (int)4096;
	CONFIRM= (int)65536;
	CLOSE= (int)1048576;
	CUSTOM= (int)16777216;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
