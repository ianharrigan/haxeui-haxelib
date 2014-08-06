#ifndef INCLUDED_haxe_ui_toolkit_themes_DefaultTheme
#define INCLUDED_haxe_ui_toolkit_themes_DefaultTheme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/themes/Theme.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,themes,DefaultTheme)
HX_DECLARE_CLASS4(haxe,ui,toolkit,themes,Theme)
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES  DefaultTheme_obj : public ::haxe::ui::toolkit::themes::Theme_obj{
	public:
		typedef ::haxe::ui::toolkit::themes::Theme_obj super;
		typedef DefaultTheme_obj OBJ_;
		DefaultTheme_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DefaultTheme_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultTheme_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DefaultTheme"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes

#endif /* INCLUDED_haxe_ui_toolkit_themes_DefaultTheme */ 
