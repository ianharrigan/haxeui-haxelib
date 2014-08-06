#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_ui_haxelib_HaxeLibManager
#include <haxe/ui/haxelib/HaxeLibManager.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_tools_haxelib_Data
#include <tools/haxelib/Data.h>
#endif
#ifndef INCLUDED_tools_haxelib_Main
#include <tools/haxelib/Main.h>
#endif
#ifndef INCLUDED_tools_haxelib_Remoting_SiteApi
#include <tools/haxelib/Remoting_SiteApi.h>
#endif
#ifndef INCLUDED_tools_haxelib_SiteProxy
#include <tools/haxelib/SiteProxy.h>
#endif
namespace haxe{
namespace ui{
namespace haxelib{

Void HaxeLibManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.haxelib.HaxeLibManager","new",0x71299b41,"haxe.ui.haxelib.HaxeLibManager.new","haxe/ui/haxelib/HaxeLibManager.hx",20,0x28d0eb8e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct();
}
;
	return null();
}

//HaxeLibManager_obj::~HaxeLibManager_obj() { }

Dynamic HaxeLibManager_obj::__CreateEmpty() { return  new HaxeLibManager_obj; }
hx::ObjectPtr< HaxeLibManager_obj > HaxeLibManager_obj::__new()
{  hx::ObjectPtr< HaxeLibManager_obj > result = new HaxeLibManager_obj();
	result->__construct();
	return result;}

Dynamic HaxeLibManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HaxeLibManager_obj > result = new HaxeLibManager_obj();
	result->__construct();
	return result;}

bool HaxeLibManager_obj::hasLocalVersion( ::String project,::String version){
	HX_STACK_FRAME("haxe.ui.haxelib.HaxeLibManager","hasLocalVersion",0xc7fe5bc8,"haxe.ui.haxelib.HaxeLibManager.hasLocalVersion","haxe/ui/haxelib/HaxeLibManager.hx",23,0x28d0eb8e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(project,"project")
	HX_STACK_ARG(version,"version")
	HX_STACK_LINE(24)
	::String _g = this->getRepository(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	::String _g1 = ::tools::haxelib::Data_obj::safe(project);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(24)
	::String pdir = (_g + _g1);		HX_STACK_VAR(pdir,"pdir");
	HX_STACK_LINE(25)
	::String _g2 = ::tools::haxelib::Data_obj::safe(version);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(25)
	::String vdir = ((pdir + HX_CSTRING("/")) + _g2);		HX_STACK_VAR(vdir,"vdir");
	HX_STACK_LINE(26)
	::String _g3 = ::haxe::io::Path_obj::removeTrailingSlashes(vdir);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(26)
	return ::sys::FileSystem_obj::sys_exists(_g3);
}


HX_DEFINE_DYNAMIC_FUNC2(HaxeLibManager_obj,hasLocalVersion,return )

::String HaxeLibManager_obj::getLocalVersion( ::String project){
	HX_STACK_FRAME("haxe.ui.haxelib.HaxeLibManager","getLocalVersion",0x83788704,"haxe.ui.haxelib.HaxeLibManager.getLocalVersion","haxe/ui/haxelib/HaxeLibManager.hx",29,0x28d0eb8e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(project,"project")
	HX_STACK_LINE(30)
	::String _g = this->getRepository(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(30)
	::String _g1 = ::tools::haxelib::Data_obj::safe(project);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(30)
	::String pdir = (_g + _g1);		HX_STACK_VAR(pdir,"pdir");
	HX_STACK_LINE(31)
	::String _g2 = ::haxe::io::Path_obj::removeTrailingSlashes(pdir);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(31)
	if ((!(::sys::FileSystem_obj::sys_exists(_g2)))){
		HX_STACK_LINE(32)
		return null();
	}
	HX_STACK_LINE(34)
	return this->getCurrent(pdir);
}


HX_DEFINE_DYNAMIC_FUNC1(HaxeLibManager_obj,getLocalVersion,return )

Void HaxeLibManager_obj::setLocalVersion( ::String project,::String version){
{
		HX_STACK_FRAME("haxe.ui.haxelib.HaxeLibManager","setLocalVersion",0x7f440410,"haxe.ui.haxelib.HaxeLibManager.setLocalVersion","haxe/ui/haxelib/HaxeLibManager.hx",38,0x28d0eb8e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(project,"project")
		HX_STACK_ARG(version,"version")
		HX_STACK_LINE(38)
		if ((this->hasLocalVersion(project,version))){
			HX_STACK_LINE(39)
			::String _g = this->getLocalVersion(project);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(39)
			if (((_g != version))){
				HX_STACK_LINE(40)
				::String _g1 = this->getRepository(null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(40)
				::String _g2 = ::tools::haxelib::Data_obj::safe(project);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(40)
				::String pdir = (_g1 + _g2);		HX_STACK_VAR(pdir,"pdir");
				HX_STACK_LINE(41)
				::sys::io::File_obj::saveContent((pdir + HX_CSTRING("/.current")),version);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HaxeLibManager_obj,setLocalVersion,(void))

Dynamic HaxeLibManager_obj::queryUser( ::String username){
	HX_STACK_FRAME("haxe.ui.haxelib.HaxeLibManager","queryUser",0xdbee1714,"haxe.ui.haxelib.HaxeLibManager.queryUser","haxe/ui/haxelib/HaxeLibManager.hx",47,0x28d0eb8e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(username,"username")
	HX_STACK_LINE(47)
	return this->site->user(username);
}


HX_DEFINE_DYNAMIC_FUNC1(HaxeLibManager_obj,queryUser,return )

Dynamic HaxeLibManager_obj::queryProject( ::String projectName){
	HX_STACK_FRAME("haxe.ui.haxelib.HaxeLibManager","queryProject",0x94b0f1b0,"haxe.ui.haxelib.HaxeLibManager.queryProject","haxe/ui/haxelib/HaxeLibManager.hx",51,0x28d0eb8e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(projectName,"projectName")
	HX_STACK_LINE(51)
	return this->site->infos(projectName);
}


HX_DEFINE_DYNAMIC_FUNC1(HaxeLibManager_obj,queryProject,return )

Dynamic HaxeLibManager_obj::listLocalProjects( ::String filter,hx::Null< bool >  __o_loadRemote){
bool loadRemote = __o_loadRemote.Default(false);
	HX_STACK_FRAME("haxe.ui.haxelib.HaxeLibManager","listLocalProjects",0xe6aad768,"haxe.ui.haxelib.HaxeLibManager.listLocalProjects","haxe/ui/haxelib/HaxeLibManager.hx",54,0x28d0eb8e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(filter,"filter")
	HX_STACK_ARG(loadRemote,"loadRemote")
{
		HX_STACK_LINE(54)
		Array< ::String > filter1 = Array_obj< ::String >::__new().Add(filter);		HX_STACK_VAR(filter1,"filter1");
		HX_STACK_LINE(55)
		::String rep = this->getRepository(null());		HX_STACK_VAR(rep,"rep");
		HX_STACK_LINE(56)
		Array< ::String > folders = ::sys::FileSystem_obj::readDirectory(rep);		HX_STACK_VAR(folders,"folders");
		HX_STACK_LINE(57)
		if (((filter1->__get((int)0) != null()))){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::String >,filter1)
			bool run(::String f){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/haxelib/HaxeLibManager.hx",58,0x28d0eb8e)
				HX_STACK_ARG(f,"f")
				{
					HX_STACK_LINE(58)
					return (f.toLowerCase().indexOf(filter1->__get((int)0).toLowerCase(),null()) > (int)-1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(58)
			Array< ::String > _g = folders->filter( Dynamic(new _Function_2_1(filter1)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			folders = _g;
		}
		HX_STACK_LINE(59)
		Dynamic all = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(all,"all");
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(60)
			while((true)){
				HX_STACK_LINE(60)
				if ((!(((_g < folders->length))))){
					HX_STACK_LINE(60)
					break;
				}
				HX_STACK_LINE(60)
				::String p = folders->__get(_g);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(60)
				++(_g);
				HX_STACK_LINE(61)
				::String _g1 = p.charAt((int)0);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(61)
				if (((_g1 != HX_CSTRING(".")))){
					HX_STACK_LINE(62)
					Array< ::String > versions = Array_obj< ::String >::__new();		HX_STACK_VAR(versions,"versions");
					HX_STACK_LINE(63)
					::String current = null();		HX_STACK_VAR(current,"current");
					HX_STACK_LINE(64)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(65)
						::String _g2 = this->getCurrent((rep + p));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(65)
						current = _g2;
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(67)
								current = null();
							}
						}
					}
					HX_STACK_LINE(69)
					if (((current != null()))){
						HX_STACK_LINE(70)
						::String dev = null();		HX_STACK_VAR(dev,"dev");
						HX_STACK_LINE(71)
						try
						{
						HX_STACK_CATCHABLE(Dynamic, 0);
						{
							HX_STACK_LINE(72)
							::String _g3 = ::sys::io::File_obj::getContent(((rep + p) + HX_CSTRING("/.dev")));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(72)
							::String _g4 = ::StringTools_obj::trim(_g3);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(72)
							dev = _g4;
						}
						}
						catch(Dynamic __e){
							{
								HX_STACK_BEGIN_CATCH
								Dynamic e = __e;{
								}
							}
						}
						HX_STACK_LINE(77)
						{
							HX_STACK_LINE(77)
							int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(77)
							Array< ::String > _g2 = ::sys::FileSystem_obj::readDirectory((rep + p));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(77)
							while((true)){
								HX_STACK_LINE(77)
								if ((!(((_g11 < _g2->length))))){
									HX_STACK_LINE(77)
									break;
								}
								HX_STACK_LINE(77)
								::String v = _g2->__get(_g11);		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(77)
								++(_g11);
								HX_STACK_LINE(78)
								::String _g5 = v.charAt((int)0);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(78)
								if (((_g5 != HX_CSTRING(".")))){
									HX_STACK_LINE(79)
									::String _g6 = ::tools::haxelib::Data_obj::unsafe(v);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(79)
									v = _g6;
									HX_STACK_LINE(84)
									versions->push(v);
								}
							}
						}
						HX_STACK_LINE(87)
						if (((dev != null()))){
							HX_STACK_LINE(88)
							versions->push(((HX_CSTRING("dev:") + dev) + HX_CSTRING("")));
						}
						HX_STACK_LINE(90)
						::String _g7 = ::tools::haxelib::Data_obj::unsafe(p);		HX_STACK_VAR(_g7,"_g7");
						struct _Function_5_1{
							inline static Dynamic Block( ::String &_g7,Array< ::String > &versions,::String &current){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/haxelib/HaxeLibManager.hx",89,0x28d0eb8e)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("name") , _g7,false);
									__result->Add(HX_CSTRING("localVersions") , versions,false);
									__result->Add(HX_CSTRING("remoteProject") , null(),false);
									__result->Add(HX_CSTRING("currentVersion") , current,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(89)
						Dynamic o = _Function_5_1::Block(_g7,versions,current);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(96)
						if (((loadRemote == true))){
							HX_STACK_LINE(97)
							Dynamic _g8 = this->queryProject(o->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(97)
							o->__FieldRef(HX_CSTRING("remoteProject")) = _g8;
						}
						HX_STACK_LINE(99)
						all->__Field(HX_CSTRING("push"),true)(o);
					}
				}
			}
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(Dynamic s1,Dynamic s2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/haxelib/HaxeLibManager.hx",103,0x28d0eb8e)
			HX_STACK_ARG(s1,"s1")
			HX_STACK_ARG(s2,"s2")
			{
				HX_STACK_LINE(103)
				return ::Reflect_obj::compare(s1->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("toLowerCase"),true)(),s2->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("toLowerCase"),true)());
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(103)
		all->__Field(HX_CSTRING("sort"),true)( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(104)
		Dynamic list = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				if ((!(((_g < all->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				Dynamic p = all->__GetItem(_g);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(105)
				++(_g);
				HX_STACK_LINE(106)
				list->__Field(HX_CSTRING("push"),true)(p);
			}
		}
		HX_STACK_LINE(108)
		return list;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(HaxeLibManager_obj,listLocalProjects,return )

::haxe::ui::haxelib::HaxeLibManager HaxeLibManager_obj::_instance;

::haxe::ui::haxelib::HaxeLibManager HaxeLibManager_obj::instance;

::haxe::ui::haxelib::HaxeLibManager HaxeLibManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.haxelib.HaxeLibManager","get_instance",0x1f8f249d,"haxe.ui.haxelib.HaxeLibManager.get_instance","haxe/ui/haxelib/HaxeLibManager.hx",12,0x28d0eb8e)
	HX_STACK_LINE(13)
	if (((::haxe::ui::haxelib::HaxeLibManager_obj::_instance == null()))){
		HX_STACK_LINE(14)
		::haxe::ui::haxelib::HaxeLibManager _g = ::haxe::ui::haxelib::HaxeLibManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(14)
		::haxe::ui::haxelib::HaxeLibManager_obj::_instance = _g;
	}
	HX_STACK_LINE(16)
	return ::haxe::ui::haxelib::HaxeLibManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HaxeLibManager_obj,get_instance,return )


HaxeLibManager_obj::HaxeLibManager_obj()
{
}

Dynamic HaxeLibManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"queryUser") ) { return queryUser_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"queryProject") ) { return queryProject_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasLocalVersion") ) { return hasLocalVersion_dyn(); }
		if (HX_FIELD_EQ(inName,"getLocalVersion") ) { return getLocalVersion_dyn(); }
		if (HX_FIELD_EQ(inName,"setLocalVersion") ) { return setLocalVersion_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"listLocalProjects") ) { return listLocalProjects_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HaxeLibManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::haxelib::HaxeLibManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::haxelib::HaxeLibManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HaxeLibManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hasLocalVersion"),
	HX_CSTRING("getLocalVersion"),
	HX_CSTRING("setLocalVersion"),
	HX_CSTRING("queryUser"),
	HX_CSTRING("queryProject"),
	HX_CSTRING("listLocalProjects"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HaxeLibManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HaxeLibManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(HaxeLibManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HaxeLibManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HaxeLibManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(HaxeLibManager_obj::instance,"instance");
};

#endif

Class HaxeLibManager_obj::__mClass;

void HaxeLibManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.haxelib.HaxeLibManager"), hx::TCanCast< HaxeLibManager_obj> ,sStaticFields,sMemberFields,
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

void HaxeLibManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace haxelib
