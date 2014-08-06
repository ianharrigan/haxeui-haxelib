#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IFocusable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IFocusable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IFocusable \


template<typename IMPL>
class IFocusable_delegate_ : public IFocusable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IFocusable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IFocusable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable */ 
