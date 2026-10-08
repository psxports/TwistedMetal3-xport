#include "game_draft_signatures.h"

/* Unverified drafts, pending guest buffers and original ABI integration */
extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

extern uint32 tm3_draft_local_address(const void *pointer, uint32 bytes);
#define TM3_DRAFT_LOCAL_ADDRESS(pointer, bytes) tm3_draft_local_address((pointer), (bytes))
#define dword_8007F2A0 TM3_DRAFT_U32(0x8007F2A0u)
#define dword_80089898 TM3_DRAFT_U32(0x80089898u)
#define dword_80089894 TM3_DRAFT_U32(0x80089894u)
#define dword_800896A0 TM3_DRAFT_U32(0x800896A0u)
#define dword_80089EF8 TM3_DRAFT_U32(0x80089EF8u)
#define dword_80089F00 TM3_DRAFT_U32(0x80089F00u)
#define dword_80089F10 TM3_DRAFT_U32(0x80089F10u)
#define dword_800896A4 TM3_DRAFT_U32(0x800896A4u)
#define dword_80089760 TM3_DRAFT_U32(0x80089760u)
#define dword_80089764 TM3_DRAFT_U32(0x80089764u)
#define dword_80089D14 TM3_DRAFT_U32(0x80089D14u)
#define dword_8008989C TM3_DRAFT_U32(0x8008989Cu)
#define dword_80089C94 TM3_DRAFT_U32(0x80089C94u)
#define dword_80089DAC TM3_DRAFT_U32(0x80089DACu)
#define dword_80089CF0 TM3_DRAFT_U32(0x80089CF0u)
#define dword_8008982C TM3_DRAFT_U32(0x8008982Cu)
#define dword_80089CB8 TM3_DRAFT_U32(0x80089CB8u)
#define dword_80089890 TM3_DRAFT_U32(0x80089890u)
#define dword_8007EA0C TM3_DRAFT_U32(0x8007EA0Cu)

/* Unverified decompiler-derived draft */
uint32 sub_800288AC(uint32 a1, uint32 a2, uint32 a3)
{
  union { uint64 align; uint8 bytes[0x38u]; } native_local_storage;
  uint8 *native_locals = native_local_storage.bytes;
  /* Original adjacent local buffers share one native storage area */
#define v15 (*((int *)(native_locals + 0x10u)))
#define v16 (*((int *)(native_locals + 0x14u)))
#define v17 (*((int *)(native_locals + 0x18u)))
#define v18 (*((int *)(native_locals + 0x1Cu)))
    FUNCTION_MARKER(0x800288ACu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v6; 
  sint32 v7; 
  uint32 v8; 
  uint32 v9; 
  uint32 v10; 
  sint32 result; 
  int v12; 
  uint32 v13; 
  int v14; 



  TM3_DRAFT_U32(a1) = 0;
  LOWORD(v15) = TM3_DRAFT_U16(a2) + 1024;
  HIWORD(v15) = TM3_DRAFT_U16(a2 + (1) * 2u);
  LOWORD(v16) = TM3_DRAFT_U16(a2 + (2) * 2u) + 1024;
  v6 = sub_8004A294(16, (int)&v15, (int)&v17, a3);
  v7 = v6 != 0;
  TM3_DRAFT_U32(a1 + (1) * 4u) = v6;
  LOWORD(v15) = TM3_DRAFT_U16(a2) + 1024;
  HIWORD(v15) = TM3_DRAFT_U16(a2 + (1) * 2u);
  LOWORD(v16) = TM3_DRAFT_U16(a2 + (2) * 2u) - 1024;
  v8 = sub_8004A294(16, (int)&v15, (int)&v17, a3);
  TM3_DRAFT_U32(a1 + (2) * 4u) = v8;
  if ( !v8 )
    v7 = 0;
  LOWORD(v15) = TM3_DRAFT_U16(a2) - 1024;
  HIWORD(v15) = TM3_DRAFT_U16(a2 + (1) * 2u);
  LOWORD(v16) = TM3_DRAFT_U16(a2 + (2) * 2u) - 1024;
  v9 = sub_8004A294(16, (int)&v15, (int)&v17, a3);
  TM3_DRAFT_U32(a1 + (3) * 4u) = v9;
  if ( !v9 )
    v7 = 0;
  LOWORD(v15) = TM3_DRAFT_U16(a2) - 1024;
  HIWORD(v15) = TM3_DRAFT_U16(a2 + (1) * 2u);
  LOWORD(v16) = TM3_DRAFT_U16(a2 + (2) * 2u) + 1024;
  v10 = sub_8004A294(16, (int)&v15, (int)&v17, a3);
  TM3_DRAFT_U32(a1 + (4) * 4u) = v10;
  if ( !v10 )
    v7 = 0;
  result = v7;
  if ( !v7 )
  {
    v12 = 0;
    v13 = a1;
    do
    {
      v14 = TM3_DRAFT_U32(v13 + (1) * 4u);
      if ( v14 )
        sub_8004A570(v14);
      ++v12;
      (v13 += 4u);
    }
    while ( v12 < 4 );
    return 0;
  }
  return result;
}

#undef v15
#undef v16
#undef v17
#undef v18

/* Unverified decompiler-derived draft */
uint32 sub_80031A10(uint32 a1)
{
    FUNCTION_MARKER(0x80031A10u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  sint16 v3; 
  sint16 v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int result; 
  sint16 v12[4]; 
  sint16 v13[4]; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 

  v2 = 682;
  v3 = TM3_DRAFT_U16(a1 + 126);
  v4 = TM3_DRAFT_U16(a1 + 132);
  v13[0] = TM3_DRAFT_U16(a1 + 120);
  v13[1] = v3;
  v13[2] = v4;
  v5 = TM3_DRAFT_I16(a1 + 18);
  v6 = TM3_DRAFT_I16(a1 + 20);
  v14 = TM3_DRAFT_I16(a1 + 16);
  v15 = v5;
  v16 = v6;
  v7 = sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS(&v14, sizeof(v14)), v13);
  sub_80013FB4((int)&v14, v7 / 8, v13);
  v8 = 0;
  do
  {
    v17 = (768 * sub_8005AFF4(v2) + 2048) >> 12;
    v18 = -1536;
    v9 = sub_8005AF24(v2);
    v2 += 682;
    ++v8;
    v19 = (768 * v9 + 2048) >> 12;
    v12[0] = v17 + v14;
    v12[2] = v19 + v16;
    v12[1] = v18 + v15;
    sub_8004A294(17, a1 + 8, (int)v12, v19 + v16, TM3_DRAFT_I32(v12), *(int *)&v12[2], TM3_DRAFT_I32(v13), *(int *)&v13[2]);
  }
  while ( v8 < 6 );
  v10 = TM3_DRAFT_U32(a1 + 160);
  result = sub_800470DC(v10);
  if ( result )
    return sub_80033E94(v10, TM3_DRAFT_U8(a1 + 327));
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004A294(uint32 a1, ...)
{
    FUNCTION_MARKER(0x8004A294u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  va_list payload;
  uint32 payload_address;
  uint32 v12; 
  uint32 result; 
  uint32 v14; 
  unsigned int v15; 
  int v16; 
  uint32 v18; /* TODO Guest callback signature */ 
  uint32 v19; 

  va_start(payload, a1);
  /* Callback object type determines the original payload extent */
  payload_address = TM3_DRAFT_LOCAL_ADDRESS(payload, 4u);
  v12 = sub_8004A000(TM3_DRAFT_U32(0x8007F2A0u + (5 * a1) * 4u) + 48);
  result = 0;
  if ( v12 )
  {
    TM3_DRAFT_I32(v12 + (3) * 4u) = 0;
    TM3_DRAFT_I32(v12 + (4) * 4u) = 0;
    TM3_DRAFT_I32(v12 + (5) * 4u) = 0;
    v14 = (0x8007F2A0u + (5 * a1) * 4u);
    TM3_DRAFT_I32(v12) = a1;
    v15 = 0;
    TM3_DRAFT_I32(v12 + (10) * 4u) = TM3_DRAFT_I32(v14 + (2) * 4u);
    v16 = TM3_DRAFT_I32(v14 + (3) * 4u);
    TM3_DRAFT_I32(v12 + (6) * 4u) = -1;
    TM3_DRAFT_U16(v12 + 0x1Cu) = 0;
    TM3_DRAFT_I32(v12 + (11) * 4u) = v16;
    TM3_DRAFT_U16(v12 + 0x1Eu) = 0;
    TM3_DRAFT_U16(v12 + 0x20u) = 0;
    TM3_DRAFT_I32(v12 + (9) * 4u) = 0;
    while ( !sub_8004A248(TM3_DRAFT_I32(v12), v15++) )
    {
      if ( v15 >= 0x1F )
        goto LABEL_7;
    }
    TM3_DRAFT_I32(v12 + (9) * 4u) = 1;
LABEL_7:
    v18 = TM3_DRAFT_U32(0x8007F2A0u + (5 * a1 + 1) * 4u);
    if ( !v18 || tm3_draft_indirect(v18, 2u, v12 + 48u, payload_address) )
    {
      if ( a1 == 22 )
        v19 = 0x80089898u;
      else
        v19 = 0x80089894u;
      sub_8004A1CC((int)v12, v19);
      va_end(payload);
      return (v12 + (12) * 4u);
    }
    else
    {
      sub_8004A0F8((int)v12);
      va_end(payload);
      return 0;
    }
  }
  va_end(payload);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80028354(uint32 a1)
{
    FUNCTION_MARKER(0x80028354u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  int v3; 
  sint16 v4; 
  sint16 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  sint16 v14; 
  int result; 
  sint16 v16[4]; 

  v2 = TM3_DRAFT_U32(a1 + 136);
  v3 = TM3_DRAFT_U32(a1 + 268) - TM3_DRAFT_U32(a1 + 132);
  v4 = TM3_DRAFT_U16(a1 + 128) + 1;
  TM3_DRAFT_U16(a1 + 128) = v4;
  TM3_DRAFT_U32(a1 + 268) = v3;
  if ( v4 < v2 / 4 )
    v5 = TM3_DRAFT_U16(a1 + 144);
  else
    v5 = TM3_DRAFT_U16(a1 + 146);
  TM3_DRAFT_U16(a1 + 130) += v5;
  v6 = TM3_DRAFT_I16(a1 + 252);
  v7 = TM3_DRAFT_I16(a1 + 254);
  v8 = TM3_DRAFT_U32(a1 + 300);
  TM3_DRAFT_U32(a1 - 24) = TM3_DRAFT_I16(a1 + 130);
  v9 = TM3_DRAFT_U32(a1 + 296);
  TM3_DRAFT_U32(a1 + 300) = v8 + v7;
  v10 = TM3_DRAFT_I16(a1 + 256);
  TM3_DRAFT_U32(a1 + 296) = v9 + v6;
  v11 = TM3_DRAFT_U32(a1 + 304) + v10;
  v12 = TM3_DRAFT_U32(a1 + 300);
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U32(a1 + 296);
  v13 = a1 - 20;
  TM3_DRAFT_U32(a1 + 304) = v11;
  TM3_DRAFT_U16(v13 + 4) = v11;
  TM3_DRAFT_U16(v13 + 2) = v12;
  if ( TM3_DRAFT_U32(a1 + 136) < TM3_DRAFT_I16(a1 + 128) )
  {
    sub_80028A3C(a1 + 228);
    return sub_8004A570(a1);
  }
  if ( TM3_DRAFT_U16(a1 + 258) )
  {
    v14 = TM3_DRAFT_U16(v13 + 2);
    v16[0] = TM3_DRAFT_U16(a1 - 20);
    v16[1] = v14;
    v16[2] = v11;
    sub_80028A3C(a1 + 228);
    result = sub_800288AC((uint32)(a1 + 228), v16, a1);
    if ( result )
      return result;
    return sub_8004A570(a1);
  }
  sub_80028B0C((uint32)(a1 + 228));
  return 0u; /* Return register is not used by the caller */
}

/* Unverified decompiler-derived draft */
uint32 sub_80017A48(uint32 a1)
{
    FUNCTION_MARKER(0x80017A48u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int result; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  uint32 v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  signed int v13; 
  uint32 v14; 
  int v15; 

  result = dword_800896A0;
  if ( dword_800896A0 )
  {
    v3 = -1;
    v4 = HIWORD(dword_80089EF8) - 1;
    v5 = 999999;
    if ( v4 >= 0 )
    {
      v6 = 28 * v4;
      do
      {
        v7 = (uint32)(v6 + dword_80089F00);
        v8 = 40 * TM3_DRAFT_U8(v6 + dword_80089F00 + 10) - 2146918384;
        v9 = TM3_DRAFT_U32(a1 + (9) * 4u);
        if ( v9 < TM3_DRAFT_I16(v8 + 16) && v9 >= TM3_DRAFT_I16(v8 + 18) )
        {
          v10 = TM3_DRAFT_I16(v7) - TM3_DRAFT_U32(a1 + (8) * 4u);
          v11 = v10 * v10;
          v12 = TM3_DRAFT_I16(v7 + (1) * 2u) - TM3_DRAFT_U32(a1 + (10) * 4u);
          v13 = sub_8005B124(v11 + v12 * v12);
          if ( v13 < v5 )
          {
            v5 = v13;
            v3 = v4;
          }
        }
        --v4;
        v6 -= 28;
      }
      while ( v4 >= 0 );
    }
    result = -2146893824;
    if ( v3 >= 0 )
    {
      result = (int)dword_80089F10;
      v14 = (0x80089F10u + (2 * TM3_DRAFT_U32(0x800896A4u + (1) * 4u)) * 4u);
      v15 = TM3_DRAFT_U32(0x800896A4u + (1) * 4u) + 1;
      TM3_DRAFT_U16((v14 + (2) * 4u)) = v3;
      TM3_DRAFT_I32(v14) = (int)a1;
      TM3_DRAFT_U32(0x800896A4u + (1) * 4u) = v15;
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80030CD8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80030CD8u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v4; 
  sint16 v5; 
  sint16 v6; 
  sint16 v7; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  sint16 v22; 
  sint16 v23; 
  sint16 v24; 
  sint16 v25; 
  int v26; 
  int v27; 
  int v28; 

  v4 = (uint32)(a1 + 8);
  v26 = dword_80089760;
  v27 = dword_80089764;
  v5 = TM3_DRAFT_I16(v4);
  v6 = TM3_DRAFT_I16(v4 + (1) * 2u);
  v7 = TM3_DRAFT_I16(v4 + (2) * 2u);
  v28 = 2105376;
  v23 = v5;
  v24 = v6;
  v25 = v7;
  sub_800274E0(v4, 0, 160, 8, 3, 768, a2, (int)&v26, -1);
  v26 = 0;
  LOWORD(v27) = 0;
  sub_800276AC((int)&v23, 1, 768, a2, (int)&v26, -1);
  v24 -= 96;
  return sub_8004A294(9, (int)&v23, (int)&v28, 32, 1024, 384, 15, TM3_DRAFT_U32(a1 + 160));
}

/* Unverified decompiler-derived draft */
uint32 sub_80046944(uint32 a1)
{
    FUNCTION_MARKER(0x80046944u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  int result; 
  uint32 v4; 
  int v5; 
  uint32 v6; 
  int v7; 
  int v8; 
  int v9; 
  uint32 v10; 
  uint32 v11; 
  int v12; 
  int v13; 
  int v14; 

  TM3_DRAFT_U32(4 * TM3_DRAFT_U32(0x800d340cu)++ - 2146619768 + 1424) = a1;
  if ( TM3_DRAFT_U32(a1 + (980) * 4u) >= TM3_DRAFT_U32(0x800d2e90u) )
    ++TM3_DRAFT_U32(0x800d3410u);
  else
    ++TM3_DRAFT_U32(0x800d3414u);
  v2 = TM3_DRAFT_U32(a1 + (981) * 4u);
  result = v2 < TM3_DRAFT_U32(0x800d2e88u);
  if ( v2 < TM3_DRAFT_U32(0x800d2e88u) )
  {
    if ( TM3_DRAFT_U32(0x800d2f20u) == 2 )
    {
      v4 = (uint32)(108 * v2 - 2146624016);
      TM3_DRAFT_U32(108 * v2 - 2146624064 + 104) = 0;
      TM3_DRAFT_U32(v4) = 0;
      TM3_DRAFT_U32(v4 + (1) * 4u) = 0;
      TM3_DRAFT_U32(v4 + (2) * 4u) = 0;
    }
    else
    {
      v5 = 108 * v2 - 2146624064;
      TM3_DRAFT_U32(v5 + 96) = 1;
      v6 = (a1 + (395) * 4u);
      TM3_DRAFT_U32(v5 + 104) = a1;
      v7 = TM3_DRAFT_U32(a1 + (395) * 4u);
      v8 = TM3_DRAFT_U32(a1 + (396) * 4u);
      v9 = TM3_DRAFT_U32(v6 + (2) * 4u);
      v10 = (uint32)(108 * v2 - 2146624016);
      TM3_DRAFT_U32(v10) = v7;
      TM3_DRAFT_U32(v10 + (1) * 4u) = v8;
      TM3_DRAFT_U32(v10 + (2) * 4u) = v9;
    }
    v11 = (uint32)(108 * v2 - 2146624016);
    v12 = TM3_DRAFT_I32(v11);
    v13 = TM3_DRAFT_I32(v11 + (1) * 4u);
    v14 = TM3_DRAFT_I32(v11 + (2) * 4u);
    result = 108 * v2 - 2146624028;
    TM3_DRAFT_U32(result) = v12;
    TM3_DRAFT_U32(result + 4) = v13;
    TM3_DRAFT_U32(result + 8) = v14;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003163C(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9, uint32 a10, uint32 a11, uint32 a12, uint32 a13)
{
  uint32 tail_result;
    FUNCTION_MARKER(0x8003163Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v17; 
  int v18; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned int v27; 
  int v28; 
  unsigned int v29; 
  sint16 v30[16]; 

  sub_8002A190(a1 + 40, TM3_DRAFT_I16(dword_80089D14 + 74), TM3_DRAFT_I16(dword_80089D14 + 76), -2139062144, TM3_DRAFT_U32(dword_80089D14 + 80), a2, a3, 1, a4);
  sub_8005B8D4();
  sub_8005B614((uint32)a9, (uint32)a1, TM3_DRAFT_LOCAL_ADDRESS(&v23, sizeof(v23)));
  sub_8005BD24(TM3_DRAFT_LOCAL_ADDRESS(&v23, sizeof(v23)));
  sub_8005BDB4(TM3_DRAFT_LOCAL_ADDRESS(&v23, sizeof(v23)));
  v17 = TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 64) + 4 * TM3_DRAFT_U16(a1 + 60) + 8);
  v30[8] = -70;
  v30[0] = -70;
  v30[12] = 70;
  v30[4] = 70;
  v30[6] = -400;
  v30[2] = -400;
  v30[14] = 0;
  v30[10] = 0;
  v30[13] = 0;
  v30[9] = 0;
  v30[5] = 0;
  v30[1] = 0;
  tail_result = sub_8002A72C((int)v30, 8421504, v17, a2, a3, 1, a4, 64);
  sub_8005B978();
  return tail_result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80040C04(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6)
{
    sint32 attenuation, gain, pan, left, right;
    uint32 sign = (uint32)((sint32)a4 >> 31);
    FUNCTION_MARKER(0x80040C04u, "SCUS_942.49");
    if ((sint32)a1 < 1024)
        attenuation = (sint32)(a1 << 3);
    else
    {
        uint32 delta = a1 - 1023u;
        attenuation = (sint32)(delta + (uint32)((sint32)delta / 2) + 8184u);
    }
    if (attenuation >= 24576) attenuation = 24575;
    gain = (sint32)(24575u - (uint32)attenuation);
    if (a2 & 0xFFFFu)
    {
        gain = (sint32)((uint32)gain * (a2 & 0xFFFFu)) / 256;
        if (gain >= 24576) gain = 24575;
    }
    pan = (sint32)sub_8005CD64(a3, (uint32)((sint32)((a4 ^ sign) - sign) / 8));
    left = (sint32)((uint32)gain * (1024u - (uint32)pan)) / 2048;
    right = (sint32)((uint32)gain * ((uint32)pan + 1024u)) / 2048;
    if (left >= 24576) left = 24575;
    if (right >= 24576) right = 24575;
    if ((sint32)a4 < 0)
    {
        if (right >= left) right = (sint32)(0u - (uint32)right);
        else left = (sint32)(0u - (uint32)left);
    }
    TM3_DRAFT_U16(a5) = (uint16)left;
    TM3_DRAFT_U16(a6) = (uint16)right;
    return (uint32)gain;
}

/* Unverified decompiler-derived draft */
void sub_8004A734()
{
    FUNCTION_MARKER(0x8004A734u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 ida_A0, ida_A1, ida_A2, ida_V0; /* TODO Explicit adapter values */
  int i; 
  int j; 
  int v2; 
  int k; 
  int v4; 
  sint32 m; 
  int v6; 
  int v9; 

  for ( i = dword_8008989C; i; i = TM3_DRAFT_U32(i + 20) )
  {
    for ( j = TM3_DRAFT_U32(i + 16); j; j = TM3_DRAFT_U32(j + 16) )
    {
      v2 = TM3_DRAFT_U32(j + 16);
      for ( k = 0; ; ++k )
      {
        for ( m = k < 4; v2; m = k < 4 )
        {
          v6 = TM3_DRAFT_U32(v2 + 24);
          ida_A0 = TM3_DRAFT_I16(j + 28) - TM3_DRAFT_I16(v2 + 28);
          ida_A1 = TM3_DRAFT_I16(j + 30) - TM3_DRAFT_I16(v2 + 30);
          v9 = TM3_DRAFT_U32(j + 24);
          ida_A2 = TM3_DRAFT_I16(j + 32) - TM3_DRAFT_I16(v2 + 32);
          /* TODO GTE adapters */
  tm3_draft_gte_write_data(9u, ida_A0);
  tm3_draft_gte_write_data(10u, ida_A1);
  tm3_draft_gte_write_data(11u, ida_A2);
  tm3_draft_gte_command(0xA00428u);
          if ( v9 >= 0 && v6 >= 0 )
          {
            /* TODO GTE adapters */
  ida_V0 = tm3_draft_gte_read_data(25u);
  ida_A1 = tm3_draft_gte_read_data(26u);
  ida_A2 = tm3_draft_gte_read_data(27u);
            if ( ida_V0 + ida_A1 + ida_A2 < (v9 + v6) * (v9 + v6) )
              sub_8004A6AC((uint32)j, (uint32)v2);
          }
          v2 = TM3_DRAFT_U32(v2 + 16);
        }
        if ( !m )
          break;
        v4 = TM3_DRAFT_U32(i + 4 * k + 24);
        v2 = 0;
        if ( v4 )
          v2 = TM3_DRAFT_U32(v4 + 16);
      }
    }
  }
}

/* Unverified decompiler-derived draft */
uint32 sub_80035D74(uint32 a1, uint32 a2)
{
  union { uint64 align; uint8 bytes[0x38u]; } native_local_storage;
  uint8 *native_locals = native_local_storage.bytes;
  /* Original adjacent local buffers share one native storage area */
#define v16 (*((int *)(native_locals + 0x10u)))
#define v17 (*((int *)(native_locals + 0x14u)))
#define v18 (*((int *)(native_locals + 0x18u)))
    FUNCTION_MARKER(0x80035D74u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v3; 
  sint16 v4; 
  sint16 v5; 
  sint16 v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  char v14; 



  v3 = TM3_DRAFT_I32(a2);
  v4 = TM3_DRAFT_U16(TM3_DRAFT_I32(a2) + 4);
  v5 = TM3_DRAFT_U16(TM3_DRAFT_I32(a2) + 6);
  v6 = TM3_DRAFT_U16(TM3_DRAFT_I32(a2) + 8);
  TM3_DRAFT_U16(a1 - 20) = v4;
  v7 = a1 - 20;
  TM3_DRAFT_U16(v7 + 2) = v5;
  TM3_DRAFT_U16(v7 + 4) = v6;
  v8 = TM3_DRAFT_I16(v3 + 24);
  v9 = TM3_DRAFT_I16(v3 + 16);
  v10 = TM3_DRAFT_I16(v3 + 22) - TM3_DRAFT_I16(v3 + 14);
  v16 = TM3_DRAFT_I16(v3 + 20) - TM3_DRAFT_I16(v3 + 12);
  v17 = v10;
  v18 = v8 - v9;
  TM3_DRAFT_U16(a1 + 4) = sub_80013D64(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u));
  v11 = TM3_DRAFT_I16(v3 + 30);
  v12 = TM3_DRAFT_I16(v3 + 14);
  v13 = TM3_DRAFT_I16(v3 + 32) - TM3_DRAFT_I16(v3 + 16);
  v16 = TM3_DRAFT_I16(v3 + 28) - TM3_DRAFT_I16(v3 + 12);
  v18 = v13;
  v17 = v11 - v12;
  TM3_DRAFT_U16(a1 + 6) = sub_80013D64(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u));
  TM3_DRAFT_U32(a1) = v3 + 12;
  TM3_DRAFT_U32(a1 + 20) = TM3_DRAFT_U32(v3 + 52);
  TM3_DRAFT_U16(a1 + 8) = TM3_DRAFT_U16(v3 + 44);
  TM3_DRAFT_U8(a1 + 10) = TM3_DRAFT_U8(v3 + 46);
  TM3_DRAFT_U32(a1 + 16) = TM3_DRAFT_U32(v3 + 48);
  v14 = TM3_DRAFT_U8(v3 + 47);
  TM3_DRAFT_U16(a1 + 12) = 0;
  TM3_DRAFT_U8(a1 + 11) = v14;
  return 1;
}

#undef v16
#undef v17
#undef v18

/* Unverified decompiler-derived draft */
uint32 sub_80031FE8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80031FE8u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint16 v4; 
  sint16 v5; 
  sint16 v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  sint16 v22; 
  sint16 v23; 
  sint16 v24; 
  int v25; 

  v4 = TM3_DRAFT_U16(a1 + (5) * 2u);
  v5 = TM3_DRAFT_U16(a1 + (6) * 2u);
  v6 = TM3_DRAFT_U16(a1 + (4) * 2u);
  v25 = 48;
  v22 = v6;
  v23 = v4;
  v24 = v5;
  sub_800276AC((int)&v22, 0, 1024, a2, 0, -1);
  sub_800276AC((int)&v22, 1, 1024, a2, 0, -1);
  v23 -= 32;
  return sub_8004A294(9, (int)&v22, (int)&v25, 80, 1024, 384, 10, TM3_DRAFT_U32((a1 + (40) * 2u)));
}

/* Unverified decompiler-derived draft */
uint32 sub_80026008(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80026008u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 result; 
  int v8; 
  uint32 v9; 
  int v10; 
  int v11; 
  int v12; 

  TM3_DRAFT_I16(a3) = 0;
  TM3_DRAFT_I16(a4) = 0;
  result = sub_80025F98(a1, 0, a2);
  if ( result )
  {
    v8 = 0;
    if ( TM3_DRAFT_I16((result + (3) * 4u)) > 0 )
    {
      v9 = (uint32)(TM3_DRAFT_U32(a1 + 24) + 8 * TM3_DRAFT_I16((result + (2) * 4u)));
      do
      {
        v10 = abs16(TM3_DRAFT_I16(v9 + (2) * 2u));
        if ( TM3_DRAFT_I16(a3) < v10 )
          TM3_DRAFT_I16(a3) = v10;
        v11 = abs16(TM3_DRAFT_I16(v9 + (1) * 2u));
        if ( TM3_DRAFT_I16(a3) < v11 )
          TM3_DRAFT_I16(a3) = v11;
        v12 = abs16(TM3_DRAFT_I16(v9));
        if ( TM3_DRAFT_I16(a4) < v12 )
          TM3_DRAFT_I16(a4) = v12;
        ++v8;
        v9 += (4) * 2u;
      }
      while ( v8 < TM3_DRAFT_I16((result + (3) * 4u)) );
    }
    result = (uint32)(2 * TM3_DRAFT_I16(a4));
    TM3_DRAFT_I16(a4) = (sint16)result;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80039BA8(uint32 a1)
{
    FUNCTION_MARKER(0x80039BA8u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint16 v2; 
  uint16 v3; 
  uint16 v4; 
  uint32 v5; 
  uint16 v6; 
  sint16 v7; 
  sint16 v8; 
  sint16 v9; 
  sint16 v10; 
  sint16 v11; 
  int result; 
  char v13; 
  char v14; 
  int v15[8]; 

  v2 = TM3_DRAFT_U16(a1);
  v3 = TM3_DRAFT_U16(a1 + 2);
  v4 = TM3_DRAFT_U16(a1 + 4);
  v5 = (uint32)(a1 + 16);
  TM3_DRAFT_U16(v5) = v2;
  TM3_DRAFT_U16(v5 + (1) * 2u) = v3;
  TM3_DRAFT_U16(v5 + (2) * 2u) = v4;
  v6 = TM3_DRAFT_U16(a1);
  v7 = TM3_DRAFT_U16(a1 + 2);
  v8 = TM3_DRAFT_U16(a1 + 4);
  v9 = TM3_DRAFT_U16(a1 + 8);
  TM3_DRAFT_U16(a1 + 10) += 2;
  v10 = TM3_DRAFT_U16(a1 + 10);
  v11 = TM3_DRAFT_U16(a1 + 12);
  TM3_DRAFT_U16(a1) = v6 + v9;
  TM3_DRAFT_U16(a1 + 4) = v8 + v11;
  TM3_DRAFT_U16(a1 + 2) = v7 + v10;
  if ( sub_80013484(v5, (uint32)a1, 3u, v15) == 1 )
    sub_8004A570(a1);
  result = TM3_DRAFT_U8(a1 + 7) - 1;
  if ( TM3_DRAFT_I8(a1 + 7) != -1 )
  {
    TM3_DRAFT_U8(a1 + 7) = result;
    result <<= 24;
    if ( result < 0 )
    {
      v13 = TM3_DRAFT_U8(32 * TM3_DRAFT_U8(a1 + 27) + dword_80089C94 + 29);
      v14 = TM3_DRAFT_U8(a1 + 6) + 1;
      TM3_DRAFT_U8(a1 + 6) = v14;
      TM3_DRAFT_U8(a1 + 7) = v13;
      if ( v14 >= TM3_DRAFT_I8(32 * TM3_DRAFT_U8(a1 + 27) + dword_80089C94 + 28) )
        TM3_DRAFT_U8(a1 + 6) = 0;
      return sub_8003983C(a1);
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003DB80(uint32 a1)
{
    FUNCTION_MARKER(0x8003DB80u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  int v3; 
  uint32 v4; 

  if ( TM3_DRAFT_U32(0x80089DACu + (8) * 4u) == 2 )
    goto LABEL_5;
  TM3_DRAFT_U32(0x80089DACu + (3) * 4u) += 2;
  if ( TM3_DRAFT_U32(0x80089DACu + (3) * 4u) >= TM3_DRAFT_U32(0x800d2e88u) )
  {
    v2 = TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089DACu + (2) * 4u));
    TM3_DRAFT_U32(0x80089DACu + (3) * 4u) = 0;
    TM3_DRAFT_U32(0x80089DACu + (2) * 4u) = a1 + 145288 * (v2 ^ 1);
  }
  v3 = TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089DACu + (1) * 4u)) ^ 1;
  v4 = (uint32)(a1 + 145288 * v3);
  TM3_DRAFT_U32(0x80089DACu + (1) * 4u) = a1 + 145288 * v3;
  TM3_DRAFT_U32(v4 + (33423) * 4u) = (unsigned int)((v4 + (33231) * 4u));
  TM3_DRAFT_U32(v4 + (33230) * 4u) = (unsigned int)((v4 + (30670) * 4u));
  sub_80057C3C((v4 + (22) * 4u), 2048);
  if ( TM3_DRAFT_U32(0x80089DACu + (8) * 4u) == 2 )
LABEL_5:
    TM3_DRAFT_U32(0x80089DACu + (8) * 4u) = 0;
  if ( TM3_DRAFT_U32(0x80089DACu + (8) * 4u) == 1 )
    TM3_DRAFT_U32(0x80089DACu + (8) * 4u) = 2;
  return TM3_DRAFT_U32(0x80089DACu + (1) * 4u);
}

/* Unverified decompiler-derived draft */
uint32 sub_80028C74(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80028C74u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v3; 
  sint16 v4; 
  sint16 v5; 
  int v6; 
  sint16 v7; 
  int v8; 
  int v10; 
  int vars0; 
  int _1C; 

  v3 = TM3_DRAFT_I32(a2);
  TM3_DRAFT_U16(a1) = TM3_DRAFT_U16(TM3_DRAFT_I32(a2) + 4);
  TM3_DRAFT_U16(a1 + 2) = TM3_DRAFT_U16(v3 + 6);
  v4 = TM3_DRAFT_U16(v3 + 8);
  v5 = TM3_DRAFT_U16(a1 + 2);
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U16(a1);
  v6 = a1 - 20;
  TM3_DRAFT_U16(a1 + 4) = v4;
  TM3_DRAFT_U16(v6 + 2) = v5;
  TM3_DRAFT_U16(v6 + 4) = v4;
  TM3_DRAFT_U8(a1 + 6) = 0;
  LOBYTE(v5) = TM3_DRAFT_U8(v3 + 13);
  TM3_DRAFT_U8(a1 + 10) = 10;
  TM3_DRAFT_U8(a1 + 11) = 10;
  TM3_DRAFT_U8(a1 + 8) = 0;
  TM3_DRAFT_U8(a1 + 9) = 0;
  TM3_DRAFT_U8(a1 + 13) = 20;
  TM3_DRAFT_U8(a1 + 7) = v5;
  TM3_DRAFT_U32(a1 + 24) = dword_80089CF0 + 104 * TM3_DRAFT_U8(v3 + 12);
  TM3_DRAFT_U16(a1 + 14) = TM3_DRAFT_U16(v3 + 16);
  v7 = TM3_DRAFT_U16(v3 + 18);
  TM3_DRAFT_U8(a1 + 18) = 0x80;
  TM3_DRAFT_U8(a1 + 19) = 0x80;
  TM3_DRAFT_U8(a1 + 20) = 0x80;
  TM3_DRAFT_U8(a1 + 21) = 0;
  TM3_DRAFT_U16(a1 + 16) = v7;
  v8 = TM3_DRAFT_U16(a1 + 14) << 16;
  TM3_DRAFT_U8(a1 + 12) = TM3_DRAFT_U8(v3 + 14);
  TM3_DRAFT_U32(a1 - 24) = (int)((v8 >> 16) + ((unsigned int)v8 >> 31)) >> 1;
  sub_8004A294(22, TM3_DRAFT_U8(a1 + 11), 5, a1, 1400);
  return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004B75C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004B75Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v3; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 

  v11 = TM3_DRAFT_I16(a2);
  v12 = TM3_DRAFT_I16(a2 + (1) * 2u);
  v13 = TM3_DRAFT_I16(a2 + (2) * 2u);
  v7 = (uint16)TM3_DRAFT_I16(a2 + (4) * 2u);
  HIWORD(v8) = TM3_DRAFT_I16(a2 + (5) * 2u);
  LOWORD(v10) = TM3_DRAFT_I16(a2 + (6) * 2u);
  LOWORD(v6) = TM3_DRAFT_I16(a2 + (6) * 2u);
  LOWORD(v9) = -TM3_DRAFT_I16(a2 + (4) * 2u);
  sub_800150FC((int)&v6, 2, 0);
  sub_80023EC0(a1, TM3_DRAFT_LOCAL_ADDRESS(&v6, sizeof(v6)));
  v3 = TM3_DRAFT_U32(a1 + (981) * 4u);
  if ( v3 < TM3_DRAFT_U32(0x800d2e88u) )
    TM3_DRAFT_U32(108 * v3 - 2146624064 + 96) = 1;
  sub_8001A728((int)a1);
  sub_8004A294(22, 11, 5, (int)a1, 1600);
  return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_80032C64(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80032C64u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint16 v3; 
  sint16 v4; 
  int v5; 
  int v7; 
  int v8; 
  int v9; 
  sint16 v10; 
  sint16 v11; 
  sint16 v12; 

  v7 = (TM3_DRAFT_U32(a1 + 2408) + TM3_DRAFT_U32(a1 + 2296)) / 2;
  v8 = (TM3_DRAFT_U32(a1 + 2412) + TM3_DRAFT_U32(a1 + 2300)) / 2;
  v9 = (TM3_DRAFT_U32(a1 + 2416) + TM3_DRAFT_U32(a1 + 2304)) / 2;
  v3 = TM3_DRAFT_U16(a1 + 1546);
  v4 = TM3_DRAFT_U16(a1 + 1552);
  v10 = TM3_DRAFT_U16(a1 + 1540);
  v11 = v3;
  v12 = v4;
  v5 = sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS(&v7, sizeof(v7)), TM3_DRAFT_LOCAL_ADDRESS(&v10, sizeof(v10)));
  sub_80013FB4((int)&v7, (v5 + 2048) >> 12, TM3_DRAFT_LOCAL_ADDRESS(&v10, sizeof(v10)));
  v10 = v7;
  v11 = v8;
  v12 = v9;
  TM3_DRAFT_I16(a2 + (2) * 2u) = 0;
  TM3_DRAFT_I16(a2 + (1) * 2u) = 0;
  TM3_DRAFT_I16(a2) = 0;
  return sub_800140C8(a2, 136, TM3_DRAFT_LOCAL_ADDRESS(&v10, sizeof(v10)), a2);
}

/* Unverified decompiler-derived draft */
uint32 sub_80031104(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9, uint32 a10, uint32 a11, uint32 a12, uint32 a13)
{
    FUNCTION_MARKER(0x80031104u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int result; 
  int v18; 
  int v19; 
  int v20[8]; 

  if ( TM3_DRAFT_U8(a1 + 321) == 1 )
    sub_8002E2D4(a1, a2, a3, a4);
  result = TM3_DRAFT_U16(a1 + 110);
  if ( !TM3_DRAFT_U16(a1 + 110) )
  {
    sub_8005B8D4();
    sub_8005B614((uint32)a9, (uint32)(a1 + 116), v20);
    sub_8005BD24(v20);
    sub_8005BDB4(v20);
    sub_80029660((uint32)(dword_80089D14 + 32), TM3_DRAFT_U32(dword_80089D14 + 912), TM3_DRAFT_U32(dword_80089D14 + 916), 0, a2, a3, a4);
    sub_8005B978();
    result = TM3_DRAFT_U8(a1 + 335);
    if ( TM3_DRAFT_U8(a1 + 335) )
      return sub_8002E6CC(a1, a2, a3, a4);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80018B0C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80018B0Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint16 v3; 
  sint16 v4; 
  sint16 v5; 
  int v6; 
  int v7; 
  uint32 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v14; 
  int v15; 
  int v16[4]; 

  v3 = TM3_DRAFT_U16(a1 + 1540);
  v4 = TM3_DRAFT_U16(a1 + 1546);
  v5 = TM3_DRAFT_U16(a1 + 1552);
  TM3_DRAFT_U32(a1 + 4388) = a2;
  LOWORD(v14) = v3;
  HIWORD(v14) = v4;
  LOWORD(v15) = v5;
  if ( TM3_DRAFT_U32(a1 + 4388) == 1 )
  {
    LOWORD(v14) = -v3;
    HIWORD(v14) = -v4;
    LOWORD(v15) = -v5;
  }
  sub_80013F78((int)v16, 4096, (sint16 *)&v14);
  v6 = 0;
  v7 = 1592;
  do
  {
    v8 = (uint32)(a1 + v7);
    v7 += 112;
    ++v6;
    v9 = TM3_DRAFT_U32(v8 + (12) * 4u);
    v10 = v16[1];
    v11 = TM3_DRAFT_U32(v8 + (13) * 4u) + v16[2];
    TM3_DRAFT_U32(v8 + (11) * 4u) += v16[0];
    TM3_DRAFT_U32(v8 + (13) * 4u) = v11;
    TM3_DRAFT_U32(v8 + (12) * 4u) = v9 + v10;
  }
  while ( v6 < 8 );
  v12 = TM3_DRAFT_U32(a1 + 4040);
  TM3_DRAFT_U32(a1 + 4384) = 60;
  return sub_8004A294(22, TM3_DRAFT_U8(v12 + 55), 1, a1);
}

/* Unverified decompiler-derived draft */
uint32 sub_800403DC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6)
{
    union { uint64 align; uint8 bytes[0x3Cu]; } storage;
    uint32 attr = TM3_DRAFT_LOCAL_ADDRESS(storage.bytes, sizeof(storage.bytes));
    uint32 voice = 1u << (a3 & 31u);
    uint32 sample = 0x800D1FE8u + (a1 << 4);
    uint32 product;
    sint32 offset;
    FUNCTION_MARKER(0x800403DCu, "SCUS_942.49");
    sub_80061574(0u, voice);
    TM3_DRAFT_U32(attr) = voice;
    TM3_DRAFT_U32(attr + 4u) = 0x93u;
    TM3_DRAFT_U16(attr + 20u) = (uint16)a4;
    product = TM3_DRAFT_U32(sample + 12u) * a2 + 2048u;
    offset = (sint32)product >> 12;
    TM3_DRAFT_U32(attr + 28u) = TM3_DRAFT_U32(sample) + ((uint32)offset << 3);
    TM3_DRAFT_U16(attr + 8u) = (uint16)((sint32)(a5 * TM3_DRAFT_U32(0x8008982Cu)) / 16);
    TM3_DRAFT_U16(attr + 10u) = (uint16)((sint32)(a6 * TM3_DRAFT_U32(0x8008982Cu)) / 16);
    return sub_80061734(attr);
}

/* Unverified decompiler-derived draft */
uint32 sub_8001AF24(uint32 a1)
{
    FUNCTION_MARKER(0x8001AF24u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  int v3; 
  uint32 result; 
  uint32 v5; 
  sint32 v6; 

  v2 = TM3_DRAFT_I8(a1 + 3329);
  if ( v2 == 1 || v2 == 3 || v2 == 4 || v2 == 5 )
  {
    v3 = TM3_DRAFT_I16(a1 + 3344);
    result = 0;
    if ( TM3_DRAFT_I16(a1 + 3916) >= v3 )
    {
      v5 = TM3_DRAFT_U32(a1 + 3684);
      if ( !v5 || (v6 = TM3_DRAFT_I16(v5 + 3344) < v3, result = 0, !v6) )
      {
        if ( sub_8001C0AC(a1) )
        {
          sub_8001A8C4(a1, 0, 0);
          TM3_DRAFT_U8(a1 + 3329) = 2;
          return 0x8001CA04u;
        }
        return 0;
      }
    }
  }
  else
  {
    result = 0;
    if ( v2 == 2 )
    {
      result = 0;
      if ( TM3_DRAFT_I16(a1 + 3916) < TM3_DRAFT_I16(a1 + 3344) )
      {
        if ( sub_8001C23C(a1) )
          return 0x8001CA04u;
        return 0;
      }
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80038E30(uint32 a1)
{
    FUNCTION_MARKER(0x80038E30u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint16 v1; 
  sint16 v2; 
  int result; 
  char v4; 
  char v5; 

  v1 = TM3_DRAFT_U16(a1 + 14);
  v2 = TM3_DRAFT_U16(a1 + 10) + v1;
  TM3_DRAFT_U16(a1 + 10) = v2;
  if ( v1 < 0 )
  {
    if ( (v2 & 0x8000) != 0 )
      return sub_8004A570(a1);
  }
  else
  {
    TM3_DRAFT_U16(a1 + 8) += 129;
  }
  TM3_DRAFT_U16(a1 + 14) -= 16;
  result = TM3_DRAFT_U8(a1 + 7) - 1;
  if ( TM3_DRAFT_I8(a1 + 7) != -1 )
  {
    TM3_DRAFT_U8(a1 + 7) = result;
    result <<= 24;
    if ( result < 0 )
    {
      v4 = TM3_DRAFT_U8(32 * TM3_DRAFT_U8(a1 + 13) + dword_80089C94 + 22);
      v5 = TM3_DRAFT_U8(a1 + 6) + 1;
      TM3_DRAFT_U8(a1 + 6) = v5;
      TM3_DRAFT_U8(a1 + 7) = v4;
      if ( v5 >= TM3_DRAFT_I8(32 * TM3_DRAFT_U8(a1 + 13) + dword_80089C94 + 21) )
        TM3_DRAFT_U8(a1 + 6) = 0;
      return sub_80038B10(a1);
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80040B30(uint32 a1)
{
  union { uint64 align; uint8 bytes[0x58u]; } native_local_storage;
  uint8 *native_locals = native_local_storage.bytes;
  /* Original adjacent local buffers share one native storage area */
#define v3 ((int *)(native_locals + 0x10u))
#define v4 (*((sint16 *)(native_locals + 0x18u)))
#define v5 (*((sint16 *)(native_locals + 0x1Au)))
#define v6 (*((sint16 *)(native_locals + 0x24u)))
#define v7 (*((int *)(native_locals + 0x2Cu)))
#define v8 (*((int *)(native_locals + 0x34u)))
#define v9 (*((int *)(native_locals + 0x38u)))
#define v10 (*((int *)(native_locals + 0x3Cu)))
#define v11 (*((sint16 *)(native_locals + 0x40u)))
#define v12 (*((sint16 *)(native_locals + 0x42u)))
#define v13 (*((sint16 *)(native_locals + 0x44u)))
#define v14 (*((sint16 *)(native_locals + 0x46u)))
#define v15 (*((sint16 *)(native_locals + 0x48u)))
    FUNCTION_MARKER(0x80040B30u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */



  sub_800607C4();
  sub_80062454(0x3FFF, 0x3FFF);
  sub_80062494(1);
  sub_80061824(0);
  if ( a1 )
    TM3_DRAFT_U32(0x8008982Cu + (1) * 4u) = (sint16)sub_800408DC(a1, 0);
  else
    TM3_DRAFT_U32(0x8008982Cu + (1) * 4u) = 0;
  v3[0] = 0xFFFFFF;
  v3[1] = 65427;
  v4 = 0x1FFF;
  v5 = 0x1FFF;
  v6 = 3840;
  v8 = 1;
  v9 = 1;
  v10 = 3;
  v7 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 15;
  TM3_DRAFT_U32(0x8008982Cu + (2) * 4u) = TM3_DRAFT_U32(0x8008982Cu + (1) * 4u);
  sub_80061B64((int)v3);
  return TM3_DRAFT_U32(0x8008982Cu + (1) * 4u);
}

#undef v3
#undef v4
#undef v5
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15

/* Unverified decompiler-derived draft */
uint32 sub_80032AA4(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9, uint32 a10, uint32 a11, uint32 a12, uint32 a13)
{
    FUNCTION_MARKER(0x80032AA4u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int result; 
  int v18; 
  int v19; 
  int v20[8]; 

  result = TM3_DRAFT_U16(a1 + 110);
  if ( !TM3_DRAFT_U16(a1 + 110) )
  {
    sub_8005B8D4();
    sub_8005B614((uint32)a9, (uint32)(a1 + 116), v20);
    sub_8005BD24(v20);
    sub_8005BDB4(v20);
    sub_80029660((uint32)(dword_80089D14 + 8), TM3_DRAFT_U32(dword_80089D14 + 912), TM3_DRAFT_U32(dword_80089D14 + 916), 0, a2, a3, a4);
    sub_8005B978();
    result = TM3_DRAFT_U8(a1 + 335);
    if ( TM3_DRAFT_U8(a1 + 335) )
      return sub_8002E6CC(a1, a2, a3, a4);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80013D08(uint32 a1)
{
    uint64 sum = 0;
    uint32 high, low, shift, remaining, result = 0, remainder = 0;
    uint32 i;
    FUNCTION_MARKER(0x80013D08u, "SCUS_942.49");
    for (i = 0; i < 3u; ++i)
    {
        sint64 component = TM3_DRAFT_I32(a1 + i * 4u);
        sum += (uint64)(component * component);
    }
    high = (uint32)(sum >> 32);
    low = (uint32)sum;
    tm3_draft_gte_write_data(30u, high);
    shift = (uint32)((sint32)tm3_draft_gte_read_data(31u) >> 1);
    remaining = 32u - shift;
    shift <<= 1;
    /* Variable MIPS shifts use the low five bits */
    high = (high << (shift & 31u)) | (low >> ((32u - shift) & 31u));
    low <<= shift & 31u;
    do
    {
        uint32 trial;
        remainder |= high >> 30;
        high = (high << 2) | (low >> 30);
        low <<= 2;
        result <<= 1;
        trial = (result << 1) + 1u;
        --remaining;
        if ((sint32)remainder >= (sint32)trial)
        {
            remainder -= trial;
            ++result;
        }
        remainder <<= 2;
    }
    while (remaining);
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003983C(uint32 a1)
{
    FUNCTION_MARKER(0x8003983Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v1; 
  int v2; 
  int v3; 
  int v4; 
  char v5; 
  char v6; 
  char v7; 
  char v8; 
  int result; 

  v1 = TM3_DRAFT_I8(32 * TM3_DRAFT_U8(a1 + 27) + dword_80089C94 + 27) + TM3_DRAFT_I8(a1 + 6);
  v2 = 8 * v1;
  v3 = TM3_DRAFT_U8(a1 + 26);
  v4 = 8 * v1 + dword_80089CB8;
  TM3_DRAFT_U16(a1 + 34) = TM3_DRAFT_U16(v4 + 2);
  TM3_DRAFT_U16(a1 + 38) = TM3_DRAFT_U16(v4 + 6);
  if ( v3 )
  {
    v5 = TM3_DRAFT_U8(v4 + 4);
    TM3_DRAFT_U8(a1 + 40) = v5;
    TM3_DRAFT_U8(a1 + 32) = v5;
    v6 = TM3_DRAFT_U8(v2 + dword_80089CB8);
  }
  else
  {
    v7 = TM3_DRAFT_U8(v4);
    TM3_DRAFT_U8(a1 + 40) = TM3_DRAFT_U8(v4);
    TM3_DRAFT_U8(a1 + 32) = v7;
    v6 = TM3_DRAFT_U8(v2 + dword_80089CB8 + 4);
  }
  TM3_DRAFT_U8(a1 + 42) = v6;
  TM3_DRAFT_U8(a1 + 36) = v6;
  v8 = TM3_DRAFT_U8(8 * v1 + dword_80089CB8 + 1);
  TM3_DRAFT_U8(a1 + 37) = v8;
  TM3_DRAFT_U8(a1 + 33) = v8;
  result = TM3_DRAFT_U8(8 * v1 + dword_80089CB8 + 5);
  TM3_DRAFT_U8(a1 + 43) = result;
  TM3_DRAFT_U8(a1 + 41) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003E888(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x8003E888u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v5; 
  int result; 
  uint32 v8; 

  v5 = 28 * a1 - 2146624480;
  result = TM3_DRAFT_U8(v5 + 2);
  if ( TM3_DRAFT_U8(v5 + 2) )
  {
    TM3_DRAFT_U8(v5 + 1) = a2;
    TM3_DRAFT_U16(v5 + 24) = a2;
    if ( a4 <= 0 )
      TM3_DRAFT_U32(v5 + 20) = 0;
    else
      TM3_DRAFT_U32(v5 + 20) = ((a3 - a2) << 12) / a4;
    v8 = (uint32)(28 * a1 - 2146624480);
    TM3_DRAFT_U32(v8 + (3) * 4u) = sub_80039FC8();
    if ( a4 < 2 )
    {
      result = sub_80039FC8() + a4;
      TM3_DRAFT_U32(v8 + (4) * 4u) = result;
      TM3_DRAFT_U32(v8 + (2) * 4u) = result;
    }
    else
    {
      TM3_DRAFT_U32(v8 + (2) * 4u) = sub_80039FC8() + 1;
      result = sub_80039FC8() + a4;
      TM3_DRAFT_U32(v8 + (4) * 4u) = result;
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
void sub_8004A0F8(uint32 a1)
{
    FUNCTION_MARKER(0x8004A0F8u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v1; 
  uint32 v2; 
  uint32 v3; 
  sint32 v4; 

  v1 = (uint32)(a1 - 8);
  v2 = (uint32)(a1 - 8);
  if ( dword_80089890 )
  {
    if ( (unsigned int)v1 >= dword_80089890 )
    {
      v3 = (uint32)dword_80089890;
      if ( !TM3_DRAFT_U32(dword_80089890) )
        goto LABEL_11;
      v4 = dword_80089890 < (unsigned int)v2;
      do
      {
        if ( v4 && (unsigned int)v2 < TM3_DRAFT_U32(v3) )
          break;
        v3 = TM3_DRAFT_U32(v3);
        v4 = v3 < v2;
      }
      while ( TM3_DRAFT_U32(v3) );
      if ( TM3_DRAFT_U32(v3) )
        sub_8004A0BC((uint32)(a1 - 8), TM3_DRAFT_U32(v3));
      else
LABEL_11:
        TM3_DRAFT_U32(v2) = 0;
      sub_8004A0BC(v3, v2);
    }
    else
    {
      sub_8004A0BC((uint32)(a1 - 8), (uint32)dword_80089890);
      dword_80089890 = (int)v1;
    }
  }
  else
  {
    dword_80089890 = a1 - 8;
    TM3_DRAFT_U32(v1) = 0;
  }
}

/* Unverified decompiler-derived draft */
uint32 sub_8001C91C(uint32 a1)
{
    FUNCTION_MARKER(0x8001C91Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint16 v2; 
  int v3; 
  int v4; 
  int result; 
  sint16 v6; 

  v2 = TM3_DRAFT_U16(a1 + 3372) - TM3_DRAFT_U16(a1 + 3348);
  v6 = TM3_DRAFT_U16(a1 + 3374) - TM3_DRAFT_U16(a1 + 3350);
  v3 = (int)(sub_8005B124(v2 * v2 + v6 * v6) << 12) / TM3_DRAFT_I16(a1 + 3392);
  if ( v3 < 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 4096;
    if ( v3 < 4097 )
      v4 = v3;
  }
  result = TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 84) * v4 / 4096;
  TM3_DRAFT_U16(a1 + 3331) = (uint8)result;
  return result;
}

/* Unverified decompiler-derived draft */
void sub_8004A410(uint32 a1)
{
    FUNCTION_MARKER(0x8004A410u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v2; /* TODO Guest callback signature */ 
  uint32 v3; 
  uint32 v4; 

  v2 = (void ( *)(uint32))TM3_DRAFT_U32(0x8007F2A0u + (5 * TM3_DRAFT_U32(a1) + 4) * 4u);
  if ( v2 )
    tm3_draft_indirect(v2, 1u, a1 + 48u);
  if ( TM3_DRAFT_U32(a1) == 22 )
  {
    sub_8004A1EC((int)a1, 0x80089898u);
  }
  else
  {
    sub_8004A1EC((int)a1, 0x80089894u);
    v3 = (uint32)dword_80089898;
    if ( dword_80089898 )
    {
      do
      {
        v4 = (uint32)TM3_DRAFT_U32(v3 + (2) * 4u);
        if ( (uint32)(TM3_DRAFT_U32(v3 + (13) * 4u) - 48) == a1 )
          sub_8004A410(v3);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  sub_8004A0F8((int)a1);
}

/* Unverified decompiler-derived draft */
uint32 sub_8002F2A8(uint32 a1)
{
    FUNCTION_MARKER(0x8002F2A8u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int vars0; 
  int vars4; 
  int vars8; 

  sub_800276AC(a1, 0, 1200, 0, (int)&v5, -1);
  LOWORD(v6) = 0;
  sub_800276AC(a1, 1, 1200, 0, (int)&v5, -1);
  return sub_8004A294(5, a1, (int)&v7, (int)&v8);
}

/* Unverified decompiler-derived draft */
uint32 sub_80028E84(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80028E84u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v5; 
  int v6; 
  int result; 
  int v8; 
  sint16 v9; 
  sint16 v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int vars0; 

  v5 = TM3_DRAFT_U32(a1 + 24);
  v6 = TM3_DRAFT_U8(a1 + 21);
  result = v6 < TM3_DRAFT_I16(v5);
  if ( v6 < TM3_DRAFT_I16(v5) )
  {
    v8 = TM3_DRAFT_U32(v5 + (2 * v6 + 4) * 2u);
    v9 = TM3_DRAFT_U16(a1 - 20 + 2);
    v10 = TM3_DRAFT_U16(a1 - 20 + 4);
    LOWORD(v12) = TM3_DRAFT_U16(a1 - 20);
    HIWORD(v12) = v9;
    LOWORD(v13) = v10;
    HIWORD(v12) = v9 - TM3_DRAFT_I16(a1 + 16) / 2;
    return sub_8002A190((int)&v12, TM3_DRAFT_I16(a1 + 14), TM3_DRAFT_I16(a1 + 16), 3158064, v8, a2, a3, 1, a4);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80039EC0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80039EC0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v4; 
  unsigned int v5; 

  sub_8004352C();
  if ( TM3_DRAFT_U32(0x800d2e8cu) )
    sub_800473BC(0, 2);
  if ( !TM3_DRAFT_U32(0x800d2f14u) )
    TM3_DRAFT_U32(0x800d2f14u) = 1;
  sub_80057750(0);
  v5 = sub_8003B2A0(a1, TM3_DRAFT_U32(0x800d2f14u) - 1, a2);
  sub_80057750(0);
  TM3_DRAFT_U32(0x800d2f14u) = 0;
  if ( TM3_DRAFT_U32(0x800d2e8cu) )
    sub_800473BC(1, (int)0x8007EA0Cu, 5);
  sub_800434F0();
  return v5;
}

/* Unverified decompiler-derived draft */
uint32 sub_80032118(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80032118u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v4; 
  uint32 v5; 
  int v7; 
  int v8; 
  int v9; 
  sint16 v10[4]; 
  char v11[32]; 

  v4 = sub_8002E964(a2, a1, (int)v11);
  sub_80026B88(a1, 2, v10);
  v5 = sub_8004A294(8, 15, 15, a1, v4, (int)v10, (int)v11, a2);
  if ( v5 )
    TM3_DRAFT_I32(v5 + (21) * 4u) = 0;
  return sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 55), 5, a1, 1200);
}

/* Unverified decompiler-derived draft */
void sub_8004A9B0(uint32 a1)
{
    FUNCTION_MARKER(0x8004A9B0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v1; 
  uint32 v2; 
  uint32 v3; /* TODO Guest callback signature */ 
  uint32 v4; 

  v1 = a1;
  v2 = a1;
  if ( !a1 )
    goto LABEL_12;
  do
  {
    if ( !TM3_DRAFT_U32(v1 + (5) * 4u) )
    {
      v3 = (void ( *)(uint32))TM3_DRAFT_U32(v1 + (10) * 4u);
      if ( v3 )
        tm3_draft_indirect(v3, 1u, v1 + 48u);
    }
    v1 = (uint32)TM3_DRAFT_U32(v1 + (2) * 4u);
  }
  while ( v1 );
  v4 = v2;
  while ( v4 )
  {
    v2 = (uint32)TM3_DRAFT_U32(v4 + (2) * 4u);
    if ( TM3_DRAFT_U32(v4 + (5) * 4u) )
    {
      sub_8004A410(v4);
      goto LABEL_12;
    }
    if ( TM3_DRAFT_U32(v4 + (11) * 4u) || TM3_DRAFT_U32(v4 + (9) * 4u) )
    {
      sub_8004A914(v4);
      v4 = v2;
    }
    else
    {
LABEL_12:
      v4 = v2;
    }
  }
}

/* Unverified decompiler-derived draft */
uint32 sub_800384BC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800384BCu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  uint32 v3; 
  uint32 v4; 
  int v5; 
  int v6; 
  char v7; 
  unsigned int result; 
  unsigned int v9; 
  unsigned int v10; 

  v2 = a1;
  v3 = TM3_DRAFT_U32(a2);
  v4 = TM3_DRAFT_I32(a2 + (3) * 4u);
  sub_80038444(a1, TM3_DRAFT_I32(a2), TM3_DRAFT_I32(a2 + (1) * 4u), TM3_DRAFT_I32(a2 + (2) * 4u));
  v5 = TM3_DRAFT_U32(v2 + 8);
  TM3_DRAFT_U32(v2 + 20) = TM3_DRAFT_U32(v2 + 4);
  TM3_DRAFT_U32(v2 + 24) = v5;
  v6 = TM3_DRAFT_U32(v2 + 16);
  TM3_DRAFT_U32(v2 + 28) = TM3_DRAFT_U32(v2 + 12);
  TM3_DRAFT_U32(v2 + 32) = v6;
  TM3_DRAFT_U32(v2) = 0;
  v7 = sub_80012388(TM3_DRAFT_U32(v3), TM3_DRAFT_U32(v3 + (2) * 4u));
  TM3_DRAFT_U8(v2 + 36) = 17 * v7;
  TM3_DRAFT_U8(v2 + 37) = 17 * v7;
  TM3_DRAFT_U8(v2 + 38) = (_BYTE)v4;
  result = TM3_DRAFT_U32(v3);
  v9 = TM3_DRAFT_U32(v3 + (1) * 4u);
  v10 = TM3_DRAFT_U32(v3 + (2) * 4u);
  TM3_DRAFT_U16(v2 - 20) = TM3_DRAFT_U32(v3);
  v2 -= 20;
  TM3_DRAFT_U16(v2 + 2) = v9;
  TM3_DRAFT_U16(v2 + 4) = v10;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80031DFC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80031DFCu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v4; 
  int v6; 
  int v7; 
  int v8; 
  sint16 v9[4]; 
  char v10[32]; 

  v4 = sub_8002E964(a2, a1, (int)v10);
  sub_80026B88(a1, 2, v9);
  sub_8004A294(8, 15, 17, a1, v4, (int)v9, (int)v10, a2);
  return sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 55), 5, a1, 1000);
}

/* Unverified decompiler-derived draft */
uint32 sub_80038398(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5)
{
    FUNCTION_MARKER(0x80038398u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v16; 
  int v17; 
  int v18; 
  int v19; 

  v16 = TM3_DRAFT_U32(a3 + (1) * 4u);
  v17 = TM3_DRAFT_U32(a3 + (2) * 4u);
  TM3_DRAFT_U16(a1) = TM3_DRAFT_U32(a3);
  TM3_DRAFT_U16(a1 + (1) * 2u) = v16;
  TM3_DRAFT_U16(a1 + (2) * 2u) = v17;
  sub_8001477C(a1, a4, a5 / 2, 12);
  v18 = TM3_DRAFT_U32(a3 + (1) * 4u);
  v19 = TM3_DRAFT_U32(a3 + (2) * 4u);
  TM3_DRAFT_U16(a2) = TM3_DRAFT_U32(a3);
  TM3_DRAFT_U16(a2 + (1) * 2u) = v18;
  TM3_DRAFT_U16(a2 + (2) * 2u) = v19;
  return sub_8001477C(a2, a4, ((a5 > 0) - a5) >> 1, 12);
}

/* Unverified decompiler-derived draft */
uint32 sub_80033754(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80033754u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v6; 
  sint16 v8[4]; 
  char v9[32]; 

  v6 = sub_8002E964(a3, a1, (int)v9);
  sub_80026B88(a1, 2, v8);
  return sub_8004A294(8, a2, TM3_DRAFT_I16(a1 + 16 * a2 + 4124), a1, v6, (int)v8, (int)v9, a3);
}

/* Unverified decompiler-derived draft */
uint32 sub_80027A58(uint32 a1)
{
    FUNCTION_MARKER(0x80027A58u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  uint32 v3; 
  uint8 v4; 
  sint16 v5; 
  sint16 v6; 
  sint16 v7; 
  int result; 
  sint16 v9; 

  v2 = a1 + 8;
  if ( TM3_DRAFT_U16(a1 + 14) >= (unsigned int)TM3_DRAFT_U16(a1 + 6) )
  {
    v3 = TM3_DRAFT_U32(a1 + 28);
    v4 = TM3_DRAFT_U8(a1 + 27) + 1;
    TM3_DRAFT_U8(a1 + 27) = v4;
    if ( v4 >= TM3_DRAFT_I16(v3) )
      sub_8004A570(a1);
    TM3_DRAFT_U16(a1 + 14) = 0;
    v2 = a1 + 8;
  }
  v5 = TM3_DRAFT_U16(a1 + 8);
  ++TM3_DRAFT_U16(a1 + 14);
  v6 = TM3_DRAFT_U16(v2 + 2);
  v7 = TM3_DRAFT_U16(v2 + 4);
  result = TM3_DRAFT_I16(a1 + 2);
  TM3_DRAFT_U16(a1 + 8) = v5 + TM3_DRAFT_U16(a1);
  v9 = TM3_DRAFT_U16(a1 + 4);
  TM3_DRAFT_U16(v2 + 2) = v6 + result;
  TM3_DRAFT_U16(v2 + 4) = v7 + v9;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001498C(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x8001498Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int result; 
  char v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 

  result = 32 - a4;
  v5 = a4 - 1;
  v6 = TM3_DRAFT_I32(a2 + (1) * 4u);
  v7 = TM3_DRAFT_I32(a2 + (2) * 4u);
  v8 = TM3_DRAFT_U32(a1 + (1) * 4u);
  v9 = TM3_DRAFT_U32(a1 + (2) * 4u);
  TM3_DRAFT_U32(a1) += (((unsigned int)(TM3_DRAFT_I32(a2) * a3) >> v5 >> 1) | ((uint64)(TM3_DRAFT_I32(a2) * (uint64)a3) >> 32 << result))
       + (((unsigned int)(TM3_DRAFT_I32(a2) * a3) >> v5) & 1);
  TM3_DRAFT_U32(a1 + (1) * 4u) = (((unsigned int)(v6 * a3) >> v5 >> 1) | ((uint64)(v6 * (uint64)a3) >> 32 << result))
        + (((unsigned int)(v6 * a3) >> v5) & 1)
        + v8;
  TM3_DRAFT_U32(a1 + (2) * 4u) = (((unsigned int)(v7 * a3) >> v5 >> 1) | ((uint64)(v7 * (uint64)a3) >> 32 << result))
        + (((unsigned int)(v7 * a3) >> v5) & 1)
        + v9;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80038A40(uint32 a1)
{
    uint32 result;
    FUNCTION_MARKER(0x80038A40u, "SCUS_942.49");
    if (TM3_DRAFT_I32(a1 + 36u) > 0)
    {
        uint32 count = TM3_DRAFT_U32(a1 + 32u) + 1u;
        TM3_DRAFT_U32(a1 + 32u) = count;
        if (TM3_DRAFT_I32(a1 + 36u) < (sint32)count)
            return sub_8004A570(a1);
    }
    result = TM3_DRAFT_U32(a1 + 12u) & 0x20u;
    if (result)
    {
        uint32 owner_position = TM3_DRAFT_U32(a1 + 4u) - 20u;
        uint16 previous_x = TM3_DRAFT_U16(a1 + 24u);
        uint16 previous_y = TM3_DRAFT_U16(a1 + 26u);
        uint16 previous_z = TM3_DRAFT_U16(a1 + 28u);
        TM3_DRAFT_U16(a1 + 16u) = previous_x;
        TM3_DRAFT_U16(a1 + 18u) = previous_y;
        TM3_DRAFT_U16(a1 + 20u) = previous_z;
        result = (uint32)(sint32)TM3_DRAFT_I16(owner_position);
        TM3_DRAFT_U16(a1 + 24u) = (uint16)result;
        TM3_DRAFT_U16(a1 + 26u) = TM3_DRAFT_U16(owner_position + 2u);
        TM3_DRAFT_U16(a1 + 28u) = TM3_DRAFT_U16(owner_position + 4u);
    }
    return result;
}

