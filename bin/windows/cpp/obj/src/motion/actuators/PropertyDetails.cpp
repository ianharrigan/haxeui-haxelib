#include <hxcpp.h>

#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
namespace motion{
namespace actuators{

Void PropertyDetails_obj::__construct(Dynamic target,::String propertyName,Float start,Float change,hx::Null< bool >  __o_isField)
{
HX_STACK_FRAME("motion.actuators.PropertyDetails","new",0xf86c0ab3,"motion.actuators.PropertyDetails.new","motion/actuators/PropertyDetails.hx",19,0xd7776fdf)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(propertyName,"propertyName")
HX_STACK_ARG(start,"start")
HX_STACK_ARG(change,"change")
HX_STACK_ARG(__o_isField,"isField")
bool isField = __o_isField.Default(true);
{
	HX_STACK_LINE(21)
	this->target = target;
	HX_STACK_LINE(22)
	this->propertyName = propertyName;
	HX_STACK_LINE(23)
	this->start = start;
	HX_STACK_LINE(24)
	this->change = change;
	HX_STACK_LINE(25)
	this->isField = isField;
}
;
	return null();
}

//PropertyDetails_obj::~PropertyDetails_obj() { }

Dynamic PropertyDetails_obj::__CreateEmpty() { return  new PropertyDetails_obj; }
hx::ObjectPtr< PropertyDetails_obj > PropertyDetails_obj::__new(Dynamic target,::String propertyName,Float start,Float change,hx::Null< bool >  __o_isField)
{  hx::ObjectPtr< PropertyDetails_obj > result = new PropertyDetails_obj();
	result->__construct(target,propertyName,start,change,__o_isField);
	return result;}

Dynamic PropertyDetails_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PropertyDetails_obj > result = new PropertyDetails_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}


PropertyDetails_obj::PropertyDetails_obj()
{
}

void PropertyDetails_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyDetails);
	HX_MARK_MEMBER_NAME(change,"change");
	HX_MARK_MEMBER_NAME(isField,"isField");
	HX_MARK_MEMBER_NAME(propertyName,"propertyName");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_END_CLASS();
}

void PropertyDetails_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(change,"change");
	HX_VISIT_MEMBER_NAME(isField,"isField");
	HX_VISIT_MEMBER_NAME(propertyName,"propertyName");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(target,"target");
}

Dynamic PropertyDetails_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { return change; }
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isField") ) { return isField; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { return propertyName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PropertyDetails_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { change=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isField") ) { isField=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"propertyName") ) { propertyName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyDetails_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("change"));
	outFields->push(HX_CSTRING("isField"));
	outFields->push(HX_CSTRING("propertyName"));
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("target"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(PropertyDetails_obj,change),HX_CSTRING("change")},
	{hx::fsBool,(int)offsetof(PropertyDetails_obj,isField),HX_CSTRING("isField")},
	{hx::fsString,(int)offsetof(PropertyDetails_obj,propertyName),HX_CSTRING("propertyName")},
	{hx::fsFloat,(int)offsetof(PropertyDetails_obj,start),HX_CSTRING("start")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PropertyDetails_obj,target),HX_CSTRING("target")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("change"),
	HX_CSTRING("isField"),
	HX_CSTRING("propertyName"),
	HX_CSTRING("start"),
	HX_CSTRING("target"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PropertyDetails_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PropertyDetails_obj::__mClass,"__mClass");
};

#endif

Class PropertyDetails_obj::__mClass;

void PropertyDetails_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.actuators.PropertyDetails"), hx::TCanCast< PropertyDetails_obj> ,sStaticFields,sMemberFields,
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

void PropertyDetails_obj::__boot()
{
}

} // end namespace motion
} // end namespace actuators
