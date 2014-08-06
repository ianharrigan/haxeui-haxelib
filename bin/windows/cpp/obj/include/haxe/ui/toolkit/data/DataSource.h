#ifndef INCLUDED_haxe_ui_toolkit_data_DataSource
#define INCLUDED_haxe_ui_toolkit_data_DataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/events/EventDispatcher.h>
#include <haxe/ui/toolkit/core/interfaces/IEventDispatcher.h>
#include <haxe/ui/toolkit/data/IDataSource.h>
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS5(haxe,ui,toolkit,core,interfaces,IEventDispatcher)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,DataSource)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  DataSource_obj : public ::openfl::events::EventDispatcher_obj{
	public:
		typedef ::openfl::events::EventDispatcher_obj super;
		typedef DataSource_obj OBJ_;
		DataSource_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DataSource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataSource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::ui::toolkit::data::IDataSource_obj *()
			{ return new ::haxe::ui::toolkit::data::IDataSource_delegate_< DataSource_obj >(this); }
		inline operator ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_obj *()
			{ return new ::haxe::ui::toolkit::core::interfaces::IEventDispatcher_delegate_< DataSource_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("DataSource"); }

		::Xml config;
		::Xml _config;
		::String _id;
		bool allowAdditions;
		bool allowUpdates;
		bool allowDeletions;
		bool _allowEvents;
		bool _hasChanged;
		virtual ::Xml get_config( );
		Dynamic get_config_dyn();

		virtual ::haxe::ui::toolkit::data::DataSource clone( );
		Dynamic clone_dyn();

		virtual bool get_allowEvents( );
		Dynamic get_allowEvents_dyn();

		virtual bool set_allowEvents( bool value);
		Dynamic set_allowEvents_dyn();

		virtual ::String get_id( );
		Dynamic get_id_dyn();

		virtual ::String set_id( ::String value);
		Dynamic set_id_dyn();

		virtual Void create( ::Xml config);
		Dynamic create_dyn();

		virtual bool open( );
		Dynamic open_dyn();

		virtual bool close( );
		Dynamic close_dyn();

		virtual bool moveFirst( );
		Dynamic moveFirst_dyn();

		virtual bool moveNext( );
		Dynamic moveNext_dyn();

		virtual Dynamic get( );
		Dynamic get_dyn();

		virtual bool add( Dynamic o);
		Dynamic add_dyn();

		virtual bool update( Dynamic o);
		Dynamic update_dyn();

		virtual bool remove( );
		Dynamic remove_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual ::String hash( );
		Dynamic hash_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual bool _open( );
		Dynamic _open_dyn();

		virtual bool _close( );
		Dynamic _close_dyn();

		virtual bool _moveFirst( );
		Dynamic _moveFirst_dyn();

		virtual bool _moveNext( );
		Dynamic _moveNext_dyn();

		virtual Dynamic _get( );
		Dynamic _get_dyn();

		virtual bool _add( Dynamic o);
		Dynamic _add_dyn();

		virtual bool _update( Dynamic o);
		Dynamic _update_dyn();

		virtual bool _remove( );
		Dynamic _remove_dyn();

		virtual Void createFromString( ::String data,Dynamic config);
		Dynamic createFromString_dyn();

		virtual Void createFromResource( ::String resourceId,Dynamic config);
		Dynamic createFromResource_dyn();

		virtual Void dispatchChanged( );
		Dynamic dispatchChanged_dyn();

		virtual int getObjectId( Dynamic obj);
		Dynamic getObjectId_dyn();

		static int SAFE_NUM;
		static int clsId;
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_DataSource */ 
