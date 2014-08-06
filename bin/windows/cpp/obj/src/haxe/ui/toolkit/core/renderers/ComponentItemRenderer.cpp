#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_HSlider
#include <haxe/ui/toolkit/controls/HSlider.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Image
#include <haxe/ui/toolkit/controls/Image.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_BasicItemRenderer
#include <haxe/ui/toolkit/core/renderers/BasicItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ComponentItemRenderer
#include <haxe/ui/toolkit/core/renderers/ComponentItemRenderer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_renderers_ItemRenderer
#include <haxe/ui/toolkit/core/renderers/ItemRenderer.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace renderers{

Void ComponentItemRenderer_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","new",0x2e410e3a,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.new","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",13,0x3c8dc337)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	super::__construct();
}
;
	return null();
}

//ComponentItemRenderer_obj::~ComponentItemRenderer_obj() { }

Dynamic ComponentItemRenderer_obj::__CreateEmpty() { return  new ComponentItemRenderer_obj; }
hx::ObjectPtr< ComponentItemRenderer_obj > ComponentItemRenderer_obj::__new()
{  hx::ObjectPtr< ComponentItemRenderer_obj > result = new ComponentItemRenderer_obj();
	result->__construct();
	return result;}

Dynamic ComponentItemRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComponentItemRenderer_obj > result = new ComponentItemRenderer_obj();
	result->__construct();
	return result;}

Dynamic ComponentItemRenderer_obj::set_data( Dynamic value){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","set_data",0x963db70d,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.set_data","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",16,0x3c8dc337)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(17)
	::String type = value->__Field(HX_CSTRING("componentType"),true);		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(18)
	if (((type != null()))){
		HX_STACK_LINE(19)
		::Class cls = this->getClassFromType(type);		HX_STACK_VAR(cls,"cls");
		struct _Function_2_1{
			inline static bool Block( hx::ObjectPtr< ::haxe::ui::toolkit::core::renderers::ComponentItemRenderer_obj > __this,::Class &cls){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",20,0x3c8dc337)
				{
					HX_STACK_LINE(20)
					bool _g = ::Std_obj::is(__this->_component,cls);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(20)
					return (_g == false);
				}
				return null();
			}
		};
		HX_STACK_LINE(20)
		if (((  (((cls != null()))) ? bool(_Function_2_1::Block(this,cls)) : bool(false) ))){
			HX_STACK_LINE(21)
			if (((this->_component != null()))){
				HX_STACK_LINE(22)
				this->removeChild(this->_component,null());
			}
			HX_STACK_LINE(24)
			::haxe::ui::toolkit::core::Component _g1 = ::Type_obj::createInstance(cls,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(24)
			this->_component = _g1;
			HX_STACK_LINE(25)
			this->_component->set_verticalAlign(HX_CSTRING("center"));
			HX_STACK_LINE(26)
			this->_component->set_id(HX_CSTRING("componentValue"));
			HX_STACK_LINE(27)
			this->_component->set_styleName(value->__Field(HX_CSTRING("controlId"),true));
			HX_STACK_LINE(28)
			if (((value->__Field(HX_CSTRING("componentSize"),true) != null()))){
				HX_STACK_LINE(29)
				int cx = value->__Field(HX_CSTRING("componentSize"),true);		HX_STACK_VAR(cx,"cx");
				HX_STACK_LINE(30)
				this->_component->set_autoSize(false);
				HX_STACK_LINE(31)
				this->_component->set_width(cx);
			}
			HX_STACK_LINE(33)
			int _g2 = this->get_numChildren();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(33)
			this->addChildAt(this->_component,_g2);
		}
	}
	HX_STACK_LINE(36)
	return this->super::set_data(value);
}


::Class ComponentItemRenderer_obj::getClassFromType( ::String type){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","getClassFromType",0x9370390c,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.getClassFromType","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",39,0x3c8dc337)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(40)
	::String _g = type.toLowerCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(40)
	type = _g;
	HX_STACK_LINE(41)
	if (((type == HX_CSTRING("button")))){
		HX_STACK_LINE(42)
		return hx::ClassOf< ::haxe::ui::toolkit::controls::Button >();
	}
	else{
		HX_STACK_LINE(43)
		if (((type == HX_CSTRING("slider")))){
			HX_STACK_LINE(44)
			return hx::ClassOf< ::haxe::ui::toolkit::controls::HSlider >();
		}
		else{
			HX_STACK_LINE(45)
			if (((type == HX_CSTRING("image")))){
				HX_STACK_LINE(46)
				return hx::ClassOf< ::haxe::ui::toolkit::controls::Image >();
			}
		}
	}
	HX_STACK_LINE(48)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ComponentItemRenderer_obj,getClassFromType,return )

Dynamic ComponentItemRenderer_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","clone",0xba7efbb7,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.clone","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",1,0x3c8dc337)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::core::renderers::ComponentItemRenderer c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic ComponentItemRenderer_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.core.renderers.ComponentItemRenderer","self",0x4df96c72,"haxe.ui.toolkit.core.renderers.ComponentItemRenderer.self","haxe/ui/toolkit/core/renderers/ComponentItemRenderer.hx",2,0x3c8dc337)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::core::renderers::ComponentItemRenderer_obj::__new();
}



ComponentItemRenderer_obj::ComponentItemRenderer_obj()
{
}

void ComponentItemRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentItemRenderer);
	HX_MARK_MEMBER_NAME(_component,"_component");
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComponentItemRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_component,"_component");
	::haxe::ui::toolkit::core::renderers::BasicItemRenderer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ComponentItemRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { return _component; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getClassFromType") ) { return getClassFromType_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ComponentItemRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_component") ) { _component=inValue.Cast< ::haxe::ui::toolkit::core::Component >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentItemRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_component"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::core::Component*/ ,(int)offsetof(ComponentItemRenderer_obj,_component),HX_CSTRING("_component")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_component"),
	HX_CSTRING("set_data"),
	HX_CSTRING("getClassFromType"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentItemRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentItemRenderer_obj::__mClass,"__mClass");
};

#endif

Class ComponentItemRenderer_obj::__mClass;

void ComponentItemRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.renderers.ComponentItemRenderer"), hx::TCanCast< ComponentItemRenderer_obj> ,sStaticFields,sMemberFields,
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

void ComponentItemRenderer_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace renderers
