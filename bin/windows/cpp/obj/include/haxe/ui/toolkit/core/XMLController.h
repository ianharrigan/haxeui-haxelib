#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#define INCLUDED_haxe_ui_toolkit_core_XMLController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/Controller.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Controller)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,XMLController)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{


class HXCPP_CLASS_ATTRIBUTES  XMLController_obj : public ::haxe::ui::toolkit::core::Controller_obj{
	public:
		typedef ::haxe::ui::toolkit::core::Controller_obj super;
		typedef XMLController_obj OBJ_;
		XMLController_obj();
		Void __construct(::String xmlResourceId);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< XMLController_obj > __new(::String xmlResourceId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XMLController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("XMLController"); }

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core

#endif /* INCLUDED_haxe_ui_toolkit_core_XMLController */ 
