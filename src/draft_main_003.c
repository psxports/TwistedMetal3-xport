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
    TM3_DRAFT_U32(0x800d2efcu) = (int)sub_80039FD4() % TM3_DRAFT_I32(TM3_DRAFT_U32(0x8007E894u));
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
      TM3_DRAFT_U32(0x800d2e94u) = (sint32)sub_80039FD4() % (sint32)(8u - TM3_DRAFT_U32(0x800d2e88u)) + 1;
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
    if ( !TM3_DRAFT_U32(0x800d2e8cu) ) {
      sub_800474D0();
      return 0u; /* Void hardware boundary has no semantic return value */
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
/* Project the stored quads and link visible packets into the ordering table */
static void tm3_project_background_batch(uint32 ordering_table, uint32 source, uint32 variant, uint32 count_offset, uint32 source_stride, uint32 packet_stride, uint32 compact)
{
    uint32 index = 0u;
    while (index < TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089de0u) + count_offset))
    {
        uint32 packet = source + 32u + variant * packet_stride;
        uint32 component;
        sint32 depth, first_area, second_area;
        for (component = 0u; component < 6u; ++component)
            tm3_draft_gte_write_data(component, TM3_DRAFT_U32(source + component * 4u));
        tm3_draft_gte_command(0x280030u);
        TM3_DRAFT_U32(packet + 8u) = tm3_draft_gte_read_data(12u);
        TM3_DRAFT_U32(packet + (compact ? 12u : 16u)) = tm3_draft_gte_read_data(13u);
        TM3_DRAFT_U32(packet + (compact ? 16u : 24u)) = tm3_draft_gte_read_data(14u);
        tm3_draft_gte_command(0x158002du);
        depth = (sint32)tm3_draft_gte_read_data(19u) >> 2;
        tm3_draft_gte_command(0x1400006u);
        first_area = (sint32)tm3_draft_gte_read_data(24u);
        tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(source + 24u));
        tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(source + 28u));
        tm3_draft_gte_command(0x280030u);
        tm3_draft_gte_command(0x1400006u);
        second_area = (sint32)tm3_draft_gte_read_data(24u);
        if ((second_area <= 0 || first_area > 0) && depth > 0)
        {
            TM3_DRAFT_U32(packet + (compact ? 20u : 32u)) = tm3_draft_gte_read_data(12u);
            TM3_DRAFT_U32(packet) = (TM3_DRAFT_U32(packet) & 0xff000000u) | (TM3_DRAFT_U32(ordering_table) & 0x00ffffffu);
            TM3_DRAFT_U32(ordering_table) = (TM3_DRAFT_U32(ordering_table) & 0xff000000u) | (packet & 0x00ffffffu);
        }
        ++index;
        source += source_stride;
    }
}

uint32 sub_8003E21C(uint32 ordering_table, uint32 camera_matrix, uint32 variant)
{
    uint32 translation_matrix[8];
    uint32 address = TM3_DRAFT_LOCAL_ADDRESS(translation_matrix, sizeof(translation_matrix));
    FUNCTION_MARKER(0x8003E21Cu, "SCUS_942.49");
    sub_8005B8D4();
    translation_matrix[5] = 0u;
    translation_matrix[6] = 0u;
    translation_matrix[7] = 0u;
    sub_8005BDB4(address);
    variant &= 0xffu;
    tm3_project_background_batch(ordering_table, TM3_DRAFT_U32(0x80089dd8u), variant, 2u, 196u, 40u, 0u);
    if (TM3_DRAFT_I16(camera_matrix + 14u) >= -3199)
        tm3_project_background_batch(ordering_table, TM3_DRAFT_U32(0x80089de4u), variant, 0u, 176u, 36u, 0u);
    tm3_project_background_batch(ordering_table, TM3_DRAFT_U32(0x80089de8u), variant, 1u, 128u, 24u, 1u);
    sub_8005B978();
    /* Original final comparison leaves zero before the void SDK return */
    return 0u;
}

/* Unverified decompiler-derived draft */
uint32 sub_80042250(uint32 player, uint32 target, uint32 packets, uint32 ordering_table)
{
    sint16 forward[4], side[3], origin[3];
    uint32 forward_address, object, team, index, packet, delta[3], sum_forward, sum_side, squared;
    sint32 count, x, y, radius, result;
    unsigned axis;
    uint8 blue;
    FUNCTION_MARKER(0x80042250u, "SCUS_942.49");
    forward[0] = TM3_DRAFT_I16(player + 1540u);
    forward[1] = 0;
    forward[2] = TM3_DRAFT_I16(player + 1552u);
    forward_address = TM3_DRAFT_LOCAL_ADDRESS(forward, sizeof(forward));
    sub_8005B284(forward_address, forward_address);
    side[0] = forward[2];
    side[1] = 0;
    side[2] = (sint16)(0u - (uint32)(sint32)forward[0]);
    for (axis = 0; axis < 3; ++axis)
        origin[axis] = TM3_DRAFT_I16(player - 20u + 2u * axis);
    team = TM3_DRAFT_U16(TM3_DRAFT_U32(player + 3396u) + 20u);
    result = (sint32)team;
    count = TM3_DRAFT_I32(0x800D340Cu);
    for (index = 0; (sint32)index < count; ++index)
    {
        object = TM3_DRAFT_U32(0x800D3418u + 4u * index);
        if (object != player)
        {
            if (TM3_DRAFT_U16(TM3_DRAFT_U32(object + 3396u) + 20u) != team &&
                (((sub_80039FC8() + index * (uint32)(8 / TM3_DRAFT_I32(0x800D340Cu))) >> 3) & 1u))
                goto next_object;
            sum_forward = sum_side = 0;
            for (axis = 0; axis < 3; ++axis)
            {
                delta[axis] = (uint32)(sint32)TM3_DRAFT_I16(object - 20u + 2u * axis) - (uint32)(sint32)origin[axis];
                sum_forward += (uint32)(sint32)forward[axis] * delta[axis];
                sum_side += (uint32)(sint32)side[axis] * delta[axis];
            }
            y = (sint32)(0u - (uint32)((sint32)(sum_forward + 2048u) >> 12));
            x = (sint32)sub_80015684((uint32)((sint32)(sum_side + 2048u) >> 12), 8u, 12u);
            y = (sint32)sub_80015684((uint32)y, 8u, 12u);
            squared = (uint32)x * (uint32)x + (uint32)y * (uint32)y;
            if ((sint32)squared >= 485)
            {
                radius = (sint32)sub_8005B124(squared);
                x = (sint32)(22u * (uint32)x) / radius;
                y = (sint32)(22u * (uint32)y) / radius;
            }
            packet = packets + 16u * index + 1468u;
            if (object == target)
                TM3_DRAFT_U8(packet + 7u) &= 0xFDu;
            else
                TM3_DRAFT_U8(packet + 7u) |= 2u;
            TM3_DRAFT_U8(packet + 4u) = TM3_DRAFT_U8(TM3_DRAFT_U32(object + 4040u));
            TM3_DRAFT_U8(packet + 5u) = TM3_DRAFT_U8(TM3_DRAFT_U32(object + 4040u) + 1u);
            blue = TM3_DRAFT_U8(TM3_DRAFT_U32(object + 4040u) + 2u);
            TM3_DRAFT_U16(packet + 8u) = (uint16)((uint32)x + 33u);
            TM3_DRAFT_U16(packet + 10u) = (uint16)((uint32)y + 48u);
            TM3_DRAFT_U8(packet + 6u) = blue;
            TM3_DRAFT_U32(packet) = (TM3_DRAFT_U32(packet) & 0xFF000000u) | (TM3_DRAFT_U32(ordering_table) & 0xFFFFFFu);
            TM3_DRAFT_U32(ordering_table) = (TM3_DRAFT_U32(ordering_table) & 0xFF000000u) | (packet & 0xFFFFFFu);
        }
next_object:
        count = TM3_DRAFT_I32(0x800D340Cu);
        result = (sint32)(index + 1u) < count;
    }
    return (uint32)result;
}
/* Unverified decompiler-derived draft */
/* Rounded low-word product used by the original ring vertices */
static sint16 tm3_ring_coordinate(sint32 value, sint32 scale)
{
    uint32 product = (uint32)value * (uint32)scale;
    return (sint16)((sint32)(product + 2048u) >> 12);
}

uint32 sub_800284D0(uint32 object, uint32 ordering_table, uint32 cursor, uint32 end, uint32 view_matrix)
{
    sint16 vertices[4][4];
    uint32 colors[4], matrix[8];
    uint32 vertices_address = TM3_DRAFT_LOCAL_ADDRESS(vertices, sizeof(vertices));
    uint32 colors_address = TM3_DRAFT_LOCAL_ADDRESS(colors, sizeof(colors));
    uint32 matrix_address = TM3_DRAFT_LOCAL_ADDRESS(matrix, sizeof(matrix));
    sint32 outer = TM3_DRAFT_I16(object + 0x82u);
    sint32 inner = (sint32)((uint32)TM3_DRAFT_I16(object + 0x8eu) * (uint32)outer + 2048u) >> 12;
    uint32 index, result = 0u;
    FUNCTION_MARKER(0x800284D0u, "SCUS_942.49");
    for (index = 0; index < 4u; ++index)
        colors[index] = TM3_DRAFT_U32(object + 0x10cu);
    sub_8005B8D4();
    sub_8005B614(view_matrix, object + 0x114u, matrix_address);
    sub_8005BD24(matrix_address);
    sub_8005BDB4(matrix_address);
    vertices[0][0] = tm3_ring_coordinate(TM3_DRAFT_I16(object), outer);
    vertices[0][1] = 0;
    vertices[0][2] = tm3_ring_coordinate(TM3_DRAFT_I16(object + 2u), outer);
    vertices[2][0] = tm3_ring_coordinate(TM3_DRAFT_I16(object), inner);
    vertices[2][1] = (sint16)(0u - TM3_DRAFT_U16(object + 0x8cu));
    vertices[2][2] = tm3_ring_coordinate(TM3_DRAFT_I16(object + 2u), inner);
    for (index = 1u; index <= 32u; ++index)
    {
        uint32 point = object + (index & 31u) * 4u;
        uint32 texture;
        vertices[1][0] = tm3_ring_coordinate(TM3_DRAFT_I16(point), outer);
        vertices[1][1] = 0;
        vertices[1][2] = tm3_ring_coordinate(TM3_DRAFT_I16(point + 2u), outer);
        vertices[3][0] = tm3_ring_coordinate(TM3_DRAFT_I16(point), inner);
        vertices[3][1] = (sint16)(0u - TM3_DRAFT_U16(object + 0x8cu));
        vertices[3][2] = tm3_ring_coordinate(TM3_DRAFT_I16(point + 2u), inner);
        texture = TM3_DRAFT_U32(object + 0x110u);
        if (texture != 0u)
            result = sub_8002A72C(vertices_address, colors[0], texture, ordering_table, cursor, 1u, end, 200u);
        else
            result = sub_8002A940(vertices_address, colors_address, ordering_table, cursor, 1u, end, 200u);
        vertices[0][0] = vertices[1][0];
        vertices[0][1] = vertices[1][1];
        vertices[0][2] = vertices[1][2];
        vertices[2][0] = vertices[3][0];
        vertices[2][1] = vertices[3][1];
        vertices[2][2] = vertices[3][2];
    }
    sub_8005B978();
    return result;
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
uint32 sub_8002EE68(uint32 object)
{
    FUNCTION_MARKER(0x8002EE68u, "SCUS_942.49");
    uint32 result;
    if (TM3_DRAFT_U16(object + 110u) != 0u) {
        if (TM3_DRAFT_U8(object + 321u) == 1u) sub_8002DF70(object);
        result = TM3_DRAFT_U32(object + 148u) + 1u;
        uint16 remaining = TM3_DRAFT_U16(object + 110u) - 1u;
        TM3_DRAFT_U16(object + 110u) = remaining;
        TM3_DRAFT_U32(object + 148u) = result;
        return remaining == 0u ? sub_8004A570(object) : result;
    }
    uint32 moved = sub_80026F98(object, object, TM3_DRAFT_U16(object + 104u),
                              TM3_DRAFT_U16(object + 104u));
    for (uint32 axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U32(object + 136u + 4u * axis) = (uint32)(sint32)TM3_DRAFT_I16(object + 8u + 2u * axis);
    if (moved == 0u) return sub_8002DEA4(object);

    sint16 direction[4];
    sint16 correction[4];
    sint16 steering[4];
    sint32 velocity[4];
    sint32 normalized[4];
    for (uint32 axis = 0; axis < 3u; ++axis)
        direction[axis] = TM3_DRAFT_I16(object + 120u + 6u * axis);
    uint32 velocity_address = TM3_DRAFT_LOCAL_ADDRESS(velocity, sizeof(velocity));
    sub_80013FB4(velocity_address, TM3_DRAFT_U16(object + 112u),
                TM3_DRAFT_LOCAL_ADDRESS(direction, sizeof(direction)));
    for (uint32 axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U16(object + 16u + 2u * axis) = (uint16)velocity[axis];

    uint32 target = TM3_DRAFT_U32(object + 164u);
    if (target != 0u && sub_800470DC(target) == 0u) target = 0u;
    if (target != 0u) {
        uint32 dx = (uint32)(sint32)TM3_DRAFT_I16(target - 20u) - TM3_DRAFT_U32(object + 136u);
        uint32 dz = (uint32)(sint32)TM3_DRAFT_I16(target - 16u) - TM3_DRAFT_U32(object + 144u);
        uint32 product = dx * (uint32)(sint32)TM3_DRAFT_I16(object + 116u)
                       + dz * (uint32)(sint32)TM3_DRAFT_I16(object + 128u);
        sint32 dot = (sint32)product >> 12;
        uint32 limit = TM3_DRAFT_U16(object + 108u);
        uint32 clamped;
        if (dot >= 0) {
            uint32 difference = limit - (uint32)dot;
            clamped = (uint32)dot + (difference & (uint32)((sint32)difference >> 31));
        } else {
            uint32 magnitude = 0u - (uint32)dot;
            uint32 difference = limit - magnitude;
            clamped = 0u - (magnitude + (difference & (uint32)((sint32)difference >> 31)));
        }
        steering[0] = (sint16)clamped;
        steering[1] = 0;
        steering[2] = 0;
        sub_8005BB84(object + 116u, TM3_DRAFT_LOCAL_ADDRESS(steering, sizeof(steering)),
                    TM3_DRAFT_LOCAL_ADDRESS(correction, sizeof(correction)));
        correction[1] = (sint16)((uint16)correction[1] + TM3_DRAFT_U16(0x80089D08u));
    } else {
        correction[0] = 0;
        correction[1] = (sint16)TM3_DRAFT_U16(0x80089D08u);
        correction[2] = 0;
    }
    for (uint32 axis = 0; axis < 3u; ++axis)
        velocity[axis] = (sint32)direction[axis] + correction[axis];
    sub_8005B254(velocity_address, TM3_DRAFT_LOCAL_ADDRESS(normalized, sizeof(normalized)));
    for (uint32 axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U16(object + 120u + 6u * axis) = (uint16)normalized[axis];
    if (normalized[0] != 0 && normalized[2] != 0) {
        TM3_DRAFT_U16(object + 122u) = 0;
        TM3_DRAFT_U16(object + 116u) = (uint16)normalized[2];
        TM3_DRAFT_U16(object + 128u) = (uint16)(0u - (uint32)normalized[0]);
    }
    sub_800150FC(object + 116u, 2u, 0u);
    if (TM3_DRAFT_U8(object + 321u) != 0u) sub_8002DF70(object);
    result = TM3_DRAFT_U32(object + 148u) + 1u;
    uint32 maximum = TM3_DRAFT_U32(object + 152u);
    TM3_DRAFT_U32(object + 148u) = result;
    if (maximum < result) {
        TM3_DRAFT_U32(object + 68u) = 0u;
        return sub_8002DEA4(object);
    }
    return result;
}

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
  if ( TM3_DRAFT_I32(0x800d340cu) > 0 )
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
        if ( v11 >= TM3_DRAFT_I32(a1 + 112) )
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
    while ( v6 < TM3_DRAFT_I32(0x800d340cu) );
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
  result = (sint32)(TM3_DRAFT_U32(a1 + 108) + 1u);
  v4 = TM3_DRAFT_I32(a1 + 104) >= result;
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
