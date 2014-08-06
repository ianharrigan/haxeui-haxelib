#ifndef INCLUDED_haxe_ui_haxelib_popups_ManageLocalProjectController
#define INCLUDED_haxe_ui_haxelib_popups_ManageLocalProjectController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/XMLController.h>
HX_DECLARE_CLASS4(haxe,ui,haxelib,popups,ManageLocalProjectController)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ListView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Image)
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace haxelib{
namespace popups{


class HXCPP_CLASS_ATTRIBUTES  ManageLocalProjectController_obj : public ::haxe::ui::toolkit::core::XMLController_obj{
	public:
		typedef ::haxe::ui::toolkit::core::XMLController_obj super;
		typedef ManageLocalProjectController_obj OBJ_;
		ManageLocalProjectController_obj();
		Void __construct(Dynamic project);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ManageLocalProjectController_obj > __new(Dynamic project);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ManageLocalProjectController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ManageLocalProjectController"); }

		Dynamic _project;
		virtual Void setVersion( ::String version);
		Dynamic setVersion_dyn();

		virtual Void refreshProject( Dynamic project);
		Dynamic refreshProject_dyn();

		virtual Void refreshDetails( );
		Dynamic refreshDetails_dyn();

		virtual Void refreshVersions( );
		Dynamic refreshVersions_dyn();

		::haxe::ui::toolkit::controls::Button queryUser;
		::haxe::ui::toolkit::controls::Text projectTitle;
		::haxe::ui::toolkit::controls::Image projectIcon;
		::haxe::ui::toolkit::controls::Button uninstall;
		::haxe::ui::toolkit::controls::Button updateToLatest;
		::haxe::ui::toolkit::controls::Button close;
		::haxe::ui::toolkit::controls::Text projectDescription;
		::haxe::ui::toolkit::containers::ListView projectVersions;
};

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
} // end namespace popups

#endif /* INCLUDED_haxe_ui_haxelib_popups_ManageLocalProjectController */ 
