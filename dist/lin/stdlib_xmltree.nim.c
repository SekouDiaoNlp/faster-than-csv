/* Generated by Nim Compiler v1.3.7 */
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
typedef struct tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ;
typedef struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A;
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA tySequence__AjV3cEUgs0Y9c7dCt9aItdIA;
typedef struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__xv3aaFd3JCw8NbmALHiezQ tySequence__xv3aaFd3JCw8NbmALHiezQ;
typedef struct tySequence__xv3aaFd3JCw8NbmALHiezQ_Content tySequence__xv3aaFd3JCw8NbmALHiezQ_Content;
typedef struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA tyTuple__sPaDkVPSC0MkcoXCxPH9ccA;

/* section: NIM_merge_TYPES */
struct tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A {
NI rc;
};
typedef NU8 tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA {
  NI len; tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content* p;
};
struct tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ {
tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg k;
union{
struct {NimStringV2 fText;
} _k_1;
struct {NimStringV2 fTag;
tySequence__AjV3cEUgs0Y9c7dCt9aItdIA s;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* fAttr;
} _k_2;
};
NI fClientData;
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
struct tySequence__xv3aaFd3JCw8NbmALHiezQ {
  NI len; tySequence__xv3aaFd3JCw8NbmALHiezQ_Content* p;
};
typedef NU8 tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ;
struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg {
  RootObj Sup;
NI counter;
tySequence__xv3aaFd3JCw8NbmALHiezQ data;
tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA {
NimStringV2 Field0;
NimStringV2 Field1;
NIM_BOOL Field2;
};


#ifndef tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content_PP
#define tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content_PP
struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content { NI cap; tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content_PP
#define tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content_PP
struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content { NI cap; tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__xv3aaFd3JCw8NbmALHiezQ_Content_PP
#define tySequence__xv3aaFd3JCw8NbmALHiezQ_Content_PP
struct tySequence__xv3aaFd3JCw8NbmALHiezQ_Content { NI cap; tyTuple__sPaDkVPSC0MkcoXCxPH9ccA data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(NIM_BOOL, nimDecRefIsLast)(void* p);
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___s34cgBeU5eu9a5wDStr29cAg)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ)(NimStringV2* dest);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___88rhFmCx7Ip9bpda7ZSD32g)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* dest);
N_LIB_PRIVATE N_NIMCALL(void, nimRawDispose)(void* p);
N_LIB_PRIVATE N_NOCONV(void, deallocShared)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, nimDestroyAndDispose)(void* p);
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newXmlNode__S1TYbKk8Fe7yxROPoy4ceg)(tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg kind);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size);
N_LIB_PRIVATE N_NIMCALL(void, eq___aBBXmHFBEivKqERloP6zmA_2)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___9as37EFC1sjpbgYhay2N7Qg)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* dest, tySequence__AjV3cEUgs0Y9c7dCt9aItdIA src);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap, NI elemSize, NI elemAlign);
static N_INLINE(void, nimIncRef)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, add__L5ivS03sIqPjaqmOum9c7Vw)(NimStringV2* result, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n, NI indent, NI indWidth, NIM_BOOL addNewLines);
N_LIB_PRIVATE N_NIMCALL(void, addIndent__zdN2Lc7tSuZiLJkksaegQQ)(NimStringV2* result, NI indent, NIM_BOOL addNewLines);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, noWhitespace__Fh5PelKgH0dQpIvK0CbwzA)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n);
static N_INLINE(NI, len__jVDt9baaY2kubMUFrl05Xrgxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n);
static N_INLINE(tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg, kind__j8p3h8iojolY0RbF1nkaZgxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n);
static N_INLINE(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, X5BX5D___oXJB8uaKnmOqZ9bwPjUkzEwxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n, NI i);
N_LIB_PRIVATE N_NIMCALL(void, eq___4roFjOSrBIgHTVfmZEtHkQ_2)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ** dest, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* src);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___fRz8hXjDeCfCX0Zv7iCrWQ)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ** dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, addEscapedAttr__6C2AvGe9brWF3cZheLyMXgA)(NimStringV2* result, NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__6C2AvGe9brWF3cZheLyMXgA_2)(NimStringV2* result, NimStringV2 s);
N_LIB_PRIVATE N_NIMCALL(void, eq___feu9aAavbJIn9cC0RBSe7CHw)(tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg** dest, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* src);

/* section: NIM_merge_DATA */
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3 = {0, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4 = { 1 | NIM_STRLIT_FLAG, "\012" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5 = {1, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6 = { 2 | NIM_STRLIT_FLAG, "=\"" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7 = {2, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8 = { 4 | NIM_STRLIT_FLAG, "&lt;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9 = {4, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_10 = { 4 | NIM_STRLIT_FLAG, "&gt;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_11 = {4, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_10};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_12 = { 5 | NIM_STRLIT_FLAG, "&amp;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_13 = {5, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_12};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14 = { 6 | NIM_STRLIT_FLAG, "&quot;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_15 = {6, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_16 = { 3 | NIM_STRLIT_FLAG, " />" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_17 = {3, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_16};
static const struct {
  NI cap; NIM_CHAR data[2+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_18 = { 2 | NIM_STRLIT_FLAG, "</" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_19 = {2, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_18};
static const struct {
  NI cap; NIM_CHAR data[1+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_20 = { 1 | NIM_STRLIT_FLAG, ">" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_21 = {1, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_20};
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_22 = {4, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8};
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_23 = {4, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_10};
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_24 = {5, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_12};
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_25 = {6, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14};
static const struct {
  NI cap; NIM_CHAR data[6+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_26 = { 6 | NIM_STRLIT_FLAG, "&apos;" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_27 = {6, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_26};
static const struct {
  NI cap; NIM_CHAR data[5+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_28 = { 5 | NIM_STRLIT_FLAG, "<!-- " };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_29 = {5, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_28};
static const struct {
  NI cap; NIM_CHAR data[4+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_30 = { 4 | NIM_STRLIT_FLAG, " -->" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_31 = {4, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_30};
static const struct {
  NI cap; NIM_CHAR data[9+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_32 = { 9 | NIM_STRLIT_FLAG, "<![CDATA[" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_33 = {9, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_32};
static const struct {
  NI cap; NIM_CHAR data[3+1];
} TM__qYyKc6OpDWHHaBXL9bX9aQ2A_34 = { 3 | NIM_STRLIT_FLAG, "]]>" };
static const NimStringV2 TM__qYyKc6OpDWHHaBXL9bX9aQ2A_35 = {3, (NimStrPayload*)&TM__qYyKc6OpDWHHaBXL9bX9aQ2A_34};

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
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___88rhFmCx7Ip9bpda7ZSD32g)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* dest) {
	NI colontmp_;
	colontmp_ = ((NI) 0);
	{
		while (1) {
			NI T3_;
			T3_ = (*dest).len;
			if (!(colontmp_ < T3_)) goto LA2;
			{
				NIM_BOOL T6_;
				T6_ = (NIM_BOOL)0;
				T6_ = nimDecRefIsLast((*dest).p->data[colontmp_]);
				if (!T6_) goto LA7_;
				eqdestroy___s34cgBeU5eu9a5wDStr29cAg((*dest).p->data[colontmp_]);
				nimRawDispose((*dest).p->data[colontmp_]);
			}
			LA7_: ;
			colontmp_ += ((NI) 1);
		} LA2: ;
	}
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 deallocShared((*dest).p);
}
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___s34cgBeU5eu9a5wDStr29cAg)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* dest) {
	switch ((*dest).k) {
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 0):
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 1):
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 5):
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 3):
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 4):
	{
		eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&(*dest)._k_1.fText));
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 2):
	{
		eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&(*dest)._k_2.fTag));
		eqdestroy___88rhFmCx7Ip9bpda7ZSD32g((&(*dest)._k_2.s));
		{
			NIM_BOOL T5_;
			T5_ = (NIM_BOOL)0;
			T5_ = nimDecRefIsLast((*dest)._k_2.fAttr);
			if (!T5_) goto LA6_;
			nimDestroyAndDispose((*dest)._k_2.fAttr);
		}
		LA6_: ;
	}
	break;
	}
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___4roFjOSrBIgHTVfmZEtHkQ)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ** dest, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* src) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___s34cgBeU5eu9a5wDStr29cAg((*dest));
		nimRawDispose((*dest));
	}
	LA4_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newXmlNode__S1TYbKk8Fe7yxROPoy4ceg)(tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg kind) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg colontmpD_;
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* T1_;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	colontmpD_ = (tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg)0;
	T1_ = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	T1_ = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*) nimNewObj(sizeof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ));
	colontmpD_ = kind;
	(*T1_).k = colontmpD_;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqsink___9as37EFC1sjpbgYhay2N7Qg)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* dest, tySequence__AjV3cEUgs0Y9c7dCt9aItdIA src) {
	if ((*dest).p != src.p) {	eqdestroy___88rhFmCx7Ip9bpda7ZSD32g(dest);
	}
(*dest).len = src.len; (*dest).p = src.p;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newElement__Sxg4tI9bVbPjV9a4F9cRnqlWw)(NimStringV2 tag) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	tySequence__AjV3cEUgs0Y9c7dCt9aItdIA T1_;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	result = newXmlNode__S1TYbKk8Fe7yxROPoy4ceg(((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 2));
	eq___aBBXmHFBEivKqERloP6zmA_2((&(*result)._k_2.fTag), tag);
	T1_.len = 0; T1_.p = NIM_NIL;
	T1_.len = 0; T1_.p = (tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content*) newSeqPayload(0, sizeof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*), NIM_ALIGNOF(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*));
	eqsink___9as37EFC1sjpbgYhay2N7Qg((&(*result)._k_2.s), T1_);
	return result;
}
static N_INLINE(void, nimIncRef)(void* p) {
	NI T1_;
	T1_ = (NI)0;
	T1_ = minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system(((NI) (ptrdiff_t) (p)), ((NI) 8));
	(*((tyObject_RefHeader__Gi7WQzlT1ZRToh9a2ueYb4A*) (T1_))).rc += ((NI) 8);
}
N_LIB_PRIVATE N_NIMCALL(void, eq___4roFjOSrBIgHTVfmZEtHkQ_2)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ** dest, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* src) {
	{
		if (!src) goto LA3_;
		nimIncRef(src);
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = nimDecRefIsLast((*dest));
		if (!T7_) goto LA8_;
		eqdestroy___s34cgBeU5eu9a5wDStr29cAg((*dest));
		nimRawDispose((*dest));
	}
	LA8_: ;
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newText__rOUtNKhUmBcgHQCsK4WhEw)(NimStringV2 text) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	result = newXmlNode__S1TYbKk8Fe7yxROPoy4ceg(((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 0));
	eq___aBBXmHFBEivKqERloP6zmA_2((&(*result)._k_1.fText), text);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___fRz8hXjDeCfCX0Zv7iCrWQ)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ** dest) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = nimDecRefIsLast((*dest));
		if (!T3_) goto LA4_;
		eqdestroy___s34cgBeU5eu9a5wDStr29cAg((*dest));
		nimRawDispose((*dest));
	}
	LA4_: ;
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
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI) 1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI) 1))] = 0;
	(*s).len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(void, addIndent__zdN2Lc7tSuZiLJkksaegQQ)(NimStringV2* result, NI indent, NIM_BOOL addNewLines) {
	{
		if (!addNewLines) goto LA3_;
		prepareAdd((&(*result)), 1);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5);
	}
	LA3_: ;
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= indent)) goto LA7;
				i = res;
				nimAddCharV1((&(*result)), 32);
				res += ((NI) 1);
			} LA7: ;
		}
	}
}
static N_INLINE(NI, len__jVDt9baaY2kubMUFrl05Xrgxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n) {
	NI result;
	result = (NI)0;
	{
		NI T5_;
		if (!((*n).k == ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 2))) goto LA3_;
		T5_ = (*n)._k_2.s.len;
		result = T5_;
	}
	LA3_: ;
	return result;
}
static N_INLINE(tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg, kind__j8p3h8iojolY0RbF1nkaZgxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n) {
	tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg result;
	result = (tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg)0;
	result = (*n).k;
	return result;
}
static N_INLINE(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, X5BX5D___oXJB8uaKnmOqZ9bwPjUkzEwxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n, NI i) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	eq___4roFjOSrBIgHTVfmZEtHkQ_2(&result, (*n)._k_2.s.p->data[i]);
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, noWhitespace__Fh5PelKgH0dQpIvK0CbwzA)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n) {
	NIM_BOOL result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len__jVDt9baaY2kubMUFrl05Xrgxmltree(n);
		i_2 = ((NI) 0);
		{
			while (1) {
				tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* colontmpD_;
				if (!(i_2 < colontmp_)) goto LA3;
				colontmpD_ = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
				i = i_2;
				{
					tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg T7_;
					colontmpD_ = X5BX5D___oXJB8uaKnmOqZ9bwPjUkzEwxmltree(n, i);
					T7_ = (tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg)0;
					T7_ = kind__j8p3h8iojolY0RbF1nkaZgxmltree(colontmpD_);
					if (!(T7_ == ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 0) || T7_ == ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 4))) goto LA8_;
					result = NIM_TRUE;
					eqdestroy___fRz8hXjDeCfCX0Zv7iCrWQ(&colontmpD_);
					goto BeforeRet_;
				}
				LA8_: ;
				i_2 += ((NI) 1);
				{
					LA4_:;
				}
				{
					eqdestroy___fRz8hXjDeCfCX0Zv7iCrWQ(&colontmpD_);
				}
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			} LA3: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addEscapedAttr__6C2AvGe9brWF3cZheLyMXgA)(NimStringV2* result, NimStringV2 s) {
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = s.len;
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = s.p->data[i];
				switch (((NU8)(c))) {
				case 60:
				{
					prepareAdd((&(*result)), 4);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9);
				}
				break;
				case 62:
				{
					prepareAdd((&(*result)), 4);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_11);
				}
				break;
				case 38:
				{
					prepareAdd((&(*result)), 5);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_13);
				}
				break;
				case 34:
				{
					prepareAdd((&(*result)), 6);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_15);
				}
				break;
				default:
				{
					nimAddCharV1((&(*result)), c);
				}
				break;
				}
				i += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__6C2AvGe9brWF3cZheLyMXgA_2)(NimStringV2* result, NimStringV2 s) {
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = s.len;
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = s.p->data[i];
				switch (((NU8)(c))) {
				case 60:
				{
					prepareAdd((&(*result)), 4);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_22);
				}
				break;
				case 62:
				{
					prepareAdd((&(*result)), 4);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_23);
				}
				break;
				case 38:
				{
					prepareAdd((&(*result)), 5);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_24);
				}
				break;
				case 34:
				{
					prepareAdd((&(*result)), 6);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_25);
				}
				break;
				case 39:
				{
					prepareAdd((&(*result)), 6);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_27);
				}
				break;
				default:
				{
					nimAddCharV1((&(*result)), c);
				}
				break;
				}
				i += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, add__L5ivS03sIqPjaqmOum9c7Vw)(NimStringV2* result, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n, NI indent, NI indWidth, NIM_BOOL addNewLines) {
{	{
		if (!(n == NIM_NIL)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	switch ((*n).k) {
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 2):
	{
		NIM_BOOL colontmpD_;
		NIM_BOOL colontmpD__2;
		NI colontmpD__3;
		NI colontmpD__4;
		NIM_BOOL addNewLines_2;
		NI indentNext;
		colontmpD_ = (NIM_BOOL)0;
		colontmpD__2 = (NIM_BOOL)0;
		colontmpD__3 = (NI)0;
		colontmpD__4 = (NI)0;
		{
			if (!(((NI) 0) < indent)) goto LA8_;
			addIndent__zdN2Lc7tSuZiLJkksaegQQ(result, indent, addNewLines);
		}
		LA8_: ;
		{
			NIM_BOOL T12_;
			T12_ = (NIM_BOOL)0;
			T12_ = noWhitespace__Fh5PelKgH0dQpIvK0CbwzA(n);
			if (!T12_) goto LA13_;
			colontmpD_ = NIM_FALSE;
			addNewLines_2 = colontmpD_;
		}
		goto LA10_;
		LA13_: ;
		{
			colontmpD__2 = addNewLines;
			addNewLines_2 = colontmpD__2;
		}
		LA10_: ;
		nimAddCharV1((&(*result)), 60);
		prepareAdd((&(*result)), (*n)._k_2.fTag.len + 0);
appendString((&(*result)), (*n)._k_2.fTag);
		{
			if (!!(((*n)._k_2.fAttr == 0))) goto LA18_;
			{
				NimStringV2 key;
				NimStringV2 val;
				tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* colontmp_;
				key.len = 0; key.p = NIM_NIL;
				val.len = 0; val.p = NIM_NIL;
				colontmp_ = (tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*)0;
				colontmp_ = (*n)._k_2.fAttr;
				{
					NI h;
					NI colontmp__2;
					NI T22_;
					NI res;
					h = (NI)0;
					colontmp__2 = (NI)0;
					T22_ = ((*colontmp_).data.len-1);
					colontmp__2 = T22_;
					res = ((NI) 0);
					{
						while (1) {
							if (!(res <= colontmp__2)) goto LA24;
							h = res;
							{
								if (!(*colontmp_).data.p->data[h].Field2) goto LA27_;
								key = (*colontmp_).data.p->data[h].Field0;
								val = (*colontmp_).data.p->data[h].Field1;
								nimAddCharV1((&(*result)), 32);
								prepareAdd((&(*result)), key.len + 0);
appendString((&(*result)), key);
								prepareAdd((&(*result)), 2);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7);
								addEscapedAttr__6C2AvGe9brWF3cZheLyMXgA(result, val);
								nimAddCharV1((&(*result)), 34);
							}
							LA27_: ;
							res += ((NI) 1);
						} LA24: ;
					}
				}
			}
		}
		LA18_: ;
		{
			NI T31_;
			T31_ = (NI)0;
			T31_ = len__jVDt9baaY2kubMUFrl05Xrgxmltree(n);
			if (!(T31_ == ((NI) 0))) goto LA32_;
			prepareAdd((&(*result)), 3);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_17);
			goto BeforeRet_;
		}
		LA32_: ;
		{
			NIM_BOOL T36_;
			T36_ = (NIM_BOOL)0;
			T36_ = noWhitespace__Fh5PelKgH0dQpIvK0CbwzA(n);
			if (!T36_) goto LA37_;
			colontmpD__3 = indent;
			indentNext = colontmpD__3;
		}
		goto LA34_;
		LA37_: ;
		{
			colontmpD__4 = (NI)(indent + indWidth);
			indentNext = colontmpD__4;
		}
		LA34_: ;
		nimAddCharV1((&(*result)), 62);
		{
			NI i;
			NI colontmp__3;
			NI i_2;
			i = (NI)0;
			colontmp__3 = (NI)0;
			colontmp__3 = len__jVDt9baaY2kubMUFrl05Xrgxmltree(n);
			i_2 = ((NI) 0);
			{
				while (1) {
					tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* colontmpD__5;
					if (!(i_2 < colontmp__3)) goto LA42;
					colontmpD__5 = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
					i = i_2;
					colontmpD__5 = X5BX5D___oXJB8uaKnmOqZ9bwPjUkzEwxmltree(n, i);
					add__L5ivS03sIqPjaqmOum9c7Vw(result, colontmpD__5, indentNext, indWidth, addNewLines_2);
					i_2 += ((NI) 1);
					eqdestroy___fRz8hXjDeCfCX0Zv7iCrWQ(&colontmpD__5);
				} LA42: ;
			}
		}
		{
			NIM_BOOL T45_;
			T45_ = (NIM_BOOL)0;
			T45_ = noWhitespace__Fh5PelKgH0dQpIvK0CbwzA(n);
			if (!!(T45_)) goto LA46_;
			addIndent__zdN2Lc7tSuZiLJkksaegQQ(result, indent, addNewLines_2);
		}
		LA46_: ;
		prepareAdd((&(*result)), 2);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_19);
		prepareAdd((&(*result)), (*n)._k_2.fTag.len + 0);
appendString((&(*result)), (*n)._k_2.fTag);
		prepareAdd((&(*result)), 1);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_21);
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 0):
	{
		addEscaped__6C2AvGe9brWF3cZheLyMXgA_2(result, (*n)._k_1.fText);
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 1):
	{
		prepareAdd((&(*result)), (*n)._k_1.fText.len + 0);
appendString((&(*result)), (*n)._k_1.fText);
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 5):
	{
		prepareAdd((&(*result)), 5);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_29);
		addEscaped__6C2AvGe9brWF3cZheLyMXgA_2(result, (*n)._k_1.fText);
		prepareAdd((&(*result)), 4);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_31);
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 3):
	{
		prepareAdd((&(*result)), 9);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_33);
		prepareAdd((&(*result)), (*n)._k_1.fText.len + 0);
appendString((&(*result)), (*n)._k_1.fText);
		prepareAdd((&(*result)), 3);
appendString((&(*result)), TM__qYyKc6OpDWHHaBXL9bX9aQ2A_35);
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 4):
	{
		nimAddCharV1((&(*result)), 38);
		prepareAdd((&(*result)), (*n)._k_1.fText.len + 0);
appendString((&(*result)), (*n)._k_1.fText);
		nimAddCharV1((&(*result)), 59);
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___OuMIOHiWWdpO1R0c3qsNmg)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	result = TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3;
	add__L5ivS03sIqPjaqmOum9c7Vw((&result), n, ((NI) 0), ((NI) 2), NIM_TRUE);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newXmlTree__iQEgntocGC9c5P8XXvwKIkw)(NimStringV2 tag, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ** children, NI childrenLen_0, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* attributes) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	result = newXmlNode__S1TYbKk8Fe7yxROPoy4ceg(((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 2));
	eq___aBBXmHFBEivKqERloP6zmA_2((&(*result)._k_2.fTag), tag);
	(*result)._k_2.s.len = ((NI) (childrenLen_0)); (*result)._k_2.s.p = (tySequence__AjV3cEUgs0Y9c7dCt9aItdIA_Content*) newSeqPayload(((NI) (childrenLen_0)), sizeof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*), NIM_ALIGNOF(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(childrenLen_0 - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				eq___4roFjOSrBIgHTVfmZEtHkQ_2(&(*result)._k_2.s.p->data[i], children[i]);
				res += ((NI) 1);
			} LA3: ;
		}
	}
	eq___feu9aAavbJIn9cC0RBSe7CHw(&(*result)._k_2.fAttr, attributes);
	return result;
}
