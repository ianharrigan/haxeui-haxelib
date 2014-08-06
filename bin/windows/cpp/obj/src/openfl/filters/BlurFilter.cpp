#include <hxcpp.h>

#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_BlurFilter
#include <openfl/filters/BlurFilter.h>
#endif
namespace openfl{
namespace filters{

Void BlurFilter_obj::__construct(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality)
{
HX_STACK_FRAME("openfl.filters.BlurFilter","new",0x2ff6acc2,"openfl.filters.BlurFilter.new","openfl/filters/BlurFilter.hx",12,0x46563eac)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_blurX,"blurX")
HX_STACK_ARG(__o_blurY,"blurY")
HX_STACK_ARG(__o_quality,"quality")
Float blurX = __o_blurX.Default(4.0);
Float blurY = __o_blurY.Default(4.0);
int quality = __o_quality.Default(1);
{
	HX_STACK_LINE(14)
	super::__construct(HX_CSTRING("BlurFilter"));
	HX_STACK_LINE(16)
	this->blurX = blurX;
	HX_STACK_LINE(17)
	this->blurY = blurY;
	HX_STACK_LINE(18)
	this->quality = quality;
}
;
	return null();
}

//BlurFilter_obj::~BlurFilter_obj() { }

Dynamic BlurFilter_obj::__CreateEmpty() { return  new BlurFilter_obj; }
hx::ObjectPtr< BlurFilter_obj > BlurFilter_obj::__new(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality)
{  hx::ObjectPtr< BlurFilter_obj > result = new BlurFilter_obj();
	result->__construct(__o_blurX,__o_blurY,__o_quality);
	return result;}

Dynamic BlurFilter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlurFilter_obj > result = new BlurFilter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::openfl::filters::BitmapFilter BlurFilter_obj::clone( ){
	HX_STACK_FRAME("openfl.filters.BlurFilter","clone",0xcbbf4c3f,"openfl.filters.BlurFilter.clone","openfl/filters/BlurFilter.hx",25,0x46563eac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return ::openfl::filters::BlurFilter_obj::__new(this->blurX,this->blurY,this->quality);
}



BlurFilter_obj::BlurFilter_obj()
{
}

Dynamic BlurFilter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blurX") ) { return blurX; }
		if (HX_FIELD_EQ(inName,"blurY") ) { return blurY; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return quality; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlurFilter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blurX") ) { blurX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blurY") ) { blurY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlurFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("blurX"));
	outFields->push(HX_CSTRING("blurY"));
	outFields->push(HX_CSTRING("quality"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BlurFilter_obj,blurX),HX_CSTRING("blurX")},
	{hx::fsFloat,(int)offsetof(BlurFilter_obj,blurY),HX_CSTRING("blurY")},
	{hx::fsInt,(int)offsetof(BlurFilter_obj,quality),HX_CSTRING("quality")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("blurX"),
	HX_CSTRING("blurY"),
	HX_CSTRING("quality"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlurFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlurFilter_obj::__mClass,"__mClass");
};

#endif

Class BlurFilter_obj::__mClass;

void BlurFilter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.filters.BlurFilter"), hx::TCanCast< BlurFilter_obj> ,sStaticFields,sMemberFields,
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

void BlurFilter_obj::__boot()
{
}

} // end namespace openfl
} // end namespace filters
