#ifndef INCLUDED_hscript_Parser
#define INCLUDED_hscript_Parser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,GenericStack_hscript_Token)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS1(hscript,CType)
HX_DECLARE_CLASS1(hscript,Const)
HX_DECLARE_CLASS1(hscript,Error)
HX_DECLARE_CLASS1(hscript,Expr)
HX_DECLARE_CLASS1(hscript,Parser)
HX_DECLARE_CLASS1(hscript,Token)
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  Parser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Parser_obj OBJ_;
		Parser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Parser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Parser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Parser"); }

		int line;
		::String opChars;
		::String identChars;
		::haxe::ds::StringMap opPriority;
		::haxe::ds::StringMap opRightAssoc;
		::haxe::ds::StringMap unops;
		bool allowJSON;
		bool allowTypes;
		::haxe::io::Input input;
		int _char;
		Array< bool > ops;
		Array< bool > idents;
		::haxe::ds::GenericStack_hscript_Token tokens;
		virtual Void error( ::hscript::Error err,int pmin,int pmax);
		Dynamic error_dyn();

		virtual Void invalidChar( int c);
		Dynamic invalidChar_dyn();

		virtual ::hscript::Expr parseString( ::String s);
		Dynamic parseString_dyn();

		virtual ::hscript::Expr parse( ::haxe::io::Input s);
		Dynamic parse_dyn();

		virtual Dynamic unexpected( ::hscript::Token tk);
		Dynamic unexpected_dyn();

		virtual Void push( ::hscript::Token tk);
		Dynamic push_dyn();

		virtual Void ensure( ::hscript::Token tk);
		Dynamic ensure_dyn();

		virtual ::hscript::Expr expr( ::hscript::Expr e);
		Dynamic expr_dyn();

		virtual int pmin( ::hscript::Expr e);
		Dynamic pmin_dyn();

		virtual int pmax( ::hscript::Expr e);
		Dynamic pmax_dyn();

		virtual ::hscript::Expr mk( ::hscript::Expr e,Dynamic pmin,Dynamic pmax);
		Dynamic mk_dyn();

		virtual bool isBlock( ::hscript::Expr e);
		Dynamic isBlock_dyn();

		virtual ::hscript::Expr parseFullExpr( );
		Dynamic parseFullExpr_dyn();

		virtual ::hscript::Expr parseObject( Dynamic p1);
		Dynamic parseObject_dyn();

		virtual ::hscript::Expr parseExpr( );
		Dynamic parseExpr_dyn();

		virtual ::hscript::Expr makeUnop( ::String op,::hscript::Expr e);
		Dynamic makeUnop_dyn();

		virtual ::hscript::Expr makeBinop( ::String op,::hscript::Expr e1,::hscript::Expr e);
		Dynamic makeBinop_dyn();

		virtual ::hscript::Expr parseStructure( ::String id);
		Dynamic parseStructure_dyn();

		virtual ::hscript::Expr parseExprNext( ::hscript::Expr e1);
		Dynamic parseExprNext_dyn();

		virtual ::hscript::CType parseType( );
		Dynamic parseType_dyn();

		virtual ::hscript::CType parseTypeNext( ::hscript::CType t);
		Dynamic parseTypeNext_dyn();

		virtual Array< ::Dynamic > parseExprList( ::hscript::Token etk);
		Dynamic parseExprList_dyn();

		virtual Void incPos( );
		Dynamic incPos_dyn();

		virtual int readChar( );
		Dynamic readChar_dyn();

		virtual ::String readString( int until);
		Dynamic readString_dyn();

		virtual ::hscript::Token token( );
		Dynamic token_dyn();

		virtual ::hscript::Token tokenComment( ::String op,int _char);
		Dynamic tokenComment_dyn();

		virtual ::String constString( ::hscript::Const c);
		Dynamic constString_dyn();

		virtual ::String tokenString( ::hscript::Token t);
		Dynamic tokenString_dyn();

		static int p1;
		static int readPos;
		static int tokenMin;
		static int tokenMax;
};

} // end namespace hscript

#endif /* INCLUDED_hscript_Parser */ 
