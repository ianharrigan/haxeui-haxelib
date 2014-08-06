#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{

Void Runner_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","new",0x077a25cf,"haxe.ui.toolkit.util.pseudothreads.Runner.new","haxe/ui/toolkit/util/pseudothreads/Runner.hx",3,0x1d7ff6a0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->_runningTimeShare = .6;
}
;
	return null();
}

//Runner_obj::~Runner_obj() { }

Dynamic Runner_obj::__CreateEmpty() { return  new Runner_obj; }
hx::ObjectPtr< Runner_obj > Runner_obj::__new()
{  hx::ObjectPtr< Runner_obj > result = new Runner_obj();
	result->__construct();
	return result;}

Dynamic Runner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Runner_obj > result = new Runner_obj();
	result->__construct();
	return result;}

hx::Object *Runner_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::util::pseudothreads::IRunnable_obj)) return operator ::haxe::ui::toolkit::util::pseudothreads::IRunnable_obj *();
	return super::__ToInterface(inType);
}

Void Runner_obj::run( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","run",0x077d3cba,"haxe.ui.toolkit.util.pseudothreads.Runner.run","haxe/ui/toolkit/util/pseudothreads/Runner.hx",8,0x1d7ff6a0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,run,(void))

bool Runner_obj::get_isComplete( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_isComplete",0x206cedfd,"haxe.ui.toolkit.util.pseudothreads.Runner.get_isComplete","haxe/ui/toolkit/util/pseudothreads/Runner.hx",15,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	return this->_isComplete;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_isComplete,return )

int Runner_obj::get_progress( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_progress",0x3975b067,"haxe.ui.toolkit.util.pseudothreads.Runner.get_progress","haxe/ui/toolkit/util/pseudothreads/Runner.hx",21,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return this->_progress;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_progress,return )

int Runner_obj::get_total( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_total",0xe7be42ca,"haxe.ui.toolkit.util.pseudothreads.Runner.get_total","haxe/ui/toolkit/util/pseudothreads/Runner.hx",27,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return this->_total;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_total,return )

Float Runner_obj::get_runningTimeShare( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_runningTimeShare",0xc5b7f64d,"haxe.ui.toolkit.util.pseudothreads.Runner.get_runningTimeShare","haxe/ui/toolkit/util/pseudothreads/Runner.hx",33,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	return this->_runningTimeShare;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_runningTimeShare,return )

Dynamic Runner_obj::set_needToExit( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","set_needToExit",0x9c08f2dd,"haxe.ui.toolkit.util.pseudothreads.Runner.set_needToExit","haxe/ui/toolkit/util/pseudothreads/Runner.hx",38,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(39)
	this->_needToExit = value;
	HX_STACK_LINE(40)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,set_needToExit,return )

Dynamic Runner_obj::get_data( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.pseudothreads.Runner","get_data",0xc880a9e4,"haxe.ui.toolkit.util.pseudothreads.Runner.get_data","haxe/ui/toolkit/util/pseudothreads/Runner.hx",46,0x1d7ff6a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,get_data,return )


Runner_obj::Runner_obj()
{
}

void Runner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Runner);
	HX_MARK_MEMBER_NAME(_isComplete,"_isComplete");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(_progress,"_progress");
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(total,"total");
	HX_MARK_MEMBER_NAME(_runningTimeShare,"_runningTimeShare");
	HX_MARK_MEMBER_NAME(runningTimeShare,"runningTimeShare");
	HX_MARK_MEMBER_NAME(_needToExit,"_needToExit");
	HX_MARK_MEMBER_NAME(needToExit,"needToExit");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void Runner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_isComplete,"_isComplete");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(_progress,"_progress");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(total,"total");
	HX_VISIT_MEMBER_NAME(_runningTimeShare,"_runningTimeShare");
	HX_VISIT_MEMBER_NAME(runningTimeShare,"runningTimeShare");
	HX_VISIT_MEMBER_NAME(_needToExit,"_needToExit");
	HX_VISIT_MEMBER_NAME(needToExit,"needToExit");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic Runner_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return inCallProp ? get_data() : data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"total") ) { return inCallProp ? get_total() : total; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return inCallProp ? get_progress() : progress; }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_progress") ) { return _progress; }
		if (HX_FIELD_EQ(inName,"get_total") ) { return get_total_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return inCallProp ? get_isComplete() : isComplete; }
		if (HX_FIELD_EQ(inName,"needToExit") ) { return needToExit; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isComplete") ) { return _isComplete; }
		if (HX_FIELD_EQ(inName,"_needToExit") ) { return _needToExit; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_progress") ) { return get_progress_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isComplete") ) { return get_isComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"set_needToExit") ) { return set_needToExit_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"runningTimeShare") ) { return inCallProp ? get_runningTimeShare() : runningTimeShare; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_runningTimeShare") ) { return _runningTimeShare; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_runningTimeShare") ) { return get_runningTimeShare_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Runner_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"total") ) { total=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_progress") ) { _progress=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needToExit") ) { if (inCallProp) return set_needToExit(inValue);needToExit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isComplete") ) { _isComplete=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_needToExit") ) { _needToExit=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"runningTimeShare") ) { runningTimeShare=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_runningTimeShare") ) { _runningTimeShare=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Runner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_isComplete"));
	outFields->push(HX_CSTRING("isComplete"));
	outFields->push(HX_CSTRING("_progress"));
	outFields->push(HX_CSTRING("progress"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("total"));
	outFields->push(HX_CSTRING("_runningTimeShare"));
	outFields->push(HX_CSTRING("runningTimeShare"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Runner_obj,_isComplete),HX_CSTRING("_isComplete")},
	{hx::fsBool,(int)offsetof(Runner_obj,isComplete),HX_CSTRING("isComplete")},
	{hx::fsInt,(int)offsetof(Runner_obj,_progress),HX_CSTRING("_progress")},
	{hx::fsInt,(int)offsetof(Runner_obj,progress),HX_CSTRING("progress")},
	{hx::fsInt,(int)offsetof(Runner_obj,_total),HX_CSTRING("_total")},
	{hx::fsInt,(int)offsetof(Runner_obj,total),HX_CSTRING("total")},
	{hx::fsFloat,(int)offsetof(Runner_obj,_runningTimeShare),HX_CSTRING("_runningTimeShare")},
	{hx::fsFloat,(int)offsetof(Runner_obj,runningTimeShare),HX_CSTRING("runningTimeShare")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Runner_obj,_needToExit),HX_CSTRING("_needToExit")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Runner_obj,needToExit),HX_CSTRING("needToExit")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Runner_obj,_data),HX_CSTRING("_data")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Runner_obj,data),HX_CSTRING("data")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("run"),
	HX_CSTRING("_isComplete"),
	HX_CSTRING("isComplete"),
	HX_CSTRING("get_isComplete"),
	HX_CSTRING("_progress"),
	HX_CSTRING("progress"),
	HX_CSTRING("get_progress"),
	HX_CSTRING("_total"),
	HX_CSTRING("total"),
	HX_CSTRING("get_total"),
	HX_CSTRING("_runningTimeShare"),
	HX_CSTRING("runningTimeShare"),
	HX_CSTRING("get_runningTimeShare"),
	HX_CSTRING("_needToExit"),
	HX_CSTRING("needToExit"),
	HX_CSTRING("set_needToExit"),
	HX_CSTRING("_data"),
	HX_CSTRING("data"),
	HX_CSTRING("get_data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Runner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Runner_obj::__mClass,"__mClass");
};

#endif

Class Runner_obj::__mClass;

void Runner_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.util.pseudothreads.Runner"), hx::TCanCast< Runner_obj> ,sStaticFields,sMemberFields,
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

void Runner_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads
