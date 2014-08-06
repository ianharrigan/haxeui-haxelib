#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#define INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,xml,IXMLProcessor)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  IXMLProcessor_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IXMLProcessor_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Dynamic process( ::Xml node)=0;
		Dynamic process_dyn();
};

#define DELEGATE_haxe_ui_toolkit_core_xml_IXMLProcessor \
virtual Dynamic process( ::Xml node) { return mDelegate->process(node);}  \
virtual Dynamic process_dyn() { return mDelegate->process_dyn();}  \


template<typename IMPL>
class IXMLProcessor_delegate_ : public IXMLProcessor_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IXMLProcessor_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_xml_IXMLProcessor
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace xml

#endif /* INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor */ 
