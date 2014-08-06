#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRule
#define INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRule

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS5(haxe,ui,toolkit,style,_StyleManager,StyleRule)
HX_DECLARE_CLASS5(haxe,ui,toolkit,style,_StyleManager,StyleRulePart)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{
namespace _StyleManager{


class HXCPP_CLASS_ATTRIBUTES  StyleRule_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StyleRule_obj OBJ_;
		StyleRule_obj();
		Void __construct(::String rule,::haxe::ui::toolkit::style::Style style);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StyleRule_obj > __new(::String rule,::haxe::ui::toolkit::style::Style style);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleRule_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StyleRule"); }

		Array< ::Dynamic > ruleParts;
		::haxe::ui::toolkit::style::Style style;
		virtual bool containsClassName( ::String className);
		Dynamic containsClassName_dyn();

		virtual bool isRelevant( ::String id,::String className,::String state,::String styleName);
		Dynamic isRelevant_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
} // end namespace _StyleManager

#endif /* INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRule */ 
