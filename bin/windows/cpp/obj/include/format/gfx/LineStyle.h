#ifndef INCLUDED_format_gfx_LineStyle
#define INCLUDED_format_gfx_LineStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gfx,LineStyle)
HX_DECLARE_CLASS2(openfl,display,CapsStyle)
HX_DECLARE_CLASS2(openfl,display,JointStyle)
HX_DECLARE_CLASS2(openfl,display,LineScaleMode)
namespace format{
namespace gfx{


class HXCPP_CLASS_ATTRIBUTES  LineStyle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LineStyle_obj OBJ_;
		LineStyle_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LineStyle_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LineStyle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LineStyle"); }

		Float thickness;
		int color;
		Float alpha;
		bool pixelHinting;
		::openfl::display::LineScaleMode scaleMode;
		::openfl::display::CapsStyle capsStyle;
		::openfl::display::JointStyle jointStyle;
		Float miterLimit;
};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_LineStyle */ 
