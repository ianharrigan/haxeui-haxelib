#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_SVG
#include <format/SVG.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#include <haxe/ui/toolkit/style/StyleHelper.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InterpolationMethod
#include <openfl/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_SpreadMethod
#include <openfl/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void StyleHelper_obj::__construct()
{
	return null();
}

//StyleHelper_obj::~StyleHelper_obj() { }

Dynamic StyleHelper_obj::__CreateEmpty() { return  new StyleHelper_obj; }
hx::ObjectPtr< StyleHelper_obj > StyleHelper_obj::__new()
{  hx::ObjectPtr< StyleHelper_obj > result = new StyleHelper_obj();
	result->__construct();
	return result;}

Dynamic StyleHelper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleHelper_obj > result = new StyleHelper_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap StyleHelper_obj::sectionCache;

Void StyleHelper_obj::clearCache( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","clearCache",0xb8865983,"haxe.ui.toolkit.style.StyleHelper.clearCache","haxe/ui/toolkit/style/StyleHelper.hx",20,0xc4c90a00)
		HX_STACK_LINE(21)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache = _g;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StyleHelper_obj,clearCache,(void))

Void StyleHelper_obj::paintStyle( ::openfl::display::Graphics g,::haxe::ui::toolkit::style::Style style,::openfl::geom::Rectangle rc){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintStyle",0x7d0f80c1,"haxe.ui.toolkit.style.StyleHelper.paintStyle","haxe/ui/toolkit/style/StyleHelper.hx",24,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(style,"style")
		HX_STACK_ARG(rc,"rc")
		HX_STACK_LINE(25)
		g->clear();
		HX_STACK_LINE(26)
		if (((bool((bool((style == null())) || bool((rc->width == (int)0)))) || bool((rc->height == (int)0))))){
			HX_STACK_LINE(27)
			return null();
		}
		HX_STACK_LINE(30)
		int _g = style->get_backgroundColor();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( ::haxe::ui::toolkit::style::Style &style){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleHelper.hx",30,0xc4c90a00)
				{
					HX_STACK_LINE(30)
					int _g1 = style->get_borderColor();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(30)
					return (_g1 != (int)-1);
				}
				return null();
			}
		};
		HX_STACK_LINE(30)
		if (((  ((!(((_g != (int)-1))))) ? bool(_Function_1_1::Block(style)) : bool(true) ))){
			HX_STACK_LINE(31)
			int _g2 = style->get_borderColor();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(31)
			if (((_g2 != (int)-1))){
				HX_STACK_LINE(32)
				int borderSize = (int)1;		HX_STACK_VAR(borderSize,"borderSize");
				HX_STACK_LINE(33)
				int _g3 = style->get_borderSize();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(33)
				if (((_g3 != (int)-1))){
					HX_STACK_LINE(34)
					int _g4 = style->get_borderSize();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(34)
					borderSize = _g4;
				}
				HX_STACK_LINE(36)
				if (((borderSize > (int)0))){
					HX_STACK_LINE(37)
					int _g5 = style->get_borderColor();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(37)
					g->lineStyle(borderSize,_g5,null(),null(),null(),null(),null(),null());
					HX_STACK_LINE(38)
					rc->inflate(-(((Float(borderSize) / Float((int)2)))),-(((Float(borderSize) / Float((int)2)))));
				}
			}
			HX_STACK_LINE(46)
			int _g6 = style->get_backgroundColor();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(46)
			if (((_g6 != (int)-1))){
				HX_STACK_LINE(47)
				int _g7 = style->get_backgroundColorGradientEnd();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(47)
				if (((_g7 != (int)-1))){
					HX_STACK_LINE(48)
					int w = ::Std_obj::_int(rc->width);		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(49)
					int h = ::Std_obj::_int(rc->height);		HX_STACK_VAR(h,"h");
					HX_STACK_LINE(50)
					int _g8 = style->get_backgroundColor();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(50)
					int _g9 = style->get_backgroundColorGradientEnd();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(50)
					Array< int > colors = Array_obj< int >::__new().Add(_g8).Add(_g9);		HX_STACK_VAR(colors,"colors");
					HX_STACK_LINE(51)
					Array< int > alphas = Array_obj< int >::__new().Add((int)1).Add((int)1);		HX_STACK_VAR(alphas,"alphas");
					HX_STACK_LINE(52)
					Array< int > ratios = Array_obj< int >::__new().Add((int)0).Add((int)255);		HX_STACK_VAR(ratios,"ratios");
					HX_STACK_LINE(53)
					::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
					HX_STACK_LINE(55)
					::String gradientType = HX_CSTRING("vertical");		HX_STACK_VAR(gradientType,"gradientType");
					HX_STACK_LINE(56)
					::String _g10 = style->get_gradientType();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(56)
					if (((_g10 != null()))){
						HX_STACK_LINE(57)
						::String _g11 = style->get_gradientType();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(57)
						gradientType = _g11;
					}
					HX_STACK_LINE(60)
					if (((gradientType == HX_CSTRING("vertical")))){
						HX_STACK_LINE(61)
						matrix->createGradientBox((w - (int)2),(h - (int)2),(Float(::Math_obj::PI) / Float((int)2)),(int)0,(int)0);
					}
					else{
						HX_STACK_LINE(62)
						if (((gradientType == HX_CSTRING("horizontal")))){
							HX_STACK_LINE(63)
							matrix->createGradientBox((w - (int)2),(h - (int)2),(int)0,(int)0,(int)0);
						}
					}
					HX_STACK_LINE(66)
					g->beginGradientFill(::openfl::display::GradientType_obj::LINEAR,colors,alphas,ratios,matrix,::openfl::display::SpreadMethod_obj::PAD,::openfl::display::InterpolationMethod_obj::LINEAR_RGB,(int)0);
				}
				else{
					HX_STACK_LINE(75)
					int _g12 = style->get_backgroundColor();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(75)
					g->beginFill(_g12,null());
				}
			}
			HX_STACK_LINE(79)
			int _g13 = style->get_cornerRadiusTopLeft();		HX_STACK_VAR(_g13,"_g13");
			struct _Function_2_1{
				inline static bool Block( ::haxe::ui::toolkit::style::Style &style){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleHelper.hx",79,0xc4c90a00)
					{
						HX_STACK_LINE(79)
						int _g14 = style->get_cornerRadiusTopRight();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(79)
						return (_g14 != (int)-1);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::haxe::ui::toolkit::style::Style &style){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleHelper.hx",79,0xc4c90a00)
					{
						HX_STACK_LINE(79)
						int _g15 = style->get_cornerRadiusBottomLeft();		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(79)
						return (_g15 != (int)-1);
					}
					return null();
				}
			};
			struct _Function_2_3{
				inline static bool Block( ::haxe::ui::toolkit::style::Style &style){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleHelper.hx",79,0xc4c90a00)
					{
						HX_STACK_LINE(79)
						int _g16 = style->get_cornerRadiusBottomRight();		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(79)
						return (_g16 != (int)-1);
					}
					return null();
				}
			};
			HX_STACK_LINE(79)
			if (((  ((!(((  ((!(((  ((!(((_g13 != (int)-1))))) ? bool(_Function_2_1::Block(style)) : bool(true) ))))) ? bool(_Function_2_2::Block(style)) : bool(true) ))))) ? bool(_Function_2_3::Block(style)) : bool(true) ))){
				HX_STACK_LINE(80)
				Float radiusTopLeft = style->get_cornerRadiusTopLeft();		HX_STACK_VAR(radiusTopLeft,"radiusTopLeft");
				HX_STACK_LINE(81)
				Float radiusTopRight = style->get_cornerRadiusTopRight();		HX_STACK_VAR(radiusTopRight,"radiusTopRight");
				HX_STACK_LINE(82)
				Float radiusBottomLeft = style->get_cornerRadiusBottomLeft();		HX_STACK_VAR(radiusBottomLeft,"radiusBottomLeft");
				HX_STACK_LINE(83)
				Float radiusBottomRight = style->get_cornerRadiusBottomRight();		HX_STACK_VAR(radiusBottomRight,"radiusBottomRight");
				HX_STACK_LINE(90)
				int _g17 = ::Std_obj::_int(radiusTopLeft);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(90)
				int _g18 = ::Std_obj::_int(radiusTopRight);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(90)
				int _g19 = (int(_g17) & int(_g18));		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(90)
				int _g20 = ::Std_obj::_int(radiusBottomLeft);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(90)
				int _g21 = (int(_g19) & int(_g20));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(90)
				int _g22 = ::Std_obj::_int(radiusBottomRight);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(90)
				int _g23 = (int(_g21) & int(_g22));		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(90)
				if (((_g23 == radiusTopLeft))){
					HX_STACK_LINE(92)
					Float _g24 = rc->get_left();		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(92)
					Float _g25 = rc->get_top();		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(92)
					g->drawRoundRect(_g24,_g25,rc->width,rc->height,(radiusTopLeft + (int)2),(radiusTopLeft + (int)2));
				}
				else{
					HX_STACK_LINE(95)
					Float _g26 = rc->get_left();		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(95)
					Float _g27 = rc->get_top();		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(95)
					g->drawRect(_g26,_g27,rc->width,rc->height);
				}
			}
			else{
				HX_STACK_LINE(99)
				Float _g28 = rc->get_left();		HX_STACK_VAR(_g28,"_g28");
				HX_STACK_LINE(99)
				Float _g29 = rc->get_top();		HX_STACK_VAR(_g29,"_g29");
				HX_STACK_LINE(99)
				g->drawRect(_g28,_g29,rc->width,rc->height);
			}
			HX_STACK_LINE(102)
			g->endFill();
		}
		HX_STACK_LINE(105)
		::String _g30 = style->get_backgroundImage();		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(105)
		if (((_g30 != null()))){
			HX_STACK_LINE(106)
			::openfl::geom::Rectangle backgroundImageRect = null();		HX_STACK_VAR(backgroundImageRect,"backgroundImageRect");
			HX_STACK_LINE(107)
			::openfl::geom::Rectangle _g31 = style->get_backgroundImageRect();		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(107)
			if (((_g31 != null()))){
				HX_STACK_LINE(108)
				::openfl::geom::Rectangle _g32 = style->get_backgroundImageRect();		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(108)
				backgroundImageRect = _g32;
			}
			HX_STACK_LINE(110)
			::String _g33 = style->get_backgroundImage().substr((int)-3,null()).toLowerCase();		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(110)
			if (((_g33 != HX_CSTRING("svg")))){
				HX_STACK_LINE(112)
				::openfl::geom::Rectangle _g34 = style->get_backgroundImageScale9();		HX_STACK_VAR(_g34,"_g34");
				HX_STACK_LINE(112)
				if (((_g34 != null()))){
					HX_STACK_LINE(113)
					::String _g35 = style->get_backgroundImage();		HX_STACK_VAR(_g35,"_g35");
					HX_STACK_LINE(113)
					::openfl::geom::Rectangle _g36 = style->get_backgroundImageScale9();		HX_STACK_VAR(_g36,"_g36");
					HX_STACK_LINE(113)
					::haxe::ui::toolkit::style::StyleHelper_obj::paintScale9(g,_g35,backgroundImageRect,_g36,rc);
				}
				else{
					HX_STACK_LINE(115)
					::haxe::ds::StringMap rects = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(rects,"rects");
					HX_STACK_LINE(116)
					::String _g37 = style->get_backgroundImage();		HX_STACK_VAR(_g37,"_g37");
					HX_STACK_LINE(116)
					::openfl::display::BitmapData bitmapData = ::haxe::ui::toolkit::style::StyleHelper_obj::getBitmapSection(_g37,backgroundImageRect);		HX_STACK_VAR(bitmapData,"bitmapData");
					HX_STACK_LINE(117)
					if (((bitmapData != null()))){
						HX_STACK_LINE(118)
						int _g38 = bitmapData->get_width();		HX_STACK_VAR(_g38,"_g38");
						HX_STACK_LINE(118)
						int _g39 = bitmapData->get_height();		HX_STACK_VAR(_g39,"_g39");
						HX_STACK_LINE(118)
						::openfl::geom::Rectangle _g40 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,_g38,_g39);		HX_STACK_VAR(_g40,"_g40");
						HX_STACK_LINE(118)
						rects->set(HX_CSTRING("middle"),_g40);
						HX_STACK_LINE(119)
						::String _g41 = style->get_backgroundImage();		HX_STACK_VAR(_g41,"_g41");
						HX_STACK_LINE(119)
						::haxe::ui::toolkit::style::StyleHelper_obj::paintCompoundBitmap(g,_g41,backgroundImageRect,rects,rc);
					}
				}
			}
			else{
				HX_STACK_LINE(125)
				::String _g42 = style->get_backgroundImage();		HX_STACK_VAR(_g42,"_g42");
				HX_STACK_LINE(125)
				::format::SVG svg = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getSVG(_g42,null());		HX_STACK_VAR(svg,"svg");
				HX_STACK_LINE(126)
				Float _g43 = rc->get_left();		HX_STACK_VAR(_g43,"_g43");
				HX_STACK_LINE(126)
				Float _g44 = rc->get_top();		HX_STACK_VAR(_g44,"_g44");
				HX_STACK_LINE(126)
				svg->render(g,_g43,_g44,rc->width,rc->height);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(StyleHelper_obj,paintStyle,(void))

Void StyleHelper_obj::paintScale9( ::openfl::display::Graphics g,::String resourceId,::openfl::geom::Rectangle resourceRect,::openfl::geom::Rectangle scale9,::openfl::geom::Rectangle rc){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintScale9",0x16d42cdf,"haxe.ui.toolkit.style.StyleHelper.paintScale9","haxe/ui/toolkit/style/StyleHelper.hx",133,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(resourceRect,"resourceRect")
		HX_STACK_ARG(scale9,"scale9")
		HX_STACK_ARG(rc,"rc")
		HX_STACK_LINE(133)
		if (((scale9 != null()))){
			HX_STACK_LINE(134)
			::openfl::display::BitmapData resource = ::haxe::ui::toolkit::style::StyleHelper_obj::getBitmapSection(resourceId,resourceRect);		HX_STACK_VAR(resource,"resource");
			HX_STACK_LINE(135)
			if (((resource == null()))){
				HX_STACK_LINE(136)
				return null();
			}
			HX_STACK_LINE(139)
			int w = resource->get_width();		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(140)
			int h = resource->get_height();		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(141)
			Float _g = scale9->get_left();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			int x1 = ::Std_obj::_int(_g);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(142)
			Float _g1 = scale9->get_top();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(142)
			int y1 = ::Std_obj::_int(_g1);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(143)
			Float _g2 = scale9->get_right();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(143)
			int x2 = ::Std_obj::_int(_g2);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(144)
			Float _g3 = scale9->get_bottom();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(144)
			int y2 = ::Std_obj::_int(_g3);		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(146)
			::haxe::ds::StringMap rects = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(rects,"rects");
			HX_STACK_LINE(148)
			::openfl::geom::Rectangle _g4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,x1,y1);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(148)
			rects->set(HX_CSTRING("top.left"),_g4);
			HX_STACK_LINE(149)
			::openfl::geom::Rectangle _g5 = ::openfl::geom::Rectangle_obj::__new(x1,(int)0,(x2 - x1),y1);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(149)
			rects->set(HX_CSTRING("top"),_g5);
			HX_STACK_LINE(150)
			::openfl::geom::Rectangle _g6 = ::openfl::geom::Rectangle_obj::__new(x2,(int)0,(w - x2),y1);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(150)
			rects->set(HX_CSTRING("top.right"),_g6);
			HX_STACK_LINE(152)
			::openfl::geom::Rectangle _g7 = ::openfl::geom::Rectangle_obj::__new((int)0,y1,x1,(y2 - y1));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(152)
			rects->set(HX_CSTRING("left"),_g7);
			HX_STACK_LINE(153)
			::openfl::geom::Rectangle _g8 = ::openfl::geom::Rectangle_obj::__new(x1,y1,(x2 - x1),(y2 - y1));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(153)
			rects->set(HX_CSTRING("middle"),_g8);
			HX_STACK_LINE(154)
			::openfl::geom::Rectangle _g9 = ::openfl::geom::Rectangle_obj::__new(x2,y1,(w - x2),(y2 - y1));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(154)
			rects->set(HX_CSTRING("right"),_g9);
			HX_STACK_LINE(156)
			::openfl::geom::Rectangle _g10 = ::openfl::geom::Rectangle_obj::__new((int)0,y2,x1,(h - y2));		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(156)
			rects->set(HX_CSTRING("bottom.left"),_g10);
			HX_STACK_LINE(157)
			::openfl::geom::Rectangle _g11 = ::openfl::geom::Rectangle_obj::__new(x1,y2,(x2 - x1),(h - y2));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(157)
			rects->set(HX_CSTRING("bottom"),_g11);
			HX_STACK_LINE(158)
			::openfl::geom::Rectangle _g12 = ::openfl::geom::Rectangle_obj::__new(x2,y2,(w - x2),(h - y2));		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(158)
			rects->set(HX_CSTRING("bottom.right"),_g12);
			HX_STACK_LINE(160)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintCompoundBitmap(g,resourceId,resourceRect,rects,rc);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StyleHelper_obj,paintScale9,(void))

Void StyleHelper_obj::paintCompoundBitmap( ::openfl::display::Graphics g,::String resourceId,::openfl::geom::Rectangle resourceRect,::haxe::ds::StringMap sourceRects,::openfl::geom::Rectangle targetRect){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintCompoundBitmap",0x66fb5c2a,"haxe.ui.toolkit.style.StyleHelper.paintCompoundBitmap","haxe/ui/toolkit/style/StyleHelper.hx",164,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(resourceRect,"resourceRect")
		HX_STACK_ARG(sourceRects,"sourceRects")
		HX_STACK_ARG(targetRect,"targetRect")
		HX_STACK_LINE(165)
		Float _g = targetRect->get_left();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(165)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(165)
		targetRect->set_left(_g1);
		HX_STACK_LINE(166)
		Float _g2 = targetRect->get_top();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(166)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(166)
		targetRect->set_top(_g3);
		HX_STACK_LINE(167)
		Float _g4 = targetRect->get_right();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(167)
		int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(167)
		targetRect->set_right(_g5);
		HX_STACK_LINE(168)
		Float _g6 = targetRect->get_bottom();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(168)
		int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(168)
		targetRect->set_bottom(_g7);
		HX_STACK_LINE(171)
		::openfl::geom::Rectangle tl = sourceRects->get(HX_CSTRING("top.left"));		HX_STACK_VAR(tl,"tl");
		HX_STACK_LINE(172)
		if (((tl != null()))){
			HX_STACK_LINE(173)
			::openfl::geom::Rectangle _g8 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tl->width,tl->height);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(173)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,tl,_g8);
		}
		else{
			HX_STACK_LINE(175)
			::openfl::geom::Rectangle _g9 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(175)
			tl = _g9;
		}
		HX_STACK_LINE(178)
		::openfl::geom::Rectangle tr = sourceRects->get(HX_CSTRING("top.right"));		HX_STACK_VAR(tr,"tr");
		HX_STACK_LINE(179)
		if (((tr != null()))){
			HX_STACK_LINE(180)
			::openfl::geom::Rectangle _g10 = ::openfl::geom::Rectangle_obj::__new((targetRect->width - tr->width),(int)0,tr->width,tr->height);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(180)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,tr,_g10);
		}
		else{
			HX_STACK_LINE(182)
			::openfl::geom::Rectangle _g11 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(182)
			tr = _g11;
		}
		HX_STACK_LINE(185)
		::openfl::geom::Rectangle t = sourceRects->get(HX_CSTRING("top"));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(186)
		if (((t != null()))){
			HX_STACK_LINE(187)
			::openfl::geom::Rectangle _g12 = ::openfl::geom::Rectangle_obj::__new(tl->width,(int)0,((targetRect->width - tl->width) - tr->width),t->height);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(187)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,t,_g12);
		}
		else{
			HX_STACK_LINE(189)
			::openfl::geom::Rectangle _g13 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(189)
			t = _g13;
		}
		HX_STACK_LINE(193)
		::openfl::geom::Rectangle bl = sourceRects->get(HX_CSTRING("bottom.left"));		HX_STACK_VAR(bl,"bl");
		HX_STACK_LINE(194)
		if (((bl != null()))){
			HX_STACK_LINE(195)
			::openfl::geom::Rectangle _g14 = ::openfl::geom::Rectangle_obj::__new((int)0,(targetRect->height - bl->height),bl->width,bl->height);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(195)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,bl,_g14);
		}
		else{
			HX_STACK_LINE(197)
			::openfl::geom::Rectangle _g15 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(197)
			bl = _g15;
		}
		HX_STACK_LINE(200)
		::openfl::geom::Rectangle br = sourceRects->get(HX_CSTRING("bottom.right"));		HX_STACK_VAR(br,"br");
		HX_STACK_LINE(201)
		if (((br != null()))){
			HX_STACK_LINE(202)
			::openfl::geom::Rectangle _g16 = ::openfl::geom::Rectangle_obj::__new((targetRect->width - br->width),(targetRect->height - br->height),br->width,br->height);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(202)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,br,_g16);
		}
		else{
			HX_STACK_LINE(204)
			::openfl::geom::Rectangle _g17 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(204)
			br = _g17;
		}
		HX_STACK_LINE(207)
		::openfl::geom::Rectangle b = sourceRects->get(HX_CSTRING("bottom"));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(208)
		if (((b != null()))){
			HX_STACK_LINE(209)
			::openfl::geom::Rectangle _g18 = ::openfl::geom::Rectangle_obj::__new(bl->width,(targetRect->height - b->height),((targetRect->width - bl->width) - br->width),b->height);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(209)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,b,_g18);
		}
		else{
			HX_STACK_LINE(211)
			::openfl::geom::Rectangle _g19 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(211)
			b = _g19;
		}
		HX_STACK_LINE(215)
		::openfl::geom::Rectangle l = sourceRects->get(HX_CSTRING("left"));		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(216)
		if (((l != null()))){
			HX_STACK_LINE(217)
			::openfl::geom::Rectangle _g20 = ::openfl::geom::Rectangle_obj::__new((int)0,tl->height,l->width,((targetRect->height - tl->height) - bl->height));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(217)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,l,_g20);
		}
		else{
			HX_STACK_LINE(219)
			::openfl::geom::Rectangle _g21 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(219)
			l = _g21;
		}
		HX_STACK_LINE(222)
		::openfl::geom::Rectangle r = sourceRects->get(HX_CSTRING("right"));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(223)
		if (((r != null()))){
			HX_STACK_LINE(224)
			::openfl::geom::Rectangle _g22 = ::openfl::geom::Rectangle_obj::__new((targetRect->width - r->width),tr->height,r->width,((targetRect->height - tl->height) - bl->height));		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(224)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,r,_g22);
		}
		else{
			HX_STACK_LINE(226)
			::openfl::geom::Rectangle _g23 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(226)
			r = _g23;
		}
		HX_STACK_LINE(229)
		::openfl::geom::Rectangle m = sourceRects->get(HX_CSTRING("middle"));		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(230)
		if (((m != null()))){
			HX_STACK_LINE(231)
			::openfl::geom::Rectangle _g24 = ::openfl::geom::Rectangle_obj::__new(l->width,t->height,((targetRect->width - l->width) - r->width),((targetRect->height - t->height) - b->height));		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(231)
			::haxe::ui::toolkit::style::StyleHelper_obj::paintBitmapSection(g,resourceId,resourceRect,m,_g24);
		}
		else{
			HX_STACK_LINE(233)
			::openfl::geom::Rectangle _g25 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(233)
			m = _g25;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StyleHelper_obj,paintCompoundBitmap,(void))

Void StyleHelper_obj::paintBitmapSection( ::openfl::display::Graphics g,::String resourceId,::openfl::geom::Rectangle resourceRect,::openfl::geom::Rectangle src,::openfl::geom::Rectangle dst){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","paintBitmapSection",0x0cf57546,"haxe.ui.toolkit.style.StyleHelper.paintBitmapSection","haxe/ui/toolkit/style/StyleHelper.hx",237,0xc4c90a00)
		HX_STACK_ARG(g,"g")
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(resourceRect,"resourceRect")
		HX_STACK_ARG(src,"src")
		HX_STACK_ARG(dst,"dst")
		HX_STACK_LINE(238)
		::openfl::display::BitmapData srcData = ::haxe::ui::toolkit::style::StyleHelper_obj::getBitmapSection(resourceId,resourceRect);		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(239)
		if (((srcData == null()))){
			HX_STACK_LINE(240)
			return null();
		}
		HX_STACK_LINE(243)
		if (((bool((bool((bool((src->width <= (int)0)) || bool((src->height <= (int)0)))) || bool((dst->width <= (int)0)))) || bool((dst->height <= (int)0))))){
			HX_STACK_LINE(244)
			return null();
		}
		HX_STACK_LINE(247)
		if (((resourceRect == null()))){
			HX_STACK_LINE(248)
			int _g = srcData->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(248)
			int _g1 = srcData->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(248)
			::openfl::geom::Rectangle _g2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(248)
			resourceRect = _g2;
		}
		HX_STACK_LINE(251)
		Float _g3 = resourceRect->get_left();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(251)
		::String _g4 = ((resourceId + HX_CSTRING("_")) + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(251)
		::String _g5 = (_g4 + HX_CSTRING("_"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(251)
		Float _g6 = resourceRect->get_top();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(251)
		::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(251)
		::String _g8 = (_g7 + HX_CSTRING("_"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(251)
		::String _g9 = (_g8 + resourceRect->width);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(251)
		::String _g10 = (_g9 + HX_CSTRING("_"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(251)
		::String _g11 = (_g10 + resourceRect->height);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(251)
		::String _g12 = (_g11 + HX_CSTRING("___"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(251)
		Float _g13 = src->get_left();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(251)
		::String _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(251)
		::String _g15 = (_g14 + HX_CSTRING("_"));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(251)
		Float _g16 = src->get_top();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(251)
		::String _g17 = (_g15 + _g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(251)
		::String _g18 = (_g17 + HX_CSTRING("_"));		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(251)
		::String _g19 = (_g18 + src->width);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(251)
		::String _g20 = (_g19 + HX_CSTRING("_"));		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(251)
		::String cacheId = (_g20 + src->height);		HX_STACK_VAR(cacheId,"cacheId");
		HX_STACK_LINE(252)
		::openfl::display::BitmapData section = ::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache->get(cacheId);		HX_STACK_VAR(section,"section");
		HX_STACK_LINE(253)
		if (((section == null()))){
			HX_STACK_LINE(254)
			int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
			HX_STACK_LINE(255)
			int _g21 = ::Std_obj::_int(src->width);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(255)
			int _g22 = ::Std_obj::_int(src->height);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(255)
			::openfl::display::BitmapData _g23 = ::openfl::display::BitmapData_obj::__new(_g21,_g22,true,fillcolor,null());		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(255)
			section = _g23;
			HX_STACK_LINE(256)
			::openfl::geom::Point _g24 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(256)
			section->copyPixels(srcData,src,_g24,null(),null(),null());
			HX_STACK_LINE(257)
			::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache->set(cacheId,section);
		}
		HX_STACK_LINE(260)
		Float _g25 = src->get_left();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(260)
		int _g26 = ::Std_obj::_int(_g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(260)
		src->set_left(_g26);
		HX_STACK_LINE(261)
		Float _g27 = src->get_top();		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(261)
		int _g28 = ::Std_obj::_int(_g27);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(261)
		src->set_top(_g28);
		HX_STACK_LINE(262)
		Float _g29 = src->get_bottom();		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(262)
		int _g30 = ::Std_obj::_int(_g29);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(262)
		src->set_bottom(_g30);
		HX_STACK_LINE(263)
		Float _g31 = src->get_right();		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(263)
		int _g32 = ::Std_obj::_int(_g31);		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(263)
		src->set_right(_g32);
		HX_STACK_LINE(264)
		Float _g33 = dst->get_left();		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(264)
		int _g34 = ::Std_obj::_int(_g33);		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(264)
		dst->set_left(_g34);
		HX_STACK_LINE(265)
		Float _g35 = dst->get_top();		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(265)
		int _g36 = ::Std_obj::_int(_g35);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(265)
		dst->set_top(_g36);
		HX_STACK_LINE(266)
		Float _g37 = dst->get_bottom();		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(266)
		int _g38 = ::Std_obj::_int(_g37);		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(266)
		dst->set_bottom(_g38);
		HX_STACK_LINE(267)
		Float _g39 = dst->get_right();		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(267)
		int _g40 = ::Std_obj::_int(_g39);		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(267)
		dst->set_right(_g40);
		HX_STACK_LINE(269)
		::openfl::geom::Matrix mat = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mat,"mat");
		HX_STACK_LINE(270)
		int _g41 = section->get_width();		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(270)
		Float _g42 = (Float(dst->width) / Float(_g41));		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(270)
		int _g43 = section->get_height();		HX_STACK_VAR(_g43,"_g43");
		HX_STACK_LINE(270)
		Float _g44 = (Float(dst->height) / Float(_g43));		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(270)
		mat->scale(_g42,_g44);
		HX_STACK_LINE(271)
		Float _g45 = dst->get_left();		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(271)
		Float _g46 = dst->get_top();		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(271)
		mat->translate(_g45,_g46);
		HX_STACK_LINE(273)
		g->lineStyle((int)0,(int)0,(int)0,null(),null(),null(),null(),null());
		HX_STACK_LINE(274)
		g->beginBitmapFill(section,mat,false,false);
		HX_STACK_LINE(275)
		g->drawRect(dst->x,dst->y,dst->width,dst->height);
		HX_STACK_LINE(276)
		g->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(StyleHelper_obj,paintBitmapSection,(void))

::openfl::display::BitmapData StyleHelper_obj::getBitmapSection( ::String resourceId,::openfl::geom::Rectangle rc){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleHelper","getBitmapSection",0x63ba31ce,"haxe.ui.toolkit.style.StyleHelper.getBitmapSection","haxe/ui/toolkit/style/StyleHelper.hx",279,0xc4c90a00)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(rc,"rc")
	HX_STACK_LINE(280)
	if (((bool((resourceId == null())) || bool((resourceId.length == (int)0))))){
		HX_STACK_LINE(281)
		return null();
	}
	HX_STACK_LINE(284)
	if (((::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache == null()))){
		HX_STACK_LINE(285)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(285)
		::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache = _g;
	}
	HX_STACK_LINE(288)
	if (((rc == null()))){
		HX_STACK_LINE(289)
		::openfl::display::BitmapData resource = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getBitmapData(resourceId,null());		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(290)
		if (((resource != null()))){
			HX_STACK_LINE(291)
			int _g1 = resource->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(291)
			int _g2 = resource->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(291)
			::openfl::geom::Rectangle _g3 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(291)
			rc = _g3;
		}
	}
	HX_STACK_LINE(295)
	Float _g4 = rc->get_left();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(295)
	::String _g5 = ((resourceId + HX_CSTRING("_")) + _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(295)
	::String _g6 = (_g5 + HX_CSTRING("_"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(295)
	Float _g7 = rc->get_top();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(295)
	::String _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(295)
	::String _g9 = (_g8 + HX_CSTRING("_"));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(295)
	::String _g10 = (_g9 + rc->width);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(295)
	::String _g11 = (_g10 + HX_CSTRING("_"));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(295)
	::String cacheId = (_g11 + rc->height);		HX_STACK_VAR(cacheId,"cacheId");
	HX_STACK_LINE(296)
	::openfl::display::BitmapData section = ::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache->get(cacheId);		HX_STACK_VAR(section,"section");
	HX_STACK_LINE(298)
	if (((section == null()))){
		HX_STACK_LINE(299)
		::openfl::display::BitmapData resource = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getBitmapData(resourceId,null());		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(300)
		if (((resource != null()))){
			HX_STACK_LINE(301)
			int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
			HX_STACK_LINE(302)
			int _g12 = ::Std_obj::_int(rc->width);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(302)
			int _g13 = ::Std_obj::_int(rc->height);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(302)
			::openfl::display::BitmapData _g14 = ::openfl::display::BitmapData_obj::__new(_g12,_g13,true,fillcolor,null());		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(302)
			section = _g14;
			HX_STACK_LINE(303)
			::openfl::geom::Point _g15 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(303)
			section->copyPixels(resource,rc,_g15,null(),null(),null());
			HX_STACK_LINE(304)
			::haxe::ui::toolkit::style::StyleHelper_obj::sectionCache->set(cacheId,section);
		}
	}
	HX_STACK_LINE(308)
	return section;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StyleHelper_obj,getBitmapSection,return )


StyleHelper_obj::StyleHelper_obj()
{
}

Dynamic StyleHelper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return clearCache_dyn(); }
		if (HX_FIELD_EQ(inName,"paintStyle") ) { return paintStyle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"paintScale9") ) { return paintScale9_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { return sectionCache; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getBitmapSection") ) { return getBitmapSection_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"paintBitmapSection") ) { return paintBitmapSection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"paintCompoundBitmap") ) { return paintCompoundBitmap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleHelper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { sectionCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleHelper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sectionCache"),
	HX_CSTRING("clearCache"),
	HX_CSTRING("paintStyle"),
	HX_CSTRING("paintScale9"),
	HX_CSTRING("paintCompoundBitmap"),
	HX_CSTRING("paintBitmapSection"),
	HX_CSTRING("getBitmapSection"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StyleHelper_obj::sectionCache,"sectionCache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StyleHelper_obj::sectionCache,"sectionCache");
};

#endif

Class StyleHelper_obj::__mClass;

void StyleHelper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.StyleHelper"), hx::TCanCast< StyleHelper_obj> ,sStaticFields,sMemberFields,
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

void StyleHelper_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
