#ifndef INCLUDED_haxe_ui_toolkit_themes_Theme
#define INCLUDED_haxe_ui_toolkit_themes_Theme

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,themes,Theme)
namespace haxe{
namespace ui{
namespace toolkit{
namespace themes{


class HXCPP_CLASS_ATTRIBUTES  Theme_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Theme_obj OBJ_;
		Theme_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Theme_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Theme_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Theme"); }

		::String name;
		virtual Void apply( );
		Dynamic apply_dyn();

		virtual Void applyAssetList( ::String n);
		Dynamic applyAssetList_dyn();

		virtual Void applyAsset( Dynamic asset);
		Dynamic applyAsset_dyn();

		static ::haxe::ds::StringMap assets;
		static Void addPublicAsset( Dynamic asset);
		static Dynamic addPublicAsset_dyn();

		static Void addAsset( ::String t,Dynamic asset);
		static Dynamic addAsset_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace themes

#endif /* INCLUDED_haxe_ui_toolkit_themes_Theme */ 
