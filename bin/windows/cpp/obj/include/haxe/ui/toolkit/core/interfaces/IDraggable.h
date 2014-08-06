#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDraggable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IDraggable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDraggable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool allowDrag( ::openfl::events::MouseEvent event)=0;
		Dynamic allowDrag_dyn();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IDraggable \
virtual bool allowDrag( ::openfl::events::MouseEvent event) { return mDelegate->allowDrag(event);}  \
virtual Dynamic allowDrag_dyn() { return mDelegate->allowDrag_dyn();}  \


template<typename IMPL>
class IDraggable_delegate_ : public IDraggable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDraggable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDraggable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable */ 
