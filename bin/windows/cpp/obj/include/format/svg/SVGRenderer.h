#ifndef INCLUDED_format_svg_SVGRenderer
#define INCLUDED_format_svg_SVGRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,GfxBytes)
HX_DECLARE_CLASS2(format,svg,Group)
HX_DECLARE_CLASS2(format,svg,Path)
HX_DECLARE_CLASS2(format,svg,SVGData)
HX_DECLARE_CLASS2(format,svg,SVGRenderer)
HX_DECLARE_CLASS2(format,svg,Text)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  SVGRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SVGRenderer_obj OBJ_;
		SVGRenderer_obj();
		Void __construct(::format::svg::SVGData inSvg,::String inLayer);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SVGRenderer_obj > __new(::format::svg::SVGData inSvg,::String inLayer);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SVGRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SVGRenderer"); }

		Float width;
		Float height;
		::format::svg::SVGData mSvg;
		::format::svg::Group mRoot;
		::format::gfx::Gfx mGfx;
		::openfl::geom::Matrix mMatrix;
		::openfl::geom::Rectangle mScaleRect;
		Dynamic mScaleW;
		Dynamic mScaleH;
		Dynamic mFilter;
		Dynamic &mFilter_dyn() { return mFilter;}
		Array< ::String > mGroupPath;
		virtual Dynamic iterate( Dynamic inGfx,Dynamic inFilter);
		Dynamic iterate_dyn();

		virtual bool hasGroup( ::String inName);
		Dynamic hasGroup_dyn();

		virtual Void iterateText( ::format::svg::Text inText);
		Dynamic iterateText_dyn();

		virtual Void iteratePath( ::format::svg::Path inPath);
		Dynamic iteratePath_dyn();

		virtual Void iterateGroup( ::format::svg::Group inGroup,bool inIgnoreDot);
		Dynamic iterateGroup_dyn();

		virtual Void render( ::openfl::display::Graphics inGfx,::openfl::geom::Matrix inMatrix,Dynamic inFilter,::openfl::geom::Rectangle inScaleRect,Dynamic inScaleW,Dynamic inScaleH);
		Dynamic render_dyn();

		virtual Void renderRect( ::openfl::display::Graphics inGfx,Dynamic inFilter,::openfl::geom::Rectangle scaleRect,::openfl::geom::Rectangle inBounds,::openfl::geom::Rectangle inRect);
		Dynamic renderRect_dyn();

		virtual Void renderRect0( ::openfl::display::Graphics inGfx,Dynamic inFilter,::openfl::geom::Rectangle scaleRect,::openfl::geom::Rectangle inBounds,::openfl::geom::Rectangle inRect);
		Dynamic renderRect0_dyn();

		virtual ::openfl::geom::Rectangle getExtent( ::openfl::geom::Matrix inMatrix,Dynamic inFilter,Dynamic inIgnoreDot);
		Dynamic getExtent_dyn();

		virtual ::format::svg::Text findText( Dynamic inFilter);
		Dynamic findText_dyn();

		virtual ::openfl::geom::Rectangle getMatchingRect( ::EReg inMatch);
		Dynamic getMatchingRect_dyn();

		virtual Void renderObject( ::openfl::display::DisplayObject inObj,::openfl::display::Graphics inGfx,::openfl::geom::Matrix inMatrix,Dynamic inFilter,::openfl::geom::Rectangle inScale9);
		Dynamic renderObject_dyn();

		virtual Void renderSprite( ::openfl::display::Sprite inObj,::openfl::geom::Matrix inMatrix,Dynamic inFilter,::openfl::geom::Rectangle inScale9);
		Dynamic renderSprite_dyn();

		virtual ::openfl::display::Shape createShape( ::openfl::geom::Matrix inMatrix,Dynamic inFilter,::openfl::geom::Rectangle inScale9);
		Dynamic createShape_dyn();

		virtual ::openfl::display::Shape namedShape( ::String inName);
		Dynamic namedShape_dyn();

		virtual ::openfl::display::BitmapData renderBitmap( ::openfl::geom::Rectangle inRect,hx::Null< Float >  inScale);
		Dynamic renderBitmap_dyn();

		static Array< ::String > toHaxe( ::Xml inXML,Dynamic inFilter);
		static Dynamic toHaxe_dyn();

		static ::format::gfx::GfxBytes toBytes( ::Xml inXML,Dynamic inFilter);
		static Dynamic toBytes_dyn();

};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_SVGRenderer */ 
