#include <hxcpp.h>

#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
namespace hscript{

::hscript::CType  CType_obj::CTAnon(Dynamic fields)
	{ return hx::CreateEnum< CType_obj >(HX_CSTRING("CTAnon"),2,hx::DynamicArray(0,1).Add(fields)); }

::hscript::CType  CType_obj::CTFun(Array< ::Dynamic > args,::hscript::CType ret)
	{ return hx::CreateEnum< CType_obj >(HX_CSTRING("CTFun"),1,hx::DynamicArray(0,2).Add(args).Add(ret)); }

::hscript::CType  CType_obj::CTParent(::hscript::CType t)
	{ return hx::CreateEnum< CType_obj >(HX_CSTRING("CTParent"),3,hx::DynamicArray(0,1).Add(t)); }

::hscript::CType  CType_obj::CTPath(Array< ::String > path,Array< ::Dynamic > params)
	{ return hx::CreateEnum< CType_obj >(HX_CSTRING("CTPath"),0,hx::DynamicArray(0,2).Add(path).Add(params)); }

HX_DEFINE_CREATE_ENUM(CType_obj)

int CType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("CTAnon")) return 2;
	if (inName==HX_CSTRING("CTFun")) return 1;
	if (inName==HX_CSTRING("CTParent")) return 3;
	if (inName==HX_CSTRING("CTPath")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CType_obj,CTAnon,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CTFun,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CType_obj,CTParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(CType_obj,CTPath,return)

int CType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("CTAnon")) return 1;
	if (inName==HX_CSTRING("CTFun")) return 2;
	if (inName==HX_CSTRING("CTParent")) return 1;
	if (inName==HX_CSTRING("CTPath")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic CType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("CTAnon")) return CTAnon_dyn();
	if (inName==HX_CSTRING("CTFun")) return CTFun_dyn();
	if (inName==HX_CSTRING("CTParent")) return CTParent_dyn();
	if (inName==HX_CSTRING("CTPath")) return CTPath_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("CTPath"),
	HX_CSTRING("CTFun"),
	HX_CSTRING("CTAnon"),
	HX_CSTRING("CTParent"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CType_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class CType_obj::__mClass;

Dynamic __Create_CType_obj() { return new CType_obj; }

void CType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hscript.CType"), hx::TCanCast< CType_obj >,sStaticFields,sMemberFields,
	&__Create_CType_obj, &__Create,
	&super::__SGetClass(), &CreateCType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CType_obj::__boot()
{
}


} // end namespace hscript
