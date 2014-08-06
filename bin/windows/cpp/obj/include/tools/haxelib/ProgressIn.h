#ifndef INCLUDED_tools_haxelib_ProgressIn
#define INCLUDED_tools_haxelib_ProgressIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/io/Input.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(tools,haxelib,ProgressIn)
namespace tools{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  ProgressIn_obj : public ::haxe::io::Input_obj{
	public:
		typedef ::haxe::io::Input_obj super;
		typedef ProgressIn_obj OBJ_;
		ProgressIn_obj();
		Void __construct(::haxe::io::Input i,int tot);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ProgressIn_obj > __new(::haxe::io::Input i,int tot);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProgressIn_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ProgressIn"); }

		::haxe::io::Input i;
		int pos;
		int tot;
		virtual int readByte( );

		virtual int readBytes( ::haxe::io::Bytes buf,int pos,int len);

		virtual Void doRead( int nbytes);
		Dynamic doRead_dyn();

};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_ProgressIn */ 
