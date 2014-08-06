#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_Gfx2Haxe
#include <format/gfx/Gfx2Haxe.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_gfx_LineStyle
#include <format/gfx/LineStyle.h>
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
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace format{
namespace gfx{

Void Gfx2Haxe_obj::__construct()
{
HX_STACK_FRAME("format.gfx.Gfx2Haxe","new",0x7e7ee51d,"format.gfx.Gfx2Haxe.new","format/gfx/Gfx2Haxe.hx",17,0xe4c483b1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(19)
	this->commands = Array_obj< ::String >::__new();
}
;
	return null();
}

//Gfx2Haxe_obj::~Gfx2Haxe_obj() { }

Dynamic Gfx2Haxe_obj::__CreateEmpty() { return  new Gfx2Haxe_obj; }
hx::ObjectPtr< Gfx2Haxe_obj > Gfx2Haxe_obj::__new()
{  hx::ObjectPtr< Gfx2Haxe_obj > result = new Gfx2Haxe_obj();
	result->__construct();
	return result;}

Dynamic Gfx2Haxe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gfx2Haxe_obj > result = new Gfx2Haxe_obj();
	result->__construct();
	return result;}

::String Gfx2Haxe_obj::f2a( Float f){
	HX_STACK_FRAME("format.gfx.Gfx2Haxe","f2a",0x7e78a692,"format.gfx.Gfx2Haxe.f2a","format/gfx/Gfx2Haxe.hx",23,0xe4c483b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(24)
	Float _g = ::Math_obj::abs(f);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	if (((_g < 0.000001))){
		HX_STACK_LINE(24)
		return HX_CSTRING("0");
	}
	HX_STACK_LINE(25)
	Float _g1 = ::Math_obj::abs(((int)1 - f));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(25)
	if (((_g1 < 0.000001))){
		HX_STACK_LINE(25)
		return HX_CSTRING("1");
	}
	HX_STACK_LINE(26)
	return (f + HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx2Haxe_obj,f2a,return )

::String Gfx2Haxe_obj::newMatrix( ::openfl::geom::Matrix m){
	HX_STACK_FRAME("format.gfx.Gfx2Haxe","newMatrix",0xca83c33e,"format.gfx.Gfx2Haxe.newMatrix","format/gfx/Gfx2Haxe.hx",31,0xe4c483b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(32)
	::String _g = this->f2a(m->a);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	::String _g1 = (HX_CSTRING("new Matrix(") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	::String _g2 = (_g1 + HX_CSTRING(","));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(32)
	::String _g3 = this->f2a(m->b);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(32)
	::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(32)
	::String _g5 = (_g4 + HX_CSTRING(","));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(32)
	::String _g6 = this->f2a(m->c);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(32)
	::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(32)
	::String _g8 = (_g7 + HX_CSTRING(","));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(32)
	::String _g9 = this->f2a(m->d);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(32)
	::String _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(32)
	::String _g11 = (_g10 + HX_CSTRING(","));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(32)
	::String _g12 = this->f2a(m->tx);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(32)
	::String _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(32)
	::String _g14 = (_g13 + HX_CSTRING(","));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(32)
	::String _g15 = this->f2a(m->ty);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(32)
	::String _g16 = (_g14 + _g15);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(32)
	return (_g16 + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx2Haxe_obj,newMatrix,return )

Void Gfx2Haxe_obj::beginGradientFill( ::format::gfx::Gradient grad){
{
		HX_STACK_FRAME("format.gfx.Gfx2Haxe","beginGradientFill",0xa7ae41d9,"format.gfx.Gfx2Haxe.beginGradientFill","format/gfx/Gfx2Haxe.hx",37,0xe4c483b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(grad,"grad")
		HX_STACK_LINE(38)
		::String _g = ::Std_obj::string(grad->type);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		::String _g1 = (HX_CSTRING("g.beginGradientFill(") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		::String _g2 = (_g1 + HX_CSTRING(","));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(38)
		::String _g3 = ::Std_obj::string(grad->colors);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(38)
		::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(38)
		::String _g5 = (_g4 + HX_CSTRING(","));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(38)
		::String _g6 = ::Std_obj::string(grad->alphas);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(38)
		::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(38)
		::String _g8 = (_g7 + HX_CSTRING(","));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(39)
		::String _g9 = ::Std_obj::string(grad->ratios);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(38)
		::String _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(38)
		::String _g11 = (_g10 + HX_CSTRING(","));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(39)
		::String _g12 = this->newMatrix(grad->matrix);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(38)
		::String _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(38)
		::String _g14 = (_g13 + HX_CSTRING(","));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(39)
		::String _g15 = ::Std_obj::string(grad->spread);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(38)
		::String _g16 = (_g14 + _g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(38)
		::String _g17 = (_g16 + HX_CSTRING(","));		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(40)
		::String _g18 = ::Std_obj::string(grad->interp);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(38)
		::String _g19 = (_g17 + _g18);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(38)
		::String _g20 = (_g19 + HX_CSTRING(","));		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(38)
		::String _g21 = (_g20 + grad->focus);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(38)
		::String _g22 = (_g21 + HX_CSTRING(");"));		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(38)
		this->commands->push(_g22);
	}
return null();
}


Void Gfx2Haxe_obj::beginFill( int color,Float alpha){
{
		HX_STACK_FRAME("format.gfx.Gfx2Haxe","beginFill",0xdda06dc9,"format.gfx.Gfx2Haxe.beginFill","format/gfx/Gfx2Haxe.hx",44,0xe4c483b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(45)
		::String _g = this->f2a(alpha);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		::String _g1 = (((HX_CSTRING("g.beginFill(") + color) + HX_CSTRING(",")) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		::String _g2 = (_g1 + HX_CSTRING(");"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(45)
		this->commands->push(_g2);
	}
return null();
}


Void Gfx2Haxe_obj::endFill( ){
{
		HX_STACK_FRAME("format.gfx.Gfx2Haxe","endFill",0x6be13f3b,"format.gfx.Gfx2Haxe.endFill","format/gfx/Gfx2Haxe.hx",47,0xe4c483b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->commands->push(HX_CSTRING("g.endFill();"));
	}
return null();
}


Void Gfx2Haxe_obj::lineStyle( ::format::gfx::LineStyle style){
{
		HX_STACK_FRAME("format.gfx.Gfx2Haxe","lineStyle",0x1c23691a,"format.gfx.Gfx2Haxe.lineStyle","format/gfx/Gfx2Haxe.hx",51,0xe4c483b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(style,"style")
		HX_STACK_LINE(52)
		::String _g = this->f2a(style->thickness);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		::String _g1 = (HX_CSTRING("g.lineStyle(") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		::String _g2 = (_g1 + HX_CSTRING(","));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(52)
		::String _g3 = (_g2 + style->color);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(52)
		::String _g4 = (_g3 + HX_CSTRING(","));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(52)
		::String _g5 = this->f2a(style->alpha);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(52)
		::String _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(52)
		::String _g7 = (_g6 + HX_CSTRING(","));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(52)
		::String _g8 = ::Std_obj::string(style->pixelHinting);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(52)
		::String _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(52)
		::String _g10 = (_g9 + HX_CSTRING(","));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(53)
		::String _g11 = ::Std_obj::string(style->scaleMode);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(52)
		::String _g12 = (_g10 + _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(52)
		::String _g13 = (_g12 + HX_CSTRING(","));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(53)
		::String _g14 = ::Std_obj::string(style->capsStyle);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(52)
		::String _g15 = (_g13 + _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(52)
		::String _g16 = (_g15 + HX_CSTRING(","));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(53)
		::String _g17 = ::Std_obj::string(style->jointStyle);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(52)
		::String _g18 = (_g16 + _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(52)
		::String _g19 = (_g18 + HX_CSTRING(","));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(53)
		::String _g20 = this->f2a(style->miterLimit);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(52)
		::String _g21 = (_g19 + _g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(52)
		this->commands->push(_g21);
	}
return null();
}


Void Gfx2Haxe_obj::endLineStyle( ){
{
		HX_STACK_FRAME("format.gfx.Gfx2Haxe","endLineStyle",0x86e79ce5,"format.gfx.Gfx2Haxe.endLineStyle","format/gfx/Gfx2Haxe.hx",57,0xe4c483b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->commands->push(HX_CSTRING("g.lineStyle();"));
	}
return null();
}


Void Gfx2Haxe_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.Gfx2Haxe","moveTo",0xf093924f,"format.gfx.Gfx2Haxe.moveTo","format/gfx/Gfx2Haxe.hx",60,0xe4c483b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(60)
		this->commands->push(((((HX_CSTRING("g.moveTo(") + inX) + HX_CSTRING(",")) + inY) + HX_CSTRING(");")));
	}
return null();
}


Void Gfx2Haxe_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.Gfx2Haxe","lineTo",0x108705f2,"format.gfx.Gfx2Haxe.lineTo","format/gfx/Gfx2Haxe.hx",62,0xe4c483b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(62)
		this->commands->push(((((HX_CSTRING("g.lineTo(") + inX) + HX_CSTRING(",")) + inY) + HX_CSTRING(");")));
	}
return null();
}


Void Gfx2Haxe_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.Gfx2Haxe","curveTo",0x14891747,"format.gfx.Gfx2Haxe.curveTo","format/gfx/Gfx2Haxe.hx",64,0xe4c483b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inCX,"inCX")
		HX_STACK_ARG(inCY,"inCY")
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(64)
		this->commands->push(((((((((HX_CSTRING("g.curveTo(") + inCX) + HX_CSTRING(",")) + inCY) + HX_CSTRING(",")) + inX) + HX_CSTRING(",")) + inY) + HX_CSTRING(");")));
	}
return null();
}



Gfx2Haxe_obj::Gfx2Haxe_obj()
{
}

void Gfx2Haxe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gfx2Haxe);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_END_CLASS();
}

void Gfx2Haxe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
}

Dynamic Gfx2Haxe_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"f2a") ) { return f2a_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return commands; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"newMatrix") ) { return newMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endLineStyle") ) { return endLineStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gfx2Haxe_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Gfx2Haxe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("commands"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Gfx2Haxe_obj,commands),HX_CSTRING("commands")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("commands"),
	HX_CSTRING("f2a"),
	HX_CSTRING("newMatrix"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("endFill"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("endLineStyle"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("curveTo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gfx2Haxe_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gfx2Haxe_obj::__mClass,"__mClass");
};

#endif

Class Gfx2Haxe_obj::__mClass;

void Gfx2Haxe_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.Gfx2Haxe"), hx::TCanCast< Gfx2Haxe_obj> ,sStaticFields,sMemberFields,
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

void Gfx2Haxe_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
