#ifndef INCLUDED_haxe_ui_toolkit_containers_CalendarView
#define INCLUDED_haxe_ui_toolkit_containers_CalendarView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/containers/VBox.h>
HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,CalendarView)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Calendar)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
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
namespace containers{


class HXCPP_CLASS_ATTRIBUTES  CalendarView_obj : public ::haxe::ui::toolkit::containers::VBox_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::VBox_obj super;
		typedef CalendarView_obj OBJ_;
		CalendarView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CalendarView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CalendarView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CalendarView"); }

		::haxe::ui::toolkit::controls::Calendar _calendar;
		::haxe::ui::toolkit::controls::Button _prevMonthButton;
		::haxe::ui::toolkit::controls::Button _nextMonthButton;
		::haxe::ui::toolkit::controls::Text _currentMonthYear;
		virtual Void initialize( );

		virtual ::Date get_date( );
		Dynamic get_date_dyn();

		virtual ::Date set_date( ::Date value);
		Dynamic set_date_dyn();

		virtual ::Date get_selectedDate( );
		Dynamic get_selectedDate_dyn();

		virtual ::Date set_selectedDate( ::Date value);
		Dynamic set_selectedDate_dyn();

		virtual Void _onPrevClicked( ::openfl::events::MouseEvent event);
		Dynamic _onPrevClicked_dyn();

		virtual Void _onNextClicked( ::openfl::events::MouseEvent event);
		Dynamic _onNextClicked_dyn();

		virtual Void _onDateChanged( ::openfl::events::Event event);
		Dynamic _onDateChanged_dyn();

		virtual Void displayMonthYear( );
		Dynamic displayMonthYear_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

		static Array< ::String > MONTH_NAMES;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers

#endif /* INCLUDED_haxe_ui_toolkit_containers_CalendarView */ 
