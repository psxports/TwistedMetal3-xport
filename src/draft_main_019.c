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
uint32 sub_8004B5DC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004B5DCu, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[72];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_8004B5DC;
    temp_a1 = a1;
    temp_a2 = a2;
label_8004b5dc:  goto label_8004b5e0;
label_8004b5e0:  goto label_8004b5e4;
label_8004b5e4: temp_s1 = (temp_a1 + 0u); goto label_8004b5e8;
label_8004b5e8:  goto label_8004b5ec;
label_8004b5ec:  goto label_8004b5f0;
label_8004b5f0: temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(0)); goto label_8004b5f4;
label_8004b5f4: temp_s0 = (temp_a0 + 0u); goto label_8004b5f8;
label_8004b5f8: condition_value = (temp_v0 == temp_s0); temp_v0 = (0u + 0u); if (condition_value) goto label_8004b624; goto label_8004b600;
label_8004b5fc: temp_v0 = (0u + 0u); goto label_8004b600;
label_8004b600: temp_a1 = (0u + 0u); temp_v0 = sub_8004B500(temp_a0, temp_a1); goto label_8004b608;
label_8004b604: temp_a1 = (0u + 0u); goto label_8004b608;
label_8004b608: temp_a0 = (temp_s0 + 0u); goto label_8004b60c;
label_8004b60c: temp_a1 = (0u + 0u); goto label_8004b610;
label_8004b610: temp_a2 = TM3_DRAFT_U16(temp_s1 + (uint32)(18)); goto label_8004b614;
label_8004b614: temp_a3 = (temp_a1 + 0u); goto label_8004b618;
label_8004b618: *(uint32 *)(local_storage + 16) = (uint32)0u; temp_v0 = sub_800239C0(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20), *(uint32 *)(local_storage + 24), *(uint32 *)(local_storage + 28), *(uint32 *)(local_storage + 32), *(uint32 *)(local_storage + 36)); goto label_8004b620;
label_8004b61c: *(uint32 *)(local_storage + 16) = (uint32)0u; goto label_8004b620;
label_8004b620: temp_v0 = 0u + (uint32)(1); goto label_8004b624;
label_8004b624:  goto label_8004b628;
label_8004b628:  goto label_8004b62c;
label_8004b62c:  goto label_8004b630;
label_8004b630:  return temp_v0;
label_8004b634:  return temp_v0;
}
