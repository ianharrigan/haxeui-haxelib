#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_toolkit_layout_AbsoluteLayout
#include <haxe/ui/toolkit/layout/AbsoluteLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void AbsoluteLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.AbsoluteLayout","new",0xfbb2d655,"haxe.ui.toolkit.layout.AbsoluteLayout.new","haxe/ui/toolkit/layout/AbsoluteLayout.hx",5,0x6fedeb3b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//AbsoluteLayout_obj::~AbsoluteLayout_obj() { }

Dynamic AbsoluteLayout_obj::__CreateEmpty() { return  new AbsoluteLayout_obj; }
hx::ObjectPtr< AbsoluteLayout_obj > AbsoluteLayout_obj::__new()
{  hx::ObjectPtr< AbsoluteLayout_obj > result = new AbsoluteLayout_obj();
	result->__construct();
	return result;}

Dynamic AbsoluteLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbsoluteLayout_obj > result = new AbsoluteLayout_obj();
	result->__construct();
	return result;}

Void AbsoluteLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.AbsoluteLayout","resizeChildren",0xfd89477e,"haxe.ui.toolkit.layout.AbsoluteLayout.resizeChildren","haxe/ui/toolkit/layout/AbsoluteLayout.hx",11,0x6fedeb3b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		this->super::resizeChildren();
		HX_STACK_LINE(13)
		Float ucx = this->get_usableWidth();		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(14)
		Float ucy = this->get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(15)
		{
			HX_STACK_LINE(15)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(15)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(15)
			while((true)){
				HX_STACK_LINE(15)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(15)
					break;
				}
				HX_STACK_LINE(15)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(15)
				++(_g);
				HX_STACK_LINE(17)
				bool _g2 = child->__Field(HX_CSTRING("get_visible"),true)();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(17)
				if (((_g2 == false))){
					HX_STACK_LINE(18)
					continue;
				}
				HX_STACK_LINE(21)
				Float _g11 = child->__Field(HX_CSTRING("get_percentWidth"),true)();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(21)
				if (((_g11 > (int)-1))){
					HX_STACK_LINE(22)
					Float _g21 = child->__Field(HX_CSTRING("get_percentWidth"),true)();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(22)
					Float _g3 = (ucx * _g21);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(22)
					Float _g4 = (Float(_g3) / Float((int)100));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(22)
					child->__Field(HX_CSTRING("set_width"),true)(_g4);
				}
				HX_STACK_LINE(25)
				Float _g5 = child->__Field(HX_CSTRING("get_percentHeight"),true)();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(25)
				if (((_g5 > (int)-1))){
					HX_STACK_LINE(26)
					Float _g6 = child->__Field(HX_CSTRING("get_percentHeight"),true)();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(26)
					Float _g7 = (ucy * _g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(26)
					Float _g8 = (Float(_g7) / Float((int)100));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(26)
					child->__Field(HX_CSTRING("set_height"),true)(_g8);
				}
			}
		}
	}
return null();
}


Dynamic AbsoluteLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.AbsoluteLayout","clone",0x1e074092,"haxe.ui.toolkit.layout.AbsoluteLayout.clone","haxe/ui/toolkit/layout/AbsoluteLayout.hx",1,0x6fedeb3b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::AbsoluteLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic AbsoluteLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.AbsoluteLayout","self",0x4416bbf7,"haxe.ui.toolkit.layout.AbsoluteLayout.self","haxe/ui/toolkit/layout/AbsoluteLayout.hx",2,0x6fedeb3b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::AbsoluteLayout_obj::__new();
}



AbsoluteLayout_obj::AbsoluteLayout_obj()
{
}

Dynamic AbsoluteLayout_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic AbsoluteLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AbsoluteLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(AbsoluteLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbsoluteLayout_obj::__mClass,"__mClass");
};

#endif

Class AbsoluteLayout_obj::__mClass;

void AbsoluteLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.AbsoluteLayout"), hx::TCanCast< AbsoluteLayout_obj> ,sStaticFields,sMemberFields,
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

void AbsoluteLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
