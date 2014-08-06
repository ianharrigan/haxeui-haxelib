#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HScroll
#include <haxe/ui/toolkit/controls/HScroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{

Void TabBar_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","new",0xc361d406,"haxe.ui.toolkit.controls.TabBar.new","haxe/ui/toolkit/controls/TabBar.hx",14,0xaef198ea)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->_selectedIndex = (int)-1;
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(21)
	this->set_autoSize(false);
	HX_STACK_LINE(22)
	this->_scrollSensitivity = (int)5;
	HX_STACK_LINE(23)
	bool _g = this->_showVScroll = false;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	this->_showHScroll = _g;
	HX_STACK_LINE(24)
	::haxe::ui::toolkit::containers::HBox _g1 = ::haxe::ui::toolkit::containers::HBox_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	this->_content = _g1;
	HX_STACK_LINE(25)
	this->_content->set_id(HX_CSTRING("content"));
	HX_STACK_LINE(26)
	this->_content->set_percentHeight((int)100);
	HX_STACK_LINE(27)
	this->_content->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,this->_onMouseWheel_dyn(),null(),null(),null());
	HX_STACK_LINE(28)
	this->addChild(this->_content);
}
;
	return null();
}

//TabBar_obj::~TabBar_obj() { }

Dynamic TabBar_obj::__CreateEmpty() { return  new TabBar_obj; }
hx::ObjectPtr< TabBar_obj > TabBar_obj::__new()
{  hx::ObjectPtr< TabBar_obj > result = new TabBar_obj();
	result->__construct();
	return result;}

Dynamic TabBar_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TabBar_obj > result = new TabBar_obj();
	result->__construct();
	return result;}

Void TabBar_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","initialize",0x75798e6a,"haxe.ui.toolkit.controls.TabBar.initialize","haxe/ui/toolkit/controls/TabBar.hx",35,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::initialize();
	}
return null();
}


int TabBar_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","get_selectedIndex",0x085d5c34,"haxe.ui.toolkit.controls.TabBar.get_selectedIndex","haxe/ui/toolkit/controls/TabBar.hx",48,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	return this->_selectedIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_selectedIndex,return )

int TabBar_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","set_selectedIndex",0x2bcb3440,"haxe.ui.toolkit.controls.TabBar.set_selectedIndex","haxe/ui/toolkit/controls/TabBar.hx",51,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(52)
	if (((value != this->_selectedIndex))){
		HX_STACK_LINE(53)
		{
			HX_STACK_LINE(53)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(53)
			int _g = this->_content->get_children()->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(53)
			while((true)){
				HX_STACK_LINE(53)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(53)
					break;
				}
				HX_STACK_LINE(53)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(54)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g2 = this->_content->get_children();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(54)
				::haxe::ui::toolkit::controls::Button button;		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(54)
				button = hx::TCast< haxe::ui::toolkit::controls::Button >::cast(_g2->__get(n));
				HX_STACK_LINE(55)
				if (((n == value))){
					HX_STACK_LINE(56)
					button->set_selected(true);
				}
				else{
					HX_STACK_LINE(58)
					button->set_selected(false);
				}
			}
		}
		HX_STACK_LINE(61)
		this->_selectedIndex = value;
		HX_STACK_LINE(63)
		::openfl::events::Event event = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(64)
		this->dispatchEvent(event);
	}
	HX_STACK_LINE(66)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,set_selectedIndex,return )

int TabBar_obj::get_numTabs( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","get_numTabs",0x4444cfa1,"haxe.ui.toolkit.controls.TabBar.get_numTabs","haxe/ui/toolkit/controls/TabBar.hx",70,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(70)
	return this->_content->get_numChildren();
}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,get_numTabs,return )

::haxe::ui::toolkit::controls::Button TabBar_obj::addTab( ::String text){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","addTab",0x2218b2ce,"haxe.ui.toolkit.controls.TabBar.addTab","haxe/ui/toolkit/controls/TabBar.hx",79,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(80)
	::haxe::ui::toolkit::controls::Button button = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(button,"button");
	HX_STACK_LINE(81)
	button->set_text(text);
	HX_STACK_LINE(82)
	button->set_toggle(true);
	HX_STACK_LINE(83)
	button->set_id(HX_CSTRING("tabButton"));
	HX_STACK_LINE(84)
	button->set_allowSelection(false);
	HX_STACK_LINE(85)
	this->_content->addChild(button);
	HX_STACK_LINE(86)
	button->set_selected(((this->_content->get_children()->length - (int)1) == this->_selectedIndex));
	HX_STACK_LINE(87)
	button->addEventListener(HX_CSTRING("haxeui_click"),this->tabButtonClick_dyn(),false,(int)1,null());
	HX_STACK_LINE(88)
	button->addEventListener(HX_CSTRING("haxeui_glyphClick"),this->tabGlyphClick_dyn(),null(),null(),null());
	HX_STACK_LINE(89)
	return button;
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,addTab,return )

Void TabBar_obj::removeTab( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","removeTab",0x03d0bc97,"haxe.ui.toolkit.controls.TabBar.removeTab","haxe/ui/toolkit/controls/TabBar.hx",92,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(93)
		this->_content->removeChildAt(index,null());
		HX_STACK_LINE(94)
		int newIndex = this->get_selectedIndex();		HX_STACK_VAR(newIndex,"newIndex");
		HX_STACK_LINE(95)
		int _g = this->_content->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(95)
		int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(95)
		if (((newIndex > _g1))){
			HX_STACK_LINE(96)
			int _g2 = this->_content->get_numChildren();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(96)
			int _g3 = (_g2 - (int)1);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(96)
			newIndex = _g3;
		}
		HX_STACK_LINE(98)
		this->set_selectedIndex((int)-1);
		HX_STACK_LINE(99)
		this->set_selectedIndex(newIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,removeTab,(void))

::haxe::ui::toolkit::controls::Button TabBar_obj::getTabButton( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","getTabButton",0x4567124b,"haxe.ui.toolkit.controls.TabBar.getTabButton","haxe/ui/toolkit/controls/TabBar.hx",103,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(103)
	return this->_content->getChildAt(index);
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,getTabButton,return )

Void TabBar_obj::removeAllTabs( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","removeAllTabs",0xbc072581,"haxe.ui.toolkit.controls.TabBar.removeAllTabs","haxe/ui/toolkit/controls/TabBar.hx",106,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(107)
		this->_content->removeAllChildren(null());
		HX_STACK_LINE(108)
		this->_selectedIndex = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TabBar_obj,removeAllTabs,(void))

Void TabBar_obj::setTabText( int index,::String text){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","setTabText",0x210d233a,"haxe.ui.toolkit.controls.TabBar.setTabText","haxe/ui/toolkit/controls/TabBar.hx",111,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(112)
		::haxe::ui::toolkit::controls::Button button;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(112)
		button = hx::TCast< haxe::ui::toolkit::controls::Button >::cast(this->_content->getChildAt(index));
		HX_STACK_LINE(113)
		button->set_text(text);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TabBar_obj,setTabText,(void))

Void TabBar_obj::tabButtonClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","tabButtonClick",0x461912bb,"haxe.ui.toolkit.controls.TabBar.tabButtonClick","haxe/ui/toolkit/controls/TabBar.hx",116,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(117)
		int _g = this->_content->indexOfChild(event->displayObject);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(117)
		this->set_selectedIndex(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabButtonClick,(void))

Void TabBar_obj::tabGlyphClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","tabGlyphClick",0x6354a8d7,"haxe.ui.toolkit.controls.TabBar.tabGlyphClick","haxe/ui/toolkit/controls/TabBar.hx",120,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(121)
		::haxe::ui::toolkit::events::UIEvent newEvent = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_glyphClick"),null(),null(),null());		HX_STACK_VAR(newEvent,"newEvent");
		HX_STACK_LINE(122)
		int _g = this->_content->indexOfChild(event->displayObject);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		newEvent->data = _g;
		HX_STACK_LINE(123)
		this->dispatchEvent(newEvent);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TabBar_obj,tabGlyphClick,(void))

Void TabBar_obj::_onMouseWheel( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","_onMouseWheel",0x2e42ac3a,"haxe.ui.toolkit.controls.TabBar._onMouseWheel","haxe/ui/toolkit/controls/TabBar.hx",127,0xaef198ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::TabBar_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/TabBar.hx",127,0xaef198ea)
				{
					HX_STACK_LINE(127)
					Float _g = __this->_content->get_width();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(127)
					Float _g1 = __this->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(127)
					return (_g > _g1);
				}
				return null();
			}
		};
		HX_STACK_LINE(127)
		if (((  (((this->_hscroll != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(128)
			if (((event->delta != (int)0))){
				HX_STACK_LINE(129)
				if (((event->delta < (int)0))){
					HX_STACK_LINE(130)
					this->_hscroll->incrementValue();
				}
				else{
					HX_STACK_LINE(131)
					if (((event->delta > (int)0))){
						HX_STACK_LINE(132)
						this->_hscroll->deincrementValue();
					}
				}
			}
		}
	}
return null();
}


Dynamic TabBar_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","clone",0x6db5cc83,"haxe.ui.toolkit.controls.TabBar.clone","haxe/ui/toolkit/controls/TabBar.hx",1,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::TabBar c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic TabBar_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.TabBar","self",0x3585b926,"haxe.ui.toolkit.controls.TabBar.self","haxe/ui/toolkit/controls/TabBar.hx",2,0xaef198ea)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::TabBar_obj::__new();
}



TabBar_obj::TabBar_obj()
{
}

void TabBar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabBar);
	HX_MARK_MEMBER_NAME(_content,"_content");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(numTabs,"numTabs");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TabBar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_content,"_content");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(numTabs,"numTabs");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TabBar_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addTab") ) { return addTab_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numTabs") ) { return inCallProp ? get_numTabs() : numTabs; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { return _content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeTab") ) { return removeTab_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"setTabText") ) { return setTabText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numTabs") ) { return get_numTabs_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTabButton") ) { return getTabButton_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"removeAllTabs") ) { return removeAllTabs_dyn(); }
		if (HX_FIELD_EQ(inName,"tabGlyphClick") ) { return tabGlyphClick_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseWheel") ) { return _onMouseWheel_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		if (HX_FIELD_EQ(inName,"tabButtonClick") ) { return tabButtonClick_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TabBar_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numTabs") ) { numTabs=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { _content=inValue.Cast< ::haxe::ui::toolkit::containers::HBox >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabBar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_content"));
	outFields->push(HX_CSTRING("_selectedIndex"));
	outFields->push(HX_CSTRING("selectedIndex"));
	outFields->push(HX_CSTRING("numTabs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::HBox*/ ,(int)offsetof(TabBar_obj,_content),HX_CSTRING("_content")},
	{hx::fsInt,(int)offsetof(TabBar_obj,_selectedIndex),HX_CSTRING("_selectedIndex")},
	{hx::fsInt,(int)offsetof(TabBar_obj,numTabs),HX_CSTRING("numTabs")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_content"),
	HX_CSTRING("_selectedIndex"),
	HX_CSTRING("initialize"),
	HX_CSTRING("numTabs"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("get_numTabs"),
	HX_CSTRING("addTab"),
	HX_CSTRING("removeTab"),
	HX_CSTRING("getTabButton"),
	HX_CSTRING("removeAllTabs"),
	HX_CSTRING("setTabText"),
	HX_CSTRING("tabButtonClick"),
	HX_CSTRING("tabGlyphClick"),
	HX_CSTRING("_onMouseWheel"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TabBar_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TabBar_obj::__mClass,"__mClass");
};

#endif

Class TabBar_obj::__mClass;

void TabBar_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.TabBar"), hx::TCanCast< TabBar_obj> ,sStaticFields,sMemberFields,
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

void TabBar_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
