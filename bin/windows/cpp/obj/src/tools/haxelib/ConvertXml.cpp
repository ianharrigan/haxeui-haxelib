#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_tools_haxelib_ConvertXml
#include <tools/haxelib/ConvertXml.h>
#endif
namespace tools{
namespace haxelib{

Void ConvertXml_obj::__construct()
{
	return null();
}

//ConvertXml_obj::~ConvertXml_obj() { }

Dynamic ConvertXml_obj::__CreateEmpty() { return  new ConvertXml_obj; }
hx::ObjectPtr< ConvertXml_obj > ConvertXml_obj::__new()
{  hx::ObjectPtr< ConvertXml_obj > result = new ConvertXml_obj();
	result->__construct();
	return result;}

Dynamic ConvertXml_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConvertXml_obj > result = new ConvertXml_obj();
	result->__construct();
	return result;}

Dynamic ConvertXml_obj::convert( ::String inXml){
	HX_STACK_FRAME("tools.haxelib.ConvertXml","convert",0xd40af6eb,"tools.haxelib.ConvertXml.convert","tools/haxelib/ConvertXml.hx",6,0x064da2d6)
	HX_STACK_ARG(inXml,"inXml")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/ConvertXml.hx",8,0x064da2d6)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , HX_CSTRING(""),false);
				__result->Add(HX_CSTRING("url") , HX_CSTRING(""),false);
				__result->Add(HX_CSTRING("license") , HX_CSTRING(""),false);
				__result->Add(HX_CSTRING("tags") , Array_obj< ::String >::__new(),false);
				__result->Add(HX_CSTRING("description") , HX_CSTRING(""),false);
				__result->Add(HX_CSTRING("version") , HX_CSTRING("0.0.1"),false);
				__result->Add(HX_CSTRING("releasenote") , HX_CSTRING(""),false);
				__result->Add(HX_CSTRING("contributors") , Array_obj< ::String >::__new(),false);
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/ConvertXml.hx",17,0x064da2d6)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				__result->Add(HX_CSTRING("dependencies") , _Function_2_1::Block(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(8)
	Dynamic json = _Function_1_1::Block();		HX_STACK_VAR(json,"json");
	HX_STACK_LINE(21)
	::Xml xml = ::Xml_obj::parse(inXml);		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(22)
	::Xml project = xml->firstChild();		HX_STACK_VAR(project,"project");
	HX_STACK_LINE(23)
	::String _g = project->get(HX_CSTRING("name"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	json->__FieldRef(HX_CSTRING("name")) = _g;
	HX_STACK_LINE(24)
	::String _g1 = project->get(HX_CSTRING("license"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	json->__FieldRef(HX_CSTRING("license")) = _g1;
	HX_STACK_LINE(25)
	::String _g2 = project->get(HX_CSTRING("url"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(25)
	json->__FieldRef(HX_CSTRING("url")) = _g2;
	HX_STACK_LINE(26)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(project->iterator());  __it->hasNext(); ){
		::Xml node = __it->next();
		::XmlType _switch_1 = (node->nodeType);
		if (  ( _switch_1==::Xml_obj::Element)){
			HX_STACK_LINE(31)
			::String _g3 = node->get_nodeName();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(31)
			::String _switch_2 = (_g3);
			if (  ( _switch_2==HX_CSTRING("tag"))){
				HX_STACK_LINE(34)
				::String _g31 = node->get(HX_CSTRING("v"));		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(34)
				json->__Field(HX_CSTRING("tags"),true)->__Field(HX_CSTRING("push"),true)(_g31);
			}
			else if (  ( _switch_2==HX_CSTRING("user"))){
				HX_STACK_LINE(36)
				::String _g4 = node->get(HX_CSTRING("name"));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(36)
				json->__Field(HX_CSTRING("contributors"),true)->__Field(HX_CSTRING("push"),true)(_g4);
			}
			else if (  ( _switch_2==HX_CSTRING("version"))){
				HX_STACK_LINE(38)
				::String _g5 = node->get(HX_CSTRING("name"));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(38)
				json->__FieldRef(HX_CSTRING("version")) = _g5;
				HX_STACK_LINE(39)
				::String _g6 = node->firstChild()->toString();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(39)
				json->__FieldRef(HX_CSTRING("releasenote")) = _g6;
			}
			else if (  ( _switch_2==HX_CSTRING("description"))){
				HX_STACK_LINE(41)
				::String _g7 = node->firstChild()->toString();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(41)
				json->__FieldRef(HX_CSTRING("description")) = _g7;
			}
			else if (  ( _switch_2==HX_CSTRING("depends"))){
				HX_STACK_LINE(43)
				::String name = node->get(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
				HX_STACK_LINE(44)
				::String version = node->get(HX_CSTRING("version"));		HX_STACK_VAR(version,"version");
				HX_STACK_LINE(45)
				if (((version == null()))){
					HX_STACK_LINE(45)
					version = HX_CSTRING("");
				}
				HX_STACK_LINE(46)
				{
					HX_STACK_LINE(46)
					Dynamic o = json->__Field(HX_CSTRING("dependencies"),true);		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(46)
					if (((o != null()))){
						HX_STACK_LINE(46)
						o->__SetField(name,version,false);
					}
				}
			}
			else  {
			}
;
;
		}
		else  {
		}
;
;
	}
	HX_STACK_LINE(53)
	return json;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ConvertXml_obj,convert,return )

::String ConvertXml_obj::prettyPrint( Dynamic json,::String __o_indent){
::String indent = __o_indent.Default(HX_CSTRING(""));
	HX_STACK_FRAME("tools.haxelib.ConvertXml","prettyPrint",0x3fb0868f,"tools.haxelib.ConvertXml.prettyPrint","tools/haxelib/ConvertXml.hx",56,0x064da2d6)
	HX_STACK_ARG(json,"json")
	HX_STACK_ARG(indent,"indent")
{
		HX_STACK_LINE(57)
		::StringBuf sb = ::StringBuf_obj::__new();		HX_STACK_VAR(sb,"sb");
		HX_STACK_LINE(58)
		sb->add(HX_CSTRING("{\n"));
		HX_STACK_LINE(60)
		bool firstRun = true;		HX_STACK_VAR(firstRun,"firstRun");
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(61)
			Array< ::String > _g1 = ::Reflect_obj::fields(json);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(61)
			while((true)){
				HX_STACK_LINE(61)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(61)
					break;
				}
				HX_STACK_LINE(61)
				::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(61)
				++(_g);
				HX_STACK_LINE(63)
				if ((!(firstRun))){
					HX_STACK_LINE(63)
					sb->add(HX_CSTRING(",\n"));
				}
				HX_STACK_LINE(64)
				firstRun = false;
				HX_STACK_LINE(66)
				::String value;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(66)
				::String _switch_3 = (f);
				if (  ( _switch_3==HX_CSTRING("dependencies"))){
					HX_STACK_LINE(68)
					Dynamic d = ::Reflect_obj::field(json,f);		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(69)
					value = ::tools::haxelib::ConvertXml_obj::prettyPrint(d,(indent + HX_CSTRING("  ")));
				}
				else  {
					HX_STACK_LINE(71)
					Dynamic value1 = ::Reflect_obj::field(json,f);		HX_STACK_VAR(value1,"value1");
					HX_STACK_LINE(71)
					value = ::haxe::format::JsonPrinter_obj::print(value1,null(),null());
				}
;
;
				HX_STACK_LINE(73)
				sb->add((indent + ((((HX_CSTRING("  \"") + f) + HX_CSTRING("\": ")) + value))));
			}
		}
		HX_STACK_LINE(76)
		sb->add(((HX_CSTRING("\n") + indent) + HX_CSTRING("}")));
		HX_STACK_LINE(77)
		return sb->b->join(HX_CSTRING(""));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ConvertXml_obj,prettyPrint,return )


ConvertXml_obj::ConvertXml_obj()
{
}

Dynamic ConvertXml_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"convert") ) { return convert_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"prettyPrint") ) { return prettyPrint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConvertXml_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ConvertXml_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("convert"),
	HX_CSTRING("prettyPrint"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConvertXml_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConvertXml_obj::__mClass,"__mClass");
};

#endif

Class ConvertXml_obj::__mClass;

void ConvertXml_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.ConvertXml"), hx::TCanCast< ConvertXml_obj> ,sStaticFields,sMemberFields,
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

void ConvertXml_obj::__boot()
{
}

} // end namespace tools
} // end namespace haxelib
