#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef
#include <haxe/ui/toolkit/containers/TableViewColumnDef.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void TableViewColumnDef_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewColumnDef","new",0x4a171f68,"haxe.ui.toolkit.containers.TableViewColumnDef.new","haxe/ui/toolkit/containers/TableView.hx",301,0x496fad85)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(305)
	this->calculatedWidth = (int)0;
	HX_STACK_LINE(304)
	this->width = (int)0;
	HX_STACK_LINE(303)
	this->type = HX_CSTRING("text");
}
;
	return null();
}

//TableViewColumnDef_obj::~TableViewColumnDef_obj() { }

Dynamic TableViewColumnDef_obj::__CreateEmpty() { return  new TableViewColumnDef_obj; }
hx::ObjectPtr< TableViewColumnDef_obj > TableViewColumnDef_obj::__new()
{  hx::ObjectPtr< TableViewColumnDef_obj > result = new TableViewColumnDef_obj();
	result->__construct();
	return result;}

Dynamic TableViewColumnDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TableViewColumnDef_obj > result = new TableViewColumnDef_obj();
	result->__construct();
	return result;}


TableViewColumnDef_obj::TableViewColumnDef_obj()
{
}

void TableViewColumnDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TableViewColumnDef);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(calculatedWidth,"calculatedWidth");
	HX_MARK_END_CLASS();
}

void TableViewColumnDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(calculatedWidth,"calculatedWidth");
}

Dynamic TableViewColumnDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"calculatedWidth") ) { return calculatedWidth; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TableViewColumnDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"calculatedWidth") ) { calculatedWidth=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TableViewColumnDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("calculatedWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TableViewColumnDef_obj,id),HX_CSTRING("id")},
	{hx::fsString,(int)offsetof(TableViewColumnDef_obj,type),HX_CSTRING("type")},
	{hx::fsFloat,(int)offsetof(TableViewColumnDef_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(TableViewColumnDef_obj,calculatedWidth),HX_CSTRING("calculatedWidth")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("type"),
	HX_CSTRING("width"),
	HX_CSTRING("calculatedWidth"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableViewColumnDef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableViewColumnDef_obj::__mClass,"__mClass");
};

#endif

Class TableViewColumnDef_obj::__mClass;

void TableViewColumnDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.TableViewColumnDef"), hx::TCanCast< TableViewColumnDef_obj> ,sStaticFields,sMemberFields,
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

void TableViewColumnDef_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
