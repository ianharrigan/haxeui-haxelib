#ifndef INCLUDED_tools_haxelib_MyHttpConnection
#define INCLUDED_tools_haxelib_MyHttpConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/remoting/HttpConnection.h>
HX_DECLARE_CLASS2(haxe,remoting,Connection)
HX_DECLARE_CLASS2(haxe,remoting,HttpConnection)
HX_DECLARE_CLASS2(tools,haxelib,MyHttpConnection)
namespace tools{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  MyHttpConnection_obj : public ::haxe::remoting::HttpConnection_obj{
	public:
		typedef ::haxe::remoting::HttpConnection_obj super;
		typedef MyHttpConnection_obj OBJ_;
		MyHttpConnection_obj();
		Void __construct(::String url,Array< ::String > path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MyHttpConnection_obj > __new(::String url,Array< ::String > path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MyHttpConnection_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MyHttpConnection"); }

		static ::haxe::remoting::HttpConnection urlConnect( ::String url);
		static Dynamic urlConnect_dyn();

};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_MyHttpConnection */ 
