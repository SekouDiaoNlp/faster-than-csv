/* Generated by Nim Compiler v1.2.4 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <time.h>
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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw;
typedef struct tyObject_ZonedTime__WigfH9apQAxJ69bBPh3wB8RQ tyObject_ZonedTime__WigfH9apQAxJ69bBPh3wB8RQ;
typedef struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A tyTuple__JfHvHzMrhKkWAUvQKe0i1A;
typedef struct tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg;
typedef struct RootObj RootObj;
typedef struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw;
struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q {
NI64 seconds;
NI nanosecond;
};
struct tyObject_ZonedTime__WigfH9apQAxJ69bBPh3wB8RQ {
tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q time;
NI utcOffset;
NIM_BOOL isDst;
};
typedef struct {
N_NIMCALL_PTR(tyObject_ZonedTime__WigfH9apQAxJ69bBPh3wB8RQ, ClP_0) (tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q x, void* ClE_0);
void* ClE_0;
} tyProc__bs1dgeTxHIjPGTR9axkkHbg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw {
tyProc__bs1dgeTxHIjPGTR9axkkHbg zonedTimeFromTimeImpl;
tyProc__bs1dgeTxHIjPGTR9axkkHbg zonedTimeFromAdjTimeImpl;
NimStringDesc* name;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A {
void* Field0;
tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg* Field1;
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg {
  RootObj Sup;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw {
NI64 seconds;
NI nanosecond;
};
typedef NU8 tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ;
typedef NI64 tyArray__pDfjTbtkTNjmi9bTcaNV32Q[8];
static N_NIMCALL(void, Marker_tyRef__HsJiUUcO9cHBdUCi0HwkSTA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__9a5v4OQPlGqsA25ioN8hFYA)(void* p, NI op);
static N_NIMCALL(void, TM__6NbDwwj5FY059b1gz2AsAZQ_4)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_NIMCALL(void, TM__6NbDwwj5FY059b1gz2AsAZQ_5)(void);
static N_INLINE(NI64, convert__2z1a0DRE31bT73xgVvBfQAtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI64 quantity);
static N_INLINE(NI, convert__vsrmXCcg8GubJb67VXeq4wtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity);
static N_INLINE(NI, convert__bBJ7N1GpubC85YlnXz3nHgtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, ntAddDuration)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw a, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, normalize__JK8O6vJVu4WsESmu0kL4aQ)(NI64 seconds, NI64 nanoseconds);
N_LIB_PRIVATE TNimType NTI__F8OvqlxXyGXRSiK9c1fCDVw_;
N_LIB_PRIVATE TNimType NTI__bs1dgeTxHIjPGTR9axkkHbg_;
N_LIB_PRIVATE TNimType NTI__vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTI__diB2NTuAIWY0FO9c5IUJRGg_;
N_LIB_PRIVATE TNimType NTI__HsJiUUcO9cHBdUCi0HwkSTA_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTI__9a5v4OQPlGqsA25ioN8hFYA_;
N_LIB_PRIVATE NIM_CONST tyArray__pDfjTbtkTNjmi9bTcaNV32Q unitWeights__cpugRVHYEC9bUpLa71eZMsQ = {IL64(1),
IL64(1000),
IL64(1000000),
IL64(1000000000),
IL64(60000000000),
IL64(3600000000000),
IL64(86400000000000),
IL64(604800000000000)}
;
N_LIB_PRIVATE tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* utcInstance__oeKVHn4dFpBJO35HhEkelw;
N_LIB_PRIVATE tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* localInstance__cLtN9cK9bCe6IPhJ3UFNLNKA;
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
static N_NIMCALL(void, Marker_tyRef__HsJiUUcO9cHBdUCi0HwkSTA)(void* p, NI op) {
	tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg* a;
	a = (tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg*)p;
}
static N_NIMCALL(void, Marker_tyRef__9a5v4OQPlGqsA25ioN8hFYA)(void* p, NI op) {
	tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* a;
	a = (tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw*)p;
	nimGCvisit((void*)(*a).zonedTimeFromTimeImpl.ClE_0, op);
	nimGCvisit((void*)(*a).zonedTimeFromAdjTimeImpl.ClE_0, op);
	nimGCvisit((void*)(*a).name, op);
}
static N_NIMCALL(void, TM__6NbDwwj5FY059b1gz2AsAZQ_4)(void) {
	nimGCvisit((void*)utcInstance__oeKVHn4dFpBJO35HhEkelw, 0);
}
static N_NIMCALL(void, TM__6NbDwwj5FY059b1gz2AsAZQ_5)(void) {
	nimGCvisit((void*)localInstance__cLtN9cK9bCe6IPhJ3UFNLNKA, 0);
}
static N_INLINE(NI64, convert__2z1a0DRE31bT73xgVvBfQAtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI64 quantity) {
	NI64 result;
	result = (NI64)0;
	{
		if (!(unitFrom < unitTo)) goto LA3_;
		result = (NI64)(quantity / (NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0]));
	}
	goto LA1_;
	LA3_: ;
	{
		result = (NI64)((NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0]) * quantity);
	}
	LA1_: ;
	return result;
}
static N_INLINE(NI, convert__vsrmXCcg8GubJb67VXeq4wtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity) {
	NI result;
	result = (NI)0;
	{
		if (!(unitFrom < unitTo)) goto LA3_;
		result = ((NI) ((NI64)(((NI64) (quantity)) / (NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0]))));
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI) ((NI64)((NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0]) * ((NI64) (quantity)))));
	}
	LA1_: ;
	return result;
}
static N_INLINE(NI, convert__bBJ7N1GpubC85YlnXz3nHgtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity) {
	NI result;
	result = (NI)0;
	{
		if (!(unitFrom < unitTo)) goto LA3_;
		result = ((NI) ((NI64)(((NI64) (quantity)) / (NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0]))));
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NI) ((NI64)((NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0]) * ((NI64) (quantity)))));
	}
	LA1_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, inMilliseconds__df0d89cDnRIju9aB6p1W1qVA)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw dur) {
	NI64 result;
	NIM_BOOL correctionX60gensym14530230_;
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI64)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (dur.seconds < IL64(0));
	if (!(T1_)) goto LA2_;
	T1_ = (((NI) 0) < ((NI) (dur.nanosecond)));
	LA2_: ;
	correctionX60gensym14530230_ = T1_;
	{
		NI64 T7_;
		NI T8_;
		NI T9_;
		if (!correctionX60gensym14530230_) goto LA5_;
		T7_ = (NI64)0;
		T7_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), (NI64)(dur.seconds + IL64(1)));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T8_ = (NI)0;
		T8_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((NI) 1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T9_ = (NI)0;
		T9_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), (NI)(T8_ - ((NI) (dur.nanosecond))));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = (NI64)(T7_ - ((NI64) (T9_)));
	}
	goto LA3_;
	LA5_: ;
	{
		NI64 T11_;
		NI T12_;
		T11_ = (NI64)0;
		T11_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), dur.seconds);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		T12_ = (NI)0;
		T12_ = convert__bBJ7N1GpubC85YlnXz3nHgtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), dur.nanosecond);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = (NI64)(T11_ + ((NI64) (T12_)));
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, normalize__JK8O6vJVu4WsESmu0kL4aQ)(NI64 seconds, NI64 nanoseconds) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
	NI64 T1_;
	NI64 nanosecond;
	NI T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	T1_ = (NI64)0;
	T1_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), nanoseconds);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result.seconds = (NI64)(seconds + T1_);
	T2_ = (NI)0;
	T2_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((NI) 1));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nanosecond = (NI64)(nanoseconds % ((NI64) (T2_)));
	{
		NI T7_;
		if (!(nanosecond < IL64(0))) goto LA5_;
		T7_ = (NI)0;
		T7_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((NI) 1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		nanosecond += ((NI64) (T7_));
		result.seconds -= ((NI) 1);
	}
	LA5_: ;
	result.nanosecond = ((NI) (((NI) (nanosecond))));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, ntAddDuration)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw a, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw b) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	result = normalize__JK8O6vJVu4WsESmu0kL4aQ((NI64)(a.seconds + b.seconds), ((NI64) ((NI)(((NI) (a.nanosecond)) + ((NI) (b.nanosecond))))));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, pluseq___dXIPb9c601v9bvWo9b9abEUKmA)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw* a, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw b) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&T1_), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	T1_ = ntAddDuration((*a), b);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*a) = T1_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, initDuration__wcR3zetvspAUsyuvWZ07Xg)(NI64 nanoseconds, NI64 microseconds, NI64 milliseconds, NI64 seconds, NI64 minutes, NI64 hours, NI64 days, NI64 weeks) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
	NI64 seconds_2;
	NI64 T1_;
	NI64 T2_;
	NI64 T3_;
	NI64 T4_;
	NI64 T5_;
	NI64 T6_;
	NI64 T7_;
	NI64 T8_;
	NI nanoseconds_2;
	NI64 T9_;
	NI64 T10_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	T1_ = (NI64)0;
	T1_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 7), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), weeks);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI64)0;
	T2_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 6), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), days);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T3_ = (NI64)0;
	T3_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 4), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), minutes);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T4_ = (NI64)0;
	T4_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 5), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), hours);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T5_ = (NI64)0;
	T5_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), seconds);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T6_ = (NI64)0;
	T6_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), milliseconds);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T7_ = (NI64)0;
	T7_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 1), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), microseconds);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T8_ = (NI64)0;
	T8_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), nanoseconds);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	seconds_2 = (NI64)((NI64)((NI64)((NI64)((NI64)((NI64)((NI64)(T1_ + T2_) + T3_) + T4_) + T5_) + T6_) + T7_) + T8_);
	T9_ = (NI64)0;
	T9_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), (NI64)(milliseconds % IL64(1000)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T10_ = (NI64)0;
	T10_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 1), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), (NI64)(microseconds % IL64(1000000)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	nanoseconds_2 = ((NI) ((NI64)((NI64)(T9_ + T10_) + (NI64)(nanoseconds % IL64(1000000000)))));
	result = normalize__JK8O6vJVu4WsESmu0kL4aQ(seconds_2, ((NI64) (nanoseconds_2)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, inSeconds__df0d89cDnRIju9aB6p1W1qVA_2)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw dur) {
	NI64 result;
	NIM_BOOL correctionX60gensym14515230_;
	NIM_BOOL T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI64)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (dur.seconds < IL64(0));
	if (!(T1_)) goto LA2_;
	T1_ = (((NI) 0) < ((NI) (dur.nanosecond)));
	LA2_: ;
	correctionX60gensym14515230_ = T1_;
	result = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), (NI64)(dur.seconds + ((NI64) (correctionX60gensym14515230_))));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesInit000)(void) {
{

	nimRegisterThreadLocalMarker(TM__6NbDwwj5FY059b1gz2AsAZQ_4);


	nimRegisterThreadLocalMarker(TM__6NbDwwj5FY059b1gz2AsAZQ_5);

	tzset();
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesDatInit000)(void) {
static TNimNode* TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[3];
static TNimNode* TM__6NbDwwj5FY059b1gz2AsAZQ_3_2[2];
static TNimNode TM__6NbDwwj5FY059b1gz2AsAZQ_0[8];
NTI__F8OvqlxXyGXRSiK9c1fCDVw_.size = sizeof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw);
NTI__F8OvqlxXyGXRSiK9c1fCDVw_.kind = 18;
NTI__F8OvqlxXyGXRSiK9c1fCDVw_.base = 0;
TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[0] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[1];
NTI__bs1dgeTxHIjPGTR9axkkHbg_.size = sizeof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__bs1dgeTxHIjPGTR9axkkHbg_.kind = 18;
NTI__bs1dgeTxHIjPGTR9axkkHbg_.base = 0;
TM__6NbDwwj5FY059b1gz2AsAZQ_3_2[0] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[3];
NTI__vr5DoT1jILTGdRlYv1OYpw_.size = sizeof(void*);
NTI__vr5DoT1jILTGdRlYv1OYpw_.kind = 26;
NTI__vr5DoT1jILTGdRlYv1OYpw_.base = 0;
NTI__vr5DoT1jILTGdRlYv1OYpw_.flags = 3;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[3].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[3].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field0);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[3].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[3].name = "Field0";
TM__6NbDwwj5FY059b1gz2AsAZQ_3_2[1] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[4];
NTI__diB2NTuAIWY0FO9c5IUJRGg_.size = sizeof(tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg);
NTI__diB2NTuAIWY0FO9c5IUJRGg_.kind = 17;
NTI__diB2NTuAIWY0FO9c5IUJRGg_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
NTI__diB2NTuAIWY0FO9c5IUJRGg_.flags = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[5].len = 0; TM__6NbDwwj5FY059b1gz2AsAZQ_0[5].kind = 2;
NTI__diB2NTuAIWY0FO9c5IUJRGg_.node = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[5];
NTI__HsJiUUcO9cHBdUCi0HwkSTA_.size = sizeof(tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg*);
NTI__HsJiUUcO9cHBdUCi0HwkSTA_.kind = 22;
NTI__HsJiUUcO9cHBdUCi0HwkSTA_.base = (&NTI__diB2NTuAIWY0FO9c5IUJRGg_);
NTI__HsJiUUcO9cHBdUCi0HwkSTA_.marker = Marker_tyRef__HsJiUUcO9cHBdUCi0HwkSTA;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[4].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[4].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field1);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[4].typ = (&NTI__HsJiUUcO9cHBdUCi0HwkSTA_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[4].name = "Field1";
TM__6NbDwwj5FY059b1gz2AsAZQ_0[2].len = 2; TM__6NbDwwj5FY059b1gz2AsAZQ_0[2].kind = 2; TM__6NbDwwj5FY059b1gz2AsAZQ_0[2].sons = &TM__6NbDwwj5FY059b1gz2AsAZQ_3_2[0];
NTI__bs1dgeTxHIjPGTR9axkkHbg_.node = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[2];
TM__6NbDwwj5FY059b1gz2AsAZQ_0[1].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[1].offset = offsetof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw, zonedTimeFromTimeImpl);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[1].typ = (&NTI__bs1dgeTxHIjPGTR9axkkHbg_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[1].name = "zonedTimeFromTimeImpl";
TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[1] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[6];
TM__6NbDwwj5FY059b1gz2AsAZQ_0[6].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[6].offset = offsetof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw, zonedTimeFromAdjTimeImpl);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[6].typ = (&NTI__bs1dgeTxHIjPGTR9axkkHbg_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[6].name = "zonedTimeFromAdjTimeImpl";
TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[2] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[7];
TM__6NbDwwj5FY059b1gz2AsAZQ_0[7].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[7].offset = offsetof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw, name);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[7].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[7].name = "name";
TM__6NbDwwj5FY059b1gz2AsAZQ_0[0].len = 3; TM__6NbDwwj5FY059b1gz2AsAZQ_0[0].kind = 2; TM__6NbDwwj5FY059b1gz2AsAZQ_0[0].sons = &TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[0];
NTI__F8OvqlxXyGXRSiK9c1fCDVw_.node = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[0];
NTI__9a5v4OQPlGqsA25ioN8hFYA_.size = sizeof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw*);
NTI__9a5v4OQPlGqsA25ioN8hFYA_.kind = 22;
NTI__9a5v4OQPlGqsA25ioN8hFYA_.base = (&NTI__F8OvqlxXyGXRSiK9c1fCDVw_);
NTI__9a5v4OQPlGqsA25ioN8hFYA_.marker = Marker_tyRef__9a5v4OQPlGqsA25ioN8hFYA;
}

