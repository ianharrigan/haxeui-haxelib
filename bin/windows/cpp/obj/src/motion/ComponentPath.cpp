#include <hxcpp.h>

#ifndef INCLUDED_motion_BezierPath
#include <motion/BezierPath.h>
#endif
#ifndef INCLUDED_motion_ComponentPath
#include <motion/ComponentPath.h>
#endif
#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
namespace motion{

Void ComponentPath_obj::__construct()
{
HX_STACK_FRAME("motion.ComponentPath","new",0xeba5e69c,"motion.ComponentPath.new","motion/MotionPath.hx",113,0x95e57daa)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(115)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(115)
	this->paths = _g;
	HX_STACK_LINE(116)
	this->start = (int)0;
	HX_STACK_LINE(117)
	this->totalStrength = (int)0;
}
;
	return null();
}

//ComponentPath_obj::~ComponentPath_obj() { }

Dynamic ComponentPath_obj::__CreateEmpty() { return  new ComponentPath_obj; }
hx::ObjectPtr< ComponentPath_obj > ComponentPath_obj::__new()
{  hx::ObjectPtr< ComponentPath_obj > result = new ComponentPath_obj();
	result->__construct();
	return result;}

Dynamic ComponentPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComponentPath_obj > result = new ComponentPath_obj();
	result->__construct();
	return result;}

hx::Object *ComponentPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::IComponentPath_obj)) return operator ::motion::IComponentPath_obj *();
	return super::__ToInterface(inType);
}

Void ComponentPath_obj::addPath( ::motion::BezierPath path){
{
		HX_STACK_FRAME("motion.ComponentPath","addPath",0xdfaf0ca2,"motion.ComponentPath.addPath","motion/MotionPath.hx",122,0x95e57daa)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(124)
		this->paths->push(path);
		HX_STACK_LINE(125)
		hx::AddEq(this->totalStrength,path->strength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ComponentPath_obj,addPath,(void))

Float ComponentPath_obj::calculate( Float k){
	HX_STACK_FRAME("motion.ComponentPath","calculate",0xd17900a2,"motion.ComponentPath.calculate","motion/MotionPath.hx",130,0x95e57daa)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(132)
	if (((this->paths->length == (int)1))){
		HX_STACK_LINE(134)
		return this->paths->__get((int)0).StaticCast< ::motion::BezierPath >()->calculate(this->start,k);
	}
	else{
		HX_STACK_LINE(138)
		Float ratio = (k * this->totalStrength);		HX_STACK_VAR(ratio,"ratio");
		HX_STACK_LINE(139)
		Float lastEnd = this->start;		HX_STACK_VAR(lastEnd,"lastEnd");
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			Array< ::Dynamic > _g1 = this->paths;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(141)
			while((true)){
				HX_STACK_LINE(141)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(141)
					break;
				}
				HX_STACK_LINE(141)
				::motion::BezierPath path = _g1->__get(_g).StaticCast< ::motion::BezierPath >();		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(141)
				++(_g);
				HX_STACK_LINE(143)
				if (((ratio > path->strength))){
					HX_STACK_LINE(145)
					hx::SubEq(ratio,path->strength);
					HX_STACK_LINE(146)
					lastEnd = path->end;
				}
				else{
					HX_STACK_LINE(150)
					return path->calculate(lastEnd,(Float(ratio) / Float(path->strength)));
				}
			}
		}
	}
	HX_STACK_LINE(158)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(ComponentPath_obj,calculate,return )

Float ComponentPath_obj::get_end( ){
	HX_STACK_FRAME("motion.ComponentPath","get_end",0x7fe1b0ae,"motion.ComponentPath.get_end","motion/MotionPath.hx",171,0x95e57daa)
	HX_STACK_THIS(this)
	HX_STACK_LINE(171)
	if (((this->paths->length > (int)0))){
		HX_STACK_LINE(173)
		::motion::BezierPath path = this->paths->__get((this->paths->length - (int)1)).StaticCast< ::motion::BezierPath >();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(174)
		return path->end;
	}
	else{
		HX_STACK_LINE(178)
		return this->start;
	}
	HX_STACK_LINE(171)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(ComponentPath_obj,get_end,return )


ComponentPath_obj::ComponentPath_obj()
{
}

void ComponentPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComponentPath);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(paths,"paths");
	HX_MARK_MEMBER_NAME(totalStrength,"totalStrength");
	HX_MARK_END_CLASS();
}

void ComponentPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(paths,"paths");
	HX_VISIT_MEMBER_NAME(totalStrength,"totalStrength");
}

Dynamic ComponentPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return inCallProp ? get_end() : end; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		if (HX_FIELD_EQ(inName,"paths") ) { return paths; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addPath") ) { return addPath_dyn(); }
		if (HX_FIELD_EQ(inName,"get_end") ) { return get_end_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"totalStrength") ) { return totalStrength; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ComponentPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paths") ) { paths=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"totalStrength") ) { totalStrength=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComponentPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("paths"));
	outFields->push(HX_CSTRING("totalStrength"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ComponentPath_obj,start),HX_CSTRING("start")},
	{hx::fsFloat,(int)offsetof(ComponentPath_obj,end),HX_CSTRING("end")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ComponentPath_obj,paths),HX_CSTRING("paths")},
	{hx::fsFloat,(int)offsetof(ComponentPath_obj,totalStrength),HX_CSTRING("totalStrength")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("start"),
	HX_CSTRING("end"),
	HX_CSTRING("paths"),
	HX_CSTRING("totalStrength"),
	HX_CSTRING("addPath"),
	HX_CSTRING("calculate"),
	HX_CSTRING("get_end"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ComponentPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ComponentPath_obj::__mClass,"__mClass");
};

#endif

Class ComponentPath_obj::__mClass;

void ComponentPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.ComponentPath"), hx::TCanCast< ComponentPath_obj> ,sStaticFields,sMemberFields,
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

void ComponentPath_obj::__boot()
{
}

} // end namespace motion
