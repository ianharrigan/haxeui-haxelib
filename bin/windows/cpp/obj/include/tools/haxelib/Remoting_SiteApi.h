#ifndef INCLUDED_tools_haxelib_Remoting_SiteApi
#define INCLUDED_tools_haxelib_Remoting_SiteApi

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,remoting,Connection)
HX_DECLARE_CLASS2(tools,haxelib,Remoting_SiteApi)
namespace tools{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  Remoting_SiteApi_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Remoting_SiteApi_obj OBJ_;
		Remoting_SiteApi_obj();
		Void __construct(::haxe::remoting::Connection c);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Remoting_SiteApi_obj > __new(::haxe::remoting::Connection c);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Remoting_SiteApi_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Remoting_SiteApi"); }

		::haxe::remoting::Connection __cnx;
		virtual ::List search( ::String word);
		Dynamic search_dyn();

		virtual Dynamic infos( ::String project);
		Dynamic infos_dyn();

		virtual Dynamic user( ::String name);
		Dynamic user_dyn();

		virtual bool _register( ::String name,::String pass,::String mail,::String fullname);
		Dynamic _register_dyn();

		virtual bool isNewUser( ::String name);
		Dynamic isNewUser_dyn();

		virtual Void checkDeveloper( ::String prj,::String user);
		Dynamic checkDeveloper_dyn();

		virtual bool checkPassword( ::String user,::String pass);
		Dynamic checkPassword_dyn();

		virtual ::String getSubmitId( );
		Dynamic getSubmitId_dyn();

		virtual ::String processSubmit( ::String id,::String user,::String pass);
		Dynamic processSubmit_dyn();

		virtual Void postInstall( ::String project,::String version);
		Dynamic postInstall_dyn();

};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_Remoting_SiteApi */ 
