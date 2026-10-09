#include "game_draft_support.h"
#include "game_draft_signatures.h"

/* Unverified draft; TODO items require later review */
uint32 sub_8001F82C(uint32 a1)
{
    uint32 original_local_words[7];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8001F82Cu, "SCUS_942.49");
  int v2; 
  int v3; 
  int v4; 
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
  int v16; 
  int v17; 
  sint16 v18; 
  sint16 v19; 
  int result; 

  v2 = TM3_DRAFT_U32(a1 + 3948);
  if ( ((uint32)v2 - 2u) < 4 )
  {
    if ( TM3_DRAFT_I32(a1 + 4044) >= 1228 && v2 < 5 )
      TM3_DRAFT_U32(a1 + 3948) = v2 + 1;
    if ( TM3_DRAFT_I32(a1 + 4044) < 717 )
    {
      v3 = TM3_DRAFT_U32(a1 + 3948);
      if ( v3 >= 3 )
        TM3_DRAFT_U32(a1 + 3948) = v3 - 1;
    }
  }
  v4 = TM3_DRAFT_U32(a1 + 4072);
  v5 = v4 <= 0;
  v6 = (sint32)((uint32)v4 - 1u);
  if ( v5 )
  {
    if ( TM3_DRAFT_I16(a1 + 1544) >= 0 )
    {
      TM3_DRAFT_U32(a1 + 3304) = 0;
    }
    else if ( ((TM3_DRAFT_U16(a1 + 2468) >> 1) & 1)
            + ((TM3_DRAFT_U16(a1 + 2356) >> 1) & 1)
            + ((TM3_DRAFT_U16(a1 + 2244) >> 1) & 1)
            + ((TM3_DRAFT_U16(a1 + 2132) >> 1) & 1) >= 3 )
    {
      v7 = TM3_DRAFT_U32(a1 + 1556);
      v8 = TM3_DRAFT_U32(a1 + 1568);
      ++TM3_DRAFT_U32(a1 + 3304);
      v9 = TM3_DRAFT_U32(a1 + 1560);
      v10 = TM3_DRAFT_U32(a1 + 1564);
      v11 = TM3_DRAFT_U32(a1 + 1572);
      v12 = TM3_DRAFT_U32(a1 + 1576);
      TM3_DRAFT_I32(original_local_address + 16u) = (sint32)((uint32)v7 - (uint32)v8);
      TM3_DRAFT_I32(original_local_address + 20u) = (sint32)((uint32)v9 - (uint32)v11);
      TM3_DRAFT_I32(original_local_address + 24u) = (sint32)((uint32)v10 - (uint32)v12);
      v13 = sub_80013E98((int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 16u), sizeof( TM3_DRAFT_I32(original_local_address + 16u))) /* TODO: Local buffer adapter */);
      if ( TM3_DRAFT_I32(a1 + 3304) >= 24 || v13 <= 0 )
        TM3_DRAFT_U32(a1 + 4072) = 12;
    }
  }
  else
  {
    TM3_DRAFT_U32(a1 + 4072) = v6;
    if ( v6 == 6 )
      sub_80023E54(a1);
  }
  sub_8001FDCC(a1);
  sub_800210B8(a1);
  v14 = 0;
  v15 = 0;
  v16 = a1;
  while ( 1 )
  {
    v17 = sub_80013E20(TM3_DRAFT_U32(v16 + 3176), TM3_DRAFT_U32(v16 + 3180));
    if ( TM3_DRAFT_I32(v16 + 3172) < v17 || v17 < TM3_DRAFT_I32(v16 + 3168) )
      break;
    ++v15;
    v16 += 16;
    if ( v15 >= 4 )
      goto LABEL_22;
  }
  v14 = 1;
LABEL_22:
  v18 = TM3_DRAFT_U16(a1 + 1544);
  v19 = TM3_DRAFT_U16(a1 + 1550);
  LOWORD(TM3_DRAFT_I32(original_local_address + 16u)) = TM3_DRAFT_U16(a1 + 1538);
  HIWORD(TM3_DRAFT_I32(original_local_address + 16u)) = v18;
  LOWORD(TM3_DRAFT_I32(original_local_address + 20u)) = v19;
  if ( (sint32)sub_80013E20(a1 + 2508, original_local_address + 16u) < 0 )
    v14 = 1;
  if ( v14 )
    return sub_80023CB8(a1);
  result = TM3_DRAFT_U16(a1 + 3308) - 1;
  if ( TM3_DRAFT_I16(a1 + 3308) > 0 )
    TM3_DRAFT_U16(a1 + 3308) = result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800387BC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800387BCu, "SCUS_942.49");
  int v3; 
  uint32 v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  sint16 v9; 
  sint16 v10; 
  uint32 v11; 
  sint16 v12; 
  sint16 v13; 
  sint16 v14; 
  int v15; 
  sint16 v16; 
  sint16 v17; 
  sint16 v18; 
  sint16 v19; 
  int v20; 
  int v21; 

  v3 = TM3_DRAFT_U32(a2);
  v4 = a2 + 8;
  v5 = TM3_DRAFT_U32(a2 + 4u * (1));
  v6 = a1 + 24;
  TM3_DRAFT_U16(a1 + 24) = 0;
  TM3_DRAFT_U32(a1 + 12) = v5;
  TM3_DRAFT_U16(a1 + 26) = 0;
  TM3_DRAFT_U16(a1 + 28) = 0;
  if ( (TM3_DRAFT_U32(a1 + 12) & 1) != 0 )
  {
    v4 += 2u * (2);
    v7 = TM3_DRAFT_U32(v4 - 4);
    TM3_DRAFT_U32(a1 + 4) = v7;
    if ( v7 )
    {
      v8 = TM3_DRAFT_U32(a1 + 4);
      TM3_DRAFT_U32(a1 + 12) |= 0x20u;
      v9 = TM3_DRAFT_U16(v8 - 20 + 2);
      v10 = TM3_DRAFT_U16(v8 - 20 + 4);
      TM3_DRAFT_U16(a1 + 24) = TM3_DRAFT_U16(v8 - 20);
      TM3_DRAFT_U16(v6 + 2) = v9;
      TM3_DRAFT_U16(v6 + 4) = v10;
    }
  }
  else
  {
    TM3_DRAFT_U32(a1 + 4) = 0;
  }
  if ( (TM3_DRAFT_U32(a1 + 12) & 2) != 0 )
  {
    v11 = v4 + 4;
    v12 = TM3_DRAFT_U16(v11 - 4);
    v11 += 2u * (2);
    TM3_DRAFT_U16(a1 + 24) = v12;
    v13 = TM3_DRAFT_U16(v11 - 4);
    v4 = v11 + 4;
    TM3_DRAFT_U16(a1 + 26) = v13;
    v14 = TM3_DRAFT_U16(v4 - 4);
    TM3_DRAFT_U32(a1 + 12) &= ~0x20u;
    TM3_DRAFT_U16(a1 + 28) = v14;
  }
  if ( (TM3_DRAFT_U32(a1 + 12) & 4) != 0 )
  {
    v4 += 2u * (2);
    v15 = TM3_DRAFT_U32(v4 - 4);
  }
  else
  {
    v15 = sub_80040388(v3);
  }
  if ( (TM3_DRAFT_U32(a1 + 12) & 0x10) != 0 )
    v15 = v15 - 128 + (sint32)sub_8005FA24(-1) % 256;
  if ( v15 <= 0 )
    v15 = 4096;
  v16 = 256;
  if ( (TM3_DRAFT_U32(a1 + 12) & 8) != 0 )
    v16 = TM3_DRAFT_U16(v4);
  TM3_DRAFT_U16(a1 + 42) = v16;
  v17 = TM3_DRAFT_U16(a1 + 24);
  TM3_DRAFT_U32(a1) = v3;
  TM3_DRAFT_U32(a1 + 8) = -1;
  v18 = TM3_DRAFT_U16(a1 + 26);
  v19 = TM3_DRAFT_U16(a1 + 28);
  TM3_DRAFT_U16(a1 + 16) = v17;
  TM3_DRAFT_U16(a1 + 18) = v18;
  TM3_DRAFT_U16(a1 + 20) = v19;
  TM3_DRAFT_U32(a1 + 32) = 0;
  if ( sub_800403A4(v3) )
  {
    TM3_DRAFT_U32(a1 + 36) = -1;
  }
  else
  {
    v20 = (sint32)(5326u * sub_800403C0(v3)) / v15;
    if ( TM3_DRAFT_U32(0x800D2F20u) == 2 )
      v21 = 20 * v20;
    else
      v21 = 30 * v20;
    TM3_DRAFT_U32(a1 + 36) = (v21 + 2048) >> 12;
  }
  TM3_DRAFT_U16(a1 + 40) = v15;
  return 1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002A940(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, ...)
{
    uint32 original_local_words[14];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8002A940u, "SCUS_942.49");
  int result; 
  int v19; 
  int v20; 
  uint32 v21; 
  int v22; 
  uint32 v23; 

  result = TM3_DRAFT_U32(a4) + 44 < (uint32)a6;
  if ( TM3_DRAFT_U32(a4) + 44 < (uint32)a6 )
  {
    v19 = sub_8005C3F4(
            a1,
            a1 + 8,
            a1 + 16,
            a1 + 24,
            TM3_DRAFT_U32(a4) + 8,
            TM3_DRAFT_U32(a4) + 16,
            TM3_DRAFT_U32(a4) + 24,
            TM3_DRAFT_U32(a4) + 32,
            (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 40u), sizeof(TM3_DRAFT_I32(original_local_address + 40u))) /* TODO: Local buffer adapter */,
            TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[3])psx_addr(original_local_address + 44u, sizeof(int[3]))), sizeof((*(int (*)[3])psx_addr(original_local_address + 44u, sizeof(int[3]))))) /* TODO: Local buffer adapter */);
    result = v19 < 9;
    if ( v19 >= 9 )
    {
      v20 = 0u - ((a7 - v19) & ((a7 - v19) >> 31));
      if ( v20 >= TM3_DRAFT_U32(0x80089DD0u) )
        v20 = TM3_DRAFT_U32(0x80089DD0u) - 1;
      TM3_DRAFT_U32(TM3_DRAFT_U32(a4) + 4) = TM3_DRAFT_U32(a2);
      TM3_DRAFT_U32(TM3_DRAFT_U32(a4) + 12) = TM3_DRAFT_U32(a2 + 4u * (1));
      TM3_DRAFT_U32(TM3_DRAFT_U32(a4) + 20) = TM3_DRAFT_U32(a2 + 4u * (2));
      TM3_DRAFT_U32(TM3_DRAFT_U32(a4) + 28) = TM3_DRAFT_U32(a2 + 4u * (3));
      TM3_DRAFT_U8(TM3_DRAFT_U32(a4) + 3) = 8;
      TM3_DRAFT_U8(TM3_DRAFT_U32(a4) + 7) = 56;
      if ( a5 )
      {
        v21 = (uint32)(4 * v20 + a3);
        TM3_DRAFT_U8(TM3_DRAFT_U32(a4) + 7) |= 2u;
        TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) & 0xFF000000 | TM3_DRAFT_U32(v21) & 0xFFFFFF;
        TM3_DRAFT_U32(v21) = TM3_DRAFT_U32(v21) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
        v22 = TM3_DRAFT_U32(a4) + 36;
        TM3_DRAFT_U32(a4) = v22;
        sub_8005AEF4(v22, 0, TM3_DRAFT_U32(0x800D2EF0u), 32);
        TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) & 0xFF000000 | TM3_DRAFT_U32(v21) & 0xFFFFFF;
        TM3_DRAFT_U32(v21) = TM3_DRAFT_U32(v21) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
        result = TM3_DRAFT_U32(a4) + 8;
      }
      else
      {
        v23 = (uint32)(4 * v20 + a3);
        TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) & 0xFF000000 | TM3_DRAFT_U32(v23) & 0xFFFFFF;
        TM3_DRAFT_U32(v23) = TM3_DRAFT_U32(v23) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
        result = TM3_DRAFT_U32(a4) + 36;
      }
      TM3_DRAFT_U32(a4) = result;
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80064DB0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80064DB0u, "SCUS_942.49");
  sint16 v4; 
  int v5; 
  int v6; 
  uint32 v7; 
  uint32 v8; 
  int result; 
  int v10; 
  int v11; 

  v4 = 136;
  if ( (int)TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 60)) >> 4 == 8 && TM3_DRAFT_U8(a1 + 68) >= 9u )
    v4 = 34;
  while ( (TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 4) & 2) == 0 )
    ;
  sub_8006760C(400);
  v5 = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80087E10u));
  if ( !TM3_DRAFT_U8(a1 + 68) &TM3_DRAFT_LOCAL_ADDRESS(&v5, sizeof(v5)) /* TODO: Local buffer adapter */ >> 4 == 8 )
    TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 14) = 34;
  else
    TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 14) = v4;
  while ( (TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) & 0x80) == 0 )
  {
    v6 = TM3_DRAFT_U16(0x1F801120u);
    if ( (uint32)TM3_DRAFT_U16(0x1F801120u) < TM3_DRAFT_U32(0x800D8E98u) )
    {
      if ( TM3_DRAFT_U16(0x1F801128u) )
        v6 = TM3_DRAFT_U16(0x1F801128u) + TM3_DRAFT_U16(0x1F801120u);
      else
        v6 = TM3_DRAFT_U16(0x1F801120u) + 0x10000;
    }
    v7 = v6 - TM3_DRAFT_U32(0x800D8E98u);
    if ( (TM3_DRAFT_U16(0x1F801124u) & 0x200) != 0 )
    {
      v8 = v7 < TM3_DRAFT_U32(0x800D8E9Cu);
      result = -2;
      if ( !v8 )
        return result;
    }
    else
    {
      v8 = v7 >> 3 >= TM3_DRAFT_U32(0x800D8E9Cu);
      result = -2;
      if ( v8 )
        return result;
    }
  }
  if ( TM3_DRAFT_U8(a1 + 232) != 8 && TM3_DRAFT_U32(0x80087DF0u) == 2 )
  {
    sub_8006760C(60);
    while ( !sub_8006762C() )
      ;
  }
  TM3_DRAFT_U8(TM3_DRAFT_U32(0x80087E10u)) = a2;
  if ( TM3_DRAFT_U32(0x80087DF0u) == 3 &TM3_DRAFT_LOCAL_ADDRESS(&v5, sizeof(v5)) /* TODO: Local buffer adapter */ == 128 )
  {
    v10 = TM3_DRAFT_U32(0x80087E10u);
    TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) = -129;
    TM3_DRAFT_U16(v10 + 10) |= 0x10u;
  }
  v11 = TM3_DRAFT_U8(a1 + 68);
  ++TM3_DRAFT_U8(a1 + 69);
  if ( v11 != 255 )
    TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 60) + TM3_DRAFT_U8(a1 + 68)) = v5;
  result = v5;
  ++TM3_DRAFT_U8(a1 + 68);
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800337F4(uint32 a1)
{
    FUNCTION_MARKER(0x800337F4u, "SCUS_942.49");
  int v2; 
  uint32 v3; 
  int v4; 
  sint16 v5; 
  uint32 v6; 
  sint16 v7; 
  uint32 v8; 
  int v9; 

  uint32 v10; /* Guest callback address */ 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int result; 

  v2 = 0;
  v3 = 0x8007E130u;
  v4 = a1;
  do
  {
    v5 = -1;
    if ( TM3_DRAFT_U8(a1 + 3328) == 1 && (v2 == 3 || v2 >= 10 || (v6 = sub_80048078(7) != 0, v5 = 99, !v6)) )
      TM3_DRAFT_U16(v4 + 4120) = TM3_DRAFT_U8(v3 + 8);
    else
      TM3_DRAFT_U16(v4 + 4120) = v5;
    TM3_DRAFT_U16(v4 + 4122) = TM3_DRAFT_U8(v3 + 10);
    v7 = TM3_DRAFT_U8(v3 + 11);
    ++v2;
    TM3_DRAFT_U16(v4 + 4126) = 0;
    TM3_DRAFT_U32(v4 + 4128) = 0;
    TM3_DRAFT_U16(v4 + 4124) = v7;
    v8 = TM3_DRAFT_U32(v3 + 4u * (4));
    v3 += 4u * (5);
    TM3_DRAFT_U32(v4 + 4132) = v8;
    v4 += 16;
  }
  while ( v2 < 15 );
  v9 = a1 + 240;
  do
  {
    if ( TM3_DRAFT_U8(a1 + 3328) == 1 )
      TM3_DRAFT_U16(v9 + 4120) = TM3_DRAFT_U16(4 * TM3_DRAFT_U32(a1 + 3928) - 2146916176);
    else
      TM3_DRAFT_U16(v9 + 4120) = -1;
    TM3_DRAFT_U32(v9 + 4128) = 0;
    v10 = TM3_DRAFT_U32(0x8007E510u + 4u * (TM3_DRAFT_U32(a1 + 3928)));
    TM3_DRAFT_U16(v9 + 4124) = 0;
    TM3_DRAFT_U16(v9 + 4126) = 0;
    TM3_DRAFT_U32(v9 + 4132) = v10;
    v9 += 16;
  }
  while ( v9 < a1 + 256 );
  v11 = TM3_DRAFT_U32(4 * TM3_DRAFT_U32(a1 + 3928) - 2146915688);
  TM3_DRAFT_U16(a1 + 4104) = 0;
  TM3_DRAFT_U16(a1 + 4106) = (uint32)(30 * v11 + 2048) >> 12;
  if ( sub_80048078(8) )
  {
    v12 = 23;
    v13 = -2146915690;
    do
    {
      TM3_DRAFT_U16(v13) = 1;
      --v12;
      v13 -= 2;
    }
    while ( v12 >= 0 );
  }
  if ( sub_80048078(9) )
  {
    v14 = 15;
    v15 = -2146915628;
    do
    {
      TM3_DRAFT_U32(v15) = 4096;
      --v14;
      v15 -= 4;
    }
    while ( v14 >= 0 );
  }
  if ( sub_80048078(13) )
  {
    TM3_DRAFT_U32(0x8007E33Cu) = (uint32)0x8002EAE0u;
    TM3_DRAFT_U16(0x8008A9BEu) = TM3_DRAFT_U16(0x8008A9B2u);
  }
  v6 = sub_80048078(16) == 0;
  result = 99;
  if ( !v6 )
    TM3_DRAFT_U16(a1 + 4168) = 99;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002A72C(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, ...)
{
    uint32 original_local_words[14];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8002A72Cu, "SCUS_942.49");
  int result; 
  int v20; 
  int v21; 
  uint32 v22; 

  result = TM3_DRAFT_U32(a5) + 48 < (uint32)a7;
  if ( TM3_DRAFT_U32(a5) + 48 < (uint32)a7 )
  {
    v20 = sub_8005C3F4(
            a1,
            a1 + 8,
            a1 + 16,
            a1 + 24,
            TM3_DRAFT_U32(a5) + 8,
            TM3_DRAFT_U32(a5) + 16,
            TM3_DRAFT_U32(a5) + 24,
            TM3_DRAFT_U32(a5) + 32,
            (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 40u), sizeof(TM3_DRAFT_I32(original_local_address + 40u))) /* TODO: Local buffer adapter */,
            TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[3])psx_addr(original_local_address + 44u, sizeof(int[3]))), sizeof((*(int (*)[3])psx_addr(original_local_address + 44u, sizeof(int[3]))))) /* TODO: Local buffer adapter */);
    result = v20 < 9;
    if ( v20 >= 9 )
    {
      v21 = (sint32)(0u - ((a8 - (uint32)v20) & (uint32)((sint32)(a8 - (uint32)v20) >> 31)));
      if ( v21 >= TM3_DRAFT_I32(0x80089DD0u) )
        v21 = TM3_DRAFT_U32(0x80089DD0u) - 1;
      TM3_DRAFT_U32(TM3_DRAFT_U32(a5) + 4) = a2;
      TM3_DRAFT_U32(TM3_DRAFT_U32(a5) + 12) = TM3_DRAFT_U32(a3);
      TM3_DRAFT_U32(TM3_DRAFT_U32(a5) + 20) = TM3_DRAFT_U32(a3 + 4);
      TM3_DRAFT_U16(TM3_DRAFT_U32(a5) + 28) = TM3_DRAFT_U16(a3 + 8);
      TM3_DRAFT_U16(TM3_DRAFT_U32(a5) + 36) = TM3_DRAFT_U16(a3 + 10);
      TM3_DRAFT_U8(TM3_DRAFT_U32(a5) + 3) = 9;
      TM3_DRAFT_U8(TM3_DRAFT_U32(a5) + 7) = 44;
      if ( a6 )
      {
        TM3_DRAFT_U16(TM3_DRAFT_U32(a5) + 22) &= 0xFF9Fu;
        if ( a6 != 4 )
          TM3_DRAFT_U16(TM3_DRAFT_U32(a5) + 22) |= 32 * (uint16)a6;
        v22 = (uint32)(4 * v21 + a4);
        TM3_DRAFT_U8(TM3_DRAFT_U32(a5) + 7) |= 2u;
      }
      else
      {
        v22 = (uint32)(4 * v21 + a4);
      }
      TM3_DRAFT_U32(TM3_DRAFT_U32(a5)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a5)) & 0xFF000000 | TM3_DRAFT_U32(v22) & 0xFFFFFF;
      TM3_DRAFT_U32(v22) = TM3_DRAFT_U32(v22) & 0xFF000000 | TM3_DRAFT_U32(a5) & 0xFFFFFF;
      result = TM3_DRAFT_U32(a5) + 40;
      TM3_DRAFT_U32(a5) = result;
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800408DC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800408DCu, "SCUS_942.49");
  int v3; 
  uint32 v4; 
  int v5; 
  int v6; 
  int v7; 
  uint32 v8; 
  int v9; 
  uint32 v10; 
  uint32 v11; 
  uint32 v12; 
  uint32 v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  sint16 v18; 
  int v19; 

  v3 = a2;
  v4 = 0;
  v5 = TM3_DRAFT_U16(a1 + 18);
  v6 = 0;
  v7 = TM3_DRAFT_U16(a1 + 22);
  v5 <<= 9;
  v8 = v5 + 2592 + a1;
  v9 = v5 + a1;
  v10 = (uint32)(v9 + 2082);
  if ( v7 )
  {
    v11 = (uint32)(v9 + 2082);
    do
    {
      ++v6;
      v4 += 8 * TM3_DRAFT_U16(v11);
      v11 += 2u;
    }
    while ( v6 < v7 );
  }
  if ( a2 )
    v12 = TM3_DRAFT_U32(16 * (a2 - 1) - 2146623512) + 8 * TM3_DRAFT_U32(16 * (a2 - 1) - 2146623512 + 12);
  else
    v12 = 4112;
  sub_800617C4(v12);
  sub_80061764(v8, v4);
  v14 = 0;
  v15 = 0;
  if ( TM3_DRAFT_U16(a1 + 22) )
  {
    do
    {
      v16 = 16 * v3 - 2146623512;
      TM3_DRAFT_U32(v16) = v12 + v14;
      v14 += 8 * TM3_DRAFT_U16(v10);
      v17 = TM3_DRAFT_U8((v15 << 9) + a1 + 2084);
      if ( v17 == 48 )
      {
        v18 = 981;
      }
      else
      {
        v18 = 1308;
        if ( v17 == 60 )
          v18 = 1962;
      }
      TM3_DRAFT_U16(v16 + 4) = v18;
      TM3_DRAFT_U32(16 * v3 - 2146623512 + 8) = sub_80056884((uint32)(v8 + v14 - 15), 0x80088210u, 15)
                                           && sub_80056884((uint32)(v8 + v14 - 15), 0x80088220u, 15);
      v19 = TM3_DRAFT_U16(v10);
      v10 += 2u;
      TM3_DRAFT_U32(16 * v3 - 2146623512 + 12) = v19;
      ++v15;
      ++v3;
    }
    while ( v15 < TM3_DRAFT_U16(a1 + 22) );
  }
  do
    sub_8005FA24(0);
  while ( !sub_80061854(0) );
  return TM3_DRAFT_I16(a1 + 22);
}


/* Unverified draft; TODO items require later review */
uint32 sub_800161A4(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800161A4u, "SCUS_942.49");
  int v7; 
  int result; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 

  if ( !TM3_DRAFT_U8(a2 + 2) )
  {
    v12 = TM3_DRAFT_I16(a2 + 4);
    v13 = 0x10000 >> TM3_DRAFT_U8(a2 + 3);
    if ( (sint16)a3 >= v12 && (sint16)a3 < v12 + v13 )
    {
      v14 = TM3_DRAFT_I16(a2 + 6);
      if ( SHIWORD(a3) >= v14 )
      {
        result = a2;
        if ( SHIWORD(a3) < v14 + v13 )
          return result;
      }
    }
    goto LABEL_15;
  }
  v7 = TM3_DRAFT_U32(a1 + 36) + 28 * TM3_DRAFT_I16(a2 + 12);
  if ( v7 == a4 || (result = sub_800161A4(a1, v7, (uint16)a3 | (HIWORD(a3) << 16), 0)) == 0 )
  {
    v9 = TM3_DRAFT_U32(a1 + 36) + 28 * TM3_DRAFT_I16(a2 + 14);
    if ( v9 == a4 || (result = sub_800161A4(a1, v9, (uint16)a3 | (HIWORD(a3) << 16), 0)) == 0 )
    {
      v10 = TM3_DRAFT_U32(a1 + 36) + 28 * TM3_DRAFT_I16(a2 + 16);
      if ( v10 == a4 || (result = sub_800161A4(a1, v10, (uint16)a3 | (HIWORD(a3) << 16), 0)) == 0 )
      {
        v11 = TM3_DRAFT_U32(a1 + 36) + 28 * TM3_DRAFT_I16(a2 + 18);
        if ( v11 == a4 || (result = sub_800161A4(a1, v11, (uint16)a3 | (HIWORD(a3) << 16), 0)) == 0 )
        {
LABEL_15:
          v15 = TM3_DRAFT_I16(a2 + 10);
          if ( v15 >= 0 && a4 )
            return sub_800161A4(a1, TM3_DRAFT_U32(a1 + 36) + 28 * v15, (uint16)a3 | (HIWORD(a3) << 16), a2);
          else
            return 0;
        }
      }
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80039CCC(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    uint32 original_local_words[22];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    sint32 cpu_a0;
    uint32 cpu_v0;
    FUNCTION_MARKER(0x80039CCCu, "SCUS_942.49");
  int result; 
  sint16 v8; 
  int v10; 
  int v13; 

  result = TM3_DRAFT_U32(a3) + 40 < a4;
  if ( TM3_DRAFT_U32(a3) + 40 < a4 )
  {
    sub_8005B8D4();
    TM3_DRAFT_I16(original_local_address + 32u) = ((TM3_DRAFT_I16(a1 + 22) > 0) - TM3_DRAFT_I16(a1 + 22)) >> 1;
    (*(sint16 (*)[8])psx_addr(original_local_address + 16u, sizeof(sint16[8])))[0] = TM3_DRAFT_I16(original_local_address + 32u);
    (*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4])))[0] = TM3_DRAFT_I16(a1 + 22) / 2;
    (*(sint16 (*)[8])psx_addr(original_local_address + 16u, sizeof(sint16[8])))[4] = (*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4])))[0];
    v8 = TM3_DRAFT_U16(a1 + 14);
    (*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4])))[2] = 0;
    TM3_DRAFT_I16(original_local_address + 36u) = 0;
    (*(sint16 (*)[8])psx_addr(original_local_address + 16u, sizeof(sint16[8])))[6] = 0;
    (*(sint16 (*)[8])psx_addr(original_local_address + 16u, sizeof(sint16[8])))[2] = 0;
    (*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4])))[1] = 0;
    TM3_DRAFT_I16(original_local_address + 34u) = 0;
    (*(sint16 (*)[8])psx_addr(original_local_address + 16u, sizeof(sint16[8])))[5] = -v8;
    (*(sint16 (*)[8])psx_addr(original_local_address + 16u, sizeof(sint16[8])))[1] = -v8;
    sub_80014128(TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[5])psx_addr(original_local_address + 48u, sizeof(int[5]))), sizeof((*(int (*)[5])psx_addr(original_local_address + 48u, sizeof(int[5]))))) /* TODO: Local buffer adapter */);
    sub_8005C3C4(a1, TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[12])psx_addr(original_local_address + 68u, sizeof(char[12]))), sizeof((*(char (*)[12])psx_addr(original_local_address + 68u, sizeof(char[12]))))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[8])psx_addr(original_local_address + 80u, sizeof(char[8]))), sizeof((*(char (*)[8])psx_addr(original_local_address + 80u, sizeof(char[8]))))));
    sub_8005BD24( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[5])psx_addr(original_local_address + 48u, sizeof(int[5]))), sizeof((*(int (*)[5])psx_addr(original_local_address + 48u, sizeof(int[5]))))));
    sub_8005BDB4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[5])psx_addr(original_local_address + 48u, sizeof(int[5]))), sizeof((*(int (*)[5])psx_addr(original_local_address + 48u, sizeof(int[5]))))));
    cpu_v0 = TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[8])psx_addr(original_local_address + 16u, sizeof(sint16[8]))), sizeof((*(sint16 (*)[8])psx_addr(original_local_address + 16u, sizeof(sint16[8])))));
    v10 = TM3_DRAFT_U32(a3);
    xport_gte_write_data(0u, TM3_DRAFT_U32(cpu_v0 + 0u));
xport_gte_write_data(1u, TM3_DRAFT_U32(cpu_v0 + 4u));
xport_gte_write_data(2u, TM3_DRAFT_U32(cpu_v0 + 8u));
xport_gte_write_data(3u, TM3_DRAFT_U32(cpu_v0 + 0xCu));
xport_gte_write_data(4u, TM3_DRAFT_U32(cpu_v0 + 0x10u));
xport_gte_write_data(5u, TM3_DRAFT_U32(cpu_v0 + 0x14u));
xport_gte_execute(0x280030u);
    TM3_DRAFT_U32(v10 + 12) = TM3_DRAFT_U32(a1 + 32);
    TM3_DRAFT_U32(v10 + 20) = TM3_DRAFT_U32(a1 + 36);
    TM3_DRAFT_U32(cpu_v0 + 0u) = xport_gte_read_data(12u);
TM3_DRAFT_U32(cpu_v0 + 0u) = xport_gte_read_data(13u);
TM3_DRAFT_U32(cpu_v0 + 0u) = xport_gte_read_data(14u);
cpu_a0 = xport_gte_read_data(19u);
    cpu_v0 = TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4])))));
    xport_gte_write_data(0u, TM3_DRAFT_U32(cpu_v0 + 0u));
xport_gte_write_data(1u, TM3_DRAFT_U32(cpu_v0 + 4u));
xport_gte_execute(0x180001u);
    TM3_DRAFT_U16(v10 + 28) = TM3_DRAFT_U16(a1 + 40);
    TM3_DRAFT_U16(v10 + 36) = TM3_DRAFT_U16(a1 + 42);
    result = TM3_DRAFT_U16(a1 + 42u);
    if ( cpu_a0 > 0 )
    {
      TM3_DRAFT_U32(cpu_v0 + 0u) = xport_gte_read_data(14u);
      cpu_a0 = (cpu_a0 >> 2) - 24;
      if ( cpu_a0 < 0 )
        cpu_a0 = 0;
      result = cpu_a0 < TM3_DRAFT_I32(0x80089DD0u);
      if ( result )
      {
        cpu_a0 = 4 * cpu_a0 + a2;
        TM3_DRAFT_U32(v10 + 4) = TM3_DRAFT_U32(a1 + 28);
        v13 = v10 & 0xFFFFFF;
        result = TM3_DRAFT_U32(cpu_a0) & 0xFFFFFF | 0x9000000;
        TM3_DRAFT_U32(v10) = result;
        v10 += 40;
        TM3_DRAFT_U32(cpu_a0) = v13;
      }
    }
    sub_8005B978();
    TM3_DRAFT_U32(a3) = v10;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80054C60(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    FUNCTION_MARKER(0x80054C60u, "SCUS_942.49");
  int result; 
  int v15; 
  uint32 v16; 

  TM3_DRAFT_U32(0x80089EC0u + 4u * (0)) = 1;
  if ( TM3_DRAFT_U32(0x80089EC0u + 4u * (1)) )
  {
    if ( TM3_DRAFT_U32(0x80089EA0u + 4u * (3)) )
    {
      LOWORD(TM3_DRAFT_U32(0x80089EA0u + 4u * (2))) = 0;
      TM3_DRAFT_U32(0x80089EC0u + 4u * (1)) = 0;
    }
    else
    {
      sub_80056934(TM3_DRAFT_U16(0x80089ECCu));
      TM3_DRAFT_U32(0x80089EC0u + 4u * (1)) = 0;
      ++LOWORD(TM3_DRAFT_U32(0x80089EA0u + 4u * (2)));
      result = 17;
      if ( LOWORD(TM3_DRAFT_U32(0x80089EA0u + 4u * (2))) >= 0xAu )
      {
        LOWORD(TM3_DRAFT_U32(0x80089EA0u + 4u * (2))) = 0;
        TM3_DRAFT_U32(0x80089EC0u + 4u * (4)) = 0;
        TM3_DRAFT_U32(0x80089EC0u + 4u * (0)) = 0;
        LOWORD(TM3_DRAFT_U32(0x80089EA0u + 4u * (6))) = 0;
        return result;
      }
    }
    if ( TM3_DRAFT_U32(0x80089EC0u + 4u * (1)) )
      goto LABEL_12;
  }
  {
    uint32 transfer_buffer = a4;
    if (a5)
      transfer_buffer += (uint32)((sint32)TM3_DRAFT_I16(0x80089EB8u) * 128);
    sub_80056924();
    if ( a1 == 1 )
      v15 = sub_80056904(TM3_DRAFT_U16(0x80089ECCu), (a2 & 0xFFFFu) + TM3_DRAFT_I16(0x80089EB8u), transfer_buffer);
    else
      v15 = sub_80056914(TM3_DRAFT_U16(0x80089ECCu), (a2 & 0xFFFFu) + TM3_DRAFT_I16(0x80089EB8u), transfer_buffer);
  }
  TM3_DRAFT_U32(0x80089EA0u + 4u * (3)) = v15 == 0;
  TM3_DRAFT_U32(0x80089EC0u + 4u * (1)) = 1;
  v16 = v15 == 0;
  result = -1;
  if ( v16 )
  {
LABEL_12:
    TM3_DRAFT_U32(0x80089EC0u + 4u * (4)) = 0;
    return 17;
  }
  else
  {
    TM3_DRAFT_U32(0x80089EC0u + 4u * (4)) = 1;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80027E00(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    uint32 original_local_words[24];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80027E00u, "SCUS_942.49");
  int result; 
  int v17; 
  int v18; 
  uint32 v19; 
  int v20; 
  uint32 v21; 

  result = TM3_DRAFT_U32(a3) + 240 < a4;
  if ( TM3_DRAFT_U32(a3) + 240 < a4 )
  {
    v17 = 0;
    sub_8005B8D4();
    v18 = 4;
    do
    {
      HIWORD(TM3_DRAFT_I32(original_local_address + 40u)) = ((TM3_DRAFT_U8(a1 + 1) != 0) - TM3_DRAFT_U8(a1 + 1)) >> 1;
      HIWORD(TM3_DRAFT_I32(original_local_address + 32u)) = HIWORD(TM3_DRAFT_I32(original_local_address + 40u));
      TM3_DRAFT_I16(original_local_address + 48u) = HIWORD(TM3_DRAFT_I32(original_local_address + 40u));
      LOWORD(TM3_DRAFT_I32(original_local_address + 32u)) = HIWORD(TM3_DRAFT_I32(original_local_address + 40u));
      v19 = TM3_DRAFT_U8(a1 + 1);
      TM3_DRAFT_I16(original_local_address + 52u) = 0;
      LOWORD(TM3_DRAFT_U32(original_local_address + 44u)) = 0;
      LOWORD(TM3_DRAFT_I32(original_local_address + 36u)) = 0;
      TM3_DRAFT_I16(original_local_address + 50u) = v19 >> 1;
      LOWORD(TM3_DRAFT_I32(original_local_address + 40u)) = TM3_DRAFT_I16(original_local_address + 50u);
      sub_8005B614((uint32)a5, (uint32)(a1 + v18), TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 56u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 56u, sizeof(int[8]))))));
      sub_8005BD24( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 56u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 56u, sizeof(int[8]))))));
      sub_8005BDB4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 56u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 56u, sizeof(int[8]))))));
      v20 = sub_8005C364(
              (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */,
              (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 40u), sizeof(TM3_DRAFT_I32(original_local_address + 40u))) /* TODO: Local buffer adapter */,
              (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I16(original_local_address + 48u), sizeof(TM3_DRAFT_I16(original_local_address + 48u))) /* TODO: Local buffer adapter */,
              TM3_DRAFT_U32(a3) + 8,
              TM3_DRAFT_U32(a3) + 12,
              TM3_DRAFT_U32(a3) + 16,
              TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[4])psx_addr(original_local_address + 88u, sizeof(char[4]))), sizeof((*(char (*)[4])psx_addr(original_local_address + 88u, sizeof(char[4]))))) /* TODO: Local buffer adapter */,
              TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[4])psx_addr(original_local_address + 92u, sizeof(char[4]))), sizeof((*(char (*)[4])psx_addr(original_local_address + 92u, sizeof(char[4]))))) /* TODO: Local buffer adapter */);
      if ( v20 >= 21 )
      {
        v21 = v20 >= TM3_DRAFT_U32(0x80089DD0u);
        v20 *= 4;
        if ( !v21 )
        {
          v20 += a2;
          TM3_DRAFT_U32(TM3_DRAFT_U32(a3) + 4) = TM3_DRAFT_U32(a1 + 580);
          TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 3) = 4;
          TM3_DRAFT_U8(TM3_DRAFT_U32(a3) + 7) = 32;
          TM3_DRAFT_U32(TM3_DRAFT_U32(a3)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a3)) & 0xFF000000 | TM3_DRAFT_U32(v20) & 0xFFFFFF;
          TM3_DRAFT_U32(v20) = TM3_DRAFT_U32(v20) & 0xFF000000 | TM3_DRAFT_U32(a3) & 0xFFFFFF;
          TM3_DRAFT_U32(a3) += 20;
        }
      }
      ++v17;
      v18 += 48;
    }
    while ( v17 < 12 );
    sub_8005B978();
    /* Original loop comparison leaves V0 zero before PopMatrix */
    return 0u;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002FFAC(uint32 a1)
{
    uint32 original_local_words[18];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8002FFACu, "SCUS_942.49");
  uint32 v2; 
  sint16 v3; 
  sint16 v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  sint32 v14; 
  int v15; 
  uint32 v16; 
  uint32 v17; 
  int v18; 
  int result; 

  v2 = (uint32)(a1 + 44);
  v3 = TM3_DRAFT_U16(a1 + 46);
  v4 = TM3_DRAFT_U16(a1 + 48);
  TM3_DRAFT_U16(a1 + 36) = TM3_DRAFT_U16(a1 + 44);
  TM3_DRAFT_U16(a1 + 38) = v3;
  TM3_DRAFT_U16(a1 + 40) = v4;
  sub_800140C8(v2, 136, (uint32)(a1 + 52), v2);
  TM3_DRAFT_I16(original_local_address + 48u) = (TM3_DRAFT_I16(a1 + 36) + TM3_DRAFT_I16(a1 + 44)) / 2;
  v5 = TM3_DRAFT_I16(a1 + 38) + TM3_DRAFT_I16(a1 + 46);
  TM3_DRAFT_I16(original_local_address + 50u) = v5 / 2;
  v6 = TM3_DRAFT_I16(a1 + 40) + TM3_DRAFT_I16(a1 + 48);
  v7 = a1 - 20;
  TM3_DRAFT_I16(original_local_address + 52u) = v6 / 2;
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_I16(original_local_address + 48u);
  TM3_DRAFT_U16(v7 + 2) = v5 / 2;
  TM3_DRAFT_U16(v7 + 4) = v6 / 2;
  v8 = TM3_DRAFT_I16(a1 + 44);
  v9 = TM3_DRAFT_I16(a1 + 36);
  TM3_DRAFT_U32(a1 + 24) = TM3_DRAFT_I16(original_local_address + 48u);
  TM3_DRAFT_U32(a1 + 28) = TM3_DRAFT_I16(original_local_address + 50u);
  TM3_DRAFT_U32(a1 + 32) = TM3_DRAFT_I16(original_local_address + 52u);
  v10 = TM3_DRAFT_U16(v2 + 2u * (1));
  v11 = TM3_DRAFT_U16(v2 + 2u * (2));
  v12 = TM3_DRAFT_I16(a1 + 38);
  v13 = TM3_DRAFT_I16(a1 + 40);
  (*(int (*)[4])psx_addr(original_local_address + 56u, sizeof(int[4])))[0] = v8 - v9;
  (*(int (*)[4])psx_addr(original_local_address + 56u, sizeof(int[4])))[1] = v10 - v12;
  (*(int (*)[4])psx_addr(original_local_address + 56u, sizeof(int[4])))[2] = v11 - v13;
  v14 = sub_80013D64(TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 56u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 56u, sizeof(int[4]))))) /* TODO: Local buffer adapter */);
  TM3_DRAFT_U32(a1 - 24) = TM3_DRAFT_U16(a1 + 72)
                       - ((TM3_DRAFT_U16(a1 + 72) - v14 / 2) & ((TM3_DRAFT_U16(a1 + 72) - v14 / 2) >> 31));
  if ( sub_80013484((uint32)(a1 + 36), (uint32)v2, 0, TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[6])psx_addr(original_local_address + 16u, sizeof(int[6]))), sizeof((*(int (*)[6])psx_addr(original_local_address + 16u, sizeof(int[6])))))) == 1 )
  {
    if ( TM3_DRAFT_I32(original_local_address + 40u) != -1 )
      sub_80012C20((TM3_DRAFT_U32(a1 + 60) + 2048) >> 12, TM3_DRAFT_I32(original_local_address + 40u), v2);
  }
  else
  {
    v15 = TM3_DRAFT_U32(a1 + 76);
    v16 = TM3_DRAFT_U16(a1 + 42);
    v17 = TM3_DRAFT_U32(a1 + 68);
    TM3_DRAFT_U16(a1 + 50) += 32;
    v18 = TM3_DRAFT_U32(a1 + 80);
    TM3_DRAFT_U32(a1 + 68) = v17 + 1;
    result = v18 - v15;
    TM3_DRAFT_U32(a1 + 80) = result;
    if ( v16 >= v17 )
      return result;
  }
  return sub_8004A570(a1);
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001F668(uint32 a1)
{
    uint32 original_local_words[12];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8001F668u, "SCUS_942.49");
  int v2; 
  int v3; 
  uint32 v4; 
  int v5; 
  uint32 v6; 
  uint32 i; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  sint16 v13; 
  sint16 v14; 
  int result; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 

  v2 = 0;
  v3 = 0;
  v4 = (uint32)(a1 + 12);
  v5 = a1 + 20;
  v6 = (uint32)(a1 + 32);
  for ( i = (uint32)(a1 + 4); ; i = (uint32)(a1 + 4) )
  {
    ++v3;
    if ( sub_80013484(i, v4, 1u, (original_local_address + 16u)) != 1 )
      break;
    v2 = 1;
    if ( v3 >= 4 )
    {
      v16 = TM3_DRAFT_I16(a1 + 8);
      TM3_DRAFT_U32(a1 + 20) = (uint32)(sint32)TM3_DRAFT_I16(a1 + 4) << 12u;
      v17 = TM3_DRAFT_I16(a1 + 6);
      TM3_DRAFT_U32(a1 + 28) = (uint32)v16 << 12u;
      TM3_DRAFT_U32(a1 + 24) = (uint32)v17 << 12u;
      v18 = TM3_DRAFT_U32(a1 + 24) + 2048;
      TM3_DRAFT_U16(a1 + 12) = (TM3_DRAFT_U32(a1 + 20) + 2048) >> 12;
      v19 = TM3_DRAFT_U32(a1 + 28);
      TM3_DRAFT_U16(v4 + 2u * (1)) = v18 >> 12;
      TM3_DRAFT_U16(v4 + 2u * (2)) = (v19 + 2048) >> 12;
      result = a1 + 32;
      TM3_DRAFT_U32(a1 + 32) = 0;
      TM3_DRAFT_U32(a1 + 36) = 0;
      TM3_DRAFT_U32(a1 + 40) = 0;
      return result;
    }
    v8 = (*(int (*)[3])psx_addr(original_local_address + 16u, sizeof(int[3])))[1];
    v9 = (*(int (*)[3])psx_addr(original_local_address + 16u, sizeof(int[3])))[2];
    TM3_DRAFT_U32(a1 + 20) = (*(int (*)[3])psx_addr(original_local_address + 16u, sizeof(int[3])))[0];
    TM3_DRAFT_U32(v5 + 8) = v9;
    TM3_DRAFT_U32(v5 + 4) = v8;
    v10 = TM3_DRAFT_U32(a1 + 24) + 2048;
    TM3_DRAFT_U16(a1 + 12) = (TM3_DRAFT_U32(a1 + 20) + 2048) >> 12;
    v11 = TM3_DRAFT_U32(a1 + 28);
    TM3_DRAFT_U16(v4 + 2u * (1)) = v10 >> 12;
    TM3_DRAFT_U16(v4 + 2u * (2)) = (v11 + 2048) >> 12;
    v12 = sub_80013A90(v6, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 28u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 28u, sizeof(sint16[4]))))));
    sub_800148DC(v6, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 28u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 28u, sizeof(sint16[4]))))), -v12, 12);
  }
  if ( v2 )
  {
    TM3_DRAFT_U16(a1 + 92) = 1;
    v13 = (*(sint16 (*)[4])psx_addr(original_local_address + 28u, sizeof(sint16[4])))[1];
    v14 = (*(sint16 (*)[4])psx_addr(original_local_address + 28u, sizeof(sint16[4])))[2];
    TM3_DRAFT_U16(a1 + 84) = (*(sint16 (*)[4])psx_addr(original_local_address + 28u, sizeof(sint16[4])))[0];
    TM3_DRAFT_U16(a1 + 86) = v13;
    TM3_DRAFT_U16(a1 + 88) = v14;
    result = TM3_DRAFT_U8(original_local_address + 36u);
    TM3_DRAFT_U8(a1 + 95) = TM3_DRAFT_U8(original_local_address + 36u);
  }
  else
  {
    result = a1 + 84;
    TM3_DRAFT_U16(a1 + 92) = 0;
    TM3_DRAFT_U16(a1 + 84) = 0;
    TM3_DRAFT_U16(a1 + 86) = 0;
    TM3_DRAFT_U16(a1 + 88) = 0;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800138A0(uint32 triangle, uint32 segment)
{
    FUNCTION_MARKER(0x800138A0u, "SCUS_942.49");
    uint32 origin[3], displacement[3], endpoint[3];
    sint32 normal[3];
    uint64 denominator = 0u;
    for (uint32 axis = 0u; axis < 3u; ++axis)
    {
        origin[axis] = TM3_DRAFT_U32(segment + axis * 4u);
        displacement[axis] = TM3_DRAFT_U32(segment + 12u + axis * 4u);
        endpoint[axis] = origin[axis] + displacement[axis];
        normal[axis] = TM3_DRAFT_I32(triangle + axis * 4u);
        denominator += (uint64)((sint64)(sint32)displacement[axis] * normal[axis]);
    }
    if ((sint64)denominator >= 0)
        return 0xffffffffu;
    uint64 numerator = 0u;
    for (uint32 axis = 0u; axis < 3u; ++axis)
    {
        uint32 distance = (uint32)(sint32)TM3_DRAFT_I16(triangle + 12u + axis * 2u) - origin[axis];
        numerator += (uint64)((sint64)(sint32)distance * normal[axis]);
    }
    if ((sint64)numerator > 0 || (sint64)numerator < (sint64)denominator)
        return 0xffffffffu;
    sint32 edges = TM3_DRAFT_I16(triangle + 18u);
    for (;;)
    {
        for (uint32 axis = 0u; axis < 3u; ++axis)
        {
            uint32 vertex = (uint32)(sint32)TM3_DRAFT_I16(triangle + 12u + axis * 2u);
            xport_gte_write_control(axis * 2u, endpoint[axis] - vertex);
        }
        for (uint32 axis = 0u; axis < 3u; ++axis)
        {
            uint32 vertex = (uint32)(sint32)TM3_DRAFT_I16(triangle + 12u + axis * 2u);
            xport_gte_write_data(9u + axis, origin[axis] - vertex);
        }
        xport_gte_execute(0x170000cu);
        uint32 mac[3] = {xport_gte_read_data(25u), xport_gte_read_data(26u), xport_gte_read_data(27u)};
        uint64 edge_dot = 0u;
        for (uint32 axis = 0u; axis < 3u; ++axis)
            edge_dot += (uint64)((sint64)(sint32)mac[axis] * TM3_DRAFT_I16(triangle + 44u + axis * 2u));
        edges = (sint32)((uint32)edges - 1u);
        if ((sint64)edge_dot < 0)
            return 0xffffffffu;
        triangle += 8u;
        if (edges <= 0)
        {
            uint64 scaled = numerator << 12u;
            return sub_80062664((uint32)scaled, (uint32)(scaled >> 32u),
                (uint32)denominator, (uint32)(denominator >> 32u));
        }
    }
}

/* Unverified draft; TODO items require later review */
uint32 sub_8001A1C8(uint32 a1)
{
    FUNCTION_MARKER(0x8001A1C8u, "SCUS_942.49");
  sint16 v2; 
  int v3; 
  int v4; 
  int v5; 
  sint16 v6; 
  int v7; 
  sint32 v8; 
  sint32 v9; 
  int v10; 
  int v11; 
  int v12; 
  sint16 v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int result; 

  v2 = TM3_DRAFT_U16(TM3_DRAFT_U32(a1 + 4040) + 88) * (TM3_DRAFT_U32(a1 + 1556) - TM3_DRAFT_U16(a1 + 3348));
  v3 = TM3_DRAFT_I16(a1 + 3350);
  v4 = TM3_DRAFT_U32(a1 + 4040);
  TM3_DRAFT_U16(a1 + 3352) = TM3_DRAFT_U16(a1 + 1556) + v2;
  v5 = TM3_DRAFT_I16(v4 + 88) * (TM3_DRAFT_U32(a1 + 1564) - v3);
  TM3_DRAFT_U16(a1 + 3348) = TM3_DRAFT_U16(a1 + 1556);
  TM3_DRAFT_U16(a1 + 3368) = TM3_DRAFT_U16(a1 + 3352) - TM3_DRAFT_U16(a1 + 3348);
  v6 = v5;
  v7 = TM3_DRAFT_I16(a1 + 3368) * TM3_DRAFT_I16(a1 + 3368);
  LOWORD(v4) = TM3_DRAFT_U16(a1 + 1564);
  TM3_DRAFT_U16(a1 + 3350) = v4;
  TM3_DRAFT_U16(a1 + 3354) = v4 + v6;
  LOWORD(v4) = v4 + v6 - TM3_DRAFT_U16(a1 + 3350);
  TM3_DRAFT_U16(a1 + 3370) = v4;
  v8 = sub_8005B124(v7 + (sint16)v4 * (sint16)v4);
  v9 = v8;
  if ( v8 )
  {
    v10 = (TM3_DRAFT_I16(a1 + 3368) << 12) / v8;
    v11 = TM3_DRAFT_I16(a1 + 3370) << 12;
    TM3_DRAFT_U16(a1 + 3368) = v10;
    TM3_DRAFT_U16(a1 + 3370) = v11 / v9;
  }
  else
  {
    TM3_DRAFT_U16(a1 + 3368) = 0;
    TM3_DRAFT_U16(a1 + 3370) = 0;
  }
  v12 = TM3_DRAFT_U32(a1 + 1560);
  v13 = TM3_DRAFT_U16(a1 + 3386);
  TM3_DRAFT_U16(a1 + 3392) = v9;
  TM3_DRAFT_U16(a1 + 3376) = 0;
  TM3_DRAFT_U16(a1 + 3378) = 0;
  TM3_DRAFT_U16(a1 + 3388) = v13;
  v14 = sub_80015F2C(v12);
  if ( v14 == TM3_DRAFT_U32(a1 + 3396) )
  {
    v15 = v14;
    v16 = TM3_DRAFT_U32(a1 + 3400);
    v17 = TM3_DRAFT_U16(a1 + 3350);
    v18 = TM3_DRAFT_U16(a1 + 3348);
    TM3_DRAFT_U32(a1 + 3396) = v15;
    v19 = sub_800161A4(v15, v16, v18 | (v17 << 16), 999);
    v20 = TM3_DRAFT_I16(a1 + 3388);
    v21 = a1;
  }
  else
  {
    TM3_DRAFT_U32(a1 + 3396) = v14;
    v19 = sub_800161A4(
            v14,
            TM3_DRAFT_U32(v14 + 36),
            TM3_DRAFT_U16(a1 + 3348) | (TM3_DRAFT_U16(a1 + 3350) << 16),
            999);
    v21 = a1;
    v20 = -1;
  }
  TM3_DRAFT_U32(a1 + 3400) = v19;
  TM3_DRAFT_U16(a1 + 3386) = sub_80019E68( v21, v20);
  result = (TM3_DRAFT_U32(a1 + 4092) << 12) / TM3_DRAFT_U32(a1 + 4096);
  TM3_DRAFT_U16(a1 + 3344) = result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800294B8(uint32 a1)
{
    uint32 original_local_words[9];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x800294B8u, "SCUS_942.49");
  uint32 v2; 
  int result; 
  sint16 v4; 
  sint16 v5; 
  sint16 v6; 
  sint16 v7; 
  sint16 v8; 
  sint16 v9; 
  int v10; 
  sint16 v11; 
  sint16 v12; 

  v2 = TM3_DRAFT_U32(a1 + 24);
  if ( !sub_800470DC((int)v2) )
    return 0;
  v4 = TM3_DRAFT_U16(v2 + 6184);
  v5 = TM3_DRAFT_U16(v2 + 6208);
  TM3_DRAFT_U16(a1) = TM3_DRAFT_U16(v2 + 6160);
  TM3_DRAFT_U16(a1 + 2) = v4;
  TM3_DRAFT_U16(a1 + 4) = v5;
  v6 = TM3_DRAFT_U16(TM3_DRAFT_U32(v2) + 30);
  v7 = TM3_DRAFT_U16(TM3_DRAFT_U32(v2) + 32);
  TM3_DRAFT_I16(original_local_address + 16u) = TM3_DRAFT_U16(TM3_DRAFT_U32(v2) + 28);
  TM3_DRAFT_I16(original_local_address + 18u) = v6;
  TM3_DRAFT_I16(original_local_address + 20u) = v7 - 8 + (sub_80039FD4() & 0xF);
  sub_8005BB84(v2 + 1536, (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I16(original_local_address + 16u), sizeof(TM3_DRAFT_I16(original_local_address + 16u))) /* TODO: Local buffer adapter */, (uint32)(a1 + 8));
  TM3_DRAFT_U16(a1 + 8) += TM3_DRAFT_U16(v2 + 6224);
  TM3_DRAFT_U16(a1 + 10) += TM3_DRAFT_U16(v2 + 6240);
  TM3_DRAFT_U16(a1 + 12) += TM3_DRAFT_U16(v2 + 6256);
  v8 = TM3_DRAFT_U16(v2 + 6184);
  v9 = TM3_DRAFT_U16(v2 + 6208);
  TM3_DRAFT_I16(original_local_address + 16u) = TM3_DRAFT_U16(v2 + 6160);
  TM3_DRAFT_I16(original_local_address + 18u) = v8;
  TM3_DRAFT_I16(original_local_address + 20u) = v9;
  TM3_DRAFT_I32(original_local_address + 24u) = (TM3_DRAFT_U32(v2 + 4u * (602)) + TM3_DRAFT_U32(v2 + 4u * (574))) / 2;
  TM3_DRAFT_I32(original_local_address + 28u) = (TM3_DRAFT_U32(v2 + 4u * (603)) + TM3_DRAFT_U32(v2 + 4u * (575))) / 2;
  TM3_DRAFT_I32(original_local_address + 32u) = (TM3_DRAFT_U32(v2 + 4u * (604)) + TM3_DRAFT_U32(v2 + 4u * (576))) / 2;
  v10 = sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I16(original_local_address + 16u), sizeof(TM3_DRAFT_I16(original_local_address + 16u))) /* TODO: Local buffer adapter */);
  sub_80013FB4((int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */, ((v10 + 2048) >> 12) + 2400, TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I16(original_local_address + 16u), sizeof(TM3_DRAFT_I16(original_local_address + 16u))) /* TODO: Local buffer adapter */);
  v11 = TM3_DRAFT_I32(original_local_address + 28u);
  v12 = TM3_DRAFT_I32(original_local_address + 32u);
  result = 1;
  TM3_DRAFT_U16(a1 + 16) = TM3_DRAFT_I32(original_local_address + 24u);
  TM3_DRAFT_U16(a1 + 18) = v11;
  TM3_DRAFT_U16(a1 + 20) = v12;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800262D0(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800262D0u, "SCUS_942.49");
    for (uint32 axis = 0; axis < 3u; ++axis) {
        TM3_DRAFT_U16(a2 + 2u * axis) = 9999u;
        TM3_DRAFT_U16(a3 + 2u * axis) = (uint16)-9999;
    }
    uint32 model = TM3_DRAFT_U32(a1);
    sint32 result = TM3_DRAFT_I32(model);
    sint32 index = 0;
    uint32 record_offset = 36u;
    if (result <= 0) return (uint32)result;
    do {
        uint32 record = model + record_offset;
        sint32 vertex_index = 0;
        uint32 vertex = TM3_DRAFT_U32(a1 + 24u)
                      + ((uint32)(sint32)TM3_DRAFT_I16(record + 4u) << 3);
        if (TM3_DRAFT_I16(record + 6u) > 0) {
            do {
                sint16 point[3];
                for (uint32 axis = 0; axis < 3u; ++axis)
                    point[axis] = TM3_DRAFT_I16(vertex + 2u * axis);
                if (TM3_DRAFT_U8(record + 22u) != 0u) {
                    for (uint32 axis = 0; axis < 3u; ++axis)
                        point[axis] = (sint16)((sint32)point[axis]
                                      + TM3_DRAFT_I16(record + 16u + 2u * axis));
                }
                for (uint32 axis = 0; axis < 3u; ++axis) {
                    if (point[axis] < TM3_DRAFT_I16(a2 + 2u * axis))
                        TM3_DRAFT_U16(a2 + 2u * axis) = (uint16)point[axis];
                    if (TM3_DRAFT_I16(a3 + 2u * axis) < point[axis])
                        TM3_DRAFT_U16(a3 + 2u * axis) = (uint16)point[axis];
                }
                ++vertex_index;
                vertex += 8u;
            } while (vertex_index < TM3_DRAFT_I16(record + 6u));
        }
        model = TM3_DRAFT_U32(a1);
        ++index;
        result = index < TM3_DRAFT_I32(model);
        record_offset += 24u;
    } while (result != 0);
    return (uint32)result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001BF10(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8001BF10u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 t1; /* TODO: Review undefined incoming or temporary value */
    uint32 s0; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_8001BF10:;
    L_8001BF14:;
    L_8001BF18:;
    s0 = arg0 + 0u;
    L_8001BF1C:;
    arg2 = arg1 + 0u;
    L_8001BF20:;
    L_8001BF24:;
    arg1 = TM3_DRAFT_I16(s0 + (uint32)(3386));
    L_8001BF28:;
    L_8001BF2C:;
    {
        uint32 branch = (sint32)arg1 < 0;
        arg0 = s0 + (uint32)(3716);
        if (branch) goto L_8001C098;
    }
    L_8001BF34:;
    arg2 = arg2 << 16u;
    L_8001BF38:;
    arg2 = (uint32)((sint32)arg2 >> 16u);
    v0 = sub_80016EA8(arg0, arg1, arg2);
    L_8001BF40:;
    TM3_DRAFT_U8(s0 + (uint32)(3394)) = (uint8)v0;
    L_8001BF44:;
    v0 = v0 & 255u;
    L_8001BF48:;
    {
        uint32 branch = v0 == 0u;
        v0 = v0 < (uint32)(2);
        if (branch) goto L_8001C098;
    }
    L_8001BF50:;
    {
        uint32 branch = v0 != 0u;
        arg0 = 0x80090000u;
        if (branch) goto L_8001C06C;
    }
    L_8001BF58:;
    v1 = TM3_DRAFT_U16(s0 + (uint32)(3718));
    L_8001BF5C:;
    arg0 = TM3_DRAFT_U32(arg0 + (uint32)(-24832));
    L_8001BF60:;
    v0 = v1 << 3u;
    L_8001BF64:;
    v0 = v0 - v1;
    L_8001BF68:;
    v0 = v0 << 2u;
    L_8001BF6C:;
    v0 = v0 + arg0;
    L_8001BF70:;
    v0 = TM3_DRAFT_U16(v0 + (uint32)(0));
    L_8001BF74:;
    v1 = TM3_DRAFT_U16(s0 + (uint32)(3348));
    L_8001BF78:;
    L_8001BF7C:;
    v0 = v0 - v1;
    L_8001BF80:;
    TM3_DRAFT_U16(listing_local_address + 32u) = (uint16)v0;
    L_8001BF84:;
    v0 = v0 << 16u;
    L_8001BF88:;
    v0 = (uint32)((sint32)v0 >> 16u);
    L_8001BF8C:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001BF90:;
    v1 = TM3_DRAFT_U16(s0 + (uint32)(3718));
    L_8001BF94:;
    L_8001BF98:;
    v0 = v1 << 3u;
    L_8001BF9C:;
    v0 = v0 - v1;
    L_8001BFA0:;
    v0 = v0 << 2u;
    L_8001BFA4:;
    v0 = v0 + arg0;
    L_8001BFA8:;
    v1 = TM3_DRAFT_U16(v0 + (uint32)(2));
    L_8001BFAC:;
    v0 = TM3_DRAFT_U16(s0 + (uint32)(3350));
    L_8001BFB0:;
    L_8001BFB4:;
    v1 = v1 - v0;
    L_8001BFB8:;
    arg1 = lo;
    L_8001BFBC:;
    v0 = v1 << 16u;
    L_8001BFC0:;
    v0 = (uint32)((sint32)v0 >> 16u);
    L_8001BFC4:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001BFC8:;
    TM3_DRAFT_U16(listing_local_address + 34u) = (uint16)v1;
    L_8001BFCC:;
    t1 = lo;
    L_8001BFD0:;
    arg0 = arg1 + t1;
    v0 = sub_8005B124(arg0); /* TODO: Missing BIOS or SDK adapter */
    L_8001BFD8:;
    arg1 = v0 + 0u;
    L_8001BFDC:;
    {
        uint32 branch = arg1 == 0u;
        if (branch) goto L_8001C018;
    }
    L_8001BFE4:;
    v1 = TM3_DRAFT_I16(listing_local_address + 32u);
    L_8001BFE8:;
    L_8001BFEC:;
    v1 = v1 << 12u;
    L_8001BFF0:;
    /* TODO: Original divide-by-zero and signed overflow behavior */
    lo = (uint32)((sint32)v1 / (sint32)arg1);
    hi = (uint32)((sint32)v1 % (sint32)arg1);
    L_8001BFF4:;
    v1 = lo;
    L_8001BFF8:;
    v0 = TM3_DRAFT_I16(listing_local_address + 34u);
    L_8001BFFC:;
    L_8001C000:;
    v0 = v0 << 12u;
    L_8001C004:;
    /* TODO: Original divide-by-zero and signed overflow behavior */
    lo = (uint32)((sint32)v0 / (sint32)arg1);
    hi = (uint32)((sint32)v0 % (sint32)arg1);
    L_8001C008:;
    v0 = lo;
    L_8001C00C:;
    TM3_DRAFT_U16(listing_local_address + 24u) = (uint16)v1;
    L_8001C010:;
    TM3_DRAFT_U16(listing_local_address + 26u) = (uint16)v0;
    goto L_8001C020;
    L_8001C018:;
    TM3_DRAFT_U16(listing_local_address + 24u) = (uint16)0u;
    L_8001C01C:;
    TM3_DRAFT_U16(listing_local_address + 26u) = (uint16)0u;
    L_8001C020:;
    v0 = (sint32)arg1 < 8193;
    L_8001C024:;
    {
        uint32 branch = v0 != 0u;
        arg2 = s0 + (uint32)(3348);
        if (branch) goto L_8001C044;
    }
    L_8001C02C:;
    v0 = TM3_DRAFT_I16(listing_local_address + 24u);
    L_8001C030:;
    v1 = TM3_DRAFT_I16(listing_local_address + 26u);
    L_8001C034:;
    v0 = v0 << 1u;
    L_8001C038:;
    v1 = v1 << 1u;
    L_8001C03C:;
    TM3_DRAFT_U16(listing_local_address + 32u) = (uint16)v0;
    L_8001C040:;
    TM3_DRAFT_U16(listing_local_address + 34u) = (uint16)v1;
    L_8001C044:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)0u;
    L_8001C048:;
    arg0 = TM3_DRAFT_U32(s0 + (uint32)(3396));
    L_8001C04C:;
    arg1 = TM3_DRAFT_U32(s0 + (uint32)(3400));
    L_8001C050:;
    arg3 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 32, sizeof(local_bytes) - 32u) /* TODO: Local buffer adapter */;
    v0 = sub_800163A0(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_8001C058:;
    {
        uint32 branch = v0 != 0u;
        if (branch) goto L_8001C06C;
    }
    L_8001C060:;
    v0 = 0u + (uint32)(1);
    L_8001C064:;
    TM3_DRAFT_U8(s0 + (uint32)(3395)) = (uint8)v0;
    goto L_8001C070;
    L_8001C06C:;
    TM3_DRAFT_U8(s0 + (uint32)(3395)) = (uint8)0u;
    L_8001C070:;
    v0 = TM3_DRAFT_U8(s0 + (uint32)(3395));
    L_8001C074:;
    L_8001C078:;
    v0 = v0 << 1u;
    L_8001C07C:;
    v0 = s0 + v0;
    L_8001C080:;
    v0 = TM3_DRAFT_U16(v0 + (uint32)(3716));
    L_8001C084:;
    arg0 = s0 + 0u;
    L_8001C088:;
    TM3_DRAFT_U16(arg0 + (uint32)(3390)) = (uint16)v0;
    v0 = sub_8001C354(arg0);
    L_8001C090:;
    v0 = 0u + (uint32)(1);
    goto L_8001C09C;
    L_8001C098:;
    v0 = 0u + 0u;
    L_8001C09C:;
    L_8001C0A0:;
    L_8001C0A4:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80014510(uint32 triangle, uint32 segment, uint32 mode, uint32 output)
{
    FUNCTION_MARKER(0x80014510u, "SCUS_942.49");
    uint32 locals[10];
    uint32 local_address = TM3_DRAFT_LOCAL_ADDRESS(locals, sizeof(locals));
    uint32 normal = local_address + 16u;
    uint32 difference = local_address + 24u;
    uint32 fraction = sub_800138A0(triangle, segment);
    if ((sint32)fraction < 0)
        return 0xffffffffu;

    uint32 origin[3], displacement[3];
    for (uint32 axis = 0u; axis < 3u; ++axis)
    {
        origin[axis] = TM3_DRAFT_U32(segment + axis * 4u);
        displacement[axis] = TM3_DRAFT_U32(segment + 12u + axis * 4u);
    }
    TM3_DRAFT_U32(output + 4u) = (origin[1] << 12u) + displacement[1] * fraction;
    TM3_DRAFT_U32(output) = (origin[0] << 12u) + displacement[0] * fraction;
    TM3_DRAFT_U32(output + 8u) = (origin[2] << 12u) + displacement[2] * fraction;
    if (mode != 0u && mode < 3u)
    {
        /* Reload the segment after the original output writes */
        for (uint32 axis = 0u; axis < 3u; ++axis)
            locals[axis] = (TM3_DRAFT_U32(segment + axis * 4u)
                + TM3_DRAFT_U32(segment + 12u + axis * 4u)) << 12u;
        for (uint32 axis = 0u; axis < 3u; ++axis)
            locals[6u + axis] = TM3_DRAFT_U32(output + axis * 4u) - locals[axis];
        sub_800146A4(triangle, normal);
        uint32 correction = sub_80013A90(difference, normal);
        if (mode == 2u)
            correction <<= 1u;
        sub_800148DC(local_address, normal, correction + 6144u, 12u);
        TM3_DRAFT_U32(output) = locals[0];
        TM3_DRAFT_U32(output + 4u) = locals[1];
        TM3_DRAFT_U32(output + 8u) = locals[2];
    }
    return fraction;
}

/* Unverified draft; TODO items require later review */
uint32 sub_800239C0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    FUNCTION_MARKER(0x800239C0u, "SCUS_942.49");
  int result; 
  int v14; 
  int v15; 
  int v16; 
  uint32 v17; 
  int v18; 
  va_list va; 

  if ( TM3_DRAFT_U8(a1 + 3328) == 1 )
  {
    if ( sub_80048078(24) )
    {
      result = 1;
      if ( (sint32)a3 < TM3_DRAFT_I32(a1 + 4092) )
        return result;
    }
  }
  v14 = TM3_DRAFT_I32(a1 + 4092);
  result = 0;
  if ( v14 <= 0 )
    return result;
  v15 = (sint32)((uint32)v14 - a3);
  if ( TM3_DRAFT_U32(0x800D2F20u) != 2 )
  {
    TM3_DRAFT_U32(a1 + 4092) = v15;
    if ( v15 > 0 )
    {
      v16 = TM3_DRAFT_I32(a1 + 4092);
      goto LABEL_19;
    }
    if ( TM3_DRAFT_U32(0x800D2F18u) == 1 && TM3_DRAFT_U32(0x800D2F20u) == 1 && TM3_DRAFT_U32(a1 + 3920) < 2u )
      TM3_DRAFT_U32(a1 + 4092) = 1;
  }
  v16 = TM3_DRAFT_I32(a1 + 4092);
  if ( v16 <= 0 )
  {
    if ( a5 )
    {
      va_start(va, a5);
      sub_800416A0(TM3_DRAFT_U32(a1 + 3924), a5, TM3_DRAFT_LOCAL_ADDRESS(va, 4u));
      va_end(va);
    }
    if ( a4 )
      v17 = a4;
    else
      v17 = (uint32)(a1 + 1556);
    sub_80023628(a1, v17);
    return 0;
  }
LABEL_19:
  v18 = TM3_DRAFT_I32(a1 + 4096);
  if ( v18 < v16 )
    TM3_DRAFT_U32(a1 + 4092) = v18;
  sub_80025F14((uint32)a1);
  if ( a2 )
    sub_8001A5E8(a1, a2, a3);
  return 1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002E964(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8002E964u, "SCUS_942.49");
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  v4 = TM3_DRAFT_U32(a2 + 3684);
  if ( a1 != 1 )
  {
    v6 = TM3_DRAFT_U32(a2 + 1540);
    v7 = TM3_DRAFT_U32(a2 + 1544);
    v8 = TM3_DRAFT_U32(a2 + 1548);
    TM3_DRAFT_U32(a3) = TM3_DRAFT_U32(a2 + 1536);
    TM3_DRAFT_U32(a3 + 4) = v6;
    TM3_DRAFT_U32(a3 + 8) = v7;
    TM3_DRAFT_U32(a3 + 12) = v8;
    v9 = TM3_DRAFT_U32(a2 + 1556);
    v10 = TM3_DRAFT_U32(a2 + 1560);
    v11 = TM3_DRAFT_U32(a2 + 1564);
    TM3_DRAFT_U32(a3 + 16) = TM3_DRAFT_U32(a2 + 1552);
    TM3_DRAFT_U32(a3 + 20) = v9;
    TM3_DRAFT_U32(a3 + 24) = v10;
    TM3_DRAFT_U32(a3 + 28) = v11;
LABEL_5:
    if ( TM3_DRAFT_U8(a2 + 3328) == 1 )
      return v4;
    goto LABEL_6;
  }
  TM3_DRAFT_U16(a3) = -TM3_DRAFT_U16(a2 + 1536);
  TM3_DRAFT_U16(a3 + 6) = -TM3_DRAFT_U16(a2 + 1542);
  TM3_DRAFT_U16(a3 + 12) = -TM3_DRAFT_U16(a2 + 1548);
  TM3_DRAFT_U16(a3 + 2) = TM3_DRAFT_U16(a2 + 1538);
  TM3_DRAFT_U16(a3 + 8) = TM3_DRAFT_U16(a2 + 1544);
  TM3_DRAFT_U16(a3 + 14) = TM3_DRAFT_U16(a2 + 1550);
  TM3_DRAFT_U16(a3 + 4) = -TM3_DRAFT_U16(a2 + 1540);
  TM3_DRAFT_U16(a3 + 10) = -TM3_DRAFT_U16(a2 + 1546);
  TM3_DRAFT_U16(a3 + 16) = -TM3_DRAFT_U16(a2 + 1552);
  TM3_DRAFT_U32(a3 + 20) = TM3_DRAFT_U32(a2 + 1556);
  TM3_DRAFT_U32(a3 + 24) = TM3_DRAFT_U32(a2 + 1560);
  TM3_DRAFT_U32(a3 + 28) = TM3_DRAFT_U32(a2 + 1564);
  if ( TM3_DRAFT_U8(a2 + 3328) == 1 )
  {
    v4 = sub_8002D3B4(a2, a3);
    goto LABEL_5;
  }
LABEL_6:
  if ( !v4 )
  {
    v4 = sub_8002D3B4(a2, a3);
    if ( TM3_DRAFT_U8(v4 + 3328) == 2 )
      return 0;
  }
  return v4;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003DA08(uint32 a1)
{
    FUNCTION_MARKER(0x8003DA08u, "SCUS_942.49");
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  uint32 v8; 
  sint32 result; 

  v1 = a1;
  if ( TM3_DRAFT_U32(0x800D2E88u) <= 0 )
  {
    TM3_DRAFT_U32(0x80089DD0u) = 2048;
    v5 = TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 300);
    v6 = TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 302);
    TM3_DRAFT_U32(0x80089DACu + 4u * (4)) = 2200;
    TM3_DRAFT_U32(0x80089DACu + 4u * (6)) = v5;
    TM3_DRAFT_U32(0x80089DACu + 4u * (7)) = v6;
    a1 = v1;
  }
  else
  {
    v2 = ((TM3_DRAFT_U32(0x800D2E88u) - 2) & ((TM3_DRAFT_U32(0x800D2E88u) - 2) >> 31)) + 2;
    TM3_DRAFT_U32(0x80089DD0u) = 2048 / v2;
    TM3_DRAFT_U32(0x80089DACu + 4u * (4)) = 2200 / v2;
    if ( TM3_DRAFT_U32(0x800D2E88u) == 1 )
    {
      v3 = TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 300);
      v4 = TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 302);
    }
    else
    {
      v3 = TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 304);
      v4 = TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 306);
    }
    TM3_DRAFT_U32(0x80089DACu + 4u * (6)) = v3;
    TM3_DRAFT_U32(0x80089DACu + 4u * (7)) = v4;
  }
  v7 = 0;
  TM3_DRAFT_U32(0x80089DACu + 4u * (5)) = TM3_DRAFT_U32(0x80089DACu + 4u * (7));
  sub_8003CD8C(a1);
  v8 = (uint32)v1;
  do
  {
    sub_8003D0A8((int)v8);
    TM3_DRAFT_U32(v8 + 4u * (33230)) = (uint32)(v8 + 122680);
    TM3_DRAFT_U32(v8 + 4u * (33423)) = (uint32)(v8 + 132924);
    sub_80057C3C(v8 + 88, 2048);
    v8 += 4u * (36322);
    result = ++v7 < 2;
  }
  while ( v7 < 2 );
  TM3_DRAFT_U32(0x80089DACu + 4u * (1)) = v1;
  TM3_DRAFT_U32(0x80089DACu + 4u * (2)) = v1;
  TM3_DRAFT_U32(0x80089DACu + 4u * (3)) = 0;
  TM3_DRAFT_U32(0x80089DACu + 4u * (8)) = 0;
  return result;
}



