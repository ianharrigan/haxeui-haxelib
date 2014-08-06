#ifndef INCLUDED_haxe_ui_toolkit_util_StringUtil
#define INCLUDED_haxe_ui_toolkit_util_StringUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,util,StringUtil)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  StringUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StringUtil_obj OBJ_;
		StringUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StringUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StringUtil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("StringUtil"); }

		static ::String capitalizeFirstLetter( ::String s);
		static Dynamic capitalizeFirstLetter_dyn();

		static ::String capitalizeHyphens( ::String s);
		static Dynamic capitalizeHyphens_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_StringUtil */ 
