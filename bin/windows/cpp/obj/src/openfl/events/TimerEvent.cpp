#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
namespace openfl{
namespace events{

Void TimerEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("openfl.events.TimerEvent","new",0xb64ac7fe,"openfl.events.TimerEvent.new","openfl/events/TimerEvent.hx",13,0x5c7b7b12)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(13)
	super::__construct(type,bubbles,cancelable);
}
;
	return null();
}

//TimerEvent_obj::~TimerEvent_obj() { }

Dynamic TimerEvent_obj::__CreateEmpty() { return  new TimerEvent_obj; }
hx::ObjectPtr< TimerEvent_obj > TimerEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< TimerEvent_obj > result = new TimerEvent_obj();
	result->__construct(type,__o_bubbles,__o_cancelable);
	return result;}

Dynamic TimerEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerEvent_obj > result = new TimerEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::openfl::events::Event TimerEvent_obj::clone( ){
	HX_STACK_FRAME("openfl.events.TimerEvent","clone",0xa3bdae7b,"openfl.events.TimerEvent.clone","openfl/events/TimerEvent.hx",18,0x5c7b7b12)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	::String _g = this->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	bool _g1 = this->get_bubbles();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(20)
	bool _g2 = this->get_cancelable();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(20)
	return ::openfl::events::TimerEvent_obj::__new(_g,_g1,_g2);
}


::String TimerEvent_obj::toString( ){
	HX_STACK_FRAME("openfl.events.TimerEvent","toString",0x793b7c4e,"openfl.events.TimerEvent.toString","openfl/events/TimerEvent.hx",25,0x5c7b7b12)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::String _g = this->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	::String _g1 = (HX_CSTRING("[TimerEvent type=") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(27)
	::String _g2 = (_g1 + HX_CSTRING(" bubbles="));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(27)
	bool _g3 = this->get_bubbles();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(27)
	::String _g4 = ::Std_obj::string(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(27)
	::String _g5 = (_g2 + _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(27)
	::String _g6 = (_g5 + HX_CSTRING(" cancelable="));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(27)
	bool _g7 = this->get_cancelable();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(27)
	::String _g8 = ::Std_obj::string(_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(27)
	::String _g9 = (_g6 + _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(27)
	return (_g9 + HX_CSTRING("]"));
}


Void TimerEvent_obj::updateAfterEvent( ){
{
		HX_STACK_FRAME("openfl.events.TimerEvent","updateAfterEvent",0xcd7c1969,"openfl.events.TimerEvent.updateAfterEvent","openfl/events/TimerEvent.hx",32,0x5c7b7b12)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TimerEvent_obj,updateAfterEvent,(void))

::String TimerEvent_obj::TIMER;

::String TimerEvent_obj::TIMER_COMPLETE;


TimerEvent_obj::TimerEvent_obj()
{
}

Dynamic TimerEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"TIMER") ) { return TIMER; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TIMER_COMPLETE") ) { return TIMER_COMPLETE; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateAfterEvent") ) { return updateAfterEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimerEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"TIMER") ) { TIMER=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TIMER_COMPLETE") ) { TIMER_COMPLETE=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimerEvent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TIMER"),
	HX_CSTRING("TIMER_COMPLETE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("toString"),
	HX_CSTRING("updateAfterEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TimerEvent_obj::TIMER,"TIMER");
	HX_MARK_MEMBER_NAME(TimerEvent_obj::TIMER_COMPLETE,"TIMER_COMPLETE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TimerEvent_obj::TIMER,"TIMER");
	HX_VISIT_MEMBER_NAME(TimerEvent_obj::TIMER_COMPLETE,"TIMER_COMPLETE");
};

#endif

Class TimerEvent_obj::__mClass;

void TimerEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.events.TimerEvent"), hx::TCanCast< TimerEvent_obj> ,sStaticFields,sMemberFields,
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

void TimerEvent_obj::__boot()
{
	TIMER= HX_CSTRING("timer");
	TIMER_COMPLETE= HX_CSTRING("timerComplete");
}

} // end namespace openfl
} // end namespace events
