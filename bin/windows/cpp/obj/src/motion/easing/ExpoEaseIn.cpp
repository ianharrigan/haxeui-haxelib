#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_ExpoEaseIn
#include <motion/easing/ExpoEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ExpoEaseIn_obj::__construct()
{
HX_STACK_FRAME("motion.easing.ExpoEaseIn","new",0x911fde02,"motion.easing.ExpoEaseIn.new","motion/easing/Expo.hx",46,0xaf90d701)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ExpoEaseIn_obj::~ExpoEaseIn_obj() { }

Dynamic ExpoEaseIn_obj::__CreateEmpty() { return  new ExpoEaseIn_obj; }
hx::ObjectPtr< ExpoEaseIn_obj > ExpoEaseIn_obj::__new()
{  hx::ObjectPtr< ExpoEaseIn_obj > result = new ExpoEaseIn_obj();
	result->__construct();
	return result;}

Dynamic ExpoEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExpoEaseIn_obj > result = new ExpoEaseIn_obj();
	result->__construct();
	return result;}

hx::Object *ExpoEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float ExpoEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ExpoEaseIn","calculate",0x1ed38888,"motion.easing.ExpoEaseIn.calculate","motion/easing/Expo.hx",55,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(55)
	if (((k == (int)0))){
		HX_STACK_LINE(55)
		return (int)0;
	}
	else{
		HX_STACK_LINE(55)
		return ::Math_obj::pow((int)2,((int)10 * ((k - (int)1))));
	}
	HX_STACK_LINE(55)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(ExpoEaseIn_obj,calculate,return )

Float ExpoEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ExpoEaseIn","ease",0x64cc6c0c,"motion.easing.ExpoEaseIn.ease","motion/easing/Expo.hx",62,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(62)
	if (((t == (int)0))){
		HX_STACK_LINE(62)
		return b;
	}
	else{
		HX_STACK_LINE(62)
		Float _g = ::Math_obj::pow((int)2,((int)10 * (((Float(t) / Float(d)) - (int)1))));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		Float _g1 = (c * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		return (_g1 + b);
	}
	HX_STACK_LINE(62)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC4(ExpoEaseIn_obj,ease,return )


ExpoEaseIn_obj::ExpoEaseIn_obj()
{
}

Dynamic ExpoEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExpoEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ExpoEaseIn_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpoEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpoEaseIn_obj::__mClass,"__mClass");
};

#endif

Class ExpoEaseIn_obj::__mClass;

void ExpoEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.ExpoEaseIn"), hx::TCanCast< ExpoEaseIn_obj> ,sStaticFields,sMemberFields,
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

void ExpoEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
