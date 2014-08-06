#ifndef INCLUDED_format_svg_QuadraticSegment
#define INCLUDED_format_svg_QuadraticSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/svg/PathSegment.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(format,svg,QuadraticSegment)
HX_DECLARE_CLASS2(format,svg,RenderContext)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  QuadraticSegment_obj : public ::format::svg::PathSegment_obj{
	public:
		typedef ::format::svg::PathSegment_obj super;
		typedef QuadraticSegment_obj OBJ_;
		QuadraticSegment_obj();
		Void __construct(Float inCX,Float inCY,Float inX,Float inY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< QuadraticSegment_obj > __new(Float inCX,Float inCY,Float inX,Float inY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadraticSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("QuadraticSegment"); }

		Float cx;
		Float cy;
		virtual Float prevCX( );

		virtual Float prevCY( );

		virtual Void toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext);

		virtual int getType( );

};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_QuadraticSegment */ 
