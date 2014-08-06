#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#define INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  StyleableDisplayObject_obj : public ::haxe::ui::toolkit::core::DisplayObjectContainer_obj{
	public:
		typedef ::haxe::ui::toolkit::core::DisplayObjectContainer_obj super;
		typedef StyleableDisplayObject_obj OBJ_;
		StyleableDisplayObject_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StyleableDisplayObject_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleableDisplayObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObject_delegate_< StyleableDisplayObject_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_delegate_< StyleableDisplayObject_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< StyleableDisplayObject_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< StyleableDisplayObject_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_delegate_< StyleableDisplayObject_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("StyleableDisplayObject"); }

		::haxe::ui::toolkit::style::Style _style;
		::haxe::ds::StringMap _storedStyles;
		::String _styleName;
		::haxe::ui::toolkit::style::Style _inlineStyle;
		virtual Void preInitialize( );

		virtual Void paint( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual ::String set_id( ::String value);

		virtual ::haxe::ui::toolkit::core::interfaces::ILayout set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value);

		virtual ::haxe::ui::toolkit::style::Style get_style( );
		Dynamic get_style_dyn();

		virtual ::haxe::ui::toolkit::style::Style set_style( ::haxe::ui::toolkit::style::Style value);
		Dynamic set_style_dyn();

		virtual ::String get_styleName( );
		Dynamic get_styleName_dyn();

		virtual ::String set_styleName( ::String value);
		Dynamic set_styleName_dyn();

		virtual ::haxe::ui::toolkit::style::Style get_inlineStyle( );
		Dynamic get_inlineStyle_dyn();

		virtual ::haxe::ui::toolkit::style::Style set_inlineStyle( ::haxe::ui::toolkit::style::Style value);
		Dynamic set_inlineStyle_dyn();

		virtual Void storeStyle( ::String id,::haxe::ui::toolkit::style::Style value);
		Dynamic storeStyle_dyn();

		virtual ::haxe::ui::toolkit::style::Style retrieveStyle( ::String id);
		Dynamic retrieveStyle_dyn();

		virtual Void applyStyle( );
		Dynamic applyStyle_dyn();

		virtual Void buildStyles( );
		Dynamic buildStyles_dyn();

		virtual Void refreshStyle( );
		Dynamic refreshStyle_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject */ 
