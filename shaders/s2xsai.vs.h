#if 0
//
// Generated by 2.0.20353.0
//
//   fxc /Fh s2xsai.vs.h /Tvs_3_0 Super2xSAI.fx /EVS
//
//
// Parameters:
//
//   float2 texture_size;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   texture_size c0       1
//

// Shader type: vertex 

xvs_3_0
defconst texture_size, float, vector, [1, 2], c0
config AutoSerialize=false
config AutoResource=false
config VsMaxReg=2
config VsResource=1
// VsExportCount=8

dcl_index r0.x
dcl_texcoord o0.xy
dcl_texcoord1 o1
dcl_texcoord2 o2
dcl_texcoord3 o3
dcl_texcoord4 o4
dcl_texcoord5 o5
dcl_texcoord6 o6
dcl_texcoord7 o7
dcl_texcoord8 o8

def c252, 0, 0, 0, 0
def c253, 0, 0, 0, 0
def c254, 0, 0, 0, 0
def c255, 2, 0, 0, 0


    exec
    vfetch r1, r0.x, position
    vfetch r0.__xy, r0.x, texcoord
    alloc position
    exec
    mov oPos, r1
    alloc interpolators
    exec
    rcp r1.x, c0.x
    add r2.x, r1.x, r0.z
    add r2.w, -r1.x, r0.z
  + rcp r1.y, c0.y
    add o2.x, r1.x, r0.z
    add o4.w, r1.y, r0.w
    add o6.y, r1.y, r0.w
    exec
    mov o0.xy, r0.zw
    add r0.xy, r1.xy, r0.zw
  + movs r2.y, r0.z
    add r1.zw, -r1.xxxy, r0.zzzw
  + movs r2.z, r0.w
    add o1.xyz, -r1.xyx, r0.zwz
  + movs o1.w, r0.w
    mad r1.xy, r1.yx, c255.x, r0.wz
    mov o8.xy00, r1.yx
    exec
    mov o4.yz, r2.zzw
  + movs o4.x, r1.y
    mov o7.xz, r2.yx
    mov o7.yw, r1.x
    mov o3, r2.wzxz
    mov o2.yzw, r1.wwyw
    mov o6.xzw, r1.yzzx
    exece
    mov o5, r0.zyxy

// PDB hint 00000000-00000000-00000000

#endif

// This microcode is in native DWORD byte order.

const DWORD g_xvs_VS[] =
{
    0x102a1101, 0x0000013c, 0x00000184, 0x00000000, 0x00000024, 0x0000008c, 
    0x000000b4, 0x00000000, 0x00000000, 0x00000064, 0x0000001c, 0x00000057, 
    0xfffe0300, 0x00000001, 0x0000001c, 0x00000000, 0x00000050, 0x00000030, 
    0x00020000, 0x00010000, 0x00000040, 0x00000000, 0x74657874, 0x7572655f, 
    0x73697a65, 0x00ababab, 0x00010003, 0x00010002, 0x00010000, 0x00000000, 
    0x76735f33, 0x5f300032, 0x2e302e32, 0x30333533, 0x2e3000ab, 0x00000000, 
    0x00000001, 0x00000000, 0x00000000, 0x00000014, 0x00fc0010, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000040, 0x00000144, 0x00810002, 
    0x00000000, 0x00000000, 0x00008929, 0x00000001, 0x00000002, 0x0000000d, 
    0x00000290, 0x00100004, 0x00205005, 0x00003050, 0x0001f151, 0x0002f252, 
    0x0004f353, 0x0005f454, 0x0007f555, 0x0008f656, 0x000af757, 0x000cf858, 
    0x0000100d, 0x00001010, 0x0000000a, 0x00001017, 0x00001016, 0x0000000b, 
    0x00001013, 0x00001019, 0x0000000c, 0x00001018, 0x00000014, 0x00001015, 
    0x00001012, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x40000000, 0x00000000, 0x00000000, 0x00000000, 0x30052004, 
    0x00001200, 0xc2000000, 0x00001006, 0x00001200, 0xc4000000, 0x00006007, 
    0x600d1200, 0x12000000, 0x00006013, 0x10191200, 0x22000000, 0x05f81000, 
    0x00000688, 0x00000000, 0x05f80000, 0x0000023f, 0x00000000, 0xc80f803e, 
    0x00000000, 0xe2010100, 0x4c100100, 0x0000006c, 0xc2000000, 0xc8010002, 
    0x006cc600, 0xe0010000, 0x4c280102, 0x046cc6b1, 0xc0010000, 0xc8018002, 
    0x006cc600, 0xe0010000, 0xc8088004, 0x00b11b00, 0xe0010000, 0xc8028006, 
    0x00b11b00, 0xe0010000, 0xc8038000, 0x001a1a00, 0xe2000000, 0x14230200, 
    0x00b01ac6, 0xe0010000, 0x144c0201, 0x04ac061b, 0xe0010000, 0x14878001, 
    0x0460ca1b, 0xe0010000, 0xc8030001, 0x006d6cc7, 0xab01ff00, 0xc803c008, 
    0x006d6d00, 0xe2010100, 0x14168004, 0x001616b1, 0xe2020201, 0xc8058007, 
    0x006d6d00, 0xe2020200, 0xc80a8007, 0x006c6c00, 0xe2010100, 0xc80f8003, 
    0x00e7e700, 0xe2020200, 0xc80e8002, 0x003b3b00, 0xe2010100, 0xc80d8006, 
    0x00454500, 0xe2010100, 0xc80f8005, 0x00a2a200, 0xe2000000, 0x00000000, 
    0x00000000, 0x00000000
};