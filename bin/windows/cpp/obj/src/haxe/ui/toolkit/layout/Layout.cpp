#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace layout{

Void Layout_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","new",0x3c7676fe,"haxe.ui.toolkit.layout.Layout.new","haxe/ui/toolkit/layout/Layout.hx",10,0xbf2052b2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->_spacingY = (int)0;
	HX_STACK_LINE(13)
	this->_spacingX = (int)0;
	HX_STACK_LINE(17)
	::openfl::geom::Rectangle _g = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	this->_padding = _g;
}
;
	return null();
}

//Layout_obj::~Layout_obj() { }

Dynamic Layout_obj::__CreateEmpty() { return  new Layout_obj; }
hx::ObjectPtr< Layout_obj > Layout_obj::__new()
{  hx::ObjectPtr< Layout_obj > result = new Layout_obj();
	result->__construct();
	return result;}

Dynamic Layout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layout_obj > result = new Layout_obj();
	result->__construct();
	return result;}

hx::Object *Layout_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::ILayout_obj)) return operator ::haxe::ui::toolkit::core::interfaces::ILayout_obj *();
	return super::__ToInterface(inType);
}

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer Layout_obj::get_container( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_container",0xbe4ba136,"haxe.ui.toolkit.layout.Layout.get_container","haxe/ui/toolkit/layout/Layout.hx",32,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	return this->_container;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_container,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer Layout_obj::set_container( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","set_container",0x03518342,"haxe.ui.toolkit.layout.Layout.set_container","haxe/ui/toolkit/layout/Layout.hx",35,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(36)
	this->_container = value;
	HX_STACK_LINE(37)
	this->refresh();
	HX_STACK_LINE(38)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_container,return )

::openfl::geom::Rectangle Layout_obj::get_padding( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_padding",0x3faf2e86,"haxe.ui.toolkit.layout.Layout.get_padding","haxe/ui/toolkit/layout/Layout.hx",42,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return this->_padding;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_padding,return )

::openfl::geom::Rectangle Layout_obj::set_padding( ::openfl::geom::Rectangle value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","set_padding",0x4a1c3592,"haxe.ui.toolkit.layout.Layout.set_padding","haxe/ui/toolkit/layout/Layout.hx",45,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(46)
	this->_padding = value;
	HX_STACK_LINE(47)
	this->refresh();
	HX_STACK_LINE(48)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_padding,return )

int Layout_obj::get_spacingX( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_spacingX",0xce7a2920,"haxe.ui.toolkit.layout.Layout.get_spacingX","haxe/ui/toolkit/layout/Layout.hx",52,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return this->_spacingX;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_spacingX,return )

int Layout_obj::set_spacingX( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","set_spacingX",0xe3734c94,"haxe.ui.toolkit.layout.Layout.set_spacingX","haxe/ui/toolkit/layout/Layout.hx",55,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(56)
	this->_spacingX = value;
	HX_STACK_LINE(57)
	this->refresh();
	HX_STACK_LINE(58)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_spacingX,return )

int Layout_obj::get_spacingY( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_spacingY",0xce7a2921,"haxe.ui.toolkit.layout.Layout.get_spacingY","haxe/ui/toolkit/layout/Layout.hx",62,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->_spacingY;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_spacingY,return )

int Layout_obj::set_spacingY( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","set_spacingY",0xe3734c95,"haxe.ui.toolkit.layout.Layout.set_spacingY","haxe/ui/toolkit/layout/Layout.hx",65,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	this->_spacingY = value;
	HX_STACK_LINE(67)
	this->refresh();
	HX_STACK_LINE(68)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Layout_obj,set_spacingY,return )

Void Layout_obj::refresh( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","refresh",0x5fde2779,"haxe.ui.toolkit.layout.Layout.refresh","haxe/ui/toolkit/layout/Layout.hx",71,0xbf2052b2)
		HX_STACK_THIS(this)
		HX_STACK_LINE(72)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g = this->get_container();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		if (((  (((_g != null()))) ? bool(this->get_container()->__Field(HX_CSTRING("get_ready"),true)()) : bool(false) ))){
			HX_STACK_LINE(73)
			this->resizeChildren();
			HX_STACK_LINE(74)
			this->repositionChildren();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,refresh,(void))

Void Layout_obj::resizeChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","resizeChildren",0x49890575,"haxe.ui.toolkit.layout.Layout.resizeChildren","haxe/ui/toolkit/layout/Layout.hx",78,0xbf2052b2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,resizeChildren,(void))

Void Layout_obj::repositionChildren( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","repositionChildren",0x81487bdd,"haxe.ui.toolkit.layout.Layout.repositionChildren","haxe/ui/toolkit/layout/Layout.hx",81,0xbf2052b2)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,repositionChildren,(void))

Float Layout_obj::get_innerWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_innerWidth",0x6e78befb,"haxe.ui.toolkit.layout.Layout.get_innerWidth","haxe/ui/toolkit/layout/Layout.hx",93,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g = this->get_container();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(94)
	if (((_g == null()))){
		HX_STACK_LINE(95)
		return (int)0;
	}
	HX_STACK_LINE(97)
	Float _g1 = this->get_container()->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(97)
	Float _g2 = this->get_padding()->get_left();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(97)
	Float _g3 = this->get_padding()->get_right();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(97)
	Float _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(97)
	Float icx = (_g1 - _g4);		HX_STACK_VAR(icx,"icx");
	HX_STACK_LINE(98)
	return icx;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerWidth,return )

Float Layout_obj::get_innerHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_innerHeight",0xf17dd552,"haxe.ui.toolkit.layout.Layout.get_innerHeight","haxe/ui/toolkit/layout/Layout.hx",102,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g = this->get_container();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(103)
	if (((_g == null()))){
		HX_STACK_LINE(104)
		return (int)0;
	}
	HX_STACK_LINE(106)
	Float _g1 = this->get_container()->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(106)
	Float _g2 = this->get_padding()->get_top();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(106)
	Float _g3 = this->get_padding()->get_bottom();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(106)
	Float _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(106)
	Float icy = (_g1 - _g4);		HX_STACK_VAR(icy,"icy");
	HX_STACK_LINE(107)
	return icy;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_innerHeight,return )

Float Layout_obj::get_usableWidth( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_usableWidth",0xeabfdb23,"haxe.ui.toolkit.layout.Layout.get_usableWidth","haxe/ui/toolkit/layout/Layout.hx",111,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	Float ucx = this->get_innerWidth();		HX_STACK_VAR(ucx,"ucx");
	HX_STACK_LINE(113)
	return ucx;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableWidth,return )

Float Layout_obj::get_usableHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","get_usableHeight",0x336f5c2a,"haxe.ui.toolkit.layout.Layout.get_usableHeight","haxe/ui/toolkit/layout/Layout.hx",117,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	Float ucy = this->get_innerHeight();		HX_STACK_VAR(ucy,"ucy");
	HX_STACK_LINE(119)
	return ucy;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,get_usableHeight,return )

Dynamic Layout_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","clone",0xcf731d7b,"haxe.ui.toolkit.layout.Layout.clone","haxe/ui/toolkit/layout/Layout.hx",1,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::layout::Layout c = this->self();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	::openfl::geom::Rectangle _g = this->get_padding();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_padding(_g);
	HX_STACK_LINE(4)
	int _g1 = this->get_spacingX();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4)
	c->set_spacingX(_g1);
	HX_STACK_LINE(5)
	int _g2 = this->get_spacingY();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(5)
	c->set_spacingY(_g2);
	HX_STACK_LINE(6)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,clone,return )

Dynamic Layout_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.layout.Layout","self",0xae7faf2e,"haxe.ui.toolkit.layout.Layout.self","haxe/ui/toolkit/layout/Layout.hx",2,0xbf2052b2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::layout::Layout_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Layout_obj,self,return )


Layout_obj::Layout_obj()
{
}

void Layout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layout);
	HX_MARK_MEMBER_NAME(_container,"_container");
	HX_MARK_MEMBER_NAME(_padding,"_padding");
	HX_MARK_MEMBER_NAME(_spacingX,"_spacingX");
	HX_MARK_MEMBER_NAME(_spacingY,"_spacingY");
	HX_MARK_MEMBER_NAME(innerWidth,"innerWidth");
	HX_MARK_MEMBER_NAME(innerHeight,"innerHeight");
	HX_MARK_MEMBER_NAME(usableWidth,"usableWidth");
	HX_MARK_MEMBER_NAME(usableHeight,"usableHeight");
	HX_MARK_END_CLASS();
}

void Layout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_container,"_container");
	HX_VISIT_MEMBER_NAME(_padding,"_padding");
	HX_VISIT_MEMBER_NAME(_spacingX,"_spacingX");
	HX_VISIT_MEMBER_NAME(_spacingY,"_spacingY");
	HX_VISIT_MEMBER_NAME(innerWidth,"innerWidth");
	HX_VISIT_MEMBER_NAME(innerHeight,"innerHeight");
	HX_VISIT_MEMBER_NAME(usableWidth,"usableWidth");
	HX_VISIT_MEMBER_NAME(usableHeight,"usableHeight");
}

Dynamic Layout_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { return get_padding(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_padding") ) { return _padding; }
		if (HX_FIELD_EQ(inName,"spacingX") ) { return get_spacingX(); }
		if (HX_FIELD_EQ(inName,"spacingY") ) { return get_spacingY(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_spacingX") ) { return _spacingX; }
		if (HX_FIELD_EQ(inName,"_spacingY") ) { return _spacingY; }
		if (HX_FIELD_EQ(inName,"container") ) { return get_container(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { return _container; }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { return inCallProp ? get_innerWidth() : innerWidth; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_padding") ) { return get_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"set_padding") ) { return set_padding_dyn(); }
		if (HX_FIELD_EQ(inName,"innerHeight") ) { return inCallProp ? get_innerHeight() : innerHeight; }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { return inCallProp ? get_usableWidth() : usableWidth; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_spacingX") ) { return get_spacingX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacingX") ) { return set_spacingX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_spacingY") ) { return get_spacingY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_spacingY") ) { return set_spacingY_dyn(); }
		if (HX_FIELD_EQ(inName,"usableHeight") ) { return inCallProp ? get_usableHeight() : usableHeight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_container") ) { return get_container_dyn(); }
		if (HX_FIELD_EQ(inName,"set_container") ) { return set_container_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resizeChildren") ) { return resizeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_innerWidth") ) { return get_innerWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_innerHeight") ) { return get_innerHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_usableWidth") ) { return get_usableWidth_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_usableHeight") ) { return get_usableHeight_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"repositionChildren") ) { return repositionChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Layout_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"padding") ) { return set_padding(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_padding") ) { _padding=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spacingX") ) { return set_spacingX(inValue); }
		if (HX_FIELD_EQ(inName,"spacingY") ) { return set_spacingY(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_spacingX") ) { _spacingX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_spacingY") ) { _spacingY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"container") ) { return set_container(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_container") ) { _container=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"innerWidth") ) { innerWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"innerHeight") ) { innerHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"usableWidth") ) { usableWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usableHeight") ) { usableHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_container"));
	outFields->push(HX_CSTRING("_padding"));
	outFields->push(HX_CSTRING("_spacingX"));
	outFields->push(HX_CSTRING("_spacingY"));
	outFields->push(HX_CSTRING("container"));
	outFields->push(HX_CSTRING("padding"));
	outFields->push(HX_CSTRING("spacingX"));
	outFields->push(HX_CSTRING("spacingY"));
	outFields->push(HX_CSTRING("innerWidth"));
	outFields->push(HX_CSTRING("innerHeight"));
	outFields->push(HX_CSTRING("usableWidth"));
	outFields->push(HX_CSTRING("usableHeight"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer*/ ,(int)offsetof(Layout_obj,_container),HX_CSTRING("_container")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Layout_obj,_padding),HX_CSTRING("_padding")},
	{hx::fsInt,(int)offsetof(Layout_obj,_spacingX),HX_CSTRING("_spacingX")},
	{hx::fsInt,(int)offsetof(Layout_obj,_spacingY),HX_CSTRING("_spacingY")},
	{hx::fsFloat,(int)offsetof(Layout_obj,innerWidth),HX_CSTRING("innerWidth")},
	{hx::fsFloat,(int)offsetof(Layout_obj,innerHeight),HX_CSTRING("innerHeight")},
	{hx::fsFloat,(int)offsetof(Layout_obj,usableWidth),HX_CSTRING("usableWidth")},
	{hx::fsFloat,(int)offsetof(Layout_obj,usableHeight),HX_CSTRING("usableHeight")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_container"),
	HX_CSTRING("_padding"),
	HX_CSTRING("_spacingX"),
	HX_CSTRING("_spacingY"),
	HX_CSTRING("get_container"),
	HX_CSTRING("set_container"),
	HX_CSTRING("get_padding"),
	HX_CSTRING("set_padding"),
	HX_CSTRING("get_spacingX"),
	HX_CSTRING("set_spacingX"),
	HX_CSTRING("get_spacingY"),
	HX_CSTRING("set_spacingY"),
	HX_CSTRING("refresh"),
	HX_CSTRING("resizeChildren"),
	HX_CSTRING("repositionChildren"),
	HX_CSTRING("innerWidth"),
	HX_CSTRING("innerHeight"),
	HX_CSTRING("usableWidth"),
	HX_CSTRING("usableHeight"),
	HX_CSTRING("get_innerWidth"),
	HX_CSTRING("get_innerHeight"),
	HX_CSTRING("get_usableWidth"),
	HX_CSTRING("get_usableHeight"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layout_obj::__mClass,"__mClass");
};

#endif

Class Layout_obj::__mClass;

void Layout_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.layout.Layout"), hx::TCanCast< Layout_obj> ,sStaticFields,sMemberFields,
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

void Layout_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace layout
