#include <hxcpp.h>

#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion__Actuate_EffectsOptions
#include <motion/_Actuate/EffectsOptions.h>
#endif
#ifndef INCLUDED_motion_actuators_FilterActuator
#include <motion/actuators/FilterActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace motion{
namespace _Actuate{

Void EffectsOptions_obj::__construct(::openfl::display::DisplayObject target,Float duration,bool overwrite)
{
HX_STACK_FRAME("motion._Actuate.EffectsOptions","new",0xd8cd76d4,"motion._Actuate.EffectsOptions.new","motion/Actuate.hx",431,0xcac92ba8)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(overwrite,"overwrite")
{
	HX_STACK_LINE(433)
	this->target = target;
	HX_STACK_LINE(434)
	this->duration = duration;
	HX_STACK_LINE(435)
	this->overwrite = overwrite;
}
;
	return null();
}

//EffectsOptions_obj::~EffectsOptions_obj() { }

Dynamic EffectsOptions_obj::__CreateEmpty() { return  new EffectsOptions_obj; }
hx::ObjectPtr< EffectsOptions_obj > EffectsOptions_obj::__new(::openfl::display::DisplayObject target,Float duration,bool overwrite)
{  hx::ObjectPtr< EffectsOptions_obj > result = new EffectsOptions_obj();
	result->__construct(target,duration,overwrite);
	return result;}

Dynamic EffectsOptions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EffectsOptions_obj > result = new EffectsOptions_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::motion::actuators::IGenericActuator EffectsOptions_obj::filter( Dynamic reference,Dynamic properties){
	HX_STACK_FRAME("motion._Actuate.EffectsOptions","filter",0x8473f9c4,"motion._Actuate.EffectsOptions.filter","motion/Actuate.hx",446,0xcac92ba8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(reference,"reference")
	HX_STACK_ARG(properties,"properties")
	HX_STACK_LINE(448)
	properties->__FieldRef(HX_CSTRING("filter")) = reference;
	HX_STACK_LINE(450)
	return ::motion::Actuate_obj::tween(this->target,this->duration,properties,this->overwrite,hx::ClassOf< ::motion::actuators::FilterActuator >());
}


HX_DEFINE_DYNAMIC_FUNC2(EffectsOptions_obj,filter,return )


EffectsOptions_obj::EffectsOptions_obj()
{
}

void EffectsOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EffectsOptions);
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(overwrite,"overwrite");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void EffectsOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(overwrite,"overwrite");
	HX_VISIT_MEMBER_NAME(target,"target");
}

Dynamic EffectsOptions_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { return overwrite; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EffectsOptions_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"overwrite") ) { overwrite=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EffectsOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("overwrite"));
	outFields->push(HX_CSTRING("target"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(EffectsOptions_obj,duration),HX_CSTRING("duration")},
	{hx::fsBool,(int)offsetof(EffectsOptions_obj,overwrite),HX_CSTRING("overwrite")},
	{hx::fsObject /*::openfl::display::DisplayObject*/ ,(int)offsetof(EffectsOptions_obj,target),HX_CSTRING("target")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("duration"),
	HX_CSTRING("overwrite"),
	HX_CSTRING("target"),
	HX_CSTRING("filter"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EffectsOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EffectsOptions_obj::__mClass,"__mClass");
};

#endif

Class EffectsOptions_obj::__mClass;

void EffectsOptions_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion._Actuate.EffectsOptions"), hx::TCanCast< EffectsOptions_obj> ,sStaticFields,sMemberFields,
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

void EffectsOptions_obj::__boot()
{
}

} // end namespace motion
} // end namespace _Actuate
