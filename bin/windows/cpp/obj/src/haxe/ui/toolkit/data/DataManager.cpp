#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataManager
#include <haxe/ui/toolkit/data/DataManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_Identifier
#include <haxe/ui/toolkit/util/Identifier.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{

Void DataManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","new",0x28b3b133,"haxe.ui.toolkit.data.DataManager.new","haxe/ui/toolkit/data/DataManager.hx",26,0xfa43c75d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(27)
	this->_dataSourceMap = _g;
}
;
	return null();
}

//DataManager_obj::~DataManager_obj() { }

Dynamic DataManager_obj::__CreateEmpty() { return  new DataManager_obj; }
hx::ObjectPtr< DataManager_obj > DataManager_obj::__new()
{  hx::ObjectPtr< DataManager_obj > result = new DataManager_obj();
	result->__construct();
	return result;}

Dynamic DataManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataManager_obj > result = new DataManager_obj();
	result->__construct();
	return result;}

Void DataManager_obj::registerDataSource( ::haxe::ui::toolkit::data::IDataSource dataSource){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","registerDataSource",0xfca11f75,"haxe.ui.toolkit.data.DataManager.registerDataSource","haxe/ui/toolkit/data/DataManager.hx",34,0xfa43c75d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dataSource,"dataSource")
		HX_STACK_LINE(35)
		::String dataSourceId = dataSource->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(dataSourceId,"dataSourceId");
		HX_STACK_LINE(36)
		if (((bool((dataSourceId == null())) || bool((dataSourceId.length == (int)0))))){
			HX_STACK_LINE(37)
			::String _g = ::haxe::ui::toolkit::util::Identifier_obj::guid();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			dataSourceId = _g;
			HX_STACK_LINE(38)
			dataSource->__Field(HX_CSTRING("set_id"),true)(dataSourceId);
		}
		HX_STACK_LINE(40)
		this->_dataSourceMap->set(dataSourceId,dataSource);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DataManager_obj,registerDataSource,(void))

::haxe::ui::toolkit::data::IDataSource DataManager_obj::getRegisteredDataSource( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","getRegisteredDataSource",0x421b26d0,"haxe.ui.toolkit.data.DataManager.getRegisteredDataSource","haxe/ui/toolkit/data/DataManager.hx",44,0xfa43c75d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(44)
	return this->_dataSourceMap->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(DataManager_obj,getRegisteredDataSource,return )

Array< ::haxe::ui::toolkit::data::IDataSource > DataManager_obj::get_dataSources( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","get_dataSources",0x626d6318,"haxe.ui.toolkit.data.DataManager.get_dataSources","haxe/ui/toolkit/data/DataManager.hx",47,0xfa43c75d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	Array< ::haxe::ui::toolkit::data::IDataSource > arr = Array_obj< ::haxe::ui::toolkit::data::IDataSource >::__new();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(49)
	for(::cpp::FastIterator_obj< ::haxe::ui::toolkit::data::IDataSource > *__it = ::cpp::CreateFastIterator< ::haxe::ui::toolkit::data::IDataSource >(this->_dataSourceMap->iterator());  __it->hasNext(); ){
		::haxe::ui::toolkit::data::IDataSource ds = __it->next();
		arr->push(ds);
	}
	HX_STACK_LINE(52)
	return arr;
}


HX_DEFINE_DYNAMIC_FUNC0(DataManager_obj,get_dataSources,return )

::haxe::ui::toolkit::data::DataManager DataManager_obj::_instance;

::haxe::ui::toolkit::data::DataManager DataManager_obj::instance;

::haxe::ui::toolkit::data::DataManager DataManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataManager","get_instance",0x08ffc06b,"haxe.ui.toolkit.data.DataManager.get_instance","haxe/ui/toolkit/data/DataManager.hx",9,0xfa43c75d)
	HX_STACK_LINE(10)
	if (((::haxe::ui::toolkit::data::DataManager_obj::_instance == null()))){
		HX_STACK_LINE(11)
		::haxe::ui::toolkit::data::DataManager _g = ::haxe::ui::toolkit::data::DataManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(11)
		::haxe::ui::toolkit::data::DataManager_obj::_instance = _g;
	}
	HX_STACK_LINE(13)
	return ::haxe::ui::toolkit::data::DataManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DataManager_obj,get_instance,return )


DataManager_obj::DataManager_obj()
{
}

void DataManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataManager);
	HX_MARK_MEMBER_NAME(_dataSourceMap,"_dataSourceMap");
	HX_MARK_MEMBER_NAME(dataSources,"dataSources");
	HX_MARK_END_CLASS();
}

void DataManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataSourceMap,"_dataSourceMap");
	HX_VISIT_MEMBER_NAME(dataSources,"dataSources");
}

Dynamic DataManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dataSources") ) { return inCallProp ? get_dataSources() : dataSources; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dataSourceMap") ) { return _dataSourceMap; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_dataSources") ) { return get_dataSources_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerDataSource") ) { return registerDataSource_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRegisteredDataSource") ) { return getRegisteredDataSource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DataManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::data::DataManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::data::DataManager >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"dataSources") ) { dataSources=inValue.Cast< Array< ::haxe::ui::toolkit::data::IDataSource > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dataSourceMap") ) { _dataSourceMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dataSourceMap"));
	outFields->push(HX_CSTRING("dataSources"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DataManager_obj,_dataSourceMap),HX_CSTRING("_dataSourceMap")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::data::IDataSource >*/ ,(int)offsetof(DataManager_obj,dataSources),HX_CSTRING("dataSources")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_dataSourceMap"),
	HX_CSTRING("dataSources"),
	HX_CSTRING("registerDataSource"),
	HX_CSTRING("getRegisteredDataSource"),
	HX_CSTRING("get_dataSources"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DataManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(DataManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DataManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(DataManager_obj::instance,"instance");
};

#endif

Class DataManager_obj::__mClass;

void DataManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.data.DataManager"), hx::TCanCast< DataManager_obj> ,sStaticFields,sMemberFields,
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

void DataManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
