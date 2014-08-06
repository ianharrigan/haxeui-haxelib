#ifndef INCLUDED_motion_actuators_PropertyDetails
#define INCLUDED_motion_actuators_PropertyDetails

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,actuators,PropertyDetails)
namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  PropertyDetails_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PropertyDetails_obj OBJ_;
		PropertyDetails_obj();
		Void __construct(Dynamic target,::String propertyName,Float start,Float change,hx::Null< bool >  __o_isField);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PropertyDetails_obj > __new(Dynamic target,::String propertyName,Float start,Float change,hx::Null< bool >  __o_isField);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PropertyDetails_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PropertyDetails"); }

		Float change;
		bool isField;
		::String propertyName;
		Float start;
		Dynamic target;
};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_PropertyDetails */ 
