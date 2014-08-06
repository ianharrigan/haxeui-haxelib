#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_tools_haxelib_ProgressIn
#include <tools/haxelib/ProgressIn.h>
#endif
namespace tools{
namespace haxelib{

Void ProgressIn_obj::__construct(::haxe::io::Input i,int tot)
{
HX_STACK_FRAME("tools.haxelib.ProgressIn","new",0xca47c7a6,"tools.haxelib.ProgressIn.new","tools/haxelib/Main.hx",113,0xb1b3c261)
HX_STACK_THIS(this)
HX_STACK_ARG(i,"i")
HX_STACK_ARG(tot,"tot")
{
	HX_STACK_LINE(114)
	this->i = i;
	HX_STACK_LINE(115)
	this->pos = (int)0;
	HX_STACK_LINE(116)
	this->tot = tot;
}
;
	return null();
}

//ProgressIn_obj::~ProgressIn_obj() { }

Dynamic ProgressIn_obj::__CreateEmpty() { return  new ProgressIn_obj; }
hx::ObjectPtr< ProgressIn_obj > ProgressIn_obj::__new(::haxe::io::Input i,int tot)
{  hx::ObjectPtr< ProgressIn_obj > result = new ProgressIn_obj();
	result->__construct(i,tot);
	return result;}

Dynamic ProgressIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProgressIn_obj > result = new ProgressIn_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int ProgressIn_obj::readByte( ){
	HX_STACK_FRAME("tools.haxelib.ProgressIn","readByte",0xd162e478,"tools.haxelib.ProgressIn.readByte","tools/haxelib/Main.hx",119,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	int c = this->i->readByte();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(121)
	this->doRead((int)1);
	HX_STACK_LINE(122)
	return c;
}


int ProgressIn_obj::readBytes( ::haxe::io::Bytes buf,int pos,int len){
	HX_STACK_FRAME("tools.haxelib.ProgressIn","readBytes",0x652504fb,"tools.haxelib.ProgressIn.readBytes","tools/haxelib/Main.hx",125,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buf,"buf")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(126)
	int k = this->i->readBytes(buf,pos,len);		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(127)
	this->doRead(k);
	HX_STACK_LINE(128)
	return k;
}


Void ProgressIn_obj::doRead( int nbytes){
{
		HX_STACK_FRAME("tools.haxelib.ProgressIn","doRead",0x3d9048fb,"tools.haxelib.ProgressIn.doRead","tools/haxelib/Main.hx",131,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nbytes,"nbytes")
		HX_STACK_LINE(132)
		hx::AddEq(this->pos,nbytes);
		HX_STACK_LINE(133)
		int _g = ::Std_obj::_int((Float((this->pos * 100.0)) / Float(this->tot)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		::String _g1 = (_g + HX_CSTRING("%\r"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(133)
		::Sys_obj::print(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressIn_obj,doRead,(void))


ProgressIn_obj::ProgressIn_obj()
{
}

void ProgressIn_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProgressIn);
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(tot,"tot");
	HX_MARK_END_CLASS();
}

void ProgressIn_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(tot,"tot");
}

Dynamic ProgressIn_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"tot") ) { return tot; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doRead") ) { return doRead_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ProgressIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tot") ) { tot=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ProgressIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("pos"));
	outFields->push(HX_CSTRING("tot"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(ProgressIn_obj,i),HX_CSTRING("i")},
	{hx::fsInt,(int)offsetof(ProgressIn_obj,pos),HX_CSTRING("pos")},
	{hx::fsInt,(int)offsetof(ProgressIn_obj,tot),HX_CSTRING("tot")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("i"),
	HX_CSTRING("pos"),
	HX_CSTRING("tot"),
	HX_CSTRING("readByte"),
	HX_CSTRING("readBytes"),
	HX_CSTRING("doRead"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProgressIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProgressIn_obj::__mClass,"__mClass");
};

#endif

Class ProgressIn_obj::__mClass;

void ProgressIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.ProgressIn"), hx::TCanCast< ProgressIn_obj> ,sStaticFields,sMemberFields,
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

void ProgressIn_obj::__boot()
{
}

} // end namespace tools
} // end namespace haxelib
