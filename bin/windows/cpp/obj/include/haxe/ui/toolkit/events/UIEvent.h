#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#define INCLUDED_haxe_ui_toolkit_events_UIEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/events/Event.h>
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
HX_DECLARE_CLASS4(haxe,ui,toolkit,events,UIEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
namespace haxe{
namespace ui{
namespace toolkit{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  UIEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef UIEvent_obj OBJ_;
		UIEvent_obj();
		Void __construct(::String type,::haxe::ui::toolkit::core::Component c,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< UIEvent_obj > __new(::String type,::haxe::ui::toolkit::core::Component c,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UIEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("UIEvent"); }

		::haxe::ui::toolkit::core::interfaces::IDisplayObject displayObject;
		::haxe::ui::toolkit::core::Component component;
		Dynamic data;
		Float stageX;
		Float stageY;
		virtual ::openfl::events::Event clone( );

		::haxe::ui::toolkit::core::Component _component;
		virtual ::haxe::ui::toolkit::core::Component get_component( );
		Dynamic get_component_dyn();

		virtual Dynamic getComponentAs( ::Class type);
		Dynamic getComponentAs_dyn();

		virtual Dynamic getDataAs( ::Class type);
		Dynamic getDataAs_dyn();

		static ::String PREFIX;
		static ::String INIT;
		static ::String RESIZE;
		static ::String READY;
		static ::String CLICK;
		static ::String MOUSE_DOWN;
		static ::String MOUSE_UP;
		static ::String MOUSE_OVER;
		static ::String MOUSE_OUT;
		static ::String MOUSE_MOVE;
		static ::String DOUBLE_CLICK;
		static ::String ROLL_OVER;
		static ::String ROLL_OUT;
		static ::String CHANGE;
		static ::String SCROLL;
		static ::String ADDED;
		static ::String ADDED_TO_STAGE;
		static ::String REMOVED;
		static ::String REMOVED_FROM_STAGE;
		static ::String ACTIVATE;
		static ::String DEACTIVATE;
		static ::String GLYPH_CLICK;
		static ::String COMPONENT_EVENT;
		static ::String MENU_SELECT;
		static ::String MENU_OPEN;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace events

#endif /* INCLUDED_haxe_ui_toolkit_events_UIEvent */ 
