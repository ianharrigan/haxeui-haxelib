#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_InvalidationFlag
#define INCLUDED_haxe_ui_toolkit_core_interfaces_InvalidationFlag

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,InvalidationFlag)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  InvalidationFlag_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InvalidationFlag_obj OBJ_;
		InvalidationFlag_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InvalidationFlag_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InvalidationFlag_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("InvalidationFlag"); }

		static int LAYOUT;
		static int DISPLAY;
		static int SIZE;
		static int STATE;
		static int DATA;
		static int STYLE;
		static int ALL;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_InvalidationFlag */ 
