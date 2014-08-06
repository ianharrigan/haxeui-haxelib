#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_ClassManager
#include <haxe/ui/toolkit/core/ClassManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_StyleableDisplayObject
#include <haxe/ui/toolkit/core/StyleableDisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IClonable
#include <haxe/ui/toolkit/core/interfaces/IClonable.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IComponent
#include <haxe/ui/toolkit/core/interfaces/IComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDataComponent
#include <haxe/ui/toolkit/core/interfaces/IDataComponent.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_IXMLProcessor
#include <haxe/ui/toolkit/core/xml/IXMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_UIProcessor
#include <haxe/ui/toolkit/core/xml/UIProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_xml_XMLProcessor
#include <haxe/ui/toolkit/core/xml/XMLProcessor.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_DataManager
#include <haxe/ui/toolkit/data/DataManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#include <haxe/ui/toolkit/data/IDataSource.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#include <haxe/ui/toolkit/hscript/ScriptManager.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptUtils
#include <haxe/ui/toolkit/hscript/ScriptUtils.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_AbsoluteLayout
#include <haxe/ui/toolkit/layout/AbsoluteLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_BoxLayout
#include <haxe/ui/toolkit/layout/BoxLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_DefaultLayout
#include <haxe/ui/toolkit/layout/DefaultLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_GridLayout
#include <haxe/ui/toolkit/layout/GridLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalContinuousLayout
#include <haxe/ui/toolkit/layout/HorizontalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_HorizontalLayout
#include <haxe/ui/toolkit/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_Layout
#include <haxe/ui/toolkit/layout/Layout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalContinuousLayout
#include <haxe/ui/toolkit/layout/VerticalContinuousLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_layout_VerticalLayout
#include <haxe/ui/toolkit/layout/VerticalLayout.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Style
#include <haxe/ui/toolkit/style/Style.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_StyleParser
#include <haxe/ui/toolkit/style/StyleParser.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_style_Styles
#include <haxe/ui/toolkit/style/Styles.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_util_TypeParser
#include <haxe/ui/toolkit/util/TypeParser.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace core{
namespace xml{

Void UIProcessor_obj::__construct()
{
HX_STACK_FRAME("haxe.ui.toolkit.core.xml.UIProcessor","new",0xdabcb3ec,"haxe.ui.toolkit.core.xml.UIProcessor.new","haxe/ui/toolkit/core/xml/UIProcessor.hx",27,0xb38abe85)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	super::__construct();
}
;
	return null();
}

//UIProcessor_obj::~UIProcessor_obj() { }

Dynamic UIProcessor_obj::__CreateEmpty() { return  new UIProcessor_obj; }
hx::ObjectPtr< UIProcessor_obj > UIProcessor_obj::__new()
{  hx::ObjectPtr< UIProcessor_obj > result = new UIProcessor_obj();
	result->__construct();
	return result;}

Dynamic UIProcessor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UIProcessor_obj > result = new UIProcessor_obj();
	result->__construct();
	return result;}

Dynamic UIProcessor_obj::process( ::Xml node){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.UIProcessor","process",0xb17a3bfb,"haxe.ui.toolkit.core.xml.UIProcessor.process","haxe/ui/toolkit/core/xml/UIProcessor.hx",30,0xb38abe85)
	HX_STACK_THIS(this)
	HX_STACK_ARG(node,"node")
	HX_STACK_LINE(31)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(32)
	::String nodeName = node->get_nodeName();		HX_STACK_VAR(nodeName,"nodeName");
	HX_STACK_LINE(33)
	int n = nodeName.indexOf(HX_CSTRING(":"),null());		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(34)
	if (((n != (int)-1))){
		HX_STACK_LINE(35)
		::String _g = nodeName.substr((n + (int)1),nodeName.length);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(35)
		nodeName = _g;
	}
	HX_STACK_LINE(37)
	::String _g1 = nodeName.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	nodeName = _g1;
	HX_STACK_LINE(39)
	::String className = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->getComponentClassName(nodeName);		HX_STACK_VAR(className,"className");
	HX_STACK_LINE(40)
	::String direction = node->get(HX_CSTRING("direction"));		HX_STACK_VAR(direction,"direction");
	HX_STACK_LINE(41)
	if (((direction != null()))){
		HX_STACK_LINE(42)
		::String directionalPrefix = direction.substr((int)0,(int)1);		HX_STACK_VAR(directionalPrefix,"directionalPrefix");
		HX_STACK_LINE(43)
		::String directionalName = (directionalPrefix + nodeName);		HX_STACK_VAR(directionalName,"directionalName");
		HX_STACK_LINE(44)
		::String directionalClassName = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->getComponentClassName(directionalName);		HX_STACK_VAR(directionalClassName,"directionalClassName");
		HX_STACK_LINE(45)
		if (((directionalClassName != null()))){
			HX_STACK_LINE(46)
			className = directionalClassName;
		}
	}
	HX_STACK_LINE(49)
	if (((className != null()))){
		HX_STACK_LINE(50)
		::haxe::ui::toolkit::core::interfaces::IDisplayObject _g2 = ::haxe::ui::toolkit::core::xml::UIProcessor_obj::createComponent(className,node);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		result = _g2;
	}
	HX_STACK_LINE(52)
	return result;
}


::haxe::ui::toolkit::core::interfaces::IDisplayObject UIProcessor_obj::createComponent( ::String className,::Xml config){
	HX_STACK_FRAME("haxe.ui.toolkit.core.xml.UIProcessor","createComponent",0x5b3eafad,"haxe.ui.toolkit.core.xml.UIProcessor.createComponent","haxe/ui/toolkit/core/xml/UIProcessor.hx",55,0xb38abe85)
	HX_STACK_ARG(className,"className")
	HX_STACK_ARG(config,"config")
	HX_STACK_LINE(56)
	::Class _g = ::Type_obj::resolveClass(className);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(56)
	::haxe::ui::toolkit::core::Component c = ::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(58)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(config->attributes());  __it->hasNext(); ){
		::String attr = __it->next();
		{
			HX_STACK_LINE(59)
			if ((::StringTools_obj::startsWith(attr,HX_CSTRING("xmlns:")))){
				HX_STACK_LINE(60)
				continue;
			}
			HX_STACK_LINE(63)
			::String value = config->get(attr);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(64)
			if ((::haxe::ui::toolkit::hscript::ScriptUtils_obj::isScript(value))){
				HX_STACK_LINE(65)
				::String _g1 = ::haxe::ui::toolkit::hscript::ScriptManager_obj::get_instance()->executeScript(value);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(65)
				value = _g1;
			}
			HX_STACK_LINE(68)
			if (((attr == HX_CSTRING("width")))){
				HX_STACK_LINE(69)
				Float width = (int)0;		HX_STACK_VAR(width,"width");
				HX_STACK_LINE(70)
				Float percentWidth = (int)-1;		HX_STACK_VAR(percentWidth,"percentWidth");
				HX_STACK_LINE(71)
				::String widthString = value;		HX_STACK_VAR(widthString,"widthString");
				HX_STACK_LINE(72)
				if (((widthString != null()))){
					HX_STACK_LINE(73)
					Float _g2 = ::Std_obj::parseFloat(widthString);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(73)
					width = _g2;
					HX_STACK_LINE(74)
					int _g3 = widthString.indexOf(HX_CSTRING("%"),null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(74)
					if (((_g3 != (int)-1))){
						HX_STACK_LINE(75)
						width = (int)0;
						HX_STACK_LINE(76)
						::String _g4 = widthString.substr((int)0,(widthString.length - (int)1));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(76)
						Float _g5 = ::Std_obj::parseFloat(_g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(76)
						percentWidth = _g5;
					}
				}
				HX_STACK_LINE(80)
				if (((width != (int)0))){
					HX_STACK_LINE(81)
					c->set_width(width);
				}
				HX_STACK_LINE(83)
				if (((percentWidth != (int)-1))){
					HX_STACK_LINE(84)
					c->set_percentWidth(percentWidth);
				}
			}
			else{
				HX_STACK_LINE(86)
				if (((attr == HX_CSTRING("height")))){
					HX_STACK_LINE(87)
					Float height = (int)0;		HX_STACK_VAR(height,"height");
					HX_STACK_LINE(88)
					Float percentHeight = (int)-1;		HX_STACK_VAR(percentHeight,"percentHeight");
					HX_STACK_LINE(89)
					::String heightString = value;		HX_STACK_VAR(heightString,"heightString");
					HX_STACK_LINE(90)
					if (((heightString != null()))){
						HX_STACK_LINE(91)
						Float _g6 = ::Std_obj::parseFloat(heightString);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(91)
						height = _g6;
						HX_STACK_LINE(92)
						int _g7 = heightString.indexOf(HX_CSTRING("%"),null());		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(92)
						if (((_g7 != (int)-1))){
							HX_STACK_LINE(93)
							height = (int)0;
							HX_STACK_LINE(94)
							::String _g8 = heightString.substr((int)0,(heightString.length - (int)1));		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(94)
							Float _g9 = ::Std_obj::parseFloat(_g8);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(94)
							percentHeight = _g9;
						}
					}
					HX_STACK_LINE(98)
					if (((height != (int)0))){
						HX_STACK_LINE(99)
						c->set_height(height);
					}
					HX_STACK_LINE(101)
					if (((percentHeight != (int)-1))){
						HX_STACK_LINE(102)
						c->set_percentHeight(percentHeight);
					}
				}
				else{
					HX_STACK_LINE(104)
					if (((attr == HX_CSTRING("style")))){
						HX_STACK_LINE(105)
						if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::StyleableDisplayObject >()))){
							HX_STACK_LINE(106)
							::haxe::ui::toolkit::style::Styles inlineStyles = ::haxe::ui::toolkit::style::StyleParser_obj::fromString(((HX_CSTRING("_temp {") + value) + HX_CSTRING("}")));		HX_STACK_VAR(inlineStyles,"inlineStyles");
							HX_STACK_LINE(107)
							if (((inlineStyles != null()))){
								HX_STACK_LINE(108)
								::haxe::ui::toolkit::style::Style style = inlineStyles->getStyle(HX_CSTRING("_temp"));		HX_STACK_VAR(style,"style");
								HX_STACK_LINE(109)
								if (((style != null()))){
									HX_STACK_LINE(110)
									(hx::TCast< haxe::ui::toolkit::core::StyleableDisplayObject >::cast(c))->set_inlineStyle(style);
								}
							}
						}
					}
					else{
						HX_STACK_LINE(114)
						if (((attr == HX_CSTRING("condition")))){
						}
						else{
							HX_STACK_LINE(115)
							if (((attr == HX_CSTRING("layout")))){
								HX_STACK_LINE(116)
								::String _switch_1 = (value);
								if (  ( _switch_1==HX_CSTRING("absolute"))){
									HX_STACK_LINE(117)
									::haxe::ui::toolkit::layout::AbsoluteLayout _g10 = ::haxe::ui::toolkit::layout::AbsoluteLayout_obj::__new();		HX_STACK_VAR(_g10,"_g10");
									HX_STACK_LINE(117)
									c->set_layout(_g10);
									HX_STACK_LINE(117)
									break;
								}
								else if (  ( _switch_1==HX_CSTRING("box"))){
									HX_STACK_LINE(118)
									::haxe::ui::toolkit::layout::BoxLayout _g11 = ::haxe::ui::toolkit::layout::BoxLayout_obj::__new();		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(118)
									c->set_layout(_g11);
									HX_STACK_LINE(118)
									break;
								}
								else if (  ( _switch_1==HX_CSTRING("grid"))){
									HX_STACK_LINE(119)
									::haxe::ui::toolkit::layout::GridLayout _g12 = ::haxe::ui::toolkit::layout::GridLayout_obj::__new();		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(119)
									c->set_layout(_g12);
									HX_STACK_LINE(119)
									break;
								}
								else if (  ( _switch_1==HX_CSTRING("horizontal"))){
									HX_STACK_LINE(120)
									::haxe::ui::toolkit::layout::HorizontalLayout _g13 = ::haxe::ui::toolkit::layout::HorizontalLayout_obj::__new();		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(120)
									c->set_layout(_g13);
									HX_STACK_LINE(120)
									break;
								}
								else if (  ( _switch_1==HX_CSTRING("vertical"))){
									HX_STACK_LINE(121)
									::haxe::ui::toolkit::layout::VerticalLayout _g14 = ::haxe::ui::toolkit::layout::VerticalLayout_obj::__new();		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(121)
									c->set_layout(_g14);
									HX_STACK_LINE(121)
									break;
								}
								else if (  ( _switch_1==HX_CSTRING("continuousVertical"))){
									HX_STACK_LINE(122)
									::haxe::ui::toolkit::layout::VerticalContinuousLayout _g15 = ::haxe::ui::toolkit::layout::VerticalContinuousLayout_obj::__new();		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(122)
									c->set_layout(_g15);
									HX_STACK_LINE(122)
									break;
								}
								else if (  ( _switch_1==HX_CSTRING("continuousHorizontal"))){
									HX_STACK_LINE(123)
									::haxe::ui::toolkit::layout::HorizontalContinuousLayout _g16 = ::haxe::ui::toolkit::layout::HorizontalContinuousLayout_obj::__new();		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(123)
									c->set_layout(_g16);
									HX_STACK_LINE(123)
									break;
								}
								else  {
									HX_STACK_LINE(124)
									::haxe::ui::toolkit::layout::DefaultLayout _g17 = ::haxe::ui::toolkit::layout::DefaultLayout_obj::__new();		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(124)
									c->set_layout(_g17);
									HX_STACK_LINE(124)
									break;
								}
;
;
							}
							else{
								HX_STACK_LINE(126)
								if (((attr == HX_CSTRING("dataSource")))){
									HX_STACK_LINE(127)
									if ((::Std_obj::is(c,hx::ClassOf< ::haxe::ui::toolkit::core::interfaces::IDataComponent >()))){
										HX_STACK_LINE(128)
										::haxe::ui::toolkit::core::interfaces::IDataComponent dataComponent;		HX_STACK_VAR(dataComponent,"dataComponent");
										HX_STACK_LINE(128)
										dataComponent = hx::TCast< haxe::ui::toolkit::core::interfaces::IDataComponent >::cast(c);
										HX_STACK_LINE(129)
										::haxe::ui::toolkit::data::IDataSource registeredDataSource = ::haxe::ui::toolkit::data::DataManager_obj::get_instance()->getRegisteredDataSource(value);		HX_STACK_VAR(registeredDataSource,"registeredDataSource");
										HX_STACK_LINE(130)
										if (((registeredDataSource != null()))){
											HX_STACK_LINE(131)
											dataComponent->__Field(HX_CSTRING("set_dataSource"),true)(registeredDataSource);
										}
										else{
											HX_STACK_LINE(133)
											int n = value.indexOf(HX_CSTRING("://"),null());		HX_STACK_VAR(n,"n");
											HX_STACK_LINE(134)
											if (((n != (int)-1))){
												HX_STACK_LINE(135)
												::String proto = value.substr((int)0,n);		HX_STACK_VAR(proto,"proto");
												HX_STACK_LINE(136)
												::String _g18 = value.substr((n + (int)3),value.length);		HX_STACK_VAR(_g18,"_g18");
												HX_STACK_LINE(136)
												value = _g18;
												HX_STACK_LINE(137)
												::String className1 = ::haxe::ui::toolkit::core::ClassManager_obj::get_instance()->getDataSourceClassName(proto);		HX_STACK_VAR(className1,"className1");
												HX_STACK_LINE(138)
												::Class _g19 = ::Type_obj::resolveClass(className1);		HX_STACK_VAR(_g19,"_g19");
												HX_STACK_LINE(138)
												::haxe::ui::toolkit::data::IDataSource ds = ::Type_obj::createInstance(_g19,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(ds,"ds");
												HX_STACK_LINE(139)
												if (((ds != null()))){
													HX_STACK_LINE(140)
													ds->createFromResource(value,null());
													HX_STACK_LINE(141)
													::haxe::ui::toolkit::data::DataManager_obj::get_instance()->registerDataSource(ds);
													HX_STACK_LINE(142)
													dataComponent->__Field(HX_CSTRING("set_dataSource"),true)(ds);
												}
											}
										}
									}
								}
								else{
									HX_STACK_LINE(147)
									if (((attr == HX_CSTRING("text")))){
										HX_STACK_LINE(148)
										c->set_text(value);
									}
									else{
										HX_STACK_LINE(150)
										try
										{
										HX_STACK_CATCHABLE(Dynamic, 0);
										{
											HX_STACK_LINE(151)
											Dynamic _g20 = ::Std_obj::parseInt(value);		HX_STACK_VAR(_g20,"_g20");
											HX_STACK_LINE(151)
											if (((_g20 != null()))){
												HX_STACK_LINE(152)
												Dynamic value1 = ::Std_obj::parseInt(value);		HX_STACK_VAR(value1,"value1");
												HX_STACK_LINE(152)
												if (((c != null()))){
													HX_STACK_LINE(152)
													c->__SetField(attr,value1,true);
												}
											}
											else{
												HX_STACK_LINE(153)
												if (((bool((bool((bool((value == HX_CSTRING("true"))) || bool((value == HX_CSTRING("yes"))))) || bool((value == HX_CSTRING("false"))))) || bool((value == HX_CSTRING("no")))))){
													HX_STACK_LINE(154)
													Dynamic value1 = ::haxe::ui::toolkit::util::TypeParser_obj::parseBool(value);		HX_STACK_VAR(value1,"value1");
													HX_STACK_LINE(154)
													if (((c != null()))){
														HX_STACK_LINE(154)
														c->__SetField(attr,value1,true);
													}
												}
												else{
													HX_STACK_LINE(156)
													if (((c != null()))){
														HX_STACK_LINE(156)
														c->__SetField(attr,value,true);
													}
												}
											}
										}
										}
										catch(Dynamic __e){
											{
												HX_STACK_BEGIN_CATCH
												Dynamic e = __e;{
													HX_STACK_LINE(159)
													::String _g21 = ::Std_obj::string(e);		HX_STACK_VAR(_g21,"_g21");
													HX_STACK_LINE(159)
													::String _g22 = (((HX_CSTRING("Exception setting component property: ") + attr) + HX_CSTRING(" (")) + _g21);		HX_STACK_VAR(_g22,"_g22");
													HX_STACK_LINE(159)
													::String _g23 = (_g22 + HX_CSTRING(")"));		HX_STACK_VAR(_g23,"_g23");
													HX_STACK_LINE(159)
													::haxe::Log_obj::trace(_g23,hx::SourceInfo(HX_CSTRING("UIProcessor.hx"),159,HX_CSTRING("haxe.ui.toolkit.core.xml.UIProcessor"),HX_CSTRING("createComponent")));
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(164)
	return c;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(UIProcessor_obj,createComponent,return )


UIProcessor_obj::UIProcessor_obj()
{
}

Dynamic UIProcessor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"process") ) { return process_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createComponent") ) { return createComponent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UIProcessor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void UIProcessor_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createComponent"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("process"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UIProcessor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UIProcessor_obj::__mClass,"__mClass");
};

#endif

Class UIProcessor_obj::__mClass;

void UIProcessor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.core.xml.UIProcessor"), hx::TCanCast< UIProcessor_obj> ,sStaticFields,sMemberFields,
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

void UIProcessor_obj::__boot()
{
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace core
} // end namespace xml
