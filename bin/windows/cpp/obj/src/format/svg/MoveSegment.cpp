#include <hxcpp.h>

#ifndef INCLUDED_format_svg_MoveSegment
#include <format/svg/MoveSegment.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
namespace format{
namespace svg{

Void MoveSegment_obj::__construct(Float inX,Float inY)
{
HX_STACK_FRAME("format.svg.MoveSegment","new",0xde0a69b3,"format.svg.MoveSegment.new","format/svg/PathSegment.hx",43,0x6d7bc4b3)
HX_STACK_THIS(this)
HX_STACK_ARG(inX,"inX")
HX_STACK_ARG(inY,"inY")
{
	HX_STACK_LINE(43)
	super::__construct(inX,inY);
}
;
	return null();
}

//MoveSegment_obj::~MoveSegment_obj() { }

Dynamic MoveSegment_obj::__CreateEmpty() { return  new MoveSegment_obj; }
hx::ObjectPtr< MoveSegment_obj > MoveSegment_obj::__new(Float inX,Float inY)
{  hx::ObjectPtr< MoveSegment_obj > result = new MoveSegment_obj();
	result->__construct(inX,inY);
	return result;}

Dynamic MoveSegment_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MoveSegment_obj > result = new MoveSegment_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int MoveSegment_obj::getType( ){
	HX_STACK_FRAME("format.svg.MoveSegment","getType",0x2944e143,"format.svg.MoveSegment.getType","format/svg/PathSegment.hx",44,0x6d7bc4b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return (int)1;
}



MoveSegment_obj::MoveSegment_obj()
{
}

Dynamic MoveSegment_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MoveSegment_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MoveSegment_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getType"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MoveSegment_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MoveSegment_obj::__mClass,"__mClass");
};

#endif

Class MoveSegment_obj::__mClass;

void MoveSegment_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.MoveSegment"), hx::TCanCast< MoveSegment_obj> ,sStaticFields,sMemberFields,
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

void MoveSegment_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
