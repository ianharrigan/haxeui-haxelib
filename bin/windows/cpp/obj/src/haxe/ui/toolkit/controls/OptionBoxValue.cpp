#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_OptionBoxValue
#include <haxe/ui/toolkit/controls/OptionBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Value
#include <haxe/ui/toolkit/controls/Value.h>
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

Void OptionBoxValue_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBoxValue","new",0xf8e0e003,"haxe.ui.toolkit.controls.OptionBoxValue.new","haxe/ui/toolkit/controls/OptionBox.hx",186,0xfe98d33e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(187)
	super::__construct();
	HX_STACK_LINE(188)
	this->_value = HX_CSTRING("unselected");
	HX_STACK_LINE(189)
	this->addValue(HX_CSTRING("selected"));
	HX_STACK_LINE(190)
	this->addValue(HX_CSTRING("unselected"));
}
;
	return null();
}

//OptionBoxValue_obj::~OptionBoxValue_obj() { }

Dynamic OptionBoxValue_obj::__CreateEmpty() { return  new OptionBoxValue_obj; }
hx::ObjectPtr< OptionBoxValue_obj > OptionBoxValue_obj::__new()
{  hx::ObjectPtr< OptionBoxValue_obj > result = new OptionBoxValue_obj();
	result->__construct();
	return result;}

Dynamic OptionBoxValue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptionBoxValue_obj > result = new OptionBoxValue_obj();
	result->__construct();
	return result;}

hx::Object *OptionBoxValue_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Dynamic OptionBoxValue_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBoxValue","clone",0x4a0d91c0,"haxe.ui.toolkit.controls.OptionBoxValue.clone","haxe/ui/toolkit/controls/OptionBoxValue.hx",1,0xd2f59b8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::OptionBoxValue c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic OptionBoxValue_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.OptionBoxValue","self",0xcf312a89,"haxe.ui.toolkit.controls.OptionBoxValue.self","haxe/ui/toolkit/controls/OptionBoxValue.hx",2,0xd2f59b8d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::OptionBoxValue_obj::__new();
}



OptionBoxValue_obj::OptionBoxValue_obj()
{
}

Dynamic OptionBoxValue_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic OptionBoxValue_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionBoxValue_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(OptionBoxValue_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionBoxValue_obj::__mClass,"__mClass");
};

#endif

Class OptionBoxValue_obj::__mClass;

void OptionBoxValue_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.OptionBoxValue"), hx::TCanCast< OptionBoxValue_obj> ,sStaticFields,sMemberFields,
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

void OptionBoxValue_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/OptionBox.hx",185,0xfe98d33e)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/OptionBox.hx",185,0xfe98d33e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("exclude") , null(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_CSTRING("obj") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
