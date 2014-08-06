#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_LineStyle
#include <format/gfx/LineStyle.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
namespace format{
namespace gfx{

Void LineStyle_obj::__construct()
{
HX_STACK_FRAME("format.gfx.LineStyle","new",0x5ea5ff43,"format.gfx.LineStyle.new","format/gfx/LineStyle.hx",19,0xb351290f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	this->thickness = 1.0;
	HX_STACK_LINE(21)
	this->color = (int)0;
	HX_STACK_LINE(22)
	this->alpha = 1.0;
	HX_STACK_LINE(23)
	this->pixelHinting = false;
	HX_STACK_LINE(24)
	this->scaleMode = ::openfl::display::LineScaleMode_obj::NORMAL;
	HX_STACK_LINE(25)
	this->capsStyle = ::openfl::display::CapsStyle_obj::ROUND;
	HX_STACK_LINE(26)
	this->jointStyle = ::openfl::display::JointStyle_obj::ROUND;
	HX_STACK_LINE(27)
	this->miterLimit = 3.0;
}
;
	return null();
}

//LineStyle_obj::~LineStyle_obj() { }

Dynamic LineStyle_obj::__CreateEmpty() { return  new LineStyle_obj; }
hx::ObjectPtr< LineStyle_obj > LineStyle_obj::__new()
{  hx::ObjectPtr< LineStyle_obj > result = new LineStyle_obj();
	result->__construct();
	return result;}

Dynamic LineStyle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LineStyle_obj > result = new LineStyle_obj();
	result->__construct();
	return result;}


LineStyle_obj::LineStyle_obj()
{
}

void LineStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LineStyle);
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(pixelHinting,"pixelHinting");
	HX_MARK_MEMBER_NAME(scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(capsStyle,"capsStyle");
	HX_MARK_MEMBER_NAME(jointStyle,"jointStyle");
	HX_MARK_MEMBER_NAME(miterLimit,"miterLimit");
	HX_MARK_END_CLASS();
}

void LineStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(pixelHinting,"pixelHinting");
	HX_VISIT_MEMBER_NAME(scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(capsStyle,"capsStyle");
	HX_VISIT_MEMBER_NAME(jointStyle,"jointStyle");
	HX_VISIT_MEMBER_NAME(miterLimit,"miterLimit");
}

Dynamic LineStyle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return thickness; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"capsStyle") ) { return capsStyle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"jointStyle") ) { return jointStyle; }
		if (HX_FIELD_EQ(inName,"miterLimit") ) { return miterLimit; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pixelHinting") ) { return pixelHinting; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LineStyle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { thickness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { scaleMode=inValue.Cast< ::openfl::display::LineScaleMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"capsStyle") ) { capsStyle=inValue.Cast< ::openfl::display::CapsStyle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"jointStyle") ) { jointStyle=inValue.Cast< ::openfl::display::JointStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"miterLimit") ) { miterLimit=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"pixelHinting") ) { pixelHinting=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LineStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("thickness"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("pixelHinting"));
	outFields->push(HX_CSTRING("scaleMode"));
	outFields->push(HX_CSTRING("capsStyle"));
	outFields->push(HX_CSTRING("jointStyle"));
	outFields->push(HX_CSTRING("miterLimit"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LineStyle_obj,thickness),HX_CSTRING("thickness")},
	{hx::fsInt,(int)offsetof(LineStyle_obj,color),HX_CSTRING("color")},
	{hx::fsFloat,(int)offsetof(LineStyle_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsBool,(int)offsetof(LineStyle_obj,pixelHinting),HX_CSTRING("pixelHinting")},
	{hx::fsObject /*::openfl::display::LineScaleMode*/ ,(int)offsetof(LineStyle_obj,scaleMode),HX_CSTRING("scaleMode")},
	{hx::fsObject /*::openfl::display::CapsStyle*/ ,(int)offsetof(LineStyle_obj,capsStyle),HX_CSTRING("capsStyle")},
	{hx::fsObject /*::openfl::display::JointStyle*/ ,(int)offsetof(LineStyle_obj,jointStyle),HX_CSTRING("jointStyle")},
	{hx::fsFloat,(int)offsetof(LineStyle_obj,miterLimit),HX_CSTRING("miterLimit")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("thickness"),
	HX_CSTRING("color"),
	HX_CSTRING("alpha"),
	HX_CSTRING("pixelHinting"),
	HX_CSTRING("scaleMode"),
	HX_CSTRING("capsStyle"),
	HX_CSTRING("jointStyle"),
	HX_CSTRING("miterLimit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineStyle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineStyle_obj::__mClass,"__mClass");
};

#endif

Class LineStyle_obj::__mClass;

void LineStyle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.LineStyle"), hx::TCanCast< LineStyle_obj> ,sStaticFields,sMemberFields,
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

void LineStyle_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
