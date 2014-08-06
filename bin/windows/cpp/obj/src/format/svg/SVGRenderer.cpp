#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_Gfx2Haxe
#include <format/gfx/Gfx2Haxe.h>
#endif
#ifndef INCLUDED_format_gfx_GfxBytes
#include <format/gfx/GfxBytes.h>
#endif
#ifndef INCLUDED_format_gfx_GfxExtent
#include <format/gfx/GfxExtent.h>
#endif
#ifndef INCLUDED_format_gfx_GfxGraphics
#include <format/gfx/GfxGraphics.h>
#endif
#ifndef INCLUDED_format_gfx_GfxTextFinder
#include <format/gfx/GfxTextFinder.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_gfx_LineStyle
#include <format/gfx/LineStyle.h>
#endif
#ifndef INCLUDED_format_svg_DisplayElement
#include <format/svg/DisplayElement.h>
#endif
#ifndef INCLUDED_format_svg_FillType
#include <format/svg/FillType.h>
#endif
#ifndef INCLUDED_format_svg_Grad
#include <format/svg/Grad.h>
#endif
#ifndef INCLUDED_format_svg_Group
#include <format/svg/Group.h>
#endif
#ifndef INCLUDED_format_svg_Path
#include <format/svg/Path.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_format_svg_RenderContext
#include <format/svg/RenderContext.h>
#endif
#ifndef INCLUDED_format_svg_SVGData
#include <format/svg/SVGData.h>
#endif
#ifndef INCLUDED_format_svg_SVGRenderer
#include <format/svg/SVGRenderer.h>
#endif
#ifndef INCLUDED_format_svg_Text
#include <format/svg/Text.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArray
#include <openfl/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace format{
namespace svg{

Void SVGRenderer_obj::__construct(::format::svg::SVGData inSvg,::String inLayer)
{
HX_STACK_FRAME("format.svg.SVGRenderer","new",0x95e46b58,"format.svg.SVGRenderer.new","format/svg/SVGRenderer.hx",46,0x0ea6fb1a)
HX_STACK_THIS(this)
HX_STACK_ARG(inSvg,"inSvg")
HX_STACK_ARG(inLayer,"inLayer")
{
	HX_STACK_LINE(47)
	this->mSvg = inSvg;
	HX_STACK_LINE(49)
	this->width = this->mSvg->width;
	HX_STACK_LINE(50)
	this->height = this->mSvg->height;
	HX_STACK_LINE(51)
	this->mRoot = this->mSvg;
	HX_STACK_LINE(52)
	if (((inLayer != null()))){
		HX_STACK_LINE(54)
		::format::svg::Group _g = this->mSvg->findGroup(inLayer);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		this->mRoot = _g;
		HX_STACK_LINE(55)
		if (((this->mRoot == null()))){
			HX_STACK_LINE(56)
			HX_STACK_DO_THROW((HX_CSTRING("Could not find SVG group: ") + inLayer));
		}
	}
}
;
	return null();
}

//SVGRenderer_obj::~SVGRenderer_obj() { }

Dynamic SVGRenderer_obj::__CreateEmpty() { return  new SVGRenderer_obj; }
hx::ObjectPtr< SVGRenderer_obj > SVGRenderer_obj::__new(::format::svg::SVGData inSvg,::String inLayer)
{  hx::ObjectPtr< SVGRenderer_obj > result = new SVGRenderer_obj();
	result->__construct(inSvg,inLayer);
	return result;}

Dynamic SVGRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SVGRenderer_obj > result = new SVGRenderer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic SVGRenderer_obj::iterate( Dynamic inGfx,Dynamic inFilter){
	HX_STACK_FRAME("format.svg.SVGRenderer","iterate",0x0115f0f2,"format.svg.SVGRenderer.iterate","format/svg/SVGRenderer.hx",72,0x0ea6fb1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inGfx,"inGfx")
	HX_STACK_ARG(inFilter,"inFilter")
	HX_STACK_LINE(73)
	this->mGfx = inGfx;
	HX_STACK_LINE(74)
	::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(74)
	this->mMatrix = _g;
	HX_STACK_LINE(75)
	this->mFilter = inFilter;
	HX_STACK_LINE(76)
	this->mGroupPath = Array_obj< ::String >::__new();
	HX_STACK_LINE(77)
	this->mGfx->size(this->width,this->height);
	HX_STACK_LINE(78)
	this->iterateGroup(this->mRoot,true);
	HX_STACK_LINE(79)
	this->mGfx->eof();
	HX_STACK_LINE(80)
	return inGfx;
}


HX_DEFINE_DYNAMIC_FUNC2(SVGRenderer_obj,iterate,return )

bool SVGRenderer_obj::hasGroup( ::String inName){
	HX_STACK_FRAME("format.svg.SVGRenderer","hasGroup",0x84cf9f8d,"format.svg.SVGRenderer.hasGroup","format/svg/SVGRenderer.hx",84,0x0ea6fb1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(84)
	return this->mRoot->hasGroup(inName);
}


HX_DEFINE_DYNAMIC_FUNC1(SVGRenderer_obj,hasGroup,return )

Void SVGRenderer_obj::iterateText( ::format::svg::Text inText){
{
		HX_STACK_FRAME("format.svg.SVGRenderer","iterateText",0x69994abf,"format.svg.SVGRenderer.iterateText","format/svg/SVGRenderer.hx",88,0x0ea6fb1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inText,"inText")
		HX_STACK_LINE(89)
		if (((  (((this->mFilter_dyn() != null()))) ? bool(!(this->mFilter(inText->name,this->mGroupPath))) : bool(false) ))){
			HX_STACK_LINE(90)
			return null();
		}
		HX_STACK_LINE(91)
		this->mGfx->renderText(inText);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SVGRenderer_obj,iterateText,(void))

Void SVGRenderer_obj::iteratePath( ::format::svg::Path inPath){
{
		HX_STACK_FRAME("format.svg.SVGRenderer","iteratePath",0x66f163b7,"format.svg.SVGRenderer.iteratePath","format/svg/SVGRenderer.hx",95,0x0ea6fb1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inPath,"inPath")
		HX_STACK_LINE(96)
		if (((  (((this->mFilter_dyn() != null()))) ? bool(!(this->mFilter(inPath->name,this->mGroupPath))) : bool(false) ))){
			HX_STACK_LINE(97)
			return null();
		}
		HX_STACK_LINE(99)
		if (((bool((inPath->segments->length == (int)0)) || bool((this->mGfx == null()))))){
			HX_STACK_LINE(100)
			return null();
		}
		HX_STACK_LINE(101)
		Float px = 0.0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(102)
		Float py = 0.0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(104)
		::openfl::geom::Matrix m = inPath->matrix->clone();		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(105)
		m->concat(this->mMatrix);
		HX_STACK_LINE(106)
		::format::svg::RenderContext context = ::format::svg::RenderContext_obj::__new(m,this->mScaleRect,this->mScaleW,this->mScaleH);		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(108)
		bool geomOnly = this->mGfx->geometryOnly();		HX_STACK_VAR(geomOnly,"geomOnly");
		HX_STACK_LINE(109)
		if ((!(geomOnly))){
			HX_STACK_LINE(116)
			inPath->segments->__get((int)0).StaticCast< ::format::svg::PathSegment >()->toGfx(this->mGfx,context);
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				::format::svg::FillType _g = inPath->fill;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(118)
				switch( (int)(_g->__Index())){
					case (int)0: {
						HX_STACK_LINE(118)
						::format::svg::Grad grad = (::format::svg::FillType(_g))->__Param(0);		HX_STACK_VAR(grad,"grad");
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(121)
							grad->updateMatrix(m);
							HX_STACK_LINE(122)
							this->mGfx->beginGradientFill(grad);
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(118)
						int colour = (::format::svg::FillType(_g))->__Param(0);		HX_STACK_VAR(colour,"colour");
						HX_STACK_LINE(124)
						this->mGfx->beginFill(colour,(inPath->fill_alpha * inPath->alpha));
					}
					;break;
					case (int)2: {
					}
					;break;
				}
			}
			HX_STACK_LINE(130)
			if (((inPath->stroke_colour == null()))){
			}
			else{
				HX_STACK_LINE(136)
				::format::gfx::LineStyle style = ::format::gfx::LineStyle_obj::__new();		HX_STACK_VAR(style,"style");
				HX_STACK_LINE(137)
				Float scale = ::Math_obj::sqrt(((m->a * m->a) + (m->c * m->c)));		HX_STACK_VAR(scale,"scale");
				HX_STACK_LINE(138)
				style->thickness = (inPath->stroke_width * scale);
				HX_STACK_LINE(139)
				style->alpha = (inPath->stroke_alpha * inPath->alpha);
				HX_STACK_LINE(140)
				style->color = inPath->stroke_colour;
				HX_STACK_LINE(141)
				style->capsStyle = inPath->stroke_caps;
				HX_STACK_LINE(142)
				style->jointStyle = inPath->joint_style;
				HX_STACK_LINE(143)
				style->miterLimit = inPath->miter_limit;
				HX_STACK_LINE(144)
				this->mGfx->lineStyle(style);
			}
		}
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			Array< ::Dynamic > _g1 = inPath->segments;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				::format::svg::PathSegment segment = _g1->__get(_g).StaticCast< ::format::svg::PathSegment >();		HX_STACK_VAR(segment,"segment");
				HX_STACK_LINE(149)
				++(_g);
				HX_STACK_LINE(150)
				segment->toGfx(this->mGfx,context);
			}
		}
		HX_STACK_LINE(152)
		this->mGfx->endFill();
		HX_STACK_LINE(153)
		this->mGfx->endLineStyle();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SVGRenderer_obj,iteratePath,(void))

Void SVGRenderer_obj::iterateGroup( ::format::svg::Group inGroup,bool inIgnoreDot){
{
		HX_STACK_FRAME("format.svg.SVGRenderer","iterateGroup",0x88e384ed,"format.svg.SVGRenderer.iterateGroup","format/svg/SVGRenderer.hx",159,0x0ea6fb1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inGroup,"inGroup")
		HX_STACK_ARG(inIgnoreDot,"inIgnoreDot")
		struct _Function_1_1{
			inline static bool Block( ::format::svg::Group &inGroup){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/svg/SVGRenderer.hx",161,0x0ea6fb1a)
				{
					HX_STACK_LINE(161)
					::String _g = inGroup->name.substr((int)0,(int)1);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(161)
					return (_g == HX_CSTRING("."));
				}
				return null();
			}
		};
		HX_STACK_LINE(161)
		if (((  (((bool(inIgnoreDot) && bool((inGroup->name != null()))))) ? bool(_Function_1_1::Block(inGroup)) : bool(false) ))){
			HX_STACK_LINE(162)
			return null();
		}
		HX_STACK_LINE(164)
		this->mGroupPath->push(inGroup->name);
		HX_STACK_LINE(168)
		{
			HX_STACK_LINE(168)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(168)
			Array< ::Dynamic > _g1 = inGroup->children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(168)
			while((true)){
				HX_STACK_LINE(168)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(168)
					break;
				}
				HX_STACK_LINE(168)
				::format::svg::DisplayElement child = _g1->__get(_g).StaticCast< ::format::svg::DisplayElement >();		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(168)
				++(_g);
				HX_STACK_LINE(170)
				switch( (int)(child->__Index())){
					case (int)1: {
						HX_STACK_LINE(170)
						::format::svg::Group group = (::format::svg::DisplayElement(child))->__Param(0);		HX_STACK_VAR(group,"group");
						HX_STACK_LINE(173)
						this->iterateGroup(group,inIgnoreDot);
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(170)
						::format::svg::Path path = (::format::svg::DisplayElement(child))->__Param(0);		HX_STACK_VAR(path,"path");
						HX_STACK_LINE(175)
						this->iteratePath(path);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(170)
						::format::svg::Text text = (::format::svg::DisplayElement(child))->__Param(0);		HX_STACK_VAR(text,"text");
						HX_STACK_LINE(177)
						this->iterateText(text);
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(181)
		this->mGroupPath->pop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SVGRenderer_obj,iterateGroup,(void))

Void SVGRenderer_obj::render( ::openfl::display::Graphics inGfx,::openfl::geom::Matrix inMatrix,Dynamic inFilter,::openfl::geom::Rectangle inScaleRect,Dynamic inScaleW,Dynamic inScaleH){
{
		HX_STACK_FRAME("format.svg.SVGRenderer","render",0xb861fb5e,"format.svg.SVGRenderer.render","format/svg/SVGRenderer.hx",189,0x0ea6fb1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inGfx,"inGfx")
		HX_STACK_ARG(inMatrix,"inMatrix")
		HX_STACK_ARG(inFilter,"inFilter")
		HX_STACK_ARG(inScaleRect,"inScaleRect")
		HX_STACK_ARG(inScaleW,"inScaleW")
		HX_STACK_ARG(inScaleH,"inScaleH")
		HX_STACK_LINE(191)
		::format::gfx::GfxGraphics _g = ::format::gfx::GfxGraphics_obj::__new(inGfx);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(191)
		this->mGfx = _g;
		HX_STACK_LINE(192)
		if (((inMatrix == null()))){
			HX_STACK_LINE(193)
			::openfl::geom::Matrix _g1 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			this->mMatrix = _g1;
		}
		else{
			HX_STACK_LINE(195)
			::openfl::geom::Matrix _g2 = inMatrix->clone();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(195)
			this->mMatrix = _g2;
		}
		HX_STACK_LINE(197)
		this->mScaleRect = inScaleRect;
		HX_STACK_LINE(198)
		this->mScaleW = inScaleW;
		HX_STACK_LINE(199)
		this->mScaleH = inScaleH;
		HX_STACK_LINE(200)
		this->mFilter = inFilter;
		HX_STACK_LINE(201)
		this->mGroupPath = Array_obj< ::String >::__new();
		HX_STACK_LINE(203)
		this->iterateGroup(this->mRoot,(inFilter == null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(SVGRenderer_obj,render,(void))

Void SVGRenderer_obj::renderRect( ::openfl::display::Graphics inGfx,Dynamic inFilter,::openfl::geom::Rectangle scaleRect,::openfl::geom::Rectangle inBounds,::openfl::geom::Rectangle inRect){
{
		HX_STACK_FRAME("format.svg.SVGRenderer","renderRect",0xe6a67ba2,"format.svg.SVGRenderer.renderRect","format/svg/SVGRenderer.hx",206,0x0ea6fb1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inGfx,"inGfx")
		HX_STACK_ARG(inFilter,"inFilter")
		HX_STACK_ARG(scaleRect,"scaleRect")
		HX_STACK_ARG(inBounds,"inBounds")
		HX_STACK_ARG(inRect,"inRect")
		HX_STACK_LINE(207)
		::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(208)
		matrix->tx = (inRect->x - inBounds->x);
		HX_STACK_LINE(209)
		matrix->ty = (inRect->y - inBounds->y);
		HX_STACK_LINE(210)
		if (((scaleRect != null()))){
			HX_STACK_LINE(212)
			Float extraX = (inRect->width - ((inBounds->width - scaleRect->width)));		HX_STACK_VAR(extraX,"extraX");
			HX_STACK_LINE(213)
			Float extraY = (inRect->height - ((inBounds->height - scaleRect->height)));		HX_STACK_VAR(extraY,"extraY");
			HX_STACK_LINE(214)
			this->render(inGfx,matrix,inFilter,scaleRect,extraX,extraY);
		}
		else{
			HX_STACK_LINE(217)
			this->render(inGfx,matrix,inFilter,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SVGRenderer_obj,renderRect,(void))

Void SVGRenderer_obj::renderRect0( ::openfl::display::Graphics inGfx,Dynamic inFilter,::openfl::geom::Rectangle scaleRect,::openfl::geom::Rectangle inBounds,::openfl::geom::Rectangle inRect){
{
		HX_STACK_FRAME("format.svg.SVGRenderer","renderRect0",0xeb05b24e,"format.svg.SVGRenderer.renderRect0","format/svg/SVGRenderer.hx",221,0x0ea6fb1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inGfx,"inGfx")
		HX_STACK_ARG(inFilter,"inFilter")
		HX_STACK_ARG(scaleRect,"scaleRect")
		HX_STACK_ARG(inBounds,"inBounds")
		HX_STACK_ARG(inRect,"inRect")
		HX_STACK_LINE(222)
		::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(223)
		matrix->tx = -(inBounds->x);
		HX_STACK_LINE(224)
		matrix->ty = -(inBounds->y);
		HX_STACK_LINE(225)
		if (((scaleRect != null()))){
			HX_STACK_LINE(227)
			Float extraX = (inRect->width - ((inBounds->width - scaleRect->width)));		HX_STACK_VAR(extraX,"extraX");
			HX_STACK_LINE(228)
			Float extraY = (inRect->height - ((inBounds->height - scaleRect->height)));		HX_STACK_VAR(extraY,"extraY");
			HX_STACK_LINE(229)
			this->render(inGfx,matrix,inFilter,scaleRect,extraX,extraY);
		}
		else{
			HX_STACK_LINE(232)
			this->render(inGfx,matrix,inFilter,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SVGRenderer_obj,renderRect0,(void))

::openfl::geom::Rectangle SVGRenderer_obj::getExtent( ::openfl::geom::Matrix inMatrix,Dynamic inFilter,Dynamic inIgnoreDot){
	HX_STACK_FRAME("format.svg.SVGRenderer","getExtent",0x973c8018,"format.svg.SVGRenderer.getExtent","format/svg/SVGRenderer.hx",240,0x0ea6fb1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inMatrix,"inMatrix")
	HX_STACK_ARG(inFilter,"inFilter")
	HX_STACK_ARG(inIgnoreDot,"inIgnoreDot")
	HX_STACK_LINE(241)
	if (((inIgnoreDot == null()))){
		HX_STACK_LINE(242)
		inIgnoreDot = (inFilter == null());
	}
	HX_STACK_LINE(243)
	::format::gfx::GfxExtent gfx = ::format::gfx::GfxExtent_obj::__new();		HX_STACK_VAR(gfx,"gfx");
	HX_STACK_LINE(244)
	this->mGfx = gfx;
	HX_STACK_LINE(245)
	if (((inMatrix == null()))){
		HX_STACK_LINE(246)
		::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(246)
		this->mMatrix = _g;
	}
	else{
		HX_STACK_LINE(248)
		::openfl::geom::Matrix _g1 = inMatrix->clone();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(248)
		this->mMatrix = _g1;
	}
	HX_STACK_LINE(250)
	this->mFilter = inFilter;
	HX_STACK_LINE(251)
	this->mGroupPath = Array_obj< ::String >::__new();
	HX_STACK_LINE(253)
	this->iterateGroup(this->mRoot,inIgnoreDot);
	HX_STACK_LINE(255)
	return gfx->extent;
}


HX_DEFINE_DYNAMIC_FUNC3(SVGRenderer_obj,getExtent,return )

::format::svg::Text SVGRenderer_obj::findText( Dynamic inFilter){
	HX_STACK_FRAME("format.svg.SVGRenderer","findText",0xfe107b8e,"format.svg.SVGRenderer.findText","format/svg/SVGRenderer.hx",259,0x0ea6fb1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inFilter,"inFilter")
	HX_STACK_LINE(260)
	this->mFilter = inFilter;
	HX_STACK_LINE(261)
	this->mGroupPath = Array_obj< ::String >::__new();
	HX_STACK_LINE(262)
	::format::gfx::GfxTextFinder finder = ::format::gfx::GfxTextFinder_obj::__new();		HX_STACK_VAR(finder,"finder");
	HX_STACK_LINE(263)
	this->mGfx = finder;
	HX_STACK_LINE(264)
	this->iterateGroup(this->mRoot,false);
	HX_STACK_LINE(265)
	return finder->text;
}


HX_DEFINE_DYNAMIC_FUNC1(SVGRenderer_obj,findText,return )

::openfl::geom::Rectangle SVGRenderer_obj::getMatchingRect( ::EReg inMatch){
	HX_STACK_FRAME("format.svg.SVGRenderer","getMatchingRect",0x8129bd2f,"format.svg.SVGRenderer.getMatchingRect","format/svg/SVGRenderer.hx",268,0x0ea6fb1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inMatch,"inMatch")
	HX_STACK_LINE(268)
	Array< ::Dynamic > inMatch1 = Array_obj< ::Dynamic >::__new().Add(inMatch);		HX_STACK_VAR(inMatch1,"inMatch1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,inMatch1)
	bool run(::String _,Array< ::String > groups){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","format/svg/SVGRenderer.hx",271,0x0ea6fb1a)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(groups,"groups")
		{
			HX_STACK_LINE(271)
			return (bool((groups->__get((int)1) != null())) && bool(inMatch1->__get((int)0).StaticCast< ::EReg >()->match(groups->__get((int)1))));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(270)
	return this->getExtent(null(), Dynamic(new _Function_1_1(inMatch1)),false);
}


HX_DEFINE_DYNAMIC_FUNC1(SVGRenderer_obj,getMatchingRect,return )

Void SVGRenderer_obj::renderObject( ::openfl::display::DisplayObject inObj,::openfl::display::Graphics inGfx,::openfl::geom::Matrix inMatrix,Dynamic inFilter,::openfl::geom::Rectangle inScale9){
{
		HX_STACK_FRAME("format.svg.SVGRenderer","renderObject",0xd145c8bd,"format.svg.SVGRenderer.renderObject","format/svg/SVGRenderer.hx",277,0x0ea6fb1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inObj,"inObj")
		HX_STACK_ARG(inGfx,"inGfx")
		HX_STACK_ARG(inMatrix,"inMatrix")
		HX_STACK_ARG(inFilter,"inFilter")
		HX_STACK_ARG(inScale9,"inScale9")
		HX_STACK_LINE(278)
		this->render(inGfx,inMatrix,inFilter,inScale9,null(),null());

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		bool run(::String _,Array< ::String > groups){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","format/svg/SVGRenderer.hx",279,0x0ea6fb1a)
			HX_STACK_ARG(_,"_")
			HX_STACK_ARG(groups,"groups")
			{
				HX_STACK_LINE(279)
				return (groups->__get((int)1) == HX_CSTRING(".scale9"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(279)
		::openfl::geom::Rectangle rect = this->getExtent(inMatrix, Dynamic(new _Function_1_1()),null());		HX_STACK_VAR(rect,"rect");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SVGRenderer_obj,renderObject,(void))

Void SVGRenderer_obj::renderSprite( ::openfl::display::Sprite inObj,::openfl::geom::Matrix inMatrix,Dynamic inFilter,::openfl::geom::Rectangle inScale9){
{
		HX_STACK_FRAME("format.svg.SVGRenderer","renderSprite",0x7f9c2603,"format.svg.SVGRenderer.renderSprite","format/svg/SVGRenderer.hx",291,0x0ea6fb1a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inObj,"inObj")
		HX_STACK_ARG(inMatrix,"inMatrix")
		HX_STACK_ARG(inFilter,"inFilter")
		HX_STACK_ARG(inScale9,"inScale9")
		HX_STACK_LINE(292)
		::openfl::display::Graphics _g = inObj->get_graphics();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(292)
		this->renderObject(inObj,_g,inMatrix,inFilter,inScale9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SVGRenderer_obj,renderSprite,(void))

::openfl::display::Shape SVGRenderer_obj::createShape( ::openfl::geom::Matrix inMatrix,Dynamic inFilter,::openfl::geom::Rectangle inScale9){
	HX_STACK_FRAME("format.svg.SVGRenderer","createShape",0xde306d7d,"format.svg.SVGRenderer.createShape","format/svg/SVGRenderer.hx",296,0x0ea6fb1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inMatrix,"inMatrix")
	HX_STACK_ARG(inFilter,"inFilter")
	HX_STACK_ARG(inScale9,"inScale9")
	HX_STACK_LINE(297)
	::openfl::display::Shape shape = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(shape,"shape");
	HX_STACK_LINE(298)
	::openfl::display::Graphics _g = shape->get_graphics();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(298)
	this->renderObject(shape,_g,inMatrix,inFilter,inScale9);
	HX_STACK_LINE(299)
	return shape;
}


HX_DEFINE_DYNAMIC_FUNC3(SVGRenderer_obj,createShape,return )

::openfl::display::Shape SVGRenderer_obj::namedShape( ::String inName){
	HX_STACK_FRAME("format.svg.SVGRenderer","namedShape",0x58da58b0,"format.svg.SVGRenderer.namedShape","format/svg/SVGRenderer.hx",302,0x0ea6fb1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(302)
	Array< ::String > inName1 = Array_obj< ::String >::__new().Add(inName);		HX_STACK_VAR(inName1,"inName1");

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::String >,inName1)
	bool run(::String name,Array< ::String > _){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","format/svg/SVGRenderer.hx",304,0x0ea6fb1a)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(_,"_")
		{
			HX_STACK_LINE(304)
			return (name == inName1->__get((int)0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(304)
	return this->createShape(null(), Dynamic(new _Function_1_1(inName1)),null());
}


HX_DEFINE_DYNAMIC_FUNC1(SVGRenderer_obj,namedShape,return )

::openfl::display::BitmapData SVGRenderer_obj::renderBitmap( ::openfl::geom::Rectangle inRect,hx::Null< Float >  __o_inScale){
Float inScale = __o_inScale.Default(1.0);
	HX_STACK_FRAME("format.svg.SVGRenderer","renderBitmap",0xad1259ed,"format.svg.SVGRenderer.renderBitmap","format/svg/SVGRenderer.hx",309,0x0ea6fb1a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inRect,"inRect")
	HX_STACK_ARG(inScale,"inScale")
{
		HX_STACK_LINE(310)
		::openfl::geom::Matrix _g = ::openfl::geom::Matrix_obj::__new(inScale,(int)0,(int)0,inScale,(-(inRect->x) * inScale),(-(inRect->y) * inScale));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(310)
		this->mMatrix = _g;
		HX_STACK_LINE(312)
		int _g1 = ::Math_obj::ceil((  (((inRect == null()))) ? Float(this->width) : Float((inRect->width * inScale)) ));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(312)
		int w = ::Std_obj::_int(_g1);		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(313)
		int _g2 = ::Math_obj::ceil((  (((inRect == null()))) ? Float(this->width) : Float((inRect->height * inScale)) ));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(313)
		int h = ::Std_obj::_int(_g2);		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(315)
		::openfl::display::BitmapData bmp = ::openfl::display::BitmapData_obj::__new(w,h,true,(int)0,null());		HX_STACK_VAR(bmp,"bmp");
		HX_STACK_LINE(317)
		::openfl::display::Shape shape = ::openfl::display::Shape_obj::__new();		HX_STACK_VAR(shape,"shape");
		HX_STACK_LINE(318)
		::openfl::display::Graphics _g3 = shape->get_graphics();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(318)
		::format::gfx::GfxGraphics _g4 = ::format::gfx::GfxGraphics_obj::__new(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(318)
		this->mGfx = _g4;
		HX_STACK_LINE(320)
		this->mGroupPath = Array_obj< ::String >::__new();
		HX_STACK_LINE(321)
		this->iterateGroup(this->mRoot,true);
		HX_STACK_LINE(323)
		bmp->draw(shape,null(),null(),null(),null(),null());
		HX_STACK_LINE(324)
		this->mGfx = null();
		HX_STACK_LINE(326)
		return bmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(SVGRenderer_obj,renderBitmap,return )

Array< ::String > SVGRenderer_obj::toHaxe( ::Xml inXML,Dynamic inFilter){
	HX_STACK_FRAME("format.svg.SVGRenderer","toHaxe",0x2dfa2f49,"format.svg.SVGRenderer.toHaxe","format/svg/SVGRenderer.hx",61,0x0ea6fb1a)
	HX_STACK_ARG(inXML,"inXML")
	HX_STACK_ARG(inFilter,"inFilter")
	HX_STACK_LINE(62)
	::format::svg::SVGData _g = ::format::svg::SVGData_obj::__new(inXML,true);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	::format::gfx::Gfx2Haxe _g1 = ::format::gfx::Gfx2Haxe_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(62)
	return ::format::svg::SVGRenderer_obj::__new(_g,null())->iterate(_g1,inFilter)->__Field(HX_CSTRING("commands"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SVGRenderer_obj,toHaxe,return )

::format::gfx::GfxBytes SVGRenderer_obj::toBytes( ::Xml inXML,Dynamic inFilter){
	HX_STACK_FRAME("format.svg.SVGRenderer","toBytes",0xa861cbe8,"format.svg.SVGRenderer.toBytes","format/svg/SVGRenderer.hx",66,0x0ea6fb1a)
	HX_STACK_ARG(inXML,"inXML")
	HX_STACK_ARG(inFilter,"inFilter")
	HX_STACK_LINE(67)
	::format::svg::SVGData _g = ::format::svg::SVGData_obj::__new(inXML,true);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(67)
	::format::gfx::GfxBytes _g1 = ::format::gfx::GfxBytes_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(67)
	return ::format::svg::SVGRenderer_obj::__new(_g,null())->iterate(_g1,inFilter);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SVGRenderer_obj,toBytes,return )


SVGRenderer_obj::SVGRenderer_obj()
{
}

void SVGRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SVGRenderer);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(mSvg,"mSvg");
	HX_MARK_MEMBER_NAME(mRoot,"mRoot");
	HX_MARK_MEMBER_NAME(mGfx,"mGfx");
	HX_MARK_MEMBER_NAME(mMatrix,"mMatrix");
	HX_MARK_MEMBER_NAME(mScaleRect,"mScaleRect");
	HX_MARK_MEMBER_NAME(mScaleW,"mScaleW");
	HX_MARK_MEMBER_NAME(mScaleH,"mScaleH");
	HX_MARK_MEMBER_NAME(mFilter,"mFilter");
	HX_MARK_MEMBER_NAME(mGroupPath,"mGroupPath");
	HX_MARK_END_CLASS();
}

void SVGRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(mSvg,"mSvg");
	HX_VISIT_MEMBER_NAME(mRoot,"mRoot");
	HX_VISIT_MEMBER_NAME(mGfx,"mGfx");
	HX_VISIT_MEMBER_NAME(mMatrix,"mMatrix");
	HX_VISIT_MEMBER_NAME(mScaleRect,"mScaleRect");
	HX_VISIT_MEMBER_NAME(mScaleW,"mScaleW");
	HX_VISIT_MEMBER_NAME(mScaleH,"mScaleH");
	HX_VISIT_MEMBER_NAME(mFilter,"mFilter");
	HX_VISIT_MEMBER_NAME(mGroupPath,"mGroupPath");
}

Dynamic SVGRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mSvg") ) { return mSvg; }
		if (HX_FIELD_EQ(inName,"mGfx") ) { return mGfx; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"mRoot") ) { return mRoot; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toHaxe") ) { return toHaxe_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toBytes") ) { return toBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"mMatrix") ) { return mMatrix; }
		if (HX_FIELD_EQ(inName,"mScaleW") ) { return mScaleW; }
		if (HX_FIELD_EQ(inName,"mScaleH") ) { return mScaleH; }
		if (HX_FIELD_EQ(inName,"mFilter") ) { return mFilter; }
		if (HX_FIELD_EQ(inName,"iterate") ) { return iterate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasGroup") ) { return hasGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"findText") ) { return findText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getExtent") ) { return getExtent_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mScaleRect") ) { return mScaleRect; }
		if (HX_FIELD_EQ(inName,"mGroupPath") ) { return mGroupPath; }
		if (HX_FIELD_EQ(inName,"renderRect") ) { return renderRect_dyn(); }
		if (HX_FIELD_EQ(inName,"namedShape") ) { return namedShape_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iterateText") ) { return iterateText_dyn(); }
		if (HX_FIELD_EQ(inName,"iteratePath") ) { return iteratePath_dyn(); }
		if (HX_FIELD_EQ(inName,"renderRect0") ) { return renderRect0_dyn(); }
		if (HX_FIELD_EQ(inName,"createShape") ) { return createShape_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"iterateGroup") ) { return iterateGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"renderObject") ) { return renderObject_dyn(); }
		if (HX_FIELD_EQ(inName,"renderSprite") ) { return renderSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"renderBitmap") ) { return renderBitmap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMatchingRect") ) { return getMatchingRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SVGRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mSvg") ) { mSvg=inValue.Cast< ::format::svg::SVGData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mGfx") ) { mGfx=inValue.Cast< ::format::gfx::Gfx >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mRoot") ) { mRoot=inValue.Cast< ::format::svg::Group >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mMatrix") ) { mMatrix=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mScaleW") ) { mScaleW=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mScaleH") ) { mScaleH=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mFilter") ) { mFilter=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mScaleRect") ) { mScaleRect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mGroupPath") ) { mGroupPath=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SVGRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("mSvg"));
	outFields->push(HX_CSTRING("mRoot"));
	outFields->push(HX_CSTRING("mGfx"));
	outFields->push(HX_CSTRING("mMatrix"));
	outFields->push(HX_CSTRING("mScaleRect"));
	outFields->push(HX_CSTRING("mScaleW"));
	outFields->push(HX_CSTRING("mScaleH"));
	outFields->push(HX_CSTRING("mGroupPath"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("toHaxe"),
	HX_CSTRING("toBytes"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SVGRenderer_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(SVGRenderer_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::format::svg::SVGData*/ ,(int)offsetof(SVGRenderer_obj,mSvg),HX_CSTRING("mSvg")},
	{hx::fsObject /*::format::svg::Group*/ ,(int)offsetof(SVGRenderer_obj,mRoot),HX_CSTRING("mRoot")},
	{hx::fsObject /*::format::gfx::Gfx*/ ,(int)offsetof(SVGRenderer_obj,mGfx),HX_CSTRING("mGfx")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(SVGRenderer_obj,mMatrix),HX_CSTRING("mMatrix")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(SVGRenderer_obj,mScaleRect),HX_CSTRING("mScaleRect")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SVGRenderer_obj,mScaleW),HX_CSTRING("mScaleW")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SVGRenderer_obj,mScaleH),HX_CSTRING("mScaleH")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SVGRenderer_obj,mFilter),HX_CSTRING("mFilter")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(SVGRenderer_obj,mGroupPath),HX_CSTRING("mGroupPath")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("mSvg"),
	HX_CSTRING("mRoot"),
	HX_CSTRING("mGfx"),
	HX_CSTRING("mMatrix"),
	HX_CSTRING("mScaleRect"),
	HX_CSTRING("mScaleW"),
	HX_CSTRING("mScaleH"),
	HX_CSTRING("mFilter"),
	HX_CSTRING("mGroupPath"),
	HX_CSTRING("iterate"),
	HX_CSTRING("hasGroup"),
	HX_CSTRING("iterateText"),
	HX_CSTRING("iteratePath"),
	HX_CSTRING("iterateGroup"),
	HX_CSTRING("render"),
	HX_CSTRING("renderRect"),
	HX_CSTRING("renderRect0"),
	HX_CSTRING("getExtent"),
	HX_CSTRING("findText"),
	HX_CSTRING("getMatchingRect"),
	HX_CSTRING("renderObject"),
	HX_CSTRING("renderSprite"),
	HX_CSTRING("createShape"),
	HX_CSTRING("namedShape"),
	HX_CSTRING("renderBitmap"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SVGRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SVGRenderer_obj::__mClass,"__mClass");
};

#endif

Class SVGRenderer_obj::__mClass;

void SVGRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.SVGRenderer"), hx::TCanCast< SVGRenderer_obj> ,sStaticFields,sMemberFields,
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

void SVGRenderer_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
