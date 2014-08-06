#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_controls_CalendarLayout
#include <haxe/ui/toolkit/controls/CalendarLayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
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

Void CalendarLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.CalendarLayout","new",0x5f209890,"haxe.ui.toolkit.controls.CalendarLayout.new","haxe/ui/toolkit/controls/Calendar.hx",158,0xe933a32a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(158)
	super::__construct();
}
;
	return null();
}

//CalendarLayout_obj::~CalendarLayout_obj() { }

Dynamic CalendarLayout_obj::__CreateEmpty() { return  new CalendarLayout_obj; }
hx::ObjectPtr< CalendarLayout_obj > CalendarLayout_obj::__new()
{  hx::ObjectPtr< CalendarLayout_obj > result = new CalendarLayout_obj();
	result->__construct();
	return result;}

Dynamic CalendarLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CalendarLayout_obj > result = new CalendarLayout_obj();
	result->__construct();
	return result;}

Void CalendarLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.CalendarLayout","resizeChildren",0x5f6d0923,"haxe.ui.toolkit.controls.CalendarLayout.resizeChildren","haxe/ui/toolkit/controls/Calendar.hx",164,0xe933a32a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(165)
		this->super::resizeChildren();
		HX_STACK_LINE(166)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > children = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(children,"children");
		HX_STACK_LINE(167)
		Float _g = this->get_usableWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		int _g1 = this->get_spacingX();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		int _g2 = ((int)6 * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(167)
		Float _g3 = (_g - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(167)
		Float _g4 = this->get_padding()->get_left();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(167)
		Float _g5 = this->get_padding()->get_right();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(167)
		Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(167)
		Float ucx = (_g3 + _g6);		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(168)
		Float _g7 = this->get_usableHeight();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(168)
		int _g8 = this->get_spacingY();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(168)
		int _g9 = ((int)5 * _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(168)
		Float _g10 = (_g7 - _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(168)
		Float _g11 = this->get_padding()->get_top();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(168)
		Float _g12 = this->get_padding()->get_bottom();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(168)
		Float _g13 = (_g11 + _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(168)
		Float ucy = (_g10 + _g13);		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(169)
		Float bcx = (Float(ucx) / Float((int)7));		HX_STACK_VAR(bcx,"bcx");
		HX_STACK_LINE(170)
		Float bcy = (Float(ucy) / Float((int)6));		HX_STACK_VAR(bcy,"bcy");
		HX_STACK_LINE(172)
		Float xpos = (int)0;		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(173)
		Float ypos = (int)0;		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(174)
		int n = (int)0;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			int _g14 = (int)0;		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(175)
			while((true)){
				HX_STACK_LINE(175)
				if ((!(((_g14 < (int)6))))){
					HX_STACK_LINE(175)
					break;
				}
				HX_STACK_LINE(175)
				int i = (_g14)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(176)
				{
					HX_STACK_LINE(176)
					int _g15 = (int)0;		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(176)
					while((true)){
						HX_STACK_LINE(176)
						if ((!(((_g15 < (int)7))))){
							HX_STACK_LINE(176)
							break;
						}
						HX_STACK_LINE(176)
						int j = (_g15)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(177)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject child = children->__get(n);		HX_STACK_VAR(child,"child");
						HX_STACK_LINE(178)
						if (((child != null()))){
							HX_STACK_LINE(179)
							child->__Field(HX_CSTRING("set_x"),true)(xpos);
							HX_STACK_LINE(180)
							child->__Field(HX_CSTRING("set_y"),true)(ypos);
							HX_STACK_LINE(181)
							child->__Field(HX_CSTRING("set_width"),true)(bcx);
							HX_STACK_LINE(182)
							child->__Field(HX_CSTRING("set_height"),true)(bcy);
							HX_STACK_LINE(183)
							(n)++;
							HX_STACK_LINE(185)
							int _g141 = this->get_spacingX();		HX_STACK_VAR(_g141,"_g141");
							HX_STACK_LINE(185)
							Float _g151 = (bcx + _g141);		HX_STACK_VAR(_g151,"_g151");
							HX_STACK_LINE(185)
							hx::AddEq(xpos,_g151);
						}
					}
				}
				HX_STACK_LINE(188)
				xpos = (int)0;
				HX_STACK_LINE(189)
				int _g16 = this->get_spacingY();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(189)
				Float _g17 = (bcy + _g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(189)
				hx::AddEq(ypos,_g17);
			}
		}
	}
return null();
}


Dynamic CalendarLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CalendarLayout","clone",0x8a16478d,"haxe.ui.toolkit.controls.CalendarLayout.clone","haxe/ui/toolkit/controls/CalendarLayout.hx",1,0xac62f3a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::CalendarLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic CalendarLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.CalendarLayout","self",0xe0b2ed5c,"haxe.ui.toolkit.controls.CalendarLayout.self","haxe/ui/toolkit/controls/CalendarLayout.hx",2,0xac62f3a0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::CalendarLayout_obj::__new();
}



CalendarLayout_obj::CalendarLayout_obj()
{
}

Dynamic CalendarLayout_obj::__Field(const ::String &inName,bool inCallProp)
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
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CalendarLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CalendarLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CalendarLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CalendarLayout_obj::__mClass,"__mClass");
};

#endif

Class CalendarLayout_obj::__mClass;

void CalendarLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.CalendarLayout"), hx::TCanCast< CalendarLayout_obj> ,sStaticFields,sMemberFields,
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

void CalendarLayout_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Calendar.hx",156,0xe933a32a)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/Calendar.hx",156,0xe933a32a)
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
