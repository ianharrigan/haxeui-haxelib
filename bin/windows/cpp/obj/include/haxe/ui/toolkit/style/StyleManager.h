#ifndef INCLUDED_haxe_ui_toolkit_style_StyleManager
#define INCLUDED_haxe_ui_toolkit_style_StyleManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IClonable)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObject)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IDisplayObjectContainer)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Style)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,StyleManager)
HX_DECLARE_CLASS4(haxe,ui,toolkit,style,Styles)
HX_DECLARE_CLASS5(haxe,ui,toolkit,style,_StyleManager,StyleRulePart)
namespace haxe{
namespace ui{
namespace toolkit{
namespace style{


class HXCPP_CLASS_ATTRIBUTES  StyleManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StyleManager_obj OBJ_;
		StyleManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StyleManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StyleManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StyleManager"); }

		::haxe::ds::StringMap _styles;
		Array< ::String > _rules;
		int stylesBuilt;
		::haxe::ds::StringMap stylesBuiltFor;
		bool hasStyles;
		bool _cacheStyles;
		::haxe::ds::StringMap _cachedStyles;
		virtual Array< ::String > getRules( );
		Dynamic getRules_dyn();

		virtual Void removeStyle( ::String rule);
		Dynamic removeStyle_dyn();

		virtual Void addStyle( ::String rule,::haxe::ui::toolkit::style::Style style);
		Dynamic addStyle_dyn();

		virtual Void addStyles( ::haxe::ui::toolkit::style::Styles styles);
		Dynamic addStyles_dyn();

		virtual ::haxe::ui::toolkit::style::Style findStyle( ::String rule);
		Dynamic findStyle_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer findAncestor( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart);
		Dynamic findAncestor_dyn();

		virtual bool rulePartMatch( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::haxe::ui::toolkit::style::_StyleManager::StyleRulePart rulePart,::String state,::String overriddenClassName);
		Dynamic rulePartMatch_dyn();

		virtual bool ruleMatch( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String rule,::String state,::String overriddenClassName);
		Dynamic ruleMatch_dyn();

		virtual ::haxe::ui::toolkit::style::Style buildStyleFor( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state);
		Dynamic buildStyleFor_dyn();

		virtual ::String buildCacheKey( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state);
		Dynamic buildCacheKey_dyn();

		virtual ::String buildFullCacheKey( ::haxe::ui::toolkit::core::interfaces::IDisplayObjectContainer c,::String state);
		Dynamic buildFullCacheKey_dyn();

		virtual Void dump( );
		Dynamic dump_dyn();

		virtual bool get_hasStyles( );
		Dynamic get_hasStyles_dyn();

		static ::haxe::ui::toolkit::style::StyleManager _instance;
		static ::haxe::ui::toolkit::style::StyleManager instance;
		static ::haxe::ui::toolkit::style::StyleManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace style

#endif /* INCLUDED_haxe_ui_toolkit_style_StyleManager */ 
