#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_DataSourceRegistryEntry
#define INCLUDED_haxe_ui_toolkit_core__ClassManager_DataSourceRegistryEntry

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,_ClassManager,ClassRegistryEntry)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,_ClassManager,DataSourceRegistryEntry)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace _ClassManager{


class HXCPP_CLASS_ATTRIBUTES  DataSourceRegistryEntry_obj : public ::haxe::ui::toolkit::core::_ClassManager::ClassRegistryEntry_obj{
	public:
		typedef ::haxe::ui::toolkit::core::_ClassManager::ClassRegistryEntry_obj super;
		typedef DataSourceRegistryEntry_obj OBJ_;
		DataSourceRegistryEntry_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DataSourceRegistryEntry_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataSourceRegistryEntry_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DataSourceRegistryEntry"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace _ClassManager

#endif /* INCLUDED_haxe_ui_toolkit_core__ClassManager_DataSourceRegistryEntry */ 
