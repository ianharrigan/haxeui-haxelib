#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_ITextDisplay
#include <haxe/ui/toolkit/text/ITextDisplay.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_text_TextDisplay
#include <haxe/ui/toolkit/text/TextDisplay.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Text_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","new",0x9d29c035,"haxe.ui.toolkit.controls.Text.new","haxe/ui/toolkit/controls/Text.hx",15,0x1a9e579b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	this->_valign = HX_CSTRING("center");
	HX_STACK_LINE(18)
	this->set_autoSize(true);
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::text::TextDisplay _g = ::haxe::ui::toolkit::text::TextDisplay_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	this->_textDisplay = _g;
	HX_STACK_LINE(20)
	this->_textDisplay->__Field(HX_CSTRING("set_text"),true)(HX_CSTRING(""));
}
;
	return null();
}

//Text_obj::~Text_obj() { }

Dynamic Text_obj::__CreateEmpty() { return  new Text_obj; }
hx::ObjectPtr< Text_obj > Text_obj::__new()
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct();
	return result;}

Dynamic Text_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Text_obj > result = new Text_obj();
	result->__construct();
	return result;}

hx::Object *Text_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Void Text_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","initialize",0x740a161b,"haxe.ui.toolkit.controls.Text.initialize","haxe/ui/toolkit/controls/Text.hx",26,0x1a9e579b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->super::initialize();
		HX_STACK_LINE(29)
		::openfl::display::DisplayObject _g = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		this->get_sprite()->addChild(_g);
		HX_STACK_LINE(30)
		bool _g1 = this->get_autoSize();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(30)
		this->_textDisplay->__Field(HX_CSTRING("set_autoSize"),true)(_g1);
		HX_STACK_LINE(31)
		::String _g2 = this->get_text();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(31)
		this->_textDisplay->__Field(HX_CSTRING("set_text"),true)(_g2);
		HX_STACK_LINE(33)
		bool _g3 = this->get_autoSize();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(33)
		if (((_g3 == true))){
			HX_STACK_LINE(34)
			Float _g4 = this->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(34)
			if (((_g4 == (int)0))){
				HX_STACK_LINE(35)
				Float _g5 = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(35)
				this->set_width(_g5);
			}
			HX_STACK_LINE(37)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(37)
			if (((_g6 == (int)0))){
				HX_STACK_LINE(38)
				Float _g7 = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(38)
				this->set_height(_g7);
			}
		}
	}
return null();
}


Void Text_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","dispose",0x4f9f7ef4,"haxe.ui.toolkit.controls.Text.dispose","haxe/ui/toolkit/controls/Text.hx",43,0x1a9e579b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::openfl::display::DisplayObject _g = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		if ((this->get_sprite()->contains(_g))){
			HX_STACK_LINE(45)
			::openfl::display::DisplayObject _g1 = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(45)
			this->get_sprite()->removeChild(_g1);
		}
		HX_STACK_LINE(47)
		this->super::dispose();
	}
return null();
}


Void Text_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","invalidate",0x0e78fe46,"haxe.ui.toolkit.controls.Text.invalidate","haxe/ui/toolkit/controls/Text.hx",50,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(51)
		if (((bool(!(this->_ready)) || bool(this->_invalidating)))){
			HX_STACK_LINE(52)
			return null();
		}
		HX_STACK_LINE(55)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(56)
		this->_invalidating = true;
		HX_STACK_LINE(57)
		if (((bool((((int(type) & int((int)256))) == (int)256)) && bool((this->_autoSize == false))))){
			HX_STACK_LINE(58)
			Float _g = this->get_layout()->__Field(HX_CSTRING("get_innerWidth"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("set_width"),true)(_g);
			HX_STACK_LINE(59)
			Float _g1 = this->get_layout()->__Field(HX_CSTRING("get_innerHeight"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(59)
			this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("set_height"),true)(_g1);
		}
		HX_STACK_LINE(61)
		this->_invalidating = false;
	}
return null();
}


::String Text_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_text",0x01001441,"haxe.ui.toolkit.controls.Text.get_text","haxe/ui/toolkit/controls/Text.hx",68,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return this->_textDisplay->__Field(HX_CSTRING("get_text"),true)();
}


::String Text_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_text",0xaf5d6db5,"haxe.ui.toolkit.controls.Text.set_text","haxe/ui/toolkit/controls/Text.hx",71,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(72)
	::String _g = this->super::set_text(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(72)
	value = _g;
	HX_STACK_LINE(74)
	this->_textDisplay->__Field(HX_CSTRING("set_text"),true)(value);
	HX_STACK_LINE(75)
	bool _g1 = this->get_autoSize();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(75)
	if (((_g1 == true))){
		HX_STACK_LINE(76)
		Float _g2 = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(76)
		this->set_width(_g2);
		HX_STACK_LINE(77)
		Float _g3 = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(77)
		this->set_height(_g3);
	}
	HX_STACK_LINE(79)
	return value;
}


bool Text_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_autoSize",0x1df654d8,"haxe.ui.toolkit.controls.Text.set_autoSize","haxe/ui/toolkit/controls/Text.hx",82,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(83)
	bool _g = this->super::set_autoSize(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(83)
	value = _g;
	HX_STACK_LINE(84)
	if (((this->_textDisplay != null()))){
		HX_STACK_LINE(85)
		this->_textDisplay->__Field(HX_CSTRING("set_autoSize"),true)(value);
	}
	HX_STACK_LINE(87)
	return value;
}


Float Text_obj::set_width( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_width",0x7f2bfbfe,"haxe.ui.toolkit.controls.Text.set_width","haxe/ui/toolkit/controls/Text.hx",90,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(91)
	this->super::set_width(value);
	HX_STACK_LINE(92)
	this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("set_width"),true)(value);
	HX_STACK_LINE(93)
	::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(93)
	this->_textDisplay->__Field(HX_CSTRING("set_text"),true)(_g);
	HX_STACK_LINE(94)
	Float _g1 = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(94)
	this->set_height(_g1);
	HX_STACK_LINE(96)
	return value;
}


Void Text_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","applyStyle",0xb6be05ae,"haxe.ui.toolkit.controls.Text.applyStyle","haxe/ui/toolkit/controls/Text.hx",102,0x1a9e579b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		this->super::applyStyle();
		HX_STACK_LINE(106)
		if (((this->_textDisplay != null()))){
			HX_STACK_LINE(107)
			::haxe::ui::toolkit::style::Style _g = this->get_style();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			this->_textDisplay->__Field(HX_CSTRING("set_style"),true)(_g);
			HX_STACK_LINE(108)
			bool _g1 = this->get_autoSize();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(108)
			if (((_g1 == true))){
				HX_STACK_LINE(109)
				Float _g2 = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(109)
				this->set_width(_g2);
				HX_STACK_LINE(110)
				Float _g3 = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(110)
				this->set_height(_g3);
			}
		}
	}
return null();
}


bool Text_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_multiline",0x17bb92d9,"haxe.ui.toolkit.controls.Text.get_multiline","haxe/ui/toolkit/controls/Text.hx",131,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(131)
	return this->_textDisplay->__Field(HX_CSTRING("get_multiline"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_multiline,return )

bool Text_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_multiline",0x5cc174e5,"haxe.ui.toolkit.controls.Text.set_multiline","haxe/ui/toolkit/controls/Text.hx",134,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(135)
	this->_textDisplay->__Field(HX_CSTRING("set_multiline"),true)(value);
	HX_STACK_LINE(136)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_multiline,return )

bool Text_obj::get_wrapLines( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_wrapLines",0x922217c1,"haxe.ui.toolkit.controls.Text.get_wrapLines","haxe/ui/toolkit/controls/Text.hx",140,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	return this->_textDisplay->__Field(HX_CSTRING("get_wrapLines"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_wrapLines,return )

bool Text_obj::set_wrapLines( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_wrapLines",0xd727f9cd,"haxe.ui.toolkit.controls.Text.set_wrapLines","haxe/ui/toolkit/controls/Text.hx",143,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(144)
	this->_textDisplay->__Field(HX_CSTRING("set_wrapLines"),true)(value);
	HX_STACK_LINE(145)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_wrapLines,return )

bool Text_obj::get_selectable( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_selectable",0xbf08e52a,"haxe.ui.toolkit.controls.Text.get_selectable","haxe/ui/toolkit/controls/Text.hx",149,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	return this->_textDisplay->__Field(HX_CSTRING("get_selectable"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_selectable,return )

bool Text_obj::set_selectable( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_selectable",0xdf28cd9e,"haxe.ui.toolkit.controls.Text.set_selectable","haxe/ui/toolkit/controls/Text.hx",153,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(153)
	return this->_textDisplay->__Field(HX_CSTRING("set_selectable"),true)(value);
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_selectable,return )

::String Text_obj::get_textAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","get_textAlign",0x3428a6c4,"haxe.ui.toolkit.controls.Text.get_textAlign","haxe/ui/toolkit/controls/Text.hx",156,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	if (((this->_textDisplay == null()))){
		HX_STACK_LINE(158)
		return null();
	}
	HX_STACK_LINE(160)
	return this->_textDisplay->__Field(HX_CSTRING("get_textAlign"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(Text_obj,get_textAlign,return )

::String Text_obj::set_textAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","set_textAlign",0x792e88d0,"haxe.ui.toolkit.controls.Text.set_textAlign","haxe/ui/toolkit/controls/Text.hx",163,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(164)
	if (((this->_textDisplay != null()))){
		HX_STACK_LINE(165)
		this->_textDisplay->__Field(HX_CSTRING("set_textAlign"),true)(value);
	}
	HX_STACK_LINE(167)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Text_obj,set_textAlign,return )

Dynamic Text_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","clone",0x3a746272,"haxe.ui.toolkit.controls.Text.clone","haxe/ui/toolkit/controls/Text.hx",1,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Text c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool _g = this->get_multiline();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_multiline(_g);
	HX_STACK_LINE(4)
	bool _g1 = this->get_wrapLines();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4)
	c->set_wrapLines(_g1);
	HX_STACK_LINE(5)
	bool _g2 = this->get_selectable();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(5)
	c->set_selectable(_g2);
	HX_STACK_LINE(6)
	::String _g3 = this->get_textAlign();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(6)
	c->set_textAlign(_g3);
	HX_STACK_LINE(7)
	return c;
}


Dynamic Text_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Text","self",0xeaac7617,"haxe.ui.toolkit.controls.Text.self","haxe/ui/toolkit/controls/Text.hx",2,0x1a9e579b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::Text_obj::__new();
}



Text_obj::Text_obj()
{
}

void Text_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Text);
	HX_MARK_MEMBER_NAME(_textDisplay,"_textDisplay");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Text_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textDisplay,"_textDisplay");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Text_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		if (HX_FIELD_EQ(inName,"multiline") ) { return get_multiline(); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { return get_wrapLines(); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return get_textAlign(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"selectable") ) { return get_selectable(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { return _textDisplay; }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wrapLines") ) { return get_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapLines") ) { return set_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return get_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return set_textAlign_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Text_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { return set_wrapLines(inValue); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return set_textAlign(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectable") ) { return set_selectable(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { _textDisplay=inValue.Cast< ::haxe::ui::toolkit::text::ITextDisplay >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Text_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textDisplay"));
	outFields->push(HX_CSTRING("multiline"));
	outFields->push(HX_CSTRING("wrapLines"));
	outFields->push(HX_CSTRING("selectable"));
	outFields->push(HX_CSTRING("textAlign"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::text::ITextDisplay*/ ,(int)offsetof(Text_obj,_textDisplay),HX_CSTRING("_textDisplay")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_textDisplay"),
	HX_CSTRING("initialize"),
	HX_CSTRING("dispose"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("set_width"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("get_multiline"),
	HX_CSTRING("set_multiline"),
	HX_CSTRING("get_wrapLines"),
	HX_CSTRING("set_wrapLines"),
	HX_CSTRING("get_selectable"),
	HX_CSTRING("set_selectable"),
	HX_CSTRING("get_textAlign"),
	HX_CSTRING("set_textAlign"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Text_obj::__mClass,"__mClass");
};

#endif

Class Text_obj::__mClass;

void Text_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Text"), hx::TCanCast< Text_obj> ,sStaticFields,sMemberFields,
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

void Text_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
