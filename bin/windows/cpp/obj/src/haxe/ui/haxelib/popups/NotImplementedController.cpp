#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_haxelib_popups_NotImplementedController
#include <haxe/ui/haxelib/popups/NotImplementedController.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#include <haxe/ui/toolkit/core/XMLController.h>
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
namespace haxelib{
namespace popups{

Void NotImplementedController_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.haxelib.popups.NotImplementedController","new",0x49cbb5a3,"haxe.ui.haxelib.popups.NotImplementedController.new","haxe/ui/toolkit/core/Macros.hx",389,0x3fba9eca)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(4)
	super::__construct(HX_CSTRING("assets/ui/popups/not-implemented.xml"));
	HX_STACK_LINE(4)
	::haxe::ui::toolkit::controls::Text _g = this->getComponentAs(HX_CSTRING("warningText"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(4)
	this->warningText = _g;
	HX_STACK_LINE(4)
	::haxe::ui::toolkit::containers::HBox _g1 = this->getComponentAs(HX_CSTRING("warning"),hx::ClassOf< ::haxe::ui::toolkit::containers::HBox >());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4)
	this->warning = _g1;
}
;
	return null();
}

//NotImplementedController_obj::~NotImplementedController_obj() { }

Dynamic NotImplementedController_obj::__CreateEmpty() { return  new NotImplementedController_obj; }
hx::ObjectPtr< NotImplementedController_obj > NotImplementedController_obj::__new()
{  hx::ObjectPtr< NotImplementedController_obj > result = new NotImplementedController_obj();
	result->__construct();
	return result;}

Dynamic NotImplementedController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NotImplementedController_obj > result = new NotImplementedController_obj();
	result->__construct();
	return result;}


NotImplementedController_obj::NotImplementedController_obj()
{
}

void NotImplementedController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotImplementedController);
	HX_MARK_MEMBER_NAME(warning,"warning");
	HX_MARK_MEMBER_NAME(warningText,"warningText");
	::haxe::ui::toolkit::core::Controller_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NotImplementedController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(warning,"warning");
	HX_VISIT_MEMBER_NAME(warningText,"warningText");
	::haxe::ui::toolkit::core::Controller_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NotImplementedController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"warning") ) { return warning; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"warningText") ) { return warningText; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NotImplementedController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"warning") ) { warning=inValue.Cast< ::haxe::ui::toolkit::containers::HBox >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"warningText") ) { warningText=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NotImplementedController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("warning"));
	outFields->push(HX_CSTRING("warningText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::HBox*/ ,(int)offsetof(NotImplementedController_obj,warning),HX_CSTRING("warning")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(NotImplementedController_obj,warningText),HX_CSTRING("warningText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("warning"),
	HX_CSTRING("warningText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotImplementedController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotImplementedController_obj::__mClass,"__mClass");
};

#endif

Class NotImplementedController_obj::__mClass;

void NotImplementedController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.popups.NotImplementedController"), hx::TCanCast< NotImplementedController_obj> ,sStaticFields,sMemberFields,
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

void NotImplementedController_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
} // end namespace popups
