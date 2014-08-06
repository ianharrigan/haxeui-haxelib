#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_GfxBytes
#include <format/gfx/GfxBytes.h>
#endif
#ifndef INCLUDED_format_gfx_Gradient
#include <format/gfx/Gradient.h>
#endif
#ifndef INCLUDED_format_gfx_LineStyle
#include <format/gfx/LineStyle.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_GradientType
#include <openfl/display/GradientType.h>
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
#ifndef INCLUDED_openfl_utils_ByteArray
#include <openfl/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl_utils_CompressionAlgorithm
#include <openfl/utils/CompressionAlgorithm.h>
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
namespace gfx{

Void GfxBytes_obj::__construct(::openfl::utils::ByteArray inBuffer,hx::Null< int >  __o_inFlags)
{
HX_STACK_FRAME("format.gfx.GfxBytes","new",0x2d296170,"format.gfx.GfxBytes.new","format/gfx/GfxBytes.hx",45,0x1ef332be)
HX_STACK_THIS(this)
HX_STACK_ARG(inBuffer,"inBuffer")
HX_STACK_ARG(__o_inFlags,"inFlags")
int inFlags = __o_inFlags.Default(0);
{
	HX_STACK_LINE(46)
	super::__construct();
	HX_STACK_LINE(47)
	::openfl::utils::ByteArray _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	if (((inBuffer == null()))){
		HX_STACK_LINE(47)
		_g = ::openfl::utils::ByteArray_obj::__new(null());
	}
	else{
		HX_STACK_LINE(47)
		_g = inBuffer;
	}
	HX_STACK_LINE(47)
	this->buffer = _g;
}
;
	return null();
}

//GfxBytes_obj::~GfxBytes_obj() { }

Dynamic GfxBytes_obj::__CreateEmpty() { return  new GfxBytes_obj; }
hx::ObjectPtr< GfxBytes_obj > GfxBytes_obj::__new(::openfl::utils::ByteArray inBuffer,hx::Null< int >  __o_inFlags)
{  hx::ObjectPtr< GfxBytes_obj > result = new GfxBytes_obj();
	result->__construct(inBuffer,__o_inFlags);
	return result;}

Dynamic GfxBytes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GfxBytes_obj > result = new GfxBytes_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String GfxBytes_obj::toString( ){
	HX_STACK_FRAME("format.gfx.GfxBytes","toString",0x8c81659c,"format.gfx.GfxBytes.toString","format/gfx/GfxBytes.hx",51,0x1ef332be)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	::openfl::utils::ByteArray buf = ::openfl::utils::ByteArray_obj::__new(this->buffer->length);		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(61)
	this->buffer->position = (int)0;
	HX_STACK_LINE(62)
	this->buffer->readBytes(buf,null(),null());
	HX_STACK_LINE(63)
	buf->compress(null());
	HX_STACK_LINE(64)
	if (((::format::gfx::GfxBytes_obj::baseCoder == null()))){
		HX_STACK_LINE(65)
		::haxe::io::Bytes _g = ::haxe::io::Bytes_obj::ofString(::format::gfx::GfxBytes_obj::base64);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		::haxe::crypto::BaseCode _g1 = ::haxe::crypto::BaseCode_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(65)
		::format::gfx::GfxBytes_obj::baseCoder = _g1;
	}
	HX_STACK_LINE(69)
	return ::format::gfx::GfxBytes_obj::baseCoder->encodeBytes(buf)->toString();
}


HX_DEFINE_DYNAMIC_FUNC0(GfxBytes_obj,toString,return )

Void GfxBytes_obj::eof( ){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","eof",0x2d2295cc,"format.gfx.GfxBytes.eof","format/gfx/GfxBytes.hx",91,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(91)
		_this->ensureElem(_this->position,true);
		HX_STACK_LINE(91)
		int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		_this->b[_g] = (int)0;
	}
return null();
}


Void GfxBytes_obj::iterate( ::format::gfx::Gfx inGfx){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","iterate",0xeeabd30a,"format.gfx.GfxBytes.iterate","format/gfx/GfxBytes.hx",100,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inGfx,"inGfx")
		HX_STACK_LINE(101)
		this->buffer->position = (int)0;
		HX_STACK_LINE(102)
		while((true)){
			HX_STACK_LINE(104)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(104)
				int value;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(104)
				if (((_this->position < _this->length))){
					HX_STACK_LINE(104)
					int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(104)
					value = _this->b->__get(pos);
				}
				else{
					HX_STACK_LINE(104)
					value = _this->__throwEOFi();
				}
				HX_STACK_LINE(104)
				if (((((int(value) & int((int)128))) != (int)0))){
					HX_STACK_LINE(104)
					_g = (value - (int)256);
				}
				else{
					HX_STACK_LINE(104)
					_g = value;
				}
			}
			HX_STACK_LINE(104)
			switch( (int)(_g)){
				case (int)0: {
					HX_STACK_LINE(107)
					return null();
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(110)
					Float w = this->buffer->readFloat();		HX_STACK_VAR(w,"w");
					HX_STACK_LINE(111)
					Float h = this->buffer->readFloat();		HX_STACK_VAR(h,"h");
					HX_STACK_LINE(112)
					inGfx->size(w,h);
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(115)
					int col = this->readRGB();		HX_STACK_VAR(col,"col");
					HX_STACK_LINE(116)
					Float alpha = this->buffer->readFloat();		HX_STACK_VAR(alpha,"alpha");
					HX_STACK_LINE(117)
					inGfx->beginFill(col,alpha);
				}
				;break;
				case (int)11: {
					HX_STACK_LINE(120)
					::format::gfx::Gradient grad = ::format::gfx::Gradient_obj::__new();		HX_STACK_VAR(grad,"grad");
					HX_STACK_LINE(121)
					int _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(121)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(121)
						if (((_this->position < _this->length))){
							HX_STACK_LINE(121)
							int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(121)
							value = _this->b->__get(pos);
						}
						else{
							HX_STACK_LINE(121)
							value = _this->__throwEOFi();
						}
						HX_STACK_LINE(121)
						if (((((int(value) & int((int)128))) != (int)0))){
							HX_STACK_LINE(121)
							_g1 = (value - (int)256);
						}
						else{
							HX_STACK_LINE(121)
							_g1 = value;
						}
					}
					HX_STACK_LINE(121)
					::openfl::display::GradientType _g11 = ::Type_obj::createEnumIndex(hx::ClassOf< ::openfl::display::GradientType >(),_g1,null());		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(121)
					grad->type = _g11;
					HX_STACK_LINE(122)
					int len;		HX_STACK_VAR(len,"len");
					HX_STACK_LINE(122)
					{
						HX_STACK_LINE(122)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(122)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(122)
						if (((_this->position < _this->length))){
							HX_STACK_LINE(122)
							int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(122)
							value = _this->b->__get(pos);
						}
						else{
							HX_STACK_LINE(122)
							value = _this->__throwEOFi();
						}
						HX_STACK_LINE(122)
						if (((((int(value) & int((int)128))) != (int)0))){
							HX_STACK_LINE(122)
							len = (value - (int)256);
						}
						else{
							HX_STACK_LINE(122)
							len = value;
						}
					}
					HX_STACK_LINE(123)
					{
						HX_STACK_LINE(123)
						int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(123)
						while((true)){
							HX_STACK_LINE(123)
							if ((!(((_g12 < len))))){
								HX_STACK_LINE(123)
								break;
							}
							HX_STACK_LINE(123)
							int i = (_g12)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(125)
							int _g2 = this->readRGB();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(125)
							grad->colors->push(_g2);
							HX_STACK_LINE(126)
							int _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(126)
							{
								HX_STACK_LINE(126)
								::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(126)
								int value;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(126)
								if (((_this->position < _this->length))){
									HX_STACK_LINE(126)
									int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(126)
									value = _this->b->__get(pos);
								}
								else{
									HX_STACK_LINE(126)
									value = _this->__throwEOFi();
								}
								HX_STACK_LINE(126)
								if (((((int(value) & int((int)128))) != (int)0))){
									HX_STACK_LINE(126)
									_g3 = (value - (int)256);
								}
								else{
									HX_STACK_LINE(126)
									_g3 = value;
								}
							}
							HX_STACK_LINE(126)
							Float _g4 = (Float(_g3) / Float(255.0));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(126)
							grad->alphas->push(_g4);
							HX_STACK_LINE(127)
							int _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(127)
							{
								HX_STACK_LINE(127)
								::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(127)
								int value;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(127)
								if (((_this->position < _this->length))){
									HX_STACK_LINE(127)
									int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(127)
									value = _this->b->__get(pos);
								}
								else{
									HX_STACK_LINE(127)
									value = _this->__throwEOFi();
								}
								HX_STACK_LINE(127)
								if (((((int(value) & int((int)128))) != (int)0))){
									HX_STACK_LINE(127)
									_g5 = (value - (int)256);
								}
								else{
									HX_STACK_LINE(127)
									_g5 = value;
								}
							}
							HX_STACK_LINE(127)
							grad->ratios->push(_g5);
						}
					}
					HX_STACK_LINE(129)
					Float _g6 = this->buffer->readFloat();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(129)
					grad->matrix->a = _g6;
					HX_STACK_LINE(130)
					Float _g7 = this->buffer->readFloat();		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(130)
					grad->matrix->b = _g7;
					HX_STACK_LINE(131)
					Float _g8 = this->buffer->readFloat();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(131)
					grad->matrix->c = _g8;
					HX_STACK_LINE(132)
					Float _g9 = this->buffer->readFloat();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(132)
					grad->matrix->d = _g9;
					HX_STACK_LINE(133)
					Float _g10 = this->buffer->readFloat();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(133)
					grad->matrix->tx = _g10;
					HX_STACK_LINE(134)
					Float _g111 = this->buffer->readFloat();		HX_STACK_VAR(_g111,"_g111");
					HX_STACK_LINE(134)
					grad->matrix->ty = _g111;
					HX_STACK_LINE(135)
					int _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(135)
					{
						HX_STACK_LINE(135)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(135)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(135)
						if (((_this->position < _this->length))){
							HX_STACK_LINE(135)
							int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(135)
							value = _this->b->__get(pos);
						}
						else{
							HX_STACK_LINE(135)
							value = _this->__throwEOFi();
						}
						HX_STACK_LINE(135)
						if (((((int(value) & int((int)128))) != (int)0))){
							HX_STACK_LINE(135)
							_g12 = (value - (int)256);
						}
						else{
							HX_STACK_LINE(135)
							_g12 = value;
						}
					}
					HX_STACK_LINE(135)
					::openfl::display::SpreadMethod _g13 = ::format::gfx::GfxBytes_obj::spreadMethods->__get(_g12).StaticCast< ::openfl::display::SpreadMethod >();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(135)
					grad->spread = _g13;
					HX_STACK_LINE(136)
					int _g14;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(136)
					{
						HX_STACK_LINE(136)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(136)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(136)
						if (((_this->position < _this->length))){
							HX_STACK_LINE(136)
							int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(136)
							value = _this->b->__get(pos);
						}
						else{
							HX_STACK_LINE(136)
							value = _this->__throwEOFi();
						}
						HX_STACK_LINE(136)
						if (((((int(value) & int((int)128))) != (int)0))){
							HX_STACK_LINE(136)
							_g14 = (value - (int)256);
						}
						else{
							HX_STACK_LINE(136)
							_g14 = value;
						}
					}
					HX_STACK_LINE(136)
					::openfl::display::InterpolationMethod _g15 = ::format::gfx::GfxBytes_obj::interpolationMethods->__get(_g14).StaticCast< ::openfl::display::InterpolationMethod >();		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(136)
					grad->interp = _g15;
					HX_STACK_LINE(137)
					Float _g16 = this->buffer->readFloat();		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(137)
					grad->focus = _g16;
					HX_STACK_LINE(138)
					inGfx->beginGradientFill(grad);
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(141)
					inGfx->endFill();
				}
				;break;
				case (int)20: {
					HX_STACK_LINE(144)
					::format::gfx::LineStyle style = ::format::gfx::LineStyle_obj::__new();		HX_STACK_VAR(style,"style");
					HX_STACK_LINE(145)
					Float _g17 = this->buffer->readFloat();		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(145)
					style->thickness = _g17;
					HX_STACK_LINE(146)
					int _g18 = this->readRGB();		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(146)
					style->color = _g18;
					HX_STACK_LINE(147)
					Float _g19 = this->buffer->readFloat();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(147)
					style->alpha = _g19;
					HX_STACK_LINE(148)
					int _g20;		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(148)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(148)
						if (((_this->position < _this->length))){
							HX_STACK_LINE(148)
							int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(148)
							value = _this->b->__get(pos);
						}
						else{
							HX_STACK_LINE(148)
							value = _this->__throwEOFi();
						}
						HX_STACK_LINE(148)
						if (((((int(value) & int((int)128))) != (int)0))){
							HX_STACK_LINE(148)
							_g20 = (value - (int)256);
						}
						else{
							HX_STACK_LINE(148)
							_g20 = value;
						}
					}
					HX_STACK_LINE(148)
					bool _g21 = (_g20 > (int)0);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(148)
					style->pixelHinting = _g21;
					HX_STACK_LINE(149)
					int _g22;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(149)
					{
						HX_STACK_LINE(149)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(149)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(149)
						if (((_this->position < _this->length))){
							HX_STACK_LINE(149)
							int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(149)
							value = _this->b->__get(pos);
						}
						else{
							HX_STACK_LINE(149)
							value = _this->__throwEOFi();
						}
						HX_STACK_LINE(149)
						if (((((int(value) & int((int)128))) != (int)0))){
							HX_STACK_LINE(149)
							_g22 = (value - (int)256);
						}
						else{
							HX_STACK_LINE(149)
							_g22 = value;
						}
					}
					HX_STACK_LINE(149)
					::openfl::display::LineScaleMode _g23 = ::format::gfx::GfxBytes_obj::scaleModes->__get(_g22).StaticCast< ::openfl::display::LineScaleMode >();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(149)
					style->scaleMode = _g23;
					HX_STACK_LINE(150)
					int _g24;		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(150)
					{
						HX_STACK_LINE(150)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(150)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(150)
						if (((_this->position < _this->length))){
							HX_STACK_LINE(150)
							int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(150)
							value = _this->b->__get(pos);
						}
						else{
							HX_STACK_LINE(150)
							value = _this->__throwEOFi();
						}
						HX_STACK_LINE(150)
						if (((((int(value) & int((int)128))) != (int)0))){
							HX_STACK_LINE(150)
							_g24 = (value - (int)256);
						}
						else{
							HX_STACK_LINE(150)
							_g24 = value;
						}
					}
					HX_STACK_LINE(150)
					::openfl::display::CapsStyle _g25 = ::format::gfx::GfxBytes_obj::capsStyles->__get(_g24).StaticCast< ::openfl::display::CapsStyle >();		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(150)
					style->capsStyle = _g25;
					HX_STACK_LINE(151)
					int _g26;		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(151)
					{
						HX_STACK_LINE(151)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(151)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(151)
						if (((_this->position < _this->length))){
							HX_STACK_LINE(151)
							int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(151)
							value = _this->b->__get(pos);
						}
						else{
							HX_STACK_LINE(151)
							value = _this->__throwEOFi();
						}
						HX_STACK_LINE(151)
						if (((((int(value) & int((int)128))) != (int)0))){
							HX_STACK_LINE(151)
							_g26 = (value - (int)256);
						}
						else{
							HX_STACK_LINE(151)
							_g26 = value;
						}
					}
					HX_STACK_LINE(151)
					::openfl::display::JointStyle _g27 = ::format::gfx::GfxBytes_obj::jointStyles->__get(_g26).StaticCast< ::openfl::display::JointStyle >();		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(151)
					style->jointStyle = _g27;
					HX_STACK_LINE(152)
					Float _g28 = this->buffer->readFloat();		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(152)
					style->miterLimit = _g28;
					HX_STACK_LINE(153)
					inGfx->lineStyle(style);
				}
				;break;
				case (int)21: {
					HX_STACK_LINE(156)
					inGfx->endLineStyle();
				}
				;break;
				case (int)30: {
					HX_STACK_LINE(159)
					Float x = this->buffer->readFloat();		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(160)
					Float y = this->buffer->readFloat();		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(161)
					inGfx->moveTo(x,y);
				}
				;break;
				case (int)31: {
					HX_STACK_LINE(164)
					Float x = this->buffer->readFloat();		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(165)
					Float y = this->buffer->readFloat();		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(166)
					inGfx->lineTo(x,y);
				}
				;break;
				case (int)32: {
					HX_STACK_LINE(169)
					Float cx = this->buffer->readFloat();		HX_STACK_VAR(cx,"cx");
					HX_STACK_LINE(170)
					Float cy = this->buffer->readFloat();		HX_STACK_VAR(cy,"cy");
					HX_STACK_LINE(171)
					Float x = this->buffer->readFloat();		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(172)
					Float y = this->buffer->readFloat();		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(173)
					inGfx->curveTo(cx,cy,x,y);
				}
				;break;
				default: {
					HX_STACK_LINE(175)
					HX_STACK_DO_THROW(HX_CSTRING("Unknown gfx buffer format."));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GfxBytes_obj,iterate,(void))

Void GfxBytes_obj::size( Float inWidth,Float inHeight){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","size",0x5a5cfdb1,"format.gfx.GfxBytes.size","format/gfx/GfxBytes.hx",182,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inWidth,"inWidth")
		HX_STACK_ARG(inHeight,"inHeight")
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(183)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(183)
			int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(183)
			_this->b[_g] = (int)1;
		}
		HX_STACK_LINE(184)
		this->buffer->writeFloat(inWidth);
		HX_STACK_LINE(185)
		this->buffer->writeFloat(inHeight);
	}
return null();
}


Void GfxBytes_obj::pushClipped( Float inVal){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","pushClipped",0x87c68e55,"format.gfx.GfxBytes.pushClipped","format/gfx/GfxBytes.hx",190,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inVal,"inVal")
		HX_STACK_LINE(190)
		::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(190)
		int value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(190)
		if (((inVal < (int)0))){
			HX_STACK_LINE(190)
			value = (int)0;
		}
		else{
			HX_STACK_LINE(190)
			if (((inVal > 255.0))){
				HX_STACK_LINE(190)
				value = (int)255;
			}
			else{
				HX_STACK_LINE(190)
				value = ::Std_obj::_int(inVal);
			}
		}
		HX_STACK_LINE(190)
		_this->ensureElem(_this->position,true);
		HX_STACK_LINE(190)
		int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		_this->b[_g] = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GfxBytes_obj,pushClipped,(void))

Void GfxBytes_obj::writeRGB( int inVal){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","writeRGB",0x7809b45e,"format.gfx.GfxBytes.writeRGB","format/gfx/GfxBytes.hx",193,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inVal,"inVal")
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(194)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(194)
			int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(194)
			_this->b[_g] = (int((int(inVal) >> int((int)16))) & int((int)255));
		}
		HX_STACK_LINE(195)
		{
			HX_STACK_LINE(195)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(195)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(195)
			int _g1 = (_this->position)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(195)
			_this->b[_g1] = (int((int(inVal) >> int((int)8))) & int((int)255));
		}
		HX_STACK_LINE(196)
		{
			HX_STACK_LINE(196)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(196)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(196)
			int _g2 = (_this->position)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(196)
			_this->b[_g2] = (int(inVal) & int((int)255));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GfxBytes_obj,writeRGB,(void))

int GfxBytes_obj::readRGB( ){
	HX_STACK_FRAME("format.gfx.GfxBytes","readRGB",0x0eabbe67,"format.gfx.GfxBytes.readRGB","format/gfx/GfxBytes.hx",199,0x1ef332be)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(200)
	{
		HX_STACK_LINE(200)
		::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(200)
		int value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(200)
		if (((_this->position < _this->length))){
			HX_STACK_LINE(200)
			int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(200)
			value = _this->b->__get(pos);
		}
		else{
			HX_STACK_LINE(200)
			value = _this->__throwEOFi();
		}
		HX_STACK_LINE(200)
		if (((((int(value) & int((int)128))) != (int)0))){
			HX_STACK_LINE(200)
			r = (value - (int)256);
		}
		else{
			HX_STACK_LINE(200)
			r = value;
		}
	}
	HX_STACK_LINE(201)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(201)
	{
		HX_STACK_LINE(201)
		::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(201)
		int value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(201)
		if (((_this->position < _this->length))){
			HX_STACK_LINE(201)
			int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(201)
			value = _this->b->__get(pos);
		}
		else{
			HX_STACK_LINE(201)
			value = _this->__throwEOFi();
		}
		HX_STACK_LINE(201)
		if (((((int(value) & int((int)128))) != (int)0))){
			HX_STACK_LINE(201)
			g = (value - (int)256);
		}
		else{
			HX_STACK_LINE(201)
			g = value;
		}
	}
	HX_STACK_LINE(202)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(202)
		int value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(202)
		if (((_this->position < _this->length))){
			HX_STACK_LINE(202)
			int pos = (_this->position)++;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(202)
			value = _this->b->__get(pos);
		}
		else{
			HX_STACK_LINE(202)
			value = _this->__throwEOFi();
		}
		HX_STACK_LINE(202)
		if (((((int(value) & int((int)128))) != (int)0))){
			HX_STACK_LINE(202)
			b = (value - (int)256);
		}
		else{
			HX_STACK_LINE(202)
			b = value;
		}
	}
	HX_STACK_LINE(203)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


HX_DEFINE_DYNAMIC_FUNC0(GfxBytes_obj,readRGB,return )

Void GfxBytes_obj::beginGradientFill( ::format::gfx::Gradient grad){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","beginGradientFill",0x1ace896c,"format.gfx.GfxBytes.beginGradientFill","format/gfx/GfxBytes.hx",209,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(grad,"grad")
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(210)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(210)
			int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(210)
			_this->b[_g] = (int)11;
		}
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(211)
			int value = grad->type->__Index();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(211)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(211)
			int _g1 = (_this->position)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(211)
			_this->b[_g1] = value;
		}
		HX_STACK_LINE(212)
		{
			HX_STACK_LINE(212)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(212)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(212)
			int _g2 = (_this->position)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(212)
			_this->b[_g2] = grad->colors->length;
		}
		HX_STACK_LINE(213)
		{
			HX_STACK_LINE(213)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(213)
			int _g = grad->colors->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(213)
			while((true)){
				HX_STACK_LINE(213)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(213)
					break;
				}
				HX_STACK_LINE(213)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				struct _Function_3_1{
					inline static Float Block( int &i,::format::gfx::Gradient &grad){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/gfx/GfxBytes.hx",215,0x1ef332be)
						{
							HX_STACK_LINE(215)
							int _int = grad->colors->__get(i);		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(215)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(215)
				int _g3 = ::Std_obj::_int(_Function_3_1::Block(i,grad));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(215)
				this->writeRGB(_g3);
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					Float inVal = (grad->alphas->__get(i) * 255.0);		HX_STACK_VAR(inVal,"inVal");
					HX_STACK_LINE(216)
					{
						HX_STACK_LINE(216)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(216)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(216)
						if (((inVal < (int)0))){
							HX_STACK_LINE(216)
							value = (int)0;
						}
						else{
							HX_STACK_LINE(216)
							if (((inVal > 255.0))){
								HX_STACK_LINE(216)
								value = (int)255;
							}
							else{
								HX_STACK_LINE(216)
								value = ::Std_obj::_int(inVal);
							}
						}
						HX_STACK_LINE(216)
						_this->ensureElem(_this->position,true);
						HX_STACK_LINE(216)
						int _g4 = (_this->position)++;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(216)
						_this->b[_g4] = value;
					}
				}
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					Float inVal = grad->ratios->__get(i);		HX_STACK_VAR(inVal,"inVal");
					HX_STACK_LINE(217)
					{
						HX_STACK_LINE(217)
						::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(217)
						int value;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(217)
						if (((inVal < (int)0))){
							HX_STACK_LINE(217)
							value = (int)0;
						}
						else{
							HX_STACK_LINE(217)
							if (((inVal > 255.0))){
								HX_STACK_LINE(217)
								value = (int)255;
							}
							else{
								HX_STACK_LINE(217)
								value = ::Std_obj::_int(inVal);
							}
						}
						HX_STACK_LINE(217)
						_this->ensureElem(_this->position,true);
						HX_STACK_LINE(217)
						int _g5 = (_this->position)++;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(217)
						_this->b[_g5] = value;
					}
				}
			}
		}
		HX_STACK_LINE(219)
		this->buffer->writeFloat(grad->matrix->a);
		HX_STACK_LINE(220)
		this->buffer->writeFloat(grad->matrix->b);
		HX_STACK_LINE(221)
		this->buffer->writeFloat(grad->matrix->c);
		HX_STACK_LINE(222)
		this->buffer->writeFloat(grad->matrix->d);
		HX_STACK_LINE(223)
		this->buffer->writeFloat(grad->matrix->tx);
		HX_STACK_LINE(224)
		this->buffer->writeFloat(grad->matrix->ty);
		HX_STACK_LINE(225)
		{
			HX_STACK_LINE(225)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(225)
			int value = grad->spread->__Index();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(225)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(225)
			int _g6 = (_this->position)++;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(225)
			_this->b[_g6] = value;
		}
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(226)
			int value = grad->interp->__Index();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(226)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(226)
			int _g7 = (_this->position)++;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(226)
			_this->b[_g7] = value;
		}
		HX_STACK_LINE(227)
		this->buffer->writeFloat(grad->focus);
	}
return null();
}


Void GfxBytes_obj::beginFill( int color,Float alpha){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","beginFill",0xc8c56a5c,"format.gfx.GfxBytes.beginFill","format/gfx/GfxBytes.hx",231,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(232)
		{
			HX_STACK_LINE(232)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(232)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(232)
			int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(232)
			_this->b[_g] = (int)10;
		}
		HX_STACK_LINE(233)
		this->writeRGB(color);
		HX_STACK_LINE(234)
		this->buffer->writeFloat(alpha);
	}
return null();
}


Void GfxBytes_obj::endFill( ){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","endFill",0x31bbe10e,"format.gfx.GfxBytes.endFill","format/gfx/GfxBytes.hx",238,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(238)
		_this->ensureElem(_this->position,true);
		HX_STACK_LINE(238)
		int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(238)
		_this->b[_g] = (int)12;
	}
return null();
}


Void GfxBytes_obj::lineStyle( ::format::gfx::LineStyle style){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","lineStyle",0x074865ad,"format.gfx.GfxBytes.lineStyle","format/gfx/GfxBytes.hx",242,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(style,"style")
		HX_STACK_LINE(243)
		{
			HX_STACK_LINE(243)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(243)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(243)
			int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(243)
			_this->b[_g] = (int)20;
		}
		HX_STACK_LINE(244)
		this->buffer->writeFloat(style->thickness);
		HX_STACK_LINE(245)
		this->writeRGB(style->color);
		HX_STACK_LINE(246)
		this->buffer->writeFloat(style->alpha);
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(247)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(247)
			int _g1 = (_this->position)++;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(247)
			if ((style->pixelHinting)){
				HX_STACK_LINE(247)
				_this->b[_g1] = (int)1;
			}
			else{
				HX_STACK_LINE(247)
				_this->b[_g1] = (int)0;
			}
		}
		HX_STACK_LINE(248)
		{
			HX_STACK_LINE(248)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(248)
			int value = style->scaleMode->__Index();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(248)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(248)
			int _g2 = (_this->position)++;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(248)
			_this->b[_g2] = value;
		}
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(249)
			int value = style->capsStyle->__Index();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(249)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(249)
			int _g3 = (_this->position)++;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(249)
			_this->b[_g3] = value;
		}
		HX_STACK_LINE(250)
		{
			HX_STACK_LINE(250)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(250)
			int value = style->jointStyle->__Index();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(250)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(250)
			int _g4 = (_this->position)++;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(250)
			_this->b[_g4] = value;
		}
		HX_STACK_LINE(251)
		this->buffer->writeFloat(style->miterLimit);
	}
return null();
}


Void GfxBytes_obj::endLineStyle( ){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","endLineStyle",0x1d327e32,"format.gfx.GfxBytes.endLineStyle","format/gfx/GfxBytes.hx",256,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_LINE(256)
		::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(256)
		_this->ensureElem(_this->position,true);
		HX_STACK_LINE(256)
		int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		_this->b[_g] = (int)21;
	}
return null();
}


Void GfxBytes_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","moveTo",0x757b4bdc,"format.gfx.GfxBytes.moveTo","format/gfx/GfxBytes.hx",260,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(261)
		{
			HX_STACK_LINE(261)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(261)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(261)
			int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(261)
			_this->b[_g] = (int)30;
		}
		HX_STACK_LINE(262)
		this->buffer->writeFloat(inX);
		HX_STACK_LINE(263)
		this->buffer->writeFloat(inY);
	}
return null();
}


Void GfxBytes_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","lineTo",0x956ebf7f,"format.gfx.GfxBytes.lineTo","format/gfx/GfxBytes.hx",267,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(268)
		{
			HX_STACK_LINE(268)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(268)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(268)
			int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(268)
			_this->b[_g] = (int)31;
		}
		HX_STACK_LINE(269)
		this->buffer->writeFloat(inX);
		HX_STACK_LINE(270)
		this->buffer->writeFloat(inY);
	}
return null();
}


Void GfxBytes_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxBytes","curveTo",0xda63b91a,"format.gfx.GfxBytes.curveTo","format/gfx/GfxBytes.hx",274,0x1ef332be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inCX,"inCX")
		HX_STACK_ARG(inCY,"inCY")
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(275)
		{
			HX_STACK_LINE(275)
			::openfl::utils::ByteArray _this = this->buffer;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(275)
			_this->ensureElem(_this->position,true);
			HX_STACK_LINE(275)
			int _g = (_this->position)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(275)
			_this->b[_g] = (int)32;
		}
		HX_STACK_LINE(276)
		this->buffer->writeFloat(inCX);
		HX_STACK_LINE(277)
		this->buffer->writeFloat(inCY);
		HX_STACK_LINE(278)
		this->buffer->writeFloat(inX);
		HX_STACK_LINE(279)
		this->buffer->writeFloat(inY);
	}
return null();
}


int GfxBytes_obj::_EOF;

int GfxBytes_obj::SIZE;

int GfxBytes_obj::BEGIN_FILL;

int GfxBytes_obj::GRADIENT_FILL;

int GfxBytes_obj::END_FILL;

int GfxBytes_obj::LINE_STYLE;

int GfxBytes_obj::END_LINE_STYLE;

int GfxBytes_obj::MOVE;

int GfxBytes_obj::LINE;

int GfxBytes_obj::CURVE;

::String GfxBytes_obj::base64;

::haxe::crypto::BaseCode GfxBytes_obj::baseCoder;

::format::gfx::GfxBytes GfxBytes_obj::fromString( ::String inString){
	HX_STACK_FRAME("format.gfx.GfxBytes","fromString",0xc209decb,"format.gfx.GfxBytes.fromString","format/gfx/GfxBytes.hx",74,0x1ef332be)
	HX_STACK_ARG(inString,"inString")
	HX_STACK_LINE(75)
	if (((::format::gfx::GfxBytes_obj::baseCoder == null()))){
		HX_STACK_LINE(76)
		::haxe::io::Bytes _g = ::haxe::io::Bytes_obj::ofString(::format::gfx::GfxBytes_obj::base64);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		::haxe::crypto::BaseCode _g1 = ::haxe::crypto::BaseCode_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(76)
		::format::gfx::GfxBytes_obj::baseCoder = _g1;
	}
	HX_STACK_LINE(83)
	::haxe::io::Bytes _g2 = ::haxe::io::Bytes_obj::ofString(inString);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(83)
	::haxe::io::Bytes _g3 = ::format::gfx::GfxBytes_obj::baseCoder->decodeBytes(_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(83)
	::openfl::utils::ByteArray bytes = ::openfl::utils::ByteArray_obj::fromBytes(_g3);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(86)
	bytes->uncompress(null());
	HX_STACK_LINE(88)
	return ::format::gfx::GfxBytes_obj::__new(bytes,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GfxBytes_obj,fromString,return )

Array< ::Dynamic > GfxBytes_obj::scaleModes;

Array< ::Dynamic > GfxBytes_obj::capsStyles;

Array< ::Dynamic > GfxBytes_obj::jointStyles;

Array< ::Dynamic > GfxBytes_obj::spreadMethods;

Array< ::Dynamic > GfxBytes_obj::interpolationMethods;


GfxBytes_obj::GfxBytes_obj()
{
}

void GfxBytes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GfxBytes);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_END_CLASS();
}

void GfxBytes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
}

Dynamic GfxBytes_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"eof") ) { return eof_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"base64") ) { return base64; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"iterate") ) { return iterate_dyn(); }
		if (HX_FIELD_EQ(inName,"readRGB") ) { return readRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"writeRGB") ) { return writeRGB_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"baseCoder") ) { return baseCoder; }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleModes") ) { return scaleModes; }
		if (HX_FIELD_EQ(inName,"capsStyles") ) { return capsStyles; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"jointStyles") ) { return jointStyles; }
		if (HX_FIELD_EQ(inName,"pushClipped") ) { return pushClipped_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endLineStyle") ) { return endLineStyle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"spreadMethods") ) { return spreadMethods; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"interpolationMethods") ) { return interpolationMethods; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GfxBytes_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"base64") ) { base64=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::openfl::utils::ByteArray >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"baseCoder") ) { baseCoder=inValue.Cast< ::haxe::crypto::BaseCode >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleModes") ) { scaleModes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"capsStyles") ) { capsStyles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"jointStyles") ) { jointStyles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"spreadMethods") ) { spreadMethods=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"interpolationMethods") ) { interpolationMethods=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GfxBytes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("EOF"),
	HX_CSTRING("SIZE"),
	HX_CSTRING("BEGIN_FILL"),
	HX_CSTRING("GRADIENT_FILL"),
	HX_CSTRING("END_FILL"),
	HX_CSTRING("LINE_STYLE"),
	HX_CSTRING("END_LINE_STYLE"),
	HX_CSTRING("MOVE"),
	HX_CSTRING("LINE"),
	HX_CSTRING("CURVE"),
	HX_CSTRING("base64"),
	HX_CSTRING("baseCoder"),
	HX_CSTRING("fromString"),
	HX_CSTRING("scaleModes"),
	HX_CSTRING("capsStyles"),
	HX_CSTRING("jointStyles"),
	HX_CSTRING("spreadMethods"),
	HX_CSTRING("interpolationMethods"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::utils::ByteArray*/ ,(int)offsetof(GfxBytes_obj,buffer),HX_CSTRING("buffer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("toString"),
	HX_CSTRING("eof"),
	HX_CSTRING("iterate"),
	HX_CSTRING("size"),
	HX_CSTRING("pushClipped"),
	HX_CSTRING("writeRGB"),
	HX_CSTRING("readRGB"),
	HX_CSTRING("beginGradientFill"),
	HX_CSTRING("beginFill"),
	HX_CSTRING("endFill"),
	HX_CSTRING("lineStyle"),
	HX_CSTRING("endLineStyle"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("curveTo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GfxBytes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::_EOF,"EOF");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::SIZE,"SIZE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::BEGIN_FILL,"BEGIN_FILL");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::GRADIENT_FILL,"GRADIENT_FILL");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::END_FILL,"END_FILL");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::LINE_STYLE,"LINE_STYLE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::END_LINE_STYLE,"END_LINE_STYLE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::LINE,"LINE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::CURVE,"CURVE");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::base64,"base64");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::baseCoder,"baseCoder");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::scaleModes,"scaleModes");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::capsStyles,"capsStyles");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::jointStyles,"jointStyles");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::spreadMethods,"spreadMethods");
	HX_MARK_MEMBER_NAME(GfxBytes_obj::interpolationMethods,"interpolationMethods");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::_EOF,"EOF");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::SIZE,"SIZE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::BEGIN_FILL,"BEGIN_FILL");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::GRADIENT_FILL,"GRADIENT_FILL");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::END_FILL,"END_FILL");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::LINE_STYLE,"LINE_STYLE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::END_LINE_STYLE,"END_LINE_STYLE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::LINE,"LINE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::CURVE,"CURVE");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::base64,"base64");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::baseCoder,"baseCoder");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::scaleModes,"scaleModes");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::capsStyles,"capsStyles");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::jointStyles,"jointStyles");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::spreadMethods,"spreadMethods");
	HX_VISIT_MEMBER_NAME(GfxBytes_obj::interpolationMethods,"interpolationMethods");
};

#endif

Class GfxBytes_obj::__mClass;

void GfxBytes_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.GfxBytes"), hx::TCanCast< GfxBytes_obj> ,sStaticFields,sMemberFields,
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

void GfxBytes_obj::__boot()
{
	_EOF= (int)0;
	SIZE= (int)1;
	BEGIN_FILL= (int)10;
	GRADIENT_FILL= (int)11;
	END_FILL= (int)12;
	LINE_STYLE= (int)20;
	END_LINE_STYLE= (int)21;
	MOVE= (int)30;
	LINE= (int)31;
	CURVE= (int)32;
	base64= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
	scaleModes= Array_obj< ::Dynamic >::__new().Add(::openfl::display::LineScaleMode_obj::NORMAL).Add(::openfl::display::LineScaleMode_obj::NONE).Add(::openfl::display::LineScaleMode_obj::VERTICAL).Add(::openfl::display::LineScaleMode_obj::HORIZONTAL);
	capsStyles= Array_obj< ::Dynamic >::__new().Add(::openfl::display::CapsStyle_obj::ROUND).Add(::openfl::display::CapsStyle_obj::NONE).Add(::openfl::display::CapsStyle_obj::SQUARE);
	jointStyles= Array_obj< ::Dynamic >::__new().Add(::openfl::display::JointStyle_obj::ROUND).Add(::openfl::display::JointStyle_obj::MITER).Add(::openfl::display::JointStyle_obj::BEVEL);
	spreadMethods= Array_obj< ::Dynamic >::__new().Add(::openfl::display::SpreadMethod_obj::PAD).Add(::openfl::display::SpreadMethod_obj::REPEAT).Add(::openfl::display::SpreadMethod_obj::REFLECT);
	interpolationMethods= Array_obj< ::Dynamic >::__new().Add(::openfl::display::InterpolationMethod_obj::RGB).Add(::openfl::display::InterpolationMethod_obj::LINEAR_RGB);
}

} // end namespace format
} // end namespace gfx
