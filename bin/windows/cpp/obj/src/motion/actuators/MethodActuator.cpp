#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MethodActuator
#include <motion/actuators/MethodActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
namespace motion{
namespace actuators{

Void MethodActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.MethodActuator","new",0xc04e9758,"motion.actuators.MethodActuator.new","motion/actuators/MethodActuator.hx",15,0xd19a6596)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(17)
	Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	this->currentParameters = _g;
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","motion/actuators/MethodActuator.hx",18,0xd19a6596)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	this->tweenProperties = _Function_1_1::Block();
	HX_STACK_LINE(20)
	super::__construct(target,duration,properties);
	HX_STACK_LINE(22)
	if ((!(::Reflect_obj::hasField(properties,HX_CSTRING("start"))))){
		HX_STACK_LINE(24)
		Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(24)
		this->properties->__FieldRef(HX_CSTRING("start")) = _g1;
	}
	HX_STACK_LINE(28)
	if ((!(::Reflect_obj::hasField(properties,HX_CSTRING("end"))))){
		HX_STACK_LINE(30)
		this->properties->__FieldRef(HX_CSTRING("end")) = this->properties->__Field(HX_CSTRING("start"),true);
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(34)
		int _g2 = this->properties->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(34)
		while((true)){
			HX_STACK_LINE(34)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(34)
				break;
			}
			HX_STACK_LINE(34)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(36)
			this->currentParameters->__Field(HX_CSTRING("push"),true)(null());
		}
	}
}
;
	return null();
}

//MethodActuator_obj::~MethodActuator_obj() { }

Dynamic MethodActuator_obj::__CreateEmpty() { return  new MethodActuator_obj; }
hx::ObjectPtr< MethodActuator_obj > MethodActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< MethodActuator_obj > result = new MethodActuator_obj();
	result->__construct(target,duration,properties);
	return result;}

Dynamic MethodActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MethodActuator_obj > result = new MethodActuator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void MethodActuator_obj::apply( ){
{
		HX_STACK_FRAME("motion.actuators.MethodActuator","apply",0xedaffa66,"motion.actuators.MethodActuator.apply","motion/actuators/MethodActuator.hx",45,0xd19a6596)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		Dynamic method = this->target;		HX_STACK_VAR(method,"method");
		HX_STACK_LINE(45)
		Dynamic params = this->properties->__Field(HX_CSTRING("end"),true);		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(45)
		if (((params == null()))){
			HX_STACK_LINE(45)
			params = Dynamic( Array_obj<Dynamic>::__new());
		}
		HX_STACK_LINE(45)
		::Reflect_obj::callMethod(method,method,params);
	}
return null();
}


Void MethodActuator_obj::complete( hx::Null< bool >  __o_sendEvent){
bool sendEvent = __o_sendEvent.Default(true);
	HX_STACK_FRAME("motion.actuators.MethodActuator","complete",0x6780f6c1,"motion.actuators.MethodActuator.complete","motion/actuators/MethodActuator.hx",50,0xd19a6596)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sendEvent,"sendEvent")
{
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(52)
			int _g = this->properties->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(54)
				hx::IndexRef((this->currentParameters).mPtr,i) = ::Reflect_obj::field(this->tweenProperties,(HX_CSTRING("param") + i));
			}
		}
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			Dynamic method = this->target;		HX_STACK_VAR(method,"method");
			HX_STACK_LINE(58)
			Dynamic params = this->currentParameters;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(58)
			if (((params == null()))){
				HX_STACK_LINE(58)
				params = Dynamic( Array_obj<Dynamic>::__new());
			}
			HX_STACK_LINE(58)
			::Reflect_obj::callMethod(method,method,params);
		}
		HX_STACK_LINE(60)
		this->super::complete(sendEvent);
	}
return null();
}


Void MethodActuator_obj::initialize( ){
{
		HX_STACK_FRAME("motion.actuators.MethodActuator","initialize",0xed23b958,"motion.actuators.MethodActuator.initialize","motion/actuators/MethodActuator.hx",65,0xd19a6596)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(68)
		::String propertyName;		HX_STACK_VAR(propertyName,"propertyName");
		HX_STACK_LINE(69)
		Dynamic start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(71)
			int _g = this->properties->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(71)
			while((true)){
				HX_STACK_LINE(71)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(71)
					break;
				}
				HX_STACK_LINE(71)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(73)
				propertyName = (HX_CSTRING("param") + i);
				HX_STACK_LINE(74)
				start = this->properties->__Field(HX_CSTRING("start"),true)->__GetItem(i);
				HX_STACK_LINE(76)
				{
					HX_STACK_LINE(76)
					Dynamic o = this->tweenProperties;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(76)
					if (((o != null()))){
						HX_STACK_LINE(76)
						o->__SetField(propertyName,start,false);
					}
				}
				HX_STACK_LINE(78)
				if (((  ((!(::Std_obj::is(start,hx::ClassOf< ::Float >())))) ? bool(::Std_obj::is(start,hx::ClassOf< ::Int >())) : bool(true) ))){
					HX_STACK_LINE(80)
					::motion::actuators::PropertyDetails _g2 = ::motion::actuators::PropertyDetails_obj::__new(this->tweenProperties,propertyName,start,(this->properties->__Field(HX_CSTRING("end"),true)->__GetItem(i) - start),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(80)
					details = _g2;
					HX_STACK_LINE(81)
					this->propertyDetails->push(details);
				}
			}
		}
		HX_STACK_LINE(87)
		this->detailsLength = this->propertyDetails->length;
		HX_STACK_LINE(88)
		this->initialized = true;
	}
return null();
}


Void MethodActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("motion.actuators.MethodActuator","update",0x03776a11,"motion.actuators.MethodActuator.update","motion/actuators/MethodActuator.hx",93,0xd19a6596)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(95)
		this->super::update(currentTime);
		HX_STACK_LINE(97)
		if ((this->active)){
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(99)
				int _g = this->properties->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(99)
				while((true)){
					HX_STACK_LINE(99)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(99)
						break;
					}
					HX_STACK_LINE(99)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(101)
					hx::IndexRef((this->currentParameters).mPtr,i) = ::Reflect_obj::field(this->tweenProperties,(HX_CSTRING("param") + i));
				}
			}
			HX_STACK_LINE(105)
			{
				HX_STACK_LINE(105)
				Dynamic method = this->target;		HX_STACK_VAR(method,"method");
				HX_STACK_LINE(105)
				Dynamic params = this->currentParameters;		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(105)
				if (((params == null()))){
					HX_STACK_LINE(105)
					params = Dynamic( Array_obj<Dynamic>::__new());
				}
				HX_STACK_LINE(105)
				::Reflect_obj::callMethod(method,method,params);
			}
		}
	}
return null();
}



MethodActuator_obj::MethodActuator_obj()
{
}

void MethodActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MethodActuator);
	HX_MARK_MEMBER_NAME(currentParameters,"currentParameters");
	HX_MARK_MEMBER_NAME(tweenProperties,"tweenProperties");
	::motion::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MethodActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentParameters,"currentParameters");
	HX_VISIT_MEMBER_NAME(tweenProperties,"tweenProperties");
	::motion::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MethodActuator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { return tweenProperties; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { return currentParameters; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MethodActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"tweenProperties") ) { tweenProperties=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentParameters") ) { currentParameters=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MethodActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentParameters"));
	outFields->push(HX_CSTRING("tweenProperties"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MethodActuator_obj,currentParameters),HX_CSTRING("currentParameters")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(MethodActuator_obj,tweenProperties),HX_CSTRING("tweenProperties")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("currentParameters"),
	HX_CSTRING("tweenProperties"),
	HX_CSTRING("apply"),
	HX_CSTRING("complete"),
	HX_CSTRING("initialize"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MethodActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MethodActuator_obj::__mClass,"__mClass");
};

#endif

Class MethodActuator_obj::__mClass;

void MethodActuator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.actuators.MethodActuator"), hx::TCanCast< MethodActuator_obj> ,sStaticFields,sMemberFields,
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

void MethodActuator_obj::__boot()
{
}

} // end namespace motion
} // end namespace actuators
