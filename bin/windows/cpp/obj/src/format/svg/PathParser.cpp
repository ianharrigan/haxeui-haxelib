#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_format_svg_ArcSegment
#include <format/svg/ArcSegment.h>
#endif
#ifndef INCLUDED_format_svg_CubicSegment
#include <format/svg/CubicSegment.h>
#endif
#ifndef INCLUDED_format_svg_DrawSegment
#include <format/svg/DrawSegment.h>
#endif
#ifndef INCLUDED_format_svg_MoveSegment
#include <format/svg/MoveSegment.h>
#endif
#ifndef INCLUDED_format_svg_PathParser
#include <format/svg/PathParser.h>
#endif
#ifndef INCLUDED_format_svg_PathSegment
#include <format/svg/PathSegment.h>
#endif
#ifndef INCLUDED_format_svg_QuadraticSegment
#include <format/svg/QuadraticSegment.h>
#endif
namespace format{
namespace svg{

Void PathParser_obj::__construct()
{
HX_STACK_FRAME("format.svg.PathParser","new",0xd4ffa517,"format.svg.PathParser.new","format/svg/PathParser.hx",49,0x53270c77)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(49)
	if (((::format::svg::PathParser_obj::sCommandArgs == null()))){
		HX_STACK_LINE(51)
		::format::svg::PathParser_obj::sCommandArgs = Array_obj< int >::__new();
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				if ((!(((_g < (int)128))))){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(53)
				::format::svg::PathParser_obj::sCommandArgs[i] = this->commandArgs(i);
			}
		}
	}
}
;
	return null();
}

//PathParser_obj::~PathParser_obj() { }

Dynamic PathParser_obj::__CreateEmpty() { return  new PathParser_obj; }
hx::ObjectPtr< PathParser_obj > PathParser_obj::__new()
{  hx::ObjectPtr< PathParser_obj > result = new PathParser_obj();
	result->__construct();
	return result;}

Dynamic PathParser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PathParser_obj > result = new PathParser_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > PathParser_obj::parse( ::String pathToParse,bool inConvertCubics){
	HX_STACK_FRAME("format.svg.PathParser","parse",0xf42940aa,"format.svg.PathParser.parse","format/svg/PathParser.hx",57,0x53270c77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pathToParse,"pathToParse")
	HX_STACK_ARG(inConvertCubics,"inConvertCubics")
	HX_STACK_LINE(58)
	Float _g = this->lastMoveY = (int)0;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(58)
	this->lastMoveX = _g;
	HX_STACK_LINE(59)
	int pos = (int)0;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(60)
	Array< Float > args = Array_obj< Float >::__new();		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(61)
	Array< ::Dynamic > segments = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(segments,"segments");
	HX_STACK_LINE(62)
	int current_command_pos = (int)0;		HX_STACK_VAR(current_command_pos,"current_command_pos");
	HX_STACK_LINE(63)
	int current_command = (int)-1;		HX_STACK_VAR(current_command,"current_command");
	HX_STACK_LINE(64)
	int current_args = (int)-1;		HX_STACK_VAR(current_args,"current_args");
	HX_STACK_LINE(66)
	this->prev = null();
	HX_STACK_LINE(68)
	int len = pathToParse.length;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(69)
	bool finished = false;		HX_STACK_VAR(finished,"finished");
	HX_STACK_LINE(70)
	while((true)){
		HX_STACK_LINE(70)
		if ((!(((pos <= len))))){
			HX_STACK_LINE(70)
			break;
		}
		HX_STACK_LINE(72)
		Dynamic code;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(72)
		if (((pos == len))){
			HX_STACK_LINE(72)
			code = (int)32;
		}
		else{
			HX_STACK_LINE(72)
			code = pathToParse.charCodeAt(pos);
		}
		HX_STACK_LINE(73)
		int command;		HX_STACK_VAR(command,"command");
		HX_STACK_LINE(73)
		if (((bool((code > (int)0)) && bool((code < (int)128))))){
			HX_STACK_LINE(73)
			command = ::format::svg::PathParser_obj::sCommandArgs->__get(code);
		}
		else{
			HX_STACK_LINE(73)
			command = ::format::svg::PathParser_obj::UNKNOWN;
		}
		HX_STACK_LINE(75)
		if (((command == ::format::svg::PathParser_obj::UNKNOWN))){
			HX_STACK_LINE(76)
			::String _g1 = pathToParse.substr(pos,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(76)
			::String _g2 = (HX_CSTRING("failed parsing path near '") + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(76)
			HX_STACK_DO_THROW((_g2 + HX_CSTRING("'")));
		}
		HX_STACK_LINE(78)
		if (((command == ::format::svg::PathParser_obj::SEPARATOR))){
			HX_STACK_LINE(80)
			(pos)++;
		}
		else{
			HX_STACK_LINE(82)
			if (((command <= ::format::svg::PathParser_obj::FLOAT))){
				HX_STACK_LINE(84)
				int end = (pos + (int)1);		HX_STACK_VAR(end,"end");
				HX_STACK_LINE(85)
				int e_pos = (int)-1;		HX_STACK_VAR(e_pos,"e_pos");
				HX_STACK_LINE(86)
				bool seen_dot = (command == ::format::svg::PathParser_obj::FLOAT_DOT);		HX_STACK_VAR(seen_dot,"seen_dot");
				HX_STACK_LINE(87)
				if (((command == ::format::svg::PathParser_obj::FLOAT_EXP))){
					HX_STACK_LINE(89)
					e_pos = (int)0;
					HX_STACK_LINE(90)
					seen_dot = true;
				}
				HX_STACK_LINE(92)
				while((true)){
					HX_STACK_LINE(92)
					if ((!(((end < pathToParse.length))))){
						HX_STACK_LINE(92)
						break;
					}
					HX_STACK_LINE(94)
					Dynamic ch = pathToParse.charCodeAt(end);		HX_STACK_VAR(ch,"ch");
					HX_STACK_LINE(95)
					int code1;		HX_STACK_VAR(code1,"code1");
					HX_STACK_LINE(95)
					if (((bool((ch < (int)0)) || bool((ch > (int)127))))){
						HX_STACK_LINE(95)
						code1 = ::format::svg::PathParser_obj::UNKNOWN;
					}
					else{
						HX_STACK_LINE(95)
						code1 = ::format::svg::PathParser_obj::sCommandArgs->__get(ch);
					}
					HX_STACK_LINE(96)
					if (((code1 > ::format::svg::PathParser_obj::FLOAT))){
						HX_STACK_LINE(97)
						break;
					}
					HX_STACK_LINE(98)
					if (((bool((code1 == ::format::svg::PathParser_obj::FLOAT_DOT)) && bool(seen_dot)))){
						HX_STACK_LINE(99)
						break;
					}
					HX_STACK_LINE(100)
					if (((e_pos >= (int)0))){
						HX_STACK_LINE(102)
						if (((code1 == ::format::svg::PathParser_obj::FLOAT_SIGN))){
							HX_STACK_LINE(104)
							if (((e_pos != (int)0))){
								HX_STACK_LINE(105)
								break;
							}
						}
						else{
							HX_STACK_LINE(107)
							if (((code1 != ::format::svg::PathParser_obj::FLOAT))){
								HX_STACK_LINE(108)
								break;
							}
						}
						HX_STACK_LINE(109)
						(e_pos)++;
					}
					else{
						HX_STACK_LINE(111)
						if (((code1 == ::format::svg::PathParser_obj::FLOAT_EXP))){
							HX_STACK_LINE(113)
							if (((e_pos >= (int)0))){
								HX_STACK_LINE(114)
								break;
							}
							HX_STACK_LINE(115)
							e_pos = (int)0;
							HX_STACK_LINE(116)
							seen_dot = true;
						}
						else{
							HX_STACK_LINE(118)
							if (((code1 == ::format::svg::PathParser_obj::FLOAT_SIGN))){
								HX_STACK_LINE(119)
								break;
							}
						}
					}
					HX_STACK_LINE(120)
					(end)++;
				}
				HX_STACK_LINE(122)
				if (((current_command < (int)0))){
				}
				else{
					HX_STACK_LINE(129)
					::String _g3 = pathToParse.substr(pos,(end - pos));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(129)
					Float f = ::Std_obj::parseFloat(_g3);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(130)
					args->push(f);
				}
				HX_STACK_LINE(132)
				pos = end;
			}
			else{
				HX_STACK_LINE(136)
				current_command = code;
				HX_STACK_LINE(137)
				current_args = command;
				HX_STACK_LINE(138)
				finished = false;
				HX_STACK_LINE(139)
				current_command_pos = pos;
				HX_STACK_LINE(140)
				args = Array_obj< Float >::__new();
				HX_STACK_LINE(141)
				(pos)++;
			}
		}
		HX_STACK_LINE(144)
		Float px = 0.0;		HX_STACK_VAR(px,"px");
		HX_STACK_LINE(145)
		Float py = 0.0;		HX_STACK_VAR(py,"py");
		HX_STACK_LINE(146)
		if (((current_command >= (int)0))){
			HX_STACK_LINE(148)
			if (((current_args == args->length))){
				HX_STACK_LINE(150)
				if (((bool(inConvertCubics) && bool((this->prev != null()))))){
					HX_STACK_LINE(152)
					Float _g4 = this->prev->prevX();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(152)
					px = _g4;
					HX_STACK_LINE(153)
					Float _g5 = this->prev->prevY();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(153)
					py = _g5;
				}
				HX_STACK_LINE(155)
				::format::svg::PathSegment _g6 = this->createCommand(current_command,args);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(155)
				this->prev = _g6;
				HX_STACK_LINE(156)
				if (((this->prev == null()))){
					HX_STACK_LINE(157)
					::String _g7 = ::String::fromCharCode(current_command);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(157)
					::String _g8 = (HX_CSTRING("Unknown command ") + _g7);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(157)
					::String _g9 = (_g8 + HX_CSTRING(" near '"));		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(158)
					::String _g10 = pathToParse.substr(current_command_pos,null());		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(157)
					::String _g11 = (_g9 + _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(157)
					HX_STACK_DO_THROW((_g11 + HX_CSTRING("'")));
				}
				struct _Function_4_1{
					inline static bool Block( hx::ObjectPtr< ::format::svg::PathParser_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","format/svg/PathParser.hx",159,0x53270c77)
						{
							HX_STACK_LINE(159)
							int _g12 = __this->prev->getType();		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(159)
							return (_g12 == (int)4);
						}
						return null();
					}
				};
				HX_STACK_LINE(159)
				if (((  ((inConvertCubics)) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
					HX_STACK_LINE(161)
					::format::svg::CubicSegment cubic = this->prev;		HX_STACK_VAR(cubic,"cubic");
					HX_STACK_LINE(162)
					Array< ::Dynamic > quads = cubic->toQuadratics(px,py);		HX_STACK_VAR(quads,"quads");
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(163)
						while((true)){
							HX_STACK_LINE(163)
							if ((!(((_g1 < quads->length))))){
								HX_STACK_LINE(163)
								break;
							}
							HX_STACK_LINE(163)
							::format::svg::QuadraticSegment q = quads->__get(_g1).StaticCast< ::format::svg::QuadraticSegment >();		HX_STACK_VAR(q,"q");
							HX_STACK_LINE(163)
							++(_g1);
							HX_STACK_LINE(164)
							segments->push(q);
						}
					}
				}
				else{
					HX_STACK_LINE(167)
					segments->push(this->prev);
				}
				HX_STACK_LINE(169)
				finished = true;
				HX_STACK_LINE(170)
				if (((current_args == (int)0))){
					HX_STACK_LINE(172)
					current_args = (int)-1;
					HX_STACK_LINE(173)
					current_command = (int)-1;
				}
				else{
					HX_STACK_LINE(175)
					if (((current_command == (int)77))){
						HX_STACK_LINE(176)
						current_command = (int)76;
					}
					else{
						HX_STACK_LINE(177)
						if (((current_command == (int)109))){
							HX_STACK_LINE(178)
							current_command = (int)108;
						}
					}
				}
				HX_STACK_LINE(180)
				current_command_pos = pos;
				HX_STACK_LINE(181)
				args = Array_obj< Float >::__new();
			}
		}
	}
	HX_STACK_LINE(186)
	if (((bool((current_command >= (int)0)) && bool(!(finished))))){
		HX_STACK_LINE(189)
		::String _g13 = pathToParse.substr(current_command_pos,null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(188)
		::String _g14 = (((((HX_CSTRING("Unfinished command (") + args->length) + HX_CSTRING("/")) + current_args) + HX_CSTRING(") near '")) + _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(188)
		HX_STACK_DO_THROW((_g14 + HX_CSTRING("'")));
	}
	HX_STACK_LINE(192)
	return segments;
}


HX_DEFINE_DYNAMIC_FUNC2(PathParser_obj,parse,return )

int PathParser_obj::commandArgs( int inCode){
	HX_STACK_FRAME("format.svg.PathParser","commandArgs",0x8b070fff,"format.svg.PathParser.commandArgs","format/svg/PathParser.hx",196,0x53270c77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inCode,"inCode")
	HX_STACK_LINE(197)
	if (((inCode == (int)10))){
		HX_STACK_LINE(197)
		return ::format::svg::PathParser_obj::SEPARATOR;
	}
	HX_STACK_LINE(199)
	::String str = ::String::fromCharCode(inCode).toUpperCase();		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(200)
	if (((bool((str >= HX_CSTRING("0"))) && bool((str <= HX_CSTRING("9")))))){
		HX_STACK_LINE(201)
		return ::format::svg::PathParser_obj::FLOAT;
	}
	HX_STACK_LINE(203)
	::String _switch_1 = (str);
	if (  ( _switch_1==HX_CSTRING("Z"))){
		HX_STACK_LINE(205)
		return (int)0;
	}
	else if (  ( _switch_1==HX_CSTRING("H")) ||  ( _switch_1==HX_CSTRING("V"))){
		HX_STACK_LINE(206)
		return (int)1;
	}
	else if (  ( _switch_1==HX_CSTRING("M")) ||  ( _switch_1==HX_CSTRING("L")) ||  ( _switch_1==HX_CSTRING("T"))){
		HX_STACK_LINE(207)
		return (int)2;
	}
	else if (  ( _switch_1==HX_CSTRING("S")) ||  ( _switch_1==HX_CSTRING("Q"))){
		HX_STACK_LINE(208)
		return (int)4;
	}
	else if (  ( _switch_1==HX_CSTRING("C"))){
		HX_STACK_LINE(209)
		return (int)6;
	}
	else if (  ( _switch_1==HX_CSTRING("A"))){
		HX_STACK_LINE(210)
		return (int)7;
	}
	else if (  ( _switch_1==HX_CSTRING("\t")) ||  ( _switch_1==HX_CSTRING("\n")) ||  ( _switch_1==HX_CSTRING(" ")) ||  ( _switch_1==HX_CSTRING("\r")) ||  ( _switch_1==HX_CSTRING(","))){
		HX_STACK_LINE(211)
		return ::format::svg::PathParser_obj::SEPARATOR;
	}
	else if (  ( _switch_1==HX_CSTRING("-"))){
		HX_STACK_LINE(212)
		return ::format::svg::PathParser_obj::FLOAT_SIGN;
	}
	else if (  ( _switch_1==HX_CSTRING("+"))){
		HX_STACK_LINE(213)
		return ::format::svg::PathParser_obj::FLOAT_SIGN;
	}
	else if (  ( _switch_1==HX_CSTRING("E")) ||  ( _switch_1==HX_CSTRING("e"))){
		HX_STACK_LINE(214)
		return ::format::svg::PathParser_obj::FLOAT_EXP;
	}
	else if (  ( _switch_1==HX_CSTRING("."))){
		HX_STACK_LINE(215)
		return ::format::svg::PathParser_obj::FLOAT_DOT;
	}
	HX_STACK_LINE(218)
	return ::format::svg::PathParser_obj::UNKNOWN;
}


HX_DEFINE_DYNAMIC_FUNC1(PathParser_obj,commandArgs,return )

Float PathParser_obj::prevX( ){
	HX_STACK_FRAME("format.svg.PathParser","prevX",0xff5c067c,"format.svg.PathParser.prevX","format/svg/PathParser.hx",221,0x53270c77)
	HX_STACK_THIS(this)
	HX_STACK_LINE(221)
	if (((this->prev != null()))){
		HX_STACK_LINE(221)
		return this->prev->prevX();
	}
	else{
		HX_STACK_LINE(221)
		return (int)0;
	}
	HX_STACK_LINE(221)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(PathParser_obj,prevX,return )

Float PathParser_obj::prevY( ){
	HX_STACK_FRAME("format.svg.PathParser","prevY",0xff5c067d,"format.svg.PathParser.prevY","format/svg/PathParser.hx",222,0x53270c77)
	HX_STACK_THIS(this)
	HX_STACK_LINE(222)
	if (((this->prev != null()))){
		HX_STACK_LINE(222)
		return this->prev->prevY();
	}
	else{
		HX_STACK_LINE(222)
		return (int)0;
	}
	HX_STACK_LINE(222)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(PathParser_obj,prevY,return )

Float PathParser_obj::prevCX( ){
	HX_STACK_FRAME("format.svg.PathParser","prevCX",0x71299411,"format.svg.PathParser.prevCX","format/svg/PathParser.hx",223,0x53270c77)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	if (((this->prev != null()))){
		HX_STACK_LINE(223)
		return this->prev->prevCX();
	}
	else{
		HX_STACK_LINE(223)
		return (int)0;
	}
	HX_STACK_LINE(223)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(PathParser_obj,prevCX,return )

Float PathParser_obj::prevCY( ){
	HX_STACK_FRAME("format.svg.PathParser","prevCY",0x71299412,"format.svg.PathParser.prevCY","format/svg/PathParser.hx",224,0x53270c77)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	if (((this->prev != null()))){
		HX_STACK_LINE(224)
		return this->prev->prevCY();
	}
	else{
		HX_STACK_LINE(224)
		return (int)0;
	}
	HX_STACK_LINE(224)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(PathParser_obj,prevCY,return )

::format::svg::PathSegment PathParser_obj::createCommand( int code,Array< Float > a){
	HX_STACK_FRAME("format.svg.PathParser","createCommand",0x31ebc926,"format.svg.PathParser.createCommand","format/svg/PathParser.hx",227,0x53270c77)
	HX_STACK_THIS(this)
	HX_STACK_ARG(code,"code")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(228)
	switch( (int)(code)){
		case (int)77: {
			HX_STACK_LINE(231)
			this->lastMoveX = a->__get((int)0);
			HX_STACK_LINE(232)
			this->lastMoveY = a->__get((int)1);
			HX_STACK_LINE(233)
			return ::format::svg::MoveSegment_obj::__new(this->lastMoveX,this->lastMoveY);
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(235)
			Float _g = this->prevX();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			Float _g1 = (a->__get((int)0) + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(235)
			this->lastMoveX = _g1;
			HX_STACK_LINE(236)
			Float _g2 = this->prevY();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(236)
			Float _g3 = (a->__get((int)1) + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(236)
			this->lastMoveY = _g3;
			HX_STACK_LINE(237)
			return ::format::svg::MoveSegment_obj::__new(this->lastMoveX,this->lastMoveY);
		}
		;break;
		case (int)76: {
			HX_STACK_LINE(238)
			return ::format::svg::DrawSegment_obj::__new(a->__get((int)0),a->__get((int)1));
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(239)
			Float _g4 = this->prevX();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(239)
			Float _g5 = (a->__get((int)0) + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(239)
			Float _g6 = this->prevY();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(239)
			Float _g7 = (a->__get((int)1) + _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(239)
			return ::format::svg::DrawSegment_obj::__new(_g5,_g7);
		}
		;break;
		case (int)72: {
			HX_STACK_LINE(240)
			Float _g8 = this->prevY();		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(240)
			return ::format::svg::DrawSegment_obj::__new(a->__get((int)0),_g8);
		}
		;break;
		case (int)104: {
			HX_STACK_LINE(241)
			Float _g9 = this->prevX();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(241)
			Float _g10 = (a->__get((int)0) + _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(241)
			Float _g11 = this->prevY();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(241)
			return ::format::svg::DrawSegment_obj::__new(_g10,_g11);
		}
		;break;
		case (int)86: {
			HX_STACK_LINE(242)
			Float _g12 = this->prevX();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(242)
			return ::format::svg::DrawSegment_obj::__new(_g12,a->__get((int)0));
		}
		;break;
		case (int)118: {
			HX_STACK_LINE(243)
			Float _g13 = this->prevX();		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(243)
			Float _g14 = this->prevY();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(243)
			Float _g15 = (a->__get((int)0) + _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(243)
			return ::format::svg::DrawSegment_obj::__new(_g13,_g15);
		}
		;break;
		case (int)67: {
			HX_STACK_LINE(245)
			return ::format::svg::CubicSegment_obj::__new(a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3),a->__get((int)4),a->__get((int)5));
		}
		;break;
		case (int)99: {
			HX_STACK_LINE(247)
			Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(248)
			Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(249)
			return ::format::svg::CubicSegment_obj::__new((a->__get((int)0) + rx),(a->__get((int)1) + ry),(a->__get((int)2) + rx),(a->__get((int)3) + ry),(a->__get((int)4) + rx),(a->__get((int)5) + ry));
		}
		;break;
		case (int)83: {
			HX_STACK_LINE(251)
			Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(252)
			Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(253)
			Float _g16 = this->prevCX();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(253)
			Float _g17 = ((rx * (int)2) - _g16);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(253)
			Float _g18 = this->prevCY();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(253)
			Float _g19 = ((ry * (int)2) - _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(253)
			return ::format::svg::CubicSegment_obj::__new(_g17,_g19,a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3));
		}
		;break;
		case (int)115: {
			HX_STACK_LINE(255)
			Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(256)
			Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(257)
			Float _g20 = this->prevCX();		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(257)
			Float _g21 = ((rx * (int)2) - _g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(257)
			Float _g22 = this->prevCY();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(257)
			Float _g23 = ((ry * (int)2) - _g22);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(257)
			return ::format::svg::CubicSegment_obj::__new(_g21,_g23,(a->__get((int)0) + rx),(a->__get((int)1) + ry),(a->__get((int)2) + rx),(a->__get((int)3) + ry));
		}
		;break;
		case (int)81: {
			HX_STACK_LINE(258)
			return ::format::svg::QuadraticSegment_obj::__new(a->__get((int)0),a->__get((int)1),a->__get((int)2),a->__get((int)3));
		}
		;break;
		case (int)113: {
			HX_STACK_LINE(260)
			Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(261)
			Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(262)
			return ::format::svg::QuadraticSegment_obj::__new((a->__get((int)0) + rx),(a->__get((int)1) + ry),(a->__get((int)2) + rx),(a->__get((int)3) + ry));
		}
		;break;
		case (int)84: {
			HX_STACK_LINE(264)
			Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(265)
			Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(266)
			Float _g24 = this->prevCX();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(266)
			Float _g25 = ((rx * (int)2) - _g24);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(266)
			Float _g26 = this->prevCY();		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(266)
			Float _g27 = ((rx * (int)2) - _g26);		HX_STACK_VAR(_g27,"_g27");
			HX_STACK_LINE(266)
			return ::format::svg::QuadraticSegment_obj::__new(_g25,_g27,a->__get((int)2),a->__get((int)3));
		}
		;break;
		case (int)116: {
			HX_STACK_LINE(268)
			Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(269)
			Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(270)
			Float _g28 = this->prevCX();		HX_STACK_VAR(_g28,"_g28");
			HX_STACK_LINE(270)
			Float _g29 = ((rx * (int)2) - _g28);		HX_STACK_VAR(_g29,"_g29");
			HX_STACK_LINE(270)
			Float _g30 = this->prevCY();		HX_STACK_VAR(_g30,"_g30");
			HX_STACK_LINE(270)
			Float _g31 = ((ry * (int)2) - _g30);		HX_STACK_VAR(_g31,"_g31");
			HX_STACK_LINE(270)
			return ::format::svg::QuadraticSegment_obj::__new(_g29,_g31,(a->__get((int)0) + rx),(a->__get((int)1) + ry));
		}
		;break;
		case (int)65: {
			HX_STACK_LINE(272)
			Float _g32 = this->prevX();		HX_STACK_VAR(_g32,"_g32");
			HX_STACK_LINE(272)
			Float _g33 = this->prevY();		HX_STACK_VAR(_g33,"_g33");
			HX_STACK_LINE(272)
			return ::format::svg::ArcSegment_obj::__new(_g32,_g33,a->__get((int)0),a->__get((int)1),a->__get((int)2),(a->__get((int)3) != 0.),(a->__get((int)4) != 0.),a->__get((int)5),a->__get((int)6));
		}
		;break;
		case (int)97: {
			HX_STACK_LINE(274)
			Float rx = this->prevX();		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(275)
			Float ry = this->prevY();		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(276)
			return ::format::svg::ArcSegment_obj::__new(rx,ry,a->__get((int)0),a->__get((int)1),a->__get((int)2),(a->__get((int)3) != 0.),(a->__get((int)4) != 0.),(a->__get((int)5) + rx),(a->__get((int)6) + ry));
		}
		;break;
		case (int)90: {
			HX_STACK_LINE(278)
			return ::format::svg::DrawSegment_obj::__new(this->lastMoveX,this->lastMoveY);
		}
		;break;
		case (int)122: {
			HX_STACK_LINE(281)
			return ::format::svg::DrawSegment_obj::__new(this->lastMoveX,this->lastMoveY);
		}
		;break;
	}
	HX_STACK_LINE(284)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PathParser_obj,createCommand,return )

Array< int > PathParser_obj::sCommandArgs;

int PathParser_obj::MOVE;

int PathParser_obj::MOVER;

int PathParser_obj::LINE;

int PathParser_obj::LINER;

int PathParser_obj::HLINE;

int PathParser_obj::HLINER;

int PathParser_obj::VLINE;

int PathParser_obj::VLINER;

int PathParser_obj::CUBIC;

int PathParser_obj::CUBICR;

int PathParser_obj::SCUBIC;

int PathParser_obj::SCUBICR;

int PathParser_obj::QUAD;

int PathParser_obj::QUADR;

int PathParser_obj::SQUAD;

int PathParser_obj::SQUADR;

int PathParser_obj::ARC;

int PathParser_obj::ARCR;

int PathParser_obj::CLOSE;

int PathParser_obj::CLOSER;

int PathParser_obj::UNKNOWN;

int PathParser_obj::SEPARATOR;

int PathParser_obj::FLOAT;

int PathParser_obj::FLOAT_SIGN;

int PathParser_obj::FLOAT_DOT;

int PathParser_obj::FLOAT_EXP;


PathParser_obj::PathParser_obj()
{
}

void PathParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PathParser);
	HX_MARK_MEMBER_NAME(lastMoveX,"lastMoveX");
	HX_MARK_MEMBER_NAME(lastMoveY,"lastMoveY");
	HX_MARK_MEMBER_NAME(prev,"prev");
	HX_MARK_END_CLASS();
}

void PathParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lastMoveX,"lastMoveX");
	HX_VISIT_MEMBER_NAME(lastMoveY,"lastMoveY");
	HX_VISIT_MEMBER_NAME(prev,"prev");
}

Dynamic PathParser_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { return prev; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FLOAT") ) { return FLOAT; }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		if (HX_FIELD_EQ(inName,"prevX") ) { return prevX_dyn(); }
		if (HX_FIELD_EQ(inName,"prevY") ) { return prevY_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"prevCX") ) { return prevCX_dyn(); }
		if (HX_FIELD_EQ(inName,"prevCY") ) { return prevCY_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UNKNOWN") ) { return UNKNOWN; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SEPARATOR") ) { return SEPARATOR; }
		if (HX_FIELD_EQ(inName,"FLOAT_DOT") ) { return FLOAT_DOT; }
		if (HX_FIELD_EQ(inName,"FLOAT_EXP") ) { return FLOAT_EXP; }
		if (HX_FIELD_EQ(inName,"lastMoveX") ) { return lastMoveX; }
		if (HX_FIELD_EQ(inName,"lastMoveY") ) { return lastMoveY; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLOAT_SIGN") ) { return FLOAT_SIGN; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"commandArgs") ) { return commandArgs_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sCommandArgs") ) { return sCommandArgs; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createCommand") ) { return createCommand_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PathParser_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"prev") ) { prev=inValue.Cast< ::format::svg::PathSegment >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"FLOAT") ) { FLOAT=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"UNKNOWN") ) { UNKNOWN=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"SEPARATOR") ) { SEPARATOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_DOT") ) { FLOAT_DOT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_EXP") ) { FLOAT_EXP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastMoveX") ) { lastMoveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastMoveY") ) { lastMoveY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FLOAT_SIGN") ) { FLOAT_SIGN=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sCommandArgs") ) { sCommandArgs=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PathParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lastMoveX"));
	outFields->push(HX_CSTRING("lastMoveY"));
	outFields->push(HX_CSTRING("prev"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sCommandArgs"),
	HX_CSTRING("MOVE"),
	HX_CSTRING("MOVER"),
	HX_CSTRING("LINE"),
	HX_CSTRING("LINER"),
	HX_CSTRING("HLINE"),
	HX_CSTRING("HLINER"),
	HX_CSTRING("VLINE"),
	HX_CSTRING("VLINER"),
	HX_CSTRING("CUBIC"),
	HX_CSTRING("CUBICR"),
	HX_CSTRING("SCUBIC"),
	HX_CSTRING("SCUBICR"),
	HX_CSTRING("QUAD"),
	HX_CSTRING("QUADR"),
	HX_CSTRING("SQUAD"),
	HX_CSTRING("SQUADR"),
	HX_CSTRING("ARC"),
	HX_CSTRING("ARCR"),
	HX_CSTRING("CLOSE"),
	HX_CSTRING("CLOSER"),
	HX_CSTRING("UNKNOWN"),
	HX_CSTRING("SEPARATOR"),
	HX_CSTRING("FLOAT"),
	HX_CSTRING("FLOAT_SIGN"),
	HX_CSTRING("FLOAT_DOT"),
	HX_CSTRING("FLOAT_EXP"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(PathParser_obj,lastMoveX),HX_CSTRING("lastMoveX")},
	{hx::fsFloat,(int)offsetof(PathParser_obj,lastMoveY),HX_CSTRING("lastMoveY")},
	{hx::fsObject /*::format::svg::PathSegment*/ ,(int)offsetof(PathParser_obj,prev),HX_CSTRING("prev")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lastMoveX"),
	HX_CSTRING("lastMoveY"),
	HX_CSTRING("prev"),
	HX_CSTRING("parse"),
	HX_CSTRING("commandArgs"),
	HX_CSTRING("prevX"),
	HX_CSTRING("prevY"),
	HX_CSTRING("prevCX"),
	HX_CSTRING("prevCY"),
	HX_CSTRING("createCommand"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PathParser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PathParser_obj::sCommandArgs,"sCommandArgs");
	HX_MARK_MEMBER_NAME(PathParser_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(PathParser_obj::MOVER,"MOVER");
	HX_MARK_MEMBER_NAME(PathParser_obj::LINE,"LINE");
	HX_MARK_MEMBER_NAME(PathParser_obj::LINER,"LINER");
	HX_MARK_MEMBER_NAME(PathParser_obj::HLINE,"HLINE");
	HX_MARK_MEMBER_NAME(PathParser_obj::HLINER,"HLINER");
	HX_MARK_MEMBER_NAME(PathParser_obj::VLINE,"VLINE");
	HX_MARK_MEMBER_NAME(PathParser_obj::VLINER,"VLINER");
	HX_MARK_MEMBER_NAME(PathParser_obj::CUBIC,"CUBIC");
	HX_MARK_MEMBER_NAME(PathParser_obj::CUBICR,"CUBICR");
	HX_MARK_MEMBER_NAME(PathParser_obj::SCUBIC,"SCUBIC");
	HX_MARK_MEMBER_NAME(PathParser_obj::SCUBICR,"SCUBICR");
	HX_MARK_MEMBER_NAME(PathParser_obj::QUAD,"QUAD");
	HX_MARK_MEMBER_NAME(PathParser_obj::QUADR,"QUADR");
	HX_MARK_MEMBER_NAME(PathParser_obj::SQUAD,"SQUAD");
	HX_MARK_MEMBER_NAME(PathParser_obj::SQUADR,"SQUADR");
	HX_MARK_MEMBER_NAME(PathParser_obj::ARC,"ARC");
	HX_MARK_MEMBER_NAME(PathParser_obj::ARCR,"ARCR");
	HX_MARK_MEMBER_NAME(PathParser_obj::CLOSE,"CLOSE");
	HX_MARK_MEMBER_NAME(PathParser_obj::CLOSER,"CLOSER");
	HX_MARK_MEMBER_NAME(PathParser_obj::UNKNOWN,"UNKNOWN");
	HX_MARK_MEMBER_NAME(PathParser_obj::SEPARATOR,"SEPARATOR");
	HX_MARK_MEMBER_NAME(PathParser_obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(PathParser_obj::FLOAT_SIGN,"FLOAT_SIGN");
	HX_MARK_MEMBER_NAME(PathParser_obj::FLOAT_DOT,"FLOAT_DOT");
	HX_MARK_MEMBER_NAME(PathParser_obj::FLOAT_EXP,"FLOAT_EXP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PathParser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PathParser_obj::sCommandArgs,"sCommandArgs");
	HX_VISIT_MEMBER_NAME(PathParser_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::MOVER,"MOVER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::LINE,"LINE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::LINER,"LINER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::HLINE,"HLINE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::HLINER,"HLINER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::VLINE,"VLINE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::VLINER,"VLINER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::CUBIC,"CUBIC");
	HX_VISIT_MEMBER_NAME(PathParser_obj::CUBICR,"CUBICR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SCUBIC,"SCUBIC");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SCUBICR,"SCUBICR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::QUAD,"QUAD");
	HX_VISIT_MEMBER_NAME(PathParser_obj::QUADR,"QUADR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SQUAD,"SQUAD");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SQUADR,"SQUADR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::ARC,"ARC");
	HX_VISIT_MEMBER_NAME(PathParser_obj::ARCR,"ARCR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::CLOSE,"CLOSE");
	HX_VISIT_MEMBER_NAME(PathParser_obj::CLOSER,"CLOSER");
	HX_VISIT_MEMBER_NAME(PathParser_obj::UNKNOWN,"UNKNOWN");
	HX_VISIT_MEMBER_NAME(PathParser_obj::SEPARATOR,"SEPARATOR");
	HX_VISIT_MEMBER_NAME(PathParser_obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(PathParser_obj::FLOAT_SIGN,"FLOAT_SIGN");
	HX_VISIT_MEMBER_NAME(PathParser_obj::FLOAT_DOT,"FLOAT_DOT");
	HX_VISIT_MEMBER_NAME(PathParser_obj::FLOAT_EXP,"FLOAT_EXP");
};

#endif

Class PathParser_obj::__mClass;

void PathParser_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("format.svg.PathParser"), hx::TCanCast< PathParser_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void PathParser_obj::__boot()
{
	MOVE= (int)77;
	MOVER= (int)109;
	LINE= (int)76;
	LINER= (int)108;
	HLINE= (int)72;
	HLINER= (int)104;
	VLINE= (int)86;
	VLINER= (int)118;
	CUBIC= (int)67;
	CUBICR= (int)99;
	SCUBIC= (int)83;
	SCUBICR= (int)115;
	QUAD= (int)81;
	QUADR= (int)113;
	SQUAD= (int)84;
	SQUADR= (int)116;
	ARC= (int)65;
	ARCR= (int)97;
	CLOSE= (int)90;
	CLOSER= (int)122;
	UNKNOWN= (int)-1;
	SEPARATOR= (int)-2;
	FLOAT= (int)-3;
	FLOAT_SIGN= (int)-4;
	FLOAT_DOT= (int)-5;
	FLOAT_EXP= (int)-6;
}

} // end namespace format
} // end namespace svg
