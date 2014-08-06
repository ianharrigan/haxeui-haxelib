#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_GfxTextFinder
#include <format/gfx/GfxTextFinder.h>
#endif
#ifndef INCLUDED_format_svg_Text
#include <format/svg/Text.h>
#endif
namespace format{
namespace gfx{

Void GfxTextFinder_obj::__construct()
{
HX_STACK_FRAME("format.gfx.GfxTextFinder","new",0xec4f6472,"format.gfx.GfxTextFinder.new","format/gfx/GfxTextFinder.hx",9,0x33f5a7c0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
}
;
	return null();
}

//GfxTextFinder_obj::~GfxTextFinder_obj() { }

Dynamic GfxTextFinder_obj::__CreateEmpty() { return  new GfxTextFinder_obj; }
hx::ObjectPtr< GfxTextFinder_obj > GfxTextFinder_obj::__new()
{  hx::ObjectPtr< GfxTextFinder_obj > result = new GfxTextFinder_obj();
	result->__construct();
	return result;}

Dynamic GfxTextFinder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GfxTextFinder_obj > result = new GfxTextFinder_obj();
	result->__construct();
	return result;}

bool GfxTextFinder_obj::geometryOnly( ){
	HX_STACK_FRAME("format.gfx.GfxTextFinder","geometryOnly",0x295f4eec,"format.gfx.GfxTextFinder.geometryOnly","format/gfx/GfxTextFinder.hx",11,0x33f5a7c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11)
	return true;
}


Void GfxTextFinder_obj::renderText( ::format::svg::Text inText){
{
		HX_STACK_FRAME("format.gfx.GfxTextFinder","renderText",0x72eeb951,"format.gfx.GfxTextFinder.renderText","format/gfx/GfxTextFinder.hx",12,0x33f5a7c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inText,"inText")
		HX_STACK_LINE(12)
		if (((this->text == null()))){
			HX_STACK_LINE(12)
			this->text = inText;
		}
	}
return null();
}



GfxTextFinder_obj::GfxTextFinder_obj()
{
}

void GfxTextFinder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GfxTextFinder);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_END_CLASS();
}

void GfxTextFinder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
}

Dynamic GfxTextFinder_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"renderText") ) { return renderText_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"geometryOnly") ) { return geometryOnly_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GfxTextFinder_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::format::svg::Text >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GfxTextFinder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("text"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::format::svg::Text*/ ,(int)offsetof(GfxTextFinder_obj,text),HX_CSTRING("text")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("text"),
	HX_CSTRING("geometryOnly"),
	HX_CSTRING("renderText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GfxTextFinder_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GfxTextFinder_obj::__mClass,"__mClass");
};

#endif

Class GfxTextFinder_obj::__mClass;

void GfxTextFinder_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.GfxTextFinder"), hx::TCanCast< GfxTextFinder_obj> ,sStaticFields,sMemberFields,
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

void GfxTextFinder_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
