#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#define INCLUDED_haxe_ui_toolkit_controls_Button

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/StateComponent.h>
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Image)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Spacer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
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


class HXCPP_CLASS_ATTRIBUTES  Button_obj : public ::haxe::ui::toolkit::core::StateComponent_obj{
	public:
		typedef ::haxe::ui::toolkit::core::StateComponent_obj super;
		typedef Button_obj OBJ_;
		Button_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Button_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Button_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::core::interfaces::IFocusable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IFocusable_delegate_< Button_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Button_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Button"); }

		bool _allowFocus;
		bool _remainPressed;
		::haxe::ui::toolkit::controls::Text _label;
		::haxe::ui::toolkit::controls::Image _icon;
		bool _down;
		bool _toggle;
		bool _selected;
		bool _allowSelection;
		::String _iconPosition;
		bool _multiline;
		::String _group;
		Array< ::Dynamic > _spacers;
		virtual Void dispose( );

		virtual bool get_remainPressed( );
		Dynamic get_remainPressed_dyn();

		virtual bool set_remainPressed( bool value);
		Dynamic set_remainPressed_dyn();

		virtual Dynamic get_icon( );
		Dynamic get_icon_dyn();

		virtual Dynamic set_icon( Dynamic value);
		Dynamic set_icon_dyn();

		virtual Void organiseChildren( );
		Dynamic organiseChildren_dyn();

		virtual Void preInitialize( );

		virtual Void initialize( );

		virtual bool set_disabled( bool value);

		virtual ::String get_text( );

		virtual ::String set_text( ::String value);

		virtual Void _onMouseOver( ::openfl::events::MouseEvent event);
		Dynamic _onMouseOver_dyn();

		virtual Void _onMouseOut( ::openfl::events::MouseEvent event);
		Dynamic _onMouseOut_dyn();

		virtual Void _onMouseDown( ::openfl::events::MouseEvent event);
		Dynamic _onMouseDown_dyn();

		virtual Void _onMouseUp( ::openfl::events::MouseEvent event);
		Dynamic _onMouseUp_dyn();

		virtual Void _onMouseClick( ::openfl::events::MouseEvent event);
		Dynamic _onMouseClick_dyn();

		virtual Array< ::String > get_states( );

		virtual ::String set_state( ::String value);

		virtual bool get_allowFocus( );
		Dynamic get_allowFocus_dyn();

		virtual bool set_allowFocus( bool value);
		Dynamic set_allowFocus_dyn();

		bool dispatchChangeEvents;
		virtual ::String get_iconPosition( );
		Dynamic get_iconPosition_dyn();

		virtual ::String set_iconPosition( ::String value);
		Dynamic set_iconPosition_dyn();

		virtual bool get_toggle( );
		Dynamic get_toggle_dyn();

		virtual bool set_toggle( bool value);
		Dynamic set_toggle_dyn();

		virtual bool get_selected( );
		Dynamic get_selected_dyn();

		virtual bool set_selected( bool value);
		Dynamic set_selected_dyn();

		virtual ::String get_group( );
		Dynamic get_group_dyn();

		virtual ::String set_group( ::String value);
		Dynamic set_group_dyn();

		virtual bool get_allowSelection( );
		Dynamic get_allowSelection_dyn();

		virtual bool set_allowSelection( bool value);
		Dynamic set_allowSelection_dyn();

		virtual bool get_multiline( );
		Dynamic get_multiline_dyn();

		virtual bool set_multiline( bool value);
		Dynamic set_multiline_dyn();

		virtual Void applyStyle( );

		virtual Dynamic clone( );

		virtual Dynamic self( );

		static ::String STATE_NORMAL;
		static ::String STATE_OVER;
		static ::String STATE_DOWN;
		static ::String STATE_DISABLED;
		static ::haxe::ds::StringMap _groups;
		static bool optionInGroup( ::String value,::haxe::ui::toolkit::controls::Button option);
		static Dynamic optionInGroup_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_Button */ 
