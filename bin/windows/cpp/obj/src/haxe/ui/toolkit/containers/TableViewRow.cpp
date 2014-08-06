#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableView
#include <haxe/ui/toolkit/containers/TableView.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDef
#include <haxe/ui/toolkit/containers/TableViewColumnDef.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewColumnDefs
#include <haxe/ui/toolkit/containers/TableViewColumnDefs.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_TableViewRow
#include <haxe/ui/toolkit/containers/TableViewRow.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HProgress
#include <haxe/ui/toolkit/controls/HProgress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HSlider
#include <haxe/ui/toolkit/controls/HSlider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#include <haxe/ui/toolkit/controls/Slider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Spacer
#include <haxe/ui/toolkit/controls/Spacer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace containers{

Void TableViewRow_obj::__construct(::haxe::ui::toolkit::containers::TableView parentTable)
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","new",0xfb71bf33,"haxe.ui.toolkit.containers.TableViewRow.new","haxe/ui/toolkit/containers/TableView.hx",321,0x496fad85)
HX_STACK_THIS(this)
HX_STACK_ARG(parentTable,"parentTable")
{
	HX_STACK_LINE(322)
	super::__construct();
	HX_STACK_LINE(323)
	Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(323)
	this->_states = _g;
	HX_STACK_LINE(324)
	this->get_sprite()->buttonMode = true;
	HX_STACK_LINE(325)
	this->get_sprite()->useHandCursor = true;
	HX_STACK_LINE(326)
	this->set_state(HX_CSTRING("normal"));
	HX_STACK_LINE(327)
	this->_parentTable = parentTable;
}
;
	return null();
}

//TableViewRow_obj::~TableViewRow_obj() { }

Dynamic TableViewRow_obj::__CreateEmpty() { return  new TableViewRow_obj; }
hx::ObjectPtr< TableViewRow_obj > TableViewRow_obj::__new(::haxe::ui::toolkit::containers::TableView parentTable)
{  hx::ObjectPtr< TableViewRow_obj > result = new TableViewRow_obj();
	result->__construct(parentTable);
	return result;}

Dynamic TableViewRow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TableViewRow_obj > result = new TableViewRow_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *TableViewRow_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

Void TableViewRow_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","initialize",0x49eb12dd,"haxe.ui.toolkit.containers.TableViewRow.initialize","haxe/ui/toolkit/containers/TableView.hx",330,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(331)
		this->super::initialize();
		HX_STACK_LINE(333)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OVER,this->_onMouseOver_dyn(),null(),null(),null());
		HX_STACK_LINE(334)
		this->addEventListener(::openfl::events::MouseEvent_obj::MOUSE_OUT,this->_onMouseOut_dyn(),null(),null(),null());
		HX_STACK_LINE(335)
		this->addEventListener(::openfl::events::MouseEvent_obj::CLICK,this->_onMouseClick_dyn(),null(),null(),null());
	}
return null();
}


Void TableViewRow_obj::_onMouseOver( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","_onMouseOver",0x706ef9c8,"haxe.ui.toolkit.containers.TableViewRow._onMouseOver","haxe/ui/toolkit/containers/TableView.hx",342,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(342)
		this->set_state(HX_CSTRING("over"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,_onMouseOver,(void))

Void TableViewRow_obj::_onMouseOut( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","_onMouseOut",0x8114029a,"haxe.ui.toolkit.containers.TableViewRow._onMouseOut","haxe/ui/toolkit/containers/TableView.hx",346,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(346)
		if ((this->_parentTable->isSelected(hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(347)
			this->set_state(HX_CSTRING("selected"));
		}
		else{
			HX_STACK_LINE(349)
			this->set_state(HX_CSTRING("normal"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,_onMouseOut,(void))

Void TableViewRow_obj::_onMouseClick( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","_onMouseClick",0x01437954,"haxe.ui.toolkit.containers.TableViewRow._onMouseClick","haxe/ui/toolkit/containers/TableView.hx",353,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(360)
		this->_parentTable->handleListSelection(hx::ObjectPtr<OBJ_>(this),event,null());
		HX_STACK_LINE(361)
		this->_parentTable->handleClick(hx::ObjectPtr<OBJ_>(this),event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,_onMouseClick,(void))

Dynamic TableViewRow_obj::get_data( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","get_data",0xab0e8600,"haxe.ui.toolkit.containers.TableViewRow.get_data","haxe/ui/toolkit/containers/TableView.hx",372,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(372)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(TableViewRow_obj,get_data,return )

Dynamic TableViewRow_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","set_data",0x596bdf74,"haxe.ui.toolkit.containers.TableViewRow.set_data","haxe/ui/toolkit/containers/TableView.hx",374,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(375)
	this->_data = value;
	HX_STACK_LINE(376)
	{
		HX_STACK_LINE(376)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(376)
		Array< ::Dynamic > _g1 = this->_parentTable->get_columns()->iterator();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(376)
		while((true)){
			HX_STACK_LINE(376)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(376)
				break;
			}
			HX_STACK_LINE(376)
			Array< ::Dynamic > colDef = Array_obj< ::Dynamic >::__new().Add(_g1->__get(_g).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >());		HX_STACK_VAR(colDef,"colDef");
			HX_STACK_LINE(376)
			++(_g);
			HX_STACK_LINE(377)
			if ((::Reflect_obj::hasField(value,colDef->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->id))){
				HX_STACK_LINE(378)
				Array< ::Dynamic > c = Array_obj< ::Dynamic >::__new().Add(null());		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(379)
				Dynamic colValue = ::Reflect_obj::field(value,colDef->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->id);		HX_STACK_VAR(colValue,"colValue");
				HX_STACK_LINE(380)
				::String type = HX_CSTRING("text");		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(381)
				if ((::Std_obj::is(colValue,hx::ClassOf< ::String >()))){
					HX_STACK_LINE(382)
					::haxe::ui::toolkit::core::Component _g2 = this->createColumnComponent(colValue,HX_CSTRING("text"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(382)
					c[(int)0] = _g2;
				}
				else{
					HX_STACK_LINE(384)
					if ((::Reflect_obj::hasField(colValue,HX_CSTRING("type")))){
						HX_STACK_LINE(385)
						::String _g11;		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(385)
						_g11 = hx::TCast< String >::cast(::Reflect_obj::field(colValue,HX_CSTRING("type")));
						HX_STACK_LINE(385)
						type = _g11;
					}
					HX_STACK_LINE(387)
					Dynamic componentValue = null();		HX_STACK_VAR(componentValue,"componentValue");
					HX_STACK_LINE(388)
					if ((::Reflect_obj::hasField(colValue,HX_CSTRING("value")))){
						HX_STACK_LINE(389)
						Dynamic _g2 = ::Reflect_obj::field(colValue,HX_CSTRING("value"));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(389)
						componentValue = _g2;
					}
					HX_STACK_LINE(391)
					::haxe::ui::toolkit::core::Component _g3 = this->createColumnComponent(componentValue,type);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(391)
					c[(int)0] = _g3;
				}
				HX_STACK_LINE(394)
				if (((c->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Component >() != null()))){
					HX_STACK_LINE(395)
					if (((type == HX_CSTRING("list")))){
						HX_STACK_LINE(396)
						if ((::Reflect_obj::hasField(colValue,HX_CSTRING("dataSource")))){
							HX_STACK_LINE(397)
							Dynamic controlDataSource = ::Reflect_obj::field(colValue,HX_CSTRING("dataSource"));		HX_STACK_VAR(controlDataSource,"controlDataSource");
							HX_STACK_LINE(398)
							::haxe::ui::toolkit::data::IDataSource ds = null();		HX_STACK_VAR(ds,"ds");
							HX_STACK_LINE(399)
							if ((::Std_obj::is(controlDataSource,hx::ClassOf< Array<int> >()))){
								HX_STACK_LINE(400)
								::haxe::ui::toolkit::data::ArrayDataSource _g4 = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(400)
								ds = _g4;
								HX_STACK_LINE(401)
								{
									HX_STACK_LINE(401)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(401)
									Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(401)
									_g3 = hx::TCastToArray(controlDataSource);
									HX_STACK_LINE(401)
									while((true)){
										HX_STACK_LINE(401)
										if ((!(((_g2 < _g3->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(401)
											break;
										}
										HX_STACK_LINE(401)
										Dynamic o = _g3->__GetItem(_g2);		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(401)
										++(_g2);
										HX_STACK_LINE(402)
										ds->add(o);
									}
								}
							}
							HX_STACK_LINE(405)
							(hx::TCast< haxe::ui::toolkit::controls::selection::ListSelector >::cast(c->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Component >()))->set_dataSource(ds);
						}
					}
					HX_STACK_LINE(409)
					c->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Component >()->set_autoSize(true);
					HX_STACK_LINE(410)
					this->addChild(c->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Component >());

					HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,colDef,Array< ::Dynamic >,c)
					Void run(Dynamic e){
						HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","haxe/ui/toolkit/containers/TableView.hx",412,0x496fad85)
						HX_STACK_ARG(e,"e")
						{
							HX_STACK_LINE(412)
							if (((colDef->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->width <= (int)0))){
								HX_STACK_LINE(413)
								if (((c->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Component >()->get_width() > colDef->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->calculatedWidth))){
									HX_STACK_LINE(414)
									colDef->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->calculatedWidth = c->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Component >()->get_width();
								}
								else{
									HX_STACK_LINE(416)
									c->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Component >()->set_width(colDef->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->calculatedWidth);
								}
							}
							else{
								HX_STACK_LINE(419)
								c->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Component >()->set_width(colDef->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->width);
								HX_STACK_LINE(420)
								colDef->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->calculatedWidth = colDef->__get((int)0).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->width;
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC1((void))

					HX_STACK_LINE(411)
					c->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Component >()->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE, Dynamic(new _Function_5_1(colDef,c)),null(),null(),null());
				}
			}
		}
	}
	HX_STACK_LINE(426)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,set_data,return )

::haxe::ui::toolkit::core::Component TableViewRow_obj::createColumnComponent( Dynamic value,::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","createColumnComponent",0x1a22f2fe,"haxe.ui.toolkit.containers.TableViewRow.createColumnComponent","haxe/ui/toolkit/containers/TableView.hx",432,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(433)
	::haxe::ui::toolkit::core::Component c = null();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(434)
	if (((value == null()))){
		HX_STACK_LINE(435)
		::haxe::ui::toolkit::controls::Spacer _g = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(435)
		c = _g;
		HX_STACK_LINE(436)
		return c;
	}
	HX_STACK_LINE(438)
	::String _switch_1 = (type);
	if (  ( _switch_1==HX_CSTRING("text"))){
		HX_STACK_LINE(440)
		::haxe::ui::toolkit::controls::Text _g1 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(440)
		c = _g1;
		HX_STACK_LINE(441)
		c->set_autoSize(false);
		HX_STACK_LINE(442)
		::String _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(442)
		_g2 = hx::TCast< String >::cast(value);
		HX_STACK_LINE(442)
		(hx::TCast< haxe::ui::toolkit::controls::Text >::cast(c))->set_text(_g2);
		HX_STACK_LINE(443)
		Array< ::String > _g3 = this->get_states();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(443)
		(hx::TCast< haxe::ui::toolkit::controls::Text >::cast(c))->addStates(_g3,null());
	}
	else if (  ( _switch_1==HX_CSTRING("button"))){
		HX_STACK_LINE(445)
		::haxe::ui::toolkit::controls::Button _g4 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(445)
		c = _g4;
		HX_STACK_LINE(446)
		::String _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(446)
		_g5 = hx::TCast< String >::cast(value);
		HX_STACK_LINE(446)
		(hx::TCast< haxe::ui::toolkit::controls::Button >::cast(c))->set_text(_g5);
	}
	else if (  ( _switch_1==HX_CSTRING("slider"))){
		HX_STACK_LINE(448)
		::haxe::ui::toolkit::controls::HSlider _g6 = ::haxe::ui::toolkit::controls::HSlider_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(448)
		c = _g6;
		HX_STACK_LINE(449)
		Dynamic _g7 = ::Std_obj::parseInt(value);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(449)
		(hx::TCast< haxe::ui::toolkit::controls::HSlider >::cast(c))->set_pos(_g7);
	}
	else if (  ( _switch_1==HX_CSTRING("progress"))){
		HX_STACK_LINE(451)
		::haxe::ui::toolkit::controls::HProgress _g8 = ::haxe::ui::toolkit::controls::HProgress_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(451)
		c = _g8;
		HX_STACK_LINE(452)
		Dynamic _g9 = ::Std_obj::parseInt(value);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(452)
		(hx::TCast< haxe::ui::toolkit::controls::HProgress >::cast(c))->set_pos(_g9);
	}
	else if (  ( _switch_1==HX_CSTRING("list"))){
		HX_STACK_LINE(454)
		::haxe::ui::toolkit::controls::selection::ListSelector _g10 = ::haxe::ui::toolkit::controls::selection::ListSelector_obj::__new();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(454)
		c = _g10;
		HX_STACK_LINE(455)
		::String _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(455)
		_g11 = hx::TCast< String >::cast(value);
		HX_STACK_LINE(455)
		(hx::TCast< haxe::ui::toolkit::controls::selection::ListSelector >::cast(c))->set_text(_g11);
	}
	else  {
		HX_STACK_LINE(457)
		::haxe::ui::toolkit::controls::Spacer _g12 = ::haxe::ui::toolkit::controls::Spacer_obj::__new();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(457)
		c = _g12;
	}
;
;
	HX_STACK_LINE(459)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC2(TableViewRow_obj,createColumnComponent,return )

Void TableViewRow_obj::buildStyles( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","buildStyles",0x92f945c3,"haxe.ui.toolkit.containers.TableViewRow.buildStyles","haxe/ui/toolkit/containers/TableView.hx",466,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(466)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(466)
		Array< ::String > _g1 = this->get_states();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(466)
		while((true)){
			HX_STACK_LINE(466)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(466)
				break;
			}
			HX_STACK_LINE(466)
			::String s = _g1->__get(_g);		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(466)
			++(_g);
			HX_STACK_LINE(467)
			::haxe::ui::toolkit::style::Style stateStyle = ::haxe::ui::toolkit::style::StyleManager_obj::get_instance()->buildStyleFor(hx::ObjectPtr<OBJ_>(this),s);		HX_STACK_VAR(stateStyle,"stateStyle");
			HX_STACK_LINE(468)
			if (((stateStyle != null()))){
				HX_STACK_LINE(470)
				this->storeStyle(s,stateStyle);
			}
		}
	}
return null();
}


Void TableViewRow_obj::addStates( Array< ::String > stateNames){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","addStates",0xa7955d56,"haxe.ui.toolkit.containers.TableViewRow.addStates","haxe/ui/toolkit/containers/TableView.hx",475,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stateNames,"stateNames")
		HX_STACK_LINE(476)
		{
			HX_STACK_LINE(476)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(476)
			while((true)){
				HX_STACK_LINE(476)
				if ((!(((_g < stateNames->length))))){
					HX_STACK_LINE(476)
					break;
				}
				HX_STACK_LINE(476)
				::String stateName = stateNames->__get(_g);		HX_STACK_VAR(stateName,"stateName");
				HX_STACK_LINE(476)
				++(_g);
				HX_STACK_LINE(477)
				this->_states->push(stateName);
			}
		}
		HX_STACK_LINE(479)
		if ((this->_ready)){
			HX_STACK_LINE(480)
			this->buildStyles();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,addStates,(void))

::String TableViewRow_obj::get_state( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","get_state",0xb12a217b,"haxe.ui.toolkit.containers.TableViewRow.get_state","haxe/ui/toolkit/containers/TableView.hx",491,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(491)
	return this->_state;
}


HX_DEFINE_DYNAMIC_FUNC0(TableViewRow_obj,get_state,return )

::String TableViewRow_obj::set_state( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","set_state",0x947b0d87,"haxe.ui.toolkit.containers.TableViewRow.set_state","haxe/ui/toolkit/containers/TableView.hx",494,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(495)
	if (((this->_state != value))){
		HX_STACK_LINE(496)
		this->_state = value;
		HX_STACK_LINE(497)
		::haxe::ui::toolkit::style::Style _g = this->retrieveStyle(this->_state);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(497)
		if (((_g != null()))){
			HX_STACK_LINE(498)
			::haxe::ui::toolkit::style::Style _g1 = this->retrieveStyle(this->_state);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(498)
			this->set_style(_g1);
		}
		else{
			HX_STACK_LINE(500)
			this->invalidate((int)4096,null());
		}
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(503)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g11 = this->get_children();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(503)
			while((true)){
				HX_STACK_LINE(503)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(503)
					break;
				}
				HX_STACK_LINE(503)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject c = _g11->__get(_g1);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(503)
				++(_g1);
				HX_STACK_LINE(504)
				if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::controls::Text >()))){
					HX_STACK_LINE(505)
					Float cx = (hx::TCast< haxe::ui::toolkit::controls::Text >::cast(c))->get_width();		HX_STACK_VAR(cx,"cx");
					HX_STACK_LINE(506)
					(hx::TCast< haxe::ui::toolkit::controls::Text >::cast(c))->set_state(value);
					HX_STACK_LINE(507)
					(hx::TCast< haxe::ui::toolkit::controls::Text >::cast(c))->set_width(cx);
				}
			}
		}
	}
	HX_STACK_LINE(511)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,set_state,return )

Array< ::String > TableViewRow_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","get_states",0x53b32a98,"haxe.ui.toolkit.containers.TableViewRow.get_states","haxe/ui/toolkit/containers/TableView.hx",515,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(515)
	return Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("over")).Add(HX_CSTRING("selected"));
}


HX_DEFINE_DYNAMIC_FUNC0(TableViewRow_obj,get_states,return )

bool TableViewRow_obj::hasState( ::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","hasState",0xf95434a4,"haxe.ui.toolkit.containers.TableViewRow.hasState","haxe/ui/toolkit/containers/TableView.hx",518,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(519)
	Array< ::String > _g = this->get_states();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(519)
	if (((_g == null()))){
		HX_STACK_LINE(520)
		return false;
	}
	HX_STACK_LINE(522)
	Array< ::String > _g1 = this->get_states();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(522)
	int _g2 = ::Lambda_obj::indexOf(_g1,state);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(522)
	return (_g2 != (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(TableViewRow_obj,hasState,return )

Dynamic TableViewRow_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","clone",0xb9f89cf0,"haxe.ui.toolkit.containers.TableViewRow.clone","haxe/ui/toolkit/containers/TableViewRow.hx",1,0x23e4ec9d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::TableViewRow c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic TableViewRow_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableViewRow","self",0x0b639559,"haxe.ui.toolkit.containers.TableViewRow.self","haxe/ui/toolkit/containers/TableViewRow.hx",2,0x23e4ec9d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::TableViewRow_obj::__new(null());
}


::String TableViewRow_obj::STATE_NORMAL;

::String TableViewRow_obj::STATE_OVER;

::String TableViewRow_obj::STATE_SELECTED;


TableViewRow_obj::TableViewRow_obj()
{
}

void TableViewRow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TableViewRow);
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_states,"_states");
	HX_MARK_MEMBER_NAME(_parentTable,"_parentTable");
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(states,"states");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TableViewRow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_states,"_states");
	HX_VISIT_MEMBER_NAME(_parentTable,"_parentTable");
	HX_VISIT_MEMBER_NAME(hash,"hash");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(states,"states");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TableViewRow_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash; }
		if (HX_FIELD_EQ(inName,"data") ) { return get_data(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"states") ) { return inCallProp ? get_states() : states; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { return _states; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"hasState") ) { return hasState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addStates") ) { return addStates_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_onMouseOut") ) { return _onMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"buildStyles") ) { return buildStyles_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_parentTable") ) { return _parentTable; }
		if (HX_FIELD_EQ(inName,"_onMouseOver") ) { return _onMouseOver_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_onMouseClick") ) { return _onMouseClick_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createColumnComponent") ) { return createColumnComponent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TableViewRow_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"state") ) { return set_state(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_states") ) { _states=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_parentTable") ) { _parentTable=inValue.Cast< ::haxe::ui::toolkit::containers::TableView >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TableViewRow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_states"));
	outFields->push(HX_CSTRING("_parentTable"));
	outFields->push(HX_CSTRING("hash"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("state"));
	outFields->push(HX_CSTRING("states"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STATE_NORMAL"),
	HX_CSTRING("STATE_OVER"),
	HX_CSTRING("STATE_SELECTED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TableViewRow_obj,_state),HX_CSTRING("_state")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TableViewRow_obj,_states),HX_CSTRING("_states")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::TableView*/ ,(int)offsetof(TableViewRow_obj,_parentTable),HX_CSTRING("_parentTable")},
	{hx::fsString,(int)offsetof(TableViewRow_obj,hash),HX_CSTRING("hash")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TableViewRow_obj,_data),HX_CSTRING("_data")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TableViewRow_obj,states),HX_CSTRING("states")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_state"),
	HX_CSTRING("_states"),
	HX_CSTRING("_parentTable"),
	HX_CSTRING("initialize"),
	HX_CSTRING("_onMouseOver"),
	HX_CSTRING("_onMouseOut"),
	HX_CSTRING("_onMouseClick"),
	HX_CSTRING("hash"),
	HX_CSTRING("_data"),
	HX_CSTRING("get_data"),
	HX_CSTRING("set_data"),
	HX_CSTRING("createColumnComponent"),
	HX_CSTRING("buildStyles"),
	HX_CSTRING("addStates"),
	HX_CSTRING("states"),
	HX_CSTRING("get_state"),
	HX_CSTRING("set_state"),
	HX_CSTRING("get_states"),
	HX_CSTRING("hasState"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableViewRow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TableViewRow_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(TableViewRow_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(TableViewRow_obj::STATE_SELECTED,"STATE_SELECTED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableViewRow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TableViewRow_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(TableViewRow_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(TableViewRow_obj::STATE_SELECTED,"STATE_SELECTED");
};

#endif

Class TableViewRow_obj::__mClass;

void TableViewRow_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.TableViewRow"), hx::TCanCast< TableViewRow_obj> ,sStaticFields,sMemberFields,
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

void TableViewRow_obj::__boot()
{
	STATE_NORMAL= HX_CSTRING("normal");
	STATE_OVER= HX_CSTRING("over");
	STATE_SELECTED= HX_CSTRING("selected");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
