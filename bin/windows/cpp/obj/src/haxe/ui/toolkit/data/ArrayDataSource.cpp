#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
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

Void ArrayDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","new",0xc4ca55ee,"haxe.ui.toolkit.data.ArrayDataSource.new","haxe/ui/toolkit/data/ArrayDataSource.hx",5,0x88133302)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(7)
	this->pos = (int)0;
	HX_STACK_LINE(10)
	super::__construct();
	HX_STACK_LINE(11)
	Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(11)
	this->array = _g;
}
;
	return null();
}

//ArrayDataSource_obj::~ArrayDataSource_obj() { }

Dynamic ArrayDataSource_obj::__CreateEmpty() { return  new ArrayDataSource_obj; }
hx::ObjectPtr< ArrayDataSource_obj > ArrayDataSource_obj::__new()
{  hx::ObjectPtr< ArrayDataSource_obj > result = new ArrayDataSource_obj();
	result->__construct();
	return result;}

Dynamic ArrayDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayDataSource_obj > result = new ArrayDataSource_obj();
	result->__construct();
	return result;}

Void ArrayDataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","create",0xac964e2e,"haxe.ui.toolkit.data.ArrayDataSource.create","haxe/ui/toolkit/data/ArrayDataSource.hx",17,0x88133302)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(18)
		this->super::create(config);
		HX_STACK_LINE(20)
		if (((config == null()))){
			HX_STACK_LINE(21)
			return null();
		}
		HX_STACK_LINE(24)
		::String _g = config->get(HX_CSTRING("id"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		this->_id = _g;
		HX_STACK_LINE(26)
		::String delimeter = config->get(HX_CSTRING("delimeter"));		HX_STACK_VAR(delimeter,"delimeter");
		HX_STACK_LINE(27)
		if (((delimeter == null()))){
			HX_STACK_LINE(28)
			delimeter = HX_CSTRING(",");
		}
		HX_STACK_LINE(30)
		::String _g1 = ::StringTools_obj::replace(delimeter,HX_CSTRING("\\n"),HX_CSTRING("\n"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		delimeter = _g1;
		HX_STACK_LINE(32)
		::String resource = config->get(HX_CSTRING("resource"));		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(33)
		if (((resource != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ::String &delimeter){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/ArrayDataSource.hx",34,0x88133302)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("delimeter") , delimeter,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(34)
			this->createFromResource(resource,_Function_2_1::Block(delimeter));
		}
		HX_STACK_LINE(37)
		::String nodeText = null();		HX_STACK_VAR(nodeText,"nodeText");
		HX_STACK_LINE(38)
		::Xml _g2 = config->firstChild();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(38)
		if (((_g2 != null()))){
			HX_STACK_LINE(39)
			::String _g3 = config->firstChild()->get_nodeValue();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(39)
			nodeText = _g3;
		}
		HX_STACK_LINE(42)
		if (((nodeText != null()))){
			struct _Function_2_1{
				inline static Dynamic Block( ::String &delimeter){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/ArrayDataSource.hx",43,0x88133302)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("delimeter") , delimeter,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(43)
			this->createFromString(nodeText,_Function_2_1::Block(delimeter));
		}
	}
return null();
}


bool ArrayDataSource_obj::_moveFirst( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_moveFirst",0x5f962b52,"haxe.ui.toolkit.data.ArrayDataSource._moveFirst","haxe/ui/toolkit/data/ArrayDataSource.hx",47,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	this->pos = (int)0;
	HX_STACK_LINE(49)
	if (((bool((this->array == null())) || bool((this->array->__Field(HX_CSTRING("length"),true) == (int)0))))){
		HX_STACK_LINE(50)
		return false;
	}
	HX_STACK_LINE(52)
	return true;
}


bool ArrayDataSource_obj::_moveNext( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_moveNext",0x6be00c11,"haxe.ui.toolkit.data.ArrayDataSource._moveNext","haxe/ui/toolkit/data/ArrayDataSource.hx",55,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	if (((bool((this->array == null())) || bool((this->array->__Field(HX_CSTRING("length"),true) == (int)0))))){
		HX_STACK_LINE(57)
		return false;
	}
	HX_STACK_LINE(59)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(60)
	if ((((this->pos + (int)1) < this->array->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(61)
		hx::AddEq(this->pos,(int)1);
		HX_STACK_LINE(62)
		b = true;
	}
	HX_STACK_LINE(65)
	return b;
}


Dynamic ArrayDataSource_obj::_get( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_get",0x62581c49,"haxe.ui.toolkit.data.ArrayDataSource._get","haxe/ui/toolkit/data/ArrayDataSource.hx",68,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(69)
	if (((bool((this->array == null())) || bool((this->array->__Field(HX_CSTRING("length"),true) == (int)0))))){
		HX_STACK_LINE(70)
		return null();
	}
	HX_STACK_LINE(72)
	return this->array->__GetItem(this->pos);
}


bool ArrayDataSource_obj::_add( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_add",0x62538dd4,"haxe.ui.toolkit.data.ArrayDataSource._add","haxe/ui/toolkit/data/ArrayDataSource.hx",75,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(76)
	this->array->__Field(HX_CSTRING("push"),true)(o);
	HX_STACK_LINE(77)
	return true;
}


bool ArrayDataSource_obj::_remove( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","_remove",0xb8831271,"haxe.ui.toolkit.data.ArrayDataSource._remove","haxe/ui/toolkit/data/ArrayDataSource.hx",80,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	Dynamic _g = this->get();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(81)
	return this->array->__Field(HX_CSTRING("remove"),true)(_g);
}


int ArrayDataSource_obj::size( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","size",0x6f91f773,"haxe.ui.toolkit.data.ArrayDataSource.size","haxe/ui/toolkit/data/ArrayDataSource.hx",85,0x88133302)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return this->array->__Field(HX_CSTRING("length"),true);
}


Void ArrayDataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.ArrayDataSource","createFromString",0xbbe045a9,"haxe.ui.toolkit.data.ArrayDataSource.createFromString","haxe/ui/toolkit/data/ArrayDataSource.hx",92,0x88133302)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(92)
		if (((data != null()))){
			HX_STACK_LINE(93)
			if (((config == null()))){
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/ArrayDataSource.hx",94,0x88133302)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(94)
				config = _Function_3_1::Block();
			}
			HX_STACK_LINE(96)
			if (((config->__Field(HX_CSTRING("delimeter"),true) != null()))){
				HX_STACK_LINE(96)
				config->__FieldRef(HX_CSTRING("delimeter")) = config->__Field(HX_CSTRING("delimeter"),true);
			}
			else{
				HX_STACK_LINE(96)
				config->__FieldRef(HX_CSTRING("delimeter")) = HX_CSTRING(",");
			}
			HX_STACK_LINE(98)
			Array< ::String > arr = data.split(config->__Field(HX_CSTRING("delimeter"),true));		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(99)
			if (((arr != null()))){
				HX_STACK_LINE(100)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(100)
				while((true)){
					HX_STACK_LINE(100)
					if ((!(((_g < arr->length))))){
						HX_STACK_LINE(100)
						break;
					}
					HX_STACK_LINE(100)
					::String s = arr->__get(_g);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(100)
					++(_g);
					HX_STACK_LINE(101)
					::String _g1 = ::StringTools_obj::trim(s);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(101)
					s = _g1;
					HX_STACK_LINE(102)
					if (((s.length > (int)0))){
						struct _Function_5_1{
							inline static Dynamic Block( ::String &s){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/ArrayDataSource.hx",103,0x88133302)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("text") , s,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(103)
						Dynamic o = _Function_5_1::Block(s);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(104)
						this->add(o);
					}
				}
			}
		}
	}
return null();
}



ArrayDataSource_obj::ArrayDataSource_obj()
{
}

void ArrayDataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayDataSource);
	HX_MARK_MEMBER_NAME(array,"array");
	HX_MARK_MEMBER_NAME(pos,"pos");
	::haxe::ui::toolkit::data::DataSource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ArrayDataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(array,"array");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	::haxe::ui::toolkit::data::DataSource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ArrayDataSource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_get") ) { return _get_dyn(); }
		if (HX_FIELD_EQ(inName,"_add") ) { return _add_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { return array; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_moveNext") ) { return _moveNext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_moveFirst") ) { return _moveFirst_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromString") ) { return createFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayDataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { array=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayDataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("array"));
	outFields->push(HX_CSTRING("pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ArrayDataSource_obj,array),HX_CSTRING("array")},
	{hx::fsInt,(int)offsetof(ArrayDataSource_obj,pos),HX_CSTRING("pos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("array"),
	HX_CSTRING("pos"),
	HX_CSTRING("create"),
	HX_CSTRING("_moveFirst"),
	HX_CSTRING("_moveNext"),
	HX_CSTRING("_get"),
	HX_CSTRING("_add"),
	HX_CSTRING("_remove"),
	HX_CSTRING("size"),
	HX_CSTRING("createFromString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayDataSource_obj::__mClass,"__mClass");
};

#endif

Class ArrayDataSource_obj::__mClass;

void ArrayDataSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.data.ArrayDataSource"), hx::TCanCast< ArrayDataSource_obj> ,sStaticFields,sMemberFields,
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

void ArrayDataSource_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
