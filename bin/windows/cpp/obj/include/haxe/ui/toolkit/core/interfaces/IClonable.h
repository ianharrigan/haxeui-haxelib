#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IClonable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IClonable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Dynamic clone( )=0;
		Dynamic clone_dyn();
virtual Dynamic self( )=0;
		Dynamic self_dyn();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IClonable \
virtual Dynamic clone( ) { return mDelegate->clone();}  \
virtual Dynamic clone_dyn() { return mDelegate->clone_dyn();}  \
virtual Dynamic self( ) { return mDelegate->self();}  \
virtual Dynamic self_dyn() { return mDelegate->self_dyn();}  \


template<typename IMPL>
class IClonable_delegate_ : public IClonable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IClonable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IClonable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable */ 
