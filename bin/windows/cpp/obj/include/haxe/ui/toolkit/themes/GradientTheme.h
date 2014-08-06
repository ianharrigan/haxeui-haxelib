#ifndef INCLUDED_haxe_ui_toolkit_themes_GradientTheme
#define INCLUDED_haxe_ui_toolkit_themes_GradientTheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/themes/Theme.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,themes,GradientTheme)
HX_DECLARE_CLASS4(haxe,ui,toolkit,themes,Theme)
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES  GradientTheme_obj : public ::haxe::ui::toolkit::themes::Theme_obj{
	public:
		typedef ::haxe::ui::toolkit::themes::Theme_obj super;
		typedef GradientTheme_obj OBJ_;
		GradientTheme_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GradientTheme_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GradientTheme_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GradientTheme"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes

#endif /* INCLUDED_haxe_ui_toolkit_themes_GradientTheme */ 
