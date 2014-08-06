#ifndef INCLUDED_tools_haxelib_Data
#define INCLUDED_tools_haxelib_Data

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(tools,haxelib,Data)
namespace tools{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  Data_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Data_obj OBJ_;
		Data_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Data_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Data_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Data"); }

		static ::String JSON;
		static ::String XML;
		static ::String DOCXML;
		static ::String REPOSITORY;
		static ::EReg alphanum;
		static Array< ::String > LICENSES;
		static Array< ::String > RESERVED_NAMES;
		static ::String safe( ::String name);
		static Dynamic safe_dyn();

		static ::String unsafe( ::String name);
		static Dynamic unsafe_dyn();

		static ::String fileName( ::String lib,::String ver);
		static Dynamic fileName_dyn();

		static ::String locateBasePath( ::List zip);
		static Dynamic locateBasePath_dyn();

		static ::String readDoc( ::List zip);
		static Dynamic readDoc_dyn();

		static Dynamic readInfos( ::List zip,bool check);
		static Dynamic readInfos_dyn();

		static Void checkClassPath( ::List zip,Dynamic infos);
		static Dynamic checkClassPath_dyn();

		static Void doCheck( Dynamic doc);
		static Dynamic doCheck_dyn();

		static Dynamic readData( ::String jsondata,bool check);
		static Dynamic readData_dyn();

};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_Data */ 
