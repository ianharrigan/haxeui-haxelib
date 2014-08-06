#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_zip_HuffTools
#include <haxe/zip/HuffTools.h>
#endif
#ifndef INCLUDED_haxe_zip_Huffman
#include <haxe/zip/Huffman.h>
#endif
namespace haxe{
namespace zip{

Void HuffTools_obj::__construct()
{
HX_STACK_FRAME("haxe.zip.HuffTools","new",0x5263948b,"haxe.zip.HuffTools.new","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Huffman.hx",32,0x1331d34b)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//HuffTools_obj::~HuffTools_obj() { }

Dynamic HuffTools_obj::__CreateEmpty() { return  new HuffTools_obj; }
hx::ObjectPtr< HuffTools_obj > HuffTools_obj::__new()
{  hx::ObjectPtr< HuffTools_obj > result = new HuffTools_obj();
	result->__construct();
	return result;}

Dynamic HuffTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HuffTools_obj > result = new HuffTools_obj();
	result->__construct();
	return result;}

int HuffTools_obj::treeDepth( ::haxe::zip::Huffman t){
	HX_STACK_FRAME("haxe.zip.HuffTools","treeDepth",0x748ac930,"haxe.zip.HuffTools.treeDepth","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Huffman.hx",36,0x1331d34b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(36)
	switch( (int)(t->__Index())){
		case (int)0: {
			HX_STACK_LINE(37)
			return (int)0;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(38)
			HX_STACK_DO_THROW(HX_CSTRING("assert"));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(36)
			::haxe::zip::Huffman b = (::haxe::zip::Huffman(t))->__Param(1);		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(36)
			::haxe::zip::Huffman a = (::haxe::zip::Huffman(t))->__Param(0);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(39)
			{
				HX_STACK_LINE(40)
				int da = this->treeDepth(a);		HX_STACK_VAR(da,"da");
				HX_STACK_LINE(41)
				int db = this->treeDepth(b);		HX_STACK_VAR(db,"db");
				HX_STACK_LINE(42)
				return ((int)1 + ((  (((da < db))) ? int(da) : int(db) )));
			}
		}
		;break;
	}
	HX_STACK_LINE(36)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(HuffTools_obj,treeDepth,return )

::haxe::zip::Huffman HuffTools_obj::treeCompress( ::haxe::zip::Huffman t){
	HX_STACK_FRAME("haxe.zip.HuffTools","treeCompress",0x66340995,"haxe.zip.HuffTools.treeCompress","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Huffman.hx",46,0x1331d34b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(47)
	int d = this->treeDepth(t);		HX_STACK_VAR(d,"d");
	HX_STACK_LINE(48)
	if (((d == (int)0))){
		HX_STACK_LINE(49)
		return t;
	}
	HX_STACK_LINE(50)
	if (((d == (int)1))){
		HX_STACK_LINE(51)
		switch( (int)(t->__Index())){
			case (int)1: {
				HX_STACK_LINE(51)
				::haxe::zip::Huffman b = (::haxe::zip::Huffman(t))->__Param(1);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(51)
				::haxe::zip::Huffman a = (::haxe::zip::Huffman(t))->__Param(0);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					::haxe::zip::Huffman _g = this->treeCompress(a);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(52)
					::haxe::zip::Huffman _g1 = this->treeCompress(b);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(52)
					return ::haxe::zip::Huffman_obj::NeedBit(_g,_g1);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(53)
				HX_STACK_DO_THROW(HX_CSTRING("assert"));
			}
		}
	}
	HX_STACK_LINE(55)
	int size = (int((int)1) << int(d));		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(56)
	Array< ::Dynamic > table = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(table,"table");
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		while((true)){
			HX_STACK_LINE(57)
			if ((!(((_g < size))))){
				HX_STACK_LINE(57)
				break;
			}
			HX_STACK_LINE(57)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(58)
			::haxe::zip::Huffman _g2 = ::haxe::zip::Huffman_obj::Found((int)-1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(58)
			table->push(_g2);
		}
	}
	HX_STACK_LINE(59)
	this->treeWalk(table,(int)0,(int)0,d,t);
	HX_STACK_LINE(60)
	return ::haxe::zip::Huffman_obj::NeedBits(d,table);
}


HX_DEFINE_DYNAMIC_FUNC1(HuffTools_obj,treeCompress,return )

Void HuffTools_obj::treeWalk( Array< ::Dynamic > table,int p,int cd,int d,::haxe::zip::Huffman t){
{
		HX_STACK_FRAME("haxe.zip.HuffTools","treeWalk",0x2e5c697c,"haxe.zip.HuffTools.treeWalk","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Huffman.hx",64,0x1331d34b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(table,"table")
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(cd,"cd")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(64)
		switch( (int)(t->__Index())){
			case (int)1: {
				HX_STACK_LINE(64)
				::haxe::zip::Huffman b = (::haxe::zip::Huffman(t))->__Param(1);		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(64)
				::haxe::zip::Huffman a = (::haxe::zip::Huffman(t))->__Param(0);		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(66)
				if (((d > (int)0))){
					HX_STACK_LINE(67)
					this->treeWalk(table,p,(cd + (int)1),(d - (int)1),a);
					HX_STACK_LINE(68)
					this->treeWalk(table,(int(p) | int((int((int)1) << int(cd)))),(cd + (int)1),(d - (int)1),b);
				}
				else{
					HX_STACK_LINE(70)
					table[p] = this->treeCompress(t);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(72)
				table[p] = this->treeCompress(t);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(HuffTools_obj,treeWalk,(void))

::haxe::zip::Huffman HuffTools_obj::treeMake( ::haxe::ds::IntMap bits,int maxbits,int v,int len){
	HX_STACK_FRAME("haxe.zip.HuffTools","treeMake",0x27c04661,"haxe.zip.HuffTools.treeMake","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Huffman.hx",76,0x1331d34b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bits,"bits")
	HX_STACK_ARG(maxbits,"maxbits")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(77)
	if (((len > maxbits))){
		HX_STACK_LINE(77)
		HX_STACK_DO_THROW(HX_CSTRING("Invalid huffman"));
	}
	HX_STACK_LINE(78)
	int idx = (int((int(v) << int((int)5))) | int(len));		HX_STACK_VAR(idx,"idx");
	HX_STACK_LINE(79)
	if ((bits->exists(idx))){
		HX_STACK_LINE(80)
		Dynamic _g = bits->get(idx);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		return ::haxe::zip::Huffman_obj::Found(_g);
	}
	HX_STACK_LINE(81)
	hx::ShlEq(v,(int)1);
	HX_STACK_LINE(82)
	hx::AddEq(len,(int)1);
	HX_STACK_LINE(83)
	::haxe::zip::Huffman _g1 = this->treeMake(bits,maxbits,v,len);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(83)
	::haxe::zip::Huffman _g2 = this->treeMake(bits,maxbits,(int(v) | int((int)1)),len);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(83)
	return ::haxe::zip::Huffman_obj::NeedBit(_g1,_g2);
}


HX_DEFINE_DYNAMIC_FUNC4(HuffTools_obj,treeMake,return )

::haxe::zip::Huffman HuffTools_obj::make( Array< int > lengths,int pos,int nlengths,int maxbits){
	HX_STACK_FRAME("haxe.zip.HuffTools","make",0xc4121b63,"haxe.zip.HuffTools.make","C:\\Servers\\Haxe\\haxe\\std/haxe/zip/Huffman.hx",86,0x1331d34b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lengths,"lengths")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(nlengths,"nlengths")
	HX_STACK_ARG(maxbits,"maxbits")
	HX_STACK_LINE(87)
	Array< int > counts = Array_obj< int >::__new();		HX_STACK_VAR(counts,"counts");
	HX_STACK_LINE(88)
	Array< int > tmp = Array_obj< int >::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	if (((maxbits > (int)32))){
		HX_STACK_LINE(89)
		HX_STACK_DO_THROW(HX_CSTRING("Invalid huffman"));
	}
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(90)
		while((true)){
			HX_STACK_LINE(90)
			if ((!(((_g < maxbits))))){
				HX_STACK_LINE(90)
				break;
			}
			HX_STACK_LINE(90)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(91)
			counts->push((int)0);
			HX_STACK_LINE(92)
			tmp->push((int)0);
		}
	}
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(94)
		while((true)){
			HX_STACK_LINE(94)
			if ((!(((_g < nlengths))))){
				HX_STACK_LINE(94)
				break;
			}
			HX_STACK_LINE(94)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(95)
			int p = lengths->__get((i + pos));		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(96)
			if (((p >= maxbits))){
				HX_STACK_LINE(96)
				HX_STACK_DO_THROW(HX_CSTRING("Invalid huffman"));
			}
			HX_STACK_LINE(97)
			(counts[p])++;
		}
	}
	HX_STACK_LINE(99)
	int code = (int)0;		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(100)
		int _g = (maxbits - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		while((true)){
			HX_STACK_LINE(100)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(100)
				break;
			}
			HX_STACK_LINE(100)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(101)
			code = (int((code + counts->__get(i))) << int((int)1));
			HX_STACK_LINE(102)
			tmp[i] = code;
		}
	}
	HX_STACK_LINE(104)
	::haxe::ds::IntMap bits = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(bits,"bits");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		while((true)){
			HX_STACK_LINE(105)
			if ((!(((_g < nlengths))))){
				HX_STACK_LINE(105)
				break;
			}
			HX_STACK_LINE(105)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(106)
			int l = lengths->__get((i + pos));		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(107)
			if (((l != (int)0))){
				HX_STACK_LINE(108)
				int n = tmp->__get((l - (int)1));		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(109)
				tmp[(l - (int)1)] = (n + (int)1);
				HX_STACK_LINE(110)
				bits->set((int((int(n) << int((int)5))) | int(l)),i);
			}
		}
	}
	HX_STACK_LINE(113)
	::haxe::zip::Huffman _g = this->treeMake(bits,maxbits,(int)0,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(113)
	::haxe::zip::Huffman _g1 = this->treeMake(bits,maxbits,(int)1,(int)1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(113)
	::haxe::zip::Huffman _g2 = ::haxe::zip::Huffman_obj::NeedBit(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(113)
	return this->treeCompress(_g2);
}


HX_DEFINE_DYNAMIC_FUNC4(HuffTools_obj,make,return )


HuffTools_obj::HuffTools_obj()
{
}

Dynamic HuffTools_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"make") ) { return make_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"treeWalk") ) { return treeWalk_dyn(); }
		if (HX_FIELD_EQ(inName,"treeMake") ) { return treeMake_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"treeDepth") ) { return treeDepth_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"treeCompress") ) { return treeCompress_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HuffTools_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void HuffTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("treeDepth"),
	HX_CSTRING("treeCompress"),
	HX_CSTRING("treeWalk"),
	HX_CSTRING("treeMake"),
	HX_CSTRING("make"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HuffTools_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HuffTools_obj::__mClass,"__mClass");
};

#endif

Class HuffTools_obj::__mClass;

void HuffTools_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.zip.HuffTools"), hx::TCanCast< HuffTools_obj> ,sStaticFields,sMemberFields,
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

void HuffTools_obj::__boot()
{
}

} // end namespace haxe
} // end namespace zip
