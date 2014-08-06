#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#define INCLUDED_haxe_ui_toolkit_core_StateComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/Component.h>
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  StateComponent_obj : public ::haxe::ui::toolkit::core::Component_obj{
	public:
		typedef ::haxe::ui::toolkit::core::Component_obj super;
		typedef StateComponent_obj OBJ_;
		StateComponent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StateComponent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StateComponent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< StateComponent_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< StateComponent_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IComponent_delegate_< StateComponent_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< StateComponent_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< StateComponent_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IStateComponent_delegate_< StateComponent_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< StateComponent_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("StateComponent"); }

		::String _state;
		Array< ::String > _states;
		virtual Void buildStyles( );

		virtual Void addStates( Array< ::String > stateNames,hx::Null< bool >  rebuildStyles);
		Dynamic addStates_dyn();

		virtual Void addState( ::String stateName,hx::Null< bool >  rebuildStyles);
		Dynamic addState_dyn();

		Array< ::String > states;
		virtual ::String get_state( );
		Dynamic get_state_dyn();

		virtual ::String set_state( ::String value);
		Dynamic set_state_dyn();

		virtual Array< ::String > get_states( );
		Dynamic get_states_dyn();

		virtual bool hasState( ::String state);
		Dynamic hasState_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_StateComponent */ 
