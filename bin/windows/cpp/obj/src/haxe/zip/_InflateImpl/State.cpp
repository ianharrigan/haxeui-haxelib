#include <hxcpp.h>

#ifndef INCLUDED_haxe_zip__InflateImpl_State
#include <haxe/zip/_InflateImpl/State.h>
#endif
namespace haxe{
namespace zip{
namespace _InflateImpl{

::haxe::zip::_InflateImpl::State State_obj::Block;

::haxe::zip::_InflateImpl::State State_obj::CData;

::haxe::zip::_InflateImpl::State State_obj::Crc;

::haxe::zip::_InflateImpl::State State_obj::Dist;

::haxe::zip::_InflateImpl::State State_obj::DistOne;

::haxe::zip::_InflateImpl::State State_obj::Done;

::haxe::zip::_InflateImpl::State State_obj::Flat;

::haxe::zip::_InflateImpl::State State_obj::Head;

HX_DEFINE_CREATE_ENUM(State_obj)

int State_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Block")) return 1;
	if (inName==HX_CSTRING("CData")) return 2;
	if (inName==HX_CSTRING("Crc")) return 4;
	if (inName==HX_CSTRING("Dist")) return 5;
	if (inName==HX_CSTRING("DistOne")) return 6;
	if (inName==HX_CSTRING("Done")) return 7;
	if (inName==HX_CSTRING("Flat")) return 3;
	if (inName==HX_CSTRING("Head")) return 0;
	return super::__FindIndex(inName);
}

int State_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Block")) return 0;
	if (inName==HX_CSTRING("CData")) return 0;
	if (inName==HX_CSTRING("Crc")) return 0;
	if (inName==HX_CSTRING("Dist")) return 0;
	if (inName==HX_CSTRING("DistOne")) return 0;
	if (inName==HX_CSTRING("Done")) return 0;
	if (inName==HX_CSTRING("Flat")) return 0;
	if (inName==HX_CSTRING("Head")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic State_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Block")) return Block;
	if (inName==HX_CSTRING("CData")) return CData;
	if (inName==HX_CSTRING("Crc")) return Crc;
	if (inName==HX_CSTRING("Dist")) return Dist;
	if (inName==HX_CSTRING("DistOne")) return DistOne;
	if (inName==HX_CSTRING("Done")) return Done;
	if (inName==HX_CSTRING("Flat")) return Flat;
	if (inName==HX_CSTRING("Head")) return Head;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Head"),
	HX_CSTRING("Block"),
	HX_CSTRING("CData"),
	HX_CSTRING("Flat"),
	HX_CSTRING("Crc"),
	HX_CSTRING("Dist"),
	HX_CSTRING("DistOne"),
	HX_CSTRING("Done"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(State_obj::Block,"Block");
	HX_MARK_MEMBER_NAME(State_obj::CData,"CData");
	HX_MARK_MEMBER_NAME(State_obj::Crc,"Crc");
	HX_MARK_MEMBER_NAME(State_obj::Dist,"Dist");
	HX_MARK_MEMBER_NAME(State_obj::DistOne,"DistOne");
	HX_MARK_MEMBER_NAME(State_obj::Done,"Done");
	HX_MARK_MEMBER_NAME(State_obj::Flat,"Flat");
	HX_MARK_MEMBER_NAME(State_obj::Head,"Head");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(State_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(State_obj::Block,"Block");
	HX_VISIT_MEMBER_NAME(State_obj::CData,"CData");
	HX_VISIT_MEMBER_NAME(State_obj::Crc,"Crc");
	HX_VISIT_MEMBER_NAME(State_obj::Dist,"Dist");
	HX_VISIT_MEMBER_NAME(State_obj::DistOne,"DistOne");
	HX_VISIT_MEMBER_NAME(State_obj::Done,"Done");
	HX_VISIT_MEMBER_NAME(State_obj::Flat,"Flat");
	HX_VISIT_MEMBER_NAME(State_obj::Head,"Head");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class State_obj::__mClass;

Dynamic __Create_State_obj() { return new State_obj; }

void State_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.zip._InflateImpl.State"), hx::TCanCast< State_obj >,sStaticFields,sMemberFields,
	&__Create_State_obj, &__Create,
	&super::__SGetClass(), &CreateState_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void State_obj::__boot()
{
hx::Static(Block) = hx::CreateEnum< State_obj >(HX_CSTRING("Block"),1);
hx::Static(CData) = hx::CreateEnum< State_obj >(HX_CSTRING("CData"),2);
hx::Static(Crc) = hx::CreateEnum< State_obj >(HX_CSTRING("Crc"),4);
hx::Static(Dist) = hx::CreateEnum< State_obj >(HX_CSTRING("Dist"),5);
hx::Static(DistOne) = hx::CreateEnum< State_obj >(HX_CSTRING("DistOne"),6);
hx::Static(Done) = hx::CreateEnum< State_obj >(HX_CSTRING("Done"),7);
hx::Static(Flat) = hx::CreateEnum< State_obj >(HX_CSTRING("Flat"),3);
hx::Static(Head) = hx::CreateEnum< State_obj >(HX_CSTRING("Head"),0);
}


} // end namespace haxe
} // end namespace zip
} // end namespace _InflateImpl
