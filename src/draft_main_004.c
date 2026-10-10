#include "game_draft_signatures.h"

/* Unverified drafts, pending guest buffers and original ABI integration */
extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

extern uint32 tm3_draft_local_address(const void *pointer, uint32 bytes);
#define TM3_DRAFT_LOCAL_ADDRESS(pointer, bytes) tm3_draft_local_address((pointer), (bytes))
#define dword_80089BE8 TM3_DRAFT_U32(0x80089BE8u)
#define byte_8007F004 TM3_DRAFT_U8(0x8007F004u)
#define byte_8007F264 TM3_DRAFT_U8(0x8007F264u)
#define byte_8007F270 TM3_DRAFT_U8(0x8007F270u)
#define byte_8007F018 TM3_DRAFT_U8(0x8007F018u)
#define dword_80089DAC TM3_DRAFT_U32(0x80089DACu)
#define dword_80089828 TM3_DRAFT_U32(0x80089828u)
#define dword_80089DD0 TM3_DRAFT_U32(0x80089DD0u)
#define dword_80086A30 TM3_DRAFT_U32(0x80086A30u)
#define dword_80086A10 TM3_DRAFT_U32(0x80086A10u)
#define dword_80086A0C TM3_DRAFT_U32(0x80086A0Cu)
#define dword_80086A2C TM3_DRAFT_U32(0x80086A2Cu)
#define dword_80086A1C TM3_DRAFT_U32(0x80086A1Cu)
#define dword_80086A04 TM3_DRAFT_U32(0x80086A04u)
#define dword_80086A14 TM3_DRAFT_U32(0x80086A14u)
#define dword_80086A18 TM3_DRAFT_U32(0x80086A18u)
#define dword_80086A20 TM3_DRAFT_U32(0x80086A20u)
#define dword_80086A24 TM3_DRAFT_U32(0x80086A24u)
#define dword_80086A28 TM3_DRAFT_U32(0x80086A28u)
#define dword_800869F8 TM3_DRAFT_U32(0x800869F8u)
#define dword_80089C94 TM3_DRAFT_U32(0x80089C94u)
#define dword_80089E04 TM3_DRAFT_U32(0x80089E04u)
#define dword_80089858 TM3_DRAFT_U32(0x80089858u)
#define dword_80089CBC TM3_DRAFT_U32(0x80089CBCu)
#define dword_80089C00 TM3_DRAFT_U32(0x80089C00u)
#define dword_80089D14 TM3_DRAFT_U32(0x80089D14u)
#define byte_80089D20 TM3_DRAFT_U8(0x80089D20u)
#define byte_80089D21 TM3_DRAFT_U8(0x80089D21u)
#define byte_80089D22 TM3_DRAFT_U8(0x80089D22u)
#define dword_80089838 TM3_DRAFT_U32(0x80089838u)
#define dword_80089CE8 TM3_DRAFT_U32(0x80089CE8u)
#define dword_80087E10 TM3_DRAFT_U32(0x80087E10u)
#define dword_80087E0C TM3_DRAFT_U32(0x80087E0Cu)
#define dword_80089768 TM3_DRAFT_U32(0x80089768u)
#define dword_8008976C TM3_DRAFT_U32(0x8008976Cu)

/* Unverified decompiler-derived draft */
uint32 sub_8004D344(uint32 a1, uint32 a2)
{
  uint32 text_storage[8], text, row, value, i, j, result;
  sint32 width=0, x, vertical;
  FUNCTION_MARKER(0x8004D344u, "SCUS_942.49");
  if (TM3_DRAFT_U32(0x800D1D14u+24u*TM3_DRAFT_U32(0x80089BECu)))
    return sub_80049284(0x80088A58u,0x8007F004u,160u,208u,a1,a1+0x20BC8u,20u,1u,1u);
  for(i=0u;(sint32)i<TM3_DRAFT_I32(a2);++i)
  {
    row=a2+8u*i;
    value=TM3_DRAFT_U32(row+4u);
    if(value) width=(sint32)((uint32)width+sub_80049130(0x8007F264u,value)+4u);
    value=TM3_DRAFT_U32(row+8u);
    if(value) width=(sint32)((uint32)width+sub_80049130(0x8007F004u,value)+8u);
  }
  x=(sint32)(328u-(uint32)width)/2;
  result=TM3_DRAFT_U32(a2);
  if((sint32)result<=0) return result;
  /* The original text scratch occupies offsets 0x28 through 0x47 */
  text=TM3_DRAFT_LOCAL_ADDRESS(text_storage,sizeof(text_storage));
  for(i=0u;(sint32)i<TM3_DRAFT_I32(a2);++i)
  {
    row=a2+8u*i;
    value=TM3_DRAFT_U32(row+4u);
    if(value)
    {
      j=0u;
      while(TM3_DRAFT_U8(value+j))
      {
        uint8 c=TM3_DRAFT_U8(value+j);
        if(TM3_DRAFT_U8(0x800D1D0Du+24u*TM3_DRAFT_U32(0x80089BECu))==1u)
        {
          if(c=='h') c='a';
          else if(c=='c') c='f';
        }
        TM3_DRAFT_U8(text+j)=c;
        ++j;
      }
      TM3_DRAFT_U8(text+j)=0u;
      vertical=((sint32)TM3_DRAFT_U8(0x8007F270u)-(sint32)TM3_DRAFT_U8(0x8007F018u))/2;
      x=(sint32)(sub_80049284(text,0x8007F264u,(uint32)x,208u-(uint32)vertical,a1,a1+88u,0u)+4u);
    }
    value=TM3_DRAFT_U32(row+8u);
    if(value) x=(sint32)(sub_80049284(value,0x8007F004u,(uint32)x,208u,a1,a1+88u,16u,1u,1u)+8u);
  }
  return 0u;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003DCCC(void)
{
    FUNCTION_MARKER(0x8003DCCCu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int result; 
  int v1; 
  int v2; 
  uint32 v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  uint32 v8; 
  uint32 v9; 
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
  int vars0; 
  int vars4; 
  int vars8; 
  int varsC; 

  result = TM3_DRAFT_U32(0x80089DACu + (8) * 4u);
  if ( !TM3_DRAFT_U32(0x80089DACu + (8) * 4u) )
  {
    if ( sub_8003DCA8(TM3_DRAFT_U32(0x800d2e88u) - 1) )
    {
      sub_80041C94(TM3_DRAFT_U32(0x80089DACu + (1) * 4u));
      v1 = TM3_DRAFT_U32(0x80089DACu + (2) * 4u);
      v2 = TM3_DRAFT_U32(0x80089DACu + (1) * 4u);
      TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089DACu + (2) * 4u) + 24) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089DACu + (2) * 4u) + 24) & 0xFF000000 | TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089DACu + (1) * 4u) + 88) & 0xFFFFFF;
      TM3_DRAFT_U32(v2 + 88) = TM3_DRAFT_U32(v2 + 88) & 0xFF000000 | (v1 + 24) & 0xFFFFFF;
    }
    v3 = (uint32)(TM3_DRAFT_U32(0x80089DACu + (1) * 4u) + 84);
    v4 = TM3_DRAFT_U32(0x80089DACu + (1) * 4u) + 8280;
    v5 = TM3_DRAFT_U32(0x80089DACu + (3) * 4u);
    /* The original computes the signed minimum of player count and start plus two */
    v16 = (sint32)(uint32)((uint32)v5 + 2u);
    if (v16 > TM3_DRAFT_I32(0x800D2E88u)) v16 = TM3_DRAFT_I32(0x800D2E88u);
    result = (sint32)v5 < v16;
    if ( (sint32)v5 < v16 )
    {
      v6 = 1728 * TM3_DRAFT_U32(0x80089DACu + (3) * 4u) + 138376;
      v7 = 1728 * TM3_DRAFT_U32(0x80089DACu + (3) * 4u);
      v8 = (uint32)(108 * TM3_DRAFT_U32(0x80089DACu + (3) * 4u) - 2146624004);
      v17 = 138376;
      v18 = 108 * TM3_DRAFT_U32(0x80089DACu + (3) * 4u) - 2146624064;
      do
      {
        v9 = (v3 + (1) * 4u);
        v10 = v4;
        dword_80089828 = v5;
        v3 += (dword_80089DD0) * 4u;
        v4 += 52 * TM3_DRAFT_U32(0x80089DACu + (4) * 4u);
        sub_8005BD24(v8);
        sub_8005BDB4(v8);
        sub_80042BCC(TM3_DRAFT_U32(0x80089DACu + (1) * 4u), v9, v5);
        v11 = (TM3_DRAFT_U32(0x80089DACu + (2) * 4u) + v6 + 64) & 0xFFFFFF;
        TM3_DRAFT_U32(v7 + TM3_DRAFT_U32(0x80089DACu + (2) * 4u) + 138440) = TM3_DRAFT_U32(v7 + TM3_DRAFT_U32(0x80089DACu + (2) * 4u) + 138440) & 0xFF000000 | TM3_DRAFT_U32(v9) & 0xFFFFFF;
        v12 = dword_80089DD0;
        v13 = TM3_DRAFT_U32(0x80089DACu + (5) * 4u);
        TM3_DRAFT_U32(v9) = TM3_DRAFT_U32(v9) & 0xFF000000 | v11;
        sub_80010B1C((int)v9, v10, v12, v4, v13, v18);
        v14 = (int)v8;
        v8 += (27) * 4u;
        /* Both IDA names refer to the same local word at offset 0x20 */
        v18 += 108u;
        sub_8003E21C(v3, v14, (uint8)(TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089DACu + (1) * 4u)) + 2 * (v5 % 2)));
        ++v5;
        v15 = TM3_DRAFT_U32(0x80089DACu + (2) * 4u) + v6;
        v6 += 1728;
        TM3_DRAFT_U32(v7 + TM3_DRAFT_U32(0x80089DACu + (2) * 4u) + v17) = TM3_DRAFT_U32(v7 + TM3_DRAFT_U32(0x80089DACu + (2) * 4u) + v17) & 0xFF000000 | TM3_DRAFT_U32(v3) & 0xFFFFFF;
        TM3_DRAFT_U32(v3) = TM3_DRAFT_U32(v3) & 0xFF000000 | v15 & 0xFFFFFF;
        result = v5 < v16;
        v7 += 1728;
      }
      while ( v5 < v16 );
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002A47C(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9)
{
  uint32 raster_result;
    FUNCTION_MARKER(0x8002A47Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int result; 
  int v22; 
  int v23[4]; 
  sint16 v24; 
  char v25[12]; 
  sint16 v26[4]; 
  sint16 v27; 
  sint16 v28; 
  sint16 v29; 
  sint16 v30[4]; 
  sint16 v31; 
  sint16 v32; 
  sint16 v33; 
  char v34[4]; 
  char v35[4]; 

  result = TM3_DRAFT_U32(a7) + 48 < (unsigned int)a9;
  if ( TM3_DRAFT_U32(a7) + 48 < (unsigned int)a9 )
  {
    sub_8005B8D4();
    sub_8005C3C4(a1, (int)v25, v34);
    v30[0] = ((a2 > 0) - a2) >> 1;
    v26[0] = v30[0];
    v31 = a2 / 2;
    v27 = v31;
    v28 = ((a3 > 0) - a3) >> 1;
    v26[1] = v28;
    v32 = a3 / 2;
    v30[1] = v32;
    v33 = 0;
    v30[2] = 0;
    v29 = 0;
    v26[2] = 0;
    v23[1] = 0;
    v23[3] = 0;
    v23[0] = 4096;
    v23[2] = 4096;
    v24 = 4096;
    sub_8005BD24(v23);
    sub_8005BDB4(v23);
    if ( (raster_result = sub_8005C3F4((int)v26, (int)&v27, (int)v30, (int)&v31, TM3_DRAFT_U32(a7) + 8, TM3_DRAFT_U32(a7) + 16, TM3_DRAFT_U32(a7) + 24, TM3_DRAFT_U32(a7) + 32, (int)v35, (int)v34)) >= 9 )
    {
      TM3_DRAFT_U32(TM3_DRAFT_U32(a7) + 4) = a4;
      TM3_DRAFT_U32(TM3_DRAFT_U32(a7) + 12) = TM3_DRAFT_U32(a5);
      TM3_DRAFT_U32(TM3_DRAFT_U32(a7) + 20) = TM3_DRAFT_U32(a5 + 4);
      TM3_DRAFT_U16(TM3_DRAFT_U32(a7) + 28) = TM3_DRAFT_U16(a5 + 8);
      TM3_DRAFT_U16(TM3_DRAFT_U32(a7) + 36) = TM3_DRAFT_U16(a5 + 10);
      TM3_DRAFT_U8(TM3_DRAFT_U32(a7) + 3) = 9;
      TM3_DRAFT_U8(TM3_DRAFT_U32(a7) + 7) = 44;
      if ( a8 )
      {
        TM3_DRAFT_U16(TM3_DRAFT_U32(a7) + 22) &= 0xFF9Fu;
        if ( a8 != 4 )
          TM3_DRAFT_U16(TM3_DRAFT_U32(a7) + 22) |= 32 * (_WORD)a8;
        v22 = 0xFFFFFF;
        TM3_DRAFT_U8(TM3_DRAFT_U32(a7) + 7) |= 2u;
      }
      else
      {
        v22 = 0xFFFFFF;
      }
      TM3_DRAFT_U32(TM3_DRAFT_U32(a7)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a7)) & 0xFF000000 | TM3_DRAFT_U32(a6) & 0xFFFFFF;
      TM3_DRAFT_U32(a6) = TM3_DRAFT_U32(a6) & 0xFF000000 | TM3_DRAFT_U32(a7) & 0xFFFFFF;
      TM3_DRAFT_U32(a7) += 40;
    }
    sub_8005B978();
    return (sint32)raster_result >= 9 ? TM3_DRAFT_U32(a7) : raster_result;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002FAF8(uint32 a1)
{
    FUNCTION_MARKER(0x8002FAF8u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  unsigned int v2; 
  sint16 v3; 
  unsigned int v4; 
  sint32 v5; 
  int v6; 
  int v7; 
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
  uint16 v20; 
  int v21; 
  uint32 result; 
  unsigned int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  sint16 v28[2]; 
  sint16 v29; 

  v2 = TM3_DRAFT_U32((a1 + (11) * 2u));
  if ( v2 <= 0x1FFFFF )
    TM3_DRAFT_U32((a1 + (11) * 2u)) = v2 + 0x4000;
  v3 = TM3_DRAFT_I16(a1 + (18) * 2u);
  v28[0] = 0;
  v29 = 0;
  v28[1] = v3;
  sub_8005C5F4(v28, a1);
  v4 = (uint16)TM3_DRAFT_I16(a1 + (18) * 2u) + ((unsigned int)(TM3_DRAFT_U32((a1 + (11) * 2u)) + 2048) >> 12);
  v5 = (uint16)(TM3_DRAFT_I16(a1 + (18) * 2u) + ((unsigned int)(TM3_DRAFT_U32((a1 + (11) * 2u)) + 2048) >> 12)) < 0x1001u;
  TM3_DRAFT_I16(a1 + (18) * 2u) = v4;
  if ( !v5 )
    TM3_DRAFT_I16(a1 + (18) * 2u) = v4 - 4096;
  v6 = abs16(TM3_DRAFT_I16(a1 + (2) * 2u));
  v7 = (v6 - 1) >> 4;
  if ( v6 - 1 < 0 )
    v7 = (v6 + 14) >> 4;
  v28[0] = v7;
  v8 = abs16(TM3_DRAFT_I16(a1 + (8) * 2u));
  v9 = (v8 - 1) >> 4;
  if ( v8 - 1 < 0 )
    v9 = (v8 + 14) >> 4;
  v29 = v9;
  v10 = TM3_DRAFT_U32((a1 + (10) * 2u));
  v11 = TM3_DRAFT_I16(a1) * v10;
  v12 = TM3_DRAFT_I16(a1 + (1) * 2u) * v10;
  v13 = TM3_DRAFT_I16(a1 + (2) * 2u) * v10;
  v14 = TM3_DRAFT_I16(a1 + (3) * 2u) * v10;
  v15 = TM3_DRAFT_I16(a1 + (4) * 2u) * v10;
  v16 = TM3_DRAFT_I16(a1 + (5) * 2u) * v10;
  v17 = TM3_DRAFT_I16(a1 + (6) * 2u) * v10;
  TM3_DRAFT_U32((a1 + (20) * 2u)) = (v7 << 16) | (v9 << 8);
  TM3_DRAFT_I16(a1) = (unsigned int)(v11 + 2048) >> 12;
  v18 = TM3_DRAFT_I16(a1 + (7) * 2u);
  v19 = v17;
  TM3_DRAFT_I16(a1 + (1) * 2u) = (unsigned int)(v12 + 2048) >> 12;
  TM3_DRAFT_I16(a1 + (2) * 2u) = (unsigned int)(v13 + 2048) >> 12;
  TM3_DRAFT_I16(a1 + (3) * 2u) = (unsigned int)(v14 + 2048) >> 12;
  TM3_DRAFT_I16(a1 + (4) * 2u) = (unsigned int)(v15 + 2048) >> 12;
  v20 = TM3_DRAFT_I16(a1 + (17) * 2u);
  v21 = TM3_DRAFT_I16(a1 + (8) * 2u) * v10;
  TM3_DRAFT_I16(a1 + (5) * 2u) = (unsigned int)(v16 + 2048) >> 12;
  TM3_DRAFT_I16(a1 + (17) * 2u) = ++v20;
  TM3_DRAFT_I16(a1 + (6) * 2u) = (unsigned int)(v19 + 2048) >> 12;
  TM3_DRAFT_I16(a1 + (7) * 2u) = (unsigned int)(v18 * v10 + 2048) >> 12;
  TM3_DRAFT_I16(a1 + (8) * 2u) = (unsigned int)(v21 + 2048) >> 12;
  if ( v20 < 0xB5u )
  {
    v23 = TM3_DRAFT_U32((a1 + (10) * 2u));
    if ( v23 < 0x7F80 )
      TM3_DRAFT_U32((a1 + (10) * 2u)) = v23 + 128;
    sub_80028B0C((uint32)(a1 + (13) * 2u));
    v24 = sub_80048078(12);
    v25 = 19998;
    if ( v24 )
    {
      v26 = 80;
    }
    else
    {
      v25 = 9999;
      v26 = 40;
    }
    result = (uint32)((uint16)TM3_DRAFT_I16(a1 + (37) * 2u) + v26);
    if ( TM3_DRAFT_I16(a1 + (37) * 2u) < v25 )
    {
      v27 = TM3_DRAFT_I16(a1 + (36) * 2u);
      TM3_DRAFT_I16(a1 + (37) * 2u) = (sint16)result;
      result = sub_80040DA8((int)a1, v27);
      if ( result )
        return (uint32)sub_80038AFC((int)result, TM3_DRAFT_I16(a1 + (37) * 2u));
    }
  }
  else
  {
    sub_80028A3C((uint32)(a1 + (13) * 2u));
    return (uint32)sub_8004A570((int)a1);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002D110(void)
{
    FUNCTION_MARKER(0x8002D110u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  unsigned int v0; 
  unsigned int v1; 
  unsigned int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  uint32 v23; 
  uint64 v24; 
  unsigned int v25; 
  unsigned int v26; 
  int v27; 
  int v28; 
  sint32 result; 

  v0 = 0x7FFFFFFF;
  v1 = 0;
  v2 = 0;
  v3 = -2146916064;
  v4 = -2146916696;
  do
  {
    v5 = abs32(TM3_DRAFT_U32(v4));
    if ( v5 < v0 )
      v0 = v5;
    if ( v1 < v5 )
      v1 = v5;
    v6 = abs32(TM3_DRAFT_U32(v3));
    if ( v6 < v0 )
      v0 = v6;
    if ( v1 < v6 )
      v1 = v6;
    v3 += 4;
    ++v2;
    v4 += 4;
  }
  while ( v2 < 0x18 );
  v7 = 0;
  v8 = (v1 - v0) / 6;
  v9 = 1;
  do
  {
    v10 = 4 * v7;
    v7 = v9;
    TM3_DRAFT_U32(v10 - 2146916720) = v9 * v8;
  }
  while ( v9++ < 6 );
  v12 = 0;
  v13 = 0;
  v14 = -4;
  do
  {
    v15 = 0;
    v16 = 0;
    do
    {
      v17 = 0;
      v18 = 0;
      v19 = -2146916064;
      v20 = -2146916696;
      do
      {
        v21 = 0;
        v22 = 0;
        v23 = (uint32)(4 * v17 - 2146917232);
        do
        {
          if ( v22 )
            v24 = TM3_DRAFT_I32(v20);
          else
            v24 = TM3_DRAFT_I32(v19);
          v25 = (v24 ^ HIDWORD(v24)) - HIDWORD(v24);
          if ( v12 )
            v26 = TM3_DRAFT_U32(v14 - 2146916720);
          else
            v26 = 0;
          if ( v25 < TM3_DRAFT_U32(v13 - 2146916720) && v26 < v25 )
          {
            v27 = 0;
            if ( v17 > 0 )
            {
              v28 = -2146917232;
              while ( 1 )
              {
                ++v27;
                if ( TM3_DRAFT_U32(v28) == v25 )
                  break;
                v28 += 4;
                if ( v27 >= v17 )
                  goto LABEL_30;
              }
              v21 = 1;
            }
LABEL_30:
            if ( !v21 )
            {
              ++v16;
              TM3_DRAFT_U32(v23) = v25;
              v23 += 4u;
              ++v17;
            }
          }
          ++v22;
        }
        while ( v22 < 2 );
        v19 += 4;
        ++v18;
        v20 += 4;
      }
      while ( v18 < 0x18 );
      if ( v16 < 9 )
        v15 = 1;
      else
        TM3_DRAFT_U32(v13 - 2146916720) -= (int)(TM3_DRAFT_U32(v13 - 2146916720) - v26) / 2;
      v16 = 0;
    }
    while ( !v15 );
    v13 += 4;
    result = ++v12 < 5;
    v14 += 4;
  }
  while ( v12 < 5 );
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8005F274(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8005F274u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int result; 
  int v4; 
  char v5[16]; 

  a1 &= 0xffu;
  dword_80086A30 = a2;
  if ( a1 == 1 )
  {
    if ( dword_80086A10 > 0 )
    {
      if ( dword_80086A0C == 512 )
      {
        if ( (dword_80086A2C & 1) != 0 )
        {
          sub_8005D8EC(0);
          sub_8005D8CC((int)v5, 3);
          sub_8005D910(0u);
          sub_8005D8EC((int)0x8005F4D4u);
        }
        else
        {
          sub_8005D8AC((int)v5, 3);
        }
        if ( sub_8005DA34((uint32)v5) != dword_80086A1C )
        {
          sub_8005F214(0x80089388u);
          dword_80086A10 = -1;
        }
      }
      if ( (dword_80086A2C & 1) != 0 )
      {
        sub_8005D8CC(dword_80086A04, dword_80086A0C);
      }
      else
      {
        sub_8005D8AC(dword_80086A04, dword_80086A0C);
        dword_80086A04 += 4 * dword_80086A0C;
        --dword_80086A10;
        ++dword_80086A1C;
      }
    }
  }
  else
  {
    dword_80086A10 = -1;
  }
  dword_80086A14 = sub_8005FA24(-1);
  if ( dword_80086A10 < 0 )
    sub_8005F5A0(1);
  if ( dword_80086A18 + 1200 < sub_8005FA24(-1) )
    dword_80086A10 = -1;
  if ( !dword_80086A10 || (result = sub_8005FA24(-1), dword_80086A18 + 1200 < result) )
  {
    sub_8005D4A8((int ( *)(_DWORD, _DWORD))dword_80086A20);
    sub_8005D4BC((int ( *)(_DWORD, _DWORD))dword_80086A24);
    if ( (dword_80086A2C & 1) != 0 )
      sub_8005D8EC(dword_80086A28);
    result = sub_8005D60C(9u, 0);
    if ( dword_800869F8 )
    {
      v4 = 5;
      if ( !dword_80086A10 )
        v4 = 2;
      return tm3_draft_indirect(dword_800869F8, 2u, v4, a2);
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003992C(uint32 object, uint32 payload)
{
    uint32 point = TM3_DRAFT_U32(payload);
    uint32 velocity = TM3_DRAFT_U32(payload + 4u);
    uint32 table, length, scaled, value, color;
    sint32 random, divisor;
    FUNCTION_MARKER(0x8003992Cu, "SCUS_942.49");
    TM3_DRAFT_U8(object + 27u) = (uint8)TM3_DRAFT_U32(payload + 8u);
    random = (sint32)sub_80039FD4();
    table = TM3_DRAFT_U32(0x80089C94u) + 32u * TM3_DRAFT_U8(object + 27u);
    divisor = TM3_DRAFT_I8(table + 28u);
    /* Preserve the unguarded original MIPS DIV remainder */
    TM3_DRAFT_U8(object + 6u) = (uint8)(!divisor ? random : (random == (sint32)0x80000000u && divisor == -1 ? 0 : random % divisor));
    table = TM3_DRAFT_U32(0x80089C94u) + 32u * TM3_DRAFT_U8(object + 27u);
    TM3_DRAFT_U8(object + 7u) = TM3_DRAFT_I8(table + 28u) < 2 ? 255u : TM3_DRAFT_U8(table + 29u);
    TM3_DRAFT_U8(object + 26u) = (uint8)((sint32)sub_80039FD4() % 2);
    sub_8003983C(object);
    TM3_DRAFT_U16(object) = (uint16)TM3_DRAFT_U32(point);
    TM3_DRAFT_U16(object + 2u) = (uint16)TM3_DRAFT_U32(point + 4u);
    TM3_DRAFT_U16(object + 4u) = (uint16)TM3_DRAFT_U32(point + 8u);
    sub_80014AD4(object + 8u, velocity, 8738u, 18u);
    sub_80014A3C(object + 8u, object + 8u, 2048u, 12u);
    length = sub_80013D64(velocity);
    scaled = (uint32)((sint32)(1365u * length + 2048u) >> 12);
    value = 0u - (uint32)((sint32)(136u * scaled + 2048u) >> 12);
    TM3_DRAFT_U16(object + 10u) = (uint16)value;
    if (TM3_DRAFT_I16(object + 10u) < -24)
        TM3_DRAFT_U16(object + 10u) = (uint16)-24;
    random = (sint32)sub_80039FD4();
    value = (uint32)((sint32)((length << 6) + 2048u) >> 12) + (uint32)(random % 16) - 8u;
    TM3_DRAFT_U16(object + 22u) = (uint16)value;
    if (TM3_DRAFT_I16(object + 22u) < 16)
        TM3_DRAFT_U16(object + 22u) = 16u;
    else if (TM3_DRAFT_I16(object + 22u) >= 33)
        TM3_DRAFT_U16(object + 22u) = 32u;
    random = (sint32)sub_80039FD4();
    value = (uint32)((sint32)((length << 6) + 2048u) >> 12) + (uint32)(random % 16) - 8u;
    TM3_DRAFT_U16(object + 14u) = (uint16)value;
    if (TM3_DRAFT_I16(object + 14u) < 16)
        TM3_DRAFT_U16(object + 14u) = 16u;
    else if (TM3_DRAFT_I16(object + 14u) >= 33)
        TM3_DRAFT_U16(object + 14u) = 32u;
    TM3_DRAFT_U8(object + 31u) = 44u;
    color = sub_80012388(TM3_DRAFT_U32(point), TM3_DRAFT_U32(point + 8u)) * 17u;
    TM3_DRAFT_U8(object + 28u) = (uint8)color;
    TM3_DRAFT_U8(object + 29u) = (uint8)color;
    TM3_DRAFT_U8(object + 30u) = (uint8)color;
    TM3_DRAFT_U16(object - 20u) = (uint16)TM3_DRAFT_U32(point);
    TM3_DRAFT_U16(object - 18u) = (uint16)TM3_DRAFT_U32(point + 4u);
    TM3_DRAFT_U16(object - 16u) = (uint16)TM3_DRAFT_U32(point + 8u);
    return object - 20u;
}

/* Unverified decompiler-derived draft */
uint32 sub_800435FC(uint32 a1, uint32 a2, ...)
{
    FUNCTION_MARKER(0x800435FCu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  va_list tracks;
  uint32 v13; 
  int result; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 

  va_start(tracks, a2);
  v13 = TM3_DRAFT_LOCAL_ADDRESS(tracks, (sint32)a1 > 0 ? a1 * 4u : 1u);
  TM3_DRAFT_U32(0x80089E04u + (4) * 4u) = a2;
  sub_8005D4D0(8u, 0, 0);
  sub_8005D4BC(0);
  result = dword_80089858 - 1;
  v15 = 0;
  if ( (sint32)(dword_80089858 - 1u) > 0 )
  {
    TM3_DRAFT_U32(0x800d2720u) = a1;
    TM3_DRAFT_U32(0x800d2724u) = 0;
    if ( (sint32)a1 > 0 )
    {
      v16 = -2146621688;
      do
      {
        v17 = TM3_DRAFT_I32(v13);
        v13 += 4u;
        v18 = (sint32)((uint32)v17 + 2u) % (sint32)(dword_80089858 + 1u);
        v19 = (sint32)((uint32)v17 + 3u) % (sint32)(dword_80089858 + 1u);
        TM3_DRAFT_U32(v16) = v17 + 2;
        TM3_DRAFT_U32(v16 + 4) = TM3_DRAFT_U32(4 * v18 - 2146621656);
        TM3_DRAFT_U32(v16 + 8) = TM3_DRAFT_U32(4 * v19 - 2146621656);
        v20 = 10 * ((int)TM3_DRAFT_U8(v16 + 5) >> 4)
            + TM3_DRAFT_U8(v16 + 5)
            - 16 * ((int)TM3_DRAFT_U8(v16 + 5) >> 4);
        v21 = v20 - 1;
        if ( !v20 )
        {
          v22 = 10 * ((int)TM3_DRAFT_U8(v16 + 4) >> 4)
              + TM3_DRAFT_U8(v16 + 4)
              - 16 * ((int)TM3_DRAFT_U8(v16 + 4) >> 4)
              - 1;
          TM3_DRAFT_U8(v16 + 4) = 16 * (v22 / 10) + v22 % 10;
          v21 = 59;
        }
        ++v15;
        TM3_DRAFT_U8(v16 + 5) = 16 * (v21 / 10) + v21 % 10;
        v16 += 12;
      }
      while ( v15 < TM3_DRAFT_U32(0x800d2720u) );
    }
    if ( TM3_DRAFT_U32(0x80089E04u + (4) * 4u) )
      tm3_draft_indirect(TM3_DRAFT_U32(0x80089E04u + 16u), 1u, TM3_DRAFT_U32(0x800d2724u));
    v24 = sub_8005DA34((uint32)(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621684));
    v23 = sub_8005DA34((uint32)(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621680));
    va_end(tracks);
    return sub_80043B74(v24, v23);
  }
  va_end(tracks);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80026C08(uint32 asset, uint32 old_x, uint32 old_y, uint32 new_x, uint32 new_y)
{
    FUNCTION_MARKER(0x80026C08u, "SCUS_942.49");
    uint32 dx = (uint16)new_x - (uint32)(uint16)old_x;
    uint32 dy = (uint16)new_y - (uint32)(uint16)old_y;
    for (uint32 lod = 0; lod < 3u; ++lod) {
        uint32 offset = TM3_DRAFT_U32(asset + 4u + 4u * lod);
        if (offset == TM3_DRAFT_U32(asset + 8u + 4u * lod)) continue;
        uint32 block = asset + offset;
        uint32 geometry = block + TM3_DRAFT_U32(block);
        uint32 polygon = geometry + 24u * TM3_DRAFT_U32(geometry) + 36u;
        sint32 index = 0;
        if (TM3_DRAFT_I32(geometry + 4u) <= 0) continue;
        do {
            uint32 clut = TM3_DRAFT_U16(polygon + 6u);
            TM3_DRAFT_U16(polygon + 6u) = (uint16)sub_8005AD74(16u * (clut & 63u) + dx,
                                                               (clut >> 6) + dy);
            uint32 page = TM3_DRAFT_U16(polygon + 10u);
            uint32 old_page_x = (page << 6) & 0x7C0u;
            uint32 old_page_y = ((page << 4) & 0x100u) | ((page >> 2) & 0x200u);
            uint32 shifted_y = old_page_y + dy;
            uint16 relocated = (uint16)((page & 0x1E0u) | ((shifted_y & 0x100u) >> 4)
                             | (((old_page_x + dx) & 0x3FFu) >> 6) | ((shifted_y & 0x200u) << 2));
            TM3_DRAFT_U16(polygon + 10u) = relocated;
            uint32 new_page_x = ((uint32)relocated << 6) & 0x7C0u;
            uint32 new_page_y = (((uint32)relocated << 4) & 0x100u)
                                | (((uint32)relocated >> 2) & 0x200u);
            const uint32 uv_offsets[4] = {4u, 8u, 12u, 14u};
            for (uint32 vertex = 0; vertex < 4u; ++vertex) {
                uint32 uv = polygon + uv_offsets[vertex];
                uint32 u = TM3_DRAFT_U8(uv);
                uint32 v = TM3_DRAFT_U8(uv + 1u);
                TM3_DRAFT_U8(uv) = (uint8)(old_page_x + u + dx - new_page_x);
                TM3_DRAFT_U8(uv + 1u) = (uint8)(old_page_y + v + dy - new_page_y);
            }
            ++index;
            polygon += 20u;
        } while (index < TM3_DRAFT_I32(geometry + 4u));
    }
    return 0u;
}

/* Unverified decompiler-derived draft */
uint32 sub_80038C00(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80038C00u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  char v9; 
  int v10; 
  int v11; 
  char v12; 
  int v13; 
  int v14; 
  char v15; 
  int v16; 
  int v17; 
  int v18; 
  signed int v19; 
  int v20; 
  int v21; 
  int result; 
  int vars0; 
  int vars4; 

  v3 = (uint32)(a2 + 4);
  v4 = TM3_DRAFT_I32(v3 - (1) * 4u);
  v5 = TM3_DRAFT_I32(v3);
  v6 = TM3_DRAFT_I32(v3 + (1) * 4u);
  v7 = TM3_DRAFT_U32(v4 + 4);
  v8 = TM3_DRAFT_U32(v4 + 8);
  TM3_DRAFT_U16(a1) = TM3_DRAFT_U32(v4);
  TM3_DRAFT_U16(a1 + 2) = v7;
  TM3_DRAFT_U16(a1 + 4) = v8;
  v9 = sub_80012388(TM3_DRAFT_U32(v4), TM3_DRAFT_U32(v4 + 8));
  TM3_DRAFT_U8(a1 + 16) = 17 * v9;
  TM3_DRAFT_U8(a1 + 17) = 17 * v9;
  TM3_DRAFT_U8(a1 + 18) = 17 * v9;
  TM3_DRAFT_U16(a1 + 8) = v5;
  if ( (sint16)v5 < 128 )
    TM3_DRAFT_U16(a1 + 8) = 128;
  TM3_DRAFT_U16(a1 + 10) = v5 / 4;
  if ( (sint16)(v5 / 4) < 512 )
    TM3_DRAFT_U16(a1 + 10) = 512;
  if ( TM3_DRAFT_I16(a1 + 8) >= 769 )
    TM3_DRAFT_U16(a1 + 8) = 768;
  v10 = v5;
  if ( TM3_DRAFT_I16(a1 + 10) >= 1281 )
  {
    TM3_DRAFT_U16(a1 + 10) = 1280;
    v10 = v5;
  }
  v11 = v10 / 8 + 40;
  TM3_DRAFT_U16(a1 + 14) = v11;
  if ( (sint16)v11 >= 161 )
    TM3_DRAFT_U16(a1 + 14) = 160;
  TM3_DRAFT_U8(a1 + 13) = v6;
  v19 = (sint32)sub_80039FD4();
  v17 = TM3_DRAFT_I8(32 * TM3_DRAFT_U8(a1 + 13) + dword_80089C94 + 21);
  /* Preserve raw MIPS DIV remainder for zero and overflow */
  v12 = !v17 ? v19 : (v19 == (sint32)0x80000000u && v17 == -1 ? 0 : v19 % v17);
  v13 = TM3_DRAFT_U8(a1 + 13);
  TM3_DRAFT_U8(a1 + 6) = v12;
  v14 = 32 * v13 + dword_80089C94;
  v15 = -1;
  if ( TM3_DRAFT_I8(v14 + 21) >= 2 )
    v15 = TM3_DRAFT_U8(v14 + 22);
  TM3_DRAFT_U8(a1 + 7) = v15;
  TM3_DRAFT_U8(a1 + 12) = (int)sub_80039FD4() % 2;
  sub_80038B10(a1);
  v16 = 32 * TM3_DRAFT_U8(a1 + 13) + dword_80089C94;
  v17 = TM3_DRAFT_I8(v16 + 24);
  if ( v17 > 0 )
  {
    v18 = TM3_DRAFT_I8(v16 + 23);
    v19 = sub_80039FD4();
    sub_8004A294(22, v18 + v19 % v17, 2, TM3_DRAFT_U32(v4), TM3_DRAFT_U32(v4 + 4), TM3_DRAFT_U32(v4 + 8));
  }
  v20 = TM3_DRAFT_U32(v4 + 4);
  v21 = TM3_DRAFT_U32(v4 + 8);
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U32(v4);
  result = a1 - 20;
  TM3_DRAFT_U16(result + 2) = v20;
  TM3_DRAFT_U16(result + 4) = v21;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004D628(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9)
{
    FUNCTION_MARKER(0x8004D628u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v21; 
  int v22; 
  sint32 v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int vars0; 
  unsigned int *vars4; 
  char vars8; 
  char varsC; 
  char vars10; 
  char vars14; 
  char vars18; 

  if ( a4 != a5 )
    return sub_80049284(
             a1,
             a8,
             a2,
             a3,
             a9,
             a9 + 134088,
             18,
             TM3_DRAFT_U8(dword_80089CBC + 3),
             TM3_DRAFT_U8(dword_80089CBC + 4),
             TM3_DRAFT_U8(dword_80089CBC + 5),
             1,
             1);
  if ( TM3_DRAFT_U32(0x800d2f20u) == 2 )
    v21 = (sint32)(TM3_DRAFT_U32(0x80089C00u + (4) * 4u) + 409u);
  else
    v21 = (sint32)(TM3_DRAFT_U32(0x80089C00u + (4) * 4u) + 273u);
  TM3_DRAFT_U32(0x80089C00u + (4) * 4u) = v21;
  v22 = (sint32)sub_8005AF24((uint32)v21) / 2 + 4096;
  v23 = 0;
  if ( a7 && (TM3_DRAFT_U16(24 * TM3_DRAFT_U32(0x80089BE8u + (1) * 4u) - 2146624256) & (uint16)a6) != 0 )
    v23 = a5 != -1;
  v24 = 0;
  if ( v23 )
  {
    v25 = a2 + 1;
    v26 = a3 + 1;
  }
  else
  {
    v25 = a2 - 2;
    v26 = a3 - 2;
    v24 = 3;
  }
  if ( v24 )
    v27 = 18;
  else
    v27 = 2;
  return sub_80049284(
           a1,
           a8,
           v25,
           v26,
           a9,
           a9 + 134088,
           v27,
           (TM3_DRAFT_U8(dword_80089CBC + 3) * v22) >> 12,
           (TM3_DRAFT_U8(dword_80089CBC + 4) * v22) >> 12,
           (TM3_DRAFT_U8(dword_80089CBC + 5) * v22) >> 12,
           v24,
           v24);
}

/* Unverified decompiler-derived draft */
uint32 sub_800220D4(uint32 a1, uint32 a2)
{
  union { uint64 align; uint8 bytes[0x98u]; } native_local_storage;
  uint8 *native_locals = native_local_storage.bytes;
  /* Original adjacent local buffers share one native storage area */
#define v14 (*((int *)(native_locals + 0x14u)))
#define v15 ((int *)(native_locals + 0x18u))
#define v16 ((char *)(native_locals + 0x38u))
#define v17 ((int *)(native_locals + 0x48u))
#define v18 ((int *)(native_locals + 0x58u))
#define v19 (*((sint16 *)(native_locals + 0x68u)))
#define v20 (*((sint16 *)(native_locals + 0x6Au)))
#define v21 (*((sint16 *)(native_locals + 0x6Cu)))
#define v22 ((sint16 *)(native_locals + 0x70u))
    FUNCTION_MARKER(0x800220D4u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v4; 
  int result; 
  uint16 v6; 
  int v7; 
  uint16 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  sint32 v13; 



  if ( TM3_DRAFT_I32(a2 + 4392) <= 0 )
    return 0;
  v4 = TM3_DRAFT_U32(a2 + 4396);
  if ( v4 )
  {
    result = 3;
    if ( v4 != a1 )
      return 0;
  }
  else
  {
    v6 = TM3_DRAFT_U16(a2 + 948) + TM3_DRAFT_U16(a2 + 940);
    v7 = (TM3_DRAFT_I16(a2 + 944) + TM3_DRAFT_I16(a2 + 936)) << 16;
    v8 = TM3_DRAFT_U16(a2 + 946) + TM3_DRAFT_U16(a2 + 938);
    v19 = (int)((v7 >> 16) + ((unsigned int)v7 >> 31)) >> 1;
    v20 = (int)((sint16)v8 + ((unsigned int)(v8 << 16) >> 31)) >> 1;
    v21 = (int)((sint16)v6 + ((unsigned int)(v6 << 16) >> 31)) >> 1;
    sub_8005C5B4((uint32)(a2 + 1536), (int)v15);
    v9 = TM3_DRAFT_U32(a1 + 1584);
    v10 = TM3_DRAFT_U32(a1 + 1588);
    v11 = TM3_DRAFT_U32(a2 + 1560);
    v12 = TM3_DRAFT_U32(a2 + 1564);
    v22[0] = TM3_DRAFT_U16(a1 + 1580) - TM3_DRAFT_U16(a2 + 1556);
    v22[1] = v9 - v11;
    v22[2] = v10 - v12;
    sub_8005BB34(v15, (int)v22, (int)v17);
    v18[0] = v17[0] - v19;
    v18[1] = v17[1] - v20;
    v18[2] = v17[2] - v21;
    sub_8005B254(TM3_DRAFT_LOCAL_ADDRESS(v18, sizeof(v18)), TM3_DRAFT_LOCAL_ADDRESS(v18, sizeof(v18)));
    v13 = (sint16)sub_80021E44(
                     TM3_DRAFT_LOCAL_ADDRESS(&v19, sizeof(v19)),
                     v18,
                     a2 + 936,
                     a2 + 944,
                     (int)v16,
                     v14,
                     v15[0],
                     v15[1],
                     v15[2],
                     v15[3],
                     v15[4],
                     v15[5],
                     v15[6]) != 2;
    result = 0;
    if ( !v13 )
    {
      TM3_DRAFT_U32(a2 + 4396) = a1;
      return 3;
    }
  }
  return result;
}

#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22

/* Unverified decompiler-derived draft */
uint32 sub_80030F2C(uint32 object, uint32 ordering_table, uint32 cursor, uint32 end, uint32 view)
{
    uint32 matrix[8];
    sint16 vertices[4][4] = {
        {-70, 0, -400, 0}, {70, 0, -400, 0},
        {-70, 0, 0, 0}, {70, 0, 0, 0}
    };
    uint32 matrix_address = TM3_DRAFT_LOCAL_ADDRESS(matrix, sizeof(matrix));
    uint32 vertices_address = TM3_DRAFT_LOCAL_ADDRESS(vertices, sizeof(vertices));
    uint32 geometry, texture, result;
    FUNCTION_MARKER(0x80030F2Cu, "SCUS_942.49");
    if (TM3_DRAFT_U8(object + 321u) == 1u)
        sub_8002E2D4(object, ordering_table, cursor, end);
    result = TM3_DRAFT_U16(object + 110u);
    if (result != 0u)
        return result;
    geometry = TM3_DRAFT_U32(0x80089D14u);
    sub_8002A190(object + 8u, (uint32)(sint32)TM3_DRAFT_I16(geometry + 74u),
        (uint32)(sint32)TM3_DRAFT_I16(geometry + 76u), 0x00A00000u,
        TM3_DRAFT_U32(geometry + 80u), ordering_table, cursor, 1u, end);
    sub_8005B8D4();
    sub_8005B614(view, object + 116u, matrix_address);
    sub_8005BD24(matrix_address);
    sub_8005BDB4(matrix_address);
    texture = TM3_DRAFT_U32(TM3_DRAFT_U32(object + 340u) +
        4u * TM3_DRAFT_U8(object + 329u) + 8u);
    sub_8002A72C(vertices_address, 0x00A00000u, texture, ordering_table, cursor, 1u, end, 64u);
    vertices[0][0] = vertices[1][0] = vertices[2][0] = vertices[3][0] = 0;
    vertices[0][1] = vertices[2][1] = 70;
    vertices[1][1] = vertices[3][1] = -70;
    sub_8002A72C(vertices_address, 0x00A00000u, texture, ordering_table, cursor, 1u, end, 64u);
    sub_8005B978();
    result = TM3_DRAFT_U8(object + 335u);
    if (result != 0u)
        return sub_8002E6CC(object, ordering_table, cursor, end);
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80035F60(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  uint32 storage[28], base, result;
  sint32 half_x, half_y;
  FUNCTION_MARKER(0x80035F60u, "SCUS_942.49");
  if (TM3_DRAFT_U8(a1+10u)==2u)
    return sub_8002A72C(TM3_DRAFT_U32(a1), TM3_DRAFT_U32(a1+16u), TM3_DRAFT_U32(a1+20u), a2, a3, (uint32)(sint32)TM3_DRAFT_I16(a1+8u), a4, 0u);
  base=TM3_DRAFT_LOCAL_ADDRESS(storage,sizeof(storage));
  half_x=TM3_DRAFT_I16(a1+4u)/2;
  half_y=TM3_DRAFT_I16(a1+6u)/2;
  /* Four SVECTOR vertices occupy the original contiguous offsets 0x48 through 0x67 */
  TM3_DRAFT_U16(base+0x48u)=-half_x;
  TM3_DRAFT_U16(base+0x4Au)=-half_y;
  TM3_DRAFT_U16(base+0x4Cu)=0u;
  TM3_DRAFT_U16(base+0x50u)=half_x;
  TM3_DRAFT_U16(base+0x52u)=-half_y;
  TM3_DRAFT_U16(base+0x54u)=0u;
  TM3_DRAFT_U16(base+0x58u)=-half_x;
  TM3_DRAFT_U16(base+0x5Au)=half_y;
  TM3_DRAFT_U16(base+0x5Cu)=0u;
  TM3_DRAFT_U16(base+0x60u)=half_x;
  TM3_DRAFT_U16(base+0x62u)=half_y;
  TM3_DRAFT_U16(base+0x64u)=0u;
  sub_8005B8D4();
  TM3_DRAFT_U16(base+0x40u)=TM3_DRAFT_U16(a1-20u);
  TM3_DRAFT_U16(base+0x42u)=TM3_DRAFT_U16(a1-18u);
  TM3_DRAFT_U16(base+0x44u)=TM3_DRAFT_U16(a1-16u);
  sub_8005C3C4(base+0x40u,base+0x34u,base+0x68u);
  /* The matrix translation is the adjacent RotTrans output at offset 0x34 */
  TM3_DRAFT_U32(base+0x20u)=4096u;
  TM3_DRAFT_U32(base+0x24u)=0u;
  TM3_DRAFT_U32(base+0x28u)=4096u;
  TM3_DRAFT_U32(base+0x2Cu)=0u;
  TM3_DRAFT_U16(base+0x30u)=4096u;
  if (!TM3_DRAFT_U32(0x800D2F14u) && TM3_DRAFT_U8(a1+10u)==1u)
  {
    sub_80035E98(a1,base+0x40u);
    sub_8005CBC4((uint32)(sint32)TM3_DRAFT_I16(a1+12u),base+0x20u);
  }
  sub_8005BD24(base+0x20u);
  sub_8005BDB4(base+0x20u);
  result=sub_8002A72C(base+0x48u,TM3_DRAFT_U32(a1+16u),TM3_DRAFT_U32(a1+20u),a2,a3,(uint32)(sint32)TM3_DRAFT_I16(a1+8u),a4,0u);
  sub_8005B978();
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80034560(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80034560u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v2; 
  uint32 v4; 
  uint32 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  sint16 v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int result; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int vars0; 
  int vars0a; 
  int vars4; 
  int vars4a; 

  v2 = (uint32)(a2 + 4);
  TM3_DRAFT_U32(a1) = TM3_DRAFT_U32(v2 - (1) * 4u);
  v4 = TM3_DRAFT_U32(a1);
  TM3_DRAFT_U32(a1 + 104) = TM3_DRAFT_U32(v2);
  v5 = (uint32)TM3_DRAFT_U32(v2 + (1) * 4u);
  TM3_DRAFT_U32(a1 + 112) = TM3_DRAFT_U32(v2 + (2) * 4u);
  TM3_DRAFT_U32(a1 + 116) = TM3_DRAFT_U32(v2 + (3) * 4u);
  v6 = TM3_DRAFT_U32(v2 + (4) * 4u);
  TM3_DRAFT_U32(a1 + 4) = 0;
  TM3_DRAFT_U32(a1 + 120) = v6;
  if ( v4 )
  {
    v7 = TM3_DRAFT_U32(v4 + (385) * 4u);
    v8 = TM3_DRAFT_U32(v4 + (386) * 4u);
    v9 = TM3_DRAFT_U32(v4 + (387) * 4u);
    TM3_DRAFT_U32(a1 + 8) = TM3_DRAFT_U32(v4 + (384) * 4u);
    TM3_DRAFT_U32(a1 + 12) = v7;
    TM3_DRAFT_U32(a1 + 16) = v8;
    TM3_DRAFT_U32(a1 + 20) = v9;
    v10 = TM3_DRAFT_U32(v4 + (389) * 4u);
    v11 = TM3_DRAFT_U32(v4 + (390) * 4u);
    v12 = TM3_DRAFT_U32(v4 + (391) * 4u);
    TM3_DRAFT_U32(a1 + 24) = TM3_DRAFT_U32(v4 + (388) * 4u);
    TM3_DRAFT_U32(a1 + 28) = v10;
    TM3_DRAFT_U32(a1 + 32) = v11;
    TM3_DRAFT_U32(a1 + 36) = v12;
    v13 = TM3_DRAFT_U32(v4 + (390) * 4u);
    v14 = TM3_DRAFT_U32(v4 + (391) * 4u);
    TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U32(v4 + (389) * 4u);
    v15 = a1 - 20;
    TM3_DRAFT_U16(v15 + 2) = v13;
    TM3_DRAFT_U16(v15 + 4) = v14;
    TM3_DRAFT_U32(a1 + 4) = sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(v4 + (1010) * 4u) + 55), 5, (int)v4, 1558);
  }
  else
  {
    TM3_DRAFT_U32(a1 + 12) = 0;
    TM3_DRAFT_U32(a1 + 20) = 0;
    TM3_DRAFT_U32(a1 + 8) = 4096;
    TM3_DRAFT_U32(a1 + 16) = 4096;
    TM3_DRAFT_U16(a1 + 24) = 4096;
    v16 = TM3_DRAFT_U16(v5 + (1) * 2u);
    v17 = (sint16)TM3_DRAFT_U16(v5 + (2) * 2u);
    TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U16(v5);
    v18 = a1 - 20;
    TM3_DRAFT_U16(v18 + 2) = v16;
    TM3_DRAFT_U16(v18 + 4) = v17;
    sub_8004A294(22, 26, 0);
    byte_80089D20 = -1;
    byte_80089D21 = -1;
    byte_80089D22 = -1;
    dword_80089838 = 1;
  }
  v19 = 15;
  v20 = a1 + 60;
  do
  {
    TM3_DRAFT_U32(v20 + 40) = 0;
    --v19;
    v20 -= 4;
  }
  while ( v19 >= 0 );
  TM3_DRAFT_U16(a1 + 124) = -80;
  TM3_DRAFT_U32(a1 + 126) = 65456;
  TM3_DRAFT_U16(a1 + 132) = 80;
  TM3_DRAFT_U32(a1 + 134) = 65456;
  TM3_DRAFT_U16(a1 + 140) = -80;
  TM3_DRAFT_U16(a1 + 142) = 80;
  TM3_DRAFT_U16(a1 + 144) = 0;
  TM3_DRAFT_U16(a1 + 148) = 80;
  TM3_DRAFT_U16(a1 + 150) = 80;
  TM3_DRAFT_U16(a1 + 152) = 0;
  v21 = TM3_DRAFT_U32(a1 + 120);
  v22 = dword_80089CE8;
  TM3_DRAFT_U16(a1 + 160) = 0;
  TM3_DRAFT_U16(a1 + 162) = 0;
  TM3_DRAFT_U32(a1 + 164) = v22 + 416;
  TM3_DRAFT_U32(a1 + 40) = sub_8004A294(24, a1, 0, v21);
  result = 1;
  TM3_DRAFT_U16(a1 + 156) = 1;
  TM3_DRAFT_U32(a1 + 108) = 0;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80064BA0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80064BA0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  char v3; 
  uint32 v4; 
  uint8 v5; 
  int v6; 
  int result; 
  int v8; 
  sint16 v9; 
  uint32 v10; 
  uint8 v11; 
  int v12; 
  sint32 v13; 
  int v14; 
  uint32 v15; 

  v3 = a2;
  if ( a2 >= 0 )
  {
    v8 = 136;
    if ( (int)TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 60)) >> 4 == 8 && TM3_DRAFT_U8(a1 + 68) >= 9u )
      v8 = 34;
    v9 = TM3_DRAFT_U16(dword_80087E10 + 4);
    TM3_DRAFT_U32(0x800d8e9cu) = 430;
    TM3_DRAFT_U32(0x800d8e98u) = TM3_DRAFT_U16(0x1f801120u);
    if ( (v9 & 2) == 0 )
    {
      while ( (TM3_DRAFT_U16(dword_80087E10 + 4) & 2) == 0 )
        ;
    }
    v10 = (uint32)dword_80087E0C;
    v11 = TM3_DRAFT_U8(dword_80087E10);
    TM3_DRAFT_U16(dword_80087E10 + 14) = v8;
    v12 = v11;
    if ( (TM3_DRAFT_U32(v10) & 0x80) != 0 )
    {
LABEL_14:
      TM3_DRAFT_U8(dword_80087E10) = v3;
      if ( v8 == 34 )
      {
        v14 = dword_80087E10;
        TM3_DRAFT_U32(dword_80087E0C) = -129;
        TM3_DRAFT_U16(v14 + 10) |= 0x10u;
      }
      v15 = (uint32)(TM3_DRAFT_U32(a1 + 60) + TM3_DRAFT_U8(a1 + 68));
      ++TM3_DRAFT_U8(a1 + 69);
      TM3_DRAFT_U8(v15) = v12;
      ++TM3_DRAFT_U8(a1 + 68);
      return v12;
    }
    else
    {
      while ( 1 )
      {
        v13 = sub_8006762C();
        result = -20;
        if ( v13 )
          break;
        if ( (TM3_DRAFT_U32(dword_80087E0C) & 0x80) != 0 )
          goto LABEL_14;
      }
    }
  }
  else
  {
    v4 = TM3_DRAFT_U32(a1 + 64);
    v5 = TM3_DRAFT_U8(dword_80087E10);
    TM3_DRAFT_U8(a1 + 68) = -1;
    TM3_DRAFT_U8(a1 + 69) = 1;
    TM3_DRAFT_U8(v4) = ~(_BYTE)a2;
    v6 = v5;
    while ( (TM3_DRAFT_U16(dword_80087E10 + 4) & 1) == 0 )
      ;
    while ( !sub_8006762C() )
      ;
    TM3_DRAFT_U8(dword_80087E10) = ~v3;
    return v6;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80032720(uint32 vehicle, uint32 mode)
{
    uint32 point_words[2], offset_words[2], seed_words[2], matrix_words[8];
    uint32 point = TM3_DRAFT_LOCAL_ADDRESS(point_words, sizeof(point_words));
    uint32 offset = TM3_DRAFT_LOCAL_ADDRESS(offset_words, sizeof(offset_words));
    uint32 seed = TM3_DRAFT_LOCAL_ADDRESS(seed_words, sizeof(seed_words));
    uint32 matrix = TM3_DRAFT_LOCAL_ADDRESS(matrix_words, sizeof(matrix_words));
    uint32 target;
    FUNCTION_MARKER(0x80032720u, "SCUS_942.49");
    seed_words[0] = TM3_DRAFT_U32(0x80089768u);
    seed_words[1] = TM3_DRAFT_U32(0x8008976Cu);
    target = sub_8002E964(mode, vehicle, matrix);
    sub_80026B88(vehicle, 2u, point);
    sub_8005BB84(vehicle + 1536u, seed, offset);
    for (uint32 axis = 0u; axis < 3u; ++axis)
        TM3_DRAFT_U16(offset + axis * 2u) = (uint16)(TM3_DRAFT_I16(offset + axis * 2u)
                                                + TM3_DRAFT_I16(point + axis * 2u));
    sub_8004A294(8u, 3u, 3u, vehicle, target, offset, matrix, mode);
    sub_8004A294(8u, 15u, 19u, vehicle, target, point, matrix, mode);
    sub_80026B88(vehicle, 0u, point);
    sub_8004A294(8u, 15u, 20u, vehicle, target, point, matrix, mode);
    sub_80026B88(vehicle, 1u, point);
    sub_8004A294(8u, 15u, 20u, vehicle, target, point, matrix, mode);
    return sub_8004A294(22u,
        TM3_DRAFT_U8(TM3_DRAFT_U32(vehicle + 4040u) + 55u),
        5u, vehicle, 1200u, point, matrix, mode);
}

/* Unverified decompiler-derived draft */
uint32 sub_800343BC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9, uint32 a10, uint32 a11, uint32 a12, uint32 a13)
{
    FUNCTION_MARKER(0x800343BCu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v14; 
  int v15; 
  uint32 v16; 
  int v17; 
  int v18; 
  uint32 v19; 
  sint16 v20; 
  sint16 v21; 
  sint16 v22; 
  sint16 v23; 
  int v25[8]; 
  sint16 v26; 
  sint16 v27; 
  sint16 v28; 
  sint16 v29; 
  sint16 v30; 
  sint16 v31; 
  sint16 v32; 
  sint16 v33; 
  sint16 v34; 
  sint16 v35; 
  sint16 v36; 
  sint16 v37; 

  sub_8005B8D4();
  sub_8005B614((uint32)a9, a1, v25);
  sub_8005BD24(v25);
  sub_8005BDB4(v25);
  v15 = 1;
  if ( TM3_DRAFT_U16(a1 + (44) * 2u) > 1u )
  {
    v16 = (a1 + (4) * 2u);
    v17 = 8;
    v18 = 96;
    do
    {
      v19 = (uint32)((uint32)(a1 + (v18) * 2u));
      v20 = TM3_DRAFT_I16(v19);
      v21 = TM3_DRAFT_I16(v19 + (1) * 2u);
      LOWORD(v19) = TM3_DRAFT_I16(v19 + (2) * 2u);
      v26 = v20;
      v27 = v21;
      v28 = (sint16)v19;
      if ( v15 == 1 )
        v29 = v20;
      else
        v29 = v20 + 32;
      v30 = v27;
      v31 = v28;
      v22 = TM3_DRAFT_U16(v16 + (49) * 2u);
      v23 = TM3_DRAFT_U16(v16 + (50) * 2u);
      v32 = TM3_DRAFT_U16(v16 + (48) * 2u);
      v33 = v22;
      v34 = v23;
      v35 = v32 + 32;
      v36 = v22;
      v37 = v23;
      v16 += (4) * 2u;
      v17 += 8;
      sub_8002A72C((int)&v26, 8421504, TM3_DRAFT_U32(dword_80089D14 + 392), a2, a3, 1, a4, 200);
      ++v15;
      v18 = v17 + 88;
    }
    while ( v15 < TM3_DRAFT_U16(a1 + (44) * 2u) );
  }
  sub_8005B978();
  return TM3_DRAFT_U16(a1 + 88u) ? v18 : 0u;
}

/* Unverified decompiler-derived draft */
uint32 sub_80046F1C(uint32 a1)
{
    FUNCTION_MARKER(0x80046F1Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  int v3; 
  int result; 
  int v5; 
  int v6; 
  int v7; 

  v2 = 0;
  if ( TM3_DRAFT_I32(0x800d340cu) <= 0 )
  {
LABEL_5:
    result = TM3_DRAFT_U32(4 * v2 - 2146619768 + 1424);
    if ( result != a1 )
      return result;
  }
  else
  {
    v3 = -2146619768;
    while ( TM3_DRAFT_U32(v3 + 1424) != a1 )
    {
      ++v2;
      v3 += 4;
      if ( v2 >= TM3_DRAFT_I32(0x800d340cu) )
        goto LABEL_5;
    }
  }
  v5 = 0;
  v6 = -2146624064;
  do
  {
    if ( a1 == TM3_DRAFT_U32(v6 + 104) )
      TM3_DRAFT_U32(v6 + 104) = 0;
    ++v5;
    v6 += 108;
  }
  while ( v5 < 5 );
  if ( TM3_DRAFT_U32(0x800d2f30u) )
  {
    if ( TM3_DRAFT_U32(0x800d2f2cu) )
    {
      if ( TM3_DRAFT_U32(0x800d2f2cu) == 1 )
        sub_80046ECC(TM3_DRAFT_U32(a1 + 3920), TM3_DRAFT_U32(a1 + 3924));
    }
    else
    {
      sub_80046AA8(TM3_DRAFT_U32(a1 + 3920), TM3_DRAFT_U32(a1 + 3924));
    }
  }
  if ( v2 < (sint32)(TM3_DRAFT_U32(0x800d340cu) - 1u) )
  {
    v7 = 4 * v2;
    do
    {
      TM3_DRAFT_U32(v7 - 2146619768 + 1424) = TM3_DRAFT_U32(4 * ++v2 - 2146619768 + 1424);
      v7 = 4 * v2;
    }
    while ( v2 < (sint32)(TM3_DRAFT_U32(0x800d340cu) - 1u) );
  }
  --TM3_DRAFT_U32(0x800d340cu);
  if ( TM3_DRAFT_I32(a1 + 3920) >= TM3_DRAFT_I32(0x800d2e90u) )
    return --TM3_DRAFT_U32(0x800d3410u);
  else
    return --TM3_DRAFT_U32(0x800d3414u);
}

/* Unverified decompiler-derived draft */
uint32 sub_800150FC(uint32 matrix, uint32 fixed_column, uint32 other_column)
{
    FUNCTION_MARKER(0x800150FCu, "SCUS_942.49");
    sint16 other[4], cross[4], fixed[4];
    uint32 remaining_column, other_ptr, fixed_ptr, cross_ptr;
    uint32 other_address = matrix + (other_column << 1);
    uint32 fixed_address = matrix + (fixed_column << 1);
    uint32 column, component;

    if (fixed_column == 0u)
        remaining_column = other_column == 1u ? 2u : 1u;
    else if (fixed_column == 1u)
        remaining_column = other_column == 0u ? 2u : 0u;
    else if (fixed_column == 2u)
        remaining_column = other_column == 0u ? 1u : 0u;
    else
    {
        /* TODO The original leaves the remaining column register undefined here */
        tm3_draft_unimplemented("150FC undefined remaining matrix column");
        return 0u;
    }

    for (component = 0u; component < 3u; ++component)
    {
        other[component] = TM3_DRAFT_I16(other_address + component * 6u);
        fixed[component] = TM3_DRAFT_I16(fixed_address + component * 6u);
    }
    other_ptr = TM3_DRAFT_LOCAL_ADDRESS(other, sizeof(other));
    fixed_ptr = TM3_DRAFT_LOCAL_ADDRESS(fixed, sizeof(fixed));
    cross_ptr = TM3_DRAFT_LOCAL_ADDRESS(cross, sizeof(cross));
    sub_8005B284(fixed_ptr, fixed_ptr);
    sub_80013EC8(fixed_ptr, other_ptr, cross_ptr);
    sub_8005B284(cross_ptr, cross_ptr);
    sub_80013EC8(cross_ptr, fixed_ptr, other_ptr);

    column = matrix + (remaining_column << 1);
    for (component = 0u; component < 3u; ++component)
        TM3_DRAFT_U16(other_address + component * 6u) = (uint16)other[component];
    for (component = 0u; component < 3u; ++component)
        TM3_DRAFT_U16(column + component * 6u) = (uint16)cross[component];
    for (component = 0u; component < 3u; ++component)
        TM3_DRAFT_U16(fixed_address + component * 6u) = (uint16)fixed[component];
    return (uint16)fixed[2];
}
