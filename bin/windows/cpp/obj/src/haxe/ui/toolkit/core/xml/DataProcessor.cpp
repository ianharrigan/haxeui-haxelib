#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#include <haxe/ui/toolkit/core/ClassManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_DataProcessor
#include <haxe/ui/toolkit/core/xml/DataProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataManager
#include <haxe/ui/toolkit/data/DataManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{

Void DataProcessor_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.xml.DataProcessor","new",0xa1fd5936,"haxe.ui.toolkit.core.xml.DataProcessor.new","haxe/ui/toolkit/core/xml/DataProcessor.hx",9,0x80a1f2bb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//DataProcessor_obj::~DataProcessor_obj() { }

Dynamic DataProcessor_obj::__CreateEmpty() { return  new DataProcessor_obj; }
hx::ObjectPtr< DataProcessor_obj > DataProcessor_obj::__new()
{  hx::ObjectPtr< DataProcessor_obj > result = new DataProcessor_obj();
	result->__construct();
	return result;}

Dynamic DataProcessor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataProcessor_obj > result = new DataProcessor_obj();
	result->__construct();
	return result;}

Dynamic DataProcessor_obj::process( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.DataProcessor","process",0xd2184e45,"haxe.ui.toolkit.core.xml.DataProcessor.process","haxe/ui/toolkit/core/xml/DataProcessor.hx",12,0x80a1f2bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(13)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(14)
	::String _g = node->get_nodeName();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	::String nodeName = this->stripNamespace(_g);		HX_STACK_VAR(nodeName,"nodeName");
	HX_STACK_LINE(15)
	::String _g1 = nodeName.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(15)
	nodeName = _g1;
	HX_STACK_LINE(17)
	::String className = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->getDataSourceClassName(nodeName);		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(18)
	if (((className != null()))){
		HX_STACK_LINE(19)
		::haxe::ui::toolkit::data::IDataSource _g2 = ::haxe::ui::toolkit::core::xml::DataProcessor_obj::createDataSource(className,node);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(19)
		result = _g2;
	}
	HX_STACK_LINE(21)
	return result;
}


::haxe::ui::toolkit::data::IDataSource DataProcessor_obj::createDataSource( ::String className,::Xml config){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.DataProcessor","createDataSource",0xece61e2b,"haxe.ui.toolkit.core.xml.DataProcessor.createDataSource","haxe/ui/toolkit/core/xml/DataProcessor.hx",24,0x80a1f2bb)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(25)
	::Class _g = ::Type_obj::resolveClass(className);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::data::IDataSource ds = ::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(ds,"ds");
	HX_STACK_LINE(26)
	if (((ds != null()))){
		HX_STACK_LINE(27)
		ds->create(config);
		HX_STACK_LINE(28)
		::haxe::ui::toolkit::data::DataManager_obj::get_instance()->registerDataSource(ds);
	}
	HX_STACK_LINE(31)
	return ds;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DataProcessor_obj,createDataSource,return )


DataProcessor_obj::DataProcessor_obj()
{
}

Dynamic DataProcessor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createDataSource") ) { return createDataSource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DataProcessor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DataProcessor_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createDataSource"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("process"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataProcessor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataProcessor_obj::__mClass,"__mClass");
};

#endif

Class DataProcessor_obj::__mClass;

void DataProcessor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.xml.DataProcessor"), hx::TCanCast< DataProcessor_obj> ,sStaticFields,sMemberFields,
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

void DataProcessor_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace xml
