#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#define INCLUDED_haxe_ui_toolkit_style_Style

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{


class HXCPP_CLASS_ATTRIBUTES  Style_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Style_obj OBJ_;
		Style_obj();
		Void __construct(Dynamic defaults);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Style_obj > __new(Dynamic defaults);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Style_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IClonable_delegate_< Style_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Style"); }

		::haxe::ds::StringMap _dynamicValues;
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _target;
		bool _autoApply;
		int _width;
		int _height;
		int _percentWidth;
		int _percentHeight;
		int _autoSize;
		::String _backgroundImage;
		::openfl::geom::Rectangle _backgroundImageScale9;
		::openfl::geom::Rectangle _backgroundImageRect;
		int _backgroundColor;
		int _backgroundColorGradientEnd;
		int _borderColor;
		int _borderSize;
		int _color;
		int _paddingLeft;
		int _paddingRight;
		int _paddingTop;
		int _paddingBottom;
		int _spacingX;
		int _spacingY;
		::String _verticalAlignment;
		::String _horizontalAlignment;
		int _cornerRadiusTopLeft;
		int _cornerRadiusTopRight;
		int _cornerRadiusBottomLeft;
		int _cornerRadiusBottomRight;
		::openfl::filters::BitmapFilter _filter;
		bool _filterSet;
		Float _alpha;
		::String _fontName;
		Float _fontSize;
		Float _fontScale;
		Float _fontEmbedded;
		Float _fontBold;
		Float _fontItalic;
		Float _fontUnderline;
		::String _textAlign;
		::String _iconPosition;
		::String _icon;
		int _hasButtons;
		::String _gradientType;
		::String _selectionMethod;
		int _autoHideScrolls;
		int _inlineScrolls;
		bool autoSizeSet;
		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject get_target( );
		Dynamic get_target_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObject set_target( ::haxe::ui::toolkit::core::interfaces::IDisplayObject value);
		Dynamic set_target_dyn();

		virtual bool get_autoApply( );
		Dynamic get_autoApply_dyn();

		virtual bool set_autoApply( bool value);
		Dynamic set_autoApply_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int set_width( int value);
		Dynamic set_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int set_height( int value);
		Dynamic set_height_dyn();

		virtual int get_percentWidth( );
		Dynamic get_percentWidth_dyn();

		virtual int set_percentWidth( int value);
		Dynamic set_percentWidth_dyn();

		virtual int get_percentHeight( );
		Dynamic get_percentHeight_dyn();

		virtual int set_percentHeight( int value);
		Dynamic set_percentHeight_dyn();

		virtual bool get_autoSize( );
		Dynamic get_autoSize_dyn();

		virtual bool set_autoSize( bool value);
		Dynamic set_autoSize_dyn();

		virtual bool get_autoSizeSet( );
		Dynamic get_autoSizeSet_dyn();

		virtual ::String get_backgroundImage( );
		Dynamic get_backgroundImage_dyn();

		virtual ::String set_backgroundImage( ::String value);
		Dynamic set_backgroundImage_dyn();

		virtual ::openfl::geom::Rectangle get_backgroundImageScale9( );
		Dynamic get_backgroundImageScale9_dyn();

		virtual ::openfl::geom::Rectangle set_backgroundImageScale9( ::openfl::geom::Rectangle value);
		Dynamic set_backgroundImageScale9_dyn();

		virtual ::openfl::geom::Rectangle get_backgroundImageRect( );
		Dynamic get_backgroundImageRect_dyn();

		virtual ::openfl::geom::Rectangle set_backgroundImageRect( ::openfl::geom::Rectangle value);
		Dynamic set_backgroundImageRect_dyn();

		virtual int get_backgroundColor( );
		Dynamic get_backgroundColor_dyn();

		virtual int set_backgroundColor( int value);
		Dynamic set_backgroundColor_dyn();

		virtual int get_backgroundColorGradientEnd( );
		Dynamic get_backgroundColorGradientEnd_dyn();

		virtual int set_backgroundColorGradientEnd( int value);
		Dynamic set_backgroundColorGradientEnd_dyn();

		virtual int get_borderColor( );
		Dynamic get_borderColor_dyn();

		virtual int set_borderColor( int value);
		Dynamic set_borderColor_dyn();

		virtual int get_borderSize( );
		Dynamic get_borderSize_dyn();

		virtual int set_borderSize( int value);
		Dynamic set_borderSize_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

		virtual int get_paddingLeft( );
		Dynamic get_paddingLeft_dyn();

		virtual int set_paddingLeft( int value);
		Dynamic set_paddingLeft_dyn();

		virtual int get_paddingRight( );
		Dynamic get_paddingRight_dyn();

		virtual int set_paddingRight( int value);
		Dynamic set_paddingRight_dyn();

		virtual int get_paddingTop( );
		Dynamic get_paddingTop_dyn();

		virtual int set_paddingTop( int value);
		Dynamic set_paddingTop_dyn();

		virtual int get_paddingBottom( );
		Dynamic get_paddingBottom_dyn();

		virtual int set_paddingBottom( int value);
		Dynamic set_paddingBottom_dyn();

		virtual int get_padding( );
		Dynamic get_padding_dyn();

		virtual int set_padding( int value);
		Dynamic set_padding_dyn();

		virtual int get_spacingX( );
		Dynamic get_spacingX_dyn();

		virtual int set_spacingX( int value);
		Dynamic set_spacingX_dyn();

		virtual int get_spacingY( );
		Dynamic get_spacingY_dyn();

		virtual int set_spacingY( int value);
		Dynamic set_spacingY_dyn();

		virtual int get_spacing( );
		Dynamic get_spacing_dyn();

		virtual int set_spacing( int value);
		Dynamic set_spacing_dyn();

		virtual ::String get_horizontalAlignment( );
		Dynamic get_horizontalAlignment_dyn();

		virtual ::String set_horizontalAlignment( ::String value);
		Dynamic set_horizontalAlignment_dyn();

		virtual ::String get_verticalAlignment( );
		Dynamic get_verticalAlignment_dyn();

		virtual ::String set_verticalAlignment( ::String value);
		Dynamic set_verticalAlignment_dyn();

		virtual int get_cornerRadiusTopLeft( );
		Dynamic get_cornerRadiusTopLeft_dyn();

		virtual int set_cornerRadiusTopLeft( int value);
		Dynamic set_cornerRadiusTopLeft_dyn();

		virtual int get_cornerRadiusTopRight( );
		Dynamic get_cornerRadiusTopRight_dyn();

		virtual int set_cornerRadiusTopRight( int value);
		Dynamic set_cornerRadiusTopRight_dyn();

		virtual int get_cornerRadiusBottomLeft( );
		Dynamic get_cornerRadiusBottomLeft_dyn();

		virtual int set_cornerRadiusBottomLeft( int value);
		Dynamic set_cornerRadiusBottomLeft_dyn();

		virtual int get_cornerRadiusBottomRight( );
		Dynamic get_cornerRadiusBottomRight_dyn();

		virtual int set_cornerRadiusBottomRight( int value);
		Dynamic set_cornerRadiusBottomRight_dyn();

		virtual int get_cornerRadius( );
		Dynamic get_cornerRadius_dyn();

		virtual int set_cornerRadius( int value);
		Dynamic set_cornerRadius_dyn();

		virtual ::openfl::filters::BitmapFilter get_filter( );
		Dynamic get_filter_dyn();

		virtual ::openfl::filters::BitmapFilter set_filter( ::openfl::filters::BitmapFilter value);
		Dynamic set_filter_dyn();

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float value);
		Dynamic set_alpha_dyn();

		virtual ::String get_fontName( );
		Dynamic get_fontName_dyn();

		virtual ::String set_fontName( ::String value);
		Dynamic set_fontName_dyn();

		virtual Float get_fontSize( );
		Dynamic get_fontSize_dyn();

		virtual Float set_fontSize( Float value);
		Dynamic set_fontSize_dyn();

		virtual Float get_fontScale( );
		Dynamic get_fontScale_dyn();

		virtual Float set_fontScale( Float value);
		Dynamic set_fontScale_dyn();

		virtual bool get_fontEmbedded( );
		Dynamic get_fontEmbedded_dyn();

		virtual bool set_fontEmbedded( bool value);
		Dynamic set_fontEmbedded_dyn();

		virtual bool get_fontBold( );
		Dynamic get_fontBold_dyn();

		virtual bool set_fontBold( bool value);
		Dynamic set_fontBold_dyn();

		virtual bool get_fontItalic( );
		Dynamic get_fontItalic_dyn();

		virtual bool set_fontItalic( bool value);
		Dynamic set_fontItalic_dyn();

		virtual bool get_fontUnderline( );
		Dynamic get_fontUnderline_dyn();

		virtual bool set_fontUnderline( bool value);
		Dynamic set_fontUnderline_dyn();

		virtual ::String get_textAlign( );
		Dynamic get_textAlign_dyn();

		virtual ::String set_textAlign( ::String value);
		Dynamic set_textAlign_dyn();

		virtual ::String get_iconPosition( );
		Dynamic get_iconPosition_dyn();

		virtual ::String set_iconPosition( ::String value);
		Dynamic set_iconPosition_dyn();

		virtual ::String get_icon( );
		Dynamic get_icon_dyn();

		virtual ::String set_icon( ::String value);
		Dynamic set_icon_dyn();

		virtual bool get_hasButtons( );
		Dynamic get_hasButtons_dyn();

		virtual bool set_hasButtons( bool value);
		Dynamic set_hasButtons_dyn();

		virtual ::String get_gradientType( );
		Dynamic get_gradientType_dyn();

		virtual ::String set_gradientType( ::String value);
		Dynamic set_gradientType_dyn();

		virtual ::String get_selectionMethod( );
		Dynamic get_selectionMethod_dyn();

		virtual ::String set_selectionMethod( ::String value);
		Dynamic set_selectionMethod_dyn();

		virtual bool get_autoHideScrolls( );
		Dynamic get_autoHideScrolls_dyn();

		virtual bool set_autoHideScrolls( bool value);
		Dynamic set_autoHideScrolls_dyn();

		virtual bool get_inlineScrolls( );
		Dynamic get_inlineScrolls_dyn();

		virtual bool set_inlineScrolls( bool value);
		Dynamic set_inlineScrolls_dyn();

		virtual Void apply( );
		Dynamic apply_dyn();

		virtual Void addDynamicValue( ::String property,::String script);
		Dynamic addDynamicValue_dyn();

		virtual bool hasDynamicValue( ::String property);
		Dynamic hasDynamicValue_dyn();

		virtual Dynamic getDynamicValue( ::String property);
		Dynamic getDynamicValue_dyn();

		virtual Void merge( ::haxe::ui::toolkit::style::Style with);
		Dynamic merge_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Dynamic self( );
		Dynamic self_dyn();

		virtual Dynamic clone( );
		Dynamic clone_dyn();

		static int NONE;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style

#endif /* INCLUDED_haxe_ui_toolkit_style_Style */ 
