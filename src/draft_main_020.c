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
uint32 sub_800522BC(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800522BCu, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[72];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_800522BC;
    temp_a1 = a1;
    temp_a2 = a2;
    temp_a3 = a3;
label_800522bc:  goto label_800522c0;
label_800522c0: temp_v0 = 0x80090000u; goto label_800522c4;
label_800522c4: temp_v0 = temp_v0 + (uint32)(-26344); goto label_800522c8;
label_800522c8: *(uint32 *)(local_storage + 16) = (uint32)temp_v0; goto label_800522cc;
label_800522cc: temp_v0 = 0x800d0000u; goto label_800522d0;
label_800522d0: temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(10588)); goto label_800522d4;
label_800522d4: temp_v0 = 0u + (uint32)(3); goto label_800522d8;
label_800522d8: *(uint32 *)(local_storage + 24) = (uint32)temp_v0; goto label_800522dc;
label_800522dc: temp_v0 = 0x80050000u; goto label_800522e0;
label_800522e0: temp_a1 = (temp_a2 + 0u); goto label_800522e4;
label_800522e4: temp_a2 = temp_v0 + (uint32)(8892); goto label_800522e8;
label_800522e8: temp_a3 = 0u + (uint32)(2); goto label_800522ec;
label_800522ec:  goto label_800522f0;
label_800522f0: *(uint32 *)(local_storage + 28) = (uint32)0u; goto label_800522f4;
label_800522f4: *(uint32 *)(local_storage + 20) = (uint32)temp_v1; temp_v0 = sub_8004E9B8(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20), *(uint32 *)(local_storage + 24), *(uint32 *)(local_storage + 28)); goto label_800522fc;
label_800522f8: *(uint32 *)(local_storage + 20) = (uint32)temp_v1; goto label_800522fc;
label_800522fc:  goto label_80052300;
label_80052300:  goto label_80052304;
label_80052304:  return temp_v0;
label_80052308:  return temp_v0;
}
