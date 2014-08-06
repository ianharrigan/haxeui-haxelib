#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
namespace haxe{
namespace crypto{

Void Md5_obj::__construct()
{
HX_STACK_FRAME("haxe.crypto.Md5","new",0x90507feb,"haxe.crypto.Md5.new","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",73,0x7cd14ea2)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Md5_obj::~Md5_obj() { }

Dynamic Md5_obj::__CreateEmpty() { return  new Md5_obj; }
hx::ObjectPtr< Md5_obj > Md5_obj::__new()
{  hx::ObjectPtr< Md5_obj > result = new Md5_obj();
	result->__construct();
	return result;}

Dynamic Md5_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Md5_obj > result = new Md5_obj();
	result->__construct();
	return result;}

int Md5_obj::bitOR( int a,int b){
	HX_STACK_FRAME("haxe.crypto.Md5","bitOR",0xbf34737b,"haxe.crypto.Md5.bitOR","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",76,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(77)
	int lsb = (int((int(a) & int((int)1))) | int((int(b) & int((int)1))));		HX_STACK_VAR(lsb,"lsb");
	HX_STACK_LINE(78)
	int msb31 = (int(hx::UShr(a,(int)1)) | int(hx::UShr(b,(int)1)));		HX_STACK_VAR(msb31,"msb31");
	HX_STACK_LINE(79)
	return (int((int(msb31) << int((int)1))) | int(lsb));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitOR,return )

int Md5_obj::bitXOR( int a,int b){
	HX_STACK_FRAME("haxe.crypto.Md5","bitXOR",0x8eb76a23,"haxe.crypto.Md5.bitXOR","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",82,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(83)
	int lsb = (int((int(a) & int((int)1))) ^ int((int(b) & int((int)1))));		HX_STACK_VAR(lsb,"lsb");
	HX_STACK_LINE(84)
	int msb31 = (int(hx::UShr(a,(int)1)) ^ int(hx::UShr(b,(int)1)));		HX_STACK_VAR(msb31,"msb31");
	HX_STACK_LINE(85)
	return (int((int(msb31) << int((int)1))) | int(lsb));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitXOR,return )

int Md5_obj::bitAND( int a,int b){
	HX_STACK_FRAME("haxe.crypto.Md5","bitAND",0x8ea5f55f,"haxe.crypto.Md5.bitAND","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",88,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(89)
	int lsb = (int((int(a) & int((int)1))) & int(((int(b) & int((int)1)))));		HX_STACK_VAR(lsb,"lsb");
	HX_STACK_LINE(90)
	int msb31 = (int(hx::UShr(a,(int)1)) & int(hx::UShr(b,(int)1)));		HX_STACK_VAR(msb31,"msb31");
	HX_STACK_LINE(91)
	return (int((int(msb31) << int((int)1))) | int(lsb));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,bitAND,return )

int Md5_obj::addme( int x,int y){
	HX_STACK_FRAME("haxe.crypto.Md5","addme",0x2873c404,"haxe.crypto.Md5.addme","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",94,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(95)
	int lsw = (((int(x) & int((int)65535))) + ((int(y) & int((int)65535))));		HX_STACK_VAR(lsw,"lsw");
	HX_STACK_LINE(96)
	int msw = ((((int(x) >> int((int)16))) + ((int(y) >> int((int)16)))) + ((int(lsw) >> int((int)16))));		HX_STACK_VAR(msw,"msw");
	HX_STACK_LINE(97)
	return (int((int(msw) << int((int)16))) | int((int(lsw) & int((int)65535))));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,addme,return )

::String Md5_obj::hex( Array< int > a){
	HX_STACK_FRAME("haxe.crypto.Md5","hex",0x904bf266,"haxe.crypto.Md5.hex","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",100,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(101)
	::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(102)
	::String hex_chr = HX_CSTRING("0123456789abcdef");		HX_STACK_VAR(hex_chr,"hex_chr");
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		while((true)){
			HX_STACK_LINE(103)
			if ((!(((_g < a->length))))){
				HX_STACK_LINE(103)
				break;
			}
			HX_STACK_LINE(103)
			int num = a->__get(_g);		HX_STACK_VAR(num,"num");
			HX_STACK_LINE(103)
			++(_g);
			HX_STACK_LINE(104)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				if ((!(((_g1 < (int)4))))){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int j = (_g1)++;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(105)
				::String _g2 = hex_chr.charAt((int((int(num) >> int(((j * (int)8) + (int)4)))) & int((int)15)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(106)
				::String _g11 = hex_chr.charAt((int((int(num) >> int((j * (int)8)))) & int((int)15)));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(105)
				::String _g21 = (_g2 + _g11);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(105)
				hx::AddEq(str,_g21);
			}
		}
	}
	HX_STACK_LINE(107)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,hex,return )

int Md5_obj::rol( int num,int cnt){
	HX_STACK_FRAME("haxe.crypto.Md5","rol",0x9053919a,"haxe.crypto.Md5.rol","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",169,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(num,"num")
	HX_STACK_ARG(cnt,"cnt")
	HX_STACK_LINE(169)
	return (int((int(num) << int(cnt))) | int(hx::UShr(num,((int)32 - cnt))));
}


HX_DEFINE_DYNAMIC_FUNC2(Md5_obj,rol,return )

int Md5_obj::cmn( int q,int a,int b,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","cmn",0x90482e0f,"haxe.crypto.Md5.cmn","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",172,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(q,"q")
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(173)
	int _g = this->addme(a,q);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(173)
	int _g1 = this->addme(x,t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(173)
	int _g2 = this->addme(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(173)
	int _g3 = this->rol(_g2,s);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(173)
	return this->addme(_g3,b);
}


HX_DEFINE_DYNAMIC_FUNC6(Md5_obj,cmn,return )

int Md5_obj::ff( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","ff",0xde352415,"haxe.crypto.Md5.ff","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",176,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(177)
	int _g = this->bitAND(b,c);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(177)
	int _g1 = this->bitAND(~(int)(b),d);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(177)
	int _g2 = this->bitOR(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(177)
	return this->cmn(_g2,a,b,x,s,t);
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,ff,return )

int Md5_obj::gg( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","gg",0xde3524f5,"haxe.crypto.Md5.gg","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",180,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(181)
	int _g = this->bitAND(b,d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(181)
	int _g1 = this->bitAND(c,~(int)(d));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(181)
	int _g2 = this->bitOR(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(181)
	return this->cmn(_g2,a,b,x,s,t);
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,gg,return )

int Md5_obj::hh( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","hh",0xde3525d5,"haxe.crypto.Md5.hh","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",184,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(185)
	int _g = this->bitXOR(b,c);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(185)
	int _g1 = this->bitXOR(_g,d);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(185)
	return this->cmn(_g1,a,b,x,s,t);
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,hh,return )

int Md5_obj::ii( int a,int b,int c,int d,int x,int s,int t){
	HX_STACK_FRAME("haxe.crypto.Md5","ii",0xde3526b5,"haxe.crypto.Md5.ii","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",188,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(189)
	int _g = this->bitOR(b,~(int)(d));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(189)
	int _g1 = this->bitXOR(c,_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(189)
	return this->cmn(_g1,a,b,x,s,t);
}


HX_DEFINE_DYNAMIC_FUNC7(Md5_obj,ii,return )

Array< int > Md5_obj::doEncode( Array< int > x){
	HX_STACK_FRAME("haxe.crypto.Md5","doEncode",0x943f9096,"haxe.crypto.Md5.doEncode","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",192,0x7cd14ea2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(194)
	int a = (int)1732584193;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(195)
	int b = (int)-271733879;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(196)
	int c = (int)-1732584194;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(197)
	int d = (int)271733878;		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(199)
	int step;		HX_STACK_VAR(step,"step");
	HX_STACK_LINE(201)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(202)
	while((true)){
		HX_STACK_LINE(202)
		if ((!(((i < x->length))))){
			HX_STACK_LINE(202)
			break;
		}
		HX_STACK_LINE(203)
		int olda = a;		HX_STACK_VAR(olda,"olda");
		HX_STACK_LINE(204)
		int oldb = b;		HX_STACK_VAR(oldb,"oldb");
		HX_STACK_LINE(205)
		int oldc = c;		HX_STACK_VAR(oldc,"oldc");
		HX_STACK_LINE(206)
		int oldd = d;		HX_STACK_VAR(oldd,"oldd");
		HX_STACK_LINE(208)
		step = (int)0;
		HX_STACK_LINE(209)
		int _g = this->ff(a,b,c,d,x->__get(i),(int)7,(int)-680876936);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		a = _g;
		HX_STACK_LINE(210)
		int _g1 = this->ff(d,a,b,c,x->__get((i + (int)1)),(int)12,(int)-389564586);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(210)
		d = _g1;
		HX_STACK_LINE(211)
		int _g2 = this->ff(c,d,a,b,x->__get((i + (int)2)),(int)17,(int)606105819);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(211)
		c = _g2;
		HX_STACK_LINE(212)
		int _g3 = this->ff(b,c,d,a,x->__get((i + (int)3)),(int)22,(int)-1044525330);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(212)
		b = _g3;
		HX_STACK_LINE(213)
		int _g4 = this->ff(a,b,c,d,x->__get((i + (int)4)),(int)7,(int)-176418897);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(213)
		a = _g4;
		HX_STACK_LINE(214)
		int _g5 = this->ff(d,a,b,c,x->__get((i + (int)5)),(int)12,(int)1200080426);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(214)
		d = _g5;
		HX_STACK_LINE(215)
		int _g6 = this->ff(c,d,a,b,x->__get((i + (int)6)),(int)17,(int)-1473231341);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(215)
		c = _g6;
		HX_STACK_LINE(216)
		int _g7 = this->ff(b,c,d,a,x->__get((i + (int)7)),(int)22,(int)-45705983);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(216)
		b = _g7;
		HX_STACK_LINE(217)
		int _g8 = this->ff(a,b,c,d,x->__get((i + (int)8)),(int)7,(int)1770035416);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(217)
		a = _g8;
		HX_STACK_LINE(218)
		int _g9 = this->ff(d,a,b,c,x->__get((i + (int)9)),(int)12,(int)-1958414417);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(218)
		d = _g9;
		HX_STACK_LINE(219)
		int _g10 = this->ff(c,d,a,b,x->__get((i + (int)10)),(int)17,(int)-42063);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(219)
		c = _g10;
		HX_STACK_LINE(220)
		int _g11 = this->ff(b,c,d,a,x->__get((i + (int)11)),(int)22,(int)-1990404162);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(220)
		b = _g11;
		HX_STACK_LINE(221)
		int _g12 = this->ff(a,b,c,d,x->__get((i + (int)12)),(int)7,(int)1804603682);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(221)
		a = _g12;
		HX_STACK_LINE(222)
		int _g13 = this->ff(d,a,b,c,x->__get((i + (int)13)),(int)12,(int)-40341101);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(222)
		d = _g13;
		HX_STACK_LINE(223)
		int _g14 = this->ff(c,d,a,b,x->__get((i + (int)14)),(int)17,(int)-1502002290);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(223)
		c = _g14;
		HX_STACK_LINE(224)
		int _g15 = this->ff(b,c,d,a,x->__get((i + (int)15)),(int)22,(int)1236535329);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(224)
		b = _g15;
		HX_STACK_LINE(225)
		int _g16 = this->gg(a,b,c,d,x->__get((i + (int)1)),(int)5,(int)-165796510);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(225)
		a = _g16;
		HX_STACK_LINE(226)
		int _g17 = this->gg(d,a,b,c,x->__get((i + (int)6)),(int)9,(int)-1069501632);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(226)
		d = _g17;
		HX_STACK_LINE(227)
		int _g18 = this->gg(c,d,a,b,x->__get((i + (int)11)),(int)14,(int)643717713);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(227)
		c = _g18;
		HX_STACK_LINE(228)
		int _g19 = this->gg(b,c,d,a,x->__get(i),(int)20,(int)-373897302);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(228)
		b = _g19;
		HX_STACK_LINE(229)
		int _g20 = this->gg(a,b,c,d,x->__get((i + (int)5)),(int)5,(int)-701558691);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(229)
		a = _g20;
		HX_STACK_LINE(230)
		int _g21 = this->gg(d,a,b,c,x->__get((i + (int)10)),(int)9,(int)38016083);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(230)
		d = _g21;
		HX_STACK_LINE(231)
		int _g22 = this->gg(c,d,a,b,x->__get((i + (int)15)),(int)14,(int)-660478335);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(231)
		c = _g22;
		HX_STACK_LINE(232)
		int _g23 = this->gg(b,c,d,a,x->__get((i + (int)4)),(int)20,(int)-405537848);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(232)
		b = _g23;
		HX_STACK_LINE(233)
		int _g24 = this->gg(a,b,c,d,x->__get((i + (int)9)),(int)5,(int)568446438);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(233)
		a = _g24;
		HX_STACK_LINE(234)
		int _g25 = this->gg(d,a,b,c,x->__get((i + (int)14)),(int)9,(int)-1019803690);		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(234)
		d = _g25;
		HX_STACK_LINE(235)
		int _g26 = this->gg(c,d,a,b,x->__get((i + (int)3)),(int)14,(int)-187363961);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(235)
		c = _g26;
		HX_STACK_LINE(236)
		int _g27 = this->gg(b,c,d,a,x->__get((i + (int)8)),(int)20,(int)1163531501);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(236)
		b = _g27;
		HX_STACK_LINE(237)
		int _g28 = this->gg(a,b,c,d,x->__get((i + (int)13)),(int)5,(int)-1444681467);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(237)
		a = _g28;
		HX_STACK_LINE(238)
		int _g29 = this->gg(d,a,b,c,x->__get((i + (int)2)),(int)9,(int)-51403784);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(238)
		d = _g29;
		HX_STACK_LINE(239)
		int _g30 = this->gg(c,d,a,b,x->__get((i + (int)7)),(int)14,(int)1735328473);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(239)
		c = _g30;
		HX_STACK_LINE(240)
		int _g31 = this->gg(b,c,d,a,x->__get((i + (int)12)),(int)20,(int)-1926607734);		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(240)
		b = _g31;
		HX_STACK_LINE(241)
		int _g32 = this->hh(a,b,c,d,x->__get((i + (int)5)),(int)4,(int)-378558);		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(241)
		a = _g32;
		HX_STACK_LINE(242)
		int _g33 = this->hh(d,a,b,c,x->__get((i + (int)8)),(int)11,(int)-2022574463);		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(242)
		d = _g33;
		HX_STACK_LINE(243)
		int _g34 = this->hh(c,d,a,b,x->__get((i + (int)11)),(int)16,(int)1839030562);		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(243)
		c = _g34;
		HX_STACK_LINE(244)
		int _g35 = this->hh(b,c,d,a,x->__get((i + (int)14)),(int)23,(int)-35309556);		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(244)
		b = _g35;
		HX_STACK_LINE(245)
		int _g36 = this->hh(a,b,c,d,x->__get((i + (int)1)),(int)4,(int)-1530992060);		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(245)
		a = _g36;
		HX_STACK_LINE(246)
		int _g37 = this->hh(d,a,b,c,x->__get((i + (int)4)),(int)11,(int)1272893353);		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(246)
		d = _g37;
		HX_STACK_LINE(247)
		int _g38 = this->hh(c,d,a,b,x->__get((i + (int)7)),(int)16,(int)-155497632);		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(247)
		c = _g38;
		HX_STACK_LINE(248)
		int _g39 = this->hh(b,c,d,a,x->__get((i + (int)10)),(int)23,(int)-1094730640);		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(248)
		b = _g39;
		HX_STACK_LINE(249)
		int _g40 = this->hh(a,b,c,d,x->__get((i + (int)13)),(int)4,(int)681279174);		HX_STACK_VAR(_g40,"_g40");
		HX_STACK_LINE(249)
		a = _g40;
		HX_STACK_LINE(250)
		int _g41 = this->hh(d,a,b,c,x->__get(i),(int)11,(int)-358537222);		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(250)
		d = _g41;
		HX_STACK_LINE(251)
		int _g42 = this->hh(c,d,a,b,x->__get((i + (int)3)),(int)16,(int)-722521979);		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(251)
		c = _g42;
		HX_STACK_LINE(252)
		int _g43 = this->hh(b,c,d,a,x->__get((i + (int)6)),(int)23,(int)76029189);		HX_STACK_VAR(_g43,"_g43");
		HX_STACK_LINE(252)
		b = _g43;
		HX_STACK_LINE(253)
		int _g44 = this->hh(a,b,c,d,x->__get((i + (int)9)),(int)4,(int)-640364487);		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(253)
		a = _g44;
		HX_STACK_LINE(254)
		int _g45 = this->hh(d,a,b,c,x->__get((i + (int)12)),(int)11,(int)-421815835);		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(254)
		d = _g45;
		HX_STACK_LINE(255)
		int _g46 = this->hh(c,d,a,b,x->__get((i + (int)15)),(int)16,(int)530742520);		HX_STACK_VAR(_g46,"_g46");
		HX_STACK_LINE(255)
		c = _g46;
		HX_STACK_LINE(256)
		int _g47 = this->hh(b,c,d,a,x->__get((i + (int)2)),(int)23,(int)-995338651);		HX_STACK_VAR(_g47,"_g47");
		HX_STACK_LINE(256)
		b = _g47;
		HX_STACK_LINE(257)
		int _g48 = this->ii(a,b,c,d,x->__get(i),(int)6,(int)-198630844);		HX_STACK_VAR(_g48,"_g48");
		HX_STACK_LINE(257)
		a = _g48;
		HX_STACK_LINE(258)
		int _g49 = this->ii(d,a,b,c,x->__get((i + (int)7)),(int)10,(int)1126891415);		HX_STACK_VAR(_g49,"_g49");
		HX_STACK_LINE(258)
		d = _g49;
		HX_STACK_LINE(259)
		int _g50 = this->ii(c,d,a,b,x->__get((i + (int)14)),(int)15,(int)-1416354905);		HX_STACK_VAR(_g50,"_g50");
		HX_STACK_LINE(259)
		c = _g50;
		HX_STACK_LINE(260)
		int _g51 = this->ii(b,c,d,a,x->__get((i + (int)5)),(int)21,(int)-57434055);		HX_STACK_VAR(_g51,"_g51");
		HX_STACK_LINE(260)
		b = _g51;
		HX_STACK_LINE(261)
		int _g52 = this->ii(a,b,c,d,x->__get((i + (int)12)),(int)6,(int)1700485571);		HX_STACK_VAR(_g52,"_g52");
		HX_STACK_LINE(261)
		a = _g52;
		HX_STACK_LINE(262)
		int _g53 = this->ii(d,a,b,c,x->__get((i + (int)3)),(int)10,(int)-1894986606);		HX_STACK_VAR(_g53,"_g53");
		HX_STACK_LINE(262)
		d = _g53;
		HX_STACK_LINE(263)
		int _g54 = this->ii(c,d,a,b,x->__get((i + (int)10)),(int)15,(int)-1051523);		HX_STACK_VAR(_g54,"_g54");
		HX_STACK_LINE(263)
		c = _g54;
		HX_STACK_LINE(264)
		int _g55 = this->ii(b,c,d,a,x->__get((i + (int)1)),(int)21,(int)-2054922799);		HX_STACK_VAR(_g55,"_g55");
		HX_STACK_LINE(264)
		b = _g55;
		HX_STACK_LINE(265)
		int _g56 = this->ii(a,b,c,d,x->__get((i + (int)8)),(int)6,(int)1873313359);		HX_STACK_VAR(_g56,"_g56");
		HX_STACK_LINE(265)
		a = _g56;
		HX_STACK_LINE(266)
		int _g57 = this->ii(d,a,b,c,x->__get((i + (int)15)),(int)10,(int)-30611744);		HX_STACK_VAR(_g57,"_g57");
		HX_STACK_LINE(266)
		d = _g57;
		HX_STACK_LINE(267)
		int _g58 = this->ii(c,d,a,b,x->__get((i + (int)6)),(int)15,(int)-1560198380);		HX_STACK_VAR(_g58,"_g58");
		HX_STACK_LINE(267)
		c = _g58;
		HX_STACK_LINE(268)
		int _g59 = this->ii(b,c,d,a,x->__get((i + (int)13)),(int)21,(int)1309151649);		HX_STACK_VAR(_g59,"_g59");
		HX_STACK_LINE(268)
		b = _g59;
		HX_STACK_LINE(269)
		int _g60 = this->ii(a,b,c,d,x->__get((i + (int)4)),(int)6,(int)-145523070);		HX_STACK_VAR(_g60,"_g60");
		HX_STACK_LINE(269)
		a = _g60;
		HX_STACK_LINE(270)
		int _g61 = this->ii(d,a,b,c,x->__get((i + (int)11)),(int)10,(int)-1120210379);		HX_STACK_VAR(_g61,"_g61");
		HX_STACK_LINE(270)
		d = _g61;
		HX_STACK_LINE(271)
		int _g62 = this->ii(c,d,a,b,x->__get((i + (int)2)),(int)15,(int)718787259);		HX_STACK_VAR(_g62,"_g62");
		HX_STACK_LINE(271)
		c = _g62;
		HX_STACK_LINE(272)
		int _g63 = this->ii(b,c,d,a,x->__get((i + (int)9)),(int)21,(int)-343485551);		HX_STACK_VAR(_g63,"_g63");
		HX_STACK_LINE(272)
		b = _g63;
		HX_STACK_LINE(274)
		int _g64 = this->addme(a,olda);		HX_STACK_VAR(_g64,"_g64");
		HX_STACK_LINE(274)
		a = _g64;
		HX_STACK_LINE(275)
		int _g65 = this->addme(b,oldb);		HX_STACK_VAR(_g65,"_g65");
		HX_STACK_LINE(275)
		b = _g65;
		HX_STACK_LINE(276)
		int _g66 = this->addme(c,oldc);		HX_STACK_VAR(_g66,"_g66");
		HX_STACK_LINE(276)
		c = _g66;
		HX_STACK_LINE(277)
		int _g67 = this->addme(d,oldd);		HX_STACK_VAR(_g67,"_g67");
		HX_STACK_LINE(277)
		d = _g67;
		HX_STACK_LINE(279)
		hx::AddEq(i,(int)16);
	}
	HX_STACK_LINE(281)
	return Array_obj< int >::__new().Add(a).Add(b).Add(c).Add(d);
}


HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,doEncode,return )

::String Md5_obj::encode( ::String s){
	HX_STACK_FRAME("haxe.crypto.Md5","encode",0x979f4b6b,"haxe.crypto.Md5.encode","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",29,0x7cd14ea2)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(35)
	::haxe::crypto::Md5 m = ::haxe::crypto::Md5_obj::__new();		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(36)
	Array< int > _g = ::haxe::crypto::Md5_obj::str2blks(s);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	Array< int > h = m->doEncode(_g);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(37)
	return m->hex(h);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,encode,return )

Array< int > Md5_obj::str2blks( ::String str){
	HX_STACK_FRAME("haxe.crypto.Md5","str2blks",0x2f788968,"haxe.crypto.Md5.str2blks","C:\\Servers\\Haxe\\haxe\\std/haxe/crypto/Md5.hx",139,0x7cd14ea2)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(140)
	int nblk = (((int((str.length + (int)8)) >> int((int)6))) + (int)1);		HX_STACK_VAR(nblk,"nblk");
	HX_STACK_LINE(141)
	Array< int > blks = Array_obj< int >::__new();		HX_STACK_VAR(blks,"blks");
	HX_STACK_LINE(144)
	int blksSize = (nblk * (int)16);		HX_STACK_VAR(blksSize,"blksSize");
	HX_STACK_LINE(146)
	blks[(blksSize - (int)1)] = (int)0;
	HX_STACK_LINE(153)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(154)
	while((true)){
		HX_STACK_LINE(154)
		if ((!(((i < str.length))))){
			HX_STACK_LINE(154)
			break;
		}
		HX_STACK_LINE(155)
		Dynamic _g = str.charCodeAt(i);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(155)
		hx::OrEq(blks[(int(i) >> int((int)2))],(int(_g) << int((hx::Mod((((str.length * (int)8) + i)),(int)4) * (int)8))));
		HX_STACK_LINE(156)
		(i)++;
	}
	HX_STACK_LINE(158)
	hx::OrEq(blks[(int(i) >> int((int)2))],(int((int)128) << int((hx::Mod((((str.length * (int)8) + i)),(int)4) * (int)8))));
	HX_STACK_LINE(159)
	int l = (str.length * (int)8);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(160)
	int k = ((nblk * (int)16) - (int)2);		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(161)
	blks[k] = (int(l) & int((int)255));
	HX_STACK_LINE(162)
	hx::OrEq(blks[k],(int(((int(hx::UShr(l,(int)8)) & int((int)255)))) << int((int)8)));
	HX_STACK_LINE(163)
	hx::OrEq(blks[k],(int(((int(hx::UShr(l,(int)16)) & int((int)255)))) << int((int)16)));
	HX_STACK_LINE(164)
	hx::OrEq(blks[k],(int(((int(hx::UShr(l,(int)24)) & int((int)255)))) << int((int)24)));
	HX_STACK_LINE(165)
	return blks;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Md5_obj,str2blks,return )


Md5_obj::Md5_obj()
{
}

Dynamic Md5_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ff") ) { return ff_dyn(); }
		if (HX_FIELD_EQ(inName,"gg") ) { return gg_dyn(); }
		if (HX_FIELD_EQ(inName,"hh") ) { return hh_dyn(); }
		if (HX_FIELD_EQ(inName,"ii") ) { return ii_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"hex") ) { return hex_dyn(); }
		if (HX_FIELD_EQ(inName,"rol") ) { return rol_dyn(); }
		if (HX_FIELD_EQ(inName,"cmn") ) { return cmn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bitOR") ) { return bitOR_dyn(); }
		if (HX_FIELD_EQ(inName,"addme") ) { return addme_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"bitXOR") ) { return bitXOR_dyn(); }
		if (HX_FIELD_EQ(inName,"bitAND") ) { return bitAND_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"str2blks") ) { return str2blks_dyn(); }
		if (HX_FIELD_EQ(inName,"doEncode") ) { return doEncode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Md5_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Md5_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("encode"),
	HX_CSTRING("str2blks"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitOR"),
	HX_CSTRING("bitXOR"),
	HX_CSTRING("bitAND"),
	HX_CSTRING("addme"),
	HX_CSTRING("hex"),
	HX_CSTRING("rol"),
	HX_CSTRING("cmn"),
	HX_CSTRING("ff"),
	HX_CSTRING("gg"),
	HX_CSTRING("hh"),
	HX_CSTRING("ii"),
	HX_CSTRING("doEncode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Md5_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Md5_obj::__mClass,"__mClass");
};

#endif

Class Md5_obj::__mClass;

void Md5_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.crypto.Md5"), hx::TCanCast< Md5_obj> ,sStaticFields,sMemberFields,
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

void Md5_obj::__boot()
{
}

} // end namespace haxe
} // end namespace crypto
