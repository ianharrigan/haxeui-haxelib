#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token
#include <haxe/ds/_GenericStack/GenericStackIterator_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace haxe{
namespace ds{
namespace _GenericStack{

Void GenericStackIterator_hscript_Token_obj::__construct(::haxe::ds::GenericCell_hscript_Token head)
{
HX_STACK_FRAME("haxe.ds._GenericStack.GenericStackIterator_hscript_Token","new",0xbf5d5a94,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.new","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",40,0xf4b66b99)
HX_STACK_THIS(this)
HX_STACK_ARG(head,"head")
{
	HX_STACK_LINE(40)
	this->current = head;
}
;
	return null();
}

//GenericStackIterator_hscript_Token_obj::~GenericStackIterator_hscript_Token_obj() { }

Dynamic GenericStackIterator_hscript_Token_obj::__CreateEmpty() { return  new GenericStackIterator_hscript_Token_obj; }
hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > GenericStackIterator_hscript_Token_obj::__new(::haxe::ds::GenericCell_hscript_Token head)
{  hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > result = new GenericStackIterator_hscript_Token_obj();
	result->__construct(head);
	return result;}

Dynamic GenericStackIterator_hscript_Token_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericStackIterator_hscript_Token_obj > result = new GenericStackIterator_hscript_Token_obj();
	result->__construct(inArgs[0]);
	return result;}

bool GenericStackIterator_hscript_Token_obj::hasNext( ){
	HX_STACK_FRAME("haxe.ds._GenericStack.GenericStackIterator_hscript_Token","hasNext",0xccb359a1,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.hasNext","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",37,0xf4b66b99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return (this->current != null());
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStackIterator_hscript_Token_obj,hasNext,return )

::hscript::Token GenericStackIterator_hscript_Token_obj::next( ){
	HX_STACK_FRAME("haxe.ds._GenericStack.GenericStackIterator_hscript_Token","next",0xb251e83f,"haxe.ds._GenericStack.GenericStackIterator_hscript_Token.next","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",38,0xf4b66b99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::hscript::Token result = this->current->elt;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(38)
	this->current = this->current->next;
	HX_STACK_LINE(38)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStackIterator_hscript_Token_obj,next,return )


GenericStackIterator_hscript_Token_obj::GenericStackIterator_hscript_Token_obj()
{
}

void GenericStackIterator_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStackIterator_hscript_Token);
	HX_MARK_MEMBER_NAME(current,"current");
	::cpp::FastIterator_obj< ::hscript::Token >::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GenericStackIterator_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	::cpp::FastIterator_obj< ::hscript::Token >::__Visit(HX_VISIT_ARG);
}

Dynamic GenericStackIterator_hscript_Token_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericStackIterator_hscript_Token_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStackIterator_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("current"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::GenericCell_hscript_Token*/ ,(int)offsetof(GenericStackIterator_hscript_Token_obj,current),HX_CSTRING("current")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("current"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericStackIterator_hscript_Token_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericStackIterator_hscript_Token_obj::__mClass,"__mClass");
};

#endif

Class GenericStackIterator_hscript_Token_obj::__mClass;

void GenericStackIterator_hscript_Token_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ds._GenericStack.GenericStackIterator_hscript_Token"), hx::TCanCast< GenericStackIterator_hscript_Token_obj> ,sStaticFields,sMemberFields,
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

void GenericStackIterator_hscript_Token_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ds
} // end namespace _GenericStack
