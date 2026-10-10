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
    if (v4 < 0)
        v6 = v3;
    else
        v6 = TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 3396) + 36) + 28 * v4;
    v7 = 9999999;
    v8 = -1;
    if (TM3_DRAFT_U8(v6 + 1) < 2u)
    {
        v14 = TM3_DRAFT_U32(v6 + 24);
        v13 = -65536;
        if (!v14)
            goto LABEL_14;
        v8 = TM3_DRAFT_U16(v14);
    LABEL_13:
        v13 = v8 << 16;
        goto LABEL_14;
    }
    v9 = 0;
    if (!TM3_DRAFT_U8(v6 + 1))
        goto LABEL_13;
    v10 = 0;
    do
    {
        v11 = (uint32)(28 * TM3_DRAFT_U16(v10 + TM3_DRAFT_U32(v6 + 24)) + TM3_DRAFT_U32(0x80089F00u));
        v12 = sub_80015724(TM3_DRAFT_U16(v11) - TM3_DRAFT_I16(a1 + 3348), TM3_DRAFT_U16(v11 + 2u * (1)) - TM3_DRAFT_I16(a1 + 3350));
        if (v12 < v7)
        {
            v7 = v12;
            v8 = TM3_DRAFT_U16(v10 + TM3_DRAFT_U32(v6 + 24));
        }
        ++v9;
        v10 = 2 * v9;
    } while (v9 < TM3_DRAFT_U8(v6 + 1));
    v13 = v8 << 16;
LABEL_14:
    if (v13 >> 16 < 0)
        goto LABEL_22;
    v15 = (uint32)(28 * (v13 >> 16) + TM3_DRAFT_U32(0x80089F00u));
    LOWORD(TM3_DRAFT_I32(original_local_address + 24u)) = TM3_DRAFT_U16(v15) - TM3_DRAFT_U16(a1 + 3348);
    HIWORD(TM3_DRAFT_I32(original_local_address + 24u)) = TM3_DRAFT_U16(v15 + 2u * (1)) - TM3_DRAFT_U16(a1 + 3350);
    v16 = sub_8005B124((sint16)TM3_DRAFT_I32(original_local_address + 24u) * (sint16)TM3_DRAFT_I32(original_local_address + 24u) + SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) * SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)));
    if (v16)
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
    if ((sint16)v16 >= 8193 || (v17 = sub_800163A0(TM3_DRAFT_U32(a1 + 3396), TM3_DRAFT_U32(a1 + 3400), a1 + 3348, (uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */, 0) == 0, v18 = v8 << 16, !v17))
    {
        v8 = -1;
        v18 = -65536;
    }
    v17 = v18 >= 0;
    v19 = v8 << 16;
    if (!v17)
    {
    LABEL_22:
        if ((a2 & 0x8000u) != 0)
        {
        LABEL_29:
            v19 = v8 << 16;
            return v19 >> 16;
        }
        v20 = (uint32)(28 * (sint16)a2 + TM3_DRAFT_U32(0x80089F00u));
        LOWORD(TM3_DRAFT_I32(original_local_address + 24u)) = TM3_DRAFT_U16(v20) - TM3_DRAFT_U16(a1 + 3348);
        HIWORD(TM3_DRAFT_I32(original_local_address + 24u)) = TM3_DRAFT_U16(v20 + 2u * (1)) - TM3_DRAFT_U16(a1 + 3350);
        v21 = sub_8005B124((sint16)TM3_DRAFT_I32(original_local_address + 24u) * (sint16)TM3_DRAFT_I32(original_local_address + 24u) + SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) * SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)));
        if (v21)
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
        if ((sint16)v21 >= 8193 || (v17 = sub_800163A0(TM3_DRAFT_U32(a1 + 3396), TM3_DRAFT_U32(a1 + 3400), a1 + 3348, (uint32)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 24u), sizeof(TM3_DRAFT_I32(original_local_address + 24u))) /* TODO: Local buffer adapter */, 0) == 0, v19 = a2 << 16, !v17))
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
    if (!v2)
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
            (*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4])))[0] = TM3_DRAFT_U32(v5 + 4u * (5)) - TM3_DRAFT_U32(TM3_DRAFT_U32(TM3_DRAFT_I32(original_local_address + 88u)) + 20);
            (*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4])))[1] = v7 - v9;
            (*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4])))[2] = v8 - v10;
            v11 = TM3_DRAFT_U32(v5 + 4u * (9));
            v12 = TM3_DRAFT_U32(v5 + 4u * (10));
            v13 = TM3_DRAFT_U32(v6 + 4u * (9));
            v14 = TM3_DRAFT_U32(v6 + 4u * (10));
            (*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[0] = TM3_DRAFT_U32(v5 + 4u * (8)) - TM3_DRAFT_U32(v6 + 4u * (8));
            (*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[1] = v11 - v13;
            (*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4])))[2] = v12 - v14;
            if (TM3_DRAFT_U8(v3 + 4))
            {
                sub_800146A4(TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))))), v4);
                v18 = TM3_DRAFT_U16(a1 + 1544);
                v19 = TM3_DRAFT_U16(a1 + 1550);
                (*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4])))[0] = TM3_DRAFT_U16(a1 + 1538);
                (*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4])))[1] = v18;
                (*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4])))[2] = v19;
                v21 = sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4])))))) - TM3_DRAFT_U32(v3);
                v20 = sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))));
                v22 = sub_80015684(1024, v20, 12);
                sub_80014B6C((original_local_address + 32u), TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), 0u - (((uint32)v21 << 3u) + (uint32)v22), 12);
                sub_800155A4(TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 72u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 72u, sizeof(int[4]))))));
                sub_800155A4(TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))));
                v23 = sub_800146A4(TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 72u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 72u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))));
                sub_800148DC((original_local_address + 32u), TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), 0u - ((uint32)v23 << 3u), 12);
                v24 = sub_800146A4(TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))));
                v25 = sub_80015684(512, v24, 12);
                sub_800148DC((original_local_address + 32u), TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))), sizeof((*(sint16(*)[4])psx_addr(original_local_address + 64u, sizeof(sint16[4]))))), 0u - (uint32)v25, 12);
            }
            else
            {
                v16 = sub_800146A4(TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))))), v4) - TM3_DRAFT_U32(v3);
                v15 = sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))), sizeof((*(int(*)[4])psx_addr(original_local_address + 16u, sizeof(int[4]))))), v4);
                v17 = sub_80015684(512, v15, 12);
                sub_80014B6C((original_local_address + 32u), v4, 0u - (((uint32)v16 << 3u) + (uint32)v17), 12);
            }
            v26 = TM3_DRAFT_U32(v6 + 4u * (12));
            v27 = TM3_DRAFT_I32(original_local_address + 36u);
            v28 = TM3_DRAFT_U32(v6 + 4u * (13)) - TM3_DRAFT_I32(original_local_address + 40u);
            TM3_DRAFT_U32(v6 + 4u * (11)) -= TM3_DRAFT_I32(original_local_address + 32u);
            TM3_DRAFT_U32(v6 + 4u * (13)) = v28;
            TM3_DRAFT_U32(v6 + 4u * (12)) = (uint32)v26 - (uint32)v27;
            v29 = TM3_DRAFT_U32(v6 + 4u * (15));
            v30 = TM3_DRAFT_I32(original_local_address + 36u);
            v31 = TM3_DRAFT_U32(v6 + 4u * (16)) - TM3_DRAFT_I32(original_local_address + 40u);
            TM3_DRAFT_U32(v6 + 4u * (14)) -= TM3_DRAFT_I32(original_local_address + 32u);
            TM3_DRAFT_U32(v6 + 4u * (16)) = v31;
            TM3_DRAFT_U32(v6 + 4u * (15)) = (uint32)v29 - (uint32)v30;
            v32 = TM3_DRAFT_U32(v5 + 4u * (12));
            v33 = TM3_DRAFT_I32(original_local_address + 36u);
            v34 = TM3_DRAFT_U32(v5 + 4u * (13)) + TM3_DRAFT_I32(original_local_address + 40u);
            TM3_DRAFT_U32(v5 + 4u * (11)) += TM3_DRAFT_I32(original_local_address + 32u);
            TM3_DRAFT_U32(v5 + 4u * (13)) = v34;
            TM3_DRAFT_U32(v5 + 4u * (12)) = (uint32)v32 + (uint32)v33;
            v35 = TM3_DRAFT_U32(v5 + 4u * (15));
            v36 = TM3_DRAFT_I32(original_local_address + 36u);
            v37 = TM3_DRAFT_U32(v5 + 4u * (16)) + TM3_DRAFT_I32(original_local_address + 40u);
            TM3_DRAFT_U32(v5 + 4u * (14)) += TM3_DRAFT_I32(original_local_address + 32u);
            TM3_DRAFT_U32(v5 + 4u * (16)) = v37;
            TM3_DRAFT_U32(v5 + 4u * (15)) = (uint32)v35 + (uint32)v36;
            v3 += 24;
            v4 += 2u * (12);
            result = (uint32)(TM3_DRAFT_I32(original_local_address + 88u) + 24) < TM3_DRAFT_U32(a1 + 3164);
            v2 = (uint32)(TM3_DRAFT_I32(original_local_address + 88u) + 24) < TM3_DRAFT_U32(a1 + 3164);
            TM3_DRAFT_I32(original_local_address + 88u) += 24;
        } while (v2);
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
        if (branch)
            goto L_800270C4;
    }
L_80026FCC:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(80));
L_80026FD0:;
L_80026FD4:;
    {
        uint32 branch = v0 == 0u;
        arg0 = s0 + (uint32)(92);
        if (branch)
            goto L_800270F4;
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
        if (branch)
            goto L_800270C0;
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
        if (branch)
            goto L_800270F4;
    }
L_800270D4:;
    arg1 = TM3_DRAFT_U32(s0 + (uint32)(72));
L_800270D8:;
L_800270DC:;
    {
        uint32 branch = arg1 == v0;
        arg0 = t4 + 0u;
        if (branch)
            goto L_80027168;
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
        if (branch)
            goto L_80027170;
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
        if (branch)
            goto L_80027168;
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
        if (branch)
            goto L_80027228;
    }
L_800271C4:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(84));
L_800271C8:;
L_800271CC:;
    {
        uint32 branch = v0 == 0u;
        v0 = s0 + (uint32)(8);
        if (branch)
            goto L_8002722C;
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
    uint32 base = 0x800D2E88u;
    uint32 index;
    uint32 cursor;
    uint32 sum;
    uint32 limit;
    uint32 difference;
    uint32 selected;
    uint32 candidate;
    uint32 scan;
    sint32 special;
    int duplicate;

    FUNCTION_MARKER(0x800447D4u, "SCUS_942.49");
    if (TM3_DRAFT_U32(base + 0xC4u))
    {
        for (index = 0, cursor = base; (sint32)index < TM3_DRAFT_I32(base + 8u); ++index, cursor += 144u)
        {
            TM3_DRAFT_U32(cursor + 0x184u) = 2;
            TM3_DRAFT_U32(cursor + 0x190u) = 0;
        }
        index = TM3_DRAFT_U32(base + 8u);
        sum = index + TM3_DRAFT_U32(base + 0xB0u);
        cursor = base + 144u * index;
        while ((sint32)index < (sint32)sum)
        {
            TM3_DRAFT_U32(cursor + 0x184u) = 2;
            TM3_DRAFT_U32(cursor + 0x190u) = 1;
            ++index;
            sum = TM3_DRAFT_U32(base + 8u) + TM3_DRAFT_U32(base + 0xB0u);
            cursor += 144u;
        }
        if (TM3_DRAFT_U32(base + 0xB4u))
        {
            TM3_DRAFT_U32(base + 0xB4u) = 0;
            TM3_DRAFT_U32(0x800D296Cu) = 0;
        }
        else
            TM3_DRAFT_U32(base + 0x14u) = 0;
        TM3_DRAFT_U32(base + 0xD4u) = 0xFFFFFFFFu;
    }
    else
        ++TM3_DRAFT_U32(base + 0x14u);
    cursor = 0x8007EA18u + (TM3_DRAFT_U32(base + 0x14u) << 3);
    special = TM3_DRAFT_I8(cursor + 3u);
    limit = (special == -1 ? 8u : 7u) - (TM3_DRAFT_U32(base + 8u) + TM3_DRAFT_U32(base + 0xB0u));
    difference = (uint32)TM3_DRAFT_U8(cursor + TM3_DRAFT_U32(base + 0x88u)) - limit;
    TM3_DRAFT_U32(base + 0xCu) = limit + (difference & (uint32)((sint32)difference >> 31));
    TM3_DRAFT_U32(base + 0x10u) = TM3_DRAFT_U32(base + 8u) + TM3_DRAFT_U32(base + 0xB0u) + TM3_DRAFT_U32(base + 0xCu);
    selected = 0;
    while ((sint32)selected < TM3_DRAFT_I32(base + 0xCu))
    {
        candidate = (uint32)((sint32)sub_80039FD4() % 16);
        for (scan = 0; scan < 8u; ++scan)
            if (candidate == (uint32)(sint32)TM3_DRAFT_I8(0x8007EA1Bu + scan * 8u))
                break;
        if (scan < 8u)
            continue;
        sum = TM3_DRAFT_U32(base + 8u) + TM3_DRAFT_U32(base + 0xB0u) + selected;
        duplicate = 0;
        for (scan = 0; (sint32)scan < (sint32)sum; ++scan)
            if (candidate == TM3_DRAFT_U32(base + 0x18u + scan * 4u))
                duplicate = 1;
        if (duplicate)
            continue;
        TM3_DRAFT_U32(base + 0x18u + sum * 4u) = candidate;
        ++selected;
    }
    sum = TM3_DRAFT_U32(base + 0x10u);
    if ((sint32)sum < 16)
    {
        special = TM3_DRAFT_I8(0x8007EA1Bu + (TM3_DRAFT_U32(base + 0x14u) << 3));
        TM3_DRAFT_U32(base + 0x18u + sum * 4u) = special == -1 ? 16u : (uint32)special;
    }
    TM3_DRAFT_U32(base + 0xC8u) = 0;
    TM3_DRAFT_U32(base + 0xC4u) = 0;
    TM3_DRAFT_U32(base + 0xCCu) = 0;
    TM3_DRAFT_U32(base + 0xD0u) = 0;
    TM3_DRAFT_U32(base + 0xB8u) = 0;
    TM3_DRAFT_U32(base + 0xBCu) = 0;
    TM3_DRAFT_U32(base + 0xC0u) = 0;
    return base;
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

    v2 = r_u32(0x8007e894u + 4u * (r_u32(0x800d2e88u) - 1u)) + 4u * (18u * TM3_DRAFT_U32(4u * (r_u32(0x800d2e88u) - 1u) + 0x800d2e88u + 116u) + 1u);
    sub_8005BE34(TM3_DRAFT_U16(v2));
    v3 = TM3_DRAFT_U16(v2 + 4);
    TM3_DRAFT_U16(0x80089E02u) = TM3_DRAFT_U16(v2 + 6);
    TM3_DRAFT_U16(0x80089E00u) = v3;
    if (TM3_DRAFT_U32(0x800D2F20u) == 2)
        v4 = (uint16)TM3_DRAFT_U16(0x80089E02u) >> 1;
    else
        v4 = 4 * (uint16)TM3_DRAFT_U16(0x80089E02u) / 5;
    v5 = 0;
    sub_8005BE14(v3 >> 1, v4);
    v6 = a1;
    do
    {
        v7 = 320;
        if (!v5)
            v7 = 0;
        TM3_DRAFT_U32(v6) = v5;
        sub_800572E4((int)(original_local_address + 24u), v7, 0, 320, 240);
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
        sub_80058678(v6 + 24, (uint32)(original_local_address + 24u));
        v9 = 0;
        if (TM3_DRAFT_I32(0x800D2E88u) > 0)
        {
            v10 = 0;
            v11 = v2;
            do
            {
                sub_800572E4((int)(original_local_address + 24u), TM3_DRAFT_U16(v11 + 8) + v7, TM3_DRAFT_U16(v11 + 10), TM3_DRAFT_U16(0x80089E00u), (uint16)TM3_DRAFT_U16(0x80089E02u));
                TM3_DRAFT_I8(original_local_address + 48u) = 1;
                TM3_DRAFT_I8(original_local_address + 47u) = 0;
                TM3_DRAFT_I16(original_local_address + 36u) = 0;
                TM3_DRAFT_I16(original_local_address + 38u) = 0;
                TM3_DRAFT_I16(original_local_address + 40u) = 0;
                TM3_DRAFT_I16(original_local_address + 42u) = 0;
                TM3_DRAFT_I8(original_local_address + 46u) = TM3_DRAFT_U8(0x800D2EF0u);
                sub_8003E190((original_local_address + 49u), (original_local_address + 50u), (original_local_address + 51u));
                sub_80058678(v6 + v10 + 138376, (uint32)(original_local_address + 24u));
                if (TM3_DRAFT_U8(v2 + 3))
                {
                    sub_800572E4((int)(original_local_address + 24u), TM3_DRAFT_I16(v11 + 20) + v7, TM3_DRAFT_I16(v11 + 22), TM3_DRAFT_U16(0x80089E00u), (uint16)TM3_DRAFT_U16(0x80089E02u));
                    TM3_DRAFT_I8(original_local_address + 48u) = 1;
                    TM3_DRAFT_I8(original_local_address + 49u) = 0;
                    TM3_DRAFT_I8(original_local_address + 50u) = 0;
                    (*(char(*)[69])psx_addr(original_local_address + 51u, sizeof(char[69])))[0] = 0;
                }
                else
                {
                    TM3_DRAFT_I8(original_local_address + 48u) = 0;
                }
                sub_80058678(v6 + v10 + 138376 + 64, (uint32)(original_local_address + 24u));
                v10 += 1728;
                ++v9;
                v11 += 4u * (4);
            } while (v9 < TM3_DRAFT_I32(0x800D2E88u));
        }
        v6 += 145288;
        result = ++v5 < 2;
    } while (v5 < 2);
    return result;
}

/* Unverified draft; TODO items require later review */
uint32 sub_80018054(uint32 vehicle)
{
    FUNCTION_MARKER(0x80018054u, "SCUS_942.49");
    uint32 target, amplitude, phase;
    if (r_s32(vehicle + 4392u) > 0)
    {
        w_u32(vehicle + 4388u, 682u);
        target = r_u32(vehicle + 4396u);
        w_u32(vehicle + 3952u, 0u);
        w_u32(vehicle + 4392u, r_u32(vehicle + 4392u) - 1u);
        if (target && sub_800470DC(target))
        {
            uint32 distance = sub_80015764(r_u32(target + 1556u) - r_u32(vehicle + 1556u), r_u32(target + 1560u) - r_u32(vehicle + 1560u), r_u32(target + 1564u) - r_u32(vehicle + 1564u));
            if ((sint32)distance < 1025 && sub_800239C0(target, vehicle, 15u, 0u, 0x80087E70u, r_u32(0x8007FE8Cu + (r_u32(vehicle + 3928u) << 2))))
            {
                uint32 position[4], matrix[8], flags;
                sint16 axis[4], target_axis[4];
                uint32 position_address = TM3_DRAFT_LOCAL_ADDRESS(position, sizeof(position));
                uint32 matrix_address = TM3_DRAFT_LOCAL_ADDRESS(matrix, sizeof(matrix));
                uint32 axis_address = TM3_DRAFT_LOCAL_ADDRESS(axis, sizeof(axis));
                uint32 target_axis_address = TM3_DRAFT_LOCAL_ADDRESS(target_axis, sizeof(target_axis));
                uint32 flags_address = TM3_DRAFT_LOCAL_ADDRESS(&flags, sizeof(flags));
                phase = r_u32(vehicle + 4384u);
                uint32 sine = sub_8005AF24((uint32)((sint32)(((phase * 3u) << 11) + 2048u) >> 12));
                uint32 scaled = (uint32)((sint32)((sine * 51u << 2) + 2048u) >> 12);
                w_u32(vehicle + 4388u, r_u32(vehicle + 4388u) - 204u + scaled);
                uint32 node = sub_80025F98(vehicle, 0u, 4u);
                sub_8005BD24(vehicle + 1536u);
                sub_8005BDB4(vehicle + 1536u);
                sub_8005C3C4(node + 16u, position_address, flags_address);
                axis[0] = r_s16(vehicle + 1540u);
                axis[1] = r_s16(vehicle + 1546u);
                axis[2] = r_s16(vehicle + 1552u);
                /* TODO: Original SVECTOR padding is unspecified */
                sub_80014EDC(position_address, axis_address, r_u32(vehicle + 4388u), matrix_address);
                target = r_u32(vehicle + 4396u);
                sub_8005B504(matrix_address, target + 1536u, target + 1536u);
                sub_80015298(r_u32(vehicle + 4396u) + 1536u);
                target = r_u32(vehicle + 4396u);
                target_axis[0] = r_s16(target + 1538u);
                target_axis[1] = r_s16(target + 1544u);
                target_axis[2] = r_s16(target + 1550u);
                sint32 extent = r_s16(target + 1018u);
                sub_80014080(target + 1556u, (uint32)(extent / 2), target_axis_address, position_address);
                sub_80023B38(r_u32(vehicle + 4396u));
                sub_80023BFC(r_u32(vehicle + 4396u));
            }
            else
                w_u32(vehicle + 4396u, 0u);
        }
        amplitude = r_u32(vehicle + 4388u);
        sub_80038AFC(r_u32(vehicle + 4400u), (uint32)((sint32)(((amplitude * 3u) << 10) + 2048u) >> 12) + 1536u);
    }
    else
    {
        if (r_u32(vehicle + 4396u))
            w_u32(vehicle + 4396u, 0u);
        amplitude = r_u32(vehicle + 4388u);
        if ((sint32)amplitude > 0)
        {
            sub_80038AFC(r_u32(vehicle + 4400u), (uint32)((sint32)(((amplitude * 3u) << 10) + 2048u) >> 12) + 1536u);
            uint32 difference = 8u - r_u32(vehicle + 4388u);
            w_u32(vehicle + 4388u, 0u - (difference & (uint32)((sint32)difference >> 31)));
        }
        else if (r_u32(vehicle + 4400u))
        {
            sub_8004A570(r_u32(vehicle + 4400u));
            w_u32(vehicle + 4400u, 0u);
        }
    }
    phase = (r_u32(vehicle + 4384u) + r_u32(vehicle + 4388u)) & 4095u;
    w_u32(vehicle + 4384u, phase);
    return phase;
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
    if (v3 == 8)
        v4 = 80;
    sub_8006760C(v4);
    v5 = TM3_DRAFT_U32(0x80087DECu);
    v6 = 4099;
    if (TM3_DRAFT_U32(0x80087DECu))
        v6 = 12291;
    TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 10) = v6;
    v7 = TM3_DRAFT_U32(0x80087E04u + 4u * (v5));
    if (v7 >= 0)
    {
        if (v7 > 0)
        {
            do
            {
                v8 = (0x80087E04u + 4u * (TM3_DRAFT_U32(0x80087DECu)));
                v9 = TM3_DRAFT_U32(v8) - 1;
                TM3_DRAFT_U32(v8) = v9;
                tm3_draft_indirect(TM3_DRAFT_U32(0x80087DCCu), 1u, TM3_DRAFT_U32(a1 + 12) + 240 * v9);
            } while (TM3_DRAFT_U32(0x80087E04u + 4u * (TM3_DRAFT_U32(0x80087DECu))) > 0);
        }
        v10 = (0x80087E04u + 4u * (TM3_DRAFT_U32(0x80087DECu)));
        if (!TM3_DRAFT_U32(v10))
        {
            v11 = (uint32)TM3_DRAFT_U32(0x80087DCCu);
            TM3_DRAFT_U32(v10) = -1;
            tm3_draft_indirect(v11, 1u, a1) /* TODO: Guest callback adapter */;
            tm3_draft_indirect(TM3_DRAFT_U32(0x80087DD0u), 1u, a1);
        }
    }
    v12 = TM3_DRAFT_U32(0x80087E10u);
    if ((TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 4) & 0x200) == 0)
        goto LABEL_24;
    TM3_DRAFT_U16(TM3_DRAFT_U32(0x80087E10u) + 10) |= 0x10u;
    if ((TM3_DRAFT_U16(v12 + 4) & 0x200) == 0)
    {
        TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) = -129;
    LABEL_24:
        result = 1;
        if (TM3_DRAFT_U8(a1 + 80))
            return TM3_DRAFT_U8(a1 + 55) == 0;
        return result;
    }
    while (!sub_8006762C())
        ;
    TM3_DRAFT_U8(TM3_DRAFT_U32(0x80087E10u)) = 1;
    sub_8006760C(100);
    v13 = sub_80065028() == 0;
    result = 0;
    if (!v13)
    {
        sub_800650B8();
        sub_8006760C(430);
        while ((TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) & 0x80) == 0)
        {
            v13 = sub_8006762C();
            result = 0;
            if (v13)
                return result;
        }
        TM3_DRAFT_U8(TM3_DRAFT_U32(0x80087E10u)) = 66;
        sub_8006760C(60);
        v13 = sub_80065028() == 0;
        result = 0;
        if (!v13)
        {
            sub_800650B8();
            sub_8006760C(430);
            while ((TM3_DRAFT_U32(TM3_DRAFT_U32(0x80087E0Cu)) & 0x80) == 0)
            {
                v13 = sub_8006762C();
                result = 0;
                if (v13)
                    return result;
            }
            TM3_DRAFT_U8(TM3_DRAFT_U32(0x80087E10u)) = 1;
            sub_8006760C(60);
            v13 = sub_80065028() == 0;
            result = 0;
            if (!v13)
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
    uint32 point[3];
    sint32 scale[3];
    sint16 plane[3] = {0, 0, 0};
    uint32 axis;
    uint32 selected;
    FUNCTION_MARKER(0x80021E44u, "SCUS_942.49");

    for (axis = 0; axis < 3u; ++axis)
        point[axis] = TM3_DRAFT_U32(a2 + 4u * axis);
    for (axis = 0; axis < 3u; ++axis)
        scale[axis] = TM3_DRAFT_I32(0x80088020u + 4u * axis);
    if (a1)
        for (axis = 0; axis < 3u; ++axis)
            point[axis] += (uint32)(sint32)TM3_DRAFT_I16(a1 + 2u * axis);

    for (axis = 0; axis < 3u; ++axis)
    {
        sint32 velocity = TM3_DRAFT_I32(a2 + 4u * axis);
        sint32 boundary;
        uint32 boundary_address;
        sint32 numerator;
        if (!velocity)
            continue;
        boundary_address = a3 + 2u * axis;
        boundary = TM3_DRAFT_I16(boundary_address);
        if ((sint32)point[axis] < boundary)
            plane[axis] = (sint16)(axis + 3u);
        else
        {
            boundary_address = a4 + 2u * axis;
            boundary = TM3_DRAFT_I16(boundary_address);
            if (boundary >= (sint32)point[axis])
                continue;
            plane[axis] = (sint16)axis;
        }
        TM3_DRAFT_U32(a5 + 4u * axis) = (uint32)boundary;
        numerator = (sint32)((point[axis] - (uint32)(sint32)TM3_DRAFT_I16(boundary_address)) << 18);
        scale[axis] = numerator == (sint32)0x80000000u && velocity == -1 ? (sint32)0x80000000u : numerator / velocity;
    }
    selected = scale[1] >= scale[0] ? 1u : 0u;
    if (scale[2] >= scale[selected])
        selected = 2u;
    for (axis = 0; axis < 3u; ++axis)
    {
        if (axis != selected)
        {
            uint32 product = (uint32)scale[selected] * TM3_DRAFT_U32(a2 + 4u * axis);
            sint32 displacement = (sint32)(product + 0x20000u) >> 18;
            TM3_DRAFT_U32(a5 + 4u * axis) = point[axis] - (uint32)displacement;
        }
    }
    return (uint32)(sint32)plane[selected];
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
    if (v7 >= v6)
        v7 = 0;
    v8 = (TM3_DRAFT_U8(a1 + 320) << 16) | (TM3_DRAFT_U8(a1 + 319) << 8) | TM3_DRAFT_U8(a1 + 318);
    result = v6 - 1;
    v10 = 0;
    if (v6 - 1 > 0)
    {
        v11 = 6 * v7 + a1;
        do
        {
            TM3_DRAFT_I32(original_local_address + 32u) = TM3_DRAFT_U32(v11 + 168);
            LOWORD(TM3_DRAFT_I32(original_local_address + 36u)) = TM3_DRAFT_U16(v11 + 172);
            TM3_DRAFT_I32(original_local_address + 48u) = TM3_DRAFT_U32(v11 + 268);
            LOWORD(TM3_DRAFT_U32(original_local_address + 52u)) = TM3_DRAFT_U16(v11 + 272);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[0] = TM3_DRAFT_U16(v11 + 268);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[1] = TM3_DRAFT_U16(v11 + 270);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[2] = TM3_DRAFT_U16(v11 + 272);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[8] = TM3_DRAFT_U16(v11 + 218);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[9] = TM3_DRAFT_U16(v11 + 220);
            ++v7;
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[10] = TM3_DRAFT_U16(v11 + 222);
            v11 += 6;
            if (v7 >= TM3_DRAFT_U8(a1 + 316))
            {
                v11 = a1;
                v7 = 0;
            }
            TM3_DRAFT_I32(original_local_address + 40u) = TM3_DRAFT_U32(v11 + 168);
            LOWORD(TM3_DRAFT_I32(original_local_address + 44u)) = TM3_DRAFT_U16(v11 + 172);
            TM3_DRAFT_I32(original_local_address + 56u) = TM3_DRAFT_U32(v11 + 268);
            TM3_DRAFT_I16(original_local_address + 60u) = TM3_DRAFT_U16(v11 + 272);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[4] = TM3_DRAFT_U16(v11 + 268);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[5] = TM3_DRAFT_U16(v11 + 270);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[6] = TM3_DRAFT_U16(v11 + 272);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[12] = TM3_DRAFT_U16(v11 + 218);
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[13] = TM3_DRAFT_U16(v11 + 220);
            v12 = TM3_DRAFT_U16(v11 + 222);
            coordinates[1] += v8;
            coordinates[3] = coordinates[1];
            (*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16])))[14] = v12;
            sub_8002A940(TM3_DRAFT_LOCAL_ADDRESS((*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16]))), sizeof((*(sint16(*)[16])psx_addr(original_local_address + 64u, sizeof(sint16[16]))))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS(&coordinates[0], sizeof(coordinates[0])) /* TODO: Local buffer adapter */, a2, a3, 1, a4, 64);
            sub_8002A940((int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 32u), sizeof(TM3_DRAFT_I32(original_local_address + 32u))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS(&coordinates[0], sizeof(coordinates[0])) /* TODO: Local buffer adapter */, a2, a3, 1, a4, 64);
            coordinates[0] += v8;
            coordinates[2] = coordinates[0];
            result = ++v10 < TM3_DRAFT_U8(a1 + 316) - 1;
        } while (v10 < TM3_DRAFT_U8(a1 + 316) - 1);
    }
    return result;
}

/* Unverified draft; TODO items require later review */
uint32 sub_80041FA4(uint32 descriptor, uint32 polygons, uint32 vertices, uint32 ordering_table, uint32 cursor_address, uint32 end)
{
    uint32 cursor, available, polygon_count, difference, scratch, polygon;
    uint32 projected[3], fourth, type, double_sided, packet_words, packet_bytes;
    sint32 remaining, clip_first, clip_second;
    unsigned index;
    FUNCTION_MARKER(0x80041FA4u, "SCUS_942.49");
    cursor = TM3_DRAFT_U32(cursor_address);
    available = (end - cursor) / 36u;
    polygon_count = TM3_DRAFT_U8(descriptor + 1u);
    difference = polygon_count - available;
    polygon_count = available + (difference & (uint32)((sint32)difference >> 31));
    remaining = TM3_DRAFT_U8(descriptor);
    polygons += TM3_DRAFT_U32(descriptor + 4u);
    vertices += 8u * TM3_DRAFT_U16(descriptor + 2u);
    scratch = 0x1F7FFFF4u;
    while (remaining > 0)
    {
        for (index = 0; index < 6; ++index)
            xport_gte_write_data(index, TM3_DRAFT_U32(vertices + 4u * index));
        scratch += 12u;
        tm3_draft_gte_command(0x280030u);
        remaining -= 3;
        vertices += 24u;
        for (index = 0; index < 3; ++index)
            TM3_DRAFT_U32(scratch + 4u * index) = xport_gte_read_data(12u + index);
    }
    for (index = 0; (sint32)index < (sint32)polygon_count; ++index, polygons += 20u)
    {
        polygon = polygons;
        projected[0] = TM3_DRAFT_U32(0x1F800000u + 4u * TM3_DRAFT_U8(polygon + 4u));
        projected[1] = TM3_DRAFT_U32(0x1F800000u + 4u * TM3_DRAFT_U8(polygon + 5u));
        projected[2] = TM3_DRAFT_U32(0x1F800000u + 4u * TM3_DRAFT_U8(polygon + 6u));
        xport_gte_write_data(12u, projected[0]);
        xport_gte_write_data(13u, projected[1]);
        xport_gte_write_data(14u, projected[2]);
        type = TM3_DRAFT_U8(polygon + 3u);
        double_sided = TM3_DRAFT_U8(polygon + 15u);
        if (type == 0x38u)
        {
            TM3_DRAFT_U32(cursor + 8u) = projected[0];
            tm3_draft_gte_command(0x1400006u);
            TM3_DRAFT_U32(cursor + 16u) = projected[1];
            TM3_DRAFT_U32(cursor + 24u) = projected[2];
            clip_first = (sint32)xport_gte_read_data(24u);
            fourth = TM3_DRAFT_U32(0x1F800000u + 4u * TM3_DRAFT_U8(polygon + 7u));
            xport_gte_write_data(12u, fourth);
            tm3_draft_gte_command(0x1400006u);
            clip_second = (sint32)xport_gte_read_data(24u);
            if (!double_sided && clip_second > 0 && clip_first <= 0)
                continue;
            TM3_DRAFT_U32(cursor + 32u) = fourth;
            TM3_DRAFT_U32(cursor + 4u) = TM3_DRAFT_U32(polygon);
            TM3_DRAFT_U32(cursor + 12u) = TM3_DRAFT_U32(polygon + 8u);
            TM3_DRAFT_U32(cursor + 20u) = TM3_DRAFT_U32(polygon + 12u);
            TM3_DRAFT_U32(cursor + 28u) = TM3_DRAFT_U32(polygon + 16u);
            packet_words = 8u;
            packet_bytes = 36u;
        }
        else if (type == 0x30u)
        {
            tm3_draft_gte_command(0x1400006u);
            clip_first = (sint32)xport_gte_read_data(24u);
            if (!double_sided && clip_first <= 0)
                continue;
            TM3_DRAFT_U32(cursor + 8u) = projected[0];
            TM3_DRAFT_U32(cursor + 16u) = projected[1];
            TM3_DRAFT_U32(cursor + 24u) = projected[2];
            TM3_DRAFT_U32(cursor + 4u) = TM3_DRAFT_U32(polygon);
            TM3_DRAFT_U32(cursor + 12u) = TM3_DRAFT_U32(polygon + 8u);
            TM3_DRAFT_U32(cursor + 20u) = TM3_DRAFT_U32(polygon + 12u);
            packet_words = 6u;
            packet_bytes = 28u;
        }
        else
        {
            /* TODO Original unknown encodings retain unspecified incoming S0 and T9 */
            /* The packet size carries over after a previously accepted polygon */
        }
        TM3_DRAFT_U32(cursor) = (TM3_DRAFT_U32(ordering_table) & 0xFFFFFFu) | (packet_words << 24);
        TM3_DRAFT_U32(ordering_table) = cursor & 0xFFFFFFu;
        cursor += packet_bytes;
    }
    TM3_DRAFT_U32(cursor_address) = cursor;
    /* The render caller ignores the original volatile return carrier */
    return 0;
}

/* Unverified draft; TODO items require later review */
uint32 sub_800277CC(uint32 a1, uint32 a2)
{
    uint32 kind = TM3_DRAFT_U32(a2);
    uint32 position = TM3_DRAFT_U32(a2 + 4u);
    uint32 direction = TM3_DRAFT_U32(a2 + 8u);
    uint32 size = TM3_DRAFT_U32(a2 + 12u);
    uint32 variant = TM3_DRAFT_U32(a2 + 16u);
    sint32 sound_owner = TM3_DRAFT_I32(a2 + 20u);
    uint32 lifetime = TM3_DRAFT_U32(a2 + 24u);
    sint16 velocity[3];
    uint32 value;
    uint32 delta;
    FUNCTION_MARKER(0x800277CCu, "SCUS_942.49");

    TM3_DRAFT_U16(a1 + 8u) = TM3_DRAFT_U16(position);
    TM3_DRAFT_U16(a1 + 12u) = TM3_DRAFT_U16(position + 4u);
    if (kind == 0u || kind == 2u || kind == 4u)
        TM3_DRAFT_U16(a1 + 10u) = TM3_DRAFT_U16(position + 2u);
    else
    {
        sint32 half_size = (sint32)(size + (size >> 31u)) >> 1;
        TM3_DRAFT_U16(a1 + 10u) = TM3_DRAFT_U16(position + 2u) - (uint32)half_size;
    }
    TM3_DRAFT_U16(a1 - 20u) = TM3_DRAFT_U16(a1 + 8u);
    TM3_DRAFT_U16(a1 - 18u) = TM3_DRAFT_U16(a1 + 10u);
    TM3_DRAFT_U16(a1 - 16u) = TM3_DRAFT_U16(a1 + 12u);
    if (direction)
    {
        for (uint32 index = 0u; index < 3u; ++index)
            velocity[index] = TM3_DRAFT_I16(direction + 2u * index);
    }
    else
    {
        velocity[0] = 0;
        velocity[1] = -256;
        velocity[2] = 0;
    }
    TM3_DRAFT_U16(a1) = (136 * velocity[0] + 2048) >> 12;
    TM3_DRAFT_U16(a1 + 2u) = (136 * velocity[1] + 2048) >> 12;
    TM3_DRAFT_U16(a1 + 14u) = 0;
    TM3_DRAFT_U16(a1 + 4u) = (136 * velocity[2] + 2048) >> 12;
    if (sound_owner == -2)
        TM3_DRAFT_U16(a1 + 16u) = 0xffffu;
    else
    {
        uint32 sound_entry = 0x8007DFB8u + 4u * (9u * kind + variant);
        sint32 sound;
        TM3_DRAFT_U16(a1 + 16u) = TM3_DRAFT_U16(sound_entry);
        sound = TM3_DRAFT_I16(a1 + 16u);
        TM3_DRAFT_U16(a1 + 18u) = TM3_DRAFT_U16(sound_entry + 2u);
        if (sound != -1)
        {
            if (sound_owner == -1)
                sub_8004A294(22u, (uint32)sound, 22u, (uint32)(sint32)TM3_DRAFT_I16(position), (uint32)(sint32)TM3_DRAFT_I16(position + 2u), (uint32)(sint32)TM3_DRAFT_I16(position + 4u), (uint32)(sint32)TM3_DRAFT_I16(a1 + 18u));
            else
                sub_8004A294(22u, (uint32)sound, 30u, (uint32)(sint32)TM3_DRAFT_I16(position), (uint32)(sint32)TM3_DRAFT_I16(position + 2u), (uint32)(sint32)TM3_DRAFT_I16(position + 4u), (uint32)(sint32)TM3_DRAFT_I16(a1 + 18u), (uint32)sound_owner);
        }
    }
    delta = 1u - lifetime;
    value = 1u - (delta & (uint32)((sint32)delta >> 31));
    delta = value - 30u;
    lifetime = 30u + (delta & (uint32)((sint32)delta >> 31));
    TM3_DRAFT_U16(a1 + 20u) = size;
    TM3_DRAFT_U16(a1 + 22u) = size;
    TM3_DRAFT_U32(a1 + 28u) = TM3_DRAFT_U32(0x80089CE8u) + 104u * kind;
    TM3_DRAFT_U32(a1 + 24u) = TM3_DRAFT_U32(0x8007E090u + 4u * kind);
    TM3_DRAFT_U8(a1 + 27u) = 0;
    TM3_DRAFT_U16(a1 + 6u) = 30 / (sint32)lifetime;
    return 1u;
}
