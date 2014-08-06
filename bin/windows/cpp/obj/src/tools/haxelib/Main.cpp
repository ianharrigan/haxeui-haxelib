#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Http
#include <haxe/Http.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_crypto_Md5
#include <haxe/crypto/Md5.h>
#endif
#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
#ifndef INCLUDED_haxe_remoting_HttpConnection
#include <haxe/remoting/HttpConnection.h>
#endif
#ifndef INCLUDED_haxe_zip_Reader
#include <haxe/zip/Reader.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
#ifndef INCLUDED_tools_haxelib_Answer
#include <tools/haxelib/Answer.h>
#endif
#ifndef INCLUDED_tools_haxelib_ConvertXml
#include <tools/haxelib/ConvertXml.h>
#endif
#ifndef INCLUDED_tools_haxelib_Data
#include <tools/haxelib/Data.h>
#endif
#ifndef INCLUDED_tools_haxelib_Main
#include <tools/haxelib/Main.h>
#endif
#ifndef INCLUDED_tools_haxelib_MyHttpConnection
#include <tools/haxelib/MyHttpConnection.h>
#endif
#ifndef INCLUDED_tools_haxelib_Progress
#include <tools/haxelib/Progress.h>
#endif
#ifndef INCLUDED_tools_haxelib_ProgressIn
#include <tools/haxelib/ProgressIn.h>
#endif
#ifndef INCLUDED_tools_haxelib_Remoting_SiteApi
#include <tools/haxelib/Remoting_SiteApi.h>
#endif
#ifndef INCLUDED_tools_haxelib_SemVer
#include <tools/haxelib/SemVer.h>
#endif
#ifndef INCLUDED_tools_haxelib_SiteProxy
#include <tools/haxelib/SiteProxy.h>
#endif
#ifndef INCLUDED_tools_haxelib__Main_CommandCategory
#include <tools/haxelib/_Main/CommandCategory.h>
#endif
namespace tools{
namespace haxelib{

Void Main_obj::__construct()
{
HX_STACK_FRAME("tools.haxelib.Main","new",0x75b594ed,"tools.haxelib.Main.new","tools/haxelib/Main.hx",162,0xb1b3c261)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(163)
	Array< ::String > _g = ::Sys_obj::args();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(163)
	this->args = _g;
	HX_STACK_LINE(165)
	::List _g1 = ::List_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(165)
	this->commands = _g1;
	HX_STACK_LINE(166)
	this->addCommand(HX_CSTRING("install"),this->install_dyn(),HX_CSTRING("install a given library, or all libraries from a hxml file"),::tools::haxelib::_Main::CommandCategory_obj::Basic,null());
	HX_STACK_LINE(167)
	this->addCommand(HX_CSTRING("upgrade"),this->upgrade_dyn(),HX_CSTRING("upgrade all installed libraries"),::tools::haxelib::_Main::CommandCategory_obj::Basic,null());
	HX_STACK_LINE(168)
	this->addCommand(HX_CSTRING("update"),this->update_dyn(),HX_CSTRING("update a single library"),::tools::haxelib::_Main::CommandCategory_obj::Basic,null());
	HX_STACK_LINE(169)
	this->addCommand(HX_CSTRING("remove"),this->remove_dyn(),HX_CSTRING("remove a given library/version"),::tools::haxelib::_Main::CommandCategory_obj::Basic,false);
	HX_STACK_LINE(170)
	this->addCommand(HX_CSTRING("list"),this->list_dyn(),HX_CSTRING("list all installed libraries"),::tools::haxelib::_Main::CommandCategory_obj::Basic,false);
	HX_STACK_LINE(171)
	this->addCommand(HX_CSTRING("set"),this->set_dyn(),HX_CSTRING("set the current version for a library"),::tools::haxelib::_Main::CommandCategory_obj::Basic,false);
	HX_STACK_LINE(173)
	this->addCommand(HX_CSTRING("search"),this->search_dyn(),HX_CSTRING("list libraries matching a word"),::tools::haxelib::_Main::CommandCategory_obj::Information,null());
	HX_STACK_LINE(174)
	this->addCommand(HX_CSTRING("info"),this->info_dyn(),HX_CSTRING("list information on a given library"),::tools::haxelib::_Main::CommandCategory_obj::Information,null());
	HX_STACK_LINE(175)
	this->addCommand(HX_CSTRING("user"),this->user_dyn(),HX_CSTRING("list information on a given user"),::tools::haxelib::_Main::CommandCategory_obj::Information,null());
	HX_STACK_LINE(176)
	this->addCommand(HX_CSTRING("config"),this->config_dyn(),HX_CSTRING("print the repository path"),::tools::haxelib::_Main::CommandCategory_obj::Information,false);
	HX_STACK_LINE(179)
	this->addCommand(HX_CSTRING("submit"),this->submit_dyn(),HX_CSTRING("submit or update a library package"),::tools::haxelib::_Main::CommandCategory_obj::Development,null());
	HX_STACK_LINE(180)
	this->addCommand(HX_CSTRING("register"),this->_register_dyn(),HX_CSTRING("register a new user"),::tools::haxelib::_Main::CommandCategory_obj::Development,null());
	HX_STACK_LINE(181)
	this->addCommand(HX_CSTRING("local"),this->local_dyn(),HX_CSTRING("install the specified package locally"),::tools::haxelib::_Main::CommandCategory_obj::Development,false);
	HX_STACK_LINE(182)
	this->addCommand(HX_CSTRING("dev"),this->dev_dyn(),HX_CSTRING("set the development directory for a given library"),::tools::haxelib::_Main::CommandCategory_obj::Development,false);
	HX_STACK_LINE(183)
	this->addCommand(HX_CSTRING("git"),this->git_dyn(),HX_CSTRING("use git repository as library"),::tools::haxelib::_Main::CommandCategory_obj::Development,null());
	HX_STACK_LINE(185)
	this->addCommand(HX_CSTRING("setup"),this->setup_dyn(),HX_CSTRING("set the haxelib repository path"),::tools::haxelib::_Main::CommandCategory_obj::Miscellaneous,false);
	HX_STACK_LINE(186)
	this->addCommand(HX_CSTRING("selfupdate"),this->updateSelf_dyn(),HX_CSTRING("update haxelib itself"),::tools::haxelib::_Main::CommandCategory_obj::Miscellaneous,null());
	HX_STACK_LINE(187)
	this->addCommand(HX_CSTRING("convertxml"),this->convertXml_dyn(),HX_CSTRING("convert haxelib.xml file to haxelib.json"),::tools::haxelib::_Main::CommandCategory_obj::Miscellaneous,null());
	HX_STACK_LINE(188)
	this->addCommand(HX_CSTRING("run"),this->run_dyn(),HX_CSTRING("run the specified library with parameters"),::tools::haxelib::_Main::CommandCategory_obj::Miscellaneous,false);
	HX_STACK_LINE(189)
	this->addCommand(HX_CSTRING("proxy"),this->proxy_dyn(),HX_CSTRING("setup the Http proxy"),::tools::haxelib::_Main::CommandCategory_obj::Miscellaneous,null());
	HX_STACK_LINE(191)
	this->initSite();
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::initSite( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","initSite",0x0f14670a,"tools.haxelib.Main.initSite","tools/haxelib/Main.hx",196,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		this->siteUrl = (((((HX_CSTRING("http://") + ::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("host"),true)) + HX_CSTRING(":")) + ::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("port"),true)) + HX_CSTRING("/")) + ::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("dir"),true));
		HX_STACK_LINE(198)
		::String remotingUrl = ((((this->siteUrl + HX_CSTRING("api/")) + ::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("apiVersion"),true)) + HX_CSTRING("/")) + ::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("url"),true));		HX_STACK_VAR(remotingUrl,"remotingUrl");
		HX_STACK_LINE(199)
		::haxe::remoting::Connection _g = ::tools::haxelib::MyHttpConnection_obj::urlConnect(remotingUrl)->resolve(HX_CSTRING("api"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(199)
		::tools::haxelib::SiteProxy _g1 = ::tools::haxelib::SiteProxy_obj::__new(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(199)
		this->site = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,initSite,(void))

::String Main_obj::param( ::String name,Dynamic passwd){
	HX_STACK_FRAME("tools.haxelib.Main","param",0xa21b425a,"tools.haxelib.Main.param","tools/haxelib/Main.hx",202,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(passwd,"passwd")
	HX_STACK_LINE(203)
	if (((this->args->length > this->argcur))){
		HX_STACK_LINE(204)
		int _g = (this->argcur)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		return this->args->__get(_g);
	}
	HX_STACK_LINE(205)
	::Sys_obj::print((name + HX_CSTRING(" : ")));
	HX_STACK_LINE(206)
	if ((passwd)){
		HX_STACK_LINE(207)
		::StringBuf s = ::StringBuf_obj::__new();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(208)
		while((true)){
			HX_STACK_LINE(208)
			int _g = ::Sys_obj::getChar(false);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			{
				HX_STACK_LINE(208)
				int c = _g;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(208)
				int _switch_1 = (_g);
				if (  ( _switch_1==(int)10) ||  ( _switch_1==(int)13)){
					HX_STACK_LINE(209)
					break;
				}
				else  {
					HX_STACK_LINE(210)
					::String _g1 = ::String::fromCharCode(c);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(210)
					s->b->push(_g1);
				}
;
;
			}
			HX_STACK_LINE(208)
			{
			}
		}
		HX_STACK_LINE(213)
		::tools::haxelib::Main_obj::print(HX_CSTRING(""));
		HX_STACK_LINE(214)
		::String _g2 = ::Std_obj::string(s);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(214)
		return (HX_CSTRING("") + _g2);
	}
	HX_STACK_LINE(216)
	return ::Sys_obj::_stdin()->readLine();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,param,return )

::tools::haxelib::Answer Main_obj::ask( ::String question){
	HX_STACK_FRAME("tools.haxelib.Main","ask",0x75abc3c6,"tools.haxelib.Main.ask","tools/haxelib/Main.hx",219,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(question,"question")
	HX_STACK_LINE(220)
	while((true)){
		HX_STACK_LINE(221)
		::Sys_obj::print((question + HX_CSTRING(" [y/n/a] ? ")));
		HX_STACK_LINE(222)
		{
			HX_STACK_LINE(222)
			::String _g = ::Sys_obj::_stdin()->readLine();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(222)
			::String _switch_2 = (_g);
			if (  ( _switch_2==HX_CSTRING("n"))){
				HX_STACK_LINE(223)
				return ::tools::haxelib::Answer_obj::No;
			}
			else if (  ( _switch_2==HX_CSTRING("y"))){
				HX_STACK_LINE(224)
				return ::tools::haxelib::Answer_obj::Yes;
			}
			else if (  ( _switch_2==HX_CSTRING("a"))){
				HX_STACK_LINE(225)
				return ::tools::haxelib::Answer_obj::Always;
			}
		}
	}
	HX_STACK_LINE(228)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,ask,return )

::String Main_obj::paramOpt( ){
	HX_STACK_FRAME("tools.haxelib.Main","paramOpt",0x3c9385f9,"tools.haxelib.Main.paramOpt","tools/haxelib/Main.hx",231,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	if (((this->args->length > this->argcur))){
		HX_STACK_LINE(233)
		int _g = (this->argcur)++;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(233)
		return this->args->__get(_g);
	}
	HX_STACK_LINE(234)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,paramOpt,return )

Void Main_obj::addCommand( ::String name,Dynamic f,::String doc,::tools::haxelib::_Main::CommandCategory cat,Dynamic __o_net){
Dynamic net = __o_net.Default(true);
	HX_STACK_FRAME("tools.haxelib.Main","addCommand",0x71df343d,"tools.haxelib.Main.addCommand","tools/haxelib/Main.hx",238,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(doc,"doc")
	HX_STACK_ARG(cat,"cat")
	HX_STACK_ARG(net,"net")
{
		struct _Function_1_1{
			inline static Dynamic Block( ::tools::haxelib::_Main::CommandCategory &cat,::String &doc,Dynamic &net,Dynamic &f,::String &name){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",238,0xb1b3c261)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("name") , name,false);
					__result->Add(HX_CSTRING("doc") , doc,false);
					__result->Add(HX_CSTRING("f") , f,false);
					__result->Add(HX_CSTRING("net") , net,false);
					__result->Add(HX_CSTRING("cat") , cat,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(238)
		this->commands->add(_Function_1_1::Block(cat,doc,net,f,name));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Main_obj,addCommand,(void))

Void Main_obj::usage( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","usage",0x8ef51eee,"tools.haxelib.Main.usage","tools/haxelib/Main.hx",241,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(242)
		::String _g = ::Std_obj::string(::tools::haxelib::Main_obj::VERSION);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(242)
		::String _g1 = (HX_CSTRING("Haxe Library Manager ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(242)
		::String _g2 = (_g1 + HX_CSTRING(" - (c)2006-2013 Haxe Foundation"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(242)
		::tools::haxelib::Main_obj::print(_g2);
		HX_STACK_LINE(243)
		::tools::haxelib::Main_obj::print(HX_CSTRING("  Usage: haxelib [command] [options]"));
		HX_STACK_LINE(244)
		Dynamic cats = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(cats,"cats");
		HX_STACK_LINE(245)
		int maxLength = (int)0;		HX_STACK_VAR(maxLength,"maxLength");
		HX_STACK_LINE(246)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->commands->iterator());  __it->hasNext(); ){
			Dynamic c = __it->next();
			{
				HX_STACK_LINE(247)
				if (((c->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("length"),true) > maxLength))){
					HX_STACK_LINE(247)
					maxLength = c->__Field(HX_CSTRING("name"),true)->__Field(HX_CSTRING("length"),true);
				}
				HX_STACK_LINE(248)
				int i = c->__Field(HX_CSTRING("cat"),true)->__Index();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(249)
				if (((cats->__GetItem(i) == null()))){
					HX_STACK_LINE(249)
					hx::IndexRef((cats).mPtr,i) = Dynamic( Array_obj<Dynamic>::__new().Add(c));
				}
				else{
					HX_STACK_LINE(250)
					cats->__GetItem(i)->__Field(HX_CSTRING("push"),true)(c);
				}
			}
;
		}
		HX_STACK_LINE(252)
		{
			HX_STACK_LINE(252)
			int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(252)
			while((true)){
				HX_STACK_LINE(252)
				if ((!(((_g3 < cats->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(252)
					break;
				}
				HX_STACK_LINE(252)
				Dynamic cat = cats->__GetItem(_g3);		HX_STACK_VAR(cat,"cat");
				HX_STACK_LINE(252)
				++(_g3);
				HX_STACK_LINE(253)
				::String _g31 = ::Type_obj::enumConstructor(cat->__GetItem((int)0)->__Field(HX_CSTRING("cat"),true));		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(253)
				::String _g4 = (HX_CSTRING("  ") + _g31);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(253)
				::tools::haxelib::Main_obj::print(_g4);
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(254)
					while((true)){
						HX_STACK_LINE(254)
						if ((!(((_g11 < cat->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(254)
							break;
						}
						HX_STACK_LINE(254)
						Dynamic c = cat->__GetItem(_g11);		HX_STACK_VAR(c,"c");
						HX_STACK_LINE(254)
						++(_g11);
						HX_STACK_LINE(255)
						::String _g5 = ::StringTools_obj::rpad(c->__Field(HX_CSTRING("name"),true),HX_CSTRING(" "),maxLength);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(255)
						::String _g6 = (HX_CSTRING("    ") + _g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(255)
						::String _g7 = (_g6 + HX_CSTRING(": "));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(255)
						::String _g8 = (_g7 + c->__Field(HX_CSTRING("doc"),true));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(255)
						::tools::haxelib::Main_obj::print(_g8);
					}
				}
			}
		}
		HX_STACK_LINE(258)
		::Sys_obj::exit((int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,usage,(void))

Void Main_obj::process( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","process",0xe45e317c,"tools.haxelib.Main.process","tools/haxelib/Main.hx",261,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(262)
		bool debug = false;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(263)
		this->argcur = (int)0;
		HX_STACK_LINE(264)
		while((true)){
			HX_STACK_LINE(265)
			int _g = (this->argcur)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(265)
			::String a = this->args->__get(_g);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(266)
			if (((a == null()))){
				HX_STACK_LINE(267)
				break;
			}
			HX_STACK_LINE(268)
			::String _switch_3 = (a);
			if (  ( _switch_3==HX_CSTRING("-debug"))){
				HX_STACK_LINE(270)
				debug = true;
			}
			else if (  ( _switch_3==HX_CSTRING("-notimeout"))){
				HX_STACK_LINE(272)
				::haxe::remoting::HttpConnection_obj::TIMEOUT = (int)0;
			}
			else if (  ( _switch_3==HX_CSTRING("-R"))){
				HX_STACK_LINE(274)
				int _g1 = (this->argcur)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(274)
				::String path = this->args->__get(_g1);		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(275)
				::EReg r = ::EReg_obj::__new(HX_CSTRING("^(http://)?([^:/]+)(:[0-9]+)?/?(.*)$"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(276)
				if ((!(r->match(path)))){
					HX_STACK_LINE(277)
					HX_STACK_DO_THROW(((HX_CSTRING("Invalid repository format '") + path) + HX_CSTRING("'")));
				}
				HX_STACK_LINE(278)
				::String _g2 = r->matched((int)2);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(278)
				::tools::haxelib::Main_obj::SERVER->__FieldRef(HX_CSTRING("host")) = _g2;
				HX_STACK_LINE(279)
				::String _g3 = r->matched((int)3);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(279)
				if (((_g3 != null()))){
					HX_STACK_LINE(280)
					::String _g4 = r->matched((int)3).substr((int)1,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(280)
					Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(280)
					::tools::haxelib::Main_obj::SERVER->__FieldRef(HX_CSTRING("port")) = _g5;
				}
				HX_STACK_LINE(281)
				::String _g6 = r->matched((int)4);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(281)
				::tools::haxelib::Main_obj::SERVER->__FieldRef(HX_CSTRING("dir")) = _g6;
				HX_STACK_LINE(282)
				if (((  (((::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("dir"),true)->__Field(HX_CSTRING("length"),true) > (int)0))) ? bool(!(::StringTools_obj::endsWith(::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("dir"),true),HX_CSTRING("/")))) : bool(false) ))){
					HX_STACK_LINE(282)
					hx::AddEq(::tools::haxelib::Main_obj::SERVER->__FieldRef(HX_CSTRING("dir")),HX_CSTRING("/"));
				}
				HX_STACK_LINE(283)
				this->initSite();
			}
			else  {
				HX_STACK_LINE(285)
				(this->argcur)--;
				HX_STACK_LINE(286)
				break;
			}
;
;
		}
		HX_STACK_LINE(289)
		int _g7 = (this->argcur)++;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(289)
		::String cmd = this->args->__get(_g7);		HX_STACK_VAR(cmd,"cmd");
		HX_STACK_LINE(290)
		if (((cmd == null()))){
			HX_STACK_LINE(291)
			this->usage();
		}
		HX_STACK_LINE(292)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(this->commands->iterator());  __it->hasNext(); ){
			Dynamic c = __it->next();
			if (((c->__Field(HX_CSTRING("name"),true) == cmd))){
				HX_STACK_LINE(294)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(295)
					if ((c->__Field(HX_CSTRING("net"),true))){
						HX_STACK_LINE(295)
						this->loadProxy();
					}
					HX_STACK_LINE(296)
					c->__Field(HX_CSTRING("f"),true)();
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(298)
							if (((e == HX_CSTRING("std@host_resolve")))){
								HX_STACK_LINE(299)
								::tools::haxelib::Main_obj::print(((HX_CSTRING("Host ") + ::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("host"),true)) + HX_CSTRING(" was not found")));
								HX_STACK_LINE(300)
								::tools::haxelib::Main_obj::print(HX_CSTRING("Please ensure that your internet connection is on"));
								HX_STACK_LINE(301)
								::tools::haxelib::Main_obj::print(HX_CSTRING("If you don't have an internet connection or if you are behing a proxy"));
								HX_STACK_LINE(302)
								::tools::haxelib::Main_obj::print(HX_CSTRING("please download manually the file from http://lib.haxe.org/files/3.0/"));
								HX_STACK_LINE(303)
								::tools::haxelib::Main_obj::print(HX_CSTRING("and run 'haxelib local <file>' to install the Library."));
								HX_STACK_LINE(304)
								::tools::haxelib::Main_obj::print(HX_CSTRING("You can also setup the proxy with 'haxelib proxy'."));
								HX_STACK_LINE(305)
								::Sys_obj::exit((int)1);
							}
							HX_STACK_LINE(307)
							if (((e == HX_CSTRING("Blocked")))){
								HX_STACK_LINE(308)
								::tools::haxelib::Main_obj::print(HX_CSTRING("Http connection timeout. Try running haxelib -notimeout <command> to disable timeout"));
								HX_STACK_LINE(309)
								::Sys_obj::exit((int)1);
							}
							HX_STACK_LINE(311)
							if ((debug)){
								HX_STACK_LINE(313)
								HX_STACK_DO_THROW(e);
							}
							HX_STACK_LINE(315)
							::String _g8 = ::Std_obj::string(e);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(315)
							::tools::haxelib::Main_obj::print(_g8);
							HX_STACK_LINE(316)
							::Sys_obj::exit((int)1);
						}
					}
				}
				HX_STACK_LINE(318)
				return null();
			}
;
		}
		HX_STACK_LINE(320)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Unknown command ") + cmd));
		HX_STACK_LINE(321)
		this->usage();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,process,(void))

Void Main_obj::search( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","search",0xab3b70fb,"tools.haxelib.Main.search","tools/haxelib/Main.hx",326,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(327)
		::String word = this->param(HX_CSTRING("Search word"),null());		HX_STACK_VAR(word,"word");
		HX_STACK_LINE(328)
		::List l = this->site->search(word);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(329)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(l->iterator());  __it->hasNext(); ){
			Dynamic s = __it->next();
			::tools::haxelib::Main_obj::print(s->__Field(HX_CSTRING("name"),true));
		}
		HX_STACK_LINE(331)
		::tools::haxelib::Main_obj::print((l->length + HX_CSTRING(" libraries found")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,search,(void))

Void Main_obj::info( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","info",0x85e56f41,"tools.haxelib.Main.info","tools/haxelib/Main.hx",334,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(335)
		::String prj = this->param(HX_CSTRING("Library name"),null());		HX_STACK_VAR(prj,"prj");
		HX_STACK_LINE(336)
		Dynamic inf = this->site->infos(prj);		HX_STACK_VAR(inf,"inf");
		HX_STACK_LINE(337)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Name: ") + inf->__Field(HX_CSTRING("name"),true)));
		HX_STACK_LINE(338)
		::String _g = inf->__Field(HX_CSTRING("tags"),true)->__Field(HX_CSTRING("join"),true)(HX_CSTRING(", "));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(338)
		::String _g1 = (HX_CSTRING("Tags: ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(338)
		::tools::haxelib::Main_obj::print(_g1);
		HX_STACK_LINE(339)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Desc: ") + inf->__Field(HX_CSTRING("desc"),true)));
		HX_STACK_LINE(340)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Website: ") + inf->__Field(HX_CSTRING("website"),true)));
		HX_STACK_LINE(341)
		::tools::haxelib::Main_obj::print((HX_CSTRING("License: ") + inf->__Field(HX_CSTRING("license"),true)));
		HX_STACK_LINE(342)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Owner: ") + inf->__Field(HX_CSTRING("owner"),true)));
		HX_STACK_LINE(343)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Version: ") + inf->__Field(HX_CSTRING("curversion"),true)));
		HX_STACK_LINE(344)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Releases: "));
		HX_STACK_LINE(345)
		if (((inf->__Field(HX_CSTRING("versions"),true)->__Field(HX_CSTRING("length"),true) == (int)0))){
			HX_STACK_LINE(346)
			::tools::haxelib::Main_obj::print(HX_CSTRING("  (no version released yet)"));
		}
		HX_STACK_LINE(347)
		{
			HX_STACK_LINE(347)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(347)
			Dynamic _g11 = inf->__Field(HX_CSTRING("versions"),true);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(347)
			while((true)){
				HX_STACK_LINE(347)
				if ((!(((_g2 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(347)
					break;
				}
				HX_STACK_LINE(347)
				Dynamic v = _g11->__GetItem(_g2);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(347)
				++(_g2);
				HX_STACK_LINE(348)
				::tools::haxelib::Main_obj::print((((((HX_CSTRING("   ") + v->__Field(HX_CSTRING("date"),true)) + HX_CSTRING(" ")) + v->__Field(HX_CSTRING("name"),true)) + HX_CSTRING(" : ")) + v->__Field(HX_CSTRING("comments"),true)));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,info,(void))

Void Main_obj::user( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","user",0x8dd7c91e,"tools.haxelib.Main.user","tools/haxelib/Main.hx",351,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(352)
		::String uname = this->param(HX_CSTRING("User name"),null());		HX_STACK_VAR(uname,"uname");
		HX_STACK_LINE(353)
		Dynamic inf = this->site->user(uname);		HX_STACK_VAR(inf,"inf");
		HX_STACK_LINE(354)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Id: ") + inf->__Field(HX_CSTRING("name"),true)));
		HX_STACK_LINE(355)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Name: ") + inf->__Field(HX_CSTRING("fullname"),true)));
		HX_STACK_LINE(356)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Mail: ") + inf->__Field(HX_CSTRING("email"),true)));
		HX_STACK_LINE(357)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Libraries: "));
		HX_STACK_LINE(358)
		if (((inf->__Field(HX_CSTRING("projects"),true)->__Field(HX_CSTRING("length"),true) == (int)0))){
			HX_STACK_LINE(359)
			::tools::haxelib::Main_obj::print(HX_CSTRING("  (no libraries)"));
		}
		HX_STACK_LINE(360)
		{
			HX_STACK_LINE(360)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(360)
			Array< ::String > _g1 = inf->__Field(HX_CSTRING("projects"),true);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(360)
			while((true)){
				HX_STACK_LINE(360)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(360)
					break;
				}
				HX_STACK_LINE(360)
				::String p = _g1->__get(_g);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(360)
				++(_g);
				HX_STACK_LINE(361)
				::tools::haxelib::Main_obj::print((HX_CSTRING("  ") + p));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,user,(void))

Void Main_obj::_register( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","register",0x8ea942b6,"tools.haxelib.Main.register","tools/haxelib/Main.hx",364,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(365)
		::String _g = this->param(HX_CSTRING("User"),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(365)
		this->doRegister(_g);
		HX_STACK_LINE(366)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Registration successful"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,_register,(void))

::String Main_obj::doRegister( ::String name){
	HX_STACK_FRAME("tools.haxelib.Main","doRegister",0xc6fc5421,"tools.haxelib.Main.doRegister","tools/haxelib/Main.hx",369,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(370)
	::String email = this->param(HX_CSTRING("Email"),null());		HX_STACK_VAR(email,"email");
	HX_STACK_LINE(371)
	::String fullname = this->param(HX_CSTRING("Fullname"),null());		HX_STACK_VAR(fullname,"fullname");
	HX_STACK_LINE(372)
	::String pass = this->param(HX_CSTRING("Password"),true);		HX_STACK_VAR(pass,"pass");
	HX_STACK_LINE(373)
	::String pass2 = this->param(HX_CSTRING("Confirm"),true);		HX_STACK_VAR(pass2,"pass2");
	HX_STACK_LINE(374)
	if (((pass != pass2))){
		HX_STACK_LINE(375)
		HX_STACK_DO_THROW(HX_CSTRING("Password does not match"));
	}
	HX_STACK_LINE(376)
	::String _g = ::haxe::crypto::Md5_obj::encode(pass);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(376)
	pass = _g;
	HX_STACK_LINE(377)
	this->site->_register(name,pass,email,fullname);
	HX_STACK_LINE(378)
	return pass;
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,doRegister,return )

Void Main_obj::submit( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","submit",0xe24a29ab,"tools.haxelib.Main.submit","tools/haxelib/Main.hx",381,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(382)
		::String file = this->param(HX_CSTRING("Package"),null());		HX_STACK_VAR(file,"file");
		HX_STACK_LINE(383)
		::haxe::io::Bytes data = ::sys::io::File_obj::getBytes(file);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(384)
		::haxe::io::BytesInput _g = ::haxe::io::BytesInput_obj::__new(data,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(384)
		::List zip = ::haxe::zip::Reader_obj::readZip(_g);		HX_STACK_VAR(zip,"zip");
		HX_STACK_LINE(385)
		Dynamic infos = ::tools::haxelib::Data_obj::readInfos(zip,true);		HX_STACK_VAR(infos,"infos");
		HX_STACK_LINE(386)
		::tools::haxelib::Data_obj::checkClassPath(zip,infos);
		HX_STACK_LINE(387)
		::String user;		HX_STACK_VAR(user,"user");
		HX_STACK_LINE(388)
		if (((infos->__Field(HX_CSTRING("developers"),true)->__Field(HX_CSTRING("length"),true) == (int)1))){
			HX_STACK_LINE(389)
			::String _g1 = infos->__Field(HX_CSTRING("developers"),true)->__Field(HX_CSTRING("first"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(389)
			user = _g1;
		}
		else{
			HX_STACK_LINE(392)
			while((true)){
				HX_STACK_LINE(393)
				::String _g2 = ::Std_obj::string(infos->__Field(HX_CSTRING("developers"),true));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(393)
				::String _g3 = (HX_CSTRING("Which of these users are you: ") + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(393)
				::tools::haxelib::Main_obj::print(_g3);
				HX_STACK_LINE(394)
				::String _g4 = this->param(HX_CSTRING("User"),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(394)
				user = _g4;
				HX_STACK_LINE(392)
				if ((!((!(::Lambda_obj::has(infos->__Field(HX_CSTRING("developers"),true),user)))))){
					HX_STACK_LINE(392)
					break;
				}
			}
		}
		HX_STACK_LINE(397)
		::String password;		HX_STACK_VAR(password,"password");
		HX_STACK_LINE(398)
		if ((this->site->isNewUser(user))){
			HX_STACK_LINE(399)
			::tools::haxelib::Main_obj::print(((HX_CSTRING("This is your first submission as '") + user) + HX_CSTRING("'")));
			HX_STACK_LINE(400)
			::tools::haxelib::Main_obj::print(HX_CSTRING("Please enter the following informations for registration"));
			HX_STACK_LINE(401)
			::String _g5 = this->doRegister(user);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(401)
			password = _g5;
		}
		else{
			HX_STACK_LINE(403)
			::String _g6 = this->param(HX_CSTRING("Password"),true);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(403)
			::String _g7 = ::haxe::crypto::Md5_obj::encode(_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(403)
			password = _g7;
			HX_STACK_LINE(404)
			while((true)){
				HX_STACK_LINE(404)
				if ((!((!(this->site->checkPassword(user,password)))))){
					HX_STACK_LINE(404)
					break;
				}
				HX_STACK_LINE(405)
				::tools::haxelib::Main_obj::print((HX_CSTRING("Invalid password for ") + user));
				HX_STACK_LINE(406)
				::String _g8 = this->param(HX_CSTRING("Password"),true);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(406)
				::String _g9 = ::haxe::crypto::Md5_obj::encode(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(406)
				password = _g9;
			}
		}
		HX_STACK_LINE(409)
		this->site->checkDeveloper(infos->__Field(HX_CSTRING("project"),true),user);
		HX_STACK_LINE(412)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(infos->__Field(HX_CSTRING("dependencies"),true)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic d = __it->next();
			{
				HX_STACK_LINE(413)
				Dynamic infos1 = this->site->infos(d->__Field(HX_CSTRING("project"),true));		HX_STACK_VAR(infos1,"infos1");
				HX_STACK_LINE(414)
				if (((d->__Field(HX_CSTRING("version"),true) == HX_CSTRING("")))){
					HX_STACK_LINE(415)
					continue;
				}
				HX_STACK_LINE(416)
				bool found = false;		HX_STACK_VAR(found,"found");
				HX_STACK_LINE(417)
				{
					HX_STACK_LINE(417)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(417)
					Dynamic _g11 = infos1->__Field(HX_CSTRING("versions"),true);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(417)
					while((true)){
						HX_STACK_LINE(417)
						if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(417)
							break;
						}
						HX_STACK_LINE(417)
						Dynamic v = _g11->__GetItem(_g1);		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(417)
						++(_g1);
						HX_STACK_LINE(418)
						if (((v->__Field(HX_CSTRING("name"),true) == d->__Field(HX_CSTRING("version"),true)))){
							HX_STACK_LINE(419)
							found = true;
							HX_STACK_LINE(420)
							break;
						}
					}
				}
				HX_STACK_LINE(422)
				if ((!(found))){
					HX_STACK_LINE(423)
					HX_STACK_DO_THROW((((HX_CSTRING("Library ") + d->__Field(HX_CSTRING("project"),true)) + HX_CSTRING(" does not have version ")) + d->__Field(HX_CSTRING("version"),true)));
				}
			}
;
		}
		HX_STACK_LINE(428)
		Dynamic sinfos;		HX_STACK_VAR(sinfos,"sinfos");
		HX_STACK_LINE(428)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(428)
			sinfos = this->site->infos(infos->__Field(HX_CSTRING("project"),true));
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic _ = __e;{
					HX_STACK_LINE(428)
					sinfos = null();
				}
			}
		}
		HX_STACK_LINE(429)
		if (((sinfos != null()))){
			HX_STACK_LINE(430)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(430)
			Dynamic _g11 = sinfos->__Field(HX_CSTRING("versions"),true);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(430)
			while((true)){
				HX_STACK_LINE(430)
				if ((!(((_g1 < _g11->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(430)
					break;
				}
				HX_STACK_LINE(430)
				Dynamic v = _g11->__GetItem(_g1);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(430)
				++(_g1);
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::tools::haxelib::Main_obj > __this,Dynamic &v){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",431,0xb1b3c261)
						{
							HX_STACK_LINE(431)
							::tools::haxelib::Answer _g10 = __this->ask(((HX_CSTRING("You're about to overwrite existing version '") + v->__Field(HX_CSTRING("name"),true)) + HX_CSTRING("', please confirm")));		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(431)
							return (_g10 == ::tools::haxelib::Answer_obj::No);
						}
						return null();
					}
				};
				HX_STACK_LINE(431)
				if (((  (((v->__Field(HX_CSTRING("name"),true) == (HX_CSTRING("") + infos->__Field(HX_CSTRING("version"),true))))) ? bool(_Function_3_1::Block(this,v)) : bool(false) ))){
					HX_STACK_LINE(432)
					HX_STACK_DO_THROW(HX_CSTRING("Aborted"));
				}
			}
		}
		HX_STACK_LINE(435)
		::String id = this->site->getSubmitId();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(438)
		::haxe::Http h = ::haxe::Http_obj::__new((((((HX_CSTRING("http://") + ::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("host"),true)) + HX_CSTRING(":")) + ::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("port"),true)) + HX_CSTRING("/")) + ::tools::haxelib::Main_obj::SERVER->__Field(HX_CSTRING("url"),true)));		HX_STACK_VAR(h,"h");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(::String e){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","tools/haxelib/Main.hx",439,0xb1b3c261)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(439)
				HX_STACK_DO_THROW(e);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(439)
		h->onError =  Dynamic(new _Function_1_1());
		HX_STACK_LINE(440)
		h->onData = ::tools::haxelib::Main_obj::print_dyn();
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			::haxe::io::BytesInput _g11 = ::haxe::io::BytesInput_obj::__new(data,null(),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(441)
			::haxe::io::Input file1 = ::tools::haxelib::ProgressIn_obj::__new(_g11,data->length);		HX_STACK_VAR(file1,"file1");
			HX_STACK_LINE(441)
			h->fileTransfer(HX_CSTRING("file"),id,file1,data->length,HX_CSTRING("application/octet-stream"));
		}
		HX_STACK_LINE(442)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Sending data.... "));
		HX_STACK_LINE(443)
		h->request(true);
		HX_STACK_LINE(446)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Processing file.... "));
		HX_STACK_LINE(447)
		::haxe::remoting::HttpConnection_obj::TIMEOUT = (int)1000;
		HX_STACK_LINE(449)
		::String msg = this->site->processSubmit(id,user,password);		HX_STACK_VAR(msg,"msg");
		HX_STACK_LINE(450)
		::tools::haxelib::Main_obj::print(msg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,submit,(void))

Void Main_obj::install( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","install",0x80ae6428,"tools.haxelib.Main.install","tools/haxelib/Main.hx",453,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(454)
		::String prj = this->param(HX_CSTRING("Library name or hxml file:"),null());		HX_STACK_VAR(prj,"prj");
		HX_STACK_LINE(457)
		if (((prj == HX_CSTRING("all")))){
			HX_STACK_LINE(459)
			this->installFromAllHxml();
			HX_STACK_LINE(460)
			return null();
		}
		HX_STACK_LINE(463)
		::String _g = ::haxe::io::Path_obj::removeTrailingSlashes(prj);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(463)
		if (((  ((::sys::FileSystem_obj::sys_exists(_g))) ? bool(!(::sys::FileSystem_obj::isDirectory(prj))) : bool(false) ))){
			HX_STACK_LINE(465)
			if ((::StringTools_obj::endsWith(prj,HX_CSTRING(".hxml")))){
				HX_STACK_LINE(467)
				this->installFromHxml(prj);
				HX_STACK_LINE(468)
				return null();
			}
			HX_STACK_LINE(471)
			if ((::StringTools_obj::endsWith(prj,HX_CSTRING(".zip")))){
				HX_STACK_LINE(473)
				this->doInstallFile(prj,true,true);
				HX_STACK_LINE(474)
				return null();
			}
		}
		HX_STACK_LINE(479)
		Dynamic inf = this->site->infos(prj);		HX_STACK_VAR(inf,"inf");
		HX_STACK_LINE(480)
		::String reqversion = this->paramOpt();		HX_STACK_VAR(reqversion,"reqversion");
		HX_STACK_LINE(481)
		::String version = this->getVersion(inf,reqversion);		HX_STACK_VAR(version,"version");
		HX_STACK_LINE(482)
		this->doInstall(inf->__Field(HX_CSTRING("name"),true),version,(version == inf->__Field(HX_CSTRING("curversion"),true)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,install,(void))

::String Main_obj::getVersion( Dynamic inf,::String reqversion){
	HX_STACK_FRAME("tools.haxelib.Main","getVersion",0x553b0435,"tools.haxelib.Main.getVersion","tools/haxelib/Main.hx",486,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inf,"inf")
	HX_STACK_ARG(reqversion,"reqversion")
	HX_STACK_LINE(487)
	if (((inf->__Field(HX_CSTRING("curversion"),true) == null()))){
		HX_STACK_LINE(488)
		HX_STACK_DO_THROW(((HX_CSTRING("The library ") + inf->__Field(HX_CSTRING("name"),true)) + HX_CSTRING(" has not yet released a version")));
	}
	HX_STACK_LINE(489)
	::String version;		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(489)
	if (((reqversion != null()))){
		HX_STACK_LINE(489)
		version = reqversion;
	}
	else{
		HX_STACK_LINE(489)
		version = inf->__Field(HX_CSTRING("curversion"),true);
	}
	HX_STACK_LINE(490)
	bool found = false;		HX_STACK_VAR(found,"found");
	HX_STACK_LINE(491)
	{
		HX_STACK_LINE(491)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(491)
		Dynamic _g1 = inf->__Field(HX_CSTRING("versions"),true);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(491)
		while((true)){
			HX_STACK_LINE(491)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(491)
				break;
			}
			HX_STACK_LINE(491)
			Dynamic v = _g1->__GetItem(_g);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(491)
			++(_g);
			HX_STACK_LINE(492)
			if (((v->__Field(HX_CSTRING("name"),true) == version))){
				HX_STACK_LINE(493)
				found = true;
				HX_STACK_LINE(494)
				break;
			}
		}
	}
	HX_STACK_LINE(496)
	if ((!(found))){
		HX_STACK_LINE(497)
		HX_STACK_DO_THROW((((HX_CSTRING("No such version ") + version) + HX_CSTRING(" for library ")) + inf->__Field(HX_CSTRING("name"),true)));
	}
	HX_STACK_LINE(499)
	return version;
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,getVersion,return )

Void Main_obj::installFromHxml( ::String path){
{
		HX_STACK_FRAME("tools.haxelib.Main","installFromHxml",0x9e01f541,"tools.haxelib.Main.installFromHxml","tools/haxelib/Main.hx",503,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(504)
		::String hxml = ::sys::io::File_obj::getContent(path);		HX_STACK_VAR(hxml,"hxml");
		HX_STACK_LINE(505)
		Array< ::String > lines = hxml.split(HX_CSTRING("\n"));		HX_STACK_VAR(lines,"lines");
		HX_STACK_LINE(507)
		::haxe::ds::StringMap libsToInstall = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(libsToInstall,"libsToInstall");
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(508)
			while((true)){
				HX_STACK_LINE(508)
				if ((!(((_g < lines->length))))){
					HX_STACK_LINE(508)
					break;
				}
				HX_STACK_LINE(508)
				::String l = lines->__get(_g);		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(508)
				++(_g);
				HX_STACK_LINE(510)
				::String _g1 = ::StringTools_obj::trim(l);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(510)
				l = _g1;
				HX_STACK_LINE(511)
				if ((::StringTools_obj::startsWith(l,HX_CSTRING("-lib")))){
					HX_STACK_LINE(513)
					::String key = l.substr((int)5,null());		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(514)
					Array< ::String > parts = key.split(HX_CSTRING(":"));		HX_STACK_VAR(parts,"parts");
					HX_STACK_LINE(515)
					::String libName = ::StringTools_obj::trim(parts->__get((int)0));		HX_STACK_VAR(libName,"libName");
					HX_STACK_LINE(516)
					::String libVersion;		HX_STACK_VAR(libVersion,"libVersion");
					HX_STACK_LINE(516)
					if (((parts->length > (int)1))){
						HX_STACK_LINE(516)
						libVersion = ::StringTools_obj::trim(parts->__get((int)1));
					}
					else{
						HX_STACK_LINE(516)
						libVersion = null();
					}
					HX_STACK_LINE(518)
					bool _g11 = libsToInstall->exists(key);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(518)
					if (((_g11 == false))){
						struct _Function_5_1{
							inline static Dynamic Block( ::String &libVersion,::String &libName){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",520,0xb1b3c261)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("name") , libName,false);
									__result->Add(HX_CSTRING("version") , libVersion,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(520)
						libsToInstall->set(key,_Function_5_1::Block(libVersion,libName));
					}
				}
			}
		}
		HX_STACK_LINE(524)
		this->installMany(libsToInstall,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,installFromHxml,(void))

Void Main_obj::installFromAllHxml( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","installFromAllHxml",0xdaa6a09e,"tools.haxelib.Main.installFromAllHxml","tools/haxelib/Main.hx",528,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(529)
		::String _g = ::Sys_obj::getCwd();		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		bool run(::String f){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","tools/haxelib/Main.hx",529,0xb1b3c261)
			HX_STACK_ARG(f,"f")
			{
				HX_STACK_LINE(529)
				return ::StringTools_obj::endsWith(f,HX_CSTRING(".hxml"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(529)
		Array< ::String > hxmlFiles = ::sys::FileSystem_obj::readDirectory(_g)->filter( Dynamic(new _Function_1_1()));		HX_STACK_VAR(hxmlFiles,"hxmlFiles");
		HX_STACK_LINE(530)
		if (((hxmlFiles->length > (int)0))){
			HX_STACK_LINE(532)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(532)
			while((true)){
				HX_STACK_LINE(532)
				if ((!(((_g1 < hxmlFiles->length))))){
					HX_STACK_LINE(532)
					break;
				}
				HX_STACK_LINE(532)
				::String file = hxmlFiles->__get(_g1);		HX_STACK_VAR(file,"file");
				HX_STACK_LINE(532)
				++(_g1);
				HX_STACK_LINE(534)
				if ((::StringTools_obj::endsWith(file,HX_CSTRING(".hxml")))){
					HX_STACK_LINE(536)
					::tools::haxelib::Main_obj::print(((HX_CSTRING("Installing all libraries from ") + file) + HX_CSTRING(":")));
					HX_STACK_LINE(537)
					::String _g11 = ::Sys_obj::getCwd();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(537)
					::String _g2 = (_g11 + file);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(537)
					this->installFromHxml(_g2);
				}
			}
		}
		else{
			HX_STACK_LINE(543)
			::tools::haxelib::Main_obj::print(HX_CSTRING("No hxml files found in the current directory."));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,installFromAllHxml,(void))

Void Main_obj::installMany( Dynamic libs,Dynamic __o_setCurrent){
Dynamic setCurrent = __o_setCurrent.Default(true);
	HX_STACK_FRAME("tools.haxelib.Main","installMany",0xbce700e7,"tools.haxelib.Main.installMany","tools/haxelib/Main.hx",548,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(libs,"libs")
	HX_STACK_ARG(setCurrent,"setCurrent")
{
		HX_STACK_LINE(549)
		int _g = ::Lambda_obj::count(libs,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(549)
		if (((_g == (int)0))){
			HX_STACK_LINE(549)
			return null();
		}
		HX_STACK_LINE(553)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Loading info about the required libraries"));
		HX_STACK_LINE(554)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(libs->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic l = __it->next();
			{
				HX_STACK_LINE(556)
				Dynamic inf = this->site->infos(l->__Field(HX_CSTRING("name"),true));		HX_STACK_VAR(inf,"inf");
				HX_STACK_LINE(557)
				::String _g1 = this->getVersion(inf,l->__Field(HX_CSTRING("version"),true));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(557)
				l->__FieldRef(HX_CSTRING("version")) = _g1;
			}
;
		}
		HX_STACK_LINE(561)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Haxelib is going to install these libraries:"));
		HX_STACK_LINE(562)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(libs->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic l = __it->next();
			{
				HX_STACK_LINE(564)
				::String vString;		HX_STACK_VAR(vString,"vString");
				HX_STACK_LINE(564)
				if (((l->__Field(HX_CSTRING("version"),true) == null()))){
					HX_STACK_LINE(564)
					vString = HX_CSTRING("");
				}
				else{
					HX_STACK_LINE(564)
					vString = (HX_CSTRING(" - ") + l->__Field(HX_CSTRING("version"),true));
				}
				HX_STACK_LINE(565)
				::tools::haxelib::Main_obj::print(((HX_CSTRING("  ") + l->__Field(HX_CSTRING("name"),true)) + vString));
			}
;
		}
		HX_STACK_LINE(569)
		::tools::haxelib::Answer _g2 = this->ask(HX_CSTRING("Continue?"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(569)
		if (((_g2 != ::tools::haxelib::Answer_obj::No))){
			HX_STACK_LINE(571)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(libs->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
				Dynamic l = __it->next();
				this->doInstall(l->__Field(HX_CSTRING("name"),true),l->__Field(HX_CSTRING("version"),true),setCurrent);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,installMany,(void))

Void Main_obj::doInstall( ::String project,::String version,bool setcurrent){
{
		HX_STACK_FRAME("tools.haxelib.Main","doInstall",0x1877a91d,"tools.haxelib.Main.doInstall","tools/haxelib/Main.hx",578,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(project,"project")
		HX_STACK_ARG(version,"version")
		HX_STACK_ARG(setcurrent,"setcurrent")
		HX_STACK_LINE(579)
		::String rep = this->getRepository(null());		HX_STACK_VAR(rep,"rep");
		struct _Function_1_1{
			inline static bool Block( ::String &rep,::String &project,::String &version){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",582,0xb1b3c261)
				{
					HX_STACK_LINE(582)
					::String _g = ::tools::haxelib::Data_obj::safe(project);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(582)
					::String _g1 = (rep + _g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(582)
					::String _g2 = (_g1 + HX_CSTRING("/"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(582)
					::String _g3 = ::tools::haxelib::Data_obj::safe(version);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(582)
					::String path = (_g2 + _g3);		HX_STACK_VAR(path,"path");
					HX_STACK_LINE(582)
					::String _g4 = ::haxe::io::Path_obj::removeTrailingSlashes(path);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(582)
					return ::sys::FileSystem_obj::sys_exists(_g4);
				}
				return null();
			}
		};
		HX_STACK_LINE(582)
		if ((_Function_1_1::Block(rep,project,version))){
			HX_STACK_LINE(583)
			::tools::haxelib::Main_obj::print(((((HX_CSTRING("You already have ") + project) + HX_CSTRING(" version ")) + version) + HX_CSTRING(" installed")));
			HX_STACK_LINE(584)
			this->setCurrent(project,version,true);
			HX_STACK_LINE(585)
			return null();
		}
		HX_STACK_LINE(589)
		::String filename = ::tools::haxelib::Data_obj::fileName(project,version);		HX_STACK_VAR(filename,"filename");
		HX_STACK_LINE(590)
		Array< ::String > filepath = Array_obj< ::String >::__new().Add((rep + filename));		HX_STACK_VAR(filepath,"filepath");
		HX_STACK_LINE(591)
		::sys::io::FileOutput out;		HX_STACK_VAR(out,"out");
		HX_STACK_LINE(591)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(591)
			out = ::sys::io::File_obj::write(filepath->__get((int)0),true);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(592)
					::String _g5 = ::Std_obj::string(e);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(592)
					HX_STACK_DO_THROW((((HX_CSTRING("Failed to write to ") + filepath->__get((int)0)) + HX_CSTRING(": ")) + _g5));
				}
			}
		}
		HX_STACK_LINE(594)
		Array< ::Dynamic > progress = Array_obj< ::Dynamic >::__new().Add(::tools::haxelib::Progress_obj::__new(out));		HX_STACK_VAR(progress,"progress");
		HX_STACK_LINE(595)
		::haxe::Http h = ::haxe::Http_obj::__new((((this->siteUrl + ::tools::haxelib::Data_obj::REPOSITORY) + HX_CSTRING("/")) + filename));		HX_STACK_VAR(h,"h");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,progress,Array< ::String >,filepath)
		Void run(::String e){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","tools/haxelib/Main.hx",596,0xb1b3c261)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(597)
				progress->__get((int)0).StaticCast< ::tools::haxelib::Progress >()->close();
				HX_STACK_LINE(598)
				::sys::FileSystem_obj::deleteFile(filepath->__get((int)0));
				HX_STACK_LINE(599)
				HX_STACK_DO_THROW(e);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(596)
		h->onError =  Dynamic(new _Function_1_2(progress,filepath));
		HX_STACK_LINE(601)
		::tools::haxelib::Main_obj::print(((HX_CSTRING("Downloading ") + filename) + HX_CSTRING("...")));
		HX_STACK_LINE(602)
		h->customRequest(false,progress->__get((int)0).StaticCast< ::tools::haxelib::Progress >(),null(),null());
		HX_STACK_LINE(604)
		this->doInstallFile(filepath->__get((int)0),setcurrent,null());
		HX_STACK_LINE(605)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(606)
			this->site->postInstall(project,version);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Main_obj,doInstall,(void))

Void Main_obj::doInstallFile( ::String filepath,bool setcurrent,Dynamic nodelete){
{
		HX_STACK_FRAME("tools.haxelib.Main","doInstallFile",0xb933f639,"tools.haxelib.Main.doInstallFile","tools/haxelib/Main.hx",610,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(filepath,"filepath")
		HX_STACK_ARG(setcurrent,"setcurrent")
		HX_STACK_ARG(nodelete,"nodelete")
		HX_STACK_LINE(612)
		::sys::io::FileInput f = ::sys::io::File_obj::read(filepath,true);		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(613)
		::List zip = ::haxe::zip::Reader_obj::readZip(f);		HX_STACK_VAR(zip,"zip");
		HX_STACK_LINE(614)
		f->close();
		HX_STACK_LINE(615)
		Dynamic infos = ::tools::haxelib::Data_obj::readInfos(zip,false);		HX_STACK_VAR(infos,"infos");
		HX_STACK_LINE(617)
		::String _g = this->getRepository(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(617)
		::String _g1 = ::tools::haxelib::Data_obj::safe(infos->__Field(HX_CSTRING("project"),true));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(617)
		::String pdir = (_g + _g1);		HX_STACK_VAR(pdir,"pdir");
		HX_STACK_LINE(618)
		this->safeDir(pdir);
		HX_STACK_LINE(619)
		hx::AddEq(pdir,HX_CSTRING("/"));
		HX_STACK_LINE(620)
		::String _g2 = ::tools::haxelib::Data_obj::safe((HX_CSTRING("") + infos->__Field(HX_CSTRING("version"),true)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(620)
		::String target = (pdir + _g2);		HX_STACK_VAR(target,"target");
		HX_STACK_LINE(621)
		this->safeDir(target);
		HX_STACK_LINE(622)
		hx::AddEq(target,HX_CSTRING("/"));
		HX_STACK_LINE(625)
		::String basepath = ::tools::haxelib::Data_obj::locateBasePath(zip);		HX_STACK_VAR(basepath,"basepath");
		HX_STACK_LINE(628)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(zip->iterator());  __it->hasNext(); ){
			Dynamic zipfile = __it->next();
			{
				HX_STACK_LINE(629)
				::String n = zipfile->__Field(HX_CSTRING("fileName"),true);		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(630)
				if ((::StringTools_obj::startsWith(n,basepath))){
					HX_STACK_LINE(632)
					::String _g3 = n.substr(basepath.length,(n.length - basepath.length));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(632)
					n = _g3;
					HX_STACK_LINE(633)
					::String _g4 = n.charAt((int)0);		HX_STACK_VAR(_g4,"_g4");
					struct _Function_3_1{
						inline static bool Block( ::String &n){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",633,0xb1b3c261)
							{
								HX_STACK_LINE(633)
								::String _g5 = n.charAt((int)0);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(633)
								return (_g5 == HX_CSTRING("\\"));
							}
							return null();
						}
					};
					HX_STACK_LINE(633)
					if (((  ((!(((  ((!(((_g4 == HX_CSTRING("/")))))) ? bool(_Function_3_1::Block(n)) : bool(true) ))))) ? bool((n.split(HX_CSTRING(".."))->length > (int)1)) : bool(true) ))){
						HX_STACK_LINE(634)
						HX_STACK_DO_THROW((HX_CSTRING("Invalid filename : ") + n));
					}
					HX_STACK_LINE(635)
					Array< ::String > dirs = ::EReg_obj::__new(HX_CSTRING("[/\\\\]"),HX_CSTRING("g"))->split(n);		HX_STACK_VAR(dirs,"dirs");
					HX_STACK_LINE(636)
					::String path = HX_CSTRING("");		HX_STACK_VAR(path,"path");
					HX_STACK_LINE(637)
					::String file = dirs->pop();		HX_STACK_VAR(file,"file");
					HX_STACK_LINE(638)
					{
						HX_STACK_LINE(638)
						int _g5 = (int)0;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(638)
						while((true)){
							HX_STACK_LINE(638)
							if ((!(((_g5 < dirs->length))))){
								HX_STACK_LINE(638)
								break;
							}
							HX_STACK_LINE(638)
							::String d = dirs->__get(_g5);		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(638)
							++(_g5);
							HX_STACK_LINE(639)
							hx::AddEq(path,d);
							HX_STACK_LINE(640)
							this->safeDir((target + path));
							HX_STACK_LINE(641)
							hx::AddEq(path,HX_CSTRING("/"));
						}
					}
					HX_STACK_LINE(643)
					if (((file == HX_CSTRING("")))){
						HX_STACK_LINE(644)
						if (((path != HX_CSTRING("")))){
							HX_STACK_LINE(644)
							::tools::haxelib::Main_obj::print((HX_CSTRING("  Created ") + path));
						}
						HX_STACK_LINE(645)
						continue;
					}
					HX_STACK_LINE(647)
					hx::AddEq(path,file);
					HX_STACK_LINE(648)
					::tools::haxelib::Main_obj::print((HX_CSTRING("  Install ") + path));
					HX_STACK_LINE(649)
					::haxe::io::Bytes data = ::haxe::zip::Reader_obj::unzip(zipfile);		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(650)
					::sys::io::File_obj::saveBytes((target + path),data);
				}
			}
;
		}
		struct _Function_1_1{
			inline static bool Block( ::String &pdir){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",655,0xb1b3c261)
				{
					HX_STACK_LINE(655)
					::String _g6 = ::haxe::io::Path_obj::removeTrailingSlashes((pdir + HX_CSTRING(".current")));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(655)
					return !(::sys::FileSystem_obj::sys_exists(_g6));
				}
				return null();
			}
		};
		HX_STACK_LINE(655)
		if (((  ((!(setcurrent))) ? bool(_Function_1_1::Block(pdir)) : bool(true) ))){
			HX_STACK_LINE(656)
			::sys::io::File_obj::saveContent((pdir + HX_CSTRING(".current")),(HX_CSTRING("") + infos->__Field(HX_CSTRING("version"),true)));
			HX_STACK_LINE(657)
			::tools::haxelib::Main_obj::print((HX_CSTRING("  Current version is now ") + infos->__Field(HX_CSTRING("version"),true)));
		}
		HX_STACK_LINE(661)
		if ((!(nodelete))){
			HX_STACK_LINE(662)
			::sys::FileSystem_obj::deleteFile(filepath);
		}
		HX_STACK_LINE(663)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Done"));
		HX_STACK_LINE(666)
		this->doInstallDependencies(infos->__Field(HX_CSTRING("dependencies"),true));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Main_obj,doInstallFile,(void))

Void Main_obj::doInstallDependencies( ::List dependencies){
{
		HX_STACK_FRAME("tools.haxelib.Main","doInstallDependencies",0xdcfa80a6,"tools.haxelib.Main.doInstallDependencies","tools/haxelib/Main.hx",671,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dependencies,"dependencies")
		HX_STACK_LINE(671)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(dependencies->iterator());  __it->hasNext(); ){
			Dynamic d = __it->next();
			{
				HX_STACK_LINE(672)
				::tools::haxelib::Main_obj::print((((HX_CSTRING("Installing dependency ") + d->__Field(HX_CSTRING("project"),true)) + HX_CSTRING(" ")) + d->__Field(HX_CSTRING("version"),true)));
				HX_STACK_LINE(673)
				if (((d->__Field(HX_CSTRING("version"),true) == HX_CSTRING("")))){
					HX_STACK_LINE(674)
					d->__FieldRef(HX_CSTRING("version")) = this->site->infos(d->__Field(HX_CSTRING("project"),true))->__Field(HX_CSTRING("curversion"),true);
				}
				HX_STACK_LINE(675)
				this->doInstall(d->__Field(HX_CSTRING("project"),true),d->__Field(HX_CSTRING("version"),true),false);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,doInstallDependencies,(void))

bool Main_obj::safeDir( ::String dir){
	HX_STACK_FRAME("tools.haxelib.Main","safeDir",0x67ab950d,"tools.haxelib.Main.safeDir","tools/haxelib/Main.hx",679,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_LINE(680)
	::String _g = ::haxe::io::Path_obj::removeTrailingSlashes(dir);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(680)
	if ((::sys::FileSystem_obj::sys_exists(_g))){
		HX_STACK_LINE(681)
		if ((!(::sys::FileSystem_obj::isDirectory(dir)))){
			HX_STACK_LINE(682)
			HX_STACK_DO_THROW(((HX_CSTRING("A file is preventing ") + dir) + HX_CSTRING(" to be created")));
		}
	}
	HX_STACK_LINE(684)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(685)
		::sys::FileSystem_obj::createDirectory(dir);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(687)
				HX_STACK_DO_THROW((HX_CSTRING("You don't have enough user rights to create the directory ") + dir));
			}
		}
	}
	HX_STACK_LINE(689)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,safeDir,return )

bool Main_obj::safeDelete( ::String file){
	HX_STACK_FRAME("tools.haxelib.Main","safeDelete",0xa952c06b,"tools.haxelib.Main.safeDelete","tools/haxelib/Main.hx",693,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(file,"file")
	HX_STACK_LINE(693)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(694)
		::sys::FileSystem_obj::deleteFile(file);
		HX_STACK_LINE(695)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(697)
				::String _g = ::Sys_obj::systemName();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(697)
				if (((_g == HX_CSTRING("Windows")))){
					HX_STACK_LINE(698)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(699)
						::Sys_obj::command(((HX_CSTRING("attrib -R \"") + file) + HX_CSTRING("\"")),null());
						HX_STACK_LINE(700)
						::sys::FileSystem_obj::deleteFile(file);
						HX_STACK_LINE(701)
						return true;
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e1 = __e;{
							}
						}
					}
				}
				HX_STACK_LINE(705)
				return false;
			}
		}
	}
	HX_STACK_LINE(693)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,safeDelete,return )

::String Main_obj::getRepository( Dynamic setup){
	HX_STACK_FRAME("tools.haxelib.Main","getRepository",0x9f19328d,"tools.haxelib.Main.getRepository","tools/haxelib/Main.hx",709,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(setup,"setup")
	HX_STACK_LINE(710)
	::String _g = ::Sys_obj::systemName();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(710)
	bool win = (_g == HX_CSTRING("Windows"));		HX_STACK_VAR(win,"win");
	HX_STACK_LINE(711)
	::String haxepath = ::Sys_obj::getEnv(HX_CSTRING("HAXEPATH"));		HX_STACK_VAR(haxepath,"haxepath");
	HX_STACK_LINE(712)
	if (((haxepath != null()))){
		HX_STACK_LINE(713)
		::String _g1 = ::haxe::io::Path_obj::addTrailingSlash(haxepath);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(713)
		haxepath = _g1;
	}
	HX_STACK_LINE(714)
	::String config_file;		HX_STACK_VAR(config_file,"config_file");
	HX_STACK_LINE(715)
	if ((win)){
		HX_STACK_LINE(716)
		::String _g2 = ::Sys_obj::getEnv(HX_CSTRING("HOMEDRIVE"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(716)
		::String _g3 = ::Sys_obj::getEnv(HX_CSTRING("HOMEPATH"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(716)
		::String _g4 = (_g2 + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(716)
		config_file = _g4;
	}
	else{
		HX_STACK_LINE(718)
		::String _g5 = ::Sys_obj::getEnv(HX_CSTRING("HOME"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(718)
		config_file = _g5;
	}
	HX_STACK_LINE(719)
	hx::AddEq(config_file,HX_CSTRING("/.haxelib"));
	HX_STACK_LINE(720)
	::String rep;		HX_STACK_VAR(rep,"rep");
	HX_STACK_LINE(720)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(721)
		rep = ::sys::io::File_obj::getContent(config_file);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(722)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(723)
					rep = ::sys::io::File_obj::getContent(HX_CSTRING("/etc/.haxelib"));
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e1 = __e;{
							HX_STACK_LINE(725)
							if ((setup)){
								HX_STACK_LINE(726)
								rep = (((  ((win)) ? ::String(haxepath) : ::String(HX_CSTRING("/usr/lib/haxe/")) )) + ::tools::haxelib::Main_obj::REPNAME);
							}
							else{
								HX_STACK_LINE(727)
								if ((win)){
									HX_STACK_LINE(729)
									if (((haxepath == null()))){
										HX_STACK_LINE(730)
										HX_STACK_DO_THROW(HX_CSTRING("HAXEPATH environment variable not defined, please run haxesetup.exe first"));
									}
									HX_STACK_LINE(731)
									::String rep1 = (haxepath + ::tools::haxelib::Main_obj::REPNAME);		HX_STACK_VAR(rep1,"rep1");
									HX_STACK_LINE(732)
									try
									{
									HX_STACK_CATCHABLE(::String, 0);
									{
										HX_STACK_LINE(733)
										this->safeDir(rep1);
									}
									}
									catch(Dynamic __e){
										if (__e.IsClass< ::String >() ){
											HX_STACK_BEGIN_CATCH
											::String e2 = __e;{
												HX_STACK_LINE(735)
												HX_STACK_DO_THROW(HX_CSTRING("Error accessing Haxelib repository: $e"));
											}
										}
										else {
										    HX_STACK_DO_THROW(__e);
										}
									}
									HX_STACK_LINE(737)
									return ::haxe::io::Path_obj::addTrailingSlash(rep1);
								}
								else{
									HX_STACK_LINE(739)
									HX_STACK_DO_THROW(HX_CSTRING("This is the first time you are runing haxelib. Please run `haxelib setup` first"));
								}
							}
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(741)
	::String _g6 = ::StringTools_obj::trim(rep);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(741)
	rep = _g6;
	HX_STACK_LINE(742)
	if ((setup)){
		HX_STACK_LINE(743)
		if (((this->args->length <= this->argcur))){
			HX_STACK_LINE(744)
			::tools::haxelib::Main_obj::print(HX_CSTRING("Please enter haxelib repository path with write access"));
			HX_STACK_LINE(745)
			::tools::haxelib::Main_obj::print(((HX_CSTRING("Hit enter for default (") + rep) + HX_CSTRING(")")));
		}
		HX_STACK_LINE(747)
		::String line = this->param(HX_CSTRING("Path"),null());		HX_STACK_VAR(line,"line");
		HX_STACK_LINE(748)
		if (((line != HX_CSTRING("")))){
			HX_STACK_LINE(749)
			rep = line;
		}
		HX_STACK_LINE(750)
		::String _g7 = ::haxe::io::Path_obj::removeTrailingSlashes(rep);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(750)
		if ((!(::sys::FileSystem_obj::sys_exists(_g7)))){
			HX_STACK_LINE(751)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(752)
				::sys::FileSystem_obj::createDirectory(rep);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(754)
						::String _g8 = ::Std_obj::string(e);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(754)
						::String _g9 = (((HX_CSTRING("Failed to create directory '") + rep) + HX_CSTRING("' (")) + _g8);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(754)
						::String _g10 = (_g9 + HX_CSTRING("), maybe you need appropriate user rights"));		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(754)
						::tools::haxelib::Main_obj::print(_g10);
						HX_STACK_LINE(755)
						::tools::haxelib::Main_obj::print(HX_CSTRING("Check also that the parent directory exists"));
						HX_STACK_LINE(756)
						::Sys_obj::exit((int)1);
					}
				}
			}
		}
		HX_STACK_LINE(759)
		::String _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(759)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(759)
			_g11 = ::sys::FileSystem_obj::fullPath(rep);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(759)
					_g11 = rep;
				}
			}
		}
		HX_STACK_LINE(759)
		rep = _g11;
		HX_STACK_LINE(760)
		::sys::io::File_obj::saveContent(config_file,rep);
	}
	else{
		HX_STACK_LINE(761)
		::String _g12 = ::haxe::io::Path_obj::removeTrailingSlashes(rep);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(761)
		if ((!(::sys::FileSystem_obj::sys_exists(_g12)))){
			HX_STACK_LINE(762)
			HX_STACK_DO_THROW(((HX_CSTRING("haxelib Repository ") + rep) + HX_CSTRING(" does not exists. Please run `haxelib setup` again")));
		}
		else{
			HX_STACK_LINE(763)
			if ((!(::sys::FileSystem_obj::isDirectory(rep)))){
				HX_STACK_LINE(764)
				HX_STACK_DO_THROW(((HX_CSTRING("haxelib Repository ") + rep) + HX_CSTRING(" exists, but was a file, not a directory.  Please remove it and run `haxelib setup` again.")));
			}
		}
	}
	HX_STACK_LINE(766)
	return (rep + HX_CSTRING("/"));
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,getRepository,return )

Void Main_obj::setup( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","setup",0x5ef5704a,"tools.haxelib.Main.setup","tools/haxelib/Main.hx",769,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(770)
		::String path = this->getRepository(true);		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(771)
		::tools::haxelib::Main_obj::print((HX_CSTRING("haxelib repository is now ") + path));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setup,(void))

Void Main_obj::config( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","config",0x10162855,"tools.haxelib.Main.config","tools/haxelib/Main.hx",774,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(775)
		::String _g = this->getRepository(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(775)
		::tools::haxelib::Main_obj::print(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,config,(void))

::String Main_obj::getCurrent( ::String dir){
	HX_STACK_FRAME("tools.haxelib.Main","getCurrent",0xa42cb956,"tools.haxelib.Main.getCurrent","tools/haxelib/Main.hx",778,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_LINE(779)
	::String _g = ::haxe::io::Path_obj::removeTrailingSlashes((dir + HX_CSTRING("/.dev")));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(779)
	if ((::sys::FileSystem_obj::sys_exists(_g))){
		HX_STACK_LINE(779)
		return HX_CSTRING("dev");
	}
	else{
		HX_STACK_LINE(779)
		::String _g1 = ::sys::io::File_obj::getContent((dir + HX_CSTRING("/.current")));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(779)
		return ::StringTools_obj::trim(_g1);
	}
	HX_STACK_LINE(779)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,getCurrent,return )

::String Main_obj::getDev( ::String dir){
	HX_STACK_FRAME("tools.haxelib.Main","getDev",0xeb5f4472,"tools.haxelib.Main.getDev","tools/haxelib/Main.hx",782,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dir,"dir")
	HX_STACK_LINE(783)
	::String _g = ::sys::io::File_obj::getContent((dir + HX_CSTRING("/.dev")));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(783)
	return ::StringTools_obj::trim(_g);
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,getDev,return )

Void Main_obj::list( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","list",0x87dd5331,"tools.haxelib.Main.list","tools/haxelib/Main.hx",786,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(787)
		::String rep = this->getRepository(null());		HX_STACK_VAR(rep,"rep");
		HX_STACK_LINE(788)
		Array< ::String > folders = ::sys::FileSystem_obj::readDirectory(rep);		HX_STACK_VAR(folders,"folders");
		HX_STACK_LINE(789)
		Array< ::String > filter = Array_obj< ::String >::__new().Add(this->paramOpt());		HX_STACK_VAR(filter,"filter");
		HX_STACK_LINE(790)
		if (((filter->__get((int)0) != null()))){

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::String >,filter)
			bool run(::String f){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","tools/haxelib/Main.hx",791,0xb1b3c261)
				HX_STACK_ARG(f,"f")
				{
					HX_STACK_LINE(791)
					return (f.toLowerCase().indexOf(filter->__get((int)0).toLowerCase(),null()) > (int)-1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(791)
			Array< ::String > _g = folders->filter( Dynamic(new _Function_2_1(filter)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(791)
			folders = _g;
		}
		HX_STACK_LINE(792)
		Array< ::String > all = Array_obj< ::String >::__new();		HX_STACK_VAR(all,"all");
		HX_STACK_LINE(793)
		{
			HX_STACK_LINE(793)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(793)
			while((true)){
				HX_STACK_LINE(793)
				if ((!(((_g < folders->length))))){
					HX_STACK_LINE(793)
					break;
				}
				HX_STACK_LINE(793)
				::String p = folders->__get(_g);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(793)
				++(_g);
				HX_STACK_LINE(794)
				::String _g1 = p.charAt((int)0);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(794)
				if (((_g1 == HX_CSTRING(".")))){
					HX_STACK_LINE(795)
					continue;
				}
				HX_STACK_LINE(796)
				Array< ::String > versions = Array_obj< ::String >::__new();		HX_STACK_VAR(versions,"versions");
				HX_STACK_LINE(798)
				::String current = null();		HX_STACK_VAR(current,"current");
				HX_STACK_LINE(799)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(800)
					::String _g2 = this->getCurrent((rep + p));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(800)
					current = _g2;
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(802)
							current = null();
						}
					}
				}
				HX_STACK_LINE(804)
				if (((current == null()))){
					HX_STACK_LINE(805)
					continue;
				}
				HX_STACK_LINE(808)
				::String _g3 = ::sys::io::File_obj::getContent(((rep + p) + HX_CSTRING("/.dev")));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(808)
				::String dev;		HX_STACK_VAR(dev,"dev");
				HX_STACK_LINE(808)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(808)
					dev = ::StringTools_obj::trim(_g3);
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(808)
							dev = null();
						}
					}
				}
				HX_STACK_LINE(809)
				{
					HX_STACK_LINE(809)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(809)
					Array< ::String > _g2 = ::sys::FileSystem_obj::readDirectory((rep + p));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(809)
					while((true)){
						HX_STACK_LINE(809)
						if ((!(((_g11 < _g2->length))))){
							HX_STACK_LINE(809)
							break;
						}
						HX_STACK_LINE(809)
						::String v = _g2->__get(_g11);		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(809)
						++(_g11);
						HX_STACK_LINE(810)
						::String _g4 = v.charAt((int)0);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(810)
						if (((_g4 == HX_CSTRING(".")))){
							HX_STACK_LINE(811)
							continue;
						}
						HX_STACK_LINE(812)
						::String _g5 = ::tools::haxelib::Data_obj::unsafe(v);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(812)
						v = _g5;
						HX_STACK_LINE(813)
						if (((bool((dev == null())) && bool((v == current))))){
							HX_STACK_LINE(814)
							v = ((HX_CSTRING("[") + v) + HX_CSTRING("]"));
						}
						HX_STACK_LINE(815)
						versions->push(v);
					}
				}
				HX_STACK_LINE(817)
				if (((dev != null()))){
					HX_STACK_LINE(818)
					versions->push(((HX_CSTRING("[dev:") + dev) + HX_CSTRING("]")));
				}
				HX_STACK_LINE(819)
				::String _g6 = ::tools::haxelib::Data_obj::unsafe(p);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(819)
				::String _g7 = (_g6 + HX_CSTRING(": "));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(819)
				::String _g8 = versions->join(HX_CSTRING(" "));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(819)
				::String _g9 = (_g7 + _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(819)
				all->push(_g9);
			}
		}

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int run(::String s1,::String s2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","tools/haxelib/Main.hx",821,0xb1b3c261)
			HX_STACK_ARG(s1,"s1")
			HX_STACK_ARG(s2,"s2")
			{
				HX_STACK_LINE(821)
				return ::Reflect_obj::compare(s1.toLowerCase(),s2.toLowerCase());
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(821)
		all->sort( Dynamic(new _Function_1_1()));
		HX_STACK_LINE(822)
		{
			HX_STACK_LINE(822)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(822)
			while((true)){
				HX_STACK_LINE(822)
				if ((!(((_g < all->length))))){
					HX_STACK_LINE(822)
					break;
				}
				HX_STACK_LINE(822)
				::String p = all->__get(_g);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(822)
				++(_g);
				HX_STACK_LINE(823)
				::tools::haxelib::Main_obj::print(p);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,list,(void))

Void Main_obj::upgrade( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","upgrade",0x564543a9,"tools.haxelib.Main.upgrade","tools/haxelib/Main.hx",827,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(828)
		::String _g = this->getRepository(null());		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( ::String &_g){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",828,0xb1b3c261)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("rep") , _g,false);
					__result->Add(HX_CSTRING("prompt") , true,false);
					__result->Add(HX_CSTRING("updated") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(828)
		Dynamic state = _Function_1_1::Block(_g);		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(829)
		{
			HX_STACK_LINE(829)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(829)
			Array< ::String > _g11 = ::sys::FileSystem_obj::readDirectory(state->__Field(HX_CSTRING("rep"),true));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(829)
			while((true)){
				HX_STACK_LINE(829)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(829)
					break;
				}
				HX_STACK_LINE(829)
				::String p = _g11->__get(_g1);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(829)
				++(_g1);
				HX_STACK_LINE(830)
				::String _g12 = p.charAt((int)0);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(830)
				if (((  ((!(((_g12 == HX_CSTRING(".")))))) ? bool(!(::sys::FileSystem_obj::isDirectory(((state->__Field(HX_CSTRING("rep"),true) + HX_CSTRING("/")) + p)))) : bool(true) ))){
					HX_STACK_LINE(831)
					continue;
				}
				HX_STACK_LINE(832)
				::String p1 = ::tools::haxelib::Data_obj::unsafe(p);		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(833)
				::tools::haxelib::Main_obj::print((HX_CSTRING("Checking ") + p1));
				HX_STACK_LINE(834)
				this->doUpdate(p1,state);
			}
		}
		HX_STACK_LINE(836)
		if ((state->__Field(HX_CSTRING("updated"),true))){
			HX_STACK_LINE(837)
			::tools::haxelib::Main_obj::print(HX_CSTRING("Done"));
		}
		else{
			HX_STACK_LINE(839)
			::tools::haxelib::Main_obj::print(HX_CSTRING("All libraries are up-to-date"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,upgrade,(void))

Void Main_obj::doUpdate( ::String p,Dynamic state){
{
		HX_STACK_FRAME("tools.haxelib.Main","doUpdate",0xd926a847,"tools.haxelib.Main.doUpdate","tools/haxelib/Main.hx",842,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(843)
		::String rep = state->__Field(HX_CSTRING("rep"),true);		HX_STACK_VAR(rep,"rep");
		HX_STACK_LINE(844)
		::String _g = ::haxe::io::Path_obj::removeTrailingSlashes((((rep + HX_CSTRING("/")) + p) + HX_CSTRING("/git")));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(844)
		if (((  ((::sys::FileSystem_obj::sys_exists(_g))) ? bool(::sys::FileSystem_obj::isDirectory((((rep + HX_CSTRING("/")) + p) + HX_CSTRING("/git")))) : bool(false) ))){
			HX_STACK_LINE(845)
			this->checkGit();
			HX_STACK_LINE(846)
			::String oldCwd = ::Sys_obj::getCwd();		HX_STACK_VAR(oldCwd,"oldCwd");
			HX_STACK_LINE(847)
			::Sys_obj::setCwd((((rep + HX_CSTRING("/")) + p) + HX_CSTRING("/git")));
			HX_STACK_LINE(848)
			bool doGitPull = true;		HX_STACK_VAR(doGitPull,"doGitPull");
			HX_STACK_LINE(849)
			int _g1 = ::Sys_obj::command(HX_CSTRING("git diff --exit-code"),null());		HX_STACK_VAR(_g1,"_g1");
			struct _Function_2_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",849,0xb1b3c261)
					{
						HX_STACK_LINE(849)
						int _g2 = ::Sys_obj::command(HX_CSTRING("git diff --cached --exit-code"),null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(849)
						return ((int)0 != _g2);
					}
					return null();
				}
			};
			HX_STACK_LINE(849)
			if (((  ((!((((int)0 != _g1))))) ? bool(_Function_2_1::Block()) : bool(true) ))){
				HX_STACK_LINE(850)
				::tools::haxelib::Answer _g2 = this->ask(((HX_CSTRING("Reset changes to ") + p) + HX_CSTRING(" git repo so we can pull latest version?")));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(850)
				switch( (int)(_g2->__Index())){
					case (int)0: case (int)2: {
						HX_STACK_LINE(852)
						::Sys_obj::command(HX_CSTRING("git reset --hard"),null());
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(854)
						doGitPull = false;
						HX_STACK_LINE(855)
						::tools::haxelib::Main_obj::print(HX_CSTRING("Git repo left untouched"));
					}
					;break;
				}
			}
			HX_STACK_LINE(858)
			if ((doGitPull)){
				HX_STACK_LINE(859)
				::Sys_obj::command(HX_CSTRING("git pull"),null());
			}
			HX_STACK_LINE(861)
			state->__FieldRef(HX_CSTRING("updated")) = true;
			HX_STACK_LINE(862)
			::Sys_obj::setCwd(oldCwd);
		}
		else{
			HX_STACK_LINE(864)
			Dynamic inf;		HX_STACK_VAR(inf,"inf");
			HX_STACK_LINE(864)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(864)
				inf = this->site->infos(p);
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(864)
						::Sys_obj::println(e);
						HX_STACK_LINE(864)
						return null();
					}
				}
			}
			struct _Function_2_1{
				inline static bool Block( ::String &rep,Dynamic &inf,::String &p){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",865,0xb1b3c261)
					{
						HX_STACK_LINE(865)
						::String _g3 = ::tools::haxelib::Data_obj::safe(p);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(865)
						::String _g4 = (rep + _g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(865)
						::String _g5 = (_g4 + HX_CSTRING("/"));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(865)
						::String _g6 = ::tools::haxelib::Data_obj::safe(inf->__Field(HX_CSTRING("curversion"),true));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(865)
						::String path = (_g5 + _g6);		HX_STACK_VAR(path,"path");
						HX_STACK_LINE(865)
						::String _g7 = ::haxe::io::Path_obj::removeTrailingSlashes(path);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(865)
						return ::sys::FileSystem_obj::sys_exists(_g7);
					}
					return null();
				}
			};
			HX_STACK_LINE(865)
			if ((!(_Function_2_1::Block(rep,inf,p)))){
				HX_STACK_LINE(866)
				if ((state->__Field(HX_CSTRING("prompt"),true))){
					HX_STACK_LINE(867)
					::tools::haxelib::Answer _g1 = this->ask((((HX_CSTRING("Upgrade ") + p) + HX_CSTRING(" to ")) + inf->__Field(HX_CSTRING("curversion"),true)));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(867)
					switch( (int)(_g1->__Index())){
						case (int)0: {
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(869)
							state->__FieldRef(HX_CSTRING("prompt")) = false;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(871)
							return null();
						}
						;break;
					}
				}
				HX_STACK_LINE(873)
				this->doInstall(p,inf->__Field(HX_CSTRING("curversion"),true),true);
				HX_STACK_LINE(874)
				state->__FieldRef(HX_CSTRING("updated")) = true;
			}
			else{
				HX_STACK_LINE(876)
				this->setCurrent(p,inf->__Field(HX_CSTRING("curversion"),true),true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,doUpdate,(void))

bool Main_obj::updateByName( ::String prj){
	HX_STACK_FRAME("tools.haxelib.Main","updateByName",0x515b947e,"tools.haxelib.Main.updateByName","tools/haxelib/Main.hx",879,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(prj,"prj")
	HX_STACK_LINE(880)
	::String _g = this->getRepository(null());		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_g){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",880,0xb1b3c261)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("rep") , _g,false);
				__result->Add(HX_CSTRING("prompt") , false,false);
				__result->Add(HX_CSTRING("updated") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(880)
	Dynamic state = _Function_1_1::Block(_g);		HX_STACK_VAR(state,"state");
	HX_STACK_LINE(881)
	this->doUpdate(prj,state);
	HX_STACK_LINE(882)
	return state->__Field(HX_CSTRING("updated"),true);
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,updateByName,return )

Void Main_obj::update( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","update",0xcf49579c,"tools.haxelib.Main.update","tools/haxelib/Main.hx",884,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(885)
		::String prj = this->param(HX_CSTRING("Library"),null());		HX_STACK_VAR(prj,"prj");
		HX_STACK_LINE(886)
		if ((!(this->updateByName(prj)))){
			HX_STACK_LINE(887)
			::tools::haxelib::Main_obj::print((prj + HX_CSTRING(" is up to date")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,update,(void))

Void Main_obj::updateSelf( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","updateSelf",0x8ded0d48,"tools.haxelib.Main.updateSelf","tools/haxelib/Main.hx",890,0xb1b3c261)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		::haxe::ds::Option run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","tools/haxelib/Main.hx",891,0xb1b3c261)
			{
				HX_STACK_LINE(892)
				::sys::io::Process p = ::sys::io::Process_obj::__new(HX_CSTRING("haxe"),Array_obj< ::String >::__new().Add(HX_CSTRING("-neko")).Add(HX_CSTRING("test.n")).Add(HX_CSTRING("-lib")).Add(HX_CSTRING("haxelib_client")).Add(HX_CSTRING("-main")).Add(HX_CSTRING("tools.haxelib.Main")).Add(HX_CSTRING("--no-output")));		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(894)
				int _g = p->exitCode();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(894)
				if (((_g == (int)0))){
					HX_STACK_LINE(894)
					return ::haxe::ds::Option_obj::None;
				}
				else{
					HX_STACK_LINE(895)
					::String _g1 = p->_stderr->readAll(null())->toString();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(895)
					return ::haxe::ds::Option_obj::Some(_g1);
				}
				HX_STACK_LINE(894)
				return null();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(891)
		Dynamic tryBuild =  Dynamic(new _Function_1_1());		HX_STACK_VAR(tryBuild,"tryBuild");
		HX_STACK_LINE(899)
		Dynamic realPath;		HX_STACK_VAR(realPath,"realPath");
		HX_STACK_LINE(899)
		{
			HX_STACK_LINE(899)
			Dynamic realPath1 = Dynamic( Array_obj<Dynamic>::__new().Add(null()));		HX_STACK_VAR(realPath1,"realPath1");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,realPath1)
			::String run(::String path){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","tools/haxelib/Main.hx",900,0xb1b3c261)
				HX_STACK_ARG(path,"path")
				{
					HX_STACK_LINE(900)
					::String _g = ::sys::io::Process_obj::__new(HX_CSTRING("readlink"),Array_obj< ::String >::__new().Add((  ((::StringTools_obj::endsWith(path,HX_CSTRING("\n")))) ? ::String(path.substr((int)0,(path.length - (int)1))) : ::String(path) )))->_stdout->readAll(null())->toString();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(900)
					::String targetPath = _g;		HX_STACK_VAR(targetPath,"targetPath");
					HX_STACK_LINE(900)
					::String _switch_4 = (_g);
					if (  ( _switch_4==HX_CSTRING(""))){
						HX_STACK_LINE(902)
						return path;
					}
					else  {
						HX_STACK_LINE(904)
						return realPath1->__GetItem((int)0)(((::haxe::io::Path_obj::__new(path)->dir + HX_CSTRING("/")) + targetPath)).Cast< ::String >();
					}
;
;
					HX_STACK_LINE(900)
					return null();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_STACK_LINE(899)
			hx::IndexRef((realPath1).mPtr,(int)0) =  Dynamic(new _Function_2_1(realPath1));
			HX_STACK_LINE(899)
			realPath = realPath1->__GetItem((int)0);
		}
		HX_STACK_LINE(908)
		if ((this->updateByName(HX_CSTRING("haxelib_client")))){
			HX_STACK_LINE(909)
			::tools::haxelib::Main_obj::print(HX_CSTRING("Haxelib successfully updated."));
		}
		else{
			HX_STACK_LINE(911)
			::tools::haxelib::Main_obj::print(HX_CSTRING("Haxelib was already up to date..."));
		}
		HX_STACK_LINE(913)
		{
			HX_STACK_LINE(913)
			::haxe::ds::Option _g = tryBuild().Cast< ::haxe::ds::Option >();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(913)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(915)
					::String _g2 = ::Sys_obj::systemName();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(915)
					bool win = (_g2 == HX_CSTRING("Windows"));		HX_STACK_VAR(win,"win");
					HX_STACK_LINE(917)
					::String haxepath;		HX_STACK_VAR(haxepath,"haxepath");
					HX_STACK_LINE(917)
					if ((win)){
						HX_STACK_LINE(917)
						haxepath = ::Sys_obj::getEnv(HX_CSTRING("HAXEPATH"));
					}
					else{
						HX_STACK_LINE(918)
						haxepath = (::haxe::io::Path_obj::__new(realPath(::sys::io::Process_obj::__new(HX_CSTRING("which"),Array_obj< ::String >::__new().Add(HX_CSTRING("haxelib")))->_stdout->readAll(null())->toString()).Cast< ::String >())->dir + HX_CSTRING("/"));
					}
					HX_STACK_LINE(920)
					if (((haxepath == null()))){
						HX_STACK_LINE(921)
						HX_STACK_DO_THROW((  ((win)) ? ::String(HX_CSTRING("HAXEPATH environment variable not defined")) : ::String(HX_CSTRING("unable to locate haxelib through `which haxelib`")) ));
					}
					else{
						HX_STACK_LINE(923)
						::String _g3 = ::haxe::io::Path_obj::addTrailingSlash(haxepath);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(923)
						haxepath = _g3;
					}
					HX_STACK_LINE(925)
					if ((win)){
						HX_STACK_LINE(926)
						::sys::io::File_obj::saveContent(HX_CSTRING("update.hxml"),HX_CSTRING("-lib haxelib_client\n--run tools.haxelib.Rebuild"));
						HX_STACK_LINE(927)
						::Sys_obj::println(HX_CSTRING("Please run haxe update.hxml"));
					}
					else{
						HX_STACK_LINE(930)
						::sys::io::Process p = ::sys::io::Process_obj::__new(HX_CSTRING("haxelib"),Array_obj< ::String >::__new().Add(HX_CSTRING("path")).Add(HX_CSTRING("haxelib_client")));		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(931)
						int _g4 = p->exitCode();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(931)
						if (((_g4 == (int)0))){
							HX_STACK_LINE(932)
							Array< ::String > args = Array_obj< ::String >::__new();		HX_STACK_VAR(args,"args");
							HX_STACK_LINE(933)
							{
								HX_STACK_LINE(933)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(933)
								Array< ::String > _g21 = p->_stdout->readAll(null())->toString().split(HX_CSTRING("\n"));		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(933)
								while((true)){
									HX_STACK_LINE(933)
									if ((!(((_g1 < _g21->length))))){
										HX_STACK_LINE(933)
										break;
									}
									HX_STACK_LINE(933)
									::String arg = _g21->__get(_g1);		HX_STACK_VAR(arg,"arg");
									HX_STACK_LINE(933)
									++(_g1);
									HX_STACK_LINE(934)
									::String _g5 = ::StringTools_obj::trim(arg);		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(934)
									arg = _g5;
									HX_STACK_LINE(935)
									::String _g6 = arg.charAt((int)0);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(935)
									if (((_g6 == HX_CSTRING("-")))){
										HX_STACK_LINE(936)
										args->push(arg);
									}
									else{
										HX_STACK_LINE(937)
										if (((arg.length > (int)0))){
											HX_STACK_LINE(938)
											args->push(((HX_CSTRING("-cp \"") + arg) + HX_CSTRING("\"")));
										}
									}
								}
							}
							HX_STACK_LINE(941)
							::String file = (haxepath + HX_CSTRING("haxelib"));		HX_STACK_VAR(file,"file");
							HX_STACK_LINE(944)
							::String _g7 = args->join(HX_CSTRING(" "));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(944)
							::String _g8 = (HX_CSTRING("#!/bin/sh\nexec haxe ") + _g7);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(944)
							::String _g9 = (_g8 + HX_CSTRING(" --run tools.haxelib.Main \"$@\""));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(942)
							try
							{
							HX_STACK_CATCHABLE(Dynamic, 0);
							{
								HX_STACK_LINE(942)
								::sys::io::File_obj::saveContent(file,_g9);
							}
							}
							catch(Dynamic __e){
								{
									HX_STACK_BEGIN_CATCH
									Dynamic e = __e;{
										HX_STACK_LINE(947)
										::String _g10 = ::Std_obj::string(e);		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(947)
										HX_STACK_DO_THROW((((HX_CSTRING("Error writing file ") + file) + HX_CSTRING(". Please ensure you have write permissions. \n  ")) + _g10));
									}
								}
							}
						}
						else{
							HX_STACK_LINE(949)
							HX_STACK_DO_THROW(p->_stdout->readAll(null()));
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(913)
					::String error = (::haxe::ds::Option(_g))->__Param(0);		HX_STACK_VAR(error,"error");
					HX_STACK_LINE(952)
					HX_STACK_DO_THROW((HX_CSTRING("Error compiling haxelib client: ") + error));
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,updateSelf,(void))

Void Main_obj::deleteRec( ::String dir){
{
		HX_STACK_FRAME("tools.haxelib.Main","deleteRec",0x7c292a32,"tools.haxelib.Main.deleteRec","tools/haxelib/Main.hx",956,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dir,"dir")
		HX_STACK_LINE(957)
		{
			HX_STACK_LINE(957)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(957)
			Array< ::String > _g1 = ::sys::FileSystem_obj::readDirectory(dir);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(957)
			while((true)){
				HX_STACK_LINE(957)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(957)
					break;
				}
				HX_STACK_LINE(957)
				::String p = _g1->__get(_g);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(957)
				++(_g);
				HX_STACK_LINE(958)
				::String path = ((dir + HX_CSTRING("/")) + p);		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(959)
				if ((::sys::FileSystem_obj::isDirectory(path))){
					HX_STACK_LINE(960)
					this->deleteRec(path);
				}
				else{
					HX_STACK_LINE(962)
					this->safeDelete(path);
				}
			}
		}
		HX_STACK_LINE(964)
		::sys::FileSystem_obj::deleteDirectory(dir);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,deleteRec,(void))

Void Main_obj::remove( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","remove",0x4ccc6dd7,"tools.haxelib.Main.remove","tools/haxelib/Main.hx",967,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(968)
		::String prj = this->param(HX_CSTRING("Library"),null());		HX_STACK_VAR(prj,"prj");
		HX_STACK_LINE(969)
		::String version = this->paramOpt();		HX_STACK_VAR(version,"version");
		HX_STACK_LINE(970)
		::String rep = this->getRepository(null());		HX_STACK_VAR(rep,"rep");
		HX_STACK_LINE(971)
		::String _g = ::tools::haxelib::Data_obj::safe(prj);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(971)
		::String pdir = (rep + _g);		HX_STACK_VAR(pdir,"pdir");
		HX_STACK_LINE(972)
		if (((version == null()))){
			HX_STACK_LINE(973)
			::String _g1 = ::haxe::io::Path_obj::removeTrailingSlashes(pdir);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(973)
			if ((!(::sys::FileSystem_obj::sys_exists(_g1)))){
				HX_STACK_LINE(974)
				HX_STACK_DO_THROW(((HX_CSTRING("Library ") + prj) + HX_CSTRING(" is not installed")));
			}
			HX_STACK_LINE(975)
			this->deleteRec(pdir);
			HX_STACK_LINE(976)
			::tools::haxelib::Main_obj::print(((HX_CSTRING("Library ") + prj) + HX_CSTRING(" removed")));
			HX_STACK_LINE(977)
			return null();
		}
		HX_STACK_LINE(980)
		::String _g2 = ::tools::haxelib::Data_obj::safe(version);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(980)
		::String vdir = ((pdir + HX_CSTRING("/")) + _g2);		HX_STACK_VAR(vdir,"vdir");
		HX_STACK_LINE(981)
		::String _g3 = ::haxe::io::Path_obj::removeTrailingSlashes(vdir);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(981)
		if ((!(::sys::FileSystem_obj::sys_exists(_g3)))){
			HX_STACK_LINE(982)
			HX_STACK_DO_THROW(((((HX_CSTRING("Library ") + prj) + HX_CSTRING(" does not have version ")) + version) + HX_CSTRING(" installed")));
		}
		HX_STACK_LINE(984)
		::String cur = this->getCurrent(pdir);		HX_STACK_VAR(cur,"cur");
		HX_STACK_LINE(985)
		if (((cur == version))){
			HX_STACK_LINE(986)
			HX_STACK_DO_THROW((HX_CSTRING("Can't remove current version of library ") + prj));
		}
		HX_STACK_LINE(987)
		this->deleteRec(vdir);
		HX_STACK_LINE(988)
		::tools::haxelib::Main_obj::print(((((HX_CSTRING("Library ") + prj) + HX_CSTRING(" version ")) + version) + HX_CSTRING(" removed")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,remove,(void))

Void Main_obj::set( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","set",0x75b9602f,"tools.haxelib.Main.set","tools/haxelib/Main.hx",991,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(992)
		::String prj = this->param(HX_CSTRING("Library"),null());		HX_STACK_VAR(prj,"prj");
		HX_STACK_LINE(993)
		::String version = this->param(HX_CSTRING("Version"),null());		HX_STACK_VAR(version,"version");
		HX_STACK_LINE(994)
		this->setCurrent(prj,version,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,set,(void))

Void Main_obj::setCurrent( ::String prj,::String version,bool doAsk){
{
		HX_STACK_FRAME("tools.haxelib.Main","setCurrent",0xa7aa57ca,"tools.haxelib.Main.setCurrent","tools/haxelib/Main.hx",997,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prj,"prj")
		HX_STACK_ARG(version,"version")
		HX_STACK_ARG(doAsk,"doAsk")
		HX_STACK_LINE(998)
		::String _g = this->getRepository(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(998)
		::String _g1 = ::tools::haxelib::Data_obj::safe(prj);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(998)
		::String pdir = (_g + _g1);		HX_STACK_VAR(pdir,"pdir");
		HX_STACK_LINE(999)
		::String _g2 = ::tools::haxelib::Data_obj::safe(version);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(999)
		::String vdir = ((pdir + HX_CSTRING("/")) + _g2);		HX_STACK_VAR(vdir,"vdir");
		HX_STACK_LINE(1000)
		::String _g3 = ::haxe::io::Path_obj::removeTrailingSlashes(vdir);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1000)
		if ((!(::sys::FileSystem_obj::sys_exists(_g3)))){
			HX_STACK_LINE(1001)
			::tools::haxelib::Main_obj::print(((((HX_CSTRING("Library ") + prj) + HX_CSTRING(" version ")) + version) + HX_CSTRING(" is not installed")));
			HX_STACK_LINE(1002)
			::tools::haxelib::Answer _g4 = this->ask(HX_CSTRING("Would you like to install it?"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1002)
			if (((_g4 != ::tools::haxelib::Answer_obj::No))){
				HX_STACK_LINE(1003)
				this->doInstall(prj,version,true);
			}
			HX_STACK_LINE(1004)
			return null();
		}
		HX_STACK_LINE(1006)
		::String _g5 = this->getCurrent(pdir);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1006)
		if (((_g5 == version))){
			HX_STACK_LINE(1007)
			return null();
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::tools::haxelib::Main_obj > __this,::String &version,::String &prj){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",1008,0xb1b3c261)
				{
					HX_STACK_LINE(1008)
					::tools::haxelib::Answer _g6 = __this->ask((((HX_CSTRING("Set ") + prj) + HX_CSTRING(" to version ")) + version));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1008)
					return (_g6 == ::tools::haxelib::Answer_obj::No);
				}
				return null();
			}
		};
		HX_STACK_LINE(1008)
		if (((  ((doAsk)) ? bool(_Function_1_1::Block(this,version,prj)) : bool(false) ))){
			HX_STACK_LINE(1009)
			return null();
		}
		HX_STACK_LINE(1010)
		::sys::io::File_obj::saveContent((pdir + HX_CSTRING("/.current")),version);
		HX_STACK_LINE(1011)
		::tools::haxelib::Main_obj::print((((HX_CSTRING("Library ") + prj) + HX_CSTRING(" current version is now ")) + version));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Main_obj,setCurrent,(void))

Void Main_obj::checkRec( ::String prj,::String version,::List l){
{
		HX_STACK_FRAME("tools.haxelib.Main","checkRec",0x6af341bb,"tools.haxelib.Main.checkRec","tools/haxelib/Main.hx",1014,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prj,"prj")
		HX_STACK_ARG(version,"version")
		HX_STACK_ARG(l,"l")
		HX_STACK_LINE(1015)
		::String _g = this->getRepository(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1015)
		::String _g1 = ::tools::haxelib::Data_obj::safe(prj);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1015)
		::String pdir = (_g + _g1);		HX_STACK_VAR(pdir,"pdir");
		HX_STACK_LINE(1016)
		::String _g2 = ::haxe::io::Path_obj::removeTrailingSlashes(pdir);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1016)
		if ((!(::sys::FileSystem_obj::sys_exists(_g2)))){
			HX_STACK_LINE(1017)
			HX_STACK_DO_THROW(((((HX_CSTRING("Library ") + prj) + HX_CSTRING(" is not installed : run 'haxelib install ")) + prj) + HX_CSTRING("'")));
		}
		HX_STACK_LINE(1018)
		::String version1;		HX_STACK_VAR(version1,"version1");
		HX_STACK_LINE(1018)
		if (((version != null()))){
			HX_STACK_LINE(1018)
			version1 = version;
		}
		else{
			HX_STACK_LINE(1018)
			version1 = this->getCurrent(pdir);
		}
		HX_STACK_LINE(1019)
		::String _g3 = ::tools::haxelib::Data_obj::safe(version1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1019)
		::String vdir = ((pdir + HX_CSTRING("/")) + _g3);		HX_STACK_VAR(vdir,"vdir");
		HX_STACK_LINE(1020)
		if ((::StringTools_obj::endsWith(vdir,HX_CSTRING("dev")))){
			HX_STACK_LINE(1021)
			::String _g4 = this->getDev(pdir);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1021)
			vdir = _g4;
		}
		HX_STACK_LINE(1022)
		::String _g5 = ::haxe::io::Path_obj::removeTrailingSlashes(vdir);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(1022)
		if ((!(::sys::FileSystem_obj::sys_exists(_g5)))){
			HX_STACK_LINE(1023)
			HX_STACK_DO_THROW(((((HX_CSTRING("Library ") + prj) + HX_CSTRING(" version ")) + version1) + HX_CSTRING(" is not installed")));
		}
		HX_STACK_LINE(1024)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(l->iterator());  __it->hasNext(); ){
			Dynamic p = __it->next();
			if (((p->__Field(HX_CSTRING("project"),true) == prj))){
				HX_STACK_LINE(1026)
				if (((p->__Field(HX_CSTRING("version"),true) == version1))){
					HX_STACK_LINE(1027)
					return null();
				}
				HX_STACK_LINE(1028)
				HX_STACK_DO_THROW((((((HX_CSTRING("Library ") + prj) + HX_CSTRING(" has two version included ")) + version1) + HX_CSTRING(" and ")) + p->__Field(HX_CSTRING("version"),true)));
			}
;
		}
		HX_STACK_LINE(1030)
		::String json;		HX_STACK_VAR(json,"json");
		HX_STACK_LINE(1030)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1030)
			json = ::sys::io::File_obj::getContent(((vdir + HX_CSTRING("/")) + ::tools::haxelib::Data_obj::JSON));
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1030)
					json = null();
				}
			}
		}
		HX_STACK_LINE(1031)
		Dynamic inf = ::tools::haxelib::Data_obj::readData(json,false);		HX_STACK_VAR(inf,"inf");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &inf,::String &prj,::String &version1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",1032,0xb1b3c261)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("project") , prj,false);
					__result->Add(HX_CSTRING("version") , version1,false);
					__result->Add(HX_CSTRING("info") , inf,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1032)
		l->add(_Function_1_1::Block(inf,prj,version1));
		HX_STACK_LINE(1033)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(inf->__Field(HX_CSTRING("dependencies"),true)->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic d = __it->next();
			{
				HX_STACK_LINE(1033)
				Dynamic d1 = Dynamic( Array_obj<Dynamic>::__new().Add(d));		HX_STACK_VAR(d1,"d1");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,d1)
				bool run(Dynamic e){
					HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","tools/haxelib/Main.hx",1034,0xb1b3c261)
					HX_STACK_ARG(e,"e")
					{
						HX_STACK_LINE(1034)
						return (e->__Field(HX_CSTRING("project"),true) == d1->__GetItem((int)0)->__Field(HX_CSTRING("project"),true));
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(1034)
				if ((!(::Lambda_obj::exists(l, Dynamic(new _Function_2_1(d1)))))){
					HX_STACK_LINE(1035)
					this->checkRec(d1->__GetItem((int)0)->__Field(HX_CSTRING("project"),true),(  (((d1->__GetItem((int)0)->__Field(HX_CSTRING("version"),true) == HX_CSTRING("")))) ? ::String(null()) : ::String(d1->__GetItem((int)0)->__Field(HX_CSTRING("version"),true)) ),l);
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Main_obj,checkRec,(void))

Void Main_obj::dev( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","dev",0x75adfe62,"tools.haxelib.Main.dev","tools/haxelib/Main.hx",1078,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1079)
		::String rep = this->getRepository(null());		HX_STACK_VAR(rep,"rep");
		HX_STACK_LINE(1080)
		::String project = this->param(HX_CSTRING("Library"),null());		HX_STACK_VAR(project,"project");
		HX_STACK_LINE(1081)
		::String dir = this->paramOpt();		HX_STACK_VAR(dir,"dir");
		HX_STACK_LINE(1082)
		::String _g = ::tools::haxelib::Data_obj::safe(project);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1082)
		::String proj = (rep + _g);		HX_STACK_VAR(proj,"proj");
		HX_STACK_LINE(1083)
		::String _g1 = ::haxe::io::Path_obj::removeTrailingSlashes(proj);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1083)
		if ((!(::sys::FileSystem_obj::sys_exists(_g1)))){
			HX_STACK_LINE(1084)
			::sys::FileSystem_obj::createDirectory(proj);
			HX_STACK_LINE(1085)
			::sys::io::File_obj::saveContent((proj + HX_CSTRING("/.current")),HX_CSTRING("dev"));
		}
		HX_STACK_LINE(1087)
		::String devfile = (proj + HX_CSTRING("/.dev"));		HX_STACK_VAR(devfile,"devfile");
		HX_STACK_LINE(1088)
		if (((dir == null()))){
			HX_STACK_LINE(1089)
			::String _g2 = ::haxe::io::Path_obj::removeTrailingSlashes(devfile);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1089)
			if ((::sys::FileSystem_obj::sys_exists(_g2))){
				HX_STACK_LINE(1090)
				::sys::FileSystem_obj::deleteFile(devfile);
			}
			HX_STACK_LINE(1091)
			::tools::haxelib::Main_obj::print(HX_CSTRING("Development directory disabled"));
		}
		else{
			HX_STACK_LINE(1094)
			while((true)){
				HX_STACK_LINE(1094)
				if ((!(((  ((!(::StringTools_obj::endsWith(dir,HX_CSTRING("/"))))) ? bool(::StringTools_obj::endsWith(dir,HX_CSTRING("\\"))) : bool(true) ))))){
					HX_STACK_LINE(1094)
					break;
				}
				HX_STACK_LINE(1095)
				::String _g3 = dir.substr((int)0,(int)-1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1095)
				dir = _g3;
			}
			HX_STACK_LINE(1097)
			::String _g4 = ::sys::FileSystem_obj::fullPath(dir);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1097)
			dir = _g4;
			HX_STACK_LINE(1098)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(1099)
				::sys::io::File_obj::saveContent(devfile,dir);
				HX_STACK_LINE(1100)
				::tools::haxelib::Main_obj::print((HX_CSTRING("Development directory set to ") + dir));
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(1103)
						::tools::haxelib::Main_obj::print((HX_CSTRING("Could not write to ") + devfile));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,dev,(void))

Void Main_obj::checkGit( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","checkGit",0x6aeaec7d,"tools.haxelib.Main.checkGit","tools/haxelib/Main.hx",1109,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1109)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		bool run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","tools/haxelib/Main.hx",1111,0xb1b3c261)
			{
				HX_STACK_LINE(1111)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(1111)
					_g->__get((int)0).StaticCast< ::tools::haxelib::Main >()->command(HX_CSTRING("git"),Array_obj< ::String >::__new());
					HX_STACK_LINE(1111)
					return true;
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(1111)
							return false;
						}
					}
				}
				HX_STACK_LINE(1111)
				return false;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0(return)

		HX_STACK_LINE(1110)
		Dynamic gitExists =  Dynamic(new _Function_1_1(_g));		HX_STACK_VAR(gitExists,"gitExists");
		HX_STACK_LINE(1112)
		if ((gitExists().Cast< bool >())){
			HX_STACK_LINE(1113)
			return null();
		}
		HX_STACK_LINE(1115)
		::EReg match = ::EReg_obj::__new(HX_CSTRING("(.*)git([\\\\|/])cmd$"),HX_CSTRING(""));		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(1116)
		{
			HX_STACK_LINE(1116)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1116)
			Array< ::String > _g11 = ::Sys_obj::getEnv(HX_CSTRING("PATH")).split(HX_CSTRING(";"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1116)
			while((true)){
				HX_STACK_LINE(1116)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(1116)
					break;
				}
				HX_STACK_LINE(1116)
				::String path = _g11->__get(_g1);		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(1116)
				++(_g1);
				HX_STACK_LINE(1117)
				::String _g2 = path.toLowerCase();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1117)
				if ((match->match(_g2))){
					HX_STACK_LINE(1119)
					::String _g12 = match->matched((int)1);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(1119)
					::String _g21 = (_g12 + HX_CSTRING("git"));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(1119)
					::String _g3 = match->matched((int)2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1119)
					::String _g4 = (_g21 + _g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1119)
					::String newPath = (_g4 + HX_CSTRING("bin"));		HX_STACK_VAR(newPath,"newPath");
					HX_STACK_LINE(1120)
					::String _g5 = ::Sys_obj::getEnv(HX_CSTRING("PATH"));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1120)
					::String _g6 = (_g5 + HX_CSTRING(";"));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1120)
					::String _g7 = (_g6 + newPath);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1120)
					::Sys_obj::putEnv(HX_CSTRING("PATH"),_g7);
				}
			}
		}
		HX_STACK_LINE(1123)
		if ((gitExists().Cast< bool >())){
			HX_STACK_LINE(1124)
			return null();
		}
		HX_STACK_LINE(1126)
		{
			HX_STACK_LINE(1126)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1126)
			Array< ::String > _g11 = Array_obj< ::String >::__new().Add(HX_CSTRING("C:\\Program Files (x86)\\Git\\bin")).Add(HX_CSTRING("C:\\Progra~1\\Git\\bin"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1126)
			while((true)){
				HX_STACK_LINE(1126)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(1126)
					break;
				}
				HX_STACK_LINE(1126)
				::String path = _g11->__get(_g1);		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(1126)
				++(_g1);
				HX_STACK_LINE(1127)
				::String _g8 = ::haxe::io::Path_obj::removeTrailingSlashes(path);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(1127)
				if ((::sys::FileSystem_obj::sys_exists(_g8))){
					HX_STACK_LINE(1128)
					::String _g9 = ::Sys_obj::getEnv(HX_CSTRING("PATH"));		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1128)
					::String _g10 = (_g9 + HX_CSTRING(";"));		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(1128)
					::String _g111 = (_g10 + path);		HX_STACK_VAR(_g111,"_g111");
					HX_STACK_LINE(1128)
					::Sys_obj::putEnv(HX_CSTRING("PATH"),_g111);
					HX_STACK_LINE(1129)
					if ((gitExists().Cast< bool >())){
						HX_STACK_LINE(1130)
						return null();
					}
				}
			}
		}
		HX_STACK_LINE(1132)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Could not execute git, please make sure it is installed and available in your PATH."));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,checkGit,(void))

Void Main_obj::git( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","git",0x75b0489f,"tools.haxelib.Main.git","tools/haxelib/Main.hx",1135,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1136)
		::String libName = this->param(HX_CSTRING("Library name"),null());		HX_STACK_VAR(libName,"libName");
		HX_STACK_LINE(1137)
		::String rep = this->getRepository(null());		HX_STACK_VAR(rep,"rep");
		HX_STACK_LINE(1138)
		::String _g = ::tools::haxelib::Data_obj::safe(libName);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1138)
		::String proj = (rep + _g);		HX_STACK_VAR(proj,"proj");
		HX_STACK_LINE(1139)
		::String libPath = (proj + HX_CSTRING("/git"));		HX_STACK_VAR(libPath,"libPath");
		HX_STACK_LINE(1141)
		::String _g1 = ::haxe::io::Path_obj::removeTrailingSlashes(libPath);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1141)
		if ((::sys::FileSystem_obj::sys_exists(_g1))){
			HX_STACK_LINE(1142)
			this->deleteRec(libPath);
		}
		HX_STACK_LINE(1144)
		::String gitPath = this->param(HX_CSTRING("Git path"),null());		HX_STACK_VAR(gitPath,"gitPath");
		HX_STACK_LINE(1145)
		::String branch = this->paramOpt();		HX_STACK_VAR(branch,"branch");
		HX_STACK_LINE(1146)
		::String subDir = this->paramOpt();		HX_STACK_VAR(subDir,"subDir");
		HX_STACK_LINE(1148)
		::tools::haxelib::Main_obj::print((((HX_CSTRING("Installing ") + libName) + HX_CSTRING(" from ")) + gitPath));
		HX_STACK_LINE(1149)
		this->checkGit();
		HX_STACK_LINE(1151)
		int _g2 = ::Sys_obj::command(((((HX_CSTRING("git clone \"") + gitPath) + HX_CSTRING("\" \"")) + libPath) + HX_CSTRING("\"")),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1151)
		if (((_g2 != (int)0))){
			HX_STACK_LINE(1152)
			::tools::haxelib::Main_obj::print(HX_CSTRING("Could not clone git repository"));
			HX_STACK_LINE(1153)
			return null();
		}
		HX_STACK_LINE(1155)
		::Sys_obj::setCwd(libPath);
		HX_STACK_LINE(1156)
		if (((branch != null()))){
			HX_STACK_LINE(1157)
			Dynamic ret = this->command(HX_CSTRING("git"),Array_obj< ::String >::__new().Add(HX_CSTRING("checkout")).Add(branch));		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(1158)
			if (((ret->__Field(HX_CSTRING("code"),true) != (int)0))){
				HX_STACK_LINE(1160)
				::tools::haxelib::Main_obj::print((((HX_CSTRING("Could not checkout branch, tag or path \"") + branch) + HX_CSTRING("\": ")) + ret->__Field(HX_CSTRING("out"),true)));
				HX_STACK_LINE(1161)
				this->deleteRec(libPath);
				HX_STACK_LINE(1162)
				return null();
			}
		}
		HX_STACK_LINE(1165)
		::String devPath;		HX_STACK_VAR(devPath,"devPath");
		HX_STACK_LINE(1165)
		devPath = (libPath + ((  (((subDir == null()))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING("/") + subDir)) )));
		HX_STACK_LINE(1167)
		::Sys_obj::setCwd(proj);
		HX_STACK_LINE(1168)
		::sys::io::File_obj::saveContent(HX_CSTRING(".current"),HX_CSTRING("dev"));
		HX_STACK_LINE(1169)
		::sys::io::File_obj::saveContent(HX_CSTRING(".dev"),devPath);
		HX_STACK_LINE(1170)
		::tools::haxelib::Main_obj::print(((HX_CSTRING("Library ") + libName) + HX_CSTRING(" set to use git.")));
		HX_STACK_LINE(1171)
		if (((branch != null()))){
			HX_STACK_LINE(1171)
			::tools::haxelib::Main_obj::print((HX_CSTRING("  Branch/Tag/Rev: ") + branch));
		}
		HX_STACK_LINE(1172)
		::tools::haxelib::Main_obj::print((HX_CSTRING("  Path: ") + devPath));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,git,(void))

Void Main_obj::run( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","run",0x75b8abd8,"tools.haxelib.Main.run","tools/haxelib/Main.hx",1175,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1176)
		::String rep = this->getRepository(null());		HX_STACK_VAR(rep,"rep");
		HX_STACK_LINE(1177)
		::String project = this->param(HX_CSTRING("Library"),null());		HX_STACK_VAR(project,"project");
		HX_STACK_LINE(1178)
		Array< ::String > temp = project.split(HX_CSTRING(":"));		HX_STACK_VAR(temp,"temp");
		HX_STACK_LINE(1179)
		project = temp->__get((int)0);
		HX_STACK_LINE(1180)
		::String _g = ::tools::haxelib::Data_obj::safe(project);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1180)
		::String pdir = (rep + _g);		HX_STACK_VAR(pdir,"pdir");
		HX_STACK_LINE(1181)
		::String _g1 = ::haxe::io::Path_obj::removeTrailingSlashes(pdir);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1181)
		if ((!(::sys::FileSystem_obj::sys_exists(_g1)))){
			HX_STACK_LINE(1182)
			HX_STACK_DO_THROW(((HX_CSTRING("Library ") + project) + HX_CSTRING(" is not installed")));
		}
		HX_STACK_LINE(1183)
		hx::AddEq(pdir,HX_CSTRING("/"));
		HX_STACK_LINE(1184)
		::String version;		HX_STACK_VAR(version,"version");
		HX_STACK_LINE(1184)
		if (((temp->__get((int)1) != null()))){
			HX_STACK_LINE(1184)
			version = temp->__get((int)1);
		}
		else{
			HX_STACK_LINE(1184)
			version = this->getCurrent(pdir);
		}
		HX_STACK_LINE(1185)
		::String dev;		HX_STACK_VAR(dev,"dev");
		HX_STACK_LINE(1185)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1185)
			dev = this->getDev(pdir);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1185)
					dev = null();
				}
			}
		}
		HX_STACK_LINE(1186)
		::String vdir;		HX_STACK_VAR(vdir,"vdir");
		HX_STACK_LINE(1186)
		if (((dev != null()))){
			HX_STACK_LINE(1186)
			vdir = dev;
		}
		else{
			HX_STACK_LINE(1186)
			::String _g2 = ::tools::haxelib::Data_obj::safe(version);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1186)
			vdir = (pdir + _g2);
		}
		HX_STACK_LINE(1187)
		::String rdir = (vdir + HX_CSTRING("/run.n"));		HX_STACK_VAR(rdir,"rdir");
		HX_STACK_LINE(1188)
		::String _g3 = ::haxe::io::Path_obj::removeTrailingSlashes(rdir);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1188)
		if ((!(::sys::FileSystem_obj::sys_exists(_g3)))){
			HX_STACK_LINE(1189)
			HX_STACK_DO_THROW(((((HX_CSTRING("Library ") + project) + HX_CSTRING(" version ")) + version) + HX_CSTRING(" does not have a run script")));
		}
		HX_STACK_LINE(1190)
		::String _g4 = ::Sys_obj::getCwd();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1190)
		this->args->push(_g4);
		HX_STACK_LINE(1191)
		::Sys_obj::setCwd(vdir);
		HX_STACK_LINE(1192)
		::String cmd = HX_CSTRING("neko run.n");		HX_STACK_VAR(cmd,"cmd");
		HX_STACK_LINE(1193)
		{
			HX_STACK_LINE(1193)
			int _g11 = this->argcur;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(1193)
			int _g2 = this->args->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1193)
			while((true)){
				HX_STACK_LINE(1193)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(1193)
					break;
				}
				HX_STACK_LINE(1193)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1194)
				::String _g5 = this->escapeArg(this->args->__get(i));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1194)
				::String _g6 = (HX_CSTRING(" ") + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1194)
				hx::AddEq(cmd,_g6);
			}
		}
		HX_STACK_LINE(1195)
		::Sys_obj::putEnv(HX_CSTRING("HAXELIB_RUN"),HX_CSTRING("1"));
		HX_STACK_LINE(1196)
		int _g7 = ::Sys_obj::command(cmd,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(1196)
		::Sys_obj::exit(_g7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,run,(void))

::String Main_obj::escapeArg( ::String a){
	HX_STACK_FRAME("tools.haxelib.Main","escapeArg",0x128705a2,"tools.haxelib.Main.escapeArg","tools/haxelib/Main.hx",1199,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(1200)
	int _g = a.indexOf(HX_CSTRING(" "),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1200)
	if (((_g == (int)-1))){
		HX_STACK_LINE(1201)
		return a;
	}
	HX_STACK_LINE(1202)
	return ((HX_CSTRING("\"") + a) + HX_CSTRING("\""));
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,escapeArg,return )

Void Main_obj::local( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","local",0x5db68b38,"tools.haxelib.Main.local","tools/haxelib/Main.hx",1205,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1206)
		::String file = this->param(HX_CSTRING("Package"),null());		HX_STACK_VAR(file,"file");
		HX_STACK_LINE(1207)
		this->doInstallFile(file,true,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,local,(void))

Dynamic Main_obj::command( ::String cmd,Array< ::String > args){
	HX_STACK_FRAME("tools.haxelib.Main","command",0x74810058,"tools.haxelib.Main.command","tools/haxelib/Main.hx",1210,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cmd,"cmd")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(1211)
	::sys::io::Process p = ::sys::io::Process_obj::__new(cmd,args);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(1212)
	int code = p->exitCode();		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1213)
	::String _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1213)
	if (((code == (int)0))){
		HX_STACK_LINE(1213)
		_g = p->_stdout->readAll(null())->toString();
	}
	else{
		HX_STACK_LINE(1213)
		_g = p->_stderr->readAll(null())->toString();
	}
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_g,int &code){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",1213,0xb1b3c261)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("code") , code,false);
				__result->Add(HX_CSTRING("out") , _g,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(1213)
	return _Function_1_1::Block(_g,code);
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,command,return )

Void Main_obj::proxy( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","proxy",0xad55b03b,"tools.haxelib.Main.proxy","tools/haxelib/Main.hx",1216,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1217)
		::String rep = this->getRepository(null());		HX_STACK_VAR(rep,"rep");
		HX_STACK_LINE(1218)
		::String host = this->param(HX_CSTRING("Proxy host"),null());		HX_STACK_VAR(host,"host");
		HX_STACK_LINE(1219)
		if (((host == HX_CSTRING("")))){
			HX_STACK_LINE(1220)
			::String _g = ::haxe::io::Path_obj::removeTrailingSlashes((rep + HX_CSTRING("/.proxy")));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1220)
			if ((::sys::FileSystem_obj::sys_exists(_g))){
				HX_STACK_LINE(1221)
				::sys::FileSystem_obj::deleteFile((rep + HX_CSTRING("/.proxy")));
				HX_STACK_LINE(1222)
				::tools::haxelib::Main_obj::print(HX_CSTRING("Proxy disabled"));
			}
			else{
				HX_STACK_LINE(1224)
				::tools::haxelib::Main_obj::print(HX_CSTRING("No proxy specified"));
			}
			HX_STACK_LINE(1225)
			return null();
		}
		HX_STACK_LINE(1227)
		::String _g1 = this->param(HX_CSTRING("Proxy port"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1227)
		Dynamic port = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(port,"port");
		HX_STACK_LINE(1228)
		::String authName = this->param(HX_CSTRING("Proxy user login"),null());		HX_STACK_VAR(authName,"authName");
		HX_STACK_LINE(1229)
		::String authPass;		HX_STACK_VAR(authPass,"authPass");
		HX_STACK_LINE(1229)
		if (((authName == HX_CSTRING("")))){
			HX_STACK_LINE(1229)
			authPass = HX_CSTRING("");
		}
		else{
			HX_STACK_LINE(1229)
			authPass = this->param(HX_CSTRING("Proxy user pass"),null());
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::String &host,Dynamic &port,::String &authName,::String &authPass){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",1230,0xb1b3c261)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("host") , host,false);
					__result->Add(HX_CSTRING("port") , port,false);
					struct _Function_2_1{
						inline static Dynamic Block( ::String &authName,::String &authPass){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",1233,0xb1b3c261)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("user") , authName,false);
								__result->Add(HX_CSTRING("pass") , authPass,false);
								return __result;
							}
							return null();
						}
					};
					__result->Add(HX_CSTRING("auth") , (  (((authName == HX_CSTRING("")))) ? Dynamic(null()) : Dynamic(_Function_2_1::Block(authName,authPass)) ),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(1230)
		Dynamic proxy = _Function_1_1::Block(host,port,authName,authPass);		HX_STACK_VAR(proxy,"proxy");
		HX_STACK_LINE(1235)
		::haxe::Http_obj::PROXY = proxy;
		HX_STACK_LINE(1236)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Testing proxy..."));
		HX_STACK_LINE(1237)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1237)
			::haxe::Http_obj::requestUrl(HX_CSTRING("http://www.google.com"));
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1238)
					::tools::haxelib::Main_obj::print(HX_CSTRING("Proxy connection failed"));
					HX_STACK_LINE(1239)
					return null();
				}
			}
		}
		HX_STACK_LINE(1241)
		::String _g2 = ::haxe::Serializer_obj::run(proxy);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1241)
		::sys::io::File_obj::saveContent((rep + HX_CSTRING("/.proxy")),_g2);
		HX_STACK_LINE(1242)
		::tools::haxelib::Main_obj::print(HX_CSTRING("Proxy setup done"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,proxy,(void))

Void Main_obj::loadProxy( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","loadProxy",0x6e2666b5,"tools.haxelib.Main.loadProxy","tools/haxelib/Main.hx",1245,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1246)
		::String rep = this->getRepository(null());		HX_STACK_VAR(rep,"rep");
		HX_STACK_LINE(1247)
		::String _g = ::sys::io::File_obj::getContent((rep + HX_CSTRING("/.proxy")));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1247)
		Dynamic _g1 = ::haxe::Unserializer_obj::run(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1247)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1247)
			::haxe::Http_obj::PROXY = _g1;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,loadProxy,(void))

Void Main_obj::convertXml( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","convertXml",0x6d9bb8b7,"tools.haxelib.Main.convertXml","tools/haxelib/Main.hx",1250,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1251)
		::String cwd = ::Sys_obj::getCwd();		HX_STACK_VAR(cwd,"cwd");
		HX_STACK_LINE(1252)
		::String xmlFile = (cwd + HX_CSTRING("haxelib.xml"));		HX_STACK_VAR(xmlFile,"xmlFile");
		HX_STACK_LINE(1253)
		::String jsonFile = (cwd + HX_CSTRING("haxelib.json"));		HX_STACK_VAR(jsonFile,"jsonFile");
		HX_STACK_LINE(1255)
		::String _g = ::haxe::io::Path_obj::removeTrailingSlashes(xmlFile);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1255)
		if ((!(::sys::FileSystem_obj::sys_exists(_g)))){
			HX_STACK_LINE(1257)
			::tools::haxelib::Main_obj::print(HX_CSTRING("No `haxelib.xml` file was found in the current directory."));
			HX_STACK_LINE(1258)
			::Sys_obj::exit((int)0);
		}
		HX_STACK_LINE(1261)
		::String xmlString = ::sys::io::File_obj::getContent(xmlFile);		HX_STACK_VAR(xmlString,"xmlString");
		HX_STACK_LINE(1262)
		Dynamic json = ::tools::haxelib::ConvertXml_obj::convert(xmlString);		HX_STACK_VAR(json,"json");
		HX_STACK_LINE(1263)
		::String jsonString = ::tools::haxelib::ConvertXml_obj::prettyPrint(json,null());		HX_STACK_VAR(jsonString,"jsonString");
		HX_STACK_LINE(1265)
		::sys::io::File_obj::saveContent(jsonFile,jsonString);
		HX_STACK_LINE(1266)
		::tools::haxelib::Main_obj::print((HX_CSTRING("Saved to ") + jsonFile));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,convertXml,(void))

::tools::haxelib::SemVer Main_obj::VERSION;

::tools::haxelib::SemVer Main_obj::APIVERSION;

::String Main_obj::REPNAME;

Dynamic Main_obj::SERVER;

Void Main_obj::print( ::String str){
{
		HX_STACK_FRAME("tools.haxelib.Main","print",0xad5119fa,"tools.haxelib.Main.print","tools/haxelib/Main.hx",1272,0xb1b3c261)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(1272)
		::Sys_obj::print((str + HX_CSTRING("\n")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Main_obj,print,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("tools.haxelib.Main","main",0x88806f0c,"tools.haxelib.Main.main","tools/haxelib/Main.hx",1276,0xb1b3c261)
		HX_STACK_LINE(1276)
		::tools::haxelib::Main_obj::__new()->process();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(argcur,"argcur");
	HX_MARK_MEMBER_NAME(args,"args");
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(siteUrl,"siteUrl");
	HX_MARK_MEMBER_NAME(site,"site");
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(argcur,"argcur");
	HX_VISIT_MEMBER_NAME(args,"args");
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(siteUrl,"siteUrl");
	HX_VISIT_MEMBER_NAME(site,"site");
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ask") ) { return ask_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"dev") ) { return dev_dyn(); }
		if (HX_FIELD_EQ(inName,"git") ) { return git_dyn(); }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"args") ) { return args; }
		if (HX_FIELD_EQ(inName,"site") ) { return site; }
		if (HX_FIELD_EQ(inName,"info") ) { return info_dyn(); }
		if (HX_FIELD_EQ(inName,"user") ) { return user_dyn(); }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		if (HX_FIELD_EQ(inName,"param") ) { return param_dyn(); }
		if (HX_FIELD_EQ(inName,"usage") ) { return usage_dyn(); }
		if (HX_FIELD_EQ(inName,"setup") ) { return setup_dyn(); }
		if (HX_FIELD_EQ(inName,"local") ) { return local_dyn(); }
		if (HX_FIELD_EQ(inName,"proxy") ) { return proxy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SERVER") ) { return SERVER; }
		if (HX_FIELD_EQ(inName,"argcur") ) { return argcur; }
		if (HX_FIELD_EQ(inName,"search") ) { return search_dyn(); }
		if (HX_FIELD_EQ(inName,"submit") ) { return submit_dyn(); }
		if (HX_FIELD_EQ(inName,"config") ) { return config_dyn(); }
		if (HX_FIELD_EQ(inName,"getDev") ) { return getDev_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"REPNAME") ) { return REPNAME; }
		if (HX_FIELD_EQ(inName,"siteUrl") ) { return siteUrl; }
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		if (HX_FIELD_EQ(inName,"install") ) { return install_dyn(); }
		if (HX_FIELD_EQ(inName,"safeDir") ) { return safeDir_dyn(); }
		if (HX_FIELD_EQ(inName,"upgrade") ) { return upgrade_dyn(); }
		if (HX_FIELD_EQ(inName,"command") ) { return command_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return commands; }
		if (HX_FIELD_EQ(inName,"initSite") ) { return initSite_dyn(); }
		if (HX_FIELD_EQ(inName,"paramOpt") ) { return paramOpt_dyn(); }
		if (HX_FIELD_EQ(inName,"register") ) { return _register_dyn(); }
		if (HX_FIELD_EQ(inName,"doUpdate") ) { return doUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"checkRec") ) { return checkRec_dyn(); }
		if (HX_FIELD_EQ(inName,"checkGit") ) { return checkGit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"doInstall") ) { return doInstall_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRec") ) { return deleteRec_dyn(); }
		if (HX_FIELD_EQ(inName,"escapeArg") ) { return escapeArg_dyn(); }
		if (HX_FIELD_EQ(inName,"loadProxy") ) { return loadProxy_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"APIVERSION") ) { return APIVERSION; }
		if (HX_FIELD_EQ(inName,"addCommand") ) { return addCommand_dyn(); }
		if (HX_FIELD_EQ(inName,"doRegister") ) { return doRegister_dyn(); }
		if (HX_FIELD_EQ(inName,"getVersion") ) { return getVersion_dyn(); }
		if (HX_FIELD_EQ(inName,"safeDelete") ) { return safeDelete_dyn(); }
		if (HX_FIELD_EQ(inName,"getCurrent") ) { return getCurrent_dyn(); }
		if (HX_FIELD_EQ(inName,"updateSelf") ) { return updateSelf_dyn(); }
		if (HX_FIELD_EQ(inName,"setCurrent") ) { return setCurrent_dyn(); }
		if (HX_FIELD_EQ(inName,"convertXml") ) { return convertXml_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"installMany") ) { return installMany_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateByName") ) { return updateByName_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"doInstallFile") ) { return doInstallFile_dyn(); }
		if (HX_FIELD_EQ(inName,"getRepository") ) { return getRepository_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"installFromHxml") ) { return installFromHxml_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"installFromAllHxml") ) { return installFromAllHxml_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"doInstallDependencies") ) { return doInstallDependencies_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { args=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"site") ) { site=inValue.Cast< ::tools::haxelib::SiteProxy >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"SERVER") ) { SERVER=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"argcur") ) { argcur=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< ::tools::haxelib::SemVer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPNAME") ) { REPNAME=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"siteUrl") ) { siteUrl=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::List >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"APIVERSION") ) { APIVERSION=inValue.Cast< ::tools::haxelib::SemVer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("argcur"));
	outFields->push(HX_CSTRING("args"));
	outFields->push(HX_CSTRING("commands"));
	outFields->push(HX_CSTRING("siteUrl"));
	outFields->push(HX_CSTRING("site"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERSION"),
	HX_CSTRING("APIVERSION"),
	HX_CSTRING("REPNAME"),
	HX_CSTRING("SERVER"),
	HX_CSTRING("print"),
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Main_obj,argcur),HX_CSTRING("argcur")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(Main_obj,args),HX_CSTRING("args")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Main_obj,commands),HX_CSTRING("commands")},
	{hx::fsString,(int)offsetof(Main_obj,siteUrl),HX_CSTRING("siteUrl")},
	{hx::fsObject /*::tools::haxelib::SiteProxy*/ ,(int)offsetof(Main_obj,site),HX_CSTRING("site")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("argcur"),
	HX_CSTRING("args"),
	HX_CSTRING("commands"),
	HX_CSTRING("siteUrl"),
	HX_CSTRING("site"),
	HX_CSTRING("initSite"),
	HX_CSTRING("param"),
	HX_CSTRING("ask"),
	HX_CSTRING("paramOpt"),
	HX_CSTRING("addCommand"),
	HX_CSTRING("usage"),
	HX_CSTRING("process"),
	HX_CSTRING("search"),
	HX_CSTRING("info"),
	HX_CSTRING("user"),
	HX_CSTRING("register"),
	HX_CSTRING("doRegister"),
	HX_CSTRING("submit"),
	HX_CSTRING("install"),
	HX_CSTRING("getVersion"),
	HX_CSTRING("installFromHxml"),
	HX_CSTRING("installFromAllHxml"),
	HX_CSTRING("installMany"),
	HX_CSTRING("doInstall"),
	HX_CSTRING("doInstallFile"),
	HX_CSTRING("doInstallDependencies"),
	HX_CSTRING("safeDir"),
	HX_CSTRING("safeDelete"),
	HX_CSTRING("getRepository"),
	HX_CSTRING("setup"),
	HX_CSTRING("config"),
	HX_CSTRING("getCurrent"),
	HX_CSTRING("getDev"),
	HX_CSTRING("list"),
	HX_CSTRING("upgrade"),
	HX_CSTRING("doUpdate"),
	HX_CSTRING("updateByName"),
	HX_CSTRING("update"),
	HX_CSTRING("updateSelf"),
	HX_CSTRING("deleteRec"),
	HX_CSTRING("remove"),
	HX_CSTRING("set"),
	HX_CSTRING("setCurrent"),
	HX_CSTRING("checkRec"),
	HX_CSTRING("dev"),
	HX_CSTRING("checkGit"),
	HX_CSTRING("git"),
	HX_CSTRING("run"),
	HX_CSTRING("escapeArg"),
	HX_CSTRING("local"),
	HX_CSTRING("command"),
	HX_CSTRING("proxy"),
	HX_CSTRING("loadProxy"),
	HX_CSTRING("convertXml"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(Main_obj::APIVERSION,"APIVERSION");
	HX_MARK_MEMBER_NAME(Main_obj::REPNAME,"REPNAME");
	HX_MARK_MEMBER_NAME(Main_obj::SERVER,"SERVER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(Main_obj::APIVERSION,"APIVERSION");
	HX_VISIT_MEMBER_NAME(Main_obj::REPNAME,"REPNAME");
	HX_VISIT_MEMBER_NAME(Main_obj::SERVER,"SERVER");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
	VERSION= ::tools::haxelib::SemVer_obj::ofString(HX_CSTRING("3.1.0-rc.4"));
	APIVERSION= ::tools::haxelib::SemVer_obj::ofString(HX_CSTRING("3.0.0"));
	REPNAME= HX_CSTRING("lib");
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tools/haxelib/Main.hx",148,0xb1b3c261)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_CSTRING("host") , HX_CSTRING("lib.haxe.org"),false);
			__result->Add(HX_CSTRING("port") , (int)80,false);
			__result->Add(HX_CSTRING("dir") , HX_CSTRING(""),false);
			__result->Add(HX_CSTRING("url") , HX_CSTRING("index.n"),false);
			__result->Add(HX_CSTRING("apiVersion") , ((::tools::haxelib::Main_obj::APIVERSION->major + HX_CSTRING(".")) + ::tools::haxelib::Main_obj::APIVERSION->minor),false);
			return __result;
		}
		return null();
	}
};
	SERVER= _Function_0_1::Block();
}

} // end namespace tools
} // end namespace haxelib
