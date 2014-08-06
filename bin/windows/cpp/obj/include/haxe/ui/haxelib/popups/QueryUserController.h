#ifndef INCLUDED_haxe_ui_haxelib_popups_QueryUserController
#define INCLUDED_haxe_ui_haxelib_popups_QueryUserController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/XMLController.h>
HX_DECLARE_CLASS4(haxe,ui,haxelib,popups,QueryUserController)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ListView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,AsyncThreadCaller)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace haxelib{
namespace popups{


class HXCPP_CLASS_ATTRIBUTES  QueryUserController_obj : public ::haxe::ui::toolkit::core::XMLController_obj{
	public:
		typedef ::haxe::ui::toolkit::core::XMLController_obj super;
		typedef QueryUserController_obj OBJ_;
		QueryUserController_obj();
		Void __construct(::String usernameToQuery);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< QueryUserController_obj > __new(::String usernameToQuery);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QueryUserController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("QueryUserController"); }

		::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller _caller;
		virtual Void performQuery( ::String usernameToQuery);
		Dynamic performQuery_dyn();

		::haxe::ui::toolkit::controls::TextInput username;
		::haxe::ui::toolkit::containers::HBox warning;
		::haxe::ui::toolkit::containers::VBox results;
		::haxe::ui::toolkit::controls::Text userEmail;
		::haxe::ui::toolkit::controls::Text userTitle;
		::haxe::ui::toolkit::controls::Text warningText;
		::haxe::ui::toolkit::containers::ListView userProjects;
		::haxe::ui::toolkit::controls::Button query;
};

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
} // end namespace popups

#endif /* INCLUDED_haxe_ui_haxelib_popups_QueryUserController */ 
