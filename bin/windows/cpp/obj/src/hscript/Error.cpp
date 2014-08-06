#include <hxcpp.h>

#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
namespace hscript{

::hscript::Error  Error_obj::EInvalidAccess(::String f)
	{ return hx::CreateEnum< Error_obj >(HX_CSTRING("EInvalidAccess"),7,hx::DynamicArray(0,1).Add(f)); }

::hscript::Error  Error_obj::EInvalidChar(int c)
	{ return hx::CreateEnum< Error_obj >(HX_CSTRING("EInvalidChar"),0,hx::DynamicArray(0,1).Add(c)); }

::hscript::Error  Error_obj::EInvalidIterator(::String v)
	{ return hx::CreateEnum< Error_obj >(HX_CSTRING("EInvalidIterator"),5,hx::DynamicArray(0,1).Add(v)); }

::hscript::Error  Error_obj::EInvalidOp(::String op)
	{ return hx::CreateEnum< Error_obj >(HX_CSTRING("EInvalidOp"),6,hx::DynamicArray(0,1).Add(op)); }

::hscript::Error  Error_obj::EUnexpected(::String s)
	{ return hx::CreateEnum< Error_obj >(HX_CSTRING("EUnexpected"),1,hx::DynamicArray(0,1).Add(s)); }

::hscript::Error  Error_obj::EUnknownVariable(::String v)
	{ return hx::CreateEnum< Error_obj >(HX_CSTRING("EUnknownVariable"),4,hx::DynamicArray(0,1).Add(v)); }

::hscript::Error Error_obj::EUnterminatedComment;

::hscript::Error Error_obj::EUnterminatedString;

HX_DEFINE_CREATE_ENUM(Error_obj)

int Error_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("EInvalidAccess")) return 7;
	if (inName==HX_CSTRING("EInvalidChar")) return 0;
	if (inName==HX_CSTRING("EInvalidIterator")) return 5;
	if (inName==HX_CSTRING("EInvalidOp")) return 6;
	if (inName==HX_CSTRING("EUnexpected")) return 1;
	if (inName==HX_CSTRING("EUnknownVariable")) return 4;
	if (inName==HX_CSTRING("EUnterminatedComment")) return 3;
	if (inName==HX_CSTRING("EUnterminatedString")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidAccess,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidChar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidIterator,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EInvalidOp,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EUnexpected,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Error_obj,EUnknownVariable,return)

int Error_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("EInvalidAccess")) return 1;
	if (inName==HX_CSTRING("EInvalidChar")) return 1;
	if (inName==HX_CSTRING("EInvalidIterator")) return 1;
	if (inName==HX_CSTRING("EInvalidOp")) return 1;
	if (inName==HX_CSTRING("EUnexpected")) return 1;
	if (inName==HX_CSTRING("EUnknownVariable")) return 1;
	if (inName==HX_CSTRING("EUnterminatedComment")) return 0;
	if (inName==HX_CSTRING("EUnterminatedString")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Error_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("EInvalidAccess")) return EInvalidAccess_dyn();
	if (inName==HX_CSTRING("EInvalidChar")) return EInvalidChar_dyn();
	if (inName==HX_CSTRING("EInvalidIterator")) return EInvalidIterator_dyn();
	if (inName==HX_CSTRING("EInvalidOp")) return EInvalidOp_dyn();
	if (inName==HX_CSTRING("EUnexpected")) return EUnexpected_dyn();
	if (inName==HX_CSTRING("EUnknownVariable")) return EUnknownVariable_dyn();
	if (inName==HX_CSTRING("EUnterminatedComment")) return EUnterminatedComment;
	if (inName==HX_CSTRING("EUnterminatedString")) return EUnterminatedString;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("EInvalidChar"),
	HX_CSTRING("EUnexpected"),
	HX_CSTRING("EUnterminatedString"),
	HX_CSTRING("EUnterminatedComment"),
	HX_CSTRING("EUnknownVariable"),
	HX_CSTRING("EInvalidIterator"),
	HX_CSTRING("EInvalidOp"),
	HX_CSTRING("EInvalidAccess"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Error_obj::EUnterminatedComment,"EUnterminatedComment");
	HX_MARK_MEMBER_NAME(Error_obj::EUnterminatedString,"EUnterminatedString");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Error_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Error_obj::EUnterminatedComment,"EUnterminatedComment");
	HX_VISIT_MEMBER_NAME(Error_obj::EUnterminatedString,"EUnterminatedString");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Error_obj::__mClass;

Dynamic __Create_Error_obj() { return new Error_obj; }

void Error_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hscript.Error"), hx::TCanCast< Error_obj >,sStaticFields,sMemberFields,
	&__Create_Error_obj, &__Create,
	&super::__SGetClass(), &CreateError_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Error_obj::__boot()
{
hx::Static(EUnterminatedComment) = hx::CreateEnum< Error_obj >(HX_CSTRING("EUnterminatedComment"),3);
hx::Static(EUnterminatedString) = hx::CreateEnum< Error_obj >(HX_CSTRING("EUnterminatedString"),2);
}


} // end namespace hscript
