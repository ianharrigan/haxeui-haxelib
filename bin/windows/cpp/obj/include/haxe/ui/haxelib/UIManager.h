#ifndef INCLUDED_haxe_ui_haxelib_UIManager
#define INCLUDED_haxe_ui_haxelib_UIManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/events/EventDispatcher.h>
HX_DECLARE_CLASS3(haxe,ui,haxelib,UIManager)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Controller)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  UIManager_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef UIManager_obj OBJ_;
		UIManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIManager"); }

		Array< ::Dynamic > _popups;
		virtual Void showLogin( Dynamic fn);
		Dynamic showLogin_dyn();

		virtual Void showNotImplemented( Dynamic fn);
		Dynamic showNotImplemented_dyn();

		virtual Void showQueryUser( ::String username);
		Dynamic showQueryUser_dyn();

		virtual Void modifyLocalProject( Dynamic project);
		Dynamic modifyLocalProject_dyn();

		virtual ::haxe::ui::toolkit::core::Controller findPopup( ::Class cls);
		Dynamic findPopup_dyn();

		virtual Void dispatchProjectVersionChanged( Dynamic project);
		Dynamic dispatchProjectVersionChanged_dyn();

		virtual Void addListener( ::String type,Dynamic listener);
		Dynamic addListener_dyn();

		static ::String VERSION_CHANGED;
		static ::haxe::ui::haxelib::UIManager _instance;
		static ::haxe::ui::haxelib::UIManager instance;
		static ::haxe::ui::haxelib::UIManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib

#endif /* INCLUDED_haxe_ui_haxelib_UIManager */ 
