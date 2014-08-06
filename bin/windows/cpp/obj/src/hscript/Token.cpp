#include <hxcpp.h>

#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace hscript{

::hscript::Token Token_obj::TBkClose;

::hscript::Token Token_obj::TBkOpen;

::hscript::Token Token_obj::TBrClose;

::hscript::Token Token_obj::TBrOpen;

::hscript::Token Token_obj::TComma;

::hscript::Token  Token_obj::TConst(::hscript::Const c)
	{ return hx::CreateEnum< Token_obj >(HX_CSTRING("TConst"),1,hx::DynamicArray(0,1).Add(c)); }

::hscript::Token Token_obj::TDot;

::hscript::Token Token_obj::TDoubleDot;

::hscript::Token Token_obj::TEof;

::hscript::Token  Token_obj::TId(::String s)
	{ return hx::CreateEnum< Token_obj >(HX_CSTRING("TId"),2,hx::DynamicArray(0,1).Add(s)); }

::hscript::Token  Token_obj::TOp(::String s)
	{ return hx::CreateEnum< Token_obj >(HX_CSTRING("TOp"),3,hx::DynamicArray(0,1).Add(s)); }

::hscript::Token Token_obj::TPClose;

::hscript::Token Token_obj::TPOpen;

::hscript::Token Token_obj::TQuestion;

::hscript::Token Token_obj::TSemicolon;

HX_DEFINE_CREATE_ENUM(Token_obj)

int Token_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("TBkClose")) return 12;
	if (inName==HX_CSTRING("TBkOpen")) return 11;
	if (inName==HX_CSTRING("TBrClose")) return 7;
	if (inName==HX_CSTRING("TBrOpen")) return 6;
	if (inName==HX_CSTRING("TComma")) return 9;
	if (inName==HX_CSTRING("TConst")) return 1;
	if (inName==HX_CSTRING("TDot")) return 8;
	if (inName==HX_CSTRING("TDoubleDot")) return 14;
	if (inName==HX_CSTRING("TEof")) return 0;
	if (inName==HX_CSTRING("TId")) return 2;
	if (inName==HX_CSTRING("TOp")) return 3;
	if (inName==HX_CSTRING("TPClose")) return 5;
	if (inName==HX_CSTRING("TPOpen")) return 4;
	if (inName==HX_CSTRING("TQuestion")) return 13;
	if (inName==HX_CSTRING("TSemicolon")) return 10;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TConst,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TId,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Token_obj,TOp,return)

int Token_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("TBkClose")) return 0;
	if (inName==HX_CSTRING("TBkOpen")) return 0;
	if (inName==HX_CSTRING("TBrClose")) return 0;
	if (inName==HX_CSTRING("TBrOpen")) return 0;
	if (inName==HX_CSTRING("TComma")) return 0;
	if (inName==HX_CSTRING("TConst")) return 1;
	if (inName==HX_CSTRING("TDot")) return 0;
	if (inName==HX_CSTRING("TDoubleDot")) return 0;
	if (inName==HX_CSTRING("TEof")) return 0;
	if (inName==HX_CSTRING("TId")) return 1;
	if (inName==HX_CSTRING("TOp")) return 1;
	if (inName==HX_CSTRING("TPClose")) return 0;
	if (inName==HX_CSTRING("TPOpen")) return 0;
	if (inName==HX_CSTRING("TQuestion")) return 0;
	if (inName==HX_CSTRING("TSemicolon")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Token_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("TBkClose")) return TBkClose;
	if (inName==HX_CSTRING("TBkOpen")) return TBkOpen;
	if (inName==HX_CSTRING("TBrClose")) return TBrClose;
	if (inName==HX_CSTRING("TBrOpen")) return TBrOpen;
	if (inName==HX_CSTRING("TComma")) return TComma;
	if (inName==HX_CSTRING("TConst")) return TConst_dyn();
	if (inName==HX_CSTRING("TDot")) return TDot;
	if (inName==HX_CSTRING("TDoubleDot")) return TDoubleDot;
	if (inName==HX_CSTRING("TEof")) return TEof;
	if (inName==HX_CSTRING("TId")) return TId_dyn();
	if (inName==HX_CSTRING("TOp")) return TOp_dyn();
	if (inName==HX_CSTRING("TPClose")) return TPClose;
	if (inName==HX_CSTRING("TPOpen")) return TPOpen;
	if (inName==HX_CSTRING("TQuestion")) return TQuestion;
	if (inName==HX_CSTRING("TSemicolon")) return TSemicolon;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("TEof"),
	HX_CSTRING("TConst"),
	HX_CSTRING("TId"),
	HX_CSTRING("TOp"),
	HX_CSTRING("TPOpen"),
	HX_CSTRING("TPClose"),
	HX_CSTRING("TBrOpen"),
	HX_CSTRING("TBrClose"),
	HX_CSTRING("TDot"),
	HX_CSTRING("TComma"),
	HX_CSTRING("TSemicolon"),
	HX_CSTRING("TBkOpen"),
	HX_CSTRING("TBkClose"),
	HX_CSTRING("TQuestion"),
	HX_CSTRING("TDoubleDot"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Token_obj::TBkClose,"TBkClose");
	HX_MARK_MEMBER_NAME(Token_obj::TBkOpen,"TBkOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TBrClose,"TBrClose");
	HX_MARK_MEMBER_NAME(Token_obj::TBrOpen,"TBrOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TComma,"TComma");
	HX_MARK_MEMBER_NAME(Token_obj::TDot,"TDot");
	HX_MARK_MEMBER_NAME(Token_obj::TDoubleDot,"TDoubleDot");
	HX_MARK_MEMBER_NAME(Token_obj::TEof,"TEof");
	HX_MARK_MEMBER_NAME(Token_obj::TPClose,"TPClose");
	HX_MARK_MEMBER_NAME(Token_obj::TPOpen,"TPOpen");
	HX_MARK_MEMBER_NAME(Token_obj::TQuestion,"TQuestion");
	HX_MARK_MEMBER_NAME(Token_obj::TSemicolon,"TSemicolon");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Token_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Token_obj::TBkClose,"TBkClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TBkOpen,"TBkOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TBrClose,"TBrClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TBrOpen,"TBrOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TComma,"TComma");
	HX_VISIT_MEMBER_NAME(Token_obj::TDot,"TDot");
	HX_VISIT_MEMBER_NAME(Token_obj::TDoubleDot,"TDoubleDot");
	HX_VISIT_MEMBER_NAME(Token_obj::TEof,"TEof");
	HX_VISIT_MEMBER_NAME(Token_obj::TPClose,"TPClose");
	HX_VISIT_MEMBER_NAME(Token_obj::TPOpen,"TPOpen");
	HX_VISIT_MEMBER_NAME(Token_obj::TQuestion,"TQuestion");
	HX_VISIT_MEMBER_NAME(Token_obj::TSemicolon,"TSemicolon");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Token_obj::__mClass;

Dynamic __Create_Token_obj() { return new Token_obj; }

void Token_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hscript.Token"), hx::TCanCast< Token_obj >,sStaticFields,sMemberFields,
	&__Create_Token_obj, &__Create,
	&super::__SGetClass(), &CreateToken_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Token_obj::__boot()
{
hx::Static(TBkClose) = hx::CreateEnum< Token_obj >(HX_CSTRING("TBkClose"),12);
hx::Static(TBkOpen) = hx::CreateEnum< Token_obj >(HX_CSTRING("TBkOpen"),11);
hx::Static(TBrClose) = hx::CreateEnum< Token_obj >(HX_CSTRING("TBrClose"),7);
hx::Static(TBrOpen) = hx::CreateEnum< Token_obj >(HX_CSTRING("TBrOpen"),6);
hx::Static(TComma) = hx::CreateEnum< Token_obj >(HX_CSTRING("TComma"),9);
hx::Static(TDot) = hx::CreateEnum< Token_obj >(HX_CSTRING("TDot"),8);
hx::Static(TDoubleDot) = hx::CreateEnum< Token_obj >(HX_CSTRING("TDoubleDot"),14);
hx::Static(TEof) = hx::CreateEnum< Token_obj >(HX_CSTRING("TEof"),0);
hx::Static(TPClose) = hx::CreateEnum< Token_obj >(HX_CSTRING("TPClose"),5);
hx::Static(TPOpen) = hx::CreateEnum< Token_obj >(HX_CSTRING("TPOpen"),4);
hx::Static(TQuestion) = hx::CreateEnum< Token_obj >(HX_CSTRING("TQuestion"),13);
hx::Static(TSemicolon) = hx::CreateEnum< Token_obj >(HX_CSTRING("TSemicolon"),10);
}


} // end namespace hscript
