#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScrollLayout
#include <haxe/ui/toolkit/controls/VScrollLayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Screen
#include <haxe/ui/toolkit/core/Screen.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void VScroll_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","new",0xa4e2313f,"haxe.ui.toolkit.controls.VScroll.new","haxe/ui/toolkit/controls/VScroll.hx",19,0xae74d851)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(35)
	this->_hasButtons = true;
	HX_STACK_LINE(32)
	this->_scrollDirection = (int)0;
	HX_STACK_LINE(30)
	this->_mouseDownOffset = (int)-1;
	HX_STACK_LINE(24)
	this->_incrementSize = (int)20;
	HX_STACK_LINE(23)
	this->_pageSize = (int)0;
	HX_STACK_LINE(22)
	this->_max = (int)100;
	HX_STACK_LINE(21)
	this->_min = (int)0;
	HX_STACK_LINE(20)
	this->_pos = (int)0;
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	::haxe::ui::toolkit::controls::VScrollLayout _g = ::haxe::ui::toolkit::controls::VScrollLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(39)
	this->_layout = _g;
}
;
	return null();
}

//VScroll_obj::~VScroll_obj() { }

Dynamic VScroll_obj::__CreateEmpty() { return  new VScroll_obj; }
hx::ObjectPtr< VScroll_obj > VScroll_obj::__new()
{  hx::ObjectPtr< VScroll_obj > result = new VScroll_obj();
	result->__construct();
	return result;}

Dynamic VScroll_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VScroll_obj > result = new VScroll_obj();
	result->__construct();
	return result;}

hx::Object *VScroll_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IScrollable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *();
	return super::__ToInterface(inType);
}

Void VScroll_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","preInitialize",0x52a80cf2,"haxe.ui.toolkit.controls.VScroll.preInitialize","haxe/ui/toolkit/controls/VScroll.hx",45,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->super::preInitialize();
		HX_STACK_LINE(48)
		if (((this->_style != null()))){
			HX_STACK_LINE(49)
			bool _g = this->_style->get_hasButtons();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			this->_hasButtons = _g;
		}
	}
return null();
}


Void VScroll_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","initialize",0xd3aa3a51,"haxe.ui.toolkit.controls.VScroll.initialize","haxe/ui/toolkit/controls/VScroll.hx",53,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(54)
		this->super::initialize();
		HX_STACK_LINE(56)
		if (((this->_hasButtons == true))){
			HX_STACK_LINE(57)
			::haxe::ui::toolkit::controls::Button _g = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			this->_deincButton = _g;
			HX_STACK_LINE(58)
			this->_deincButton->set_autoSize(false);
			HX_STACK_LINE(59)
			this->_deincButton->set_iconPosition(HX_CSTRING("center"));
			HX_STACK_LINE(60)
			this->_deincButton->set_percentWidth((int)100);
			HX_STACK_LINE(61)
			Float _g1 = this->get_layout()->__Field(HX_CSTRING("get_innerWidth"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(61)
			this->_deincButton->set_height(_g1);
			HX_STACK_LINE(62)
			this->_deincButton->set_id(HX_CSTRING("deinc"));
			HX_STACK_LINE(63)
			this->_deincButton->set_styleName(HX_CSTRING("up"));
			HX_STACK_LINE(64)
			this->_deincButton->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onDeinc_dyn(),null(),null(),null());
			HX_STACK_LINE(65)
			this->addChild(this->_deincButton);
			HX_STACK_LINE(67)
			::haxe::ui::toolkit::controls::Button _g2 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(67)
			this->_incButton = _g2;
			HX_STACK_LINE(68)
			this->_incButton->set_autoSize(false);
			HX_STACK_LINE(69)
			this->_incButton->set_iconPosition(HX_CSTRING("center"));
			HX_STACK_LINE(70)
			this->_incButton->set_percentWidth((int)100);
			HX_STACK_LINE(71)
			Float _g3 = this->get_layout()->__Field(HX_CSTRING("get_innerWidth"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(71)
			this->_incButton->set_height(_g3);
			HX_STACK_LINE(72)
			this->_incButton->set_id(HX_CSTRING("inc"));
			HX_STACK_LINE(73)
			this->_incButton->set_styleName(HX_CSTRING("down"));
			HX_STACK_LINE(74)
			this->_incButton->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onInc_dyn(),null(),null(),null());
			HX_STACK_LINE(75)
			this->addChild(this->_incButton);
		}
		HX_STACK_LINE(78)
		::haxe::ui::toolkit::controls::Button _g4 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(78)
		this->_thumb = _g4;
		HX_STACK_LINE(79)
		this->_thumb->set_iconPosition(HX_CSTRING("center"));
		HX_STACK_LINE(80)
		this->_thumb->set_autoSize(false);
		HX_STACK_LINE(81)
		this->_thumb->set_percentWidth((int)100);
		HX_STACK_LINE(82)
		this->_thumb->set_height((int)50);
		HX_STACK_LINE(83)
		this->_thumb->set_id(HX_CSTRING("thumb"));
		HX_STACK_LINE(84)
		this->_thumb->set_styleName(HX_CSTRING("thumb"));
		HX_STACK_LINE(85)
		this->_thumb->set_remainPressed(true);
		HX_STACK_LINE(86)
		this->_thumb->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onThumbMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(87)
		this->addChild(this->_thumb);
		HX_STACK_LINE(89)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),null(),null(),null());
	}
return null();
}


Void VScroll_obj::_onThumbMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onThumbMouseDown",0xadfc812e,"haxe.ui.toolkit.controls.VScroll._onThumbMouseDown","haxe/ui/toolkit/controls/VScroll.hx",95,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(96)
		::openfl::geom::Point ptStage = ::openfl::geom::Point_obj::__new(event->stageX,event->stageY);		HX_STACK_VAR(ptStage,"ptStage");
		HX_STACK_LINE(97)
		Float _g = this->_thumb->get_y();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		Float _g1 = (ptStage->y - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(97)
		this->_mouseDownOffset = _g1;
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(100)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->_onScreenMouseMove_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onThumbMouseDown,(void))

Void VScroll_obj::_onScreenMouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onScreenMouseMove",0x14334b2d,"haxe.ui.toolkit.controls.VScroll._onScreenMouseMove","haxe/ui/toolkit/controls/VScroll.hx",103,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(104)
		Float ypos = (event->stageY - this->_mouseDownOffset);		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(105)
		Float minY = (int)0;		HX_STACK_VAR(minY,"minY");
		HX_STACK_LINE(106)
		if (((this->_deincButton != null()))){
			HX_STACK_LINE(107)
			Float _g = this->_deincButton->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			int _g1 = this->get_layout()->__Field(HX_CSTRING("get_spacingY"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(107)
			Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(107)
			minY = _g2;
		}
		HX_STACK_LINE(109)
		Float _g3 = this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(109)
		Float _g4 = this->_thumb->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(109)
		Float maxY = (_g3 - _g4);		HX_STACK_VAR(maxY,"maxY");
		HX_STACK_LINE(110)
		if (((this->_deincButton != null()))){
			HX_STACK_LINE(111)
			Float _g5 = this->_deincButton->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(111)
			int _g6 = this->get_layout()->__Field(HX_CSTRING("get_spacingY"),true)();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(111)
			Float _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(111)
			hx::AddEq(maxY,_g7);
		}
		HX_STACK_LINE(113)
		if (((ypos < minY))){
			HX_STACK_LINE(114)
			ypos = minY;
		}
		else{
			HX_STACK_LINE(115)
			if (((ypos > maxY))){
				HX_STACK_LINE(116)
				ypos = maxY;
			}
		}
		HX_STACK_LINE(119)
		Float ucy = this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)();		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(120)
		Float _g8 = this->_thumb->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(120)
		hx::SubEq(ucy,_g8);
		HX_STACK_LINE(121)
		Float _g9 = this->get_max();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(121)
		Float _g10 = this->get_min();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(121)
		Float _g11 = (_g9 - _g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(121)
		int m = ::Std_obj::_int(_g11);		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(122)
		Float v = (ypos - minY);		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(123)
		Float _g12 = this->get_min();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(123)
		Float newValue = (_g12 + ((Float(v) / Float(ucy)) * m));		HX_STACK_VAR(newValue,"newValue");
		HX_STACK_LINE(124)
		int _g13 = ::Std_obj::_int(newValue);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(124)
		this->set_pos(_g13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onScreenMouseMove,(void))

Void VScroll_obj::_onScreenMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onScreenMouseUp",0x7ef14f77,"haxe.ui.toolkit.controls.VScroll._onScreenMouseUp","haxe/ui/toolkit/controls/VScroll.hx",127,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(128)
		this->_mouseDownOffset = (int)-1;
		HX_STACK_LINE(129)
		if (((this->_scrollTimer != null()))){
			HX_STACK_LINE(130)
			this->_scrollTimer->stop();
		}
		HX_STACK_LINE(132)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null());
		HX_STACK_LINE(133)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->_onScreenMouseMove_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onScreenMouseUp,(void))

Void VScroll_obj::_onDeinc( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onDeinc",0x2c05aaa0,"haxe.ui.toolkit.controls.VScroll._onDeinc","haxe/ui/toolkit/controls/VScroll.hx",136,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(137)
		this->deincrementValue();
		HX_STACK_LINE(138)
		this->_scrollDirection = (int)0;
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(140)
		if (((this->_scrollTimer == null()))){
			HX_STACK_LINE(141)
			::openfl::utils::Timer _g = ::openfl::utils::Timer_obj::__new((int)50,(int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			this->_scrollTimer = _g;
			HX_STACK_LINE(142)
			this->_scrollTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER_COMPLETE,this->_onScrollTimerComplete_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(144)
		this->_scrollTimer->reset();
		HX_STACK_LINE(145)
		this->_scrollTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onDeinc,(void))

Void VScroll_obj::_onInc( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onInc",0x5e631cc1,"haxe.ui.toolkit.controls.VScroll._onInc","haxe/ui/toolkit/controls/VScroll.hx",148,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(149)
		this->incrementValue();
		HX_STACK_LINE(150)
		this->_scrollDirection = (int)1;
		HX_STACK_LINE(151)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(152)
		if (((this->_scrollTimer == null()))){
			HX_STACK_LINE(153)
			::openfl::utils::Timer _g = ::openfl::utils::Timer_obj::__new((int)50,(int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(153)
			this->_scrollTimer = _g;
			HX_STACK_LINE(154)
			this->_scrollTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER_COMPLETE,this->_onScrollTimerComplete_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(156)
		this->_scrollTimer->reset();
		HX_STACK_LINE(157)
		this->_scrollTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onInc,(void))

Void VScroll_obj::_onScrollTimerComplete( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onScrollTimerComplete",0x46924334,"haxe.ui.toolkit.controls.VScroll._onScrollTimerComplete","haxe/ui/toolkit/controls/VScroll.hx",161,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(161)
		if (((this->_scrollTimer != null()))){
			HX_STACK_LINE(162)
			if (((this->_scrollDirection == (int)1))){
				HX_STACK_LINE(163)
				this->incrementValue();
			}
			else{
				HX_STACK_LINE(164)
				if (((this->_scrollDirection == (int)0))){
					HX_STACK_LINE(165)
					this->deincrementValue();
				}
			}
			HX_STACK_LINE(167)
			this->_scrollTimer->reset();
			HX_STACK_LINE(168)
			this->_scrollTimer->start();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onScrollTimerComplete,(void))

Void VScroll_obj::_onMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","_onMouseDown",0x3e934d4a,"haxe.ui.toolkit.controls.VScroll._onMouseDown","haxe/ui/toolkit/controls/VScroll.hx",172,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(173)
		bool performPaging = !(this->_thumb->hitTest(event->stageX,event->stageY));		HX_STACK_VAR(performPaging,"performPaging");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::VScroll_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/VScroll.hx",174,0xae74d851)
				{
					HX_STACK_LINE(174)
					bool _g = __this->_deincButton->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(174)
					return (_g == true);
				}
				return null();
			}
		};
		HX_STACK_LINE(174)
		if (((  (((this->_deincButton != null()))) ? bool(_Function_1_1::Block(this,event)) : bool(false) ))){
			HX_STACK_LINE(175)
			performPaging = false;
		}
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::VScroll_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/VScroll.hx",177,0xae74d851)
				{
					HX_STACK_LINE(177)
					bool _g1 = __this->_incButton->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(177)
					return (_g1 == true);
				}
				return null();
			}
		};
		HX_STACK_LINE(177)
		if (((  (((this->_incButton != null()))) ? bool(_Function_1_2::Block(this,event)) : bool(false) ))){
			HX_STACK_LINE(178)
			performPaging = false;
		}
		HX_STACK_LINE(180)
		if (((performPaging == true))){
			HX_STACK_LINE(181)
			Float _g2 = this->_thumb->get_y();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(181)
			if (((event->localY > _g2))){
				HX_STACK_LINE(182)
				::haxe::ui::toolkit::controls::VScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(182)
				Float _g3 = _g->get_pos();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(182)
				Float _g4 = this->get_pageSize();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(182)
				Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(182)
				_g->set_pos(_g5);
			}
			else{
				HX_STACK_LINE(184)
				::haxe::ui::toolkit::controls::VScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(184)
				Float _g6 = _g->get_pos();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(184)
				Float _g7 = this->get_pageSize();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(184)
				Float _g8 = (_g6 - _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(184)
				_g->set_pos(_g8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,_onMouseDown,(void))

Float VScroll_obj::get_pos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_pos",0x0863e28a,"haxe.ui.toolkit.controls.VScroll.get_pos","haxe/ui/toolkit/controls/VScroll.hx",219,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(219)
	return this->_pos;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_pos,return )

Float VScroll_obj::set_pos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_pos",0xfb657396,"haxe.ui.toolkit.controls.VScroll.set_pos","haxe/ui/toolkit/controls/VScroll.hx",222,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(223)
	if (((value < this->_min))){
		HX_STACK_LINE(224)
		value = this->_min;
	}
	HX_STACK_LINE(226)
	if (((value > this->_max))){
		HX_STACK_LINE(227)
		value = this->_max;
	}
	HX_STACK_LINE(229)
	if (((value != this->_pos))){
		HX_STACK_LINE(230)
		this->_pos = value;
		HX_STACK_LINE(231)
		::openfl::events::Event changeEvent = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(changeEvent,"changeEvent");
		HX_STACK_LINE(232)
		this->dispatchEvent(changeEvent);
		HX_STACK_LINE(233)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(235)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_pos,return )

Float VScroll_obj::get_min( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_min",0x08619688,"haxe.ui.toolkit.controls.VScroll.get_min","haxe/ui/toolkit/controls/VScroll.hx",239,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(239)
	return this->_min;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_min,return )

Float VScroll_obj::set_min( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_min",0xfb632794,"haxe.ui.toolkit.controls.VScroll.set_min","haxe/ui/toolkit/controls/VScroll.hx",242,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(243)
	if (((value != this->_min))){
		HX_STACK_LINE(244)
		this->_min = value;
		HX_STACK_LINE(245)
		if (((this->_pos < this->_min))){
			HX_STACK_LINE(246)
			this->_pos = this->_min;
		}
		HX_STACK_LINE(248)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(250)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_min,return )

Float VScroll_obj::get_max( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_max",0x08618f9a,"haxe.ui.toolkit.controls.VScroll.get_max","haxe/ui/toolkit/controls/VScroll.hx",254,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	return this->_max;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_max,return )

Float VScroll_obj::set_max( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_max",0xfb6320a6,"haxe.ui.toolkit.controls.VScroll.set_max","haxe/ui/toolkit/controls/VScroll.hx",257,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(258)
	if (((value != this->_max))){
		HX_STACK_LINE(259)
		this->_max = value;
		HX_STACK_LINE(260)
		if (((this->_pos > this->_max))){
			HX_STACK_LINE(261)
			this->_pos = this->_max;
		}
		HX_STACK_LINE(263)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(265)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_max,return )

Float VScroll_obj::get_pageSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_pageSize",0xd1b939fa,"haxe.ui.toolkit.controls.VScroll.get_pageSize","haxe/ui/toolkit/controls/VScroll.hx",269,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(269)
	return this->_pageSize;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_pageSize,return )

Float VScroll_obj::set_pageSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_pageSize",0xe6b25d6e,"haxe.ui.toolkit.controls.VScroll.set_pageSize","haxe/ui/toolkit/controls/VScroll.hx",272,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(273)
	if (((value != this->_pageSize))){
		HX_STACK_LINE(274)
		this->_pageSize = value;
		HX_STACK_LINE(275)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(277)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_pageSize,return )

Float VScroll_obj::get_incrementSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","get_incrementSize",0xb692ab06,"haxe.ui.toolkit.controls.VScroll.get_incrementSize","haxe/ui/toolkit/controls/VScroll.hx",281,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	return this->_incrementSize;
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,get_incrementSize,return )

Float VScroll_obj::set_incrementSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","set_incrementSize",0xda008312,"haxe.ui.toolkit.controls.VScroll.set_incrementSize","haxe/ui/toolkit/controls/VScroll.hx",284,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(285)
	this->_incrementSize = value;
	HX_STACK_LINE(286)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(VScroll_obj,set_incrementSize,return )

Void VScroll_obj::deincrementValue( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","deincrementValue",0x2a7e75c4,"haxe.ui.toolkit.controls.VScroll.deincrementValue","haxe/ui/toolkit/controls/VScroll.hx",296,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(296)
		::haxe::ui::toolkit::controls::VScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(296)
		Float _g1 = _g->get_pos();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(296)
		Float _g11 = (_g1 - this->_incrementSize);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(296)
		_g->set_pos(_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,deincrementValue,(void))

Void VScroll_obj::incrementValue( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","incrementValue",0x9e853c43,"haxe.ui.toolkit.controls.VScroll.incrementValue","haxe/ui/toolkit/controls/VScroll.hx",303,0xae74d851)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		::haxe::ui::toolkit::controls::VScroll _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(303)
		Float _g1 = _g->get_pos();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(303)
		Float _g11 = (_g1 + this->_incrementSize);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(303)
		_g->set_pos(_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VScroll_obj,incrementValue,(void))

Dynamic VScroll_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","clone",0xf5f2a9fc,"haxe.ui.toolkit.controls.VScroll.clone","haxe/ui/toolkit/controls/VScroll.hx",1,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::VScroll c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	Float _g = this->get_pos();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_pos(_g);
	HX_STACK_LINE(4)
	Float _g1 = this->get_min();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4)
	c->set_min(_g1);
	HX_STACK_LINE(5)
	Float _g2 = this->get_max();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(5)
	c->set_max(_g2);
	HX_STACK_LINE(6)
	Float _g3 = this->get_pageSize();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(6)
	c->set_pageSize(_g3);
	HX_STACK_LINE(7)
	Float _g4 = this->get_incrementSize();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(7)
	c->set_incrementSize(_g4);
	HX_STACK_LINE(8)
	return c;
}


Dynamic VScroll_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VScroll","self",0xa456edcd,"haxe.ui.toolkit.controls.VScroll.self","haxe/ui/toolkit/controls/VScroll.hx",2,0xae74d851)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::VScroll_obj::__new();
}



VScroll_obj::VScroll_obj()
{
}

void VScroll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VScroll);
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_pageSize,"_pageSize");
	HX_MARK_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_MARK_MEMBER_NAME(_deincButton,"_deincButton");
	HX_MARK_MEMBER_NAME(_incButton,"_incButton");
	HX_MARK_MEMBER_NAME(_thumb,"_thumb");
	HX_MARK_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	HX_MARK_MEMBER_NAME(_scrollDirection,"_scrollDirection");
	HX_MARK_MEMBER_NAME(_scrollTimer,"_scrollTimer");
	HX_MARK_MEMBER_NAME(_hasButtons,"_hasButtons");
	::haxe::ui::toolkit::controls::Scroll_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VScroll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_min,"_min");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_pageSize,"_pageSize");
	HX_VISIT_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_VISIT_MEMBER_NAME(_deincButton,"_deincButton");
	HX_VISIT_MEMBER_NAME(_incButton,"_incButton");
	HX_VISIT_MEMBER_NAME(_thumb,"_thumb");
	HX_VISIT_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	HX_VISIT_MEMBER_NAME(_scrollDirection,"_scrollDirection");
	HX_VISIT_MEMBER_NAME(_scrollTimer,"_scrollTimer");
	HX_VISIT_MEMBER_NAME(_hasButtons,"_hasButtons");
	::haxe::ui::toolkit::controls::Scroll_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VScroll_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return get_pos(); }
		if (HX_FIELD_EQ(inName,"min") ) { return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { return get_max(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { return _pos; }
		if (HX_FIELD_EQ(inName,"_min") ) { return _min; }
		if (HX_FIELD_EQ(inName,"_max") ) { return _max; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { return _thumb; }
		if (HX_FIELD_EQ(inName,"_onInc") ) { return _onInc_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_onDeinc") ) { return _onDeinc_dyn(); }
		if (HX_FIELD_EQ(inName,"pageSize") ) { return get_pageSize(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_pageSize") ) { return _pageSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { return _incButton; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { return _hasButtons; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { return _deincButton; }
		if (HX_FIELD_EQ(inName,"_scrollTimer") ) { return _scrollTimer; }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pageSize") ) { return get_pageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pageSize") ) { return set_pageSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"incrementSize") ) { return get_incrementSize(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { return _incrementSize; }
		if (HX_FIELD_EQ(inName,"incrementValue") ) { return incrementValue_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { return _mouseDownOffset; }
		if (HX_FIELD_EQ(inName,"_scrollDirection") ) { return _scrollDirection; }
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return _onScreenMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"deincrementValue") ) { return deincrementValue_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onThumbMouseDown") ) { return _onThumbMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"get_incrementSize") ) { return get_incrementSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_incrementSize") ) { return set_incrementSize_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_onScrollTimerComplete") ) { return _onScrollTimerComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VScroll_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return set_pos(inValue); }
		if (HX_FIELD_EQ(inName,"min") ) { return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { return set_max(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { _thumb=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { return set_pageSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_pageSize") ) { _pageSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_incButton") ) { _incButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { _hasButtons=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_deincButton") ) { _deincButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollTimer") ) { _scrollTimer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"incrementSize") ) { return set_incrementSize(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { _incrementSize=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { _mouseDownOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollDirection") ) { _scrollDirection=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VScroll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_pos"));
	outFields->push(HX_CSTRING("_min"));
	outFields->push(HX_CSTRING("_max"));
	outFields->push(HX_CSTRING("_pageSize"));
	outFields->push(HX_CSTRING("_incrementSize"));
	outFields->push(HX_CSTRING("_deincButton"));
	outFields->push(HX_CSTRING("_incButton"));
	outFields->push(HX_CSTRING("_thumb"));
	outFields->push(HX_CSTRING("_mouseDownOffset"));
	outFields->push(HX_CSTRING("_scrollDirection"));
	outFields->push(HX_CSTRING("_scrollTimer"));
	outFields->push(HX_CSTRING("_hasButtons"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("pageSize"));
	outFields->push(HX_CSTRING("incrementSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(VScroll_obj,_pos),HX_CSTRING("_pos")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_min),HX_CSTRING("_min")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_max),HX_CSTRING("_max")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_pageSize),HX_CSTRING("_pageSize")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_incrementSize),HX_CSTRING("_incrementSize")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(VScroll_obj,_deincButton),HX_CSTRING("_deincButton")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(VScroll_obj,_incButton),HX_CSTRING("_incButton")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(VScroll_obj,_thumb),HX_CSTRING("_thumb")},
	{hx::fsFloat,(int)offsetof(VScroll_obj,_mouseDownOffset),HX_CSTRING("_mouseDownOffset")},
	{hx::fsInt,(int)offsetof(VScroll_obj,_scrollDirection),HX_CSTRING("_scrollDirection")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(VScroll_obj,_scrollTimer),HX_CSTRING("_scrollTimer")},
	{hx::fsBool,(int)offsetof(VScroll_obj,_hasButtons),HX_CSTRING("_hasButtons")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_pos"),
	HX_CSTRING("_min"),
	HX_CSTRING("_max"),
	HX_CSTRING("_pageSize"),
	HX_CSTRING("_incrementSize"),
	HX_CSTRING("_deincButton"),
	HX_CSTRING("_incButton"),
	HX_CSTRING("_thumb"),
	HX_CSTRING("_mouseDownOffset"),
	HX_CSTRING("_scrollDirection"),
	HX_CSTRING("_scrollTimer"),
	HX_CSTRING("_hasButtons"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("_onThumbMouseDown"),
	HX_CSTRING("_onScreenMouseMove"),
	HX_CSTRING("_onScreenMouseUp"),
	HX_CSTRING("_onDeinc"),
	HX_CSTRING("_onInc"),
	HX_CSTRING("_onScrollTimerComplete"),
	HX_CSTRING("_onMouseDown"),
	HX_CSTRING("get_pos"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("get_min"),
	HX_CSTRING("set_min"),
	HX_CSTRING("get_max"),
	HX_CSTRING("set_max"),
	HX_CSTRING("get_pageSize"),
	HX_CSTRING("set_pageSize"),
	HX_CSTRING("get_incrementSize"),
	HX_CSTRING("set_incrementSize"),
	HX_CSTRING("deincrementValue"),
	HX_CSTRING("incrementValue"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VScroll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VScroll_obj::__mClass,"__mClass");
};

#endif

Class VScroll_obj::__mClass;

void VScroll_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.VScroll"), hx::TCanCast< VScroll_obj> ,sStaticFields,sMemberFields,
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

void VScroll_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
