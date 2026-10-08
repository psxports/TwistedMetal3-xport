#include "game_draft_support.h"
#include "game_draft_signatures.h"

/* Unverified draft; TODO items require later review */
uint32 sub_8001C23C(uint32 a1)
{
    FUNCTION_MARKER(0x8001C23Cu, "SCUS_942.49");
  int v1; 
  int v2; 
  int v3; 
  char v4; 

  v1 = a1;
  if ( TM3_DRAFT_U8(a1 + 3328) == 2 && (v2 = sub_8001A7EC(), v3 = v2, a1 = v1, v2) )
  {
    if ( sub_8001BD70(v1, TM3_DRAFT_I16(v2 + 3386)) )
    {
      sub_8001A8C4(v1, v3, 0);
      v4 = 3;
LABEL_7:
      TM3_DRAFT_U8(v1 + 3329) = v4;
      return 1;
    }
  }
  else if ( sub_8001BF10(a1, 15) )
  {
    sub_8001A8C4(v1, 0, 0);
    v4 = 4;
    goto LABEL_7;
  }
  return 0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80014CC4(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80014CC4u, "SCUS_942.49");
  int v4; 
  int v5; 
  int v7; 
  int v8; 
  int result; 

  v4 = a2 / 2;
  v5 = sub_8005AF24(a2 / 2);
  v7 = TM3_DRAFT_U16(a1 + 2u * (1)) * v5;
  v8 = TM3_DRAFT_U16(a1 + 2u * (2)) * v5;
  TM3_DRAFT_U32(a3) = (TM3_DRAFT_U16(a1) * v5 + 2048) >> 12;
  TM3_DRAFT_U32(a3 + 4u * (1)) = (v7 + 2048) >> 12;
  TM3_DRAFT_U32(a3 + 4u * (2)) = (v8 + 2048) >> 12;
  result = sub_8005AFF4( v4);
  TM3_DRAFT_U32(a3 + 4u * (3)) = result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003EF08(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8003EF08u, "SCUS_942.49");
  uint32 v3; 
  int v4; 
  int v5; 
  sint16 v6; 
  sint16 v7; 
  int v8; 
  uint32 v9; 
  uint32 v10; 
  int v11; 

  v3 = a1;
  v4 = TM3_DRAFT_U32(a2 + 4u * (1));
  v5 = TM3_DRAFT_U32(a2 + 4u * (2));
  TM3_DRAFT_U32(a1 + 96) = TM3_DRAFT_U32(a2);
  TM3_DRAFT_U32(a1 + 104) = v4;
  TM3_DRAFT_U32(a1 + 112) = v5;
  sub_8005B240(a3, a1 + 16u);
  v6 = TM3_DRAFT_U16(v3 + 2u * (10));
  v7 = TM3_DRAFT_U16(v3 + 2u * (8));
  TM3_DRAFT_U16(v3 + 2u * (1)) = 0;
  TM3_DRAFT_U16(v3) = v6;
  TM3_DRAFT_U16(v3 + 2u * (2)) = -v7;
  sub_8005B284((int)v3, (int)v3);
  v9 = v3 + 16;
  v10 = v3;
  v3 += 2u * (4);
  sub_80013EC8(v9, v10, v3);
  return sub_8005B284((int)v3, (int)v3);
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004B468(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004B468u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 s0; /* TODO: Review undefined incoming or temporary value */
    uint32 s1; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_8004B468:;
    L_8004B46C:;
    L_8004B470:;
    L_8004B474:;
    s0 = arg1 + 0u;
    L_8004B478:;
    L_8004B47C:;
    v1 = TM3_DRAFT_U8(s0 + (uint32)(1));
    L_8004B480:;
    v0 = 0u + (uint32)(2);
    L_8004B484:;
    {
        uint32 branch = v1 == v0;
        s1 = arg0 + 0u;
        if (branch) goto L_8004B494;
    }
    L_8004B48C:;
    v0 = 0u + 0u;
    goto L_8004B4EC;
    L_8004B494:;
    arg0 = s1 + 0u;
    L_8004B498:;
    v0 = 0x80080000u;
    L_8004B49C:;
    v1 = TM3_DRAFT_U8(s0 + (uint32)(0));
    L_8004B4A0:;
    v0 = v0 + (uint32)(-8024);
    L_8004B4A4:;
    v1 = v1 << 3u;
    L_8004B4A8:;
    v1 = v1 + v0;
    L_8004B4AC:;
    v0 = TM3_DRAFT_U32(v1 + (uint32)(0));
    L_8004B4B0:;
    L_8004B4B4:;
    {
        uint32 target = v0;
        arg1 = s0 + 0u;
        v0 = tm3_draft_indirect(target, 2u, arg0, arg1); /* TODO: Indirect callback adapter */
    }
    L_8004B4BC:;
    {
        uint32 branch = v0 == 0u;
        arg0 = 0u + (uint32)(22);
        if (branch) goto L_8004B4E8;
    }
    L_8004B4C4:;
    arg1 = 0u + (uint32)(5);
    L_8004B4C8:;
    v0 = 0u + (uint32)(2000);
    L_8004B4CC:;
    arg2 = arg1 + 0u;
    L_8004B4D0:;
    arg3 = s1 + 0u;
    L_8004B4D4:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    v0 = sub_8004A294(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_8004B4DC:;
    v0 = 0u + (uint32)(1);
    L_8004B4E0:;
    TM3_DRAFT_U8(s0 + (uint32)(1)) = (uint8)v0;
    L_8004B4E4:;
    TM3_DRAFT_U16(s0 + (uint32)(4)) = (uint16)0u;
    L_8004B4E8:;
    v0 = 0u + (uint32)(1);
    L_8004B4EC:;
    L_8004B4F0:;
    L_8004B4F4:;
    L_8004B4F8:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80043B74(uint32 a1, uint32 a2)
{
    uint32 original_local_words[6];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80043B74u, "SCUS_942.49");
  int i; 

  TM3_DRAFT_U32(0x80089E04u + 4u * (2)) = a2;
  TM3_DRAFT_U32(0x80089E04u + 4u * (1)) = a1;
  TM3_DRAFT_U32(0x80089E04u + 4u * (3)) = a1;
  (*(char (*)[8])psx_addr(original_local_address + 16u, sizeof(char[8])))[0] = 5;
  sub_8005D4D0(0xBu, 0, 0);
  for ( i = 4; ; i = 30 )
  {
    sub_8005FA24(i);
    if ( sub_8005D740(0xEu, TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[8])psx_addr(original_local_address + 16u, sizeof(char[8]))), sizeof((*(char (*)[8])psx_addr(original_local_address + 16u, sizeof(char[8]))))) /* TODO: Local buffer adapter */, 0) )
      break;
    sub_8005D214();
    sub_8005D468(0u, 0u);
  }
  sub_8005D4BC(0x80043974u);
  sub_800438F4(TM3_DRAFT_U32(0x80089E04u + 4u * (1)));
  return 0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004A5D8(uint32 a1)
{
    FUNCTION_MARKER(0x8004A5D8u, "SCUS_942.49");
  uint32 result; 
  int v3; 
  uint32 v4; 
  uint32 v5; 

  result = (uint32)TM3_DRAFT_U32(a1);
  v3 = 0;
  if ( TM3_DRAFT_U32(a1) )
  {
    while ( v3 != 4 )
    {
      v4 = (uint32)TM3_DRAFT_U32(a1);
      if ( TM3_DRAFT_U32(a1) )
      {
        do
        {
          v5 = (uint32)TM3_DRAFT_U32(v4 + 4u * (2));
          sub_8004A410( v4);
          v4 = v5;
        }
        while ( v5 );
      }
      result = (uint32)TM3_DRAFT_U32(a1);
      ++v3;
      if ( !TM3_DRAFT_U32(a1) )
        return result;
    }
    TM3_DRAFT_U32(a1) = 0;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800562C0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800562C0u, "SCUS_942.49");
    (void)a1;
    (void)a2;
    /* Movie playback absent by user instruction */
    return 0u;
}

/* Unverified draft; TODO items require later review */
uint32 sub_80014A3C(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80014A3Cu, "SCUS_942.49");
  sint64 v4; 
  int result; 
  char v6; 
  int v7; 
  int v8; 

  v4 = TM3_DRAFT_U16(a2) * (sint64)a3;
  result = 32 - a4;
  v6 = a4 - 1;
  v7 = TM3_DRAFT_U16(a2 + 2u * (1));
  v8 = TM3_DRAFT_U16(a2 + 2u * (2));
  TM3_DRAFT_U16(a1) = (((uint32)v4 >> v6 >> 1) | (HIDWORD(v4) << result)) + (((uint32)v4 >> v6) & 1);
  TM3_DRAFT_U16(a1 + 2u * (1)) = (((uint32)(v7 * a3) >> v6 >> 1) | ((uint64)(v7 * (sint64)a3) >> 32 << result))
        + (((uint32)(v7 * a3) >> v6) & 1);
  TM3_DRAFT_U16(a1 + 2u * (2)) = (((uint32)(v8 * a3) >> v6 >> 1) | ((uint64)(v8 * (sint64)a3) >> 32 << result))
        + (((uint32)(v8 * a3) >> v6) & 1);
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80015F2C(uint32 a1)
{
    FUNCTION_MARKER(0x80015F2Cu, "SCUS_942.49");
  int v1; 
  int v2; 

  if ( (uint16)TM3_DRAFT_U32(0x80089EF8u) >= 2u )
  {
    v1 = (uint16)TM3_DRAFT_U32(0x80089EF8u) - 1;
    if ( v1 >= 0 )
    {
      v2 = 40 * v1 - 2146918384;
      do
      {
        if ( a1 >= TM3_DRAFT_I16(v2 + 16) )
        {
          --v1;
        }
        else
        {
          --v1;
          if ( a1 >= TM3_DRAFT_I16(v2 + 18) )
            return v2;
        }
        v2 -= 40;
      }
      while ( v1 >= 0 );
    }
  }
  return -2146918384;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800438F4(uint32 a1)
{
    uint32 original_local_words[6];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x800438F4u, "SCUS_942.49");

  sub_8005D930(a1, TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[8])psx_addr(original_local_address + 16u, sizeof(char[8]))), sizeof((*(char (*)[8])psx_addr(original_local_address + 16u, sizeof(char[8]))))));
  sub_8005D4D0(0xBu, 0, 0);
  TM3_DRAFT_U32(0x80089E04u + 4u * (5)) = 1;
  if ( sub_8005D4D0(3u, TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[8])psx_addr(original_local_address + 16u, sizeof(char[8]))), sizeof((*(char (*)[8])psx_addr(original_local_address + 16u, sizeof(char[8]))))) /* TODO: Local buffer adapter */, 0) == 1 )
  {
    TM3_DRAFT_U32(0x80089E04u + 4u * (3)) = a1;
    return 0;
  }
  else
  {
    sub_8005D4D0(0xCu, 0, 0);
    TM3_DRAFT_U32(0x80089E04u + 4u * (5)) = 0;
    return -1;
  }
}


/* Unverified draft; TODO items require later review */
uint32 sub_80025F14(uint32 a1)
{
    FUNCTION_MARKER(0x80025F14u, "SCUS_942.49");
  int v2; 
  int v3; 
  int result; 

  v2 = (TM3_DRAFT_U32(a1 + 4u * (1023)) << 12) / TM3_DRAFT_U32(a1 + 4u * (1024));
  sub_80025F0C((int)a1, v2 < 2048);
  v3 = v2 - ((v2 - 1024) & ((v2 - 1024) >> 31)) - 3072;
  result = 2 * ((v3 & (v3 >> 31)) + 2048);
  TM3_DRAFT_U32(a1 + 4u * (15)) = result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80028A88(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80028A88u, "SCUS_942.49");
  uint32 v3; 
  int result; 
  uint32 v6; 
  uint32 v7; 

  v3 = TM3_DRAFT_U32(a1);
  if ( TM3_DRAFT_U32(a1) )
  {
    while ( 1 )
    {
      result = 0;
      if ( TM3_DRAFT_U32(v3) == a2 )
        break;
      v3 = (uint32)TM3_DRAFT_U32(v3 + 4u * (1));
      if ( !v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v6 = sub_8004A000(8);
    result = 1;
    if ( v6 )
    {
      v7 = TM3_DRAFT_U32(a1);
      TM3_DRAFT_U32(v6) = a2;
      TM3_DRAFT_U32(v6 + 4u * (1)) = (int)v7;
      TM3_DRAFT_U32(a1) = v6;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800266D8(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800266D8u, "SCUS_942.49");
  int v4; 
  int v5; 
  int v6; 

  if ( a2 != TM3_DRAFT_U32(a1 + 4388) + 4 )
    return 0;
  v4 = TM3_DRAFT_U16(a3 + 2u * (8));
  v5 = TM3_DRAFT_U16(a3 + 2u * (9));
  v6 = TM3_DRAFT_U16(a3 + 2u * (10));
  TM3_DRAFT_U32(0x1F8000B4u) = v4;
  TM3_DRAFT_U32(0x1F8000B8u) = v5;
  TM3_DRAFT_U32(0x1F8000BCu) = v6;
  sub_8001434C(TM3_DRAFT_U32(a1 + 4384), 528482464);
  sub_8005B614((uint32)0x1F800080, (uint32)0x1F8000A0, (uint32)0x1F8000A0);
  return 528482464;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80026B88(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80026B88u, "SCUS_942.49");
  int result; 

  sub_8005BB84((uint32)(a1 + 1536), TM3_DRAFT_U32(a1) + 8 * a2 + 12, a3);
  TM3_DRAFT_U16(a3) += TM3_DRAFT_U16(a1 + 1556);
  TM3_DRAFT_U16(a3 + 2u * (1)) += TM3_DRAFT_U16(a1 + 1560);
  result = (uint16)TM3_DRAFT_U16(a3 + 2u * (2)) + TM3_DRAFT_U16(a1 + 1564);
  TM3_DRAFT_U16(a3 + 2u * (2)) = result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004A6AC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004A6ACu, "SCUS_942.49");
  uint32 v2; 

  uint32 result; /* Guest callback address */ 
  uint32 v4; 

  v2 = a1;
  if ( TM3_DRAFT_U32(a2) < TM3_DRAFT_U32(a1) )
  {
    a1 = a2;
    a2 = v2;
  }
  result = TM3_DRAFT_U32(0x8007F50Cu + 4u * (TM3_DRAFT_U32(a2) * (TM3_DRAFT_U32(a2) + 1) / 2 + TM3_DRAFT_U32(a1)));
  v4 = a1 + 48;
  if ( result )
    return (uint32)tm3_draft_indirect(result, 2u, v4, a2 + 48) /* TODO: Guest callback adapter */;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004524C(void)
{
    FUNCTION_MARKER(0x8004524Cu, "SCUS_942.49");
  int result; 
  int v1; 
  int v2; 
  sint16 vars0; 
  sint16 vars4; 
  sint16 vars8; 
  sint16 _2C; 

  result = TM3_DRAFT_U32(0x800D2E98u);
  v1 = 0;
  if ( TM3_DRAFT_U32(0x800D2E98u) > 0 )
  {
    v2 = 0;
    do
    {
      sub_800443DC( v2, 0, 0, 0, 0, 0, 0, 0);
      result = ++v1 < TM3_DRAFT_U32(0x800D2E98u);
      v2 = v1;
    }
    while ( v1 < TM3_DRAFT_U32(0x800D2E98u) );
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80065028(void)
{
    FUNCTION_MARKER(0x80065028u, "SCUS_942.49");
  int v0; 
  uint32 v1; 
  int result; 

  v0 = TM3_DRAFT_U32(0x80087E10u);
  TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) = -129;
  if ( (TM3_DRAFT_U16(v0 + 4) & 0x80) != 0 )
  {
    while ( 1 )
    {
      v1 = sub_8006762C();
      result = 0;
      if ( v1 )
        break;
      if ( (TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 4) & 0x80) == 0 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    result = 1;
    TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 10) |= 0x10u;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80018C38(uint32 a1)
{
    uint32 original_local_words[8];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80018C38u, "SCUS_942.49");
  int result; 
  int v4; 
  int v5; 
  int v6; 
  int vars0; 

  v4 = TM3_DRAFT_U32(a1 + 4u * (1013));
  result = v4;
  if ( v4 )
  {
    TM3_DRAFT_U32(a1 + 4u * (1014)) = 0;
    sub_8004A570( v4);
    v5 = TM3_DRAFT_U32(a1 + 4u * (390));
    v6 = TM3_DRAFT_U32(a1 + 4u * (391));
    (*(sint16 (*)[4])psx_addr(original_local_address + 24u, sizeof(sint16[4])))[0] = TM3_DRAFT_U32(a1 + 4u * (389));
    (*(sint16 (*)[4])psx_addr(original_local_address + 24u, sizeof(sint16[4])))[2] = v6;
    (*(sint16 (*)[4])psx_addr(original_local_address + 24u, sizeof(sint16[4])))[1] = v5;
    return sub_800276AC(TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 24u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 24u, sizeof(sint16[4]))))) /* TODO: Local buffer adapter */, 2, 200, 0, 0, -2);
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80023E54(uint32 a1)
{
    uint32 original_local_words[14];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80023E54u, "SCUS_942.49");
  sint16 v2; 
  sint16 v3; 

  v2 = TM3_DRAFT_U16(a1 + 1546);
  v3 = TM3_DRAFT_U16(a1 + 1552);
  (*(sint16 (*)[4])psx_addr(original_local_address + 48u, sizeof(sint16[4])))[0] = TM3_DRAFT_U16(a1 + 1540);
  (*(sint16 (*)[4])psx_addr(original_local_address + 48u, sizeof(sint16[4])))[2] = v3;
  (*(sint16 (*)[4])psx_addr(original_local_address + 48u, sizeof(sint16[4])))[1] = v2;
  sub_80014EDC((uint32)(a1 + 1580), TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 48u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 48u, sizeof(sint16[4]))))), 2048, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[16])psx_addr(original_local_address + 16u, sizeof(sint16[16]))), sizeof((*(sint16 (*)[16])psx_addr(original_local_address + 16u, sizeof(sint16[16]))))));
  sub_8005B614((uint32)(*(sint16 (*)[16])psx_addr(original_local_address + 16u, sizeof(sint16[16]))), (uint32)(a1 + 1536), (uint32)(a1 + 1536));
  sub_80023B38(a1);
  return sub_80023BFC(a1);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80052908(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80052908u, "SCUS_942.49");
  int v4; 
  int vars0; 
  int vars4; 
  int vars8; 
  char _2C; 

  v4 = sub_80052874();
  return sub_8004E9B8(
           a1,
           a3,
           0x80052908u,
           2,
           (int)TM3_DRAFT_U32(0x800898A0u),
           TM3_DRAFT_U32(0x800D2968u),
           3,
           v4 == 0);
}


/* Unverified draft; TODO items require later review */
uint32 sub_800272E8(uint32 a1)
{
    FUNCTION_MARKER(0x800272E8u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 s0; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_800272E8:;
    L_800272EC:;
    L_800272F0:;
    s0 = arg0 + 0u;
    L_800272F4:;
    arg1 = s0 + 0u;
    L_800272F8:;
    arg2 = 0u + (uint32)(20);
    L_800272FC:;
    L_80027300:;
    arg3 = 0u + (uint32)(10);
    v0 = sub_80026F98(arg0, arg1, arg2, arg3);
    L_80027308:;
    {
        uint32 branch = v0 != 0u;
        arg1 = 0u + (uint32)(2);
        if (branch) goto L_80027348;
    }
    L_80027310:;
    arg0 = s0 + (uint32)(8);
    L_80027314:;
    arg2 = 0u + (uint32)(60);
    L_80027318:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(68));
    L_8002731C:;
    v1 = 0x80090000u;
    L_80027320:;
    v1 = TM3_DRAFT_U32(v1 + (uint32)(-25452));
    L_80027324:;
    v0 = v0 << 5u;
    L_80027328:;
    v0 = v0 + v1;
    L_8002732C:;
    arg3 = TM3_DRAFT_I8(v0 + (uint32)(0));
    L_80027330:;
    v0 = 0u + (uint32)(-1);
    L_80027334:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)0u;
    L_80027338:;
    TM3_DRAFT_U32(listing_local_address + 20u) = (uint32)v0;
    v0 = sub_800276AC(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 20u) /* TODO: Caller stack argument */);
    L_80027340:;
    arg0 = s0 + 0u;
    v0 = sub_8004A570(arg0);
    L_80027348:;
    L_8002734C:;
    L_80027350:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800336B4(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800336B4u, "SCUS_942.49");
  uint32 result; 

  sub_8002EAE0(a1, a2);
  result = ((uint32)(TM3_DRAFT_I16(2 * TM3_DRAFT_U8(a1 + 326) - 2146915968) * (TM3_DRAFT_U32(a1 + 148) << 12))
          / TM3_DRAFT_U32(a1 + 152)
          + 2048) >> 12;
  TM3_DRAFT_U16(a1 + 104) = TM3_DRAFT_U16(2 * TM3_DRAFT_U8(a1 + 326) - 2146915968) + result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003431C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8003431Cu, "SCUS_942.49");
  int v2; 
  int v3; 
  sint16 v4; 
  sint16 v5; 

  v2 = a2 + 4;
  TM3_DRAFT_U32(a1 + 64) = TM3_DRAFT_U32(v2 - 4);
  v3 = TM3_DRAFT_U32(a1 + 64);
  TM3_DRAFT_U32(a1 + 68) = TM3_DRAFT_U32(v2);
  v4 = TM3_DRAFT_U16(v3 - 20 + 2);
  v5 = TM3_DRAFT_U16(v3 - 20 + 4);
  TM3_DRAFT_U16(a1 + 72) = TM3_DRAFT_U16(v3 - 20);
  TM3_DRAFT_U16(a1 + 74) = v4;
  TM3_DRAFT_U16(a1 + 76) = v5;
  TM3_DRAFT_U32(a1 + 92) = 0;
  LOWORD(v3) = TM3_DRAFT_U16(v2 + 4);
  TM3_DRAFT_U32(a1 - 24) = 128;
  TM3_DRAFT_U16(a1 + 90) = v3;
  sub_80033F18(a1);
  return 1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800490BC(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800490BCu, "SCUS_942.49");
  int v3; 
  int v4; 

  TM3_DRAFT_U16(a1 + 16) = (uint8)TM3_DRAFT_U8(a2 + 1u * (13));
  TM3_DRAFT_U16(a1 + 18) = (uint8)TM3_DRAFT_U8(a2 + 1u * (12));
  v3 = (uint8)TM3_DRAFT_U8(a2 + 1u * (16));
  v4 = a3 - (uint8)TM3_DRAFT_U8(a2 + 1u * (17));
  TM3_DRAFT_U8(a1 + 12) = TM3_DRAFT_U8(a2) + TM3_DRAFT_U8(a2 + 1u * (14)) * (v4 % v3);
  TM3_DRAFT_U8(a1 + 13) = TM3_DRAFT_U8(a2 + 1u * (1)) + TM3_DRAFT_U8(a2 + 1u * (15)) * (v4 / v3);
  return (uint8)TM3_DRAFT_U8(a2 + 1u * (13));
}


/* Unverified draft; TODO items require later review */
uint32 sub_80040804(uint32 a1)
{
    FUNCTION_MARKER(0x80040804u, "SCUS_942.49");
  int v1; 
  int v2; 

  v1 = TM3_DRAFT_U32(0x80089898u) + 48;
  if ( TM3_DRAFT_U32(0x80089898u) )
  {
    do
    {
      if ( TM3_DRAFT_U32(v1 + 8) == a1 )
        TM3_DRAFT_U32(v1 + 8) = -1;
      v2 = TM3_DRAFT_U32(v1 - 40);
      v1 = v2 + 48;
    }
    while ( v2 );
  }
  return sub_80061574(0, 1 << a1);
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001A580(uint32 a1)
{
    FUNCTION_MARKER(0x8001A580u, "SCUS_942.49");
  int result; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 

  result = TM3_DRAFT_U32(0x800D340Cu);
  v2 = TM3_DRAFT_U32(0x800D340Cu) - 1;
  v3 = 0;
  if ( TM3_DRAFT_U32(0x800D340Cu) - 1 >= 0 )
  {
    result = 4 * v2;
    v4 = 4 * v2 - 2146619768;
    do
    {
      v5 = TM3_DRAFT_U32(v4 + 1424);
      if ( v5 != a1 )
      {
        result = v3 % 4;
        TM3_DRAFT_U16(v5 + 3334) = v3 % 4;
        ++v3;
      }
      --v2;
      v4 -= 4;
    }
    while ( v2 >= 0 );
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001A390(uint32 a1)
{
    FUNCTION_MARKER(0x8001A390u, "SCUS_942.49");
  char v1; 
  uint32 v3; 

  uint32 result; /* Guest callback address */ 

  v1 = sub_80039FC8();
  v3 = TM3_DRAFT_U32(0x800896A0u) == 0;
  TM3_DRAFT_U16(a1 + 3336) = v1 & 3;
  if ( !v3 && (v1 & 3) == TM3_DRAFT_U16(a1 + 3334) )
    sub_8001A1C8(a1);
  result = TM3_DRAFT_U32(a1 + 3316);
  if ( result )
    return (uint32)tm3_draft_indirect(result, 1u, a1) /* TODO: Guest callback adapter */;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800265C0(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800265C0u, "SCUS_942.49");
  int v3; 
  int v4; 

  v3 = TM3_DRAFT_U16(a3 + 2u * (9));
  v4 = TM3_DRAFT_U16(a3 + 2u * (10));
  TM3_DRAFT_U32(0x1F8000B4u) = TM3_DRAFT_U16(a3 + 2u * (8));
  TM3_DRAFT_U32(0x1F8000B8u) = v3;
  TM3_DRAFT_U32(0x1F8000BCu) = v4;
  sub_8001434C(TM3_DRAFT_U32(a1 + 4384), 528482464);
  sub_8005B614((uint32)0x1F800080, (uint32)0x1F8000A0, (uint32)0x1F8000A0);
  return 528482464;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80048530(uint32 a1)
{
    FUNCTION_MARKER(0x80048530u, "SCUS_942.49");
  int v2; 

  sub_80048304((uint32)((uint32)a1 + TM3_DRAFT_U32(a1)));
  v2 = TM3_DRAFT_U32(a1 + 4u * (1));
  if ( v2 != TM3_DRAFT_U32(a1 + 4u * (2)) )
    sub_80048304((uint32)((uint32)a1 + v2));
  sub_80048304((uint32)((uint32)a1 + TM3_DRAFT_U32(a1 + 4u * (2))));
  return 0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800459B8(void)
{
    FUNCTION_MARKER(0x800459B8u, "SCUS_942.49");
  int result; 

  result = TM3_DRAFT_U32(0x800D2F30u);
  if ( TM3_DRAFT_U32(0x800D2F30u) )
  {
    result = 1;
    if ( TM3_DRAFT_U32(0x800D2F2Cu) )
    {
      if ( TM3_DRAFT_U32(0x800D2F2Cu) == 1 )
        return sub_80045684();
    }
    else
    {
      return sub_8004531C();
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001434C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8001434Cu, "SCUS_942.49");
  int v2; 
  uint32 v3; 
  int result; 
  int v5; 
  int v6; 

  v2 = a1 >> 31;
  v3 = TM3_DRAFT_U32(0x80081E38u + 4u * (((uint16)(a1 + (a1 >> 31)) ^ (uint16)(a1 >> 31)) & 0xFFF));
  result = a2;
  v5 = v3 << 16;
  v3 >>= 16;
  v6 = ((v5 >> 16) + v2) ^ v2;
  TM3_DRAFT_U32(result) = v3;
  TM3_DRAFT_U32(result + 4) = (uint16)v6;
  TM3_DRAFT_U32(result + 8) = 4096;
  TM3_DRAFT_U32(result + 12) = (uint16)-(sint16)v6;
  TM3_DRAFT_U16(result + 16) = v3;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003E828(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8003E828u, "SCUS_942.49");
  int v2; 
  int result; 

  v2 = 28 * a1 - 2146624480;
  result = TM3_DRAFT_U8(v2 + 2);
  if ( TM3_DRAFT_U8(v2 + 2) )
  {
    TM3_DRAFT_U8(v2) = 1;
    result = sub_80039FC8() + a2;
    TM3_DRAFT_U32(v2 + 4) = result;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800140C8(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800140C8u, "SCUS_942.49");
    xport_gte_write_data(8u, a2);
    xport_gte_write_data(9u, (uint32)TM3_DRAFT_I16(a3));
    xport_gte_write_data(10u, (uint32)TM3_DRAFT_I16(a3 + 2u));
    xport_gte_write_data(11u, (uint32)TM3_DRAFT_I16(a3 + 4u));
    xport_gte_write_data(25u, (uint32)TM3_DRAFT_I16(a4));
    xport_gte_write_data(26u, (uint32)TM3_DRAFT_I16(a4 + 2u));
    xport_gte_write_data(27u, (uint32)TM3_DRAFT_I16(a4 + 4u));
    xport_gte_execute(0x1A8003Eu);
    TM3_DRAFT_U16(a1) = (uint16)xport_gte_read_data(25u);
    TM3_DRAFT_U16(a1 + 2u) = (uint16)xport_gte_read_data(26u);
    TM3_DRAFT_U16(a1 + 4u) = (uint16)xport_gte_read_data(27u);
    return a1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80064460(void)
{
    FUNCTION_MARKER(0x80064460u, "SCUS_942.49");
  int result; 

  result = 0;
  if ( (TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu) + 4) & 1) != 0 )
  {
    result = 0;
    if ( (TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) & 1) != 0 )
    {
      if ( TM3_DRAFT_U32(0x80087DD4u) )
        tm3_draft_indirect(TM3_DRAFT_U32(0x80087DD4u), 0u);
      return 1;
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80048304(uint32 a1)
{
    uint32 original_local_words[6];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80048304u, "SCUS_942.49");

  (*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4])))[0] = TM3_DRAFT_U16(a1);
  (*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4])))[1] = TM3_DRAFT_U16(a1 + 2u * (1));
  (*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4])))[2] = TM3_DRAFT_U16(a1 + 2u * (2));
  (*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4])))[3] = TM3_DRAFT_U16(a1 + 2u * (3));
  sub_800579FC( TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4]))))), (int)(a1 + 8));
  return sub_80057750(0);
}


/* Unverified draft; TODO items require later review */
uint32 sub_800326CC(uint32 a1)
{
    uint32 original_local_words[6];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x800326CCu, "SCUS_942.49");
  int vars0; 
  int vars0a; 
  int vars4; 
  int vars4a; 

  sub_8004A294(30, a1, 15, 15);
  return sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 55), 5, a1, 1200);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80046840(void)
{
    FUNCTION_MARKER(0x80046840u, "SCUS_942.49");
  int v0; 
  int v1; 
  int v2; 

  v0 = 0;
  v1 = 0;
  if ( TM3_DRAFT_U32(0x800D340Cu) > 0 )
  {
    v2 = -2146619768;
    do
    {
      if ( TM3_DRAFT_U8(TM3_DRAFT_U32(v2 + 1424) + 3328) == 2 )
        ++v1;
      ++v0;
      v2 += 4;
    }
    while ( v0 < TM3_DRAFT_U32(0x800D340Cu) );
  }
  return v1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800524F4(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800524F4u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2 = a3;
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_800524F4:;
    L_800524F8:;
    v0 = 0x80080000u;
    L_800524FC:;
    v1 = 0x800d0000u;
    L_80052500:;
    v0 = v0 + (uint32)(-308);
    L_80052504:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_80052508:;
    v0 = 0x80050000u;
    L_8005250C:;
    arg1 = arg2 + 0u;
    L_80052510:;
    arg2 = v0 + (uint32)(9460);
    L_80052514:;
    v1 = TM3_DRAFT_U32(v1 + (uint32)(10560));
    L_80052518:;
    arg3 = 0u + (uint32)(3);
    L_8005251C:;
    L_80052520:;
    TM3_DRAFT_U32(listing_local_address + 24u) = (uint32)0u;
    L_80052524:;
    TM3_DRAFT_U32(listing_local_address + 28u) = (uint32)0u;
    L_80052528:;
    TM3_DRAFT_U32(listing_local_address + 20u) = (uint32)v1;
    v0 = sub_8004E9B8(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 20u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 24u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 28u) /* TODO: Caller stack argument */);
    L_80052530:;
    L_80052534:;
    L_80052538:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80040710(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80040710u, "SCUS_942.49");
  uint32 scale = TM3_DRAFT_U32(0x8008982Cu);
  uint32 left = a2 * scale;
  uint32 right = a3 * scale;
  if ((sint32)left < 0) left += 15u;
  if ((sint32)right < 0) right += 15u;
  sub_80061A74(a1, (uint32)((sint32)(left << 12u) >> 16u), (uint32)((sint32)(right << 12u) >> 16u));
  /* Original SDK delay loop leaves V0 zero */
  return 0u;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003E6D8(void)
{
    FUNCTION_MARKER(0x8003E6D8u, "SCUS_942.49");
    uint32 address = 0x800d1d00u;
    uint32 count = 0u;
    do
    {
        w_u16(address, 0u);
        w_u16(address + 6u, 0u);
        w_u16(address + 8u, 0u);
        w_u32(address + 16u, 0u);
        w_u16(address + 10u, 0u);
        ++count;
        address += 24u;
    } while (count < 8u);
    uint32 result = sub_8003E778();
    return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800407B0(void)
{
    FUNCTION_MARKER(0x800407B0u, "SCUS_942.49");
  int v0; 
  int v1; 

  v0 = TM3_DRAFT_U32(0x80089898u) + 48;
  if ( TM3_DRAFT_U32(0x80089898u) )
  {
    do
    {
      v1 = TM3_DRAFT_U32(v0 - 40);
      TM3_DRAFT_U32(v0 + 8) = -1;
      v0 = v1 + 48;
    }
    while ( v1 );
  }
  return sub_80061574(0, 0xFFFFFF);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80049238(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80049238u, "SCUS_942.49");
  int result; 

  result = sub_80049130(a2, a3);
  TM3_DRAFT_U32(a1) = (a4 - result) / 2;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800468F4(uint32 a1)
{
    FUNCTION_MARKER(0x800468F4u, "SCUS_942.49");
  int result; 

  if ( !TM3_DRAFT_U32(0x800D2F2Cu) )
    return sub_80046840();
  result = -1;
  if ( TM3_DRAFT_U32(0x800D2F2Cu) == 1 )
    return sub_8004689C(a1);
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80039F84(uint32 x, uint32 y, uint32 width, uint32 height,
                     uint32 red, uint32 green, uint32 blue)
{
    FUNCTION_MARKER(0x80039F84u, "SCUS_942.49");
    PSX_RECT rectangle = {(sint16)x, (sint16)y, (sint16)width, (sint16)height};
    ClearImage(&rectangle, (uint8)red, (uint8)green, (uint8)blue);
    return (uint32)DrawSync(0);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80040AEC(uint32 a1)
{
    FUNCTION_MARKER(0x80040AECu, "SCUS_942.49");
  int v1; 

  v1 = TM3_DRAFT_U32(0x8008982Cu + 4u * (1));
  if ( a1 )
    TM3_DRAFT_U32(0x8008982Cu + 4u * (1)) += (sint16)sub_800408DC(a1, TM3_DRAFT_U32(0x8008982Cu + 4u * (1)));
  return v1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800276AC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, ...)
{
    FUNCTION_MARKER(0x800276ACu, "SCUS_942.49");
  return sub_8004A294(4, a2, a1, a5, a3, a4, a6, 12);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80032C20(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    uint32 original_local_words[6];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80032C20u, "SCUS_942.49");
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int vars0; 
  int anonymous0; 

  v5 = a1 + 1580;
  v6 = TM3_DRAFT_U32(a1 + 1580);
  v7 = TM3_DRAFT_U32(a1 + 1584);
  v8 = TM3_DRAFT_U32(v5 + 8);
  (*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4])))[0] = v6;
  (*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4])))[1] = v7;
  (*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4])))[2] = v8;
  return sub_8004A294(15, a1, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 16u, sizeof(sint16[4]))))) /* TODO: Local buffer adapter */);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80049F80(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80049F80u, "SCUS_942.49");
  uint32 result; 
  uint32 v3; 
  uint32 v4; 

  result = a2 >> 3;
  if ( a1 )
  {
    v3 = result == 0;
    result = (uint8)a1 & 7;
    if ( !v3 )
    {
      v3 = result == 0;
      result = a2 >> 3;
      if ( !v3 )
      {
        v4 = a1 + 1;
        do
          v3 = ((uint8)v4++ & 7) != 0;
        while ( v3 );
        a1 = v4 - 1;
        result = a2 >> 3;
      }
      TM3_DRAFT_U32(a1) = 0;
      TM3_DRAFT_U32(a1 + 4) = result;
      TM3_DRAFT_U32(0x80089890u) = (int)a1;
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001A7AC(uint32 a1)
{
    FUNCTION_MARKER(0x8001A7ACu, "SCUS_942.49");
  int result; 

  result = sub_80039FD4();
  TM3_DRAFT_U16(a1 + 3418) = result % TM3_DRAFT_I16(a1 + 3416) + 4;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004E478(uint32 a1)
{
    FUNCTION_MARKER(0x8004E478u, "SCUS_942.49");
  int v1; 
  int result; 

  v1 = TM3_DRAFT_I8(0x8007FF28u + (uint32)TM3_DRAFT_U32(0x80089BE4u) + 2146959597);
  if ( v1 < 0 )
    return 0;
  result = 1;
  if ( TM3_DRAFT_U32(0x80089BE4u + 4u * (7 * v1 + 11)) != a1 )
    return 0;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80018BF8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80018BF8u, "SCUS_942.49");
  int result; 

  if ( TM3_DRAFT_U32(a1 + 4060) )
    TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 4064)) = a2;
  else
    TM3_DRAFT_U32(a1 + 4060) = a2;
  TM3_DRAFT_U32(a1 + 4064) = a2;
  TM3_DRAFT_U32(a2) = 0;
  result = TM3_DRAFT_U32(a1 + 4068) + 1;
  TM3_DRAFT_U32(a1 + 4068) = result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800434F0(void)
{
    FUNCTION_MARKER(0x800434F0u, "SCUS_942.49");
  TM3_DRAFT_U32(0x8007EA0Cu) = 0;
  TM3_DRAFT_U32(0x8007EA10u) = 0;
  TM3_DRAFT_U32(0x8007EA14u) = 1;
  return sub_80043554();
}


/* Unverified draft; TODO items require later review */
uint32 sub_80054F0C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80054F0Cu, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_80054F0C:;
    L_80054F10:;
    arg3 = arg1 + 0u;
    L_80054F14:;
    v0 = 0u + (uint32)(1);
    L_80054F18:;
    arg1 = arg0 & 255u;
    L_80054F1C:;
    arg1 = arg1 << 6u;
    L_80054F20:;
    arg0 = 0u + 0u;
    L_80054F24:;
    arg1 = arg1 + (uint32)(64);
    L_80054F28:;
    arg2 = 0u + (uint32)(4);
    L_80054F2C:;
    L_80054F30:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    v0 = sub_80054C60(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_80054F38:;
    L_80054F3C:;
    L_80054F40:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80052280(void)
{
    FUNCTION_MARKER(0x80052280u, "SCUS_942.49");
  int result; 

  result = sub_8004EB10(TM3_DRAFT_U32(0x800D295Cu), 0, 1, 1);
  TM3_DRAFT_U32(0x800D295Cu) = result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004840C(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    FUNCTION_MARKER(0x8004840Cu, "SCUS_942.49");
  int result; 

  result = a1 + 8;
  if ( (TM3_DRAFT_U8(a1 + 4) & 8) != 0 )
  {
    TM3_DRAFT_U16(a1 + 12) = a4;
    TM3_DRAFT_U16(a1 + 14) = a5;
    result += TM3_DRAFT_U32(a1 + 8);
  }
  TM3_DRAFT_U16(result + 4) = a2;
  TM3_DRAFT_U16(result + 6) = a3;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80049FC4(void)
{
    FUNCTION_MARKER(0x80049FC4u, "SCUS_942.49");
  sub_80049F50(TM3_DRAFT_U32(0x80089E38u));
  return sub_80049F80((uint32)TM3_DRAFT_U32(0x80089E38u + 4u * (0)), -2145388544 - TM3_DRAFT_U32(0x80089E38u + 4u * (0)));
}


/* Unverified draft; TODO items require later review */
uint32 sub_80054E9C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80054E9Cu, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_80054E9C:;
    L_80054EA0:;
    arg3 = arg1 + 0u;
    L_80054EA4:;
    v0 = 0u + (uint32)(1);
    L_80054EA8:;
    arg1 = arg0 & 255u;
    L_80054EAC:;
    arg0 = 0u + 0u;
    L_80054EB0:;
    arg1 = arg1 + v0;
    L_80054EB4:;
    arg2 = v0 + 0u;
    L_80054EB8:;
    L_80054EBC:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    v0 = sub_80054C60(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_80054EC4:;
    L_80054EC8:;
    L_80054ECC:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80013E20(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80013E20u, "SCUS_942.49");
    xport_gte_write_data(0u, TM3_DRAFT_U32(a1));
    xport_gte_write_data(1u, TM3_DRAFT_U32(a1 + 4u));
    xport_gte_write_control(2u, 0u);
    xport_gte_write_control(3u, 0u);
    xport_gte_write_control(4u, 0u);
    xport_gte_write_control(0u, TM3_DRAFT_U32(a2));
    xport_gte_write_control(1u, TM3_DRAFT_U32(a2 + 4u));
    xport_gte_execute(0x406012u);
    return xport_gte_read_data(25u);
}


/* Unverified draft; TODO items require later review */
void sub_8004A5A0(void)
{
    FUNCTION_MARKER(0x8004A5A0u, "SCUS_942.49");
  uint32 v0; 
  uint32 result; 

  v0 = (uint32)TM3_DRAFT_U32(0x8008989Cu);
  if ( TM3_DRAFT_U32(0x8008989Cu) )
  {
    do
    {
      result = (uint32)TM3_DRAFT_U32(v0 + 4u * (5));
      TM3_DRAFT_U32(v0 + 4u * (3)) = 0;
      TM3_DRAFT_U32(v0 + 4u * (4)) = 0;
      TM3_DRAFT_U32(v0 + 4u * (5)) = 0;
      v0 = result;
    }
    while ( result );
  }
  TM3_DRAFT_U32(0x8008989Cu) = 0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003A014(uint32 a1)
{
    FUNCTION_MARKER(0x8003A014u, "SCUS_942.49");
  int v1; 

  if ( a1 )
    v1 = TM3_DRAFT_U32(0x800D2EECu);
  else
    v1 = 16;
  return sub_800408A4(v1);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80033A4C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80033A4Cu, "SCUS_942.49");
  int v2; 
  int result; 

  v2 = TM3_DRAFT_U32(a1 + 3968) + a2;
  result = v2 < 16;
  TM3_DRAFT_U32(a1 + 3968) = v2;
  if ( v2 < 16 )
  {
    result = 15;
    if ( v2 < 0 )
      TM3_DRAFT_U32(a1 + 3968) = 15;
  }
  else
  {
    TM3_DRAFT_U32(a1 + 3968) = 0;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002E698(uint32 a1)
{
    FUNCTION_MARKER(0x8002E698u, "SCUS_942.49");
  return tm3_draft_indirect(TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 156) + 12), 0u);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80043554(void)
{
    FUNCTION_MARKER(0x80043554u, "SCUS_942.49");
  sub_8005FCD4(0x800434ACu);
  return sub_80057658(0x800434DCu);
}


/* Unverified draft; TODO items require later review */
uint32 sub_800434AC(void)
{
    FUNCTION_MARKER(0x800434ACu, "SCUS_942.49");
  ++TM3_DRAFT_U32(0x8007EA0Cu);
  return ++TM3_DRAFT_U32(0x8007EA10u);
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004B730(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004B730u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_8004B730:;
    L_8004B734:;
    L_8004B738:;
    arg2 = TM3_DRAFT_U16(arg1 + (uint32)(90));
    L_8004B73C:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)0u;
    L_8004B740:;
    arg1 = TM3_DRAFT_U32(arg1 + (uint32)(64));
    L_8004B744:;
    arg3 = 0u + 0u;
    v0 = sub_800239C0(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_8004B74C:;
    L_8004B750:;
    v0 = 0u + (uint32)(1);
    L_8004B754:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80047480(void)
{
    FUNCTION_MARKER(0x80047480u, "SCUS_942.49");
  return (sub_80063304(0, 0, 0) & 0x80) == 0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80047364(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80047364u, "SCUS_942.49");
  int result; 

  result = a1 < TM3_DRAFT_U32(0x800D2E88u);
  if ( a1 < TM3_DRAFT_U32(0x800D2E88u) )
    return sub_8003E964(a1, a2);
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800517D0(void)
{
    FUNCTION_MARKER(0x800517D0u, "SCUS_942.49");
  TM3_DRAFT_U32(0x800D28BCu) = 0;
  return sub_800474BC(0);
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004352C(void)
{
    FUNCTION_MARKER(0x8004352Cu, "SCUS_942.49");
  sub_8005FCD4(0);
  return sub_80057658(0);
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003372C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8003372Cu, "SCUS_942.49");
  return sub_80033754(a1, TM3_DRAFT_U32(a1 + 3968), a2);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80013DC4(uint32 a1, uint32 a2)
{
    uint32 cpu_a0;
    uint32 cpu_a1;
    FUNCTION_MARKER(0x80013DC4u, "SCUS_942.49");
  xport_gte_write_data(0u, TM3_DRAFT_U32(a1 + 0u));
xport_gte_write_data(1u, TM3_DRAFT_U32(a1 + 4u));
xport_gte_execute(0x486012u);
TM3_DRAFT_U32(a2 + 0u) = xport_gte_read_data(25u);
TM3_DRAFT_U32(a2 + 4u) = xport_gte_read_data(26u);
TM3_DRAFT_U32(a2 + 8u) = xport_gte_read_data(27u);
  return a2;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004EE48(void)
{
    FUNCTION_MARKER(0x8004EE48u, "SCUS_942.49");
  return sub_800474AC() != 1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800406F0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800406F0u, "SCUS_942.49");
  sub_80061AF4(a1, a2 & 0xFFFFu);
  /* Original SDK delay loop leaves V0 zero */
  return 0u;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80048510(uint32 a1)
{
    FUNCTION_MARKER(0x80048510u, "SCUS_942.49");
  sub_80040B30(a1);
  return 0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800320F8(uint32 a1)
{
    FUNCTION_MARKER(0x800320F8u, "SCUS_942.49");
  return sub_80031FE8(a1, 0);
}


/* Unverified draft; TODO items require later review */
uint32 sub_800650B8(void)
{
    FUNCTION_MARKER(0x800650B8u, "SCUS_942.49");
  int result; 

  do
    result = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 4) & 2;
  while ( !result );
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002C180(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8002C180u, "SCUS_942.49");
  return sub_8002C050(a1, a2, 4);
}


/* Unverified draft; TODO items require later review */
uint32 sub_800438B4(void)
{
    FUNCTION_MARKER(0x800438B4u, "SCUS_942.49");
  return sub_80043858(3);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80053E94(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80053E94u, "SCUS_942.49");
  return sub_80053C40(a1, a2, a3, a4);
}


/* Unverified draft; TODO items require later review */
void sub_80014128(uint32 a1)
{
    FUNCTION_MARKER(0x80014128u, "SCUS_942.49");
  TM3_DRAFT_U32(a1) = 4096;
  TM3_DRAFT_U32(a1 + 4) = 0;
  TM3_DRAFT_U32(a1 + 8) = 4096;
  TM3_DRAFT_U32(a1 + 12) = 0;
  TM3_DRAFT_U16(a1 + 16) = 4096;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800403A4(uint32 a1)
{
    FUNCTION_MARKER(0x800403A4u, "SCUS_942.49");
  return TM3_DRAFT_U32(16 * a1 - 2146623512 + 8);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80038AFC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80038AFCu, "SCUS_942.49");
  int v2; 
  int result; 

  v2 = TM3_DRAFT_U32(a1 + 12);
  TM3_DRAFT_U16(a1 + 40) = a2;
  result = v2 | 4;
  TM3_DRAFT_U32(a1 + 12) = result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8005AEB4(uint32 a1)
{
    FUNCTION_MARKER(0x8005AEB4u, "SCUS_942.49");
  int result; 

  TM3_DRAFT_U8(a1 + 3) = 3;
  result = 96;
  TM3_DRAFT_U8(a1 + 7) = 96;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8005AE34(uint32 a1)
{
    FUNCTION_MARKER(0x8005AE34u, "SCUS_942.49");
  int result; 

  TM3_DRAFT_U8(a1 + 3) = 9;
  result = 44;
  TM3_DRAFT_U8(a1 + 7) = 44;
  return result;
}


/* Unverified draft; TODO items require later review */
uint64 sub_800434DC(void)
{
    FUNCTION_MARKER(0x800434DCu, "SCUS_942.49");
  uint64 result; 

  result = 0x8008000000000001LL;
  TM3_DRAFT_U32(0x8007EA14u) = 1;
  return result;
}


/* Unverified draft; TODO items require later review */
void sub_80056A24(void)
{
    FUNCTION_MARKER(0x80056A24u, "SCUS_942.49");
    xport_bios_exit_critical();
}


/* Unverified draft; TODO items require later review */
uint32 sub_80056A14(void)
{
    FUNCTION_MARKER(0x80056A14u, "SCUS_942.49");
    return (uint32)xport_bios_enter_critical();
}


/* Unverified draft; TODO items require later review */
uint32 sub_80056EB4(uint32 mode)
{
    FUNCTION_MARKER(0x80056EB4u, "SCUS_942.49");
    (void)mode;
    /* User-authorized unimplemented BIOS boundary */
    abort();
}


/* Unverified draft; TODO items require later review */
void sub_80039FFC(uint32 a1)
{
    FUNCTION_MARKER(0x80039FFCu, "SCUS_942.49");
  TM3_DRAFT_U32(0x80089D24u + 4u * (31)) = a1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003DC9C(void)
{
    FUNCTION_MARKER(0x8003DC9Cu, "SCUS_942.49");
  return TM3_DRAFT_U32(0x80089DACu + 4u * (2));
}


/* Unverified draft; TODO items require later review */
uint32 sub_800474AC(void)
{
    FUNCTION_MARKER(0x800474ACu, "SCUS_942.49");
  return TM3_DRAFT_U32(0x800D3470u);
}


/* Unverified draft; TODO items require later review */
void sub_80030558(void)
{
    FUNCTION_MARKER(0x80030558u, "SCUS_942.49");
  ;
}


