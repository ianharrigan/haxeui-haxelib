#include <hxcpp.h>

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_GlowFilter
#include <openfl/filters/GlowFilter.h>
#endif
namespace openfl{
namespace filters{

Void GlowFilter_obj::__construct(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout)
{
HX_STACK_FRAME("openfl.filters.GlowFilter","new",0xf734d428,"openfl.filters.GlowFilter.new","openfl/filters/GlowFilter.hx",21,0x5f568606)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_color,"color")
HX_STACK_ARG(__o_alpha,"alpha")
HX_STACK_ARG(__o_blurX,"blurX")
HX_STACK_ARG(__o_blurY,"blurY")
HX_STACK_ARG(__o_strength,"strength")
HX_STACK_ARG(__o_quality,"quality")
HX_STACK_ARG(__o_inner,"inner")
HX_STACK_ARG(__o_knockout,"knockout")
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1.0);
Float blurX = __o_blurX.Default(4.0);
Float blurY = __o_blurY.Default(4.0);
Float strength = __o_strength.Default(1.0);
int quality = __o_quality.Default(1);
bool inner = __o_inner.Default(false);
bool knockout = __o_knockout.Default(false);
{
	HX_STACK_LINE(23)
	super::__construct(HX_CSTRING("DropShadowFilter"));
	HX_STACK_LINE(25)
	this->distance = (int)0;
	HX_STACK_LINE(26)
	this->angle = (int)0;
	HX_STACK_LINE(27)
	this->color = color;
	HX_STACK_LINE(28)
	this->alpha = alpha;
	HX_STACK_LINE(29)
	this->blurX = blurX;
	HX_STACK_LINE(30)
	this->blurY = blurY;
	HX_STACK_LINE(31)
	this->strength = strength;
	HX_STACK_LINE(32)
	this->quality = quality;
	HX_STACK_LINE(33)
	this->inner = inner;
	HX_STACK_LINE(34)
	this->knockout = knockout;
	HX_STACK_LINE(35)
	this->hideObject = false;
}
;
	return null();
}

//GlowFilter_obj::~GlowFilter_obj() { }

Dynamic GlowFilter_obj::__CreateEmpty() { return  new GlowFilter_obj; }
hx::ObjectPtr< GlowFilter_obj > GlowFilter_obj::__new(hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout)
{  hx::ObjectPtr< GlowFilter_obj > result = new GlowFilter_obj();
	result->__construct(__o_color,__o_alpha,__o_blurX,__o_blurY,__o_strength,__o_quality,__o_inner,__o_knockout);
	return result;}

Dynamic GlowFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GlowFilter_obj > result = new GlowFilter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

::openfl::filters::BitmapFilter GlowFilter_obj::clone( ){
	HX_STACK_FRAME("openfl.filters.GlowFilter","clone",0x7c629925,"openfl.filters.GlowFilter.clone","openfl/filters/GlowFilter.hx",42,0x5f568606)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return ::openfl::filters::GlowFilter_obj::__new(this->color,this->alpha,this->blurX,this->blurY,this->strength,this->quality,this->inner,this->knockout);
}



GlowFilter_obj::GlowFilter_obj()
{
}

Dynamic GlowFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"blurX") ) { return blurX; }
		if (HX_FIELD_EQ(inName,"blurY") ) { return blurY; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"inner") ) { return inner; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { return knockout; }
		if (HX_FIELD_EQ(inName,"strength") ) { return strength; }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideObject") ) { return hideObject; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GlowFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurX") ) { blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurY") ) { blurY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inner") ) { inner=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"knockout") ) { knockout=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hideObject") ) { hideObject=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GlowFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("blurX"));
	outFields->push(HX_CSTRING("blurY"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("inner"));
	outFields->push(HX_CSTRING("knockout"));
	outFields->push(HX_CSTRING("quality"));
	outFields->push(HX_CSTRING("strength"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("hideObject"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,blurX),HX_CSTRING("blurX")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,blurY),HX_CSTRING("blurY")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,color),HX_CSTRING("color")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,inner),HX_CSTRING("inner")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,knockout),HX_CSTRING("knockout")},
	{hx::fsInt,(int)offsetof(GlowFilter_obj,quality),HX_CSTRING("quality")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,strength),HX_CSTRING("strength")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,angle),HX_CSTRING("angle")},
	{hx::fsFloat,(int)offsetof(GlowFilter_obj,distance),HX_CSTRING("distance")},
	{hx::fsBool,(int)offsetof(GlowFilter_obj,hideObject),HX_CSTRING("hideObject")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("alpha"),
	HX_CSTRING("blurX"),
	HX_CSTRING("blurY"),
	HX_CSTRING("color"),
	HX_CSTRING("inner"),
	HX_CSTRING("knockout"),
	HX_CSTRING("quality"),
	HX_CSTRING("strength"),
	HX_CSTRING("angle"),
	HX_CSTRING("distance"),
	HX_CSTRING("hideObject"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowFilter_obj::__mClass,"__mClass");
};

#endif

Class GlowFilter_obj::__mClass;

void GlowFilter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.filters.GlowFilter"), hx::TCanCast< GlowFilter_obj> ,sStaticFields,sMemberFields,
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

void GlowFilter_obj::__boot()
{
}

} // end namespace openfl
} // end namespace filters
