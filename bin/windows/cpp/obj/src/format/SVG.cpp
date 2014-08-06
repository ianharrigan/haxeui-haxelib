#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_SVG
#include <format/SVG.h>
#endif
#ifndef INCLUDED_format_svg_Group
#include <format/svg/Group.h>
#endif
#ifndef INCLUDED_format_svg_SVGData
#include <format/svg/SVGData.h>
#endif
#ifndef INCLUDED_format_svg_SVGRenderer
#include <format/svg/SVGRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace format{

Void SVG_obj::__construct(::String content)
{
HX_STACK_FRAME("format.SVG","new",0x8c78f8ff,"format.SVG.new","format/SVG.hx",17,0xed5ee212)
HX_STACK_THIS(this)
HX_STACK_ARG(content,"content")
{
	HX_STACK_LINE(19)
	::Xml _g = ::Xml_obj::parse(content);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	::format::svg::SVGData _g1 = ::format::svg::SVGData_obj::__new(_g,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(19)
	this->data = _g1;
}
;
	return null();
}

//SVG_obj::~SVG_obj() { }

Dynamic SVG_obj::__CreateEmpty() { return  new SVG_obj; }
hx::ObjectPtr< SVG_obj > SVG_obj::__new(::String content)
{  hx::ObjectPtr< SVG_obj > result = new SVG_obj();
	result->__construct(content);
	return result;}

Dynamic SVG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SVG_obj > result = new SVG_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SVG_obj::render( ::openfl::display::Graphics graphics,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
int width = __o_width.Default(-1);
int height = __o_height.Default(-1);
	HX_STACK_FRAME("format.SVG","render",0xb7c63017,"format.SVG.render","format/SVG.hx",24,0xed5ee212)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(26)
		::openfl::geom::Matrix matrix = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
		HX_STACK_LINE(27)
		matrix->identity();
		HX_STACK_LINE(28)
		matrix->translate(x,y);
		HX_STACK_LINE(30)
		if (((bool((width > (int)-1)) && bool((height > (int)-1))))){
			HX_STACK_LINE(32)
			matrix->scale((Float(width) / Float(this->data->width)),(Float(height) / Float(this->data->height)));
		}
		HX_STACK_LINE(36)
		::format::svg::SVGRenderer renderer = ::format::svg::SVGRenderer_obj::__new(this->data,null());		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(37)
		renderer->render(graphics,matrix,null(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SVG_obj,render,(void))


SVG_obj::SVG_obj()
{
}

void SVG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SVG);
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void SVG_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
}

Dynamic SVG_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SVG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::format::svg::SVGData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SVG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::format::svg::SVGData*/ ,(int)offsetof(SVG_obj,data),HX_CSTRING("data")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	HX_CSTRING("render"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SVG_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SVG_obj::__mClass,"__mClass");
};

#endif

Class SVG_obj::__mClass;

void SVG_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.SVG"), hx::TCanCast< SVG_obj> ,sStaticFields,sMemberFields,
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

void SVG_obj::__boot()
{
}

} // end namespace format
