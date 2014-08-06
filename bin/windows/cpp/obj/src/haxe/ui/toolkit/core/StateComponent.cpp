#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void StateComponent_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","new",0x8b57ceab,"haxe.ui.toolkit.core.StateComponent.new","haxe/ui/toolkit/core/StateComponent.hx",13,0xb5b37565)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(15)
	Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	this->_states = _g;
}
;
	return null();
}

//StateComponent_obj::~StateComponent_obj() { }

Dynamic StateComponent_obj::__CreateEmpty() { return  new StateComponent_obj; }
hx::ObjectPtr< StateComponent_obj > StateComponent_obj::__new()
{  hx::ObjectPtr< StateComponent_obj > result = new StateComponent_obj();
	result->__construct();
	return result;}

Dynamic StateComponent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StateComponent_obj > result = new StateComponent_obj();
	result->__construct();
	return result;}

hx::Object *StateComponent_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

Void StateComponent_obj::buildStyles( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","buildStyles",0x7f2f8d3b,"haxe.ui.toolkit.core.StateComponent.buildStyles","haxe/ui/toolkit/core/StateComponent.hx",22,0xb5b37565)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		Array< ::String > _g1 = this->get_states();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(22)
		while((true)){
			HX_STACK_LINE(22)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(22)
				break;
			}
			HX_STACK_LINE(22)
			::String s = _g1->__get(_g);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(22)
			++(_g);
			HX_STACK_LINE(23)
			::haxe::ui::toolkit::style::Style stateStyle = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),s);		HX_STACK_VAR(stateStyle,"stateStyle");
			HX_STACK_LINE(24)
			if (((stateStyle != null()))){
				HX_STACK_LINE(26)
				this->storeStyle(s,stateStyle);
			}
		}
	}
return null();
}


Void StateComponent_obj::addStates( Array< ::String > stateNames,hx::Null< bool >  __o_rebuildStyles){
bool rebuildStyles = __o_rebuildStyles.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","addStates",0x680056ce,"haxe.ui.toolkit.core.StateComponent.addStates","haxe/ui/toolkit/core/StateComponent.hx",31,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stateNames,"stateNames")
	HX_STACK_ARG(rebuildStyles,"rebuildStyles")
{
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(32)
			while((true)){
				HX_STACK_LINE(32)
				if ((!(((_g < stateNames->length))))){
					HX_STACK_LINE(32)
					break;
				}
				HX_STACK_LINE(32)
				::String stateName = stateNames->__get(_g);		HX_STACK_VAR(stateName,"stateName");
				HX_STACK_LINE(32)
				++(_g);
				HX_STACK_LINE(33)
				this->addState(stateName,false);
			}
		}
		HX_STACK_LINE(35)
		if (((bool((rebuildStyles == true)) && bool(this->_ready)))){
			HX_STACK_LINE(36)
			this->buildStyles();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StateComponent_obj,addStates,(void))

Void StateComponent_obj::addState( ::String stateName,hx::Null< bool >  __o_rebuildStyles){
bool rebuildStyles = __o_rebuildStyles.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","addState",0x49efee05,"haxe.ui.toolkit.core.StateComponent.addState","haxe/ui/toolkit/core/StateComponent.hx",40,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stateName,"stateName")
	HX_STACK_ARG(rebuildStyles,"rebuildStyles")
{
		HX_STACK_LINE(41)
		bool _g = this->hasState(stateName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		if (((_g == false))){
			HX_STACK_LINE(42)
			this->_states->push(stateName);
			HX_STACK_LINE(43)
			if (((bool((rebuildStyles == true)) && bool(this->_ready)))){
				HX_STACK_LINE(44)
				this->buildStyles();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StateComponent_obj,addState,(void))

::String StateComponent_obj::get_state( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","get_state",0x71951af3,"haxe.ui.toolkit.core.StateComponent.get_state","haxe/ui/toolkit/core/StateComponent.hx",57,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	return this->_state;
}


HX_DEFINE_DYNAMIC_FUNC0(StateComponent_obj,get_state,return )

::String StateComponent_obj::set_state( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","set_state",0x54e606ff,"haxe.ui.toolkit.core.StateComponent.set_state","haxe/ui/toolkit/core/StateComponent.hx",60,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(61)
	if (((this->_state != value))){
		HX_STACK_LINE(62)
		this->_state = value;
		HX_STACK_LINE(63)
		::haxe::ui::toolkit::style::Style _g = this->retrieveStyle(this->_state);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		if (((_g != null()))){
			HX_STACK_LINE(64)
			::haxe::ui::toolkit::style::Style _g1 = this->retrieveStyle(this->_state);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(64)
			this->set_style(_g1);
		}
		else{
			HX_STACK_LINE(66)
			this->invalidate((int)4096,null());
		}
	}
	HX_STACK_LINE(69)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(StateComponent_obj,set_state,return )

Array< ::String > StateComponent_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","get_states",0xf0e27a20,"haxe.ui.toolkit.core.StateComponent.get_states","haxe/ui/toolkit/core/StateComponent.hx",73,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return this->_states;
}


HX_DEFINE_DYNAMIC_FUNC0(StateComponent_obj,get_states,return )

bool StateComponent_obj::hasState( ::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","hasState",0x5ceb122c,"haxe.ui.toolkit.core.StateComponent.hasState","haxe/ui/toolkit/core/StateComponent.hx",76,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(77)
	Array< ::String > _g = this->get_states();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(77)
	if (((_g == null()))){
		HX_STACK_LINE(78)
		return false;
	}
	HX_STACK_LINE(80)
	Array< ::String > _g1 = this->get_states();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(80)
	int _g2 = ::Lambda_obj::indexOf(_g1,state);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(80)
	return (_g2 != (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(StateComponent_obj,hasState,return )

Dynamic StateComponent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","clone",0x9b1b7a68,"haxe.ui.toolkit.core.StateComponent.clone","haxe/ui/toolkit/core/StateComponent.hx",1,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StateComponent c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::String _g = this->get_state();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_state(_g);
	HX_STACK_LINE(4)
	return c;
}


Dynamic StateComponent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StateComponent","self",0x64cb0ee1,"haxe.ui.toolkit.core.StateComponent.self","haxe/ui/toolkit/core/StateComponent.hx",2,0xb5b37565)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::StateComponent_obj::__new();
}



StateComponent_obj::StateComponent_obj()
{
}

void StateComponent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StateComponent);
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_states,"_states");
	HX_MARK_MEMBER_NAME(states,"states");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StateComponent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_states,"_states");
	HX_VISIT_MEMBER_NAME(states,"states");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StateComponent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"states") ) { return inCallProp ? get_states() : states; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { return _states; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addState") ) { return addState_dyn(); }
		if (HX_FIELD_EQ(inName,"hasState") ) { return hasState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addStates") ) { return addStates_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"buildStyles") ) { return buildStyles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StateComponent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return set_state(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { _states=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StateComponent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_states"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("states"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StateComponent_obj,_state),HX_CSTRING("_state")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StateComponent_obj,_states),HX_CSTRING("_states")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StateComponent_obj,states),HX_CSTRING("states")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_state"),
	HX_CSTRING("_states"),
	HX_CSTRING("buildStyles"),
	HX_CSTRING("addStates"),
	HX_CSTRING("addState"),
	HX_CSTRING("states"),
	HX_CSTRING("get_state"),
	HX_CSTRING("set_state"),
	HX_CSTRING("get_states"),
	HX_CSTRING("hasState"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StateComponent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StateComponent_obj::__mClass,"__mClass");
};

#endif

Class StateComponent_obj::__mClass;

void StateComponent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.StateComponent"), hx::TCanCast< StateComponent_obj> ,sStaticFields,sMemberFields,
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

void StateComponent_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
