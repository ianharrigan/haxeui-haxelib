#ifndef INCLUDED_haxe_ui_toolkit_util_ByteConverter
#define INCLUDED_haxe_ui_toolkit_util_ByteConverter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(haxe,ui,toolkit,util,ByteConverter)
HX_DECLARE_CLASS2(openfl,utils,ByteArray)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ByteConverter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ByteConverter_obj OBJ_;
		ByteConverter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ByteConverter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteConverter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ByteConverter"); }

		static ::openfl::utils::ByteArray fromHaxeBytes( ::haxe::io::Bytes bytes);
		static Dynamic fromHaxeBytes_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util

#endif /* INCLUDED_haxe_ui_toolkit_util_ByteConverter */ 
