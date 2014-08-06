#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_BusyPopupContent
#include <haxe/ui/toolkit/controls/popups/BusyPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_SimplePopupContent
#include <haxe/ui/toolkit/controls/popups/SimplePopupContent.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{

Void BusyPopupContent_obj::__construct(::String __o_text)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.BusyPopupContent","new",0xcc773829,"haxe.ui.toolkit.controls.popups.BusyPopupContent.new","haxe/ui/toolkit/controls/popups/BusyPopupContent.hx",9,0xfe6ec146)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_text,"text")
::String text = __o_text.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(9)
	super::__construct(text);
}
;
	return null();
}

//BusyPopupContent_obj::~BusyPopupContent_obj() { }

Dynamic BusyPopupContent_obj::__CreateEmpty() { return  new BusyPopupContent_obj; }
hx::ObjectPtr< BusyPopupContent_obj > BusyPopupContent_obj::__new(::String __o_text)
{  hx::ObjectPtr< BusyPopupContent_obj > result = new BusyPopupContent_obj();
	result->__construct(__o_text);
	return result;}

Dynamic BusyPopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BusyPopupContent_obj > result = new BusyPopupContent_obj();
	result->__construct(inArgs[0]);
	return result;}

Void BusyPopupContent_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.BusyPopupContent","initialize",0x6f7e44a7,"haxe.ui.toolkit.controls.popups.BusyPopupContent.initialize","haxe/ui/toolkit/controls/popups/BusyPopupContent.hx",15,0xfe6ec146)
		HX_STACK_THIS(this)
		HX_STACK_LINE(16)
		this->addChild(this->_textControl);
		HX_STACK_LINE(17)
		Float _g = this->_textControl->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		Float _g1 = (_g + (int)15);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(17)
		this->set_height(_g1);
	}
return null();
}


Dynamic BusyPopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.BusyPopupContent","clone",0xf206bf66,"haxe.ui.toolkit.controls.popups.BusyPopupContent.clone","haxe/ui/toolkit/controls/popups/BusyPopupContent.hx",1,0xfe6ec146)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::BusyPopupContent c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic BusyPopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.BusyPopupContent","self",0x1f27f3a3,"haxe.ui.toolkit.controls.popups.BusyPopupContent.self","haxe/ui/toolkit/controls/popups/BusyPopupContent.hx",2,0xfe6ec146)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::popups::BusyPopupContent_obj::__new(null());
}



BusyPopupContent_obj::BusyPopupContent_obj()
{
}

Dynamic BusyPopupContent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BusyPopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BusyPopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("initialize"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BusyPopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BusyPopupContent_obj::__mClass,"__mClass");
};

#endif

Class BusyPopupContent_obj::__mClass;

void BusyPopupContent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.popups.BusyPopupContent"), hx::TCanCast< BusyPopupContent_obj> ,sStaticFields,sMemberFields,
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

void BusyPopupContent_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace popups
