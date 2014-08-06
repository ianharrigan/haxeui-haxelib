#ifndef INCLUDED_haxe_ui_toolkit_controls_popups_Popup
#define INCLUDED_haxe_ui_toolkit_controls_popups_Popup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/ui/toolkit/containers/VBox.h>
#include <haxe/ui/toolkit/core/interfaces/IDraggable.h>
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Box)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,Container)
HX_DECLARE_CLASS4(haxe,ui,toolkit,containers,VBox)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Button)
HX_DECLARE_CLASS4(haxe,ui,toolkit,controls,Text)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,popups,Popup)
HX_DECLARE_CLASS5(haxe,ui,toolkit,controls,popups,PopupContent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,Component)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObject)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,DisplayObjectContainer)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StateComponent)
HX_DECLARE_CLASS4(haxe,ui,toolkit,core,StyleableDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDraggable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDrawable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IFocusable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStateComponent)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IStyleableDisplayObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
namespace haxe{
namespace ui{
namespace toolkit{
namespace controls{
namespace popups{


class HXCPP_CLASS_ATTRIBUTES  Popup_obj : public ::haxe::ui::toolkit::containers::VBox_obj{
	public:
		typedef ::haxe::ui::toolkit::containers::VBox_obj super;
		typedef Popup_obj OBJ_;
		Popup_obj();
		Void __construct(::String title,::haxe::ui::toolkit::controls::popups::PopupContent content,Dynamic config,Dynamic fn);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Popup_obj > __new(::String title,::haxe::ui::toolkit::controls::popups::PopupContent content,Dynamic config,Dynamic fn);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Popup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::core::interfaces::IDraggable_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IDraggable_delegate_< Popup_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("Popup"); }

		::haxe::ui::toolkit::containers::Box _titleBar;
		::haxe::ui::toolkit::controls::Text _title;
		::haxe::ui::toolkit::controls::popups::PopupContent _content;
		::haxe::ui::toolkit::containers::Box _buttonBar;
		Dynamic _config;
		Dynamic _fn;
		Dynamic &_fn_dyn() { return _fn;}
		virtual Void initialize( );

		virtual bool allowDrag( ::openfl::events::MouseEvent event);
		Dynamic allowDrag_dyn();

		::haxe::ui::toolkit::controls::popups::PopupContent content;
		virtual ::haxe::ui::toolkit::controls::popups::PopupContent get_content( );
		Dynamic get_content_dyn();

		Dynamic config;
		virtual Dynamic get_config( );
		Dynamic get_config_dyn();

		virtual ::haxe::ui::toolkit::controls::Button createStandardButton( int v);
		Dynamic createStandardButton_dyn();

		virtual Void clickButton( int button);
		Dynamic clickButton_dyn();

		virtual Dynamic clone( );

		virtual Dynamic self( );

		static Dynamic __meta__;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace controls
} // end namespace popups

#endif /* INCLUDED_haxe_ui_toolkit_controls_popups_Popup */ 
