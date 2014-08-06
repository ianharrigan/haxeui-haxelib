#ifndef INCLUDED_motion_actuators_MotionPathActuator
#define INCLUDED_motion_actuators_MotionPathActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/actuators/SimpleActuator.h>
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,MotionPathActuator)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  MotionPathActuator_obj : public ::motion::actuators::SimpleActuator_obj{
	public:
		typedef ::motion::actuators::SimpleActuator_obj super;
		typedef MotionPathActuator_obj OBJ_;
		MotionPathActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MotionPathActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MotionPathActuator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MotionPathActuator"); }

		virtual Void apply( );

		virtual Void initialize( );

		virtual Void update( Float currentTime);

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_MotionPathActuator */ 
