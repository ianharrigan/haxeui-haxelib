#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IStyleableDisplayObject_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IStyleableDisplayObject_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void storeStyle( ::String id,::haxe::ui::toolkit::style::Style value)=0;
		Dynamic storeStyle_dyn();
virtual ::haxe::ui::toolkit::style::Style retrieveStyle( ::String id)=0;
		Dynamic retrieveStyle_dyn();
virtual Void applyStyle( )=0;
		Dynamic applyStyle_dyn();
virtual Void buildStyles( )=0;
		Dynamic buildStyles_dyn();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject \
virtual Void storeStyle( ::String id,::haxe::ui::toolkit::style::Style value) { return mDelegate->storeStyle(id,value);}  \
virtual Dynamic storeStyle_dyn() { return mDelegate->storeStyle_dyn();}  \
virtual ::haxe::ui::toolkit::style::Style retrieveStyle( ::String id) { return mDelegate->retrieveStyle(id);}  \
virtual Dynamic retrieveStyle_dyn() { return mDelegate->retrieveStyle_dyn();}  \
virtual Void applyStyle( ) { return mDelegate->applyStyle();}  \
virtual Dynamic applyStyle_dyn() { return mDelegate->applyStyle_dyn();}  \
virtual Void buildStyles( ) { return mDelegate->buildStyles();}  \
virtual Dynamic buildStyles_dyn() { return mDelegate->buildStyles_dyn();}  \


template<typename IMPL>
class IStyleableDisplayObject_delegate_ : public IStyleableDisplayObject_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IStyleableDisplayObject_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject */ 
