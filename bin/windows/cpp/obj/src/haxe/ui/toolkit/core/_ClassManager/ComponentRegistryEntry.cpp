#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ComponentRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ComponentRegistryEntry.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ClassManager{

Void ComponentRegistryEntry_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core._ClassManager.ComponentRegistryEntry","new",0x8869a691,"haxe.ui.toolkit.core._ClassManager.ComponentRegistryEntry.new","haxe/ui/toolkit/core/ClassManager.hx",115,0xd34ec19c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(115)
	super::__construct();
}
;
	return null();
}

//ComponentRegistryEntry_obj::~ComponentRegistryEntry_obj() { }

Dynamic ComponentRegistryEntry_obj::__CreateEmpty() { return  new ComponentRegistryEntry_obj; }
hx::ObjectPtr< ComponentRegistryEntry_obj > ComponentRegistryEntry_obj::__new()
{  hx::ObjectPtr< ComponentRegistryEntry_obj > result = new ComponentRegistryEntry_obj();
	result->__construct();
	return result;}

Dynamic ComponentRegistryEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComponentRegistryEntry_obj > result = new ComponentRegistryEntry_obj();
	result->__construct();
	return result;}


ComponentRegistryEntry_obj::ComponentRegistryEntry_obj()
{
}

void ComponentRegistryEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentRegistryEntry);
	HX_MARK_MEMBER_NAME(prefix,"prefix");
	::haxe::ui::toolkit::core::_ClassManager::ClassRegistryEntry_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentRegistryEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(prefix,"prefix");
	::haxe::ui::toolkit::core::_ClassManager::ClassRegistryEntry_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ComponentRegistryEntry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { return prefix; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ComponentRegistryEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"prefix") ) { prefix=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentRegistryEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("prefix"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ComponentRegistryEntry_obj,prefix),HX_CSTRING("prefix")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("prefix"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentRegistryEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentRegistryEntry_obj::__mClass,"__mClass");
};

#endif

Class ComponentRegistryEntry_obj::__mClass;

void ComponentRegistryEntry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core._ClassManager.ComponentRegistryEntry"), hx::TCanCast< ComponentRegistryEntry_obj> ,sStaticFields,sMemberFields,
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

void ComponentRegistryEntry_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace _ClassManager
