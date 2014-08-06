#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ExpandableButton
#include <haxe/ui/toolkit/containers/ExpandableButton.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ExpandablePanel
#include <haxe/ui/toolkit/containers/ExpandablePanel.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
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
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ExpandablePanel_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","new",0x319ffa28,"haxe.ui.toolkit.containers.ExpandablePanel.new","haxe/ui/toolkit/containers/ExpandablePanel.hx",18,0xc8401d48)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	this->startExpanded = true;
	HX_STACK_LINE(26)
	super::__construct();
}
;
	return null();
}

//ExpandablePanel_obj::~ExpandablePanel_obj() { }

Dynamic ExpandablePanel_obj::__CreateEmpty() { return  new ExpandablePanel_obj; }
hx::ObjectPtr< ExpandablePanel_obj > ExpandablePanel_obj::__new()
{  hx::ObjectPtr< ExpandablePanel_obj > result = new ExpandablePanel_obj();
	result->__construct();
	return result;}

Dynamic ExpandablePanel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExpandablePanel_obj > result = new ExpandablePanel_obj();
	result->__construct();
	return result;}

Void ExpandablePanel_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","initialize",0x809f5088,"haxe.ui.toolkit.containers.ExpandablePanel.initialize","haxe/ui/toolkit/containers/ExpandablePanel.hx",30,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::initialize();
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ExpandablePanel_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","addChild",0xf37630f3,"haxe.ui.toolkit.containers.ExpandablePanel.addChild","haxe/ui/toolkit/containers/ExpandablePanel.hx",33,0xc8401d48)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(35)
	if (((this->_button == null()))){
		HX_STACK_LINE(36)
		::haxe::ui::toolkit::containers::ExpandableButton _g = ::haxe::ui::toolkit::containers::ExpandableButton_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		this->_button = _g;
		HX_STACK_LINE(37)
		this->_button->set_percentWidth((int)100);
		HX_STACK_LINE(38)
		::String _g1 = this->get_text();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		this->_button->set_text(_g1);
		HX_STACK_LINE(39)
		this->_button->set_toggle(true);
		HX_STACK_LINE(40)
		this->_button->set_selected((  ((this->startExpanded)) ? bool(true) : bool(false) ));
		HX_STACK_LINE(41)
		this->_button->addEventListener(HX_CSTRING("haxeui_change"),this->onClickButton_dyn(),null(),null(),null());
		HX_STACK_LINE(42)
		this->_button->set_styleName(HX_CSTRING("expandable"));
		HX_STACK_LINE(43)
		this->super::addChild(this->_button);
	}
	HX_STACK_LINE(46)
	if (((this->_panel == null()))){
		HX_STACK_LINE(47)
		::haxe::ui::toolkit::containers::VBox _g2 = ::haxe::ui::toolkit::containers::VBox_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(47)
		this->_panel = _g2;
		HX_STACK_LINE(48)
		this->_panel->set_id(HX_CSTRING("content"));
		HX_STACK_LINE(49)
		this->_panel->set_percentWidth((int)100);
		HX_STACK_LINE(50)
		this->super::addChild(this->_panel);
		HX_STACK_LINE(51)
		this->_panel->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->panelAdded_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(56)
	return this->_panel->addChild(child);
}


Void ExpandablePanel_obj::onClickButton( ::haxe::ui::toolkit::events::UIEvent e){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","onClickButton",0x01090943,"haxe.ui.toolkit.containers.ExpandablePanel.onClickButton","haxe/ui/toolkit/containers/ExpandablePanel.hx",60,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(60)
		if ((this->_button->get_selected())){
			HX_STACK_LINE(61)
			this->showPanel();
		}
		else{
			HX_STACK_LINE(63)
			this->hidePanel();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExpandablePanel_obj,onClickButton,(void))

Void ExpandablePanel_obj::panelAdded( ::openfl::events::Event e){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","panelAdded",0x7b927a54,"haxe.ui.toolkit.containers.ExpandablePanel.panelAdded","haxe/ui/toolkit/containers/ExpandablePanel.hx",67,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(68)
		this->removeEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE,this->panelAdded_dyn(),null());
		HX_STACK_LINE(70)
		if ((!(this->startExpanded))){
			HX_STACK_LINE(71)
			this->_panel->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExpandablePanel_obj,panelAdded,(void))

Void ExpandablePanel_obj::showPanel( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","showPanel",0x8acc908f,"haxe.ui.toolkit.containers.ExpandablePanel.showPanel","haxe/ui/toolkit/containers/ExpandablePanel.hx",75,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::ExpandablePanel >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(78)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(80)
			Float startH = this->_panel->get_height();		HX_STACK_VAR(startH,"startH");
			HX_STACK_LINE(81)
			this->_panel->invalidate((int)256,null());
			HX_STACK_LINE(82)
			Float finalH = this->_panel->get_height();		HX_STACK_VAR(finalH,"finalH");
			HX_STACK_LINE(84)
			this->_panel->set_visible(true);
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				Dynamic o = this->_panel;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(86)
				if (((o != null()))){
					HX_STACK_LINE(86)
					o->__SetField(HX_CSTRING("_height"),startH,false);
				}
			}
			HX_STACK_LINE(87)
			this->_panel->set_clipHeight(startH);
			HX_STACK_LINE(88)
			::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Dynamic Block( Float &finalH){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ExpandablePanel.hx",88,0xc8401d48)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("_height") , finalH,false);
						__result->Add(HX_CSTRING("clipHeight") , finalH,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/containers/ExpandablePanel.hx",89,0xc8401d48)
				{
					HX_STACK_LINE(89)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::ExpandablePanel >()->invalidate((int)256,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(88)
			::motion::Actuate_obj::tween(this->_panel,.2,_Function_2_1::Block(finalH),true,null())->ease(_g1)->onUpdate( Dynamic(new _Function_2_2(_g)),null());
		}
		else{
			HX_STACK_LINE(92)
			this->_panel->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExpandablePanel_obj,showPanel,(void))

Void ExpandablePanel_obj::hidePanel( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","hidePanel",0xb7c6e6aa,"haxe.ui.toolkit.containers.ExpandablePanel.hidePanel","haxe/ui/toolkit/containers/ExpandablePanel.hx",97,0xc8401d48)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::containers::ExpandablePanel >());		HX_STACK_VAR(transition,"transition");
		HX_STACK_LINE(100)
		if (((transition == HX_CSTRING("slide")))){
			HX_STACK_LINE(101)
			::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ExpandablePanel.hx",101,0xc8401d48)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("_height") , (int)0,false);
						__result->Add(HX_CSTRING("clipHeight") , (int)0,false);
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/containers/ExpandablePanel.hx",102,0xc8401d48)
				{
					HX_STACK_LINE(102)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::ExpandablePanel >()->invalidate((int)256,null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))


			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_3,Array< ::Dynamic >,_g)
			Void run(){
				HX_STACK_FRAME("*","_Function_2_3",0x5201af7a,"*._Function_2_3","haxe/ui/toolkit/containers/ExpandablePanel.hx",103,0xc8401d48)
				{
					HX_STACK_LINE(103)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::ExpandablePanel >()->_panel->set_visible(false);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(101)
			::motion::Actuate_obj::tween(this->_panel,.2,_Function_2_1::Block(),true,null())->ease(_g1)->onUpdate( Dynamic(new _Function_2_2(_g)),null())->onComplete( Dynamic(new _Function_2_3(_g)),null());
		}
		else{
			HX_STACK_LINE(105)
			this->_panel->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ExpandablePanel_obj,hidePanel,(void))

Dynamic ExpandablePanel_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","clone",0x84633f25,"haxe.ui.toolkit.containers.ExpandablePanel.clone","haxe/ui/toolkit/containers/ExpandablePanel.hx",1,0xc8401d48)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ExpandablePanel c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ExpandablePanel_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ExpandablePanel","self",0x3da8f0c4,"haxe.ui.toolkit.containers.ExpandablePanel.self","haxe/ui/toolkit/containers/ExpandablePanel.hx",2,0xc8401d48)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::ExpandablePanel_obj::__new();
}



ExpandablePanel_obj::ExpandablePanel_obj()
{
}

void ExpandablePanel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExpandablePanel);
	HX_MARK_MEMBER_NAME(_button,"_button");
	HX_MARK_MEMBER_NAME(_panel,"_panel");
	HX_MARK_MEMBER_NAME(startExpanded,"startExpanded");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ExpandablePanel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_button,"_button");
	HX_VISIT_MEMBER_NAME(_panel,"_panel");
	HX_VISIT_MEMBER_NAME(startExpanded,"startExpanded");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ExpandablePanel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_panel") ) { return _panel; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { return _button; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"showPanel") ) { return showPanel_dyn(); }
		if (HX_FIELD_EQ(inName,"hidePanel") ) { return hidePanel_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"panelAdded") ) { return panelAdded_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startExpanded") ) { return startExpanded; }
		if (HX_FIELD_EQ(inName,"onClickButton") ) { return onClickButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExpandablePanel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_panel") ) { _panel=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_button") ) { _button=inValue.Cast< ::haxe::ui::toolkit::containers::ExpandableButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startExpanded") ) { startExpanded=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExpandablePanel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_button"));
	outFields->push(HX_CSTRING("_panel"));
	outFields->push(HX_CSTRING("startExpanded"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::ExpandableButton*/ ,(int)offsetof(ExpandablePanel_obj,_button),HX_CSTRING("_button")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(ExpandablePanel_obj,_panel),HX_CSTRING("_panel")},
	{hx::fsBool,(int)offsetof(ExpandablePanel_obj,startExpanded),HX_CSTRING("startExpanded")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_button"),
	HX_CSTRING("_panel"),
	HX_CSTRING("startExpanded"),
	HX_CSTRING("initialize"),
	HX_CSTRING("addChild"),
	HX_CSTRING("onClickButton"),
	HX_CSTRING("panelAdded"),
	HX_CSTRING("showPanel"),
	HX_CSTRING("hidePanel"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpandablePanel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpandablePanel_obj::__mClass,"__mClass");
};

#endif

Class ExpandablePanel_obj::__mClass;

void ExpandablePanel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.ExpandablePanel"), hx::TCanCast< ExpandablePanel_obj> ,sStaticFields,sMemberFields,
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

void ExpandablePanel_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
