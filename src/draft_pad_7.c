#include "game_draft_support.h"
#include "game_draft_signatures.h"

/* Unverified draft; TODO items require later review */
uint32 sub_80053C40(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80053C40u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2 = a3;
    uint32 arg3 = a4;
    uint32 t0; /* TODO: Review undefined incoming or temporary value */
    uint32 s0; /* TODO: Review undefined incoming or temporary value */
    uint32 s1; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_80053C40:;
    L_80053C44:;
    t0 = arg2 + 0u;
    L_80053C48:;
    v1 = 0x00020000u;
    L_80053C4C:;
    v0 = 0x800d0000u;
    L_80053C50:;
    v0 = v0 + (uint32)(10424);
    L_80053C54:;
    arg3 = arg3 << 2u;
    L_80053C58:;
    arg3 = arg3 + v0;
    L_80053C5C:;
    L_80053C60:;
    L_80053C64:;
    L_80053C68:;
    s0 = TM3_DRAFT_U32(arg3 + (uint32)(24));
    L_80053C6C:;
    v1 = v1 | 3016u;
    L_80053C70:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)arg0;
    L_80053C74:;
    arg0 = arg0 + v1;
    L_80053C78:;
    v0 = 0u + (uint32)(24);
    L_80053C7C:;
    TM3_DRAFT_U32(listing_local_address + 24u) = (uint32)v0;
    L_80053C80:;
    v0 = 0u + (uint32)(1);
    L_80053C84:;
    v1 = 0x80080000u;
    L_80053C88:;
    v1 = v1 + (uint32)(-372);
    L_80053C8C:;
    arg1 = 0x80080000u;
    L_80053C90:;
    arg1 = arg1 + (uint32)(-4092);
    L_80053C94:;
    arg2 = 0u + (uint32)(300);
    L_80053C98:;
    TM3_DRAFT_U32(listing_local_address + 20u) = (uint32)arg0;
    L_80053C9C:;
    TM3_DRAFT_U32(listing_local_address + 28u) = (uint32)v0;
    L_80053CA0:;
    TM3_DRAFT_U32(listing_local_address + 32u) = (uint32)v0;
    L_80053CA4:;
    v0 = s0 << 2u;
    L_80053CA8:;
    v0 = v0 + v1;
    L_80053CAC:;
    arg0 = TM3_DRAFT_U32(v0 + (uint32)(0));
    L_80053CB0:;
    arg3 = t0 + 0u;
    v0 = sub_80049284(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 20u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 24u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 28u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 32u) /* TODO: Caller stack argument */);
    L_80053CB8:;
    v0 = 0x800d0000u;
    L_80053CBC:;
    v1 = TM3_DRAFT_U32(v0 + (uint32)(12064));
    L_80053CC0:;
    v0 = 0u + (uint32)(2);
    L_80053CC4:;
    {
        uint32 branch = v1 != v0;
        v1 = 0x800d0000u;
        if (branch) goto L_80053DA4;
    }
    L_80053CCC:;
    arg0 = TM3_DRAFT_U32(0x80089698u + (uint32)(1364));
    L_80053CD0:;
    v1 = v1 + (uint32)(7424);
    L_80053CD4:;
    v0 = arg0 << 1u;
    L_80053CD8:;
    v0 = v0 + arg0;
    L_80053CDC:;
    v0 = v0 << 3u;
    L_80053CE0:;
    v0 = v0 + v1;
    L_80053CE4:;
    v1 = TM3_DRAFT_U16(v0 + (uint32)(0));
    L_80053CE8:;
    L_80053CEC:;
    v0 = v1 & 2048u;
    L_80053CF0:;
    {
        uint32 branch = v0 != 0u;
        if (branch) goto L_80053D0C;
    }
    L_80053CF8:;
    v1 = 0x800d0000u;
    L_80053CFC:;
    v1 = v1 + (uint32)(7616);
    L_80053D00:;
    v0 = TM3_DRAFT_U32(v1 + (uint32)(92));
    L_80053D04:;
    v0 = v0 + (uint32)(25);
    goto L_80053D48;
    L_80053D0C:;
    v0 = v1 & 4u;
    L_80053D10:;
    {
        uint32 branch = v0 == 0u;
        if (branch) goto L_80053D2C;
    }
    L_80053D18:;
    v1 = 0x800d0000u;
    L_80053D1C:;
    v1 = v1 + (uint32)(7616);
    L_80053D20:;
    v0 = TM3_DRAFT_U32(v1 + (uint32)(92));
    L_80053D24:;
    v0 = v0 + (uint32)(25);
    goto L_80053D48;
    L_80053D2C:;
    v0 = v1 & 8u;
    L_80053D30:;
    {
        uint32 branch = v0 == 0u;
        v1 = 0x800d0000u;
        if (branch) goto L_80053D4C;
    }
    L_80053D38:;
    v1 = v1 + (uint32)(7616);
    L_80053D3C:;
    v0 = TM3_DRAFT_U32(v1 + (uint32)(92));
    L_80053D40:;
    L_80053D44:;
    v0 = v0 + (uint32)(-25);
    L_80053D48:;
    TM3_DRAFT_U32(v1 + (uint32)(92)) = (uint32)v0;
    L_80053D4C:;
    arg0 = 0x800d0000u;
    L_80053D50:;
    arg0 = arg0 + (uint32)(7616);
    L_80053D54:;
    v0 = 0x800d0000u;
    L_80053D58:;
    v0 = v0 + (uint32)(11912);
    L_80053D5C:;
    v1 = s0 << 2u;
    L_80053D60:;
    v1 = v1 + v0;
    L_80053D64:;
    s1 = 0u + (uint32)(1);
    L_80053D68:;
    arg1 = TM3_DRAFT_U32(v1 + (uint32)(1424));
    L_80053D6C:;
    v0 = 0u + (uint32)(4);
    L_80053D70:;
    TM3_DRAFT_U32(arg0 + (uint32)(96)) = (uint32)s1;
    L_80053D74:;
    TM3_DRAFT_U32(arg0 + (uint32)(100)) = (uint32)v0;
    L_80053D78:;
    TM3_DRAFT_U32(arg0 + (uint32)(104)) = (uint32)arg1;
    L_80053D7C:;
    s0 = TM3_DRAFT_U32(v1 + (uint32)(1424));
    L_80053D80:;
    v0 = 0u + (uint32)(15);
    L_80053D84:;
    arg0 = s0 + 0u;
    L_80053D88:;
    TM3_DRAFT_U32(s0 + (uint32)(3968)) = (uint32)v0;
    v0 = sub_80033CFC(arg0);
    L_80053D90:;
    {
        uint32 branch = v0 != 0u;
        if (branch) goto L_80053DA0;
    }
    L_80053D98:;
    TM3_DRAFT_U32(s0 + (uint32)(3952)) = (uint32)s1;
    goto L_80053DA4;
    L_80053DA0:;
    TM3_DRAFT_U32(s0 + (uint32)(3952)) = (uint32)0u;
    L_80053DA4:;
    L_80053DA8:;
    L_80053DAC:;
    L_80053DB0:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80040DC8(uint32 a1, uint32 a2)
{
    sint32 relative[3];
    sint16 direction[4];
    sint16 velocity[4];
    uint32 relative_address = TM3_DRAFT_LOCAL_ADDRESS(relative, sizeof(relative));
    uint32 direction_address = TM3_DRAFT_LOCAL_ADDRESS(direction, sizeof(direction));
    uint32 velocity_address = TM3_DRAFT_LOCAL_ADDRESS(velocity, sizeof(velocity));
    sint32 source_projection, listener_projection, denominator, numerator;
    uint32 ratio;
    unsigned i;
    FUNCTION_MARKER(0x80040DC8u, "SCUS_942.49");
    for (i = 0; i < 3; ++i)
        TM3_DRAFT_I32(relative_address + 4u * i) = (sint32)((uint32)(sint32)TM3_DRAFT_I16(a2 + 24u + 2u * i) - TM3_DRAFT_U32(a1 + 48u + 4u * i));
    sub_8005B240(relative_address, direction_address);
    for (i = 0; i < 3; ++i)
        TM3_DRAFT_I16(velocity_address + 2u * i) = (sint16)(TM3_DRAFT_I16(a2 + 24u + 2u * i) - TM3_DRAFT_I16(a2 + 16u + 2u * i));
    source_projection = (sint32)sub_80013E5C(velocity_address, direction_address);
    for (i = 0; i < 3; ++i)
        TM3_DRAFT_I16(velocity_address + 2u * i) = (sint16)(TM3_DRAFT_U32(a1 + 48u + 4u * i) - TM3_DRAFT_U32(a1 + 36u + 4u * i));
    listener_projection = (sint32)sub_80013E5C(velocity_address, direction_address);
    numerator = (sint32)(((uint32)listener_projection + 546u) << 12u);
    denominator = (sint32)((uint32)source_projection + 546u);
    ratio = (uint32)(numerator / denominator);
    if (ratio >= 0x2001u)
        return (uint32)(sint32)TM3_DRAFT_I16(a2 + 40u);
    return (uint32)((sint32)((uint32)(sint32)TM3_DRAFT_I16(a2 + 40u) * ratio + 2048u) >> 12u);
}

/* Unverified draft; TODO items require later review */
uint32 sub_80040238(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80040238u, "SCUS_942.49");
  int v6; 
  int v7; 
  int result; 
  int v9; 
  int v10; 
  int v11; 
  uint32 v12; 

  v6 = (uint32)(TM3_DRAFT_U32(a1 + 4) + 2048) >> 11;
  v7 = 0;
  do
  {
    while ( !sub_8005D4D0(2u, a1, 0) )
      sub_80040088();
    result = sub_8005F824(v6, a2, 128);
    v9 = v6;
    if ( !result )
      v7 = 1;
    v10 = 0;
    v11 = 0;
    if ( !v7 )
    {
      do
      {
        if ( !v9 )
          break;
        v9 = sub_8005F924(1, 0u);
        if ( v9 >= 0 )
          v10 = 4096 - (v9 << 12) / v6;
        else
          v7 = 1;
        sub_8005FA24(0);
        ++v11;
        if ( a3 )
          tm3_draft_indirect(a3, 1u, v10);
        result = v11 < 481;
        if ( v11 >= 481 )
          v7 = 1;
      }
      while ( !v7 );
      if ( !v7 )
        break;
    }
    result = sub_80040088();
    v12 = v7 != 0;
    v7 = 0;
  }
  while ( v12 );
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80030410(uint32 a1)
{
    uint32 original_local_words[7];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80030410u, "SCUS_942.49");
  int v2; 
  int result; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  sint16 v10; 
  sint16 v11; 
  int v12; 
  sint16 v13; 
  sint16 v14; 

  v2 = TM3_DRAFT_U32(a1 + 56);
  if ( !sub_800470DC(v2) )
    return 0;
  v4 = TM3_DRAFT_U32(v2 + 1540);
  v5 = TM3_DRAFT_U32(v2 + 1544);
  v6 = TM3_DRAFT_U32(v2 + 1548);
  TM3_DRAFT_U32(a1 + 24) = TM3_DRAFT_U32(v2 + 1536);
  TM3_DRAFT_U32(a1 + 28) = v4;
  TM3_DRAFT_U32(a1 + 32) = v5;
  TM3_DRAFT_U32(a1 + 36) = v6;
  v7 = TM3_DRAFT_U32(v2 + 1556);
  v8 = TM3_DRAFT_U32(v2 + 1560);
  v9 = TM3_DRAFT_U32(v2 + 1564);
  TM3_DRAFT_U32(a1 + 40) = TM3_DRAFT_U32(v2 + 1552);
  TM3_DRAFT_U32(a1 + 44) = v7;
  TM3_DRAFT_U32(a1 + 48) = v8;
  TM3_DRAFT_U32(a1 + 52) = v9;
  sub_80026B88(v2, 2, (uint32)(a1 + 8));
  v10 = TM3_DRAFT_U16(v2 + 1546);
  v11 = TM3_DRAFT_U16(v2 + 1552);
  TM3_DRAFT_U16(a1) = TM3_DRAFT_U16(v2 + 1540);
  TM3_DRAFT_U16(a1 + 2) = v10;
  TM3_DRAFT_U16(a1 + 4) = v11;
  TM3_DRAFT_I32(original_local_address + 16u) = (TM3_DRAFT_U32(v2 + 2408) + TM3_DRAFT_U32(v2 + 2296)) / 2;
  TM3_DRAFT_I32(original_local_address + 20u) = (TM3_DRAFT_U32(v2 + 2412) + TM3_DRAFT_U32(v2 + 2300)) / 2;
  TM3_DRAFT_I32(original_local_address + 24u) = (TM3_DRAFT_U32(v2 + 2416) + TM3_DRAFT_U32(v2 + 2304)) / 2;
  v12 = sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 16u), sizeof( TM3_DRAFT_I32(original_local_address + 16u))) /* TODO: Local buffer adapter */, (uint32)a1);
  sub_80013FB4((int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 16u), sizeof( TM3_DRAFT_I32(original_local_address + 16u))) /* TODO: Local buffer adapter */, ((v12 + 2048) >> 12) + 4000, (uint32)a1);
  v13 = TM3_DRAFT_I32(original_local_address + 20u);
  v14 = TM3_DRAFT_I32(original_local_address + 24u);
  result = 1;
  TM3_DRAFT_U16(a1 + 16) = TM3_DRAFT_I32(original_local_address + 16u);
  TM3_DRAFT_U16(a1 + 18) = v13;
  TM3_DRAFT_U16(a1 + 20) = v14;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80033D4C(uint32 a1, uint32 a2)
{
    uint32 original_local_words[8];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80033D4Cu, "SCUS_942.49");
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  uint32 v9; 
  int v10; 
  int v11; 
  int v12; 
  sint32 v13; 
  int v14; 
  int v15; 
  int v16; 
  int result; 

  v4 = sub_80048078(15);
  v5 = 0;
  if ( v4 )
  {
    v6 = TM3_DRAFT_U32(a2 + 4u * (2));
    TM3_DRAFT_U32(a2) *= 2;
    v7 = TM3_DRAFT_U32(a2 + 4u * (1));
    TM3_DRAFT_U32(a2 + 4u * (2)) = 2 * v6;
    TM3_DRAFT_U32(a2 + 4u * (1)) = 2 * v7;
  }
  v8 = 1592;
  do
  {
    v9 = (uint32)(a1 + v8);
    v8 += 112;
    ++v5;
    v10 = TM3_DRAFT_U32(v9 + 4u * (18));
    v11 = TM3_DRAFT_U32(a2 + 4u * (1));
    v12 = TM3_DRAFT_U32(v9 + 4u * (19)) + TM3_DRAFT_U32(a2 + 4u * (2));
    TM3_DRAFT_U32(v9 + 4u * (17)) += TM3_DRAFT_U32(a2);
    TM3_DRAFT_U32(v9 + 4u * (19)) = v12;
    TM3_DRAFT_U32(v9 + 4u * (18)) = v10 + v11;
  }
  while ( v5 < 8 );
  (*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[0] = (TM3_DRAFT_U32(a2) + 2048) >> 12;
  (*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[1] = (TM3_DRAFT_U32(a2 + 4u * (1)) + 2048) >> 12;
  (*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[2] = (TM3_DRAFT_U32(a2 + 4u * (2)) + 2048) >> 12;
  v13 = sub_80013D64(TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))) /* TODO: Local buffer adapter */);
  v14 = 1;
  v15 = 0;
  v16 = -2146916720;
  while ( v13 >= TM3_DRAFT_U32(v16) )
  {
    ++v15;
    v16 += 4;
    if ( v15 >= 6 )
      goto LABEL_9;
  }
  v14 = v15 + 1;
LABEL_9:
  result = 1;
  if ( TM3_DRAFT_U8(a1 + 3328) == 1 )
    return sub_80047364(TM3_DRAFT_U32(a1 + 3924), v14);
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800644C8(void)
{
    FUNCTION_MARKER(0x800644C8u, "SCUS_942.49");
  int v0; 

  if ( (TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 10) & 2) != 0 )
  {
    TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 10) = 0;
  }
  else
  {
    TM3_DRAFT_U32(0x80087E14u) = 1;
    if ( TM3_DRAFT_U32(0x80087DFCu) && TM3_DRAFT_U32(0x800D8488u) < 150 )
      ++TM3_DRAFT_U32(0x800D8488u);
    if ( !TM3_DRAFT_U32(0x80087E00u) && TM3_DRAFT_U32(0x800D848Cu) < 150 )
      ++TM3_DRAFT_U32(0x800D848Cu);
    if ( TM3_DRAFT_U32(0x80087DE4u) && TM3_DRAFT_U32(0x80087E00u) >= TM3_DRAFT_U32(0x80087DFCu) )
    {
      TM3_DRAFT_U32(0x80087DF0u) = 0;
      TM3_DRAFT_U32(0x80087DECu) = TM3_DRAFT_U32(0x80087DFCu);
      if ( !sub_8006477C(TM3_DRAFT_U32(0x80087DE0u) + 240 * TM3_DRAFT_U32(0x80087DFCu)) )
        tm3_draft_indirect(TM3_DRAFT_U32(0x80087DACu), 1u, 0xFFFF);
      v0 = TM3_DRAFT_U32(0x80087DECu);
      for ( TM3_DRAFT_U32(0x80087DF4u) = 0; TM3_DRAFT_U32(0x80087E00u) >= TM3_DRAFT_U32(0x80087DECu); v0 = TM3_DRAFT_U32(0x80087DECu) )
        sub_80064AB0(TM3_DRAFT_U32(0x80087DE0u) + 240 * v0);
      TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 14) = 136;
    }
  }
  return 0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80031CDC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    uint32 original_local_words[24];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80031CDCu, "SCUS_942.49");
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int result; 

  sub_8005B8D4();
  v17 = TM3_DRAFT_U32(a1 + 120);
  v18 = TM3_DRAFT_U32(a1 + 124);
  v19 = TM3_DRAFT_U32(a1 + 128);
  (*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8])))[0] = TM3_DRAFT_U32(a1 + 116);
  (*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8])))[1] = v17;
  (*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8])))[2] = v18;
  (*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8])))[3] = v19;
  v20 = TM3_DRAFT_U32(a1 + 136);
  v21 = TM3_DRAFT_U32(a1 + 140);
  v22 = TM3_DRAFT_U32(a1 + 144);
  (*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8])))[4] = TM3_DRAFT_U32(a1 + 132);
  (*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8])))[5] = v20;
  (*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8])))[6] = v21;
  (*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8])))[7] = v22;
  sub_8005CA24(TM3_DRAFT_U32(a1 + 148) << 7, (uint32)(*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8]))));
  sub_8005B614((uint32)a5, (uint32)(*(int (*)[8])psx_addr(original_local_address + 64u, sizeof(int[8]))), TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))))));
  sub_8005BD24( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))))));
  sub_8005BDB4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))))));
  sub_80029660(
    (uint32)(TM3_DRAFT_U32(0x80089D14u) + 48),
    TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089D14u) + 912),
    TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089D14u) + 916),
    0,
    a2,
    a3,
    a4);
  sub_8005B978();
  result = TM3_DRAFT_U8(a1 + 335);
  if ( TM3_DRAFT_U8(a1 + 335) )
    return sub_8002E6CC(a1, a2, a3, a4);
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002BDF0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    uint32 original_local_words[14];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    uint32 cpu_s1;
    FUNCTION_MARKER(0x8002BDF0u, "SCUS_942.49");
  int result; 
  int v18; 
  int v19; 
  uint32 v21; 
  int v22; 
  int v23; 

  result = TM3_DRAFT_U8(a1 + 1);
  if ( result == 2 )
  {
    v18 = TM3_DRAFT_U32(a1 + 36);
    v19 = TM3_DRAFT_U32(a1 + 40);
    TM3_DRAFT_U16(0x1F800000u) = TM3_DRAFT_U32(a1 + 32);
    TM3_DRAFT_U16(0x1F800002u) = v18;
    TM3_DRAFT_U16(0x1F800004u) = v19;
    /* TODO: Original assembler lwc2    $0, 0x1F800000 */
tm3_draft_unimplemented("Unmapped GTE operation");
/* TODO: Original assembler lwc2    $1, 0x1F800004 */
tm3_draft_unimplemented("Unmapped GTE operation");
xport_gte_execute(0x480012u);
cpu_s1 = xport_gte_read_data(27u);
    result = cpu_s1 < 21;
    v21 = cpu_s1 < 21;
    v22 = cpu_s1 >> 2;
    if ( !v21 )
    {
      if ( v22 >= TM3_DRAFT_U32(0x80089DD0u) )
        v22 = TM3_DRAFT_U32(0x80089DD0u) - 1;
      sub_8005B8D4();
      sub_8001434C(TM3_DRAFT_U16(a1 + 6), a1 + 12);
      sub_8005B614((uint32)a5, (uint32)(a1 + 12), TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8]))))));
      sub_8005BD24( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8]))))));
      sub_8005BDB4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8]))))));
      result = sub_80029ED8(
        TM3_DRAFT_U32(a1 + 44),
        TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089CF8u) + 144),
        TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089CF8u) + 148),
        (uint32)(a2 + 4 * v22),
        a3,
        a4,
        (*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8])))[0],
        (*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8])))[1],
        (*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8])))[2],
        (*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8])))[3],
        (*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8])))[4],
        (*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8])))[5],
        (*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8])))[6],
        (*(int (*)[8])psx_addr(original_local_address + 24u, sizeof(int[8])))[7]);
      sub_8005B978();
      /* Original PopMatrix preserves the renderer result */
      return result;
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80014EDC(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80014EDCu, "SCUS_942.49");
  int v6; 
  int v7; 
  int result; 

  sub_80014EA8(a2, a3, (int)a4);
  v6 = TM3_DRAFT_U16(a4 + 2u * (3));
  TM3_DRAFT_U32(a4 + 40) = TM3_DRAFT_U32(a1) - ((TM3_DRAFT_U16(a4) * TM3_DRAFT_U32(a1) + TM3_DRAFT_U16(a4 + 2u * (1)) * TM3_DRAFT_U32(a1 + 4u * (1)) + TM3_DRAFT_U16(a4 + 2u * (2)) * TM3_DRAFT_U32(a1 + 4u * (2)) + 2048) >> 12);
  TM3_DRAFT_U32(a4 + 48) = TM3_DRAFT_U32(a1 + 4u * (1)) - ((v6 * TM3_DRAFT_U32(a1) + TM3_DRAFT_U16(a4 + 2u * (4)) * TM3_DRAFT_U32(a1 + 4u * (1)) + TM3_DRAFT_U16(a4 + 2u * (5)) * TM3_DRAFT_U32(a1 + 4u * (2)) + 2048) >> 12);
  v7 = TM3_DRAFT_U32(a1 + 4u * (2));
  result = (TM3_DRAFT_U16(a4 + 2u * (6)) * TM3_DRAFT_U32(a1) + TM3_DRAFT_U16(a4 + 2u * (7)) * TM3_DRAFT_U32(a1 + 4u * (1)) + TM3_DRAFT_U16(a4 + 2u * (8)) * v7 + 2048) >> 12;
  TM3_DRAFT_U32(a4 + 56) = v7 - result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002BF14(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8002BF14u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 t0; /* TODO: Review undefined incoming or temporary value */
    uint32 t1; /* TODO: Review undefined incoming or temporary value */
    uint32 t2; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_8002BF14:;
    L_8002BF18:;
    t2 = arg0 + 0u;
    L_8002BF1C:;
    L_8002BF20:;
    v1 = TM3_DRAFT_U16(arg1 + (uint32)(2));
    L_8002BF24:;
    v0 = TM3_DRAFT_U32(t2 + (uint32)(4096));
    L_8002BF28:;
    L_8002BF2C:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v0 * (int64_t)(sint32)v1);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8002BF30:;
    v0 = lo;
    L_8002BF34:;
    v1 = 0x51eb0000u;
    L_8002BF38:;
    v1 = v1 | 34079u;
    L_8002BF3C:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v0 * (int64_t)(sint32)v1);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8002BF40:;
    v0 = (uint32)((sint32)v0 >> 31u);
    L_8002BF44:;
    v1 = hi;
    L_8002BF48:;
    v1 = (uint32)((sint32)v1 >> 5u);
    L_8002BF4C:;
    arg2 = v1 - v0;
    L_8002BF50:;
    v0 = 0x800d0000u;
    L_8002BF54:;
    t1 = v0 + (uint32)(11912);
    L_8002BF58:;
    v0 = TM3_DRAFT_U32(t1 + (uint32)(1412));
    L_8002BF5C:;
    arg0 = 0u + (uint32)(1);
    L_8002BF60:;
    v0 = arg0 - v0;
    L_8002BF64:;
    v1 = (uint32)((sint32)v0 >> 31u);
    L_8002BF68:;
    v0 = v0 & v1;
    L_8002BF6C:;
    arg3 = arg0 - v0;
    L_8002BF70:;
    v1 = TM3_DRAFT_U32(t1 + (uint32)(136));
    L_8002BF74:;
    v0 = 0u + (uint32)(2);
    L_8002BF78:;
    {
        uint32 branch = v1 != v0;
        t0 = arg3 + 0u;
        if (branch) goto L_8002BFC8;
    }
    L_8002BF80:;
    v0 = 0x80090000u;
    L_8002BF84:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(-25412));
    L_8002BF88:;
    v1 = TM3_DRAFT_U32(arg1 + (uint32)(48));
    L_8002BF8C:;
    arg0 = TM3_DRAFT_I16(v0 + (uint32)(272));
    L_8002BF90:;
    v0 = TM3_DRAFT_U8(v1 + (uint32)(13));
    L_8002BF94:;
    L_8002BF98:;
    {
        uint64 product = (uint64)((int64_t)(sint32)arg0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8002BF9C:;
    v1 = lo;
    L_8002BFA0:;
    v0 = TM3_DRAFT_U32(t1 + (uint32)(16));
    L_8002BFA4:;
    L_8002BFA8:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v1 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8002BFAC:;
    v1 = lo;
    L_8002BFB0:;
    L_8002BFB4:;
    L_8002BFB8:;
    /* TODO: Original divide-by-zero and signed overflow behavior */
    lo = (uint32)((sint32)v1 / (sint32)arg3);
    hi = (uint32)((sint32)v1 % (sint32)arg3);
    L_8002BFBC:;
    v0 = lo;
    L_8002BFC0:;
    v0 = v0 + (uint32)(2048);
    goto L_8002C010;
    L_8002BFC8:;
    v0 = 0x80090000u;
    L_8002BFCC:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(-25412));
    L_8002BFD0:;
    v1 = TM3_DRAFT_U32(arg1 + (uint32)(48));
    L_8002BFD4:;
    arg0 = TM3_DRAFT_I16(v0 + (uint32)(268));
    L_8002BFD8:;
    v0 = TM3_DRAFT_U8(v1 + (uint32)(13));
    L_8002BFDC:;
    L_8002BFE0:;
    {
        uint64 product = (uint64)((int64_t)(sint32)arg0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8002BFE4:;
    v1 = lo;
    L_8002BFE8:;
    v0 = TM3_DRAFT_U32(t1 + (uint32)(16));
    L_8002BFEC:;
    L_8002BFF0:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v1 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8002BFF4:;
    v1 = lo;
    L_8002BFF8:;
    L_8002BFFC:;
    L_8002C000:;
    /* TODO: Original divide-by-zero and signed overflow behavior */
    lo = (uint32)((sint32)v1 / (sint32)t0);
    hi = (uint32)((sint32)v1 % (sint32)t0);
    L_8002C004:;
    v0 = lo;
    L_8002C008:;
    L_8002C00C:;
    v0 = v0 + (uint32)(2048);
    L_8002C010:;
    v0 = (uint32)((sint32)v0 >> 12u);
    L_8002C014:;
    v0 = v0 & 65535u;
    L_8002C018:;
    v1 = v0 << 4u;
    L_8002C01C:;
    v1 = v1 - v0;
    L_8002C020:;
    v1 = v1 << 1u;
    L_8002C024:;
    TM3_DRAFT_U16(arg1 + (uint32)(8)) = (uint16)v1;
    L_8002C028:;
    arg0 = t2 + 0u;
    L_8002C02C:;
    arg1 = 0u + 0u;
    L_8002C030:;
    arg2 = 0u - arg2;
    L_8002C034:;
    arg3 = arg1 + 0u;
    L_8002C038:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)0u;
    v0 = sub_800239C0(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_8002C040:;
    L_8002C044:;
    v0 = 0u + (uint32)(1);
    L_8002C048:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80028B60(uint32 a1, uint32 a2)
{
    uint32 original_local_words[14];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80028B60u, "SCUS_942.49");
  int v4; 
  int v5; 
  sint32 v6; 
  sint16 v7; 
  int v8; 
  sint16 v9; 

  v4 = 4 * a2 - ((4 * a2 - 128) & ((4 * a2 - 128) >> 31));
  v5 = a2 / 2 - ((a2 / 2 - 32) & ((a2 / 2 - 32) >> 31));
  (*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4])))[0] = 0;
  (*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4])))[2] = 0;
  (*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4])))[1] = (int)sub_80039FD4() % (v4 >> 1) - v4;
  v6 = sub_80039FD4();
  v7 = TM3_DRAFT_U16(a1 + 2u * (1));
  v8 = v6 % v5 - v5 / 2;
  v9 = TM3_DRAFT_U16(a1 + 2u * (2));
  (*(sint16 (*)[8])psx_addr(original_local_address + 40u, sizeof(sint16[8])))[0] = TM3_DRAFT_U16(a1) + v8;
  (*(sint16 (*)[8])psx_addr(original_local_address + 40u, sizeof(sint16[8])))[1] = v7 + v8 / 4;
  (*(sint16 (*)[8])psx_addr(original_local_address + 40u, sizeof(sint16[8])))[2] = v9 + v8;
  return sub_8004A294(4, 5, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[8])psx_addr(original_local_address + 40u, sizeof(sint16[8]))), sizeof((*(sint16 (*)[8])psx_addr(original_local_address + 40u, sizeof(sint16[8]))))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4]))))) /* TODO: Local buffer adapter */, a2, 0, -2, 30);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80048A90(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80048A90u, "SCUS_942.49");
    uint32 at; /* TODO: Review undefined incoming or temporary value */
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 t0; /* TODO: Review undefined incoming or temporary value */
    uint32 t1; /* TODO: Review undefined incoming or temporary value */
    uint32 s0; /* TODO: Review undefined incoming or temporary value */
    uint32 s1; /* TODO: Review undefined incoming or temporary value */
    uint32 s2; /* TODO: Review undefined incoming or temporary value */
    uint32 s3; /* TODO: Review undefined incoming or temporary value */
    uint32 s4; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_80048A90:;
    L_80048A94:;
    L_80048A98:;
    s4 = arg1 + 0u;
    L_80048A9C:;
    L_80048AA0:;
    s0 = 0u + 0u;
    L_80048AA4:;
    v0 = 0x800d0000u;
    L_80048AA8:;
    L_80048AAC:;
    s2 = v0 + (uint32)(15744);
    L_80048AB0:;
    L_80048AB4:;
    s3 = arg0 + 0u;
    L_80048AB8:;
    L_80048ABC:;
    L_80048AC0:;
    arg0 = TM3_DRAFT_U32(s3 + (uint32)(0));
    L_80048AC4:;
    s1 = s3 + 0u;
    L_80048AC8:;
    arg0 = s3 + arg0;
    L_80048ACC:;
    v0 = TM3_DRAFT_U32(arg0 + (uint32)(0));
    L_80048AD0:;
    arg1 = TM3_DRAFT_U32(arg0 + (uint32)(4));
    L_80048AD4:;
    v1 = arg0 + (uint32)(28);
    L_80048AD8:;
    at = 0x80090000u;
    L_80048ADC:;
    TM3_DRAFT_U32(at + (uint32)(-24948)) = (uint32)arg0;
    L_80048AE0:;
    TM3_DRAFT_U32(arg0 + (uint32)(24)) = (uint32)v1;
    L_80048AE4:;
    v0 = v0 << 3u;
    L_80048AE8:;
    v1 = v1 + v0;
    L_80048AEC:;
    v0 = arg1 << 2u;
    L_80048AF0:;
    v0 = v0 + arg1;
    L_80048AF4:;
    v0 = v0 << 2u;
    L_80048AF8:;
    TM3_DRAFT_U32(arg0 + (uint32)(12)) = (uint32)v1;
    L_80048AFC:;
    v1 = v1 + v0;
    L_80048B00:;
    TM3_DRAFT_U32(arg0 + (uint32)(16)) = (uint32)v1;
    L_80048B04:;
    v0 = s0 + (uint32)(-14);
    L_80048B08:;
    v0 = v0 < (uint32)(2);
    L_80048B0C:;
    {
        uint32 branch = v0 != 0u;
        if (branch) goto L_80048B74;
    }
    L_80048B14:;
    arg0 = TM3_DRAFT_U32(s1 + (uint32)(4));
    L_80048B18:;
    v0 = 0x80090000u;
    L_80048B1C:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(-24976));
    L_80048B20:;
    arg0 = s3 + arg0;
    L_80048B24:;
    TM3_DRAFT_U32(s2 + (uint32)(0)) = (uint32)arg0;
    L_80048B28:;
    arg3 = TM3_DRAFT_U16(v0 + (uint32)(2));
    L_80048B2C:;
    v1 = TM3_DRAFT_U16(v0 + (uint32)(6));
    L_80048B30:;
    t0 = TM3_DRAFT_U8(v0 + (uint32)(0));
    L_80048B34:;
    t1 = TM3_DRAFT_U8(v0 + (uint32)(1));
    L_80048B38:;
    v0 = arg3 >> 6u;
    L_80048B3C:;
    arg3 = arg3 & 63u;
    L_80048B40:;
    arg1 = v1 << 6u;
    L_80048B44:;
    arg1 = arg1 & 1984u;
    L_80048B48:;
    t0 = t0 >> 1u;
    L_80048B4C:;
    arg2 = v1 << 4u;
    L_80048B50:;
    arg2 = arg2 & 256u;
    L_80048B54:;
    v1 = v1 >> 2u;
    L_80048B58:;
    v1 = v1 & 512u;
    L_80048B5C:;
    arg2 = arg2 | v1;
    L_80048B60:;
    arg1 = arg1 + t0;
    L_80048B64:;
    arg2 = arg2 | t1;
    L_80048B68:;
    arg3 = arg3 << 4u;
    L_80048B6C:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    v0 = sub_8004840C(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_80048B74:;
    s2 = s2 + (uint32)(4);
    L_80048B78:;
    s0 = s0 + (uint32)(1);
    L_80048B7C:;
    v0 = s0 < (uint32)(16);
    L_80048B80:;
    {
        uint32 branch = v0 != 0u;
        s1 = s1 + (uint32)(4);
        if (branch) goto L_80048B04;
    }
    L_80048B88:;
    v0 = s4 + 0u;
    L_80048B8C:;
    L_80048B90:;
    L_80048B94:;
    L_80048B98:;
    L_80048B9C:;
    L_80048BA0:;
    L_80048BA4:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002F9F8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8002F9F8u, "SCUS_942.49");
  uint32 v2; 
  uint32 v3; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int vars0; 
  int vars4; 

  v2 = (uint32)(a2 + 4);
  v3 = TM3_DRAFT_U32(v2);
  TM3_DRAFT_U32(a1 + 48) = TM3_DRAFT_U16(v2 - 4);
  TM3_DRAFT_U32(a1 + 4) = 0;
  TM3_DRAFT_U32(a1 + 12) = 0;
  TM3_DRAFT_U32(a1) = 4096;
  TM3_DRAFT_U32(a1 + 8) = 4096;
  TM3_DRAFT_U16(a1 + 16) = 4096;
  TM3_DRAFT_U32(a1 + 20) = TM3_DRAFT_U16(v3);
  TM3_DRAFT_U32(a1 + 24) = sub_80013420(TM3_DRAFT_U16(v3), TM3_DRAFT_U16(v3 + 2u * (1)), TM3_DRAFT_U16(v3 + 2u * (2)));
  v5 = TM3_DRAFT_U16(v3 + 2u * (2));
  v6 = TM3_DRAFT_U32(a1 + 24);
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U32(a1 + 20);
  v7 = a1 - 20;
  TM3_DRAFT_U32(a1 + 28) = v5;
  TM3_DRAFT_U16(v7 + 2) = v6;
  TM3_DRAFT_U16(v7 + 4) = v5;
  TM3_DRAFT_U32(a1 - 24) = 2048;
  TM3_DRAFT_U32(a1 + 40) = 512;
  TM3_DRAFT_U32(a1 + 44) = 40960;
  TM3_DRAFT_U16(a1 + 74) = 1200;
  TM3_DRAFT_U16(a1 + 72) = 4;
  v8 = TM3_DRAFT_I16(a1 + 74);
  TM3_DRAFT_U16(a1 + 34) = 0;
  TM3_DRAFT_U16(a1 + 36) = 0;
  sub_8004A294(22, 4, 13, a1, v8, 255);
  TM3_DRAFT_U16(a1 + 76) = 0;
  TM3_DRAFT_U32(a1 + 80) = 0;
  return sub_800288AC((uint32)(a1 + 52), v3, a1);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80047534(void)
{
    FUNCTION_MARKER(0x80047534u, "SCUS_942.49");
  int result; 
  int v4; 
  int v5; 

  TM3_DRAFT_U32(0x800D3470u) = 0;
  sub_800473BC(0u, 8u);
  result = TM3_DRAFT_U32(0x80089878u);
  if ( !TM3_DRAFT_U32(0x80089878u) )
  {
    TM3_DRAFT_U32(0x80089878u) = 1;
    sub_80062D0C();
    sub_80063304(1, 3, 0x1FA400u);
    sub_80063304(1, 4, 4u);
    v4 = sub_80056464(0x8008987cu, 2u);
    TM3_DRAFT_U32(0x800D345Cu) = v4;
    v5 = sub_80056464(0x8008987cu, 1u);
    TM3_DRAFT_U32(0x800D3458u) = v5;
    result = 2;
    TM3_DRAFT_U32(0x800D347Cu) = 2;
    TM3_DRAFT_U32(0x800D3478u) = 1;
    TM3_DRAFT_U32(0x800D3494u) = 1;
    TM3_DRAFT_U32(0x800D3490u) = 1;
    TM3_DRAFT_U32(0x800D3488u) = 2;
    TM3_DRAFT_U32(0x800D3484u) = 2;
    TM3_DRAFT_U32(0x800D34C4u) = 2;
    TM3_DRAFT_U32(0x800D34C0u) = 2;
    TM3_DRAFT_U32(0x800D34DCu) = 2;
    TM3_DRAFT_U32(0x800D34D8u) = 1;
    TM3_DRAFT_U32(0x800D34D0u) = 2;
    TM3_DRAFT_U32(0x800D34CCu) = 2;
    TM3_DRAFT_U32(0x800D34A0u) = 1;
    TM3_DRAFT_U32(0x800D349Cu) = 1;
    TM3_DRAFT_U32(0x800D34B8u) = 1;
    TM3_DRAFT_U32(0x800D34B4u) = 1;
    TM3_DRAFT_U32(0x800D34ACu) = 2;
    TM3_DRAFT_U32(0x800D34A8u) = 1;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80032D5C(uint32 a1)
{
    uint32 original_local_words[21];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80032D5Cu, "SCUS_942.49");
  int v2; 
  int v3; 
  int v4; 

  v2 = TM3_DRAFT_U32(a1 + 4u * (389));
  v3 = TM3_DRAFT_U32(a1 + 4u * (390));
  v4 = TM3_DRAFT_U32(a1 + 4u * (391));
  TM3_DRAFT_I32(original_local_address + 80u) = 8421504;
  TM3_DRAFT_I16(original_local_address + 64u) = v2;
  TM3_DRAFT_I16(original_local_address + 66u) = v3;
  TM3_DRAFT_I16(original_local_address + 68u) = v4;
  sub_80032C64((int)a1, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 72u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 72u, sizeof(sint16[4]))))));
  TM3_DRAFT_I16(original_local_address + 66u) -= 20;
  sub_8004A294(9, (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I16(original_local_address + 64u), sizeof( TM3_DRAFT_I16(original_local_address + 64u))) /* TODO: Local buffer adapter */, (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 80u), sizeof(TM3_DRAFT_I32(original_local_address + 80u))) /* TODO: Local buffer adapter */, 40, 0, 200, 15, (int)a1);
  return sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4u * (1010)) + 55), 5, (int)a1, 940);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80051C04(void)
{
    FUNCTION_MARKER(0x80051C04u, "SCUS_942.49");
  int v0; 
  int v1; 
  int v2; 
  sint32 result; 

  if ( TM3_DRAFT_U32(0x800D295Cu) == 1 )
  {
    v0 = 4;
  }
  else
  {
    if ( TM3_DRAFT_U32(0x800D28BCu) >= 2 )
      TM3_DRAFT_U32(0x800D28BCu) = 1;
    v0 = 2 - TM3_DRAFT_U32(0x800D28BCu);
  }
  if ( v0 <= 0 )
    v0 = 1;
  if ( v0 < TM3_DRAFT_U32(0x800D28B8u) )
    TM3_DRAFT_U32(0x800D28B8u) = v0;
  v1 = 0;
  v2 = -2146624256;
  do
  {
    if ( TM3_DRAFT_U32(v2 + 20) )
      break;
    ++v1;
    v2 += 24;
  }
  while ( v1 < 4 );
  if ( TM3_DRAFT_U32(0x800D28B8u) >= v1 + 1 )
  {
    if ( v1 <= 0 )
      TM3_DRAFT_U32(0x800D28B8u) = 1;
    else
      TM3_DRAFT_U32(0x800D28B8u) = v1;
  }
  result = 1;
  if ( TM3_DRAFT_U32(0x800D295Cu) == 1 )
  {
    result = TM3_DRAFT_U32(0x800D28B8u) + TM3_DRAFT_U32(0x800D28BCu) < 2;
    if ( TM3_DRAFT_U32(0x800D28B8u) + TM3_DRAFT_U32(0x800D28BCu) >= 2 )
      TM3_DRAFT_U32(0x800D28C4u) = 0;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800416A0(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800416A0u, "SCUS_942.49");
  int result; 
  uint32 v7; 
  uint32 v8; 

  result = a1 < 4;
  if ( a1 < 4 )
  {
    result = -2146631680;
    if ( a1 < TM3_DRAFT_U32(0x800D2E88u) )
    {
      v7 = (uint32)(200 * a1 - 2146622488);
      if ( TM3_DRAFT_U32(v7) == TM3_DRAFT_U32(0x80089DFCu) )
      {
        sub_800415A8(a1);
      }
      else if ( TM3_DRAFT_U32(v7) )
      {
LABEL_7:
        v8 = (uint32)(200 * a1 - 2146622488);
        sub_80049710(200 * a1 - 2146622480 + (TM3_DRAFT_U32(v8) << 6), a2, a3);
        result = TM3_DRAFT_U32(v8) + 1;
        TM3_DRAFT_U32(v8) = result;
        return result;
      }
      TM3_DRAFT_U32(v7 + 4u * (1)) = 60;
      goto LABEL_7;
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002F1C0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    uint32 original_local_words[16];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8002F1C0u, "SCUS_942.49");
  int result; 
  int v18; 

  if ( TM3_DRAFT_U8(a1 + 321) == 1 )
    sub_8002E2D4(a1, a2, a3, a4);
  result = TM3_DRAFT_U16(a1 + 110);
  if ( !TM3_DRAFT_U16(a1 + 110) )
  {
    sub_8005B8D4();
    sub_8005B614((uint32)a5, (uint32)(a1 + 116), TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))))));
    sub_8005BD24( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))))));
    sub_8005BDB4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))), sizeof((*(int (*)[8])psx_addr(original_local_address + 32u, sizeof(int[8]))))));
    sub_80029660(
      (uint32)TM3_DRAFT_U32(0x80089D14u),
      TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089D14u) + 912),
      TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089D14u) + 916),
      0,
      a2,
      a3,
      a4);
    sub_8005B978();
    result = TM3_DRAFT_U8(a1 + 335);
    if ( TM3_DRAFT_U8(a1 + 335) )
      return sub_8002E6CC(a1, a2, a3, a4);
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8004B500(uint32 a1, uint32 a2)
{
    uint32 original_local_words[12];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8004B500u, "SCUS_942.49");
  int v4; 

  v4 = TM3_DRAFT_U32(a1 + 4052);
  TM3_DRAFT_U32(a1 + 4056) = 1;
  if ( v4 )
  {
    if ( v4 == a2 )
    {
      return 0;
    }
    else
    {
      TM3_DRAFT_U8(v4 + 8) = 0;
      TM3_DRAFT_U8(v4 + 9) = 0;
      sub_8001A7AC(a1);
      return 1;
    }
  }
  else
  {
    TM3_DRAFT_I32(original_local_address + 16u) = TM3_DRAFT_U32(a1 - 20);
    LOWORD(TM3_DRAFT_I32(original_local_address + 20u)) = TM3_DRAFT_U16(a1 - 20 + 4);
    HIWORD(TM3_DRAFT_I32(original_local_address + 32u)) = 20;
    LOWORD(TM3_DRAFT_I32(original_local_address + 36u)) = 1027;
    BYTE2(TM3_DRAFT_I32(original_local_address + 36u)) = 0;
    LOWORD(TM3_DRAFT_I32(original_local_address + 32u)) = TM3_DRAFT_I32(original_local_address + 20u);
    TM3_DRAFT_U8(original_local_address + 24u) = 6u;
    TM3_DRAFT_U8(original_local_address + 25u) = 0u;
    TM3_DRAFT_U16(original_local_address + 26u) = 128u;
    TM3_DRAFT_U16(original_local_address + 28u) = TM3_DRAFT_U16(a1 - 20u);
    TM3_DRAFT_U16(original_local_address + 30u) = TM3_DRAFT_U16(a1 - 18u);
    TM3_DRAFT_U32(a1 + 4052) = sub_8004A294(6, TM3_DRAFT_LOCAL_ADDRESS((uint8 *)original_local_words + 24u, 20u));
    return 1;
  }
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001B010(uint32 a1)
{
    FUNCTION_MARKER(0x8001B010u, "SCUS_942.49");
  sint16 v2; 
  uint32 v3; 

  uint32 result; /* Guest callback address */ 
  sint32 v5; 

  v2 = TM3_DRAFT_U16(a1 + 3430) - 1;
  TM3_DRAFT_U16(a1 + 3430) = v2;
  v3 = (v2 & 0x8000) == 0;
  result = 0;
  if ( !v3 )
  {
    TM3_DRAFT_U16(a1 + 3430) = TM3_DRAFT_U16(a1 + 3428) + (int)sub_80039FD4() % 300 / 4;
    v5 = sub_80039FD4();
    if ( sub_8001BF10(a1, v5 % 4 + 2) )
    {
      sub_8001A8C4(a1, 0, 0);
      TM3_DRAFT_U8(a1 + 3329) = 5;
      return 0x8001CA04u;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003AEBC(void)
{
    FUNCTION_MARKER(0x8003AEBCu, "SCUS_942.49");
  int result; 
  uint32 v1; 
  int v2; 

  result = TM3_DRAFT_U32(0x80089C98u);
  if ( TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089C98u) + 10288) )
  {
    if ( LOBYTE(TM3_DRAFT_U32(0x8008978Cu + 4u * (2))) >= (uint32)TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089C98u) + 10288) )
      LOBYTE(TM3_DRAFT_U32(0x8008978Cu + 4u * (2))) = 0;
    v1 = (uint32)TM3_DRAFT_U32(0x8008978Cu) + LOBYTE(TM3_DRAFT_U32(0x8008978Cu + 4u * (2)));
    v2 = TM3_DRAFT_U32(0x80089DA4u) + TM3_DRAFT_U32(4 * LOBYTE(TM3_DRAFT_U32(0x8008978Cu + 4u * (2))) + TM3_DRAFT_U32(0x80089DA4u));
    if ( (uint8)TM3_DRAFT_U8(v1) >= TM3_DRAFT_I32(v2 - 4 + 36) )
      TM3_DRAFT_U8(v1) = 0;
    sub_800579FC(
      (uint32)(v2 + 20),
      (TM3_DRAFT_U32(v2 - 4 + 4 * TM3_DRAFT_U8(TM3_DRAFT_U32(0x8008978Cu) + LOBYTE(TM3_DRAFT_U32(0x8008978Cu + 4u * (2)))) + 40) & 0xFFFFFF)
    + TM3_DRAFT_U32(0x80089DA8u));
    ++TM3_DRAFT_U8(TM3_DRAFT_U32(0x8008978Cu) + LOBYTE(TM3_DRAFT_U32(0x8008978Cu + 4u * (2))));
    result = LOBYTE(TM3_DRAFT_U32(0x8008978Cu + 4u * (2))) + 1;
    ++LOBYTE(TM3_DRAFT_U32(0x8008978Cu + 4u * (2)));
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80023EC0(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80023EC0u, "SCUS_942.49");
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  uint32 v11; 
  sint16 v12; 
  sint16 v13; 
  int v14; 
  uint32 v15; 
  sint32 result; 

  v3 = TM3_DRAFT_U32(a2 + 4u * (1));
  v4 = TM3_DRAFT_U32(a2 + 4u * (2));
  v5 = TM3_DRAFT_U32(a2 + 4u * (3));
  TM3_DRAFT_U32(a1 + 4u * (384)) = TM3_DRAFT_U32(a2);
  TM3_DRAFT_U32(a1 + 4u * (385)) = v3;
  TM3_DRAFT_U32(a1 + 4u * (386)) = v4;
  TM3_DRAFT_U32(a1 + 4u * (387)) = v5;
  v6 = TM3_DRAFT_U32(a2 + 4u * (5));
  v7 = TM3_DRAFT_U32(a2 + 4u * (6));
  v8 = TM3_DRAFT_U32(a2 + 4u * (7));
  TM3_DRAFT_U32(a1 + 4u * (388)) = TM3_DRAFT_U32(a2 + 4u * (4));
  TM3_DRAFT_U32(a1 + 4u * (389)) = v6;
  TM3_DRAFT_U32(a1 + 4u * (390)) = v7;
  TM3_DRAFT_U32(a1 + 4u * (391)) = v8;
  sub_80023B38((int)a1);
  v9 = 0;
  v10 = 398;
  do
  {
    v11 = (a1 + 4u * (v10));
    v10 += 28;
    ++v9;
    v12 = TM3_DRAFT_U16(v11 + 56);
    v13 = TM3_DRAFT_U16(v11 + 64);
    TM3_DRAFT_U16(v11 + 16) = TM3_DRAFT_U16(v11 + 48);
    TM3_DRAFT_U16(v11 + 24) = v12;
    TM3_DRAFT_U16(v11 + 32) = v13;
    TM3_DRAFT_U32(v11 + 4u * (8)) = 0;
    v11 += 4u * (8);
    TM3_DRAFT_U32(v11 + 4u * (1)) = 0;
    TM3_DRAFT_U32(v11 + 4u * (2)) = 0;
  }
  while ( v9 < 8 );
  v14 = 0;
  v15 = a1;
  do
  {
    TM3_DRAFT_U32(v15 + 4u * (24)) = 0;
    TM3_DRAFT_U32(v15 + 4u * (27)) = 0;
    result = ++v14 < 4;
    v15 += 4u * (20);
  }
  while ( v14 < 4 );
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001441C(uint32 a1, uint32 a2, uint32 a3)
{
    uint32 cpu_a0;
    uint32 cpu_a1;
    uint32 cpu_a2;
    uint32 cpu_a3;
    uint32 cpu_t6;
    uint32 cpu_t7;
    uint32 cpu_t8;
    uint32 cpu_t9;
    uint32 temporary_6;
    uint32 temporary_7;
    uint32 temporary_8;
    uint32 temporary_9;
    FUNCTION_MARKER(0x8001441Cu, "SCUS_942.49");
  int result; 
  int v4; 
  int v6; 
  int v8; 
  int v10; 

  result = a3;
  v4 = a1 >> 31;
  cpu_a0 = TM3_DRAFT_U32(0x80081E38u + 4u * (((uint16)(a1 + (a1 >> 31)) ^ (uint16)(a1 >> 31)) & 0xFFF));
  v6 = a2 >> 31;
  cpu_a1 = TM3_DRAFT_U32(0x80081E38u + 4u * (((uint16)(a2 + (a2 >> 31)) ^ (uint16)(a2 >> 31)) & 0xFFF));
  v8 = cpu_a0 << 16;
  cpu_a0 >>= 16;
  cpu_a2 = ((v8 >> 16) + v4) ^ v4;
  v10 = cpu_a1 << 16;
  cpu_a1 >>= 16;
  xport_gte_write_data(8u, (uint32)cpu_a1);
xport_gte_write_data(9u, (uint32)cpu_a2);
xport_gte_write_data(10u, (uint32)cpu_a0);
  cpu_a3 = ((v10 >> 16) + v6) ^ v6;
  xport_gte_execute(0x198003Du);
cpu_t9 = xport_gte_read_data(9u);
cpu_t8 = xport_gte_read_data(10u);
xport_gte_write_data(8u, (uint32)cpu_a3);
xport_gte_write_data(9u, (uint32)cpu_a2);
xport_gte_write_data(10u, (uint32)cpu_a0);
xport_gte_execute(0x198003Du);
  TM3_DRAFT_U32(result + 8) = (uint16)cpu_a0 | (-65536 * cpu_a2);
  TM3_DRAFT_U32(result + 12) = (uint16)-(sint16)cpu_a3 | (cpu_t9 << 16);
  TM3_DRAFT_U16(result + 16) = cpu_t8;
  cpu_t7 = xport_gte_read_data(9u);
cpu_t6 = xport_gte_read_data(10u);
  TM3_DRAFT_U32(result) = (uint16)cpu_a1 | (cpu_t7 << 16);
  TM3_DRAFT_U32(result + 4) = (uint16)cpu_t6;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80038B10(uint32 a1)
{
    FUNCTION_MARKER(0x80038B10u, "SCUS_942.49");
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  char v5; 
  char v6; 
  char v7; 
  char v8; 
  int result; 

  v1 = TM3_DRAFT_I8(32 * TM3_DRAFT_U8(a1 + 13) + TM3_DRAFT_U32(0x80089C94u) + 20) + TM3_DRAFT_I8(a1 + 6);
  v2 = 8 * v1;
  v3 = TM3_DRAFT_U8(a1 + 12);
  v4 = 8 * v1 + TM3_DRAFT_U32(0x80089CB8u);
  TM3_DRAFT_U16(a1 + 22) = TM3_DRAFT_U16(v4 + 2);
  TM3_DRAFT_U16(a1 + 26) = TM3_DRAFT_U16(v4 + 6);
  if ( v3 )
  {
    v5 = TM3_DRAFT_U8(v4 + 4);
    TM3_DRAFT_U8(a1 + 28) = v5;
    TM3_DRAFT_U8(a1 + 20) = v5;
    v6 = TM3_DRAFT_U8(v2 + TM3_DRAFT_U32(0x80089CB8u));
  }
  else
  {
    v7 = TM3_DRAFT_U8(v4);
    TM3_DRAFT_U8(a1 + 28) = TM3_DRAFT_U8(v4);
    TM3_DRAFT_U8(a1 + 20) = v7;
    v6 = TM3_DRAFT_U8(v2 + TM3_DRAFT_U32(0x80089CB8u) + 4);
  }
  TM3_DRAFT_U8(a1 + 30) = v6;
  TM3_DRAFT_U8(a1 + 24) = v6;
  v8 = TM3_DRAFT_U8(8 * v1 + TM3_DRAFT_U32(0x80089CB8u) + 1);
  TM3_DRAFT_U8(a1 + 25) = v8;
  TM3_DRAFT_U8(a1 + 21) = v8;
  result = TM3_DRAFT_U8(8 * v1 + TM3_DRAFT_U32(0x80089CB8u) + 5);
  TM3_DRAFT_U8(a1 + 31) = result;
  TM3_DRAFT_U8(a1 + 29) = result;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002F938(uint32 a1)
{
    uint32 original_local_words[19];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8002F938u, "SCUS_942.49");
  sint16 v1; 
  sint16 v2; 

  v1 = TM3_DRAFT_U16(a1 - 20 + 2);
  v2 = TM3_DRAFT_U16(a1 - 20 + 4);
  TM3_DRAFT_I16(original_local_address + 64u) = TM3_DRAFT_U16(a1 - 20);
  TM3_DRAFT_I16(original_local_address + 68u) = v2;
  TM3_DRAFT_I32(original_local_address + 72u) = 0x400000;
  TM3_DRAFT_I16(original_local_address + 66u) = v1 - 100;
  sub_8004A294(9, (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I16(original_local_address + 64u), sizeof(TM3_DRAFT_I16(original_local_address + 64u))) /* TODO: Local buffer adapter */, (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 72u), sizeof(TM3_DRAFT_I32(original_local_address + 72u))) /* TODO: Local buffer adapter */, 48, 1024, 384, 15, TM3_DRAFT_U32(a1 + 48));
  TM3_DRAFT_I16(original_local_address + 66u) -= 100;
  return sub_8002F2A8((int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I16(original_local_address + 64u), sizeof(TM3_DRAFT_I16(original_local_address + 64u))) /* TODO: Local buffer adapter */);
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002F584(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8002F584u, "SCUS_942.49");
  uint32 v2; 
  int v3; 
  uint32 v4; 
  int v6; 
  int v7; 
  int v8; 

  v2 = (uint32)(a2 + 4);
  v3 = TM3_DRAFT_U32(v2);
  v4 = (uint32)TM3_DRAFT_U32(v2 + 4u * (1));
  TM3_DRAFT_U16(a1 + 32) = TM3_DRAFT_U32(v2 - 4);
  TM3_DRAFT_U32(a1 + 36) = v3;
  TM3_DRAFT_U32(a1 + 4) = 0;
  TM3_DRAFT_U32(a1 + 12) = 0;
  TM3_DRAFT_U32(a1) = 4096;
  TM3_DRAFT_U32(a1 + 8) = 4096;
  TM3_DRAFT_U16(a1 + 16) = 4096;
  TM3_DRAFT_U32(a1 + 20) = TM3_DRAFT_I16(v4);
  TM3_DRAFT_U32(a1 + 24) = sub_80013420(TM3_DRAFT_I16(v4), TM3_DRAFT_I16(v4 + 2u * (1)), TM3_DRAFT_I16(v4 + 2u * (2)));
  v6 = TM3_DRAFT_I16(v4 + 2u * (2));
  v7 = TM3_DRAFT_U32(a1 + 24);
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U32(a1 + 20);
  v8 = a1 - 20;
  TM3_DRAFT_U32(a1 + 28) = v6;
  TM3_DRAFT_U16(v8 + 2) = v7;
  TM3_DRAFT_U16(v8 + 4) = v6;
  TM3_DRAFT_U32(a1 - 24) = 28;
  sub_8004A294(22, 20, 13, a1, 870, 0x3FFF);
  return 1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80030348(uint32 a1)
{
    FUNCTION_MARKER(0x80030348u, "SCUS_942.49");
  int v2; 
  uint32 v4; 
  int v5; 

  if ( !sub_80030410((int)a1) )
    return (uint32)sub_8004A570((int)a1);
  v2 = TM3_DRAFT_U32(a1 + 4u * (17));
  if ( v2 >= TM3_DRAFT_U32(a1 + 4u * (15)) )
    return (uint32)sub_8004A570((int)a1);
  TM3_DRAFT_U32(a1 + 4u * (17)) = v2 + 1;
  v4 = (uint32)TM3_DRAFT_U32(a1 + 4u * (19));
  v5 = TM3_DRAFT_U32(a1 + 4u * (18)) + 1;
  TM3_DRAFT_U32(a1 + 4u * (18)) = v5;
  if ( v5 >= TM3_DRAFT_U16(v4) )
    TM3_DRAFT_U32(a1 + 4u * (18)) = 0;
  return sub_8004A294(
           29,
           TM3_DRAFT_U32(a1 + 4u * (14)),
           TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 4u * (19)) + 4 * TM3_DRAFT_U32(a1 + 4u * (18)) + 8),
           (int)(a1 + 24),
           (int)(a1 + 8),
           (int)(a1 + 16),
           100,
           40);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80048FF0(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80048FF0u, "SCUS_942.49");
  uint32 v5; 

  if ( a3 == 32 )
    return -(uint8)TM3_DRAFT_U8(a2 + 1u * (18));
  v5 = (a2 + 1u * (4 * (uint8)sub_800564E4(a3) - 128));
  TM3_DRAFT_U16(a1 + 16) = TM3_DRAFT_U8(v5 + 1u * (23)) - TM3_DRAFT_U8(v5 + 1u * (21)) + 1;
  TM3_DRAFT_U16(a1 + 18) = TM3_DRAFT_U8(v5 + 1u * (24)) - TM3_DRAFT_U8(v5 + 1u * (22)) + 1;
  TM3_DRAFT_U8(a1 + 12) = TM3_DRAFT_U8(v5 + 1u * (21)) + TM3_DRAFT_U8(a2);
  TM3_DRAFT_U8(a1 + 13) = TM3_DRAFT_U8(v5 + 1u * (22)) + TM3_DRAFT_U8(a2 + 1u * (1));
  return TM3_DRAFT_U8(v5 + 1u * (23)) - TM3_DRAFT_U8(v5 + 1u * (21)) + (uint8)TM3_DRAFT_U8(a2 + 1u * (19));
}


/* Unverified draft; TODO items require later review */
uint32 sub_80049130(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80049130u, "SCUS_942.49");
  uint32 v3; 
  int i; 
  uint8 v5; 

  v3 = a2;
  for ( i = 0; TM3_DRAFT_U8(v3); ++v3 )
  {
    if ( TM3_DRAFT_U32(a1 + 8) )
    {
      if ( TM3_DRAFT_U8(v3) == 32 )
      {
        i += TM3_DRAFT_U8(a1 + 18);
      }
      else
      {
        v5 = sub_800564E4(TM3_DRAFT_U8(v3));
        i += TM3_DRAFT_U8(a1 + 4 * (v5 - 32) + 23)
           - TM3_DRAFT_U8(a1 + 4 * (v5 - 32) + 21)
           + TM3_DRAFT_U8(a1 + 19);
      }
    }
    else
    {
      i += TM3_DRAFT_U8(a1 + 13);
    }
  }
  return i;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002E560(uint32 a1, uint32 a2)
{
    uint32 original_local_words[12];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8002E560u, "SCUS_942.49");
  sint16 v4; 
  sint16 v5; 
  int vars0; 

  sub_800276AC(
    a1 + 8,
    0,
    TM3_DRAFT_U16(2 * TM3_DRAFT_U8(a1 + 326) - 2146916392),
    0,
    0,
    -1);
  v4 = TM3_DRAFT_U16(a1 + 126);
  v5 = TM3_DRAFT_U16(a1 + 132);
  (*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4])))[0] = TM3_DRAFT_U16(a1 + 120);
  (*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4])))[1] = v4;
  (*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4])))[2] = v5;
  sub_80013F78((int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */, TM3_DRAFT_U16(a1 + 114), TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 40u, sizeof(sint16[4]))))));
  TM3_DRAFT_I32(original_local_address + 28u) -= TM3_DRAFT_U32(4 * TM3_DRAFT_U8(a1 + 326) - 2146916272) << 12;
  return sub_80033D4C(a2, TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80012B64(void)
{
    FUNCTION_MARKER(0x80012B64u, "SCUS_942.49");
  int result; 
  uint32 v1; 
  int v2; 
  int v3; 
  int v4; 

  result = TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089C98u) + 10280);
  v1 = 0;
  if ( result )
  {
    v2 = 0;
    do
    {
      v3 = TM3_DRAFT_U32(0x80089CA4u) + v2;
      v4 = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA4u) + v2 + 1);
      TM3_DRAFT_U16(v3 + 4) = 0;
      TM3_DRAFT_U8(v3 + 2) = 0;
      TM3_DRAFT_U32(v3 + 296) = 0;
      if ( v4 )
      {
        sub_80012A20(v3, v4, 0);
        sub_80012AC8(v3, 0);
        TM3_DRAFT_U8(v3 + 1) = 0;
        sub_80012A20(v3, 0, 1u);
        sub_80012AC8(v3, 1);
      }
      result = ++v1 < TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089C98u) + 10280);
      v2 += 316;
    }
    while ( v1 < TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089C98u) + 10280) );
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80035E98(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80035E98u, "SCUS_942.49");
  int v3; 
  uint32 v4; 
  uint32 v5; 
  int v6; 
  int result; 
  int v8; 

  if ( TM3_DRAFT_U16(a1 + 12) )
  {
    v8 = TM3_DRAFT_U16(a1 + 12) + TM3_DRAFT_U8(a1 + 11);
    result = (sint16)v8 < 4097;
    TM3_DRAFT_U16(a1 + 12) = v8;
    if ( (sint16)v8 >= 4097 )
    {
      result = v8 - 4096;
      TM3_DRAFT_U16(a1 + 12) = v8 - 4096;
    }
  }
  else
  {
    v3 = 108 * TM3_DRAFT_U32(0x80089828u) - 2146624064;
    v4 = abs32(TM3_DRAFT_U16(a2) - TM3_DRAFT_U32(v3 + 48));
    v5 = abs32(TM3_DRAFT_U16(a2 + 2u * (2)) - TM3_DRAFT_U32(v3 + 56));
    v6 = (v4 - v5) & ((int)(v4 - v5) >> 31);
    LOWORD(v4) = v4 - v6;
    result = (int)(v6 + v5) / 2;
    TM3_DRAFT_U16(a1 + 12) = v4 + result;
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80041BE0(void)
{
    FUNCTION_MARKER(0x80041BE0u, "SCUS_942.49");
  int result; 
  int v1; 
  int v2; 
  int v3; 

  result = TM3_DRAFT_U32(0x800D2F14u);
  if ( !TM3_DRAFT_U32(0x800D2F14u) )
  {
    result = ((uint16)TM3_DRAFT_U32(0x80089DF8u) + 68) & 0xFFF;
    TM3_DRAFT_U32(0x80089DF8u) = result;
    v1 = 0;
    if ( TM3_DRAFT_U32(0x800D2E88u) > 0 )
    {
      v2 = -2146622488;
      do
      {
        if ( TM3_DRAFT_U32(v2) )
        {
          v3 = TM3_DRAFT_U32(v2 + 4) - 1;
          TM3_DRAFT_U32(v2 + 4) = v3;
          if ( v3 <= 0 )
          {
            sub_800415A8(v1);
            TM3_DRAFT_U32(v2 + 4) = 60;
          }
        }
        result = ++v1 < TM3_DRAFT_U32(0x800D2E88u);
        v2 += 200;
      }
      while ( v1 < TM3_DRAFT_U32(0x800D2E88u) );
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002F880(uint32 a1)
{
    uint32 original_local_words[6];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8002F880u, "SCUS_942.49");
  int v3; 
  int vars0; 
  int vars4; 

  v3 = TM3_DRAFT_U32(a1 + 4208);
  if ( v3 )
  {
    sub_8004A570(v3);
    TM3_DRAFT_U32(a1 + 4208) = 0;
  }
  else
  {
    LOWORD(TM3_DRAFT_I32(original_local_address + 16u)) = (TM3_DRAFT_I16(a1 + 2164) + TM3_DRAFT_I16(a1 + 2052)) / 2;
    HIWORD(TM3_DRAFT_I32(original_local_address + 16u)) = (TM3_DRAFT_I16(a1 + 2166) + TM3_DRAFT_I16(a1 + 2054)) / 2;
    LOWORD(TM3_DRAFT_I32(original_local_address + 20u)) = (TM3_DRAFT_I16(a1 + 2168) + TM3_DRAFT_I16(a1 + 2056)) / 2;
    TM3_DRAFT_U32(a1 + 4208) = sub_8004A294(
                               TM3_DRAFT_I16(a1 + 4202),
                               TM3_DRAFT_I16(a1 + 4204),
                               a1,
                               (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 16u), 8u));
  }
  return TM3_DRAFT_U32(a1 + 4208);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80032B74(uint32 a1, uint32 a2)
{
    uint32 original_local_words[18];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80032B74u, "SCUS_942.49");
  int v4; 

  v4 = sub_8002E964(a2, a1, TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[32])psx_addr(original_local_address + 40u, sizeof(char[32]))), sizeof((*(char (*)[32])psx_addr(original_local_address + 40u, sizeof(char[32]))))) /* TODO: Local buffer adapter */);
  sub_80026B88(a1, 2, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4]))))));
  sub_8004A294(8, 15, 18, a1, v4, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4]))))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[32])psx_addr(original_local_address + 40u, sizeof(char[32]))), sizeof((*(char (*)[32])psx_addr(original_local_address + 40u, sizeof(char[32]))))) /* TODO: Local buffer adapter */, a2);
  return sub_8004A294(22, TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 55), 5, a1, 1200);
}


/* Unverified draft; TODO items require later review */
uint32 sub_800163A0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    uint32 original_local_words[11];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x800163A0u, "SCUS_942.49");
  int v13; 

  (*(int (*)[2])psx_addr(original_local_address + 16u, sizeof(int[2])))[0] = a1;
  (*(int (*)[2])psx_addr(original_local_address + 16u, sizeof(int[2])))[1] = TM3_DRAFT_U32(a3);
  TM3_DRAFT_I16(original_local_address + 24u) = TM3_DRAFT_U16(a3) + TM3_DRAFT_U16(a4);
  TM3_DRAFT_I16(original_local_address + 26u) = TM3_DRAFT_U16(a3 + 2) + TM3_DRAFT_U16(a4 + 2u * (1));
  TM3_DRAFT_I32(original_local_address + 28u) = TM3_DRAFT_I16(a4);
  v13 = TM3_DRAFT_I16(a4 + 2u * (1));
  TM3_DRAFT_I32(original_local_address + 36u) = a5;
  TM3_DRAFT_I32(original_local_address + 32u) = v13;
  if ( v13 >= 0 )
    TM3_DRAFT_I8(original_local_address + 40u) = 0;
  else
    TM3_DRAFT_I8(original_local_address + 40u) = 2;
  if ( TM3_DRAFT_I32(original_local_address + 28u) >= 0 )
    TM3_DRAFT_I8(original_local_address + 40u) |= 1u;
  return sub_80016458(a2, (uint32)0x3E7, TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[2])psx_addr(original_local_address + 16u, sizeof(int[2]))), sizeof((*(int (*)[2])psx_addr(original_local_address + 16u, sizeof(int[2]))))) /* TODO: Local buffer adapter */);
}


/* Unverified draft; TODO items require later review */
uint32 sub_80065D34(uint32 a1)
{
    FUNCTION_MARKER(0x80065D34u, "SCUS_942.49");
  char v2; 

  if ( TM3_DRAFT_U32(0x80087DECu) == TM3_DRAFT_U32(0x80087DFCu) && TM3_DRAFT_U32(0x80087DE8u) )
  {
    tm3_draft_indirect(TM3_DRAFT_U32(0x80087DDCu), 0u);
    tm3_draft_indirect(TM3_DRAFT_U32(0x80087DD8u), 0u);
  }
  if ( TM3_DRAFT_U32(0x80087E2Cu) )
  {
    tm3_draft_indirect(TM3_DRAFT_U32(0x80087DC4u), 1u, TM3_DRAFT_U32(a1 + 12));
    tm3_draft_indirect(TM3_DRAFT_U32(0x80087DC4u), 1u, TM3_DRAFT_U32(a1 + 12) + 240);
  }
  if ( TM3_DRAFT_U8(a1 + 55) )
    v2 = TM3_DRAFT_U8(a1 + 55);
  else
    v2 = 66;
  return sub_80064DB0(a1, v2);
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003EFF0(uint32 a1)
{
    uint32 original_local_words[8];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8003EFF0u, "SCUS_942.49");
  sint16 v2; 
  sint16 v3; 
  int v4; 
  sint16 v5; 
  sint16 v6; 
  sint16 v7; 
  sint16 v8; 
  int v9; 
  int v10; 

  v2 = TM3_DRAFT_U16(a1 + 4);
  TM3_DRAFT_U16(a1 + 60) = TM3_DRAFT_U16(a1);
  v3 = TM3_DRAFT_U16(a1 + 2);
  v4 = a1 + 60;
  TM3_DRAFT_U16(v4 + 4) = v2;
  TM3_DRAFT_U16(v4 + 2) = v3;
  v5 = TM3_DRAFT_U16(a1 + 10);
  v6 = TM3_DRAFT_U16(a1 + 12);
  TM3_DRAFT_U16(a1 + 66) = TM3_DRAFT_U16(a1 + 8);
  TM3_DRAFT_U16(a1 + 68) = v5;
  TM3_DRAFT_U16(a1 + 70) = v6;
  v7 = TM3_DRAFT_U16(a1 + 18);
  v8 = TM3_DRAFT_U16(a1 + 20);
  TM3_DRAFT_U16(a1 + 72) = TM3_DRAFT_U16(a1 + 16);
  TM3_DRAFT_U16(a1 + 74) = v7;
  TM3_DRAFT_U16(a1 + 76) = v8;
  v9 = TM3_DRAFT_U32(a1 + 52);
  v10 = TM3_DRAFT_U32(a1 + 56);
  (*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[0] = 0u - TM3_DRAFT_U32(a1 + 48);
  (*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[1] = -v9;
  (*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[2] = -v10;
  return sub_8005B774((uint32)v4, TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))), (uint32)(a1 + 80));
}


/* Unverified draft; TODO items require later review */
uint32 sub_800148DC(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x800148DCu, "SCUS_942.49");
    sint32 coordinates[3] = {
        TM3_DRAFT_I16(a2), TM3_DRAFT_I16(a2 + 2u), TM3_DRAFT_I16(a2 + 4u)
    };
    uint32 previous[3] = {
        TM3_DRAFT_U32(a1), TM3_DRAFT_U32(a1 + 4u), TM3_DRAFT_U32(a1 + 8u)
    };
    uint32 result = 32u - a4;
    uint32 lower_shift = (a4 - 1u) & 31u;
    uint32 upper_shift = result & 31u;
    for (uint32 index = 0u; index < 3u; ++index)
    {
        sint64 product = (sint64)coordinates[index] * (sint32)a3;
        uint32 lower = (uint32)product >> lower_shift;
        uint32 upper = (uint32)((uint64)product >> 32u) << upper_shift;
        uint32 rounded = ((lower >> 1u) | upper) + (lower & 1u);
        TM3_DRAFT_U32(a1 + index * 4u) = previous[index] + rounded;
    }
    return result;
}



