#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Stack
#include <haxe/ui/toolkit/containers/Stack.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void Stack_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","new",0xb76a7480,"haxe.ui.toolkit.containers.Stack.new","haxe/ui/toolkit/containers/Stack.hx",10,0xfd2b75f0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->_history = ::List_obj::__new();
	HX_STACK_LINE(12)
	this->_selectedIndex = (int)0;
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->_clipContent = true;
}
;
	return null();
}

//Stack_obj::~Stack_obj() { }

Dynamic Stack_obj::__CreateEmpty() { return  new Stack_obj; }
hx::ObjectPtr< Stack_obj > Stack_obj::__new()
{  hx::ObjectPtr< Stack_obj > result = new Stack_obj();
	result->__construct();
	return result;}

Dynamic Stack_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stack_obj > result = new Stack_obj();
	result->__construct();
	return result;}

::haxe::ui::toolkit::core::interfaces::IDisplayObject Stack_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","addChild",0xead9379b,"haxe.ui.toolkit.containers.Stack.addChild","haxe/ui/toolkit/containers/Stack.hx",30,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = this->super::addChild(child);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(32)
	r->__Field(HX_CSTRING("set_visible"),true)(((this->get_children()->length - (int)1) == this->_selectedIndex));
	HX_STACK_LINE(33)
	r->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
	HX_STACK_LINE(34)
	return r;
}


int Stack_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","get_selectedIndex",0x3e281e2e,"haxe.ui.toolkit.containers.Stack.get_selectedIndex","haxe/ui/toolkit/containers/Stack.hx",43,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return this->_selectedIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,get_selectedIndex,return )

int Stack_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","set_selectedIndex",0x6195f63a,"haxe.ui.toolkit.containers.Stack.set_selectedIndex","haxe/ui/toolkit/containers/Stack.hx",46,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(47)
	if (((value != this->_selectedIndex))){
		HX_STACK_LINE(48)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::Stack >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(49)
		{
			HX_STACK_LINE(49)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			int _g = this->get_children()->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(49)
			while((true)){
				HX_STACK_LINE(49)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(49)
					break;
				}
				HX_STACK_LINE(49)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(50)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g2 = this->get_children();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(50)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > item = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new().Add(_g2->__get(n));		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(51)
				if (((n == value))){
					HX_STACK_LINE(52)
					if (((transition == HX_CSTRING("slide")))){
						HX_STACK_LINE(53)
						if (((value < this->_selectedIndex))){
							HX_STACK_LINE(54)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
							HX_STACK_LINE(55)
							item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(true);
							HX_STACK_LINE(56)
							Float _g11 = -(item->__get((int)0)->__Field(HX_CSTRING("get_width"),true)());		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(56)
							item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(_g11);
							HX_STACK_LINE(57)
							Float _g21 = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)();		HX_STACK_VAR(_g21,"_g21");
							struct _Function_7_1{
								inline static Dynamic Block( Float &_g21){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",57,0xfd2b75f0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("x") , _g21,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(57)
							Dynamic _g3 = _Function_7_1::Block(_g21);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(57)
							::motion::easing::IEasing _g4 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g4,"_g4");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_7_2)
							Void run(){
								HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","haxe/ui/toolkit/containers/Stack.hx",57,0xfd2b75f0)
								{
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(57)
							::motion::Actuate_obj::tween(item->__get((int)0),.2,_g3,true,null())->ease(_g4)->onComplete( Dynamic(new _Function_7_2()),null());
						}
						else{
							HX_STACK_LINE(60)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
							HX_STACK_LINE(61)
							item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(true);
							HX_STACK_LINE(62)
							Float _g5 = this->get_width();		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(62)
							item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(_g5);
							HX_STACK_LINE(63)
							Float _g6 = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)();		HX_STACK_VAR(_g6,"_g6");
							struct _Function_7_1{
								inline static Dynamic Block( Float &_g6){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",63,0xfd2b75f0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("x") , _g6,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(63)
							Dynamic _g7 = _Function_7_1::Block(_g6);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(63)
							::motion::easing::IEasing _g8 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g8,"_g8");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_7_2)
							Void run(){
								HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","haxe/ui/toolkit/containers/Stack.hx",63,0xfd2b75f0)
								{
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(63)
							::motion::Actuate_obj::tween(item->__get((int)0),.2,_g7,true,null())->ease(_g8)->onComplete( Dynamic(new _Function_7_2()),null());
						}
					}
					else{
						HX_STACK_LINE(66)
						if (((transition == HX_CSTRING("fade")))){
							HX_STACK_LINE(67)
							Float _g9 = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(67)
							item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(_g9);
							HX_STACK_LINE(68)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)0);
							HX_STACK_LINE(69)
							item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(true);
							HX_STACK_LINE(70)
							::openfl::display::Sprite _g10 = item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)();		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(70)
							::motion::easing::IEasing _g11 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g11,"_g11");
							struct _Function_7_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",70,0xfd2b75f0)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("alpha") , (int)1,false);
										return __result;
									}
									return null();
								}
							};

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_7_2)
							Void run(){
								HX_STACK_FRAME("*","_Function_7_2",0x52057abe,"*._Function_7_2","haxe/ui/toolkit/containers/Stack.hx",70,0xfd2b75f0)
								{
								}
								return null();
							}
							HX_END_LOCAL_FUNC0((void))

							HX_STACK_LINE(70)
							::motion::Actuate_obj::tween(_g10,.2,_Function_7_1::Block(),true,null())->ease(_g11)->onComplete( Dynamic(new _Function_7_2()),null());
						}
						else{
							HX_STACK_LINE(73)
							Float _g12 = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)();		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(73)
							item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(_g12);
							HX_STACK_LINE(74)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
							HX_STACK_LINE(75)
							item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(true);
						}
					}
				}
				else{
					HX_STACK_LINE(78)
					if (((n == this->_selectedIndex))){
						HX_STACK_LINE(79)
						if (((transition == HX_CSTRING("slide")))){
							HX_STACK_LINE(80)
							item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
							HX_STACK_LINE(81)
							if (((value < this->_selectedIndex))){
								HX_STACK_LINE(82)
								Float _g13 = this->get_width();		HX_STACK_VAR(_g13,"_g13");
								struct _Function_8_1{
									inline static Dynamic Block( Float &_g13){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",82,0xfd2b75f0)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("x") , _g13,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(82)
								Dynamic _g14 = _Function_8_1::Block(_g13);		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(82)
								::motion::easing::IEasing _g15 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g15,"_g15");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >,item)
								Void run(){
									HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","haxe/ui/toolkit/containers/Stack.hx",83,0xfd2b75f0)
									{
										HX_STACK_LINE(83)
										item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(false);
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(82)
								::motion::Actuate_obj::tween(item->__get((int)0),.2,_g14,true,null())->ease(_g15)->onComplete( Dynamic(new _Function_8_2(item)),null());
							}
							else{
								HX_STACK_LINE(86)
								Float _g16 = -(item->__get((int)0)->__Field(HX_CSTRING("get_width"),true)());		HX_STACK_VAR(_g16,"_g16");
								struct _Function_8_1{
									inline static Dynamic Block( Float &_g16){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",86,0xfd2b75f0)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("x") , _g16,false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(86)
								Dynamic _g17 = _Function_8_1::Block(_g16);		HX_STACK_VAR(_g17,"_g17");
								HX_STACK_LINE(86)
								::motion::easing::IEasing _g18 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g18,"_g18");

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >,item)
								Void run(){
									HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","haxe/ui/toolkit/containers/Stack.hx",87,0xfd2b75f0)
									{
										HX_STACK_LINE(87)
										item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(false);
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(86)
								::motion::Actuate_obj::tween(item->__get((int)0),.2,_g17,true,null())->ease(_g18)->onComplete( Dynamic(new _Function_8_2(item)),null());
							}
						}
						else{
							HX_STACK_LINE(90)
							if (((transition == HX_CSTRING("fade")))){
								HX_STACK_LINE(91)
								Float _g19 = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)();		HX_STACK_VAR(_g19,"_g19");
								HX_STACK_LINE(91)
								item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(_g19);
								HX_STACK_LINE(92)
								::openfl::display::Sprite _g20 = item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)();		HX_STACK_VAR(_g20,"_g20");
								HX_STACK_LINE(92)
								::motion::easing::IEasing _g21 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g21,"_g21");
								struct _Function_8_1{
									inline static Dynamic Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/Stack.hx",92,0xfd2b75f0)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("alpha") , (int)0,false);
											return __result;
										}
										return null();
									}
								};

								HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_2,Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >,item)
								Void run(){
									HX_STACK_FRAME("*","_Function_8_2",0x52063cff,"*._Function_8_2","haxe/ui/toolkit/containers/Stack.hx",93,0xfd2b75f0)
									{
										HX_STACK_LINE(93)
										item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(false);
									}
									return null();
								}
								HX_END_LOCAL_FUNC0((void))

								HX_STACK_LINE(92)
								::motion::Actuate_obj::tween(_g20,.2,_Function_8_1::Block(),true,null())->ease(_g21)->onComplete( Dynamic(new _Function_8_2(item)),null());
							}
							else{
								HX_STACK_LINE(96)
								Float _g22 = this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_left"),true)();		HX_STACK_VAR(_g22,"_g22");
								HX_STACK_LINE(96)
								item->__get((int)0)->__Field(HX_CSTRING("set_x"),true)(_g22);
								HX_STACK_LINE(97)
								item->__get((int)0)->__Field(HX_CSTRING("get_sprite"),true)()->__Field(HX_CSTRING("set_alpha"),true)((int)1);
								HX_STACK_LINE(98)
								item->__get((int)0)->__Field(HX_CSTRING("set_visible"),true)(false);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(104)
		this->_history->push(this->_selectedIndex);
		HX_STACK_LINE(105)
		this->_selectedIndex = value;
		HX_STACK_LINE(107)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(108)
		this->dispatchEvent(event);
	}
	HX_STACK_LINE(110)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Stack_obj,set_selectedIndex,return )

Void Stack_obj::back( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","back",0xbdc9d207,"haxe.ui.toolkit.containers.Stack.back","haxe/ui/toolkit/containers/Stack.hx",114,0xfd2b75f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		Dynamic last = this->_history->pop();		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(116)
		if (((last == null()))){
			HX_STACK_LINE(117)
			return null();
		}
		HX_STACK_LINE(119)
		this->set_selectedIndex(last);
		HX_STACK_LINE(121)
		this->_history->pop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stack_obj,back,(void))

Dynamic Stack_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","clone",0xed82ff7d,"haxe.ui.toolkit.containers.Stack.clone","haxe/ui/toolkit/containers/Stack.hx",1,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::Stack c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic Stack_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Stack","self",0xc909836c,"haxe.ui.toolkit.containers.Stack.self","haxe/ui/toolkit/containers/Stack.hx",2,0xfd2b75f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::Stack_obj::__new();
}



Stack_obj::Stack_obj()
{
}

void Stack_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stack);
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(_history,"_history");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stack_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(_history,"_history");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stack_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return back_dyn(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_history") ) { return _history; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stack_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_history") ) { _history=inValue.Cast< ::List >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stack_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_selectedIndex"));
	outFields->push(HX_CSTRING("_history"));
	outFields->push(HX_CSTRING("selectedIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Stack_obj,_selectedIndex),HX_CSTRING("_selectedIndex")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Stack_obj,_history),HX_CSTRING("_history")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_selectedIndex"),
	HX_CSTRING("_history"),
	HX_CSTRING("addChild"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("back"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stack_obj::__mClass,"__mClass");
};

#endif

Class Stack_obj::__mClass;

void Stack_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.Stack"), hx::TCanCast< Stack_obj> ,sStaticFields,sMemberFields,
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

void Stack_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
