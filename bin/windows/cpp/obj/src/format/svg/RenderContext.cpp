#include <hxcpp.h>

#ifndef INCLUDED_format_svg_RenderContext
#include <format/svg/RenderContext.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace format{
namespace svg{

Void RenderContext_obj::__construct(::openfl::geom::Matrix inMatrix,::openfl::geom::Rectangle inRect,Dynamic inW,Dynamic inH)
{
HX_STACK_FRAME("format.svg.RenderContext","new",0x78fd478a,"format.svg.RenderContext.new","format/svg/RenderContext.hx",9,0x392eafa8)
HX_STACK_THIS(this)
HX_STACK_ARG(inMatrix,"inMatrix")
HX_STACK_ARG(inRect,"inRect")
HX_STACK_ARG(inW,"inW")
HX_STACK_ARG(inH,"inH")
{
	HX_STACK_LINE(10)
	this->matrix = inMatrix;
	HX_STACK_LINE(11)
	this->rect = inRect;
	HX_STACK_LINE(12)
	if (((inW != null()))){
		HX_STACK_LINE(12)
		this->rectW = inW;
	}
	else{
		HX_STACK_LINE(12)
		if (((inRect != null()))){
			HX_STACK_LINE(12)
			this->rectW = inRect->width;
		}
		else{
			HX_STACK_LINE(12)
			this->rectW = (int)1;
		}
	}
	HX_STACK_LINE(13)
	if (((inH != null()))){
		HX_STACK_LINE(13)
		this->rectH = inH;
	}
	else{
		HX_STACK_LINE(13)
		if (((inRect != null()))){
			HX_STACK_LINE(13)
			this->rectH = inRect->height;
		}
		else{
			HX_STACK_LINE(13)
			this->rectH = (int)1;
		}
	}
	HX_STACK_LINE(14)
	this->firstX = (int)0;
	HX_STACK_LINE(15)
	this->firstY = (int)0;
	HX_STACK_LINE(16)
	this->lastX = (int)0;
	HX_STACK_LINE(17)
	this->lastY = (int)0;
}
;
	return null();
}

//RenderContext_obj::~RenderContext_obj() { }

Dynamic RenderContext_obj::__CreateEmpty() { return  new RenderContext_obj; }
hx::ObjectPtr< RenderContext_obj > RenderContext_obj::__new(::openfl::geom::Matrix inMatrix,::openfl::geom::Rectangle inRect,Dynamic inW,Dynamic inH)
{  hx::ObjectPtr< RenderContext_obj > result = new RenderContext_obj();
	result->__construct(inMatrix,inRect,inW,inH);
	return result;}

Dynamic RenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RenderContext_obj > result = new RenderContext_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Float RenderContext_obj::transX( Float inX,Float inY){
	HX_STACK_FRAME("format.svg.RenderContext","transX",0xa0a36a46,"format.svg.RenderContext.transX","format/svg/RenderContext.hx",20,0x392eafa8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inX,"inX")
	HX_STACK_ARG(inY,"inY")
	HX_STACK_LINE(21)
	if (((bool((this->rect != null())) && bool((inX > this->rect->x))))){
		HX_STACK_LINE(23)
		Float _g = this->rect->get_right();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		if (((inX > _g))){
			HX_STACK_LINE(24)
			hx::AddEq(inX,(this->rectW - this->rect->width));
		}
		else{
			HX_STACK_LINE(26)
			inX = (this->rect->x + (Float((this->rectW * ((inX - this->rect->x)))) / Float(this->rect->width)));
		}
	}
	HX_STACK_LINE(28)
	return (((inX * this->matrix->a) + (inY * this->matrix->c)) + this->matrix->tx);
}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,transX,return )

Float RenderContext_obj::transY( Float inX,Float inY){
	HX_STACK_FRAME("format.svg.RenderContext","transY",0xa0a36a47,"format.svg.RenderContext.transY","format/svg/RenderContext.hx",31,0x392eafa8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inX,"inX")
	HX_STACK_ARG(inY,"inY")
	HX_STACK_LINE(32)
	if (((bool((this->rect != null())) && bool((inY > this->rect->y))))){
		HX_STACK_LINE(34)
		Float _g = this->rect->get_right();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		if (((inY > _g))){
			HX_STACK_LINE(35)
			hx::AddEq(inY,(this->rectH - this->rect->height));
		}
		else{
			HX_STACK_LINE(37)
			inY = (this->rect->y + (Float((this->rectH * ((inY - this->rect->y)))) / Float(this->rect->height)));
		}
	}
	HX_STACK_LINE(39)
	return (((inX * this->matrix->b) + (inY * this->matrix->d)) + this->matrix->ty);
}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,transY,return )

Void RenderContext_obj::setLast( Float inX,Float inY){
{
		HX_STACK_FRAME("format.svg.RenderContext","setLast",0x6c369f42,"format.svg.RenderContext.setLast","format/svg/RenderContext.hx",44,0x392eafa8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(45)
		Float _g = this->transX(inX,inY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		this->lastX = _g;
		HX_STACK_LINE(46)
		Float _g1 = this->transY(inX,inY);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		this->lastY = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RenderContext_obj,setLast,(void))


RenderContext_obj::RenderContext_obj()
{
}

void RenderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RenderContext);
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(rectW,"rectW");
	HX_MARK_MEMBER_NAME(rectH,"rectH");
	HX_MARK_MEMBER_NAME(firstX,"firstX");
	HX_MARK_MEMBER_NAME(firstY,"firstY");
	HX_MARK_MEMBER_NAME(lastX,"lastX");
	HX_MARK_MEMBER_NAME(lastY,"lastY");
	HX_MARK_END_CLASS();
}

void RenderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(rectW,"rectW");
	HX_VISIT_MEMBER_NAME(rectH,"rectH");
	HX_VISIT_MEMBER_NAME(firstX,"firstX");
	HX_VISIT_MEMBER_NAME(firstY,"firstY");
	HX_VISIT_MEMBER_NAME(lastX,"lastX");
	HX_VISIT_MEMBER_NAME(lastY,"lastY");
}

Dynamic RenderContext_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rectW") ) { return rectW; }
		if (HX_FIELD_EQ(inName,"rectH") ) { return rectH; }
		if (HX_FIELD_EQ(inName,"lastX") ) { return lastX; }
		if (HX_FIELD_EQ(inName,"lastY") ) { return lastY; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"transX") ) { return transX_dyn(); }
		if (HX_FIELD_EQ(inName,"transY") ) { return transY_dyn(); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"firstX") ) { return firstX; }
		if (HX_FIELD_EQ(inName,"firstY") ) { return firstY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setLast") ) { return setLast_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rectW") ) { rectW=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rectH") ) { rectH=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastX") ) { lastX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastY") ) { lastY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstX") ) { firstX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstY") ) { firstY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("matrix"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("rectW"));
	outFields->push(HX_CSTRING("rectH"));
	outFields->push(HX_CSTRING("firstX"));
	outFields->push(HX_CSTRING("firstY"));
	outFields->push(HX_CSTRING("lastX"));
	outFields->push(HX_CSTRING("lastY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(RenderContext_obj,matrix),HX_CSTRING("matrix")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(RenderContext_obj,rect),HX_CSTRING("rect")},
	{hx::fsFloat,(int)offsetof(RenderContext_obj,rectW),HX_CSTRING("rectW")},
	{hx::fsFloat,(int)offsetof(RenderContext_obj,rectH),HX_CSTRING("rectH")},
	{hx::fsFloat,(int)offsetof(RenderContext_obj,firstX),HX_CSTRING("firstX")},
	{hx::fsFloat,(int)offsetof(RenderContext_obj,firstY),HX_CSTRING("firstY")},
	{hx::fsFloat,(int)offsetof(RenderContext_obj,lastX),HX_CSTRING("lastX")},
	{hx::fsFloat,(int)offsetof(RenderContext_obj,lastY),HX_CSTRING("lastY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("transX"),
	HX_CSTRING("transY"),
	HX_CSTRING("setLast"),
	HX_CSTRING("matrix"),
	HX_CSTRING("rect"),
	HX_CSTRING("rectW"),
	HX_CSTRING("rectH"),
	HX_CSTRING("firstX"),
	HX_CSTRING("firstY"),
	HX_CSTRING("lastX"),
	HX_CSTRING("lastY"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RenderContext_obj::__mClass,"__mClass");
};

#endif

Class RenderContext_obj::__mClass;

void RenderContext_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.RenderContext"), hx::TCanCast< RenderContext_obj> ,sStaticFields,sMemberFields,
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

void RenderContext_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
