#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_XmlUtil
#include <haxe/ui/toolkit/util/XmlUtil.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void XmlUtil_obj::__construct()
{
	return null();
}

//XmlUtil_obj::~XmlUtil_obj() { }

Dynamic XmlUtil_obj::__CreateEmpty() { return  new XmlUtil_obj; }
hx::ObjectPtr< XmlUtil_obj > XmlUtil_obj::__new()
{  hx::ObjectPtr< XmlUtil_obj > result = new XmlUtil_obj();
	result->__construct();
	return result;}

Dynamic XmlUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XmlUtil_obj > result = new XmlUtil_obj();
	result->__construct();
	return result;}

Array< ::String > XmlUtil_obj::getPathValues( ::Xml xml,::String path){
	HX_STACK_FRAME("haxe.ui.toolkit.util.XmlUtil","getPathValues",0x710a2d9e,"haxe.ui.toolkit.util.XmlUtil.getPathValues","haxe/ui/toolkit/util/XmlUtil.hx",4,0xfd0d912f)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(5)
	Array< ::String > values = Array_obj< ::String >::__new();		HX_STACK_VAR(values,"values");
	HX_STACK_LINE(6)
	Array< ::String > parts = path.split(HX_CSTRING("/"));		HX_STACK_VAR(parts,"parts");
	HX_STACK_LINE(7)
	{
		HX_STACK_LINE(7)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(7)
		while((true)){
			HX_STACK_LINE(7)
			if ((!(((_g < parts->length))))){
				HX_STACK_LINE(7)
				break;
			}
			HX_STACK_LINE(7)
			::String p = parts->__get(_g);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(7)
			++(_g);
			HX_STACK_LINE(8)
			if (((p.length == (int)0))){
				HX_STACK_LINE(9)
				parts->remove(p);
			}
		}
	}
	HX_STACK_LINE(13)
	::String matchToFind = parts->__get((int)0);		HX_STACK_VAR(matchToFind,"matchToFind");
	HX_STACK_LINE(14)
	parts->remove(matchToFind);
	HX_STACK_LINE(15)
	::String _g = xml->get_nodeName();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	if (((_g == matchToFind))){
		HX_STACK_LINE(16)
		if (((parts->length > (int)1))){
			HX_STACK_LINE(17)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(xml->elements());  __it->hasNext(); ){
				::Xml child = __it->next();
				{
					HX_STACK_LINE(18)
					::String _g1 = parts->join(HX_CSTRING("/"));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(18)
					Array< ::String > _g2 = ::haxe::ui::toolkit::util::XmlUtil_obj::getPathValues(child,_g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(18)
					Array< ::String > _g3 = values->concat(_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(18)
					values = _g3;
				}
;
			}
		}
		else{
			HX_STACK_LINE(21)
			::String _g4 = parts->pop();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(21)
			matchToFind = _g4;
			HX_STACK_LINE(22)
			if ((::StringTools_obj::startsWith(matchToFind,HX_CSTRING("@")))){
				HX_STACK_LINE(23)
				::String attrName = matchToFind.substr((int)1,matchToFind.length);		HX_STACK_VAR(attrName,"attrName");
				HX_STACK_LINE(24)
				::String attrValue = xml->get(attrName);		HX_STACK_VAR(attrValue,"attrValue");
				HX_STACK_LINE(25)
				if (((attrValue != null()))){
					HX_STACK_LINE(26)
					values->push(attrValue);
				}
			}
			else{
				HX_STACK_LINE(28)
				if (((matchToFind == HX_CSTRING("text()")))){
					HX_STACK_LINE(29)
					::String nodeValue = xml->firstChild()->get_nodeValue();		HX_STACK_VAR(nodeValue,"nodeValue");
					HX_STACK_LINE(30)
					if (((nodeValue != null()))){
						HX_STACK_LINE(31)
						values->push(nodeValue);
					}
				}
			}
		}
	}
	HX_STACK_LINE(36)
	return values;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(XmlUtil_obj,getPathValues,return )


XmlUtil_obj::XmlUtil_obj()
{
}

Dynamic XmlUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"getPathValues") ) { return getPathValues_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic XmlUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void XmlUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getPathValues"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(XmlUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XmlUtil_obj::__mClass,"__mClass");
};

#endif

Class XmlUtil_obj::__mClass;

void XmlUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.util.XmlUtil"), hx::TCanCast< XmlUtil_obj> ,sStaticFields,sMemberFields,
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

void XmlUtil_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
