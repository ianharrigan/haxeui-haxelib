#ifndef INCLUDED_format_gfx_GfxExtent
#define INCLUDED_format_gfx_GfxExtent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/gfx/Gfx.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,GfxExtent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace format{
namespace gfx{


class HXCPP_CLASS_ATTRIBUTES  GfxExtent_obj : public ::format::gfx::Gfx_obj{
	public:
		typedef ::format::gfx::Gfx_obj super;
		typedef GfxExtent_obj OBJ_;
		GfxExtent_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GfxExtent_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GfxExtent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GfxExtent"); }

		::openfl::geom::Rectangle extent;
		virtual Void addExtent( Float inX,Float inY);
		Dynamic addExtent_dyn();

		virtual bool geometryOnly( );

		virtual Void moveTo( Float inX,Float inY);

		virtual Void lineTo( Float inX,Float inY);

		virtual Void curveTo( Float inCX,Float inCY,Float inX,Float inY);

};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_GfxExtent */ 
