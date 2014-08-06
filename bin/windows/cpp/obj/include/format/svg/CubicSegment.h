#ifndef INCLUDED_format_svg_CubicSegment
#define INCLUDED_format_svg_CubicSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/svg/PathSegment.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,svg,CubicSegment)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(format,svg,QuadraticSegment)
HX_DECLARE_CLASS2(format,svg,RenderContext)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  CubicSegment_obj : public ::format::svg::PathSegment_obj{
	public:
		typedef ::format::svg::PathSegment_obj super;
		typedef CubicSegment_obj OBJ_;
		CubicSegment_obj();
		Void __construct(Float inCX1,Float inCY1,Float inCX2,Float inCY2,Float inX,Float inY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CubicSegment_obj > __new(Float inCX1,Float inCY1,Float inCX2,Float inCY2,Float inX,Float inY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CubicSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CubicSegment"); }

		Float cx1;
		Float cy1;
		Float cx2;
		Float cy2;
		virtual Float prevCX( );

		virtual Float prevCY( );

		virtual Float Interp( Float a,Float b,Float frac);
		Dynamic Interp_dyn();

		virtual Void toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext);

		virtual Array< ::Dynamic > toQuadratics( Float tx0,Float ty0);
		Dynamic toQuadratics_dyn();

		virtual int getType( );

};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_CubicSegment */ 
