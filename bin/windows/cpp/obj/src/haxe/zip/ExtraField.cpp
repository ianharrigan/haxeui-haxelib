#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_ExtraField
#include <haxe/zip/ExtraField.h>
#endif
namespace haxe{
namespace zip{

::haxe::zip::ExtraField  ExtraField_obj::FInfoZipUnicodePath(::String name,int crc)
	{ return hx::CreateEnum< ExtraField_obj >(HX_CSTRING("FInfoZipUnicodePath"),1,hx::DynamicArray(0,2).Add(name).Add(crc)); }

::haxe::zip::ExtraField  ExtraField_obj::FUnknown(int tag,::haxe::io::Bytes bytes)
	{ return hx::CreateEnum< ExtraField_obj >(HX_CSTRING("FUnknown"),0,hx::DynamicArray(0,2).Add(tag).Add(bytes)); }

::haxe::zip::ExtraField ExtraField_obj::FUtf8;

HX_DEFINE_CREATE_ENUM(ExtraField_obj)

int ExtraField_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("FInfoZipUnicodePath")) return 1;
	if (inName==HX_CSTRING("FUnknown")) return 0;
	if (inName==HX_CSTRING("FUtf8")) return 2;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExtraField_obj,FInfoZipUnicodePath,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ExtraField_obj,FUnknown,return)

int ExtraField_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("FInfoZipUnicodePath")) return 2;
	if (inName==HX_CSTRING("FUnknown")) return 2;
	if (inName==HX_CSTRING("FUtf8")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ExtraField_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("FInfoZipUnicodePath")) return FInfoZipUnicodePath_dyn();
	if (inName==HX_CSTRING("FUnknown")) return FUnknown_dyn();
	if (inName==HX_CSTRING("FUtf8")) return FUtf8;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("FUnknown"),
	HX_CSTRING("FInfoZipUnicodePath"),
	HX_CSTRING("FUtf8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExtraField_obj::FUtf8,"FUtf8");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExtraField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExtraField_obj::FUtf8,"FUtf8");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ExtraField_obj::__mClass;

Dynamic __Create_ExtraField_obj() { return new ExtraField_obj; }

void ExtraField_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.zip.ExtraField"), hx::TCanCast< ExtraField_obj >,sStaticFields,sMemberFields,
	&__Create_ExtraField_obj, &__Create,
	&super::__SGetClass(), &CreateExtraField_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ExtraField_obj::__boot()
{
hx::Static(FUtf8) = hx::CreateEnum< ExtraField_obj >(HX_CSTRING("FUtf8"),2);
}


} // end namespace haxe
} // end namespace zip
