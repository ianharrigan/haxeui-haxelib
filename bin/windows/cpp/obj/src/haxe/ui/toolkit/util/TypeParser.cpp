#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_TypeParser
#include <haxe/ui/toolkit/util/TypeParser.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void TypeParser_obj::__construct()
{
	return null();
}

//TypeParser_obj::~TypeParser_obj() { }

Dynamic TypeParser_obj::__CreateEmpty() { return  new TypeParser_obj; }
hx::ObjectPtr< TypeParser_obj > TypeParser_obj::__new()
{  hx::ObjectPtr< TypeParser_obj > result = new TypeParser_obj();
	result->__construct();
	return result;}

Dynamic TypeParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TypeParser_obj > result = new TypeParser_obj();
	result->__construct();
	return result;}

int TypeParser_obj::parseInt( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.TypeParser","parseInt",0x8404c487,"haxe.ui.toolkit.util.TypeParser.parseInt","haxe/ui/toolkit/util/TypeParser.hx",4,0x44bf051b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(5)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(6)
	if (((s != null()))){
		HX_STACK_LINE(7)
		::String _g = ::StringTools_obj::trim(s);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(7)
		s = _g;
		HX_STACK_LINE(8)
		Dynamic _g1 = ::Std_obj::parseInt(s);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(8)
		i = _g1;
	}
	HX_STACK_LINE(10)
	return i;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParser_obj,parseInt,return )

Float TypeParser_obj::parseFloat( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.TypeParser","parseFloat",0x669a9334,"haxe.ui.toolkit.util.TypeParser.parseFloat","haxe/ui/toolkit/util/TypeParser.hx",13,0x44bf051b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(14)
	Float f = (int)0;		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(15)
	if (((s != null()))){
		HX_STACK_LINE(16)
		::String _g = ::StringTools_obj::trim(s);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		s = _g;
		HX_STACK_LINE(17)
		Float _g1 = ::Std_obj::parseFloat(s);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(17)
		f = _g1;
	}
	HX_STACK_LINE(19)
	return f;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParser_obj,parseFloat,return )

bool TypeParser_obj::parseBool( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.TypeParser","parseBool",0xfb877192,"haxe.ui.toolkit.util.TypeParser.parseBool","haxe/ui/toolkit/util/TypeParser.hx",22,0x44bf051b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(23)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(24)
	if (((s != null()))){
		HX_STACK_LINE(25)
		::String _g = ::StringTools_obj::trim(s);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		s = _g;
		HX_STACK_LINE(26)
		::String _g1 = s.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		s = _g1;
		HX_STACK_LINE(27)
		if (((bool((bool((s == HX_CSTRING("true"))) || bool((s == HX_CSTRING("yes"))))) || bool((s == HX_CSTRING("1")))))){
			HX_STACK_LINE(28)
			b = true;
		}
	}
	HX_STACK_LINE(31)
	return b;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParser_obj,parseBool,return )

int TypeParser_obj::parseColor( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.TypeParser","parseColor",0xae603efb,"haxe.ui.toolkit.util.TypeParser.parseColor","haxe/ui/toolkit/util/TypeParser.hx",34,0x44bf051b)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(35)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(36)
	if (((s != null()))){
		HX_STACK_LINE(37)
		::String _g = ::StringTools_obj::trim(s);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		s = _g;
		HX_STACK_LINE(38)
		if ((::StringTools_obj::startsWith(s,HX_CSTRING("#")))){
			HX_STACK_LINE(39)
			::String _g1 = s.substr((int)1,(s.length - (int)1));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(39)
			::String _g2 = (HX_CSTRING("0x") + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(39)
			s = _g2;
		}
		HX_STACK_LINE(41)
		Dynamic _g3 = ::Std_obj::parseInt(s);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(41)
		c = _g3;
	}
	HX_STACK_LINE(43)
	return c;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TypeParser_obj,parseColor,return )


TypeParser_obj::TypeParser_obj()
{
}

Dynamic TypeParser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"parseInt") ) { return parseInt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"parseBool") ) { return parseBool_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseFloat") ) { return parseFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"parseColor") ) { return parseColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TypeParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void TypeParser_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parseInt"),
	HX_CSTRING("parseFloat"),
	HX_CSTRING("parseBool"),
	HX_CSTRING("parseColor"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TypeParser_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TypeParser_obj::__mClass,"__mClass");
};

#endif

Class TypeParser_obj::__mClass;

void TypeParser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.util.TypeParser"), hx::TCanCast< TypeParser_obj> ,sStaticFields,sMemberFields,
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

void TypeParser_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
