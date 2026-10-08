#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

#define dword_80089DD0 TM3_DRAFT_U32(0x80089DD0u)
#define dword_80089CA0 TM3_DRAFT_U32(0x80089CA0u)
#define dword_80089F00 TM3_DRAFT_U32(0x80089F00u)
#define dword_8007BCF4 TM3_DRAFT_U32(0x8007BCF4u)
#define dword_80089CFC TM3_DRAFT_U32(0x80089CFCu)
#define dword_80089760 TM3_DRAFT_U32(0x80089760u)
#define dword_80089764 TM3_DRAFT_U32(0x80089764u)
#define dword_80089C94 TM3_DRAFT_U32(0x80089C94u)
#define dword_80089BE8 TM3_DRAFT_U32(0x80089BE8u)
#define off_800804BC TM3_DRAFT_U32(0x800804BCu)
#define byte_800804E0 TM3_DRAFT_U8(0x800804E0u)
#define byte_800800F0 TM3_DRAFT_U8(0x800800F0u)
#define off_800800DC TM3_DRAFT_U32(0x800800DCu)
#define off_8008012C TM3_DRAFT_U32(0x8008012Cu)
#define byte_80080140 TM3_DRAFT_U8(0x80080140u)
#define dword_80081E38 TM3_DRAFT_U32(0x80081E38u)
#define word_80089D1C TM3_DRAFT_U16(0x80089D1Cu)
#define dword_80080E38 TM3_DRAFT_U32(0x80080E38u)
#define dword_8008263C TM3_DRAFT_U32(0x8008263Cu)
#define dword_80089D24 TM3_DRAFT_U32(0x80089D24u)
#define dword_80089CB8 TM3_DRAFT_U32(0x80089CB8u)
#define dword_80089E04 TM3_DRAFT_U32(0x80089E04u)
#define dword_80089D14 TM3_DRAFT_U32(0x80089D14u)
#define off_800883B0 TM3_DRAFT_U32(0x800883B0u)
#define off_800883B4 TM3_DRAFT_U32(0x800883B4u)
#define off_800883B8 TM3_DRAFT_U32(0x800883B8u)
#define off_800883CC TM3_DRAFT_U32(0x800883CCu)
#define off_800883D0 TM3_DRAFT_U32(0x800883D0u)
#define off_800883D4 TM3_DRAFT_U32(0x800883D4u)
#define byte_8007F11C TM3_DRAFT_U8(0x8007F11Cu)

/* Unverified decompiler-derived draft */
uint32 sub_8002A190(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9)
{
  int result; 
  uint32 v22; 
  int v23; 
  int v24; 
  int v25[4]; 
  sint16 v26; 
  char v27[12]; 
  sint16 v28[4]; 
  sint16 v29; 
  sint16 v30; 
  sint16 v31; 
  sint16 v32[4]; 
  sint16 v33; 
  sint16 v34; 
  sint16 v35; 
  char v36[4]; 
  char v37[4]; 

  result = TM3_DRAFT_U32(a7) + 48 < (unsigned int)a9;
  if ( TM3_DRAFT_U32(a7) + 48 < (unsigned int)a9 )
  {
    sub_8005B8D4();
    sub_8005C3C4(a1, (int)v27, v36);
    v32[0] = ((a2 > 0) - a2) >> 1;
    v28[0] = v32[0];
    v33 = a2 / 2;
    v29 = v33;
    v30 = ((a3 > 0) - a3) >> 1;
    v28[1] = v30;
    v34 = a3 / 2;
    v32[1] = v34;
    v35 = 0;
    v32[2] = 0;
    v31 = 0;
    v28[2] = 0;
    v25[1] = 0;
    v25[3] = 0;
    v25[0] = 4096;
    v25[2] = 4096;
    v26 = 4096;
    sub_8005BD24(v25);
    sub_8005BDB4(v25);
    v23 = sub_8005C3F4((int)v28, (int)&v29, (int)v32, (int)&v33, TM3_DRAFT_U32(a7) + 8, TM3_DRAFT_U32(a7) + 16, TM3_DRAFT_U32(a7) + 24, TM3_DRAFT_U32(a7) + 32, (int)v37, (int)v36);
    if ( v23 >= 9 )
    {
      v24 = -((96 - v23) & ((96 - v23) >> 31));
      if ( v24 >= dword_80089DD0 )
        v24 = dword_80089DD0 - 1;
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
        v22 = (uint32)(4 * v24 + a6);
        TM3_DRAFT_U8(TM3_DRAFT_U32(a7) + 7) |= 2u;
      }
      else
      {
        v22 = (uint32)(4 * v24 + a6);
      }
      TM3_DRAFT_U32(TM3_DRAFT_U32(a7)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a7)) & 0xFF000000 | TM3_DRAFT_U32(v22) & 0xFFFFFF;
      TM3_DRAFT_U32(v22) = TM3_DRAFT_U32(v22) & 0xFF000000 | TM3_DRAFT_U32(a7) & 0xFFFFFF;
      TM3_DRAFT_U32(a7) += 40;
    }
    uint32 carried_result = TM3_DRAFT_U32(a7);
    sub_8005B978();
    return carried_result;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003AFA8(uint32 a1)
{
  uint32 v2; 
  uint32 v3; 
  uint32 v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  uint32 v12; 
  int v13; 
  int v14; 
  int v15; 
  sint16 v16; 
  int v17; 
  sint32 result; 

  v2 = (uint32)(a1 + 133800);
  v3 = (uint32)(a1 + 24);
  v4 = (uint32)(a1 + 88);
  do
  {
    v5 = TM3_DRAFT_U32(v3 + (1) * 4u);
    v6 = TM3_DRAFT_U32(v3 + (2) * 4u);
    v7 = TM3_DRAFT_U32(v3 + (3) * 4u);
    TM3_DRAFT_U32(v2) = TM3_DRAFT_U32(v3);
    TM3_DRAFT_U32(v2 + (1) * 4u) = v5;
    TM3_DRAFT_U32(v2 + (2) * 4u) = v6;
    TM3_DRAFT_U32(v2 + (3) * 4u) = v7;
    v3 += (4) * 4u;
    v2 += (4) * 4u;
  }
  while ( v3 != v4 );
  sub_8005AE94(a1 + 133864);
  sub_8005ADC4(a1 + 133864, 1);
  sub_8005AD94(a1 + 133864, 0);
  v8 = dword_80089CA0;
  TM3_DRAFT_U16(a1 + 133880) = TM3_DRAFT_U8(dword_80089CA0 + 4) - TM3_DRAFT_U8(dword_80089CA0) + 1;
  v9 = 0;
  TM3_DRAFT_U16(a1 + 133882) = TM3_DRAFT_U8(v8 + 5) - TM3_DRAFT_U8(v8 + 1) + 1;
  TM3_DRAFT_U16(a1 + 133878) = TM3_DRAFT_U16(v8 + 2);
  TM3_DRAFT_U8(a1 + 133876) = TM3_DRAFT_U8(v8);
  TM3_DRAFT_U8(a1 + 133877) = TM3_DRAFT_U8(dword_80089CA0 + 1);
  v10 = 133964;
  sub_8005AEF4(a1 + 133884, 0, TM3_DRAFT_U32(0x800d2ef0u), TM3_DRAFT_U16(dword_80089CA0 + 6));
  sub_8005AE54(a1 + 133892);
  sub_8005AD94(a1 + 133892, 0);
  TM3_DRAFT_U8(a1 + 133896) = 8;
  TM3_DRAFT_U8(a1 + 133897) = 8;
  TM3_DRAFT_U8(a1 + 133898) = 8;
  TM3_DRAFT_U8(a1 + 133904) = 8;
  TM3_DRAFT_U8(a1 + 133905) = 8;
  TM3_DRAFT_U8(a1 + 133906) = 8;
  TM3_DRAFT_U8(a1 + 133912) = 8;
  TM3_DRAFT_U8(a1 + 133913) = 8;
  TM3_DRAFT_U8(a1 + 133914) = -1;
  TM3_DRAFT_U8(a1 + 133920) = 8;
  TM3_DRAFT_U8(a1 + 133921) = 8;
  TM3_DRAFT_U8(a1 + 133922) = -1;
  sub_8005AE54(a1 + 133928);
  sub_8005AD94(a1 + 133928, 0);
  v11 = a1;
  TM3_DRAFT_U8(a1 + 133932) = 8;
  TM3_DRAFT_U8(a1 + 133933) = 8;
  TM3_DRAFT_U8(a1 + 133934) = -1;
  TM3_DRAFT_U8(a1 + 133940) = 8;
  TM3_DRAFT_U8(a1 + 133941) = 8;
  TM3_DRAFT_U8(a1 + 133942) = -1;
  TM3_DRAFT_U8(a1 + 133948) = 8;
  TM3_DRAFT_U8(a1 + 133949) = 8;
  TM3_DRAFT_U8(a1 + 133950) = 8;
  TM3_DRAFT_U8(a1 + 133956) = 8;
  TM3_DRAFT_U8(a1 + 133957) = 8;
  TM3_DRAFT_U8(a1 + 133958) = 8;
  do
  {
    sub_8005AEB4(a1 + v10);
    sub_8005AD94(a1 + v10, 0);
    v12 = (uint32)(v11 + 133964);
    v11 += 16;
    ++v9;
    TM3_DRAFT_U8(v12 + (4) * 1u) = 0x80;
    TM3_DRAFT_U8(v12 + (5) * 1u) = 0x80;
    TM3_DRAFT_U8(v12 + (6) * 1u) = 0x80;
    v10 += 16;
  }
  while ( v9 < 3 );
  v13 = 0;
  v14 = a1;
  v15 = 134012;
  v16 = TM3_DRAFT_U16(a1 + 133880);
  TM3_DRAFT_U16(a1 + 133976) = 1;
  TM3_DRAFT_U16(a1 + 133992) = 1;
  TM3_DRAFT_U16(a1 + 134010) = 1;
  TM3_DRAFT_U16(a1 + 134008) = v16 - 2;
  do
  {
    sub_8005AE54(a1 + v15);
    sub_8005AD94(a1 + v15, 0);
    v17 = v14 + 134012;
    v14 += 36;
    v15 += 36;
    ++v13;
    TM3_DRAFT_U8(v17 + 5) = 0x80;
    TM3_DRAFT_U8(v17 + 21) = 64;
    result = v13 < 2;
    TM3_DRAFT_U8(v17 + 4) = 0;
    TM3_DRAFT_U8(v17 + 6) = -1;
    TM3_DRAFT_U8(v17 + 12) = 0;
    TM3_DRAFT_U16(v17 + 13) = 255;
    TM3_DRAFT_U8(v17 + 20) = 0;
    TM3_DRAFT_U8(v17 + 22) = 127;
    TM3_DRAFT_U8(v17 + 28) = 0;
    TM3_DRAFT_U8(v17 + 29) = 127;
    TM3_DRAFT_U8(v17 + 30) = 0;
  }
  while ( v13 < 2 );
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001B9A4(uint32 a1)
{
  int v2; 
  int result; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  sint16 v9; 
  signed int v10; 
  int v11; 
  int v12; 
  int v13; 
  sint32 v14; 
  int v15; 
  sint16 v16; 
  sint16 v17; 
  sint16 v18; 
  sint16 v19; 

  v2 = TM3_DRAFT_I16(a1 + 3386);
  if ( v2 != TM3_DRAFT_I16(a1 + 3388) )
  {
    TM3_DRAFT_U8(a1 + 3404) = 0;
    TM3_DRAFT_U8(a1 + 3405) = 0;
    v2 = TM3_DRAFT_I16(a1 + 3386);
  }
  result = -2146893824;
  if ( v2 >= 0 )
  {
    v4 = 28 * v2 + dword_80089F00;
    if ( TM3_DRAFT_U8(v4 + 9) != 3 || TM3_DRAFT_U8(a1 + 3405) )
    {
      v15 = 28 * TM3_DRAFT_I16(a1 + 3386) + dword_80089F00;
      result = 5;
      if ( TM3_DRAFT_U8(v15 + 9) == 5 )
      {
        result = TM3_DRAFT_U8(a1 + 3404);
        if ( !TM3_DRAFT_U8(a1 + 3404) )
        {
          result = 1;
          if ( TM3_DRAFT_U16(v15 + 12) >= TM3_DRAFT_I16(a1 + 3384) )
          {
            TM3_DRAFT_U32(a1 + 3996) = 0;
            TM3_DRAFT_U8(a1 + 3404) = 1;
          }
        }
      }
    }
    else
    {
      v5 = TM3_DRAFT_I16(a1 + 3384);
      result = TM3_DRAFT_U16(v4 + 12) < v5;
      if ( TM3_DRAFT_U16(v4 + 12) >= v5 )
      {
        result = TM3_DRAFT_U8(v4 + 8);
        v6 = result - 1;
        if ( result - 1 >= 0 )
        {
          while ( 1 )
          {
            v7 = 28 * TM3_DRAFT_I16(a1 + 3386) + dword_80089F00;
            v8 = 28 * TM3_DRAFT_U16(4 * v6 + TM3_DRAFT_U32(v7 + 4) + 2) + dword_80089F00;
            result = 4;
            --v6;
            if ( TM3_DRAFT_U8(v8 + 9) == 4 )
              break;
            if ( v6 < 0 )
              return result;
          }
          v16 = TM3_DRAFT_U16(v8) - TM3_DRAFT_U16(v7);
          v9 = TM3_DRAFT_U16(v8 + 2) - TM3_DRAFT_U16(28 * TM3_DRAFT_I16(a1 + 3386) + dword_80089F00 + 2);
          v18 = v9;
          v10 = sub_8005B124(v16 * v16 + v9 * v9);
          if ( v10 )
          {
            v17 = (v16 << 12) / v10;
            v19 = (v18 << 12) / v10;
          }
          else
          {
            v17 = 0;
            v19 = 0;
          }
          v11 = (TM3_DRAFT_I16(a1 + 1540) * v17 + TM3_DRAFT_I16(a1 + 1552) * v19) / 4096;
          v12 = -4096;
          if ( v11 >= -4096 )
          {
            v12 = 4096;
            if ( v11 < 4097 )
              v12 = (TM3_DRAFT_I16(a1 + 1540) * v17 + TM3_DRAFT_I16(a1 + 1552) * v19) / 4096;
          }
          if ( v12 >= 0 )
            v13 = 2048 - TM3_DRAFT_I16(0x8007BCF4u + v12);
          else
            v13 = TM3_DRAFT_I16(0x8007BCF4u - v12) + 2048;
          v14 = v13 >= 684;
          result = 30;
          if ( !v14 )
          {
            TM3_DRAFT_U16(a1 + 3406) = 30;
            result = 1;
            TM3_DRAFT_U8(a1 + 3405) = 1;
          }
        }
      }
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003138C(uint32 a1)
{
  uint32 v2; 
  sint16 v3; 
  sint16 v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  signed int v11; 
  sint16 v12; 
  sint16 v13; 
  int v14; 
  int result; 
  int v16; 
  int v17; 
  sint16 v18; 
  uint32 v19; 
  uint16 v20; 
  int v21; 
  int v22[8]; 
  sint16 v25; 
  sint16 v26; 
  sint16 v27; 
  sint16 v28[4]; 
  int v30[4]; 
  int v31[2]; 

  v2 = (uint32)(a1 + 40);
  v3 = TM3_DRAFT_U16(a1 + 42);
  v4 = TM3_DRAFT_U16(a1 + 44);
  TM3_DRAFT_U16(a1 + 32) = TM3_DRAFT_U16(a1 + 40);
  TM3_DRAFT_U16(a1 + 34) = v3;
  TM3_DRAFT_U16(a1 + 36) = v4;
  sub_800140C8(v2, 136, (uint32)(a1 + 48), v2);
  v25 = (TM3_DRAFT_I16(a1 + 32) + TM3_DRAFT_I16(a1 + 40)) / 2;
  v5 = TM3_DRAFT_I16(a1 + 34) + TM3_DRAFT_I16(a1 + 42);
  v26 = v5 / 2;
  v6 = TM3_DRAFT_I16(a1 + 36) + TM3_DRAFT_I16(a1 + 44);
  v7 = a1 - 20;
  v27 = v6 / 2;
  TM3_DRAFT_U16(a1 - 20) = v25;
  TM3_DRAFT_U16(v7 + 2) = v5 / 2;
  TM3_DRAFT_U16(v7 + 4) = v6 / 2;
  v8 = TM3_DRAFT_I16(v2 + (1) * 2u);
  v9 = TM3_DRAFT_I16(a1 + 34);
  v10 = TM3_DRAFT_I16(v2 + (2) * 2u) - TM3_DRAFT_I16(a1 + 36);
  v30[0] = TM3_DRAFT_I16(a1 + 40) - TM3_DRAFT_I16(a1 + 32);
  v30[2] = v10;
  v30[1] = v8 - v9;
  v11 = sub_80013D64((int)v30);
  v12 = TM3_DRAFT_U16(a1 + 50);
  v13 = TM3_DRAFT_U32(0x80089CFCu + (3) * 4u);
  TM3_DRAFT_U32(a1 - 24) = v11 / 2;
  TM3_DRAFT_U16(a1 + 50) = v12 + v13;
  if ( sub_80013484((uint32)(a1 + 32), (uint32)v2, 0, v22) == 1 )
  {
    v31[0] = dword_80089760;
    v31[1] = dword_80089764;
    if ( v22[6] != -1 )
      sub_80012C20(TM3_DRAFT_U16(a1 + 46), v22[6], v2);
    sub_800274E0(v2, 0, 128, 8, 1, 800, TM3_DRAFT_I8(32 * v22[5] + dword_80089C94), (int)v31, -1);
    return sub_8004A570(a1);
  }
  else
  {
    sub_8005B284(a1 + 48, (int)v28);
    v16 = TM3_DRAFT_I16(a1 + 42);
    v17 = TM3_DRAFT_I16(a1 + 44);
    TM3_DRAFT_U32(a1 + 20) = TM3_DRAFT_I16(a1 + 40);
    TM3_DRAFT_U32(a1 + 24) = v16;
    TM3_DRAFT_U32(a1 + 28) = v17;
    TM3_DRAFT_U16(a1 + 4) = v28[0];
    TM3_DRAFT_U16(a1 + 10) = v28[1];
    TM3_DRAFT_U16(a1 + 16) = v28[2];
    v18 = v28[2];
    TM3_DRAFT_U16(a1 + 6) = 0;
    TM3_DRAFT_U16(a1) = v18;
    TM3_DRAFT_U16(a1 + 12) = -v28[0];
    sub_800150FC(a1, 2, 0);
    if ( TM3_DRAFT_U16(a1 + 62) >= 2u )
    {
      v19 = TM3_DRAFT_U32(a1 + 64);
      v20 = TM3_DRAFT_U16(a1 + 60) + 1;
      TM3_DRAFT_U16(a1 + 60) = v20;
      if ( v20 >= (sint16)TM3_DRAFT_I16(v19) )
        TM3_DRAFT_U16(a1 + 60) = 0;
      TM3_DRAFT_U16(a1 + 62) = 0;
    }
    result = TM3_DRAFT_U16(a1 + 62) + 1;
    TM3_DRAFT_U16(a1 + 62) = result;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80029ED8(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9, uint32 a10, uint32 a11, uint32 a12, uint32 a13, uint32 a14)
{
  uint32 ida_A0, ida_A2, ida_T1, ida_V0, ida_V1; /* TODO Explicit adapter values */
  int v16; 
  int v17; 
  uint32 v18; 
  int v20; 
  uint32 v21; 
  int v22; 
  int v23; 
  char v24; 
  int v28; 
  int v31; 
  int v32; 
  int v34; 
  uint32 v35; 

  if ( TM3_DRAFT_U32(a9) + 52 * (unsigned int)TM3_DRAFT_U8(a1 + (1) * 1u) >= a10 )
    return 0;
  v16 = 528482292;
  v17 = TM3_DRAFT_U8(a1);
  v18 = (uint32)(a2 + TM3_DRAFT_U32(a1 +(1) * 4u));
  ida_A2 = a3 + 8 * TM3_DRAFT_U16(a1 +(1) * 2u);
  if ( TM3_DRAFT_U8(a1) )
  {
    do
    {
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($a2)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($a2)");
  tm3_draft_unimplemented("TODO lwc2    $2, 8($a2)");
  tm3_draft_unimplemented("TODO lwc2    $3, 0xC($a2)");
  tm3_draft_unimplemented("TODO lwc2    $4, 0x10($a2)");
  tm3_draft_unimplemented("TODO lwc2    $5, 0x14($a2)");
      v16 += 12;
      /* TODO GTE adapters */
  tm3_draft_gte_command(0x280030u);
      v17 -= 3;
      ida_A2 += 24;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO swc2    $12, 0($a0)");
  tm3_draft_unimplemented("TODO swc2    $13, 4($a0)");
  tm3_draft_unimplemented("TODO swc2    $14, 8($a0)");
    }
    while ( v17 > 0 );
  }
  v20 = 0;
  if ( TM3_DRAFT_U8(a1 + (1) * 1u) )
  {
    v21 = (v18 + (3) * 4u);
    do
    {
      v22 = TM3_DRAFT_U8((v21 - (7) * 4u));
      v23 = TM3_DRAFT_U8((v21 - (6) * 4u));
      v24 = TM3_DRAFT_U8((v21 + (3) * 4u));
      ida_T1 = 4 * TM3_DRAFT_U8((v21 - (8) * 4u)) + 528482304;
      ida_V1 = 4 * v22 + 528482304;
      ida_V0 = 4 * v23 + 528482304;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $12, 0($t1)");
  tm3_draft_unimplemented("TODO lwc2    $13, 0($v1)");
  tm3_draft_unimplemented("TODO lwc2    $14, 0($v0)");
      v28 = TM3_DRAFT_U8((v21 - (9) * 4u));
      if ( v28 == 56 )
      {
        TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 8) = TM3_DRAFT_U32(4 * TM3_DRAFT_U8((v21 - (8) * 4u)) + 0x1F800000);
        /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
  ida_A2 = tm3_draft_gte_read_data(24u);
        if ( v24 || ida_A2 > 0 )
        {
          ida_A0 = (uint32)(4 * TM3_DRAFT_U8((v21 - (5) * 4u)) + 528482304);
          /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $12, 0($a0)");
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 16) = TM3_DRAFT_U32(4 * v22 + 0x1F800000);
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 24) = TM3_DRAFT_U32(4 * v23 + 0x1F800000);
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 32) = TM3_DRAFT_U32(ida_A0);
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 4) = TM3_DRAFT_U32(v18);
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 12) = TM3_DRAFT_U32((v21 - (1) * 4u));
          v31 = 36;
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 20) = TM3_DRAFT_U32(v21);
          v32 = 8;
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 28) = TM3_DRAFT_U32(v21 + (1) * 4u);
          goto LABEL_17;
        }
      }
      else
      {
        if ( v28 != 48 )
          return 0;
        /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
  ida_A2 = tm3_draft_gte_read_data(24u);
        TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 8) = TM3_DRAFT_U32(4 * TM3_DRAFT_U8((v21 - (8) * 4u)) + 0x1F800000);
        v34 = 4 * v22;
        if ( v24 )
        {
          v35 = (uint32)(v34 + 528482304);
LABEL_16:
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 16) = TM3_DRAFT_U32(v35);
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 24) = TM3_DRAFT_U32(4 * v23 + 0x1F800000);
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 4) = TM3_DRAFT_U32(v18);
          v32 = 6;
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 12) = TM3_DRAFT_U32((v21 - (1) * 4u));
          v31 = 28;
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9) + 20) = TM3_DRAFT_U32(v21);
LABEL_17:
          TM3_DRAFT_U32(TM3_DRAFT_U32(a9)) = TM3_DRAFT_I32(a4) & 0xFFFFFF | (v32 << 24);
          v21 += (5) * 4u;
          TM3_DRAFT_I32(a4) = TM3_DRAFT_U32(a9) & 0xFFFFFF;
          v18 += (5) * 4u;
          TM3_DRAFT_U32(a9) += v31;
          goto LABEL_18;
        }
        v35 = (uint32)(v34 + 528482304);
        if ( ida_A2 > 0 )
          goto LABEL_16;
      }
      v21 += (5) * 4u;
      v18 += (5) * 4u;
LABEL_18:
      ++v20;
    }
    while ( v20 < TM3_DRAFT_U8(a1 + (1) * 1u) );
  }
  return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_800525E4(void)
{
  int v0; 
  int v1; 
  int v2; 
  int v3; 
  uint32 v4; 
  int result; 
  int v6; 
  uint32 v7; 
  uint32 v8; 

  TM3_DRAFT_U32(0x80089BE8u + (1) * 4u) = 0;
  if ( !sub_80052874() )
    TM3_DRAFT_U32(0x800d2968u) = 0;
  if ( !sub_80052978() )
    TM3_DRAFT_U32(0x800d2964u) = 0;
  v0 = 0;
  v1 = 0;
  if ( TM3_DRAFT_U8(TM3_DRAFT_U32(0x800804BCu) + 20) )
  {
    v2 = 0;
    while ( !sub_8004C6C0(TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804BCu) + v2 + 28)) && TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804BCu) + v2 + 28) != -2146617632 )
    {
      ++v1;
      v2 += 28;
      if ( v1 >= TM3_DRAFT_U8(TM3_DRAFT_U32(0x800804BCu + (0) * 4u) + 20) )
        goto LABEL_11;
    }
    v0 = v1;
  }
LABEL_11:
  v3 = 0;
  if ( byte_800800F0 )
  {
    v4 = 0x800800DCu;
    do
    {
      if ( sub_8004C6C0((uint32)TM3_DRAFT_U32(v4 + 28)) || TM3_DRAFT_U32(v4 + 28) == (uint32)-2146617632 )
      {
        if ( TM3_DRAFT_U32(0x800d2968u) <= 0 )
        {
          if ( TM3_DRAFT_U32(0x800d296cu) )
            TM3_DRAFT_U32(v4 + 28) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804BCu) + 28 * v0 + 28);
          else
            TM3_DRAFT_U32(v4 + 28) = TM3_DRAFT_U32(0x800804BCu + (0) * 4u);
          TM3_DRAFT_U32(TM3_DRAFT_U32(v4 + 28) +(3) * 4u) = 0x800800DCu;
        }
        else
        {
          TM3_DRAFT_U32(v4 + 28) = (uint32)0x8008012Cu;
        }
      }
      ++v3;
      v4 += 28;
    }
    while ( v3 < (uint8)byte_800800F0 );
  }
  result = (uint8)byte_80080140;
  v6 = 0;
  if ( byte_80080140 )
  {
    v7 = 0x8008012Cu;
    do
    {
      if ( (sub_8004C6C0((uint32)TM3_DRAFT_U32(v7 + 28)) || TM3_DRAFT_U32(v7 + 28) == (uint32)-2146617632) && TM3_DRAFT_U32(0x800d2968u) > 0 )
      {
        if ( TM3_DRAFT_U32(0x800d296cu) )
          v8 = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804BCu) + 28 * v0 + 28);
        else
          v8 = TM3_DRAFT_U32(0x800804BCu + (0) * 4u);
        TM3_DRAFT_U32(v7 + 28) = v8;
        TM3_DRAFT_U32(TM3_DRAFT_U32(v7 + 28) +(3) * 4u) = 0x8008012Cu;
      }
      result = ++v6 < (uint8)byte_80080140;
      v7 += 28;
    }
    while ( v6 < (uint8)byte_80080140 );
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002D3B4(uint32 a1, uint32 a2)
{
  int normal_input[4];
  sint16 normal_output[4];
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  signed int v11; 
  sint16 v13; 
  sint16 v14; 
  sint16 v15; 
  sint16 v16; 
  sint16 v17; 
  int v18; 
  int v19; 
  signed int v20; 

  v20 = 0x80000000;
  v3 = 0;
  v13 = TM3_DRAFT_U16(a1 - 20);
  v14 = TM3_DRAFT_U16(a1 - 20 + 2);
  v15 = TM3_DRAFT_U16(a1 - 20 + 4);
  v4 = 0;
  if ( TM3_DRAFT_U32(0x800d340cu) > 0 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = TM3_DRAFT_U32(v5 - 2146619768 + 1424);
      if ( v6 != a1 )
      {
        v7 = v6 - 20;
        if ( TM3_DRAFT_U8(a1 + 3328) != 1 )
          goto LABEL_9;
        if ( TM3_DRAFT_U8(v6 + 3328) )
        {
          v7 = v6 - 20;
          if ( TM3_DRAFT_U8(v6 + 3328) != 1 )
            goto LABEL_9;
          if ( TM3_DRAFT_U32(0x800d2f2cu) )
            break;
        }
      }
LABEL_14:
      ++v3;
      v5 = 4 * v3;
      if ( v3 >= TM3_DRAFT_U32(0x800d340cu) )
        return v4;
    }
    v7 = v6 - 20;
LABEL_9:
    v8 = sub_80015764(TM3_DRAFT_I16(v6 - 20) - v13, TM3_DRAFT_I16(v7 + 2) - v14, TM3_DRAFT_I16(v7 + 4) - v15);
    v18 = TM3_DRAFT_I16(a2 + 4);
    v19 = TM3_DRAFT_I16(a2 + 16);
    v9 = 1 - ((1 - v8) & ((1 - v8) >> 31));
    normal_input[0] = TM3_DRAFT_I16(v6 - 20) - TM3_DRAFT_I32(a2 + 20);
    normal_input[1] = TM3_DRAFT_I16(v6 - 18) - TM3_DRAFT_I32(a2 + 24);
    normal_input[2] = TM3_DRAFT_I16(v6 - 16) - TM3_DRAFT_I32(a2 + 28);
    sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(normal_input, sizeof(normal_input)), TM3_DRAFT_LOCAL_ADDRESS(normal_output, sizeof(normal_output)));
    v16 = (sint16)normal_output[0];
    v17 = (sint16)normal_output[2];
    v10 = v18 * v16 + v19 * v17;
    if ( v10 < 0 )
      v11 = abs32(((16 * v10 + 2048) >> 12) + v9) + 0x80000000;
    else
      v11 = ((16 * v10 + 2048) >> 12) - v9;
    if ( v11 >= v20 )
    {
      v20 = v11;
      v4 = v6;
    }
    goto LABEL_14;
  }
  return v4;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002ADAC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, ...)
{
  int result; 
  int v19; 
  int v20; 
  uint32 v21; 
  int v22; 
  sint16 v23; 
  uint32 v24; 
  uint32 v25; 
  int v26; 
  int var4[3]; 

  result = TM3_DRAFT_U32(a4) + 32 < (unsigned int)a6;
  if ( TM3_DRAFT_U32(a4) + 32 < (unsigned int)a6 )
  {
    v19 = sub_8005C3F4(a1, a1 + 8, a1 + 16, a1 + 24, TM3_DRAFT_U32(a4) + 8, TM3_DRAFT_U32(a4) + 12, TM3_DRAFT_U32(a4) + 16, TM3_DRAFT_U32(a4) + 20, (int)&v26, (int)var4);
    result = v19 < 9;
    if ( v19 >= 9 )
    {
      v20 = (0u - ((a7 - v19) & ((a7 - v19) >> 31)));
      if ( v20 >= dword_80089DD0 )
        v20 = dword_80089DD0 - 1;
      TM3_DRAFT_U32(TM3_DRAFT_U32(a4) + 4) = a2;
      TM3_DRAFT_U8(TM3_DRAFT_U32(a4) + 3) = 5;
      TM3_DRAFT_U8(TM3_DRAFT_U32(a4) + 7) = 40;
      if ( a5 )
      {
        v21 = (uint32)(4 * v20 + a3);
        TM3_DRAFT_U8(TM3_DRAFT_U32(a4) + 7) |= 2u;
        TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) & 0xFF000000 | TM3_DRAFT_U32(v21) & 0xFFFFFF;
        TM3_DRAFT_U32(v21) = TM3_DRAFT_U32(v21) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
        v22 = TM3_DRAFT_U32(a4) + 24;
        TM3_DRAFT_U32(a4) = v22;
        if ( a5 == 4 )
          v23 = 0;
        else
          v23 = 32 * (a5 & 3);
        sub_8005AEF4(v22, 0, TM3_DRAFT_U32(0x800d2ef0u), v23);
        v24 = (uint32)(4 * v20 + a3);
        TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) & 0xFF000000 | TM3_DRAFT_U32(v24) & 0xFFFFFF;
        TM3_DRAFT_U32(v24) = TM3_DRAFT_U32(v24) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
        result = TM3_DRAFT_U32(a4) + 8;
      }
      else
      {
        v25 = (uint32)(4 * v20 + a3);
        TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) & 0xFF000000 | TM3_DRAFT_U32(v25) & 0xFFFFFF;
        TM3_DRAFT_U32(v25) = TM3_DRAFT_U32(v25) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
        result = TM3_DRAFT_U32(a4) + 24;
      }
      TM3_DRAFT_U32(a4) = result;
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80029088(uint32 a1)
{
  uint32 v2; 
  sint16 v3; 
  sint16 v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  signed int v11; 
  sint16 v12; 
  sint16 v13; 
  int v14; 
  sint16 v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  int result; 
  int v20[8]; 
  sint16 v22; 
  sint16 v23; 
  sint16 v24; 
  int v25[4]; 
  sint16 v26[4]; 

  v2 = (uint32)(a1 + 12);
  v3 = TM3_DRAFT_U16(a1 + 14);
  v4 = TM3_DRAFT_U16(a1 + 16);
  TM3_DRAFT_U16(a1 + 4) = TM3_DRAFT_U16(a1 + 12);
  TM3_DRAFT_U16(a1 + 6) = v3;
  TM3_DRAFT_U16(a1 + 8) = v4;
  sub_800140C8(v2, 136, (uint32)(a1 + 20), v2);
  v22 = (TM3_DRAFT_I16(a1 + 4) + TM3_DRAFT_I16(a1 + 12)) / 2;
  v5 = TM3_DRAFT_I16(a1 + 6) + TM3_DRAFT_I16(a1 + 14);
  v23 = v5 / 2;
  v6 = TM3_DRAFT_I16(a1 + 8) + TM3_DRAFT_I16(a1 + 16);
  v7 = a1 - 20;
  v24 = v6 / 2;
  TM3_DRAFT_U16(a1 - 20) = v22;
  TM3_DRAFT_U16(v7 + 2) = v5 / 2;
  TM3_DRAFT_U16(v7 + 4) = v6 / 2;
  v8 = TM3_DRAFT_I16(v2 + (1) * 2u);
  v9 = TM3_DRAFT_I16(a1 + 6);
  v10 = TM3_DRAFT_I16(v2 + (2) * 2u) - TM3_DRAFT_I16(a1 + 8);
  v25[0] = TM3_DRAFT_I16(a1 + 12) - TM3_DRAFT_I16(a1 + 4);
  v25[2] = v10;
  v25[1] = v8 - v9;
  v11 = sub_80013D64((int)v25);
  TM3_DRAFT_U32(a1 - 24) = TM3_DRAFT_U16(a1 + 46)
                       - ((TM3_DRAFT_U16(a1 + 46) - v11 / 2) & ((TM3_DRAFT_U16(a1 + 46) - v11 / 2) >> 31));
  if ( sub_80013484((uint32)(a1 + 4), (uint32)v2, 0, v20) == 1 )
  {
    if ( v20[6] != -1 )
      sub_80012C20(TM3_DRAFT_U16(a1 + 18), v20[6], v2);
    return sub_8004A570(a1);
  }
  if ( TM3_DRAFT_U16(a1 + 10) >> 1 < TM3_DRAFT_U32(a1 + 28) && (sub_80039FD4() & 0x3F) == 1 )
  {
    v12 = TM3_DRAFT_U16(a1 + 16);
    v13 = TM3_DRAFT_U16(a1 + 14) - 80;
    v26[0] = TM3_DRAFT_U16(a1 + 12);
    v26[1] = v13;
    v26[2] = v12;
    sub_800276AC((int)v26, 2, 128, 0, 0, -2);
  }
  if ( TM3_DRAFT_U16(a1 + 34) >= (unsigned int)TM3_DRAFT_U16(a1 + 36) )
  {
    v14 = TM3_DRAFT_U16(a1 + 32);
    if ( v14 != 2 )
      TM3_DRAFT_U16(a1 + 32) = v14 - 1;
    TM3_DRAFT_U16(a1 + 34) = 0;
  }
  v15 = TM3_DRAFT_U16(a1 + 40);
  v16 = TM3_DRAFT_U32(a1 + 28);
  ++TM3_DRAFT_U16(a1 + 34);
  v17 = TM3_DRAFT_U16(a1 + 42);
  TM3_DRAFT_U16(a1 + 40) = v15 + 8;
  v18 = TM3_DRAFT_U16(a1 + 10);
  TM3_DRAFT_U32(a1 + 28) = v16 + 1;
  result = v17 + 8;
  TM3_DRAFT_U16(a1 + 42) = result;
  if ( v18 < v16 )
    return sub_8004A570(a1);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800317D0(uint32 a1, uint32 a2)
{
  uint8 tuple_26[16];
  uint8 tuple_23[16];
  uint8 tuple_20[16];
  uint8 tuple_15[8];
  unsigned int result; 
  sint16 v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  sint16 v10; 
  sint16 v11; 
  int v12; 
  sint16 v13; 
  sint32 v14; 
  sint16 v18[4]; 
  int v19[4]; 

  if ( TM3_DRAFT_U16(a1 + 110) )
  {
    if ( TM3_DRAFT_U8(a1 + 321) == 1 )
      sub_8002DF70(a1);
    result = TM3_DRAFT_U32(a1 + 148) + 1;
    v4 = TM3_DRAFT_U16(a1 + 110) - 1;
    TM3_DRAFT_U16(a1 + 110) = v4;
    TM3_DRAFT_U32(a1 + 148) = result;
    if ( !v4 )
      return sub_8004A570(a1);
    return result;
  }
  v5 = sub_80026F98(a1, a1, TM3_DRAFT_U16(a1 + 104), TM3_DRAFT_U16(a1 + 104));
  v7 = TM3_DRAFT_I16(a1 + 10);
  v8 = TM3_DRAFT_I16(a1 + 12);
  TM3_DRAFT_U32(a1 + 136) = TM3_DRAFT_I16(a1 + 8);
  TM3_DRAFT_U32(a1 + 140) = v7;
  TM3_DRAFT_U32(a1 + 144) = v8;
  if ( !v5 )
    return sub_8002DEA4(a1);
  v9 = TM3_DRAFT_I16(a1 + 132);
  v19[0] = TM3_DRAFT_I16(a1 + 120);
  v19[1] = 0;
  v19[2] = v9;
  sub_8005B284(a1 + 16, (int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u));
  sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(v19, sizeof(v19)), TM3_DRAFT_LOCAL_ADDRESS(v18, sizeof(v18)));
  sub_80013FB4((int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 0u), 768, v18);
  TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u) += TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 0u);
  TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 4u) += TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 8u);
  TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 2u) += TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 4u);
  sub_8005B284((int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u), (int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u));
  sub_80013FB4((int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 0u), TM3_DRAFT_U16(a1 + 112), (TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u));
  v10 = TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 4u);
  v11 = TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 8u);
  TM3_DRAFT_U16(a1 + 16) = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 0u);
  TM3_DRAFT_U16(a1 + 18) = v10;
  TM3_DRAFT_U16(a1 + 20) = v11;
  sub_8005B254((uint32)(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 0u), (uint32)(TM3_DRAFT_LOCAL_ADDRESS(tuple_26, sizeof(tuple_26)) + 0u));
  TM3_DRAFT_U16(a1 + 120) = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_26, sizeof(tuple_26)) + 0u);
  TM3_DRAFT_U16(a1 + 126) = TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_26, sizeof(tuple_26)) + 4u);
  TM3_DRAFT_U16(a1 + 132) = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_26, sizeof(tuple_26)) + 8u);
  v12 = a1 + 116;
  if ( TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_26, sizeof(tuple_26)) + 0u) && TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_26, sizeof(tuple_26)) + 8u) )
  {
    v13 = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_26, sizeof(tuple_26)) + 8u);
    TM3_DRAFT_U16(a1 + 122) = 0;
    TM3_DRAFT_U16(a1 + 116) = v13;
    TM3_DRAFT_U16(a1 + 128) = -(sint16)TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_26, sizeof(tuple_26)) + 0u);
    v12 = a1 + 116;
  }
  sub_800150FC(v12, 2, 0);
  if ( TM3_DRAFT_U8(a1 + 321) )
    sub_8002DF70(a1);
  result = TM3_DRAFT_U32(a1 + 148) + 1;
  v14 = TM3_DRAFT_U32(a1 + 152) >= result;
  TM3_DRAFT_U32(a1 + 148) = result;
  if ( !v14 )
  {
    TM3_DRAFT_U32(a1 + 68) = 0;
    return sub_8002DEA4(a1);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80038F24(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
  uint32 ida_A0, ida_V0; /* TODO Explicit adapter values */
  int result; 
  sint16 v17; 
  int v18; 
  int v19; 
  int v20; 
  int v22; 
  int v25; 
  int v26; 
  uint32 v27; 
  int v28; 
  sint16 v29[5]; 
  sint16 v30; 
  sint16 v31; 
  sint16 v32; 
  sint16 v33; 
  sint16 v34; 
  sint16 v35; 
  sint16 v36; 
  sint16 v37; 
  sint16 v38[2]; 
  sint16 v39; 

  result = TM3_DRAFT_I32(a3) + 40 < a4;
  if ( TM3_DRAFT_I32(a3) + 40 < a4 )
  {
    v17 = TM3_DRAFT_U16(a5 + 4);
    v38[0] = TM3_DRAFT_U16(a5);
    v38[1] = 0;
    v39 = v17;
    sub_8005B284((int)v38, (int)v38);
    v18 = TM3_DRAFT_I16(a1 + 8);
    v19 = (v38[0] * (v18 / 32)) >> 12;
    v32 = TM3_DRAFT_U16(a1) - v19;
    v29[0] = v32;
    v35 = TM3_DRAFT_U16(a1) + v19;
    v29[4] = v35;
    v20 = (v39 * (v18 / 32)) >> 12;
    v30 = TM3_DRAFT_U16(a1 + 2) - TM3_DRAFT_I16(a1 + 10) / 16;
    v29[1] = v30;
    v36 = TM3_DRAFT_U16(a1 + 2);
    v33 = v36;
    v34 = TM3_DRAFT_U16(a1 + 4) - v20;
    v29[2] = v34;
    v37 = TM3_DRAFT_U16(a1 + 4) + v20;
    v31 = v37;
    ida_V0 = v29;
    v22 = TM3_DRAFT_I32(a3);
    /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($v0)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($v0)");
  tm3_draft_unimplemented("TODO lwc2    $2, 8($v0)");
  tm3_draft_unimplemented("TODO lwc2    $3, 0xC($v0)");
  tm3_draft_unimplemented("TODO lwc2    $4, 0x10($v0)");
  tm3_draft_unimplemented("TODO lwc2    $5, 0x14($v0)");
  tm3_draft_gte_command(0x280030u);
    TM3_DRAFT_U32(v22 + 12) = TM3_DRAFT_U32(a1 + 20);
    TM3_DRAFT_U32(v22 + 20) = TM3_DRAFT_U32(a1 + 24);
    /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO swc2    $12, 0($v0)");
  tm3_draft_unimplemented("TODO swc2    $13, 0($v0)");
  tm3_draft_unimplemented("TODO swc2    $14, 0($v0)");
  ida_A0 = tm3_draft_gte_read_data(19u);
    ida_V0 = &v35;
    /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($v0)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($v0)");
  tm3_draft_gte_command(0x180001u);
    TM3_DRAFT_U16(v22 + 28) = TM3_DRAFT_U16(a1 + 28);
    result = TM3_DRAFT_U16(a1 + 30);
    TM3_DRAFT_U16(v22 + 36) = result;
    if ( ida_A0 > 0 )
    {
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO swc2    $14, 0($v0)");
      v25 = (ida_A0 >> 2) - 24;
      if ( v25 < 0 )
        v25 = 0;
      result = v25 < dword_80089DD0;
      if ( v25 < dword_80089DD0 )
      {
        v26 = TM3_DRAFT_U32(a1 + 16);
        TM3_DRAFT_U8(v22 + 3) = 9;
        v27 = (uint32)(4 * v25 + a2);
        TM3_DRAFT_U32(v22 + 4) = v26;
        TM3_DRAFT_U8(v22 + 7) = 44;
        result = TM3_DRAFT_I32(v27) & 0xFFFFFF | 0x9000000;
        v28 = v22 & 0xFFFFFF;
        TM3_DRAFT_U32(v22) = result;
        v22 += 40;
        TM3_DRAFT_I32(v27) = v28;
      }
    }
    TM3_DRAFT_I32(a3) = v22;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002F36C(uint32 a1)
{
  int v1; 
  int v2; 
  uint32 v3; 
  int v4; 
  int v5; 
  uint32 v6; 
  uint16 v7; 
  sint16 v8; 
  sint16 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  uint32 v16; 
  uint32 v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  sint32 result; 
  uint16 v27; 
  sint16 v28; 
  sint16 v29; 
  int v30[8]; 

  v1 = 0;
  v2 = 0;
  v3 = dword_80081E38;
  v4 = a1 - 20;
  v5 = (uint16)word_80089D1C;
  v6 = dword_80081E38;
  v7 = TM3_DRAFT_U16(a1 - 20);
  v8 = TM3_DRAFT_U16(a1 - 20 + 2);
  v9 = TM3_DRAFT_U16(v4 + 4);
  v27 = v7;
  v28 = v8;
  v29 = v9;
  do
  {
    v10 = 1024;
    if ( (v1 & 0x400000) != 0 )
    {
      v11 = TM3_DRAFT_I32(v3);
      v12 = TM3_DRAFT_I16(v3);
    }
    else
    {
      v11 = TM3_DRAFT_I32(v6);
      v12 = -TM3_DRAFT_I16(v6);
    }
    v13 = v12;
    v14 = 0;
    v15 = v2;
    v16 = dword_80080E38;
    v17 = (0x8008263Cu + (511) * 4u);
    do
    {
      v10 -= 409;
      v18 = (v5 * SHIWORD(TM3_DRAFT_U32(0x80081E38u + (abs32(v10)) * 4u)) + 2048) >> 12;
      v16 += (409) * 4u;
      TM3_DRAFT_U16(v15 - 2146917040) = v27 + ((v18 * (v11 >> 16) + 2048) >> 12);
      v17 -= (409) * 4u;
      if ( v10 < 0 )
        v19 = TM3_DRAFT_I16(v16);
      else
        v19 = -TM3_DRAFT_I16(v17);
      TM3_DRAFT_U16(v15 - 2146917040 + 2) = v28 - ((v18 * v19 + 2048) >> 12);
      v20 = v15 - 2146917040;
      v15 += 8;
      ++v14;
      TM3_DRAFT_U16(v20 + 4) = v29 + ((v18 * v13 + 2048) >> 12);
    }
    while ( v14 < 5 );
    v2 += 40;
    v3 -= (512) * 4u;
    ++v1;
    v6 += (512) * 4u;
  }
  while ( v1 < 8 );
  v21 = 0;
  v22 = 0;
  do
  {
    v23 = 0;
    v24 = -2146917040;
    v25 = -2146917040;
    do
    {
      if ( sub_80013484(&v27, (uint32)(v22 + v25), 0, v30) == 1 && v30[6] != -1 )
        sub_80012C20(TM3_DRAFT_U32(0x80089D24u + (20) * 4u), v30[6], (uint32)v24);
      v24 += 40;
      ++v23;
      v25 += 8;
    }
    while ( v23 < 5 );
    result = ++v21 < 8;
    v22 += 40;
  }
  while ( v21 < 8 );
  return result;
}

/* Unverified decompiler-derived draft */
void sub_8003858C(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  uint32 ida_A0, ida_V0, ida_V1; /* TODO Explicit adapter values */
  unsigned int v5; 
  unsigned int v6; 
  int v8; 
  int v12; 
  uint32 v13; 

  v5 = TM3_DRAFT_U32(a3);
  v6 = TM3_DRAFT_U32(a3) + 52;
  if ( v6 < a4 )
  {
    ida_V0 = a1 + 4;
    /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($v0)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($v0)");
  tm3_draft_unimplemented("TODO lwc2    $2, 8($v0)");
  tm3_draft_unimplemented("TODO lwc2    $3, 0xC($v0)");
  tm3_draft_unimplemented("TODO lwc2    $4, 0x10($v0)");
  tm3_draft_unimplemented("TODO lwc2    $5, 0x14($v0)");
    TM3_DRAFT_U8(v5 + 3) = 12;
    TM3_DRAFT_U8(v5 + 7) = 60;
    /* TODO GTE adapters */
  tm3_draft_gte_command(0x280030u);
    v8 = dword_80089CB8 + 8 * TM3_DRAFT_I8(32 * (uint8)TM3_DRAFT_U8(a1 + (38) * 1u) + dword_80089C94 + 6);
    TM3_DRAFT_U16(v5 + 26) = TM3_DRAFT_U16(v8 + 6);
    TM3_DRAFT_U16(v5 + 14) = TM3_DRAFT_U16(v8 + 2);
    TM3_DRAFT_U8(v5 + 12) = TM3_DRAFT_U8(v8);
    TM3_DRAFT_U8(v5 + 13) = TM3_DRAFT_U8(v8 + 1);
    TM3_DRAFT_U8(v5 + 24) = TM3_DRAFT_U8(v8 + 4);
    TM3_DRAFT_U8(v5 + 25) = TM3_DRAFT_U8(v8 + 1);
    TM3_DRAFT_U8(v5 + 36) = TM3_DRAFT_U8(v8);
    TM3_DRAFT_U8(v5 + 37) = TM3_DRAFT_U8(v8 + 5);
    TM3_DRAFT_U8(v5 + 48) = TM3_DRAFT_U8(v8 + 4);
    TM3_DRAFT_U8(v5 + 49) = TM3_DRAFT_U8(v8 + 5);
    TM3_DRAFT_U8(v5 + 4) = TM3_DRAFT_U8(a1 + (36) * 1u);
    TM3_DRAFT_U8(v5 + 5) = TM3_DRAFT_U8(a1 + (36) * 1u);
    TM3_DRAFT_U8(v5 + 6) = TM3_DRAFT_U8(a1 + (36) * 1u);
    TM3_DRAFT_U8(v5 + 16) = TM3_DRAFT_U8(a1 + (36) * 1u);
    TM3_DRAFT_U8(v5 + 17) = TM3_DRAFT_U8(a1 + (36) * 1u);
    TM3_DRAFT_U8(v5 + 18) = TM3_DRAFT_U8(a1 + (36) * 1u);
    TM3_DRAFT_U8(v5 + 28) = TM3_DRAFT_U8(a1 + (37) * 1u);
    TM3_DRAFT_U8(v5 + 29) = TM3_DRAFT_U8(a1 + (37) * 1u);
    TM3_DRAFT_U8(v5 + 30) = TM3_DRAFT_U8(a1 + (37) * 1u);
    TM3_DRAFT_U8(v5 + 40) = TM3_DRAFT_U8(a1 + (37) * 1u);
    TM3_DRAFT_U8(v5 + 41) = TM3_DRAFT_U8(a1 + (37) * 1u);
    TM3_DRAFT_U8(v5 + 42) = TM3_DRAFT_U8(a1 + (37) * 1u);
    /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO swc2    $12, 0($v0)");
  tm3_draft_unimplemented("TODO swc2    $13, 0($v0)");
  tm3_draft_unimplemented("TODO swc2    $14, 0($v0)");
  ida_V1 = tm3_draft_gte_read_data(17u);
  ida_A0 = tm3_draft_gte_read_data(19u);
    ida_V0 = a1 + 28;
    /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($v0)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($v0)");
  tm3_draft_gte_command(0x180001u);
    v12 = (((ida_V1 - ida_A0) & ((ida_V1 - ida_A0) >> 31)) + ida_A0 - 64) >> 2;
    if ( v12 > 0 )
    {
      if ( v12 >= dword_80089DD0 )
        v12 = dword_80089DD0 - 1;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO swc2    $14, 0($v0)");
      v13 = (uint32)(4 * v12 + a2);
      TM3_DRAFT_U32(v5) = TM3_DRAFT_U32(v13) & 0xFFFFFF | 0xC000000;
      TM3_DRAFT_U32(v13) = v5 & 0xFFFFFF;
      TM3_DRAFT_U32(a3) = v6;
    }
  }
}

/* Unverified decompiler-derived draft */
uint32 sub_80044B5C(void)
{
  int v0; 
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int result; 

  v0 = 0;
  TM3_DRAFT_U32(0x800d2f3cu) = 0;
  TM3_DRAFT_U32(0x800d296cu) = 0;
  if ( TM3_DRAFT_U32(0x800d2e90u) > 0 )
  {
    v1 = -2146619768;
    do
    {
      TM3_DRAFT_U32(v1 + 388) = 0;
      ++v0;
      v1 += 144;
    }
    while ( v0 < TM3_DRAFT_U32(0x800d2e90u) );
  }
  v2 = 0;
  if ( TM3_DRAFT_U32(0x800d2f84u) )
  {
    TM3_DRAFT_U32(0x800d2f88u) = 1;
    if ( TM3_DRAFT_U32(0x800d2e90u) > 0 )
    {
      v3 = -2146619768;
      do
      {
        TM3_DRAFT_U32(v3 + 392) = 0;
        TM3_DRAFT_U32(v3 + 396) = 0;
        ++v2;
        v3 += 144;
      }
      while ( v2 < TM3_DRAFT_U32(0x800d2e90u) );
    }
    TM3_DRAFT_U32(0x800d2f80u) = 0;
  }
  else
  {
    TM3_DRAFT_U32(0x800d2f88u) = TM3_DRAFT_U32(0x800d2f60u) || TM3_DRAFT_U32(0x800d2f6cu) && TM3_DRAFT_U32(0x800d2f6cu) != 2;
    if ( TM3_DRAFT_U32(0x800d2f60u) == 1 && ++TM3_DRAFT_U32(0x800d2e9cu) >= 8u )
      TM3_DRAFT_U32(0x800d2e9cu) = 0;
  }
  if ( TM3_DRAFT_U32(0x800d2f6cu) == 1 || !TM3_DRAFT_U32(0x800d2f6cu) && TM3_DRAFT_U32(0x800d2f84u) )
  {
    v4 = 0;
    if ( TM3_DRAFT_U32(0x800d2e94u) > 0 )
    {
      while ( 1 )
      {
        v5 = sub_80044AE0();
        v6 = 0;
        v7 = 0;
        if ( TM3_DRAFT_U32(0x800d2e90u) + v4 > 0 )
        {
          v8 = -2146619768;
          do
          {
            if ( v5 == TM3_DRAFT_U32(v8 + 24) )
              v7 = 1;
            ++v6;
            v8 += 4;
          }
          while ( v6 < TM3_DRAFT_U32(0x800d2e90u) + v4 );
        }
        if ( !v7 )
        {
          TM3_DRAFT_U32(4 * (TM3_DRAFT_U32(0x800d2e90u) + v4++) - 2146619768 + 24) = v5;
          if ( v4 >= TM3_DRAFT_U32(0x800d2e94u) )
            break;
        }
      }
    }
  }
  result = -2146619768;
  TM3_DRAFT_U32(0x800d2f84u) = 0;
  TM3_DRAFT_U32(0x800d2f70u) = -1;
  TM3_DRAFT_U32(0x800d2f74u) = 0;
  TM3_DRAFT_U32(0x800d2f78u) = 0;
  TM3_DRAFT_U32(0x800d2f7cu) = 0;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80043974(uint32 a1, uint32 a2)
{
  unsigned int v3; 
  uint8 v4; 
  int v5; 
  uint32 v6; 
  int result; 
  uint8 v8[8]; 

  if ( a1 == 1 || a1 == 4 )
  {
    if ( TM3_DRAFT_U32(0x80089E04u + (5) * 4u) )
    {
      sub_8005D4D0(0xCu, 0, 0);
      TM3_DRAFT_U32(0x80089E04u + (5) * 4u) = 0;
    }
    if ( (TM3_DRAFT_U8(a2 + (4) * 1u) & 0x80) != 0 )
    {
      v5 = TM3_DRAFT_U32(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621688);
    }
    else
    {
      v3 = TM3_DRAFT_U8(a2 + (1) * 1u);
      v8[0] = TM3_DRAFT_U8(a2 + (3) * 1u);
      v4 = TM3_DRAFT_U8(a2 + (4) * 1u);
      v5 = 10 * (v3 >> 4) + (v3 & 0xF);
      v8[2] = 0;
      v8[1] = v4;
      TM3_DRAFT_U32(0x80089E04u + (3) * 4u) = sub_8005DA34(v8);
    }
    v6 = (uint32)(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621688);
    if ( v5 != TM3_DRAFT_U32(v6) && v5 != TM3_DRAFT_U32(v6) - 1
      || TM3_DRAFT_U32(0x80089E04u + (2) * 4u) < TM3_DRAFT_U32(0x80089E04u + (3) * 4u)
      || (result = -2146631680, TM3_DRAFT_U32(0x80089E04u + (3) * 4u) < TM3_DRAFT_U32(0x80089E04u + (1) * 4u)) )
    {
      ++TM3_DRAFT_U32(0x800d2724u);
      if ( TM3_DRAFT_U32(0x800d2724u) >= TM3_DRAFT_U32(0x800d2720u) )
        TM3_DRAFT_U32(0x800d2724u) = TM3_DRAFT_U32(0x800d2720u) - 1;
      TM3_DRAFT_U32(0x80089E04u + (1) * 4u) = sub_8005DA34((uint32)(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621684));
      TM3_DRAFT_U32(0x80089E04u + (2) * 4u) = sub_8005DA34((uint32)(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621680));
      TM3_DRAFT_U32(0x80089E04u + (3) * 4u) = TM3_DRAFT_U32(0x80089E04u + (1) * 4u);
      if ( TM3_DRAFT_U32(0x80089E04u + (4) * 4u) )
        tm3_draft_indirect(TM3_DRAFT_U32(0x80089E04u + 16), 1u, TM3_DRAFT_U32(0x800d2724u));
      return sub_800438F4(TM3_DRAFT_U32(0x80089E04u + (1) * 4u));
    }
  }
  else
  {
    if ( TM3_DRAFT_U32(0x80089E04u + (4) * 4u) )
      tm3_draft_indirect(TM3_DRAFT_U32(0x80089E04u + 16), 1u, TM3_DRAFT_U32(0x800d2724u));
    do
      result = sub_800438F4(TM3_DRAFT_U32(0x80089E04u + (1) * 4u));
    while ( result );
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80030AFC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5)
{
  int result; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  unsigned int v31; 
  sint16 v32; 
  int v33[8]; 

  if ( TM3_DRAFT_U8(a1 + 321) == 1 )
    sub_8002E2D4(a1, a2, a3, a4);
  result = TM3_DRAFT_U16(a1 + 110);
  if ( !TM3_DRAFT_U16(a1 + 110) )
  {
    sub_8002A190(
      a1 + 8,
      TM3_DRAFT_I16(dword_80089D14 + 74),
      TM3_DRAFT_I16(dword_80089D14 + 76),
      -2139062144,
      TM3_DRAFT_U32(dword_80089D14 + 80),
      a2,
      a3,
      1,
      a4);
    sub_8005B8D4();
    sub_8005B614((uint32)a5, (uint32)(a1 + 116), v33);
    sub_8005BD24(v33);
    sub_8005BDB4(v33);
    v18 = TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 340) + 4 * TM3_DRAFT_U8(a1 + 329) + 8);
    LOWORD(v28) = -400;
    LOWORD(v26) = -400;
    v31 = 70;
    v32 = 0;
    LOWORD(v30) = 0;
    sub_8002A72C((int)&v25, 8421504, v18, a2, a3, 1, a4, 64);
    v31 = -4587520;
    sub_8002A72C((int)&v25, 8421504, v18, a2, a3, 1, a4, 0);
    sub_8005B978();
    result = TM3_DRAFT_U8(a1 + 335);
    if ( TM3_DRAFT_U8(a1 + 335) )
      return sub_8002E6CC(a1, a2, a3, a4);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002E6CC(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  int v7; 
  uint32 v8; 
  int v10; 
  uint32 v11; 
  uint32 v12; 
  sint16 v13; 
  sint16 v14; 
  sint16 v15; 
  sint16 v16; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  unsigned int v24; 
  int v25; 
  sint16 v26; 
  _QWORD v27[4]; 

  v7 = TM3_DRAFT_U8(a1 + 326);
  v19 = (uint16)(((TM3_DRAFT_U8(v7 - 2146915872) != 0) - TM3_DRAFT_U8(v7 - 2146915872)) >> 1);
  v23 = (uint16)(((TM3_DRAFT_U8(v7 - 2146916344) != 0) - TM3_DRAFT_U8(v7 - 2146916344)) >> 1);
  v21 = TM3_DRAFT_U8(v7 - 2146915872) >> 1;
  v25 = TM3_DRAFT_U8(v7 - 2146916344) >> 1;
  v8 = (uint32)(2 * v7 - 2146915848);
  LOWORD(v22) = ((TM3_DRAFT_U16(v8) != 0) - TM3_DRAFT_U16(v8)) >> 1;
  LOWORD(v20) = v22;
  v10 = 0;
  v26 = TM3_DRAFT_U16(v8) >> 1;
  LOWORD(v24) = v26;
  sub_8005B8D4();
  v11 = (uint32)(a1 + 116);
  do
  {
    v12 = (sint16 *)&v27[v10];
    sub_8005BB84(v11, (int)(&v19 + 2 * v10++), v12);
    v13 = TM3_DRAFT_I16(v12 + (1) * 2u);
    v14 = TM3_DRAFT_U16(a1 + 10);
    v15 = TM3_DRAFT_I16(v12 + (2) * 2u) + TM3_DRAFT_U16(a1 + 12);
    TM3_DRAFT_I16(v12) += TM3_DRAFT_U16(a1 + 8);
    TM3_DRAFT_I16(v12 + (2) * 2u) = v15;
    v16 = v13 + v14;
    TM3_DRAFT_I16(v12 + (1) * 2u) = v16;
    TM3_DRAFT_I16(v12 + (1) * 2u) = sub_80013420(TM3_DRAFT_I16(v12), v16, v15);
    v11 = (uint32)(a1 + 116);
  }
  while ( v10 < 4 );
  sub_8005B978();
  return sub_8002ADAC((int)v27, 1052688, a2, a3, 4, a4, 96);
}

/* Unverified decompiler-derived draft */
uint32 sub_8004B1AC(uint32 a1, uint32 a2)
{
  uint8 tuple_23[8];
  uint8 tuple_20[8];
  uint8 tuple_15[16];
  int v3; 
  sint32 v5; 
  int v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  unsigned int v12; 
  int v13; 
  int v14; 
  int v18[4]; 
  int v19[4]; 
  sint16 v26[4]; 
  sint16 v27[4]; 

  v3 = TM3_DRAFT_U32(a2 + 48);
  if ( v3 == a1 )
    return 0;
  v5 = sub_80028A88((uint32)(a2 + 52), a1) != 0;
  v6 = a1 - 20;
  if ( !v5 )
    return 0;
  v8 = TM3_DRAFT_I16(v6 + 2);
  v9 = TM3_DRAFT_I16(v6 + 4);
  TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 0u) = TM3_DRAFT_U16(a1 - 20);
  TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 2u) = v8;
  TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 4u) = v9;
  v10 = TM3_DRAFT_I16(a2 - 20 + 2);
  v11 = TM3_DRAFT_I16(a2 - 20 + 4);
  TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 0u) = TM3_DRAFT_U16(a2 - 20);
  TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 2u) = v10;
  TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 4u) = v11;
  v18[0] = TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 0u) - TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 0u);
  v18[1] = v10 - v8;
  v18[2] = v11 - v9;
  v12 = sub_80013D64((int)v18);
  v13 = 1 - ((1 - v12) & ((int)(1 - v12) >> 31));
  if ( sub_80048078(12) )
    v14 = 4 * (7936 / v13 + 256);
  else
    v14 = 7936 / v13 + 256;
  if ( TM3_DRAFT_U8(a1 + 3328) != 1 && TM3_DRAFT_U8(v3 + 3328) == 2 )
    v14 -= v14 / 4;
  sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(v18, sizeof(v18)), TM3_DRAFT_LOCAL_ADDRESS(v26, sizeof(v26)));
  sub_80013F78((int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u), v14, v26);
  v27[0] = -v26[2];
  v27[2] = v26[0];
  v27[1] = v26[1];
  sub_80013F78((int)v19, v14 / 4, v27);
  TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u) += v19[0];
  TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 8u) += v19[2];
  TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 4u) += v19[1];
  sub_80033D4C(a1, (TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u));
  return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_800274E0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9, ...)
{
  int v18; 
  int v19; 
  int v20; 
  sint16 v21; 
  uint32 v22; 
  uint32 v23; 
  int v24; 
  sint16 v25; 
  sint16 v26; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  sint16 v32[4]; 
  char v33[2]; 
  sint16 v34; 
  sint16 v35; 
  sint16 v36; 
  sint16 v37; 
  sint16 v38; 
  char v39; 
  char v40; 
  char v41; 
  sint16 v42; 
  sint16 v43; 

  v18 = 0;
  v33[0] = 6;
  v33[1] = 0;
  v34 = a3;
  v19 = 0;
  v35 = TM3_DRAFT_I16(a1);
  v20 = 0;
  v36 = TM3_DRAFT_I16(a1 + (1) * 2u);
  v21 = TM3_DRAFT_I16(a1 + (2) * 2u);
  v38 = 20;
  v39 = 3;
  v43 = 3 * a3 / 2;
  v40 = a4;
  v42 = a3;
  v41 = 1;
  v37 = v21;
  if ( a5 > 0 )
  {
    v22 = dword_80081E38;
    v23 = dword_80081E38;
    do
    {
      sub_8004A294(6, (int)v33);
      v35 = TM3_DRAFT_I16(a1) + ((SHIWORD(TM3_DRAFT_U32(0x80081E38u + (abs32(v18)) * 4u)) * v19 + 2048) >> 12);
      if ( v18 < 0 )
        v24 = TM3_DRAFT_I16(v22);
      else
        v24 = -TM3_DRAFT_I16(v23);
      v37 = TM3_DRAFT_I16(a1 + (2) * 2u) + ((v24 * v19 + 2048) >> 12);
      v22 -= (1024) * 4u;
      v23 += (1024) * 4u;
      v18 += 1024;
      ++v20;
      v19 += 200;
    }
    while ( v20 < a5 );
  }
  v25 = TM3_DRAFT_I16(a1 + (1) * 2u);
  v26 = TM3_DRAFT_I16(a1 + (2) * 2u);
  v32[0] = TM3_DRAFT_I16(a1);
  v32[1] = v25;
  v32[2] = v26;
  return sub_8004A294(4, a2, (int)v32, (uint16)a8, a6, a7, a9, 12);
}

/* Unverified decompiler-derived draft */
uint32 sub_800203D8(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
  int v17; 
  int v18; 
  int v19; 
  int result; 
  uint32 v21; 
  uint32 v22; 
  int v23; 
  int v24; 
  int v25[4]; 
  int v26[4]; 
  _WORD v27[4]; 
  _WORD v28[4]; 

  sub_800155A4((a1 + (8) * 4u), a2, v26);
  sub_800155A4((a1 + (11) * 4u), a2, v25);
  TM3_DRAFT_I32(a1 + (24) * 4u) = sub_80013D08(v26);
  if ( v26[0] || v26[1] || v26[2] )
  {
    sub_8001498C(v26, v25, TM3_DRAFT_I32(a1 + (26) * 4u), 18);
    v24 = sub_80013D08(v26);
    if ( sub_80015684(a5 * a3, TM3_DRAFT_I32(a1 + (26) * 4u), 18) >= v24 )
      return sub_8001498C((a1 + (11) * 4u), v26, -TM3_DRAFT_I32(a1 + (27) * 4u), 12);
    sub_800146A4(v26, v28);
    v21 = (a1 + (11) * 4u);
    v22 = v28;
    v23 = (0u - a5 * a3);
  }
  else
  {
    if ( a4 * a3 >= sub_80013D08(v25) )
    {
      v17 = TM3_DRAFT_I32(a1 + (12) * 4u);
      v18 = TM3_DRAFT_I32(a1 + (13) * 4u);
      v19 = v25[1];
      result = v25[2];
      TM3_DRAFT_I32(a1 + (11) * 4u) -= v25[0];
      TM3_DRAFT_I32(a1 + (12) * 4u) = v17 - v19;
      TM3_DRAFT_I32(a1 + (13) * 4u) = v18 - result;
      return result;
    }
    sub_800146A4(v25, v27);
    v21 = (a1 + (11) * 4u);
    v22 = v27;
    v23 = (0u - a5) * a3;
  }
  return sub_800148DC(v21, v22, v23, 12);
}

/* Unverified decompiler-derived draft */
uint32 sub_80015FB8(uint32 a1, uint32 a2)
{
  uint32 ida_A0, ida_A2, ida_T3, ida_T4, ida_T5, ida_V0; /* TODO Explicit adapter values */
  int v3; 
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v13; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v27; 
  sint32 v28; 
  sint32 v29; 
  uint32 v30; 

  v3 = TM3_DRAFT_I16(a2 + 4);
  v4 = 4 * TM3_DRAFT_U16(a1 + 4);
  ida_T5 = TM3_DRAFT_I16(a2 + 8) - v3;
  v6 = TM3_DRAFT_U32(TM3_DRAFT_U32(a2) + 28);
  v7 = TM3_DRAFT_I16(v4 + v6);
  v8 = TM3_DRAFT_I16(4 * TM3_DRAFT_U16(a1 + 6) + v6);
  v9 = v3;
  if ( ida_T5 > 0 )
  {
    v10 = TM3_DRAFT_I16(a2 + 8);
  }
  else
  {
    v9 = TM3_DRAFT_I16(a2 + 8);
    v10 = TM3_DRAFT_I16(a2 + 4);
  }
  ida_T4 = v8 - v7;
  if ( v8 - v7 > 0 )
  {
    if ( v10 < v7 || v8 < v9 )
      return 0;
  }
  else if ( v10 < v8 || v7 < v9 )
  {
    return 0;
  }
  v13 = TM3_DRAFT_I16(a2 + 6);
  ida_T3 = TM3_DRAFT_I16(a2 + 10) - v13;
  v15 = TM3_DRAFT_U32(TM3_DRAFT_U32(a2) + 28);
  v16 = 4 * TM3_DRAFT_U16(a1 + 6) + v15;
  v17 = TM3_DRAFT_I16(4 * TM3_DRAFT_U16(a1 + 4) + v15 + 2);
  v18 = TM3_DRAFT_I16(v16 + 2);
  v19 = v13;
  if ( ida_T3 > 0 )
  {
    v20 = TM3_DRAFT_I16(a2 + 10);
  }
  else
  {
    v19 = TM3_DRAFT_I16(a2 + 10);
    v20 = TM3_DRAFT_I16(a2 + 6);
  }
  ida_A2 = v18 - v17;
  if ( v18 - v17 > 0 )
  {
    if ( v20 < v17 || v18 < v19 )
      return 0;
  }
  else if ( v20 < v18 || v17 < v19 )
  {
    return 0;
  }
  /* TODO GTE adapters */
  tm3_draft_gte_write_control(0u, ida_T5);
  tm3_draft_gte_write_control(2u, ida_T4);
  ida_V0 = v3 - v7;
  /* TODO GTE adapters */
  tm3_draft_gte_write_control(4u, ida_V0);
  tm3_draft_gte_write_data(9u, ida_T3);
  tm3_draft_gte_write_data(10u, ida_A2);
  ida_V0 = v13 - v17;
  /* TODO GTE adapters */
  tm3_draft_gte_write_data(11u, ida_V0);
  tm3_draft_gte_command(0x170000Cu);
  ida_V0 = tm3_draft_gte_read_data(26u);
  ida_A0 = tm3_draft_gte_read_data(27u);
  ida_A2 = tm3_draft_gte_read_data(25u);
  v27 = (0u - ida_V0);
  if ( ida_A0 < 0 )
    return 0;
  v28 = v27 < 0;
  v29 = ida_A0 < v27;
  if ( v28 || v29 || ida_A2 < 0 || ida_A0 < ida_A2 || !ida_A0 )
    return 0;
  v30 = TM3_DRAFT_U32(a2 + 20);
  if ( v30 )
  {
    TM3_DRAFT_U16(v30) = v3 + ida_A2 * TM3_DRAFT_U32(a2 + 12) / ida_A0;
    TM3_DRAFT_U16(TM3_DRAFT_U32(a2 + 20) + 2) = v13 + ida_A2 * TM3_DRAFT_U32(a2 + 16) / ida_A0;
  }
  return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_80046694(uint32 a1)
{
  uint32 v2; 
  unsigned int v3; 
  unsigned int v4; 
  int result; 
  int v6[4]; 
  int v7[4]; 

  if ( sub_800474AC() && TM3_DRAFT_U32(0x800d2e8cu) && TM3_DRAFT_U32(0x800d2f28u) )
  {
    v6[0] = (int)TM3_DRAFT_U32(0x800883B0u + (0) * 4u);
    v6[1] = (int)TM3_DRAFT_U32(0x800883B4u + (0) * 4u);
    v6[2] = (int)off_800883B8;
    v7[0] = (int)TM3_DRAFT_U32(0x800883CCu + (0) * 4u);
    v7[1] = (int)TM3_DRAFT_U32(0x800883D0u + (0) * 4u);
    v7[2] = (int)off_800883D4;
    v2 = v7;
    if ( TM3_DRAFT_U32(0x800d2f28u) == 1 )
      v2 = v6;
    sub_80045CD0(a1, 0x8007F11Cu, v2, 3);
    TM3_DRAFT_U32(a1 + (33524) * 4u) = TM3_DRAFT_U32(a1 + (33524) * 4u) & 0xFF000000 | TM3_DRAFT_U32(a1 + (22) * 4u) & 0xFFFFFF;
    v3 = TM3_DRAFT_U32(a1 + (22) * 4u) & 0xFF000000 | (unsigned int)((a1 + (33524) * 4u)) & 0xFFFFFF;
    TM3_DRAFT_U32(a1 + (22) * 4u) = v3;
    TM3_DRAFT_U32(a1 + (33528) * 4u) = TM3_DRAFT_U32(a1 + (33528) * 4u) & 0xFF000000 | v3 & 0xFFFFFF;
    v4 = TM3_DRAFT_U32(a1 + (22) * 4u) & 0xFF000000 | (unsigned int)((a1 + (33528) * 4u)) & 0xFFFFFF;
    TM3_DRAFT_U32(a1 + (22) * 4u) = v4;
    TM3_DRAFT_U32(a1 + (33532) * 4u) = TM3_DRAFT_U32(a1 + (33532) * 4u) & 0xFF000000 | v4 & 0xFFFFFF;
    result = TM3_DRAFT_U32(a1 + (22) * 4u) & 0xFF000000 | (unsigned int)((a1 + (33532) * 4u)) & 0xFFFFFF;
    TM3_DRAFT_U32(a1 + (22) * 4u) = result;
  }
  else
  {
    result = 1;
    if ( TM3_DRAFT_U32(0x800d2f2cu) )
    {
      if ( TM3_DRAFT_U32(0x800d2f2cu) == 1 )
        return sub_800460C8(a1);
    }
    else
    {
      return sub_80045CF4((int)a1);
    }
  }
  return result;
}
