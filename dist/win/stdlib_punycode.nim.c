/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg {
  tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw Sup;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NI, nsuRFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isBasic__aKPdJv9cYwcMpa6we7pZcmg)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__YbUqFgK9bHfE9aYPuhJ29bPJA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NI, decodeDigit__pIcXxOOODfCU19b9a6GIJX7w)(NIM_CHAR x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, stareq___ogcC1Md4c289bEhAZWpmZUwsystem)(NI* x, NI y);
N_LIB_PRIVATE N_NIMCALL(NI, adapt__zHG24P802C3UYuxD6aHmDw)(NI delta, NI numPoints, NIM_BOOL first);
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, insert__bnB13E7BS4dZJaaSQFdX5w)(NimStringDesc** x, NimStringDesc* item, NI i);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___o9bkGgwDwjPpBbWEBHUdmsw)(NI32 rune);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);

/* section: NIM_merge_DATA */
extern TNimType NTI__yoNlBGx0D2tRizIdhQuENw_;
N_LIB_PRIVATE TNimType NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_;
N_LIB_PRIVATE TNimType NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_;
STRING_LITERAL(TM__bB9aXAfgUf2sUt1wi1PzqWA_2, "Encoded contains a non-basic char", 33);
STRING_LITERAL(TM__bB9aXAfgUf2sUt1wi1PzqWA_3, "Bad input: ", 11);
STRING_LITERAL(TM__bB9aXAfgUf2sUt1wi1PzqWA_4, "Bad input", 9);
STRING_LITERAL(TM__bB9aXAfgUf2sUt1wi1PzqWA_5, "Too large a value: ", 19);
STRING_LITERAL(TM__bB9aXAfgUf2sUt1wi1PzqWA_6, "Value too large", 15);

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isBasic__aKPdJv9cYwcMpa6we7pZcmg)(NIM_CHAR c) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = (((NU8)(c)) < ((NI) 128));
	return result;
}
static N_NIMCALL(void, Marker_tyRef__YbUqFgK9bHfE9aYPuhJ29bPJA)(void* p, NI op) {
	tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg* a;
	a = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*)p;
	nimGCvisit((void*)(*a).Sup.Sup.Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.message, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.trace, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.up, op);
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, decodeDigit__pIcXxOOODfCU19b9a6GIJX7w)(NIM_CHAR x) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = ((NU8)(48) <= (NU8)(x));
		if (!(T3_)) goto LA4_;
		T3_ = ((NU8)(x) <= (NU8)(57));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = (NI)(((NU8)(x)) - ((NI) 22));
	}
	goto LA1_;
	LA5_: ;
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = ((NU8)(65) <= (NU8)(x));
		if (!(T8_)) goto LA9_;
		T8_ = ((NU8)(x) <= (NU8)(90));
		LA9_: ;
		if (!T8_) goto LA10_;
		result = (NI)(((NU8)(x)) - ((NI) 65));
	}
	goto LA1_;
	LA10_: ;
	{
		NIM_BOOL T13_;
		T13_ = (NIM_BOOL)0;
		T13_ = ((NU8)(97) <= (NU8)(x));
		if (!(T13_)) goto LA14_;
		T13_ = ((NU8)(x) <= (NU8)(122));
		LA14_: ;
		if (!T13_) goto LA15_;
		result = (NI)(((NU8)(x)) - ((NI) 97));
	}
	goto LA1_;
	LA15_: ;
	{
		tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg* T18_;
		T18_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*)0;
		T18_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*) newObj((&NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_), sizeof(tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg));
		(*T18_).Sup.Sup.Sup.Sup.m_type = (&NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_);
		(*T18_).Sup.Sup.Sup.name = "PunyError";
		(*T18_).Sup.Sup.Sup.message = copyString(((NimStringDesc*) &TM__bB9aXAfgUf2sUt1wi1PzqWA_4));
		(*T18_).Sup.Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T18_, "PunyError", "decodeDigit", "punycode.nim", 39);
		goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, stareq___ogcC1Md4c289bEhAZWpmZUwsystem)(NI* x, NI y) {
	(*x) = (NI)((*x) * y);
}
N_LIB_PRIVATE N_NIMCALL(NI, adapt__zHG24P802C3UYuxD6aHmDw)(NI delta, NI numPoints, NIM_BOOL first) {
	NI result;
	NI d;
	NI k;
	result = (NI)0;
	{
		if (!first) goto LA3_;
		d = (NI)(delta / ((NI) 700));
	}
	goto LA1_;
	LA3_: ;
	{
		d = (NI)(delta / ((NI) 2));
	}
	LA1_: ;
	d += (NI)(d / numPoints);
	k = ((NI) 0);
	{
		while (1) {
			if (!(((NI) 455) < d)) goto LA7;
			d = (NI)(d / ((NI) 35));
			k += ((NI) 36);
		} LA7: ;
	}
	result = (NI)(k + (NI)((NI)(((NI) 36) * d) / (NI)(d + ((NI) 38))));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, decode__TtWcwj5TAMGBjSKLl4vhKw)(NimStringDesc* encoded) {
	NimStringDesc* result;
	NI n;
	NI i;
	NI bias;
	NI d;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	n = ((NI) 128);
	i = ((NI) 0);
	bias = ((NI) 72);
	d = nsuRFindChar(encoded, 45, ((NI) 0), ((NI) -1));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = ((NimStringDesc*) NIM_NIL);
	{
		if (!(((NI) 0) < d)) goto LA3_;
		{
			NI j;
			NI i_2;
			j = (NI)0;
			i_2 = ((NI) 0);
			{
				while (1) {
					NIM_CHAR c;
					if (!(i_2 < d)) goto LA7;
					j = i_2;
					c = encoded->data[j];
					{
						NIM_BOOL T10_;
						tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg* T13_;
						T10_ = (NIM_BOOL)0;
						T10_ = isBasic__aKPdJv9cYwcMpa6we7pZcmg(c);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						if (!!(T10_)) goto LA11_;
						T13_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*)0;
						T13_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*) newObj((&NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_), sizeof(tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg));
						(*T13_).Sup.Sup.Sup.Sup.m_type = (&NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_);
						(*T13_).Sup.Sup.Sup.name = "PunyError";
						(*T13_).Sup.Sup.Sup.message = copyString(((NimStringDesc*) &TM__bB9aXAfgUf2sUt1wi1PzqWA_2));
						(*T13_).Sup.Sup.Sup.parent = NIM_NIL;
						raiseExceptionEx((Exception*)T13_, "PunyError", "decode", "punycode.nim", 135);
						goto BeforeRet_;
					}
					LA11_: ;
					result = addChar(result, c);
					i_2 += ((NI) 1);
				} LA7: ;
			}
		}
		d += ((NI) 1);
	}
	goto LA1_;
	LA3_: ;
	{
		d = ((NI) 0);
	}
	LA1_: ;
	{
		while (1) {
			NI oldi;
			NI w;
			NI k;
			NI T44_;
			NI T45_;
			NI T52_;
			NI T53_;
			NimStringDesc* T54_;
			if (!(d < (encoded ? encoded->Sup.len : 0))) goto LA16;
			oldi = i;
			w = ((NI) 1);
			k = ((NI) 36);
			{
				while (1) {
					NIM_CHAR c_2;
					NI digit;
					NI t;
					{
						tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg* T23_;
						NimStringDesc* T24_;
						if (!(d == (encoded ? encoded->Sup.len : 0))) goto LA21_;
						T23_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*)0;
						T23_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*) newObj((&NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_), sizeof(tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg));
						(*T23_).Sup.Sup.Sup.Sup.m_type = (&NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_);
						(*T23_).Sup.Sup.Sup.name = "PunyError";
						T24_ = (NimStringDesc*)0;
						T24_ = rawNewString((encoded ? encoded->Sup.len : 0) + 11);
appendString(T24_, ((NimStringDesc*) &TM__bB9aXAfgUf2sUt1wi1PzqWA_3));
appendString(T24_, encoded);
						(*T23_).Sup.Sup.Sup.message = T24_;
						(*T23_).Sup.Sup.Sup.parent = NIM_NIL;
						raiseExceptionEx((Exception*)T23_, "PunyError", "decode", "punycode.nim", 147);
						goto BeforeRet_;
					}
					LA21_: ;
					c_2 = encoded->data[d];
					d += ((NI) 1);
					digit = decodeDigit__pIcXxOOODfCU19b9a6GIJX7w(c_2);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg* T29_;
						NimStringDesc* T30_;
						NimStringDesc* T31_;
						if (!((NI)((NI)(((NI) 2147483647) - i) / w) < digit)) goto LA27_;
						T29_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*)0;
						T29_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*) newObj((&NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_), sizeof(tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg));
						(*T29_).Sup.Sup.Sup.Sup.m_type = (&NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_);
						(*T29_).Sup.Sup.Sup.name = "PunyError";
						T30_ = (NimStringDesc*)0;
						T31_ = (NimStringDesc*)0;
						T31_ = nimIntToStr(digit);
						T30_ = rawNewString((T31_ ? T31_->Sup.len : 0) + 19);
appendString(T30_, ((NimStringDesc*) &TM__bB9aXAfgUf2sUt1wi1PzqWA_5));
appendString(T30_, T31_);
						(*T29_).Sup.Sup.Sup.message = T30_;
						(*T29_).Sup.Sup.Sup.parent = NIM_NIL;
						raiseExceptionEx((Exception*)T29_, "PunyError", "decode", "punycode.nim", 151);
						goto BeforeRet_;
					}
					LA27_: ;
					i += (NI)(digit * w);
					t = (NI)0;
					{
						if (!(k <= bias)) goto LA34_;
						t = ((NI) 1);
					}
					goto LA32_;
					LA34_: ;
					{
						if (!((NI)(bias + ((NI) 26)) <= k)) goto LA37_;
						t = ((NI) 26);
					}
					goto LA32_;
					LA37_: ;
					{
						t = (NI)(k - bias);
					}
					LA32_: ;
					{
						if (!(digit < t)) goto LA42_;
						goto LA17;
					}
					LA42_: ;
					stareq___ogcC1Md4c289bEhAZWpmZUwsystem((&w), (NI)(((NI) 36) - t));
					k += ((NI) 36);
				}
			} LA17: ;
			T44_ = (NI)0;
			T44_ = (NI)(i - oldi);
			T45_ = (NI)0;
			T45_ = nucruneLen(result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			bias = adapt__zHG24P802C3UYuxD6aHmDw(T44_, (NI)(T45_ + ((NI) 1)), (oldi == ((NI) 0)));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				NI T48_;
				tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg* T51_;
				T48_ = (NI)0;
				T48_ = nucruneLen(result);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				if (!((NI)(((NI) 2147483647) - n) < (NI)(i / (NI)(T48_ + ((NI) 1))))) goto LA49_;
				T51_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*)0;
				T51_ = (tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*) newObj((&NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_), sizeof(tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg));
				(*T51_).Sup.Sup.Sup.Sup.m_type = (&NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_);
				(*T51_).Sup.Sup.Sup.name = "PunyError";
				(*T51_).Sup.Sup.Sup.message = copyString(((NimStringDesc*) &TM__bB9aXAfgUf2sUt1wi1PzqWA_6));
				(*T51_).Sup.Sup.Sup.parent = NIM_NIL;
				raiseExceptionEx((Exception*)T51_, "PunyError", "decode", "punycode.nim", 167);
				goto BeforeRet_;
			}
			LA49_: ;
			T52_ = (NI)0;
			T52_ = nucruneLen(result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			n += (NI)(i / (NI)(T52_ + ((NI) 1)));
			T53_ = (NI)0;
			T53_ = nucruneLen(result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			i = (NI)(i % (NI)(T53_ + ((NI) 1)));
			T54_ = (NimStringDesc*)0;
			T54_ = dollar___o9bkGgwDwjPpBbWEBHUdmsw(((NI32) (n)));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			insert__bnB13E7BS4dZJaaSQFdX5w((&result), T54_, ((NI) (i)));
			i += ((NI) 1);
		} LA16: ;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_punycodeDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode TM__bB9aXAfgUf2sUt1wi1PzqWA_0[1];

/* section: NIM_merge_TYPE_INIT3 */
NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_.size = sizeof(tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg);
NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_.align = NIM_ALIGNOF(tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg);
NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_.kind = 17;
NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_.base = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
TM__bB9aXAfgUf2sUt1wi1PzqWA_0[0].len = 0; TM__bB9aXAfgUf2sUt1wi1PzqWA_0[0].kind = 2;
NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_.node = &TM__bB9aXAfgUf2sUt1wi1PzqWA_0[0];
NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_.size = sizeof(tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*);
NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_.align = NIM_ALIGNOF(tyObject_PunyError__9cWwf9aMxNzm4XV59b9cWbLYIg*);
NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_.kind = 22;
NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_.base = (&NTI__9cWwf9aMxNzm4XV59b9cWbLYIg_);
NTI__YbUqFgK9bHfE9aYPuhJ29bPJA_.marker = Marker_tyRef__YbUqFgK9bHfE9aYPuhJ29bPJA;
}
