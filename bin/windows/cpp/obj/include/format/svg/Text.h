#ifndef INCLUDED_format_svg_Text
#define INCLUDED_format_svg_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,FillType)
HX_DECLARE_CLASS2(format,svg,Text)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  Text_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Text_obj OBJ_;
		Text_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Text_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Text_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Text"); }

		::String name;
		Float x;
		Float y;
		::openfl::geom::Matrix matrix;
		::String text;
		::format::svg::FillType fill;
		Float fill_alpha;
		Float stroke_alpha;
		Dynamic stroke_colour;
		Float stroke_width;
		::String font_family;
		Float font_size;
		Float kerning;
		Float letter_spacing;
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_Text */ 
