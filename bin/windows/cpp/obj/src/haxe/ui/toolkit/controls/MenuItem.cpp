#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void MenuItem_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuItem","new",0x3b9fdf5a,"haxe.ui.toolkit.controls.MenuItem.new","haxe/ui/toolkit/controls/MenuItem.hx",6,0xd97f8416)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	super::__construct();
	HX_STACK_LINE(8)
	this->set_toggle(true);
	HX_STACK_LINE(9)
	this->set_allowSelection(false);
}
;
	return null();
}

//MenuItem_obj::~MenuItem_obj() { }

Dynamic MenuItem_obj::__CreateEmpty() { return  new MenuItem_obj; }
hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new()
{  hx::ObjectPtr< MenuItem_obj > result = new MenuItem_obj();
	result->__construct();
	return result;}

Dynamic MenuItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuItem_obj > result = new MenuItem_obj();
	result->__construct();
	return result;}

bool MenuItem_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuItem","set_selected",0x51fb439e,"haxe.ui.toolkit.controls.MenuItem.set_selected","haxe/ui/toolkit/controls/MenuItem.hx",12,0xd97f8416)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	this->_selected = value;
	HX_STACK_LINE(14)
	if (((this->_selected == true))){
		HX_STACK_LINE(15)
		this->set_state(HX_CSTRING("down"));
	}
	else{
		HX_STACK_LINE(17)
		this->set_state(HX_CSTRING("normal"));
	}
	HX_STACK_LINE(19)
	return value;
}


Dynamic MenuItem_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuItem","clone",0xfa0c54d7,"haxe.ui.toolkit.controls.MenuItem.clone","haxe/ui/toolkit/controls/MenuItem.hx",1,0xd97f8416)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::MenuItem c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic MenuItem_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.MenuItem","self",0xf3919752,"haxe.ui.toolkit.controls.MenuItem.self","haxe/ui/toolkit/controls/MenuItem.hx",2,0xd97f8416)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::MenuItem_obj::__new();
}



MenuItem_obj::MenuItem_obj()
{
}

Dynamic MenuItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("set_selected"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuItem_obj::__mClass,"__mClass");
};

#endif

Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.MenuItem"), hx::TCanCast< MenuItem_obj> ,sStaticFields,sMemberFields,
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

void MenuItem_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
