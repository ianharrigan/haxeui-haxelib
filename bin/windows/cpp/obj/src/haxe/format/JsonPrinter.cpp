#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace haxe{
namespace format{

Void JsonPrinter_obj::__construct(Dynamic replacer,::String space)
{
HX_STACK_FRAME("haxe.format.JsonPrinter","new",0xeb68de75,"haxe.format.JsonPrinter.new","C:\\Servers\\Haxe\\haxe\\std/haxe/format/JsonPrinter.hx",17,0x8e941458)
HX_STACK_THIS(this)
HX_STACK_ARG(replacer,"replacer")
HX_STACK_ARG(space,"space")
{
	HX_STACK_LINE(18)
	this->replacer = replacer;
	HX_STACK_LINE(19)
	this->indent = space;
	HX_STACK_LINE(20)
	this->pretty = (space != null());
	HX_STACK_LINE(21)
	this->nind = (int)0;
	HX_STACK_LINE(28)
	::StringBuf _g = ::StringBuf_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->buf = _g;
}
;
	return null();
}

//JsonPrinter_obj::~JsonPrinter_obj() { }

Dynamic JsonPrinter_obj::__CreateEmpty() { return  new JsonPrinter_obj; }
hx::ObjectPtr< JsonPrinter_obj > JsonPrinter_obj::__new(Dynamic replacer,::String space)
{  hx::ObjectPtr< JsonPrinter_obj > result = new JsonPrinter_obj();
	result->__construct(replacer,space);
	return result;}

Dynamic JsonPrinter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JsonPrinter_obj > result = new JsonPrinter_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void JsonPrinter_obj::write( Dynamic k,Dynamic v){
{
		HX_STACK_FRAME("haxe.format.JsonPrinter","write",0x755dea34,"haxe.format.JsonPrinter.write","C:\\Servers\\Haxe\\haxe\\std/haxe/format/JsonPrinter.hx",40,0x8e941458)
		HX_STACK_THIS(this)
		HX_STACK_ARG(k,"k")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(41)
		if (((this->replacer_dyn() != null()))){
			HX_STACK_LINE(41)
			Dynamic _g = this->replacer(k,v);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(41)
			v = _g;
		}
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			::ValueType _g = ::Type_obj::_typeof(v);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			switch( (int)(_g->__Index())){
				case (int)8: {
					HX_STACK_LINE(44)
					this->buf->add(HX_CSTRING("\"???\""));
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(46)
					Array< ::String > _g1 = ::Reflect_obj::fields(v);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(46)
					this->fieldsString(v,_g1);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(48)
					::String v1 = v;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(48)
					this->buf->add(v1);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(50)
					::String v1;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(50)
					if ((::Math_obj::isFinite(v))){
						HX_STACK_LINE(50)
						v1 = v;
					}
					else{
						HX_STACK_LINE(50)
						v1 = HX_CSTRING("null");
					}
					HX_STACK_LINE(50)
					this->buf->add(v1);
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(52)
					this->buf->add(HX_CSTRING("\"<fun>\""));
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(42)
					::Class c = (::ValueType(_g))->__Param(0);		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(54)
					if (((c == hx::ClassOf< ::String >()))){
						HX_STACK_LINE(55)
						this->quote(v);
					}
					else{
						HX_STACK_LINE(56)
						if (((c == hx::ClassOf< Array<int> >()))){
							HX_STACK_LINE(57)
							Dynamic v1 = v;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(58)
							{
								HX_STACK_LINE(58)
								::String _g2 = HX_CSTRING("[");		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(58)
								this->buf->b->push(_g2);
							}
							HX_STACK_LINE(60)
							int len = v1->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(len,"len");
							HX_STACK_LINE(61)
							int last = (len - (int)1);		HX_STACK_VAR(last,"last");
							HX_STACK_LINE(62)
							{
								HX_STACK_LINE(62)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(62)
								while((true)){
									HX_STACK_LINE(62)
									if ((!(((_g1 < len))))){
										HX_STACK_LINE(62)
										break;
									}
									HX_STACK_LINE(62)
									int i = (_g1)++;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(64)
									if (((i > (int)0))){
										HX_STACK_LINE(64)
										::String _g3 = HX_CSTRING(",");		HX_STACK_VAR(_g3,"_g3");
										HX_STACK_LINE(64)
										this->buf->b->push(_g3);
									}
									else{
										HX_STACK_LINE(64)
										(this->nind)++;
									}
									HX_STACK_LINE(65)
									if ((this->pretty)){
										HX_STACK_LINE(65)
										::String _g4 = HX_CSTRING("\n");		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(65)
										this->buf->b->push(_g4);
									}
									HX_STACK_LINE(66)
									if ((this->pretty)){
										HX_STACK_LINE(66)
										::String v2 = ::StringTools_obj::lpad(HX_CSTRING(""),this->indent,(this->nind * this->indent.length));		HX_STACK_VAR(v2,"v2");
										HX_STACK_LINE(66)
										this->buf->add(v2);
									}
									HX_STACK_LINE(67)
									this->write(i,v1->__GetItem(i));
									HX_STACK_LINE(68)
									if (((i == last))){
										HX_STACK_LINE(70)
										(this->nind)--;
										HX_STACK_LINE(71)
										if ((this->pretty)){
											HX_STACK_LINE(71)
											::String _g5 = HX_CSTRING("\n");		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(71)
											this->buf->b->push(_g5);
										}
										HX_STACK_LINE(72)
										if ((this->pretty)){
											HX_STACK_LINE(72)
											::String v2 = ::StringTools_obj::lpad(HX_CSTRING(""),this->indent,(this->nind * this->indent.length));		HX_STACK_VAR(v2,"v2");
											HX_STACK_LINE(72)
											this->buf->add(v2);
										}
									}
								}
							}
							HX_STACK_LINE(75)
							{
								HX_STACK_LINE(75)
								::String _g6 = HX_CSTRING("]");		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(75)
								this->buf->b->push(_g6);
							}
						}
						else{
							HX_STACK_LINE(76)
							if (((c == hx::ClassOf< ::haxe::ds::StringMap >()))){
								HX_STACK_LINE(77)
								::haxe::ds::StringMap v1 = v;		HX_STACK_VAR(v1,"v1");
								struct _Function_6_1{
									inline static Dynamic Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\Servers\\Haxe\\haxe\\std/haxe/format/JsonPrinter.hx",78,0x8e941458)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(78)
								Dynamic o = _Function_6_1::Block();		HX_STACK_VAR(o,"o");
								HX_STACK_LINE(79)
								for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(v1->keys());  __it->hasNext(); ){
									::String k1 = __it->next();
									{
										HX_STACK_LINE(80)
										Dynamic value = v1->get(k1);		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(80)
										if (((o != null()))){
											HX_STACK_LINE(80)
											o->__SetField(k1,value,false);
										}
									}
;
								}
								HX_STACK_LINE(81)
								{
									HX_STACK_LINE(81)
									Array< ::String > _g7 = ::Reflect_obj::fields(o);		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(81)
									this->fieldsString(o,_g7);
								}
							}
							else{
								HX_STACK_LINE(82)
								if (((c == hx::ClassOf< ::Date >()))){
									HX_STACK_LINE(83)
									::Date v1 = v;		HX_STACK_VAR(v1,"v1");
									HX_STACK_LINE(84)
									::String _g8 = v1->toString();		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(84)
									this->quote(_g8);
								}
								else{
									HX_STACK_LINE(89)
									Array< ::String > _g9 = ::Reflect_obj::fields(v);		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(89)
									this->fieldsString(v,_g9);
								}
							}
						}
					}
				}
				;break;
				case (int)7: {
					HX_STACK_LINE(92)
					Dynamic i;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(92)
					{
						HX_STACK_LINE(92)
						Dynamic e = v;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(92)
						i = e->__Index();
					}
					HX_STACK_LINE(93)
					{
						HX_STACK_LINE(93)
						::String v1 = i;		HX_STACK_VAR(v1,"v1");
						HX_STACK_LINE(93)
						this->buf->add(v1);
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(95)
					::String v1 = v;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(95)
					this->buf->add(v1);
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(97)
					this->buf->add(HX_CSTRING("null"));
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(JsonPrinter_obj,write,(void))

Void JsonPrinter_obj::fieldsString( Dynamic v,Array< ::String > fields){
{
		HX_STACK_FRAME("haxe.format.JsonPrinter","fieldsString",0x974bd375,"haxe.format.JsonPrinter.fieldsString","C:\\Servers\\Haxe\\haxe\\std/haxe/format/JsonPrinter.hx",128,0x8e941458)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(fields,"fields")
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			::String _g = HX_CSTRING("{");		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			this->buf->b->push(_g);
		}
		HX_STACK_LINE(130)
		int len = fields->length;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(131)
		int last = (len - (int)1);		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(132)
		{
			HX_STACK_LINE(132)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(132)
			while((true)){
				HX_STACK_LINE(132)
				if ((!(((_g < len))))){
					HX_STACK_LINE(132)
					break;
				}
				HX_STACK_LINE(132)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(133)
				::String f = fields->__get(i);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(134)
				Dynamic value = ::Reflect_obj::field(v,f);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(135)
				if ((::Reflect_obj::isFunction(value))){
					HX_STACK_LINE(135)
					continue;
				}
				HX_STACK_LINE(136)
				if (((i > (int)0))){
					HX_STACK_LINE(136)
					::String _g1 = HX_CSTRING(",");		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(136)
					this->buf->b->push(_g1);
				}
				else{
					HX_STACK_LINE(136)
					(this->nind)++;
				}
				HX_STACK_LINE(137)
				if ((this->pretty)){
					HX_STACK_LINE(137)
					::String _g2 = HX_CSTRING("\n");		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(137)
					this->buf->b->push(_g2);
				}
				HX_STACK_LINE(138)
				if ((this->pretty)){
					HX_STACK_LINE(138)
					::String v1 = ::StringTools_obj::lpad(HX_CSTRING(""),this->indent,(this->nind * this->indent.length));		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(138)
					this->buf->add(v1);
				}
				HX_STACK_LINE(139)
				this->quote(f);
				HX_STACK_LINE(140)
				{
					HX_STACK_LINE(140)
					::String _g3 = HX_CSTRING(":");		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(140)
					this->buf->b->push(_g3);
				}
				HX_STACK_LINE(141)
				if ((this->pretty)){
					HX_STACK_LINE(141)
					::String _g4 = HX_CSTRING(" ");		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(141)
					this->buf->b->push(_g4);
				}
				HX_STACK_LINE(142)
				this->write(f,value);
				HX_STACK_LINE(143)
				if (((i == last))){
					HX_STACK_LINE(145)
					(this->nind)--;
					HX_STACK_LINE(146)
					if ((this->pretty)){
						HX_STACK_LINE(146)
						::String _g5 = HX_CSTRING("\n");		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(146)
						this->buf->b->push(_g5);
					}
					HX_STACK_LINE(147)
					if ((this->pretty)){
						HX_STACK_LINE(147)
						::String v1 = ::StringTools_obj::lpad(HX_CSTRING(""),this->indent,(this->nind * this->indent.length));		HX_STACK_VAR(v1,"v1");
						HX_STACK_LINE(147)
						this->buf->add(v1);
					}
				}
			}
		}
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			::String _g6 = HX_CSTRING("}");		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(150)
			this->buf->b->push(_g6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(JsonPrinter_obj,fieldsString,(void))

Void JsonPrinter_obj::quote( ::String s){
{
		HX_STACK_FRAME("haxe.format.JsonPrinter","quote",0x02f6a091,"haxe.format.JsonPrinter.quote","C:\\Servers\\Haxe\\haxe\\std/haxe/format/JsonPrinter.hx",153,0x8e941458)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(155)
		int _g = ::haxe::Utf8_obj::length(s);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(155)
		if (((s.length != _g))){
			HX_STACK_LINE(156)
			this->quoteUtf8(s);
			HX_STACK_LINE(157)
			return null();
		}
		HX_STACK_LINE(160)
		{
			HX_STACK_LINE(160)
			::String _g1 = HX_CSTRING("\"");		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(160)
			this->buf->b->push(_g1);
		}
		HX_STACK_LINE(161)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(162)
		while((true)){
			HX_STACK_LINE(163)
			int c;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				int index = (i)++;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(163)
				c = s.cca(index);
			}
			HX_STACK_LINE(164)
			if (((c == (int)0))){
				HX_STACK_LINE(164)
				break;
			}
			HX_STACK_LINE(165)
			switch( (int)(c)){
				case (int)34: {
					HX_STACK_LINE(166)
					this->buf->add(HX_CSTRING("\\\""));
				}
				;break;
				case (int)92: {
					HX_STACK_LINE(167)
					this->buf->add(HX_CSTRING("\\\\"));
				}
				;break;
				case (int)10: {
					HX_STACK_LINE(168)
					this->buf->add(HX_CSTRING("\\n"));
				}
				;break;
				case (int)13: {
					HX_STACK_LINE(169)
					this->buf->add(HX_CSTRING("\\r"));
				}
				;break;
				case (int)9: {
					HX_STACK_LINE(170)
					this->buf->add(HX_CSTRING("\\t"));
				}
				;break;
				case (int)8: {
					HX_STACK_LINE(171)
					this->buf->add(HX_CSTRING("\\b"));
				}
				;break;
				case (int)12: {
					HX_STACK_LINE(172)
					this->buf->add(HX_CSTRING("\\f"));
				}
				;break;
				default: {
					HX_STACK_LINE(177)
					::String _g2 = ::String::fromCharCode(c);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(177)
					this->buf->b->push(_g2);
				}
			}
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			::String _g3 = HX_CSTRING("\"");		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(181)
			this->buf->b->push(_g3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JsonPrinter_obj,quote,(void))

Void JsonPrinter_obj::quoteUtf8( ::String s){
{
		HX_STACK_FRAME("haxe.format.JsonPrinter","quoteUtf8",0x88683e62,"haxe.format.JsonPrinter.quoteUtf8","C:\\Servers\\Haxe\\haxe\\std/haxe/format/JsonPrinter.hx",185,0x8e941458)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(186)
		Array< ::Dynamic > u = Array_obj< ::Dynamic >::__new().Add(::haxe::Utf8_obj::__new(null()));		HX_STACK_VAR(u,"u");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,u)
		Void run(int c){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","C:\\Servers\\Haxe\\haxe\\std/haxe/format/JsonPrinter.hx",188,0x8e941458)
			HX_STACK_ARG(c,"c")
			{
				HX_STACK_LINE(188)
				switch( (int)(c)){
					case (int)92: case (int)34: {
						HX_STACK_LINE(189)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)92);
						HX_STACK_LINE(189)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar(c);
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(190)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)92);
						HX_STACK_LINE(190)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)110);
					}
					;break;
					case (int)13: {
						HX_STACK_LINE(191)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)92);
						HX_STACK_LINE(191)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)114);
					}
					;break;
					case (int)9: {
						HX_STACK_LINE(192)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)92);
						HX_STACK_LINE(192)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)116);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(193)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)92);
						HX_STACK_LINE(193)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)98);
					}
					;break;
					case (int)12: {
						HX_STACK_LINE(194)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)92);
						HX_STACK_LINE(194)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar((int)102);
					}
					;break;
					default: {
						HX_STACK_LINE(195)
						u->__get((int)0).StaticCast< ::haxe::Utf8 >()->addChar(c);
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(187)
		::haxe::Utf8_obj::iter(s, Dynamic(new _Function_1_1(u)));
		HX_STACK_LINE(198)
		this->buf->add(HX_CSTRING("\""));
		HX_STACK_LINE(199)
		::String _g = u->__get((int)0).StaticCast< ::haxe::Utf8 >()->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		this->buf->add(_g);
		HX_STACK_LINE(200)
		this->buf->add(HX_CSTRING("\""));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(JsonPrinter_obj,quoteUtf8,(void))

::String JsonPrinter_obj::print( Dynamic o,Dynamic replacer,::String space){
	HX_STACK_FRAME("haxe.format.JsonPrinter","print",0x6d8fd582,"haxe.format.JsonPrinter.print","C:\\Servers\\Haxe\\haxe\\std/haxe/format/JsonPrinter.hx",5,0x8e941458)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(replacer,"replacer")
	HX_STACK_ARG(space,"space")
	HX_STACK_LINE(6)
	::haxe::format::JsonPrinter printer = ::haxe::format::JsonPrinter_obj::__new(replacer,space);		HX_STACK_VAR(printer,"printer");
	HX_STACK_LINE(7)
	printer->write(HX_CSTRING(""),o);
	HX_STACK_LINE(8)
	return printer->buf->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonPrinter_obj,print,return )


JsonPrinter_obj::JsonPrinter_obj()
{
}

void JsonPrinter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JsonPrinter);
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(replacer,"replacer");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(pretty,"pretty");
	HX_MARK_MEMBER_NAME(nind,"nind");
	HX_MARK_END_CLASS();
}

void JsonPrinter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(replacer,"replacer");
	HX_VISIT_MEMBER_NAME(indent,"indent");
	HX_VISIT_MEMBER_NAME(pretty,"pretty");
	HX_VISIT_MEMBER_NAME(nind,"nind");
}

Dynamic JsonPrinter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return buf; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"nind") ) { return nind; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		if (HX_FIELD_EQ(inName,"write") ) { return write_dyn(); }
		if (HX_FIELD_EQ(inName,"quote") ) { return quote_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"indent") ) { return indent; }
		if (HX_FIELD_EQ(inName,"pretty") ) { return pretty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"replacer") ) { return replacer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"quoteUtf8") ) { return quoteUtf8_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fieldsString") ) { return fieldsString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic JsonPrinter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::StringBuf >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"nind") ) { nind=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pretty") ) { pretty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"replacer") ) { replacer=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JsonPrinter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buf"));
	outFields->push(HX_CSTRING("indent"));
	outFields->push(HX_CSTRING("pretty"));
	outFields->push(HX_CSTRING("nind"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("print"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::StringBuf*/ ,(int)offsetof(JsonPrinter_obj,buf),HX_CSTRING("buf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(JsonPrinter_obj,replacer),HX_CSTRING("replacer")},
	{hx::fsString,(int)offsetof(JsonPrinter_obj,indent),HX_CSTRING("indent")},
	{hx::fsBool,(int)offsetof(JsonPrinter_obj,pretty),HX_CSTRING("pretty")},
	{hx::fsInt,(int)offsetof(JsonPrinter_obj,nind),HX_CSTRING("nind")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buf"),
	HX_CSTRING("replacer"),
	HX_CSTRING("indent"),
	HX_CSTRING("pretty"),
	HX_CSTRING("nind"),
	HX_CSTRING("write"),
	HX_CSTRING("fieldsString"),
	HX_CSTRING("quote"),
	HX_CSTRING("quoteUtf8"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JsonPrinter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JsonPrinter_obj::__mClass,"__mClass");
};

#endif

Class JsonPrinter_obj::__mClass;

void JsonPrinter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.format.JsonPrinter"), hx::TCanCast< JsonPrinter_obj> ,sStaticFields,sMemberFields,
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

void JsonPrinter_obj::__boot()
{
}

} // end namespace haxe
} // end namespace format
