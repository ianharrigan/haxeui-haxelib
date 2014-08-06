#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#define INCLUDED_haxe_ui_toolkit_controls_TextInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/StateComponent.h>
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,HScroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Scroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,TextInput)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,VScroll)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDirectional)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IScrollable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,text,ITextDisplay)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,text,TextFormat)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES  TextInput_obj : public ::haxe::ui::toolkit::core::StateComponent_obj{
	public:
		typedef ::haxe::ui::toolkit::core::StateComponent_obj super;
		typedef TextInput_obj OBJ_;
		TextInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextInput_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< TextInput_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TextInput"); }

		::haxe::ui::toolkit::text::ITextDisplay _textDisplay;
		::haxe::ui::toolkit::controls::Text _textPlaceHolder;
		::haxe::ui::toolkit::controls::VScroll _vscroll;
		::haxe::ui::toolkit::controls::HScroll _hscroll;
		virtual Void preInitialize( );

		virtual Void initialize( );

		virtual Void dispose( );

		virtual Void invalidate( hx::Null< int >  type,hx::Null< bool >  recursive);

		virtual bool set_disabled( bool value);

		virtual Void _onTextChange( ::openfl::events::Event event);
		Dynamic _onTextChange_dyn();

		virtual Void _onTextScroll( ::openfl::events::Event event);
		Dynamic _onTextScroll_dyn();

		virtual Void _onVScrollChange( ::openfl::events::Event event);
		Dynamic _onVScrollChange_dyn();

		virtual Void _onHScrollChange( ::openfl::events::Event event);
		Dynamic _onHScrollChange_dyn();

		virtual ::String get_text( );

		virtual ::String set_text( ::String value);

		virtual Void applyStyle( );

		int selectionBeginIndex;
		int selectionEndIndex;
		::openfl::text::TextFormat selectedTextFormat;
		virtual bool get_multiline( );
		Dynamic get_multiline_dyn();

		virtual bool set_multiline( bool value);
		Dynamic set_multiline_dyn();

		virtual int get_selectionBeginIndex( );
		Dynamic get_selectionBeginIndex_dyn();

		virtual int get_selectionEndIndex( );
		Dynamic get_selectionEndIndex_dyn();

		virtual ::openfl::text::TextFormat get_selectedTextFormat( );
		Dynamic get_selectedTextFormat_dyn();

		virtual bool get_wrapLines( );
		Dynamic get_wrapLines_dyn();

		virtual bool set_wrapLines( bool value);
		Dynamic set_wrapLines_dyn();

		virtual bool get_displayAsPassword( );
		Dynamic get_displayAsPassword_dyn();

		virtual bool set_displayAsPassword( bool value);
		Dynamic set_displayAsPassword_dyn();

		virtual ::String get_placeholderText( );
		Dynamic get_placeholderText_dyn();

		virtual ::String set_placeholderText( ::String value);
		Dynamic set_placeholderText_dyn();

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

		Float vscrollMin;
		Float vscrollMax;
		virtual Float get_vscrollPos( );
		Dynamic get_vscrollPos_dyn();

		virtual Float set_vscrollPos( Float value);
		Dynamic set_vscrollPos_dyn();

		virtual Float get_vscrollMin( );
		Dynamic get_vscrollMin_dyn();

		virtual Float get_vscrollMax( );
		Dynamic get_vscrollMax_dyn();

		virtual Void replaceSelectedText( ::String s);
		Dynamic replaceSelectedText_dyn();

		virtual Void focus( );
		Dynamic focus_dyn();

		virtual Void checkScrolls( );
		Dynamic checkScrolls_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls

#endif /* INCLUDED_haxe_ui_toolkit_controls_TextInput */ 
