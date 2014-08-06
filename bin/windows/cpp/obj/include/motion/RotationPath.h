#ifndef INCLUDED_motion_RotationPath
#define INCLUDED_motion_RotationPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <motion/IComponentPath.h>
HX_DECLARE_CLASS1(motion,ComponentPath)
HX_DECLARE_CLASS1(motion,IComponentPath)
HX_DECLARE_CLASS1(motion,RotationPath)
namespace motion{


class HXCPP_CLASS_ATTRIBUTES  RotationPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RotationPath_obj OBJ_;
		RotationPath_obj();
		Void __construct(::motion::ComponentPath x,::motion::ComponentPath y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RotationPath_obj > __new(::motion::ComponentPath x,::motion::ComponentPath y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RotationPath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::motion::IComponentPath_obj *()
			{ return new ::motion::IComponentPath_delegate_< RotationPath_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("RotationPath"); }

		Float end;
		Float offset;
		Float start;
		Float step;
		::motion::ComponentPath _x;
		::motion::ComponentPath _y;
		virtual Float calculate( Float k);
		Dynamic calculate_dyn();

		virtual Float get_end( );
		Dynamic get_end_dyn();

};

} // end namespace motion

#endif /* INCLUDED_motion_RotationPath */ 
