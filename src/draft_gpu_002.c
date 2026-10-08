#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

#define dword_80089888 TM3_DRAFT_U32(0x80089888u)
#define dword_8007ED54 TM3_DRAFT_U32(0x8007ED54u)
#define dword_8008988C TM3_DRAFT_U32(0x8008988Cu)
#define dword_8007ED4C TM3_DRAFT_U32(0x8007ED4Cu)
#define dword_80089E04 TM3_DRAFT_U32(0x80089E04u)
#define dword_8007EE54 TM3_DRAFT_U32(0x8007EE54u)
#define dword_8007EED4 TM3_DRAFT_U32(0x8007EED4u)
#define dword_8007EF2C TM3_DRAFT_U32(0x8007EF2Cu)
#define dword_8007ED5C TM3_DRAFT_U32(0x8007ED5Cu)
#define dword_80089DD0 TM3_DRAFT_U32(0x80089DD0u)
#define dword_80089C98 TM3_DRAFT_U32(0x80089C98u)
#define dword_8007BCE4 TM3_DRAFT_U32(0x8007BCE4u)
#define dword_80089CA0 TM3_DRAFT_U32(0x80089CA0u)
#define dword_80089E70 TM3_DRAFT_U32(0x80089E70u)
#define dword_80089CB8 TM3_DRAFT_U32(0x80089CB8u)
#define dword_8007BAD0 TM3_DRAFT_U32(0x8007BAD0u)
#define dword_80089CBC TM3_DRAFT_U32(0x80089CBCu)
#define dword_80089CF8 TM3_DRAFT_U32(0x80089CF8u)
#define dword_80089CE8 TM3_DRAFT_U32(0x80089CE8u)
#define dword_80089CF0 TM3_DRAFT_U32(0x80089CF0u)
#define dword_80089D14 TM3_DRAFT_U32(0x80089D14u)
#define dword_8007EA18 TM3_DRAFT_U32(0x8007EA18u)
#define dword_80089C80 TM3_DRAFT_U32(0x80089C80u)
#define dword_80089EA0 TM3_DRAFT_U32(0x80089EA0u)
#define dword_80089EC0 TM3_DRAFT_U32(0x80089EC0u)
#define dword_80089EBC TM3_DRAFT_U32(0x80089EBCu)
#define dword_80089E98 TM3_DRAFT_U32(0x80089E98u)

/* Unverified decompiler-derived draft */
uint32 sub_80049284(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, ...)
{
  uint32 optional_words[8];
  uint32 optional_count = ((a7 & 2u) ? 3u : 0u) + ((a7 & 0x10u) ? 2u : 0u) + ((a7 & 0x20u) ? 3u : 0u);
  uint32 optional_index;
  va_list optional_arguments;
  va_start(optional_arguments, a7);
  for (optional_index = 0; optional_index < optional_count; ++optional_index)
    optional_words[optional_index] = va_arg(optional_arguments, uint32);
  va_end(optional_arguments);

  int v20; 
  int v21; 
  uint32 v22; 
  int v23; 
  uint32 v24; 
  int v25; 
  uint32 v26; 
  int v27; 
  uint32 v28; 
  unsigned int v29; 
  int v30; 
  int v31; 
  char v32; 
  int v33; 
  char v34; 
  int v35; 
  uint32 v36; 
  int v37; 
  int v38; 
  char v40; 
  char v41; 
  char v42; 
  int v43; 
  int v44; 
  uint32 v45; 
  int v46; 
  int v47; 

  v20 = a3;
  v21 = a4;
  v22 = TM3_DRAFT_LOCAL_ADDRESS(optional_words, sizeof(optional_words));
  if ( TM3_DRAFT_U32(a5 + 133692) < (unsigned int)(a5 + 133692) )
  {
    if ( (a7 & 2) != 0 )
    {
      v22 = TM3_DRAFT_LOCAL_ADDRESS(optional_words + 3, sizeof(optional_words) - 12u);
      v40 = optional_words[0];
      v41 = optional_words[1];
      v42 = (char)optional_words[2];
    }
    if ( (a7 & 8) != 0 )
    {
      v20 = a3 - sub_80049130(a2, a1);
    }
    else if ( (a7 & 4) != 0 )
    {
      v20 = a3 - sub_80049130(a2, a1) / 2;
    }
    v23 = a7 & 0x10;
    if ( (a7 & 0x40) != 0 )
    {
      v21 -= TM3_DRAFT_U8(a2 + 20) >> 1;
      v23 = a7 & 0x10;
    }
    if ( v23 )
    {
      v24 = (uint32)((v22 + (1) * 4u));
      v25 = TM3_DRAFT_U32(v24 -(1) * 4u);
      v22 = v24 + 4;
      v46 = v25;
      v47 = TM3_DRAFT_U32((v22 - (1) * 4u));
    }
    if ( (a7 & 0x20) != 0 )
    {
      v43 = TM3_DRAFT_U32(v22);
      v44 = TM3_DRAFT_U32(v22 + 4);
      v45 = TM3_DRAFT_U32(v22 + 8);
    }
    if ( TM3_DRAFT_I8(a1) )
    {
      v28 = a1;
      do
      {
        v29 = TM3_DRAFT_U32(a5 + 132920);
        if ( v29 >= a5 + 132920 )
          break;
        v30 = TM3_DRAFT_U32(a2 + 8) ? sub_80048FF0(v29, (uint32)a2, TM3_DRAFT_I8(v28)) : sub_800490BC(
                                                                             v29,
                                                                             (uint32)a2,
                                                                             (uint8)TM3_DRAFT_I8(v28));
        if ( v30 >= 0 )
        {
          TM3_DRAFT_U16(TM3_DRAFT_U32(a5 + 132920) + 8) = v20;
          TM3_DRAFT_U16(TM3_DRAFT_U32(a5 + 132920) + 10) = v21;
          TM3_DRAFT_U16(TM3_DRAFT_U32(a5 + 132920) + 14) = TM3_DRAFT_U16(a2 + 4);
          v31 = TM3_DRAFT_U32(a5 + 132920);
          v32 = (a7 & 1) != 0 ? TM3_DRAFT_U8(v31 + 7) | 2 : TM3_DRAFT_U8(v31 + 7) & 0xFD;
          TM3_DRAFT_U8(v31 + 7) = v32;
          if ( (a7 & 2) != 0 )
          {
            TM3_DRAFT_U8(TM3_DRAFT_U32(a5 + 132920) + 4) = v40;
            TM3_DRAFT_U8(TM3_DRAFT_U32(a5 + 132920) + 5) = v41;
            TM3_DRAFT_U8(TM3_DRAFT_U32(a5 + 132920) + 6) = v42;
            v33 = TM3_DRAFT_U32(a5 + 132920);
            v34 = TM3_DRAFT_U8(v33 + 7) & 0xFE;
          }
          else
          {
            v33 = TM3_DRAFT_U32(a5 + 132920);
            v34 = TM3_DRAFT_U8(v33 + 7) | 1;
          }
          TM3_DRAFT_U8(v33 + 7) = v34;
          TM3_DRAFT_U32(TM3_DRAFT_U32(a5 + 132920)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a5 + 132920)) & 0xFF000000 | TM3_DRAFT_U32(a6) & 0xFFFFFF;
          TM3_DRAFT_U32(a6) = TM3_DRAFT_U32(a6) & 0xFF000000 | TM3_DRAFT_U32(a5 + 132920) & 0xFFFFFF;
          v20 += v30;
          TM3_DRAFT_U32(a5 + 132920) += 20;
        }
        else
        {
          v20 -= v30;
        }
        (v28 += 1u);
      }
      while ( TM3_DRAFT_I8(v28) );
    }
    TM3_DRAFT_U8(TM3_DRAFT_U32(a5 + 133692) + 3) = 1;
    v35 = -520093696;
    if ( TM3_DRAFT_U32(0x800d2ef0u) )
      v35 = -520093184;
    TM3_DRAFT_U32(TM3_DRAFT_U32(a5 + 133692) + 4) = TM3_DRAFT_U16(a2 + 2) & 0x9FF | v35;
    TM3_DRAFT_U32(TM3_DRAFT_U32(a5 + 133692)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a5 + 133692)) & 0xFF000000 | TM3_DRAFT_U32(a6) & 0xFFFFFF;
    TM3_DRAFT_U32(a6) = TM3_DRAFT_U32(a6) & 0xFF000000 | TM3_DRAFT_U32(a5 + 133692) & 0xFFFFFF;
    TM3_DRAFT_U32(a5 + 133692) += 8;
    if ( (a7 & 0x10) != 0 )
    {
      v36 = 0;
      if ( (a7 & 0x20) != 0 )
      {
        v37 = v43;
        v38 = v44;
        v36 = v45;
      }
      else
      {
        v38 = 0;
        v37 = 0;
      }
      sub_80049284(a1, a2, a3 + v46, a4 + v47, a5, a6, a7 & 0xFFFFFFCD | 2, v37, v38, v36);
    }
  }
  return v20;
}

/* Unverified decompiler-derived draft */
uint32 sub_80048BAC(void)
{
  int v0; 
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  uint32 v6; 
  int v7; 
  uint32 v8; 
  int v9; 
  int v10; 
  int v11; 
  uint32 v12; 
  int v13; 
  int i; 
  int v15; 
  int v16; 
  int v17; 
  uint32 v18; 
  uint32 v19; 
  uint32 v20; 
  int v21; 
  sint32 v22; 
  int v23; 
  uint32 v24; 
  int v25; 
  uint32 v26; 
  int v27; 
  int v28; 
  uint32 v29; /* TODO Guest callback signature */ 
  int v30; 
  int v32; 
  int v33; 
  uint8 draw_environment[96];
  int v35; 
  int v36; 
  sint16 v37[12]; 
  int v38[64]; 
  int j; 
  uint32 draw_address = TM3_DRAFT_LOCAL_ADDRESS(draw_environment, sizeof(draw_environment));
  uint32 display_address = TM3_DRAFT_LOCAL_ADDRESS(v37, sizeof(v37));
  uint32 files_address = TM3_DRAFT_LOCAL_ADDRESS(v38, sizeof(v38));

  sub_800572E4(draw_address, 0, 0, 320, 240);
  sub_80057398(display_address, 0, 0, 320, 240);
  v0 = -1;
  v37[6] = 256;
  v37[7] = 256;
  v37[4] = TM3_DRAFT_U16(0x800d2ee0u);
  v37[5] = TM3_DRAFT_U16(0x800d2ee4u);
  sub_80057F80(display_address);
  sub_80057DB4(draw_address);
  if ( TM3_DRAFT_U32(0x800d2f20u) == 2 )
  {
    if ( !dword_80089888 )
    {
      v0 = 0;
      dword_80089888 = 1;
      v38[0] = (int)0x8007ED54u;
      dword_8008988C = 0;
LABEL_6:
      v38[1] = (int)0x80048510u;
    }
  }
  else if ( !dword_8008988C )
  {
    v0 = 0;
    dword_8008988C = 1;
    v38[0] = (int)0x8007ED4Cu;
    dword_80089888 = 0;
    goto LABEL_6;
  }
  sub_80040AD8();
  TM3_DRAFT_U32(0x80089E04u + (12) * 4u) = 0;
  if ( TM3_DRAFT_U32(0x800d2e98u) >= 16
    || (v1 = TM3_DRAFT_U32(0x800d2e98u) + 1, TM3_DRAFT_U32(4 * TM3_DRAFT_U32(0x800d2e98u) - 2146619768 + 24) >= 0x10u) )
  {
    v1 = TM3_DRAFT_U32(0x800d2e98u);
  }
  v2 = 0;
  if ( v1 > 0 )
  {
    v3 = -2146619768;
    do
    {
      v4 = 0;
      if ( TM3_DRAFT_U32(0x80089E04u + (12) * 4u) <= 0 )
        goto LABEL_17;
      v5 = -2146917400;
      do
      {
        if ( TM3_DRAFT_U32(v5) == TM3_DRAFT_U32(v3 + 24) )
          break;
        ++v4;
        v5 += 8;
      }
      while ( v4 < TM3_DRAFT_U32(0x80089E04u + (12) * 4u) );
      if ( v4 >= TM3_DRAFT_U32(0x80089E04u + (12) * 4u) )
      {
LABEL_17:
        ++v0;
        v6 = (uint32)(8 * TM3_DRAFT_U32(0x80089E04u + (12) * 4u) - 2146917400);
        v7 = TM3_DRAFT_U32(0x80089E04u + (12) * 4u) + 1;
        TM3_DRAFT_U32(v6) = TM3_DRAFT_U32(v3 + 24);
        TM3_DRAFT_U32(v6 + (1) * 4u) = 0;
        TM3_DRAFT_U32(0x80089E04u + (12) * 4u) = v7;
        v8 = files_address + 8u * v0;
        v9 = TM3_DRAFT_U32(v3 + 24);
        TM3_DRAFT_I32(v8 + (1) * 4u) = (int)0x80048590u;
        TM3_DRAFT_I32(v8) = (int)(0x8007EE54u + (2 * v9) * 4u);
      }
      ++v2;
      v3 += 4;
    }
    while ( v2 < v1 );
  }
  v10 = TM3_DRAFT_U32(0x80089E04u + (12) * 4u);
  if ( TM3_DRAFT_U32(0x80089E04u + (12) * 4u) < 16 )
  {
    v11 = 8 * TM3_DRAFT_U32(0x80089E04u + (12) * 4u);
    do
    {
      ++v10;
      v12 = (uint32)(v11 - 2146917400);
      TM3_DRAFT_U32(v12) = -1;
      TM3_DRAFT_U32(v12 + (1) * 4u) = 0;
      TM3_DRAFT_U32(0x80089E04u + (12) * 4u) = v10;
      v11 = 8 * v10;
    }
    while ( v10 < 16 );
  }
  TM3_DRAFT_U32(0x80089E04u + (12) * 4u) = 0;
  v13 = 8;
  if ( TM3_DRAFT_U32(0x800d2f20u) != 2 )
  {
    v13 = TM3_DRAFT_U32(0x800d2e9cu);
    if ( TM3_DRAFT_U32(0x800d2f2cu) == 1 )
    {
      for ( i = 0; i < 3; ++i )
      {
        if ( sub_80048078(i) )
          v13 = i + 8;
      }
    }
  }
  v15 = v0 + 1;
  v16 = 2 * v15;
  v17 = v15 + 1;
  v18 = files_address + 4u * v16;
  TM3_DRAFT_I32(v18) = (int)(0x8007EED4u + (2 * v13) * 4u);
  TM3_DRAFT_I32(v18 + (1) * 4u) = (int)0x80048530u;
  v19 = files_address + 8u * v17;
  TM3_DRAFT_I32(v19 + (1) * 4u) = (int)0x8004864Cu;
  TM3_DRAFT_I32(v19) = (int)(0x8007EF2Cu + (2 * v13) * 4u);
  if ( TM3_DRAFT_U32(0x800d2f20u) == 2 )
  {
    ++v17;
    v20 = files_address + 8u * v17;
    TM3_DRAFT_I32(v20) = (int)0x8007ED5Cu;
    TM3_DRAFT_I32(v20 + (1) * 4u) = (int)0x80048A90u;
  }
  TM3_DRAFT_U32(0x80089E04u + (11) * 4u) = 0;
  v21 = v17 + 1;
  v22 = v17 + 1 <= 0;
  v23 = 0;
  if ( !v22 )
  {
    v24 = files_address;
    do
    {
      ++v23;
      TM3_DRAFT_U32(0x80089E04u + (11) * 4u) += TM3_DRAFT_U32(TM3_DRAFT_I32(v24) + 4);
      v24 += (2) * 4u;
    }
    while ( v23 < v21 );
  }
  TM3_DRAFT_U32(0x80089E04u + (10) * 4u) = 0;
  TM3_DRAFT_U32(0x80089E04u + (9) * 4u) = 0;
  v25 = 0;
  for ( j = sub_80049EE8(); v25 < v21; ++v25 )
  {
    v26 = files_address + 8u * v25;
    v27 = TM3_DRAFT_I32(v26);
    v28 = TM3_DRAFT_U32(TM3_DRAFT_I32(v26) + 4);
    TM3_DRAFT_U32(0x80089E04u + (10) * 4u) += TM3_DRAFT_U32(0x80089E04u + (9) * 4u);
    TM3_DRAFT_U32(0x80089E04u + (9) * 4u) = v28;
    sub_80040238(v27, j, 0x800481E8u);
    v29 = TM3_DRAFT_U32(v26 + 4);
    if ( v29 )
    {
      v30 = tm3_draft_indirect(v29, 2u, j, TM3_DRAFT_U32(TM3_DRAFT_I32(v26) + 4));
      j += v30;
    }
    else
    {
      j += TM3_DRAFT_U32(TM3_DRAFT_I32(v26) + 4);
    }
    sub_80049F50(TM3_DRAFT_LOCAL_ADDRESS(&j, sizeof(j)));
  }
  return sub_80049F24(j);
}

/* Unverified decompiler-derived draft */
uint32 sub_80029660(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, ...)
{
  uint32 ida_A0, ida_A2, ida_A3, ida_T0, ida_T6, ida_V0; /* TODO Explicit adapter values */
  uint32 v16; 
  int result; 
  int v18; 
  int v19; 
  int v20; 
  uint32 v21; 
  int v23; 
  int v24; 
  uint32 v25; 
  uint32 v26; 
  char v27; 
  char v28; 
  int v29; 
  int v30; 
  int v32; 
  int v34; 
  int v37; 
  int v39; 
  char v41; 
  int v42; 
  uint32 v43; 
  int v44; 
  char v45; 
  int v46; 
  int v47; 
  int v49; 
  int v51; 
  int v53; 
  char v55; 

  v16 = TM3_DRAFT_U32(a6);
  if ( TM3_DRAFT_U32(a6) + 52 * (unsigned int)TM3_DRAFT_U8(a1 + (1) * 1u) >= a7 )
    return 0;
  v18 = 528482292;
  v19 = 528482804;
  v20 = TM3_DRAFT_U8(a1);
  v21 = (uint32)(a2 + TM3_DRAFT_U32(a1 +(1) * 4u));
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
      v19 += 12;
      v18 += 12;
      /* TODO GTE adapters */
  tm3_draft_gte_command(0x280030u);
      v20 -= 3;
      ida_A2 += 24;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO swc2    $12, 0($t0)");
  tm3_draft_unimplemented("TODO swc2    $13, 4($t0)");
  tm3_draft_unimplemented("TODO swc2    $14, 8($t0)");
  tm3_draft_unimplemented("TODO swc2    $17, 0($a0)");
  tm3_draft_unimplemented("TODO swc2    $18, 4($a0)");
  tm3_draft_unimplemented("TODO swc2    $19, 8($a0)");
    }
    while ( v20 > 0 );
  }
  v23 = 0;
  if ( TM3_DRAFT_U8(a1 + (1) * 1u) )
  {
    v24 = 12 * a4;
    v25 = (uint32)(v16 + (7) * 4u);
    v26 = v21 + 6;
    while ( 1 )
    {
      v27 = TM3_DRAFT_U8(v26 - 3);
      if ( v27 == 38 )
        goto LABEL_20;
      if ( TM3_DRAFT_U8(v26 - 3) < 0x27u )
        break;
      if ( v27 != 44 )
      {
        result = 0;
        if ( v27 != 46 )
          return result;
      }
      v28 = TM3_DRAFT_U8(v26 - 5);
      v29 = TM3_DRAFT_U32(v26 + 2) + v24;
      v30 = 4 * TM3_DRAFT_U8(v26 - 2);
      ida_A0 = v30 + 528482304;
      v32 = 4 * TM3_DRAFT_U8(v26 - 1);
      ida_A2 = v32 + 528482304;
      v34 = 4 * TM3_DRAFT_U8(v26);
      ida_A3 = v34 + 528482304;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $12, 0($a0)");
  tm3_draft_unimplemented("TODO lwc2    $13, 0($a2)");
  tm3_draft_unimplemented("TODO lwc2    $14, 0($a3)");
      TM3_DRAFT_U32(v25 + 5) = TM3_DRAFT_U32(v29);
      TM3_DRAFT_U32(v25 + 13) = TM3_DRAFT_U32(v29 + 4);
      /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
      TM3_DRAFT_U32(v25 + 1) = TM3_DRAFT_U32(v30 + 528482304);
      TM3_DRAFT_U32(v25 + 9) = TM3_DRAFT_U32(v32 + 528482304);
      TM3_DRAFT_U32(v25 + 17) = TM3_DRAFT_U32(v34 + 528482304);
      /* TODO GTE adapters */
  ida_A2 = tm3_draft_gte_read_data(24u);
      v37 = TM3_DRAFT_U8(v26 + (1) * 1u);
      ida_V0 = 4 * v37 + 528482304;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $12, 0($v0)");
      TM3_DRAFT_U16(v25 + 21) = TM3_DRAFT_U16(v29 + 8);
      TM3_DRAFT_U16(v25 + 29) = TM3_DRAFT_U16(v29 + 10);
      /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
      v39 = (TM3_DRAFT_U32(v30 + 528482816)
           + TM3_DRAFT_U32(v32 + 528482816)
           + TM3_DRAFT_U32(v34 + 528482816)
           + TM3_DRAFT_U32(4 * v37 + 0x1F800200)) >> 4;
      /* TODO GTE adapters */
  ida_A0 = tm3_draft_gte_read_data(24u);
      if ( (v28 || ida_A0 <= 0 || ida_A2 > 0) && v39 >= 41 )
      {
        v41 = TM3_DRAFT_U8(v21);
        TM3_DRAFT_I8(v25 - 1) = TM3_DRAFT_U8(v21);
        TM3_DRAFT_I8(v25 - 2) = v41;
        TM3_DRAFT_I8(v25 - 3) = v41;
        v42 = TM3_DRAFT_U32(4 * v37 + 0x1F800000);
        TM3_DRAFT_I8(v25) = v27;
        TM3_DRAFT_U32(v25 + 25) = v42;
        if ( v39 >= dword_80089DD0 )
          v39 = dword_80089DD0 - 1;
        v26 += (12) * 1u;
        v21 += (12) * 1u;
        v43 = (uint32)(4 * v39 + a5);
        v25 += (40) * 1u;
        v44 = (unsigned int)v16 & 0xFFFFFF;
        TM3_DRAFT_I32(v16) = TM3_DRAFT_I32(v43) & 0xFFFFFF | 0x9000000;
        v16 += (10) * 4u;
        goto LABEL_27;
      }
LABEL_23:
      v26 += (12) * 1u;
      v21 += (12) * 1u;
LABEL_28:
      if ( ++v23 >= TM3_DRAFT_U8(a1 + (1) * 1u) )
        return 1;
    }
    result = 0;
    if ( v27 != 36 )
      return result;
LABEL_20:
    v45 = TM3_DRAFT_U8(v26 - 5);
    v46 = TM3_DRAFT_U32(v26 + 2) + v24;
    v47 = 4 * TM3_DRAFT_U8(v26 - 2);
    ida_A3 = (uint32)(v47 + 528482304);
    v49 = 4 * TM3_DRAFT_U8(v26 - 1);
    ida_T6 = (uint32)(v49 + 528482304);
    v51 = 4 * TM3_DRAFT_U8(v26);
    ida_T0 = (uint32)(v51 + 528482304);
    /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $12, 0($a3)");
  tm3_draft_unimplemented("TODO lwc2    $13, 0($t6)");
  tm3_draft_unimplemented("TODO lwc2    $14, 0($t0)");
    TM3_DRAFT_U32(v25 + 5) = TM3_DRAFT_U32(v46);
    TM3_DRAFT_U32(v25 + 13) = TM3_DRAFT_U32(v46 + 4);
    /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
    v53 = (TM3_DRAFT_U32(v47 + 528482816)
         + TM3_DRAFT_U32(v49 + 528482816)
         + TM3_DRAFT_U32(v51 + 528482816)
         + TM3_DRAFT_U32(v47 + 528482816)) >> 4;
    /* TODO GTE adapters */
  ida_A2 = tm3_draft_gte_read_data(24u);
    TM3_DRAFT_U16(v25 + 21) = TM3_DRAFT_U16(v46 + 8);
    if ( (v45 || ida_A2 > 0) && v53 >= 41 )
    {
      TM3_DRAFT_U32(v25 + 1) = TM3_DRAFT_U32(ida_A3);
      TM3_DRAFT_U32(v25 + 9) = TM3_DRAFT_U32(ida_T6);
      TM3_DRAFT_U32(v25 + 17) = TM3_DRAFT_U32(ida_T0);
      v55 = TM3_DRAFT_U8(v21);
      TM3_DRAFT_I8(v25) = v27;
      TM3_DRAFT_I8(v25 - 1) = v55;
      TM3_DRAFT_I8(v25 - 2) = v55;
      TM3_DRAFT_I8(v25 - 3) = v55;
      if ( v53 >= dword_80089DD0 )
        v53 = dword_80089DD0 - 1;
      v26 += (12) * 1u;
      v21 += (12) * 1u;
      v43 = (uint32)(4 * v53 + a5);
      v25 += (32) * 1u;
      v44 = (unsigned int)v16 & 0xFFFFFF;
      TM3_DRAFT_I32(v16) = TM3_DRAFT_I32(v43) & 0xFFFFFF | 0x7000000;
      v16 += (8) * 4u;
LABEL_27:
      TM3_DRAFT_I32(v43) = v44;
      TM3_DRAFT_U32(a6) = v16;
      goto LABEL_28;
    }
    goto LABEL_23;
  }
  return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_80033F18(uint32 a1)
{
  uint8 tuple_41[8];
  uint8 tuple_38[8];
  uint8 tuple_35[16];
  int v2; 
  int v3; 
  signed int v4; 
  sint32 v5; 
  int v6; 
  sint16 v7; 
  sint16 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  signed int v18; 
  int v19; 
  uint16 v20; 
  int v21; 
  sint32 v22; 
  signed int v23; 
  uint16 v24; 
  sint16 v25; 
  sint16 v26; 
  sint16 v27; 
  int v28; 
  int result; 
  sint16 v30; 
  sint16 v31; 
  sint16 v32; 
  sint16 v33; 
  sint16 v34; 

  v2 = TM3_DRAFT_U32(a1 + 64);
  v30 = TM3_DRAFT_U16(v2 - 20);
  v31 = TM3_DRAFT_U16(v2 - 20 + 2);
  v33 = TM3_DRAFT_U16(v2 - 20 + 4);
  TM3_DRAFT_U16(a1 + 72) = v30;
  TM3_DRAFT_U16(a1 + 74) = v31;
  TM3_DRAFT_U16(a1 + 76) = v33;
  v3 = TM3_DRAFT_U32(a1 + 68);
  v4 = 0;
  if ( !v3 || (v5 = sub_800470DC(TM3_DRAFT_U32(a1 + 68)) == 0, v6 = v3 - 20, v5) )
  {
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_38, sizeof(tuple_38)) + 0u) = ((sub_8005AFF4(TM3_DRAFT_U32(a1 + 92) << 7) << 10) + 2048) >> 12;
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_38, sizeof(tuple_38)) + 2u) = 64;
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_38, sizeof(tuple_38)) + 4u) = ((sub_8005AF24(TM3_DRAFT_U32(a1 + 92) << 7) << 10) + 2048) >> 12;
    sub_8005BB84((uint32)(v2 + 8), (int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_38, sizeof(tuple_38)) + 0u), (TM3_DRAFT_LOCAL_ADDRESS(tuple_41, sizeof(tuple_41)) + 0u));
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_38, sizeof(tuple_38)) + 0u) = v30 + TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_41, sizeof(tuple_41)) + 0u);
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_38, sizeof(tuple_38)) + 2u) = v31 + TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_41, sizeof(tuple_41)) + 2u);
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_38, sizeof(tuple_38)) + 4u) = v33 + TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_41, sizeof(tuple_41)) + 4u);
    v7 = v31 + TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_41, sizeof(tuple_41)) + 2u);
    v8 = v33 + TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_41, sizeof(tuple_41)) + 4u);
    TM3_DRAFT_U16(a1 + 80) = v30 + TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_41, sizeof(tuple_41)) + 0u);
    TM3_DRAFT_U16(a1 + 82) = v7;
    TM3_DRAFT_U16(a1 + 84) = v8;
  }
  else
  {
    v32 = TM3_DRAFT_U16(v6 + 2);
    v34 = TM3_DRAFT_U16(v6 + 4);
    TM3_DRAFT_U16(a1 + 80) = TM3_DRAFT_U16(v3 - 20);
    TM3_DRAFT_U16(a1 + 82) = v32;
    TM3_DRAFT_U16(a1 + 84) = v34;
  }
  v9 = TM3_DRAFT_I16(a1 + 80);
  v10 = TM3_DRAFT_I16(a1 + 72);
  v11 = TM3_DRAFT_I16(a1 + 74);
  v12 = TM3_DRAFT_I16(a1 + 76);
  v13 = v10;
  TM3_DRAFT_U16(a1 + 88) = 0;
  TM3_DRAFT_U32(a1 + 20) = v10;
  TM3_DRAFT_U32(a1 + 24) = v11;
  TM3_DRAFT_U32(a1 + 28) = v12;
  v14 = TM3_DRAFT_I16(a1 + 82);
  v15 = TM3_DRAFT_I16(a1 + 84);
  v16 = TM3_DRAFT_I16(a1 + 74);
  v17 = TM3_DRAFT_I16(a1 + 76);
  TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 0u) = v9 - v13;
  TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 4u) = v14 - v16;
  TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 8u) = v15 - v17;
  v18 = sub_80013D64((int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 0u));
  v19 = 40 - ((40 - v18 / 2) & ((40 - v18 / 2) >> 31));
  TM3_DRAFT_U16(a1 + 8 * TM3_DRAFT_U16(a1 + 88) + 96) = 0;
  TM3_DRAFT_U16(a1 + 8 * TM3_DRAFT_U16(a1 + 88) + 98) = 0;
  TM3_DRAFT_U16(a1 + 8 * TM3_DRAFT_U16(a1 + 88) + 100) = 0;
  v20 = TM3_DRAFT_U16(a1 + 88) + 1;
  TM3_DRAFT_U16(a1 + 88) = v20;
  if ( v20 < 0xFu )
  {
    v22 = v18 > 0;
    do
    {
      if ( !v22 )
        break;
      v23 = sub_80039FD4();
      v21 = 40 - ((40 - v18 / 16) & ((40 - v18 / 16) >> 31));
      v4 += v21 - ((v21 - v23 % v19) & ((v21 - v23 % v19) >> 31));
      if ( v4 < v18 )
      {
        TM3_DRAFT_U16(a1 + 8 * TM3_DRAFT_U16(a1 + 88) + 96) = (int)sub_80039FD4() % (v19 / 8);
        TM3_DRAFT_U16(a1 + 8 * TM3_DRAFT_U16(a1 + 88) + 100) = (int)sub_80039FD4() % (v19 / 8);
      }
      else
      {
        TM3_DRAFT_U16(a1 + 8 * TM3_DRAFT_U16(a1 + 88) + 96) = 0;
        v4 = v18;
        TM3_DRAFT_U16(a1 + 8 * TM3_DRAFT_U16(a1 + 88) + 100) = 0;
      }
      TM3_DRAFT_U16(a1 + 8 * TM3_DRAFT_U16(a1 + 88) + 98) = v4;
      v24 = TM3_DRAFT_U16(a1 + 88) + 1;
      TM3_DRAFT_U16(a1 + 88) = v24;
      v5 = v24 < 0xFu;
      v22 = v4 < v18;
    }
    while ( v5 );
  }
  sub_8005B254((uint32)(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 0u), (uint32)(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 0u));
  TM3_DRAFT_U16(a1 + 2) = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 0u);
  TM3_DRAFT_U16(a1 + 8) = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 4u);
  TM3_DRAFT_U16(a1 + 14) = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 8u);
  v25 = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 8u);
  TM3_DRAFT_U16(a1 + 6) = 0;
  TM3_DRAFT_U16(a1) = v25;
  TM3_DRAFT_U16(a1 + 12) = -(sint16)TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_35, sizeof(tuple_35)) + 0u);
  sub_800150FC(a1, 1, 0);
  v26 = TM3_DRAFT_U16(a1 + 82);
  v27 = TM3_DRAFT_U16(a1 + 84);
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U16(a1 + 80);
  v28 = a1 - 20;
  TM3_DRAFT_U16(v28 + 2) = v26;
  TM3_DRAFT_U16(v28 + 4) = v27;
  result = TM3_DRAFT_U32(a1 + 92) + 1;
  TM3_DRAFT_U32(a1 + 92) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800443DC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, ...)
{
  int v12; 
  signed int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  uint32 v23; 
  sint16 v24; 
  sint16 v25; 
  sint16 v26; 
  int v27; 
  int v28; 
  sint16 v29; 
  int v30; 
  int v32; 
  sint16 position[4];
  sint16 direction[4];
  int v39; 
  int v40; 

  if ( TM3_DRAFT_U32(0x800d2f18u) == 1 )
    goto LABEL_7;
  if ( !TM3_DRAFT_U32(0x800d2f2cu) )
  {
    if ( a1 >= TM3_DRAFT_U32(0x800d2e90u) + TM3_DRAFT_U32(0x800d2f38u) )
      goto LABEL_7;
LABEL_6:
    v39 = a1 < TM3_DRAFT_U32(0x800d2e90u);
    goto LABEL_8;
  }
  if ( a1 < TM3_DRAFT_U32(0x800d2e90u) )
    goto LABEL_6;
LABEL_7:
  v39 = 2;
LABEL_8:
  if ( a2 )
  {
    position[0] = a3;
    position[1] = a4;
    position[2] = a5;
    direction[0] = a6;
    direction[1] = a7;
    direction[2] = a8;
  }
  else
  {
    v12 = 0;
    if ( TM3_DRAFT_U32(0x800d340cu) )
    {
      v16 = 0;
      v17 = 0;
      v18 = 0x2000;
      v19 = 0;
      do
      {
        if ( TM3_DRAFT_U16(dword_80089C98 + v19 + 0x2000) || TM3_DRAFT_U16(dword_80089C98 + v19 + 8196) )
        {
          v20 = 0x7FFFFFFF;
          v21 = 0;
          if ( TM3_DRAFT_U32(0x800d340cu) > 0 )
          {
            v22 = 0;
            do
            {
              v23 = (uint32)(TM3_DRAFT_U32(v22 - 2146619768 + 1424) - 20);
              v24 = TM3_DRAFT_I16(v23);
              v25 = TM3_DRAFT_I16(v23 + (1) * 2u);
              LOWORD(v23) = TM3_DRAFT_I16(v23 + (2) * 2u);
              position[0] = v24;
              position[1] = v25;
              position[2] = (sint16)v23;
              v26 = TM3_DRAFT_U16(dword_80089C98 + v18 + 2);
              LOWORD(v23) = (_WORD)v23 - TM3_DRAFT_U16(dword_80089C98 + v18 + 4);
              position[0] = v24 - TM3_DRAFT_U16(dword_80089C98 + v18);
              position[1] = v25 - v26;
              position[2] = (sint16)v23;
              v40 = v16;
              v27 = sub_80015764(position[0], (sint16)(v25 - v26), (sint16)v23);
              v16 = v40;
              if ( v27 < v20 )
                v20 = v27;
              ++v21;
              v22 = 4 * v21;
            }
            while ( v21 < TM3_DRAFT_U32(0x800d340cu) );
          }
          if ( v16 < v20 )
          {
            v16 = v20;
            v12 = v17;
          }
        }
        v18 += 16;
        ++v17;
        v19 += 16;
      }
      while ( v17 < 64 );
    }
    else
    {
      do
      {
        v13 = sub_80039FD4();
        v14 = v13 >> 6;
        if ( v13 < 0 )
          v14 = (v13 + 63) >> 6;
        v12 = v13 - (v14 << 6);
        v15 = dword_80089C98 + 16 * v12;
      }
      while ( !TM3_DRAFT_U16(v15 + 0x2000) && !TM3_DRAFT_U16(v15 + 8196) );
    }
    v28 = dword_80089C98 + 16 * v12;
    position[0] = TM3_DRAFT_U16(v28 + 0x2000);
    position[2] = TM3_DRAFT_U16(v28 + 8196);
    position[1] = sub_800133FC(position[0], position[2]) - 96;
    v29 = TM3_DRAFT_U16(dword_80089C98 + 16 * v12 + 8204);
    direction[0] = TM3_DRAFT_U16(dword_80089C98 + 16 * v12 + 8200);
    direction[1] = 0;
    direction[2] = v29;
  }
  if ( TM3_DRAFT_U32(0x800d2e8cu) && sub_800474AC() == 1 && a1 < TM3_DRAFT_U32(0x800d2e90u) )
  {
    v30 = a1 + TM3_DRAFT_U32(0x800d2e88u);
    if ( a1 + TM3_DRAFT_U32(0x800d2e88u) >= TM3_DRAFT_U32(0x800d2e90u) )
      v30 = a1 - TM3_DRAFT_U32(0x800d2e8cu);
  }
  else
  {
    v30 = a1;
  }
  return sub_8004A294(0, TM3_DRAFT_U32(4 * v30 - 2146619768 + 24), a1, v30, v39, TM3_DRAFT_LOCAL_ADDRESS(position, sizeof(position)), TM3_DRAFT_LOCAL_ADDRESS(direction, sizeof(direction)));
}

/* Unverified decompiler-derived draft */
uint32 sub_80016458(uint32 a1, uint32 a2, uint32 a3)
{
  uint32 v6; 
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
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  uint32 result; 
  int i; 
  int v32; 

  while ( 1 )
  {
    v6 = 0;
    if ( TM3_DRAFT_U8(a1 + (2) * 1u) )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = TM3_DRAFT_U32(TM3_DRAFT_U32(a3) + 36)
           + 28 * TM3_DRAFT_I16(a1 + 12u + 2u * TM3_DRAFT_U8(0x8007BCE4u + 4u * TM3_DRAFT_U8(a3 + 24u) + (uint32)v7));
        v9 = 0;
        if ( (uint32)v8 == a2 )
          goto LABEL_47;
        v10 = 4096;
        v11 = 1;
        v12 = 0x10000 >> (TM3_DRAFT_U8(v8 + 3) & 31u);
        v13 = TM3_DRAFT_U32(a3 + 12);
        v14 = TM3_DRAFT_I16(v8 + 4) - TM3_DRAFT_I16(a3 + 4);
        if ( v13 >= 0 )
        {
          if ( v13 <= 0 )
          {
            if ( v14 <= 0 )
              goto LABEL_14;
LABEL_13:
            v11 = 0;
            goto LABEL_14;
          }
          v16 = (sint32)((uint32)v14 << 12u) / v13;
          if ( v16 > 4096 )
            goto LABEL_13;
          if ( v16 > 0 )
            v9 = (sint32)((uint32)v14 << 12u) / v13;
        }
        else
        {
          v15 = (sint32)((uint32)v14 << 12u) / v13;
          if ( v15 < 0 )
            goto LABEL_13;
          if ( v15 < 4096 )
            v10 = (sint32)((uint32)v14 << 12u) / v13;
        }
LABEL_14:
        if ( !v11 )
          goto LABEL_47;
        v17 = 1;
        v18 = (0u - TM3_DRAFT_U32(a3 + 12));
        v19 = TM3_DRAFT_I16(a3 + 4) - (TM3_DRAFT_I16(v8 + 4) + v12);
        if ( TM3_DRAFT_I32(a3 + 12) <= 0 )
        {
          if ( TM3_DRAFT_I32(a3 + 12) >= 0 )
          {
            if ( v19 <= 0 )
              goto LABEL_25;
LABEL_24:
            v17 = 0;
            goto LABEL_25;
          }
          v21 = (sint32)((uint32)v19 << 12u) / v18;
          if ( v10 < v21 )
            goto LABEL_24;
          if ( v9 < v21 )
            v9 = (sint32)((uint32)v19 << 12u) / v18;
        }
        else
        {
          v20 = (sint32)((uint32)v19 << 12u) / v18;
          if ( v20 < v9 )
            goto LABEL_24;
          if ( v20 < v10 )
            v10 = (sint32)((uint32)v19 << 12u) / v18;
        }
LABEL_25:
        if ( !v17 )
          goto LABEL_47;
        v22 = 1;
        v23 = TM3_DRAFT_U32(a3 + 16);
        v24 = TM3_DRAFT_I16(v8 + 6) - TM3_DRAFT_I16(a3 + 6);
        if ( v23 >= 0 )
        {
          if ( v23 <= 0 )
          {
            if ( v24 > 0 )
LABEL_35:
              v22 = 0;
          }
          else
          {
            v26 = (sint32)((uint32)v24 << 12u) / v23;
            if ( v10 < v26 )
              goto LABEL_35;
            if ( v9 < v26 )
              v9 = (sint32)((uint32)v24 << 12u) / v23;
          }
        }
        else
        {
          v25 = (sint32)((uint32)v24 << 12u) / v23;
          if ( v25 < v9 )
            goto LABEL_35;
          if ( v25 < v10 )
            v10 = (sint32)((uint32)v24 << 12u) / v23;
        }
        if ( v22 )
        {
          v27 = 1;
          v28 = (0u - TM3_DRAFT_U32(a3 + 16));
          v29 = TM3_DRAFT_I16(a3 + 6) - (TM3_DRAFT_I16(v8 + 6) + v12);
          if ( TM3_DRAFT_I32(a3 + 16) <= 0 )
          {
            if ( TM3_DRAFT_I32(a3 + 16) >= 0 )
            {
              if ( v29 > 0 )
                v27 = 0;
            }
            else if ( v10 < (sint32)((uint32)v29 << 12u) / v28 )
            {
              v27 = 0;
            }
          }
          else if ( (sint32)((uint32)v29 << 12u) / v28 < v9 )
          {
            v27 = 0;
          }
          if ( v27 )
          {
            result = (uint32)sub_80016458((uint32)v8, 0, a3);
            v6 = result;
            if ( result )
              return result;
          }
        }
LABEL_47:
        if ( ++v7 >= 4 )
          goto LABEL_53;
      }
    }
    for ( i = TM3_DRAFT_U8(a1) - 1; i >= 0; v6 = 0 )
    {
      v6 = (uint32)(TM3_DRAFT_U32(TM3_DRAFT_U32(a3) + 32) + 8 * TM3_DRAFT_U16(2 * i + TM3_DRAFT_U32(a1 +(5) * 4u)));
      if ( TM3_DRAFT_U8(v6) && sub_80015FB8((int)v6, a3) )
        break;
      --i;
    }
LABEL_53:
    result = v6;
    if ( v6 )
      return result;
    v32 = TM3_DRAFT_I16(a1 +(5) * 2u);
    result = 0;
    if ( v32 < 0 )
      return result;
    if ( !a2 )
      return 0;
    a2 = a1;
    a1 = (uint32)(TM3_DRAFT_U32(TM3_DRAFT_U32(a3) + 36) + 28 * v32);
  }
}

/* Unverified decompiler-derived draft */
uint32 sub_8004864C(uint32 a1, uint32 a2)
{
  int v4; 
  int i; 
  int v6; 
  uint32 v7; 
  int v8; 
  uint32 v9; 
  int v10; 
  uint32 v11; 
  int v12; 
  int v13; 
  int v14; 
  uint32 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  uint32 v20; 
  int v21; 
  uint32 v22; 
  uint32 v23; 
  int v24; 
  int v25; 
  int v26; 
  uint32 v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  uint32 v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 

  sub_80012EB4((int)a1 + TM3_DRAFT_U32(a1));
  dword_80089CA0 = a1 + TM3_DRAFT_U32(a1 + 4);
  if ( TM3_DRAFT_U32(0x800d2f20u) == 2 || TM3_DRAFT_U32(0x800d2f2cu) == 1 && sub_80048078(0) )
  {
    v4 = dword_80089CA0 + 216;
    dword_80089E70 = dword_80089CA0 + 200;
  }
  else
  {
    v4 = dword_80089CA0 + 200;
  }
  dword_80089CB8 = v4;
  if ( TM3_DRAFT_U32(0x800d2f2cu) == 1 )
  {
    for ( i = 0; i < 3; ++i )
    {
      if ( sub_80048078(i) )
        sub_80048094(i);
    }
  }
  v6 = TM3_DRAFT_U32(a1 + (2) * 4u);
  v7 = (uint32)((uint32)(a1 + v6));
  if ( v6 == TM3_DRAFT_U32(a1 + (3) * 4u) )
    v7 = 0x8007BAD0u;
  dword_80089CBC = (int)v7;
  sub_8001590C(a1 + TM3_DRAFT_U32(a1 + 12));
  v8 = TM3_DRAFT_U32(a1 + (4) * 4u);
  v9 = 0;
  if ( v8 != TM3_DRAFT_U32(a1 + (5) * 4u) )
    v9 = (uint32)(a1 + v8);
  sub_8003E0FC((int)v9);
  v10 = 0;
  v11 = a1 + TM3_DRAFT_U32(a1 + 20);
  v12 = TM3_DRAFT_U32(v11 + (34) * 4u);
  TM3_DRAFT_U32(v11 + (36) * 4u) = (v11 + (39) * 4u);
  TM3_DRAFT_U32(v11 + (37) * 4u) = (v11 + (5 * v12 + 39) * 4u);
  v13 = TM3_DRAFT_U32(a1 + (6) * 4u);
  v14 = 0;
  dword_80089CF8 = (int)v11;
  v15 = (uint32)(a1 + v13);
  dword_80089CE8 = (int)v15;
  TM3_DRAFT_U32(v15 +(156) * 4u) = (uint32)(a1 + v13) + 628;
  do
  {
    v16 = 0;
    v17 = v14;
    do
    {
      v18 = TM3_DRAFT_U32(v15 + v17 + 8);
      if ( (v18 & 0x80000000) == 0 )
        TM3_DRAFT_U32(v15 + v17 + 8) = v18 + TM3_DRAFT_U32(v15 +(156) * 4u);
      ++v16;
      v17 += 4;
    }
    while ( v16 < 24 );
    ++v10;
    v14 += 104;
  }
  while ( v10 < 6 );
  v19 = TM3_DRAFT_U32(a1 + (7) * 4u);
  dword_80089CF0 = dword_80089CE8;
  v20 = (uint32)((uint32)(a1 + v19));
  v21 = TM3_DRAFT_U32((uint32)(a1 + v19) + 904);
  v22 = (uint32)(a1 + v19) + 924;
  TM3_DRAFT_U32(v20 + (228) * 4u) = v22;
  v23 = (v22 + (12 * v21) * 1u);
  v24 = TM3_DRAFT_U32(v20 + (227) * 4u);
  v25 = TM3_DRAFT_U32(v20 + (226) * 4u);
  v26 = 0;
  dword_80089D14 = (int)v20;
  TM3_DRAFT_U32(v20 + (229) * 4u) = v23;
  TM3_DRAFT_U32(v20 + (230) * 4u) = (v23 + (8 * v24) * 1u);
  if ( v25 )
  {
    v27 = v20;
    v28 = 0;
    do
    {
      v29 = TM3_DRAFT_U32(v27 + (228) * 4u) + v28;
      v30 = TM3_DRAFT_U32(v29 + 8);
      if ( (v30 & 0x80000000) == 0 )
        TM3_DRAFT_U32(v29 + 8) = v30 + TM3_DRAFT_U32(v27 + (230) * 4u);
      ++v26;
      v28 += 12;
    }
    while ( (unsigned int)v26 < TM3_DRAFT_U32(v27 + (226) * 4u) );
    v26 = 0;
  }
  v31 = dword_80089D14;
  v32 = (uint32)dword_80089D14;
  do
  {
    v33 = TM3_DRAFT_U32(v32 + (98) * 4u);
    if ( (v33 & 0x80000000) == 0 )
      TM3_DRAFT_U32(v32 + (98) * 4u) = v33 + TM3_DRAFT_U32(v31 + 920);
    v34 = TM3_DRAFT_U32(v32 + (20) * 4u);
    if ( (v34 & 0x80000000) == 0 )
      TM3_DRAFT_U32(v32 + (20) * 4u) = v34 + TM3_DRAFT_U32(v31 + 920);
    v35 = TM3_DRAFT_U32(v32 + (46) * 4u);
    if ( (v35 & 0x80000000) == 0 )
      TM3_DRAFT_U32(v32 + (46) * 4u) = v35 + TM3_DRAFT_U32(v31 + 920);
    v36 = TM3_DRAFT_U32(v32 + (72) * 4u);
    if ( (v36 & 0x80000000) == 0 )
      TM3_DRAFT_U32(v32 + (72) * 4u) = v36 + TM3_DRAFT_U32(v31 + 920);
    v37 = TM3_DRAFT_U32(v32 + (124) * 4u);
    if ( (v37 & 0x80000000) == 0 )
      TM3_DRAFT_U32(v32 + (124) * 4u) = v37 + TM3_DRAFT_U32(v31 + 920);
    v38 = TM3_DRAFT_U32(v32 + (150) * 4u);
    if ( (v38 & 0x80000000) == 0 )
      TM3_DRAFT_U32(v32 + (150) * 4u) = v38 + TM3_DRAFT_U32(v31 + 920);
    v39 = TM3_DRAFT_U32(v32 + (176) * 4u);
    if ( (v39 & 0x80000000) == 0 )
      TM3_DRAFT_U32(v32 + (176) * 4u) = v39 + TM3_DRAFT_U32(v31 + 920);
    v40 = TM3_DRAFT_U32(v32 + (202) * 4u);
    if ( (v40 & 0x80000000) == 0 )
      TM3_DRAFT_U32(v32 + (202) * 4u) = v40 + TM3_DRAFT_U32(v31 + 920);
    ++v26;
    (v32 += 4u);
  }
  while ( v26 < 24 );
  return a2;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002EAE0(uint32 a1, uint32 a2)
{
  uint8 tuple_33[16];
  uint8 tuple_30[16];
  uint8 tuple_27[16];
  uint8 tuple_22[8];
  unsigned int result; 
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
  int v14; 
  int v15; 
  int v16; 
  sint16 v17; 
  sint16 v18; 
  int v19; 
  sint16 v20; 
  sint32 v21; 
  sint16 v25[4]; 
  int v26[4]; 

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
  v6 = TM3_DRAFT_I16(a1 + 10);
  v7 = TM3_DRAFT_I16(a1 + 12);
  TM3_DRAFT_U32(a1 + 136) = TM3_DRAFT_I16(a1 + 8);
  TM3_DRAFT_U32(a1 + 140) = v6;
  TM3_DRAFT_U32(a1 + 144) = v7;
  if ( !v5 )
    return sub_8002DEA4(a1);
  v8 = TM3_DRAFT_U32(a1 + 164);
  v9 = TM3_DRAFT_U16(a1 + 108);
  if ( v8 && !sub_800470DC(TM3_DRAFT_U32(a1 + 164)) )
    v8 = 0;
  if ( v9 && v8 )
  {
    v10 = TM3_DRAFT_I16(v8 - 20 + 2) - TM3_DRAFT_U32(a1 + 140);
    v11 = TM3_DRAFT_I16(v8 - 20 + 4) - TM3_DRAFT_U32(a1 + 144);
    v26[0] = TM3_DRAFT_I16(v8 - 20) - TM3_DRAFT_U32(a1 + 136);
    v26[1] = v10;
    v26[2] = v11;
    sub_8005B284(a1 + 16, (int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 0u));
    sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(v26, sizeof(v26)), TM3_DRAFT_LOCAL_ADDRESS(v25, sizeof(v25)));
    if ( TM3_DRAFT_U16(a1 + 322) )
    {
      v12 = 2 * TM3_DRAFT_U32(a1 + 148) - TM3_DRAFT_U16(a1 + 322);
      v13 = v12 & (v12 >> 31);
      if ( v13 )
      {
        v14 = (int)sub_80039FD4() % -v13 - v13;
        if ( (v14 & 1) != 0 )
          v14 = -v14;
        sub_80031B90(v25, v14);
      }
    }
    if ( TM3_DRAFT_U8(a1 + 334) )
    {
      v16 = 4096;
    }
    else
    {
      v15 = -((TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 0u) * v25[0] + TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 2u) * v25[1] + TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 4u) * v25[2] + 2048) >> 12);
      v16 = -(v15 & (v15 >> 31));
    }
    sub_80013FB4((int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_27, sizeof(tuple_27)) + 0u), (v16 * v9 + 2048) >> 12, v25);
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 0u) += TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_27, sizeof(tuple_27)) + 0u);
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 4u) += TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_27, sizeof(tuple_27)) + 8u);
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 2u) += TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_27, sizeof(tuple_27)) + 4u);
    sub_8005B284((int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 0u), (int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 0u));
    sub_80013FB4((int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_30, sizeof(tuple_30)) + 0u), TM3_DRAFT_U16(a1 + 112), (TM3_DRAFT_LOCAL_ADDRESS(tuple_22, sizeof(tuple_22)) + 0u));
    v17 = TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_30, sizeof(tuple_30)) + 4u);
    v18 = TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_30, sizeof(tuple_30)) + 8u);
    TM3_DRAFT_U16(a1 + 16) = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_30, sizeof(tuple_30)) + 0u);
    TM3_DRAFT_U16(a1 + 18) = v17;
    TM3_DRAFT_U16(a1 + 20) = v18;
    sub_8005B254((uint32)(TM3_DRAFT_LOCAL_ADDRESS(tuple_30, sizeof(tuple_30)) + 0u), (uint32)(TM3_DRAFT_LOCAL_ADDRESS(tuple_33, sizeof(tuple_33)) + 0u));
    TM3_DRAFT_U16(a1 + 120) = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_33, sizeof(tuple_33)) + 0u);
    TM3_DRAFT_U16(a1 + 126) = TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_33, sizeof(tuple_33)) + 4u);
    TM3_DRAFT_U16(a1 + 132) = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_33, sizeof(tuple_33)) + 8u);
    v19 = a1 + 116;
    if ( TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_33, sizeof(tuple_33)) + 0u) && TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_33, sizeof(tuple_33)) + 8u) )
    {
      v20 = TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_33, sizeof(tuple_33)) + 8u);
      TM3_DRAFT_U16(a1 + 122) = 0;
      TM3_DRAFT_U16(a1 + 116) = v20;
      TM3_DRAFT_U16(a1 + 128) = -(sint16)TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_33, sizeof(tuple_33)) + 0u);
      v19 = a1 + 116;
    }
    sub_800150FC(v19, 2, 0);
  }
  if ( TM3_DRAFT_U8(a1 + 321) )
    sub_8002DF70(a1);
  result = TM3_DRAFT_U32(a1 + 148) + 1;
  v21 = TM3_DRAFT_U32(a1 + 152) >= result;
  TM3_DRAFT_U32(a1 + 148) = result;
  if ( !v21 )
  {
    TM3_DRAFT_U32(a1 + 68) = 0;
    return sub_8002DEA4(a1);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002DF70(uint32 a1)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  uint32 v7; 
  int v8; 
  uint32 result; 
  uint32 v10; 
  int v11; 
  sint16 v12; 
  uint32 v13; 
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
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int vars0; 

  v2 = TM3_DRAFT_U8(a1 + 321);
  if ( v2 == 2 )
  {
    LOWORD(v25) = TM3_DRAFT_I16(a1 + 16) / 4;
    HIWORD(v25) = -256;
    v3 = TM3_DRAFT_I16(a1 + 20);
    v4 = a1 + 8;
    v5 = 2;
    LOWORD(v26) = v3 / 4;
    v6 = TM3_DRAFT_U16(a1 + 266);
    v7 = &v25;
    return sub_800276AC(v4, v5, v6, 0, (int)v7, -2);
  }
  if ( v2 == 3 )
  {
    LOWORD(v27) = TM3_DRAFT_I16(a1 + 16) / 4;
    HIWORD(v27) = -64;
    v8 = TM3_DRAFT_I16(a1 + 20);
    v4 = a1 + 8;
    v5 = 5;
    LOWORD(v28) = v8 / 4;
    v6 = TM3_DRAFT_U16(a1 + 266);
    v7 = &v27;
    return sub_800276AC(v4, v5, v6, 0, (int)v7, -2);
  }
  v10 = (uint32)(a1 + 116);
  if ( TM3_DRAFT_U32(a1 + 148) % (unsigned int)TM3_DRAFT_U8(a1 + 317) )
    goto LABEL_9;
  v11 = TM3_DRAFT_U8(a1 + 316);
  v12 = TM3_DRAFT_U16(a1 + 216) + 1;
  TM3_DRAFT_U16(a1 + 216) = v12;
  v13 = (uint32)(a1 + 116);
  if ( v12 >= v11 )
  {
    TM3_DRAFT_U16(a1 + 216) = 0;
    v10 = (uint32)(a1 + 116);
LABEL_9:
    v13 = v10;
  }
  v14 = -TM3_DRAFT_U16(a1 + 266);
  v23 = (uint16)-TM3_DRAFT_U16(a1 + 266);
  LOWORD(v24) = v14;
  sub_8005BB84(v13, (int)&v23, (uint32)(a1 + 6 * TM3_DRAFT_I16(a1 + 216) + 168));
  v15 = a1 + 6 * TM3_DRAFT_I16(a1 + 216);
  TM3_DRAFT_U16(v15 + 168) += TM3_DRAFT_U16(a1 + 136);
  v16 = a1 + 6 * TM3_DRAFT_I16(a1 + 216);
  TM3_DRAFT_U16(v16 + 170) += TM3_DRAFT_U16(a1 + 140);
  v17 = a1 + 6 * TM3_DRAFT_I16(a1 + 216);
  TM3_DRAFT_U16(v17 + 172) += TM3_DRAFT_U16(a1 + 144);
  v23 = TM3_DRAFT_U16(a1 + 266);
  LOWORD(v24) = -(sint16)v23;
  sub_8005BB84(v10, (int)&v23, (uint32)(a1 + 6 * TM3_DRAFT_I16(a1 + 216) + 218));
  v18 = a1 + 6 * TM3_DRAFT_I16(a1 + 216);
  TM3_DRAFT_U16(v18 + 218) += TM3_DRAFT_U16(a1 + 136);
  v19 = a1 + 6 * TM3_DRAFT_I16(a1 + 216);
  TM3_DRAFT_U16(v19 + 220) += TM3_DRAFT_U16(a1 + 140);
  v20 = a1 + 6 * TM3_DRAFT_I16(a1 + 216);
  TM3_DRAFT_U16(v20 + 222) += TM3_DRAFT_U16(a1 + 144);
  LOWORD(v20) = TM3_DRAFT_U16(a1 + 266);
  LOWORD(v23) = 0;
  HIWORD(v23) = v20;
  LOWORD(v24) = -(sint16)v20;
  sub_8005BB84(v10, (int)&v23, (uint32)(a1 + 6 * TM3_DRAFT_I16(a1 + 216) + 268));
  v21 = a1 + 6 * TM3_DRAFT_I16(a1 + 216);
  TM3_DRAFT_U16(v21 + 268) += TM3_DRAFT_U16(a1 + 136);
  v22 = a1 + 6 * TM3_DRAFT_I16(a1 + 216);
  TM3_DRAFT_U16(v22 + 270) += TM3_DRAFT_U16(a1 + 140);
  result = (uint32)(a1 + 6 * TM3_DRAFT_I16(a1 + 216));
  TM3_DRAFT_U16(result +(136) * 2u) += TM3_DRAFT_U16(a1 + 144);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004531C(void)
{
  int v0; 
  int v1; 
  int i; 
  int v3; 
  int result; 
  sint32 v5; 
  int v6; 
  int v7; 
  int v8; 
  int j; 
  int v10; 
  int v11; 
  int v12; 
  sint16 v13; 
  sint16 v14; 
  sint16 v15; 
  sint16 v16; 

  v0 = sub_80046840();
  if ( TM3_DRAFT_U8(dword_80089CBC + 299) >= v0
    && !TM3_DRAFT_U32(0x800d2f50u)
    && TM3_DRAFT_U8(dword_80089CBC + 298) + TM3_DRAFT_U32(0x800d2e90u) + TM3_DRAFT_U32(0x800d2f38u) < TM3_DRAFT_U32(0x800d2e98u) )
  {
    TM3_DRAFT_U32(0x800d2f48u) = 1;
    sub_8004A294(12, 90, (int)0x80045314u, 2, -2146619576, 0);
    TM3_DRAFT_U32(0x800d2f50u) = 1;
    v1 = TM3_DRAFT_U8(dword_80089CBC + 298) + TM3_DRAFT_U32(0x800d2e90u) + TM3_DRAFT_U32(0x800d2f38u);
    for ( i = v1; v1 < TM3_DRAFT_U32(0x800d2e98u); i = v1 )
    {
      sub_800443DC(i, 0, 0, 0, 0, 0, 0, 0);
      ++v1;
    }
    v0 = sub_80046840();
  }
  v3 = -2146619768;
  if ( TM3_DRAFT_U32(0x800d3414u) )
  {
    if ( v0 )
    {
      result = TM3_DRAFT_U32(0x800d2f54u);
      if ( TM3_DRAFT_U32(0x800d2f54u) )
      {
        result = 1;
        if ( v0 > 0 )
        {
          TM3_DRAFT_U32(0x800d2f54u) = 0;
          TM3_DRAFT_U32(0x800d2f58u) = 1;
        }
      }
      return result;
    }
    goto LABEL_13;
  }
  v5 = v0 != 0;
  v6 = 1;
  if ( !v5 )
  {
LABEL_13:
    if ( TM3_DRAFT_U32(0x800d2e98u) < 16 && TM3_DRAFT_U32(4 * TM3_DRAFT_U32(0x800d2e98u) - 2146619768 + 24) < 0x10u )
    {
      result = TM3_DRAFT_U32(0x800d2f54u);
      if ( TM3_DRAFT_U32(0x800d2f54u) )
        return result;
      if ( !TM3_DRAFT_U32(0x800d2f58u) )
      {
        TM3_DRAFT_U32(0x800d2f54u) = 1;
        sub_8004A294(12, 240, (int)0x800443DCu, 8, TM3_DRAFT_U32(0x800d2e98u), 0, 0, 0);
        v7 = sub_800435F0();
        return (int)sub_8004A294(
                      12,
                      120,
                      (int)0x800435FCu,
                      4,
                      2,
                      (int)0x8003A014u,
                      v7 - (TM3_DRAFT_U32(0x8007EA18u + (2 * TM3_DRAFT_U32(0x800d2e9cu) + 1) * 4u) + 24),
                      TM3_DRAFT_U32(0x800d2e9cu));
      }
      TM3_DRAFT_U32(0x800d2f58u) = 0;
    }
    v8 = 3;
    if ( TM3_DRAFT_U32(0x800d2e9cu) == 7 )
    {
      v8 = 4;
      if ( TM3_DRAFT_U32(0x800d2ef4u) )
        v8 = 1;
      if ( TM3_DRAFT_U32(0x800d2e90u) + TM3_DRAFT_U32(0x800d2f38u) == 1 && TM3_DRAFT_U32(0x800d2f10u) )
        TM3_DRAFT_U32(0x800d2f5cu) = TM3_DRAFT_U32(0x800d2ea0u) + 2;
      TM3_DRAFT_U32(0x800d2f40u) = 1;
    }
    else
    {
      TM3_DRAFT_U32(0x800d2f44u) = 1;
    }
    goto LABEL_34;
  }
  for ( j = 0; j < TM3_DRAFT_U32(0x800d2e90u) + TM3_DRAFT_U32(0x800d2f38u); v3 += 144 )
  {
    if ( !TM3_DRAFT_U32(v3 + 400) )
      v6 = 0;
    ++j;
  }
  result = -2146631680;
  if ( v6 )
  {
    v8 = 4;
    if ( TM3_DRAFT_U32(0x800d2ef4u) )
      v8 = 1;
LABEL_34:
    sub_8004A294(12, 120, (int)0x800443D0u, 1, v8);
    result = -2146631680;
    TM3_DRAFT_U32(0x800d2f30u) = 0;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800551AC(uint32 a1)
{
  int result; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  uint32 v7; 
  int v8; 
  unsigned int v9; 
  sint16 v10; 
  unsigned int v11; 

  if ( TM3_DRAFT_U32(0x80089C80u + (2) * 4u) )
    return 17;
  if ( TM3_DRAFT_U32(0x80089EA0u + (4) * 4u) == 1 )
  {
    if ( TM3_DRAFT_U16(0x800d4400u) == 17229 )
      TM3_DRAFT_U32(0x80089EC0u + (2) * 4u) = TM3_DRAFT_U32(0x80089EA0u + (4) * 4u);
    else
      TM3_DRAFT_U32(0x80089EC0u + (2) * 4u) = 0;
    v3 = 0;
    if ( TM3_DRAFT_U32(0x80089EC0u + (2) * 4u) )
    {
      v4 = -2146614128;
      do
      {
        if ( (TM3_DRAFT_U32(0x80089EA0u + (5) * 4u) & (0x80000000 >> v3)) == 0 )
        {
          if ( sub_80054E9C((uint8)v3, v4) == 1 )
            TM3_DRAFT_U32(0x80089EA0u + (5) * 4u) |= 0x80000000 >> v3;
          goto LABEL_27;
        }
        ++v3;
        v4 += 128;
      }
      while ( v3 < 15 );
      v5 = 0;
      v6 = -2146612112;
      v7 = a1;
      v8 = -2146612208;
      while ( (dword_80089EBC & (0x80000000 >> v5)) != 0 )
      {
        v6 += 512;
        v7 += (8) * 1u;
        ++v5;
        v8 += 512;
        if ( v5 >= 15 )
          goto LABEL_26;
      }
      if ( sub_80054F0C((uint8)v5, v8) == 1 )
      {
        dword_80089EBC |= 0x80000000 >> v5;
        if ( a1 )
        {
          LOWORD(TM3_DRAFT_U32(0x80089E98u + (0) * 4u)) = (TM3_DRAFT_U8(v7) >> 2) + ((TM3_DRAFT_U16(v7 +(3) * 2u) << 6) & 0x7C0);
          v9 = TM3_DRAFT_U16(v7 +(3) * 2u);
          v10 = TM3_DRAFT_U8(v7 + (1) * 1u);
          TM3_DRAFT_U32(0x80089E98u + (1) * 4u) = 3145732;
          HIWORD(TM3_DRAFT_U32(0x80089E98u + (0) * 4u)) = v10 + ((16 * v9) & 0x100) + ((v9 >> 2) & 0x200);
          sub_800579FC((uint32)dword_80089E98, (v5 << 9) - 2146612080);
          LOWORD(TM3_DRAFT_U32(0x80089EA0u + (0) * 4u)) = 16 * (TM3_DRAFT_U16(v7 +(1) * 2u) & 0x3F);
          v11 = TM3_DRAFT_U16(v7 +(1) * 2u);
          TM3_DRAFT_U32(0x80089EA0u + (1) * 4u) = 65552;
          HIWORD(TM3_DRAFT_U32(0x80089EA0u + (0) * 4u)) = v11 >> 6;
          sub_800579FC((uint32)dword_80089EA0, v6);
          TM3_DRAFT_U8(v5 - 2146614144) = (int)(8 * (TM3_DRAFT_U8(v8 + 2) - 17) * sub_80039FD4()) >> 15;
        }
      }
    }
    else
    {
      TM3_DRAFT_U32(0x80089EA0u + (5) * 4u) = 0;
      dword_80089EBC = 0;
LABEL_26:
      TM3_DRAFT_U32(0x80089EA0u + (4) * 4u) = sub_80054E34(-2146614272);
    }
  }
  else
  {
    TM3_DRAFT_U32(0x80089EA0u + (4) * 4u) = sub_80054E34(-2146614272);
    if ( TM3_DRAFT_U32(0x80089EA0u + (4) * 4u) == 1 )
    {
      TM3_DRAFT_U32(0x80089EC0u + (2) * 4u) = TM3_DRAFT_U16(0x800d4400u) == 17229;
      if ( TM3_DRAFT_U32(0x80089EC0u + (2) * 4u) == 1 && (TM3_DRAFT_U32(0x80089EA0u + (5) * 4u) & 0xFFFE0000) == -131072 )
      {
        result = 1;
        if ( (dword_80089EBC & 0xFFFE0000) == -131072 )
          return result;
      }
    }
    else
    {
      TM3_DRAFT_U32(0x80089EC0u + (2) * 4u) = 2;
    }
  }
LABEL_27:
  if ( !TM3_DRAFT_U32(0x80089EC0u + (4) * 4u) )
  {
    TM3_DRAFT_U32(0x80089EA0u + (4) * 4u) = 17;
    TM3_DRAFT_U32(0x80089EA0u + (5) * 4u) = 0;
    dword_80089EBC = 0;
  }
  result = -1;
  if ( TM3_DRAFT_U32(0x80089EA0u + (4) * 4u) != 1 )
    return TM3_DRAFT_U32(0x80089EA0u + (4) * 4u);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80045684(void)
{
  int result; 
  int v1; 
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
  int vars0; 
  int vars0b; 
  int vars0a; 
  int vars4; 
  int vars4b; 
  int vars4a; 

  if ( TM3_DRAFT_U32(0x800d2f78u) )
  {
    result = TM3_DRAFT_U32(0x800d2f7cu);
    if ( TM3_DRAFT_U32(0x800d2f7cu) )
    {
      v1 = 0;
      result = TM3_DRAFT_U32(0x800d2e90u);
      v2 = 0;
      if ( TM3_DRAFT_U32(0x800d2e90u) > 0 )
      {
        v3 = -2146624256;
        do
        {
          if ( (TM3_DRAFT_U16(v3 + 8) & 0x40) != 0 )
            v1 = 1;
          result = ++v2 < TM3_DRAFT_U32(0x800d2e90u);
          v3 += 24;
        }
        while ( v2 < TM3_DRAFT_U32(0x800d2e90u) );
      }
      if ( v1 )
      {
        sub_8004A294(12, 60, (int)0x800443D0u, 1, TM3_DRAFT_U32(0x800d2f78u));
        result = (int)sub_8004A294(22, 17, 0);
        TM3_DRAFT_U32(0x800d2f74u) = 0;
        TM3_DRAFT_U32(0x800d2f30u) = 0;
      }
    }
  }
  else
  {
    result = 1;
    if ( !TM3_DRAFT_U32(0x800d3414u) || TM3_DRAFT_U32(0x800d3414u) == 1 && (result = TM3_DRAFT_U32(0x800d3410u)) == 0 )
    {
      v5 = -1;
      if ( TM3_DRAFT_U32(0x800d3414u) != 1 || TM3_DRAFT_U32(0x800d2e90u) != 1 || (result = TM3_DRAFT_U32(0x800d2e94u)) != 0 )
      {
        v6 = 0;
        if ( TM3_DRAFT_U32(0x800d340cu) > 0 )
        {
          v7 = -2146619768;
          do
          {
            v8 = TM3_DRAFT_U32(v7 + 1424);
            if ( TM3_DRAFT_U8(v8 + 3328) == 1 )
              v5 = TM3_DRAFT_U32(v8 + 3924);
            ++v6;
            v7 += 4;
          }
          while ( v6 < TM3_DRAFT_U32(0x800d340cu) );
        }
        if ( TM3_DRAFT_U32(0x800d3414u) == 1 )
        {
          TM3_DRAFT_U32(0x800d2f70u) = v5;
          ++TM3_DRAFT_U32(144 * v5 - 2146619768 + 392);
        }
        v9 = 0;
        if ( TM3_DRAFT_U32(0x800d2e90u) > 0 )
        {
          v10 = -2146619768;
          do
          {
            if ( v9 != v5 )
              ++TM3_DRAFT_U32(v10 + 396);
            ++v9;
            v10 += 144;
          }
          while ( v9 < TM3_DRAFT_U32(0x800d2e90u) );
        }
        TM3_DRAFT_U32(0x800d2f74u) = 1;
        ++TM3_DRAFT_U32(0x800d2f80u);
        sub_8004A294(12, 150, (int)0x80045314u, 2, -2146619524, 1);
        result = 3;
        if ( TM3_DRAFT_U32(0x800d2f18u) == 1 )
        {
          v11 = 4;
          if ( TM3_DRAFT_U32(0x800d2ef4u) )
            v11 = 1;
          result = (int)sub_8004A294(12, 120, (int)0x800443D0u, 1, v11);
          TM3_DRAFT_U32(0x800d2f30u) = 0;
        }
        else
        {
          TM3_DRAFT_U32(0x800d2f78u) = 3;
          if ( TM3_DRAFT_U32(0x800d2f64u) )
          {
            result = TM3_DRAFT_U32(0x800d2e90u);
            v12 = 0;
            if ( TM3_DRAFT_U32(0x800d2e90u) > 0 )
            {
              v13 = -2146619768;
              do
              {
                if ( TM3_DRAFT_U32(v13 + 392) == TM3_DRAFT_U32(0x800d2f68u) )
                {
                  if ( TM3_DRAFT_U32(0x800d2ef4u) )
                    TM3_DRAFT_U32(0x800d2f78u) = 1;
                  else
                    TM3_DRAFT_U32(0x800d2f78u) = 4;
                }
                result = ++v12 < TM3_DRAFT_U32(0x800d2e90u);
                v13 += 144;
              }
              while ( v12 < TM3_DRAFT_U32(0x800d2e90u) );
            }
          }
          else if ( TM3_DRAFT_U32(0x800d2f68u) )
          {
            result = TM3_DRAFT_U32(0x800d2f80u);
            if ( TM3_DRAFT_U32(0x800d2f80u) == TM3_DRAFT_U32(0x800d2f68u) )
            {
              result = 4;
              if ( TM3_DRAFT_U32(0x800d2ef4u) )
                TM3_DRAFT_U32(0x800d2f78u) = 1;
              else
                TM3_DRAFT_U32(0x800d2f78u) = 4;
            }
          }
        }
      }
    }
  }
  return result;
}
