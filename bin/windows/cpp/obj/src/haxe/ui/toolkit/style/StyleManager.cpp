#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleHelper
#include <haxe/ui/toolkit/style/StyleHelper.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#include <haxe/ui/toolkit/style/StyleManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRule
#include <haxe/ui/toolkit/style/_StyleManager/StyleRule.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style__StyleManager_StyleRulePart
#include <haxe/ui/toolkit/style/_StyleManager/StyleRulePart.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{

Void StyleManager_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","new",0x91bf8c6d,"haxe.ui.toolkit.style.StyleManager.new","haxe/ui/toolkit/style/StyleManager.hx",12,0x60b8f881)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(33)
	this->_cacheStyles = true;
	HX_STACK_LINE(28)
	this->stylesBuilt = (int)0;
	HX_STACK_LINE(37)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	this->_styles = _g;
	HX_STACK_LINE(38)
	Array< ::String > _g1 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(38)
	this->_rules = _g1;
	HX_STACK_LINE(39)
	::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(39)
	this->stylesBuiltFor = _g2;
}
;
	return null();
}

//StyleManager_obj::~StyleManager_obj() { }

Dynamic StyleManager_obj::__CreateEmpty() { return  new StyleManager_obj; }
hx::ObjectPtr< StyleManager_obj > StyleManager_obj::__new()
{  hx::ObjectPtr< StyleManager_obj > result = new StyleManager_obj();
	result->__construct();
	return result;}

Dynamic StyleManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StyleManager_obj > result = new StyleManager_obj();
	result->__construct();
	return result;}

Array< ::String > StyleManager_obj::getRules( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","getRules",0x065be854,"haxe.ui.toolkit.style.StyleManager.getRules","haxe/ui/toolkit/style/StyleManager.hx",43,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return this->_rules;
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,getRules,return )

Void StyleManager_obj::removeStyle( ::String rule){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","removeStyle",0xf61b935a,"haxe.ui.toolkit.style.StyleManager.removeStyle","haxe/ui/toolkit/style/StyleManager.hx",46,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rule,"rule")
		HX_STACK_LINE(47)
		this->_styles->remove(rule);
		HX_STACK_LINE(48)
		this->_rules->remove(rule);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StyleManager_obj,removeStyle,(void))

Void StyleManager_obj::addStyle( ::String rule,::haxe::ui::toolkit::style::Style style){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","addStyle",0xb2a94023,"haxe.ui.toolkit.style.StyleManager.addStyle","haxe/ui/toolkit/style/StyleManager.hx",51,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rule,"rule")
		HX_STACK_ARG(style,"style")
		HX_STACK_LINE(52)
		this->_cachedStyles = null();
		HX_STACK_LINE(53)
		Array< ::String > arr = rule.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(54)
			while((true)){
				HX_STACK_LINE(54)
				if ((!(((_g < arr->length))))){
					HX_STACK_LINE(54)
					break;
				}
				HX_STACK_LINE(54)
				::String a = arr->__get(_g);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(54)
				++(_g);
				HX_STACK_LINE(55)
				::String _g1 = ::StringTools_obj::trim(a);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(55)
				a = _g1;
				HX_STACK_LINE(56)
				::haxe::ui::toolkit::style::_StyleManager::StyleRule existingStyleRule = this->_styles->get(a);		HX_STACK_VAR(existingStyleRule,"existingStyleRule");
				HX_STACK_LINE(57)
				::haxe::ui::toolkit::style::Style existingStyle = null();		HX_STACK_VAR(existingStyle,"existingStyle");
				HX_STACK_LINE(58)
				if (((existingStyleRule != null()))){
					HX_STACK_LINE(59)
					::haxe::ui::toolkit::style::Style existingStyle1 = existingStyleRule->style;		HX_STACK_VAR(existingStyle1,"existingStyle1");
					HX_STACK_LINE(60)
					existingStyle1->merge(style);
					HX_STACK_LINE(61)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule styleRule = ::haxe::ui::toolkit::style::_StyleManager::StyleRule_obj::__new(a,existingStyle1);		HX_STACK_VAR(styleRule,"styleRule");
					HX_STACK_LINE(62)
					this->_styles->set(a,styleRule);
				}
				else{
					HX_STACK_LINE(64)
					::haxe::ui::toolkit::style::_StyleManager::StyleRule styleRule = ::haxe::ui::toolkit::style::_StyleManager::StyleRule_obj::__new(a,style);		HX_STACK_VAR(styleRule,"styleRule");
					HX_STACK_LINE(65)
					this->_styles->set(a,styleRule);
					HX_STACK_LINE(66)
					this->_rules->push(a);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,addStyle,(void))

Void StyleManager_obj::addStyles( ::haxe::ui::toolkit::style::Styles styles){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","addStyles",0xa16edef0,"haxe.ui.toolkit.style.StyleManager.addStyles","haxe/ui/toolkit/style/StyleManager.hx",72,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_ARG(styles,"styles")
		HX_STACK_LINE(72)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(styles->get_rules());  __it->hasNext(); ){
			::String rule = __it->next();
			{
				HX_STACK_LINE(73)
				::haxe::ui::toolkit::style::Style _g = styles->getStyle(rule);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(73)
				this->addStyle(rule,_g);
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StyleManager_obj,addStyles,(void))

::haxe::ui::toolkit::style::Style StyleManager_obj::findStyle( ::String rule){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","findStyle",0x468c9a05,"haxe.ui.toolkit.style.StyleManager.findStyle","haxe/ui/toolkit/style/StyleManager.hx",77,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rule,"rule")
	HX_STACK_LINE(78)
	::haxe::ui::toolkit::style::_StyleManager::StyleRule existingStyleRule = this->_styles->get(rule);		HX_STACK_VAR(existingStyleRule,"existingStyleRule");
	HX_STACK_LINE(79)
	if (((existingStyleRule != null()))){
		HX_STACK_LINE(80)
		return existingStyleRule->style;
	}
	HX_STACK_LINE(82)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StyleManager_obj,findStyle,return )

Void StyleManager_obj::clear( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","clear",0xd9380ada,"haxe.ui.toolkit.style.StyleManager.clear","haxe/ui/toolkit/style/StyleManager.hx",85,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		this->_styles = _g;
		HX_STACK_LINE(87)
		Array< ::String > _g1 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(87)
		this->_rules = _g1;
		HX_STACK_LINE(88)
		::haxe::ui::toolkit::style::StyleHelper_obj::clearCache();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,clear,(void))

::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer StyleManager_obj::findAncestor( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","findAncestor",0x5e024bff,"haxe.ui.toolkit.style.StyleManager.findAncestor","haxe/ui/toolkit/style/StyleManager.hx",91,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(rulePart,"rulePart")
	HX_STACK_LINE(92)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer a = null();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(93)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer t = c;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(95)
	while((true)){
		HX_STACK_LINE(95)
		if ((!(((a == null()))))){
			HX_STACK_LINE(95)
			break;
		}
		HX_STACK_LINE(96)
		bool _g = this->rulePartMatch(t,rulePart,null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(96)
		if (((_g == true))){
			HX_STACK_LINE(97)
			a = t;
		}
		else{
			HX_STACK_LINE(99)
			::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g1 = t->__Field(HX_CSTRING("get_parent"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			t = _g1;
			HX_STACK_LINE(100)
			if (((t == null()))){
				HX_STACK_LINE(101)
				break;
			}
		}
	}
	HX_STACK_LINE(106)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,findAncestor,return )

bool StyleManager_obj::rulePartMatch( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart,::String state,::String overriddenClassName){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","rulePartMatch",0xf2793a03,"haxe.ui.toolkit.style.StyleManager.rulePartMatch","haxe/ui/toolkit/style/StyleManager.hx",109,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(rulePart,"rulePart")
	HX_STACK_ARG(state,"state")
	HX_STACK_ARG(overriddenClassName,"overriddenClassName")
	HX_STACK_LINE(110)
	bool match = false;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(112)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(113)
		state = null();
	}
	HX_STACK_LINE(116)
	::Class _g = ::Type_obj::getClass(c);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(116)
	::String className = ::Type_obj::getClassName(_g);		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(117)
	int n = className.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(118)
	::String _g1 = className.substr((n + (int)1),className.length);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(118)
	className = _g1;
	HX_STACK_LINE(119)
	if (((overriddenClassName != null()))){
		HX_STACK_LINE(120)
		className = overriddenClassName;
	}
	HX_STACK_LINE(122)
	::String id = c->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(123)
	::String styleName = null();		HX_STACK_VAR(styleName,"styleName");
	HX_STACK_LINE(124)
	if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >()))){
		HX_STACK_LINE(125)
		::String _g2 = (hx::TCast< haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c))->__Field(HX_CSTRING("get_styleName"),true)();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(125)
		styleName = _g2;
	}
	HX_STACK_LINE(128)
	::String rulePartId = rulePart->id;		HX_STACK_VAR(rulePartId,"rulePartId");
	HX_STACK_LINE(129)
	::String rulePartClassName = rulePart->className;		HX_STACK_VAR(rulePartClassName,"rulePartClassName");
	HX_STACK_LINE(130)
	::String rulePartState = rulePart->state;		HX_STACK_VAR(rulePartState,"rulePartState");
	HX_STACK_LINE(131)
	::String rulePartStyleName = rulePart->styleName;		HX_STACK_VAR(rulePartStyleName,"rulePartStyleName");
	HX_STACK_LINE(133)
	if (((bool((rulePartStyleName != null())) && bool((rulePartStyleName.length == (int)0))))){
		HX_STACK_LINE(134)
		rulePartStyleName = null();
	}
	HX_STACK_LINE(137)
	::haxe::ui::toolkit::style::Style s = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(138)
	if (((rulePartId != null()))){
		HX_STACK_LINE(139)
		match = (rulePartId == id);
		HX_STACK_LINE(140)
		if (((bool((rulePartStyleName != null())) && bool((match == true))))){
			HX_STACK_LINE(141)
			match = (rulePartStyleName == styleName);
		}
	}
	else{
		HX_STACK_LINE(143)
		if (((rulePartClassName != null()))){
			HX_STACK_LINE(144)
			match = (rulePartClassName == className);
			HX_STACK_LINE(145)
			if (((bool((rulePartStyleName != null())) && bool((match == true))))){
				HX_STACK_LINE(146)
				match = (rulePartStyleName == styleName);
			}
		}
		else{
			HX_STACK_LINE(148)
			if (((rulePartStyleName != null()))){
				HX_STACK_LINE(149)
				match = (rulePartStyleName == styleName);
			}
		}
	}
	HX_STACK_LINE(152)
	if (((bool((rulePartState != null())) && bool((match == true))))){
		HX_STACK_LINE(153)
		match = (rulePartState == state);
	}
	HX_STACK_LINE(156)
	return match;
}


HX_DEFINE_DYNAMIC_FUNC4(StyleManager_obj,rulePartMatch,return )

bool StyleManager_obj::ruleMatch( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String rule,::String state,::String overriddenClassName){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","ruleMatch",0x6a70f276,"haxe.ui.toolkit.style.StyleManager.ruleMatch","haxe/ui/toolkit/style/StyleManager.hx",159,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(rule,"rule")
	HX_STACK_ARG(state,"state")
	HX_STACK_ARG(overriddenClassName,"overriddenClassName")
	HX_STACK_LINE(160)
	bool match = true;		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(162)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(163)
		state = null();
	}
	HX_STACK_LINE(166)
	::Class _g = ::Type_obj::getClass(c);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(166)
	::String className = ::Type_obj::getClassName(_g);		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(167)
	int n = className.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(168)
	::String _g1 = className.substr((n + (int)1),className.length);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(168)
	className = _g1;
	HX_STACK_LINE(169)
	if (((overriddenClassName != null()))){
		HX_STACK_LINE(170)
		className = overriddenClassName;
	}
	HX_STACK_LINE(172)
	::String id = c->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(173)
	::String styleName = null();		HX_STACK_VAR(styleName,"styleName");
	HX_STACK_LINE(174)
	if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >()))){
		HX_STACK_LINE(175)
		::String _g2 = (hx::TCast< haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c))->__Field(HX_CSTRING("get_styleName"),true)();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(175)
		styleName = _g2;
	}
	HX_STACK_LINE(178)
	::haxe::ui::toolkit::style::_StyleManager::StyleRule styleRule = this->_styles->get(rule);		HX_STACK_VAR(styleRule,"styleRule");
	HX_STACK_LINE(180)
	bool skipRule = true;		HX_STACK_VAR(skipRule,"skipRule");
	HX_STACK_LINE(182)
	bool _g3 = styleRule->isRelevant(id,className,state,styleName);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(182)
	if (((_g3 == true))){
		HX_STACK_LINE(183)
		skipRule = false;
	}
	struct _Function_1_1{
		inline static bool Block( ::String &styleName,::String &rule){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/style/StyleManager.hx",186,0x60b8f881)
			{
				HX_STACK_LINE(186)
				int _g4 = rule.indexOf((HX_CSTRING(".") + styleName),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(186)
				return (_g4 != (int)-1);
			}
			return null();
		}
	};
	HX_STACK_LINE(186)
	if (((  (((styleName != null()))) ? bool(_Function_1_1::Block(styleName,rule)) : bool(false) ))){
		HX_STACK_LINE(187)
		skipRule = false;
	}
	HX_STACK_LINE(190)
	if (((skipRule == true))){
		HX_STACK_LINE(191)
		return false;
	}
	HX_STACK_LINE(194)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer t = c;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(196)
	{
		HX_STACK_LINE(196)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(196)
		Array< ::Dynamic > _g11 = styleRule->ruleParts;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(196)
		while((true)){
			HX_STACK_LINE(196)
			if ((!(((_g2 < _g11->length))))){
				HX_STACK_LINE(196)
				break;
			}
			HX_STACK_LINE(196)
			::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart = _g11->__get(_g2).StaticCast< ::haxe::ui::toolkit::style::_StyleManager::StyleRulePart >();		HX_STACK_VAR(rulePart,"rulePart");
			HX_STACK_LINE(196)
			++(_g2);
			HX_STACK_LINE(197)
			bool partMatch = this->rulePartMatch(t,rulePart,state,overriddenClassName);		HX_STACK_VAR(partMatch,"partMatch");
			HX_STACK_LINE(198)
			if (((partMatch == false))){
				HX_STACK_LINE(199)
				::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g5 = this->findAncestor(t,rulePart);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(199)
				t = _g5;
				HX_STACK_LINE(200)
				if (((t == null()))){
					HX_STACK_LINE(201)
					match = false;
					HX_STACK_LINE(202)
					break;
				}
				else{
					HX_STACK_LINE(204)
					state = null();
				}
			}
		}
	}
	HX_STACK_LINE(209)
	return match;
}


HX_DEFINE_DYNAMIC_FUNC4(StyleManager_obj,ruleMatch,return )

::haxe::ui::toolkit::style::Style StyleManager_obj::buildStyleFor( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","buildStyleFor",0xdedb11f3,"haxe.ui.toolkit.style.StyleManager.buildStyleFor","haxe/ui/toolkit/style/StyleManager.hx",212,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(213)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(214)
		state = null();
	}
	HX_STACK_LINE(217)
	::String cacheKey = null();		HX_STACK_VAR(cacheKey,"cacheKey");
	HX_STACK_LINE(218)
	if (((this->_cacheStyles == true))){
		HX_STACK_LINE(219)
		::String _g = this->buildFullCacheKey(c,state);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(219)
		cacheKey = _g;
		HX_STACK_LINE(220)
		if (((this->_cachedStyles == null()))){
			HX_STACK_LINE(221)
			::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(221)
			this->_cachedStyles = _g1;
		}
		HX_STACK_LINE(223)
		::haxe::ui::toolkit::style::Style _g2 = this->_cachedStyles->get(cacheKey);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(223)
		if (((_g2 != null()))){
			HX_STACK_LINE(224)
			return this->_cachedStyles->get(cacheKey);
		}
	}
	HX_STACK_LINE(228)
	::haxe::ui::toolkit::style::Style style = ::haxe::ui::toolkit::style::Style_obj::__new(null());		HX_STACK_VAR(style,"style");
	HX_STACK_LINE(229)
	style->set_autoApply(false);
	HX_STACK_LINE(231)
	::Class _g3 = ::Type_obj::getClass(c);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(231)
	::Class superClass = ::Type_obj::getSuperClass(_g3);		HX_STACK_VAR(superClass,"superClass");
	HX_STACK_LINE(232)
	while((true)){
		HX_STACK_LINE(232)
		if ((!(((bool((bool((bool((bool((bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::Component >())) && bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::StateComponent >())))) && bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >())))) && bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObjectContainer >())))) && bool((superClass != hx::ClassOf< ::haxe::ui::toolkit::core::DisplayObject >())))) && bool((superClass != null()))))))){
			HX_STACK_LINE(232)
			break;
		}
		HX_STACK_LINE(238)
		::String superClassName = ::Type_obj::getClassName(superClass);		HX_STACK_VAR(superClassName,"superClassName");
		HX_STACK_LINE(239)
		int n = superClassName.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(240)
		::String _g4 = superClassName.substr((n + (int)1),superClassName.length);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(240)
		superClassName = _g4;
		HX_STACK_LINE(242)
		{
			HX_STACK_LINE(242)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(242)
			Array< ::String > _g1 = this->_rules;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(242)
			while((true)){
				HX_STACK_LINE(242)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(242)
					break;
				}
				HX_STACK_LINE(242)
				::String rule = _g1->__get(_g);		HX_STACK_VAR(rule,"rule");
				HX_STACK_LINE(242)
				++(_g);
				HX_STACK_LINE(243)
				bool _g5 = this->ruleMatch(c,rule,state,superClassName);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(243)
				if (((_g5 == true))){
					HX_STACK_LINE(244)
					::haxe::ui::toolkit::style::Style matchedStyle = this->_styles->get(rule)->__Field(HX_CSTRING("style"),true);		HX_STACK_VAR(matchedStyle,"matchedStyle");
					HX_STACK_LINE(245)
					style->merge(matchedStyle);
				}
			}
		}
		HX_STACK_LINE(249)
		::Class _g6 = ::Type_obj::getSuperClass(superClass);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(249)
		superClass = _g6;
	}
	HX_STACK_LINE(252)
	{
		HX_STACK_LINE(252)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(252)
		Array< ::String > _g1 = this->_rules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(252)
		while((true)){
			HX_STACK_LINE(252)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(252)
				break;
			}
			HX_STACK_LINE(252)
			::String rule = _g1->__get(_g);		HX_STACK_VAR(rule,"rule");
			HX_STACK_LINE(252)
			++(_g);
			HX_STACK_LINE(253)
			bool _g7 = this->ruleMatch(c,rule,state,null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(253)
			if (((_g7 == true))){
				HX_STACK_LINE(254)
				::haxe::ui::toolkit::style::Style matchedStyle = this->_styles->get(rule)->__Field(HX_CSTRING("style"),true);		HX_STACK_VAR(matchedStyle,"matchedStyle");
				HX_STACK_LINE(255)
				style->merge(matchedStyle);
			}
		}
	}
	HX_STACK_LINE(259)
	(this->stylesBuilt)++;
	HX_STACK_LINE(260)
	::Class _g8 = ::Type_obj::getClass(c);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(260)
	::String className = ::Type_obj::getClassName(_g8);		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(261)
	Dynamic _g9 = this->stylesBuiltFor->get(className);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(261)
	if (((_g9 == null()))){
		HX_STACK_LINE(262)
		this->stylesBuiltFor->set(className,(int)0);
	}
	HX_STACK_LINE(264)
	int n = this->stylesBuiltFor->get(className);		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(265)
	(n)++;
	HX_STACK_LINE(266)
	this->stylesBuiltFor->set(className,n);
	HX_STACK_LINE(268)
	if (((bool((this->_cacheStyles == true)) && bool((cacheKey != null()))))){
		HX_STACK_LINE(269)
		this->_cachedStyles->set(cacheKey,style);
	}
	HX_STACK_LINE(272)
	style->set_target(c);
	HX_STACK_LINE(273)
	style->set_autoApply(true);
	HX_STACK_LINE(274)
	return style;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,buildStyleFor,return )

::String StyleManager_obj::buildCacheKey( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","buildCacheKey",0x1c2ba018,"haxe.ui.toolkit.style.StyleManager.buildCacheKey","haxe/ui/toolkit/style/StyleManager.hx",277,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(278)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(279)
		state = null();
	}
	HX_STACK_LINE(282)
	::Class _g = ::Type_obj::getClass(c);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(282)
	::String className = ::Type_obj::getClassName(_g);		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(283)
	int n = className.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(284)
	::String _g1 = className.substr((n + (int)1),className.length);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(284)
	className = _g1;
	HX_STACK_LINE(286)
	::String id = c->__Field(HX_CSTRING("get_id"),true)();		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(287)
	::String styleName = null();		HX_STACK_VAR(styleName,"styleName");
	HX_STACK_LINE(288)
	if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >()))){
		HX_STACK_LINE(289)
		::String _g2 = (hx::TCast< haxe::ui::toolkit::core::interfaces::IStyleableDisplayObject >::cast(c))->__Field(HX_CSTRING("get_styleName"),true)();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(289)
		styleName = _g2;
	}
	HX_STACK_LINE(292)
	::String s = className;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(293)
	if (((id != null()))){
		HX_STACK_LINE(294)
		hx::AddEq(s,(HX_CSTRING("#") + id));
	}
	HX_STACK_LINE(296)
	if (((styleName != null()))){
		HX_STACK_LINE(297)
		hx::AddEq(s,(HX_CSTRING(".") + styleName));
	}
	HX_STACK_LINE(299)
	if (((state != null()))){
		HX_STACK_LINE(300)
		hx::AddEq(s,(HX_CSTRING(":") + state));
	}
	HX_STACK_LINE(302)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,buildCacheKey,return )

::String StyleManager_obj::buildFullCacheKey( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","buildFullCacheKey",0x87b65647,"haxe.ui.toolkit.style.StyleManager.buildFullCacheKey","haxe/ui/toolkit/style/StyleManager.hx",305,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(state,"state")
	HX_STACK_LINE(306)
	if (((state == HX_CSTRING("normal")))){
		HX_STACK_LINE(307)
		state = null();
	}
	HX_STACK_LINE(310)
	::String key = this->buildCacheKey(c,state);		HX_STACK_VAR(key,"key");
	HX_STACK_LINE(311)
	::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer p = c->__Field(HX_CSTRING("get_parent"),true)();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(312)
	while((true)){
		HX_STACK_LINE(312)
		if ((!(((p != null()))))){
			HX_STACK_LINE(312)
			break;
		}
		HX_STACK_LINE(313)
		::String _g = this->buildCacheKey(p,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(313)
		::String _g1 = (HX_CSTRING(">") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(313)
		hx::AddEq(key,_g1);
		HX_STACK_LINE(314)
		::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer _g2 = p->__Field(HX_CSTRING("get_parent"),true)();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(314)
		p = _g2;
	}
	HX_STACK_LINE(316)
	return key;
}


HX_DEFINE_DYNAMIC_FUNC2(StyleManager_obj,buildFullCacheKey,return )

Void StyleManager_obj::dump( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","dump",0xef4b4c87,"haxe.ui.toolkit.style.StyleManager.dump","haxe/ui/toolkit/style/StyleManager.hx",319,0x60b8f881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->stylesBuiltFor->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(321)
				Dynamic _g = this->stylesBuiltFor->get(key);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(321)
				::String _g1 = (((HX_CSTRING("> ") + key) + HX_CSTRING(" = ")) + _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(321)
				::haxe::Log_obj::trace(_g1,hx::SourceInfo(HX_CSTRING("StyleManager.hx"),321,HX_CSTRING("haxe.ui.toolkit.style.StyleManager"),HX_CSTRING("dump")));
			}
;
		}
		HX_STACK_LINE(323)
		::haxe::Log_obj::trace(HX_CSTRING(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"),hx::SourceInfo(HX_CSTRING("StyleManager.hx"),323,HX_CSTRING("haxe.ui.toolkit.style.StyleManager"),HX_CSTRING("dump")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,dump,(void))

bool StyleManager_obj::get_hasStyles( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","get_hasStyles",0x9f599b40,"haxe.ui.toolkit.style.StyleManager.get_hasStyles","haxe/ui/toolkit/style/StyleManager.hx",326,0x60b8f881)
	HX_STACK_THIS(this)
	HX_STACK_LINE(327)
	if (((this->_styles == null()))){
		HX_STACK_LINE(328)
		return false;
	}
	HX_STACK_LINE(330)
	return this->_styles->keys()->__Field(HX_CSTRING("hasNext"),true)();
}


HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,get_hasStyles,return )

::haxe::ui::toolkit::style::StyleManager StyleManager_obj::_instance;

::haxe::ui::toolkit::style::StyleManager StyleManager_obj::instance;

::haxe::ui::toolkit::style::StyleManager StyleManager_obj::get_instance( ){
	HX_STACK_FRAME("haxe.ui.toolkit.style.StyleManager","get_instance",0xebffadf1,"haxe.ui.toolkit.style.StyleManager.get_instance","haxe/ui/toolkit/style/StyleManager.hx",15,0x60b8f881)
	HX_STACK_LINE(16)
	if (((::haxe::ui::toolkit::style::StyleManager_obj::_instance == null()))){
		HX_STACK_LINE(17)
		::haxe::ui::toolkit::style::StyleManager _g = ::haxe::ui::toolkit::style::StyleManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(17)
		::haxe::ui::toolkit::style::StyleManager_obj::_instance = _g;
	}
	HX_STACK_LINE(19)
	return ::haxe::ui::toolkit::style::StyleManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(StyleManager_obj,get_instance,return )


StyleManager_obj::StyleManager_obj()
{
}

void StyleManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StyleManager);
	HX_MARK_MEMBER_NAME(_styles,"_styles");
	HX_MARK_MEMBER_NAME(_rules,"_rules");
	HX_MARK_MEMBER_NAME(stylesBuilt,"stylesBuilt");
	HX_MARK_MEMBER_NAME(stylesBuiltFor,"stylesBuiltFor");
	HX_MARK_MEMBER_NAME(hasStyles,"hasStyles");
	HX_MARK_MEMBER_NAME(_cacheStyles,"_cacheStyles");
	HX_MARK_MEMBER_NAME(_cachedStyles,"_cachedStyles");
	HX_MARK_END_CLASS();
}

void StyleManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_styles,"_styles");
	HX_VISIT_MEMBER_NAME(_rules,"_rules");
	HX_VISIT_MEMBER_NAME(stylesBuilt,"stylesBuilt");
	HX_VISIT_MEMBER_NAME(stylesBuiltFor,"stylesBuiltFor");
	HX_VISIT_MEMBER_NAME(hasStyles,"hasStyles");
	HX_VISIT_MEMBER_NAME(_cacheStyles,"_cacheStyles");
	HX_VISIT_MEMBER_NAME(_cachedStyles,"_cachedStyles");
}

Dynamic StyleManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { return _rules; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { return _styles; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return inCallProp ? get_instance() : instance; }
		if (HX_FIELD_EQ(inName,"getRules") ) { return getRules_dyn(); }
		if (HX_FIELD_EQ(inName,"addStyle") ) { return addStyle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		if (HX_FIELD_EQ(inName,"hasStyles") ) { return inCallProp ? get_hasStyles() : hasStyles; }
		if (HX_FIELD_EQ(inName,"addStyles") ) { return addStyles_dyn(); }
		if (HX_FIELD_EQ(inName,"findStyle") ) { return findStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"ruleMatch") ) { return ruleMatch_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stylesBuilt") ) { return stylesBuilt; }
		if (HX_FIELD_EQ(inName,"removeStyle") ) { return removeStyle_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_instance") ) { return get_instance_dyn(); }
		if (HX_FIELD_EQ(inName,"_cacheStyles") ) { return _cacheStyles; }
		if (HX_FIELD_EQ(inName,"findAncestor") ) { return findAncestor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cachedStyles") ) { return _cachedStyles; }
		if (HX_FIELD_EQ(inName,"rulePartMatch") ) { return rulePartMatch_dyn(); }
		if (HX_FIELD_EQ(inName,"buildStyleFor") ) { return buildStyleFor_dyn(); }
		if (HX_FIELD_EQ(inName,"buildCacheKey") ) { return buildCacheKey_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasStyles") ) { return get_hasStyles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stylesBuiltFor") ) { return stylesBuiltFor; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"buildFullCacheKey") ) { return buildFullCacheKey_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StyleManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { _rules=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_styles") ) { _styles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::ui::toolkit::style::StyleManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::haxe::ui::toolkit::style::StyleManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasStyles") ) { hasStyles=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stylesBuilt") ) { stylesBuilt=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cacheStyles") ) { _cacheStyles=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cachedStyles") ) { _cachedStyles=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stylesBuiltFor") ) { stylesBuiltFor=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StyleManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_styles"));
	outFields->push(HX_CSTRING("_rules"));
	outFields->push(HX_CSTRING("stylesBuilt"));
	outFields->push(HX_CSTRING("stylesBuiltFor"));
	outFields->push(HX_CSTRING("hasStyles"));
	outFields->push(HX_CSTRING("_cacheStyles"));
	outFields->push(HX_CSTRING("_cachedStyles"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("instance"),
	HX_CSTRING("get_instance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleManager_obj,_styles),HX_CSTRING("_styles")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StyleManager_obj,_rules),HX_CSTRING("_rules")},
	{hx::fsInt,(int)offsetof(StyleManager_obj,stylesBuilt),HX_CSTRING("stylesBuilt")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleManager_obj,stylesBuiltFor),HX_CSTRING("stylesBuiltFor")},
	{hx::fsBool,(int)offsetof(StyleManager_obj,hasStyles),HX_CSTRING("hasStyles")},
	{hx::fsBool,(int)offsetof(StyleManager_obj,_cacheStyles),HX_CSTRING("_cacheStyles")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(StyleManager_obj,_cachedStyles),HX_CSTRING("_cachedStyles")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_styles"),
	HX_CSTRING("_rules"),
	HX_CSTRING("stylesBuilt"),
	HX_CSTRING("stylesBuiltFor"),
	HX_CSTRING("hasStyles"),
	HX_CSTRING("_cacheStyles"),
	HX_CSTRING("_cachedStyles"),
	HX_CSTRING("getRules"),
	HX_CSTRING("removeStyle"),
	HX_CSTRING("addStyle"),
	HX_CSTRING("addStyles"),
	HX_CSTRING("findStyle"),
	HX_CSTRING("clear"),
	HX_CSTRING("findAncestor"),
	HX_CSTRING("rulePartMatch"),
	HX_CSTRING("ruleMatch"),
	HX_CSTRING("buildStyleFor"),
	HX_CSTRING("buildCacheKey"),
	HX_CSTRING("buildFullCacheKey"),
	HX_CSTRING("dump"),
	HX_CSTRING("get_hasStyles"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StyleManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StyleManager_obj::_instance,"_instance");
	HX_MARK_MEMBER_NAME(StyleManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StyleManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StyleManager_obj::_instance,"_instance");
	HX_VISIT_MEMBER_NAME(StyleManager_obj::instance,"instance");
};

#endif

Class StyleManager_obj::__mClass;

void StyleManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.style.StyleManager"), hx::TCanCast< StyleManager_obj> ,sStaticFields,sMemberFields,
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

void StyleManager_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style
