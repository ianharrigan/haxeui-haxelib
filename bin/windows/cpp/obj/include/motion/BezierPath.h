#ifndef INCLUDED_motion_BezierPath
#define INCLUDED_motion_BezierPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(motion,BezierPath)
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  BezierPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BezierPath_obj OBJ_;
		BezierPath_obj();
		Void __construct(Float end,Float control,Float strength);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BezierPath_obj > __new(Float end,Float control,Float strength);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BezierPath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BezierPath"); }

		Float control;
		Float end;
		Float strength;
		virtual Float calculate( Float start,Float k);
		Dynamic calculate_dyn();

};

} // end namespace motion

#endif /* INCLUDED_motion_BezierPath */ 
