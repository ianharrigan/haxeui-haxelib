#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Scroll_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","new",0x7cecad15,"haxe.ui.toolkit.controls.Scroll.new","haxe/ui/toolkit/controls/Scroll.hx",13,0x373cd6bb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->_direction = HX_CSTRING("vertical");
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	this->addStates(Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("disabled")),null());
}
;
	return null();
}

//Scroll_obj::~Scroll_obj() { }

Dynamic Scroll_obj::__CreateEmpty() { return  new Scroll_obj; }
hx::ObjectPtr< Scroll_obj > Scroll_obj::__new()
{  hx::ObjectPtr< Scroll_obj > result = new Scroll_obj();
	result->__construct();
	return result;}

Dynamic Scroll_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scroll_obj > result = new Scroll_obj();
	result->__construct();
	return result;}

hx::Object *Scroll_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDirectional_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDirectional_obj *();
	return super::__ToInterface(inType);
}

::String Scroll_obj::get_direction( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","get_direction",0x3da9e70b,"haxe.ui.toolkit.controls.Scroll.get_direction","haxe/ui/toolkit/controls/Scroll.hx",30,0x373cd6bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return this->_direction;
}


HX_DEFINE_DYNAMIC_FUNC0(Scroll_obj,get_direction,return )

::String Scroll_obj::set_direction( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","set_direction",0x82afc917,"haxe.ui.toolkit.controls.Scroll.set_direction","haxe/ui/toolkit/controls/Scroll.hx",33,0x373cd6bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(34)
	this->_direction = value;
	HX_STACK_LINE(35)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Scroll_obj,set_direction,return )

Dynamic Scroll_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","clone",0xc2744752,"haxe.ui.toolkit.controls.Scroll.clone","haxe/ui/toolkit/controls/Scroll.hx",1,0x373cd6bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Scroll c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic Scroll_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Scroll","self",0xd578cd37,"haxe.ui.toolkit.controls.Scroll.self","haxe/ui/toolkit/controls/Scroll.hx",2,0x373cd6bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::Scroll_obj::__new();
}



Scroll_obj::Scroll_obj()
{
}

void Scroll_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scroll);
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scroll_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scroll_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return get_direction(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { return _direction; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_direction") ) { return get_direction_dyn(); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return set_direction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scroll_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return set_direction(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scroll_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_direction"));
	outFields->push(HX_CSTRING("direction"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Scroll_obj,_direction),HX_CSTRING("_direction")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_direction"),
	HX_CSTRING("get_direction"),
	HX_CSTRING("set_direction"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scroll_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scroll_obj::__mClass,"__mClass");
};

#endif

Class Scroll_obj::__mClass;

void Scroll_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Scroll"), hx::TCanCast< Scroll_obj> ,sStaticFields,sMemberFields,
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

void Scroll_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
