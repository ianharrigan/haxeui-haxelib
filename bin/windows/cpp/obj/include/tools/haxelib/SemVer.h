#ifndef INCLUDED_tools_haxelib_SemVer
#define INCLUDED_tools_haxelib_SemVer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(tools,haxelib,Preview)
HX_DECLARE_CLASS2(tools,haxelib,SemVer)
namespace tools{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  SemVer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SemVer_obj OBJ_;
		SemVer_obj();
		Void __construct(int major,int minor,int patch,::tools::haxelib::Preview preview,Dynamic previewNum);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SemVer_obj > __new(int major,int minor,int patch,::tools::haxelib::Preview preview,Dynamic previewNum);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SemVer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SemVer"); }

		int major;
		int minor;
		int patch;
		::tools::haxelib::Preview preview;
		Dynamic previewNum;
		virtual ::String toString( );
		Dynamic toString_dyn();

		static ::EReg parse;
		static ::tools::haxelib::SemVer ofString( ::String s);
		static Dynamic ofString_dyn();

};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_SemVer */ 
