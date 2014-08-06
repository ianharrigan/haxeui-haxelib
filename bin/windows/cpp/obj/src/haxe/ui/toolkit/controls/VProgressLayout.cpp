#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VProgressLayout
#include <haxe/ui/toolkit/controls/VProgressLayout.h>
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

Void VProgressLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","new",0xab6b1069,"haxe.ui.toolkit.controls.VProgressLayout.new","haxe/ui/toolkit/controls/Progress.hx",241,0x8f3b099b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(241)
	super::__construct();
}
;
	return null();
}

//VProgressLayout_obj::~VProgressLayout_obj() { }

Dynamic VProgressLayout_obj::__CreateEmpty() { return  new VProgressLayout_obj; }
hx::ObjectPtr< VProgressLayout_obj > VProgressLayout_obj::__new()
{  hx::ObjectPtr< VProgressLayout_obj > result = new VProgressLayout_obj();
	result->__construct();
	return result;}

Dynamic VProgressLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VProgressLayout_obj > result = new VProgressLayout_obj();
	result->__construct();
	return result;}

Void VProgressLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","resizeChildren",0xfa9bddea,"haxe.ui.toolkit.controls.VProgressLayout.resizeChildren","haxe/ui/toolkit/controls/Progress.hx",244,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(245)
		this->super::resizeChildren();
		HX_STACK_LINE(247)
		::haxe::ui::toolkit::core::Component background = this->get_container()->findChild(HX_CSTRING("background"),hx::ClassOf< ::haxe::ui::toolkit::core::Component >(),null());		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(248)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject value = null();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(249)
		if (((background != null()))){
			HX_STACK_LINE(250)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = background->findChild(HX_CSTRING("value"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			value = _g;
		}
		HX_STACK_LINE(253)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(253)
		scroll = hx::TCast< haxe::ui::toolkit::core::interfaces::IScrollable >::cast(this->get_container());
		HX_STACK_LINE(254)
		if (((value != null()))){
			HX_STACK_LINE(255)
			Float ucy = this->get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
			HX_STACK_LINE(257)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = this->get_container()->findChild(HX_CSTRING("thumb"),null(),null());		HX_STACK_VAR(thumb,"thumb");
			HX_STACK_LINE(258)
			if (((thumb != null()))){
				HX_STACK_LINE(259)
				Float _g1 = thumb->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(259)
				hx::SubEq(ucy,_g1);
			}
			HX_STACK_LINE(262)
			value->__Field(HX_CSTRING("set_percentHeight"),true)((int)-1);
			HX_STACK_LINE(263)
			Float _g2 = scroll->__Field(HX_CSTRING("get_pos"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(263)
			Float _g3 = scroll->__Field(HX_CSTRING("get_min"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(263)
			Float _g4 = (_g2 - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(263)
			Float _g5 = scroll->__Field(HX_CSTRING("get_max"),true)();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(263)
			Float _g6 = scroll->__Field(HX_CSTRING("get_min"),true)();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(263)
			Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(263)
			Float _g8 = (Float(_g4) / Float(_g7));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(263)
			Float cy = (_g8 * ucy);		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(265)
			if (((cy < (int)0))){
				HX_STACK_LINE(266)
				cy = (int)0;
			}
			else{
				HX_STACK_LINE(267)
				if (((cy > ucy))){
					HX_STACK_LINE(268)
					cy = ucy;
				}
			}
			HX_STACK_LINE(271)
			if (((thumb != null()))){
				HX_STACK_LINE(272)
				Float _g9 = thumb->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(272)
				Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(272)
				hx::AddEq(cy,_g10);
			}
			HX_STACK_LINE(275)
			if (((cy == (int)0))){
				HX_STACK_LINE(276)
				value->__Field(HX_CSTRING("set_visible"),true)(false);
			}
			else{
				HX_STACK_LINE(278)
				value->__Field(HX_CSTRING("set_height"),true)(cy);
				HX_STACK_LINE(279)
				value->__Field(HX_CSTRING("set_visible"),true)(true);
			}
		}
	}
return null();
}


Void VProgressLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","repositionChildren",0x0e8932d2,"haxe.ui.toolkit.controls.VProgressLayout.repositionChildren","haxe/ui/toolkit/controls/Progress.hx",284,0x8f3b099b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(285)
		this->super::repositionChildren();
		HX_STACK_LINE(287)
		::haxe::ui::toolkit::core::Component background = this->get_container()->findChild(HX_CSTRING("background"),hx::ClassOf< ::haxe::ui::toolkit::core::Component >(),null());		HX_STACK_VAR(background,"background");
		HX_STACK_LINE(288)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject value = null();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(289)
		if (((background != null()))){
			HX_STACK_LINE(290)
			Float _g = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(290)
			Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(290)
			Float _g2 = background->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(290)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(290)
			Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(290)
			background->set_x(_g4);
			HX_STACK_LINE(291)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g5 = background->findChild(HX_CSTRING("value"),null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(291)
			value = _g5;
		}
		HX_STACK_LINE(294)
		::haxe::ui::toolkit::core::interfaces::IScrollable scroll;		HX_STACK_VAR(scroll,"scroll");
		HX_STACK_LINE(294)
		scroll = hx::TCast< haxe::ui::toolkit::core::interfaces::IScrollable >::cast(this->get_container());
		HX_STACK_LINE(295)
		if (((value != null()))){
			HX_STACK_LINE(296)
			Float ucy = this->get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
			HX_STACK_LINE(297)
			Float _g6 = value->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(297)
			Float _g7 = (ucy - _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(297)
			Float _g8 = background->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_bottom"),true)();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(297)
			Float _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(297)
			value->__Field(HX_CSTRING("set_y"),true)(_g9);
			HX_STACK_LINE(299)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject thumb = this->get_container()->findChild(HX_CSTRING("thumb"),null(),null());		HX_STACK_VAR(thumb,"thumb");
			HX_STACK_LINE(300)
			if (((thumb != null()))){
				HX_STACK_LINE(301)
				Float _g10 = this->get_padding()->get_top();		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(301)
				Float _g11 = value->__Field(HX_CSTRING("get_y"),true)();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(301)
				Float _g12 = (_g10 + _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(301)
				Float _g13 = thumb->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(301)
				Float _g14 = (Float(_g13) / Float((int)2));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(301)
				Float ypos = (_g12 - _g14);		HX_STACK_VAR(ypos,"ypos");
				HX_STACK_LINE(302)
				int _g15 = ::Std_obj::_int(ypos);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(302)
				thumb->__Field(HX_CSTRING("set_y"),true)(_g15);
			}
		}
	}
return null();
}


Dynamic VProgressLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","clone",0x57d127a6,"haxe.ui.toolkit.controls.VProgressLayout.clone","haxe/ui/toolkit/controls/VProgressLayout.hx",1,0xf408cc67)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::VProgressLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic VProgressLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.VProgressLayout","self",0x55915363,"haxe.ui.toolkit.controls.VProgressLayout.self","haxe/ui/toolkit/controls/VProgressLayout.hx",2,0xf408cc67)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::VProgressLayout_obj::__new();
}



VProgressLayout_obj::VProgressLayout_obj()
{
}

Dynamic VProgressLayout_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic VProgressLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void VProgressLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(VProgressLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VProgressLayout_obj::__mClass,"__mClass");
};

#endif

Class VProgressLayout_obj::__mClass;

void VProgressLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.VProgressLayout"), hx::TCanCast< VProgressLayout_obj> ,sStaticFields,sMemberFields,
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

void VProgressLayout_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Progress.hx",239,0x8f3b099b)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Progress.hx",239,0x8f3b099b)
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
