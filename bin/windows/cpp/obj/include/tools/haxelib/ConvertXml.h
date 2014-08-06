#ifndef INCLUDED_tools_haxelib_ConvertXml
#define INCLUDED_tools_haxelib_ConvertXml

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tools,haxelib,ConvertXml)
namespace tools{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  ConvertXml_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConvertXml_obj OBJ_;
		ConvertXml_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ConvertXml_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConvertXml_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ConvertXml"); }

		static Dynamic convert( ::String inXml);
		static Dynamic convert_dyn();

		static ::String prettyPrint( Dynamic json,::String indent);
		static Dynamic prettyPrint_dyn();

};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_ConvertXml */ 
