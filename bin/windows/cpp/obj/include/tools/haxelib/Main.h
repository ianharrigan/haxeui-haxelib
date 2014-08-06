#ifndef INCLUDED_tools_haxelib_Main
#define INCLUDED_tools_haxelib_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(tools,haxelib,Answer)
HX_DECLARE_CLASS2(tools,haxelib,Main)
HX_DECLARE_CLASS2(tools,haxelib,Remoting_SiteApi)
HX_DECLARE_CLASS2(tools,haxelib,SemVer)
HX_DECLARE_CLASS2(tools,haxelib,SiteProxy)
HX_DECLARE_CLASS3(tools,haxelib,_Main,CommandCategory)
namespace tools{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		int argcur;
		Array< ::String > args;
		::List commands;
		::String siteUrl;
		::tools::haxelib::SiteProxy site;
		virtual Void initSite( );
		Dynamic initSite_dyn();

		virtual ::String param( ::String name,Dynamic passwd);
		Dynamic param_dyn();

		virtual ::tools::haxelib::Answer ask( ::String question);
		Dynamic ask_dyn();

		virtual ::String paramOpt( );
		Dynamic paramOpt_dyn();

		virtual Void addCommand( ::String name,Dynamic f,::String doc,::tools::haxelib::_Main::CommandCategory cat,Dynamic net);
		Dynamic addCommand_dyn();

		virtual Void usage( );
		Dynamic usage_dyn();

		virtual Void process( );
		Dynamic process_dyn();

		virtual Void search( );
		Dynamic search_dyn();

		virtual Void info( );
		Dynamic info_dyn();

		virtual Void user( );
		Dynamic user_dyn();

		virtual Void _register( );
		Dynamic _register_dyn();

		virtual ::String doRegister( ::String name);
		Dynamic doRegister_dyn();

		virtual Void submit( );
		Dynamic submit_dyn();

		virtual Void install( );
		Dynamic install_dyn();

		virtual ::String getVersion( Dynamic inf,::String reqversion);
		Dynamic getVersion_dyn();

		virtual Void installFromHxml( ::String path);
		Dynamic installFromHxml_dyn();

		virtual Void installFromAllHxml( );
		Dynamic installFromAllHxml_dyn();

		virtual Void installMany( Dynamic libs,Dynamic setCurrent);
		Dynamic installMany_dyn();

		virtual Void doInstall( ::String project,::String version,bool setcurrent);
		Dynamic doInstall_dyn();

		virtual Void doInstallFile( ::String filepath,bool setcurrent,Dynamic nodelete);
		Dynamic doInstallFile_dyn();

		virtual Void doInstallDependencies( ::List dependencies);
		Dynamic doInstallDependencies_dyn();

		virtual bool safeDir( ::String dir);
		Dynamic safeDir_dyn();

		virtual bool safeDelete( ::String file);
		Dynamic safeDelete_dyn();

		virtual ::String getRepository( Dynamic setup);
		Dynamic getRepository_dyn();

		virtual Void setup( );
		Dynamic setup_dyn();

		virtual Void config( );
		Dynamic config_dyn();

		virtual ::String getCurrent( ::String dir);
		Dynamic getCurrent_dyn();

		virtual ::String getDev( ::String dir);
		Dynamic getDev_dyn();

		virtual Void list( );
		Dynamic list_dyn();

		virtual Void upgrade( );
		Dynamic upgrade_dyn();

		virtual Void doUpdate( ::String p,Dynamic state);
		Dynamic doUpdate_dyn();

		virtual bool updateByName( ::String prj);
		Dynamic updateByName_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void updateSelf( );
		Dynamic updateSelf_dyn();

		virtual Void deleteRec( ::String dir);
		Dynamic deleteRec_dyn();

		virtual Void remove( );
		Dynamic remove_dyn();

		virtual Void set( );
		Dynamic set_dyn();

		virtual Void setCurrent( ::String prj,::String version,bool doAsk);
		Dynamic setCurrent_dyn();

		virtual Void checkRec( ::String prj,::String version,::List l);
		Dynamic checkRec_dyn();

		virtual Void dev( );
		Dynamic dev_dyn();

		virtual Void checkGit( );
		Dynamic checkGit_dyn();

		virtual Void git( );
		Dynamic git_dyn();

		virtual Void run( );
		Dynamic run_dyn();

		virtual ::String escapeArg( ::String a);
		Dynamic escapeArg_dyn();

		virtual Void local( );
		Dynamic local_dyn();

		virtual Dynamic command( ::String cmd,Array< ::String > args);
		Dynamic command_dyn();

		virtual Void proxy( );
		Dynamic proxy_dyn();

		virtual Void loadProxy( );
		Dynamic loadProxy_dyn();

		virtual Void convertXml( );
		Dynamic convertXml_dyn();

		static ::tools::haxelib::SemVer VERSION;
		static ::tools::haxelib::SemVer APIVERSION;
		static ::String REPNAME;
		static Dynamic SERVER;
		static Void print( ::String str);
		static Dynamic print_dyn();

		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_Main */ 
