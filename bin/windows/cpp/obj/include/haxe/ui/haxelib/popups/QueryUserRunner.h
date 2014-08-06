#ifndef INCLUDED_haxe_ui_haxelib_popups_QueryUserRunner
#define INCLUDED_haxe_ui_haxelib_popups_QueryUserRunner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
HX_DECLARE_CLASS4(haxe,ui,haxelib,popups,QueryUserController)
HX_DECLARE_CLASS4(haxe,ui,haxelib,popups,QueryUserRunner)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Controller)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,XMLController)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,IRunnable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,util,pseudothreads,Runner)
namespace haxe{
namespace ui{
namespace haxelib{
namespace popups{


class HXCPP_CLASS_ATTRIBUTES  QueryUserRunner_obj : public ::haxe::ui::toolkit::util::pseudothreads::Runner_obj{
	public:
		typedef ::haxe::ui::toolkit::util::pseudothreads::Runner_obj super;
		typedef QueryUserRunner_obj OBJ_;
		QueryUserRunner_obj();
		Void __construct(::haxe::ui::haxelib::popups::QueryUserController controller,hx::Null< Float >  __o_timeShare);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< QueryUserRunner_obj > __new(::haxe::ui::haxelib::popups::QueryUserController controller,hx::Null< Float >  __o_timeShare);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QueryUserRunner_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("QueryUserRunner"); }

		int _stage;
		::haxe::ui::haxelib::popups::QueryUserController _controller;
		Dynamic _userInfo;
		Dynamic _localProjects;
		Dynamic _filteredProjects;
		int _breakIndex;
		Dynamic _lastError;
		virtual Void run( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
} // end namespace popups

#endif /* INCLUDED_haxe_ui_haxelib_popups_QueryUserRunner */ 
