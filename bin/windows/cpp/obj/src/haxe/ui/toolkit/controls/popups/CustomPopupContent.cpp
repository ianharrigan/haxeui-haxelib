#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CustomPopupContent
#include <haxe/ui/toolkit/controls/popups/CustomPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{

Void CustomPopupContent_obj::__construct(::haxe::ui::toolkit::core::interfaces::IDisplayObject display)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CustomPopupContent","new",0xf176f8e1,"haxe.ui.toolkit.controls.popups.CustomPopupContent.new","haxe/ui/toolkit/controls/popups/CustomPopupContent.hx",11,0x4740f54e)
HX_STACK_THIS(this)
HX_STACK_ARG(display,"display")
{
	HX_STACK_LINE(12)
	super::__construct();
	HX_STACK_LINE(14)
	this->_display = display;
}
;
	return null();
}

//CustomPopupContent_obj::~CustomPopupContent_obj() { }

Dynamic CustomPopupContent_obj::__CreateEmpty() { return  new CustomPopupContent_obj; }
hx::ObjectPtr< CustomPopupContent_obj > CustomPopupContent_obj::__new(::haxe::ui::toolkit::core::interfaces::IDisplayObject display)
{  hx::ObjectPtr< CustomPopupContent_obj > result = new CustomPopupContent_obj();
	result->__construct(display);
	return result;}

Dynamic CustomPopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CustomPopupContent_obj > result = new CustomPopupContent_obj();
	result->__construct(inArgs[0]);
	return result;}

Void CustomPopupContent_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CustomPopupContent","initialize",0x6a388aef,"haxe.ui.toolkit.controls.popups.CustomPopupContent.initialize","haxe/ui/toolkit/controls/popups/CustomPopupContent.hx",20,0x4740f54e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		this->super::initialize();
		HX_STACK_LINE(22)
		this->addChild(this->_display);
		HX_STACK_LINE(23)
		Float _g = this->_display->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		this->set_height(_g);
	}
return null();
}


Dynamic CustomPopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CustomPopupContent","clone",0x27021e1e,"haxe.ui.toolkit.controls.popups.CustomPopupContent.clone","haxe/ui/toolkit/controls/popups/CustomPopupContent.hx",1,0x4740f54e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::CustomPopupContent c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic CustomPopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CustomPopupContent","self",0x59f0d3eb,"haxe.ui.toolkit.controls.popups.CustomPopupContent.self","haxe/ui/toolkit/controls/popups/CustomPopupContent.hx",2,0x4740f54e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::popups::CustomPopupContent_obj::__new(null());
}



CustomPopupContent_obj::CustomPopupContent_obj()
{
}

void CustomPopupContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomPopupContent);
	HX_MARK_MEMBER_NAME(_display,"_display");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CustomPopupContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_display,"_display");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CustomPopupContent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_display") ) { return _display; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CustomPopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_display") ) { _display=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CustomPopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_display"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObject*/ ,(int)offsetof(CustomPopupContent_obj,_display),HX_CSTRING("_display")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_display"),
	HX_CSTRING("initialize"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomPopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomPopupContent_obj::__mClass,"__mClass");
};

#endif

Class CustomPopupContent_obj::__mClass;

void CustomPopupContent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.popups.CustomPopupContent"), hx::TCanCast< CustomPopupContent_obj> ,sStaticFields,sMemberFields,
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

void CustomPopupContent_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace popups
