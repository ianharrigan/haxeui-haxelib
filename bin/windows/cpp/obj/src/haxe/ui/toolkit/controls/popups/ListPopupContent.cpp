#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_ListPopupContent
#include <haxe/ui/toolkit/controls/popups/ListPopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
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
#ifndef INCLUDED_openfl_events_TimerEvent
#include <openfl/events/TimerEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Timer
#include <openfl/utils/Timer.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{

Void ListPopupContent_obj::__construct(::haxe::ui::toolkit::data::IDataSource dataSource,hx::Null< int >  __o_selectedIndex,Dynamic fn)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","new",0x0105994e,"haxe.ui.toolkit.controls.popups.ListPopupContent.new","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",14,0x70518bc1)
HX_STACK_THIS(this)
HX_STACK_ARG(dataSource,"dataSource")
HX_STACK_ARG(__o_selectedIndex,"selectedIndex")
HX_STACK_ARG(fn,"fn")
int selectedIndex = __o_selectedIndex.Default(-1);
{
	HX_STACK_LINE(89)
	this->DELAY = (int)0;
	HX_STACK_LINE(21)
	this->_selectedIndex = (int)-1;
	HX_STACK_LINE(17)
	this->_maxListSize = (int)4;
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(26)
	this->_selectedIndex = selectedIndex;
	HX_STACK_LINE(27)
	this->_fn = fn;
	HX_STACK_LINE(29)
	::haxe::ui::toolkit::containers::ListView _g = ::haxe::ui::toolkit::containers::ListView_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(29)
	this->_list = _g;
	HX_STACK_LINE(30)
	this->_list->set_percentWidth((int)100);
	HX_STACK_LINE(31)
	this->_list->set_dataSource(dataSource);
}
;
	return null();
}

//ListPopupContent_obj::~ListPopupContent_obj() { }

Dynamic ListPopupContent_obj::__CreateEmpty() { return  new ListPopupContent_obj; }
hx::ObjectPtr< ListPopupContent_obj > ListPopupContent_obj::__new(::haxe::ui::toolkit::data::IDataSource dataSource,hx::Null< int >  __o_selectedIndex,Dynamic fn)
{  hx::ObjectPtr< ListPopupContent_obj > result = new ListPopupContent_obj();
	result->__construct(dataSource,__o_selectedIndex,fn);
	return result;}

Dynamic ListPopupContent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListPopupContent_obj > result = new ListPopupContent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ListPopupContent_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","initialize",0x6a388222,"haxe.ui.toolkit.controls.popups.ListPopupContent.initialize","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",37,0x70518bc1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->super::initialize();
		HX_STACK_LINE(40)
		this->_list->addEventListener(HX_CSTRING("haxeui_change"),this->_onListChange_dyn(),null(),null(),null());
		HX_STACK_LINE(42)
		this->addChild(this->_list);
		HX_STACK_LINE(43)
		int n = this->_maxListSize;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(44)
		int _g = this->_list->get_listSize();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		if (((n > _g))){
			HX_STACK_LINE(45)
			int _g1 = this->_list->get_listSize();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(45)
			n = _g1;
		}
		HX_STACK_LINE(48)
		Float _g2 = this->_list->get_itemHeight();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(48)
		Float _g3 = (n * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(48)
		Float _g4 = this->_list->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_top"),true)();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(48)
		Float _g5 = this->_list->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_bottom"),true)();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(48)
		Float _g6 = (_g4 + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(48)
		Float listHeight = (_g3 + _g6);		HX_STACK_VAR(listHeight,"listHeight");
		HX_STACK_LINE(49)
		this->_list->set_height(listHeight);
		HX_STACK_LINE(50)
		this->set_height(listHeight);
		HX_STACK_LINE(51)
		this->_list->setSelectedIndexNoEvent(this->_selectedIndex);
	}
return null();
}


int ListPopupContent_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","get_selectedIndex",0x45f4cf7c,"haxe.ui.toolkit.controls.popups.ListPopupContent.get_selectedIndex","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",60,0x70518bc1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	int index = this->_selectedIndex;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(62)
	if ((this->_list->get_ready())){
		HX_STACK_LINE(63)
		int _g = this->_list->get_selectedIndex();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(63)
		index = _g;
	}
	HX_STACK_LINE(65)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC0(ListPopupContent_obj,get_selectedIndex,return )

int ListPopupContent_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","set_selectedIndex",0x6962a788,"haxe.ui.toolkit.controls.popups.ListPopupContent.set_selectedIndex","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",68,0x70518bc1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(69)
	this->_selectedIndex = value;
	HX_STACK_LINE(70)
	if ((this->_list->get_ready())){
		HX_STACK_LINE(71)
		this->_list->set_selectedIndex(value);
	}
	HX_STACK_LINE(73)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListPopupContent_obj,set_selectedIndex,return )

int ListPopupContent_obj::get_listSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","get_listSize",0xb572cd9a,"haxe.ui.toolkit.controls.popups.ListPopupContent.get_listSize","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",76,0x70518bc1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	bool _g = this->_list->get_ready();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(77)
	if (((_g == false))){
		HX_STACK_LINE(78)
		return (int)-1;
	}
	HX_STACK_LINE(80)
	return this->_list->get_listSize();
}


HX_DEFINE_DYNAMIC_FUNC0(ListPopupContent_obj,get_listSize,return )

Void ListPopupContent_obj::_onListChange( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","_onListChange",0x8f0e6fba,"haxe.ui.toolkit.controls.popups.ListPopupContent._onListChange","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",91,0x70518bc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(92)
		::openfl::utils::Timer _g = ::openfl::utils::Timer_obj::__new(this->DELAY,(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(92)
		this->hideTimer = _g;
		HX_STACK_LINE(93)
		this->hideTimer->addEventListener(::openfl::events::TimerEvent_obj::TIMER_COMPLETE,this->_onTimerComplete_dyn(),null(),null(),null());
		HX_STACK_LINE(94)
		this->hideTimer->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListPopupContent_obj,_onListChange,(void))

Void ListPopupContent_obj::_onTimerComplete( ::openfl::events::TimerEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","_onTimerComplete",0x1524add2,"haxe.ui.toolkit.controls.popups.ListPopupContent._onTimerComplete","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",97,0x70518bc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(98)
		this->hideTimer->removeEventListener(::openfl::events::TimerEvent_obj::TIMER_COMPLETE,this->_onTimerComplete_dyn(),null());
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g = this->get_parent();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		if ((::Std_obj::is(_g,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::Popup >()))){
			HX_STACK_LINE(100)
			::haxe::ui::toolkit::controls::popups::Popup _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(100)
			_g1 = hx::TCast< haxe::ui::toolkit::controls::popups::Popup >::cast(this->get_parent());
			HX_STACK_LINE(100)
			::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->hidePopup(_g1,null());
		}
		HX_STACK_LINE(103)
		if (((this->_fn_dyn() != null()))){
			HX_STACK_LINE(104)
			Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g2 = this->_list->get_selectedItems();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(104)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item = _g2->__get((int)0);		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(105)
			int index = this->_list->getItemIndex(item);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(106)
			item->__Field(HX_CSTRING("get_data"),true)()->__FieldRef(HX_CSTRING("index")) = index;
			HX_STACK_LINE(107)
			this->_fn(item);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListPopupContent_obj,_onTimerComplete,(void))

Void ListPopupContent_obj::setSelectedIndexNoEvent( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","setSelectedIndexNoEvent",0x8f95cad2,"haxe.ui.toolkit.controls.popups.ListPopupContent.setSelectedIndexNoEvent","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",114,0x70518bc1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(115)
		this->_selectedIndex = index;
		HX_STACK_LINE(116)
		if ((this->_list->get_ready())){
			HX_STACK_LINE(117)
			this->_list->setSelectedIndexNoEvent(index);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListPopupContent_obj,setSelectedIndexNoEvent,(void))

Dynamic ListPopupContent_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","clone",0x2fcb73cb,"haxe.ui.toolkit.controls.popups.ListPopupContent.clone","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",1,0x70518bc1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::ListPopupContent c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ListPopupContent_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.ListPopupContent","self",0xe72e92de,"haxe.ui.toolkit.controls.popups.ListPopupContent.self","haxe/ui/toolkit/controls/popups/ListPopupContent.hx",2,0x70518bc1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::popups::ListPopupContent_obj::__new(null(),null(),null());
}



ListPopupContent_obj::ListPopupContent_obj()
{
}

void ListPopupContent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListPopupContent);
	HX_MARK_MEMBER_NAME(_list,"_list");
	HX_MARK_MEMBER_NAME(_maxListSize,"_maxListSize");
	HX_MARK_MEMBER_NAME(hideTimer,"hideTimer");
	HX_MARK_MEMBER_NAME(_fn,"_fn");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(listSize,"listSize");
	HX_MARK_MEMBER_NAME(DELAY,"DELAY");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListPopupContent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_list,"_list");
	HX_VISIT_MEMBER_NAME(_maxListSize,"_maxListSize");
	HX_VISIT_MEMBER_NAME(hideTimer,"hideTimer");
	HX_VISIT_MEMBER_NAME(_fn,"_fn");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(listSize,"listSize");
	HX_VISIT_MEMBER_NAME(DELAY,"DELAY");
	::haxe::ui::toolkit::controls::popups::PopupContent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ListPopupContent_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { return _fn; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { return _list; }
		if (HX_FIELD_EQ(inName,"DELAY") ) { return DELAY; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listSize") ) { return inCallProp ? get_listSize() : listSize; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hideTimer") ) { return hideTimer; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxListSize") ) { return _maxListSize; }
		if (HX_FIELD_EQ(inName,"get_listSize") ) { return get_listSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"_onListChange") ) { return _onListChange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onTimerComplete") ) { return _onTimerComplete_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setSelectedIndexNoEvent") ) { return setSelectedIndexNoEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListPopupContent_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { _fn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< ::haxe::ui::toolkit::containers::ListView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DELAY") ) { DELAY=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listSize") ) { listSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hideTimer") ) { hideTimer=inValue.Cast< ::openfl::utils::Timer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxListSize") ) { _maxListSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListPopupContent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_list"));
	outFields->push(HX_CSTRING("_maxListSize"));
	outFields->push(HX_CSTRING("hideTimer"));
	outFields->push(HX_CSTRING("_selectedIndex"));
	outFields->push(HX_CSTRING("selectedIndex"));
	outFields->push(HX_CSTRING("listSize"));
	outFields->push(HX_CSTRING("DELAY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::ListView*/ ,(int)offsetof(ListPopupContent_obj,_list),HX_CSTRING("_list")},
	{hx::fsInt,(int)offsetof(ListPopupContent_obj,_maxListSize),HX_CSTRING("_maxListSize")},
	{hx::fsObject /*::openfl::utils::Timer*/ ,(int)offsetof(ListPopupContent_obj,hideTimer),HX_CSTRING("hideTimer")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListPopupContent_obj,_fn),HX_CSTRING("_fn")},
	{hx::fsInt,(int)offsetof(ListPopupContent_obj,_selectedIndex),HX_CSTRING("_selectedIndex")},
	{hx::fsInt,(int)offsetof(ListPopupContent_obj,listSize),HX_CSTRING("listSize")},
	{hx::fsInt,(int)offsetof(ListPopupContent_obj,DELAY),HX_CSTRING("DELAY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_list"),
	HX_CSTRING("_maxListSize"),
	HX_CSTRING("hideTimer"),
	HX_CSTRING("_fn"),
	HX_CSTRING("_selectedIndex"),
	HX_CSTRING("initialize"),
	HX_CSTRING("listSize"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("get_listSize"),
	HX_CSTRING("DELAY"),
	HX_CSTRING("_onListChange"),
	HX_CSTRING("_onTimerComplete"),
	HX_CSTRING("setSelectedIndexNoEvent"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListPopupContent_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListPopupContent_obj::__mClass,"__mClass");
};

#endif

Class ListPopupContent_obj::__mClass;

void ListPopupContent_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.popups.ListPopupContent"), hx::TCanCast< ListPopupContent_obj> ,sStaticFields,sMemberFields,
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

void ListPopupContent_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace popups
