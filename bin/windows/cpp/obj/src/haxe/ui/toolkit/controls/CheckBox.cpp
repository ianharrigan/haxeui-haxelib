#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_CheckBox
#include <haxe/ui/toolkit/controls/CheckBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_CheckBoxValue
#include <haxe/ui/toolkit/controls/CheckBoxValue.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Value
#include <haxe/ui/toolkit/controls/Value.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
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

Void CheckBox_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","new",0x63a533ab,"haxe.ui.toolkit.controls.CheckBox.new","haxe/ui/toolkit/controls/CheckBox.hx",21,0xf2eee4e5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct();
	HX_STACK_LINE(23)
	this->set_autoSize(true);
	HX_STACK_LINE(24)
	this->get_sprite()->buttonMode = true;
	HX_STACK_LINE(25)
	this->get_sprite()->useHandCursor = true;
	HX_STACK_LINE(26)
	::haxe::ui::toolkit::controls::CheckBoxValue _g = ::haxe::ui::toolkit::controls::CheckBoxValue_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	this->_value = _g;
	HX_STACK_LINE(27)
	::haxe::ui::toolkit::controls::Text _g1 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(27)
	this->_label = _g1;
	HX_STACK_LINE(28)
	::haxe::ui::toolkit::layout::HorizontalLayout _g2 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(28)
	this->set_layout(_g2);
}
;
	return null();
}

//CheckBox_obj::~CheckBox_obj() { }

Dynamic CheckBox_obj::__CreateEmpty() { return  new CheckBox_obj; }
hx::ObjectPtr< CheckBox_obj > CheckBox_obj::__new()
{  hx::ObjectPtr< CheckBox_obj > result = new CheckBox_obj();
	result->__construct();
	return result;}

Dynamic CheckBox_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CheckBox_obj > result = new CheckBox_obj();
	result->__construct();
	return result;}

hx::Object *CheckBox_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Void CheckBox_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","initialize",0x49739d65,"haxe.ui.toolkit.controls.CheckBox.initialize","haxe/ui/toolkit/controls/CheckBox.hx",34,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this->super::initialize();
		HX_STACK_LINE(37)
		this->_value->set_verticalAlign(HX_CSTRING("center"));
		HX_STACK_LINE(38)
		this->addChild(this->_value);
		HX_STACK_LINE(39)
		this->addChild(this->_label);

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/controls/CheckBox.hx",42,0xf2eee4e5)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(42)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::CheckBox >()->_value->cycleValues();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(41)
		this->_label->addEventListener(HX_CSTRING("haxeui_click"), Dynamic(new _Function_1_1(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/toolkit/controls/CheckBox.hx",46,0xf2eee4e5)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(46)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::CheckBox >()->set_selected((_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::CheckBox >()->_value->get_value() == HX_CSTRING("selected")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(45)
		this->_value->addEventListener(HX_CSTRING("haxeui_change"), Dynamic(new _Function_1_2(_g)),null(),null(),null());
	}
return null();
}


::String CheckBox_obj::get_text( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_text",0x1540550b,"haxe.ui.toolkit.controls.CheckBox.get_text","haxe/ui/toolkit/controls/CheckBox.hx",54,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return this->_label->get_text();
}


::String CheckBox_obj::set_text( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_text",0xc39dae7f,"haxe.ui.toolkit.controls.CheckBox.set_text","haxe/ui/toolkit/controls/CheckBox.hx",57,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(58)
	::String _g = this->super::set_text(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	value = _g;
	HX_STACK_LINE(59)
	this->_label->set_text(value);
	HX_STACK_LINE(60)
	return value;
}


bool CheckBox_obj::get_selected( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","get_selected",0xb34239b9,"haxe.ui.toolkit.controls.CheckBox.get_selected","haxe/ui/toolkit/controls/CheckBox.hx",73,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return this->_selected;
}


HX_DEFINE_DYNAMIC_FUNC0(CheckBox_obj,get_selected,return )

bool CheckBox_obj::set_selected( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","set_selected",0xc83b5d2d,"haxe.ui.toolkit.controls.CheckBox.set_selected","haxe/ui/toolkit/controls/CheckBox.hx",76,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(77)
	if (((this->_selected == value))){
		HX_STACK_LINE(78)
		return value;
	}
	HX_STACK_LINE(81)
	this->_value->set_value((  (((value == true))) ? Dynamic(HX_CSTRING("selected")) : Dynamic(HX_CSTRING("unselected")) ));
	HX_STACK_LINE(82)
	this->_selected = value;
	HX_STACK_LINE(84)
	::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(event,"event");
	HX_STACK_LINE(85)
	this->dispatchEvent(event);
	HX_STACK_LINE(87)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CheckBox_obj,set_selected,return )

Void CheckBox_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","applyStyle",0x8c278cf8,"haxe.ui.toolkit.controls.CheckBox.applyStyle","haxe/ui/toolkit/controls/CheckBox.hx",93,0xf2eee4e5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		this->super::applyStyle();
		HX_STACK_LINE(97)
		if (((this->_label != null()))){
			HX_STACK_LINE(98)
			::haxe::ui::toolkit::style::Style labelStyle = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(labelStyle,"labelStyle");
			HX_STACK_LINE(99)
			if (((this->_style != null()))){
				HX_STACK_LINE(100)
				::String _g = this->_style->get_fontName();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(100)
				labelStyle->set_fontName(_g);
				HX_STACK_LINE(101)
				Float _g1 = this->_style->get_fontSize();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(101)
				labelStyle->set_fontSize(_g1);
				HX_STACK_LINE(102)
				bool _g2 = this->_style->get_fontEmbedded();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(102)
				labelStyle->set_fontEmbedded(_g2);
				HX_STACK_LINE(103)
				int _g3 = this->_style->get_color();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(103)
				labelStyle->set_color(_g3);
			}
			HX_STACK_LINE(105)
			this->_label->set_style(labelStyle);
		}
	}
return null();
}


Dynamic CheckBox_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","clone",0x2d4c1f68,"haxe.ui.toolkit.controls.CheckBox.clone","haxe/ui/toolkit/controls/CheckBox.hx",1,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::CheckBox c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool _g = this->get_selected();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_selected(_g);
	HX_STACK_LINE(4)
	return c;
}


Dynamic CheckBox_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CheckBox","self",0xd03609e1,"haxe.ui.toolkit.controls.CheckBox.self","haxe/ui/toolkit/controls/CheckBox.hx",2,0xf2eee4e5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::CheckBox_obj::__new();
}



CheckBox_obj::CheckBox_obj()
{
}

void CheckBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CheckBox);
	HX_MARK_MEMBER_NAME(_value,"_value");
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CheckBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_value,"_value");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CheckBox_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { return _value; }
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"selected") ) { return get_selected(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { return _selected; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_selected") ) { return get_selected_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected") ) { return set_selected_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CheckBox_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_value") ) { _value=inValue.Cast< ::haxe::ui::toolkit::controls::CheckBoxValue >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"selected") ) { return set_selected(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_value"));
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("_selected"));
	outFields->push(HX_CSTRING("selected"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::CheckBoxValue*/ ,(int)offsetof(CheckBox_obj,_value),HX_CSTRING("_value")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(CheckBox_obj,_label),HX_CSTRING("_label")},
	{hx::fsBool,(int)offsetof(CheckBox_obj,_selected),HX_CSTRING("_selected")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_value"),
	HX_CSTRING("_label"),
	HX_CSTRING("_selected"),
	HX_CSTRING("initialize"),
	HX_CSTRING("get_text"),
	HX_CSTRING("set_text"),
	HX_CSTRING("get_selected"),
	HX_CSTRING("set_selected"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CheckBox_obj::__mClass,"__mClass");
};

#endif

Class CheckBox_obj::__mClass;

void CheckBox_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.CheckBox"), hx::TCanCast< CheckBox_obj> ,sStaticFields,sMemberFields,
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

void CheckBox_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
