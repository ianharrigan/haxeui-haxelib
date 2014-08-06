#ifndef INCLUDED_haxe_ui_haxelib_VersionChangedEvent
#define INCLUDED_haxe_ui_haxelib_VersionChangedEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/events/Event.h>
HX_DECLARE_CLASS3(haxe,ui,haxelib,VersionChangedEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
namespace haxe{
namespace ui{
namespace haxelib{


class HXCPP_CLASS_ATTRIBUTES  VersionChangedEvent_obj : public ::openfl::events::Event_obj{
	public:
		typedef ::openfl::events::Event_obj super;
		typedef VersionChangedEvent_obj OBJ_;
		VersionChangedEvent_obj();
		Void __construct(Dynamic project);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VersionChangedEvent_obj > __new(Dynamic project);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VersionChangedEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VersionChangedEvent"); }

		Dynamic project;
};

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib

#endif /* INCLUDED_haxe_ui_haxelib_VersionChangedEvent */ 
