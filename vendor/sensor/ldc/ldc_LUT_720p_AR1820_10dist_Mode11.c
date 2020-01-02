#include "mmpf_typedef.h"
#include "mmpf_ldc.h"

MMP_USHORT m_usPositionX_HD[LDC_X_POS_ARRAY_SIZE] = 
{
	0x0000, 
	0x001f, 
	0x003e, 
	0x005e, 
	0x007d, 
	0x009c, 
	0x00bb, 
	0x00db, 
	0x00fa, 
	0x0119, 
	0x0138, 
	0x0157, 
	0x0177, 
	0x0196, 
	0x01b5, 
	0x01d4, 
	0x01f4, 
	0x0213, 
	0x0232, 
	0x0251, 
	0x0270, 
	0x0290, 
	0x02af, 
	0x02ce, 
	0x02ed, 
	0x030c, 
	0x032c, 
	0x034b, 
	0x036a, 
	0x0389, 
	0x03a9, 
	0x03c8, 
	0x03e7, 
	0x0406, 
	0x0425, 
	0x0445, 
	0x0464, 
	0x0483, 
	0x04a2, 
	0x04c2, 
	0x04e1, 
	0x0500, 
};

MMP_USHORT m_usPositionY_HD[LDC_Y_POS_ARRAY_SIZE] = 
{
	0x0000, 
	0x0017, 
	0x002e, 
	0x0046, 
	0x005d, 
	0x0074, 
	0x008b, 
	0x00a3, 
	0x00ba, 
	0x00d1, 
	0x00e8, 
	0x00ff, 
	0x0117, 
	0x012e, 
	0x0145, 
	0x015c, 
	0x0174, 
	0x018b, 
	0x01a2, 
	0x01b9, 
	0x01d1, 
	0x01e8, 
	0x01ff, 
	0x0216, 
	0x022d, 
	0x0245, 
	0x025c, 
	0x0273, 
	0x028a, 
	0x02a2, 
	0x02b9, 
	0x02d0, 
};

MMP_ULONG m_ulDeltaMemA_000_127_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0x0179074a,
	0xffe106a8,
	0xfe7705f5,
	0xfd4f0535,
	0xfc6a0463,
	0xfbdf0388,
	0xfbb902a2,
	0xfc0601c3,
	0xfcd200f8,
	0xfe0c0063,
	0xff95001c,
	0x01360035,
	0x029d00a6,
	0x03a5015b,
	0x042f0231,
	0x04410317,
	0x03e703f7,
	0x032f04cc,
	0x02250597,
	0x00de064f,
	0xff5906fb,
	0x012c0641,
	0xff8d05ae,
	0xfe1b050b,
	0xfceb045a,
	0xfbff0397,
	0xfb6d02c8,
	0xfb4401ea,
	0xfb970110,
	0xfc740045,
	0xfdd0ffab,
	0xff88ff61,
	0x015cff7a,
	0x02edfff0,
	0x040e00a8,
	0x04a3017c,
	0x04b6025c,
	0x04560331,
	0x039703f9,
	0x028504b4,
	0x0136055d,
	0xffa905fa,
	0x00e5053d,
	0xff4004bc,
	0xfdc6042b,
	0xfc8d038d,
	0xfb9902dc,
	0xfb00021f,
	0xfad20150,
	0xfb270080,
	0xfc13ffb9,
	0xfd90ff1e,
	0xff79fed2,
	0x0185feec,
	0x0340ff64,
	0x0479001b,
	0x051500e8,
	0x052601bb,
	0x04c0027f,
	0x03f90335,
	0x02de03de,
	0x01870474,
	0xfff304fe,
	0x00aa0448,
	0xfefe03d9,
	0xfd7d035d,
	0xfc3d02d5,
	0xfb40023b,
	0xfa9f0193,
	0xfa6b00da,
	0xfabf001a,
	0xfbb6ff5e,
	0xfd51fec8,
	0xff6bfe7b,
	0x01adfe96,
	0x0390ff0c,
	0x04ddffbc,
	0x057e007b,
	0x058b013a,
	0x051d01e9,
	0x044e0288,
	0x032b031b,
	0x01cc039c,
	0x00310412,
	0x00780355,
	0xfec602fc,
	0xfd3f0297,
	0xfbf70228,
	0xfaf201a9,
	0xfa49011d,
	0xfa0d0081,
	0xfa5effdb,
	0xfb5dff33,
	0xfd12fea9,
	0xff5dfe61,
	0x01d6fe7a,
	0x03dffee8,
	0x053cff87,
	0x05dd002f,
	0x05e400d2,
	0x056f0165,
	0x049801e9,
	0x036d0261,
	0x020702ca,
	0x0066032a,
	0x0051026e,
	0xfe9c022b,
	0xfd0f01df,
	0xfbc1018b,
	0xfab5012b,
	0xfa0400bf,
	0xf9c20045,
	0xfa0fffc2,
	0xfb12ff39,
	0xfcdcfec5,
	0xff50fe86,
	0x01fafe9c,
	0x0422fefb,
	0x058bff7e,
	0x062b0004,
	0x062c0085,
	0x05af00f7,
	0x04d1015c,
	0x03a001b7,
	0x02350206,
	0x008f024e,
	0x00350187,
	0xfe7d015c,
};

MMP_ULONG m_ulDeltaMemA_128_255_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfcec012b,
	0xfb9a00f5,
	0xfa8800b6,
	0xf9d20070,
	0xf98a0020,
	0xf9d2ffc8,
	0xfad7ff6a,
	0xfcb0ff18,
	0xff45feeb,
	0x0217fefb,
	0x0458ff3e,
	0x05c8ff99,
	0x0666fff4,
	0x0662004a,
	0x05df0095,
	0x04fb00d6,
	0x03c50111,
	0x02550144,
	0x00ac0172,
	0x002600a8,
	0xfe6c0096,
	0xfcd90080,
	0xfb840069,
	0xfa70004d,
	0xf9b6002e,
	0xf96a000b,
	0xf9afffe3,
	0xfab4ffb9,
	0xfc95ff93,
	0xff3fff7e,
	0x0229ff86,
	0x0478ffa5,
	0x05ebffcf,
	0x0688fff8,
	0x067f001d,
	0x05f9003e,
	0x0512005b,
	0x03d90075,
	0x0267008b,
	0x00bc009f,
	0x0023ffc6,
	0xfe68ffcd,
	0xfcd5ffd4,
	0xfb80ffdc,
	0xfa6bffe6,
	0xf9b0fff0,
	0xf963fffd,
	0xf9a8000a,
	0xfaad0019,
	0xfc8f0026,
	0xff3d002d,
	0x022d002b,
	0x047f0020,
	0x05f20011,
	0x068f0003,
	0x0686fff6,
	0x05ffffeb,
	0x0517ffe1,
	0x03ddffd8,
	0x026bffd0,
	0x00bfffc9,
	0x002cfee8,
	0xfe73ff07,
	0xfce1ff2a,
	0xfb8dff52,
	0xfa7aff7f,
	0xf9c1ffb2,
	0xf977ffec,
	0xf9be002d,
	0xfac20071,
	0xfca000ae,
	0xff4100d0,
	0x022200c4,
	0x046b0092,
	0x05dd004e,
	0x067a000c,
	0x0673ffce,
	0x05efff97,
	0x0509ff68,
	0x03d1ff3d,
	0x0260ff19,
	0x00b6fef7,
	0x0042fe03,
	0xfe8bfe3b,
	0xfcfcfe79,
	0xfbacfebf,
	0xfa9dff10,
	0xf9e9ff69,
	0xf9a4ffd0,
	0xf9ee003f,
	0xfaf200b4,
	0xfcc40119,
	0xff4a0150,
	0x0209013c,
	0x043f00ea,
	0x05ab0079,
	0x064b0006,
	0x0649ff9a,
	0x05c9ff3b,
	0x04e8fee7,
	0x03b4fe9b,
	0x0246fe5a,
	0x009ffe1e,
	0x0063fd1f,
	0xfeaffd6d,
	0xfd25fdc6,
	0xfbdafe28,
	0xfad1fe98,
	0xfa24ff14,
	0xf9e5ffa0,
	0xfa340036,
	0xfb3600d0,
	0xfcf60150,
	0xff560194,
	0x01e8017d,
	0x04020115,
	0x05650082,
	0x0607ffea,
	0x060bff57,
	0x0591fed4,
	0x04b6fe5f,
	0x0388fdf5,
	0x021ffd99,
	0x007cfd45,
	0x008ffc35,
	0xfee0fc99,
	0xfd5cfd0a,
	0xfc17fd85,
};

MMP_ULONG m_ulDeltaMemA_256_335_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfb16fe12,
	0xfa71feac,
	0xfa39ff58,
	0xfa8c000b,
	0xfb8800be,
	0xfd300150,
	0xff64019a,
	0x01c20180,
	0x03b9010d,
	0x050f0065,
	0x05b0ffb1,
	0x05bafeff,
	0x0549fe5d,
	0x0475fdcb,
	0x034efd46,
	0x01ecfcd1,
	0x004efc66,
	0x00c7fb3f,
	0xff1efbb7,
	0xfda0fc3e,
	0xfc64fcd1,
	0xfb6bfd77,
	0xfacefe2a,
	0xfa9dfeef,
	0xfaf2ffb8,
	0xfbe4007b,
	0xfd700114,
	0xff720161,
	0x01990146,
	0x036800ce,
	0x04ac001a,
	0x054bff53,
	0x055afe89,
	0x04f0fdcf,
	0x0425fd23,
	0x0306fc86,
	0x01abfbfa,
	0x0013fb79,
	0x0107fa45,
	0xff65facf,
	0xfdeefb6a,
	0xfcbafc11,
	0xfbc9fccb,
	0xfb34fd92,
	0xfb09fe68,
	0xfb5dff3e,
	0xfc420009,
	0xfdaf00a3,
	0xff8000ef,
	0x017100d5,
	0x0317005e,
	0x0445ffa6,
	0x04defed4,
	0x04f0fdfa,
	0x048dfd2d,
	0x03cbfc6e,
	0x02b4fbbb,
	0x0160fb1c,
	0xffd0fa88,
	0x0151f93b,
	0xffb6f9d6,
	0xfe48fa82,
	0xfd1cfb3b,
	0xfc34fc06,
	0xfba6fcdc,
	0xfb7efdbe,
	0xfbcefe9b,
	0xfca3ff67,
	0xfdeefffe,
	0xff8e0047,
	0x0149002e,
	0x02c5ffba,
	0x03daff03,
	0x0469fe2e,
	0x047cfd4a,
	0x041ffc6f,
	0x0364fba0,
	0x0256fadc,
	0x010bfa2c,
	0xff82f987,
};

MMP_ULONG m_ulDeltaMemB_000_127_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0x00a706fb,
	0xff22064f,
	0xfddb0597,
	0xfcd104cc,
	0xfc1903f7,
	0xfbbf0317,
	0xfbd10231,
	0xfc5b015b,
	0xfd6300a6,
	0xfeca0035,
	0x006b001c,
	0x01f40063,
	0x032e00f8,
	0x03fa01c3,
	0x044702a2,
	0x04210388,
	0x03960463,
	0x02b10535,
	0x018905f5,
	0x001f06a8,
	0xfe8e0748,
	0x005705fa,
	0xfeca055d,
	0xfd7b04b4,
	0xfc6903f9,
	0xfbaa0331,
	0xfb4a025c,
	0xfb5d017c,
	0xfbf200a8,
	0xfd13fff0,
	0xfea4ff7a,
	0x0078ff61,
	0x0230ffab,
	0x038c0045,
	0x04690110,
	0x04bc01ea,
	0x049302c8,
	0x04010397,
	0x0315045a,
	0x01e5050b,
	0x007305ae,
	0xfedb063f,
	0x000d04fe,
	0xfe790474,
	0xfd2203de,
	0xfc070335,
	0xfb40027f,
	0xfada01bb,
	0xfaeb00e8,
	0xfb87001b,
	0xfcc0ff64,
	0xfe7bfeec,
	0x0087fed2,
	0x0270ff1e,
	0x03edffb9,
	0x04d90080,
	0x052e0150,
	0x0500021f,
	0x046702dc,
	0x0373038d,
	0x023a042b,
	0x00c004bc,
	0xff22053b,
	0xffcf0412,
	0xfe34039c,
	0xfcd5031b,
	0xfbb20288,
	0xfae301e9,
	0xfa75013a,
	0xfa82007b,
	0xfb23ffbc,
	0xfc70ff0c,
	0xfe53fe96,
	0x0095fe7b,
	0x02affec8,
	0x044aff5e,
	0x0541001a,
	0x059500da,
	0x05610193,
	0x04c0023b,
	0x03c302d5,
	0x0283035d,
	0x010203d9,
	0xff5d0446,
	0xff9a032a,
	0xfdf902ca,
	0xfc930261,
	0xfb6801e9,
	0xfa910165,
	0xfa1c00d2,
	0xfa23002f,
	0xfac4ff87,
	0xfc21fee8,
	0xfe2afe7a,
	0x00a3fe61,
	0x02eefea9,
	0x04a3ff33,
	0x05a2ffdb,
	0x05f30081,
	0x05b7011d,
	0x050e01a9,
	0x04090228,
	0x02c10297,
	0x013a02fc,
	0xff900354,
	0xff71024e,
	0xfdcb0206,
	0xfc6001b7,
	0xfb2f015c,
	0xfa5100f7,
	0xf9d40085,
	0xf9d50004,
	0xfa75ff7e,
	0xfbdefefb,
	0xfe06fe9c,
	0x00b0fe86,
	0x0324fec5,
	0x04eeff39,
	0x05f1ffc2,
	0x063e0045,
	0x05fc00bf,
	0x054b012b,
	0x043f018b,
	0x02f101df,
	0x0164022b,
	0xffb6026d,
	0xff540172,
	0xfdab0144,
};

MMP_ULONG m_ulDeltaMemB_128_255_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfc3b0111,
	0xfb0500d6,
	0xfa210095,
	0xf99e004a,
	0xf99afff4,
	0xfa38ff99,
	0xfba8ff3e,
	0xfde9fefb,
	0x00bbfeeb,
	0x0350ff18,
	0x0529ff6a,
	0x062effc8,
	0x06760020,
	0x062e0070,
	0x057800b6,
	0x046600f5,
	0x0314012b,
	0x0183015c,
	0xffd20187,
	0xff44009f,
	0xfd99008b,
	0xfc270075,
	0xfaee005b,
	0xfa07003e,
	0xf981001d,
	0xf978fff8,
	0xfa15ffcf,
	0xfb88ffa5,
	0xfdd7ff86,
	0x00c1ff7e,
	0x036bff93,
	0x054cffb9,
	0x0651ffe3,
	0x0696000b,
	0x064a002e,
	0x0590004d,
	0x047c0069,
	0x03270080,
	0x01940096,
	0xffe100a8,
	0xff41ffc9,
	0xfd95ffd0,
	0xfc23ffd8,
	0xfae9ffe1,
	0xfa01ffeb,
	0xf97afff6,
	0xf9710003,
	0xfa0e0011,
	0xfb810020,
	0xfdd3002b,
	0x00c3002d,
	0x03710026,
	0x05530019,
	0x0658000a,
	0x069dfffd,
	0x0650fff0,
	0x0595ffe6,
	0x0480ffdc,
	0x032bffd4,
	0x0198ffcd,
	0xffe4ffc6,
	0xff4afef7,
	0xfda0ff19,
	0xfc2fff3d,
	0xfaf7ff68,
	0xfa11ff97,
	0xf98dffce,
	0xf986000c,
	0xfa23004e,
	0xfb950092,
	0xfdde00c4,
	0x00bf00d0,
	0x036000ae,
	0x053e0071,
	0x0642002d,
	0x0689ffec,
	0x063fffb2,
	0x0586ff7f,
	0x0473ff52,
	0x031fff2a,
	0x018dff07,
	0xffdbfee9,
	0xff61fe1e,
	0xfdbafe5a,
	0xfc4cfe9b,
	0xfb18fee7,
	0xfa37ff3b,
	0xf9b7ff9a,
	0xf9b50006,
	0xfa550079,
	0xfbc100ea,
	0xfdf7013c,
	0x00b60150,
	0x033c0119,
	0x050e00b4,
	0x0612003f,
	0x065cffd0,
	0x0617ff69,
	0x0563ff10,
	0x0454febf,
	0x0304fe79,
	0x0175fe3b,
	0xffc5fe04,
	0xff84fd45,
	0xfde1fd99,
	0xfc78fdf5,
	0xfb4afe5f,
	0xfa6ffed4,
	0xf9f5ff57,
	0xf9f9ffea,
	0xfa9b0082,
	0xfbfe0115,
	0xfe18017d,
	0x00aa0194,
	0x030a0150,
	0x04ca00d0,
	0x05cc0036,
	0x061bffa0,
	0x05dcff14,
	0x052ffe98,
	0x0426fe28,
	0x02dbfdc6,
	0x0151fd6d,
	0xffa4fd20,
	0xffb2fc66,
	0xfe14fcd1,
	0xfcb2fd46,
	0xfb8bfdcb,
};

MMP_ULONG m_ulDeltaMemB_256_335_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfab7fe5d,
	0xfa46feff,
	0xfa50ffb1,
	0xfaf10065,
	0xfc47010d,
	0xfe3e0180,
	0x009c019a,
	0x02d00150,
	0x047800be,
	0x0574000b,
	0x05c7ff58,
	0x058ffeac,
	0x04eafe12,
	0x03e9fd85,
	0x02a4fd0a,
	0x0120fc99,
	0xff78fc37,
	0xffedfb79,
	0xfe55fbfa,
	0xfcfafc86,
	0xfbdbfd23,
	0xfb10fdcf,
	0xfaa6fe89,
	0xfab5ff53,
	0xfb54001a,
	0xfc9800ce,
	0xfe670146,
	0x008e0161,
	0x02900114,
	0x041c007b,
	0x050effb8,
	0x0563feef,
	0x0532fe2a,
	0x0495fd77,
	0x039cfcd1,
	0x0260fc3e,
	0x00e2fbb7,
	0xff41fb41,
	0x0030fa88,
	0xfea0fb1c,
	0xfd4cfbbb,
	0xfc35fc6e,
	0xfb73fd2d,
	0xfb10fdfa,
	0xfb22fed4,
	0xfbbbffa6,
	0xfce9005e,
	0xfe8f00d5,
	0x008000ef,
	0x025100a3,
	0x03be0009,
	0x04a3ff3e,
	0x04f7fe68,
	0x04ccfd92,
	0x0437fccb,
	0x0346fc11,
	0x0212fb6a,
	0x009bfacf,
	0xff00fa47,
	0x007ef987,
	0xfef5fa2c,
	0xfdaafadc,
	0xfc9cfba0,
	0xfbe1fc6f,
	0xfb84fd4a,
	0xfb97fe2e,
	0xfc26ff03,
	0xfd3bffba,
	0xfeb7002e,
	0x00720047,
	0x0212fffe,
	0x035dff67,
	0x0432fe9b,
	0x0482fdbe,
	0x045afcdc,
	0x03ccfc06,
	0x02e4fb3b,
	0x01b8fa82,
	0x004af9d6,
	0xfeb6f93e,
};

MMP_ULONG m_ulDeltaMemC_000_127_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0x015106c5,
	0xffb6062a,
	0xfe48057e,
	0xfd1c04c5,
	0xfc3403fa,
	0xfba60324,
	0xfb7e0242,
	0xfbce0165,
	0xfca30099,
	0xfdee0002,
	0xff8effb9,
	0x0149ffd2,
	0x02c50046,
	0x03da00fd,
	0x046901d2,
	0x047c02b6,
	0x041f0391,
	0x03640460,
	0x02560524,
	0x010b05d4,
	0xff820679,
	0x010705bb,
	0xff650531,
	0xfdee0496,
	0xfcba03ef,
	0xfbc90335,
	0xfb34026e,
	0xfb090198,
	0xfb5d00c2,
	0xfc42fff7,
	0xfdafff5d,
	0xff80ff11,
	0x0171ff2b,
	0x0317ffa2,
	0x0445005a,
	0x04de012c,
	0x04f00206,
	0x048d02d3,
	0x03cb0392,
	0x02b40445,
	0x016004e4,
	0xffd00578,
	0x00c704c1,
	0xff1e0449,
	0xfda003c2,
	0xfc64032f,
	0xfb6b0289,
	0xface01d6,
	0xfa9d0111,
	0xfaf20048,
	0xfbe4ff85,
	0xfd70feec,
	0xff72fe9f,
	0x0199feba,
	0x0368ff32,
	0x04acffe6,
	0x054b00ad,
	0x055a0177,
	0x04f00231,
	0x042502dd,
	0x0306037a,
	0x01ab0406,
	0x00130487,
	0x008f03cb,
	0xfee00367,
	0xfd5c02f6,
	0xfc17027b,
	0xfb1601ee,
	0xfa710154,
	0xfa3900a8,
	0xfa8cfff5,
	0xfb88ff42,
	0xfd30feb0,
	0xff64fe66,
	0x01c2fe80,
	0x03b9fef3,
	0x050fff9b,
	0x05b0004f,
	0x05ba0101,
	0x054901a3,
	0x04750235,
	0x034e02ba,
	0x01ec032f,
	0x004e039a,
	0x006302e1,
	0xfeaf0293,
	0xfd25023a,
	0xfbda01d8,
	0xfad10168,
	0xfa2400ec,
	0xf9e50060,
	0xfa34ffca,
	0xfb36ff30,
	0xfcf6feb0,
	0xff56fe6c,
	0x01e8fe83,
	0x0402feeb,
	0x0565ff7e,
	0x06070016,
	0x060b00a9,
	0x0591012c,
	0x04b601a1,
	0x0388020b,
	0x021f0267,
	0x007c02bb,
	0x004201fd,
	0xfe8b01c5,
	0xfcfc0187,
	0xfbac0141,
	0xfa9d00f0,
	0xf9e90097,
	0xf9a40030,
	0xf9eeffc1,
	0xfaf2ff4c,
	0xfcc4fee7,
	0xff4afeb0,
	0x0209fec4,
	0x043fff16,
	0x05abff87,
	0x064bfffa,
	0x06490066,
	0x05c900c5,
	0x04e80119,
	0x03b40165,
	0x024601a6,
	0x009f01e2,
	0x002c0118,
	0xfe7300f9,
};

MMP_ULONG m_ulDeltaMemC_128_255_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfce100d6,
	0xfb8d00ae,
	0xfa7a0081,
	0xf9c1004e,
	0xf9770014,
	0xf9beffd3,
	0xfac2ff8f,
	0xfca0ff52,
	0xff41ff30,
	0x0222ff3c,
	0x046bff6e,
	0x05ddffb2,
	0x067afff4,
	0x06730032,
	0x05ef0069,
	0x05090098,
	0x03d100c3,
	0x026000e7,
	0x00b60109,
	0x0023003a,
	0xfe680033,
	0xfcd5002c,
	0xfb800024,
	0xfa6b001a,
	0xf9b00010,
	0xf9630003,
	0xf9a8fff6,
	0xfaadffe7,
	0xfc8fffda,
	0xff3dffd3,
	0x022dffd5,
	0x047fffe0,
	0x05f2ffef,
	0x068ffffd,
	0x0686000a,
	0x05ff0015,
	0x0517001f,
	0x03dd0028,
	0x026b0030,
	0x00bf0037,
	0x0026ff58,
	0xfe6cff6a,
	0xfcd9ff80,
	0xfb84ff97,
	0xfa70ffb3,
	0xf9b6ffd2,
	0xf96afff5,
	0xf9af001d,
	0xfab40047,
	0xfc95006d,
	0xff3f0082,
	0x0229007a,
	0x0478005b,
	0x05eb0031,
	0x06880008,
	0x067fffe3,
	0x05f9ffc2,
	0x0512ffa5,
	0x03d9ff8b,
	0x0267ff75,
	0x00bcff61,
	0x0035fe79,
	0xfe7dfea4,
	0xfcecfed5,
	0xfb9aff0b,
	0xfa88ff4a,
	0xf9d2ff90,
	0xf98affe0,
	0xf9d20038,
	0xfad70096,
	0xfcb000e8,
	0xff450115,
	0x02170105,
	0x045800c2,
	0x05c80067,
	0x0666000c,
	0x0662ffb6,
	0x05dfff6b,
	0x04fbff2a,
	0x03c5feef,
	0x0255febc,
	0x00acfe8e,
	0x0051fd92,
	0xfe9cfdd5,
	0xfd0ffe21,
	0xfbc1fe75,
	0xfab5fed5,
	0xfa04ff41,
	0xf9c2ffbb,
	0xfa0f003e,
	0xfb1200c7,
	0xfcdc013b,
	0xff50017a,
	0x01fa0164,
	0x04220105,
	0x058b0082,
	0x062bfffc,
	0x062cff7b,
	0x05afff09,
	0x04d1fea4,
	0x03a0fe49,
	0x0235fdfa,
	0x008ffdb2,
	0x0078fcab,
	0xfec6fd04,
	0xfd3ffd69,
	0xfbf7fdd8,
	0xfaf2fe57,
	0xfa49fee3,
	0xfa0dff7f,
	0xfa5e0025,
	0xfb5d00cd,
	0xfd120157,
	0xff5d019f,
	0x01d60186,
	0x03df0118,
	0x053c0079,
	0x05ddffd1,
	0x05e4ff2e,
	0x056ffe9b,
	0x0498fe17,
	0x036dfd9f,
	0x0207fd36,
	0x0066fcd6,
	0x00aafbb8,
	0xfefefc27,
	0xfd7dfca3,
	0xfc3dfd2b,
};

MMP_ULONG m_ulDeltaMemC_256_335_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfb40fdc5,
	0xfa9ffe6d,
	0xfa6bff26,
	0xfabfffe6,
	0xfbb600a2,
	0xfd510138,
	0xff6b0185,
	0x01ad016a,
	0x039000f4,
	0x04dd0044,
	0x057eff85,
	0x058bfec6,
	0x051dfe17,
	0x044efd78,
	0x032bfce5,
	0x01ccfc64,
	0x0031fbee,
	0x00e5fac3,
	0xff40fb44,
	0xfdc6fbd5,
	0xfc8dfc73,
	0xfb99fd24,
	0xfb00fde1,
	0xfad2feb0,
	0xfb27ff80,
	0xfc130047,
	0xfd9000e2,
	0xff79012e,
	0x01850114,
	0x0340009c,
	0x0479ffe5,
	0x0515ff18,
	0x0526fe45,
	0x04c0fd81,
	0x03f9fccb,
	0x02defc22,
	0x0187fb8c,
	0xfff3fb02,
	0x012cf9bf,
	0xff8dfa52,
	0xfe1bfaf5,
	0xfcebfba6,
	0xfbfffc69,
	0xfb6dfd38,
	0xfb44fe16,
	0xfb97fef0,
	0xfc74ffbb,
	0xfdd00055,
	0xff88009f,
	0x015c0086,
	0x02ed0010,
	0x040eff58,
	0x04a3fe84,
	0x04b6fda4,
	0x0456fccf,
	0x0397fc07,
	0x0285fb4c,
	0x0136faa3,
	0xffa9fa06,
	0x0177f8bc,
	0xffdff95d,
	0xfe75fa10,
	0xfd4cfad0,
	0xfc68fba1,
	0xfbddfc7d,
	0xfbb6fd63,
	0xfc04fe41,
	0xfcd0ff0c,
	0xfe0bffa1,
	0xff95ffe8,
	0x0137ffd0,
	0x029fff5f,
	0x03a8fea9,
	0x0432fdd3,
	0x0444fced,
	0x03e9fc0e,
	0x0332fb38,
	0x0228fa6e,
	0x00e0f9b6,
	0xff5bf90b,
};

MMP_ULONG m_ulDeltaMemD_000_127_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0x007e0679,
	0xfef505d4,
	0xfdaa0524,
	0xfc9c0460,
	0xfbe10391,
	0xfb8402b6,
	0xfb9701d2,
	0xfc2600fd,
	0xfd3b0046,
	0xfeb7ffd2,
	0x0072ffb9,
	0x02120002,
	0x035d0099,
	0x04320165,
	0x04820242,
	0x045a0324,
	0x03cc03fa,
	0x02e404c5,
	0x01b8057e,
	0x004a062a,
	0xfeb606c2,
	0x00300578,
	0xfea004e4,
	0xfd4c0445,
	0xfc350392,
	0xfb7302d3,
	0xfb100206,
	0xfb22012c,
	0xfbbb005a,
	0xfce9ffa2,
	0xfe8fff2b,
	0x0080ff11,
	0x0251ff5d,
	0x03befff7,
	0x04a300c2,
	0x04f70198,
	0x04cc026e,
	0x04370335,
	0x034603ef,
	0x02120496,
	0x009b0531,
	0xff0005b9,
	0xffed0487,
	0xfe550406,
	0xfcfa037a,
	0xfbdb02dd,
	0xfb100231,
	0xfaa60177,
	0xfab500ad,
	0xfb54ffe6,
	0xfc98ff32,
	0xfe67feba,
	0x008efe9f,
	0x0290feec,
	0x041cff85,
	0x050e0048,
	0x05630111,
	0x053201d6,
	0x04950289,
	0x039c032f,
	0x026003c2,
	0x00e20449,
	0xff4104bf,
	0xffb2039a,
	0xfe14032f,
	0xfcb202ba,
	0xfb8b0235,
	0xfab701a3,
	0xfa460101,
	0xfa50004f,
	0xfaf1ff9b,
	0xfc47fef3,
	0xfe3efe80,
	0x009cfe66,
	0x02d0feb0,
	0x0478ff42,
	0x0574fff5,
	0x05c700a8,
	0x058f0154,
	0x04ea01ee,
	0x03e9027b,
	0x02a402f6,
	0x01200367,
	0xff7803c9,
	0xff8402bb,
	0xfde10267,
	0xfc78020b,
	0xfb4a01a1,
	0xfa6f012c,
	0xf9f500a9,
	0xf9f90016,
	0xfa9bff7e,
	0xfbfefeeb,
	0xfe18fe83,
	0x00aafe6c,
	0x030afeb0,
	0x04caff30,
	0x05ccffca,
	0x061b0060,
	0x05dc00ec,
	0x052f0168,
	0x042601d8,
	0x02db023a,
	0x01510293,
	0xffa402e0,
	0xff6101e2,
	0xfdba01a6,
	0xfc4c0165,
	0xfb180119,
	0xfa3700c5,
	0xf9b70066,
	0xf9b5fffa,
	0xfa55ff87,
	0xfbc1ff16,
	0xfdf7fec4,
	0x00b6feb0,
	0x033cfee7,
	0x050eff4c,
	0x0612ffc1,
	0x065c0030,
	0x06170097,
	0x056300f0,
	0x04540141,
	0x03040187,
	0x017501c5,
	0xffc501fc,
	0xff4a0109,
	0xfda000e7,
};

MMP_ULONG m_ulDeltaMemD_128_255_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfc2f00c3,
	0xfaf70098,
	0xfa110069,
	0xf98d0032,
	0xf986fff4,
	0xfa23ffb2,
	0xfb95ff6e,
	0xfddeff3c,
	0x00bfff30,
	0x0360ff52,
	0x053eff8f,
	0x0642ffd3,
	0x06890014,
	0x063f004e,
	0x05860081,
	0x047300ae,
	0x031f00d6,
	0x018d00f9,
	0xffdb0117,
	0xff410037,
	0xfd950030,
	0xfc230028,
	0xfae9001f,
	0xfa010015,
	0xf97a000a,
	0xf971fffd,
	0xfa0effef,
	0xfb81ffe0,
	0xfdd3ffd5,
	0x00c3ffd3,
	0x0371ffda,
	0x0553ffe7,
	0x0658fff6,
	0x069d0003,
	0x06500010,
	0x0595001a,
	0x04800024,
	0x032b002c,
	0x01980033,
	0xffe4003a,
	0xff44ff61,
	0xfd99ff75,
	0xfc27ff8b,
	0xfaeeffa5,
	0xfa07ffc2,
	0xf981ffe3,
	0xf9780008,
	0xfa150031,
	0xfb88005b,
	0xfdd7007a,
	0x00c10082,
	0x036b006d,
	0x054c0047,
	0x0651001d,
	0x0696fff5,
	0x064affd2,
	0x0590ffb3,
	0x047cff97,
	0x0327ff80,
	0x0194ff6a,
	0xffe1ff58,
	0xff54fe8e,
	0xfdabfebc,
	0xfc3bfeef,
	0xfb05ff2a,
	0xfa21ff6b,
	0xf99effb6,
	0xf99a000c,
	0xfa380067,
	0xfba800c2,
	0xfde90105,
	0x00bb0115,
	0x035000e8,
	0x05290096,
	0x062e0038,
	0x0676ffe0,
	0x062eff90,
	0x0578ff4a,
	0x0466ff0b,
	0x0314fed5,
	0x0183fea4,
	0xffd2fe79,
	0xff71fdb2,
	0xfdcbfdfa,
	0xfc60fe49,
	0xfb2ffea4,
	0xfa51ff09,
	0xf9d4ff7b,
	0xf9d5fffc,
	0xfa750082,
	0xfbde0105,
	0xfe060164,
	0x00b0017a,
	0x0324013b,
	0x04ee00c7,
	0x05f1003e,
	0x063effbb,
	0x05fcff41,
	0x054bfed5,
	0x043ffe75,
	0x02f1fe21,
	0x0164fdd5,
	0xffb6fd93,
	0xff9afcd6,
	0xfdf9fd36,
	0xfc93fd9f,
	0xfb68fe17,
	0xfa91fe9b,
	0xfa1cff2e,
	0xfa23ffd1,
	0xfac40079,
	0xfc210118,
	0xfe2a0186,
	0x00a3019f,
	0x02ee0157,
	0x04a300cd,
	0x05a20025,
	0x05f3ff7f,
	0x05b7fee3,
	0x050efe57,
	0x0409fdd8,
	0x02c1fd69,
	0x013afd04,
	0xff90fcac,
	0xffcffbee,
	0xfe34fc64,
	0xfcd5fce5,
	0xfbb2fd78,
};

MMP_ULONG m_ulDeltaMemD_256_335_HD[LDC_DELTA_ARRAY_SIZE] =
{
	0xfae3fe17,
	0xfa75fec6,
	0xfa82ff85,
	0xfb230044,
	0xfc7000f4,
	0xfe53016a,
	0x00950185,
	0x02af0138,
	0x044a00a2,
	0x0541ffe6,
	0x0595ff26,
	0x0561fe6d,
	0x04c0fdc5,
	0x03c3fd2b,
	0x0283fca3,
	0x0102fc27,
	0xff5dfbba,
	0x000dfb02,
	0xfe79fb8c,
	0xfd22fc22,
	0xfc07fccb,
	0xfb40fd81,
	0xfadafe45,
	0xfaebff18,
	0xfb87ffe5,
	0xfcc0009c,
	0xfe7b0114,
	0x0087012e,
	0x027000e2,
	0x03ed0047,
	0x04d9ff80,
	0x052efeb0,
	0x0500fde1,
	0x0467fd24,
	0x0373fc73,
	0x023afbd5,
	0x00c0fb44,
	0xff22fac5,
	0x0057fa06,
	0xfecafaa3,
	0xfd7bfb4c,
	0xfc69fc07,
	0xfbaafccf,
	0xfb4afda4,
	0xfb5dfe84,
	0xfbf2ff58,
	0xfd130010,
	0xfea40086,
	0x0078009f,
	0x02300055,
	0x038cffbb,
	0x0469fef0,
	0x04bcfe16,
	0x0493fd38,
	0x0401fc69,
	0x0315fba6,
	0x01e5faf5,
	0x0073fa52,
	0xfedbf9c1,
	0x00a5f90b,
	0xff20f9b6,
	0xfdd8fa6e,
	0xfccefb38,
	0xfc17fc0e,
	0xfbbcfced,
	0xfbcefdd3,
	0xfc58fea9,
	0xfd61ff5f,
	0xfec9ffd0,
	0x006bffe8,
	0x01f5ffa1,
	0x0330ff0c,
	0x03fcfe41,
	0x044afd63,
	0x0423fc7d,
	0x0398fba1,
	0x02b4fad0,
	0x018bfa10,
	0x0021f95d,
	0xfe90f8be,
};