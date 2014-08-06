#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Calendar
#include <haxe/ui/toolkit/controls/Calendar.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CalendarDay
#include <haxe/ui/toolkit/controls/CalendarDay.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CalendarLayout
#include <haxe/ui/toolkit/controls/CalendarLayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
namespace controls{

Void Calendar_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","new",0xe986f1c6,"haxe.ui.toolkit.controls.Calendar.new","haxe/ui/toolkit/controls/Calendar.hx",21,0xe933a32a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::controls::CalendarLayout _g = ::haxe::ui::toolkit::controls::CalendarLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	this->_layout = _g;
	HX_STACK_LINE(24)
	this->_autoSize = false;
	HX_STACK_LINE(25)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(25)
	this->_dayItems = _g1;
	HX_STACK_LINE(26)
	::Date _g2 = ::Date_obj::now();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(26)
	this->_selectedDate = _g2;
}
;
	return null();
}

//Calendar_obj::~Calendar_obj() { }

Dynamic Calendar_obj::__CreateEmpty() { return  new Calendar_obj; }
hx::ObjectPtr< Calendar_obj > Calendar_obj::__new()
{  hx::ObjectPtr< Calendar_obj > result = new Calendar_obj();
	result->__construct();
	return result;}

Dynamic Calendar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Calendar_obj > result = new Calendar_obj();
	result->__construct();
	return result;}

Void Calendar_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","preInitialize",0x12075c39,"haxe.ui.toolkit.controls.Calendar.preInitialize","haxe/ui/toolkit/controls/Calendar.hx",32,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->super::preInitialize();
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(35)
			while((true)){
				HX_STACK_LINE(35)
				if ((!(((_g < (int)6))))){
					HX_STACK_LINE(35)
					break;
				}
				HX_STACK_LINE(35)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(36)
				{
					HX_STACK_LINE(36)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(36)
					while((true)){
						HX_STACK_LINE(36)
						if ((!(((_g1 < (int)7))))){
							HX_STACK_LINE(36)
							break;
						}
						HX_STACK_LINE(36)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(37)
						::haxe::ui::toolkit::controls::CalendarDay dayItem = ::haxe::ui::toolkit::controls::CalendarDay_obj::__new();		HX_STACK_VAR(dayItem,"dayItem");
						HX_STACK_LINE(38)
						Dynamic _g2 = this->buildMouseClickFunction(this->_dayItems->length);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(38)
						dayItem->addEventListener(::openfl::events::MouseEvent_obj::CLICK,_g2,null(),null(),null());
						HX_STACK_LINE(39)
						this->_dayItems->push(dayItem);
						HX_STACK_LINE(40)
						this->addChild(dayItem);
					}
				}
			}
		}
		HX_STACK_LINE(43)
		::Date _g1 = ::Date_obj::now();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		this->set_date(_g1);
	}
return null();
}


Void Calendar_obj::previousMonth( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","previousMonth",0xbeb8f06f,"haxe.ui.toolkit.controls.Calendar.previousMonth","haxe/ui/toolkit/controls/Calendar.hx",49,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		(this->_month)--;
		HX_STACK_LINE(51)
		if (((this->_month < (int)0))){
			HX_STACK_LINE(52)
			this->_month = (int)11;
			HX_STACK_LINE(53)
			(this->_year)--;
		}
		HX_STACK_LINE(55)
		int _g = this->getEndDay(this->_month,this->_year);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		_g1 = hx::TCast< Int >::cast(::Math_obj::min(this->_day,_g));
		HX_STACK_LINE(55)
		this->_day = _g1;
		HX_STACK_LINE(56)
		::Date _g2 = ::Date_obj::__new(this->_year,this->_month,this->_day,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(56)
		this->set_date(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,previousMonth,(void))

Void Calendar_obj::nextMonth( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","nextMonth",0xdaf41333,"haxe.ui.toolkit.controls.Calendar.nextMonth","haxe/ui/toolkit/controls/Calendar.hx",59,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		(this->_month)++;
		HX_STACK_LINE(61)
		if (((this->_month > (int)11))){
			HX_STACK_LINE(62)
			this->_month = (int)0;
			HX_STACK_LINE(63)
			(this->_year)++;
		}
		HX_STACK_LINE(65)
		int _g = this->getEndDay(this->_month,this->_year);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(65)
		_g1 = hx::TCast< Int >::cast(::Math_obj::min(this->_day,_g));
		HX_STACK_LINE(65)
		this->_day = _g1;
		HX_STACK_LINE(66)
		::Date _g2 = ::Date_obj::__new(this->_year,this->_month,this->_day,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(66)
		this->set_date(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,nextMonth,(void))

::Date Calendar_obj::get_date( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","get_date",0x2f5a1e91,"haxe.ui.toolkit.controls.Calendar.get_date","haxe/ui/toolkit/controls/Calendar.hx",76,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	return this->_date;
}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,get_date,return )

::Date Calendar_obj::set_date( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","set_date",0xddb77805,"haxe.ui.toolkit.controls.Calendar.set_date","haxe/ui/toolkit/controls/Calendar.hx",79,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(80)
	this->_date = value;
	HX_STACK_LINE(81)
	int _g = this->_date->getFullYear();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(81)
	this->_year = _g;
	HX_STACK_LINE(82)
	int _g1 = this->_date->getMonth();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(82)
	this->_month = _g1;
	HX_STACK_LINE(83)
	int _g2 = this->_date->getDate();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(83)
	this->_day = _g2;
	HX_STACK_LINE(85)
	int startDay = ::Date_obj::__new(this->_year,this->_month,(int)1,(int)0,(int)0,(int)0)->getDay();		HX_STACK_VAR(startDay,"startDay");
	HX_STACK_LINE(86)
	int endDay = this->getEndDay(this->_month,this->_year);		HX_STACK_VAR(endDay,"endDay");
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(88)
		Array< ::Dynamic > _g11 = this->_dayItems;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(88)
		while((true)){
			HX_STACK_LINE(88)
			if ((!(((_g3 < _g11->length))))){
				HX_STACK_LINE(88)
				break;
			}
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::controls::CalendarDay item = _g11->__get(_g3).StaticCast< ::haxe::ui::toolkit::controls::CalendarDay >();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(88)
			++(_g3);
			HX_STACK_LINE(89)
			item->set_visible(false);
			HX_STACK_LINE(90)
			item->set_id(null());
		}
	}
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(93)
		while((true)){
			HX_STACK_LINE(93)
			if ((!(((_g3 < endDay))))){
				HX_STACK_LINE(93)
				break;
			}
			HX_STACK_LINE(93)
			int i = (_g3)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(94)
			::haxe::ui::toolkit::controls::CalendarDay item = this->_dayItems->__get((i + startDay)).StaticCast< ::haxe::ui::toolkit::controls::CalendarDay >();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(95)
			item->set_visible(true);
			HX_STACK_LINE(96)
			item->set_text((HX_CSTRING("") + ((i + (int)1))));
			HX_STACK_LINE(97)
			int _g31 = this->_selectedDate->getDate();		HX_STACK_VAR(_g31,"_g31");
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::Calendar_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Calendar.hx",97,0xe933a32a)
					{
						HX_STACK_LINE(97)
						int _g4 = __this->_selectedDate->getMonth();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(97)
						return (__this->_month == _g4);
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::Calendar_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Calendar.hx",97,0xe933a32a)
					{
						HX_STACK_LINE(97)
						int _g5 = __this->_selectedDate->getFullYear();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(97)
						return (__this->_year == _g5);
					}
					return null();
				}
			};
			HX_STACK_LINE(97)
			if (((  (((  ((((i + (int)1) == _g31))) ? bool(_Function_3_1::Block(this)) : bool(false) ))) ? bool(_Function_3_2::Block(this)) : bool(false) ))){
				HX_STACK_LINE(98)
				item->set_id(HX_CSTRING("selectedDay"));
			}
		}
	}
	HX_STACK_LINE(102)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,set_date,return )

::Date Calendar_obj::get_selectedDate( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","get_selectedDate",0xd357d98c,"haxe.ui.toolkit.controls.Calendar.get_selectedDate","haxe/ui/toolkit/controls/Calendar.hx",106,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	return this->_selectedDate;
}


HX_DEFINE_DYNAMIC_FUNC0(Calendar_obj,get_selectedDate,return )

::Date Calendar_obj::set_selectedDate( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","set_selectedDate",0x2999c700,"haxe.ui.toolkit.controls.Calendar.set_selectedDate","haxe/ui/toolkit/controls/Calendar.hx",109,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(110)
	this->_selectedDate = value;
	HX_STACK_LINE(111)
	this->set_date(this->_date);
	HX_STACK_LINE(112)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,set_selectedDate,return )

int Calendar_obj::getEndDay( int month,int year){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","getEndDay",0x9e12405d,"haxe.ui.toolkit.controls.Calendar.getEndDay","haxe/ui/toolkit/controls/Calendar.hx",118,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(month,"month")
	HX_STACK_ARG(year,"year")
	HX_STACK_LINE(119)
	int endDay = (int)-1;		HX_STACK_VAR(endDay,"endDay");
	HX_STACK_LINE(120)
	switch( (int)(month)){
		case (int)1: {
			HX_STACK_LINE(122)
			if (((bool((hx::Mod(year,(int)400) == (int)0)) || bool((bool((hx::Mod(year,(int)100) != (int)0)) && bool((hx::Mod(year,(int)4) == (int)0))))))){
				HX_STACK_LINE(123)
				endDay = (int)29;
			}
			else{
				HX_STACK_LINE(125)
				endDay = (int)28;
			}
		}
		;break;
		case (int)3: case (int)5: case (int)8: case (int)10: {
			HX_STACK_LINE(128)
			endDay = (int)30;
		}
		;break;
		default: {
			HX_STACK_LINE(130)
			endDay = (int)31;
		}
	}
	HX_STACK_LINE(132)
	return endDay;
}


HX_DEFINE_DYNAMIC_FUNC2(Calendar_obj,getEndDay,return )

Dynamic Calendar_obj::buildMouseClickFunction( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","buildMouseClickFunction",0xf094cd4f,"haxe.ui.toolkit.controls.Calendar.buildMouseClickFunction","haxe/ui/toolkit/controls/Calendar.hx",135,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(135)
	Array< int > index1 = Array_obj< int >::__new().Add(index);		HX_STACK_VAR(index1,"index1");
	HX_STACK_LINE(135)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Array< int >,index1)
	Void run(::openfl::events::MouseEvent event){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/Calendar.hx",136,0xe933a32a)
		HX_STACK_ARG(event,"event")
		{
			HX_STACK_LINE(136)
			_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Calendar >()->mouseClickButton(index1->__get((int)0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(136)
	return  Dynamic(new _Function_1_1(_g,index1));
}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,buildMouseClickFunction,return )

Void Calendar_obj::mouseClickButton( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","mouseClickButton",0x90a1490f,"haxe.ui.toolkit.controls.Calendar.mouseClickButton","haxe/ui/toolkit/controls/Calendar.hx",139,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(140)
		::haxe::ui::toolkit::controls::CalendarDay item = this->_dayItems->__get(index).StaticCast< ::haxe::ui::toolkit::controls::CalendarDay >();		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(141)
		::String _g = item->get_text();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		int day = ::Std_obj::parseInt(_g);		HX_STACK_VAR(day,"day");
		HX_STACK_LINE(142)
		::Date _g1 = ::Date_obj::__new(this->_year,this->_month,day,(int)0,(int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(142)
		this->set_selectedDate(_g1);
		HX_STACK_LINE(143)
		::openfl::events::Event _g2 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(143)
		this->dispatchEvent(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Calendar_obj,mouseClickButton,(void))

Dynamic Calendar_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","clone",0x3dadda43,"haxe.ui.toolkit.controls.Calendar.clone","haxe/ui/toolkit/controls/Calendar.hx",1,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Calendar c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic Calendar_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Calendar","self",0x6fdaa366,"haxe.ui.toolkit.controls.Calendar.self","haxe/ui/toolkit/controls/Calendar.hx",2,0xe933a32a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::Calendar_obj::__new();
}



Calendar_obj::Calendar_obj()
{
}

void Calendar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Calendar);
	HX_MARK_MEMBER_NAME(_dayItems,"_dayItems");
	HX_MARK_MEMBER_NAME(_date,"_date");
	HX_MARK_MEMBER_NAME(_year,"_year");
	HX_MARK_MEMBER_NAME(_month,"_month");
	HX_MARK_MEMBER_NAME(_day,"_day");
	HX_MARK_MEMBER_NAME(_selectedDate,"_selectedDate");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Calendar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dayItems,"_dayItems");
	HX_VISIT_MEMBER_NAME(_date,"_date");
	HX_VISIT_MEMBER_NAME(_year,"_year");
	HX_VISIT_MEMBER_NAME(_month,"_month");
	HX_VISIT_MEMBER_NAME(_day,"_day");
	HX_VISIT_MEMBER_NAME(_selectedDate,"_selectedDate");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Calendar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_day") ) { return _day; }
		if (HX_FIELD_EQ(inName,"date") ) { return get_date(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_date") ) { return _date; }
		if (HX_FIELD_EQ(inName,"_year") ) { return _year; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_month") ) { return _month; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_date") ) { return get_date_dyn(); }
		if (HX_FIELD_EQ(inName,"set_date") ) { return set_date_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dayItems") ) { return _dayItems; }
		if (HX_FIELD_EQ(inName,"nextMonth") ) { return nextMonth_dyn(); }
		if (HX_FIELD_EQ(inName,"getEndDay") ) { return getEndDay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { return get_selectedDate(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_selectedDate") ) { return _selectedDate; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"previousMonth") ) { return previousMonth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedDate") ) { return get_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedDate") ) { return set_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"mouseClickButton") ) { return mouseClickButton_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"buildMouseClickFunction") ) { return buildMouseClickFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Calendar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_day") ) { _day=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"date") ) { return set_date(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_date") ) { _date=inValue.Cast< ::Date >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_year") ) { _year=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_month") ) { _month=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dayItems") ) { _dayItems=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { return set_selectedDate(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_selectedDate") ) { _selectedDate=inValue.Cast< ::Date >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Calendar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dayItems"));
	outFields->push(HX_CSTRING("_date"));
	outFields->push(HX_CSTRING("_year"));
	outFields->push(HX_CSTRING("_month"));
	outFields->push(HX_CSTRING("_day"));
	outFields->push(HX_CSTRING("_selectedDate"));
	outFields->push(HX_CSTRING("date"));
	outFields->push(HX_CSTRING("selectedDate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Calendar_obj,_dayItems),HX_CSTRING("_dayItems")},
	{hx::fsObject /*::Date*/ ,(int)offsetof(Calendar_obj,_date),HX_CSTRING("_date")},
	{hx::fsInt,(int)offsetof(Calendar_obj,_year),HX_CSTRING("_year")},
	{hx::fsInt,(int)offsetof(Calendar_obj,_month),HX_CSTRING("_month")},
	{hx::fsInt,(int)offsetof(Calendar_obj,_day),HX_CSTRING("_day")},
	{hx::fsObject /*::Date*/ ,(int)offsetof(Calendar_obj,_selectedDate),HX_CSTRING("_selectedDate")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_dayItems"),
	HX_CSTRING("_date"),
	HX_CSTRING("_year"),
	HX_CSTRING("_month"),
	HX_CSTRING("_day"),
	HX_CSTRING("_selectedDate"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("previousMonth"),
	HX_CSTRING("nextMonth"),
	HX_CSTRING("get_date"),
	HX_CSTRING("set_date"),
	HX_CSTRING("get_selectedDate"),
	HX_CSTRING("set_selectedDate"),
	HX_CSTRING("getEndDay"),
	HX_CSTRING("buildMouseClickFunction"),
	HX_CSTRING("mouseClickButton"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Calendar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Calendar_obj::__mClass,"__mClass");
};

#endif

Class Calendar_obj::__mClass;

void Calendar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Calendar"), hx::TCanCast< Calendar_obj> ,sStaticFields,sMemberFields,
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

void Calendar_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
