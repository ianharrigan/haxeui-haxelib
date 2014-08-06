#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IStateComponent_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IStateComponent_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool hasState( ::String state)=0;
		Dynamic hasState_dyn();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IStateComponent \
virtual bool hasState( ::String state) { return mDelegate->hasState(state);}  \
virtual Dynamic hasState_dyn() { return mDelegate->hasState_dyn();}  \


template<typename IMPL>
class IStateComponent_delegate_ : public IStateComponent_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IStateComponent_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IStateComponent
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent */ 
