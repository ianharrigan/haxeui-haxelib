#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_HaxeLibManager
#include <haxe/ui/haxelib/HaxeLibManager.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_RemoteFetchRunner
#include <haxe/ui/haxelib/RemoteFetchRunner.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#include <haxe/ui/toolkit/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Spacer
#include <haxe/ui/toolkit/controls/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
#ifndef INCLUDED_tools_haxelib_Main
#include <tools/haxelib/Main.h>
#endif
namespace haxe{
namespace ui{
namespace haxelib{

Void RemoteFetchRunner_obj::__construct(::haxe::ui::toolkit::containers::ListView lv,::haxe::ui::toolkit::core::Component progressBox,hx::Null< Float >  __o_timeShare)
{
HX_STACK_FRAME("haxe.ui.haxelib.RemoteFetchRunner","new",0x62f46495,"haxe.ui.haxelib.RemoteFetchRunner.new","haxe/ui/haxelib/RemoteFetchRunner.hx",13,0x6fbf519c)
HX_STACK_THIS(this)
HX_STACK_ARG(lv,"lv")
HX_STACK_ARG(progressBox,"progressBox")
HX_STACK_ARG(__o_timeShare,"timeShare")
Float timeShare = __o_timeShare.Default(.9);
{
	HX_STACK_LINE(22)
	this->_breakIndex = (int)0;
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->_runningTimeShare = timeShare;
	HX_STACK_LINE(27)
	this->_lv = lv;
	HX_STACK_LINE(28)
	::haxe::ui::toolkit::controls::Text _g = progressBox->findChild(HX_CSTRING("localProgressLabel"),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->_progressLabel = _g;
	HX_STACK_LINE(29)
	::haxe::ui::toolkit::controls::Progress _g1 = progressBox->findChild(HX_CSTRING("localProgressBar"),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->_progressBar = _g1;
	HX_STACK_LINE(30)
	::haxe::ui::toolkit::controls::Spacer _g2 = progressBox->findChild(HX_CSTRING("localProgressSpacer"),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(30)
	this->_progressSpacer = _g2;
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::controls::Button _g3 = progressBox->findChild(HX_CSTRING("refreshLocal"),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(31)
	this->_progressButton = _g3;
	HX_STACK_LINE(32)
	int _g4 = this->_lv->get_dataSource()->size();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(32)
	this->_progressBar->set_max(_g4);
	HX_STACK_LINE(33)
	Float _g5 = this->_progressBar->get_max();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(33)
	int _g6 = ::Std_obj::_int(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(33)
	this->_totalProjects = _g6;
	HX_STACK_LINE(34)
	this->_outOfDateProjects = (int)0;
	HX_STACK_LINE(35)
	this->_progressLabel->set_text(HX_CSTRING("Refreshing local repository, please wait..."));
}
;
	return null();
}

//RemoteFetchRunner_obj::~RemoteFetchRunner_obj() { }

Dynamic RemoteFetchRunner_obj::__CreateEmpty() { return  new RemoteFetchRunner_obj; }
hx::ObjectPtr< RemoteFetchRunner_obj > RemoteFetchRunner_obj::__new(::haxe::ui::toolkit::containers::ListView lv,::haxe::ui::toolkit::core::Component progressBox,hx::Null< Float >  __o_timeShare)
{  hx::ObjectPtr< RemoteFetchRunner_obj > result = new RemoteFetchRunner_obj();
	result->__construct(lv,progressBox,__o_timeShare);
	return result;}

Dynamic RemoteFetchRunner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RemoteFetchRunner_obj > result = new RemoteFetchRunner_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void RemoteFetchRunner_obj::run( ){
{
		HX_STACK_FRAME("haxe.ui.haxelib.RemoteFetchRunner","run",0x62f77b80,"haxe.ui.haxelib.RemoteFetchRunner.run","haxe/ui/haxelib/RemoteFetchRunner.hx",38,0x6fbf519c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		bool _g = this->_progressBar->get_visible();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		if (((_g == false))){
			HX_STACK_LINE(40)
			this->_progressBar->set_visible(true);
		}
		HX_STACK_LINE(42)
		bool _g1 = this->_progressSpacer->get_visible();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		if (((_g1 == true))){
			HX_STACK_LINE(43)
			this->_progressSpacer->set_visible(false);
		}
		HX_STACK_LINE(45)
		bool _g2 = this->_progressButton->get_disabled();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(45)
		if (((_g2 == false))){
			HX_STACK_LINE(46)
			this->_progressButton->set_disabled(true);
		}
		HX_STACK_LINE(48)
		bool _g3 = this->_lv->get_disabled();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(48)
		if (((_g3 == false))){
			HX_STACK_LINE(49)
			this->_lv->set_disabled(true);
		}
		HX_STACK_LINE(52)
		this->_lv->get_dataSource()->moveFirst();
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(53)
			int _g4 = this->_breakIndex;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				if ((!(((_g11 < _g4))))){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				int x = (_g11)++;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(54)
				this->_lv->get_dataSource()->moveNext();
			}
		}
		HX_STACK_LINE(57)
		int n = this->_breakIndex;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(58)
		int x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(59)
		while((true)){
			HX_STACK_LINE(60)
			bool _g4 = this->_needToExit();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(60)
			if (((  (((_g4 == true))) ? bool((x == (int)1)) : bool(false) ))){
				HX_STACK_LINE(61)
				this->_progressBar->set_pos(n);
				HX_STACK_LINE(62)
				this->_breakIndex = n;
				HX_STACK_LINE(63)
				this->_lv->invalidate((int)65536,null());
				HX_STACK_LINE(64)
				return null();
			}
			HX_STACK_LINE(67)
			Dynamic data = this->_lv->get_dataSource()->get();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(68)
			::String projectName = data->__Field(HX_CSTRING("project"),true)->__Field(HX_CSTRING("name"),true);		HX_STACK_VAR(projectName,"projectName");
			HX_STACK_LINE(69)
			::String currentVersion = data->__Field(HX_CSTRING("project"),true)->__Field(HX_CSTRING("currentVersion"),true);		HX_STACK_VAR(currentVersion,"currentVersion");
			HX_STACK_LINE(70)
			Dynamic remoteProject = ::haxe::ui::haxelib::HaxeLibManager_obj::get_instance()->queryProject(projectName);		HX_STACK_VAR(remoteProject,"remoteProject");
			HX_STACK_LINE(71)
			data->__Field(HX_CSTRING("project"),true)->__FieldRef(HX_CSTRING("remoteProject")) = remoteProject;
			HX_STACK_LINE(72)
			::String currentVersion1 = data->__Field(HX_CSTRING("project"),true)->__Field(HX_CSTRING("currentVersion"),true);		HX_STACK_VAR(currentVersion1,"currentVersion1");
			HX_STACK_LINE(73)
			if (((currentVersion1 != remoteProject->__Field(HX_CSTRING("curversion"),true)))){
				HX_STACK_LINE(74)
				data->__FieldRef(HX_CSTRING("componentValue")) = (remoteProject->__Field(HX_CSTRING("curversion"),true) + HX_CSTRING(" Available"));
				HX_STACK_LINE(75)
				data->__FieldRef(HX_CSTRING("icon")) = HX_CSTRING("img/blue-folder-horizontal-exclamation-disabled.png");
				HX_STACK_LINE(76)
				(this->_outOfDateProjects)++;
			}
			else{
				HX_STACK_LINE(78)
				data->__FieldRef(HX_CSTRING("icon")) = HX_CSTRING("img/blue-folder-horizontal-tick-disabled.png");
			}
			HX_STACK_LINE(86)
			data->__FieldRef(HX_CSTRING("subtext")) = remoteProject->__Field(HX_CSTRING("desc"),true);
			HX_STACK_LINE(87)
			(n)++;
			HX_STACK_LINE(88)
			(x)++;
			HX_STACK_LINE(59)
			if ((!(this->_lv->get_dataSource()->moveNext()))){
				HX_STACK_LINE(59)
				break;
			}
		}
		HX_STACK_LINE(92)
		this->_lv->get_dataSource()->moveFirst();
		HX_STACK_LINE(93)
		while((true)){
			HX_STACK_LINE(94)
			Dynamic data = this->_lv->get_dataSource()->get();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(95)
			if (((data->__Field(HX_CSTRING("icon"),true) == HX_CSTRING("img/blue-folder-horizontal-exclamation-disabled.png")))){
				HX_STACK_LINE(96)
				data->__FieldRef(HX_CSTRING("icon")) = HX_CSTRING("img/blue-folder-horizontal-exclamation.png");
			}
			else{
				HX_STACK_LINE(98)
				data->__FieldRef(HX_CSTRING("icon")) = HX_CSTRING("img/blue-folder-horizontal-tick.png");
			}
			HX_STACK_LINE(93)
			if ((!(this->_lv->get_dataSource()->moveNext()))){
				HX_STACK_LINE(93)
				break;
			}
		}
		HX_STACK_LINE(102)
		this->_lv->set_disabled(false);
		HX_STACK_LINE(103)
		this->_lv->invalidate((int)65536,null());
		HX_STACK_LINE(104)
		this->_progressBar->set_pos(n);
		HX_STACK_LINE(105)
		::String text = ((HX_CSTRING("") + this->_totalProjects) + HX_CSTRING(" project"));		HX_STACK_VAR(text,"text");
		HX_STACK_LINE(106)
		if (((this->_totalProjects > (int)1))){
			HX_STACK_LINE(107)
			hx::AddEq(text,HX_CSTRING("s"));
		}
		HX_STACK_LINE(109)
		if (((this->_outOfDateProjects == (int)0))){
			HX_STACK_LINE(110)
			hx::AddEq(text,HX_CSTRING(", all update date."));
		}
		else{
			HX_STACK_LINE(112)
			hx::AddEq(text,((HX_CSTRING(", ") + this->_outOfDateProjects) + HX_CSTRING(" with updates")));
		}
		HX_STACK_LINE(114)
		this->_progressLabel->set_text(text);
		HX_STACK_LINE(115)
		this->_progressBar->set_visible(false);
		HX_STACK_LINE(116)
		this->_progressSpacer->set_visible(true);
		HX_STACK_LINE(117)
		this->_progressButton->set_disabled(false);
		HX_STACK_LINE(118)
		this->_needToExit = null();
		HX_STACK_LINE(119)
		this->_isComplete = true;
	}
return null();
}



RemoteFetchRunner_obj::RemoteFetchRunner_obj()
{
}

void RemoteFetchRunner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RemoteFetchRunner);
	HX_MARK_MEMBER_NAME(_lv,"_lv");
	HX_MARK_MEMBER_NAME(_progressLabel,"_progressLabel");
	HX_MARK_MEMBER_NAME(_progressBar,"_progressBar");
	HX_MARK_MEMBER_NAME(_progressSpacer,"_progressSpacer");
	HX_MARK_MEMBER_NAME(_progressButton,"_progressButton");
	HX_MARK_MEMBER_NAME(_totalProjects,"_totalProjects");
	HX_MARK_MEMBER_NAME(_outOfDateProjects,"_outOfDateProjects");
	HX_MARK_MEMBER_NAME(_breakIndex,"_breakIndex");
	::haxe::ui::toolkit::util::pseudothreads::Runner_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RemoteFetchRunner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_lv,"_lv");
	HX_VISIT_MEMBER_NAME(_progressLabel,"_progressLabel");
	HX_VISIT_MEMBER_NAME(_progressBar,"_progressBar");
	HX_VISIT_MEMBER_NAME(_progressSpacer,"_progressSpacer");
	HX_VISIT_MEMBER_NAME(_progressButton,"_progressButton");
	HX_VISIT_MEMBER_NAME(_totalProjects,"_totalProjects");
	HX_VISIT_MEMBER_NAME(_outOfDateProjects,"_outOfDateProjects");
	HX_VISIT_MEMBER_NAME(_breakIndex,"_breakIndex");
	::haxe::ui::toolkit::util::pseudothreads::Runner_obj::__Visit(HX_VISIT_ARG);
}

Dynamic RemoteFetchRunner_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_lv") ) { return _lv; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_breakIndex") ) { return _breakIndex; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_progressBar") ) { return _progressBar; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_progressLabel") ) { return _progressLabel; }
		if (HX_FIELD_EQ(inName,"_totalProjects") ) { return _totalProjects; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_progressSpacer") ) { return _progressSpacer; }
		if (HX_FIELD_EQ(inName,"_progressButton") ) { return _progressButton; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_outOfDateProjects") ) { return _outOfDateProjects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RemoteFetchRunner_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_lv") ) { _lv=inValue.Cast< ::haxe::ui::toolkit::containers::ListView >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_breakIndex") ) { _breakIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_progressBar") ) { _progressBar=inValue.Cast< ::haxe::ui::toolkit::controls::Progress >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_progressLabel") ) { _progressLabel=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_totalProjects") ) { _totalProjects=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_progressSpacer") ) { _progressSpacer=inValue.Cast< ::haxe::ui::toolkit::controls::Spacer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_progressButton") ) { _progressButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_outOfDateProjects") ) { _outOfDateProjects=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RemoteFetchRunner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_lv"));
	outFields->push(HX_CSTRING("_progressLabel"));
	outFields->push(HX_CSTRING("_progressBar"));
	outFields->push(HX_CSTRING("_progressSpacer"));
	outFields->push(HX_CSTRING("_progressButton"));
	outFields->push(HX_CSTRING("_totalProjects"));
	outFields->push(HX_CSTRING("_outOfDateProjects"));
	outFields->push(HX_CSTRING("_breakIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::ListView*/ ,(int)offsetof(RemoteFetchRunner_obj,_lv),HX_CSTRING("_lv")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(RemoteFetchRunner_obj,_progressLabel),HX_CSTRING("_progressLabel")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Progress*/ ,(int)offsetof(RemoteFetchRunner_obj,_progressBar),HX_CSTRING("_progressBar")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Spacer*/ ,(int)offsetof(RemoteFetchRunner_obj,_progressSpacer),HX_CSTRING("_progressSpacer")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(RemoteFetchRunner_obj,_progressButton),HX_CSTRING("_progressButton")},
	{hx::fsInt,(int)offsetof(RemoteFetchRunner_obj,_totalProjects),HX_CSTRING("_totalProjects")},
	{hx::fsInt,(int)offsetof(RemoteFetchRunner_obj,_outOfDateProjects),HX_CSTRING("_outOfDateProjects")},
	{hx::fsInt,(int)offsetof(RemoteFetchRunner_obj,_breakIndex),HX_CSTRING("_breakIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_lv"),
	HX_CSTRING("_progressLabel"),
	HX_CSTRING("_progressBar"),
	HX_CSTRING("_progressSpacer"),
	HX_CSTRING("_progressButton"),
	HX_CSTRING("_totalProjects"),
	HX_CSTRING("_outOfDateProjects"),
	HX_CSTRING("_breakIndex"),
	HX_CSTRING("run"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RemoteFetchRunner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RemoteFetchRunner_obj::__mClass,"__mClass");
};

#endif

Class RemoteFetchRunner_obj::__mClass;

void RemoteFetchRunner_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.RemoteFetchRunner"), hx::TCanCast< RemoteFetchRunner_obj> ,sStaticFields,sMemberFields,
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

void RemoteFetchRunner_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
