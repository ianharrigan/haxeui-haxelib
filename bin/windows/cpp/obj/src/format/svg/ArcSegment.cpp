#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_svg_ArcSegment
#include <format/svg/ArcSegment.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_format_svg_RenderContext
#include <format/svg/RenderContext.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
namespace format{
namespace svg{

Void ArcSegment_obj::__construct(Float inX1,Float inY1,Float inRX,Float inRY,Float inRotation,bool inLargeArc,bool inSweep,Float x,Float y)
{
HX_STACK_FRAME("format.svg.ArcSegment","new",0x3249feb4,"format.svg.ArcSegment.new","format/svg/PathSegment.hx",233,0x6d7bc4b3)
HX_STACK_THIS(this)
HX_STACK_ARG(inX1,"inX1")
HX_STACK_ARG(inY1,"inY1")
HX_STACK_ARG(inRX,"inRX")
HX_STACK_ARG(inRY,"inRY")
HX_STACK_ARG(inRotation,"inRotation")
HX_STACK_ARG(inLargeArc,"inLargeArc")
HX_STACK_ARG(inSweep,"inSweep")
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
{
	HX_STACK_LINE(234)
	this->x1 = inX1;
	HX_STACK_LINE(235)
	this->y1 = inY1;
	HX_STACK_LINE(236)
	super::__construct(x,y);
	HX_STACK_LINE(237)
	this->rx = inRX;
	HX_STACK_LINE(238)
	this->ry = inRY;
	HX_STACK_LINE(239)
	this->phi = inRotation;
	HX_STACK_LINE(240)
	this->fA = inLargeArc;
	HX_STACK_LINE(241)
	this->fS = inSweep;
}
;
	return null();
}

//ArcSegment_obj::~ArcSegment_obj() { }

Dynamic ArcSegment_obj::__CreateEmpty() { return  new ArcSegment_obj; }
hx::ObjectPtr< ArcSegment_obj > ArcSegment_obj::__new(Float inX1,Float inY1,Float inRX,Float inRY,Float inRotation,bool inLargeArc,bool inSweep,Float x,Float y)
{  hx::ObjectPtr< ArcSegment_obj > result = new ArcSegment_obj();
	result->__construct(inX1,inY1,inRX,inRY,inRotation,inLargeArc,inSweep,x,y);
	return result;}

Dynamic ArcSegment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArcSegment_obj > result = new ArcSegment_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

Void ArcSegment_obj::toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext){
{
		HX_STACK_FRAME("format.svg.ArcSegment","toGfx",0x52ad9e12,"format.svg.ArcSegment.toGfx","format/svg/PathSegment.hx",245,0x6d7bc4b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inGfx,"inGfx")
		HX_STACK_ARG(ioContext,"ioContext")
		HX_STACK_LINE(246)
		if (((bool((this->x1 == this->x)) && bool((this->y1 == this->y))))){
			HX_STACK_LINE(247)
			return null();
		}
		HX_STACK_LINE(248)
		ioContext->setLast(this->x,this->y);
		HX_STACK_LINE(249)
		if (((bool((this->rx == (int)0)) || bool((this->ry == (int)0))))){
			HX_STACK_LINE(251)
			inGfx->lineTo(ioContext->lastX,ioContext->lastY);
			HX_STACK_LINE(252)
			return null();
		}
		HX_STACK_LINE(254)
		if (((this->rx < (int)0))){
			HX_STACK_LINE(254)
			this->rx = -(this->rx);
		}
		HX_STACK_LINE(255)
		if (((this->ry < (int)0))){
			HX_STACK_LINE(255)
			this->ry = -(this->ry);
		}
		HX_STACK_LINE(258)
		Float p = (Float((this->phi * ::Math_obj::PI)) / Float(180.0));		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(259)
		Float cos = ::Math_obj::cos(p);		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(260)
		Float sin = ::Math_obj::sin(p);		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(263)
		Float dx = (((this->x1 - this->x)) * 0.5);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(264)
		Float dy = (((this->y1 - this->y)) * 0.5);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(265)
		Float x1_ = ((cos * dx) + (sin * dy));		HX_STACK_VAR(x1_,"x1_");
		HX_STACK_LINE(266)
		Float y1_ = ((-(sin) * dx) + (cos * dy));		HX_STACK_VAR(y1_,"y1_");
		HX_STACK_LINE(269)
		Float rx2 = (this->rx * this->rx);		HX_STACK_VAR(rx2,"rx2");
		HX_STACK_LINE(270)
		Float ry2 = (this->ry * this->ry);		HX_STACK_VAR(ry2,"ry2");
		HX_STACK_LINE(271)
		Float x1_2 = (x1_ * x1_);		HX_STACK_VAR(x1_2,"x1_2");
		HX_STACK_LINE(272)
		Float y1_2 = (y1_ * y1_);		HX_STACK_VAR(y1_2,"y1_2");
		HX_STACK_LINE(273)
		Float s = (Float(((((rx2 * ry2) - (rx2 * y1_2)) - (ry2 * x1_2)))) / Float((((rx2 * y1_2) + (ry2 * x1_2)))));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(275)
		if (((s < (int)0))){
			HX_STACK_LINE(276)
			s = (int)0;
		}
		else{
			HX_STACK_LINE(277)
			if (((this->fA == this->fS))){
				HX_STACK_LINE(278)
				Float _g = -(::Math_obj::sqrt(s));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(278)
				s = _g;
			}
			else{
				HX_STACK_LINE(280)
				Float _g1 = ::Math_obj::sqrt(s);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(280)
				s = _g1;
			}
		}
		HX_STACK_LINE(282)
		Float cx_ = (Float(((s * this->rx) * y1_)) / Float(this->ry));		HX_STACK_VAR(cx_,"cx_");
		HX_STACK_LINE(283)
		Float cy_ = (Float(((-(s) * this->ry) * x1_)) / Float(this->rx));		HX_STACK_VAR(cy_,"cy_");
		HX_STACK_LINE(288)
		Float xm = (((this->x1 + this->x)) * 0.5);		HX_STACK_VAR(xm,"xm");
		HX_STACK_LINE(289)
		Float ym = (((this->y1 + this->y)) * 0.5);		HX_STACK_VAR(ym,"ym");
		HX_STACK_LINE(291)
		Float cx = (((cos * cx_) - (sin * cy_)) + xm);		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(292)
		Float cy = (((sin * cx_) + (cos * cy_)) + ym);		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(294)
		Float theta = ::Math_obj::atan2((Float(((y1_ - cy_))) / Float(this->ry)),(Float(((x1_ - cx_))) / Float(this->rx)));		HX_STACK_VAR(theta,"theta");
		HX_STACK_LINE(295)
		Float _g2 = ::Math_obj::atan2((Float(((-(y1_) - cy_))) / Float(this->ry)),(Float(((-(x1_) - cx_))) / Float(this->rx)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(295)
		Float dtheta = (_g2 - theta);		HX_STACK_VAR(dtheta,"dtheta");
		HX_STACK_LINE(297)
		if (((bool(this->fS) && bool((dtheta < (int)0))))){
			HX_STACK_LINE(298)
			hx::AddEq(dtheta,(2.0 * ::Math_obj::PI));
		}
		else{
			HX_STACK_LINE(299)
			if (((bool(!(this->fS)) && bool((dtheta > (int)0))))){
				HX_STACK_LINE(300)
				hx::SubEq(dtheta,(2.0 * ::Math_obj::PI));
			}
		}
		HX_STACK_LINE(303)
		::openfl::geom::Matrix m = ioContext->matrix;		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(316)
		Float Txc;		HX_STACK_VAR(Txc,"Txc");
		HX_STACK_LINE(317)
		Float Txs;		HX_STACK_VAR(Txs,"Txs");
		HX_STACK_LINE(318)
		Float Tx0;		HX_STACK_VAR(Tx0,"Tx0");
		HX_STACK_LINE(319)
		Float Tyc;		HX_STACK_VAR(Tyc,"Tyc");
		HX_STACK_LINE(320)
		Float Tys;		HX_STACK_VAR(Tys,"Tys");
		HX_STACK_LINE(321)
		Float Ty0;		HX_STACK_VAR(Ty0,"Ty0");
		HX_STACK_LINE(322)
		if (((m != null()))){
			HX_STACK_LINE(324)
			Txc = (m->a * this->rx);
			HX_STACK_LINE(325)
			Txs = (m->c * this->ry);
			HX_STACK_LINE(326)
			Tx0 = (((m->a * cx) + (m->c * cy)) + m->tx);
			HX_STACK_LINE(327)
			Tyc = (m->b * this->rx);
			HX_STACK_LINE(328)
			Tys = (m->d * this->ry);
			HX_STACK_LINE(329)
			Ty0 = (((m->b * cx) + (m->d * cy)) + m->ty);
		}
		else{
			HX_STACK_LINE(333)
			Txc = this->rx;
			HX_STACK_LINE(334)
			Txs = (int)0;
			HX_STACK_LINE(335)
			Tx0 = (cx + m->tx);
			HX_STACK_LINE(336)
			Tyc = (int)0;
			HX_STACK_LINE(337)
			Tys = this->ry;
			HX_STACK_LINE(338)
			Ty0 = (cy + m->ty);
		}
		HX_STACK_LINE(341)
		Float _g3 = ::Math_obj::abs(dtheta);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(341)
		Float _g4 = ::Math_obj::sqrt(((((Txc * Txc) + (Txs * Txs)) + (Tyc * Tyc)) + (Tys * Tys)));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(341)
		Float len = (_g3 * _g4);		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(343)
		hx::MultEq(len,(int)5);
		HX_STACK_LINE(344)
		int steps = ::Math_obj::round(len);		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(347)
		if (((steps > (int)1))){
			HX_STACK_LINE(349)
			hx::DivEq(dtheta,steps);
			HX_STACK_LINE(350)
			{
				HX_STACK_LINE(350)
				int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(350)
				int _g = (steps - (int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(350)
				while((true)){
					HX_STACK_LINE(350)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(350)
						break;
					}
					HX_STACK_LINE(350)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(352)
					Float c = ::Math_obj::cos(theta);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(353)
					Float s1 = ::Math_obj::sin(theta);		HX_STACK_VAR(s1,"s1");
					HX_STACK_LINE(354)
					hx::AddEq(theta,dtheta);
					HX_STACK_LINE(355)
					inGfx->lineTo((((Txc * c) + (Txs * s1)) + Tx0),(((Tyc * c) + (Tys * s1)) + Ty0));
				}
			}
		}
		HX_STACK_LINE(358)
		inGfx->lineTo(ioContext->lastX,ioContext->lastY);
	}
return null();
}


int ArcSegment_obj::getType( ){
	HX_STACK_FRAME("format.svg.ArcSegment","getType",0x50d98ac4,"format.svg.ArcSegment.getType","format/svg/PathSegment.hx",360,0x6d7bc4b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(360)
	return (int)5;
}



ArcSegment_obj::ArcSegment_obj()
{
}

Dynamic ArcSegment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x1") ) { return x1; }
		if (HX_FIELD_EQ(inName,"y1") ) { return y1; }
		if (HX_FIELD_EQ(inName,"rx") ) { return rx; }
		if (HX_FIELD_EQ(inName,"ry") ) { return ry; }
		if (HX_FIELD_EQ(inName,"fA") ) { return fA; }
		if (HX_FIELD_EQ(inName,"fS") ) { return fS; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"phi") ) { return phi; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toGfx") ) { return toGfx_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArcSegment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"x1") ) { x1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y1") ) { y1=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rx") ) { rx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ry") ) { ry=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fA") ) { fA=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fS") ) { fS=inValue.Cast< bool >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"phi") ) { phi=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArcSegment_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("x1"));
	outFields->push(HX_CSTRING("y1"));
	outFields->push(HX_CSTRING("rx"));
	outFields->push(HX_CSTRING("ry"));
	outFields->push(HX_CSTRING("phi"));
	outFields->push(HX_CSTRING("fA"));
	outFields->push(HX_CSTRING("fS"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ArcSegment_obj,x1),HX_CSTRING("x1")},
	{hx::fsFloat,(int)offsetof(ArcSegment_obj,y1),HX_CSTRING("y1")},
	{hx::fsFloat,(int)offsetof(ArcSegment_obj,rx),HX_CSTRING("rx")},
	{hx::fsFloat,(int)offsetof(ArcSegment_obj,ry),HX_CSTRING("ry")},
	{hx::fsFloat,(int)offsetof(ArcSegment_obj,phi),HX_CSTRING("phi")},
	{hx::fsBool,(int)offsetof(ArcSegment_obj,fA),HX_CSTRING("fA")},
	{hx::fsBool,(int)offsetof(ArcSegment_obj,fS),HX_CSTRING("fS")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("x1"),
	HX_CSTRING("y1"),
	HX_CSTRING("rx"),
	HX_CSTRING("ry"),
	HX_CSTRING("phi"),
	HX_CSTRING("fA"),
	HX_CSTRING("fS"),
	HX_CSTRING("toGfx"),
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArcSegment_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArcSegment_obj::__mClass,"__mClass");
};

#endif

Class ArcSegment_obj::__mClass;

void ArcSegment_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.ArcSegment"), hx::TCanCast< ArcSegment_obj> ,sStaticFields,sMemberFields,
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

void ArcSegment_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
