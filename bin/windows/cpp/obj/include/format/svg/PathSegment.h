#ifndef INCLUDED_format_svg_PathSegment
#define INCLUDED_format_svg_PathSegment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,svg,PathSegment)
HX_DECLARE_CLASS2(format,svg,RenderContext)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  PathSegment_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PathSegment_obj OBJ_;
		PathSegment_obj();
		Void __construct(Float inX,Float inY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PathSegment_obj > __new(Float inX,Float inY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PathSegment_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PathSegment"); }

		Float x;
		Float y;
		virtual int getType( );
		Dynamic getType_dyn();

		virtual Float prevX( );
		Dynamic prevX_dyn();

		virtual Float prevY( );
		Dynamic prevY_dyn();

		virtual Float prevCX( );
		Dynamic prevCX_dyn();

		virtual Float prevCY( );
		Dynamic prevCY_dyn();

		virtual Void toGfx( ::format::gfx::Gfx inGfx,::format::svg::RenderContext ioContext);
		Dynamic toGfx_dyn();

		static int MOVE;
		static int DRAW;
		static int CURVE;
		static int CUBIC;
		static int ARC;
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_PathSegment */ 
