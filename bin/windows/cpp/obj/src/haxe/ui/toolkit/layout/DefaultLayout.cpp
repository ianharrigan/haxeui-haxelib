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
namespace layout{

Void DefaultLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","new",0xb4440a9b,"haxe.ui.toolkit.layout.DefaultLayout.new","haxe/ui/toolkit/layout/DefaultLayout.hx",5,0x34f830b5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(5)
	super::__construct();
}
;
	return null();
}

//DefaultLayout_obj::~DefaultLayout_obj() { }

Dynamic DefaultLayout_obj::__CreateEmpty() { return  new DefaultLayout_obj; }
hx::ObjectPtr< DefaultLayout_obj > DefaultLayout_obj::__new()
{  hx::ObjectPtr< DefaultLayout_obj > result = new DefaultLayout_obj();
	result->__construct();
	return result;}

Dynamic DefaultLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultLayout_obj > result = new DefaultLayout_obj();
	result->__construct();
	return result;}

Void DefaultLayout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","resizeChildren",0x39348cf8,"haxe.ui.toolkit.layout.DefaultLayout.resizeChildren","haxe/ui/toolkit/layout/DefaultLayout.hx",11,0x34f830b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		this->super::resizeChildren();
		HX_STACK_LINE(13)
		Float ucx = this->get_usableWidth();		HX_STACK_VAR(ucx,"ucx");
		HX_STACK_LINE(14)
		Float ucy = this->get_usableHeight();		HX_STACK_VAR(ucy,"ucy");
		HX_STACK_LINE(15)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(16)
		Float totalHeight = (int)0;		HX_STACK_VAR(totalHeight,"totalHeight");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(17)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(17)
			while((true)){
				HX_STACK_LINE(17)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(17)
					break;
				}
				HX_STACK_LINE(17)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(17)
				++(_g);
				HX_STACK_LINE(19)
				bool _g2 = child->__Field(HX_CSTRING("get_visible"),true)();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(19)
				if (((_g2 == false))){
					HX_STACK_LINE(20)
					continue;
				}
				HX_STACK_LINE(23)
				Float _g11 = child->__Field(HX_CSTRING("get_percentWidth"),true)();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(23)
				if (((_g11 > (int)-1))){
					HX_STACK_LINE(24)
					Float _g21 = child->__Field(HX_CSTRING("get_percentWidth"),true)();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(24)
					Float _g3 = (ucx * _g21);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(24)
					Float _g4 = (Float(_g3) / Float((int)100));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(24)
					child->__Field(HX_CSTRING("set_width"),true)(_g4);
				}
				HX_STACK_LINE(27)
				Float _g5 = child->__Field(HX_CSTRING("get_percentHeight"),true)();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(27)
				if (((_g5 > (int)-1))){
					HX_STACK_LINE(28)
					Float _g6 = child->__Field(HX_CSTRING("get_percentHeight"),true)();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(28)
					Float _g7 = (ucy * _g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(28)
					Float _g8 = (Float(_g7) / Float((int)100));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(28)
					child->__Field(HX_CSTRING("set_height"),true)(_g8);
				}
				HX_STACK_LINE(31)
				Float _g9 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(31)
				if (((_g9 > totalWidth))){
					HX_STACK_LINE(32)
					Float _g10 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(32)
					totalWidth = _g10;
				}
				HX_STACK_LINE(34)
				Float _g111 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(34)
				if (((_g111 > totalHeight))){
					HX_STACK_LINE(35)
					Float _g12 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(35)
					totalHeight = _g12;
				}
			}
		}
		HX_STACK_LINE(39)
		if ((this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)())){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::layout::DefaultLayout_obj > __this,Float &totalWidth){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/layout/DefaultLayout.hx",40,0x34f830b5)
					{
						HX_STACK_LINE(40)
						Float _g13 = __this->get_innerWidth();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(40)
						return (totalWidth != _g13);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::layout::DefaultLayout_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/layout/DefaultLayout.hx",40,0x34f830b5)
					{
						HX_STACK_LINE(40)
						Float _g14 = __this->get_container()->__Field(HX_CSTRING("get_percentWidth"),true)();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(40)
						return (_g14 == (int)-1);
					}
					return null();
				}
			};
			HX_STACK_LINE(40)
			if (((  (((  (((totalWidth > (int)0))) ? bool(_Function_2_1::Block(this,totalWidth)) : bool(false) ))) ? bool(_Function_2_2::Block(this)) : bool(false) ))){
				HX_STACK_LINE(41)
				Float _g15 = this->get_padding()->get_left();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(41)
				Float _g16 = this->get_padding()->get_right();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(41)
				Float _g17 = (_g15 + _g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(41)
				Float _g18 = (totalWidth + _g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(41)
				this->get_container()->__Field(HX_CSTRING("set_width"),true)(_g18);
			}
			struct _Function_2_3{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::layout::DefaultLayout_obj > __this,Float &totalHeight){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/layout/DefaultLayout.hx",43,0x34f830b5)
					{
						HX_STACK_LINE(43)
						Float _g19 = __this->get_innerHeight();		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(43)
						return (totalHeight != _g19);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::layout::DefaultLayout_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/layout/DefaultLayout.hx",43,0x34f830b5)
					{
						HX_STACK_LINE(43)
						Float _g20 = __this->get_container()->__Field(HX_CSTRING("get_percentHeight"),true)();		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(43)
						return (_g20 == (int)-1);
					}
					return null();
				}
			};
			HX_STACK_LINE(43)
			if (((  (((  (((totalHeight > (int)0))) ? bool(_Function_2_3::Block(this,totalHeight)) : bool(false) ))) ? bool(_Function_2_4::Block(this)) : bool(false) ))){
				HX_STACK_LINE(44)
				Float _g21 = this->get_padding()->get_top();		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(44)
				Float _g22 = this->get_padding()->get_bottom();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(44)
				Float _g23 = (_g21 + _g22);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(44)
				Float _g24 = (totalHeight + _g23);		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(44)
				this->get_container()->__Field(HX_CSTRING("set_height"),true)(_g24);
			}
		}
		else{
		}
	}
return null();
}


Void DefaultLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","repositionChildren",0xa84180e0,"haxe.ui.toolkit.layout.DefaultLayout.repositionChildren","haxe/ui/toolkit/layout/DefaultLayout.hx",50,0x34f830b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->super::repositionChildren();
		HX_STACK_LINE(52)
		Float xpos = this->get_padding()->get_left();		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(53)
		Float ypos = this->get_padding()->get_top();		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(54)
			while((true)){
				HX_STACK_LINE(54)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(54)
					break;
				}
				HX_STACK_LINE(54)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(54)
				++(_g);
				HX_STACK_LINE(56)
				bool _g2 = child->__Field(HX_CSTRING("get_visible"),true)();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(56)
				if (((_g2 == false))){
					HX_STACK_LINE(57)
					continue;
				}
				HX_STACK_LINE(60)
				child->__Field(HX_CSTRING("set_x"),true)(xpos);
				HX_STACK_LINE(61)
				child->__Field(HX_CSTRING("set_y"),true)(ypos);
			}
		}
	}
return null();
}


Dynamic DefaultLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","clone",0x04829258,"haxe.ui.toolkit.layout.DefaultLayout.clone","haxe/ui/toolkit/layout/DefaultLayout.hx",1,0x34f830b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::DefaultLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic DefaultLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.DefaultLayout","self",0x0a9344f1,"haxe.ui.toolkit.layout.DefaultLayout.self","haxe/ui/toolkit/layout/DefaultLayout.hx",2,0x34f830b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::DefaultLayout_obj::__new();
}



DefaultLayout_obj::DefaultLayout_obj()
{
}

Dynamic DefaultLayout_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic DefaultLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(DefaultLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultLayout_obj::__mClass,"__mClass");
};

#endif

Class DefaultLayout_obj::__mClass;

void DefaultLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.DefaultLayout"), hx::TCanCast< DefaultLayout_obj> ,sStaticFields,sMemberFields,
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

void DefaultLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
