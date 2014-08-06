#ifndef INCLUDED_format_svg_Grad
#define INCLUDED_format_svg_Grad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/gfx/Gradient.h>
HX_DECLARE_CLASS2(format,gfx,Gradient)
HX_DECLARE_CLASS2(format,svg,Grad)
HX_DECLARE_CLASS2(openfl,display,GradientType)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  Grad_obj : public ::format::gfx::Gradient_obj{
	public:
		typedef ::format::gfx::Gradient_obj super;
		typedef Grad_obj OBJ_;
		Grad_obj();
		Void __construct(::openfl::display::GradientType inType);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Grad_obj > __new(::openfl::display::GradientType inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Grad_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Grad"); }

		::openfl::geom::Matrix gradMatrix;
		Float radius;
		Float x1;
		Float y1;
		Float x2;
		Float y2;
		virtual Void updateMatrix( ::openfl::geom::Matrix inMatrix);
		Dynamic updateMatrix_dyn();

};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_Grad */ 
