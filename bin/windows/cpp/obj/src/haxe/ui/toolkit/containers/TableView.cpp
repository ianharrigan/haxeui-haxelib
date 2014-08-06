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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_ScrollView
#include <haxe/ui/toolkit/containers/ScrollView.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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

Void TableView_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","new",0xd8105f4b,"haxe.ui.toolkit.containers.TableView.new","haxe/ui/toolkit/containers/TableView.hx",21,0x496fad85)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	this->_lastSelection = (int)-1;
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	::haxe::ui::toolkit::containers::TableViewColumnDefs _g = ::haxe::ui::toolkit::containers::TableViewColumnDefs_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	this->_columnDefs = _g;
	HX_STACK_LINE(32)
	::haxe::ui::toolkit::data::ArrayDataSource _g1 = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	this->set_dataSource(_g1);
	HX_STACK_LINE(33)
	::haxe::ui::toolkit::containers::ScrollView _g2 = ::haxe::ui::toolkit::containers::ScrollView_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(33)
	this->_scrollView = _g2;
	HX_STACK_LINE(34)
	this->_scrollView->get_style()->set_borderSize((int)0);
	HX_STACK_LINE(36)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(36)
	this->_selectedItems = _g3;
	HX_STACK_LINE(38)
	this->_scrollView->set_percentWidth((int)100);
	HX_STACK_LINE(39)
	this->_scrollView->set_percentHeight((int)100);
	HX_STACK_LINE(40)
	::haxe::ui::toolkit::containers::VBox _g4 = ::haxe::ui::toolkit::containers::VBox_obj::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(40)
	this->_scrollContent = _g4;
	HX_STACK_LINE(41)
	this->_scrollContent->set_id(HX_CSTRING("tableContent"));
	HX_STACK_LINE(42)
	this->_scrollContent->set_autoSize(true);
	HX_STACK_LINE(43)
	this->_scrollView->addChild(this->_scrollContent);
}
;
	return null();
}

//TableView_obj::~TableView_obj() { }

Dynamic TableView_obj::__CreateEmpty() { return  new TableView_obj; }
hx::ObjectPtr< TableView_obj > TableView_obj::__new()
{  hx::ObjectPtr< TableView_obj > result = new TableView_obj();
	result->__construct();
	return result;}

Dynamic TableView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TableView_obj > result = new TableView_obj();
	result->__construct();
	return result;}

hx::Object *TableView_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDataComponent_obj *();
	return super::__ToInterface(inType);
}

Void TableView_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","initialize",0x411b25c5,"haxe.ui.toolkit.containers.TableView.initialize","haxe/ui/toolkit/containers/TableView.hx",49,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->super::initialize();
		HX_STACK_LINE(52)
		this->addChild(this->_scrollView);
		HX_STACK_LINE(54)
		if (((this->_dataSource == null()))){
			HX_STACK_LINE(55)
			::haxe::ui::toolkit::data::ArrayDataSource _g = ::haxe::ui::toolkit::data::ArrayDataSource_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(55)
			this->set_dataSource(_g);
		}
		HX_STACK_LINE(58)
		this->_dataSource->open();
		HX_STACK_LINE(60)
		this->syncUI();
	}
return null();
}


Void TableView_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","invalidate",0xdb8a0df0,"haxe.ui.toolkit.containers.TableView.invalidate","haxe/ui/toolkit/containers/TableView.hx",63,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(64)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(65)
		if (((bool(this->_ready) && bool((((int(type) & int((int)256))) == (int)256))))){
			HX_STACK_LINE(66)
			Float _g = this->_scrollView->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(66)
			if (((_g > (int)0))){
				HX_STACK_LINE(67)
				this->resizeColumns();
			}
		}
	}
return null();
}


::haxe::ui::toolkit::data::IDataSource TableView_obj::get_dataSource( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","get_dataSource",0x2714d1e3,"haxe.ui.toolkit.containers.TableView.get_dataSource","haxe/ui/toolkit/containers/TableView.hx",78,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return this->_dataSource;
}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,get_dataSource,return )

::haxe::ui::toolkit::data::IDataSource TableView_obj::set_dataSource( ::haxe::ui::toolkit::data::IDataSource value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","set_dataSource",0x4734ba57,"haxe.ui.toolkit.containers.TableView.set_dataSource","haxe/ui/toolkit/containers/TableView.hx",81,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(82)
	if (((this->_dataSource != null()))){
		HX_STACK_LINE(83)
		if ((::Std_obj::is(this->_dataSource,hx::ClassOf< ::openfl::events::IEventDispatcher >()))){
			HX_STACK_LINE(84)
			(hx::TCast< openfl::events::IEventDispatcher >::cast(this->_dataSource))->removeEventListener(::openfl::events::Event_obj::CHANGE,this->_onDataSourceChanged_dyn(),null());
		}
	}
	HX_STACK_LINE(88)
	this->_dataSource = value;
	HX_STACK_LINE(90)
	if ((::Std_obj::is(this->_dataSource,hx::ClassOf< ::openfl::events::IEventDispatcher >()))){
		HX_STACK_LINE(91)
		(hx::TCast< openfl::events::IEventDispatcher >::cast(this->_dataSource))->addEventListener(::openfl::events::Event_obj::CHANGE,this->_onDataSourceChanged_dyn(),null(),null(),null());
	}
	HX_STACK_LINE(94)
	if (((this->_ready == true))){
		HX_STACK_LINE(95)
		this->syncUI();
	}
	HX_STACK_LINE(98)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,set_dataSource,return )

Void TableView_obj::_onDataSourceChanged( ::openfl::events::Event event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","_onDataSourceChanged",0x0843ec66,"haxe.ui.toolkit.containers.TableView._onDataSourceChanged","haxe/ui/toolkit/containers/TableView.hx",102,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(102)
		this->syncUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,_onDataSourceChanged,(void))

::haxe::ui::toolkit::containers::TableViewColumnDefs TableView_obj::get_columns( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","get_columns",0xf8e9fedf,"haxe.ui.toolkit.containers.TableView.get_columns","haxe/ui/toolkit/containers/TableView.hx",111,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return this->_columnDefs;
}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,get_columns,return )

::haxe::ui::toolkit::containers::TableViewColumnDefs TableView_obj::set_columns( ::haxe::ui::toolkit::containers::TableViewColumnDefs value){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","set_columns",0x035705eb,"haxe.ui.toolkit.containers.TableView.set_columns","haxe/ui/toolkit/containers/TableView.hx",113,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(114)
	this->_columnDefs = value;
	HX_STACK_LINE(115)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,set_columns,return )

Void TableView_obj::syncUI( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","syncUI",0x0cece764,"haxe.ui.toolkit.containers.TableView.syncUI","haxe/ui/toolkit/containers/TableView.hx",121,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(122)
		int pos = (int)0;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(123)
		if (((this->_dataSource != null()))){
			HX_STACK_LINE(124)
			if ((this->get_dataSource()->moveFirst())){
				HX_STACK_LINE(125)
				while((true)){
					HX_STACK_LINE(126)
					::String dataHash = this->get_dataSource()->hash();		HX_STACK_VAR(dataHash,"dataHash");
					HX_STACK_LINE(127)
					Dynamic data = this->get_dataSource()->get();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(128)
					::haxe::ui::toolkit::containers::TableViewRow item = null();		HX_STACK_VAR(item,"item");
					HX_STACK_LINE(129)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->_scrollContent->getChildAt(pos);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(129)
					if (((_g != null()))){
						HX_STACK_LINE(130)
						::haxe::ui::toolkit::containers::TableViewRow _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(130)
						_g1 = hx::TCast< haxe::ui::toolkit::containers::TableViewRow >::cast(this->_scrollContent->getChildAt(pos));
						HX_STACK_LINE(130)
						item = _g1;
					}
					HX_STACK_LINE(133)
					if (((item == null()))){
						HX_STACK_LINE(134)
						this->addTableRow(dataHash,data,pos);
						HX_STACK_LINE(135)
						(pos)++;
					}
					else{
						HX_STACK_LINE(137)
						if (((item->hash == dataHash))){
							HX_STACK_LINE(138)
							(pos)++;
						}
						else{
							HX_STACK_LINE(140)
							while((true)){
								HX_STACK_LINE(140)
								if ((!(((bool((item != null())) && bool((item->hash != dataHash))))))){
									HX_STACK_LINE(140)
									break;
								}
								HX_STACK_LINE(142)
								::haxe::ui::toolkit::containers::TableViewRow _g2;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(142)
								_g2 = hx::TCast< haxe::ui::toolkit::containers::TableViewRow >::cast(this->_scrollContent->getChildAt(pos));
								HX_STACK_LINE(142)
								item = _g2;
							}
							HX_STACK_LINE(144)
							(pos)++;
						}
					}
					HX_STACK_LINE(125)
					if ((!(this->get_dataSource()->moveNext()))){
						HX_STACK_LINE(125)
						break;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,syncUI,(void))

Void TableView_obj::addTableRow( ::String dataHash,Dynamic data,hx::Null< int >  __o_index){
int index = __o_index.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","addTableRow",0xfeb107d8,"haxe.ui.toolkit.containers.TableView.addTableRow","haxe/ui/toolkit/containers/TableView.hx",153,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dataHash,"dataHash")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(index,"index")
{
		HX_STACK_LINE(154)
		if (((data == null()))){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			Array< ::String > _g1 = ::Reflect_obj::fields(data);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			while((true)){
				HX_STACK_LINE(158)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(158)
					break;
				}
				HX_STACK_LINE(158)
				::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(158)
				++(_g);
				HX_STACK_LINE(159)
				if (((f != HX_CSTRING("__get_id__")))){
					HX_STACK_LINE(160)
					bool _g2 = this->_columnDefs->has(f);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(160)
					if (((_g2 == false))){
						HX_STACK_LINE(161)
						this->_columnDefs->add(f,null(),null());
						HX_STACK_LINE(162)
						::haxe::Log_obj::trace(f,hx::SourceInfo(HX_CSTRING("TableView.hx"),162,HX_CSTRING("haxe.ui.toolkit.containers.TableView"),HX_CSTRING("addTableRow")));
					}
				}
			}
		}
		HX_STACK_LINE(167)
		::haxe::ui::toolkit::containers::TableViewRow item = ::haxe::ui::toolkit::containers::TableViewRow_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(168)
		item->set_autoSize(true);
		HX_STACK_LINE(169)
		item->set_data(data);
		HX_STACK_LINE(170)
		item->hash = dataHash;
		HX_STACK_LINE(171)
		int _g1 = this->_scrollContent->get_numChildren();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(171)
		int _g2 = hx::Mod(_g1,(int)2);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(171)
		::String id;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(171)
		if (((_g2 == (int)0))){
			HX_STACK_LINE(171)
			id = HX_CSTRING("even");
		}
		else{
			HX_STACK_LINE(171)
			id = HX_CSTRING("odd");
		}
		HX_STACK_LINE(172)
		item->set_id(id);
		HX_STACK_LINE(173)
		if (((index == (int)-1))){
			HX_STACK_LINE(174)
			this->_scrollContent->addChild(item);
		}
		else{
			HX_STACK_LINE(176)
			this->_scrollContent->addChildAt(item,index);
		}
		HX_STACK_LINE(179)
		this->_scrollView->invalidate((int)256,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TableView_obj,addTableRow,(void))

Void TableView_obj::resizeColumns( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","resizeColumns",0xa1b7e3f4,"haxe.ui.toolkit.containers.TableView.resizeColumns","haxe/ui/toolkit/containers/TableView.hx",182,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_LINE(184)
		int _g = this->_scrollContent->get_numChildren();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(184)
		if (((_g == (int)0))){
			HX_STACK_LINE(185)
			return null();
		}
		HX_STACK_LINE(187)
		int sx = (hx::TCast< haxe::ui::toolkit::containers::TableViewRow >::cast(this->_scrollContent->getChildAt((int)0)))->get_layout()->__Field(HX_CSTRING("get_spacingX"),true)();		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(189)
		Array< ::Dynamic > cols = this->_columnDefs->iterator();		HX_STACK_VAR(cols,"cols");
		HX_STACK_LINE(190)
		Float totalWidth = (int)0;		HX_STACK_VAR(totalWidth,"totalWidth");
		HX_STACK_LINE(191)
		{
			HX_STACK_LINE(191)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(191)
			while((true)){
				HX_STACK_LINE(191)
				if ((!(((_g1 < cols->length))))){
					HX_STACK_LINE(191)
					break;
				}
				HX_STACK_LINE(191)
				::haxe::ui::toolkit::containers::TableViewColumnDef c = cols->__get(_g1).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >();		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(191)
				++(_g1);
				HX_STACK_LINE(192)
				hx::AddEq(totalWidth,(c->calculatedWidth + sx));
			}
		}
		HX_STACK_LINE(195)
		Float _g1 = this->_scrollView->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(195)
		if (((totalWidth < _g1))){
			HX_STACK_LINE(196)
			Float _g2 = this->_scrollView->get_layout()->__Field(HX_CSTRING("get_usableWidth"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(196)
			Float diff = (_g2 - totalWidth);		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(197)
			Float newWidth = (cols->__get((cols->length - (int)1)).StaticCast< ::haxe::ui::toolkit::containers::TableViewColumnDef >()->calculatedWidth + diff);		HX_STACK_VAR(newWidth,"newWidth");
			HX_STACK_LINE(198)
			{
				HX_STACK_LINE(198)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(198)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g11 = this->_scrollContent->get_children();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(198)
				while((true)){
					HX_STACK_LINE(198)
					if ((!(((_g3 < _g11->length))))){
						HX_STACK_LINE(198)
						break;
					}
					HX_STACK_LINE(198)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g11->__get(_g3);		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(198)
					++(_g3);
					HX_STACK_LINE(199)
					::haxe::ui::toolkit::containers::TableViewRow temp;		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(199)
					temp = hx::TCast< haxe::ui::toolkit::containers::TableViewRow >::cast(child);
					HX_STACK_LINE(200)
					int _g31 = temp->get_numChildren();		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(200)
					int _g4 = (_g31 - (int)1);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(200)
					temp->getChildAt(_g4)->__Field(HX_CSTRING("set_width"),true)(newWidth);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TableView_obj,resizeColumns,(void))

Void TableView_obj::handleListSelection( ::haxe::ui::toolkit::containers::TableViewRow item,::openfl::events::Event event,hx::Null< bool >  __o_raiseEvent){
bool raiseEvent = __o_raiseEvent.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","handleListSelection",0x27953831,"haxe.ui.toolkit.containers.TableView.handleListSelection","haxe/ui/toolkit/containers/TableView.hx",205,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_ARG(event,"event")
	HX_STACK_ARG(raiseEvent,"raiseEvent")
{
		HX_STACK_LINE(206)
		bool shiftPressed = false;		HX_STACK_VAR(shiftPressed,"shiftPressed");
		HX_STACK_LINE(207)
		bool ctrlPressed = false;		HX_STACK_VAR(ctrlPressed,"ctrlPressed");
		HX_STACK_LINE(209)
		if (((  (((event != null()))) ? bool(::Std_obj::is(event,hx::ClassOf< ::openfl::events::MouseEvent >())) : bool(false) ))){
			HX_STACK_LINE(210)
			::openfl::events::MouseEvent mouseEvent;		HX_STACK_VAR(mouseEvent,"mouseEvent");
			HX_STACK_LINE(210)
			mouseEvent = hx::TCast< openfl::events::MouseEvent >::cast(event);
			HX_STACK_LINE(211)
			shiftPressed = mouseEvent->shiftKey;
			HX_STACK_LINE(212)
			ctrlPressed = mouseEvent->ctrlKey;
		}
		HX_STACK_LINE(215)
		if (((ctrlPressed == true))){
		}
		else{
			HX_STACK_LINE(217)
			if (((shiftPressed == true))){
			}
			else{
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(220)
					Array< ::Dynamic > _g1 = this->_selectedItems;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(220)
					while((true)){
						HX_STACK_LINE(220)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(220)
							break;
						}
						HX_STACK_LINE(220)
						::haxe::ui::toolkit::containers::TableViewRow selectedItem = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::containers::TableViewRow >();		HX_STACK_VAR(selectedItem,"selectedItem");
						HX_STACK_LINE(220)
						++(_g);
						HX_STACK_LINE(221)
						if (((selectedItem != item))){
							HX_STACK_LINE(222)
							selectedItem->set_state(HX_CSTRING("normal"));
						}
					}
				}
				HX_STACK_LINE(225)
				Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(225)
				this->_selectedItems = _g;
			}
		}
		HX_STACK_LINE(228)
		if ((this->isSelected(item))){
			HX_STACK_LINE(229)
			this->_selectedItems->remove(item);
			HX_STACK_LINE(230)
			item->set_state(HX_CSTRING("over"));
		}
		else{
			HX_STACK_LINE(232)
			this->_selectedItems->push(item);
			HX_STACK_LINE(233)
			item->set_state(HX_CSTRING("selected"));
		}
		HX_STACK_LINE(238)
		if (((raiseEvent == true))){
			HX_STACK_LINE(239)
			::openfl::events::Event event1 = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(event1,"event1");
			HX_STACK_LINE(240)
			this->dispatchEvent(event1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TableView_obj,handleListSelection,(void))

Void TableView_obj::handleClick( ::haxe::ui::toolkit::containers::TableViewRow item,::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","handleClick",0x7a3e196b,"haxe.ui.toolkit.containers.TableView.handleClick","haxe/ui/toolkit/containers/TableView.hx",244,0x496fad85)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(245)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g = this->_scrollContent->get_children();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(245)
		int index = ::Lambda_obj::indexOf(_g,item);		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(246)
		if (((this->_lastSelection == index))){
			HX_STACK_LINE(247)
			::openfl::events::MouseEvent event1 = ::openfl::events::MouseEvent_obj::__new(::openfl::events::MouseEvent_obj::DOUBLE_CLICK,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(event1,"event1");
			HX_STACK_LINE(248)
			this->dispatchEvent(event1);
			HX_STACK_LINE(249)
			this->_lastSelection = (int)-1;
		}
		else{
			HX_STACK_LINE(251)
			this->_lastSelection = index;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TableView_obj,handleClick,(void))

bool TableView_obj::isSelected( ::haxe::ui::toolkit::containers::TableViewRow item){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","isSelected",0x807c30da,"haxe.ui.toolkit.containers.TableView.isSelected","haxe/ui/toolkit/containers/TableView.hx",255,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(256)
	int _g = ::Lambda_obj::indexOf(this->_selectedItems,item);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(256)
	return (_g != (int)-1);
}


HX_DEFINE_DYNAMIC_FUNC1(TableView_obj,isSelected,return )

Dynamic TableView_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","clone",0xf3917308,"haxe.ui.toolkit.containers.TableView.clone","haxe/ui/toolkit/containers/TableView.hx",1,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::containers::TableView c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic TableView_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.containers.TableView","self",0x39910a41,"haxe.ui.toolkit.containers.TableView.self","haxe/ui/toolkit/containers/TableView.hx",2,0x496fad85)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::containers::TableView_obj::__new();
}



TableView_obj::TableView_obj()
{
}

void TableView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TableView);
	HX_MARK_MEMBER_NAME(_scrollView,"_scrollView");
	HX_MARK_MEMBER_NAME(_scrollContent,"_scrollContent");
	HX_MARK_MEMBER_NAME(_dataSource,"_dataSource");
	HX_MARK_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_MARK_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_MARK_MEMBER_NAME(_columnDefs,"_columnDefs");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TableView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_scrollView,"_scrollView");
	HX_VISIT_MEMBER_NAME(_scrollContent,"_scrollContent");
	HX_VISIT_MEMBER_NAME(_dataSource,"_dataSource");
	HX_VISIT_MEMBER_NAME(_selectedItems,"_selectedItems");
	HX_VISIT_MEMBER_NAME(_lastSelection,"_lastSelection");
	HX_VISIT_MEMBER_NAME(_columnDefs,"_columnDefs");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TableView_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"columns") ) { return get_columns(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"dataSource") ) { return get_dataSource(); }
		if (HX_FIELD_EQ(inName,"isSelected") ) { return isSelected_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollView") ) { return _scrollView; }
		if (HX_FIELD_EQ(inName,"_dataSource") ) { return _dataSource; }
		if (HX_FIELD_EQ(inName,"_columnDefs") ) { return _columnDefs; }
		if (HX_FIELD_EQ(inName,"get_columns") ) { return get_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"set_columns") ) { return set_columns_dyn(); }
		if (HX_FIELD_EQ(inName,"addTableRow") ) { return addTableRow_dyn(); }
		if (HX_FIELD_EQ(inName,"handleClick") ) { return handleClick_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resizeColumns") ) { return resizeColumns_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_scrollContent") ) { return _scrollContent; }
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { return _selectedItems; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { return _lastSelection; }
		if (HX_FIELD_EQ(inName,"get_dataSource") ) { return get_dataSource_dyn(); }
		if (HX_FIELD_EQ(inName,"set_dataSource") ) { return set_dataSource_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"handleListSelection") ) { return handleListSelection_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_onDataSourceChanged") ) { return _onDataSourceChanged_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TableView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return set_columns(inValue); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dataSource") ) { return set_dataSource(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_scrollView") ) { _scrollView=inValue.Cast< ::haxe::ui::toolkit::containers::ScrollView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dataSource") ) { _dataSource=inValue.Cast< ::haxe::ui::toolkit::data::IDataSource >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_columnDefs") ) { _columnDefs=inValue.Cast< ::haxe::ui::toolkit::containers::TableViewColumnDefs >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_scrollContent") ) { _scrollContent=inValue.Cast< ::haxe::ui::toolkit::containers::VBox >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selectedItems") ) { _selectedItems=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastSelection") ) { _lastSelection=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TableView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_scrollView"));
	outFields->push(HX_CSTRING("_scrollContent"));
	outFields->push(HX_CSTRING("_dataSource"));
	outFields->push(HX_CSTRING("_selectedItems"));
	outFields->push(HX_CSTRING("_lastSelection"));
	outFields->push(HX_CSTRING("dataSource"));
	outFields->push(HX_CSTRING("_columnDefs"));
	outFields->push(HX_CSTRING("columns"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::ScrollView*/ ,(int)offsetof(TableView_obj,_scrollView),HX_CSTRING("_scrollView")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::VBox*/ ,(int)offsetof(TableView_obj,_scrollContent),HX_CSTRING("_scrollContent")},
	{hx::fsObject /*::haxe::ui::toolkit::data::IDataSource*/ ,(int)offsetof(TableView_obj,_dataSource),HX_CSTRING("_dataSource")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TableView_obj,_selectedItems),HX_CSTRING("_selectedItems")},
	{hx::fsInt,(int)offsetof(TableView_obj,_lastSelection),HX_CSTRING("_lastSelection")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::TableViewColumnDefs*/ ,(int)offsetof(TableView_obj,_columnDefs),HX_CSTRING("_columnDefs")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_scrollView"),
	HX_CSTRING("_scrollContent"),
	HX_CSTRING("_dataSource"),
	HX_CSTRING("_selectedItems"),
	HX_CSTRING("_lastSelection"),
	HX_CSTRING("initialize"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("get_dataSource"),
	HX_CSTRING("set_dataSource"),
	HX_CSTRING("_onDataSourceChanged"),
	HX_CSTRING("_columnDefs"),
	HX_CSTRING("get_columns"),
	HX_CSTRING("set_columns"),
	HX_CSTRING("syncUI"),
	HX_CSTRING("addTableRow"),
	HX_CSTRING("resizeColumns"),
	HX_CSTRING("handleListSelection"),
	HX_CSTRING("handleClick"),
	HX_CSTRING("isSelected"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TableView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TableView_obj::__mClass,"__mClass");
};

#endif

Class TableView_obj::__mClass;

void TableView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.containers.TableView"), hx::TCanCast< TableView_obj> ,sStaticFields,sMemberFields,
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

void TableView_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace containers
