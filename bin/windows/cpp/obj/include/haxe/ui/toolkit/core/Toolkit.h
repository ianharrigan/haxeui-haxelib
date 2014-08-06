#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#define INCLUDED_haxe_ui_toolkit_core_Toolkit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Root)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Toolkit)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Toolkit_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Toolkit_obj OBJ_;
		Toolkit_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Toolkit_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Toolkit_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Toolkit"); }

		virtual Void initInstance( );
		Dynamic initInstance_dyn();

		static ::haxe::ui::toolkit::core::Toolkit _instance;
		static ::haxe::ui::toolkit::core::Toolkit instance;
		static ::haxe::ui::toolkit::core::Toolkit get_instance( );
		static Dynamic get_instance_dyn();

		static Void init( );
		static Dynamic init_dyn();

		static ::haxe::ds::StringMap _registeredProcessors;
		static Void registerXMLProcessor( ::Class cls,::String prefix);
		static Dynamic registerXMLProcessor_dyn();

		static bool useDefaultTheme;
		static Dynamic theme;
		static Dynamic processXmlResource( ::String resourceId);
		static Dynamic processXmlResource_dyn();

		static Dynamic processXml( ::Xml xml);
		static Dynamic processXml_dyn();

		static Dynamic processXmlNode( ::Xml node);
		static Dynamic processXmlNode_dyn();

		static ::String _defaultTransition;
		static ::haxe::ds::StringMap _transitionRegister;
		static ::String get_defaultTransition( );
		static Dynamic get_defaultTransition_dyn();

		static ::String set_defaultTransition( ::String value);
		static Dynamic set_defaultTransition_dyn();

		static ::String getTransitionForClass( ::Class cls);
		static Dynamic getTransitionForClass_dyn();

		static Void setTransitionForClass( ::Class cls,::String transition);
		static Dynamic setTransitionForClass_dyn();

		static ::haxe::ui::toolkit::core::Root openFullscreen( Dynamic fn);
		static Dynamic openFullscreen_dyn();

		static ::haxe::ui::toolkit::core::Root openPopup( Dynamic options,Dynamic fn);
		static Dynamic openPopup_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Toolkit */ 
