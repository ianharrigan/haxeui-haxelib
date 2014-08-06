#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_haxelib_UIManager
#include <haxe/ui/haxelib/UIManager.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_popups_QueryUserController
#include <haxe/ui/haxelib/popups/QueryUserController.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_popups_QueryUserRunner
#include <haxe/ui/haxelib/popups/QueryUserRunner.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ListView
#include <haxe/ui/toolkit/containers/ListView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TextInput
#include <haxe/ui/toolkit/controls/TextInput.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_XMLController
#include <haxe/ui/toolkit/core/XMLController.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDisplayObjectContainer
#include <haxe/ui/toolkit/core/interfaces/IDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDrawable
#include <haxe/ui/toolkit/core/interfaces/IDrawable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_AsyncThreadCaller
#include <haxe/ui/toolkit/util/pseudothreads/AsyncThreadCaller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace haxe{
namespace ui{
namespace haxelib{
namespace popups{

Void QueryUserController_obj::__construct(::String usernameToQuery)
{
HX_STACK_FRAME("haxe.ui.haxelib.popups.QueryUserController","new",0x712f96db,"haxe.ui.haxelib.popups.QueryUserController.new","haxe/ui/toolkit/core/Macros.hx",389,0x3fba9eca)
HX_STACK_THIS(this)
HX_STACK_ARG(usernameToQuery,"usernameToQuery")
{
	HX_STACK_LINE(24)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	super::__construct(HX_CSTRING("assets/ui/popups/query-user.xml"));
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::controls::Button _g1 = this->getComponentAs(HX_CSTRING("query"),hx::ClassOf< ::haxe::ui::toolkit::controls::Button >());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(20)
	this->query = _g1;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::containers::ListView _g11 = this->getComponentAs(HX_CSTRING("userProjects"),hx::ClassOf< ::haxe::ui::toolkit::containers::ListView >());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(20)
	this->userProjects = _g11;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::controls::Text _g2 = this->getComponentAs(HX_CSTRING("warningText"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(20)
	this->warningText = _g2;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::controls::Text _g3 = this->getComponentAs(HX_CSTRING("userTitle"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(20)
	this->userTitle = _g3;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::controls::Text _g4 = this->getComponentAs(HX_CSTRING("userEmail"),hx::ClassOf< ::haxe::ui::toolkit::controls::Text >());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(20)
	this->userEmail = _g4;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::containers::VBox _g5 = this->getComponentAs(HX_CSTRING("results"),hx::ClassOf< ::haxe::ui::toolkit::containers::VBox >());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(20)
	this->results = _g5;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::containers::HBox _g6 = this->getComponentAs(HX_CSTRING("warning"),hx::ClassOf< ::haxe::ui::toolkit::containers::HBox >());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(20)
	this->warning = _g6;
	HX_STACK_LINE(20)
	::haxe::ui::toolkit::controls::TextInput _g7 = this->getComponentAs(HX_CSTRING("username"),hx::ClassOf< ::haxe::ui::toolkit::controls::TextInput >());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(20)
	this->username = _g7;
	HX_STACK_LINE(25)
	if (((usernameToQuery != null()))){
		HX_STACK_LINE(26)
		this->performQuery(usernameToQuery);
	}

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/haxelib/popups/QueryUserController.hx",30,0x01198c75)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(30)
			_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::QueryUserController >()->performQuery(_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::QueryUserController >()->username->get_text());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(29)
	this->query->set_onClick( Dynamic(new _Function_1_1(_g)));

	HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,_g)
	Void run(::haxe::ui::toolkit::events::UIEvent e){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","haxe/ui/haxelib/popups/QueryUserController.hx",33,0x01198c75)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(34)
			Dynamic project = e->data->__Field(HX_CSTRING("project"),true);		HX_STACK_VAR(project,"project");
			HX_STACK_LINE(35)
			{
				HX_STACK_LINE(35)
				::String _g8 = e->get_component()->get_text();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(35)
				::String _switch_1 = (_g8);
				if (  ( _switch_1==HX_CSTRING("Modify"))){
					HX_STACK_LINE(37)
					::haxe::ui::haxelib::UIManager_obj::get_instance()->modifyLocalProject(project);
					HX_STACK_LINE(38)
					(hx::TCast< haxe::ui::toolkit::controls::popups::Popup >::cast(_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::QueryUserController >()->get_view()->__Field(HX_CSTRING("get_parent"),true)()->__Field(HX_CSTRING("get_parent"),true)()))->clickButton((int)1048576);
				}
				else if (  ( _switch_1==HX_CSTRING("Update"))){
					HX_STACK_LINE(40)
					::haxe::ui::haxelib::UIManager_obj::get_instance()->modifyLocalProject(project);
					HX_STACK_LINE(41)
					(hx::TCast< haxe::ui::toolkit::controls::popups::Popup >::cast(_g->__get((int)0).StaticCast< ::haxe::ui::haxelib::popups::QueryUserController >()->get_view()->__Field(HX_CSTRING("get_parent"),true)()->__Field(HX_CSTRING("get_parent"),true)()))->clickButton((int)1048576);
				}
				else  {
				}
;
;
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(33)
	this->userProjects->set_onComponentEvent( Dynamic(new _Function_1_2(_g)));
}
;
	return null();
}

//QueryUserController_obj::~QueryUserController_obj() { }

Dynamic QueryUserController_obj::__CreateEmpty() { return  new QueryUserController_obj; }
hx::ObjectPtr< QueryUserController_obj > QueryUserController_obj::__new(::String usernameToQuery)
{  hx::ObjectPtr< QueryUserController_obj > result = new QueryUserController_obj();
	result->__construct(usernameToQuery);
	return result;}

Dynamic QueryUserController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QueryUserController_obj > result = new QueryUserController_obj();
	result->__construct(inArgs[0]);
	return result;}

Void QueryUserController_obj::performQuery( ::String usernameToQuery){
{
		HX_STACK_FRAME("haxe.ui.haxelib.popups.QueryUserController","performQuery",0x38893ccc,"haxe.ui.haxelib.popups.QueryUserController.performQuery","haxe/ui/haxelib/popups/QueryUserController.hx",47,0x01198c75)
		HX_STACK_THIS(this)
		HX_STACK_ARG(usernameToQuery,"usernameToQuery")
		HX_STACK_LINE(48)
		this->username->set_text(usernameToQuery);
		HX_STACK_LINE(49)
		if (((this->_caller != null()))){
			HX_STACK_LINE(50)
			this->_caller->cancel();
		}
		HX_STACK_LINE(53)
		::haxe::ui::haxelib::popups::QueryUserRunner _g = ::haxe::ui::haxelib::popups::QueryUserRunner_obj::__new(hx::ObjectPtr<OBJ_>(this),.5);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller _g1 = ::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->_caller = _g1;
		HX_STACK_LINE(54)
		this->_caller->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(QueryUserController_obj,performQuery,(void))


QueryUserController_obj::QueryUserController_obj()
{
}

void QueryUserController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QueryUserController);
	HX_MARK_MEMBER_NAME(_caller,"_caller");
	HX_MARK_MEMBER_NAME(username,"username");
	HX_MARK_MEMBER_NAME(warning,"warning");
	HX_MARK_MEMBER_NAME(results,"results");
	HX_MARK_MEMBER_NAME(userEmail,"userEmail");
	HX_MARK_MEMBER_NAME(userTitle,"userTitle");
	HX_MARK_MEMBER_NAME(warningText,"warningText");
	HX_MARK_MEMBER_NAME(userProjects,"userProjects");
	HX_MARK_MEMBER_NAME(query,"query");
	::haxe::ui::toolkit::core::Controller_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QueryUserController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_caller,"_caller");
	HX_VISIT_MEMBER_NAME(username,"username");
	HX_VISIT_MEMBER_NAME(warning,"warning");
	HX_VISIT_MEMBER_NAME(results,"results");
	HX_VISIT_MEMBER_NAME(userEmail,"userEmail");
	HX_VISIT_MEMBER_NAME(userTitle,"userTitle");
	HX_VISIT_MEMBER_NAME(warningText,"warningText");
	HX_VISIT_MEMBER_NAME(userProjects,"userProjects");
	HX_VISIT_MEMBER_NAME(query,"query");
	::haxe::ui::toolkit::core::Controller_obj::__Visit(HX_VISIT_ARG);
}

Dynamic QueryUserController_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"query") ) { return query; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_caller") ) { return _caller; }
		if (HX_FIELD_EQ(inName,"warning") ) { return warning; }
		if (HX_FIELD_EQ(inName,"results") ) { return results; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"username") ) { return username; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userEmail") ) { return userEmail; }
		if (HX_FIELD_EQ(inName,"userTitle") ) { return userTitle; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"warningText") ) { return warningText; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"performQuery") ) { return performQuery_dyn(); }
		if (HX_FIELD_EQ(inName,"userProjects") ) { return userProjects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QueryUserController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"query") ) { query=inValue.Cast< ::haxe::ui::toolkit::controls::Button >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_caller") ) { _caller=inValue.Cast< ::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller >(); return inValue; }
		if (HX_FIELD_EQ(inName,"warning") ) { warning=inValue.Cast< ::haxe::ui::toolkit::containers::HBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"results") ) { results=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"username") ) { username=inValue.Cast< ::haxe::ui::toolkit::controls::TextInput >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userEmail") ) { userEmail=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"userTitle") ) { userTitle=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"warningText") ) { warningText=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"userProjects") ) { userProjects=inValue.Cast< ::haxe::ui::toolkit::containers::ListView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QueryUserController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_caller"));
	outFields->push(HX_CSTRING("username"));
	outFields->push(HX_CSTRING("warning"));
	outFields->push(HX_CSTRING("results"));
	outFields->push(HX_CSTRING("userEmail"));
	outFields->push(HX_CSTRING("userTitle"));
	outFields->push(HX_CSTRING("warningText"));
	outFields->push(HX_CSTRING("userProjects"));
	outFields->push(HX_CSTRING("query"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::util::pseudothreads::AsyncThreadCaller*/ ,(int)offsetof(QueryUserController_obj,_caller),HX_CSTRING("_caller")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::TextInput*/ ,(int)offsetof(QueryUserController_obj,username),HX_CSTRING("username")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::HBox*/ ,(int)offsetof(QueryUserController_obj,warning),HX_CSTRING("warning")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(QueryUserController_obj,results),HX_CSTRING("results")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(QueryUserController_obj,userEmail),HX_CSTRING("userEmail")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(QueryUserController_obj,userTitle),HX_CSTRING("userTitle")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(QueryUserController_obj,warningText),HX_CSTRING("warningText")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::ListView*/ ,(int)offsetof(QueryUserController_obj,userProjects),HX_CSTRING("userProjects")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Button*/ ,(int)offsetof(QueryUserController_obj,query),HX_CSTRING("query")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_caller"),
	HX_CSTRING("performQuery"),
	HX_CSTRING("username"),
	HX_CSTRING("warning"),
	HX_CSTRING("results"),
	HX_CSTRING("userEmail"),
	HX_CSTRING("userTitle"),
	HX_CSTRING("warningText"),
	HX_CSTRING("userProjects"),
	HX_CSTRING("query"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QueryUserController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QueryUserController_obj::__mClass,"__mClass");
};

#endif

Class QueryUserController_obj::__mClass;

void QueryUserController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.popups.QueryUserController"), hx::TCanCast< QueryUserController_obj> ,sStaticFields,sMemberFields,
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

void QueryUserController_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
} // end namespace popups
