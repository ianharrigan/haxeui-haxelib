#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer
#define INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Image)
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
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IItemRenderer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,renderers,BasicItemRenderer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,renderers,ItemRenderer)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace renderers{


class HXCPP_CLASS_ATTRIBUTES  BasicItemRenderer_obj : public ::haxe::ui::toolkit::core::renderers::ItemRenderer_obj{
	public:
		typedef ::haxe::ui::toolkit::core::renderers::ItemRenderer_obj super;
		typedef BasicItemRenderer_obj OBJ_;
		BasicItemRenderer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BasicItemRenderer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BasicItemRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BasicItemRenderer"); }

		::haxe::ui::toolkit::containers::VBox _vbox;
		::haxe::ui::toolkit::controls::Text _maintext;
		::haxe::ui::toolkit::controls::Text _subtext;
		::haxe::ui::toolkit::controls::Image _icon;
		virtual Dynamic set_data( Dynamic value);

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace renderers

#endif /* INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer */ 
