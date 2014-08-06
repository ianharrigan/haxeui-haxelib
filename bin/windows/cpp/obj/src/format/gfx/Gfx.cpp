#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_gfx_LineStyle
#include <format/gfx/LineStyle.h>
#endif
#ifndef INCLUDED_format_svg_Text
#include <format/svg/Text.h>
#endif
namespace format{
namespace gfx{

Void Gfx_obj::__construct()
{
HX_STACK_FRAME("format.gfx.Gfx","new",0x9478571f,"format.gfx.Gfx.new","format/gfx/Gfx.hx",15,0xf24b1333)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Gfx_obj::~Gfx_obj() { }

Dynamic Gfx_obj::__CreateEmpty() { return  new Gfx_obj; }
hx::ObjectPtr< Gfx_obj > Gfx_obj::__new()
{  hx::ObjectPtr< Gfx_obj > result = new Gfx_obj();
	result->__construct();
	return result;}

Dynamic Gfx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Gfx_obj > result = new Gfx_obj();
	result->__construct();
	return result;}

bool Gfx_obj::geometryOnly( ){
	HX_STACK_FRAME("format.gfx.Gfx","geometryOnly",0x93db1e9f,"format.gfx.Gfx.geometryOnly","format/gfx/Gfx.hx",16,0xf24b1333)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,geometryOnly,return )

Void Gfx_obj::size( Float inWidth,Float inHeight){
{
		HX_STACK_FRAME("format.gfx.Gfx","size",0x58250122,"format.gfx.Gfx.size","format/gfx/Gfx.hx",17,0xf24b1333)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inWidth,"inWidth")
		HX_STACK_ARG(inHeight,"inHeight")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,size,(void))

Void Gfx_obj::beginGradientFill( ::format::gfx::Gradient grad){
{
		HX_STACK_FRAME("format.gfx.Gfx","beginGradientFill",0x1682735b,"format.gfx.Gfx.beginGradientFill","format/gfx/Gfx.hx",18,0xf24b1333)
		HX_STACK_THIS(this)
		HX_STACK_ARG(grad,"grad")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,beginGradientFill,(void))

Void Gfx_obj::beginFill( int color,Float alpha){
{
		HX_STACK_FRAME("format.gfx.Gfx","beginFill",0x16664d4b,"format.gfx.Gfx.beginFill","format/gfx/Gfx.hx",20,0xf24b1333)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,beginFill,(void))

Void Gfx_obj::endFill( ){
{
		HX_STACK_FRAME("format.gfx.Gfx","endFill",0x4748da3d,"format.gfx.Gfx.endFill","format/gfx/Gfx.hx",21,0xf24b1333)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,endFill,(void))

Void Gfx_obj::lineStyle( ::format::gfx::LineStyle style){
{
		HX_STACK_FRAME("format.gfx.Gfx","lineStyle",0x54e9489c,"format.gfx.Gfx.lineStyle","format/gfx/Gfx.hx",23,0xf24b1333)
		HX_STACK_THIS(this)
		HX_STACK_ARG(style,"style")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,lineStyle,(void))

Void Gfx_obj::endLineStyle( ){
{
		HX_STACK_FRAME("format.gfx.Gfx","endLineStyle",0x13c4daa3,"format.gfx.Gfx.endLineStyle","format/gfx/Gfx.hx",24,0xf24b1333)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,endLineStyle,(void))

Void Gfx_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.Gfx","moveTo",0x77dfcd8d,"format.gfx.Gfx.moveTo","format/gfx/Gfx.hx",26,0xf24b1333)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,moveTo,(void))

Void Gfx_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.Gfx","lineTo",0x97d34130,"format.gfx.Gfx.lineTo","format/gfx/Gfx.hx",27,0xf24b1333)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Gfx_obj,lineTo,(void))

Void Gfx_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.Gfx","curveTo",0xeff0b249,"format.gfx.Gfx.curveTo","format/gfx/Gfx.hx",28,0xf24b1333)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inCX,"inCX")
		HX_STACK_ARG(inCY,"inCY")
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Gfx_obj,curveTo,(void))

Void Gfx_obj::renderText( ::format::svg::Text text){
{
		HX_STACK_FRAME("format.gfx.Gfx","renderText",0xf6bf2644,"format.gfx.Gfx.renderText","format/gfx/Gfx.hx",30,0xf24b1333)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Gfx_obj,renderText,(void))

Void Gfx_obj::eof( ){
{
		HX_STACK_FRAME("format.gfx.Gfx","eof",0x94718b7b,"format.gfx.Gfx.eof","format/gfx/Gfx.hx",32,0xf24b1333)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Gfx_obj,eof,(void))


Gfx_obj::Gfx_obj()
{
}

Dynamic Gfx_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { return eof_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderText") ) { return renderText_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"geometryOnly") ) { return geometryOnly_dyn(); }
		if (HX_FIELD_EQ(inName,"endLineStyle") ) { return endLineStyle_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Gfx_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Gfx_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("geometryOnly"),
	HX_CSTRING("size"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("endFill"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("endLineStyle"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("curveTo"),
	HX_CSTRING("renderText"),
	HX_CSTRING("eof"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gfx_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gfx_obj::__mClass,"__mClass");
};

#endif

Class Gfx_obj::__mClass;

void Gfx_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.Gfx"), hx::TCanCast< Gfx_obj> ,sStaticFields,sMemberFields,
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

void Gfx_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
