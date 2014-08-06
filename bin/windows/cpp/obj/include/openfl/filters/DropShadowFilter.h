#ifndef INCLUDED_openfl_filters_DropShadowFilter
#define INCLUDED_openfl_filters_DropShadowFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/filters/BitmapFilter.h>
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,filters,DropShadowFilter)
namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  DropShadowFilter_obj : public ::openfl::filters::BitmapFilter_obj{
	public:
		typedef ::openfl::filters::BitmapFilter_obj super;
		typedef DropShadowFilter_obj OBJ_;
		DropShadowFilter_obj();
		Void __construct(hx::Null< Float >  __o_distance,hx::Null< Float >  __o_angle,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout,hx::Null< bool >  __o_hideObject);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DropShadowFilter_obj > __new(hx::Null< Float >  __o_distance,hx::Null< Float >  __o_angle,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_blurX,hx::Null< Float >  __o_blurY,hx::Null< Float >  __o_strength,hx::Null< int >  __o_quality,hx::Null< bool >  __o_inner,hx::Null< bool >  __o_knockout,hx::Null< bool >  __o_hideObject);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DropShadowFilter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DropShadowFilter"); }

		Float alpha;
		Float angle;
		Float blurX;
		Float blurY;
		int color;
		Float distance;
		bool hideObject;
		bool inner;
		bool knockout;
		int quality;
		Float strength;
		virtual ::openfl::filters::BitmapFilter clone( );

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_DropShadowFilter */ 
