#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ContinuousHBox
#include <haxe/ui/toolkit/containers/ContinuousHBox.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalContinuousLayout
#include <haxe/ui/toolkit/layout/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ContinuousHBox_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ContinuousHBox","new",0xa4bdcc1e,"haxe.ui.toolkit.containers.ContinuousHBox.new","haxe/ui/toolkit/containers/ContinuousHBox.hx",7,0x54b66612)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
	HX_STACK_LINE(10)
	this->set_autoSize(true);
	HX_STACK_LINE(11)
	::haxe::ui::toolkit::layout::HorizontalContinuousLayout _g = ::haxe::ui::toolkit::layout::HorizontalContinuousLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(11)
	this->_layout = _g;
}
;
	return null();
}

//ContinuousHBox_obj::~ContinuousHBox_obj() { }

Dynamic ContinuousHBox_obj::__CreateEmpty() { return  new ContinuousHBox_obj; }
hx::ObjectPtr< ContinuousHBox_obj > ContinuousHBox_obj::__new()
{  hx::ObjectPtr< ContinuousHBox_obj > result = new ContinuousHBox_obj();
	result->__construct();
	return result;}

Dynamic ContinuousHBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContinuousHBox_obj > result = new ContinuousHBox_obj();
	result->__construct();
	return result;}

hx::Object *ContinuousHBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Dynamic ContinuousHBox_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ContinuousHBox","clone",0x5811fa9b,"haxe.ui.toolkit.containers.ContinuousHBox.clone","haxe/ui/toolkit/containers/ContinuousHBox.hx",1,0x54b66612)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ContinuousHBox c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ContinuousHBox_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ContinuousHBox","self",0x84a2d60e,"haxe.ui.toolkit.containers.ContinuousHBox.self","haxe/ui/toolkit/containers/ContinuousHBox.hx",2,0x54b66612)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::ContinuousHBox_obj::__new();
}



ContinuousHBox_obj::ContinuousHBox_obj()
{
}

Dynamic ContinuousHBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ContinuousHBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ContinuousHBox_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ContinuousHBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContinuousHBox_obj::__mClass,"__mClass");
};

#endif

Class ContinuousHBox_obj::__mClass;

void ContinuousHBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.ContinuousHBox"), hx::TCanCast< ContinuousHBox_obj> ,sStaticFields,sMemberFields,
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

void ContinuousHBox_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
