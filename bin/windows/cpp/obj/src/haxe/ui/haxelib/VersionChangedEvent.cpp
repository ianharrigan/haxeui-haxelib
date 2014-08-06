#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_haxelib_VersionChangedEvent
#include <haxe/ui/haxelib/VersionChangedEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace haxelib{

Void VersionChangedEvent_obj::__construct(Dynamic project)
{
HX_STACK_FRAME("haxe.ui.haxelib.VersionChangedEvent","new",0x2c3f782f,"haxe.ui.haxelib.VersionChangedEvent.new","haxe/ui/haxelib/UIManager.hx",101,0xd8089507)
HX_STACK_THIS(this)
HX_STACK_ARG(project,"project")
{
	HX_STACK_LINE(102)
	super::__construct(HX_CSTRING("VersionChanged"),false,false);
	HX_STACK_LINE(103)
	this->project = project;
}
;
	return null();
}

//VersionChangedEvent_obj::~VersionChangedEvent_obj() { }

Dynamic VersionChangedEvent_obj::__CreateEmpty() { return  new VersionChangedEvent_obj; }
hx::ObjectPtr< VersionChangedEvent_obj > VersionChangedEvent_obj::__new(Dynamic project)
{  hx::ObjectPtr< VersionChangedEvent_obj > result = new VersionChangedEvent_obj();
	result->__construct(project);
	return result;}

Dynamic VersionChangedEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VersionChangedEvent_obj > result = new VersionChangedEvent_obj();
	result->__construct(inArgs[0]);
	return result;}


VersionChangedEvent_obj::VersionChangedEvent_obj()
{
}

void VersionChangedEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VersionChangedEvent);
	HX_MARK_MEMBER_NAME(project,"project");
	::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VersionChangedEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(project,"project");
	::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VersionChangedEvent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VersionChangedEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { project=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VersionChangedEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("project"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(VersionChangedEvent_obj,project),HX_CSTRING("project")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("project"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VersionChangedEvent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VersionChangedEvent_obj::__mClass,"__mClass");
};

#endif

Class VersionChangedEvent_obj::__mClass;

void VersionChangedEvent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.VersionChangedEvent"), hx::TCanCast< VersionChangedEvent_obj> ,sStaticFields,sMemberFields,
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

void VersionChangedEvent_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
