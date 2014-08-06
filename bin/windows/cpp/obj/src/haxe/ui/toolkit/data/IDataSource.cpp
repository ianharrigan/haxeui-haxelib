#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{

HX_DEFINE_DYNAMIC_FUNC1(IDataSource_obj,create,)

HX_DEFINE_DYNAMIC_FUNC2(IDataSource_obj,createFromString,)

HX_DEFINE_DYNAMIC_FUNC2(IDataSource_obj,createFromResource,)

HX_DEFINE_DYNAMIC_FUNC0(IDataSource_obj,open,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataSource_obj,close,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataSource_obj,moveFirst,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataSource_obj,moveNext,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataSource_obj,get,return )

HX_DEFINE_DYNAMIC_FUNC1(IDataSource_obj,add,return )

HX_DEFINE_DYNAMIC_FUNC1(IDataSource_obj,update,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataSource_obj,remove,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataSource_obj,removeAll,)

HX_DEFINE_DYNAMIC_FUNC0(IDataSource_obj,hash,return )

HX_DEFINE_DYNAMIC_FUNC0(IDataSource_obj,size,return )


static ::String sMemberFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("createFromString"),
	HX_CSTRING("createFromResource"),
	HX_CSTRING("open"),
	HX_CSTRING("close"),
	HX_CSTRING("moveFirst"),
	HX_CSTRING("moveNext"),
	HX_CSTRING("get"),
	HX_CSTRING("add"),
	HX_CSTRING("update"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("hash"),
	HX_CSTRING("size"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IDataSource_obj::__mClass,"__mClass");
};

#endif

Class IDataSource_obj::__mClass;

void IDataSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.data.IDataSource"), hx::TCanCast< IDataSource_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IDataSource_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
