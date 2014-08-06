#include <hxcpp.h>

#ifndef INCLUDED_motion_BezierPath
#include <motion/BezierPath.h>
#endif
namespace motion{

Void BezierPath_obj::__construct(Float end,Float control,Float strength)
{
HX_STACK_FRAME("motion.BezierPath","new",0x3a535fae,"motion.BezierPath.new","motion/MotionPath.hx",208,0x95e57daa)
HX_STACK_THIS(this)
HX_STACK_ARG(end,"end")
HX_STACK_ARG(control,"control")
HX_STACK_ARG(strength,"strength")
{
	HX_STACK_LINE(210)
	this->end = end;
	HX_STACK_LINE(211)
	this->control = control;
	HX_STACK_LINE(212)
	this->strength = strength;
}
;
	return null();
}

//BezierPath_obj::~BezierPath_obj() { }

Dynamic BezierPath_obj::__CreateEmpty() { return  new BezierPath_obj; }
hx::ObjectPtr< BezierPath_obj > BezierPath_obj::__new(Float end,Float control,Float strength)
{  hx::ObjectPtr< BezierPath_obj > result = new BezierPath_obj();
	result->__construct(end,control,strength);
	return result;}

Dynamic BezierPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BezierPath_obj > result = new BezierPath_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Float BezierPath_obj::calculate( Float start,Float k){
	HX_STACK_FRAME("motion.BezierPath","calculate",0x71899334,"motion.BezierPath.calculate","motion/MotionPath.hx",219,0x95e57daa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(start,"start")
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(219)
	return (((((((int)1 - k)) * (((int)1 - k))) * start) + ((((int)2 * (((int)1 - k))) * k) * this->control)) + ((k * k) * this->end));
}


HX_DEFINE_DYNAMIC_FUNC2(BezierPath_obj,calculate,return )


BezierPath_obj::BezierPath_obj()
{
}

Dynamic BezierPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { return control; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return strength; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BezierPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"control") ) { control=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BezierPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("control"));
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("strength"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(BezierPath_obj,control),HX_CSTRING("control")},
	{hx::fsFloat,(int)offsetof(BezierPath_obj,end),HX_CSTRING("end")},
	{hx::fsFloat,(int)offsetof(BezierPath_obj,strength),HX_CSTRING("strength")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("control"),
	HX_CSTRING("end"),
	HX_CSTRING("strength"),
	HX_CSTRING("calculate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BezierPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BezierPath_obj::__mClass,"__mClass");
};

#endif

Class BezierPath_obj::__mClass;

void BezierPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.BezierPath"), hx::TCanCast< BezierPath_obj> ,sStaticFields,sMemberFields,
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

void BezierPath_obj::__boot()
{
}

} // end namespace motion
