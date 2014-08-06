#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Accordion
#include <haxe/ui/toolkit/containers/Accordion.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_AccordionButton
#include <haxe/ui/toolkit/containers/AccordionButton.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void Accordion_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","new",0x97feb2c0,"haxe.ui.toolkit.containers.Accordion.new","haxe/ui/toolkit/containers/Accordion.hx",17,0x8ce13fb0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->_selectedIndex = (int)-1;
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->_autoSize = false;
	HX_STACK_LINE(25)
	Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	this->_panels = _g;
	HX_STACK_LINE(26)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	this->_buttons = _g1;
}
;
	return null();
}

//Accordion_obj::~Accordion_obj() { }

Dynamic Accordion_obj::__CreateEmpty() { return  new Accordion_obj; }
hx::ObjectPtr< Accordion_obj > Accordion_obj::__new()
{  hx::ObjectPtr< Accordion_obj > result = new Accordion_obj();
	result->__construct();
	return result;}

Dynamic Accordion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Accordion_obj > result = new Accordion_obj();
	result->__construct();
	return result;}

hx::Object *Accordion_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Void Accordion_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","initialize",0xf9fb5af0,"haxe.ui.toolkit.containers.Accordion.initialize","haxe/ui/toolkit/containers/Accordion.hx",32,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->super::initialize();
		HX_STACK_LINE(35)
		if (((this->_selectedIndex != (int)-1))){
			HX_STACK_LINE(36)
			int cachedIndex = this->_selectedIndex;		HX_STACK_VAR(cachedIndex,"cachedIndex");
			HX_STACK_LINE(37)
			this->_selectedIndex = (int)-1;
			HX_STACK_LINE(38)
			this->showPage(cachedIndex);
		}
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject Accordion_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","addChild",0x28fb515b,"haxe.ui.toolkit.containers.Accordion.addChild","haxe/ui/toolkit/containers/Accordion.hx",45,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(52)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(53)
	if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::containers::AccordionButton >()))){
		HX_STACK_LINE(54)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->super::addChild(child);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		r = _g;
	}
	else{
		HX_STACK_LINE(56)
		if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >()))){
			HX_STACK_LINE(57)
			(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child))->__Field(HX_CSTRING("set_autoSize"),true)(false);
		}
		HX_STACK_LINE(59)
		if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >()))){
			HX_STACK_LINE(60)
			(hx::TCast< haxe::ui::toolkit::core::StyleableDisplayObject >::cast(child))->set_styleName(HX_CSTRING("page"));
		}
		HX_STACK_LINE(62)
		child->__Field(HX_CSTRING("set_percentHeight"),true)((int)100);
		HX_STACK_LINE(63)
		child->__Field(HX_CSTRING("set_percentWidth"),true)((int)100);
		HX_STACK_LINE(64)
		this->_panels->push(child);
		HX_STACK_LINE(66)
		::haxe::ui::toolkit::containers::AccordionButton button = ::haxe::ui::toolkit::containers::AccordionButton_obj::__new();		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(67)
		button->set_styleName(HX_CSTRING("expandable"));
		HX_STACK_LINE(68)
		if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::Component >()))){
			HX_STACK_LINE(69)
			::String _g1 = (hx::TCast< haxe::ui::toolkit::core::Component >::cast(child))->get_text();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(69)
			button->set_text(_g1);
		}
		HX_STACK_LINE(71)
		button->userData = (this->_panels->length - (int)1);
		HX_STACK_LINE(72)
		button->set_id((HX_CSTRING("accordionButton_") + ((this->_panels->length - (int)1))));
		HX_STACK_LINE(73)
		button->set_percentWidth((int)100);
		HX_STACK_LINE(74)
		button->set_toggle(true);
		HX_STACK_LINE(75)
		button->set_selected(false);
		HX_STACK_LINE(76)
		button->set_allowSelection(false);
		HX_STACK_LINE(77)
		button->addEventListener(HX_CSTRING("haxeui_click"),this->_onButtonClick_dyn(),null(),null(),null());
		HX_STACK_LINE(78)
		this->_buttons->push(button);
		HX_STACK_LINE(80)
		this->addChild(button);
		HX_STACK_LINE(81)
		child->__Field(HX_CSTRING("set_visible"),true)(false);
		HX_STACK_LINE(82)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g2 = this->super::addChild(child);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(82)
		r = _g2;
	}
	HX_STACK_LINE(84)
	return r;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject Accordion_obj::removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","removeChild",0xced1c918,"haxe.ui.toolkit.containers.Accordion.removeChild","haxe/ui/toolkit/containers/Accordion.hx",87,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(88)
		if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::containers::AccordionButton >()))){
			HX_STACK_LINE(89)
			this->_buttons->remove(child);
		}
		else{
			HX_STACK_LINE(91)
			this->_panels->remove(child);
		}
		HX_STACK_LINE(93)
		return this->super::removeChild(child,dispose);
	}
}


int Accordion_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","get_selectedIndex",0xa954cc6e,"haxe.ui.toolkit.containers.Accordion.get_selectedIndex","haxe/ui/toolkit/containers/Accordion.hx",102,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return this->_selectedIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(Accordion_obj,get_selectedIndex,return )

int Accordion_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","set_selectedIndex",0xccc2a47a,"haxe.ui.toolkit.containers.Accordion.set_selectedIndex","haxe/ui/toolkit/containers/Accordion.hx",105,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(106)
	if (((this->_ready == true))){
		HX_STACK_LINE(107)
		this->_buttons->__get(value).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >()->set_selected(true);
	}
	else{
		HX_STACK_LINE(109)
		this->_selectedIndex = value;
	}
	HX_STACK_LINE(111)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,set_selectedIndex,return )

::haxe::ui::toolkit::controls::Button Accordion_obj::get_selectedButton( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","get_selectedButton",0xc6cb6116,"haxe.ui.toolkit.containers.Accordion.get_selectedButton","haxe/ui/toolkit/containers/Accordion.hx",118,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	if (((this->_selectedIndex == (int)-1))){
		HX_STACK_LINE(121)
		return null();
	}
	HX_STACK_LINE(124)
	return this->getButton(this->_selectedIndex);
}


HX_DEFINE_DYNAMIC_FUNC0(Accordion_obj,get_selectedButton,return )

::haxe::ui::toolkit::controls::Button Accordion_obj::getButton( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","getButton",0x9443d588,"haxe.ui.toolkit.containers.Accordion.getButton","haxe/ui/toolkit/containers/Accordion.hx",128,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(128)
	return this->_buttons->__get(index).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >();
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,getButton,return )

Void Accordion_obj::showPage( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","showPage",0x1bbd1f8c,"haxe.ui.toolkit.containers.Accordion.showPage","haxe/ui/toolkit/containers/Accordion.hx",131,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(132)
		::haxe::ui::toolkit::containers::AccordionButton button = this->_buttons->__get(index).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >();		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(133)
		button->set_selected(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,showPage,(void))

Void Accordion_obj::_onButtonClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","_onButtonClick",0x726ac3f8,"haxe.ui.toolkit.containers.Accordion._onButtonClick","haxe/ui/toolkit/containers/Accordion.hx",136,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(137)
		int index = event->get_component()->userData;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(138)
		this->showPanel(index);
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::events::UIEvent _g = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_change"),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,_onButtonClick,(void))

Void Accordion_obj::showPanel( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","showPanel",0x29c3cb27,"haxe.ui.toolkit.containers.Accordion.showPanel","haxe/ui/toolkit/containers/Accordion.hx",142,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(143)
		::haxe::ui::toolkit::containers::AccordionButton button = this->_buttons->__get(index).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >();		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(144)
		button->set_selected(true);
		HX_STACK_LINE(145)
		::haxe::ui::toolkit::core::Component panel = this->_panels->__get(index);		HX_STACK_VAR(panel,"panel");
		HX_STACK_LINE(147)
		::haxe::ui::toolkit::containers::AccordionButton buttonOld = null();		HX_STACK_VAR(buttonOld,"buttonOld");
		HX_STACK_LINE(148)
		::haxe::ui::toolkit::core::Component panelOld = null();		HX_STACK_VAR(panelOld,"panelOld");
		HX_STACK_LINE(149)
		Float ucy = this->get_layout()->__Field(HX_CSTRING("get_usableHeight"),true)();		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(150)
		if (((this->_selectedIndex > (int)-1))){
			HX_STACK_LINE(151)
			buttonOld = this->_buttons->__get(this->_selectedIndex).StaticCast< ::haxe::ui::toolkit::containers::AccordionButton >();
			HX_STACK_LINE(152)
			panelOld = this->_panels->__get(this->_selectedIndex);
			HX_STACK_LINE(153)
			if (((button != buttonOld))){
				HX_STACK_LINE(154)
				this->unselectButton(buttonOld);
			}
		}
		HX_STACK_LINE(157)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Accordion >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(158)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(159)
			panel->set_percentHeight((int)-1);
			HX_STACK_LINE(160)
			panel->set_height((int)0);
			HX_STACK_LINE(161)
			panel->set_visible(true);
			HX_STACK_LINE(162)
			::motion::easing::IEasing _g = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( Float &ucy){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Accordion.hx",162,0x8ce13fb0)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("height") , ucy,false);
						__result->Add(HX_CSTRING("clipHeight") , ucy,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(162)
			::motion::Actuate_obj::tween(panel,.2,_Function_2_1::Block(ucy),true,null())->ease(_g)->onUpdate(this->_onTweenUpdate_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(ucy).Add(panel).Add(panelOld)))->onComplete(this->_onTweenComplete_dyn(),Dynamic( Array_obj<Dynamic>::__new().Add(panel).Add(panelOld).Add(buttonOld)));
		}
		else{
			HX_STACK_LINE(165)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(166)
				panel->get_sprite()->set_alpha((int)0);
				HX_STACK_LINE(167)
				panel->set_visible(true);
				HX_STACK_LINE(168)
				if (((panelOld != null()))){
					HX_STACK_LINE(169)
					this->unselectButton(buttonOld);
					HX_STACK_LINE(170)
					panelOld->set_visible(false);
				}
				HX_STACK_LINE(172)
				::openfl::display::Sprite _g1 = panel->get_sprite();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(172)
				::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Accordion.hx",172,0x8ce13fb0)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(172)
				::motion::Actuate_obj::tween(_g1,.2,_Function_3_1::Block(),true,null())->ease(_g2);
			}
			else{
				HX_STACK_LINE(174)
				panel->set_visible(true);
				HX_STACK_LINE(175)
				if (((panelOld != null()))){
					HX_STACK_LINE(176)
					this->unselectButton(buttonOld);
					HX_STACK_LINE(177)
					panelOld->set_visible(false);
				}
			}
		}
		HX_STACK_LINE(181)
		if (((panelOld == panel))){
			HX_STACK_LINE(182)
			this->_selectedIndex = (int)-1;
		}
		else{
			HX_STACK_LINE(184)
			this->_selectedIndex = index;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,showPanel,(void))

Void Accordion_obj::unselectButton( ::haxe::ui::toolkit::controls::Button button){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","unselectButton",0xeb2ad787,"haxe.ui.toolkit.containers.Accordion.unselectButton","haxe/ui/toolkit/containers/Accordion.hx",191,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(191)
		button->set_selected(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Accordion_obj,unselectButton,(void))

Void Accordion_obj::_onTweenUpdate( Float ucy,::haxe::ui::toolkit::core::Component panel,::haxe::ui::toolkit::core::Component panelOld){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","_onTweenUpdate",0x07c04dd6,"haxe.ui.toolkit.containers.Accordion._onTweenUpdate","haxe/ui/toolkit/containers/Accordion.hx",196,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ucy,"ucy")
		HX_STACK_ARG(panel,"panel")
		HX_STACK_ARG(panelOld,"panelOld")
		HX_STACK_LINE(196)
		if (((panelOld != null()))){
			HX_STACK_LINE(197)
			Float _g = panel->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(197)
			Float _g1 = (ucy - _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(197)
			panelOld->set_height(_g1);
			HX_STACK_LINE(198)
			Float _g2 = panelOld->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(198)
			panelOld->set_clipHeight(_g2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Accordion_obj,_onTweenUpdate,(void))

Void Accordion_obj::_onTweenComplete( ::haxe::ui::toolkit::core::Component panel,::haxe::ui::toolkit::core::Component panelOld,::haxe::ui::toolkit::controls::Button buttonOld){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","_onTweenComplete",0xba9e15c6,"haxe.ui.toolkit.containers.Accordion._onTweenComplete","haxe/ui/toolkit/containers/Accordion.hx",202,0x8ce13fb0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(panel,"panel")
		HX_STACK_ARG(panelOld,"panelOld")
		HX_STACK_ARG(buttonOld,"buttonOld")
		HX_STACK_LINE(203)
		panel->clearClip();
		HX_STACK_LINE(204)
		panel->set_percentHeight((int)100);
		HX_STACK_LINE(205)
		if (((panelOld != null()))){
			HX_STACK_LINE(206)
			panelOld->set_visible(false);
			HX_STACK_LINE(207)
			this->unselectButton(buttonOld);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Accordion_obj,_onTweenComplete,(void))

Dynamic Accordion_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","clone",0x4a534dbd,"haxe.ui.toolkit.containers.Accordion.clone","haxe/ui/toolkit/core/Macros.hx",490,0x3fba9eca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::containers::Accordion c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(215)
	c->removeAllChildren(null());
	HX_STACK_LINE(216)
	{
		HX_STACK_LINE(216)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(216)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		while((true)){
			HX_STACK_LINE(216)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(216)
				break;
			}
			HX_STACK_LINE(216)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(216)
			++(_g);
			HX_STACK_LINE(217)
			bool _g2 = ::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::containers::AccordionButton >());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(217)
			if (((_g2 == false))){
				HX_STACK_LINE(218)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject _g11 = child->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(218)
				c->addChild(_g11);
			}
		}
	}
	HX_STACK_LINE(1)
	return c;
}


Dynamic Accordion_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Accordion","self",0x6a2bbd2c,"haxe.ui.toolkit.containers.Accordion.self","haxe/ui/toolkit/containers/Accordion.hx",1,0x8ce13fb0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	return ::haxe::ui::toolkit::containers::Accordion_obj::__new();
}



Accordion_obj::Accordion_obj()
{
}

void Accordion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Accordion);
	HX_MARK_MEMBER_NAME(_panels,"_panels");
	HX_MARK_MEMBER_NAME(_buttons,"_buttons");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(selectedButton,"selectedButton");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Accordion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_panels,"_panels");
	HX_VISIT_MEMBER_NAME(_buttons,"_buttons");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(selectedButton,"selectedButton");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Accordion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_panels") ) { return _panels; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buttons") ) { return _buttons; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"showPage") ) { return showPage_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getButton") ) { return getButton_dyn(); }
		if (HX_FIELD_EQ(inName,"showPanel") ) { return showPanel_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		if (HX_FIELD_EQ(inName,"selectedButton") ) { return inCallProp ? get_selectedButton() : selectedButton; }
		if (HX_FIELD_EQ(inName,"_onButtonClick") ) { return _onButtonClick_dyn(); }
		if (HX_FIELD_EQ(inName,"unselectButton") ) { return unselectButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_onTweenUpdate") ) { return _onTweenUpdate_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onTweenComplete") ) { return _onTweenComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_selectedButton") ) { return get_selectedButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Accordion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_panels") ) { _panels=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buttons") ) { _buttons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedButton") ) { selectedButton=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Accordion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_panels"));
	outFields->push(HX_CSTRING("_buttons"));
	outFields->push(HX_CSTRING("_selectedIndex"));
	outFields->push(HX_CSTRING("selectedIndex"));
	outFields->push(HX_CSTRING("selectedButton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >*/ ,(int)offsetof(Accordion_obj,_panels),HX_CSTRING("_panels")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Accordion_obj,_buttons),HX_CSTRING("_buttons")},
	{hx::fsInt,(int)offsetof(Accordion_obj,_selectedIndex),HX_CSTRING("_selectedIndex")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(Accordion_obj,selectedButton),HX_CSTRING("selectedButton")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_panels"),
	HX_CSTRING("_buttons"),
	HX_CSTRING("_selectedIndex"),
	HX_CSTRING("initialize"),
	HX_CSTRING("addChild"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("selectedButton"),
	HX_CSTRING("get_selectedButton"),
	HX_CSTRING("getButton"),
	HX_CSTRING("showPage"),
	HX_CSTRING("_onButtonClick"),
	HX_CSTRING("showPanel"),
	HX_CSTRING("unselectButton"),
	HX_CSTRING("_onTweenUpdate"),
	HX_CSTRING("_onTweenComplete"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Accordion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Accordion_obj::__mClass,"__mClass");
};

#endif

Class Accordion_obj::__mClass;

void Accordion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.Accordion"), hx::TCanCast< Accordion_obj> ,sStaticFields,sMemberFields,
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

void Accordion_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
