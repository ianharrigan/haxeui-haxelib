#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_GfxGraphics
#include <format/gfx/GfxGraphics.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_gfx_LineStyle
#include <format/gfx/LineStyle.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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

Void GfxGraphics_obj::__construct(::openfl::display::Graphics inGraphics)
{
HX_STACK_FRAME("format.gfx.GfxGraphics","new",0x41bbd28a,"format.gfx.GfxGraphics.new","format/gfx/GfxGraphics.hx",18,0xfe340028)
HX_STACK_THIS(this)
HX_STACK_ARG(inGraphics,"inGraphics")
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->graphics = inGraphics;
}
;
	return null();
}

//GfxGraphics_obj::~GfxGraphics_obj() { }

Dynamic GfxGraphics_obj::__CreateEmpty() { return  new GfxGraphics_obj; }
hx::ObjectPtr< GfxGraphics_obj > GfxGraphics_obj::__new(::openfl::display::Graphics inGraphics)
{  hx::ObjectPtr< GfxGraphics_obj > result = new GfxGraphics_obj();
	result->__construct(inGraphics);
	return result;}

Dynamic GfxGraphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GfxGraphics_obj > result = new GfxGraphics_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GfxGraphics_obj::beginGradientFill( ::format::gfx::Gradient grad){
{
		HX_STACK_FRAME("format.gfx.GfxGraphics","beginGradientFill",0x7df2f406,"format.gfx.GfxGraphics.beginGradientFill","format/gfx/GfxGraphics.hx",25,0xfe340028)
		HX_STACK_THIS(this)
		HX_STACK_ARG(grad,"grad")
		HX_STACK_LINE(25)
		this->graphics->beginGradientFill(grad->type,grad->colors,grad->alphas,grad->ratios,grad->matrix,grad->spread,grad->interp,grad->focus);
	}
return null();
}


Void GfxGraphics_obj::beginFill( int color,Float alpha){
{
		HX_STACK_FRAME("format.gfx.GfxGraphics","beginFill",0xc970aaf6,"format.gfx.GfxGraphics.beginFill","format/gfx/GfxGraphics.hx",28,0xfe340028)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(28)
		this->graphics->beginFill(color,alpha);
	}
return null();
}


Void GfxGraphics_obj::endFill( ){
{
		HX_STACK_FRAME("format.gfx.GfxGraphics","endFill",0x3745e728,"format.gfx.GfxGraphics.endFill","format/gfx/GfxGraphics.hx",29,0xfe340028)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->graphics->endFill();
	}
return null();
}


Void GfxGraphics_obj::lineStyle( ::format::gfx::LineStyle style){
{
		HX_STACK_FRAME("format.gfx.GfxGraphics","lineStyle",0x07f3a647,"format.gfx.GfxGraphics.lineStyle","format/gfx/GfxGraphics.hx",33,0xfe340028)
		HX_STACK_THIS(this)
		HX_STACK_ARG(style,"style")
		HX_STACK_LINE(33)
		this->graphics->lineStyle(style->thickness,style->color,style->alpha,style->pixelHinting,style->scaleMode,style->capsStyle,style->jointStyle,style->miterLimit);
	}
return null();
}


Void GfxGraphics_obj::endLineStyle( ){
{
		HX_STACK_FRAME("format.gfx.GfxGraphics","endLineStyle",0x4cda19d8,"format.gfx.GfxGraphics.endLineStyle","format/gfx/GfxGraphics.hx",35,0xfe340028)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->graphics->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
	}
return null();
}


Void GfxGraphics_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxGraphics","moveTo",0xca750702,"format.gfx.GfxGraphics.moveTo","format/gfx/GfxGraphics.hx",37,0xfe340028)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(37)
		this->graphics->moveTo(inX,inY);
	}
return null();
}


Void GfxGraphics_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxGraphics","lineTo",0xea687aa5,"format.gfx.GfxGraphics.lineTo","format/gfx/GfxGraphics.hx",38,0xfe340028)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(38)
		this->graphics->lineTo(inX,inY);
	}
return null();
}


Void GfxGraphics_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxGraphics","curveTo",0xdfedbf34,"format.gfx.GfxGraphics.curveTo","format/gfx/GfxGraphics.hx",40,0xfe340028)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inCX,"inCX")
		HX_STACK_ARG(inCY,"inCY")
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(40)
		this->graphics->curveTo(inCX,inCY,inX,inY);
	}
return null();
}



GfxGraphics_obj::GfxGraphics_obj()
{
}

void GfxGraphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GfxGraphics);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_END_CLASS();
}

void GfxGraphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
}

Dynamic GfxGraphics_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return graphics; }
		break;
	case 9:
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

Dynamic GfxGraphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::openfl::display::Graphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GfxGraphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("graphics"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Graphics*/ ,(int)offsetof(GfxGraphics_obj,graphics),HX_CSTRING("graphics")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("graphics"),
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
	HX_MARK_MEMBER_NAME(GfxGraphics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GfxGraphics_obj::__mClass,"__mClass");
};

#endif

Class GfxGraphics_obj::__mClass;

void GfxGraphics_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.GfxGraphics"), hx::TCanCast< GfxGraphics_obj> ,sStaticFields,sMemberFields,
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

void GfxGraphics_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
