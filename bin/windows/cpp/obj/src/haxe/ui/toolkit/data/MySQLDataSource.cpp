#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_MySQLDataSource
#include <haxe/ui/toolkit/data/MySQLDataSource.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{

Void MySQLDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.MySQLDataSource","new",0x035ebc17,"haxe.ui.toolkit.data.MySQLDataSource.new","haxe/ui/toolkit/data/MySQLDataSource.hx",9,0x526684f9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//MySQLDataSource_obj::~MySQLDataSource_obj() { }

Dynamic MySQLDataSource_obj::__CreateEmpty() { return  new MySQLDataSource_obj; }
hx::ObjectPtr< MySQLDataSource_obj > MySQLDataSource_obj::__new()
{  hx::ObjectPtr< MySQLDataSource_obj > result = new MySQLDataSource_obj();
	result->__construct();
	return result;}

Dynamic MySQLDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MySQLDataSource_obj > result = new MySQLDataSource_obj();
	result->__construct();
	return result;}


MySQLDataSource_obj::MySQLDataSource_obj()
{
}

Dynamic MySQLDataSource_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic MySQLDataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MySQLDataSource_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(MySQLDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MySQLDataSource_obj::__mClass,"__mClass");
};

#endif

Class MySQLDataSource_obj::__mClass;

void MySQLDataSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.data.MySQLDataSource"), hx::TCanCast< MySQLDataSource_obj> ,sStaticFields,sMemberFields,
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

void MySQLDataSource_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
