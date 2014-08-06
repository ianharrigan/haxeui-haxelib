#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace openfl{
namespace utils{

Void Timer_obj::__construct(Float delay,hx::Null< int >  __o_repeatCount)
{
HX_STACK_FRAME("openfl.utils.Timer","new",0xe52329bc,"openfl.utils.Timer.new","openfl/utils/Timer.hx",21,0xaa6369f6)
HX_STACK_THIS(this)
HX_STACK_ARG(delay,"delay")
HX_STACK_ARG(__o_repeatCount,"repeatCount")
int repeatCount = __o_repeatCount.Default(0);
{
	HX_STACK_LINE(23)
	if (((  ((!(::Math_obj::isNaN(delay)))) ? bool((delay < (int)0)) : bool(true) ))){
		HX_STACK_LINE(25)
		HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("The delay specified is negative or not a finite number"),null()));
	}
	HX_STACK_LINE(29)
	super::__construct(null());
	HX_STACK_LINE(31)
	this->__delay = delay;
	HX_STACK_LINE(32)
	this->repeatCount = repeatCount;
	HX_STACK_LINE(33)
	this->currentCount = (int)0;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float delay,hx::Null< int >  __o_repeatCount)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(delay,__o_repeatCount);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Timer_obj::reset( ){
{
		HX_STACK_FRAME("openfl.utils.Timer","reset",0x2125b22b,"openfl.utils.Timer.reset","openfl/utils/Timer.hx",38,0xaa6369f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(40)
		if ((this->running)){
			HX_STACK_LINE(42)
			this->stop();
		}
		HX_STACK_LINE(46)
		this->currentCount = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,reset,(void))

Void Timer_obj::start( ){
{
		HX_STACK_FRAME("openfl.utils.Timer","start",0xbe68dcbe,"openfl.utils.Timer.start","openfl/utils/Timer.hx",53,0xaa6369f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		if ((!(this->running))){
			HX_STACK_LINE(55)
			this->running = true;
			HX_STACK_LINE(56)
			::haxe::Timer _g = ::haxe::Timer_obj::__new(this->__delay);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(56)
			this->__timer = _g;
			HX_STACK_LINE(57)
			this->__timer->run = this->timer_onTimer_dyn();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,start,(void))

Void Timer_obj::stop( ){
{
		HX_STACK_FRAME("openfl.utils.Timer","stop",0x9cfac726,"openfl.utils.Timer.stop","openfl/utils/Timer.hx",64,0xaa6369f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->running = false;
		HX_STACK_LINE(68)
		if (((this->__timer != null()))){
			HX_STACK_LINE(70)
			this->__timer->stop();
			HX_STACK_LINE(71)
			this->__timer = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Float Timer_obj::get_delay( ){
	HX_STACK_FRAME("openfl.utils.Timer","get_delay",0xecdefa36,"openfl.utils.Timer.get_delay","openfl/utils/Timer.hx",87,0xaa6369f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	return this->__delay;
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,get_delay,return )

Float Timer_obj::set_delay( Float value){
	HX_STACK_FRAME("openfl.utils.Timer","set_delay",0xd02fe642,"openfl.utils.Timer.set_delay","openfl/utils/Timer.hx",92,0xaa6369f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(94)
	this->__delay = value;
	HX_STACK_LINE(96)
	if ((this->running)){
		HX_STACK_LINE(98)
		this->stop();
		HX_STACK_LINE(99)
		this->start();
	}
	HX_STACK_LINE(103)
	return this->__delay;
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,set_delay,return )

Void Timer_obj::timer_onTimer( ){
{
		HX_STACK_FRAME("openfl.utils.Timer","timer_onTimer",0x5f4568c8,"openfl.utils.Timer.timer_onTimer","openfl/utils/Timer.hx",115,0xaa6369f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		(this->currentCount)++;
		HX_STACK_LINE(119)
		if (((bool((this->repeatCount > (int)0)) && bool((this->currentCount >= this->repeatCount))))){
			HX_STACK_LINE(121)
			this->stop();
			HX_STACK_LINE(122)
			::openfl::events::TimerEvent _g = ::openfl::events::TimerEvent_obj::__new(::openfl::events::TimerEvent_obj::TIMER,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(122)
			this->dispatchEvent(_g);
			HX_STACK_LINE(123)
			::openfl::events::TimerEvent _g1 = ::openfl::events::TimerEvent_obj::__new(::openfl::events::TimerEvent_obj::TIMER_COMPLETE,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(123)
			this->dispatchEvent(_g1);
		}
		else{
			HX_STACK_LINE(127)
			::openfl::events::TimerEvent _g2 = ::openfl::events::TimerEvent_obj::__new(::openfl::events::TimerEvent_obj::TIMER,null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(127)
			this->dispatchEvent(_g2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,timer_onTimer,(void))


Timer_obj::Timer_obj()
{
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(currentCount,"currentCount");
	HX_MARK_MEMBER_NAME(repeatCount,"repeatCount");
	HX_MARK_MEMBER_NAME(running,"running");
	HX_MARK_MEMBER_NAME(__delay,"__delay");
	HX_MARK_MEMBER_NAME(__timer,"__timer");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentCount,"currentCount");
	HX_VISIT_MEMBER_NAME(repeatCount,"repeatCount");
	HX_VISIT_MEMBER_NAME(running,"running");
	HX_VISIT_MEMBER_NAME(__delay,"__delay");
	HX_VISIT_MEMBER_NAME(__timer,"__timer");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Timer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return get_delay(); }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { return running; }
		if (HX_FIELD_EQ(inName,"__delay") ) { return __delay; }
		if (HX_FIELD_EQ(inName,"__timer") ) { return __timer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_delay") ) { return get_delay_dyn(); }
		if (HX_FIELD_EQ(inName,"set_delay") ) { return set_delay_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"repeatCount") ) { return repeatCount; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentCount") ) { return currentCount; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"timer_onTimer") ) { return timer_onTimer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return set_delay(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"running") ) { running=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__delay") ) { __delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__timer") ) { __timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"repeatCount") ) { repeatCount=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentCount") ) { currentCount=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("currentCount"));
	outFields->push(HX_CSTRING("delay"));
	outFields->push(HX_CSTRING("repeatCount"));
	outFields->push(HX_CSTRING("running"));
	outFields->push(HX_CSTRING("__delay"));
	outFields->push(HX_CSTRING("__timer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Timer_obj,currentCount),HX_CSTRING("currentCount")},
	{hx::fsInt,(int)offsetof(Timer_obj,repeatCount),HX_CSTRING("repeatCount")},
	{hx::fsBool,(int)offsetof(Timer_obj,running),HX_CSTRING("running")},
	{hx::fsFloat,(int)offsetof(Timer_obj,__delay),HX_CSTRING("__delay")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(Timer_obj,__timer),HX_CSTRING("__timer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("currentCount"),
	HX_CSTRING("repeatCount"),
	HX_CSTRING("running"),
	HX_CSTRING("__delay"),
	HX_CSTRING("__timer"),
	HX_CSTRING("reset"),
	HX_CSTRING("start"),
	HX_CSTRING("stop"),
	HX_CSTRING("get_delay"),
	HX_CSTRING("set_delay"),
	HX_CSTRING("timer_onTimer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
};

#endif

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.utils.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
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

void Timer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace utils
