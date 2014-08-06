#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils
#include <haxe/ui/toolkit/hscript/ScriptUtils.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{

Void ScriptUtils_obj::__construct()
{
	return null();
}

//ScriptUtils_obj::~ScriptUtils_obj() { }

Dynamic ScriptUtils_obj::__CreateEmpty() { return  new ScriptUtils_obj; }
hx::ObjectPtr< ScriptUtils_obj > ScriptUtils_obj::__new()
{  hx::ObjectPtr< ScriptUtils_obj > result = new ScriptUtils_obj();
	result->__construct();
	return result;}

Dynamic ScriptUtils_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScriptUtils_obj > result = new ScriptUtils_obj();
	result->__construct();
	return result;}

bool ScriptUtils_obj::isScript( ::String data){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptUtils","isScript",0x1bf3e49a,"haxe.ui.toolkit.hscript.ScriptUtils.isScript","haxe/ui/toolkit/hscript/ScriptUtils.hx",4,0x8cddcb77)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(5)
	int _g = data.indexOf(HX_CSTRING("+"),null());		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( ::String &data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/hscript/ScriptUtils.hx",6,0x8cddcb77)
			{
				HX_STACK_LINE(6)
				int _g1 = data.indexOf(HX_CSTRING("-"),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(6)
				return (_g1 != (int)-1);
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::String &data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/hscript/ScriptUtils.hx",7,0x8cddcb77)
			{
				HX_STACK_LINE(7)
				int _g2 = data.indexOf(HX_CSTRING("*"),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(7)
				return (_g2 != (int)-1);
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( ::String &data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/hscript/ScriptUtils.hx",8,0x8cddcb77)
			{
				HX_STACK_LINE(8)
				int _g3 = data.indexOf(HX_CSTRING("/"),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(8)
				return (_g3 != (int)-1);
			}
			return null();
		}
	};
	struct _Function_1_4{
		inline static bool Block( ::String &data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/hscript/ScriptUtils.hx",9,0x8cddcb77)
			{
				HX_STACK_LINE(9)
				int _g4 = data.indexOf(HX_CSTRING("("),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(9)
				return (_g4 != (int)-1);
			}
			return null();
		}
	};
	struct _Function_1_5{
		inline static bool Block( ::String &data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/hscript/ScriptUtils.hx",10,0x8cddcb77)
			{
				HX_STACK_LINE(10)
				int _g5 = data.indexOf(HX_CSTRING(")"),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(10)
				return (_g5 != (int)-1);
			}
			return null();
		}
	};
	struct _Function_1_6{
		inline static bool Block( ::String &data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/hscript/ScriptUtils.hx",11,0x8cddcb77)
			{
				HX_STACK_LINE(11)
				int _g6 = data.indexOf(HX_CSTRING("["),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(11)
				return (_g6 != (int)-1);
			}
			return null();
		}
	};
	struct _Function_1_7{
		inline static bool Block( ::String &data){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/hscript/ScriptUtils.hx",12,0x8cddcb77)
			{
				HX_STACK_LINE(12)
				int _g7 = data.indexOf(HX_CSTRING("]"),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(12)
				return (_g7 != (int)-1);
			}
			return null();
		}
	};
	HX_STACK_LINE(5)
	if (((  ((!(((  ((!(((  ((!(((  ((!(((  ((!(((  ((!(((  ((!(((_g != (int)-1))))) ? bool(_Function_1_1::Block(data)) : bool(true) ))))) ? bool(_Function_1_2::Block(data)) : bool(true) ))))) ? bool(_Function_1_3::Block(data)) : bool(true) ))))) ? bool(_Function_1_4::Block(data)) : bool(true) ))))) ? bool(_Function_1_5::Block(data)) : bool(true) ))))) ? bool(_Function_1_6::Block(data)) : bool(true) ))))) ? bool(_Function_1_7::Block(data)) : bool(true) ))){
		HX_STACK_LINE(13)
		return true;
	}
	HX_STACK_LINE(15)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScriptUtils_obj,isScript,return )

bool ScriptUtils_obj::isCssException( ::String name){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptUtils","isCssException",0x70b7c7db,"haxe.ui.toolkit.hscript.ScriptUtils.isCssException","haxe/ui/toolkit/hscript/ScriptUtils.hx",18,0x8cddcb77)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(19)
	if (((bool((bool((bool((name == HX_CSTRING("filter"))) || bool((name == HX_CSTRING("icon"))))) || bool((name == HX_CSTRING("backgroundImage"))))) || bool((name == HX_CSTRING("fontName")))))){
		HX_STACK_LINE(23)
		return true;
	}
	HX_STACK_LINE(25)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ScriptUtils_obj,isCssException,return )


ScriptUtils_obj::ScriptUtils_obj()
{
}

Dynamic ScriptUtils_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"isScript") ) { return isScript_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isCssException") ) { return isCssException_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScriptUtils_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ScriptUtils_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isScript"),
	HX_CSTRING("isCssException"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptUtils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptUtils_obj::__mClass,"__mClass");
};

#endif

Class ScriptUtils_obj::__mClass;

void ScriptUtils_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.hscript.ScriptUtils"), hx::TCanCast< ScriptUtils_obj> ,sStaticFields,sMemberFields,
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

void ScriptUtils_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript
