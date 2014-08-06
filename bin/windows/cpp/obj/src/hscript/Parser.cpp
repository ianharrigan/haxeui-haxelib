#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hscript_Token
#include <haxe/ds/GenericStack_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_StringInput
#include <haxe/io/StringInput.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace hscript{

Void Parser_obj::__construct()
{
HX_STACK_FRAME("hscript.Parser","new",0x4b9f158c,"hscript.Parser.new","hscript/Parser.hx",99,0x98735743)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(100)
	this->line = (int)1;
	HX_STACK_LINE(101)
	this->opChars = HX_CSTRING("+*/-=!><&|^%~");
	HX_STACK_LINE(102)
	this->identChars = HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_");
	HX_STACK_LINE(103)
	Array< ::Dynamic > priorities = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_CSTRING("%"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("*")).Add(HX_CSTRING("/"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("+")).Add(HX_CSTRING("-"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("<<")).Add(HX_CSTRING(">>")).Add(HX_CSTRING(">>>"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("|")).Add(HX_CSTRING("&")).Add(HX_CSTRING("^"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("==")).Add(HX_CSTRING("!=")).Add(HX_CSTRING(">")).Add(HX_CSTRING("<")).Add(HX_CSTRING(">=")).Add(HX_CSTRING("<="))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("..."))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("&&"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("||"))).Add(Array_obj< ::String >::__new().Add(HX_CSTRING("=")).Add(HX_CSTRING("+=")).Add(HX_CSTRING("-=")).Add(HX_CSTRING("*=")).Add(HX_CSTRING("/=")).Add(HX_CSTRING("%=")).Add(HX_CSTRING("<<=")).Add(HX_CSTRING(">>=")).Add(HX_CSTRING(">>>=")).Add(HX_CSTRING("|=")).Add(HX_CSTRING("&=")).Add(HX_CSTRING("^=")));		HX_STACK_VAR(priorities,"priorities");
	HX_STACK_LINE(116)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(116)
	this->opPriority = _g;
	HX_STACK_LINE(117)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(117)
	this->opRightAssoc = _g1;
	HX_STACK_LINE(118)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(118)
	this->unops = _g2;
	HX_STACK_LINE(124)
	{
		HX_STACK_LINE(124)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(124)
		int _g3 = priorities->length;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(124)
		while((true)){
			HX_STACK_LINE(124)
			if ((!(((_g11 < _g3))))){
				HX_STACK_LINE(124)
				break;
			}
			HX_STACK_LINE(124)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(125)
			int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(125)
			Array< ::String > _g31 = priorities->__get(i).StaticCast< Array< ::String > >();		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(125)
			while((true)){
				HX_STACK_LINE(125)
				if ((!(((_g21 < _g31->length))))){
					HX_STACK_LINE(125)
					break;
				}
				HX_STACK_LINE(125)
				::String x = _g31->__get(_g21);		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(125)
				++(_g21);
				HX_STACK_LINE(126)
				this->opPriority->set(x,i);
				HX_STACK_LINE(127)
				if (((i == (int)9))){
					HX_STACK_LINE(127)
					this->opRightAssoc->set(x,true);
				}
			}
		}
	}
	HX_STACK_LINE(129)
	{
		HX_STACK_LINE(129)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(129)
		Array< ::String > _g11 = Array_obj< ::String >::__new().Add(HX_CSTRING("!")).Add(HX_CSTRING("++")).Add(HX_CSTRING("--")).Add(HX_CSTRING("-")).Add(HX_CSTRING("~"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(129)
		while((true)){
			HX_STACK_LINE(129)
			if ((!(((_g3 < _g11->length))))){
				HX_STACK_LINE(129)
				break;
			}
			HX_STACK_LINE(129)
			::String x = _g11->__get(_g3);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(129)
			++(_g3);
			HX_STACK_LINE(130)
			this->unops->set(x,(bool((x == HX_CSTRING("++"))) || bool((x == HX_CSTRING("--")))));
		}
	}
}
;
	return null();
}

//Parser_obj::~Parser_obj() { }

Dynamic Parser_obj::__CreateEmpty() { return  new Parser_obj; }
hx::ObjectPtr< Parser_obj > Parser_obj::__new()
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parser_obj > result = new Parser_obj();
	result->__construct();
	return result;}

Void Parser_obj::error( ::hscript::Error err,int pmin,int pmax){
{
		HX_STACK_FRAME("hscript.Parser","error",0x9bb1b3f4,"hscript.Parser.error","hscript/Parser.hx",137,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
		HX_STACK_ARG(pmin,"pmin")
		HX_STACK_ARG(pmax,"pmax")
		HX_STACK_LINE(137)
		HX_STACK_DO_THROW(err);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,error,(void))

Void Parser_obj::invalidChar( int c){
{
		HX_STACK_FRAME("hscript.Parser","invalidChar",0x0ae4fe99,"hscript.Parser.invalidChar","hscript/Parser.hx",142,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(142)
		::hscript::Error err = ::hscript::Error_obj::EInvalidChar(c);		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(142)
		HX_STACK_DO_THROW(err);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,invalidChar,(void))

::hscript::Expr Parser_obj::parseString( ::String s){
	HX_STACK_FRAME("hscript.Parser","parseString",0xed832690,"hscript.Parser.parseString","hscript/Parser.hx",145,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(146)
	this->line = (int)1;
	HX_STACK_LINE(147)
	::haxe::io::StringInput _g = ::haxe::io::StringInput_obj::__new(s);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(147)
	return this->parse(_g);
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseString,return )

::hscript::Expr Parser_obj::parse( ::haxe::io::Input s){
	HX_STACK_FRAME("hscript.Parser","parse",0xe5dd785f,"hscript.Parser.parse","hscript/Parser.hx",150,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(157)
	::haxe::ds::GenericStack_hscript_Token _g = ::haxe::ds::GenericStack_hscript_Token_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(157)
	this->tokens = _g;
	HX_STACK_LINE(161)
	this->_char = (int)-1;
	HX_STACK_LINE(162)
	this->input = s;
	HX_STACK_LINE(163)
	Array< bool > _g1 = Array_obj< bool >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(163)
	this->ops = _g1;
	HX_STACK_LINE(164)
	Array< bool > _g2 = Array_obj< bool >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(164)
	this->idents = _g2;
	HX_STACK_LINE(165)
	{
		HX_STACK_LINE(165)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(165)
		int _g3 = this->opChars.length;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(165)
		while((true)){
			HX_STACK_LINE(165)
			if ((!(((_g11 < _g3))))){
				HX_STACK_LINE(165)
				break;
			}
			HX_STACK_LINE(165)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(166)
			Dynamic _g31 = this->opChars.charCodeAt(i);		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(166)
			this->ops[_g31] = true;
		}
	}
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(167)
		int _g3 = this->identChars.length;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			if ((!(((_g11 < _g3))))){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(168)
			Dynamic _g4 = this->identChars.charCodeAt(i);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(168)
			this->idents[_g4] = true;
		}
	}
	HX_STACK_LINE(169)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(170)
	while((true)){
		HX_STACK_LINE(171)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(172)
		if (((tk == ::hscript::Token_obj::TEof))){
			HX_STACK_LINE(172)
			break;
		}
		HX_STACK_LINE(173)
		{
			HX_STACK_LINE(173)
			::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(173)
			::haxe::ds::GenericCell_hscript_Token _g5 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(173)
			_this->head = _g5;
		}
		HX_STACK_LINE(174)
		::hscript::Expr _g6 = this->parseFullExpr();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(174)
		a->push(_g6);
	}
	HX_STACK_LINE(176)
	if (((a->length == (int)1))){
		HX_STACK_LINE(176)
		return a->__get((int)0).StaticCast< ::hscript::Expr >();
	}
	else{
		HX_STACK_LINE(176)
		::hscript::Expr e = ::hscript::Expr_obj::EBlock(a);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(176)
		return e;
	}
	HX_STACK_LINE(176)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )

Dynamic Parser_obj::unexpected( ::hscript::Token tk){
	HX_STACK_FRAME("hscript.Parser","unexpected",0xb7770e25,"hscript.Parser.unexpected","hscript/Parser.hx",179,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tk,"tk")
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		::String _g = this->tokenString(tk);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		::hscript::Error err = ::hscript::Error_obj::EUnexpected(_g);		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(180)
		HX_STACK_DO_THROW(err);
	}
	HX_STACK_LINE(181)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

Void Parser_obj::push( ::hscript::Token tk){
{
		HX_STACK_FRAME("hscript.Parser","push",0xe0f2532e,"hscript.Parser.push","hscript/Parser.hx",190,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tk,"tk")
		HX_STACK_LINE(190)
		::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(190)
		::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		_this->head = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

Void Parser_obj::ensure( ::hscript::Token tk){
{
		HX_STACK_FRAME("hscript.Parser","ensure",0x52df3412,"hscript.Parser.ensure","hscript/Parser.hx",194,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tk,"tk")
		HX_STACK_LINE(195)
		::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(196)
		if (((t != tk))){
			HX_STACK_LINE(196)
			this->unexpected(t);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensure,(void))

::hscript::Expr Parser_obj::expr( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","expr",0xd9af3e89,"hscript.Parser.expr","hscript/Parser.hx",203,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(203)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expr,return )

int Parser_obj::pmin( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","pmin",0xe0ec3876,"hscript.Parser.pmin","hscript/Parser.hx",211,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(211)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmin,return )

int Parser_obj::pmax( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","pmax",0xe0ec3188,"hscript.Parser.pmax","hscript/Parser.hx",219,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(219)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmax,return )

::hscript::Expr Parser_obj::mk( ::hscript::Expr e,Dynamic pmin,Dynamic pmax){
	HX_STACK_FRAME("hscript.Parser","mk",0xd828e3b2,"hscript.Parser.mk","hscript/Parser.hx",229,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(pmin,"pmin")
	HX_STACK_ARG(pmax,"pmax")
	HX_STACK_LINE(229)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,mk,return )

bool Parser_obj::isBlock( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","isBlock",0x99f5642f,"hscript.Parser.isBlock","hscript/Parser.hx",234,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(234)
	switch( (int)(e->__Index())){
		case (int)4: case (int)21: {
			HX_STACK_LINE(235)
			return true;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(234)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(236)
			return this->isBlock(e1);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(234)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(237)
			if (((e1 != null()))){
				HX_STACK_LINE(237)
				return this->isBlock(e1);
			}
			else{
				HX_STACK_LINE(237)
				return false;
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(234)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(234)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(238)
			if (((e2 != null()))){
				HX_STACK_LINE(238)
				return this->isBlock(e2);
			}
			else{
				HX_STACK_LINE(238)
				return this->isBlock(e1);
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(234)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			return this->isBlock(e1);
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(234)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(234)
			bool prefix = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(prefix,"prefix");
			HX_STACK_LINE(240)
			if ((!(prefix))){
				HX_STACK_LINE(240)
				return this->isBlock(e1);
			}
			else{
				HX_STACK_LINE(240)
				return false;
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(234)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(241)
			return this->isBlock(e1);
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(234)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(242)
			return this->isBlock(e1);
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(234)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(243)
			if (((e1 != null()))){
				HX_STACK_LINE(243)
				return this->isBlock(e1);
			}
			else{
				HX_STACK_LINE(243)
				return false;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(244)
			return false;
		}
	}
	HX_STACK_LINE(234)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isBlock,return )

::hscript::Expr Parser_obj::parseFullExpr( ){
	HX_STACK_FRAME("hscript.Parser","parseFullExpr",0x2c8eb1e3,"hscript.Parser.parseFullExpr","hscript/Parser.hx",248,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(250)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(251)
	if (((bool((tk != ::hscript::Token_obj::TSemicolon)) && bool((tk != ::hscript::Token_obj::TEof))))){
		HX_STACK_LINE(252)
		if ((this->isBlock(e))){
			HX_STACK_LINE(253)
			::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(253)
			::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(253)
			_this->head = _g;
		}
		else{
			HX_STACK_LINE(255)
			this->unexpected(tk);
		}
	}
	HX_STACK_LINE(257)
	return e;
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFullExpr,return )

::hscript::Expr Parser_obj::parseObject( Dynamic p1){
	HX_STACK_FRAME("hscript.Parser","parseObject",0xf1927c7e,"hscript.Parser.parseObject","hscript/Parser.hx",260,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_LINE(262)
	Dynamic fl = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(fl,"fl");
	HX_STACK_LINE(263)
	while((true)){
		HX_STACK_LINE(264)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(265)
		::String id = null();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(266)
		int _switch_1 = (tk->__Index());
		if (  ( _switch_1==(int)2)){
			HX_STACK_LINE(266)
			::String i = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(267)
			id = i;
		}
		else if (  ( _switch_1==(int)1)){
			HX_STACK_LINE(266)
			::hscript::Const c = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(268)
			{
				HX_STACK_LINE(269)
				if ((!(this->allowJSON))){
					HX_STACK_LINE(270)
					this->unexpected(tk);
				}
				HX_STACK_LINE(271)
				switch( (int)(c->__Index())){
					case (int)2: {
						HX_STACK_LINE(271)
						::String s = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(272)
						id = s;
					}
					;break;
					default: {
						HX_STACK_LINE(273)
						this->unexpected(tk);
					}
				}
			}
		}
		else if (  ( _switch_1==(int)7)){
			HX_STACK_LINE(276)
			break;
		}
		else  {
			HX_STACK_LINE(278)
			this->unexpected(tk);
		}
;
;
		HX_STACK_LINE(280)
		{
			HX_STACK_LINE(280)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(280)
			if (((t != ::hscript::Token_obj::TDoubleDot))){
				HX_STACK_LINE(280)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(281)
		::hscript::Expr _g = this->parseExpr();		HX_STACK_VAR(_g,"_g");
		struct _Function_2_1{
			inline static Dynamic Block( ::hscript::Expr &_g,::String &id){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",281,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , id,false);
					__result->Add(HX_CSTRING("e") , _g,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(281)
		Dynamic _g1 = _Function_2_1::Block(_g,id);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(281)
		fl->__Field(HX_CSTRING("push"),true)(_g1);
		HX_STACK_LINE(282)
		::hscript::Token _g2 = this->token();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(282)
		tk = _g2;
		HX_STACK_LINE(283)
		int _switch_2 = (tk->__Index());
		if (  ( _switch_2==(int)7)){
			HX_STACK_LINE(285)
			break;
		}
		else if (  ( _switch_2==(int)9)){
		}
		else  {
			HX_STACK_LINE(288)
			this->unexpected(tk);
		}
;
;
	}
	HX_STACK_LINE(291)
	::hscript::Expr _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(291)
	{
		HX_STACK_LINE(291)
		::hscript::Expr e = ::hscript::Expr_obj::EObject(fl);		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(291)
		_g3 = e;
	}
	HX_STACK_LINE(291)
	return this->parseExprNext(_g3);
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseObject,return )

::hscript::Expr Parser_obj::parseExpr( ){
	HX_STACK_FRAME("hscript.Parser","parseExpr",0x8f01bd34,"hscript.Parser.parseExpr","hscript/Parser.hx",294,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(295)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(299)
	switch( (int)(tk->__Index())){
		case (int)2: {
			HX_STACK_LINE(299)
			::String id = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(300)
			{
				HX_STACK_LINE(301)
				::hscript::Expr e = this->parseStructure(id);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(302)
				if (((e == null()))){
					HX_STACK_LINE(303)
					::hscript::Expr _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(303)
					{
						HX_STACK_LINE(303)
						::hscript::Expr e1 = ::hscript::Expr_obj::EIdent(id);		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(303)
						_g = e1;
					}
					HX_STACK_LINE(303)
					e = _g;
				}
				HX_STACK_LINE(304)
				return this->parseExprNext(e);
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(299)
			::hscript::Const c = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(305)
			{
				HX_STACK_LINE(306)
				::hscript::Expr _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					::hscript::Expr e = ::hscript::Expr_obj::EConst(c);		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(306)
					_g1 = e;
				}
				HX_STACK_LINE(306)
				return this->parseExprNext(_g1);
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(308)
			::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(309)
			{
				HX_STACK_LINE(309)
				::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(309)
				if (((t != ::hscript::Token_obj::TPClose))){
					HX_STACK_LINE(309)
					this->unexpected(t);
				}
			}
			HX_STACK_LINE(310)
			::hscript::Expr _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				::hscript::Expr e1 = ::hscript::Expr_obj::EParent(e);		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(310)
				_g2 = e1;
			}
			HX_STACK_LINE(310)
			return this->parseExprNext(_g2);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(312)
			::hscript::Token _g3 = this->token();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(312)
			tk = _g3;
			HX_STACK_LINE(313)
			switch( (int)(tk->__Index())){
				case (int)7: {
					HX_STACK_LINE(315)
					::hscript::Expr _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(315)
					{
						HX_STACK_LINE(315)
						::hscript::Expr e = ::hscript::Expr_obj::EObject(Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(315)
						_g4 = e;
					}
					HX_STACK_LINE(315)
					return this->parseExprNext(_g4);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(317)
					::hscript::Token tk2 = this->token();		HX_STACK_VAR(tk2,"tk2");
					HX_STACK_LINE(318)
					{
						HX_STACK_LINE(318)
						::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(318)
						::haxe::ds::GenericCell_hscript_Token _g5 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk2,_this->head);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(318)
						_this->head = _g5;
					}
					HX_STACK_LINE(319)
					{
						HX_STACK_LINE(319)
						::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(319)
						::haxe::ds::GenericCell_hscript_Token _g6 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(319)
						_this->head = _g6;
					}
					HX_STACK_LINE(320)
					switch( (int)(tk2->__Index())){
						case (int)14: {
							HX_STACK_LINE(322)
							::hscript::Expr _g7 = this->parseObject((int)0);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(322)
							return this->parseExprNext(_g7);
						}
						;break;
						default: {
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(313)
					::hscript::Const c = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(326)
					if ((this->allowJSON)){
						HX_STACK_LINE(327)
						switch( (int)(c->__Index())){
							case (int)2: {
								HX_STACK_LINE(329)
								::hscript::Token tk2 = this->token();		HX_STACK_VAR(tk2,"tk2");
								HX_STACK_LINE(330)
								{
									HX_STACK_LINE(330)
									::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(330)
									::haxe::ds::GenericCell_hscript_Token _g8 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk2,_this->head);		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(330)
									_this->head = _g8;
								}
								HX_STACK_LINE(331)
								{
									HX_STACK_LINE(331)
									::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(331)
									::haxe::ds::GenericCell_hscript_Token _g9 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(331)
									_this->head = _g9;
								}
								HX_STACK_LINE(332)
								switch( (int)(tk2->__Index())){
									case (int)14: {
										HX_STACK_LINE(334)
										::hscript::Expr _g10 = this->parseObject((int)0);		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(334)
										return this->parseExprNext(_g10);
									}
									;break;
									default: {
									}
								}
							}
							;break;
							default: {
								HX_STACK_LINE(338)
								::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(338)
								::haxe::ds::GenericCell_hscript_Token _g11 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(338)
								_this->head = _g11;
							}
						}
					}
					else{
						HX_STACK_LINE(341)
						::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(341)
						::haxe::ds::GenericCell_hscript_Token _g12 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(341)
						_this->head = _g12;
					}
				}
				;break;
				default: {
					HX_STACK_LINE(343)
					::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(343)
					::haxe::ds::GenericCell_hscript_Token _g13 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(343)
					_this->head = _g13;
				}
			}
			HX_STACK_LINE(345)
			Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(346)
			while((true)){
				HX_STACK_LINE(347)
				::hscript::Expr _g14 = this->parseFullExpr();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(347)
				a->push(_g14);
				HX_STACK_LINE(348)
				::hscript::Token _g15 = this->token();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(348)
				tk = _g15;
				HX_STACK_LINE(349)
				if (((tk == ::hscript::Token_obj::TBrClose))){
					HX_STACK_LINE(350)
					break;
				}
				HX_STACK_LINE(351)
				{
					HX_STACK_LINE(351)
					::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(351)
					::haxe::ds::GenericCell_hscript_Token _g16 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(351)
					_this->head = _g16;
				}
			}
			HX_STACK_LINE(353)
			{
				HX_STACK_LINE(353)
				::hscript::Expr e = ::hscript::Expr_obj::EBlock(a);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(353)
				return e;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(299)
			::String op = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(354)
			{
				HX_STACK_LINE(355)
				if ((this->unops->exists(op))){
					HX_STACK_LINE(356)
					::hscript::Expr _g17 = this->parseExpr();		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(356)
					return this->makeUnop(op,_g17);
				}
				HX_STACK_LINE(357)
				return this->unexpected(tk);
			}
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(359)
			Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(360)
			::hscript::Token _g18 = this->token();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(360)
			tk = _g18;
			HX_STACK_LINE(361)
			while((true)){
				HX_STACK_LINE(361)
				if ((!(((tk != ::hscript::Token_obj::TBkClose))))){
					HX_STACK_LINE(361)
					break;
				}
				HX_STACK_LINE(362)
				{
					HX_STACK_LINE(362)
					::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(362)
					::haxe::ds::GenericCell_hscript_Token _g19 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(362)
					_this->head = _g19;
				}
				HX_STACK_LINE(363)
				::hscript::Expr _g20 = this->parseExpr();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(363)
				a->push(_g20);
				HX_STACK_LINE(364)
				::hscript::Token _g21 = this->token();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(364)
				tk = _g21;
				HX_STACK_LINE(365)
				if (((tk == ::hscript::Token_obj::TComma))){
					HX_STACK_LINE(366)
					::hscript::Token _g22 = this->token();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(366)
					tk = _g22;
				}
			}
			HX_STACK_LINE(368)
			::hscript::Expr _g23;		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(368)
			{
				HX_STACK_LINE(368)
				::hscript::Expr e = ::hscript::Expr_obj::EArrayDecl(a);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(368)
				_g23 = e;
			}
			HX_STACK_LINE(368)
			return this->parseExprNext(_g23);
		}
		;break;
		default: {
			HX_STACK_LINE(370)
			return this->unexpected(tk);
		}
	}
	HX_STACK_LINE(299)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseExpr,return )

::hscript::Expr Parser_obj::makeUnop( ::String op,::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","makeUnop",0x60b6401c,"hscript.Parser.makeUnop","hscript/Parser.hx",375,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(375)
	switch( (int)(e->__Index())){
		case (int)6: {
			HX_STACK_LINE(375)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(375)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(375)
			::String bop = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(bop,"bop");
			HX_STACK_LINE(376)
			{
				HX_STACK_LINE(376)
				::hscript::Expr _g = this->makeUnop(op,e1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(376)
				::hscript::Expr e3 = ::hscript::Expr_obj::EBinop(bop,_g,e2);		HX_STACK_VAR(e3,"e3");
				HX_STACK_LINE(376)
				return e3;
			}
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(375)
			::hscript::Expr e3 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(375)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(375)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(377)
			{
				HX_STACK_LINE(377)
				::hscript::Expr _g1 = this->makeUnop(op,e1);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(377)
				::hscript::Expr e4 = ::hscript::Expr_obj::ETernary(_g1,e2,e3);		HX_STACK_VAR(e4,"e4");
				HX_STACK_LINE(377)
				return e4;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(378)
			::hscript::Expr e1 = ::hscript::Expr_obj::EUnop(op,true,e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(378)
			return e1;
		}
	}
	HX_STACK_LINE(375)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,makeUnop,return )

::hscript::Expr Parser_obj::makeBinop( ::String op,::hscript::Expr e1,::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","makeBinop",0x4ad5ff06,"hscript.Parser.makeBinop","hscript/Parser.hx",383,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(383)
	switch( (int)(e->__Index())){
		case (int)6: {
			HX_STACK_LINE(383)
			::hscript::Expr e3 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(383)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(383)
			::String op2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(op2,"op2");
			HX_STACK_LINE(384)
			{
				HX_STACK_LINE(385)
				Dynamic _g = this->opPriority->get(op);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(385)
				Dynamic _g1 = this->opPriority->get(op2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(385)
				if (((  (((_g <= _g1))) ? bool(!(this->opRightAssoc->exists(op))) : bool(false) ))){
					HX_STACK_LINE(386)
					::hscript::Expr _g2 = this->makeBinop(op,e1,e2);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(386)
					::hscript::Expr e4 = ::hscript::Expr_obj::EBinop(op2,_g2,e3);		HX_STACK_VAR(e4,"e4");
					HX_STACK_LINE(386)
					return e4;
				}
				else{
					HX_STACK_LINE(388)
					::hscript::Expr e4 = ::hscript::Expr_obj::EBinop(op,e1,e);		HX_STACK_VAR(e4,"e4");
					HX_STACK_LINE(388)
					return e4;
				}
			}
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(383)
			::hscript::Expr e4 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e4,"e4");
			HX_STACK_LINE(383)
			::hscript::Expr e3 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(383)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(390)
			if ((this->opRightAssoc->exists(op))){
				HX_STACK_LINE(391)
				::hscript::Expr e5 = ::hscript::Expr_obj::EBinop(op,e1,e);		HX_STACK_VAR(e5,"e5");
				HX_STACK_LINE(391)
				return e5;
			}
			else{
				HX_STACK_LINE(393)
				::hscript::Expr _g3 = this->makeBinop(op,e1,e2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(393)
				::hscript::Expr e5 = ::hscript::Expr_obj::ETernary(_g3,e3,e4);		HX_STACK_VAR(e5,"e5");
				HX_STACK_LINE(393)
				return e5;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(395)
			::hscript::Expr e2 = ::hscript::Expr_obj::EBinop(op,e1,e);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(395)
			return e2;
		}
	}
	HX_STACK_LINE(383)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,makeBinop,return )

::hscript::Expr Parser_obj::parseStructure( ::String id){
	HX_STACK_FRAME("hscript.Parser","parseStructure",0x237837d4,"hscript.Parser.parseStructure","hscript/Parser.hx",403,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(403)
	::String _switch_3 = (id);
	if (  ( _switch_3==HX_CSTRING("if"))){
		HX_STACK_LINE(405)
		::hscript::Expr cond = this->parseExpr();		HX_STACK_VAR(cond,"cond");
		HX_STACK_LINE(406)
		::hscript::Expr e1 = this->parseExpr();		HX_STACK_VAR(e1,"e1");
		HX_STACK_LINE(407)
		::hscript::Expr e2 = null();		HX_STACK_VAR(e2,"e2");
		HX_STACK_LINE(408)
		bool semic = false;		HX_STACK_VAR(semic,"semic");
		HX_STACK_LINE(409)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(410)
		if (((tk == ::hscript::Token_obj::TSemicolon))){
			HX_STACK_LINE(411)
			semic = true;
			HX_STACK_LINE(412)
			::hscript::Token _g = this->token();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(412)
			tk = _g;
		}
		HX_STACK_LINE(414)
		::hscript::Token _g1 = ::hscript::Token_obj::TId(HX_CSTRING("else"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(414)
		if ((::Type_obj::enumEq(tk,_g1))){
			HX_STACK_LINE(415)
			::hscript::Expr _g2 = this->parseExpr();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(415)
			e2 = _g2;
		}
		else{
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(417)
				::haxe::ds::GenericCell_hscript_Token _g3 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(417)
				_this->head = _g3;
			}
			HX_STACK_LINE(418)
			if ((semic)){
				HX_STACK_LINE(418)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(418)
				::haxe::ds::GenericCell_hscript_Token _g4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(::hscript::Token_obj::TSemicolon,_this->head);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(418)
				_this->head = _g4;
			}
		}
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			::hscript::Expr e = ::hscript::Expr_obj::EIf(cond,e1,e2);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(420)
			return e;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("var"))){
		HX_STACK_LINE(422)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(423)
		::String ident = null();		HX_STACK_VAR(ident,"ident");
		HX_STACK_LINE(424)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(424)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(425)
				ident = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(426)
				this->unexpected(tk);
			}
		}
		HX_STACK_LINE(428)
		::hscript::Token _g5 = this->token();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(428)
		tk = _g5;
		HX_STACK_LINE(429)
		::hscript::CType t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(430)
		if (((bool((tk == ::hscript::Token_obj::TDoubleDot)) && bool(this->allowTypes)))){
			HX_STACK_LINE(431)
			::hscript::CType _g6 = this->parseType();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(431)
			t = _g6;
			HX_STACK_LINE(432)
			::hscript::Token _g7 = this->token();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(432)
			tk = _g7;
		}
		HX_STACK_LINE(434)
		::hscript::Expr e = null();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(435)
		::hscript::Token _g8 = ::hscript::Token_obj::TOp(HX_CSTRING("="));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(435)
		if ((::Type_obj::enumEq(tk,_g8))){
			HX_STACK_LINE(436)
			::hscript::Expr _g9 = this->parseExpr();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(436)
			e = _g9;
		}
		else{
			HX_STACK_LINE(438)
			::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(438)
			::haxe::ds::GenericCell_hscript_Token _g10 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(438)
			_this->head = _g10;
		}
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			::hscript::Expr e1 = ::hscript::Expr_obj::EVar(ident,t,e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(439)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("while"))){
		HX_STACK_LINE(441)
		::hscript::Expr econd = this->parseExpr();		HX_STACK_VAR(econd,"econd");
		HX_STACK_LINE(442)
		::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(443)
		{
			HX_STACK_LINE(443)
			::hscript::Expr e1 = ::hscript::Expr_obj::EWhile(econd,e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(443)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("for"))){
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(445)
			if (((t != ::hscript::Token_obj::TPOpen))){
				HX_STACK_LINE(445)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(446)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(447)
		::String vname = null();		HX_STACK_VAR(vname,"vname");
		HX_STACK_LINE(448)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(448)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(449)
				vname = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(450)
				this->unexpected(tk);
			}
		}
		HX_STACK_LINE(452)
		::hscript::Token _g11 = this->token();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(452)
		tk = _g11;
		HX_STACK_LINE(453)
		::hscript::Token _g12 = ::hscript::Token_obj::TId(HX_CSTRING("in"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(453)
		if ((!(::Type_obj::enumEq(tk,_g12)))){
			HX_STACK_LINE(453)
			this->unexpected(tk);
		}
		HX_STACK_LINE(454)
		::hscript::Expr eiter = this->parseExpr();		HX_STACK_VAR(eiter,"eiter");
		HX_STACK_LINE(455)
		{
			HX_STACK_LINE(455)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(455)
			if (((t != ::hscript::Token_obj::TPClose))){
				HX_STACK_LINE(455)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(456)
		::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(457)
		{
			HX_STACK_LINE(457)
			::hscript::Expr e1 = ::hscript::Expr_obj::EFor(vname,eiter,e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(457)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("break"))){
		HX_STACK_LINE(458)
		return ::hscript::Expr_obj::EBreak;
	}
	else if (  ( _switch_3==HX_CSTRING("continue"))){
		HX_STACK_LINE(459)
		return ::hscript::Expr_obj::EContinue;
	}
	else if (  ( _switch_3==HX_CSTRING("else"))){
		HX_STACK_LINE(460)
		::hscript::Token _g13 = ::hscript::Token_obj::TId(id);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(460)
		return this->unexpected(_g13);
	}
	else if (  ( _switch_3==HX_CSTRING("function"))){
		HX_STACK_LINE(462)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(463)
		::String name = null();		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(464)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(464)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(465)
				name = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(466)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(466)
				::haxe::ds::GenericCell_hscript_Token _g14 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(466)
				_this->head = _g14;
			}
		}
		HX_STACK_LINE(468)
		{
			HX_STACK_LINE(468)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(468)
			if (((t != ::hscript::Token_obj::TPOpen))){
				HX_STACK_LINE(468)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(469)
		Dynamic args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(470)
		::hscript::Token _g15 = this->token();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(470)
		tk = _g15;
		HX_STACK_LINE(471)
		if (((tk != ::hscript::Token_obj::TPClose))){
			HX_STACK_LINE(472)
			bool arg = true;		HX_STACK_VAR(arg,"arg");
			HX_STACK_LINE(473)
			while((true)){
				HX_STACK_LINE(473)
				if ((!(arg))){
					HX_STACK_LINE(473)
					break;
				}
				HX_STACK_LINE(474)
				::String name1 = null();		HX_STACK_VAR(name1,"name1");
				HX_STACK_LINE(475)
				switch( (int)(tk->__Index())){
					case (int)2: {
						HX_STACK_LINE(475)
						::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
						HX_STACK_LINE(476)
						name1 = id1;
					}
					;break;
					default: {
						HX_STACK_LINE(477)
						this->unexpected(tk);
					}
				}
				HX_STACK_LINE(479)
				::hscript::Token _g16 = this->token();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(479)
				tk = _g16;
				HX_STACK_LINE(480)
				::hscript::CType t = null();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(481)
				if (((bool((tk == ::hscript::Token_obj::TDoubleDot)) && bool(this->allowTypes)))){
					HX_STACK_LINE(482)
					::hscript::CType _g17 = this->parseType();		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(482)
					t = _g17;
					HX_STACK_LINE(483)
					::hscript::Token _g18 = this->token();		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(483)
					tk = _g18;
				}
				struct _Function_4_1{
					inline static Dynamic Block( ::hscript::CType &t,::String &name1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",485,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("name") , name1,false);
							__result->Add(HX_CSTRING("t") , t,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(485)
				args->__Field(HX_CSTRING("push"),true)(_Function_4_1::Block(t,name1));
				HX_STACK_LINE(486)
				switch( (int)(tk->__Index())){
					case (int)9: {
						HX_STACK_LINE(488)
						::hscript::Token _g19 = this->token();		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(488)
						tk = _g19;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(490)
						arg = false;
					}
					;break;
					default: {
						HX_STACK_LINE(492)
						this->unexpected(tk);
					}
				}
			}
		}
		HX_STACK_LINE(496)
		::hscript::CType ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(497)
		if ((this->allowTypes)){
			HX_STACK_LINE(498)
			::hscript::Token _g20 = this->token();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(498)
			tk = _g20;
			HX_STACK_LINE(499)
			if (((tk != ::hscript::Token_obj::TDoubleDot))){
				HX_STACK_LINE(500)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(500)
				::haxe::ds::GenericCell_hscript_Token _g21 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(500)
				_this->head = _g21;
			}
			else{
				HX_STACK_LINE(502)
				::hscript::CType _g22 = this->parseType();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(502)
				ret = _g22;
			}
		}
		HX_STACK_LINE(504)
		::hscript::Expr body = this->parseExpr();		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(505)
		{
			HX_STACK_LINE(505)
			::hscript::Expr e = ::hscript::Expr_obj::EFunction(args,body,name,ret);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(505)
			return e;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("return"))){
		HX_STACK_LINE(507)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(508)
			::haxe::ds::GenericCell_hscript_Token _g23 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(508)
			_this->head = _g23;
		}
		HX_STACK_LINE(509)
		::hscript::Expr e;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(509)
		if (((tk == ::hscript::Token_obj::TSemicolon))){
			HX_STACK_LINE(509)
			e = null();
		}
		else{
			HX_STACK_LINE(509)
			e = this->parseExpr();
		}
		HX_STACK_LINE(510)
		{
			HX_STACK_LINE(510)
			::hscript::Expr e1 = ::hscript::Expr_obj::EReturn(e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(510)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("new"))){
		HX_STACK_LINE(512)
		Array< ::String > a = Array_obj< ::String >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(513)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(514)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(514)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(515)
				a->push(id1);
			}
			;break;
			default: {
				HX_STACK_LINE(516)
				this->unexpected(tk);
			}
		}
		HX_STACK_LINE(518)
		bool next = true;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(519)
		while((true)){
			HX_STACK_LINE(519)
			if ((!(next))){
				HX_STACK_LINE(519)
				break;
			}
			HX_STACK_LINE(520)
			::hscript::Token _g24 = this->token();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(520)
			tk = _g24;
			HX_STACK_LINE(521)
			switch( (int)(tk->__Index())){
				case (int)8: {
					HX_STACK_LINE(523)
					::hscript::Token _g25 = this->token();		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(523)
					tk = _g25;
					HX_STACK_LINE(524)
					switch( (int)(tk->__Index())){
						case (int)2: {
							HX_STACK_LINE(524)
							::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
							HX_STACK_LINE(525)
							a->push(id1);
						}
						;break;
						default: {
							HX_STACK_LINE(526)
							this->unexpected(tk);
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(529)
					next = false;
				}
				;break;
				default: {
					HX_STACK_LINE(531)
					this->unexpected(tk);
				}
			}
		}
		HX_STACK_LINE(534)
		Array< ::Dynamic > args = this->parseExprList(::hscript::Token_obj::TPClose);		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(535)
		{
			HX_STACK_LINE(535)
			::String _g26 = a->join(HX_CSTRING("."));		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(535)
			::hscript::Expr e = ::hscript::Expr_obj::ENew(_g26,args);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(535)
			return e;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("throw"))){
		HX_STACK_LINE(537)
		::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(538)
		{
			HX_STACK_LINE(538)
			::hscript::Expr e1 = ::hscript::Expr_obj::EThrow(e);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(538)
			return e1;
		}
	}
	else if (  ( _switch_3==HX_CSTRING("try"))){
		HX_STACK_LINE(540)
		::hscript::Expr e = this->parseExpr();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(541)
		::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(542)
		::hscript::Token _g27 = ::hscript::Token_obj::TId(HX_CSTRING("catch"));		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(542)
		if ((!(::Type_obj::enumEq(tk,_g27)))){
			HX_STACK_LINE(542)
			this->unexpected(tk);
		}
		HX_STACK_LINE(543)
		{
			HX_STACK_LINE(543)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(543)
			if (((t != ::hscript::Token_obj::TPOpen))){
				HX_STACK_LINE(543)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(544)
		::hscript::Token _g28 = this->token();		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(544)
		tk = _g28;
		HX_STACK_LINE(545)
		::String vname;		HX_STACK_VAR(vname,"vname");
		HX_STACK_LINE(545)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(545)
				::String id1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(546)
				vname = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(547)
				vname = this->unexpected(tk);
			}
		}
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(549)
			if (((t != ::hscript::Token_obj::TDoubleDot))){
				HX_STACK_LINE(549)
				this->unexpected(t);
			}
		}
		HX_STACK_LINE(550)
		::hscript::CType t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(551)
		if ((this->allowTypes)){
			HX_STACK_LINE(552)
			::hscript::CType _g29 = this->parseType();		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(552)
			t = _g29;
		}
		else{
			HX_STACK_LINE(554)
			::hscript::Token _g30 = this->token();		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(554)
			tk = _g30;
			HX_STACK_LINE(555)
			::hscript::Token _g31 = ::hscript::Token_obj::TId(HX_CSTRING("Dynamic"));		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(555)
			if ((!(::Type_obj::enumEq(tk,_g31)))){
				HX_STACK_LINE(555)
				this->unexpected(tk);
			}
		}
		HX_STACK_LINE(557)
		{
			HX_STACK_LINE(557)
			::hscript::Token t1 = this->token();		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(557)
			if (((t1 != ::hscript::Token_obj::TPClose))){
				HX_STACK_LINE(557)
				this->unexpected(t1);
			}
		}
		HX_STACK_LINE(558)
		::hscript::Expr ec = this->parseExpr();		HX_STACK_VAR(ec,"ec");
		HX_STACK_LINE(559)
		{
			HX_STACK_LINE(559)
			::hscript::Expr e1 = ::hscript::Expr_obj::ETry(e,vname,t,ec);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(559)
			return e1;
		}
	}
	else  {
		HX_STACK_LINE(561)
		return null();
	}
;
;
	HX_STACK_LINE(403)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseStructure,return )

::hscript::Expr Parser_obj::parseExprNext( ::hscript::Expr e1){
	HX_STACK_FRAME("hscript.Parser","parseExprNext",0x83d61847,"hscript.Parser.parseExprNext","hscript/Parser.hx",565,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e1,"e1")
	HX_STACK_LINE(566)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(567)
	switch( (int)(tk->__Index())){
		case (int)3: {
			HX_STACK_LINE(567)
			::String op = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(568)
			{
				HX_STACK_LINE(569)
				if ((this->unops->get(op))){
					struct _Function_4_1{
						inline static bool Block( ::hscript::Expr &e1){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",570,0x98735743)
							{
								HX_STACK_LINE(570)
								switch( (int)(e1->__Index())){
									case (int)3: {
										HX_STACK_LINE(570)
										return true;
									}
									;break;
									default: {
										HX_STACK_LINE(570)
										return false;
									}
								}
							}
							return null();
						}
					};
					HX_STACK_LINE(570)
					if (((  ((!(this->isBlock(e1)))) ? bool(_Function_4_1::Block(e1)) : bool(true) ))){
						HX_STACK_LINE(571)
						{
							HX_STACK_LINE(571)
							::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(571)
							::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(571)
							_this->head = _g;
						}
						HX_STACK_LINE(572)
						return e1;
					}
					HX_STACK_LINE(574)
					::hscript::Expr _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(574)
					{
						HX_STACK_LINE(574)
						::hscript::Expr e = ::hscript::Expr_obj::EUnop(op,false,e1);		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(574)
						_g1 = e;
					}
					HX_STACK_LINE(574)
					return this->parseExprNext(_g1);
				}
				HX_STACK_LINE(576)
				::hscript::Expr _g2 = this->parseExpr();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(576)
				return this->makeBinop(op,e1,_g2);
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(578)
			::hscript::Token _g3 = this->token();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(578)
			tk = _g3;
			HX_STACK_LINE(579)
			::String field = null();		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(580)
			switch( (int)(tk->__Index())){
				case (int)2: {
					HX_STACK_LINE(580)
					::String id = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(581)
					field = id;
				}
				;break;
				default: {
					HX_STACK_LINE(582)
					this->unexpected(tk);
				}
			}
			HX_STACK_LINE(584)
			::hscript::Expr _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(584)
			{
				HX_STACK_LINE(584)
				::hscript::Expr e = ::hscript::Expr_obj::EField(e1,field);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(584)
				_g4 = e;
			}
			HX_STACK_LINE(584)
			return this->parseExprNext(_g4);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(586)
			::hscript::Expr _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(586)
			{
				HX_STACK_LINE(586)
				Array< ::Dynamic > _g5 = this->parseExprList(::hscript::Token_obj::TPClose);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(586)
				::hscript::Expr e = ::hscript::Expr_obj::ECall(e1,_g5);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(586)
				_g6 = e;
			}
			HX_STACK_LINE(586)
			return this->parseExprNext(_g6);
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(588)
			::hscript::Expr e2 = this->parseExpr();		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(589)
			{
				HX_STACK_LINE(589)
				::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(589)
				if (((t != ::hscript::Token_obj::TBkClose))){
					HX_STACK_LINE(589)
					this->unexpected(t);
				}
			}
			HX_STACK_LINE(590)
			::hscript::Expr _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(590)
			{
				HX_STACK_LINE(590)
				::hscript::Expr e = ::hscript::Expr_obj::EArray(e1,e2);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(590)
				_g7 = e;
			}
			HX_STACK_LINE(590)
			return this->parseExprNext(_g7);
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(592)
			::hscript::Expr e2 = this->parseExpr();		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(593)
			{
				HX_STACK_LINE(593)
				::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(593)
				if (((t != ::hscript::Token_obj::TDoubleDot))){
					HX_STACK_LINE(593)
					this->unexpected(t);
				}
			}
			HX_STACK_LINE(594)
			::hscript::Expr e3 = this->parseExpr();		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(595)
			{
				HX_STACK_LINE(595)
				::hscript::Expr e = ::hscript::Expr_obj::ETernary(e1,e2,e3);		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(595)
				return e;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(597)
			{
				HX_STACK_LINE(597)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(597)
				::haxe::ds::GenericCell_hscript_Token _g8 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(597)
				_this->head = _g8;
			}
			HX_STACK_LINE(598)
			return e1;
		}
	}
	HX_STACK_LINE(567)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprNext,return )

::hscript::CType Parser_obj::parseType( ){
	HX_STACK_FRAME("hscript.Parser","parseType",0x98ecb2b9,"hscript.Parser.parseType","hscript/Parser.hx",602,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(603)
	::hscript::Token t = this->token();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(604)
	switch( (int)(t->__Index())){
		case (int)2: {
			HX_STACK_LINE(604)
			::String v = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(605)
			{
				HX_STACK_LINE(606)
				Array< ::String > path = Array_obj< ::String >::__new().Add(v);		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(607)
				while((true)){
					HX_STACK_LINE(608)
					::hscript::Token _g = this->token();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(608)
					t = _g;
					HX_STACK_LINE(609)
					if (((t != ::hscript::Token_obj::TDot))){
						HX_STACK_LINE(610)
						break;
					}
					HX_STACK_LINE(611)
					::hscript::Token _g1 = this->token();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(611)
					t = _g1;
					HX_STACK_LINE(612)
					switch( (int)(t->__Index())){
						case (int)2: {
							HX_STACK_LINE(612)
							::String v1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(614)
							path->push(v1);
						}
						;break;
						default: {
							HX_STACK_LINE(616)
							this->unexpected(t);
						}
					}
				}
				HX_STACK_LINE(619)
				Array< ::Dynamic > params = null();		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(620)
				switch( (int)(t->__Index())){
					case (int)3: {
						HX_STACK_LINE(620)
						::String op = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(op,"op");
						HX_STACK_LINE(622)
						if (((op == HX_CSTRING("<")))){
							HX_STACK_LINE(623)
							params = Array_obj< ::Dynamic >::__new();
							HX_STACK_LINE(624)
							while((true)){
								HX_STACK_LINE(625)
								::hscript::CType _g2 = this->parseType();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(625)
								params->push(_g2);
								HX_STACK_LINE(626)
								::hscript::Token _g3 = this->token();		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(626)
								t = _g3;
								HX_STACK_LINE(627)
								int _switch_4 = (t->__Index());
								if (  ( _switch_4==(int)9)){
									HX_STACK_LINE(628)
									continue;
								}
								else if (  ( _switch_4==(int)3)){
									HX_STACK_LINE(627)
									::String op1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(op1,"op1");
									HX_STACK_LINE(629)
									if (((op1 == HX_CSTRING(">")))){
										HX_STACK_LINE(629)
										break;
									}
								}
								else  {
								}
;
;
								HX_STACK_LINE(632)
								this->unexpected(t);
							}
						}
					}
					;break;
					default: {
						HX_STACK_LINE(636)
						::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(636)
						::haxe::ds::GenericCell_hscript_Token _g4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(t,_this->head);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(636)
						_this->head = _g4;
					}
				}
				HX_STACK_LINE(638)
				::hscript::CType _g5 = ::hscript::CType_obj::CTPath(path,params);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(638)
				return this->parseTypeNext(_g5);
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(640)
			::hscript::CType t1 = this->parseType();		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(641)
			{
				HX_STACK_LINE(641)
				::hscript::Token t2 = this->token();		HX_STACK_VAR(t2,"t2");
				HX_STACK_LINE(641)
				if (((t2 != ::hscript::Token_obj::TPClose))){
					HX_STACK_LINE(641)
					this->unexpected(t2);
				}
			}
			HX_STACK_LINE(642)
			::hscript::CType _g6 = ::hscript::CType_obj::CTParent(t1);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(642)
			return this->parseTypeNext(_g6);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(644)
			Dynamic fields = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(645)
			while((true)){
				HX_STACK_LINE(646)
				::hscript::Token _g7 = this->token();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(646)
				t = _g7;
				HX_STACK_LINE(647)
				int _switch_5 = (t->__Index());
				if (  ( _switch_5==(int)7)){
					HX_STACK_LINE(648)
					break;
				}
				else if (  ( _switch_5==(int)2)){
					HX_STACK_LINE(647)
					::String name = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(649)
					{
						HX_STACK_LINE(650)
						{
							HX_STACK_LINE(650)
							::hscript::Token t1 = this->token();		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(650)
							if (((t1 != ::hscript::Token_obj::TDoubleDot))){
								HX_STACK_LINE(650)
								this->unexpected(t1);
							}
						}
						HX_STACK_LINE(651)
						::hscript::CType _g8 = this->parseType();		HX_STACK_VAR(_g8,"_g8");
						struct _Function_5_1{
							inline static Dynamic Block( ::hscript::CType &_g8,::String &name){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",651,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("name") , name,false);
									__result->Add(HX_CSTRING("t") , _g8,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(651)
						Dynamic _g9 = _Function_5_1::Block(_g8,name);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(651)
						fields->__Field(HX_CSTRING("push"),true)(_g9);
						HX_STACK_LINE(652)
						::hscript::Token _g10 = this->token();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(652)
						t = _g10;
						HX_STACK_LINE(653)
						int _switch_6 = (t->__Index());
						if (  ( _switch_6==(int)9)){
						}
						else if (  ( _switch_6==(int)7)){
							HX_STACK_LINE(655)
							break;
						}
						else  {
							HX_STACK_LINE(656)
							this->unexpected(t);
						}
;
;
					}
				}
				else  {
					HX_STACK_LINE(659)
					this->unexpected(t);
				}
;
;
			}
			HX_STACK_LINE(662)
			::hscript::CType _g11 = ::hscript::CType_obj::CTAnon(fields);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(662)
			return this->parseTypeNext(_g11);
		}
		;break;
		default: {
			HX_STACK_LINE(664)
			return this->unexpected(t);
		}
	}
	HX_STACK_LINE(604)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseType,return )

::hscript::CType Parser_obj::parseTypeNext( ::hscript::CType t){
	HX_STACK_FRAME("hscript.Parser","parseTypeNext",0x8b2ab44c,"hscript.Parser.parseTypeNext","hscript/Parser.hx",668,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(669)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(670)
	switch( (int)(tk->__Index())){
		case (int)3: {
			HX_STACK_LINE(670)
			::String op = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(672)
			if (((op != HX_CSTRING("->")))){
				HX_STACK_LINE(673)
				{
					HX_STACK_LINE(673)
					::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(673)
					::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(673)
					_this->head = _g;
				}
				HX_STACK_LINE(674)
				return t;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(677)
			{
				HX_STACK_LINE(677)
				::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(677)
				::haxe::ds::GenericCell_hscript_Token _g1 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(677)
				_this->head = _g1;
			}
			HX_STACK_LINE(678)
			return t;
		}
	}
	HX_STACK_LINE(680)
	::hscript::CType t2 = this->parseType();		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(681)
	switch( (int)(t2->__Index())){
		case (int)1: {
			HX_STACK_LINE(681)
			Array< ::Dynamic > args = (::hscript::CType(t2))->__Param(0);		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(682)
			{
				HX_STACK_LINE(683)
				args->unshift(t);
				HX_STACK_LINE(684)
				return t2;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(686)
			return ::hscript::CType_obj::CTFun(Array_obj< ::Dynamic >::__new().Add(t),t2);
		}
	}
	HX_STACK_LINE(681)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseTypeNext,return )

Array< ::Dynamic > Parser_obj::parseExprList( ::hscript::Token etk){
	HX_STACK_FRAME("hscript.Parser","parseExprList",0x8286afb2,"hscript.Parser.parseExprList","hscript/Parser.hx",690,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(etk,"etk")
	HX_STACK_LINE(691)
	Array< ::Dynamic > args = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(692)
	::hscript::Token tk = this->token();		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(693)
	if (((tk == etk))){
		HX_STACK_LINE(694)
		return args;
	}
	HX_STACK_LINE(695)
	{
		HX_STACK_LINE(695)
		::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(695)
		::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(695)
		_this->head = _g;
	}
	HX_STACK_LINE(696)
	while((true)){
		HX_STACK_LINE(697)
		::hscript::Expr _g1 = this->parseExpr();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(697)
		args->push(_g1);
		HX_STACK_LINE(698)
		::hscript::Token _g2 = this->token();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(698)
		tk = _g2;
		HX_STACK_LINE(699)
		int _switch_7 = (tk->__Index());
		if (  ( _switch_7==(int)9)){
		}
		else  {
			HX_STACK_LINE(702)
			if (((tk == etk))){
				HX_STACK_LINE(702)
				break;
			}
			HX_STACK_LINE(703)
			this->unexpected(tk);
		}
;
;
	}
	HX_STACK_LINE(706)
	return args;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprList,return )

Void Parser_obj::incPos( ){
{
		HX_STACK_FRAME("hscript.Parser","incPos",0xe19d25aa,"hscript.Parser.incPos","hscript/Parser.hx",709,0x98735743)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,incPos,(void))

int Parser_obj::readChar( ){
	HX_STACK_FRAME("hscript.Parser","readChar",0x8625b4a0,"hscript.Parser.readChar","hscript/Parser.hx",717,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(717)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(717)
		return this->input->readByte();
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(717)
				return (int)0;
			}
		}
	}
	HX_STACK_LINE(717)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readChar,return )

::String Parser_obj::readString( int until){
	HX_STACK_FRAME("hscript.Parser","readString",0xfc2f051b,"hscript.Parser.readString","hscript/Parser.hx",720,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(until,"until")
	HX_STACK_LINE(721)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(722)
	::haxe::io::BytesOutput b = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(723)
	bool esc = false;		HX_STACK_VAR(esc,"esc");
	HX_STACK_LINE(724)
	int old = this->line;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(725)
	::haxe::io::Input s = this->input;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(729)
	while((true)){
		HX_STACK_LINE(730)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(732)
			int _g = s->readByte();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(732)
			c = _g;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(734)
					this->line = old;
					HX_STACK_LINE(735)
					HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedString);
				}
			}
		}
		HX_STACK_LINE(737)
		if ((esc)){
			HX_STACK_LINE(738)
			esc = false;
			HX_STACK_LINE(739)
			switch( (int)(c)){
				case (int)110: {
					HX_STACK_LINE(740)
					b->writeByte((int)10);
				}
				;break;
				case (int)114: {
					HX_STACK_LINE(741)
					b->writeByte((int)13);
				}
				;break;
				case (int)116: {
					HX_STACK_LINE(742)
					b->writeByte((int)9);
				}
				;break;
				case (int)39: case (int)34: case (int)92: {
					HX_STACK_LINE(743)
					b->writeByte(c);
				}
				;break;
				case (int)47: {
					HX_STACK_LINE(744)
					if ((this->allowJSON)){
						HX_STACK_LINE(744)
						b->writeByte(c);
					}
					else{
						HX_STACK_LINE(744)
						this->invalidChar(c);
					}
				}
				;break;
				case (int)117: {
					HX_STACK_LINE(746)
					if ((!(this->allowJSON))){
						HX_STACK_LINE(746)
						HX_STACK_DO_THROW(this->invalidChar(c));
					}
					HX_STACK_LINE(747)
					::String code = null();		HX_STACK_VAR(code,"code");
					HX_STACK_LINE(748)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(753)
						::String _g1 = s->readString((int)4);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(753)
						code = _g1;
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(755)
								this->line = old;
								HX_STACK_LINE(756)
								HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedString);
							}
						}
					}
					HX_STACK_LINE(758)
					int k = (int)0;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(759)
					{
						HX_STACK_LINE(759)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(759)
						while((true)){
							HX_STACK_LINE(759)
							if ((!(((_g < (int)4))))){
								HX_STACK_LINE(759)
								break;
							}
							HX_STACK_LINE(759)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(760)
							hx::ShlEq(k,(int)4);
							HX_STACK_LINE(761)
							Dynamic _char = code.charCodeAt(i);		HX_STACK_VAR(_char,"char");
							HX_STACK_LINE(762)
							switch( (int)(_char)){
								case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
									HX_STACK_LINE(764)
									hx::AddEq(k,(_char - (int)48));
								}
								;break;
								case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
									HX_STACK_LINE(766)
									hx::AddEq(k,(_char - (int)55));
								}
								;break;
								case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
									HX_STACK_LINE(768)
									hx::AddEq(k,(_char - (int)87));
								}
								;break;
								default: {
									HX_STACK_LINE(770)
									this->invalidChar(_char);
								}
							}
						}
					}
					HX_STACK_LINE(774)
					if (((k <= (int)127))){
						HX_STACK_LINE(775)
						b->writeByte(k);
					}
					else{
						HX_STACK_LINE(776)
						if (((k <= (int)2047))){
							HX_STACK_LINE(777)
							b->writeByte((int((int)192) | int((int(k) >> int((int)6)))));
							HX_STACK_LINE(778)
							b->writeByte((int((int)128) | int((int(k) & int((int)63)))));
						}
						else{
							HX_STACK_LINE(780)
							b->writeByte((int((int)224) | int((int(k) >> int((int)12)))));
							HX_STACK_LINE(781)
							b->writeByte((int((int)128) | int((int((int(k) >> int((int)6))) & int((int)63)))));
							HX_STACK_LINE(782)
							b->writeByte((int((int)128) | int((int(k) & int((int)63)))));
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(784)
					this->invalidChar(c);
				}
			}
		}
		else{
			HX_STACK_LINE(786)
			if (((c == (int)92))){
				HX_STACK_LINE(787)
				esc = true;
			}
			else{
				HX_STACK_LINE(788)
				if (((c == until))){
					HX_STACK_LINE(789)
					break;
				}
				else{
					HX_STACK_LINE(791)
					if (((c == (int)10))){
						HX_STACK_LINE(791)
						(this->line)++;
					}
					HX_STACK_LINE(792)
					b->writeByte(c);
				}
			}
		}
	}
	HX_STACK_LINE(795)
	return b->getBytes()->toString();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readString,return )

::hscript::Token Parser_obj::token( ){
	HX_STACK_FRAME("hscript.Parser","token",0x3cb36b25,"hscript.Parser.token","hscript/Parser.hx",798,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(816)
	if ((!(((this->tokens->head == null()))))){
		HX_STACK_LINE(817)
		::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(817)
		::haxe::ds::GenericCell_hscript_Token k = _this->head;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(817)
		if (((k == null()))){
			HX_STACK_LINE(817)
			return null();
		}
		else{
			HX_STACK_LINE(817)
			_this->head = k->next;
			HX_STACK_LINE(817)
			return k->elt;
		}
	}
	HX_STACK_LINE(819)
	int _char;		HX_STACK_VAR(_char,"char");
	HX_STACK_LINE(820)
	if (((this->_char < (int)0))){
		HX_STACK_LINE(821)
		int _g = this->readChar();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(821)
		_char = _g;
	}
	else{
		HX_STACK_LINE(823)
		_char = this->_char;
		HX_STACK_LINE(824)
		this->_char = (int)-1;
	}
	HX_STACK_LINE(826)
	while((true)){
		HX_STACK_LINE(827)
		switch( (int)(_char)){
			case (int)0: {
				HX_STACK_LINE(828)
				return ::hscript::Token_obj::TEof;
			}
			;break;
			case (int)32: case (int)9: case (int)13: {
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(833)
				(this->line)++;
			}
			;break;
			case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
				HX_STACK_LINE(838)
				Float n = (((_char - (int)48)) * 1.0);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(839)
				Float exp = 0.;		HX_STACK_VAR(exp,"exp");
				HX_STACK_LINE(840)
				while((true)){
					HX_STACK_LINE(841)
					int _g1 = this->readChar();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(841)
					_char = _g1;
					HX_STACK_LINE(842)
					hx::MultEq(exp,(int)10);
					HX_STACK_LINE(843)
					switch( (int)(_char)){
						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
							HX_STACK_LINE(845)
							n = ((n * (int)10) + ((_char - (int)48)));
						}
						;break;
						case (int)46: {
							HX_STACK_LINE(847)
							if (((exp > (int)0))){
								struct _Function_6_1{
									inline static bool Block( hx::ObjectPtr< ::hscript::Parser_obj > __this){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",849,0x98735743)
										{
											HX_STACK_LINE(849)
											int _g2 = __this->readChar();		HX_STACK_VAR(_g2,"_g2");
											HX_STACK_LINE(849)
											return (_g2 == (int)46);
										}
										return null();
									}
								};
								HX_STACK_LINE(849)
								if (((  (((exp == (int)10))) ? bool(_Function_6_1::Block(this)) : bool(false) ))){
									HX_STACK_LINE(850)
									{
										HX_STACK_LINE(850)
										::hscript::Token tk = ::hscript::Token_obj::TOp(HX_CSTRING("..."));		HX_STACK_VAR(tk,"tk");
										HX_STACK_LINE(850)
										{
											HX_STACK_LINE(850)
											::haxe::ds::GenericStack_hscript_Token _this = this->tokens;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(850)
											::haxe::ds::GenericCell_hscript_Token _g3 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(_g3,"_g3");
											HX_STACK_LINE(850)
											_this->head = _g3;
										}
									}
									HX_STACK_LINE(851)
									int i = ::Std_obj::_int(n);		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(852)
									::hscript::Const _g4;		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(852)
									if (((i == n))){
										HX_STACK_LINE(852)
										_g4 = ::hscript::Const_obj::CInt(i);
									}
									else{
										HX_STACK_LINE(852)
										_g4 = ::hscript::Const_obj::CFloat(n);
									}
									HX_STACK_LINE(852)
									return ::hscript::Token_obj::TConst(_g4);
								}
								HX_STACK_LINE(854)
								this->invalidChar(_char);
							}
							HX_STACK_LINE(856)
							exp = 1.;
						}
						;break;
						case (int)120: {
							HX_STACK_LINE(858)
							if (((bool((n > (int)0)) || bool((exp > (int)0))))){
								HX_STACK_LINE(859)
								this->invalidChar(_char);
							}
							HX_STACK_LINE(862)
							int n1 = (int)0;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(863)
							while((true)){
								HX_STACK_LINE(864)
								int _g5 = this->readChar();		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(864)
								_char = _g5;
								HX_STACK_LINE(865)
								switch( (int)(_char)){
									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
										HX_STACK_LINE(867)
										n1 = ((((int(n1) << int((int)4))) + _char) - (int)48);
									}
									;break;
									case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
										HX_STACK_LINE(869)
										n1 = (((int(n1) << int((int)4))) + ((_char - (int)55)));
									}
									;break;
									case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
										HX_STACK_LINE(871)
										n1 = (((int(n1) << int((int)4))) + ((_char - (int)87)));
									}
									;break;
									default: {
										HX_STACK_LINE(873)
										this->_char = _char;
										HX_STACK_LINE(874)
										::hscript::Const _g6 = ::hscript::Const_obj::CInt(n1);		HX_STACK_VAR(_g6,"_g6");
										HX_STACK_LINE(874)
										return ::hscript::Token_obj::TConst(_g6);
									}
								}
							}
						}
						;break;
						default: {
							HX_STACK_LINE(899)
							this->_char = _char;
							HX_STACK_LINE(900)
							int i = ::Std_obj::_int(n);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(901)
							::hscript::Const _g7;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(901)
							if (((exp > (int)0))){
								HX_STACK_LINE(901)
								_g7 = ::hscript::Const_obj::CFloat((Float((n * (int)10)) / Float(exp)));
							}
							else{
								HX_STACK_LINE(901)
								if (((i == n))){
									HX_STACK_LINE(901)
									_g7 = ::hscript::Const_obj::CInt(i);
								}
								else{
									HX_STACK_LINE(901)
									_g7 = ::hscript::Const_obj::CFloat(n);
								}
							}
							HX_STACK_LINE(901)
							return ::hscript::Token_obj::TConst(_g7);
						}
					}
				}
			}
			;break;
			case (int)59: {
				HX_STACK_LINE(904)
				return ::hscript::Token_obj::TSemicolon;
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(905)
				return ::hscript::Token_obj::TPOpen;
			}
			;break;
			case (int)41: {
				HX_STACK_LINE(906)
				return ::hscript::Token_obj::TPClose;
			}
			;break;
			case (int)44: {
				HX_STACK_LINE(907)
				return ::hscript::Token_obj::TComma;
			}
			;break;
			case (int)46: {
				HX_STACK_LINE(909)
				int _g8 = this->readChar();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(909)
				_char = _g8;
				HX_STACK_LINE(910)
				switch( (int)(_char)){
					case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
						HX_STACK_LINE(912)
						int n = (_char - (int)48);		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(913)
						int exp = (int)1;		HX_STACK_VAR(exp,"exp");
						HX_STACK_LINE(914)
						while((true)){
							HX_STACK_LINE(915)
							int _g9 = this->readChar();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(915)
							_char = _g9;
							HX_STACK_LINE(916)
							hx::MultEq(exp,(int)10);
							HX_STACK_LINE(917)
							switch( (int)(_char)){
								case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
									HX_STACK_LINE(919)
									n = ((n * (int)10) + ((_char - (int)48)));
								}
								;break;
								default: {
									HX_STACK_LINE(921)
									this->_char = _char;
									HX_STACK_LINE(922)
									::hscript::Const _g10 = ::hscript::Const_obj::CFloat((Float(n) / Float(exp)));		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(922)
									return ::hscript::Token_obj::TConst(_g10);
								}
							}
						}
					}
					;break;
					case (int)46: {
						HX_STACK_LINE(926)
						int _g11 = this->readChar();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(926)
						_char = _g11;
						HX_STACK_LINE(927)
						if (((_char != (int)46))){
							HX_STACK_LINE(928)
							this->invalidChar(_char);
						}
						HX_STACK_LINE(929)
						return ::hscript::Token_obj::TOp(HX_CSTRING("..."));
					}
					;break;
					default: {
						HX_STACK_LINE(931)
						this->_char = _char;
						HX_STACK_LINE(932)
						return ::hscript::Token_obj::TDot;
					}
				}
			}
			;break;
			case (int)123: {
				HX_STACK_LINE(934)
				return ::hscript::Token_obj::TBrOpen;
			}
			;break;
			case (int)125: {
				HX_STACK_LINE(935)
				return ::hscript::Token_obj::TBrClose;
			}
			;break;
			case (int)91: {
				HX_STACK_LINE(936)
				return ::hscript::Token_obj::TBkOpen;
			}
			;break;
			case (int)93: {
				HX_STACK_LINE(937)
				return ::hscript::Token_obj::TBkClose;
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(938)
				::String _g12 = this->readString((int)39);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(938)
				::hscript::Const _g13 = ::hscript::Const_obj::CString(_g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(938)
				return ::hscript::Token_obj::TConst(_g13);
			}
			;break;
			case (int)34: {
				HX_STACK_LINE(939)
				::String _g14 = this->readString((int)34);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(939)
				::hscript::Const _g15 = ::hscript::Const_obj::CString(_g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(939)
				return ::hscript::Token_obj::TConst(_g15);
			}
			;break;
			case (int)63: {
				HX_STACK_LINE(940)
				return ::hscript::Token_obj::TQuestion;
			}
			;break;
			case (int)58: {
				HX_STACK_LINE(941)
				return ::hscript::Token_obj::TDoubleDot;
			}
			;break;
			default: {
				HX_STACK_LINE(943)
				if ((this->ops->__get(_char))){
					HX_STACK_LINE(944)
					::String op = ::String::fromCharCode(_char);		HX_STACK_VAR(op,"op");
					HX_STACK_LINE(945)
					while((true)){
						HX_STACK_LINE(946)
						int _g16 = this->readChar();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(946)
						_char = _g16;
						HX_STACK_LINE(947)
						if ((!(this->ops->__get(_char)))){
							HX_STACK_LINE(948)
							Dynamic _g17 = op.charCodeAt((int)0);		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(948)
							if (((_g17 == (int)47))){
								HX_STACK_LINE(949)
								return this->tokenComment(op,_char);
							}
							HX_STACK_LINE(950)
							this->_char = _char;
							HX_STACK_LINE(951)
							return ::hscript::Token_obj::TOp(op);
						}
						HX_STACK_LINE(953)
						::String _g18 = ::String::fromCharCode(_char);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(953)
						hx::AddEq(op,_g18);
					}
				}
				HX_STACK_LINE(956)
				if ((this->idents->__get(_char))){
					HX_STACK_LINE(957)
					::String id = ::String::fromCharCode(_char);		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(958)
					while((true)){
						HX_STACK_LINE(959)
						int _g19 = this->readChar();		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(959)
						_char = _g19;
						HX_STACK_LINE(960)
						if ((!(this->idents->__get(_char)))){
							HX_STACK_LINE(961)
							this->_char = _char;
							HX_STACK_LINE(962)
							return ::hscript::Token_obj::TId(id);
						}
						HX_STACK_LINE(964)
						::String _g20 = ::String::fromCharCode(_char);		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(964)
						hx::AddEq(id,_g20);
					}
				}
				HX_STACK_LINE(967)
				this->invalidChar(_char);
			}
		}
		HX_STACK_LINE(969)
		int _g21 = this->readChar();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(969)
		_char = _g21;
	}
	HX_STACK_LINE(971)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,token,return )

::hscript::Token Parser_obj::tokenComment( ::String op,int _char){
	HX_STACK_FRAME("hscript.Parser","tokenComment",0xb86c15ba,"hscript.Parser.tokenComment","hscript/Parser.hx",974,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(975)
	Dynamic c = op.charCodeAt((int)1);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(976)
	::haxe::io::Input s = this->input;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(977)
	if (((c == (int)47))){
		HX_STACK_LINE(978)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(979)
			while((true)){
				HX_STACK_LINE(979)
				if ((!(((bool((_char != (int)10)) && bool((_char != (int)13))))))){
					HX_STACK_LINE(979)
					break;
				}
				HX_STACK_LINE(981)
				int _g = s->readByte();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(981)
				_char = _g;
			}
			HX_STACK_LINE(983)
			this->_char = _char;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
		HX_STACK_LINE(986)
		return this->token();
	}
	HX_STACK_LINE(988)
	if (((c == (int)42))){
		HX_STACK_LINE(989)
		int old = this->line;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(990)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(991)
			while((true)){
				HX_STACK_LINE(992)
				while((true)){
					HX_STACK_LINE(992)
					if ((!(((_char != (int)42))))){
						HX_STACK_LINE(992)
						break;
					}
					HX_STACK_LINE(993)
					if (((_char == (int)10))){
						HX_STACK_LINE(993)
						(this->line)++;
					}
					HX_STACK_LINE(995)
					int _g1 = s->readByte();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(995)
					_char = _g1;
				}
				HX_STACK_LINE(998)
				int _g2 = s->readByte();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(998)
				_char = _g2;
				HX_STACK_LINE(999)
				if (((_char == (int)47))){
					HX_STACK_LINE(1000)
					break;
				}
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1003)
					this->line = old;
					HX_STACK_LINE(1004)
					HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedComment);
				}
			}
		}
		HX_STACK_LINE(1006)
		return this->token();
	}
	HX_STACK_LINE(1008)
	this->_char = _char;
	HX_STACK_LINE(1009)
	return ::hscript::Token_obj::TOp(op);
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,tokenComment,return )

::String Parser_obj::constString( ::hscript::Const c){
	HX_STACK_FRAME("hscript.Parser","constString",0x0a4693c0,"hscript.Parser.constString","hscript/Parser.hx",1013,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1013)
	switch( (int)(c->__Index())){
		case (int)0: {
			HX_STACK_LINE(1013)
			int v = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1014)
			return ::Std_obj::string(v);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1013)
			Float f = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1015)
			return ::Std_obj::string(f);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1013)
			::String s = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1016)
			return s;
		}
		;break;
	}
	HX_STACK_LINE(1013)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,constString,return )

::String Parser_obj::tokenString( ::hscript::Token t){
	HX_STACK_FRAME("hscript.Parser","tokenString",0x05f471d6,"hscript.Parser.tokenString","hscript/Parser.hx",1024,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(1024)
	switch( (int)(t->__Index())){
		case (int)0: {
			HX_STACK_LINE(1025)
			return HX_CSTRING("<eof>");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1024)
			::hscript::Const c = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1026)
			return this->constString(c);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1024)
			::String s = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1027)
			return s;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1024)
			::String s = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1028)
			return s;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1029)
			return HX_CSTRING("(");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1030)
			return HX_CSTRING(")");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1031)
			return HX_CSTRING("{");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(1032)
			return HX_CSTRING("}");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(1033)
			return HX_CSTRING(".");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(1034)
			return HX_CSTRING(",");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(1035)
			return HX_CSTRING(";");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(1036)
			return HX_CSTRING("[");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(1037)
			return HX_CSTRING("]");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(1038)
			return HX_CSTRING("?");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(1039)
			return HX_CSTRING(":");
		}
		;break;
	}
	HX_STACK_LINE(1024)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenString,return )

int Parser_obj::p1;

int Parser_obj::readPos;

int Parser_obj::tokenMin;

int Parser_obj::tokenMax;


Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(opChars,"opChars");
	HX_MARK_MEMBER_NAME(identChars,"identChars");
	HX_MARK_MEMBER_NAME(opPriority,"opPriority");
	HX_MARK_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_MARK_MEMBER_NAME(unops,"unops");
	HX_MARK_MEMBER_NAME(allowJSON,"allowJSON");
	HX_MARK_MEMBER_NAME(allowTypes,"allowTypes");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(_char,"char");
	HX_MARK_MEMBER_NAME(ops,"ops");
	HX_MARK_MEMBER_NAME(idents,"idents");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(opChars,"opChars");
	HX_VISIT_MEMBER_NAME(identChars,"identChars");
	HX_VISIT_MEMBER_NAME(opPriority,"opPriority");
	HX_VISIT_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_VISIT_MEMBER_NAME(unops,"unops");
	HX_VISIT_MEMBER_NAME(allowJSON,"allowJSON");
	HX_VISIT_MEMBER_NAME(allowTypes,"allowTypes");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(_char,"char");
	HX_VISIT_MEMBER_NAME(ops,"ops");
	HX_VISIT_MEMBER_NAME(idents,"idents");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
}

Dynamic Parser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { return mk_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { return ops; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		if (HX_FIELD_EQ(inName,"char") ) { return _char; }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"expr") ) { return expr_dyn(); }
		if (HX_FIELD_EQ(inName,"pmin") ) { return pmin_dyn(); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return pmax_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { return unops; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		if (HX_FIELD_EQ(inName,"token") ) { return token_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { return idents; }
		if (HX_FIELD_EQ(inName,"tokens") ) { return tokens; }
		if (HX_FIELD_EQ(inName,"ensure") ) { return ensure_dyn(); }
		if (HX_FIELD_EQ(inName,"incPos") ) { return incPos_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { return opChars; }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return isBlock_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"makeUnop") ) { return makeUnop_dyn(); }
		if (HX_FIELD_EQ(inName,"readChar") ) { return readChar_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { return allowJSON; }
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return parseExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"makeBinop") ) { return makeBinop_dyn(); }
		if (HX_FIELD_EQ(inName,"parseType") ) { return parseType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { return identChars; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { return opPriority; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { return allowTypes; }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return unexpected_dyn(); }
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return invalidChar_dyn(); }
		if (HX_FIELD_EQ(inName,"parseString") ) { return parseString_dyn(); }
		if (HX_FIELD_EQ(inName,"parseObject") ) { return parseObject_dyn(); }
		if (HX_FIELD_EQ(inName,"constString") ) { return constString_dyn(); }
		if (HX_FIELD_EQ(inName,"tokenString") ) { return tokenString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { return opRightAssoc; }
		if (HX_FIELD_EQ(inName,"tokenComment") ) { return tokenComment_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseFullExpr") ) { return parseFullExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"parseExprNext") ) { return parseExprNext_dyn(); }
		if (HX_FIELD_EQ(inName,"parseTypeNext") ) { return parseTypeNext_dyn(); }
		if (HX_FIELD_EQ(inName,"parseExprList") ) { return parseExprList_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseStructure") ) { return parseStructure_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { ops=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char") ) { _char=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { unops=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { idents=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast< ::haxe::ds::GenericStack_hscript_Token >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { opChars=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { allowJSON=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { identChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { opPriority=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { allowTypes=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { opRightAssoc=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("line"));
	outFields->push(HX_CSTRING("opChars"));
	outFields->push(HX_CSTRING("identChars"));
	outFields->push(HX_CSTRING("opPriority"));
	outFields->push(HX_CSTRING("opRightAssoc"));
	outFields->push(HX_CSTRING("unops"));
	outFields->push(HX_CSTRING("allowJSON"));
	outFields->push(HX_CSTRING("allowTypes"));
	outFields->push(HX_CSTRING("input"));
	outFields->push(HX_CSTRING("char"));
	outFields->push(HX_CSTRING("ops"));
	outFields->push(HX_CSTRING("idents"));
	outFields->push(HX_CSTRING("tokens"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("p1"),
	HX_CSTRING("readPos"),
	HX_CSTRING("tokenMin"),
	HX_CSTRING("tokenMax"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Parser_obj,line),HX_CSTRING("line")},
	{hx::fsString,(int)offsetof(Parser_obj,opChars),HX_CSTRING("opChars")},
	{hx::fsString,(int)offsetof(Parser_obj,identChars),HX_CSTRING("identChars")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opPriority),HX_CSTRING("opPriority")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opRightAssoc),HX_CSTRING("opRightAssoc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,unops),HX_CSTRING("unops")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowJSON),HX_CSTRING("allowJSON")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowTypes),HX_CSTRING("allowTypes")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Parser_obj,input),HX_CSTRING("input")},
	{hx::fsInt,(int)offsetof(Parser_obj,_char),HX_CSTRING("char")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,ops),HX_CSTRING("ops")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,idents),HX_CSTRING("idents")},
	{hx::fsObject /*::haxe::ds::GenericStack_hscript_Token*/ ,(int)offsetof(Parser_obj,tokens),HX_CSTRING("tokens")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("line"),
	HX_CSTRING("opChars"),
	HX_CSTRING("identChars"),
	HX_CSTRING("opPriority"),
	HX_CSTRING("opRightAssoc"),
	HX_CSTRING("unops"),
	HX_CSTRING("allowJSON"),
	HX_CSTRING("allowTypes"),
	HX_CSTRING("input"),
	HX_CSTRING("char"),
	HX_CSTRING("ops"),
	HX_CSTRING("idents"),
	HX_CSTRING("tokens"),
	HX_CSTRING("error"),
	HX_CSTRING("invalidChar"),
	HX_CSTRING("parseString"),
	HX_CSTRING("parse"),
	HX_CSTRING("unexpected"),
	HX_CSTRING("push"),
	HX_CSTRING("ensure"),
	HX_CSTRING("expr"),
	HX_CSTRING("pmin"),
	HX_CSTRING("pmax"),
	HX_CSTRING("mk"),
	HX_CSTRING("isBlock"),
	HX_CSTRING("parseFullExpr"),
	HX_CSTRING("parseObject"),
	HX_CSTRING("parseExpr"),
	HX_CSTRING("makeUnop"),
	HX_CSTRING("makeBinop"),
	HX_CSTRING("parseStructure"),
	HX_CSTRING("parseExprNext"),
	HX_CSTRING("parseType"),
	HX_CSTRING("parseTypeNext"),
	HX_CSTRING("parseExprList"),
	HX_CSTRING("incPos"),
	HX_CSTRING("readChar"),
	HX_CSTRING("readString"),
	HX_CSTRING("token"),
	HX_CSTRING("tokenComment"),
	HX_CSTRING("constString"),
	HX_CSTRING("tokenString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_MARK_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_VISIT_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#endif

Class Parser_obj::__mClass;

void Parser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hscript.Parser"), hx::TCanCast< Parser_obj> ,sStaticFields,sMemberFields,
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

void Parser_obj::__boot()
{
	p1= (int)0;
	readPos= (int)0;
	tokenMin= (int)0;
	tokenMax= (int)0;
}

} // end namespace hscript
