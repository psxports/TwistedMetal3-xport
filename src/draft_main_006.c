#include "game_draft_signatures.h"

/* Unverified drafts, pending guest buffers and original ABI integration */
extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

extern uint32 tm3_draft_local_address(const void *pointer, uint32 bytes);
#define TM3_DRAFT_LOCAL_ADDRESS(pointer, bytes) tm3_draft_local_address((pointer), (bytes))
#define dword_80089CBC TM3_DRAFT_U32(0x80089CBCu)
#define off_80089BE4 TM3_DRAFT_U32(0x80089BE4u)
#define dword_80089BE8 TM3_DRAFT_U32(0x80089BE8u)
#define dword_8007FF28 TM3_DRAFT_U32(0x8007FF28u)
#define off_800804BC TM3_DRAFT_U32(0x800804BCu)
#define off_800806B0 TM3_DRAFT_U32(0x800806B0u)
#define dword_80089E38 TM3_DRAFT_U32(0x80089E38u)
#define dword_800806CC TM3_DRAFT_U32(0x800806CCu)
#define dword_800806BC TM3_DRAFT_U32(0x800806BCu)
#define dword_80089D14 TM3_DRAFT_U32(0x80089D14u)
#define off_800898A0 TM3_DRAFT_U32(0x800898A0u)

/* Unverified decompiler-derived draft */
uint32 sub_800451B0(void)
{
    FUNCTION_MARKER(0x800451B0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v0; 
  int result; 
  int v2; 
  int v3; 
  int v4; 
  sint16 vars0; 
  sint16 vars4; 
  sint16 vars8; 
  sint16 _2C; 

  v0 = TM3_DRAFT_U8(dword_80089CBC + 298) + TM3_DRAFT_U32(0x800d2e90u) + TM3_DRAFT_U32(0x800d2f38u) - TM3_DRAFT_U32(0x800d2e98u);
  result = v0 & (v0 >> 31);
  v2 = result + TM3_DRAFT_U32(0x800d2e98u);
  v3 = 0;
  if ( result + TM3_DRAFT_U32(0x800d2e98u) > 0 )
  {
    v4 = 0;
    do
    {
      sub_800443DC(v4, 0, 0, 0, 0, 0, 0, 0);
      result = ++v3 < v2;
      v4 = v3;
    }
    while ( v3 < v2 );
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80054284(uint32 a1)
{
    FUNCTION_MARKER(0x80054284u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v1; 
  int v2; 
  uint32 v3; 
  int v4; 
  int v5; 
  uint32 result; 

  v1 = off_80089BE4;
  TM3_DRAFT_U32(0x80089BE8u + (1) * 4u) = a1;
  v2 = 0;
  if ( TM3_DRAFT_U8(0x8007FF28u + (_DWORD)off_80089BE4 + 2146959596) )
  {
    v3 = (0x800804BCu + (a1) * 4u);
    v4 = 0;
    do
    {
      v5 = TM3_DRAFT_I32(v1 + (v4 + 7) * 4u);
      if ( v5 && v5 != -2146617632 )
        TM3_DRAFT_U32(v5 + 12) = TM3_DRAFT_I8(v3);
      v1 = off_80089BE4;
      ++v2;
      v4 += 7;
    }
    while ( v2 < TM3_DRAFT_U8(0x8007FF28u + (_DWORD)off_80089BE4 + 2146959596) );
  }
  result = 0x800806B0u;
  TM3_DRAFT_U32(0x80089E38u + (4) * 4u) = 0;
  dword_800806CC = dword_800806BC;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80014C04(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80014C04u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint64 v4; 
  int result; 
  char v6; 
  int v7; 
  int v8; 

  v4 = TM3_DRAFT_I32(a2) * (uint64)a3;
  result = 32 - a4;
  v6 = a4 - 1;
  v7 = TM3_DRAFT_I32(a2 + (1) * 4u);
  v8 = TM3_DRAFT_I32(a2 + (2) * 4u);
  TM3_DRAFT_U32(a1) = (((unsigned int)v4 >> v6 >> 1) | (HIDWORD(v4) << result)) + (((unsigned int)v4 >> v6) & 1);
  TM3_DRAFT_U32(a1 + (1) * 4u) = (((unsigned int)(v7 * a3) >> v6 >> 1) | ((uint64)(v7 * (uint64)a3) >> 32 << result))
        + (((unsigned int)(v7 * a3) >> v6) & 1);
  TM3_DRAFT_U32(a1 + (2) * 4u) = (((unsigned int)(v8 * a3) >> v6 >> 1) | ((uint64)(v8 * (uint64)a3) >> 32 << result))
        + (((unsigned int)(v8 * a3) >> v6) & 1);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80030A74(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80030A74u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v3; 
  uint8 v4; 
  int result; 

  sub_8002EE68(a1, a2);
  sub_80028B60((uint32)(a1 + 8), TM3_DRAFT_I16(dword_80089D14 + 74));
  if ( TM3_DRAFT_U8(a1 + 328) >= 2u )
  {
    v3 = TM3_DRAFT_U32(a1 + 340);
    v4 = TM3_DRAFT_U8(a1 + 329) + 1;
    TM3_DRAFT_U8(a1 + 329) = v4;
    if ( v4 >= TM3_DRAFT_I16(v3) )
      TM3_DRAFT_U8(a1 + 329) = 0;
    TM3_DRAFT_U8(a1 + 328) = 0;
  }
  result = TM3_DRAFT_U8(a1 + 328) + 1;
  TM3_DRAFT_U8(a1 + 328) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001560C(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8001560Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint16 v5; 
  sint16 v6; 
  int result; 
  sint16 v8[4]; 

  sub_80015538(a1, a2, TM3_DRAFT_LOCAL_ADDRESS(v8, 6u));
  v5 = TM3_DRAFT_I16(a1 + (2) * 2u);
  result = v8[2];
  v6 = TM3_DRAFT_I16(a1 + (1) * 2u) - v8[1];
  TM3_DRAFT_U16(a3) = TM3_DRAFT_I16(a1) - v8[0];
  TM3_DRAFT_U16(a3 + (1) * 2u) = v6;
  result = (sint16)result;
  TM3_DRAFT_U16(a3 + (2) * 2u) = v5 - result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800302CC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800302CCu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v2; 
  int v3; 
  int v4; 
  int v5; 

  v2 = (uint32)(a2 + 4);
  TM3_DRAFT_U32(a1 + (14) * 4u) = TM3_DRAFT_U32(v2 - (1) * 4u);
  TM3_DRAFT_U32(a1 + (15) * 4u) = TM3_DRAFT_U32(v2);
  v3 = TM3_DRAFT_U32(v2 + (1) * 4u);
  v4 = dword_80089D14;
  TM3_DRAFT_U32(a1 + (17) * 4u) = 0;
  TM3_DRAFT_U32(a1 + (18) * 4u) = 0;
  TM3_DRAFT_U32(a1 + (19) * 4u) = v4 + 280;
  v5 = 1 - ((1 - v3) & ((1 - v3) >> 31));
  TM3_DRAFT_U32(a1 + (16) * 4u) = ((30 - v5) & ((30 - v5) >> 31)) + v5;
  return sub_80030410((int)a1);
}

/* Unverified decompiler-derived draft */
uint32 sub_800529DC(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800529DCu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint32 v4; 
  int vars0; 
  int vars4; 
  int vars8; 
  char _2C; 

  v4 = sub_80052978();
  return sub_8004E9B8(a1, a3, (int)0x800529DCu, 2, (int)off_800898A0, TM3_DRAFT_U32(0x800d2964u), 3, !v4);
}

/* Unverified decompiler-derived draft */
uint32 sub_80015538(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80015538u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v5; 
  int v6; 
  int v7; 
  uint32 v8; 
  int v9; 
  int v11[4]; 

  v5 = TM3_DRAFT_I16(a1 + (1) * 2u);
  v6 = TM3_DRAFT_I16(a1 + (2) * 2u);
  v11[0] = TM3_DRAFT_I16(a1);
  v11[1] = v5;
  v11[2] = v6;
  v7 = sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS(v11, 12u), a2);
  v8 = a2;
  v9 = v7;
  sub_80014A3C(a3, v8, v7, 12);
  return v9;
}

/* Unverified decompiler-derived draft */
uint32 sub_800155A4(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800155A4u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v5; 
  int v6; 
  int v7; 
  int result; 
  int v9[4]; 

  sub_800154EC(a1, a2, TM3_DRAFT_LOCAL_ADDRESS(v9, 12u));
  v5 = TM3_DRAFT_I32(a1 + (1) * 4u);
  v6 = TM3_DRAFT_I32(a1 + (2) * 4u);
  v7 = v9[1];
  result = v9[2];
  TM3_DRAFT_U32(a3) = TM3_DRAFT_U32(a1) - (uint32)v9[0];
  TM3_DRAFT_U32(a3 + (1) * 4u) = (uint32)v5 - (uint32)v7;
  TM3_DRAFT_U32(a3 + (2) * 4u) = (uint32)v6 - (uint32)result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80025F98(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80025F98u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v3; 
  int v4; 
  int v5; 
  int i; 
  uint32 v7; 

  v3 = 4 * a2;
  v4 = 0;
  if ( TM3_DRAFT_I32(TM3_DRAFT_U32(a1 + v3)) <= 0 )
    return 0;
  v5 = 9;
  for ( i = 0; ; i += 6 )
  {
    v7 = TM3_DRAFT_U32(a1 + v3);
    ++v4;
    if ( SHIBYTE(TM3_DRAFT_U32(v7 + (i + 14) * 4u)) == a3 )
      break;
    v5 += 6;
    if ( v4 >= TM3_DRAFT_U32(v7) )
      return 0;
  }
  return &TM3_DRAFT_U32(v7 + (v5) * 4u);
}

/* Unverified decompiler-derived draft */
uint32 sub_80026B24(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80026B24u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  int v3; 
  int v4; 
  int v5; 
  uint32 v6; 
  sint32 v7; 
  int result; 

  v3 = 0;
  v4 = -2146917400;
  while ( 1 )
  {
    ++v3;
    if ( TM3_DRAFT_U32(v4) == a1 )
      break;
    v4 += 8;
    if ( v3 >= 16 )
    {
      v5 = 4 * a2;
      goto LABEL_5;
    }
  }
  v2 = TM3_DRAFT_U32(v4 + 4);
  v5 = 4 * a2;
LABEL_5:
  v6 = (uint32)(v5 + v2);
  v7 = TM3_DRAFT_U32(v6) == TM3_DRAFT_U32(v6 + (1) * 4u);
  result = TM3_DRAFT_U32(v6) + v2;
  if ( v7 )
    return 0;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80013BA0(uint32 a1)
{
    FUNCTION_MARKER(0x80013BA0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 ida_A0, ida_T3; /* TODO Explicit adapter values */
  int result; 
  int v2; 
  int v4; 
  unsigned int v5; 
  int v6; 
  int v7; 

  /* TODO GTE adapters */
  tm3_draft_gte_write_data(30u, a1);
  result = 0;
  v2 = 0;
  /* TODO GTE adapters */
  ida_T3 = tm3_draft_gte_read_data(31u);
  ida_T3 >>= 1;
  v4 = 22 - ida_T3;
  v5 = a1 << (2 * ida_T3);
  do
  {
    v6 = v2 | (v5 >> 30);
    v5 *= 4;
    result *= 2;
    v7 = 2 * result + 1;
    --v4;
    if ( v6 >= v7 )
    {
      v6 -= v7;
      ++result;
    }
    v2 = 4 * v6;
  }
  while ( v4 );
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80032E4C(uint32 a1)
{
    FUNCTION_MARKER(0x80032E4Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v3; 
  int v4; 
  int v5; 
  int vars0; 
  int vars0a; 
  int vars4; 
  int vars4a; 

  sub_8004A294(19, a1, 30, 15);
  return sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 55), 5, a1, 1300);
}

/* Unverified decompiler-derived draft */
uint32 sub_8003EFA0(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8003EFA0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v3; 
  int v4; 
  int v5; 
  int v7[4]; 

  v3 = TM3_DRAFT_U32(a3 + (1) * 4u);
  v4 = TM3_DRAFT_U32(a2 + (1) * 4u);
  v5 = TM3_DRAFT_U32(a3 + (2) * 4u) - TM3_DRAFT_U32(a2 + (2) * 4u);
  v7[0] = TM3_DRAFT_U32(a3) - TM3_DRAFT_U32(a2);
  v7[2] = v5;
  v7[1] = v3 - v4;
  return sub_8003EF08(a1, a2, (int)v7);
}

/* Unverified decompiler-derived draft */
uint32 sub_80015724(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80015724u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  unsigned int v2; 
  unsigned int v3; 

  v2 = abs32(a1);
  v3 = abs32(a2);
  return v2 + v3 - (int)(((v2 - v3) & ((int)(v2 - v3) >> 31)) + v3) / 2;
}

/* Unverified decompiler-derived draft */
uint32 sub_80013F78(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80013F78u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 ida_A1, ida_T0, ida_T1, ida_T2; /* TODO Explicit adapter values */
  ida_T0 = TM3_DRAFT_I16(a3);
  ida_T1 = TM3_DRAFT_I16(a3 + (1) * 2u);
  ida_T2 = TM3_DRAFT_I16(a3 + (2) * 2u);
  /* TODO GTE adapters */
  tm3_draft_gte_write_data(8u, a2);
  tm3_draft_gte_write_data(9u, ida_T0);
  tm3_draft_gte_write_data(10u, ida_T1);
  tm3_draft_gte_write_data(11u, ida_T2);
  tm3_draft_gte_command(0x190003Du);
  tm3_draft_unimplemented("TODO swc2    $25, 0($a0)");
  tm3_draft_unimplemented("TODO swc2    $26, 4($a0)");
  tm3_draft_unimplemented("TODO swc2    $27, 8($a0)");
  return a1;
}

/* Unverified decompiler-derived draft */
uint32 sub_80014EA8(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80014EA8u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v5[4]; 

  sub_80014CC4(a1, a2, v5);
  return sub_80014D6C(v5, a3);
}

/* Unverified decompiler-derived draft */
uint32 sub_80026F64(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9, uint32 a10, uint32 a11, uint32 a12)
{
    FUNCTION_MARKER(0x80026F64u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  a6 = a2;
  a7 = a3;
  a8 = a4;
  return sub_80026E28(a1, &a6);
}

/* Unverified decompiler-derived draft */
uint32 sub_800496E0(uint32 a1, uint32 a2, uint32 a3, ...)
{
    va_list arguments;
    uint32 result;
    uint32 payload;
    FUNCTION_MARKER(0x800496E0u, "SCUS_942.49");
    va_start(arguments, a3);
    /* Original format payload starts with a3 in the native x86 argument area */
    payload = TM3_DRAFT_LOCAL_ADDRESS((const uint8 *)arguments - sizeof(a3), sizeof(a3));
    result = sub_80049710(a1, a2, payload);
    va_end(arguments);
    return result;
}
