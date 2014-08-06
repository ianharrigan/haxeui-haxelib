#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IEventDispatcher
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_ArrayDataSource
#include <haxe/ui/toolkit/data/ArrayDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#include <haxe/ui/toolkit/data/DataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_FilesDataSource
#include <haxe/ui/toolkit/data/FilesDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{

Void FilesDataSource_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","new",0xc5ac4f4c,"haxe.ui.toolkit.data.FilesDataSource.new","haxe/ui/toolkit/data/FilesDataSource.hx",11,0x62320f64)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct();
}
;
	return null();
}

//FilesDataSource_obj::~FilesDataSource_obj() { }

Dynamic FilesDataSource_obj::__CreateEmpty() { return  new FilesDataSource_obj; }
hx::ObjectPtr< FilesDataSource_obj > FilesDataSource_obj::__new()
{  hx::ObjectPtr< FilesDataSource_obj > result = new FilesDataSource_obj();
	result->__construct();
	return result;}

Dynamic FilesDataSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilesDataSource_obj > result = new FilesDataSource_obj();
	result->__construct();
	return result;}

Void FilesDataSource_obj::create( ::Xml config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","create",0x82980390,"haxe.ui.toolkit.data.FilesDataSource.create","haxe/ui/toolkit/data/FilesDataSource.hx",17,0x62320f64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(19)
		if (((config == null()))){
			HX_STACK_LINE(20)
			return null();
		}
		HX_STACK_LINE(23)
		::String _g = config->get(HX_CSTRING("id"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		this->_id = _g;
		HX_STACK_LINE(25)
		::String resource = config->get(HX_CSTRING("resource"));		HX_STACK_VAR(resource,"resource");
		HX_STACK_LINE(26)
		if (((resource != null()))){
			HX_STACK_LINE(27)
			this->createFromString(resource,null());
		}
	}
return null();
}


bool FilesDataSource_obj::_open( ){
	HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","_open",0x286c3195,"haxe.ui.toolkit.data.FilesDataSource._open","haxe/ui/toolkit/data/FilesDataSource.hx",31,0x62320f64)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	if ((this->isDir(this->_dir))){
		HX_STACK_LINE(34)
		Array< ::String > files = ::sys::FileSystem_obj::readDirectory(this->_dir);		HX_STACK_VAR(files,"files");
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			while((true)){
				HX_STACK_LINE(36)
				if ((!(((_g < files->length))))){
					HX_STACK_LINE(36)
					break;
				}
				HX_STACK_LINE(36)
				::String file = files->__get(_g);		HX_STACK_VAR(file,"file");
				HX_STACK_LINE(36)
				++(_g);
				HX_STACK_LINE(37)
				if ((this->isDir(((this->_dir + HX_CSTRING("/")) + file)))){
					struct _Function_5_1{
						inline static Dynamic Block( ::String &file){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/FilesDataSource.hx",38,0x62320f64)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("text") , file,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(38)
					Dynamic o = _Function_5_1::Block(file);		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(39)
					this->add(o);
				}
			}
		}
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(43)
			while((true)){
				HX_STACK_LINE(43)
				if ((!(((_g < files->length))))){
					HX_STACK_LINE(43)
					break;
				}
				HX_STACK_LINE(43)
				::String file = files->__get(_g);		HX_STACK_VAR(file,"file");
				HX_STACK_LINE(43)
				++(_g);
				HX_STACK_LINE(44)
				if ((!(this->isDir(((this->_dir + HX_CSTRING("/")) + file))))){
					struct _Function_5_1{
						inline static Dynamic Block( ::String &file){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/FilesDataSource.hx",45,0x62320f64)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("text") , file,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(45)
					Dynamic o = _Function_5_1::Block(file);		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(46)
					this->add(o);
				}
			}
		}
	}
	HX_STACK_LINE(51)
	return true;
}


Void FilesDataSource_obj::createFromString( ::String data,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","createFromString",0x141b498b,"haxe.ui.toolkit.data.FilesDataSource.createFromString","haxe/ui/toolkit/data/FilesDataSource.hx",58,0x62320f64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(58)
		if (((data != null()))){
			HX_STACK_LINE(59)
			::String _g = this->fixDir(data);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			this->_dir = _g;
		}
	}
return null();
}


Void FilesDataSource_obj::createFromResource( ::String resourceId,Dynamic config){
{
		HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","createFromResource",0xff20a008,"haxe.ui.toolkit.data.FilesDataSource.createFromResource","haxe/ui/toolkit/data/FilesDataSource.hx",64,0x62320f64)
		HX_STACK_THIS(this)
		HX_STACK_ARG(resourceId,"resourceId")
		HX_STACK_ARG(config,"config")
		HX_STACK_LINE(64)
		this->createFromString(resourceId,config);
	}
return null();
}


bool FilesDataSource_obj::isDir( ::String dir){
	HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","isDir",0xecf1796f,"haxe.ui.toolkit.data.FilesDataSource.isDir","haxe/ui/toolkit/data/FilesDataSource.hx",67,0x62320f64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_LINE(68)
	bool isDir = false;		HX_STACK_VAR(isDir,"isDir");
	HX_STACK_LINE(71)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(72)
		if ((this->isRoot(dir))){
			HX_STACK_LINE(73)
			hx::AddEq(dir,HX_CSTRING("/"));
		}
		HX_STACK_LINE(75)
		bool _g = ::sys::FileSystem_obj::isDirectory(dir);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		isDir = _g;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic ex = __e;{
				HX_STACK_LINE(77)
				isDir = false;
			}
		}
	}
	HX_STACK_LINE(81)
	return isDir;
}


HX_DEFINE_DYNAMIC_FUNC1(FilesDataSource_obj,isDir,return )

bool FilesDataSource_obj::isRoot( ::String dir){
	HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","isRoot",0x6f9e4fc0,"haxe.ui.toolkit.data.FilesDataSource.isRoot","haxe/ui/toolkit/data/FilesDataSource.hx",84,0x62320f64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_LINE(85)
	bool isRoot = false;		HX_STACK_VAR(isRoot,"isRoot");
	HX_STACK_LINE(88)
	isRoot = (dir.split(HX_CSTRING("/"))->length == (int)1);
	HX_STACK_LINE(91)
	return isRoot;
}


HX_DEFINE_DYNAMIC_FUNC1(FilesDataSource_obj,isRoot,return )

::String FilesDataSource_obj::fixDir( ::String dir){
	HX_STACK_FRAME("haxe.ui.toolkit.data.FilesDataSource","fixDir",0x9387e30c,"haxe.ui.toolkit.data.FilesDataSource.fixDir","haxe/ui/toolkit/data/FilesDataSource.hx",94,0x62320f64)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_LINE(95)
	if (((dir == null()))){
		HX_STACK_LINE(96)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(99)
	::String fixedDir = dir;		HX_STACK_VAR(fixedDir,"fixedDir");
	HX_STACK_LINE(100)
	::String _g = ::StringTools_obj::replace(fixedDir,HX_CSTRING("\\"),HX_CSTRING("/"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(100)
	fixedDir = _g;
	HX_STACK_LINE(102)
	int _g1 = fixedDir.lastIndexOf(HX_CSTRING("/"),null());		HX_STACK_VAR(_g1,"_g1");
	struct _Function_1_1{
		inline static bool Block( ::String &fixedDir){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/data/FilesDataSource.hx",102,0x62320f64)
			{
				HX_STACK_LINE(102)
				int _g2 = fixedDir.lastIndexOf(HX_CSTRING("\\"),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(102)
				return (_g2 == (fixedDir.length - (int)1));
			}
			return null();
		}
	};
	HX_STACK_LINE(102)
	if (((  ((!(((_g1 == (fixedDir.length - (int)1)))))) ? bool(_Function_1_1::Block(fixedDir)) : bool(true) ))){
		HX_STACK_LINE(103)
		::String _g3 = fixedDir.substr((int)0,(fixedDir.length - (int)1));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(103)
		fixedDir = _g3;
	}
	HX_STACK_LINE(106)
	return fixedDir;
}


HX_DEFINE_DYNAMIC_FUNC1(FilesDataSource_obj,fixDir,return )


FilesDataSource_obj::FilesDataSource_obj()
{
}

void FilesDataSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilesDataSource);
	HX_MARK_MEMBER_NAME(_dir,"_dir");
	::haxe::ui::toolkit::data::ArrayDataSource_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FilesDataSource_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dir,"_dir");
	::haxe::ui::toolkit::data::ArrayDataSource_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FilesDataSource_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_dir") ) { return _dir; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_open") ) { return _open_dyn(); }
		if (HX_FIELD_EQ(inName,"isDir") ) { return isDir_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"isRoot") ) { return isRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"fixDir") ) { return fixDir_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createFromString") ) { return createFromString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createFromResource") ) { return createFromResource_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FilesDataSource_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_dir") ) { _dir=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FilesDataSource_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_dir"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FilesDataSource_obj,_dir),HX_CSTRING("_dir")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_dir"),
	HX_CSTRING("create"),
	HX_CSTRING("_open"),
	HX_CSTRING("createFromString"),
	HX_CSTRING("createFromResource"),
	HX_CSTRING("isDir"),
	HX_CSTRING("isRoot"),
	HX_CSTRING("fixDir"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FilesDataSource_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FilesDataSource_obj::__mClass,"__mClass");
};

#endif

Class FilesDataSource_obj::__mClass;

void FilesDataSource_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.data.FilesDataSource"), hx::TCanCast< FilesDataSource_obj> ,sStaticFields,sMemberFields,
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

void FilesDataSource_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data
