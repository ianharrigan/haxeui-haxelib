#ifndef INCLUDED_haxe_ui_toolkit_util_TypeParser
#define INCLUDED_haxe_ui_toolkit_util_TypeParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,util,TypeParser)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  TypeParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TypeParser_obj OBJ_;
		TypeParser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TypeParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TypeParser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("TypeParser"); }

		static int parseInt( ::String s);
		static Dynamic parseInt_dyn();

		static Float parseFloat( ::String s);
		static Dynamic parseFloat_dyn();

		static bool parseBool( ::String s);
		static Dynamic parseBool_dyn();

		static int parseColor( ::String s);
		static Dynamic parseColor_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_TypeParser */ 
