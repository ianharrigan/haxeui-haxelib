#ifndef INCLUDED_format_svg_Path
#define INCLUDED_format_svg_Path

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,FillType)
HX_DECLARE_CLASS2(format,svg,Path)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(openfl,display,CapsStyle)
HX_DECLARE_CLASS2(openfl,display,JointStyle)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  Path_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Path_obj OBJ_;
		Path_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Path_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Path_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Path"); }

		::openfl::geom::Matrix matrix;
		::String name;
		Float font_size;
		::format::svg::FillType fill;
		Float alpha;
		Float fill_alpha;
		Float stroke_alpha;
		Dynamic stroke_colour;
		Float stroke_width;
		::openfl::display::CapsStyle stroke_caps;
		::openfl::display::JointStyle joint_style;
		Float miter_limit;
		Array< ::Dynamic > segments;
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_Path */ 
