#ifndef INCLUDED_haxe_ui_toolkit_core_RootManager
#define INCLUDED_haxe_ui_toolkit_core_RootManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Root)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,RootManager)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
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


class HXCPP_CLASS_ATTRIBUTES  RootManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RootManager_obj OBJ_;
		RootManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RootManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RootManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RootManager"); }

		Array< ::Dynamic > _roots;
		virtual ::haxe::ui::toolkit::core::Root createRoot( Dynamic options,Dynamic fn);
		Dynamic createRoot_dyn();

		virtual Void destroyRoot( ::haxe::ui::toolkit::core::Root root);
		Dynamic destroyRoot_dyn();

		virtual Void destroyAllRoots( );
		Dynamic destroyAllRoots_dyn();

		Array< ::Dynamic > roots;
		virtual Array< ::Dynamic > get_roots( );
		Dynamic get_roots_dyn();

		::haxe::ui::toolkit::core::Root currentRoot;
		virtual ::haxe::ui::toolkit::core::Root get_currentRoot( );
		Dynamic get_currentRoot_dyn();

		static ::haxe::ui::toolkit::core::RootManager _instance;
		static ::haxe::ui::toolkit::core::RootManager instance;
		static ::haxe::ui::toolkit::core::RootManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_RootManager */ 
