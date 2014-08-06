#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#define INCLUDED_haxe_ui_toolkit_controls_VScroll

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/controls/Scroll.h>
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Scroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,VScroll)
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
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,events,TimerEvent)
HX_DECLARE_CLASS2(openfl,utils,Timer)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  VScroll_obj : public ::haxe::ui::toolkit::controls::Scroll_obj{
	public:
		typedef ::haxe::ui::toolkit::controls::Scroll_obj super;
		typedef VScroll_obj OBJ_;
		VScroll_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VScroll_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VScroll_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< VScroll_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IScrollable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IScrollable_delegate_< VScroll_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("VScroll"); }

		Float _pos;
		Float _min;
		Float _max;
		Float _pageSize;
		Float _incrementSize;
		::haxe::ui::toolkit::controls::Button _deincButton;
		::haxe::ui::toolkit::controls::Button _incButton;
		::haxe::ui::toolkit::controls::Button _thumb;
		Float _mouseDownOffset;
		int _scrollDirection;
		::openfl::utils::Timer _scrollTimer;
		bool _hasButtons;
		virtual Void preInitialize( );

		virtual Void initialize( );

		virtual Void _onThumbMouseDown( ::openfl::events::MouseEvent event);
		Dynamic _onThumbMouseDown_dyn();

		virtual Void _onScreenMouseMove( ::openfl::events::MouseEvent event);
		Dynamic _onScreenMouseMove_dyn();

		virtual Void _onScreenMouseUp( ::openfl::events::MouseEvent event);
		Dynamic _onScreenMouseUp_dyn();

		virtual Void _onDeinc( ::openfl::events::MouseEvent event);
		Dynamic _onDeinc_dyn();

		virtual Void _onInc( ::openfl::events::MouseEvent event);
		Dynamic _onInc_dyn();

		virtual Void _onScrollTimerComplete( ::openfl::events::TimerEvent event);
		Dynamic _onScrollTimerComplete_dyn();

		virtual Void _onMouseDown( ::openfl::events::MouseEvent event);
		Dynamic _onMouseDown_dyn();

		virtual Float get_pos( );
		Dynamic get_pos_dyn();

		virtual Float set_pos( Float value);
		Dynamic set_pos_dyn();

		virtual Float get_min( );
		Dynamic get_min_dyn();

		virtual Float set_min( Float value);
		Dynamic set_min_dyn();

		virtual Float get_max( );
		Dynamic get_max_dyn();

		virtual Float set_max( Float value);
		Dynamic set_max_dyn();

		virtual Float get_pageSize( );
		Dynamic get_pageSize_dyn();

		virtual Float set_pageSize( Float value);
		Dynamic set_pageSize_dyn();

		virtual Float get_incrementSize( );
		Dynamic get_incrementSize_dyn();

		virtual Float set_incrementSize( Float value);
		Dynamic set_incrementSize_dyn();

		virtual Void deincrementValue( );
		Dynamic deincrementValue_dyn();

		virtual Void incrementValue( );
		Dynamic incrementValue_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_VScroll */ 
