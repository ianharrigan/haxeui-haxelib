#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#include <haxe/ui/toolkit/controls/popups/Popup.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_PopupContent
#include <haxe/ui/toolkit/controls/popups/PopupContent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Component
#include <haxe/ui/toolkit/core/Component.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Controller
#include <haxe/ui/toolkit/core/Controller.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Root
#include <haxe/ui/toolkit/core/Root.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_Toolkit
#include <haxe/ui/toolkit/core/Toolkit.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{

Void Controller_obj::__construct(Dynamic view,Dynamic options)
{
HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","new",0x99ecc45b,"haxe.ui.toolkit.core.Controller.new","haxe/ui/toolkit/core/Controller.hx",18,0xc6f4a5b5)
HX_STACK_THIS(this)
HX_STACK_ARG(view,"view")
HX_STACK_ARG(options,"options")
{
	HX_STACK_LINE(19)
	if ((::Std_obj::is(view,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >()))){
		HX_STACK_LINE(20)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(20)
		_g = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(view);
		HX_STACK_LINE(20)
		this->_view = _g;
	}
	else{
		HX_STACK_LINE(21)
		if ((::Std_obj::is(view,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(22)
			::Class cls;		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(22)
			cls = hx::TCast< Class >::cast(view);
			HX_STACK_LINE(23)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g1 = ::Type_obj::createInstance(cls,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(23)
			this->_view = _g1;
		}
		else{
			HX_STACK_LINE(24)
			if (((view != null()))){
				HX_STACK_LINE(25)
				options = view;
			}
		}
	}
	HX_STACK_LINE(28)
	if (((this->_view == null()))){
		HX_STACK_LINE(29)
		::haxe::ui::toolkit::core::Component _g2 = ::haxe::ui::toolkit::core::Component_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(29)
		this->_view = _g2;
	}
	HX_STACK_LINE(32)
	if (((options != null()))){
		HX_STACK_LINE(33)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		Array< ::String > _g1 = ::Reflect_obj::fields(options);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		while((true)){
			HX_STACK_LINE(33)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(33)
				break;
			}
			HX_STACK_LINE(33)
			::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(33)
			++(_g);
			HX_STACK_LINE(34)
			Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				Dynamic o = this->_view;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(34)
				if (((o == null()))){
					HX_STACK_LINE(34)
					_g3 = null();
				}
				else{
					HX_STACK_LINE(34)
					_g3 = o->__Field((HX_CSTRING("set_") + f),true);
				}
			}
			HX_STACK_LINE(34)
			if (((_g3 != null()))){
				HX_STACK_LINE(35)
				Dynamic o = this->_view;		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(35)
				Dynamic value = ::Reflect_obj::field(options,f);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(35)
				if (((o != null()))){
					HX_STACK_LINE(35)
					o->__SetField(f,value,true);
				}
			}
		}
	}
	HX_STACK_LINE(40)
	this->refereshNamedComponents();
}
;
	return null();
}

//Controller_obj::~Controller_obj() { }

Dynamic Controller_obj::__CreateEmpty() { return  new Controller_obj; }
hx::ObjectPtr< Controller_obj > Controller_obj::__new(Dynamic view,Dynamic options)
{  hx::ObjectPtr< Controller_obj > result = new Controller_obj();
	result->__construct(view,options);
	return result;}

Dynamic Controller_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Controller_obj > result = new Controller_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic Controller_obj::addChild( Dynamic child,Dynamic options){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","addChild",0x72c08de0,"haxe.ui.toolkit.core.Controller.addChild","haxe/ui/toolkit/core/Controller.hx",43,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(options,"options")
	HX_STACK_LINE(44)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject childObject = null();		HX_STACK_VAR(childObject,"childObject");
	HX_STACK_LINE(45)
	if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >()))){
		HX_STACK_LINE(46)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		_g = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(child);
		HX_STACK_LINE(46)
		childObject = _g;
	}
	else{
		HX_STACK_LINE(47)
		if ((::Std_obj::is(child,hx::ClassOf< ::Class >()))){
			HX_STACK_LINE(48)
			::Class cls;		HX_STACK_VAR(cls,"cls");
			HX_STACK_LINE(48)
			cls = hx::TCast< Class >::cast(child);
			HX_STACK_LINE(49)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g1 = ::Type_obj::createInstance(cls,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(49)
			childObject = _g1;
		}
		else{
			HX_STACK_LINE(50)
			if (((child != null()))){
				HX_STACK_LINE(51)
				options = child;
			}
		}
	}
	HX_STACK_LINE(54)
	if (((childObject == null()))){
		HX_STACK_LINE(55)
		::haxe::ui::toolkit::core::Component _g2 = ::haxe::ui::toolkit::core::Component_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(55)
		childObject = _g2;
	}
	HX_STACK_LINE(58)
	if (((options != null()))){
		HX_STACK_LINE(59)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		Array< ::String > _g1 = ::Reflect_obj::fields(options);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		while((true)){
			HX_STACK_LINE(59)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(59)
				break;
			}
			HX_STACK_LINE(59)
			::String f = _g1->__get(_g);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(59)
			++(_g);
			HX_STACK_LINE(60)
			Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(60)
			_g3 = (  (((childObject == null()))) ? Dynamic(null()) : Dynamic(childObject->__Field((HX_CSTRING("set_") + f),true)) );
			HX_STACK_LINE(60)
			if (((_g3 != null()))){
				HX_STACK_LINE(61)
				Dynamic value = ::Reflect_obj::field(options,f);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(61)
				if (((childObject != null()))){
					HX_STACK_LINE(61)
					childObject->__SetField(f,value,true);
				}
			}
		}
	}
	HX_STACK_LINE(66)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject retVal = this->_view->addChild(childObject);		HX_STACK_VAR(retVal,"retVal");
	HX_STACK_LINE(67)
	this->refereshNamedComponents();
	HX_STACK_LINE(68)
	return retVal;
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,addChild,return )

Void Controller_obj::attachEvent( ::String id,::String type,Dynamic listener){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","attachEvent",0xd5585910,"haxe.ui.toolkit.core.Controller.attachEvent","haxe/ui/toolkit/core/Controller.hx",71,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(72)
		::haxe::ui::toolkit::core::Component c = this->getComponent(id);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(73)
		if (((c != null()))){
			HX_STACK_LINE(74)
			c->addEventListener(type,listener,null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Controller_obj,attachEvent,(void))

Void Controller_obj::detachEvent( ::String id,::String type,Dynamic listener){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","detachEvent",0x139694c2,"haxe.ui.toolkit.core.Controller.detachEvent","haxe/ui/toolkit/core/Controller.hx",78,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(79)
		::haxe::ui::toolkit::core::Component c = this->getComponent(id);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(80)
		if (((c != null()))){
			HX_STACK_LINE(81)
			c->removeEventListener(type,listener,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Controller_obj,detachEvent,(void))

Void Controller_obj::detachEvents( ::String id,::String type){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","detachEvents",0x102b9571,"haxe.ui.toolkit.core.Controller.detachEvents","haxe/ui/toolkit/core/Controller.hx",85,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(86)
		::haxe::ui::toolkit::core::Component c = this->getComponent(id);		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(87)
		if (((c != null()))){
			HX_STACK_LINE(88)
			c->removeEventListenerType(type);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,detachEvents,(void))

::haxe::ui::toolkit::core::Component Controller_obj::getComponent( ::String id){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","getComponent",0xcadec1ec,"haxe.ui.toolkit.core.Controller.getComponent","haxe/ui/toolkit/core/Controller.hx",93,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(93)
	return this->getComponentAs(id,hx::ClassOf< ::haxe::ui::toolkit::core::Component >());
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,getComponent,return )

Dynamic Controller_obj::getComponentAs( ::String id,::Class type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","getComponentAs",0x51844dfe,"haxe.ui.toolkit.core.Controller.getComponentAs","haxe/ui/toolkit/core/Controller.hx",96,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(97)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c = this->_namedComponents->get(id);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(98)
	if (((c == null()))){
		HX_STACK_LINE(99)
		return null();
	}
	HX_STACK_LINE(102)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,getComponentAs,return )

Void Controller_obj::refereshNamedComponents( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","refereshNamedComponents",0x484f5b10,"haxe.ui.toolkit.core.Controller.refereshNamedComponents","haxe/ui/toolkit/core/Controller.hx",105,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		this->_namedComponents = _g;
		HX_STACK_LINE(107)
		this->addNamedComponentsFrom(this->_view);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,refereshNamedComponents,(void))

Void Controller_obj::addNamedComponentsFrom( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer parent){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","addNamedComponentsFrom",0xd21af27d,"haxe.ui.toolkit.core.Controller.addNamedComponentsFrom","haxe/ui/toolkit/core/Controller.hx",110,0xc6f4a5b5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(parent,"parent")
		HX_STACK_LINE(111)
		if (((parent == null()))){
			HX_STACK_LINE(112)
			return null();
		}
		struct _Function_1_1{
			inline static bool Block( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer &parent){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/Controller.hx",115,0xc6f4a5b5)
				{
					HX_STACK_LINE(115)
					::String _g = parent->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(115)
					return (_g != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(115)
		if (((  (((parent != null()))) ? bool(_Function_1_1::Block(parent)) : bool(false) ))){
			HX_STACK_LINE(116)
			::String _g1 = parent->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(116)
			this->_namedComponents->set(_g1,parent);
		}
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(119)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = parent->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(119)
			while((true)){
				HX_STACK_LINE(119)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(119)
					break;
				}
				HX_STACK_LINE(119)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(119)
				++(_g);
				HX_STACK_LINE(120)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(120)
				_g2 = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
				HX_STACK_LINE(120)
				this->addNamedComponentsFrom(_g2);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Controller_obj,addNamedComponentsFrom,(void))

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer Controller_obj::get_view( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","get_view",0x81b3ac13,"haxe.ui.toolkit.core.Controller.get_view","haxe/ui/toolkit/core/Controller.hx",125,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	return this->_view;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_view,return )

::haxe::ui::toolkit::core::Root Controller_obj::get_root( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","get_root",0x7f1367d0,"haxe.ui.toolkit.core.Controller.get_root","haxe/ui/toolkit/core/Controller.hx",128,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	if (((this->_view == null()))){
		HX_STACK_LINE(130)
		return null();
	}
	HX_STACK_LINE(132)
	return this->_view->__Field(HX_CSTRING("get_root"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_root,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::get_popup( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","get_popup",0x8b1b08be,"haxe.ui.toolkit.core.Controller.get_popup","haxe/ui/toolkit/core/Controller.hx",135,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(136)
	::haxe::ui::toolkit::controls::popups::Popup popup = null();		HX_STACK_VAR(popup,"popup");
	HX_STACK_LINE(137)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g = this->get_view()->__Field(HX_CSTRING("get_parent"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(137)
	if ((::Std_obj::is(_g,hx::ClassOf< ::haxe::ui::toolkit::controls::popups::PopupContent >()))){
		HX_STACK_LINE(138)
		popup = (hx::TCast< haxe::ui::toolkit::controls::popups::PopupContent >::cast(this->get_view()->__Field(HX_CSTRING("get_parent"),true)()))->popup;
	}
	HX_STACK_LINE(140)
	return popup;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_popup,return )

::haxe::ds::StringMap Controller_obj::get_namedComponents( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","get_namedComponents",0xbd013341,"haxe.ui.toolkit.core.Controller.get_namedComponents","haxe/ui/toolkit/core/Controller.hx",145,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	return this->_namedComponents;
}


HX_DEFINE_DYNAMIC_FUNC0(Controller_obj,get_namedComponents,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showPopup( ::String text,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showPopup",0x75d6122a,"haxe.ui.toolkit.core.Controller.showPopup","haxe/ui/toolkit/core/Controller.hx",149,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(149)
		return this->showSimplePopup(text,title,config,fn);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Controller_obj,showPopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showSimplePopup( ::String text,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showSimplePopup",0x4eb91b18,"haxe.ui.toolkit.core.Controller.showSimplePopup","haxe/ui/toolkit/core/Controller.hx",153,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(153)
		return ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showSimple(text,title,config,fn);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Controller_obj,showSimplePopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showCustomPopup( Dynamic content,::String title,Dynamic __o_config,Dynamic fn){
Dynamic config = __o_config.Default(1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showCustomPopup",0xca5d8b39,"haxe.ui.toolkit.core.Controller.showCustomPopup","haxe/ui/toolkit/core/Controller.hx",156,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(content,"content")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(157)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject display = null();		HX_STACK_VAR(display,"display");
		HX_STACK_LINE(158)
		if ((::Std_obj::is(content,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObject >()))){
			HX_STACK_LINE(159)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(159)
			_g = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObject >::cast(content);
			HX_STACK_LINE(159)
			display = _g;
		}
		else{
			HX_STACK_LINE(160)
			if ((::Std_obj::is(content,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(161)
				::String _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(161)
				_g1 = hx::TCast< String >::cast(content);
				HX_STACK_LINE(161)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject _g2 = ::haxe::ui::toolkit::core::Toolkit_obj::processXmlResource(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(161)
				display = _g2;
			}
		}
		HX_STACK_LINE(163)
		if (((display == null()))){
			HX_STACK_LINE(164)
			return null();
		}
		HX_STACK_LINE(166)
		return ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showCustom(display,title,config,fn);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Controller_obj,showCustomPopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showListPopup( Dynamic items,hx::Null< int >  __o_selectedIndex,::String title,Dynamic fn){
int selectedIndex = __o_selectedIndex.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showListPopup",0xce6da7ec,"haxe.ui.toolkit.core.Controller.showListPopup","haxe/ui/toolkit/core/Controller.hx",170,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(items,"items")
	HX_STACK_ARG(selectedIndex,"selectedIndex")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(170)
		return ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showList(items,selectedIndex,title,fn,null());
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Controller_obj,showListPopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showBusyPopup( ::String text,hx::Null< int >  __o_delay,::String title,Dynamic config,Dynamic fn){
int delay = __o_delay.Default(-1);
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showBusyPopup",0x3f25b531,"haxe.ui.toolkit.core.Controller.showBusyPopup","haxe/ui/toolkit/core/Controller.hx",174,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(config,"config")
	HX_STACK_ARG(fn,"fn")
{
		HX_STACK_LINE(174)
		return ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showBusy(text,delay,title,config,fn);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Controller_obj,showBusyPopup,return )

::haxe::ui::toolkit::controls::popups::Popup Controller_obj::showCalendarPopup( ::String title,Dynamic fn){
	HX_STACK_FRAME("haxe.ui.toolkit.core.Controller","showCalendarPopup",0x0759208c,"haxe.ui.toolkit.core.Controller.showCalendarPopup","haxe/ui/toolkit/core/Controller.hx",178,0xc6f4a5b5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(title,"title")
	HX_STACK_ARG(fn,"fn")
	HX_STACK_LINE(178)
	return ::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->showCalendar(title,fn);
}


HX_DEFINE_DYNAMIC_FUNC2(Controller_obj,showCalendarPopup,return )


Controller_obj::Controller_obj()
{
}

void Controller_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Controller);
	HX_MARK_MEMBER_NAME(_view,"_view");
	HX_MARK_MEMBER_NAME(_namedComponents,"_namedComponents");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(popup,"popup");
	HX_MARK_MEMBER_NAME(namedComponents,"namedComponents");
	HX_MARK_END_CLASS();
}

void Controller_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_view,"_view");
	HX_VISIT_MEMBER_NAME(_namedComponents,"_namedComponents");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(popup,"popup");
	HX_VISIT_MEMBER_NAME(namedComponents,"namedComponents");
}

Dynamic Controller_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return inCallProp ? get_view() : view; }
		if (HX_FIELD_EQ(inName,"root") ) { return inCallProp ? get_root() : root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_view") ) { return _view; }
		if (HX_FIELD_EQ(inName,"popup") ) { return inCallProp ? get_popup() : popup; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"get_view") ) { return get_view_dyn(); }
		if (HX_FIELD_EQ(inName,"get_root") ) { return get_root_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_popup") ) { return get_popup_dyn(); }
		if (HX_FIELD_EQ(inName,"showPopup") ) { return showPopup_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attachEvent") ) { return attachEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"detachEvent") ) { return detachEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"detachEvents") ) { return detachEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"getComponent") ) { return getComponent_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showListPopup") ) { return showListPopup_dyn(); }
		if (HX_FIELD_EQ(inName,"showBusyPopup") ) { return showBusyPopup_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getComponentAs") ) { return getComponentAs_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"namedComponents") ) { return inCallProp ? get_namedComponents() : namedComponents; }
		if (HX_FIELD_EQ(inName,"showSimplePopup") ) { return showSimplePopup_dyn(); }
		if (HX_FIELD_EQ(inName,"showCustomPopup") ) { return showCustomPopup_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_namedComponents") ) { return _namedComponents; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"showCalendarPopup") ) { return showCalendarPopup_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_namedComponents") ) { return get_namedComponents_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"addNamedComponentsFrom") ) { return addNamedComponentsFrom_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"refereshNamedComponents") ) { return refereshNamedComponents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Controller_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::haxe::ui::toolkit::core::Root >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_view") ) { _view=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"popup") ) { popup=inValue.Cast< ::haxe::ui::toolkit::controls::popups::Popup >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"namedComponents") ) { namedComponents=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_namedComponents") ) { _namedComponents=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controller_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_view"));
	outFields->push(HX_CSTRING("_namedComponents"));
	outFields->push(HX_CSTRING("view"));
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("popup"));
	outFields->push(HX_CSTRING("namedComponents"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer*/ ,(int)offsetof(Controller_obj,_view),HX_CSTRING("_view")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Controller_obj,_namedComponents),HX_CSTRING("_namedComponents")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer*/ ,(int)offsetof(Controller_obj,view),HX_CSTRING("view")},
	{hx::fsObject /*::haxe::ui::toolkit::core::Root*/ ,(int)offsetof(Controller_obj,root),HX_CSTRING("root")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::Popup*/ ,(int)offsetof(Controller_obj,popup),HX_CSTRING("popup")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Controller_obj,namedComponents),HX_CSTRING("namedComponents")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_view"),
	HX_CSTRING("_namedComponents"),
	HX_CSTRING("view"),
	HX_CSTRING("root"),
	HX_CSTRING("popup"),
	HX_CSTRING("addChild"),
	HX_CSTRING("attachEvent"),
	HX_CSTRING("detachEvent"),
	HX_CSTRING("detachEvents"),
	HX_CSTRING("getComponent"),
	HX_CSTRING("getComponentAs"),
	HX_CSTRING("refereshNamedComponents"),
	HX_CSTRING("addNamedComponentsFrom"),
	HX_CSTRING("get_view"),
	HX_CSTRING("get_root"),
	HX_CSTRING("get_popup"),
	HX_CSTRING("namedComponents"),
	HX_CSTRING("get_namedComponents"),
	HX_CSTRING("showPopup"),
	HX_CSTRING("showSimplePopup"),
	HX_CSTRING("showCustomPopup"),
	HX_CSTRING("showListPopup"),
	HX_CSTRING("showBusyPopup"),
	HX_CSTRING("showCalendarPopup"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controller_obj::__mClass,"__mClass");
};

#endif

Class Controller_obj::__mClass;

void Controller_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.Controller"), hx::TCanCast< Controller_obj> ,sStaticFields,sMemberFields,
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

void Controller_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
