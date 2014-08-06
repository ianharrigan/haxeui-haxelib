#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void Image_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","new",0x324424f7,"haxe.ui.toolkit.controls.Image.new","haxe/ui/toolkit/controls/Image.hx",13,0x7d32f399)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->_autoDisposeBitmapData = false;
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	this->set_autoSize(true);
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new()
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct();
	return result;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > result = new Image_obj();
	result->__construct();
	return result;}

hx::Object *Image_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	return super::__ToInterface(inType);
}

Void Image_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","initialize",0x22fead99,"haxe.ui.toolkit.controls.Image.initialize","haxe/ui/toolkit/controls/Image.hx",28,0x7d32f399)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		this->super::initialize();
		HX_STACK_LINE(31)
		if (((this->_bmp != null()))){
			HX_STACK_LINE(32)
			this->get_sprite()->addChild(this->_bmp);
			HX_STACK_LINE(33)
			Float _g = this->get_height();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			Float _g1 = this->_bmp->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(33)
			if (((_g > _g1))){
				HX_STACK_LINE(34)
				Float _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(34)
				Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(34)
				Float _g4 = this->_bmp->get_height();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(34)
				Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(34)
				Float _g6 = (_g3 - _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(34)
				int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(34)
				this->_bmp->set_y(_g7);
			}
		}
	}
return null();
}


Void Image_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","dispose",0x3f786cb6,"haxe.ui.toolkit.controls.Image.dispose","haxe/ui/toolkit/controls/Image.hx",42,0x7d32f399)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		if (((this->_bmp != null()))){
			HX_STACK_LINE(44)
			if (((this->_autoDisposeBitmapData == true))){
				HX_STACK_LINE(45)
				this->_bmp->bitmapData->dispose();
			}
			HX_STACK_LINE(47)
			this->get_sprite()->removeChild(this->_bmp);
			HX_STACK_LINE(48)
			this->_bmp = null();
		}
		HX_STACK_LINE(50)
		this->super::dispose();
	}
return null();
}


Void Image_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","invalidate",0xbd6d95c4,"haxe.ui.toolkit.controls.Image.invalidate","haxe/ui/toolkit/controls/Image.hx",53,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(54)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(56)
		if (((((int(type) & int((int)256))) == (int)256))){
			HX_STACK_LINE(57)
			if (((bool(this->_stretch) && bool((this->_bmp != null()))))){
				HX_STACK_LINE(58)
				Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(58)
				this->_bmp->set_width(_g);
				HX_STACK_LINE(59)
				Float _g1 = this->get_height();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(59)
				this->_bmp->set_height(_g1);
			}
		}
	}
return null();
}


Dynamic Image_obj::get_value( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","get_value",0x4d723b9f,"haxe.ui.toolkit.controls.Image.get_value","haxe/ui/toolkit/controls/Image.hx",65,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	return this->get_resource();
}


Dynamic Image_obj::set_value( Dynamic newValue){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","set_value",0x30c327ab,"haxe.ui.toolkit.controls.Image.set_value","haxe/ui/toolkit/controls/Image.hx",68,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newValue,"newValue")
	HX_STACK_LINE(69)
	this->set_resource(newValue);
	HX_STACK_LINE(70)
	return newValue;
}


Dynamic Image_obj::get_resource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","get_resource",0xb30bf160,"haxe.ui.toolkit.controls.Image.get_resource","haxe/ui/toolkit/controls/Image.hx",87,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	return this->_resource;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_resource,return )

Dynamic Image_obj::set_resource( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","set_resource",0xc80514d4,"haxe.ui.toolkit.controls.Image.set_resource","haxe/ui/toolkit/controls/Image.hx",90,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(91)
	if (((this->_bmp != null()))){
		HX_STACK_LINE(92)
		if (((this->_autoDisposeBitmapData == true))){
			HX_STACK_LINE(93)
			this->_bmp->bitmapData->dispose();
		}
		HX_STACK_LINE(95)
		this->get_sprite()->removeChild(this->_bmp);
		HX_STACK_LINE(96)
		this->_bmp = null();
	}
	HX_STACK_LINE(99)
	::openfl::display::BitmapData bmpData = null();		HX_STACK_VAR(bmpData,"bmpData");
	HX_STACK_LINE(100)
	if ((::Std_obj::is(value,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(101)
		::String _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(101)
		_g = hx::TCast< String >::cast(value);
		HX_STACK_LINE(101)
		::openfl::display::BitmapData _g1 = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getBitmapData(_g,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		bmpData = _g1;
	}
	else{
		HX_STACK_LINE(102)
		if ((::Std_obj::is(value,hx::ClassOf< ::openfl::display::Bitmap >()))){
			HX_STACK_LINE(103)
			bmpData = (hx::TCast< openfl::display::Bitmap >::cast(value))->bitmapData;
		}
		else{
			HX_STACK_LINE(104)
			if ((::Std_obj::is(value,hx::ClassOf< ::openfl::display::BitmapData >()))){
				HX_STACK_LINE(105)
				::openfl::display::BitmapData _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(105)
				_g2 = hx::TCast< openfl::display::BitmapData >::cast(value);
				HX_STACK_LINE(105)
				bmpData = _g2;
			}
		}
	}
	HX_STACK_LINE(108)
	if (((bmpData != null()))){
		HX_STACK_LINE(109)
		::openfl::display::Bitmap _g3 = ::openfl::display::Bitmap_obj::__new(bmpData,null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(109)
		this->_bmp = _g3;
		HX_STACK_LINE(110)
		this->get_sprite()->addChild(this->_bmp);
		HX_STACK_LINE(111)
		bool _g4 = this->get_autoSize();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(111)
		if (((_g4 == true))){
			HX_STACK_LINE(112)
			int _g5 = bmpData->get_width();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(112)
			this->set_width(_g5);
			HX_STACK_LINE(113)
			int _g6 = bmpData->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(113)
			this->set_height(_g6);
		}
	}
	HX_STACK_LINE(117)
	this->_resource = value;
	HX_STACK_LINE(118)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_resource,return )

bool Image_obj::get_stretch( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","get_stretch",0xc116e1b3,"haxe.ui.toolkit.controls.Image.get_stretch","haxe/ui/toolkit/controls/Image.hx",122,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	return this->_stretch;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_stretch,return )

bool Image_obj::set_stretch( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","set_stretch",0xcb83e8bf,"haxe.ui.toolkit.controls.Image.set_stretch","haxe/ui/toolkit/controls/Image.hx",125,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(126)
	if (((this->_stretch == value))){
		HX_STACK_LINE(127)
		return value;
	}
	HX_STACK_LINE(129)
	this->_stretch = value;
	HX_STACK_LINE(130)
	this->invalidate((int)256,null());
	HX_STACK_LINE(131)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_stretch,return )

bool Image_obj::get_autoDisposeBitmapData( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","get_autoDisposeBitmapData",0xb2fce2f7,"haxe.ui.toolkit.controls.Image.get_autoDisposeBitmapData","haxe/ui/toolkit/controls/Image.hx",135,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	return this->_autoDisposeBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_autoDisposeBitmapData,return )

bool Image_obj::set_autoDisposeBitmapData( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","set_autoDisposeBitmapData",0x1f53a703,"haxe.ui.toolkit.controls.Image.set_autoDisposeBitmapData","haxe/ui/toolkit/controls/Image.hx",138,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(139)
	this->_autoDisposeBitmapData = value;
	HX_STACK_LINE(140)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_autoDisposeBitmapData,return )

Dynamic Image_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","clone",0x1682fbb4,"haxe.ui.toolkit.controls.Image.clone","haxe/ui/toolkit/controls/Image.hx",1,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::Image c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	Dynamic _g = this->get_resource();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_resource(_g);
	HX_STACK_LINE(4)
	bool _g1 = this->get_stretch();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(4)
	c->set_stretch(_g1);
	HX_STACK_LINE(5)
	bool _g2 = this->get_autoDisposeBitmapData();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(5)
	c->set_autoDisposeBitmapData(_g2);
	HX_STACK_LINE(6)
	return c;
}


Dynamic Image_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.Image","self",0xccaa3b15,"haxe.ui.toolkit.controls.Image.self","haxe/ui/toolkit/controls/Image.hx",2,0x7d32f399)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::Image_obj::__new();
}



Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(_bmp,"_bmp");
	HX_MARK_MEMBER_NAME(_resource,"_resource");
	HX_MARK_MEMBER_NAME(_stretch,"_stretch");
	HX_MARK_MEMBER_NAME(_autoDisposeBitmapData,"_autoDisposeBitmapData");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bmp,"_bmp");
	HX_VISIT_MEMBER_NAME(_resource,"_resource");
	HX_VISIT_MEMBER_NAME(_stretch,"_stretch");
	HX_VISIT_MEMBER_NAME(_autoDisposeBitmapData,"_autoDisposeBitmapData");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Image_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_bmp") ) { return _bmp; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"stretch") ) { return get_stretch(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stretch") ) { return _stretch; }
		if (HX_FIELD_EQ(inName,"resource") ) { return get_resource(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resource") ) { return _resource; }
		if (HX_FIELD_EQ(inName,"get_value") ) { return get_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_stretch") ) { return get_stretch_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stretch") ) { return set_stretch_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_resource") ) { return get_resource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_resource") ) { return set_resource_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"autoDisposeBitmapData") ) { return get_autoDisposeBitmapData(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_autoDisposeBitmapData") ) { return _autoDisposeBitmapData; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_autoDisposeBitmapData") ) { return get_autoDisposeBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoDisposeBitmapData") ) { return set_autoDisposeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_bmp") ) { _bmp=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stretch") ) { return set_stretch(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_stretch") ) { _stretch=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resource") ) { return set_resource(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_resource") ) { _resource=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"autoDisposeBitmapData") ) { return set_autoDisposeBitmapData(inValue); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_autoDisposeBitmapData") ) { _autoDisposeBitmapData=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_bmp"));
	outFields->push(HX_CSTRING("_resource"));
	outFields->push(HX_CSTRING("_stretch"));
	outFields->push(HX_CSTRING("_autoDisposeBitmapData"));
	outFields->push(HX_CSTRING("resource"));
	outFields->push(HX_CSTRING("stretch"));
	outFields->push(HX_CSTRING("autoDisposeBitmapData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Image_obj,_bmp),HX_CSTRING("_bmp")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Image_obj,_resource),HX_CSTRING("_resource")},
	{hx::fsBool,(int)offsetof(Image_obj,_stretch),HX_CSTRING("_stretch")},
	{hx::fsBool,(int)offsetof(Image_obj,_autoDisposeBitmapData),HX_CSTRING("_autoDisposeBitmapData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_bmp"),
	HX_CSTRING("_resource"),
	HX_CSTRING("_stretch"),
	HX_CSTRING("_autoDisposeBitmapData"),
	HX_CSTRING("initialize"),
	HX_CSTRING("dispose"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("get_value"),
	HX_CSTRING("set_value"),
	HX_CSTRING("get_resource"),
	HX_CSTRING("set_resource"),
	HX_CSTRING("get_stretch"),
	HX_CSTRING("set_stretch"),
	HX_CSTRING("get_autoDisposeBitmapData"),
	HX_CSTRING("set_autoDisposeBitmapData"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
};

#endif

Class Image_obj::__mClass;

void Image_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.Image"), hx::TCanCast< Image_obj> ,sStaticFields,sMemberFields,
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

void Image_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
