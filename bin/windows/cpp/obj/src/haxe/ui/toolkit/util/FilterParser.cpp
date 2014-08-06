#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_FilterParser
#include <haxe/ui/toolkit/util/FilterParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_TypeParser
#include <haxe/ui/toolkit/util/TypeParser.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void FilterParser_obj::__construct()
{
	return null();
}

//FilterParser_obj::~FilterParser_obj() { }

Dynamic FilterParser_obj::__CreateEmpty() { return  new FilterParser_obj; }
hx::ObjectPtr< FilterParser_obj > FilterParser_obj::__new()
{  hx::ObjectPtr< FilterParser_obj > result = new FilterParser_obj();
	result->__construct();
	return result;}

Dynamic FilterParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterParser_obj > result = new FilterParser_obj();
	result->__construct();
	return result;}

Dynamic FilterParser_obj::filterParamDefaults;

::openfl::filters::BitmapFilter FilterParser_obj::parseFilter( ::String filterString){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","parseFilter",0x4523f21e,"haxe.ui.toolkit.util.FilterParser.parseFilter","haxe/ui/toolkit/util/FilterParser.hx",15,0x2af1b1dd)
	HX_STACK_ARG(filterString,"filterString")
	HX_STACK_LINE(19)
	::openfl::filters::BitmapFilter filter = null();		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(20)
	::String filterName = null();		HX_STACK_VAR(filterName,"filterName");
	HX_STACK_LINE(21)
	::String filterParams = null();		HX_STACK_VAR(filterParams,"filterParams");
	HX_STACK_LINE(23)
	int n1 = filterString.indexOf(HX_CSTRING("("),null());		HX_STACK_VAR(n1,"n1");
	HX_STACK_LINE(24)
	int n2 = filterString.indexOf(HX_CSTRING(")"),null());		HX_STACK_VAR(n2,"n2");
	HX_STACK_LINE(25)
	if (((bool((n1 != (int)-1)) && bool((n2 != (int)-1))))){
		HX_STACK_LINE(26)
		::String _g = filterString.substr((int)0,n1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		filterName = _g;
		HX_STACK_LINE(27)
		::String _g1 = filterString.substr((n1 + (int)1),((n2 - n1) - (int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		filterParams = _g1;
	}
	else{
		HX_STACK_LINE(29)
		filterName = filterString;
	}
	HX_STACK_LINE(32)
	if (((filterName != null()))){
		HX_STACK_LINE(33)
		::String _g2 = ::StringTools_obj::trim(filterName);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(33)
		filterName = _g2;
		HX_STACK_LINE(34)
		::openfl::filters::BitmapFilter _g3 = ::haxe::ui::toolkit::util::FilterParser_obj::createFilter(filterName,filterParams);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(34)
		filter = _g3;
	}
	HX_STACK_LINE(37)
	return filter;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,parseFilter,return )

::openfl::filters::BitmapFilter FilterParser_obj::createFilter( ::String filterName,::String filterParams){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","createFilter",0x7eb952a1,"haxe.ui.toolkit.util.FilterParser.createFilter","haxe/ui/toolkit/util/FilterParser.hx",40,0x2af1b1dd)
	HX_STACK_ARG(filterName,"filterName")
	HX_STACK_ARG(filterParams,"filterParams")
	HX_STACK_LINE(41)
	::openfl::filters::BitmapFilter filter = null();		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(43)
	Array< ::String > params = null();		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(44)
	if (((filterParams != null()))){
		HX_STACK_LINE(45)
		Array< ::String > _g = filterParams.split(HX_CSTRING(","));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		params = _g;
	}
	HX_STACK_LINE(48)
	Array< ::String > _g1 = ::haxe::ui::toolkit::util::FilterParser_obj::copyFilterDefaults(filterName,params);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(48)
	params = _g1;
	HX_STACK_LINE(50)
	if (((filterName == HX_CSTRING("blur")))){
		HX_STACK_LINE(51)
		::openfl::filters::BlurFilter _g2 = ::haxe::ui::toolkit::util::FilterParser_obj::createBlurFilter(params);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(51)
		filter = _g2;
	}
	else{
		HX_STACK_LINE(52)
		if (((filterName == HX_CSTRING("dropShadow")))){
			HX_STACK_LINE(53)
			::openfl::filters::DropShadowFilter _g3 = ::haxe::ui::toolkit::util::FilterParser_obj::createDropShadowFilter(params);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(53)
			filter = _g3;
		}
		else{
			HX_STACK_LINE(54)
			if (((filterName == HX_CSTRING("glow")))){
				HX_STACK_LINE(55)
				::openfl::filters::GlowFilter _g4 = ::haxe::ui::toolkit::util::FilterParser_obj::createGlowFilter(params);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(55)
				filter = _g4;
			}
		}
	}
	HX_STACK_LINE(58)
	return filter;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FilterParser_obj,createFilter,return )

::openfl::filters::BlurFilter FilterParser_obj::createBlurFilter( Array< ::String > params){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","createBlurFilter",0x39a32928,"haxe.ui.toolkit.util.FilterParser.createBlurFilter","haxe/ui/toolkit/util/FilterParser.hx",62,0x2af1b1dd)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(64)
	Float _g = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)0));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(65)
	Float _g1 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)1));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(66)
	int _g2 = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(params->__get((int)2));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(63)
	::openfl::filters::BlurFilter filter = ::openfl::filters::BlurFilter_obj::__new(_g,_g1,_g2);		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(68)
	return filter;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,createBlurFilter,return )

::openfl::filters::DropShadowFilter FilterParser_obj::createDropShadowFilter( Array< ::String > params){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","createDropShadowFilter",0x1f3562b0,"haxe.ui.toolkit.util.FilterParser.createDropShadowFilter","haxe/ui/toolkit/util/FilterParser.hx",72,0x2af1b1dd)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(74)
	Float _g = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)0));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(75)
	Float _g1 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)1));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(76)
	int _g2 = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(params->__get((int)2));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(77)
	Float _g3 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)3));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(78)
	Float _g4 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)4));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(79)
	Float _g5 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)5));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(80)
	Float _g6 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)6));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(81)
	int _g7 = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(params->__get((int)7));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(82)
	bool _g8 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(params->__get((int)8));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(83)
	bool _g9 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(params->__get((int)9));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(84)
	bool _g10 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(params->__get((int)10));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(73)
	::openfl::filters::DropShadowFilter filter = ::openfl::filters::DropShadowFilter_obj::__new(_g,_g1,_g2,_g3,_g4,_g5,_g6,_g7,_g8,_g9,_g10);		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(86)
	return filter;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,createDropShadowFilter,return )

::openfl::filters::GlowFilter FilterParser_obj::createGlowFilter( Array< ::String > params){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","createGlowFilter",0x73d4258e,"haxe.ui.toolkit.util.FilterParser.createGlowFilter","haxe/ui/toolkit/util/FilterParser.hx",90,0x2af1b1dd)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(92)
	int _g = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(params->__get((int)0));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(93)
	Float _g1 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)1));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(94)
	Float _g2 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)2));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(95)
	Float _g3 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)3));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(96)
	Float _g4 = ::haxe::ui::toolkit::util::TypeParser_obj::parseFloat(params->__get((int)4));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(97)
	int _g5 = ::haxe::ui::toolkit::util::TypeParser_obj::parseInt(params->__get((int)5));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(98)
	bool _g6 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(params->__get((int)6));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(99)
	bool _g7 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(params->__get((int)7));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(91)
	::openfl::filters::GlowFilter filter = ::openfl::filters::GlowFilter_obj::__new(_g,_g1,_g2,_g3,_g4,_g5,_g6,_g7);		HX_STACK_VAR(filter,"filter");
	HX_STACK_LINE(101)
	return filter;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FilterParser_obj,createGlowFilter,return )

Array< ::String > FilterParser_obj::copyFilterDefaults( ::String filterName,Array< ::String > params){
	HX_STACK_FRAME("haxe.ui.toolkit.util.FilterParser","copyFilterDefaults",0xc80f318c,"haxe.ui.toolkit.util.FilterParser.copyFilterDefaults","haxe/ui/toolkit/util/FilterParser.hx",104,0x2af1b1dd)
	HX_STACK_ARG(filterName,"filterName")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(105)
	Array< ::String > copy = Array_obj< ::String >::__new();		HX_STACK_VAR(copy,"copy");
	HX_STACK_LINE(107)
	Array< ::String > defaultParams = ::Reflect_obj::field(::haxe::ui::toolkit::util::FilterParser_obj::filterParamDefaults,filterName);		HX_STACK_VAR(defaultParams,"defaultParams");
	HX_STACK_LINE(108)
	if (((defaultParams != null()))){
		HX_STACK_LINE(109)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		while((true)){
			HX_STACK_LINE(109)
			if ((!(((_g < defaultParams->length))))){
				HX_STACK_LINE(109)
				break;
			}
			HX_STACK_LINE(109)
			::String p = defaultParams->__get(_g);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(109)
			++(_g);
			HX_STACK_LINE(110)
			copy->push(p);
		}
	}
	HX_STACK_LINE(113)
	if (((params != null()))){
		HX_STACK_LINE(114)
		int n = (int)0;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(115)
		{
			HX_STACK_LINE(115)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			while((true)){
				HX_STACK_LINE(115)
				if ((!(((_g < params->length))))){
					HX_STACK_LINE(115)
					break;
				}
				HX_STACK_LINE(115)
				::String p = params->__get(_g);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(115)
				++(_g);
				HX_STACK_LINE(116)
				copy[n] = p;
				HX_STACK_LINE(117)
				(n)++;
			}
		}
	}
	HX_STACK_LINE(121)
	return copy;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FilterParser_obj,copyFilterDefaults,return )


FilterParser_obj::FilterParser_obj()
{
}

Dynamic FilterParser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"parseFilter") ) { return parseFilter_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createFilter") ) { return createFilter_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createBlurFilter") ) { return createBlurFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"createGlowFilter") ) { return createGlowFilter_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"copyFilterDefaults") ) { return copyFilterDefaults_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"filterParamDefaults") ) { return filterParamDefaults; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createDropShadowFilter") ) { return createDropShadowFilter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilterParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"filterParamDefaults") ) { filterParamDefaults=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FilterParser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("filterParamDefaults"),
	HX_CSTRING("parseFilter"),
	HX_CSTRING("createFilter"),
	HX_CSTRING("createBlurFilter"),
	HX_CSTRING("createDropShadowFilter"),
	HX_CSTRING("createGlowFilter"),
	HX_CSTRING("copyFilterDefaults"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterParser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FilterParser_obj::filterParamDefaults,"filterParamDefaults");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterParser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FilterParser_obj::filterParamDefaults,"filterParamDefaults");
};

#endif

Class FilterParser_obj::__mClass;

void FilterParser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.util.FilterParser"), hx::TCanCast< FilterParser_obj> ,sStaticFields,sMemberFields,
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

void FilterParser_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/util/FilterParser.hx",9,0x2af1b1dd)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("blur") , Array_obj< ::String >::__new().Add(HX_CSTRING("4")).Add(HX_CSTRING("4")).Add(HX_CSTRING("1")),false);
			__result->Add(HX_CSTRING("dropShadow") , Array_obj< ::String >::__new().Add(HX_CSTRING("4")).Add(HX_CSTRING("45")).Add(HX_CSTRING("0")).Add(HX_CSTRING("1")).Add(HX_CSTRING("4")).Add(HX_CSTRING("4")).Add(HX_CSTRING("1")).Add(HX_CSTRING("1")).Add(HX_CSTRING("false")).Add(HX_CSTRING("false")).Add(HX_CSTRING("false")),false);
			__result->Add(HX_CSTRING("glow") , Array_obj< ::String >::__new().Add(HX_CSTRING("16711680")).Add(HX_CSTRING("1")).Add(HX_CSTRING("6")).Add(HX_CSTRING("6")).Add(HX_CSTRING("2")).Add(HX_CSTRING("1")).Add(HX_CSTRING("false")).Add(HX_CSTRING("false")),false);
			return __result;
		}
		return null();
	}
};
	filterParamDefaults= _Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
