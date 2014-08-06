#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_ByteConverter
#include <haxe/ui/toolkit/util/ByteConverter.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArray
#include <openfl/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace util{

Void ByteConverter_obj::__construct()
{
	return null();
}

//ByteConverter_obj::~ByteConverter_obj() { }

Dynamic ByteConverter_obj::__CreateEmpty() { return  new ByteConverter_obj; }
hx::ObjectPtr< ByteConverter_obj > ByteConverter_obj::__new()
{  hx::ObjectPtr< ByteConverter_obj > result = new ByteConverter_obj();
	result->__construct();
	return result;}

Dynamic ByteConverter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteConverter_obj > result = new ByteConverter_obj();
	result->__construct();
	return result;}

::openfl::utils::ByteArray ByteConverter_obj::fromHaxeBytes( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("haxe.ui.toolkit.util.ByteConverter","fromHaxeBytes",0x56937ddb,"haxe.ui.toolkit.util.ByteConverter.fromHaxeBytes","haxe/ui/toolkit/util/ByteConverter.hx",7,0xd1ec6e90)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(8)
	::openfl::utils::ByteArray ba = ::openfl::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(ba,"ba");
	HX_STACK_LINE(9)
	{
		HX_STACK_LINE(9)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(9)
		int _g = bytes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(9)
		while((true)){
			HX_STACK_LINE(9)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(9)
				break;
			}
			HX_STACK_LINE(9)
			int a = (_g1)++;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(10)
			{
				HX_STACK_LINE(10)
				int value = bytes->b->__unsafe_get(a);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(10)
				ba->ensureElem(ba->position,true);
				HX_STACK_LINE(10)
				int _g2 = (ba->position)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(10)
				ba->b[_g2] = value;
			}
		}
	}
	HX_STACK_LINE(12)
	return ba;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteConverter_obj,fromHaxeBytes,return )


ByteConverter_obj::ByteConverter_obj()
{
}

Dynamic ByteConverter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"fromHaxeBytes") ) { return fromHaxeBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ByteConverter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteConverter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromHaxeBytes"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteConverter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteConverter_obj::__mClass,"__mClass");
};

#endif

Class ByteConverter_obj::__mClass;

void ByteConverter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.util.ByteConverter"), hx::TCanCast< ByteConverter_obj> ,sStaticFields,sMemberFields,
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

void ByteConverter_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace util
