#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#define INCLUDED_haxe_ui_toolkit_style_Styles

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Styles)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{


class HXCPP_CLASS_ATTRIBUTES  Styles_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Styles_obj OBJ_;
		Styles_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Styles_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Styles_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Styles"); }

		::haxe::ds::StringMap _styles;
		Array< ::String > _styleRules;
		Dynamic rules;
		virtual ::haxe::ui::toolkit::style::Style addStyle( ::String rule,::haxe::ui::toolkit::style::Style style);
		Dynamic addStyle_dyn();

		virtual ::haxe::ui::toolkit::style::Style getStyle( ::String rule);
		Dynamic getStyle_dyn();

		virtual Dynamic get_rules( );
		Dynamic get_rules_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style

#endif /* INCLUDED_haxe_ui_toolkit_style_Styles */ 
