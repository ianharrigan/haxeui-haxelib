#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_DataSourceRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/DataSourceRegistryEntry.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ClassManager{

Void DataSourceRegistryEntry_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core._ClassManager.DataSourceRegistryEntry","new",0xc8cc577b,"haxe.ui.toolkit.core._ClassManager.DataSourceRegistryEntry.new","haxe/ui/toolkit/core/ClassManager.hx",119,0xd34ec19c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(119)
	super::__construct();
}
;
	return null();
}

//DataSourceRegistryEntry_obj::~DataSourceRegistryEntry_obj() { }

Dynamic DataSourceRegistryEntry_obj::__CreateEmpty() { return  new DataSourceRegistryEntry_obj; }
hx::ObjectPtr< DataSourceRegistryEntry_obj > DataSourceRegistryEntry_obj::__new()
{  hx::ObjectPtr< DataSourceRegistryEntry_obj > result = new DataSourceRegistryEntry_obj();
	result->__construct();
	return result;}

Dynamic DataSourceRegistryEntry_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataSourceRegistryEntry_obj > result = new DataSourceRegistryEntry_obj();
	result->__construct();
	return result;}


DataSourceRegistryEntry_obj::DataSourceRegistryEntry_obj()
{
}

Dynamic DataSourceRegistryEntry_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic DataSourceRegistryEntry_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSourceRegistryEntry_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataSourceRegistryEntry_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataSourceRegistryEntry_obj::__mClass,"__mClass");
};

#endif

Class DataSourceRegistryEntry_obj::__mClass;

void DataSourceRegistryEntry_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core._ClassManager.DataSourceRegistryEntry"), hx::TCanCast< DataSourceRegistryEntry_obj> ,sStaticFields,sMemberFields,
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

void DataSourceRegistryEntry_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace _ClassManager
