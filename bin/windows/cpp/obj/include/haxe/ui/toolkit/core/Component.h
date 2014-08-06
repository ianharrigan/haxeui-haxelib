#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#define INCLUDED_haxe_ui_toolkit_core_Component

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Component_obj : public ::haxe::ui::toolkit::core::StyleableDisplayObject_obj{
	public:
		typedef ::haxe::ui::toolkit::core::StyleableDisplayObject_obj super;
		typedef Component_obj OBJ_;
		Component_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Component_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Component_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< Component_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< Component_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IComponent_delegate_< Component_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< Component_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Component_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< Component_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Component"); }

		::String _text;
		bool _clipContent;
		bool _disabled;
		virtual Void initialize( );

		virtual Void postInitialize( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		Dynamic userData;
		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual Float get_clipWidth( );
		Dynamic get_clipWidth_dyn();

		virtual Float set_clipWidth( Float value);
		Dynamic set_clipWidth_dyn();

		virtual Float get_clipHeight( );
		Dynamic get_clipHeight_dyn();

		virtual Float set_clipHeight( Float value);
		Dynamic set_clipHeight_dyn();

		virtual bool get_clipContent( );
		Dynamic get_clipContent_dyn();

		virtual bool set_clipContent( bool value);
		Dynamic set_clipContent_dyn();

		virtual Void clearClip( );
		Dynamic clearClip_dyn();

		virtual bool get_disabled( );
		Dynamic get_disabled_dyn();

		virtual bool set_disabled( bool value);
		Dynamic set_disabled_dyn();

		virtual Dynamic get_value( );
		Dynamic get_value_dyn();

		virtual Dynamic set_value( Dynamic newValue);
		Dynamic set_value_dyn();

		::haxe::ds::StringMap _cachedListeners;
		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual Void removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture);

		virtual bool disablableEventType( ::String type);
		Dynamic disablableEventType_dyn();

		::openfl::geom::Point mouseDownPos;
		virtual Void _onComponentMouseDown( ::openfl::events::MouseEvent event);
		Dynamic _onComponentMouseDown_dyn();

		virtual Void _onComponentMouseUp( ::openfl::events::MouseEvent event);
		Dynamic _onComponentMouseUp_dyn();

		virtual Void _onComponentMouseMove( ::openfl::events::MouseEvent event);
		Dynamic _onComponentMouseMove_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Component */ 
