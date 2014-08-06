#ifndef INCLUDED_haxe_ui_toolkit_hscript_ScriptManager
#define INCLUDED_haxe_ui_toolkit_hscript_ScriptManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,ui,toolkit,hscript,ScriptManager)
namespace haxe{
namespace ui{
namespace toolkit{
namespace hscript{


class HXCPP_CLASS_ATTRIBUTES  ScriptManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScriptManager_obj OBJ_;
		ScriptManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScriptManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScriptManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScriptManager"); }

		Array< ::String > _scripts;
		virtual Void addScript( ::String script);
		Dynamic addScript_dyn();

		virtual Dynamic executeScript( ::String script);
		Dynamic executeScript_dyn();

		static ::haxe::ui::toolkit::hscript::ScriptManager _instance;
		static ::haxe::ui::toolkit::hscript::ScriptManager instance;
		static ::haxe::ui::toolkit::hscript::ScriptManager get_instance( );
		static Dynamic get_instance_dyn();

};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace hscript

#endif /* INCLUDED_haxe_ui_toolkit_hscript_ScriptManager */ 
