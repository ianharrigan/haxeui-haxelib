#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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

Void Menu_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","new",0xa09d9a27,"haxe.ui.toolkit.controls.Menu.new","haxe/ui/toolkit/controls/Menu.hx",18,0x362f81e9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	super::__construct();
	HX_STACK_LINE(20)
	::haxe::ds::ObjectMap _g = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->_subMenus = _g;
}
;
	return null();
}

//Menu_obj::~Menu_obj() { }

Dynamic Menu_obj::__CreateEmpty() { return  new Menu_obj; }
hx::ObjectPtr< Menu_obj > Menu_obj::__new()
{  hx::ObjectPtr< Menu_obj > result = new Menu_obj();
	result->__construct();
	return result;}

Dynamic Menu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Menu_obj > result = new Menu_obj();
	result->__construct();
	return result;}

Void Menu_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","initialize",0xe9633e69,"haxe.ui.toolkit.controls.Menu.initialize","haxe/ui/toolkit/controls/Menu.hx",23,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		this->super::initialize();
		HX_STACK_LINE(26)
		::haxe::ui::toolkit::controls::Menu _g = this->get_rootMenu();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		if (((_g == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(27)
			this->get_root()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onRootMouseDown_dyn(),null(),null(),null());
		}
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject Menu_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","addChild",0xc2b93494,"haxe.ui.toolkit.controls.Menu.addChild","haxe/ui/toolkit/controls/Menu.hx",31,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(34)
	if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::controls::MenuItem >()))){
		HX_STACK_LINE(35)
		int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		Dynamic _g1 = this->buildMouseOverFunction(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		(hx::TCast< haxe::ui::toolkit::controls::MenuItem >::cast(child))->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OVER,_g1,null(),null(),null());
		HX_STACK_LINE(36)
		int _g2 = this->get_numChildren();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(36)
		Dynamic _g3 = this->buildMouseClickFunction(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(36)
		(hx::TCast< haxe::ui::toolkit::controls::MenuItem >::cast(child))->addEventListener(::openfl::events::MouseEvent_obj::CLICK,_g3,null(),null(),null());
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g4 = this->super::addChild(child);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(37)
		r = _g4;
	}
	else{
		HX_STACK_LINE(38)
		if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >()))){
			HX_STACK_LINE(39)
			::haxe::ui::toolkit::controls::MenuItem item = ::haxe::ui::toolkit::controls::MenuItem_obj::__new();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(40)
			(hx::TCast< haxe::ui::toolkit::controls::Menu >::cast(child))->_parentMenu = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(41)
			::String _g5 = (hx::TCast< haxe::ui::toolkit::controls::Menu >::cast(child))->get_text();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(41)
			item->set_text(_g5);
			HX_STACK_LINE(42)
			item->set_styleName(HX_CSTRING("expandable"));
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				::haxe::ui::toolkit::controls::Menu value;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(43)
				value = hx::TCast< haxe::ui::toolkit::controls::Menu >::cast(child);
				HX_STACK_LINE(43)
				this->_subMenus->set(item,value);
			}
			HX_STACK_LINE(44)
			this->addChild(item);
		}
	}
	HX_STACK_LINE(47)
	return r;
}


Void Menu_obj::_onRootMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","_onRootMouseDown",0x2828de60,"haxe.ui.toolkit.controls.Menu._onRootMouseDown","haxe/ui/toolkit/controls/Menu.hx",50,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(51)
		bool mouseIn = false;		HX_STACK_VAR(mouseIn,"mouseIn");
		HX_STACK_LINE(52)
		::haxe::ui::toolkit::controls::Menu menu = this->get_rootMenu();		HX_STACK_VAR(menu,"menu");
		HX_STACK_LINE(53)
		while((true)){
			HX_STACK_LINE(53)
			if ((!(((menu != null()))))){
				HX_STACK_LINE(53)
				break;
			}
			HX_STACK_LINE(54)
			bool _g = menu->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			if (((_g == true))){
				HX_STACK_LINE(55)
				mouseIn = true;
				HX_STACK_LINE(56)
				break;
			}
			HX_STACK_LINE(58)
			menu = menu->_currentSubMenu;
		}
		HX_STACK_LINE(61)
		if (((mouseIn == false))){
			HX_STACK_LINE(62)
			this->get_rootMenu()->hideSubMenus();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,_onRootMouseDown,(void))

Dynamic Menu_obj::buildMouseOverFunction( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","buildMouseOverFunction",0x547c31dc,"haxe.ui.toolkit.controls.Menu.buildMouseOverFunction","haxe/ui/toolkit/controls/Menu.hx",66,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(66)
	Array< int > index1 = Array_obj< int >::__new().Add(index);		HX_STACK_VAR(index1,"index1");
	HX_STACK_LINE(66)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Array< int >,index1)
	Void run(::openfl::events::MouseEvent event){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/Menu.hx",67,0x362f81e9)
		HX_STACK_ARG(event,"event")
		{
			HX_STACK_LINE(67)
			_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->mouseOverItem(index1->__get((int)0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(67)
	return  Dynamic(new _Function_1_1(_g,index1));
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,buildMouseOverFunction,return )

Dynamic Menu_obj::buildMouseClickFunction( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","buildMouseClickFunction",0x43e14c30,"haxe.ui.toolkit.controls.Menu.buildMouseClickFunction","haxe/ui/toolkit/controls/Menu.hx",70,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(70)
	Array< int > index1 = Array_obj< int >::__new().Add(index);		HX_STACK_VAR(index1,"index1");
	HX_STACK_LINE(70)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g,Array< int >,index1)
	Void run(::openfl::events::MouseEvent event){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/Menu.hx",71,0x362f81e9)
		HX_STACK_ARG(event,"event")
		{
			HX_STACK_LINE(71)
			_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->mouseClickItem(index1->__get((int)0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(71)
	return  Dynamic(new _Function_1_1(_g,index1));
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,buildMouseClickFunction,return )

Void Menu_obj::mouseClickItem( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","mouseClickItem",0xc1d49c2f,"haxe.ui.toolkit.controls.Menu.mouseClickItem","haxe/ui/toolkit/controls/Menu.hx",74,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(75)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->getChildAt(index);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		if (((_g == null()))){
			HX_STACK_LINE(76)
			return null();
		}
		HX_STACK_LINE(79)
		::haxe::ui::toolkit::controls::MenuItem item;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(79)
		item = hx::TCast< haxe::ui::toolkit::controls::MenuItem >::cast(this->getChildAt(index));
		HX_STACK_LINE(80)
		::haxe::ui::toolkit::controls::Menu subMenu = this->_subMenus->get(item);		HX_STACK_VAR(subMenu,"subMenu");
		HX_STACK_LINE(81)
		if (((subMenu == null()))){
			HX_STACK_LINE(82)
			this->get_rootMenu()->hideSubMenus();
			HX_STACK_LINE(83)
			::haxe::ui::toolkit::events::MenuEvent e = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(::haxe::ui::toolkit::events::MenuEvent_obj::SELECT,item);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(84)
			this->get_rootMenu()->dispatchEvent(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,mouseClickItem,(void))

Void Menu_obj::mouseOverItem( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","mouseOverItem",0xc1bc2453,"haxe.ui.toolkit.controls.Menu.mouseOverItem","haxe/ui/toolkit/controls/Menu.hx",88,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(89)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->getChildAt(index);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		if (((_g == null()))){
			HX_STACK_LINE(90)
			return null();
		}
		HX_STACK_LINE(93)
		::haxe::ui::toolkit::controls::MenuItem item;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(93)
		item = hx::TCast< haxe::ui::toolkit::controls::MenuItem >::cast(this->getChildAt(index));
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::controls::Menu subMenu = this->_subMenus->get(item);		HX_STACK_VAR(subMenu,"subMenu");
		HX_STACK_LINE(96)
		if (((this->_currentItem != null()))){
			HX_STACK_LINE(97)
			this->_currentItem->set_selected(false);
			HX_STACK_LINE(98)
			this->_currentItem = null();
		}
		HX_STACK_LINE(101)
		if (((bool((this->_currentSubMenu != null())) && bool((this->_currentSubMenu != subMenu))))){
			HX_STACK_LINE(102)
			this->hideSubMenus();
		}
		HX_STACK_LINE(105)
		if (((subMenu != null()))){
			HX_STACK_LINE(106)
			this->showSubMenu(item);
			HX_STACK_LINE(107)
			this->_currentItem = item;
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,mouseOverItem,(void))

Void Menu_obj::showSubMenu( ::haxe::ui::toolkit::controls::MenuItem item){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","showSubMenu",0x095be089,"haxe.ui.toolkit.controls.Menu.showSubMenu","haxe/ui/toolkit/controls/Menu.hx",113,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(114)
		item->set_selected(true);
		HX_STACK_LINE(115)
		Array< ::Dynamic > subMenu = Array_obj< ::Dynamic >::__new().Add(this->_subMenus->get(item));		HX_STACK_VAR(subMenu,"subMenu");
		HX_STACK_LINE(116)
		if (((bool((subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >() != null())) && bool((subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >() != this->_currentSubMenu))))){
			HX_STACK_LINE(117)
			Float _g = item->get_stageX();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			Float _g1 = item->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(117)
			Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(117)
			subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->set_x(_g2);
			HX_STACK_LINE(118)
			Float _g3 = item->get_stageY();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(118)
			subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->set_y(_g3);
			HX_STACK_LINE(119)
			this->get_root()->addChild(subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >());
			HX_STACK_LINE(120)
			this->_currentSubMenu = subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >();
			HX_STACK_LINE(122)
			::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(123)
			if (((transition == HX_CSTRING("slide")))){
				HX_STACK_LINE(124)
				subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->set_clipHeight((int)0);
				HX_STACK_LINE(125)
				subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(126)
				subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->set_visible(true);
				HX_STACK_LINE(127)
				Float _g4 = subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->get_height();		HX_STACK_VAR(_g4,"_g4");
				struct _Function_3_1{
					inline static Dynamic Block( Float &_g4){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Menu.hx",127,0x362f81e9)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("clipHeight") , _g4,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(127)
				Dynamic _g5 = _Function_3_1::Block(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(127)
				::motion::easing::IEasing _g6 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g6,"_g6");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,subMenu)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/Menu.hx",128,0x362f81e9)
					{
						HX_STACK_LINE(128)
						subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(127)
				::motion::Actuate_obj::tween(subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >(),.1,_g5,true,null())->ease(_g6)->onComplete( Dynamic(new _Function_3_2(subMenu)),null());
			}
			else{
				HX_STACK_LINE(130)
				if (((transition == HX_CSTRING("fade")))){
					HX_STACK_LINE(131)
					subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->get_sprite()->set_alpha((int)0);
					HX_STACK_LINE(132)
					subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->set_visible(true);
					HX_STACK_LINE(133)
					::openfl::display::Sprite _g7 = subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->get_sprite();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(133)
					::motion::easing::IEasing _g8 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g8,"_g8");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Menu.hx",133,0x362f81e9)
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
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/Menu.hx",133,0x362f81e9)
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(133)
					::motion::Actuate_obj::tween(_g7,.1,_Function_4_1::Block(),true,null())->ease(_g8)->onComplete( Dynamic(new _Function_4_2()),null());
				}
				else{
					HX_STACK_LINE(136)
					subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->get_sprite()->set_alpha((int)1);
					HX_STACK_LINE(137)
					subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->set_visible(true);
				}
			}
			HX_STACK_LINE(140)
			::haxe::ui::toolkit::events::MenuEvent e = ::haxe::ui::toolkit::events::MenuEvent_obj::__new(::haxe::ui::toolkit::events::MenuEvent_obj::OPEN,item);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(141)
			e->menu = subMenu->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >();
			HX_STACK_LINE(142)
			this->get_rootMenu()->dispatchEvent(e);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Menu_obj,showSubMenu,(void))

Void Menu_obj::hideSubMenus( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","hideSubMenus",0xbc80c48f,"haxe.ui.toolkit.controls.Menu.hideSubMenus","haxe/ui/toolkit/controls/Menu.hx",146,0x362f81e9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(146)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		if (((this->_currentSubMenu == null()))){
			HX_STACK_LINE(148)
			return null();
		}
		HX_STACK_LINE(151)
		Array< ::Dynamic > ref = Array_obj< ::Dynamic >::__new().Add(this->_currentSubMenu);		HX_STACK_VAR(ref,"ref");
		HX_STACK_LINE(152)
		ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->hideSubMenus();
		HX_STACK_LINE(153)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::Menu >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(154)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(155)
			this->_currentSubMenu->get_sprite()->set_alpha((int)1);
			HX_STACK_LINE(156)
			::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Menu.hx",156,0x362f81e9)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("clipHeight") , (int)0,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,ref,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/Menu.hx",156,0x362f81e9)
				{
					HX_STACK_LINE(157)
					ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->set_visible(false);
					HX_STACK_LINE(158)
					ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->clearClip();
					HX_STACK_LINE(159)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->get_root()->removeChild(ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >(),false);
					HX_STACK_LINE(160)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->_currentSubMenu = null();
					HX_STACK_LINE(161)
					ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->hideSubMenus();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(156)
			::motion::Actuate_obj::tween(ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >(),.1,_Function_2_1::Block(),true,null())->ease(_g1)->onComplete( Dynamic(new _Function_2_2(ref,_g)),null());
		}
		else{
			HX_STACK_LINE(163)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(164)
				::openfl::display::Sprite _g1 = ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->get_sprite();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(164)
				::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Menu.hx",164,0x362f81e9)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)0,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,ref,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/Menu.hx",164,0x362f81e9)
					{
						HX_STACK_LINE(165)
						ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->set_visible(false);
						HX_STACK_LINE(166)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->get_root()->removeChild(ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >(),false);
						HX_STACK_LINE(167)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->_currentSubMenu = null();
						HX_STACK_LINE(168)
						ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->hideSubMenus();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(164)
				::motion::Actuate_obj::tween(_g1,.1,_Function_3_1::Block(),true,null())->ease(_g2)->onComplete( Dynamic(new _Function_3_2(ref,_g)),null());
			}
			else{
				HX_STACK_LINE(171)
				ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(172)
				ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->set_visible(false);
				HX_STACK_LINE(173)
				this->get_root()->removeChild(ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >(),false);
				HX_STACK_LINE(174)
				this->_currentSubMenu = null();
				HX_STACK_LINE(175)
				ref->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::Menu >()->hideSubMenus();
			}
		}
		HX_STACK_LINE(178)
		if (((this->_currentItem != null()))){
			HX_STACK_LINE(179)
			this->_currentItem->set_selected(false);
			HX_STACK_LINE(180)
			this->_currentItem = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,hideSubMenus,(void))

::haxe::ui::toolkit::controls::Menu Menu_obj::get_currentSubMenu( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","get_currentSubMenu",0x801b7ee8,"haxe.ui.toolkit.controls.Menu.get_currentSubMenu","haxe/ui/toolkit/controls/Menu.hx",190,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	return this->_currentSubMenu;
}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,get_currentSubMenu,return )

::haxe::ui::toolkit::controls::Menu Menu_obj::get_parentMenu( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","get_parentMenu",0x6897e9cb,"haxe.ui.toolkit.controls.Menu.get_parentMenu","haxe/ui/toolkit/controls/Menu.hx",194,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	return this->_parentMenu;
}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,get_parentMenu,return )

::haxe::ui::toolkit::controls::Menu Menu_obj::get_rootMenu( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","get_rootMenu",0x15421243,"haxe.ui.toolkit.controls.Menu.get_rootMenu","haxe/ui/toolkit/controls/Menu.hx",197,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	::haxe::ui::toolkit::controls::Menu menu = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(menu,"menu");
	HX_STACK_LINE(199)
	while((true)){
		HX_STACK_LINE(199)
		if ((!(((menu->_parentMenu != null()))))){
			HX_STACK_LINE(199)
			break;
		}
		HX_STACK_LINE(200)
		menu = menu->_parentMenu;
	}
	HX_STACK_LINE(203)
	return menu;
}


HX_DEFINE_DYNAMIC_FUNC0(Menu_obj,get_rootMenu,return )

Dynamic Menu_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","clone",0xe6081ce4,"haxe.ui.toolkit.controls.Menu.clone","haxe/ui/toolkit/controls/Menu.hx",1,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Menu c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic Menu_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Menu","self",0xec974fe5,"haxe.ui.toolkit.controls.Menu.self","haxe/ui/toolkit/controls/Menu.hx",2,0x362f81e9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::Menu_obj::__new();
}



Menu_obj::Menu_obj()
{
}

void Menu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Menu);
	HX_MARK_MEMBER_NAME(_subMenus,"_subMenus");
	HX_MARK_MEMBER_NAME(_currentItem,"_currentItem");
	HX_MARK_MEMBER_NAME(_currentSubMenu,"_currentSubMenu");
	HX_MARK_MEMBER_NAME(_parentMenu,"_parentMenu");
	HX_MARK_MEMBER_NAME(currentSubMenu,"currentSubMenu");
	HX_MARK_MEMBER_NAME(parentMenu,"parentMenu");
	HX_MARK_MEMBER_NAME(rootMenu,"rootMenu");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Menu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_subMenus,"_subMenus");
	HX_VISIT_MEMBER_NAME(_currentItem,"_currentItem");
	HX_VISIT_MEMBER_NAME(_currentSubMenu,"_currentSubMenu");
	HX_VISIT_MEMBER_NAME(_parentMenu,"_parentMenu");
	HX_VISIT_MEMBER_NAME(currentSubMenu,"currentSubMenu");
	HX_VISIT_MEMBER_NAME(parentMenu,"parentMenu");
	HX_VISIT_MEMBER_NAME(rootMenu,"rootMenu");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Menu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"rootMenu") ) { return inCallProp ? get_rootMenu() : rootMenu; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_subMenus") ) { return _subMenus; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"parentMenu") ) { return inCallProp ? get_parentMenu() : parentMenu; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_parentMenu") ) { return _parentMenu; }
		if (HX_FIELD_EQ(inName,"showSubMenu") ) { return showSubMenu_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentItem") ) { return _currentItem; }
		if (HX_FIELD_EQ(inName,"hideSubMenus") ) { return hideSubMenus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rootMenu") ) { return get_rootMenu_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseOverItem") ) { return mouseOverItem_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"mouseClickItem") ) { return mouseClickItem_dyn(); }
		if (HX_FIELD_EQ(inName,"currentSubMenu") ) { return inCallProp ? get_currentSubMenu() : currentSubMenu; }
		if (HX_FIELD_EQ(inName,"get_parentMenu") ) { return get_parentMenu_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_currentSubMenu") ) { return _currentSubMenu; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onRootMouseDown") ) { return _onRootMouseDown_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_currentSubMenu") ) { return get_currentSubMenu_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"buildMouseOverFunction") ) { return buildMouseOverFunction_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"buildMouseClickFunction") ) { return buildMouseClickFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Menu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"rootMenu") ) { rootMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_subMenus") ) { _subMenus=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parentMenu") ) { parentMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_parentMenu") ) { _parentMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_currentItem") ) { _currentItem=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentSubMenu") ) { currentSubMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_currentSubMenu") ) { _currentSubMenu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Menu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_subMenus"));
	outFields->push(HX_CSTRING("_currentItem"));
	outFields->push(HX_CSTRING("_currentSubMenu"));
	outFields->push(HX_CSTRING("_parentMenu"));
	outFields->push(HX_CSTRING("currentSubMenu"));
	outFields->push(HX_CSTRING("parentMenu"));
	outFields->push(HX_CSTRING("rootMenu"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::ObjectMap*/ ,(int)offsetof(Menu_obj,_subMenus),HX_CSTRING("_subMenus")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(Menu_obj,_currentItem),HX_CSTRING("_currentItem")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,_currentSubMenu),HX_CSTRING("_currentSubMenu")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,_parentMenu),HX_CSTRING("_parentMenu")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,currentSubMenu),HX_CSTRING("currentSubMenu")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,parentMenu),HX_CSTRING("parentMenu")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(Menu_obj,rootMenu),HX_CSTRING("rootMenu")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_subMenus"),
	HX_CSTRING("_currentItem"),
	HX_CSTRING("_currentSubMenu"),
	HX_CSTRING("_parentMenu"),
	HX_CSTRING("initialize"),
	HX_CSTRING("addChild"),
	HX_CSTRING("_onRootMouseDown"),
	HX_CSTRING("buildMouseOverFunction"),
	HX_CSTRING("buildMouseClickFunction"),
	HX_CSTRING("mouseClickItem"),
	HX_CSTRING("mouseOverItem"),
	HX_CSTRING("showSubMenu"),
	HX_CSTRING("hideSubMenus"),
	HX_CSTRING("currentSubMenu"),
	HX_CSTRING("parentMenu"),
	HX_CSTRING("rootMenu"),
	HX_CSTRING("get_currentSubMenu"),
	HX_CSTRING("get_parentMenu"),
	HX_CSTRING("get_rootMenu"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Menu_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Menu_obj::__mClass,"__mClass");
};

#endif

Class Menu_obj::__mClass;

void Menu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Menu"), hx::TCanCast< Menu_obj> ,sStaticFields,sMemberFields,
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

void Menu_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
