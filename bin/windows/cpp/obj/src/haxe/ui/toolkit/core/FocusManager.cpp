#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_FocusManager
#include <haxe/ui/toolkit/core/FocusManager.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void FocusManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.FocusManager","new",0xbf521ef4,"haxe.ui.toolkit.core.FocusManager.new","haxe/ui/toolkit/core/FocusManager.hx",16,0xe949713c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//FocusManager_obj::~FocusManager_obj() { }

Dynamic FocusManager_obj::__CreateEmpty() { return  new FocusManager_obj; }
hx::ObjectPtr< FocusManager_obj > FocusManager_obj::__new()
{  hx::ObjectPtr< FocusManager_obj > result = new FocusManager_obj();
	result->__construct();
	return result;}

Dynamic FocusManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FocusManager_obj > result = new FocusManager_obj();
	result->__construct();
	return result;}

::haxe::ui::toolkit::core::FocusManager FocusManager_obj::_instance;

::haxe::ui::toolkit::core::FocusManager FocusManager_obj::instance;

::haxe::ui::toolkit::core::FocusManager FocusManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.FocusManager","get_instance",0x5bd0128a,"haxe.ui.toolkit.core.FocusManager.get_instance","haxe/ui/toolkit/core/FocusManager.hx",6,0xe949713c)
	HX_STACK_LINE(7)
	if (((::haxe::ui::toolkit::core::FocusManager_obj::_instance == null()))){
		HX_STACK_LINE(8)
		::haxe::ui::toolkit::core::FocusManager _g = ::haxe::ui::toolkit::core::FocusManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(8)
		::haxe::ui::toolkit::core::FocusManager_obj::_instance = _g;
	}
	HX_STACK_LINE(10)
	return ::haxe::ui::toolkit::core::FocusManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FocusManager_obj,get_instance,return )


FocusManager_obj::FocusManager_obj()
{
}

Dynamic FocusManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FocusManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::FocusManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::FocusManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FocusManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(FocusManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FocusManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(FocusManager_obj::instance,"instance");
};

#endif

Class FocusManager_obj::__mClass;

void FocusManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.FocusManager"), hx::TCanCast< FocusManager_obj> ,sStaticFields,sMemberFields,
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

void FocusManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
