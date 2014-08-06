#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#define INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,IRunnable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,Runner)
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{
namespace pseudothreads{


class HXCPP_CLASS_ATTRIBUTES  Runner_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Runner_obj OBJ_;
		Runner_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Runner_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Runner_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::util::pseudothreads::IRunnable_obj *()
			{ return new ::haxe::ui::toolkit::util::pseudothreads::IRunnable_delegate_< Runner_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Runner"); }

		virtual Void run( );
		Dynamic run_dyn();

		bool _isComplete;
		bool isComplete;
		virtual bool get_isComplete( );
		Dynamic get_isComplete_dyn();

		int _progress;
		int progress;
		virtual int get_progress( );
		Dynamic get_progress_dyn();

		int _total;
		int total;
		virtual int get_total( );
		Dynamic get_total_dyn();

		Float _runningTimeShare;
		Float runningTimeShare;
		virtual Float get_runningTimeShare( );
		Dynamic get_runningTimeShare_dyn();

		Dynamic _needToExit;
		Dynamic &_needToExit_dyn() { return _needToExit;}
		Dynamic needToExit;
		Dynamic &needToExit_dyn() { return needToExit;}
		virtual Dynamic set_needToExit( Dynamic value);
		Dynamic set_needToExit_dyn();

		Dynamic _data;
		Dynamic data;
		virtual Dynamic get_data( );
		Dynamic get_data_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
} // end namespace pseudothreads

#endif /* INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner */ 
