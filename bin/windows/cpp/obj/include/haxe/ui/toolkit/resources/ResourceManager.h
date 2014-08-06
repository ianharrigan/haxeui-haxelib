#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#define INCLUDED_haxe_ui_toolkit_resources_ResourceManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(format,SVG)
HX_DECLARE_CLASS4(haxe,ui,toolkit,resources,ResourceManager)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace haxe{
namespace ui{
namespace toolkit{
namespace resources{


class HXCPP_CLASS_ATTRIBUTES  ResourceManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResourceManager_obj OBJ_;
		ResourceManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ResourceManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResourceManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ResourceManager"); }

		virtual bool hasAsset( ::String resouceId);
		Dynamic hasAsset_dyn();

		virtual ::Xml getXML( ::String resourceId,::String locale);
		Dynamic getXML_dyn();

		virtual ::String getText( ::String resourceId,::String locale);
		Dynamic getText_dyn();

		virtual ::format::SVG getSVG( ::String resourceId,::String locale);
		Dynamic getSVG_dyn();

		virtual ::openfl::display::BitmapData getBitmapData( ::String resourceId,::String locale);
		Dynamic getBitmapData_dyn();

		virtual Void reset( );
		Dynamic reset_dyn();

		static ::haxe::ui::toolkit::resources::ResourceManager _instance;
		static ::haxe::ui::toolkit::resources::ResourceManager instance;
		static ::haxe::ui::toolkit::resources::ResourceManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace resources

#endif /* INCLUDED_haxe_ui_toolkit_resources_ResourceManager */ 
