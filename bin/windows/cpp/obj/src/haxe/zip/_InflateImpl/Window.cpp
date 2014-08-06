#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Adler32
#include <haxe/crypto/Adler32.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip__InflateImpl_Window
#include <haxe/zip/_InflateImpl/Window.h>
#endif
namespace haxe{
namespace zip{
namespace _InflateImpl{

Void Window_obj::__construct(bool hasCrc)
{
HX_STACK_FRAME("haxe.zip._InflateImpl.Window","new",0x88adb9f3,"haxe.zip._InflateImpl.Window.new","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",35,0x4b4a64b1)
HX_STACK_THIS(this)
HX_STACK_ARG(hasCrc,"hasCrc")
{
	HX_STACK_LINE(36)
	::haxe::io::Bytes _g = ::haxe::io::Bytes_obj::alloc((int)65536);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	this->buffer = _g;
	HX_STACK_LINE(37)
	this->pos = (int)0;
	HX_STACK_LINE(38)
	if ((hasCrc)){
		HX_STACK_LINE(38)
		::haxe::crypto::Adler32 _g1 = ::haxe::crypto::Adler32_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		this->crc = _g1;
	}
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(bool hasCrc)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(hasCrc);
	return result;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > result = new Window_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Window_obj::slide( ){
{
		HX_STACK_FRAME("haxe.zip._InflateImpl.Window","slide",0x409d7984,"haxe.zip._InflateImpl.Window.slide","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",41,0x4b4a64b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		if (((this->crc != null()))){
			HX_STACK_LINE(42)
			this->crc->update(this->buffer,(int)0,(int)32768);
		}
		HX_STACK_LINE(43)
		::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc((int)65536);		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(44)
		hx::SubEq(this->pos,(int)32768);
		HX_STACK_LINE(45)
		b->blit((int)0,this->buffer,(int)32768,this->pos);
		HX_STACK_LINE(46)
		this->buffer = b;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,slide,(void))

Void Window_obj::addBytes( ::haxe::io::Bytes b,int p,int len){
{
		HX_STACK_FRAME("haxe.zip._InflateImpl.Window","addBytes",0xb984b017,"haxe.zip._InflateImpl.Window.addBytes","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",49,0x4b4a64b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(50)
		if ((((this->pos + len) > (int)65536))){
			HX_STACK_LINE(50)
			this->slide();
		}
		HX_STACK_LINE(51)
		this->buffer->blit(this->pos,b,p,len);
		HX_STACK_LINE(52)
		hx::AddEq(this->pos,len);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Window_obj,addBytes,(void))

Void Window_obj::addByte( int c){
{
		HX_STACK_FRAME("haxe.zip._InflateImpl.Window","addByte",0xa74a10dc,"haxe.zip._InflateImpl.Window.addByte","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",55,0x4b4a64b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(56)
		if (((this->pos == (int)65536))){
			HX_STACK_LINE(56)
			this->slide();
		}
		HX_STACK_LINE(57)
		this->buffer->b[this->pos] = c;
		HX_STACK_LINE(58)
		(this->pos)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,addByte,(void))

int Window_obj::getLastChar( ){
	HX_STACK_FRAME("haxe.zip._InflateImpl.Window","getLastChar",0xdd866f95,"haxe.zip._InflateImpl.Window.getLastChar","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",62,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->buffer->b->__get((this->pos - (int)1));
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,getLastChar,return )

int Window_obj::available( ){
	HX_STACK_FRAME("haxe.zip._InflateImpl.Window","available",0x3285339c,"haxe.zip._InflateImpl.Window.available","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",66,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return this->pos;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,available,return )

::haxe::crypto::Adler32 Window_obj::checksum( ){
	HX_STACK_FRAME("haxe.zip._InflateImpl.Window","checksum",0x2f923f50,"haxe.zip._InflateImpl.Window.checksum","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/InflateImpl.hx",69,0x4b4a64b1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	if (((this->crc != null()))){
		HX_STACK_LINE(70)
		this->crc->update(this->buffer,(int)0,this->pos);
	}
	HX_STACK_LINE(71)
	return this->crc;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,checksum,return )


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(crc,"crc");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(crc,"crc");
}

Dynamic Window_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"crc") ) { return crc; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slide") ) { return slide_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addByte") ) { return addByte_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addBytes") ) { return addBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"checksum") ) { return checksum_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"available") ) { return available_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getLastChar") ) { return getLastChar_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"crc") ) { crc=inValue.Cast< ::haxe::crypto::Adler32 >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("buffer"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("crc"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(Window_obj,buffer),HX_CSTRING("buffer")},
	{hx::fsInt,(int)offsetof(Window_obj,pos),HX_CSTRING("pos")},
	{hx::fsObject /*::haxe::crypto::Adler32*/ ,(int)offsetof(Window_obj,crc),HX_CSTRING("crc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("buffer"),
	HX_CSTRING("pos"),
	HX_CSTRING("crc"),
	HX_CSTRING("slide"),
	HX_CSTRING("addBytes"),
	HX_CSTRING("addByte"),
	HX_CSTRING("getLastChar"),
	HX_CSTRING("available"),
	HX_CSTRING("checksum"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
};

#endif

Class Window_obj::__mClass;

void Window_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.zip._InflateImpl.Window"), hx::TCanCast< Window_obj> ,sStaticFields,sMemberFields,
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

void Window_obj::__boot()
{
}

} // end namespace haxe
} // end namespace zip
} // end namespace _InflateImpl
