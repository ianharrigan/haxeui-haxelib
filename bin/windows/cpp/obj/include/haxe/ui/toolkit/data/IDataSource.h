#ifndef INCLUDED_haxe_ui_toolkit_data_IDataSource
#define INCLUDED_haxe_ui_toolkit_data_IDataSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS4(haxe,ui,toolkit,data,IDataSource)
namespace haxe{
namespace ui{
namespace toolkit{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  IDataSource_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IDataSource_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void create( ::Xml config)=0;
		Dynamic create_dyn();
virtual Void createFromString( ::String data,Dynamic config)=0;
		Dynamic createFromString_dyn();
virtual Void createFromResource( ::String resourceId,Dynamic config)=0;
		Dynamic createFromResource_dyn();
virtual bool open( )=0;
		Dynamic open_dyn();
virtual bool close( )=0;
		Dynamic close_dyn();
virtual bool moveFirst( )=0;
		Dynamic moveFirst_dyn();
virtual bool moveNext( )=0;
		Dynamic moveNext_dyn();
virtual Dynamic get( )=0;
		Dynamic get_dyn();
virtual bool add( Dynamic o)=0;
		Dynamic add_dyn();
virtual bool update( Dynamic o)=0;
		Dynamic update_dyn();
virtual bool remove( )=0;
		Dynamic remove_dyn();
virtual Void removeAll( )=0;
		Dynamic removeAll_dyn();
virtual ::String hash( )=0;
		Dynamic hash_dyn();
virtual int size( )=0;
		Dynamic size_dyn();
};

#define DELEGATE_haxe_ui_toolkit_data_IDataSource \
virtual Void create( ::Xml config) { return mDelegate->create(config);}  \
virtual Dynamic create_dyn() { return mDelegate->create_dyn();}  \
virtual Void createFromString( ::String data,Dynamic config) { return mDelegate->createFromString(data,config);}  \
virtual Dynamic createFromString_dyn() { return mDelegate->createFromString_dyn();}  \
virtual Void createFromResource( ::String resourceId,Dynamic config) { return mDelegate->createFromResource(resourceId,config);}  \
virtual Dynamic createFromResource_dyn() { return mDelegate->createFromResource_dyn();}  \
virtual bool open( ) { return mDelegate->open();}  \
virtual Dynamic open_dyn() { return mDelegate->open_dyn();}  \
virtual bool close( ) { return mDelegate->close();}  \
virtual Dynamic close_dyn() { return mDelegate->close_dyn();}  \
virtual bool moveFirst( ) { return mDelegate->moveFirst();}  \
virtual Dynamic moveFirst_dyn() { return mDelegate->moveFirst_dyn();}  \
virtual bool moveNext( ) { return mDelegate->moveNext();}  \
virtual Dynamic moveNext_dyn() { return mDelegate->moveNext_dyn();}  \
virtual Dynamic get( ) { return mDelegate->get();}  \
virtual Dynamic get_dyn() { return mDelegate->get_dyn();}  \
virtual bool add( Dynamic o) { return mDelegate->add(o);}  \
virtual Dynamic add_dyn() { return mDelegate->add_dyn();}  \
virtual bool update( Dynamic o) { return mDelegate->update(o);}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \
virtual bool remove( ) { return mDelegate->remove();}  \
virtual Dynamic remove_dyn() { return mDelegate->remove_dyn();}  \
virtual Void removeAll( ) { return mDelegate->removeAll();}  \
virtual Dynamic removeAll_dyn() { return mDelegate->removeAll_dyn();}  \
virtual ::String hash( ) { return mDelegate->hash();}  \
virtual Dynamic hash_dyn() { return mDelegate->hash_dyn();}  \
virtual int size( ) { return mDelegate->size();}  \
virtual Dynamic size_dyn() { return mDelegate->size_dyn();}  \


template<typename IMPL>
class IDataSource_delegate_ : public IDataSource_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IDataSource_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxe_ui_toolkit_data_IDataSource
};

} // end namespace haxe
} // end namespace ui
} // end namespace toolkit
} // end namespace data

#endif /* INCLUDED_haxe_ui_toolkit_data_IDataSource */ 
