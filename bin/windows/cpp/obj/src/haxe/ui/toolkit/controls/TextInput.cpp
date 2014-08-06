#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInputLayout
#include <haxe/ui/toolkit/controls/TextInputLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void TextInput_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","new",0xe9cabfb9,"haxe.ui.toolkit.controls.TextInput.new","haxe/ui/toolkit/controls/TextInput.hx",25,0x28010717)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(27)
	this->addStates(Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("disabled")),null());
	HX_STACK_LINE(28)
	::haxe::ui::toolkit::controls::TextInputLayout _g = ::haxe::ui::toolkit::controls::TextInputLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->_layout = _g;
	HX_STACK_LINE(29)
	::haxe::ui::toolkit::text::TextDisplay _g1 = ::haxe::ui::toolkit::text::TextDisplay_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(29)
	this->_textDisplay = _g1;
	HX_STACK_LINE(30)
	this->_textDisplay->__Field(HX_CSTRING("set_interactive"),true)(true);
	HX_STACK_LINE(31)
	this->_textDisplay->__Field(HX_CSTRING("set_autoSize"),true)(false);
	HX_STACK_LINE(32)
	this->_textDisplay->__Field(HX_CSTRING("set_text"),true)(HX_CSTRING(""));
}
;
	return null();
}

//TextInput_obj::~TextInput_obj() { }

Dynamic TextInput_obj::__CreateEmpty() { return  new TextInput_obj; }
hx::ObjectPtr< TextInput_obj > TextInput_obj::__new()
{  hx::ObjectPtr< TextInput_obj > result = new TextInput_obj();
	result->__construct();
	return result;}

Dynamic TextInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextInput_obj > result = new TextInput_obj();
	result->__construct();
	return result;}

hx::Object *TextInput_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Void TextInput_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","preInitialize",0x930d37ec,"haxe.ui.toolkit.controls.TextInput.preInitialize","haxe/ui/toolkit/controls/TextInput.hx",39,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->super::preInitialize();
	}
return null();
}


Void TextInput_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","initialize",0xb919cf17,"haxe.ui.toolkit.controls.TextInput.initialize","haxe/ui/toolkit/controls/TextInput.hx",42,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		this->super::initialize();
		HX_STACK_LINE(45)
		::openfl::display::DisplayObject _g = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		this->get_sprite()->addChild(_g);
		HX_STACK_LINE(47)
		bool _g1 = this->get_multiline();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		if (((_g1 == true))){
			HX_STACK_LINE(48)
			Float _g2 = this->_layout->__Field(HX_CSTRING("get_innerWidth"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(48)
			this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("set_width"),true)(_g2);
			HX_STACK_LINE(49)
			Float _g3 = this->_layout->__Field(HX_CSTRING("get_innerHeight"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(49)
			this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("set_height"),true)(_g3);
		}
		HX_STACK_LINE(52)
		this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("addEventListener"),true)(::openfl::events::Event_obj::CHANGE,this->_onTextChange_dyn(),null(),null(),null());
		HX_STACK_LINE(53)
		this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("addEventListener"),true)(::openfl::events::Event_obj::SCROLL,this->_onTextScroll_dyn(),null(),null(),null());
		HX_STACK_LINE(54)
		this->checkScrolls();
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::TextInput_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/TextInput.hx",56,0x28010717)
				{
					HX_STACK_LINE(56)
					bool _g4 = __this->contains(__this->_textPlaceHolder);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(56)
					return (_g4 == false);
				}
				return null();
			}
		};
		HX_STACK_LINE(56)
		if (((  (((this->_textPlaceHolder != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(57)
			this->addChild(this->_textPlaceHolder);
		}
		HX_STACK_LINE(60)
		if (((this->_textPlaceHolder != null()))){
			HX_STACK_LINE(61)
			if (((this->get_text().length > (int)0))){
				HX_STACK_LINE(62)
				this->_textPlaceHolder->set_visible(false);
			}
			HX_STACK_LINE(64)
			::String _g5 = this->_textDisplay->__Field(HX_CSTRING("get_textAlign"),true)();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(64)
			this->_textPlaceHolder->set_textAlign(_g5);
			HX_STACK_LINE(65)
			this->setChildIndex(this->_textPlaceHolder,(int)0);
		}
	}
return null();
}


Void TextInput_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","dispose",0x9b109078,"haxe.ui.toolkit.controls.TextInput.dispose","haxe/ui/toolkit/controls/TextInput.hx",69,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("removeEventListener"),true)(::openfl::events::Event_obj::CHANGE,this->_onTextChange_dyn(),null());
		HX_STACK_LINE(71)
		this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("removeEventListener"),true)(::openfl::events::Event_obj::SCROLL,this->_onTextScroll_dyn(),null());
		HX_STACK_LINE(72)
		::openfl::display::DisplayObject _g = this->_textDisplay->__Field(HX_CSTRING("get_display"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		this->get_sprite()->removeChild(_g);
		HX_STACK_LINE(73)
		if (((  (((this->_textPlaceHolder != null()))) ? bool(this->contains(this->_textPlaceHolder)) : bool(false) ))){
			HX_STACK_LINE(74)
			this->removeChild(this->_textPlaceHolder,null());
		}
		HX_STACK_LINE(76)
		this->super::dispose();
	}
return null();
}


Void TextInput_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","invalidate",0x5388b742,"haxe.ui.toolkit.controls.TextInput.invalidate","haxe/ui/toolkit/controls/TextInput.hx",79,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(80)
		if (((bool(!(this->_ready)) || bool(this->_invalidating)))){
			HX_STACK_LINE(81)
			return null();
		}
		HX_STACK_LINE(84)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(85)
		this->_invalidating = true;
		HX_STACK_LINE(86)
		if (((((int(type) & int((int)256))) == (int)256))){
			HX_STACK_LINE(87)
			this->checkScrolls();
			HX_STACK_LINE(88)
			Float _g = this->get_layout()->__Field(HX_CSTRING("get_innerWidth"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("set_width"),true)(_g);
			HX_STACK_LINE(89)
			Float _g1 = this->get_layout()->__Field(HX_CSTRING("get_innerHeight"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(89)
			this->_textDisplay->__Field(HX_CSTRING("get_display"),true)()->__Field(HX_CSTRING("set_height"),true)(_g1);
		}
		HX_STACK_LINE(91)
		this->_invalidating = false;
	}
return null();
}


bool TextInput_obj::set_disabled( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_disabled",0xddadf680,"haxe.ui.toolkit.controls.TextInput.set_disabled","haxe/ui/toolkit/controls/TextInput.hx",94,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(95)
	this->super::set_disabled(value);
	HX_STACK_LINE(96)
	if (((value == true))){
		HX_STACK_LINE(97)
		this->_textDisplay->__Field(HX_CSTRING("set_interactive"),true)(false);
	}
	else{
		HX_STACK_LINE(99)
		this->_textDisplay->__Field(HX_CSTRING("set_interactive"),true)(true);
	}
	HX_STACK_LINE(101)
	return value;
}


Void TextInput_obj::_onTextChange( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","_onTextChange",0xb5803f74,"haxe.ui.toolkit.controls.TextInput._onTextChange","haxe/ui/toolkit/controls/TextInput.hx",107,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(108)
		this->checkScrolls();
		HX_STACK_LINE(109)
		if (((this->_textPlaceHolder != null()))){
			HX_STACK_LINE(110)
			this->_textPlaceHolder->set_visible((this->get_text().length == (int)0));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,_onTextChange,(void))

Void TextInput_obj::_onTextScroll( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","_onTextScroll",0x45728611,"haxe.ui.toolkit.controls.TextInput._onTextScroll","haxe/ui/toolkit/controls/TextInput.hx",115,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(115)
		this->checkScrolls();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,_onTextScroll,(void))

Void TextInput_obj::_onVScrollChange( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","_onVScrollChange",0xd44661dc,"haxe.ui.toolkit.controls.TextInput._onVScrollChange","haxe/ui/toolkit/controls/TextInput.hx",118,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(119)
		::openfl::text::TextField tf;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(119)
		tf = hx::TCast< openfl::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
		HX_STACK_LINE(122)
		Float _g = this->_vscroll->get_pos();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(122)
		tf->set_scrollV(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,_onVScrollChange,(void))

Void TextInput_obj::_onHScrollChange( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","_onHScrollChange",0x03bf84ce,"haxe.ui.toolkit.controls.TextInput._onHScrollChange","haxe/ui/toolkit/controls/TextInput.hx",126,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(127)
		::openfl::text::TextField tf;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(127)
		tf = hx::TCast< openfl::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
		HX_STACK_LINE(129)
		Float _g = this->_hscroll->get_pos();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(129)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(129)
		tf->set_scrollH(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,_onHScrollChange,(void))

::String TextInput_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_text",0xb87e563d,"haxe.ui.toolkit.controls.TextInput.get_text","haxe/ui/toolkit/controls/TextInput.hx",137,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	return this->_textDisplay->__Field(HX_CSTRING("get_text"),true)();
}


::String TextInput_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_text",0x66dbafb1,"haxe.ui.toolkit.controls.TextInput.set_text","haxe/ui/toolkit/controls/TextInput.hx",140,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(141)
	::String _g = this->super::set_text(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(141)
	value = _g;
	HX_STACK_LINE(142)
	this->_textDisplay->__Field(HX_CSTRING("set_text"),true)(value);
	HX_STACK_LINE(144)
	return value;
}


Void TextInput_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","applyStyle",0xfbcdbeaa,"haxe.ui.toolkit.controls.TextInput.applyStyle","haxe/ui/toolkit/controls/TextInput.hx",150,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(151)
		this->super::applyStyle();
		HX_STACK_LINE(154)
		if (((this->_textDisplay != null()))){
			HX_STACK_LINE(155)
			::haxe::ui::toolkit::style::Style _g = this->get_style();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(155)
			this->_textDisplay->__Field(HX_CSTRING("set_style"),true)(_g);
		}
	}
return null();
}


bool TextInput_obj::get_multiline( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_multiline",0x6be09f5d,"haxe.ui.toolkit.controls.TextInput.get_multiline","haxe/ui/toolkit/controls/TextInput.hx",204,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	return this->_textDisplay->__Field(HX_CSTRING("get_multiline"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_multiline,return )

bool TextInput_obj::set_multiline( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_multiline",0xb0e68169,"haxe.ui.toolkit.controls.TextInput.set_multiline","haxe/ui/toolkit/controls/TextInput.hx",207,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(208)
	this->_textDisplay->__Field(HX_CSTRING("set_wrapLines"),true)(value);
	HX_STACK_LINE(209)
	this->_textDisplay->__Field(HX_CSTRING("set_multiline"),true)(value);
	HX_STACK_LINE(210)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_multiline,return )

int TextInput_obj::get_selectionBeginIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_selectionBeginIndex",0xd12c3805,"haxe.ui.toolkit.controls.TextInput.get_selectionBeginIndex","haxe/ui/toolkit/controls/TextInput.hx",213,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	::openfl::text::TextField tf;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(214)
	tf = hx::TCast< openfl::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
	HX_STACK_LINE(215)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(219)
	return n;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_selectionBeginIndex,return )

int TextInput_obj::get_selectionEndIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_selectionEndIndex",0x405aca13,"haxe.ui.toolkit.controls.TextInput.get_selectionEndIndex","haxe/ui/toolkit/controls/TextInput.hx",222,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	::openfl::text::TextField tf;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(223)
	tf = hx::TCast< openfl::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
	HX_STACK_LINE(224)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(228)
	return n;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_selectionEndIndex,return )

::openfl::text::TextFormat TextInput_obj::get_selectedTextFormat( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_selectedTextFormat",0x9412038f,"haxe.ui.toolkit.controls.TextInput.get_selectedTextFormat","haxe/ui/toolkit/controls/TextInput.hx",231,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	::openfl::text::TextField tf;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(232)
	tf = hx::TCast< openfl::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
	HX_STACK_LINE(233)
	int _g = this->get_selectionBeginIndex();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(233)
	int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(233)
	int _g2 = this->get_selectionEndIndex();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(233)
	return tf->getTextFormat(_g1,_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_selectedTextFormat,return )

bool TextInput_obj::get_wrapLines( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_wrapLines",0xe6472445,"haxe.ui.toolkit.controls.TextInput.get_wrapLines","haxe/ui/toolkit/controls/TextInput.hx",237,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(237)
	return this->_textDisplay->__Field(HX_CSTRING("get_wrapLines"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_wrapLines,return )

bool TextInput_obj::set_wrapLines( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_wrapLines",0x2b4d0651,"haxe.ui.toolkit.controls.TextInput.set_wrapLines","haxe/ui/toolkit/controls/TextInput.hx",240,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(241)
	this->_textDisplay->__Field(HX_CSTRING("set_wrapLines"),true)(value);
	HX_STACK_LINE(242)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_wrapLines,return )

bool TextInput_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_displayAsPassword",0xdfaf877f,"haxe.ui.toolkit.controls.TextInput.get_displayAsPassword","haxe/ui/toolkit/controls/TextInput.hx",246,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(246)
	return this->_textDisplay->__Field(HX_CSTRING("get_displayAsPassword"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_displayAsPassword,return )

bool TextInput_obj::set_displayAsPassword( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_displayAsPassword",0x33b8558b,"haxe.ui.toolkit.controls.TextInput.set_displayAsPassword","haxe/ui/toolkit/controls/TextInput.hx",249,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(250)
	this->_textDisplay->__Field(HX_CSTRING("set_displayAsPassword"),true)(value);
	HX_STACK_LINE(251)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_displayAsPassword,return )

::String TextInput_obj::get_placeholderText( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_placeholderText",0x9c646230,"haxe.ui.toolkit.controls.TextInput.get_placeholderText","haxe/ui/toolkit/controls/TextInput.hx",254,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(255)
	if (((this->_textPlaceHolder == null()))){
		HX_STACK_LINE(256)
		return null();
	}
	HX_STACK_LINE(258)
	return this->_textPlaceHolder->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_placeholderText,return )

::String TextInput_obj::set_placeholderText( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_placeholderText",0xd901553c,"haxe.ui.toolkit.controls.TextInput.set_placeholderText","haxe/ui/toolkit/controls/TextInput.hx",261,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(262)
	if (((this->_textPlaceHolder == null()))){
		HX_STACK_LINE(263)
		::haxe::ui::toolkit::controls::Text _g = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(263)
		this->_textPlaceHolder = _g;
		HX_STACK_LINE(264)
		this->_textPlaceHolder->set_autoSize(false);
		HX_STACK_LINE(265)
		this->_textPlaceHolder->set_id(HX_CSTRING("placeholder"));
	}
	HX_STACK_LINE(267)
	this->_textPlaceHolder->set_text(value);
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::TextInput_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/TextInput.hx",268,0x28010717)
			{
				HX_STACK_LINE(268)
				bool _g1 = __this->contains(__this->_textPlaceHolder);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(268)
				return (_g1 == false);
			}
			return null();
		}
	};
	HX_STACK_LINE(268)
	if (((  (((  ((this->_ready)) ? bool(_Function_1_1::Block(this)) : bool(false) ))) ? bool((value != null())) : bool(false) ))){
		HX_STACK_LINE(269)
		this->addChild(this->_textPlaceHolder);
	}
	HX_STACK_LINE(271)
	if (((value == null()))){
		HX_STACK_LINE(272)
		if ((this->contains(this->_textPlaceHolder))){
			HX_STACK_LINE(273)
			this->removeChild(this->_textPlaceHolder,null());
		}
		HX_STACK_LINE(275)
		this->_textPlaceHolder = null();
	}
	HX_STACK_LINE(277)
	if (((this->_textPlaceHolder != null()))){
		HX_STACK_LINE(278)
		this->_textPlaceHolder->set_visible((this->get_text().length == (int)0));
	}
	HX_STACK_LINE(280)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_placeholderText,return )

::String TextInput_obj::get_textAlign( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_textAlign",0x884db348,"haxe.ui.toolkit.controls.TextInput.get_textAlign","haxe/ui/toolkit/controls/TextInput.hx",283,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(284)
	if (((this->_textDisplay == null()))){
		HX_STACK_LINE(285)
		return null();
	}
	HX_STACK_LINE(287)
	return this->_textDisplay->__Field(HX_CSTRING("get_textAlign"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_textAlign,return )

::String TextInput_obj::set_textAlign( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_textAlign",0xcd539554,"haxe.ui.toolkit.controls.TextInput.set_textAlign","haxe/ui/toolkit/controls/TextInput.hx",290,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(291)
	if (((this->_textDisplay != null()))){
		HX_STACK_LINE(292)
		this->_textDisplay->__Field(HX_CSTRING("set_textAlign"),true)(value);
	}
	HX_STACK_LINE(294)
	if (((this->_textPlaceHolder != null()))){
		HX_STACK_LINE(295)
		this->_textPlaceHolder->set_textAlign(value);
	}
	HX_STACK_LINE(297)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_textAlign,return )

int TextInput_obj::get_maxChars( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_maxChars",0x3c818129,"haxe.ui.toolkit.controls.TextInput.get_maxChars","haxe/ui/toolkit/controls/TextInput.hx",301,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(301)
	return this->_textDisplay->__Field(HX_CSTRING("get_maxChars"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_maxChars,return )

int TextInput_obj::set_maxChars( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_maxChars",0x517aa49d,"haxe.ui.toolkit.controls.TextInput.set_maxChars","haxe/ui/toolkit/controls/TextInput.hx",305,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(305)
	return this->_textDisplay->__Field(HX_CSTRING("set_maxChars"),true)(value);
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_maxChars,return )

::String TextInput_obj::get_restrictChars( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_restrictChars",0xc231cc71,"haxe.ui.toolkit.controls.TextInput.get_restrictChars","haxe/ui/toolkit/controls/TextInput.hx",309,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(309)
	return this->_textDisplay->__Field(HX_CSTRING("get_restrictChars"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_restrictChars,return )

::String TextInput_obj::set_restrictChars( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_restrictChars",0xe59fa47d,"haxe.ui.toolkit.controls.TextInput.set_restrictChars","haxe/ui/toolkit/controls/TextInput.hx",313,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(313)
	return this->_textDisplay->__Field(HX_CSTRING("set_restrictChars"),true)(value);
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_restrictChars,return )

Float TextInput_obj::get_vscrollPos( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_vscrollPos",0x277e59e1,"haxe.ui.toolkit.controls.TextInput.get_vscrollPos","haxe/ui/toolkit/controls/TextInput.hx",320,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(321)
	if (((this->_vscroll != null()))){
		HX_STACK_LINE(322)
		return this->_vscroll->get_pos();
	}
	HX_STACK_LINE(324)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_vscrollPos,return )

Float TextInput_obj::set_vscrollPos( Float value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","set_vscrollPos",0x479e4255,"haxe.ui.toolkit.controls.TextInput.set_vscrollPos","haxe/ui/toolkit/controls/TextInput.hx",327,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(328)
	if (((this->_vscroll != null()))){
		HX_STACK_LINE(329)
		this->_vscroll->set_pos(value);
	}
	HX_STACK_LINE(331)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,set_vscrollPos,return )

Float TextInput_obj::get_vscrollMin( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_vscrollMin",0x277c0ddf,"haxe.ui.toolkit.controls.TextInput.get_vscrollMin","haxe/ui/toolkit/controls/TextInput.hx",334,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(335)
	if (((this->_vscroll != null()))){
		HX_STACK_LINE(336)
		return this->_vscroll->get_min();
	}
	HX_STACK_LINE(338)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_vscrollMin,return )

Float TextInput_obj::get_vscrollMax( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","get_vscrollMax",0x277c06f1,"haxe.ui.toolkit.controls.TextInput.get_vscrollMax","haxe/ui/toolkit/controls/TextInput.hx",341,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(342)
	if (((this->_vscroll != null()))){
		HX_STACK_LINE(343)
		return this->_vscroll->get_max();
	}
	HX_STACK_LINE(345)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,get_vscrollMax,return )

Void TextInput_obj::replaceSelectedText( ::String s){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","replaceSelectedText",0x987cf055,"haxe.ui.toolkit.controls.TextInput.replaceSelectedText","haxe/ui/toolkit/controls/TextInput.hx",355,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(355)
		::openfl::text::TextField tf;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(355)
		tf = hx::TCast< openfl::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextInput_obj,replaceSelectedText,(void))

Void TextInput_obj::focus( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","focus",0x6d1d9771,"haxe.ui.toolkit.controls.TextInput.focus","haxe/ui/toolkit/controls/TextInput.hx",361,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(362)
		::openfl::text::TextField tf;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(362)
		tf = hx::TCast< openfl::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
		HX_STACK_LINE(363)
		tf->get_stage()->set_focus(tf);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,focus,(void))

Void TextInput_obj::checkScrolls( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","checkScrolls",0xb5f5c965,"haxe.ui.toolkit.controls.TextInput.checkScrolls","haxe/ui/toolkit/controls/TextInput.hx",366,0x28010717)
		HX_STACK_THIS(this)
		HX_STACK_LINE(367)
		bool _g = this->get_multiline();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::TextInput_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/TextInput.hx",367,0x28010717)
				{
					HX_STACK_LINE(367)
					bool _g1 = __this->get_ready();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(367)
					return (_g1 == false);
				}
				return null();
			}
		};
		HX_STACK_LINE(367)
		if (((  ((!(((_g == false))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(368)
			return null();
		}
		HX_STACK_LINE(372)
		::openfl::text::TextField tf;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(372)
		tf = hx::TCast< openfl::text::TextField >::cast(this->_textDisplay->__Field(HX_CSTRING("get_display"),true)());
		HX_STACK_LINE(373)
		int _g2 = tf->get_bottomScrollV();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(373)
		int _g3 = tf->get_scrollV();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(373)
		int _g4 = (_g2 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(373)
		int visibleLines = (_g4 + (int)1);		HX_STACK_VAR(visibleLines,"visibleLines");
		HX_STACK_LINE(374)
		int _g5 = tf->get_maxScrollV();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(374)
		if (((_g5 > (int)1))){
			HX_STACK_LINE(375)
			if (((this->_vscroll == null()))){
				HX_STACK_LINE(376)
				::haxe::ui::toolkit::controls::VScroll _g6 = ::haxe::ui::toolkit::controls::VScroll_obj::__new();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(376)
				this->_vscroll = _g6;
				HX_STACK_LINE(377)
				this->_vscroll->set_percentHeight((int)100);
				HX_STACK_LINE(378)
				this->_vscroll->addEventListener(::openfl::events::Event_obj::CHANGE,this->_onVScrollChange_dyn(),null(),null(),null());
				HX_STACK_LINE(379)
				this->addChild(this->_vscroll);
			}
			HX_STACK_LINE(381)
			int _g7 = tf->get_numLines();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(381)
			Float _g8 = (Float(visibleLines) / Float(_g7));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(381)
			int _g9 = tf->get_maxScrollV();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(381)
			int _g10 = (_g9 - (int)1);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(381)
			Float _g11 = (_g8 * _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(381)
			this->_vscroll->set_pageSize(_g11);
			HX_STACK_LINE(382)
			this->_vscroll->set_min((int)1);
			HX_STACK_LINE(383)
			int _g12 = tf->get_maxScrollV();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(383)
			this->_vscroll->set_max(_g12);
			HX_STACK_LINE(384)
			this->_vscroll->set_incrementSize((int)1);
			HX_STACK_LINE(385)
			int _g13 = tf->get_scrollV();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(385)
			this->_vscroll->set_pos(_g13);
			HX_STACK_LINE(386)
			this->_vscroll->set_visible(true);
		}
		else{
			HX_STACK_LINE(388)
			if (((this->_vscroll != null()))){
				HX_STACK_LINE(389)
				this->_vscroll->set_visible(false);
				HX_STACK_LINE(390)
				this->_vscroll->set_pos((int)0);
			}
		}
		HX_STACK_LINE(394)
		int _g14 = tf->get_maxScrollH();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(394)
		if (((_g14 > (int)0))){
			HX_STACK_LINE(395)
			if (((this->_hscroll == null()))){
				HX_STACK_LINE(396)
				::haxe::ui::toolkit::controls::HScroll _g15 = ::haxe::ui::toolkit::controls::HScroll_obj::__new();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(396)
				this->_hscroll = _g15;
				HX_STACK_LINE(397)
				this->_hscroll->set_percentWidth((int)100);
				HX_STACK_LINE(398)
				this->_hscroll->addEventListener(::openfl::events::Event_obj::CHANGE,this->_onHScrollChange_dyn(),null(),null(),null());
				HX_STACK_LINE(399)
				this->addChild(this->_hscroll);
			}
			HX_STACK_LINE(401)
			Float _g16 = tf->get_width();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(401)
			int _g17 = tf->get_maxScrollH();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(401)
			Float _g18 = (_g16 - _g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(401)
			Float _g19 = tf->get_width();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(401)
			Float _g20 = (Float(_g18) / Float(_g19));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(401)
			int _g21 = tf->get_maxScrollH();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(401)
			Float _g22 = (_g20 * _g21);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(401)
			this->_hscroll->set_pageSize(_g22);
			HX_STACK_LINE(402)
			this->_hscroll->set_min((int)0);
			HX_STACK_LINE(403)
			int _g23 = tf->get_maxScrollH();		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(403)
			this->_hscroll->set_max(_g23);
			HX_STACK_LINE(404)
			int _g24 = tf->get_scrollH();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(404)
			this->_hscroll->set_pos(_g24);
			HX_STACK_LINE(405)
			this->_hscroll->set_visible(true);
		}
		else{
			HX_STACK_LINE(407)
			if (((this->_hscroll != null()))){
				HX_STACK_LINE(408)
				this->_hscroll->set_visible(false);
				HX_STACK_LINE(409)
				this->_hscroll->set_pos((int)0);
			}
		}
		HX_STACK_LINE(413)
		this->invalidate((int)1,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TextInput_obj,checkScrolls,(void))

Dynamic TextInput_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","clone",0xb0f74af6,"haxe.ui.toolkit.controls.TextInput.clone","haxe/ui/toolkit/controls/TextInput.hx",1,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TextInput c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool _g = this->get_multiline();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_multiline(_g);
	HX_STACK_LINE(4)
	bool _g1 = this->get_wrapLines();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4)
	c->set_wrapLines(_g1);
	HX_STACK_LINE(5)
	bool _g2 = this->get_displayAsPassword();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(5)
	c->set_displayAsPassword(_g2);
	HX_STACK_LINE(6)
	::String _g3 = this->get_placeholderText();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(6)
	c->set_placeholderText(_g3);
	HX_STACK_LINE(7)
	::String _g4 = this->get_textAlign();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(7)
	c->set_textAlign(_g4);
	HX_STACK_LINE(8)
	int _g5 = this->get_maxChars();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(8)
	c->set_maxChars(_g5);
	HX_STACK_LINE(9)
	::String _g6 = this->get_restrictChars();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(9)
	c->set_restrictChars(_g6);
	HX_STACK_LINE(10)
	return c;
}


Dynamic TextInput_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TextInput","self",0xaaeb0a13,"haxe.ui.toolkit.controls.TextInput.self","haxe/ui/toolkit/controls/TextInput.hx",2,0x28010717)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::TextInput_obj::__new();
}



TextInput_obj::TextInput_obj()
{
}

void TextInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextInput);
	HX_MARK_MEMBER_NAME(_textDisplay,"_textDisplay");
	HX_MARK_MEMBER_NAME(_textPlaceHolder,"_textPlaceHolder");
	HX_MARK_MEMBER_NAME(_vscroll,"_vscroll");
	HX_MARK_MEMBER_NAME(_hscroll,"_hscroll");
	HX_MARK_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_MARK_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_MARK_MEMBER_NAME(selectedTextFormat,"selectedTextFormat");
	HX_MARK_MEMBER_NAME(vscrollMin,"vscrollMin");
	HX_MARK_MEMBER_NAME(vscrollMax,"vscrollMax");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_textDisplay,"_textDisplay");
	HX_VISIT_MEMBER_NAME(_textPlaceHolder,"_textPlaceHolder");
	HX_VISIT_MEMBER_NAME(_vscroll,"_vscroll");
	HX_VISIT_MEMBER_NAME(_hscroll,"_hscroll");
	HX_VISIT_MEMBER_NAME(selectionBeginIndex,"selectionBeginIndex");
	HX_VISIT_MEMBER_NAME(selectionEndIndex,"selectionEndIndex");
	HX_VISIT_MEMBER_NAME(selectedTextFormat,"selectedTextFormat");
	HX_VISIT_MEMBER_NAME(vscrollMin,"vscrollMin");
	HX_VISIT_MEMBER_NAME(vscrollMax,"vscrollMax");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_vscroll") ) { return _vscroll; }
		if (HX_FIELD_EQ(inName,"_hscroll") ) { return _hscroll; }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return get_maxChars(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return get_multiline(); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { return get_wrapLines(); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return get_textAlign(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { return get_vscrollPos(); }
		if (HX_FIELD_EQ(inName,"vscrollMin") ) { return inCallProp ? get_vscrollMin() : vscrollMin; }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { return inCallProp ? get_vscrollMax() : vscrollMax; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { return _textDisplay; }
		if (HX_FIELD_EQ(inName,"set_disabled") ) { return set_disabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"checkScrolls") ) { return checkScrolls_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onTextChange") ) { return _onTextChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onTextScroll") ) { return _onTextScroll_dyn(); }
		if (HX_FIELD_EQ(inName,"restrictChars") ) { return get_restrictChars(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wrapLines") ) { return get_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wrapLines") ) { return set_wrapLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textAlign") ) { return get_textAlign_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textAlign") ) { return set_textAlign_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_vscrollPos") ) { return get_vscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"set_vscrollPos") ) { return set_vscrollPos_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollMin") ) { return get_vscrollMin_dyn(); }
		if (HX_FIELD_EQ(inName,"get_vscrollMax") ) { return get_vscrollMax_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"placeholderText") ) { return get_placeholderText(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_textPlaceHolder") ) { return _textPlaceHolder; }
		if (HX_FIELD_EQ(inName,"_onVScrollChange") ) { return _onVScrollChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onHScrollChange") ) { return _onHScrollChange_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { return inCallProp ? get_selectionEndIndex() : selectionEndIndex; }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"get_restrictChars") ) { return get_restrictChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_restrictChars") ) { return set_restrictChars_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"selectedTextFormat") ) { return inCallProp ? get_selectedTextFormat() : selectedTextFormat; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { return inCallProp ? get_selectionBeginIndex() : selectionBeginIndex; }
		if (HX_FIELD_EQ(inName,"get_placeholderText") ) { return get_placeholderText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_placeholderText") ) { return set_placeholderText_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceSelectedText") ) { return replaceSelectedText_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_selectionEndIndex") ) { return get_selectionEndIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_selectedTextFormat") ) { return get_selectedTextFormat_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_selectionBeginIndex") ) { return get_selectionBeginIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_vscroll") ) { _vscroll=inValue.Cast< ::haxe::ui::toolkit::controls::VScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hscroll") ) { _hscroll=inValue.Cast< ::haxe::ui::toolkit::controls::HScroll >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxChars") ) { return set_maxChars(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"wrapLines") ) { return set_wrapLines(inValue); }
		if (HX_FIELD_EQ(inName,"textAlign") ) { return set_textAlign(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"vscrollPos") ) { return set_vscrollPos(inValue); }
		if (HX_FIELD_EQ(inName,"vscrollMin") ) { vscrollMin=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vscrollMax") ) { vscrollMax=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_textDisplay") ) { _textDisplay=inValue.Cast< ::haxe::ui::toolkit::text::ITextDisplay >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"restrictChars") ) { return set_restrictChars(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"placeholderText") ) { return set_placeholderText(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_textPlaceHolder") ) { _textPlaceHolder=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"selectionEndIndex") ) { selectionEndIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { return set_displayAsPassword(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"selectedTextFormat") ) { selectedTextFormat=inValue.Cast< ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectionBeginIndex") ) { selectionBeginIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_textDisplay"));
	outFields->push(HX_CSTRING("_textPlaceHolder"));
	outFields->push(HX_CSTRING("_vscroll"));
	outFields->push(HX_CSTRING("_hscroll"));
	outFields->push(HX_CSTRING("multiline"));
	outFields->push(HX_CSTRING("selectionBeginIndex"));
	outFields->push(HX_CSTRING("selectionEndIndex"));
	outFields->push(HX_CSTRING("selectedTextFormat"));
	outFields->push(HX_CSTRING("wrapLines"));
	outFields->push(HX_CSTRING("displayAsPassword"));
	outFields->push(HX_CSTRING("placeholderText"));
	outFields->push(HX_CSTRING("textAlign"));
	outFields->push(HX_CSTRING("maxChars"));
	outFields->push(HX_CSTRING("restrictChars"));
	outFields->push(HX_CSTRING("vscrollPos"));
	outFields->push(HX_CSTRING("vscrollMin"));
	outFields->push(HX_CSTRING("vscrollMax"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::text::ITextDisplay*/ ,(int)offsetof(TextInput_obj,_textDisplay),HX_CSTRING("_textDisplay")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(TextInput_obj,_textPlaceHolder),HX_CSTRING("_textPlaceHolder")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::VScroll*/ ,(int)offsetof(TextInput_obj,_vscroll),HX_CSTRING("_vscroll")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::HScroll*/ ,(int)offsetof(TextInput_obj,_hscroll),HX_CSTRING("_hscroll")},
	{hx::fsInt,(int)offsetof(TextInput_obj,selectionBeginIndex),HX_CSTRING("selectionBeginIndex")},
	{hx::fsInt,(int)offsetof(TextInput_obj,selectionEndIndex),HX_CSTRING("selectionEndIndex")},
	{hx::fsObject /*::openfl::text::TextFormat*/ ,(int)offsetof(TextInput_obj,selectedTextFormat),HX_CSTRING("selectedTextFormat")},
	{hx::fsFloat,(int)offsetof(TextInput_obj,vscrollMin),HX_CSTRING("vscrollMin")},
	{hx::fsFloat,(int)offsetof(TextInput_obj,vscrollMax),HX_CSTRING("vscrollMax")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_textDisplay"),
	HX_CSTRING("_textPlaceHolder"),
	HX_CSTRING("_vscroll"),
	HX_CSTRING("_hscroll"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("dispose"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("set_disabled"),
	HX_CSTRING("_onTextChange"),
	HX_CSTRING("_onTextScroll"),
	HX_CSTRING("_onVScrollChange"),
	HX_CSTRING("_onHScrollChange"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("selectionBeginIndex"),
	HX_CSTRING("selectionEndIndex"),
	HX_CSTRING("selectedTextFormat"),
	HX_CSTRING("get_multiline"),
	HX_CSTRING("set_multiline"),
	HX_CSTRING("get_selectionBeginIndex"),
	HX_CSTRING("get_selectionEndIndex"),
	HX_CSTRING("get_selectedTextFormat"),
	HX_CSTRING("get_wrapLines"),
	HX_CSTRING("set_wrapLines"),
	HX_CSTRING("get_displayAsPassword"),
	HX_CSTRING("set_displayAsPassword"),
	HX_CSTRING("get_placeholderText"),
	HX_CSTRING("set_placeholderText"),
	HX_CSTRING("get_textAlign"),
	HX_CSTRING("set_textAlign"),
	HX_CSTRING("get_maxChars"),
	HX_CSTRING("set_maxChars"),
	HX_CSTRING("get_restrictChars"),
	HX_CSTRING("set_restrictChars"),
	HX_CSTRING("vscrollMin"),
	HX_CSTRING("vscrollMax"),
	HX_CSTRING("get_vscrollPos"),
	HX_CSTRING("set_vscrollPos"),
	HX_CSTRING("get_vscrollMin"),
	HX_CSTRING("get_vscrollMax"),
	HX_CSTRING("replaceSelectedText"),
	HX_CSTRING("focus"),
	HX_CSTRING("checkScrolls"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextInput_obj::__mClass,"__mClass");
};

#endif

Class TextInput_obj::__mClass;

void TextInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.TextInput"), hx::TCanCast< TextInput_obj> ,sStaticFields,sMemberFields,
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

void TextInput_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
