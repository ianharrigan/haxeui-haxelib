#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Stack
#include <haxe/ui/toolkit/containers/Stack.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TabView
#include <haxe/ui/toolkit/containers/TabView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_TabBar
#include <haxe/ui/toolkit/controls/TabBar.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void TabView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","new",0x19b9a312,"haxe.ui.toolkit.containers.TabView.new","haxe/ui/toolkit/containers/TabView.hx",15,0x54697f9e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(17)
	::haxe::ui::toolkit::layout::VerticalLayout _g = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(17)
	this->_layout = _g;
	HX_STACK_LINE(19)
	::haxe::ui::toolkit::controls::TabBar _g1 = ::haxe::ui::toolkit::controls::TabBar_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(19)
	this->_tabs = _g1;
	HX_STACK_LINE(20)
	this->_tabs->set_percentWidth((int)100);
	HX_STACK_LINE(21)
	this->_tabs->addEventListener(::openfl::events::Event_obj::CHANGE,this->_onTabsChange_dyn(),null(),null(),null());
	HX_STACK_LINE(22)
	this->_tabs->addEventListener(HX_CSTRING("haxeui_glyphClick"),this->_onGlyphClick_dyn(),null(),null(),null());
	HX_STACK_LINE(23)
	this->addChild(this->_tabs);
	HX_STACK_LINE(25)
	::haxe::ui::toolkit::containers::Stack _g2 = ::haxe::ui::toolkit::containers::Stack_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(25)
	this->_stack = _g2;
	HX_STACK_LINE(26)
	Float _g3 = this->_stack->set_percentHeight((int)100);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(26)
	this->_stack->set_percentWidth(_g3);
	HX_STACK_LINE(27)
	this->_stack->set_styleName(HX_CSTRING("page"));
	HX_STACK_LINE(28)
	this->addChild(this->_stack);
}
;
	return null();
}

//TabView_obj::~TabView_obj() { }

Dynamic TabView_obj::__CreateEmpty() { return  new TabView_obj; }
hx::ObjectPtr< TabView_obj > TabView_obj::__new()
{  hx::ObjectPtr< TabView_obj > result = new TabView_obj();
	result->__construct();
	return result;}

Dynamic TabView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TabView_obj > result = new TabView_obj();
	result->__construct();
	return result;}

Void TabView_obj::_onTabsChange( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","_onTabsChange",0x01ab429e,"haxe.ui.toolkit.containers.TabView._onTabsChange","haxe/ui/toolkit/containers/TabView.hx",34,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(35)
		int _g = this->_tabs->get_selectedIndex();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		this->_stack->set_selectedIndex(_g);
		HX_STACK_LINE(37)
		::haxe::ui::toolkit::events::UIEvent event1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_change"),null(),null(),null());		HX_STACK_VAR(event1,"event1");
		HX_STACK_LINE(38)
		this->dispatchEvent(event1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,_onTabsChange,(void))

Void TabView_obj::_onGlyphClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","_onGlyphClick",0x79acf90c,"haxe.ui.toolkit.containers.TabView._onGlyphClick","haxe/ui/toolkit/containers/TabView.hx",41,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(42)
		::haxe::ui::toolkit::events::UIEvent newEvent = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_glyphClick"),null(),null(),null());		HX_STACK_VAR(newEvent,"newEvent");
		HX_STACK_LINE(43)
		newEvent->data = event->data;
		HX_STACK_LINE(44)
		this->dispatchEvent(newEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,_onGlyphClick,(void))

Void TabView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","initialize",0x20a6f8de,"haxe.ui.toolkit.containers.TabView.initialize","haxe/ui/toolkit/containers/TabView.hx",50,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->super::initialize();
		HX_STACK_LINE(52)
		this->set_selectedIndex((int)0);
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject TabView_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","addChild",0x94ddf7c9,"haxe.ui.toolkit.containers.TabView.addChild","haxe/ui/toolkit/containers/TabView.hx",55,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(56)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(57)
	if (((bool((child == this->_tabs)) || bool((child == this->_stack))))){
		HX_STACK_LINE(58)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->super::addChild(child);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(58)
		r = _g;
	}
	else{
		HX_STACK_LINE(60)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g1 = this->_stack->addChild(child);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		r = _g1;
		HX_STACK_LINE(61)
		::String label = HX_CSTRING("");		HX_STACK_VAR(label,"label");
		HX_STACK_LINE(62)
		if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::Component >()))){
			HX_STACK_LINE(63)
			::String _g2 = (hx::TCast< haxe::ui::toolkit::core::Component >::cast(child))->get_text();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(63)
			label = _g2;
		}
		HX_STACK_LINE(65)
		this->_tabs->addTab(label);
	}
	HX_STACK_LINE(67)
	return r;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject TabView_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","addChildAt",0x0222751c,"haxe.ui.toolkit.containers.TabView.addChildAt","haxe/ui/toolkit/containers/TabView.hx",70,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(71)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(72)
	if (((bool((child == this->_tabs)) || bool((child == this->_stack))))){
		HX_STACK_LINE(73)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->super::addChildAt(child,index);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		r = _g;
	}
	else{
		HX_STACK_LINE(75)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g1 = this->_stack->addChildAt(child,index);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(75)
		r = _g1;
		HX_STACK_LINE(76)
		::String label = HX_CSTRING("");		HX_STACK_VAR(label,"label");
		HX_STACK_LINE(77)
		if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::Component >()))){
			HX_STACK_LINE(78)
			::String _g2 = (hx::TCast< haxe::ui::toolkit::core::Component >::cast(child))->get_text();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(78)
			label = _g2;
		}
		HX_STACK_LINE(80)
		this->_tabs->addTab(label);
	}
	HX_STACK_LINE(82)
	return r;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject TabView_obj::removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","removeChild",0x7e505b6a,"haxe.ui.toolkit.containers.TabView.removeChild","haxe/ui/toolkit/containers/TabView.hx",85,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(86)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject r = null();		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(87)
		if (((bool((child == this->_tabs)) || bool((child == this->_stack))))){
			HX_STACK_LINE(88)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->super::removeChild(child,dispose);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			r = _g;
		}
		else{
			HX_STACK_LINE(90)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g1 = this->_stack->removeChild(child,dispose);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(90)
			r = _g1;
		}
		HX_STACK_LINE(92)
		return r;
	}
}


int TabView_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","get_selectedIndex",0x9aece840,"haxe.ui.toolkit.containers.TabView.get_selectedIndex","haxe/ui/toolkit/containers/TabView.hx",102,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return this->_tabs->get_selectedIndex();
}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_selectedIndex,return )

int TabView_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","set_selectedIndex",0xbe5ac04c,"haxe.ui.toolkit.containers.TabView.set_selectedIndex","haxe/ui/toolkit/containers/TabView.hx",105,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(106)
	this->_tabs->set_selectedIndex(value);
	HX_STACK_LINE(107)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,set_selectedIndex,return )

int TabView_obj::get_pageCount( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","get_pageCount",0x6a24d509,"haxe.ui.toolkit.containers.TabView.get_pageCount","haxe/ui/toolkit/containers/TabView.hx",111,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return this->_stack->get_numChildren();
}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,get_pageCount,return )

Void TabView_obj::setTabText( int index,::String text){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","setTabText",0xcc3a8dae,"haxe.ui.toolkit.containers.TabView.setTabText","haxe/ui/toolkit/containers/TabView.hx",118,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(118)
		this->_tabs->setTabText(index,text);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TabView_obj,setTabText,(void))

Void TabView_obj::removeTab( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","removeTab",0x036f5ca3,"haxe.ui.toolkit.containers.TabView.removeTab","haxe/ui/toolkit/containers/TabView.hx",121,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(122)
		this->_stack->removeChildAt(index,null());
		HX_STACK_LINE(123)
		this->_tabs->removeTab(index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,removeTab,(void))

::haxe::ui::toolkit::controls::Button TabView_obj::getTabButton( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","getTabButton",0x269b01bf,"haxe.ui.toolkit.containers.TabView.getTabButton","haxe/ui/toolkit/containers/TabView.hx",127,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(127)
	return this->_tabs->getTabButton(index);
}


HX_DEFINE_DYNAMIC_FUNC1(TabView_obj,getTabButton,return )

Void TabView_obj::removeAllTabs( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","removeAllTabs",0xe844bb8d,"haxe.ui.toolkit.containers.TabView.removeAllTabs","haxe/ui/toolkit/containers/TabView.hx",130,0x54697f9e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		this->_stack->removeAllChildren(null());
		HX_STACK_LINE(132)
		this->_tabs->removeAllTabs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TabView_obj,removeAllTabs,(void))

Dynamic TabView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","clone",0xe4e8768f,"haxe.ui.toolkit.containers.TabView.clone","haxe/ui/toolkit/containers/TabView.hx",1,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::TabView c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic TabView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TabView","self",0x6c03149a,"haxe.ui.toolkit.containers.TabView.self","haxe/ui/toolkit/containers/TabView.hx",2,0x54697f9e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::TabView_obj::__new();
}



TabView_obj::TabView_obj()
{
}

void TabView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabView);
	HX_MARK_MEMBER_NAME(_tabs,"_tabs");
	HX_MARK_MEMBER_NAME(_stack,"_stack");
	HX_MARK_MEMBER_NAME(pageCount,"pageCount");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tabs,"_tabs");
	HX_VISIT_MEMBER_NAME(_stack,"_stack");
	HX_VISIT_MEMBER_NAME(pageCount,"pageCount");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TabView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tabs") ) { return _tabs; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stack") ) { return _stack; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageCount") ) { return inCallProp ? get_pageCount() : pageCount; }
		if (HX_FIELD_EQ(inName,"removeTab") ) { return removeTab_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setTabText") ) { return setTabText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTabButton") ) { return getTabButton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onTabsChange") ) { return _onTabsChange_dyn(); }
		if (HX_FIELD_EQ(inName,"_onGlyphClick") ) { return _onGlyphClick_dyn(); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"get_pageCount") ) { return get_pageCount_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAllTabs") ) { return removeAllTabs_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TabView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tabs") ) { _tabs=inValue.Cast< ::haxe::ui::toolkit::controls::TabBar >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_stack") ) { _stack=inValue.Cast< ::haxe::ui::toolkit::containers::Stack >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageCount") ) { pageCount=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tabs"));
	outFields->push(HX_CSTRING("_stack"));
	outFields->push(HX_CSTRING("selectedIndex"));
	outFields->push(HX_CSTRING("pageCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::controls::TabBar*/ ,(int)offsetof(TabView_obj,_tabs),HX_CSTRING("_tabs")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Stack*/ ,(int)offsetof(TabView_obj,_stack),HX_CSTRING("_stack")},
	{hx::fsInt,(int)offsetof(TabView_obj,pageCount),HX_CSTRING("pageCount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_tabs"),
	HX_CSTRING("_stack"),
	HX_CSTRING("_onTabsChange"),
	HX_CSTRING("_onGlyphClick"),
	HX_CSTRING("initialize"),
	HX_CSTRING("addChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("pageCount"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("get_pageCount"),
	HX_CSTRING("setTabText"),
	HX_CSTRING("removeTab"),
	HX_CSTRING("getTabButton"),
	HX_CSTRING("removeAllTabs"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabView_obj::__mClass,"__mClass");
};

#endif

Class TabView_obj::__mClass;

void TabView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.TabView"), hx::TCanCast< TabView_obj> ,sStaticFields,sMemberFields,
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

void TabView_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
