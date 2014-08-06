#ifndef INCLUDED_tools_haxelib_SiteProxy
#define INCLUDED_tools_haxelib_SiteProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <tools/haxelib/Remoting_SiteApi.h>
HX_DECLARE_CLASS2(haxe,remoting,Connection)
HX_DECLARE_CLASS2(tools,haxelib,Remoting_SiteApi)
HX_DECLARE_CLASS2(tools,haxelib,SiteProxy)
namespace tools{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  SiteProxy_obj : public ::tools::haxelib::Remoting_SiteApi_obj{
	public:
		typedef ::tools::haxelib::Remoting_SiteApi_obj super;
		typedef SiteProxy_obj OBJ_;
		SiteProxy_obj();
		Void __construct(::haxe::remoting::Connection c);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SiteProxy_obj > __new(::haxe::remoting::Connection c);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SiteProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SiteProxy"); }

};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_SiteProxy */ 
