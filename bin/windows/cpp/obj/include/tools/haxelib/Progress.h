#ifndef INCLUDED_tools_haxelib_Progress
#define INCLUDED_tools_haxelib_Progress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/io/Output.h>
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(tools,haxelib,Progress)
namespace tools{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  Progress_obj : public ::haxe::io::Output_obj{
	public:
		typedef ::haxe::io::Output_obj super;
		typedef Progress_obj OBJ_;
		Progress_obj();
		Void __construct(::haxe::io::Output o);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Progress_obj > __new(::haxe::io::Output o);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Progress_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Progress"); }

		::haxe::io::Output o;
		int cur;
		int max;
		Float start;
		virtual Void bytes( int n);
		Dynamic bytes_dyn();

		virtual Void writeByte( int c);

		virtual int writeBytes( ::haxe::io::Bytes s,int p,int l);

		virtual Void close( );

		virtual Void prepare( int m);

};

} // end namespace tools
} // end namespace haxelib

#endif /* INCLUDED_tools_haxelib_Progress */ 
