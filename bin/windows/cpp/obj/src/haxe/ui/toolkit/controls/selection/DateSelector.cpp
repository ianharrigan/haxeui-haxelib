#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_CalendarView
#include <haxe/ui/toolkit/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_DateSelector
#include <haxe/ui/toolkit/controls/selection/DateSelector.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace selection{

Void DateSelector_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","new",0x0e397ad7,"haxe.ui.toolkit.controls.selection.DateSelector.new","haxe/ui/toolkit/controls/selection/DateSelector.hx",13,0x0ade2058)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(171)
	this->dateFormat = HX_CSTRING("%d/%m/%Y");
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	this->set_text(HX_CSTRING("Select Date"));
	HX_STACK_LINE(21)
	this->set_toggle(true);
}
;
	return null();
}

//DateSelector_obj::~DateSelector_obj() { }

Dynamic DateSelector_obj::__CreateEmpty() { return  new DateSelector_obj; }
hx::ObjectPtr< DateSelector_obj > DateSelector_obj::__new()
{  hx::ObjectPtr< DateSelector_obj > result = new DateSelector_obj();
	result->__construct();
	return result;}

Dynamic DateSelector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DateSelector_obj > result = new DateSelector_obj();
	result->__construct();
	return result;}

Void DateSelector_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","preInitialize",0x5f64448a,"haxe.ui.toolkit.controls.selection.DateSelector.preInitialize","haxe/ui/toolkit/controls/selection/DateSelector.hx",27,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->super::preInitialize();
		HX_STACK_LINE(30)
		if (((this->_style != null()))){
			HX_STACK_LINE(31)
			::String _g = this->_style->get_selectionMethod();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			if (((_g != null()))){
				HX_STACK_LINE(32)
				::String _g1 = this->_style->get_selectionMethod();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(32)
				this->_method = _g1;
			}
		}
	}
return null();
}


Void DateSelector_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","initialize",0xabb1d3b9,"haxe.ui.toolkit.controls.selection.DateSelector.initialize","haxe/ui/toolkit/controls/selection/DateSelector.hx",37,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::initialize();
		HX_STACK_LINE(39)
		this->set_autoSize(false);
	}
return null();
}


Void DateSelector_obj::_onMouseClick( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","_onMouseClick",0xf99fa9f8,"haxe.ui.toolkit.controls.selection.DateSelector._onMouseClick","haxe/ui/toolkit/controls/selection/DateSelector.hx",42,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(43)
		this->super::_onMouseClick(event);
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::selection::DateSelector_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/DateSelector.hx",44,0x0ade2058)
				{
					HX_STACK_LINE(44)
					bool _g = __this->_cal->get_visible();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(44)
					return (_g == false);
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		if (((  ((!(((this->_cal == null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(45)
			this->showCalendar();
		}
		else{
			HX_STACK_LINE(47)
			this->hideCalendar();
		}
	}
return null();
}


Void DateSelector_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","applyStyle",0xee65c34c,"haxe.ui.toolkit.controls.selection.DateSelector.applyStyle","haxe/ui/toolkit/controls/selection/DateSelector.hx",51,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->super::applyStyle();
		HX_STACK_LINE(54)
		if (((this->_style != null()))){
			HX_STACK_LINE(55)
			::String _g = this->_style->get_selectionMethod();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			if (((  (((_g != null()))) ? bool((this->_method == null())) : bool(false) ))){
				HX_STACK_LINE(56)
				::String _g1 = this->_style->get_selectionMethod();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(56)
				this->_method = _g1;
			}
		}
	}
return null();
}


Void DateSelector_obj::showCalendar( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","showCalendar",0x0e698384,"haxe.ui.toolkit.controls.selection.DateSelector.showCalendar","haxe/ui/toolkit/controls/selection/DateSelector.hx",64,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		if (((this->_method == HX_CSTRING("popup")))){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
			Void run(Dynamic button,::Date date){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/selection/DateSelector.hx",66,0x0ade2058)
				HX_STACK_ARG(button,"button")
				HX_STACK_ARG(date,"date")
				{
					HX_STACK_LINE(67)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::DateSelector >()->set_selected(false);
					HX_STACK_LINE(68)
					if (((button == (int)65536))){
						HX_STACK_LINE(69)
						::String dateString = ::DateTools_obj::format(date,_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::DateSelector >()->dateFormat);		HX_STACK_VAR(dateString,"dateString");
						HX_STACK_LINE(70)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::DateSelector >()->set_text(dateString);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC2((void))

			HX_STACK_LINE(66)
			::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showCalendar(HX_CSTRING("Select Date"), Dynamic(new _Function_2_1(_g)));
		}
		else{
			HX_STACK_LINE(74)
			if (((this->_cal == null()))){
				HX_STACK_LINE(75)
				::haxe::ui::toolkit::containers::CalendarView _g1 = ::haxe::ui::toolkit::containers::CalendarView_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(75)
				this->_cal = _g1;
				HX_STACK_LINE(76)
				this->_cal->addEventListener(::openfl::events::Event_obj::CHANGE,this->onDateChange_dyn(),null(),null(),null());

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g)
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","haxe/ui/toolkit/controls/selection/DateSelector.hx",78,0x0ade2058)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(78)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::DateSelector >()->showCalendar();
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(77)
				this->_cal->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE, Dynamic(new _Function_3_1(_g)),null(),null(),null());
				HX_STACK_LINE(80)
				this->get_root()->addChild(this->_cal);
				HX_STACK_LINE(81)
				return null();
			}
			HX_STACK_LINE(84)
			this->get_root()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onRootMouseDown_dyn(),null(),null(),null());
			HX_STACK_LINE(85)
			this->get_root()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,this->_onRootMouseDown_dyn(),null(),null(),null());
			HX_STACK_LINE(87)
			Float _g1 = this->get_stageX();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(87)
			Float _g2 = this->get_root()->get_stageX();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(87)
			Float _g3 = (_g1 - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(87)
			this->_cal->set_x(_g3);
			HX_STACK_LINE(88)
			Float _g4 = this->get_stageY();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(88)
			Float _g5 = this->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(88)
			Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(88)
			Float _g7 = this->get_root()->get_stageY();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(88)
			Float _g8 = (_g6 - _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(88)
			this->_cal->set_y(_g8);
			HX_STACK_LINE(89)
			::openfl::filters::DropShadowFilter _g9 = ::openfl::filters::DropShadowFilter_obj::__new((int)4,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(89)
			Dynamic _g10 = Dynamic( Array_obj<Dynamic>::__new().Add(_g9));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(89)
			this->_cal->get_sprite()->set_filters(_g10);
			HX_STACK_LINE(91)
			::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::DateSelector >());		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(92)
			if (((transition == HX_CSTRING("slide")))){
				HX_STACK_LINE(93)
				this->_cal->set_clipHeight((int)0);
				HX_STACK_LINE(94)
				this->_cal->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(95)
				this->_cal->set_visible(true);
				HX_STACK_LINE(96)
				Float _g11 = this->_cal->get_height();		HX_STACK_VAR(_g11,"_g11");
				struct _Function_3_1{
					inline static Dynamic Block( Float &_g11){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/DateSelector.hx",96,0x0ade2058)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("clipHeight") , _g11,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(96)
				Dynamic _g12 = _Function_3_1::Block(_g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(96)
				::motion::easing::IEasing _g13 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g13,"_g13");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/selection/DateSelector.hx",97,0x0ade2058)
					{
						HX_STACK_LINE(97)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::DateSelector >()->_cal->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(96)
				::motion::Actuate_obj::tween(this->_cal,.1,_g12,true,null())->ease(_g13)->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(99)
				if (((transition == HX_CSTRING("fade")))){
					HX_STACK_LINE(100)
					this->_cal->get_sprite()->set_alpha((int)0);
					HX_STACK_LINE(101)
					this->_cal->set_visible(true);
					HX_STACK_LINE(102)
					::openfl::display::Sprite _g14 = this->_cal->get_sprite();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(102)
					::motion::easing::IEasing _g15 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g15,"_g15");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/DateSelector.hx",102,0x0ade2058)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)1,false);
								return __result;
							}
							return null();
						}
					};

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
					Void run(){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/selection/DateSelector.hx",102,0x0ade2058)
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(102)
					::motion::Actuate_obj::tween(_g14,.2,_Function_4_1::Block(),true,null())->ease(_g15)->onComplete( Dynamic(new _Function_4_2()),null());
				}
				else{
					HX_STACK_LINE(105)
					this->_cal->get_sprite()->set_alpha((int)1);
					HX_STACK_LINE(106)
					this->_cal->set_visible(true);
				}
			}
			HX_STACK_LINE(109)
			this->set_selected(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DateSelector_obj,showCalendar,(void))

Void DateSelector_obj::hideCalendar( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","hideCalendar",0xa3e1b049,"haxe.ui.toolkit.controls.selection.DateSelector.hideCalendar","haxe/ui/toolkit/controls/selection/DateSelector.hx",113,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(114)
		if (((this->_cal != null()))){
			HX_STACK_LINE(115)
			::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::DateSelector >());		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(116)
			if (((transition == HX_CSTRING("slide")))){
				HX_STACK_LINE(117)
				this->_cal->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(118)
				::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/DateSelector.hx",118,0x0ade2058)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("clipHeight") , (int)0,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/selection/DateSelector.hx",118,0x0ade2058)
					{
						HX_STACK_LINE(119)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::DateSelector >()->_cal->set_visible(false);
						HX_STACK_LINE(120)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::DateSelector >()->_cal->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(118)
				::motion::Actuate_obj::tween(this->_cal,.1,_Function_3_1::Block(),true,null())->ease(_g1)->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(122)
				if (((transition == HX_CSTRING("fade")))){
					HX_STACK_LINE(123)
					::openfl::display::Sprite _g1 = this->_cal->get_sprite();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(123)
					::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/DateSelector.hx",123,0x0ade2058)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_2,Array< ::Dynamic >,_g)
					Void run(){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/selection/DateSelector.hx",124,0x0ade2058)
						{
							HX_STACK_LINE(124)
							_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::DateSelector >()->_cal->set_visible(false);
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(123)
					::motion::Actuate_obj::tween(_g1,.2,_Function_4_1::Block(),true,null())->ease(_g2)->onComplete( Dynamic(new _Function_4_2(_g)),null());
				}
				else{
					HX_STACK_LINE(127)
					this->_cal->get_sprite()->set_alpha((int)1);
					HX_STACK_LINE(128)
					this->_cal->set_visible(false);
				}
			}
			HX_STACK_LINE(131)
			this->set_selected(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DateSelector_obj,hideCalendar,(void))

::String DateSelector_obj::get_method( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","get_method",0xb8d90913,"haxe.ui.toolkit.controls.selection.DateSelector.get_method","haxe/ui/toolkit/controls/selection/DateSelector.hx",148,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	return this->_method;
}


HX_DEFINE_DYNAMIC_FUNC0(DateSelector_obj,get_method,return )

::String DateSelector_obj::set_method( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","set_method",0xbc56a787,"haxe.ui.toolkit.controls.selection.DateSelector.set_method","haxe/ui/toolkit/controls/selection/DateSelector.hx",151,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(152)
	this->_method = value;
	HX_STACK_LINE(153)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DateSelector_obj,set_method,return )

::Date DateSelector_obj::get_date( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","get_date",0x75e817e0,"haxe.ui.toolkit.controls.selection.DateSelector.get_date","haxe/ui/toolkit/controls/selection/DateSelector.hx",161,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_LINE(162)
	if (((this->_cal != null()))){
		HX_STACK_LINE(163)
		return this->_cal->get_selectedDate();
	}
	HX_STACK_LINE(165)
	return ::Date_obj::now();
}


HX_DEFINE_DYNAMIC_FUNC0(DateSelector_obj,get_date,return )

::String DateSelector_obj::set_dateFormat( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","set_dateFormat",0xf69e2bab,"haxe.ui.toolkit.controls.selection.DateSelector.set_dateFormat","haxe/ui/toolkit/controls/selection/DateSelector.hx",173,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(174)
	this->dateFormat = value;
	HX_STACK_LINE(175)
	if (((this->_cal != null()))){
		HX_STACK_LINE(176)
		::Date _g = this->_cal->get_selectedDate();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(176)
		::String _g1 = ::DateTools_obj::format(_g,this->dateFormat);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(176)
		this->set_text(_g1);
	}
	HX_STACK_LINE(178)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DateSelector_obj,set_dateFormat,return )

Void DateSelector_obj::_onRootMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","_onRootMouseDown",0x95ca4fb0,"haxe.ui.toolkit.controls.selection.DateSelector._onRootMouseDown","haxe/ui/toolkit/controls/selection/DateSelector.hx",184,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(185)
		bool mouseInList = false;		HX_STACK_VAR(mouseInList,"mouseInList");
		HX_STACK_LINE(186)
		if (((this->_cal != null()))){
			HX_STACK_LINE(187)
			bool _g = this->_cal->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(187)
			mouseInList = _g;
		}
		HX_STACK_LINE(190)
		bool mouseIn = this->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(mouseIn,"mouseIn");
		HX_STACK_LINE(191)
		if (((bool((bool((mouseInList == false)) && bool((this->_cal != null())))) && bool((mouseIn == false))))){
			HX_STACK_LINE(192)
			this->get_root()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onRootMouseDown_dyn(),null());
			HX_STACK_LINE(193)
			this->get_root()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,this->_onRootMouseDown_dyn(),null());
			HX_STACK_LINE(194)
			this->hideCalendar();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DateSelector_obj,_onRootMouseDown,(void))

Void DateSelector_obj::onDateChange( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","onDateChange",0x8560a2e6,"haxe.ui.toolkit.controls.selection.DateSelector.onDateChange","haxe/ui/toolkit/controls/selection/DateSelector.hx",198,0x0ade2058)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(199)
		::Date _g = this->_cal->get_selectedDate();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		::String dateString = ::DateTools_obj::format(_g,this->dateFormat);		HX_STACK_VAR(dateString,"dateString");
		HX_STACK_LINE(200)
		this->set_text(dateString);
		HX_STACK_LINE(201)
		this->hideCalendar();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DateSelector_obj,onDateChange,(void))

Dynamic DateSelector_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","clone",0xdae18994,"haxe.ui.toolkit.controls.selection.DateSelector.clone","haxe/ui/toolkit/controls/selection/DateSelector.hx",1,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::selection::DateSelector c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic DateSelector_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.DateSelector","self",0x67600935,"haxe.ui.toolkit.controls.selection.DateSelector.self","haxe/ui/toolkit/controls/selection/DateSelector.hx",2,0x0ade2058)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::selection::DateSelector_obj::__new();
}



DateSelector_obj::DateSelector_obj()
{
}

void DateSelector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DateSelector);
	HX_MARK_MEMBER_NAME(_cal,"_cal");
	HX_MARK_MEMBER_NAME(_method,"_method");
	HX_MARK_MEMBER_NAME(dateFormat,"dateFormat");
	::haxe::ui::toolkit::controls::Button_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DateSelector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cal,"_cal");
	HX_VISIT_MEMBER_NAME(_method,"_method");
	HX_VISIT_MEMBER_NAME(dateFormat,"dateFormat");
	::haxe::ui::toolkit::controls::Button_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DateSelector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_cal") ) { return _cal; }
		if (HX_FIELD_EQ(inName,"date") ) { return get_date(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return get_method(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_method") ) { return _method; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_date") ) { return get_date_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"get_method") ) { return get_method_dyn(); }
		if (HX_FIELD_EQ(inName,"set_method") ) { return set_method_dyn(); }
		if (HX_FIELD_EQ(inName,"dateFormat") ) { return dateFormat; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"showCalendar") ) { return showCalendar_dyn(); }
		if (HX_FIELD_EQ(inName,"hideCalendar") ) { return hideCalendar_dyn(); }
		if (HX_FIELD_EQ(inName,"onDateChange") ) { return onDateChange_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_dateFormat") ) { return set_dateFormat_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onRootMouseDown") ) { return _onRootMouseDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DateSelector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_cal") ) { _cal=inValue.Cast< ::haxe::ui::toolkit::containers::CalendarView >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return set_method(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_method") ) { _method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dateFormat") ) { if (inCallProp) return set_dateFormat(inValue);dateFormat=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DateSelector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_cal"));
	outFields->push(HX_CSTRING("_method"));
	outFields->push(HX_CSTRING("method"));
	outFields->push(HX_CSTRING("date"));
	outFields->push(HX_CSTRING("dateFormat"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::CalendarView*/ ,(int)offsetof(DateSelector_obj,_cal),HX_CSTRING("_cal")},
	{hx::fsString,(int)offsetof(DateSelector_obj,_method),HX_CSTRING("_method")},
	{hx::fsString,(int)offsetof(DateSelector_obj,dateFormat),HX_CSTRING("dateFormat")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_cal"),
	HX_CSTRING("_method"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("_onMouseClick"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("showCalendar"),
	HX_CSTRING("hideCalendar"),
	HX_CSTRING("get_method"),
	HX_CSTRING("set_method"),
	HX_CSTRING("get_date"),
	HX_CSTRING("dateFormat"),
	HX_CSTRING("set_dateFormat"),
	HX_CSTRING("_onRootMouseDown"),
	HX_CSTRING("onDateChange"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DateSelector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DateSelector_obj::__mClass,"__mClass");
};

#endif

Class DateSelector_obj::__mClass;

void DateSelector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.selection.DateSelector"), hx::TCanCast< DateSelector_obj> ,sStaticFields,sMemberFields,
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

void DateSelector_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace selection
