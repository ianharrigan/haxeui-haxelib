#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#include <haxe/ui/toolkit/core/XMLController.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void XMLController_obj::__construct(::String xmlResourceId)
{
HX_STACK_FRAME("haxe.ui.toolkit.core.XMLController","new",0x89c4b918,"haxe.ui.toolkit.core.XMLController.new","haxe/ui/toolkit/core/XMLController.hx",7,0xe67ef318)
HX_STACK_THIS(this)
HX_STACK_ARG(xmlResourceId,"xmlResourceId")
{
	HX_STACK_LINE(8)
	::String _g = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(xmlResourceId,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(8)
	::Xml _g1 = ::Xml_obj::parse(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(8)
	Dynamic _g2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXml(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(8)
	super::__construct(_g2,null());
}
;
	return null();
}

//XMLController_obj::~XMLController_obj() { }

Dynamic XMLController_obj::__CreateEmpty() { return  new XMLController_obj; }
hx::ObjectPtr< XMLController_obj > XMLController_obj::__new(::String xmlResourceId)
{  hx::ObjectPtr< XMLController_obj > result = new XMLController_obj();
	result->__construct(xmlResourceId);
	return result;}

Dynamic XMLController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< XMLController_obj > result = new XMLController_obj();
	result->__construct(inArgs[0]);
	return result;}


XMLController_obj::XMLController_obj()
{
}

Dynamic XMLController_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic XMLController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void XMLController_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(XMLController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(XMLController_obj::__mClass,"__mClass");
};

#endif

Class XMLController_obj::__mClass;

void XMLController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.XMLController"), hx::TCanCast< XMLController_obj> ,sStaticFields,sMemberFields,
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

void XMLController_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
