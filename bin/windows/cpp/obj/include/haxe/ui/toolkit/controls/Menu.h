#ifndef INCLUDED_haxe_ui_toolkit_controls_Menu
#define INCLUDED_haxe_ui_toolkit_controls_Menu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/containers/VBox.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Menu)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,MenuItem)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  Menu_obj : public ::haxe::ui::toolkit::containers::VBox_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::VBox_obj super;
		typedef Menu_obj OBJ_;
		Menu_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Menu_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Menu_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Menu"); }

		::haxe::ds::ObjectMap _subMenus;
		::haxe::ui::toolkit::controls::MenuItem _currentItem;
		::haxe::ui::toolkit::controls::Menu _currentSubMenu;
		::haxe::ui::toolkit::controls::Menu _parentMenu;
		virtual Void initialize( );

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child);

		virtual Void _onRootMouseDown( ::openfl::events::MouseEvent event);
		Dynamic _onRootMouseDown_dyn();

		virtual Dynamic buildMouseOverFunction( int index);
		Dynamic buildMouseOverFunction_dyn();

		virtual Dynamic buildMouseClickFunction( int index);
		Dynamic buildMouseClickFunction_dyn();

		virtual Void mouseClickItem( int index);
		Dynamic mouseClickItem_dyn();

		virtual Void mouseOverItem( int index);
		Dynamic mouseOverItem_dyn();

		virtual Void showSubMenu( ::haxe::ui::toolkit::controls::MenuItem item);
		Dynamic showSubMenu_dyn();

		virtual Void hideSubMenus( );
		Dynamic hideSubMenus_dyn();

		::haxe::ui::toolkit::controls::Menu currentSubMenu;
		::haxe::ui::toolkit::controls::Menu parentMenu;
		::haxe::ui::toolkit::controls::Menu rootMenu;
		virtual ::haxe::ui::toolkit::controls::Menu get_currentSubMenu( );
		Dynamic get_currentSubMenu_dyn();

		virtual ::haxe::ui::toolkit::controls::Menu get_parentMenu( );
		Dynamic get_parentMenu_dyn();

		virtual ::haxe::ui::toolkit::controls::Menu get_rootMenu( );
		Dynamic get_rootMenu_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_Menu */ 
