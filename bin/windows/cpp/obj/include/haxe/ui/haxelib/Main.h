#ifndef INCLUDED_haxe_ui_haxelib_Main
#define INCLUDED_haxe_ui_haxelib_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,ui,haxelib,Main)
namespace haxe{
namespace ui{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Main"); }

		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib

#endif /* INCLUDED_haxe_ui_haxelib_Main */ 
