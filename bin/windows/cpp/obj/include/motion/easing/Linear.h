#ifndef INCLUDED_motion_easing_Linear
#define INCLUDED_motion_easing_Linear

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,Linear)
namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES  Linear_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Linear_obj OBJ_;
		Linear_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Linear_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Linear_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Linear"); }

		static ::motion::easing::IEasing get_easeNone( );
		static Dynamic get_easeNone_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_Linear */ 
