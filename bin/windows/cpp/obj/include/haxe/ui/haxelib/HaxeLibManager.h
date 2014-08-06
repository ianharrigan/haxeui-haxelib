#ifndef INCLUDED_haxe_ui_haxelib_HaxeLibManager
#define INCLUDED_haxe_ui_haxelib_HaxeLibManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <tools/haxelib/Main.h>
HX_DECLARE_CLASS3(haxe,ui,haxelib,HaxeLibManager)
HX_DECLARE_CLASS2(tools,haxelib,Main)
namespace haxe{
namespace ui{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  HaxeLibManager_obj : public ::tools::haxelib::Main_obj{
	public:
		typedef ::tools::haxelib::Main_obj super;
		typedef HaxeLibManager_obj OBJ_;
		HaxeLibManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HaxeLibManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HaxeLibManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("HaxeLibManager"); }

		virtual bool hasLocalVersion( ::String project,::String version);
		Dynamic hasLocalVersion_dyn();

		virtual ::String getLocalVersion( ::String project);
		Dynamic getLocalVersion_dyn();

		virtual Void setLocalVersion( ::String project,::String version);
		Dynamic setLocalVersion_dyn();

		virtual Dynamic queryUser( ::String username);
		Dynamic queryUser_dyn();

		virtual Dynamic queryProject( ::String projectName);
		Dynamic queryProject_dyn();

		virtual Dynamic listLocalProjects( ::String filter,hx::Null< bool >  loadRemote);
		Dynamic listLocalProjects_dyn();

		static ::haxe::ui::haxelib::HaxeLibManager _instance;
		static ::haxe::ui::haxelib::HaxeLibManager instance;
		static ::haxe::ui::haxelib::HaxeLibManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib

#endif /* INCLUDED_haxe_ui_haxelib_HaxeLibManager */ 
