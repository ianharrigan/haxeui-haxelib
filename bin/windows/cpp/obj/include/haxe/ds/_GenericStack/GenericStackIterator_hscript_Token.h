#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token
#define INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <cpp/FastIterator.h>
HX_DECLARE_CLASS2(haxe,ds,GenericCell_hscript_Token)
HX_DECLARE_CLASS3(haxe,ds,_GenericStack,GenericStackIterator_hscript_Token)
HX_DECLARE_CLASS1(hscript,Token)
namespace haxe{
namespace ds{
namespace _GenericStack{


class HXCPP_CLASS_ATTRIBUTES  GenericStackIterator_hscript_Token_obj : public ::cpp::FastIterator_obj< ::hscript::Token >{
	public:
		typedef ::cpp::FastIterator_obj< ::hscript::Token > super;
		typedef GenericStackIterator_hscript_Token_obj OBJ_;
		GenericStackIterator_hscript_Token_obj();
		Void __construct(::haxe::ds::GenericCell_hscript_Token head);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > __new(::haxe::ds::GenericCell_hscript_Token head);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GenericStackIterator_hscript_Token_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GenericStackIterator_hscript_Token"); }

		::haxe::ds::GenericCell_hscript_Token current;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::hscript::Token next( );
		Dynamic next_dyn();

};

} // end namespace haxe
} // end namespace ds
} // end namespace _GenericStack

#endif /* INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token */ 
