#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Grid
#include <haxe/ui/toolkit/containers/Grid.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_GridLayout
#include <haxe/ui/toolkit/layout/GridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void Grid_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.Grid","new",0xa6995532,"haxe.ui.toolkit.containers.Grid.new","haxe/ui/toolkit/containers/Grid.hx",10,0xa9715b7e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct();
	HX_STACK_LINE(13)
	this->set_autoSize(true);
	HX_STACK_LINE(14)
	::haxe::ui::toolkit::layout::GridLayout _g = ::haxe::ui::toolkit::layout::GridLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	this->set_layout(_g);
}
;
	return null();
}

//Grid_obj::~Grid_obj() { }

Dynamic Grid_obj::__CreateEmpty() { return  new Grid_obj; }
hx::ObjectPtr< Grid_obj > Grid_obj::__new()
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct();
	return result;}

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Grid_obj > result = new Grid_obj();
	result->__construct();
	return result;}

hx::Object *Grid_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

int Grid_obj::get_columns( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Grid","get_columns",0xf0c5b3c6,"haxe.ui.toolkit.containers.Grid.get_columns","haxe/ui/toolkit/containers/Grid.hx",27,0xa9715b7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	return (hx::TCast< haxe::ui::toolkit::layout::GridLayout >::cast(this->_layout))->get_columns();
}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_columns,return )

int Grid_obj::set_columns( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Grid","set_columns",0xfb32bad2,"haxe.ui.toolkit.containers.Grid.set_columns","haxe/ui/toolkit/containers/Grid.hx",30,0xa9715b7e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(31)
	(hx::TCast< haxe::ui::toolkit::layout::GridLayout >::cast(this->_layout))->set_columns(value);
	HX_STACK_LINE(32)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,set_columns,return )

Dynamic Grid_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Grid","clone",0x2eb0f0af,"haxe.ui.toolkit.containers.Grid.clone","haxe/ui/toolkit/containers/Grid.hx",1,0xa9715b7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::Grid c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	int _g = this->get_columns();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_columns(_g);
	HX_STACK_LINE(4)
	return c;
}


Dynamic Grid_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Grid","self",0x22df3e7a,"haxe.ui.toolkit.containers.Grid.self","haxe/ui/toolkit/containers/Grid.hx",2,0xa9715b7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::Grid_obj::__new();
}



Grid_obj::Grid_obj()
{
}

Dynamic Grid_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return get_columns(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return set_columns_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Grid_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return set_columns(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("columns"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_columns"),
	HX_CSTRING("set_columns"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#endif

Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.Grid"), hx::TCanCast< Grid_obj> ,sStaticFields,sMemberFields,
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

void Grid_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
