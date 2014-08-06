#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_LinearEaseNone
#include <motion/easing/LinearEaseNone.h>
#endif
namespace motion{
namespace easing{

Void LinearEaseNone_obj::__construct()
{
HX_STACK_FRAME("motion.easing.LinearEaseNone","new",0x81a9e908,"motion.easing.LinearEaseNone.new","motion/easing/Linear.hx",30,0xd271eb6e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//LinearEaseNone_obj::~LinearEaseNone_obj() { }

Dynamic LinearEaseNone_obj::__CreateEmpty() { return  new LinearEaseNone_obj; }
hx::ObjectPtr< LinearEaseNone_obj > LinearEaseNone_obj::__new()
{  hx::ObjectPtr< LinearEaseNone_obj > result = new LinearEaseNone_obj();
	result->__construct();
	return result;}

Dynamic LinearEaseNone_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LinearEaseNone_obj > result = new LinearEaseNone_obj();
	result->__construct();
	return result;}

hx::Object *LinearEaseNone_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float LinearEaseNone_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.LinearEaseNone","calculate",0x78789c0e,"motion.easing.LinearEaseNone.calculate","motion/easing/Linear.hx",39,0xd271eb6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(39)
	return k;
}


HX_DEFINE_DYNAMIC_FUNC1(LinearEaseNone_obj,calculate,return )

Float LinearEaseNone_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.LinearEaseNone","ease",0xed0c0646,"motion.easing.LinearEaseNone.ease","motion/easing/Linear.hx",46,0xd271eb6e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(46)
	return ((Float((c * t)) / Float(d)) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(LinearEaseNone_obj,ease,return )


LinearEaseNone_obj::LinearEaseNone_obj()
{
}

Dynamic LinearEaseNone_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic LinearEaseNone_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearEaseNone_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(LinearEaseNone_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinearEaseNone_obj::__mClass,"__mClass");
};

#endif

Class LinearEaseNone_obj::__mClass;

void LinearEaseNone_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.LinearEaseNone"), hx::TCanCast< LinearEaseNone_obj> ,sStaticFields,sMemberFields,
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

void LinearEaseNone_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
