#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#define INCLUDED_haxe_ui_toolkit_text_ITextDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS4(haxe,ui,toolkit,text,ITextDisplay)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  ITextDisplay_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ITextDisplay_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
};

#define DELEGATE_haxe_ui_toolkit_text_ITextDisplay \


template<typename IMPL>
class ITextDisplay_delegate_ : public ITextDisplay_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ITextDisplay_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_text_ITextDisplay
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace text

#endif /* INCLUDED_haxe_ui_toolkit_text_ITextDisplay */ 
