#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_tools_haxelib_Progress
#include <tools/haxelib/Progress.h>
#endif
namespace tools{
namespace haxelib{

Void Progress_obj::__construct(::haxe::io::Output o)
{
HX_STACK_FRAME("tools.haxelib.Progress","new",0xee74e761,"tools.haxelib.Progress.new","tools/haxelib/Main.hx",59,0xb1b3c261)
HX_STACK_THIS(this)
HX_STACK_ARG(o,"o")
{
	HX_STACK_LINE(60)
	this->o = o;
	HX_STACK_LINE(61)
	this->cur = (int)0;
	HX_STACK_LINE(62)
	Float _g = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(62)
	this->start = _g;
}
;
	return null();
}

//Progress_obj::~Progress_obj() { }

Dynamic Progress_obj::__CreateEmpty() { return  new Progress_obj; }
hx::ObjectPtr< Progress_obj > Progress_obj::__new(::haxe::io::Output o)
{  hx::ObjectPtr< Progress_obj > result = new Progress_obj();
	result->__construct(o);
	return result;}

Dynamic Progress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Progress_obj > result = new Progress_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Progress_obj::bytes( int n){
{
		HX_STACK_FRAME("tools.haxelib.Progress","bytes",0x476da1ac,"tools.haxelib.Progress.bytes","tools/haxelib/Main.hx",65,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_LINE(66)
		hx::AddEq(this->cur,n);
		HX_STACK_LINE(73)
		if (((this->max == (int)0))){
			HX_STACK_LINE(74)
			::Sys_obj::print((this->cur + HX_CSTRING(" bytes\r")));
		}
		else{
			HX_STACK_LINE(76)
			int _g = ::Std_obj::_int((Float((this->cur * 100.0)) / Float(this->max)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(76)
			::String _g1 = ((((this->cur + HX_CSTRING("/")) + this->max) + HX_CSTRING(" (")) + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(76)
			::String _g2 = (_g1 + HX_CSTRING("%)\r"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(76)
			::Sys_obj::print(_g2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Progress_obj,bytes,(void))

Void Progress_obj::writeByte( int c){
{
		HX_STACK_FRAME("tools.haxelib.Progress","writeByte",0x9df8e148,"tools.haxelib.Progress.writeByte","tools/haxelib/Main.hx",80,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(81)
		this->o->writeByte(c);
		HX_STACK_LINE(82)
		this->bytes((int)1);
	}
return null();
}


int Progress_obj::writeBytes( ::haxe::io::Bytes s,int p,int l){
	HX_STACK_FRAME("tools.haxelib.Progress","writeBytes",0x9bcc3e2b,"tools.haxelib.Progress.writeBytes","tools/haxelib/Main.hx",85,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(86)
	int r = this->o->writeBytes(s,p,l);		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(87)
	this->bytes(r);
	HX_STACK_LINE(88)
	return r;
}


Void Progress_obj::close( ){
{
		HX_STACK_FRAME("tools.haxelib.Progress","close",0xd238b0f9,"tools.haxelib.Progress.close","tools/haxelib/Main.hx",91,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(92)
		this->super::close();
		HX_STACK_LINE(93)
		this->o->close();
		HX_STACK_LINE(94)
		Float _g = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		Float time = (_g - this->start);		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(95)
		Float speed = (Float((Float(this->cur) / Float(time))) / Float((int)1024));		HX_STACK_VAR(speed,"speed");
		HX_STACK_LINE(96)
		int _g1 = ::Std_obj::_int((time * (int)10));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(96)
		Float _g2 = (Float(_g1) / Float((int)10));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(96)
		time = _g2;
		HX_STACK_LINE(97)
		int _g3 = ::Std_obj::_int((speed * (int)10));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(97)
		Float _g4 = (Float(_g3) / Float((int)10));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(97)
		speed = _g4;
		HX_STACK_LINE(98)
		::Sys_obj::print(((((((HX_CSTRING("Download complete : ") + this->cur) + HX_CSTRING(" bytes in ")) + time) + HX_CSTRING("s (")) + speed) + HX_CSTRING("KB/s)\n")));
	}
return null();
}


Void Progress_obj::prepare( int m){
{
		HX_STACK_FRAME("tools.haxelib.Progress","prepare",0x153cbd08,"tools.haxelib.Progress.prepare","tools/haxelib/Main.hx",102,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(102)
		this->max = m;
	}
return null();
}



Progress_obj::Progress_obj()
{
}

void Progress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Progress);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(cur,"cur");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_END_CLASS();
}

void Progress_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(cur,"cur");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(start,"start");
}

Dynamic Progress_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { return cur; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"prepare") ) { return prepare_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Progress_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< ::haxe::io::Output >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"cur") ) { cur=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Progress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("o"));
	outFields->push(HX_CSTRING("cur"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("start"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(Progress_obj,o),HX_CSTRING("o")},
	{hx::fsInt,(int)offsetof(Progress_obj,cur),HX_CSTRING("cur")},
	{hx::fsInt,(int)offsetof(Progress_obj,max),HX_CSTRING("max")},
	{hx::fsFloat,(int)offsetof(Progress_obj,start),HX_CSTRING("start")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("o"),
	HX_CSTRING("cur"),
	HX_CSTRING("max"),
	HX_CSTRING("start"),
	HX_CSTRING("bytes"),
	HX_CSTRING("writeByte"),
	HX_CSTRING("writeBytes"),
	HX_CSTRING("close"),
	HX_CSTRING("prepare"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Progress_obj::__mClass,"__mClass");
};

#endif

Class Progress_obj::__mClass;

void Progress_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.Progress"), hx::TCanCast< Progress_obj> ,sStaticFields,sMemberFields,
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

void Progress_obj::__boot()
{
}

} // end namespace tools
} // end namespace haxelib
