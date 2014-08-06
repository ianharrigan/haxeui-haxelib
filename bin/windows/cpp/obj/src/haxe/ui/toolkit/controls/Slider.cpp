#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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

Void Slider_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","new",0xc31f3529,"haxe.ui.toolkit.controls.Slider.new","haxe/ui/toolkit/controls/Slider.hx",12,0x59fded27)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	this->_mouseDownOffset = (int)-1;
	HX_STACK_LINE(18)
	super::__construct();
	HX_STACK_LINE(20)
	this->_valueBgComp->get_sprite()->buttonMode = true;
	HX_STACK_LINE(21)
	this->_valueBgComp->get_sprite()->useHandCursor = true;
}
;
	return null();
}

//Slider_obj::~Slider_obj() { }

Dynamic Slider_obj::__CreateEmpty() { return  new Slider_obj; }
hx::ObjectPtr< Slider_obj > Slider_obj::__new()
{  hx::ObjectPtr< Slider_obj > result = new Slider_obj();
	result->__construct();
	return result;}

Dynamic Slider_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Slider_obj > result = new Slider_obj();
	result->__construct();
	return result;}

Void Slider_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","initialize",0x867fe7a7,"haxe.ui.toolkit.controls.Slider.initialize","haxe/ui/toolkit/controls/Slider.hx",27,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->super::initialize();
		HX_STACK_LINE(30)
		::haxe::ui::toolkit::controls::Button _g = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		this->_thumb = _g;
		HX_STACK_LINE(31)
		this->_thumb->set_id(HX_CSTRING("thumb"));
		HX_STACK_LINE(32)
		this->_thumb->set_remainPressed(true);
		HX_STACK_LINE(33)
		this->_thumb->set_autoSize(false);
		HX_STACK_LINE(34)
		this->_thumb->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(35)
		this->addChild(this->_thumb);
		HX_STACK_LINE(37)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,this->_onMouseWheel_dyn(),null(),null(),null());
		HX_STACK_LINE(38)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onBackgroundMouseDown_dyn(),null(),null(),null());
	}
return null();
}


Dynamic Slider_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","get_value",0xeb2a7d51,"haxe.ui.toolkit.controls.Slider.get_value","haxe/ui/toolkit/controls/Slider.hx",42,0x59fded27)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return this->get_pos();
}


Dynamic Slider_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","set_value",0xce7b695d,"haxe.ui.toolkit.controls.Slider.set_value","haxe/ui/toolkit/controls/Slider.hx",45,0x59fded27)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(46)
	Float _g = ::Std_obj::parseFloat(newValue);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(46)
	this->set_pos(_g);
	HX_STACK_LINE(47)
	return newValue;
}


Void Slider_obj::_onMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onMouseDown",0x942f7c20,"haxe.ui.toolkit.controls.Slider._onMouseDown","haxe/ui/toolkit/controls/Slider.hx",53,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onMouseDown,(void))

Void Slider_obj::_onScreenMouseMove( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onScreenMouseMove",0x25173e83,"haxe.ui.toolkit.controls.Slider._onScreenMouseMove","haxe/ui/toolkit/controls/Slider.hx",56,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onScreenMouseMove,(void))

Void Slider_obj::_onScreenMouseUp( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onScreenMouseUp",0x78fca14d,"haxe.ui.toolkit.controls.Slider._onScreenMouseUp","haxe/ui/toolkit/controls/Slider.hx",59,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(60)
		this->_mouseDownOffset = (int)-1;
		HX_STACK_LINE(61)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_UP,this->_onScreenMouseUp_dyn(),null());
		HX_STACK_LINE(62)
		::haxe::ui::toolkit::core::Screen_obj::get_instance()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_MOVE,this->_onScreenMouseMove_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onScreenMouseUp,(void))

Void Slider_obj::_onBackgroundMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onBackgroundMouseDown",0xc44cab92,"haxe.ui.toolkit.controls.Slider._onBackgroundMouseDown","haxe/ui/toolkit/controls/Slider.hx",65,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onBackgroundMouseDown,(void))

Float Slider_obj::calcPosFromCoord( Float coord){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","calcPosFromCoord",0xacf4d683,"haxe.ui.toolkit.controls.Slider.calcPosFromCoord","haxe/ui/toolkit/controls/Slider.hx",69,0x59fded27)
	HX_STACK_THIS(this)
	HX_STACK_ARG(coord,"coord")
	HX_STACK_LINE(69)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,calcPosFromCoord,return )

Void Slider_obj::_onMouseWheel( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","_onMouseWheel",0x014bf71d,"haxe.ui.toolkit.controls.Slider._onMouseWheel","haxe/ui/toolkit/controls/Slider.hx",73,0x59fded27)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(73)
		if (((event->delta != (int)0))){
			HX_STACK_LINE(74)
			if (((this->_direction == HX_CSTRING("horizontal")))){
				HX_STACK_LINE(75)
				if (((event->delta < (int)0))){
					HX_STACK_LINE(76)
					::haxe::ui::toolkit::controls::Slider _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(76)
					Float _g1 = _g->get_pos();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(76)
					Float _g11 = (_g1 + (int)5);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(76)
					_g->set_pos(_g11);
				}
				else{
					HX_STACK_LINE(77)
					if (((event->delta > (int)0))){
						HX_STACK_LINE(78)
						::haxe::ui::toolkit::controls::Slider _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(78)
						Float _g2 = _g->get_pos();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(78)
						Float _g3 = (_g2 - (int)5);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(78)
						_g->set_pos(_g3);
					}
				}
			}
			else{
				HX_STACK_LINE(80)
				if (((this->_direction == HX_CSTRING("vertical")))){
					HX_STACK_LINE(81)
					if (((event->delta < (int)0))){
						HX_STACK_LINE(82)
						::haxe::ui::toolkit::controls::Slider _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(82)
						Float _g4 = _g->get_pos();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(82)
						Float _g5 = (_g4 - (int)5);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(82)
						_g->set_pos(_g5);
					}
					else{
						HX_STACK_LINE(83)
						if (((event->delta > (int)0))){
							HX_STACK_LINE(84)
							::haxe::ui::toolkit::controls::Slider _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(84)
							Float _g6 = _g->get_pos();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(84)
							Float _g7 = (_g6 + (int)5);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(84)
							_g->set_pos(_g7);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Slider_obj,_onMouseWheel,(void))

Dynamic Slider_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","clone",0xe067fc66,"haxe.ui.toolkit.controls.Slider.clone","haxe/ui/toolkit/controls/Slider.hx",1,0x59fded27)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Slider c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic Slider_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Slider","self",0xfb7d56a3,"haxe.ui.toolkit.controls.Slider.self","haxe/ui/toolkit/controls/Slider.hx",2,0x59fded27)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::Slider_obj::__new();
}



Slider_obj::Slider_obj()
{
}

void Slider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Slider);
	HX_MARK_MEMBER_NAME(_thumb,"_thumb");
	HX_MARK_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	::haxe::ui::toolkit::controls::Progress_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Slider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_thumb,"_thumb");
	HX_VISIT_MEMBER_NAME(_mouseDownOffset,"_mouseDownOffset");
	::haxe::ui::toolkit::controls::Progress_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Slider_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { return _thumb; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_onMouseDown") ) { return _onMouseDown_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseWheel") ) { return _onMouseWheel_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { return _mouseDownOffset; }
		if (HX_FIELD_EQ(inName,"_onScreenMouseUp") ) { return _onScreenMouseUp_dyn(); }
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

Dynamic Slider_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_thumb") ) { _thumb=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseDownOffset") ) { _mouseDownOffset=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Slider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_thumb"));
	outFields->push(HX_CSTRING("_mouseDownOffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(Slider_obj,_thumb),HX_CSTRING("_thumb")},
	{hx::fsFloat,(int)offsetof(Slider_obj,_mouseDownOffset),HX_CSTRING("_mouseDownOffset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_thumb"),
	HX_CSTRING("_mouseDownOffset"),
	HX_CSTRING("initialize"),
	HX_CSTRING("get_value"),
	HX_CSTRING("set_value"),
	HX_CSTRING("_onMouseDown"),
	HX_CSTRING("_onScreenMouseMove"),
	HX_CSTRING("_onScreenMouseUp"),
	HX_CSTRING("_onBackgroundMouseDown"),
	HX_CSTRING("calcPosFromCoord"),
	HX_CSTRING("_onMouseWheel"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Slider_obj::__mClass,"__mClass");
};

#endif

Class Slider_obj::__mClass;

void Slider_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Slider"), hx::TCanCast< Slider_obj> ,sStaticFields,sMemberFields,
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

void Slider_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
