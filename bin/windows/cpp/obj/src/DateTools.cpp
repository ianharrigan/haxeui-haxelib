#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateTools
#include <DateTools.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif

Void DateTools_obj::__construct()
{
	return null();
}

//DateTools_obj::~DateTools_obj() { }

Dynamic DateTools_obj::__CreateEmpty() { return  new DateTools_obj; }
hx::ObjectPtr< DateTools_obj > DateTools_obj::__new()
{  hx::ObjectPtr< DateTools_obj > result = new DateTools_obj();
	result->__construct();
	return result;}

Dynamic DateTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DateTools_obj > result = new DateTools_obj();
	result->__construct();
	return result;}

::String DateTools_obj::__format_get( ::Date d,::String e){
	HX_STACK_FRAME("DateTools","__format_get",0xabb90f8f,"DateTools.__format_get","C:\\Servers\\Haxe\\haxe\\std/DateTools.hx",37,0xf6954ace)
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(37)
	::String _switch_1 = (e);
	if (  ( _switch_1==HX_CSTRING("%"))){
		HX_STACK_LINE(39)
		return HX_CSTRING("%");
	}
	else if (  ( _switch_1==HX_CSTRING("C"))){
		HX_STACK_LINE(41)
		int _g = d->getFullYear();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		Float _g1 = (Float(_g) / Float((int)100));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(41)
		::String _g3 = ::Std_obj::string(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(41)
		return ::StringTools_obj::lpad(_g3,HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("d"))){
		HX_STACK_LINE(43)
		int _g4 = d->getDate();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(43)
		::String _g5 = ::Std_obj::string(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(43)
		return ::StringTools_obj::lpad(_g5,HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("D"))){
		HX_STACK_LINE(45)
		return ::DateTools_obj::__format(d,HX_CSTRING("%m/%d/%y"));
	}
	else if (  ( _switch_1==HX_CSTRING("e"))){
		HX_STACK_LINE(47)
		int _g6 = d->getDate();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(47)
		return ::Std_obj::string(_g6);
	}
	else if (  ( _switch_1==HX_CSTRING("H")) ||  ( _switch_1==HX_CSTRING("k"))){
		HX_STACK_LINE(49)
		int _g7 = d->getHours();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(49)
		::String _g8 = ::Std_obj::string(_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(49)
		return ::StringTools_obj::lpad(_g8,(  (((e == HX_CSTRING("H")))) ? ::String(HX_CSTRING("0")) : ::String(HX_CSTRING(" ")) ),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("I")) ||  ( _switch_1==HX_CSTRING("l"))){
		HX_STACK_LINE(51)
		int _g9 = d->getHours();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(51)
		int hour = hx::Mod(_g9,(int)12);		HX_STACK_VAR(hour,"hour");
		HX_STACK_LINE(52)
		::String _g10 = ::Std_obj::string((  (((hour == (int)0))) ? Dynamic((int)12) : Dynamic(hour) ));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(52)
		return ::StringTools_obj::lpad(_g10,(  (((e == HX_CSTRING("I")))) ? ::String(HX_CSTRING("0")) : ::String(HX_CSTRING(" ")) ),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("m"))){
		HX_STACK_LINE(54)
		int _g11 = d->getMonth();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(54)
		int _g12 = (_g11 + (int)1);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(54)
		::String _g13 = ::Std_obj::string(_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(54)
		return ::StringTools_obj::lpad(_g13,HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("M"))){
		HX_STACK_LINE(56)
		int _g14 = d->getMinutes();		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(56)
		::String _g15 = ::Std_obj::string(_g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(56)
		return ::StringTools_obj::lpad(_g15,HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("n"))){
		HX_STACK_LINE(58)
		return HX_CSTRING("\n");
	}
	else if (  ( _switch_1==HX_CSTRING("p"))){
		HX_STACK_LINE(60)
		int _g16 = d->getHours();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(60)
		if (((_g16 > (int)11))){
			HX_STACK_LINE(60)
			return HX_CSTRING("PM");
		}
		else{
			HX_STACK_LINE(60)
			return HX_CSTRING("AM");
		}
	}
	else if (  ( _switch_1==HX_CSTRING("r"))){
		HX_STACK_LINE(62)
		return ::DateTools_obj::__format(d,HX_CSTRING("%I:%M:%S %p"));
	}
	else if (  ( _switch_1==HX_CSTRING("R"))){
		HX_STACK_LINE(64)
		return ::DateTools_obj::__format(d,HX_CSTRING("%H:%M"));
	}
	else if (  ( _switch_1==HX_CSTRING("s"))){
		HX_STACK_LINE(66)
		Float _g17 = d->getTime();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(66)
		Float _g18 = (Float(_g17) / Float((int)1000));		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(66)
		int _g19 = ::Std_obj::_int(_g18);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(66)
		return ::Std_obj::string(_g19);
	}
	else if (  ( _switch_1==HX_CSTRING("S"))){
		HX_STACK_LINE(68)
		int _g20 = d->getSeconds();		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(68)
		::String _g21 = ::Std_obj::string(_g20);		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(68)
		return ::StringTools_obj::lpad(_g21,HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("t"))){
		HX_STACK_LINE(70)
		return HX_CSTRING("\t");
	}
	else if (  ( _switch_1==HX_CSTRING("T"))){
		HX_STACK_LINE(72)
		return ::DateTools_obj::__format(d,HX_CSTRING("%H:%M:%S"));
	}
	else if (  ( _switch_1==HX_CSTRING("u"))){
		HX_STACK_LINE(75)
		int t = d->getDay();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(76)
		if (((t == (int)0))){
			HX_STACK_LINE(76)
			return HX_CSTRING("7");
		}
		else{
			HX_STACK_LINE(76)
			return ::Std_obj::string(t);
		}
	}
	else if (  ( _switch_1==HX_CSTRING("w"))){
		HX_STACK_LINE(79)
		int _g22 = d->getDay();		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(79)
		return ::Std_obj::string(_g22);
	}
	else if (  ( _switch_1==HX_CSTRING("y"))){
		HX_STACK_LINE(81)
		int _g23 = d->getFullYear();		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(81)
		int _g24 = hx::Mod(_g23,(int)100);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(81)
		::String _g25 = ::Std_obj::string(_g24);		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(81)
		return ::StringTools_obj::lpad(_g25,HX_CSTRING("0"),(int)2);
	}
	else if (  ( _switch_1==HX_CSTRING("Y"))){
		HX_STACK_LINE(83)
		int _g26 = d->getFullYear();		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(83)
		return ::Std_obj::string(_g26);
	}
	else  {
		HX_STACK_LINE(85)
		HX_STACK_DO_THROW(((HX_CSTRING("Date.format %") + e) + HX_CSTRING("- not implemented yet.")));
	}
;
;
	HX_STACK_LINE(37)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,__format_get,return )

::String DateTools_obj::__format( ::Date d,::String f){
	HX_STACK_FRAME("DateTools","__format",0x77c4edf8,"DateTools.__format","C:\\Servers\\Haxe\\haxe\\std/DateTools.hx",89,0xf6954ace)
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(90)
	::StringBuf r = ::StringBuf_obj::__new();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(91)
	int p = (int)0;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(92)
	while((true)){
		HX_STACK_LINE(93)
		int np = f.indexOf(HX_CSTRING("%"),p);		HX_STACK_VAR(np,"np");
		HX_STACK_LINE(94)
		if (((np < (int)0))){
			HX_STACK_LINE(95)
			break;
		}
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			::String _g = f.substr(p,(np - p));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(97)
			r->b->push(_g);
		}
		HX_STACK_LINE(98)
		::String _g1 = f.substr((np + (int)1),(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(98)
		::String _g2 = ::DateTools_obj::__format_get(d,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(98)
		r->add(_g2);
		HX_STACK_LINE(100)
		p = (np + (int)2);
	}
	HX_STACK_LINE(102)
	{
		HX_STACK_LINE(102)
		::String _g3 = f.substr(p,(f.length - p));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(102)
		r->b->push(_g3);
	}
	HX_STACK_LINE(103)
	return r->b->join(HX_CSTRING(""));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,__format,return )

::String DateTools_obj::format( ::Date d,::String f){
	HX_STACK_FRAME("DateTools","format",0x1113a898,"DateTools.format","C:\\Servers\\Haxe\\haxe\\std/DateTools.hx",120,0xf6954ace)
	HX_STACK_ARG(d,"d")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(120)
	return ::DateTools_obj::__format(d,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DateTools_obj,format,return )


DateTools_obj::DateTools_obj()
{
}

Dynamic DateTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__format") ) { return __format_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__format_get") ) { return __format_get_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DateTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DateTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("__format_get"),
	HX_CSTRING("__format"),
	HX_CSTRING("format"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DateTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DateTools_obj::__mClass,"__mClass");
};

#endif

Class DateTools_obj::__mClass;

void DateTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DateTools"), hx::TCanCast< DateTools_obj> ,sStaticFields,sMemberFields,
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

void DateTools_obj::__boot()
{
}

