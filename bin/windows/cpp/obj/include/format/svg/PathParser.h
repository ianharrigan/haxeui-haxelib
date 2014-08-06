#ifndef INCLUDED_format_svg_PathParser
#define INCLUDED_format_svg_PathParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(format,svg,PathParser)
HX_DECLARE_CLASS2(format,svg,PathSegment)
namespace format{
namespace svg{


class HXCPP_CLASS_ATTRIBUTES  PathParser_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PathParser_obj OBJ_;
		PathParser_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PathParser_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PathParser_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PathParser"); }

		Float lastMoveX;
		Float lastMoveY;
		::format::svg::PathSegment prev;
		virtual Array< ::Dynamic > parse( ::String pathToParse,bool inConvertCubics);
		Dynamic parse_dyn();

		virtual int commandArgs( int inCode);
		Dynamic commandArgs_dyn();

		virtual Float prevX( );
		Dynamic prevX_dyn();

		virtual Float prevY( );
		Dynamic prevY_dyn();

		virtual Float prevCX( );
		Dynamic prevCX_dyn();

		virtual Float prevCY( );
		Dynamic prevCY_dyn();

		virtual ::format::svg::PathSegment createCommand( int code,Array< Float > a);
		Dynamic createCommand_dyn();

		static Array< int > sCommandArgs;
		static int MOVE;
		static int MOVER;
		static int LINE;
		static int LINER;
		static int HLINE;
		static int HLINER;
		static int VLINE;
		static int VLINER;
		static int CUBIC;
		static int CUBICR;
		static int SCUBIC;
		static int SCUBICR;
		static int QUAD;
		static int QUADR;
		static int SQUAD;
		static int SQUADR;
		static int ARC;
		static int ARCR;
		static int CLOSE;
		static int CLOSER;
		static int UNKNOWN;
		static int SEPARATOR;
		static int FLOAT;
		static int FLOAT_SIGN;
		static int FLOAT_DOT;
		static int FLOAT_EXP;
};

} // end namespace format
} // end namespace svg

#endif /* INCLUDED_format_svg_PathParser */ 
