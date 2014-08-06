#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#include <haxe/ui/toolkit/style/StyleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#include <haxe/ui/toolkit/themes/Theme.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{

Void Theme_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","new",0x02ce92f9,"haxe.ui.toolkit.themes.Theme.new","haxe/ui/toolkit/themes/Theme.hx",15,0xd5f9de17)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Theme_obj::~Theme_obj() { }

Dynamic Theme_obj::__CreateEmpty() { return  new Theme_obj; }
hx::ObjectPtr< Theme_obj > Theme_obj::__new()
{  hx::ObjectPtr< Theme_obj > result = new Theme_obj();
	result->__construct();
	return result;}

Dynamic Theme_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Theme_obj > result = new Theme_obj();
	result->__construct();
	return result;}

Void Theme_obj::apply( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","apply",0xccdee047,"haxe.ui.toolkit.themes.Theme.apply","haxe/ui/toolkit/themes/Theme.hx",18,0xd5f9de17)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		this->applyAssetList(this->name);
		HX_STACK_LINE(20)
		this->applyAssetList(HX_CSTRING("__PUBLIC__"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Theme_obj,apply,(void))

Void Theme_obj::applyAssetList( ::String n){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","applyAssetList",0x7318a927,"haxe.ui.toolkit.themes.Theme.applyAssetList","haxe/ui/toolkit/themes/Theme.hx",23,0xd5f9de17)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(24)
		Dynamic list = ::haxe::ui::toolkit::themes::Theme_obj::assets->get(n);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(25)
		if (((list == null()))){
			HX_STACK_LINE(26)
			return null();
		}
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(29)
			while((true)){
				HX_STACK_LINE(29)
				if ((!(((_g < list->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(29)
					break;
				}
				HX_STACK_LINE(29)
				Dynamic asset = list->__GetItem(_g);		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(29)
				++(_g);
				HX_STACK_LINE(30)
				this->applyAsset(asset);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,applyAssetList,(void))

Void Theme_obj::applyAsset( Dynamic asset){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","applyAsset",0xdbf29829,"haxe.ui.toolkit.themes.Theme.applyAsset","haxe/ui/toolkit/themes/Theme.hx",35,0xd5f9de17)
		HX_STACK_THIS(this)
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(35)
		if ((::Std_obj::is(asset,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(36)
			if ((::StringTools_obj::endsWith(asset,HX_CSTRING(".css")))){
				HX_STACK_LINE(37)
				::String _g = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(asset,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(37)
				::haxe::ui::toolkit::style::Styles _g1 = ::haxe::ui::toolkit::style::StyleParser_obj::fromString(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(37)
				::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyles(_g1);
			}
		}
		else{
			HX_STACK_LINE(39)
			if ((::Std_obj::is(asset,hx::ClassOf< ::Class >()))){
				HX_STACK_LINE(40)
				::haxe::ui::toolkit::style::Styles styles = ::Type_obj::createInstance(asset,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(styles,"styles");
				HX_STACK_LINE(41)
				if (((styles != null()))){
					HX_STACK_LINE(42)
					::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyles(styles);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,applyAsset,(void))

::haxe::ds::StringMap Theme_obj::assets;

Void Theme_obj::addPublicAsset( Dynamic asset){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","addPublicAsset",0xf02b5ded,"haxe.ui.toolkit.themes.Theme.addPublicAsset","haxe/ui/toolkit/themes/Theme.hx",48,0xd5f9de17)
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(48)
		::haxe::ui::toolkit::themes::Theme_obj::addAsset(HX_CSTRING("__PUBLIC__"),asset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Theme_obj,addPublicAsset,(void))

Void Theme_obj::addAsset( ::String t,Dynamic asset){
{
		HX_STACK_FRAME("haxe.ui.toolkit.themes.Theme","addAsset",0xcb76c2d6,"haxe.ui.toolkit.themes.Theme.addAsset","haxe/ui/toolkit/themes/Theme.hx",51,0xd5f9de17)
		HX_STACK_ARG(t,"t")
		HX_STACK_ARG(asset,"asset")
		HX_STACK_LINE(52)
		Dynamic list = ::haxe::ui::toolkit::themes::Theme_obj::assets->get(t);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(53)
		if (((list == null()))){
			HX_STACK_LINE(54)
			Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			list = _g;
			HX_STACK_LINE(55)
			::haxe::ui::toolkit::themes::Theme_obj::assets->set(t,list);
		}
		HX_STACK_LINE(57)
		list->__Field(HX_CSTRING("push"),true)(asset);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Theme_obj,addAsset,(void))


Theme_obj::Theme_obj()
{
}

void Theme_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Theme);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Theme_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Theme_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { return assets; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addAsset") ) { return addAsset_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"applyAsset") ) { return applyAsset_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addPublicAsset") ) { return addPublicAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"applyAssetList") ) { return applyAssetList_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Theme_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"assets") ) { assets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Theme_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("assets"),
	HX_CSTRING("addPublicAsset"),
	HX_CSTRING("addAsset"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Theme_obj,name),HX_CSTRING("name")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("apply"),
	HX_CSTRING("applyAssetList"),
	HX_CSTRING("applyAsset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Theme_obj::assets,"assets");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Theme_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Theme_obj::assets,"assets");
};

#endif

Class Theme_obj::__mClass;

void Theme_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.themes.Theme"), hx::TCanCast< Theme_obj> ,sStaticFields,sMemberFields,
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

void Theme_obj::__boot()
{
	assets= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes
