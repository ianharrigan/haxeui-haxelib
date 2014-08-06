#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ClientWrapper
#include <haxe/ui/toolkit/hscript/ClientWrapper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{

Void ScriptManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptManager","new",0xff700fb7,"haxe.ui.toolkit.hscript.ScriptManager.new","haxe/ui/toolkit/hscript/ScriptManager.hx",18,0x67f8573b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	this->_scripts = _g;
}
;
	return null();
}

//ScriptManager_obj::~ScriptManager_obj() { }

Dynamic ScriptManager_obj::__CreateEmpty() { return  new ScriptManager_obj; }
hx::ObjectPtr< ScriptManager_obj > ScriptManager_obj::__new()
{  hx::ObjectPtr< ScriptManager_obj > result = new ScriptManager_obj();
	result->__construct();
	return result;}

Dynamic ScriptManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScriptManager_obj > result = new ScriptManager_obj();
	result->__construct();
	return result;}

Void ScriptManager_obj::addScript( ::String script){
{
		HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptManager","addScript",0x25a55da3,"haxe.ui.toolkit.hscript.ScriptManager.addScript","haxe/ui/toolkit/hscript/ScriptManager.hx",23,0x67f8573b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(script,"script")
		HX_STACK_LINE(23)
		this->_scripts->push(script);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScriptManager_obj,addScript,(void))

Dynamic ScriptManager_obj::executeScript( ::String script){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptManager","executeScript",0xc46e5437,"haxe.ui.toolkit.hscript.ScriptManager.executeScript","haxe/ui/toolkit/hscript/ScriptManager.hx",26,0x67f8573b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(script,"script")
	HX_STACK_LINE(27)
	::String fullScript = HX_CSTRING("");		HX_STACK_VAR(fullScript,"fullScript");
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		Array< ::String > _g1 = this->_scripts;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			::String s = _g1->__get(_g);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(28)
			++(_g);
			HX_STACK_LINE(29)
			hx::AddEq(fullScript,(s + HX_CSTRING("\n\n")));
		}
	}
	HX_STACK_LINE(31)
	hx::AddEq(fullScript,script);
	HX_STACK_LINE(32)
	Dynamic retVal = null();		HX_STACK_VAR(retVal,"retVal");
	HX_STACK_LINE(34)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(35)
		::hscript::Parser parser = ::hscript::Parser_obj::__new();		HX_STACK_VAR(parser,"parser");
		HX_STACK_LINE(36)
		::hscript::Expr program = parser->parseString(fullScript);		HX_STACK_VAR(program,"program");
		HX_STACK_LINE(37)
		::hscript::Interp interp = ::hscript::Interp_obj::__new();		HX_STACK_VAR(interp,"interp");
		HX_STACK_LINE(39)
		::haxe::ui::toolkit::hscript::ClientWrapper clientWrapper = ::haxe::ui::toolkit::hscript::ClientWrapper_obj::__new();		HX_STACK_VAR(clientWrapper,"clientWrapper");
		HX_STACK_LINE(40)
		interp->variables->set(HX_CSTRING("Client"),clientWrapper);
		HX_STACK_LINE(42)
		Dynamic _g = interp->execute(program);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		retVal = _g;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(46)
				retVal = script;
			}
		}
	}
	HX_STACK_LINE(48)
	return retVal;
}


HX_DEFINE_DYNAMIC_FUNC1(ScriptManager_obj,executeScript,return )

::haxe::ui::toolkit::hscript::ScriptManager ScriptManager_obj::_instance;

::haxe::ui::toolkit::hscript::ScriptManager ScriptManager_obj::instance;

::haxe::ui::toolkit::hscript::ScriptManager ScriptManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.hscript.ScriptManager","get_instance",0xf92d7167,"haxe.ui.toolkit.hscript.ScriptManager.get_instance","haxe/ui/toolkit/hscript/ScriptManager.hx",6,0x67f8573b)
	HX_STACK_LINE(7)
	if (((::haxe::ui::toolkit::hscript::ScriptManager_obj::_instance == null()))){
		HX_STACK_LINE(8)
		::haxe::ui::toolkit::hscript::ScriptManager _g = ::haxe::ui::toolkit::hscript::ScriptManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(8)
		::haxe::ui::toolkit::hscript::ScriptManager_obj::_instance = _g;
	}
	HX_STACK_LINE(10)
	return ::haxe::ui::toolkit::hscript::ScriptManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ScriptManager_obj,get_instance,return )


ScriptManager_obj::ScriptManager_obj()
{
}

void ScriptManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScriptManager);
	HX_MARK_MEMBER_NAME(_scripts,"_scripts");
	HX_MARK_END_CLASS();
}

void ScriptManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scripts,"_scripts");
}

Dynamic ScriptManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"_scripts") ) { return _scripts; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"addScript") ) { return addScript_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"executeScript") ) { return executeScript_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScriptManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::hscript::ScriptManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scripts") ) { _scripts=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::hscript::ScriptManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScriptManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scripts"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(ScriptManager_obj,_scripts),HX_CSTRING("_scripts")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_scripts"),
	HX_CSTRING("addScript"),
	HX_CSTRING("executeScript"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScriptManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScriptManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ScriptManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScriptManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScriptManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ScriptManager_obj::instance,"instance");
};

#endif

Class ScriptManager_obj::__mClass;

void ScriptManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.hscript.ScriptManager"), hx::TCanCast< ScriptManager_obj> ,sStaticFields,sMemberFields,
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

void ScriptManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript
