#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_themes_GradientTheme
#include <haxe/ui/toolkit/themes/GradientTheme.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{

Void GradientTheme_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.themes.GradientTheme","new",0x750828e9,"haxe.ui.toolkit.themes.GradientTheme.new","haxe/ui/toolkit/themes/GradientTheme.hx",4,0x7744d627)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
	HX_STACK_LINE(6)
	this->name = HX_CSTRING("gradient");
}
;
	return null();
}

//GradientTheme_obj::~GradientTheme_obj() { }

Dynamic GradientTheme_obj::__CreateEmpty() { return  new GradientTheme_obj; }
hx::ObjectPtr< GradientTheme_obj > GradientTheme_obj::__new()
{  hx::ObjectPtr< GradientTheme_obj > result = new GradientTheme_obj();
	result->__construct();
	return result;}

Dynamic GradientTheme_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GradientTheme_obj > result = new GradientTheme_obj();
	result->__construct();
	return result;}


GradientTheme_obj::GradientTheme_obj()
{
}

Dynamic GradientTheme_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GradientTheme_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GradientTheme_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(GradientTheme_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GradientTheme_obj::__mClass,"__mClass");
};

#endif

Class GradientTheme_obj::__mClass;

void GradientTheme_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.themes.GradientTheme"), hx::TCanCast< GradientTheme_obj> ,sStaticFields,sMemberFields,
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

void GradientTheme_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes
