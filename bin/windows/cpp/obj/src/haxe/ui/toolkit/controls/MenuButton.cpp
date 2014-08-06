#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_Menu
#include <haxe/ui/toolkit/controls/Menu.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuButton
#include <haxe/ui/toolkit/controls/MenuButton.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_MenuItem
#include <haxe/ui/toolkit/controls/MenuItem.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_MenuEvent
#include <haxe/ui/toolkit/events/MenuEvent.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void MenuButton_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","new",0x319e36f9,"haxe.ui.toolkit.controls.MenuButton.new","haxe/ui/toolkit/controls/MenuButton.hx",16,0xfd1e7557)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	this->set_toggle(true);
	HX_STACK_LINE(19)
	this->set_allowSelection(false);
}
;
	return null();
}

//MenuButton_obj::~MenuButton_obj() { }

Dynamic MenuButton_obj::__CreateEmpty() { return  new MenuButton_obj; }
hx::ObjectPtr< MenuButton_obj > MenuButton_obj::__new()
{  hx::ObjectPtr< MenuButton_obj > result = new MenuButton_obj();
	result->__construct();
	return result;}

Dynamic MenuButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuButton_obj > result = new MenuButton_obj();
	result->__construct();
	return result;}

Void MenuButton_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","initialize",0x214fbfd7,"haxe.ui.toolkit.controls.MenuButton.initialize","haxe/ui/toolkit/controls/MenuButton.hx",22,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->super::initialize();
		HX_STACK_LINE(25)
		if (((this->_menu != null()))){
			HX_STACK_LINE(26)
			this->_menu->addEventListener(::haxe::ui::toolkit::events::MenuEvent_obj::SELECT,this->_onMenuSelect_dyn(),null(),null(),null());
			HX_STACK_LINE(27)
			this->_menu->addEventListener(::haxe::ui::toolkit::events::MenuEvent_obj::OPEN,this->_onMenuOpen_dyn(),null(),null(),null());
		}
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject MenuButton_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","addChild",0x34f4de82,"haxe.ui.toolkit.controls.MenuButton.addChild","haxe/ui/toolkit/controls/MenuButton.hx",31,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(34)
	if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >()))){
		HX_STACK_LINE(35)
		if (((this->_menu == null()))){
			HX_STACK_LINE(36)
			::haxe::ui::toolkit::controls::Menu _g = ::haxe::ui::toolkit::controls::Menu_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			this->_menu = _g;
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::core::Root _g1 = this->get_root();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(37)
			this->_menu->set_root(_g1);
		}
		HX_STACK_LINE(39)
		this->_menu->addChild(child);
	}
	else{
		HX_STACK_LINE(40)
		if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >()))){
			HX_STACK_LINE(41)
			::haxe::ui::toolkit::controls::Menu _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(41)
			_g2 = hx::TCast< haxe::ui::toolkit::controls::Menu >::cast(child);
			HX_STACK_LINE(41)
			this->_menu = _g2;
		}
		else{
			HX_STACK_LINE(43)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g3 = this->super::addChild(child);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(43)
			r = _g3;
		}
	}
	HX_STACK_LINE(46)
	return r;
}


Void MenuButton_obj::_onMouseOver( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMouseOver",0x6c145942,"haxe.ui.toolkit.controls.MenuButton._onMouseOver","haxe/ui/toolkit/controls/MenuButton.hx",49,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(50)
		this->super::_onMouseOver(event);
		HX_STACK_LINE(51)
		if (((bool((::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton != null())) && bool((::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton != hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton->hideMenu();
			HX_STACK_LINE(53)
			this->showMenu();
		}
	}
return null();
}


Void MenuButton_obj::_onMouseClick( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMouseClick",0x3651a49a,"haxe.ui.toolkit.controls.MenuButton._onMouseClick","haxe/ui/toolkit/controls/MenuButton.hx",57,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(58)
		int _g = this->get_root()->indexOfChild(this->_menu);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		if (((_g == (int)-1))){
			HX_STACK_LINE(59)
			this->showMenu();
		}
		else{
			HX_STACK_LINE(61)
			this->hideMenu();
		}
	}
return null();
}


bool MenuButton_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","set_selected",0x693a801f,"haxe.ui.toolkit.controls.MenuButton.set_selected","haxe/ui/toolkit/controls/MenuButton.hx",65,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	this->_selected = value;
	HX_STACK_LINE(67)
	if (((this->_selected == true))){
		HX_STACK_LINE(68)
		this->set_state(HX_CSTRING("down"));
	}
	else{
		HX_STACK_LINE(70)
		this->set_state(HX_CSTRING("normal"));
	}
	HX_STACK_LINE(72)
	return value;
}


Void MenuButton_obj::_onRootMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onRootMouseDown",0x4825264e,"haxe.ui.toolkit.controls.MenuButton._onRootMouseDown","haxe/ui/toolkit/controls/MenuButton.hx",75,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(76)
		bool mouseIn = false;		HX_STACK_VAR(mouseIn,"mouseIn");
		HX_STACK_LINE(77)
		bool _g = this->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		if (((_g == true))){
			HX_STACK_LINE(78)
			mouseIn = true;
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::MenuButton_obj > __this,::openfl::events::MouseEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",80,0xfd1e7557)
				{
					HX_STACK_LINE(80)
					bool _g1 = __this->_menu->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(80)
					return (_g1 == true);
				}
				return null();
			}
		};
		HX_STACK_LINE(80)
		if (((  (((this->_menu != null()))) ? bool(_Function_1_1::Block(this,event)) : bool(false) ))){
			HX_STACK_LINE(81)
			mouseIn = true;
		}
		HX_STACK_LINE(83)
		if (((bool((this->_menu != null())) && bool((mouseIn == false))))){
			HX_STACK_LINE(84)
			::haxe::ui::toolkit::controls::Menu menu = this->_menu->get_rootMenu();		HX_STACK_VAR(menu,"menu");
			HX_STACK_LINE(85)
			while((true)){
				HX_STACK_LINE(85)
				if ((!(((menu != null()))))){
					HX_STACK_LINE(85)
					break;
				}
				HX_STACK_LINE(86)
				bool _g2 = menu->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(86)
				if (((_g2 == true))){
					HX_STACK_LINE(87)
					mouseIn = true;
					HX_STACK_LINE(88)
					break;
				}
				HX_STACK_LINE(90)
				::haxe::ui::toolkit::controls::Menu _g3 = menu->get_currentSubMenu();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(90)
				menu = _g3;
			}
		}
		HX_STACK_LINE(93)
		if (((bool((this->_menu != null())) && bool((mouseIn == false))))){
			HX_STACK_LINE(94)
			this->hideMenu();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuButton_obj,_onRootMouseDown,(void))

Void MenuButton_obj::_onMenuSelect( ::haxe::ui::toolkit::events::MenuEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMenuSelect",0x1cdd8ab2,"haxe.ui.toolkit.controls.MenuButton._onMenuSelect","haxe/ui/toolkit/controls/MenuButton.hx",98,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(99)
		this->hideMenu();
		HX_STACK_LINE(100)
		::haxe::ui::toolkit::events::MenuEvent e = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(::haxe::ui::toolkit::events::MenuEvent_obj::SELECT,event->menuItem);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(101)
		this->dispatchEvent(e);
		HX_STACK_LINE(103)
		::haxe::ui::toolkit::events::UIEvent uiEvent = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_menuSelect"),event->menuItem,null(),null());		HX_STACK_VAR(uiEvent,"uiEvent");
		HX_STACK_LINE(104)
		this->dispatchEvent(uiEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuButton_obj,_onMenuSelect,(void))

Void MenuButton_obj::_onMenuOpen( ::haxe::ui::toolkit::events::MenuEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","_onMenuOpen",0xcdcbfa00,"haxe.ui.toolkit.controls.MenuButton._onMenuOpen","haxe/ui/toolkit/controls/MenuButton.hx",107,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(108)
		::haxe::ui::toolkit::events::MenuEvent e = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(::haxe::ui::toolkit::events::MenuEvent_obj::OPEN,null());		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(109)
		e->menu = event->menu;
		HX_STACK_LINE(110)
		this->dispatchEvent(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(MenuButton_obj,_onMenuOpen,(void))

Void MenuButton_obj::showMenu( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","showMenu",0x25be1803,"haxe.ui.toolkit.controls.MenuButton.showMenu","haxe/ui/toolkit/controls/MenuButton.hx",113,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(114)
		this->set_selected(true);
		HX_STACK_LINE(115)
		Float _g1 = this->get_stageX();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(115)
		Float _g11 = this->get_root()->get_stageX();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(115)
		Float _g2 = (_g1 - _g11);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(115)
		this->_menu->set_x(_g2);
		HX_STACK_LINE(116)
		Float _g3 = this->get_stageY();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(116)
		Float _g4 = this->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(116)
		Float _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(116)
		Float _g6 = this->get_root()->get_stageY();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(116)
		Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(116)
		this->_menu->set_y(_g7);
		HX_STACK_LINE(117)
		this->get_root()->addChild(this->_menu);
		HX_STACK_LINE(118)
		this->get_root()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onRootMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(119)
		::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(121)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(122)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(123)
			this->_menu->set_clipHeight((int)0);
			HX_STACK_LINE(124)
			this->_menu->get_sprite()->set_alpha((int)1);
			HX_STACK_LINE(125)
			this->_menu->set_visible(true);
			HX_STACK_LINE(126)
			Float _g8 = this->_menu->get_height();		HX_STACK_VAR(_g8,"_g8");
			struct _Function_2_1{
				inline static Dynamic Block( Float &_g8){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",126,0xfd1e7557)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("clipHeight") , _g8,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(126)
			Dynamic _g9 = _Function_2_1::Block(_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(126)
			::motion::easing::IEasing _g10 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g10,"_g10");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/MenuButton.hx",127,0xfd1e7557)
				{
					HX_STACK_LINE(127)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu->clearClip();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(126)
			::motion::Actuate_obj::tween(this->_menu,.1,_g9,true,null())->ease(_g10)->onComplete( Dynamic(new _Function_2_2(_g)),null());
		}
		else{
			HX_STACK_LINE(129)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(130)
				this->_menu->get_sprite()->set_alpha((int)0);
				HX_STACK_LINE(131)
				this->_menu->set_visible(true);
				HX_STACK_LINE(132)
				::openfl::display::Sprite _g111 = this->_menu->get_sprite();		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(132)
				::motion::easing::IEasing _g12 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g12,"_g12");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",132,0xfd1e7557)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)1,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_3_2)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/MenuButton.hx",132,0xfd1e7557)
					{
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(132)
				::motion::Actuate_obj::tween(_g111,.1,_Function_3_1::Block(),true,null())->ease(_g12)->onComplete( Dynamic(new _Function_3_2()),null());
			}
			else{
				HX_STACK_LINE(135)
				this->_menu->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(136)
				this->_menu->set_visible(true);
			}
		}
		HX_STACK_LINE(139)
		::haxe::ui::toolkit::events::MenuEvent event = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(::haxe::ui::toolkit::events::MenuEvent_obj::OPEN,null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(140)
		event->menu = this->_menu;
		HX_STACK_LINE(141)
		this->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuButton_obj,showMenu,(void))

Void MenuButton_obj::hideMenu( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","hideMenu",0x17053e48,"haxe.ui.toolkit.controls.MenuButton.hideMenu","haxe/ui/toolkit/controls/MenuButton.hx",144,0xfd1e7557)
		HX_STACK_THIS(this)
		HX_STACK_LINE(144)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		this->set_selected(false);
		HX_STACK_LINE(147)
		this->_menu->hideSubMenus();
		HX_STACK_LINE(148)
		this->get_root()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onRootMouseDown_dyn(),null());
		HX_STACK_LINE(150)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(151)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(152)
			this->_menu->get_sprite()->set_alpha((int)1);
			HX_STACK_LINE(153)
			::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",153,0xfd1e7557)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("clipHeight") , (int)0,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/MenuButton.hx",153,0xfd1e7557)
				{
					HX_STACK_LINE(154)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu->set_visible(false);
					HX_STACK_LINE(155)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu->clearClip();
					HX_STACK_LINE(156)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->get_root()->removeChild(_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu,false);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(153)
			::motion::Actuate_obj::tween(this->_menu,.1,_Function_2_1::Block(),true,null())->ease(_g1)->onComplete( Dynamic(new _Function_2_2(_g)),null());
		}
		else{
			HX_STACK_LINE(158)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(159)
				::openfl::display::Sprite _g1 = this->_menu->get_sprite();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(159)
				::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/MenuButton.hx",159,0xfd1e7557)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)0,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/MenuButton.hx",159,0xfd1e7557)
					{
						HX_STACK_LINE(160)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu->set_visible(false);
						HX_STACK_LINE(161)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->get_root()->removeChild(_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::MenuButton >()->_menu,false);
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(159)
				::motion::Actuate_obj::tween(_g1,.1,_Function_3_1::Block(),true,null())->ease(_g2)->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(164)
				this->_menu->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(165)
				this->_menu->set_visible(false);
				HX_STACK_LINE(166)
				this->get_root()->removeChild(this->_menu,false);
			}
		}
		HX_STACK_LINE(169)
		::haxe::ui::toolkit::controls::MenuButton_obj::_currentMenuButton = null();
		HX_STACK_LINE(170)
		this->set_selected(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuButton_obj,hideMenu,(void))

Dynamic MenuButton_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","clone",0x2e071236,"haxe.ui.toolkit.controls.MenuButton.clone","haxe/ui/toolkit/controls/MenuButton.hx",1,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::MenuButton c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic MenuButton_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuButton","self",0x3c1fead3,"haxe.ui.toolkit.controls.MenuButton.self","haxe/ui/toolkit/controls/MenuButton.hx",2,0xfd1e7557)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::MenuButton_obj::__new();
}


::haxe::ui::toolkit::controls::MenuButton MenuButton_obj::_currentMenuButton;


MenuButton_obj::MenuButton_obj()
{
}

void MenuButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuButton);
	HX_MARK_MEMBER_NAME(_menu,"_menu");
	::haxe::ui::toolkit::controls::Button_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_menu,"_menu");
	::haxe::ui::toolkit::controls::Button_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { return _menu; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"showMenu") ) { return showMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"hideMenu") ) { return hideMenu_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMenuOpen") ) { return _onMenuOpen_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMenuSelect") ) { return _onMenuSelect_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onRootMouseDown") ) { return _onRootMouseDown_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_currentMenuButton") ) { return _currentMenuButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_menu") ) { _menu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_currentMenuButton") ) { _currentMenuButton=inValue.Cast< ::haxe::ui::toolkit::controls::MenuButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_menu"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_currentMenuButton"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(MenuButton_obj,_menu),HX_CSTRING("_menu")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_menu"),
	HX_CSTRING("initialize"),
	HX_CSTRING("addChild"),
	HX_CSTRING("_onMouseOver"),
	HX_CSTRING("_onMouseClick"),
	HX_CSTRING("set_selected"),
	HX_CSTRING("_onRootMouseDown"),
	HX_CSTRING("_onMenuSelect"),
	HX_CSTRING("_onMenuOpen"),
	HX_CSTRING("showMenu"),
	HX_CSTRING("hideMenu"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MenuButton_obj::_currentMenuButton,"_currentMenuButton");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MenuButton_obj::_currentMenuButton,"_currentMenuButton");
};

#endif

Class MenuButton_obj::__mClass;

void MenuButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.MenuButton"), hx::TCanCast< MenuButton_obj> ,sStaticFields,sMemberFields,
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

void MenuButton_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
