#ifndef INCLUDED_tools_haxelib_Preview
#define INCLUDED_tools_haxelib_Preview

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tools,haxelib,Preview)
namespace tools{
namespace haxelib{


class Preview_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Preview_obj OBJ_;

	public:
		Preview_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("tools.haxelib.Preview"); }
		::String __ToString() const { return HX_CSTRING("Preview.") + tag; }

		static ::tools::haxelib::Preview ALPHA;
		static inline ::tools::haxelib::Preview ALPHA_dyn() { return ALPHA; }
		static ::tools::haxelib::Preview BETA;
		static inline ::tools::haxelib::Preview BETA_dyn() { return BETA; }
		static ::tools::haxelib::Preview RC;
		static inline ::tools::haxelib::Preview RC_dyn() { return RC; }
};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_Preview */ 
