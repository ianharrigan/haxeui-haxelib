#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ContinuousVBox
#include <haxe/ui/toolkit/containers/ContinuousVBox.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalContinuousLayout
#include <haxe/ui/toolkit/layout/VerticalContinuousLayout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ContinuousVBox_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ContinuousVBox","new",0xc58009d0,"haxe.ui.toolkit.containers.ContinuousVBox.new","haxe/ui/toolkit/containers/ContinuousVBox.hx",7,0x9ae2e4a0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
	HX_STACK_LINE(10)
	this->set_autoSize(true);
	HX_STACK_LINE(11)
	::haxe::ui::toolkit::layout::VerticalContinuousLayout _g = ::haxe::ui::toolkit::layout::VerticalContinuousLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(11)
	this->_layout = _g;
}
;
	return null();
}

//ContinuousVBox_obj::~ContinuousVBox_obj() { }

Dynamic ContinuousVBox_obj::__CreateEmpty() { return  new ContinuousVBox_obj; }
hx::ObjectPtr< ContinuousVBox_obj > ContinuousVBox_obj::__new()
{  hx::ObjectPtr< ContinuousVBox_obj > result = new ContinuousVBox_obj();
	result->__construct();
	return result;}

Dynamic ContinuousVBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ContinuousVBox_obj > result = new ContinuousVBox_obj();
	result->__construct();
	return result;}

hx::Object *ContinuousVBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Dynamic ContinuousVBox_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ContinuousVBox","clone",0xdc2488cd,"haxe.ui.toolkit.containers.ContinuousVBox.clone","haxe/ui/toolkit/containers/ContinuousVBox.hx",1,0x9ae2e4a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ContinuousVBox c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ContinuousVBox_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ContinuousVBox","self",0x0dd6941c,"haxe.ui.toolkit.containers.ContinuousVBox.self","haxe/ui/toolkit/containers/ContinuousVBox.hx",2,0x9ae2e4a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::ContinuousVBox_obj::__new();
}



ContinuousVBox_obj::ContinuousVBox_obj()
{
}

Dynamic ContinuousVBox_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ContinuousVBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ContinuousVBox_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ContinuousVBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ContinuousVBox_obj::__mClass,"__mClass");
};

#endif

Class ContinuousVBox_obj::__mClass;

void ContinuousVBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.ContinuousVBox"), hx::TCanCast< ContinuousVBox_obj> ,sStaticFields,sMemberFields,
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

void ContinuousVBox_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
