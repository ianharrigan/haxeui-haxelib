#ifndef INCLUDED_format_svg_SVGData
#define INCLUDED_format_svg_SVGData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <format/svg/Group.h>
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(format,svg,FillType)
HX_DECLARE_CLASS2(format,svg,Group)
HX_DECLARE_CLASS2(format,svg,Path)
HX_DECLARE_CLASS2(format,svg,PathParser)
HX_DECLARE_CLASS2(format,svg,SVGData)
HX_DECLARE_CLASS2(format,svg,Text)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,display,GradientType)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  SVGData_obj : public ::format::svg::Group_obj{
	public:
		typedef ::format::svg::Group_obj super;
		typedef SVGData_obj OBJ_;
		SVGData_obj();
		Void __construct(::Xml inXML,hx::Null< bool >  __o_inConvertCubics);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SVGData_obj > __new(::Xml inXML,hx::Null< bool >  __o_inConvertCubics);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SVGData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SVGData"); }

		Float height;
		Float width;
		bool mConvertCubics;
		::haxe::ds::StringMap mGrads;
		::format::svg::PathParser mPathParser;
		virtual Float applyTransform( ::openfl::geom::Matrix ioMatrix,::String inTrans);
		Dynamic applyTransform_dyn();

		virtual Void dumpGroup( ::format::svg::Group g,::String indent);
		Dynamic dumpGroup_dyn();

		virtual int getColorStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles,int inDefault);
		Dynamic getColorStyle_dyn();

		virtual ::format::svg::FillType getFillStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles);
		Dynamic getFillStyle_dyn();

		virtual Float getFloat( ::Xml inXML,::String inName,hx::Null< Float >  inDef);
		Dynamic getFloat_dyn();

		virtual Float getFloatStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles,Float inDefault);
		Dynamic getFloatStyle_dyn();

		virtual Dynamic getStrokeStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles,Dynamic inDefault);
		Dynamic getStrokeStyle_dyn();

		virtual ::String getStyle( ::String inKey,::Xml inNode,::haxe::ds::StringMap inStyles,::String inDefault);
		Dynamic getStyle_dyn();

		virtual ::haxe::ds::StringMap getStyles( ::Xml inNode,::haxe::ds::StringMap inPrevStyles);
		Dynamic getStyles_dyn();

		virtual Void loadDefs( ::Xml inXML);
		Dynamic loadDefs_dyn();

		virtual Void loadGradient( ::Xml inGrad,::openfl::display::GradientType inType,bool inCrossLink);
		Dynamic loadGradient_dyn();

		virtual ::format::svg::Group loadGroup( ::format::svg::Group g,::Xml inG,::openfl::geom::Matrix matrix,::haxe::ds::StringMap inStyles);
		Dynamic loadGroup_dyn();

		virtual ::format::svg::Path loadPath( ::Xml inPath,::openfl::geom::Matrix matrix,::haxe::ds::StringMap inStyles,bool inIsRect,bool inIsEllipse,hx::Null< bool >  inIsCircle);
		Dynamic loadPath_dyn();

		virtual ::format::svg::Text loadText( ::Xml inText,::openfl::geom::Matrix matrix,::haxe::ds::StringMap inStyles);
		Dynamic loadText_dyn();

		static Float SIN45;
		static Float TAN22;
		static ::EReg mStyleSplit;
		static ::EReg mStyleValue;
		static ::EReg mTranslateMatch;
		static ::EReg mScaleMatch;
		static ::EReg mMatrixMatch;
		static ::EReg mURLMatch;
		static ::format::svg::FillType defaultFill;
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_SVGData */ 
