#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Value
#include <haxe/ui/toolkit/controls/Value.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_AbsoluteLayout
#include <haxe/ui/toolkit/layout/AbsoluteLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
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

Void Value_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","new",0x9c94480d,"haxe.ui.toolkit.controls.Value.new","haxe/ui/toolkit/controls/Value.hx",14,0xe74a4543)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->_interactive = true;
	HX_STACK_LINE(17)
	this->_value = HX_CSTRING("");
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	this->addStates(Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("disabled")),null());
	HX_STACK_LINE(24)
	this->_autoSize = false;
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::layout::AbsoluteLayout _g = ::haxe::ui::toolkit::layout::AbsoluteLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	this->_layout = _g;
	HX_STACK_LINE(26)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	this->_values = _g1;
	HX_STACK_LINE(27)
	Array< ::String > _g2 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(27)
	this->_valuesList = _g2;
	HX_STACK_LINE(29)
	this->addEventListener(::openfl::events::MouseEvent_obj::CLICK,this->_onMouseClick_dyn(),null(),null(),null());
}
;
	return null();
}

//Value_obj::~Value_obj() { }

Dynamic Value_obj::__CreateEmpty() { return  new Value_obj; }
hx::ObjectPtr< Value_obj > Value_obj::__new()
{  hx::ObjectPtr< Value_obj > result = new Value_obj();
	result->__construct();
	return result;}

Dynamic Value_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Value_obj > result = new Value_obj();
	result->__construct();
	return result;}

hx::Object *Value_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Void Value_obj::addValue( ::String value){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","addValue",0x4a833ac3,"haxe.ui.toolkit.controls.Value.addValue","haxe/ui/toolkit/controls/Value.hx",35,0xe74a4543)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::controls::Button _g = this->_values->get(value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		if (((_g == null()))){
			HX_STACK_LINE(37)
			::haxe::ui::toolkit::controls::Button valueControl = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(valueControl,"valueControl");
			HX_STACK_LINE(38)
			valueControl->set_id(value);
			HX_STACK_LINE(39)
			valueControl->set_percentWidth((int)100);
			HX_STACK_LINE(40)
			valueControl->set_percentHeight((int)100);
			HX_STACK_LINE(41)
			this->_values->set(value,valueControl);
			HX_STACK_LINE(42)
			this->_valuesList->push(value);
			HX_STACK_LINE(43)
			valueControl->set_visible((this->_value == value));
			HX_STACK_LINE(44)
			this->addChild(valueControl);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Value_obj,addValue,(void))

Void Value_obj::cycleValues( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","cycleValues",0xfb50a1d5,"haxe.ui.toolkit.controls.Value.cycleValues","haxe/ui/toolkit/controls/Value.hx",48,0xe74a4543)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		int currentIndex = ::Lambda_obj::indexOf(this->_valuesList,this->_value);		HX_STACK_VAR(currentIndex,"currentIndex");
		HX_STACK_LINE(50)
		(currentIndex)++;
		HX_STACK_LINE(51)
		if (((currentIndex > (this->_valuesList->length - (int)1)))){
			HX_STACK_LINE(52)
			currentIndex = (int)0;
		}
		HX_STACK_LINE(54)
		this->set_value(this->_valuesList->__get(currentIndex));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Value_obj,cycleValues,(void))

Void Value_obj::_onMouseClick( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","_onMouseClick",0x074756ae,"haxe.ui.toolkit.controls.Value._onMouseClick","haxe/ui/toolkit/controls/Value.hx",61,0xe74a4543)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(61)
		if (((this->_interactive == true))){
			HX_STACK_LINE(62)
			this->cycleValues();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Value_obj,_onMouseClick,(void))

Dynamic Value_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","get_value",0x55d6d335,"haxe.ui.toolkit.controls.Value.get_value","haxe/ui/toolkit/controls/Value.hx",73,0xe74a4543)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return this->_value;
}


Dynamic Value_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","set_value",0x3927bf41,"haxe.ui.toolkit.controls.Value.set_value","haxe/ui/toolkit/controls/Value.hx",76,0xe74a4543)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(77)
	if (((newValue != this->_value))){
		HX_STACK_LINE(78)
		::haxe::ui::toolkit::controls::Button valueControl;		HX_STACK_VAR(valueControl,"valueControl");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::String key = newValue;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(78)
			valueControl = this->_values->get(key);
		}
		HX_STACK_LINE(79)
		if (((valueControl != null()))){
			HX_STACK_LINE(80)
			::haxe::ui::toolkit::controls::Button currentControl = this->_values->get(this->_value);		HX_STACK_VAR(currentControl,"currentControl");
			HX_STACK_LINE(81)
			if (((currentControl != null()))){
				HX_STACK_LINE(82)
				currentControl->set_visible(false);
			}
			HX_STACK_LINE(84)
			this->_value = newValue;
			HX_STACK_LINE(85)
			valueControl->set_visible(true);
		}
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::events::UIEvent _g = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_change"),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(88)
		this->dispatchEvent(_g);
	}
	HX_STACK_LINE(90)
	return newValue;
}


bool Value_obj::get_interactive( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","get_interactive",0x96e6bca6,"haxe.ui.toolkit.controls.Value.get_interactive","haxe/ui/toolkit/controls/Value.hx",94,0xe74a4543)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	return this->_interactive;
}


HX_DEFINE_DYNAMIC_FUNC0(Value_obj,get_interactive,return )

bool Value_obj::set_interactive( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","set_interactive",0x92b239b2,"haxe.ui.toolkit.controls.Value.set_interactive","haxe/ui/toolkit/controls/Value.hx",97,0xe74a4543)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(98)
	this->_interactive = value;
	HX_STACK_LINE(99)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Value_obj,set_interactive,return )

Dynamic Value_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","clone",0xcf72904a,"haxe.ui.toolkit.controls.Value.clone","haxe/ui/toolkit/core/Macros.hx",490,0x3fba9eca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::controls::Value c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		Array< ::String > _g1 = this->_valuesList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(106)
		while((true)){
			HX_STACK_LINE(106)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(106)
				break;
			}
			HX_STACK_LINE(106)
			::String v = _g1->__get(_g);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(106)
			++(_g);
			HX_STACK_LINE(107)
			c->addValue(v);
		}
	}
	HX_STACK_LINE(109)
	return c;
	HX_STACK_LINE(1)
	bool _g = this->get_interactive();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1)
	c->set_interactive(_g);
	HX_STACK_LINE(1)
	return c;
}


Dynamic Value_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Value","self",0x6878cb3f,"haxe.ui.toolkit.controls.Value.self","haxe/ui/toolkit/controls/Value.hx",1,0xe74a4543)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	return ::haxe::ui::toolkit::controls::Value_obj::__new();
}



Value_obj::Value_obj()
{
}

void Value_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Value);
	HX_MARK_MEMBER_NAME(_values,"_values");
	HX_MARK_MEMBER_NAME(_valuesList,"_valuesList");
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_interactive,"_interactive");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Value_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_values,"_values");
	HX_VISIT_MEMBER_NAME(_valuesList,"_valuesList");
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_interactive,"_interactive");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Value_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return _value; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { return _values; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addValue") ) { return addValue_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_valuesList") ) { return _valuesList; }
		if (HX_FIELD_EQ(inName,"cycleValues") ) { return cycleValues_dyn(); }
		if (HX_FIELD_EQ(inName,"interactive") ) { return get_interactive(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_interactive") ) { return _interactive; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_interactive") ) { return get_interactive_dyn(); }
		if (HX_FIELD_EQ(inName,"set_interactive") ) { return set_interactive_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Value_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_values") ) { _values=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_valuesList") ) { _valuesList=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"interactive") ) { return set_interactive(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_interactive") ) { _interactive=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Value_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_values"));
	outFields->push(HX_CSTRING("_valuesList"));
	outFields->push(HX_CSTRING("_value"));
	outFields->push(HX_CSTRING("_interactive"));
	outFields->push(HX_CSTRING("interactive"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Value_obj,_values),HX_CSTRING("_values")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Value_obj,_valuesList),HX_CSTRING("_valuesList")},
	{hx::fsString,(int)offsetof(Value_obj,_value),HX_CSTRING("_value")},
	{hx::fsBool,(int)offsetof(Value_obj,_interactive),HX_CSTRING("_interactive")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_values"),
	HX_CSTRING("_valuesList"),
	HX_CSTRING("_value"),
	HX_CSTRING("_interactive"),
	HX_CSTRING("addValue"),
	HX_CSTRING("cycleValues"),
	HX_CSTRING("_onMouseClick"),
	HX_CSTRING("get_value"),
	HX_CSTRING("set_value"),
	HX_CSTRING("get_interactive"),
	HX_CSTRING("set_interactive"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Value_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Value_obj::__mClass,"__mClass");
};

#endif

Class Value_obj::__mClass;

void Value_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Value"), hx::TCanCast< Value_obj> ,sStaticFields,sMemberFields,
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

void Value_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
