#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_CalendarView
#include <haxe/ui/toolkit/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Calendar
#include <haxe/ui/toolkit/controls/Calendar.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void CalendarView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","new",0xe0ef7f2f,"haxe.ui.toolkit.containers.CalendarView.new","haxe/ui/toolkit/containers/CalendarView.hx",19,0x9c504021)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	::haxe::ui::toolkit::controls::Calendar _g = ::haxe::ui::toolkit::controls::Calendar_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	this->_calendar = _g;
	HX_STACK_LINE(22)
	this->_autoSize = false;
	HX_STACK_LINE(23)
	this->_calendar->set_percentWidth((int)100);
	HX_STACK_LINE(24)
	this->_calendar->set_percentHeight((int)100);
}
;
	return null();
}

//CalendarView_obj::~CalendarView_obj() { }

Dynamic CalendarView_obj::__CreateEmpty() { return  new CalendarView_obj; }
hx::ObjectPtr< CalendarView_obj > CalendarView_obj::__new()
{  hx::ObjectPtr< CalendarView_obj > result = new CalendarView_obj();
	result->__construct();
	return result;}

Dynamic CalendarView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CalendarView_obj > result = new CalendarView_obj();
	result->__construct();
	return result;}

Void CalendarView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","initialize",0xaedb8a61,"haxe.ui.toolkit.containers.CalendarView.initialize","haxe/ui/toolkit/containers/CalendarView.hx",30,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->super::initialize();
		HX_STACK_LINE(33)
		::haxe::ui::toolkit::containers::HBox hbox = ::haxe::ui::toolkit::containers::HBox_obj::__new();		HX_STACK_VAR(hbox,"hbox");
		HX_STACK_LINE(34)
		hbox->set_percentWidth((int)100);
		HX_STACK_LINE(35)
		::haxe::ui::toolkit::controls::Button _g = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this->_prevMonthButton = _g;
		HX_STACK_LINE(36)
		this->_prevMonthButton->set_text(HX_CSTRING("<"));
		HX_STACK_LINE(37)
		this->_prevMonthButton->addEventListener(::openfl::events::MouseEvent_obj::CLICK,this->_onPrevClicked_dyn(),null(),null(),null());
		HX_STACK_LINE(38)
		hbox->addChild(this->_prevMonthButton);
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::controls::Spacer spacer = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer,"spacer");
		HX_STACK_LINE(42)
		spacer->set_percentWidth((int)50);
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::controls::Text _g1 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		this->_currentMonthYear = _g1;
		HX_STACK_LINE(46)
		this->_currentMonthYear->set_text(HX_CSTRING("December 2013"));
		HX_STACK_LINE(47)
		this->_currentMonthYear->set_id(HX_CSTRING("currentMonthYear"));
		HX_STACK_LINE(48)
		this->_currentMonthYear->set_percentWidth((int)100);
		HX_STACK_LINE(49)
		this->_currentMonthYear->set_autoSize(false);
		HX_STACK_LINE(50)
		hbox->addChild(this->_currentMonthYear);
		HX_STACK_LINE(52)
		::haxe::ui::toolkit::controls::Spacer spacer1 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer1,"spacer1");
		HX_STACK_LINE(53)
		spacer1->set_percentWidth((int)50);
		HX_STACK_LINE(62)
		::haxe::ui::toolkit::controls::Button _g2 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(62)
		this->_nextMonthButton = _g2;
		HX_STACK_LINE(63)
		this->_nextMonthButton->set_text(HX_CSTRING(">"));
		HX_STACK_LINE(64)
		this->_nextMonthButton->addEventListener(::openfl::events::MouseEvent_obj::CLICK,this->_onNextClicked_dyn(),null(),null(),null());
		HX_STACK_LINE(65)
		hbox->addChild(this->_nextMonthButton);
		HX_STACK_LINE(67)
		this->addChild(hbox);
		HX_STACK_LINE(69)
		this->_calendar->addEventListener(::openfl::events::Event_obj::CHANGE,this->_onDateChanged_dyn(),null(),null(),null());
		HX_STACK_LINE(70)
		this->addChild(this->_calendar);
		HX_STACK_LINE(71)
		this->displayMonthYear();
	}
return null();
}


::Date CalendarView_obj::get_date( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","get_date",0xac4b5488,"haxe.ui.toolkit.containers.CalendarView.get_date","haxe/ui/toolkit/containers/CalendarView.hx",81,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	return this->_calendar->get_date();
}


HX_DEFINE_DYNAMIC_FUNC0(CalendarView_obj,get_date,return )

::Date CalendarView_obj::set_date( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","set_date",0x5aa8adfc,"haxe.ui.toolkit.containers.CalendarView.set_date","haxe/ui/toolkit/containers/CalendarView.hx",84,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(85)
	this->_calendar->set_date(value);
	HX_STACK_LINE(86)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,set_date,return )

::Date CalendarView_obj::get_selectedDate( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","get_selectedDate",0xaaf25e83,"haxe.ui.toolkit.containers.CalendarView.get_selectedDate","haxe/ui/toolkit/containers/CalendarView.hx",90,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return this->_calendar->get_selectedDate();
}


HX_DEFINE_DYNAMIC_FUNC0(CalendarView_obj,get_selectedDate,return )

::Date CalendarView_obj::set_selectedDate( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","set_selectedDate",0x01344bf7,"haxe.ui.toolkit.containers.CalendarView.set_selectedDate","haxe/ui/toolkit/containers/CalendarView.hx",93,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(94)
	this->_calendar->set_selectedDate(value);
	HX_STACK_LINE(95)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,set_selectedDate,return )

Void CalendarView_obj::_onPrevClicked( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","_onPrevClicked",0xc741b6e7,"haxe.ui.toolkit.containers.CalendarView._onPrevClicked","haxe/ui/toolkit/containers/CalendarView.hx",101,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(102)
		this->_calendar->previousMonth();
		HX_STACK_LINE(103)
		this->displayMonthYear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,_onPrevClicked,(void))

Void CalendarView_obj::_onNextClicked( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","_onNextClicked",0x3742b0e7,"haxe.ui.toolkit.containers.CalendarView._onNextClicked","haxe/ui/toolkit/containers/CalendarView.hx",106,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(107)
		this->_calendar->nextMonth();
		HX_STACK_LINE(108)
		this->displayMonthYear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,_onNextClicked,(void))

Void CalendarView_obj::_onDateChanged( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","_onDateChanged",0x5a4e8759,"haxe.ui.toolkit.containers.CalendarView._onDateChanged","haxe/ui/toolkit/containers/CalendarView.hx",111,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(112)
		::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarView_obj,_onDateChanged,(void))

Void CalendarView_obj::displayMonthYear( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","displayMonthYear",0xc591b64c,"haxe.ui.toolkit.containers.CalendarView.displayMonthYear","haxe/ui/toolkit/containers/CalendarView.hx",118,0x9c504021)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		int _g = this->_calendar->get_date()->getMonth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		::String monthName = ::haxe::ui::toolkit::containers::CalendarView_obj::MONTH_NAMES->__get(_g);		HX_STACK_VAR(monthName,"monthName");
		HX_STACK_LINE(120)
		int _g1 = this->_calendar->get_date()->getFullYear();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		::String _g2 = ((monthName + HX_CSTRING(" ")) + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(120)
		this->_currentMonthYear->set_text(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CalendarView_obj,displayMonthYear,(void))

Dynamic CalendarView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","clone",0x4a6353ec,"haxe.ui.toolkit.containers.CalendarView.clone","haxe/ui/toolkit/containers/CalendarView.hx",1,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::CalendarView c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic CalendarView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.CalendarView","self",0xf3edd1dd,"haxe.ui.toolkit.containers.CalendarView.self","haxe/ui/toolkit/containers/CalendarView.hx",2,0x9c504021)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::CalendarView_obj::__new();
}


Array< ::String > CalendarView_obj::MONTH_NAMES;


CalendarView_obj::CalendarView_obj()
{
}

void CalendarView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CalendarView);
	HX_MARK_MEMBER_NAME(_calendar,"_calendar");
	HX_MARK_MEMBER_NAME(_prevMonthButton,"_prevMonthButton");
	HX_MARK_MEMBER_NAME(_nextMonthButton,"_nextMonthButton");
	HX_MARK_MEMBER_NAME(_currentMonthYear,"_currentMonthYear");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CalendarView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_calendar,"_calendar");
	HX_VISIT_MEMBER_NAME(_prevMonthButton,"_prevMonthButton");
	HX_VISIT_MEMBER_NAME(_nextMonthButton,"_nextMonthButton");
	HX_VISIT_MEMBER_NAME(_currentMonthYear,"_currentMonthYear");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CalendarView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"date") ) { return get_date(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_date") ) { return get_date_dyn(); }
		if (HX_FIELD_EQ(inName,"set_date") ) { return set_date_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_calendar") ) { return _calendar; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MONTH_NAMES") ) { return MONTH_NAMES; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { return get_selectedDate(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_onPrevClicked") ) { return _onPrevClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"_onNextClicked") ) { return _onNextClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"_onDateChanged") ) { return _onDateChanged_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevMonthButton") ) { return _prevMonthButton; }
		if (HX_FIELD_EQ(inName,"_nextMonthButton") ) { return _nextMonthButton; }
		if (HX_FIELD_EQ(inName,"get_selectedDate") ) { return get_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedDate") ) { return set_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"displayMonthYear") ) { return displayMonthYear_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentMonthYear") ) { return _currentMonthYear; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CalendarView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"date") ) { return set_date(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_calendar") ) { _calendar=inValue.Cast< ::haxe::ui::toolkit::controls::Calendar >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MONTH_NAMES") ) { MONTH_NAMES=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { return set_selectedDate(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevMonthButton") ) { _prevMonthButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nextMonthButton") ) { _nextMonthButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_currentMonthYear") ) { _currentMonthYear=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CalendarView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_calendar"));
	outFields->push(HX_CSTRING("_prevMonthButton"));
	outFields->push(HX_CSTRING("_nextMonthButton"));
	outFields->push(HX_CSTRING("_currentMonthYear"));
	outFields->push(HX_CSTRING("date"));
	outFields->push(HX_CSTRING("selectedDate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MONTH_NAMES"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Calendar*/ ,(int)offsetof(CalendarView_obj,_calendar),HX_CSTRING("_calendar")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(CalendarView_obj,_prevMonthButton),HX_CSTRING("_prevMonthButton")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(CalendarView_obj,_nextMonthButton),HX_CSTRING("_nextMonthButton")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(CalendarView_obj,_currentMonthYear),HX_CSTRING("_currentMonthYear")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_calendar"),
	HX_CSTRING("_prevMonthButton"),
	HX_CSTRING("_nextMonthButton"),
	HX_CSTRING("_currentMonthYear"),
	HX_CSTRING("initialize"),
	HX_CSTRING("get_date"),
	HX_CSTRING("set_date"),
	HX_CSTRING("get_selectedDate"),
	HX_CSTRING("set_selectedDate"),
	HX_CSTRING("_onPrevClicked"),
	HX_CSTRING("_onNextClicked"),
	HX_CSTRING("_onDateChanged"),
	HX_CSTRING("displayMonthYear"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CalendarView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CalendarView_obj::MONTH_NAMES,"MONTH_NAMES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CalendarView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CalendarView_obj::MONTH_NAMES,"MONTH_NAMES");
};

#endif

Class CalendarView_obj::__mClass;

void CalendarView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.CalendarView"), hx::TCanCast< CalendarView_obj> ,sStaticFields,sMemberFields,
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

void CalendarView_obj::__boot()
{
	MONTH_NAMES= Array_obj< ::String >::__new().Add(HX_CSTRING("January")).Add(HX_CSTRING("Febuary")).Add(HX_CSTRING("March")).Add(HX_CSTRING("April")).Add(HX_CSTRING("May")).Add(HX_CSTRING("June")).Add(HX_CSTRING("July")).Add(HX_CSTRING("August")).Add(HX_CSTRING("September")).Add(HX_CSTRING("October")).Add(HX_CSTRING("November")).Add(HX_CSTRING("December"));
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
