#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_util_StringUtil
#include <haxe/ui/toolkit/util/StringUtil.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void StringUtil_obj::__construct()
{
	return null();
}

//StringUtil_obj::~StringUtil_obj() { }

Dynamic StringUtil_obj::__CreateEmpty() { return  new StringUtil_obj; }
hx::ObjectPtr< StringUtil_obj > StringUtil_obj::__new()
{  hx::ObjectPtr< StringUtil_obj > result = new StringUtil_obj();
	result->__construct();
	return result;}

Dynamic StringUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StringUtil_obj > result = new StringUtil_obj();
	result->__construct();
	return result;}

::String StringUtil_obj::capitalizeFirstLetter( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.StringUtil","capitalizeFirstLetter",0x3b77f3b9,"haxe.ui.toolkit.util.StringUtil.capitalizeFirstLetter","haxe/ui/toolkit/util/StringUtil.hx",4,0xc2b10721)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(5)
	::String _g = s.substr((int)0,(int)1).toUpperCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(5)
	::String _g1 = s.substr((int)1,s.length);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(5)
	::String _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(5)
	s = _g2;
	HX_STACK_LINE(6)
	return s;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeFirstLetter,return )

::String StringUtil_obj::capitalizeHyphens( ::String s){
	HX_STACK_FRAME("haxe.ui.toolkit.util.StringUtil","capitalizeHyphens",0xd18bed44,"haxe.ui.toolkit.util.StringUtil.capitalizeHyphens","haxe/ui/toolkit/util/StringUtil.hx",9,0xc2b10721)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(10)
	::String r = s;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(11)
	int n = r.indexOf(HX_CSTRING("-"),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(12)
	while((true)){
		HX_STACK_LINE(12)
		if ((!(((n != (int)-1))))){
			HX_STACK_LINE(12)
			break;
		}
		HX_STACK_LINE(13)
		::String before = r.substr((int)0,n);		HX_STACK_VAR(before,"before");
		HX_STACK_LINE(14)
		::String after = r.substr((n + (int)1),r.length);		HX_STACK_VAR(after,"after");
		HX_STACK_LINE(15)
		::String _g = ::haxe::ui::toolkit::util::StringUtil_obj::capitalizeFirstLetter(after);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		::String _g1 = (before + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(15)
		r = _g1;
		HX_STACK_LINE(16)
		int _g2 = r.indexOf(HX_CSTRING("-"),(n + (int)1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(16)
		n = _g2;
	}
	HX_STACK_LINE(18)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StringUtil_obj,capitalizeHyphens,return )


StringUtil_obj::StringUtil_obj()
{
}

Dynamic StringUtil_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"capitalizeHyphens") ) { return capitalizeHyphens_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"capitalizeFirstLetter") ) { return capitalizeFirstLetter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StringUtil_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StringUtil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("capitalizeFirstLetter"),
	HX_CSTRING("capitalizeHyphens"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StringUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StringUtil_obj::__mClass,"__mClass");
};

#endif

Class StringUtil_obj::__mClass;

void StringUtil_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.util.StringUtil"), hx::TCanCast< StringUtil_obj> ,sStaticFields,sMemberFields,
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

void StringUtil_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
