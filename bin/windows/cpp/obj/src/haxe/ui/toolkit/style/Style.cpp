#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void Style_obj::__construct(Dynamic defaults)
{
HX_STACK_FRAME("haxe.ui.toolkit.style.Style","new",0x25ab1084,"haxe.ui.toolkit.style.Style.new","haxe/ui/toolkit/style/Style.hx",10,0x9c43a2ce)
HX_STACK_THIS(this)
HX_STACK_ARG(defaults,"defaults")
{
	HX_STACK_LINE(59)
	this->_inlineScrolls = (int)-1;
	HX_STACK_LINE(58)
	this->_autoHideScrolls = (int)-1;
	HX_STACK_LINE(55)
	this->_hasButtons = (int)-1;
	HX_STACK_LINE(51)
	this->_fontUnderline = (int)-1;
	HX_STACK_LINE(50)
	this->_fontItalic = (int)-1;
	HX_STACK_LINE(49)
	this->_fontBold = (int)-1;
	HX_STACK_LINE(48)
	this->_fontEmbedded = (int)-1;
	HX_STACK_LINE(47)
	this->_fontScale = (int)-1;
	HX_STACK_LINE(46)
	this->_fontSize = (int)-1;
	HX_STACK_LINE(44)
	this->_alpha = (int)-1;
	HX_STACK_LINE(43)
	this->_filterSet = false;
	HX_STACK_LINE(41)
	this->_cornerRadiusBottomRight = (int)-1;
	HX_STACK_LINE(40)
	this->_cornerRadiusBottomLeft = (int)-1;
	HX_STACK_LINE(39)
	this->_cornerRadiusTopRight = (int)-1;
	HX_STACK_LINE(38)
	this->_cornerRadiusTopLeft = (int)-1;
	HX_STACK_LINE(35)
	this->_spacingY = (int)-1;
	HX_STACK_LINE(34)
	this->_spacingX = (int)-1;
	HX_STACK_LINE(33)
	this->_paddingBottom = (int)-1;
	HX_STACK_LINE(32)
	this->_paddingTop = (int)-1;
	HX_STACK_LINE(31)
	this->_paddingRight = (int)-1;
	HX_STACK_LINE(30)
	this->_paddingLeft = (int)-1;
	HX_STACK_LINE(29)
	this->_color = (int)-1;
	HX_STACK_LINE(28)
	this->_borderSize = (int)-1;
	HX_STACK_LINE(27)
	this->_borderColor = (int)-1;
	HX_STACK_LINE(26)
	this->_backgroundColorGradientEnd = (int)-1;
	HX_STACK_LINE(25)
	this->_backgroundColor = (int)-1;
	HX_STACK_LINE(21)
	this->_autoSize = (int)-1;
	HX_STACK_LINE(20)
	this->_percentHeight = (int)-1;
	HX_STACK_LINE(19)
	this->_percentWidth = (int)-1;
	HX_STACK_LINE(18)
	this->_height = (int)-1;
	HX_STACK_LINE(17)
	this->_width = (int)-1;
	HX_STACK_LINE(15)
	this->_autoApply = true;
	HX_STACK_LINE(112)
	int _g = (int)0;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(112)
	Array< ::String > _g1 = ::Reflect_obj::fields(defaults);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(112)
	while((true)){
		HX_STACK_LINE(112)
		if ((!(((_g < _g1->length))))){
			HX_STACK_LINE(112)
			break;
		}
		HX_STACK_LINE(112)
		::String field = _g1->__get(_g);		HX_STACK_VAR(field,"field");
		HX_STACK_LINE(112)
		++(_g);
		HX_STACK_LINE(113)
		Dynamic _g2 = this->__Field((HX_CSTRING("set_") + field),true);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(113)
		if (((_g2 != null()))){
			HX_STACK_LINE(114)
			Dynamic value = ::Reflect_obj::field(defaults,field);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(114)
			this->__SetField(field,value,true);
		}
	}
}
;
	return null();
}

//Style_obj::~Style_obj() { }

Dynamic Style_obj::__CreateEmpty() { return  new Style_obj; }
hx::ObjectPtr< Style_obj > Style_obj::__new(Dynamic defaults)
{  hx::ObjectPtr< Style_obj > result = new Style_obj();
	result->__construct(defaults);
	return result;}

Dynamic Style_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Style_obj > result = new Style_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *Style_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

::haxe::ui::toolkit::core::interfaces::IDisplayObject Style_obj::get_target( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_target",0x629d2f76,"haxe.ui.toolkit.style.Style.get_target","haxe/ui/toolkit/style/Style.hx",120,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	return this->_target;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_target,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject Style_obj::set_target( ::haxe::ui::toolkit::core::interfaces::IDisplayObject value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_target",0x661acdea,"haxe.ui.toolkit.style.Style.set_target","haxe/ui/toolkit/style/Style.hx",123,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(124)
	this->_target = value;
	HX_STACK_LINE(125)
	this->apply();
	HX_STACK_LINE(126)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_target,return )

bool Style_obj::get_autoApply( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_autoApply",0x55d8ec7a,"haxe.ui.toolkit.style.Style.get_autoApply","haxe/ui/toolkit/style/Style.hx",130,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	return this->_autoApply;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_autoApply,return )

bool Style_obj::set_autoApply( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_autoApply",0x9adece86,"haxe.ui.toolkit.style.Style.set_autoApply","haxe/ui/toolkit/style/Style.hx",133,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(134)
	this->_autoApply = value;
	HX_STACK_LINE(135)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_autoApply,return )

int Style_obj::get_width( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_width",0x85580581,"haxe.ui.toolkit.style.Style.get_width","haxe/ui/toolkit/style/Style.hx",138,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(139)
	if ((this->hasDynamicValue(HX_CSTRING("width")))){
		HX_STACK_LINE(140)
		return this->getDynamicValue(HX_CSTRING("width"));
	}
	HX_STACK_LINE(142)
	return this->_width;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_width,return )

int Style_obj::set_width( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_width",0x68a8f18d,"haxe.ui.toolkit.style.Style.set_width","haxe/ui/toolkit/style/Style.hx",145,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(146)
	if (((value != this->_width))){
		HX_STACK_LINE(147)
		this->_width = value;
		HX_STACK_LINE(148)
		this->apply();
	}
	HX_STACK_LINE(150)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_width,return )

int Style_obj::get_height( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_height",0xddfc440c,"haxe.ui.toolkit.style.Style.get_height","haxe/ui/toolkit/style/Style.hx",153,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	if ((this->hasDynamicValue(HX_CSTRING("height")))){
		HX_STACK_LINE(155)
		return this->getDynamicValue(HX_CSTRING("height"));
	}
	HX_STACK_LINE(157)
	return this->_height;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_height,return )

int Style_obj::set_height( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_height",0xe179e280,"haxe.ui.toolkit.style.Style.set_height","haxe/ui/toolkit/style/Style.hx",160,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(161)
	if (((value != this->_height))){
		HX_STACK_LINE(162)
		this->_height = value;
		HX_STACK_LINE(163)
		this->apply();
	}
	HX_STACK_LINE(165)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_height,return )

int Style_obj::get_percentWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_percentWidth",0xc83ab6e6,"haxe.ui.toolkit.style.Style.get_percentWidth","haxe/ui/toolkit/style/Style.hx",168,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	if ((this->hasDynamicValue(HX_CSTRING("percentWidth")))){
		HX_STACK_LINE(170)
		return this->getDynamicValue(HX_CSTRING("percentWidth"));
	}
	HX_STACK_LINE(172)
	return this->_percentWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_percentWidth,return )

int Style_obj::set_percentWidth( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_percentWidth",0x1e7ca45a,"haxe.ui.toolkit.style.Style.set_percentWidth","haxe/ui/toolkit/style/Style.hx",175,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(176)
	if (((value != this->_percentWidth))){
		HX_STACK_LINE(177)
		this->_percentWidth = value;
		HX_STACK_LINE(178)
		this->apply();
	}
	HX_STACK_LINE(180)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_percentWidth,return )

int Style_obj::get_percentHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_percentHeight",0x2174cb07,"haxe.ui.toolkit.style.Style.get_percentHeight","haxe/ui/toolkit/style/Style.hx",183,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	if ((this->hasDynamicValue(HX_CSTRING("percentHeight")))){
		HX_STACK_LINE(185)
		return this->getDynamicValue(HX_CSTRING("percentHeight"));
	}
	HX_STACK_LINE(187)
	return this->_percentHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_percentHeight,return )

int Style_obj::set_percentHeight( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_percentHeight",0x44e2a313,"haxe.ui.toolkit.style.Style.set_percentHeight","haxe/ui/toolkit/style/Style.hx",190,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(191)
	if (((value != this->_percentHeight))){
		HX_STACK_LINE(192)
		this->_percentHeight = value;
		HX_STACK_LINE(193)
		this->apply();
	}
	HX_STACK_LINE(195)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_percentHeight,return )

bool Style_obj::get_autoSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_autoSize",0x84ccdf35,"haxe.ui.toolkit.style.Style.get_autoSize","haxe/ui/toolkit/style/Style.hx",198,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(199)
	if ((this->hasDynamicValue(HX_CSTRING("autoSize")))){
		HX_STACK_LINE(200)
		return this->getDynamicValue(HX_CSTRING("autoSize"));
	}
	HX_STACK_LINE(202)
	if (((this->_autoSize == (int)-1))){
		HX_STACK_LINE(203)
		return true;
	}
	HX_STACK_LINE(205)
	return (this->_autoSize == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_autoSize,return )

bool Style_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_autoSize",0x99c602a9,"haxe.ui.toolkit.style.Style.set_autoSize","haxe/ui/toolkit/style/Style.hx",208,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(209)
	if ((value)){
		HX_STACK_LINE(209)
		this->_autoSize = (int)1;
	}
	else{
		HX_STACK_LINE(209)
		this->_autoSize = (int)0;
	}
	HX_STACK_LINE(210)
	this->apply();
	HX_STACK_LINE(211)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_autoSize,return )

bool Style_obj::get_autoSizeSet( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_autoSizeSet",0x0c90236d,"haxe.ui.toolkit.style.Style.get_autoSizeSet","haxe/ui/toolkit/style/Style.hx",214,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(215)
	if ((this->hasDynamicValue(HX_CSTRING("autoSize")))){
		HX_STACK_LINE(216)
		return true;
	}
	HX_STACK_LINE(218)
	if (((this->_autoSize != (int)-1))){
		HX_STACK_LINE(219)
		return true;
	}
	HX_STACK_LINE(221)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_autoSizeSet,return )

::String Style_obj::get_backgroundImage( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundImage",0xed7f93c8,"haxe.ui.toolkit.style.Style.get_backgroundImage","haxe/ui/toolkit/style/Style.hx",224,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	if ((this->hasDynamicValue(HX_CSTRING("backgroundImage")))){
		HX_STACK_LINE(226)
		return this->getDynamicValue(HX_CSTRING("backgroundImage"));
	}
	HX_STACK_LINE(228)
	return this->_backgroundImage;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundImage,return )

::String Style_obj::set_backgroundImage( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundImage",0x2a1c86d4,"haxe.ui.toolkit.style.Style.set_backgroundImage","haxe/ui/toolkit/style/Style.hx",231,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(232)
	if (((value != this->_backgroundImage))){
		HX_STACK_LINE(233)
		this->_backgroundImage = value;
		HX_STACK_LINE(234)
		this->apply();
	}
	HX_STACK_LINE(236)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundImage,return )

::openfl::geom::Rectangle Style_obj::get_backgroundImageScale9( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundImageScale9",0x576ef857,"haxe.ui.toolkit.style.Style.get_backgroundImageScale9","haxe/ui/toolkit/style/Style.hx",239,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	if ((this->hasDynamicValue(HX_CSTRING("backgroundImageScale9")))){
		HX_STACK_LINE(241)
		return this->getDynamicValue(HX_CSTRING("backgroundImageScale9"));
	}
	HX_STACK_LINE(243)
	return this->_backgroundImageScale9;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundImageScale9,return )

::openfl::geom::Rectangle Style_obj::set_backgroundImageScale9( ::openfl::geom::Rectangle value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundImageScale9",0xc3c5bc63,"haxe.ui.toolkit.style.Style.set_backgroundImageScale9","haxe/ui/toolkit/style/Style.hx",246,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(247)
	if (((value != this->_backgroundImageScale9))){
		HX_STACK_LINE(248)
		this->_backgroundImageScale9 = value;
		HX_STACK_LINE(249)
		this->apply();
	}
	HX_STACK_LINE(251)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundImageScale9,return )

::openfl::geom::Rectangle Style_obj::get_backgroundImageRect( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundImageRect",0x5ee9910c,"haxe.ui.toolkit.style.Style.get_backgroundImageRect","haxe/ui/toolkit/style/Style.hx",254,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	if ((this->hasDynamicValue(HX_CSTRING("backgroundImageRect")))){
		HX_STACK_LINE(256)
		return this->getDynamicValue(HX_CSTRING("backgroundImageRect"));
	}
	HX_STACK_LINE(258)
	return this->_backgroundImageRect;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundImageRect,return )

::openfl::geom::Rectangle Style_obj::set_backgroundImageRect( ::openfl::geom::Rectangle value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundImageRect",0x614afa18,"haxe.ui.toolkit.style.Style.set_backgroundImageRect","haxe/ui/toolkit/style/Style.hx",261,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(262)
	if (((value != this->_backgroundImageRect))){
		HX_STACK_LINE(263)
		this->_backgroundImageRect = value;
		HX_STACK_LINE(264)
		this->apply();
	}
	HX_STACK_LINE(266)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundImageRect,return )

int Style_obj::get_backgroundColor( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundColor",0x7a72e5d0,"haxe.ui.toolkit.style.Style.get_backgroundColor","haxe/ui/toolkit/style/Style.hx",269,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(270)
	if ((this->hasDynamicValue(HX_CSTRING("backgroundColor")))){
		HX_STACK_LINE(271)
		return this->getDynamicValue(HX_CSTRING("backgroundColor"));
	}
	HX_STACK_LINE(273)
	return this->_backgroundColor;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundColor,return )

int Style_obj::set_backgroundColor( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundColor",0xb70fd8dc,"haxe.ui.toolkit.style.Style.set_backgroundColor","haxe/ui/toolkit/style/Style.hx",276,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(277)
	if (((value != this->_backgroundColor))){
		HX_STACK_LINE(278)
		this->_backgroundColor = value;
		HX_STACK_LINE(279)
		this->apply();
	}
	HX_STACK_LINE(281)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundColor,return )

int Style_obj::get_backgroundColorGradientEnd( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_backgroundColorGradientEnd",0xf6bb3bdb,"haxe.ui.toolkit.style.Style.get_backgroundColorGradientEnd","haxe/ui/toolkit/style/Style.hx",284,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(285)
	if ((this->hasDynamicValue(HX_CSTRING("backgroundColorGradientEnd")))){
		HX_STACK_LINE(286)
		return this->getDynamicValue(HX_CSTRING("backgroundColorGradientEnd"));
	}
	HX_STACK_LINE(288)
	return this->_backgroundColorGradientEnd;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_backgroundColorGradientEnd,return )

int Style_obj::set_backgroundColorGradientEnd( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_backgroundColorGradientEnd",0xd1a64c4f,"haxe.ui.toolkit.style.Style.set_backgroundColorGradientEnd","haxe/ui/toolkit/style/Style.hx",291,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(292)
	if (((value != this->_backgroundColorGradientEnd))){
		HX_STACK_LINE(293)
		this->_backgroundColorGradientEnd = value;
		HX_STACK_LINE(294)
		this->apply();
	}
	HX_STACK_LINE(296)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_backgroundColorGradientEnd,return )

int Style_obj::get_borderColor( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_borderColor",0xd1ffda92,"haxe.ui.toolkit.style.Style.get_borderColor","haxe/ui/toolkit/style/Style.hx",299,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(300)
	if ((this->hasDynamicValue(HX_CSTRING("borderColor")))){
		HX_STACK_LINE(301)
		return this->getDynamicValue(HX_CSTRING("borderColor"));
	}
	HX_STACK_LINE(303)
	return this->_borderColor;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_borderColor,return )

int Style_obj::set_borderColor( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_borderColor",0xcdcb579e,"haxe.ui.toolkit.style.Style.set_borderColor","haxe/ui/toolkit/style/Style.hx",306,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(307)
	if (((value != this->_borderColor))){
		HX_STACK_LINE(308)
		this->_borderColor = value;
		HX_STACK_LINE(309)
		this->apply();
	}
	HX_STACK_LINE(311)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_borderColor,return )

int Style_obj::get_borderSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_borderSize",0xd33fb272,"haxe.ui.toolkit.style.Style.get_borderSize","haxe/ui/toolkit/style/Style.hx",314,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	if ((this->hasDynamicValue(HX_CSTRING("borderSize")))){
		HX_STACK_LINE(316)
		return this->getDynamicValue(HX_CSTRING("borderSize"));
	}
	HX_STACK_LINE(318)
	return this->_borderSize;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_borderSize,return )

int Style_obj::set_borderSize( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_borderSize",0xf35f9ae6,"haxe.ui.toolkit.style.Style.set_borderSize","haxe/ui/toolkit/style/Style.hx",321,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(322)
	if (((value != this->_borderSize))){
		HX_STACK_LINE(323)
		this->_borderSize = value;
		HX_STACK_LINE(324)
		this->apply();
	}
	HX_STACK_LINE(326)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_borderSize,return )

int Style_obj::get_color( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_color",0x0551c0de,"haxe.ui.toolkit.style.Style.get_color","haxe/ui/toolkit/style/Style.hx",329,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	if ((this->hasDynamicValue(HX_CSTRING("color")))){
		HX_STACK_LINE(331)
		return this->getDynamicValue(HX_CSTRING("color"));
	}
	HX_STACK_LINE(333)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_color,return )

int Style_obj::set_color( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_color",0xe8a2acea,"haxe.ui.toolkit.style.Style.set_color","haxe/ui/toolkit/style/Style.hx",336,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(337)
	if (((value != this->_color))){
		HX_STACK_LINE(338)
		this->_color = value;
		HX_STACK_LINE(339)
		this->apply();
	}
	HX_STACK_LINE(341)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_color,return )

int Style_obj::get_paddingLeft( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_paddingLeft",0x8110e833,"haxe.ui.toolkit.style.Style.get_paddingLeft","haxe/ui/toolkit/style/Style.hx",344,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(345)
	if ((this->hasDynamicValue(HX_CSTRING("paddingLeft")))){
		HX_STACK_LINE(346)
		return this->getDynamicValue(HX_CSTRING("paddingRight"));
	}
	HX_STACK_LINE(348)
	if ((this->hasDynamicValue(HX_CSTRING("padding")))){
		HX_STACK_LINE(349)
		return this->getDynamicValue(HX_CSTRING("padding"));
	}
	HX_STACK_LINE(351)
	return this->_paddingLeft;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_paddingLeft,return )

int Style_obj::set_paddingLeft( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_paddingLeft",0x7cdc653f,"haxe.ui.toolkit.style.Style.set_paddingLeft","haxe/ui/toolkit/style/Style.hx",354,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(355)
	if (((value != this->_paddingLeft))){
		HX_STACK_LINE(356)
		this->_paddingLeft = value;
		HX_STACK_LINE(357)
		this->apply();
	}
	HX_STACK_LINE(359)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_paddingLeft,return )

int Style_obj::get_paddingRight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_paddingRight",0xe4c75230,"haxe.ui.toolkit.style.Style.get_paddingRight","haxe/ui/toolkit/style/Style.hx",362,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(363)
	if ((this->hasDynamicValue(HX_CSTRING("paddingRight")))){
		HX_STACK_LINE(364)
		return this->getDynamicValue(HX_CSTRING("paddingRight"));
	}
	HX_STACK_LINE(366)
	if ((this->hasDynamicValue(HX_CSTRING("padding")))){
		HX_STACK_LINE(367)
		return this->getDynamicValue(HX_CSTRING("padding"));
	}
	HX_STACK_LINE(369)
	return this->_paddingRight;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_paddingRight,return )

int Style_obj::set_paddingRight( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_paddingRight",0x3b093fa4,"haxe.ui.toolkit.style.Style.set_paddingRight","haxe/ui/toolkit/style/Style.hx",372,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(373)
	if (((value != this->_paddingRight))){
		HX_STACK_LINE(374)
		this->_paddingRight = value;
		HX_STACK_LINE(375)
		this->apply();
	}
	HX_STACK_LINE(377)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_paddingRight,return )

int Style_obj::get_paddingTop( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_paddingTop",0x0657afe9,"haxe.ui.toolkit.style.Style.get_paddingTop","haxe/ui/toolkit/style/Style.hx",380,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(381)
	if ((this->hasDynamicValue(HX_CSTRING("paddingTop")))){
		HX_STACK_LINE(382)
		return this->getDynamicValue(HX_CSTRING("paddingTop"));
	}
	HX_STACK_LINE(384)
	if ((this->hasDynamicValue(HX_CSTRING("padding")))){
		HX_STACK_LINE(385)
		return this->getDynamicValue(HX_CSTRING("padding"));
	}
	HX_STACK_LINE(387)
	return this->_paddingTop;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_paddingTop,return )

int Style_obj::set_paddingTop( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_paddingTop",0x2677985d,"haxe.ui.toolkit.style.Style.set_paddingTop","haxe/ui/toolkit/style/Style.hx",390,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(391)
	if (((value != this->_paddingTop))){
		HX_STACK_LINE(392)
		this->_paddingTop = value;
		HX_STACK_LINE(393)
		this->apply();
	}
	HX_STACK_LINE(395)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_paddingTop,return )

int Style_obj::get_paddingBottom( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_paddingBottom",0x60f32a17,"haxe.ui.toolkit.style.Style.get_paddingBottom","haxe/ui/toolkit/style/Style.hx",398,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(399)
	if ((this->hasDynamicValue(HX_CSTRING("paddingBottom")))){
		HX_STACK_LINE(400)
		return this->getDynamicValue(HX_CSTRING("paddingBottom"));
	}
	HX_STACK_LINE(402)
	if ((this->hasDynamicValue(HX_CSTRING("padding")))){
		HX_STACK_LINE(403)
		return this->getDynamicValue(HX_CSTRING("padding"));
	}
	HX_STACK_LINE(405)
	return this->_paddingBottom;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_paddingBottom,return )

int Style_obj::set_paddingBottom( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_paddingBottom",0x84610223,"haxe.ui.toolkit.style.Style.set_paddingBottom","haxe/ui/toolkit/style/Style.hx",408,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(409)
	if (((value != this->_paddingBottom))){
		HX_STACK_LINE(410)
		this->_paddingBottom = value;
		HX_STACK_LINE(411)
		this->apply();
	}
	HX_STACK_LINE(413)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_paddingBottom,return )

int Style_obj::get_padding( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_padding",0x2f01be0c,"haxe.ui.toolkit.style.Style.get_padding","haxe/ui/toolkit/style/Style.hx",416,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(417)
	if ((this->hasDynamicValue(HX_CSTRING("padding")))){
		HX_STACK_LINE(418)
		return this->getDynamicValue(HX_CSTRING("padding"));
	}
	HX_STACK_LINE(420)
	return hx::TCast< Int >::cast((int((int((int(this->_paddingLeft) | int(this->_paddingRight))) | int(this->_paddingTop))) | int(this->_paddingBottom)));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_padding,return )

int Style_obj::set_padding( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_padding",0x396ec518,"haxe.ui.toolkit.style.Style.set_padding","haxe/ui/toolkit/style/Style.hx",423,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(424)
	if (((bool((bool((bool((value != this->_paddingLeft)) || bool((value != this->_paddingRight)))) || bool((value != this->_paddingTop)))) || bool((value != this->_paddingBottom))))){
		HX_STACK_LINE(425)
		this->_paddingLeft = value;
		HX_STACK_LINE(426)
		this->_paddingRight = value;
		HX_STACK_LINE(427)
		this->_paddingTop = value;
		HX_STACK_LINE(428)
		this->_paddingBottom = value;
		HX_STACK_LINE(429)
		this->apply();
	}
	HX_STACK_LINE(431)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_padding,return )

int Style_obj::get_spacingX( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_spacingX",0x47652eda,"haxe.ui.toolkit.style.Style.get_spacingX","haxe/ui/toolkit/style/Style.hx",434,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(435)
	if ((this->hasDynamicValue(HX_CSTRING("spacingX")))){
		HX_STACK_LINE(436)
		return this->getDynamicValue(HX_CSTRING("spacingX"));
	}
	HX_STACK_LINE(438)
	if ((this->hasDynamicValue(HX_CSTRING("spacing")))){
		HX_STACK_LINE(439)
		return this->getDynamicValue(HX_CSTRING("spacing"));
	}
	HX_STACK_LINE(441)
	return this->_spacingX;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_spacingX,return )

int Style_obj::set_spacingX( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_spacingX",0x5c5e524e,"haxe.ui.toolkit.style.Style.set_spacingX","haxe/ui/toolkit/style/Style.hx",444,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(445)
	if (((value != this->_spacingX))){
		HX_STACK_LINE(446)
		this->_spacingX = value;
		HX_STACK_LINE(447)
		this->apply();
	}
	HX_STACK_LINE(449)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_spacingX,return )

int Style_obj::get_spacingY( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_spacingY",0x47652edb,"haxe.ui.toolkit.style.Style.get_spacingY","haxe/ui/toolkit/style/Style.hx",452,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(453)
	if ((this->hasDynamicValue(HX_CSTRING("spacingY")))){
		HX_STACK_LINE(454)
		return this->getDynamicValue(HX_CSTRING("spacingY"));
	}
	HX_STACK_LINE(456)
	if ((this->hasDynamicValue(HX_CSTRING("spacing")))){
		HX_STACK_LINE(457)
		return this->getDynamicValue(HX_CSTRING("spacing"));
	}
	HX_STACK_LINE(459)
	return this->_spacingY;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_spacingY,return )

int Style_obj::set_spacingY( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_spacingY",0x5c5e524f,"haxe.ui.toolkit.style.Style.set_spacingY","haxe/ui/toolkit/style/Style.hx",462,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(463)
	if (((value != this->_spacingY))){
		HX_STACK_LINE(464)
		this->_spacingY = value;
		HX_STACK_LINE(465)
		this->apply();
	}
	HX_STACK_LINE(467)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_spacingY,return )

int Style_obj::get_spacing( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_spacing",0xf03f97be,"haxe.ui.toolkit.style.Style.get_spacing","haxe/ui/toolkit/style/Style.hx",470,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(471)
	if ((this->hasDynamicValue(HX_CSTRING("spacing")))){
		HX_STACK_LINE(472)
		return this->getDynamicValue(HX_CSTRING("spacing"));
	}
	HX_STACK_LINE(474)
	return (int(this->_spacingX) | int(this->_spacingY));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_spacing,return )

int Style_obj::set_spacing( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_spacing",0xfaac9eca,"haxe.ui.toolkit.style.Style.set_spacing","haxe/ui/toolkit/style/Style.hx",477,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(478)
	if (((bool((value != this->_spacingX)) || bool((value != this->_spacingY))))){
		HX_STACK_LINE(479)
		this->_spacingX = value;
		HX_STACK_LINE(480)
		this->_spacingY = value;
		HX_STACK_LINE(481)
		this->apply();
	}
	HX_STACK_LINE(483)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_spacing,return )

::String Style_obj::get_horizontalAlignment( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_horizontalAlignment",0x0f275a1a,"haxe.ui.toolkit.style.Style.get_horizontalAlignment","haxe/ui/toolkit/style/Style.hx",486,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(487)
	if ((this->hasDynamicValue(HX_CSTRING("horizontalAlignment")))){
		HX_STACK_LINE(488)
		return this->getDynamicValue(HX_CSTRING("horizontalAlignment"));
	}
	HX_STACK_LINE(490)
	return this->_horizontalAlignment;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_horizontalAlignment,return )

::String Style_obj::set_horizontalAlignment( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_horizontalAlignment",0x1188c326,"haxe.ui.toolkit.style.Style.set_horizontalAlignment","haxe/ui/toolkit/style/Style.hx",493,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(494)
	if (((value != this->_horizontalAlignment))){
		HX_STACK_LINE(495)
		this->_horizontalAlignment = value;
		HX_STACK_LINE(496)
		this->apply();
	}
	HX_STACK_LINE(498)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_horizontalAlignment,return )

::String Style_obj::get_verticalAlignment( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_verticalAlignment",0xca62e388,"haxe.ui.toolkit.style.Style.get_verticalAlignment","haxe/ui/toolkit/style/Style.hx",501,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(502)
	if ((this->hasDynamicValue(HX_CSTRING("verticalAlignment")))){
		HX_STACK_LINE(503)
		return this->getDynamicValue(HX_CSTRING("verticalAlignment"));
	}
	HX_STACK_LINE(505)
	return this->_verticalAlignment;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_verticalAlignment,return )

::String Style_obj::set_verticalAlignment( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_verticalAlignment",0x1e6bb194,"haxe.ui.toolkit.style.Style.set_verticalAlignment","haxe/ui/toolkit/style/Style.hx",508,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(509)
	if (((value != this->_verticalAlignment))){
		HX_STACK_LINE(510)
		this->_verticalAlignment = value;
		HX_STACK_LINE(511)
		this->apply();
	}
	HX_STACK_LINE(513)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_verticalAlignment,return )

int Style_obj::get_cornerRadiusTopLeft( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadiusTopLeft",0xecb34eb0,"haxe.ui.toolkit.style.Style.get_cornerRadiusTopLeft","haxe/ui/toolkit/style/Style.hx",516,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(517)
	if ((this->hasDynamicValue(HX_CSTRING("cornerRadiusTopLeft")))){
		HX_STACK_LINE(518)
		return this->getDynamicValue(HX_CSTRING("cornerRadiusTopLeft"));
	}
	HX_STACK_LINE(520)
	if ((this->hasDynamicValue(HX_CSTRING("cornerRadius")))){
		HX_STACK_LINE(521)
		return this->getDynamicValue(HX_CSTRING("cornerRadius"));
	}
	HX_STACK_LINE(523)
	return this->_cornerRadiusTopLeft;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadiusTopLeft,return )

int Style_obj::set_cornerRadiusTopLeft( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadiusTopLeft",0xef14b7bc,"haxe.ui.toolkit.style.Style.set_cornerRadiusTopLeft","haxe/ui/toolkit/style/Style.hx",526,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(527)
	if (((value != this->_cornerRadiusTopLeft))){
		HX_STACK_LINE(528)
		this->_cornerRadiusTopLeft = value;
		HX_STACK_LINE(529)
		this->apply();
	}
	HX_STACK_LINE(531)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadiusTopLeft,return )

int Style_obj::get_cornerRadiusTopRight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadiusTopRight",0xa73e9913,"haxe.ui.toolkit.style.Style.get_cornerRadiusTopRight","haxe/ui/toolkit/style/Style.hx",534,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(535)
	if ((this->hasDynamicValue(HX_CSTRING("cornerRadiusTopRight")))){
		HX_STACK_LINE(536)
		return this->getDynamicValue(HX_CSTRING("cornerRadiusTopRight"));
	}
	HX_STACK_LINE(538)
	if ((this->hasDynamicValue(HX_CSTRING("cornerRadius")))){
		HX_STACK_LINE(539)
		return this->getDynamicValue(HX_CSTRING("cornerRadius"));
	}
	HX_STACK_LINE(541)
	return this->_cornerRadiusTopRight;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadiusTopRight,return )

int Style_obj::set_cornerRadiusTopRight( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadiusTopRight",0xba191a87,"haxe.ui.toolkit.style.Style.set_cornerRadiusTopRight","haxe/ui/toolkit/style/Style.hx",544,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(545)
	if (((value != this->_cornerRadiusTopRight))){
		HX_STACK_LINE(546)
		this->_cornerRadiusTopRight = value;
		HX_STACK_LINE(547)
		this->apply();
	}
	HX_STACK_LINE(549)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadiusTopRight,return )

int Style_obj::get_cornerRadiusBottomLeft( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadiusBottomLeft",0x944b079e,"haxe.ui.toolkit.style.Style.get_cornerRadiusBottomLeft","haxe/ui/toolkit/style/Style.hx",552,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(553)
	if ((this->hasDynamicValue(HX_CSTRING("cornerRadiusBottomLeft")))){
		HX_STACK_LINE(554)
		return this->getDynamicValue(HX_CSTRING("cornerRadiusBottomLeft"));
	}
	HX_STACK_LINE(556)
	if ((this->hasDynamicValue(HX_CSTRING("cornerRadius")))){
		HX_STACK_LINE(557)
		return this->getDynamicValue(HX_CSTRING("cornerRadius"));
	}
	HX_STACK_LINE(559)
	return this->_cornerRadiusBottomLeft;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadiusBottomLeft,return )

int Style_obj::set_cornerRadiusBottomLeft( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadiusBottomLeft",0xf3dfce12,"haxe.ui.toolkit.style.Style.set_cornerRadiusBottomLeft","haxe/ui/toolkit/style/Style.hx",562,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(563)
	if (((value != this->_cornerRadiusBottomLeft))){
		HX_STACK_LINE(564)
		this->_cornerRadiusBottomLeft = value;
		HX_STACK_LINE(565)
		this->apply();
	}
	HX_STACK_LINE(567)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadiusBottomLeft,return )

int Style_obj::get_cornerRadiusBottomRight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadiusBottomRight",0xa468b065,"haxe.ui.toolkit.style.Style.get_cornerRadiusBottomRight","haxe/ui/toolkit/style/Style.hx",570,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(571)
	if ((this->hasDynamicValue(HX_CSTRING("cornerRadiusBottomRight")))){
		HX_STACK_LINE(572)
		return this->getDynamicValue(HX_CSTRING("cornerRadiusBottomRight"));
	}
	HX_STACK_LINE(574)
	if ((this->hasDynamicValue(HX_CSTRING("cornerRadius")))){
		HX_STACK_LINE(575)
		return this->getDynamicValue(HX_CSTRING("cornerRadius"));
	}
	HX_STACK_LINE(577)
	return this->_cornerRadiusBottomRight;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadiusBottomRight,return )

int Style_obj::set_cornerRadiusBottomRight( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadiusBottomRight",0xe7018f71,"haxe.ui.toolkit.style.Style.set_cornerRadiusBottomRight","haxe/ui/toolkit/style/Style.hx",580,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(581)
	if (((value != this->_cornerRadiusBottomRight))){
		HX_STACK_LINE(582)
		this->_cornerRadiusBottomRight = value;
		HX_STACK_LINE(583)
		this->apply();
	}
	HX_STACK_LINE(585)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadiusBottomRight,return )

int Style_obj::get_cornerRadius( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_cornerRadius",0x577cf7ec,"haxe.ui.toolkit.style.Style.get_cornerRadius","haxe/ui/toolkit/style/Style.hx",588,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(589)
	if ((this->hasDynamicValue(HX_CSTRING("cornerRadius")))){
		HX_STACK_LINE(590)
		return this->getDynamicValue(HX_CSTRING("cornerRadius"));
	}
	HX_STACK_LINE(592)
	return (int((int((int(this->_cornerRadiusTopLeft) | int(this->_cornerRadiusTopRight))) | int(this->_cornerRadiusBottomLeft))) | int(this->_cornerRadiusBottomRight));
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_cornerRadius,return )

int Style_obj::set_cornerRadius( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_cornerRadius",0xadbee560,"haxe.ui.toolkit.style.Style.set_cornerRadius","haxe/ui/toolkit/style/Style.hx",595,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(596)
	if (((bool((bool((bool((value != this->_cornerRadiusTopLeft)) || bool((value != this->_cornerRadiusTopRight)))) || bool((value != this->_cornerRadiusBottomLeft)))) || bool((value != this->_cornerRadiusBottomRight))))){
		HX_STACK_LINE(597)
		this->_cornerRadiusTopLeft = value;
		HX_STACK_LINE(598)
		this->_cornerRadiusTopRight = value;
		HX_STACK_LINE(599)
		this->_cornerRadiusBottomLeft = value;
		HX_STACK_LINE(600)
		this->_cornerRadiusBottomRight = value;
		HX_STACK_LINE(601)
		this->apply();
	}
	HX_STACK_LINE(603)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_cornerRadius,return )

::openfl::filters::BitmapFilter Style_obj::get_filter( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_filter",0x60e55bdd,"haxe.ui.toolkit.style.Style.get_filter","haxe/ui/toolkit/style/Style.hx",606,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(607)
	if ((this->hasDynamicValue(HX_CSTRING("filter")))){
		HX_STACK_LINE(608)
		return this->getDynamicValue(HX_CSTRING("filter"));
	}
	HX_STACK_LINE(610)
	return this->_filter;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_filter,return )

::openfl::filters::BitmapFilter Style_obj::set_filter( ::openfl::filters::BitmapFilter value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_filter",0x6462fa51,"haxe.ui.toolkit.style.Style.set_filter","haxe/ui/toolkit/style/Style.hx",613,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(614)
	this->_filterSet = true;
	HX_STACK_LINE(615)
	if (((value != this->_filter))){
		HX_STACK_LINE(616)
		this->_filter = value;
		HX_STACK_LINE(617)
		this->apply();
	}
	HX_STACK_LINE(619)
	return this->_filter;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_filter,return )

Float Style_obj::get_alpha( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_alpha",0xdc8bf6d9,"haxe.ui.toolkit.style.Style.get_alpha","haxe/ui/toolkit/style/Style.hx",622,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(623)
	if ((this->hasDynamicValue(HX_CSTRING("alpha")))){
		HX_STACK_LINE(624)
		return this->getDynamicValue(HX_CSTRING("alpha"));
	}
	HX_STACK_LINE(626)
	return this->_alpha;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_alpha,return )

Float Style_obj::set_alpha( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_alpha",0xbfdce2e5,"haxe.ui.toolkit.style.Style.set_alpha","haxe/ui/toolkit/style/Style.hx",629,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(630)
	if (((value != this->_alpha))){
		HX_STACK_LINE(631)
		this->_alpha = value;
		HX_STACK_LINE(632)
		this->apply();
	}
	HX_STACK_LINE(634)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_alpha,return )

::String Style_obj::get_fontName( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontName",0x20d0df1f,"haxe.ui.toolkit.style.Style.get_fontName","haxe/ui/toolkit/style/Style.hx",637,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(638)
	if ((this->hasDynamicValue(HX_CSTRING("fontName")))){
		HX_STACK_LINE(639)
		return this->getDynamicValue(HX_CSTRING("fontName"));
	}
	HX_STACK_LINE(641)
	return this->_fontName;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontName,return )

::String Style_obj::set_fontName( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontName",0x35ca0293,"haxe.ui.toolkit.style.Style.set_fontName","haxe/ui/toolkit/style/Style.hx",644,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(645)
	if (((value != this->_fontName))){
		HX_STACK_LINE(646)
		this->_fontName = value;
		HX_STACK_LINE(647)
		this->apply();
	}
	HX_STACK_LINE(649)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontName,return )

Float Style_obj::get_fontSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontSize",0x24250d95,"haxe.ui.toolkit.style.Style.get_fontSize","haxe/ui/toolkit/style/Style.hx",652,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(653)
	if ((this->hasDynamicValue(HX_CSTRING("fontSize")))){
		HX_STACK_LINE(654)
		return this->getDynamicValue(HX_CSTRING("fontSize"));
	}
	HX_STACK_LINE(656)
	Float size = this->_fontSize;		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(657)
	if (((this->_fontScale > (int)0))){
		HX_STACK_LINE(658)
		size = (this->_fontSize * this->_fontScale);
	}
	HX_STACK_LINE(660)
	return size;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontSize,return )

Float Style_obj::set_fontSize( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontSize",0x391e3109,"haxe.ui.toolkit.style.Style.set_fontSize","haxe/ui/toolkit/style/Style.hx",663,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(664)
	if (((value != this->_fontSize))){
		HX_STACK_LINE(665)
		this->_fontSize = value;
		HX_STACK_LINE(666)
		this->apply();
	}
	HX_STACK_LINE(668)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontSize,return )

Float Style_obj::get_fontScale( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontScale",0x783c9b36,"haxe.ui.toolkit.style.Style.get_fontScale","haxe/ui/toolkit/style/Style.hx",671,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(672)
	if ((this->hasDynamicValue(HX_CSTRING("fontScale")))){
		HX_STACK_LINE(673)
		return this->getDynamicValue(HX_CSTRING("fontScale"));
	}
	HX_STACK_LINE(675)
	return this->_fontScale;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontScale,return )

Float Style_obj::set_fontScale( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontScale",0xbd427d42,"haxe.ui.toolkit.style.Style.set_fontScale","haxe/ui/toolkit/style/Style.hx",678,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(679)
	if (((value != this->_fontScale))){
		HX_STACK_LINE(680)
		this->_fontScale = value;
		HX_STACK_LINE(681)
		this->apply();
	}
	HX_STACK_LINE(683)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontScale,return )

bool Style_obj::get_fontEmbedded( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontEmbedded",0xca4c805e,"haxe.ui.toolkit.style.Style.get_fontEmbedded","haxe/ui/toolkit/style/Style.hx",686,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(687)
	if ((this->hasDynamicValue(HX_CSTRING("fontEmbedded")))){
		HX_STACK_LINE(688)
		return this->getDynamicValue(HX_CSTRING("fontEmbedded"));
	}
	HX_STACK_LINE(690)
	if (((this->_fontEmbedded == (int)-1))){
		HX_STACK_LINE(691)
		return false;
	}
	HX_STACK_LINE(693)
	return (this->_fontEmbedded == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontEmbedded,return )

bool Style_obj::set_fontEmbedded( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontEmbedded",0x208e6dd2,"haxe.ui.toolkit.style.Style.set_fontEmbedded","haxe/ui/toolkit/style/Style.hx",696,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(697)
	if ((value)){
		HX_STACK_LINE(697)
		this->_fontEmbedded = (int)1;
	}
	else{
		HX_STACK_LINE(697)
		this->_fontEmbedded = (int)0;
	}
	HX_STACK_LINE(698)
	this->apply();
	HX_STACK_LINE(699)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontEmbedded,return )

bool Style_obj::get_fontBold( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontBold",0x18ecee59,"haxe.ui.toolkit.style.Style.get_fontBold","haxe/ui/toolkit/style/Style.hx",702,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(703)
	if ((this->hasDynamicValue(HX_CSTRING("fontBold")))){
		HX_STACK_LINE(704)
		return this->getDynamicValue(HX_CSTRING("fontBold"));
	}
	HX_STACK_LINE(706)
	if (((this->_fontBold == (int)-1))){
		HX_STACK_LINE(707)
		return false;
	}
	HX_STACK_LINE(709)
	return (this->_fontBold == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontBold,return )

bool Style_obj::set_fontBold( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontBold",0x2de611cd,"haxe.ui.toolkit.style.Style.set_fontBold","haxe/ui/toolkit/style/Style.hx",712,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(713)
	if ((value)){
		HX_STACK_LINE(713)
		this->_fontBold = (int)1;
	}
	else{
		HX_STACK_LINE(713)
		this->_fontBold = (int)0;
	}
	HX_STACK_LINE(714)
	this->apply();
	HX_STACK_LINE(715)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontBold,return )

bool Style_obj::get_fontItalic( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontItalic",0x870978c4,"haxe.ui.toolkit.style.Style.get_fontItalic","haxe/ui/toolkit/style/Style.hx",718,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(719)
	if ((this->hasDynamicValue(HX_CSTRING("fontItalic")))){
		HX_STACK_LINE(720)
		return this->getDynamicValue(HX_CSTRING("fontItalic"));
	}
	HX_STACK_LINE(722)
	if (((this->_fontItalic == (int)-1))){
		HX_STACK_LINE(723)
		return false;
	}
	HX_STACK_LINE(725)
	return (this->_fontItalic == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontItalic,return )

bool Style_obj::set_fontItalic( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontItalic",0xa7296138,"haxe.ui.toolkit.style.Style.set_fontItalic","haxe/ui/toolkit/style/Style.hx",728,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(729)
	if ((value)){
		HX_STACK_LINE(729)
		this->_fontItalic = (int)1;
	}
	else{
		HX_STACK_LINE(729)
		this->_fontItalic = (int)0;
	}
	HX_STACK_LINE(730)
	this->apply();
	HX_STACK_LINE(731)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontItalic,return )

bool Style_obj::get_fontUnderline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_fontUnderline",0x0900a7b8,"haxe.ui.toolkit.style.Style.get_fontUnderline","haxe/ui/toolkit/style/Style.hx",734,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(735)
	if ((this->hasDynamicValue(HX_CSTRING("fontUnderline")))){
		HX_STACK_LINE(736)
		return this->getDynamicValue(HX_CSTRING("fontUnderline"));
	}
	HX_STACK_LINE(738)
	if (((this->_fontUnderline == (int)-1))){
		HX_STACK_LINE(739)
		return false;
	}
	HX_STACK_LINE(741)
	return (this->_fontUnderline == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_fontUnderline,return )

bool Style_obj::set_fontUnderline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_fontUnderline",0x2c6e7fc4,"haxe.ui.toolkit.style.Style.set_fontUnderline","haxe/ui/toolkit/style/Style.hx",744,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(745)
	if ((value)){
		HX_STACK_LINE(745)
		this->_fontUnderline = (int)1;
	}
	else{
		HX_STACK_LINE(745)
		this->_fontUnderline = (int)0;
	}
	HX_STACK_LINE(746)
	this->apply();
	HX_STACK_LINE(747)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_fontUnderline,return )

::String Style_obj::get_textAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_textAlign",0x0e110fd3,"haxe.ui.toolkit.style.Style.get_textAlign","haxe/ui/toolkit/style/Style.hx",750,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(751)
	if ((this->hasDynamicValue(HX_CSTRING("textAlign")))){
		HX_STACK_LINE(752)
		return this->getDynamicValue(HX_CSTRING("textAlign"));
	}
	HX_STACK_LINE(754)
	return this->_textAlign;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_textAlign,return )

::String Style_obj::set_textAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_textAlign",0x5316f1df,"haxe.ui.toolkit.style.Style.set_textAlign","haxe/ui/toolkit/style/Style.hx",757,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(758)
	if (((value != this->_textAlign))){
		HX_STACK_LINE(759)
		this->_textAlign = value;
		HX_STACK_LINE(760)
		this->apply();
	}
	HX_STACK_LINE(762)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_textAlign,return )

::String Style_obj::get_iconPosition( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_iconPosition",0x40584b27,"haxe.ui.toolkit.style.Style.get_iconPosition","haxe/ui/toolkit/style/Style.hx",765,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(766)
	if ((this->hasDynamicValue(HX_CSTRING("iconPosition")))){
		HX_STACK_LINE(767)
		return this->getDynamicValue(HX_CSTRING("iconPosition"));
	}
	HX_STACK_LINE(769)
	return this->_iconPosition;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_iconPosition,return )

::String Style_obj::set_iconPosition( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_iconPosition",0x969a389b,"haxe.ui.toolkit.style.Style.set_iconPosition","haxe/ui/toolkit/style/Style.hx",772,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(773)
	if (((value != this->_iconPosition))){
		HX_STACK_LINE(774)
		this->_iconPosition = value;
		HX_STACK_LINE(775)
		this->apply();
	}
	HX_STACK_LINE(777)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_iconPosition,return )

::String Style_obj::get_icon( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_icon",0x20a7605e,"haxe.ui.toolkit.style.Style.get_icon","haxe/ui/toolkit/style/Style.hx",780,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(781)
	if ((this->hasDynamicValue(HX_CSTRING("icon")))){
		HX_STACK_LINE(782)
		return this->getDynamicValue(HX_CSTRING("icon"));
	}
	HX_STACK_LINE(784)
	return this->_icon;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_icon,return )

::String Style_obj::set_icon( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_icon",0xcf04b9d2,"haxe.ui.toolkit.style.Style.set_icon","haxe/ui/toolkit/style/Style.hx",787,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(788)
	if (((value != this->_icon))){
		HX_STACK_LINE(789)
		this->_icon = value;
		HX_STACK_LINE(790)
		this->apply();
	}
	HX_STACK_LINE(792)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_icon,return )

bool Style_obj::get_hasButtons( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_hasButtons",0x217aecac,"haxe.ui.toolkit.style.Style.get_hasButtons","haxe/ui/toolkit/style/Style.hx",795,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(796)
	if ((this->hasDynamicValue(HX_CSTRING("hasButtons")))){
		HX_STACK_LINE(797)
		return this->getDynamicValue(HX_CSTRING("hasButtons"));
	}
	HX_STACK_LINE(799)
	if (((this->_hasButtons == (int)-1))){
		HX_STACK_LINE(800)
		return true;
	}
	HX_STACK_LINE(802)
	return (this->_hasButtons == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_hasButtons,return )

bool Style_obj::set_hasButtons( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_hasButtons",0x419ad520,"haxe.ui.toolkit.style.Style.set_hasButtons","haxe/ui/toolkit/style/Style.hx",805,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(806)
	if ((value)){
		HX_STACK_LINE(806)
		this->_hasButtons = (int)1;
	}
	else{
		HX_STACK_LINE(806)
		this->_hasButtons = (int)0;
	}
	HX_STACK_LINE(807)
	this->apply();
	HX_STACK_LINE(808)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_hasButtons,return )

::String Style_obj::get_gradientType( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_gradientType",0xbefc76af,"haxe.ui.toolkit.style.Style.get_gradientType","haxe/ui/toolkit/style/Style.hx",811,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(812)
	if ((this->hasDynamicValue(HX_CSTRING("gradientType")))){
		HX_STACK_LINE(813)
		return this->getDynamicValue(HX_CSTRING("gradientType"));
	}
	HX_STACK_LINE(815)
	return this->_gradientType;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_gradientType,return )

::String Style_obj::set_gradientType( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_gradientType",0x153e6423,"haxe.ui.toolkit.style.Style.set_gradientType","haxe/ui/toolkit/style/Style.hx",818,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(819)
	if (((value != this->_gradientType))){
		HX_STACK_LINE(820)
		this->_gradientType = value;
		HX_STACK_LINE(821)
		this->apply();
	}
	HX_STACK_LINE(823)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_gradientType,return )

::String Style_obj::get_selectionMethod( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_selectionMethod",0xec1f3b88,"haxe.ui.toolkit.style.Style.get_selectionMethod","haxe/ui/toolkit/style/Style.hx",826,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(827)
	if ((this->hasDynamicValue(HX_CSTRING("selectionMethod")))){
		HX_STACK_LINE(828)
		return this->getDynamicValue(HX_CSTRING("selectionMethod"));
	}
	HX_STACK_LINE(830)
	return this->_selectionMethod;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_selectionMethod,return )

::String Style_obj::set_selectionMethod( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_selectionMethod",0x28bc2e94,"haxe.ui.toolkit.style.Style.set_selectionMethod","haxe/ui/toolkit/style/Style.hx",833,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(834)
	if (((value != this->_selectionMethod))){
		HX_STACK_LINE(835)
		this->_selectionMethod = value;
		HX_STACK_LINE(836)
		this->apply();
	}
	HX_STACK_LINE(838)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_selectionMethod,return )

bool Style_obj::get_autoHideScrolls( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_autoHideScrolls",0x096a5b30,"haxe.ui.toolkit.style.Style.get_autoHideScrolls","haxe/ui/toolkit/style/Style.hx",841,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(842)
	if ((this->hasDynamicValue(HX_CSTRING("autoHideScrolls")))){
		HX_STACK_LINE(843)
		return this->getDynamicValue(HX_CSTRING("autoHideScrolls"));
	}
	HX_STACK_LINE(845)
	if (((this->_autoHideScrolls == (int)-1))){
		HX_STACK_LINE(846)
		return false;
	}
	HX_STACK_LINE(848)
	return (this->_autoHideScrolls == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_autoHideScrolls,return )

bool Style_obj::set_autoHideScrolls( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_autoHideScrolls",0x46074e3c,"haxe.ui.toolkit.style.Style.set_autoHideScrolls","haxe/ui/toolkit/style/Style.hx",851,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(852)
	if ((value)){
		HX_STACK_LINE(852)
		this->_autoHideScrolls = (int)1;
	}
	else{
		HX_STACK_LINE(852)
		this->_autoHideScrolls = (int)0;
	}
	HX_STACK_LINE(853)
	this->apply();
	HX_STACK_LINE(854)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_autoHideScrolls,return )

bool Style_obj::get_inlineScrolls( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","get_inlineScrolls",0x5cba40e8,"haxe.ui.toolkit.style.Style.get_inlineScrolls","haxe/ui/toolkit/style/Style.hx",857,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(858)
	if ((this->hasDynamicValue(HX_CSTRING("inlineScrolls")))){
		HX_STACK_LINE(859)
		return this->getDynamicValue(HX_CSTRING("inlineScrolls"));
	}
	HX_STACK_LINE(861)
	if (((this->_inlineScrolls == (int)-1))){
		HX_STACK_LINE(862)
		return false;
	}
	HX_STACK_LINE(864)
	return (this->_inlineScrolls == (int)1);
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,get_inlineScrolls,return )

bool Style_obj::set_inlineScrolls( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","set_inlineScrolls",0x802818f4,"haxe.ui.toolkit.style.Style.set_inlineScrolls","haxe/ui/toolkit/style/Style.hx",867,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(868)
	if ((value)){
		HX_STACK_LINE(868)
		this->_inlineScrolls = (int)1;
	}
	else{
		HX_STACK_LINE(868)
		this->_inlineScrolls = (int)0;
	}
	HX_STACK_LINE(869)
	this->apply();
	HX_STACK_LINE(870)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,set_inlineScrolls,return )

Void Style_obj::apply( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.Style","apply",0xbdfe1692,"haxe.ui.toolkit.style.Style.apply","haxe/ui/toolkit/style/Style.hx",874,0x9c43a2ce)
		HX_STACK_THIS(this)
		HX_STACK_LINE(874)
		if (((bool((this->_target != null())) && bool((this->_autoApply == true))))){
			HX_STACK_LINE(875)
			if ((::Std_obj::is(this->_target,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >()))){
				HX_STACK_LINE(876)
				(hx::TCast< haxe::ui::toolkit::core::StyleableDisplayObject >::cast(this->_target))->applyStyle();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,apply,(void))

Void Style_obj::addDynamicValue( ::String property,::String script){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.Style","addDynamicValue",0xa8fb1557,"haxe.ui.toolkit.style.Style.addDynamicValue","haxe/ui/toolkit/style/Style.hx",881,0x9c43a2ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(property,"property")
		HX_STACK_ARG(script,"script")
		HX_STACK_LINE(882)
		if (((this->_dynamicValues == null()))){
			HX_STACK_LINE(883)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(883)
			this->_dynamicValues = _g;
		}
		HX_STACK_LINE(885)
		this->_dynamicValues->set(property,script);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Style_obj,addDynamicValue,(void))

bool Style_obj::hasDynamicValue( ::String property){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","hasDynamicValue",0x8a1bd410,"haxe.ui.toolkit.style.Style.hasDynamicValue","haxe/ui/toolkit/style/Style.hx",888,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(property,"property")
	HX_STACK_LINE(889)
	if (((this->_dynamicValues == null()))){
		HX_STACK_LINE(890)
		return false;
	}
	HX_STACK_LINE(892)
	::String _g = this->_dynamicValues->get(property);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(892)
	return (_g != null());
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,hasDynamicValue,return )

Dynamic Style_obj::getDynamicValue( ::String property){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","getDynamicValue",0x4595ff4c,"haxe.ui.toolkit.style.Style.getDynamicValue","haxe/ui/toolkit/style/Style.hx",895,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_ARG(property,"property")
	HX_STACK_LINE(896)
	::String script = this->_dynamicValues->get(property);		HX_STACK_VAR(script,"script");
	HX_STACK_LINE(897)
	Dynamic retVal = ::haxe::ui::toolkit::hscript::ScriptManager_obj::get_instance()->executeScript(script);		HX_STACK_VAR(retVal,"retVal");
	HX_STACK_LINE(898)
	return retVal;
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,getDynamicValue,return )

Void Style_obj::merge( ::haxe::ui::toolkit::style::Style with){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.Style","merge",0x9f8933dc,"haxe.ui.toolkit.style.Style.merge","haxe/ui/toolkit/style/Style.hx",901,0x9c43a2ce)
		HX_STACK_THIS(this)
		HX_STACK_ARG(with,"with")
		HX_STACK_LINE(902)
		if (((with == null()))){
			HX_STACK_LINE(903)
			return null();
		}
		HX_STACK_LINE(905)
		if (((with->_width != (int)-1))){
			HX_STACK_LINE(905)
			this->_width = with->_width;
		}
		HX_STACK_LINE(906)
		if (((with->_height != (int)-1))){
			HX_STACK_LINE(906)
			this->_height = with->_height;
		}
		HX_STACK_LINE(907)
		if (((with->_percentWidth != (int)-1))){
			HX_STACK_LINE(907)
			this->_percentWidth = with->_percentWidth;
		}
		HX_STACK_LINE(908)
		if (((with->_percentHeight != (int)-1))){
			HX_STACK_LINE(908)
			this->_percentHeight = with->_percentHeight;
		}
		HX_STACK_LINE(909)
		if (((with->_autoSize != (int)-1))){
			HX_STACK_LINE(909)
			this->_autoSize = with->_autoSize;
		}
		HX_STACK_LINE(910)
		if (((with->_backgroundImage != null()))){
			HX_STACK_LINE(911)
			this->_backgroundImage = with->_backgroundImage;
			HX_STACK_LINE(912)
			this->_backgroundImageScale9 = null();
			HX_STACK_LINE(913)
			this->_backgroundImageRect = null();
		}
		HX_STACK_LINE(915)
		if (((with->_backgroundImageScale9 != null()))){
			HX_STACK_LINE(915)
			this->_backgroundImageScale9 = with->_backgroundImageScale9;
		}
		HX_STACK_LINE(916)
		if (((with->_backgroundImageRect != null()))){
			HX_STACK_LINE(916)
			this->_backgroundImageRect = with->_backgroundImageRect;
		}
		HX_STACK_LINE(917)
		if (((with->_backgroundColor == (int)-2))){
			HX_STACK_LINE(918)
			this->_backgroundColor = (int)-1;
			HX_STACK_LINE(919)
			this->_backgroundColorGradientEnd = (int)-1;
		}
		else{
			HX_STACK_LINE(920)
			if (((with->_backgroundColor != (int)-1))){
				HX_STACK_LINE(921)
				this->_backgroundColor = with->_backgroundColor;
				HX_STACK_LINE(922)
				this->_backgroundColorGradientEnd = (int)-1;
			}
		}
		HX_STACK_LINE(924)
		if (((with->_backgroundColorGradientEnd != (int)-1))){
			HX_STACK_LINE(924)
			this->_backgroundColorGradientEnd = with->_backgroundColorGradientEnd;
		}
		HX_STACK_LINE(925)
		if (((with->_borderColor != (int)-1))){
			HX_STACK_LINE(925)
			this->_borderColor = with->_borderColor;
		}
		HX_STACK_LINE(926)
		if (((with->_borderSize != (int)-1))){
			HX_STACK_LINE(926)
			this->_borderSize = with->_borderSize;
		}
		HX_STACK_LINE(927)
		if (((with->_color != (int)-1))){
			HX_STACK_LINE(927)
			this->_color = with->_color;
		}
		HX_STACK_LINE(928)
		if (((with->_paddingLeft != (int)-1))){
			HX_STACK_LINE(928)
			this->_paddingLeft = with->_paddingLeft;
		}
		HX_STACK_LINE(929)
		if (((with->_paddingRight != (int)-1))){
			HX_STACK_LINE(929)
			this->_paddingRight = with->_paddingRight;
		}
		HX_STACK_LINE(930)
		if (((with->_paddingTop != (int)-1))){
			HX_STACK_LINE(930)
			this->_paddingTop = with->_paddingTop;
		}
		HX_STACK_LINE(931)
		if (((with->_paddingBottom != (int)-1))){
			HX_STACK_LINE(931)
			this->_paddingBottom = with->_paddingBottom;
		}
		HX_STACK_LINE(932)
		if (((with->_spacingX != (int)-1))){
			HX_STACK_LINE(932)
			this->_spacingX = with->_spacingX;
		}
		HX_STACK_LINE(933)
		if (((with->_spacingY != (int)-1))){
			HX_STACK_LINE(933)
			this->_spacingY = with->_spacingY;
		}
		HX_STACK_LINE(934)
		if (((with->_horizontalAlignment != null()))){
			HX_STACK_LINE(934)
			this->_horizontalAlignment = with->_horizontalAlignment;
		}
		HX_STACK_LINE(935)
		if (((with->_verticalAlignment != null()))){
			HX_STACK_LINE(935)
			this->_verticalAlignment = with->_verticalAlignment;
		}
		HX_STACK_LINE(936)
		if (((with->_cornerRadiusTopLeft != (int)-1))){
			HX_STACK_LINE(936)
			this->_cornerRadiusTopLeft = with->_cornerRadiusTopLeft;
		}
		HX_STACK_LINE(937)
		if (((with->_cornerRadiusTopRight != (int)-1))){
			HX_STACK_LINE(937)
			this->_cornerRadiusTopRight = with->_cornerRadiusTopRight;
		}
		HX_STACK_LINE(938)
		if (((with->_cornerRadiusBottomLeft != (int)-1))){
			HX_STACK_LINE(938)
			this->_cornerRadiusBottomLeft = with->_cornerRadiusBottomLeft;
		}
		HX_STACK_LINE(939)
		if (((with->_cornerRadiusBottomRight != (int)-1))){
			HX_STACK_LINE(939)
			this->_cornerRadiusBottomRight = with->_cornerRadiusBottomRight;
		}
		HX_STACK_LINE(940)
		if (((with->_filterSet == true))){
			HX_STACK_LINE(940)
			this->_filter = with->_filter;
		}
		HX_STACK_LINE(941)
		if (((with->_alpha != (int)-1))){
			HX_STACK_LINE(941)
			this->_alpha = with->_alpha;
		}
		HX_STACK_LINE(942)
		if (((with->_fontName != null()))){
			HX_STACK_LINE(942)
			this->_fontName = with->_fontName;
		}
		HX_STACK_LINE(943)
		if (((with->_fontSize != (int)-1))){
			HX_STACK_LINE(943)
			this->_fontSize = with->_fontSize;
		}
		HX_STACK_LINE(944)
		if (((with->_fontScale != (int)-1))){
			HX_STACK_LINE(944)
			this->_fontScale = with->_fontScale;
		}
		HX_STACK_LINE(945)
		if (((with->_fontEmbedded != (int)-1))){
			HX_STACK_LINE(945)
			this->_fontEmbedded = with->_fontEmbedded;
		}
		HX_STACK_LINE(946)
		if (((with->_fontBold != (int)-1))){
			HX_STACK_LINE(946)
			this->_fontBold = with->_fontBold;
		}
		HX_STACK_LINE(947)
		if (((with->_fontItalic != (int)-1))){
			HX_STACK_LINE(947)
			this->_fontItalic = with->_fontItalic;
		}
		HX_STACK_LINE(948)
		if (((with->_fontUnderline != (int)-1))){
			HX_STACK_LINE(948)
			this->_fontUnderline = with->_fontUnderline;
		}
		HX_STACK_LINE(949)
		if (((with->_textAlign != null()))){
			HX_STACK_LINE(949)
			this->_textAlign = with->_textAlign;
		}
		HX_STACK_LINE(950)
		if (((with->_iconPosition != null()))){
			HX_STACK_LINE(950)
			this->_iconPosition = with->_iconPosition;
		}
		HX_STACK_LINE(951)
		if (((with->_icon != null()))){
			HX_STACK_LINE(951)
			this->_icon = with->_icon;
		}
		HX_STACK_LINE(952)
		if (((with->_hasButtons != (int)-1))){
			HX_STACK_LINE(952)
			this->_hasButtons = with->_hasButtons;
		}
		HX_STACK_LINE(953)
		if (((with->_gradientType != null()))){
			HX_STACK_LINE(953)
			this->_gradientType = with->_gradientType;
		}
		HX_STACK_LINE(954)
		if (((with->_selectionMethod != null()))){
			HX_STACK_LINE(954)
			this->_selectionMethod = with->_selectionMethod;
		}
		HX_STACK_LINE(955)
		if (((with->_autoHideScrolls != (int)-1))){
			HX_STACK_LINE(955)
			this->_autoHideScrolls = with->_autoHideScrolls;
		}
		HX_STACK_LINE(956)
		if (((with->_inlineScrolls != (int)-1))){
			HX_STACK_LINE(956)
			this->_inlineScrolls = with->_inlineScrolls;
		}
		HX_STACK_LINE(957)
		if (((with->_dynamicValues != null()))){
			HX_STACK_LINE(958)
			if (((this->_dynamicValues == null()))){
				HX_STACK_LINE(959)
				::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(959)
				this->_dynamicValues = _g;
			}
			HX_STACK_LINE(961)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(with->_dynamicValues->keys());  __it->hasNext(); ){
				::String property = __it->next();
				{
					HX_STACK_LINE(962)
					::String script = with->_dynamicValues->get(property);		HX_STACK_VAR(script,"script");
					HX_STACK_LINE(963)
					this->_dynamicValues->set(property,script);
				}
;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Style_obj,merge,(void))

::String Style_obj::toString( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","toString",0x93a88e08,"haxe.ui.toolkit.style.Style.toString","haxe/ui/toolkit/style/Style.hx",968,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(969)
	::String s = HX_CSTRING("");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(970)
	if (((  ((!(((this->_width != (int)-1))))) ? bool(this->hasDynamicValue(HX_CSTRING("width"))) : bool(true) ))){
		HX_STACK_LINE(970)
		::String _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(970)
		if (((this->_width != (int)-1))){
			HX_STACK_LINE(970)
			_g = ::Std_obj::string(this->_width);
		}
		else{
			HX_STACK_LINE(970)
			_g = this->_dynamicValues->get(HX_CSTRING("width"));
		}
		HX_STACK_LINE(970)
		::String _g1 = (HX_CSTRING("width: ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(970)
		::String _g2 = (_g1 + HX_CSTRING(";\n"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(970)
		hx::AddEq(s,_g2);
	}
	HX_STACK_LINE(971)
	if (((  ((!(((this->_height != (int)-1))))) ? bool(this->hasDynamicValue(HX_CSTRING("height"))) : bool(true) ))){
		HX_STACK_LINE(971)
		::String _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(971)
		if (((this->_height != (int)-1))){
			HX_STACK_LINE(971)
			_g3 = ::Std_obj::string(this->_height);
		}
		else{
			HX_STACK_LINE(971)
			_g3 = this->_dynamicValues->get(HX_CSTRING("height"));
		}
		HX_STACK_LINE(971)
		::String _g4 = (HX_CSTRING("height: ") + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(971)
		::String _g5 = (_g4 + HX_CSTRING(";\n"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(971)
		hx::AddEq(s,_g5);
	}
	HX_STACK_LINE(972)
	if (((  ((!(((this->_percentWidth != (int)-1))))) ? bool(this->hasDynamicValue(HX_CSTRING("percentWidth"))) : bool(true) ))){
		HX_STACK_LINE(972)
		::String _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(972)
		if (((this->_percentWidth != (int)-1))){
			HX_STACK_LINE(972)
			_g6 = ::Std_obj::string(this->_percentWidth);
		}
		else{
			HX_STACK_LINE(972)
			_g6 = this->_dynamicValues->get(HX_CSTRING("percentWidth"));
		}
		HX_STACK_LINE(972)
		::String _g7 = (HX_CSTRING("width: ") + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(972)
		::String _g8 = (_g7 + HX_CSTRING("%;\n"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(972)
		hx::AddEq(s,_g8);
	}
	HX_STACK_LINE(973)
	if (((  ((!(((this->_percentHeight != (int)-1))))) ? bool(this->hasDynamicValue(HX_CSTRING("percentHeight"))) : bool(true) ))){
		HX_STACK_LINE(973)
		::String _g9;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(973)
		if (((this->_percentHeight != (int)-1))){
			HX_STACK_LINE(973)
			_g9 = ::Std_obj::string(this->_percentHeight);
		}
		else{
			HX_STACK_LINE(973)
			_g9 = this->_dynamicValues->get(HX_CSTRING("percentHeight"));
		}
		HX_STACK_LINE(973)
		::String _g10 = (HX_CSTRING("height: ") + _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(973)
		::String _g11 = (_g10 + HX_CSTRING("%;\n"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(973)
		hx::AddEq(s,_g11);
	}
	HX_STACK_LINE(974)
	if (((  ((!(((this->_backgroundImage != null()))))) ? bool(this->hasDynamicValue(HX_CSTRING("backgroundImage"))) : bool(true) ))){
		HX_STACK_LINE(974)
		::String _g12;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(974)
		if (((this->_backgroundImage != null()))){
			HX_STACK_LINE(974)
			_g12 = ::Std_obj::string(this->_backgroundImage);
		}
		else{
			HX_STACK_LINE(974)
			_g12 = this->_dynamicValues->get(HX_CSTRING("backgroundImage"));
		}
		HX_STACK_LINE(974)
		::String _g13 = (HX_CSTRING("backgroundImage: \"") + _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(974)
		::String _g14 = (_g13 + HX_CSTRING("\";\n"));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(974)
		hx::AddEq(s,_g14);
	}
	HX_STACK_LINE(975)
	if (((  ((!(((this->_backgroundColor != (int)-1))))) ? bool(this->hasDynamicValue(HX_CSTRING("backgroundColor"))) : bool(true) ))){
		HX_STACK_LINE(975)
		::String _g15;		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(975)
		if (((this->_backgroundColor != (int)-1))){
			HX_STACK_LINE(975)
			_g15 = ::StringTools_obj::hex(this->_backgroundColor,(int)6);
		}
		else{
			HX_STACK_LINE(975)
			_g15 = this->_dynamicValues->get(HX_CSTRING("backgroundColor"));
		}
		HX_STACK_LINE(975)
		::String _g16 = (HX_CSTRING("backgroundColor: #") + _g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(975)
		::String _g17 = (_g16 + HX_CSTRING(";\n"));		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(975)
		hx::AddEq(s,_g17);
	}
	HX_STACK_LINE(976)
	if (((  ((!(((this->_backgroundColorGradientEnd != (int)-1))))) ? bool(this->hasDynamicValue(HX_CSTRING("backgroundColorGradientEnd"))) : bool(true) ))){
		HX_STACK_LINE(976)
		::String _g18;		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(976)
		if (((this->_backgroundColorGradientEnd != (int)-1))){
			HX_STACK_LINE(976)
			_g18 = ::StringTools_obj::hex(this->_backgroundColorGradientEnd,(int)6);
		}
		else{
			HX_STACK_LINE(976)
			_g18 = this->_dynamicValues->get(HX_CSTRING("backgroundColorGradientEnd"));
		}
		HX_STACK_LINE(976)
		::String _g19 = (HX_CSTRING("backgroundColorGradientEnd: #") + _g18);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(976)
		::String _g20 = (_g19 + HX_CSTRING(";\n"));		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(976)
		hx::AddEq(s,_g20);
	}
	HX_STACK_LINE(977)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,toString,return )

Dynamic Style_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","self",0xd3516ae8,"haxe.ui.toolkit.style.Style.self","haxe/ui/toolkit/style/Style.hx",983,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(983)
	return ::haxe::ui::toolkit::style::Style_obj::__new(null());
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,self,return )

Dynamic Style_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.Style","clone",0xe225a481,"haxe.ui.toolkit.style.Style.clone","haxe/ui/toolkit/style/Style.hx",984,0x9c43a2ce)
	HX_STACK_THIS(this)
	HX_STACK_LINE(985)
	::haxe::ui::toolkit::style::Style c = this->self();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(986)
	c->merge(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(987)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC0(Style_obj,clone,return )

int Style_obj::NONE;


Style_obj::Style_obj()
{
}

void Style_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Style);
	HX_MARK_MEMBER_NAME(_dynamicValues,"_dynamicValues");
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_autoApply,"_autoApply");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_MARK_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_MARK_MEMBER_NAME(_autoSize,"_autoSize");
	HX_MARK_MEMBER_NAME(_backgroundImage,"_backgroundImage");
	HX_MARK_MEMBER_NAME(_backgroundImageScale9,"_backgroundImageScale9");
	HX_MARK_MEMBER_NAME(_backgroundImageRect,"_backgroundImageRect");
	HX_MARK_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_MARK_MEMBER_NAME(_backgroundColorGradientEnd,"_backgroundColorGradientEnd");
	HX_MARK_MEMBER_NAME(_borderColor,"_borderColor");
	HX_MARK_MEMBER_NAME(_borderSize,"_borderSize");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_MARK_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_MARK_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_MARK_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_MARK_MEMBER_NAME(_spacingX,"_spacingX");
	HX_MARK_MEMBER_NAME(_spacingY,"_spacingY");
	HX_MARK_MEMBER_NAME(_verticalAlignment,"_verticalAlignment");
	HX_MARK_MEMBER_NAME(_horizontalAlignment,"_horizontalAlignment");
	HX_MARK_MEMBER_NAME(_cornerRadiusTopLeft,"_cornerRadiusTopLeft");
	HX_MARK_MEMBER_NAME(_cornerRadiusTopRight,"_cornerRadiusTopRight");
	HX_MARK_MEMBER_NAME(_cornerRadiusBottomLeft,"_cornerRadiusBottomLeft");
	HX_MARK_MEMBER_NAME(_cornerRadiusBottomRight,"_cornerRadiusBottomRight");
	HX_MARK_MEMBER_NAME(_filter,"_filter");
	HX_MARK_MEMBER_NAME(_filterSet,"_filterSet");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_fontName,"_fontName");
	HX_MARK_MEMBER_NAME(_fontSize,"_fontSize");
	HX_MARK_MEMBER_NAME(_fontScale,"_fontScale");
	HX_MARK_MEMBER_NAME(_fontEmbedded,"_fontEmbedded");
	HX_MARK_MEMBER_NAME(_fontBold,"_fontBold");
	HX_MARK_MEMBER_NAME(_fontItalic,"_fontItalic");
	HX_MARK_MEMBER_NAME(_fontUnderline,"_fontUnderline");
	HX_MARK_MEMBER_NAME(_textAlign,"_textAlign");
	HX_MARK_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	HX_MARK_MEMBER_NAME(_hasButtons,"_hasButtons");
	HX_MARK_MEMBER_NAME(_gradientType,"_gradientType");
	HX_MARK_MEMBER_NAME(_selectionMethod,"_selectionMethod");
	HX_MARK_MEMBER_NAME(_autoHideScrolls,"_autoHideScrolls");
	HX_MARK_MEMBER_NAME(_inlineScrolls,"_inlineScrolls");
	HX_MARK_MEMBER_NAME(autoSizeSet,"autoSizeSet");
	HX_MARK_END_CLASS();
}

void Style_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dynamicValues,"_dynamicValues");
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_autoApply,"_autoApply");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_percentWidth,"_percentWidth");
	HX_VISIT_MEMBER_NAME(_percentHeight,"_percentHeight");
	HX_VISIT_MEMBER_NAME(_autoSize,"_autoSize");
	HX_VISIT_MEMBER_NAME(_backgroundImage,"_backgroundImage");
	HX_VISIT_MEMBER_NAME(_backgroundImageScale9,"_backgroundImageScale9");
	HX_VISIT_MEMBER_NAME(_backgroundImageRect,"_backgroundImageRect");
	HX_VISIT_MEMBER_NAME(_backgroundColor,"_backgroundColor");
	HX_VISIT_MEMBER_NAME(_backgroundColorGradientEnd,"_backgroundColorGradientEnd");
	HX_VISIT_MEMBER_NAME(_borderColor,"_borderColor");
	HX_VISIT_MEMBER_NAME(_borderSize,"_borderSize");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_VISIT_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_VISIT_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_VISIT_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_VISIT_MEMBER_NAME(_spacingX,"_spacingX");
	HX_VISIT_MEMBER_NAME(_spacingY,"_spacingY");
	HX_VISIT_MEMBER_NAME(_verticalAlignment,"_verticalAlignment");
	HX_VISIT_MEMBER_NAME(_horizontalAlignment,"_horizontalAlignment");
	HX_VISIT_MEMBER_NAME(_cornerRadiusTopLeft,"_cornerRadiusTopLeft");
	HX_VISIT_MEMBER_NAME(_cornerRadiusTopRight,"_cornerRadiusTopRight");
	HX_VISIT_MEMBER_NAME(_cornerRadiusBottomLeft,"_cornerRadiusBottomLeft");
	HX_VISIT_MEMBER_NAME(_cornerRadiusBottomRight,"_cornerRadiusBottomRight");
	HX_VISIT_MEMBER_NAME(_filter,"_filter");
	HX_VISIT_MEMBER_NAME(_filterSet,"_filterSet");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_fontName,"_fontName");
	HX_VISIT_MEMBER_NAME(_fontSize,"_fontSize");
	HX_VISIT_MEMBER_NAME(_fontScale,"_fontScale");
	HX_VISIT_MEMBER_NAME(_fontEmbedded,"_fontEmbedded");
	HX_VISIT_MEMBER_NAME(_fontBold,"_fontBold");
	HX_VISIT_MEMBER_NAME(_fontItalic,"_fontItalic");
	HX_VISIT_MEMBER_NAME(_fontUnderline,"_fontUnderline");
	HX_VISIT_MEMBER_NAME(_textAlign,"_textAlign");
	HX_VISIT_MEMBER_NAME(_iconPosition,"_iconPosition");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	HX_VISIT_MEMBER_NAME(_hasButtons,"_hasButtons");
	HX_VISIT_MEMBER_NAME(_gradientType,"_gradientType");
	HX_VISIT_MEMBER_NAME(_selectionMethod,"_selectionMethod");
	HX_VISIT_MEMBER_NAME(_autoHideScrolls,"_autoHideScrolls");
	HX_VISIT_MEMBER_NAME(_inlineScrolls,"_inlineScrolls");
	HX_VISIT_MEMBER_NAME(autoSizeSet,"autoSizeSet");
}

Dynamic Style_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return get_icon(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		if (HX_FIELD_EQ(inName,"width") ) { return get_width(); }
		if (HX_FIELD_EQ(inName,"color") ) { return get_color(); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return get_alpha(); }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"height") ) { return get_height(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return get_filter(); }
		if (HX_FIELD_EQ(inName,"target") ) { return get_target(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		if (HX_FIELD_EQ(inName,"_filter") ) { return _filter; }
		if (HX_FIELD_EQ(inName,"padding") ) { return get_padding(); }
		if (HX_FIELD_EQ(inName,"spacing") ) { return get_spacing(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"spacingX") ) { return get_spacingX(); }
		if (HX_FIELD_EQ(inName,"spacingY") ) { return get_spacingY(); }
		if (HX_FIELD_EQ(inName,"fontName") ) { return get_fontName(); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { return get_fontSize(); }
		if (HX_FIELD_EQ(inName,"fontBold") ) { return get_fontBold(); }
		if (HX_FIELD_EQ(inName,"get_icon") ) { return get_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"set_icon") ) { return set_icon_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSize") ) { return _autoSize; }
		if (HX_FIELD_EQ(inName,"_spacingX") ) { return _spacingX; }
		if (HX_FIELD_EQ(inName,"_spacingY") ) { return _spacingY; }
		if (HX_FIELD_EQ(inName,"_fontName") ) { return _fontName; }
		if (HX_FIELD_EQ(inName,"_fontSize") ) { return _fontSize; }
		if (HX_FIELD_EQ(inName,"_fontBold") ) { return _fontBold; }
		if (HX_FIELD_EQ(inName,"fontScale") ) { return get_fontScale(); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return get_textAlign(); }
		if (HX_FIELD_EQ(inName,"autoApply") ) { return get_autoApply(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_autoApply") ) { return _autoApply; }
		if (HX_FIELD_EQ(inName,"_filterSet") ) { return _filterSet; }
		if (HX_FIELD_EQ(inName,"_fontScale") ) { return _fontScale; }
		if (HX_FIELD_EQ(inName,"_textAlign") ) { return _textAlign; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return get_borderSize(); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return get_paddingTop(); }
		if (HX_FIELD_EQ(inName,"fontItalic") ) { return get_fontItalic(); }
		if (HX_FIELD_EQ(inName,"hasButtons") ) { return get_hasButtons(); }
		if (HX_FIELD_EQ(inName,"get_target") ) { return get_target_dyn(); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return set_target_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filter") ) { return get_filter_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filter") ) { return set_filter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_borderSize") ) { return _borderSize; }
		if (HX_FIELD_EQ(inName,"_paddingTop") ) { return _paddingTop; }
		if (HX_FIELD_EQ(inName,"_fontItalic") ) { return _fontItalic; }
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { return _hasButtons; }
		if (HX_FIELD_EQ(inName,"autoSizeSet") ) { return inCallProp ? get_autoSizeSet() : autoSizeSet; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return get_borderColor(); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return get_paddingLeft(); }
		if (HX_FIELD_EQ(inName,"get_padding") ) { return get_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"get_spacing") ) { return get_spacing_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacing") ) { return set_spacing_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_borderColor") ) { return _borderColor; }
		if (HX_FIELD_EQ(inName,"_paddingLeft") ) { return _paddingLeft; }
		if (HX_FIELD_EQ(inName,"percentWidth") ) { return get_percentWidth(); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return get_paddingRight(); }
		if (HX_FIELD_EQ(inName,"cornerRadius") ) { return get_cornerRadius(); }
		if (HX_FIELD_EQ(inName,"fontEmbedded") ) { return get_fontEmbedded(); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return get_iconPosition(); }
		if (HX_FIELD_EQ(inName,"gradientType") ) { return get_gradientType(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_spacingX") ) { return get_spacingX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacingX") ) { return set_spacingX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_spacingY") ) { return get_spacingY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacingY") ) { return set_spacingY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontName") ) { return get_fontName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontName") ) { return set_fontName_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontSize") ) { return get_fontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontSize") ) { return set_fontSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontBold") ) { return get_fontBold_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontBold") ) { return set_fontBold_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { return _percentWidth; }
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { return _paddingRight; }
		if (HX_FIELD_EQ(inName,"_fontEmbedded") ) { return _fontEmbedded; }
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { return _iconPosition; }
		if (HX_FIELD_EQ(inName,"_gradientType") ) { return _gradientType; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { return get_percentHeight(); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return get_paddingBottom(); }
		if (HX_FIELD_EQ(inName,"fontUnderline") ) { return get_fontUnderline(); }
		if (HX_FIELD_EQ(inName,"inlineScrolls") ) { return get_inlineScrolls(); }
		if (HX_FIELD_EQ(inName,"get_autoApply") ) { return get_autoApply_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoApply") ) { return set_autoApply_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontScale") ) { return get_fontScale_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontScale") ) { return set_fontScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return get_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return set_textAlign_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dynamicValues") ) { return _dynamicValues; }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { return _percentHeight; }
		if (HX_FIELD_EQ(inName,"_paddingBottom") ) { return _paddingBottom; }
		if (HX_FIELD_EQ(inName,"_fontUnderline") ) { return _fontUnderline; }
		if (HX_FIELD_EQ(inName,"_inlineScrolls") ) { return _inlineScrolls; }
		if (HX_FIELD_EQ(inName,"get_borderSize") ) { return get_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderSize") ) { return set_borderSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return get_paddingTop_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paddingTop") ) { return set_paddingTop_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontItalic") ) { return get_fontItalic_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontItalic") ) { return set_fontItalic_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasButtons") ) { return get_hasButtons_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hasButtons") ) { return set_hasButtons_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { return get_backgroundImage(); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"selectionMethod") ) { return get_selectionMethod(); }
		if (HX_FIELD_EQ(inName,"autoHideScrolls") ) { return get_autoHideScrolls(); }
		if (HX_FIELD_EQ(inName,"get_autoSizeSet") ) { return get_autoSizeSet_dyn(); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return get_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return get_paddingLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paddingLeft") ) { return set_paddingLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"addDynamicValue") ) { return addDynamicValue_dyn(); }
		if (HX_FIELD_EQ(inName,"hasDynamicValue") ) { return hasDynamicValue_dyn(); }
		if (HX_FIELD_EQ(inName,"getDynamicValue") ) { return getDynamicValue_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_backgroundImage") ) { return _backgroundImage; }
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { return _backgroundColor; }
		if (HX_FIELD_EQ(inName,"_selectionMethod") ) { return _selectionMethod; }
		if (HX_FIELD_EQ(inName,"_autoHideScrolls") ) { return _autoHideScrolls; }
		if (HX_FIELD_EQ(inName,"get_percentWidth") ) { return get_percentWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percentWidth") ) { return set_percentWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return get_paddingRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return set_paddingRight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cornerRadius") ) { return get_cornerRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadius") ) { return set_cornerRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontEmbedded") ) { return get_fontEmbedded_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontEmbedded") ) { return set_fontEmbedded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_iconPosition") ) { return get_iconPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"set_iconPosition") ) { return set_iconPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"get_gradientType") ) { return get_gradientType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_gradientType") ) { return set_gradientType_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"verticalAlignment") ) { return get_verticalAlignment(); }
		if (HX_FIELD_EQ(inName,"get_percentHeight") ) { return get_percentHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_percentHeight") ) { return set_percentHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return get_paddingBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return set_paddingBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"get_fontUnderline") ) { return get_fontUnderline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_fontUnderline") ) { return set_fontUnderline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_inlineScrolls") ) { return get_inlineScrolls_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inlineScrolls") ) { return set_inlineScrolls_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_verticalAlignment") ) { return _verticalAlignment; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backgroundImageRect") ) { return get_backgroundImageRect(); }
		if (HX_FIELD_EQ(inName,"horizontalAlignment") ) { return get_horizontalAlignment(); }
		if (HX_FIELD_EQ(inName,"cornerRadiusTopLeft") ) { return get_cornerRadiusTopLeft(); }
		if (HX_FIELD_EQ(inName,"get_backgroundImage") ) { return get_backgroundImage_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundImage") ) { return set_backgroundImage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectionMethod") ) { return get_selectionMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectionMethod") ) { return set_selectionMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoHideScrolls") ) { return get_autoHideScrolls_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoHideScrolls") ) { return set_autoHideScrolls_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_backgroundImageRect") ) { return _backgroundImageRect; }
		if (HX_FIELD_EQ(inName,"_horizontalAlignment") ) { return _horizontalAlignment; }
		if (HX_FIELD_EQ(inName,"_cornerRadiusTopLeft") ) { return _cornerRadiusTopLeft; }
		if (HX_FIELD_EQ(inName,"cornerRadiusTopRight") ) { return get_cornerRadiusTopRight(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cornerRadiusTopRight") ) { return _cornerRadiusTopRight; }
		if (HX_FIELD_EQ(inName,"backgroundImageScale9") ) { return get_backgroundImageScale9(); }
		if (HX_FIELD_EQ(inName,"get_verticalAlignment") ) { return get_verticalAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_verticalAlignment") ) { return set_verticalAlignment_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_backgroundImageScale9") ) { return _backgroundImageScale9; }
		if (HX_FIELD_EQ(inName,"cornerRadiusBottomLeft") ) { return get_cornerRadiusBottomLeft(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_cornerRadiusBottomLeft") ) { return _cornerRadiusBottomLeft; }
		if (HX_FIELD_EQ(inName,"cornerRadiusBottomRight") ) { return get_cornerRadiusBottomRight(); }
		if (HX_FIELD_EQ(inName,"get_backgroundImageRect") ) { return get_backgroundImageRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundImageRect") ) { return set_backgroundImageRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_horizontalAlignment") ) { return get_horizontalAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"set_horizontalAlignment") ) { return set_horizontalAlignment_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cornerRadiusTopLeft") ) { return get_cornerRadiusTopLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadiusTopLeft") ) { return set_cornerRadiusTopLeft_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_cornerRadiusBottomRight") ) { return _cornerRadiusBottomRight; }
		if (HX_FIELD_EQ(inName,"get_cornerRadiusTopRight") ) { return get_cornerRadiusTopRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadiusTopRight") ) { return set_cornerRadiusTopRight_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_backgroundImageScale9") ) { return get_backgroundImageScale9_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundImageScale9") ) { return set_backgroundImageScale9_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backgroundColorGradientEnd") ) { return get_backgroundColorGradientEnd(); }
		if (HX_FIELD_EQ(inName,"get_cornerRadiusBottomLeft") ) { return get_cornerRadiusBottomLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadiusBottomLeft") ) { return set_cornerRadiusBottomLeft_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundColorGradientEnd") ) { return _backgroundColorGradientEnd; }
		if (HX_FIELD_EQ(inName,"get_cornerRadiusBottomRight") ) { return get_cornerRadiusBottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cornerRadiusBottomRight") ) { return set_cornerRadiusBottomRight_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_backgroundColorGradientEnd") ) { return get_backgroundColorGradientEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColorGradientEnd") ) { return set_backgroundColorGradientEnd_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Style_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"icon") ) { return set_icon(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { return set_color(inValue); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return set_alpha(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"filter") ) { return set_filter(inValue); }
		if (HX_FIELD_EQ(inName,"target") ) { return set_target(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filter") ) { _filter=inValue.Cast< ::openfl::filters::BitmapFilter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"padding") ) { return set_padding(inValue); }
		if (HX_FIELD_EQ(inName,"spacing") ) { return set_spacing(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"spacingX") ) { return set_spacingX(inValue); }
		if (HX_FIELD_EQ(inName,"spacingY") ) { return set_spacingY(inValue); }
		if (HX_FIELD_EQ(inName,"fontName") ) { return set_fontName(inValue); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { return set_fontSize(inValue); }
		if (HX_FIELD_EQ(inName,"fontBold") ) { return set_fontBold(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoSize") ) { _autoSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spacingX") ) { _spacingX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spacingY") ) { _spacingY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontName") ) { _fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontSize") ) { _fontSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontBold") ) { _fontBold=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontScale") ) { return set_fontScale(inValue); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return set_textAlign(inValue); }
		if (HX_FIELD_EQ(inName,"autoApply") ) { return set_autoApply(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_autoApply") ) { _autoApply=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_filterSet") ) { _filterSet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontScale") ) { _fontScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_textAlign") ) { _textAlign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderSize") ) { return set_borderSize(inValue); }
		if (HX_FIELD_EQ(inName,"paddingTop") ) { return set_paddingTop(inValue); }
		if (HX_FIELD_EQ(inName,"fontItalic") ) { return set_fontItalic(inValue); }
		if (HX_FIELD_EQ(inName,"hasButtons") ) { return set_hasButtons(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_borderSize") ) { _borderSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paddingTop") ) { _paddingTop=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontItalic") ) { _fontItalic=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hasButtons") ) { _hasButtons=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoSizeSet") ) { autoSizeSet=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"borderColor") ) { return set_borderColor(inValue); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { return set_paddingLeft(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_borderColor") ) { _borderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paddingLeft") ) { _paddingLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentWidth") ) { return set_percentWidth(inValue); }
		if (HX_FIELD_EQ(inName,"paddingRight") ) { return set_paddingRight(inValue); }
		if (HX_FIELD_EQ(inName,"cornerRadius") ) { return set_cornerRadius(inValue); }
		if (HX_FIELD_EQ(inName,"fontEmbedded") ) { return set_fontEmbedded(inValue); }
		if (HX_FIELD_EQ(inName,"iconPosition") ) { return set_iconPosition(inValue); }
		if (HX_FIELD_EQ(inName,"gradientType") ) { return set_gradientType(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_percentWidth") ) { _percentWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { _paddingRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontEmbedded") ) { _fontEmbedded=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_iconPosition") ) { _iconPosition=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gradientType") ) { _gradientType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"percentHeight") ) { return set_percentHeight(inValue); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { return set_paddingBottom(inValue); }
		if (HX_FIELD_EQ(inName,"fontUnderline") ) { return set_fontUnderline(inValue); }
		if (HX_FIELD_EQ(inName,"inlineScrolls") ) { return set_inlineScrolls(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_dynamicValues") ) { _dynamicValues=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_percentHeight") ) { _percentHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_paddingBottom") ) { _paddingBottom=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fontUnderline") ) { _fontUnderline=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inlineScrolls") ) { _inlineScrolls=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundImage") ) { return set_backgroundImage(inValue); }
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return set_backgroundColor(inValue); }
		if (HX_FIELD_EQ(inName,"selectionMethod") ) { return set_selectionMethod(inValue); }
		if (HX_FIELD_EQ(inName,"autoHideScrolls") ) { return set_autoHideScrolls(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_backgroundImage") ) { _backgroundImage=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_backgroundColor") ) { _backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectionMethod") ) { _selectionMethod=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoHideScrolls") ) { _autoHideScrolls=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"verticalAlignment") ) { return set_verticalAlignment(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_verticalAlignment") ) { _verticalAlignment=inValue.Cast< ::String >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"backgroundImageRect") ) { return set_backgroundImageRect(inValue); }
		if (HX_FIELD_EQ(inName,"horizontalAlignment") ) { return set_horizontalAlignment(inValue); }
		if (HX_FIELD_EQ(inName,"cornerRadiusTopLeft") ) { return set_cornerRadiusTopLeft(inValue); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_backgroundImageRect") ) { _backgroundImageRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_horizontalAlignment") ) { _horizontalAlignment=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cornerRadiusTopLeft") ) { _cornerRadiusTopLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cornerRadiusTopRight") ) { return set_cornerRadiusTopRight(inValue); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_cornerRadiusTopRight") ) { _cornerRadiusTopRight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundImageScale9") ) { return set_backgroundImageScale9(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_backgroundImageScale9") ) { _backgroundImageScale9=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cornerRadiusBottomLeft") ) { return set_cornerRadiusBottomLeft(inValue); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_cornerRadiusBottomLeft") ) { _cornerRadiusBottomLeft=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cornerRadiusBottomRight") ) { return set_cornerRadiusBottomRight(inValue); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"_cornerRadiusBottomRight") ) { _cornerRadiusBottomRight=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"backgroundColorGradientEnd") ) { return set_backgroundColorGradientEnd(inValue); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundColorGradientEnd") ) { _backgroundColorGradientEnd=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Style_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dynamicValues"));
	outFields->push(HX_CSTRING("_target"));
	outFields->push(HX_CSTRING("_autoApply"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_percentWidth"));
	outFields->push(HX_CSTRING("_percentHeight"));
	outFields->push(HX_CSTRING("_autoSize"));
	outFields->push(HX_CSTRING("_backgroundImage"));
	outFields->push(HX_CSTRING("_backgroundImageScale9"));
	outFields->push(HX_CSTRING("_backgroundImageRect"));
	outFields->push(HX_CSTRING("_backgroundColor"));
	outFields->push(HX_CSTRING("_backgroundColorGradientEnd"));
	outFields->push(HX_CSTRING("_borderColor"));
	outFields->push(HX_CSTRING("_borderSize"));
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_paddingLeft"));
	outFields->push(HX_CSTRING("_paddingRight"));
	outFields->push(HX_CSTRING("_paddingTop"));
	outFields->push(HX_CSTRING("_paddingBottom"));
	outFields->push(HX_CSTRING("_spacingX"));
	outFields->push(HX_CSTRING("_spacingY"));
	outFields->push(HX_CSTRING("_verticalAlignment"));
	outFields->push(HX_CSTRING("_horizontalAlignment"));
	outFields->push(HX_CSTRING("_cornerRadiusTopLeft"));
	outFields->push(HX_CSTRING("_cornerRadiusTopRight"));
	outFields->push(HX_CSTRING("_cornerRadiusBottomLeft"));
	outFields->push(HX_CSTRING("_cornerRadiusBottomRight"));
	outFields->push(HX_CSTRING("_filter"));
	outFields->push(HX_CSTRING("_filterSet"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_fontName"));
	outFields->push(HX_CSTRING("_fontSize"));
	outFields->push(HX_CSTRING("_fontScale"));
	outFields->push(HX_CSTRING("_fontEmbedded"));
	outFields->push(HX_CSTRING("_fontBold"));
	outFields->push(HX_CSTRING("_fontItalic"));
	outFields->push(HX_CSTRING("_fontUnderline"));
	outFields->push(HX_CSTRING("_textAlign"));
	outFields->push(HX_CSTRING("_iconPosition"));
	outFields->push(HX_CSTRING("_icon"));
	outFields->push(HX_CSTRING("_hasButtons"));
	outFields->push(HX_CSTRING("_gradientType"));
	outFields->push(HX_CSTRING("_selectionMethod"));
	outFields->push(HX_CSTRING("_autoHideScrolls"));
	outFields->push(HX_CSTRING("_inlineScrolls"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("percentWidth"));
	outFields->push(HX_CSTRING("percentHeight"));
	outFields->push(HX_CSTRING("autoSize"));
	outFields->push(HX_CSTRING("autoSizeSet"));
	outFields->push(HX_CSTRING("backgroundImage"));
	outFields->push(HX_CSTRING("backgroundImageScale9"));
	outFields->push(HX_CSTRING("backgroundImageRect"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("backgroundColorGradientEnd"));
	outFields->push(HX_CSTRING("borderColor"));
	outFields->push(HX_CSTRING("borderSize"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("paddingLeft"));
	outFields->push(HX_CSTRING("paddingRight"));
	outFields->push(HX_CSTRING("paddingTop"));
	outFields->push(HX_CSTRING("paddingBottom"));
	outFields->push(HX_CSTRING("padding"));
	outFields->push(HX_CSTRING("spacingX"));
	outFields->push(HX_CSTRING("spacingY"));
	outFields->push(HX_CSTRING("spacing"));
	outFields->push(HX_CSTRING("verticalAlignment"));
	outFields->push(HX_CSTRING("horizontalAlignment"));
	outFields->push(HX_CSTRING("cornerRadiusTopLeft"));
	outFields->push(HX_CSTRING("cornerRadiusTopRight"));
	outFields->push(HX_CSTRING("cornerRadiusBottomLeft"));
	outFields->push(HX_CSTRING("cornerRadiusBottomRight"));
	outFields->push(HX_CSTRING("cornerRadius"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("fontName"));
	outFields->push(HX_CSTRING("fontSize"));
	outFields->push(HX_CSTRING("fontScale"));
	outFields->push(HX_CSTRING("fontEmbedded"));
	outFields->push(HX_CSTRING("fontBold"));
	outFields->push(HX_CSTRING("fontItalic"));
	outFields->push(HX_CSTRING("fontUnderline"));
	outFields->push(HX_CSTRING("textAlign"));
	outFields->push(HX_CSTRING("iconPosition"));
	outFields->push(HX_CSTRING("icon"));
	outFields->push(HX_CSTRING("hasButtons"));
	outFields->push(HX_CSTRING("gradientType"));
	outFields->push(HX_CSTRING("selectionMethod"));
	outFields->push(HX_CSTRING("autoHideScrolls"));
	outFields->push(HX_CSTRING("inlineScrolls"));
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("autoApply"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Style_obj,_dynamicValues),HX_CSTRING("_dynamicValues")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObject*/ ,(int)offsetof(Style_obj,_target),HX_CSTRING("_target")},
	{hx::fsBool,(int)offsetof(Style_obj,_autoApply),HX_CSTRING("_autoApply")},
	{hx::fsInt,(int)offsetof(Style_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(Style_obj,_height),HX_CSTRING("_height")},
	{hx::fsInt,(int)offsetof(Style_obj,_percentWidth),HX_CSTRING("_percentWidth")},
	{hx::fsInt,(int)offsetof(Style_obj,_percentHeight),HX_CSTRING("_percentHeight")},
	{hx::fsInt,(int)offsetof(Style_obj,_autoSize),HX_CSTRING("_autoSize")},
	{hx::fsString,(int)offsetof(Style_obj,_backgroundImage),HX_CSTRING("_backgroundImage")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Style_obj,_backgroundImageScale9),HX_CSTRING("_backgroundImageScale9")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Style_obj,_backgroundImageRect),HX_CSTRING("_backgroundImageRect")},
	{hx::fsInt,(int)offsetof(Style_obj,_backgroundColor),HX_CSTRING("_backgroundColor")},
	{hx::fsInt,(int)offsetof(Style_obj,_backgroundColorGradientEnd),HX_CSTRING("_backgroundColorGradientEnd")},
	{hx::fsInt,(int)offsetof(Style_obj,_borderColor),HX_CSTRING("_borderColor")},
	{hx::fsInt,(int)offsetof(Style_obj,_borderSize),HX_CSTRING("_borderSize")},
	{hx::fsInt,(int)offsetof(Style_obj,_color),HX_CSTRING("_color")},
	{hx::fsInt,(int)offsetof(Style_obj,_paddingLeft),HX_CSTRING("_paddingLeft")},
	{hx::fsInt,(int)offsetof(Style_obj,_paddingRight),HX_CSTRING("_paddingRight")},
	{hx::fsInt,(int)offsetof(Style_obj,_paddingTop),HX_CSTRING("_paddingTop")},
	{hx::fsInt,(int)offsetof(Style_obj,_paddingBottom),HX_CSTRING("_paddingBottom")},
	{hx::fsInt,(int)offsetof(Style_obj,_spacingX),HX_CSTRING("_spacingX")},
	{hx::fsInt,(int)offsetof(Style_obj,_spacingY),HX_CSTRING("_spacingY")},
	{hx::fsString,(int)offsetof(Style_obj,_verticalAlignment),HX_CSTRING("_verticalAlignment")},
	{hx::fsString,(int)offsetof(Style_obj,_horizontalAlignment),HX_CSTRING("_horizontalAlignment")},
	{hx::fsInt,(int)offsetof(Style_obj,_cornerRadiusTopLeft),HX_CSTRING("_cornerRadiusTopLeft")},
	{hx::fsInt,(int)offsetof(Style_obj,_cornerRadiusTopRight),HX_CSTRING("_cornerRadiusTopRight")},
	{hx::fsInt,(int)offsetof(Style_obj,_cornerRadiusBottomLeft),HX_CSTRING("_cornerRadiusBottomLeft")},
	{hx::fsInt,(int)offsetof(Style_obj,_cornerRadiusBottomRight),HX_CSTRING("_cornerRadiusBottomRight")},
	{hx::fsObject /*::openfl::filters::BitmapFilter*/ ,(int)offsetof(Style_obj,_filter),HX_CSTRING("_filter")},
	{hx::fsBool,(int)offsetof(Style_obj,_filterSet),HX_CSTRING("_filterSet")},
	{hx::fsFloat,(int)offsetof(Style_obj,_alpha),HX_CSTRING("_alpha")},
	{hx::fsString,(int)offsetof(Style_obj,_fontName),HX_CSTRING("_fontName")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontSize),HX_CSTRING("_fontSize")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontScale),HX_CSTRING("_fontScale")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontEmbedded),HX_CSTRING("_fontEmbedded")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontBold),HX_CSTRING("_fontBold")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontItalic),HX_CSTRING("_fontItalic")},
	{hx::fsFloat,(int)offsetof(Style_obj,_fontUnderline),HX_CSTRING("_fontUnderline")},
	{hx::fsString,(int)offsetof(Style_obj,_textAlign),HX_CSTRING("_textAlign")},
	{hx::fsString,(int)offsetof(Style_obj,_iconPosition),HX_CSTRING("_iconPosition")},
	{hx::fsString,(int)offsetof(Style_obj,_icon),HX_CSTRING("_icon")},
	{hx::fsInt,(int)offsetof(Style_obj,_hasButtons),HX_CSTRING("_hasButtons")},
	{hx::fsString,(int)offsetof(Style_obj,_gradientType),HX_CSTRING("_gradientType")},
	{hx::fsString,(int)offsetof(Style_obj,_selectionMethod),HX_CSTRING("_selectionMethod")},
	{hx::fsInt,(int)offsetof(Style_obj,_autoHideScrolls),HX_CSTRING("_autoHideScrolls")},
	{hx::fsInt,(int)offsetof(Style_obj,_inlineScrolls),HX_CSTRING("_inlineScrolls")},
	{hx::fsBool,(int)offsetof(Style_obj,autoSizeSet),HX_CSTRING("autoSizeSet")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_dynamicValues"),
	HX_CSTRING("_target"),
	HX_CSTRING("_autoApply"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_percentWidth"),
	HX_CSTRING("_percentHeight"),
	HX_CSTRING("_autoSize"),
	HX_CSTRING("_backgroundImage"),
	HX_CSTRING("_backgroundImageScale9"),
	HX_CSTRING("_backgroundImageRect"),
	HX_CSTRING("_backgroundColor"),
	HX_CSTRING("_backgroundColorGradientEnd"),
	HX_CSTRING("_borderColor"),
	HX_CSTRING("_borderSize"),
	HX_CSTRING("_color"),
	HX_CSTRING("_paddingLeft"),
	HX_CSTRING("_paddingRight"),
	HX_CSTRING("_paddingTop"),
	HX_CSTRING("_paddingBottom"),
	HX_CSTRING("_spacingX"),
	HX_CSTRING("_spacingY"),
	HX_CSTRING("_verticalAlignment"),
	HX_CSTRING("_horizontalAlignment"),
	HX_CSTRING("_cornerRadiusTopLeft"),
	HX_CSTRING("_cornerRadiusTopRight"),
	HX_CSTRING("_cornerRadiusBottomLeft"),
	HX_CSTRING("_cornerRadiusBottomRight"),
	HX_CSTRING("_filter"),
	HX_CSTRING("_filterSet"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_fontName"),
	HX_CSTRING("_fontSize"),
	HX_CSTRING("_fontScale"),
	HX_CSTRING("_fontEmbedded"),
	HX_CSTRING("_fontBold"),
	HX_CSTRING("_fontItalic"),
	HX_CSTRING("_fontUnderline"),
	HX_CSTRING("_textAlign"),
	HX_CSTRING("_iconPosition"),
	HX_CSTRING("_icon"),
	HX_CSTRING("_hasButtons"),
	HX_CSTRING("_gradientType"),
	HX_CSTRING("_selectionMethod"),
	HX_CSTRING("_autoHideScrolls"),
	HX_CSTRING("_inlineScrolls"),
	HX_CSTRING("autoSizeSet"),
	HX_CSTRING("get_target"),
	HX_CSTRING("set_target"),
	HX_CSTRING("get_autoApply"),
	HX_CSTRING("set_autoApply"),
	HX_CSTRING("get_width"),
	HX_CSTRING("set_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("set_height"),
	HX_CSTRING("get_percentWidth"),
	HX_CSTRING("set_percentWidth"),
	HX_CSTRING("get_percentHeight"),
	HX_CSTRING("set_percentHeight"),
	HX_CSTRING("get_autoSize"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("get_autoSizeSet"),
	HX_CSTRING("get_backgroundImage"),
	HX_CSTRING("set_backgroundImage"),
	HX_CSTRING("get_backgroundImageScale9"),
	HX_CSTRING("set_backgroundImageScale9"),
	HX_CSTRING("get_backgroundImageRect"),
	HX_CSTRING("set_backgroundImageRect"),
	HX_CSTRING("get_backgroundColor"),
	HX_CSTRING("set_backgroundColor"),
	HX_CSTRING("get_backgroundColorGradientEnd"),
	HX_CSTRING("set_backgroundColorGradientEnd"),
	HX_CSTRING("get_borderColor"),
	HX_CSTRING("set_borderColor"),
	HX_CSTRING("get_borderSize"),
	HX_CSTRING("set_borderSize"),
	HX_CSTRING("get_color"),
	HX_CSTRING("set_color"),
	HX_CSTRING("get_paddingLeft"),
	HX_CSTRING("set_paddingLeft"),
	HX_CSTRING("get_paddingRight"),
	HX_CSTRING("set_paddingRight"),
	HX_CSTRING("get_paddingTop"),
	HX_CSTRING("set_paddingTop"),
	HX_CSTRING("get_paddingBottom"),
	HX_CSTRING("set_paddingBottom"),
	HX_CSTRING("get_padding"),
	HX_CSTRING("set_padding"),
	HX_CSTRING("get_spacingX"),
	HX_CSTRING("set_spacingX"),
	HX_CSTRING("get_spacingY"),
	HX_CSTRING("set_spacingY"),
	HX_CSTRING("get_spacing"),
	HX_CSTRING("set_spacing"),
	HX_CSTRING("get_horizontalAlignment"),
	HX_CSTRING("set_horizontalAlignment"),
	HX_CSTRING("get_verticalAlignment"),
	HX_CSTRING("set_verticalAlignment"),
	HX_CSTRING("get_cornerRadiusTopLeft"),
	HX_CSTRING("set_cornerRadiusTopLeft"),
	HX_CSTRING("get_cornerRadiusTopRight"),
	HX_CSTRING("set_cornerRadiusTopRight"),
	HX_CSTRING("get_cornerRadiusBottomLeft"),
	HX_CSTRING("set_cornerRadiusBottomLeft"),
	HX_CSTRING("get_cornerRadiusBottomRight"),
	HX_CSTRING("set_cornerRadiusBottomRight"),
	HX_CSTRING("get_cornerRadius"),
	HX_CSTRING("set_cornerRadius"),
	HX_CSTRING("get_filter"),
	HX_CSTRING("set_filter"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("get_fontName"),
	HX_CSTRING("set_fontName"),
	HX_CSTRING("get_fontSize"),
	HX_CSTRING("set_fontSize"),
	HX_CSTRING("get_fontScale"),
	HX_CSTRING("set_fontScale"),
	HX_CSTRING("get_fontEmbedded"),
	HX_CSTRING("set_fontEmbedded"),
	HX_CSTRING("get_fontBold"),
	HX_CSTRING("set_fontBold"),
	HX_CSTRING("get_fontItalic"),
	HX_CSTRING("set_fontItalic"),
	HX_CSTRING("get_fontUnderline"),
	HX_CSTRING("set_fontUnderline"),
	HX_CSTRING("get_textAlign"),
	HX_CSTRING("set_textAlign"),
	HX_CSTRING("get_iconPosition"),
	HX_CSTRING("set_iconPosition"),
	HX_CSTRING("get_icon"),
	HX_CSTRING("set_icon"),
	HX_CSTRING("get_hasButtons"),
	HX_CSTRING("set_hasButtons"),
	HX_CSTRING("get_gradientType"),
	HX_CSTRING("set_gradientType"),
	HX_CSTRING("get_selectionMethod"),
	HX_CSTRING("set_selectionMethod"),
	HX_CSTRING("get_autoHideScrolls"),
	HX_CSTRING("set_autoHideScrolls"),
	HX_CSTRING("get_inlineScrolls"),
	HX_CSTRING("set_inlineScrolls"),
	HX_CSTRING("apply"),
	HX_CSTRING("addDynamicValue"),
	HX_CSTRING("hasDynamicValue"),
	HX_CSTRING("getDynamicValue"),
	HX_CSTRING("merge"),
	HX_CSTRING("toString"),
	HX_CSTRING("self"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Style_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Style_obj::NONE,"NONE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Style_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Style_obj::NONE,"NONE");
};

#endif

Class Style_obj::__mClass;

void Style_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.Style"), hx::TCanCast< Style_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Style_obj::__boot()
{
	NONE= (int)-2;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
