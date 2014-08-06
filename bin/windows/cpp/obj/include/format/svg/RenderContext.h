#ifndef INCLUDED_format_svg_RenderContext
#define INCLUDED_format_svg_RenderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,RenderContext)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  RenderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RenderContext_obj OBJ_;
		RenderContext_obj();
		Void __construct(::openfl::geom::Matrix inMatrix,::openfl::geom::Rectangle inRect,Dynamic inW,Dynamic inH);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RenderContext_obj > __new(::openfl::geom::Matrix inMatrix,::openfl::geom::Rectangle inRect,Dynamic inW,Dynamic inH);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RenderContext_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RenderContext"); }

		virtual Float transX( Float inX,Float inY);
		Dynamic transX_dyn();

		virtual Float transY( Float inX,Float inY);
		Dynamic transY_dyn();

		virtual Void setLast( Float inX,Float inY);
		Dynamic setLast_dyn();

		::openfl::geom::Matrix matrix;
		::openfl::geom::Rectangle rect;
		Float rectW;
		Float rectH;
		Float firstX;
		Float firstY;
		Float lastX;
		Float lastY;
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_RenderContext */ 
