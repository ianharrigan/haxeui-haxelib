#ifndef INCLUDED_haxe_ui_toolkit_text_TextDisplay
#define INCLUDED_haxe_ui_toolkit_text_TextDisplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/text/ITextDisplay.h>
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS4(haxe,ui,toolkit,text,ITextDisplay)
HX_DECLARE_CLASS4(haxe,ui,toolkit,text,TextDisplay)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
namespace haxe{
namespace ui{
namespace toolkit{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextDisplay_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextDisplay_obj OBJ_;
		TextDisplay_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextDisplay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextDisplay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::text::ITextDisplay_obj *()
			{ return new ::haxe::ui::toolkit::text::ITextDisplay_delegate_< TextDisplay_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TextDisplay"); }

		::haxe::ui::toolkit::style::Style _style;
		::openfl::text::TextField _tf;
		bool _autoSize;
		::openfl::display::DisplayObject display;
		virtual ::String get_text( );
		Dynamic get_text_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual ::haxe::ui::toolkit::style::Style get_style( );
		Dynamic get_style_dyn();

		virtual ::haxe::ui::toolkit::style::Style set_style( ::haxe::ui::toolkit::style::Style value);
		Dynamic set_style_dyn();

		virtual ::openfl::display::DisplayObject get_display( );
		Dynamic get_display_dyn();

		virtual bool get_interactive( );
		Dynamic get_interactive_dyn();

		virtual bool set_interactive( bool value);
		Dynamic set_interactive_dyn();

		virtual bool get_multiline( );
		Dynamic get_multiline_dyn();

		virtual bool set_multiline( bool value);
		Dynamic set_multiline_dyn();

		virtual bool get_wrapLines( );
		Dynamic get_wrapLines_dyn();

		virtual bool set_wrapLines( bool value);
		Dynamic set_wrapLines_dyn();

		virtual bool get_displayAsPassword( );
		Dynamic get_displayAsPassword_dyn();

		virtual bool set_displayAsPassword( bool value);
		Dynamic set_displayAsPassword_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool value);
		Dynamic set_visible_dyn();

		virtual bool get_selectable( );
		Dynamic get_selectable_dyn();

		virtual bool set_selectable( bool value);
		Dynamic set_selectable_dyn();

		virtual bool get_autoSize( );
		Dynamic get_autoSize_dyn();

		virtual bool set_autoSize( bool value);
		Dynamic set_autoSize_dyn();

		virtual ::String get_textAlign( );
		Dynamic get_textAlign_dyn();

		virtual ::String set_textAlign( ::String value);
		Dynamic set_textAlign_dyn();

		virtual int get_maxChars( );
		Dynamic get_maxChars_dyn();

		virtual int set_maxChars( int value);
		Dynamic set_maxChars_dyn();

		virtual ::String get_restrictChars( );
		Dynamic get_restrictChars_dyn();

		virtual ::String set_restrictChars( ::String value);
		Dynamic set_restrictChars_dyn();

		static int X_PADDING;
		static int Y_PADDING;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace text

#endif /* INCLUDED_haxe_ui_toolkit_text_TextDisplay */ 
