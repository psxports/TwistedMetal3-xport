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
uint32 sub_80027B00(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80027B00u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[80];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_80027B00;
    temp_a1 = a1;
    temp_a2 = a2;
    temp_a3 = a3;
    *(uint32 *)(local_storage + 64) = a4;
label_80027b00:  goto label_80027b04;
label_80027b04: temp_t0 = (temp_a0 + 0u); goto label_80027b08;
label_80027b08: temp_t1 = (temp_a1 + 0u); goto label_80027b0c;
label_80027b0c:  goto label_80027b10;
label_80027b10: temp_a0 = TM3_DRAFT_U32(temp_t0 + (uint32)(28)); goto label_80027b14;
label_80027b14: temp_v1 = TM3_DRAFT_U8(temp_t0 + (uint32)(27)); goto label_80027b18;
label_80027b18: temp_v0 = TM3_DRAFT_I16(temp_a0 + (uint32)(0)); goto label_80027b1c;
label_80027b1c:  goto label_80027b20;
label_80027b20: temp_v0 = ((sint32)temp_v1 < (sint32)temp_v0); goto label_80027b24;
label_80027b24: condition_value = (temp_v0 == 0u); temp_t2 = (temp_a2 + 0u); if (condition_value) goto label_80027b64; goto label_80027b2c;
label_80027b28: temp_t2 = (temp_a2 + 0u); goto label_80027b2c;
label_80027b2c: temp_v0 = (uint32)(temp_v1 << 2); goto label_80027b30;
label_80027b30: temp_v0 = (temp_a0 + temp_v0); goto label_80027b34;
label_80027b34: temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(8)); goto label_80027b38;
label_80027b38: temp_a1 = TM3_DRAFT_I16(temp_t0 + (uint32)(20)); goto label_80027b3c;
label_80027b3c: temp_a2 = TM3_DRAFT_I16(temp_t0 + (uint32)(22)); goto label_80027b40;
label_80027b40: temp_v0 = 0u + (uint32)(1); goto label_80027b44;
label_80027b44: *(uint32 *)(local_storage + 20) = (uint32)temp_t1; goto label_80027b48;
label_80027b48: *(uint32 *)(local_storage + 24) = (uint32)temp_t2; goto label_80027b4c;
label_80027b4c: *(uint32 *)(local_storage + 28) = (uint32)temp_v0; goto label_80027b50;
label_80027b50: *(uint32 *)(local_storage + 32) = (uint32)temp_a3; goto label_80027b54;
label_80027b54: *(uint32 *)(local_storage + 16) = (uint32)temp_v1; goto label_80027b58;
label_80027b58: temp_a3 = TM3_DRAFT_U32(temp_t0 + (uint32)(24)); goto label_80027b5c;
label_80027b5c: temp_a0 = temp_t0 + (uint32)(8); temp_v0 = sub_8002A190(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20), *(uint32 *)(local_storage + 24), *(uint32 *)(local_storage + 28), *(uint32 *)(local_storage + 32)); goto label_80027b64;
label_80027b60: temp_a0 = temp_t0 + (uint32)(8); goto label_80027b64;
label_80027b64:  goto label_80027b68;
label_80027b68:  goto label_80027b6c;
label_80027b6c:  return temp_v0;
label_80027b70:  return temp_v0;
}
