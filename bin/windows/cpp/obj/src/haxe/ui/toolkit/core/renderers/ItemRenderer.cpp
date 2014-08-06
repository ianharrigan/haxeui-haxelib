#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Progress
#include <haxe/ui/toolkit/controls/Progress.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Slider
#include <haxe/ui/toolkit/controls/Slider.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_StateComponent
#include <haxe/ui/toolkit/core/StateComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDirectional
#include <haxe/ui/toolkit/core/interfaces/IDirectional.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IFocusable
#include <haxe/ui/toolkit/core/interfaces/IFocusable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IItemRenderer
#include <haxe/ui/toolkit/core/interfaces/IItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IScrollable
#include <haxe/ui/toolkit/core/interfaces/IScrollable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_events_UIEvent
#include <haxe/ui/toolkit/events/UIEvent.h>
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
namespace renderers{

Void ItemRenderer_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","new",0xd0092613,"haxe.ui.toolkit.core.renderers.ItemRenderer.new","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",22,0xa7be6c1c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	this->get_sprite()->buttonMode = true;
	HX_STACK_LINE(25)
	this->get_sprite()->useHandCursor = true;
	HX_STACK_LINE(26)
	this->set_state(HX_CSTRING("normal"));
}
;
	return null();
}

//ItemRenderer_obj::~ItemRenderer_obj() { }

Dynamic ItemRenderer_obj::__CreateEmpty() { return  new ItemRenderer_obj; }
hx::ObjectPtr< ItemRenderer_obj > ItemRenderer_obj::__new()
{  hx::ObjectPtr< ItemRenderer_obj > result = new ItemRenderer_obj();
	result->__construct();
	return result;}

Dynamic ItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ItemRenderer_obj > result = new ItemRenderer_obj();
	result->__construct();
	return result;}

hx::Object *ItemRenderer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IItemRenderer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IItemRenderer_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IClonable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IClonable_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IStateComponent_obj *();
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer_obj *();
	return super::__ToInterface(inType);
}

Void ItemRenderer_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","initialize",0x6bd047fd,"haxe.ui.toolkit.core.renderers.ItemRenderer.initialize","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",29,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		this->super::initialize();
		HX_STACK_LINE(32)
		this->addStatesRecursively(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void ItemRenderer_obj::addStatesRecursively( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","addStatesRecursively",0xc0d555e9,"haxe.ui.toolkit.core.renderers.ItemRenderer.addStatesRecursively","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",35,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(36)
		if (((  ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >()))) ? bool((c != hx::ObjectPtr<OBJ_>(this))) : bool(false) ))){
			HX_STACK_LINE(37)
			Array< ::String > _g = this->get_states();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			(hx::TCast< haxe::ui::toolkit::core::StateComponent >::cast(c))->addStates(_g,null());
		}
		HX_STACK_LINE(40)
		{
			HX_STACK_LINE(40)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = c->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(40)
			while((true)){
				HX_STACK_LINE(40)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(40)
					break;
				}
				HX_STACK_LINE(40)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(40)
				++(_g);
				HX_STACK_LINE(41)
				if ((this->isInteractive(c))){
					HX_STACK_LINE(42)
					continue;
				}
				HX_STACK_LINE(45)
				if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >()))){
					HX_STACK_LINE(46)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(46)
					_g11 = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
					HX_STACK_LINE(46)
					this->addStatesRecursively(_g11);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,addStatesRecursively,(void))

Dynamic ItemRenderer_obj::get_data( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","get_data",0xc9d63320,"haxe.ui.toolkit.core.renderers.ItemRenderer.get_data","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",54,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,get_data,return )

Dynamic ItemRenderer_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","set_data",0x78338c94,"haxe.ui.toolkit.core.renderers.ItemRenderer.set_data","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",56,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(57)
	this->_data = value;
	HX_STACK_LINE(58)
	this->updateComponents();
	HX_STACK_LINE(59)
	this->attachEvents(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(60)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,set_data,return )

Void ItemRenderer_obj::update( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","update",0x5be48236,"haxe.ui.toolkit.core.renderers.ItemRenderer.update","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",64,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->updateComponents();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,update,(void))

bool ItemRenderer_obj::allowSelection( Float stageX,Float stageY){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","allowSelection",0xfb4a4bb0,"haxe.ui.toolkit.core.renderers.ItemRenderer.allowSelection","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",67,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stageX,"stageX")
	HX_STACK_ARG(stageY,"stageY")
	HX_STACK_LINE(68)
	bool allow = true;		HX_STACK_VAR(allow,"allow");
	HX_STACK_LINE(69)
	::haxe::ui::toolkit::core::interfaces::IDisplayObject c = this->findComponentUnderPoint(stageX,stageY);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(70)
	while((true)){
		HX_STACK_LINE(70)
		if ((!(((c != null()))))){
			HX_STACK_LINE(70)
			break;
		}
		HX_STACK_LINE(71)
		if ((this->isInteractive(c))){
			HX_STACK_LINE(72)
			allow = false;
			HX_STACK_LINE(73)
			break;
		}
		HX_STACK_LINE(76)
		bool _g = ::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObjectContainer >());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		if (((_g == false))){
			HX_STACK_LINE(77)
			break;
		}
		HX_STACK_LINE(79)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g1 = (hx::TCast< haxe::ui::toolkit::core::DisplayObjectContainer >::cast(c))->findComponentUnderPoint(stageX,stageY);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		c = _g1;
	}
	HX_STACK_LINE(81)
	return allow;
}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,allowSelection,return )

Void ItemRenderer_obj::attachEvents( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","attachEvents",0x6b4b3cab,"haxe.ui.toolkit.core.renderers.ItemRenderer.attachEvents","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",85,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(85)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(85)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = c->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(85)
		while((true)){
			HX_STACK_LINE(85)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(85)
				break;
			}
			HX_STACK_LINE(85)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(85)
			++(_g);
			HX_STACK_LINE(86)
			if ((this->isInteractive(child))){
				HX_STACK_LINE(87)
				this->attachEvent(child);
			}
			else{
				HX_STACK_LINE(89)
				if ((::Std_obj::is(child,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >()))){
					HX_STACK_LINE(90)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(90)
					_g2 = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
					HX_STACK_LINE(90)
					this->attachEvents(_g2);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,attachEvents,(void))

Void ItemRenderer_obj::attachEvent( ::haxe::ui::toolkit::core::interfaces::IDisplayObject c){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","attachEvent",0x9dc132c8,"haxe.ui.toolkit.core.renderers.ItemRenderer.attachEvent","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",97,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(97)
		if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::controls::Slider >()))){
			HX_STACK_LINE(98)
			c->__Field(HX_CSTRING("removeEventListener"),true)(HX_CSTRING("haxeui_change"),this->_onComponentEvent_dyn(),null());
			HX_STACK_LINE(99)
			c->__Field(HX_CSTRING("addEventListener"),true)(HX_CSTRING("haxeui_change"),this->_onComponentEvent_dyn(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(100)
			if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::controls::Button >()))){
				HX_STACK_LINE(101)
				c->__Field(HX_CSTRING("removeEventListener"),true)(HX_CSTRING("haxeui_click"),this->_onComponentEvent_dyn(),null());
				HX_STACK_LINE(102)
				c->__Field(HX_CSTRING("addEventListener"),true)(HX_CSTRING("haxeui_click"),this->_onComponentEvent_dyn(),null(),null(),null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,attachEvent,(void))

Void ItemRenderer_obj::_onComponentEvent( ::haxe::ui::toolkit::events::UIEvent event){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","_onComponentEvent",0x240d3eee,"haxe.ui.toolkit.core.renderers.ItemRenderer._onComponentEvent","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",106,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(107)
		::haxe::ui::toolkit::core::Component _g = event->get_component();		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( ::haxe::ui::toolkit::events::UIEvent &event){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",107,0xa7be6c1c)
				{
					HX_STACK_LINE(107)
					::String _g1 = event->get_component()->get_id();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(107)
					return (_g1 != null());
				}
				return null();
			}
		};
		HX_STACK_LINE(107)
		if (((  (((  (((_g != null()))) ? bool(_Function_1_1::Block(event)) : bool(false) ))) ? bool((event->get_component()->get_id().length > (int)0)) : bool(false) ))){
			HX_STACK_LINE(108)
			Dynamic o = this->_data;		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(108)
			::String field = event->get_component()->get_id();		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(108)
			Dynamic value = event->get_component()->get_value();		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(108)
			if (((o != null()))){
				HX_STACK_LINE(108)
				o->__SetField(field,value,false);
			}
		}
		HX_STACK_LINE(111)
		this->dispatchProxyEvent(HX_CSTRING("haxeui_componentEvent"),event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,_onComponentEvent,(void))

Void ItemRenderer_obj::dispatchProxyEvent( ::String type,::haxe::ui::toolkit::events::UIEvent refEvent){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","dispatchProxyEvent",0xd82085d3,"haxe.ui.toolkit.core.renderers.ItemRenderer.dispatchProxyEvent","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",115,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(refEvent,"refEvent")
		HX_STACK_LINE(115)
		if (((this->eventDispatcher != null()))){
			HX_STACK_LINE(116)
			::haxe::ui::toolkit::core::Component c = null();		HX_STACK_VAR(c,"c");
			struct _Function_2_1{
				inline static bool Block( ::haxe::ui::toolkit::events::UIEvent &refEvent){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",117,0xa7be6c1c)
					{
						HX_STACK_LINE(117)
						::haxe::ui::toolkit::core::Component _g = refEvent->get_component();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(117)
						return (_g != null());
					}
					return null();
				}
			};
			HX_STACK_LINE(117)
			if (((  (((refEvent != null()))) ? bool(_Function_2_1::Block(refEvent)) : bool(false) ))){
				HX_STACK_LINE(118)
				::haxe::ui::toolkit::core::Component _g1 = refEvent->get_component();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(118)
				c = _g1;
			}
			HX_STACK_LINE(120)
			::haxe::ui::toolkit::events::UIEvent uiEvent = ::haxe::ui::toolkit::events::UIEvent_obj::__new(type,c,null(),null());		HX_STACK_VAR(uiEvent,"uiEvent");
			HX_STACK_LINE(121)
			uiEvent->data = this->_data;
			HX_STACK_LINE(122)
			uiEvent->data->__FieldRef(HX_CSTRING("update")) = this->update_dyn();
			HX_STACK_LINE(123)
			this->eventDispatcher->dispatchEvent(uiEvent);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,dispatchProxyEvent,(void))

Void ItemRenderer_obj::updateComponents( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","updateComponents",0x13155aec,"haxe.ui.toolkit.core.renderers.ItemRenderer.updateComponents","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",127,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(128)
		Array< ::String > fields = ::Reflect_obj::fields(this->_data);		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			while((true)){
				HX_STACK_LINE(129)
				if ((!(((_g < fields->length))))){
					HX_STACK_LINE(129)
					break;
				}
				HX_STACK_LINE(129)
				::String f = fields->__get(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(129)
				++(_g);
				HX_STACK_LINE(130)
				::String componentId = f;		HX_STACK_VAR(componentId,"componentId");
				HX_STACK_LINE(131)
				Dynamic value = ::Reflect_obj::field(this->_data,f);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(132)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject c = this->findChild(componentId,null(),true);		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(133)
				if (((c != null()))){
					HX_STACK_LINE(134)
					this->updateComponentValue(c,value);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ItemRenderer_obj,updateComponents,(void))

Void ItemRenderer_obj::updateComponentValue( ::haxe::ui::toolkit::core::interfaces::IDisplayObject c,Dynamic value){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","updateComponentValue",0x422c7a4a,"haxe.ui.toolkit.core.renderers.ItemRenderer.updateComponentValue","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",140,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(140)
		if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::Component >()))){
			HX_STACK_LINE(141)
			(hx::TCast< haxe::ui::toolkit::core::Component >::cast(c))->set_value(value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,updateComponentValue,(void))

Array< ::String > ItemRenderer_obj::get_states( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","get_states",0x75985fb8,"haxe.ui.toolkit.core.renderers.ItemRenderer.get_states","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",150,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	return Array_obj< ::String >::__new().Add(HX_CSTRING("normal")).Add(HX_CSTRING("over")).Add(HX_CSTRING("selected")).Add(HX_CSTRING("disabled"));
}


::String ItemRenderer_obj::set_state( ::String value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","set_state",0x646adc67,"haxe.ui.toolkit.core.renderers.ItemRenderer.set_state","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",153,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(154)
	this->setStateRecursively(value,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(155)
	return this->super::set_state(value);
}


Void ItemRenderer_obj::setStateRecursively( ::String value,::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c){
{
		HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","setStateRecursively",0x30c2fb63,"haxe.ui.toolkit.core.renderers.ItemRenderer.setStateRecursively","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",158,0xa7be6c1c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(159)
		if (((  ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >()))) ? bool((c != hx::ObjectPtr<OBJ_>(this))) : bool(false) ))){
			HX_STACK_LINE(160)
			(hx::TCast< haxe::ui::toolkit::core::StateComponent >::cast(c))->set_state(value);
		}
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(163)
			Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = c->__Field(HX_CSTRING("get_children"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(163)
			while((true)){
				HX_STACK_LINE(163)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(163)
					break;
				}
				HX_STACK_LINE(163)
				::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(163)
				++(_g);
				HX_STACK_LINE(164)
				if ((this->isInteractive(c))){
					HX_STACK_LINE(165)
					continue;
				}
				HX_STACK_LINE(168)
				if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >()))){
					HX_STACK_LINE(169)
					::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(169)
					_g2 = hx::TCast< haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer >::cast(child);
					HX_STACK_LINE(169)
					this->setStateRecursively(value,_g2);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ItemRenderer_obj,setStateRecursively,(void))

bool ItemRenderer_obj::isInteractive( ::haxe::ui::toolkit::core::interfaces::IDisplayObject c){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","isInteractive",0x9e94218b,"haxe.ui.toolkit.core.renderers.ItemRenderer.isInteractive","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",174,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(175)
	if (((  ((!(::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::controls::Button >())))) ? bool(::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::controls::Slider >())) : bool(true) ))){
		HX_STACK_LINE(176)
		return true;
	}
	HX_STACK_LINE(178)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(ItemRenderer_obj,isInteractive,return )

Dynamic ItemRenderer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","clone",0x705f7bd0,"haxe.ui.toolkit.core.renderers.ItemRenderer.clone","haxe/ui/toolkit/core/Macros.hx",490,0x3fba9eca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	::haxe::ui::toolkit::core::renderers::ItemRenderer c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(185)
	{
		HX_STACK_LINE(185)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(185)
		Array< ::haxe::ui::toolkit::core::interfaces::IDisplayObject > _g1 = this->get_children();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(185)
		while((true)){
			HX_STACK_LINE(185)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(185)
				break;
			}
			HX_STACK_LINE(185)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject child = _g1->__get(_g);		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(185)
			++(_g);
			HX_STACK_LINE(186)
			::haxe::ui::toolkit::core::interfaces::IDisplayObject _g2 = child->__Field(HX_CSTRING("clone"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(186)
			c->addChild(_g2);
		}
	}
	HX_STACK_LINE(1)
	return c;
}


Dynamic ItemRenderer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ItemRenderer","self",0x3b463279,"haxe.ui.toolkit.core.renderers.ItemRenderer.self","haxe/ui/toolkit/core/renderers/ItemRenderer.hx",1,0xa7be6c1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1)
	return ::haxe::ui::toolkit::core::renderers::ItemRenderer_obj::__new();
}


::String ItemRenderer_obj::STATE_NORMAL;

::String ItemRenderer_obj::STATE_OVER;

::String ItemRenderer_obj::STATE_SELECTED;

::String ItemRenderer_obj::STATE_DISABLED;


ItemRenderer_obj::ItemRenderer_obj()
{
}

void ItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ItemRenderer);
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(eventDispatcher,"eventDispatcher");
	HX_MARK_MEMBER_NAME(_data,"_data");
	::haxe::ui::toolkit::core::StateComponent_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hash,"hash");
	HX_VISIT_MEMBER_NAME(eventDispatcher,"eventDispatcher");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	::haxe::ui::toolkit::core::StateComponent_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ItemRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return hash; }
		if (HX_FIELD_EQ(inName,"data") ) { return get_data(); }
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_state") ) { return set_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_states") ) { return get_states_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"attachEvent") ) { return attachEvent_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"attachEvents") ) { return attachEvents_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInteractive") ) { return isInteractive_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"allowSelection") ) { return allowSelection_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"eventDispatcher") ) { return eventDispatcher; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"updateComponents") ) { return updateComponents_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onComponentEvent") ) { return _onComponentEvent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dispatchProxyEvent") ) { return dispatchProxyEvent_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setStateRecursively") ) { return setStateRecursively_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addStatesRecursively") ) { return addStatesRecursively_dyn(); }
		if (HX_FIELD_EQ(inName,"updateComponentValue") ) { return updateComponentValue_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ItemRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { return set_data(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"eventDispatcher") ) { eventDispatcher=inValue.Cast< ::haxe::ui::toolkit::core::interfaces::IEventDispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("hash"));
	outFields->push(HX_CSTRING("eventDispatcher"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STATE_NORMAL"),
	HX_CSTRING("STATE_OVER"),
	HX_CSTRING("STATE_SELECTED"),
	HX_CSTRING("STATE_DISABLED"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(ItemRenderer_obj,hash),HX_CSTRING("hash")},
	{hx::fsObject /*::haxe::ui::toolkit::core::interfaces::IEventDispatcher*/ ,(int)offsetof(ItemRenderer_obj,eventDispatcher),HX_CSTRING("eventDispatcher")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ItemRenderer_obj,_data),HX_CSTRING("_data")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("hash"),
	HX_CSTRING("eventDispatcher"),
	HX_CSTRING("initialize"),
	HX_CSTRING("addStatesRecursively"),
	HX_CSTRING("_data"),
	HX_CSTRING("get_data"),
	HX_CSTRING("set_data"),
	HX_CSTRING("update"),
	HX_CSTRING("allowSelection"),
	HX_CSTRING("attachEvents"),
	HX_CSTRING("attachEvent"),
	HX_CSTRING("_onComponentEvent"),
	HX_CSTRING("dispatchProxyEvent"),
	HX_CSTRING("updateComponents"),
	HX_CSTRING("updateComponentValue"),
	HX_CSTRING("get_states"),
	HX_CSTRING("set_state"),
	HX_CSTRING("setStateRecursively"),
	HX_CSTRING("isInteractive"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::STATE_OVER,"STATE_OVER");
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::STATE_SELECTED,"STATE_SELECTED");
	HX_MARK_MEMBER_NAME(ItemRenderer_obj::STATE_DISABLED,"STATE_DISABLED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::STATE_OVER,"STATE_OVER");
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::STATE_SELECTED,"STATE_SELECTED");
	HX_VISIT_MEMBER_NAME(ItemRenderer_obj::STATE_DISABLED,"STATE_DISABLED");
};

#endif

Class ItemRenderer_obj::__mClass;

void ItemRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.renderers.ItemRenderer"), hx::TCanCast< ItemRenderer_obj> ,sStaticFields,sMemberFields,
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

void ItemRenderer_obj::__boot()
{
	STATE_NORMAL= HX_CSTRING("normal");
	STATE_OVER= HX_CSTRING("over");
	STATE_SELECTED= HX_CSTRING("selected");
	STATE_DISABLED= HX_CSTRING("disabled");
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace renderers
