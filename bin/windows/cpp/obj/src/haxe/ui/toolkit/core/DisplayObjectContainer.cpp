#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_ILayout
#include <haxe/ui/toolkit/core/interfaces/ILayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","new",0x06571b9f,"haxe.ui.toolkit.core.DisplayObjectContainer.new","haxe/ui/toolkit/core/DisplayObjectContainer.hx",13,0x6e0042f1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->_autoSize = false;
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	::haxe::ui::toolkit::layout::DefaultLayout _g = ::haxe::ui::toolkit::layout::DefaultLayout_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(22)
	this->_layout = _g;
	HX_STACK_LINE(23)
	Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = Array_obj< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(23)
	this->_children = _g1;
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct();
	return result;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > result = new DisplayObjectContainer_obj();
	result->__construct();
	return result;}

hx::Object *DisplayObjectContainer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

Void DisplayObjectContainer_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","initialize",0xd7f15bf1,"haxe.ui.toolkit.core.DisplayObjectContainer.initialize","haxe/ui/toolkit/core/DisplayObjectContainer.hx",29,0x6e0042f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::initialize();
		HX_STACK_LINE(32)
		this->_layout->__Field(HX_CSTRING("set_container"),true)(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void DisplayObjectContainer_obj::invalidate( hx::Null< int >  __o_type,hx::Null< bool >  __o_recursive){
int type = __o_type.Default(1118481);
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","invalidate",0x7260441c,"haxe.ui.toolkit.core.DisplayObjectContainer.invalidate","haxe/ui/toolkit/core/DisplayObjectContainer.hx",44,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(45)
		if (((bool(!(this->_ready)) || bool(this->_invalidating)))){
			HX_STACK_LINE(46)
			return null();
		}
		HX_STACK_LINE(49)
		this->super::invalidate(type,recursive);
		HX_STACK_LINE(50)
		this->_invalidating = true;
		HX_STACK_LINE(51)
		if (((bool((((int(type) & int((int)256))) == (int)256)) || bool((((int(type) & int((int)1))) == (int)1))))){
			HX_STACK_LINE(53)
			this->_layout->refresh();
		}
		HX_STACK_LINE(55)
		this->_invalidating = false;
		HX_STACK_LINE(57)
		if (((recursive == true))){
			HX_STACK_LINE(58)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(58)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->_children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(58)
			while((true)){
				HX_STACK_LINE(58)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(58)
					break;
				}
				HX_STACK_LINE(58)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(58)
				++(_g);
				HX_STACK_LINE(59)
				child->invalidate(type,recursive);
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","get_numChildren",0x2b08cefb,"haxe.ui.toolkit.core.DisplayObjectContainer.get_numChildren","haxe/ui/toolkit/core/DisplayObjectContainer.hx",73,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > arr = this->_children;		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(80)
	return arr->length;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > DisplayObjectContainer_obj::get_children( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","get_children",0xea92a229,"haxe.ui.toolkit.core.DisplayObjectContainer.get_children","haxe/ui/toolkit/core/DisplayObjectContainer.hx",83,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > arr = this->_children;		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(90)
	return arr;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_children,return )

int DisplayObjectContainer_obj::indexOfChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","indexOfChild",0xb88d2cf4,"haxe.ui.toolkit.core.DisplayObjectContainer.indexOfChild","haxe/ui/toolkit/core/DisplayObjectContainer.hx",93,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(94)
	Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g = this->get_children();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(94)
	int index = ::Lambda_obj::indexOf(_g,child);		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(95)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,indexOfChild,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","getChildAt",0xa144325a,"haxe.ui.toolkit.core.DisplayObjectContainer.getChildAt","haxe/ui/toolkit/core/DisplayObjectContainer.hx",98,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(99)
	Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g = this->get_children();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(99)
	return _g->__get(index);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::addChildAt( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","addChildAt",0xb96cd82f,"haxe.ui.toolkit.core.DisplayObjectContainer.addChildAt","haxe/ui/toolkit/core/DisplayObjectContainer.hx",106,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(107)
	if (((child == null()))){
		HX_STACK_LINE(108)
		return null();
	}
	HX_STACK_LINE(121)
	::openfl::display::Sprite childSprite = child->__Field(HX_CSTRING("get_sprite"),true)();		HX_STACK_VAR(childSprite,"childSprite");
	HX_STACK_LINE(123)
	if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >()))){
		HX_STACK_LINE(124)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child))->__Field(HX_CSTRING("set_parent"),true)(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(127)
	::haxe::ui::toolkit::core::Root _g = this->get_root();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(127)
	child->__Field(HX_CSTRING("set_root"),true)(_g);
	HX_STACK_LINE(128)
	this->_children->insert(index,child);
	HX_STACK_LINE(129)
	this->_sprite->addChildAt(childSprite,index);
	HX_STACK_LINE(130)
	this->invalidate((int)1,null());
	HX_STACK_LINE(131)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::addChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","addChild",0x02bf601c,"haxe.ui.toolkit.core.DisplayObjectContainer.addChild","haxe/ui/toolkit/core/DisplayObjectContainer.hx",134,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(135)
	if (((child == null()))){
		HX_STACK_LINE(136)
		return null();
	}
	HX_STACK_LINE(149)
	::openfl::display::Sprite childSprite = child->__Field(HX_CSTRING("get_sprite"),true)();		HX_STACK_VAR(childSprite,"childSprite");
	HX_STACK_LINE(151)
	if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >()))){
		HX_STACK_LINE(152)
		(hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child))->__Field(HX_CSTRING("set_parent"),true)(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(155)
	::haxe::ui::toolkit::core::Root _g = this->get_root();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(155)
	child->__Field(HX_CSTRING("set_root"),true)(_g);
	HX_STACK_LINE(156)
	this->_children->push(child);
	HX_STACK_LINE(157)
	this->_sprite->addChild(childSprite);
	HX_STACK_LINE(158)
	this->invalidate((int)1,null());
	HX_STACK_LINE(159)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::removeChild( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","removeChild",0x281ca8f7,"haxe.ui.toolkit.core.DisplayObjectContainer.removeChild","haxe/ui/toolkit/core/DisplayObjectContainer.hx",162,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(163)
		if (((child == null()))){
			HX_STACK_LINE(164)
			return null();
		}
		HX_STACK_LINE(167)
		::openfl::display::Sprite childSprite = child->__Field(HX_CSTRING("get_sprite"),true)();		HX_STACK_VAR(childSprite,"childSprite");
		HX_STACK_LINE(169)
		this->_sprite->removeChild(childSprite);
		HX_STACK_LINE(170)
		this->_children->remove(child);
		HX_STACK_LINE(171)
		if (((dispose == true))){
			HX_STACK_LINE(172)
			child->dispose();
		}
		HX_STACK_LINE(174)
		this->invalidate((int)1,null());
		HX_STACK_LINE(184)
		return child;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChild,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::removeChildAt( int index,hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","removeChildAt",0xe7524dca,"haxe.ui.toolkit.core.DisplayObjectContainer.removeChildAt","haxe/ui/toolkit/core/DisplayObjectContainer.hx",187,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(188)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g = this->getChildAt(index);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		return this->removeChild(_g,dispose);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeAllChildren( hx::Null< bool >  __o_dispose){
bool dispose = __o_dispose.Default(true);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","removeAllChildren",0xbcf2cd1b,"haxe.ui.toolkit.core.DisplayObjectContainer.removeAllChildren","haxe/ui/toolkit/core/DisplayObjectContainer.hx",191,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(dispose,"dispose")
{
		HX_STACK_LINE(192)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > arr = this->get_children();		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			if ((!(((arr->length > (int)0))))){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(194)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = arr->__get((int)0);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(195)
			this->removeChild(child,dispose);
		}
		HX_STACK_LINE(197)
		while((true)){
			HX_STACK_LINE(197)
			int _g = this->get_sprite()->get_numChildren();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(197)
			if ((!(((_g > (int)0))))){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(198)
			this->get_sprite()->removeChildAt((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeAllChildren,(void))

bool DisplayObjectContainer_obj::contains( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","contains",0x7023ea80,"haxe.ui.toolkit.core.DisplayObjectContainer.contains","haxe/ui/toolkit/core/DisplayObjectContainer.hx",205,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(206)
	if (((child == null()))){
		HX_STACK_LINE(207)
		return false;
	}
	HX_STACK_LINE(215)
	::openfl::display::Sprite _g = child->__Field(HX_CSTRING("get_sprite"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(215)
	return this->get_sprite()->contains(_g);
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

Void DisplayObjectContainer_obj::setChildIndex( ::haxe::ui::toolkit::core::interfaces::IDisplayObject child,int index){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","setChildIndex",0xa5f3ba17,"haxe.ui.toolkit.core.DisplayObjectContainer.setChildIndex","haxe/ui/toolkit/core/DisplayObjectContainer.hx",219,0x6e0042f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(219)
		if (((child != null()))){
			HX_STACK_LINE(220)
			::openfl::display::Sprite _g = child->__Field(HX_CSTRING("get_sprite"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(220)
			this->get_sprite()->setChildIndex(_g,index);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Dynamic DisplayObjectContainer_obj::findChildAs( ::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","findChildAs",0x4ac664b4,"haxe.ui.toolkit.core.DisplayObjectContainer.findChildAs","haxe/ui/toolkit/core/DisplayObjectContainer.hx",230,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(231)
	::haxe::ui::toolkit::core::Component match = null();		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(232)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		while((true)){
			HX_STACK_LINE(232)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(232)
				break;
			}
			HX_STACK_LINE(232)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(232)
			++(_g);
			HX_STACK_LINE(233)
			if ((::Std_obj::is(child,type))){
				HX_STACK_LINE(234)
				match = child;
				HX_STACK_LINE(235)
				break;
			}
		}
	}
	HX_STACK_LINE(238)
	return match;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,findChildAs,return )

Dynamic DisplayObjectContainer_obj::findChild( ::String id,::Class type,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","findChild",0x24869f22,"haxe.ui.toolkit.core.DisplayObjectContainer.findChild","haxe/ui/toolkit/core/DisplayObjectContainer.hx",241,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(242)
		::haxe::ui::toolkit::core::Component match = null();		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(243)
		{
			HX_STACK_LINE(243)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(243)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(243)
			while((true)){
				HX_STACK_LINE(243)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(243)
					break;
				}
				HX_STACK_LINE(243)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(243)
				++(_g);
				HX_STACK_LINE(244)
				::String _g2 = child->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(244)
				if (((_g2 == id))){
					HX_STACK_LINE(245)
					match = child;
					HX_STACK_LINE(246)
					break;
				}
			}
		}
		HX_STACK_LINE(249)
		if (((bool((match == null())) && bool((recursive == true))))){
			HX_STACK_LINE(250)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(250)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(250)
			while((true)){
				HX_STACK_LINE(250)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(250)
					break;
				}
				HX_STACK_LINE(250)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(250)
				++(_g);
				HX_STACK_LINE(251)
				if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >()))){
					HX_STACK_LINE(252)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(252)
					c = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
					HX_STACK_LINE(253)
					::haxe::ui::toolkit::core::Component temp = c->findChild(id,type,recursive);		HX_STACK_VAR(temp,"temp");
					HX_STACK_LINE(254)
					if (((temp != null()))){
						HX_STACK_LINE(255)
						match = temp;
						HX_STACK_LINE(256)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(261)
		return match;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObjectContainer_obj,findChild,return )

::haxe::ui::toolkit::core::interfaces::IDisplayObject DisplayObjectContainer_obj::findComponentUnderPoint( Float stageX,Float stageY){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","findComponentUnderPoint",0xdfc8133b,"haxe.ui.toolkit.core.DisplayObjectContainer.findComponentUnderPoint","haxe/ui/toolkit/core/DisplayObjectContainer.hx",264,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stageX,"stageX")
	HX_STACK_ARG(stageY,"stageY")
	HX_STACK_LINE(265)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c = null();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(266)
	{
		HX_STACK_LINE(266)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(266)
		while((true)){
			HX_STACK_LINE(266)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(266)
				break;
			}
			HX_STACK_LINE(266)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(266)
			++(_g);
			HX_STACK_LINE(267)
			bool _g2 = child->hitTest(stageX,stageY);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(267)
			if (((_g2 == true))){
				HX_STACK_LINE(268)
				c = child;
				HX_STACK_LINE(269)
				break;
			}
		}
	}
	HX_STACK_LINE(272)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,findComponentUnderPoint,return )

::haxe::ui::toolkit::core::interfaces::ILayout DisplayObjectContainer_obj::get_layout( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","get_layout",0x34764914,"haxe.ui.toolkit.core.DisplayObjectContainer.get_layout","haxe/ui/toolkit/core/DisplayObjectContainer.hx",276,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(276)
	return this->_layout;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_layout,return )

::haxe::ui::toolkit::core::interfaces::ILayout DisplayObjectContainer_obj::set_layout( ::haxe::ui::toolkit::core::interfaces::ILayout value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","set_layout",0x37f3e788,"haxe.ui.toolkit.core.DisplayObjectContainer.set_layout","haxe/ui/toolkit/core/DisplayObjectContainer.hx",279,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(280)
	this->_layout = value;
	HX_STACK_LINE(281)
	this->_layout->__Field(HX_CSTRING("set_container"),true)(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(282)
	if ((this->_ready)){
		HX_STACK_LINE(283)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(285)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_layout,return )

bool DisplayObjectContainer_obj::get_autoSize( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","get_autoSize",0xa9a218ba,"haxe.ui.toolkit.core.DisplayObjectContainer.get_autoSize","haxe/ui/toolkit/core/DisplayObjectContainer.hx",290,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(290)
	return this->_autoSize;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_autoSize,return )

bool DisplayObjectContainer_obj::set_autoSize( bool value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","set_autoSize",0xbe9b3c2e,"haxe.ui.toolkit.core.DisplayObjectContainer.set_autoSize","haxe/ui/toolkit/core/DisplayObjectContainer.hx",293,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(294)
	this->_autoSize = value;
	HX_STACK_LINE(295)
	if ((this->_ready)){
		HX_STACK_LINE(296)
		this->invalidate((int)1,null());
	}
	HX_STACK_LINE(298)
	return this->_autoSize;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_autoSize,return )

Void DisplayObjectContainer_obj::dispose( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","dispose",0xd28fd75e,"haxe.ui.toolkit.core.DisplayObjectContainer.dispose","haxe/ui/toolkit/core/DisplayObjectContainer.hx",304,0x6e0042f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(305)
		while((true)){
			HX_STACK_LINE(305)
			if ((!(((this->get_children()->length > (int)0))))){
				HX_STACK_LINE(305)
				break;
			}
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(306)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(306)
				Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(306)
				while((true)){
					HX_STACK_LINE(306)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(306)
						break;
					}
					HX_STACK_LINE(306)
					::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
					HX_STACK_LINE(306)
					++(_g);
					HX_STACK_LINE(307)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(308)
						this->removeChild(child,null());
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(310)
								Array< ::Dynamic > stack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(stack,"stack");
								HX_STACK_LINE(311)
								::String _g2 = ::Std_obj::string(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(311)
								::String _g11 = (HX_CSTRING("Problem removing component: ") + _g2);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(311)
								::String _g21 = (_g11 + HX_CSTRING(", "));		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(311)
								::String _g3 = ::Std_obj::string(child);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(311)
								::String _g4 = (_g21 + _g3);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(311)
								::String _g5 = (_g4 + HX_CSTRING("("));		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(311)
								::String _g6 = ::Std_obj::string(e);		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(311)
								::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(311)
								::String _g8 = (_g7 + HX_CSTRING("), callstack:"));		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(311)
								::haxe::Log_obj::trace(_g8,hx::SourceInfo(HX_CSTRING("DisplayObjectContainer.hx"),311,HX_CSTRING("haxe.ui.toolkit.core.DisplayObjectContainer"),HX_CSTRING("dispose")));
								HX_STACK_LINE(312)
								::String _g9 = ::haxe::CallStack_obj::toString(stack);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(312)
								::haxe::Log_obj::trace(_g9,hx::SourceInfo(HX_CSTRING("DisplayObjectContainer.hx"),312,HX_CSTRING("haxe.ui.toolkit.core.DisplayObjectContainer"),HX_CSTRING("dispose")));
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(317)
		this->super::dispose();
	}
return null();
}


::haxe::ui::toolkit::core::Root DisplayObjectContainer_obj::set_root( ::haxe::ui::toolkit::core::Root value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","set_root",0xbd6f9380,"haxe.ui.toolkit.core.DisplayObjectContainer.set_root","haxe/ui/toolkit/core/DisplayObjectContainer.hx",320,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(321)
	this->super::set_root(value);
	HX_STACK_LINE(322)
	{
		HX_STACK_LINE(322)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(322)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(322)
		while((true)){
			HX_STACK_LINE(322)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(322)
				break;
			}
			HX_STACK_LINE(322)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(322)
			++(_g);
			HX_STACK_LINE(323)
			child->__Field(HX_CSTRING("set_root"),true)(value);
		}
	}
	HX_STACK_LINE(325)
	return value;
}


Dynamic DisplayObjectContainer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","clone",0x4e3eec5c,"haxe.ui.toolkit.core.DisplayObjectContainer.clone","haxe/ui/toolkit/core/DisplayObjectContainer.hx",1,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::DisplayObjectContainer c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	bool _g = this->get_autoSize();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(3)
	c->set_autoSize(_g);
	HX_STACK_LINE(4)
	return c;
}


Dynamic DisplayObjectContainer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.DisplayObjectContainer","self",0x892f176d,"haxe.ui.toolkit.core.DisplayObjectContainer.self","haxe/ui/toolkit/core/DisplayObjectContainer.hx",2,0x6e0042f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::DisplayObjectContainer_obj::__new();
}



DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(_children,"_children");
	HX_MARK_MEMBER_NAME(_layout,"_layout");
	HX_MARK_MEMBER_NAME(_autoSize,"_autoSize");
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(children,"children");
	::haxe::ui::toolkit::core::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_children,"_children");
	HX_VISIT_MEMBER_NAME(_layout,"_layout");
	HX_VISIT_MEMBER_NAME(_autoSize,"_autoSize");
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(children,"children");
	::haxe::ui::toolkit::core::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return get_layout(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_layout") ) { return _layout; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { return inCallProp ? get_children() : children; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"set_root") ) { return set_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { return _children; }
		if (HX_FIELD_EQ(inName,"_autoSize") ) { return _autoSize; }
		if (HX_FIELD_EQ(inName,"findChild") ) { return findChild_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return get_layout_dyn(); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return set_layout_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"findChildAs") ) { return findChildAs_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_children") ) { return get_children_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOfChild") ) { return indexOfChild_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeAllChildren") ) { return removeAllChildren_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"findComponentUnderPoint") ) { return findComponentUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return set_layout(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_layout") ) { _layout=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::ILayout >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"autoSize") ) { return set_autoSize(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_children") ) { _children=inValue.Cast< Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoSize") ) { _autoSize=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_children"));
	outFields->push(HX_CSTRING("_layout"));
	outFields->push(HX_CSTRING("_autoSize"));
	outFields->push(HX_CSTRING("numChildren"));
	outFields->push(HX_CSTRING("layout"));
	outFields->push(HX_CSTRING("children"));
	outFields->push(HX_CSTRING("autoSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >*/ ,(int)offsetof(DisplayObjectContainer_obj,_children),HX_CSTRING("_children")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::ILayout*/ ,(int)offsetof(DisplayObjectContainer_obj,_layout),HX_CSTRING("_layout")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,_autoSize),HX_CSTRING("_autoSize")},
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_CSTRING("numChildren")},
	{hx::fsObject /*Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >*/ ,(int)offsetof(DisplayObjectContainer_obj,children),HX_CSTRING("children")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_children"),
	HX_CSTRING("_layout"),
	HX_CSTRING("_autoSize"),
	HX_CSTRING("initialize"),
	HX_CSTRING("invalidate"),
	HX_CSTRING("numChildren"),
	HX_CSTRING("children"),
	HX_CSTRING("get_numChildren"),
	HX_CSTRING("get_children"),
	HX_CSTRING("indexOfChild"),
	HX_CSTRING("getChildAt"),
	HX_CSTRING("addChildAt"),
	HX_CSTRING("addChild"),
	HX_CSTRING("removeChild"),
	HX_CSTRING("removeChildAt"),
	HX_CSTRING("removeAllChildren"),
	HX_CSTRING("contains"),
	HX_CSTRING("setChildIndex"),
	HX_CSTRING("findChildAs"),
	HX_CSTRING("findChild"),
	HX_CSTRING("findComponentUnderPoint"),
	HX_CSTRING("get_layout"),
	HX_CSTRING("set_layout"),
	HX_CSTRING("get_autoSize"),
	HX_CSTRING("set_autoSize"),
	HX_CSTRING("dispose"),
	HX_CSTRING("set_root"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.DisplayObjectContainer"), hx::TCanCast< DisplayObjectContainer_obj> ,sStaticFields,sMemberFields,
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

void DisplayObjectContainer_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
