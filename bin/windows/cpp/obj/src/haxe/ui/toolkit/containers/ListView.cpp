#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_controls_Scroll
#include <haxe/ui/toolkit/controls/Scroll.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_VScroll
#include <haxe/ui/toolkit/controls/VScroll.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer
#include <haxe/ui/toolkit/core/renderers/BasicItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void ListView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","new",0xf20d97cf,"haxe.ui.toolkit.containers.ListView.new","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	this->_lastSelection = (int)-1;
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(34)
	this->set_autoSize(false);
	HX_STACK_LINE(35)
	::haxe::ui::toolkit::data::ArrayDataSource _g = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	this->set_dataSource(_g);
	HX_STACK_LINE(36)
	Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g1 = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(36)
	this->_selectedItems = _g1;
	HX_STACK_LINE(37)
	::haxe::ui::toolkit::containers::VBox _g2 = ::haxe::ui::toolkit::containers::VBox_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(37)
	this->_content = _g2;
	HX_STACK_LINE(38)
	this->_content->set_id(HX_CSTRING("content"));
	HX_STACK_LINE(39)
	this->_content->set_percentWidth((int)100);
	HX_STACK_LINE(40)
	this->addChild(this->_content);
	HX_STACK_LINE(42)
	this->_itemRenderer = hx::ClassOf< ::haxe::ui::toolkit::core::renderers::BasicItemRenderer >();
}
;
	return null();
}

//ListView_obj::~ListView_obj() { }

Dynamic ListView_obj::__CreateEmpty() { return  new ListView_obj; }
hx::ObjectPtr< ListView_obj > ListView_obj::__new()
{  hx::ObjectPtr< ListView_obj > result = new ListView_obj();
	result->__construct();
	return result;}

Dynamic ListView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListView_obj > result = new ListView_obj();
	result->__construct();
	return result;}

hx::Object *ListView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
	return super::__ToInterface(inType);
}

Void ListView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","initialize",0x97b7c5c1,"haxe.ui.toolkit.containers.ListView.initialize","haxe/ui/toolkit/containers/ListView.hx",48,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		this->super::initialize();
		HX_STACK_LINE(51)
		if (((this->_dataSource == null()))){
			HX_STACK_LINE(52)
			::haxe::ui::toolkit::data::ArrayDataSource _g = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			this->set_dataSource(_g);
		}
		HX_STACK_LINE(55)
		this->_dataSource->open();
		HX_STACK_LINE(57)
		this->syncUI();
		HX_STACK_LINE(58)
		this->checkScrolls();
	}
return null();
}


Void ListView_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","invalidate",0x3226adec,"haxe.ui.toolkit.containers.ListView.invalidate","haxe/ui/toolkit/containers/ListView.hx",61,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(62)
		if (((bool(!(this->_ready)) || bool(this->_invalidating)))){
			HX_STACK_LINE(63)
			return null();
		}
		HX_STACK_LINE(66)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(67)
		if (((((int(type) & int((int)65536))) == (int)65536))){
			HX_STACK_LINE(68)
			this->syncUI();
		}
	}
return null();
}


Void ListView_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","dispose",0x24702b8e,"haxe.ui.toolkit.containers.ListView.dispose","haxe/ui/toolkit/containers/ListView.hx",72,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		if (((this->_dataSource != null()))){
			HX_STACK_LINE(74)
			this->_dataSource->close();
		}
		HX_STACK_LINE(76)
		this->super::dispose();
	}
return null();
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ListView_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","addChild",0x5528b5ec,"haxe.ui.toolkit.containers.ListView.addChild","haxe/ui/toolkit/containers/ListView.hx",79,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(80)
	if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >()))){
		HX_STACK_LINE(81)
		this->_itemRenderer = child;
		HX_STACK_LINE(82)
		return child;
	}
	HX_STACK_LINE(84)
	return this->super::addChild(child);
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject ListView_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","addChildAt",0x793341ff,"haxe.ui.toolkit.containers.ListView.addChildAt","haxe/ui/toolkit/containers/ListView.hx",88,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(88)
	return this->super::addChildAt(child,index);
}


int ListView_obj::get_listSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_listSize",0xb40176f9,"haxe.ui.toolkit.containers.ListView.get_listSize","haxe/ui/toolkit/containers/ListView.hx",102,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return this->_content->get_children()->length;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_listSize,return )

Float ListView_obj::get_itemHeight( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_itemHeight",0x9d6d7a94,"haxe.ui.toolkit.containers.ListView.get_itemHeight","haxe/ui/toolkit/containers/ListView.hx",105,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(106)
	if (((this->_content->get_children()->length == (int)0))){
		HX_STACK_LINE(107)
		return (int)0;
	}
	HX_STACK_LINE(109)
	int n = (int)0;		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(110)
	Float _g = this->_content->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_top"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(110)
	Float _g1 = this->_content->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_bottom"),true)();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(110)
	Float cy = (_g + _g1);		HX_STACK_VAR(cy,"cy");
	HX_STACK_LINE(111)
	int scy = this->_content->get_layout()->__Field(HX_CSTRING("get_spacingY"),true)();		HX_STACK_VAR(scy,"scy");
	HX_STACK_LINE(112)
	{
		HX_STACK_LINE(112)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(112)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g11 = this->_content->get_children();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(112)
		while((true)){
			HX_STACK_LINE(112)
			if ((!(((_g2 < _g11->length))))){
				HX_STACK_LINE(112)
				break;
			}
			HX_STACK_LINE(112)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g11->__get(_g2);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(112)
			++(_g2);
			HX_STACK_LINE(113)
			Float _g21 = child->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(113)
			Float _g3 = (_g21 + scy);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(113)
			hx::AddEq(cy,_g3);
			HX_STACK_LINE(114)
			(n)++;
			HX_STACK_LINE(115)
			if (((n > (int)100))){
				HX_STACK_LINE(116)
				break;
			}
		}
	}
	HX_STACK_LINE(119)
	if (((n > (int)0))){
		HX_STACK_LINE(120)
		hx::SubEq(cy,scy);
	}
	HX_STACK_LINE(122)
	return (Float(cy) / Float(n));
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemHeight,return )

::haxe::ui::toolkit::core::interfaces::IItemRenderer ListView_obj::getItem( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","getItem",0x81661fb8,"haxe.ui.toolkit.containers.ListView.getItem","haxe/ui/toolkit/containers/ListView.hx",125,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(126)
	Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g = this->_content->get_children();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(126)
	return hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(_g->__get(index));
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,getItem,return )

Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > ListView_obj::get_selectedItems( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_selectedItems",0x1480deab,"haxe.ui.toolkit.containers.ListView.get_selectedItems","haxe/ui/toolkit/containers/ListView.hx",130,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	return this->_selectedItems;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedItems,return )

int ListView_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_selectedIndex",0x1088cdbd,"haxe.ui.toolkit.containers.ListView.get_selectedIndex","haxe/ui/toolkit/containers/ListView.hx",133,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(135)
	if (((bool((this->_selectedItems != null())) && bool((this->_selectedItems->length > (int)0))))){
		HX_STACK_LINE(136)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g = this->_content->get_children();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		int _g1 = ::Lambda_obj::indexOf(_g,this->_selectedItems->__get((int)0));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		index = _g1;
	}
	HX_STACK_LINE(138)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_selectedIndex,return )

int ListView_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_selectedIndex",0x33f6a5c9,"haxe.ui.toolkit.containers.ListView.set_selectedIndex","haxe/ui/toolkit/containers/ListView.hx",141,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(142)
	if (((this->_ready == false))){
		HX_STACK_LINE(143)
		return value;
	}
	HX_STACK_LINE(146)
	if (((value < (int)0))){
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g1 = this->_selectedItems;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			while((true)){
				HX_STACK_LINE(147)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(147)
					break;
				}
				HX_STACK_LINE(147)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer selectedItem = _g1->__get(_g);		HX_STACK_VAR(selectedItem,"selectedItem");
				HX_STACK_LINE(147)
				++(_g);
				HX_STACK_LINE(148)
				selectedItem->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("normal"));
			}
		}
		HX_STACK_LINE(150)
		Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		this->_selectedItems = _g;
	}
	else{
		HX_STACK_LINE(152)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g1 = this->_content->getChildAt(value);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(152)
		if (((_g1 != null()))){
			HX_STACK_LINE(153)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(153)
			item = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(value));
			HX_STACK_LINE(154)
			if (((item != null()))){
				HX_STACK_LINE(155)
				this->handleListSelection(item,null(),null());
			}
		}
	}
	HX_STACK_LINE(160)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_selectedIndex,return )

::haxe::ui::toolkit::core::Component ListView_obj::get_content( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_content",0x91773bbf,"haxe.ui.toolkit.containers.ListView.get_content","haxe/ui/toolkit/containers/ListView.hx",163,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	::haxe::ui::toolkit::core::Component c = null();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(165)
	int _g = this->get_numChildren();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(165)
	if (((_g > (int)0))){
		HX_STACK_LINE(166)
		::haxe::ui::toolkit::core::Component _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		_g1 = hx::TCast< haxe::ui::toolkit::core::Component >::cast(this->getChildAt((int)0));
		HX_STACK_LINE(166)
		c = _g1;
	}
	HX_STACK_LINE(168)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_content,return )

Dynamic ListView_obj::get_itemRenderer( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_itemRenderer",0x6f40fd30,"haxe.ui.toolkit.containers.ListView.get_itemRenderer","haxe/ui/toolkit/containers/ListView.hx",172,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	return this->_itemRenderer;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_itemRenderer,return )

Dynamic ListView_obj::set_itemRenderer( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_itemRenderer",0xc582eaa4,"haxe.ui.toolkit.containers.ListView.set_itemRenderer","haxe/ui/toolkit/containers/ListView.hx",175,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(176)
	this->_itemRenderer = value;
	HX_STACK_LINE(177)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_itemRenderer,return )

::haxe::ui::toolkit::data::IDataSource ListView_obj::get_dataSource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","get_dataSource",0xcae71fdf,"haxe.ui.toolkit.containers.ListView.get_dataSource","haxe/ui/toolkit/containers/ListView.hx",186,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	return this->_dataSource;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,get_dataSource,return )

::haxe::ui::toolkit::data::IDataSource ListView_obj::set_dataSource( ::haxe::ui::toolkit::data::IDataSource value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_dataSource",0xeb070853,"haxe.ui.toolkit.containers.ListView.set_dataSource","haxe/ui/toolkit/containers/ListView.hx",189,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(190)
	if (((this->_dataSource != null()))){
		HX_STACK_LINE(191)
		if ((::Std_obj::is(this->_dataSource,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >()))){
			HX_STACK_LINE(192)
			(hx::TCast< haxe::ui::toolkit::core::interfaces::IEventDispatcher >::cast(this->_dataSource))->removeEventListener(::openfl::events::Event_obj::CHANGE,this->_onDataSourceChanged_dyn(),null());
		}
	}
	HX_STACK_LINE(196)
	this->_dataSource = value;
	HX_STACK_LINE(198)
	if ((::Std_obj::is(this->_dataSource,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >()))){
		HX_STACK_LINE(199)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IEventDispatcher >::cast(this->_dataSource))->addEventListener(::openfl::events::Event_obj::CHANGE,this->_onDataSourceChanged_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(202)
	if (((this->_ready == true))){
		HX_STACK_LINE(203)
		this->syncUI();
	}
	HX_STACK_LINE(205)
	this->_lastSelection = (int)-1;
	HX_STACK_LINE(206)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_dataSource,return )

Void ListView_obj::_onDataSourceChanged( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onDataSourceChanged",0x396edf62,"haxe.ui.toolkit.containers.ListView._onDataSourceChanged","haxe/ui/toolkit/containers/ListView.hx",210,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(210)
		this->syncUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onDataSourceChanged,(void))

Void ListView_obj::syncUI( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","syncUI",0xea42d960,"haxe.ui.toolkit.containers.ListView.syncUI","haxe/ui/toolkit/containers/ListView.hx",216,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		int pos = (int)0;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(218)
		if (((this->_dataSource != null()))){
			HX_STACK_LINE(219)
			if ((this->get_dataSource()->moveFirst())){
				HX_STACK_LINE(220)
				while((true)){
					HX_STACK_LINE(221)
					::String dataHash = this->get_dataSource()->hash();		HX_STACK_VAR(dataHash,"dataHash");
					HX_STACK_LINE(222)
					Dynamic data = this->get_dataSource()->get();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(223)
					::haxe::ui::toolkit::core::interfaces::IItemRenderer item = null();		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(224)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->_content->getChildAt(pos);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(224)
					if (((_g != null()))){
						HX_STACK_LINE(225)
						::haxe::ui::toolkit::core::interfaces::IItemRenderer _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(225)
						_g1 = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(pos));
						HX_STACK_LINE(225)
						item = _g1;
					}
					HX_STACK_LINE(228)
					if (((item == null()))){
						HX_STACK_LINE(229)
						this->addListViewItem(dataHash,data,pos);
						HX_STACK_LINE(230)
						(pos)++;
					}
					else{
						HX_STACK_LINE(232)
						if (((item->__Field(HX_CSTRING("hash"),true) == dataHash))){
							HX_STACK_LINE(233)
							item->__Field(HX_CSTRING("set_data"),true)(data);
							HX_STACK_LINE(234)
							(pos)++;
						}
						else{
							HX_STACK_LINE(236)
							while((true)){
								HX_STACK_LINE(236)
								if ((!(((bool((item != null())) && bool((item->__Field(HX_CSTRING("hash"),true) != dataHash))))))){
									HX_STACK_LINE(236)
									break;
								}
								HX_STACK_LINE(237)
								this->removeListViewItem(pos);
								HX_STACK_LINE(238)
								::haxe::ui::toolkit::core::interfaces::IItemRenderer _g2;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(238)
								_g2 = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(pos));
								HX_STACK_LINE(238)
								item = _g2;
							}
							HX_STACK_LINE(240)
							(pos)++;
						}
					}
					HX_STACK_LINE(220)
					if ((!(this->get_dataSource()->moveNext()))){
						HX_STACK_LINE(220)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(247)
		{
			HX_STACK_LINE(247)
			int _g1 = pos;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(247)
			int _g = this->_content->get_children()->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(247)
			while((true)){
				HX_STACK_LINE(247)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(247)
					break;
				}
				HX_STACK_LINE(247)
				int n = (_g1)++;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(248)
				this->removeListViewItem(n);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,syncUI,(void))

Void ListView_obj::addListViewItem( ::String dataHash,Dynamic data,hx::Null< int >  __o_index){
int index = __o_index.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","addListViewItem",0x74f53e46,"haxe.ui.toolkit.containers.ListView.addListViewItem","haxe/ui/toolkit/containers/ListView.hx",264,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dataHash,"dataHash")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(265)
		if (((data == null()))){
			HX_STACK_LINE(266)
			return null();
		}
		HX_STACK_LINE(269)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer item = this->createRendererInstance();		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(270)
		item->__Field(HX_CSTRING("set_autoSize"),true)(true);
		HX_STACK_LINE(271)
		item->__FieldRef(HX_CSTRING("hash")) = dataHash;
		HX_STACK_LINE(272)
		item->__Field(HX_CSTRING("set_percentWidth"),true)((int)100);
		HX_STACK_LINE(274)
		item->__Field(HX_CSTRING("set_data"),true)(data);
		HX_STACK_LINE(275)
		if ((::Std_obj::is(item,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >()))){
			HX_STACK_LINE(276)
			int _g = this->_content->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(276)
			int _g1 = hx::Mod(_g,(int)2);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(276)
			::String styleName;		HX_STACK_VAR(styleName,"styleName");
			HX_STACK_LINE(276)
			if (((_g1 == (int)0))){
				HX_STACK_LINE(276)
				styleName = HX_CSTRING("even");
			}
			else{
				HX_STACK_LINE(276)
				styleName = HX_CSTRING("odd");
			}
			HX_STACK_LINE(277)
			(hx::TCast< haxe::ui::toolkit::core::StyleableDisplayObject >::cast(item))->set_styleName(styleName);
		}
		HX_STACK_LINE(280)
		if (((index == (int)-1))){
			HX_STACK_LINE(281)
			this->_content->addChild(item);
		}
		else{
			HX_STACK_LINE(283)
			this->_content->addChildAt(item,index);
		}
		HX_STACK_LINE(286)
		this->invalidate((int)256,null());
		HX_STACK_LINE(288)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(item))->__Field(HX_CSTRING("addEventListener"),true)(HX_CSTRING("haxeui_mouseOver"),this->_onListItemMouseOver_dyn(),null(),null(),null());
		HX_STACK_LINE(289)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(item))->__Field(HX_CSTRING("addEventListener"),true)(HX_CSTRING("haxeui_mouseOut"),this->_onListItemMouseOut_dyn(),null(),null(),null());
		HX_STACK_LINE(290)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(item))->__Field(HX_CSTRING("addEventListener"),true)(HX_CSTRING("haxeui_click"),this->_onListItemClick_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ListView_obj,addListViewItem,(void))

Void ListView_obj::removeListViewItem( int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","removeListViewItem",0xebdd4c6b,"haxe.ui.toolkit.containers.ListView.removeListViewItem","haxe/ui/toolkit/containers/ListView.hx",293,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(294)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer item;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(294)
		item = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(index));
		HX_STACK_LINE(295)
		int sIndex = ::Lambda_obj::indexOf(this->_selectedItems,item);		HX_STACK_VAR(sIndex,"sIndex");
		HX_STACK_LINE(296)
		if (((sIndex != (int)-1))){
			HX_STACK_LINE(297)
			this->_selectedItems->remove(item);
		}
		HX_STACK_LINE(299)
		if (((item != null()))){
			HX_STACK_LINE(300)
			this->_content->removeChild(item,null());
			HX_STACK_LINE(301)
			this->invalidate((int)256,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,removeListViewItem,(void))

Void ListView_obj::_onListItemMouseOver( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onListItemMouseOver",0x01cd29db,"haxe.ui.toolkit.containers.ListView._onListItemMouseOver","haxe/ui/toolkit/containers/ListView.hx",305,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(306)
		::haxe::ui::toolkit::core::Component _g = event->get_component();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(306)
		if ((::Std_obj::is(_g,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStateComponent >()))){
			HX_STACK_LINE(307)
			(hx::TCast< haxe::ui::toolkit::core::interfaces::IStateComponent >::cast(event->get_component()))->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("over"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onListItemMouseOver,(void))

Void ListView_obj::_onListItemMouseOut( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onListItemMouseOut",0xbe92b5e7,"haxe.ui.toolkit.containers.ListView._onListItemMouseOut","haxe/ui/toolkit/containers/ListView.hx",311,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(312)
		::haxe::ui::toolkit::core::Component _g = event->get_component();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(312)
		if ((::Std_obj::is(_g,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStateComponent >()))){
			HX_STACK_LINE(313)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item = event->get_component();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(314)
			if ((this->isSelected(item))){
				HX_STACK_LINE(315)
				(hx::TCast< haxe::ui::toolkit::core::interfaces::IStateComponent >::cast(item))->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("selected"));
			}
			else{
				HX_STACK_LINE(317)
				(hx::TCast< haxe::ui::toolkit::core::interfaces::IStateComponent >::cast(item))->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("normal"));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onListItemMouseOut,(void))

Void ListView_obj::_onListItemClick( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","_onListItemClick",0x9a7ed30a,"haxe.ui.toolkit.containers.ListView._onListItemClick","haxe/ui/toolkit/containers/ListView.hx",322,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(323)
		::haxe::ui::toolkit::core::Component _g = event->get_component();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(323)
		if ((::Std_obj::is(_g,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >()))){
			HX_STACK_LINE(324)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer item = event->get_component();		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(325)
			if ((item->allowSelection(event->stageX,event->stageY))){
				HX_STACK_LINE(326)
				this->handleListSelection(item,event,null());
				HX_STACK_LINE(327)
				this->handleClick(item);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,_onListItemClick,(void))

Void ListView_obj::handleListSelection( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item,::haxe::ui::toolkit::events::UIEvent event,hx::Null< bool >  __o_raiseEvent){
bool raiseEvent = __o_raiseEvent.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","handleListSelection",0xa73ab8b5,"haxe.ui.toolkit.containers.ListView.handleListSelection","haxe/ui/toolkit/containers/ListView.hx",332,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(raiseEvent,"raiseEvent")
{
		HX_STACK_LINE(333)
		bool shiftPressed = false;		HX_STACK_VAR(shiftPressed,"shiftPressed");
		HX_STACK_LINE(334)
		bool ctrlPressed = false;		HX_STACK_VAR(ctrlPressed,"ctrlPressed");
		HX_STACK_LINE(336)
		if (((  (((event != null()))) ? bool(::Std_obj::is(event,hx::ClassOf< ::openfl::events::MouseEvent >())) : bool(false) ))){
			HX_STACK_LINE(337)
			::openfl::events::MouseEvent mouseEvent;		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(337)
			mouseEvent = hx::TCast< openfl::events::MouseEvent >::cast(event);
			HX_STACK_LINE(338)
			shiftPressed = mouseEvent->shiftKey;
			HX_STACK_LINE(339)
			ctrlPressed = mouseEvent->ctrlKey;
		}
		HX_STACK_LINE(342)
		if (((ctrlPressed == true))){
		}
		else{
			HX_STACK_LINE(344)
			if (((shiftPressed == true))){
			}
			else{
				HX_STACK_LINE(347)
				{
					HX_STACK_LINE(347)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(347)
					Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g1 = this->_selectedItems;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(347)
					while((true)){
						HX_STACK_LINE(347)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(347)
							break;
						}
						HX_STACK_LINE(347)
						::haxe::ui::toolkit::core::interfaces::IItemRenderer selectedItem = _g1->__get(_g);		HX_STACK_VAR(selectedItem,"selectedItem");
						HX_STACK_LINE(347)
						++(_g);
						HX_STACK_LINE(348)
						if (((selectedItem != item))){
							HX_STACK_LINE(349)
							selectedItem->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("normal"));
						}
					}
				}
				HX_STACK_LINE(352)
				Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(352)
				this->_selectedItems = _g;
			}
		}
		HX_STACK_LINE(355)
		if ((this->isSelected(item))){
			HX_STACK_LINE(356)
			this->_selectedItems->remove(item);
			HX_STACK_LINE(357)
			item->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("over"));
		}
		else{
			HX_STACK_LINE(359)
			this->_selectedItems->push(item);
			HX_STACK_LINE(360)
			item->__Field(HX_CSTRING("set_state"),true)(HX_CSTRING("selected"));
		}
		HX_STACK_LINE(363)
		this->ensureVisible(item);
		HX_STACK_LINE(365)
		if (((raiseEvent == true))){
			HX_STACK_LINE(366)
			int _g1 = this->get_selectedIndex();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(366)
			if (((_g1 != (int)-1))){
				HX_STACK_LINE(367)
				int _g2 = this->get_selectedIndex();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(367)
				::haxe::ui::toolkit::core::renderers::ItemRenderer item1 = this->_content->getChildAt(_g2);		HX_STACK_VAR(item1,"item1");
				HX_STACK_LINE(368)
				if (((item1 != null()))){
					HX_STACK_LINE(369)
					item1->dispatchProxyEvent(HX_CSTRING("haxeui_change"),event);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ListView_obj,handleListSelection,(void))

Void ListView_obj::handleClick( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","handleClick",0xecad75ef,"haxe.ui.toolkit.containers.ListView.handleClick","haxe/ui/toolkit/containers/ListView.hx",377,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(378)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g = this->_content->get_children();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(378)
		int index = ::Lambda_obj::indexOf(_g,item);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(379)
		if (((this->_lastSelection == index))){
			HX_STACK_LINE(380)
			::haxe::ui::toolkit::events::UIEvent event = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_doubleClick"),null(),null(),null());		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(381)
			this->dispatchEvent(event);
			HX_STACK_LINE(382)
			this->_lastSelection = (int)-1;
		}
		else{
			HX_STACK_LINE(384)
			this->_lastSelection = index;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,handleClick,(void))

bool ListView_obj::isSelected( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","isSelected",0xd718d0d6,"haxe.ui.toolkit.containers.ListView.isSelected","haxe/ui/toolkit/containers/ListView.hx",388,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(389)
	int _g = ::Lambda_obj::indexOf(this->_selectedItems,item);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(389)
	return (_g != (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,isSelected,return )

int ListView_obj::getItemIndex( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","getItemIndex",0x9ff5f03a,"haxe.ui.toolkit.containers.ListView.getItemIndex","haxe/ui/toolkit/containers/ListView.hx",395,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(396)
	int index = (int)-1;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(397)
	if (((item != null()))){
		HX_STACK_LINE(398)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g = this->_content->get_children();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		int _g1 = ::Lambda_obj::indexOf(_g,item);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		index = _g1;
	}
	HX_STACK_LINE(400)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,getItemIndex,return )

int ListView_obj::setSelectedIndexNoEvent( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","setSelectedIndexNoEvent",0xe52f6fd3,"haxe.ui.toolkit.containers.ListView.setSelectedIndexNoEvent","haxe/ui/toolkit/containers/ListView.hx",403,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(404)
	if (((this->_ready == false))){
		HX_STACK_LINE(405)
		return value;
	}
	HX_STACK_LINE(407)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->_content->getChildAt(value);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(407)
	if (((_g != null()))){
		HX_STACK_LINE(408)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer item;		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(408)
		item = hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_content->getChildAt(value));
		HX_STACK_LINE(409)
		if (((item != null()))){
			HX_STACK_LINE(410)
			this->handleListSelection(item,null(),false);
		}
	}
	HX_STACK_LINE(413)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,setSelectedIndexNoEvent,return )

Void ListView_obj::ensureVisible( ::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","ensureVisible",0xf4cc0683,"haxe.ui.toolkit.containers.ListView.ensureVisible","haxe/ui/toolkit/containers/ListView.hx",416,0x8f6b9b81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(417)
		if (((item == null()))){
			HX_STACK_LINE(418)
			return null();
		}
		HX_STACK_LINE(420)
		Float vpos = (int)0;		HX_STACK_VAR(vpos,"vpos");
		HX_STACK_LINE(421)
		if (((this->_vscroll != null()))){
			HX_STACK_LINE(422)
			Float _g = this->_vscroll->get_pos();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(422)
			vpos = _g;
		}
		HX_STACK_LINE(424)
		Float _g1 = item->__Field(HX_CSTRING("get_y"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(424)
		Float _g2 = item->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(424)
		Float _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(424)
		Float _g4 = this->_content->get_clipHeight();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(424)
		Float _g5 = (vpos + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(424)
		if (((_g3 > _g5))){
			HX_STACK_LINE(425)
			Float _g6 = item->__Field(HX_CSTRING("get_y"),true)();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(425)
			Float _g7 = item->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(425)
			Float _g8 = (_g6 + _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(425)
			Float _g9 = this->_content->get_clipHeight();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(425)
			Float _g10 = (_g8 - _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(425)
			this->_vscroll->set_pos(_g10);
		}
		else{
			HX_STACK_LINE(426)
			Float _g11 = item->__Field(HX_CSTRING("get_y"),true)();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(426)
			if (((_g11 < vpos))){
				HX_STACK_LINE(427)
				Float _g12 = item->__Field(HX_CSTRING("get_y"),true)();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(427)
				this->_vscroll->set_pos(_g12);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,ensureVisible,(void))

::haxe::ui::toolkit::core::interfaces::IItemRenderer ListView_obj::createRendererInstance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","createRendererInstance",0xeda51105,"haxe.ui.toolkit.containers.ListView.createRendererInstance","haxe/ui/toolkit/containers/ListView.hx",431,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(432)
	::haxe::ui::toolkit::core::interfaces::IItemRenderer r = null();		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(433)
	if (((this->_itemRenderer == null()))){
		HX_STACK_LINE(434)
		return null();
	}
	HX_STACK_LINE(437)
	if ((::Std_obj::is(this->_itemRenderer,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >()))){
		HX_STACK_LINE(438)
		::haxe::ui::toolkit::core::interfaces::IItemRenderer _g = (hx::TCast< haxe::ui::toolkit::core::interfaces::IItemRenderer >::cast(this->_itemRenderer))->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(438)
		r = _g;
	}
	else{
		HX_STACK_LINE(439)
		if ((::Std_obj::is(this->_itemRenderer,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(440)
			::Class cls;		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(440)
			cls = hx::TCast< Class >::cast(this->_itemRenderer);
			HX_STACK_LINE(441)
			::haxe::ui::toolkit::core::interfaces::IItemRenderer _g1 = ::Type_obj::createInstance(cls,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(441)
			r = _g1;
		}
		else{
			HX_STACK_LINE(442)
			if ((::Std_obj::is(this->_itemRenderer,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(443)
				::String classString;		HX_STACK_VAR(classString,"classString");
				HX_STACK_LINE(443)
				classString = hx::TCast< String >::cast(this->_itemRenderer);
				HX_STACK_LINE(444)
				::Class cls = ::Type_obj::resolveClass(classString);		HX_STACK_VAR(cls,"cls");
				HX_STACK_LINE(445)
				::haxe::ui::toolkit::core::interfaces::IItemRenderer _g2 = ::Type_obj::createInstance(cls,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(445)
				r = _g2;
			}
		}
	}
	HX_STACK_LINE(448)
	if (((r != null()))){
		HX_STACK_LINE(449)
		r->__FieldRef(HX_CSTRING("eventDispatcher")) = hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(452)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC0(ListView_obj,createRendererInstance,return )

Dynamic ListView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","clone",0x71b0d48c,"haxe.ui.toolkit.containers.ListView.clone","haxe/ui/toolkit/containers/ListView.hx",1,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::ListView c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ListView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","self",0xdd25453d,"haxe.ui.toolkit.containers.ListView.self","haxe/ui/toolkit/containers/ListView.hx",2,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::ListView_obj::__new();
}


Dynamic ListView_obj::set_onComponentEvent( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.ListView","set_onComponentEvent",0xf26e8fca,"haxe.ui.toolkit.containers.ListView.set_onComponentEvent","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(22)
	this->onComponentEvent = value;
	HX_STACK_LINE(22)
	this->addEventListener(HX_CSTRING("haxeui_componentEvent"),this->_handleEvent_dyn(),null(),null(),null());
	HX_STACK_LINE(27)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListView_obj,set_onComponentEvent,return )


ListView_obj::ListView_obj()
{
}

void ListView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListView);
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_content,"_content");
	HX_MARK_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_MARK_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_MARK_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_MARK_MEMBER_NAME(listSize,"listSize");
	HX_MARK_MEMBER_NAME(itemHeight,"itemHeight");
	HX_MARK_MEMBER_NAME(selectedItems,"selectedItems");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(onComponentEvent,"onComponentEvent");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_content,"_content");
	HX_VISIT_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_VISIT_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_VISIT_MEMBER_NAME(_itemRenderer,"_itemRenderer");
	HX_VISIT_MEMBER_NAME(listSize,"listSize");
	HX_VISIT_MEMBER_NAME(itemHeight,"itemHeight");
	HX_VISIT_MEMBER_NAME(selectedItems,"selectedItems");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(onComponentEvent,"onComponentEvent");
	::haxe::ui::toolkit::containers::ScrollView_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ListView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"syncUI") ) { return syncUI_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"content") ) { return inCallProp ? get_content() : content; }
		if (HX_FIELD_EQ(inName,"getItem") ) { return getItem_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { return _content; }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"listSize") ) { return inCallProp ? get_listSize() : listSize; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"itemHeight") ) { return inCallProp ? get_itemHeight() : itemHeight; }
		if (HX_FIELD_EQ(inName,"dataSource") ) { return get_dataSource(); }
		if (HX_FIELD_EQ(inName,"isSelected") ) { return isSelected_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return _dataSource; }
		if (HX_FIELD_EQ(inName,"get_content") ) { return get_content_dyn(); }
		if (HX_FIELD_EQ(inName,"handleClick") ) { return handleClick_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { return get_itemRenderer(); }
		if (HX_FIELD_EQ(inName,"get_listSize") ) { return get_listSize_dyn(); }
		if (HX_FIELD_EQ(inName,"getItemIndex") ) { return getItemIndex_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { return _itemRenderer; }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { return inCallProp ? get_selectedItems() : selectedItems; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"ensureVisible") ) { return ensureVisible_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { return _selectedItems; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { return _lastSelection; }
		if (HX_FIELD_EQ(inName,"get_itemHeight") ) { return get_itemHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return get_dataSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return set_dataSource_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"addListViewItem") ) { return addListViewItem_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_itemRenderer") ) { return get_itemRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"set_itemRenderer") ) { return set_itemRenderer_dyn(); }
		if (HX_FIELD_EQ(inName,"_onListItemClick") ) { return _onListItemClick_dyn(); }
		if (HX_FIELD_EQ(inName,"onComponentEvent") ) { return onComponentEvent; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedItems") ) { return get_selectedItems_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"removeListViewItem") ) { return removeListViewItem_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_onListItemMouseOut") ) { return _onListItemMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"handleListSelection") ) { return handleListSelection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_onDataSourceChanged") ) { return _onDataSourceChanged_dyn(); }
		if (HX_FIELD_EQ(inName,"_onListItemMouseOver") ) { return _onListItemMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onComponentEvent") ) { return set_onComponentEvent_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"createRendererInstance") ) { return createRendererInstance_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setSelectedIndexNoEvent") ) { return setSelectedIndexNoEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { _content=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"listSize") ) { listSize=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"itemHeight") ) { itemHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataSource") ) { return set_dataSource(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast< ::haxe::ui::toolkit::data::IDataSource >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"itemRenderer") ) { return set_itemRenderer(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_itemRenderer") ) { _itemRenderer=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { _selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { _lastSelection=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"onComponentEvent") ) { if (inCallProp) return set_onComponentEvent(inValue);onComponentEvent=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dataSource"));
	outFields->push(HX_CSTRING("_content"));
	outFields->push(HX_CSTRING("_selectedItems"));
	outFields->push(HX_CSTRING("_lastSelection"));
	outFields->push(HX_CSTRING("_itemRenderer"));
	outFields->push(HX_CSTRING("listSize"));
	outFields->push(HX_CSTRING("itemHeight"));
	outFields->push(HX_CSTRING("selectedItems"));
	outFields->push(HX_CSTRING("selectedIndex"));
	outFields->push(HX_CSTRING("content"));
	outFields->push(HX_CSTRING("itemRenderer"));
	outFields->push(HX_CSTRING("dataSource"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::data::IDataSource*/ ,(int)offsetof(ListView_obj,_dataSource),HX_CSTRING("_dataSource")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(ListView_obj,_content),HX_CSTRING("_content")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListView_obj,_selectedItems),HX_CSTRING("_selectedItems")},
	{hx::fsInt,(int)offsetof(ListView_obj,_lastSelection),HX_CSTRING("_lastSelection")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListView_obj,_itemRenderer),HX_CSTRING("_itemRenderer")},
	{hx::fsInt,(int)offsetof(ListView_obj,listSize),HX_CSTRING("listSize")},
	{hx::fsFloat,(int)offsetof(ListView_obj,itemHeight),HX_CSTRING("itemHeight")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListView_obj,selectedItems),HX_CSTRING("selectedItems")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(ListView_obj,content),HX_CSTRING("content")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ListView_obj,onComponentEvent),HX_CSTRING("onComponentEvent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_dataSource"),
	HX_CSTRING("_content"),
	HX_CSTRING("_selectedItems"),
	HX_CSTRING("_lastSelection"),
	HX_CSTRING("_itemRenderer"),
	HX_CSTRING("initialize"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("dispose"),
	HX_CSTRING("addChild"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("listSize"),
	HX_CSTRING("itemHeight"),
	HX_CSTRING("selectedItems"),
	HX_CSTRING("content"),
	HX_CSTRING("get_listSize"),
	HX_CSTRING("get_itemHeight"),
	HX_CSTRING("getItem"),
	HX_CSTRING("get_selectedItems"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("get_content"),
	HX_CSTRING("get_itemRenderer"),
	HX_CSTRING("set_itemRenderer"),
	HX_CSTRING("get_dataSource"),
	HX_CSTRING("set_dataSource"),
	HX_CSTRING("_onDataSourceChanged"),
	HX_CSTRING("syncUI"),
	HX_CSTRING("addListViewItem"),
	HX_CSTRING("removeListViewItem"),
	HX_CSTRING("_onListItemMouseOver"),
	HX_CSTRING("_onListItemMouseOut"),
	HX_CSTRING("_onListItemClick"),
	HX_CSTRING("handleListSelection"),
	HX_CSTRING("handleClick"),
	HX_CSTRING("isSelected"),
	HX_CSTRING("getItemIndex"),
	HX_CSTRING("setSelectedIndexNoEvent"),
	HX_CSTRING("ensureVisible"),
	HX_CSTRING("createRendererInstance"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	HX_CSTRING("onComponentEvent"),
	HX_CSTRING("set_onComponentEvent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListView_obj::__mClass,"__mClass");
};

#endif

Class ListView_obj::__mClass;

void ListView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.ListView"), hx::TCanCast< ListView_obj> ,sStaticFields,sMemberFields,
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

void ListView_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("onComponentEvent") , _Function_2_1::Block(),false);
						struct _Function_2_2{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/containers/ListView.hx",22,0x8f6b9b81)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("set_onComponentEvent") , _Function_2_2::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_CSTRING("fields") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
