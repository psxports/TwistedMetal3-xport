#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

#define dword_80089DD0 TM3_DRAFT_U32(0x80089DD0u)
#define dword_8007EA14 TM3_DRAFT_U32(0x8007EA14u)
#define dword_8007EA10 TM3_DRAFT_U32(0x8007EA10u)
#define dword_80089DAC TM3_DRAFT_U32(0x80089DACu)
#define dword_80089D14 TM3_DRAFT_U32(0x80089D14u)
#define dword_80089CE0 TM3_DRAFT_U32(0x80089CE0u)
#define dword_80089E04 TM3_DRAFT_U32(0x80089E04u)
#define dword_800896A0 TM3_DRAFT_U32(0x800896A0u)
#define dword_80089EFC TM3_DRAFT_U32(0x80089EFCu)
#define dword_80089F08 TM3_DRAFT_U32(0x80089F08u)
#define dword_80089CA4 TM3_DRAFT_U32(0x80089CA4u)
#define dword_800896A4 TM3_DRAFT_U32(0x800896A4u)
#define dword_80089D24 TM3_DRAFT_U32(0x80089D24u)
#define off_80087E30 TM3_DRAFT_U32(0x80087E30u)
#define dword_80087DF0 TM3_DRAFT_U32(0x80087DF0u)
#define dword_80087DAC TM3_DRAFT_U32(0x80087DACu)
#define dword_8007E8A4 TM3_DRAFT_U32(0x8007E8A4u)
#define dword_80087B78 TM3_DRAFT_U32(0x80087B78u)
#define dword_80089890 TM3_DRAFT_U32(0x80089890u)
#define off_8007E130 TM3_DRAFT_U32(0x8007E130u)

/* Unverified decompiler-derived draft */
uint32 sub_8003F098(uint32 a1, uint32 a2, uint32 a3)
{
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int result; 

  TM3_DRAFT_U16(a1 + 8) = TM3_DRAFT_U16(a2 + 1538);
  TM3_DRAFT_U16(a1 + 10) = TM3_DRAFT_U16(a2 + 1544);
  TM3_DRAFT_U16(a1 + 12) = TM3_DRAFT_U16(a2 + 1550);
  if ( a3 )
  {
    TM3_DRAFT_U16(a1) = -TM3_DRAFT_U16(a2 + 1536);
    TM3_DRAFT_U16(a1 + 2) = -TM3_DRAFT_U16(a2 + 1542);
    TM3_DRAFT_U16(a1 + 4) = -TM3_DRAFT_U16(a2 + 1548);
    TM3_DRAFT_U16(a1 + 16) = -TM3_DRAFT_U16(a2 + 1540);
    TM3_DRAFT_U16(a1 + 18) = -TM3_DRAFT_U16(a2 + 1546);
    v5 = -TM3_DRAFT_U16(a2 + 1552);
  }
  else
  {
    TM3_DRAFT_U16(a1) = TM3_DRAFT_U16(a2 + 1536);
    TM3_DRAFT_U16(a1 + 2) = TM3_DRAFT_U16(a2 + 1542);
    TM3_DRAFT_U16(a1 + 4) = TM3_DRAFT_U16(a2 + 1548);
    TM3_DRAFT_U16(a1 + 16) = TM3_DRAFT_U16(a2 + 1540);
    TM3_DRAFT_U16(a1 + 18) = TM3_DRAFT_U16(a2 + 1546);
    LOWORD(v5) = TM3_DRAFT_U16(a2 + 1552);
  }
  TM3_DRAFT_U16(a1 + 20) = v5;
  v6 = TM3_DRAFT_U32(a2 + 1584);
  v7 = TM3_DRAFT_U32(a2 + 1588);
  TM3_DRAFT_U32(a1 + 48) = TM3_DRAFT_U32(a2 + 1580);
  TM3_DRAFT_U32(a1 + 52) = v6;
  TM3_DRAFT_U32(a1 + 56) = v7;
  sub_800148DC((uint32)(a1 + 48), (uint32)(a1 + 16), -96, 12);
  v8 = 64;
  if ( TM3_DRAFT_U32(0x800d2e88u) == 2 )
  {
    v8 = 40;
    v9 = 64;
  }
  else
  {
    v9 = 96;
  }
  result = sub_80013420(TM3_DRAFT_U32(a1 + 48), TM3_DRAFT_U32(a1 + 52), TM3_DRAFT_U32(a1 + 56))
         - (v8
          + (((v9 - v8) * ((4096 - TM3_DRAFT_I16(a2 + 1544)) / 2) + 2048) >> 12));
  if ( result < TM3_DRAFT_U32(a1 + 52) )
    TM3_DRAFT_U32(a1 + 52) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80023CB8(uint32 a1)
{
  int v2; 
  int v3; 
  uint32 v4; 
  int v5; 
  uint32 v6; 
  int v7; 
  int v8; 
  int v9; 
  int result; 
  sint16 v11; 
  sint32 v12; 
  int v13; 
  int v14; 
  uint32 v15; 
  int v16; 

  sub_80023B38((int)a1);
  sub_80023BFC(a1);
  v2 = 0;
  v3 = 0;
  v4 = a1;
  do
  {
    v5 = v3 + 1;
    if ( v3 + 1 < 8 )
    {
      v6 = (a1 + (56 * v3 + 56) * 2u);
      do
      {
        if ( TM3_DRAFT_I16(v4 + (802) * 2u) == TM3_DRAFT_I16(v6 + (802) * 2u) && TM3_DRAFT_I16(v4 + (803) * 2u) == TM3_DRAFT_I16(v6 + (803) * 2u) && TM3_DRAFT_I16(v4 + (804) * 2u) == TM3_DRAFT_I16(v6 + (804) * 2u) )
          v2 = 1;
        ++v5;
        v6 += (56) * 2u;
      }
      while ( v5 < 8 );
    }
    ++v3;
    v4 += (56) * 2u;
  }
  while ( v3 < 7 );
  v7 = 0;
  if ( v2 )
  {
    v8 = 796;
    do
    {
      v9 = 0x800000;
      if ( (unsigned int)v7 >= 2 && v7 != 3 )
      {
        v9 = 0x1000000;
        if ( v7 == 2 )
          v9 = 0x800000;
      }
      sub_800148DC((a1 + (v8 + 16) * 2u), (a1 + (v8 + 42) * 2u), v9, 12);
      result = ++v7 < 8;
      v8 += 56;
    }
    while ( v7 < 8 );
  }
  else
  {
    v11 = TM3_DRAFT_I16(a1 + (1654) * 2u) + 4;
    TM3_DRAFT_I16(a1 + (1654) * 2u) = v11;
    v12 = v11 < 128;
    result = 128;
    if ( !v12 )
    {
      TM3_DRAFT_I16(a1 + (1654) * 2u) = 128;
      v13 = 0;
      v14 = 796;
      do
      {
        v15 = (a1 + (v14) * 2u);
        ++v13;
        TM3_DRAFT_U32(v15 +(8) * 4u) = 0;
        TM3_DRAFT_U32(v15 +(9) * 4u) = 0;
        TM3_DRAFT_U32(v15 +(10) * 4u) = 0;
        TM3_DRAFT_I16(v15 + (42) * 2u) = 0;
        v16 = (int)(a1 + (v14 + 42) * 2u);
        TM3_DRAFT_U16(v16 + 2) = 0;
        TM3_DRAFT_U16(v16 + 4) = 0;
        result = v13 < 8;
        v14 += 56;
      }
      while ( v13 < 8 );
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80033534(uint32 a1, uint32 a2)
{
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  sint16 v9[4]; 
  char v10[32]; 

  v4 = sub_8002E964(a2, a1, (int)v10);
  sub_80026B88(a1, 2, v9);
  TM3_DRAFT_U8(0x8008ab76u) = -76;
  TM3_DRAFT_U8(0x8008a7ceu) = -76;
  TM3_DRAFT_U8(0x8008acbeu) = -76;
  sub_8004A294(8, 15, 14, a1, v4, (int)v9, (int)v10, a2);
  TM3_DRAFT_U8(0x8008ab76u) = -1;
  TM3_DRAFT_U8(0x8008a7ceu) = 0;
  TM3_DRAFT_U8(0x8008acbeu) = 0;
  sub_80026B88(a1, 0, v9);
  sub_8004A294(8, 15, 14, a1, v4, (int)v9, (int)v10, a2);
  TM3_DRAFT_U8(0x8008ab76u) = 0;
  TM3_DRAFT_U8(0x8008a7ceu) = 0;
  TM3_DRAFT_U8(0x8008acbeu) = -1;
  sub_80026B88(a1, 1, v9);
  sub_8004A294(8, 15, 14, a1, v4, (int)v9, (int)v10, a2);
  return sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 55), 5, a1, 1200);
}

/* Unverified decompiler-derived draft */
uint32 sub_80027358(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  int result; 
  int v8; 
  int v9; 
  sint32 v10; 
  int v11; 
  uint32 v12; 
  char v13[4]; 
  char v14[4]; 

  result = TM3_DRAFT_U32(a3) + 20 < a4;
  if ( TM3_DRAFT_U32(a3) + 20 < a4 )
  {
    result = sub_8005C334(a1 + 8, TM3_DRAFT_U32(a3) + 8, (int)v13, v14);
    v8 = result;
    if ( result > 0 )
    {
      v9 = sub_8005C334(a1, TM3_DRAFT_U32(a3) + 16, (int)v13, v14);
      v10 = v9 <= 0;
      result = v8 + v9;
      if ( !v10 )
      {
        v11 = result / 2;
        if ( result / 2 >= dword_80089DD0 )
          v11 = dword_80089DD0 - 1;
        TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 3) = 4;
        TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 7) = 80;
        TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 7) &= ~2u;
        TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 4) = -1;
        TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 5) = -1;
        TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 6) = 0;
        TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 12) = -1;
        v12 = (uint32)(4 * v11 + a2);
        TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 13) = 0;
        TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 14) = 0;
        TM3_DRAFT_U32(TM3_DRAFT_U32(a3)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a3)) & 0xFF000000 | TM3_DRAFT_U32(v12) & 0xFFFFFF;
        TM3_DRAFT_U32(v12) = TM3_DRAFT_U32(v12) & 0xFF000000 | TM3_DRAFT_U32(a3) & 0xFFFFFF;
        result = TM3_DRAFT_U32(a3) + 20;
        TM3_DRAFT_U32(a3) = result;
      }
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001A40C(uint32 a1)
{
  int v2; 
  int v3; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int result; 

  v2 = 20;
  if ( !sub_800470DC(TM3_DRAFT_U32(a1 + 3684)) )
    TM3_DRAFT_U32(a1 + 3684) = 0;
  if ( TM3_DRAFT_I16(a1 + 3336) == TM3_DRAFT_I16(a1 + 3334) )
  {
    sub_8001A954(a1);
    sub_8001B100(a1);
    sub_8001B970(a1);
    sub_8001B9A4(a1);
    if ( TM3_DRAFT_I16(a1 + 3406) <= 0 )
    {
      TM3_DRAFT_U32(a1 + 3960) = 0;
    }
    else
    {
      --TM3_DRAFT_U16(a1 + 3406);
      TM3_DRAFT_U32(a1 + 3960) = 1;
    }
    while ( v2-- > 0 )
    {
      v3 = (sint32)tm3_draft_indirect(TM3_DRAFT_U32(a1 + 3320u), 1u, a1);
      if ( !v3 )
        break;
      TM3_DRAFT_U32(a1 + 3320) = v3;
    }
  }
  v5 = TM3_DRAFT_I8(a1 + 3330);
  v6 = TM3_DRAFT_I32(a1 + 3932);
  v7 = v6 + 1;
  if ( v6 < v5 || (v7 = v6 - 1, v5 < v6) )
    TM3_DRAFT_I32(a1 + 3932) = v7;
  TM3_DRAFT_U32(a1 + 3964) = TM3_DRAFT_I16(a1 + 3392) >= 1001 && (unsigned int)(TM3_DRAFT_I32(a1 + 3932) + 9) >= 0x13;
  v8 = TM3_DRAFT_I8(a1 + 3331);
  v9 = TM3_DRAFT_I32(a1 + 3936);
  v10 = v9 + 1;
  if ( v9 < v8 || (v10 = v9 - 1, v8 < v9) )
    TM3_DRAFT_I32(a1 + 3936) = v10;
  v11 = TM3_DRAFT_I8(a1 + 3332);
  v12 = TM3_DRAFT_I32(a1 + 3940);
  result = v12 + 1;
  if ( v12 < v11 || (result = v12 - 1, v11 < v12) )
    TM3_DRAFT_I32(a1 + 3940) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80027B74(uint32 a1, uint32 a2)
{
  int v3; 
  int v4; 
  uint32 v5; 
  uint32 v6; 
  uint32 v7; 
  sint16 v8; 
  sint16 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  unsigned int v14; 
  sint16 v15; 

  v3 = a2 + 4;
  v4 = 0;
  v5 = TM3_DRAFT_U32(v3 - 4);
  v6 = TM3_DRAFT_U32(v3);
  v7 = TM3_DRAFT_U32(v3 + 4);
  v8 = TM3_DRAFT_I16(v5 + (1) * 2u);
  v9 = TM3_DRAFT_I16(v5 + (2) * 2u);
  v10 = a1;
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_I16(v5);
  v11 = a1 - 20;
  TM3_DRAFT_U16(v11 + 2) = v8;
  TM3_DRAFT_U16(v11 + 4) = v9;
  v12 = 4;
  TM3_DRAFT_U8(a1 + 1) = TM3_DRAFT_U8(v6);
  do
  {
    v13 = a1 + v12;
    TM3_DRAFT_U32(v13 + 4) = 0;
    TM3_DRAFT_U32(v13 + 12) = 0;
    TM3_DRAFT_U32(v13) = 4096;
    TM3_DRAFT_U32(v13 + 8) = 4096;
    TM3_DRAFT_U16(v13 + 16) = 4096;
    TM3_DRAFT_U32(v10 + 24) = TM3_DRAFT_I16(v5);
    TM3_DRAFT_U32(v10 + 28) = TM3_DRAFT_I16(v5 + (1) * 2u);
    TM3_DRAFT_U32(v10 + 32) = TM3_DRAFT_I16(v5 + (2) * 2u);
    v14 = sub_80039FD4();
    TM3_DRAFT_U32(v10 + 36) = (int)(((v14 << 15) | v14) << 16) >> 15;
    TM3_DRAFT_U32(v10 + 40) = -(sint16)sub_80039FD4();
    v15 = sub_80039FD4();
    TM3_DRAFT_U32(v10 + 44) = 2 * (sint16)((v15 << 15) | v15);
    TM3_DRAFT_U16(v10 + 48) = (sint16)((v15 << 15) | v15) % 16;
    TM3_DRAFT_U16(v10 + 50) = 0;
    v10 += 48;
    ++v4;
    v12 += 48;
  }
  while ( v4 < 12 );
  TM3_DRAFT_U16(a1 + 2) = sub_800133FC(TM3_DRAFT_I16(v5), TM3_DRAFT_I16(v5 + (2) * 2u)) + 32;
  TM3_DRAFT_U32(a1 + 580) = TM3_DRAFT_U32(v7);
  return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001C79C(uint32 a1, uint32 a2)
{
  int v3; 
  int result; 
  sint16 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 

  if ( !TM3_DRAFT_U8(a1 + 3714) )
  {
    if ( (sint16)a2 >= TM3_DRAFT_I16(a1 + 3392) )
    {
      v3 = TM3_DRAFT_U32(a1 + 4040);
      TM3_DRAFT_U8(a1 + 3332) = 0;
      result = TM3_DRAFT_U8(v3 + 84);
      TM3_DRAFT_U8(a1 + 3331) = result;
      return result;
    }
    v5 = TM3_DRAFT_U16(a1 + 3392);
    TM3_DRAFT_U8(a1 + 3714) = 1;
    TM3_DRAFT_U16(a1 + 3708) = v5;
  }
  v6 = TM3_DRAFT_I16(a1 + 3708);
  result = a2 << 16;
  if ( v6 != (sint16)a2 && (_WORD)a2 )
  {
    v7 = TM3_DRAFT_I16(a1 + 3392) * TM3_DRAFT_I16(a1 + 3392);
    v8 = (TM3_DRAFT_I16(a1 + 3706) * TM3_DRAFT_I16(a1 + 3706) - v7) / (2 * (sint16)a2);
    v9 = (v7 - v6 * v6) / (2 * (v6 - (sint16)a2));
    if ( v8 + 100 >= v9 )
    {
      result = v9 < v8 - 100;
      if ( v9 < v8 - 100 )
      {
        if ( TM3_DRAFT_I32(a1 + 3940) <= 0 )
        {
          v10 = TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 84);
          result = TM3_DRAFT_U32(a1 + 3936) < v10;
          if ( TM3_DRAFT_U32(a1 + 3936) < v10 )
          {
            result = TM3_DRAFT_U8(a1 + 3936) + 1;
            TM3_DRAFT_U8(a1 + 3331) = result;
          }
        }
        else
        {
          result = TM3_DRAFT_U8(a1 + 3940) - 1;
          TM3_DRAFT_U8(a1 + 3332) = result;
        }
      }
    }
    else if ( TM3_DRAFT_I32(a1 + 3936) <= 0 )
    {
      result = TM3_DRAFT_U32(a1 + 3940) < 15;
      if ( TM3_DRAFT_I32(a1 + 3940) < 15 )
      {
        result = TM3_DRAFT_U8(a1 + 3940) + 1;
        TM3_DRAFT_U8(a1 + 3332) = result;
      }
    }
    else
    {
      result = TM3_DRAFT_U8(a1 + 3936) - 1;
      TM3_DRAFT_U8(a1 + 3331) = result;
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
void sub_8003DF8C(void)
{
  unsigned int v0; 
  int v1; 
  int v2; 
  sint32 v3; 
  int result; 

  v0 = 3;
  if ( TM3_DRAFT_U32(0x800d2f20u) != 2 )
    v0 = 2;
  while ( !dword_8007EA14 || dword_8007EA10 < v0 )
    VSync(-1);
  if ( !TM3_DRAFT_U32(0x80089DACu + (3) * 4u) )
    sub_80057F80((uint32)(TM3_DRAFT_U32(0x80089DACu + (2) * 4u) + 4));
  sub_80056424();
  if ( !TM3_DRAFT_U32(0x80089DACu + (8) * 4u) )
    dword_8007EA14 = 0;
  if ( v0 >= dword_8007EA10 )
  {
    dword_8007EA10 = 0;
    v1 = 0;
  }
  else
  {
    dword_8007EA10 = 1;
    v1 = 1;
  }
  sub_80056444();
  if ( v1 )
  {
    if ( TM3_DRAFT_U32(0x800d2ef8u) && TM3_DRAFT_U32(0x800d2f18u) == 3 && !TM3_DRAFT_U32(0x80089DACu + (8) * 4u) )
      TM3_DRAFT_U32(0x80089DACu + (8) * 4u) = 1;
    v2 = TM3_DRAFT_U32(0x80089DACu + (6) * 4u);
    TM3_DRAFT_U32(0x80089DACu + (5) * 4u) -= 20;
    v3 = TM3_DRAFT_I32(0x80089DACu + (6) * 4u) < TM3_DRAFT_I32(0x80089DACu + (5) * 4u);
  }
  else
  {
    v2 = TM3_DRAFT_U32(0x80089DACu + (7) * 4u);
    TM3_DRAFT_U32(0x80089DACu + (5) * 4u) += 20;
    v3 = TM3_DRAFT_I32(0x80089DACu + (5) * 4u) < TM3_DRAFT_I32(0x80089DACu + (7) * 4u);
  }
  if ( !v3 )
    TM3_DRAFT_U32(0x80089DACu + (5) * 4u) = v2;
  result = 2;
  if ( TM3_DRAFT_U32(0x80089DACu + (8) * 4u) != 2 )
    sub_80057D44(TM3_DRAFT_U32(0x80089DACu + (1) * 4u) + 8276);
  return;
}

/* Unverified decompiler-derived draft */
uint32 sub_80031EA8(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
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
  int v26[8]; 
  int v27[8]; 

  result = TM3_DRAFT_U16(a1 + 110);
  if ( !TM3_DRAFT_U16(a1 + 110) )
  {
    sub_8005B8D4();
    v18 = TM3_DRAFT_U32(a1 + 120);
    v19 = TM3_DRAFT_U32(a1 + 124);
    v20 = TM3_DRAFT_U32(a1 + 128);
    v27[0] = TM3_DRAFT_U32(a1 + 116);
    v27[1] = v18;
    v27[2] = v19;
    v27[3] = v20;
    v21 = TM3_DRAFT_U32(a1 + 136);
    v22 = TM3_DRAFT_U32(a1 + 140);
    v23 = TM3_DRAFT_U32(a1 + 144);
    v27[4] = TM3_DRAFT_U32(a1 + 132);
    v27[5] = v21;
    v27[6] = v22;
    v27[7] = v23;
    sub_8005CA24(TM3_DRAFT_U32(a1 + 148) << 7, (uint32)v27);
    sub_8005C884(-256 * TM3_DRAFT_U32(a1 + 148), (uint32)v27);
    sub_8005B614((uint32)a5, (uint32)v27, v26);
    sub_8005BD24(v26);
    sub_8005BDB4(v26);
    sub_80029660((uint32)(dword_80089D14 + 24), TM3_DRAFT_U32(dword_80089D14 + 912), TM3_DRAFT_U32(dword_80089D14 + 916), 0, a2, a3, a4);
    sub_8005B978();
    result = TM3_DRAFT_U8(a1 + 335);
    if ( TM3_DRAFT_U8(a1 + 335) )
      return sub_8002E6CC(a1, a2, a3, a4);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80030184(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
  uint32 carried_result;
  unsigned int v17; 
  int v18; 
  int v20; 
  int v21; 
  int v22[8]; 
  sint16 v23[5]; 
  sint16 v24; 
  sint16 v25; 
  sint16 v26; 
  sint16 v27; 
  sint16 v28; 
  sint16 v29; 
  sint16 v30; 
  sint16 v31; 

  v20 = TM3_DRAFT_U32(a1 - 20);
  LOWORD(v21) = TM3_DRAFT_U16(a1 - 20 + 4);
  sub_8005B8D4();
  sub_8005B614((uint32)a5, (uint32)(a1 + 4), v22);
  sub_8005BD24(v22);
  sub_8005BDB4(v22);
  v26 = ((TM3_DRAFT_U16(a1 + 50) != 0) - TM3_DRAFT_U16(a1 + 50)) >> 1;
  v23[0] = v26;
  v29 = TM3_DRAFT_U16(a1 + 50) >> 1;
  v23[4] = v29;
  v24 = ((TM3_DRAFT_U16(a1 + 58) != 0) - TM3_DRAFT_U16(a1 + 58)) >> 1;
  v23[1] = v24;
  v17 = TM3_DRAFT_U16(a1 + 58);
  v31 = 0;
  v28 = 0;
  v25 = 0;
  v23[2] = 0;
  v30 = v17 >> 1;
  v27 = v30;
  carried_result = sub_8002A72C((int)v23, TM3_DRAFT_U32(a1 + 80), TM3_DRAFT_U32(a1 + 84), a2, a3, 1, a4, 64);
  sub_8005B978();
  return carried_result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003EDC0(uint32 a1, uint32 a2)
{
  int v4; 
  int v5; 
  int v6; 
  uint32 v7; 
  int v8; 
  int v9; 
  uint32 v10; 
  uint16 v11; 
  int v12; 

  v4 = 0;
  v5 = 0;
  v6 = -2146624552;
  while ( v4 < a2 )
  {
    v4 = sub_8003EA38(16 * v5++, v6, v4, a2);
    v6 += 34;
    if ( v5 >= 2 )
    {
      if ( v4 < a2 )
      {
        v7 = a1 + 24 * v4;
        do
        {
          v8 = TM3_DRAFT_U32(v7 +(5) * 4u);
          ++v4;
          TM3_DRAFT_U8(v7 + 12) = 0;
          TM3_DRAFT_U8(v7 + 13) = 0;
          TM3_DRAFT_U16(v7) = 0;
          TM3_DRAFT_U16(v7 + (3) * 2u) = 0;
          TM3_DRAFT_U16(v7 + (4) * 2u) = 0;
          TM3_DRAFT_U16(v7 + (5) * 2u) = 0;
          TM3_DRAFT_U8(v7 + 14) = -1;
          TM3_DRAFT_U8(v7 + 2) = 0;
          TM3_DRAFT_U8(v7 + 4) = 0;
          TM3_DRAFT_U32(v7 +(5) * 4u) = v8 + 1;
          v7 += (12) * 2u;
        }
        while ( v4 < a2 );
      }
      break;
    }
  }
  v9 = 0;
  if ( a2 > 0 )
  {
    v10 = a1;
    do
    {
      v11 = TM3_DRAFT_U16(v10);
      TM3_DRAFT_U16(v10 + (4) * 2u) = TM3_DRAFT_U16(v10) & ~TM3_DRAFT_U16(v10 + (3) * 2u);
      v12 = TM3_DRAFT_U16(v10);
      TM3_DRAFT_U16(v10 + (5) * 2u) = TM3_DRAFT_U16(v10 + (3) * 2u) & ~v11;
      if ( v12 )
        TM3_DRAFT_U32(v10 + 16) = 0;
      else
        ++TM3_DRAFT_U32(v10 +(4) * 4u);
      ++v9;
      v10 += (12) * 2u;
    }
    while ( v9 < a2 );
  }
  return (TM3_DRAFT_U16(a1 + (12) * 2u) << 16) | TM3_DRAFT_U16(a1);
}

/* Unverified decompiler-derived draft */
uint32 sub_8001A5E8(uint32 a1, uint32 a2, uint32 a3)
{
  sint32 v6; 
  int result; 
  int v8; 
  uint32 v9; 
  unsigned int v10; 
  int i; 
  int v12; 

  v6 = sub_800470DC(a2) == 0;
  result = 2;
  if ( !v6 )
  {
    result = 1;
    if ( TM3_DRAFT_U8(a1 + 3328) == 2 )
    {
      result = 4;
      if ( TM3_DRAFT_U8(a2 + 3328) == 1 )
      {
        v8 = TM3_DRAFT_I8(a1 + 3329);
        if ( v8 == 4 || (result = 5, v8 == 1) || v8 == 5 )
        {
          v9 = (uint32)(4 * TM3_DRAFT_U32(a2 + 3920) + TM3_DRAFT_U32(a1 + 3440));
          TM3_DRAFT_U32(v9) += a3;
          v10 = TM3_DRAFT_U8(a2 + 3701);
          result = TM3_DRAFT_U8(a2 + 3700) < v10;
          if ( TM3_DRAFT_U8(a2 + 3700) < v10 )
          {
            result = -2146631680;
            if ( TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 134) < TM3_DRAFT_U32(4 * TM3_DRAFT_U32(a2 + 3920)
                                                                        + TM3_DRAFT_U32(a1 + 3440)) )
            {
              for ( i = TM3_DRAFT_U32(0x800d2e98u) - 1; i >= 0; TM3_DRAFT_U32(v12 + TM3_DRAFT_U32(a1 + 3440)) = 0 )
                v12 = 4 * i--;
              result = sub_8001BD70(a1, TM3_DRAFT_U16(a2 + 3386));
              if ( result )
              {
                sub_8001A8C4(a1, a2, 0);
                result = 3;
                TM3_DRAFT_U8(a1 + 3329) = 3;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002F650(uint32 a1)
{
  int v2; 
  sint16 v3; 
  sint16 v4; 
  int result; 
  sint16 v6; 
  sint16 v7; 
  sint16 v8; 
  int v9; 

  v9 = 8421504;
  v2 = TM3_DRAFT_U32(a1 + 36);
  if ( TM3_DRAFT_U16(a1 + 32) )
  {
    result = sub_800470DC(TM3_DRAFT_U32(a1 + 36));
    if ( result )
    {
      TM3_DRAFT_U32(v2 + 4304) = 0;
      return sub_80033E94(v2, 11);
    }
  }
  else
  {
    if ( sub_800470DC(TM3_DRAFT_U32(a1 + 36)) )
    {
      TM3_DRAFT_U32(v2 + 4208) = 0;
      sub_80033E94(v2, 5);
    }
    v3 = TM3_DRAFT_U16(a1 - 20 + 2);
    v4 = TM3_DRAFT_U16(a1 - 20 + 4);
    v6 = TM3_DRAFT_U16(a1 - 20);
    v7 = v3;
    v8 = v4;
    sub_8002F2A8((int)&v6);
    v7 -= 32;
    sub_8004A294(9, (int)&v6, (int)&v9, 80, 1365, 384, 20, TM3_DRAFT_U32(a1 + 36));
    return sub_8002F36C(a1);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80014D6C(uint32 a1, uint32 a2)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
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
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int result; 

  v2 = TM3_DRAFT_I32(a1);
  v3 = TM3_DRAFT_I32(a1 + (3) * 4u);
  v4 = 2 * TM3_DRAFT_I32(a1);
  v5 = TM3_DRAFT_I32(a1 + (1) * 4u);
  v6 = v3 * v4;
  v7 = TM3_DRAFT_I32(a1 + (2) * 4u);
  v8 = v3 * 2 * v5;
  v9 = 2 * v7;
  v10 = v3 * 2 * v7;
  v11 = v2 * 2 * v5;
  v12 = v2 * 2 * v7;
  TM3_DRAFT_U32(a2 + 28) = 0;
  TM3_DRAFT_U32(a2 + 24) = 0;
  TM3_DRAFT_U32(a2 + 20) = 0;
  v13 = (v5 * 2 * v5 + 2048) >> 12;
  v14 = (v7 * 2 * v7 + 2048) >> 12;
  v15 = v12;
  TM3_DRAFT_U16(a2) = 4096 - (v13 + v14);
  v16 = v2 * v4;
  v17 = (v10 + 2048) >> 12;
  v18 = (v11 + 2048) >> 12;
  v19 = (v8 + 2048) >> 12;
  v20 = (v15 + 2048) >> 12;
  TM3_DRAFT_U16(a2 + 2) = v18 - v17;
  TM3_DRAFT_U16(a2 + 4) = v20 + v19;
  TM3_DRAFT_U16(a2 + 6) = v18 + v17;
  TM3_DRAFT_U16(a2 + 12) = v20 - v19;
  v21 = (v16 + 2048) >> 12;
  TM3_DRAFT_U16(a2 + 8) = 4096 - (v21 + v14);
  v22 = (v6 + 2048) >> 12;
  TM3_DRAFT_U16(a2 + 16) = 4096 - (v21 + v13);
  v23 = (v5 * v9 + 2048) >> 12;
  LOWORD(v18) = v23 - v22;
  result = v23 + v22;
  TM3_DRAFT_U16(a2 + 10) = v18;
  TM3_DRAFT_U16(a2 + 14) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80027CDC(uint32 a1, uint32 a2)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  sint16 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int result; 

  v3 = 12;
  v4 = 0;
  v5 = 4;
  v6 = a1;
  do
  {
    if ( TM3_DRAFT_U16(a1 + 2) >= TM3_DRAFT_I32(v6 + 28) )
    {
      v7 = dword_80089CE0;
      v8 = TM3_DRAFT_U16(v6 + 50) + TM3_DRAFT_U16(v6 + 48);
      v9 = TM3_DRAFT_U32(v6 + 40);
      v10 = (TM3_DRAFT_U32(v6 + 36) + 512) >> 10;
      TM3_DRAFT_U16(v6 + 50) = v8;
      TM3_DRAFT_U32(v6 + 40) = v9 + v7;
      v11 = (TM3_DRAFT_U32(v6 + 44) + 512) >> 10;
      TM3_DRAFT_U32(v6 + 24) += v10;
      v12 = TM3_DRAFT_U32(v6 + 40) + 512;
      TM3_DRAFT_U32(v6 + 32) += v11;
      TM3_DRAFT_U32(v6 + 28) += v12 >> 10;
      sub_8005CA24(v8, (uint32)(a1 + v5));
      sub_8005C884(TM3_DRAFT_I16(v6 + 50), (uint32)(a1 + v5));
    }
    else
    {
      --v3;
    }
    v5 += 48;
    result = ++v4 < 12;
    v6 += 48;
  }
  while ( v4 < 12 );
  if ( !v3 )
    return sub_8004A570(a1);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800481E8(uint32 a1)
{
  uint32 tile[4];
  uint32 draw_mode[2];
  uint32 tile_address = TM3_DRAFT_LOCAL_ADDRESS(tile, sizeof(tile));
  uint32 mode_address = TM3_DRAFT_LOCAL_ADDRESS(draw_mode, sizeof(draw_mode));
  uint32 fraction = sub_80015684(TM3_DRAFT_U32(0x80089E28u), a1, 12u);
  sint32 numerator = (sint32)((TM3_DRAFT_U32(0x80089E2Cu) + fraction) << 8u);
  sint32 denominator = TM3_DRAFT_I32(0x80089E30u);
  uint32 progress;
  uint32 width;
  uint16 page;

  if (!denominator)
    tm3_draft_unimplemented("sub_800481E8 progress division by zero");
  progress = (uint32)((sint64)numerator / denominator) << 4u;
  sub_8005FA24(0);
  sub_800481A8();
  page = (uint16)sub_8005AD34(0, 2, 0, 0);
  sub_8005AEF4(mode_address, 0, TM3_DRAFT_U32(0x800D2EF0u), page);
  sub_80057CE8(mode_address);
  sub_80057750(0);
  sub_8005AEB4(tile_address);
  TM3_DRAFT_U8(tile_address + 4u) = 35u;
  TM3_DRAFT_U8(tile_address + 5u) = 35u;
  TM3_DRAFT_U8(tile_address + 6u) = 20u;
  TM3_DRAFT_U16(tile_address + 8u) = 41u;
  TM3_DRAFT_U16(tile_address + 10u) = 168u;
  width = 242u * (4096u - progress) + 2048u;
  TM3_DRAFT_U16(tile_address + 12u) = (uint16)((sint32)width >> 12);
  TM3_DRAFT_U16(tile_address + 14u) = 10u;
  TM3_DRAFT_U8(tile_address + 7u) |= 2u;
  sub_80057CE8(tile_address);
  return sub_80057750(0);
}
/* Unverified decompiler-derived draft */
uint32 sub_800157E8(void)
{
  int result; 
  int v1; 
  int v2; 
  int v3; 
  uint32 v4; 

  result = dword_800896A0;
  if ( dword_800896A0 )
  {
    result = HIWORD(dword_80089EFC);
    v1 = 0;
    if ( HIWORD(dword_80089EFC) )
    {
      v2 = 0;
      v3 = 0;
      while ( !sub_80056784((uint32)(dword_80089F08 + v2), (uint32)(dword_80089CA4 + v3 + 300)) )
      {
        v4 = (uint32)(v2 + dword_80089F08);
        if ( TM3_DRAFT_U16(v2 + dword_80089F08 + 18) != TM3_DRAFT_U8(v3 + dword_80089CA4)
          || TM3_DRAFT_I16(v4 + (10) * 2u) <= 0 && TM3_DRAFT_I16(v4 + (11) * 2u) <= 0 )
        {
          break;
        }
        if ( TM3_DRAFT_I16(v4 + (8) * 2u) < 0 )
          goto LABEL_11;
        sub_80016D28(v1, 0);
        v2 += 36;
LABEL_12:
        result = ++v1 < HIWORD(dword_80089EFC);
        v3 += 316;
        if ( v1 >= HIWORD(dword_80089EFC) )
          goto LABEL_13;
      }
      TM3_DRAFT_U16(v2 + dword_80089F08 + 16) = -1;
LABEL_11:
      v2 += 36;
      goto LABEL_12;
    }
LABEL_13:
    TM3_DRAFT_U32(0x800896A4u + (1) * 4u) = 0;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80034BEC(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  uint32 carried_result;
  sint16 v8; 
  sint16 v9; 
  int v10; 
  int v11; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  char v18[12]; 
  sint16 v19[4]; 
  char v20[8]; 

  sub_8005B8D4();
  v8 = TM3_DRAFT_U16(a1 - 20 + 2);
  v9 = TM3_DRAFT_U16(a1 - 20 + 4);
  v19[0] = TM3_DRAFT_U16(a1 - 20);
  v19[1] = v8;
  v19[2] = v9;
  sub_8005C3C4((int)v19, (int)v18, v20);
  v10 = TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 164) + 4 * TM3_DRAFT_U16(a1 + 160) + 8);
  v14 = 0;
  v16 = 0;
  v13 = 4096;
  v15 = 4096;
  LOWORD(v17) = 4096;
  sub_8005CBC4(TM3_DRAFT_U16(a1 + 158), (sint16 *)&v13);
  sub_8005BD24(&v13);
  sub_8005BDB4(&v13);
  carried_result = sub_8002A72C(a1 + 124, 8421504, v10, a2, a3, 1, a4, 200);
  sub_8005B978();
  return carried_result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80028D80(uint32 a1, uint32 a2)
{
  int v3; 
  sint16 v4; 
  sint16 v5; 
  uint32 v6; 
  uint8 v7; 
  sint32 v8; 
  unsigned int v9; 
  uint8 v10; 
  int result; 
  sint16 v12[4]; 

  v3 = a1 - 20;
  v4 = TM3_DRAFT_U16(a1 - 20);
  v5 = TM3_DRAFT_U16(a1 - 20 + 2);
  LOWORD(v3) = TM3_DRAFT_U16(v3 + 4);
  v12[0] = v4;
  v12[1] = v5;
  v12[2] = v3;
  if ( (TM3_DRAFT_U8(a1 + 8) & TM3_DRAFT_U8(a1 + 12)) == 0 )
    sub_80028B60(v12, TM3_DRAFT_I16(a1 + 14));
  if ( TM3_DRAFT_U8(a1 + 6) >= 2u )
  {
    v6 = TM3_DRAFT_U32(a1 + 24);
    v7 = TM3_DRAFT_U8(a1 + 21) + 1;
    TM3_DRAFT_U8(a1 + 21) = v7;
    if ( v7 >= TM3_DRAFT_I16(v6) )
      TM3_DRAFT_U8(a1 + 21) = 0;
    TM3_DRAFT_U8(a1 + 6) = 0;
  }
  v8 = TM3_DRAFT_U8(a1 + 8) < 0x1Eu;
  ++TM3_DRAFT_U8(a1 + 6);
  if ( !v8 )
  {
    v9 = TM3_DRAFT_U8(a1 + 7);
    if ( v9 != 255 )
    {
      v10 = TM3_DRAFT_U8(a1 + 9);
      TM3_DRAFT_U8(a1 + 8) = 0;
      TM3_DRAFT_U8(a1 + 9) = ++v10;
      if ( v10 >= v9 )
        sub_8004A570(a1);
    }
  }
  result = TM3_DRAFT_U8(a1 + 8) + 1;
  TM3_DRAFT_U8(a1 + 8) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001BC78(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  int v7; 
  int v9; 
  int v10; 

  v7 = TM3_DRAFT_U32(0x800d340cu) - 1;
  if ( TM3_DRAFT_U32(0x800d340cu) - 1 >= 0 )
  {
    v9 = 4 * v7 - 2146619768;
    do
    {
      v10 = TM3_DRAFT_U32(v9 + 1424);
      if ( v10 != a1
        && TM3_DRAFT_U32(v10 + 3396) == a2
        && (TM3_DRAFT_U8(a1 + 3328) || TM3_DRAFT_U8(v10 + 3328) >= 2u) )
      {
        --v7;
        if ( a4 >= (int)sub_80015724(TM3_DRAFT_I16(v10 + 3348) - TM3_DRAFT_I16(a3), TM3_DRAFT_I16(v10 + 3350) - TM3_DRAFT_I16(a3 + (1) * 2u)) )
          return 1;
      }
      else
      {
        --v7;
      }
      v9 -= 4;
    }
    while ( v7 >= 0 );
  }
  return 0;
}

/* Unverified decompiler-derived draft */
uint32 sub_800292D4(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  int v8; 
  sint16 v9; 
  sint16 v10; 
  int v12; 
  int v13; 
  sint16 v14[4]; 
  unsigned int vars0; 

  v8 = TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 48) + 4 * TM3_DRAFT_U16(a1 + 32) + 8);
  v9 = TM3_DRAFT_U16(a1 - 20 + 2);
  v10 = TM3_DRAFT_U16(a1 - 20 + 4);
  v14[0] = TM3_DRAFT_U16(a1 - 20);
  v14[1] = v9;
  v14[2] = v10;
  sub_8002A190(
    (int)v14,
    TM3_DRAFT_U16(a1 + 40),
    TM3_DRAFT_U16(a1 + 42),
    4210752,
    v8,
    a2,
    a3,
    1,
    a4);
  return sub_8002A190(
           a1 + 12,
           TM3_DRAFT_U16(a1 + 40),
           TM3_DRAFT_U16(a1 + 42),
           4210752,
           v8,
           a2,
           a3,
           1,
           a4);
}

/* Unverified decompiler-derived draft */
uint32 sub_8004B384(uint32 a1, uint32 a2)
{
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v12[4]; 
  int v13[4]; 

  v4 = TM3_DRAFT_I16(a1 - 20 + 2);
  v5 = TM3_DRAFT_I16(a1 - 20 + 4);
  v6 = TM3_DRAFT_U32(a2 + 4);
  v7 = TM3_DRAFT_U32(a1 - 24) + TM3_DRAFT_U32(v6 - 24);
  v8 = TM3_DRAFT_I16(v6 - 20 + 2);
  v9 = TM3_DRAFT_I16(v6 - 20 + 4);
  v12[0] = TM3_DRAFT_I16(a1 - 20) - TM3_DRAFT_I16(v6 - 20);
  v12[1] = v4 - v8;
  v10 = v7 * v7;
  v12[2] = v5 - v9;
  sub_8005C0FC((int)v12, (int)v13);
  if ( v13[0] + v13[1] + v13[2] < v10 )
    sub_8004A6AC((uint32)(a1 - 48), (uint32)(TM3_DRAFT_U32(a2 + 4) - 48));
  return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_80031210(uint32 a1, uint32 a2)
{
  sint16 v3; 
  sint16 v4; 
  sint16 v5; 
  int v7; 
  int v8; 
  int v9; 
  sint16 v10; 
  sint16 v11; 
  sint16 v12; 
  int v13; 

  v3 = TM3_DRAFT_U16(a1 + 8);
  v4 = TM3_DRAFT_U16(a1 + 10);
  v5 = TM3_DRAFT_U16(a1 + 12);
  v13 = 2105376;
  v10 = v3;
  v12 = v5;
  v11 = v4;
  v9 = TM3_DRAFT_U32(0x80089D24u + (13) * 4u);
  sub_8004A294(9, (int)&v10, (int)&v13, 32, 1024, 128, 30, TM3_DRAFT_U32(a1 + 160));
  v11 -= 200;
  return sub_800276AC((int)&v10, 0, 800, a2, 0, -1);
}

/* Unverified decompiler-derived draft */
uint32 sub_80033BCC(uint32 a1)
{
  int v2; 
  int v3; 
  int v4; 
  int result; 

  v2 = TM3_DRAFT_U32(a1 + 3968);
  if ( v2 < 15 )
  {
    v3 = -2146915408;
    v4 = 4 * v2;
  }
  else
  {
    v3 = -2146916600;
    v4 = 4 * TM3_DRAFT_U32(a1 + 3928);
  }
  TM3_DRAFT_U16(a1 + 16 * v2 + 4126) = (unsigned int)(30 * TM3_DRAFT_U32(v4 + v3) + 2048) >> 12;
  tm3_draft_indirect(TM3_DRAFT_U32(a1 + 16u * TM3_DRAFT_U32(a1 + 3968u) + 4132u), 1u, a1);
  if ( TM3_DRAFT_U32(a1 + 3968) == 15 && TM3_DRAFT_U8(a1 + 3328) == 1 )
    sub_80047364(TM3_DRAFT_U32(a1 + 3924), TM3_DRAFT_U32(a1 + 3928) + 22);
  result = sub_80033CB4(a1);
  if ( !result )
    return sub_80033E94(a1, TM3_DRAFT_U32(a1 + 3968));
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80020FDC(uint32 a1)
{
  int v1; 
  uint32 v2; 
  sint16 v3; 
  sint16 v4; 
  int v5; 
  int v6; 
  int result; 

  v1 = a1;
  v2 = (uint32)(a1 + 32);
  sub_8001498C((uint32)(a1 + 32), (uint32)(v1 + 44), TM3_DRAFT_U32(v1 + 104), 18);
  v3 = TM3_DRAFT_U16(v1 + 14);
  v4 = TM3_DRAFT_U16(v1 + 16);
  TM3_DRAFT_U16(v1 + 4) = TM3_DRAFT_U16(v1 + 12);
  TM3_DRAFT_U16(v1 + 6) = v3;
  TM3_DRAFT_U16(v1 + 8) = v4;
  sub_8001498C((uint32)(v1 + 20), v2, 8738, 18);
  v5 = TM3_DRAFT_U32(v1 + 24) + 2048;
  TM3_DRAFT_U16(v1 + 12) = (TM3_DRAFT_U32(v1 + 20) + 2048) >> 12;
  v6 = TM3_DRAFT_U32(v1 + 28);
  TM3_DRAFT_U16(v1 + 14) = v5 >> 12;
  TM3_DRAFT_U16(v1 + 16) = (v6 + 2048) >> 12;
  result = v1 + 68;
  TM3_DRAFT_U32(v1 + 44) = 0;
  TM3_DRAFT_U32(v1 + 48) = 0;
  TM3_DRAFT_U32(v1 + 52) = 0;
  TM3_DRAFT_U32(v1 + 68) = 0;
  TM3_DRAFT_U32(v1 + 72) = 0;
  TM3_DRAFT_U32(v1 + 76) = 0;
  TM3_DRAFT_U32(v1 + 56) = 0;
  v1 += 56;
  TM3_DRAFT_U32(v1 + 4) = 0;
  TM3_DRAFT_U32(v1 + 8) = 0;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002F7B0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
  uint32 carried_result;
  int v17; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  uint32 v25; 
  unsigned int v26; 

  sub_8005B8D4();
  sub_8005B614((uint32)a5, a1, &v20);
  sub_8005BD24(&v20);
  sub_8005BDB4(&v20);
  if ( TM3_DRAFT_U16(a1 + (16) * 2u) == 1 )
    carried_result = sub_80029660((uint32)(dword_80089D14 + 56), TM3_DRAFT_U32(dword_80089D14 + 912), TM3_DRAFT_U32(dword_80089D14 + 916), 0, a2, a3, a4);
  else
    carried_result = sub_80029660((uint32)(dword_80089D14 + 40), TM3_DRAFT_U32(dword_80089D14 + 912), TM3_DRAFT_U32(dword_80089D14 + 916), 0, a2, a3, a4);
  sub_8005B978();
  return carried_result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80053A3C(uint32 a1, uint32 a2)
{
  int v2; 
  int v3; 
  int v4; 
  sint32 result; 
  unsigned int v6; 

  v2 = 1;
  if ( (TM3_DRAFT_U16(24 * a1 - 2146624256 + 8) & 0x8000) != 0 )
    v2 = -1;
  v3 = 4 * a2 - 2146621256;
  while ( 1 )
  {
    v4 = TM3_DRAFT_U32(v3 + 24);
    if ( v4 == 11 )
    {
      if ( !sub_80048078(3) )
        goto LABEL_10;
      v4 = TM3_DRAFT_U32(v3 + 24);
    }
    if ( v4 != 7 || sub_80048078(4) )
    {
      result = (unsigned int)(TM3_DRAFT_U32(v3 + 24) - 14) < 2;
      if ( (unsigned int)(TM3_DRAFT_U32(v3 + 24) - 14) >= 2 )
        return result;
    }
LABEL_10:
    v6 = TM3_DRAFT_U32(v3 + 24) + v2;
    TM3_DRAFT_U32(v3 + 24) = v6;
    if ( v6 >= 0x10 )
      TM3_DRAFT_U32(v3 + 24) = 0;
  }
}

/* Unverified decompiler-derived draft */
uint32 sub_80064AB0(uint32 a1)
{
  uint32 v2; /* TODO Guest callback signature */ 
  int v3; 
  int v4; 
  int result; 

  v2 = TM3_DRAFT_U32(0x80087E30u + (dword_80087DF0++) * 4u);
  v3 = tm3_draft_indirect(v2, 0u);
  if ( v3 < 0 )
    return tm3_draft_indirect(dword_80087DAC, 1u, (uint32)v3);
  v4 = dword_80087DF0;
  if ( dword_80087DF0 )
  {
    if ( dword_80087DF0 != 3 || TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 60)) != 128 )
    {
      sub_8006760C(60);
      if ( !sub_80065028() )
        tm3_draft_indirect(dword_80087DAC, 1u, (uint32)-3);
    }
    v4 = dword_80087DF0;
  }
  result = v4 - 1;
  if ( v4 >= 5 )
    dword_80087DF0 = v4 - 1;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001A7EC(void)
{
  int v0; 
  int v1; 
  int v2; 
  uint32 v3; 
  uint32 v4; 
  int result; 
  _DWORD v6[4]; 
  char v7; 

  v0 = TM3_DRAFT_U32(0x800d340cu) - 1;
  v1 = 0;
  if ( TM3_DRAFT_U32(0x800d340cu) - 1 >= 0 )
  {
    v2 = 4 * v0 - 2146619768;
    v3 = &v7;
    while ( 1 )
    {
      v4 = TM3_DRAFT_U32(v2 + 1424);
      if ( TM3_DRAFT_U8(v4 + (3328) * 1u) != 1 )
        break;
      if ( (uint8)TM3_DRAFT_U8(v4 + (3700) * 1u) < (unsigned int)(uint8)TM3_DRAFT_U8(v4 + (3701) * 1u) )
      {
        TM3_DRAFT_U32(v3) = v4;
LABEL_9:
        v3 += (4) * 1u;
        ++v1;
      }
LABEL_10:
      --v0;
      v2 -= 4;
      if ( v0 < 0 )
        goto LABEL_11;
    }
    if ( TM3_DRAFT_U8(v4 + (3328) * 1u) || TM3_DRAFT_U8(v4 + (3700) * 1u) )
      goto LABEL_10;
    TM3_DRAFT_U32(v3) = v4;
    goto LABEL_9;
  }
LABEL_11:
  result = 0;
  if ( v1 > 0 )
    return v6[(int)sub_80039FD4() % v1 + 4];
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80023B38(uint32 a1)
{
  uint32 v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  uint32 v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  sint32 result; 
  char v13[8]; 

  v2 = (uint32)(a1 + 1536);
  sub_8005BD24((uint32)(a1 + 1536));
  sub_8005BDB4(v2);
  v3 = 0;
  v4 = a1;
  v5 = 1592;
  v6 = 408;
  do
  {
    v7 = (uint32)(a1 + v5);
    sub_8005C234(a1 + v6, (uint32)(a1 + v5 + 12), v13);
    v8 = v4 + 1604;
    v9 = TM3_DRAFT_I16(v4 + 1604);
    v4 += 112;
    v5 += 112;
    v6 += 8;
    ++v3;
    v10 = TM3_DRAFT_I16(v8 + 2);
    v11 = TM3_DRAFT_I16(v8 + 4);
    TM3_DRAFT_U32(v7 + (5) * 4u) = v9 << 12;
    v7 += (5) * 4u;
    TM3_DRAFT_U32(v7 + (1) * 4u) = v10 << 12;
    result = v3 < 8;
    TM3_DRAFT_U32(v7 + (2) * 4u) = v11 << 12;
  }
  while ( v3 < 8 );
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80048448(uint32 a1)
{
  uint32 v2; 
  sint16 rect[4];
  uint32 rect_address = TM3_DRAFT_LOCAL_ADDRESS(rect, sizeof(rect));

  if ( (TM3_DRAFT_U8(a1 + 4) & 8) != 0 )
  {
    rect[0] = TM3_DRAFT_U16(a1 + 12);
    rect[1] = TM3_DRAFT_U16(a1 + 14);
    rect[2] = TM3_DRAFT_U16(a1 + 16);
    rect[3] = TM3_DRAFT_U16(a1 + 18);
    sub_800579FC(rect_address, a1 + 20);
    sub_80057750(0);
    v2 = (uint32)(a1 + 8 + TM3_DRAFT_U32(a1 + 8));
  }
  else
  {
    v2 = (uint32)(a1 + 8);
  }
  rect[0] = TM3_DRAFT_U16(v2 + (2) * 2u);
  rect[1] = TM3_DRAFT_U16(v2 + (3) * 2u);
  rect[2] = TM3_DRAFT_U16(v2 + (4) * 2u);
  rect[3] = TM3_DRAFT_U16(v2 + (5) * 2u);
  sub_800579FC(rect_address, (int)((v2 + (6) * 2u)));
  return sub_80057750(0);
}

/* Unverified decompiler-derived draft */
uint32 sub_8003E964(uint32 a1, uint32 a2)
{
  int v2; 
  int v3; 
  uint32 v4; 
  int v5; 
  int v6; 
  int v7; 
  int result; 
  int v9; 
  int v10; 

  v2 = TM3_DRAFT_U8(24 * a1 - 2146624256 + 14);
  v3 = 2 * a2;
  v4 = (0x8007E8A4u + (v3) * 4u);
  v5 = 4 * (v2 << 24 >> 28);
  v6 = v2 & 0xF;
  v7 = v5 + v6;
  if ( LOBYTE(TM3_DRAFT_U32(0x8007E8A4u + (v3) * 4u)) )
    sub_8003E828(v5 + v6, LOBYTE(TM3_DRAFT_U32(0x8007E8A4u + (v3) * 4u)));
  result = TM3_DRAFT_U8((v4 + (1) * 4u));
  if ( TM3_DRAFT_U8((v4 + (1) * 4u)) )
  {
    v9 = 28 * v7 - 2146624480;
    v10 = TM3_DRAFT_I32(v4 + (1) * 4u);
    result = TM3_DRAFT_I16(v9 + 26) < v10;
    if ( TM3_DRAFT_I16(v9 + 26) >= v10 )
    {
      TM3_DRAFT_U16(v9 + 26) = TM3_DRAFT_U16(v4 +(2) * 2u);
      return sub_8003E888(v7, TM3_DRAFT_U8((v4 + (2) * 4u)), TM3_DRAFT_U8((v4 + (3) * 4u)), TM3_DRAFT_U8((v4 + (1) * 4u)));
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002DEA4(uint32 a1)
{
  uint32 v2; /* TODO Guest callback signature */ 
  int result; 

  if ( TM3_DRAFT_U32(a1 + 88) )
  {
    v2 = *(void (**)(void))(TM3_DRAFT_U32(a1 + 156) + 20);
    if ( !v2 )
      goto LABEL_9;
  }
  else
  {
    if ( !TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 156) + 24) )
      goto LABEL_9;
    if ( TM3_DRAFT_U32(a1 + 68) >= 0xAu )
      TM3_DRAFT_U32(a1 + 68) = 0;
    v2 = *(void (**)(void))(TM3_DRAFT_U32(a1 + 156) + 24);
  }
  tm3_draft_indirect(v2, 0u);
LABEL_9:
  result = 30;
  if ( TM3_DRAFT_U8(a1 + 321) != 1 )
    return sub_8004A570(a1);
  TM3_DRAFT_U16(a1 + 110) = 30;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80056350(uint32 a1, uint32 a2)
{
  uint32 entry = TM3_DRAFT_U32(a2);
  uint32 cursor = a2 + 4u;
  uint32 jump_base = (a1 << 4u) >> 6u;

  while (entry != 0xFFFFFFFFu)
  {
    uint32 target = a1 + (entry & 0xFFFFFFFCu);
    switch (entry & 3u)
    {
      case 0u:
        TM3_DRAFT_U32(target) += a1;
        break;
      case 1u:
      {
        uint32 addend = TM3_DRAFT_U32(cursor);
        cursor += 4u;
        TM3_DRAFT_U16(target) = (uint16)((a1 + addend + 0x8000u) >> 16u);
        break;
      }
      case 2u:
        TM3_DRAFT_U16(target) = (uint16)(TM3_DRAFT_U16(target) + a1);
        break;
      case 3u:
        TM3_DRAFT_U32(target) += jump_base;
        break;
    }
    entry = TM3_DRAFT_U32(cursor);
    cursor += 4u;
  }
  return 0xFFFFFFFFu;
}
/* Unverified decompiler-derived draft */
uint32 sub_80033A80(uint32 a1, uint32 a2)
{
  sint16 v3; 
  int i; 
  int result; 

  v3 = TM3_DRAFT_U16(a1 + 16 * TM3_DRAFT_U32(a1 + 3968) + 4126);
  sub_80033A4C(a1, a2);
  for ( i = 15; !TM3_DRAFT_U16(a1 + 16 * TM3_DRAFT_U32(a1 + 3968) + 4120); --i )
  {
    if ( !i )
      break;
    sub_80033A4C(a1, a2);
  }
  result = a1 + 16 * TM3_DRAFT_U32(a1 + 3968);
  TM3_DRAFT_U16(result + 4126) = v3;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800473BC(uint32 a1, uint32 a2, ...)
{
  if ( a1 == 1 )
  {
    uint32 a3;
    va_list arguments;
    va_start(arguments, a2);
    a3 = va_arg(arguments, uint32);
    va_end(arguments);
    TM3_DRAFT_U32(0x800d3460u) = 0x80047394u;
    TM3_DRAFT_U32(0x800d3464u) = a2;
    TM3_DRAFT_U32(0x800d346cu) = a3;
  }
  else if ( a1 )
  {
    if ( a1 == 2 )
      TM3_DRAFT_U32(0x800d3460u) = a2;
  }
  else
  {
    TM3_DRAFT_U32(0x800d3460u) = 0x80047394u;
    TM3_DRAFT_U32(0x800d3464u) = 0x80087B78u;
    TM3_DRAFT_U32(0x800d346cu) = a2;
  }
  return sub_80063304(4, 0, (unsigned int)TM3_DRAFT_U32(0x800d3460u));
}

/* Unverified decompiler-derived draft */
uint32 sub_80031C30(uint32 a1, uint32 a2)
{
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  sint16 v9[4]; 
  char v10[32]; 

  v4 = sub_8002E964(a2, a1, (int)v10);
  sub_80026B88(a1, 2, v9);
  sub_8004A294(8, 15, 21, a1, v4, (int)v9, (int)v10, a2);
  return sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 55), 5, a1, 1200);
}

/* Unverified decompiler-derived draft */
uint32 sub_8002FD9C(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
  uint32 carried_result;
  int v17; 
  int v19[8]; 

  sub_8005B8D4();
  sub_8005B614((uint32)a5, (uint32)a1, v19);
  sub_8005BD24(v19);
  sub_8005BDB4(v19);
  carried_result = sub_80029AB0(
    (uint32)(dword_80089D14 + 16),
    TM3_DRAFT_U32(dword_80089D14 + 912),
    TM3_DRAFT_U32(dword_80089D14 + 916),
    0,
    TM3_DRAFT_U32(a1 + 80),
    a2,
    a3,
    a4,
    v19[0],
    v19[1],
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    (uint32)v19[6],
    v19[7]);
  sub_8005B978();
  return carried_result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004A000(uint32 a1)
{
  uint32 v2; 
  signed int v3; 
  uint32 v4; 
  uint32 v5; 
  int v6; 
  sint32 v7; 
  int v8; 
  uint32 v9; 

  if ( !a1 )
    return 0;
  v2 = 0x80089890u;
  v3 = (unsigned int)(a1 + 15) >> 3;
  if ( dword_80089890 )
  {
    do
    {
      v4 = (uint32)TM3_DRAFT_I32(v2);
      if ( TM3_DRAFT_U32(TM3_DRAFT_I32(v2) + 4) >= v3 )
        break;
      v2 = (uint32)TM3_DRAFT_I32(v2);
    }
    while ( TM3_DRAFT_U32(v4) );
  }
  v5 = (uint32)TM3_DRAFT_I32(v2);
  if ( TM3_DRAFT_I32(v2) )
  {
    v6 = TM3_DRAFT_I32(v5 + (1) * 4u);
    v7 = v3 != v6;
    v8 = v6 - v3;
    if ( v7 )
    {
      TM3_DRAFT_I32(v5 + (1) * 4u) = v3;
      v9 = (uint32)(TM3_DRAFT_I32(v2) + 8 * v3);
      TM3_DRAFT_U32(v9 + (1) * 4u) = v8;
      TM3_DRAFT_U32(v9) = TM3_DRAFT_U32(TM3_DRAFT_I32(v2));
      TM3_DRAFT_I32(v2) = (int)v9;
    }
    else
    {
      TM3_DRAFT_I32(v2) = TM3_DRAFT_I32(v5);
    }
    v5 += (2) * 4u;
  }
  return v5;
}

/* Unverified decompiler-derived draft */
uint32 sub_80018CAC(uint32 a1)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 

  sub_80019DC0((int)a1);
  nullsub_7();
  if ( TM3_DRAFT_U32(a1 + (982) * 4u) == 6 )
  {
    v2 = TM3_DRAFT_U32(a1 + (1098) * 4u);
    if ( v2 )
    {
      do
      {
        v3 = TM3_DRAFT_U32(v2 + 4);
        sub_8004A0F8(v2);
        v2 = v3;
      }
      while ( v3 );
    }
  }
  v4 = TM3_DRAFT_U32(a1 + (1095) * 4u);
  if ( v4 )
  {
    do
    {
      v5 = TM3_DRAFT_U32(v4 + 8);
      sub_8004A0F8(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  v6 = TM3_DRAFT_U32(a1 + (1013) * 4u);
  if ( v6 )
    sub_8004A570(v6);
  return sub_80046F1C((int)a1);
}

/* Unverified decompiler-derived draft */
uint32 sub_8002C050(uint32 a1, uint32 a2, uint32 a3)
{
  int result; 
  int v5; 
  int v6; 

  result = 1;
  if ( TM3_DRAFT_U8(a1 + 3328) == 1 )
  {
    v5 = a1 + 16 * a3;
    v6 = BYTE1(TM3_DRAFT_U32(0x8007E130u + (5 * a3 + 2) * 4u)) - TM3_DRAFT_I16(v5 + 4120);
    result = 0;
    if ( v6 > 0 )
    {
      sub_80033A10(a1, a3);
      TM3_DRAFT_U16(v5 + 4120) += ((TM3_DRAFT_U16(a2 + 2) - v6) & ((TM3_DRAFT_U16(a2 + 2) - v6) >> 31)) + v6;
      return 1;
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001477C(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  int result; 
  char v5; 
  int v6; 
  int v7; 
  sint16 v8; 
  sint16 v9; 

  result = 32 - a4;
  v5 = a4 - 1;
  v6 = TM3_DRAFT_I16(a2 + (1) * 2u);
  v7 = TM3_DRAFT_I16(a2 + (2) * 2u);
  v8 = TM3_DRAFT_U16(a1 + (1) * 2u);
  v9 = TM3_DRAFT_U16(a1 + (2) * 2u);
  TM3_DRAFT_U16(a1) += (((unsigned int)(TM3_DRAFT_I16(a2) * a3) >> v5 >> 1) | ((uint64)(TM3_DRAFT_I16(a2) * (uint64)a3) >> 32 << result))
       + (((unsigned int)(TM3_DRAFT_I16(a2) * a3) >> v5) & 1);
  TM3_DRAFT_U16(a1 + (1) * 2u) = (((unsigned int)(v6 * a3) >> v5 >> 1) | ((uint64)(v6 * (uint64)a3) >> 32 << result))
        + (((unsigned int)(v6 * a3) >> v5) & 1)
        + v8;
  TM3_DRAFT_U16(a1 + (2) * 2u) = (((unsigned int)(v7 * a3) >> v5 >> 1) | ((uint64)(v7 * (uint64)a3) >> 32 << result))
        + (((unsigned int)(v7 * a3) >> v5) & 1)
        + v9;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001AE7C(uint32 a1)
{
  uint32 result; /* TODO Guest callback signature */ 
  int v2; 
  int v3; 
  sint16 v4; 

  result = 0;
  if ( TM3_DRAFT_U32(a1 + 4100) )
    return result;
  if ( TM3_DRAFT_I16(a1 + 3392) >= 200 )
  {
    v4 = TM3_DRAFT_U16(a1 + 3340) + 1;
    if ( TM3_DRAFT_I16(a1 + 3340) < 40 )
    {
      TM3_DRAFT_U16(a1 + 3340) = v4;
      if ( v4 == 40 )
        TM3_DRAFT_U16(a1 + 3342) = 0;
    }
    return 0;
  }
  v2 = TM3_DRAFT_U16(a1 + 3340) - 1;
  TM3_DRAFT_U16(a1 + 3340) = v2;
  if ( (sint32)((uint32)v2 << 16u) > 0 )
    return 0;
  v3 = TM3_DRAFT_U32(a1 + 3324);
  TM3_DRAFT_U16(a1 + 3340) = 0;
  if ( !v3 )
    TM3_DRAFT_U32(a1 + 3324) = TM3_DRAFT_U32(a1 + 3320);
  return 0x8001E2BCu;
}

/* Unverified decompiler-derived draft */
void sub_80019DC0(uint32 a1)
{
  int v2; 
  int v3; 
  int v4; 

  sub_8001A8C4(a1, 0, 0);
  sub_8001A580(a1);
  v2 = TM3_DRAFT_U32(a1 + 4208);
  if ( v2 )
  {
    sub_8004A570(v2);
    TM3_DRAFT_U32(a1 + 4208) = 0;
    TM3_DRAFT_U16(a1 + 3414) = -1;
  }
  v3 = TM3_DRAFT_U32(a1 + 4256);
  if ( v3 )
  {
    sub_8004A570(v3);
    TM3_DRAFT_U32(a1 + 4256) = 0;
  }
  v4 = TM3_DRAFT_U32(a1 + 4368);
  if ( v4 )
  {
    sub_8004A570(v4);
    TM3_DRAFT_U32(a1 + 4368) = 0;
  }
  sub_8004A0F8(TM3_DRAFT_U32(a1 + 3440));
  sub_8004A0F8(TM3_DRAFT_U32(a1 + 3696));
}
