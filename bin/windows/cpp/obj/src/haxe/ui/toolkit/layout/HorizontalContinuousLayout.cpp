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
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalContinuousLayout
#include <haxe/ui/toolkit/layout/HorizontalContinuousLayout.h>
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

Void HorizontalContinuousLayout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","new",0x8639f8f1,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.new","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",8,0xe075d01f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
}
;
	return null();
}

//HorizontalContinuousLayout_obj::~HorizontalContinuousLayout_obj() { }

Dynamic HorizontalContinuousLayout_obj::__CreateEmpty() { return  new HorizontalContinuousLayout_obj; }
hx::ObjectPtr< HorizontalContinuousLayout_obj > HorizontalContinuousLayout_obj::__new()
{  hx::ObjectPtr< HorizontalContinuousLayout_obj > result = new HorizontalContinuousLayout_obj();
	result->__construct();
	return result;}

Dynamic HorizontalContinuousLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HorizontalContinuousLayout_obj > result = new HorizontalContinuousLayout_obj();
	result->__construct();
	return result;}

Void HorizontalContinuousLayout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","repositionChildren",0x0255234a,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.repositionChildren","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",11,0xe075d01f)
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
		Float rowCY = (int)0;		HX_STACK_VAR(rowCY,"rowCY");
		HX_STACK_LINE(19)
		Array< Float > rowHeights = Array_obj< Float >::__new();		HX_STACK_VAR(rowHeights,"rowHeights");
		HX_STACK_LINE(20)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > rowChildren = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(rowChildren,"rowChildren");
		HX_STACK_LINE(21)
		rowHeights->push((int)0);
		HX_STACK_LINE(22)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(23)
		Float maxCX = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(maxCX,"maxCX");
		HX_STACK_LINE(24)
		bool _g4 = this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)();		HX_STACK_VAR(_g4,"_g4");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::layout::HorizontalContinuousLayout_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",24,0xe075d01f)
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
			Float _g6 = this->get_container()->__Field(HX_CSTRING("get_parent"),true)()->__Field(HX_CSTRING("get_layout"),true)()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(25)
			maxCX = _g6;
		}
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(27)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g11 = this->get_container()->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(27)
			while((true)){
				HX_STACK_LINE(27)
				if ((!(((_g5 < _g11->length))))){
					HX_STACK_LINE(27)
					break;
				}
				HX_STACK_LINE(27)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g11->__get(_g5);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(27)
				++(_g5);
				HX_STACK_LINE(29)
				bool _g7 = child->__Field(HX_CSTRING("get_visible"),true)();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(29)
				if (((_g7 == false))){
					HX_STACK_LINE(30)
					continue;
				}
				HX_STACK_LINE(33)
				rowChildren->push(child);
				HX_STACK_LINE(35)
				Float _g8 = child->__Field(HX_CSTRING("get_percentWidth"),true)();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(35)
				if (((_g8 > (int)-1))){
					HX_STACK_LINE(36)
					int _g9 = this->get_spacingX();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(36)
					Float _g10 = (maxCX - _g9);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(36)
					Float _g111 = child->__Field(HX_CSTRING("get_percentWidth"),true)();		HX_STACK_VAR(_g111,"_g111");
					HX_STACK_LINE(36)
					Float _g12 = (_g10 * _g111);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(36)
					Float _g13 = (Float(_g12) / Float((int)100));		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(36)
					child->__Field(HX_CSTRING("set_width"),true)(_g13);
				}
				HX_STACK_LINE(39)
				Float _g14 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(39)
				int _g15 = this->get_spacingX();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(39)
				Float _g16 = (_g14 + _g15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(39)
				hx::AddEq(usedCX,_g16);
				HX_STACK_LINE(40)
				int _g17 = this->get_spacingX();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(40)
				Float _g18 = (usedCX - _g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(40)
				if (((_g18 > maxCX))){
					HX_STACK_LINE(41)
					Float _g19 = this->get_padding()->get_left();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(41)
					xpos = _g19;
					HX_STACK_LINE(42)
					rowHeights->push((int)0);
					HX_STACK_LINE(43)
					int _g20 = this->get_spacingY();		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(43)
					Float _g21 = (rowHeights->__get(row) + _g20);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(43)
					hx::AddEq(ypos,_g21);
					HX_STACK_LINE(44)
					(row)++;
					HX_STACK_LINE(45)
					Float _g22 = this->get_padding()->get_left();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(45)
					Float _g23 = this->get_padding()->get_right();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(45)
					Float _g24 = (_g22 + _g23);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(45)
					Float _g25 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(45)
					Float _g26 = (_g24 + _g25);		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(45)
					int _g27 = this->get_spacingX();		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(45)
					Float _g28 = (_g26 + _g27);		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(45)
					usedCX = _g28;
					HX_STACK_LINE(47)
					Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g29 = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(47)
					rowChildren = _g29;
					HX_STACK_LINE(48)
					rowChildren->push(child);
				}
				HX_STACK_LINE(51)
				bool reposition = false;		HX_STACK_VAR(reposition,"reposition");
				HX_STACK_LINE(52)
				Float _g30 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(52)
				if (((_g30 > rowHeights->__get(row)))){
					HX_STACK_LINE(53)
					rowHeights[row] = child->__Field(HX_CSTRING("get_height"),true)();
					HX_STACK_LINE(54)
					reposition = true;
				}
				HX_STACK_LINE(57)
				Float _g31 = this->get_padding()->get_top();		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(57)
				Float _g32 = this->get_padding()->get_bottom();		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(57)
				Float _g33 = (_g31 + _g32);		HX_STACK_VAR(_g33,"_g33");
				HX_STACK_LINE(57)
				usedCY = _g33;
				HX_STACK_LINE(58)
				{
					HX_STACK_LINE(58)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(58)
					while((true)){
						HX_STACK_LINE(58)
						if ((!(((_g21 < rowHeights->length))))){
							HX_STACK_LINE(58)
							break;
						}
						HX_STACK_LINE(58)
						Float cy = rowHeights->__get(_g21);		HX_STACK_VAR(cy,"cy");
						HX_STACK_LINE(58)
						++(_g21);
						HX_STACK_LINE(59)
						int _g34 = this->get_spacingY();		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(59)
						Float _g35 = (cy + _g34);		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(59)
						hx::AddEq(usedCY,_g35);
					}
				}
				HX_STACK_LINE(61)
				int _g36 = this->get_spacingY();		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(61)
				hx::SubEq(usedCY,_g36);
				HX_STACK_LINE(63)
				if ((reposition)){
					HX_STACK_LINE(64)
					int _g21 = (int)0;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(64)
					while((true)){
						HX_STACK_LINE(64)
						if ((!(((_g21 < rowChildren->length))))){
							HX_STACK_LINE(64)
							break;
						}
						HX_STACK_LINE(64)
						::haxe::ui::toolkit::core::interfaces::IDisplayObject temp = rowChildren->__get(_g21);		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(64)
						++(_g21);
						HX_STACK_LINE(65)
						::String valign = temp->__Field(HX_CSTRING("get_verticalAlign"),true)();		HX_STACK_VAR(valign,"valign");
						HX_STACK_LINE(66)
						Float tempYpos = temp->__Field(HX_CSTRING("get_y"),true)();		HX_STACK_VAR(tempYpos,"tempYpos");
						HX_STACK_LINE(67)
						::String _switch_1 = (valign);
						if (  ( _switch_1==HX_CSTRING("center"))){
							HX_STACK_LINE(69)
							Float _g37 = temp->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g37,"_g37");
							HX_STACK_LINE(69)
							Float _g38 = (usedCY - _g37);		HX_STACK_VAR(_g38,"_g38");
							HX_STACK_LINE(69)
							Float _g39 = this->get_padding()->get_top();		HX_STACK_VAR(_g39,"_g39");
							HX_STACK_LINE(69)
							Float _g40 = (_g38 - _g39);		HX_STACK_VAR(_g40,"_g40");
							HX_STACK_LINE(69)
							Float _g41 = temp->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g41,"_g41");
							HX_STACK_LINE(69)
							Float _g42 = (Float(_g41) / Float((int)2));		HX_STACK_VAR(_g42,"_g42");
							HX_STACK_LINE(69)
							Float _g43 = ((Float(rowHeights->__get(row)) / Float((int)2)) - _g42);		HX_STACK_VAR(_g43,"_g43");
							HX_STACK_LINE(69)
							Float _g44 = (_g40 - _g43);		HX_STACK_VAR(_g44,"_g44");
							HX_STACK_LINE(69)
							tempYpos = _g44;
						}
						else if (  ( _switch_1==HX_CSTRING("bottom"))){
							HX_STACK_LINE(71)
							Float _g45 = temp->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g45,"_g45");
							HX_STACK_LINE(71)
							Float _g46 = (usedCY - _g45);		HX_STACK_VAR(_g46,"_g46");
							HX_STACK_LINE(71)
							Float _g47 = this->get_padding()->get_top();		HX_STACK_VAR(_g47,"_g47");
							HX_STACK_LINE(71)
							Float _g48 = (_g46 - _g47);		HX_STACK_VAR(_g48,"_g48");
							HX_STACK_LINE(71)
							tempYpos = _g48;
						}
						else  {
						}
;
;
						HX_STACK_LINE(74)
						temp->__Field(HX_CSTRING("set_y"),true)(tempYpos);
					}
				}
				HX_STACK_LINE(78)
				int _g49 = this->get_spacingX();		HX_STACK_VAR(_g49,"_g49");
				HX_STACK_LINE(78)
				Float _g50 = (usedCX - _g49);		HX_STACK_VAR(_g50,"_g50");
				HX_STACK_LINE(78)
				Float _g51 = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g51,"_g51");
				HX_STACK_LINE(78)
				if (((  (((_g50 > _g51))) ? bool(this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)()) : bool(false) ))){
					HX_STACK_LINE(79)
					int _g52 = this->get_spacingX();		HX_STACK_VAR(_g52,"_g52");
					HX_STACK_LINE(79)
					Float _g53 = (usedCX - _g52);		HX_STACK_VAR(_g53,"_g53");
					HX_STACK_LINE(79)
					this->get_container()->__Field(HX_CSTRING("set_width"),true)(_g53);
				}
				HX_STACK_LINE(82)
				Float _g54 = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g54,"_g54");
				HX_STACK_LINE(82)
				if (((  (((usedCY > _g54))) ? bool(this->get_container()->__Field(HX_CSTRING("get_autoSize"),true)()) : bool(false) ))){
					HX_STACK_LINE(83)
					this->get_container()->__Field(HX_CSTRING("set_height"),true)(usedCY);
				}
				HX_STACK_LINE(86)
				::String valign = child->__Field(HX_CSTRING("get_verticalAlign"),true)();		HX_STACK_VAR(valign,"valign");
				HX_STACK_LINE(87)
				Float tempYPos = ypos;		HX_STACK_VAR(tempYPos,"tempYPos");
				HX_STACK_LINE(88)
				::String _switch_2 = (valign);
				if (  ( _switch_2==HX_CSTRING("center"))){
					HX_STACK_LINE(90)
					Float _g55 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g55,"_g55");
					HX_STACK_LINE(90)
					Float _g56 = (usedCY - _g55);		HX_STACK_VAR(_g56,"_g56");
					HX_STACK_LINE(90)
					Float _g57 = this->get_padding()->get_top();		HX_STACK_VAR(_g57,"_g57");
					HX_STACK_LINE(90)
					Float _g58 = (_g56 - _g57);		HX_STACK_VAR(_g58,"_g58");
					HX_STACK_LINE(90)
					Float _g59 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g59,"_g59");
					HX_STACK_LINE(90)
					Float _g60 = (Float(_g59) / Float((int)2));		HX_STACK_VAR(_g60,"_g60");
					HX_STACK_LINE(90)
					Float _g61 = ((Float(rowHeights->__get(row)) / Float((int)2)) - _g60);		HX_STACK_VAR(_g61,"_g61");
					HX_STACK_LINE(90)
					Float _g62 = (_g58 - _g61);		HX_STACK_VAR(_g62,"_g62");
					HX_STACK_LINE(90)
					tempYPos = _g62;
				}
				else if (  ( _switch_2==HX_CSTRING("bottom"))){
					HX_STACK_LINE(92)
					Float _g63 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g63,"_g63");
					HX_STACK_LINE(92)
					Float _g64 = (usedCY - _g63);		HX_STACK_VAR(_g64,"_g64");
					HX_STACK_LINE(92)
					Float _g65 = this->get_padding()->get_top();		HX_STACK_VAR(_g65,"_g65");
					HX_STACK_LINE(92)
					Float _g66 = (_g64 - _g65);		HX_STACK_VAR(_g66,"_g66");
					HX_STACK_LINE(92)
					tempYPos = _g66;
				}
				else  {
				}
;
;
				HX_STACK_LINE(96)
				child->__Field(HX_CSTRING("set_x"),true)(xpos);
				HX_STACK_LINE(97)
				child->__Field(HX_CSTRING("set_y"),true)(tempYPos);
				HX_STACK_LINE(99)
				Float _g67 = child->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g67,"_g67");
				HX_STACK_LINE(99)
				int _g68 = this->get_spacingX();		HX_STACK_VAR(_g68,"_g68");
				HX_STACK_LINE(99)
				Float _g69 = (_g67 + _g68);		HX_STACK_VAR(_g69,"_g69");
				HX_STACK_LINE(99)
				hx::AddEq(xpos,_g69);
			}
		}
	}
return null();
}


Dynamic HorizontalContinuousLayout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","clone",0xb291422e,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.clone","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",1,0xe075d01f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::HorizontalContinuousLayout c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic HorizontalContinuousLayout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.HorizontalContinuousLayout","self",0xefcde1db,"haxe.ui.toolkit.layout.HorizontalContinuousLayout.self","haxe/ui/toolkit/layout/HorizontalContinuousLayout.hx",2,0xe075d01f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::HorizontalContinuousLayout_obj::__new();
}



HorizontalContinuousLayout_obj::HorizontalContinuousLayout_obj()
{
}

Dynamic HorizontalContinuousLayout_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic HorizontalContinuousLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HorizontalContinuousLayout_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(HorizontalContinuousLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorizontalContinuousLayout_obj::__mClass,"__mClass");
};

#endif

Class HorizontalContinuousLayout_obj::__mClass;

void HorizontalContinuousLayout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.HorizontalContinuousLayout"), hx::TCanCast< HorizontalContinuousLayout_obj> ,sStaticFields,sMemberFields,
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

void HorizontalContinuousLayout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
