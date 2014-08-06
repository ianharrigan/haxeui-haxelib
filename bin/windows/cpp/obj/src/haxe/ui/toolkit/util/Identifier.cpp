#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_Identifier
#include <haxe/ui/toolkit/util/Identifier.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void Identifier_obj::__construct()
{
	return null();
}

//Identifier_obj::~Identifier_obj() { }

Dynamic Identifier_obj::__CreateEmpty() { return  new Identifier_obj; }
hx::ObjectPtr< Identifier_obj > Identifier_obj::__new()
{  hx::ObjectPtr< Identifier_obj > result = new Identifier_obj();
	result->__construct();
	return result;}

Dynamic Identifier_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Identifier_obj > result = new Identifier_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap Identifier_obj::_objectCount;

::String Identifier_obj::createObjectId( Dynamic instance){
	HX_STACK_FRAME("haxe.ui.toolkit.util.Identifier","createObjectId",0xf79b4cb1,"haxe.ui.toolkit.util.Identifier.createObjectId","haxe/ui/toolkit/util/Identifier.hx",6,0x9ac865eb)
	HX_STACK_ARG(instance,"instance")
	HX_STACK_LINE(7)
	::Class _g = ::Type_obj::getClass(instance);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(7)
	return ::haxe::ui::toolkit::util::Identifier_obj::createClassId(_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Identifier_obj,createObjectId,return )

::String Identifier_obj::createClassId( ::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.util.Identifier","createClassId",0x2af349dc,"haxe.ui.toolkit.util.Identifier.createClassId","haxe/ui/toolkit/util/Identifier.hx",10,0x9ac865eb)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(11)
	::String className = ::Type_obj::getClassName(type);		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(12)
	int c = ::haxe::ui::toolkit::util::Identifier_obj::_objectCount->get(className);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(13)
	bool _g = ::haxe::ui::toolkit::util::Identifier_obj::_objectCount->exists(className);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	if (((_g == false))){
		HX_STACK_LINE(14)
		::haxe::ui::toolkit::util::Identifier_obj::_objectCount->set(className,(int)-1);
		HX_STACK_LINE(15)
		c = (int)-1;
	}
	HX_STACK_LINE(17)
	(c)++;
	HX_STACK_LINE(18)
	::haxe::ui::toolkit::util::Identifier_obj::_objectCount->set(className,c);
	HX_STACK_LINE(19)
	::String id = (className + c);		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(20)
	return id;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Identifier_obj,createClassId,return )

::String Identifier_obj::guid( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.Identifier","guid",0x51175ee4,"haxe.ui.toolkit.util.Identifier.guid","haxe/ui/toolkit/util/Identifier.hx",23,0x9ac865eb)
	HX_STACK_LINE(24)
	::String _g = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	::String _g1 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	::String _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(24)
	::String _g3 = (_g2 + HX_CSTRING("-"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(24)
	::String _g4 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(24)
	::String _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(24)
	::String _g6 = (_g5 + HX_CSTRING("-"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(24)
	::String _g7 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(24)
	::String _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(24)
	::String _g9 = (_g8 + HX_CSTRING("-"));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(24)
	::String _g10 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(24)
	::String _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(24)
	::String _g12 = (_g11 + HX_CSTRING("-"));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(24)
	::String _g13 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(24)
	::String _g14 = (_g12 + _g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(24)
	::String _g15 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(24)
	::String _g16 = (_g14 + _g15);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(24)
	::String _g17 = ::haxe::ui::toolkit::util::Identifier_obj::S4();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(24)
	return (_g16 + _g17);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Identifier_obj,guid,return )

::String Identifier_obj::S4( ){
	HX_STACK_FRAME("haxe.ui.toolkit.util.Identifier","S4",0xbb42ed1c,"haxe.ui.toolkit.util.Identifier.S4","haxe/ui/toolkit/util/Identifier.hx",27,0x9ac865eb)
	HX_STACK_LINE(28)
	int _g = ::Std_obj::random((int)65536);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	int _g1 = ((int)1 + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(28)
	int _g2 = (_g1 * (int)65536);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(28)
	int n = (int(_g2) | int((int)0));		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(29)
	return ::StringTools_obj::hex(n,(int)4).substr((int)0,(int)4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Identifier_obj,S4,return )


Identifier_obj::Identifier_obj()
{
}

Dynamic Identifier_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"S4") ) { return S4_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { return guid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_objectCount") ) { return _objectCount; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createClassId") ) { return createClassId_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createObjectId") ) { return createObjectId_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Identifier_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_objectCount") ) { _objectCount=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Identifier_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_objectCount"),
	HX_CSTRING("createObjectId"),
	HX_CSTRING("createClassId"),
	HX_CSTRING("guid"),
	HX_CSTRING("S4"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Identifier_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Identifier_obj::_objectCount,"_objectCount");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Identifier_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Identifier_obj::_objectCount,"_objectCount");
};

#endif

Class Identifier_obj::__mClass;

void Identifier_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.util.Identifier"), hx::TCanCast< Identifier_obj> ,sStaticFields,sMemberFields,
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

void Identifier_obj::__boot()
{
	_objectCount= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
