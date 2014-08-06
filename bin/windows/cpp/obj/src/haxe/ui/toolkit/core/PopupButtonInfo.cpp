#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo
#include <haxe/ui/toolkit/core/PopupButtonInfo.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void PopupButtonInfo_obj::__construct(hx::Null< int >  __o_type,::String text,Dynamic fn)
{
HX_STACK_FRAME("haxe.ui.toolkit.core.PopupButtonInfo","new",0xe87807d1,"haxe.ui.toolkit.core.PopupButtonInfo.new","haxe/ui/toolkit/core/PopupManager.hx",259,0xc348cc90)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_type,"type")
HX_STACK_ARG(text,"text")
HX_STACK_ARG(fn,"fn")
int type = __o_type.Default(1);
{
	HX_STACK_LINE(260)
	this->type = (int)-1;
	HX_STACK_LINE(265)
	this->type = type;
	HX_STACK_LINE(266)
	this->text = text;
	HX_STACK_LINE(267)
	this->fn = fn;
}
;
	return null();
}

//PopupButtonInfo_obj::~PopupButtonInfo_obj() { }

Dynamic PopupButtonInfo_obj::__CreateEmpty() { return  new PopupButtonInfo_obj; }
hx::ObjectPtr< PopupButtonInfo_obj > PopupButtonInfo_obj::__new(hx::Null< int >  __o_type,::String text,Dynamic fn)
{  hx::ObjectPtr< PopupButtonInfo_obj > result = new PopupButtonInfo_obj();
	result->__construct(__o_type,text,fn);
	return result;}

Dynamic PopupButtonInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupButtonInfo_obj > result = new PopupButtonInfo_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


PopupButtonInfo_obj::PopupButtonInfo_obj()
{
}

void PopupButtonInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PopupButtonInfo);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(fn,"fn");
	HX_MARK_END_CLASS();
}

void PopupButtonInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(fn,"fn");
}

Dynamic PopupButtonInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fn") ) { return fn; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PopupButtonInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"fn") ) { fn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupButtonInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PopupButtonInfo_obj,type),HX_CSTRING("type")},
	{hx::fsString,(int)offsetof(PopupButtonInfo_obj,text),HX_CSTRING("text")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(PopupButtonInfo_obj,fn),HX_CSTRING("fn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("type"),
	HX_CSTRING("text"),
	HX_CSTRING("fn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupButtonInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupButtonInfo_obj::__mClass,"__mClass");
};

#endif

Class PopupButtonInfo_obj::__mClass;

void PopupButtonInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.PopupButtonInfo"), hx::TCanCast< PopupButtonInfo_obj> ,sStaticFields,sMemberFields,
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

void PopupButtonInfo_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
