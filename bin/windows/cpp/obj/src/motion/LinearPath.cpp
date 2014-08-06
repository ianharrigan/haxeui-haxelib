#include <hxcpp.h>

#ifndef INCLUDED_motion_BezierPath
#include <motion/BezierPath.h>
#endif
#ifndef INCLUDED_motion_LinearPath
#include <motion/LinearPath.h>
#endif
namespace motion{

Void LinearPath_obj::__construct(Float end,Float strength)
{
HX_STACK_FRAME("motion.LinearPath","new",0xd27de774,"motion.LinearPath.new","motion/MotionPath.hx",232,0x95e57daa)
HX_STACK_THIS(this)
HX_STACK_ARG(end,"end")
HX_STACK_ARG(strength,"strength")
{
	HX_STACK_LINE(232)
	super::__construct(end,(int)0,strength);
}
;
	return null();
}

//LinearPath_obj::~LinearPath_obj() { }

Dynamic LinearPath_obj::__CreateEmpty() { return  new LinearPath_obj; }
hx::ObjectPtr< LinearPath_obj > LinearPath_obj::__new(Float end,Float strength)
{  hx::ObjectPtr< LinearPath_obj > result = new LinearPath_obj();
	result->__construct(end,strength);
	return result;}

Dynamic LinearPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearPath_obj > result = new LinearPath_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Float LinearPath_obj::calculate( Float start,Float k){
	HX_STACK_FRAME("motion.LinearPath","calculate",0x806d337a,"motion.LinearPath.calculate","motion/MotionPath.hx",239,0x95e57daa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(239)
	return (start + (k * ((this->end - start))));
}



LinearPath_obj::LinearPath_obj()
{
}

Dynamic LinearPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LinearPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearPath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("calculate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearPath_obj::__mClass,"__mClass");
};

#endif

Class LinearPath_obj::__mClass;

void LinearPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.LinearPath"), hx::TCanCast< LinearPath_obj> ,sStaticFields,sMemberFields,
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

void LinearPath_obj::__boot()
{
}

} // end namespace motion
