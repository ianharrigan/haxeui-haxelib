#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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

Void PopupContent_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.PopupContent","new",0x0c36f850,"haxe.ui.toolkit.controls.popups.PopupContent.new","haxe/ui/toolkit/controls/popups/PopupContent.hx",12,0x703c677f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct();
}
;
	return null();
}

//PopupContent_obj::~PopupContent_obj() { }

Dynamic PopupContent_obj::__CreateEmpty() { return  new PopupContent_obj; }
hx::ObjectPtr< PopupContent_obj > PopupContent_obj::__new()
{  hx::ObjectPtr< PopupContent_obj > result = new PopupContent_obj();
	result->__construct();
	return result;}

Dynamic PopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupContent_obj > result = new PopupContent_obj();
	result->__construct();
	return result;}

bool PopupContent_obj::onButtonClicked( int button){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.PopupContent","onButtonClicked",0x2c06f626,"haxe.ui.toolkit.controls.popups.PopupContent.onButtonClicked","haxe/ui/toolkit/controls/popups/PopupContent.hx",16,0x703c677f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(button,"button")
	HX_STACK_LINE(16)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(PopupContent_obj,onButtonClicked,return )

Dynamic PopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.PopupContent","clone",0x7154174d,"haxe.ui.toolkit.controls.popups.PopupContent.clone","haxe/ui/toolkit/controls/popups/PopupContent.hx",1,0x703c677f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::PopupContent c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic PopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.PopupContent","self",0xa730559c,"haxe.ui.toolkit.controls.popups.PopupContent.self","haxe/ui/toolkit/controls/popups/PopupContent.hx",2,0x703c677f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::popups::PopupContent_obj::__new();
}



PopupContent_obj::PopupContent_obj()
{
}

void PopupContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PopupContent);
	HX_MARK_MEMBER_NAME(popup,"popup");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PopupContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(popup,"popup");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PopupContent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"popup") ) { return popup; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onButtonClicked") ) { return onButtonClicked_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"popup") ) { popup=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("popup"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(PopupContent_obj,popup),HX_CSTRING("popup")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("popup"),
	HX_CSTRING("onButtonClicked"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupContent_obj::__mClass,"__mClass");
};

#endif

Class PopupContent_obj::__mClass;

void PopupContent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.popups.PopupContent"), hx::TCanCast< PopupContent_obj> ,sStaticFields,sMemberFields,
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

void PopupContent_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace popups
