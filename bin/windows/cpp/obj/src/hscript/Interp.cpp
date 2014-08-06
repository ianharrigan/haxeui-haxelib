#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript__Interp_Stop
#include <hscript/_Interp/Stop.h>
#endif
namespace hscript{

Void Interp_obj::__construct()
{
HX_STACK_FRAME("hscript.Interp","new",0xf7e71101,"hscript.Interp.new","hscript/Interp.hx",48,0xf078416e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(50)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	this->locals = _g;
	HX_STACK_LINE(51)
	::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(51)
	this->variables = _g1;
	HX_STACK_LINE(56)
	Dynamic _g2 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(56)
	this->declared = _g2;
	HX_STACK_LINE(57)
	this->variables->set(HX_CSTRING("null"),null());
	HX_STACK_LINE(58)
	this->variables->set(HX_CSTRING("true"),true);
	HX_STACK_LINE(59)
	this->variables->set(HX_CSTRING("false"),false);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Void run(Dynamic e){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hscript/Interp.hx",60,0xf078416e)
		HX_STACK_ARG(e,"e")
		{
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",60,0xf078416e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("fileName") , HX_CSTRING("hscript"),false);
						__result->Add(HX_CSTRING("lineNumber") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(60)
			::haxe::Log_obj::trace(::Std_obj::string(e),_Function_2_1::Block());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(60)
	this->variables->set(HX_CSTRING("trace"), Dynamic(new _Function_1_1()));
	HX_STACK_LINE(61)
	this->initOps();
}
;
	return null();
}

//Interp_obj::~Interp_obj() { }

Dynamic Interp_obj::__CreateEmpty() { return  new Interp_obj; }
hx::ObjectPtr< Interp_obj > Interp_obj::__new()
{  hx::ObjectPtr< Interp_obj > result = new Interp_obj();
	result->__construct();
	return result;}

Dynamic Interp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Interp_obj > result = new Interp_obj();
	result->__construct();
	return result;}

Void Interp_obj::initOps( ){
{
		HX_STACK_FRAME("hscript.Interp","initOps",0xe1420823,"hscript.Interp.initOps","hscript/Interp.hx",64,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		Array< ::Dynamic > me = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(me,"me");
		HX_STACK_LINE(67)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->binops = _g;

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,me)
		Dynamic run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hscript/Interp.hx",71,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(71)
				return (me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) + me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(71)
		this->binops->set(HX_CSTRING("+"), Dynamic(new _Function_1_1(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::Dynamic >,me)
		Float run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","hscript/Interp.hx",72,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(72)
				return (me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) - me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(72)
		this->binops->set(HX_CSTRING("-"), Dynamic(new _Function_1_2(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::Dynamic >,me)
		Float run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","hscript/Interp.hx",73,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(73)
				return (me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) * me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(73)
		this->binops->set(HX_CSTRING("*"), Dynamic(new _Function_1_3(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_4,Array< ::Dynamic >,me)
		Float run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","hscript/Interp.hx",74,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(74)
				return (Float(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1)) / Float(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(74)
		this->binops->set(HX_CSTRING("/"), Dynamic(new _Function_1_4(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_5,Array< ::Dynamic >,me)
		Float run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_5",0x5200ed3b,"*._Function_1_5","hscript/Interp.hx",75,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(75)
				return hx::Mod(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1),me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(75)
		this->binops->set(HX_CSTRING("%"), Dynamic(new _Function_1_5(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_6,Array< ::Dynamic >,me)
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_6",0x5200ed3c,"*._Function_1_6","hscript/Interp.hx",76,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(76)
				return (int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1)) & int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(76)
		this->binops->set(HX_CSTRING("&"), Dynamic(new _Function_1_6(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_7,Array< ::Dynamic >,me)
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_7",0x5200ed3d,"*._Function_1_7","hscript/Interp.hx",77,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(77)
				return (int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1)) | int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(77)
		this->binops->set(HX_CSTRING("|"), Dynamic(new _Function_1_7(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_8,Array< ::Dynamic >,me)
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_8",0x5200ed3e,"*._Function_1_8","hscript/Interp.hx",78,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(78)
				return (int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1)) ^ int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(78)
		this->binops->set(HX_CSTRING("^"), Dynamic(new _Function_1_8(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_9,Array< ::Dynamic >,me)
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_9",0x5200ed3f,"*._Function_1_9","hscript/Interp.hx",79,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(79)
				return (int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1)) << int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(79)
		this->binops->set(HX_CSTRING("<<"), Dynamic(new _Function_1_9(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_10,Array< ::Dynamic >,me)
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_10",0x6ecea319,"*._Function_1_10","hscript/Interp.hx",80,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(80)
				return (int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1)) >> int(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(80)
		this->binops->set(HX_CSTRING(">>"), Dynamic(new _Function_1_10(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_11,Array< ::Dynamic >,me)
		int run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_11",0x6ecea31a,"*._Function_1_11","hscript/Interp.hx",81,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(81)
				return hx::UShr(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1),me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(81)
		this->binops->set(HX_CSTRING(">>>"), Dynamic(new _Function_1_11(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_12,Array< ::Dynamic >,me)
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_12",0x6ecea31b,"*._Function_1_12","hscript/Interp.hx",82,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(82)
				return (me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) == me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(82)
		this->binops->set(HX_CSTRING("=="), Dynamic(new _Function_1_12(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_13,Array< ::Dynamic >,me)
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_13",0x6ecea31c,"*._Function_1_13","hscript/Interp.hx",83,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(83)
				return (me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) != me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(83)
		this->binops->set(HX_CSTRING("!="), Dynamic(new _Function_1_13(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_14,Array< ::Dynamic >,me)
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_14",0x6ecea31d,"*._Function_1_14","hscript/Interp.hx",84,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(84)
				return (me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) >= me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(84)
		this->binops->set(HX_CSTRING(">="), Dynamic(new _Function_1_14(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_15,Array< ::Dynamic >,me)
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_15",0x6ecea31e,"*._Function_1_15","hscript/Interp.hx",85,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(85)
				return (me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) <= me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(85)
		this->binops->set(HX_CSTRING("<="), Dynamic(new _Function_1_15(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_16,Array< ::Dynamic >,me)
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_16",0x6ecea31f,"*._Function_1_16","hscript/Interp.hx",86,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(86)
				return (me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) > me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(86)
		this->binops->set(HX_CSTRING(">"), Dynamic(new _Function_1_16(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_17,Array< ::Dynamic >,me)
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_17",0x6ecea320,"*._Function_1_17","hscript/Interp.hx",87,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(87)
				return (me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) < me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(87)
		this->binops->set(HX_CSTRING("<"), Dynamic(new _Function_1_17(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_18,Array< ::Dynamic >,me)
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_18",0x6ecea321,"*._Function_1_18","hscript/Interp.hx",88,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(88)
				return (bool((me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) == true)) || bool((me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2) == true)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(88)
		this->binops->set(HX_CSTRING("||"), Dynamic(new _Function_1_18(me)));

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_19,Array< ::Dynamic >,me)
		bool run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_19",0x6ecea322,"*._Function_1_19","hscript/Interp.hx",89,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(89)
				return (bool((me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1) == true)) && bool((me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2) == true)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(89)
		this->binops->set(HX_CSTRING("&&"), Dynamic(new _Function_1_19(me)));
		HX_STACK_LINE(90)
		this->binops->set(HX_CSTRING("="),this->assign_dyn());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_20,Array< ::Dynamic >,me)
		::IntIterator run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_20",0x6ecea3f8,"*._Function_1_20","hscript/Interp.hx",91,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(91)
				return ::IntIterator_obj::__new(me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e1),me->__get((int)0).StaticCast< ::hscript::Interp >()->expr(e2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(91)
		this->binops->set(HX_CSTRING("..."), Dynamic(new _Function_1_20(me)));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_21)
		Dynamic run(Dynamic v1,Dynamic v2){
			HX_STACK_FRAME("*","_Function_1_21",0x6ecea3f9,"*._Function_1_21","hscript/Interp.hx",92,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(92)
				return (v1 + v2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(92)
		this->assignOp(HX_CSTRING("+="), Dynamic(new _Function_1_21()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_22)
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_22",0x6ecea3fa,"*._Function_1_22","hscript/Interp.hx",93,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(93)
				return (v1 - v2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(93)
		this->assignOp(HX_CSTRING("-="), Dynamic(new _Function_1_22()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_23)
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_23",0x6ecea3fb,"*._Function_1_23","hscript/Interp.hx",94,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(94)
				return (v1 * v2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(94)
		this->assignOp(HX_CSTRING("*="), Dynamic(new _Function_1_23()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_24)
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_24",0x6ecea3fc,"*._Function_1_24","hscript/Interp.hx",95,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(95)
				return (Float(v1) / Float(v2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(95)
		this->assignOp(HX_CSTRING("/="), Dynamic(new _Function_1_24()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_25)
		Float run(Float v1,Float v2){
			HX_STACK_FRAME("*","_Function_1_25",0x6ecea3fd,"*._Function_1_25","hscript/Interp.hx",96,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(96)
				return hx::Mod(v1,v2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(96)
		this->assignOp(HX_CSTRING("%="), Dynamic(new _Function_1_25()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_26)
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_26",0x6ecea3fe,"*._Function_1_26","hscript/Interp.hx",97,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(97)
				return (int(v1) & int(v2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(97)
		this->assignOp(HX_CSTRING("&="), Dynamic(new _Function_1_26()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_27)
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_27",0x6ecea3ff,"*._Function_1_27","hscript/Interp.hx",98,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(98)
				return (int(v1) | int(v2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(98)
		this->assignOp(HX_CSTRING("|="), Dynamic(new _Function_1_27()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_28)
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_28",0x6ecea400,"*._Function_1_28","hscript/Interp.hx",99,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(99)
				return (int(v1) ^ int(v2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(99)
		this->assignOp(HX_CSTRING("^="), Dynamic(new _Function_1_28()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_29)
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_29",0x6ecea401,"*._Function_1_29","hscript/Interp.hx",100,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(100)
				return (int(v1) << int(v2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(100)
		this->assignOp(HX_CSTRING("<<="), Dynamic(new _Function_1_29()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_30)
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_30",0x6ecea4d7,"*._Function_1_30","hscript/Interp.hx",101,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(101)
				return (int(v1) >> int(v2));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(101)
		this->assignOp(HX_CSTRING(">>="), Dynamic(new _Function_1_30()));

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_31)
		int run(int v1,int v2){
			HX_STACK_FRAME("*","_Function_1_31",0x6ecea4d8,"*._Function_1_31","hscript/Interp.hx",102,0xf078416e)
			HX_STACK_ARG(v1,"v1")
			HX_STACK_ARG(v2,"v2")
			{
				HX_STACK_LINE(102)
				return hx::UShr(v1,v2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(102)
		this->assignOp(HX_CSTRING(">>>="), Dynamic(new _Function_1_31()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Interp_obj,initOps,(void))

Dynamic Interp_obj::assign( ::hscript::Expr e1,::hscript::Expr e2){
	HX_STACK_FRAME("hscript.Interp","assign",0xca66602e,"hscript.Interp.assign","hscript/Interp.hx",105,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_LINE(106)
	Dynamic v = this->expr(e2);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(107)
	switch( (int)(e1->__Index())){
		case (int)1: {
			HX_STACK_LINE(107)
			::String id = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(108)
			{
				HX_STACK_LINE(109)
				Dynamic l = this->locals->get(id);		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(110)
				if (((l == null()))){
					HX_STACK_LINE(111)
					this->variables->set(id,v);
				}
				else{
					HX_STACK_LINE(113)
					l->__FieldRef(HX_CSTRING("r")) = v;
				}
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(107)
			::String f = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(107)
			::hscript::Expr e = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(114)
			{
				HX_STACK_LINE(115)
				Dynamic _g = this->expr(e);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(115)
				Dynamic _g1 = this->set(_g,f,v);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(115)
				v = _g1;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(107)
			::hscript::Expr index = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(107)
			::hscript::Expr e = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(116)
			{
				HX_STACK_LINE(117)
				Dynamic _g2 = this->expr(e);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(117)
				Dynamic _g3 = this->expr(index);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(117)
				hx::IndexRef((_g2).mPtr,_g3) = v;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(118)
			HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp(HX_CSTRING("=")));
		}
	}
	HX_STACK_LINE(120)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assign,return )

Void Interp_obj::assignOp( ::String op,Dynamic fop){
{
		HX_STACK_FRAME("hscript.Interp","assignOp",0xf8e18cef,"hscript.Interp.assignOp","hscript/Interp.hx",123,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(op,"op")
		HX_STACK_ARG(fop,"fop")
		HX_STACK_LINE(123)
		Dynamic fop1 = Dynamic( Array_obj<Dynamic>::__new().Add(fop));		HX_STACK_VAR(fop1,"fop1");
		HX_STACK_LINE(123)
		Array< ::String > op1 = Array_obj< ::String >::__new().Add(op);		HX_STACK_VAR(op1,"op1");
		HX_STACK_LINE(124)
		Array< ::Dynamic > me = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(me,"me");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,Array< ::String >,op1,Array< ::Dynamic >,me,Dynamic,fop1)
		Dynamic run(::hscript::Expr e1,::hscript::Expr e2){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","hscript/Interp.hx",125,0xf078416e)
			HX_STACK_ARG(e1,"e1")
			HX_STACK_ARG(e2,"e2")
			{
				HX_STACK_LINE(125)
				return me->__get((int)0).StaticCast< ::hscript::Interp >()->evalAssignOp(op1->__get((int)0),fop1->__GetItem((int)0),e1,e2);
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_STACK_LINE(125)
		this->binops->set(op1->__get((int)0), Dynamic(new _Function_1_1(op1,me,fop1)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,assignOp,(void))

Dynamic Interp_obj::evalAssignOp( ::String op,Dynamic fop,::hscript::Expr e1,::hscript::Expr e2){
	HX_STACK_FRAME("hscript.Interp","evalAssignOp",0xa46efc2b,"hscript.Interp.evalAssignOp","hscript/Interp.hx",128,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(fop,"fop")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e2,"e2")
	HX_STACK_LINE(129)
	Dynamic v;		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(130)
	switch( (int)(e1->__Index())){
		case (int)1: {
			HX_STACK_LINE(130)
			::String id = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(131)
			{
				HX_STACK_LINE(132)
				Dynamic l = this->locals->get(id);		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(133)
				Dynamic _g = this->expr(e1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(133)
				Dynamic _g1 = this->expr(e2);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(133)
				Dynamic _g2 = fop(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(133)
				v = _g2;
				HX_STACK_LINE(134)
				if (((l == null()))){
					HX_STACK_LINE(135)
					this->variables->set(id,v);
				}
				else{
					HX_STACK_LINE(137)
					l->__FieldRef(HX_CSTRING("r")) = v;
				}
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(130)
			::String f = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(130)
			::hscript::Expr e = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(139)
				Dynamic obj = this->expr(e);		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(140)
				Dynamic _g3 = this->get(obj,f);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(140)
				Dynamic _g4 = this->expr(e2);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(140)
				Dynamic _g5 = fop(_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(140)
				v = _g5;
				HX_STACK_LINE(141)
				Dynamic _g6 = this->set(obj,f,v);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(141)
				v = _g6;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(130)
			::hscript::Expr index = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(130)
			::hscript::Expr e = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(142)
			{
				HX_STACK_LINE(143)
				Dynamic arr = this->expr(e);		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(144)
				int index1 = this->expr(index);		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(145)
				Dynamic _g7 = this->expr(e2);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(145)
				Dynamic _g8 = fop(arr->__GetItem(index1),_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(145)
				v = _g8;
				HX_STACK_LINE(146)
				hx::IndexRef((arr).mPtr,index1) = v;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(148)
			HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp(op));
		}
	}
	HX_STACK_LINE(150)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC4(Interp_obj,evalAssignOp,return )

Dynamic Interp_obj::increment( ::hscript::Expr e,bool prefix,int delta){
	HX_STACK_FRAME("hscript.Interp","increment",0x1e81f590,"hscript.Interp.increment","hscript/Interp.hx",154,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(prefix,"prefix")
	HX_STACK_ARG(delta,"delta")
	HX_STACK_LINE(154)
	switch( (int)(e->__Index())){
		case (int)1: {
			HX_STACK_LINE(154)
			::String id = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(155)
			{
				HX_STACK_LINE(156)
				Dynamic l = this->locals->get(id);		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(157)
				Dynamic v;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(157)
				if (((l == null()))){
					HX_STACK_LINE(157)
					v = this->variables->get(id);
				}
				else{
					HX_STACK_LINE(157)
					v = l->__Field(HX_CSTRING("r"),true);
				}
				HX_STACK_LINE(158)
				if ((prefix)){
					HX_STACK_LINE(159)
					hx::AddEq(v,delta);
					HX_STACK_LINE(160)
					if (((l == null()))){
						HX_STACK_LINE(160)
						Dynamic value = v;		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(160)
						this->variables->set(id,value);
					}
					else{
						HX_STACK_LINE(160)
						l->__FieldRef(HX_CSTRING("r")) = v;
					}
				}
				else{
					HX_STACK_LINE(162)
					if (((l == null()))){
						HX_STACK_LINE(162)
						Dynamic value = (v + delta);		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(162)
						this->variables->set(id,value);
					}
					else{
						HX_STACK_LINE(162)
						l->__FieldRef(HX_CSTRING("r")) = (v + delta);
					}
				}
				HX_STACK_LINE(163)
				return v;
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(154)
			::String f = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(154)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(164)
			{
				HX_STACK_LINE(165)
				Dynamic obj = this->expr(e1);		HX_STACK_VAR(obj,"obj");
				HX_STACK_LINE(166)
				Dynamic v = this->get(obj,f);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(167)
				if ((prefix)){
					HX_STACK_LINE(168)
					hx::AddEq(v,delta);
					HX_STACK_LINE(169)
					this->set(obj,f,v);
				}
				else{
					HX_STACK_LINE(171)
					this->set(obj,f,(v + delta));
				}
				HX_STACK_LINE(172)
				return v;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(154)
			::hscript::Expr index = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(154)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(173)
			{
				HX_STACK_LINE(174)
				Array< int > arr = this->expr(e1);		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(175)
				int index1 = this->expr(index);		HX_STACK_VAR(index1,"index1");
				HX_STACK_LINE(176)
				int v = arr->__get(index1);		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(177)
				if ((prefix)){
					HX_STACK_LINE(178)
					hx::AddEq(v,delta);
					HX_STACK_LINE(179)
					arr[index1] = v;
				}
				else{
					HX_STACK_LINE(181)
					arr[index1] = (v + delta);
				}
				HX_STACK_LINE(182)
				return v;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(184)
			HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp((  (((delta > (int)0))) ? ::String(HX_CSTRING("++")) : ::String(HX_CSTRING("--")) )));
		}
	}
	HX_STACK_LINE(154)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,increment,return )

Dynamic Interp_obj::execute( ::hscript::Expr expr){
	HX_STACK_FRAME("hscript.Interp","execute",0xe1c3af56,"hscript.Interp.execute","hscript/Interp.hx",188,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(expr,"expr")
	HX_STACK_LINE(190)
	::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(190)
	this->locals = _g;
	HX_STACK_LINE(194)
	return this->exprReturn(expr);
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,execute,return )

Dynamic Interp_obj::exprReturn( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Interp","exprReturn",0x8cfbf144,"hscript.Interp.exprReturn","hscript/Interp.hx",197,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(198)
	try
	{
	HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
	{
		HX_STACK_LINE(199)
		return this->expr(e);
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::hscript::_Interp::Stop >() ){
			HX_STACK_BEGIN_CATCH
			::hscript::_Interp::Stop e1 = __e;{
				HX_STACK_LINE(201)
				switch( (int)(e1->__Index())){
					case (int)0: {
						HX_STACK_LINE(202)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid break"));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(203)
						HX_STACK_DO_THROW(HX_CSTRING("Invalid continue"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(201)
						Dynamic v = (::hscript::_Interp::Stop(e1))->__Param(0);		HX_STACK_VAR(v,"v");
						HX_STACK_LINE(204)
						return v;
					}
					;break;
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(207)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,exprReturn,return )

::haxe::ds::StringMap Interp_obj::duplicate( ::haxe::ds::StringMap h){
	HX_STACK_FRAME("hscript.Interp","duplicate",0x8d9a10ec,"hscript.Interp.duplicate","hscript/Interp.hx",210,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(212)
	::haxe::ds::StringMap h2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(h2,"h2");
	HX_STACK_LINE(216)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(h->keys());  __it->hasNext(); ){
		::String k = __it->next();
		{
			HX_STACK_LINE(217)
			Dynamic value = h->get(k);		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(217)
			h2->set(k,value);
		}
;
	}
	HX_STACK_LINE(218)
	return h2;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,duplicate,return )

Void Interp_obj::restore( int old){
{
		HX_STACK_FRAME("hscript.Interp","restore",0x80670c6f,"hscript.Interp.restore","hscript/Interp.hx",222,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(old,"old")
		HX_STACK_LINE(222)
		while((true)){
			HX_STACK_LINE(222)
			if ((!(((this->declared->__Field(HX_CSTRING("length"),true) > old))))){
				HX_STACK_LINE(222)
				break;
			}
			HX_STACK_LINE(223)
			Dynamic d = this->declared->__Field(HX_CSTRING("pop"),true)();		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(224)
			this->locals->set(d->__Field(HX_CSTRING("n"),true),d->__Field(HX_CSTRING("old"),true));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,restore,(void))

Dynamic Interp_obj::resolve( ::String id){
	HX_STACK_FRAME("hscript.Interp","resolve",0x7d16b80d,"hscript.Interp.resolve","hscript/Interp.hx",228,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(229)
	Dynamic l = this->locals->get(id);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(230)
	if (((l != null()))){
		HX_STACK_LINE(231)
		return l->__Field(HX_CSTRING("r"),true);
	}
	HX_STACK_LINE(232)
	Dynamic v = this->variables->get(id);		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(233)
	if (((  (((v == null()))) ? bool(!(this->variables->exists(id))) : bool(false) ))){
		HX_STACK_LINE(234)
		HX_STACK_DO_THROW(::hscript::Error_obj::EUnknownVariable(id));
	}
	HX_STACK_LINE(235)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,resolve,return )

Dynamic Interp_obj::expr( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Interp","expr",0xec634974,"hscript.Interp.expr","hscript/Interp.hx",238,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(239)
	switch( (int)(e->__Index())){
		case (int)0: {
			HX_STACK_LINE(239)
			::hscript::Const c = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(241)
			switch( (int)(c->__Index())){
				case (int)0: {
					HX_STACK_LINE(241)
					int v = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(242)
					return v;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(241)
					Float f = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(243)
					return f;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(241)
					::String s = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(244)
					return s;
				}
				;break;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(239)
			::String id = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(250)
			return this->resolve(id);
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			::String n = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(252)
				Dynamic _g = this->locals->get(n);		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &_g,::String &n){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",252,0xf078416e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("n") , n,false);
							__result->Add(HX_CSTRING("old") , _g,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(252)
				Dynamic _g1 = _Function_3_1::Block(_g,n);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(252)
				this->declared->__Field(HX_CSTRING("push"),true)(_g1);
				HX_STACK_LINE(253)
				{
					HX_STACK_LINE(253)
					Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(253)
					if (((e1 == null()))){
						HX_STACK_LINE(253)
						_g2 = null();
					}
					else{
						HX_STACK_LINE(253)
						_g2 = this->expr(e1);
					}
					struct _Function_4_1{
						inline static Dynamic Block( Dynamic &_g2){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",253,0xf078416e)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("r") , _g2,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(253)
					Dynamic value = _Function_4_1::Block(_g2);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(253)
					this->locals->set(n,value);
				}
				HX_STACK_LINE(254)
				return null();
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(256)
			return this->expr(e1);
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(239)
			Array< ::Dynamic > exprs = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(exprs,"exprs");
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(258)
				int old = this->declared->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(259)
				Dynamic v = null();		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(260)
				{
					HX_STACK_LINE(260)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(260)
					while((true)){
						HX_STACK_LINE(260)
						if ((!(((_g < exprs->length))))){
							HX_STACK_LINE(260)
							break;
						}
						HX_STACK_LINE(260)
						::hscript::Expr e1 = exprs->__get(_g).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(260)
						++(_g);
						HX_STACK_LINE(261)
						Dynamic _g3 = this->expr(e1);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(261)
						v = _g3;
					}
				}
				HX_STACK_LINE(262)
				this->restore(old);
				HX_STACK_LINE(263)
				return v;
			}
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(239)
			::String f = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(265)
				Dynamic _g4 = this->expr(e1);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(265)
				return this->get(_g4,f);
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(239)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			::String op = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(266)
			{
				HX_STACK_LINE(267)
				Dynamic fop = this->binops->get(op);		HX_STACK_VAR(fop,"fop");
				HX_STACK_LINE(268)
				if (((fop == null()))){
					HX_STACK_LINE(268)
					HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp(op));
				}
				HX_STACK_LINE(269)
				return fop(e1,e2);
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			bool prefix = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(prefix,"prefix");
			HX_STACK_LINE(239)
			::String op = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(271)
			::String _switch_1 = (op);
			if (  ( _switch_1==HX_CSTRING("!"))){
				HX_STACK_LINE(273)
				Dynamic _g5 = this->expr(e1);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(273)
				return (_g5 != true);
			}
			else if (  ( _switch_1==HX_CSTRING("-"))){
				HX_STACK_LINE(275)
				return -(this->expr(e1));
			}
			else if (  ( _switch_1==HX_CSTRING("++"))){
				HX_STACK_LINE(277)
				return this->increment(e1,prefix,(int)1);
			}
			else if (  ( _switch_1==HX_CSTRING("--"))){
				HX_STACK_LINE(279)
				return this->increment(e1,prefix,(int)-1);
			}
			else if (  ( _switch_1==HX_CSTRING("~"))){
				HX_STACK_LINE(284)
				return ~(int)(this->expr(e1));
			}
			else  {
				HX_STACK_LINE(287)
				HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidOp(op));
			}
;
;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(239)
			Array< ::Dynamic > params = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(289)
			{
				HX_STACK_LINE(290)
				Dynamic args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
				HX_STACK_LINE(291)
				{
					HX_STACK_LINE(291)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(291)
					while((true)){
						HX_STACK_LINE(291)
						if ((!(((_g < params->length))))){
							HX_STACK_LINE(291)
							break;
						}
						HX_STACK_LINE(291)
						::hscript::Expr p = params->__get(_g).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(291)
						++(_g);
						HX_STACK_LINE(292)
						Dynamic _g6 = this->expr(p);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(292)
						args->__Field(HX_CSTRING("push"),true)(_g6);
					}
				}
				HX_STACK_LINE(293)
				switch( (int)(e1->__Index())){
					case (int)5: {
						HX_STACK_LINE(293)
						::String f = (::hscript::Expr(e1))->__Param(1);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(293)
						::hscript::Expr e2 = (::hscript::Expr(e1))->__Param(0);		HX_STACK_VAR(e2,"e2");
						HX_STACK_LINE(294)
						{
							HX_STACK_LINE(295)
							Dynamic obj = this->expr(e2);		HX_STACK_VAR(obj,"obj");
							HX_STACK_LINE(296)
							if (((obj == null()))){
								HX_STACK_LINE(296)
								HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidAccess(f));
							}
							HX_STACK_LINE(297)
							return this->fcall(obj,f,args);
						}
					}
					;break;
					default: {
						HX_STACK_LINE(299)
						Dynamic _g7 = this->expr(e1);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(299)
						return this->call(null(),_g7,args);
					}
				}
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(239)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			::hscript::Expr econd = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(econd,"econd");
			HX_STACK_LINE(301)
			{
				HX_STACK_LINE(302)
				Dynamic _g8 = this->expr(econd);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(302)
				if (((_g8 == true))){
					HX_STACK_LINE(302)
					return this->expr(e1);
				}
				else{
					HX_STACK_LINE(302)
					if (((e2 == null()))){
						HX_STACK_LINE(302)
						return null();
					}
					else{
						HX_STACK_LINE(302)
						return this->expr(e2);
					}
				}
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			::hscript::Expr econd = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(econd,"econd");
			HX_STACK_LINE(303)
			{
				HX_STACK_LINE(304)
				this->whileLoop(econd,e1);
				HX_STACK_LINE(305)
				return null();
			}
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			::hscript::Expr it = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(it,"it");
			HX_STACK_LINE(239)
			::String v = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(306)
			{
				HX_STACK_LINE(307)
				this->forLoop(v,it,e1);
				HX_STACK_LINE(308)
				return null();
			}
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(310)
			HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SBreak);
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(312)
			HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SContinue);
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(313)
			{
				HX_STACK_LINE(314)
				Dynamic _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(314)
				if (((e1 == null()))){
					HX_STACK_LINE(314)
					_g9 = null();
				}
				else{
					HX_STACK_LINE(314)
					_g9 = this->expr(e1);
				}
				HX_STACK_LINE(314)
				HX_STACK_DO_THROW(::hscript::_Interp::Stop_obj::SReturn(_g9));
			}
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(239)
			::String name = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(name,"name");
			HX_STACK_LINE(239)
			Array< ::Dynamic > fexpr = Array_obj< ::Dynamic >::__new().Add((::hscript::Expr(e))->__Param(1));		HX_STACK_VAR(fexpr,"fexpr");
			HX_STACK_LINE(239)
			Dynamic params = Dynamic( Array_obj<Dynamic>::__new().Add((::hscript::Expr(e))->__Param(0)));		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(315)
			{
				HX_STACK_LINE(316)
				Array< ::Dynamic > capturedLocals = Array_obj< ::Dynamic >::__new().Add(this->duplicate(this->locals));		HX_STACK_VAR(capturedLocals,"capturedLocals");
				HX_STACK_LINE(317)
				Array< ::Dynamic > me = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(me,"me");

				HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,capturedLocals,Dynamic,params,Array< ::Dynamic >,me,Array< ::Dynamic >,fexpr)
				Dynamic run(Dynamic args){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","hscript/Interp.hx",318,0xf078416e)
					HX_STACK_ARG(args,"args")
					{
						HX_STACK_LINE(319)
						if (((args->__Field(HX_CSTRING("length"),true) != params->__GetItem((int)0)->__Field(HX_CSTRING("length"),true)))){
							HX_STACK_LINE(319)
							HX_STACK_DO_THROW(HX_CSTRING("Invalid number of parameters"));
						}
						HX_STACK_LINE(320)
						::haxe::ds::StringMap old = me->__get((int)0).StaticCast< ::hscript::Interp >()->locals;		HX_STACK_VAR(old,"old");
						HX_STACK_LINE(321)
						::haxe::ds::StringMap _g10 = me->__get((int)0).StaticCast< ::hscript::Interp >()->duplicate(capturedLocals->__get((int)0).StaticCast< ::haxe::ds::StringMap >());		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(321)
						me->__get((int)0).StaticCast< ::hscript::Interp >()->locals = _g10;
						HX_STACK_LINE(322)
						{
							HX_STACK_LINE(322)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(322)
							int _g = params->__GetItem((int)0)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(322)
							while((true)){
								HX_STACK_LINE(322)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(322)
									break;
								}
								HX_STACK_LINE(322)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								struct _Function_6_1{
									inline static Dynamic Block( Dynamic &args,int &i){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",323,0xf078416e)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											__result->Add(HX_CSTRING("r") , args->__GetItem(i),false);
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(323)
								me->__get((int)0).StaticCast< ::hscript::Interp >()->locals->set(params->__GetItem((int)0)->__GetItem(i)->__Field(HX_CSTRING("name"),true),_Function_6_1::Block(args,i));
							}
						}
						HX_STACK_LINE(324)
						Dynamic r = null();		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(325)
						try
						{
						HX_STACK_CATCHABLE(Dynamic, 0);
						{
							HX_STACK_LINE(326)
							Dynamic _g11 = me->__get((int)0).StaticCast< ::hscript::Interp >()->exprReturn(fexpr->__get((int)0).StaticCast< ::hscript::Expr >());		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(326)
							r = _g11;
						}
						}
						catch(Dynamic __e){
							{
								HX_STACK_BEGIN_CATCH
								Dynamic e1 = __e;{
									HX_STACK_LINE(328)
									me->__get((int)0).StaticCast< ::hscript::Interp >()->locals = old;
									HX_STACK_LINE(332)
									HX_STACK_DO_THROW(e1);
								}
							}
						}
						HX_STACK_LINE(335)
						me->__get((int)0).StaticCast< ::hscript::Interp >()->locals = old;
						HX_STACK_LINE(336)
						return r;
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_STACK_LINE(318)
				Dynamic f =  Dynamic(new _Function_3_1(capturedLocals,params,me,fexpr));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(338)
				Dynamic f1 = ::Reflect_obj::makeVarArgs(f);		HX_STACK_VAR(f1,"f1");
				HX_STACK_LINE(339)
				if (((name != null()))){
					HX_STACK_LINE(340)
					this->variables->set(name,f1);
				}
				HX_STACK_LINE(341)
				return f1;
			}
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(239)
			Array< ::Dynamic > arr = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(arr,"arr");
			HX_STACK_LINE(342)
			{
				HX_STACK_LINE(343)
				Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(344)
				{
					HX_STACK_LINE(344)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(344)
					while((true)){
						HX_STACK_LINE(344)
						if ((!(((_g < arr->length))))){
							HX_STACK_LINE(344)
							break;
						}
						HX_STACK_LINE(344)
						::hscript::Expr e1 = arr->__get(_g).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(344)
						++(_g);
						HX_STACK_LINE(345)
						Dynamic _g12 = this->expr(e1);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(345)
						a->__Field(HX_CSTRING("push"),true)(_g12);
					}
				}
				HX_STACK_LINE(346)
				return a;
			}
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(239)
			::hscript::Expr index = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(347)
			{
				HX_STACK_LINE(348)
				Dynamic _g13 = this->expr(e1);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(348)
				Dynamic _g14 = this->expr(index);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(348)
				return _g13->__GetItem(_g14);
			}
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(239)
			Array< ::Dynamic > params = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(239)
			::String cl = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(349)
			{
				HX_STACK_LINE(350)
				Dynamic a = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(351)
				{
					HX_STACK_LINE(351)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(351)
					while((true)){
						HX_STACK_LINE(351)
						if ((!(((_g < params->length))))){
							HX_STACK_LINE(351)
							break;
						}
						HX_STACK_LINE(351)
						::hscript::Expr e1 = params->__get(_g).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(351)
						++(_g);
						HX_STACK_LINE(352)
						Dynamic _g15 = this->expr(e1);		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(352)
						a->__Field(HX_CSTRING("push"),true)(_g15);
					}
				}
				HX_STACK_LINE(353)
				return this->cnew(cl,a);
			}
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(355)
			HX_STACK_DO_THROW(this->expr(e1));
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(239)
			::hscript::Expr ecatch = (::hscript::Expr(e))->__Param(3);		HX_STACK_VAR(ecatch,"ecatch");
			HX_STACK_LINE(239)
			::String n = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(n,"n");
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(357)
				int old = this->declared->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(old,"old");
				HX_STACK_LINE(358)
				try
				{
				HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
				HX_STACK_CATCHABLE(Dynamic, 1);
				{
					HX_STACK_LINE(359)
					Dynamic v = this->expr(e1);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(360)
					this->restore(old);
					HX_STACK_LINE(361)
					return v;
				}
				}
				catch(Dynamic __e){
					if (__e.IsClass< ::hscript::_Interp::Stop >() ){
						HX_STACK_BEGIN_CATCH
						::hscript::_Interp::Stop err = __e;{
							HX_STACK_LINE(363)
							HX_STACK_DO_THROW(err);
						}
					}
					else {
						HX_STACK_BEGIN_CATCH
						Dynamic err = __e;{
							HX_STACK_LINE(366)
							this->restore(old);
							HX_STACK_LINE(368)
							Dynamic _g16 = this->locals->get(n);		HX_STACK_VAR(_g16,"_g16");
							struct _Function_4_1{
								inline static Dynamic Block( Dynamic &_g16,::String &n){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",368,0xf078416e)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("n") , n,false);
										__result->Add(HX_CSTRING("old") , _g16,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(368)
							Dynamic _g17 = _Function_4_1::Block(_g16,n);		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(368)
							this->declared->__Field(HX_CSTRING("push"),true)(_g17);
							struct _Function_4_2{
								inline static Dynamic Block( Dynamic &err){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",369,0xf078416e)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										__result->Add(HX_CSTRING("r") , err,false);
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(369)
							this->locals->set(n,_Function_4_2::Block(err));
							HX_STACK_LINE(370)
							Dynamic v = this->expr(ecatch);		HX_STACK_VAR(v,"v");
							HX_STACK_LINE(371)
							this->restore(old);
							HX_STACK_LINE(372)
							return v;
						}
					}
				}
			}
		}
		;break;
		case (int)21: {
			HX_STACK_LINE(239)
			Dynamic fl = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(fl,"fl");
			HX_STACK_LINE(374)
			{
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",375,0xf078416e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(375)
				Dynamic o = _Function_3_1::Block();		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(376)
				{
					HX_STACK_LINE(376)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(376)
					while((true)){
						HX_STACK_LINE(376)
						if ((!(((_g < fl->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(376)
							break;
						}
						HX_STACK_LINE(376)
						Dynamic f = fl->__GetItem(_g);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(376)
						++(_g);
						HX_STACK_LINE(377)
						Dynamic _g18 = this->expr(f->__Field(HX_CSTRING("e"),true));		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(377)
						this->set(o,f->__Field(HX_CSTRING("name"),true),_g18);
					}
				}
				HX_STACK_LINE(378)
				return o;
			}
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(239)
			::hscript::Expr e2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(239)
			::hscript::Expr e1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			::hscript::Expr econd = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(econd,"econd");
			HX_STACK_LINE(379)
			{
				HX_STACK_LINE(380)
				Dynamic _g19 = this->expr(econd);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(380)
				if (((_g19 == true))){
					HX_STACK_LINE(380)
					return this->expr(e1);
				}
				else{
					HX_STACK_LINE(380)
					return this->expr(e2);
				}
			}
		}
		;break;
	}
	HX_STACK_LINE(382)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,expr,return )

Void Interp_obj::whileLoop( ::hscript::Expr econd,::hscript::Expr e){
{
		HX_STACK_FRAME("hscript.Interp","whileLoop",0xce1b3216,"hscript.Interp.whileLoop","hscript/Interp.hx",385,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(econd,"econd")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(386)
		int old = this->declared->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(387)
		while((true)){
			HX_STACK_LINE(387)
			Dynamic _g = this->expr(econd);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(387)
			if ((!(((_g == true))))){
				HX_STACK_LINE(387)
				break;
			}
			HX_STACK_LINE(388)
			try
			{
			HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
			{
				HX_STACK_LINE(389)
				this->expr(e);
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::hscript::_Interp::Stop >() ){
					HX_STACK_BEGIN_CATCH
					::hscript::_Interp::Stop err = __e;{
						HX_STACK_LINE(391)
						int _switch_2 = (err->__Index());
						if (  ( _switch_2==(int)1)){
						}
						else if (  ( _switch_2==(int)0)){
							HX_STACK_LINE(393)
							break;
						}
						else if (  ( _switch_2==(int)2)){
							HX_STACK_LINE(394)
							HX_STACK_DO_THROW(err);
						}
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		HX_STACK_LINE(398)
		this->restore(old);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,whileLoop,(void))

Dynamic Interp_obj::makeIterator( Dynamic v){
	HX_STACK_FRAME("hscript.Interp","makeIterator",0x634d013b,"hscript.Interp.makeIterator","hscript/Interp.hx",401,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(405)
	Dynamic _g = v->__Field(HX_CSTRING("iterator"),true)();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(405)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(405)
		v = _g;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(407)
	if (((bool((v->__Field(HX_CSTRING("hasNext"),true) == null())) || bool((v->__Field(HX_CSTRING("next"),true) == null()))))){
		HX_STACK_LINE(407)
		HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidIterator(v));
	}
	HX_STACK_LINE(408)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC1(Interp_obj,makeIterator,return )

Void Interp_obj::forLoop( ::String n,::hscript::Expr it,::hscript::Expr e){
{
		HX_STACK_FRAME("hscript.Interp","forLoop",0xdf1ff72e,"hscript.Interp.forLoop","hscript/Interp.hx",411,0xf078416e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(n,"n")
		HX_STACK_ARG(it,"it")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(412)
		int old = this->declared->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(413)
		Dynamic _g = this->locals->get(n);		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &_g,::String &n){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",413,0xf078416e)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("n") , n,false);
					__result->Add(HX_CSTRING("old") , _g,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(413)
		Dynamic _g1 = _Function_1_1::Block(_g,n);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(413)
		this->declared->__Field(HX_CSTRING("push"),true)(_g1);
		HX_STACK_LINE(414)
		Dynamic _g2 = this->expr(it);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(414)
		Dynamic it1 = this->makeIterator(_g2);		HX_STACK_VAR(it1,"it1");
		HX_STACK_LINE(415)
		while((true)){
			HX_STACK_LINE(415)
			if ((!(it1->__Field(HX_CSTRING("hasNext"),true)()))){
				HX_STACK_LINE(415)
				break;
			}
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				Dynamic _g3 = it1->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(_g3,"_g3");
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &_g3){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Interp.hx",416,0xf078416e)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("r") , _g3,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(416)
				Dynamic value = _Function_3_1::Block(_g3);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(416)
				this->locals->set(n,value);
			}
			HX_STACK_LINE(417)
			try
			{
			HX_STACK_CATCHABLE(::hscript::_Interp::Stop, 0);
			{
				HX_STACK_LINE(418)
				this->expr(e);
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::hscript::_Interp::Stop >() ){
					HX_STACK_BEGIN_CATCH
					::hscript::_Interp::Stop err = __e;{
						HX_STACK_LINE(420)
						int _switch_3 = (err->__Index());
						if (  ( _switch_3==(int)1)){
						}
						else if (  ( _switch_3==(int)0)){
							HX_STACK_LINE(422)
							break;
						}
						else if (  ( _switch_3==(int)2)){
							HX_STACK_LINE(423)
							HX_STACK_DO_THROW(err);
						}
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
		}
		HX_STACK_LINE(427)
		this->restore(old);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,forLoop,(void))

Dynamic Interp_obj::get( Dynamic o,::String f){
	HX_STACK_FRAME("hscript.Interp","get",0xf7e1c137,"hscript.Interp.get","hscript/Interp.hx",430,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(431)
	if (((o == null()))){
		HX_STACK_LINE(431)
		HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidAccess(f));
	}
	HX_STACK_LINE(432)
	return ::Reflect_obj::field(o,f);
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,get,return )

Dynamic Interp_obj::set( Dynamic o,::String f,Dynamic v){
	HX_STACK_FRAME("hscript.Interp","set",0xf7eadc43,"hscript.Interp.set","hscript/Interp.hx",435,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(436)
	if (((o == null()))){
		HX_STACK_LINE(436)
		HX_STACK_DO_THROW(::hscript::Error_obj::EInvalidAccess(f));
	}
	HX_STACK_LINE(437)
	if (((o != null()))){
		HX_STACK_LINE(437)
		o->__SetField(f,v,false);
	}
	HX_STACK_LINE(438)
	return v;
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,set,return )

Dynamic Interp_obj::fcall( Dynamic o,::String f,Dynamic args){
	HX_STACK_FRAME("hscript.Interp","fcall",0x6ff6aee5,"hscript.Interp.fcall","hscript/Interp.hx",441,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(442)
	Dynamic _g = ::Reflect_obj::field(o,f);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(442)
	return this->call(o,_g,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,fcall,return )

Dynamic Interp_obj::call( Dynamic o,Dynamic f,Dynamic args){
	HX_STACK_FRAME("hscript.Interp","call",0xeaff64dd,"hscript.Interp.call","hscript/Interp.hx",446,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(446)
	return ::Reflect_obj::callMethod(o,f,args);
}


HX_DEFINE_DYNAMIC_FUNC3(Interp_obj,call,return )

Dynamic Interp_obj::cnew( ::String cl,Dynamic args){
	HX_STACK_FRAME("hscript.Interp","cnew",0xeb093c1c,"hscript.Interp.cnew","hscript/Interp.hx",449,0xf078416e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cl,"cl")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(450)
	::Class c = ::Type_obj::resolveClass(cl);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(451)
	if (((c == null()))){
		HX_STACK_LINE(451)
		Dynamic _g = this->resolve(cl);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(451)
		c = _g;
	}
	HX_STACK_LINE(452)
	return ::Type_obj::createInstance(c,args);
}


HX_DEFINE_DYNAMIC_FUNC2(Interp_obj,cnew,return )


Interp_obj::Interp_obj()
{
}

void Interp_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Interp);
	HX_MARK_MEMBER_NAME(variables,"variables");
	HX_MARK_MEMBER_NAME(locals,"locals");
	HX_MARK_MEMBER_NAME(binops,"binops");
	HX_MARK_MEMBER_NAME(declared,"declared");
	HX_MARK_END_CLASS();
}

void Interp_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(variables,"variables");
	HX_VISIT_MEMBER_NAME(locals,"locals");
	HX_VISIT_MEMBER_NAME(binops,"binops");
	HX_VISIT_MEMBER_NAME(declared,"declared");
}

Dynamic Interp_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"expr") ) { return expr_dyn(); }
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		if (HX_FIELD_EQ(inName,"cnew") ) { return cnew_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fcall") ) { return fcall_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { return locals; }
		if (HX_FIELD_EQ(inName,"binops") ) { return binops; }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"initOps") ) { return initOps_dyn(); }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		if (HX_FIELD_EQ(inName,"restore") ) { return restore_dyn(); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		if (HX_FIELD_EQ(inName,"forLoop") ) { return forLoop_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { return declared; }
		if (HX_FIELD_EQ(inName,"assignOp") ) { return assignOp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { return variables; }
		if (HX_FIELD_EQ(inName,"increment") ) { return increment_dyn(); }
		if (HX_FIELD_EQ(inName,"duplicate") ) { return duplicate_dyn(); }
		if (HX_FIELD_EQ(inName,"whileLoop") ) { return whileLoop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"exprReturn") ) { return exprReturn_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"evalAssignOp") ) { return evalAssignOp_dyn(); }
		if (HX_FIELD_EQ(inName,"makeIterator") ) { return makeIterator_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Interp_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"locals") ) { locals=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"binops") ) { binops=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"declared") ) { declared=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { variables=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Interp_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("variables"));
	outFields->push(HX_CSTRING("locals"));
	outFields->push(HX_CSTRING("binops"));
	outFields->push(HX_CSTRING("declared"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,variables),HX_CSTRING("variables")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,locals),HX_CSTRING("locals")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Interp_obj,binops),HX_CSTRING("binops")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Interp_obj,declared),HX_CSTRING("declared")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("variables"),
	HX_CSTRING("locals"),
	HX_CSTRING("binops"),
	HX_CSTRING("declared"),
	HX_CSTRING("initOps"),
	HX_CSTRING("assign"),
	HX_CSTRING("assignOp"),
	HX_CSTRING("evalAssignOp"),
	HX_CSTRING("increment"),
	HX_CSTRING("execute"),
	HX_CSTRING("exprReturn"),
	HX_CSTRING("duplicate"),
	HX_CSTRING("restore"),
	HX_CSTRING("resolve"),
	HX_CSTRING("expr"),
	HX_CSTRING("whileLoop"),
	HX_CSTRING("makeIterator"),
	HX_CSTRING("forLoop"),
	HX_CSTRING("get"),
	HX_CSTRING("set"),
	HX_CSTRING("fcall"),
	HX_CSTRING("call"),
	HX_CSTRING("cnew"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Interp_obj::__mClass,"__mClass");
};

#endif

Class Interp_obj::__mClass;

void Interp_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("hscript.Interp"), hx::TCanCast< Interp_obj> ,sStaticFields,sMemberFields,
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

void Interp_obj::__boot()
{
}

} // end namespace hscript
