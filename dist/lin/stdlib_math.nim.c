/* Generated by Nim Compiler v1.2.4 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isPowerOfTwo__1xdTQapFveM9bImKot7h9cdw)(NI x) {
	NIM_BOOL result;
	NIM_BOOL T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI) 0) < x);
	if (!(T1_)) goto LA2_;
	T1_ = ((NI)(x & (NI)(x - ((NI) 1))) == ((NI) 0));
	LA2_: ;
	result = T1_;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__v2qC0V55wqa9bmqc7eHTz8A)(NI x) {
	NI result;
	result = (NI)0;
	result = (NI)(x - ((NI) 1));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 32))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 16))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 8))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 4))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 2))));
	result = (NI)(result | (NI)((NI64)(result) >> (NU64)(((NI) 1))));
	result += (NI)(((NI) 1) + (x <= ((NI) 0)));
	return result;
}
