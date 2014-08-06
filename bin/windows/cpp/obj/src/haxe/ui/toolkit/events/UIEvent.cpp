#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace events{

Void UIEvent_obj::__construct(::String type,::haxe::ui::toolkit::core::Component c,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","new",0x17c22785,"haxe.ui.toolkit.events.UIEvent.new","haxe/ui/toolkit/events/UIEvent.hx",45,0x2669ff0b)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(c,"c")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(46)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(47)
	this->_component = c;
}
;
	return null();
}

//UIEvent_obj::~UIEvent_obj() { }

Dynamic UIEvent_obj::__CreateEmpty() { return  new UIEvent_obj; }
hx::ObjectPtr< UIEvent_obj > UIEvent_obj::__new(::String type,::haxe::ui::toolkit::core::Component c,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< UIEvent_obj > result = new UIEvent_obj();
	result->__construct(type,c,__o_bubbles,__o_cancelable);
	return result;}

Dynamic UIEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIEvent_obj > result = new UIEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::openfl::events::Event UIEvent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","clone",0xd9713dc2,"haxe.ui.toolkit.events.UIEvent.clone","haxe/ui/toolkit/events/UIEvent.hx",50,0x2669ff0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::String _g = this->get_type();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(51)
	bool _g1 = this->get_bubbles();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(51)
	bool _g2 = this->get_cancelable();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(51)
	::haxe::ui::toolkit::events::UIEvent c = ::haxe::ui::toolkit::events::UIEvent_obj::__new(_g,this->_component,_g1,_g2);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(52)
	c->displayObject = this->displayObject;
	HX_STACK_LINE(53)
	c->data = this->data;
	HX_STACK_LINE(54)
	c->stageX = this->stageX;
	HX_STACK_LINE(55)
	c->stageY = this->stageY;
	HX_STACK_LINE(56)
	return c;
}


::haxe::ui::toolkit::core::Component UIEvent_obj::get_component( ){
	HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","get_component",0xf43e5bf9,"haxe.ui.toolkit.events.UIEvent.get_component","haxe/ui/toolkit/events/UIEvent.hx",60,0x2669ff0b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	if (((this->_component != null()))){
		HX_STACK_LINE(62)
		return this->_component;
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::events::UIEvent_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/events/UIEvent.hx",64,0x2669ff0b)
			{
				HX_STACK_LINE(64)
				bool _g = ::Std_obj::is(__this->displayObject,hx::ClassOf< ::haxe::ui::toolkit::core::Component >());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(64)
				return (_g == false);
			}
			return null();
		}
	};
	HX_STACK_LINE(64)
	if (((  ((!(((this->displayObject == null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
		HX_STACK_LINE(65)
		return null();
	}
	HX_STACK_LINE(67)
	return hx::TCast< haxe::ui::toolkit::core::Component >::cast(this->displayObject);
}


HX_DEFINE_DYNAMIC_FUNC0(UIEvent_obj,get_component,return )

Dynamic UIEvent_obj::getComponentAs( ::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","getComponentAs",0xfa9bc714,"haxe.ui.toolkit.events.UIEvent.getComponentAs","haxe/ui/toolkit/events/UIEvent.hx",70,0x2669ff0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(71)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c = this->get_component();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(72)
	if (((c == null()))){
		HX_STACK_LINE(73)
		return null();
	}
	HX_STACK_LINE(76)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC1(UIEvent_obj,getComponentAs,return )

Dynamic UIEvent_obj::getDataAs( ::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.events.UIEvent","getDataAs",0xcabf37d7,"haxe.ui.toolkit.events.UIEvent.getDataAs","haxe/ui/toolkit/events/UIEvent.hx",79,0x2669ff0b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(80)
	Dynamic d = this->data;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(81)
	if (((d == null()))){
		HX_STACK_LINE(82)
		return null();
	}
	HX_STACK_LINE(85)
	return d;
}


HX_DEFINE_DYNAMIC_FUNC1(UIEvent_obj,getDataAs,return )

::String UIEvent_obj::PREFIX;

::String UIEvent_obj::INIT;

::String UIEvent_obj::RESIZE;

::String UIEvent_obj::READY;

::String UIEvent_obj::CLICK;

::String UIEvent_obj::MOUSE_DOWN;

::String UIEvent_obj::MOUSE_UP;

::String UIEvent_obj::MOUSE_OVER;

::String UIEvent_obj::MOUSE_OUT;

::String UIEvent_obj::MOUSE_MOVE;

::String UIEvent_obj::DOUBLE_CLICK;

::String UIEvent_obj::ROLL_OVER;

::String UIEvent_obj::ROLL_OUT;

::String UIEvent_obj::CHANGE;

::String UIEvent_obj::SCROLL;

::String UIEvent_obj::ADDED;

::String UIEvent_obj::ADDED_TO_STAGE;

::String UIEvent_obj::REMOVED;

::String UIEvent_obj::REMOVED_FROM_STAGE;

::String UIEvent_obj::ACTIVATE;

::String UIEvent_obj::DEACTIVATE;

::String UIEvent_obj::GLYPH_CLICK;

::String UIEvent_obj::COMPONENT_EVENT;

::String UIEvent_obj::MENU_SELECT;

::String UIEvent_obj::MENU_OPEN;


UIEvent_obj::UIEvent_obj()
{
}

void UIEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UIEvent);
	HX_MARK_MEMBER_NAME(displayObject,"displayObject");
	HX_MARK_MEMBER_NAME(component,"component");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(stageX,"stageX");
	HX_MARK_MEMBER_NAME(stageY,"stageY");
	HX_MARK_MEMBER_NAME(_component,"_component");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void UIEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(displayObject,"displayObject");
	HX_VISIT_MEMBER_NAME(component,"component");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(stageX,"stageX");
	HX_VISIT_MEMBER_NAME(stageY,"stageY");
	HX_VISIT_MEMBER_NAME(_component,"_component");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic UIEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stageX") ) { return stageX; }
		if (HX_FIELD_EQ(inName,"stageY") ) { return stageY; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { return inCallProp ? get_component() : component; }
		if (HX_FIELD_EQ(inName,"getDataAs") ) { return getDataAs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return _component; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayObject") ) { return displayObject; }
		if (HX_FIELD_EQ(inName,"get_component") ) { return get_component_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getComponentAs") ) { return getComponentAs_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stageX") ) { stageX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stageY") ) { stageY=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"component") ) { component=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayObject") ) { displayObject=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UIEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("displayObject"));
	outFields->push(HX_CSTRING("component"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("stageX"));
	outFields->push(HX_CSTRING("stageY"));
	outFields->push(HX_CSTRING("_component"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PREFIX"),
	HX_CSTRING("INIT"),
	HX_CSTRING("RESIZE"),
	HX_CSTRING("READY"),
	HX_CSTRING("CLICK"),
	HX_CSTRING("MOUSE_DOWN"),
	HX_CSTRING("MOUSE_UP"),
	HX_CSTRING("MOUSE_OVER"),
	HX_CSTRING("MOUSE_OUT"),
	HX_CSTRING("MOUSE_MOVE"),
	HX_CSTRING("DOUBLE_CLICK"),
	HX_CSTRING("ROLL_OVER"),
	HX_CSTRING("ROLL_OUT"),
	HX_CSTRING("CHANGE"),
	HX_CSTRING("SCROLL"),
	HX_CSTRING("ADDED"),
	HX_CSTRING("ADDED_TO_STAGE"),
	HX_CSTRING("REMOVED"),
	HX_CSTRING("REMOVED_FROM_STAGE"),
	HX_CSTRING("ACTIVATE"),
	HX_CSTRING("DEACTIVATE"),
	HX_CSTRING("GLYPH_CLICK"),
	HX_CSTRING("COMPONENT_EVENT"),
	HX_CSTRING("MENU_SELECT"),
	HX_CSTRING("MENU_OPEN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObject*/ ,(int)offsetof(UIEvent_obj,displayObject),HX_CSTRING("displayObject")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(UIEvent_obj,component),HX_CSTRING("component")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(UIEvent_obj,data),HX_CSTRING("data")},
	{hx::fsFloat,(int)offsetof(UIEvent_obj,stageX),HX_CSTRING("stageX")},
	{hx::fsFloat,(int)offsetof(UIEvent_obj,stageY),HX_CSTRING("stageY")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(UIEvent_obj,_component),HX_CSTRING("_component")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("displayObject"),
	HX_CSTRING("component"),
	HX_CSTRING("data"),
	HX_CSTRING("stageX"),
	HX_CSTRING("stageY"),
	HX_CSTRING("clone"),
	HX_CSTRING("_component"),
	HX_CSTRING("get_component"),
	HX_CSTRING("getComponentAs"),
	HX_CSTRING("getDataAs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UIEvent_obj::PREFIX,"PREFIX");
	HX_MARK_MEMBER_NAME(UIEvent_obj::INIT,"INIT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_MARK_MEMBER_NAME(UIEvent_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::SCROLL,"SCROLL");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ADDED,"ADDED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::REMOVED,"REMOVED");
	HX_MARK_MEMBER_NAME(UIEvent_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::ACTIVATE,"ACTIVATE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::DEACTIVATE,"DEACTIVATE");
	HX_MARK_MEMBER_NAME(UIEvent_obj::GLYPH_CLICK,"GLYPH_CLICK");
	HX_MARK_MEMBER_NAME(UIEvent_obj::COMPONENT_EVENT,"COMPONENT_EVENT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MENU_SELECT,"MENU_SELECT");
	HX_MARK_MEMBER_NAME(UIEvent_obj::MENU_OPEN,"MENU_OPEN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::PREFIX,"PREFIX");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::INIT,"INIT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::RESIZE,"RESIZE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::READY,"READY");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_OVER,"MOUSE_OVER");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_OUT,"MOUSE_OUT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::DOUBLE_CLICK,"DOUBLE_CLICK");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ROLL_OVER,"ROLL_OVER");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ROLL_OUT,"ROLL_OUT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::CHANGE,"CHANGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::SCROLL,"SCROLL");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ADDED,"ADDED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ADDED_TO_STAGE,"ADDED_TO_STAGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::REMOVED,"REMOVED");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::REMOVED_FROM_STAGE,"REMOVED_FROM_STAGE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::ACTIVATE,"ACTIVATE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::DEACTIVATE,"DEACTIVATE");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::GLYPH_CLICK,"GLYPH_CLICK");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::COMPONENT_EVENT,"COMPONENT_EVENT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MENU_SELECT,"MENU_SELECT");
	HX_VISIT_MEMBER_NAME(UIEvent_obj::MENU_OPEN,"MENU_OPEN");
};

#endif

Class UIEvent_obj::__mClass;

void UIEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.events.UIEvent"), hx::TCanCast< UIEvent_obj> ,sStaticFields,sMemberFields,
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

void UIEvent_obj::__boot()
{
	PREFIX= HX_CSTRING("haxeui_");
	INIT= HX_CSTRING("haxeui_init");
	RESIZE= HX_CSTRING("haxeui_resize");
	READY= HX_CSTRING("haxeui_ready");
	CLICK= HX_CSTRING("haxeui_click");
	MOUSE_DOWN= HX_CSTRING("haxeui_mouseDown");
	MOUSE_UP= HX_CSTRING("haxeui_mouseUp");
	MOUSE_OVER= HX_CSTRING("haxeui_mouseOver");
	MOUSE_OUT= HX_CSTRING("haxeui_mouseOut");
	MOUSE_MOVE= HX_CSTRING("haxeui_mouseMove");
	DOUBLE_CLICK= HX_CSTRING("haxeui_doubleClick");
	ROLL_OVER= HX_CSTRING("haxeui_rollOver");
	ROLL_OUT= HX_CSTRING("haxeui_rollOut");
	CHANGE= HX_CSTRING("haxeui_change");
	SCROLL= HX_CSTRING("haxeui_scroll");
	ADDED= HX_CSTRING("haxeui_added");
	ADDED_TO_STAGE= HX_CSTRING("haxeui_addedToStage");
	REMOVED= HX_CSTRING("haxeui_removed");
	REMOVED_FROM_STAGE= HX_CSTRING("haxeui_removedFromStage");
	ACTIVATE= HX_CSTRING("haxeui_activate");
	DEACTIVATE= HX_CSTRING("haxeui_deactivate");
	GLYPH_CLICK= HX_CSTRING("haxeui_glyphClick");
	COMPONENT_EVENT= HX_CSTRING("haxeui_componentEvent");
	MENU_SELECT= HX_CSTRING("haxeui_menuSelect");
	MENU_OPEN= HX_CSTRING("haxeui_menuOpen");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace events
