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
uint32 sub_80038444(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80038444u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[64];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_80038444;
    temp_a1 = a1;
    temp_a2 = a2;
    temp_a3 = a3;
    *(uint32 *)(local_storage + 48) = a4;
label_80038444:  goto label_80038448;
label_80038448: temp_v0 = (temp_a0 + 0u); goto label_8003844c;
label_8003844c: temp_v1 = (temp_a1 + 0u); goto label_80038450;
label_80038450: temp_t0 = (temp_a2 + 0u); goto label_80038454;
label_80038454: temp_a0 = temp_v0 + (uint32)(4); goto label_80038458;
label_80038458: temp_a1 = temp_v0 + (uint32)(12); goto label_8003845c;
label_8003845c: temp_a2 = (temp_v1 + 0u); goto label_80038460;
label_80038460: *(uint32 *)(local_storage + 16) = (uint32)temp_a3; goto label_80038464;
label_80038464:  goto label_80038468;
label_80038468: temp_a3 = (temp_t0 + 0u); temp_v0 = sub_80038398(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16)); goto label_80038470;
label_8003846c: temp_a3 = (temp_t0 + 0u); goto label_80038470;
label_80038470:  goto label_80038474;
label_80038474:  goto label_80038478;
label_80038478:  return temp_v0;
label_8003847c:  return temp_v0;
}
