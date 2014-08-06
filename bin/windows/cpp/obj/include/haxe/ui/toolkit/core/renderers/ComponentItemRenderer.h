#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ComponentItemRenderer
#define INCLUDED_haxe_ui_toolkit_core_renderers_ComponentItemRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/renderers/BasicItemRenderer.h>
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IItemRenderer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,renderers,BasicItemRenderer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,renderers,ComponentItemRenderer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,renderers,ItemRenderer)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace renderers{


class HXCPP_CLASS_ATTRIBUTES  ComponentItemRenderer_obj : public ::haxe::ui::toolkit::core::renderers::BasicItemRenderer_obj{
	public:
		typedef ::haxe::ui::toolkit::core::renderers::BasicItemRenderer_obj super;
		typedef ComponentItemRenderer_obj OBJ_;
		ComponentItemRenderer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ComponentItemRenderer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentItemRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ComponentItemRenderer"); }

		::haxe::ui::toolkit::core::Component _component;
		virtual Dynamic set_data( Dynamic value);

		virtual ::Class getClassFromType( ::String type);
		Dynamic getClassFromType_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace renderers

#endif /* INCLUDED_haxe_ui_toolkit_core_renderers_ComponentItemRenderer */ 
