#ifndef INCLUDED_haxe_ui_toolkit_core_Macros
#define INCLUDED_haxe_ui_toolkit_core_Macros

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,macro,Access)
HX_DECLARE_CLASS2(haxe,macro,Type)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Macros)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  Macros_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Macros_obj OBJ_;
		Macros_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Macros_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Macros_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Macros"); }

		static ::haxe::ds::StringMap componentClasses;
		static ::haxe::ds::StringMap dataSourceClasses;
		static ::haxe::ds::StringMap themeResources;
		static Void processNode( ::Xml node,::haxe::ds::StringMap types,Array< ::String > paths);
		static Dynamic processNode_dyn();

		static Dynamic getFunction( ::String name,Dynamic fields);
		static Dynamic getFunction_dyn();

		static Void addFunction( ::String name,Dynamic e,Array< ::Dynamic > access,Dynamic fields,Dynamic pos);
		static Dynamic addFunction_dyn();

		static Dynamic getFieldsWithMeta( ::String meta,Dynamic fields);
		static Dynamic getFieldsWithMeta_dyn();

		static Dynamic getSuperClass( ::haxe::macro::Type t);
		static Dynamic getSuperClass_dyn();

		static Void insertLine( Dynamic fn,Dynamic e,int location);
		static Dynamic insertLine_dyn();

		static Dynamic insertExpr( Dynamic arr,int pos,Dynamic item);
		static Dynamic insertExpr_dyn();

		static ::String getClassNameFromType( ::haxe::macro::Type t);
		static Dynamic getClassNameFromType_dyn();

		static bool hasMeta( Dynamic f,::String meta);
		static Dynamic hasMeta_dyn();

		static ::String getClassName( ::haxe::macro::Type t);
		static Dynamic getClassName_dyn();

		static bool hasInterface( ::haxe::macro::Type t,::String interfaceRequired);
		static Dynamic hasInterface_dyn();

		static ::String resolveResource( ::String resourcePath,Array< ::String > paths);
		static Dynamic resolveResource_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_Macros */ 
