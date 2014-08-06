#ifndef INCLUDED_format_gfx_Gradient
#define INCLUDED_format_gfx_Gradient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(openfl,display,GradientType)
HX_DECLARE_CLASS2(openfl,display,InterpolationMethod)
HX_DECLARE_CLASS2(openfl,display,SpreadMethod)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace format{
namespace gfx{


class HXCPP_CLASS_ATTRIBUTES  Gradient_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Gradient_obj OBJ_;
		Gradient_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Gradient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gradient_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Gradient"); }

		::openfl::display::GradientType type;
		Array< int > colors;
		Array< Float > alphas;
		Array< int > ratios;
		::openfl::geom::Matrix matrix;
		::openfl::display::SpreadMethod spread;
		::openfl::display::InterpolationMethod interp;
		Float focus;
};

} // end namespace format
} // end namespace gfx

#endif /* INCLUDED_format_gfx_Gradient */ 
