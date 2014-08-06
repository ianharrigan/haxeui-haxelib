#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#define INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  ILayout_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ILayout_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void refresh( )=0;
		Dynamic refresh_dyn();
virtual Void resizeChildren( )=0;
		Dynamic resizeChildren_dyn();
virtual Void repositionChildren( )=0;
		Dynamic repositionChildren_dyn();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_ILayout \
virtual Void refresh( ) { return mDelegate->refresh();}  \
virtual Dynamic refresh_dyn() { return mDelegate->refresh_dyn();}  \
virtual Void resizeChildren( ) { return mDelegate->resizeChildren();}  \
virtual Dynamic resizeChildren_dyn() { return mDelegate->resizeChildren_dyn();}  \
virtual Void repositionChildren( ) { return mDelegate->repositionChildren();}  \
virtual Dynamic repositionChildren_dyn() { return mDelegate->repositionChildren_dyn();}  \


template<typename IMPL>
class ILayout_delegate_ : public ILayout_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ILayout_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_ILayout
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout */ 
