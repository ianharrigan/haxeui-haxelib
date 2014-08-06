#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer
#include <haxe/ui/toolkit/core/renderers/BasicItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace renderers{

Void BasicItemRenderer_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","new",0xe6fa9bab,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.new","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",15,0x1902ba66)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	::haxe::ui::toolkit::layout::HorizontalLayout _g = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	this->_layout = _g;
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::controls::Text _g1 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(19)
	this->_maintext = _g1;
	HX_STACK_LINE(20)
	this->_maintext->set_text(HX_CSTRING("Text"));
	HX_STACK_LINE(21)
	this->_maintext->set_id(HX_CSTRING("text"));
	HX_STACK_LINE(22)
	this->_maintext->set_verticalAlign(HX_CSTRING("center"));
	HX_STACK_LINE(23)
	this->_maintext->set_percentWidth((int)100);
	HX_STACK_LINE(24)
	this->addChild(this->_maintext);
}
;
	return null();
}

//BasicItemRenderer_obj::~BasicItemRenderer_obj() { }

Dynamic BasicItemRenderer_obj::__CreateEmpty() { return  new BasicItemRenderer_obj; }
hx::ObjectPtr< BasicItemRenderer_obj > BasicItemRenderer_obj::__new()
{  hx::ObjectPtr< BasicItemRenderer_obj > result = new BasicItemRenderer_obj();
	result->__construct();
	return result;}

Dynamic BasicItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BasicItemRenderer_obj > result = new BasicItemRenderer_obj();
	result->__construct();
	return result;}

Dynamic BasicItemRenderer_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","set_data",0x1f18cffc,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.set_data","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",27,0x1902ba66)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(28)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(29)
	if (((value->__Field(HX_CSTRING("icon"),true) != null()))){
		HX_STACK_LINE(30)
		if (((this->_icon == null()))){
			HX_STACK_LINE(31)
			::haxe::ui::toolkit::controls::Image _g = ::haxe::ui::toolkit::controls::Image_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(31)
			this->_icon = _g;
			HX_STACK_LINE(32)
			this->_icon->set_id(HX_CSTRING("icon"));
			HX_STACK_LINE(33)
			this->_icon->set_verticalAlign(HX_CSTRING("center"));
			HX_STACK_LINE(34)
			this->addChildAt(this->_icon,n);
			HX_STACK_LINE(35)
			(n)++;
		}
	}
	HX_STACK_LINE(38)
	if (((value->__Field(HX_CSTRING("subtext"),true) != null()))){
		HX_STACK_LINE(39)
		if (((this->_vbox == null()))){
			HX_STACK_LINE(40)
			::haxe::ui::toolkit::containers::VBox _g1 = ::haxe::ui::toolkit::containers::VBox_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(40)
			this->_vbox = _g1;
			HX_STACK_LINE(41)
			this->_vbox->set_percentWidth((int)100);
			HX_STACK_LINE(42)
			this->addChildAt(this->_vbox,n);
		}
		HX_STACK_LINE(44)
		if (((this->_subtext == null()))){
			HX_STACK_LINE(45)
			::haxe::ui::toolkit::controls::Text _g2 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(45)
			this->_subtext = _g2;
			HX_STACK_LINE(46)
			this->_subtext->set_id(HX_CSTRING("subtext"));
			HX_STACK_LINE(47)
			this->_subtext->set_percentWidth((int)100);
			HX_STACK_LINE(48)
			this->_subtext->set_multiline(true);
			HX_STACK_LINE(49)
			this->_subtext->set_wrapLines(true);
			HX_STACK_LINE(50)
			this->removeChild(this->_maintext,false);
			HX_STACK_LINE(51)
			this->_vbox->addChild(this->_maintext);
			HX_STACK_LINE(52)
			this->_vbox->addChild(this->_subtext);
		}
	}
	HX_STACK_LINE(55)
	return this->super::set_data(value);
}


Dynamic BasicItemRenderer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","clone",0x3ecb8768,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.clone","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",1,0x1902ba66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic BasicItemRenderer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.BasicItemRenderer","self",0x379ba1e1,"haxe.ui.toolkit.core.renderers.BasicItemRenderer.self","haxe/ui/toolkit/core/renderers/BasicItemRenderer.hx",2,0x1902ba66)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::renderers::BasicItemRenderer_obj::__new();
}



BasicItemRenderer_obj::BasicItemRenderer_obj()
{
}

void BasicItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BasicItemRenderer);
	HX_MARK_MEMBER_NAME(_vbox,"_vbox");
	HX_MARK_MEMBER_NAME(_maintext,"_maintext");
	HX_MARK_MEMBER_NAME(_subtext,"_subtext");
	HX_MARK_MEMBER_NAME(_icon,"_icon");
	::haxe::ui::toolkit::core::renderers::ItemRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BasicItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_vbox,"_vbox");
	HX_VISIT_MEMBER_NAME(_maintext,"_maintext");
	HX_VISIT_MEMBER_NAME(_subtext,"_subtext");
	HX_VISIT_MEMBER_NAME(_icon,"_icon");
	::haxe::ui::toolkit::core::renderers::ItemRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BasicItemRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_vbox") ) { return _vbox; }
		if (HX_FIELD_EQ(inName,"_icon") ) { return _icon; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_subtext") ) { return _subtext; }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_maintext") ) { return _maintext; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BasicItemRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vbox") ) { _vbox=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_icon") ) { _icon=inValue.Cast< ::haxe::ui::toolkit::controls::Image >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_subtext") ) { _subtext=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_maintext") ) { _maintext=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BasicItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_vbox"));
	outFields->push(HX_CSTRING("_maintext"));
	outFields->push(HX_CSTRING("_subtext"));
	outFields->push(HX_CSTRING("_icon"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(BasicItemRenderer_obj,_vbox),HX_CSTRING("_vbox")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(BasicItemRenderer_obj,_maintext),HX_CSTRING("_maintext")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(BasicItemRenderer_obj,_subtext),HX_CSTRING("_subtext")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Image*/ ,(int)offsetof(BasicItemRenderer_obj,_icon),HX_CSTRING("_icon")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_vbox"),
	HX_CSTRING("_maintext"),
	HX_CSTRING("_subtext"),
	HX_CSTRING("_icon"),
	HX_CSTRING("set_data"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BasicItemRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BasicItemRenderer_obj::__mClass,"__mClass");
};

#endif

Class BasicItemRenderer_obj::__mClass;

void BasicItemRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.renderers.BasicItemRenderer"), hx::TCanCast< BasicItemRenderer_obj> ,sStaticFields,sMemberFields,
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

void BasicItemRenderer_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace renderers
