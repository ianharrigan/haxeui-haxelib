#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
namespace motion{
namespace actuators{

Void FilterActuator_obj::__construct(Dynamic target,Float duration,Dynamic properties)
{
HX_STACK_FRAME("motion.actuators.FilterActuator","new",0x436e26af,"motion.actuators.FilterActuator.new","motion/actuators/FilterActuator.hx",21,0xb0e64e1f)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
HX_STACK_ARG(duration,"duration")
HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(23)
	this->filterIndex = (int)-1;
	HX_STACK_LINE(25)
	super::__construct(target,duration,properties);
	HX_STACK_LINE(27)
	if ((::Std_obj::is(properties->__Field(HX_CSTRING("filter"),true),hx::ClassOf< ::Class >()))){
		HX_STACK_LINE(29)
		this->filterClass = properties->__Field(HX_CSTRING("filter"),true);
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			Dynamic _g1 = (hx::TCast< openfl::display::DisplayObject >::cast(target))->get_filters();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(31)
			while((true)){
				HX_STACK_LINE(31)
				if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(31)
					break;
				}
				HX_STACK_LINE(31)
				Dynamic filter = _g1->__GetItem(_g);		HX_STACK_VAR(filter,"filter");
				HX_STACK_LINE(31)
				++(_g);
				HX_STACK_LINE(33)
				if ((::Std_obj::is(filter,this->filterClass))){
					HX_STACK_LINE(35)
					this->filter = filter;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(43)
		this->filterIndex = properties->__Field(HX_CSTRING("filter"),true);
		HX_STACK_LINE(44)
		Dynamic _g = (hx::TCast< openfl::display::DisplayObject >::cast(target))->get_filters();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		::openfl::filters::BitmapFilter _g1 = _g->__GetItem(this->filterIndex);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		this->filter = _g1;
	}
}
;
	return null();
}

//FilterActuator_obj::~FilterActuator_obj() { }

Dynamic FilterActuator_obj::__CreateEmpty() { return  new FilterActuator_obj; }
hx::ObjectPtr< FilterActuator_obj > FilterActuator_obj::__new(Dynamic target,Float duration,Dynamic properties)
{  hx::ObjectPtr< FilterActuator_obj > result = new FilterActuator_obj();
	result->__construct(target,duration,properties);
	return result;}

Dynamic FilterActuator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterActuator_obj > result = new FilterActuator_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FilterActuator_obj::apply( ){
{
		HX_STACK_FRAME("motion.actuators.FilterActuator","apply",0x23534d7d,"motion.actuators.FilterActuator.apply","motion/actuators/FilterActuator.hx",51,0xb0e64e1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				::String propertyName = _g1->__get(_g);		HX_STACK_VAR(propertyName,"propertyName");
				HX_STACK_LINE(53)
				++(_g);
				HX_STACK_LINE(55)
				if (((propertyName != HX_CSTRING("filter")))){
					HX_STACK_LINE(57)
					Dynamic o = this->filter;		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(57)
					Dynamic value = ::Reflect_obj::field(this->properties,propertyName);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(57)
					if (((o != null()))){
						HX_STACK_LINE(57)
						o->__SetField(propertyName,value,false);
					}
				}
			}
		}
		HX_STACK_LINE(63)
		Array< ::Dynamic > filters;		HX_STACK_VAR(filters,"filters");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(63)
			Dynamic value = null();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(63)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("filters")))){
				HX_STACK_LINE(63)
				Dynamic _g = ::Reflect_obj::field(target,HX_CSTRING("filters"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(63)
				value = _g;
			}
			else{
				HX_STACK_LINE(63)
				Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(63)
				_g1 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(HX_CSTRING("filters"),true)) );
				HX_STACK_LINE(63)
				value = _g1;
			}
			HX_STACK_LINE(63)
			filters = value;
		}
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			::String field = this->properties->__Field(HX_CSTRING("filter"),true);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(64)
			if (((filters != null()))){
				HX_STACK_LINE(64)
				filters->__SetField(field,this->filter,false);
			}
		}
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(65)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("filters")))){
				HX_STACK_LINE(65)
				if (((target != null()))){
					HX_STACK_LINE(65)
					target->__SetField(HX_CSTRING("filters"),filters,false);
				}
			}
			else{
				HX_STACK_LINE(65)
				if (((target != null()))){
					HX_STACK_LINE(65)
					target->__SetField(HX_CSTRING("filters"),filters,true);
				}
			}
		}
	}
return null();
}


Void FilterActuator_obj::initialize( ){
{
		HX_STACK_FRAME("motion.actuators.FilterActuator","initialize",0x39c8d2e1,"motion.actuators.FilterActuator.initialize","motion/actuators/FilterActuator.hx",70,0xb0e64e1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::motion::actuators::PropertyDetails details;		HX_STACK_VAR(details,"details");
		HX_STACK_LINE(73)
		Float start;		HX_STACK_VAR(start,"start");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(75)
			while((true)){
				HX_STACK_LINE(75)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(75)
					break;
				}
				HX_STACK_LINE(75)
				::String propertyName = _g1->__get(_g);		HX_STACK_VAR(propertyName,"propertyName");
				HX_STACK_LINE(75)
				++(_g);
				HX_STACK_LINE(77)
				if (((propertyName != HX_CSTRING("filter")))){
					HX_STACK_LINE(79)
					Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(79)
					{
						HX_STACK_LINE(79)
						Dynamic target = this->filter;		HX_STACK_VAR(target,"target");
						HX_STACK_LINE(79)
						Dynamic value = null();		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(79)
						if ((::Reflect_obj::hasField(target,propertyName))){
							HX_STACK_LINE(79)
							Dynamic _g3 = ::Reflect_obj::field(target,propertyName);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(79)
							value = _g3;
						}
						else{
							HX_STACK_LINE(79)
							Dynamic _g11;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(79)
							_g11 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(propertyName,true)) );
							HX_STACK_LINE(79)
							value = _g11;
						}
						HX_STACK_LINE(79)
						_g2 = value;
					}
					HX_STACK_LINE(79)
					start = _g2;
					HX_STACK_LINE(80)
					Dynamic _g3 = ::Reflect_obj::field(this->properties,propertyName);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(80)
					Float _g4 = (_g3 - start);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(80)
					::motion::actuators::PropertyDetails _g5 = ::motion::actuators::PropertyDetails_obj::__new(this->filter,propertyName,start,_g4,null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(80)
					details = _g5;
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


Void FilterActuator_obj::update( Float currentTime){
{
		HX_STACK_FRAME("motion.actuators.FilterActuator","update",0xbcbccb1a,"motion.actuators.FilterActuator.update","motion/actuators/FilterActuator.hx",93,0xb0e64e1f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(currentTime,"currentTime")
		HX_STACK_LINE(95)
		this->super::update(currentTime);
		HX_STACK_LINE(97)
		Dynamic filters = (hx::TCast< openfl::display::DisplayObject >::cast(this->target))->get_filters();		HX_STACK_VAR(filters,"filters");
		HX_STACK_LINE(99)
		if (((this->filterIndex > (int)-1))){
			HX_STACK_LINE(101)
			::String field = this->properties->__Field(HX_CSTRING("filter"),true);		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(101)
			if (((filters != null()))){
				HX_STACK_LINE(101)
				filters->__SetField(field,this->filter,false);
			}
		}
		else{
			HX_STACK_LINE(105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			int _g = filters->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				if ((::Std_obj::is(filters->__GetItem(i),this->filterClass))){
					HX_STACK_LINE(109)
					hx::IndexRef((filters).mPtr,i) = this->filter;
				}
			}
		}
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			Dynamic target = this->target;		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(117)
			if ((::Reflect_obj::hasField(target,HX_CSTRING("filters")))){
				HX_STACK_LINE(117)
				if (((target != null()))){
					HX_STACK_LINE(117)
					target->__SetField(HX_CSTRING("filters"),filters,false);
				}
			}
			else{
				HX_STACK_LINE(117)
				if (((target != null()))){
					HX_STACK_LINE(117)
					target->__SetField(HX_CSTRING("filters"),filters,true);
				}
			}
		}
	}
return null();
}



FilterActuator_obj::FilterActuator_obj()
{
}

void FilterActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterActuator);
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(filterClass,"filterClass");
	HX_MARK_MEMBER_NAME(filterIndex,"filterIndex");
	::motion::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FilterActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(filterClass,"filterClass");
	HX_VISIT_MEMBER_NAME(filterIndex,"filterIndex");
	::motion::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FilterActuator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterClass") ) { return filterClass; }
		if (HX_FIELD_EQ(inName,"filterIndex") ) { return filterIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilterActuator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::openfl::filters::BitmapFilter >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterClass") ) { filterClass=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterIndex") ) { filterIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FilterActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("filterClass"));
	outFields->push(HX_CSTRING("filterIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::filters::BitmapFilter*/ ,(int)offsetof(FilterActuator_obj,filter),HX_CSTRING("filter")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FilterActuator_obj,filterClass),HX_CSTRING("filterClass")},
	{hx::fsInt,(int)offsetof(FilterActuator_obj,filterIndex),HX_CSTRING("filterIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("filter"),
	HX_CSTRING("filterClass"),
	HX_CSTRING("filterIndex"),
	HX_CSTRING("apply"),
	HX_CSTRING("initialize"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilterActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilterActuator_obj::__mClass,"__mClass");
};

#endif

Class FilterActuator_obj::__mClass;

void FilterActuator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.actuators.FilterActuator"), hx::TCanCast< FilterActuator_obj> ,sStaticFields,sMemberFields,
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

void FilterActuator_obj::__boot()
{
}

} // end namespace motion
} // end namespace actuators
