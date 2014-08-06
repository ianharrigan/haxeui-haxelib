#ifndef INCLUDED_tools_haxelib_Answer
#define INCLUDED_tools_haxelib_Answer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tools,haxelib,Answer)
namespace tools{
namespace haxelib{


class Answer_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Answer_obj OBJ_;

	public:
		Answer_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("tools.haxelib.Answer"); }
		::String __ToString() const { return HX_CSTRING("Answer.") + tag; }

		static ::tools::haxelib::Answer Always;
		static inline ::tools::haxelib::Answer Always_dyn() { return Always; }
		static ::tools::haxelib::Answer No;
		static inline ::tools::haxelib::Answer No_dyn() { return No; }
		static ::tools::haxelib::Answer Yes;
		static inline ::tools::haxelib::Answer Yes_dyn() { return Yes; }
};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_Answer */ 
