#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_remoting_Connection
#include <haxe/remoting/Connection.h>
#endif
#ifndef INCLUDED_tools_haxelib_Remoting_SiteApi
#include <tools/haxelib/Remoting_SiteApi.h>
#endif
namespace tools{
namespace haxelib{

Void Remoting_SiteApi_obj::__construct(::haxe::remoting::Connection c)
{
HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","new",0x95ae63ab,"tools.haxelib.Remoting_SiteApi.new","tools/haxelib/Main.hx",49,0xb1b3c261)
HX_STACK_THIS(this)
HX_STACK_ARG(c,"c")
{
	HX_STACK_LINE(49)
	this->__cnx = c;
}
;
	return null();
}

//Remoting_SiteApi_obj::~Remoting_SiteApi_obj() { }

Dynamic Remoting_SiteApi_obj::__CreateEmpty() { return  new Remoting_SiteApi_obj; }
hx::ObjectPtr< Remoting_SiteApi_obj > Remoting_SiteApi_obj::__new(::haxe::remoting::Connection c)
{  hx::ObjectPtr< Remoting_SiteApi_obj > result = new Remoting_SiteApi_obj();
	result->__construct(c);
	return result;}

Dynamic Remoting_SiteApi_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Remoting_SiteApi_obj > result = new Remoting_SiteApi_obj();
	result->__construct(inArgs[0]);
	return result;}

::List Remoting_SiteApi_obj::search( ::String word){
	HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","search",0x7dcdecfd,"tools.haxelib.Remoting_SiteApi.search","tools/haxelib/Main.hx",49,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(word,"word")
	HX_STACK_LINE(49)
	return this->__cnx->resolve(HX_CSTRING("search"))->call(Dynamic( Array_obj<Dynamic>::__new().Add(word)));
}


HX_DEFINE_DYNAMIC_FUNC1(Remoting_SiteApi_obj,search,return )

Dynamic Remoting_SiteApi_obj::infos( ::String project){
	HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","infos",0x4db46450,"tools.haxelib.Remoting_SiteApi.infos","tools/haxelib/Main.hx",49,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(project,"project")
	HX_STACK_LINE(49)
	return this->__cnx->resolve(HX_CSTRING("infos"))->call(Dynamic( Array_obj<Dynamic>::__new().Add(project)));
}


HX_DEFINE_DYNAMIC_FUNC1(Remoting_SiteApi_obj,infos,return )

Dynamic Remoting_SiteApi_obj::user( ::String name){
	HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","user",0x6793e0a0,"tools.haxelib.Remoting_SiteApi.user","tools/haxelib/Main.hx",49,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(49)
	return this->__cnx->resolve(HX_CSTRING("user"))->call(Dynamic( Array_obj<Dynamic>::__new().Add(name)));
}


HX_DEFINE_DYNAMIC_FUNC1(Remoting_SiteApi_obj,user,return )

bool Remoting_SiteApi_obj::_register( ::String name,::String pass,::String mail,::String fullname){
	HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","register",0x07d44338,"tools.haxelib.Remoting_SiteApi.register","tools/haxelib/Main.hx",49,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(pass,"pass")
	HX_STACK_ARG(mail,"mail")
	HX_STACK_ARG(fullname,"fullname")
	HX_STACK_LINE(49)
	return this->__cnx->resolve(HX_CSTRING("register"))->call(Dynamic( Array_obj<Dynamic>::__new().Add(name).Add(pass).Add(mail).Add(fullname)));
}


HX_DEFINE_DYNAMIC_FUNC4(Remoting_SiteApi_obj,_register,return )

bool Remoting_SiteApi_obj::isNewUser( ::String name){
	HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","isNewUser",0x184d598c,"tools.haxelib.Remoting_SiteApi.isNewUser","tools/haxelib/Main.hx",49,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(49)
	return this->__cnx->resolve(HX_CSTRING("isNewUser"))->call(Dynamic( Array_obj<Dynamic>::__new().Add(name)));
}


HX_DEFINE_DYNAMIC_FUNC1(Remoting_SiteApi_obj,isNewUser,return )

Void Remoting_SiteApi_obj::checkDeveloper( ::String prj,::String user){
{
		HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","checkDeveloper",0xa7c33bf7,"tools.haxelib.Remoting_SiteApi.checkDeveloper","tools/haxelib/Main.hx",49,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(prj,"prj")
		HX_STACK_ARG(user,"user")
		HX_STACK_LINE(49)
		this->__cnx->resolve(HX_CSTRING("checkDeveloper"))->call(Dynamic( Array_obj<Dynamic>::__new().Add(prj).Add(user)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Remoting_SiteApi_obj,checkDeveloper,(void))

bool Remoting_SiteApi_obj::checkPassword( ::String user,::String pass){
	HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","checkPassword",0x33c43f0e,"tools.haxelib.Remoting_SiteApi.checkPassword","tools/haxelib/Main.hx",49,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(user,"user")
	HX_STACK_ARG(pass,"pass")
	HX_STACK_LINE(49)
	return this->__cnx->resolve(HX_CSTRING("checkPassword"))->call(Dynamic( Array_obj<Dynamic>::__new().Add(user).Add(pass)));
}


HX_DEFINE_DYNAMIC_FUNC2(Remoting_SiteApi_obj,checkPassword,return )

::String Remoting_SiteApi_obj::getSubmitId( ){
	HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","getSubmitId",0xfbb1e714,"tools.haxelib.Remoting_SiteApi.getSubmitId","tools/haxelib/Main.hx",49,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	return this->__cnx->resolve(HX_CSTRING("getSubmitId"))->call(Dynamic( Array_obj<Dynamic>::__new()));
}


HX_DEFINE_DYNAMIC_FUNC0(Remoting_SiteApi_obj,getSubmitId,return )

::String Remoting_SiteApi_obj::processSubmit( ::String id,::String user,::String pass){
	HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","processSubmit",0x72f32af2,"tools.haxelib.Remoting_SiteApi.processSubmit","tools/haxelib/Main.hx",49,0xb1b3c261)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(user,"user")
	HX_STACK_ARG(pass,"pass")
	HX_STACK_LINE(49)
	return this->__cnx->resolve(HX_CSTRING("processSubmit"))->call(Dynamic( Array_obj<Dynamic>::__new().Add(id).Add(user).Add(pass)));
}


HX_DEFINE_DYNAMIC_FUNC3(Remoting_SiteApi_obj,processSubmit,return )

Void Remoting_SiteApi_obj::postInstall( ::String project,::String version){
{
		HX_STACK_FRAME("tools.haxelib.Remoting_SiteApi","postInstall",0xb5321ae6,"tools.haxelib.Remoting_SiteApi.postInstall","tools/haxelib/Main.hx",49,0xb1b3c261)
		HX_STACK_THIS(this)
		HX_STACK_ARG(project,"project")
		HX_STACK_ARG(version,"version")
		HX_STACK_LINE(49)
		this->__cnx->resolve(HX_CSTRING("postInstall"))->call(Dynamic( Array_obj<Dynamic>::__new().Add(project).Add(version)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Remoting_SiteApi_obj,postInstall,(void))


Remoting_SiteApi_obj::Remoting_SiteApi_obj()
{
}

void Remoting_SiteApi_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Remoting_SiteApi);
	HX_MARK_MEMBER_NAME(__cnx,"__cnx");
	HX_MARK_END_CLASS();
}

void Remoting_SiteApi_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__cnx,"__cnx");
}

Dynamic Remoting_SiteApi_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"user") ) { return user_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { return __cnx; }
		if (HX_FIELD_EQ(inName,"infos") ) { return infos_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"search") ) { return search_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return _register_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isNewUser") ) { return isNewUser_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getSubmitId") ) { return getSubmitId_dyn(); }
		if (HX_FIELD_EQ(inName,"postInstall") ) { return postInstall_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkPassword") ) { return checkPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"processSubmit") ) { return processSubmit_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkDeveloper") ) { return checkDeveloper_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Remoting_SiteApi_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__cnx") ) { __cnx=inValue.Cast< ::haxe::remoting::Connection >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Remoting_SiteApi_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__cnx"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::remoting::Connection*/ ,(int)offsetof(Remoting_SiteApi_obj,__cnx),HX_CSTRING("__cnx")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__cnx"),
	HX_CSTRING("search"),
	HX_CSTRING("infos"),
	HX_CSTRING("user"),
	HX_CSTRING("register"),
	HX_CSTRING("isNewUser"),
	HX_CSTRING("checkDeveloper"),
	HX_CSTRING("checkPassword"),
	HX_CSTRING("getSubmitId"),
	HX_CSTRING("processSubmit"),
	HX_CSTRING("postInstall"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Remoting_SiteApi_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Remoting_SiteApi_obj::__mClass,"__mClass");
};

#endif

Class Remoting_SiteApi_obj::__mClass;

void Remoting_SiteApi_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tools.haxelib.Remoting_SiteApi"), hx::TCanCast< Remoting_SiteApi_obj> ,sStaticFields,sMemberFields,
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

void Remoting_SiteApi_obj::__boot()
{
}

} // end namespace tools
} // end namespace haxelib
