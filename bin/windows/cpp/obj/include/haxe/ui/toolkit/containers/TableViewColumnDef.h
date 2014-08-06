#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef
#define INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,TableViewColumnDef)
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  TableViewColumnDef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TableViewColumnDef_obj OBJ_;
		TableViewColumnDef_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TableViewColumnDef_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TableViewColumnDef_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TableViewColumnDef"); }

		::String id;
		::String type;
		Float width;
		Float calculatedWidth;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef */ 
