#ifndef INCLUDED_haxe_ui_haxelib_MainController
#define INCLUDED_haxe_ui_haxelib_MainController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/XMLController.h>
HX_DECLARE_CLASS3(haxe,ui,haxelib,MainController)
HX_DECLARE_CLASS3(haxe,ui,haxelib,VersionChangedEvent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ListView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TabView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,HProgress)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,MenuButton)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,MenuItem)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Progress)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Spacer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Controller)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,XMLController)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDataComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDirectional)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,AsyncThreadCaller)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  MainController_obj : public ::haxe::ui::toolkit::core::XMLController_obj{
	public:
		typedef ::haxe::ui::toolkit::core::XMLController_obj super;
		typedef MainController_obj OBJ_;
		MainController_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MainController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MainController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MainController"); }

		::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller _caller;
		virtual Void modifyLocalProject( Dynamic project);
		Dynamic modifyLocalProject_dyn();

		virtual Void refreshLocalRepository( );
		Dynamic refreshLocalRepository_dyn();

		virtual Void refreshRemoteInfo( );
		Dynamic refreshRemoteInfo_dyn();

		virtual Void addMenuHandlers( );
		Dynamic addMenuHandlers_dyn();

		virtual Void onProjectVersionChanged( ::haxe::ui::haxelib::VersionChangedEvent e);
		Dynamic onProjectVersionChanged_dyn();

		::haxe::ui::toolkit::containers::TabView mainTabs;
		::haxe::ui::toolkit::controls::Button refreshLocal;
		::haxe::ui::toolkit::controls::MenuItem menuFindProjects;
		::haxe::ui::toolkit::controls::MenuButton menuTools;
		::haxe::ui::toolkit::controls::MenuButton menuFile;
		::haxe::ui::toolkit::controls::Text localProgressLabel;
		::haxe::ui::toolkit::controls::MenuItem menuCreateAccount;
		::haxe::ui::toolkit::controls::MenuItem menuLogout;
		::haxe::ui::toolkit::controls::HProgress localProgressBar;
		::haxe::ui::toolkit::controls::MenuItem menuExit;
		::haxe::ui::toolkit::containers::ListView localProjects;
		::haxe::ui::toolkit::controls::Spacer localProgressSpacer;
		::haxe::ui::toolkit::controls::MenuItem menuAbout;
		::haxe::ui::toolkit::containers::HBox localProgressBox;
		::haxe::ui::toolkit::controls::MenuButton menuHelp;
		::haxe::ui::toolkit::controls::Text title;
		::haxe::ui::toolkit::controls::MenuItem menuSettings;
		::haxe::ui::toolkit::controls::MenuItem menuQueryUser;
};

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib

#endif /* INCLUDED_haxe_ui_haxelib_MainController */ 
