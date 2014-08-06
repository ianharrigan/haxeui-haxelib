#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HProgressLayout
#include <haxe/ui/toolkit/controls/HProgressLayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
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
namespace controls{

Void HProgressLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","new",0x64b3f4db,"haxe.ui.toolkit.controls.HProgressLayout.new","haxe/ui/toolkit/controls/Progress.hx",173,0x8f3b099b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(173)
	super::__construct();
}
;
	return null();
}

//HProgressLayout_obj::~HProgressLayout_obj() { }

Dynamic HProgressLayout_obj::__CreateEmpty() { return  new HProgressLayout_obj; }
hx::ObjectPtr< HProgressLayout_obj > HProgressLayout_obj::__new()
{  hx::ObjectPtr< HProgressLayout_obj > result = new HProgressLayout_obj();
	result->__construct();
	return result;}

Dynamic HProgressLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HProgressLayout_obj > result = new HProgressLayout_obj();
	result->__construct();
	return result;}

Void HProgressLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","resizeChildren",0x7b344ab8,"haxe.ui.toolkit.controls.HProgressLayout.resizeChildren","haxe/ui/toolkit/controls/Progress.hx",176,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(177)
		this->super::resizeChildren();
		HX_STACK_LINE(179)
		::haxe::ui::toolkit::core::Component background = this->get_container()->findChild(HX_CSTRING("background"),hx::ClassOf< ::haxe::ui::toolkit::core::Component >(),null());		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(180)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject value = null();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(181)
		if (((background != null()))){
			HX_STACK_LINE(182)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = background->findChild(HX_CSTRING("value"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(182)
			value = _g;
		}
		HX_STACK_LINE(185)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(185)
		scroll = hx::TCast< haxe::ui::toolkit::core::interfaces::IScrollable >::cast(this->get_container());
		HX_STACK_LINE(186)
		if (((value != null()))){
			HX_STACK_LINE(187)
			Float ucx = this->get_usableWidth();		HX_STACK_VAR(ucx,"ucx");
			HX_STACK_LINE(189)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = this->get_container()->findChild(HX_CSTRING("thumb"),null(),null());		HX_STACK_VAR(thumb,"thumb");
			HX_STACK_LINE(190)
			if (((thumb != null()))){
				HX_STACK_LINE(191)
				Float _g1 = thumb->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(191)
				hx::SubEq(ucx,_g1);
			}
			HX_STACK_LINE(194)
			value->__Field(HX_CSTRING("set_percentWidth"),true)((int)-1);
			HX_STACK_LINE(195)
			Float _g2 = scroll->__Field(HX_CSTRING("get_pos"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(195)
			Float _g3 = scroll->__Field(HX_CSTRING("get_min"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(195)
			Float _g4 = (_g2 - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(195)
			Float _g5 = scroll->__Field(HX_CSTRING("get_max"),true)();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(195)
			Float _g6 = scroll->__Field(HX_CSTRING("get_min"),true)();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(195)
			Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(195)
			Float _g8 = (Float(_g4) / Float(_g7));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(195)
			Float cx = (_g8 * ucx);		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(197)
			if (((cx < (int)0))){
				HX_STACK_LINE(198)
				cx = (int)0;
			}
			else{
				HX_STACK_LINE(199)
				if (((cx > ucx))){
					HX_STACK_LINE(200)
					cx = ucx;
				}
			}
			HX_STACK_LINE(203)
			if (((thumb != null()))){
				HX_STACK_LINE(204)
				Float _g9 = thumb->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(204)
				Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(204)
				hx::AddEq(cx,_g10);
			}
			HX_STACK_LINE(207)
			if (((cx == (int)0))){
				HX_STACK_LINE(208)
				value->__Field(HX_CSTRING("set_visible"),true)(false);
			}
			else{
				HX_STACK_LINE(210)
				value->__Field(HX_CSTRING("set_width"),true)(cx);
				HX_STACK_LINE(211)
				value->__Field(HX_CSTRING("set_visible"),true)(true);
			}
		}
	}
return null();
}


Void HProgressLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","repositionChildren",0x9e531ea0,"haxe.ui.toolkit.controls.HProgressLayout.repositionChildren","haxe/ui/toolkit/controls/Progress.hx",216,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		this->super::repositionChildren();
		HX_STACK_LINE(219)
		::haxe::ui::toolkit::core::Component background = this->get_container()->findChild(HX_CSTRING("background"),hx::ClassOf< ::haxe::ui::toolkit::core::Component >(),null());		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(220)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject value = null();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(221)
		if (((background != null()))){
			HX_STACK_LINE(222)
			Float _g = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(222)
			Float _g2 = background->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(222)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(222)
			Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(222)
			background->set_y(_g4);
			HX_STACK_LINE(223)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g5 = background->findChild(HX_CSTRING("value"),null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(223)
			value = _g5;
		}
		HX_STACK_LINE(226)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(226)
		scroll = hx::TCast< haxe::ui::toolkit::core::interfaces::IScrollable >::cast(this->get_container());
		HX_STACK_LINE(227)
		if (((value != null()))){
			HX_STACK_LINE(229)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = this->get_container()->findChild(HX_CSTRING("thumb"),null(),null());		HX_STACK_VAR(thumb,"thumb");
			HX_STACK_LINE(230)
			if (((thumb != null()))){
				HX_STACK_LINE(231)
				Float _g6 = this->get_padding()->get_left();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(231)
				Float _g7 = value->__Field(HX_CSTRING("get_x"),true)();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(231)
				Float _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(231)
				Float _g9 = value->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(231)
				Float _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(231)
				Float _g11 = thumb->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(231)
				Float _g12 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(231)
				Float xpos = (_g10 - _g12);		HX_STACK_VAR(xpos,"xpos");
				HX_STACK_LINE(232)
				int _g13 = ::Std_obj::_int(xpos);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(232)
				thumb->__Field(HX_CSTRING("set_x"),true)(_g13);
			}
		}
	}
return null();
}


Dynamic HProgressLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","clone",0xa0718c98,"haxe.ui.toolkit.controls.HProgressLayout.clone","haxe/ui/toolkit/controls/HProgressLayout.hx",1,0xf291bc35)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::HProgressLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic HProgressLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.HProgressLayout","self",0xbc1052b1,"haxe.ui.toolkit.controls.HProgressLayout.self","haxe/ui/toolkit/controls/HProgressLayout.hx",2,0xf291bc35)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::HProgressLayout_obj::__new();
}



HProgressLayout_obj::HProgressLayout_obj()
{
}

Dynamic HProgressLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HProgressLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HProgressLayout_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("resizeChildren"),
	HX_CSTRING("repositionChildren"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HProgressLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HProgressLayout_obj::__mClass,"__mClass");
};

#endif

Class HProgressLayout_obj::__mClass;

void HProgressLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.HProgressLayout"), hx::TCanCast< HProgressLayout_obj> ,sStaticFields,sMemberFields,
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

void HProgressLayout_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Progress.hx",171,0x8f3b099b)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Progress.hx",171,0x8f3b099b)
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
} // end namespace controls
