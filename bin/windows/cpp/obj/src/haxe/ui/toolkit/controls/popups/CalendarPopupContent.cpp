#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_CalendarView
#include <haxe/ui/toolkit/containers/CalendarView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_CalendarPopupContent
#include <haxe/ui/toolkit/controls/popups/CalendarPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{

Void CalendarPopupContent_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","new",0x29b0682e,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.new","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",8,0x98ae1461)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
	HX_STACK_LINE(11)
	::haxe::ui::toolkit::containers::CalendarView _g = ::haxe::ui::toolkit::containers::CalendarView_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(11)
	this->_cal = _g;
	HX_STACK_LINE(12)
	this->_cal->set_percentWidth((int)100);
}
;
	return null();
}

//CalendarPopupContent_obj::~CalendarPopupContent_obj() { }

Dynamic CalendarPopupContent_obj::__CreateEmpty() { return  new CalendarPopupContent_obj; }
hx::ObjectPtr< CalendarPopupContent_obj > CalendarPopupContent_obj::__new()
{  hx::ObjectPtr< CalendarPopupContent_obj > result = new CalendarPopupContent_obj();
	result->__construct();
	return result;}

Dynamic CalendarPopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CalendarPopupContent_obj > result = new CalendarPopupContent_obj();
	result->__construct();
	return result;}

Void CalendarPopupContent_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","initialize",0xaec74f42,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.initialize","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",18,0x98ae1461)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		this->super::initialize();
		HX_STACK_LINE(21)
		this->addChild(this->_cal);
		HX_STACK_LINE(22)
		Float _g = this->_cal->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(22)
		this->set_height(_g);
	}
return null();
}


::Date CalendarPopupContent_obj::get_selectedDate( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","get_selectedDate",0xe8668224,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.get_selectedDate","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",31,0x98ae1461)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return this->_cal->get_selectedDate();
}


HX_DEFINE_DYNAMIC_FUNC0(CalendarPopupContent_obj,get_selectedDate,return )

::Date CalendarPopupContent_obj::set_selectedDate( ::Date value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","set_selectedDate",0x3ea86f98,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.set_selectedDate","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",34,0x98ae1461)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(35)
	this->_cal->set_selectedDate(value);
	HX_STACK_LINE(36)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(CalendarPopupContent_obj,set_selectedDate,return )

Dynamic CalendarPopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","clone",0xf3efbaab,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.clone","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",1,0x98ae1461)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::CalendarPopupContent c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic CalendarPopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.CalendarPopupContent","self",0x53f8c7fe,"haxe.ui.toolkit.controls.popups.CalendarPopupContent.self","haxe/ui/toolkit/controls/popups/CalendarPopupContent.hx",2,0x98ae1461)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::popups::CalendarPopupContent_obj::__new();
}



CalendarPopupContent_obj::CalendarPopupContent_obj()
{
}

void CalendarPopupContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CalendarPopupContent);
	HX_MARK_MEMBER_NAME(_cal,"_cal");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CalendarPopupContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cal,"_cal");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CalendarPopupContent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_cal") ) { return _cal; }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { return get_selectedDate(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_selectedDate") ) { return get_selectedDate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedDate") ) { return set_selectedDate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CalendarPopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_cal") ) { _cal=inValue.Cast< ::haxe::ui::toolkit::containers::CalendarView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedDate") ) { return set_selectedDate(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CalendarPopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_cal"));
	outFields->push(HX_CSTRING("selectedDate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::CalendarView*/ ,(int)offsetof(CalendarPopupContent_obj,_cal),HX_CSTRING("_cal")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_cal"),
	HX_CSTRING("initialize"),
	HX_CSTRING("get_selectedDate"),
	HX_CSTRING("set_selectedDate"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CalendarPopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CalendarPopupContent_obj::__mClass,"__mClass");
};

#endif

Class CalendarPopupContent_obj::__mClass;

void CalendarPopupContent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.popups.CalendarPopupContent"), hx::TCanCast< CalendarPopupContent_obj> ,sStaticFields,sMemberFields,
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

void CalendarPopupContent_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace popups
