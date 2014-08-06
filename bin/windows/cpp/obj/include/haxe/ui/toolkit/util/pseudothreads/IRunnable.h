#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#define INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,IRunnable)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{


class HXCPP_CLASS_ATTRIBUTES  IRunnable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IRunnable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void run( )=0;
		Dynamic run_dyn();
};

#define DELEGATE_haxe_ui_toolkit_util_pseudothreads_IRunnable \
virtual Void run( ) { return mDelegate->run();}  \
virtual Dynamic run_dyn() { return mDelegate->run_dyn();}  \


template<typename IMPL>
class IRunnable_delegate_ : public IRunnable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IRunnable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_util_pseudothreads_IRunnable
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads

#endif /* INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable */ 
