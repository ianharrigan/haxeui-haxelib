#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_resources_ResourceManager
#include <haxe/ui/toolkit/resources/ResourceManager.h>
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
namespace toolkit{
namespace data{

Void DataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","new",0xdd20de79,"haxe.ui.toolkit.data.DataSource.new","haxe/ui/toolkit/data/DataSource.hx",8,0x7931b957)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->_hasChanged = false;
	HX_STACK_LINE(15)
	this->_allowEvents = true;
	HX_STACK_LINE(14)
	this->allowDeletions = true;
	HX_STACK_LINE(13)
	this->allowUpdates = true;
	HX_STACK_LINE(12)
	this->allowAdditions = true;
	HX_STACK_LINE(19)
	super::__construct(null());
}
;
	return null();
}

//DataSource_obj::~DataSource_obj() { }

Dynamic DataSource_obj::__CreateEmpty() { return  new DataSource_obj; }
hx::ObjectPtr< DataSource_obj > DataSource_obj::__new()
{  hx::ObjectPtr< DataSource_obj > result = new DataSource_obj();
	result->__construct();
	return result;}

Dynamic DataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataSource_obj > result = new DataSource_obj();
	result->__construct();
	return result;}

hx::Object *DataSource_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::data::IDataSource_obj)) return operator ::haxe::ui::toolkit::data::IDataSource_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

::Xml DataSource_obj::get_config( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get_config",0x17579d92,"haxe.ui.toolkit.data.DataSource.get_config","haxe/ui/toolkit/data/DataSource.hx",26,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return this->_config;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_config,return )

::haxe::ui::toolkit::data::DataSource DataSource_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","clone",0xbd2299b6,"haxe.ui.toolkit.data.DataSource.clone","haxe/ui/toolkit/data/DataSource.hx",29,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	::haxe::ui::toolkit::data::DataSource newDS = null();		HX_STACK_VAR(newDS,"newDS");
	HX_STACK_LINE(31)
	return newDS;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,clone,return )

bool DataSource_obj::get_allowEvents( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get_allowEvents",0x51b9fbb2,"haxe.ui.toolkit.data.DataSource.get_allowEvents","haxe/ui/toolkit/data/DataSource.hx",39,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return this->_allowEvents;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_allowEvents,return )

bool DataSource_obj::set_allowEvents( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","set_allowEvents",0x4d8578be,"haxe.ui.toolkit.data.DataSource.set_allowEvents","haxe/ui/toolkit/data/DataSource.hx",42,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(43)
	this->_allowEvents = value;
	HX_STACK_LINE(44)
	if (((this->_allowEvents == true))){
		HX_STACK_LINE(45)
		if (((this->_hasChanged == true))){
			HX_STACK_LINE(46)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(49)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_allowEvents,return )

::String DataSource_obj::get_id( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get_id",0x5605faab,"haxe.ui.toolkit.data.DataSource.get_id","haxe/ui/toolkit/data/DataSource.hx",58,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->_id;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get_id,return )

::String DataSource_obj::set_id( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","set_id",0x224e4f1f,"haxe.ui.toolkit.data.DataSource.set_id","haxe/ui/toolkit/data/DataSource.hx",61,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(62)
	this->_id = value;
	HX_STACK_LINE(63)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,set_id,return )

Void DataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","create",0x2ee56e83,"haxe.ui.toolkit.data.DataSource.create","haxe/ui/toolkit/data/DataSource.hx",66,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(67)
		this->_config = config;
		HX_STACK_LINE(69)
		if (((this->_config == null()))){
			HX_STACK_LINE(70)
			return null();
		}
		HX_STACK_LINE(73)
		::String _g = config->get(HX_CSTRING("id"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		this->_id = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,create,(void))

bool DataSource_obj::open( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","open",0xa0534b91,"haxe.ui.toolkit.data.DataSource.open","haxe/ui/toolkit/data/DataSource.hx",77,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(77)
	return this->_open();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,open,return )

bool DataSource_obj::close( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","close",0xbd229e11,"haxe.ui.toolkit.data.DataSource.close","haxe/ui/toolkit/data/DataSource.hx",81,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	return this->_close();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,close,return )

bool DataSource_obj::moveFirst( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","moveFirst",0xef086e38,"haxe.ui.toolkit.data.DataSource.moveFirst","haxe/ui/toolkit/data/DataSource.hx",85,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(85)
	return this->_moveFirst();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,moveFirst,return )

bool DataSource_obj::moveNext( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","moveNext",0x85c627eb,"haxe.ui.toolkit.data.DataSource.moveNext","haxe/ui/toolkit/data/DataSource.hx",89,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	return this->_moveNext();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,moveNext,return )

Dynamic DataSource_obj::get( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","get",0xdd1b8eaf,"haxe.ui.toolkit.data.DataSource.get","haxe/ui/toolkit/data/DataSource.hx",93,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	return this->_get();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,get,return )

bool DataSource_obj::add( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","add",0xdd17003a,"haxe.ui.toolkit.data.DataSource.add","haxe/ui/toolkit/data/DataSource.hx",96,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(97)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(98)
	if ((this->allowAdditions)){
		HX_STACK_LINE(99)
		bool _g = this->_add(o);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(99)
		b = _g;
		HX_STACK_LINE(100)
		if (((b == true))){
			HX_STACK_LINE(101)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(104)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,add,return )

bool DataSource_obj::update( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","update",0x39db8d90,"haxe.ui.toolkit.data.DataSource.update","haxe/ui/toolkit/data/DataSource.hx",107,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(108)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(109)
	if ((this->allowUpdates)){
		HX_STACK_LINE(110)
		bool _g = this->_update(o);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		b = _g;
		HX_STACK_LINE(111)
		if ((b)){
			HX_STACK_LINE(112)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(115)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,update,return )

bool DataSource_obj::remove( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","remove",0xb75ea3cb,"haxe.ui.toolkit.data.DataSource.remove","haxe/ui/toolkit/data/DataSource.hx",118,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	bool b = false;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(120)
	if ((this->allowDeletions)){
		HX_STACK_LINE(121)
		bool _g = this->_remove();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(121)
		b = _g;
		HX_STACK_LINE(122)
		if ((b)){
			HX_STACK_LINE(123)
			this->dispatchChanged();
		}
	}
	HX_STACK_LINE(126)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,remove,return )

Void DataSource_obj::removeAll( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","removeAll",0xfb893e16,"haxe.ui.toolkit.data.DataSource.removeAll","haxe/ui/toolkit/data/DataSource.hx",130,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_LINE(130)
		if ((this->moveFirst())){
			HX_STACK_LINE(131)
			while((true)){
				HX_STACK_LINE(132)
				this->remove();
				HX_STACK_LINE(131)
				if ((!(this->moveFirst()))){
					HX_STACK_LINE(131)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,removeAll,(void))

::String DataSource_obj::hash( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","hash",0x9ba77795,"haxe.ui.toolkit.data.DataSource.hash","haxe/ui/toolkit/data/DataSource.hx",137,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(138)
	Dynamic o = this->get();		HX_STACK_VAR(o,"o");
	HX_STACK_LINE(139)
	if (((o == null()))){
		HX_STACK_LINE(140)
		return null();
	}
	HX_STACK_LINE(142)
	int _g = ::__hxcpp_obj_id(o);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(142)
	return (HX_CSTRING("") + _g);
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,hash,return )

int DataSource_obj::size( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","size",0xa2f2e888,"haxe.ui.toolkit.data.DataSource.size","haxe/ui/toolkit/data/DataSource.hx",146,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,size,return )

bool DataSource_obj::_open( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_open",0x7184a602,"haxe.ui.toolkit.data.DataSource._open","haxe/ui/toolkit/data/DataSource.hx",153,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(153)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_open,return )

bool DataSource_obj::_close( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_close",0xf7206680,"haxe.ui.toolkit.data.DataSource._close","haxe/ui/toolkit/data/DataSource.hx",157,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(157)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_close,return )

bool DataSource_obj::_moveFirst( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_moveFirst",0x79049a27,"haxe.ui.toolkit.data.DataSource._moveFirst","haxe/ui/toolkit/data/DataSource.hx",161,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_moveFirst,return )

bool DataSource_obj::_moveNext( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_moveNext",0x63f40edc,"haxe.ui.toolkit.data.DataSource._moveNext","haxe/ui/toolkit/data/DataSource.hx",165,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_moveNext,return )

Dynamic DataSource_obj::_get( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_get",0x95b90d5e,"haxe.ui.toolkit.data.DataSource._get","haxe/ui/toolkit/data/DataSource.hx",169,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(169)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_get,return )

bool DataSource_obj::_add( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_add",0x95b47ee9,"haxe.ui.toolkit.data.DataSource._add","haxe/ui/toolkit/data/DataSource.hx",173,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(173)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,_add,return )

bool DataSource_obj::_update( Dynamic o){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_update",0xbded2641,"haxe.ui.toolkit.data.DataSource._update","haxe/ui/toolkit/data/DataSource.hx",177,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(177)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,_update,return )

bool DataSource_obj::_remove( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","_remove",0x3b703c7c,"haxe.ui.toolkit.data.DataSource._remove","haxe/ui/toolkit/data/DataSource.hx",181,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,_remove,return )

Void DataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","createFromString",0x6e31023e,"haxe.ui.toolkit.data.DataSource.createFromString","haxe/ui/toolkit/data/DataSource.hx",187,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,createFromString,(void))

Void DataSource_obj::createFromResource( ::String resourceId,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","createFromResource",0x549c2b7b,"haxe.ui.toolkit.data.DataSource.createFromResource","haxe/ui/toolkit/data/DataSource.hx",192,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(192)
		if (((resourceId != null()))){
			HX_STACK_LINE(193)
			::String data = ::haxe::ui::toolkit::resources::ResourceManager_obj::get_instance()->getText(resourceId,null());		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(194)
			this->createFromString(data,config);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DataSource_obj,createFromResource,(void))

Void DataSource_obj::dispatchChanged( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","dispatchChanged",0x378d04f3,"haxe.ui.toolkit.data.DataSource.dispatchChanged","haxe/ui/toolkit/data/DataSource.hx",198,0x7931b957)
		HX_STACK_THIS(this)
		HX_STACK_LINE(199)
		this->_hasChanged = true;
		HX_STACK_LINE(200)
		if (((this->_allowEvents == true))){
			HX_STACK_LINE(201)
			this->_hasChanged = false;
			HX_STACK_LINE(202)
			::openfl::events::Event _g = ::openfl::events::Event_obj::__new(::openfl::events::Event_obj::CHANGE,null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(202)
			this->dispatchEvent(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DataSource_obj,dispatchChanged,(void))

int DataSource_obj::getObjectId( Dynamic obj){
	HX_STACK_FRAME("haxe.ui.toolkit.data.DataSource","getObjectId",0x683e3e49,"haxe.ui.toolkit.data.DataSource.getObjectId","haxe/ui/toolkit/data/DataSource.hx",212,0x7931b957)
	HX_STACK_THIS(this)
	HX_STACK_ARG(obj,"obj")
	HX_STACK_LINE(212)
	return ::__hxcpp_obj_id(obj);
}


HX_DEFINE_DYNAMIC_FUNC1(DataSource_obj,getObjectId,return )

int DataSource_obj::SAFE_NUM;

int DataSource_obj::clsId;


DataSource_obj::DataSource_obj()
{
}

void DataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataSource);
	HX_MARK_MEMBER_NAME(config,"config");
	HX_MARK_MEMBER_NAME(_config,"_config");
	HX_MARK_MEMBER_NAME(_id,"_id");
	HX_MARK_MEMBER_NAME(allowAdditions,"allowAdditions");
	HX_MARK_MEMBER_NAME(allowUpdates,"allowUpdates");
	HX_MARK_MEMBER_NAME(allowDeletions,"allowDeletions");
	HX_MARK_MEMBER_NAME(_allowEvents,"_allowEvents");
	HX_MARK_MEMBER_NAME(_hasChanged,"_hasChanged");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(config,"config");
	HX_VISIT_MEMBER_NAME(_config,"_config");
	HX_VISIT_MEMBER_NAME(_id,"_id");
	HX_VISIT_MEMBER_NAME(allowAdditions,"allowAdditions");
	HX_VISIT_MEMBER_NAME(allowUpdates,"allowUpdates");
	HX_VISIT_MEMBER_NAME(allowDeletions,"allowDeletions");
	HX_VISIT_MEMBER_NAME(_allowEvents,"_allowEvents");
	HX_VISIT_MEMBER_NAME(_hasChanged,"_hasChanged");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DataSource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return get_id(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { return _id; }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return open_dyn(); }
		if (HX_FIELD_EQ(inName,"hash") ) { return hash_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"_get") ) { return _get_dyn(); }
		if (HX_FIELD_EQ(inName,"_add") ) { return _add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clsId") ) { return clsId; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"_open") ) { return _open_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { return inCallProp ? get_config() : config; }
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		if (HX_FIELD_EQ(inName,"set_id") ) { return set_id_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"_close") ) { return _close_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { return _config; }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"_remove") ) { return _remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"moveNext") ) { return moveNext_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveFirst") ) { return moveFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_moveNext") ) { return _moveNext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_config") ) { return get_config_dyn(); }
		if (HX_FIELD_EQ(inName,"_moveFirst") ) { return _moveFirst_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasChanged") ) { return _hasChanged; }
		if (HX_FIELD_EQ(inName,"allowEvents") ) { return get_allowEvents(); }
		if (HX_FIELD_EQ(inName,"getObjectId") ) { return getObjectId_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowUpdates") ) { return allowUpdates; }
		if (HX_FIELD_EQ(inName,"_allowEvents") ) { return _allowEvents; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowAdditions") ) { return allowAdditions; }
		if (HX_FIELD_EQ(inName,"allowDeletions") ) { return allowDeletions; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_allowEvents") ) { return get_allowEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"set_allowEvents") ) { return set_allowEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatchChanged") ) { return dispatchChanged_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromString") ) { return createFromString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createFromResource") ) { return createFromResource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return set_id(inValue); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"_id") ) { _id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clsId") ) { clsId=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { _config=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_hasChanged") ) { _hasChanged=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowEvents") ) { return set_allowEvents(inValue); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"allowUpdates") ) { allowUpdates=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_allowEvents") ) { _allowEvents=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowAdditions") ) { allowAdditions=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowDeletions") ) { allowDeletions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("config"));
	outFields->push(HX_CSTRING("_config"));
	outFields->push(HX_CSTRING("_id"));
	outFields->push(HX_CSTRING("allowAdditions"));
	outFields->push(HX_CSTRING("allowUpdates"));
	outFields->push(HX_CSTRING("allowDeletions"));
	outFields->push(HX_CSTRING("_allowEvents"));
	outFields->push(HX_CSTRING("_hasChanged"));
	outFields->push(HX_CSTRING("allowEvents"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SAFE_NUM"),
	HX_CSTRING("clsId"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(DataSource_obj,config),HX_CSTRING("config")},
	{hx::fsObject /*::Xml*/ ,(int)offsetof(DataSource_obj,_config),HX_CSTRING("_config")},
	{hx::fsString,(int)offsetof(DataSource_obj,_id),HX_CSTRING("_id")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowAdditions),HX_CSTRING("allowAdditions")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowUpdates),HX_CSTRING("allowUpdates")},
	{hx::fsBool,(int)offsetof(DataSource_obj,allowDeletions),HX_CSTRING("allowDeletions")},
	{hx::fsBool,(int)offsetof(DataSource_obj,_allowEvents),HX_CSTRING("_allowEvents")},
	{hx::fsBool,(int)offsetof(DataSource_obj,_hasChanged),HX_CSTRING("_hasChanged")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("config"),
	HX_CSTRING("_config"),
	HX_CSTRING("_id"),
	HX_CSTRING("allowAdditions"),
	HX_CSTRING("allowUpdates"),
	HX_CSTRING("allowDeletions"),
	HX_CSTRING("_allowEvents"),
	HX_CSTRING("_hasChanged"),
	HX_CSTRING("get_config"),
	HX_CSTRING("clone"),
	HX_CSTRING("get_allowEvents"),
	HX_CSTRING("set_allowEvents"),
	HX_CSTRING("get_id"),
	HX_CSTRING("set_id"),
	HX_CSTRING("create"),
	HX_CSTRING("open"),
	HX_CSTRING("close"),
	HX_CSTRING("moveFirst"),
	HX_CSTRING("moveNext"),
	HX_CSTRING("get"),
	HX_CSTRING("add"),
	HX_CSTRING("update"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("hash"),
	HX_CSTRING("size"),
	HX_CSTRING("_open"),
	HX_CSTRING("_close"),
	HX_CSTRING("_moveFirst"),
	HX_CSTRING("_moveNext"),
	HX_CSTRING("_get"),
	HX_CSTRING("_add"),
	HX_CSTRING("_update"),
	HX_CSTRING("_remove"),
	HX_CSTRING("createFromString"),
	HX_CSTRING("createFromResource"),
	HX_CSTRING("dispatchChanged"),
	HX_CSTRING("getObjectId"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataSource_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DataSource_obj::SAFE_NUM,"SAFE_NUM");
	HX_MARK_MEMBER_NAME(DataSource_obj::clsId,"clsId");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataSource_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DataSource_obj::SAFE_NUM,"SAFE_NUM");
	HX_VISIT_MEMBER_NAME(DataSource_obj::clsId,"clsId");
};

#endif

Class DataSource_obj::__mClass;

void DataSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.data.DataSource"), hx::TCanCast< DataSource_obj> ,sStaticFields,sMemberFields,
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

void DataSource_obj::__boot()
{
	SAFE_NUM= (int)2147483647;
	clsId= (int)0;
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
