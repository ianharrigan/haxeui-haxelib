#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::Type  Type_obj::TAbstract(Dynamic t,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Type_obj >(HX_CSTRING("TAbstract"),8,hx::DynamicArray(0,2).Add(t).Add(params)); }

::haxe::macro::Type  Type_obj::TAnonymous(Dynamic a)
	{ return hx::CreateEnum< Type_obj >(HX_CSTRING("TAnonymous"),5,hx::DynamicArray(0,1).Add(a)); }

::haxe::macro::Type  Type_obj::TDynamic(::haxe::macro::Type t)
	{ return hx::CreateEnum< Type_obj >(HX_CSTRING("TDynamic"),6,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::Type  Type_obj::TEnum(Dynamic t,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Type_obj >(HX_CSTRING("TEnum"),1,hx::DynamicArray(0,2).Add(t).Add(params)); }

::haxe::macro::Type  Type_obj::TFun(Dynamic args,::haxe::macro::Type ret)
	{ return hx::CreateEnum< Type_obj >(HX_CSTRING("TFun"),4,hx::DynamicArray(0,2).Add(args).Add(ret)); }

::haxe::macro::Type  Type_obj::TInst(Dynamic t,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Type_obj >(HX_CSTRING("TInst"),2,hx::DynamicArray(0,2).Add(t).Add(params)); }

::haxe::macro::Type  Type_obj::TLazy(Dynamic f)
	{ return hx::CreateEnum< Type_obj >(HX_CSTRING("TLazy"),7,hx::DynamicArray(0,1).Add(f)); }

::haxe::macro::Type  Type_obj::TMono(Dynamic t)
	{ return hx::CreateEnum< Type_obj >(HX_CSTRING("TMono"),0,hx::DynamicArray(0,1).Add(t)); }

::haxe::macro::Type  Type_obj::TType(Dynamic t,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Type_obj >(HX_CSTRING("TType"),3,hx::DynamicArray(0,2).Add(t).Add(params)); }

HX_DEFINE_CREATE_ENUM(Type_obj)

int Type_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("TAbstract")) return 8;
	if (inName==HX_CSTRING("TAnonymous")) return 5;
	if (inName==HX_CSTRING("TDynamic")) return 6;
	if (inName==HX_CSTRING("TEnum")) return 1;
	if (inName==HX_CSTRING("TFun")) return 4;
	if (inName==HX_CSTRING("TInst")) return 2;
	if (inName==HX_CSTRING("TLazy")) return 7;
	if (inName==HX_CSTRING("TMono")) return 0;
	if (inName==HX_CSTRING("TType")) return 3;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TAbstract,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TAnonymous,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TDynamic,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TEnum,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TFun,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TInst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TLazy,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,TMono,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,TType,return)

int Type_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("TAbstract")) return 2;
	if (inName==HX_CSTRING("TAnonymous")) return 1;
	if (inName==HX_CSTRING("TDynamic")) return 1;
	if (inName==HX_CSTRING("TEnum")) return 2;
	if (inName==HX_CSTRING("TFun")) return 2;
	if (inName==HX_CSTRING("TInst")) return 2;
	if (inName==HX_CSTRING("TLazy")) return 1;
	if (inName==HX_CSTRING("TMono")) return 1;
	if (inName==HX_CSTRING("TType")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic Type_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("TAbstract")) return TAbstract_dyn();
	if (inName==HX_CSTRING("TAnonymous")) return TAnonymous_dyn();
	if (inName==HX_CSTRING("TDynamic")) return TDynamic_dyn();
	if (inName==HX_CSTRING("TEnum")) return TEnum_dyn();
	if (inName==HX_CSTRING("TFun")) return TFun_dyn();
	if (inName==HX_CSTRING("TInst")) return TInst_dyn();
	if (inName==HX_CSTRING("TLazy")) return TLazy_dyn();
	if (inName==HX_CSTRING("TMono")) return TMono_dyn();
	if (inName==HX_CSTRING("TType")) return TType_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("TMono"),
	HX_CSTRING("TEnum"),
	HX_CSTRING("TInst"),
	HX_CSTRING("TType"),
	HX_CSTRING("TFun"),
	HX_CSTRING("TAnonymous"),
	HX_CSTRING("TDynamic"),
	HX_CSTRING("TLazy"),
	HX_CSTRING("TAbstract"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Type_obj::__mClass;

Dynamic __Create_Type_obj() { return new Type_obj; }

void Type_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.macro.Type"), hx::TCanCast< Type_obj >,sStaticFields,sMemberFields,
	&__Create_Type_obj, &__Create,
	&super::__SGetClass(), &CreateType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Type_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro
