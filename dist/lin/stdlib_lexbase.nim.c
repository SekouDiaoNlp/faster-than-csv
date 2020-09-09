/* Generated by Nim Compiler v1.2.4 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
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
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg {
  RootObj Sup;
NI bufpos;
NimStringDesc* buf;
tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars;
};
typedef N_NIMCALL_PTR(void, tyProc__JQrsH08b4uPTH9cyFPlVOZg) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__9bmhFrLahRsL2hltfRDVtlQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(void, tyProc__3svSoGIUJIsHkaBL7q4DAQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc__xflqkf2D1uVClg70czEDHA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NI, tyProc__c9c0f59ak4YGQ6neEym8LPKw) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__7jFfqMk9ajToCz6Hv9atCA4A) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** line);
typedef N_NIMCALL_PTR(NI, tyProc__2VVzVL9bOnKhj1eZKkf9cEuA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ {
  RootObj Sup;
tyProc__JQrsH08b4uPTH9cyFPlVOZg closeImpl;
tyProc__9bmhFrLahRsL2hltfRDVtlQ atEndImpl;
tyProc__3svSoGIUJIsHkaBL7q4DAQ setPositionImpl;
tyProc__xflqkf2D1uVClg70czEDHA getPositionImpl;
tyProc__c9c0f59ak4YGQ6neEym8LPKw readDataStrImpl;
tyProc__7jFfqMk9ajToCz6Hv9atCA4A readLineImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA readDataImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA peekDataImpl;
tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ writeDataImpl;
tyProc__JQrsH08b4uPTH9cyFPlVOZg flushImpl;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
static N_INLINE(void, moveMem__i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(NI, readDataStr__78VQwN48e7jIIL2Q9bINIFw_2)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, close__y1KA3B0U09bKtU09am9a9avRYQ_3)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_3, "lexbase.nim(136, 9) `bufLen > 0` ", 33);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_4, "lexbase.nim(137, 9) `input != nil` ", 35);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_7, "lexbase.nim(51, 9) `L.sentinel + 1 <= L.buf.len` ", 49);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_10, "lexbase.nim(53, 9) `toCopy >= 0` ", 33);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_18, "lexbase.nim(74, 13) `s < L.buf.len` ", 36);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_27, "lexbase.nim(106, 9) `L.buf[pos] == \'\\c\'` ", 41);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_29, "lexbase.nim(93, 9) `pos <= L.sentinel` ", 39);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_32, "lexbase.nim(117, 9) `L.buf[pos] == \'\\n\'` ", 41);
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__KUMaHICF9bUPO7tt6hrBs3g)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_2;
{	result = (NI)0;
	if (nimSubInt(pos, (*L).lineStart, &TM__k6p5NxDJat9aTyZxfZjCDJQ_2)) { raiseOverflow(); goto BeforeRet_;
};
	if ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_2) == (IL64(-9223372036854775807) - IL64(1))){ raiseOverflow(); goto BeforeRet_;
}
	result = ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_2) > 0? ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_2)) : -((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_2)));
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, moveMem__i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	chckNil((void*)(&result));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_8;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_9;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_12;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_13;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_14;
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T13_;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_15;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_6;
		if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_6)) { raiseOverflow(); goto BeforeRet_;
};
		if (!!(((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_6) <= ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_7));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_8)) { raiseOverflow(); goto BeforeRet_;
};
	if (nimSubInt(((*L).buf ? (*L).buf->Sup.len : 0), (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_8), &TM__k6p5NxDJat9aTyZxfZjCDJQ_9)) { raiseOverflow(); goto BeforeRet_;
};
	toCopy = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_9);
	{
		if (!!((((NI) 0) <= toCopy))) goto LA7_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_10));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA7_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_11;
		if (!(((NI) 0) < toCopy)) goto LA11_;
		if ((NU)(((NI) 0)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
		if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_11)) { raiseOverflow(); goto BeforeRet_;
};
		if ((NU)((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11),((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
		if ((toCopy) < ((NI) 0) || (toCopy) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(toCopy, ((NI) 0), ((NI) IL64(9223372036854775807))); goto BeforeRet_;
}
		moveMem__i80o3k0SgEI5gTRCzYdyWA_2system(((void*) ((&(*L).buf->data[((NI) 0)]))), ((void*) ((&(*L).buf->data[(NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11)]))), ((NI) (toCopy)));
	}
	LA11_: ;
	if (nimAddInt(toCopy, (*L).sentinel, &TM__k6p5NxDJat9aTyZxfZjCDJQ_12)) { raiseOverflow(); goto BeforeRet_;
};
	if (nimAddInt((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_12), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_13)) { raiseOverflow(); goto BeforeRet_;
};
	if (nimSubInt((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_13), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_14)) { raiseOverflow(); goto BeforeRet_;
};
	T13_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(toCopy, (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_14));
	charsRead = readDataStr__78VQwN48e7jIIL2Q9bINIFw_2((*L).input, (&(*L).buf), T13_);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	if (nimAddInt(toCopy, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_15)) { raiseOverflow(); goto BeforeRet_;
};
	s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_15);
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_16;
		if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_16)) { raiseOverflow(); goto BeforeRet_;
};
		if (!(charsRead < (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_16))) goto LA16_;
		if ((NU)(s) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
		(*L).buf->data[s] = 0;
		(*L).sentinel = s;
	}
	goto LA14_;
	LA16_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_17;
		if (nimSubInt(s, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_17)) { raiseOverflow(); goto BeforeRet_;
};
		s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_17);
		{
			while (1) {
				{
					if (!!((s < ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA23_;
					failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_18));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				LA23_: ;
				{
					while (1) {
						NIM_BOOL T27_;
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_19;
						T27_ = (NIM_BOOL)0;
						T27_ = (((NI) 0) <= s);
						if (!(T27_)) goto LA28_;
						if ((NU)(s) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
						T27_ = !((((*L).refillChars[(NU)(((NU8)((*L).buf->data[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf->data[s])))&7U)))!=0));
						LA28_: ;
						if (!T27_) goto LA26;
						if (nimSubInt(s, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_19)) { raiseOverflow(); goto BeforeRet_;
};
						s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_19);
					} LA26: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA31_;
					(*L).sentinel = s;
					goto LA19;
				}
				goto LA29_;
				LA31_: ;
				{
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_20;
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_21;
					tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T34_;
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_24;
					oldBufLen = ((*L).buf ? (*L).buf->Sup.len : 0);
					if (nimMulInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 2), &TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) { raiseOverflow(); goto BeforeRet_;
};
					if (((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) < ((NI) 0) || ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20), ((NI) 0), ((NI) IL64(9223372036854775807))); goto BeforeRet_;
}
					(*L).buf = setLengthStr((*L).buf, ((NI) ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20))));
					if (nimSubInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_21)) { raiseOverflow(); goto BeforeRet_;
};
					T34_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(oldBufLen, (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_21));
					charsRead = readDataStr__78VQwN48e7jIIL2Q9bINIFw_2((*L).input, (&(*L).buf), T34_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_22;
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_23;
						if (!(charsRead < oldBufLen)) goto LA37_;
						if (nimAddInt(oldBufLen, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_22)) { raiseOverflow(); goto BeforeRet_;
};
						if ((NU)((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22),((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
						(*L).buf->data[(NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22)] = 0;
						if (nimAddInt(oldBufLen, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_23)) { raiseOverflow(); goto BeforeRet_;
};
						(*L).sentinel = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_23);
						goto LA19;
					}
					LA37_: ;
					if (nimSubInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_24)) { raiseOverflow(); goto BeforeRet_;
};
					s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_24);
				}
				LA29_: ;
			}
		} LA19: ;
	}
	LA14_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
{	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_25;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_26;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		if ((NU)(((NI) 0)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
		T4_ = ((NU8)((*L).buf->data[((NI) 0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		if ((NU)(((NI) 1)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 1),((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
		T4_ = ((NU8)((*L).buf->data[((NI) 1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		if ((NU)(((NI) 2)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 2),((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
		T3_ = ((NU8)((*L).buf->data[((NI) 2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		if (nimAddInt((*L).bufpos, ((NI) 3), &TM__k6p5NxDJat9aTyZxfZjCDJQ_25)) { raiseOverflow(); goto BeforeRet_;
};
		(*L).bufpos = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_25);
		if (nimAddInt((*L).lineStart, ((NI) 3), &TM__k6p5NxDJat9aTyZxfZjCDJQ_26)) { raiseOverflow(); goto BeforeRet_;
};
		(*L).lineStart = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_26);
	}
	LA7_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, open__P89aGatd6bDNJ0Ak5E9cQgWw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NI bufLen, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars) {
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_5;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		if (!!((((NI) 0) < bufLen))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!!(!((input == NIM_NIL)))) goto LA7_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_4));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA7_: ;
	(*L).input = input;
	(*L).bufpos = ((NI) 0);
	(*L).offsetBase = ((NI) 0);
	nimCopyMem((void*)(*L).refillChars, (NIM_CONST void*)refillChars, 32);
	if ((bufLen) < ((NI) 0) || (bufLen) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(bufLen, ((NI) 0), ((NI) IL64(9223372036854775807))); goto BeforeRet_;
}
	(*L).buf = mnewString(((NI) (bufLen)));
	if (nimSubInt(bufLen, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_5)) { raiseOverflow(); goto BeforeRet_;
};
	(*L).sentinel = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_5);
	(*L).lineStart = ((NI) 0);
	(*L).lineNumber = ((NI) 1);
	fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw(L);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2(L);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!!((pos <= (*L).sentinel))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_29));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_30;
		if (!(pos < (*L).sentinel)) goto LA7_;
		if (nimAddInt(pos, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_30)) { raiseOverflow(); goto BeforeRet_;
};
		result = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_30);
	}
	goto LA5_;
	LA7_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_31;
		fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw(L);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (nimAddInt((*L).offsetBase, pos, &TM__k6p5NxDJat9aTyZxfZjCDJQ_31)) { raiseOverflow(); goto BeforeRet_;
};
		(*L).offsetBase = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_31);
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA5_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__sLQC1Z9cokufE3lZEw9b42Cw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_28;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if ((NU)(pos) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(13)))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_27));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	if (nimAddInt((*L).lineNumber, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_28)) { raiseOverflow(); goto BeforeRet_;
};
	(*L).lineNumber = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_28);
	result = fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L, pos);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if ((NU)(result) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(result,((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
		if (!((NU8)((*L).buf->data[result]) == (NU8)(10))) goto LA7_;
		result = fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L, result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA7_: ;
	(*L).lineStart = result;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_33;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if ((NU)(pos) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1); goto BeforeRet_;
}
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(10)))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_32));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	if (nimAddInt((*L).lineNumber, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_33)) { raiseOverflow(); goto BeforeRet_;
};
	(*L).lineNumber = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_33);
	result = fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L, pos);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*L).lineStart = result;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__m9bpQUVeRkyuyv4zAGVgY9bw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	close__y1KA3B0U09bKtU09am9a9avRYQ_3((*L).input);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
