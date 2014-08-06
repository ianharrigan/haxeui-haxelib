#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_selection_ListSelector
#include <haxe/ui/toolkit/controls/selection/ListSelector.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_DropShadowFilter
#include <openfl/filters/DropShadowFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace selection{

Void ListSelector_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","new",0x4331c907,"haxe.ui.toolkit.controls.selection.ListSelector.new","haxe/ui/toolkit/controls/selection/ListSelector.hx",32,0x5c9ca828)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(39)
	this->_selectedIndex = (int)-1;
	HX_STACK_LINE(36)
	this->_maxListSize = (int)4;
	HX_STACK_LINE(45)
	super::__construct();
	HX_STACK_LINE(46)
	this->set_toggle(true);
	HX_STACK_LINE(47)
	this->set_allowSelection(false);
	HX_STACK_LINE(48)
	this->dispatchChangeEvents = false;
}
;
	return null();
}

//ListSelector_obj::~ListSelector_obj() { }

Dynamic ListSelector_obj::__CreateEmpty() { return  new ListSelector_obj; }
hx::ObjectPtr< ListSelector_obj > ListSelector_obj::__new()
{  hx::ObjectPtr< ListSelector_obj > result = new ListSelector_obj();
	result->__construct();
	return result;}

Dynamic ListSelector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ListSelector_obj > result = new ListSelector_obj();
	result->__construct();
	return result;}

hx::Object *ListSelector_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
	return super::__ToInterface(inType);
}

Void ListSelector_obj::preInitialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","preInitialize",0x68be2eba,"haxe.ui.toolkit.controls.selection.ListSelector.preInitialize","haxe/ui/toolkit/controls/selection/ListSelector.hx",54,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->super::preInitialize();
		HX_STACK_LINE(57)
		if (((this->_style != null()))){
			HX_STACK_LINE(58)
			::String _g = this->_style->get_selectionMethod();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			if (((_g != null()))){
				HX_STACK_LINE(59)
				::String _g1 = this->_style->get_selectionMethod();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(59)
				this->_method = _g1;
			}
		}
	}
return null();
}


Void ListSelector_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","initialize",0x9df4ab89,"haxe.ui.toolkit.controls.selection.ListSelector.initialize","haxe/ui/toolkit/controls/selection/ListSelector.hx",64,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->super::initialize();
		HX_STACK_LINE(66)
		this->set_autoSize(false);
	}
return null();
}


Void ListSelector_obj::_onMouseClick( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","_onMouseClick",0x02f99428,"haxe.ui.toolkit.controls.selection.ListSelector._onMouseClick","haxe/ui/toolkit/controls/selection/ListSelector.hx",71,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::controls::selection::ListSelector_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",71,0x5c9ca828)
				{
					HX_STACK_LINE(71)
					bool _g = __this->_list->get_visible();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(71)
					return (_g == false);
				}
				return null();
			}
		};
		HX_STACK_LINE(71)
		if (((  ((!(((this->_list == null()))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(72)
			this->showList();
		}
		else{
			HX_STACK_LINE(74)
			this->hideList();
		}
	}
return null();
}


Void ListSelector_obj::applyStyle( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","applyStyle",0xe0a89b1c,"haxe.ui.toolkit.controls.selection.ListSelector.applyStyle","haxe/ui/toolkit/controls/selection/ListSelector.hx",78,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->super::applyStyle();
		HX_STACK_LINE(81)
		if (((this->_style != null()))){
			HX_STACK_LINE(82)
			::String _g = this->_style->get_selectionMethod();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			if (((  (((_g != null()))) ? bool((this->_method == null())) : bool(false) ))){
				HX_STACK_LINE(83)
				::String _g1 = this->_style->get_selectionMethod();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(83)
				this->_method = _g1;
			}
		}
	}
return null();
}


::haxe::ui::toolkit::data::IDataSource ListSelector_obj::get_dataSource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","get_dataSource",0x8a1e89a7,"haxe.ui.toolkit.controls.selection.ListSelector.get_dataSource","haxe/ui/toolkit/controls/selection/ListSelector.hx",96,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	if (((this->_dataSource == null()))){
		HX_STACK_LINE(98)
		::haxe::ui::toolkit::data::ArrayDataSource _g = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		this->_dataSource = _g;
	}
	HX_STACK_LINE(100)
	return this->_dataSource;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,get_dataSource,return )

::haxe::ui::toolkit::data::IDataSource ListSelector_obj::set_dataSource( ::haxe::ui::toolkit::data::IDataSource value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","set_dataSource",0xaa3e721b,"haxe.ui.toolkit.controls.selection.ListSelector.set_dataSource","haxe/ui/toolkit/controls/selection/ListSelector.hx",103,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(104)
	this->_dataSource = value;
	HX_STACK_LINE(105)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,set_dataSource,return )

Void ListSelector_obj::showList( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","showList",0x325229f4,"haxe.ui.toolkit.controls.selection.ListSelector.showList","haxe/ui/toolkit/controls/selection/ListSelector.hx",114,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(114)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		if (((this->_method == HX_CSTRING("popup")))){
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::data::IDataSource _g1 = this->get_dataSource();		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",116,0x5c9ca828)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_2,Array< ::Dynamic >,_g)
			Void run(::haxe::ui::toolkit::core::interfaces::IItemRenderer item){
				HX_STACK_FRAME("*","_Function_2_2",0x5201af79,"*._Function_2_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",116,0x5c9ca828)
				HX_STACK_ARG(item,"item")
				{
					HX_STACK_LINE(117)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->_selectedIndex = item->__Field(HX_CSTRING("get_data"),true)()->__Field(HX_CSTRING("index"),true);
					HX_STACK_LINE(118)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->set_text(item->__Field(HX_CSTRING("get_data"),true)()->__Field(HX_CSTRING("text"),true));
					HX_STACK_LINE(119)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->_selectedItems = Array_obj< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >::__new();
					HX_STACK_LINE(120)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->_selectedItems->push(item);
					HX_STACK_LINE(121)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->set_selected(false);
					HX_STACK_LINE(122)
					::haxe::ui::toolkit::events::UIEvent event = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_change"),null(),null(),null());		HX_STACK_VAR(event,"event");
					HX_STACK_LINE(123)
					_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->dispatchEvent(event);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(116)
			::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showList(_g1,this->_selectedIndex,HX_CSTRING("Select Item"),_Function_2_1::Block(), Dynamic(new _Function_2_2(_g)));
		}
		else{
			HX_STACK_LINE(126)
			if (((this->_list == null()))){
				HX_STACK_LINE(127)
				::haxe::ui::toolkit::containers::ListView _g1 = ::haxe::ui::toolkit::containers::ListView_obj::__new();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(127)
				this->_list = _g1;
				HX_STACK_LINE(128)
				this->_list->addEventListener(HX_CSTRING("haxeui_change"),this->_onListChange_dyn(),null(),null(),null());

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,_g)
				Void run(Dynamic e){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","haxe/ui/toolkit/controls/selection/ListSelector.hx",130,0x5c9ca828)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(130)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->showList();
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_STACK_LINE(129)
				this->_list->get_content()->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE, Dynamic(new _Function_3_1(_g)),null(),null(),null());
				HX_STACK_LINE(132)
				this->get_root()->addChild(this->_list);
				HX_STACK_LINE(133)
				return null();
			}
			HX_STACK_LINE(136)
			this->_list->set_dataSource(this->_dataSource);
			HX_STACK_LINE(137)
			this->get_root()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onRootMouseDown_dyn(),null(),null(),null());
			HX_STACK_LINE(138)
			this->get_root()->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,this->_onRootMouseDown_dyn(),null(),null(),null());
			HX_STACK_LINE(140)
			Float _g2 = this->get_stageX();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(140)
			Float _g3 = this->get_root()->get_stageX();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(140)
			Float _g4 = (_g2 - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(140)
			this->_list->set_x(_g4);
			HX_STACK_LINE(141)
			Float _g5 = this->get_stageY();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(141)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(141)
			Float _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(141)
			Float _g8 = this->get_root()->get_stageY();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(141)
			Float _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(141)
			this->_list->set_y(_g9);
			HX_STACK_LINE(142)
			Float _g10 = this->_list->get_width();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(142)
			if (((_g10 == (int)0))){
				HX_STACK_LINE(143)
				Float _g11 = this->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(143)
				this->_list->set_width(_g11);
			}
			HX_STACK_LINE(146)
			::openfl::filters::DropShadowFilter _g12 = ::openfl::filters::DropShadowFilter_obj::__new((int)4,(int)45,(int)8421504,(int)1,(int)4,(int)4,(int)1,(int)3,null(),null(),null());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(146)
			Dynamic _g13 = Dynamic( Array_obj<Dynamic>::__new().Add(_g12));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(146)
			this->_list->get_sprite()->set_filters(_g13);
			HX_STACK_LINE(149)
			int n = this->_maxListSize;		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(150)
			int _g14 = this->_list->get_listSize();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(150)
			if (((n > _g14))){
				HX_STACK_LINE(151)
				int _g15 = this->_list->get_listSize();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(151)
				n = _g15;
			}
			HX_STACK_LINE(154)
			Float _g16 = this->_list->get_itemHeight();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(154)
			Float _g17 = (n * _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(154)
			Float _g18 = this->_list->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_top"),true)();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(154)
			Float _g19 = this->_list->get_layout()->__Field(HX_CSTRING("get_padding"),true)()->__Field(HX_CSTRING("get_bottom"),true)();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(154)
			Float _g20 = (_g18 + _g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(154)
			Float listHeight = (_g17 + _g20);		HX_STACK_VAR(listHeight,"listHeight");
			HX_STACK_LINE(155)
			this->_list->set_height(listHeight);
			HX_STACK_LINE(156)
			this->_list->setSelectedIndexNoEvent(this->_selectedIndex);
			HX_STACK_LINE(158)
			::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >());		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(159)
			if (((transition == HX_CSTRING("slide")))){
				HX_STACK_LINE(160)
				this->_list->set_clipHeight((int)0);
				HX_STACK_LINE(161)
				this->_list->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(162)
				this->_list->set_visible(true);
				HX_STACK_LINE(163)
				::motion::easing::IEasing _g21 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g21,"_g21");
				struct _Function_3_1{
					inline static Dynamic Block( Float &listHeight){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",163,0x5c9ca828)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("clipHeight") , listHeight,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",164,0x5c9ca828)
					{
						HX_STACK_LINE(164)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->_list->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(163)
				::motion::Actuate_obj::tween(this->_list,.1,_Function_3_1::Block(listHeight),true,null())->ease(_g21)->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(166)
				if (((transition == HX_CSTRING("fade")))){
					HX_STACK_LINE(167)
					this->_list->get_sprite()->set_alpha((int)0);
					HX_STACK_LINE(168)
					this->_list->set_visible(true);
					HX_STACK_LINE(169)
					::openfl::display::Sprite _g22 = this->_list->get_sprite();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(169)
					::motion::easing::IEasing _g23 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g23,"_g23");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",169,0x5c9ca828)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)1,false);
								return __result;
							}
							return null();
						}
					};

					HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_4_2)
					Void run(){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",169,0x5c9ca828)
						{
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(169)
					::motion::Actuate_obj::tween(_g22,.2,_Function_4_1::Block(),true,null())->ease(_g23)->onComplete( Dynamic(new _Function_4_2()),null());
				}
				else{
					HX_STACK_LINE(172)
					this->_list->get_sprite()->set_alpha((int)1);
					HX_STACK_LINE(173)
					this->_list->set_visible(true);
				}
			}
			HX_STACK_LINE(176)
			this->set_selected(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,showList,(void))

Void ListSelector_obj::hideList( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","hideList",0x23995039,"haxe.ui.toolkit.controls.selection.ListSelector.hideList","haxe/ui/toolkit/controls/selection/ListSelector.hx",183,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_LINE(183)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		if (((this->_list != null()))){
			HX_STACK_LINE(185)
			::String transition = ::haxe::ui::toolkit::core::Toolkit_obj::getTransitionForClass(hx::ClassOf< ::haxe::ui::toolkit::controls::selection::ListSelector >());		HX_STACK_VAR(transition,"transition");
			HX_STACK_LINE(186)
			if (((transition == HX_CSTRING("slide")))){
				HX_STACK_LINE(187)
				this->_list->get_sprite()->set_alpha((int)1);
				HX_STACK_LINE(188)
				::motion::easing::IEasing _g1 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g1,"_g1");
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",188,0x5c9ca828)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("clipHeight") , (int)0,false);
							return __result;
						}
						return null();
					}
				};

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_2,Array< ::Dynamic >,_g)
				Void run(){
					HX_STACK_FRAME("*","_Function_3_2",0x520271ba,"*._Function_3_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",188,0x5c9ca828)
					{
						HX_STACK_LINE(189)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->_list->set_visible(false);
						HX_STACK_LINE(190)
						_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->_list->clearClip();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(188)
				::motion::Actuate_obj::tween(this->_list,.1,_Function_3_1::Block(),true,null())->ease(_g1)->onComplete( Dynamic(new _Function_3_2(_g)),null());
			}
			else{
				HX_STACK_LINE(192)
				if (((transition == HX_CSTRING("fade")))){
					HX_STACK_LINE(193)
					::openfl::display::Sprite _g1 = this->_list->get_sprite();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(193)
					::motion::easing::IEasing _g2 = ::motion::easing::Linear_obj::get_easeNone();		HX_STACK_VAR(_g2,"_g2");
					struct _Function_4_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/selection/ListSelector.hx",193,0x5c9ca828)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("alpha") , (int)0,false);
								return __result;
							}
							return null();
						}
					};

					HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_4_2,Array< ::Dynamic >,_g)
					Void run(){
						HX_STACK_FRAME("*","_Function_4_2",0x520333fb,"*._Function_4_2","haxe/ui/toolkit/controls/selection/ListSelector.hx",194,0x5c9ca828)
						{
							HX_STACK_LINE(194)
							_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::selection::ListSelector >()->_list->set_visible(false);
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(193)
					::motion::Actuate_obj::tween(_g1,.2,_Function_4_1::Block(),true,null())->ease(_g2)->onComplete( Dynamic(new _Function_4_2(_g)),null());
				}
				else{
					HX_STACK_LINE(197)
					this->_list->get_sprite()->set_alpha((int)1);
					HX_STACK_LINE(198)
					this->_list->set_visible(false);
				}
			}
			HX_STACK_LINE(201)
			this->set_selected(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,hideList,(void))

::String ListSelector_obj::get_method( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","get_method",0xab1be0e3,"haxe.ui.toolkit.controls.selection.ListSelector.get_method","haxe/ui/toolkit/controls/selection/ListSelector.hx",218,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	return this->_method;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,get_method,return )

::String ListSelector_obj::set_method( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","set_method",0xae997f57,"haxe.ui.toolkit.controls.selection.ListSelector.set_method","haxe/ui/toolkit/controls/selection/ListSelector.hx",221,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(222)
	this->_method = value;
	HX_STACK_LINE(223)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,set_method,return )

Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > ListSelector_obj::get_selectedItems( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","get_selectedItems",0x5d43c1e3,"haxe.ui.toolkit.controls.selection.ListSelector.get_selectedItems","haxe/ui/toolkit/controls/selection/ListSelector.hx",235,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(235)
	return this->_selectedItems;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,get_selectedItems,return )

int ListSelector_obj::get_selectedIndex( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","get_selectedIndex",0x594bb0f5,"haxe.ui.toolkit.controls.selection.ListSelector.get_selectedIndex","haxe/ui/toolkit/controls/selection/ListSelector.hx",240,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	return this->_selectedIndex;
}


HX_DEFINE_DYNAMIC_FUNC0(ListSelector_obj,get_selectedIndex,return )

int ListSelector_obj::set_selectedIndex( int value){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","set_selectedIndex",0x7cb98901,"haxe.ui.toolkit.controls.selection.ListSelector.set_selectedIndex","haxe/ui/toolkit/controls/selection/ListSelector.hx",243,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(244)
	this->_selectedIndex = value;
	HX_STACK_LINE(245)
	if (((this->_list != null()))){
		HX_STACK_LINE(246)
		this->_list->set_selectedIndex(value);
		HX_STACK_LINE(247)
		Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g = this->_list->get_selectedItems();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		this->_selectedItems = _g;
	}
	HX_STACK_LINE(249)
	if (((bool((this->_selectedIndex > (int)-1)) && bool((this->_dataSource != null()))))){
		HX_STACK_LINE(250)
		int n = (int)0;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(251)
		if ((this->get_dataSource()->moveFirst())){
			HX_STACK_LINE(252)
			while((true)){
				HX_STACK_LINE(253)
				if (((n == this->_selectedIndex))){
					HX_STACK_LINE(254)
					this->set_text(this->_dataSource->get()->__Field(HX_CSTRING("text"),true));
					HX_STACK_LINE(255)
					break;
				}
				HX_STACK_LINE(257)
				(n)++;
				HX_STACK_LINE(252)
				if ((!(this->get_dataSource()->moveNext()))){
					HX_STACK_LINE(252)
					break;
				}
			}
		}
	}
	HX_STACK_LINE(261)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,set_selectedIndex,return )

Void ListSelector_obj::_onRootMouseDown( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","_onRootMouseDown",0xf5b8e380,"haxe.ui.toolkit.controls.selection.ListSelector._onRootMouseDown","haxe/ui/toolkit/controls/selection/ListSelector.hx",267,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(268)
		bool mouseInList = false;		HX_STACK_VAR(mouseInList,"mouseInList");
		HX_STACK_LINE(269)
		if (((this->_list != null()))){
			HX_STACK_LINE(270)
			bool _g = this->_list->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(270)
			mouseInList = _g;
		}
		HX_STACK_LINE(273)
		bool mouseIn = this->hitTest(event->stageX,event->stageY);		HX_STACK_VAR(mouseIn,"mouseIn");
		HX_STACK_LINE(274)
		if (((bool((bool((mouseInList == false)) && bool((this->_list != null())))) && bool((mouseIn == false))))){
			HX_STACK_LINE(275)
			this->get_root()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_DOWN,this->_onRootMouseDown_dyn(),null());
			HX_STACK_LINE(276)
			this->get_root()->removeEventListener(::openfl::events::MouseEvent_obj::MOUSE_WHEEL,this->_onRootMouseDown_dyn(),null());
			HX_STACK_LINE(277)
			this->hideList();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,_onRootMouseDown,(void))

Void ListSelector_obj::_onListChange( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","_onListChange",0xb6a6e0b3,"haxe.ui.toolkit.controls.selection.ListSelector._onListChange","haxe/ui/toolkit/controls/selection/ListSelector.hx",281,0x5c9ca828)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(282)
		Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g = this->_list->get_selectedItems();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(282)
		if (((  (((_g != null()))) ? bool((this->_list->get_selectedItems()->length > (int)0)) : bool(false) ))){
			HX_STACK_LINE(283)
			this->set_text(this->_list->get_selectedItems()->__get((int)0)->__Field(HX_CSTRING("get_data"),true)()->__Field(HX_CSTRING("text"),true));
			HX_STACK_LINE(284)
			int _g1 = this->_list->get_selectedIndex();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(284)
			this->_selectedIndex = _g1;
			HX_STACK_LINE(285)
			Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > _g2 = this->_list->get_selectedItems();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(285)
			this->_selectedItems = _g2;
			HX_STACK_LINE(286)
			this->hideList();
			HX_STACK_LINE(288)
			::haxe::ui::toolkit::events::UIEvent event1 = ::haxe::ui::toolkit::events::UIEvent_obj::__new(HX_CSTRING("haxeui_change"),null(),null(),null());		HX_STACK_VAR(event1,"event1");
			HX_STACK_LINE(289)
			this->dispatchEvent(event1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ListSelector_obj,_onListChange,(void))

Dynamic ListSelector_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","clone",0x792dc3c4,"haxe.ui.toolkit.controls.selection.ListSelector.clone","haxe/ui/toolkit/controls/selection/ListSelector.hx",1,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::selection::ListSelector c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ListSelector_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.selection.ListSelector","self",0x8bac2505,"haxe.ui.toolkit.controls.selection.ListSelector.self","haxe/ui/toolkit/controls/selection/ListSelector.hx",2,0x5c9ca828)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();
}



ListSelector_obj::ListSelector_obj()
{
}

void ListSelector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListSelector);
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_list,"_list");
	HX_MARK_MEMBER_NAME(_maxListSize,"_maxListSize");
	HX_MARK_MEMBER_NAME(_method,"_method");
	HX_MARK_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_MARK_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_MARK_MEMBER_NAME(selectedItems,"selectedItems");
	::haxe::ui::toolkit::controls::Button_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ListSelector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_list,"_list");
	HX_VISIT_MEMBER_NAME(_maxListSize,"_maxListSize");
	HX_VISIT_MEMBER_NAME(_method,"_method");
	HX_VISIT_MEMBER_NAME(_selectedIndex,"_selectedIndex");
	HX_VISIT_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_VISIT_MEMBER_NAME(selectedItems,"selectedItems");
	::haxe::ui::toolkit::controls::Button_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ListSelector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { return _list; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return get_method(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_method") ) { return _method; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"showList") ) { return showList_dyn(); }
		if (HX_FIELD_EQ(inName,"hideList") ) { return hideList_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"applyStyle") ) { return applyStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"dataSource") ) { return get_dataSource(); }
		if (HX_FIELD_EQ(inName,"get_method") ) { return get_method_dyn(); }
		if (HX_FIELD_EQ(inName,"set_method") ) { return set_method_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return _dataSource; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxListSize") ) { return _maxListSize; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"preInitialize") ) { return preInitialize_dyn(); }
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		if (HX_FIELD_EQ(inName,"selectedItems") ) { return inCallProp ? get_selectedItems() : selectedItems; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"_onListChange") ) { return _onListChange_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { return _selectedIndex; }
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { return _selectedItems; }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return get_dataSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return set_dataSource_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_onRootMouseDown") ) { return _onRootMouseDown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedItems") ) { return get_selectedItems_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ListSelector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_list") ) { _list=inValue.Cast< ::haxe::ui::toolkit::containers::ListView >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return set_method(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_method") ) { _method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { return set_dataSource(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast< ::haxe::ui::toolkit::data::IDataSource >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_maxListSize") ) { _maxListSize=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedItems") ) { selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedIndex") ) { _selectedIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { _selectedItems=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListSelector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dataSource"));
	outFields->push(HX_CSTRING("_list"));
	outFields->push(HX_CSTRING("_maxListSize"));
	outFields->push(HX_CSTRING("_method"));
	outFields->push(HX_CSTRING("_selectedIndex"));
	outFields->push(HX_CSTRING("_selectedItems"));
	outFields->push(HX_CSTRING("dataSource"));
	outFields->push(HX_CSTRING("method"));
	outFields->push(HX_CSTRING("selectedItems"));
	outFields->push(HX_CSTRING("selectedIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::data::IDataSource*/ ,(int)offsetof(ListSelector_obj,_dataSource),HX_CSTRING("_dataSource")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::ListView*/ ,(int)offsetof(ListSelector_obj,_list),HX_CSTRING("_list")},
	{hx::fsInt,(int)offsetof(ListSelector_obj,_maxListSize),HX_CSTRING("_maxListSize")},
	{hx::fsString,(int)offsetof(ListSelector_obj,_method),HX_CSTRING("_method")},
	{hx::fsInt,(int)offsetof(ListSelector_obj,_selectedIndex),HX_CSTRING("_selectedIndex")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListSelector_obj,_selectedItems),HX_CSTRING("_selectedItems")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IItemRenderer >*/ ,(int)offsetof(ListSelector_obj,selectedItems),HX_CSTRING("selectedItems")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_dataSource"),
	HX_CSTRING("_list"),
	HX_CSTRING("_maxListSize"),
	HX_CSTRING("_method"),
	HX_CSTRING("_selectedIndex"),
	HX_CSTRING("_selectedItems"),
	HX_CSTRING("preInitialize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("_onMouseClick"),
	HX_CSTRING("applyStyle"),
	HX_CSTRING("get_dataSource"),
	HX_CSTRING("set_dataSource"),
	HX_CSTRING("showList"),
	HX_CSTRING("hideList"),
	HX_CSTRING("get_method"),
	HX_CSTRING("set_method"),
	HX_CSTRING("selectedItems"),
	HX_CSTRING("get_selectedItems"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("_onRootMouseDown"),
	HX_CSTRING("_onListChange"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListSelector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListSelector_obj::__mClass,"__mClass");
};

#endif

Class ListSelector_obj::__mClass;

void ListSelector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.selection.ListSelector"), hx::TCanCast< ListSelector_obj> ,sStaticFields,sMemberFields,
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

void ListSelector_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace selection
