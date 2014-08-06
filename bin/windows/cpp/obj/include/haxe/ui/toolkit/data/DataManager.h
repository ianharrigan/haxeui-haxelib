#ifndef INCLUDED_haxe_ui_toolkit_data_DataManager
#define INCLUDED_haxe_ui_toolkit_data_DataManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,DataManager)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  DataManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DataManager_obj OBJ_;
		DataManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DataManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DataManager"); }

		::haxe::ds::StringMap _dataSourceMap;
		Array< ::haxe::ui::toolkit::data::IDataSource > dataSources;
		virtual Void registerDataSource( ::haxe::ui::toolkit::data::IDataSource dataSource);
		Dynamic registerDataSource_dyn();

		virtual ::haxe::ui::toolkit::data::IDataSource getRegisteredDataSource( ::String id);
		Dynamic getRegisteredDataSource_dyn();

		virtual Array< ::haxe::ui::toolkit::data::IDataSource > get_dataSources( );
		Dynamic get_dataSources_dyn();

		static ::haxe::ui::toolkit::data::DataManager _instance;
		static ::haxe::ui::toolkit::data::DataManager instance;
		static ::haxe::ui::toolkit::data::DataManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_DataManager */ 
