#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollViewLayout
#include <haxe/ui/toolkit/containers/ScrollViewLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ScrollViewLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","new",0x706f4dc8,"haxe.ui.toolkit.containers.ScrollViewLayout.new","haxe/ui/toolkit/containers/ScrollView.hx",605,0x89f00132)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(606)
	this->_inlineScrolls = false;
	HX_STACK_LINE(609)
	super::__construct();
}
;
	return null();
}

//ScrollViewLayout_obj::~ScrollViewLayout_obj() { }

Dynamic ScrollViewLayout_obj::__CreateEmpty() { return  new ScrollViewLayout_obj; }
hx::ObjectPtr< ScrollViewLayout_obj > ScrollViewLayout_obj::__new()
{  hx::ObjectPtr< ScrollViewLayout_obj > result = new ScrollViewLayout_obj();
	result->__construct();
	return result;}

Dynamic ScrollViewLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScrollViewLayout_obj > result = new ScrollViewLayout_obj();
	result->__construct();
	return result;}

Void ScrollViewLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","resizeChildren",0x0f406eeb,"haxe.ui.toolkit.containers.ScrollViewLayout.resizeChildren","haxe/ui/toolkit/containers/ScrollView.hx",613,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(613)
		this->super::resizeChildren();
	}
return null();
}


Void ScrollViewLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","repositionChildren",0xf2b0d853,"haxe.ui.toolkit.containers.ScrollViewLayout.repositionChildren","haxe/ui/toolkit/containers/ScrollView.hx",616,0x89f00132)
		HX_STACK_THIS(this)
		HX_STACK_LINE(617)
		this->super::repositionChildren();
		HX_STACK_LINE(619)
		::haxe::ui::toolkit::controls::HScroll hscroll = this->get_container()->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::HScroll >());		HX_STACK_VAR(hscroll,"hscroll");
		HX_STACK_LINE(620)
		::haxe::ui::toolkit::controls::VScroll vscroll = this->get_container()->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(vscroll,"vscroll");
		HX_STACK_LINE(621)
		if (((hscroll != null()))){
			HX_STACK_LINE(622)
			Float _g = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(622)
			Float _g1 = hscroll->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(622)
			Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(622)
			Float _g3 = this->get_padding()->get_bottom();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(622)
			Float _g4 = (_g2 - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(622)
			hscroll->set_y(_g4);
		}
		HX_STACK_LINE(624)
		if (((vscroll != null()))){
			HX_STACK_LINE(625)
			Float _g5 = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(625)
			Float _g6 = vscroll->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(625)
			Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(625)
			Float _g8 = this->get_padding()->get_right();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(625)
			Float _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(625)
			vscroll->set_x(_g9);
		}
	}
return null();
}


Float ScrollViewLayout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","get_usableWidth",0x2584b8ed,"haxe.ui.toolkit.containers.ScrollViewLayout.get_usableWidth","haxe/ui/toolkit/containers/ScrollView.hx",630,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(631)
	Float ucx = this->get_innerWidth();		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(632)
	::haxe::ui::toolkit::controls::VScroll vscroll = this->get_container()->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::VScroll >());		HX_STACK_VAR(vscroll,"vscroll");
	struct _Function_1_1{
		inline static bool Block( ::haxe::ui::toolkit::controls::VScroll &vscroll){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",633,0x89f00132)
			{
				HX_STACK_LINE(633)
				bool _g = vscroll->get_visible();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(633)
				return (_g == true);
			}
			return null();
		}
	};
	HX_STACK_LINE(633)
	if (((  (((  (((vscroll != null()))) ? bool(_Function_1_1::Block(vscroll)) : bool(false) ))) ? bool((this->_inlineScrolls == false)) : bool(false) ))){
		HX_STACK_LINE(634)
		Float _g1 = vscroll->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(634)
		int _g2 = this->get_spacingX();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(634)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(634)
		hx::SubEq(ucx,_g3);
	}
	HX_STACK_LINE(636)
	return ucx;
}


Float ScrollViewLayout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","get_usableHeight",0x64ec8f20,"haxe.ui.toolkit.containers.ScrollViewLayout.get_usableHeight","haxe/ui/toolkit/containers/ScrollView.hx",640,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(641)
	Float ucy = this->get_innerHeight();		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(642)
	::haxe::ui::toolkit::controls::HScroll hscroll = this->get_container()->findChildAs(hx::ClassOf< ::haxe::ui::toolkit::controls::HScroll >());		HX_STACK_VAR(hscroll,"hscroll");
	HX_STACK_LINE(643)
	if (((  (((  (((hscroll != null()))) ? bool(hscroll->get_visible()) : bool(false) ))) ? bool((this->_inlineScrolls == false)) : bool(false) ))){
		HX_STACK_LINE(644)
		Float _g = hscroll->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(644)
		int _g1 = this->get_spacingY();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(644)
		Float _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(644)
		hx::SubEq(ucy,_g2);
	}
	HX_STACK_LINE(646)
	return ucy;
}


bool ScrollViewLayout_obj::get_inlineScrolls( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","get_inlineScrolls",0xfe65ad2c,"haxe.ui.toolkit.containers.ScrollViewLayout.get_inlineScrolls","haxe/ui/toolkit/containers/ScrollView.hx",655,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_LINE(655)
	return this->_inlineScrolls;
}


HX_DEFINE_DYNAMIC_FUNC0(ScrollViewLayout_obj,get_inlineScrolls,return )

bool ScrollViewLayout_obj::set_inlineScrolls( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","set_inlineScrolls",0x21d38538,"haxe.ui.toolkit.containers.ScrollViewLayout.set_inlineScrolls","haxe/ui/toolkit/containers/ScrollView.hx",658,0x89f00132)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(659)
	this->_inlineScrolls = value;
	HX_STACK_LINE(660)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ScrollViewLayout_obj,set_inlineScrolls,return )

Dynamic ScrollViewLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","clone",0x9466bac5,"haxe.ui.toolkit.containers.ScrollViewLayout.clone","haxe/ui/toolkit/containers/ScrollViewLayout.hx",1,0xb06587a8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ScrollViewLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ScrollViewLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ScrollViewLayout","self",0xf442c924,"haxe.ui.toolkit.containers.ScrollViewLayout.self","haxe/ui/toolkit/containers/ScrollViewLayout.hx",2,0xb06587a8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::ScrollViewLayout_obj::__new();
}



ScrollViewLayout_obj::ScrollViewLayout_obj()
{
}

Dynamic ScrollViewLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inlineScrolls") ) { return get_inlineScrolls(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_inlineScrolls") ) { return _inlineScrolls; }
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_inlineScrolls") ) { return get_inlineScrolls_dyn(); }
		if (HX_FIELD_EQ(inName,"set_inlineScrolls") ) { return set_inlineScrolls_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScrollViewLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"inlineScrolls") ) { return set_inlineScrolls(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_inlineScrolls") ) { _inlineScrolls=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScrollViewLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_inlineScrolls"));
	outFields->push(HX_CSTRING("inlineScrolls"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ScrollViewLayout_obj,_inlineScrolls),HX_CSTRING("_inlineScrolls")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_inlineScrolls"),
	HX_CSTRING("resizeChildren"),
	HX_CSTRING("repositionChildren"),
	HX_CSTRING("get_usableWidth"),
	HX_CSTRING("get_usableHeight"),
	HX_CSTRING("get_inlineScrolls"),
	HX_CSTRING("set_inlineScrolls"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScrollViewLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScrollViewLayout_obj::__mClass,"__mClass");
};

#endif

Class ScrollViewLayout_obj::__mClass;

void ScrollViewLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.ScrollViewLayout"), hx::TCanCast< ScrollViewLayout_obj> ,sStaticFields,sMemberFields,
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

void ScrollViewLayout_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",605,0x89f00132)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ScrollView.hx",605,0x89f00132)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("exclude") , null(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_CSTRING("obj") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
