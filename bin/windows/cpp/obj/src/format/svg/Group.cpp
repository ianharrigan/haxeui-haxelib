#include <hxcpp.h>

#ifndef INCLUDED_format_svg_DisplayElement
#include <format/svg/DisplayElement.h>
#endif
#ifndef INCLUDED_format_svg_Group
#include <format/svg/Group.h>
#endif
namespace format{
namespace svg{

Void Group_obj::__construct()
{
HX_STACK_FRAME("format.svg.Group","new",0x54a9f590,"format.svg.Group.new","format/svg/Group.hx",7,0x07dad262)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	this->name = HX_CSTRING("");
	HX_STACK_LINE(9)
	this->children = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//Group_obj::~Group_obj() { }

Dynamic Group_obj::__CreateEmpty() { return  new Group_obj; }
hx::ObjectPtr< Group_obj > Group_obj::__new()
{  hx::ObjectPtr< Group_obj > result = new Group_obj();
	result->__construct();
	return result;}

Dynamic Group_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Group_obj > result = new Group_obj();
	result->__construct();
	return result;}

bool Group_obj::hasGroup( ::String inName){
	HX_STACK_FRAME("format.svg.Group","hasGroup",0xbfb20a55,"format.svg.Group.hasGroup","format/svg/Group.hx",12,0x07dad262)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(12)
	::format::svg::Group _g = this->findGroup(inName);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(12)
	return (_g != null());
}


HX_DEFINE_DYNAMIC_FUNC1(Group_obj,hasGroup,return )

::format::svg::Group Group_obj::findGroup( ::String inName){
	HX_STACK_FRAME("format.svg.Group","findGroup",0x27f20d76,"format.svg.Group.findGroup","format/svg/Group.hx",14,0x07dad262)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(15)
	{
		HX_STACK_LINE(15)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		Array< ::Dynamic > _g1 = this->children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(15)
		while((true)){
			HX_STACK_LINE(15)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(15)
				break;
			}
			HX_STACK_LINE(15)
			::format::svg::DisplayElement child = _g1->__get(_g).StaticCast< ::format::svg::DisplayElement >();		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(15)
			++(_g);
			HX_STACK_LINE(16)
			switch( (int)(child->__Index())){
				case (int)1: {
					HX_STACK_LINE(16)
					::format::svg::Group group = (::format::svg::DisplayElement(child))->__Param(0);		HX_STACK_VAR(group,"group");
					HX_STACK_LINE(19)
					if (((group->name == inName))){
						HX_STACK_LINE(20)
						return group;
					}
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(23)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Group_obj,findGroup,return )


Group_obj::Group_obj()
{
}

void Group_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Group);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(children,"children");
	HX_MARK_END_CLASS();
}

void Group_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(children,"children");
}

Dynamic Group_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasGroup") ) { return hasGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"children") ) { return children; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"findGroup") ) { return findGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Group_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Group_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("children"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Group_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Group_obj,children),HX_CSTRING("children")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hasGroup"),
	HX_CSTRING("findGroup"),
	HX_CSTRING("name"),
	HX_CSTRING("children"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Group_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Group_obj::__mClass,"__mClass");
};

#endif

Class Group_obj::__mClass;

void Group_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.Group"), hx::TCanCast< Group_obj> ,sStaticFields,sMemberFields,
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

void Group_obj::__boot()
{
}

} // end namespace format
} // end namespace svg
