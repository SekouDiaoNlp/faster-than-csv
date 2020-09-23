/* Generated by Nim Compiler v1.3.7 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
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
typedef struct tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
typedef struct tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct TNimTypeV2 {
void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* disposeImpl;
void* typeInfoV1;
};
struct RootObj {
TNimTypeV2* m_type;
};
typedef N_NIMCALL_PTR(void, tyProc__JQrsH08b4uPTH9cyFPlVOZg) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__9bmhFrLahRsL2hltfRDVtlQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(void, tyProc__3svSoGIUJIsHkaBL7q4DAQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc__xflqkf2D1uVClg70czEDHA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NI, tyProc__c9c0f59ak4YGQ6neEym8LPKw) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__7jFfqMk9ajToCz6Hv9atCA4A) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringV2* line);
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
struct tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ {
  tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ Sup;
FILE* f;
};
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw {
  tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw Sup;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg {
  RootObj Sup;
NI bufpos;
NimStringV2 buf;
tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};
struct tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw {
  tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg Sup;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ row;
NimStringV2 filename;
NIM_CHAR sep;
NIM_CHAR quote;
NIM_CHAR esc;
NIM_BOOL skipWhite;
NI currRow;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ headers;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag {
  tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw Sup;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*, newFileStream__cwYJiP3D7DOTCJxCdBqBZQ)(NimStringV2 filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(void, error__f9crHXb9bbHrCy0OT6soYNKg)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NI pos, NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(void, raiseEInvalidCsv__oc6YUSPHm4LfyH6RkE9c7Mw)(NimStringV2 filename, NI line, NI col, NimStringV2 msg);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___t529bkbHtdcZpkuE9ax25tRQ)(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw** dest);
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___cZEJKACZqEV103HG3monhA)(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___4fQQqvAqifkWGVa4g39cI5A)(tySequence__uB9b75OUPRENsBAu4AnoePA* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___aBBXmHFBEivKqERloP6zmA)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nimIntToStr)(NI x);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__KUMaHICF9bUPO7tt6hrBs3g)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, open__u368GCTtl0rTy2J0zni8uw)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NimStringV2 filename, NIM_CHAR separator, NIM_CHAR quote, NIM_CHAR escape, NIM_BOOL skipInitialSpace);
N_LIB_PRIVATE N_NIMCALL(void, open__P89aGatd6bDNJ0Ak5E9cQgWw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NI bufLen, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars);
N_LIB_PRIVATE N_NIMCALL(void, eq___aBBXmHFBEivKqERloP6zmA_2)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___r6aagoRVuov7HvfEjIi3Uw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest, tySequence__sM4lkSb7zS6F7OVMvW9cffQ src);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap, NI elemSize, NI elemAlign);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___1C4ixR1siTbJKB2Qcw7ZWw)(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ** dest);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readRow__b09aWQWdQLmOgKmRBW0eKTQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NI columns);
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__sLQC1Z9cokufE3lZEw9b42Cw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, setLen__GjRfWHdWvbN9c4UpEibA5yA)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* s, NI newlen);
N_LIB_PRIVATE N_NIMCALL(void, parseField__6mfYg4gHtbgPqGUu2wyijQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NimStringV2* a);
N_LIB_PRIVATE N_NIMCALL(void, setLengthStrV2)(NimStringV2* s, NI newLen);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___Lq4P1SN2NXH5175ZXQaR7Q)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___0RiuPw9cXhtLB9a2rQ2jA69cg)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest);
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, eq___r6aagoRVuov7HvfEjIi3Uw_2)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* dest, tySequence__sM4lkSb7zS6F7OVMvW9cffQ src);
static N_INLINE(NI, find__ZFKPMFh1RWpGOSS69c9a5CHAsystem)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ a, NimStringV2 item);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a, NimStringV2 b);
static N_INLINE(NIM_BOOL, equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimTypeV2 NTIv2__F6ONStXzG2u7i8uj6UG9aiw_;
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_2 = { 7 | NIM_STRLIT_FLAG, "Error: " };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_3 = {7, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_2};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_4 = { 1 | NIM_STRLIT_FLAG, "(" };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_5 = {1, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_4};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_6 = { 2 | NIM_STRLIT_FLAG, ", " };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_7 = {2, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_6};
static const struct {
  NI cap; NIM_CHAR data[9+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_8 = { 9 | NIM_STRLIT_FLAG, ") Error: " };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_9 = {9, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_8};
static const struct {
  NI cap; NIM_CHAR data[13+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_10 = { 13 | NIM_STRLIT_FLAG, "cannot open: " };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_11 = {13, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_10};
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__3rBY6NOHI29c34PPPPzLAdQ_12 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_13 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_14 = {0, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_13};
N_LIB_PRIVATE TNimTypeV2 NTIv2__Db2TWjG9cPe5dYnhFvawyIw_;
static const struct {
  NI cap; NIM_CHAR data[9+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_15 = { 9 | NIM_STRLIT_FLAG, " expected" };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_16 = {9, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_15};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_17 = { 1 | NIM_STRLIT_FLAG, "\012" };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_18 = {1, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_17};
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_19 = {1, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_17};
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_20 = {9, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_15};
static const struct {
  NI cap; NIM_CHAR data[29+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_21 = { 29 | NIM_STRLIT_FLAG, " columns expected, but found " };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_22 = {29, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_21};
static const struct {
  NI cap; NIM_CHAR data[8+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_23 = { 8 | NIM_STRLIT_FLAG, " columns" };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_24 = {8, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_23};
extern TNimTypeV2 NTIv2__t7nhKLvXTQS9cS8ByJU9bIag_;
static const struct {
  NI cap; NIM_CHAR data[7+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_25 = { 7 | NIM_STRLIT_FLAG, "Entry `" };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_26 = {7, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_25};
static const struct {
  NI cap; NIM_CHAR data[15+1];
} TM__3rBY6NOHI29c34PPPPzLAdQ_27 = { 15 | NIM_STRLIT_FLAG, "` doesn\'t exist" };
static const NimStringV2 TM__3rBY6NOHI29c34PPPPzLAdQ_28 = {15, (NimStrPayload*)&TM__3rBY6NOHI29c34PPPPzLAdQ_27};

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A* cell;
		NI T5_;
		if (!!((p == NIM_NIL))) goto LA3_;
		T5_ = (NI)0;
		T5_ = minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system(((NI) (ptrdiff_t) (p)), ((NI) 8));
		cell = ((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T5_));
		{
			if (!((NI)((*cell).rc & ((NI) -8)) == ((NI) 0))) goto LA8_;
			result = NIM_TRUE;
		}
		goto LA6_;
		LA8_: ;
		{
			(*cell).rc -= ((NI) 8);
		}
		LA6_: ;
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___t529bkbHtdcZpkuE9ax25tRQ)(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest));
	}
	LA4_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___cZEJKACZqEV103HG3monhA)(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw* dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).Sup.Sup.Sup.parent);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.Sup.Sup.parent);
	}
	LA4_: ;
	eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&(*dest).Sup.Sup.Sup.message));
	eqdestroy___4fQQqvAqifkWGVa4g39cI5A((&(*dest).Sup.Sup.Sup.trace));
	{
		NIM_BOOL T8_;
		T8_ = (NIM_BOOL)0;
		T8_ = nimDecRefIsLast((*dest).Sup.Sup.Sup.up);
		if (!T8_) goto LA9_;
		nimDestroyAndDispose((*dest).Sup.Sup.Sup.up);
	}
	LA9_: ;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {
	{
		void* T5_;
		void* T6_;
		if (!(((NI) 0) < src.len)) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*(*dest).p).data[(*dest).len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((&(*src.p).data[((NI) 0)])));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)(src.len + ((NI) 1)))));
		(*dest).len += src.len;
	}
	LA3_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, raiseEInvalidCsv__oc6YUSPHm4LfyH6RkE9c7Mw)(NimStringV2 filename, NI line, NI col, NimStringV2 msg) {
	tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw* e;
	tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw* blitTmp;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	e = (tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw*)0;
	eqdestroy___t529bkbHtdcZpkuE9ax25tRQ(&e);
	e = (tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw*) nimNewObj(sizeof(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw));
	(*e).Sup.Sup.Sup.Sup.m_type = (&NTIv2__F6ONStXzG2u7i8uj6UG9aiw_);
	(*e).Sup.Sup.Sup.name = "CsvError";
	{
		NimStringV2 T6_;
		if (!(filename.len == ((NI) 0))) goto LA4_;
		T6_.len = 0; T6_.p = NIM_NIL;
		T6_ = rawNewString(msg.len + 7);
appendString((&T6_), TM__3rBY6NOHI29c34PPPPzLAdQ_3);
appendString((&T6_), msg);
		eqsink___aBBXmHFBEivKqERloP6zmA((&(*e).Sup.Sup.Sup.message), T6_);
	}
	goto LA2_;
	LA4_: ;
	{
		NimStringV2 colontmpD_;
		NimStringV2 colontmpD__2;
		NimStringV2 T8_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		T8_.len = 0; T8_.p = NIM_NIL;
		colontmpD_ = nimIntToStr(line);
		colontmpD__2 = nimIntToStr(col);
		T8_ = rawNewString(filename.len + colontmpD_.len + colontmpD__2.len + msg.len + 12);
appendString((&T8_), filename);
appendString((&T8_), TM__3rBY6NOHI29c34PPPPzLAdQ_5);
appendString((&T8_), colontmpD_);
appendString((&T8_), TM__3rBY6NOHI29c34PPPPzLAdQ_7);
appendString((&T8_), colontmpD__2);
appendString((&T8_), TM__3rBY6NOHI29c34PPPPzLAdQ_9);
appendString((&T8_), msg);
		eqsink___aBBXmHFBEivKqERloP6zmA((&(*e).Sup.Sup.Sup.message), T8_);
		eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD__2));
		eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD_));
	}
	LA2_: ;
	blitTmp = e;
	e = 0;
	raiseExceptionEx((Exception*)blitTmp, "CsvError", "raiseEInvalidCsv", "parsecsv.nim", 98);
	goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___t529bkbHtdcZpkuE9ax25tRQ(&e);
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, error__f9crHXb9bbHrCy0OT6soYNKg)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NI pos, NimStringV2 msg) {
	NimStringV2 T1_;
	NI T2_;
	NI T3_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_.len = 0; T1_.p = NIM_NIL;
	T1_ = (*my).filename;
	T2_ = (NI)0;
	T2_ = (*my).Sup.lineNumber;
	T3_ = (NI)0;
	T3_ = getColNumber__KUMaHICF9bUPO7tt6hrBs3g((&(*my).Sup), pos);
	raiseEInvalidCsv__oc6YUSPHm4LfyH6RkE9c7Mw(T1_, T2_, T3_, msg);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, open__u368GCTtl0rTy2J0zni8uw)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NimStringV2 filename, NIM_CHAR separator, NIM_CHAR quote, NIM_CHAR escape, NIM_BOOL skipInitialSpace) {
	tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T1_;
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
	T1_ = &my->Sup;
	open__P89aGatd6bDNJ0Ak5E9cQgWw(T1_, input, ((NI) 8192), TM__3rBY6NOHI29c34PPPPzLAdQ_12);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	eq___aBBXmHFBEivKqERloP6zmA_2((&(*my).filename), filename);
	(*my).sep = separator;
	(*my).quote = quote;
	(*my).esc = escape;
	(*my).skipWhite = skipInitialSpace;
	T2_.len = 0; T2_.p = NIM_NIL;
	T2_.len = 0; T2_.p = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content*) newSeqPayload(0, sizeof(NimStringV2), NIM_ALIGNOF(NimStringV2));
	eqsink___r6aagoRVuov7HvfEjIi3Uw((&(*my).row), T2_);
	(*my).currRow = ((NI) 0);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, open__Vgw0zlgAfMha09cLjvmwOUg)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NimStringV2 filename, NIM_CHAR separator, NIM_CHAR quote, NIM_CHAR escape, NIM_BOOL skipInitialSpace) {
	tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ* s;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T10_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	s = (tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*)0;
	s = newFileStream__cwYJiP3D7DOTCJxCdBqBZQ(filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
	{
		NimStringV2 colontmpD_;
		NimStringV2 T7_;
		if (!(s == NIM_NIL)) goto LA4_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		T7_.len = 0; T7_.p = NIM_NIL;
		T7_ = rawNewString(filename.len + 13);
appendString((&T7_), TM__3rBY6NOHI29c34PPPPzLAdQ_11);
appendString((&T7_), filename);
		colontmpD_ = T7_;
		error__f9crHXb9bbHrCy0OT6soYNKg((&(*my)), ((NI) 0), colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA4_: ;
	T10_ = (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
	T10_ = &s->Sup;
	open__u368GCTtl0rTy2J0zni8uw(my, T10_, filename, separator, quote, escape, skipInitialSpace);
	if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	{
		LA1_:;
	}
	{
		eqdestroy___1C4ixR1siTbJKB2Qcw7ZWw(&s);
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___Lq4P1SN2NXH5175ZXQaR7Q)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* dest) {
	eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&(*dest).Sup.buf));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest).Sup.input);
		if (!T3_) goto LA4_;
		nimDestroyAndDispose((*dest).Sup.input);
	}
	LA4_: ;
	eqdestroy___0RiuPw9cXhtLB9a2rQ2jA69cg((&(*dest).row));
	eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&(*dest).filename));
	eqdestroy___0RiuPw9cXhtLB9a2rQ2jA69cg((&(*dest).headers));
}
static N_INLINE(void, appendChar)(NimStringV2* dest, NIM_CHAR c) {
	(*(*dest).p).data[(*dest).len] = c;
	(*(*dest).p).data[(NI)((*dest).len + ((NI) 1))] = 0;
	(*dest).len += ((NI) 1);
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI) 1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI) 1))] = 0;
	(*s).len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(void, parseField__6mfYg4gHtbgPqGUu2wyijQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NimStringV2* a) {
	NI pos;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	pos = (*my).Sup.bufpos;
	{
		if (!(*my).skipWhite) goto LA3_;
		{
			while (1) {
				if (!(((NU8)((*my).Sup.buf.p->data[pos])) == ((NU8)(32)) || ((NU8)((*my).Sup.buf.p->data[pos])) == ((NU8)(9)))) goto LA6;
				pos += ((NI) 1);
			} LA6: ;
		}
	}
	LA3_: ;
	setLengthStrV2((&(*a)), ((NI) 0));
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = ((NU8)((*my).Sup.buf.p->data[pos]) == (NU8)((*my).quote));
		if (!(T9_)) goto LA10_;
		T9_ = !(((NU8)((*my).quote) == (NU8)(0)));
		LA10_: ;
		if (!T9_) goto LA11_;
		pos += ((NI) 1);
		{
			while (1) {
				NIM_CHAR c;
				c = (*my).Sup.buf.p->data[pos];
				{
					NimStringV2 colontmpD_;
					tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw T20_;
					NimStringV2 T21_;
					if (!((NU8)(c) == (NU8)(0))) goto LA17_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					(*my).Sup.bufpos = pos;
					nimZeroMem((void*)(&T20_), sizeof(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw));
					T20_.Sup.Sup.m_type = (&NTIv2__Db2TWjG9cPe5dYnhFvawyIw_);
					T20_ = (*my);
					T21_.len = 0; T21_.p = NIM_NIL;
					T21_ = rawNewString(10);
appendChar((&T21_), (*my).quote);
appendString((&T21_), TM__3rBY6NOHI29c34PPPPzLAdQ_16);
					colontmpD_ = T21_;
					error__f9crHXb9bbHrCy0OT6soYNKg((&T20_), pos, colontmpD_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA19_;
					eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD_));
					goto LA13;
					{
						LA19_:;
					}
					{
						eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD_));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				goto LA15_;
				LA17_: ;
				{
					if (!((NU8)(c) == (NU8)((*my).quote))) goto LA25_;
					{
						NIM_BOOL T29_;
						T29_ = (NIM_BOOL)0;
						T29_ = ((NU8)((*my).esc) == (NU8)(0));
						if (!(T29_)) goto LA30_;
						T29_ = ((NU8)((*my).Sup.buf.p->data[(NI)(pos + ((NI) 1))]) == (NU8)((*my).quote));
						LA30_: ;
						if (!T29_) goto LA31_;
						nimAddCharV1((&(*a)), (*my).quote);
						pos += ((NI) 2);
					}
					goto LA27_;
					LA31_: ;
					{
						pos += ((NI) 1);
						goto LA13;
					}
					LA27_: ;
				}
				goto LA15_;
				LA25_: ;
				{
					if (!((NU8)(c) == (NU8)((*my).esc))) goto LA35_;
					nimAddCharV1((&(*a)), (*my).Sup.buf.p->data[(NI)(pos + ((NI) 1))]);
					pos += ((NI) 2);
				}
				goto LA15_;
				LA35_: ;
				{
					switch (((NU8)(c))) {
					case 13:
					{
						tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T39_;
						T39_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
						T39_ = &my->Sup;
						pos = handleCR__sLQC1Z9cokufE3lZEw9b42Cw(T39_, pos);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						prepareAdd((&(*a)), 1);
appendString((&(*a)), TM__3rBY6NOHI29c34PPPPzLAdQ_18);
					}
					break;
					case 10:
					{
						tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T41_;
						T41_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
						T41_ = &my->Sup;
						pos = handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3(T41_, pos);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						prepareAdd((&(*a)), 1);
appendString((&(*a)), TM__3rBY6NOHI29c34PPPPzLAdQ_19);
					}
					break;
					default:
					{
						nimAddCharV1((&(*a)), c);
						pos += ((NI) 1);
					}
					break;
					}
				}
				LA15_: ;
			}
		} LA13: ;
	}
	goto LA7_;
	LA11_: ;
	{
		{
			while (1) {
				NIM_CHAR c_2;
				c_2 = (*my).Sup.buf.p->data[pos];
				{
					if (!((NU8)(c_2) == (NU8)((*my).sep))) goto LA48_;
					goto LA44;
				}
				LA48_: ;
				{
					if (!(((NU8)(c_2)) == ((NU8)(13)) || ((NU8)(c_2)) == ((NU8)(10)) || ((NU8)(c_2)) == ((NU8)(0)))) goto LA52_;
					goto LA44;
				}
				LA52_: ;
				nimAddCharV1((&(*a)), c_2);
				pos += ((NI) 1);
			}
		} LA44: ;
	}
	LA7_: ;
	(*my).Sup.bufpos = pos;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readRow__b09aWQWdQLmOgKmRBW0eKTQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NI columns) {
	NIM_BOOL result;
	NI col;
	NI oldpos;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	col = ((NI) 0);
	oldpos = (*my).Sup.bufpos;
	{
		while (1) {
			switch (((NU8)((*my).Sup.buf.p->data[(*my).Sup.bufpos]))) {
			case 13:
			{
				tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T4_;
				NI T5_;
				T4_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
				T4_ = &my->Sup;
				T5_ = (NI)0;
				T5_ = handleCR__sLQC1Z9cokufE3lZEw9b42Cw(T4_, (*my).Sup.bufpos);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				(*my).Sup.bufpos = T5_;
			}
			break;
			case 10:
			{
				tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T7_;
				NI T8_;
				T7_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
				T7_ = &my->Sup;
				T8_ = (NI)0;
				T8_ = handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3(T7_, (*my).Sup.bufpos);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				(*my).Sup.bufpos = T8_;
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	{
		while (1) {
			NI oldlen;
			NI T12_;
			tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* T17_;
			if (!!(((NU8)((*my).Sup.buf.p->data[(*my).Sup.bufpos]) == (NU8)(0)))) goto LA11;
			T12_ = (*my).row.len;
			oldlen = T12_;
			{
				if (!(oldlen < (NI)(col + ((NI) 1)))) goto LA15_;
				setLen__GjRfWHdWvbN9c4UpEibA5yA((&(*my).row), ((NI) ((NI)(col + ((NI) 1)))));
				eqsink___aBBXmHFBEivKqERloP6zmA((&(*my).row.p->data[col]), TM__3rBY6NOHI29c34PPPPzLAdQ_14);
			}
			LA15_: ;
			T17_ = (tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw*)0;
			T17_ = my;
			parseField__6mfYg4gHtbgPqGUu2wyijQ(T17_, (&(*my).row.p->data[col]));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			col += ((NI) 1);
			{
				if (!((NU8)((*my).Sup.buf.p->data[(*my).Sup.bufpos]) == (NU8)((*my).sep))) goto LA20_;
				(*my).Sup.bufpos += ((NI) 1);
			}
			goto LA18_;
			LA20_: ;
			{
				switch (((NU8)((*my).Sup.buf.p->data[(*my).Sup.bufpos]))) {
				case 13:
				case 10:
				{
					{
						while (1) {
							switch (((NU8)((*my).Sup.buf.p->data[(*my).Sup.bufpos]))) {
							case 13:
							{
								tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T27_;
								NI T28_;
								T27_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
								T27_ = &my->Sup;
								T28_ = (NI)0;
								T28_ = handleCR__sLQC1Z9cokufE3lZEw9b42Cw(T27_, (*my).Sup.bufpos);
								if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
								(*my).Sup.bufpos = T28_;
							}
							break;
							case 10:
							{
								tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T30_;
								NI T31_;
								T30_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
								T30_ = &my->Sup;
								T31_ = (NI)0;
								T31_ = handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3(T30_, (*my).Sup.bufpos);
								if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
								(*my).Sup.bufpos = T31_;
							}
							break;
							default:
							{
								goto LA24;
							}
							break;
							}
						}
					} LA24: ;
				}
				break;
				case 0:
				{
				}
				break;
				default:
				{
					NimStringV2 colontmpD_;
					tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw T36_;
					NI T37_;
					NimStringV2 T38_;
					colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
					nimZeroMem((void*)(&T36_), sizeof(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw));
					T36_.Sup.Sup.m_type = (&NTIv2__Db2TWjG9cPe5dYnhFvawyIw_);
					T36_ = (*my);
					T37_ = (NI)0;
					T37_ = (*my).Sup.bufpos;
					T38_.len = 0; T38_.p = NIM_NIL;
					T38_ = rawNewString(10);
appendChar((&T38_), (*my).sep);
appendString((&T38_), TM__3rBY6NOHI29c34PPPPzLAdQ_20);
					colontmpD_ = T38_;
					error__f9crHXb9bbHrCy0OT6soYNKg((&T36_), T37_, colontmpD_);
					if (NIM_UNLIKELY(*nimErr_)) goto LA35_;
					{
						LA35_:;
					}
					{
						eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD_));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				break;
				}
				goto LA10;
			}
			LA18_: ;
		} LA11: ;
	} LA10: ;
	setLen__GjRfWHdWvbN9c4UpEibA5yA((&(*my).row), ((NI) (col)));
	result = (((NI) 0) < col);
	{
		NIM_BOOL T43_;
		NIM_BOOL T44_;
		NimStringV2 colontmpD__2;
		NimStringV2 colontmpD__3;
		NimStringV2 colontmpD__4;
		NimStringV2 T50_;
		T43_ = (NIM_BOOL)0;
		T44_ = (NIM_BOOL)0;
		T44_ = result;
		if (!(T44_)) goto LA45_;
		T44_ = !((col == columns));
		LA45_: ;
		T43_ = T44_;
		if (!(T43_)) goto LA46_;
		T43_ = (((NI) 0) < columns);
		LA46_: ;
		if (!T43_) goto LA47_;
		colontmpD__2.len = 0; colontmpD__2.p = NIM_NIL;
		colontmpD__3.len = 0; colontmpD__3.p = NIM_NIL;
		colontmpD__4.len = 0; colontmpD__4.p = NIM_NIL;
		T50_.len = 0; T50_.p = NIM_NIL;
		colontmpD__2 = nimIntToStr(columns);
		colontmpD__3 = nimIntToStr(col);
		T50_ = rawNewString(colontmpD__2.len + colontmpD__3.len + 37);
appendString((&T50_), colontmpD__2);
appendString((&T50_), TM__3rBY6NOHI29c34PPPPzLAdQ_22);
appendString((&T50_), colontmpD__3);
appendString((&T50_), TM__3rBY6NOHI29c34PPPPzLAdQ_24);
		colontmpD__4 = T50_;
		error__f9crHXb9bbHrCy0OT6soYNKg((&(*my)), (NI)(oldpos + ((NI) 1)), colontmpD__4);
		if (NIM_UNLIKELY(*nimErr_)) goto LA49_;
		{
			LA49_:;
		}
		{
			eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD__4));
			eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD__3));
			eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD__2));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA47_: ;
	(*my).currRow += ((NI) 1);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, readHeaderRow__09aUIMwOh18Laer41V7EdAw)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my) {
	NIM_BOOL present;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	present = readRow__b09aWQWdQLmOgKmRBW0eKTQ(my, ((NI) 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!present) goto LA3_;
		eq___r6aagoRVuov7HvfEjIi3Uw_2((&(*my).headers), (*my).row);
	}
	LA3_: ;
	}BeforeRet_: ;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringV2 a, NimStringV2 b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = a.len;
	blen = b.len;
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem(((void*) ((&a.p->data[((NI) 0)]))), ((void*) ((&b.p->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, find__ZFKPMFh1RWpGOSS69c9a5CHAsystem)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ a, NimStringV2 item) {
	NI result;
{	result = (NI)0;
	result = ((NI) 0);
	{
		NimStringV2* i;
		NI i_2;
		NI L;
		NI T2_;
		i = (NimStringV2*)0;
		i_2 = ((NI) 0);
		T2_ = a.len;
		L = T2_;
		{
			while (1) {
				if (!(i_2 < L)) goto LA4;
				i = (&a.p->data[i_2]);
				{
					if (!eqStrings((*i), item)) goto LA7_;
					goto BeforeRet_;
				}
				LA7_: ;
				result += ((NI) 1);
				i_2 += ((NI) 1);
			} LA4: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2*, rowEntry__iSnSJzyyzosqzYvzg3RnzQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NimStringV2 entry) {
	NimStringV2* result;
	NI index;
{	result = (NimStringV2*)0;
	index = find__ZFKPMFh1RWpGOSS69c9a5CHAsystem((*my).headers, entry);
	{
		if (!(((NI) 0) <= index)) goto LA3_;
		result = (&(*my).row.p->data[index]);
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag* T6_;
		NimStringV2 T7_;
		T6_ = (tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag*)0;
		T6_ = (tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag*) nimNewObj(sizeof(tyObject_KeyError__t7nhKLvXTQS9cS8ByJU9bIag));
		(*T6_).Sup.Sup.Sup.Sup.m_type = (&NTIv2__t7nhKLvXTQS9cS8ByJU9bIag_);
		(*T6_).Sup.Sup.Sup.name = "KeyError";
		T7_.len = 0; T7_.p = NIM_NIL;
		T7_ = rawNewString(entry.len + 22);
appendString((&T7_), TM__3rBY6NOHI29c34PPPPzLAdQ_26);
appendString((&T7_), entry);
appendString((&T7_), TM__3rBY6NOHI29c34PPPPzLAdQ_28);
		(*T6_).Sup.Sup.Sup.message = T7_;
		(*T6_).Sup.Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T6_, "KeyError", "rowEntry", "parsecsv.nim", 347);
		goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, processedRows__00gniKnRH4BwlOFNHExbvw)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my) {
	NI result;
{	result = (NI)0;
	result = (*my).currRow;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_parsecsvDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT3 */
NTIv2__F6ONStXzG2u7i8uj6UG9aiw_.destructor = (void*)eqdestroy___cZEJKACZqEV103HG3monhA; NTIv2__F6ONStXzG2u7i8uj6UG9aiw_.size = sizeof(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw); NTIv2__F6ONStXzG2u7i8uj6UG9aiw_.align = NIM_ALIGNOF(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw); NTIv2__F6ONStXzG2u7i8uj6UG9aiw_.name = "|stdlib.parsecsv.CsvError|IOError|CatchableError|Exception|Root"
"Obj|";
; NTIv2__F6ONStXzG2u7i8uj6UG9aiw_.traceImpl = (void*)NIM_NIL; NTIv2__F6ONStXzG2u7i8uj6UG9aiw_.disposeImpl = (void*)NIM_NIL;NTIv2__Db2TWjG9cPe5dYnhFvawyIw_.destructor = (void*)eqdestroy___Lq4P1SN2NXH5175ZXQaR7Q; NTIv2__Db2TWjG9cPe5dYnhFvawyIw_.size = sizeof(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw); NTIv2__Db2TWjG9cPe5dYnhFvawyIw_.align = NIM_ALIGNOF(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw); NTIv2__Db2TWjG9cPe5dYnhFvawyIw_.name = "|stdlib.parsecsv.CsvParser|stdlib.lexbase.BaseLexer|RootObj|";
; NTIv2__Db2TWjG9cPe5dYnhFvawyIw_.traceImpl = (void*)NIM_NIL; NTIv2__Db2TWjG9cPe5dYnhFvawyIw_.disposeImpl = (void*)NIM_NIL;}

