#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IItemRenderer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IItemRenderer_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IItemRenderer_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool allowSelection( Float stageX,Float stageY)=0;
		Dynamic allowSelection_dyn();
virtual Void update( )=0;
		Dynamic update_dyn();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IItemRenderer \
virtual bool allowSelection( Float stageX,Float stageY) { return mDelegate->allowSelection(stageX,stageY);}  \
virtual Dynamic allowSelection_dyn() { return mDelegate->allowSelection_dyn();}  \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \


template<typename IMPL>
class IItemRenderer_delegate_ : public IItemRenderer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IItemRenderer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IItemRenderer
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer */ 
