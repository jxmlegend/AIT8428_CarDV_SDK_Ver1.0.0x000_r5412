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
0x038501fb,
0x02ba01b2,
0x0208016b,
0x01760129,
0x00fd00ea,
0x00a200b2,
0x005f0080,
0x00320058,
0x00160039,
0x00080025,
0x0001001c,
0xfffc001f,
0xfff2002e,
0xffde0048,
0xffba006b,
0xff820099,
0xff3300cd,
0xfecb0108,
0xfe45014a,
0xfda4018e,
0xfce401d6,
0x035101a1,
0x02870160,
0x01d7011f,
0x014800e3,
0x00d400aa,
0x007d0078,
0x003f004a,
0x00180026,
0x00040009,
0xfffefff7,
0xffffffef,
0x0002fff2,
0x0000ffff,
0xfff40016,
0xffd70037,
0xffa50060,
0xff5b0090,
0xfef700c6,
0xfe740101,
0xfdd6013f,
0xfd170180,
0x0323014f,
0x02590116,
0x01ab00de,
0x011e00a9,
0x00ad0077,
0x005b004a,
0x00220022,
0x00010001,
0xfff3ffe8,
0xfff4ffd8,
0xfffdffd1,
0x0008ffd3,
0x000effdf,
0x0008fff4,
0xfff10011,
0xffc50035,
0xff7f0060,
0xff1f008f,
0xfe9f00c3,
0xfe0300f9,
0xfd460132,
0x02fb0108,
0x023300d7,
0x018600a7,
0x00fb007b,
0x008d0050,
0x003e0029,
0x00090007,
0xffedffeb,
0xffe5ffd6,
0xffecffc8,
0xfffbffc2,
0x000dffc4,
0x0019ffce,
0x0019ffe0,
0x0008fff9,
0xffe00018,
0xff9e003c,
0xff410064,
0xfec30091,
0xfe2900bf,
0xfd6d00ef,
0x02da00c6,
0x021200a0,
0x01670079,
0x00dd0055,
0x00710032,
0x00250013,
0xfff4fff8,
0xffdcffe1,
0xffd9ffd0,
0xffe5ffc4,
0xfffaffbf,
0x0011ffc1,
0x0022ffc9,
0x0028ffd8,
0x001bffec,
0xfff70005,
0xffb90023,
0xff5e0043,
0xfee20067,
0xfe49008c,
0xfd8e00b3,
0x02c0008d,
0x01f90070,
0x014f0053,
0x00c60038,
0x005c001e,
0x00120007,
0xffe3fff2,
0xffcfffe1,
0xffd0ffd4,
0xffe0ffcb,
0xfff9ffc8,
0x0014ffc9,
0x002affcf,
0x0033ffda,
0x002affe9,
0x0009fffc,
0xffcd0012,
0xff74002b,
0xfef90045,
0xfe610061,
0xfda7007e,
0x02ae0057,
0x01e70044,

};

MMP_ULONG m_ulDeltaMemA_128_255_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x013d0032,
0x00b60021,
0x004d0010,
0x00040001,
0xffd7fff4,
0xffc6ffe9,
0xffc9ffe0,
0xffdcffdb,
0xfff8ffd8,
0x0017ffd9,
0x002fffdd,
0x003bffe4,
0x0034ffee,
0x0015fffa,
0xffdb0008,
0xff840018,
0xff0a0029,
0xfe73003b,
0xfdb9004e,
0x02a40025,
0x01de001d,
0x01340015,
0x00ad000d,
0x00440006,
0xfffc0000,
0xffd1fffa,
0xffc0fff5,
0xffc5fff1,
0xffdaffef,
0xfff8ffee,
0x0018ffee,
0x0032fff0,
0x0040fff3,
0x003afff7,
0x001cfffd,
0xffe30003,
0xff8c000a,
0xff140011,
0xfe7d0019,
0xfdc30021,
0x02a2fff3,
0x01dcfff6,
0x0132fff9,
0x00abfffb,
0x0043fffe,
0xfffb0000,
0xffd00002,
0xffbf0004,
0xffc40005,
0xffd90006,
0xfff80006,
0x00180006,
0x00330006,
0x00410005,
0x003c0003,
0x001e0001,
0xffe5ffff,
0xff8efffd,
0xff16fffa,
0xfe7ffff8,
0xfdc5fff5,
0x02a8ffc2,
0x01e1ffd0,
0x0138ffdd,
0x00b1ffe9,
0x0048fff5,
0xffff0000,
0xffd4000a,
0xffc20012,
0xffc70018,
0xffdb001c,
0xfff8001d,
0x0017001d,
0x0031001a,
0x003e0015,
0x0038000e,
0x001a0005,
0xffe0fffb,
0xff89fff0,
0xff10ffe3,
0xfe79ffd6,
0xfdbfffc9,
0x02b6ff8e,
0x01efffa6,
0x0145ffbe,
0x00bdffd4,
0x0054ffe9,
0x000afffd,
0xffdd000e,
0xffca001c,
0xffcc0027,
0xffde002e,
0xfff90031,
0x00160030,
0x002d002b,
0x00370022,
0x00300015,
0x00100006,
0xffd5fff3,
0xff7cffdf,
0xff03ffc9,
0xfe6bffb2,
0xfdb1ff9a,
0x02ccff57,
0x0205ff79,
0x015aff9b,
0x00d1ffba,
0x0066ffd9,
0x001bfff4,
0xffeb000c,
0xffd50020,
0xffd4002f,
0xffe20039,
0xfff9003e,
0x0013003c,
0x00260035,
0x002e0028,
0x00230017,
0x00000000,
0xffc4ffe7,
0xff69ffca,
0xfeefffab,
0xfe56ff8a,
0xfd9bff68,
0x02e9ff1b,
0x0221ff46,
0x0175ff71,
0x00ebff9a,

};

MMP_ULONG m_ulDeltaMemA_256_335_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x007effc0,
0x0030ffe3,
0xfffd0002,
0xffe4001b,
0xffdf002f,
0xffe8003b,
0xfffb0041,
0x000f003f,
0x001e0036,
0x00210026,
0x0012000f,
0xffecfff3,
0xffadffd2,
0xff50ffae,
0xfed4ff86,
0xfe3aff5c,
0xfd7fff31,
0x030efed6,
0x0245ff0b,
0x0198ff3f,
0x010cff70,
0x009cff9e,
0x004cffc8,
0x0015ffed,
0xfff7000b,
0xffec0023,
0xfff00032,
0xfffc0038,
0x000a0036,
0x0013002b,
0x00110018,
0xfffdfffd,
0xffd3ffdb,
0xff90ffb4,
0xff30ff88,
0xfeb2ff57,
0xfe17ff25,
0xfd5afef0,
0x0339fe8a,
0x026ffec7,
0x01c0ff04,
0x0132ff3c,
0x00bfff72,
0x006bffa2,
0x002fffcc,
0x000cffef,
0xfffb000a,
0xfff9001b,
0xfffe0022,
0x00050020,
0x00070013,
0xfffefffd,
0xffe5ffde,
0xffb6ffb7,
0xff6eff8a,
0xff0cff58,
0xfe8aff20,
0xfdeefee6,
0xfd30fea9,
0x036bfe33,
0x02a0fe78,
0x01effebc,
0x015efefb,
0x00e8ff37,
0x008fff6d,
0x004eff9c,
0x0025ffc3,
0x000dffe1,
0x0003fff4,
0x0000fffc,
0xfffffffa,
0xfff9ffec,
0xffe9ffd3,
0xffc9ffb1,
0xff94ff85,
0xff48ff53,
0xfee1ff1b,
0xfe5dfedc,
0xfdbefe9b,
0xfcfefe56,

};

MMP_ULONG m_ulDeltaMemB_000_127_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x031c01d6,
0x025c018e,
0x01bb014a,
0x01350108,
0x00cd00cd,
0x007e0099,
0x0046006b,
0x00220048,
0x000e002e,
0x0004001f,
0xffff001c,
0xfff80025,
0xffea0039,
0xffce0058,
0xffa10080,
0xff5e00b2,
0xff0300ea,
0xfe8a0129,
0xfdf8016b,
0xfd4601b2,
0xfc7e01fa,
0x02e90180,
0x022a013f,
0x018c0101,
0x010900c6,
0x00a50090,
0x005b0060,
0x00290037,
0x000c0016,
0x0000ffff,
0xfffefff2,
0x0001ffef,
0x0002fff7,
0xfffc0009,
0xffe80026,
0xffc1004a,
0xff830078,
0xff2c00aa,
0xfeb800e3,
0xfe29011f,
0xfd790160,
0xfcb201a0,
0x02ba0132,
0x01fd00f9,
0x016100c3,
0x00e1008f,
0x00810060,
0x003b0035,
0x000f0011,
0xfff8fff4,
0xfff2ffdf,
0xfff8ffd3,
0x0003ffd1,
0x000cffd8,
0x000dffe8,
0xffff0001,
0xffde0022,
0xffa5004a,
0xff530077,
0xfee200a9,
0xfe5500de,
0xfda70116,
0xfce1014e,
0x029300ef,
0x01d700bf,
0x013d0091,
0x00bf0064,
0x0062003c,
0x00200018,
0xfff8fff9,
0xffe7ffe0,
0xffe7ffce,
0xfff3ffc4,
0x0005ffc2,
0x0014ffc8,
0x001bffd6,
0x0013ffeb,
0xfff70007,
0xffc20029,
0xff730050,
0xff05007b,
0xfe7a00a7,
0xfdcd00d7,
0xfd080107,
0x027200b3,
0x01b7008c,
0x011e0067,
0x00a20043,
0x00470023,
0x00090005,
0xffe5ffec,
0xffd8ffd8,
0xffdeffc9,
0xffefffc1,
0x0006ffbf,
0x001bffc4,
0x0027ffd0,
0x0024ffe1,
0x000cfff8,
0xffdb0013,
0xff8f0032,
0xff230055,
0xfe990079,
0xfdee00a0,
0xfd2a00c6,
0x0259007e,
0x019f0061,
0x01070045,
0x008c002b,
0x00330012,
0xfff7fffc,
0xffd6ffe9,
0xffcdffda,
0xffd6ffcf,
0xffecffc9,
0x0007ffc8,
0x0020ffcb,
0x0030ffd4,
0x0031ffe1,
0x001dfff2,
0xffee0007,
0xffa4001e,
0xff3a0038,
0xfeb10053,
0xfe070070,
0xfd43008c,
0x0247004e,
0x018d003b,

};

MMP_ULONG m_ulDeltaMemB_128_255_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x00f60029,
0x007c0018,
0x00250008,
0xffebfffa,
0xffccffee,
0xffc5ffe4,
0xffd1ffdd,
0xffe9ffd9,
0x0008ffd8,
0x0024ffdb,
0x0037ffe0,
0x003affe9,
0x0029fff4,
0xfffc0001,
0xffb30010,
0xff4a0021,
0xfec30032,
0xfe190044,
0xfd550057,
0x023d0021,
0x01830019,
0x00ec0011,
0x0074000a,
0x001d0003,
0xffe4fffd,
0xffc6fff7,
0xffc0fff3,
0xffcefff0,
0xffe8ffee,
0x0008ffee,
0x0026ffef,
0x003bfff1,
0x0040fff5,
0x002ffffa,
0x00040000,
0xffbc0006,
0xff53000d,
0xfecc0015,
0xfe22001d,
0xfd5f0025,
0x023bfff5,
0x0181fff8,
0x00eafffa,
0x0072fffd,
0x001bffff,
0xffe20001,
0xffc40003,
0xffbf0005,
0xffcd0006,
0xffe80006,
0x00080006,
0x00270006,
0x003c0005,
0x00410004,
0x00300002,
0x00050000,
0xffbdfffe,
0xff55fffb,
0xfecefff9,
0xfe24fff6,
0xfd61fff3,
0x0241ffc9,
0x0187ffd6,
0x00f0ffe3,
0x0077fff0,
0x0020fffb,
0xffe60005,
0xffc8000e,
0xffc20015,
0xffcf001a,
0xffe9001d,
0x0008001d,
0x0025001c,
0x00390018,
0x003e0012,
0x002c000a,
0x00010000,
0xffb8fff5,
0xff4fffe9,
0xfec8ffdd,
0xfe1fffd0,
0xfd5bffc3,
0x024fff9a,
0x0195ffb2,
0x00fdffc9,
0x0084ffdf,
0x002bfff3,
0xfff00006,
0xffd00015,
0xffc90022,
0xffd3002b,
0xffea0030,
0x00070031,
0x0022002e,
0x00340027,
0x0036001c,
0x0023000e,
0xfff6fffd,
0xffacffe9,
0xff43ffd4,
0xfebbffbe,
0xfe11ffa6,
0xfd4dff8e,
0x0265ff68,
0x01aaff8a,
0x0111ffab,
0x0097ffca,
0x003cffe7,
0x00000000,
0xffdd0017,
0xffd20028,
0xffda0035,
0xffed003c,
0x0007003e,
0x001e0039,
0x002c002f,
0x002b0020,
0x0015000c,
0xffe5fff4,
0xff9affd9,
0xff2fffba,
0xfea6ff9b,
0xfdfbff79,
0xfd37ff58,
0x0281ff31,
0x01c6ff5c,
0x012cff86,
0x00b0ffae,

};

MMP_ULONG m_ulDeltaMemB_256_335_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x0053ffd2,
0x0014fff3,
0xffee000f,
0xffdf0026,
0xffe20036,
0xfff1003f,
0x00050041,
0x0018003b,
0x0021002f,
0x001c001b,
0x00030002,
0xffd0ffe3,
0xff82ffc0,
0xff15ff9a,
0xfe8bff71,
0xfddfff46,
0xfd1aff1b,
0x02a6fef0,
0x01e9ff25,
0x014eff57,
0x00d0ff88,
0x0070ffb4,
0x002dffdb,
0x0003fffd,
0xffef0018,
0xffed002b,
0xfff60036,
0x00040038,
0x00100032,
0x00140023,
0x0009000b,
0xffebffed,
0xffb4ffc8,
0xff64ff9e,
0xfef4ff70,
0xfe68ff3f,
0xfdbbff0b,
0xfcf5fed7,
0x02d0fea9,
0x0212fee6,
0x0176ff20,
0x00f4ff58,
0x0092ff8a,
0x004affb7,
0x001bffde,
0x0002fffd,
0xfff90013,
0xfffb0020,
0x00020022,
0x0007001b,
0x0005000a,
0xfff4ffef,
0xffd1ffcc,
0xff95ffa2,
0xff41ff72,
0xfeceff3c,
0xfe40ff04,
0xfd91fec7,
0xfccbfe8b,
0x0302fe56,
0x0242fe9b,
0x01a3fedc,
0x011fff1b,
0x00b8ff53,
0x006cff85,
0x0037ffb1,
0x0017ffd3,
0x0007ffec,
0x0001fffa,
0x0000fffc,
0xfffdfff4,
0xfff3ffe1,
0xffdbffc3,
0xffb2ff9c,
0xff71ff6d,
0xff18ff37,
0xfea2fefb,
0xfe11febc,
0xfd60fe78,
0xfc99fe35,

};

MMP_ULONG m_ulDeltaMemC_000_127_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x036b01cd,
0x02a00188,
0x01ef0144,
0x015e0105,
0x00e800c9,
0x008f0093,
0x004e0064,
0x0025003d,
0x000d001f,
0x0003000c,
0x00000004,
0xffff0006,
0xfff90014,
0xffe9002d,
0xffc9004f,
0xff94007b,
0xff4800ad,
0xfee100e5,
0xfe5d0124,
0xfdbe0165,
0xfcfe01aa,
0x03390176,
0x026f0139,
0x01c000fc,
0x013200c4,
0x00bf008e,
0x006b005e,
0x002f0034,
0x000c0011,
0xfffbfff6,
0xfff9ffe5,
0xfffeffde,
0x0005ffe0,
0x0007ffed,
0xfffe0003,
0xffe50022,
0xffb60049,
0xff6e0076,
0xff0c00a8,
0xfe8a00e0,
0xfdee011a,
0xfd300157,
0x030e012a,
0x024500f5,
0x019800c1,
0x010c0090,
0x009c0062,
0x004c0038,
0x00150013,
0xfff7fff5,
0xffecffdd,
0xfff0ffce,
0xfffcffc8,
0x000affca,
0x0013ffd5,
0x0011ffe8,
0xfffd0003,
0xffd30025,
0xff90004c,
0xff300078,
0xfeb200a9,
0xfe1700db,
0xfd5a0110,
0x02e900e5,
0x022100ba,
0x0175008f,
0x00eb0066,
0x007e0040,
0x0030001d,
0xfffdfffe,
0xffe4ffe5,
0xffdfffd1,
0xffe8ffc5,
0xfffbffbf,
0x000fffc1,
0x001effca,
0x0021ffda,
0x0012fff1,
0xffec000d,
0xffad002e,
0xff500052,
0xfed4007a,
0xfe3a00a4,
0xfd7f00cf,
0x02cc00a9,
0x02050087,
0x015a0065,
0x00d10046,
0x00660027,
0x001b000c,
0xffebfff4,
0xffd5ffe0,
0xffd4ffd1,
0xffe2ffc7,
0xfff9ffc2,
0x0013ffc4,
0x0026ffcb,
0x002effd8,
0x0023ffe9,
0x00000000,
0xffc40019,
0xff690036,
0xfeef0055,
0xfe560076,
0xfd9b0098,
0x02b60072,
0x01ef005a,
0x01450042,
0x00bd002c,
0x00540017,
0x000a0003,
0xffddfff2,
0xffcaffe4,
0xffccffd9,
0xffdeffd2,
0xfff9ffcf,
0x0016ffd0,
0x002dffd5,
0x0037ffde,
0x0030ffeb,
0x0010fffa,
0xffd5000d,
0xff7c0021,
0xff030037,
0xfe6b004e,
0xfdb10066,
0x02a8003e,
0x01e10030,

};

MMP_ULONG m_ulDeltaMemC_128_255_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x01380023,
0x00b10017,
0x0048000b,
0xffff0000,
0xffd4fff6,
0xffc2ffee,
0xffc7ffe8,
0xffdbffe4,
0xfff8ffe3,
0x0017ffe3,
0x0031ffe6,
0x003effeb,
0x0038fff2,
0x001afffb,
0xffe00005,
0xff890010,
0xff10001d,
0xfe79002a,
0xfdbf0037,
0x02a2000d,
0x01dc000a,
0x01320007,
0x00ab0005,
0x00430002,
0xfffb0000,
0xffd0fffe,
0xffbffffc,
0xffc4fffb,
0xffd9fffa,
0xfff8fffa,
0x0018fffa,
0x0033fffa,
0x0041fffb,
0x003cfffd,
0x001effff,
0xffe50001,
0xff8e0003,
0xff160006,
0xfe7f0008,
0xfdc5000b,
0x02a4ffdb,
0x01deffe3,
0x0134ffeb,
0x00adfff3,
0x0044fffa,
0xfffc0000,
0xffd10006,
0xffc0000b,
0xffc5000f,
0xffda0011,
0xfff80012,
0x00180012,
0x00320010,
0x0040000d,
0x003a0009,
0x001c0003,
0xffe3fffd,
0xff8cfff6,
0xff14ffef,
0xfe7dffe7,
0xfdc3ffdf,
0x02aeffa9,
0x01e7ffbc,
0x013dffce,
0x00b6ffdf,
0x004dfff0,
0x0004ffff,
0xffd7000c,
0xffc60017,
0xffc90020,
0xffdc0025,
0xfff80028,
0x00170027,
0x002f0023,
0x003b001c,
0x00340012,
0x00150006,
0xffdbfff8,
0xff84ffe8,
0xff0affd7,
0xfe73ffc5,
0xfdb9ffb2,
0x02c0ff73,
0x01f9ff90,
0x014fffad,
0x00c6ffc8,
0x005cffe2,
0x0012fff9,
0xffe3000e,
0xffcf001f,
0xffd0002c,
0xffe00035,
0xfff90038,
0x00140037,
0x002a0031,
0x00330026,
0x002a0017,
0x00090004,
0xffcdffee,
0xff74ffd5,
0xfef9ffbb,
0xfe61ff9f,
0xfda7ff82,
0x02daff3a,
0x0212ff60,
0x0167ff87,
0x00ddffab,
0x0071ffce,
0x0025ffed,
0xfff40008,
0xffdc001f,
0xffd90030,
0xffe5003c,
0xfffa0041,
0x0011003f,
0x00220037,
0x00280028,
0x001b0014,
0xfff7fffb,
0xffb9ffdd,
0xff5effbd,
0xfee2ff99,
0xfe49ff74,
0xfd8eff4d,
0x02fbfef8,
0x0233ff29,
0x0186ff59,
0x00fbff85,

};

MMP_ULONG m_ulDeltaMemC_256_335_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x008dffb0,
0x003effd7,
0x0009fff9,
0xffed0015,
0xffe5002a,
0xffec0038,
0xfffb003e,
0x000d003c,
0x00190032,
0x00190020,
0x00080007,
0xffe0ffe8,
0xff9effc4,
0xff41ff9c,
0xfec3ff6f,
0xfe29ff41,
0xfd6dff11,
0x0323feb1,
0x0259feea,
0x01abff22,
0x011eff57,
0x00adff89,
0x005bffb6,
0x0022ffde,
0x0001ffff,
0xfff30018,
0xfff40028,
0xfffd002f,
0x0008002d,
0x000e0021,
0x0008000c,
0xfff1ffef,
0xffc5ffcb,
0xff7fffa0,
0xff1fff71,
0xfe9fff3d,
0xfe03ff07,
0xfd46fece,
0x0351fe5f,
0x0287fea0,
0x01d7fee1,
0x0148ff1d,
0x00d4ff56,
0x007dff88,
0x003fffb6,
0x0018ffda,
0x0004fff7,
0xfffe0009,
0xffff0011,
0x0002000e,
0x00000001,
0xfff4ffea,
0xffd7ffc9,
0xffa5ffa0,
0xff5bff70,
0xfef7ff3a,
0xfe74feff,
0xfdd6fec1,
0xfd17fe80,
0x0384fe07,
0x02b8fe4f,
0x0207fe96,
0x0175fed9,
0x00fdff18,
0x00a1ff4f,
0x005eff81,
0x0031ffa9,
0x0016ffc8,
0x0008ffdc,
0x0001ffe5,
0xfffcffe2,
0xfff2ffd4,
0xffdeffba,
0xffbbff96,
0xff83ff69,
0xff34ff34,
0xfeccfef9,
0xfe46feb8,
0xfda6fe74,
0xfce5fe2c,

};

MMP_ULONG m_ulDeltaMemD_000_127_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x030201aa,
0x02420165,
0x01a30124,
0x011f00e5,
0x00b800ad,
0x006c007b,
0x0037004f,
0x0017002d,
0x00070014,
0x00010006,
0x00000004,
0xfffd000c,
0xfff3001f,
0xffdb003d,
0xffb20064,
0xff710093,
0xff1800c9,
0xfea20105,
0xfe110144,
0xfd600188,
0xfc9901cb,
0x02d00157,
0x0212011a,
0x017600e0,
0x00f400a8,
0x00920076,
0x004a0049,
0x001b0022,
0x00020003,
0xfff9ffed,
0xfffbffe0,
0x0002ffde,
0x0007ffe5,
0x0005fff6,
0xfff40011,
0xffd10034,
0xff95005e,
0xff41008e,
0xfece00c4,
0xfe4000fc,
0xfd910139,
0xfccb0175,
0x02a60110,
0x01e900db,
0x014e00a9,
0x00d00078,
0x0070004c,
0x002d0025,
0x00030003,
0xffefffe8,
0xffedffd5,
0xfff6ffca,
0x0004ffc8,
0x0010ffce,
0x0014ffdd,
0x0009fff5,
0xffeb0013,
0xffb40038,
0xff640062,
0xfef40090,
0xfe6800c1,
0xfdbb00f5,
0xfcf50129,
0x028100cf,
0x01c600a4,
0x012c007a,
0x00b00052,
0x0053002e,
0x0014000d,
0xffeefff1,
0xffdfffda,
0xffe2ffca,
0xfff1ffc1,
0x0005ffbf,
0x0018ffc5,
0x0021ffd1,
0x001cffe5,
0x0003fffe,
0xffd0001d,
0xff820040,
0xff150066,
0xfe8b008f,
0xfddf00ba,
0xfd1a00e5,
0x02650098,
0x01aa0076,
0x01110055,
0x00970036,
0x003c0019,
0x00000000,
0xffddffe9,
0xffd2ffd8,
0xffdaffcb,
0xffedffc4,
0x0007ffc2,
0x001effc7,
0x002cffd1,
0x002bffe0,
0x0015fff4,
0xffe5000c,
0xff9a0027,
0xff2f0046,
0xfea60065,
0xfdfb0087,
0xfd3700a8,
0x024f0066,
0x0195004e,
0x00fd0037,
0x00840021,
0x002b000d,
0xfff0fffa,
0xffd0ffeb,
0xffc9ffde,
0xffd3ffd5,
0xffeaffd0,
0x0007ffcf,
0x0022ffd2,
0x0034ffd9,
0x0036ffe4,
0x0023fff2,
0xfff60003,
0xffac0017,
0xff43002c,
0xfebb0042,
0xfe11005a,
0xfd4d0072,
0x02410037,
0x0187002a,

};

MMP_ULONG m_ulDeltaMemD_128_255_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x00f0001d,
0x00770010,
0x00200005,
0xffe6fffb,
0xffc8fff2,
0xffc2ffeb,
0xffcfffe6,
0xffe9ffe3,
0x0008ffe3,
0x0025ffe4,
0x0039ffe8,
0x003effee,
0x002cfff6,
0x00010000,
0xffb8000b,
0xff4f0017,
0xfec80023,
0xfe1f0030,
0xfd5b003d,
0x023b000b,
0x01810008,
0x00ea0006,
0x00720003,
0x001b0001,
0xffe2ffff,
0xffc4fffd,
0xffbffffb,
0xffcdfffa,
0xffe8fffa,
0x0008fffa,
0x0027fffa,
0x003cfffb,
0x0041fffc,
0x0030fffe,
0x00050000,
0xffbd0002,
0xff550005,
0xfece0007,
0xfe24000a,
0xfd61000d,
0x023dffdf,
0x0183ffe7,
0x00ecffef,
0x0074fff6,
0x001dfffd,
0xffe40003,
0xffc60009,
0xffc0000d,
0xffce0010,
0xffe80012,
0x00080012,
0x00260011,
0x003b000f,
0x0040000b,
0x002f0006,
0x00040000,
0xffbcfffa,
0xff53fff3,
0xfeccffeb,
0xfe22ffe3,
0xfd5fffdb,
0x0247ffb2,
0x018dffc5,
0x00f6ffd7,
0x007cffe8,
0x0025fff8,
0xffeb0006,
0xffcc0012,
0xffc5001c,
0xffd10023,
0xffe90027,
0x00080028,
0x00240025,
0x00370020,
0x003a0017,
0x0029000c,
0xfffcffff,
0xffb3fff0,
0xff4affdf,
0xfec3ffce,
0xfe19ffbc,
0xfd55ffa9,
0x0259ff82,
0x019fff9f,
0x0107ffbb,
0x008cffd5,
0x0033ffee,
0xfff70004,
0xffd60017,
0xffcd0026,
0xffd60031,
0xffec0037,
0x00070038,
0x00200035,
0x0030002c,
0x0031001f,
0x001d000e,
0xffeefff9,
0xffa4ffe2,
0xff3affc8,
0xfeb1ffad,
0xfe07ff90,
0xfd43ff74,
0x0272ff4d,
0x01b7ff74,
0x011eff99,
0x00a2ffbd,
0x0047ffdd,
0x0009fffb,
0xffe50014,
0xffd80028,
0xffde0037,
0xffef003f,
0x00060041,
0x001b003c,
0x00270030,
0x0024001f,
0x000c0008,
0xffdbffed,
0xff8fffce,
0xff23ffab,
0xfe99ff87,
0xfdeeff60,
0xfd2aff3a,
0x0293ff11,
0x01d7ff41,
0x013dff6f,
0x00bfff9c,

};

MMP_ULONG m_ulDeltaMemD_256_335_HD[LDC_DELTA_ARRAY_SIZE] =
{
0x0062ffc4,
0x0020ffe8,
0xfff80007,
0xffe70020,
0xffe70032,
0xfff3003c,
0x0005003e,
0x00140038,
0x001b002a,
0x00130015,
0xfff7fff9,
0xffc2ffd7,
0xff73ffb0,
0xff05ff85,
0xfe7aff59,
0xfdcdff29,
0xfd08fef9,
0x02bafece,
0x01fdff07,
0x0161ff3d,
0x00e1ff71,
0x0081ffa0,
0x003bffcb,
0x000fffef,
0xfff8000c,
0xfff20021,
0xfff8002d,
0x0003002f,
0x000c0028,
0x000d0018,
0xffffffff,
0xffdeffde,
0xffa5ffb6,
0xff53ff89,
0xfee2ff57,
0xfe55ff22,
0xfda7feea,
0xfce1feb2,
0x02e9fe80,
0x022afec1,
0x018cfeff,
0x0109ff3a,
0x00a5ff70,
0x005bffa0,
0x0029ffc9,
0x000cffea,
0x00000001,
0xfffe000e,
0x00010011,
0x00020009,
0xfffcfff7,
0xffe8ffda,
0xffc1ffb6,
0xff83ff88,
0xff2cff56,
0xfeb8ff1d,
0xfe29fee1,
0xfd79fea0,
0xfcb2fe60,
0x031bfe2c,
0x025afe74,
0x01bafeb8,
0x0134fef9,
0x00ccff34,
0x007dff69,
0x0045ff96,
0x0022ffba,
0x000effd4,
0x0004ffe2,
0xffffffe5,
0xfff8ffdc,
0xffeaffc8,
0xffcfffa9,
0xffa2ff81,
0xff5fff4f,
0xff03ff18,
0xfe8bfed9,
0xfdf9fe96,
0xfd48fe4f,
0xfc80fe08,

};