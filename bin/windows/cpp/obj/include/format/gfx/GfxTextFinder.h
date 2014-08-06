#ifndef INCLUDED_format_gfx_GfxTextFinder
#define INCLUDED_format_gfx_GfxTextFinder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/gfx/Gfx.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,GfxTextFinder)
HX_DECLARE_CLASS2(format,svg,Text)
namespace format{
namespace gfx{


class HXCPP_CLASS_ATTRIBUTES  GfxTextFinder_obj : public ::format::gfx::Gfx_obj{
	public:
		typedef ::format::gfx::Gfx_obj super;
		typedef GfxTextFinder_obj OBJ_;
		GfxTextFinder_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GfxTextFinder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GfxTextFinder_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GfxTextFinder"); }

		::format::svg::Text text;
		virtual bool geometryOnly( );

		virtual Void renderText( ::format::svg::Text inText);

};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_GfxTextFinder */ 