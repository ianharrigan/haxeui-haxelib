#ifndef INCLUDED_haxe_ui_toolkit_controls_TabBar
#define INCLUDED_haxe_ui_toolkit_controls_TabBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/containers/ScrollView.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,HBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TabBar)
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
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  TabBar_obj : public ::haxe::ui::toolkit::containers::ScrollView_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::ScrollView_obj super;
		typedef TabBar_obj OBJ_;
		TabBar_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TabBar_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TabBar_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TabBar"); }

		::haxe::ui::toolkit::containers::HBox _content;
		int _selectedIndex;
		virtual Void initialize( );

		int numTabs;
		virtual int get_selectedIndex( );
		Dynamic get_selectedIndex_dyn();

		virtual int set_selectedIndex( int value);
		Dynamic set_selectedIndex_dyn();

		virtual int get_numTabs( );
		Dynamic get_numTabs_dyn();

		virtual ::haxe::ui::toolkit::controls::Button addTab( ::String text);
		Dynamic addTab_dyn();

		virtual Void removeTab( int index);
		Dynamic removeTab_dyn();

		virtual ::haxe::ui::toolkit::controls::Button getTabButton( int index);
		Dynamic getTabButton_dyn();

		virtual Void removeAllTabs( );
		Dynamic removeAllTabs_dyn();

		virtual Void setTabText( int index,::String text);
		Dynamic setTabText_dyn();

		virtual Void tabButtonClick( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic tabButtonClick_dyn();

		virtual Void tabGlyphClick( ::haxe::ui::toolkit::events::UIEvent event);
		Dynamic tabGlyphClick_dyn();

		virtual Void _onMouseWheel( ::openfl::events::MouseEvent event);

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_TabBar */ 
