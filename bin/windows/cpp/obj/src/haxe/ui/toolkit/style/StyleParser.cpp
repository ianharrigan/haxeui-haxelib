#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils
#include <haxe/ui/toolkit/hscript/ScriptUtils.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#include <haxe/ui/toolkit/style/StyleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_FilterParser
#include <haxe/ui/toolkit/util/FilterParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_StringUtil
#include <haxe/ui/toolkit/util/StringUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void StyleParser_obj::__construct()
{
	return null();
}

//StyleParser_obj::~StyleParser_obj() { }

Dynamic StyleParser_obj::__CreateEmpty() { return  new StyleParser_obj; }
hx::ObjectPtr< StyleParser_obj > StyleParser_obj::__new()
{  hx::ObjectPtr< StyleParser_obj > result = new StyleParser_obj();
	result->__construct();
	return result;}

Dynamic StyleParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleParser_obj > result = new StyleParser_obj();
	result->__construct();
	return result;}

::haxe::ui::toolkit::style::Styles StyleParser_obj::fromString( ::String styleString){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleParser","fromString",0xb7a75218,"haxe.ui.toolkit.style.StyleParser.fromString","haxe/ui/toolkit/style/StyleParser.hx",9,0xa41d672f)
	HX_STACK_ARG(styleString,"styleString")
	HX_STACK_LINE(10)
	if (((bool((styleString == null())) || bool((styleString.length == (int)0))))){
		HX_STACK_LINE(11)
		return ::haxe::ui::toolkit::style::Styles_obj::__new();
	}
	HX_STACK_LINE(14)
	::haxe::ui::toolkit::style::Styles styles = ::haxe::ui::toolkit::style::Styles_obj::__new();		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(16)
	int n1 = (int)-1;		HX_STACK_VAR(n1,"n1");
	HX_STACK_LINE(17)
	int n2 = styleString.indexOf(HX_CSTRING("{"),(int)0);		HX_STACK_VAR(n2,"n2");
	HX_STACK_LINE(18)
	while((true)){
		HX_STACK_LINE(18)
		if ((!(((n2 > (int)-1))))){
			HX_STACK_LINE(18)
			break;
		}
		HX_STACK_LINE(19)
		int n3 = styleString.indexOf(HX_CSTRING("}"),n2);		HX_STACK_VAR(n3,"n3");
		HX_STACK_LINE(21)
		::String _g = styleString.substr((n1 + (int)1),((n2 - n1) - (int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		::String styleName = ::StringTools_obj::trim(_g);		HX_STACK_VAR(styleName,"styleName");
		HX_STACK_LINE(22)
		::String styleData = styleString.substr((n2 + (int)1),((n3 - n2) - (int)1));		HX_STACK_VAR(styleData,"styleData");
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(style,"style");
		HX_STACK_LINE(24)
		Array< ::String > props = styleData.split(HX_CSTRING(";"));		HX_STACK_VAR(props,"props");
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(25)
			while((true)){
				HX_STACK_LINE(25)
				if ((!(((_g1 < props->length))))){
					HX_STACK_LINE(25)
					break;
				}
				HX_STACK_LINE(25)
				::String prop = props->__get(_g1);		HX_STACK_VAR(prop,"prop");
				HX_STACK_LINE(25)
				++(_g1);
				HX_STACK_LINE(26)
				::String _g11 = ::StringTools_obj::trim(prop);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(26)
				prop = _g11;
				HX_STACK_LINE(27)
				if ((::StringTools_obj::startsWith(prop,HX_CSTRING("//")))){
					HX_STACK_LINE(28)
					continue;
				}
				HX_STACK_LINE(31)
				if (((bool((prop != null())) && bool((prop.length > (int)0))))){
					HX_STACK_LINE(32)
					Array< ::String > temp = prop.split(HX_CSTRING(":"));		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(33)
					::String propName = ::StringTools_obj::trim(temp->__get((int)0));		HX_STACK_VAR(propName,"propName");
					HX_STACK_LINE(34)
					::String _g2 = ::haxe::ui::toolkit::util::StringUtil_obj::capitalizeHyphens(propName);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(34)
					propName = _g2;
					HX_STACK_LINE(35)
					Dynamic _g3 = ::Reflect_obj::field(style,(HX_CSTRING("set_") + propName));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(35)
					if (((_g3 == null()))){
						HX_STACK_LINE(36)
						::haxe::Log_obj::trace(((HX_CSTRING("Warning: ") + propName) + HX_CSTRING(" no found")),hx::SourceInfo(HX_CSTRING("StyleParser.hx"),36,HX_CSTRING("haxe.ui.toolkit.style.StyleParser"),HX_CSTRING("fromString")));
						HX_STACK_LINE(37)
						continue;
					}
					HX_STACK_LINE(40)
					::String propValue = ::StringTools_obj::trim(temp->__get((int)1));		HX_STACK_VAR(propValue,"propValue");
					HX_STACK_LINE(41)
					if (((temp->length == (int)3))){
						HX_STACK_LINE(42)
						::String _g4 = ::StringTools_obj::trim(temp->__get((int)2));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(42)
						::String _g5 = (HX_CSTRING(":") + _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(42)
						hx::AddEq(propValue,_g5);
					}
					HX_STACK_LINE(45)
					::String _g6 = ::StringTools_obj::replace(propValue,HX_CSTRING("\""),HX_CSTRING(""));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(45)
					propValue = _g6;
					HX_STACK_LINE(46)
					::String _g7 = ::StringTools_obj::replace(propValue,HX_CSTRING("'"),HX_CSTRING(""));		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(46)
					propValue = _g7;
					HX_STACK_LINE(47)
					if (((  ((::haxe::ui::toolkit::hscript::ScriptUtils_obj::isScript(propValue))) ? bool(!(::haxe::ui::toolkit::hscript::ScriptUtils_obj::isCssException(propName))) : bool(false) ))){
						HX_STACK_LINE(48)
						style->addDynamicValue(propName,propValue);
						HX_STACK_LINE(49)
						continue;
					}
					struct _Function_5_1{
						inline static bool Block( ::String &propValue){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleParser.hx",52,0xa41d672f)
							{
								HX_STACK_LINE(52)
								int _g8 = propValue.indexOf(HX_CSTRING("%"),null());		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(52)
								return (_g8 != (int)-1);
							}
							return null();
						}
					};
					HX_STACK_LINE(52)
					if (((  (((propName == HX_CSTRING("width")))) ? bool(_Function_5_1::Block(propValue)) : bool(false) ))){
						HX_STACK_LINE(53)
						propName = HX_CSTRING("percentWidth");
						HX_STACK_LINE(54)
						::String _g9 = propValue.substr((int)0,(propValue.length - (int)1));		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(54)
						propValue = _g9;
					}
					else{
						struct _Function_6_1{
							inline static bool Block( ::String &propValue){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleParser.hx",55,0xa41d672f)
								{
									HX_STACK_LINE(55)
									int _g10 = propValue.indexOf(HX_CSTRING("%"),null());		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(55)
									return (_g10 != (int)-1);
								}
								return null();
							}
						};
						HX_STACK_LINE(55)
						if (((  (((propName == HX_CSTRING("height")))) ? bool(_Function_6_1::Block(propValue)) : bool(false) ))){
							HX_STACK_LINE(56)
							propName = HX_CSTRING("percentHeight");
							HX_STACK_LINE(57)
							::String _g111 = propValue.substr((int)0,(propValue.length - (int)1));		HX_STACK_VAR(_g111,"_g111");
							HX_STACK_LINE(57)
							propValue = _g111;
						}
						else{
							HX_STACK_LINE(58)
							if (((propName == HX_CSTRING("filter")))){
								HX_STACK_LINE(59)
								::openfl::filters::BitmapFilter _g12 = ::haxe::ui::toolkit::util::FilterParser_obj::parseFilter(propValue);		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(59)
								style->set_filter(_g12);
								HX_STACK_LINE(60)
								continue;
							}
							else{
								HX_STACK_LINE(61)
								if (((propName == HX_CSTRING("backgroundImageScale9")))){
									HX_STACK_LINE(62)
									Array< ::String > coords = propValue.split(HX_CSTRING(","));		HX_STACK_VAR(coords,"coords");
									HX_STACK_LINE(63)
									int x1 = ::Std_obj::parseInt(coords->__get((int)0));		HX_STACK_VAR(x1,"x1");
									HX_STACK_LINE(64)
									int y1 = ::Std_obj::parseInt(coords->__get((int)1));		HX_STACK_VAR(y1,"y1");
									HX_STACK_LINE(65)
									int x2 = ::Std_obj::parseInt(coords->__get((int)2));		HX_STACK_VAR(x2,"x2");
									HX_STACK_LINE(66)
									int y2 = ::Std_obj::parseInt(coords->__get((int)3));		HX_STACK_VAR(y2,"y2");
									HX_STACK_LINE(67)
									::openfl::geom::Rectangle scale9 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(scale9,"scale9");
									HX_STACK_LINE(68)
									scale9->set_left(x1);
									HX_STACK_LINE(69)
									scale9->set_top(y1);
									HX_STACK_LINE(70)
									scale9->set_right(x2);
									HX_STACK_LINE(71)
									scale9->set_bottom(y2);
									HX_STACK_LINE(72)
									style->set_backgroundImageScale9(scale9);
									HX_STACK_LINE(73)
									continue;
								}
								else{
									HX_STACK_LINE(74)
									if (((propName == HX_CSTRING("backgroundImageRect")))){
										HX_STACK_LINE(75)
										Array< ::String > arr = propValue.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
										HX_STACK_LINE(76)
										Dynamic _g13 = ::Std_obj::parseInt(arr->__get((int)0));		HX_STACK_VAR(_g13,"_g13");
										HX_STACK_LINE(76)
										Dynamic _g14 = ::Std_obj::parseInt(arr->__get((int)1));		HX_STACK_VAR(_g14,"_g14");
										HX_STACK_LINE(76)
										Dynamic _g15 = ::Std_obj::parseInt(arr->__get((int)2));		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(76)
										Dynamic _g16 = ::Std_obj::parseInt(arr->__get((int)3));		HX_STACK_VAR(_g16,"_g16");
										HX_STACK_LINE(76)
										::openfl::geom::Rectangle _g17 = ::openfl::geom::Rectangle_obj::__new(_g13,_g14,_g15,_g16);		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(76)
										style->set_backgroundImageRect(_g17);
										HX_STACK_LINE(77)
										continue;
									}
								}
							}
						}
					}
					HX_STACK_LINE(80)
					int _g18 = propValue.indexOf(HX_CSTRING(","),null());		HX_STACK_VAR(_g18,"_g18");
					struct _Function_5_2{
						inline static bool Block( ::String &propValue){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleParser.hx",80,0xa41d672f)
							{
								struct _Function_6_1{
									inline static bool Block( ::String &propValue){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleParser.hx",80,0xa41d672f)
										{
											HX_STACK_LINE(80)
											Float _g19 = ::Std_obj::parseFloat(propValue);		HX_STACK_VAR(_g19,"_g19");
											HX_STACK_LINE(80)
											::String _g20 = ::Std_obj::string(_g19);		HX_STACK_VAR(_g20,"_g20");
											HX_STACK_LINE(80)
											::String _g21 = ::Std_obj::string(::Math_obj::NaN);		HX_STACK_VAR(_g21,"_g21");
											HX_STACK_LINE(80)
											return (_g20 == _g21);
										}
										return null();
									}
								};
								HX_STACK_LINE(80)
								return (  ((!(::StringTools_obj::startsWith(propValue,HX_CSTRING("#"))))) ? bool(_Function_6_1::Block(propValue)) : bool(false) );
							}
							return null();
						}
					};
					HX_STACK_LINE(80)
					if (((  ((!(((_g18 != (int)-1))))) ? bool(_Function_5_2::Block(propValue)) : bool(true) ))){
						HX_STACK_LINE(81)
						if (((bool((propValue == HX_CSTRING("true"))) || bool((propValue == HX_CSTRING("false")))))){
							HX_STACK_LINE(82)
							if (((style != null()))){
								HX_STACK_LINE(82)
								style->__SetField(propName,(propValue == HX_CSTRING("true")),true);
							}
						}
						else{
							HX_STACK_LINE(84)
							if (((style != null()))){
								HX_STACK_LINE(84)
								style->__SetField(propName,propValue,true);
							}
						}
					}
					else{
						HX_STACK_LINE(87)
						if ((::StringTools_obj::startsWith(propValue,HX_CSTRING("#")))){
							HX_STACK_LINE(88)
							::String _g22 = propValue.substr((int)1,(propValue.length - (int)1));		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(88)
							::String _g23 = (HX_CSTRING("0x") + _g22);		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(88)
							propValue = _g23;
						}
						HX_STACK_LINE(90)
						if ((::StringTools_obj::startsWith(propValue,HX_CSTRING("0x")))){
							HX_STACK_LINE(91)
							Dynamic value = ::Std_obj::parseInt(propValue);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(91)
							if (((style != null()))){
								HX_STACK_LINE(91)
								style->__SetField(propName,value,true);
							}
						}
						else{
							HX_STACK_LINE(93)
							Dynamic value = ::Std_obj::parseFloat(propValue);		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(93)
							if (((style != null()))){
								HX_STACK_LINE(93)
								style->__SetField(propName,value,true);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(99)
		int _g24 = styleName.indexOf(HX_CSTRING(","),null());		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(99)
		if (((_g24 == (int)-1))){
			HX_STACK_LINE(100)
			styles->addStyle(styleName,style);
		}
		else{
			HX_STACK_LINE(102)
			Array< ::String > arr = styleName.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(103)
			{
				HX_STACK_LINE(103)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(103)
				while((true)){
					HX_STACK_LINE(103)
					if ((!(((_g1 < arr->length))))){
						HX_STACK_LINE(103)
						break;
					}
					HX_STACK_LINE(103)
					::String s = arr->__get(_g1);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(103)
					++(_g1);
					HX_STACK_LINE(104)
					::String _g25 = ::StringTools_obj::trim(s);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(104)
					s = _g25;
					HX_STACK_LINE(105)
					styles->addStyle(s,style);
				}
			}
		}
		HX_STACK_LINE(109)
		n1 = n3;
		HX_STACK_LINE(110)
		int _g26 = styleString.indexOf(HX_CSTRING("{"),n1);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(110)
		n2 = _g26;
	}
	HX_STACK_LINE(113)
	return styles;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StyleParser_obj,fromString,return )


StyleParser_obj::StyleParser_obj()
{
}

Dynamic StyleParser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleParser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleParser_obj::__mClass,"__mClass");
};

#endif

Class StyleParser_obj::__mClass;

void StyleParser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.StyleParser"), hx::TCanCast< StyleParser_obj> ,sStaticFields,sMemberFields,
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

void StyleParser_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
