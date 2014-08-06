#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{

Void XMLProcessor_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.xml.XMLProcessor","new",0x1bb8b3f1,"haxe.ui.toolkit.core.xml.XMLProcessor.new","haxe/ui/toolkit/core/xml/XMLProcessor.hx",4,0x288993fe)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//XMLProcessor_obj::~XMLProcessor_obj() { }

Dynamic XMLProcessor_obj::__CreateEmpty() { return  new XMLProcessor_obj; }
hx::ObjectPtr< XMLProcessor_obj > XMLProcessor_obj::__new()
{  hx::ObjectPtr< XMLProcessor_obj > result = new XMLProcessor_obj();
	result->__construct();
	return result;}

Dynamic XMLProcessor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XMLProcessor_obj > result = new XMLProcessor_obj();
	result->__construct();
	return result;}

hx::Object *XMLProcessor_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::xml::IXMLProcessor_obj)) return operator ::haxe::ui::toolkit::core::xml::IXMLProcessor_obj *();
	return super::__ToInterface(inType);
}

Dynamic XMLProcessor_obj::process( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.XMLProcessor","process",0x01772280,"haxe.ui.toolkit.core.xml.XMLProcessor.process","haxe/ui/toolkit/core/xml/XMLProcessor.hx",9,0x288993fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(9)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(XMLProcessor_obj,process,return )

::String XMLProcessor_obj::stripNamespace( ::String nodeName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.XMLProcessor","stripNamespace",0x6ea070b2,"haxe.ui.toolkit.core.xml.XMLProcessor.stripNamespace","haxe/ui/toolkit/core/xml/XMLProcessor.hx",12,0x288993fe)
	HX_STACK_THIS(this)
	HX_STACK_ARG(nodeName,"nodeName")
	HX_STACK_LINE(13)
	int n = nodeName.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(14)
	if (((n != (int)-1))){
		HX_STACK_LINE(15)
		::String _g = nodeName.substr((n + (int)1),nodeName.length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		nodeName = _g;
	}
	HX_STACK_LINE(17)
	::String _g1 = nodeName.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(17)
	nodeName = _g1;
	HX_STACK_LINE(19)
	return nodeName;
}


HX_DEFINE_DYNAMIC_FUNC1(XMLProcessor_obj,stripNamespace,return )


XMLProcessor_obj::XMLProcessor_obj()
{
}

Dynamic XMLProcessor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stripNamespace") ) { return stripNamespace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic XMLProcessor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void XMLProcessor_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("process"),
	HX_CSTRING("stripNamespace"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XMLProcessor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLProcessor_obj::__mClass,"__mClass");
};

#endif

Class XMLProcessor_obj::__mClass;

void XMLProcessor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.xml.XMLProcessor"), hx::TCanCast< XMLProcessor_obj> ,sStaticFields,sMemberFields,
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

void XMLProcessor_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace xml
