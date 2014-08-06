#ifndef INCLUDED_hscript_Error
#define INCLUDED_hscript_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,Error)
namespace hscript{


class Error_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Error_obj OBJ_;

	public:
		Error_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("hscript.Error"); }
		::String __ToString() const { return HX_CSTRING("Error.") + tag; }

		static ::hscript::Error EInvalidAccess(::String f);
		static Dynamic EInvalidAccess_dyn();
		static ::hscript::Error EInvalidChar(int c);
		static Dynamic EInvalidChar_dyn();
		static ::hscript::Error EInvalidIterator(::String v);
		static Dynamic EInvalidIterator_dyn();
		static ::hscript::Error EInvalidOp(::String op);
		static Dynamic EInvalidOp_dyn();
		static ::hscript::Error EUnexpected(::String s);
		static Dynamic EUnexpected_dyn();
		static ::hscript::Error EUnknownVariable(::String v);
		static Dynamic EUnknownVariable_dyn();
		static ::hscript::Error EUnterminatedComment;
		static inline ::hscript::Error EUnterminatedComment_dyn() { return EUnterminatedComment; }
		static ::hscript::Error EUnterminatedString;
		static inline ::hscript::Error EUnterminatedString_dyn() { return EUnterminatedString; }
};

} // end namespace hscript

#endif /* INCLUDED_hscript_Error */ 
