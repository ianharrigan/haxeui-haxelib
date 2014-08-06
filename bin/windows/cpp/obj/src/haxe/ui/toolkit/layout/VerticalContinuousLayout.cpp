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
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalContinuousLayout
#include <haxe/ui/toolkit/layout/VerticalContinuousLayout.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void VerticalContinuousLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","new",0x6c53b103,"haxe.ui.toolkit.layout.VerticalContinuousLayout.new","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",8,0xd83d204d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//VerticalContinuousLayout_obj::~VerticalContinuousLayout_obj() { }

Dynamic VerticalContinuousLayout_obj::__CreateEmpty() { return  new VerticalContinuousLayout_obj; }
hx::ObjectPtr< VerticalContinuousLayout_obj > VerticalContinuousLayout_obj::__new()
{  hx::ObjectPtr< VerticalContinuousLayout_obj > result = new VerticalContinuousLayout_obj();
	result->__construct();
	return result;}

Dynamic VerticalContinuousLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VerticalContinuousLayout_obj > result = new VerticalContinuousLayout_obj();
	result->__construct();
	return result;}

Void VerticalContinuousLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","repositionChildren",0x7f4d4f78,"haxe.ui.toolkit.layout.VerticalContinuousLayout.repositionChildren","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",11,0xd83d204d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(12)
		this->super::repositionChildren();
		HX_STACK_LINE(14)
		Float xpos = this->get_padding()->get_left();		HX_STACK_VAR(xpos,"xpos");
		HX_STACK_LINE(15)
		Float ypos = this->get_padding()->get_top();		HX_STACK_VAR(ypos,"ypos");
		HX_STACK_LINE(16)
		Float _g = this->get_padding()->get_left();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		Float _g1 = this->get_padding()->get_right();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(16)
		Float usedCX = (_g + _g1);		HX_STACK_VAR(usedCX,"usedCX");
		HX_STACK_LINE(17)
		Float _g2 = this->get_padding()->get_top();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(17)
		Float _g3 = this->get_padding()->get_bottom();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(17)
		Float usedCY = (_g2 + _g3);		HX_STACK_VAR(usedCY,"usedCY");
		HX_STACK_LINE(18)
		Float colCX = (int)0;		HX_STACK_VAR(colCX,"colCX");
		HX_STACK_LINE(19)
		Array< Float > colWidths = Array_obj< Float >::__new();		HX_STACK_VAR(colWidths,"colWidths");
		HX_STACK_LINE(20)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > colChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(colChildren,"colChildren");
		HX_STACK_LINE(21)
		colWidths->push((int)0);
		HX_STACK_LINE(22)
		int col = (int)0;		HX_STACK_VAR(col,"col");
		HX_STACK_LINE(23)
		Float maxCY = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(maxCY,"maxCY");
		HX_STACK_LINE(24)
		bool _g4 = this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)();		HX_STACK_VAR(_g4,"_g4");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::layout::VerticalContinuousLayout_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",24,0xd83d204d)
				{
					HX_STACK_LINE(24)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g5 = __this->get_container()->__Field(HX_CSTRING("get_parent"),true)();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(24)
					return (_g5 != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(24)
		if (((  (((_g4 == true))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(25)
			Float _g6 = this->get_container()->__Field(HX_CSTRING("get_parent"),true)()->__Field(HX_CSTRING("get_layout"),true)()->__Field(HX_CSTRING("get_usableHeight"),true)();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(25)
			maxCY = _g6;
		}
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(28)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g11 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(28)
			while((true)){
				HX_STACK_LINE(28)
				if ((!(((_g5 < _g11->length))))){
					HX_STACK_LINE(28)
					break;
				}
				HX_STACK_LINE(28)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g11->__get(_g5);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(28)
				++(_g5);
				HX_STACK_LINE(30)
				bool _g7 = child->__Field(HX_CSTRING("get_visible"),true)();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(30)
				if (((_g7 == false))){
					HX_STACK_LINE(31)
					continue;
				}
				HX_STACK_LINE(34)
				colChildren->push(child);
				HX_STACK_LINE(35)
				Float _g8 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(35)
				int _g9 = this->get_spacingY();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(35)
				Float _g10 = (_g8 + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(35)
				hx::AddEq(usedCY,_g10);
				HX_STACK_LINE(36)
				int _g111 = this->get_spacingY();		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(36)
				Float _g12 = (usedCY - _g111);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(36)
				if (((_g12 > maxCY))){
					HX_STACK_LINE(37)
					Float _g13 = this->get_padding()->get_top();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(37)
					ypos = _g13;
					HX_STACK_LINE(38)
					colWidths->push((int)0);
					HX_STACK_LINE(39)
					int _g14 = this->get_spacingX();		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(39)
					Float _g15 = (colWidths->__get(col) + _g14);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(39)
					hx::AddEq(xpos,_g15);
					HX_STACK_LINE(40)
					(col)++;
					HX_STACK_LINE(41)
					Float _g16 = this->get_padding()->get_top();		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(41)
					Float _g17 = this->get_padding()->get_bottom();		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(41)
					Float _g18 = (_g16 + _g17);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(41)
					Float _g19 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(41)
					Float _g20 = (_g18 + _g19);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(41)
					int _g21 = this->get_spacingY();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(41)
					Float _g22 = (_g20 + _g21);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(41)
					usedCY = _g22;
					HX_STACK_LINE(43)
					Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g23 = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(43)
					colChildren = _g23;
					HX_STACK_LINE(44)
					colChildren->push(child);
				}
				HX_STACK_LINE(47)
				bool reposition = false;		HX_STACK_VAR(reposition,"reposition");
				HX_STACK_LINE(48)
				Float _g24 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(48)
				if (((_g24 > colWidths->__get(col)))){
					HX_STACK_LINE(49)
					colWidths[col] = child->__Field(HX_CSTRING("get_width"),true)();
					HX_STACK_LINE(50)
					reposition = true;
				}
				HX_STACK_LINE(53)
				Float _g25 = this->get_padding()->get_left();		HX_STACK_VAR(_g25,"_g25");
				HX_STACK_LINE(53)
				Float _g26 = this->get_padding()->get_right();		HX_STACK_VAR(_g26,"_g26");
				HX_STACK_LINE(53)
				Float _g27 = (_g25 + _g26);		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(53)
				usedCX = _g27;
				HX_STACK_LINE(54)
				{
					HX_STACK_LINE(54)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(54)
					while((true)){
						HX_STACK_LINE(54)
						if ((!(((_g21 < colWidths->length))))){
							HX_STACK_LINE(54)
							break;
						}
						HX_STACK_LINE(54)
						Float cx = colWidths->__get(_g21);		HX_STACK_VAR(cx,"cx");
						HX_STACK_LINE(54)
						++(_g21);
						HX_STACK_LINE(55)
						int _g28 = this->get_spacingX();		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(55)
						Float _g29 = (cx + _g28);		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(55)
						hx::AddEq(usedCX,_g29);
					}
				}
				HX_STACK_LINE(57)
				int _g30 = this->get_spacingX();		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(57)
				hx::SubEq(usedCX,_g30);
				HX_STACK_LINE(59)
				if ((reposition)){
					HX_STACK_LINE(60)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(60)
					while((true)){
						HX_STACK_LINE(60)
						if ((!(((_g21 < colChildren->length))))){
							HX_STACK_LINE(60)
							break;
						}
						HX_STACK_LINE(60)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject temp = colChildren->__get(_g21);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(60)
						++(_g21);
						HX_STACK_LINE(61)
						::String halign = child->__Field(HX_CSTRING("get_horizontalAlign"),true)();		HX_STACK_VAR(halign,"halign");
						HX_STACK_LINE(62)
						Float tempXpos = temp->__Field(HX_CSTRING("get_x"),true)();		HX_STACK_VAR(tempXpos,"tempXpos");
						HX_STACK_LINE(63)
						::String _switch_1 = (halign);
						if (  ( _switch_1==HX_CSTRING("center"))){
							HX_STACK_LINE(65)
							Float _g31 = temp->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(65)
							Float _g32 = (usedCX - _g31);		HX_STACK_VAR(_g32,"_g32");
							HX_STACK_LINE(65)
							Float _g33 = this->get_padding()->get_left();		HX_STACK_VAR(_g33,"_g33");
							HX_STACK_LINE(65)
							Float _g34 = (_g32 - _g33);		HX_STACK_VAR(_g34,"_g34");
							HX_STACK_LINE(65)
							Float _g35 = temp->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g35,"_g35");
							HX_STACK_LINE(65)
							Float _g36 = (Float(_g35) / Float((int)2));		HX_STACK_VAR(_g36,"_g36");
							HX_STACK_LINE(65)
							Float _g37 = ((Float(colWidths->__get(col)) / Float((int)2)) - _g36);		HX_STACK_VAR(_g37,"_g37");
							HX_STACK_LINE(65)
							Float _g38 = (_g34 - _g37);		HX_STACK_VAR(_g38,"_g38");
							HX_STACK_LINE(65)
							tempXpos = _g38;
						}
						else if (  ( _switch_1==HX_CSTRING("right"))){
							HX_STACK_LINE(67)
							Float _g39 = temp->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g39,"_g39");
							HX_STACK_LINE(67)
							Float _g40 = (usedCX - _g39);		HX_STACK_VAR(_g40,"_g40");
							HX_STACK_LINE(67)
							Float _g41 = this->get_padding()->get_left();		HX_STACK_VAR(_g41,"_g41");
							HX_STACK_LINE(67)
							Float _g42 = (_g40 - _g41);		HX_STACK_VAR(_g42,"_g42");
							HX_STACK_LINE(67)
							tempXpos = _g42;
						}
						else  {
						}
;
;
						HX_STACK_LINE(70)
						temp->__Field(HX_CSTRING("set_x"),true)(tempXpos);
					}
				}
				HX_STACK_LINE(74)
				int _g43 = this->get_spacingY();		HX_STACK_VAR(_g43,"_g43");
				HX_STACK_LINE(74)
				Float _g44 = (usedCY - _g43);		HX_STACK_VAR(_g44,"_g44");
				HX_STACK_LINE(74)
				Float _g45 = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g45,"_g45");
				HX_STACK_LINE(74)
				if (((  (((_g44 > _g45))) ? bool(this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)()) : bool(false) ))){
					HX_STACK_LINE(75)
					int _g46 = this->get_spacingY();		HX_STACK_VAR(_g46,"_g46");
					HX_STACK_LINE(75)
					Float _g47 = (usedCY - _g46);		HX_STACK_VAR(_g47,"_g47");
					HX_STACK_LINE(75)
					this->get_container()->__Field(HX_CSTRING("set_height"),true)(_g47);
				}
				HX_STACK_LINE(78)
				Float _g48 = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g48,"_g48");
				HX_STACK_LINE(78)
				if (((  (((usedCX > _g48))) ? bool(this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)()) : bool(false) ))){
					HX_STACK_LINE(79)
					this->get_container()->__Field(HX_CSTRING("set_width"),true)(usedCX);
				}
				HX_STACK_LINE(82)
				::String halign = child->__Field(HX_CSTRING("get_horizontalAlign"),true)();		HX_STACK_VAR(halign,"halign");
				HX_STACK_LINE(83)
				Float tempXPos = xpos;		HX_STACK_VAR(tempXPos,"tempXPos");
				HX_STACK_LINE(84)
				::String _switch_2 = (halign);
				if (  ( _switch_2==HX_CSTRING("center"))){
					HX_STACK_LINE(86)
					Float _g49 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g49,"_g49");
					HX_STACK_LINE(86)
					Float _g50 = (usedCX - _g49);		HX_STACK_VAR(_g50,"_g50");
					HX_STACK_LINE(86)
					Float _g51 = this->get_padding()->get_left();		HX_STACK_VAR(_g51,"_g51");
					HX_STACK_LINE(86)
					Float _g52 = (_g50 - _g51);		HX_STACK_VAR(_g52,"_g52");
					HX_STACK_LINE(86)
					Float _g53 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g53,"_g53");
					HX_STACK_LINE(86)
					Float _g54 = (Float(_g53) / Float((int)2));		HX_STACK_VAR(_g54,"_g54");
					HX_STACK_LINE(86)
					Float _g55 = ((Float(colWidths->__get(col)) / Float((int)2)) - _g54);		HX_STACK_VAR(_g55,"_g55");
					HX_STACK_LINE(86)
					Float _g56 = (_g52 - _g55);		HX_STACK_VAR(_g56,"_g56");
					HX_STACK_LINE(86)
					tempXPos = _g56;
				}
				else if (  ( _switch_2==HX_CSTRING("right"))){
					HX_STACK_LINE(88)
					Float _g57 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g57,"_g57");
					HX_STACK_LINE(88)
					Float _g58 = (usedCX - _g57);		HX_STACK_VAR(_g58,"_g58");
					HX_STACK_LINE(88)
					Float _g59 = this->get_padding()->get_left();		HX_STACK_VAR(_g59,"_g59");
					HX_STACK_LINE(88)
					Float _g60 = (_g58 - _g59);		HX_STACK_VAR(_g60,"_g60");
					HX_STACK_LINE(88)
					tempXPos = _g60;
				}
				else  {
				}
;
;
				HX_STACK_LINE(92)
				child->__Field(HX_CSTRING("set_x"),true)(tempXPos);
				HX_STACK_LINE(93)
				child->__Field(HX_CSTRING("set_y"),true)(ypos);
				HX_STACK_LINE(95)
				Float _g61 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g61,"_g61");
				HX_STACK_LINE(95)
				int _g62 = this->get_spacingY();		HX_STACK_VAR(_g62,"_g62");
				HX_STACK_LINE(95)
				Float _g63 = (_g61 + _g62);		HX_STACK_VAR(_g63,"_g63");
				HX_STACK_LINE(95)
				hx::AddEq(ypos,_g63);
			}
		}
	}
return null();
}


Dynamic VerticalContinuousLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","clone",0x9c96a2c0,"haxe.ui.toolkit.layout.VerticalContinuousLayout.clone","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",1,0xd83d204d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::VerticalContinuousLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic VerticalContinuousLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.VerticalContinuousLayout","self",0x60353989,"haxe.ui.toolkit.layout.VerticalContinuousLayout.self","haxe/ui/toolkit/layout/VerticalContinuousLayout.hx",2,0xd83d204d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::VerticalContinuousLayout_obj::__new();
}



VerticalContinuousLayout_obj::VerticalContinuousLayout_obj()
{
}

Dynamic VerticalContinuousLayout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VerticalContinuousLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void VerticalContinuousLayout_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("repositionChildren"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VerticalContinuousLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VerticalContinuousLayout_obj::__mClass,"__mClass");
};

#endif

Class VerticalContinuousLayout_obj::__mClass;

void VerticalContinuousLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.VerticalContinuousLayout"), hx::TCanCast< VerticalContinuousLayout_obj> ,sStaticFields,sMemberFields,
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

void VerticalContinuousLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
