#ifndef INCLUDED_format_SVG
#define INCLUDED_format_SVG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(format,SVG)
HX_DECLARE_CLASS2(format,svg,Group)
HX_DECLARE_CLASS2(format,svg,SVGData)
HX_DECLARE_CLASS2(openfl,display,Graphics)
namespace format{


class HXCPP_CLASS_ATTRIBUTES  SVG_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SVG_obj OBJ_;
		SVG_obj();
		Void __construct(::String content);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SVG_obj > __new(::String content);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SVG_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SVG"); }

		::format::svg::SVGData data;
		virtual Void render( ::openfl::display::Graphics graphics,hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< int >  width,hx::Null< int >  height);
		Dynamic render_dyn();

};

} // end namespace format

#endif /* INCLUDED_format_SVG */ 
