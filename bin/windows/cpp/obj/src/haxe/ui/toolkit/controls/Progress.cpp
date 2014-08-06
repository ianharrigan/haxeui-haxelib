#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_HProgressLayout
#include <haxe/ui/toolkit/controls/HProgressLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VProgressLayout
#include <haxe/ui/toolkit/controls/VProgressLayout.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Progress_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","new",0x89f92e35,"haxe.ui.toolkit.controls.Progress.new","haxe/ui/toolkit/controls/Progress.hx",20,0x8f3b099b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	this->_incrementSize = (int)1;
	HX_STACK_LINE(24)
	this->_pos = (int)0;
	HX_STACK_LINE(23)
	this->_max = (int)100;
	HX_STACK_LINE(22)
	this->_min = (int)0;
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
	this->addStates(Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("disabled")),null());
	HX_STACK_LINE(33)
	this->set_direction(HX_CSTRING("horizontal"));
	HX_STACK_LINE(34)
	::haxe::ui::toolkit::core::StateComponent _g = ::haxe::ui::toolkit::core::StateComponent_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(34)
	this->_valueBgComp = _g;
	HX_STACK_LINE(35)
	this->_valueBgComp->addStates(Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("disabled")),null());
	HX_STACK_LINE(36)
	this->_valueBgComp->set_id(HX_CSTRING("background"));
	HX_STACK_LINE(37)
	::haxe::ui::toolkit::core::StateComponent _g1 = ::haxe::ui::toolkit::core::StateComponent_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	this->_valueComp = _g1;
	HX_STACK_LINE(38)
	this->_valueComp->addStates(Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("disabled")),null());
	HX_STACK_LINE(39)
	this->_valueComp->set_id(HX_CSTRING("value"));
}
;
	return null();
}

//Progress_obj::~Progress_obj() { }

Dynamic Progress_obj::__CreateEmpty() { return  new Progress_obj; }
hx::ObjectPtr< Progress_obj > Progress_obj::__new()
{  hx::ObjectPtr< Progress_obj > result = new Progress_obj();
	result->__construct();
	return result;}

Dynamic Progress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Progress_obj > result = new Progress_obj();
	result->__construct();
	return result;}

hx::Object *Progress_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDirectional_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDirectional_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IScrollable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *();
	return super::__ToInterface(inType);
}

Void Progress_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","initialize",0xfc24681b,"haxe.ui.toolkit.controls.Progress.initialize","haxe/ui/toolkit/controls/Progress.hx",46,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(47)
		this->super::initialize();
		HX_STACK_LINE(49)
		this->addChild(this->_valueBgComp);
		HX_STACK_LINE(50)
		this->_valueBgComp->addChild(this->_valueComp);
	}
return null();
}


::String Progress_obj::get_direction( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_direction",0xc18f102b,"haxe.ui.toolkit.controls.Progress.get_direction","haxe/ui/toolkit/controls/Progress.hx",88,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	return this->_direction;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_direction,return )

::String Progress_obj::set_direction( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_direction",0x0694f237,"haxe.ui.toolkit.controls.Progress.set_direction","haxe/ui/toolkit/controls/Progress.hx",91,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(92)
	this->_direction = value;
	HX_STACK_LINE(93)
	if (((value == HX_CSTRING("horizontal")))){
		HX_STACK_LINE(94)
		::haxe::ui::toolkit::controls::HProgressLayout _g = ::haxe::ui::toolkit::controls::HProgressLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		this->_layout = _g;
	}
	else{
		HX_STACK_LINE(95)
		if (((value == HX_CSTRING("vertical")))){
			HX_STACK_LINE(96)
			::haxe::ui::toolkit::controls::VProgressLayout _g1 = ::haxe::ui::toolkit::controls::VProgressLayout_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(96)
			this->_layout = _g1;
		}
	}
	HX_STACK_LINE(98)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_direction,return )

Float Progress_obj::get_min( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_min",0xcf39467e,"haxe.ui.toolkit.controls.Progress.get_min","haxe/ui/toolkit/controls/Progress.hx",102,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return this->_min;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_min,return )

Float Progress_obj::set_min( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_min",0xc23ad78a,"haxe.ui.toolkit.controls.Progress.set_min","haxe/ui/toolkit/controls/Progress.hx",105,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(106)
	if (((value != this->_min))){
		HX_STACK_LINE(107)
		this->_min = value;
		HX_STACK_LINE(108)
		::openfl::events::Event changeEvent = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(changeEvent,"changeEvent");
		HX_STACK_LINE(109)
		this->dispatchEvent(changeEvent);
		HX_STACK_LINE(110)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(112)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_min,return )

Float Progress_obj::get_max( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_max",0xcf393f90,"haxe.ui.toolkit.controls.Progress.get_max","haxe/ui/toolkit/controls/Progress.hx",116,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	return this->_max;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_max,return )

Float Progress_obj::set_max( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_max",0xc23ad09c,"haxe.ui.toolkit.controls.Progress.set_max","haxe/ui/toolkit/controls/Progress.hx",119,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(120)
	if (((value != this->_max))){
		HX_STACK_LINE(121)
		this->_max = value;
		HX_STACK_LINE(122)
		::openfl::events::Event changeEvent = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(changeEvent,"changeEvent");
		HX_STACK_LINE(123)
		this->dispatchEvent(changeEvent);
		HX_STACK_LINE(124)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(126)
	return this->_max;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_max,return )

Float Progress_obj::get_pos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_pos",0xcf3b9280,"haxe.ui.toolkit.controls.Progress.get_pos","haxe/ui/toolkit/controls/Progress.hx",130,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	return this->_pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_pos,return )

Float Progress_obj::set_pos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_pos",0xc23d238c,"haxe.ui.toolkit.controls.Progress.set_pos","haxe/ui/toolkit/controls/Progress.hx",133,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(134)
	if ((this->_ready)){
		HX_STACK_LINE(135)
		if (((value < this->_min))){
			HX_STACK_LINE(136)
			value = this->_min;
		}
		HX_STACK_LINE(138)
		if (((value > this->_max))){
			HX_STACK_LINE(139)
			value = this->_max;
		}
	}
	HX_STACK_LINE(143)
	if (((value != this->_pos))){
		HX_STACK_LINE(144)
		this->_pos = value;
		HX_STACK_LINE(145)
		::openfl::events::Event changeEvent = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(changeEvent,"changeEvent");
		HX_STACK_LINE(146)
		this->dispatchEvent(changeEvent);
		HX_STACK_LINE(147)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(149)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_pos,return )

Float Progress_obj::get_pageSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_pageSize",0xaf71ee44,"haxe.ui.toolkit.controls.Progress.get_pageSize","haxe/ui/toolkit/controls/Progress.hx",153,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_pageSize,return )

Float Progress_obj::set_pageSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_pageSize",0xc46b11b8,"haxe.ui.toolkit.controls.Progress.set_pageSize","haxe/ui/toolkit/controls/Progress.hx",157,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(157)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_pageSize,return )

Float Progress_obj::get_incrementSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","get_incrementSize",0xf1362a7c,"haxe.ui.toolkit.controls.Progress.get_incrementSize","haxe/ui/toolkit/controls/Progress.hx",161,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	return this->_incrementSize;
}


HX_DEFINE_DYNAMIC_FUNC0(Progress_obj,get_incrementSize,return )

Float Progress_obj::set_incrementSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","set_incrementSize",0x14a40288,"haxe.ui.toolkit.controls.Progress.set_incrementSize","haxe/ui/toolkit/controls/Progress.hx",164,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(165)
	this->_incrementSize = value;
	HX_STACK_LINE(166)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,set_incrementSize,return )

Dynamic Progress_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","clone",0x8c7b5072,"haxe.ui.toolkit.controls.Progress.clone","haxe/ui/toolkit/controls/Progress.hx",1,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Progress c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::String _g = this->get_direction();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_direction(_g);
	HX_STACK_LINE(4)
	Float _g1 = this->get_min();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4)
	c->set_min(_g1);
	HX_STACK_LINE(5)
	Float _g2 = this->get_max();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(5)
	c->set_max(_g2);
	HX_STACK_LINE(6)
	Float _g3 = this->get_pos();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(6)
	c->set_pos(_g3);
	HX_STACK_LINE(7)
	Float _g4 = this->get_pageSize();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(7)
	c->set_pageSize(_g4);
	HX_STACK_LINE(8)
	Float _g5 = this->get_incrementSize();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(8)
	c->set_incrementSize(_g5);
	HX_STACK_LINE(9)
	return c;
}


Dynamic Progress_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Progress","self",0x335d4817,"haxe.ui.toolkit.controls.Progress.self","haxe/ui/toolkit/controls/Progress.hx",2,0x8f3b099b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::Progress_obj::__new();
}



Progress_obj::Progress_obj()
{
}

void Progress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Progress);
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	HX_MARK_MEMBER_NAME(_min,"_min");
	HX_MARK_MEMBER_NAME(_max,"_max");
	HX_MARK_MEMBER_NAME(_pos,"_pos");
	HX_MARK_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_MARK_MEMBER_NAME(_valueBgComp,"_valueBgComp");
	HX_MARK_MEMBER_NAME(_valueComp,"_valueComp");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Progress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	HX_VISIT_MEMBER_NAME(_min,"_min");
	HX_VISIT_MEMBER_NAME(_max,"_max");
	HX_VISIT_MEMBER_NAME(_pos,"_pos");
	HX_VISIT_MEMBER_NAME(_incrementSize,"_incrementSize");
	HX_VISIT_MEMBER_NAME(_valueBgComp,"_valueBgComp");
	HX_VISIT_MEMBER_NAME(_valueComp,"_valueComp");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Progress_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return get_min(); }
		if (HX_FIELD_EQ(inName,"max") ) { return get_max(); }
		if (HX_FIELD_EQ(inName,"pos") ) { return get_pos(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { return _min; }
		if (HX_FIELD_EQ(inName,"_max") ) { return _max; }
		if (HX_FIELD_EQ(inName,"_pos") ) { return _pos; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_min") ) { return get_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"get_max") ) { return get_max_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pos") ) { return get_pos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pos") ) { return set_pos_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { return get_pageSize(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return get_direction(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { return _direction; }
		if (HX_FIELD_EQ(inName,"_valueComp") ) { return _valueComp; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_valueBgComp") ) { return _valueBgComp; }
		if (HX_FIELD_EQ(inName,"get_pageSize") ) { return get_pageSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pageSize") ) { return set_pageSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"incrementSize") ) { return get_incrementSize(); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { return _incrementSize; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_incrementSize") ) { return get_incrementSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_incrementSize") ) { return set_incrementSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Progress_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return set_min(inValue); }
		if (HX_FIELD_EQ(inName,"max") ) { return set_max(inValue); }
		if (HX_FIELD_EQ(inName,"pos") ) { return set_pos(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_min") ) { _min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_max") ) { _max=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pos") ) { _pos=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pageSize") ) { return set_pageSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return set_direction(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_valueComp") ) { _valueComp=inValue.Cast< ::haxe::ui::toolkit::core::StateComponent >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_valueBgComp") ) { _valueBgComp=inValue.Cast< ::haxe::ui::toolkit::core::StateComponent >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"incrementSize") ) { return set_incrementSize(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_incrementSize") ) { _incrementSize=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Progress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_direction"));
	outFields->push(HX_CSTRING("_min"));
	outFields->push(HX_CSTRING("_max"));
	outFields->push(HX_CSTRING("_pos"));
	outFields->push(HX_CSTRING("_incrementSize"));
	outFields->push(HX_CSTRING("_valueBgComp"));
	outFields->push(HX_CSTRING("_valueComp"));
	outFields->push(HX_CSTRING("direction"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("pageSize"));
	outFields->push(HX_CSTRING("incrementSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Progress_obj,_direction),HX_CSTRING("_direction")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_min),HX_CSTRING("_min")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_max),HX_CSTRING("_max")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_pos),HX_CSTRING("_pos")},
	{hx::fsFloat,(int)offsetof(Progress_obj,_incrementSize),HX_CSTRING("_incrementSize")},
	{hx::fsObject /*::haxe::ui::toolkit::core::StateComponent*/ ,(int)offsetof(Progress_obj,_valueBgComp),HX_CSTRING("_valueBgComp")},
	{hx::fsObject /*::haxe::ui::toolkit::core::StateComponent*/ ,(int)offsetof(Progress_obj,_valueComp),HX_CSTRING("_valueComp")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_direction"),
	HX_CSTRING("_min"),
	HX_CSTRING("_max"),
	HX_CSTRING("_pos"),
	HX_CSTRING("_incrementSize"),
	HX_CSTRING("_valueBgComp"),
	HX_CSTRING("_valueComp"),
	HX_CSTRING("initialize"),
	HX_CSTRING("get_direction"),
	HX_CSTRING("set_direction"),
	HX_CSTRING("get_min"),
	HX_CSTRING("set_min"),
	HX_CSTRING("get_max"),
	HX_CSTRING("set_max"),
	HX_CSTRING("get_pos"),
	HX_CSTRING("set_pos"),
	HX_CSTRING("get_pageSize"),
	HX_CSTRING("set_pageSize"),
	HX_CSTRING("get_incrementSize"),
	HX_CSTRING("set_incrementSize"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#endif

Class Progress_obj::__mClass;

void Progress_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Progress"), hx::TCanCast< Progress_obj> ,sStaticFields,sMemberFields,
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

void Progress_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
