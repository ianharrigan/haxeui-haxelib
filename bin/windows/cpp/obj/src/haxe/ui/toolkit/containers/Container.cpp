#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
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
namespace containers{

Void Container_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.Container","new",0xbd640df9,"haxe.ui.toolkit.containers.Container.new","haxe/ui/toolkit/containers/Container.hx",8,0xc0b4ee97)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//Container_obj::~Container_obj() { }

Dynamic Container_obj::__CreateEmpty() { return  new Container_obj; }
hx::ObjectPtr< Container_obj > Container_obj::__new()
{  hx::ObjectPtr< Container_obj > result = new Container_obj();
	result->__construct();
	return result;}

Dynamic Container_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Container_obj > result = new Container_obj();
	result->__construct();
	return result;}

hx::Object *Container_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Dynamic Container_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Container","clone",0x9830a936,"haxe.ui.toolkit.containers.Container.clone","haxe/ui/toolkit/core/Macros.hx",490,0x3fba9eca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::containers::Container c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(15)
		while((true)){
			HX_STACK_LINE(15)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(15)
				break;
			}
			HX_STACK_LINE(15)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(15)
			++(_g);
			HX_STACK_LINE(16)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g2 = child->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(16)
			c->addChild(_g2);
		}
	}
	HX_STACK_LINE(1)
	return c;
}


Dynamic Container_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.Container","self",0xfd7633d3,"haxe.ui.toolkit.containers.Container.self","haxe/ui/toolkit/containers/Container.hx",1,0xc0b4ee97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	return ::haxe::ui::toolkit::containers::Container_obj::__new();
}



Container_obj::Container_obj()
{
}

Dynamic Container_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic Container_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Container_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Container_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Container_obj::__mClass,"__mClass");
};

#endif

Class Container_obj::__mClass;

void Container_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.Container"), hx::TCanCast< Container_obj> ,sStaticFields,sMemberFields,
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

void Container_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
