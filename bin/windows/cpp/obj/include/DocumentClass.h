#ifndef INCLUDED_DocumentClass
#define INCLUDED_DocumentClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/haxelib/Main.h>
HX_DECLARE_CLASS0(DocumentClass)
HX_DECLARE_CLASS3(haxe,ui,haxelib,Main)


class HXCPP_CLASS_ATTRIBUTES  DocumentClass_obj : public ::haxe::ui::haxelib::Main_obj{
	public:
		typedef ::haxe::ui::haxelib::Main_obj super;
		typedef DocumentClass_obj OBJ_;
		DocumentClass_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DocumentClass_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DocumentClass_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DocumentClass"); }

};


#endif /* INCLUDED_DocumentClass */ 
