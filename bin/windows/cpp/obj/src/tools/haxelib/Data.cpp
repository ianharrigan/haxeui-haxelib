#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Reader
#include <haxe/zip/Reader.h>
#endif
#ifndef INCLUDED_tools_haxelib_Data
#include <tools/haxelib/Data.h>
#endif
#ifndef INCLUDED_tools_haxelib_SemVer
#include <tools/haxelib/SemVer.h>
#endif
namespace tools{
namespace haxelib{

Void Data_obj::__construct()
{
	return null();
}

//Data_obj::~Data_obj() { }

Dynamic Data_obj::__CreateEmpty() { return  new Data_obj; }
hx::ObjectPtr< Data_obj > Data_obj::__new()
{  hx::ObjectPtr< Data_obj > result = new Data_obj();
	result->__construct();
	return result;}

Dynamic Data_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Data_obj > result = new Data_obj();
	result->__construct();
	return result;}

::String Data_obj::JSON;

::String Data_obj::XML;

::String Data_obj::DOCXML;

::String Data_obj::REPOSITORY;

::EReg Data_obj::alphanum;

Array< ::String > Data_obj::LICENSES;

Array< ::String > Data_obj::RESERVED_NAMES;

::String Data_obj::safe( ::String name){
	HX_STACK_FRAME("tools.haxelib.Data","safe",0xb8c36c8f,"tools.haxelib.Data.safe","tools/haxelib/Data.hx",75,0x88433110)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(76)
	if ((!(::tools::haxelib::Data_obj::alphanum->match(name)))){
		HX_STACK_LINE(77)
		HX_STACK_DO_THROW((HX_CSTRING("Invalid parameter : ") + name));
	}
	HX_STACK_LINE(78)
	return name.split(HX_CSTRING("."))->join(HX_CSTRING(","));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,safe,return )

::String Data_obj::unsafe( ::String name){
	HX_STACK_FRAME("tools.haxelib.Data","unsafe",0x536447e8,"tools.haxelib.Data.unsafe","tools/haxelib/Data.hx",82,0x88433110)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(82)
	return name.split(HX_CSTRING(","))->join(HX_CSTRING("."));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,unsafe,return )

::String Data_obj::fileName( ::String lib,::String ver){
	HX_STACK_FRAME("tools.haxelib.Data","fileName",0x724f1329,"tools.haxelib.Data.fileName","tools/haxelib/Data.hx",85,0x88433110)
	HX_STACK_ARG(lib,"lib")
	HX_STACK_ARG(ver,"ver")
	HX_STACK_LINE(86)
	::String _g = ::tools::haxelib::Data_obj::safe(lib);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(86)
	::String _g1 = (_g + HX_CSTRING("-"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(86)
	::String _g2 = ::tools::haxelib::Data_obj::safe(ver);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(86)
	::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(86)
	return (_g3 + HX_CSTRING(".zip"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,fileName,return )

::String Data_obj::locateBasePath( ::List zip){
	HX_STACK_FRAME("tools.haxelib.Data","locateBasePath",0x246045ca,"tools.haxelib.Data.locateBasePath","tools/haxelib/Data.hx",89,0x88433110)
	HX_STACK_ARG(zip,"zip")
	HX_STACK_LINE(90)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(zip->iterator());  __it->hasNext(); ){
		Dynamic f = __it->next();
		if ((::StringTools_obj::endsWith(f->__Field(HX_CSTRING("fileName"),true),::tools::haxelib::Data_obj::JSON))){
			HX_STACK_LINE(92)
			return f->__Field(HX_CSTRING("fileName"),true)->__Field(HX_CSTRING("substr"),true)((int)0,(f->__Field(HX_CSTRING("fileName"),true)->__Field(HX_CSTRING("length"),true) - ::tools::haxelib::Data_obj::JSON.length));
		}
;
	}
	HX_STACK_LINE(95)
	HX_STACK_DO_THROW(((HX_CSTRING("No ") + ::tools::haxelib::Data_obj::JSON) + HX_CSTRING(" found")));
	HX_STACK_LINE(95)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,locateBasePath,return )

::String Data_obj::readDoc( ::List zip){
	HX_STACK_FRAME("tools.haxelib.Data","readDoc",0x330f6ec0,"tools.haxelib.Data.readDoc","tools/haxelib/Data.hx",98,0x88433110)
	HX_STACK_ARG(zip,"zip")
	HX_STACK_LINE(99)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(zip->iterator());  __it->hasNext(); ){
		Dynamic f = __it->next();
		if ((::StringTools_obj::endsWith(f->__Field(HX_CSTRING("fileName"),true),::tools::haxelib::Data_obj::DOCXML))){
			HX_STACK_LINE(101)
			return ::haxe::zip::Reader_obj::unzip(f)->toString();
		}
;
	}
	HX_STACK_LINE(102)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,readDoc,return )

Dynamic Data_obj::readInfos( ::List zip,bool check){
	HX_STACK_FRAME("tools.haxelib.Data","readInfos",0x8932f68d,"tools.haxelib.Data.readInfos","tools/haxelib/Data.hx",105,0x88433110)
	HX_STACK_ARG(zip,"zip")
	HX_STACK_ARG(check,"check")
	HX_STACK_LINE(106)
	::String infodata = null();		HX_STACK_VAR(infodata,"infodata");
	HX_STACK_LINE(107)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(zip->iterator());  __it->hasNext(); ){
		Dynamic f = __it->next();
		if ((::StringTools_obj::endsWith(f->__Field(HX_CSTRING("fileName"),true),::tools::haxelib::Data_obj::JSON))){
			HX_STACK_LINE(109)
			::String _g = ::haxe::zip::Reader_obj::unzip(f)->toString();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			infodata = _g;
			HX_STACK_LINE(110)
			break;
		}
;
	}
	HX_STACK_LINE(112)
	if (((infodata == null()))){
		HX_STACK_LINE(113)
		HX_STACK_DO_THROW((::tools::haxelib::Data_obj::JSON + HX_CSTRING(" not found in package")));
	}
	HX_STACK_LINE(115)
	return ::tools::haxelib::Data_obj::readData(infodata,check);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,readInfos,return )

Void Data_obj::checkClassPath( ::List zip,Dynamic infos){
{
		HX_STACK_FRAME("tools.haxelib.Data","checkClassPath",0x947549d7,"tools.haxelib.Data.checkClassPath","tools/haxelib/Data.hx",119,0x88433110)
		HX_STACK_ARG(zip,"zip")
		HX_STACK_ARG(infos,"infos")
		HX_STACK_LINE(119)
		if (((infos->__Field(HX_CSTRING("classPath"),true) != HX_CSTRING("")))){
			HX_STACK_LINE(120)
			::String basePath = ::tools::haxelib::Data_obj::locateBasePath(zip);		HX_STACK_VAR(basePath,"basePath");
			HX_STACK_LINE(121)
			::String cp = (basePath + infos->__Field(HX_CSTRING("classPath"),true));		HX_STACK_VAR(cp,"cp");
			HX_STACK_LINE(123)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(zip->iterator());  __it->hasNext(); ){
				Dynamic f = __it->next();
				if ((::StringTools_obj::startsWith(f->__Field(HX_CSTRING("fileName"),true),cp))){
					HX_STACK_LINE(125)
					return null();
				}
;
			}
			HX_STACK_LINE(127)
			HX_STACK_DO_THROW(((HX_CSTRING("Class path `") + infos->__Field(HX_CSTRING("classPath"),true)) + HX_CSTRING("` not found")));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,checkClassPath,(void))

Void Data_obj::doCheck( Dynamic doc){
{
		HX_STACK_FRAME("tools.haxelib.Data","doCheck",0xa92cff3b,"tools.haxelib.Data.doCheck","tools/haxelib/Data.hx",131,0x88433110)
		HX_STACK_ARG(doc,"doc")
		HX_STACK_LINE(132)
		if (((doc->__Field(HX_CSTRING("name"),true) == null()))){
			HX_STACK_LINE(133)
			HX_STACK_DO_THROW(HX_CSTRING("Error: Library has no field `name` defined in JSON file."));
		}
		HX_STACK_LINE(134)
		::String libName = doc->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("toLowerCase"),true)();		HX_STACK_VAR(libName,"libName");
		HX_STACK_LINE(135)
		int _g = ::Lambda_obj::indexOf(::tools::haxelib::Data_obj::RESERVED_NAMES,libName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(135)
		if (((_g > (int)-1))){
			HX_STACK_LINE(136)
			::String _g1 = ::Std_obj::string(doc->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(136)
			::String _g2 = (HX_CSTRING("Library name \"") + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(136)
			HX_STACK_DO_THROW((_g2 + HX_CSTRING("\" is reserved.  Please choose another name")));
		}
		HX_STACK_LINE(137)
		if ((::StringTools_obj::endsWith(libName,HX_CSTRING(".zip")))){
			HX_STACK_LINE(138)
			HX_STACK_DO_THROW(HX_CSTRING("Library name cannot end in \".zip\".  Please choose another name"));
		}
		HX_STACK_LINE(139)
		if ((::StringTools_obj::endsWith(libName,HX_CSTRING(".hxml")))){
			HX_STACK_LINE(140)
			HX_STACK_DO_THROW(HX_CSTRING("Library name cannot end in \".hxml\".  Please choose another name"));
		}
		HX_STACK_LINE(141)
		if ((!(::tools::haxelib::Data_obj::alphanum->match(libName)))){
			HX_STACK_LINE(142)
			HX_STACK_DO_THROW(HX_CSTRING("Library name can only contain the following characters: [A-Za-z0-9_.-]"));
		}
		HX_STACK_LINE(143)
		if (((libName.length < (int)3))){
			HX_STACK_LINE(144)
			HX_STACK_DO_THROW(HX_CSTRING("Project name must contain at least 3 characters"));
		}
		HX_STACK_LINE(145)
		int _g3 = ::Lambda_obj::indexOf(::tools::haxelib::Data_obj::LICENSES,doc->__Field(HX_CSTRING("license"),true));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(145)
		if (((_g3 == (int)-1))){
			HX_STACK_LINE(146)
			::String _g4 = ::Std_obj::string(::tools::haxelib::Data_obj::LICENSES);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(146)
			HX_STACK_DO_THROW((HX_CSTRING("License must be one of the following: ") + _g4));
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			::ValueType _g1 = ::Type_obj::_typeof(doc->__Field(HX_CSTRING("contributors"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			switch( (int)(_g1->__Index())){
				case (int)0: {
					HX_STACK_LINE(148)
					HX_STACK_DO_THROW(HX_CSTRING("At least one contributor must be included"));
				}
				;break;
				case (int)6: {
					HX_STACK_LINE(147)
					::Class _switch_1 = ((::ValueType(_g1))->__Param(0));
					if (  ( _switch_1==hx::ClassOf< Array<int> >())){
						HX_STACK_LINE(150)
						if (((doc->__Field(HX_CSTRING("contributors"),true)->__Field(HX_CSTRING("length"),true) < (int)1))){
							HX_STACK_LINE(150)
							HX_STACK_DO_THROW(HX_CSTRING("At least one contributor must be included"));
						}
					}
					else  {
						HX_STACK_LINE(151)
						HX_STACK_DO_THROW(HX_CSTRING("invalid type for contributors"));
					}
;
;
				}
				;break;
				default: {
					HX_STACK_LINE(151)
					HX_STACK_DO_THROW(HX_CSTRING("invalid type for contributors"));
				}
			}
		}
		HX_STACK_LINE(153)
		{
			HX_STACK_LINE(153)
			::ValueType _g1 = ::Type_obj::_typeof(doc->__Field(HX_CSTRING("version"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(153)
			switch( (int)(_g1->__Index())){
				case (int)6: {
					HX_STACK_LINE(153)
					::Class _switch_2 = ((::ValueType(_g1))->__Param(0));
					if (  ( _switch_2==hx::ClassOf< ::String >())){
						HX_STACK_LINE(155)
						::tools::haxelib::SemVer_obj::ofString(doc->__Field(HX_CSTRING("version"),true));
					}
					else  {
						HX_STACK_LINE(156)
						HX_STACK_DO_THROW(HX_CSTRING("version must be defined as string"));
					}
;
;
				}
				;break;
				default: {
					HX_STACK_LINE(156)
					HX_STACK_DO_THROW(HX_CSTRING("version must be defined as string"));
				}
			}
		}
		HX_STACK_LINE(158)
		{
			HX_STACK_LINE(158)
			::ValueType _g1 = ::Type_obj::_typeof(doc->__Field(HX_CSTRING("tags"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			switch( (int)(_g1->__Index())){
				case (int)6: {
					HX_STACK_LINE(158)
					::Class _switch_3 = ((::ValueType(_g1))->__Param(0));
					if (  ( _switch_3==hx::ClassOf< Array<int> >())){
						HX_STACK_LINE(160)
						Dynamic tags = doc->__Field(HX_CSTRING("tags"),true);		HX_STACK_VAR(tags,"tags");
						HX_STACK_LINE(161)
						{
							HX_STACK_LINE(161)
							int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(161)
							while((true)){
								HX_STACK_LINE(161)
								if ((!(((_g11 < tags->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(161)
									break;
								}
								HX_STACK_LINE(161)
								Dynamic tag = tags->__GetItem(_g11);		HX_STACK_VAR(tag,"tag");
								HX_STACK_LINE(161)
								++(_g11);
								HX_STACK_LINE(162)
								{
									HX_STACK_LINE(162)
									::ValueType _g2 = ::Type_obj::_typeof(tag);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(162)
									switch( (int)(_g2->__Index())){
										case (int)6: {
											HX_STACK_LINE(162)
											::Class _switch_4 = ((::ValueType(_g2))->__Param(0));
											if (  ( _switch_4==hx::ClassOf< ::String >())){
												HX_STACK_LINE(164)
												if ((!(::tools::haxelib::Data_obj::alphanum->match(tag)))){
													HX_STACK_LINE(165)
													::String _g5 = ::Std_obj::string(tag);		HX_STACK_VAR(_g5,"_g5");
													HX_STACK_LINE(165)
													::String _g6 = (HX_CSTRING("Invalid tag \"") + _g5);		HX_STACK_VAR(_g6,"_g6");
													HX_STACK_LINE(165)
													HX_STACK_DO_THROW((_g6 + HX_CSTRING("\". Tags can only contain the following characters: [A-Za-z0-9_.-]")));
												}
												HX_STACK_LINE(166)
												if (((tag->__Field(HX_CSTRING("length"),true) < (int)2))){
													HX_STACK_LINE(167)
													::String _g7 = ::Std_obj::string(tag);		HX_STACK_VAR(_g7,"_g7");
													HX_STACK_LINE(167)
													::String _g8 = (HX_CSTRING("Invalid tag \"") + _g7);		HX_STACK_VAR(_g8,"_g8");
													HX_STACK_LINE(167)
													HX_STACK_DO_THROW((_g8 + HX_CSTRING("\". Tags must contain at least 2 characters")));
												}
											}
											else  {
												HX_STACK_LINE(168)
												::String _g9 = ::Std_obj::string(tag);		HX_STACK_VAR(_g9,"_g9");
												HX_STACK_LINE(168)
												::String _g10 = (HX_CSTRING("Invalid tag \"") + _g9);		HX_STACK_VAR(_g10,"_g10");
												HX_STACK_LINE(168)
												HX_STACK_DO_THROW((_g10 + HX_CSTRING("\" Tags must be a String.")));
											}
;
;
										}
										;break;
										default: {
											HX_STACK_LINE(168)
											::String _g111 = ::Std_obj::string(tag);		HX_STACK_VAR(_g111,"_g111");
											HX_STACK_LINE(168)
											::String _g12 = (HX_CSTRING("Invalid tag \"") + _g111);		HX_STACK_VAR(_g12,"_g12");
											HX_STACK_LINE(168)
											HX_STACK_DO_THROW((_g12 + HX_CSTRING("\" Tags must be a String.")));
										}
									}
								}
							}
						}
					}
					else  {
						HX_STACK_LINE(172)
						HX_STACK_DO_THROW(HX_CSTRING("tags must be defined as array"));
					}
;
;
				}
				;break;
				case (int)0: {
				}
				;break;
				default: {
					HX_STACK_LINE(172)
					HX_STACK_DO_THROW(HX_CSTRING("tags must be defined as array"));
				}
			}
		}
		HX_STACK_LINE(174)
		{
			HX_STACK_LINE(174)
			::ValueType _g1 = ::Type_obj::_typeof(doc->__Field(HX_CSTRING("classPath"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(174)
			switch( (int)(_g1->__Index())){
				case (int)6: {
					HX_STACK_LINE(174)
					::Class _switch_5 = ((::ValueType(_g1))->__Param(0));
					if (  ( _switch_5==hx::ClassOf< ::String >())){
					}
					else  {
						HX_STACK_LINE(176)
						HX_STACK_DO_THROW(HX_CSTRING("classPath must be defined as string"));
					}
;
;
				}
				;break;
				case (int)0: {
				}
				;break;
				default: {
					HX_STACK_LINE(176)
					HX_STACK_DO_THROW(HX_CSTRING("classPath must be defined as string"));
				}
			}
		}
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			::ValueType _g1 = ::Type_obj::_typeof(doc->__Field(HX_CSTRING("dependencies"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(178)
			switch( (int)(_g1->__Index())){
				case (int)4: {
					HX_STACK_LINE(180)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(180)
					Array< ::String > _g2 = ::Reflect_obj::fields(doc->__Field(HX_CSTRING("dependencies"),true));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(180)
					while((true)){
						HX_STACK_LINE(180)
						if ((!(((_g11 < _g2->length))))){
							HX_STACK_LINE(180)
							break;
						}
						HX_STACK_LINE(180)
						::String field = _g2->__get(_g11);		HX_STACK_VAR(field,"field");
						HX_STACK_LINE(180)
						++(_g11);
						HX_STACK_LINE(181)
						::String val = ::Reflect_obj::field(doc->__Field(HX_CSTRING("dependencies"),true),field);		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(182)
						{
							HX_STACK_LINE(182)
							::ValueType _g31 = ::Type_obj::_typeof(val);		HX_STACK_VAR(_g31,"_g31");
							HX_STACK_LINE(182)
							switch( (int)(_g31->__Index())){
								case (int)6: {
									HX_STACK_LINE(182)
									::Class _switch_6 = ((::ValueType(_g31))->__Param(0));
									if (  ( _switch_6==hx::ClassOf< ::String >())){
										HX_STACK_LINE(184)
										if (((val != HX_CSTRING("")))){
											HX_STACK_LINE(185)
											try
											{
											HX_STACK_CATCHABLE(::String, 0);
											{
												HX_STACK_LINE(186)
												::tools::haxelib::SemVer_obj::ofString(val);
											}
											}
											catch(Dynamic __e){
												if (__e.IsClass< ::String >() ){
													HX_STACK_BEGIN_CATCH
													::String e = __e;{
														HX_STACK_LINE(188)
														HX_STACK_DO_THROW(((((HX_CSTRING("Dependency ") + field) + HX_CSTRING(" has an invalid version `")) + val) + HX_CSTRING("`. Please use an empty string or a semver compliant string.")));
													}
												}
												else {
												    HX_STACK_DO_THROW(__e);
												}
											}
										}
									}
									else  {
										HX_STACK_LINE(191)
										HX_STACK_DO_THROW(((((HX_CSTRING("Dependency ") + field) + HX_CSTRING(" has an invalid version `")) + val) + HX_CSTRING("`. Please use an empty string or a semver compliant string.")));
									}
;
;
								}
								;break;
								default: {
									HX_STACK_LINE(191)
									HX_STACK_DO_THROW(((((HX_CSTRING("Dependency ") + field) + HX_CSTRING(" has an invalid version `")) + val) + HX_CSTRING("`. Please use an empty string or a semver compliant string.")));
								}
							}
						}
					}
				}
				;break;
				case (int)0: {
				}
				;break;
				default: {
					HX_STACK_LINE(195)
					HX_STACK_DO_THROW(HX_CSTRING("dependencies must be defined as object"));
				}
			}
		}
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			::ValueType _g1 = ::Type_obj::_typeof(doc->__Field(HX_CSTRING("releasenote"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(197)
			switch( (int)(_g1->__Index())){
				case (int)6: {
					HX_STACK_LINE(197)
					::Class _switch_7 = ((::ValueType(_g1))->__Param(0));
					if (  ( _switch_7==hx::ClassOf< ::String >())){
					}
					else  {
						HX_STACK_LINE(200)
						HX_STACK_DO_THROW(HX_CSTRING("releasenote should be string"));
					}
;
;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(199)
					HX_STACK_DO_THROW(HX_CSTRING("no releasenote specified"));
				}
				;break;
				default: {
					HX_STACK_LINE(200)
					HX_STACK_DO_THROW(HX_CSTRING("releasenote should be string"));
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Data_obj,doCheck,(void))

Dynamic Data_obj::readData( ::String jsondata,bool check){
	HX_STACK_FRAME("tools.haxelib.Data","readData",0x7a66e8e2,"tools.haxelib.Data.readData","tools/haxelib/Data.hx",204,0x88433110)
	HX_STACK_ARG(jsondata,"jsondata")
	HX_STACK_ARG(check,"check")
	HX_STACK_LINE(205)
	Dynamic doc;		HX_STACK_VAR(doc,"doc");
	HX_STACK_LINE(205)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(205)
		doc = ::haxe::format::JsonParser_obj::__new(jsondata)->parseRec();
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				struct _Function_2_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Data.hx",205,0x88433110)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(205)
				doc = _Function_2_1::Block();
			}
		}
	}
	HX_STACK_LINE(207)
	if ((check)){
		HX_STACK_LINE(208)
		::tools::haxelib::Data_obj::doCheck(doc);
	}
	HX_STACK_LINE(215)
	::String project;		HX_STACK_VAR(project,"project");
	HX_STACK_LINE(215)
	if (((doc->__Field(HX_CSTRING("name"),true) != null()))){
		HX_STACK_LINE(215)
		project = ::Std_obj::string(doc->__Field(HX_CSTRING("name"),true));
	}
	else{
		HX_STACK_LINE(215)
		project = HX_CSTRING("");
	}
	HX_STACK_LINE(217)
	::List tags = ::List_obj::__new();		HX_STACK_VAR(tags,"tags");
	HX_STACK_LINE(218)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(219)
		Array< ::String > tagsArray = doc->__Field(HX_CSTRING("tags"),true);		HX_STACK_VAR(tagsArray,"tagsArray");
		HX_STACK_LINE(220)
		{
			HX_STACK_LINE(220)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(220)
			while((true)){
				HX_STACK_LINE(220)
				if ((!(((_g < tagsArray->length))))){
					HX_STACK_LINE(220)
					break;
				}
				HX_STACK_LINE(220)
				::String t = tagsArray->__get(_g);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(220)
				++(_g);
				HX_STACK_LINE(221)
				::String _g1 = ::Std_obj::string(t);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(221)
				tags->add(_g1);
			}
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(224)
	::List devs = ::List_obj::__new();		HX_STACK_VAR(devs,"devs");
	HX_STACK_LINE(225)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(226)
		Array< ::String > contributors = doc->__Field(HX_CSTRING("contributors"),true);		HX_STACK_VAR(contributors,"contributors");
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			while((true)){
				HX_STACK_LINE(227)
				if ((!(((_g < contributors->length))))){
					HX_STACK_LINE(227)
					break;
				}
				HX_STACK_LINE(227)
				::String c = contributors->__get(_g);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(227)
				++(_g);
				HX_STACK_LINE(228)
				::String _g1 = ::Std_obj::string(c);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(228)
				devs->add(_g1);
			}
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(231)
	::List deps = ::List_obj::__new();		HX_STACK_VAR(deps,"deps");
	HX_STACK_LINE(232)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(233)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(233)
		Array< ::String > _g1 = ::Reflect_obj::fields(doc->__Field(HX_CSTRING("dependencies"),true));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(233)
		while((true)){
			HX_STACK_LINE(233)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(233)
				break;
			}
			HX_STACK_LINE(233)
			::String d = _g1->__get(_g);		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(233)
			++(_g);
			HX_STACK_LINE(234)
			::String version;		HX_STACK_VAR(version,"version");
			HX_STACK_LINE(234)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(235)
				Dynamic _g2 = ::Reflect_obj::field(doc->__Field(HX_CSTRING("dependencies"),true),d);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(235)
				::String _g3 = ::Std_obj::string(_g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(235)
				version = ::tools::haxelib::SemVer_obj::ofString(_g3)->toString();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(236)
						version = HX_CSTRING("");
					}
				}
			}
			struct _Function_3_1{
				inline static Dynamic Block( ::String &version,::String &d){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Data.hx",237,0x88433110)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("project") , d,false);
						__result->Add(HX_CSTRING("version") , version,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(237)
			deps->add(_Function_3_1::Block(version,d));
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(241)
	::String website;		HX_STACK_VAR(website,"website");
	HX_STACK_LINE(241)
	if (((doc->__Field(HX_CSTRING("url"),true) != null()))){
		HX_STACK_LINE(241)
		website = ::Std_obj::string(doc->__Field(HX_CSTRING("url"),true));
	}
	else{
		HX_STACK_LINE(241)
		website = HX_CSTRING("");
	}
	HX_STACK_LINE(242)
	::String desc;		HX_STACK_VAR(desc,"desc");
	HX_STACK_LINE(242)
	if (((doc->__Field(HX_CSTRING("description"),true) != null()))){
		HX_STACK_LINE(242)
		desc = ::Std_obj::string(doc->__Field(HX_CSTRING("description"),true));
	}
	else{
		HX_STACK_LINE(242)
		desc = HX_CSTRING("");
	}
	HX_STACK_LINE(243)
	::String _g4 = ::Std_obj::string(doc->__Field(HX_CSTRING("version"),true));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(243)
	::String version;		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(243)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(243)
		version = ::tools::haxelib::SemVer_obj::ofString(_g4)->toString();
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(243)
				version = HX_CSTRING("0.0.0");
			}
		}
	}
	HX_STACK_LINE(244)
	::String versionComments;		HX_STACK_VAR(versionComments,"versionComments");
	HX_STACK_LINE(244)
	if (((doc->__Field(HX_CSTRING("releasenote"),true) != null()))){
		HX_STACK_LINE(244)
		versionComments = ::Std_obj::string(doc->__Field(HX_CSTRING("releasenote"),true));
	}
	else{
		HX_STACK_LINE(244)
		versionComments = HX_CSTRING("");
	}
	HX_STACK_LINE(245)
	::String license;		HX_STACK_VAR(license,"license");
	HX_STACK_LINE(245)
	if (((bool((doc->__Field(HX_CSTRING("license"),true) != null())) && bool((doc->__Field(HX_CSTRING("license"),true) != HX_CSTRING("")))))){
		HX_STACK_LINE(245)
		license = ::Std_obj::string(doc->__Field(HX_CSTRING("license"),true));
	}
	else{
		HX_STACK_LINE(245)
		license = HX_CSTRING("Unknown");
	}
	HX_STACK_LINE(246)
	::String classPath;		HX_STACK_VAR(classPath,"classPath");
	HX_STACK_LINE(246)
	if (((doc->__Field(HX_CSTRING("classPath"),true) != null()))){
		HX_STACK_LINE(246)
		classPath = ::Std_obj::string(doc->__Field(HX_CSTRING("classPath"),true));
	}
	else{
		HX_STACK_LINE(246)
		classPath = HX_CSTRING("");
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &license,::String &project,::String &version,::String &desc,::List &tags,::List &devs,::String &versionComments,::String &classPath,::String &website,::List &deps){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Data.hx",248,0x88433110)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("project") , project,false);
				__result->Add(HX_CSTRING("website") , website,false);
				__result->Add(HX_CSTRING("desc") , desc,false);
				__result->Add(HX_CSTRING("version") , version,false);
				__result->Add(HX_CSTRING("versionComments") , versionComments,false);
				__result->Add(HX_CSTRING("license") , license,false);
				__result->Add(HX_CSTRING("classPath") , classPath,false);
				__result->Add(HX_CSTRING("tags") , tags,false);
				__result->Add(HX_CSTRING("developers") , devs,false);
				__result->Add(HX_CSTRING("dependencies") , deps,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(248)
	return _Function_1_1::Block(license,project,version,desc,tags,devs,versionComments,classPath,website,deps);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Data_obj,readData,return )


Data_obj::Data_obj()
{
}

Dynamic Data_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"XML") ) { return XML; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"JSON") ) { return JSON; }
		if (HX_FIELD_EQ(inName,"safe") ) { return safe_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DOCXML") ) { return DOCXML; }
		if (HX_FIELD_EQ(inName,"unsafe") ) { return unsafe_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readDoc") ) { return readDoc_dyn(); }
		if (HX_FIELD_EQ(inName,"doCheck") ) { return doCheck_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphanum") ) { return alphanum; }
		if (HX_FIELD_EQ(inName,"LICENSES") ) { return LICENSES; }
		if (HX_FIELD_EQ(inName,"fileName") ) { return fileName_dyn(); }
		if (HX_FIELD_EQ(inName,"readData") ) { return readData_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readInfos") ) { return readInfos_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"REPOSITORY") ) { return REPOSITORY; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RESERVED_NAMES") ) { return RESERVED_NAMES; }
		if (HX_FIELD_EQ(inName,"locateBasePath") ) { return locateBasePath_dyn(); }
		if (HX_FIELD_EQ(inName,"checkClassPath") ) { return checkClassPath_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Data_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"XML") ) { XML=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"JSON") ) { JSON=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DOCXML") ) { DOCXML=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphanum") ) { alphanum=inValue.Cast< ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LICENSES") ) { LICENSES=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"REPOSITORY") ) { REPOSITORY=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"RESERVED_NAMES") ) { RESERVED_NAMES=inValue.Cast< Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Data_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("JSON"),
	HX_CSTRING("XML"),
	HX_CSTRING("DOCXML"),
	HX_CSTRING("REPOSITORY"),
	HX_CSTRING("alphanum"),
	HX_CSTRING("LICENSES"),
	HX_CSTRING("RESERVED_NAMES"),
	HX_CSTRING("safe"),
	HX_CSTRING("unsafe"),
	HX_CSTRING("fileName"),
	HX_CSTRING("locateBasePath"),
	HX_CSTRING("readDoc"),
	HX_CSTRING("readInfos"),
	HX_CSTRING("checkClassPath"),
	HX_CSTRING("doCheck"),
	HX_CSTRING("readData"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Data_obj::JSON,"JSON");
	HX_MARK_MEMBER_NAME(Data_obj::XML,"XML");
	HX_MARK_MEMBER_NAME(Data_obj::DOCXML,"DOCXML");
	HX_MARK_MEMBER_NAME(Data_obj::REPOSITORY,"REPOSITORY");
	HX_MARK_MEMBER_NAME(Data_obj::alphanum,"alphanum");
	HX_MARK_MEMBER_NAME(Data_obj::LICENSES,"LICENSES");
	HX_MARK_MEMBER_NAME(Data_obj::RESERVED_NAMES,"RESERVED_NAMES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Data_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Data_obj::JSON,"JSON");
	HX_VISIT_MEMBER_NAME(Data_obj::XML,"XML");
	HX_VISIT_MEMBER_NAME(Data_obj::DOCXML,"DOCXML");
	HX_VISIT_MEMBER_NAME(Data_obj::REPOSITORY,"REPOSITORY");
	HX_VISIT_MEMBER_NAME(Data_obj::alphanum,"alphanum");
	HX_VISIT_MEMBER_NAME(Data_obj::LICENSES,"LICENSES");
	HX_VISIT_MEMBER_NAME(Data_obj::RESERVED_NAMES,"RESERVED_NAMES");
};

#endif

Class Data_obj::__mClass;

void Data_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.Data"), hx::TCanCast< Data_obj> ,sStaticFields,sMemberFields,
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

void Data_obj::__boot()
{
	JSON= HX_CSTRING("haxelib.json");
	XML= HX_CSTRING("haxelib.xml");
	DOCXML= HX_CSTRING("haxedoc.xml");
	REPOSITORY= HX_CSTRING("files/3.0");
	alphanum= ::EReg_obj::__new(HX_CSTRING("^[A-Za-z0-9_.-]+$"),HX_CSTRING(""));
	LICENSES= Array_obj< ::String >::__new().Add(HX_CSTRING("GPL")).Add(HX_CSTRING("LGPL")).Add(HX_CSTRING("BSD")).Add(HX_CSTRING("Public")).Add(HX_CSTRING("MIT"));
	RESERVED_NAMES= Array_obj< ::String >::__new().Add(HX_CSTRING("haxe")).Add(HX_CSTRING("all"));
}

} // end namespace tools
} // end namespace haxelib
