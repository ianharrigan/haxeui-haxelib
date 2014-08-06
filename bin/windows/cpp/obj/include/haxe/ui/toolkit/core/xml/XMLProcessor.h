#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#define INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,IXMLProcessor)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,XMLProcessor)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  XMLProcessor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef XMLProcessor_obj OBJ_;
		XMLProcessor_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< XMLProcessor_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~XMLProcessor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::haxe::ui::toolkit::core::xml::IXMLProcessor_obj *()
			{ return new ::haxe::ui::toolkit::core::xml::IXMLProcessor_delegate_< XMLProcessor_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("XMLProcessor"); }

		virtual Dynamic process( ::Xml node);
		Dynamic process_dyn();

		virtual ::String stripNamespace( ::String nodeName);
		Dynamic stripNamespace_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace xml

#endif /* INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor */ 
