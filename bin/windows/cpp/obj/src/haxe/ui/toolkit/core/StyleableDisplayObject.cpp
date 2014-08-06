#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#include <haxe/ui/toolkit/style/StyleHelper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void StyleableDisplayObject_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","new",0x55efa895,"haxe.ui.toolkit.core.StyleableDisplayObject.new","haxe/ui/toolkit/core/StyleableDisplayObject.hx",21,0xd6d306bb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	super::__construct();
}
;
	return null();
}

//StyleableDisplayObject_obj::~StyleableDisplayObject_obj() { }

Dynamic StyleableDisplayObject_obj::__CreateEmpty() { return  new StyleableDisplayObject_obj; }
hx::ObjectPtr< StyleableDisplayObject_obj > StyleableDisplayObject_obj::__new()
{  hx::ObjectPtr< StyleableDisplayObject_obj > result = new StyleableDisplayObject_obj();
	result->__construct();
	return result;}

Dynamic StyleableDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleableDisplayObject_obj > result = new StyleableDisplayObject_obj();
	result->__construct();
	return result;}

hx::Object *StyleableDisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

Void StyleableDisplayObject_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","preInitialize",0x64884bc8,"haxe.ui.toolkit.core.StyleableDisplayObject.preInitialize","haxe/ui/toolkit/core/StyleableDisplayObject.hx",27,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->super::preInitialize();
		HX_STACK_LINE(30)
		this->refreshStyle();
	}
return null();
}


Void StyleableDisplayObject_obj::paint( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","paint",0x93b8c713,"haxe.ui.toolkit.core.StyleableDisplayObject.paint","haxe/ui/toolkit/core/StyleableDisplayObject.hx",34,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		if (((bool((this->_width == (int)0)) || bool((this->_height == (int)0))))){
			HX_STACK_LINE(37)
			return null();
		}
		HX_STACK_LINE(40)
		::openfl::geom::Rectangle rc = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,this->_width,this->_height);		HX_STACK_VAR(rc,"rc");
		HX_STACK_LINE(41)
		::openfl::display::Graphics _g = this->get_graphics();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::style::Style _g1 = this->get_style();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::style::StyleHelper_obj::paintStyle(_g,_g1,rc);
	}
return null();
}


Void StyleableDisplayObject_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","invalidate",0x52aae1e6,"haxe.ui.toolkit.core.StyleableDisplayObject.invalidate","haxe/ui/toolkit/core/StyleableDisplayObject.hx",44,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(45)
		if (((bool(!(this->_ready)) || bool(this->_invalidating)))){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(49)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(50)
		if (((((int(type) & int((int)1048576))) == (int)1048576))){
			HX_STACK_LINE(51)
			this->refreshStyle();
		}
	}
return null();
}


::String StyleableDisplayObject_obj::set_id( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_id",0x35dbbe83,"haxe.ui.toolkit.core.StyleableDisplayObject.set_id","haxe/ui/toolkit/core/StyleableDisplayObject.hx",55,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(56)
	::String _g = this->get_id();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	if (((value == _g))){
		HX_STACK_LINE(57)
		return value;
	}
	HX_STACK_LINE(59)
	::String v = this->super::set_id(value);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(60)
	if ((this->_ready)){
		HX_STACK_LINE(61)
		this->buildStyles();
		HX_STACK_LINE(62)
		::haxe::ui::toolkit::style::Style _g1 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		this->_style = _g1;
		HX_STACK_LINE(64)
		this->invalidate((int)16,null());
	}
	HX_STACK_LINE(66)
	return v;
}


::haxe::ui::toolkit::core::interfaces::ILayout StyleableDisplayObject_obj::set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_layout",0x183e8552,"haxe.ui.toolkit.core.StyleableDisplayObject.set_layout","haxe/ui/toolkit/core/StyleableDisplayObject.hx",69,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(70)
	::haxe::ui::toolkit::core::interfaces::ILayout _g = this->super::set_layout(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(70)
	value = _g;
	HX_STACK_LINE(71)
	if (((this->_style != null()))){
		HX_STACK_LINE(73)
		::haxe::ui::toolkit::core::interfaces::ILayout _g1 = this->get_layout();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		if (((_g1 != null()))){
			HX_STACK_LINE(74)
			int _g2 = this->_style->get_paddingLeft();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(74)
			if (((_g2 != (int)-1))){
				HX_STACK_LINE(75)
				int _g3 = this->_style->get_paddingLeft();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(75)
				this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_left"),true)(_g3);
			}
			HX_STACK_LINE(77)
			int _g4 = this->_style->get_paddingTop();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(77)
			if (((_g4 != (int)-1))){
				HX_STACK_LINE(78)
				int _g5 = this->_style->get_paddingTop();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(78)
				this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_top"),true)(_g5);
			}
			HX_STACK_LINE(80)
			int _g6 = this->_style->get_paddingRight();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(80)
			if (((_g6 != (int)-1))){
				HX_STACK_LINE(81)
				int _g7 = this->_style->get_paddingRight();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(81)
				this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_right"),true)(_g7);
			}
			HX_STACK_LINE(83)
			int _g8 = this->_style->get_paddingBottom();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(83)
			if (((_g8 != (int)-1))){
				HX_STACK_LINE(84)
				int _g9 = this->_style->get_paddingBottom();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(84)
				this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_bottom"),true)(_g9);
			}
			HX_STACK_LINE(86)
			int _g10 = this->_style->get_spacingX();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(86)
			if (((_g10 != (int)-1))){
				HX_STACK_LINE(87)
				int _g11 = this->_style->get_spacingX();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(87)
				this->_layout->__Field(HX_CSTRING("set_spacingX"),true)(_g11);
			}
			HX_STACK_LINE(89)
			int _g12 = this->_style->get_spacingY();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(89)
			if (((_g12 != (int)-1))){
				HX_STACK_LINE(90)
				int _g13 = this->_style->get_spacingY();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(90)
				this->_layout->__Field(HX_CSTRING("set_spacingY"),true)(_g13);
			}
		}
	}
	HX_STACK_LINE(94)
	return value;
}


::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::get_style( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_style",0x7bc66f7d,"haxe.ui.toolkit.core.StyleableDisplayObject.get_style","haxe/ui/toolkit/core/StyleableDisplayObject.hx",105,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	if (((this->_style == null()))){
		HX_STACK_LINE(107)
		::haxe::ui::toolkit::style::Style _g = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(107)
		this->_style = _g;
		HX_STACK_LINE(108)
		this->_style->set_target(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(110)
	return this->_style;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_style,return )

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::set_style( ::haxe::ui::toolkit::style::Style value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_style",0x5f175b89,"haxe.ui.toolkit.core.StyleableDisplayObject.set_style","haxe/ui/toolkit/core/StyleableDisplayObject.hx",113,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(114)
	this->_style = value;
	HX_STACK_LINE(115)
	this->_style->set_target(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(117)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_style,return )

::String StyleableDisplayObject_obj::get_styleName( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_styleName",0x7e191068,"haxe.ui.toolkit.core.StyleableDisplayObject.get_styleName","haxe/ui/toolkit/core/StyleableDisplayObject.hx",121,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(121)
	return this->_styleName;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_styleName,return )

::String StyleableDisplayObject_obj::set_styleName( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_styleName",0xc31ef274,"haxe.ui.toolkit.core.StyleableDisplayObject.set_styleName","haxe/ui/toolkit/core/StyleableDisplayObject.hx",124,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(125)
	this->_styleName = value;
	HX_STACK_LINE(126)
	if ((this->_ready)){
		HX_STACK_LINE(127)
		this->buildStyles();
		HX_STACK_LINE(128)
		::haxe::ui::toolkit::style::Style _g = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		this->_style = _g;
		HX_STACK_LINE(130)
		this->invalidate((int)16,null());
	}
	HX_STACK_LINE(132)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_styleName,return )

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::get_inlineStyle( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","get_inlineStyle",0xb40db364,"haxe.ui.toolkit.core.StyleableDisplayObject.get_inlineStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",135,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	if (((this->_inlineStyle == null()))){
		HX_STACK_LINE(137)
		::haxe::ui::toolkit::style::Style _g = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(137)
		this->_inlineStyle = _g;
	}
	HX_STACK_LINE(139)
	return this->_inlineStyle;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,get_inlineStyle,return )

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::set_inlineStyle( ::haxe::ui::toolkit::style::Style value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","set_inlineStyle",0xafd93070,"haxe.ui.toolkit.core.StyleableDisplayObject.set_inlineStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",142,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(143)
	this->_inlineStyle = value;
	HX_STACK_LINE(144)
	if (((this->_inlineStyle != null()))){
		HX_STACK_LINE(145)
		this->_inlineStyle->set_target(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(147)
	if ((this->_ready)){
		HX_STACK_LINE(148)
		this->buildStyles();
		HX_STACK_LINE(149)
		::haxe::ui::toolkit::style::Style _g = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(149)
		this->_style = _g;
		HX_STACK_LINE(151)
		this->invalidate((int)16,null());
	}
	HX_STACK_LINE(153)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,set_inlineStyle,return )

Void StyleableDisplayObject_obj::storeStyle( ::String id,::haxe::ui::toolkit::style::Style value){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","storeStyle",0x8d1d19fb,"haxe.ui.toolkit.core.StyleableDisplayObject.storeStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",156,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(157)
		if (((this->_storedStyles == null()))){
			HX_STACK_LINE(158)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			this->_storedStyles = _g;
		}
		HX_STACK_LINE(160)
		this->_storedStyles->set(id,value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StyleableDisplayObject_obj,storeStyle,(void))

::haxe::ui::toolkit::style::Style StyleableDisplayObject_obj::retrieveStyle( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","retrieveStyle",0x9e3c858a,"haxe.ui.toolkit.core.StyleableDisplayObject.retrieveStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",163,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(164)
	if (((this->_storedStyles == null()))){
		HX_STACK_LINE(165)
		return null();
	}
	HX_STACK_LINE(167)
	return this->_storedStyles->get(id);
}


HX_DEFINE_DYNAMIC_FUNC1(StyleableDisplayObject_obj,retrieveStyle,return )

Void StyleableDisplayObject_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","applyStyle",0xfaefe94e,"haxe.ui.toolkit.core.StyleableDisplayObject.applyStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",170,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(171)
		if (((this->_style == null()))){
			HX_STACK_LINE(172)
			return null();
		}
		HX_STACK_LINE(175)
		if (((this->_inlineStyle != null()))){
			HX_STACK_LINE(176)
			this->_style->merge(this->_inlineStyle);
		}
		HX_STACK_LINE(178)
		if (((this->_style != null()))){
			HX_STACK_LINE(179)
			Float _g = this->_style->get_alpha();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(179)
			if (((_g != (int)-1))){
				HX_STACK_LINE(180)
				Float _g1 = this->_style->get_alpha();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(180)
				this->_sprite->set_alpha(_g1);
			}
			else{
				HX_STACK_LINE(182)
				this->_sprite->set_alpha((int)1);
			}
			HX_STACK_LINE(185)
			::String _g2 = this->_style->get_horizontalAlignment();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(185)
			if (((_g2 != null()))){
				HX_STACK_LINE(186)
				::String _g3 = this->_style->get_horizontalAlignment();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(186)
				this->set_horizontalAlign(_g3);
			}
			HX_STACK_LINE(188)
			::String _g4 = this->_style->get_verticalAlignment();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(188)
			if (((_g4 != null()))){
				HX_STACK_LINE(189)
				::String _g5 = this->_style->get_verticalAlignment();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(189)
				this->set_verticalAlign(_g5);
			}
			HX_STACK_LINE(193)
			::openfl::filters::BitmapFilter _g6 = this->_style->get_filter();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(193)
			if (((_g6 != null()))){
				HX_STACK_LINE(194)
				::openfl::filters::BitmapFilter _g7 = this->_style->get_filter();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(194)
				Dynamic _g8 = Dynamic( Array_obj<Dynamic>::__new().Add(_g7));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(194)
				this->_sprite->set_filters(_g8);
			}
			else{
				HX_STACK_LINE(196)
				this->_sprite->set_filters(Dynamic( Array_obj<Dynamic>::__new()));
			}
		}
		HX_STACK_LINE(201)
		this->invalidate((int)16,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,applyStyle,(void))

Void StyleableDisplayObject_obj::buildStyles( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","buildStyles",0xab726125,"haxe.ui.toolkit.core.StyleableDisplayObject.buildStyles","haxe/ui/toolkit/core/StyleableDisplayObject.hx",204,0xd6d306bb)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,buildStyles,(void))

Void StyleableDisplayObject_obj::refreshStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","refreshStyle",0xdb339a81,"haxe.ui.toolkit.core.StyleableDisplayObject.refreshStyle","haxe/ui/toolkit/core/StyleableDisplayObject.hx",208,0xd6d306bb)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		this->buildStyles();
		HX_STACK_LINE(211)
		if ((::Std_obj::is(hx::ObjectPtr<OBJ_>(this),hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >()))){
			HX_STACK_LINE(212)
			::String state = (hx::TCast< haxe::ui::toolkit::core::StateComponent >::cast(hx::ObjectPtr<OBJ_>(this)))->get_state();		HX_STACK_VAR(state,"state");
			HX_STACK_LINE(213)
			if (((state == null()))){
				HX_STACK_LINE(214)
				state = HX_CSTRING("normal");
			}
			HX_STACK_LINE(216)
			::haxe::ui::toolkit::style::Style _g = this->retrieveStyle(state);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(216)
			this->_style = _g;
			HX_STACK_LINE(217)
			if (((this->_style == null()))){
				HX_STACK_LINE(218)
				::String _g1 = (hx::TCast< haxe::ui::toolkit::core::StateComponent >::cast(hx::ObjectPtr<OBJ_>(this)))->get_state();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(218)
				::haxe::ui::toolkit::style::Style _g2 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(218)
				this->_style = _g2;
			}
		}
		else{
			HX_STACK_LINE(221)
			::haxe::ui::toolkit::style::Style _g3 = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(221)
			this->_style = _g3;
		}
		HX_STACK_LINE(224)
		this->_style->merge(this->_inlineStyle);
		HX_STACK_LINE(227)
		if (((this->_style != null()))){
			HX_STACK_LINE(229)
			int _g4 = this->_style->get_width();		HX_STACK_VAR(_g4,"_g4");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::core::StyleableDisplayObject_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/StyleableDisplayObject.hx",229,0xd6d306bb)
					{
						HX_STACK_LINE(229)
						Float _g5 = __this->get_width();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(229)
						return (_g5 == (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(229)
			if (((  (((_g4 != (int)-1))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(230)
				int _g6 = this->_style->get_width();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(230)
				this->set_width(_g6);
			}
			HX_STACK_LINE(232)
			int _g7 = this->_style->get_height();		HX_STACK_VAR(_g7,"_g7");
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::core::StyleableDisplayObject_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/StyleableDisplayObject.hx",232,0xd6d306bb)
					{
						HX_STACK_LINE(232)
						Float _g8 = __this->get_height();		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(232)
						return (_g8 == (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(232)
			if (((  (((_g7 != (int)-1))) ? bool(_Function_2_2::Block(this)) : bool(false) ))){
				HX_STACK_LINE(233)
				int _g9 = this->_style->get_height();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(233)
				this->set_height(_g9);
			}
			HX_STACK_LINE(236)
			int _g10 = this->_style->get_percentWidth();		HX_STACK_VAR(_g10,"_g10");
			struct _Function_2_3{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::core::StyleableDisplayObject_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/StyleableDisplayObject.hx",236,0xd6d306bb)
					{
						HX_STACK_LINE(236)
						Float _g11 = __this->get_percentWidth();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(236)
						return (_g11 == (int)-1);
					}
					return null();
				}
			};
			HX_STACK_LINE(236)
			if (((  (((_g10 != (int)-1))) ? bool(_Function_2_3::Block(this)) : bool(false) ))){
				HX_STACK_LINE(237)
				int _g12 = this->_style->get_percentWidth();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(237)
				this->set_percentWidth(_g12);
			}
			HX_STACK_LINE(239)
			int _g13 = this->_style->get_percentHeight();		HX_STACK_VAR(_g13,"_g13");
			struct _Function_2_4{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::core::StyleableDisplayObject_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/StyleableDisplayObject.hx",239,0xd6d306bb)
					{
						HX_STACK_LINE(239)
						Float _g14 = __this->get_percentHeight();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(239)
						return (_g14 == (int)-1);
					}
					return null();
				}
			};
			HX_STACK_LINE(239)
			if (((  (((_g13 != (int)-1))) ? bool(_Function_2_4::Block(this)) : bool(false) ))){
				HX_STACK_LINE(240)
				int _g15 = this->_style->get_percentHeight();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(240)
				this->set_percentHeight(_g15);
			}
			HX_STACK_LINE(242)
			if ((this->_style->get_autoSizeSet())){
				HX_STACK_LINE(243)
				bool _g16 = this->_style->get_autoSize();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(243)
				this->set_autoSize(_g16);
			}
			HX_STACK_LINE(247)
			::haxe::ui::toolkit::core::interfaces::ILayout _g17 = this->get_layout();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(247)
			if (((_g17 != null()))){
				HX_STACK_LINE(248)
				int _g18 = this->_style->get_paddingLeft();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(248)
				if (((_g18 != (int)-1))){
					HX_STACK_LINE(249)
					int _g19 = this->_style->get_paddingLeft();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(249)
					this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_left"),true)(_g19);
				}
				HX_STACK_LINE(251)
				int _g20 = this->_style->get_paddingTop();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(251)
				if (((_g20 != (int)-1))){
					HX_STACK_LINE(252)
					int _g21 = this->_style->get_paddingTop();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(252)
					this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_top"),true)(_g21);
				}
				HX_STACK_LINE(254)
				int _g22 = this->_style->get_paddingRight();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(254)
				if (((_g22 != (int)-1))){
					HX_STACK_LINE(255)
					int _g23 = this->_style->get_paddingRight();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(255)
					this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_right"),true)(_g23);
				}
				HX_STACK_LINE(257)
				int _g24 = this->_style->get_paddingBottom();		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(257)
				if (((_g24 != (int)-1))){
					HX_STACK_LINE(258)
					int _g25 = this->_style->get_paddingBottom();		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(258)
					this->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("set_bottom"),true)(_g25);
				}
				HX_STACK_LINE(260)
				int _g26 = this->_style->get_spacingX();		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(260)
				if (((_g26 != (int)-1))){
					HX_STACK_LINE(261)
					int _g27 = this->_style->get_spacingX();		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(261)
					this->_layout->__Field(HX_CSTRING("set_spacingX"),true)(_g27);
				}
				HX_STACK_LINE(263)
				int _g28 = this->_style->get_spacingY();		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(263)
				if (((_g28 != (int)-1))){
					HX_STACK_LINE(264)
					int _g29 = this->_style->get_spacingY();		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(264)
					this->_layout->__Field(HX_CSTRING("set_spacingY"),true)(_g29);
				}
			}
		}
		HX_STACK_LINE(269)
		this->applyStyle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleableDisplayObject_obj,refreshStyle,(void))

Dynamic StyleableDisplayObject_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","clone",0x1ecd22d2,"haxe.ui.toolkit.core.StyleableDisplayObject.clone","haxe/ui/toolkit/core/StyleableDisplayObject.hx",1,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::StyleableDisplayObject c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::String _g = this->get_styleName();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_styleName(_g);
	HX_STACK_LINE(4)
	return c;
}


Dynamic StyleableDisplayObject_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.StyleableDisplayObject","self",0xdf11e1b7,"haxe.ui.toolkit.core.StyleableDisplayObject.self","haxe/ui/toolkit/core/StyleableDisplayObject.hx",2,0xd6d306bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::StyleableDisplayObject_obj::__new();
}



StyleableDisplayObject_obj::StyleableDisplayObject_obj()
{
}

void StyleableDisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleableDisplayObject);
	HX_MARK_MEMBER_NAME(_style,"_style");
	HX_MARK_MEMBER_NAME(_storedStyles,"_storedStyles");
	HX_MARK_MEMBER_NAME(_styleName,"_styleName");
	HX_MARK_MEMBER_NAME(_inlineStyle,"_inlineStyle");
	::haxe::ui::toolkit::core::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StyleableDisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_style,"_style");
	HX_VISIT_MEMBER_NAME(_storedStyles,"_storedStyles");
	HX_VISIT_MEMBER_NAME(_styleName,"_styleName");
	HX_VISIT_MEMBER_NAME(_inlineStyle,"_inlineStyle");
	::haxe::ui::toolkit::core::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StyleableDisplayObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"paint") ) { return paint_dyn(); }
		if (HX_FIELD_EQ(inName,"style") ) { return get_style(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { return _style; }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"styleName") ) { return get_styleName(); }
		if (HX_FIELD_EQ(inName,"get_style") ) { return get_style_dyn(); }
		if (HX_FIELD_EQ(inName,"set_style") ) { return set_style_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_styleName") ) { return _styleName; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return set_layout_dyn(); }
		if (HX_FIELD_EQ(inName,"storeStyle") ) { return storeStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlineStyle") ) { return get_inlineStyle(); }
		if (HX_FIELD_EQ(inName,"buildStyles") ) { return buildStyles_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_inlineStyle") ) { return _inlineStyle; }
		if (HX_FIELD_EQ(inName,"refreshStyle") ) { return refreshStyle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_storedStyles") ) { return _storedStyles; }
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_styleName") ) { return get_styleName_dyn(); }
		if (HX_FIELD_EQ(inName,"set_styleName") ) { return set_styleName_dyn(); }
		if (HX_FIELD_EQ(inName,"retrieveStyle") ) { return retrieveStyle_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_inlineStyle") ) { return get_inlineStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inlineStyle") ) { return set_inlineStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleableDisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return set_style(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_style") ) { _style=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"styleName") ) { return set_styleName(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_styleName") ) { _styleName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inlineStyle") ) { return set_inlineStyle(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_inlineStyle") ) { _inlineStyle=inValue.Cast< ::haxe::ui::toolkit::style::Style >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_storedStyles") ) { _storedStyles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleableDisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_style"));
	outFields->push(HX_CSTRING("_storedStyles"));
	outFields->push(HX_CSTRING("_styleName"));
	outFields->push(HX_CSTRING("_inlineStyle"));
	outFields->push(HX_CSTRING("style"));
	outFields->push(HX_CSTRING("styleName"));
	outFields->push(HX_CSTRING("inlineStyle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(StyleableDisplayObject_obj,_style),HX_CSTRING("_style")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleableDisplayObject_obj,_storedStyles),HX_CSTRING("_storedStyles")},
	{hx::fsString,(int)offsetof(StyleableDisplayObject_obj,_styleName),HX_CSTRING("_styleName")},
	{hx::fsObject /*::haxe::ui::toolkit::style::Style*/ ,(int)offsetof(StyleableDisplayObject_obj,_inlineStyle),HX_CSTRING("_inlineStyle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_style"),
	HX_CSTRING("_storedStyles"),
	HX_CSTRING("_styleName"),
	HX_CSTRING("_inlineStyle"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("paint"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("set_id"),
	HX_CSTRING("set_layout"),
	HX_CSTRING("get_style"),
	HX_CSTRING("set_style"),
	HX_CSTRING("get_styleName"),
	HX_CSTRING("set_styleName"),
	HX_CSTRING("get_inlineStyle"),
	HX_CSTRING("set_inlineStyle"),
	HX_CSTRING("storeStyle"),
	HX_CSTRING("retrieveStyle"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("buildStyles"),
	HX_CSTRING("refreshStyle"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleableDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleableDisplayObject_obj::__mClass,"__mClass");
};

#endif

Class StyleableDisplayObject_obj::__mClass;

void StyleableDisplayObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.StyleableDisplayObject"), hx::TCanCast< StyleableDisplayObject_obj> ,sStaticFields,sMemberFields,
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

void StyleableDisplayObject_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
