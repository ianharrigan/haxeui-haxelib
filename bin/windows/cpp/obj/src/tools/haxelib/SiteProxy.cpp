#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
#ifndef INCLUDED_tools_haxelib_Remoting_SiteApi
#include <tools/haxelib/Remoting_SiteApi.h>
#endif
#ifndef INCLUDED_tools_haxelib_SiteProxy
#include <tools/haxelib/SiteProxy.h>
#endif
namespace tools{
namespace haxelib{

Void SiteProxy_obj::__construct(::haxe::remoting::Connection c)
{
HX_STACK_FRAME("tools.haxelib.SiteProxy","new",0x7ed8bf57,"tools.haxelib.SiteProxy.new","tools/haxelib/Main.hx",49,0xb1b3c261)
HX_STACK_THIS(this)
HX_STACK_ARG(c,"c")
{
	HX_STACK_LINE(49)
	super::__construct(c);
}
;
	return null();
}

//SiteProxy_obj::~SiteProxy_obj() { }

Dynamic SiteProxy_obj::__CreateEmpty() { return  new SiteProxy_obj; }
hx::ObjectPtr< SiteProxy_obj > SiteProxy_obj::__new(::haxe::remoting::Connection c)
{  hx::ObjectPtr< SiteProxy_obj > result = new SiteProxy_obj();
	result->__construct(c);
	return result;}

Dynamic SiteProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SiteProxy_obj > result = new SiteProxy_obj();
	result->__construct(inArgs[0]);
	return result;}


SiteProxy_obj::SiteProxy_obj()
{
}

Dynamic SiteProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SiteProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SiteProxy_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SiteProxy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SiteProxy_obj::__mClass,"__mClass");
};

#endif

Class SiteProxy_obj::__mClass;

void SiteProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.SiteProxy"), hx::TCanCast< SiteProxy_obj> ,sStaticFields,sMemberFields,
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

void SiteProxy_obj::__boot()
{
}

} // end namespace tools
} // end namespace haxelib
