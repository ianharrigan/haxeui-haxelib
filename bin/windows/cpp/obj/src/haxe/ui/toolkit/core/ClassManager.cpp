#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#include <haxe/ui/toolkit/core/ClassManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ClassRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ClassRegistryEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_ComponentRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/ComponentRegistryEntry.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core__ClassManager_DataSourceRegistryEntry
#include <haxe/ui/toolkit/core/_ClassManager/DataSourceRegistryEntry.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void ClassManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","new",0x99f32294,"haxe.ui.toolkit.core.ClassManager.new","haxe/ui/toolkit/core/ClassManager.hx",21,0xd34ec19c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	this->registerDefaults();
}
;
	return null();
}

//ClassManager_obj::~ClassManager_obj() { }

Dynamic ClassManager_obj::__CreateEmpty() { return  new ClassManager_obj; }
hx::ObjectPtr< ClassManager_obj > ClassManager_obj::__new()
{  hx::ObjectPtr< ClassManager_obj > result = new ClassManager_obj();
	result->__construct();
	return result;}

Dynamic ClassManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClassManager_obj > result = new ClassManager_obj();
	result->__construct();
	return result;}

Void ClassManager_obj::registerDefaults( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerDefaults",0x4d472b61,"haxe.ui.toolkit.core.ClassManager.registerDefaults","haxe/ui/toolkit/core/ClassManager.hx",24,0xd34ec19c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ClassManager_obj,registerDefaults,(void))

::String ClassManager_obj::getComponentClassName( ::String simpleName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","getComponentClassName",0x37577390,"haxe.ui.toolkit.core.ClassManager.getComponentClassName","haxe/ui/toolkit/core/ClassManager.hx",33,0xd34ec19c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(simpleName,"simpleName")
	HX_STACK_LINE(34)
	if (((this->componentClassMap == null()))){
		HX_STACK_LINE(35)
		return null();
	}
	HX_STACK_LINE(38)
	::String key = simpleName;		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(40)
	::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry entry = this->componentClassMap->get(key);		HX_STACK_VAR(entry,"entry");
	HX_STACK_LINE(41)
	if (((entry == null()))){
		HX_STACK_LINE(42)
		return null();
	}
	HX_STACK_LINE(44)
	return entry->className;
}


HX_DEFINE_DYNAMIC_FUNC1(ClassManager_obj,getComponentClassName,return )

Void ClassManager_obj::registerComponentClass( ::Class cls,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerComponentClass",0x60670a4a,"haxe.ui.toolkit.core.ClassManager.registerComponentClass","haxe/ui/toolkit/core/ClassManager.hx",47,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(48)
		::String className = ::Type_obj::getClassName(cls);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(49)
		this->registerComponentClassName(className,simpleName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerComponentClass,(void))

Void ClassManager_obj::registerComponentClassName( ::String className,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerComponentClassName",0xf13395b5,"haxe.ui.toolkit.core.ClassManager.registerComponentClassName","haxe/ui/toolkit/core/ClassManager.hx",52,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(53)
		if (((this->componentClassMap == null()))){
			HX_STACK_LINE(54)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			this->componentClassMap = _g;
		}
		HX_STACK_LINE(57)
		::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry entry = ::haxe::ui::toolkit::core::_ClassManager::ComponentRegistryEntry_obj::__new();		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(58)
		entry->simpleName = simpleName;
		HX_STACK_LINE(59)
		entry->className = className;
		HX_STACK_LINE(60)
		this->componentClassMap->set(simpleName,entry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerComponentClassName,(void))

bool ClassManager_obj::hasDataSourceClass( ::String simpleName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","hasDataSourceClass",0xbca8a165,"haxe.ui.toolkit.core.ClassManager.hasDataSourceClass","haxe/ui/toolkit/core/ClassManager.hx",68,0xd34ec19c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(simpleName,"simpleName")
	HX_STACK_LINE(69)
	if (((this->dataSourceClassMap == null()))){
		HX_STACK_LINE(70)
		return false;
	}
	HX_STACK_LINE(73)
	return this->dataSourceClassMap->exists(simpleName);
}


HX_DEFINE_DYNAMIC_FUNC1(ClassManager_obj,hasDataSourceClass,return )

::String ClassManager_obj::getDataSourceClassName( ::String simpleName){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","getDataSourceClassName",0xf8224a94,"haxe.ui.toolkit.core.ClassManager.getDataSourceClassName","haxe/ui/toolkit/core/ClassManager.hx",76,0xd34ec19c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(simpleName,"simpleName")
	HX_STACK_LINE(77)
	if (((this->dataSourceClassMap == null()))){
		HX_STACK_LINE(78)
		return null();
	}
	HX_STACK_LINE(81)
	::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry entry = this->dataSourceClassMap->get(simpleName);		HX_STACK_VAR(entry,"entry");
	HX_STACK_LINE(82)
	if (((entry == null()))){
		HX_STACK_LINE(83)
		return null();
	}
	HX_STACK_LINE(86)
	return entry->className;
}


HX_DEFINE_DYNAMIC_FUNC1(ClassManager_obj,getDataSourceClassName,return )

Void ClassManager_obj::registerDataSourceClass( ::Class cls,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerDataSourceClass",0xf4256864,"haxe.ui.toolkit.core.ClassManager.registerDataSourceClass","haxe/ui/toolkit/core/ClassManager.hx",89,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(90)
		::String className = ::Type_obj::getClassName(cls);		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(91)
		this->registerDataSourceClassName(className,simpleName);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerDataSourceClass,(void))

Void ClassManager_obj::registerDataSourceClassName( ::String className,::String simpleName){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","registerDataSourceClassName",0xdee408cf,"haxe.ui.toolkit.core.ClassManager.registerDataSourceClassName","haxe/ui/toolkit/core/ClassManager.hx",94,0xd34ec19c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(className,"className")
		HX_STACK_ARG(simpleName,"simpleName")
		HX_STACK_LINE(95)
		if (((this->dataSourceClassMap == null()))){
			HX_STACK_LINE(96)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(96)
			this->dataSourceClassMap = _g;
		}
		HX_STACK_LINE(99)
		::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry entry = ::haxe::ui::toolkit::core::_ClassManager::DataSourceRegistryEntry_obj::__new();		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(100)
		entry->simpleName = simpleName;
		HX_STACK_LINE(101)
		entry->className = className;
		HX_STACK_LINE(102)
		this->dataSourceClassMap->set(simpleName,entry);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ClassManager_obj,registerDataSourceClassName,(void))

::haxe::ui::toolkit::core::ClassManager ClassManager_obj::_instance;

::haxe::ui::toolkit::core::ClassManager ClassManager_obj::instance;

::haxe::ui::toolkit::core::ClassManager ClassManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.ClassManager","get_instance",0xb3019aea,"haxe.ui.toolkit.core.ClassManager.get_instance","haxe/ui/toolkit/core/ClassManager.hx",10,0xd34ec19c)
	HX_STACK_LINE(11)
	if (((::haxe::ui::toolkit::core::ClassManager_obj::_instance == null()))){
		HX_STACK_LINE(12)
		::haxe::ui::toolkit::core::ClassManager _g = ::haxe::ui::toolkit::core::ClassManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(12)
		::haxe::ui::toolkit::core::ClassManager_obj::_instance = _g;
	}
	HX_STACK_LINE(14)
	return ::haxe::ui::toolkit::core::ClassManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClassManager_obj,get_instance,return )


ClassManager_obj::ClassManager_obj()
{
}

void ClassManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassManager);
	HX_MARK_MEMBER_NAME(componentClassMap,"componentClassMap");
	HX_MARK_MEMBER_NAME(dataSourceClassMap,"dataSourceClassMap");
	HX_MARK_END_CLASS();
}

void ClassManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(componentClassMap,"componentClassMap");
	HX_VISIT_MEMBER_NAME(dataSourceClassMap,"dataSourceClassMap");
}

Dynamic ClassManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerDefaults") ) { return registerDefaults_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentClassMap") ) { return componentClassMap; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dataSourceClassMap") ) { return dataSourceClassMap; }
		if (HX_FIELD_EQ(inName,"hasDataSourceClass") ) { return hasDataSourceClass_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getComponentClassName") ) { return getComponentClassName_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"registerComponentClass") ) { return registerComponentClass_dyn(); }
		if (HX_FIELD_EQ(inName,"getDataSourceClassName") ) { return getDataSourceClassName_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"registerDataSourceClass") ) { return registerDataSourceClass_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"registerComponentClassName") ) { return registerComponentClassName_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"registerDataSourceClassName") ) { return registerDataSourceClassName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ClassManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::ClassManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::ClassManager >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"componentClassMap") ) { componentClassMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dataSourceClassMap") ) { dataSourceClassMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClassManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("componentClassMap"));
	outFields->push(HX_CSTRING("dataSourceClassMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ClassManager_obj,componentClassMap),HX_CSTRING("componentClassMap")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ClassManager_obj,dataSourceClassMap),HX_CSTRING("dataSourceClassMap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("registerDefaults"),
	HX_CSTRING("componentClassMap"),
	HX_CSTRING("getComponentClassName"),
	HX_CSTRING("registerComponentClass"),
	HX_CSTRING("registerComponentClassName"),
	HX_CSTRING("dataSourceClassMap"),
	HX_CSTRING("hasDataSourceClass"),
	HX_CSTRING("getDataSourceClassName"),
	HX_CSTRING("registerDataSourceClass"),
	HX_CSTRING("registerDataSourceClassName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClassManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ClassManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(ClassManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClassManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ClassManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(ClassManager_obj::instance,"instance");
};

#endif

Class ClassManager_obj::__mClass;

void ClassManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.ClassManager"), hx::TCanCast< ClassManager_obj> ,sStaticFields,sMemberFields,
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

void ClassManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
