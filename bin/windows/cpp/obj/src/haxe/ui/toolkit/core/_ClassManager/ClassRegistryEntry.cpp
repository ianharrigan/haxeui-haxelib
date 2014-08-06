#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ClassManager{

Void ClassRegistryEntry_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core._ClassManager.ClassRegistryEntry","new",0x98d0a536,"haxe.ui.toolkit.core._ClassManager.ClassRegistryEntry.new","haxe/ui/toolkit/core/ClassManager.hx",107,0xd34ec19c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ClassRegistryEntry_obj::~ClassRegistryEntry_obj() { }

Dynamic ClassRegistryEntry_obj::__CreateEmpty() { return  new ClassRegistryEntry_obj; }
hx::ObjectPtr< ClassRegistryEntry_obj > ClassRegistryEntry_obj::__new()
{  hx::ObjectPtr< ClassRegistryEntry_obj > result = new ClassRegistryEntry_obj();
	result->__construct();
	return result;}

Dynamic ClassRegistryEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClassRegistryEntry_obj > result = new ClassRegistryEntry_obj();
	result->__construct();
	return result;}


ClassRegistryEntry_obj::ClassRegistryEntry_obj()
{
}

void ClassRegistryEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassRegistryEntry);
	HX_MARK_MEMBER_NAME(simpleName,"simpleName");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_END_CLASS();
}

void ClassRegistryEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(simpleName,"simpleName");
	HX_VISIT_MEMBER_NAME(className,"className");
}

Dynamic ClassRegistryEntry_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"simpleName") ) { return simpleName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClassRegistryEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"simpleName") ) { simpleName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClassRegistryEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("simpleName"));
	outFields->push(HX_CSTRING("className"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ClassRegistryEntry_obj,simpleName),HX_CSTRING("simpleName")},
	{hx::fsString,(int)offsetof(ClassRegistryEntry_obj,className),HX_CSTRING("className")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("simpleName"),
	HX_CSTRING("className"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClassRegistryEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClassRegistryEntry_obj::__mClass,"__mClass");
};

#endif

Class ClassRegistryEntry_obj::__mClass;

void ClassRegistryEntry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core._ClassManager.ClassRegistryEntry"), hx::TCanCast< ClassRegistryEntry_obj> ,sStaticFields,sMemberFields,
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

void ClassRegistryEntry_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace _ClassManager
