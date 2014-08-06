#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_DefaultStyles
#include <haxe/ui/toolkit/style/DefaultStyles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void DefaultStyles_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.style.DefaultStyles","new",0xfac61f16,"haxe.ui.toolkit.style.DefaultStyles.new","haxe/ui/toolkit/style/DefaultStyles.hx",7,0xce5e3e7c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	super::__construct();
	HX_STACK_LINE(10)
	::openfl::text::Font f = ::openfl::Assets_obj::getFont(HX_CSTRING("fonts/Oxygen.ttf"),null());		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(11)
	::openfl::text::Font fb = ::openfl::Assets_obj::getFont(HX_CSTRING("fonts/Oxygen-Bold.ttf"),null());		HX_STACK_VAR(fb,"fb");
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",13,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)0,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(13)
	::haxe::ui::toolkit::style::Style _g = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_1::Block());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	this->addStyle(HX_CSTRING("Component"),_g);
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",18,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("alpha") , .7,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(18)
	::haxe::ui::toolkit::style::Style _g1 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_2::Block());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(18)
	this->addStyle(HX_CSTRING("#modalOverlay"),_g1);
	struct _Function_1_3{
		inline static Dynamic Block( ::openfl::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",23,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(23)
	::haxe::ui::toolkit::style::Style _g2 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_3::Block(f));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(23)
	this->addStyle(HX_CSTRING("Text"),_g2);
	struct _Function_1_4{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",30,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , HX_CSTRING("_sans"),false);
				__result->Add(HX_CSTRING("fontEmbedded") , false,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(30)
	::haxe::ui::toolkit::style::Style _g3 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_4::Block());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(30)
	this->addStyle(HX_CSTRING("Code"),_g3);
	struct _Function_1_5{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",37,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("spacing") , (int)5,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(37)
	::haxe::ui::toolkit::style::Style _g4 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_5::Block());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(37)
	this->addStyle(HX_CSTRING("Container"),_g4);
	struct _Function_1_6{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",42,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("spacing") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(42)
	::haxe::ui::toolkit::style::Style _g5 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_6::Block());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(42)
	this->addStyle(HX_CSTRING("Accordion"),_g5);
	struct _Function_1_7{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",46,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)5,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)-2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(46)
	::haxe::ui::toolkit::style::Style _g6 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_7::Block());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(46)
	this->addStyle(HX_CSTRING(".page"),_g6);
	HX_STACK_LINE(63)
	::openfl::filters::DropShadowFilter _g7 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
	struct _Function_1_8{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g7,::openfl::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",51,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("padding") , (int)10,false);
				__result->Add(HX_CSTRING("borderColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("filter") , _g7,false);
				__result->Add(HX_CSTRING("spacing") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(51)
	Dynamic _g8 = _Function_1_8::Block(_g7,f);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(51)
	::haxe::ui::toolkit::style::Style _g9 = ::haxe::ui::toolkit::style::Style_obj::__new(_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(51)
	this->addStyle(HX_CSTRING("Button"),_g9);
	struct _Function_1_9{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",68,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	::haxe::ui::toolkit::style::Style _g10 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_9::Block());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(68)
	this->addStyle(HX_CSTRING("Button:over"),_g10);
	struct _Function_1_10{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",74,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(74)
	::haxe::ui::toolkit::style::Style _g11 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_10::Block());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(74)
	this->addStyle(HX_CSTRING("Button:down"),_g11);
	struct _Function_1_11{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",81,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/expand.png"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::style::Style _g12 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_11::Block());		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(81)
	this->addStyle(HX_CSTRING("Button.expandable"),_g12);
	struct _Function_1_12{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",85,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/collapse.png"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(85)
	::haxe::ui::toolkit::style::Style _g13 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_12::Block());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(85)
	this->addStyle(HX_CSTRING("Button.expandable:down"),_g13);
	struct _Function_1_13{
		inline static Dynamic Block( ::openfl::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",89,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("spacingX") , (int)2,false);
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(89)
	::haxe::ui::toolkit::style::Style _g14 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_13::Block(f));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(89)
	this->addStyle(HX_CSTRING("CheckBox, OptionBox"),_g14);
	struct _Function_1_14{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",97,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)32,false);
				__result->Add(HX_CSTRING("height") , (int)32,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(97)
	::haxe::ui::toolkit::style::Style _g15 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_14::Block());		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(97)
	this->addStyle(HX_CSTRING("CheckBoxValue, OptionBoxValue"),_g15);
	struct _Function_1_15{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",102,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(102)
	::haxe::ui::toolkit::style::Style _g16 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_15::Block());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(102)
	this->addStyle(HX_CSTRING("CheckBoxValue #unselected"),_g16);
	struct _Function_1_16{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",106,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(106)
	::haxe::ui::toolkit::style::Style _g17 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_16::Block());		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(106)
	this->addStyle(HX_CSTRING("CheckBoxValue #unselected:disabled"),_g17);
	struct _Function_1_17{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",109,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/cross.png"),false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(109)
	::haxe::ui::toolkit::style::Style _g18 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_17::Block());		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(109)
	this->addStyle(HX_CSTRING("CheckBoxValue #selected"),_g18);
	struct _Function_1_18{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",114,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(114)
	::haxe::ui::toolkit::style::Style _g19 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_18::Block());		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(114)
	this->addStyle(HX_CSTRING("CheckBoxValue #selected:disabled"),_g19);
	struct _Function_1_19{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",117,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(117)
	::haxe::ui::toolkit::style::Style _g20 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_19::Block());		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(117)
	this->addStyle(HX_CSTRING("OptionBoxValue #unselected"),_g20);
	struct _Function_1_20{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",121,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(121)
	::haxe::ui::toolkit::style::Style _g21 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_20::Block());		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(121)
	this->addStyle(HX_CSTRING("OptionBoxValue #unselected:disabled"),_g21);
	struct _Function_1_21{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",124,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/circle.png"),false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(124)
	::haxe::ui::toolkit::style::Style _g22 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_21::Block());		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(124)
	this->addStyle(HX_CSTRING("OptionBoxValue #selected"),_g22);
	struct _Function_1_22{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",129,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(129)
	::haxe::ui::toolkit::style::Style _g23 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_22::Block());		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(129)
	this->addStyle(HX_CSTRING("OptionBoxValue #selected:disabled"),_g23);
	HX_STACK_LINE(141)
	::openfl::filters::DropShadowFilter _g24 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)12566463,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(_g24,"_g24");
	struct _Function_1_23{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g24,::openfl::text::Font &f){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",132,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16777215,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("width") , (int)150,false);
				__result->Add(HX_CSTRING("height") , (int)42,false);
				__result->Add(HX_CSTRING("borderColor") , (int)2236962,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("filter") , _g24,false);
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(132)
	Dynamic _g25 = _Function_1_23::Block(_g24,f);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(132)
	::haxe::ui::toolkit::style::Style _g26 = ::haxe::ui::toolkit::style::Style_obj::__new(_g25);		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(132)
	this->addStyle(HX_CSTRING("TextInput"),_g26);
	struct _Function_1_24{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",147,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , (int)11184810,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(147)
	::haxe::ui::toolkit::style::Style _g27 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_24::Block());		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(147)
	this->addStyle(HX_CSTRING("TextInput #placeholder"),_g27);
	struct _Function_1_25{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",151,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/up_down.png"),false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("right"),false);
				__result->Add(HX_CSTRING("selectionMethod") , HX_CSTRING("popup"),false);
				__result->Add(HX_CSTRING("textAlign") , HX_CSTRING("left"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(151)
	::haxe::ui::toolkit::style::Style _g28 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_25::Block());		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(151)
	this->addStyle(HX_CSTRING("ListSelector, DateSelector"),_g28);
	struct _Function_1_26{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",158,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)310,false);
				__result->Add(HX_CSTRING("height") , (int)310,false);
				__result->Add(HX_CSTRING("spacing") , (int)3,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(158)
	::haxe::ui::toolkit::style::Style _g29 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_26::Block());		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(158)
	this->addStyle(HX_CSTRING("CalendarView, Calendar"),_g29);
	HX_STACK_LINE(168)
	::openfl::filters::DropShadowFilter _g30 = ::openfl::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)2236962,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g30,"_g30");
	struct _Function_1_27{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g30){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",166,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("filter") , _g30,false);
				__result->Add(HX_CSTRING("borderColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("padding") , (int)5,false);
				__result->Add(HX_CSTRING("spacing") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(166)
	Dynamic _g31 = _Function_1_27::Block(_g30);		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(166)
	::haxe::ui::toolkit::style::Style _g32 = ::haxe::ui::toolkit::style::Style_obj::__new(_g31);		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(166)
	this->addStyle(HX_CSTRING("CalendarView"),_g32);
	struct _Function_1_28{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",176,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(176)
	::haxe::ui::toolkit::style::Style _g33 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_28::Block());		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(176)
	this->addStyle(HX_CSTRING("CalendarView Calendar"),_g33);
	struct _Function_1_29{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",180,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)50,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(180)
	::haxe::ui::toolkit::style::Style _g34 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_29::Block());		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(180)
	this->addStyle(HX_CSTRING("CalendarPopupContent"),_g34);
	struct _Function_1_30{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",184,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)0,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(184)
	::haxe::ui::toolkit::style::Style _g35 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_30::Block());		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(184)
	this->addStyle(HX_CSTRING("CalendarDay"),_g35);
	struct _Function_1_31{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",192,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("textAlign") , HX_CSTRING("center"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(192)
	::haxe::ui::toolkit::style::Style _g36 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_31::Block());		HX_STACK_VAR(_g36,"_g36");
	HX_STACK_LINE(192)
	this->addStyle(HX_CSTRING("CalendarView #currentMonthYear"),_g36);
	HX_STACK_LINE(208)
	::openfl::filters::DropShadowFilter _g37 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g37,"_g37");
	struct _Function_1_32{
		inline static Dynamic Block( ::openfl::text::Font &f,::openfl::filters::DropShadowFilter &_g37){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",196,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontSize") , (int)14,false);
				__result->Add(HX_CSTRING("fontName") , f->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("padding") , (int)10,false);
				__result->Add(HX_CSTRING("borderColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("filter") , _g37,false);
				__result->Add(HX_CSTRING("spacing") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(196)
	Dynamic _g38 = _Function_1_32::Block(f,_g37);		HX_STACK_VAR(_g38,"_g38");
	HX_STACK_LINE(196)
	::haxe::ui::toolkit::style::Style _g39 = ::haxe::ui::toolkit::style::Style_obj::__new(_g38);		HX_STACK_VAR(_g39,"_g39");
	HX_STACK_LINE(196)
	this->addStyle(HX_CSTRING("Calendar #selectedDay"),_g39);
	struct _Function_1_33{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",213,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(213)
	::haxe::ui::toolkit::style::Style _g40 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_33::Block());		HX_STACK_VAR(_g40,"_g40");
	HX_STACK_LINE(213)
	this->addStyle(HX_CSTRING("CalendarDay:over, Calendar #selectedDay:over"),_g40);
	struct _Function_1_34{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",219,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(219)
	::haxe::ui::toolkit::style::Style _g41 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_34::Block());		HX_STACK_VAR(_g41,"_g41");
	HX_STACK_LINE(219)
	this->addStyle(HX_CSTRING("CalendarDay:down, Calendar #selectedDay:down"),_g41);
	struct _Function_1_35{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",225,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				__result->Add(HX_CSTRING("spacing") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(225)
	::haxe::ui::toolkit::style::Style _g42 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_35::Block());		HX_STACK_VAR(_g42,"_g42");
	HX_STACK_LINE(225)
	this->addStyle(HX_CSTRING("TabView"),_g42);
	struct _Function_1_36{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",231,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(231)
	::haxe::ui::toolkit::style::Style _g43 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_36::Block());		HX_STACK_VAR(_g43,"_g43");
	HX_STACK_LINE(231)
	this->addStyle(HX_CSTRING("TabView Container"),_g43);
	struct _Function_1_37{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",235,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("height") , (int)41,false);
				__result->Add(HX_CSTRING("paddingTop") , (int)0,false);
				__result->Add(HX_CSTRING("paddingLeft") , (int)0,false);
				__result->Add(HX_CSTRING("paddingRight") , (int)0,false);
				__result->Add(HX_CSTRING("paddingBottom") , (int)0,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("spacing") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(235)
	::haxe::ui::toolkit::style::Style _g44 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_37::Block());		HX_STACK_VAR(_g44,"_g44");
	HX_STACK_LINE(235)
	this->addStyle(HX_CSTRING("TabBar"),_g44);
	struct _Function_1_38{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",248,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("spacing") , (int)1,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(248)
	::haxe::ui::toolkit::style::Style _g45 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_38::Block());		HX_STACK_VAR(_g45,"_g45");
	HX_STACK_LINE(248)
	this->addStyle(HX_CSTRING("TabBar #content"),_g45);
	struct _Function_1_39{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",253,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(253)
	::haxe::ui::toolkit::style::Style _g46 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_39::Block());		HX_STACK_VAR(_g46,"_g46");
	HX_STACK_LINE(253)
	this->addStyle(HX_CSTRING("TabBar #container"),_g46);
	struct _Function_1_40{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",256,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("height") , (int)42,false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("left"),false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
				__result->Add(HX_CSTRING("autoSize") , true,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("paddingLeft") , (int)20,false);
				__result->Add(HX_CSTRING("paddingRight") , (int)20,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(256)
	::haxe::ui::toolkit::style::Style _g47 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_40::Block());		HX_STACK_VAR(_g47,"_g47");
	HX_STACK_LINE(256)
	this->addStyle(HX_CSTRING("TabBar Button"),_g47);
	struct _Function_1_41{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",271,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)15658734,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)13421772,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(271)
	::haxe::ui::toolkit::style::Style _g48 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_41::Block());		HX_STACK_VAR(_g48,"_g48");
	HX_STACK_LINE(271)
	this->addStyle(HX_CSTRING("TabBar Button:down"),_g48);
	HX_STACK_LINE(285)
	::openfl::filters::DropShadowFilter _g49 = ::openfl::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(_g49,"_g49");
	struct _Function_1_42{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g49){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",277,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)150,false);
				__result->Add(HX_CSTRING("height") , (int)30,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)6710886,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , _g49,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(277)
	Dynamic _g50 = _Function_1_42::Block(_g49);		HX_STACK_VAR(_g50,"_g50");
	HX_STACK_LINE(277)
	::haxe::ui::toolkit::style::Style _g51 = ::haxe::ui::toolkit::style::Style_obj::__new(_g50);		HX_STACK_VAR(_g51,"_g51");
	HX_STACK_LINE(277)
	this->addStyle(HX_CSTRING("HProgress"),_g51);
	struct _Function_1_43{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",288,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(288)
	::haxe::ui::toolkit::style::Style _g52 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_43::Block());		HX_STACK_VAR(_g52,"_g52");
	HX_STACK_LINE(288)
	this->addStyle(HX_CSTRING("HProgress #background"),_g52);
	struct _Function_1_44{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",296,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(296)
	::haxe::ui::toolkit::style::Style _g53 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_44::Block());		HX_STACK_VAR(_g53,"_g53");
	HX_STACK_LINE(296)
	this->addStyle(HX_CSTRING("HProgress #value"),_g53);
	HX_STACK_LINE(312)
	::openfl::filters::DropShadowFilter _g54 = ::openfl::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(_g54,"_g54");
	struct _Function_1_45{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g54){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",304,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)30,false);
				__result->Add(HX_CSTRING("height") , (int)150,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)6710886,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , _g54,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(304)
	Dynamic _g55 = _Function_1_45::Block(_g54);		HX_STACK_VAR(_g55,"_g55");
	HX_STACK_LINE(304)
	::haxe::ui::toolkit::style::Style _g56 = ::haxe::ui::toolkit::style::Style_obj::__new(_g55);		HX_STACK_VAR(_g56,"_g56");
	HX_STACK_LINE(304)
	this->addStyle(HX_CSTRING("VProgress"),_g56);
	struct _Function_1_46{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",315,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(315)
	::haxe::ui::toolkit::style::Style _g57 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_46::Block());		HX_STACK_VAR(_g57,"_g57");
	HX_STACK_LINE(315)
	this->addStyle(HX_CSTRING("VProgress #background"),_g57);
	struct _Function_1_47{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",323,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("horizontal"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(323)
	::haxe::ui::toolkit::style::Style _g58 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_47::Block());		HX_STACK_VAR(_g58,"_g58");
	HX_STACK_LINE(323)
	this->addStyle(HX_CSTRING("VProgress #value"),_g58);
	HX_STACK_LINE(342)
	::openfl::filters::DropShadowFilter _g59 = ::openfl::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(_g59,"_g59");
	struct _Function_1_48{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g59){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",332,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)150,false);
				__result->Add(HX_CSTRING("height") , (int)30,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)6710886,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("paddingLeft") , (int)0,false);
				__result->Add(HX_CSTRING("paddingRight") , (int)0,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , _g59,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(332)
	Dynamic _g60 = _Function_1_48::Block(_g59);		HX_STACK_VAR(_g60,"_g60");
	HX_STACK_LINE(332)
	::haxe::ui::toolkit::style::Style _g61 = ::haxe::ui::toolkit::style::Style_obj::__new(_g60);		HX_STACK_VAR(_g61,"_g61");
	HX_STACK_LINE(332)
	this->addStyle(HX_CSTRING("HSlider"),_g61);
	struct _Function_1_49{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",345,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(345)
	::haxe::ui::toolkit::style::Style _g62 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_49::Block());		HX_STACK_VAR(_g62,"_g62");
	HX_STACK_LINE(345)
	this->addStyle(HX_CSTRING("HSlider #background"),_g62);
	struct _Function_1_50{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",353,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentHeight") , (int)0,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(353)
	::haxe::ui::toolkit::style::Style _g63 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_50::Block());		HX_STACK_VAR(_g63,"_g63");
	HX_STACK_LINE(353)
	this->addStyle(HX_CSTRING("HSlider #value"),_g63);
	HX_STACK_LINE(365)
	::openfl::filters::DropShadowFilter _g64 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)6710886,(int)1,(int)2,(int)2,(int)1,(int)3,false,null(),null());		HX_STACK_VAR(_g64,"_g64");
	struct _Function_1_51{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g64){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",361,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)26,false);
				__result->Add(HX_CSTRING("height") , (int)26,false);
				__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("vertical"),false);
				__result->Add(HX_CSTRING("filter") , _g64,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(361)
	Dynamic _g65 = _Function_1_51::Block(_g64);		HX_STACK_VAR(_g65,"_g65");
	HX_STACK_LINE(361)
	::haxe::ui::toolkit::style::Style _g66 = ::haxe::ui::toolkit::style::Style_obj::__new(_g65);		HX_STACK_VAR(_g66,"_g66");
	HX_STACK_LINE(361)
	this->addStyle(HX_CSTRING("HSlider Button"),_g66);
	HX_STACK_LINE(378)
	::openfl::filters::DropShadowFilter _g67 = ::openfl::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(_g67,"_g67");
	struct _Function_1_52{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g67){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",368,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)30,false);
				__result->Add(HX_CSTRING("height") , (int)150,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)6710886,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("paddingLeft") , (int)0,false);
				__result->Add(HX_CSTRING("paddingRight") , (int)0,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , _g67,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(368)
	Dynamic _g68 = _Function_1_52::Block(_g67);		HX_STACK_VAR(_g68,"_g68");
	HX_STACK_LINE(368)
	::haxe::ui::toolkit::style::Style _g69 = ::haxe::ui::toolkit::style::Style_obj::__new(_g68);		HX_STACK_VAR(_g69,"_g69");
	HX_STACK_LINE(368)
	this->addStyle(HX_CSTRING("VSlider"),_g69);
	struct _Function_1_53{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",381,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("percentHeight") , (int)100,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(381)
	::haxe::ui::toolkit::style::Style _g70 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_53::Block());		HX_STACK_VAR(_g70,"_g70");
	HX_STACK_LINE(381)
	this->addStyle(HX_CSTRING("VSlider #background"),_g70);
	struct _Function_1_54{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",389,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)0,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(389)
	::haxe::ui::toolkit::style::Style _g71 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_54::Block());		HX_STACK_VAR(_g71,"_g71");
	HX_STACK_LINE(389)
	this->addStyle(HX_CSTRING("VSlider #value"),_g71);
	HX_STACK_LINE(401)
	::openfl::filters::DropShadowFilter _g72 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)6710886,(int)1,(int)2,(int)2,(int)1,(int)3,false,null(),null());		HX_STACK_VAR(_g72,"_g72");
	struct _Function_1_55{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g72){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",397,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)26,false);
				__result->Add(HX_CSTRING("height") , (int)26,false);
				__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("horizontal"),false);
				__result->Add(HX_CSTRING("filter") , _g72,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(397)
	Dynamic _g73 = _Function_1_55::Block(_g72);		HX_STACK_VAR(_g73,"_g73");
	HX_STACK_LINE(397)
	::haxe::ui::toolkit::style::Style _g74 = ::haxe::ui::toolkit::style::Style_obj::__new(_g73);		HX_STACK_VAR(_g74,"_g74");
	HX_STACK_LINE(397)
	this->addStyle(HX_CSTRING("VSlider Button"),_g74);
	HX_STACK_LINE(410)
	::openfl::filters::DropShadowFilter _g75 = ::openfl::filters::DropShadowFilter_obj::__new((int)1,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,true,null(),null());		HX_STACK_VAR(_g75,"_g75");
	struct _Function_1_56{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g75){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",404,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , _g75,false);
				__result->Add(HX_CSTRING("inlineScrolls") , true,false);
				__result->Add(HX_CSTRING("autoHideScrolls") , true,false);
				__result->Add(HX_CSTRING("spacing") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(404)
	Dynamic _g76 = _Function_1_56::Block(_g75);		HX_STACK_VAR(_g76,"_g76");
	HX_STACK_LINE(404)
	::haxe::ui::toolkit::style::Style _g77 = ::haxe::ui::toolkit::style::Style_obj::__new(_g76);		HX_STACK_VAR(_g77,"_g77");
	HX_STACK_LINE(404)
	this->addStyle(HX_CSTRING("ScrollView"),_g77);
	struct _Function_1_57{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",417,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(417)
	::haxe::ui::toolkit::style::Style _g78 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_57::Block());		HX_STACK_VAR(_g78,"_g78");
	HX_STACK_LINE(417)
	this->addStyle(HX_CSTRING("ListView"),_g78);
	struct _Function_1_58{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",421,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("padding") , (int)0,false);
				__result->Add(HX_CSTRING("spacing") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(421)
	::haxe::ui::toolkit::style::Style _g79 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_58::Block());		HX_STACK_VAR(_g79,"_g79");
	HX_STACK_LINE(421)
	this->addStyle(HX_CSTRING("ListView #content"),_g79);
	struct _Function_1_59{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",428,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)10,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)6710886,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(428)
	::haxe::ui::toolkit::style::Style _g80 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_59::Block());		HX_STACK_VAR(_g80,"_g80");
	HX_STACK_LINE(428)
	this->addStyle(HX_CSTRING(".even, .odd"),_g80);
	struct _Function_1_60{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",433,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(433)
	::haxe::ui::toolkit::style::Style _g81 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_60::Block());		HX_STACK_VAR(_g81,"_g81");
	HX_STACK_LINE(433)
	this->addStyle(HX_CSTRING(".even:over, .odd:over"),_g81);
	struct _Function_1_61{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",439,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(439)
	::haxe::ui::toolkit::style::Style _g82 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_61::Block());		HX_STACK_VAR(_g82,"_g82");
	HX_STACK_LINE(439)
	this->addStyle(HX_CSTRING(".even:selected, .odd:selected"),_g82);
	struct _Function_1_62{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",445,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , (int)16754764,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(445)
	::haxe::ui::toolkit::style::Style _g83 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_62::Block());		HX_STACK_VAR(_g83,"_g83");
	HX_STACK_LINE(445)
	this->addStyle(HX_CSTRING(".even #text, .odd #text"),_g83);
	struct _Function_1_63{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",448,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(448)
	::haxe::ui::toolkit::style::Style _g84 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_63::Block());		HX_STACK_VAR(_g84,"_g84");
	HX_STACK_LINE(448)
	this->addStyle(HX_CSTRING(".even #text:over, .odd #text:over"),_g84);
	struct _Function_1_64{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",451,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(451)
	::haxe::ui::toolkit::style::Style _g85 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_64::Block());		HX_STACK_VAR(_g85,"_g85");
	HX_STACK_LINE(451)
	this->addStyle(HX_CSTRING(".even #text:selected, .odd #text:selected"),_g85);
	struct _Function_1_65{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",455,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)10,false);
				__result->Add(HX_CSTRING("height") , (int)100,false);
				__result->Add(HX_CSTRING("hasButtons") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(455)
	::haxe::ui::toolkit::style::Style _g86 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_65::Block());		HX_STACK_VAR(_g86,"_g86");
	HX_STACK_LINE(455)
	this->addStyle(HX_CSTRING("VScroll"),_g86);
	struct _Function_1_66{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",460,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("horizontal"),false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(460)
	::haxe::ui::toolkit::style::Style _g87 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_66::Block());		HX_STACK_VAR(_g87,"_g87");
	HX_STACK_LINE(460)
	this->addStyle(HX_CSTRING("VScroll Button"),_g87);
	struct _Function_1_67{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",466,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("width") , (int)100,false);
				__result->Add(HX_CSTRING("height") , (int)10,false);
				__result->Add(HX_CSTRING("hasButtons") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(466)
	::haxe::ui::toolkit::style::Style _g88 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_67::Block());		HX_STACK_VAR(_g88,"_g88");
	HX_STACK_LINE(466)
	this->addStyle(HX_CSTRING("HScroll"),_g88);
	struct _Function_1_68{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",471,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("gradientType") , HX_CSTRING("vertical"),false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(471)
	::haxe::ui::toolkit::style::Style _g89 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_68::Block());		HX_STACK_VAR(_g89,"_g89");
	HX_STACK_LINE(471)
	this->addStyle(HX_CSTRING("HScroll Button"),_g89);
	HX_STACK_LINE(484)
	::openfl::filters::DropShadowFilter _g90 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g90,"_g90");
	struct _Function_1_69{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g90){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",477,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)14671325,false);
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("height") , (int)10,false);
				__result->Add(HX_CSTRING("padding") , (int)5,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
				__result->Add(HX_CSTRING("filter") , _g90,false);
				__result->Add(HX_CSTRING("autoSize") , true,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(477)
	Dynamic _g91 = _Function_1_69::Block(_g90);		HX_STACK_VAR(_g91,"_g91");
	HX_STACK_LINE(477)
	::haxe::ui::toolkit::style::Style _g92 = ::haxe::ui::toolkit::style::Style_obj::__new(_g91);		HX_STACK_VAR(_g92,"_g92");
	HX_STACK_LINE(477)
	this->addStyle(HX_CSTRING("MenuBar"),_g92);
	struct _Function_1_70{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",488,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)14671325,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(488)
	::haxe::ui::toolkit::style::Style _g93 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_70::Block());		HX_STACK_VAR(_g93,"_g93");
	HX_STACK_LINE(488)
	this->addStyle(HX_CSTRING("MenuBar Container"),_g93);
	HX_STACK_LINE(494)
	::openfl::filters::DropShadowFilter _g94 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g94,"_g94");
	struct _Function_1_71{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g94){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",492,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("filter") , _g94,false);
				__result->Add(HX_CSTRING("borderColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("padding") , (int)1,false);
				__result->Add(HX_CSTRING("spacing") , (int)1,false);
				__result->Add(HX_CSTRING("width") , (int)400,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(492)
	Dynamic _g95 = _Function_1_71::Block(_g94);		HX_STACK_VAR(_g95,"_g95");
	HX_STACK_LINE(492)
	::haxe::ui::toolkit::style::Style _g96 = ::haxe::ui::toolkit::style::Style_obj::__new(_g95);		HX_STACK_VAR(_g96,"_g96");
	HX_STACK_LINE(492)
	this->addStyle(HX_CSTRING("Popup"),_g96);
	struct _Function_1_72{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",503,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)-2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(503)
	::haxe::ui::toolkit::style::Style _g97 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_72::Block());		HX_STACK_VAR(_g97,"_g97");
	HX_STACK_LINE(503)
	this->addStyle(HX_CSTRING("Popup Container"),_g97);
	struct _Function_1_73{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",508,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				__result->Add(HX_CSTRING("height") , (int)45,false);
				__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
				__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
				__result->Add(HX_CSTRING("paddingLeft") , (int)5,false);
				__result->Add(HX_CSTRING("paddingRight") , (int)5,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(508)
	::haxe::ui::toolkit::style::Style _g98 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_73::Block());		HX_STACK_VAR(_g98,"_g98");
	HX_STACK_LINE(508)
	this->addStyle(HX_CSTRING("Popup #titleBar"),_g98);
	struct _Function_1_74{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",517,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)5,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(517)
	::haxe::ui::toolkit::style::Style _g99 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_74::Block());		HX_STACK_VAR(_g99,"_g99");
	HX_STACK_LINE(517)
	this->addStyle(HX_CSTRING("Popup #popupContent"),_g99);
	struct _Function_1_75{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",522,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("paddingTop") , (int)5,false);
				__result->Add(HX_CSTRING("paddingBottom") , (int)5,false);
				__result->Add(HX_CSTRING("height") , (int)55,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(522)
	::haxe::ui::toolkit::style::Style _g100 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_75::Block());		HX_STACK_VAR(_g100,"_g100");
	HX_STACK_LINE(522)
	this->addStyle(HX_CSTRING("Popup #buttonBar"),_g100);
	struct _Function_1_76{
		inline static Dynamic Block( ::openfl::text::Font &fb){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",529,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fontName") , fb->fontName,false);
				__result->Add(HX_CSTRING("fontEmbedded") , true,false);
				__result->Add(HX_CSTRING("fontSize") , (int)24,false);
				__result->Add(HX_CSTRING("color") , (int)8947848,false);
				__result->Add(HX_CSTRING("horizontalAlignment") , HX_CSTRING("right"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(529)
	::haxe::ui::toolkit::style::Style _g101 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_76::Block(fb));		HX_STACK_VAR(_g101,"_g101");
	HX_STACK_LINE(529)
	this->addStyle(HX_CSTRING("Popup #titleBar #title"),_g101);
	struct _Function_1_77{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",537,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("padding") , (int)2,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(537)
	::haxe::ui::toolkit::style::Style _g102 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_77::Block());		HX_STACK_VAR(_g102,"_g102");
	HX_STACK_LINE(537)
	this->addStyle(HX_CSTRING("ListPopupContent ListView, ListPopupContent #popupContent"),_g102);
	HX_STACK_LINE(544)
	::openfl::filters::DropShadowFilter _g103 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g103,"_g103");
	struct _Function_1_78{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g103){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",542,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)8947848,false);
				__result->Add(HX_CSTRING("filter") , _g103,false);
				__result->Add(HX_CSTRING("borderColor") , (int)4473924,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)1,false);
				__result->Add(HX_CSTRING("padding") , (int)1,false);
				__result->Add(HX_CSTRING("width") , (int)175,false);
				__result->Add(HX_CSTRING("spacing") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(542)
	Dynamic _g104 = _Function_1_78::Block(_g103);		HX_STACK_VAR(_g104,"_g104");
	HX_STACK_LINE(542)
	::haxe::ui::toolkit::style::Style _g105 = ::haxe::ui::toolkit::style::Style_obj::__new(_g104);		HX_STACK_VAR(_g105,"_g105");
	HX_STACK_LINE(542)
	this->addStyle(HX_CSTRING("Menu"),_g105);
	struct _Function_1_79{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",553,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)14671325,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)14671325,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("padding") , (int)10,false);
				__result->Add(HX_CSTRING("borderColor") , (int)-1,false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)2,false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(553)
	::haxe::ui::toolkit::style::Style _g106 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_79::Block());		HX_STACK_VAR(_g106,"_g106");
	HX_STACK_LINE(553)
	this->addStyle(HX_CSTRING("MenuButton"),_g106);
	HX_STACK_LINE(569)
	::openfl::filters::DropShadowFilter _g107 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g107,"_g107");
	struct _Function_1_80{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g107){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",565,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				__result->Add(HX_CSTRING("filter") , _g107,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(565)
	Dynamic _g108 = _Function_1_80::Block(_g107);		HX_STACK_VAR(_g108,"_g108");
	HX_STACK_LINE(565)
	::haxe::ui::toolkit::style::Style _g109 = ::haxe::ui::toolkit::style::Style_obj::__new(_g108);		HX_STACK_VAR(_g109,"_g109");
	HX_STACK_LINE(565)
	this->addStyle(HX_CSTRING("MenuButton:over"),_g109);
	HX_STACK_LINE(576)
	::openfl::filters::DropShadowFilter _g110 = ::openfl::filters::DropShadowFilter_obj::__new((int)2,(int)45,(int)4473924,(int)1,(int)2,(int)2,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g110,"_g110");
	struct _Function_1_81{
		inline static Dynamic Block( ::openfl::filters::DropShadowFilter &_g110){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",572,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				__result->Add(HX_CSTRING("filter") , _g110,false);
				__result->Add(HX_CSTRING("borderSize") , (int)1,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(572)
	Dynamic _g111 = _Function_1_81::Block(_g110);		HX_STACK_VAR(_g111,"_g111");
	HX_STACK_LINE(572)
	::haxe::ui::toolkit::style::Style _g112 = ::haxe::ui::toolkit::style::Style_obj::__new(_g111);		HX_STACK_VAR(_g112,"_g112");
	HX_STACK_LINE(572)
	this->addStyle(HX_CSTRING("MenuButton:down"),_g112);
	struct _Function_1_82{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",581,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("percentWidth") , (int)100,false);
				__result->Add(HX_CSTRING("iconPosition") , HX_CSTRING("right"),false);
				__result->Add(HX_CSTRING("filter") , null(),false);
				__result->Add(HX_CSTRING("borderSize") , (int)0,false);
				__result->Add(HX_CSTRING("cornerRadius") , (int)0,false);
				__result->Add(HX_CSTRING("backgroundColor") , (int)13421772,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(581)
	::haxe::ui::toolkit::style::Style _g113 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_82::Block());		HX_STACK_VAR(_g113,"_g113");
	HX_STACK_LINE(581)
	this->addStyle(HX_CSTRING("MenuItem"),_g113);
	struct _Function_1_83{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",591,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16758635,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16744196,false);
				__result->Add(HX_CSTRING("color") , (int)2236962,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(591)
	::haxe::ui::toolkit::style::Style _g114 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_83::Block());		HX_STACK_VAR(_g114,"_g114");
	HX_STACK_LINE(591)
	this->addStyle(HX_CSTRING("MenuItem:over"),_g114);
	struct _Function_1_84{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",597,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("backgroundColor") , (int)16754764,false);
				__result->Add(HX_CSTRING("backgroundColorGradientEnd") , (int)16743181,false);
				__result->Add(HX_CSTRING("color") , (int)4473924,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(597)
	::haxe::ui::toolkit::style::Style _g115 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_84::Block());		HX_STACK_VAR(_g115,"_g115");
	HX_STACK_LINE(597)
	this->addStyle(HX_CSTRING("MenuItem:down"),_g115);
	struct _Function_1_85{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/DefaultStyles.hx",603,0xce5e3e7c)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("icon") , HX_CSTRING("styles/default/expand.png"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(603)
	::haxe::ui::toolkit::style::Style _g116 = ::haxe::ui::toolkit::style::Style_obj::__new(_Function_1_85::Block());		HX_STACK_VAR(_g116,"_g116");
	HX_STACK_LINE(603)
	this->addStyle(HX_CSTRING("MenuItem.expandable"),_g116);
}
;
	return null();
}

//DefaultStyles_obj::~DefaultStyles_obj() { }

Dynamic DefaultStyles_obj::__CreateEmpty() { return  new DefaultStyles_obj; }
hx::ObjectPtr< DefaultStyles_obj > DefaultStyles_obj::__new()
{  hx::ObjectPtr< DefaultStyles_obj > result = new DefaultStyles_obj();
	result->__construct();
	return result;}

Dynamic DefaultStyles_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultStyles_obj > result = new DefaultStyles_obj();
	result->__construct();
	return result;}


DefaultStyles_obj::DefaultStyles_obj()
{
}

Dynamic DefaultStyles_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultStyles_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultStyles_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultStyles_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultStyles_obj::__mClass,"__mClass");
};

#endif

Class DefaultStyles_obj::__mClass;

void DefaultStyles_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.DefaultStyles"), hx::TCanCast< DefaultStyles_obj> ,sStaticFields,sMemberFields,
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

void DefaultStyles_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
