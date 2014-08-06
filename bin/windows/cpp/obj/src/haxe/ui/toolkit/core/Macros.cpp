#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_macro_Access
#include <haxe/macro/Access.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprDef
#include <haxe/macro/ExprDef.h>
#endif
#ifndef INCLUDED_haxe_macro_FieldType
#include <haxe/macro/FieldType.h>
#endif
#ifndef INCLUDED_haxe_macro_Type
#include <haxe/macro/Type.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Macros
#include <haxe/ui/toolkit/core/Macros.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_XmlUtil
#include <haxe/ui/toolkit/util/XmlUtil.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Macros_obj::__construct()
{
	return null();
}

//Macros_obj::~Macros_obj() { }

Dynamic Macros_obj::__CreateEmpty() { return  new Macros_obj; }
hx::ObjectPtr< Macros_obj > Macros_obj::__new()
{  hx::ObjectPtr< Macros_obj > result = new Macros_obj();
	result->__construct();
	return result;}

Dynamic Macros_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Macros_obj > result = new Macros_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap Macros_obj::componentClasses;

::haxe::ds::StringMap Macros_obj::dataSourceClasses;

::haxe::ds::StringMap Macros_obj::themeResources;

Void Macros_obj::processNode( ::Xml node,::haxe::ds::StringMap types,Array< ::String > paths){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","processNode",0xd621bf57,"haxe.ui.toolkit.core.Macros.processNode","haxe/ui/toolkit/core/Macros.hx",397,0x3fba9eca)
		HX_STACK_ARG(node,"node")
		HX_STACK_ARG(types,"types")
		HX_STACK_ARG(paths,"paths")
		HX_STACK_LINE(398)
		::String nodeName = node->get_nodeName();		HX_STACK_VAR(nodeName,"nodeName");
		HX_STACK_LINE(399)
		int n = nodeName.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(400)
		if (((n != (int)-1))){
			HX_STACK_LINE(401)
			::String _g = nodeName.substr((n + (int)1),nodeName.length);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(401)
			nodeName = _g;
		}
		HX_STACK_LINE(403)
		::String _g1 = nodeName.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(403)
		nodeName = _g1;
		HX_STACK_LINE(405)
		if (((nodeName == HX_CSTRING("import")))){
			HX_STACK_LINE(407)
			::String resourcePath = node->get(HX_CSTRING("resource"));		HX_STACK_VAR(resourcePath,"resourcePath");
			HX_STACK_LINE(408)
			::String _g2 = ::haxe::ui::toolkit::core::Macros_obj::resolveResource(resourcePath,paths);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(408)
			resourcePath = _g2;
			HX_STACK_LINE(409)
			::String _g3 = ::haxe::io::Path_obj::removeTrailingSlashes(resourcePath);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(409)
			bool _g4 = ::sys::FileSystem_obj::sys_exists(_g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(409)
			if (((_g4 == false))){
				HX_STACK_LINE(410)
				::haxe::Log_obj::trace(((HX_CSTRING("WARNING: ") + resourcePath) + HX_CSTRING(" not found")),hx::SourceInfo(HX_CSTRING("Macros.hx"),410,HX_CSTRING("haxe.ui.toolkit.core.Macros"),HX_CSTRING("processNode")));
			}
			else{
				HX_STACK_LINE(412)
				::String contents = ::sys::io::File_obj::getContent(resourcePath);		HX_STACK_VAR(contents,"contents");
				HX_STACK_LINE(413)
				::Xml xml = ::Xml_obj::parse(contents);		HX_STACK_VAR(xml,"xml");
				HX_STACK_LINE(414)
				::Xml _g5 = xml->firstElement();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(414)
				::haxe::ui::toolkit::core::Macros_obj::processNode(_g5,types,paths);
				HX_STACK_LINE(415)
				return null();
			}
		}
		HX_STACK_LINE(420)
		::String id = node->get(HX_CSTRING("id"));		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(421)
		if (((bool((id != null())) && bool((id.length > (int)0))))){
			HX_STACK_LINE(422)
			::String cls = ::haxe::ui::toolkit::core::Macros_obj::componentClasses->get(nodeName);		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(423)
			if (((cls != null()))){
				HX_STACK_LINE(424)
				types->set(id,cls);
			}
			else{
				HX_STACK_LINE(426)
				::haxe::Log_obj::trace(((HX_CSTRING("WARNING: '") + nodeName) + HX_CSTRING("' hasnt been registered")),hx::SourceInfo(HX_CSTRING("Macros.hx"),426,HX_CSTRING("haxe.ui.toolkit.core.Macros"),HX_CSTRING("processNode")));
			}
		}
		HX_STACK_LINE(429)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(node->elements());  __it->hasNext(); ){
			::Xml child = __it->next();
			::haxe::ui::toolkit::core::Macros_obj::processNode(child,types,paths);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Macros_obj,processNode,(void))

Dynamic Macros_obj::getFunction( ::String name,Dynamic fields){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getFunction",0xaac6f114,"haxe.ui.toolkit.core.Macros.getFunction","haxe/ui/toolkit/core/Macros.hx",434,0x3fba9eca)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(fields,"fields")
	HX_STACK_LINE(435)
	Dynamic fn = null();		HX_STACK_VAR(fn,"fn");
	HX_STACK_LINE(436)
	{
		HX_STACK_LINE(436)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(436)
		while((true)){
			HX_STACK_LINE(436)
			if ((!(((_g < fields->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(436)
				break;
			}
			HX_STACK_LINE(436)
			Dynamic f = fields->__GetItem(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(436)
			++(_g);
			HX_STACK_LINE(437)
			if (((f->__Field(HX_CSTRING("name"),true) == name))){
				HX_STACK_LINE(438)
				{
					HX_STACK_LINE(438)
					::haxe::macro::FieldType _g1 = f->__Field(HX_CSTRING("kind"),true);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(438)
					int _switch_1 = (_g1->__Index());
					if (  ( _switch_1==(int)1)){
						HX_STACK_LINE(438)
						Dynamic f1 = (::haxe::macro::FieldType(_g1))->__Param(0);		HX_STACK_VAR(f1,"f1");
						HX_STACK_LINE(439)
						{
							HX_STACK_LINE(440)
							fn = f1;
							HX_STACK_LINE(441)
							break;
						}
					}
					else  {
					}
;
;
				}
				HX_STACK_LINE(444)
				break;
			}
		}
	}
	HX_STACK_LINE(447)
	return fn;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,getFunction,return )

Void Macros_obj::addFunction( ::String name,Dynamic e,Array< ::Dynamic > access,Dynamic fields,Dynamic pos){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","addFunction",0xb62f659f,"haxe.ui.toolkit.core.Macros.addFunction","haxe/ui/toolkit/core/Macros.hx",450,0x3fba9eca)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(access,"access")
		HX_STACK_ARG(fields,"fields")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_LINE(451)
		Dynamic fn;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(451)
		{
			HX_STACK_LINE(451)
			::haxe::macro::ExprDef _g = e->__Field(HX_CSTRING("expr"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(451)
			switch( (int)(_g->__Index())){
				case (int)11: {
					HX_STACK_LINE(451)
					Dynamic f = (::haxe::macro::ExprDef(_g))->__Param(1);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(452)
					fn = f;
				}
				;break;
				default: {
					HX_STACK_LINE(453)
					HX_STACK_DO_THROW(HX_CSTRING("false"));
				}
			}
		}
		HX_STACK_LINE(455)
		::haxe::macro::FieldType _g = ::haxe::macro::FieldType_obj::FFun(fn);		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &pos,::haxe::macro::FieldType &_g,Array< ::Dynamic > &access,::String &name){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",455,0x3fba9eca)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , name,false);
					__result->Add(HX_CSTRING("doc") , null(),false);
					__result->Add(HX_CSTRING("meta") , Dynamic( Array_obj<Dynamic>::__new()),false);
					__result->Add(HX_CSTRING("access") , access,false);
					__result->Add(HX_CSTRING("kind") , _g,false);
					__result->Add(HX_CSTRING("pos") , pos,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(455)
		Dynamic _g1 = _Function_1_1::Block(pos,_g,access,name);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(455)
		fields->__Field(HX_CSTRING("push"),true)(_g1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Macros_obj,addFunction,(void))

Dynamic Macros_obj::getFieldsWithMeta( ::String meta,Dynamic fields){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getFieldsWithMeta",0x6d353e80,"haxe.ui.toolkit.core.Macros.getFieldsWithMeta","haxe/ui/toolkit/core/Macros.hx",458,0x3fba9eca)
	HX_STACK_ARG(meta,"meta")
	HX_STACK_ARG(fields,"fields")
	HX_STACK_LINE(459)
	Dynamic arr = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(461)
	{
		HX_STACK_LINE(461)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(461)
		while((true)){
			HX_STACK_LINE(461)
			if ((!(((_g < fields->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(461)
				break;
			}
			HX_STACK_LINE(461)
			Dynamic f = fields->__GetItem(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(461)
			++(_g);
			HX_STACK_LINE(462)
			if ((::haxe::ui::toolkit::core::Macros_obj::hasMeta(f,meta))){
				HX_STACK_LINE(463)
				arr->__Field(HX_CSTRING("push"),true)(f);
			}
		}
	}
	HX_STACK_LINE(467)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,getFieldsWithMeta,return )

Dynamic Macros_obj::getSuperClass( ::haxe::macro::Type t){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getSuperClass",0xf89665b9,"haxe.ui.toolkit.core.Macros.getSuperClass","haxe/ui/toolkit/core/Macros.hx",470,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(471)
	Dynamic superClass = null();		HX_STACK_VAR(superClass,"superClass");
	HX_STACK_LINE(472)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(472)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(473)
			{
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(472)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(474)
			{
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(472)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(475)
			{
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(472)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(476)
			{
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(472)
			::haxe::macro::Type t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(477)
			{
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(472)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(479)
			superClass = t1->__Field(HX_CSTRING("get"),true)()->__Field(HX_CSTRING("superClass"),true);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(472)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(481)
			{
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(472)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(482)
			{
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(472)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(483)
			{
			}
		}
		;break;
	}
	HX_STACK_LINE(485)
	return superClass;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Macros_obj,getSuperClass,return )

Void Macros_obj::insertLine( Dynamic fn,Dynamic e,int location){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","insertLine",0xea641f47,"haxe.ui.toolkit.core.Macros.insertLine","haxe/ui/toolkit/core/Macros.hx",488,0x3fba9eca)
		HX_STACK_ARG(fn,"fn")
		HX_STACK_ARG(e,"e")
		HX_STACK_ARG(location,"location")
		HX_STACK_LINE(489)
		Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			::haxe::macro::ExprDef _g = fn->__Field(HX_CSTRING("expr"),true)->__Field(HX_CSTRING("expr"),true);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(489)
			switch( (int)(_g->__Index())){
				case (int)12: {
					HX_STACK_LINE(489)
					Dynamic el = (::haxe::macro::ExprDef(_g))->__Param(0);		HX_STACK_VAR(el,"el");
					HX_STACK_LINE(490)
					{
						HX_STACK_LINE(490)
						Dynamic _g1 = ::haxe::ui::toolkit::core::Macros_obj::insertExpr(el,location,e);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(490)
						::haxe::macro::ExprDef _g11 = ::haxe::macro::ExprDef_obj::EBlock(_g1);		HX_STACK_VAR(_g11,"_g11");
						struct _Function_4_1{
							inline static Dynamic Block( ::haxe::macro::ExprDef &_g11){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",490,0x3fba9eca)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("expr") , _g11,false);
									struct _Function_5_1{
										inline static Dynamic Block( ){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",490,0x3fba9eca)
											{
												hx::Anon __result = hx::Anon_obj::Create();
												__result->Add(HX_CSTRING("file") , HX_CSTRING("C:\\Servers\\Haxe\\haxe\\lib/haxeui/1,4,10/haxe/ui/toolkit/core/Macros.hx"),false);
												__result->Add(HX_CSTRING("min") , (int)15919,false);
												__result->Add(HX_CSTRING("max") , (int)15948,false);
												return __result;
											}
											return null();
										}
									};
									__result->Add(HX_CSTRING("pos") , _Function_5_1::Block(),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(490)
						_g4 = _Function_4_1::Block(_g11);
					}
				}
				;break;
				default: {
					HX_STACK_LINE(491)
					Dynamic _g2 = ::haxe::ui::toolkit::core::Macros_obj::insertExpr(Dynamic( Array_obj<Dynamic>::__new().Add(fn->__Field(HX_CSTRING("expr"),true))),location,e);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(491)
					::haxe::macro::ExprDef _g3 = ::haxe::macro::ExprDef_obj::EBlock(_g2);		HX_STACK_VAR(_g3,"_g3");
					struct _Function_3_1{
						inline static Dynamic Block( ::haxe::macro::ExprDef &_g3){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",491,0x3fba9eca)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("expr") , _g3,false);
								struct _Function_4_1{
									inline static Dynamic Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",491,0x3fba9eca)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("file") , HX_CSTRING("C:\\Servers\\Haxe\\haxe\\lib/haxeui/1,4,10/haxe/ui/toolkit/core/Macros.hx"),false);
											__result->Add(HX_CSTRING("min") , (int)15971,false);
											__result->Add(HX_CSTRING("max") , (int)16009,false);
											return __result;
										}
										return null();
									}
								};
								__result->Add(HX_CSTRING("pos") , _Function_4_1::Block(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(491)
					_g4 = _Function_3_1::Block(_g3);
				}
			}
		}
		HX_STACK_LINE(489)
		fn->__FieldRef(HX_CSTRING("expr")) = _g4;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Macros_obj,insertLine,(void))

Dynamic Macros_obj::insertExpr( Dynamic arr,int pos,Dynamic item){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","insertExpr",0xe5cf0488,"haxe.ui.toolkit.core.Macros.insertExpr","haxe/ui/toolkit/core/Macros.hx",495,0x3fba9eca)
	HX_STACK_ARG(arr,"arr")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(item,"item")
	HX_STACK_LINE(496)
	if (((pos == (int)-1))){
		HX_STACK_LINE(497)
		arr->__Field(HX_CSTRING("push"),true)(item);
	}
	else{
		HX_STACK_LINE(499)
		arr->__Field(HX_CSTRING("insert"),true)(pos,item);
	}
	HX_STACK_LINE(501)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Macros_obj,insertExpr,return )

::String Macros_obj::getClassNameFromType( ::haxe::macro::Type t){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getClassNameFromType",0xba05058b,"haxe.ui.toolkit.core.Macros.getClassNameFromType","haxe/ui/toolkit/core/Macros.hx",603,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(604)
	::String className = HX_CSTRING("");		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(605)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(605)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(606)
			{
				HX_STACK_LINE(606)
				::String _g = t1->toString();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(606)
				className = _g;
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(605)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(607)
			{
				HX_STACK_LINE(607)
				::String _g1 = t1->toString();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(607)
				className = _g1;
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(605)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(608)
			className = HX_CSTRING("");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(605)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(609)
			{
				HX_STACK_LINE(609)
				::String _g2 = t1->toString();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(609)
				className = _g2;
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(605)
			::haxe::macro::Type t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(610)
			className = HX_CSTRING("");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(605)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(611)
			{
				HX_STACK_LINE(611)
				::String _g3 = t1->toString();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(611)
				className = _g3;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(605)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(612)
			{
				HX_STACK_LINE(612)
				::String _g4 = t1->toString();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(612)
				className = _g4;
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(605)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(613)
			{
				HX_STACK_LINE(613)
				::String _g5 = t1->toString();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(613)
				className = _g5;
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(605)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(614)
			{
				HX_STACK_LINE(614)
				::String _g6 = t1->toString();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(614)
				className = _g6;
			}
		}
		;break;
	}
	HX_STACK_LINE(616)
	return className;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Macros_obj,getClassNameFromType,return )

bool Macros_obj::hasMeta( Dynamic f,::String meta){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","hasMeta",0x27fd5385,"haxe.ui.toolkit.core.Macros.hasMeta","haxe/ui/toolkit/core/Macros.hx",619,0x3fba9eca)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(meta,"meta")
	HX_STACK_LINE(620)
	bool has = false;		HX_STACK_VAR(has,"has");
	HX_STACK_LINE(621)
	{
		HX_STACK_LINE(621)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(621)
		Dynamic _g1 = f->__Field(HX_CSTRING("meta"),true);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(621)
		while((true)){
			HX_STACK_LINE(621)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(621)
				break;
			}
			HX_STACK_LINE(621)
			Dynamic m = _g1->__GetItem(_g);		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(621)
			++(_g);
			HX_STACK_LINE(622)
			if (((bool((m->__Field(HX_CSTRING("name"),true) == meta)) || bool((m->__Field(HX_CSTRING("name"),true) == (HX_CSTRING(":") + meta)))))){
				HX_STACK_LINE(623)
				has = true;
				HX_STACK_LINE(624)
				break;
			}
		}
	}
	HX_STACK_LINE(627)
	return has;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,hasMeta,return )

::String Macros_obj::getClassName( ::haxe::macro::Type t){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","getClassName",0xeb868927,"haxe.ui.toolkit.core.Macros.getClassName","haxe/ui/toolkit/core/Macros.hx",630,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(631)
	::String name = null();		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(632)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(632)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(633)
			{
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(632)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(634)
			{
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(632)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(635)
			{
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(632)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(636)
			{
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(632)
			::haxe::macro::Type t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(637)
			{
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(632)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(639)
			name = t1->__Field(HX_CSTRING("get"),true)()->__Field(HX_CSTRING("module"),true);
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(632)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(641)
			{
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(632)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(642)
			{
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(632)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(643)
			{
			}
		}
		;break;
	}
	HX_STACK_LINE(645)
	return name;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Macros_obj,getClassName,return )

bool Macros_obj::hasInterface( ::haxe::macro::Type t,::String interfaceRequired){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","hasInterface",0xc71e70f9,"haxe.ui.toolkit.core.Macros.hasInterface","haxe/ui/toolkit/core/Macros.hx",648,0x3fba9eca)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(interfaceRequired,"interfaceRequired")
	HX_STACK_LINE(649)
	bool has = false;		HX_STACK_VAR(has,"has");
	HX_STACK_LINE(650)
	switch( (int)(t->__Index())){
		case (int)5: {
			HX_STACK_LINE(650)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(651)
			{
			}
		}
		;break;
		case (int)0: {
			HX_STACK_LINE(650)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(652)
			{
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(650)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(653)
			{
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(650)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(654)
			{
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(650)
			::haxe::macro::Type t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(655)
			{
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(650)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(657)
			while((true)){
				HX_STACK_LINE(657)
				if ((!(((t1 != null()))))){
					HX_STACK_LINE(657)
					break;
				}
				HX_STACK_LINE(658)
				{
					HX_STACK_LINE(658)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(658)
					Dynamic _g1 = t1->__Field(HX_CSTRING("get"),true)()->__Field(HX_CSTRING("interfaces"),true);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(658)
					while((true)){
						HX_STACK_LINE(658)
						if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(658)
							break;
						}
						HX_STACK_LINE(658)
						Dynamic i = _g1->__GetItem(_g);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(658)
						++(_g);
						HX_STACK_LINE(659)
						::String interfaceName = i->__Field(HX_CSTRING("t"),true)->toString();		HX_STACK_VAR(interfaceName,"interfaceName");
						HX_STACK_LINE(660)
						if (((interfaceName == interfaceRequired))){
							HX_STACK_LINE(661)
							has = true;
							HX_STACK_LINE(662)
							break;
						}
					}
				}
				HX_STACK_LINE(666)
				if (((has == false))){
					HX_STACK_LINE(667)
					if (((t1->__Field(HX_CSTRING("get"),true)()->__Field(HX_CSTRING("superClass"),true) != null()))){
						HX_STACK_LINE(668)
						t1 = t1->__Field(HX_CSTRING("get"),true)()->__Field(HX_CSTRING("superClass"),true)->__Field(HX_CSTRING("t"),true);
					}
					else{
						HX_STACK_LINE(670)
						t1 = null();
					}
				}
				else{
					HX_STACK_LINE(673)
					break;
				}
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(650)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(677)
			{
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(650)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(678)
			{
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(650)
			Dynamic t1 = (::haxe::macro::Type(t))->__Param(0);		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(679)
			{
			}
		}
		;break;
	}
	HX_STACK_LINE(682)
	return has;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,hasInterface,return )

::String Macros_obj::resolveResource( ::String resourcePath,Array< ::String > paths){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Macros","resolveResource",0xa02b9620,"haxe.ui.toolkit.core.Macros.resolveResource","haxe/ui/toolkit/core/Macros.hx",685,0x3fba9eca)
	HX_STACK_ARG(resourcePath,"resourcePath")
	HX_STACK_ARG(paths,"paths")
	HX_STACK_LINE(690)
	Array< ::String > subs = Array_obj< ::String >::__new().Add(HX_CSTRING("/"));		HX_STACK_VAR(subs,"subs");
	HX_STACK_LINE(691)
	Array< ::String > candidates = Array_obj< ::String >::__new().Add(HX_CSTRING("project.xml")).Add(HX_CSTRING("application.xml"));		HX_STACK_VAR(candidates,"candidates");
	HX_STACK_LINE(692)
	{
		HX_STACK_LINE(692)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(692)
		while((true)){
			HX_STACK_LINE(692)
			if ((!(((_g < candidates->length))))){
				HX_STACK_LINE(692)
				break;
			}
			HX_STACK_LINE(692)
			::String c = candidates->__get(_g);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(692)
			++(_g);
			HX_STACK_LINE(693)
			::String _g1 = ::haxe::io::Path_obj::removeTrailingSlashes(c);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(693)
			if ((::sys::FileSystem_obj::sys_exists(_g1))){
				HX_STACK_LINE(694)
				::String _g11 = ::sys::io::File_obj::getContent(c);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(694)
				::Xml xml = ::Xml_obj::parse(_g11);		HX_STACK_VAR(xml,"xml");
				HX_STACK_LINE(695)
				::Xml _g2 = xml->firstElement();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(695)
				Array< ::String > assetPaths = ::haxe::ui::toolkit::util::XmlUtil_obj::getPathValues(_g2,HX_CSTRING("/project/assets/@path"));		HX_STACK_VAR(assetPaths,"assetPaths");
				HX_STACK_LINE(696)
				{
					HX_STACK_LINE(696)
					int _g12 = (int)0;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(696)
					while((true)){
						HX_STACK_LINE(696)
						if ((!(((_g12 < assetPaths->length))))){
							HX_STACK_LINE(696)
							break;
						}
						HX_STACK_LINE(696)
						::String p = assetPaths->__get(_g12);		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(696)
						++(_g12);
						HX_STACK_LINE(697)
						bool _g3 = ::StringTools_obj::startsWith(p,HX_CSTRING("/"));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(697)
						if (((_g3 == false))){
							HX_STACK_LINE(698)
							p = (HX_CSTRING("/") + p);
						}
						HX_STACK_LINE(700)
						bool _g4 = ::StringTools_obj::endsWith(p,HX_CSTRING("/"));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(700)
						if (((_g4 == false))){
							HX_STACK_LINE(701)
							p = (p + HX_CSTRING("/"));
						}
						HX_STACK_LINE(703)
						subs->push(p);
					}
				}
				HX_STACK_LINE(705)
				break;
			}
		}
	}
	HX_STACK_LINE(709)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(710)
	::String _g5 = ::haxe::io::Path_obj::removeTrailingSlashes(resourcePath);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(710)
	bool _g6 = ::sys::FileSystem_obj::sys_exists(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(710)
	if (((_g6 == false))){
		HX_STACK_LINE(711)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(711)
		while((true)){
			HX_STACK_LINE(711)
			if ((!(((_g < paths->length))))){
				HX_STACK_LINE(711)
				break;
			}
			HX_STACK_LINE(711)
			::String path = paths->__get(_g);		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(711)
			++(_g);
			HX_STACK_LINE(712)
			{
				HX_STACK_LINE(712)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(712)
				while((true)){
					HX_STACK_LINE(712)
					if ((!(((_g1 < subs->length))))){
						HX_STACK_LINE(712)
						break;
					}
					HX_STACK_LINE(712)
					::String s = subs->__get(_g1);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(712)
					++(_g1);
					HX_STACK_LINE(713)
					::String test = ((path + s) + resourcePath);		HX_STACK_VAR(test,"test");
					HX_STACK_LINE(714)
					int _g7 = test.indexOf(HX_CSTRING("/"),null());		HX_STACK_VAR(_g7,"_g7");
					struct _Function_5_1{
						inline static bool Block( ::String &test){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Macros.hx",714,0x3fba9eca)
							{
								HX_STACK_LINE(714)
								int _g8 = test.indexOf(HX_CSTRING("\\"),null());		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(714)
								return (_g8 == (int)0);
							}
							return null();
						}
					};
					HX_STACK_LINE(714)
					if (((  ((!(((_g7 == (int)0))))) ? bool(_Function_5_1::Block(test)) : bool(true) ))){
						HX_STACK_LINE(715)
						::String _g9 = test.substr((int)1,test.length);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(715)
						test = _g9;
					}
					HX_STACK_LINE(717)
					::String _g10 = ::haxe::io::Path_obj::removeTrailingSlashes(test);		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(717)
					if ((::sys::FileSystem_obj::sys_exists(_g10))){
						HX_STACK_LINE(718)
						resourcePath = test;
						HX_STACK_LINE(719)
						found = true;
						HX_STACK_LINE(720)
						break;
					}
				}
			}
			HX_STACK_LINE(724)
			if (((found == true))){
				HX_STACK_LINE(725)
				break;
			}
		}
	}
	HX_STACK_LINE(730)
	::String _g11 = ::StringTools_obj::replace(resourcePath,HX_CSTRING("\\"),HX_CSTRING("/"));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(730)
	resourcePath = _g11;
	HX_STACK_LINE(731)
	::String _g12 = ::StringTools_obj::replace(resourcePath,HX_CSTRING("//"),HX_CSTRING("/"));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(731)
	resourcePath = _g12;
	HX_STACK_LINE(732)
	return resourcePath;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Macros_obj,resolveResource,return )


Macros_obj::Macros_obj()
{
}

Dynamic Macros_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hasMeta") ) { return hasMeta_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"insertLine") ) { return insertLine_dyn(); }
		if (HX_FIELD_EQ(inName,"insertExpr") ) { return insertExpr_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"processNode") ) { return processNode_dyn(); }
		if (HX_FIELD_EQ(inName,"getFunction") ) { return getFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"addFunction") ) { return addFunction_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { return getClassName_dyn(); }
		if (HX_FIELD_EQ(inName,"hasInterface") ) { return hasInterface_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSuperClass") ) { return getSuperClass_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"themeResources") ) { return themeResources; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resolveResource") ) { return resolveResource_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"componentClasses") ) { return componentClasses; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dataSourceClasses") ) { return dataSourceClasses; }
		if (HX_FIELD_EQ(inName,"getFieldsWithMeta") ) { return getFieldsWithMeta_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getClassNameFromType") ) { return getClassNameFromType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Macros_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"themeResources") ) { themeResources=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"componentClasses") ) { componentClasses=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"dataSourceClasses") ) { dataSourceClasses=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Macros_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("componentClasses"),
	HX_CSTRING("dataSourceClasses"),
	HX_CSTRING("themeResources"),
	HX_CSTRING("processNode"),
	HX_CSTRING("getFunction"),
	HX_CSTRING("addFunction"),
	HX_CSTRING("getFieldsWithMeta"),
	HX_CSTRING("getSuperClass"),
	HX_CSTRING("insertLine"),
	HX_CSTRING("insertExpr"),
	HX_CSTRING("getClassNameFromType"),
	HX_CSTRING("hasMeta"),
	HX_CSTRING("getClassName"),
	HX_CSTRING("hasInterface"),
	HX_CSTRING("resolveResource"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Macros_obj::componentClasses,"componentClasses");
	HX_MARK_MEMBER_NAME(Macros_obj::dataSourceClasses,"dataSourceClasses");
	HX_MARK_MEMBER_NAME(Macros_obj::themeResources,"themeResources");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macros_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Macros_obj::componentClasses,"componentClasses");
	HX_VISIT_MEMBER_NAME(Macros_obj::dataSourceClasses,"dataSourceClasses");
	HX_VISIT_MEMBER_NAME(Macros_obj::themeResources,"themeResources");
};

#endif

Class Macros_obj::__mClass;

void Macros_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Macros"), hx::TCanCast< Macros_obj> ,sStaticFields,sMemberFields,
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

void Macros_obj::__boot()
{
	componentClasses= ::haxe::ds::StringMap_obj::__new();
	dataSourceClasses= ::haxe::ds::StringMap_obj::__new();
	themeResources= ::haxe::ds::StringMap_obj::__new();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
