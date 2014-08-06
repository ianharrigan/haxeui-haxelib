#ifndef INCLUDED_format_svg_DrawSegment
#define INCLUDED_format_svg_DrawSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/svg/PathSegment.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,svg,DrawSegment)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(format,svg,RenderContext)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  DrawSegment_obj : public ::format::svg::PathSegment_obj{
	public:
		typedef ::format::svg::PathSegment_obj super;
		typedef DrawSegment_obj OBJ_;
		DrawSegment_obj();
		Void __construct(Float inX,Float inY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DrawSegment_obj > __new(Float inX,Float inY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DrawSegment"); }

		virtual Void toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext);

		virtual int getType( );

};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_DrawSegment */ 
