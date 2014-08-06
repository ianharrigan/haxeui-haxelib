#include <hxcpp.h>

#ifndef INCLUDED_format_gfx_Gfx
#include <format/gfx/Gfx.h>
#endif
#ifndef INCLUDED_format_gfx_GfxExtent
#include <format/gfx/GfxExtent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace format{
namespace gfx{

Void GfxExtent_obj::__construct()
{
HX_STACK_FRAME("format.gfx.GfxExtent","new",0xe8f6c9e9,"format.gfx.GfxExtent.new","format/gfx/GfxExtent.hx",11,0x8292f529)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	super::__construct();
	HX_STACK_LINE(13)
	this->extent = null();
}
;
	return null();
}

//GfxExtent_obj::~GfxExtent_obj() { }

Dynamic GfxExtent_obj::__CreateEmpty() { return  new GfxExtent_obj; }
hx::ObjectPtr< GfxExtent_obj > GfxExtent_obj::__new()
{  hx::ObjectPtr< GfxExtent_obj > result = new GfxExtent_obj();
	result->__construct();
	return result;}

Dynamic GfxExtent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GfxExtent_obj > result = new GfxExtent_obj();
	result->__construct();
	return result;}

Void GfxExtent_obj::addExtent( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxExtent","addExtent",0x2edf4d34,"format.gfx.GfxExtent.addExtent","format/gfx/GfxExtent.hx",17,0x8292f529)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(18)
		if (((this->extent == null()))){
			HX_STACK_LINE(20)
			::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new(inX,inY,(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			this->extent = _g;
			HX_STACK_LINE(21)
			return null();
		}
		HX_STACK_LINE(23)
		Float _g1 = this->extent->get_left();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		if (((inX < _g1))){
			HX_STACK_LINE(23)
			this->extent->set_left(inX);
		}
		HX_STACK_LINE(24)
		Float _g2 = this->extent->get_right();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(24)
		if (((inX > _g2))){
			HX_STACK_LINE(24)
			this->extent->set_right(inX);
		}
		HX_STACK_LINE(25)
		Float _g3 = this->extent->get_top();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(25)
		if (((inY < _g3))){
			HX_STACK_LINE(25)
			this->extent->set_top(inY);
		}
		HX_STACK_LINE(26)
		Float _g4 = this->extent->get_bottom();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(26)
		if (((inY > _g4))){
			HX_STACK_LINE(26)
			this->extent->set_bottom(inY);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GfxExtent_obj,addExtent,(void))

bool GfxExtent_obj::geometryOnly( ){
	HX_STACK_FRAME("format.gfx.GfxExtent","geometryOnly",0xa3c10295,"format.gfx.GfxExtent.geometryOnly","format/gfx/GfxExtent.hx",30,0x8292f529)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	return true;
}


Void GfxExtent_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxExtent","moveTo",0x65f9b503,"format.gfx.GfxExtent.moveTo","format/gfx/GfxExtent.hx",33,0x8292f529)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(33)
		this->addExtent(inX,inY);
	}
return null();
}


Void GfxExtent_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxExtent","lineTo",0x85ed28a6,"format.gfx.GfxExtent.lineTo","format/gfx/GfxExtent.hx",37,0x8292f529)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(37)
		this->addExtent(inX,inY);
	}
return null();
}


Void GfxExtent_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_FRAME("format.gfx.GfxExtent","curveTo",0x58815213,"format.gfx.GfxExtent.curveTo","format/gfx/GfxExtent.hx",40,0x8292f529)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inCX,"inCX")
		HX_STACK_ARG(inCY,"inCY")
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(41)
		this->addExtent(inCX,inCY);
		HX_STACK_LINE(42)
		this->addExtent(inX,inY);
	}
return null();
}



GfxExtent_obj::GfxExtent_obj()
{
}

void GfxExtent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GfxExtent);
	HX_MARK_MEMBER_NAME(extent,"extent");
	HX_MARK_END_CLASS();
}

void GfxExtent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(extent,"extent");
}

Dynamic GfxExtent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"extent") ) { return extent; }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addExtent") ) { return addExtent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"geometryOnly") ) { return geometryOnly_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GfxExtent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"extent") ) { extent=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GfxExtent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("extent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(GfxExtent_obj,extent),HX_CSTRING("extent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("extent"),
	HX_CSTRING("addExtent"),
	HX_CSTRING("geometryOnly"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("lineTo"),
	HX_CSTRING("curveTo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GfxExtent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GfxExtent_obj::__mClass,"__mClass");
};

#endif

Class GfxExtent_obj::__mClass;

void GfxExtent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.gfx.GfxExtent"), hx::TCanCast< GfxExtent_obj> ,sStaticFields,sMemberFields,
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

void GfxExtent_obj::__boot()
{
}

} // end namespace format
} // end namespace gfx
