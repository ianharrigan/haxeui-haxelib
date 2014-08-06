#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,ILayout)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IDisplayObjectContainer_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDisplayObjectContainer_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual int indexOfChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child)=0;
		Dynamic indexOfChild_dyn();
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject getChildAt( int index)=0;
		Dynamic getChildAt_dyn();
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index)=0;
		Dynamic addChildAt_dyn();
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child)=0;
		Dynamic addChild_dyn();
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  dispose)=0;
		Dynamic removeChild_dyn();
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChildAt( int index,hx::Null< bool >  dispose)=0;
		Dynamic removeChildAt_dyn();
virtual Dynamic findChild( ::String id,::Class type,hx::Null< bool >  recursive)=0;
		Dynamic findChild_dyn();
virtual Dynamic findChildAs( ::Class type)=0;
		Dynamic findChildAs_dyn();
virtual Void removeAllChildren( hx::Null< bool >  dispose)=0;
		Dynamic removeAllChildren_dyn();
virtual bool contains( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child)=0;
		Dynamic contains_dyn();
virtual Void setChildIndex( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index)=0;
		Dynamic setChildIndex_dyn();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer \
virtual int indexOfChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child) { return mDelegate->indexOfChild(child);}  \
virtual Dynamic indexOfChild_dyn() { return mDelegate->indexOfChild_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject getChildAt( int index) { return mDelegate->getChildAt(index);}  \
virtual Dynamic getChildAt_dyn() { return mDelegate->getChildAt_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index) { return mDelegate->addChildAt(child,index);}  \
virtual Dynamic addChildAt_dyn() { return mDelegate->addChildAt_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child) { return mDelegate->addChild(child);}  \
virtual Dynamic addChild_dyn() { return mDelegate->addChild_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  dispose) { return mDelegate->removeChild(child,dispose);}  \
virtual Dynamic removeChild_dyn() { return mDelegate->removeChild_dyn();}  \
virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject removeChildAt( int index,hx::Null< bool >  dispose) { return mDelegate->removeChildAt(index,dispose);}  \
virtual Dynamic removeChildAt_dyn() { return mDelegate->removeChildAt_dyn();}  \
virtual Dynamic findChild( ::String id,::Class type,hx::Null< bool >  recursive) { return mDelegate->findChild(id,type,recursive);}  \
virtual Dynamic findChild_dyn() { return mDelegate->findChild_dyn();}  \
virtual Dynamic findChildAs( ::Class type) { return mDelegate->findChildAs(type);}  \
virtual Dynamic findChildAs_dyn() { return mDelegate->findChildAs_dyn();}  \
virtual Void removeAllChildren( hx::Null< bool >  dispose) { return mDelegate->removeAllChildren(dispose);}  \
virtual Dynamic removeAllChildren_dyn() { return mDelegate->removeAllChildren_dyn();}  \
virtual bool contains( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child) { return mDelegate->contains(child);}  \
virtual Dynamic contains_dyn() { return mDelegate->contains_dyn();}  \
virtual Void setChildIndex( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index) { return mDelegate->setChildIndex(child,index);}  \
virtual Dynamic setChildIndex_dyn() { return mDelegate->setChildIndex_dyn();}  \


template<typename IMPL>
class IDisplayObjectContainer_delegate_ : public IDisplayObjectContainer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDisplayObjectContainer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer */ 
