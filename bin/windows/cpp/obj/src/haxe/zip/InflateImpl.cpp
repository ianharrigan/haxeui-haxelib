#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_zip_HuffTools
#include <haxe/zip/HuffTools.h>
#endif
#ifndef INCLUDED_haxe_zip_Huffman
#include <haxe/zip/Huffman.h>
#endif
#ifndef INCLUDED_haxe_zip_InflateImpl
#include <haxe/zip/InflateImpl.h>
#endif
#ifndef INCLUDED_haxe_zip__InflateImpl_State
#include <haxe/zip/_InflateImpl/State.h>
#endif
#ifndef INCLUDED_haxe_zip__InflateImpl_Window
#include <haxe/zip/_InflateImpl/Window.h>
#endif
namespace haxe{
namespace zip{

Void InflateImpl_obj::__construct(::haxe::io::Input i,Dynamic __o_header,Dynamic __o_crc)
{
HX_STACK_FRAME("haxe.zip.InflateImpl","new",0x8adfb384,"haxe.zip.InflateImpl.new","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",116,0x4b4a64b1)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
HX_STACK_ARG(__o_header,"header")
HX_STACK_ARG(__o_crc,"crc")
Dynamic header = __o_header.Default(true);
Dynamic crc = __o_crc.Default(true);
{
	HX_STACK_LINE(117)
	this->final = false;
	HX_STACK_LINE(118)
	::haxe::zip::HuffTools _g = ::haxe::zip::HuffTools_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(118)
	this->htools = _g;
	HX_STACK_LINE(119)
	::haxe::zip::Huffman _g1 = this->buildFixedHuffman();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(119)
	this->huffman = _g1;
	HX_STACK_LINE(120)
	this->huffdist = null();
	HX_STACK_LINE(121)
	this->len = (int)0;
	HX_STACK_LINE(122)
	this->dist = (int)0;
	HX_STACK_LINE(123)
	if ((header)){
		HX_STACK_LINE(123)
		this->state = ::haxe::zip::_InflateImpl::State_obj::Head;
	}
	else{
		HX_STACK_LINE(123)
		this->state = ::haxe::zip::_InflateImpl::State_obj::Block;
	}
	HX_STACK_LINE(124)
	this->input = i;
	HX_STACK_LINE(125)
	this->bits = (int)0;
	HX_STACK_LINE(126)
	this->nbits = (int)0;
	HX_STACK_LINE(127)
	this->needed = (int)0;
	HX_STACK_LINE(128)
	this->output = null();
	HX_STACK_LINE(129)
	this->outpos = (int)0;
	HX_STACK_LINE(130)
	Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(130)
	this->lengths = _g2;
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			if ((!(((_g3 < (int)19))))){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(131)
			int i1 = (_g3)++;		HX_STACK_VAR(i1,"i1");
			HX_STACK_LINE(132)
			this->lengths->push((int)-1);
		}
	}
	HX_STACK_LINE(133)
	::haxe::zip::_InflateImpl::Window _g3 = ::haxe::zip::_InflateImpl::Window_obj::__new(crc);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(133)
	this->window = _g3;
}
;
	return null();
}

//InflateImpl_obj::~InflateImpl_obj() { }

Dynamic InflateImpl_obj::__CreateEmpty() { return  new InflateImpl_obj; }
hx::ObjectPtr< InflateImpl_obj > InflateImpl_obj::__new(::haxe::io::Input i,Dynamic __o_header,Dynamic __o_crc)
{  hx::ObjectPtr< InflateImpl_obj > result = new InflateImpl_obj();
	result->__construct(i,__o_header,__o_crc);
	return result;}

Dynamic InflateImpl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InflateImpl_obj > result = new InflateImpl_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::haxe::zip::Huffman InflateImpl_obj::buildFixedHuffman( ){
	HX_STACK_FRAME("haxe.zip.InflateImpl","buildFixedHuffman",0x8189428b,"haxe.zip.InflateImpl.buildFixedHuffman","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",136,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	if (((::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN != null()))){
		HX_STACK_LINE(138)
		return ::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN;
	}
	HX_STACK_LINE(139)
	Array< int > a = Array_obj< int >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(140)
	{
		HX_STACK_LINE(140)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(140)
		while((true)){
			HX_STACK_LINE(140)
			if ((!(((_g < (int)288))))){
				HX_STACK_LINE(140)
				break;
			}
			HX_STACK_LINE(140)
			int n = (_g)++;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(141)
			a->push((  (((n <= (int)143))) ? int((int)8) : int((  (((n <= (int)255))) ? int((int)9) : int((  (((n <= (int)279))) ? int((int)7) : int((int)8) )) )) ));
		}
	}
	HX_STACK_LINE(142)
	::haxe::zip::Huffman _g = this->htools->make(a,(int)0,(int)288,(int)10);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(142)
	::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN = _g;
	HX_STACK_LINE(143)
	return ::haxe::zip::InflateImpl_obj::FIXED_HUFFMAN;
}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,buildFixedHuffman,return )

int InflateImpl_obj::readBytes( ::haxe::io::Bytes b,int pos,int len){
	HX_STACK_FRAME("haxe.zip.InflateImpl","readBytes",0x749c2b59,"haxe.zip.InflateImpl.readBytes","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",146,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(147)
	this->needed = len;
	HX_STACK_LINE(148)
	this->outpos = pos;
	HX_STACK_LINE(149)
	this->output = b;
	HX_STACK_LINE(150)
	if (((len > (int)0))){
		HX_STACK_LINE(151)
		while((true)){
			HX_STACK_LINE(151)
			if ((!(this->inflateLoop()))){
				HX_STACK_LINE(151)
				break;
			}
			HX_STACK_LINE(151)
			{
			}
		}
	}
	HX_STACK_LINE(153)
	return (len - this->needed);
}


HX_DEFINE_DYNAMIC_FUNC3(InflateImpl_obj,readBytes,return )

int InflateImpl_obj::getBits( int n){
	HX_STACK_FRAME("haxe.zip.InflateImpl","getBits",0xefbfefe0,"haxe.zip.InflateImpl.getBits","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",156,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(157)
	while((true)){
		HX_STACK_LINE(157)
		if ((!(((this->nbits < n))))){
			HX_STACK_LINE(157)
			break;
		}
		HX_STACK_LINE(158)
		int _g = this->input->readByte();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(158)
		int _g1 = (int(_g) << int(this->nbits));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		hx::OrEq(this->bits,_g1);
		HX_STACK_LINE(159)
		hx::AddEq(this->nbits,(int)8);
	}
	HX_STACK_LINE(161)
	int b = (int(this->bits) & int((((int((int)1) << int(n))) - (int)1)));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(162)
	hx::SubEq(this->nbits,n);
	HX_STACK_LINE(163)
	hx::ShrEq(this->bits,n);
	HX_STACK_LINE(164)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,getBits,return )

bool InflateImpl_obj::getBit( ){
	HX_STACK_FRAME("haxe.zip.InflateImpl","getBit",0x24a99d33,"haxe.zip.InflateImpl.getBit","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",167,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(168)
	if (((this->nbits == (int)0))){
		HX_STACK_LINE(169)
		this->nbits = (int)8;
		HX_STACK_LINE(170)
		int _g = this->input->readByte();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(170)
		this->bits = _g;
	}
	HX_STACK_LINE(172)
	bool b = (((int(this->bits) & int((int)1))) == (int)1);		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(173)
	(this->nbits)--;
	HX_STACK_LINE(174)
	hx::ShrEq(this->bits,(int)1);
	HX_STACK_LINE(175)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,getBit,return )

int InflateImpl_obj::getRevBits( int n){
	HX_STACK_FRAME("haxe.zip.InflateImpl","getRevBits",0xc652fd6f,"haxe.zip.InflateImpl.getRevBits","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",179,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_LINE(179)
	if (((n == (int)0))){
		HX_STACK_LINE(180)
		return (int)0;
	}
	else{
		HX_STACK_LINE(181)
		if ((this->getBit())){
			HX_STACK_LINE(182)
			int _g = this->getRevBits((n - (int)1));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(182)
			return (int((int((int)1) << int((n - (int)1)))) | int(_g));
		}
		else{
			HX_STACK_LINE(184)
			return this->getRevBits((n - (int)1));
		}
	}
	HX_STACK_LINE(179)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,getRevBits,return )

Void InflateImpl_obj::resetBits( ){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","resetBits",0x6d1fda99,"haxe.zip.InflateImpl.resetBits","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",187,0x4b4a64b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		this->bits = (int)0;
		HX_STACK_LINE(189)
		this->nbits = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,resetBits,(void))

Void InflateImpl_obj::addBytes( ::haxe::io::Bytes b,int p,int len){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","addBytes",0xfc4b68e6,"haxe.zip.InflateImpl.addBytes","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",192,0x4b4a64b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(193)
		this->window->addBytes(b,p,len);
		HX_STACK_LINE(194)
		this->output->blit(this->outpos,b,p,len);
		HX_STACK_LINE(195)
		hx::SubEq(this->needed,len);
		HX_STACK_LINE(196)
		hx::AddEq(this->outpos,len);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(InflateImpl_obj,addBytes,(void))

Void InflateImpl_obj::addByte( int b){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","addByte",0x5986a6ed,"haxe.zip.InflateImpl.addByte","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",199,0x4b4a64b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(200)
		this->window->addByte(b);
		HX_STACK_LINE(201)
		this->output->b[this->outpos] = b;
		HX_STACK_LINE(202)
		(this->needed)--;
		HX_STACK_LINE(203)
		(this->outpos)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,addByte,(void))

Void InflateImpl_obj::addDistOne( int n){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","addDistOne",0x9881c3db,"haxe.zip.InflateImpl.addDistOne","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",206,0x4b4a64b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(207)
		int c = this->window->getLastChar();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(208)
		{
			HX_STACK_LINE(208)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				if ((!(((_g < n))))){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(209)
				this->addByte(c);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,addDistOne,(void))

Void InflateImpl_obj::addDist( int d,int len){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","addDist",0x5accef4b,"haxe.zip.InflateImpl.addDist","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",213,0x4b4a64b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(213)
		this->addBytes(this->window->buffer,(this->window->pos - d),len);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InflateImpl_obj,addDist,(void))

int InflateImpl_obj::applyHuffman( ::haxe::zip::Huffman h){
	HX_STACK_FRAME("haxe.zip.InflateImpl","applyHuffman",0x495d53bb,"haxe.zip.InflateImpl.applyHuffman","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",217,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(217)
	switch( (int)(h->__Index())){
		case (int)0: {
			HX_STACK_LINE(217)
			int n = (::haxe::zip::Huffman(h))->__Param(0);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(218)
			return n;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(217)
			::haxe::zip::Huffman b = (::haxe::zip::Huffman(h))->__Param(1);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(217)
			::haxe::zip::Huffman a = (::haxe::zip::Huffman(h))->__Param(0);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(219)
			{
				HX_STACK_LINE(219)
				::haxe::zip::Huffman _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(219)
				if ((this->getBit())){
					HX_STACK_LINE(219)
					_g = b;
				}
				else{
					HX_STACK_LINE(219)
					_g = a;
				}
				HX_STACK_LINE(219)
				return this->applyHuffman(_g);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(217)
			Array< ::Dynamic > tbl = (::haxe::zip::Huffman(h))->__Param(1);		HX_STACK_VAR(tbl,"tbl");
			HX_STACK_LINE(217)
			int n = (::haxe::zip::Huffman(h))->__Param(0);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				int _g1 = this->getBits(n);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(220)
				::haxe::zip::Huffman _g2 = tbl->__get(_g1).StaticCast< ::haxe::zip::Huffman >();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(220)
				return this->applyHuffman(_g2);
			}
		}
		;break;
	}
	HX_STACK_LINE(217)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(InflateImpl_obj,applyHuffman,return )

Void InflateImpl_obj::inflateLengths( Array< int > a,int max){
{
		HX_STACK_FRAME("haxe.zip.InflateImpl","inflateLengths",0xf1ca5662,"haxe.zip.InflateImpl.inflateLengths","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",224,0x4b4a64b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(max,"max")
		HX_STACK_LINE(225)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(226)
		int prev = (int)0;		HX_STACK_VAR(prev,"prev");
		HX_STACK_LINE(227)
		while((true)){
			HX_STACK_LINE(227)
			if ((!(((i < max))))){
				HX_STACK_LINE(227)
				break;
			}
			HX_STACK_LINE(228)
			int n = this->applyHuffman(this->huffman);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(229)
			switch( (int)(n)){
				case (int)0: case (int)1: case (int)2: case (int)3: case (int)4: case (int)5: case (int)6: case (int)7: case (int)8: case (int)9: case (int)10: case (int)11: case (int)12: case (int)13: case (int)14: case (int)15: {
					HX_STACK_LINE(231)
					prev = n;
					HX_STACK_LINE(232)
					a[i] = n;
					HX_STACK_LINE(233)
					(i)++;
				}
				;break;
				case (int)16: {
					HX_STACK_LINE(235)
					int _g = this->getBits((int)2);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(235)
					int end = ((i + (int)3) + _g);		HX_STACK_VAR(end,"end");
					HX_STACK_LINE(236)
					if (((end > max))){
						HX_STACK_LINE(236)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
					}
					HX_STACK_LINE(237)
					while((true)){
						HX_STACK_LINE(237)
						if ((!(((i < end))))){
							HX_STACK_LINE(237)
							break;
						}
						HX_STACK_LINE(238)
						a[i] = prev;
						HX_STACK_LINE(239)
						(i)++;
					}
				}
				;break;
				case (int)17: {
					HX_STACK_LINE(242)
					int _g1 = this->getBits((int)3);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(242)
					int _g2 = ((int)3 + _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(242)
					hx::AddEq(i,_g2);
					HX_STACK_LINE(243)
					if (((i > max))){
						HX_STACK_LINE(243)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
					}
				}
				;break;
				case (int)18: {
					HX_STACK_LINE(245)
					int _g3 = this->getBits((int)7);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(245)
					int _g4 = ((int)11 + _g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(245)
					hx::AddEq(i,_g4);
					HX_STACK_LINE(246)
					if (((i > max))){
						HX_STACK_LINE(246)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
					}
				}
				;break;
				default: {
					HX_STACK_LINE(248)
					HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(InflateImpl_obj,inflateLengths,(void))

bool InflateImpl_obj::inflateLoop( ){
	HX_STACK_FRAME("haxe.zip.InflateImpl","inflateLoop",0x6d5c65af,"haxe.zip.InflateImpl.inflateLoop","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",254,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	::haxe::zip::_InflateImpl::State _g = this->state;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(254)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(256)
			int cmf = this->input->readByte();		HX_STACK_VAR(cmf,"cmf");
			HX_STACK_LINE(257)
			int cm = (int(cmf) & int((int)15));		HX_STACK_VAR(cm,"cm");
			HX_STACK_LINE(258)
			int cinfo = (int(cmf) >> int((int)4));		HX_STACK_VAR(cinfo,"cinfo");
			HX_STACK_LINE(259)
			if (((bool((cm != (int)8)) || bool((cinfo != (int)7))))){
				HX_STACK_LINE(259)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
			}
			HX_STACK_LINE(260)
			int flg = this->input->readByte();		HX_STACK_VAR(flg,"flg");
			HX_STACK_LINE(262)
			bool fdict = (((int(flg) & int((int)32))) != (int)0);		HX_STACK_VAR(fdict,"fdict");
			HX_STACK_LINE(264)
			if (((hx::Mod(((((int(cmf) << int((int)8))) + flg)),(int)31) != (int)0))){
				HX_STACK_LINE(264)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
			}
			HX_STACK_LINE(265)
			if ((fdict)){
				HX_STACK_LINE(265)
				HX_STACK_DO_THROW(HX_CSTRING("Unsupported dictionary"));
			}
			HX_STACK_LINE(266)
			this->state = ::haxe::zip::_InflateImpl::State_obj::Block;
			HX_STACK_LINE(267)
			return true;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(269)
			::haxe::crypto::Adler32 calc = this->window->checksum();		HX_STACK_VAR(calc,"calc");
			HX_STACK_LINE(270)
			if (((calc == null()))){
				HX_STACK_LINE(271)
				this->state = ::haxe::zip::_InflateImpl::State_obj::Done;
				HX_STACK_LINE(272)
				return true;
			}
			HX_STACK_LINE(274)
			::haxe::crypto::Adler32 crc = ::haxe::crypto::Adler32_obj::read(this->input);		HX_STACK_VAR(crc,"crc");
			HX_STACK_LINE(275)
			if ((!(calc->equals(crc)))){
				HX_STACK_LINE(275)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid CRC"));
			}
			HX_STACK_LINE(276)
			this->state = ::haxe::zip::_InflateImpl::State_obj::Done;
			HX_STACK_LINE(277)
			return true;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(280)
			return false;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(282)
			bool _g1 = this->getBit();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(282)
			this->final = _g1;
			HX_STACK_LINE(283)
			{
				HX_STACK_LINE(283)
				int _g11 = this->getBits((int)2);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(283)
				switch( (int)(_g11)){
					case (int)0: {
						HX_STACK_LINE(285)
						int _g12 = this->input->readUInt16();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(285)
						this->len = _g12;
						HX_STACK_LINE(286)
						int nlen = this->input->readUInt16();		HX_STACK_VAR(nlen,"nlen");
						HX_STACK_LINE(287)
						if (((nlen != ((int)65535 - this->len)))){
							HX_STACK_LINE(287)
							HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
						}
						HX_STACK_LINE(288)
						this->state = ::haxe::zip::_InflateImpl::State_obj::Flat;
						HX_STACK_LINE(289)
						bool r = this->inflateLoop();		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(290)
						this->resetBits();
						HX_STACK_LINE(291)
						return r;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(293)
						::haxe::zip::Huffman _g2 = this->buildFixedHuffman();		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(293)
						this->huffman = _g2;
						HX_STACK_LINE(294)
						this->huffdist = null();
						HX_STACK_LINE(295)
						this->state = ::haxe::zip::_InflateImpl::State_obj::CData;
						HX_STACK_LINE(296)
						return true;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(298)
						int _g3 = this->getBits((int)5);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(298)
						int hlit = (_g3 + (int)257);		HX_STACK_VAR(hlit,"hlit");
						HX_STACK_LINE(299)
						int _g4 = this->getBits((int)5);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(299)
						int hdist = (_g4 + (int)1);		HX_STACK_VAR(hdist,"hdist");
						HX_STACK_LINE(300)
						int _g5 = this->getBits((int)4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(300)
						int hclen = (_g5 + (int)4);		HX_STACK_VAR(hclen,"hclen");
						HX_STACK_LINE(301)
						{
							HX_STACK_LINE(301)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(301)
							while((true)){
								HX_STACK_LINE(301)
								if ((!(((_g2 < hclen))))){
									HX_STACK_LINE(301)
									break;
								}
								HX_STACK_LINE(301)
								int i = (_g2)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(302)
								this->lengths[::haxe::zip::InflateImpl_obj::CODE_LENGTHS_POS->__get(i)] = this->getBits((int)3);
							}
						}
						HX_STACK_LINE(303)
						{
							HX_STACK_LINE(303)
							int _g2 = hclen;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(303)
							while((true)){
								HX_STACK_LINE(303)
								if ((!(((_g2 < (int)19))))){
									HX_STACK_LINE(303)
									break;
								}
								HX_STACK_LINE(303)
								int i = (_g2)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(304)
								this->lengths[::haxe::zip::InflateImpl_obj::CODE_LENGTHS_POS->__get(i)] = (int)0;
							}
						}
						HX_STACK_LINE(305)
						::haxe::zip::Huffman _g6 = this->htools->make(this->lengths,(int)0,(int)19,(int)8);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(305)
						this->huffman = _g6;
						HX_STACK_LINE(306)
						Array< int > lengths = Array_obj< int >::__new();		HX_STACK_VAR(lengths,"lengths");
						HX_STACK_LINE(307)
						{
							HX_STACK_LINE(307)
							int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(307)
							int _g2 = (hlit + hdist);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(307)
							while((true)){
								HX_STACK_LINE(307)
								if ((!(((_g31 < _g2))))){
									HX_STACK_LINE(307)
									break;
								}
								HX_STACK_LINE(307)
								int i = (_g31)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(308)
								lengths->push((int)0);
							}
						}
						HX_STACK_LINE(309)
						this->inflateLengths(lengths,(hlit + hdist));
						HX_STACK_LINE(310)
						::haxe::zip::Huffman _g7 = this->htools->make(lengths,hlit,hdist,(int)16);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(310)
						this->huffdist = _g7;
						HX_STACK_LINE(311)
						::haxe::zip::Huffman _g8 = this->htools->make(lengths,(int)0,hlit,(int)16);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(311)
						this->huffman = _g8;
						HX_STACK_LINE(312)
						this->state = ::haxe::zip::_InflateImpl::State_obj::CData;
						HX_STACK_LINE(313)
						return true;
					}
					;break;
					default: {
						HX_STACK_LINE(315)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
					}
				}
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(318)
			int rlen;		HX_STACK_VAR(rlen,"rlen");
			HX_STACK_LINE(318)
			if (((this->len < this->needed))){
				HX_STACK_LINE(318)
				rlen = this->len;
			}
			else{
				HX_STACK_LINE(318)
				rlen = this->needed;
			}
			HX_STACK_LINE(319)
			::haxe::io::Bytes bytes = this->input->read(rlen);		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(320)
			hx::SubEq(this->len,rlen);
			HX_STACK_LINE(321)
			this->addBytes(bytes,(int)0,rlen);
			HX_STACK_LINE(322)
			if (((this->len == (int)0))){
				HX_STACK_LINE(322)
				if ((this->final)){
					HX_STACK_LINE(322)
					this->state = ::haxe::zip::_InflateImpl::State_obj::Crc;
				}
				else{
					HX_STACK_LINE(322)
					this->state = ::haxe::zip::_InflateImpl::State_obj::Block;
				}
			}
			HX_STACK_LINE(323)
			return (this->needed > (int)0);
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(325)
			int rlen;		HX_STACK_VAR(rlen,"rlen");
			HX_STACK_LINE(325)
			if (((this->len < this->needed))){
				HX_STACK_LINE(325)
				rlen = this->len;
			}
			else{
				HX_STACK_LINE(325)
				rlen = this->needed;
			}
			HX_STACK_LINE(326)
			this->addDistOne(rlen);
			HX_STACK_LINE(327)
			hx::SubEq(this->len,rlen);
			HX_STACK_LINE(328)
			if (((this->len == (int)0))){
				HX_STACK_LINE(328)
				this->state = ::haxe::zip::_InflateImpl::State_obj::CData;
			}
			HX_STACK_LINE(329)
			return (this->needed > (int)0);
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(331)
			while((true)){
				HX_STACK_LINE(331)
				if ((!(((bool((this->len > (int)0)) && bool((this->needed > (int)0))))))){
					HX_STACK_LINE(331)
					break;
				}
				HX_STACK_LINE(332)
				int rdist;		HX_STACK_VAR(rdist,"rdist");
				HX_STACK_LINE(332)
				if (((this->len < this->dist))){
					HX_STACK_LINE(332)
					rdist = this->len;
				}
				else{
					HX_STACK_LINE(332)
					rdist = this->dist;
				}
				HX_STACK_LINE(333)
				int rlen;		HX_STACK_VAR(rlen,"rlen");
				HX_STACK_LINE(333)
				if (((this->needed < rdist))){
					HX_STACK_LINE(333)
					rlen = this->needed;
				}
				else{
					HX_STACK_LINE(333)
					rlen = rdist;
				}
				HX_STACK_LINE(334)
				this->addDist(this->dist,rlen);
				HX_STACK_LINE(335)
				hx::SubEq(this->len,rlen);
			}
			HX_STACK_LINE(337)
			if (((this->len == (int)0))){
				HX_STACK_LINE(337)
				this->state = ::haxe::zip::_InflateImpl::State_obj::CData;
			}
			HX_STACK_LINE(338)
			return (this->needed > (int)0);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(340)
			int n = this->applyHuffman(this->huffman);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(341)
			if (((n < (int)256))){
				HX_STACK_LINE(342)
				this->addByte(n);
				HX_STACK_LINE(343)
				return (this->needed > (int)0);
			}
			else{
				HX_STACK_LINE(344)
				if (((n == (int)256))){
					HX_STACK_LINE(345)
					if ((this->final)){
						HX_STACK_LINE(345)
						this->state = ::haxe::zip::_InflateImpl::State_obj::Crc;
					}
					else{
						HX_STACK_LINE(345)
						this->state = ::haxe::zip::_InflateImpl::State_obj::Block;
					}
					HX_STACK_LINE(346)
					return true;
				}
				else{
					HX_STACK_LINE(348)
					hx::SubEq(n,(int)257);
					HX_STACK_LINE(349)
					int extra_bits = ::haxe::zip::InflateImpl_obj::LEN_EXTRA_BITS_TBL->__get(n);		HX_STACK_VAR(extra_bits,"extra_bits");
					HX_STACK_LINE(350)
					if (((extra_bits == (int)-1))){
						HX_STACK_LINE(350)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
					}
					HX_STACK_LINE(351)
					int _g9 = this->getBits(extra_bits);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(351)
					int _g10 = (::haxe::zip::InflateImpl_obj::LEN_BASE_VAL_TBL->__get(n) + _g9);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(351)
					this->len = _g10;
					HX_STACK_LINE(352)
					int dist_code;		HX_STACK_VAR(dist_code,"dist_code");
					HX_STACK_LINE(352)
					if (((this->huffdist == null()))){
						HX_STACK_LINE(352)
						dist_code = this->getRevBits((int)5);
					}
					else{
						HX_STACK_LINE(352)
						dist_code = this->applyHuffman(this->huffdist);
					}
					HX_STACK_LINE(353)
					extra_bits = ::haxe::zip::InflateImpl_obj::DIST_EXTRA_BITS_TBL->__get(dist_code);
					HX_STACK_LINE(354)
					if (((extra_bits == (int)-1))){
						HX_STACK_LINE(354)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
					}
					HX_STACK_LINE(355)
					int _g11 = this->getBits(extra_bits);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(355)
					int _g12 = (::haxe::zip::InflateImpl_obj::DIST_BASE_VAL_TBL->__get(dist_code) + _g11);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(355)
					this->dist = _g12;
					HX_STACK_LINE(356)
					int _g13 = this->window->available();		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(356)
					if (((this->dist > _g13))){
						HX_STACK_LINE(356)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid data"));
					}
					HX_STACK_LINE(357)
					if (((this->dist == (int)1))){
						HX_STACK_LINE(357)
						this->state = ::haxe::zip::_InflateImpl::State_obj::DistOne;
					}
					else{
						HX_STACK_LINE(357)
						this->state = ::haxe::zip::_InflateImpl::State_obj::Dist;
					}
					HX_STACK_LINE(358)
					return true;
				}
			}
		}
		;break;
	}
	HX_STACK_LINE(254)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(InflateImpl_obj,inflateLoop,return )

Array< int > InflateImpl_obj::LEN_EXTRA_BITS_TBL;

Array< int > InflateImpl_obj::LEN_BASE_VAL_TBL;

Array< int > InflateImpl_obj::DIST_EXTRA_BITS_TBL;

Array< int > InflateImpl_obj::DIST_BASE_VAL_TBL;

Array< int > InflateImpl_obj::CODE_LENGTHS_POS;

::haxe::zip::Huffman InflateImpl_obj::FIXED_HUFFMAN;


InflateImpl_obj::InflateImpl_obj()
{
}

void InflateImpl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InflateImpl);
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(bits,"bits");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(final,"final");
	HX_MARK_MEMBER_NAME(huffman,"huffman");
	HX_MARK_MEMBER_NAME(huffdist,"huffdist");
	HX_MARK_MEMBER_NAME(htools,"htools");
	HX_MARK_MEMBER_NAME(len,"len");
	HX_MARK_MEMBER_NAME(dist,"dist");
	HX_MARK_MEMBER_NAME(needed,"needed");
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_MEMBER_NAME(outpos,"outpos");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(lengths,"lengths");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_END_CLASS();
}

void InflateImpl_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(bits,"bits");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(final,"final");
	HX_VISIT_MEMBER_NAME(huffman,"huffman");
	HX_VISIT_MEMBER_NAME(huffdist,"huffdist");
	HX_VISIT_MEMBER_NAME(htools,"htools");
	HX_VISIT_MEMBER_NAME(len,"len");
	HX_VISIT_MEMBER_NAME(dist,"dist");
	HX_VISIT_MEMBER_NAME(needed,"needed");
	HX_VISIT_MEMBER_NAME(output,"output");
	HX_VISIT_MEMBER_NAME(outpos,"outpos");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(lengths,"lengths");
	HX_VISIT_MEMBER_NAME(window,"window");
}

Dynamic InflateImpl_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { return len; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { return bits; }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return nbits; }
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"final") ) { return final; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"htools") ) { return htools; }
		if (HX_FIELD_EQ(inName,"needed") ) { return needed; }
		if (HX_FIELD_EQ(inName,"output") ) { return output; }
		if (HX_FIELD_EQ(inName,"outpos") ) { return outpos; }
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"getBit") ) { return getBit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"huffman") ) { return huffman; }
		if (HX_FIELD_EQ(inName,"lengths") ) { return lengths; }
		if (HX_FIELD_EQ(inName,"getBits") ) { return getBits_dyn(); }
		if (HX_FIELD_EQ(inName,"addByte") ) { return addByte_dyn(); }
		if (HX_FIELD_EQ(inName,"addDist") ) { return addDist_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"huffdist") ) { return huffdist; }
		if (HX_FIELD_EQ(inName,"addBytes") ) { return addBytes_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"resetBits") ) { return resetBits_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getRevBits") ) { return getRevBits_dyn(); }
		if (HX_FIELD_EQ(inName,"addDistOne") ) { return addDistOne_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inflateLoop") ) { return inflateLoop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"applyHuffman") ) { return applyHuffman_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FIXED_HUFFMAN") ) { return FIXED_HUFFMAN; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"inflateLengths") ) { return inflateLengths_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LEN_BASE_VAL_TBL") ) { return LEN_BASE_VAL_TBL; }
		if (HX_FIELD_EQ(inName,"CODE_LENGTHS_POS") ) { return CODE_LENGTHS_POS; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DIST_BASE_VAL_TBL") ) { return DIST_BASE_VAL_TBL; }
		if (HX_FIELD_EQ(inName,"buildFixedHuffman") ) { return buildFixedHuffman_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LEN_EXTRA_BITS_TBL") ) { return LEN_EXTRA_BITS_TBL; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DIST_EXTRA_BITS_TBL") ) { return DIST_EXTRA_BITS_TBL; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InflateImpl_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"bits") ) { bits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dist") ) { dist=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::haxe::zip::_InflateImpl::State >(); return inValue; }
		if (HX_FIELD_EQ(inName,"final") ) { final=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"htools") ) { htools=inValue.Cast< ::haxe::zip::HuffTools >(); return inValue; }
		if (HX_FIELD_EQ(inName,"needed") ) { needed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"outpos") ) { outpos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::haxe::zip::_InflateImpl::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"huffman") ) { huffman=inValue.Cast< ::haxe::zip::Huffman >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lengths") ) { lengths=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"huffdist") ) { huffdist=inValue.Cast< ::haxe::zip::Huffman >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FIXED_HUFFMAN") ) { FIXED_HUFFMAN=inValue.Cast< ::haxe::zip::Huffman >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"LEN_BASE_VAL_TBL") ) { LEN_BASE_VAL_TBL=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CODE_LENGTHS_POS") ) { CODE_LENGTHS_POS=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"DIST_BASE_VAL_TBL") ) { DIST_BASE_VAL_TBL=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"LEN_EXTRA_BITS_TBL") ) { LEN_EXTRA_BITS_TBL=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DIST_EXTRA_BITS_TBL") ) { DIST_EXTRA_BITS_TBL=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InflateImpl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nbits"));
	outFields->push(HX_CSTRING("bits"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("final"));
	outFields->push(HX_CSTRING("huffman"));
	outFields->push(HX_CSTRING("huffdist"));
	outFields->push(HX_CSTRING("htools"));
	outFields->push(HX_CSTRING("len"));
	outFields->push(HX_CSTRING("dist"));
	outFields->push(HX_CSTRING("needed"));
	outFields->push(HX_CSTRING("output"));
	outFields->push(HX_CSTRING("outpos"));
	outFields->push(HX_CSTRING("input"));
	outFields->push(HX_CSTRING("lengths"));
	outFields->push(HX_CSTRING("window"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEN_EXTRA_BITS_TBL"),
	HX_CSTRING("LEN_BASE_VAL_TBL"),
	HX_CSTRING("DIST_EXTRA_BITS_TBL"),
	HX_CSTRING("DIST_BASE_VAL_TBL"),
	HX_CSTRING("CODE_LENGTHS_POS"),
	HX_CSTRING("FIXED_HUFFMAN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(InflateImpl_obj,nbits),HX_CSTRING("nbits")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,bits),HX_CSTRING("bits")},
	{hx::fsObject /*::haxe::zip::_InflateImpl::State*/ ,(int)offsetof(InflateImpl_obj,state),HX_CSTRING("state")},
	{hx::fsBool,(int)offsetof(InflateImpl_obj,final),HX_CSTRING("final")},
	{hx::fsObject /*::haxe::zip::Huffman*/ ,(int)offsetof(InflateImpl_obj,huffman),HX_CSTRING("huffman")},
	{hx::fsObject /*::haxe::zip::Huffman*/ ,(int)offsetof(InflateImpl_obj,huffdist),HX_CSTRING("huffdist")},
	{hx::fsObject /*::haxe::zip::HuffTools*/ ,(int)offsetof(InflateImpl_obj,htools),HX_CSTRING("htools")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,len),HX_CSTRING("len")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,dist),HX_CSTRING("dist")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,needed),HX_CSTRING("needed")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(InflateImpl_obj,output),HX_CSTRING("output")},
	{hx::fsInt,(int)offsetof(InflateImpl_obj,outpos),HX_CSTRING("outpos")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(InflateImpl_obj,input),HX_CSTRING("input")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(InflateImpl_obj,lengths),HX_CSTRING("lengths")},
	{hx::fsObject /*::haxe::zip::_InflateImpl::Window*/ ,(int)offsetof(InflateImpl_obj,window),HX_CSTRING("window")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nbits"),
	HX_CSTRING("bits"),
	HX_CSTRING("state"),
	HX_CSTRING("final"),
	HX_CSTRING("huffman"),
	HX_CSTRING("huffdist"),
	HX_CSTRING("htools"),
	HX_CSTRING("len"),
	HX_CSTRING("dist"),
	HX_CSTRING("needed"),
	HX_CSTRING("output"),
	HX_CSTRING("outpos"),
	HX_CSTRING("input"),
	HX_CSTRING("lengths"),
	HX_CSTRING("window"),
	HX_CSTRING("buildFixedHuffman"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("getBits"),
	HX_CSTRING("getBit"),
	HX_CSTRING("getRevBits"),
	HX_CSTRING("resetBits"),
	HX_CSTRING("addBytes"),
	HX_CSTRING("addByte"),
	HX_CSTRING("addDistOne"),
	HX_CSTRING("addDist"),
	HX_CSTRING("applyHuffman"),
	HX_CSTRING("inflateLengths"),
	HX_CSTRING("inflateLoop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InflateImpl_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::LEN_EXTRA_BITS_TBL,"LEN_EXTRA_BITS_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::LEN_BASE_VAL_TBL,"LEN_BASE_VAL_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::DIST_EXTRA_BITS_TBL,"DIST_EXTRA_BITS_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::DIST_BASE_VAL_TBL,"DIST_BASE_VAL_TBL");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::CODE_LENGTHS_POS,"CODE_LENGTHS_POS");
	HX_MARK_MEMBER_NAME(InflateImpl_obj::FIXED_HUFFMAN,"FIXED_HUFFMAN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::LEN_EXTRA_BITS_TBL,"LEN_EXTRA_BITS_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::LEN_BASE_VAL_TBL,"LEN_BASE_VAL_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::DIST_EXTRA_BITS_TBL,"DIST_EXTRA_BITS_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::DIST_BASE_VAL_TBL,"DIST_BASE_VAL_TBL");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::CODE_LENGTHS_POS,"CODE_LENGTHS_POS");
	HX_VISIT_MEMBER_NAME(InflateImpl_obj::FIXED_HUFFMAN,"FIXED_HUFFMAN");
};

#endif

Class InflateImpl_obj::__mClass;

void InflateImpl_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.zip.InflateImpl"), hx::TCanCast< InflateImpl_obj> ,sStaticFields,sMemberFields,
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

void InflateImpl_obj::__boot()
{
	LEN_EXTRA_BITS_TBL= Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)4).Add((int)4).Add((int)5).Add((int)5).Add((int)5).Add((int)5).Add((int)0).Add((int)-1).Add((int)-1);
	LEN_BASE_VAL_TBL= Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)5).Add((int)6).Add((int)7).Add((int)8).Add((int)9).Add((int)10).Add((int)11).Add((int)13).Add((int)15).Add((int)17).Add((int)19).Add((int)23).Add((int)27).Add((int)31).Add((int)35).Add((int)43).Add((int)51).Add((int)59).Add((int)67).Add((int)83).Add((int)99).Add((int)115).Add((int)131).Add((int)163).Add((int)195).Add((int)227).Add((int)258);
	DIST_EXTRA_BITS_TBL= Array_obj< int >::__new().Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)3).Add((int)3).Add((int)4).Add((int)4).Add((int)5).Add((int)5).Add((int)6).Add((int)6).Add((int)7).Add((int)7).Add((int)8).Add((int)8).Add((int)9).Add((int)9).Add((int)10).Add((int)10).Add((int)11).Add((int)11).Add((int)12).Add((int)12).Add((int)13).Add((int)13).Add((int)-1).Add((int)-1);
	DIST_BASE_VAL_TBL= Array_obj< int >::__new().Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)7).Add((int)9).Add((int)13).Add((int)17).Add((int)25).Add((int)33).Add((int)49).Add((int)65).Add((int)97).Add((int)129).Add((int)193).Add((int)257).Add((int)385).Add((int)513).Add((int)769).Add((int)1025).Add((int)1537).Add((int)2049).Add((int)3073).Add((int)4097).Add((int)6145).Add((int)8193).Add((int)12289).Add((int)16385).Add((int)24577);
	CODE_LENGTHS_POS= Array_obj< int >::__new().Add((int)16).Add((int)17).Add((int)18).Add((int)0).Add((int)8).Add((int)7).Add((int)9).Add((int)6).Add((int)10).Add((int)5).Add((int)11).Add((int)4).Add((int)12).Add((int)3).Add((int)13).Add((int)2).Add((int)14).Add((int)1).Add((int)15);
	FIXED_HUFFMAN= null();
}

} // end namespace haxe
} // end namespace zip
