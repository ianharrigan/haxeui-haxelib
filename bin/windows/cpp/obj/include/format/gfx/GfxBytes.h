#ifndef INCLUDED_format_gfx_GfxBytes
#define INCLUDED_format_gfx_GfxBytes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/gfx/Gfx.h>
HX_DECLARE_CLASS2(format,gfx,Gfx)
HX_DECLARE_CLASS2(format,gfx,GfxBytes)
HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(format,gfx,LineStyle)
HX_DECLARE_CLASS2(haxe,crypto,BaseCode)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,CapsStyle)
HX_DECLARE_CLASS2(openfl,display,InterpolationMethod)
HX_DECLARE_CLASS2(openfl,display,JointStyle)
HX_DECLARE_CLASS2(openfl,display,LineScaleMode)
HX_DECLARE_CLASS2(openfl,display,SpreadMethod)
HX_DECLARE_CLASS2(openfl,utils,ByteArray)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace format{
namespace gfx{


class HXCPP_CLASS_ATTRIBUTES  GfxBytes_obj : public ::format::gfx::Gfx_obj{
	public:
		typedef ::format::gfx::Gfx_obj super;
		typedef GfxBytes_obj OBJ_;
		GfxBytes_obj();
		Void __construct(::openfl::utils::ByteArray inBuffer,hx::Null< int >  __o_inFlags);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GfxBytes_obj > __new(::openfl::utils::ByteArray inBuffer,hx::Null< int >  __o_inFlags);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GfxBytes_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GfxBytes"); }

		::openfl::utils::ByteArray buffer;
		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void eof( );

		virtual Void iterate( ::format::gfx::Gfx inGfx);
		Dynamic iterate_dyn();

		virtual Void size( Float inWidth,Float inHeight);

		virtual Void pushClipped( Float inVal);
		Dynamic pushClipped_dyn();

		virtual Void writeRGB( int inVal);
		Dynamic writeRGB_dyn();

		virtual int readRGB( );
		Dynamic readRGB_dyn();

		virtual Void beginGradientFill( ::format::gfx::Gradient grad);

		virtual Void beginFill( int color,Float alpha);

		virtual Void endFill( );

		virtual Void lineStyle( ::format::gfx::LineStyle style);

		virtual Void endLineStyle( );

		virtual Void moveTo( Float inX,Float inY);

		virtual Void lineTo( Float inX,Float inY);

		virtual Void curveTo( Float inCX,Float inCY,Float inX,Float inY);

		static int _EOF;
		static int SIZE;
		static int BEGIN_FILL;
		static int GRADIENT_FILL;
		static int END_FILL;
		static int LINE_STYLE;
		static int END_LINE_STYLE;
		static int MOVE;
		static int LINE;
		static int CURVE;
		static ::String base64;
		static ::haxe::crypto::BaseCode baseCoder;
		static ::format::gfx::GfxBytes fromString( ::String inString);
		static Dynamic fromString_dyn();

		static Array< ::Dynamic > scaleModes;
		static Array< ::Dynamic > capsStyles;
		static Array< ::Dynamic > jointStyles;
		static Array< ::Dynamic > spreadMethods;
		static Array< ::Dynamic > interpolationMethods;
};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_GfxBytes */ 
