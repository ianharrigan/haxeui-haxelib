#ifndef INCLUDED_tools_haxelib__Main_CommandCategory
#define INCLUDED_tools_haxelib__Main_CommandCategory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tools,haxelib,_Main,CommandCategory)
namespace tools{
namespace haxelib{
namespace _Main{


class CommandCategory_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CommandCategory_obj OBJ_;

	public:
		CommandCategory_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("tools.haxelib._Main.CommandCategory"); }
		::String __ToString() const { return HX_CSTRING("CommandCategory.") + tag; }

		static ::tools::haxelib::_Main::CommandCategory Basic;
		static inline ::tools::haxelib::_Main::CommandCategory Basic_dyn() { return Basic; }
		static ::tools::haxelib::_Main::CommandCategory Development;
		static inline ::tools::haxelib::_Main::CommandCategory Development_dyn() { return Development; }
		static ::tools::haxelib::_Main::CommandCategory Information;
		static inline ::tools::haxelib::_Main::CommandCategory Information_dyn() { return Information; }
		static ::tools::haxelib::_Main::CommandCategory Miscellaneous;
		static inline ::tools::haxelib::_Main::CommandCategory Miscellaneous_dyn() { return Miscellaneous; }
};

} // end namespace tools
} // end namespace haxelib
} // end namespace _Main

#endif /* INCLUDED_tools_haxelib__Main_CommandCategory */ 
