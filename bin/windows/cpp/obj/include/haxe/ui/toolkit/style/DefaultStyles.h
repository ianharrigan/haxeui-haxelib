#ifndef INCLUDED_haxe_ui_toolkit_style_DefaultStyles
#define INCLUDED_haxe_ui_toolkit_style_DefaultStyles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/style/Styles.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,DefaultStyles)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Styles)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{


class HXCPP_CLASS_ATTRIBUTES  DefaultStyles_obj : public ::haxe::ui::toolkit::style::Styles_obj{
	public:
		typedef ::haxe::ui::toolkit::style::Styles_obj super;
		typedef DefaultStyles_obj OBJ_;
		DefaultStyles_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DefaultStyles_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultStyles_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DefaultStyles"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style

#endif /* INCLUDED_haxe_ui_toolkit_style_DefaultStyles */ 
