#include "game_draft_support.h"
#include "game_draft_signatures.h"

/* Unverified draft; TODO items require later review */
uint32 sub_80019E68(uint32 a1, uint32 a2)
{
    uint32 original_local_words[8];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80019E68u, "SCUS_942.49");
  int v3; 
  int v4; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  uint32 v11; 
  sint32 v12; 
  int v13; 
  uint32 v14; 
  uint32 v15; 
  sint32 v16; 
  uint32 v17; 
  int v18; 
  int v19; 
  uint32 v20; 
  sint32 v21; 
  int vars0; 
  int vars4; 
  int vars8; 
  int varsC; 
  int vars10; 

  v3 = TM3_DRAFT_U32(a1 + 3400);
  v4 = TM3_DRAFT_I16(v3 + 8);
  if ( v4 < 0 )
    v6 = v3;
  else
    v6 = TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 3396) + 36) + 28 * v4;
  v7 = 9999999;
  v8 = -1;
  if ( TM3_DRAFT_U8(v6 + 1) < 2u )
  {
    v14 = TM3_DRAFT_U32(v6 + 24);
    v13 = -65536;
    if ( !v14 )
      goto LABEL_14;
    v8 = TM3_DRAFT_U16(v14);
LABEL_13:
    v13 = v8 << 16;
    goto LABEL_14;
  }
  v9 = 0;
  if ( !TM3_DRAFT_U8(v6 + 1) )
    goto LABEL_13;
  v10 = 0;
  do
  {
    v11 = (uint32)(28 * TM3_DRAFT_U16(v10 + TM3_DRAFT_U32(v6 + 24)) + TM3_DRAFT_U32(0x80089F00u));
    v12 = sub_80015724(TM3_DRAFT_U16(v11) - TM3_DRAFT_I16(a1 + 3348), TM3_DRAFT_U16(v11 + 2u * (1)) - TM3_DRAFT_I16(a1 + 3350));
    if ( v12 < v7 )
    {
      v7 = v12;
      v8 = TM3_DRAFT_U16(v10 + TM3_DRAFT_U32(v6 + 24));
    }
    ++v9;
    v10 = 2 * v9;
  }
  while ( v9 < TM3_DRAFT_U8(v6 + 1) );
  v13 = v8 << 16;
LABEL_14:
  if ( v13 >> 16 < 0 )
    goto LABEL_22;
  v15 = (uint32)(28 * (v13 >> 16) + TM3_DRAFT_U32(0x80089F00u));
  LOWORD(TM3_DRAFT_I32(original_local_address + 24u)) = TM3_DRAFT_U16(v15) - TM3_DRAFT_U16(a1 + 3348);
  HIWORD(TM3_DRAFT_I32(original_local_address + 24u)) = TM3_DRAFT_U16(v15 + 2u * (1)) - TM3_DRAFT_U16(a1 + 3350);
  v16 = sub_8005B124((sint16)TM3_DRAFT_I32(original_local_address + 24u) * (sint16)TM3_DRAFT_I32(original_local_address + 24u) + SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) * SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)));
  if ( v16 )
  {
    TM3_DRAFT_U16(a1 + 3380) = ((sint16)TM3_DRAFT_I32(original_local_address + 24u) << 12) / v16;
    TM3_DRAFT_U16(a1 + 3382) = (SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) << 12) / v16;
  }
  else
  {
    TM3_DRAFT_U16(a1 + 3380) = 0;
    TM3_DRAFT_U16(a1 + 3382) = 0;
  }
  TM3_DRAFT_U16(a1 + 3384) = v16;
  if ( (sint16)v16 >= 8193
    || (v17 = sub_800163A0(
                TM3_DRAFT_U32(a1 + 3396),
                TM3_DRAFT_U32(a1 + 3400),
                a1 + 3348,
                (uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */,
                0) == 0,
        v18 = v8 << 16,
        !v17) )
  {
    v8 = -1;
    v18 = -65536;
  }
  v17 = v18 >= 0;
  v19 = v8 << 16;
  if ( !v17 )
  {
LABEL_22:
    if ( (a2 & 0x8000u) != 0 )
    {
LABEL_29:
      v19 = v8 << 16;
      return v19 >> 16;
    }
    v20 = (uint32)(28 * (sint16)a2 + TM3_DRAFT_U32(0x80089F00u));
    LOWORD(TM3_DRAFT_I32(original_local_address + 24u)) = TM3_DRAFT_U16(v20) - TM3_DRAFT_U16(a1 + 3348);
    HIWORD(TM3_DRAFT_I32(original_local_address + 24u)) = TM3_DRAFT_U16(v20 + 2u * (1)) - TM3_DRAFT_U16(a1 + 3350);
    v21 = sub_8005B124((sint16)TM3_DRAFT_I32(original_local_address + 24u) * (sint16)TM3_DRAFT_I32(original_local_address + 24u) + SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) * SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)));
    if ( v21 )
    {
      TM3_DRAFT_U16(a1 + 3380) = ((sint16)TM3_DRAFT_I32(original_local_address + 24u) << 12) / v21;
      TM3_DRAFT_U16(a1 + 3382) = (SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) << 12) / v21;
    }
    else
    {
      TM3_DRAFT_U16(a1 + 3380) = 0;
      TM3_DRAFT_U16(a1 + 3382) = 0;
    }
    TM3_DRAFT_U16(a1 + 3384) = v21;
    if ( (sint16)v21 >= 8193
      || (v17 = sub_800163A0(
                  TM3_DRAFT_U32(a1 + 3396),
                  TM3_DRAFT_U32(a1 + 3400),
                  a1 + 3348,
                  (uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */,
                  0) == 0,
          v19 = a2 << 16,
          !v17) )
    {
      v8 = -1;
      goto LABEL_29;
    }
  }
  return v19 >> 16;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001FA88(uint32 a1)
{
    uint32 original_local_words[23];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8001FA88u, "SCUS_942.49");
  sint32 result; 
  uint32 v2; 
  int v3; 
  uint32 v4; 
  uint32 v5; 
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
  sint16 v18; 
  sint16 v19; 
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
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 

  result = (uint32)(a1 + 2492) < TM3_DRAFT_U32(a1 + 3164);
  v2 = (uint32)(a1 + 2492) >= TM3_DRAFT_U32(a1 + 3164);
  TM3_DRAFT_I32(original_local_address + 88u) = a1 + 2492;
  if ( !v2 )
  {
    v3 = a1 + 2500;
    v4 = (uint32)(a1 + 2508);
    do
    {
      v5 = TM3_DRAFT_U32(v3 - 4);
      v6 = TM3_DRAFT_U32(TM3_DRAFT_I32(original_local_address + 88u));
      v7 = TM3_DRAFT_U32(v5 + 4u * (6));
      v8 = TM3_DRAFT_U32(v5 + 4u * (7));
      v9 = TM3_DRAFT_U32(TM3_DRAFT_U32(TM3_DRAFT_I32(original_local_address + 88u)) + 24);
      v10 = TM3_DRAFT_U32(TM3_DRAFT_U32(TM3_DRAFT_I32(original_local_address + 88u)) + 28);
      (*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4])))[0] = TM3_DRAFT_U32(v5 + 4u * (5)) - TM3_DRAFT_U32(TM3_DRAFT_U32(TM3_DRAFT_I32(original_local_address + 88u)) + 20);
      (*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4])))[1] = v7 - v9;
      (*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4])))[2] = v8 - v10;
      v11 = TM3_DRAFT_U32(v5 + 4u * (9));
      v12 = TM3_DRAFT_U32(v5 + 4u * (10));
      v13 = TM3_DRAFT_U32(v6 + 4u * (9));
      v14 = TM3_DRAFT_U32(v6 + 4u * (10));
      (*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[0] = TM3_DRAFT_U32(v5 + 4u * (8)) - TM3_DRAFT_U32(v6 + 4u * (8));
      (*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[1] = v11 - v13;
      (*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[2] = v12 - v14;
      if ( TM3_DRAFT_U8(v3 + 4) )
      {
        sub_800146A4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))))), v4);
        v18 = TM3_DRAFT_U16(a1 + 1544);
        v19 = TM3_DRAFT_U16(a1 + 1550);
        (*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4])))[0] = TM3_DRAFT_U16(a1 + 1538);
        (*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4])))[1] = v18;
        (*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4])))[2] = v19;
        v21 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4])))))) - TM3_DRAFT_U32(v3);
        v20 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))));
        v22 = sub_80015684(1024, v20, 12);
        sub_80014B6C(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), -(8 * v21 + v22), 12);
        sub_800155A4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 72u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 72u, sizeof(int[4]))))));
        sub_800155A4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))));
        v23 = sub_800146A4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 72u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 72u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))));
        sub_800148DC(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), -8 * v23, 12);
        v24 = sub_800146A4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))));
        v25 = sub_80015684(512, v24, 12);
        sub_800148DC(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), -v25, 12);
      }
      else
      {
        v16 = sub_800146A4( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))))), v4) - TM3_DRAFT_U32(v3);
        v15 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))), v4);
        v17 = sub_80015684(512, v15, 12);
        sub_80014B6C(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */, v4, -(8 * v16 + v17), 12);
      }
      v26 = TM3_DRAFT_U32(v6 + 4u * (12));
      v27 = TM3_DRAFT_I32(original_local_address + 36u);
      v28 = TM3_DRAFT_U32(v6 + 4u * (13)) - TM3_DRAFT_I32(original_local_address + 40u);
      TM3_DRAFT_U32(v6 + 4u * (11)) -= TM3_DRAFT_I32(original_local_address + 32u);
      TM3_DRAFT_U32(v6 + 4u * (13)) = v28;
      TM3_DRAFT_U32(v6 + 4u * (12)) = v26 - v27;
      v29 = TM3_DRAFT_U32(v6 + 4u * (15));
      v30 = TM3_DRAFT_I32(original_local_address + 36u);
      v31 = TM3_DRAFT_U32(v6 + 4u * (16)) - TM3_DRAFT_I32(original_local_address + 40u);
      TM3_DRAFT_U32(v6 + 4u * (14)) -= TM3_DRAFT_I32(original_local_address + 32u);
      TM3_DRAFT_U32(v6 + 4u * (16)) = v31;
      TM3_DRAFT_U32(v6 + 4u * (15)) = v29 - v30;
      v32 = TM3_DRAFT_U32(v5 + 4u * (12));
      v33 = TM3_DRAFT_I32(original_local_address + 36u);
      v34 = TM3_DRAFT_U32(v5 + 4u * (13)) + TM3_DRAFT_I32(original_local_address + 40u);
      TM3_DRAFT_U32(v5 + 4u * (11)) += TM3_DRAFT_I32(original_local_address + 32u);
      TM3_DRAFT_U32(v5 + 4u * (13)) = v34;
      TM3_DRAFT_U32(v5 + 4u * (12)) = v32 + v33;
      v35 = TM3_DRAFT_U32(v5 + 4u * (15));
      v36 = TM3_DRAFT_I32(original_local_address + 36u);
      v37 = TM3_DRAFT_U32(v5 + 4u * (16)) + TM3_DRAFT_I32(original_local_address + 40u);
      TM3_DRAFT_U32(v5 + 4u * (14)) += TM3_DRAFT_I32(original_local_address + 32u);
      TM3_DRAFT_U32(v5 + 4u * (16)) = v37;
      TM3_DRAFT_U32(v5 + 4u * (15)) = v35 + v36;
      v3 += 24;
      v4 += 2u * (12);
      result = (uint32)(TM3_DRAFT_I32(original_local_address + 88u) + 24) < TM3_DRAFT_U32(a1 + 3164);
      v2 = (uint32)(TM3_DRAFT_I32(original_local_address + 88u) + 24) < TM3_DRAFT_U32(a1 + 3164);
      TM3_DRAFT_I32(original_local_address + 88u) += 24;
    }
    while ( v2 );
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80026F98(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80026F98u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1 = a2;
    uint32 arg2 = a3;
    uint32 arg3 = a4;
    uint32 t0; /* TODO: Review undefined incoming or temporary value */
    uint32 t1; /* TODO: Review undefined incoming or temporary value */
    uint32 t2; /* TODO: Review undefined incoming or temporary value */
    uint32 t3; /* TODO: Review undefined incoming or temporary value */
    uint32 t4; /* TODO: Review undefined incoming or temporary value */
    uint32 t5; /* TODO: Review undefined incoming or temporary value */
    uint32 t7; /* TODO: Review undefined incoming or temporary value */
    uint32 s0; /* TODO: Review undefined incoming or temporary value */
    uint32 s1; /* TODO: Review undefined incoming or temporary value */
    uint32 s2; /* TODO: Review undefined incoming or temporary value */
    uint32 s3; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[152]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_80026F98:;
    L_80026F9C:;
    L_80026FA0:;
    s0 = arg0 + 0u;
    L_80026FA4:;
    L_80026FA8:;
    s3 = arg1 + 0u;
    L_80026FAC:;
    t4 = arg2 + 0u;
    L_80026FB0:;
    L_80026FB4:;
    L_80026FB8:;
    L_80026FBC:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(88));
    L_80026FC0:;
    L_80026FC4:;
    {
        uint32 branch = v0 == 0u;
        t5 = arg3 + 0u;
        if (branch) goto L_800270C4;
    }
    L_80026FCC:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(80));
    L_80026FD0:;
    L_80026FD4:;
    {
        uint32 branch = v0 == 0u;
        arg0 = s0 + (uint32)(92);
        if (branch) goto L_800270F4;
    }
    L_80026FDC:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(92));
    L_80026FE0:;
    v1 = TM3_DRAFT_I16(s0 + (uint32)(0));
    L_80026FE4:;
    L_80026FE8:;
    v0 = v0 - v1;
    L_80026FEC:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_80026FF0:;
    arg2 = TM3_DRAFT_U32(arg0 + (uint32)(4));
    L_80026FF4:;
    arg1 = TM3_DRAFT_I16(s0 + (uint32)(4));
    L_80026FF8:;
    v1 = TM3_DRAFT_U32(arg0 + (uint32)(8));
    L_80026FFC:;
    arg0 = TM3_DRAFT_I16(s0 + (uint32)(2));
    L_80027000:;
    arg3 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 48, sizeof(local_bytes) - 48u) /* TODO: Local buffer adapter */;
    L_80027004:;
    TM3_DRAFT_U32(listing_local_address + 48u) = (uint32)v0;
    L_80027008:;
    arg2 = arg2 - arg0;
    L_8002700C:;
    v1 = v1 - arg1;
    L_80027010:;
    TM3_DRAFT_U32(arg3 + (uint32)(4)) = (uint32)arg2;
    L_80027014:;
    TM3_DRAFT_U32(arg3 + (uint32)(8)) = (uint32)v1;
    L_80027018:;
    t3 = lo;
    L_8002701C:;
    v0 = TM3_DRAFT_U32(listing_local_address + 52u);
    L_80027020:;
    L_80027024:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_80027028:;
    t2 = lo;
    L_8002702C:;
    v0 = TM3_DRAFT_U32(listing_local_address + 56u);
    L_80027030:;
    L_80027034:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_80027038:;
    arg0 = TM3_DRAFT_U32(s0 + (uint32)(48));
    L_8002703C:;
    v0 = TM3_DRAFT_I16(s0 + (uint32)(0));
    L_80027040:;
    t1 = lo;
    L_80027044:;
    arg0 = arg0 - v0;
    L_80027048:;
    L_8002704C:;
    {
        uint64 product = (uint64)((int64_t)(sint32)arg0 * (int64_t)(sint32)arg0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_80027050:;
    v1 = s0 + (uint32)(48);
    L_80027054:;
    arg1 = TM3_DRAFT_I16(s0 + (uint32)(2));
    L_80027058:;
    arg2 = TM3_DRAFT_I16(s0 + (uint32)(4));
    L_8002705C:;
    v0 = TM3_DRAFT_U32(v1 + (uint32)(4));
    L_80027060:;
    v1 = TM3_DRAFT_U32(v1 + (uint32)(8));
    L_80027064:;
    TM3_DRAFT_U32(listing_local_address + 48u) = (uint32)arg0;
    L_80027068:;
    v0 = v0 - arg1;
    L_8002706C:;
    v1 = v1 - arg2;
    L_80027070:;
    TM3_DRAFT_U32(arg3 + (uint32)(4)) = (uint32)v0;
    L_80027074:;
    TM3_DRAFT_U32(arg3 + (uint32)(8)) = (uint32)v1;
    L_80027078:;
    t0 = lo;
    L_8002707C:;
    v0 = TM3_DRAFT_U32(listing_local_address + 52u);
    L_80027080:;
    L_80027084:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_80027088:;
    arg0 = lo;
    L_8002708C:;
    v0 = TM3_DRAFT_U32(listing_local_address + 56u);
    L_80027090:;
    L_80027094:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_80027098:;
    v1 = t3 + t2;
    L_8002709C:;
    v1 = v1 + t1;
    L_800270A0:;
    v0 = t0 + arg0;
    L_800270A4:;
    t7 = lo;
    L_800270A8:;
    v0 = v0 + t7;
    L_800270AC:;
    v1 = (sint32)v1 < (sint32)v0;
    L_800270B0:;
    {
        uint32 branch = v1 != 0u;
        if (branch) goto L_800270C0;
    }
    L_800270B8:;
    TM3_DRAFT_U32(s0 + (uint32)(88)) = (uint32)0u;
    goto L_800270C4;
    L_800270C0:;
    TM3_DRAFT_U32(s0 + (uint32)(80)) = (uint32)0u;
    L_800270C4:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(80));
    L_800270C8:;
    L_800270CC:;
    {
        uint32 branch = v0 == 0u;
        v0 = 0u + (uint32)(-1);
        if (branch) goto L_800270F4;
    }
    L_800270D4:;
    arg1 = TM3_DRAFT_U32(s0 + (uint32)(72));
    L_800270D8:;
    L_800270DC:;
    {
        uint32 branch = arg1 == v0;
        arg0 = t4 + 0u;
        if (branch) goto L_80027168;
    }
    L_800270E4:;
    arg2 = s0 + (uint32)(8);
    v0 = tm3_draft_indirect(0x80012c20u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_800270EC:;
    v0 = 0u + 0u;
    goto L_800272CC;
    L_800270F4:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(88));
    L_800270F8:;
    L_800270FC:;
    {
        uint32 branch = v0 == 0u;
        s1 = s0 + (uint32)(8);
        if (branch) goto L_80027170;
    }
    L_80027104:;
    arg3 = s0 + (uint32)(92);
    L_80027108:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(92));
    L_8002710C:;
    v1 = TM3_DRAFT_U32(arg3 + (uint32)(4));
    L_80027110:;
    arg0 = TM3_DRAFT_U32(arg3 + (uint32)(8));
    L_80027114:;
    TM3_DRAFT_U16(s0 + (uint32)(8)) = (uint16)v0;
    L_80027118:;
    v0 = s0 + (uint32)(8);
    L_8002711C:;
    TM3_DRAFT_U16(v0 + (uint32)(2)) = (uint16)v1;
    L_80027120:;
    TM3_DRAFT_U16(v0 + (uint32)(4)) = (uint16)arg0;
    L_80027124:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(88));
    L_80027128:;
    TM3_DRAFT_U32(s0 + (uint32)(68)) = (uint32)0u;
    L_8002712C:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(-48));
    L_80027130:;
    L_80027134:;
    {
        uint32 branch = v0 != 0u;
        v0 = 0x80090000u;
        if (branch) goto L_80027168;
    }
    L_8002713C:;
    v0 = v0 + (uint32)(-32564);
    L_80027140:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_80027144:;
    v0 = s0 + (uint32)(28);
    L_80027148:;
    TM3_DRAFT_U32(listing_local_address + 20u) = (uint32)v0;
    L_8002714C:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(44));
    L_80027150:;
    L_80027154:;
    TM3_DRAFT_U32(listing_local_address + 24u) = (uint32)v0;
    L_80027158:;
    arg0 = TM3_DRAFT_U32(s0 + (uint32)(88));
    L_8002715C:;
    arg1 = TM3_DRAFT_U32(s0 + (uint32)(24));
    L_80027160:;
    arg2 = t5 + 0u;
    v0 = sub_800239C0(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 20u) /* TODO: Caller stack argument */);
    L_80027168:;
    v0 = 0u + 0u;
    goto L_800272CC;
    L_80027170:;
    arg0 = s1 + 0u;
    L_80027174:;
    arg1 = 0u + (uint32)(136);
    L_80027178:;
    arg2 = s0 + (uint32)(16);
    L_8002717C:;
    v0 = TM3_DRAFT_I16(s0 + (uint32)(8));
    L_80027180:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(2));
    L_80027184:;
    t0 = TM3_DRAFT_I16(s1 + (uint32)(4));
    L_80027188:;
    arg3 = s1 + 0u;
    L_8002718C:;
    TM3_DRAFT_U16(s0 + (uint32)(0)) = (uint16)v0;
    L_80027190:;
    TM3_DRAFT_U16(s0 + (uint32)(2)) = (uint16)v1;
    L_80027194:;
    TM3_DRAFT_U16(s0 + (uint32)(4)) = (uint16)t0;
    v0 = sub_800140C8(arg0, arg1, arg2, arg3);
    L_8002719C:;
    arg0 = s0 + 0u;
    L_800271A0:;
    arg1 = s1 + 0u;
    L_800271A4:;
    arg2 = 0u + 0u;
    L_800271A8:;
    s2 = s0 + (uint32)(48);
    L_800271AC:;
    arg3 = s2 + 0u;
    v0 = sub_80013484(arg0, arg1, arg2, arg3);
    L_800271B4:;
    v1 = v0 + 0u;
    L_800271B8:;
    v0 = 0u + (uint32)(1);
    L_800271BC:;
    {
        uint32 branch = v1 != v0;
        arg0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 32, sizeof(local_bytes) - 32u) /* TODO: Local buffer adapter */;
        if (branch) goto L_80027228;
    }
    L_800271C4:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(84));
    L_800271C8:;
    L_800271CC:;
    {
        uint32 branch = v0 == 0u;
        v0 = s0 + (uint32)(8);
        if (branch) goto L_8002722C;
    }
    L_800271D4:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(48));
    L_800271D8:;
    TM3_DRAFT_U32(s0 + (uint32)(80)) = (uint32)v1;
    L_800271DC:;
    v1 = TM3_DRAFT_U32(s0 + (uint32)(52));
    L_800271E0:;
    v0 = v0 + (uint32)(2048);
    L_800271E4:;
    v0 = (uint32)((sint32)v0 >> 12u);
    L_800271E8:;
    v1 = v1 + (uint32)(2048);
    L_800271EC:;
    TM3_DRAFT_U16(s0 + (uint32)(8)) = (uint16)v0;
    L_800271F0:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(56));
    L_800271F4:;
    v1 = (uint32)((sint32)v1 >> 12u);
    L_800271F8:;
    TM3_DRAFT_U16(s1 + (uint32)(2)) = (uint16)v1;
    L_800271FC:;
    arg0 = TM3_DRAFT_I16(s1 + (uint32)(2));
    L_80027200:;
    v0 = v0 + (uint32)(2048);
    L_80027204:;
    v0 = (uint32)((sint32)v0 >> 12u);
    L_80027208:;
    TM3_DRAFT_U16(s1 + (uint32)(4)) = (uint16)v0;
    L_8002720C:;
    v0 = v0 << 16u;
    L_80027210:;
    v1 = TM3_DRAFT_I16(s0 + (uint32)(8));
    L_80027214:;
    v0 = (uint32)((sint32)v0 >> 16u);
    L_80027218:;
    TM3_DRAFT_U32(s0 + (uint32)(48)) = (uint32)v1;
    L_8002721C:;
    TM3_DRAFT_U32(s2 + (uint32)(4)) = (uint32)arg0;
    L_80027220:;
    TM3_DRAFT_U32(s2 + (uint32)(8)) = (uint32)v0;
    L_80027224:;
    arg0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 32, sizeof(local_bytes) - 32u) /* TODO: Local buffer adapter */;
    L_80027228:;
    v0 = s0 + (uint32)(8);
    L_8002722C:;
    arg3 = TM3_DRAFT_I16(s0 + (uint32)(8));
    L_80027230:;
    arg2 = TM3_DRAFT_I16(v0 + (uint32)(2));
    L_80027234:;
    v1 = TM3_DRAFT_I16(s0 + (uint32)(0));
    L_80027238:;
    v0 = TM3_DRAFT_I16(v0 + (uint32)(4));
    L_8002723C:;
    arg1 = TM3_DRAFT_I16(s0 + (uint32)(4));
    L_80027240:;
    arg3 = arg3 - v1;
    L_80027244:;
    v1 = TM3_DRAFT_I16(s0 + (uint32)(2));
    L_80027248:;
    v0 = v0 - arg1;
    L_8002724C:;
    TM3_DRAFT_U32(listing_local_address + 32u) = (uint32)arg3;
    L_80027250:;
    TM3_DRAFT_U32(arg0 + (uint32)(8)) = (uint32)v0;
    L_80027254:;
    arg2 = arg2 - v1;
    L_80027258:;
    TM3_DRAFT_U32(arg0 + (uint32)(4)) = (uint32)arg2;
    v0 = sub_80013D64(arg0);
    L_80027260:;
    v1 = v0 >> 31u;
    L_80027264:;
    v1 = v1 + v0;
    L_80027268:;
    v1 = (uint32)((sint32)v1 >> 1u);
    L_8002726C:;
    v0 = 0u + (uint32)(1);
    L_80027270:;
    arg3 = s3 + (uint32)(-20);
    L_80027274:;
    TM3_DRAFT_U32(s3 + (uint32)(-24)) = (uint32)v1;
    L_80027278:;
    v1 = TM3_DRAFT_I16(s0 + (uint32)(0));
    L_8002727C:;
    arg0 = TM3_DRAFT_I16(s0 + (uint32)(8));
    L_80027280:;
    arg2 = TM3_DRAFT_I16(s0 + (uint32)(10));
    L_80027284:;
    arg1 = TM3_DRAFT_I16(s0 + (uint32)(4));
    L_80027288:;
    t0 = TM3_DRAFT_I16(s0 + (uint32)(12));
    L_8002728C:;
    v1 = v1 + arg0;
    L_80027290:;
    arg0 = v1 >> 31u;
    L_80027294:;
    v1 = v1 + arg0;
    L_80027298:;
    v1 = (uint32)((sint32)v1 >> (v0 & 31u));
    L_8002729C:;
    arg0 = TM3_DRAFT_I16(s0 + (uint32)(2));
    L_800272A0:;
    arg1 = arg1 + t0;
    L_800272A4:;
    TM3_DRAFT_U16(s3 + (uint32)(-20)) = (uint16)v1;
    L_800272A8:;
    arg0 = arg0 + arg2;
    L_800272AC:;
    v1 = arg0 >> 31u;
    L_800272B0:;
    arg0 = arg0 + v1;
    L_800272B4:;
    arg0 = (uint32)((sint32)arg0 >> (v0 & 31u));
    L_800272B8:;
    v1 = arg1 >> 31u;
    L_800272BC:;
    arg1 = arg1 + v1;
    L_800272C0:;
    arg1 = (uint32)((sint32)arg1 >> (v0 & 31u));
    L_800272C4:;
    TM3_DRAFT_U16(arg3 + (uint32)(2)) = (uint16)arg0;
    L_800272C8:;
    TM3_DRAFT_U16(arg3 + (uint32)(4)) = (uint16)arg1;
    L_800272CC:;
    L_800272D0:;
    L_800272D4:;
    L_800272D8:;
    L_800272DC:;
    L_800272E0:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800447D4(void)
{
    FUNCTION_MARKER(0x800447D4u, "SCUS_942.49");
  int v0; 
  int i; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  sint32 v7; 
  int v8; 
  int v9; 
  uint32 v10; 
  uint32 v11; 
  sint32 v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int result; 

  v0 = -2146619768;
  if ( TM3_DRAFT_U32(0x800D2F4Cu) )
  {
    for ( i = 0; i < TM3_DRAFT_U32(0x800D2E90u); v0 += 144 )
    {
      TM3_DRAFT_U32(v0 + 388) = 2;
      TM3_DRAFT_U32(v0 + 400) = 0;
      ++i;
    }
    v2 = TM3_DRAFT_U32(0x800D2E90u);
    if ( TM3_DRAFT_U32(0x800D2E90u) < TM3_DRAFT_U32(0x800D2E90u) + TM3_DRAFT_U32(0x800D2F38u) )
    {
      v3 = 144 * TM3_DRAFT_U32(0x800D2E90u) - 2146619768;
      do
      {
        TM3_DRAFT_U32(v3 + 388) = 2;
        TM3_DRAFT_U32(v3 + 400) = 1;
        ++v2;
        v3 += 144;
      }
      while ( v2 < TM3_DRAFT_U32(0x800D2E90u) + TM3_DRAFT_U32(0x800D2F38u) );
    }
    if ( TM3_DRAFT_U32(0x800D2F3Cu) )
    {
      TM3_DRAFT_U32(0x800D2F3Cu) = 0;
      TM3_DRAFT_U32(0x800D296Cu) = 0;
    }
    else
    {
      TM3_DRAFT_U32(0x800D2E9Cu) = 0;
    }
    TM3_DRAFT_U32(0x800D2F5Cu) = -1;
  }
  else
  {
    ++TM3_DRAFT_U32(0x800D2E9Cu);
  }
  if ( SHIBYTE(TM3_DRAFT_U32(0x8007EA18u + 4u * (2 * TM3_DRAFT_U32(0x800D2E9Cu)))) == -1 )
    v5 = 8;
  else
    v5 = 7;
  v6 = 0;
  v4 = TM3_DRAFT_U8((0x8007EA18u + 4u * (2 * TM3_DRAFT_U32(0x800D2E9Cu))) + TM3_DRAFT_U32(0x800D2F10u));
  TM3_DRAFT_U32(0x800D2E94u) = ((v4 - (v5 - (TM3_DRAFT_U32(0x800D2E90u) + TM3_DRAFT_U32(0x800D2F38u)))) & ((v4
                                                                                  - (v5
                                                                                   - (TM3_DRAFT_U32(0x800D2E90u)
                                                                                    + TM3_DRAFT_U32(0x800D2F38u)))) >> 31))
                     + v5
                     - (TM3_DRAFT_U32(0x800D2E90u)
                      + TM3_DRAFT_U32(0x800D2F38u));
  TM3_DRAFT_U32(0x800D2E98u) = TM3_DRAFT_U32(0x800D2E90u) + TM3_DRAFT_U32(0x800D2F38u) + TM3_DRAFT_U32(0x800D2E94u);
  if ( TM3_DRAFT_U32(0x800D2E94u) > 0 )
  {
    while ( 1 )
    {
      v7 = sub_80039FD4();
      v8 = v7 >> 4;
      if ( v7 < 0 )
        v8 = (v7 + 15) >> 4;
      v9 = v7 - 16 * v8;
      v10 = 0;
      v11 = TM3_DRAFT_U32(0x8007EA18u);
      while ( 1 )
      {
        v12 = v10 < 8;
        if ( v9 == TM3_DRAFT_I8(v11 + 12) )
          break;
        ++v10;
        v11 += 4u * (2);
        if ( v10 >= 8 )
        {
          v12 = v10 < 8;
          break;
        }
      }
      v13 = 0;
      if ( !v12 )
      {
        v14 = 0;
        if ( TM3_DRAFT_U32(0x800D2E90u) + TM3_DRAFT_U32(0x800D2F38u) + v6 > 0 )
        {
          v15 = -2146619768;
          do
          {
            if ( v9 == TM3_DRAFT_U32(v15 + 24) )
              v14 = 1;
            ++v13;
            v15 += 4;
          }
          while ( v13 < TM3_DRAFT_U32(0x800D2E90u) + TM3_DRAFT_U32(0x800D2F38u) + v6 );
        }
        if ( !v14 )
        {
          TM3_DRAFT_U32(4 * (TM3_DRAFT_U32(0x800D2E90u) + TM3_DRAFT_U32(0x800D2F38u) + v6++) - 2146619768 + 24) = v9;
          if ( v6 >= TM3_DRAFT_U32(0x800D2E94u) )
            break;
        }
      }
    }
  }
  if ( TM3_DRAFT_U32(0x800D2E98u) < 16 )
  {
    v16 = SHIBYTE(TM3_DRAFT_U32(0x8007EA18u + 4u * (2 * TM3_DRAFT_U32(0x800D2E9Cu))));
    if ( v16 == -1 )
      v16 = 16;
    TM3_DRAFT_U32(4 * TM3_DRAFT_U32(0x800D2E98u) - 2146619768 + 24) = v16;
  }
  result = -2146619768;
  TM3_DRAFT_U32(0x800D2F50u) = 0;
  TM3_DRAFT_U32(0x800D2F4Cu) = 0;
  TM3_DRAFT_U32(0x800D2F54u) = 0;
  TM3_DRAFT_U32(0x800D2F58u) = 0;
  TM3_DRAFT_U32(0x800D2F40u) = 0;
  TM3_DRAFT_U32(0x800D2F44u) = 0;
  TM3_DRAFT_U32(0x800D2F48u) = 0;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003CD8C(uint32 a1)
{
    uint32 original_local_words[30];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8003CD8Cu, "SCUS_942.49");
  uint32 v2; 
  uint16 v3; 
  int v4; 
  int v5; 
  int v6; 
  sint16 v7; 
  sint16 v8; 
  int v9; 
  int v10; 
  uint32 v11; 
  sint32 result; 

  v2 = TM3_DRAFT_U32(r_u32(0x8007e894u + 4u * (r_u32(0x800d2e88u) - 1u))) + 4u * (18u * TM3_DRAFT_U32(4u * (r_u32(0x800d2e88u) - 1u) + 0x800d2e88u + 116u) + 1u);
  sub_8005BE34(TM3_DRAFT_U16(v2));
  v3 = TM3_DRAFT_U16(v2 + 16);
  TM3_DRAFT_U16(0x80089E02u) = TM3_DRAFT_U16(v2 + 24);
  TM3_DRAFT_U16(0x80089E00u) = v3;
  if ( TM3_DRAFT_U32(0x800D2F20u) == 2 )
    v4 = (uint16)TM3_DRAFT_U16(0x80089E02u) >> 1;
  else
    v4 = 4 * (uint16)TM3_DRAFT_U16(0x80089E02u) / 5;
  v5 = 0;
  sub_8005BE14(v3 >> 1, v4);
  v6 = a1;
  do
  {
    v7 = 320;
    if ( !v5 )
      v7 = 0;
    TM3_DRAFT_U32(v6) = v5;
    sub_800572E4((int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */, v7, 0, 320, 240);
    sub_80057398(v6 + 4, 320 - v7, 0, 320, 240);
    TM3_DRAFT_U16(v6 + 12) = TM3_DRAFT_U16(0x800D2EE0u);
    v8 = TM3_DRAFT_U16(0x800D2EE4u);
    TM3_DRAFT_U16(v6 + 16) = 256;
    TM3_DRAFT_U16(v6 + 18) = 256;
    TM3_DRAFT_U16(v6 + 14) = v8;
    TM3_DRAFT_I8(original_local_address + 48u) = 0;
    TM3_DRAFT_I8(original_local_address + 47u) = 0;
    TM3_DRAFT_I16(original_local_address + 36u) = 0;
    TM3_DRAFT_I16(original_local_address + 38u) = 0;
    TM3_DRAFT_I16(original_local_address + 40u) = 0;
    TM3_DRAFT_I16(original_local_address + 42u) = 0;
    TM3_DRAFT_I8(original_local_address + 46u) = TM3_DRAFT_U8(0x800D2EF0u);
    sub_80058678(v6 + 24, (uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */);
    v9 = 0;
    if ( TM3_DRAFT_U32(0x800D2E88u) > 0 )
    {
      v10 = 0;
      v11 = v2;
      do
      {
        sub_800572E4(
          (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */,
          TM3_DRAFT_U16(v11 + 32) + v7,
          TM3_DRAFT_U16(v11 + 40),
          TM3_DRAFT_U16(0x80089E00u),
          (uint16)TM3_DRAFT_U16(0x80089E02u));
        TM3_DRAFT_I8(original_local_address + 48u) = 1;
        TM3_DRAFT_I8(original_local_address + 47u) = 0;
        TM3_DRAFT_I16(original_local_address + 36u) = 0;
        TM3_DRAFT_I16(original_local_address + 38u) = 0;
        TM3_DRAFT_I16(original_local_address + 40u) = 0;
        TM3_DRAFT_I16(original_local_address + 42u) = 0;
        TM3_DRAFT_I8(original_local_address + 46u) = TM3_DRAFT_U8(0x800D2EF0u);
        sub_8003E190(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I8(original_local_address + 49u), sizeof(TM3_DRAFT_I8(original_local_address + 49u))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I8(original_local_address + 50u), sizeof(TM3_DRAFT_I8(original_local_address + 50u))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[69])psx_addr(original_local_address + 51u, sizeof(char[69]))), sizeof((*(char (*)[69])psx_addr(original_local_address + 51u, sizeof(char[69]))))));
        sub_80058678(v6 + v10 + 138376, (uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */);
        if ( TM3_DRAFT_U8(v2 + 12) )
        {
          sub_800572E4(
            (int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */,
            TM3_DRAFT_U16(v11 + 80) + v7,
            TM3_DRAFT_U16(v11 + 88),
            TM3_DRAFT_U16(0x80089E00u),
            (uint16)TM3_DRAFT_U16(0x80089E02u));
          TM3_DRAFT_I8(original_local_address + 48u) = 1;
          TM3_DRAFT_I8(original_local_address + 49u) = 0;
          TM3_DRAFT_I8(original_local_address + 50u) = 0;
          (*(char (*)[69])psx_addr(original_local_address + 51u, sizeof(char[69])))[0] = 0;
        }
        else
        {
          TM3_DRAFT_I8(original_local_address + 48u) = 0;
        }
        sub_80058678(v6 + v10 + 138376 + 64, (uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */);
        v10 += 1728;
        ++v9;
        v11 += 4u * (4);
      }
      while ( v9 < TM3_DRAFT_U32(0x800D2E88u) );
    }
    v6 += 145288;
    result = ++v5 < 2;
  }
  while ( v5 < 2 );
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80018054(uint32 a1)
{
    FUNCTION_MARKER(0x80018054u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 s0; /* TODO: Review undefined incoming or temporary value */
    uint32 s1; /* TODO: Review undefined incoming or temporary value */
    uint32 s2; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[176]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_80018054:;
    L_80018058:;
    L_8001805C:;
    s2 = arg0 + 0u;
    L_80018060:;
    L_80018064:;
    L_80018068:;
    L_8001806C:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(4392));
    L_80018070:;
    L_80018074:;
    {
        uint32 branch = (sint32)v0 <= 0;
        v0 = 0u + (uint32)(682);
        if (branch) goto L_8001828C;
    }
    L_8001807C:;
    TM3_DRAFT_U32(s2 + (uint32)(4388)) = (uint32)v0;
    L_80018080:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(4392));
    L_80018084:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_80018088:;
    TM3_DRAFT_U32(s2 + (uint32)(3952)) = (uint32)0u;
    L_8001808C:;
    v0 = v0 + (uint32)(-1);
    L_80018090:;
    {
        uint32 branch = arg0 == 0u;
        TM3_DRAFT_U32(s2 + (uint32)(4392)) = (uint32)v0;
        if (branch) goto L_80018260;
    }
    L_80018098:;
    v0 = sub_800470DC(arg0);
    L_800180A0:;
    {
        uint32 branch = v0 == 0u;
        if (branch) goto L_80018260;
    }
    L_800180A8:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_800180AC:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(1556));
    L_800180B0:;
    arg1 = TM3_DRAFT_U32(s2 + (uint32)(1560));
    L_800180B4:;
    v1 = TM3_DRAFT_U32(v0 + (uint32)(1556));
    L_800180B8:;
    arg2 = TM3_DRAFT_U32(s2 + (uint32)(1564));
    L_800180BC:;
    arg0 = v1 - arg0;
    L_800180C0:;
    v1 = TM3_DRAFT_U32(v0 + (uint32)(1560));
    L_800180C4:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(1564));
    L_800180C8:;
    arg1 = v1 - arg1;
    L_800180CC:;
    arg2 = v0 - arg2;
    v0 = sub_80015764(arg0, arg1, arg2);
    L_800180D4:;
    v0 = (sint32)v0 < 1025;
    L_800180D8:;
    {
        uint32 branch = v0 == 0u;
        arg1 = s2 + 0u;
        if (branch) goto L_80018120;
    }
    L_800180E0:;
    v0 = 0x80080000u;
    L_800180E4:;
    v0 = v0 + (uint32)(32368);
    L_800180E8:;
    v1 = 0x80080000u;
    L_800180EC:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_800180F0:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(3928));
    L_800180F4:;
    v1 = v1 + (uint32)(-372);
    L_800180F8:;
    v0 = v0 << 2u;
    L_800180FC:;
    v0 = v0 + v1;
    L_80018100:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(0));
    L_80018104:;
    arg2 = 0u + (uint32)(15);
    L_80018108:;
    TM3_DRAFT_U32(listing_local_address + 20u) = (uint32)v0;
    L_8001810C:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_80018110:;
    arg3 = 0u + 0u;
    v0 = sub_800239C0(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */, TM3_DRAFT_U32(listing_local_address + 20u) /* TODO: Caller stack argument */);
    L_80018118:;
    {
        uint32 branch = v0 != 0u;
        if (branch) goto L_80018128;
    }
    L_80018120:;
    TM3_DRAFT_U32(s2 + (uint32)(4396)) = (uint32)0u;
    goto L_80018260;
    L_80018128:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(4384));
    L_8001812C:;
    L_80018130:;
    arg0 = v0 << 1u;
    L_80018134:;
    arg0 = arg0 + v0;
    L_80018138:;
    arg0 = arg0 << 11u;
    L_8001813C:;
    arg0 = arg0 + (uint32)(2048);
    L_80018140:;
    arg0 = (uint32)((sint32)arg0 >> 12u);
    v0 = sub_8005AF24(arg0); /* TODO: Missing BIOS or SDK adapter */
    L_80018148:;
    arg0 = s2 + 0u;
    L_8001814C:;
    arg1 = 0u + 0u;
    L_80018150:;
    arg2 = 0u + (uint32)(4);
    L_80018154:;
    v1 = v0 << 1u;
    L_80018158:;
    v1 = v1 + v0;
    L_8001815C:;
    v0 = v1 << (arg2 & 31u);
    L_80018160:;
    v1 = v1 + v0;
    L_80018164:;
    v1 = v1 << 2u;
    L_80018168:;
    v1 = v1 + (uint32)(2048);
    L_8001816C:;
    arg3 = TM3_DRAFT_U32(s2 + (uint32)(4388));
    L_80018170:;
    v1 = (uint32)((sint32)v1 >> 12u);
    L_80018174:;
    arg3 = arg3 + (uint32)(-204);
    L_80018178:;
    arg3 = arg3 + v1;
    L_8001817C:;
    TM3_DRAFT_U32(s2 + (uint32)(4388)) = (uint32)arg3;
    v0 = sub_80025F98(arg0, arg1, arg2);
    L_80018184:;
    s0 = s2 + (uint32)(1536);
    L_80018188:;
    arg0 = s0 + 0u;
    L_8001818C:;
    s1 = v0 + 0u;
    v0 = tm3_draft_indirect(0x8005bd24u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_80018194:;
    arg0 = s0 + 0u;
    v0 = tm3_draft_indirect(0x8005bdb4u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_8001819C:;
    arg0 = s1 + (uint32)(16);
    L_800181A0:;
    arg1 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 24, sizeof(local_bytes) - 24u) /* TODO: Local buffer adapter */;
    L_800181A4:;
    arg2 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 88, sizeof(local_bytes) - 88u) /* TODO: Local buffer adapter */;
    v0 = tm3_draft_indirect(0x8005c3c4u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_800181AC:;
    arg0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 24, sizeof(local_bytes) - 24u) /* TODO: Local buffer adapter */;
    L_800181B0:;
    arg1 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 40, sizeof(local_bytes) - 40u) /* TODO: Local buffer adapter */;
    L_800181B4:;
    v0 = TM3_DRAFT_I16(s2 + (uint32)(1540));
    L_800181B8:;
    v1 = TM3_DRAFT_I16(s2 + (uint32)(1546));
    L_800181BC:;
    arg2 = TM3_DRAFT_I16(s2 + (uint32)(1552));
    L_800181C0:;
    s0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 56, sizeof(local_bytes) - 56u) /* TODO: Local buffer adapter */;
    L_800181C4:;
    TM3_DRAFT_U16(listing_local_address + 40u) = (uint16)v0;
    L_800181C8:;
    TM3_DRAFT_U16(arg1 + (uint32)(2)) = (uint16)v1;
    L_800181CC:;
    TM3_DRAFT_U16(arg1 + (uint32)(4)) = (uint16)arg2;
    L_800181D0:;
    arg2 = TM3_DRAFT_U32(s2 + (uint32)(4388));
    L_800181D4:;
    arg3 = s0 + 0u;
    v0 = sub_80014EDC(arg0, arg1, arg2, arg3);
    L_800181DC:;
    arg1 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_800181E0:;
    arg0 = s0 + 0u;
    L_800181E4:;
    arg1 = arg1 + (uint32)(1536);
    L_800181E8:;
    arg2 = arg1 + 0u;
    v0 = tm3_draft_indirect(0x8005b504u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_800181F0:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_800181F4:;
    arg0 = arg0 + (uint32)(1536);
    v0 = sub_80015298(arg0);
    L_800181FC:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_80018200:;
    L_80018204:;
    v1 = TM3_DRAFT_I16(v0 + (uint32)(1538));
    L_80018208:;
    arg0 = TM3_DRAFT_I16(v0 + (uint32)(1544));
    L_8001820C:;
    v0 = TM3_DRAFT_I16(v0 + (uint32)(1550));
    L_80018210:;
    arg2 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 48, sizeof(local_bytes) - 48u) /* TODO: Local buffer adapter */;
    L_80018214:;
    TM3_DRAFT_U16(listing_local_address + 48u) = (uint16)v1;
    L_80018218:;
    TM3_DRAFT_U16(arg2 + (uint32)(2)) = (uint16)arg0;
    L_8001821C:;
    TM3_DRAFT_U16(arg2 + (uint32)(4)) = (uint16)v0;
    L_80018220:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_80018224:;
    arg3 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 24, sizeof(local_bytes) - 24u) /* TODO: Local buffer adapter */;
    L_80018228:;
    v0 = TM3_DRAFT_U16(arg0 + (uint32)(1018));
    L_8001822C:;
    arg0 = arg0 + (uint32)(1556);
    L_80018230:;
    v0 = v0 << 16u;
    L_80018234:;
    arg1 = (uint32)((sint32)v0 >> 16u);
    L_80018238:;
    v0 = v0 >> 31u;
    L_8001823C:;
    arg1 = arg1 + v0;
    L_80018240:;
    arg1 = (uint32)((sint32)arg1 >> 1u);
    v0 = sub_80014080(arg0, arg1, arg2, arg3);
    L_80018248:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_8001824C:;
    v0 = sub_80023B38(arg0);
    L_80018254:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_80018258:;
    v0 = sub_80023BFC(arg0);
    L_80018260:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(4388));
    L_80018264:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(4400));
    L_80018268:;
    arg1 = v0 << 1u;
    L_8001826C:;
    arg1 = arg1 + v0;
    L_80018270:;
    arg1 = arg1 << 10u;
    L_80018274:;
    arg1 = arg1 + (uint32)(2048);
    L_80018278:;
    arg1 = (uint32)((sint32)arg1 >> 12u);
    L_8001827C:;
    arg1 = arg1 + (uint32)(1536);
    v0 = sub_80038AFC(arg0, arg1);
    L_80018284:;
    goto L_80018308;
    L_8001828C:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(4396));
    L_80018290:;
    L_80018294:;
    {
        uint32 branch = v0 == 0u;
        if (branch) goto L_800182A0;
    }
    L_8001829C:;
    TM3_DRAFT_U32(s2 + (uint32)(4396)) = (uint32)0u;
    L_800182A0:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(4388));
    L_800182A4:;
    L_800182A8:;
    {
        uint32 branch = (sint32)v0 <= 0;
        arg1 = v0 << 1u;
        if (branch) goto L_800182EC;
    }
    L_800182B0:;
    arg1 = arg1 + v0;
    L_800182B4:;
    arg1 = arg1 << 10u;
    L_800182B8:;
    arg1 = arg1 + (uint32)(2048);
    L_800182BC:;
    arg1 = (uint32)((sint32)arg1 >> 12u);
    L_800182C0:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(4400));
    L_800182C4:;
    arg1 = arg1 + (uint32)(1536);
    v0 = sub_80038AFC(arg0, arg1);
    L_800182CC:;
    v1 = TM3_DRAFT_U32(s2 + (uint32)(4388));
    L_800182D0:;
    v0 = 0u + (uint32)(8);
    L_800182D4:;
    v0 = v0 - v1;
    L_800182D8:;
    v1 = (uint32)((sint32)v0 >> 31u);
    L_800182DC:;
    v0 = v0 & v1;
    L_800182E0:;
    v0 = 0u - v0;
    L_800182E4:;
    TM3_DRAFT_U32(s2 + (uint32)(4388)) = (uint32)v0;
    goto L_80018308;
    L_800182EC:;
    arg0 = TM3_DRAFT_U32(s2 + (uint32)(4400));
    L_800182F0:;
    L_800182F4:;
    {
        uint32 branch = arg0 == 0u;
        if (branch) goto L_80018308;
    }
    L_800182FC:;
    v0 = sub_8004A570(arg0);
    L_80018304:;
    TM3_DRAFT_U32(s2 + (uint32)(4400)) = (uint32)0u;
    L_80018308:;
    v0 = TM3_DRAFT_U32(s2 + (uint32)(4384));
    L_8001830C:;
    v1 = TM3_DRAFT_U32(s2 + (uint32)(4388));
    L_80018310:;
    L_80018314:;
    v0 = v0 + v1;
    L_80018318:;
    v0 = v0 & 4095u;
    L_8001831C:;
    TM3_DRAFT_U32(s2 + (uint32)(4384)) = (uint32)v0;
    L_80018320:;
    L_80018324:;
    L_80018328:;
    L_8001832C:;
    L_80018330:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8006477C(uint32 a1)
{
    FUNCTION_MARKER(0x8006477Cu, "SCUS_942.49");
  uint32 v2; 
  int v3; 
  int v4; 
  int v5; 
  sint16 v6; 
  int v7; 
  uint32 v8; 
  int v9; 
  uint32 v10; 

  uint32 v11; /* Guest callback address */ 
  int v12; 
  uint32 v13; 
  sint32 result; 

  v2 = (uint32)TM3_DRAFT_U32(0x80087E10u);
  TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 10) = 64;
  TM3_DRAFT_U16(v2 + 2u * (5)) = 0;
  TM3_DRAFT_U16(v2 + 2u * (4)) = 13;
  TM3_DRAFT_U16(v2 + 2u * (7)) = 136;
  v3 = TM3_DRAFT_U8(a1 + 232);
  v4 = 145;
  if ( v3 == 8 )
    v4 = 80;
  sub_8006760C(v4);
  v5 = TM3_DRAFT_U32(0x80087DECu);
  v6 = 4099;
  if ( TM3_DRAFT_U32(0x80087DECu) )
    v6 = 12291;
  TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 10) = v6;
  v7 = TM3_DRAFT_U32(0x80087E04u + 4u * (v5));
  if ( v7 >= 0 )
  {
    if ( v7 > 0 )
    {
      do
      {
        v8 = (0x80087E04u + 4u * (TM3_DRAFT_U32(0x80087DECu)));
        v9 = TM3_DRAFT_U32(v8) - 1;
        TM3_DRAFT_U32(v8) = v9;
        tm3_draft_indirect(TM3_DRAFT_U32(0x80087DCCu), 1u, TM3_DRAFT_U32(a1 + 12) + 240 * v9);
      }
      while ( TM3_DRAFT_U32(0x80087E04u + 4u * (TM3_DRAFT_U32(0x80087DECu))) > 0 );
    }
    v10 = (0x80087E04u + 4u * (TM3_DRAFT_U32(0x80087DECu)));
    if ( !TM3_DRAFT_U32(v10) )
    {
      v11 = (uint32)TM3_DRAFT_U32(0x80087DCCu);
      TM3_DRAFT_U32(v10) = -1;
      tm3_draft_indirect(v11, 1u, a1) /* TODO: Guest callback adapter */;
      tm3_draft_indirect(TM3_DRAFT_U32(0x80087DD0u), 1u, a1);
    }
  }
  v12 = TM3_DRAFT_U32(0x80087E10u);
  if ( (TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 4) & 0x200) == 0 )
    goto LABEL_24;
  TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 10) |= 0x10u;
  if ( (TM3_DRAFT_U16(v12 + 4) & 0x200) == 0 )
  {
    TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) = -129;
LABEL_24:
    result = 1;
    if ( TM3_DRAFT_U8(a1 + 80) )
      return TM3_DRAFT_U8(a1 + 55) == 0;
    return result;
  }
  while ( !sub_8006762C() )
    ;
  TM3_DRAFT_U8(TM3_DRAFT_U32(0x80087E10u)) = 1;
  sub_8006760C(100);
  v13 = sub_80065028() == 0;
  result = 0;
  if ( !v13 )
  {
    sub_800650B8();
    sub_8006760C(430);
    while ( (TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) & 0x80) == 0 )
    {
      v13 = sub_8006762C();
      result = 0;
      if ( v13 )
        return result;
    }
    TM3_DRAFT_U8(TM3_DRAFT_U32(0x80087E10u)) = 66;
    sub_8006760C(60);
    v13 = sub_80065028() == 0;
    result = 0;
    if ( !v13 )
    {
      sub_800650B8();
      sub_8006760C(430);
      while ( (TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) & 0x80) == 0 )
      {
        v13 = sub_8006762C();
        result = 0;
        if ( v13 )
          return result;
      }
      TM3_DRAFT_U8(TM3_DRAFT_U32(0x80087E10u)) = 1;
      sub_8006760C(60);
      v13 = sub_80065028() == 0;
      result = 0;
      if ( !v13 )
      {
        sub_800650B8();
        return 0;
      }
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80021E44(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    uint32 original_local_words[15];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80021E44u, "SCUS_942.49");
  int v17; 
  int v18; 
  int v19; 
  uint32 v20; 
  int v21; 
  int v22; 
  uint32 v23; 
  int v24; 
  int v25; 
  int v26; 
  uint32 v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 

  TM3_DRAFT_I32(original_local_address + 32u) = TM3_DRAFT_U32(a2);
  TM3_DRAFT_I32(original_local_address + 36u) = TM3_DRAFT_U32(a2 + 4u * (1));
  TM3_DRAFT_I32(original_local_address + 40u) = TM3_DRAFT_U32(a2 + 4u * (2));
  TM3_DRAFT_I32(original_local_address + 16u) = TM3_DRAFT_I32(original_local_address + 32u);
  TM3_DRAFT_I32(original_local_address + 20u) = TM3_DRAFT_I32(original_local_address + 36u);
  TM3_DRAFT_I32(original_local_address + 24u) = TM3_DRAFT_I32(original_local_address + 40u);
  sub_800566A4(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */, 0, 6);
  TM3_DRAFT_I32(original_local_address + 48u) = TM3_DRAFT_U32(0x80088020u);
  TM3_DRAFT_I32(original_local_address + 52u) = TM3_DRAFT_U32(0x80088024u);
  TM3_DRAFT_I32(original_local_address + 56u) = TM3_DRAFT_U32(0x80088028u);
  v17 = 0;
  if ( a1 )
  {
    TM3_DRAFT_I32(original_local_address + 16u) += TM3_DRAFT_U16(a1);
    TM3_DRAFT_I32(original_local_address + 20u) += TM3_DRAFT_U16(a1 + 2u * (1));
    TM3_DRAFT_I32(original_local_address + 24u) += TM3_DRAFT_U16(a1 + 2u * (2));
  }
  v18 = 0;
  do
  {
    v19 = v18 >> 16;
    v20 = 4 * (v18 >> 16);
    v21 = v17 + 1;
    if ( !TM3_DRAFT_U32(a2 + 4u * (v20 / 4)) )
      goto LABEL_10;
    v22 = 2 * v19;
    v23 = (uint32)(2 * v19 + a3);
    v24 = TM3_DRAFT_U16(v23);
    v25 = TM3_DRAFT_I32((uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 16u), sizeof(TM3_DRAFT_I32(original_local_address + 16u))) /* TODO: Local buffer adapter */ + v20);
    if ( v25 >= v24 )
    {
      v23 = (uint32)(v22 + a4);
      v26 = TM3_DRAFT_I16(v22 + a4);
      v21 = v17 + 1;
      if ( v26 >= v25 )
        goto LABEL_10;
      TM3_DRAFT_U32(v20 + a5) = v26;
      TM3_DRAFT_U16((uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */ + v22) = v17;
    }
    else
    {
      TM3_DRAFT_U32(v20 + a5) = v24;
      TM3_DRAFT_U16((uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */ + v22) = v17 + 3;
    }
    TM3_DRAFT_I32((uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 48u), sizeof(TM3_DRAFT_I32(original_local_address + 48u))) /* TODO: Local buffer adapter */ + v20) = ((TM3_DRAFT_I32((uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 16u), sizeof(TM3_DRAFT_I32(original_local_address + 16u))) /* TODO: Local buffer adapter */ + v20) - TM3_DRAFT_U16(v23)) << 18) / TM3_DRAFT_U32(a2 + 4u * (v20 / 4));
    v21 = v17 + 1;
LABEL_10:
    v17 = v21;
    v27 = (sint16)v21 < 3;
    v18 = v21 << 16;
  }
  while ( v27 );
  v28 = TM3_DRAFT_I32(original_local_address + 52u) >= TM3_DRAFT_I32(original_local_address + 48u);
  if ( TM3_DRAFT_I32(original_local_address + 56u) >= ((int *)(void *)&TM3_DRAFT_I32(original_local_address + 48u))[v28] )
    v28 = 2;
  v29 = 0;
  v30 = 0;
  do
  {
    v31 = v30 >> 16;
    if ( v31 != v28 )
      TM3_DRAFT_U32(4 * v31 + a5) = ((int *)(void *)&TM3_DRAFT_I32(original_local_address + 16u))[v31] - ((((int *)(void *)&TM3_DRAFT_I32(original_local_address + 48u))[v28] * TM3_DRAFT_U32(a2 + 4u * (v31)) + 0x20000) >> 18);
    v30 = ++v29 << 16;
  }
  while ( (sint16)v29 < 3 );
  return ((sint16 *)(void *)&TM3_DRAFT_I32(original_local_address + 32u))[v28];
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002E2D4(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    uint32 original_local_words[24];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8002E2D4u, "SCUS_942.49");
  int v6; 
  int v7; 
  int v8; 
  int result; 
  int v10; 
  int v11; 
  sint16 v12; 
  int coordinates[4];

  sub_800566A4(TM3_DRAFT_LOCAL_ADDRESS(&coordinates[0], sizeof(coordinates[0])) /* TODO: Local buffer adapter */, 0, 16);
  v6 = TM3_DRAFT_U8(a1 + 316);
  v7 = TM3_DRAFT_I16(a1 + 216) + 1;
  if ( v7 >= v6 )
    v7 = 0;
  v8 = (TM3_DRAFT_U8(a1 + 320) << 16) | (TM3_DRAFT_U8(a1 + 319) << 8) | TM3_DRAFT_U8(a1 + 318);
  result = v6 - 1;
  v10 = 0;
  if ( v6 - 1 > 0 )
  {
    v11 = 6 * v7 + a1;
    do
    {
      TM3_DRAFT_I32(original_local_address + 32u) = TM3_DRAFT_U32(v11 + 168);
      LOWORD(TM3_DRAFT_I32(original_local_address + 36u)) = TM3_DRAFT_U16(v11 + 172);
      TM3_DRAFT_I32(original_local_address + 48u) = TM3_DRAFT_U32(v11 + 268);
      LOWORD(TM3_DRAFT_U32(original_local_address + 52u)) = TM3_DRAFT_U16(v11 + 272);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[0] = TM3_DRAFT_U16(v11 + 268);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[1] = TM3_DRAFT_U16(v11 + 270);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[2] = TM3_DRAFT_U16(v11 + 272);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[8] = TM3_DRAFT_U16(v11 + 218);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[9] = TM3_DRAFT_U16(v11 + 220);
      ++v7;
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[10] = TM3_DRAFT_U16(v11 + 222);
      v11 += 6;
      if ( v7 >= TM3_DRAFT_U8(a1 + 316) )
      {
        v11 = a1;
        v7 = 0;
      }
      TM3_DRAFT_I32(original_local_address + 40u) = TM3_DRAFT_U32(v11 + 168);
      LOWORD(TM3_DRAFT_I32(original_local_address + 44u)) = TM3_DRAFT_U16(v11 + 172);
      TM3_DRAFT_I32(original_local_address + 56u) = TM3_DRAFT_U32(v11 + 268);
      TM3_DRAFT_I16(original_local_address + 60u) = TM3_DRAFT_U16(v11 + 272);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[4] = TM3_DRAFT_U16(v11 + 268);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[5] = TM3_DRAFT_U16(v11 + 270);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[6] = TM3_DRAFT_U16(v11 + 272);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[12] = TM3_DRAFT_U16(v11 + 218);
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[13] = TM3_DRAFT_U16(v11 + 220);
      v12 = TM3_DRAFT_U16(v11 + 222);
      coordinates[1] += v8;
      coordinates[3] = coordinates[1];
      (*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[14] = v12;
      sub_8002A940(TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16]))), sizeof((*(sint16 (*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16]))))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS(&coordinates[0], sizeof(coordinates[0])) /* TODO: Local buffer adapter */, a2, a3, 1, a4, 64);
      sub_8002A940((int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS(&coordinates[0], sizeof(coordinates[0])) /* TODO: Local buffer adapter */, a2, a3, 1, a4, 64);
      coordinates[0] += v8;
      coordinates[2] = coordinates[0];
      result = ++v10 < TM3_DRAFT_U8(a1 + 316) - 1;
    }
    while ( v10 < TM3_DRAFT_U8(a1 + 316) - 1 );
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80041FA4(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, ...)
{
    uint32 cpu_a2;
    uint32 cpu_t1;
    uint32 cpu_t2;
    uint32 cpu_v0;
    uint32 cpu_v1;
    uint32 temporary_1;
    uint32 temporary_2;
    FUNCTION_MARKER(0x80041FA4u, "SCUS_942.49");
  int v14; 
  int v15; 
  uint32 v16; 
  int v17; 
  int v18; 
  uint32 v19; 
  int v21; 
  uint32 v22; 
  int result; 
  int v24; 
  int v25; 
  uint32 v26; 
  int v27; 
  int v28; 
  int v29; 
  char v30; 
  int v34; 
  int v36; 
  int v40; 
  uint32 v41; 
  int v42; 

  v16 = TM3_DRAFT_U32(a5);
  v17 = 528482292;
  v18 = TM3_DRAFT_U8(a1);
  v19 = (uint32)(a2 + TM3_DRAFT_U32(a1 + 4));
  cpu_a2 = a3 + 8 * TM3_DRAFT_U16(a1 + 2);
  v21 = TM3_DRAFT_U8(a1 + 1u * (1));
  v22 = (a6 - TM3_DRAFT_U32(a5)) / 0x24u;
  result = (v21 - v22) & ((int)(v21 - v22) >> 31);
  v24 = result + v22;
  while ( v18 > 0 )
  {
    xport_gte_write_data(0u, TM3_DRAFT_U32(cpu_a2 + 0u));
xport_gte_write_data(1u, TM3_DRAFT_U32(cpu_a2 + 4u));
xport_gte_write_data(2u, TM3_DRAFT_U32(cpu_a2 + 8u));
xport_gte_write_data(3u, TM3_DRAFT_U32(cpu_a2 + 0xCu));
xport_gte_write_data(4u, TM3_DRAFT_U32(cpu_a2 + 0x10u));
xport_gte_write_data(5u, TM3_DRAFT_U32(cpu_a2 + 0x14u));
    v17 += 12;
    xport_gte_execute(0x280030u);
    v18 -= 3;
    cpu_a2 += 24;
    TM3_DRAFT_U32(v17 + 0u) = xport_gte_read_data(12u);
TM3_DRAFT_U32(v17 + 4u) = xport_gte_read_data(13u);
TM3_DRAFT_U32(v17 + 8u) = xport_gte_read_data(14u);
  }
  v25 = 0;
  if ( v24 > 0 )
  {
    v26 = v19 + 12;
    do
    {
      v27 = TM3_DRAFT_U8(v26 - 32);
      v28 = TM3_DRAFT_U8(v26 - 28);
      v29 = TM3_DRAFT_U8(v26 - 24);
      v30 = TM3_DRAFT_U8(v26 + 12);
      cpu_a2 = 4 * v27 + 528482304;
      temporary_1 = 4 * v28 + 528482304;
      temporary_2 = 4 * v29 + 528482304;
      xport_gte_write_data(12u, TM3_DRAFT_U32(cpu_a2 + 0u));
xport_gte_write_data(13u, TM3_DRAFT_U32(temporary_1));
xport_gte_write_data(14u, TM3_DRAFT_U32(temporary_2));
      v34 = TM3_DRAFT_U8(v26 - 36);
      if ( v34 == 56 )
      {
        TM3_DRAFT_U32(v16 + 4u * (2)) = TM3_DRAFT_U32(4 * v27 + 0x1F800000);
        xport_gte_execute(0x1400006u);
        TM3_DRAFT_U32(v16 + 4u * (4)) = TM3_DRAFT_U32(4 * v28 + 0x1F800000);
        TM3_DRAFT_U32(v16 + 4u * (6)) = TM3_DRAFT_U32(4 * v29 + 0x1F800000);
        cpu_a2 = xport_gte_read_data(24u);
        v36 = TM3_DRAFT_U8(v26 - 20);
        cpu_v0 = 4 * v36 + 528482304;
        xport_gte_write_data(12u, TM3_DRAFT_U32(cpu_v0 + 0u));
xport_gte_execute(0x1400006u);
cpu_v1 = xport_gte_read_data(24u);
        if ( v30 || cpu_v1 <= 0 || cpu_a2 > 0 )
        {
          TM3_DRAFT_U32(v16 + 4u * (8)) = TM3_DRAFT_U32(4 * v36 + 0x1F800000);
          TM3_DRAFT_U32(v16 + 4u * (1)) = TM3_DRAFT_U32(v19);
          TM3_DRAFT_U32(v16 + 4u * (3)) = TM3_DRAFT_U32(v26 - 4);
          v14 = 8;
          TM3_DRAFT_U32(v16 + 4u * (5)) = TM3_DRAFT_U32(v26);
          v15 = 36;
          TM3_DRAFT_U32(v16 + 4u * (7)) = TM3_DRAFT_U32(v26 + 4u * (1));
          goto LABEL_16;
        }
      }
      else
      {
        if ( v34 != 48 )
          goto LABEL_16;
        xport_gte_execute(0x1400006u);
cpu_a2 = xport_gte_read_data(24u);
        v40 = 4 * v27;
        if ( TM3_DRAFT_U8(v26 + 12) )
        {
          v41 = (uint32)(v40 + 528482304);
LABEL_15:
          TM3_DRAFT_U32(v16 + 4u * (2)) = TM3_DRAFT_U32(v41);
          TM3_DRAFT_U32(v16 + 4u * (4)) = TM3_DRAFT_U32(4 * v28 + 0x1F800000);
          TM3_DRAFT_U32(v16 + 4u * (6)) = TM3_DRAFT_U32(4 * v29 + 0x1F800000);
          TM3_DRAFT_U32(v16 + 4u * (1)) = TM3_DRAFT_U32(v19);
          v14 = 6;
          TM3_DRAFT_U32(v16 + 4u * (3)) = TM3_DRAFT_U32(v26 - 4);
          v15 = 28;
          TM3_DRAFT_U32(v16 + 4u * (5)) = TM3_DRAFT_U32(v26);
LABEL_16:
          v26 += 4u * (5);
          v19 += 4u * (5);
          TM3_DRAFT_U32(v16) = TM3_DRAFT_U32(a4) & 0xFFFFFF | (v14 << 24);
          v42 = (uint32)v16 & 0xFFFFFF;
          v16 = (uint32)((uint32)v16 + v15);
          TM3_DRAFT_U32(a4) = v42;
          goto LABEL_17;
        }
        v41 = (uint32)(v40 + 528482304);
        if ( cpu_a2 > 0 )
          goto LABEL_15;
      }
      v26 += 4u * (5);
      v19 += 4u * (5);
LABEL_17:
      result = ++v25 < v24;
    }
    while ( v25 < v24 );
  }
  TM3_DRAFT_U32(a5) = v16;
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800277CC(uint32 a1, uint32 a2)
{
    uint32 original_local_words[10];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x800277CCu, "SCUS_942.49");
  uint32 v2; 
  uint32 v3; 
  uint32 v4; 
  int v5; 
  uint32 v6; 
  uint32 v7; 
  uint32 v8; 
  int v9; 
  sint16 v11; 
  sint16 v12; 
  int v13; 
  uint32 v14; 
  int v15; 
  int v16; 
  int v17; 

  v2 = (uint32)(a2 + 4);
  v3 = TM3_DRAFT_U32(v2);
  v4 = TM3_DRAFT_U32(v2 + 4u * (5));
  v5 = (int)TM3_DRAFT_U16(v2 - 4);
  v6 = TM3_DRAFT_U32(v2 + 4u * (1));
  v7 = TM3_DRAFT_U32(v2 + 4u * (2));
  v8 = TM3_DRAFT_U32(v2 + 4u * (3));
  v9 = (int)TM3_DRAFT_U32(v2 + 4u * (4));
  TM3_DRAFT_U16(a1 + 8) = TM3_DRAFT_U32(TM3_DRAFT_U32(v2));
  TM3_DRAFT_U16(a1 + 12) = TM3_DRAFT_U16(v3 + 2u * (2));
  if ( !v5 || v5 == 2 || v5 == 4 )
    TM3_DRAFT_U16(a1 + 10) = TM3_DRAFT_U16(v3 + 2u * (1));
  else
    TM3_DRAFT_U16(a1 + 10) = TM3_DRAFT_U16(v3 + 2u * (1)) - (int)v7 / 2;
  v11 = TM3_DRAFT_U16(a1 + 10);
  v12 = TM3_DRAFT_U16(a1 + 12);
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U16(a1 + 8);
  v13 = a1 - 20;
  TM3_DRAFT_U16(v13 + 2) = v11;
  TM3_DRAFT_U16(v13 + 4) = v12;
  if ( v6 )
  {
    TM3_DRAFT_I16(original_local_address + 32u) = TM3_DRAFT_U16(v6);
    TM3_DRAFT_I32(original_local_address + 34u) = TM3_DRAFT_U32(v6 + 2);
  }
  else
  {
    TM3_DRAFT_I16(original_local_address + 32u) = 0;
    TM3_DRAFT_I32(original_local_address + 34u) = 65280;
  }
  TM3_DRAFT_U16(a1) = (136 * TM3_DRAFT_I16(original_local_address + 32u) + 2048) >> 12;
  TM3_DRAFT_U16(a1 + 2) = (136 * (sint16)TM3_DRAFT_I32(original_local_address + 34u) + 2048) >> 12;
  TM3_DRAFT_U16(a1 + 14) = 0;
  TM3_DRAFT_U16(a1 + 4) = (136 * SHIWORD(TM3_DRAFT_I32(original_local_address + 34u)) + 2048) >> 12;
  if ( v9 == -2 )
  {
    TM3_DRAFT_U16(a1 + 16) = -1;
  }
  else
  {
    v14 = (0x8007DFB8u + 4u * ((uint32)v8 + 18 * v5));
    TM3_DRAFT_U16(a1 + 16) = TM3_DRAFT_U16(v14);
    v15 = TM3_DRAFT_I16(a1 + 16);
    TM3_DRAFT_U16(a1 + 18) = TM3_DRAFT_U16(v14 + 8);
    if ( v15 != -1 )
    {
      if ( v9 == -1 )
        sub_8004A294(22, v15, 22, TM3_DRAFT_U16(v3), TM3_DRAFT_U16(v3 + 2u * (1)), TM3_DRAFT_U16(v3 + 2u * (2)), TM3_DRAFT_I16(a1 + 18));
      else
        sub_8004A294(22, v15, 30, TM3_DRAFT_U16(v3), TM3_DRAFT_U16(v3 + 2u * (1)), TM3_DRAFT_U16(v3 + 2u * (2)), TM3_DRAFT_I16(a1 + 18), v9);
    }
  }
  v16 = 1 - ((1 - (uint32)v4) & ((1 - (int)v4) >> 31)) - 30;
  v17 = TM3_DRAFT_U32(0x80089CE8u);
  TM3_DRAFT_U16(a1 + 20) = (uint16)v7;
  TM3_DRAFT_U16(a1 + 22) = (uint16)v7;
  TM3_DRAFT_U32(a1 + 28) = v17 + 104 * v5;
  TM3_DRAFT_U32(a1 + 24) = TM3_DRAFT_U32(0x8007E090u + 4u * (v5));
  TM3_DRAFT_U8(a1 + 27) = 0;
  TM3_DRAFT_U16(a1 + 6) = 30 / ((v16 & (v16 >> 31)) + 30);
  return 1;
}


