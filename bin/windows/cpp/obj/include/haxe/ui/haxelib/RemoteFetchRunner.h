#ifndef INCLUDED_haxe_ui_haxelib_RemoteFetchRunner
#define INCLUDED_haxe_ui_haxelib_RemoteFetchRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
HX_DECLARE_CLASS3(haxe,ui,haxelib,RemoteFetchRunner)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ListView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,ScrollView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Progress)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Spacer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDataComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDirectional)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,IRunnable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,Runner)
namespace haxe{
namespace ui{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  RemoteFetchRunner_obj : public ::haxe::ui::toolkit::util::pseudothreads::Runner_obj{
	public:
		typedef ::haxe::ui::toolkit::util::pseudothreads::Runner_obj super;
		typedef RemoteFetchRunner_obj OBJ_;
		RemoteFetchRunner_obj();
		Void __construct(::haxe::ui::toolkit::containers::ListView lv,::haxe::ui::toolkit::core::Component progressBox,hx::Null< Float >  __o_timeShare);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RemoteFetchRunner_obj > __new(::haxe::ui::toolkit::containers::ListView lv,::haxe::ui::toolkit::core::Component progressBox,hx::Null< Float >  __o_timeShare);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RemoteFetchRunner_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("RemoteFetchRunner"); }

		::haxe::ui::toolkit::containers::ListView _lv;
		::haxe::ui::toolkit::controls::Text _progressLabel;
		::haxe::ui::toolkit::controls::Progress _progressBar;
		::haxe::ui::toolkit::controls::Spacer _progressSpacer;
		::haxe::ui::toolkit::controls::Button _progressButton;
		int _totalProjects;
		int _outOfDateProjects;
		int _breakIndex;
		virtual Void run( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib

#endif /* INCLUDED_haxe_ui_haxelib_RemoteFetchRunner */ 
