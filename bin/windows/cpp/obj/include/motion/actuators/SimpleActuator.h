#ifndef INCLUDED_motion_actuators_SimpleActuator
#define INCLUDED_motion_actuators_SimpleActuator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/actuators/GenericActuator.h>
HX_DECLARE_CLASS2(motion,actuators,GenericActuator)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(motion,actuators,PropertyDetails)
HX_DECLARE_CLASS2(motion,actuators,SimpleActuator)
HX_DECLARE_CLASS2(openfl,events,Event)
namespace motion{
namespace actuators{


class HXCPP_CLASS_ATTRIBUTES  SimpleActuator_obj : public ::motion::actuators::GenericActuator_obj{
	public:
		typedef ::motion::actuators::GenericActuator_obj super;
		typedef SimpleActuator_obj OBJ_;
		SimpleActuator_obj();
		Void __construct(Dynamic target,Float duration,Dynamic properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SimpleActuator_obj > __new(Dynamic target,Float duration,Dynamic properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleActuator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SimpleActuator"); }

		Float timeOffset;
		bool active;
		bool cacheVisible;
		int detailsLength;
		bool initialized;
		bool paused;
		Float pauseTime;
		Array< ::Dynamic > propertyDetails;
		bool sendChange;
		bool setVisible;
		Float startTime;
		bool toggleVisible;
		virtual ::motion::actuators::IGenericActuator autoVisible( Dynamic value);

		virtual ::motion::actuators::IGenericActuator delay( Float duration);

		virtual Dynamic getField( Dynamic target,::String propertyName);
		Dynamic getField_dyn();

		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual Void move( );

		virtual ::motion::actuators::IGenericActuator onUpdate( Dynamic handler,Dynamic parameters);

		virtual Void pause( );

		virtual Void resume( );

		virtual Void setField( Dynamic target,::String propertyName,Dynamic value);
		Dynamic setField_dyn();

		virtual Void setProperty( ::motion::actuators::PropertyDetails details,Dynamic value);
		Dynamic setProperty_dyn();

		virtual Void stop( Dynamic properties,bool complete,bool sendEvent);

		virtual Void update( Float currentTime);
		Dynamic update_dyn();

		static Array< ::Dynamic > actuators;
		static int actuatorsLength;
		static bool addedEvent;
		static Void stage_onEnterFrame( ::openfl::events::Event event);
		static Dynamic stage_onEnterFrame_dyn();

};

} // end namespace motion
} // end namespace actuators

#endif /* INCLUDED_motion_actuators_SimpleActuator */ 
