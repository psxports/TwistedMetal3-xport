#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

#define dword_80089C98 TM3_DRAFT_U32(0x80089C98u)
#define dword_80087DB4 TM3_DRAFT_U32(0x80087DB4u)
#define dword_80089DE0 TM3_DRAFT_U32(0x80089DE0u)
#define off_80089BE4 TM3_DRAFT_U32(0x80089BE4u)
#define dword_8007FF28 TM3_DRAFT_U32(0x8007FF28u)
#define off_80080020 TM3_DRAFT_U32(0x80080020u)
#define off_80080070 TM3_DRAFT_U32(0x80080070u)
#define off_800804BC TM3_DRAFT_U32(0x800804BCu)
#define off_80080270 TM3_DRAFT_U32(0x80080270u)
#define off_8008012C TM3_DRAFT_U32(0x8008012Cu)
#define dword_80089CB4 TM3_DRAFT_U32(0x80089CB4u)
#define dword_80089858 TM3_DRAFT_U32(0x80089858u)
#define dword_80081E38 TM3_DRAFT_U32(0x80081E38u)
#define dword_80089878 TM3_DRAFT_U32(0x80089878u)
#define dword_80089898 TM3_DRAFT_U32(0x80089898u)
#define dword_80089894 TM3_DRAFT_U32(0x80089894u)
#define dword_80089D24 TM3_DRAFT_U32(0x80089D24u)
#define dword_80089E38 TM3_DRAFT_U32(0x80089E38u)
#define dword_80089EA0 TM3_DRAFT_U32(0x80089EA0u)
#define dword_80089DFC TM3_DRAFT_U32(0x80089DFCu)
#define dword_80089DF8 TM3_DRAFT_U32(0x80089DF8u)
#define off_8007F50C TM3_DRAFT_U32(0x8007F50Cu)
#define dword_8007ED30 TM3_DRAFT_U32(0x8007ED30u)
#define dword_80089DAC TM3_DRAFT_U32(0x80089DACu)
#define off_8007EBC0 TM3_DRAFT_U32(0x8007EBC0u)
#define dword_80089EC0 TM3_DRAFT_U32(0x80089EC0u)
#define dword_80087BB8 TM3_DRAFT_U32(0x80087BB8u)

/* Unverified decompiler-derived draft */
uint32 sub_80031B90(uint32 a1, uint32 a2)
{
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int result; 

  v4 = sub_8005AFF4(a2);
  v5 = a2;
  v7 = v4;
  v6 = sub_8005AF24(v5);
  v8 = TM3_DRAFT_I16(a1);
  v9 = TM3_DRAFT_I16(a1 + (2) * 2u) * v7;
  TM3_DRAFT_I16(a1) = (v8 * v7 - TM3_DRAFT_I16(a1 + (2) * 2u) * v6 + 2048) >> 12;
  result = (v8 * v6 + v9 + 2048) >> 12;
  TM3_DRAFT_I16(a1 + (2) * 2u) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80033B38(uint32 a1)
{
  int result; 
  unsigned int v3; 
  int v4; 

  result = -2146893824;
  if ( TM3_DRAFT_U8(a1 + 3328) == 1 )
  {
    v3 = TM3_DRAFT_U32(4 * TM3_DRAFT_U32(a1 + 3928) - 2146915800);
    result = TM3_DRAFT_I16(a1 + 4360) < v3;
    if ( TM3_DRAFT_I16(a1 + 4360) < v3 )
    {
      result = TM3_DRAFT_U16(a1 + 4104) + 1;
      if ( TM3_DRAFT_I16(a1 + 4104) < TM3_DRAFT_I16(a1 + 4106) )
      {
        TM3_DRAFT_U16(a1 + 4104) = result;
      }
      else
      {
        sub_80033A10(a1, 15);
        v4 = TM3_DRAFT_U16(a1 + 4360);
        TM3_DRAFT_U16(a1 + 4104) = 0;
        result = v4 + 1;
        TM3_DRAFT_U16(a1 + 4360) = result;
      }
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80012388(uint32 a1, uint32 a2)
{
  unsigned int v2; 
  int v3; 
  int v4; 

  v2 = ((int)a1 >> 10) + 32;
  v3 = ((int)a2 >> 10) + 32;
  if ( v2 >= 0x40 )
    return 0;
  if ( v3 < 0 )
    return 0;
  if ( v3 >= 64 )
    return 0;
  v4 = TM3_DRAFT_U16(dword_80089C98 + 2 * v2 + (v3 << 7));
  if ( v4 == 0xFFFF )
    return 0;
  else
    return (TM3_DRAFT_I16(dword_80089C98 + 56 * v4 + 10300 + ((a2 >> 7) & 6)) & (unsigned int)(15 << ((a1 >> 6) & 0xC))) >> ((a1 >> 6) & 0xC);
}

/* Unverified decompiler-derived draft */
uint32 sub_80014AD4(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  const sint32 components[3] = {
    TM3_DRAFT_I32(a2), TM3_DRAFT_I32(a2 + 4u), TM3_DRAFT_I32(a2 + 8u)
  };
  const uint32 high_shift = 32u - a4;
  const uint32 low_shift = (a4 - 1u) & 31u;
  uint32 index;
  for (index = 0u; index < 3u; ++index) {
    const uint64 product = (uint64)((sint64)components[index] * (sint32)a3);
    const uint32 low = (uint32)product >> low_shift;
    const uint32 high = (uint32)(product >> 32u) << (high_shift & 31u);
    TM3_DRAFT_U16(a1 + index * 2u) = (uint16)(((low >> 1u) | high) + (low & 1u));
  }
  return high_shift;
}

/* Unverified decompiler-derived draft */
uint32 sub_80014B6C(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  const sint32 components[3] = {
    TM3_DRAFT_I16(a2), TM3_DRAFT_I16(a2 + 2u), TM3_DRAFT_I16(a2 + 4u)
  };
  const uint32 high_shift = 32u - a4;
  const uint32 low_shift = (a4 - 1u) & 31u;
  uint32 index;
  for (index = 0u; index < 3u; ++index) {
    const uint64 product = (uint64)((sint64)components[index] * (sint32)a3);
    const uint32 low = (uint32)product >> low_shift;
    const uint32 high = (uint32)(product >> 32u) << (high_shift & 31u);
    TM3_DRAFT_U32(a1 + index * 4u) = ((low >> 1u) | high) + (low & 1u);
  }
  return high_shift;
}

/* Unverified decompiler-derived draft */
uint32 sub_80029428(uint32 a1)
{
  int v2; 
  int result; 
  sint32 v4; 

  if ( !sub_800294B8((int)a1) )
    sub_8004A570((int)a1);
  sub_8004A294(18, 0, TM3_DRAFT_U32(a1 + (6) * 4u), (int)((a1 + (2) * 4u)), (int)((a1 + (4) * 4u)), 80, 80, 15);
  v2 = TM3_DRAFT_U32(a1 + (9) * 4u);
  result = v2 + 1;
  v4 = TM3_DRAFT_U32(a1 + (7) * 4u) >= v2;
  TM3_DRAFT_U32(a1 + (9) * 4u) = v2 + 1;
  if ( !v4 )
    return sub_8004A570((int)a1);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80065EB8(uint32 a1)
{
  sint32 v2; 
  char v3; 
  int result; 
  int v5; 

  v2 = 0;
  if ( TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 60)) >> 4 == 8 )
    v2 = TM3_DRAFT_U8(a1 + 55) == 0;
  v3 = tm3_draft_indirect(dword_80087DB4, 2u, a1, (uint32)v2);
  result = sub_80064DB0(a1, v3);
  v5 = result;
  if ( result != 90 && result )
  {
    result = -4;
    if ( v5 < 0 )
      return v5;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001A728(uint32 vehicle)
{
    uint32 count;
    FUNCTION_MARKER(0x8001A728u, "SCUS_942.49");
    if (TM3_DRAFT_U32(vehicle + 3320u) != 0x8001CA04u)
        return 0x8001CA04u;
    TM3_DRAFT_U16(vehicle + 3348u) = TM3_DRAFT_U16(vehicle + 1556u);
    TM3_DRAFT_U16(vehicle + 3350u) = TM3_DRAFT_U16(vehicle + 1564u);
    sub_8001A1C8(vehicle);
    count = TM3_DRAFT_U8(vehicle + 3394u);
    if (TM3_DRAFT_U8(vehicle + 3395u) + 1u < count)
        return sub_8001BD70(vehicle,
            (uint32)(sint32)TM3_DRAFT_I16(vehicle + 3716u + ((count - 1u) << 1)));
    return sub_8001C23C(vehicle);
}

/* Unverified decompiler-derived draft */
uint32 sub_8003E190(uint32 a1, uint32 a2, uint32 a3)
{
  int result; 

  if ( TM3_DRAFT_U8(dword_80089DE0 + 4) || TM3_DRAFT_U8(dword_80089DE0 + 5) || TM3_DRAFT_U8(dword_80089DE0 + 6) )
  {
    TM3_DRAFT_U8(a1) = TM3_DRAFT_U8(dword_80089DE0 + 4);
    TM3_DRAFT_U8(a2) = TM3_DRAFT_U8(dword_80089DE0 + 5);
    result = TM3_DRAFT_U8(dword_80089DE0 + 6);
    TM3_DRAFT_U8(a3) = result;
  }
  else
  {
    TM3_DRAFT_U8(a1) = 50;
    TM3_DRAFT_U8(a2) = 54;
    result = 55;
    TM3_DRAFT_U8(a3) = 55;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002062C(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, ...)
{
  int v16; 

  v16 = sub_80015684(2 * a3, 0x40000 / a6, 18);
  return sub_800205A4(a4 + 3 * a1 + v16, a2, a5);
}

/* Unverified decompiler-derived draft */
uint32 sub_80033E94(uint32 a1, uint32 a2)
{
  int result; 
  sint32 v5; 
  int v6; 
  int v7; 

  result = 1;
  if ( TM3_DRAFT_U8(a1 + 3328) == 1 )
  {
    v5 = sub_80048078(7) != 0;
    result = 16 * a2;
    if ( !v5 )
    {
      v6 = a1 + result;
      v7 = TM3_DRAFT_U16(v6 + 4120) - 1;
      TM3_DRAFT_U16(v6 + 4120) = v7;
      result = (sint32)((uint32)v7 << 16u);
      if ( TM3_DRAFT_U32(a1 + 3968) == a2 && !result )
        return sub_80033A80(a1, 1);
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004A874(uint32 a1)
{
  int v1; 
  unsigned int v2; 
  int v3; 
  int v5; 

  v1 = TM3_DRAFT_U16(a1 + 32);
  v2 = (TM3_DRAFT_U16(a1 + 28) << 16 >> 26) + 32;
  v3 = (v1 << 16 >> 26) + 32;
  if ( v2 >= 0x40 || v3 < 0 || v3 >= 64 )
    return 0;
  v5 = TM3_DRAFT_U16(dword_80089C98 + 2 * v2 + (v3 << 7));
  if ( v5 == 0xFFFF )
    return 0;
  else
    return dword_80089C98 + 56 * v5 + 10300;
}

/* Unverified decompiler-derived draft */
uint32 sub_800517F8(void)
{
  uint32 v0; 
  uint32 result; 

  if ( sub_80047480() )
  {
    v0 = TM3_DRAFT_U32(0x80089BE4u);
    v0 += 28u * (uint32)TM3_DRAFT_I8(v0 + 21u);
    result = 0x80080020u;
  }
  else
  {
    v0 = TM3_DRAFT_U32(0x80089BE4u);
    v0 += 28u * (uint32)TM3_DRAFT_I8(v0 + 21u);
    result = 0x80080070u;
  }
  TM3_DRAFT_I32(v0 + (7) * 4u) = (int)result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8005DA34(uint32 a1)
{
  return 75 * (60 * (10 * (TM3_DRAFT_U8(a1) >> 4) + (TM3_DRAFT_U8(a1) & 0xF)) + 10 * (TM3_DRAFT_U8(a1 + (1) * 1u) >> 4) + (TM3_DRAFT_U8(a1 + (1) * 1u) & 0xF))
       + 10 * (TM3_DRAFT_U8(a1 + (2) * 1u) >> 4)
       + (TM3_DRAFT_U8(a1 + (2) * 1u) & 0xF)
       - 150;
}

/* Unverified decompiler-derived draft */
uint32 sub_8005230C(void)
{
  int v0; 
  int v1; 
  int v2; 
  int v3; 

  if ( TM3_DRAFT_U32(0x800d295cu) == 1 )
    v0 = 4;
  else
    v0 = 2 - TM3_DRAFT_U32(0x800d28bcu);
  v1 = 0;
  v2 = -2146624256;
  while ( 1 )
  {
    v3 = v1 + 1;
    if ( TM3_DRAFT_U32(v2 + 20) )
      break;
    ++v1;
    v2 += 24;
    if ( v1 >= 4 )
    {
      v3 = v1 + 1;
      break;
    }
  }
  if ( v0 >= v3 )
  {
    v0 = 1;
    if ( v1 > 0 )
      return v1;
  }
  return v0;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004C6C0(uint32 a1)
{
  int v1; 
  uint32 v2; 
  int result; 
  int v4; 
  uint32 v5; 

  v1 = 0;
  v2 = 0x800804BCu;
  do
  {
    ++v1;
    if ( a1 == TM3_DRAFT_U32(v2) )
      return 1;
    v2 += 4u;
  }
  while ( v1 < 4 );
  v4 = 0;
  v5 = 0x80080270u;
  do
  {
    ++v4;
    if ( a1 == TM3_DRAFT_U32(v5) )
      return 2;
    v5 += 4u;
  }
  while ( v4 < 7 );
  result = 3;
  if ( a1 != 0x8008012Cu )
    return 0;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80012E48(void)
{
  int v0; 
  int v1; 
  int result; 
  uint32 v3; 
  unsigned int v4; 
  int vars0; 
  int vars4; 
  int vars8; 
  int _1C; 

  sub_80012B64();
  result = TM3_DRAFT_U32(dword_80089C98 + 10272);
  v3 = (uint32)dword_80089CB4;
  v4 = 0;
  if ( result )
  {
    do
    {
      ++v4;
      sub_8004A294(TM3_DRAFT_U8(v3), (int)v3);
      result = v4 < TM3_DRAFT_U32(dword_80089C98 + 10272);
      v3 += (TM3_DRAFT_U16(v3 +(5) * 2u)) * 1u;
    }
    while ( v4 < TM3_DRAFT_U32(dword_80089C98 + 10272) );
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800146A4(uint32 a1, uint32 a2)
{
  int v4; 
  int v5; 

  v4 = sub_80013D08(a1);
  if ( v4 )
    v5 = 0x40000000 / v4;
  else
    v5 = 0;
  sub_80014AD4(a2, a1, v5, 18);
  return v4;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002DE34(uint32 object)
{
    FUNCTION_MARKER(0x8002DE34u, "SCUS_942.49");
    uint32 owner = TM3_DRAFT_U32(object + 160u);
    if (sub_800470DC(owner) != 0u)
        TM3_DRAFT_U32(owner + 16u * TM3_DRAFT_U8(object + 327u) + 4128u) = 0u;
    uint32 callback = TM3_DRAFT_U32(TM3_DRAFT_U32(object + 156u) + 16u);
    if (callback != 0u)
        return tm3_draft_indirect(callback, 1u, object);
    return 0u;
}


/* Unverified decompiler-derived draft */
uint32 sub_80043584(void)
{
  int result; 

  result = (sint32)dword_80089858;
  if ( result < 0 )
  {
    sub_8005D4D0(8u, 0, 0);
    sub_8005D4BC(0);
    while ( 1 )
    {
      result = (sint32)sub_8005CFC4(0x800D2728u);
      dword_80089858 = result;
      if ( result >= 0 )
        break;
      sub_8005D214();
      sub_8005FA24(30);
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800293BC(uint32 a1, uint32 a2)
{
  uint32 v2; 
  int v3; 
  int v4; 

  v2 = (uint32)(a2 + 4);
  TM3_DRAFT_U32(a1 + (6) * 4u) = TM3_DRAFT_U32((v2 - (1) * 4u));
  TM3_DRAFT_U32(a1 + (7) * 4u) = TM3_DRAFT_U32(v2);
  v3 = TM3_DRAFT_U32(v2 + (1) * 4u);
  TM3_DRAFT_U32(a1 + (9) * 4u) = 0;
  v4 = 1 - ((1 - v3) & ((1 - v3) >> 31));
  TM3_DRAFT_U32(a1 + (8) * 4u) = ((30 - v4) & ((30 - v4) >> 31)) + v4;
  return sub_800294B8((int)a1);
}

/* Unverified decompiler-derived draft */
uint32 sub_80013420(uint32 a1, uint32 a2, uint32 a3)
{
  uint16 v4[4]; 
  uint16 v5[4]; 
  _DWORD v6[8]; 

  v4[1] = a2;
  v4[0] = a1;
  v4[2] = a3;
  v5[0] = a1;
  v5[2] = a3;
  v5[1] = 0x4000;
  if ( sub_80013484(TM3_DRAFT_LOCAL_ADDRESS(v4, sizeof(v4)), TM3_DRAFT_LOCAL_ADDRESS(v5, sizeof(v5)), 0, TM3_DRAFT_LOCAL_ADDRESS(v6, sizeof(v6))) )
    return (uint32)((sint32)TM3_DRAFT_U32(TM3_DRAFT_LOCAL_ADDRESS(v6, sizeof(v6)) + 4u) >> 12);
  else
    return 0x4000;
}

/* Unverified decompiler-derived draft */
uint32 sub_800143B0(uint32 angle, uint32 matrix)
{
    uint32 sign = (uint32)((sint32)angle >> 31);
    uint32 index = ((angle + sign) ^ sign) & 0xFFFu;
    uint32 packed = TM3_DRAFT_U32(0x80081E38u + 4u * index);
    uint32 cosine = packed >> 16;
    uint32 sine = ((uint32)(sint32)(sint16)packed + sign) ^ sign;
    FUNCTION_MARKER(0x800143B0u, "SCUS_942.49");
    TM3_DRAFT_U32(matrix) = ((0u - sine) << 16) | cosine;
    TM3_DRAFT_U32(matrix + 4u) = sine << 16;
    TM3_DRAFT_U32(matrix + 8u) = cosine;
    TM3_DRAFT_U32(matrix + 12u) = 0u;
    TM3_DRAFT_U16(matrix + 16u) = 4096u;
    return matrix;
}

/* Unverified decompiler-derived draft */
void sub_800474D0(void)
{
  TM3_DRAFT_U32(0x800d3470u) = 0;
  if ( dword_80089878 )
  {
    dword_80089878 = 0;
    sub_80056494(TM3_DRAFT_U32(0x800D345Cu));
    sub_80056494(TM3_DRAFT_U32(0x800D3458u));
    sub_80056424();
    sub_80062D50();
    sub_80056444();
  }
}

/* Unverified decompiler-derived draft */
uint32 sub_800264E8(uint32 a1, uint32 a2, uint32 a3)
{
  /* Original third argument supplies the node position */
  (void)a2;
  int v3; 
  int v4; 

  v3 = TM3_DRAFT_I16(a3 + (9) * 2u);
  v4 = TM3_DRAFT_I16(a3 + (10) * 2u);
  TM3_DRAFT_U32(0x1f8000b4u) = TM3_DRAFT_I16(a3 + (8) * 2u);
  TM3_DRAFT_U32(0x1f8000b8u) = v3;
  TM3_DRAFT_U32(0x1f8000bcu) = v4;
  sub_8001434C(TM3_DRAFT_U32(a1 + 4384), 528482464);
  sub_8005B614((uint32)0x1F800080, (uint32)0x1F8000A0, (uint32)0x1F8000A0);
  return 528482464;
}

/* Unverified decompiler-derived draft */
uint32 sub_800142E4(uint32 angle, uint32 matrix)
{
    uint32 sign = (uint32)((sint32)angle >> 31);
    uint32 index = ((angle + sign) ^ sign) & 0xFFFu;
    uint32 packed = TM3_DRAFT_U32(0x80081E38u + 4u * index);
    uint32 cosine = packed >> 16;
    uint32 sine = ((uint32)(sint32)(sint16)packed + sign) ^ sign;
    TM3_DRAFT_U32(matrix) = 4096u;
    TM3_DRAFT_U32(matrix + 4u) = 0;
    TM3_DRAFT_U32(matrix + 8u) = ((0u - sine) << 16) | cosine;
    TM3_DRAFT_U32(matrix + 12u) = sine << 16;
    TM3_DRAFT_U16(matrix + 16u) = (uint16)cosine;
    return matrix;
}

/* Unverified decompiler-derived draft */
uint32 sub_80040D40(uint32 a1, uint32 a2, uint32 a3)
{
  uint32 v3; 
  uint32 result; 
  int v5; 

  v3 = (uint32)(dword_80089898 + 48);
  if ( !dword_80089898 )
    return 0;
  while ( 1 )
  {
    if ( TM3_DRAFT_U32(v3 + (1) * 4u) == a1 && TM3_DRAFT_U32(v3) >= a2 )
    {
      result = v3;
      if ( a3 >= TM3_DRAFT_U32(v3) )
        break;
    }
    v5 = TM3_DRAFT_U32((v3 - (10) * 4u));
    v3 = (uint32)(v5 + 48);
    if ( !v5 )
      return 0;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004A514(uint32 a1)
{
  int v1; 
  sint32 v2; 
  int result; 

  v1 = a1 - 48;
  if ( sub_8004A4E4(a1 - 48, dword_80089894) )
    return 1;
  v2 = sub_8004A4E4(v1, dword_80089898) == 0;
  result = 0;
  if ( !v2 )
    return 1;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80018AB4(uint32 a1)
{
  int v2; 
  int result; 
  int v4; 
  int vars0; 
  int vars4; 

  v2 = TM3_DRAFT_U32(a1 + (1100) * 4u);
  result = 60;
  TM3_DRAFT_U32(a1 + (1098) * 4u) = 60;
  TM3_DRAFT_U32(a1 + (1099) * 4u) = 0;
  if ( !v2 )
  {
    result = (int)sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + (1010) * 4u) + 55), 5, (int)a1, 1536);
    TM3_DRAFT_U32(a1 + (1100) * 4u) = result;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800330F8(uint32 a1)
{
  int v2; 

  return sub_8004A294(25, a1, (unsigned int)(30 * TM3_DRAFT_U32(0x80089D24u + (8) * 4u) + 2048) >> 12, 0, TM3_DRAFT_U32(0x80089D24u + (26) * 4u), TM3_DRAFT_U32(0x80089D24u + (7) * 4u), TM3_DRAFT_U32(0x80089D24u + (15) * 4u));
}

/* Unverified decompiler-derived draft */
uint32 sub_80052874(void)
{
    FUNCTION_MARKER(0x80052874u, "SCUS_942.49");
    uint32 players = TM3_DRAFT_U32(0x800D28B8u) + TM3_DRAFT_U32(0x800D28BCu);
    if ((sint32)players < 2)
        return 1u;
    return sub_80048078(5u) != 0u;
}


/* Unverified decompiler-derived draft */
uint32 sub_8004AA74(void)
{
  int v1; 

  TM3_DRAFT_U32(0x80089E38u + (2) * 4u) = (int)&v1;
  sub_8004A734();
  sub_8004A5A0();
  sub_8004A9B0((uint32)dword_80089894);
  sub_8004A9B0((uint32)dword_80089898);
  return TM3_DRAFT_U32(0x80089E38u + (2) * 4u);
}

/* Unverified decompiler-derived draft */
void sub_80028B0C(uint32 a1)
{
  int v2; 
  int v3; 

  v2 = TM3_DRAFT_I32(a1);
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
  TM3_DRAFT_I32(a1) = 0;
}

/* Unverified decompiler-derived draft */
void sub_80013EC8(uint32 a1, uint32 a2, uint32 a3)
{
  uint32 ida_T0, ida_T1, ida_T2, ida_T3, ida_T4, ida_T5; /* TODO Explicit adapter values */
  ida_T0 = TM3_DRAFT_I16(a1);
  ida_T1 = TM3_DRAFT_I16(a1 + (1) * 2u);
  ida_T2 = TM3_DRAFT_I16(a1 + (2) * 2u);
  ida_T3 = TM3_DRAFT_I16(a2);
  ida_T4 = TM3_DRAFT_I16(a2 + (1) * 2u);
  ida_T5 = TM3_DRAFT_I16(a2 + (2) * 2u);
  /* TODO GTE adapters */
  tm3_draft_gte_write_control(0u, ida_T0);
  tm3_draft_gte_write_control(2u, ida_T1);
  tm3_draft_gte_write_control(4u, ida_T2);
  tm3_draft_gte_write_data(9u, ida_T3);
  tm3_draft_gte_write_data(10u, ida_T4);
  tm3_draft_gte_write_data(11u, ida_T5);
  tm3_draft_gte_command(0x178000Cu);
  ida_T0 = tm3_draft_gte_read_data(25u);
  ida_T1 = tm3_draft_gte_read_data(26u);
  ida_T2 = tm3_draft_gte_read_data(27u);
  TM3_DRAFT_U16(a3) = ida_T0;
  TM3_DRAFT_U16(a3 + (1) * 2u) = ida_T1;
  TM3_DRAFT_U16(a3 + (2) * 2u) = ida_T2;
}

/* Unverified decompiler-derived draft */
uint32 sub_8005553C(uint32 a1)
{
  int v1; 

  if ( (TM3_DRAFT_U32(0x80089EA0u + (5) * 4u) & (0x80000000 >> a1)) == 0 )
    return -1;
  v1 = a1 << 7;
  if ( TM3_DRAFT_U8(v1 - 2146614128) >> 4 == 5 )
    return v1 - 2146614118;
  else
    return 0;
}

/* Unverified decompiler-derived draft */
uint32 sub_80041B8C(void)
{
  int v0; 
  int v1; 
  int result; 

  v0 = 3;
  v1 = -2146621888;
  do
  {
    TM3_DRAFT_U32(v1) = 0;
    --v0;
    v1 -= 200;
  }
  while ( v0 >= 0 );
  result = 1;
  if ( TM3_DRAFT_U32(0x800d2e88u) < 2 )
  {
    result = 3;
    if ( TM3_DRAFT_U32(0x800d2e88u) < 0 )
      result = 1;
  }
  dword_80089DFC = result;
  dword_80089DF8 = 0;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800154EC(uint32 a1, uint32 a2, uint32 a3)
{
  int v4; 
  uint32 v6; 
  int v7; 

  v4 = sub_80013A90(a1, a2);
  v6 = a2;
  v7 = v4;
  sub_80014B6C(a3, v6, v4, 12);
  return v7;
}

/* Unverified decompiler-derived draft */
uint32 sub_80033CFC(uint32 a1)
{
  sint32 v1; 
  int result; 

  if ( !TM3_DRAFT_U32(a1 + 16 * TM3_DRAFT_U32(a1 + 3968) + 4128) )
    return 0;
  v1 = sub_80033CB4(a1);
  result = 1;
  if ( !v1 )
    return 0;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003E728(uint32 a1, uint32 a2)
{
  int v2; 
  int result; 

  v2 = TM3_DRAFT_U8(24 * a1 - 2146624256 + 14);
  result = 28 * (4 * (v2 << 24 >> 28) + (v2 & 0xF)) - 2146624480;
  TM3_DRAFT_U8(result + 2) = a2;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80034844(uint32 a1, uint32 a2, uint32 a3)
{
  int i; 
  int v4; 

  for ( i = 0; i < 16; ++i )
  {
    v4 = TM3_DRAFT_U32(a1 + 40);
    if ( v4 && TM3_DRAFT_U32(v4 + 68) == a2 )
    {
      TM3_DRAFT_I32(a3) = i;
      return TM3_DRAFT_U32(a1 + 40);
    }
    a1 += 4;
  }
  return 0;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004A248(uint32 a1, uint32 a2)
{
  unsigned int v2; 

  v2 = a1;
  if ( a2 < a1 )
  {
    a1 = a2;
    a2 = v2;
  }
  return TM3_DRAFT_U32(0x8007F50Cu + 4u * (((int)(a2 * (a2 + 1)) / 2) + a1));
}

/* Unverified decompiler-derived draft */
uint32 sub_80014080(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  uint32 x = (uint32)TM3_DRAFT_I16(a3);
  uint32 y = (uint32)TM3_DRAFT_I16(a3 + 2);
  uint32 z = (uint32)TM3_DRAFT_I16(a3 + 4);
  tm3_draft_gte_write_data(8, a2);
  tm3_draft_gte_write_data(25, TM3_DRAFT_U32(a4));
  tm3_draft_gte_write_data(26, TM3_DRAFT_U32(a4 + 4));
  tm3_draft_gte_write_data(27, TM3_DRAFT_U32(a4 + 8));
  tm3_draft_gte_write_data(9, x);
  tm3_draft_gte_write_data(10, y);
  tm3_draft_gte_write_data(11, z);
  tm3_draft_gte_command(0x1A8003Eu);
  TM3_DRAFT_U32(a1) = tm3_draft_gte_read_data(25);
  TM3_DRAFT_U32(a1 + 4) = tm3_draft_gte_read_data(26);
  TM3_DRAFT_U32(a1 + 8) = tm3_draft_gte_read_data(27);
  return a1;
}

/* Unverified decompiler-derived draft */
uint32 sub_800481A8(void)
{
  sint16 v1[4]; 

  v1[0] = 320;
  v1[2] = 320;
  v1[1] = 0;
  v1[3] = 240;
  return sub_80057ABC((int)v1, 0, 0);
}

/* Unverified decompiler-derived draft */
uint32 sub_8004B16C(uint32 a1, uint32 a2)
{
  if ( TM3_DRAFT_U32(a2 + 36) != a1 && !TM3_DRAFT_U16(a2 + 32) )
    sub_8004A570(a2);
  return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_80033A10(uint32 a1, uint32 a2)
{
  int v2; 
  int i; 
  int result; 

  v2 = 0;
  for ( i = a1; ; i += 16 )
  {
    result = TM3_DRAFT_I16(i + 4120);
    ++v2;
    if ( TM3_DRAFT_U16(i + 4120) )
      break;
    if ( v2 >= 16 )
    {
      result = a1 + 16 * a2;
      TM3_DRAFT_U32(a1 + 3968) = a2;
      TM3_DRAFT_U16(result + 4126) = 0;
      return result;
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800528CC(void)
{
    uint32 result = sub_8004EB10(TM3_DRAFT_U32(0x800D2968u), 0u, 1u, 1u);
    TM3_DRAFT_U32(0x800D2968u) = result;
    return result;
}


/* Unverified decompiler-derived draft */
uint32 sub_80040508(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  return sub_800404CC(a1, a2, TM3_DRAFT_I16(16 * a1 - 2146623512 + 4), a3, a4);
}

/* Unverified decompiler-derived draft */
uint32 sub_80013FB4(uint32 a1, uint32 a2, uint32 a3)
{
  uint32 x = (uint32)TM3_DRAFT_I16(a3);
  uint32 y = (uint32)TM3_DRAFT_I16(a3 + 2);
  uint32 z = (uint32)TM3_DRAFT_I16(a3 + 4);
  tm3_draft_gte_write_data(8, a2);
  tm3_draft_gte_write_data(9, x);
  tm3_draft_gte_write_data(10, y);
  tm3_draft_gte_write_data(11, z);
  tm3_draft_gte_command(0x198003Du);
  TM3_DRAFT_U32(a1) = tm3_draft_gte_read_data(25);
  TM3_DRAFT_U32(a1 + 4) = tm3_draft_gte_read_data(26);
  TM3_DRAFT_U32(a1 + 8) = tm3_draft_gte_read_data(27);
  return a1;
}

/* Unverified decompiler-derived draft */
uint32 sub_800408A4(uint32 a1)
{
  return sub_80062474(0x3FFF * a1 / 16, 0x3FFF * a1 / 16);
}

/* Unverified decompiler-derived draft */
uint32 sub_80013E5C(uint32 a1, uint32 a2)
{
  uint32 x = TM3_DRAFT_U32(a2);
  uint32 y = TM3_DRAFT_U32(a2 + 4);
  tm3_draft_gte_write_data(0, TM3_DRAFT_U32(a1));
  tm3_draft_gte_write_data(1, TM3_DRAFT_U32(a1 + 4));
  tm3_draft_gte_write_control(2, 0);
  tm3_draft_gte_write_control(3, 0);
  tm3_draft_gte_write_control(4, 0);
  tm3_draft_gte_write_control(0, x);
  tm3_draft_gte_write_control(1, y);
  tm3_draft_gte_command(0x486012u);
  return tm3_draft_gte_read_data(25);
}

/* Unverified decompiler-derived draft */
uint32 sub_80034388(uint32 a1)
{
  int result; 

  sub_80033F18(a1);
  result = TM3_DRAFT_U32(a1 + 92) + 1;
  TM3_DRAFT_U32(a1 + 92) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004179C(uint32 a1, uint32 a2, ...)
{
  va_list arguments;
  uint32 result;
  va_start(arguments, a2);
  result = sub_800416A0(a1, a2, TM3_DRAFT_LOCAL_ADDRESS(arguments, sizeof(uint32)));
  va_end(arguments);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004A570(uint32 a1)
{
  sint32 v2; 
  int result; 

  v2 = sub_8004A514(a1) == 0;
  result = 1;
  if ( !v2 )
    TM3_DRAFT_U32(a1 - 28) = 1;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001B970(uint32 a1)
{
  int result; 

  result = TM3_DRAFT_I16(a1 + 3418);
  if ( result >= 0 )
  {
    if ( !TM3_DRAFT_U16(a1 + 3418) )
      TM3_DRAFT_U16(a1 + 3406) = 4;
    result = TM3_DRAFT_U16(a1 + 3418) - 1;
    TM3_DRAFT_U16(a1 + 3418) = result;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80056844(uint32 string)
{
    FUNCTION_MARKER(0x80056844u, "SCUS_942.49");
    uint32 length = 0u;
    if (string == 0u) return 0u;
    for (;;) {
        sint8 character = TM3_DRAFT_I8(string);
        ++string;
        if (character == 0) return length;
        ++length;
    }
}

/* Unverified decompiler-derived draft */
uint32 sub_80013D64(uint32 a1)
{
  uint32 sum;
  tm3_draft_gte_write_data(9u, TM3_DRAFT_U32(a1));
  tm3_draft_gte_write_data(10u, TM3_DRAFT_U32(a1 + 4u));
  tm3_draft_gte_write_data(11u, TM3_DRAFT_U32(a1 + 8u));
  tm3_draft_gte_command(0xA00428u);
  sum = tm3_draft_gte_read_data(25u);
  sum += tm3_draft_gte_read_data(26u);
  sum += tm3_draft_gte_read_data(27u);
  return sub_8005B124(sum);
}

/* Unverified decompiler-derived draft */
uint32 sub_80013E98(uint32 a1)
{
  uint32 sum;
  tm3_draft_gte_write_data(9u, TM3_DRAFT_U32(a1));
  tm3_draft_gte_write_data(10u, TM3_DRAFT_U32(a1 + 4u));
  tm3_draft_gte_write_data(11u, TM3_DRAFT_U32(a1 + 8u));
  tm3_draft_gte_command(0xA00428u);
  sum = tm3_draft_gte_read_data(25u);
  sum += tm3_draft_gte_read_data(26u);
  sum += tm3_draft_gte_read_data(27u);
  return sum;
}

/* Unverified decompiler-derived draft */
uint32 sub_800321CC(uint32 object)
{
    uint32 result;
    FUNCTION_MARKER(0x800321CCu, "SCUS_942.49");
    result = sub_8002EAE0(object);
    TM3_DRAFT_U32(object + 80u) = 0u;
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80049EE8(void)
{
  sub_80049F50(0x8007ED30u);
  return dword_8007ED30;
}

/* Unverified decompiler-derived draft */
uint32 sub_80049F24(uint32 a1)
{
  TM3_DRAFT_U32(0x80089E38u + (0) * 4u) = a1;
  return sub_80049F50(0x80089E38u);
}

/* Unverified decompiler-derived draft */
uint32 sub_8003A048(void)
{
  return sub_800408A4(TM3_DRAFT_U32(0x800d2eecu));
}

/* Unverified decompiler-derived draft */
uint32 sub_8003DCA8(uint32 a1)
{
  int v1; 

  v1 = 0;
  if ( a1 >= TM3_DRAFT_U32(0x80089DACu + (3) * 4u) )
    return a1 < TM3_DRAFT_U32(0x80089DACu + (3) * 4u) + 2;
  return v1;
}

/* Unverified decompiler-derived draft */
uint32 sub_800133FC(uint32 a1, uint32 a2)
{
  return sub_80013420(a1, -16384, a2);
}

/* Unverified decompiler-derived draft */
uint32 sub_80015298(uint32 a1)
{
  return sub_800150FC(a1, 2, 0);
}

/* Unverified decompiler-derived draft */
uint32 sub_80054314(void)
{
  return sub_80054284(0);
}

/* Unverified decompiler-derived draft */
uint32 sub_800311F0(uint32 a1)
{
  return sub_80031210(a1, 0);
}

/* Unverified decompiler-derived draft */
uint32 sub_8005D8AC(uint32 a1, uint32 a2)
{
  return sub_8005EF44(a1, a2) == 0;
}

/* Unverified decompiler-derived draft */
uint32 sub_800438D4(void)
{
  return sub_80043858(9);
}

/* Unverified decompiler-derived draft */
uint32 sub_80030E80(uint32 a1, uint32 a2)
{
  return sub_80030CD8(a1, a2);
}

void sub_80056424(void)
{
  /* Gate native interrupts like the original SR IE/IP2 clear */
  (void)xport_bios_enter_critical();
}

/* Unverified decompiler-derived draft */
uint32 sub_80048078(uint32 a1)
{
  return TM3_DRAFT_U32(0x8007EBC0u + 4u * (2 * a1 + 1));
}

/* Unverified decompiler-derived draft */
uint32 sub_800403C0(uint32 a1)
{
  return TM3_DRAFT_U32(16 * a1 - 2146623512 + 12);
}

/* Unverified decompiler-derived draft */
void sub_8005BE14(uint32 a1, uint32 a2)
{
  uint32 ida_A0, ida_A1; /* TODO Explicit adapter values */
  ida_A0 = a1 << 16;
  ida_A1 = a2 << 16;
  /* TODO GTE adapters */
  tm3_draft_gte_write_control(24u, ida_A0);
  tm3_draft_gte_write_control(25u, ida_A1);
}

/* Unverified decompiler-derived draft */
uint32 sub_80038AE8(uint32 a1, uint32 a2)
{
  int v2; 
  int result; 

  v2 = TM3_DRAFT_U32(a1 + 12);
  TM3_DRAFT_U16(a1 + 42) = a2;
  result = v2 | 8;
  TM3_DRAFT_U32(a1 + 12) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8005AE94(uint32 a1)
{
  int result; 

  TM3_DRAFT_U8(a1 + 3) = 4;
  result = 100;
  TM3_DRAFT_U8(a1 + 7) = 100;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8005AED4(uint32 a1)
{
  int result; 

  TM3_DRAFT_U8(a1 + 3) = 4;
  result = 80;
  TM3_DRAFT_U8(a1 + 7) = 80;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800474BC(uint32 a1)
{
  int result; 

  result = TM3_DRAFT_U32(0x800d3470u);
  TM3_DRAFT_U32(0x800d3470u) = a1;
  return result;
}

/* Unverified decompiler-derived draft */
void sub_8001C9EC(uint32 a1)
{
  TM3_DRAFT_U32(a1 + 3948) = 0;
  TM3_DRAFT_U16(a1 + 3338) = 0;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001C9F8(uint32 a1)
{
  int result; 

  result = 2;
  TM3_DRAFT_U32(a1 + 3948) = 2;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800551A0(void)
{
  return TM3_DRAFT_U32(0x80089EC0u + (2) * 4u);
}

/* Unverified decompiler-derived draft */
uint32 sub_800607A8(void)
{
  return dword_80087BB8;
}

/* Unverified decompiler-derived draft */
void sub_8005BE34(uint32 a1)
{
  gte_write_h((uint16)a1);
}

/* Unverified decompiler-derived draft */
void sub_800294B0(void)
{
  ;
}

/* Unverified decompiler-derived draft */
void sub_800267E8(void)
{
  ;
}

uint32 sub_800529A0(void)
{
    uint32 result = sub_8004EB10(TM3_DRAFT_U32(0x800D2964u), 0u, 1u, 1u);
    TM3_DRAFT_U32(0x800D2964u) = result;
    return result;
}
