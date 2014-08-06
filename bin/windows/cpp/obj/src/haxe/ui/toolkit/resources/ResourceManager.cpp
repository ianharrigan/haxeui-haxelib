#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_format_SVG
#include <format/SVG.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_ByteConverter
#include <haxe/ui/toolkit/util/ByteConverter.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
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
#ifndef INCLUDED_openfl_display_Loader
#include <openfl/display/Loader.h>
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
#ifndef INCLUDED_openfl_system_LoaderContext
#include <openfl/system/LoaderContext.h>
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
namespace resources{

Void ResourceManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","new",0x8fd45c86,"haxe.ui.toolkit.resources.ResourceManager.new","haxe/ui/toolkit/resources/ResourceManager.hx",27,0xfdcf000c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ResourceManager_obj::~ResourceManager_obj() { }

Dynamic ResourceManager_obj::__CreateEmpty() { return  new ResourceManager_obj; }
hx::ObjectPtr< ResourceManager_obj > ResourceManager_obj::__new()
{  hx::ObjectPtr< ResourceManager_obj > result = new ResourceManager_obj();
	result->__construct();
	return result;}

Dynamic ResourceManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResourceManager_obj > result = new ResourceManager_obj();
	result->__construct();
	return result;}

bool ResourceManager_obj::hasAsset( ::String resouceId){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","hasAsset",0x1b255e50,"haxe.ui.toolkit.resources.ResourceManager.hasAsset","haxe/ui/toolkit/resources/ResourceManager.hx",32,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resouceId,"resouceId")
	HX_STACK_LINE(32)
	return ::openfl::Assets_obj::exists(resouceId,null());
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,hasAsset,return )

::Xml ResourceManager_obj::getXML( ::String resourceId,::String locale){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","getXML",0x66a79a7b,"haxe.ui.toolkit.resources.ResourceManager.getXML","haxe/ui/toolkit/resources/ResourceManager.hx",35,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(locale,"locale")
	HX_STACK_LINE(36)
	::String text = this->getText(resourceId,locale);		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(37)
	::Xml xml = null();		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(38)
	if (((text != null()))){
		HX_STACK_LINE(39)
		::Xml _g = ::Xml_obj::parse(text);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		xml = _g;
	}
	HX_STACK_LINE(41)
	return xml;
}


HX_DEFINE_DYNAMIC_FUNC2(ResourceManager_obj,getXML,return )

::String ResourceManager_obj::getText( ::String resourceId,::String locale){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","getText",0x696d1389,"haxe.ui.toolkit.resources.ResourceManager.getText","haxe/ui/toolkit/resources/ResourceManager.hx",44,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(locale,"locale")
	HX_STACK_LINE(45)
	::String str = ::haxe::Resource_obj::getString(resourceId);		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(46)
	if (((str == null()))){
		HX_STACK_LINE(47)
		::String _g = ::openfl::Assets_obj::getText(resourceId);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		str = _g;
	}
	HX_STACK_LINE(49)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC2(ResourceManager_obj,getText,return )

::format::SVG ResourceManager_obj::getSVG( ::String resourceId,::String locale){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","getSVG",0x66a3d708,"haxe.ui.toolkit.resources.ResourceManager.getSVG","haxe/ui/toolkit/resources/ResourceManager.hx",53,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(locale,"locale")
	HX_STACK_LINE(54)
	::String text = this->getText(resourceId,locale);		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(55)
	::format::SVG svg = null();		HX_STACK_VAR(svg,"svg");
	HX_STACK_LINE(56)
	if (((text != null()))){
		HX_STACK_LINE(57)
		::format::SVG _g = ::format::SVG_obj::__new(text);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		svg = _g;
	}
	HX_STACK_LINE(59)
	return svg;
}


HX_DEFINE_DYNAMIC_FUNC2(ResourceManager_obj,getSVG,return )

::openfl::display::BitmapData ResourceManager_obj::getBitmapData( ::String resourceId,::String locale){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","getBitmapData",0x435e8995,"haxe.ui.toolkit.resources.ResourceManager.getBitmapData","haxe/ui/toolkit/resources/ResourceManager.hx",63,0xfdcf000c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(resourceId,"resourceId")
	HX_STACK_ARG(locale,"locale")
	HX_STACK_LINE(64)
	if (((bool((resourceId == null())) || bool((resourceId.length == (int)0))))){
		HX_STACK_LINE(65)
		return null();
	}
	HX_STACK_LINE(68)
	::openfl::display::BitmapData bmp = null();		HX_STACK_VAR(bmp,"bmp");
	HX_STACK_LINE(70)
	::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(resourceId);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(71)
	if (((bytes != null()))){
		HX_STACK_LINE(72)
		::openfl::utils::ByteArray ba = ::haxe::ui::toolkit::util::ByteConverter_obj::fromHaxeBytes(bytes);		HX_STACK_VAR(ba,"ba");
		HX_STACK_LINE(73)
		::openfl::display::Loader loader = ::openfl::display::Loader_obj::__new();		HX_STACK_VAR(loader,"loader");
		HX_STACK_LINE(74)
		loader->loadBytes(ba,null());
		HX_STACK_LINE(75)
		if (((loader->content != null()))){
			HX_STACK_LINE(76)
			bmp = (hx::TCast< openfl::display::Bitmap >::cast(loader->content))->bitmapData;
		}
	}
	else{
		HX_STACK_LINE(79)
		::openfl::display::BitmapData _g = ::openfl::Assets_obj::getBitmapData(resourceId,true);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		bmp = _g;
	}
	HX_STACK_LINE(84)
	return bmp;
}


HX_DEFINE_DYNAMIC_FUNC2(ResourceManager_obj,getBitmapData,return )

Void ResourceManager_obj::reset( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","reset",0xc0a0ab75,"haxe.ui.toolkit.resources.ResourceManager.reset","haxe/ui/toolkit/resources/ResourceManager.hx",87,0xfdcf000c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ResourceManager_obj,reset,(void))

::haxe::ui::toolkit::resources::ResourceManager ResourceManager_obj::_instance;

::haxe::ui::toolkit::resources::ResourceManager ResourceManager_obj::instance;

::haxe::ui::toolkit::resources::ResourceManager ResourceManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.resources.ResourceManager","get_instance",0xd41692b8,"haxe.ui.toolkit.resources.ResourceManager.get_instance","haxe/ui/toolkit/resources/ResourceManager.hx",17,0xfdcf000c)
	HX_STACK_LINE(18)
	if (((::haxe::ui::toolkit::resources::ResourceManager_obj::_instance == null()))){
		HX_STACK_LINE(19)
		::haxe::ui::toolkit::resources::ResourceManager _g = ::haxe::ui::toolkit::resources::ResourceManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		::haxe::ui::toolkit::resources::ResourceManager_obj::_instance = _g;
	}
	HX_STACK_LINE(21)
	return ::haxe::ui::toolkit::resources::ResourceManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ResourceManager_obj,get_instance,return )


ResourceManager_obj::ResourceManager_obj()
{
}

Dynamic ResourceManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getXML") ) { return getXML_dyn(); }
		if (HX_FIELD_EQ(inName,"getSVG") ) { return getSVG_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"hasAsset") ) { return hasAsset_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ResourceManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::resources::ResourceManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::resources::ResourceManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResourceManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hasAsset"),
	HX_CSTRING("getXML"),
	HX_CSTRING("getText"),
	HX_CSTRING("getSVG"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("reset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResourceManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ResourceManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ResourceManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourceManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ResourceManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ResourceManager_obj::instance,"instance");
};

#endif

Class ResourceManager_obj::__mClass;

void ResourceManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.resources.ResourceManager"), hx::TCanCast< ResourceManager_obj> ,sStaticFields,sMemberFields,
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

void ResourceManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace resources
