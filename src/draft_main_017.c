#include "game_draft_signatures.h"

/* Unverified listing-derived normal C control flow */
/* TODO Supply missing boundary and local buffer adapters during integration */
extern uint32 tm3_draft_local_address(const void *pointer, uint32 bytes);
extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

/* Unverified listing-derived control flow */
uint32 sub_8004B638(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004B638u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[104];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_8004B638;
    temp_a1 = a1;
    temp_a2 = a2;
label_8004b638:
    goto label_8004b63c;
label_8004b63c:
    goto label_8004b640;
label_8004b640:
    temp_s2 = (temp_a1 + 0u);
    goto label_8004b644;
label_8004b644:
    goto label_8004b648;
label_8004b648:
    goto label_8004b64c;
label_8004b64c:
    goto label_8004b650;
label_8004b650:
    goto label_8004b654;
label_8004b654:
    temp_v0 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_8004b658;
label_8004b658:
    temp_s3 = (temp_a0 + 0u);
    goto label_8004b65c;
label_8004b65c:
    condition_value = (temp_v0 == temp_s3);
    temp_a3 = (0u + 0u);
    if (condition_value)
        goto label_8004b6c0;
    goto label_8004b664;
label_8004b660:
    temp_a3 = (0u + 0u);
    goto label_8004b664;
label_8004b664:
    temp_s0 = TM3_DRAFT_U32(temp_s2 + (uint32)(60));
    goto label_8004b668;
label_8004b668:
    *(uint32 *)(local_storage + 16) = (uint32)0u;
    goto label_8004b66c;
label_8004b66c:
    temp_a1 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_8004b670;
label_8004b670:
    temp_s0 = temp_s0 + (uint32)(2048);
    goto label_8004b674;
label_8004b674:
    temp_s0 = (uint32)((sint32)temp_s0 >> 12);
    goto label_8004b678;
label_8004b678:
    temp_a2 = (temp_s0 + 0u);
    temp_v0 = sub_800239C0(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20), *(uint32 *)(local_storage + 24), *(uint32 *)(local_storage + 28), *(uint32 *)(local_storage + 32), *(uint32 *)(local_storage + 36));
    goto label_8004b680;
label_8004b67c:
    temp_a2 = (temp_s0 + 0u);
    goto label_8004b680;
label_8004b680:
    temp_s1 = local_base + (uint32)(32);
    goto label_8004b684;
label_8004b684:
    temp_a0 = (temp_s1 + 0u);
    goto label_8004b688;
label_8004b688:
    temp_a1 = (uint32)(temp_s0 << 3);
    goto label_8004b68c;
label_8004b68c:
    temp_v0 = TM3_DRAFT_I16(temp_s2 + (uint32)(8));
    goto label_8004b690;
label_8004b690:
    temp_v1 = TM3_DRAFT_I16(temp_s2 + (uint32)(14));
    goto label_8004b694;
label_8004b694:
    temp_a3 = TM3_DRAFT_I16(temp_s2 + (uint32)(20));
    goto label_8004b698;
label_8004b698:
    temp_a2 = local_base + (uint32)(24);
    goto label_8004b69c;
label_8004b69c:
    *(uint16 *)(local_storage + 24) = (uint16)temp_v0;
    goto label_8004b6a0;
label_8004b6a0:
    TM3_DRAFT_U16(temp_a2 + (uint32)(2)) = (uint16)temp_v1;
    goto label_8004b6a4;
label_8004b6a4:
    TM3_DRAFT_U16(temp_a2 + (uint32)(4)) = (uint16)temp_a3;
    temp_v0 = sub_80013F78(temp_a0, temp_a1, temp_a2);
    goto label_8004b6ac;
label_8004b6a8:
    TM3_DRAFT_U16(temp_a2 + (uint32)(4)) = (uint16)temp_a3;
    goto label_8004b6ac;
label_8004b6ac:
    temp_a0 = (temp_s3 + 0u);
    goto label_8004b6b0;
label_8004b6b0:
    temp_a1 = (temp_s1 + 0u);
    temp_v0 = sub_80033D4C(temp_a0, temp_a1);
    goto label_8004b6b8;
label_8004b6b4:
    temp_a1 = (temp_s1 + 0u);
    goto label_8004b6b8;
label_8004b6b8:
    temp_v0 = 0u + (uint32)(1);
    goto label_8004b6c4;
label_8004b6bc:
    temp_v0 = 0u + (uint32)(1);
    goto label_8004b6c0;
label_8004b6c0:
    temp_v0 = (0u + 0u);
    goto label_8004b6c4;
label_8004b6c4:
    goto label_8004b6c8;
label_8004b6c8:
    goto label_8004b6cc;
label_8004b6cc:
    goto label_8004b6d0;
label_8004b6d0:
    goto label_8004b6d4;
label_8004b6d4:
    goto label_8004b6d8;
label_8004b6d8:
    return temp_v0;
label_8004b6dc:
    return temp_v0;
}
