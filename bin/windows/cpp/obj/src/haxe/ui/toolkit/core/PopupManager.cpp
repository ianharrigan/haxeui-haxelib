#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_BusyPopupContent
#include <haxe/ui/toolkit/controls/popups/BusyPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CalendarPopupContent
#include <haxe/ui/toolkit/controls/popups/CalendarPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CustomPopupContent
#include <haxe/ui/toolkit/controls/popups/CustomPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_ListPopupContent
#include <haxe/ui/toolkit/controls/popups/ListPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_SimplePopupContent
#include <haxe/ui/toolkit/controls/popups/SimplePopupContent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo
#include <haxe/ui/toolkit/core/PopupButtonInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_RootManager
#include <haxe/ui/toolkit/core/RootManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void PopupManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","new",0xa4c2ad20,"haxe.ui.toolkit.core.PopupManager.new","haxe/ui/toolkit/core/PopupManager.hx",18,0xc348cc90)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(32)
	this->defaultWidth = (int)300;
	HX_STACK_LINE(31)
	this->defaultTitle = HX_CSTRING("HaxeUI");
}
;
	return null();
}

//PopupManager_obj::~PopupManager_obj() { }

Dynamic PopupManager_obj::__CreateEmpty() { return  new PopupManager_obj; }
hx::ObjectPtr< PopupManager_obj > PopupManager_obj::__new()
{  hx::ObjectPtr< PopupManager_obj > result = new PopupManager_obj();
	result->__construct();
	return result;}

Dynamic PopupManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupManager_obj > result = new PopupManager_obj();
	result->__construct();
	return result;}

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showSimple( ::String text,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showSimple",0x472de44f,"haxe.ui.toolkit.core.PopupManager.showSimple","haxe/ui/toolkit/core/PopupManager.hx",38,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::controls::popups::SimplePopupContent _g = ::haxe::ui::toolkit::controls::popups::SimplePopupContent_obj::__new(text);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::controls::popups::Popup p = this->buildPopup(_g,title,config,fn);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(40)
		this->showPopup(p);
		HX_STACK_LINE(41)
		return p;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(PopupManager_obj,showSimple,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showCustom( ::haxe::ui::toolkit::core::interfaces::IDisplayObject display,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showCustom",0xce4167ce,"haxe.ui.toolkit.core.PopupManager.showCustom","haxe/ui/toolkit/core/PopupManager.hx",44,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(display,"display")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::controls::popups::CustomPopupContent _g = ::haxe::ui::toolkit::controls::popups::CustomPopupContent_obj::__new(display);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::controls::popups::Popup p = this->buildPopup(_g,title,config,fn);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(46)
		this->showPopup(p);
		HX_STACK_LINE(47)
		return p;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(PopupManager_obj,showCustom,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showList( Dynamic items,hx::Null< int >  __o_selectedIndex,::String title,Dynamic config,Dynamic fn){
int selectedIndex = __o_selectedIndex.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showList",0x83f2cb3b,"haxe.ui.toolkit.core.PopupManager.showList","haxe/ui/toolkit/core/PopupManager.hx",50,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(items,"items")
	HX_STACK_ARG(selectedIndex,"selectedIndex")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(51)
		::haxe::ui::toolkit::data::IDataSource ds = null();		HX_STACK_VAR(ds,"ds");
		HX_STACK_LINE(52)
		if ((::Std_obj::is(items,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(53)
			Dynamic arr;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(53)
			arr = hx::TCastToArray(items);
			HX_STACK_LINE(54)
			::haxe::ui::toolkit::data::ArrayDataSource _g = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			ds = _g;
			HX_STACK_LINE(55)
			{
				HX_STACK_LINE(55)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(55)
				while((true)){
					HX_STACK_LINE(55)
					if ((!(((_g1 < arr->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(55)
						break;
					}
					HX_STACK_LINE(55)
					Dynamic item = arr->__GetItem(_g1);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(55)
					++(_g1);
					HX_STACK_LINE(56)
					if ((::Std_obj::is(item,hx::ClassOf< ::String >()))){
						struct _Function_5_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",57,0xc348cc90)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(57)
						Dynamic o = _Function_5_1::Block();		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(58)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(58)
						_g11 = hx::TCast< String >::cast(item);
						HX_STACK_LINE(58)
						o->__FieldRef(HX_CSTRING("text")) = _g11;
						HX_STACK_LINE(59)
						ds->add(o);
					}
					else{
						HX_STACK_LINE(61)
						ds->add(item);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(64)
			if ((::Std_obj::is(items,hx::ClassOf< ::haxe::ui::toolkit::data::IDataSource >()))){
				HX_STACK_LINE(65)
				::haxe::ui::toolkit::data::IDataSource _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(65)
				_g2 = hx::TCast< haxe::ui::toolkit::data::IDataSource >::cast(items);
				HX_STACK_LINE(65)
				ds = _g2;
			}
		}
		HX_STACK_LINE(68)
		::haxe::ui::toolkit::controls::popups::ListPopupContent _g3 = ::haxe::ui::toolkit::controls::popups::ListPopupContent_obj::__new(ds,selectedIndex,fn);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(68)
		::haxe::ui::toolkit::controls::popups::Popup p = this->buildPopup(_g3,title,config,fn);		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(69)
		this->showPopup(p);
		HX_STACK_LINE(70)
		return p;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(PopupManager_obj,showList,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showCalendar( ::String title,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showCalendar",0x3f66401b,"haxe.ui.toolkit.core.PopupManager.showCalendar","haxe/ui/toolkit/core/PopupManager.hx",73,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(73)
	Dynamic fn1 = Dynamic( Array_obj<Dynamic>::__new().Add(fn));		HX_STACK_VAR(fn1,"fn1");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",74,0xc348cc90)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("modal") , true,false);
				__result->Add(HX_CSTRING("buttons") , (int)69632,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(74)
	Dynamic config = _Function_1_1::Block();		HX_STACK_VAR(config,"config");
	HX_STACK_LINE(75)
	Array< ::Dynamic > content = Array_obj< ::Dynamic >::__new().Add(::haxe::ui::toolkit::controls::popups::CalendarPopupContent_obj::__new());		HX_STACK_VAR(content,"content");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,content,Dynamic,fn1)
	Void run(Dynamic button){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/toolkit/core/PopupManager.hx",77,0xc348cc90)
		HX_STACK_ARG(button,"button")
		{
			HX_STACK_LINE(77)
			if (((fn1->__GetItem((int)0) != null()))){
				HX_STACK_LINE(78)
				if (((button == (int)65536))){
					HX_STACK_LINE(79)
					::Date _g = content->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::CalendarPopupContent >()->get_selectedDate();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(79)
					fn1->__GetItem((int)0)(button,_g).Cast< Void >();
				}
				else{
					HX_STACK_LINE(81)
					fn1->__GetItem((int)0)(button,null()).Cast< Void >();
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(76)
	Dynamic tempFn =  Dynamic(new _Function_1_2(content,fn1));		HX_STACK_VAR(tempFn,"tempFn");
	HX_STACK_LINE(86)
	::haxe::ui::toolkit::controls::popups::Popup p = this->buildPopup(content->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::CalendarPopupContent >(),title,config,tempFn);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(87)
	this->showPopup(p);
	HX_STACK_LINE(88)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC2(PopupManager_obj,showCalendar,return )

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::showBusy( ::String text,hx::Null< int >  __o_delay,::String title,Dynamic config,Dynamic fn){
int delay = __o_delay.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showBusy",0x7d5fc416,"haxe.ui.toolkit.core.PopupManager.showBusy","haxe/ui/toolkit/core/PopupManager.hx",91,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(91)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		if (((config == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",93,0xc348cc90)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(93)
			config = _Function_2_1::Block();
		}
		HX_STACK_LINE(95)
		config->__FieldRef(HX_CSTRING("useDefaultTitle")) = false;
		HX_STACK_LINE(96)
		::haxe::ui::toolkit::controls::popups::BusyPopupContent _g1 = ::haxe::ui::toolkit::controls::popups::BusyPopupContent_obj::__new(text);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(96)
		Array< ::Dynamic > p = Array_obj< ::Dynamic >::__new().Add(this->buildPopup(_g1,title,config,fn));		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(97)
		this->showPopup(p->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >());
		HX_STACK_LINE(99)
		if (((delay > (int)0))){
			HX_STACK_LINE(100)
			Array< ::Dynamic > timer = Array_obj< ::Dynamic >::__new().Add(::haxe::Timer_obj::__new(delay));		HX_STACK_VAR(timer,"timer");

			HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g,Array< ::Dynamic >,timer,Array< ::Dynamic >,p)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/core/PopupManager.hx",101,0xc348cc90)
				{
					HX_STACK_LINE(102)
					timer->__get((int)0).StaticCast< ::haxe::Timer >()->stop();
					HX_STACK_LINE(103)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::PopupManager >()->hidePopup(p->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(101)
			timer->__get((int)0).StaticCast< ::haxe::Timer >()->run =  Dynamic(new _Function_2_1(_g,timer,p));
		}
		HX_STACK_LINE(107)
		return p->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >();
	}
}


HX_DEFINE_DYNAMIC_FUNC5(PopupManager_obj,showBusy,return )

Void PopupManager_obj::showPopup( ::haxe::ui::toolkit::controls::popups::Popup p){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","showPopup",0x420e5caf,"haxe.ui.toolkit.core.PopupManager.showPopup","haxe/ui/toolkit/core/PopupManager.hx",110,0xc348cc90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(111)
		bool modal = true;		HX_STACK_VAR(modal,"modal");
		HX_STACK_LINE(112)
		if (((p->get_config()->__Field(HX_CSTRING("modal"),true) != null()))){
			HX_STACK_LINE(113)
			modal = p->get_config()->__Field(HX_CSTRING("modal"),true);
		}
		HX_STACK_LINE(115)
		if (((modal == true))){
			HX_STACK_LINE(116)
			p->get_root()->showModalOverlay();
		}
		HX_STACK_LINE(118)
		p->get_root()->addChild(p);
		HX_STACK_LINE(119)
		this->centerPopup(p);
		HX_STACK_LINE(121)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(122)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(123)
			Float ypos = p->get_y();		HX_STACK_VAR(ypos,"ypos");
			HX_STACK_LINE(124)
			Float _g = -(p->get_height());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(124)
			p->set_y(_g);
			HX_STACK_LINE(125)
			p->set_visible(true);
			HX_STACK_LINE(126)
			::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Dynamic Block( Float &ypos){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",126,0xc348cc90)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("y") , ypos,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_2)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/core/PopupManager.hx",126,0xc348cc90)
				{
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(126)
			::motion::Actuate_obj::tween(p,.2,_Function_2_1::Block(ypos),true,null())->ease(_g1)->onComplete( Dynamic(new _Function_2_2()),null());
		}
		else{
			HX_STACK_LINE(128)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(129)
				p->get_sprite()->set_alpha((int)0);
				HX_STACK_LINE(130)
				p->set_visible(true);
				HX_STACK_LINE(131)
				::openfl::display::Sprite _g2 = p->get_sprite();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(131)
				::motion::easing::IEasing _g3 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g3,"_g3");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",131,0xc348cc90)
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
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/core/PopupManager.hx",131,0xc348cc90)
					{
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(131)
				::motion::Actuate_obj::tween(_g2,.2,_Function_3_1::Block(),true,null())->ease(_g3)->onComplete( Dynamic(new _Function_3_2()),null());
			}
			else{
				HX_STACK_LINE(134)
				p->set_visible(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,showPopup,(void))

Void PopupManager_obj::hidePopup( ::haxe::ui::toolkit::controls::popups::Popup p,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","hidePopup",0x6f08b2ca,"haxe.ui.toolkit.core.PopupManager.hidePopup","haxe/ui/toolkit/core/PopupManager.hx",138,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(138)
		Array< bool > dispose1 = Array_obj< bool >::__new().Add(dispose);		HX_STACK_VAR(dispose1,"dispose1");
		HX_STACK_LINE(138)
		Array< ::Dynamic > p1 = Array_obj< ::Dynamic >::__new().Add(p);		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(139)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(140)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(141)
			Float _g = p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->get_height();		HX_STACK_VAR(_g,"_g");
			struct _Function_2_1{
				inline static Dynamic Block( Float &_g){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",141,0xc348cc90)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("y") , _g,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(141)
			Dynamic _g1 = _Function_2_1::Block(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(141)
			::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_2,Array< bool >,dispose1,Array< ::Dynamic >,p1)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/core/PopupManager.hx",141,0xc348cc90)
				{
					HX_STACK_LINE(142)
					p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->removeChild(p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),dispose1->__get((int)0));
					HX_STACK_LINE(143)
					p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->hideModalOverlay();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(141)
			::motion::Actuate_obj::tween(p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),.2,_g1,true,null())->ease(_g2)->onComplete( Dynamic(new _Function_2_2(dispose1,p1)),null());
		}
		else{
			HX_STACK_LINE(145)
			if (((transition == HX_CSTRING("fade")))){
				HX_STACK_LINE(146)
				::openfl::display::Sprite _g3 = p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_sprite();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(146)
				::motion::easing::IEasing _g4 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g4,"_g4");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",146,0xc348cc90)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)0,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_2,Array< bool >,dispose1,Array< ::Dynamic >,p1)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/core/PopupManager.hx",146,0xc348cc90)
					{
						HX_STACK_LINE(147)
						p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->removeChild(p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),dispose1->__get((int)0));
						HX_STACK_LINE(148)
						p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->hideModalOverlay();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(146)
				::motion::Actuate_obj::tween(_g3,.2,_Function_3_1::Block(),true,null())->ease(_g4)->onComplete( Dynamic(new _Function_3_2(dispose1,p1)),null());
			}
			else{
				HX_STACK_LINE(151)
				p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->removeChild(p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >(),dispose1->__get((int)0));
				HX_STACK_LINE(152)
				p1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->get_root()->hideModalOverlay();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PopupManager_obj,hidePopup,(void))

Void PopupManager_obj::centerPopup( ::haxe::ui::toolkit::controls::popups::Popup p){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","centerPopup",0x061eacd7,"haxe.ui.toolkit.core.PopupManager.centerPopup","haxe/ui/toolkit/core/PopupManager.hx",156,0xc348cc90)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_LINE(157)
		Float _g = p->get_root()->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		Float _g2 = p->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(157)
		Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(157)
		Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(157)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(157)
		p->set_x(_g5);
		HX_STACK_LINE(158)
		Float _g6 = p->get_root()->get_height();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(158)
		Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(158)
		Float _g8 = p->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(158)
		Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(158)
		Float _g10 = (_g7 - _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(158)
		int _g11 = ::Std_obj::_int(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(158)
		p->set_y(_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,centerPopup,(void))

::haxe::ui::toolkit::controls::popups::Popup PopupManager_obj::buildPopup( ::haxe::ui::toolkit::controls::popups::PopupContent content,::String title,Dynamic config,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","buildPopup",0x8042935e,"haxe.ui.toolkit.core.PopupManager.buildPopup","haxe/ui/toolkit/core/PopupManager.hx",161,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(content,"content")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(162)
	Dynamic _g = this->buildConfig(config);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(162)
	config = _g;
	HX_STACK_LINE(163)
	if (((bool((title == null())) && bool((config->__Field(HX_CSTRING("useDefaultTitle"),true) == true))))){
		HX_STACK_LINE(164)
		title = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->defaultTitle;
	}
	HX_STACK_LINE(166)
	::haxe::ui::toolkit::controls::popups::Popup p = ::haxe::ui::toolkit::controls::popups::Popup_obj::__new(title,content,config,fn);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(167)
	p->set_root(config->__Field(HX_CSTRING("root"),true));
	HX_STACK_LINE(168)
	p->set_visible(false);
	HX_STACK_LINE(170)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC4(PopupManager_obj,buildPopup,return )

Dynamic PopupManager_obj::buildConfig( Dynamic config){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","buildConfig",0x85fcd950,"haxe.ui.toolkit.core.PopupManager.buildConfig","haxe/ui/toolkit/core/PopupManager.hx",173,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(config,"config")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",174,0xc348cc90)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(174)
	Dynamic c = _Function_1_1::Block();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(175)
	c->__FieldRef(HX_CSTRING("id")) = null();
	HX_STACK_LINE(176)
	c->__FieldRef(HX_CSTRING("styleName")) = null();
	HX_STACK_LINE(177)
	c->__FieldRef(HX_CSTRING("modal")) = true;
	HX_STACK_LINE(178)
	c->__FieldRef(HX_CSTRING("width")) = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->defaultWidth;
	HX_STACK_LINE(179)
	c->__FieldRef(HX_CSTRING("useDefaultTitle")) = true;
	HX_STACK_LINE(180)
	::haxe::ui::toolkit::core::Root _g = ::haxe::ui::toolkit::core::RootManager_obj::get_instance()->get_currentRoot();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(180)
	c->__FieldRef(HX_CSTRING("root")) = _g;
	struct _Function_1_2{
		inline static bool Block( Dynamic &config){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/PopupManager.hx",182,0xc348cc90)
			{
				HX_STACK_LINE(182)
				bool _g1 = ::Std_obj::is(config,hx::ClassOf< ::Int >());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(182)
				return (_g1 == false);
			}
			return null();
		}
	};
	HX_STACK_LINE(182)
	if (((  (((config != null()))) ? bool(_Function_1_2::Block(config)) : bool(false) ))){
		HX_STACK_LINE(183)
		if (((config->__Field(HX_CSTRING("id"),true) != null()))){
			HX_STACK_LINE(183)
			c->__FieldRef(HX_CSTRING("id")) = config->__Field(HX_CSTRING("id"),true);
		}
		else{
			HX_STACK_LINE(183)
			c->__FieldRef(HX_CSTRING("id")) = null();
		}
		HX_STACK_LINE(184)
		if (((config->__Field(HX_CSTRING("styleName"),true) != null()))){
			HX_STACK_LINE(184)
			c->__FieldRef(HX_CSTRING("styleName")) = config->__Field(HX_CSTRING("styleName"),true);
		}
		else{
			HX_STACK_LINE(184)
			c->__FieldRef(HX_CSTRING("styleName")) = null();
		}
		HX_STACK_LINE(185)
		if (((config->__Field(HX_CSTRING("modal"),true) != null()))){
			HX_STACK_LINE(185)
			c->__FieldRef(HX_CSTRING("modal")) = config->__Field(HX_CSTRING("modal"),true);
		}
		else{
			HX_STACK_LINE(185)
			c->__FieldRef(HX_CSTRING("modal")) = true;
		}
		HX_STACK_LINE(186)
		if (((config->__Field(HX_CSTRING("width"),true) != null()))){
			HX_STACK_LINE(186)
			c->__FieldRef(HX_CSTRING("width")) = config->__Field(HX_CSTRING("width"),true);
		}
		else{
			HX_STACK_LINE(186)
			c->__FieldRef(HX_CSTRING("width")) = ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->defaultWidth;
		}
		HX_STACK_LINE(187)
		if (((config->__Field(HX_CSTRING("useDefaultTitle"),true) != null()))){
			HX_STACK_LINE(187)
			c->__FieldRef(HX_CSTRING("useDefaultTitle")) = config->__Field(HX_CSTRING("useDefaultTitle"),true);
		}
		else{
			HX_STACK_LINE(187)
			c->__FieldRef(HX_CSTRING("useDefaultTitle")) = true;
		}
		HX_STACK_LINE(188)
		Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(188)
		if (((config->__Field(HX_CSTRING("root"),true) != null()))){
			HX_STACK_LINE(188)
			_g2 = config->__Field(HX_CSTRING("root"),true);
		}
		else{
			HX_STACK_LINE(188)
			_g2 = ::haxe::ui::toolkit::core::RootManager_obj::get_instance()->get_currentRoot();
		}
		HX_STACK_LINE(188)
		c->__FieldRef(HX_CSTRING("root")) = _g2;
	}
	HX_STACK_LINE(191)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(191)
	c->__FieldRef(HX_CSTRING("buttons")) = _g3;
	HX_STACK_LINE(192)
	if (((config != null()))){
		HX_STACK_LINE(193)
		if ((::Std_obj::is(config,hx::ClassOf< ::Int >()))){
			HX_STACK_LINE(194)
			Array< ::Dynamic > _g4 = this->buildButtonArray(config);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(194)
			c->__FieldRef(HX_CSTRING("buttons")) = _g4;
		}
		else{
			HX_STACK_LINE(195)
			if ((::Std_obj::is(config,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(196)
				Array< ::Dynamic > _g5 = this->buildButtonArray(config);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(196)
				c->__FieldRef(HX_CSTRING("buttons")) = _g5;
			}
			else{
				HX_STACK_LINE(198)
				if (((config->__Field(HX_CSTRING("buttons"),true) != null()))){
					HX_STACK_LINE(199)
					Array< ::Dynamic > _g6 = this->buildButtonArray(config->__Field(HX_CSTRING("buttons"),true));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(199)
					c->__FieldRef(HX_CSTRING("buttons")) = _g6;
				}
			}
		}
	}
	HX_STACK_LINE(204)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,buildConfig,return )

Array< ::Dynamic > PopupManager_obj::buildButtonArray( Dynamic data){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","buildButtonArray",0x4865a8f9,"haxe.ui.toolkit.core.PopupManager.buildButtonArray","haxe/ui/toolkit/core/PopupManager.hx",207,0xc348cc90)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(208)
	Array< ::Dynamic > buttons = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(buttons,"buttons");
	HX_STACK_LINE(209)
	if ((::Std_obj::is(data,hx::ClassOf< ::Int >()))){
		HX_STACK_LINE(210)
		int n;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(210)
		n = hx::TCast< Int >::cast(data);
		HX_STACK_LINE(211)
		if (((((int(n) & int((int)1))) == (int)1))){
			HX_STACK_LINE(212)
			::haxe::ui::toolkit::core::PopupButtonInfo _g = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)1,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(212)
			buttons->push(_g);
		}
		HX_STACK_LINE(214)
		if (((((int(n) & int((int)16))) == (int)16))){
			HX_STACK_LINE(215)
			::haxe::ui::toolkit::core::PopupButtonInfo _g1 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)16,null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(215)
			buttons->push(_g1);
		}
		HX_STACK_LINE(217)
		if (((((int(n) & int((int)256))) == (int)256))){
			HX_STACK_LINE(218)
			::haxe::ui::toolkit::core::PopupButtonInfo _g2 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)256,null(),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(218)
			buttons->push(_g2);
		}
		HX_STACK_LINE(220)
		if (((((int(n) & int((int)4096))) == (int)4096))){
			HX_STACK_LINE(221)
			::haxe::ui::toolkit::core::PopupButtonInfo _g3 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)4096,null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(221)
			buttons->push(_g3);
		}
		HX_STACK_LINE(223)
		if (((((int(n) & int((int)65536))) == (int)65536))){
			HX_STACK_LINE(224)
			::haxe::ui::toolkit::core::PopupButtonInfo _g4 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)65536,null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(224)
			buttons->push(_g4);
		}
		HX_STACK_LINE(226)
		if (((((int(n) & int((int)1048576))) == (int)1048576))){
			HX_STACK_LINE(227)
			::haxe::ui::toolkit::core::PopupButtonInfo _g5 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new((int)1048576,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(227)
			buttons->push(_g5);
		}
	}
	else{
		HX_STACK_LINE(229)
		if ((::Std_obj::is(data,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(230)
			Dynamic arr = data;		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(231)
			{
				HX_STACK_LINE(231)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(231)
				while((true)){
					HX_STACK_LINE(231)
					if ((!(((_g < arr->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(231)
						break;
					}
					HX_STACK_LINE(231)
					Dynamic item = arr->__GetItem(_g);		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(231)
					++(_g);
					HX_STACK_LINE(232)
					if ((::Std_obj::is(item,hx::ClassOf< ::Int >()))){
						HX_STACK_LINE(233)
						int _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(233)
						_g6 = hx::TCast< Int >::cast(item);
						HX_STACK_LINE(233)
						::haxe::ui::toolkit::core::PopupButtonInfo _g7 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new(_g6,null(),null());		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(233)
						buttons->push(_g7);
					}
					else{
						HX_STACK_LINE(235)
						int type = (int)16777216;		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(236)
						if (((item->__Field(HX_CSTRING("type"),true) != null()))){
							HX_STACK_LINE(237)
							type = item->__Field(HX_CSTRING("type"),true);
						}
						HX_STACK_LINE(239)
						::String text = item->__Field(HX_CSTRING("text"),true);		HX_STACK_VAR(text,"text");
						HX_STACK_LINE(240)
						Dynamic fn = item->__Field(HX_CSTRING("fn"),true);		HX_STACK_VAR(fn,"fn");
						HX_STACK_LINE(241)
						::haxe::ui::toolkit::core::PopupButtonInfo _g8 = ::haxe::ui::toolkit::core::PopupButtonInfo_obj::__new(type,text,fn);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(241)
						buttons->push(_g8);
					}
				}
			}
		}
	}
	HX_STACK_LINE(245)
	return buttons;
}


HX_DEFINE_DYNAMIC_FUNC1(PopupManager_obj,buildButtonArray,return )

::haxe::ui::toolkit::core::PopupManager PopupManager_obj::_instance;

::haxe::ui::toolkit::core::PopupManager PopupManager_obj::instance;

::haxe::ui::toolkit::core::PopupManager PopupManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.PopupManager","get_instance",0xa3aa5ede,"haxe.ui.toolkit.core.PopupManager.get_instance","haxe/ui/toolkit/core/PopupManager.hx",21,0xc348cc90)
	HX_STACK_LINE(22)
	if (((::haxe::ui::toolkit::core::PopupManager_obj::_instance == null()))){
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::core::PopupManager _g = ::haxe::ui::toolkit::core::PopupManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		::haxe::ui::toolkit::core::PopupManager_obj::_instance = _g;
	}
	HX_STACK_LINE(25)
	return ::haxe::ui::toolkit::core::PopupManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(PopupManager_obj,get_instance,return )


PopupManager_obj::PopupManager_obj()
{
}

void PopupManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PopupManager);
	HX_MARK_MEMBER_NAME(defaultTitle,"defaultTitle");
	HX_MARK_MEMBER_NAME(defaultWidth,"defaultWidth");
	HX_MARK_END_CLASS();
}

void PopupManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultTitle,"defaultTitle");
	HX_VISIT_MEMBER_NAME(defaultWidth,"defaultWidth");
}

Dynamic PopupManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"showList") ) { return showList_dyn(); }
		if (HX_FIELD_EQ(inName,"showBusy") ) { return showBusy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"showPopup") ) { return showPopup_dyn(); }
		if (HX_FIELD_EQ(inName,"hidePopup") ) { return hidePopup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"showSimple") ) { return showSimple_dyn(); }
		if (HX_FIELD_EQ(inName,"showCustom") ) { return showCustom_dyn(); }
		if (HX_FIELD_EQ(inName,"buildPopup") ) { return buildPopup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"centerPopup") ) { return centerPopup_dyn(); }
		if (HX_FIELD_EQ(inName,"buildConfig") ) { return buildConfig_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"defaultTitle") ) { return defaultTitle; }
		if (HX_FIELD_EQ(inName,"defaultWidth") ) { return defaultWidth; }
		if (HX_FIELD_EQ(inName,"showCalendar") ) { return showCalendar_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"buildButtonArray") ) { return buildButtonArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PopupManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::PopupManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::PopupManager >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultTitle") ) { defaultTitle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultWidth") ) { defaultWidth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("defaultTitle"));
	outFields->push(HX_CSTRING("defaultWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(PopupManager_obj,defaultTitle),HX_CSTRING("defaultTitle")},
	{hx::fsInt,(int)offsetof(PopupManager_obj,defaultWidth),HX_CSTRING("defaultWidth")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("defaultTitle"),
	HX_CSTRING("defaultWidth"),
	HX_CSTRING("showSimple"),
	HX_CSTRING("showCustom"),
	HX_CSTRING("showList"),
	HX_CSTRING("showCalendar"),
	HX_CSTRING("showBusy"),
	HX_CSTRING("showPopup"),
	HX_CSTRING("hidePopup"),
	HX_CSTRING("centerPopup"),
	HX_CSTRING("buildPopup"),
	HX_CSTRING("buildConfig"),
	HX_CSTRING("buildButtonArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PopupManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(PopupManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PopupManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(PopupManager_obj::instance,"instance");
};

#endif

Class PopupManager_obj::__mClass;

void PopupManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.PopupManager"), hx::TCanCast< PopupManager_obj> ,sStaticFields,sMemberFields,
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

void PopupManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
