#include "game_draft_signatures.h"

/* Unverified drafts, pending guest buffers and original ABI integration */
extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

extern uint32 tm3_draft_local_address(const void *pointer, uint32 bytes);
#define TM3_DRAFT_LOCAL_ADDRESS(pointer, bytes) tm3_draft_local_address((pointer), (bytes))
#define dword_8007BCF4 TM3_DRAFT_U32(0x8007BCF4u)
#define dword_80089C98 TM3_DRAFT_U32(0x80089C98u)
#define dword_80089EE8 TM3_DRAFT_U32(0x80089EE8u)
#define dword_80089EE0 TM3_DRAFT_U32(0x80089EE0u)
#define off_8007E894 TM3_DRAFT_U32(0x8007E894u)
#define dword_80089DD8 TM3_DRAFT_U32(0x80089DD8u)
#define dword_80089DE0 TM3_DRAFT_U32(0x80089DE0u)
#define dword_80089DE4 TM3_DRAFT_U32(0x80089DE4u)
#define dword_80089DE8 TM3_DRAFT_U32(0x80089DE8u)
#define dword_8007DF60 TM3_DRAFT_U32(0x8007DF60u)
#define dword_80089CFC TM3_DRAFT_U32(0x80089CFCu)
#define dword_80089838 TM3_DRAFT_U32(0x80089838u)
#define dword_80087DB8 TM3_DRAFT_U32(0x80087DB8u)
#define dword_80087DF8 TM3_DRAFT_U32(0x80087DF8u)
#define dword_80087DEC TM3_DRAFT_U32(0x80087DECu)
#define dword_80087E24 TM3_DRAFT_U32(0x80087E24u)
#define dword_80087E28 TM3_DRAFT_U32(0x80087E28u)
#define dword_80087DAC TM3_DRAFT_U32(0x80087DACu)
#define dword_80087DB4 TM3_DRAFT_U32(0x80087DB4u)
#define dword_80087E04 TM3_DRAFT_U32(0x80087E04u)
#define dword_80087DE0 TM3_DRAFT_U32(0x80087DE0u)
#define dword_80087DCC TM3_DRAFT_U32(0x80087DCCu)
#define dword_80087DD0 TM3_DRAFT_U32(0x80087DD0u)
#define dword_8007EA0C TM3_DRAFT_U32(0x8007EA0Cu)
#define byte_8007F004 TM3_DRAFT_U8(0x8007F004u)
#define word_80089E02 TM3_DRAFT_U16(0x80089E02u)
#define byte_80089D20 TM3_DRAFT_U8(0x80089D20u)
#define byte_80089D21 TM3_DRAFT_U8(0x80089D21u)
#define byte_80089D22 TM3_DRAFT_U8(0x80089D22u)

/* Unverified decompiler-derived draft */
uint32 sub_8001A954(uint32 a1)
{
    FUNCTION_MARKER(0x8001A954u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint16 v2; 
  int result; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  sint16 v8; 
  sint16 v9; 
  signed int v10; 
  sint16 v11; 
  int v12; 
  int v13; 
  int v14; 
  sint16 v15; 
  int v16; 
  sint16 v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int i; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int var8[3]; 

  v2 = TM3_DRAFT_U16(a1 + 1540);
  TM3_DRAFT_U32(a1 + 3692) = 0;
  TM3_DRAFT_U32(a1 + 3688) = 0;
  LOWORD(v25) = v2;
  result = TM3_DRAFT_U32(0x800d340cu);
  v4 = TM3_DRAFT_U32(0x800d340cu) - 1;
  HIWORD(v25) = TM3_DRAFT_U16(a1 + 1552);
  if ( v4 >= 0 )
  {
    v5 = 16 * v4;
    v6 = 4 * v4 - 2146619768;
    do
    {
      result = TM3_DRAFT_U32(v6 + 1424);
      v7 = result;
      if ( a1 != result )
      {
        result = 2;
        if ( TM3_DRAFT_U32(a1 + 3396) == TM3_DRAFT_U32(v7 + 3396) )
        {
          if ( TM3_DRAFT_U8(a1 + 3328) != 2
            || TM3_DRAFT_U8(v7 + 3328) != 2
            || (result = TM3_DRAFT_I16(v7 + 3344) < 1229, TM3_DRAFT_I16(v7 + 3344) >= 1229) )
          {
            result = TM3_DRAFT_U32(v7 + 64);
            if ( !result )
            {
              if ( TM3_DRAFT_U8(a1 + 3328)
                || (result = TM3_DRAFT_U8(v7 + 3328) < 2u, TM3_DRAFT_U8(v7 + 3328) >= 2u) )
              {
                v8 = TM3_DRAFT_U16(v7 + 3348) - TM3_DRAFT_U16(a1 + 3348);
                v9 = TM3_DRAFT_U16(v7 + 3350) - TM3_DRAFT_U16(a1 + 3350);
                result = (int)sub_80015724(
                                TM3_DRAFT_I16(v7 + 3348) - TM3_DRAFT_I16(a1 + 3348),
                                TM3_DRAFT_I16(v7 + 3350) - TM3_DRAFT_I16(a1 + 3350)) < TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040)
                                                                                                + 92);
                if ( result )
                {
                  LOWORD(var8[0]) = v8;
                  HIWORD(var8[0]) = v9;
                  result = sub_800163A0(TM3_DRAFT_U32(a1 + 3396), TM3_DRAFT_U32(a1 + 3400), a1 + 3348, TM3_DRAFT_LOCAL_ADDRESS(var8, 4u), 0);
                  if ( !result )
                  {
                    v10 = sub_8005B124(SLOWORD(var8[0]) * SLOWORD(var8[0]) + SHIWORD(var8[0]) * SHIWORD(var8[0]));
                    if ( v10 )
                    {
                      LOWORD(var8[0]) = ((sint32)((uint32)(sint32)SLOWORD(var8[0]) << 12)) / v10;
                      HIWORD(var8[0]) = ((sint32)((uint32)(sint32)SHIWORD(var8[0]) << 12)) / v10;
                    }
                    else
                    {
                      var8[0] = 0;
                    }
                    v11 = v10;
                    v12 = ((sint16)v25 * SLOWORD(var8[0]) + SHIWORD(v25) * SHIWORD(var8[0])) / 4096;
                    v13 = -4096;
                    if ( v12 >= -4096 )
                    {
                      v13 = 4096;
                      if ( v12 < 4097 )
                        v13 = ((sint16)v25 * SLOWORD(var8[0]) + SHIWORD(v25) * SHIWORD(var8[0])) / 4096;
                    }
                    v14 = (sint16)v25 * SHIWORD(var8[0]) - SHIWORD(v25) * SLOWORD(var8[0]);
                    if ( v14 + (v14 < 0 ? 0xFFF : 0) >= 0 )
                    {
                      if ( v13 >= 0 )
                        v16 = TM3_DRAFT_I16(0x8007BCF4u + (uint32)v13 * 2u);
                      else
                        v16 = -TM3_DRAFT_I16(0x8007BCF4u - (uint32)v13 * 2u);
                      v15 = v16 - 2048;
                    }
                    else if ( v13 >= 0 )
                    {
                      v15 = 2048 - TM3_DRAFT_I16(0x8007BCF4u + (uint32)v13 * 2u);
                    }
                    else
                    {
                      v15 = TM3_DRAFT_I16(0x8007BCF4u - (uint32)v13 * 2u) + 2048;
                    }
                    v17 = 0;
                    if ( TM3_DRAFT_U32(a1 + 3684) == TM3_DRAFT_U32(v6 + 1424) )
                    {
                      TM3_DRAFT_U32(a1 + 3688) = TM3_DRAFT_U32(a1 + 3696) + v5;
                      LOWORD(v27) = -TM3_DRAFT_U16(v7 + 1540);
                      HIWORD(v27) = -TM3_DRAFT_U16(v7 + 1552);
                      v18 = (SLOWORD(var8[0]) * (sint16)(0u - TM3_DRAFT_U16(v7 + 1540)) + SHIWORD(var8[0]) * (sint16)(0u - TM3_DRAFT_U16(v7 + 1552)))
                          / 4096;
                      v19 = -4096;
                      if ( v18 >= -4096 )
                      {
                        v19 = 4096;
                        if ( v18 < 4097 )
                          v19 = (SLOWORD(var8[0]) * (sint16)(0u - TM3_DRAFT_U16(v7 + 1540))
                               + SHIWORD(var8[0]) * (sint16)(0u - TM3_DRAFT_U16(v7 + 1552)))
                              / 4096;
                      }
                      v20 = SLOWORD(var8[0]) * SHIWORD(v27) - SHIWORD(var8[0]) * (sint16)v27;
                      if ( v20 + (v20 < 0 ? 0xFFF : 0) >= 0 )
                      {
                        if ( v19 >= 0 )
                          v21 = TM3_DRAFT_I16(0x8007BCF4u + (uint32)v19 * 2u);
                        else
                          v21 = -TM3_DRAFT_I16(0x8007BCF4u - (uint32)v19 * 2u);
                        v17 = v21 - 2048;
                      }
                      else if ( v19 >= 0 )
                      {
                        v17 = 2048 - TM3_DRAFT_I16(0x8007BCF4u + (uint32)v19 * 2u);
                      }
                      else
                      {
                        v17 = TM3_DRAFT_I16(0x8007BCF4u - (uint32)v19 * 2u) + 2048;
                      }
                    }
                    TM3_DRAFT_U32(v5 + TM3_DRAFT_U32(a1 + 3696)) = TM3_DRAFT_U32(v6 + 1424);
                    TM3_DRAFT_U16(v5 + TM3_DRAFT_U32(a1 + 3696) + 4) = v11;
                    TM3_DRAFT_U16(v5 + TM3_DRAFT_U32(a1 + 3696) + 6) = v15;
                    TM3_DRAFT_U16(v5 + TM3_DRAFT_U32(a1 + 3696) + 8) = v17;
                    v22 = TM3_DRAFT_U32(a1 + 3692);
                    for ( i = 0; v22; v22 = TM3_DRAFT_U32(v22 + 12) )
                    {
                      if ( TM3_DRAFT_I16(v22 + 4) >= TM3_DRAFT_I16(v5 + TM3_DRAFT_U32(a1 + 3696) + 4) )
                        break;
                      i = v22;
                    }
                    if ( i )
                      TM3_DRAFT_U32(i + 12) = TM3_DRAFT_U32(a1 + 3696) + v5;
                    else
                      TM3_DRAFT_U32(a1 + 3692) = TM3_DRAFT_U32(a1 + 3696) + v5;
                    result = v5 + TM3_DRAFT_U32(a1 + 3696);
                    TM3_DRAFT_U32(result + 12) = v22;
                  }
                }
              }
            }
          }
        }
      }
      v5 -= 16;
      --v4;
      v6 -= 4;
    }
    while ( v4 >= 0 );
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80013484(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    union { uint64 align; uint8 bytes[0x80u]; } storage;
    uint32 local_base = TM3_DRAFT_LOCAL_ADDRESS(storage.bytes, sizeof(storage.bytes));
    /* Original adjacent collision buffers retain byte offsets */
#define v39 TM3_DRAFT_I32(local_base + 0x10u)
#define v40 TM3_DRAFT_I32(local_base + 0x14u)
#define v41 TM3_DRAFT_I32(local_base + 0x18u)
#define v42 TM3_DRAFT_I32(local_base + 0x1Cu)
#define v43 TM3_DRAFT_I32(local_base + 0x20u)
#define v44 TM3_DRAFT_I32(local_base + 0x24u)
#define v47 TM3_DRAFT_I32(local_base + 0x3Cu)
#define v48 TM3_DRAFT_I32(local_base + 0x40u)
#define v49 TM3_DRAFT_I32(local_base + 0x44u)
#define v50 TM3_DRAFT_I32(local_base + 0x48u)
#define v51 TM3_DRAFT_I32(local_base + 0x4Cu)
#define v52 TM3_DRAFT_I32(local_base + 0x50u)
#define v53 TM3_DRAFT_I32(local_base + 0x54u)
#define v54 TM3_DRAFT_I32(local_base + 0x58u)
#define v45 ((sint32 *)psx_addr(local_base + 0x28u, 16u))
    FUNCTION_MARKER(0x80013484u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

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
  unsigned int v16; 
  int v17; 
  int v18; 
  int v19; 
  sint32 v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  uint32 v28; 
  int v29; 
  int v30; 
  int v31; 
  int result; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  unsigned int v46; 
  int v55; 
  int v56; 
  uint32 v57; 
  int v58; 
  int v59; 
  int v60; 

  v46 = -1;
  v4 = (sint16)TM3_DRAFT_U16(a1 + (1) * 2u);
  v5 = (sint16)TM3_DRAFT_U16(a1 + (2) * 2u);
  v6 = 0;
  v39 = (sint16)TM3_DRAFT_U16(a1);
  v40 = v4;
  v41 = v5;
  v7 = (sint16)TM3_DRAFT_U16(a2 + (1) * 2u);
  v8 = (sint16)TM3_DRAFT_U16(a1 + (1) * 2u);
  v9 = (sint16)TM3_DRAFT_U16(a2 + (2) * 2u) - (sint16)TM3_DRAFT_U16(a1 + (2) * 2u);
  v42 = (sint16)TM3_DRAFT_U16(a2) - (sint16)TM3_DRAFT_U16(a1);
  v43 = v7 - v8;
  v44 = v9;
  v10 = TM3_DRAFT_U16(a2);
  v56 = 1;
  v11 = ((sint16)v10 >> 10) + 32;
  v12 = (TM3_DRAFT_I16(a2 + 4u) >> 10);
  v13 = (TM3_DRAFT_I16(a1) >> 10) + 32;
  v55 = (TM3_DRAFT_I16(a1 + 4u) >> 10) + 32;
  v14 = v12 + 32;
  if ( v11 < v13 )
    v56 = -1;
  v15 = 1;
  if ( v14 < v55 )
    v15 = -1;
  v16 = v13;
  v17 = v11 + v56;
  v18 = v14 + v15;
  if ( v13 != v17 )
  {
    do
    {
      v19 = v55;
      if ( v55 != v18 )
      {
        v57 = local_base + 0x3Cu;
        v20 = (uint32)v16 < 0x40u;
        do
        {
          if ( v20
            && v19 >= 0
            && v19 < 64
            && (v21 = TM3_DRAFT_U16(dword_80089C98 + 2 * v16 + (v19 << 7)), v21 != 0xFFFF) )
          {
            v26 = dword_80089C98 + 56 * v21 + 10300;
            v27 = 0;
            v28 = (uint32)(dword_80089EE8 + 2 * TM3_DRAFT_U16(v26 + 10));
            if ( TM3_DRAFT_U8(v26 + 9) )
            {
              do
              {
                v29 = dword_80089EE0 + 76 * TM3_DRAFT_I16(v28);
                if ( TM3_DRAFT_U16(v29 + 50) )
                {
                  v58 = v15;
                  v59 = v6;
                  v60 = v17;
                  v30 = sub_80014510((uint32)v29, local_base + 0x10u, a3, local_base + 0x28u);
                  v15 = v58;
                  v6 = v59;
                  v17 = v60;
                  if ( v30 >= 0 && v30 < v46 )
                  {
                    v46 = v30;
                    v47 = v45[0];
                    v48 = v45[1];
                    v49 = v45[2];
                    v54 = v29;
                    sub_800146A4((uint32)v29, local_base + 0x48u);
                    v52 = TM3_DRAFT_I16(v29 + 26);
                    v6 = 1;
                    v53 = TM3_DRAFT_I16(v29 + 34);
                    v17 = v60;
                    v15 = v58;
                  }
                }
                ++v27;
                (v28 += 2u);
              }
              while ( v27 < TM3_DRAFT_U8(v26 + 9) );
            }
          }
          else if ( v16 == v17 - v56 && v19 == v18 - v15 && !v6 )
          {
            v6 = 1;
            v22 = (int)v57;
            v47 = (uint32)v39 << 12;
            v23 = v40;
            TM3_DRAFT_I32(v57 + (2) * 4u) = (uint32)v41 << 12;
            v24 = dword_80089C98;
            TM3_DRAFT_U32(v22 + 4) = (uint32)v23 << 12;
            v50 = 0;
            LOWORD(v51) = 0;
            v25 = TM3_DRAFT_U16(v24 + 10270);
            v53 = -1;
            v52 = v25 - 1;
          }
          v19 += v15;
          v20 = (uint32)v16 < 0x40u;
        }
        while ( v19 != v18 );
      }
      v16 += v56;
    }
    while ( v16 != v17 );
  }
  if ( v6 )
    goto LABEL_28;
  if ( (unsigned int)(v40 + v43 + 0x4000) > 0x8000 )
  {
    v6 = 1;
    v47 = (uint32)v39 << 12;
    v48 = (uint32)v40 << 12;
    v49 = (uint32)v41 << 12;
    v50 = 0;
    LOWORD(v51) = 0;
    v31 = TM3_DRAFT_U16(dword_80089C98 + 10270);
    v53 = -1;
    v52 = v31 - 1;
  }
  result = 0;
  if ( v6 )
  {
LABEL_28:
    result = 1;
    v33 = v48;
    v34 = v49;
    v35 = v50;
    TM3_DRAFT_U32(a4) = v47;
    TM3_DRAFT_U32(a4 + (1) * 4u) = v33;
    TM3_DRAFT_U32(a4 + (2) * 4u) = v34;
    TM3_DRAFT_U32(a4 + (3) * 4u) = v35;
    v36 = v52;
    v37 = v53;
    v38 = v54;
    TM3_DRAFT_U32(a4 + (4) * 4u) = v51;
    TM3_DRAFT_U32(a4 + (5) * 4u) = v36;
    TM3_DRAFT_U32(a4 + (6) * 4u) = v37;
    TM3_DRAFT_U32(a4 + (7) * 4u) = v38;
  }
  return result;
}


#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54

/* Unverified decompiler-derived draft */
uint32 sub_80044D64(void)
{
  uint32 a3; /* Original temporary register value */
    FUNCTION_MARKER(0x80044D64u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  signed int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  uint32 i;
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int result; 
  int v20; 

  v3 = TM3_DRAFT_U32(0x800d2f1cu);
  v4 = TM3_DRAFT_U32(0x800d2f18u);
  if ( TM3_DRAFT_U32(0x800d2f1cu) == 4 )
    TM3_DRAFT_U32(0x800d2f20u) = 2;
  else
    TM3_DRAFT_U32(0x800d2f20u) = TM3_DRAFT_U32(0x800d2f1cu) == 1
                      && (!TM3_DRAFT_U32(0x800d2f18u) || TM3_DRAFT_U32(0x800d2f18u) == 3 || TM3_DRAFT_U32(0x800d2f18u) == TM3_DRAFT_U32(0x800d2f1cu))
                      && TM3_DRAFT_U32(0x800d2ef4u);
  if ( !TM3_DRAFT_U32(0x800d2e8cu) )
  {
    v5 = sub_8005FA24(-1);
    v6 = sub_8005FA24(-1);
    v7 = sub_8005FA24(-1);
    v8 = sub_8005FA24(-1);
    TM3_DRAFT_U32(0x800d2f0cu) = (uint32)v5 * (uint32)v6 * (uint32)v7 * (uint32)v8 * sub_8005FA24(-1);
    sub_80039FFC(TM3_DRAFT_U32(0x800d2f0cu));
  }
  if ( v3 == 1 )
  {
    TM3_DRAFT_U32(0x800d2e88u) = 1;
    TM3_DRAFT_U32(0x800d2e8cu) = 0;
    TM3_DRAFT_U32(0x800d2efcu) = (int)sub_80039FD4() % TM3_DRAFT_I32(off_8007E894);
    TM3_DRAFT_U32(0x800d2f2cu) = 1;
    TM3_DRAFT_U32(0x800d2f60u) = 0;
    TM3_DRAFT_U32(0x800d2f64u) = 0;
    TM3_DRAFT_U32(0x800d2f68u) = 0;
    TM3_DRAFT_U32(0x800d2f84u) = 1;
    if ( v4 < 2 )
    {
      TM3_DRAFT_U32(0x800d2f6cu) = 0;
      v9 = sub_80039FD4();
      v10 = v9 >> 3;
      if ( v9 < 0 )
        v10 = (v9 + 7) >> 3;
      TM3_DRAFT_U32(0x800d2e9cu) = v9 - 8 * v10;
      TM3_DRAFT_U32(0x800d2e94u) = (int)sub_80039FD4() % (8 - TM3_DRAFT_U32(0x800d2e88u)) + 1;
      TM3_DRAFT_U32(0x800d2ea0u) = sub_80044AE0();
    }
    else
    {
      TM3_DRAFT_U32(0x800d2f6cu) = 2;
      TM3_DRAFT_U32(0x800d2e94u) = TM3_DRAFT_U32(0x800d2e98u) - TM3_DRAFT_U32(0x800d2e88u);
    }
  }
  else if ( v3 == 4 )
  {
    v3 = 1;
    v11 = 0;
    v12 = -2146619768;
    TM3_DRAFT_U32(0x800d2f10u) = 0;
    TM3_DRAFT_U32(0x800d2e88u) = 1;
    TM3_DRAFT_U32(0x800d2f6cu) = 2;
    TM3_DRAFT_U32(0x800d2e8cu) = 0;
    TM3_DRAFT_U32(0x800d2f2cu) = 1;
    TM3_DRAFT_U32(0x800d2f60u) = 0;
    TM3_DRAFT_U32(0x800d2f64u) = 0;
    TM3_DRAFT_U32(0x800d2f68u) = 0;
    TM3_DRAFT_U32(0x800d2f84u) = 1;
    TM3_DRAFT_U32(0x800d2e94u) = 15;
    do
    {
      if ( (unsigned int)(v11 - 14) >= 2 )
        TM3_DRAFT_U32(v12 + 24) = v11;
      else
        --TM3_DRAFT_U32(0x800d2e94u);
      ++v11;
      v12 += 4;
    }
    while ( v11 < 16 );
  }
  else
  {
    v13 = -2146619768;
    if ( v4 != 3 || v3 != 3 )
    {
      for ( i = 0x800D28B8u; i != 0x800D2E88u; i += 16u )
      {
        a3 = TM3_DRAFT_U32(i);
        v15 = TM3_DRAFT_U32(i + 4u);
        v16 = TM3_DRAFT_U32(i + 8u);
        v17 = TM3_DRAFT_U32(i + 12u);
        TM3_DRAFT_U32(v13) = a3;
        TM3_DRAFT_U32(v13 + 4) = v15;
        TM3_DRAFT_U32(v13 + 8) = v16;
        TM3_DRAFT_U32(v13 + 12) = v17;
        v13 += 16;
      }
      if ( TM3_DRAFT_U32(0x800d2e8cu) )
        sub_80039FFC(TM3_DRAFT_U32(0x800d2f0cu));
    }
  }
  v18 = TM3_DRAFT_U32(0x800d2f2cu);
  TM3_DRAFT_U32(0x800d2f28u) = 0;
  TM3_DRAFT_U32(0x800d2e90u) = TM3_DRAFT_U32(0x800d2e88u) + TM3_DRAFT_U32(0x800d2e8cu);
  TM3_DRAFT_U32(0x800d2e98u) = TM3_DRAFT_U32(0x800d2e88u) + TM3_DRAFT_U32(0x800d2e8cu) + TM3_DRAFT_U32(0x800d2e94u);
  if ( TM3_DRAFT_U32(0x800d2f2cu) )
  {
    if ( TM3_DRAFT_U32(0x800d2f2cu) == 1 )
      sub_80044B5C();
  }
  else
  {
    sub_800447D4();
  }
  TM3_DRAFT_U32(0x800d2f24u) = !v4 || TM3_DRAFT_U32(0x800d2f20u) == 2 || v3 == 3 && (v4 - 1 < 2 || sub_800447A0()) || v3 == 1 && v4 == 1;
  TM3_DRAFT_U32(0x800d2f18u) = v3;
  TM3_DRAFT_U32(0x800d2f1cu) = 0;
  TM3_DRAFT_U32(0x800d2f30u) = 1;
  TM3_DRAFT_U32(0x800d340cu) = 0;
  TM3_DRAFT_U32(0x800d3410u) = 0;
  TM3_DRAFT_U32(0x800d3414u) = 0;
  if ( TM3_DRAFT_U32(0x800d2f20u) )
  {
    sub_80047534();
    return sub_800473BC(0, 5);
  }
  else
  {
    result = TM3_DRAFT_U32(0x800d2e8cu);
    if ( !TM3_DRAFT_U32(0x800d2e8cu) )
      sub_800474D0();
      return 0u; /* Return register is not used by the caller */
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003E21C(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8003E21Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 ida_A1, ida_T4, ida_V0; /* TODO Explicit adapter values */
  int v6; 
  int v8; 
  int v12; 
  int v16; 
  char v20[20]; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 

  sub_8005B8D4();
  v21 = 0;
  v22 = 0;
  v23 = 0;
  sub_8005BDB4(v20);
  ida_A1 = dword_80089DD8;
  v8 = 0;
  if ( TM3_DRAFT_U8(dword_80089DE0 + 2) )
  {
    do
    {
      v6 = ida_A1 + 40 * a3 + 32;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($a1)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($a1)");
  tm3_draft_unimplemented("TODO lwc2    $2, 8($a1)");
  tm3_draft_unimplemented("TODO lwc2    $3, 0xC($a1)");
  tm3_draft_unimplemented("TODO lwc2    $4, 0x10($a1)");
  tm3_draft_unimplemented("TODO lwc2    $5, 0x14($a1)");
  tm3_draft_gte_command(0x280030u);
  tm3_draft_unimplemented("TODO swc2    $12, 8($a0)");
  tm3_draft_unimplemented("TODO swc2    $13, 0x10($a0)");
  tm3_draft_unimplemented("TODO swc2    $14, 0x18($a0)");
  tm3_draft_gte_command(0x158002Du);
  ida_T4 = tm3_draft_gte_read_data(19u);
      v24 = ida_T4 >> 2;
      /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
  tm3_draft_unimplemented("TODO swc2    $24, 0($v0)");
      ida_V0 = ida_A1 + 24;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($v0)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($v0)");
  tm3_draft_gte_command(0x280030u);
  tm3_draft_gte_command(0x1400006u);
  tm3_draft_unimplemented("TODO swc2    $24, 0($v0)");
      if ( (v26 <= 0 || v25 > 0) && v24 > 0 )
      {
        /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO swc2    $12, 0($v0)");
        TM3_DRAFT_U32(v6) = TM3_DRAFT_U32(v6) & 0xFF000000 | TM3_DRAFT_U32(a1) & 0xFFFFFF;
        TM3_DRAFT_U32(a1) = TM3_DRAFT_U32(a1) & 0xFF000000 | v6 & 0xFFFFFF;
      }
      ++v8;
      ida_A1 += 196;
    }
    while ( v8 < TM3_DRAFT_U8(dword_80089DE0 + 2) );
  }
  if ( TM3_DRAFT_I16(a2 + 14) >= -3199 )
  {
    ida_A1 = dword_80089DE4;
    v12 = 0;
    if ( TM3_DRAFT_U8(dword_80089DE0) )
    {
      do
      {
        v6 = ida_A1 + 36 * a3 + 32;
        /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($a1)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($a1)");
  tm3_draft_unimplemented("TODO lwc2    $2, 8($a1)");
  tm3_draft_unimplemented("TODO lwc2    $3, 0xC($a1)");
  tm3_draft_unimplemented("TODO lwc2    $4, 0x10($a1)");
  tm3_draft_unimplemented("TODO lwc2    $5, 0x14($a1)");
  tm3_draft_gte_command(0x280030u);
  tm3_draft_unimplemented("TODO swc2    $12, 8($a0)");
  tm3_draft_unimplemented("TODO swc2    $13, 0x10($a0)");
  tm3_draft_unimplemented("TODO swc2    $14, 0x18($a0)");
  tm3_draft_gte_command(0x158002Du);
  ida_T4 = tm3_draft_gte_read_data(19u);
        v24 = ida_T4 >> 2;
        /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
  tm3_draft_unimplemented("TODO swc2    $24, 0($v0)");
        ida_V0 = ida_A1 + 24;
        /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($v0)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($v0)");
  tm3_draft_gte_command(0x280030u);
  tm3_draft_gte_command(0x1400006u);
  tm3_draft_unimplemented("TODO swc2    $24, 0($v0)");
        if ( (v26 <= 0 || v25 > 0) && v24 > 0 )
        {
          /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO swc2    $12, 0($v0)");
          TM3_DRAFT_U32(v6) = TM3_DRAFT_U32(v6) & 0xFF000000 | TM3_DRAFT_U32(a1) & 0xFFFFFF;
          TM3_DRAFT_U32(a1) = TM3_DRAFT_U32(a1) & 0xFF000000 | v6 & 0xFFFFFF;
        }
        ++v12;
        ida_A1 += 176;
      }
      while ( v12 < TM3_DRAFT_U8(dword_80089DE0) );
    }
  }
  ida_A1 = dword_80089DE8;
  v16 = 0;
  if ( TM3_DRAFT_U8(dword_80089DE0 + 1) )
  {
    do
    {
      v6 = ida_A1 + 24 * a3 + 32;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($a1)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($a1)");
  tm3_draft_unimplemented("TODO lwc2    $2, 8($a1)");
  tm3_draft_unimplemented("TODO lwc2    $3, 0xC($a1)");
  tm3_draft_unimplemented("TODO lwc2    $4, 0x10($a1)");
  tm3_draft_unimplemented("TODO lwc2    $5, 0x14($a1)");
  tm3_draft_gte_command(0x280030u);
  tm3_draft_unimplemented("TODO swc2    $12, 8($a0)");
  tm3_draft_unimplemented("TODO swc2    $13, 0xC($a0)");
  tm3_draft_unimplemented("TODO swc2    $14, 0x10($a0)");
  tm3_draft_gte_command(0x158002Du);
  ida_T4 = tm3_draft_gte_read_data(19u);
      v24 = ida_T4 >> 2;
      /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
  tm3_draft_unimplemented("TODO swc2    $24, 0($v0)");
      ida_V0 = ida_A1 + 24;
      /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO lwc2    $0, 0($v0)");
  tm3_draft_unimplemented("TODO lwc2    $1, 4($v0)");
  tm3_draft_gte_command(0x280030u);
  tm3_draft_gte_command(0x1400006u);
  tm3_draft_unimplemented("TODO swc2    $24, 0($v0)");
      if ( (v26 <= 0 || v25 > 0) && v24 > 0 )
      {
        /* TODO GTE adapters */
  tm3_draft_unimplemented("TODO swc2    $12, 0($v0)");
        TM3_DRAFT_U32(v6) = TM3_DRAFT_U32(v6) & 0xFF000000 | TM3_DRAFT_U32(a1) & 0xFFFFFF;
        TM3_DRAFT_U32(a1) = TM3_DRAFT_U32(a1) & 0xFF000000 | v6 & 0xFFFFFF;
      }
      ++v16;
      ida_A1 += 128;
    }
    while ( v16 < TM3_DRAFT_U8(dword_80089DE0 + 1) );
  }
  sub_8005B978();
  /* Original final loop comparison is false */
  return 0u;
}

/* Unverified decompiler-derived draft */
uint32 sub_80042250(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80042250u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint16 v4; 
  sint16 v5; 
  sint16 v6; 
  int result; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  sint32 v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  signed int v20; 
  char v21; 
  char v22; 
  sint16 v23; 
  sint16 v24; 
  sint16 v25; 
  sint16 v26; 
  sint16 v27; 
  sint16 v28; 
  sint16 v29; 
  sint16 v30; 
  sint16 v31; 
  int v32; 
  int v33; 
  int v34; 
  sint16 v35; 
  sint16 v36; 
  sint16 v37; 
  int v38; 

  v4 = TM3_DRAFT_U16(a1 + 1552);
  v23 = TM3_DRAFT_U16(a1 + 1540);
  v24 = 0;
  v25 = v4;
  sub_8005B284((int)&v23, (int)&v23);
  v26 = v25;
  v27 = 0;
  v28 = -v23;
  v5 = TM3_DRAFT_U16(a1 - 20 + 2);
  v6 = TM3_DRAFT_U16(a1 - 20 + 4);
  v29 = TM3_DRAFT_U16(a1 - 20);
  v31 = v6;
  v30 = v5;
  result = TM3_DRAFT_U16(TM3_DRAFT_U32(a1 + 3396) + 20);
  v8 = 0;
  v38 = result;
  if ( TM3_DRAFT_U32(0x800d340cu) > 0 )
  {
    v9 = a3;
    v10 = 0;
    do
    {
      v11 = TM3_DRAFT_U32(4 * v8 - 2146619768 + 1424);
      if ( v11 != a1 )
      {
        v12 = v11 - 20;
        if ( TM3_DRAFT_U16(TM3_DRAFT_U32(v11 + 3396) + 20) == v38
          || (v13 = (((unsigned int)(sub_80039FC8() + v8 * (8 / TM3_DRAFT_U32(0x800d340cu))) >> 3) & 1) != 0,
              v12 = v11 - 20,
              !v13) )
        {
          v14 = TM3_DRAFT_I16(v12 + 2);
          v15 = TM3_DRAFT_I16(v12 + 4);
          v35 = TM3_DRAFT_U16(v11 - 20);
          v36 = v14;
          v37 = v15;
          v32 = v35 - v29;
          v33 = v14 - v30;
          v34 = v15 - v31;
          v16 = -((v23 * v32 + v24 * v33 + v25 * v34 + 2048) >> 12);
          v17 = sub_80015684((v26 * v32 + v27 * v33 + v28 * v34 + 2048) >> 12, 8, 12);
          v18 = sub_80015684(v16, 8, 12);
          v19 = v17 * v17 + v18 * v18;
          if ( v19 >= 485 )
          {
            v20 = sub_8005B124(v19);
            v17 = 22 * v17 / v20;
            v18 = 22 * v18 / v20;
          }
          if ( v11 == a2 )
            v21 = TM3_DRAFT_U8(v9 + 1475) & 0xFD;
          else
            v21 = TM3_DRAFT_U8(v9 + 1475) | 2;
          TM3_DRAFT_U8(v9 + 1475) = v21;
          TM3_DRAFT_U8(v9 + 1472) = TM3_DRAFT_U8(TM3_DRAFT_U32(v11 + 4040));
          TM3_DRAFT_U8(v9 + 1473) = TM3_DRAFT_U8(TM3_DRAFT_U32(v11 + 4040) + 1);
          v22 = TM3_DRAFT_U8(TM3_DRAFT_U32(v11 + 4040) + 2);
          TM3_DRAFT_U16(v9 + 1476) = v17 + 33;
          TM3_DRAFT_U16(v9 + 1478) = v18 + 48;
          TM3_DRAFT_U8(v9 + 1474) = v22;
          TM3_DRAFT_U32(v9 + 1468) = TM3_DRAFT_U32(v9 + 1468) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
          TM3_DRAFT_U32(a4) = TM3_DRAFT_U32(a4) & 0xFF000000 | (a3 + v10 + 1468) & 0xFFFFFF;
        }
      }
      v9 += 16;
      result = ++v8 < TM3_DRAFT_U32(0x800d340cu);
      v10 += 16;
    }
    while ( v8 < TM3_DRAFT_U32(0x800d340cu) );
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800284D0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9, uint32 a10, uint32 a11, uint32 a12, uint32 a13)
{
  uint32 tail_result;
    FUNCTION_MARKER(0x800284D0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v14; 
  sint16 v15; 
  sint16 v16; 
  sint16 v17; 
  int v18; 
  int v19; 
  int v22; 
  int v23; 
  uint32 v24; 
  int v25; 
  int v27; 
  int v28; 
  unsigned int v29; 
  int v30; 
  int v31; 
  sint16 v32; 
  sint16 v33; 
  sint16 v34; 
  sint16 v35; 
  sint16 v36; 
  sint16 v37; 
  sint16 v38; 
  sint16 v39; 
  sint16 v40; 
  int v41[4]; 
  int v42[8]; 

  v14 = (a1 - (10) * 2u);
  v15 = TM3_DRAFT_I16(a1 - (10) * 2u);
  v16 = TM3_DRAFT_I16(a1 - (9) * 2u);
  v17 = TM3_DRAFT_I16(v14 + (2) * 2u);
  v38 = v15;
  v39 = v16;
  v40 = v17;
  v18 = TM3_DRAFT_I16(a1 + (65) * 2u);
  v19 = TM3_DRAFT_I16(a1 + (71) * 2u) * v18;
  v41[0] = TM3_DRAFT_U32((a1 + (67) * 2u));
  v41[1] = TM3_DRAFT_U32((a1 + (67) * 2u));
  v41[2] = TM3_DRAFT_U32((a1 + (67) * 2u));
  v41[3] = TM3_DRAFT_U32((a1 + (67) * 2u));
  v22 = (v19 + 2048) >> 12;
  sub_8005B8D4();
  sub_8005B614((uint32)a9, (uint32)(a1 + (138) * 2u), v42);
  sub_8005BD24(v42);
  sub_8005BDB4(v42);
  v28 = (uint16)((TM3_DRAFT_I16(a1) * v18 + 2048) >> 12);
  LOWORD(v29) = (TM3_DRAFT_I16(a1 + (1) * 2u) * v18 + 2048) >> 12;
  v32 = (TM3_DRAFT_I16(a1) * v22 + 2048) >> 12;
  v33 = -TM3_DRAFT_I16(a1 + (70) * 2u);
  v23 = 1;
  v24 = (a1 + (2) * 2u);
  v34 = (TM3_DRAFT_I16(a1 + (1) * 2u) * v22 + 2048) >> 12;
  do
  {
    v30 = (uint16)((TM3_DRAFT_I16(v24) * v18 + 2048) >> 12);
    LOWORD(v31) = (TM3_DRAFT_I16(v24 + (1) * 2u) * v18 + 2048) >> 12;
    v35 = (TM3_DRAFT_I16(v24) * v22 + 2048) >> 12;
    v36 = -TM3_DRAFT_I16(a1 + (70) * 2u);
    v37 = (TM3_DRAFT_I16(v24 + (1) * 2u) * v22 + 2048) >> 12;
    if ( TM3_DRAFT_U32((a1 + (68) * 2u)) )
      tail_result = sub_8002A72C((int)&v28, v41[0], TM3_DRAFT_U32((a1 + (68) * 2u)), a2, a3, 1, a4, 200);
    else
      tail_result = sub_8002A940((int)&v28, v41, a2, a3, 1, a4, 200);
    v24 += (2) * 2u;
    ++v23;
    v28 = v30;
    LOWORD(v29) = v31;
    v32 = v35;
    v33 = v36;
    v34 = v37;
  }
  while ( v23 < 32 );
  v30 = (uint16)((TM3_DRAFT_I16(a1) * v18 + 2048) >> 12);
  LOWORD(v31) = (TM3_DRAFT_I16(a1 + (1) * 2u) * v18 + 2048) >> 12;
  v35 = (TM3_DRAFT_I16(a1) * v22 + 2048) >> 12;
  v36 = -TM3_DRAFT_I16(a1 + (70) * 2u);
  v37 = (TM3_DRAFT_I16(a1 + (1) * 2u) * v22 + 2048) >> 12;
  if ( TM3_DRAFT_U32((a1 + (68) * 2u)) )
    tail_result = sub_8002A72C((int)&v28, v41[0], TM3_DRAFT_U32((a1 + (68) * 2u)), a2, a3, 1, a4, 200);
  else
    tail_result = sub_8002A940((int)&v28, v41, a2, a3, 1, a4, 200);
  sub_8005B978();
  return tail_result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001E8FC(uint32 a1)
{
  union { uint64 align; uint8 bytes[0x68u]; } native_local_storage;
  uint8 *native_locals = native_local_storage.bytes;
  /* Original adjacent local buffers share one native storage area */
#define v52 ((int *)(native_locals + 0x10u))
#define v53 ((int *)(native_locals + 0x20u))
    FUNCTION_MARKER(0x8001E8FCu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint16 v2; 
  sint16 v3; 
  sint16 v4; 
  sint16 v5; 
  sint16 v6; 
  sint16 v7; 
  sint16 v8; 
  sint16 v9; 
  sint16 v10; 
  sint16 v11; 
  sint16 v12; 
  int v13; 
  sint16 v14; 
  sint16 v15; 
  int v16; 
  sint16 v17; 
  sint16 v18; 
  int v19; 
  sint16 v20; 
  sint16 v21; 
  uint32 v22; 
  sint16 v23; 
  sint16 v24; 
  sint16 v25; 
  int v26; 
  int v27; 
  uint32 v28; 
  uint32 v29; 
  sint16 v30; 
  sint16 v31; 
  int v32; 
  uint32 v33; 
  int v34; 
  unsigned int v35; 
  uint32 v36; 
  uint32 v37; 
  sint16 v38; 
  sint16 v39; 
  uint32 v40; 
  uint32 v41; 
  unsigned int v42; 
  unsigned int v43; 
  uint32 v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  sint32 result; 



  v2 = TM3_DRAFT_U16(a1);
  v3 = TM3_DRAFT_U16(a1 + (5) * 2u);
  v4 = TM3_DRAFT_U16(a1 + (6) * 2u);
  TM3_DRAFT_U16(a1 + (8) * 2u) = v2;
  TM3_DRAFT_U16(a1 + (9) * 2u) = v3;
  TM3_DRAFT_U16(a1 + (10) * 2u) = v4;
  v5 = TM3_DRAFT_U16(a1 + (5) * 2u);
  v6 = TM3_DRAFT_U16(a1 + (6) * 2u);
  TM3_DRAFT_U16(a1 + (12) * 2u) = TM3_DRAFT_U16(a1 + (4) * 2u);
  TM3_DRAFT_U16(a1 + (13) * 2u) = v5;
  TM3_DRAFT_U16(a1 + (14) * 2u) = v6;
  v7 = TM3_DRAFT_U16(a1 + (2) * 2u);
  TM3_DRAFT_U16(a1 + (16) * 2u) = TM3_DRAFT_U16(a1 + (4) * 2u);
  v8 = TM3_DRAFT_U16(a1 + (5) * 2u);
  TM3_DRAFT_U16(a1 + (18) * 2u) = v7;
  TM3_DRAFT_U16(a1 + (17) * 2u) = v8;
  v9 = TM3_DRAFT_U16(a1 + (5) * 2u);
  v10 = TM3_DRAFT_U16(a1 + (2) * 2u);
  TM3_DRAFT_U16(a1 + (20) * 2u) = TM3_DRAFT_U16(a1);
  TM3_DRAFT_U16(a1 + (21) * 2u) = v9;
  TM3_DRAFT_U16(a1 + (22) * 2u) = v10;
  v11 = TM3_DRAFT_U16(a1 + (1) * 2u);
  v12 = TM3_DRAFT_U16(a1 + (6) * 2u);
  v13 = 44;
  TM3_DRAFT_U16(a1 + (36) * 2u) = TM3_DRAFT_U16(a1);
  TM3_DRAFT_U16(a1 + (37) * 2u) = v11;
  TM3_DRAFT_U16(a1 + (38) * 2u) = v12;
  v14 = TM3_DRAFT_U16(a1 + (1) * 2u);
  v15 = TM3_DRAFT_U16(a1 + (6) * 2u);
  v16 = 0;
  TM3_DRAFT_U16(a1 + (32) * 2u) = TM3_DRAFT_U16(a1 + (4) * 2u);
  TM3_DRAFT_U16(a1 + (33) * 2u) = v14;
  TM3_DRAFT_U16(a1 + (34) * 2u) = v15;
  v17 = TM3_DRAFT_U16(a1 + (1) * 2u);
  v18 = TM3_DRAFT_U16(a1 + (2) * 2u);
  v19 = 0;
  TM3_DRAFT_U16(a1 + (28) * 2u) = TM3_DRAFT_U16(a1 + (4) * 2u);
  TM3_DRAFT_U16(a1 + (29) * 2u) = v17;
  TM3_DRAFT_U16(a1 + (30) * 2u) = v18;
  v20 = TM3_DRAFT_U16(a1 + (1) * 2u);
  v21 = TM3_DRAFT_U16(a1 + (2) * 2u);
  v22 = a1;
  TM3_DRAFT_U16(a1 + (24) * 2u) = TM3_DRAFT_U16(a1);
  TM3_DRAFT_U16(a1 + (25) * 2u) = v20;
  TM3_DRAFT_U16(a1 + (26) * 2u) = v21;
  v23 = TM3_DRAFT_U16(a1 + (6) * 2u);
  v24 = TM3_DRAFT_U16(a1 + (5) * 2u) - TM3_DRAFT_U16(a1 + (1) * 2u);
  v25 = TM3_DRAFT_U16(a1 + (2) * 2u);
  TM3_DRAFT_U16(a1 + (40) * 2u) = TM3_DRAFT_U16(a1 + (4) * 2u) - TM3_DRAFT_U16(a1);
  TM3_DRAFT_U16(a1 + (41) * 2u) = v24;
  TM3_DRAFT_U16(a1 + (42) * 2u) = v23 - v25;
  do
  {
    v26 = 0;
    v27 = 6;
    TM3_DRAFT_U16(v22 + (53) * 2u) = 4;
    TM3_DRAFT_U16(v22 + (61) * 2u) = -1;
    TM3_DRAFT_U16(v22 + (65) * 2u) = -1;
    TM3_DRAFT_U16(v22 + (57) * 2u) = 0;
    TM3_DRAFT_U16(v22 + (69) * 2u) = 1;
    do
    {
      v28 = (a1 + (v13 + v27) * 2u);
      v27 += 4;
      v29 = (a1 + (4 * TM3_DRAFT_U8(0x8007DF60u + v26 + v19) + 8) * 2u);
      v30 = TM3_DRAFT_I16(v29);
      v31 = TM3_DRAFT_I16(v29 + (1) * 2u);
      ++v26;
      TM3_DRAFT_U16(v28 + (2) * 2u) = TM3_DRAFT_I16(v29 + (2) * 2u);
      TM3_DRAFT_U16(v28) = v30;
      TM3_DRAFT_U16(v28 + (1) * 2u) = v31;
    }
    while ( v26 < 4 );
    v32 = 0;
    v33 = (a1 + (v13) * 2u);
    do
    {
      v34 = (v32 + 1) % (sint16)TM3_DRAFT_U16(a1 + (v16 + 53) * 2u);
      v35 = 4 * v32++;
      v36 = (v33 + (v35 + 6) * 2u);
      v37 = (v33 + (4 * v34 + 6) * 2u);
      v38 = TM3_DRAFT_U16(v37 + (1) * 2u) - TM3_DRAFT_U16(v36 + (1) * 2u);
      v39 = TM3_DRAFT_U16(v37 + (2) * 2u) - TM3_DRAFT_U16(v36 + (2) * 2u);
      v40 = (v33 + (v35 + 22) * 2u);
      v41 = (a1 + (v35 + v16) * 2u);
      TM3_DRAFT_U16(v40) = TM3_DRAFT_U16(v37) - TM3_DRAFT_U16(v36);
      TM3_DRAFT_U16(v40 + (1) * 2u) = v38;
      TM3_DRAFT_U16(v40 + (2) * 2u) = v39;
      v42 = TM3_DRAFT_I16(v41 + (68) * 2u);
      v43 = (TM3_DRAFT_I16(v41 + (67) * 2u) > 0) - ((unsigned int)TM3_DRAFT_I16(v41 + (67) * 2u) >> 31);
      TM3_DRAFT_U16(v40) = (TM3_DRAFT_I16(v41 + (66) * 2u) > 0) - ((unsigned int)TM3_DRAFT_I16(v41 + (66) * 2u) >> 31);
      TM3_DRAFT_U16(v40 + (1) * 2u) = v43;
      TM3_DRAFT_U16(v40 + (2) * 2u) = ((int)v42 > 0) - (v42 >> 31);
    }
    while ( v32 < 4 );
    v44 = (a1 + (v13) * 2u);
    v13 += 38;
    v16 += 38;
    v19 += 4;
    v45 = (sint16)TM3_DRAFT_U16(v44 + (23) * 2u);
    v46 = (sint16)TM3_DRAFT_U16(v44 + (24) * 2u);
    v52[0] = (sint16)TM3_DRAFT_U16(v44 + (22) * 2u);
    v52[2] = v46;
    v52[1] = v45;
    v47 = (sint16)TM3_DRAFT_U16(v44 + (27) * 2u);
    v48 = (sint16)TM3_DRAFT_U16(v44 + (28) * 2u);
    v53[0] = (sint16)TM3_DRAFT_U16(v44 + (26) * 2u);
    v53[1] = v47;
    v53[2] = v48;
    sub_8005C1C0((uint32)v52, (uint32)v53, TM3_DRAFT_LOCAL_ADDRESS(&v53[4], 12u));
    v49 = v53[5];
    v50 = v53[6];
    v22 += (38) * 2u;
    TM3_DRAFT_U32(v44) = v53[4];
    result = (int)v22 < (int)((a1 + (228) * 2u));
    TM3_DRAFT_U32(v44 + 4u) = v49;
    TM3_DRAFT_U32(v44 + 8u) = v50;
  }
  while ( (int)v22 < (int)((a1 + (228) * 2u)) );
  return result;
}

#undef v52
#undef v53

/* Unverified decompiler-derived draft */
uint32 sub_8002EE68(uint32 a1, uint32 a2)
{
  union { uint64 align; uint8 bytes[0x80u]; } native_local_storage;
  uint8 *native_locals = native_local_storage.bytes;
  /* Original adjacent local buffers share one native storage area */
#define v26 (*((sint16 *)(native_locals + 0x10u)))
#define v27 (*((sint16 *)(native_locals + 0x12u)))
#define v28 (*((sint16 *)(native_locals + 0x14u)))
#define v29 ((sint16 *)(native_locals + 0x18u))
#define v30 (*((sint16 *)(native_locals + 0x20u)))
#define v31 (*((sint16 *)(native_locals + 0x22u)))
#define v32 (*((sint16 *)(native_locals + 0x24u)))
#define v33 (*((int *)(native_locals + 0x28u)))
#define v34 (*((int *)(native_locals + 0x2Cu)))
#define v35 (*((int *)(native_locals + 0x30u)))
#define v36 (*((int *)(native_locals + 0x38u)))
#define v37 (*((sint16 *)(native_locals + 0x3Cu)))
#define v38 (*((int *)(native_locals + 0x40u)))
#define v39 (*((int *)(native_locals + 0x48u)))
#define v40 (*((int *)(native_locals + 0x4Cu)))
#define v41 (*((int *)(native_locals + 0x50u)))
#define v42 (*((sint16 *)(native_locals + 0x58u)))
#define v43 (*((sint16 *)(native_locals + 0x5Au)))
#define v44 (*((sint16 *)(native_locals + 0x5Cu)))
#define v45 (*((sint16 *)(native_locals + 0x60u)))
#define v46 (*((sint16 *)(native_locals + 0x62u)))
#define v47 (*((sint16 *)(native_locals + 0x64u)))
#define v48 (*((sint16 *)(native_locals + 0x68u)))
#define v49 (*((sint16 *)(native_locals + 0x6Au)))
#define v50 (*((sint16 *)(native_locals + 0x6Cu)))
    FUNCTION_MARKER(0x8002EE68u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  unsigned int result; 
  sint16 v4; 
  int v5; 
  int v6; 
  int v7; 
  sint16 v8; 
  sint16 v9; 
  sint16 v10; 
  sint16 v11; 
  int v12; 
  int v13; 
  sint16 v14; 
  sint16 v15; 
  sint16 v16; 
  sint16 v17; 
  sint16 v18; 
  sint16 v19; 
  int v20; 
  int v21; 
  sint16 v22; 
  int v23; 
  sint16 v24; 
  sint32 v25; 



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
  v8 = TM3_DRAFT_U16(a1 + 126);
  v9 = TM3_DRAFT_U16(a1 + 132);
  v30 = TM3_DRAFT_U16(a1 + 120);
  v31 = v8;
  v32 = v9;
  sub_80013FB4((int)&v33, TM3_DRAFT_U16(a1 + 112), TM3_DRAFT_LOCAL_ADDRESS(&v30, sizeof(v30)));
  v10 = v34;
  v11 = v35;
  TM3_DRAFT_U16(a1 + 16) = v33;
  TM3_DRAFT_U16(a1 + 18) = v10;
  TM3_DRAFT_U16(a1 + 20) = v11;
  v12 = TM3_DRAFT_U32(a1 + 164);
  if ( !v12 )
    goto LABEL_15;
  if ( !sub_800470DC(TM3_DRAFT_U32(a1 + 164)) )
    v12 = 0;
  v13 = v12 - 20;
  if ( v12 )
  {
    v14 = TM3_DRAFT_U16(v13 + 2);
    v15 = TM3_DRAFT_U16(v13 + 4);
    v42 = TM3_DRAFT_U16(v12 - 20);
    v43 = v14;
    v44 = v15;
    v39 = v42 - TM3_DRAFT_U32(a1 + 136);
    v40 = v14 - TM3_DRAFT_U32(a1 + 140);
    v41 = v15 - TM3_DRAFT_U32(a1 + 144);
    v16 = TM3_DRAFT_U16(a1 + 124);
    v17 = TM3_DRAFT_U16(a1 + 130);
    v48 = TM3_DRAFT_U16(a1 + 118);
    v49 = v16;
    v50 = v17;
    v18 = TM3_DRAFT_U16(a1 + 122);
    v19 = TM3_DRAFT_U16(a1 + 128);
    v45 = TM3_DRAFT_U16(a1 + 116);
    v46 = v18;
    v47 = v19;
    v20 = TM3_DRAFT_U16(a1 + 108);
    v21 = (v39 * v45 + v41 * v19) >> 12;
    v29[1] = 0;
    if ( v21 >= 0 )
      v29[0] = ((v20 - v21) & ((v20 - v21) >> 31)) + v21;
    else
      v29[0] = v21 - ((v20 + v21) & ((v20 + v21) >> 31));
    v29[2] = 0;
    sub_8005BB84((uint32)(a1 + 116), (int)v29, TM3_DRAFT_LOCAL_ADDRESS(&v26, sizeof(v26)));
    v22 = v27 + LOWORD(TM3_DRAFT_U32(0x80089CFCu + (3) * 4u));
  }
  else
  {
LABEL_15:
    v22 = TM3_DRAFT_U32(0x80089CFCu + (3) * 4u);
    v26 = 0;
    v28 = 0;
  }
  v27 = v22;
  v33 = v30 + v26;
  v34 = v31 + v22;
  v35 = v32 + v28;
  sub_8005B254(TM3_DRAFT_LOCAL_ADDRESS(&v33, 12u), TM3_DRAFT_LOCAL_ADDRESS(&v36, 12u));
  TM3_DRAFT_U16(a1 + 120) = v36;
  TM3_DRAFT_U16(a1 + 126) = v37;
  TM3_DRAFT_U16(a1 + 132) = v38;
  v23 = a1 + 116;
  if ( v36 && v38 )
  {
    v24 = v38;
    TM3_DRAFT_U16(a1 + 122) = 0;
    TM3_DRAFT_U16(a1 + 116) = v24;
    TM3_DRAFT_U16(a1 + 128) = -(sint16)v36;
    v23 = a1 + 116;
  }
  sub_800150FC(v23, 2, 0);
  if ( TM3_DRAFT_U8(a1 + 321) )
    sub_8002DF70(a1);
  result = TM3_DRAFT_U32(a1 + 148) + 1;
  v25 = TM3_DRAFT_U32(a1 + 152) >= result;
  TM3_DRAFT_U32(a1 + 148) = result;
  if ( !v25 )
  {
    TM3_DRAFT_U32(a1 + 68) = 0;
    return sub_8002DEA4(a1);
  }
  return result;
}

#undef v26
#undef v27
#undef v28
#undef v29
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50

/* Unverified decompiler-derived draft */
uint32 sub_80034890(uint32 a1)
{
    FUNCTION_MARKER(0x80034890u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v2; 
  int v3; 
  sint32 v4; 
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
  uint16 v17; 
  uint32 v18; 
  uint16 v19; 
  sint16 v20; 
  int result; 
  int v22; 
  sint16 v23; 
  int v24; 
  sint16 v25; 
  int v26; 
  int v27; 
  int v28[4]; 
  int v29; 

  v2 = TM3_DRAFT_U32(a1) - 20;
  if ( TM3_DRAFT_U32(a1) )
  {
    v23 = TM3_DRAFT_U16(v2 + 2);
    v25 = TM3_DRAFT_U16(v2 + 4);
    v3 = a1 - 20;
    TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U16(TM3_DRAFT_U32(a1) - 20);
    TM3_DRAFT_U16(v3 + 2) = v23;
    TM3_DRAFT_U16(v3 + 4) = v25;
    v4 = sub_800470DC(TM3_DRAFT_U32(a1)) != 0;
    v5 = a1 - 20;
    if ( !v4 )
      return sub_8004A570(a1);
  }
  else
  {
    v4 = (sub_80039FD4() & 3) != 3;
    v5 = a1 - 20;
    if ( v4 )
    {
      dword_80089838 = 0;
    }
    else
    {
      dword_80089838 = 1;
      v5 = a1 - 20;
    }
  }
  LOWORD(v22) = TM3_DRAFT_U16(a1 - 20);
  HIWORD(v22) = TM3_DRAFT_U16(v5 + 2);
  LOWORD(v24) = TM3_DRAFT_U16(v5 + 4);
  v6 = 0;
  if ( TM3_DRAFT_U32(0x800d340cu) > 0 )
  {
    v7 = 0;
    do
    {
      v8 = TM3_DRAFT_U32(v7 - 2146619768 + 1424);
      v9 = v8 - 20;
      if ( v8 != TM3_DRAFT_U32(a1) )
      {
        LOWORD(v26) = TM3_DRAFT_U16(v8 - 20);
        HIWORD(v26) = TM3_DRAFT_U16(v9 + 2);
        LOWORD(v27) = TM3_DRAFT_U16(v9 + 4);
        v11 = sub_80015764((sint16)v26 - (sint16)v22, SHIWORD(v26) - SHIWORD(v22), (sint16)v27 - (sint16)v24);
        v10 = sub_80034844(a1, v8, TM3_DRAFT_LOCAL_ADDRESS(&v29, sizeof(v29)));
        if ( v11 >= TM3_DRAFT_U32(a1 + 112) )
        {
          if ( v10 )
          {
            if ( TM3_DRAFT_U16(a1 + 156) < 2u )
            {
              TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 4 * v29 + 40) + 68) = 0;
            }
            else
            {
              sub_8004A570(v10);
              TM3_DRAFT_U32(a1 + 4 * v29 + 40) = 0;
              --TM3_DRAFT_U16(a1 + 156);
            }
          }
        }
        else if ( !v10 && (TM3_DRAFT_U32(a1) || SHIWORD(v22) < SHIWORD(v26)) )
        {
          v12 = sub_800347F8(a1);
          v4 = v12 == -1;
          v13 = 4 * v12;
          if ( v4 )
            return sub_8004A570(a1);
          v14 = a1 + v13;
          v15 = TM3_DRAFT_U32(a1 + v13 + 40);
          if ( v15 )
          {
            TM3_DRAFT_U32(v15 + 68) = v8;
          }
          else
          {
            TM3_DRAFT_U32(v14 + 40) = sub_8004A294(24, a1, v8, TM3_DRAFT_U32(a1 + 120));
            ++TM3_DRAFT_U16(a1 + 156);
          }
          v16 = TM3_DRAFT_U32(a1 + 116);
          v28[0] = 0;
          v28[2] = 0;
          v28[1] = v16;
          sub_80033D4C(v8, v28);
        }
      }
      ++v6;
      v7 = 4 * v6;
    }
    while ( v6 < TM3_DRAFT_U32(0x800d340cu) );
  }
  v17 = TM3_DRAFT_U16(a1 + 162) + 1;
  TM3_DRAFT_U16(a1 + 162) = v17;
  if ( v17 >= 3u )
  {
    v18 = TM3_DRAFT_U32(a1 + 164);
    v19 = TM3_DRAFT_U16(a1 + 160) + 1;
    TM3_DRAFT_U16(a1 + 160) = v19;
    if ( v19 >= (sint16)TM3_DRAFT_U16(v18) )
      TM3_DRAFT_U16(a1 + 160) = 0;
    TM3_DRAFT_U16(a1 + 162) = 0;
  }
  v20 = TM3_DRAFT_U16(a1 + 158);
  TM3_DRAFT_U16(a1 + 158) = v20 + 256;
  if ( (uint16)(v20 + 256) >= 0x1001u )
    TM3_DRAFT_U16(a1 + 158) = v20 - 3840;
  result = TM3_DRAFT_U32(a1 + 108) + 1;
  v4 = TM3_DRAFT_U32(a1 + 104) >= result;
  TM3_DRAFT_U32(a1 + 108) = result;
  if ( !v4 )
    return sub_8004A570(a1);
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80065F44(uint32 a1)
{
    FUNCTION_MARKER(0x80065F44u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint32 v2; 
  int v3; 
  int v4; 
  char v5; 
  int result; 
  int v7; 
  sint32 v8; 
  uint32 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  uint8 v15; 
  uint8 v16; 
  sint32 v17; 
  int v18; 

  tm3_draft_indirect(dword_80087DB8, 1u, a1);
  v2 = 0;
  if ( dword_80087DF8 && (int)TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 60)) >> 4 == 8 )
    v2 = TM3_DRAFT_U8(a1 + 55) == 0;
  v3 = -1;
  if ( !v2 )
  {
LABEL_12:
    v7 = 0;
    v8 = dword_80087DEC == 0;
    if ( dword_80087E24 < 2 )
    {
LABEL_30:
      if ( --dword_80087E24 <= 0 )
      {
LABEL_35:
        sub_800650B8();
        v18 = TM3_DRAFT_U8(a1 + 68);
        TM3_DRAFT_U8(a1 + 68) = v18 + 1;
        TM3_DRAFT_U8(v18 + TM3_DRAFT_U32(a1 + 60)) = TM3_DRAFT_U8(dword_80087E28);
        tm3_draft_indirect(dword_80087DAC, 1u, 0);
        return 0;
      }
      else
      {
        while ( 1 )
        {
          v16 = tm3_draft_indirect(dword_80087DB4, 2u, a1, v2);
          result = sub_80064BA0(a1, v16);
          if ( result < 0 )
            break;
          if ( TM3_DRAFT_U16(dword_80087E28 + 14) != 34 )
          {
            sub_8006760C(60);
            v17 = sub_80065028() == 0;
            result = -3;
            if ( v17 )
              break;
          }
          if ( --dword_80087E24 <= 0 )
            goto LABEL_35;
        }
      }
      return result;
    }
    v9 = (0x80087E04u + (v8) * 4u);
    v10 = 240 * v8;
    while ( 1 )
    {
      v11 = TM3_DRAFT_I32(v9);
      if ( TM3_DRAFT_I32(v9) < 0 )
        goto LABEL_30;
      if ( v11 > 0 )
      {
        v7 = TM3_DRAFT_U32(v10 + dword_80087DE0 + 12) + 240 * v11 - 240;
        tm3_draft_indirect(dword_80087DCC, 1u, v7);
      }
      v12 = TM3_DRAFT_I32(v9);
      if ( TM3_DRAFT_I32(v9) == 3 )
        break;
      if ( v12 >= 4 )
      {
        v13 = a1;
        if ( v12 == 4 )
          TM3_DRAFT_I32(v9) = 3;
      }
      else
      {
        v13 = a1;
        if ( v12 < 2 && v12 >= 0 )
        {
          v7 = dword_80087DE0 + v10;
          tm3_draft_indirect(dword_80087DCC, 1u, dword_80087DE0 + v10);
          tm3_draft_indirect(dword_80087DD0, 1u, v7);
          v14 = -1;
LABEL_25:
          TM3_DRAFT_I32(v9) = v14;
          v13 = a1;
        }
      }
      v15 = tm3_draft_indirect(dword_80087DB4, 2u, v13, v2);
      result = sub_80064BA0(a1, v15);
      if ( result < 0 )
        return result;
      sub_8006760C(60);
      if ( !sub_80065028() )
        return -3;
      if ( --dword_80087E24 < 2 )
        goto LABEL_30;
    }
    tm3_draft_indirect(dword_80087DCC, 1u, v7 - 240);
    v14 = 1;
    goto LABEL_25;
  }
  v4 = -240;
  while ( 1 )
  {
    if ( --dword_80087E24 <= 0 )
      goto LABEL_12;
    if ( v3 >= 0 )
      tm3_draft_indirect(dword_80087DB8, 1u, TM3_DRAFT_U32(a1 + 12) + v4);
    v5 = tm3_draft_indirect(dword_80087DB4, 2u, a1, 1);
    result = sub_80064DB0(a1, v5);
    if ( result < 0 )
      return result;
    sub_8006760C(60);
    ++v3;
    if ( !sub_80065028() )
      return -3;
    v4 += 240;
    if ( v3 >= 4 )
      goto LABEL_12;
  }
}

/* Unverified decompiler-derived draft */
uint32 sub_800267F0(uint32 a1)
{
    FUNCTION_MARKER(0x800267F0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v1; 
  int v3; 
  int v4; 
  int v5; 
  uint32 v6; 
  int v7; 
  int v8; 
  int v9; 
  uint32 v10; 
  uint32 v11; 
  uint32 v12; 
  uint32 v13; 
  uint32 v14; 
  int v15; 
  int v16; 
  uint32 v17; 
  int v18; 
  int v19; 
  uint32 v20; 
  int v21; 
  uint32 v22; 
  int v23; 
  int v24; 
  sint32 result; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 

  v3 = 0;
  v4 = -2146917400;
  while ( 1 )
  {
    ++v3;
    if ( TM3_DRAFT_U32(v4) == TM3_DRAFT_I32(a1 + (982) * 4u) )
      break;
    v4 += 8;
    if ( v3 >= 16 )
      goto LABEL_4;
  }
  v1 = TM3_DRAFT_U32(v4 + 4);
LABEL_4:
  switch ( (unsigned int)TM3_DRAFT_I32(a1 + (982) * 4u) )
  {
    case 0u:
      TM3_DRAFT_I32(a1 + (12) * 4u) = (uint32)0x8002647Cu;
      break;
    case 1u:
      TM3_DRAFT_I32(a1 + (12) * 4u) = (uint32)0x800264E8u;
      break;
    case 3u:
      TM3_DRAFT_I32(a1 + (12) * 4u) = (uint32)0x80026554u;
      break;
    case 5u:
      TM3_DRAFT_I32(a1 + (12) * 4u) = (uint32)0x800265C0u;
      break;
    case 7u:
      TM3_DRAFT_I32(a1 + (12) * 4u) = (uint32)0x8002662Cu;
      break;
    case 8u:
      TM3_DRAFT_I32(a1 + (12) * 4u) = (uint32)0x800266B4u;
      break;
    case 0xBu:
      TM3_DRAFT_I32(a1 + (12) * 4u) = (uint32)0x800266D8u;
      break;
    case 0xEu:
      TM3_DRAFT_I32(a1 + (12) * 4u) = (uint32)0x80026760u;
      break;
    default:
      TM3_DRAFT_I32(a1 + (12) * 4u) = 0;
      break;
  }
  v5 = 0;
  v6 = a1;
  v7 = v1;
  TM3_DRAFT_I32(a1 + (15) * 4u) = (uint32)3072;
  TM3_DRAFT_I32(a1 + (13) * 4u) = 0;
  do
  {
    v8 = v5;
    if ( TM3_DRAFT_U32(v7 + 4) == TM3_DRAFT_U32(v7 + 8) )
    {
      v9 = 4 * v5 + v1;
      do
      {
        v9 -= 4;
        --v8;
      }
      while ( TM3_DRAFT_U32(v9 + 4) == TM3_DRAFT_U32(v9 + 8) );
    }
    v10 = (uint32)(TM3_DRAFT_U32(4 * v8 + v1 + 4) + v1);
    v11 = (uint32)((uint32)v10 + TM3_DRAFT_U32(v10));
    TM3_DRAFT_I32(v6) = v11;
    v12 = v11;
    v13 = v11 + (uint32)TM3_DRAFT_I32(v11) * 24u + 36u;
    TM3_DRAFT_I32(v6 + (3) * 4u) = v13;
    TM3_DRAFT_I32(v6 + 24u) = v13 + (uint32)TM3_DRAFT_I32(v12 + 4u) * 20u;
    v14 = TM3_DRAFT_I32(v6);
    TM3_DRAFT_I32(v6 + (9) * 4u) = (v10 + TM3_DRAFT_U32(v10 + 4u));
    v15 = 0;
    if ( TM3_DRAFT_I32(v14) > 0 )
    {
      v16 = 9;
      do
      {
        v17 = (TM3_DRAFT_U32(v6) + v16 * 4u);
        v18 = v5;
        if ( !TM3_DRAFT_U8(v17 + 22u) )
        {
          v19 = 0;
          v20 = (TM3_DRAFT_U32(v6) + v16 * 4u);
          do
          {
            v21 = 0;
            v26 = 0;
            v28 = 0;
            v29 = 0;
            if ( TM3_DRAFT_I16(v20 + 6u) > 0 )
            {
              v22 = (TM3_DRAFT_U32(v6 + 24u) + 8u * TM3_DRAFT_I16(v20 + 4u));
              do
              {
                v26 = (sint32)((uint32)v26 + (uint32)(sint32)TM3_DRAFT_I16(v22));
                v28 = (sint32)((uint32)v28 + (uint32)(sint32)TM3_DRAFT_I16(v22 + 2u));
                v29 = (sint32)((uint32)v29 + (uint32)(sint32)TM3_DRAFT_I16(v22 + 4u));
                ++v21;
                v22 += (2) * 4u;
              }
              while ( v21 < TM3_DRAFT_I16(v20 + 6u) );
            }
            v27 = v26 / TM3_DRAFT_I16(v20 + 6u);
            v23 = v28 / TM3_DRAFT_I16(v20 + 6u);
            v24 = TM3_DRAFT_I16(v20 + 6u);
            ++v19;
            v20 += (2) * 4u;
            TM3_DRAFT_U16(v17 + 16u) = v27;
            TM3_DRAFT_U16(v17 + 18u) = v23;
            TM3_DRAFT_U16(v17 + 20u) = v29 / v24;
          }
          while ( v19 <= 0 );
          v18 = v5;
        }
        ++v15;
        v16 += 6;
      }
      while ( v15 < TM3_DRAFT_I32(TM3_DRAFT_U32(a1 + v18 * 4u)) );
    }
    (v6 += 4u);
    result = ++v5 < 3;
    v7 += 4;
  }
  while ( v5 < 3 );
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80041C94(uint32 a1)
{
  uint32 index, table, entry, packet, count, result;
  FUNCTION_MARKER(0x80041C94u, "SCUS_942.49");
  if (TM3_DRAFT_U32(0x800D2F20u)) sub_8004D838(a1);
  sub_80046694(a1);
  if ((TM3_DRAFT_U32(0x8007EA0Cu) >> 6) & 1u)
  {
    if (TM3_DRAFT_U32(0x800D2F18u) == 2u)
      sub_80049284(0x8008983Cu, 0x8007F004u, 160u, (uint32)TM3_DRAFT_U16(0x80089E02u)-30u, a1, a1+88u, 22u, 128u, 128u, 128u, 3u, 2u);
    if (TM3_DRAFT_U32(0x800D2F18u) == 1u && !TM3_DRAFT_U32(0x800D2F20u))
      sub_80049284(0x80088230u, 0x8007F004u, 160u, 108u, a1, a1+88u, 22u, 128u, 128u, 128u, 3u, 2u);
  }
  index = 0u;
  do
  {
    uint32 player = TM3_DRAFT_U32(0x800D2E88u)-1u;
    table = TM3_DRAFT_U32(0x8007E894u+player*4u);
    entry = TM3_DRAFT_U32(0x800D2EFCu+player*4u);
    count = TM3_DRAFT_U8(table+entry*72u+6u);
    if (index >= count) break;
    packet = a1+0x20A40u+index*16u;
    TM3_DRAFT_U32(packet) = (TM3_DRAFT_U32(packet)&0xFF000000u) | (TM3_DRAFT_U32(a1+88u)&0xFFFFFFu);
    TM3_DRAFT_U32(a1+88u) = (TM3_DRAFT_U32(a1+88u)&0xFF000000u) | (packet&0xFFFFFFu);
    ++index;
  } while (1);
  result = TM3_DRAFT_U32(0x80089838u);
  if (result)
  {
    packet = a1+0x20A80u+(result<<4);
    TM3_DRAFT_U8(packet+4u)=TM3_DRAFT_U8(0x80089D20u);
    TM3_DRAFT_U8(packet+5u)=TM3_DRAFT_U8(0x80089D21u);
    TM3_DRAFT_U8(packet+6u)=TM3_DRAFT_U8(0x80089D22u);
    TM3_DRAFT_U32(packet)=(TM3_DRAFT_U32(packet)&0xFF000000u)|(TM3_DRAFT_U32(a1+88u)&0xFFFFFFu);
    TM3_DRAFT_U32(a1+88u)=(TM3_DRAFT_U32(a1+88u)&0xFF000000u)|(packet&0xFFFFFFu);
    packet=a1+0x20AA0u;
    TM3_DRAFT_U32(packet)=(TM3_DRAFT_U32(packet)&0xFF000000u)|(TM3_DRAFT_U32(a1+88u)&0xFFFFFFu);
    result=(TM3_DRAFT_U32(a1+88u)&0xFF000000u)|(packet&0xFFFFFFu);
    TM3_DRAFT_U32(a1+88u)=result;
  }
  return result;
}
