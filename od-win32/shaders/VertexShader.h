#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions: 
//
// cbuffer MatrixBuffer
// {
//
//   float4x4 worldMatrix;              // Offset:    0 Size:    64
//   float4x4 viewMatrix;               // Offset:   64 Size:    64
//   float4x4 projectionMatrix;         // Offset:  128 Size:    64
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// MatrixBuffer                      cbuffer      NA          NA            cb0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// POSITION                 0   xyzw        0     NONE   float   xyz 
// TEXCOORD                 0   xy          1     NONE   float   xy  
// TEXCOORD                 1   xy          2     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float   xyzw
// TEXCOORD                 0   xy          1     NONE   float   xy  
// TEXCOORD                 1     zw        1     NONE   float     zw
//
//
// Constant buffer to DX9 shader constant mappings:
//
// Target Reg Buffer  Start Reg # of Regs        Data Conversion
// ---------- ------- --------- --------- ----------------------
// c1         cb0             0        10  ( FLT, FLT, FLT, FLT)
// c11        cb0            11         1  ( FLT, FLT, FLT, FLT)
//
//
// Runtime generated constant mappings:
//
// Target Reg                               Constant Description
// ---------- --------------------------------------------------
// c0                              Vertex Shader position offset
//
//
// Level9 shader bytecode:
//
    vs_2_0
    def c12, 1, 0, 0, 0
    dcl_texcoord v0
    dcl_texcoord1 v1
    dcl_texcoord2 v2
    mad r0, v0.xyzx, c12.xxxy, c12.yyyx
    dp4 r1.x, r0, c1
    dp4 r1.y, r0, c2
    dp4 r1.z, r0, c3
    dp4 r1.w, r0, c4
    dp4 r0.x, r1, c5
    dp4 r0.y, r1, c6
    dp4 r0.z, r1, c7
    dp4 r0.w, r1, c8
    dp4 r1.x, r0, c9
    dp4 r1.y, r0, c10
    dp4 r0.x, r0, c11
    mad oPos.xy, r0.x, c0, r1
    mov oPos.w, r0.x
    mov oPos.z, c12.y
    mov oT0.xy, v1
    mov oT0.zw, v2.xyyx

// approximately 17 instruction slots used
vs_4_0
dcl_constantbuffer CB0[12], immediateIndexed
dcl_input v0.xyz
dcl_input v1.xy
dcl_input v2.xy
dcl_output_siv o0.xyzw, position
dcl_output o1.xy
dcl_output o1.zw
dcl_temps 2
mov o0.z, l(0)
mov r0.xyz, v0.xyzx
mov r0.w, l(1.000000)
dp4 r1.x, r0.xyzw, cb0[0].xyzw
dp4 r1.y, r0.xyzw, cb0[1].xyzw
dp4 r1.z, r0.xyzw, cb0[2].xyzw
dp4 r1.w, r0.xyzw, cb0[3].xyzw
dp4 r0.x, r1.xyzw, cb0[4].xyzw
dp4 r0.y, r1.xyzw, cb0[5].xyzw
dp4 r0.z, r1.xyzw, cb0[6].xyzw
dp4 r0.w, r1.xyzw, cb0[7].xyzw
dp4 o0.x, r0.xyzw, cb0[8].xyzw
dp4 o0.y, r0.xyzw, cb0[9].xyzw
dp4 o0.w, r0.xyzw, cb0[11].xyzw
mov o1.xy, v1.xyxx
mov o1.zw, v2.xxxy
ret 
// Approximately 17 instruction slots used
#endif

const BYTE VertexShader[] =
{
     68,  88,  66,  67,  32,  72, 
    217, 207, 174, 158,  89, 255, 
     99, 171, 168, 106, 173, 214, 
    227,  47,   1,   0,   0,   0, 
    116,   6,   0,   0,   6,   0, 
      0,   0,  56,   0,   0,   0, 
    204,   1,   0,   0,   8,   4, 
      0,   0, 132,   4,   0,   0, 
    152,   5,   0,   0,   4,   6, 
      0,   0,  65, 111, 110,  57, 
    140,   1,   0,   0, 140,   1, 
      0,   0,   0,   2, 254, 255, 
     76,   1,   0,   0,  64,   0, 
      0,   0,   2,   0,  36,   0, 
      0,   0,  60,   0,   0,   0, 
     60,   0,   0,   0,  36,   0, 
      1,   0,  60,   0,   0,   0, 
      0,   0,  10,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     11,   0,   1,   0,  11,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   2, 254, 255, 
     81,   0,   0,   5,  12,   0, 
     15, 160,   0,   0, 128,  63, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     31,   0,   0,   2,   5,   0, 
      0, 128,   0,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      1, 128,   1,   0,  15, 144, 
     31,   0,   0,   2,   5,   0, 
      2, 128,   2,   0,  15, 144, 
      4,   0,   0,   4,   0,   0, 
     15, 128,   0,   0,  36, 144, 
     12,   0,  64, 160,  12,   0, 
     21, 160,   9,   0,   0,   3, 
      1,   0,   1, 128,   0,   0, 
    228, 128,   1,   0, 228, 160, 
      9,   0,   0,   3,   1,   0, 
      2, 128,   0,   0, 228, 128, 
      2,   0, 228, 160,   9,   0, 
      0,   3,   1,   0,   4, 128, 
      0,   0, 228, 128,   3,   0, 
    228, 160,   9,   0,   0,   3, 
      1,   0,   8, 128,   0,   0, 
    228, 128,   4,   0, 228, 160, 
      9,   0,   0,   3,   0,   0, 
      1, 128,   1,   0, 228, 128, 
      5,   0, 228, 160,   9,   0, 
      0,   3,   0,   0,   2, 128, 
      1,   0, 228, 128,   6,   0, 
    228, 160,   9,   0,   0,   3, 
      0,   0,   4, 128,   1,   0, 
    228, 128,   7,   0, 228, 160, 
      9,   0,   0,   3,   0,   0, 
      8, 128,   1,   0, 228, 128, 
      8,   0, 228, 160,   9,   0, 
      0,   3,   1,   0,   1, 128, 
      0,   0, 228, 128,   9,   0, 
    228, 160,   9,   0,   0,   3, 
      1,   0,   2, 128,   0,   0, 
    228, 128,  10,   0, 228, 160, 
      9,   0,   0,   3,   0,   0, 
      1, 128,   0,   0, 228, 128, 
     11,   0, 228, 160,   4,   0, 
      0,   4,   0,   0,   3, 192, 
      0,   0,   0, 128,   0,   0, 
    228, 160,   1,   0, 228, 128, 
      1,   0,   0,   2,   0,   0, 
      8, 192,   0,   0,   0, 128, 
      1,   0,   0,   2,   0,   0, 
      4, 192,  12,   0,  85, 160, 
      1,   0,   0,   2,   0,   0, 
      3, 224,   1,   0, 228, 144, 
      1,   0,   0,   2,   0,   0, 
     12, 224,   2,   0,  20, 144, 
    255, 255,   0,   0,  83,  72, 
     68,  82,  52,   2,   0,   0, 
     64,   0,   1,   0, 141,   0, 
      0,   0,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  12,   0,   0,   0, 
     95,   0,   0,   3, 114,  16, 
     16,   0,   0,   0,   0,   0, 
     95,   0,   0,   3,  50,  16, 
     16,   0,   1,   0,   0,   0, 
     95,   0,   0,   3,  50,  16, 
     16,   0,   2,   0,   0,   0, 
    103,   0,   0,   4, 242,  32, 
     16,   0,   0,   0,   0,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3,  50,  32,  16,   0, 
      1,   0,   0,   0, 101,   0, 
      0,   3, 194,  32,  16,   0, 
      1,   0,   0,   0, 104,   0, 
      0,   2,   2,   0,   0,   0, 
     54,   0,   0,   5,  66,  32, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,  18,  16,   0, 
      0,   0,   0,   0,  54,   0, 
      0,   5, 130,   0,  16,   0, 
      0,   0,   0,   0,   1,  64, 
      0,   0,   0,   0, 128,  63, 
     17,   0,   0,   8,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  17,   0,   0,   8, 
     34,   0,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,  17,   0, 
      0,   8,  66,   0,  16,   0, 
      1,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
     17,   0,   0,   8, 130,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,  17,   0,   0,   8, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      4,   0,   0,   0,  17,   0, 
      0,   8,  34,   0,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   1,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   5,   0,   0,   0, 
     17,   0,   0,   8,  66,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   6,   0, 
      0,   0,  17,   0,   0,   8, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      7,   0,   0,   0,  17,   0, 
      0,   8,  18,  32,  16,   0, 
      0,   0,   0,   0,  70,  14, 
     16,   0,   0,   0,   0,   0, 
     70, 142,  32,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     17,   0,   0,   8,  34,  32, 
     16,   0,   0,   0,   0,   0, 
     70,  14,  16,   0,   0,   0, 
      0,   0,  70, 142,  32,   0, 
      0,   0,   0,   0,   9,   0, 
      0,   0,  17,   0,   0,   8, 
    130,  32,  16,   0,   0,   0, 
      0,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  70, 142, 
     32,   0,   0,   0,   0,   0, 
     11,   0,   0,   0,  54,   0, 
      0,   5,  50,  32,  16,   0, 
      1,   0,   0,   0,  70,  16, 
     16,   0,   1,   0,   0,   0, 
     54,   0,   0,   5, 194,  32, 
     16,   0,   1,   0,   0,   0, 
      6,  20,  16,   0,   2,   0, 
      0,   0,  62,   0,   0,   1, 
     83,  84,  65,  84, 116,   0, 
      0,   0,  17,   0,   0,   0, 
      2,   0,   0,   0,   0,   0, 
      0,   0,   6,   0,   0,   0, 
     11,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      5,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  82,  68, 
     69,  70,  12,   1,   0,   0, 
      1,   0,   0,   0,  76,   0, 
      0,   0,   1,   0,   0,   0, 
     28,   0,   0,   0,   0,   4, 
    254, 255,   0,   1,   0,   0, 
    228,   0,   0,   0,  60,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     77,  97, 116, 114, 105, 120, 
     66, 117, 102, 102, 101, 114, 
      0, 171, 171, 171,  60,   0, 
      0,   0,   3,   0,   0,   0, 
    100,   0,   0,   0, 192,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0, 172,   0, 
      0,   0,   0,   0,   0,   0, 
     64,   0,   0,   0,   2,   0, 
      0,   0, 184,   0,   0,   0, 
      0,   0,   0,   0, 200,   0, 
      0,   0,  64,   0,   0,   0, 
     64,   0,   0,   0,   2,   0, 
      0,   0, 184,   0,   0,   0, 
      0,   0,   0,   0, 211,   0, 
      0,   0, 128,   0,   0,   0, 
     64,   0,   0,   0,   2,   0, 
      0,   0, 184,   0,   0,   0, 
      0,   0,   0,   0, 119, 111, 
    114, 108, 100,  77,  97, 116, 
    114, 105, 120,   0,   3,   0, 
      3,   0,   4,   0,   4,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 118, 105, 101, 119, 
     77,  97, 116, 114, 105, 120, 
      0, 112, 114, 111, 106, 101, 
     99, 116, 105, 111, 110,  77, 
     97, 116, 114, 105, 120,   0, 
     77, 105,  99, 114, 111, 115, 
    111, 102, 116,  32,  40,  82, 
     41,  32,  72,  76,  83,  76, 
     32,  83, 104,  97, 100, 101, 
    114,  32,  67, 111, 109, 112, 
    105, 108, 101, 114,  32,  49, 
     48,  46,  49,   0,  73,  83, 
     71,  78, 100,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   7, 
      0,   0,  89,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,   3, 
      0,   0,  89,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   3,   3, 
      0,   0,  80,  79,  83,  73, 
     84,  73,  79,  78,   0,  84, 
     69,  88,  67,  79,  79,  82, 
     68,   0, 171, 171,  79,  83, 
     71,  78, 104,   0,   0,   0, 
      3,   0,   0,   0,   8,   0, 
      0,   0,  80,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,   0, 
      0,   0,  92,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,   3,  12, 
      0,   0,  92,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  12,   3, 
      0,   0,  83,  86,  95,  80, 
     79,  83,  73,  84,  73,  79, 
     78,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
    171, 171
};
