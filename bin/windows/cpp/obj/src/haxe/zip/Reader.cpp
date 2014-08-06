#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_zip_ExtraField
#include <haxe/zip/ExtraField.h>
#endif
#ifndef INCLUDED_haxe_zip_InflateImpl
#include <haxe/zip/InflateImpl.h>
#endif
#ifndef INCLUDED_haxe_zip_Reader
#include <haxe/zip/Reader.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
namespace haxe{
namespace zip{

Void Reader_obj::__construct(::haxe::io::Input i)
{
HX_STACK_FRAME("haxe.zip.Reader","new",0xf101338a,"haxe.zip.Reader.new","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Reader.hx",32,0xe3be3501)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
{
	HX_STACK_LINE(32)
	this->i = i;
}
;
	return null();
}

//Reader_obj::~Reader_obj() { }

Dynamic Reader_obj::__CreateEmpty() { return  new Reader_obj; }
hx::ObjectPtr< Reader_obj > Reader_obj::__new(::haxe::io::Input i)
{  hx::ObjectPtr< Reader_obj > result = new Reader_obj();
	result->__construct(i);
	return result;}

Dynamic Reader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reader_obj > result = new Reader_obj();
	result->__construct(inArgs[0]);
	return result;}

::Date Reader_obj::readZipDate( ){
	HX_STACK_FRAME("haxe.zip.Reader","readZipDate",0xa6a02623,"haxe.zip.Reader.readZipDate","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Reader.hx",35,0xe3be3501)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	int t = this->i->readUInt16();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(37)
	int hour = (int((int(t) >> int((int)11))) & int((int)31));		HX_STACK_VAR(hour,"hour");
	HX_STACK_LINE(38)
	int min = (int((int(t) >> int((int)5))) & int((int)63));		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(39)
	int sec = (int(t) & int((int)31));		HX_STACK_VAR(sec,"sec");
	HX_STACK_LINE(40)
	int d = this->i->readUInt16();		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(41)
	int year = (int(d) >> int((int)9));		HX_STACK_VAR(year,"year");
	HX_STACK_LINE(42)
	int month = (int((int(d) >> int((int)5))) & int((int)15));		HX_STACK_VAR(month,"month");
	HX_STACK_LINE(43)
	int day = (int(d) & int((int)31));		HX_STACK_VAR(day,"day");
	HX_STACK_LINE(44)
	return ::Date_obj::__new((year + (int)1980),(month - (int)1),day,hour,min,(int(sec) << int((int)1)));
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readZipDate,return )

::List Reader_obj::readExtraFields( int length){
	HX_STACK_FRAME("haxe.zip.Reader","readExtraFields",0x48ea639d,"haxe.zip.Reader.readExtraFields","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Reader.hx",47,0xe3be3501)
	HX_STACK_THIS(this)
	HX_STACK_ARG(length,"length")
	HX_STACK_LINE(48)
	::List fields = ::List_obj::__new();		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(49)
	while((true)){
		HX_STACK_LINE(49)
		if ((!(((length > (int)0))))){
			HX_STACK_LINE(49)
			break;
		}
		HX_STACK_LINE(50)
		if (((length < (int)4))){
			HX_STACK_LINE(50)
			HX_STACK_DO_THROW(HX_CSTRING("Invalid extra fields data"));
		}
		HX_STACK_LINE(51)
		int tag = this->i->readUInt16();		HX_STACK_VAR(tag,"tag");
		HX_STACK_LINE(52)
		int len = this->i->readUInt16();		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(53)
		if (((length < len))){
			HX_STACK_LINE(53)
			HX_STACK_DO_THROW(HX_CSTRING("Invalid extra fields data"));
		}
		HX_STACK_LINE(54)
		switch( (int)(tag)){
			case (int)28789: {
				HX_STACK_LINE(56)
				int version = this->i->readByte();		HX_STACK_VAR(version,"version");
				HX_STACK_LINE(57)
				if (((version != (int)1))){
					HX_STACK_LINE(58)
					::haxe::io::BytesBuffer data = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(59)
					data->b->push(version);
					HX_STACK_LINE(60)
					{
						HX_STACK_LINE(60)
						::haxe::io::Bytes src = this->i->read((len - (int)1));		HX_STACK_VAR(src,"src");
						HX_STACK_LINE(60)
						Array< unsigned char > b1 = data->b;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(60)
						Array< unsigned char > b2 = src->b;		HX_STACK_VAR(b2,"b2");
						HX_STACK_LINE(60)
						{
							HX_STACK_LINE(60)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(60)
							int _g = src->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(60)
							while((true)){
								HX_STACK_LINE(60)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(60)
									break;
								}
								HX_STACK_LINE(60)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(60)
								data->b->push(b2->__get(i));
							}
						}
					}
					HX_STACK_LINE(61)
					::haxe::io::Bytes _g = data->getBytes();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(61)
					::haxe::zip::ExtraField _g1 = ::haxe::zip::ExtraField_obj::FUnknown(tag,_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(61)
					fields->add(_g1);
				}
				else{
					HX_STACK_LINE(63)
					int crc = this->i->readInt32();		HX_STACK_VAR(crc,"crc");
					HX_STACK_LINE(64)
					::String name = this->i->read((len - (int)5))->toString();		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(65)
					::haxe::zip::ExtraField _g2 = ::haxe::zip::ExtraField_obj::FInfoZipUnicodePath(name,crc);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(65)
					fields->add(_g2);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(68)
				::haxe::io::Bytes _g3 = this->i->read(len);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(68)
				::haxe::zip::ExtraField _g4 = ::haxe::zip::ExtraField_obj::FUnknown(tag,_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(68)
				fields->add(_g4);
			}
		}
		HX_STACK_LINE(70)
		hx::SubEq(length,((int)4 + len));
	}
	HX_STACK_LINE(72)
	return fields;
}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readExtraFields,return )

Dynamic Reader_obj::readEntryHeader( ){
	HX_STACK_FRAME("haxe.zip.Reader","readEntryHeader",0x28765213,"haxe.zip.Reader.readEntryHeader","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Reader.hx",75,0xe3be3501)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::haxe::io::Input i = this->i;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(77)
	int h = i->readInt32();		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(78)
	if (((bool((h == (int)33639248)) || bool((h == (int)101010256))))){
		HX_STACK_LINE(79)
		return null();
	}
	HX_STACK_LINE(80)
	if (((h != (int)67324752))){
		HX_STACK_LINE(81)
		HX_STACK_DO_THROW(HX_CSTRING("Invalid Zip Data"));
	}
	HX_STACK_LINE(82)
	int version = i->readUInt16();		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(83)
	int flags = i->readUInt16();		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(84)
	bool utf8 = (((int(flags) & int((int)2048))) != (int)0);		HX_STACK_VAR(utf8,"utf8");
	HX_STACK_LINE(85)
	if (((((int(flags) & int((int)63479))) != (int)0))){
		HX_STACK_LINE(86)
		HX_STACK_DO_THROW((HX_CSTRING("Unsupported flags ") + flags));
	}
	HX_STACK_LINE(87)
	int compression = i->readUInt16();		HX_STACK_VAR(compression,"compression");
	HX_STACK_LINE(88)
	bool compressed = (compression != (int)0);		HX_STACK_VAR(compressed,"compressed");
	HX_STACK_LINE(89)
	if (((bool(compressed) && bool((compression != (int)8))))){
		HX_STACK_LINE(90)
		HX_STACK_DO_THROW((HX_CSTRING("Unsupported compression ") + compression));
	}
	HX_STACK_LINE(91)
	::Date mtime = this->readZipDate();		HX_STACK_VAR(mtime,"mtime");
	HX_STACK_LINE(92)
	Dynamic crc32 = i->readInt32();		HX_STACK_VAR(crc32,"crc32");
	HX_STACK_LINE(93)
	int csize = i->readInt32();		HX_STACK_VAR(csize,"csize");
	HX_STACK_LINE(94)
	int usize = i->readInt32();		HX_STACK_VAR(usize,"usize");
	HX_STACK_LINE(95)
	int fnamelen = i->readInt16();		HX_STACK_VAR(fnamelen,"fnamelen");
	HX_STACK_LINE(96)
	int elen = i->readInt16();		HX_STACK_VAR(elen,"elen");
	HX_STACK_LINE(97)
	::String fname = i->readString(fnamelen);		HX_STACK_VAR(fname,"fname");
	HX_STACK_LINE(98)
	::List fields = this->readExtraFields(elen);		HX_STACK_VAR(fields,"fields");
	HX_STACK_LINE(99)
	if ((utf8)){
		HX_STACK_LINE(100)
		fields->push(::haxe::zip::ExtraField_obj::FUtf8);
	}
	HX_STACK_LINE(101)
	::haxe::io::Bytes data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(104)
	if (((((int(flags) & int((int)8))) != (int)0))){
		HX_STACK_LINE(105)
		crc32 = null();
	}
	struct _Function_1_1{
		inline static Dynamic Block( bool &compressed,int &csize,::Date &mtime,::String &fname,Dynamic &crc32,::haxe::io::Bytes &data,::List &fields,int &usize){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Reader.hx",106,0xe3be3501)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("fileName") , fname,false);
				__result->Add(HX_CSTRING("fileSize") , usize,false);
				__result->Add(HX_CSTRING("fileTime") , mtime,false);
				__result->Add(HX_CSTRING("compressed") , compressed,false);
				__result->Add(HX_CSTRING("dataSize") , csize,false);
				__result->Add(HX_CSTRING("data") , data,false);
				__result->Add(HX_CSTRING("crc32") , crc32,false);
				__result->Add(HX_CSTRING("extraFields") , fields,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(106)
	return _Function_1_1::Block(compressed,csize,mtime,fname,crc32,data,fields,usize);
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,readEntryHeader,return )

::List Reader_obj::read( ){
	HX_STACK_FRAME("haxe.zip.Reader","read",0xf2b0acec,"haxe.zip.Reader.read","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Reader.hx",118,0xe3be3501)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::List l = ::List_obj::__new();		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(120)
	Dynamic buf = null();		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(121)
	::haxe::io::Bytes tmp = null();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	while((true)){
		HX_STACK_LINE(123)
		Dynamic e = this->readEntryHeader();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(124)
		if (((e == null()))){
			HX_STACK_LINE(125)
			break;
		}
		HX_STACK_LINE(127)
		if (((e->__Field(HX_CSTRING("crc32"),true) == null()))){
			HX_STACK_LINE(128)
			if ((e->__Field(HX_CSTRING("compressed"),true))){
				HX_STACK_LINE(160)
				int bufSize = (int)65536;		HX_STACK_VAR(bufSize,"bufSize");
				HX_STACK_LINE(161)
				if (((tmp == null()))){
					HX_STACK_LINE(162)
					::haxe::io::Bytes _g = ::haxe::io::Bytes_obj::alloc(bufSize);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(162)
					tmp = _g;
				}
				HX_STACK_LINE(163)
				::haxe::io::BytesBuffer out = ::haxe::io::BytesBuffer_obj::__new();		HX_STACK_VAR(out,"out");
				HX_STACK_LINE(164)
				::haxe::zip::InflateImpl z = ::haxe::zip::InflateImpl_obj::__new(this->i,false,false);		HX_STACK_VAR(z,"z");
				HX_STACK_LINE(165)
				while((true)){
					HX_STACK_LINE(166)
					int n = z->readBytes(tmp,(int)0,bufSize);		HX_STACK_VAR(n,"n");
					HX_STACK_LINE(167)
					{
						HX_STACK_LINE(167)
						if (((bool((n < (int)0)) || bool((n > tmp->length))))){
							HX_STACK_LINE(167)
							HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
						}
						HX_STACK_LINE(167)
						Array< unsigned char > b1 = out->b;		HX_STACK_VAR(b1,"b1");
						HX_STACK_LINE(167)
						Array< unsigned char > b2 = tmp->b;		HX_STACK_VAR(b2,"b2");
						HX_STACK_LINE(167)
						{
							HX_STACK_LINE(167)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(167)
							int _g = n;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(167)
							while((true)){
								HX_STACK_LINE(167)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(167)
									break;
								}
								HX_STACK_LINE(167)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(167)
								out->b->push(b2->__get(i));
							}
						}
					}
					HX_STACK_LINE(168)
					if (((n < bufSize))){
						HX_STACK_LINE(169)
						break;
					}
				}
				HX_STACK_LINE(171)
				::haxe::io::Bytes _g1 = out->getBytes();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(171)
				e->__FieldRef(HX_CSTRING("data")) = _g1;
			}
			else{
				HX_STACK_LINE(174)
				::haxe::io::Bytes _g2 = this->i->read(e->__Field(HX_CSTRING("dataSize"),true));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(174)
				e->__FieldRef(HX_CSTRING("data")) = _g2;
			}
			HX_STACK_LINE(175)
			int _g3 = this->i->readInt32();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(175)
			e->__FieldRef(HX_CSTRING("crc32")) = _g3;
			HX_STACK_LINE(176)
			if (((e->__Field(HX_CSTRING("crc32"),true) == (int)134695760))){
				HX_STACK_LINE(177)
				int _g4 = this->i->readInt32();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(177)
				e->__FieldRef(HX_CSTRING("crc32")) = _g4;
			}
			HX_STACK_LINE(178)
			int _g5 = this->i->readInt32();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(178)
			e->__FieldRef(HX_CSTRING("dataSize")) = _g5;
			HX_STACK_LINE(179)
			int _g6 = this->i->readInt32();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(179)
			e->__FieldRef(HX_CSTRING("fileSize")) = _g6;
			HX_STACK_LINE(181)
			e->__FieldRef(HX_CSTRING("dataSize")) = e->__Field(HX_CSTRING("fileSize"),true);
			HX_STACK_LINE(182)
			e->__FieldRef(HX_CSTRING("compressed")) = false;
		}
		else{
			HX_STACK_LINE(184)
			::haxe::io::Bytes _g7 = this->i->read(e->__Field(HX_CSTRING("dataSize"),true));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(184)
			e->__FieldRef(HX_CSTRING("data")) = _g7;
		}
		HX_STACK_LINE(185)
		l->add(e);
	}
	HX_STACK_LINE(187)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,read,return )

::List Reader_obj::readZip( ::haxe::io::Input i){
	HX_STACK_FRAME("haxe.zip.Reader","readZip",0x2845d555,"haxe.zip.Reader.readZip","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Reader.hx",190,0xe3be3501)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(191)
	::haxe::zip::Reader r = ::haxe::zip::Reader_obj::__new(i);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(192)
	return r->read();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,readZip,return )

::haxe::io::Bytes Reader_obj::unzip( Dynamic f){
	HX_STACK_FRAME("haxe.zip.Reader","unzip",0x282047d2,"haxe.zip.Reader.unzip","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Reader.hx",195,0xe3be3501)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(196)
	if ((!(f->__Field(HX_CSTRING("compressed"),true)))){
		HX_STACK_LINE(197)
		return f->__Field(HX_CSTRING("data"),true);
	}
	HX_STACK_LINE(198)
	::haxe::zip::Uncompress c = ::haxe::zip::Uncompress_obj::__new((int)-15);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(199)
	::haxe::io::Bytes s = ::haxe::io::Bytes_obj::alloc(f->__Field(HX_CSTRING("fileSize"),true));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(200)
	Dynamic r = c->execute(f->__Field(HX_CSTRING("data"),true),(int)0,s,(int)0);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(201)
	c->close();
	HX_STACK_LINE(202)
	if (((bool((bool(!(r->__Field(HX_CSTRING("done"),true))) || bool((r->__Field(HX_CSTRING("read"),true) != f->__Field(HX_CSTRING("data"),true)->__Field(HX_CSTRING("length"),true))))) || bool((r->__Field(HX_CSTRING("write"),true) != f->__Field(HX_CSTRING("fileSize"),true)))))){
		HX_STACK_LINE(203)
		HX_STACK_DO_THROW((HX_CSTRING("Invalid compressed data for ") + f->__Field(HX_CSTRING("fileName"),true)));
	}
	HX_STACK_LINE(204)
	f->__FieldRef(HX_CSTRING("compressed")) = false;
	HX_STACK_LINE(205)
	f->__FieldRef(HX_CSTRING("dataSize")) = f->__Field(HX_CSTRING("fileSize"),true);
	HX_STACK_LINE(206)
	f->__FieldRef(HX_CSTRING("data")) = s;
	HX_STACK_LINE(207)
	return f->__Field(HX_CSTRING("data"),true);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,unzip,return )


Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
}

Dynamic Reader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unzip") ) { return unzip_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readZip") ) { return readZip_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readZipDate") ) { return readZipDate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readExtraFields") ) { return readExtraFields_dyn(); }
		if (HX_FIELD_EQ(inName,"readEntryHeader") ) { return readEntryHeader_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::haxe::io::Input >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("i"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("readZip"),
	HX_CSTRING("unzip"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Reader_obj,i),HX_CSTRING("i")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("i"),
	HX_CSTRING("readZipDate"),
	HX_CSTRING("readExtraFields"),
	HX_CSTRING("readEntryHeader"),
	HX_CSTRING("read"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#endif

Class Reader_obj::__mClass;

void Reader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.zip.Reader"), hx::TCanCast< Reader_obj> ,sStaticFields,sMemberFields,
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

void Reader_obj::__boot()
{
}

} // end namespace haxe
} // end namespace zip
