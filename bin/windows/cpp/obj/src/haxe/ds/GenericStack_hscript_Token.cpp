#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hscript_Token
#include <haxe/ds/GenericStack_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator_hscript_Token
#include <haxe/ds/_GenericStack/GenericStackIterator_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace haxe{
namespace ds{

Void GenericStack_hscript_Token_obj::__construct()
{
HX_STACK_FRAME("haxe.ds.GenericStack_hscript_Token","new",0xda5f4ac8,"haxe.ds.GenericStack_hscript_Token.new","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",67,0xf4b66b99)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GenericStack_hscript_Token_obj::~GenericStack_hscript_Token_obj() { }

Dynamic GenericStack_hscript_Token_obj::__CreateEmpty() { return  new GenericStack_hscript_Token_obj; }
hx::ObjectPtr< GenericStack_hscript_Token_obj > GenericStack_hscript_Token_obj::__new()
{  hx::ObjectPtr< GenericStack_hscript_Token_obj > result = new GenericStack_hscript_Token_obj();
	result->__construct();
	return result;}

Dynamic GenericStack_hscript_Token_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GenericStack_hscript_Token_obj > result = new GenericStack_hscript_Token_obj();
	result->__construct();
	return result;}

Void GenericStack_hscript_Token_obj::add( ::hscript::Token item){
{
		HX_STACK_FRAME("haxe.ds.GenericStack_hscript_Token","add",0xda556c89,"haxe.ds.GenericStack_hscript_Token.add","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",73,0xf4b66b99)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(74)
		::haxe::ds::GenericCell_hscript_Token _g = ::haxe::ds::GenericCell_hscript_Token_obj::__new(item,this->head);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		this->head = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_hscript_Token_obj,add,(void))

::hscript::Token GenericStack_hscript_Token_obj::first( ){
	HX_STACK_FRAME("haxe.ds.GenericStack_hscript_Token","first",0x104a5c98,"haxe.ds.GenericStack_hscript_Token.first","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",83,0xf4b66b99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	if (((this->head == null()))){
		HX_STACK_LINE(83)
		return null();
	}
	else{
		HX_STACK_LINE(83)
		return this->head->elt;
	}
	HX_STACK_LINE(83)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,first,return )

::hscript::Token GenericStack_hscript_Token_obj::pop( ){
	HX_STACK_FRAME("haxe.ds.GenericStack_hscript_Token","pop",0xda60d7f9,"haxe.ds.GenericStack_hscript_Token.pop","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",91,0xf4b66b99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	::haxe::ds::GenericCell_hscript_Token k = this->head;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(93)
	if (((k == null()))){
		HX_STACK_LINE(94)
		return null();
	}
	else{
		HX_STACK_LINE(96)
		this->head = k->next;
		HX_STACK_LINE(97)
		return k->elt;
	}
	HX_STACK_LINE(93)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,pop,return )

bool GenericStack_hscript_Token_obj::isEmpty( ){
	HX_STACK_FRAME("haxe.ds.GenericStack_hscript_Token","isEmpty",0x0c5cacab,"haxe.ds.GenericStack_hscript_Token.isEmpty","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",105,0xf4b66b99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	return (this->head == null());
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,isEmpty,return )

bool GenericStack_hscript_Token_obj::remove( ::hscript::Token v){
	HX_STACK_FRAME("haxe.ds.GenericStack_hscript_Token","remove",0xac2392dc,"haxe.ds.GenericStack_hscript_Token.remove","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",117,0xf4b66b99)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(118)
	Dynamic prev = null();		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(119)
	::haxe::ds::GenericCell_hscript_Token l = this->head;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(120)
	while((true)){
		HX_STACK_LINE(120)
		if ((!(((l != null()))))){
			HX_STACK_LINE(120)
			break;
		}
		HX_STACK_LINE(121)
		if (((l->elt == v))){
			HX_STACK_LINE(122)
			if (((prev == null()))){
				HX_STACK_LINE(123)
				this->head = l->next;
			}
			else{
				HX_STACK_LINE(125)
				prev->__FieldRef(HX_CSTRING("next")) = l->next;
			}
			HX_STACK_LINE(126)
			break;
		}
		HX_STACK_LINE(128)
		prev = l;
		HX_STACK_LINE(129)
		l = l->next;
	}
	HX_STACK_LINE(131)
	return (l != null());
}


HX_DEFINE_DYNAMIC_FUNC1(GenericStack_hscript_Token_obj,remove,return )

Dynamic GenericStack_hscript_Token_obj::iterator( ){
	HX_STACK_FRAME("haxe.ds.GenericStack_hscript_Token","iterator",0x90d21686,"haxe.ds.GenericStack_hscript_Token.iterator","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",140,0xf4b66b99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	return ::haxe::ds::_GenericStack::GenericStackIterator_hscript_Token_obj::__new(this->head);
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,iterator,return )

::String GenericStack_hscript_Token_obj::toString( ){
	HX_STACK_FRAME("haxe.ds.GenericStack_hscript_Token","toString",0x35a69d44,"haxe.ds.GenericStack_hscript_Token.toString","C:\\Servers\\Haxe\\haxe\\std/haxe/ds/GenericStack.hx",166,0xf4b66b99)
	HX_STACK_THIS(this)
	HX_STACK_LINE(167)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(168)
	::haxe::ds::GenericCell_hscript_Token l = this->head;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(169)
	while((true)){
		HX_STACK_LINE(169)
		if ((!(((l != null()))))){
			HX_STACK_LINE(169)
			break;
		}
		HX_STACK_LINE(170)
		a->push(l->elt);
		HX_STACK_LINE(171)
		l = l->next;
	}
	HX_STACK_LINE(173)
	::String _g = a->join(HX_CSTRING(","));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(173)
	::String _g1 = (HX_CSTRING("{") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(173)
	return (_g1 + HX_CSTRING("}"));
}


HX_DEFINE_DYNAMIC_FUNC0(GenericStack_hscript_Token_obj,toString,return )


GenericStack_hscript_Token_obj::GenericStack_hscript_Token_obj()
{
}

void GenericStack_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericStack_hscript_Token);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void GenericStack_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(head,"head");
}

Dynamic GenericStack_hscript_Token_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pop") ) { return pop_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return head; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GenericStack_hscript_Token_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericStack_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("head"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::GenericCell_hscript_Token*/ ,(int)offsetof(GenericStack_hscript_Token_obj,head),HX_CSTRING("head")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("head"),
	HX_CSTRING("add"),
	HX_CSTRING("first"),
	HX_CSTRING("pop"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("remove"),
	HX_CSTRING("iterator"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GenericStack_hscript_Token_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GenericStack_hscript_Token_obj::__mClass,"__mClass");
};

#endif

Class GenericStack_hscript_Token_obj::__mClass;

void GenericStack_hscript_Token_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ds.GenericStack_hscript_Token"), hx::TCanCast< GenericStack_hscript_Token_obj> ,sStaticFields,sMemberFields,
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

void GenericStack_hscript_Token_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ds
