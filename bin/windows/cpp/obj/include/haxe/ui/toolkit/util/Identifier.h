#ifndef INCLUDED_haxe_ui_toolkit_util_Identifier
#define INCLUDED_haxe_ui_toolkit_util_Identifier

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS4(haxe,ui,toolkit,util,Identifier)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Identifier_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Identifier_obj OBJ_;
		Identifier_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Identifier_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Identifier_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Identifier"); }

		static ::haxe::ds::StringMap _objectCount;
		static ::String createObjectId( Dynamic instance);
		static Dynamic createObjectId_dyn();

		static ::String createClassId( ::Class type);
		static Dynamic createClassId_dyn();

		static ::String guid( );
		static Dynamic guid_dyn();

		static ::String S4( );
		static Dynamic S4_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_Identifier */ 
