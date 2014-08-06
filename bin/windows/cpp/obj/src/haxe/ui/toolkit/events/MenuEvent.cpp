#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_MenuEvent
#include <haxe/ui/toolkit/events/MenuEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace events{

Void MenuEvent_obj::__construct(::String type,::haxe::ui::toolkit::controls::MenuItem menuItem)
{
HX_STACK_FRAME("haxe.ui.toolkit.events.MenuEvent","new",0xf3016ffa,"haxe.ui.toolkit.events.MenuEvent.new","haxe/ui/toolkit/events/MenuEvent.hx",14,0x1fe31c36)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(menuItem,"menuItem")
{
	HX_STACK_LINE(15)
	super::__construct(type,null(),null());
	HX_STACK_LINE(16)
	this->menuItem = menuItem;
}
;
	return null();
}

//MenuEvent_obj::~MenuEvent_obj() { }

Dynamic MenuEvent_obj::__CreateEmpty() { return  new MenuEvent_obj; }
hx::ObjectPtr< MenuEvent_obj > MenuEvent_obj::__new(::String type,::haxe::ui::toolkit::controls::MenuItem menuItem)
{  hx::ObjectPtr< MenuEvent_obj > result = new MenuEvent_obj();
	result->__construct(type,menuItem);
	return result;}

Dynamic MenuEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuEvent_obj > result = new MenuEvent_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String MenuEvent_obj::SELECT;

::String MenuEvent_obj::OPEN;


MenuEvent_obj::MenuEvent_obj()
{
}

void MenuEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuEvent);
	HX_MARK_MEMBER_NAME(menuItem,"menuItem");
	HX_MARK_MEMBER_NAME(menu,"menu");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuItem,"menuItem");
	HX_VISIT_MEMBER_NAME(menu,"menu");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"OPEN") ) { return OPEN; }
		if (HX_FIELD_EQ(inName,"menu") ) { return menu; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SELECT") ) { return SELECT; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuItem") ) { return menuItem; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"OPEN") ) { OPEN=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menu") ) { menu=inValue.Cast< ::haxe::ui::toolkit::controls::Menu >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SELECT") ) { SELECT=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"menuItem") ) { menuItem=inValue.Cast< ::haxe::ui::toolkit::controls::MenuItem >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("menuItem"));
	outFields->push(HX_CSTRING("menu"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SELECT"),
	HX_CSTRING("OPEN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::MenuItem*/ ,(int)offsetof(MenuEvent_obj,menuItem),HX_CSTRING("menuItem")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Menu*/ ,(int)offsetof(MenuEvent_obj,menu),HX_CSTRING("menu")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("menuItem"),
	HX_CSTRING("menu"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MenuEvent_obj::SELECT,"SELECT");
	HX_MARK_MEMBER_NAME(MenuEvent_obj::OPEN,"OPEN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::SELECT,"SELECT");
	HX_VISIT_MEMBER_NAME(MenuEvent_obj::OPEN,"OPEN");
};

#endif

Class MenuEvent_obj::__mClass;

void MenuEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.events.MenuEvent"), hx::TCanCast< MenuEvent_obj> ,sStaticFields,sMemberFields,
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

void MenuEvent_obj::__boot()
{
	SELECT= ::openfl::events::Event_obj::SELECT;
	OPEN= ::openfl::events::Event_obj::OPEN;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace events
