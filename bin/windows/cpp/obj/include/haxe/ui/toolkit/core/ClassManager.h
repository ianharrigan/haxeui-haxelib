#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#define INCLUDED_haxe_ui_toolkit_core_ClassManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,ClassManager)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  ClassManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClassManager_obj OBJ_;
		ClassManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ClassManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ClassManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ClassManager"); }

		virtual Void registerDefaults( );
		Dynamic registerDefaults_dyn();

		::haxe::ds::StringMap componentClassMap;
		virtual ::String getComponentClassName( ::String simpleName);
		Dynamic getComponentClassName_dyn();

		virtual Void registerComponentClass( ::Class cls,::String simpleName);
		Dynamic registerComponentClass_dyn();

		virtual Void registerComponentClassName( ::String className,::String simpleName);
		Dynamic registerComponentClassName_dyn();

		::haxe::ds::StringMap dataSourceClassMap;
		virtual bool hasDataSourceClass( ::String simpleName);
		Dynamic hasDataSourceClass_dyn();

		virtual ::String getDataSourceClassName( ::String simpleName);
		Dynamic getDataSourceClassName_dyn();

		virtual Void registerDataSourceClass( ::Class cls,::String simpleName);
		Dynamic registerDataSourceClass_dyn();

		virtual Void registerDataSourceClassName( ::String className,::String simpleName);
		Dynamic registerDataSourceClassName_dyn();

		static ::haxe::ui::toolkit::core::ClassManager _instance;
		static ::haxe::ui::toolkit::core::ClassManager instance;
		static ::haxe::ui::toolkit::core::ClassManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_ClassManager */ 
