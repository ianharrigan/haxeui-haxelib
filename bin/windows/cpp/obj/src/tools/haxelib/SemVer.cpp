#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_tools_haxelib_Preview
#include <tools/haxelib/Preview.h>
#endif
#ifndef INCLUDED_tools_haxelib_SemVer
#include <tools/haxelib/SemVer.h>
#endif
namespace tools{
namespace haxelib{

Void SemVer_obj::__construct(int major,int minor,int patch,::tools::haxelib::Preview preview,Dynamic previewNum)
{
HX_STACK_FRAME("tools.haxelib.SemVer","new",0x711b763c,"tools.haxelib.SemVer.new","tools/haxelib/SemVer.hx",18,0xed978b72)
HX_STACK_THIS(this)
HX_STACK_ARG(major,"major")
HX_STACK_ARG(minor,"minor")
HX_STACK_ARG(patch,"patch")
HX_STACK_ARG(preview,"preview")
HX_STACK_ARG(previewNum,"previewNum")
{
	HX_STACK_LINE(19)
	this->major = major;
	HX_STACK_LINE(20)
	this->minor = minor;
	HX_STACK_LINE(21)
	this->patch = patch;
	HX_STACK_LINE(22)
	this->preview = preview;
	HX_STACK_LINE(23)
	this->previewNum = previewNum;
}
;
	return null();
}

//SemVer_obj::~SemVer_obj() { }

Dynamic SemVer_obj::__CreateEmpty() { return  new SemVer_obj; }
hx::ObjectPtr< SemVer_obj > SemVer_obj::__new(int major,int minor,int patch,::tools::haxelib::Preview preview,Dynamic previewNum)
{  hx::ObjectPtr< SemVer_obj > result = new SemVer_obj();
	result->__construct(major,minor,patch,preview,previewNum);
	return result;}

Dynamic SemVer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SemVer_obj > result = new SemVer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::String SemVer_obj::toString( ){
	HX_STACK_FRAME("tools.haxelib.SemVer","toString",0x6f546d50,"tools.haxelib.SemVer.toString","tools/haxelib/SemVer.hx",26,0xed978b72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	::String ret = (((((HX_CSTRING("") + this->major) + HX_CSTRING(".")) + this->minor) + HX_CSTRING(".")) + this->patch);		HX_STACK_VAR(ret,"ret");
	HX_STACK_LINE(28)
	if (((this->preview != null()))){
		HX_STACK_LINE(29)
		::String _g = ::Type_obj::enumConstructor(this->preview).toLowerCase();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		::String _g1 = (HX_CSTRING("-") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		hx::AddEq(ret,_g1);
		HX_STACK_LINE(30)
		if (((this->previewNum != null()))){
			HX_STACK_LINE(31)
			hx::AddEq(ret,(HX_CSTRING(".") + this->previewNum));
		}
	}
	HX_STACK_LINE(33)
	return ret;
}


HX_DEFINE_DYNAMIC_FUNC0(SemVer_obj,toString,return )

::EReg SemVer_obj::parse;

::tools::haxelib::SemVer SemVer_obj::ofString( ::String s){
	HX_STACK_FRAME("tools.haxelib.SemVer","ofString",0xdb1705ec,"tools.haxelib.SemVer.ofString","tools/haxelib/SemVer.hx",38,0xed978b72)
	HX_STACK_ARG(s,"s")
	struct _Function_1_1{
		inline static bool Block( ::String &s){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/SemVer.hx",39,0xed978b72)
			{
				HX_STACK_LINE(39)
				::String _g = s.toLowerCase();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(39)
				return ::tools::haxelib::SemVer_obj::parse->match(_g);
			}
			return null();
		}
	};
	HX_STACK_LINE(39)
	if (((  (((s != null()))) ? bool(_Function_1_1::Block(s)) : bool(false) ))){
		HX_STACK_LINE(41)
		::String _g1 = ::tools::haxelib::SemVer_obj::parse->matched((int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(41)
		Dynamic _g2 = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(42)
		::String _g3 = ::tools::haxelib::SemVer_obj::parse->matched((int)2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(42)
		Dynamic _g4 = ::Std_obj::parseInt(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(43)
		::String _g5 = ::tools::haxelib::SemVer_obj::parse->matched((int)3);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(43)
		Dynamic _g6 = ::Std_obj::parseInt(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(44)
		::tools::haxelib::Preview _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			::String _g = ::tools::haxelib::SemVer_obj::parse->matched((int)5);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::String v = _g;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(44)
				::String v1 = _g;		HX_STACK_VAR(v1,"v1");
				HX_STACK_LINE(44)
				::String _switch_1 = (_g);
				if (  ( _switch_1==HX_CSTRING("alpha"))){
					HX_STACK_LINE(45)
					_g7 = ::tools::haxelib::Preview_obj::ALPHA;
				}
				else if (  ( _switch_1==HX_CSTRING("beta"))){
					HX_STACK_LINE(46)
					_g7 = ::tools::haxelib::Preview_obj::BETA;
				}
				else if (  ( _switch_1==HX_CSTRING("rc"))){
					HX_STACK_LINE(47)
					_g7 = ::tools::haxelib::Preview_obj::RC;
				}
				else  {
					HX_STACK_LINE(48)
					if (((v == null()))){
						HX_STACK_LINE(48)
						_g7 = null();
					}
					else{
						HX_STACK_LINE(49)
						HX_STACK_DO_THROW((HX_CSTRING("unrecognized preview tag ") + v1));
					}
				}
;
;
			}
		}
		HX_STACK_LINE(51)
		Dynamic _g8;		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			::String _g = ::tools::haxelib::SemVer_obj::parse->matched((int)7);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(51)
			{
				HX_STACK_LINE(51)
				::String v = _g;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(52)
				if (((v == null()))){
					HX_STACK_LINE(52)
					_g8 = null();
				}
				else{
					HX_STACK_LINE(51)
					::String v1 = _g;		HX_STACK_VAR(v1,"v1");
					HX_STACK_LINE(53)
					_g8 = ::Std_obj::parseInt(v1);
				}
			}
		}
		HX_STACK_LINE(40)
		return ::tools::haxelib::SemVer_obj::__new(_g2,_g4,_g6,_g7,_g8);
	}
	else{
		HX_STACK_LINE(57)
		HX_STACK_DO_THROW(((HX_CSTRING("") + s) + HX_CSTRING(" is not a valid version string")));
	}
	HX_STACK_LINE(39)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SemVer_obj,ofString,return )


SemVer_obj::SemVer_obj()
{
}

void SemVer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SemVer);
	HX_MARK_MEMBER_NAME(major,"major");
	HX_MARK_MEMBER_NAME(minor,"minor");
	HX_MARK_MEMBER_NAME(patch,"patch");
	HX_MARK_MEMBER_NAME(preview,"preview");
	HX_MARK_MEMBER_NAME(previewNum,"previewNum");
	HX_MARK_END_CLASS();
}

void SemVer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(major,"major");
	HX_VISIT_MEMBER_NAME(minor,"minor");
	HX_VISIT_MEMBER_NAME(patch,"patch");
	HX_VISIT_MEMBER_NAME(preview,"preview");
	HX_VISIT_MEMBER_NAME(previewNum,"previewNum");
}

Dynamic SemVer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return parse; }
		if (HX_FIELD_EQ(inName,"major") ) { return major; }
		if (HX_FIELD_EQ(inName,"minor") ) { return minor; }
		if (HX_FIELD_EQ(inName,"patch") ) { return patch; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preview") ) { return preview; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ofString") ) { return ofString_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"previewNum") ) { return previewNum; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SemVer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { parse=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"major") ) { major=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minor") ) { minor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"patch") ) { patch=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"preview") ) { preview=inValue.Cast< ::tools::haxelib::Preview >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"previewNum") ) { previewNum=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SemVer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("major"));
	outFields->push(HX_CSTRING("minor"));
	outFields->push(HX_CSTRING("patch"));
	outFields->push(HX_CSTRING("preview"));
	outFields->push(HX_CSTRING("previewNum"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("parse"),
	HX_CSTRING("ofString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SemVer_obj,major),HX_CSTRING("major")},
	{hx::fsInt,(int)offsetof(SemVer_obj,minor),HX_CSTRING("minor")},
	{hx::fsInt,(int)offsetof(SemVer_obj,patch),HX_CSTRING("patch")},
	{hx::fsObject /*::tools::haxelib::Preview*/ ,(int)offsetof(SemVer_obj,preview),HX_CSTRING("preview")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SemVer_obj,previewNum),HX_CSTRING("previewNum")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("major"),
	HX_CSTRING("minor"),
	HX_CSTRING("patch"),
	HX_CSTRING("preview"),
	HX_CSTRING("previewNum"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SemVer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SemVer_obj::parse,"parse");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SemVer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SemVer_obj::parse,"parse");
};

#endif

Class SemVer_obj::__mClass;

void SemVer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.SemVer"), hx::TCanCast< SemVer_obj> ,sStaticFields,sMemberFields,
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

void SemVer_obj::__boot()
{
	parse= ::EReg_obj::__new(HX_CSTRING("^([0-9]+)\\.([0-9]+)\\.([0-9]+)(-(alpha|beta|rc)(\\.([0-9]+))?)?$"),HX_CSTRING(""));
}

} // end namespace tools
} // end namespace haxelib
