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
uint32 sub_80030EF4(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80030EF4u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[64];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_80030EF4;
    temp_a1 = a1;
    temp_a2 = a2;
label_80030ef4:  goto label_80030ef8;
label_80030ef8: temp_a3 = (temp_a1 + 0u); goto label_80030efc;
label_80030efc: temp_v0 = 0u + (uint32)(-1); goto label_80030f00;
label_80030f00: temp_a0 = temp_a0 + (uint32)(8); goto label_80030f04;
label_80030f04: temp_a1 = (0u + 0u); goto label_80030f08;
label_80030f08: temp_a2 = 0u + (uint32)(256); goto label_80030f0c;
label_80030f0c:  goto label_80030f10;
label_80030f10: *(uint32 *)(local_storage + 16) = (uint32)0u; goto label_80030f14;
label_80030f14: *(uint32 *)(local_storage + 20) = (uint32)temp_v0; temp_v0 = sub_800276AC(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20)); goto label_80030f1c;
label_80030f18: *(uint32 *)(local_storage + 20) = (uint32)temp_v0; goto label_80030f1c;
label_80030f1c:  goto label_80030f20;
label_80030f20:  goto label_80030f24;
label_80030f24:  return temp_v0;
label_80030f28:  return temp_v0;
}
