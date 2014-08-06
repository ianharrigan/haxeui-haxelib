#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButton
#define INCLUDED_haxe_ui_toolkit_core_PopupButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,core,PopupButton)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  PopupButton_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PopupButton_obj OBJ_;
		PopupButton_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PopupButton_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PopupButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PopupButton"); }

		static int OK;
		static int YES;
		static int NO;
		static int CANCEL;
		static int CONFIRM;
		static int CLOSE;
		static int CUSTOM;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_PopupButton */ 
