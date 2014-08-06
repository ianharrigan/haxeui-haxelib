#ifndef INCLUDED_haxe_ui_toolkit_controls_VProgressLayout
#define INCLUDED_haxe_ui_toolkit_controls_VProgressLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/layout/DefaultLayout.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,VProgressLayout)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,DefaultLayout)
HX_DECLARE_CLASS4(haxe,ui,toolkit,layout,Layout)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  VProgressLayout_obj : public ::haxe::ui::toolkit::layout::DefaultLayout_obj{
	public:
		typedef ::haxe::ui::toolkit::layout::DefaultLayout_obj super;
		typedef VProgressLayout_obj OBJ_;
		VProgressLayout_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VProgressLayout_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VProgressLayout_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("VProgressLayout"); }

		virtual Void resizeChildren( );

		virtual Void repositionChildren( );

		virtual Dynamic clone( );

		virtual Dynamic self( );

		static Dynamic __meta__;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_VProgressLayout */ 
