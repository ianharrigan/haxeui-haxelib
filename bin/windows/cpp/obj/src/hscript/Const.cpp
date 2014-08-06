#include <hxcpp.h>

#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
namespace hscript{

::hscript::Const  Const_obj::CFloat(Float f)
	{ return hx::CreateEnum< Const_obj >(HX_CSTRING("CFloat"),1,hx::DynamicArray(0,1).Add(f)); }

::hscript::Const  Const_obj::CInt(int v)
	{ return hx::CreateEnum< Const_obj >(HX_CSTRING("CInt"),0,hx::DynamicArray(0,1).Add(v)); }

::hscript::Const  Const_obj::CString(::String s)
	{ return hx::CreateEnum< Const_obj >(HX_CSTRING("CString"),2,hx::DynamicArray(0,1).Add(s)); }

HX_DEFINE_CREATE_ENUM(Const_obj)

int Const_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CFloat")) return 1;
	if (inName==HX_CSTRING("CInt")) return 0;
	if (inName==HX_CSTRING("CString")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CFloat,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CInt,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Const_obj,CString,return)

int Const_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CFloat")) return 1;
	if (inName==HX_CSTRING("CInt")) return 1;
	if (inName==HX_CSTRING("CString")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Const_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CFloat")) return CFloat_dyn();
	if (inName==HX_CSTRING("CInt")) return CInt_dyn();
	if (inName==HX_CSTRING("CString")) return CString_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("CInt"),
	HX_CSTRING("CFloat"),
	HX_CSTRING("CString"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Const_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Const_obj::__mClass;

Dynamic __Create_Const_obj() { return new Const_obj; }

void Const_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hscript.Const"), hx::TCanCast< Const_obj >,sStaticFields,sMemberFields,
	&__Create_Const_obj, &__Create,
	&super::__SGetClass(), &CreateConst_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Const_obj::__boot()
{
}


} // end namespace hscript
