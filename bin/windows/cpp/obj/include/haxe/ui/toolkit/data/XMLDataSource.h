#ifndef INCLUDED_haxe_ui_toolkit_data_XMLDataSource
#define INCLUDED_haxe_ui_toolkit_data_XMLDataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/data/ArrayDataSource.h>
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,ArrayDataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,DataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,XMLDataSource)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  XMLDataSource_obj : public ::haxe::ui::toolkit::data::ArrayDataSource_obj{
	public:
		typedef ::haxe::ui::toolkit::data::ArrayDataSource_obj super;
		typedef XMLDataSource_obj OBJ_;
		XMLDataSource_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< XMLDataSource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XMLDataSource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("XMLDataSource"); }

		virtual Void create( ::Xml config);

		virtual Void createFromString( ::String data,Dynamic config);

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_XMLDataSource */ 
