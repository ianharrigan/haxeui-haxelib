#ifndef INCLUDED_haxe_ui_toolkit_controls_Calendar
#define INCLUDED_haxe_ui_toolkit_controls_Calendar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/Component.h>
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Calendar)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,CalendarDay)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  Calendar_obj : public ::haxe::ui::toolkit::core::Component_obj{
	public:
		typedef ::haxe::ui::toolkit::core::Component_obj super;
		typedef Calendar_obj OBJ_;
		Calendar_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Calendar_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Calendar_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Calendar"); }

		Array< ::Dynamic > _dayItems;
		::Date _date;
		int _year;
		int _month;
		int _day;
		::Date _selectedDate;
		virtual Void preInitialize( );

		virtual Void previousMonth( );
		Dynamic previousMonth_dyn();

		virtual Void nextMonth( );
		Dynamic nextMonth_dyn();

		virtual ::Date get_date( );
		Dynamic get_date_dyn();

		virtual ::Date set_date( ::Date value);
		Dynamic set_date_dyn();

		virtual ::Date get_selectedDate( );
		Dynamic get_selectedDate_dyn();

		virtual ::Date set_selectedDate( ::Date value);
		Dynamic set_selectedDate_dyn();

		virtual int getEndDay( int month,int year);
		Dynamic getEndDay_dyn();

		virtual Dynamic buildMouseClickFunction( int index);
		Dynamic buildMouseClickFunction_dyn();

		virtual Void mouseClickButton( int index);
		Dynamic mouseClickButton_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_Calendar */ 
