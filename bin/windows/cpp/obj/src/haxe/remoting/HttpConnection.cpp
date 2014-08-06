#include <hxcpp.h>

#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
#ifndef INCLUDED_haxe_remoting_HttpConnection
#include <haxe/remoting/HttpConnection.h>
#endif
namespace haxe{
namespace remoting{

Void HttpConnection_obj::__construct(::String url,Array< ::String > path)
{
HX_STACK_FRAME("haxe.remoting.HttpConnection","new",0x64dab9db,"haxe.remoting.HttpConnection.new","C:\\Servers\\Haxe\\haxe\\std/haxe/remoting/HttpConnection.hx",31,0xf7f52958)
HX_STACK_THIS(this)
HX_STACK_ARG(url,"url")
HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(32)
	this->__url = url;
	HX_STACK_LINE(33)
	this->__path = path;
}
;
	return null();
}

//HttpConnection_obj::~HttpConnection_obj() { }

Dynamic HttpConnection_obj::__CreateEmpty() { return  new HttpConnection_obj; }
hx::ObjectPtr< HttpConnection_obj > HttpConnection_obj::__new(::String url,Array< ::String > path)
{  hx::ObjectPtr< HttpConnection_obj > result = new HttpConnection_obj();
	result->__construct(url,path);
	return result;}

Dynamic HttpConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HttpConnection_obj > result = new HttpConnection_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *HttpConnection_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::remoting::Connection_obj)) return operator ::haxe::remoting::Connection_obj *();
	return super::__ToInterface(inType);
}

::haxe::remoting::Connection HttpConnection_obj::resolve( ::String name){
	HX_STACK_FRAME("haxe.remoting.HttpConnection","resolve",0xb658d5e7,"haxe.remoting.HttpConnection.resolve","C:\\Servers\\Haxe\\haxe\\std/haxe/remoting/HttpConnection.hx",36,0xf7f52958)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(37)
	Array< ::String > _g = this->__path->copy();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	::haxe::remoting::HttpConnection c = ::haxe::remoting::HttpConnection_obj::__new(this->__url,_g);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(38)
	c->__path->push(name);
	HX_STACK_LINE(39)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC1(HttpConnection_obj,resolve,return )

Dynamic HttpConnection_obj::call( Dynamic params){
	HX_STACK_FRAME("haxe.remoting.HttpConnection","call",0xd33f7ac3,"haxe.remoting.HttpConnection.call","C:\\Servers\\Haxe\\haxe\\std/haxe/remoting/HttpConnection.hx",42,0xf7f52958)
	HX_STACK_THIS(this)
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(43)
	Array< ::String > data = Array_obj< ::String >::__new().Add(null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(44)
	::haxe::Http h = ::haxe::Http_obj::__new(this->__url);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(52)
	h->cnxTimeout = ::haxe::remoting::HttpConnection_obj::TIMEOUT;
	HX_STACK_LINE(54)
	::haxe::Serializer s = ::haxe::Serializer_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(55)
	s->serialize(this->__path);
	HX_STACK_LINE(56)
	s->serialize(params);
	HX_STACK_LINE(57)
	h->setHeader(HX_CSTRING("X-Haxe-Remoting"),HX_CSTRING("1"));
	HX_STACK_LINE(58)
	::String _g = s->toString();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	h->setParameter(HX_CSTRING("__x"),_g);

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::String >,data)
	Void run(::String d){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\Servers\\Haxe\\haxe\\std/haxe/remoting/HttpConnection.hx",59,0xf7f52958)
		HX_STACK_ARG(d,"d")
		{
			HX_STACK_LINE(59)
			data[(int)0] = d;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(59)
	h->onData =  Dynamic(new _Function_1_1(data));

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	Void run(::String e){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","C:\\Servers\\Haxe\\haxe\\std/haxe/remoting/HttpConnection.hx",60,0xf7f52958)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(60)
			HX_STACK_DO_THROW(e);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(60)
	h->onError =  Dynamic(new _Function_1_2());
	HX_STACK_LINE(61)
	h->request(true);
	HX_STACK_LINE(62)
	::String _g1 = data->__get((int)0).substr((int)0,(int)3);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(62)
	if (((_g1 != HX_CSTRING("hxr")))){
		HX_STACK_LINE(63)
		HX_STACK_DO_THROW(((HX_CSTRING("Invalid response : '") + data->__get((int)0)) + HX_CSTRING("'")));
	}
	HX_STACK_LINE(64)
	::String _g2 = data->__get((int)0).substr((int)3,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(64)
	data[(int)0] = _g2;
	HX_STACK_LINE(65)
	return ::haxe::Unserializer_obj::__new(data->__get((int)0))->unserialize();
}


HX_DEFINE_DYNAMIC_FUNC1(HttpConnection_obj,call,return )

Float HttpConnection_obj::TIMEOUT;


HttpConnection_obj::HttpConnection_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void HttpConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HttpConnection);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(__url,"__url");
	HX_MARK_MEMBER_NAME(__path,"__path");
	HX_MARK_END_CLASS();
}

void HttpConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(__url,"__url");
	HX_VISIT_MEMBER_NAME(__path,"__path");
}

Dynamic HttpConnection_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__url") ) { return __url; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { return __path; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"TIMEOUT") ) { return TIMEOUT; }
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

Dynamic HttpConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__url") ) { __url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__path") ) { __path=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"TIMEOUT") ) { TIMEOUT=inValue.Cast< Float >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void HttpConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__url"));
	outFields->push(HX_CSTRING("__path"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TIMEOUT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(HttpConnection_obj,__url),HX_CSTRING("__url")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(HttpConnection_obj,__path),HX_CSTRING("__path")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__url"),
	HX_CSTRING("__path"),
	HX_CSTRING("resolve"),
	HX_CSTRING("call"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HttpConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HttpConnection_obj::TIMEOUT,"TIMEOUT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HttpConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HttpConnection_obj::TIMEOUT,"TIMEOUT");
};

#endif

Class HttpConnection_obj::__mClass;

void HttpConnection_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.remoting.HttpConnection"), hx::TCanCast< HttpConnection_obj> ,sStaticFields,sMemberFields,
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

void HttpConnection_obj::__boot()
{
	TIMEOUT= 10.;
}

} // end namespace haxe
} // end namespace remoting
