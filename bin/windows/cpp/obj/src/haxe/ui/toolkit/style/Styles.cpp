#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void Styles_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.style.Styles","new",0x60628713,"haxe.ui.toolkit.style.Styles.new","haxe/ui/toolkit/style/Styles.hx",11,0x4c5a7a1b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(12)
	this->_styles = _g;
	HX_STACK_LINE(13)
	Array< ::String > _g1 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(13)
	this->_styleRules = _g1;
}
;
	return null();
}

//Styles_obj::~Styles_obj() { }

Dynamic Styles_obj::__CreateEmpty() { return  new Styles_obj; }
hx::ObjectPtr< Styles_obj > Styles_obj::__new()
{  hx::ObjectPtr< Styles_obj > result = new Styles_obj();
	result->__construct();
	return result;}

Dynamic Styles_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Styles_obj > result = new Styles_obj();
	result->__construct();
	return result;}

::haxe::ui::toolkit::style::Style Styles_obj::addStyle( ::String rule,::haxe::ui::toolkit::style::Style style){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Styles","addStyle",0x3039ebbd,"haxe.ui.toolkit.style.Styles.addStyle","haxe/ui/toolkit/style/Styles.hx",16,0x4c5a7a1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rule,"rule")
	HX_STACK_ARG(style,"style")
	HX_STACK_LINE(17)
	int _g = rule.indexOf(HX_CSTRING(","),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	if (((_g != (int)-1))){
		HX_STACK_LINE(18)
		Array< ::String > rules = rule.split(HX_CSTRING(","));		HX_STACK_VAR(rules,"rules");
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(19)
			while((true)){
				HX_STACK_LINE(19)
				if ((!(((_g1 < rules->length))))){
					HX_STACK_LINE(19)
					break;
				}
				HX_STACK_LINE(19)
				::String r = rules->__get(_g1);		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(19)
				++(_g1);
				HX_STACK_LINE(20)
				::String _g11 = ::StringTools_obj::trim(r);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(20)
				r = _g11;
				HX_STACK_LINE(21)
				this->addStyle(r,style);
			}
		}
		HX_STACK_LINE(23)
		return null();
	}
	HX_STACK_LINE(26)
	::haxe::ui::toolkit::style::Style currentStyle = this->getStyle(rule);		HX_STACK_VAR(currentStyle,"currentStyle");
	HX_STACK_LINE(27)
	if (((currentStyle != null()))){
		HX_STACK_LINE(28)
		currentStyle->merge(style);
		HX_STACK_LINE(29)
		style = currentStyle;
	}
	else{
		HX_STACK_LINE(31)
		this->_styleRules->push(rule);
	}
	HX_STACK_LINE(34)
	this->_styles->set(rule,style);
	HX_STACK_LINE(35)
	return style;
}


HX_DEFINE_DYNAMIC_FUNC2(Styles_obj,addStyle,return )

::haxe::ui::toolkit::style::Style Styles_obj::getStyle( ::String rule){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Styles","getStyle",0x16b3d528,"haxe.ui.toolkit.style.Styles.getStyle","haxe/ui/toolkit/style/Styles.hx",39,0x4c5a7a1b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rule,"rule")
	HX_STACK_LINE(39)
	return this->_styles->get(rule);
}


HX_DEFINE_DYNAMIC_FUNC1(Styles_obj,getStyle,return )

Dynamic Styles_obj::get_rules( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Styles","get_rules",0x697cff41,"haxe.ui.toolkit.style.Styles.get_rules","haxe/ui/toolkit/style/Styles.hx",43,0x4c5a7a1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return this->_styleRules->iterator();
}


HX_DEFINE_DYNAMIC_FUNC0(Styles_obj,get_rules,return )


Styles_obj::Styles_obj()
{
}

void Styles_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Styles);
	HX_MARK_MEMBER_NAME(_styles,"_styles");
	HX_MARK_MEMBER_NAME(_styleRules,"_styleRules");
	HX_MARK_MEMBER_NAME(rules,"rules");
	HX_MARK_END_CLASS();
}

void Styles_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_styles,"_styles");
	HX_VISIT_MEMBER_NAME(_styleRules,"_styleRules");
	HX_VISIT_MEMBER_NAME(rules,"rules");
}

Dynamic Styles_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { return inCallProp ? get_rules() : rules; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { return _styles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addStyle") ) { return addStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"getStyle") ) { return getStyle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_rules") ) { return get_rules_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_styleRules") ) { return _styleRules; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Styles_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { rules=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { _styles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_styleRules") ) { _styleRules=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Styles_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_styles"));
	outFields->push(HX_CSTRING("_styleRules"));
	outFields->push(HX_CSTRING("rules"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Styles_obj,_styles),HX_CSTRING("_styles")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Styles_obj,_styleRules),HX_CSTRING("_styleRules")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Styles_obj,rules),HX_CSTRING("rules")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_styles"),
	HX_CSTRING("_styleRules"),
	HX_CSTRING("rules"),
	HX_CSTRING("addStyle"),
	HX_CSTRING("getStyle"),
	HX_CSTRING("get_rules"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Styles_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Styles_obj::__mClass,"__mClass");
};

#endif

Class Styles_obj::__mClass;

void Styles_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.Styles"), hx::TCanCast< Styles_obj> ,sStaticFields,sMemberFields,
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

void Styles_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
