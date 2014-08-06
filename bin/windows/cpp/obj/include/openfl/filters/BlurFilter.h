#ifndef INCLUDED_openfl_filters_BlurFilter
#define INCLUDED_openfl_filters_BlurFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/filters/BitmapFilter.h>
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,BlurFilter)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  BlurFilter_obj : public ::openfl::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::filters::BitmapFilter_obj super;
		typedef BlurFilter_obj OBJ_;
		BlurFilter_obj();
		Void __construct(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BlurFilter_obj > __new(hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< int >  __o_quality);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlurFilter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BlurFilter"); }

		Float blurX;
		Float blurY;
		int quality;
		virtual ::openfl::filters::BitmapFilter clone( );

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BlurFilter */ 
