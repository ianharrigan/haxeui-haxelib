#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_HaxeLibManager
#include <haxe/ui/haxelib/HaxeLibManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_IRunnable
#include <haxe/ui/toolkit/util/pseudothreads/IRunnable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_pseudothreads_Runner
#include <haxe/ui/toolkit/util/pseudothreads/Runner.h>
#endif
#ifndef INCLUDED_tools_haxelib_Main
#include <tools/haxelib/Main.h>
#endif
namespace haxe{
namespace ui{
namespace haxelib{
namespace popups{

Void QueryUserRunner_obj::__construct(::haxe::ui::haxelib::popups::QueryUserController controller,hx::Null< Float >  __o_timeShare)
{
HX_STACK_FRAME("haxe.ui.haxelib.popups.QueryUserRunner","new",0xf5b197af,"haxe.ui.haxelib.popups.QueryUserRunner.new","haxe/ui/haxelib/popups/QueryUserController.hx",58,0x01198c75)
HX_STACK_THIS(this)
HX_STACK_ARG(controller,"controller")
HX_STACK_ARG(__o_timeShare,"timeShare")
Float timeShare = __o_timeShare.Default(.9);
{
	HX_STACK_LINE(64)
	this->_breakIndex = (int)0;
	HX_STACK_LINE(59)
	this->_stage = (int)0;
	HX_STACK_LINE(68)
	super::__construct();
	HX_STACK_LINE(69)
	this->_runningTimeShare = timeShare;
	HX_STACK_LINE(70)
	this->_controller = controller;
}
;
	return null();
}

//QueryUserRunner_obj::~QueryUserRunner_obj() { }

Dynamic QueryUserRunner_obj::__CreateEmpty() { return  new QueryUserRunner_obj; }
hx::ObjectPtr< QueryUserRunner_obj > QueryUserRunner_obj::__new(::haxe::ui::haxelib::popups::QueryUserController controller,hx::Null< Float >  __o_timeShare)
{  hx::ObjectPtr< QueryUserRunner_obj > result = new QueryUserRunner_obj();
	result->__construct(controller,__o_timeShare);
	return result;}

Dynamic QueryUserRunner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QueryUserRunner_obj > result = new QueryUserRunner_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void QueryUserRunner_obj::run( ){
{
		HX_STACK_FRAME("haxe.ui.haxelib.popups.QueryUserRunner","run",0xf5b4ae9a,"haxe.ui.haxelib.popups.QueryUserRunner.run","haxe/ui/haxelib/popups/QueryUserController.hx",74,0x01198c75)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		while((true)){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::haxe::ui::haxelib::popups::QueryUserRunner_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/haxelib/popups/QueryUserController.hx",74,0x01198c75)
					{
						HX_STACK_LINE(74)
						bool _g = __this->_needToExit();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(74)
						return (_g == false);
					}
					return null();
				}
			};
			HX_STACK_LINE(74)
			if ((!(((  (((this->_needToExit_dyn() != null()))) ? bool(_Function_2_1::Block(this)) : bool(false) ))))){
				HX_STACK_LINE(74)
				break;
			}
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				int _g = this->_stage;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(75)
				switch( (int)(_g)){
					case (int)0: {
						HX_STACK_LINE(77)
						this->_controller->username->set_disabled(true);
						HX_STACK_LINE(79)
						this->_controller->query->set_disabled(true);
						HX_STACK_LINE(80)
						this->_controller->warning->set_visible(false);
						HX_STACK_LINE(81)
						this->_controller->userProjects->get_dataSource()->removeAll();
						HX_STACK_LINE(82)
						(this->_stage)++;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(84)
						try
						{
						HX_STACK_CATCHABLE(Dynamic, 0);
						{
							HX_STACK_LINE(85)
							::String _g1 = this->_controller->username->get_text();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(85)
							Dynamic _g2 = ::haxe::ui::haxelib::HaxeLibManager_obj::get_instance()->queryUser(_g1);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(85)
							this->_userInfo = _g2;
							HX_STACK_LINE(86)
							(this->_stage)++;
						}
						}
						catch(Dynamic __e){
							{
								HX_STACK_BEGIN_CATCH
								Dynamic e = __e;{
									HX_STACK_LINE(88)
									this->_lastError = e;
								}
							}
						}
						HX_STACK_LINE(90)
						(this->_stage)++;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(92)
						::String _g3 = ::Std_obj::string(this->_lastError);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(92)
						::String _g4 = (HX_CSTRING("") + _g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(92)
						this->_controller->warningText->set_text(_g4);
						HX_STACK_LINE(93)
						this->_controller->warning->set_visible(true);
						HX_STACK_LINE(94)
						this->_controller->results->set_visible(false);
						HX_STACK_LINE(95)
						::haxe::ui::toolkit::controls::popups::Popup _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(95)
						_g5 = hx::TCast< haxe::ui::toolkit::controls::popups::Popup >::cast(this->_controller->get_view()->__Field(HX_CSTRING("get_parent"),true)()->__Field(HX_CSTRING("get_parent"),true)());
						HX_STACK_LINE(95)
						::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->centerPopup(_g5);
						HX_STACK_LINE(96)
						this->_stage = (int)7;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(98)
						this->_controller->results->set_visible(true);
						HX_STACK_LINE(99)
						this->_controller->userTitle->set_text((((this->_userInfo->__Field(HX_CSTRING("fullname"),true) + HX_CSTRING(" (")) + this->_userInfo->__Field(HX_CSTRING("name"),true)) + HX_CSTRING(")")));
						HX_STACK_LINE(100)
						this->_controller->userEmail->set_text(this->_userInfo->__Field(HX_CSTRING("email"),true));
						HX_STACK_LINE(101)
						::haxe::ui::toolkit::controls::popups::Popup _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(101)
						_g6 = hx::TCast< haxe::ui::toolkit::controls::popups::Popup >::cast(this->_controller->get_view()->__Field(HX_CSTRING("get_parent"),true)()->__Field(HX_CSTRING("get_parent"),true)());
						HX_STACK_LINE(101)
						::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->centerPopup(_g6);
						HX_STACK_LINE(102)
						(this->_stage)++;
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(104)
						Dynamic _g7 = ::haxe::ui::haxelib::HaxeLibManager_obj::get_instance()->listLocalProjects(null(),null());		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(104)
						this->_localProjects = _g7;
						HX_STACK_LINE(105)
						(this->_stage)++;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(107)
						Dynamic _g8 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(107)
						this->_filteredProjects = _g8;
						HX_STACK_LINE(108)
						{
							HX_STACK_LINE(108)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(108)
							Dynamic _g2 = this->_localProjects;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(108)
							while((true)){
								HX_STACK_LINE(108)
								if ((!(((_g1 < _g2->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(108)
									break;
								}
								HX_STACK_LINE(108)
								Dynamic l = _g2->__GetItem(_g1);		HX_STACK_VAR(l,"l");
								HX_STACK_LINE(108)
								++(_g1);
								HX_STACK_LINE(109)
								int _g9 = this->_userInfo->__Field(HX_CSTRING("projects"),true)->__Field(HX_CSTRING("indexOf"),true)(l->__Field(HX_CSTRING("name"),true),null());		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(109)
								if (((_g9 != (int)-1))){
									HX_STACK_LINE(110)
									this->_filteredProjects->__Field(HX_CSTRING("push"),true)(l);
								}
							}
						}
						HX_STACK_LINE(113)
						(this->_stage)++;
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(115)
						::String p = this->_userInfo->__Field(HX_CSTRING("projects"),true)->__GetItem(this->_breakIndex);		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(116)
						Dynamic projectInfo = ::haxe::ui::haxelib::HaxeLibManager_obj::get_instance()->queryProject(p);		HX_STACK_VAR(projectInfo,"projectInfo");
						struct _Function_4_1{
							inline static Dynamic Block( Dynamic &projectInfo){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/haxelib/popups/QueryUserController.hx",118,0x01198c75)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("text") , (((projectInfo->__Field(HX_CSTRING("name"),true) + HX_CSTRING(" [")) + projectInfo->__Field(HX_CSTRING("curversion"),true)) + HX_CSTRING("]")),false);
									__result->Add(HX_CSTRING("subtext") , (HX_CSTRING("Last updated: ") + projectInfo->__Field(HX_CSTRING("versions"),true)->__GetItem((projectInfo->__Field(HX_CSTRING("versions"),true)->__Field(HX_CSTRING("length"),true) - (int)1))->__Field(HX_CSTRING("date"),true)),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(118)
						Dynamic o = _Function_4_1::Block(projectInfo);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(123)
						Dynamic localProject = null();		HX_STACK_VAR(localProject,"localProject");
						HX_STACK_LINE(124)
						{
							HX_STACK_LINE(124)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(124)
							Dynamic _g2 = this->_filteredProjects;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(124)
							while((true)){
								HX_STACK_LINE(124)
								if ((!(((_g1 < _g2->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(124)
									break;
								}
								HX_STACK_LINE(124)
								Dynamic f = _g2->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(124)
								++(_g1);
								HX_STACK_LINE(125)
								if (((f->__Field(HX_CSTRING("name"),true) == projectInfo->__Field(HX_CSTRING("name"),true)))){
									HX_STACK_LINE(126)
									localProject = f;
									HX_STACK_LINE(127)
									break;
								}
							}
						}
						HX_STACK_LINE(130)
						o->__FieldRef(HX_CSTRING("project")) = localProject;
						HX_STACK_LINE(131)
						if (((localProject != null()))){
							HX_STACK_LINE(132)
							o->__Field(HX_CSTRING("project"),true)->__FieldRef(HX_CSTRING("remoteProject")) = projectInfo;
						}
						HX_STACK_LINE(135)
						if (((localProject == null()))){
							HX_STACK_LINE(136)
							o->__FieldRef(HX_CSTRING("controlId")) = HX_CSTRING("installButton");
							HX_STACK_LINE(137)
							o->__FieldRef(HX_CSTRING("componentType")) = HX_CSTRING("button");
							HX_STACK_LINE(138)
							o->__FieldRef(HX_CSTRING("componentValue")) = HX_CSTRING("Install");
						}
						else{
							HX_STACK_LINE(140)
							if (((localProject->__Field(HX_CSTRING("currentVersion"),true) != projectInfo->__Field(HX_CSTRING("curversion"),true)))){
								HX_STACK_LINE(141)
								o->__FieldRef(HX_CSTRING("controlId")) = HX_CSTRING("updateButton");
								HX_STACK_LINE(142)
								o->__FieldRef(HX_CSTRING("componentType")) = HX_CSTRING("button");
								HX_STACK_LINE(143)
								o->__FieldRef(HX_CSTRING("componentValue")) = HX_CSTRING("Update");
							}
							else{
								HX_STACK_LINE(145)
								o->__FieldRef(HX_CSTRING("controlId")) = HX_CSTRING("modifyButton");
								HX_STACK_LINE(146)
								o->__FieldRef(HX_CSTRING("componentType")) = HX_CSTRING("button");
								HX_STACK_LINE(147)
								o->__FieldRef(HX_CSTRING("componentValue")) = HX_CSTRING("Modify");
							}
						}
						HX_STACK_LINE(151)
						this->_controller->userProjects->get_dataSource()->add(o);
						HX_STACK_LINE(152)
						(this->_breakIndex)++;
						HX_STACK_LINE(154)
						if (((this->_breakIndex >= this->_userInfo->__Field(HX_CSTRING("projects"),true)->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(155)
							(this->_stage)++;
						}
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(158)
						this->_controller->username->set_disabled(false);
						HX_STACK_LINE(159)
						this->_controller->query->set_disabled(false);
						HX_STACK_LINE(160)
						this->_stage = (int)100;
					}
					;break;
					default: {
						HX_STACK_LINE(162)
						this->_needToExit = null();
						HX_STACK_LINE(163)
						this->_isComplete = true;
					}
				}
			}
		}
	}
return null();
}



QueryUserRunner_obj::QueryUserRunner_obj()
{
}

void QueryUserRunner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QueryUserRunner);
	HX_MARK_MEMBER_NAME(_stage,"_stage");
	HX_MARK_MEMBER_NAME(_controller,"_controller");
	HX_MARK_MEMBER_NAME(_userInfo,"_userInfo");
	HX_MARK_MEMBER_NAME(_localProjects,"_localProjects");
	HX_MARK_MEMBER_NAME(_filteredProjects,"_filteredProjects");
	HX_MARK_MEMBER_NAME(_breakIndex,"_breakIndex");
	HX_MARK_MEMBER_NAME(_lastError,"_lastError");
	::haxe::ui::toolkit::util::pseudothreads::Runner_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void QueryUserRunner_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_stage,"_stage");
	HX_VISIT_MEMBER_NAME(_controller,"_controller");
	HX_VISIT_MEMBER_NAME(_userInfo,"_userInfo");
	HX_VISIT_MEMBER_NAME(_localProjects,"_localProjects");
	HX_VISIT_MEMBER_NAME(_filteredProjects,"_filteredProjects");
	HX_VISIT_MEMBER_NAME(_breakIndex,"_breakIndex");
	HX_VISIT_MEMBER_NAME(_lastError,"_lastError");
	::haxe::ui::toolkit::util::pseudothreads::Runner_obj::__Visit(HX_VISIT_ARG);
}

Dynamic QueryUserRunner_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { return _stage; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_userInfo") ) { return _userInfo; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastError") ) { return _lastError; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_controller") ) { return _controller; }
		if (HX_FIELD_EQ(inName,"_breakIndex") ) { return _breakIndex; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_localProjects") ) { return _localProjects; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_filteredProjects") ) { return _filteredProjects; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QueryUserRunner_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_stage") ) { _stage=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_userInfo") ) { _userInfo=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_lastError") ) { _lastError=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_controller") ) { _controller=inValue.Cast< ::haxe::ui::haxelib::popups::QueryUserController >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_breakIndex") ) { _breakIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_localProjects") ) { _localProjects=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_filteredProjects") ) { _filteredProjects=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QueryUserRunner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_stage"));
	outFields->push(HX_CSTRING("_controller"));
	outFields->push(HX_CSTRING("_userInfo"));
	outFields->push(HX_CSTRING("_localProjects"));
	outFields->push(HX_CSTRING("_filteredProjects"));
	outFields->push(HX_CSTRING("_breakIndex"));
	outFields->push(HX_CSTRING("_lastError"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(QueryUserRunner_obj,_stage),HX_CSTRING("_stage")},
	{hx::fsObject /*::haxe::ui::haxelib::popups::QueryUserController*/ ,(int)offsetof(QueryUserRunner_obj,_controller),HX_CSTRING("_controller")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(QueryUserRunner_obj,_userInfo),HX_CSTRING("_userInfo")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(QueryUserRunner_obj,_localProjects),HX_CSTRING("_localProjects")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(QueryUserRunner_obj,_filteredProjects),HX_CSTRING("_filteredProjects")},
	{hx::fsInt,(int)offsetof(QueryUserRunner_obj,_breakIndex),HX_CSTRING("_breakIndex")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(QueryUserRunner_obj,_lastError),HX_CSTRING("_lastError")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_stage"),
	HX_CSTRING("_controller"),
	HX_CSTRING("_userInfo"),
	HX_CSTRING("_localProjects"),
	HX_CSTRING("_filteredProjects"),
	HX_CSTRING("_breakIndex"),
	HX_CSTRING("_lastError"),
	HX_CSTRING("run"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QueryUserRunner_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QueryUserRunner_obj::__mClass,"__mClass");
};

#endif

Class QueryUserRunner_obj::__mClass;

void QueryUserRunner_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.popups.QueryUserRunner"), hx::TCanCast< QueryUserRunner_obj> ,sStaticFields,sMemberFields,
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

void QueryUserRunner_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
} // end namespace popups
