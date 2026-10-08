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
uint32 sub_80054E34(uint32 a1)
{
    FUNCTION_MARKER(0x80054E34u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[64];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_80054E34;
    temp_a1 = a1;
label_80054e34:  goto label_80054e38;
label_80054e38: temp_a3 = (temp_a0 + 0u); goto label_80054e3c;
label_80054e3c: temp_v0 = 0u + (uint32)(1); goto label_80054e40;
label_80054e40: temp_a0 = (0u + 0u); goto label_80054e44;
label_80054e44: temp_a1 = (temp_a0 + 0u); goto label_80054e48;
label_80054e48: temp_a2 = (temp_v0 + 0u); goto label_80054e4c;
label_80054e4c:  goto label_80054e50;
label_80054e50: *(uint32 *)(local_storage + 16) = (uint32)temp_v0; temp_v0 = sub_80054C60(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20), *(uint32 *)(local_storage + 24), *(uint32 *)(local_storage + 28), *(uint32 *)(local_storage + 32), *(uint32 *)(local_storage + 36), *(uint32 *)(local_storage + 40), *(uint32 *)(local_storage + 44), *(uint32 *)(local_storage + 48)); goto label_80054e58;
label_80054e54: *(uint32 *)(local_storage + 16) = (uint32)temp_v0; goto label_80054e58;
label_80054e58:  goto label_80054e5c;
label_80054e5c:  goto label_80054e60;
label_80054e60:  return temp_v0;
label_80054e64:  return temp_v0;
}
