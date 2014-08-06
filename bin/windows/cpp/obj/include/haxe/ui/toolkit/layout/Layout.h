#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#define INCLUDED_haxe_ui_toolkit_layout_Layout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,Layout)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{


class HXCPP_CLASS_ATTRIBUTES  Layout_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Layout_obj OBJ_;
		Layout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Layout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layout_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Layout_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::ILayout_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::ILayout_delegate_< Layout_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Layout"); }

		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _container;
		::openfl::geom::Rectangle _padding;
		int _spacingX;
		int _spacingY;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer get_container( );
		Dynamic get_container_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer set_container( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value);
		Dynamic set_container_dyn();

		virtual ::openfl::geom::Rectangle get_padding( );
		Dynamic get_padding_dyn();

		virtual ::openfl::geom::Rectangle set_padding( ::openfl::geom::Rectangle value);
		Dynamic set_padding_dyn();

		virtual int get_spacingX( );
		Dynamic get_spacingX_dyn();

		virtual int set_spacingX( int value);
		Dynamic set_spacingX_dyn();

		virtual int get_spacingY( );
		Dynamic get_spacingY_dyn();

		virtual int set_spacingY( int value);
		Dynamic set_spacingY_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void resizeChildren( );
		Dynamic resizeChildren_dyn();

		virtual Void repositionChildren( );
		Dynamic repositionChildren_dyn();

		Float innerWidth;
		Float innerHeight;
		Float usableWidth;
		Float usableHeight;
		virtual Float get_innerWidth( );
		Dynamic get_innerWidth_dyn();

		virtual Float get_innerHeight( );
		Dynamic get_innerHeight_dyn();

		virtual Float get_usableWidth( );
		Dynamic get_usableWidth_dyn();

		virtual Float get_usableHeight( );
		Dynamic get_usableHeight_dyn();

		virtual Dynamic clone( );
		Dynamic clone_dyn();

		virtual Dynamic self( );
		Dynamic self_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout

#endif /* INCLUDED_haxe_ui_toolkit_layout_Layout */ 
