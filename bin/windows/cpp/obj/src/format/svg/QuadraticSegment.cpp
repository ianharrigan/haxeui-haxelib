#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_format_svg_QuadraticSegment
#include <format/svg/QuadraticSegment.h>
#endif
#ifndef INCLUDED_format_svg_RenderContext
#include <format/svg/RenderContext.h>
#endif
namespace format{
namespace svg{

Void QuadraticSegment_obj::__construct(Float inCX,Float inCY,Float inX,Float inY)
{
HX_STACK_FRAME("format.svg.QuadraticSegment","new",0x01245aae,"format.svg.QuadraticSegment.new","format/svg/PathSegment.hx",66,0x6d7bc4b3)
HX_STACK_THIS(this)
HX_STACK_ARG(inCX,"inCX")
HX_STACK_ARG(inCY,"inCY")
HX_STACK_ARG(inX,"inX")
HX_STACK_ARG(inY,"inY")
{
	HX_STACK_LINE(67)
	super::__construct(inX,inY);
	HX_STACK_LINE(68)
	this->cx = inCX;
	HX_STACK_LINE(69)
	this->cy = inCY;
}
;
	return null();
}

//QuadraticSegment_obj::~QuadraticSegment_obj() { }

Dynamic QuadraticSegment_obj::__CreateEmpty() { return  new QuadraticSegment_obj; }
hx::ObjectPtr< QuadraticSegment_obj > QuadraticSegment_obj::__new(Float inCX,Float inCY,Float inX,Float inY)
{  hx::ObjectPtr< QuadraticSegment_obj > result = new QuadraticSegment_obj();
	result->__construct(inCX,inCY,inX,inY);
	return result;}

Dynamic QuadraticSegment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadraticSegment_obj > result = new QuadraticSegment_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float QuadraticSegment_obj::prevCX( ){
	HX_STACK_FRAME("format.svg.QuadraticSegment","prevCX",0x7af336da,"format.svg.QuadraticSegment.prevCX","format/svg/PathSegment.hx",72,0x6d7bc4b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	return this->cx;
}


Float QuadraticSegment_obj::prevCY( ){
	HX_STACK_FRAME("format.svg.QuadraticSegment","prevCY",0x7af336db,"format.svg.QuadraticSegment.prevCY","format/svg/PathSegment.hx",73,0x6d7bc4b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return this->cy;
}


Void QuadraticSegment_obj::toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext){
{
		HX_STACK_FRAME("format.svg.QuadraticSegment","toGfx",0x51d26c8c,"format.svg.QuadraticSegment.toGfx","format/svg/PathSegment.hx",76,0x6d7bc4b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inGfx,"inGfx")
		HX_STACK_ARG(ioContext,"ioContext")
		HX_STACK_LINE(77)
		ioContext->setLast(this->x,this->y);
		HX_STACK_LINE(78)
		Float _g = ioContext->transX(this->cx,this->cy);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		Float _g1 = ioContext->transY(this->cx,this->cy);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(78)
		inGfx->curveTo(_g,_g1,ioContext->lastX,ioContext->lastY);
	}
return null();
}


int QuadraticSegment_obj::getType( ){
	HX_STACK_FRAME("format.svg.QuadraticSegment","getType",0xfdaa6bbe,"format.svg.QuadraticSegment.getType","format/svg/PathSegment.hx",82,0x6d7bc4b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	return (int)3;
}



QuadraticSegment_obj::QuadraticSegment_obj()
{
}

Dynamic QuadraticSegment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cx") ) { return cx; }
		if (HX_FIELD_EQ(inName,"cy") ) { return cy; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toGfx") ) { return toGfx_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prevCX") ) { return prevCX_dyn(); }
		if (HX_FIELD_EQ(inName,"prevCY") ) { return prevCY_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadraticSegment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cx") ) { cx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cy") ) { cy=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadraticSegment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cx"));
	outFields->push(HX_CSTRING("cy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(QuadraticSegment_obj,cx),HX_CSTRING("cx")},
	{hx::fsFloat,(int)offsetof(QuadraticSegment_obj,cy),HX_CSTRING("cy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("cx"),
	HX_CSTRING("cy"),
	HX_CSTRING("prevCX"),
	HX_CSTRING("prevCY"),
	HX_CSTRING("toGfx"),
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadraticSegment_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadraticSegment_obj::__mClass,"__mClass");
};

#endif

Class QuadraticSegment_obj::__mClass;

void QuadraticSegment_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.QuadraticSegment"), hx::TCanCast< QuadraticSegment_obj> ,sStaticFields,sMemberFields,
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

void QuadraticSegment_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
