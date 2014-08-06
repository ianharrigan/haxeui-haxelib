#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_RootManager
#include <haxe/ui/toolkit/core/RootManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
namespace core{

Void RootManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","new",0x3fbd8d70,"haxe.ui.toolkit.core.RootManager.new","haxe/ui/toolkit/core/RootManager.hx",22,0xcb4d01c0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(23)
	this->_roots = _g;
}
;
	return null();
}

//RootManager_obj::~RootManager_obj() { }

Dynamic RootManager_obj::__CreateEmpty() { return  new RootManager_obj; }
hx::ObjectPtr< RootManager_obj > RootManager_obj::__new()
{  hx::ObjectPtr< RootManager_obj > result = new RootManager_obj();
	result->__construct();
	return result;}

Dynamic RootManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RootManager_obj > result = new RootManager_obj();
	result->__construct();
	return result;}

::haxe::ui::toolkit::core::Root RootManager_obj::createRoot( Dynamic options,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","createRoot",0x9f5bb42e,"haxe.ui.toolkit.core.RootManager.createRoot","haxe/ui/toolkit/core/RootManager.hx",26,0xcb4d01c0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(options,"options")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(26)
	Dynamic fn1 = Dynamic( Array_obj<Dynamic>::__new().Add(fn));		HX_STACK_VAR(fn1,"fn1");
	HX_STACK_LINE(27)
	if (((options == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/RootManager.hx",28,0xcb4d01c0)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(28)
		options = _Function_2_1::Block();
	}
	HX_STACK_LINE(31)
	Dynamic _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	if (((options->__Field(HX_CSTRING("parent"),true) != null()))){
		HX_STACK_LINE(31)
		_g = options->__Field(HX_CSTRING("parent"),true);
	}
	else{
		HX_STACK_LINE(31)
		_g = ::openfl::Lib_obj::get_current()->get_stage();
	}
	HX_STACK_LINE(31)
	options->__FieldRef(HX_CSTRING("parent")) = _g;
	HX_STACK_LINE(33)
	Array< ::Dynamic > root = Array_obj< ::Dynamic >::__new().Add(::haxe::ui::toolkit::core::Root_obj::__new());		HX_STACK_VAR(root,"root");
	HX_STACK_LINE(34)
	this->_roots->push(root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >());

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,fn1,Array< ::Dynamic >,root)
	Void run(Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/ui/toolkit/core/RootManager.hx",35,0xcb4d01c0)
		HX_STACK_ARG(e,"e")
		{
			HX_STACK_LINE(36)
			if (((fn1->__GetItem((int)0) != null()))){
				HX_STACK_LINE(40)
				fn1->__GetItem((int)0)(root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()).Cast< Void >();
			}
			HX_STACK_LINE(43)
			root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->removeEventListenerType(::openfl::events::Event_obj::ADDED_TO_STAGE);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(35)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->addEventListener(::openfl::events::Event_obj::ADDED_TO_STAGE, Dynamic(new _Function_1_1(fn1,root)),null(),null(),null());
	HX_STACK_LINE(46)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->set_root(root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >());
	HX_STACK_LINE(47)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->set_id((  (((options->__Field(HX_CSTRING("id"),true) != null()))) ? ::String(options->__Field(HX_CSTRING("id"),true)) : ::String(HX_CSTRING("root")) ));
	HX_STACK_LINE(48)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->set_styleName((  (((options->__Field(HX_CSTRING("styleName"),true) != null()))) ? ::String(options->__Field(HX_CSTRING("styleName"),true)) : ::String(null()) ));
	HX_STACK_LINE(49)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->set_x((  (((options->__Field(HX_CSTRING("x"),true) != null()))) ? Float(options->__Field(HX_CSTRING("x"),true)) : Float((int)0) ));
	HX_STACK_LINE(50)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->set_y((  (((options->__Field(HX_CSTRING("y"),true) != null()))) ? Float(options->__Field(HX_CSTRING("y"),true)) : Float((int)0) ));
	HX_STACK_LINE(51)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->set_width((  (((options->__Field(HX_CSTRING("width"),true) != null()))) ? Float(options->__Field(HX_CSTRING("width"),true)) : Float((int)0) ));
	HX_STACK_LINE(52)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->set_height((  (((options->__Field(HX_CSTRING("height"),true) != null()))) ? Float(options->__Field(HX_CSTRING("height"),true)) : Float((int)0) ));
	HX_STACK_LINE(53)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->set_percentWidth((  (((options->__Field(HX_CSTRING("percentWidth"),true) != null()))) ? Float(options->__Field(HX_CSTRING("percentWidth"),true)) : Float((int)-1) ));
	HX_STACK_LINE(54)
	root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->set_percentHeight((  (((options->__Field(HX_CSTRING("percentHeight"),true) != null()))) ? Float(options->__Field(HX_CSTRING("percentHeight"),true)) : Float((int)-1) ));
	HX_STACK_LINE(55)
	::openfl::display::Sprite _g1 = root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >()->get_sprite();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(55)
	options->__Field(HX_CSTRING("parent"),true)->__Field(HX_CSTRING("addChild"),true)(_g1);
	HX_STACK_LINE(56)
	return root->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::Root >();
}


HX_DEFINE_DYNAMIC_FUNC2(RootManager_obj,createRoot,return )

Void RootManager_obj::destroyRoot( ::haxe::ui::toolkit::core::Root root){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","destroyRoot",0x63c6994c,"haxe.ui.toolkit.core.RootManager.destroyRoot","haxe/ui/toolkit/core/RootManager.hx",59,0xcb4d01c0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(root,"root")
		HX_STACK_LINE(60)
		::openfl::display::DisplayObjectContainer _g = root->get_sprite()->get_parent();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		if (((_g != null()))){
			HX_STACK_LINE(61)
			::openfl::display::Sprite _g1 = root->get_sprite();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(61)
			root->get_sprite()->get_parent()->removeChild(_g1);
		}
		HX_STACK_LINE(62)
		root->dispose();
		HX_STACK_LINE(64)
		this->_roots->remove(root);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RootManager_obj,destroyRoot,(void))

Void RootManager_obj::destroyAllRoots( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","destroyAllRoots",0x09e2b75a,"haxe.ui.toolkit.core.RootManager.destroyAllRoots","haxe/ui/toolkit/core/RootManager.hx",68,0xcb4d01c0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		Array< ::Dynamic > _g1 = this->_roots;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		while((true)){
			HX_STACK_LINE(68)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(68)
				break;
			}
			HX_STACK_LINE(68)
			::haxe::ui::toolkit::core::Root root = _g1->__get(_g).StaticCast< ::haxe::ui::toolkit::core::Root >();		HX_STACK_VAR(root,"root");
			HX_STACK_LINE(68)
			++(_g);
			HX_STACK_LINE(69)
			this->destroyRoot(root);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RootManager_obj,destroyAllRoots,(void))

Array< ::Dynamic > RootManager_obj::get_roots( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","get_roots",0x5737b578,"haxe.ui.toolkit.core.RootManager.get_roots","haxe/ui/toolkit/core/RootManager.hx",75,0xcb4d01c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	return this->_roots;
}


HX_DEFINE_DYNAMIC_FUNC0(RootManager_obj,get_roots,return )

::haxe::ui::toolkit::core::Root RootManager_obj::get_currentRoot( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","get_currentRoot",0xf6bb93a2,"haxe.ui.toolkit.core.RootManager.get_currentRoot","haxe/ui/toolkit/core/RootManager.hx",79,0xcb4d01c0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	if (((this->_roots->length == (int)0))){
		HX_STACK_LINE(81)
		return null();
	}
	HX_STACK_LINE(83)
	return this->_roots->__get((this->_roots->length - (int)1)).StaticCast< ::haxe::ui::toolkit::core::Root >();
}


HX_DEFINE_DYNAMIC_FUNC0(RootManager_obj,get_currentRoot,return )

::haxe::ui::toolkit::core::RootManager RootManager_obj::_instance;

::haxe::ui::toolkit::core::RootManager RootManager_obj::instance;

::haxe::ui::toolkit::core::RootManager RootManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.RootManager","get_instance",0x1998f48e,"haxe.ui.toolkit.core.RootManager.get_instance","haxe/ui/toolkit/core/RootManager.hx",10,0xcb4d01c0)
	HX_STACK_LINE(11)
	if (((::haxe::ui::toolkit::core::RootManager_obj::_instance == null()))){
		HX_STACK_LINE(12)
		::haxe::ui::toolkit::core::RootManager _g = ::haxe::ui::toolkit::core::RootManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(12)
		::haxe::ui::toolkit::core::RootManager_obj::_instance = _g;
	}
	HX_STACK_LINE(14)
	return ::haxe::ui::toolkit::core::RootManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(RootManager_obj,get_instance,return )


RootManager_obj::RootManager_obj()
{
}

void RootManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RootManager);
	HX_MARK_MEMBER_NAME(_roots,"_roots");
	HX_MARK_MEMBER_NAME(roots,"roots");
	HX_MARK_MEMBER_NAME(currentRoot,"currentRoot");
	HX_MARK_END_CLASS();
}

void RootManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_roots,"_roots");
	HX_VISIT_MEMBER_NAME(roots,"roots");
	HX_VISIT_MEMBER_NAME(currentRoot,"currentRoot");
}

Dynamic RootManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"roots") ) { return inCallProp ? get_roots() : roots; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_roots") ) { return _roots; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"get_roots") ) { return get_roots_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createRoot") ) { return createRoot_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"destroyRoot") ) { return destroyRoot_dyn(); }
		if (HX_FIELD_EQ(inName,"currentRoot") ) { return inCallProp ? get_currentRoot() : currentRoot; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"destroyAllRoots") ) { return destroyAllRoots_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currentRoot") ) { return get_currentRoot_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RootManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"roots") ) { roots=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_roots") ) { _roots=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::core::RootManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::core::RootManager >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentRoot") ) { currentRoot=inValue.Cast< ::haxe::ui::toolkit::core::Root >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RootManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_roots"));
	outFields->push(HX_CSTRING("roots"));
	outFields->push(HX_CSTRING("currentRoot"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RootManager_obj,_roots),HX_CSTRING("_roots")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RootManager_obj,roots),HX_CSTRING("roots")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Root*/ ,(int)offsetof(RootManager_obj,currentRoot),HX_CSTRING("currentRoot")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_roots"),
	HX_CSTRING("createRoot"),
	HX_CSTRING("destroyRoot"),
	HX_CSTRING("destroyAllRoots"),
	HX_CSTRING("roots"),
	HX_CSTRING("get_roots"),
	HX_CSTRING("currentRoot"),
	HX_CSTRING("get_currentRoot"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RootManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RootManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(RootManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RootManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RootManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(RootManager_obj::instance,"instance");
};

#endif

Class RootManager_obj::__mClass;

void RootManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.RootManager"), hx::TCanCast< RootManager_obj> ,sStaticFields,sMemberFields,
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

void RootManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
