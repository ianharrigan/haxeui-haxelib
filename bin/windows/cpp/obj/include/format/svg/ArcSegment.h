#ifndef INCLUDED_format_svg_ArcSegment
#define INCLUDED_format_svg_ArcSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/svg/PathSegment.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,svg,ArcSegment)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(format,svg,RenderContext)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  ArcSegment_obj : public ::format::svg::PathSegment_obj{
	public:
		typedef ::format::svg::PathSegment_obj super;
		typedef ArcSegment_obj OBJ_;
		ArcSegment_obj();
		Void __construct(Float inX1,Float inY1,Float inRX,Float inRY,Float inRotation,bool inLargeArc,bool inSweep,Float x,Float y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ArcSegment_obj > __new(Float inX1,Float inY1,Float inRX,Float inRY,Float inRotation,bool inLargeArc,bool inSweep,Float x,Float y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArcSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ArcSegment"); }

		Float x1;
		Float y1;
		Float rx;
		Float ry;
		Float phi;
		bool fA;
		bool fS;
		virtual Void toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext);

		virtual int getType( );

};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_ArcSegment */ 
