#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace crypto{

Void Adler32_obj::__construct()
{
HX_STACK_FRAME("haxe.crypto.Adler32","new",0xc900c8e2,"haxe.crypto.Adler32.new","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Adler32.hx",29,0xdd0b340b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->a1 = (int)1;
	HX_STACK_LINE(31)
	this->a2 = (int)0;
}
;
	return null();
}

//Adler32_obj::~Adler32_obj() { }

Dynamic Adler32_obj::__CreateEmpty() { return  new Adler32_obj; }
hx::ObjectPtr< Adler32_obj > Adler32_obj::__new()
{  hx::ObjectPtr< Adler32_obj > result = new Adler32_obj();
	result->__construct();
	return result;}

Dynamic Adler32_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Adler32_obj > result = new Adler32_obj();
	result->__construct();
	return result;}

Void Adler32_obj::update( ::haxe::io::Bytes b,int pos,int len){
{
		HX_STACK_FRAME("haxe.crypto.Adler32","update",0xb4b14ac7,"haxe.crypto.Adler32.update","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Adler32.hx",38,0xdd0b340b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(39)
		int a1 = this->a1;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(39)
		int a2 = this->a2;		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int _g1 = pos;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(40)
			int _g = (pos + len);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			while((true)){
				HX_STACK_LINE(40)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(40)
					break;
				}
				HX_STACK_LINE(40)
				int p = (_g1)++;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(41)
				int c = b->b->__get(p);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(42)
				a1 = hx::Mod(((a1 + c)),(int)65521);
				HX_STACK_LINE(43)
				a2 = hx::Mod(((a2 + a1)),(int)65521);
			}
		}
		HX_STACK_LINE(45)
		this->a1 = a1;
		HX_STACK_LINE(46)
		this->a2 = a2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Adler32_obj,update,(void))

bool Adler32_obj::equals( ::haxe::crypto::Adler32 a){
	HX_STACK_FRAME("haxe.crypto.Adler32","equals",0xed9eb2fd,"haxe.crypto.Adler32.equals","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Adler32.hx",50,0xdd0b340b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(50)
	return (bool((a->a1 == this->a1)) && bool((a->a2 == this->a2)));
}


HX_DEFINE_DYNAMIC_FUNC1(Adler32_obj,equals,return )

::haxe::crypto::Adler32 Adler32_obj::read( ::haxe::io::Input i){
	HX_STACK_FRAME("haxe.crypto.Adler32","read",0x1a53c494,"haxe.crypto.Adler32.read","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Adler32.hx",57,0xdd0b340b)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(58)
	::haxe::crypto::Adler32 a = ::haxe::crypto::Adler32_obj::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(59)
	int a2a = i->readByte();		HX_STACK_VAR(a2a,"a2a");
	HX_STACK_LINE(60)
	int a2b = i->readByte();		HX_STACK_VAR(a2b,"a2b");
	HX_STACK_LINE(61)
	int a1a = i->readByte();		HX_STACK_VAR(a1a,"a1a");
	HX_STACK_LINE(62)
	int a1b = i->readByte();		HX_STACK_VAR(a1b,"a1b");
	HX_STACK_LINE(63)
	a->a1 = (int((int(a1a) << int((int)8))) | int(a1b));
	HX_STACK_LINE(64)
	a->a2 = (int((int(a2a) << int((int)8))) | int(a2b));
	HX_STACK_LINE(65)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Adler32_obj,read,return )


Adler32_obj::Adler32_obj()
{
}

Dynamic Adler32_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { return a1; }
		if (HX_FIELD_EQ(inName,"a2") ) { return a2; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Adler32_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"a1") ) { a1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"a2") ) { a2=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Adler32_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a1"));
	outFields->push(HX_CSTRING("a2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("read"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Adler32_obj,a1),HX_CSTRING("a1")},
	{hx::fsInt,(int)offsetof(Adler32_obj,a2),HX_CSTRING("a2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("a1"),
	HX_CSTRING("a2"),
	HX_CSTRING("update"),
	HX_CSTRING("equals"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Adler32_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Adler32_obj::__mClass,"__mClass");
};

#endif

Class Adler32_obj::__mClass;

void Adler32_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.crypto.Adler32"), hx::TCanCast< Adler32_obj> ,sStaticFields,sMemberFields,
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

void Adler32_obj::__boot()
{
}

} // end namespace haxe
} // end namespace crypto
