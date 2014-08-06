#include <hxcpp.h>

#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
#ifndef INCLUDED_haxe_remoting_HttpConnection
#include <haxe/remoting/HttpConnection.h>
#endif
#ifndef INCLUDED_tools_haxelib_MyHttpConnection
#include <tools/haxelib/MyHttpConnection.h>
#endif
namespace tools{
namespace haxelib{

Void MyHttpConnection_obj::__construct(::String url,Array< ::String > path)
{
HX_STACK_FRAME("tools.haxelib.MyHttpConnection","new",0x31464a86,"tools.haxelib.MyHttpConnection.new","tools/haxelib/Main.hx",138,0xb1b3c261)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(138)
	super::__construct(url,path);
}
;
	return null();
}

//MyHttpConnection_obj::~MyHttpConnection_obj() { }

Dynamic MyHttpConnection_obj::__CreateEmpty() { return  new MyHttpConnection_obj; }
hx::ObjectPtr< MyHttpConnection_obj > MyHttpConnection_obj::__new(::String url,Array< ::String > path)
{  hx::ObjectPtr< MyHttpConnection_obj > result = new MyHttpConnection_obj();
	result->__construct(url,path);
	return result;}

Dynamic MyHttpConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MyHttpConnection_obj > result = new MyHttpConnection_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::haxe::remoting::HttpConnection MyHttpConnection_obj::urlConnect( ::String url){
	HX_STACK_FRAME("tools.haxelib.MyHttpConnection","urlConnect",0x0ed0cad5,"tools.haxelib.MyHttpConnection.urlConnect","tools/haxelib/Main.hx",140,0xb1b3c261)
	HX_STACK_ARG(url,"url")
	HX_STACK_LINE(140)
	return ::haxe::remoting::HttpConnection_obj::__new(url,Array_obj< ::String >::__new());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MyHttpConnection_obj,urlConnect,return )


MyHttpConnection_obj::MyHttpConnection_obj()
{
}

Dynamic MyHttpConnection_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"urlConnect") ) { return urlConnect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MyHttpConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void MyHttpConnection_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("urlConnect"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MyHttpConnection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MyHttpConnection_obj::__mClass,"__mClass");
};

#endif

Class MyHttpConnection_obj::__mClass;

void MyHttpConnection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.MyHttpConnection"), hx::TCanCast< MyHttpConnection_obj> ,sStaticFields,sMemberFields,
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

void MyHttpConnection_obj::__boot()
{
}

} // end namespace tools
} // end namespace haxelib
