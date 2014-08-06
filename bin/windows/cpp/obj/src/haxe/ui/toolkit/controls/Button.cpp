#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_BoxLayout
#include <haxe/ui/toolkit/layout/BoxLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Button_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","new",0x29238d7a,"haxe.ui.toolkit.controls.Button.new","haxe/ui/toolkit/controls/Button.hx",44,0x493ac9f6)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(428)
	this->dispatchChangeEvents = true;
	HX_STACK_LINE(72)
	this->_iconPosition = HX_CSTRING("left");
	HX_STACK_LINE(71)
	this->_allowSelection = true;
	HX_STACK_LINE(70)
	this->_selected = false;
	HX_STACK_LINE(69)
	this->_toggle = false;
	HX_STACK_LINE(68)
	this->_down = false;
	HX_STACK_LINE(63)
	this->_remainPressed = false;
	HX_STACK_LINE(62)
	this->_allowFocus = true;
	HX_STACK_LINE(81)
	super::__construct();
	HX_STACK_LINE(83)
	this->get_sprite()->buttonMode = true;
	HX_STACK_LINE(84)
	this->get_sprite()->useHandCursor = true;
	HX_STACK_LINE(85)
	this->set_state(HX_CSTRING("normal"));
	HX_STACK_LINE(86)
	::haxe::ui::toolkit::layout::HorizontalLayout _g = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(86)
	this->_layout = _g;
	HX_STACK_LINE(87)
	this->set_autoSize(true);
	HX_STACK_LINE(89)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(89)
	this->_spacers = _g1;
	HX_STACK_LINE(90)
	if (((::haxe::ui::toolkit::controls::Button_obj::_groups == null()))){
		HX_STACK_LINE(91)
		::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(91)
		::haxe::ui::toolkit::controls::Button_obj::_groups = _g2;
	}
}
;
	return null();
}

//Button_obj::~Button_obj() { }

Dynamic Button_obj::__CreateEmpty() { return  new Button_obj; }
hx::ObjectPtr< Button_obj > Button_obj::__new()
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct();
	return result;}

Dynamic Button_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Button_obj > result = new Button_obj();
	result->__construct();
	return result;}

hx::Object *Button_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IFocusable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IFocusable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Void Button_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","dispose",0xaba9d2b9,"haxe.ui.toolkit.controls.Button.dispose","haxe/ui/toolkit/controls/Button.hx",95,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(98)
		::String _g = this->get_group();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		if (((_g != null()))){
			HX_STACK_LINE(99)
			Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::Button_obj::_groups->get(this->_group);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(100)
			arr->remove(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(103)
		this->super::dispose();
	}
return null();
}


bool Button_obj::get_remainPressed( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_remainPressed",0x1d111087,"haxe.ui.toolkit.controls.Button.get_remainPressed","haxe/ui/toolkit/controls/Button.hx",121,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	return this->_remainPressed;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_remainPressed,return )

bool Button_obj::set_remainPressed( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_remainPressed",0x407ee893,"haxe.ui.toolkit.controls.Button.set_remainPressed","haxe/ui/toolkit/controls/Button.hx",124,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(125)
	this->_remainPressed = value;
	HX_STACK_LINE(126)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_remainPressed,return )

Dynamic Button_obj::get_icon( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_icon",0x26b827a8,"haxe.ui.toolkit.controls.Button.get_icon","haxe/ui/toolkit/controls/Button.hx",129,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	if (((this->_icon == null()))){
		HX_STACK_LINE(131)
		return null();
	}
	HX_STACK_LINE(133)
	return this->_icon->get_resource();
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_icon,return )

Dynamic Button_obj::set_icon( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_icon",0xd515811c,"haxe.ui.toolkit.controls.Button.set_icon","haxe/ui/toolkit/controls/Button.hx",136,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(137)
	if (((value != null()))){
		HX_STACK_LINE(138)
		if (((this->_icon == null()))){
			HX_STACK_LINE(139)
			::haxe::ui::toolkit::controls::Image _g = ::haxe::ui::toolkit::controls::Image_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(139)
			this->_icon = _g;
			HX_STACK_LINE(140)
			this->_icon->set_id(HX_CSTRING("icon"));
		}
		HX_STACK_LINE(142)
		Dynamic _g1 = this->_icon->get_resource();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(142)
		if (((_g1 != value))){
			HX_STACK_LINE(143)
			this->_icon->set_resource(value);
			HX_STACK_LINE(144)
			this->organiseChildren();
		}
	}
	else{
		HX_STACK_LINE(147)
		if (((this->_icon != null()))){
			HX_STACK_LINE(148)
			this->_icon->set_visible(false);
		}
	}
	HX_STACK_LINE(151)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_icon,return )

Void Button_obj::organiseChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","organiseChildren",0x75dce00f,"haxe.ui.toolkit.controls.Button.organiseChildren","haxe/ui/toolkit/controls/Button.hx",154,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(155)
		if (((this->_ready == false))){
			HX_STACK_LINE(156)
			return null();
		}
		HX_STACK_LINE(158)
		this->removeAllChildren(false);
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(159)
			Array< ::Dynamic > _g1 = this->_spacers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(159)
			while((true)){
				HX_STACK_LINE(159)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(159)
					break;
				}
				HX_STACK_LINE(159)
				::haxe::ui::toolkit::controls::Spacer s = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::Spacer >();		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(159)
				++(_g);
				HX_STACK_LINE(160)
				s->dispose();
			}
		}
		HX_STACK_LINE(162)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		this->_spacers = _g;
		HX_STACK_LINE(164)
		if (((bool((this->_iconPosition == HX_CSTRING("left"))) || bool((this->_iconPosition == HX_CSTRING("right")))))){
			HX_STACK_LINE(165)
			::haxe::ui::toolkit::layout::HorizontalLayout _g1 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(165)
			this->set_layout(_g1);
		}
		else{
			HX_STACK_LINE(166)
			if (((bool((this->_iconPosition == HX_CSTRING("top"))) || bool((this->_iconPosition == HX_CSTRING("bottom")))))){
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::Button_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Button.hx",167,0x493ac9f6)
						{
							HX_STACK_LINE(167)
							Float _g2 = __this->_label->get_width();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(167)
							Float _g3 = __this->_icon->get_width();		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(167)
							return (_g2 < _g3);
						}
						return null();
					}
				};
				HX_STACK_LINE(167)
				if (((  (((bool((this->_label != null())) && bool((this->_icon != null()))))) ? bool(_Function_3_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(168)
					this->_label->set_autoSize(false);
					HX_STACK_LINE(169)
					Float _g4 = this->_icon->get_width();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(169)
					this->_label->set_width(_g4);
				}
				HX_STACK_LINE(172)
				::haxe::ui::toolkit::layout::VerticalLayout _g5 = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(172)
				this->set_layout(_g5);
				HX_STACK_LINE(173)
				if (((this->_autoSize == false))){
					HX_STACK_LINE(174)
					::haxe::ui::toolkit::controls::Spacer spacer = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer,"spacer");
					HX_STACK_LINE(175)
					spacer->set_percentHeight((int)50);
					HX_STACK_LINE(176)
					this->addChild(spacer);
					HX_STACK_LINE(177)
					this->_spacers->push(spacer);
				}
			}
			else{
				HX_STACK_LINE(180)
				::haxe::ui::toolkit::layout::BoxLayout _g6 = ::haxe::ui::toolkit::layout::BoxLayout_obj::__new();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(180)
				this->set_layout(_g6);
			}
		}
		HX_STACK_LINE(183)
		if (((this->_icon != null()))){
			HX_STACK_LINE(184)
			this->_icon->set_horizontalAlign(HX_CSTRING("center"));
			HX_STACK_LINE(185)
			this->_icon->set_verticalAlign(HX_CSTRING("center"));
		}
		HX_STACK_LINE(188)
		if (((this->_label != null()))){
			HX_STACK_LINE(189)
			bool _g7 = this->get_autoSize();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(189)
			if (((_g7 == false))){
				HX_STACK_LINE(190)
				this->_label->set_percentWidth((int)100);
				HX_STACK_LINE(191)
				this->_label->set_autoSize(false);
				HX_STACK_LINE(192)
				this->_label->set_textAlign(HX_CSTRING("center"));
			}
			else{
				HX_STACK_LINE(194)
				this->_label->set_percentWidth((int)-1);
				HX_STACK_LINE(196)
				this->_label->set_textAlign(HX_CSTRING("center"));
			}
		}
		HX_STACK_LINE(200)
		if (((bool((this->_iconPosition == HX_CSTRING("left"))) || bool((this->_iconPosition == HX_CSTRING("top")))))){
			HX_STACK_LINE(201)
			this->addChild(this->_icon);
			HX_STACK_LINE(202)
			this->addChild(this->_label);
		}
		else{
			HX_STACK_LINE(203)
			if (((bool((this->_iconPosition == HX_CSTRING("right"))) || bool((this->_iconPosition == HX_CSTRING("bottom")))))){
				HX_STACK_LINE(204)
				this->addChild(this->_label);
				HX_STACK_LINE(205)
				if (((bool((this->_autoSize == true)) && bool((this->_iconPosition == HX_CSTRING("right")))))){
					HX_STACK_LINE(206)
					::haxe::ui::toolkit::controls::Spacer spacer = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer,"spacer");
					HX_STACK_LINE(207)
					spacer->set_percentWidth((int)100);
					HX_STACK_LINE(208)
					this->addChild(spacer);
					HX_STACK_LINE(209)
					this->_spacers->push(spacer);
				}
				HX_STACK_LINE(211)
				this->addChild(this->_icon);
			}
			else{
				HX_STACK_LINE(213)
				this->addChild(this->_icon);
				HX_STACK_LINE(214)
				this->addChild(this->_label);
			}
		}
		HX_STACK_LINE(217)
		if (((bool((this->_iconPosition == HX_CSTRING("top"))) || bool((this->_iconPosition == HX_CSTRING("bottom")))))){
			HX_STACK_LINE(218)
			if (((this->_autoSize == false))){
				HX_STACK_LINE(219)
				::haxe::ui::toolkit::controls::Spacer spacer = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(spacer,"spacer");
				HX_STACK_LINE(220)
				spacer->set_percentHeight((int)50);
				HX_STACK_LINE(221)
				this->addChild(spacer);
				HX_STACK_LINE(222)
				this->_spacers->push(spacer);
			}
		}
		HX_STACK_LINE(226)
		if (((bool((this->_iconPosition == HX_CSTRING("fill"))) && bool((this->_icon != null()))))){
			HX_STACK_LINE(227)
			this->_icon->set_stretch(true);
			HX_STACK_LINE(228)
			Float _g8 = this->get_width();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(228)
			this->_icon->set_width(_g8);
			HX_STACK_LINE(229)
			Float _g9 = this->get_height();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(229)
			this->_icon->set_height(_g9);
		}
		HX_STACK_LINE(232)
		this->invalidate((int)1048576,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,organiseChildren,(void))

Void Button_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","preInitialize",0xb3f720ed,"haxe.ui.toolkit.controls.Button.preInitialize","haxe/ui/toolkit/controls/Button.hx",239,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(239)
		this->super::preInitialize();
	}
return null();
}


Void Button_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","initialize",0x192cab76,"haxe.ui.toolkit.controls.Button.initialize","haxe/ui/toolkit/controls/Button.hx",242,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(243)
		this->super::initialize();
		HX_STACK_LINE(245)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OVER,this->_onMouseOver_dyn(),null(),null(),null());
		HX_STACK_LINE(246)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->_onMouseOut_dyn(),null(),null(),null());
		HX_STACK_LINE(247)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(248)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(249)
		this->addEventListener(::openfl::events::MouseEvent_obj::CLICK,this->_onMouseClick_dyn(),null(),null(),null());
		HX_STACK_LINE(251)
		this->organiseChildren();
	}
return null();
}


bool Button_obj::set_disabled( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_disabled",0x8d77e89f,"haxe.ui.toolkit.controls.Button.set_disabled","haxe/ui/toolkit/controls/Button.hx",254,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(255)
	this->super::set_disabled(value);
	HX_STACK_LINE(256)
	if (((value == true))){
		HX_STACK_LINE(257)
		this->get_sprite()->buttonMode = false;
		HX_STACK_LINE(258)
		this->get_sprite()->useHandCursor = false;
	}
	else{
		HX_STACK_LINE(261)
		this->get_sprite()->buttonMode = true;
		HX_STACK_LINE(262)
		this->get_sprite()->useHandCursor = true;
	}
	HX_STACK_LINE(265)
	return value;
}


::String Button_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_text",0x2dff0cdc,"haxe.ui.toolkit.controls.Button.get_text","haxe/ui/toolkit/controls/Button.hx",271,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	if (((this->_label == null()))){
		HX_STACK_LINE(273)
		return null();
	}
	HX_STACK_LINE(275)
	return this->_label->get_text();
}


::String Button_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_text",0xdc5c6650,"haxe.ui.toolkit.controls.Button.set_text","haxe/ui/toolkit/controls/Button.hx",278,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(279)
	::String _g = this->super::set_text(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(279)
	value = _g;
	HX_STACK_LINE(281)
	if (((value != null()))){
		HX_STACK_LINE(282)
		if (((this->_label == null()))){
			HX_STACK_LINE(283)
			::haxe::ui::toolkit::controls::Text _g1 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(283)
			this->_label = _g1;
			HX_STACK_LINE(284)
			this->_label->set_id(HX_CSTRING("label"));
			HX_STACK_LINE(285)
			this->_label->set_multiline(this->_multiline);
			HX_STACK_LINE(286)
			this->_label->set_wrapLines(this->_multiline);
		}
		HX_STACK_LINE(288)
		this->_label->set_value(value);
		HX_STACK_LINE(289)
		this->organiseChildren();
	}
	else{
		HX_STACK_LINE(291)
		if (((this->_label != null()))){
			HX_STACK_LINE(292)
			this->_label->set_visible(false);
		}
	}
	HX_STACK_LINE(295)
	return value;
}


Void Button_obj::_onMouseOver( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseOver",0xc5baaaa1,"haxe.ui.toolkit.controls.Button._onMouseOver","haxe/ui/toolkit/controls/Button.hx",302,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(302)
		if (((this->_selected == false))){
			HX_STACK_LINE(303)
			if (((bool((event->buttonDown == false)) || bool((this->_down == false))))){
				HX_STACK_LINE(304)
				this->set_state(HX_CSTRING("over"));
			}
			else{
				HX_STACK_LINE(306)
				this->set_state(HX_CSTRING("down"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseOver,(void))

Void Button_obj::_onMouseOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseOut",0x0b37efe1,"haxe.ui.toolkit.controls.Button._onMouseOut","haxe/ui/toolkit/controls/Button.hx",312,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(312)
		if (((this->_selected == false))){
			HX_STACK_LINE(313)
			if (((bool((this->_remainPressed == false)) || bool((event->buttonDown == false))))){
				HX_STACK_LINE(314)
				this->set_state(HX_CSTRING("normal"));
			}
			else{
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseOut,(void))

Void Button_obj::_onMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseDown",0xbe7011af,"haxe.ui.toolkit.controls.Button._onMouseDown","haxe/ui/toolkit/controls/Button.hx",322,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(322)
		if (((this->_allowSelection == true))){
			HX_STACK_LINE(323)
			this->_down = true;
			HX_STACK_LINE(324)
			this->set_state(HX_CSTRING("down"));
			HX_STACK_LINE(325)
			::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseDown,(void))

Void Button_obj::_onMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseUp",0x2031a268,"haxe.ui.toolkit.controls.Button._onMouseUp","haxe/ui/toolkit/controls/Button.hx",330,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::Button_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Button.hx",330,0x493ac9f6)
				{
					HX_STACK_LINE(330)
					bool _g = __this->get_toggle();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(330)
					return (_g == false);
				}
				return null();
			}
		};
		HX_STACK_LINE(330)
		if (((  (((this->_allowSelection == true))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(331)
			this->_down = false;
			HX_STACK_LINE(332)
			if ((this->hitTest(event->stageX,event->stageY))){
				HX_STACK_LINE(334)
				this->set_state(HX_CSTRING("over"));
			}
			else{
				HX_STACK_LINE(339)
				this->set_state(HX_CSTRING("normal"));
			}
			HX_STACK_LINE(343)
			::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onMouseUp_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseUp,(void))

Void Button_obj::_onMouseClick( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","_onMouseClick",0x4e32865b,"haxe.ui.toolkit.controls.Button._onMouseClick","haxe/ui/toolkit/controls/Button.hx",348,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(349)
		if (((  (((this->_icon != null()))) ? bool(this->_icon->hitTest(event->stageX,event->stageY)) : bool(false) ))){
			HX_STACK_LINE(350)
			::haxe::ui::toolkit::events::UIEvent _g = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_glyphClick"),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(350)
			this->dispatchEvent(_g);
		}
		HX_STACK_LINE(352)
		if (((bool((this->_toggle == true)) && bool((this->_allowSelection == true))))){
			HX_STACK_LINE(353)
			bool _g1 = !(this->get_selected());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(353)
			this->set_selected(_g1);
			HX_STACK_LINE(355)
			bool _g2 = this->get_selected();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(355)
			if (((  (((_g2 == false))) ? bool(this->hitTest(event->stageX,event->stageY)) : bool(false) ))){
				HX_STACK_LINE(356)
				this->set_state(HX_CSTRING("over"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,_onMouseClick,(void))

Array< ::String > Button_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_states",0x22f4c331,"haxe.ui.toolkit.controls.Button.get_states","haxe/ui/toolkit/controls/Button.hx",366,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(366)
	return Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("over")).Add(HX_CSTRING("down")).Add(HX_CSTRING("disabled"));
}


::String Button_obj::set_state( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_state",0x6aef4b0e,"haxe.ui.toolkit.controls.Button.set_state","haxe/ui/toolkit/controls/Button.hx",369,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(370)
	this->super::set_state(value);
	HX_STACK_LINE(371)
	if (((value == HX_CSTRING("down")))){
		HX_STACK_LINE(372)
		this->_down = true;
	}
	HX_STACK_LINE(374)
	return value;
}


bool Button_obj::get_allowFocus( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_allowFocus",0x223b27fe,"haxe.ui.toolkit.controls.Button.get_allowFocus","haxe/ui/toolkit/controls/Button.hx",387,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(387)
	return this->_allowFocus;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_allowFocus,return )

bool Button_obj::set_allowFocus( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_allowFocus",0x425b1072,"haxe.ui.toolkit.controls.Button.set_allowFocus","haxe/ui/toolkit/controls/Button.hx",391,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(391)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_allowFocus,return )

::String Button_obj::get_iconPosition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_iconPosition",0x78d06c71,"haxe.ui.toolkit.controls.Button.get_iconPosition","haxe/ui/toolkit/controls/Button.hx",434,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(434)
	return this->_iconPosition;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_iconPosition,return )

::String Button_obj::set_iconPosition( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_iconPosition",0xcf1259e5,"haxe.ui.toolkit.controls.Button.set_iconPosition","haxe/ui/toolkit/controls/Button.hx",437,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(438)
	if (((this->_iconPosition != value))){
		HX_STACK_LINE(439)
		this->_iconPosition = value;
		HX_STACK_LINE(440)
		this->organiseChildren();
	}
	HX_STACK_LINE(442)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_iconPosition,return )

bool Button_obj::get_toggle( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_toggle",0xac3ca983,"haxe.ui.toolkit.controls.Button.get_toggle","haxe/ui/toolkit/controls/Button.hx",446,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(446)
	return this->_toggle;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_toggle,return )

bool Button_obj::set_toggle( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_toggle",0xafba47f7,"haxe.ui.toolkit.controls.Button.set_toggle","haxe/ui/toolkit/controls/Button.hx",449,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(450)
	this->_toggle = value;
	HX_STACK_LINE(451)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_toggle,return )

bool Button_obj::get_selected( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_selected",0xade7ae0a,"haxe.ui.toolkit.controls.Button.get_selected","haxe/ui/toolkit/controls/Button.hx",455,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(455)
	return this->_selected;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_selected,return )

bool Button_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_selected",0xc2e0d17e,"haxe.ui.toolkit.controls.Button.set_selected","haxe/ui/toolkit/controls/Button.hx",458,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(459)
	if (((bool((this->_toggle == true)) && bool((this->_selected != value))))){
		HX_STACK_LINE(463)
		if (((bool((this->_group != null())) && bool((value == true))))){
			HX_STACK_LINE(464)
			Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::Button_obj::_groups->get(this->_group);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(465)
			if (((arr != null()))){
				HX_STACK_LINE(466)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(466)
				while((true)){
					HX_STACK_LINE(466)
					if ((!(((_g < arr->length))))){
						HX_STACK_LINE(466)
						break;
					}
					HX_STACK_LINE(466)
					::haxe::ui::toolkit::controls::Button button = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(button,"button");
					HX_STACK_LINE(466)
					++(_g);
					HX_STACK_LINE(467)
					if (((button != hx::ObjectPtr<OBJ_>(this)))){
						HX_STACK_LINE(468)
						button->set_selected(false);
					}
				}
			}
		}
		HX_STACK_LINE(474)
		this->_selected = value;
		HX_STACK_LINE(475)
		if (((this->dispatchChangeEvents == true))){
			HX_STACK_LINE(476)
			::haxe::ui::toolkit::events::UIEvent event = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_change"),null(),null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(477)
			this->dispatchEvent(event);
		}
	}
	HX_STACK_LINE(481)
	this->_selected = value;
	HX_STACK_LINE(482)
	if (((this->_selected == true))){
		HX_STACK_LINE(483)
		this->set_state(HX_CSTRING("down"));
	}
	else{
		HX_STACK_LINE(486)
		::haxe::ui::toolkit::core::Root _g = this->get_root();		HX_STACK_VAR(_g,"_g");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::Button_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Button.hx",486,0x493ac9f6)
				{
					HX_STACK_LINE(486)
					bool _g1 = __this->hitTest(__this->get_root()->get_mousePosition()->x,__this->get_root()->get_mousePosition()->y);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(486)
					return (_g1 == true);
				}
				return null();
			}
		};
		HX_STACK_LINE(486)
		if (((  (((_g != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(487)
			this->set_state(HX_CSTRING("over"));
		}
		else{
			HX_STACK_LINE(489)
			this->set_state(HX_CSTRING("normal"));
		}
	}
	HX_STACK_LINE(496)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_selected,return )

::String Button_obj::get_group( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_group",0x9d879c30,"haxe.ui.toolkit.controls.Button.get_group","haxe/ui/toolkit/controls/Button.hx",500,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(500)
	return this->_group;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_group,return )

::String Button_obj::set_group( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_group",0x80d8883c,"haxe.ui.toolkit.controls.Button.set_group","haxe/ui/toolkit/controls/Button.hx",503,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(504)
	if (((value != null()))){
		HX_STACK_LINE(505)
		Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::Button_obj::_groups->get(value);		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(506)
		if (((arr != null()))){
			HX_STACK_LINE(507)
			arr->remove(hx::ObjectPtr<OBJ_>(this));
		}
	}
	HX_STACK_LINE(511)
	this->_group = value;
	HX_STACK_LINE(512)
	if (((value == null()))){
		HX_STACK_LINE(513)
		return value;
	}
	HX_STACK_LINE(516)
	Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::Button_obj::_groups->get(value);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(517)
	if (((arr == null()))){
		HX_STACK_LINE(518)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(518)
		arr = _g;
	}
	HX_STACK_LINE(521)
	bool _g1 = ::haxe::ui::toolkit::controls::Button_obj::optionInGroup(value,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(521)
	if (((_g1 == false))){
		HX_STACK_LINE(522)
		arr->push(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(524)
	::haxe::ui::toolkit::controls::Button_obj::_groups->set(value,arr);
	HX_STACK_LINE(526)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_group,return )

bool Button_obj::get_allowSelection( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_allowSelection",0xdd8acb72,"haxe.ui.toolkit.controls.Button.get_allowSelection","haxe/ui/toolkit/controls/Button.hx",531,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(531)
	return this->_allowSelection;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_allowSelection,return )

bool Button_obj::set_allowSelection( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_allowSelection",0xba39fde6,"haxe.ui.toolkit.controls.Button.set_allowSelection","haxe/ui/toolkit/controls/Button.hx",534,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(535)
	this->_allowSelection = value;
	HX_STACK_LINE(536)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_allowSelection,return )

bool Button_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","get_multiline",0x8cca885e,"haxe.ui.toolkit.controls.Button.get_multiline","haxe/ui/toolkit/controls/Button.hx",540,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(540)
	return this->_multiline;
}


HX_DEFINE_DYNAMIC_FUNC0(Button_obj,get_multiline,return )

bool Button_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","set_multiline",0xd1d06a6a,"haxe.ui.toolkit.controls.Button.set_multiline","haxe/ui/toolkit/controls/Button.hx",543,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(544)
	this->_multiline = value;
	HX_STACK_LINE(545)
	if (((this->_label != null()))){
		HX_STACK_LINE(546)
		this->_label->set_multiline(this->_multiline);
		HX_STACK_LINE(547)
		this->_label->set_wrapLines(this->_multiline);
	}
	HX_STACK_LINE(549)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Button_obj,set_multiline,return )

Void Button_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","applyStyle",0x5be09b09,"haxe.ui.toolkit.controls.Button.applyStyle","haxe/ui/toolkit/controls/Button.hx",555,0x493ac9f6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(556)
		this->super::applyStyle();
		HX_STACK_LINE(559)
		if (((this->_label != null()))){
			HX_STACK_LINE(560)
			::haxe::ui::toolkit::style::Style labelStyle = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(labelStyle,"labelStyle");
			HX_STACK_LINE(561)
			if (((this->_style != null()))){
				HX_STACK_LINE(562)
				::String _g = this->_style->get_fontName();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(562)
				labelStyle->set_fontName(_g);
				HX_STACK_LINE(563)
				Float _g1 = this->_style->get_fontSize();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(563)
				labelStyle->set_fontSize(_g1);
				HX_STACK_LINE(564)
				bool _g2 = this->_style->get_fontEmbedded();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(564)
				labelStyle->set_fontEmbedded(_g2);
				HX_STACK_LINE(565)
				bool _g3 = this->_style->get_fontBold();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(565)
				labelStyle->set_fontBold(_g3);
				HX_STACK_LINE(566)
				bool _g4 = this->_style->get_fontItalic();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(566)
				labelStyle->set_fontItalic(_g4);
				HX_STACK_LINE(567)
				bool _g5 = this->_style->get_fontUnderline();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(567)
				labelStyle->set_fontUnderline(_g5);
				HX_STACK_LINE(568)
				int _g6 = this->_style->get_color();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(568)
				labelStyle->set_color(_g6);
				HX_STACK_LINE(569)
				::String _g7 = this->_style->get_textAlign();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(569)
				labelStyle->set_textAlign(_g7);
			}
			HX_STACK_LINE(571)
			this->_label->set_style(labelStyle);
		}
		HX_STACK_LINE(574)
		if (((this->_style != null()))){
			HX_STACK_LINE(575)
			::String _g8 = this->_style->get_icon();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(575)
			if (((_g8 != null()))){
				HX_STACK_LINE(576)
				::String _g9 = this->_style->get_icon();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(576)
				this->set_icon(_g9);
			}
			HX_STACK_LINE(579)
			::String _g10 = this->_style->get_iconPosition();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(579)
			if (((_g10 != null()))){
				HX_STACK_LINE(580)
				::String _g11 = this->_style->get_iconPosition();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(580)
				this->set_iconPosition(_g11);
			}
		}
	}
return null();
}


Dynamic Button_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","clone",0x126fcaf7,"haxe.ui.toolkit.controls.Button.clone","haxe/ui/toolkit/controls/Button.hx",1,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Button c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool _g = this->get_remainPressed();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_remainPressed(_g);
	HX_STACK_LINE(4)
	Dynamic _g1 = this->get_icon();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4)
	c->set_icon(_g1);
	HX_STACK_LINE(5)
	bool _g2 = this->get_allowFocus();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(5)
	c->set_allowFocus(_g2);
	HX_STACK_LINE(6)
	::String _g3 = this->get_iconPosition();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(6)
	c->set_iconPosition(_g3);
	HX_STACK_LINE(7)
	bool _g4 = this->get_toggle();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(7)
	c->set_toggle(_g4);
	HX_STACK_LINE(8)
	bool _g5 = this->get_selected();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(8)
	c->set_selected(_g5);
	HX_STACK_LINE(9)
	::String _g6 = this->get_group();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(9)
	c->set_group(_g6);
	HX_STACK_LINE(10)
	bool _g7 = this->get_allowSelection();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(10)
	c->set_allowSelection(_g7);
	HX_STACK_LINE(11)
	bool _g8 = this->get_multiline();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(11)
	c->set_multiline(_g8);
	HX_STACK_LINE(12)
	return c;
}


Dynamic Button_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","self",0xd9464532,"haxe.ui.toolkit.controls.Button.self","haxe/ui/toolkit/controls/Button.hx",2,0x493ac9f6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::Button_obj::__new();
}


::String Button_obj::STATE_NORMAL;

::String Button_obj::STATE_OVER;

::String Button_obj::STATE_DOWN;

::String Button_obj::STATE_DISABLED;

::haxe::ds::StringMap Button_obj::_groups;

bool Button_obj::optionInGroup( ::String value,::haxe::ui::toolkit::controls::Button option){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Button","optionInGroup",0x813b47bf,"haxe.ui.toolkit.controls.Button.optionInGroup","haxe/ui/toolkit/controls/Button.hx",588,0x493ac9f6)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(option,"option")
	HX_STACK_LINE(589)
	bool exists = false;		HX_STACK_VAR(exists,"exists");
	HX_STACK_LINE(590)
	Array< ::Dynamic > arr = ::haxe::ui::toolkit::controls::Button_obj::_groups->get(value);		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(591)
	if (((arr != null()))){
		HX_STACK_LINE(592)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(592)
		while((true)){
			HX_STACK_LINE(592)
			if ((!(((_g < arr->length))))){
				HX_STACK_LINE(592)
				break;
			}
			HX_STACK_LINE(592)
			::haxe::ui::toolkit::controls::Button test = arr->__get(_g).StaticCast< ::haxe::ui::toolkit::controls::Button >();		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(592)
			++(_g);
			HX_STACK_LINE(593)
			if (((test == option))){
				HX_STACK_LINE(594)
				exists = true;
				HX_STACK_LINE(595)
				break;
			}
		}
	}
	HX_STACK_LINE(599)
	return exists;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Button_obj,optionInGroup,return )


Button_obj::Button_obj()
{
}

void Button_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Button);
	HX_MARK_MEMBER_NAME(_allowFocus,"_allowFocus");
	HX_MARK_MEMBER_NAME(_remainPressed,"_remainPressed");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_toggle,"_toggle");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_allowSelection,"_allowSelection");
	HX_MARK_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_MARK_MEMBER_NAME(_multiline,"_multiline");
	HX_MARK_MEMBER_NAME(_group,"_group");
	HX_MARK_MEMBER_NAME(_spacers,"_spacers");
	HX_MARK_MEMBER_NAME(dispatchChangeEvents,"dispatchChangeEvents");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Button_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_allowFocus,"_allowFocus");
	HX_VISIT_MEMBER_NAME(_remainPressed,"_remainPressed");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_toggle,"_toggle");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_allowSelection,"_allowSelection");
	HX_VISIT_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_VISIT_MEMBER_NAME(_multiline,"_multiline");
	HX_VISIT_MEMBER_NAME(_group,"_group");
	HX_VISIT_MEMBER_NAME(_spacers,"_spacers");
	HX_VISIT_MEMBER_NAME(dispatchChangeEvents,"dispatchChangeEvents");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Button_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return get_icon(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		if (HX_FIELD_EQ(inName,"_down") ) { return _down; }
		if (HX_FIELD_EQ(inName,"group") ) { return get_group(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		if (HX_FIELD_EQ(inName,"_group") ) { return _group; }
		if (HX_FIELD_EQ(inName,"toggle") ) { return get_toggle(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { return _groups; }
		if (HX_FIELD_EQ(inName,"_toggle") ) { return _toggle; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_spacers") ) { return _spacers; }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return get_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return set_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"selected") ) { return get_selected(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { return _selected; }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		if (HX_FIELD_EQ(inName,"multiline") ) { return get_multiline(); }
		if (HX_FIELD_EQ(inName,"get_group") ) { return get_group_dyn(); }
		if (HX_FIELD_EQ(inName,"set_group") ) { return set_group_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_multiline") ) { return _multiline; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseUp") ) { return _onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		if (HX_FIELD_EQ(inName,"allowFocus") ) { return get_allowFocus(); }
		if (HX_FIELD_EQ(inName,"get_toggle") ) { return get_toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_toggle") ) { return set_toggle_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { return _allowFocus; }
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return set_disabled_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return get_iconPosition(); }
		if (HX_FIELD_EQ(inName,"get_selected") ) { return get_selected_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"optionInGroup") ) { return optionInGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { return _iconPosition; }
		if (HX_FIELD_EQ(inName,"remainPressed") ) { return get_remainPressed(); }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_remainPressed") ) { return _remainPressed; }
		if (HX_FIELD_EQ(inName,"get_allowFocus") ) { return get_allowFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowFocus") ) { return set_allowFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"allowSelection") ) { return get_allowSelection(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowSelection") ) { return _allowSelection; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"organiseChildren") ) { return organiseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return get_iconPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_iconPosition") ) { return set_iconPosition_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_remainPressed") ) { return get_remainPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"set_remainPressed") ) { return set_remainPressed_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_allowSelection") ) { return get_allowSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowSelection") ) { return set_allowSelection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dispatchChangeEvents") ) { return dispatchChangeEvents; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Button_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return set_icon(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::haxe::ui::toolkit::controls::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"group") ) { return set_group(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_group") ) { _group=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"toggle") ) { return set_toggle(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toggle") ) { _toggle=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_spacers") ) { _spacers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selected") ) { return set_selected(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multiline") ) { return set_multiline(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_multiline") ) { _multiline=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowFocus") ) { return set_allowFocus(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_allowFocus") ) { _allowFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return set_iconPosition(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { _iconPosition=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"remainPressed") ) { return set_remainPressed(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_remainPressed") ) { _remainPressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowSelection") ) { return set_allowSelection(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_allowSelection") ) { _allowSelection=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"dispatchChangeEvents") ) { dispatchChangeEvents=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Button_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_allowFocus"));
	outFields->push(HX_CSTRING("_remainPressed"));
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("_icon"));
	outFields->push(HX_CSTRING("_down"));
	outFields->push(HX_CSTRING("_toggle"));
	outFields->push(HX_CSTRING("_selected"));
	outFields->push(HX_CSTRING("_allowSelection"));
	outFields->push(HX_CSTRING("_iconPosition"));
	outFields->push(HX_CSTRING("_multiline"));
	outFields->push(HX_CSTRING("_group"));
	outFields->push(HX_CSTRING("_spacers"));
	outFields->push(HX_CSTRING("remainPressed"));
	outFields->push(HX_CSTRING("icon"));
	outFields->push(HX_CSTRING("allowFocus"));
	outFields->push(HX_CSTRING("iconPosition"));
	outFields->push(HX_CSTRING("toggle"));
	outFields->push(HX_CSTRING("selected"));
	outFields->push(HX_CSTRING("group"));
	outFields->push(HX_CSTRING("allowSelection"));
	outFields->push(HX_CSTRING("dispatchChangeEvents"));
	outFields->push(HX_CSTRING("multiline"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STATE_NORMAL"),
	HX_CSTRING("STATE_OVER"),
	HX_CSTRING("STATE_DOWN"),
	HX_CSTRING("STATE_DISABLED"),
	HX_CSTRING("_groups"),
	HX_CSTRING("optionInGroup"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Button_obj,_allowFocus),HX_CSTRING("_allowFocus")},
	{hx::fsBool,(int)offsetof(Button_obj,_remainPressed),HX_CSTRING("_remainPressed")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(Button_obj,_label),HX_CSTRING("_label")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Image*/ ,(int)offsetof(Button_obj,_icon),HX_CSTRING("_icon")},
	{hx::fsBool,(int)offsetof(Button_obj,_down),HX_CSTRING("_down")},
	{hx::fsBool,(int)offsetof(Button_obj,_toggle),HX_CSTRING("_toggle")},
	{hx::fsBool,(int)offsetof(Button_obj,_selected),HX_CSTRING("_selected")},
	{hx::fsBool,(int)offsetof(Button_obj,_allowSelection),HX_CSTRING("_allowSelection")},
	{hx::fsString,(int)offsetof(Button_obj,_iconPosition),HX_CSTRING("_iconPosition")},
	{hx::fsBool,(int)offsetof(Button_obj,_multiline),HX_CSTRING("_multiline")},
	{hx::fsString,(int)offsetof(Button_obj,_group),HX_CSTRING("_group")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Button_obj,_spacers),HX_CSTRING("_spacers")},
	{hx::fsBool,(int)offsetof(Button_obj,dispatchChangeEvents),HX_CSTRING("dispatchChangeEvents")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_allowFocus"),
	HX_CSTRING("_remainPressed"),
	HX_CSTRING("_label"),
	HX_CSTRING("_icon"),
	HX_CSTRING("_down"),
	HX_CSTRING("_toggle"),
	HX_CSTRING("_selected"),
	HX_CSTRING("_allowSelection"),
	HX_CSTRING("_iconPosition"),
	HX_CSTRING("_multiline"),
	HX_CSTRING("_group"),
	HX_CSTRING("_spacers"),
	HX_CSTRING("dispose"),
	HX_CSTRING("get_remainPressed"),
	HX_CSTRING("set_remainPressed"),
	HX_CSTRING("get_icon"),
	HX_CSTRING("set_icon"),
	HX_CSTRING("organiseChildren"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("set_disabled"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("_onMouseOver"),
	HX_CSTRING("_onMouseOut"),
	HX_CSTRING("_onMouseDown"),
	HX_CSTRING("_onMouseUp"),
	HX_CSTRING("_onMouseClick"),
	HX_CSTRING("get_states"),
	HX_CSTRING("set_state"),
	HX_CSTRING("get_allowFocus"),
	HX_CSTRING("set_allowFocus"),
	HX_CSTRING("dispatchChangeEvents"),
	HX_CSTRING("get_iconPosition"),
	HX_CSTRING("set_iconPosition"),
	HX_CSTRING("get_toggle"),
	HX_CSTRING("set_toggle"),
	HX_CSTRING("get_selected"),
	HX_CSTRING("set_selected"),
	HX_CSTRING("get_group"),
	HX_CSTRING("set_group"),
	HX_CSTRING("get_allowSelection"),
	HX_CSTRING("set_allowSelection"),
	HX_CSTRING("get_multiline"),
	HX_CSTRING("set_multiline"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Button_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_DOWN,"STATE_DOWN");
	HX_MARK_MEMBER_NAME(Button_obj::STATE_DISABLED,"STATE_DISABLED");
	HX_MARK_MEMBER_NAME(Button_obj::_groups,"_groups");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Button_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_DOWN,"STATE_DOWN");
	HX_VISIT_MEMBER_NAME(Button_obj::STATE_DISABLED,"STATE_DISABLED");
	HX_VISIT_MEMBER_NAME(Button_obj::_groups,"_groups");
};

#endif

Class Button_obj::__mClass;

void Button_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Button"), hx::TCanCast< Button_obj> ,sStaticFields,sMemberFields,
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

void Button_obj::__boot()
{
	STATE_NORMAL= HX_CSTRING("normal");
	STATE_OVER= HX_CSTRING("over");
	STATE_DOWN= HX_CSTRING("down");
	STATE_DISABLED= HX_CSTRING("disabled");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
