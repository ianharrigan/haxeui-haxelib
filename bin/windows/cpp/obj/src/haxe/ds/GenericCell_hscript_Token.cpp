#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace haxe{
namespace ds{

Void GenericCell_hscript_Token_obj::__construct(::hscript::Token elt,::haxe::ds::GenericCell_hscript_Token next)
{
HX_STACK_FRAME("haxe.ds.GenericCell_hscript_Token","new",0x1c0e2ea2,"haxe.ds.GenericCell_hscript_Token.new","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",30,0xf4b66b99)
HX_STACK_THIS(this)
HX_STACK_ARG(elt,"elt")
HX_STACK_ARG(next,"next")
{
	HX_STACK_LINE(30)
	this->elt = elt;
	HX_STACK_LINE(30)
	this->next = next;
}
;
	return null();
}

//GenericCell_hscript_Token_obj::~GenericCell_hscript_Token_obj() { }

Dynamic GenericCell_hscript_Token_obj::__CreateEmpty() { return  new GenericCell_hscript_Token_obj; }
hx::ObjectPtr< GenericCell_hscript_Token_obj > GenericCell_hscript_Token_obj::__new(::hscript::Token elt,::haxe::ds::GenericCell_hscript_Token next)
{  hx::ObjectPtr< GenericCell_hscript_Token_obj > result = new GenericCell_hscript_Token_obj();
	result->__construct(elt,next);
	return result;}

Dynamic GenericCell_hscript_Token_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericCell_hscript_Token_obj > result = new GenericCell_hscript_Token_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


GenericCell_hscript_Token_obj::GenericCell_hscript_Token_obj()
{
}

void GenericCell_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericCell_hscript_Token);
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void GenericCell_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elt,"elt");
	HX_VISIT_MEMBER_NAME(next,"next");
}

Dynamic GenericCell_hscript_Token_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return elt; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericCell_hscript_Token_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast< ::hscript::Token >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast< ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericCell_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("elt"));
	outFields->push(HX_CSTRING("next"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::hscript::Token*/ ,(int)offsetof(GenericCell_hscript_Token_obj,elt),HX_CSTRING("elt")},
	{hx::fsObject /*::haxe::ds::GenericCell_hscript_Token*/ ,(int)offsetof(GenericCell_hscript_Token_obj,next),HX_CSTRING("next")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("elt"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericCell_hscript_Token_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericCell_hscript_Token_obj::__mClass,"__mClass");
};

#endif

Class GenericCell_hscript_Token_obj::__mClass;

void GenericCell_hscript_Token_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ds.GenericCell_hscript_Token"), hx::TCanCast< GenericCell_hscript_Token_obj> ,sStaticFields,sMemberFields,
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

void GenericCell_hscript_Token_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ds
