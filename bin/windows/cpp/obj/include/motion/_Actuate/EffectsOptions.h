#ifndef INCLUDED_motion__Actuate_EffectsOptions
#define INCLUDED_motion__Actuate_EffectsOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,_Actuate,EffectsOptions)
HX_DECLARE_CLASS2(motion,actuators,IGenericActuator)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace motion{
namespace _Actuate{


class HXCPP_CLASS_ATTRIBUTES  EffectsOptions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EffectsOptions_obj OBJ_;
		EffectsOptions_obj();
		Void __construct(::openfl::display::DisplayObject target,Float duration,bool overwrite);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EffectsOptions_obj > __new(::openfl::display::DisplayObject target,Float duration,bool overwrite);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EffectsOptions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EffectsOptions"); }

		Float duration;
		bool overwrite;
		::openfl::display::DisplayObject target;
		virtual ::motion::actuators::IGenericActuator filter( Dynamic reference,Dynamic properties);
		Dynamic filter_dyn();

};

} // end namespace motion
} // end namespace _Actuate

#endif /* INCLUDED_motion__Actuate_EffectsOptions */ 
