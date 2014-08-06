#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_AsyncThreadCaller
#include <haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{

Void AsyncThreadCaller_obj::__construct(::haxe::ui::toolkit::util::pseudothreads::IRunnable runnable)
{
HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","new",0xba2783f6,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.new","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",8,0x524e847b)
HX_STACK_THIS(this)
HX_STACK_ARG(runnable,"runnable")
{
	HX_STACK_LINE(17)
	this->_cancel = false;
	HX_STACK_LINE(12)
	this->_runs = (int)0;
	HX_STACK_LINE(20)
	super::__construct(null());
	HX_STACK_LINE(21)
	this->_runnableWorker = runnable;
	HX_STACK_LINE(22)
	this->_runnableWorker->__Field(HX_CSTRING("set_needToExit"),true)(this->needToExit_dyn());
}
;
	return null();
}

//AsyncThreadCaller_obj::~AsyncThreadCaller_obj() { }

Dynamic AsyncThreadCaller_obj::__CreateEmpty() { return  new AsyncThreadCaller_obj; }
hx::ObjectPtr< AsyncThreadCaller_obj > AsyncThreadCaller_obj::__new(::haxe::ui::toolkit::util::pseudothreads::IRunnable runnable)
{  hx::ObjectPtr< AsyncThreadCaller_obj > result = new AsyncThreadCaller_obj();
	result->__construct(runnable);
	return result;}

Dynamic AsyncThreadCaller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AsyncThreadCaller_obj > result = new AsyncThreadCaller_obj();
	result->__construct(inArgs[0]);
	return result;}

Void AsyncThreadCaller_obj::start( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","start",0x20e3b978,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.start","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",25,0x524e847b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		int _g = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		this->_startTime = _g;
		HX_STACK_LINE(27)
		::openfl::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->run_dyn(),false,(int)100,null());
		HX_STACK_LINE(28)
		this->run(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,start,(void))

Void AsyncThreadCaller_obj::cancel( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","cancel",0x58981ba4,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.cancel","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",32,0x524e847b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		this->_cancel = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,cancel,(void))

bool AsyncThreadCaller_obj::needToExit( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","needToExit",0x95daba59,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.needToExit","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",36,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	if ((!(this->_cancel))){
		HX_STACK_LINE(36)
		int _g = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		return (_g >= this->_workerExitTime);
	}
	else{
		HX_STACK_LINE(36)
		return true;
	}
	HX_STACK_LINE(36)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,needToExit,return )

Void AsyncThreadCaller_obj::run( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","run",0xba2a9ae1,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.run","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",39,0x524e847b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(40)
		Float frameRate = ::Math_obj::floor((Float((int)1000) / Float(::openfl::Lib_obj::get_current()->get_stage()->frameRate)));		HX_STACK_VAR(frameRate,"frameRate");
		HX_STACK_LINE(41)
		int _g = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		Float _g1 = this->_runnableWorker->__Field(HX_CSTRING("get_runningTimeShare"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		Float _g2 = (frameRate * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(41)
		Float _g3 = (_g + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(41)
		this->_workerExitTime = _g3;
		HX_STACK_LINE(43)
		this->_runnableWorker->run();
		HX_STACK_LINE(44)
		(this->_runs)++;
		HX_STACK_LINE(46)
		if (((this->_cancel == true))){
			HX_STACK_LINE(47)
			int _g4 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(47)
			this->_endTime = _g4;
			HX_STACK_LINE(48)
			this->dispose();
			HX_STACK_LINE(49)
			::openfl::events::Event _g5 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CANCEL,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(49)
			this->dispatchEvent(_g5);
		}
		else{
			HX_STACK_LINE(50)
			if ((this->_runnableWorker->__Field(HX_CSTRING("get_isComplete"),true)())){
				HX_STACK_LINE(51)
				Dynamic _g6 = this->_runnableWorker->__Field(HX_CSTRING("get_data"),true)();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(51)
				this->_data = _g6;
				HX_STACK_LINE(52)
				int _g7 = ::openfl::Lib_obj::getTimer();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(52)
				this->_endTime = _g7;
				HX_STACK_LINE(53)
				this->dispose();
				HX_STACK_LINE(54)
				::openfl::events::Event _g8 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::COMPLETE,null(),null());		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(54)
				this->dispatchEvent(_g8);
			}
			else{
				HX_STACK_LINE(56)
				int _g9 = this->_runnableWorker->__Field(HX_CSTRING("get_progress"),true)();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(56)
				int _g10 = this->_runnableWorker->__Field(HX_CSTRING("get_total"),true)();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(56)
				::openfl::events::ProgressEvent _g11 = ::openfl::events::ProgressEvent_obj::__new(HX_CSTRING("progress"),false,false,_g9,_g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(56)
				this->dispatchEvent(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AsyncThreadCaller_obj,run,(void))

Void AsyncThreadCaller_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","dispose",0x7290b735,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.dispose","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",60,0x524e847b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		::openfl::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::events::Event_obj::ENTER_FRAME,this->run_dyn(),null());
		HX_STACK_LINE(62)
		this->_runnableWorker = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,dispose,(void))

Dynamic AsyncThreadCaller_obj::get_data( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","get_data",0x66899e5d,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.get_data","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",67,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,get_data,return )

int AsyncThreadCaller_obj::get_runs( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","get_runs",0x6fd9c2fb,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.get_runs","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",72,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	return this->_runs;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,get_runs,return )

Float AsyncThreadCaller_obj::get_executionTime( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","get_executionTime",0x43e56932,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.get_executionTime","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",77,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	return (this->_endTime - this->_startTime);
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,get_executionTime,return )

::haxe::ui::toolkit::util::pseudothreads::IRunnable AsyncThreadCaller_obj::get_worker( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller","get_worker",0xfa0d2b71,"haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller.get_worker","haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.hx",82,0x524e847b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(82)
	return this->_runnableWorker;
}


HX_DEFINE_DYNAMIC_FUNC0(AsyncThreadCaller_obj,get_worker,return )


AsyncThreadCaller_obj::AsyncThreadCaller_obj()
{
}

void AsyncThreadCaller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AsyncThreadCaller);
	HX_MARK_MEMBER_NAME(_workerExitTime,"_workerExitTime");
	HX_MARK_MEMBER_NAME(_runnableWorker,"_runnableWorker");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_runs,"_runs");
	HX_MARK_MEMBER_NAME(_startTime,"_startTime");
	HX_MARK_MEMBER_NAME(_endTime,"_endTime");
	HX_MARK_MEMBER_NAME(_cancel,"_cancel");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(runs,"runs");
	HX_MARK_MEMBER_NAME(executionTime,"executionTime");
	HX_MARK_MEMBER_NAME(worker,"worker");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AsyncThreadCaller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_workerExitTime,"_workerExitTime");
	HX_VISIT_MEMBER_NAME(_runnableWorker,"_runnableWorker");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_runs,"_runs");
	HX_VISIT_MEMBER_NAME(_startTime,"_startTime");
	HX_VISIT_MEMBER_NAME(_endTime,"_endTime");
	HX_VISIT_MEMBER_NAME(_cancel,"_cancel");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(runs,"runs");
	HX_VISIT_MEMBER_NAME(executionTime,"executionTime");
	HX_VISIT_MEMBER_NAME(worker,"worker");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AsyncThreadCaller_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return inCallProp ? get_data() : data; }
		if (HX_FIELD_EQ(inName,"runs") ) { return inCallProp ? get_runs() : runs; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"_runs") ) { return _runs; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"worker") ) { return inCallProp ? get_worker() : worker; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_cancel") ) { return _cancel; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_endTime") ) { return _endTime; }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_runs") ) { return get_runs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_startTime") ) { return _startTime; }
		if (HX_FIELD_EQ(inName,"needToExit") ) { return needToExit_dyn(); }
		if (HX_FIELD_EQ(inName,"get_worker") ) { return get_worker_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionTime") ) { return inCallProp ? get_executionTime() : executionTime; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_workerExitTime") ) { return _workerExitTime; }
		if (HX_FIELD_EQ(inName,"_runnableWorker") ) { return _runnableWorker; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_executionTime") ) { return get_executionTime_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AsyncThreadCaller_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"runs") ) { runs=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_runs") ) { _runs=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"worker") ) { worker=inValue.Cast< ::haxe::ui::toolkit::util::pseudothreads::IRunnable >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_cancel") ) { _cancel=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_endTime") ) { _endTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_startTime") ) { _startTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executionTime") ) { executionTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_workerExitTime") ) { _workerExitTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_runnableWorker") ) { _runnableWorker=inValue.Cast< ::haxe::ui::toolkit::util::pseudothreads::IRunnable >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AsyncThreadCaller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_workerExitTime"));
	outFields->push(HX_CSTRING("_runnableWorker"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_runs"));
	outFields->push(HX_CSTRING("_startTime"));
	outFields->push(HX_CSTRING("_endTime"));
	outFields->push(HX_CSTRING("_cancel"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("runs"));
	outFields->push(HX_CSTRING("executionTime"));
	outFields->push(HX_CSTRING("worker"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(AsyncThreadCaller_obj,_workerExitTime),HX_CSTRING("_workerExitTime")},
	{hx::fsObject /*::haxe::ui::toolkit::util::pseudothreads::IRunnable*/ ,(int)offsetof(AsyncThreadCaller_obj,_runnableWorker),HX_CSTRING("_runnableWorker")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncThreadCaller_obj,_data),HX_CSTRING("_data")},
	{hx::fsInt,(int)offsetof(AsyncThreadCaller_obj,_runs),HX_CSTRING("_runs")},
	{hx::fsFloat,(int)offsetof(AsyncThreadCaller_obj,_startTime),HX_CSTRING("_startTime")},
	{hx::fsFloat,(int)offsetof(AsyncThreadCaller_obj,_endTime),HX_CSTRING("_endTime")},
	{hx::fsBool,(int)offsetof(AsyncThreadCaller_obj,_cancel),HX_CSTRING("_cancel")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(AsyncThreadCaller_obj,data),HX_CSTRING("data")},
	{hx::fsInt,(int)offsetof(AsyncThreadCaller_obj,runs),HX_CSTRING("runs")},
	{hx::fsFloat,(int)offsetof(AsyncThreadCaller_obj,executionTime),HX_CSTRING("executionTime")},
	{hx::fsObject /*::haxe::ui::toolkit::util::pseudothreads::IRunnable*/ ,(int)offsetof(AsyncThreadCaller_obj,worker),HX_CSTRING("worker")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_workerExitTime"),
	HX_CSTRING("_runnableWorker"),
	HX_CSTRING("_data"),
	HX_CSTRING("_runs"),
	HX_CSTRING("_startTime"),
	HX_CSTRING("_endTime"),
	HX_CSTRING("_cancel"),
	HX_CSTRING("start"),
	HX_CSTRING("cancel"),
	HX_CSTRING("needToExit"),
	HX_CSTRING("run"),
	HX_CSTRING("dispose"),
	HX_CSTRING("data"),
	HX_CSTRING("get_data"),
	HX_CSTRING("runs"),
	HX_CSTRING("get_runs"),
	HX_CSTRING("executionTime"),
	HX_CSTRING("get_executionTime"),
	HX_CSTRING("worker"),
	HX_CSTRING("get_worker"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncThreadCaller_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncThreadCaller_obj::__mClass,"__mClass");
};

#endif

Class AsyncThreadCaller_obj::__mClass;

void AsyncThreadCaller_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.util.pseudothreads.AsyncThreadCaller"), hx::TCanCast< AsyncThreadCaller_obj> ,sStaticFields,sMemberFields,
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

void AsyncThreadCaller_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads
