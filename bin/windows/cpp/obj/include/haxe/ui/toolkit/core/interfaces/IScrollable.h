#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IScrollable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IScrollable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IScrollable \


template<typename IMPL>
class IScrollable_delegate_ : public IScrollable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IScrollable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IScrollable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable */ 
