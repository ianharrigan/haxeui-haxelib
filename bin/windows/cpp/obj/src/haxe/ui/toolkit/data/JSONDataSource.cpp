#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_JSONDataSource
#include <haxe/ui/toolkit/data/JSONDataSource.h>
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

Void JSONDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.JSONDataSource","new",0xa178a7a1,"haxe.ui.toolkit.data.JSONDataSource.new","haxe/ui/toolkit/data/JSONDataSource.hx",8,0x9c8b6d2f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//JSONDataSource_obj::~JSONDataSource_obj() { }

Dynamic JSONDataSource_obj::__CreateEmpty() { return  new JSONDataSource_obj; }
hx::ObjectPtr< JSONDataSource_obj > JSONDataSource_obj::__new()
{  hx::ObjectPtr< JSONDataSource_obj > result = new JSONDataSource_obj();
	result->__construct();
	return result;}

Dynamic JSONDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JSONDataSource_obj > result = new JSONDataSource_obj();
	result->__construct();
	return result;}

Void JSONDataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.JSONDataSource","create",0x7141ce5b,"haxe.ui.toolkit.data.JSONDataSource.create","haxe/ui/toolkit/data/JSONDataSource.hx",14,0x9c8b6d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(16)
		if (((config == null()))){
			HX_STACK_LINE(17)
			return null();
		}
		HX_STACK_LINE(20)
		::String _g = config->get(HX_CSTRING("id"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		this->_id = _g;
		HX_STACK_LINE(22)
		::String resource = config->get(HX_CSTRING("resource"));		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(23)
		if (((resource != null()))){
			HX_STACK_LINE(24)
			this->createFromResource(resource,null());
		}
		HX_STACK_LINE(27)
		::String nodeText = null();		HX_STACK_VAR(nodeText,"nodeText");
		HX_STACK_LINE(28)
		::Xml _g1 = config->firstChild();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		if (((_g1 != null()))){
			HX_STACK_LINE(29)
			::String _g2 = config->firstChild()->get_nodeValue();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(29)
			nodeText = _g2;
		}
		HX_STACK_LINE(32)
		if (((nodeText != null()))){
			HX_STACK_LINE(33)
			this->createFromString(nodeText,null());
		}
	}
return null();
}


Void JSONDataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.JSONDataSource","createFromString",0x0104a016,"haxe.ui.toolkit.data.JSONDataSource.createFromString","haxe/ui/toolkit/data/JSONDataSource.hx",41,0x9c8b6d2f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(41)
		if (((data != null()))){
			HX_STACK_LINE(42)
			Dynamic jsonObject = ::haxe::format::JsonParser_obj::__new(data)->parseRec();		HX_STACK_VAR(jsonObject,"jsonObject");
			HX_STACK_LINE(43)
			Dynamic arr = null();		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(44)
			if ((::Std_obj::is(jsonObject,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(45)
				Dynamic _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				_g = hx::TCastToArray(jsonObject);
				HX_STACK_LINE(45)
				arr = _g;
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(46)
					while((true)){
						HX_STACK_LINE(46)
						if ((!(((_g1 < arr->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(46)
							break;
						}
						HX_STACK_LINE(46)
						Dynamic o = arr->__GetItem(_g1);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(46)
						++(_g1);
						HX_STACK_LINE(47)
						this->add(o);
					}
				}
			}
		}
	}
return null();
}



JSONDataSource_obj::JSONDataSource_obj()
{
}

Dynamic JSONDataSource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromString") ) { return createFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JSONDataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void JSONDataSource_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("createFromString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JSONDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JSONDataSource_obj::__mClass,"__mClass");
};

#endif

Class JSONDataSource_obj::__mClass;

void JSONDataSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.data.JSONDataSource"), hx::TCanCast< JSONDataSource_obj> ,sStaticFields,sMemberFields,
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

void JSONDataSource_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
