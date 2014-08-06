#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry
#define INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,_ClassManager,ClassRegistryEntry)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ClassManager{


class HXCPP_CLASS_ATTRIBUTES  ClassRegistryEntry_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClassRegistryEntry_obj OBJ_;
		ClassRegistryEntry_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ClassRegistryEntry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClassRegistryEntry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ClassRegistryEntry"); }

		::String simpleName;
		::String className;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace _ClassManager

#endif /* INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry */ 
