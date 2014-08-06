#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_themes_DefaultTheme
#include <haxe/ui/toolkit/themes/DefaultTheme.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{

Void DefaultTheme_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.themes.DefaultTheme","new",0x80740ebc,"haxe.ui.toolkit.themes.DefaultTheme.new","haxe/ui/toolkit/themes/DefaultTheme.hx",4,0x0b2adcb4)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	this->name = HX_CSTRING("default");
}
;
	return null();
}

//DefaultTheme_obj::~DefaultTheme_obj() { }

Dynamic DefaultTheme_obj::__CreateEmpty() { return  new DefaultTheme_obj; }
hx::ObjectPtr< DefaultTheme_obj > DefaultTheme_obj::__new()
{  hx::ObjectPtr< DefaultTheme_obj > result = new DefaultTheme_obj();
	result->__construct();
	return result;}

Dynamic DefaultTheme_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultTheme_obj > result = new DefaultTheme_obj();
	result->__construct();
	return result;}


DefaultTheme_obj::DefaultTheme_obj()
{
}

Dynamic DefaultTheme_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultTheme_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultTheme_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultTheme_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultTheme_obj::__mClass,"__mClass");
};

#endif

Class DefaultTheme_obj::__mClass;

void DefaultTheme_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.themes.DefaultTheme"), hx::TCanCast< DefaultTheme_obj> ,sStaticFields,sMemberFields,
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

void DefaultTheme_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes
