#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HSlider
#include <haxe/ui/toolkit/controls/HSlider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#include <haxe/ui/toolkit/controls/Slider.h>
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

Void HSlider_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.HSlider","new",0xdeeadbc5,"haxe.ui.toolkit.controls.HSlider.new","haxe/ui/toolkit/controls/HSlider.hx",12,0x4d23608b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	super::__construct();
	HX_STACK_LINE(14)
	this->set_direction(HX_CSTRING("horizontal"));
}
;
	return null();
}

//HSlider_obj::~HSlider_obj() { }

Dynamic HSlider_obj::__CreateEmpty() { return  new HSlider_obj; }
hx::ObjectPtr< HSlider_obj > HSlider_obj::__new()
{  hx::ObjectPtr< HSlider_obj > result = new HSlider_obj();
	result->__construct();
	return result;}

Dynamic HSlider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HSlider_obj > result = new HSlider_obj();
	result->__construct();
	return result;}

hx::Object *HSlider_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Void HSlider_obj::_onMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HSlider","_onMouseDown",0x9e202204,"haxe.ui.toolkit.controls.HSlider._onMouseDown","haxe/ui/toolkit/controls/HSlider.hx",20,0x4d23608b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(21)
		Float _g = this->_thumb->get_stageX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		Float _g1 = (event->stageX - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(21)
		this->startTracking(_g1);
	}
return null();
}


Void HSlider_obj::_onScreenMouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HSlider","_onScreenMouseMove",0xa1af6767,"haxe.ui.toolkit.controls.HSlider._onScreenMouseMove","haxe/ui/toolkit/controls/HSlider.hx",24,0x4d23608b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(25)
		Float _g = this->get_stageX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		Float _g1 = (event->stageX - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		Float xpos = (_g1 - this->_mouseDownOffset);		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(26)
		Float _g2 = this->calcPosFromCoord(xpos);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(26)
		this->set_pos(_g3);
	}
return null();
}


Void HSlider_obj::_onBackgroundMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HSlider","_onBackgroundMouseDown",0xbb751676,"haxe.ui.toolkit.controls.HSlider._onBackgroundMouseDown","haxe/ui/toolkit/controls/HSlider.hx",29,0x4d23608b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(30)
		bool _g = this->_thumb->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		if (((_g == false))){
			HX_STACK_LINE(31)
			Float _g1 = this->get_stageX();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(31)
			Float xpos = (event->stageX - _g1);		HX_STACK_VAR(xpos,"xpos");
			HX_STACK_LINE(32)
			Float _g2 = this->_thumb->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(32)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(32)
			hx::SubEq(xpos,_g3);
			HX_STACK_LINE(33)
			Float _g4 = this->calcPosFromCoord(xpos);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(33)
			int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(33)
			this->set_pos(_g5);
			HX_STACK_LINE(34)
			this->_thumb->set_state(HX_CSTRING("down"));
			HX_STACK_LINE(35)
			Float _g6 = this->_thumb->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(35)
			Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(35)
			this->startTracking(_g7);
		}
	}
return null();
}


Void HSlider_obj::startTracking( Float offset){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HSlider","startTracking",0x8c2c655e,"haxe.ui.toolkit.controls.HSlider.startTracking","haxe/ui/toolkit/controls/HSlider.hx",42,0x4d23608b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(43)
		this->_mouseDownOffset = offset;
		HX_STACK_LINE(45)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null(),null(),null());
		HX_STACK_LINE(46)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->_onScreenMouseMove_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HSlider_obj,startTracking,(void))

Float HSlider_obj::calcPosFromCoord( Float xpos){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HSlider","calcPosFromCoord",0xd3f83e67,"haxe.ui.toolkit.controls.HSlider.calcPosFromCoord","haxe/ui/toolkit/controls/HSlider.hx",52,0x4d23608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(xpos,"xpos")
	HX_STACK_LINE(53)
	Float minX = (int)0;		HX_STACK_VAR(minX,"minX");
	HX_STACK_LINE(54)
	Float _g = this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(54)
	Float _g1 = this->_thumb->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(54)
	Float maxX = (_g - _g1);		HX_STACK_VAR(maxX,"maxX");
	HX_STACK_LINE(56)
	if (((xpos < minX))){
		HX_STACK_LINE(57)
		xpos = minX;
	}
	else{
		HX_STACK_LINE(58)
		if (((xpos > maxX))){
			HX_STACK_LINE(59)
			xpos = maxX;
		}
	}
	HX_STACK_LINE(62)
	Float ucx = this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(63)
	Float _g2 = this->_thumb->get_width();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(63)
	hx::SubEq(ucx,_g2);
	HX_STACK_LINE(64)
	Float _g3 = this->get_max();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(64)
	Float _g4 = this->get_min();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(64)
	Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(64)
	int m = ::Std_obj::_int(_g5);		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(65)
	Float v = (xpos - minX);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(66)
	Float _g6 = this->get_min();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(66)
	Float newValue = (_g6 + ((Float(v) / Float(ucx)) * m));		HX_STACK_VAR(newValue,"newValue");
	HX_STACK_LINE(67)
	return newValue;
}


Dynamic HSlider_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HSlider","clone",0x435f8202,"haxe.ui.toolkit.controls.HSlider.clone","haxe/ui/toolkit/controls/HSlider.hx",1,0x4d23608b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::HSlider c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic HSlider_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HSlider","self",0x31e37887,"haxe.ui.toolkit.controls.HSlider.self","haxe/ui/toolkit/controls/HSlider.hx",2,0x4d23608b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::HSlider_obj::__new();
}



HSlider_obj::HSlider_obj()
{
}

Dynamic HSlider_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startTracking") ) { return startTracking_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"calcPosFromCoord") ) { return calcPosFromCoord_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_onScreenMouseMove") ) { return _onScreenMouseMove_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_onBackgroundMouseDown") ) { return _onBackgroundMouseDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HSlider_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HSlider_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_onMouseDown"),
	HX_CSTRING("_onScreenMouseMove"),
	HX_CSTRING("_onBackgroundMouseDown"),
	HX_CSTRING("startTracking"),
	HX_CSTRING("calcPosFromCoord"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HSlider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HSlider_obj::__mClass,"__mClass");
};

#endif

Class HSlider_obj::__mClass;

void HSlider_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.HSlider"), hx::TCanCast< HSlider_obj> ,sStaticFields,sMemberFields,
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

void HSlider_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
