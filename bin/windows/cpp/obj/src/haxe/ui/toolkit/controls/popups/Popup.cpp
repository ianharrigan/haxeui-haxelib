#include <hxcpp.h>

#ifndef INCLUDED_haxe_ui_toolkit_containers_Box
#include <haxe/ui/toolkit/containers/Box.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_Container
#include <haxe/ui/toolkit/containers/Container.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_HBox
#include <haxe/ui/toolkit/containers/HBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_containers_VBox
#include <haxe/ui/toolkit/containers/VBox.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Button
#include <haxe/ui/toolkit/controls/Button.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_controls_Text
#include <haxe/ui/toolkit/controls/Text.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObject
#include <haxe/ui/toolkit/core/DisplayObject.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_DisplayObjectContainer
#include <haxe/ui/toolkit/core/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupButtonInfo
#include <haxe/ui/toolkit/core/PopupButtonInfo.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_PopupManager
#include <haxe/ui/toolkit/core/PopupManager.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IDraggable
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
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
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStateComponent
#include <haxe/ui/toolkit/core/interfaces/IStateComponent.h>
#endif
#ifndef INCLUDED_haxe_ui_toolkit_core_interfaces_IStyleableDisplayObject
#include <haxe/ui/toolkit/core/interfaces/IStyleableDisplayObject.h>
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
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{

Void Popup_obj::__construct(::String title,::haxe::ui::toolkit::controls::popups::PopupContent content,Dynamic config,Dynamic fn)
{
HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","new",0x5adff88d,"haxe.ui.toolkit.controls.popups.Popup.new","haxe/ui/toolkit/controls/popups/Popup.hx",36,0x52c99b44)
HX_STACK_THIS(this)
HX_STACK_ARG(title,"title")
HX_STACK_ARG(content,"content")
HX_STACK_ARG(config,"config")
HX_STACK_ARG(fn,"fn")
{
	HX_STACK_LINE(37)
	super::__construct();
	HX_STACK_LINE(38)
	this->_autoSize = true;
	HX_STACK_LINE(40)
	if (((title != null()))){
		HX_STACK_LINE(41)
		::haxe::ui::toolkit::containers::Box _g = ::haxe::ui::toolkit::containers::Box_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		this->_titleBar = _g;
		HX_STACK_LINE(42)
		this->_titleBar->set_autoSize(false);
		HX_STACK_LINE(43)
		this->_titleBar->set_id(HX_CSTRING("titleBar"));
	}
	HX_STACK_LINE(46)
	this->_content = content;
	HX_STACK_LINE(47)
	this->_content->popup = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(49)
	if (((title != null()))){
		HX_STACK_LINE(50)
		::haxe::ui::toolkit::controls::Text _g1 = ::haxe::ui::toolkit::controls::Text_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		this->_title = _g1;
		HX_STACK_LINE(51)
		this->_title->set_id(HX_CSTRING("title"));
		HX_STACK_LINE(52)
		this->_title->set_text(title);
	}
	HX_STACK_LINE(55)
	::haxe::ui::toolkit::containers::Box _g2 = ::haxe::ui::toolkit::containers::Box_obj::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(55)
	this->_buttonBar = _g2;
	HX_STACK_LINE(56)
	this->_buttonBar->set_id(HX_CSTRING("buttonBar"));
	HX_STACK_LINE(57)
	this->_buttonBar->set_percentWidth((int)100);
	HX_STACK_LINE(58)
	this->_buttonBar->set_horizontalAlign(HX_CSTRING("center"));
	HX_STACK_LINE(60)
	this->_config = config;
	HX_STACK_LINE(61)
	if (((this->_config == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/popups/Popup.hx",62,0x52c99b44)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(62)
		this->_config = _Function_2_1::Block();
		HX_STACK_LINE(63)
		Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(63)
		this->_config->__FieldRef(HX_CSTRING("buttons")) = _g3;
	}
	HX_STACK_LINE(65)
	if (((this->_config->__Field(HX_CSTRING("id"),true) != null()))){
		HX_STACK_LINE(66)
		this->set_id(this->_config->__Field(HX_CSTRING("id"),true));
	}
	HX_STACK_LINE(68)
	if (((this->_config->__Field(HX_CSTRING("styleName"),true) != null()))){
		HX_STACK_LINE(69)
		this->set_styleName(this->_config->__Field(HX_CSTRING("styleName"),true));
	}
	HX_STACK_LINE(72)
	this->_fn = fn;
}
;
	return null();
}

//Popup_obj::~Popup_obj() { }

Dynamic Popup_obj::__CreateEmpty() { return  new Popup_obj; }
hx::ObjectPtr< Popup_obj > Popup_obj::__new(::String title,::haxe::ui::toolkit::controls::popups::PopupContent content,Dynamic config,Dynamic fn)
{  hx::ObjectPtr< Popup_obj > result = new Popup_obj();
	result->__construct(title,content,config,fn);
	return result;}

Dynamic Popup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Popup_obj > result = new Popup_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *Popup_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::haxe::ui::toolkit::core::interfaces::IDraggable_obj)) return operator ::haxe::ui::toolkit::core::interfaces::IDraggable_obj *();
	return super::__ToInterface(inType);
}

Void Popup_obj::initialize( ){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","initialize",0x2b6218c3,"haxe.ui.toolkit.controls.popups.Popup.initialize","haxe/ui/toolkit/controls/popups/Popup.hx",78,0x52c99b44)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		this->super::initialize();
		HX_STACK_LINE(81)
		if (((this->_titleBar != null()))){
			HX_STACK_LINE(82)
			this->_titleBar->set_percentWidth((int)100);
			HX_STACK_LINE(83)
			this->_titleBar->addChild(this->_title);
			HX_STACK_LINE(84)
			this->_titleBar->get_sprite()->buttonMode = true;
			HX_STACK_LINE(85)
			this->_titleBar->get_sprite()->useHandCursor = true;
			HX_STACK_LINE(86)
			this->addChild(this->_titleBar);
		}
		HX_STACK_LINE(89)
		if (((this->_content == null()))){
			HX_STACK_LINE(90)
			::haxe::ui::toolkit::controls::popups::PopupContent _g = ::haxe::ui::toolkit::controls::popups::PopupContent_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			this->_content = _g;
		}
		HX_STACK_LINE(92)
		this->_content->set_id(HX_CSTRING("popupContent"));
		HX_STACK_LINE(93)
		this->_content->set_percentWidth((int)100);
		HX_STACK_LINE(95)
		this->addChild(this->_content);
		HX_STACK_LINE(97)
		if (((this->_config->__Field(HX_CSTRING("buttons"),true)->__Field(HX_CSTRING("length"),true) > (int)0))){
			HX_STACK_LINE(98)
			::haxe::ui::toolkit::containers::HBox box = ::haxe::ui::toolkit::containers::HBox_obj::__new();		HX_STACK_VAR(box,"box");
			HX_STACK_LINE(99)
			::String _g11 = this->_buttonBar->get_horizontalAlign();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(99)
			box->set_horizontalAlign(_g11);
			HX_STACK_LINE(100)
			Array< ::Dynamic > buttons = this->_config->__Field(HX_CSTRING("buttons"),true);		HX_STACK_VAR(buttons,"buttons");
			HX_STACK_LINE(101)
			this->_buttonBar->addChild(box);
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(102)
				while((true)){
					HX_STACK_LINE(102)
					if ((!(((_g < buttons->length))))){
						HX_STACK_LINE(102)
						break;
					}
					HX_STACK_LINE(102)
					Array< ::Dynamic > info = Array_obj< ::Dynamic >::__new().Add(buttons->__get(_g).StaticCast< ::haxe::ui::toolkit::core::PopupButtonInfo >());		HX_STACK_VAR(info,"info");
					HX_STACK_LINE(102)
					++(_g);
					HX_STACK_LINE(103)
					if (((((int(info->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::PopupButtonInfo >()->type) & int((int)16777216))) != (int)16777216))){
						HX_STACK_LINE(104)
						::haxe::ui::toolkit::controls::Button button = this->createStandardButton(info->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::PopupButtonInfo >()->type);		HX_STACK_VAR(button,"button");
						HX_STACK_LINE(105)
						if (((button != null()))){
							HX_STACK_LINE(106)
							box->addChild(button);
						}
					}
					else{
						HX_STACK_LINE(109)
						::haxe::ui::toolkit::controls::Button button = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(button,"button");
						HX_STACK_LINE(110)
						button->set_text(info->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::PopupButtonInfo >()->text);

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,_g1,Array< ::Dynamic >,info)
						Void run(Dynamic e){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","haxe/ui/toolkit/controls/popups/Popup.hx",112,0x52c99b44)
							HX_STACK_ARG(e,"e")
							{
								HX_STACK_LINE(112)
								_g1->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->clickButton(info->__get((int)0).StaticCast< ::haxe::ui::toolkit::core::PopupButtonInfo >()->type);
							}
							return null();
						}
						HX_END_LOCAL_FUNC1((void))

						HX_STACK_LINE(111)
						button->addEventListener(::openfl::events::MouseEvent_obj::CLICK, Dynamic(new _Function_5_1(_g1,info)),null(),null(),null());
						HX_STACK_LINE(114)
						box->addChild(button);
					}
				}
			}
			HX_STACK_LINE(117)
			this->addChild(this->_buttonBar);
		}
		HX_STACK_LINE(120)
		if (((this->_config->__Field(HX_CSTRING("width"),true) != null()))){
			HX_STACK_LINE(121)
			this->set_width(this->_config->__Field(HX_CSTRING("width"),true));
		}
		HX_STACK_LINE(124)
		::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->centerPopup(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


bool Popup_obj::allowDrag( ::openfl::events::MouseEvent event){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","allowDrag",0x22c47d0a,"haxe.ui.toolkit.controls.popups.Popup.allowDrag","haxe/ui/toolkit/controls/popups/Popup.hx",134,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(134)
	return this->_titleBar->hitTest(event->stageX,event->stageY);
}


HX_DEFINE_DYNAMIC_FUNC1(Popup_obj,allowDrag,return )

::haxe::ui::toolkit::controls::popups::PopupContent Popup_obj::get_content( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","get_content",0x32d58a7d,"haxe.ui.toolkit.controls.popups.Popup.get_content","haxe/ui/toolkit/controls/popups/Popup.hx",142,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	return this->_content;
}


HX_DEFINE_DYNAMIC_FUNC0(Popup_obj,get_content,return )

Dynamic Popup_obj::get_config( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","get_config",0xf700adfe,"haxe.ui.toolkit.controls.popups.Popup.get_config","haxe/ui/toolkit/controls/popups/Popup.hx",147,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(147)
	return this->_config;
}


HX_DEFINE_DYNAMIC_FUNC0(Popup_obj,get_config,return )

::haxe::ui::toolkit::controls::Button Popup_obj::createStandardButton( int v){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","createStandardButton",0x74e22a5e,"haxe.ui.toolkit.controls.popups.Popup.createStandardButton","haxe/ui/toolkit/controls/popups/Popup.hx",153,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(153)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(154)
	::haxe::ui::toolkit::controls::Button button = null();		HX_STACK_VAR(button,"button");
	HX_STACK_LINE(155)
	if (((v == (int)1))){
		HX_STACK_LINE(156)
		::haxe::ui::toolkit::controls::Button _g1 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(156)
		button = _g1;
		HX_STACK_LINE(157)
		button->set_text(HX_CSTRING("OK"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",159,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(159)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->clickButton((int)1);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(158)
		button->addEventListener(::openfl::events::MouseEvent_obj::CLICK, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(162)
	if (((v == (int)16))){
		HX_STACK_LINE(163)
		::haxe::ui::toolkit::controls::Button _g1 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		button = _g1;
		HX_STACK_LINE(164)
		button->set_text(HX_CSTRING("Yes"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",166,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(166)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->clickButton((int)16);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(165)
		button->addEventListener(::openfl::events::MouseEvent_obj::CLICK, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(169)
	if (((v == (int)256))){
		HX_STACK_LINE(170)
		::haxe::ui::toolkit::controls::Button _g2 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(170)
		button = _g2;
		HX_STACK_LINE(171)
		button->set_text(HX_CSTRING("No"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",173,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(173)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->clickButton((int)256);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(172)
		button->addEventListener(::openfl::events::MouseEvent_obj::CLICK, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(176)
	if (((v == (int)4096))){
		HX_STACK_LINE(177)
		::haxe::ui::toolkit::controls::Button _g3 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(177)
		button = _g3;
		HX_STACK_LINE(178)
		button->set_text(HX_CSTRING("Cancel"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",180,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(180)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->clickButton((int)4096);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(179)
		button->addEventListener(::openfl::events::MouseEvent_obj::CLICK, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(183)
	if (((v == (int)65536))){
		HX_STACK_LINE(184)
		::haxe::ui::toolkit::controls::Button _g4 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(184)
		button = _g4;
		HX_STACK_LINE(185)
		button->set_text(HX_CSTRING("Confirm"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",187,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(187)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->clickButton((int)65536);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(186)
		button->addEventListener(::openfl::events::MouseEvent_obj::CLICK, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(190)
	if (((v == (int)1048576))){
		HX_STACK_LINE(191)
		::haxe::ui::toolkit::controls::Button _g5 = ::haxe::ui::toolkit::controls::Button_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(191)
		button = _g5;
		HX_STACK_LINE(192)
		button->set_text(HX_CSTRING("Close"));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Array< ::Dynamic >,_g)
		Void run(Dynamic e){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","haxe/ui/toolkit/controls/popups/Popup.hx",194,0x52c99b44)
			HX_STACK_ARG(e,"e")
			{
				HX_STACK_LINE(194)
				_g->__get((int)0).StaticCast< ::haxe::ui::toolkit::controls::popups::Popup >()->clickButton((int)1048576);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(193)
		button->addEventListener(::openfl::events::MouseEvent_obj::CLICK, Dynamic(new _Function_2_1(_g)),null(),null(),null());
	}
	HX_STACK_LINE(198)
	return button;
}


HX_DEFINE_DYNAMIC_FUNC1(Popup_obj,createStandardButton,return )

Void Popup_obj::clickButton( int button){
{
		HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","clickButton",0x9c455587,"haxe.ui.toolkit.controls.popups.Popup.clickButton","haxe/ui/toolkit/controls/popups/Popup.hx",202,0x52c99b44)
		HX_STACK_THIS(this)
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(203)
		bool _g = this->_content->onButtonClicked(button);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(203)
		if (((_g == true))){
			HX_STACK_LINE(204)
			::haxe::ui::toolkit::core::PopupManager_obj::get_instance()->hidePopup(hx::ObjectPtr<OBJ_>(this),null());
		}
		HX_STACK_LINE(206)
		if (((this->_fn_dyn() != null()))){
			HX_STACK_LINE(207)
			this->_fn(button);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Popup_obj,clickButton,(void))

Dynamic Popup_obj::clone( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","clone",0x7c6b60ca,"haxe.ui.toolkit.controls.popups.Popup.clone","haxe/ui/toolkit/controls/popups/Popup.hx",1,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	::haxe::ui::toolkit::controls::popups::Popup c = this->super::clone();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(3)
	return c;
}


Dynamic Popup_obj::self( ){
	HX_STACK_FRAME("haxe.ui.toolkit.controls.popups.Popup","self",0x2c678abf,"haxe.ui.toolkit.controls.popups.Popup.self","haxe/ui/toolkit/controls/popups/Popup.hx",2,0x52c99b44)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2)
	return ::haxe::ui::toolkit::controls::popups::Popup_obj::__new(null(),null(),null(),null());
}



Popup_obj::Popup_obj()
{
}

void Popup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Popup);
	HX_MARK_MEMBER_NAME(_titleBar,"_titleBar");
	HX_MARK_MEMBER_NAME(_title,"_title");
	HX_MARK_MEMBER_NAME(_content,"_content");
	HX_MARK_MEMBER_NAME(_buttonBar,"_buttonBar");
	HX_MARK_MEMBER_NAME(_config,"_config");
	HX_MARK_MEMBER_NAME(_fn,"_fn");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(config,"config");
	::haxe::ui::toolkit::core::Component_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Popup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_titleBar,"_titleBar");
	HX_VISIT_MEMBER_NAME(_title,"_title");
	HX_VISIT_MEMBER_NAME(_content,"_content");
	HX_VISIT_MEMBER_NAME(_buttonBar,"_buttonBar");
	HX_VISIT_MEMBER_NAME(_config,"_config");
	HX_VISIT_MEMBER_NAME(_fn,"_fn");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(config,"config");
	::haxe::ui::toolkit::core::Component_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Popup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { return _fn; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"self") ) { return self_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { return _title; }
		if (HX_FIELD_EQ(inName,"config") ) { return inCallProp ? get_config() : config; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { return _config; }
		if (HX_FIELD_EQ(inName,"content") ) { return inCallProp ? get_content() : content; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { return _content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_titleBar") ) { return _titleBar; }
		if (HX_FIELD_EQ(inName,"allowDrag") ) { return allowDrag_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_buttonBar") ) { return _buttonBar; }
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_config") ) { return get_config_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_content") ) { return get_content_dyn(); }
		if (HX_FIELD_EQ(inName,"clickButton") ) { return clickButton_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createStandardButton") ) { return createStandardButton_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Popup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_fn") ) { _fn=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_title") ) { _title=inValue.Cast< ::haxe::ui::toolkit::controls::Text >(); return inValue; }
		if (HX_FIELD_EQ(inName,"config") ) { config=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_config") ) { _config=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::haxe::ui::toolkit::controls::popups::PopupContent >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_content") ) { _content=inValue.Cast< ::haxe::ui::toolkit::controls::popups::PopupContent >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_titleBar") ) { _titleBar=inValue.Cast< ::haxe::ui::toolkit::containers::Box >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_buttonBar") ) { _buttonBar=inValue.Cast< ::haxe::ui::toolkit::containers::Box >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Popup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_titleBar"));
	outFields->push(HX_CSTRING("_title"));
	outFields->push(HX_CSTRING("_content"));
	outFields->push(HX_CSTRING("_buttonBar"));
	outFields->push(HX_CSTRING("_config"));
	outFields->push(HX_CSTRING("content"));
	outFields->push(HX_CSTRING("config"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ui::toolkit::containers::Box*/ ,(int)offsetof(Popup_obj,_titleBar),HX_CSTRING("_titleBar")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::Text*/ ,(int)offsetof(Popup_obj,_title),HX_CSTRING("_title")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::PopupContent*/ ,(int)offsetof(Popup_obj,_content),HX_CSTRING("_content")},
	{hx::fsObject /*::haxe::ui::toolkit::containers::Box*/ ,(int)offsetof(Popup_obj,_buttonBar),HX_CSTRING("_buttonBar")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Popup_obj,_config),HX_CSTRING("_config")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Popup_obj,_fn),HX_CSTRING("_fn")},
	{hx::fsObject /*::haxe::ui::toolkit::controls::popups::PopupContent*/ ,(int)offsetof(Popup_obj,content),HX_CSTRING("content")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Popup_obj,config),HX_CSTRING("config")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_titleBar"),
	HX_CSTRING("_title"),
	HX_CSTRING("_content"),
	HX_CSTRING("_buttonBar"),
	HX_CSTRING("_config"),
	HX_CSTRING("_fn"),
	HX_CSTRING("initialize"),
	HX_CSTRING("allowDrag"),
	HX_CSTRING("content"),
	HX_CSTRING("get_content"),
	HX_CSTRING("config"),
	HX_CSTRING("get_config"),
	HX_CSTRING("createStandardButton"),
	HX_CSTRING("clickButton"),
	HX_CSTRING("clone"),
	HX_CSTRING("self"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Popup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Popup_obj::__mClass,"__mClass");
};

#endif

Class Popup_obj::__mClass;

void Popup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.ui.toolkit.controls.popups.Popup"), hx::TCanCast< Popup_obj> ,sStaticFields,sMemberFields,
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

void Popup_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/popups/Popup.hx",15,0x52c99b44)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			struct _Function_1_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/popups/Popup.hx",15,0x52c99b44)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						struct _Function_2_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","haxe/ui/toolkit/controls/popups/Popup.hx",15,0x52c99b44)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("exclude") , null(),false);
									return __result;
								}
								return null();
							}
						};
						__result->Add(HX_CSTRING("clickButton") , _Function_2_1::Block(),false);
						return __result;
					}
					return null();
				}
			};
			__result->Add(HX_CSTRING("fields") , _Function_1_1::Block(),false);
			return __result;
		}
		return null();
	}
};
	__mClass->__meta__=_Function_0_1::Block();
}

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace popups
