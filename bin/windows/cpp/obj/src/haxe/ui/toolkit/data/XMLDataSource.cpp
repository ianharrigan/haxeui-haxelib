#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_data_XMLDataSource
#include <haxe/ui/toolkit/data/XMLDataSource.h>
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

Void XMLDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.XMLDataSource","new",0x25bf772c,"haxe.ui.toolkit.data.XMLDataSource.new","haxe/ui/toolkit/data/XMLDataSource.hx",5,0xcdf09384)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//XMLDataSource_obj::~XMLDataSource_obj() { }

Dynamic XMLDataSource_obj::__CreateEmpty() { return  new XMLDataSource_obj; }
hx::ObjectPtr< XMLDataSource_obj > XMLDataSource_obj::__new()
{  hx::ObjectPtr< XMLDataSource_obj > result = new XMLDataSource_obj();
	result->__construct();
	return result;}

Dynamic XMLDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XMLDataSource_obj > result = new XMLDataSource_obj();
	result->__construct();
	return result;}

Void XMLDataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.XMLDataSource","create",0x8bc707b0,"haxe.ui.toolkit.data.XMLDataSource.create","haxe/ui/toolkit/data/XMLDataSource.hx",11,0xcdf09384)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(13)
		if (((config == null()))){
			HX_STACK_LINE(14)
			return null();
		}
		HX_STACK_LINE(17)
		::String _g = config->get(HX_CSTRING("id"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		this->_id = _g;
		HX_STACK_LINE(19)
		::String resource = config->get(HX_CSTRING("resource"));		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(20)
		if (((resource != null()))){
			HX_STACK_LINE(21)
			this->createFromResource(resource,null());
		}
		HX_STACK_LINE(24)
		::String nodeText = null();		HX_STACK_VAR(nodeText,"nodeText");
		HX_STACK_LINE(25)
		::Xml _g1 = config->firstChild();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		if (((_g1 != null()))){
			HX_STACK_LINE(26)
			::String _g2 = config->firstElement()->toString();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(26)
			nodeText = _g2;
		}
		HX_STACK_LINE(29)
		if (((nodeText != null()))){
			HX_STACK_LINE(30)
			this->createFromString(nodeText,null());
		}
	}
return null();
}


Void XMLDataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.XMLDataSource","createFromString",0xa384b5ab,"haxe.ui.toolkit.data.XMLDataSource.createFromString","haxe/ui/toolkit/data/XMLDataSource.hx",38,0xcdf09384)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(38)
		if (((data != null()))){
			HX_STACK_LINE(39)
			::Xml xml = ::Xml_obj::parse(data);		HX_STACK_VAR(xml,"xml");
			HX_STACK_LINE(40)
			if (((xml != null()))){
				HX_STACK_LINE(41)
				Dynamic it = xml->firstElement()->elements();		HX_STACK_VAR(it,"it");
				HX_STACK_LINE(42)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(it);  __it->hasNext(); ){
					::Xml e = __it->next();
					{
						struct _Function_4_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/XMLDataSource.hx",43,0xcdf09384)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(43)
						Dynamic o = _Function_4_1::Block();		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(44)
						for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(e->attributes());  __it->hasNext(); ){
							::String attrName = __it->next();
							{
								HX_STACK_LINE(45)
								Dynamic value = e->get(attrName);		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(45)
								if (((o != null()))){
									HX_STACK_LINE(45)
									o->__SetField(attrName,value,false);
								}
							}
;
						}
						HX_STACK_LINE(47)
						if (((::Reflect_obj::fields(o)->length != (int)0))){
							HX_STACK_LINE(48)
							this->add(o);
						}
					}
;
				}
			}
		}
	}
return null();
}



XMLDataSource_obj::XMLDataSource_obj()
{
}

Dynamic XMLDataSource_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic XMLDataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void XMLDataSource_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(XMLDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLDataSource_obj::__mClass,"__mClass");
};

#endif

Class XMLDataSource_obj::__mClass;

void XMLDataSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.data.XMLDataSource"), hx::TCanCast< XMLDataSource_obj> ,sStaticFields,sMemberFields,
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

void XMLDataSource_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
