#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ComponentRegistryEntry
#define INCLUDED_haxe_ui_toolkit_core__ClassManager_ComponentRegistryEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,_ClassManager,ClassRegistryEntry)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,_ClassManager,ComponentRegistryEntry)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ClassManager{


class HXCPP_CLASS_ATTRIBUTES  ComponentRegistryEntry_obj : public ::haxe::ui::toolkit::core::_ClassManager::ClassRegistryEntry_obj{
	public:
		typedef ::haxe::ui::toolkit::core::_ClassManager::ClassRegistryEntry_obj super;
		typedef ComponentRegistryEntry_obj OBJ_;
		ComponentRegistryEntry_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ComponentRegistryEntry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ComponentRegistryEntry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ComponentRegistryEntry"); }

		::String prefix;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace _ClassManager

#endif /* INCLUDED_haxe_ui_toolkit_core__ClassManager_ComponentRegistryEntry */ 
