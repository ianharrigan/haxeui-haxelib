#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_svg_DisplayElement
#include <format/svg/DisplayElement.h>
#endif
#ifndef INCLUDED_format_svg_DrawSegment
#include <format/svg/DrawSegment.h>
#endif
#ifndef INCLUDED_format_svg_FillType
#include <format/svg/FillType.h>
#endif
#ifndef INCLUDED_format_svg_Grad
#include <format/svg/Grad.h>
#endif
#ifndef INCLUDED_format_svg_Group
#include <format/svg/Group.h>
#endif
#ifndef INCLUDED_format_svg_MoveSegment
#include <format/svg/MoveSegment.h>
#endif
#ifndef INCLUDED_format_svg_Path
#include <format/svg/Path.h>
#endif
#ifndef INCLUDED_format_svg_PathParser
#include <format/svg/PathParser.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_format_svg_QuadraticSegment
#include <format/svg/QuadraticSegment.h>
#endif
#ifndef INCLUDED_format_svg_SVGData
#include <format/svg/SVGData.h>
#endif
#ifndef INCLUDED_format_svg_Text
#include <format/svg/Text.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace format{
namespace svg{

Void SVGData_obj::__construct(::Xml inXML,hx::Null< bool >  __o_inConvertCubics)
{
HX_STACK_FRAME("format.svg.SVGData","new",0x51c8ae3f,"format.svg.SVGData.new","format/svg/SVGData.hx",48,0x27702913)
HX_STACK_THIS(this)
HX_STACK_ARG(inXML,"inXML")
HX_STACK_ARG(__o_inConvertCubics,"inConvertCubics")
bool inConvertCubics = __o_inConvertCubics.Default(false);
{
	HX_STACK_LINE(50)
	super::__construct();
	HX_STACK_LINE(52)
	::Xml svg = inXML->firstElement();		HX_STACK_VAR(svg,"svg");
	struct _Function_1_1{
		inline static bool Block( ::Xml &svg){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/svg/SVGData.hx",54,0x27702913)
			{
				HX_STACK_LINE(54)
				::String _g = svg->get_nodeName();		HX_STACK_VAR(_g,"_g");
				struct _Function_2_1{
					inline static bool Block( ::Xml &svg){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/svg/SVGData.hx",54,0x27702913)
						{
							HX_STACK_LINE(54)
							::String _g1 = svg->get_nodeName();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(54)
							return (_g1 != HX_CSTRING("svg:svg"));
						}
						return null();
					}
				};
				HX_STACK_LINE(54)
				return (  (((_g != HX_CSTRING("svg")))) ? bool(_Function_2_1::Block(svg)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(54)
	if (((  ((!(((svg == null()))))) ? bool(_Function_1_1::Block(svg)) : bool(true) ))){
		HX_STACK_LINE(55)
		::String _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(55)
		if (((svg == null()))){
			HX_STACK_LINE(55)
			_g2 = HX_CSTRING("null");
		}
		else{
			HX_STACK_LINE(55)
			_g2 = svg->get_nodeName();
		}
		HX_STACK_LINE(55)
		::String _g3 = (HX_CSTRING("Not an SVG file (") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(55)
		HX_STACK_DO_THROW((_g3 + HX_CSTRING(")")));
	}
	HX_STACK_LINE(57)
	::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(57)
	this->mGrads = _g4;
	HX_STACK_LINE(58)
	::format::svg::PathParser _g5 = ::format::svg::PathParser_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(58)
	this->mPathParser = _g5;
	HX_STACK_LINE(59)
	this->mConvertCubics = inConvertCubics;
	HX_STACK_LINE(61)
	Float _g6 = this->getFloatStyle(HX_CSTRING("width"),svg,null(),0.0);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(61)
	this->width = _g6;
	HX_STACK_LINE(62)
	Float _g7 = this->getFloatStyle(HX_CSTRING("height"),svg,null(),0.0);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(62)
	this->height = _g7;
	HX_STACK_LINE(64)
	if (((bool((this->width == (int)0)) && bool((this->height == (int)0))))){
		HX_STACK_LINE(65)
		Float _g8 = this->height = (int)400;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(65)
		this->width = _g8;
	}
	else{
		HX_STACK_LINE(66)
		if (((this->width == (int)0))){
			HX_STACK_LINE(67)
			this->width = this->height;
		}
		else{
			HX_STACK_LINE(68)
			if (((this->height == (int)0))){
				HX_STACK_LINE(69)
				this->height = this->width;
			}
		}
	}
	HX_STACK_LINE(71)
	::openfl::geom::Matrix _g9 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(71)
	this->loadGroup(hx::ObjectPtr<OBJ_>(this),svg,_g9,null());
}
;
	return null();
}

//SVGData_obj::~SVGData_obj() { }

Dynamic SVGData_obj::__CreateEmpty() { return  new SVGData_obj; }
hx::ObjectPtr< SVGData_obj > SVGData_obj::__new(::Xml inXML,hx::Null< bool >  __o_inConvertCubics)
{  hx::ObjectPtr< SVGData_obj > result = new SVGData_obj();
	result->__construct(inXML,__o_inConvertCubics);
	return result;}

Dynamic SVGData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SVGData_obj > result = new SVGData_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float SVGData_obj::applyTransform( ::openfl::geom::Matrix ioMatrix,::String inTrans){
	HX_STACK_FRAME("format.svg.SVGData","applyTransform",0xb6802a9f,"format.svg.SVGData.applyTransform","format/svg/SVGData.hx",76,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ioMatrix,"ioMatrix")
	HX_STACK_ARG(inTrans,"inTrans")
	HX_STACK_LINE(78)
	Float scale = 1.0;		HX_STACK_VAR(scale,"scale");
	HX_STACK_LINE(80)
	if ((::format::svg::SVGData_obj::mTranslateMatch->match(inTrans))){
		HX_STACK_LINE(84)
		::String _g = ::format::svg::SVGData_obj::mTranslateMatch->matched((int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		Float _g1 = ::Std_obj::parseFloat(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		::String _g2 = ::format::svg::SVGData_obj::mTranslateMatch->matched((int)2);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(84)
		Float _g3 = ::Std_obj::parseFloat(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(84)
		ioMatrix->translate(_g1,_g3);
	}
	else{
		HX_STACK_LINE(86)
		if ((::format::svg::SVGData_obj::mScaleMatch->match(inTrans))){
			HX_STACK_LINE(89)
			::String _g4 = ::format::svg::SVGData_obj::mScaleMatch->matched((int)1);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(89)
			Float s = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(90)
			ioMatrix->scale(s,s);
			HX_STACK_LINE(91)
			scale = s;
		}
		else{
			HX_STACK_LINE(93)
			if ((::format::svg::SVGData_obj::mMatrixMatch->match(inTrans))){
				HX_STACK_LINE(96)
				::String _g5 = ::format::svg::SVGData_obj::mMatrixMatch->matched((int)1);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(96)
				Float _g6 = ::Std_obj::parseFloat(_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(97)
				::String _g7 = ::format::svg::SVGData_obj::mMatrixMatch->matched((int)2);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(97)
				Float _g8 = ::Std_obj::parseFloat(_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(98)
				::String _g9 = ::format::svg::SVGData_obj::mMatrixMatch->matched((int)3);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(98)
				Float _g10 = ::Std_obj::parseFloat(_g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(99)
				::String _g11 = ::format::svg::SVGData_obj::mMatrixMatch->matched((int)4);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(99)
				Float _g12 = ::Std_obj::parseFloat(_g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(100)
				::String _g13 = ::format::svg::SVGData_obj::mMatrixMatch->matched((int)5);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(100)
				Float _g14 = ::Std_obj::parseFloat(_g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(101)
				::String _g15 = ::format::svg::SVGData_obj::mMatrixMatch->matched((int)6);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(101)
				Float _g16 = ::Std_obj::parseFloat(_g15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(95)
				::openfl::geom::Matrix m = ::openfl::geom::Matrix_obj::__new(_g6,_g8,_g10,_g12,_g14,_g16);		HX_STACK_VAR(m,"m");
				HX_STACK_LINE(104)
				m->concat(ioMatrix);
				HX_STACK_LINE(106)
				ioMatrix->a = m->a;
				HX_STACK_LINE(107)
				ioMatrix->b = m->b;
				HX_STACK_LINE(108)
				ioMatrix->c = m->c;
				HX_STACK_LINE(109)
				ioMatrix->d = m->d;
				HX_STACK_LINE(110)
				ioMatrix->tx = m->tx;
				HX_STACK_LINE(111)
				ioMatrix->ty = m->ty;
				HX_STACK_LINE(113)
				Float _g17 = ::Math_obj::sqrt(((ioMatrix->a * ioMatrix->a) + (ioMatrix->c * ioMatrix->c)));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(113)
				scale = _g17;
			}
			else{
				HX_STACK_LINE(117)
				::haxe::Log_obj::trace((HX_CSTRING("Warning, unknown transform:") + inTrans),hx::SourceInfo(HX_CSTRING("SVGData.hx"),117,HX_CSTRING("format.svg.SVGData"),HX_CSTRING("applyTransform")));
			}
		}
	}
	HX_STACK_LINE(121)
	return scale;
}


HX_DEFINE_DYNAMIC_FUNC2(SVGData_obj,applyTransform,return )

Void SVGData_obj::dumpGroup( ::format::svg::Group g,::String indent){
{
		HX_STACK_FRAME("format.svg.SVGData","dumpGroup",0x5544588a,"format.svg.SVGData.dumpGroup","format/svg/SVGData.hx",126,0x27702913)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(indent,"indent")
		HX_STACK_LINE(128)
		::haxe::Log_obj::trace(((indent + HX_CSTRING("Group:")) + g->name),hx::SourceInfo(HX_CSTRING("SVGData.hx"),128,HX_CSTRING("format.svg.SVGData"),HX_CSTRING("dumpGroup")));
		HX_STACK_LINE(129)
		hx::AddEq(indent,HX_CSTRING("  "));
		HX_STACK_LINE(131)
		{
			HX_STACK_LINE(131)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(131)
			Array< ::Dynamic > _g1 = g->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(131)
			while((true)){
				HX_STACK_LINE(131)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(131)
					break;
				}
				HX_STACK_LINE(131)
				::format::svg::DisplayElement e = _g1->__get(_g).StaticCast< ::format::svg::DisplayElement >();		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(131)
				++(_g);
				HX_STACK_LINE(133)
				switch( (int)(e->__Index())){
					case (int)0: {
						HX_STACK_LINE(133)
						::format::svg::Path path = (::format::svg::DisplayElement(e))->__Param(0);		HX_STACK_VAR(path,"path");
						HX_STACK_LINE(135)
						{
							HX_STACK_LINE(135)
							::String _g2 = ::Std_obj::string(path->matrix);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(135)
							::String _g11 = (((indent + HX_CSTRING("Path")) + HX_CSTRING("  ")) + _g2);		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(135)
							::haxe::Log_obj::trace(_g11,hx::SourceInfo(HX_CSTRING("SVGData.hx"),135,HX_CSTRING("format.svg.SVGData"),HX_CSTRING("dumpGroup")));
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(133)
						::format::svg::Group group = (::format::svg::DisplayElement(e))->__Param(0);		HX_STACK_VAR(group,"group");
						HX_STACK_LINE(136)
						this->dumpGroup(group,(indent + HX_CSTRING("   ")));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(133)
						::format::svg::Text text = (::format::svg::DisplayElement(e))->__Param(0);		HX_STACK_VAR(text,"text");
						HX_STACK_LINE(137)
						::haxe::Log_obj::trace(((indent + HX_CSTRING("Text ")) + text->text),hx::SourceInfo(HX_CSTRING("SVGData.hx"),137,HX_CSTRING("format.svg.SVGData"),HX_CSTRING("dumpGroup")));
					}
					;break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SVGData_obj,dumpGroup,(void))

int SVGData_obj::getColorStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles,int inDefault){
	HX_STACK_FRAME("format.svg.SVGData","getColorStyle",0x73c6a3a3,"format.svg.SVGData.getColorStyle","format/svg/SVGData.hx",146,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inKey,"inKey")
	HX_STACK_ARG(inNode,"inNode")
	HX_STACK_ARG(inStyles,"inStyles")
	HX_STACK_ARG(inDefault,"inDefault")
	HX_STACK_LINE(148)
	::String s = this->getStyle(inKey,inNode,inStyles,HX_CSTRING(""));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(150)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(152)
		return inDefault;
	}
	HX_STACK_LINE(156)
	::String _g = s.charAt((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(156)
	if (((_g == HX_CSTRING("#")))){
		HX_STACK_LINE(158)
		::String _g1 = s.substr((int)1,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		::String _g2 = (HX_CSTRING("0x") + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(158)
		return ::Std_obj::parseInt(_g2);
	}
	HX_STACK_LINE(162)
	return ::Std_obj::parseInt(s);
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,getColorStyle,return )

::format::svg::FillType SVGData_obj::getFillStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles){
	HX_STACK_FRAME("format.svg.SVGData","getFillStyle",0x0c815679,"format.svg.SVGData.getFillStyle","format/svg/SVGData.hx",167,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inKey,"inKey")
	HX_STACK_ARG(inNode,"inNode")
	HX_STACK_ARG(inStyles,"inStyles")
	HX_STACK_LINE(169)
	::String s = this->getStyle(inKey,inNode,inStyles,HX_CSTRING(""));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(171)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(173)
		return ::format::svg::SVGData_obj::defaultFill;
	}
	HX_STACK_LINE(177)
	::String _g = s.charAt((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(177)
	if (((_g == HX_CSTRING("#")))){
		HX_STACK_LINE(179)
		::String _g1 = s.substr((int)1,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(179)
		::String _g2 = (HX_CSTRING("0x") + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(179)
		Dynamic _g3 = ::Std_obj::parseInt(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(179)
		return ::format::svg::FillType_obj::FillSolid(_g3);
	}
	HX_STACK_LINE(183)
	if (((s == HX_CSTRING("none")))){
		HX_STACK_LINE(185)
		return ::format::svg::FillType_obj::FillNone;
	}
	HX_STACK_LINE(189)
	if ((::format::svg::SVGData_obj::mURLMatch->match(s))){
		HX_STACK_LINE(191)
		::String url = ::format::svg::SVGData_obj::mURLMatch->matched((int)1);		HX_STACK_VAR(url,"url");
		HX_STACK_LINE(193)
		if ((this->mGrads->exists(url))){
			HX_STACK_LINE(195)
			::format::svg::Grad _g4 = this->mGrads->get(url);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(195)
			return ::format::svg::FillType_obj::FillGrad(_g4);
		}
		HX_STACK_LINE(199)
		HX_STACK_DO_THROW((HX_CSTRING("Unknown url:") + url));
	}
	HX_STACK_LINE(203)
	HX_STACK_DO_THROW((HX_CSTRING("Unknown fill string:") + s));
	HX_STACK_LINE(205)
	return ::format::svg::FillType_obj::FillNone;
}


HX_DEFINE_DYNAMIC_FUNC3(SVGData_obj,getFillStyle,return )

Float SVGData_obj::getFloat( ::Xml inXML,::String inName,hx::Null< Float >  __o_inDef){
Float inDef = __o_inDef.Default(0.0);
	HX_STACK_FRAME("format.svg.SVGData","getFloat",0x54cd4ee7,"format.svg.SVGData.getFloat","format/svg/SVGData.hx",210,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inXML,"inXML")
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(inDef,"inDef")
{
		HX_STACK_LINE(212)
		if ((inXML->exists(inName))){
			HX_STACK_LINE(213)
			::String _g = inXML->get(inName);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(213)
			return ::Std_obj::parseFloat(_g);
		}
		HX_STACK_LINE(215)
		return inDef;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(SVGData_obj,getFloat,return )

Float SVGData_obj::getFloatStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles,Float inDefault){
	HX_STACK_FRAME("format.svg.SVGData","getFloatStyle",0x6df360ca,"format.svg.SVGData.getFloatStyle","format/svg/SVGData.hx",220,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inKey,"inKey")
	HX_STACK_ARG(inNode,"inNode")
	HX_STACK_ARG(inStyles,"inStyles")
	HX_STACK_ARG(inDefault,"inDefault")
	HX_STACK_LINE(222)
	::String s = this->getStyle(inKey,inNode,inStyles,HX_CSTRING(""));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(224)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(226)
		return inDefault;
	}
	HX_STACK_LINE(230)
	return ::Std_obj::parseFloat(s);
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,getFloatStyle,return )

Dynamic SVGData_obj::getStrokeStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles,Dynamic inDefault){
	HX_STACK_FRAME("format.svg.SVGData","getStrokeStyle",0xa6e4f9e4,"format.svg.SVGData.getStrokeStyle","format/svg/SVGData.hx",235,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inKey,"inKey")
	HX_STACK_ARG(inNode,"inNode")
	HX_STACK_ARG(inStyles,"inStyles")
	HX_STACK_ARG(inDefault,"inDefault")
	HX_STACK_LINE(237)
	::String s = this->getStyle(inKey,inNode,inStyles,HX_CSTRING(""));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(239)
	if (((s == HX_CSTRING("")))){
		HX_STACK_LINE(241)
		return inDefault;
	}
	HX_STACK_LINE(245)
	if (((s == HX_CSTRING("none")))){
		HX_STACK_LINE(247)
		return null();
	}
	HX_STACK_LINE(251)
	::String _g = s.charAt((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(251)
	if (((_g == HX_CSTRING("#")))){
		HX_STACK_LINE(253)
		::String _g1 = s.substr((int)1,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		::String _g2 = (HX_CSTRING("0x") + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(253)
		return ::Std_obj::parseInt(_g2);
	}
	HX_STACK_LINE(257)
	return ::Std_obj::parseInt(s);
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,getStrokeStyle,return )

::String SVGData_obj::getStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles,::String inDefault){
	HX_STACK_FRAME("format.svg.SVGData","getStyle",0xd6542e7c,"format.svg.SVGData.getStyle","format/svg/SVGData.hx",262,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inKey,"inKey")
	HX_STACK_ARG(inNode,"inNode")
	HX_STACK_ARG(inStyles,"inStyles")
	HX_STACK_ARG(inDefault,"inDefault")
	HX_STACK_LINE(264)
	if (((  (((inNode != null()))) ? bool(inNode->exists(inKey)) : bool(false) ))){
		HX_STACK_LINE(266)
		return inNode->get(inKey);
	}
	HX_STACK_LINE(270)
	if (((  (((inStyles != null()))) ? bool(inStyles->exists(inKey)) : bool(false) ))){
		HX_STACK_LINE(272)
		return inStyles->get(inKey);
	}
	HX_STACK_LINE(276)
	return inDefault;
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,getStyle,return )

::haxe::ds::StringMap SVGData_obj::getStyles( ::Xml inNode,::haxe::ds::StringMap inPrevStyles){
	HX_STACK_FRAME("format.svg.SVGData","getStyles",0xb3547e77,"format.svg.SVGData.getStyles","format/svg/SVGData.hx",281,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inNode,"inNode")
	HX_STACK_ARG(inPrevStyles,"inPrevStyles")
	HX_STACK_LINE(283)
	if ((!(inNode->exists(HX_CSTRING("style"))))){
		HX_STACK_LINE(284)
		return inPrevStyles;
	}
	HX_STACK_LINE(286)
	::haxe::ds::StringMap styles = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(288)
	if (((inPrevStyles != null()))){
		HX_STACK_LINE(290)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(inPrevStyles->keys());  __it->hasNext(); ){
			::String s = __it->next();
			{
				HX_STACK_LINE(292)
				::String _g = inPrevStyles->get(s);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(292)
				styles->set(s,_g);
			}
;
		}
	}
	HX_STACK_LINE(298)
	::String style = inNode->get(HX_CSTRING("style"));		HX_STACK_VAR(style,"style");
	HX_STACK_LINE(299)
	Array< ::String > strings = ::format::svg::SVGData_obj::mStyleSplit->split(style);		HX_STACK_VAR(strings,"strings");
	HX_STACK_LINE(301)
	{
		HX_STACK_LINE(301)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(301)
		while((true)){
			HX_STACK_LINE(301)
			if ((!(((_g < strings->length))))){
				HX_STACK_LINE(301)
				break;
			}
			HX_STACK_LINE(301)
			::String s = strings->__get(_g);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(301)
			++(_g);
			HX_STACK_LINE(303)
			if ((::format::svg::SVGData_obj::mStyleValue->match(s))){
				HX_STACK_LINE(305)
				::String _g1 = ::format::svg::SVGData_obj::mStyleValue->matched((int)1);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(305)
				::String _g2 = ::format::svg::SVGData_obj::mStyleValue->matched((int)2);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(305)
				styles->set(_g1,_g2);
			}
		}
	}
	HX_STACK_LINE(311)
	return styles;
}


HX_DEFINE_DYNAMIC_FUNC2(SVGData_obj,getStyles,return )

Void SVGData_obj::loadDefs( ::Xml inXML){
{
		HX_STACK_FRAME("format.svg.SVGData","loadDefs",0xa5659e15,"format.svg.SVGData.loadDefs","format/svg/SVGData.hx",320,0x27702913)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inXML,"inXML")
		HX_STACK_LINE(320)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		while((true)){
			HX_STACK_LINE(320)
			if ((!(((_g < (int)2))))){
				HX_STACK_LINE(320)
				break;
			}
			HX_STACK_LINE(320)
			int pass = (_g)++;		HX_STACK_VAR(pass,"pass");
			HX_STACK_LINE(322)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(inXML->elements());  __it->hasNext(); ){
				::Xml def = __it->next();
				{
					HX_STACK_LINE(324)
					::String name = def->get_nodeName();		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(326)
					::String _g1 = name.substr((int)0,(int)4);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(326)
					if (((_g1 == HX_CSTRING("svg:")))){
						HX_STACK_LINE(328)
						::String _g11 = name.substr((int)4,null());		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(328)
						name = _g11;
					}
					HX_STACK_LINE(332)
					if (((name == HX_CSTRING("linearGradient")))){
						HX_STACK_LINE(334)
						this->loadGradient(def,::openfl::display::GradientType_obj::LINEAR,(pass == (int)1));
					}
					else{
						HX_STACK_LINE(336)
						if (((name == HX_CSTRING("radialGradient")))){
							HX_STACK_LINE(338)
							this->loadGradient(def,::openfl::display::GradientType_obj::RADIAL,(pass == (int)1));
						}
					}
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SVGData_obj,loadDefs,(void))

Void SVGData_obj::loadGradient( ::Xml inGrad,::openfl::display::GradientType inType,bool inCrossLink){
{
		HX_STACK_FRAME("format.svg.SVGData","loadGradient",0x8e0e1477,"format.svg.SVGData.loadGradient","format/svg/SVGData.hx",349,0x27702913)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inGrad,"inGrad")
		HX_STACK_ARG(inType,"inType")
		HX_STACK_ARG(inCrossLink,"inCrossLink")
		HX_STACK_LINE(351)
		::String name = inGrad->get(HX_CSTRING("id"));		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(352)
		::format::svg::Grad grad = ::format::svg::Grad_obj::__new(inType);		HX_STACK_VAR(grad,"grad");
		HX_STACK_LINE(354)
		if (((  ((inCrossLink)) ? bool(inGrad->exists(HX_CSTRING("xlink:href"))) : bool(false) ))){
			HX_STACK_LINE(356)
			::String xlink = inGrad->get(HX_CSTRING("xlink:href"));		HX_STACK_VAR(xlink,"xlink");
			HX_STACK_LINE(358)
			::String _g = xlink.charAt((int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(358)
			if (((_g != HX_CSTRING("#")))){
				HX_STACK_LINE(359)
				HX_STACK_DO_THROW((HX_CSTRING("xlink - unkown syntax : ") + xlink));
			}
			HX_STACK_LINE(361)
			::String _g1 = xlink.substr((int)1,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(361)
			::format::svg::Grad base = this->mGrads->get(_g1);		HX_STACK_VAR(base,"base");
			HX_STACK_LINE(363)
			if (((base != null()))){
				HX_STACK_LINE(365)
				grad->colors = base->colors;
				HX_STACK_LINE(366)
				grad->alphas = base->alphas;
				HX_STACK_LINE(367)
				grad->ratios = base->ratios;
				HX_STACK_LINE(368)
				::openfl::geom::Matrix _g2 = base->gradMatrix->clone();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(368)
				grad->gradMatrix = _g2;
				HX_STACK_LINE(369)
				grad->spread = base->spread;
				HX_STACK_LINE(370)
				grad->interp = base->interp;
				HX_STACK_LINE(371)
				grad->radius = base->radius;
			}
			else{
				HX_STACK_LINE(375)
				HX_STACK_DO_THROW((HX_CSTRING("Unknown xlink : ") + xlink));
			}
		}
		HX_STACK_LINE(381)
		if ((inGrad->exists(HX_CSTRING("x1")))){
			HX_STACK_LINE(383)
			Float _g3 = this->getFloat(inGrad,HX_CSTRING("x1"),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(383)
			grad->x1 = _g3;
			HX_STACK_LINE(384)
			Float _g4 = this->getFloat(inGrad,HX_CSTRING("y1"),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(384)
			grad->y1 = _g4;
			HX_STACK_LINE(385)
			Float _g5 = this->getFloat(inGrad,HX_CSTRING("x2"),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(385)
			grad->x2 = _g5;
			HX_STACK_LINE(386)
			Float _g6 = this->getFloat(inGrad,HX_CSTRING("y2"),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(386)
			grad->y2 = _g6;
		}
		else{
			HX_STACK_LINE(390)
			Float _g7 = this->getFloat(inGrad,HX_CSTRING("cx"),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(390)
			grad->x1 = _g7;
			HX_STACK_LINE(391)
			Float _g8 = this->getFloat(inGrad,HX_CSTRING("cy"),null());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(391)
			grad->y1 = _g8;
			HX_STACK_LINE(392)
			Float _g9 = this->getFloat(inGrad,HX_CSTRING("fx"),grad->x1);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(392)
			grad->x2 = _g9;
			HX_STACK_LINE(393)
			Float _g10 = this->getFloat(inGrad,HX_CSTRING("fy"),grad->y1);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(393)
			grad->y2 = _g10;
		}
		HX_STACK_LINE(397)
		Float _g11 = this->getFloat(inGrad,HX_CSTRING("r"),null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(397)
		grad->radius = _g11;
		HX_STACK_LINE(399)
		if ((inGrad->exists(HX_CSTRING("gradientTransform")))){
			HX_STACK_LINE(401)
			::String _g12 = inGrad->get(HX_CSTRING("gradientTransform"));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(401)
			this->applyTransform(grad->gradMatrix,_g12);
		}
		HX_STACK_LINE(407)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(inGrad->elements());  __it->hasNext(); ){
			::Xml stop = __it->next();
			{
				HX_STACK_LINE(409)
				::haxe::ds::StringMap styles = this->getStyles(stop,null());		HX_STACK_VAR(styles,"styles");
				HX_STACK_LINE(411)
				int _g13 = this->getColorStyle(HX_CSTRING("stop-color"),stop,styles,(int)0);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(411)
				grad->colors->push(_g13);
				HX_STACK_LINE(412)
				Float _g14 = this->getFloatStyle(HX_CSTRING("stop-opacity"),stop,styles,1.0);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(412)
				grad->alphas->push(_g14);
				HX_STACK_LINE(413)
				::String _g15 = stop->get(HX_CSTRING("offset"));		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(413)
				Float _g16 = ::Std_obj::parseFloat(_g15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(413)
				Float _g17 = (_g16 * 255.0);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(413)
				int _g18 = ::Std_obj::_int(_g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(413)
				grad->ratios->push(_g18);
			}
;
		}
		HX_STACK_LINE(417)
		this->mGrads->set(name,grad);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(SVGData_obj,loadGradient,(void))

::format::svg::Group SVGData_obj::loadGroup( ::format::svg::Group g,::Xml inG,::openfl::geom::Matrix matrix,::haxe::ds::StringMap inStyles){
	HX_STACK_FRAME("format.svg.SVGData","loadGroup",0xd6570e58,"format.svg.SVGData.loadGroup","format/svg/SVGData.hx",422,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(inG,"inG")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(inStyles,"inStyles")
	HX_STACK_LINE(424)
	if ((inG->exists(HX_CSTRING("transform")))){
		HX_STACK_LINE(426)
		::openfl::geom::Matrix _g = matrix->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(426)
		matrix = _g;
		HX_STACK_LINE(427)
		::String _g1 = inG->get(HX_CSTRING("transform"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(427)
		this->applyTransform(matrix,_g1);
	}
	HX_STACK_LINE(431)
	if ((inG->exists(HX_CSTRING("inkscape:label")))){
		HX_STACK_LINE(433)
		::String _g2 = inG->get(HX_CSTRING("inkscape:label"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(433)
		g->name = _g2;
	}
	else{
		HX_STACK_LINE(435)
		if ((inG->exists(HX_CSTRING("id")))){
			HX_STACK_LINE(437)
			::String _g3 = inG->get(HX_CSTRING("id"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(437)
			g->name = _g3;
		}
	}
	HX_STACK_LINE(441)
	::haxe::ds::StringMap styles = this->getStyles(inG,inStyles);		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(443)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(inG->elements());  __it->hasNext(); ){
		::Xml el = __it->next();
		{
			HX_STACK_LINE(445)
			::String name = el->get_nodeName();		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(447)
			::String _g4 = name.substr((int)0,(int)4);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(447)
			if (((_g4 == HX_CSTRING("svg:")))){
				HX_STACK_LINE(449)
				::String _g5 = name.substr((int)4,null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(449)
				name = _g5;
			}
			HX_STACK_LINE(453)
			if (((name == HX_CSTRING("defs")))){
				HX_STACK_LINE(455)
				this->loadDefs(el);
			}
			else{
				HX_STACK_LINE(457)
				if (((name == HX_CSTRING("g")))){
					struct _Function_4_1{
						inline static bool Block( ::Xml &el){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/svg/SVGData.hx",459,0x27702913)
							{
								HX_STACK_LINE(459)
								::String _g6 = el->get(HX_CSTRING("display"));		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(459)
								return (_g6 == HX_CSTRING("none"));
							}
							return null();
						}
					};
					HX_STACK_LINE(459)
					if ((!(((  ((el->exists(HX_CSTRING("display")))) ? bool(_Function_4_1::Block(el)) : bool(false) ))))){
						HX_STACK_LINE(461)
						::format::svg::Group _g7 = ::format::svg::Group_obj::__new();		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(461)
						::format::svg::Group _g8 = this->loadGroup(_g7,el,matrix,styles);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(461)
						::format::svg::DisplayElement _g9 = ::format::svg::DisplayElement_obj::DisplayGroup(_g8);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(461)
						g->children->push(_g9);
					}
				}
				else{
					HX_STACK_LINE(465)
					if (((bool((bool((name == HX_CSTRING("path"))) || bool((name == HX_CSTRING("line"))))) || bool((name == HX_CSTRING("polyline")))))){
						HX_STACK_LINE(467)
						::format::svg::Path _g10 = this->loadPath(el,matrix,styles,false,false,null());		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(467)
						::format::svg::DisplayElement _g11 = ::format::svg::DisplayElement_obj::DisplayPath(_g10);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(467)
						g->children->push(_g11);
					}
					else{
						HX_STACK_LINE(469)
						if (((name == HX_CSTRING("rect")))){
							HX_STACK_LINE(471)
							::format::svg::Path _g12 = this->loadPath(el,matrix,styles,true,false,null());		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(471)
							::format::svg::DisplayElement _g13 = ::format::svg::DisplayElement_obj::DisplayPath(_g12);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(471)
							g->children->push(_g13);
						}
						else{
							HX_STACK_LINE(473)
							if (((name == HX_CSTRING("polygon")))){
								HX_STACK_LINE(475)
								::format::svg::Path _g14 = this->loadPath(el,matrix,styles,false,false,null());		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(475)
								::format::svg::DisplayElement _g15 = ::format::svg::DisplayElement_obj::DisplayPath(_g14);		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(475)
								g->children->push(_g15);
							}
							else{
								HX_STACK_LINE(477)
								if (((name == HX_CSTRING("ellipse")))){
									HX_STACK_LINE(479)
									::format::svg::Path _g16 = this->loadPath(el,matrix,styles,false,true,null());		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(479)
									::format::svg::DisplayElement _g17 = ::format::svg::DisplayElement_obj::DisplayPath(_g16);		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(479)
									g->children->push(_g17);
								}
								else{
									HX_STACK_LINE(481)
									if (((name == HX_CSTRING("circle")))){
										HX_STACK_LINE(483)
										::format::svg::Path _g18 = this->loadPath(el,matrix,styles,false,true,true);		HX_STACK_VAR(_g18,"_g18");
										HX_STACK_LINE(483)
										::format::svg::DisplayElement _g19 = ::format::svg::DisplayElement_obj::DisplayPath(_g18);		HX_STACK_VAR(_g19,"_g19");
										HX_STACK_LINE(483)
										g->children->push(_g19);
									}
									else{
										HX_STACK_LINE(485)
										if (((name == HX_CSTRING("text")))){
											HX_STACK_LINE(487)
											::format::svg::Text _g20 = this->loadText(el,matrix,styles);		HX_STACK_VAR(_g20,"_g20");
											HX_STACK_LINE(487)
											::format::svg::DisplayElement _g21 = ::format::svg::DisplayElement_obj::DisplayText(_g20);		HX_STACK_VAR(_g21,"_g21");
											HX_STACK_LINE(487)
											g->children->push(_g21);
										}
										else{
											HX_STACK_LINE(489)
											if (((name == HX_CSTRING("linearGradient")))){
												HX_STACK_LINE(491)
												this->loadGradient(el,::openfl::display::GradientType_obj::LINEAR,true);
											}
											else{
												HX_STACK_LINE(493)
												if (((name == HX_CSTRING("radialGradient")))){
													HX_STACK_LINE(495)
													this->loadGradient(el,::openfl::display::GradientType_obj::RADIAL,true);
												}
												else{
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(505)
	return g;
}


HX_DEFINE_DYNAMIC_FUNC4(SVGData_obj,loadGroup,return )

::format::svg::Path SVGData_obj::loadPath( ::Xml inPath,::openfl::geom::Matrix matrix,::haxe::ds::StringMap inStyles,bool inIsRect,bool inIsEllipse,hx::Null< bool >  __o_inIsCircle){
bool inIsCircle = __o_inIsCircle.Default(false);
	HX_STACK_FRAME("format.svg.SVGData","loadPath",0xad5130ac,"format.svg.SVGData.loadPath","format/svg/SVGData.hx",510,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inPath,"inPath")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(inStyles,"inStyles")
	HX_STACK_ARG(inIsRect,"inIsRect")
	HX_STACK_ARG(inIsEllipse,"inIsEllipse")
	HX_STACK_ARG(inIsCircle,"inIsCircle")
{
		HX_STACK_LINE(512)
		if ((inPath->exists(HX_CSTRING("transform")))){
			HX_STACK_LINE(514)
			::openfl::geom::Matrix _g = matrix->clone();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(514)
			matrix = _g;
			HX_STACK_LINE(515)
			::String _g1 = inPath->get(HX_CSTRING("transform"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(515)
			this->applyTransform(matrix,_g1);
		}
		HX_STACK_LINE(519)
		::haxe::ds::StringMap styles = this->getStyles(inPath,inStyles);		HX_STACK_VAR(styles,"styles");
		HX_STACK_LINE(520)
		::String name;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(520)
		if ((inPath->exists(HX_CSTRING("id")))){
			HX_STACK_LINE(520)
			name = inPath->get(HX_CSTRING("id"));
		}
		else{
			HX_STACK_LINE(520)
			name = HX_CSTRING("");
		}
		HX_STACK_LINE(521)
		::format::svg::Path path = ::format::svg::Path_obj::__new();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(523)
		::format::svg::FillType _g2 = this->getFillStyle(HX_CSTRING("fill"),inPath,styles);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(523)
		path->fill = _g2;
		HX_STACK_LINE(524)
		Float _g3 = this->getFloatStyle(HX_CSTRING("opacity"),inPath,styles,1.0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(524)
		path->alpha = _g3;
		HX_STACK_LINE(525)
		Float _g4 = this->getFloatStyle(HX_CSTRING("fill-opacity"),inPath,styles,1.0);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(525)
		path->fill_alpha = _g4;
		HX_STACK_LINE(526)
		Float _g5 = this->getFloatStyle(HX_CSTRING("stroke-opacity"),inPath,styles,1.0);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(526)
		path->stroke_alpha = _g5;
		HX_STACK_LINE(527)
		Dynamic _g6 = this->getStrokeStyle(HX_CSTRING("stroke"),inPath,styles,null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(527)
		path->stroke_colour = _g6;
		HX_STACK_LINE(528)
		Float _g7 = this->getFloatStyle(HX_CSTRING("stroke-width"),inPath,styles,1.0);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(528)
		path->stroke_width = _g7;
		HX_STACK_LINE(529)
		path->stroke_caps = ::openfl::display::CapsStyle_obj::ROUND;
		HX_STACK_LINE(530)
		path->joint_style = ::openfl::display::JointStyle_obj::ROUND;
		HX_STACK_LINE(531)
		Float _g8 = this->getFloatStyle(HX_CSTRING("stroke-miterlimit"),inPath,styles,3.0);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(531)
		path->miter_limit = _g8;
		HX_STACK_LINE(532)
		path->segments = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(533)
		path->matrix = matrix;
		HX_STACK_LINE(534)
		path->name = name;
		HX_STACK_LINE(536)
		if ((inIsRect)){
			HX_STACK_LINE(538)
			Float x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(538)
			if ((inPath->exists(HX_CSTRING("x")))){
				HX_STACK_LINE(538)
				::String _g9 = inPath->get(HX_CSTRING("x"));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(538)
				x = ::Std_obj::parseFloat(_g9);
			}
			else{
				HX_STACK_LINE(538)
				x = (int)0;
			}
			HX_STACK_LINE(539)
			Float y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(539)
			if ((inPath->exists(HX_CSTRING("y")))){
				HX_STACK_LINE(539)
				::String _g10 = inPath->get(HX_CSTRING("y"));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(539)
				y = ::Std_obj::parseFloat(_g10);
			}
			else{
				HX_STACK_LINE(539)
				y = (int)0;
			}
			HX_STACK_LINE(540)
			::String _g11 = inPath->get(HX_CSTRING("width"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(540)
			Float w = ::Std_obj::parseFloat(_g11);		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(541)
			::String _g12 = inPath->get(HX_CSTRING("height"));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(541)
			Float h = ::Std_obj::parseFloat(_g12);		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(542)
			Float rx;		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(542)
			if ((inPath->exists(HX_CSTRING("rx")))){
				HX_STACK_LINE(542)
				::String _g13 = inPath->get(HX_CSTRING("rx"));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(542)
				rx = ::Std_obj::parseFloat(_g13);
			}
			else{
				HX_STACK_LINE(542)
				rx = 0.0;
			}
			HX_STACK_LINE(543)
			Float ry;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(543)
			if ((inPath->exists(HX_CSTRING("ry")))){
				HX_STACK_LINE(543)
				::String _g14 = inPath->get(HX_CSTRING("ry"));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(543)
				ry = ::Std_obj::parseFloat(_g14);
			}
			else{
				HX_STACK_LINE(543)
				ry = 0.0;
			}
			HX_STACK_LINE(545)
			if (((bool((rx == (int)0)) || bool((ry == (int)0))))){
				HX_STACK_LINE(547)
				::format::svg::MoveSegment _g15 = ::format::svg::MoveSegment_obj::__new(x,y);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(547)
				path->segments->push(_g15);
				HX_STACK_LINE(548)
				::format::svg::DrawSegment _g16 = ::format::svg::DrawSegment_obj::__new((x + w),y);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(548)
				path->segments->push(_g16);
				HX_STACK_LINE(549)
				::format::svg::DrawSegment _g17 = ::format::svg::DrawSegment_obj::__new((x + w),(y + h));		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(549)
				path->segments->push(_g17);
				HX_STACK_LINE(550)
				::format::svg::DrawSegment _g18 = ::format::svg::DrawSegment_obj::__new(x,(y + h));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(550)
				path->segments->push(_g18);
				HX_STACK_LINE(551)
				::format::svg::DrawSegment _g19 = ::format::svg::DrawSegment_obj::__new(x,y);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(551)
				path->segments->push(_g19);
			}
			else{
				HX_STACK_LINE(555)
				::format::svg::MoveSegment _g20 = ::format::svg::MoveSegment_obj::__new(x,(y + ry));		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(555)
				path->segments->push(_g20);
				HX_STACK_LINE(558)
				::format::svg::QuadraticSegment _g21 = ::format::svg::QuadraticSegment_obj::__new(x,y,(x + rx),y);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(558)
				path->segments->push(_g21);
				HX_STACK_LINE(559)
				::format::svg::DrawSegment _g22 = ::format::svg::DrawSegment_obj::__new(((x + w) - rx),y);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(559)
				path->segments->push(_g22);
				HX_STACK_LINE(562)
				::format::svg::QuadraticSegment _g23 = ::format::svg::QuadraticSegment_obj::__new((x + w),y,(x + w),(y + rx));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(562)
				path->segments->push(_g23);
				HX_STACK_LINE(563)
				::format::svg::DrawSegment _g24 = ::format::svg::DrawSegment_obj::__new((x + w),((y + h) - ry));		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(563)
				path->segments->push(_g24);
				HX_STACK_LINE(566)
				::format::svg::QuadraticSegment _g25 = ::format::svg::QuadraticSegment_obj::__new((x + w),(y + h),((x + w) - rx),(y + h));		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(566)
				path->segments->push(_g25);
				HX_STACK_LINE(567)
				::format::svg::DrawSegment _g26 = ::format::svg::DrawSegment_obj::__new((x + rx),(y + h));		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(567)
				path->segments->push(_g26);
				HX_STACK_LINE(570)
				::format::svg::QuadraticSegment _g27 = ::format::svg::QuadraticSegment_obj::__new(x,(y + h),x,((y + h) - ry));		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(570)
				path->segments->push(_g27);
				HX_STACK_LINE(571)
				::format::svg::DrawSegment _g28 = ::format::svg::DrawSegment_obj::__new(x,(y + ry));		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(571)
				path->segments->push(_g28);
			}
		}
		else{
			HX_STACK_LINE(575)
			if ((inIsEllipse)){
				HX_STACK_LINE(577)
				Float x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(577)
				if ((inPath->exists(HX_CSTRING("cx")))){
					HX_STACK_LINE(577)
					::String _g29 = inPath->get(HX_CSTRING("cx"));		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(577)
					x = ::Std_obj::parseFloat(_g29);
				}
				else{
					HX_STACK_LINE(577)
					x = (int)0;
				}
				HX_STACK_LINE(578)
				Float y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(578)
				if ((inPath->exists(HX_CSTRING("cy")))){
					HX_STACK_LINE(578)
					::String _g30 = inPath->get(HX_CSTRING("cy"));		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(578)
					y = ::Std_obj::parseFloat(_g30);
				}
				else{
					HX_STACK_LINE(578)
					y = (int)0;
				}
				HX_STACK_LINE(579)
				Float r;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(579)
				if (((  ((inIsCircle)) ? bool(inPath->exists(HX_CSTRING("r"))) : bool(false) ))){
					HX_STACK_LINE(579)
					::String _g31 = inPath->get(HX_CSTRING("r"));		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(579)
					r = ::Std_obj::parseFloat(_g31);
				}
				else{
					HX_STACK_LINE(579)
					r = 0.0;
				}
				HX_STACK_LINE(580)
				Float w;		HX_STACK_VAR(w,"w");
				HX_STACK_LINE(580)
				if ((inIsCircle)){
					HX_STACK_LINE(580)
					w = r;
				}
				else{
					HX_STACK_LINE(580)
					if ((inPath->exists(HX_CSTRING("rx")))){
						HX_STACK_LINE(580)
						::String _g32 = inPath->get(HX_CSTRING("rx"));		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(580)
						w = ::Std_obj::parseFloat(_g32);
					}
					else{
						HX_STACK_LINE(580)
						w = 0.0;
					}
				}
				HX_STACK_LINE(581)
				Float w_ = (w * ::format::svg::SVGData_obj::SIN45);		HX_STACK_VAR(w_,"w_");
				HX_STACK_LINE(582)
				Float cw_ = (w * ::format::svg::SVGData_obj::TAN22);		HX_STACK_VAR(cw_,"cw_");
				HX_STACK_LINE(583)
				Float h;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(583)
				if ((inIsCircle)){
					HX_STACK_LINE(583)
					h = r;
				}
				else{
					HX_STACK_LINE(583)
					if ((inPath->exists(HX_CSTRING("ry")))){
						HX_STACK_LINE(583)
						::String _g33 = inPath->get(HX_CSTRING("ry"));		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(583)
						h = ::Std_obj::parseFloat(_g33);
					}
					else{
						HX_STACK_LINE(583)
						h = 0.0;
					}
				}
				HX_STACK_LINE(584)
				Float h_ = (h * ::format::svg::SVGData_obj::SIN45);		HX_STACK_VAR(h_,"h_");
				HX_STACK_LINE(585)
				Float ch_ = (h * ::format::svg::SVGData_obj::TAN22);		HX_STACK_VAR(ch_,"ch_");
				HX_STACK_LINE(587)
				::format::svg::MoveSegment _g34 = ::format::svg::MoveSegment_obj::__new((x + w),y);		HX_STACK_VAR(_g34,"_g34");
				HX_STACK_LINE(587)
				path->segments->push(_g34);
				HX_STACK_LINE(588)
				::format::svg::QuadraticSegment _g35 = ::format::svg::QuadraticSegment_obj::__new((x + w),(y + ch_),(x + w_),(y + h_));		HX_STACK_VAR(_g35,"_g35");
				HX_STACK_LINE(588)
				path->segments->push(_g35);
				HX_STACK_LINE(589)
				::format::svg::QuadraticSegment _g36 = ::format::svg::QuadraticSegment_obj::__new((x + cw_),(y + h),x,(y + h));		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(589)
				path->segments->push(_g36);
				HX_STACK_LINE(590)
				::format::svg::QuadraticSegment _g37 = ::format::svg::QuadraticSegment_obj::__new((x - cw_),(y + h),(x - w_),(y + h_));		HX_STACK_VAR(_g37,"_g37");
				HX_STACK_LINE(590)
				path->segments->push(_g37);
				HX_STACK_LINE(591)
				::format::svg::QuadraticSegment _g38 = ::format::svg::QuadraticSegment_obj::__new((x - w),(y + ch_),(x - w),y);		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(591)
				path->segments->push(_g38);
				HX_STACK_LINE(592)
				::format::svg::QuadraticSegment _g39 = ::format::svg::QuadraticSegment_obj::__new((x - w),(y - ch_),(x - w_),(y - h_));		HX_STACK_VAR(_g39,"_g39");
				HX_STACK_LINE(592)
				path->segments->push(_g39);
				HX_STACK_LINE(593)
				::format::svg::QuadraticSegment _g40 = ::format::svg::QuadraticSegment_obj::__new((x - cw_),(y - h),x,(y - h));		HX_STACK_VAR(_g40,"_g40");
				HX_STACK_LINE(593)
				path->segments->push(_g40);
				HX_STACK_LINE(594)
				::format::svg::QuadraticSegment _g41 = ::format::svg::QuadraticSegment_obj::__new((x + cw_),(y - h),(x + w_),(y - h_));		HX_STACK_VAR(_g41,"_g41");
				HX_STACK_LINE(594)
				path->segments->push(_g41);
				HX_STACK_LINE(595)
				::format::svg::QuadraticSegment _g42 = ::format::svg::QuadraticSegment_obj::__new((x + w),(y - ch_),(x + w),y);		HX_STACK_VAR(_g42,"_g42");
				HX_STACK_LINE(595)
				path->segments->push(_g42);
			}
			else{
				HX_STACK_LINE(599)
				::String d;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(599)
				if ((inPath->exists(HX_CSTRING("points")))){
					HX_STACK_LINE(599)
					::String _g43 = inPath->get(HX_CSTRING("points"));		HX_STACK_VAR(_g43,"_g43");
					HX_STACK_LINE(599)
					::String _g44 = (HX_CSTRING("M") + _g43);		HX_STACK_VAR(_g44,"_g44");
					HX_STACK_LINE(599)
					d = (_g44 + HX_CSTRING("z"));
				}
				else{
					HX_STACK_LINE(600)
					if ((inPath->exists(HX_CSTRING("x1")))){
						HX_STACK_LINE(600)
						::String _g45 = inPath->get(HX_CSTRING("x1"));		HX_STACK_VAR(_g45,"_g45");
						HX_STACK_LINE(600)
						::String _g46 = (HX_CSTRING("M") + _g45);		HX_STACK_VAR(_g46,"_g46");
						HX_STACK_LINE(600)
						::String _g47 = (_g46 + HX_CSTRING(","));		HX_STACK_VAR(_g47,"_g47");
						HX_STACK_LINE(600)
						::String _g48 = inPath->get(HX_CSTRING("y1"));		HX_STACK_VAR(_g48,"_g48");
						HX_STACK_LINE(600)
						::String _g49 = (_g47 + _g48);		HX_STACK_VAR(_g49,"_g49");
						HX_STACK_LINE(600)
						::String _g50 = (_g49 + HX_CSTRING(" "));		HX_STACK_VAR(_g50,"_g50");
						HX_STACK_LINE(600)
						::String _g51 = inPath->get(HX_CSTRING("x2"));		HX_STACK_VAR(_g51,"_g51");
						HX_STACK_LINE(600)
						::String _g52 = (_g50 + _g51);		HX_STACK_VAR(_g52,"_g52");
						HX_STACK_LINE(600)
						::String _g53 = (_g52 + HX_CSTRING(","));		HX_STACK_VAR(_g53,"_g53");
						HX_STACK_LINE(600)
						::String _g54 = inPath->get(HX_CSTRING("y2"));		HX_STACK_VAR(_g54,"_g54");
						HX_STACK_LINE(600)
						::String _g55 = (_g53 + _g54);		HX_STACK_VAR(_g55,"_g55");
						HX_STACK_LINE(600)
						d = (_g55 + HX_CSTRING("z"));
					}
					else{
						HX_STACK_LINE(601)
						d = inPath->get(HX_CSTRING("d"));
					}
				}
				HX_STACK_LINE(603)
				{
					HX_STACK_LINE(603)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(603)
					Array< ::Dynamic > _g1 = this->mPathParser->parse(d,this->mConvertCubics);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(603)
					while((true)){
						HX_STACK_LINE(603)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(603)
							break;
						}
						HX_STACK_LINE(603)
						::format::svg::PathSegment segment = _g1->__get(_g).StaticCast< ::format::svg::PathSegment >();		HX_STACK_VAR(segment,"segment");
						HX_STACK_LINE(603)
						++(_g);
						HX_STACK_LINE(605)
						path->segments->push(segment);
					}
				}
			}
		}
		HX_STACK_LINE(611)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC6(SVGData_obj,loadPath,return )

::format::svg::Text SVGData_obj::loadText( ::Xml inText,::openfl::geom::Matrix matrix,::haxe::ds::StringMap inStyles){
	HX_STACK_FRAME("format.svg.SVGData","loadText",0xaff917b4,"format.svg.SVGData.loadText","format/svg/SVGData.hx",616,0x27702913)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inText,"inText")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(inStyles,"inStyles")
	HX_STACK_LINE(618)
	if ((inText->exists(HX_CSTRING("transform")))){
		HX_STACK_LINE(620)
		::openfl::geom::Matrix _g = matrix->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(620)
		matrix = _g;
		HX_STACK_LINE(621)
		::String _g1 = inText->get(HX_CSTRING("transform"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(621)
		this->applyTransform(matrix,_g1);
	}
	HX_STACK_LINE(625)
	::haxe::ds::StringMap styles = this->getStyles(inText,inStyles);		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(626)
	::format::svg::Text text = ::format::svg::Text_obj::__new();		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(628)
	text->matrix = matrix;
	HX_STACK_LINE(629)
	::String _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(629)
	if ((inText->exists(HX_CSTRING("id")))){
		HX_STACK_LINE(629)
		_g2 = inText->get(HX_CSTRING("id"));
	}
	else{
		HX_STACK_LINE(629)
		_g2 = HX_CSTRING("");
	}
	HX_STACK_LINE(629)
	text->name = _g2;
	HX_STACK_LINE(630)
	Float _g3 = this->getFloat(inText,HX_CSTRING("x"),0.0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(630)
	text->x = _g3;
	HX_STACK_LINE(631)
	Float _g4 = this->getFloat(inText,HX_CSTRING("y"),0.0);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(631)
	text->y = _g4;
	HX_STACK_LINE(632)
	::format::svg::FillType _g5 = this->getFillStyle(HX_CSTRING("fill"),inText,styles);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(632)
	text->fill = _g5;
	HX_STACK_LINE(633)
	Float _g6 = this->getFloatStyle(HX_CSTRING("fill-opacity"),inText,styles,1.0);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(633)
	text->fill_alpha = _g6;
	HX_STACK_LINE(634)
	Float _g7 = this->getFloatStyle(HX_CSTRING("stroke-opacity"),inText,styles,1.0);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(634)
	text->stroke_alpha = _g7;
	HX_STACK_LINE(635)
	Dynamic _g8 = this->getStrokeStyle(HX_CSTRING("stroke"),inText,styles,null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(635)
	text->stroke_colour = _g8;
	HX_STACK_LINE(636)
	Float _g9 = this->getFloatStyle(HX_CSTRING("stroke-width"),inText,styles,1.0);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(636)
	text->stroke_width = _g9;
	HX_STACK_LINE(637)
	::String _g10 = this->getStyle(HX_CSTRING("font-family"),inText,styles,HX_CSTRING(""));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(637)
	text->font_family = _g10;
	HX_STACK_LINE(638)
	Float _g11 = this->getFloatStyle(HX_CSTRING("font-size"),inText,styles,(int)12);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(638)
	text->font_size = _g11;
	HX_STACK_LINE(639)
	Float _g12 = this->getFloatStyle(HX_CSTRING("letter-spacing"),inText,styles,(int)0);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(639)
	text->letter_spacing = _g12;
	HX_STACK_LINE(640)
	Float _g13 = this->getFloatStyle(HX_CSTRING("kerning"),inText,styles,(int)0);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(640)
	text->kerning = _g13;
	HX_STACK_LINE(642)
	::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
	HX_STACK_LINE(644)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(inText->elements());  __it->hasNext(); ){
		::Xml el = __it->next();
		{
			HX_STACK_LINE(646)
			::String _g14 = el->toString();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(646)
			hx::AddEq(string,_g14);
		}
;
	}
	HX_STACK_LINE(651)
	text->text = string;
	HX_STACK_LINE(652)
	return text;
}


HX_DEFINE_DYNAMIC_FUNC3(SVGData_obj,loadText,return )

Float SVGData_obj::SIN45;

Float SVGData_obj::TAN22;

::EReg SVGData_obj::mStyleSplit;

::EReg SVGData_obj::mStyleValue;

::EReg SVGData_obj::mTranslateMatch;

::EReg SVGData_obj::mScaleMatch;

::EReg SVGData_obj::mMatrixMatch;

::EReg SVGData_obj::mURLMatch;

::format::svg::FillType SVGData_obj::defaultFill;


SVGData_obj::SVGData_obj()
{
}

void SVGData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SVGData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(mConvertCubics,"mConvertCubics");
	HX_MARK_MEMBER_NAME(mGrads,"mGrads");
	HX_MARK_MEMBER_NAME(mPathParser,"mPathParser");
	::format::svg::Group_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SVGData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(mConvertCubics,"mConvertCubics");
	HX_VISIT_MEMBER_NAME(mGrads,"mGrads");
	HX_VISIT_MEMBER_NAME(mPathParser,"mPathParser");
	::format::svg::Group_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SVGData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { return SIN45; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { return TAN22; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"mGrads") ) { return mGrads; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { return getFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"getStyle") ) { return getStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"loadDefs") ) { return loadDefs_dyn(); }
		if (HX_FIELD_EQ(inName,"loadPath") ) { return loadPath_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mURLMatch") ) { return mURLMatch; }
		if (HX_FIELD_EQ(inName,"dumpGroup") ) { return dumpGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"getStyles") ) { return getStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGroup") ) { return loadGroup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStyleSplit") ) { return mStyleSplit; }
		if (HX_FIELD_EQ(inName,"mStyleValue") ) { return mStyleValue; }
		if (HX_FIELD_EQ(inName,"mScaleMatch") ) { return mScaleMatch; }
		if (HX_FIELD_EQ(inName,"defaultFill") ) { return defaultFill; }
		if (HX_FIELD_EQ(inName,"mPathParser") ) { return mPathParser; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mMatrixMatch") ) { return mMatrixMatch; }
		if (HX_FIELD_EQ(inName,"getFillStyle") ) { return getFillStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGradient") ) { return loadGradient_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getColorStyle") ) { return getColorStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"getFloatStyle") ) { return getFloatStyle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mConvertCubics") ) { return mConvertCubics; }
		if (HX_FIELD_EQ(inName,"applyTransform") ) { return applyTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"getStrokeStyle") ) { return getStrokeStyle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mTranslateMatch") ) { return mTranslateMatch; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SVGData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mGrads") ) { mGrads=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mURLMatch") ) { mURLMatch=inValue.Cast< ::EReg >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStyleSplit") ) { mStyleSplit=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mStyleValue") ) { mStyleValue=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mScaleMatch") ) { mScaleMatch=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultFill") ) { defaultFill=inValue.Cast< ::format::svg::FillType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mPathParser") ) { mPathParser=inValue.Cast< ::format::svg::PathParser >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mMatrixMatch") ) { mMatrixMatch=inValue.Cast< ::EReg >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mConvertCubics") ) { mConvertCubics=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"mTranslateMatch") ) { mTranslateMatch=inValue.Cast< ::EReg >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SVGData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("mConvertCubics"));
	outFields->push(HX_CSTRING("mGrads"));
	outFields->push(HX_CSTRING("mPathParser"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SIN45"),
	HX_CSTRING("TAN22"),
	HX_CSTRING("mStyleSplit"),
	HX_CSTRING("mStyleValue"),
	HX_CSTRING("mTranslateMatch"),
	HX_CSTRING("mScaleMatch"),
	HX_CSTRING("mMatrixMatch"),
	HX_CSTRING("mURLMatch"),
	HX_CSTRING("defaultFill"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SVGData_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(SVGData_obj,width),HX_CSTRING("width")},
	{hx::fsBool,(int)offsetof(SVGData_obj,mConvertCubics),HX_CSTRING("mConvertCubics")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(SVGData_obj,mGrads),HX_CSTRING("mGrads")},
	{hx::fsObject /*::format::svg::PathParser*/ ,(int)offsetof(SVGData_obj,mPathParser),HX_CSTRING("mPathParser")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("mConvertCubics"),
	HX_CSTRING("mGrads"),
	HX_CSTRING("mPathParser"),
	HX_CSTRING("applyTransform"),
	HX_CSTRING("dumpGroup"),
	HX_CSTRING("getColorStyle"),
	HX_CSTRING("getFillStyle"),
	HX_CSTRING("getFloat"),
	HX_CSTRING("getFloatStyle"),
	HX_CSTRING("getStrokeStyle"),
	HX_CSTRING("getStyle"),
	HX_CSTRING("getStyles"),
	HX_CSTRING("loadDefs"),
	HX_CSTRING("loadGradient"),
	HX_CSTRING("loadGroup"),
	HX_CSTRING("loadPath"),
	HX_CSTRING("loadText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SVGData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SVGData_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(SVGData_obj::TAN22,"TAN22");
	HX_MARK_MEMBER_NAME(SVGData_obj::mStyleSplit,"mStyleSplit");
	HX_MARK_MEMBER_NAME(SVGData_obj::mStyleValue,"mStyleValue");
	HX_MARK_MEMBER_NAME(SVGData_obj::mTranslateMatch,"mTranslateMatch");
	HX_MARK_MEMBER_NAME(SVGData_obj::mScaleMatch,"mScaleMatch");
	HX_MARK_MEMBER_NAME(SVGData_obj::mMatrixMatch,"mMatrixMatch");
	HX_MARK_MEMBER_NAME(SVGData_obj::mURLMatch,"mURLMatch");
	HX_MARK_MEMBER_NAME(SVGData_obj::defaultFill,"defaultFill");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SVGData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SVGData_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(SVGData_obj::TAN22,"TAN22");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mStyleSplit,"mStyleSplit");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mStyleValue,"mStyleValue");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mTranslateMatch,"mTranslateMatch");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mScaleMatch,"mScaleMatch");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mMatrixMatch,"mMatrixMatch");
	HX_VISIT_MEMBER_NAME(SVGData_obj::mURLMatch,"mURLMatch");
	HX_VISIT_MEMBER_NAME(SVGData_obj::defaultFill,"defaultFill");
};

#endif

Class SVGData_obj::__mClass;

void SVGData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.SVGData"), hx::TCanCast< SVGData_obj> ,sStaticFields,sMemberFields,
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

void SVGData_obj::__boot()
{
	SIN45= 0.70710678118654752440084436210485;
	TAN22= 0.4142135623730950488016887242097;
	mStyleSplit= ::EReg_obj::__new(HX_CSTRING(";"),HX_CSTRING("g"));
	mStyleValue= ::EReg_obj::__new(HX_CSTRING("\\s*(.*)\\s*:\\s*(.*)\\s*"),HX_CSTRING(""));
	mTranslateMatch= ::EReg_obj::__new(HX_CSTRING("translate\\((.*)[, ](.*)\\)"),HX_CSTRING(""));
	mScaleMatch= ::EReg_obj::__new(HX_CSTRING("scale\\((.*)\\)"),HX_CSTRING(""));
	mMatrixMatch= ::EReg_obj::__new(HX_CSTRING("matrix\\((.*)[, ](.*)[, ](.*)[, ](.*)[, ](.*)[, ](.*)\\)"),HX_CSTRING(""));
	mURLMatch= ::EReg_obj::__new(HX_CSTRING("url\\(#(.*)\\)"),HX_CSTRING(""));
	defaultFill= ::format::svg::FillType_obj::FillSolid((int)0);
}

} // end namespace format
} // end namespace svg
