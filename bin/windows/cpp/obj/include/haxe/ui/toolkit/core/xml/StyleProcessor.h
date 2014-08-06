#ifndef INCLUDED_haxe_ui_toolkit_core_xml_StyleProcessor
#define INCLUDED_haxe_ui_toolkit_core_xml_StyleProcessor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,IXMLProcessor)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,StyleProcessor)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,XMLProcessor)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  StyleProcessor_obj : public ::haxe::ui::toolkit::core::xml::XMLProcessor_obj{
	public:
		typedef ::haxe::ui::toolkit::core::xml::XMLProcessor_obj super;
		typedef StyleProcessor_obj OBJ_;
		StyleProcessor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StyleProcessor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleProcessor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("StyleProcessor"); }

		virtual Dynamic process( ::Xml node);

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace xml

#endif /* INCLUDED_haxe_ui_toolkit_core_xml_StyleProcessor */ 
