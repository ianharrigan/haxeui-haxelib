#include <hxcpp.h>

#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
namespace hscript{

::hscript::Expr  Expr_obj::EArray(::hscript::Expr e,::hscript::Expr index)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EArray"),16,hx::DynamicArray(0,2).Add(e).Add(index)); }

::hscript::Expr  Expr_obj::EArrayDecl(Array< ::Dynamic > e)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EArrayDecl"),17,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr  Expr_obj::EBinop(::String op,::hscript::Expr e1,::hscript::Expr e2)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EBinop"),6,hx::DynamicArray(0,3).Add(op).Add(e1).Add(e2)); }

::hscript::Expr  Expr_obj::EBlock(Array< ::Dynamic > e)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EBlock"),4,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr Expr_obj::EBreak;

::hscript::Expr  Expr_obj::ECall(::hscript::Expr e,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("ECall"),8,hx::DynamicArray(0,2).Add(e).Add(params)); }

::hscript::Expr  Expr_obj::EConst(::hscript::Const c)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EConst"),0,hx::DynamicArray(0,1).Add(c)); }

::hscript::Expr Expr_obj::EContinue;

::hscript::Expr  Expr_obj::EField(::hscript::Expr e,::String f)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EField"),5,hx::DynamicArray(0,2).Add(e).Add(f)); }

::hscript::Expr  Expr_obj::EFor(::String v,::hscript::Expr it,::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EFor"),11,hx::DynamicArray(0,3).Add(v).Add(it).Add(e)); }

::hscript::Expr  Expr_obj::EFunction(Dynamic args,::hscript::Expr e,::String name,::hscript::CType ret)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EFunction"),14,hx::DynamicArray(0,4).Add(args).Add(e).Add(name).Add(ret)); }

::hscript::Expr  Expr_obj::EIdent(::String v)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EIdent"),1,hx::DynamicArray(0,1).Add(v)); }

::hscript::Expr  Expr_obj::EIf(::hscript::Expr cond,::hscript::Expr e1,::hscript::Expr e2)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EIf"),9,hx::DynamicArray(0,3).Add(cond).Add(e1).Add(e2)); }

::hscript::Expr  Expr_obj::ENew(::String cl,Array< ::Dynamic > params)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("ENew"),18,hx::DynamicArray(0,2).Add(cl).Add(params)); }

::hscript::Expr  Expr_obj::EObject(Dynamic fl)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EObject"),21,hx::DynamicArray(0,1).Add(fl)); }

::hscript::Expr  Expr_obj::EParent(::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EParent"),3,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr  Expr_obj::EReturn(::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EReturn"),15,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr  Expr_obj::ETernary(::hscript::Expr cond,::hscript::Expr e1,::hscript::Expr e2)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("ETernary"),22,hx::DynamicArray(0,3).Add(cond).Add(e1).Add(e2)); }

::hscript::Expr  Expr_obj::EThrow(::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EThrow"),19,hx::DynamicArray(0,1).Add(e)); }

::hscript::Expr  Expr_obj::ETry(::hscript::Expr e,::String v,::hscript::CType t,::hscript::Expr ecatch)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("ETry"),20,hx::DynamicArray(0,4).Add(e).Add(v).Add(t).Add(ecatch)); }

::hscript::Expr  Expr_obj::EUnop(::String op,bool prefix,::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EUnop"),7,hx::DynamicArray(0,3).Add(op).Add(prefix).Add(e)); }

::hscript::Expr  Expr_obj::EVar(::String n,::hscript::CType t,::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EVar"),2,hx::DynamicArray(0,3).Add(n).Add(t).Add(e)); }

::hscript::Expr  Expr_obj::EWhile(::hscript::Expr cond,::hscript::Expr e)
	{ return hx::CreateEnum< Expr_obj >(HX_CSTRING("EWhile"),10,hx::DynamicArray(0,2).Add(cond).Add(e)); }

HX_DEFINE_CREATE_ENUM(Expr_obj)

int Expr_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("EArray")) return 16;
	if (inName==HX_CSTRING("EArrayDecl")) return 17;
	if (inName==HX_CSTRING("EBinop")) return 6;
	if (inName==HX_CSTRING("EBlock")) return 4;
	if (inName==HX_CSTRING("EBreak")) return 12;
	if (inName==HX_CSTRING("ECall")) return 8;
	if (inName==HX_CSTRING("EConst")) return 0;
	if (inName==HX_CSTRING("EContinue")) return 13;
	if (inName==HX_CSTRING("EField")) return 5;
	if (inName==HX_CSTRING("EFor")) return 11;
	if (inName==HX_CSTRING("EFunction")) return 14;
	if (inName==HX_CSTRING("EIdent")) return 1;
	if (inName==HX_CSTRING("EIf")) return 9;
	if (inName==HX_CSTRING("ENew")) return 18;
	if (inName==HX_CSTRING("EObject")) return 21;
	if (inName==HX_CSTRING("EParent")) return 3;
	if (inName==HX_CSTRING("EReturn")) return 15;
	if (inName==HX_CSTRING("ETernary")) return 22;
	if (inName==HX_CSTRING("EThrow")) return 19;
	if (inName==HX_CSTRING("ETry")) return 20;
	if (inName==HX_CSTRING("EUnop")) return 7;
	if (inName==HX_CSTRING("EVar")) return 2;
	if (inName==HX_CSTRING("EWhile")) return 10;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EArray,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EArrayDecl,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EBinop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EBlock,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,ECall,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EField,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EFor,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(Expr_obj,EFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EIdent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EIf,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,ENew,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EObject,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EReturn,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,ETernary,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Expr_obj,EThrow,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC4(Expr_obj,ETry,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EUnop,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(Expr_obj,EVar,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(Expr_obj,EWhile,return)

int Expr_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("EArray")) return 2;
	if (inName==HX_CSTRING("EArrayDecl")) return 1;
	if (inName==HX_CSTRING("EBinop")) return 3;
	if (inName==HX_CSTRING("EBlock")) return 1;
	if (inName==HX_CSTRING("EBreak")) return 0;
	if (inName==HX_CSTRING("ECall")) return 2;
	if (inName==HX_CSTRING("EConst")) return 1;
	if (inName==HX_CSTRING("EContinue")) return 0;
	if (inName==HX_CSTRING("EField")) return 2;
	if (inName==HX_CSTRING("EFor")) return 3;
	if (inName==HX_CSTRING("EFunction")) return 4;
	if (inName==HX_CSTRING("EIdent")) return 1;
	if (inName==HX_CSTRING("EIf")) return 3;
	if (inName==HX_CSTRING("ENew")) return 2;
	if (inName==HX_CSTRING("EObject")) return 1;
	if (inName==HX_CSTRING("EParent")) return 1;
	if (inName==HX_CSTRING("EReturn")) return 1;
	if (inName==HX_CSTRING("ETernary")) return 3;
	if (inName==HX_CSTRING("EThrow")) return 1;
	if (inName==HX_CSTRING("ETry")) return 4;
	if (inName==HX_CSTRING("EUnop")) return 3;
	if (inName==HX_CSTRING("EVar")) return 3;
	if (inName==HX_CSTRING("EWhile")) return 2;
	return super::__FindArgCount(inName);
}

Dynamic Expr_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("EArray")) return EArray_dyn();
	if (inName==HX_CSTRING("EArrayDecl")) return EArrayDecl_dyn();
	if (inName==HX_CSTRING("EBinop")) return EBinop_dyn();
	if (inName==HX_CSTRING("EBlock")) return EBlock_dyn();
	if (inName==HX_CSTRING("EBreak")) return EBreak;
	if (inName==HX_CSTRING("ECall")) return ECall_dyn();
	if (inName==HX_CSTRING("EConst")) return EConst_dyn();
	if (inName==HX_CSTRING("EContinue")) return EContinue;
	if (inName==HX_CSTRING("EField")) return EField_dyn();
	if (inName==HX_CSTRING("EFor")) return EFor_dyn();
	if (inName==HX_CSTRING("EFunction")) return EFunction_dyn();
	if (inName==HX_CSTRING("EIdent")) return EIdent_dyn();
	if (inName==HX_CSTRING("EIf")) return EIf_dyn();
	if (inName==HX_CSTRING("ENew")) return ENew_dyn();
	if (inName==HX_CSTRING("EObject")) return EObject_dyn();
	if (inName==HX_CSTRING("EParent")) return EParent_dyn();
	if (inName==HX_CSTRING("EReturn")) return EReturn_dyn();
	if (inName==HX_CSTRING("ETernary")) return ETernary_dyn();
	if (inName==HX_CSTRING("EThrow")) return EThrow_dyn();
	if (inName==HX_CSTRING("ETry")) return ETry_dyn();
	if (inName==HX_CSTRING("EUnop")) return EUnop_dyn();
	if (inName==HX_CSTRING("EVar")) return EVar_dyn();
	if (inName==HX_CSTRING("EWhile")) return EWhile_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("EConst"),
	HX_CSTRING("EIdent"),
	HX_CSTRING("EVar"),
	HX_CSTRING("EParent"),
	HX_CSTRING("EBlock"),
	HX_CSTRING("EField"),
	HX_CSTRING("EBinop"),
	HX_CSTRING("EUnop"),
	HX_CSTRING("ECall"),
	HX_CSTRING("EIf"),
	HX_CSTRING("EWhile"),
	HX_CSTRING("EFor"),
	HX_CSTRING("EBreak"),
	HX_CSTRING("EContinue"),
	HX_CSTRING("EFunction"),
	HX_CSTRING("EReturn"),
	HX_CSTRING("EArray"),
	HX_CSTRING("EArrayDecl"),
	HX_CSTRING("ENew"),
	HX_CSTRING("EThrow"),
	HX_CSTRING("ETry"),
	HX_CSTRING("EObject"),
	HX_CSTRING("ETernary"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Expr_obj::EBreak,"EBreak");
	HX_MARK_MEMBER_NAME(Expr_obj::EContinue,"EContinue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Expr_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Expr_obj::EBreak,"EBreak");
	HX_VISIT_MEMBER_NAME(Expr_obj::EContinue,"EContinue");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Expr_obj::__mClass;

Dynamic __Create_Expr_obj() { return new Expr_obj; }

void Expr_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hscript.Expr"), hx::TCanCast< Expr_obj >,sStaticFields,sMemberFields,
	&__Create_Expr_obj, &__Create,
	&super::__SGetClass(), &CreateExpr_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Expr_obj::__boot()
{
hx::Static(EBreak) = hx::CreateEnum< Expr_obj >(HX_CSTRING("EBreak"),12);
hx::Static(EContinue) = hx::CreateEnum< Expr_obj >(HX_CSTRING("EContinue"),13);
}


} // end namespace hscript
