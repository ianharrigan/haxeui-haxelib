#ifndef INCLUDED_hscript_Interp
#define INCLUDED_hscript_Interp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscript,Expr)
HX_DECLARE_CLASS1(hscript,Interp)
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  Interp_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Interp_obj OBJ_;
		Interp_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Interp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Interp_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Interp"); }

		::haxe::ds::StringMap variables;
		::haxe::ds::StringMap locals;
		::haxe::ds::StringMap binops;
		Dynamic declared;
		virtual Void initOps( );
		Dynamic initOps_dyn();

		virtual Dynamic assign( ::hscript::Expr e1,::hscript::Expr e2);
		Dynamic assign_dyn();

		virtual Void assignOp( ::String op,Dynamic fop);
		Dynamic assignOp_dyn();

		virtual Dynamic evalAssignOp( ::String op,Dynamic fop,::hscript::Expr e1,::hscript::Expr e2);
		Dynamic evalAssignOp_dyn();

		virtual Dynamic increment( ::hscript::Expr e,bool prefix,int delta);
		Dynamic increment_dyn();

		virtual Dynamic execute( ::hscript::Expr expr);
		Dynamic execute_dyn();

		virtual Dynamic exprReturn( ::hscript::Expr e);
		Dynamic exprReturn_dyn();

		virtual ::haxe::ds::StringMap duplicate( ::haxe::ds::StringMap h);
		Dynamic duplicate_dyn();

		virtual Void restore( int old);
		Dynamic restore_dyn();

		virtual Dynamic resolve( ::String id);
		Dynamic resolve_dyn();

		virtual Dynamic expr( ::hscript::Expr e);
		Dynamic expr_dyn();

		virtual Void whileLoop( ::hscript::Expr econd,::hscript::Expr e);
		Dynamic whileLoop_dyn();

		virtual Dynamic makeIterator( Dynamic v);
		Dynamic makeIterator_dyn();

		virtual Void forLoop( ::String n,::hscript::Expr it,::hscript::Expr e);
		Dynamic forLoop_dyn();

		virtual Dynamic get( Dynamic o,::String f);
		Dynamic get_dyn();

		virtual Dynamic set( Dynamic o,::String f,Dynamic v);
		Dynamic set_dyn();

		virtual Dynamic fcall( Dynamic o,::String f,Dynamic args);
		Dynamic fcall_dyn();

		virtual Dynamic call( Dynamic o,Dynamic f,Dynamic args);
		Dynamic call_dyn();

		virtual Dynamic cnew( ::String cl,Dynamic args);
		Dynamic cnew_dyn();

};

} // end namespace hscript

#endif /* INCLUDED_hscript_Interp */ 
