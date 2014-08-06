#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_StyleProcessor
#include <haxe/ui/toolkit/core/xml/StyleProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#include <haxe/ui/toolkit/style/StyleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{

Void StyleProcessor_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.xml.StyleProcessor","new",0x1d2b1957,"haxe.ui.toolkit.core.xml.StyleProcessor.new","haxe/ui/toolkit/core/xml/StyleProcessor.hx",9,0x911d3318)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//StyleProcessor_obj::~StyleProcessor_obj() { }

Dynamic StyleProcessor_obj::__CreateEmpty() { return  new StyleProcessor_obj; }
hx::ObjectPtr< StyleProcessor_obj > StyleProcessor_obj::__new()
{  hx::ObjectPtr< StyleProcessor_obj > result = new StyleProcessor_obj();
	result->__construct();
	return result;}

Dynamic StyleProcessor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleProcessor_obj > result = new StyleProcessor_obj();
	result->__construct();
	return result;}

Dynamic StyleProcessor_obj::process( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.StyleProcessor","process",0xd75f32e6,"haxe.ui.toolkit.core.xml.StyleProcessor.process","haxe/ui/toolkit/core/xml/StyleProcessor.hx",12,0x911d3318)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(13)
	::String styleData = node->firstChild()->get_nodeValue();		HX_STACK_VAR(styleData,"styleData");
	HX_STACK_LINE(14)
	::String _g = ::StringTools_obj::trim(styleData);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	styleData = _g;
	HX_STACK_LINE(15)
	::haxe::ui::toolkit::style::Styles styles = ::haxe::ui::toolkit::style::StyleParser_obj::fromString(styleData);		HX_STACK_VAR(styles,"styles");
	HX_STACK_LINE(16)
	::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->addStyles(styles);
	HX_STACK_LINE(17)
	return null();
}



StyleProcessor_obj::StyleProcessor_obj()
{
}

Dynamic StyleProcessor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleProcessor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleProcessor_obj::__GetFields(Array< ::String> &outFields)
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
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleProcessor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleProcessor_obj::__mClass,"__mClass");
};

#endif

Class StyleProcessor_obj::__mClass;

void StyleProcessor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.xml.StyleProcessor"), hx::TCanCast< StyleProcessor_obj> ,sStaticFields,sMemberFields,
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

void StyleProcessor_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace xml
