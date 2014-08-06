#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#define INCLUDED_haxe_ui_toolkit_controls_Slider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/controls/Progress.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Progress)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Slider)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDirectional)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  Slider_obj : public ::haxe::ui::toolkit::controls::Progress_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::Progress_obj super;
		typedef Slider_obj OBJ_;
		Slider_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Slider_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Slider_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Slider"); }

		::haxe::ui::toolkit::controls::Button _thumb;
		Float _mouseDownOffset;
		virtual Void initialize( );

		virtual Dynamic get_value( );

		virtual Dynamic set_value( Dynamic newValue);

		virtual Void _onMouseDown( ::openfl::events::MouseEvent event);
		Dynamic _onMouseDown_dyn();

		virtual Void _onScreenMouseMove( ::openfl::events::MouseEvent event);
		Dynamic _onScreenMouseMove_dyn();

		virtual Void _onScreenMouseUp( ::openfl::events::MouseEvent event);
		Dynamic _onScreenMouseUp_dyn();

		virtual Void _onBackgroundMouseDown( ::openfl::events::MouseEvent event);
		Dynamic _onBackgroundMouseDown_dyn();

		virtual Float calcPosFromCoord( Float coord);
		Dynamic calcPosFromCoord_dyn();

		virtual Void _onMouseWheel( ::openfl::events::MouseEvent event);
		Dynamic _onMouseWheel_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_Slider */ 
