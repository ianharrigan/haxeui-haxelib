#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
namespace haxe{

Void Utf8_obj::__construct(Dynamic size)
{
HX_STACK_FRAME("haxe.Utf8","new",0x67cc940b,"haxe.Utf8.new","C:\\Servers\\Haxe\\haxe\\std/cpp/_std/haxe/Utf8.hx",29,0x922d10c6)
HX_STACK_THIS(this)
HX_STACK_ARG(size,"size")
{
	HX_STACK_LINE(30)
	Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	this->__s = _g;
	HX_STACK_LINE(31)
	if (((bool((size != null())) && bool((size > (int)0))))){
		HX_STACK_LINE(32)
		this->__s[(size - (int)1)] = (int)0;
	}
}
;
	return null();
}

//Utf8_obj::~Utf8_obj() { }

Dynamic Utf8_obj::__CreateEmpty() { return  new Utf8_obj; }
hx::ObjectPtr< Utf8_obj > Utf8_obj::__new(Dynamic size)
{  hx::ObjectPtr< Utf8_obj > result = new Utf8_obj();
	result->__construct(size);
	return result;}

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Utf8_obj > result = new Utf8_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Utf8_obj::addChar( int c){
{
		HX_STACK_FRAME("haxe.Utf8","addChar",0x9a1816c2,"haxe.Utf8.addChar","C:\\Servers\\Haxe\\haxe\\std/cpp/_std/haxe/Utf8.hx",36,0x922d10c6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(36)
		this->__s->push(c);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,addChar,(void))

::String Utf8_obj::toString( ){
	HX_STACK_FRAME("haxe.Utf8","toString",0xb459e121,"haxe.Utf8.toString","C:\\Servers\\Haxe\\haxe\\std/cpp/_std/haxe/Utf8.hx",40,0x922d10c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	return ::__hxcpp_char_array_to_utf8_string(this->__s);
}


HX_DEFINE_DYNAMIC_FUNC0(Utf8_obj,toString,return )

Void Utf8_obj::iter( ::String s,Dynamic chars){
{
		HX_STACK_FRAME("haxe.Utf8","iter",0x67f2370d,"haxe.Utf8.iter","C:\\Servers\\Haxe\\haxe\\std/cpp/_std/haxe/Utf8.hx",55,0x922d10c6)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(chars,"chars")
		HX_STACK_LINE(56)
		Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(57)
		{
			HX_STACK_LINE(57)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(57)
			while((true)){
				HX_STACK_LINE(57)
				if ((!(((_g < array->length))))){
					HX_STACK_LINE(57)
					break;
				}
				HX_STACK_LINE(57)
				int a = array->__get(_g);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(57)
				++(_g);
				HX_STACK_LINE(58)
				chars(a).Cast< Void >();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,iter,(void))

int Utf8_obj::length( ::String s){
	HX_STACK_FRAME("haxe.Utf8","length",0x88322e1b,"haxe.Utf8.length","C:\\Servers\\Haxe\\haxe\\std/cpp/_std/haxe/Utf8.hx",74,0x922d10c6)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(75)
	Array< int > array = ::__hxcpp_utf8_string_to_char_array(s);		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(76)
	return array->length;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,length,return )


Utf8_obj::Utf8_obj()
{
}

void Utf8_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Utf8);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_END_CLASS();
}

void Utf8_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
}

Dynamic Utf8_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return __s; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { return iter_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addChar") ) { return addChar_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Utf8_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Utf8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("iter"),
	HX_CSTRING("length"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Utf8_obj,__s),HX_CSTRING("__s")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__s"),
	HX_CSTRING("addChar"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

Class Utf8_obj::__mClass;

void Utf8_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Utf8"), hx::TCanCast< Utf8_obj> ,sStaticFields,sMemberFields,
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

void Utf8_obj::__boot()
{
}

} // end namespace haxe
