#ifndef INCLUDED_haxe_remoting_HttpConnection
#define INCLUDED_haxe_remoting_HttpConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/remoting/Connection.h>
HX_DECLARE_CLASS2(haxe,remoting,Connection)
HX_DECLARE_CLASS2(haxe,remoting,HttpConnection)
namespace haxe{
namespace remoting{


class HXCPP_CLASS_ATTRIBUTES  HttpConnection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HttpConnection_obj OBJ_;
		HttpConnection_obj();
		Void __construct(::String url,Array< ::String > path);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HttpConnection_obj > __new(::String url,Array< ::String > path);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HttpConnection_obj();

		HX_DO_RTTI;
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::haxe::remoting::Connection_obj *()
			{ return new ::haxe::remoting::Connection_delegate_< HttpConnection_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("HttpConnection"); }

		::String __url;
		Array< ::String > __path;
		virtual ::haxe::remoting::Connection resolve( ::String name);
		Dynamic resolve_dyn();

		virtual Dynamic call( Dynamic params);
		Dynamic call_dyn();

		static Float TIMEOUT;
};

} // end namespace haxe
} // end namespace remoting

#endif /* INCLUDED_haxe_remoting_HttpConnection */ 