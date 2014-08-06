#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRulePart
#include <haxe/ui/toolkit/style/_StyleManager/StyleRulePart.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{
namespace _StyleManager{

Void StyleRulePart_obj::__construct(::String rulePart)
{
HX_STACK_FRAME("haxe.ui.toolkit.style._StyleManager.StyleRulePart","new",0x00e30c00,"haxe.ui.toolkit.style._StyleManager.StyleRulePart.new","haxe/ui/toolkit/style/StyleManager.hx",388,0x60b8f881)
HX_STACK_THIS(this)
HX_STACK_ARG(rulePart,"rulePart")
{
	HX_STACK_LINE(389)
	int n = rulePart.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(390)
	if (((n != (int)-1))){
		HX_STACK_LINE(391)
		::String _g = rulePart.substr((n + (int)1),rulePart.length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(391)
		this->state = _g;
		HX_STACK_LINE(392)
		::String _g1 = rulePart.substr((int)0,n);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(392)
		rulePart = _g1;
	}
	HX_STACK_LINE(395)
	if ((::StringTools_obj::startsWith(rulePart,HX_CSTRING("#")))){
		HX_STACK_LINE(396)
		::String _g2 = rulePart.substr((int)1,rulePart.length);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(396)
		this->id = _g2;
		HX_STACK_LINE(397)
		int _g3 = this->id.indexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(397)
		n = _g3;
		HX_STACK_LINE(398)
		if (((n != (int)-1))){
			HX_STACK_LINE(399)
			::String _g4 = this->id.substr((n + (int)1),this->id.length);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(399)
			this->styleName = _g4;
			HX_STACK_LINE(400)
			::String _g5 = this->id.substr((int)0,n);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(400)
			this->id = _g5;
		}
	}
	else{
		HX_STACK_LINE(403)
		this->className = rulePart;
		HX_STACK_LINE(404)
		int _g6 = this->className.indexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(404)
		n = _g6;
		HX_STACK_LINE(405)
		if (((n != (int)-1))){
			HX_STACK_LINE(406)
			::String _g7 = this->className.substr((n + (int)1),this->className.length);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(406)
			this->styleName = _g7;
			HX_STACK_LINE(407)
			::String _g8 = this->className.substr((int)0,n);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(407)
			this->className = _g8;
			HX_STACK_LINE(408)
			if (((this->className.length == (int)0))){
				HX_STACK_LINE(409)
				this->className = null();
			}
		}
	}
	HX_STACK_LINE(414)
	if (((bool((this->styleName != null())) && bool((this->styleName.length == (int)0))))){
		HX_STACK_LINE(415)
		this->styleName = null();
	}
}
;
	return null();
}

//StyleRulePart_obj::~StyleRulePart_obj() { }

Dynamic StyleRulePart_obj::__CreateEmpty() { return  new StyleRulePart_obj; }
hx::ObjectPtr< StyleRulePart_obj > StyleRulePart_obj::__new(::String rulePart)
{  hx::ObjectPtr< StyleRulePart_obj > result = new StyleRulePart_obj();
	result->__construct(rulePart);
	return result;}

Dynamic StyleRulePart_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleRulePart_obj > result = new StyleRulePart_obj();
	result->__construct(inArgs[0]);
	return result;}


StyleRulePart_obj::StyleRulePart_obj()
{
}

void StyleRulePart_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleRulePart);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(styleName,"styleName");
	HX_MARK_END_CLASS();
}

void StyleRulePart_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(styleName,"styleName");
}

Dynamic StyleRulePart_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"styleName") ) { return styleName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleRulePart_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"styleName") ) { styleName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleRulePart_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("styleName"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StyleRulePart_obj,id),HX_CSTRING("id")},
	{hx::fsString,(int)offsetof(StyleRulePart_obj,className),HX_CSTRING("className")},
	{hx::fsString,(int)offsetof(StyleRulePart_obj,state),HX_CSTRING("state")},
	{hx::fsString,(int)offsetof(StyleRulePart_obj,styleName),HX_CSTRING("styleName")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("className"),
	HX_CSTRING("state"),
	HX_CSTRING("styleName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleRulePart_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleRulePart_obj::__mClass,"__mClass");
};

#endif

Class StyleRulePart_obj::__mClass;

void StyleRulePart_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style._StyleManager.StyleRulePart"), hx::TCanCast< StyleRulePart_obj> ,sStaticFields,sMemberFields,
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

void StyleRulePart_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
} // end namespace _StyleManager
