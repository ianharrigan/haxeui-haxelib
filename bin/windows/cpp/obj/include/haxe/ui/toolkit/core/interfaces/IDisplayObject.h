#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#define INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Root)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES  IDisplayObject_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDisplayObject_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual bool hitTest( Float stageX,Float stageY)=0;
		Dynamic hitTest_dyn();
virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive)=0;
		Dynamic invalidate_dyn();
virtual Void dispose( )=0;
		Dynamic dispose_dyn();
};

#define DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObject \
virtual bool hitTest( Float stageX,Float stageY) { return mDelegate->hitTest(stageX,stageY);}  \
virtual Dynamic hitTest_dyn() { return mDelegate->hitTest_dyn();}  \
virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive) { return mDelegate->invalidate(type,recursive);}  \
virtual Dynamic invalidate_dyn() { return mDelegate->invalidate_dyn();}  \
virtual Void dispose( ) { return mDelegate->dispose();}  \
virtual Dynamic dispose_dyn() { return mDelegate->dispose_dyn();}  \


template<typename IMPL>
class IDisplayObject_delegate_ : public IDisplayObject_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDisplayObject_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_core_interfaces_IDisplayObject
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace interfaces

#endif /* INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject */ 
