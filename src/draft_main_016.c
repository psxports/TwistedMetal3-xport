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
uint32 sub_80026E28(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80026E28u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[80];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_80026E28;
    temp_a1 = a1;
    temp_a2 = a2;
label_80026e28:  goto label_80026e2c;
label_80026e2c:  goto label_80026e30;
label_80026e30: temp_s0 = temp_a1 + (uint32)(4); goto label_80026e34;
label_80026e34:  goto label_80026e38;
label_80026e38:  goto label_80026e3c;
label_80026e3c: temp_a2 = TM3_DRAFT_U32(temp_s0 + (uint32)(-4)); goto label_80026e40;
label_80026e40: temp_s1 = (temp_a0 + 0u); goto label_80026e44;
label_80026e44: TM3_DRAFT_U32(temp_s1 + (uint32)(24)) = (uint32)temp_a2; goto label_80026e48;
label_80026e48: temp_v0 = TM3_DRAFT_U32(temp_a2 + (uint32)(-48)); goto label_80026e4c;
label_80026e4c:  goto label_80026e50;
label_80026e50: condition_value = (temp_v0 == 0u); temp_v0 = 0x80090000u; if (condition_value) goto label_80026e74; goto label_80026e58;
label_80026e54: temp_v0 = 0x80090000u; goto label_80026e58;
label_80026e58: temp_t2 = temp_v0 + (uint32)(-26912); goto label_80026e5c;
label_80026e5c: temp_a3 = TM3_DRAFT_U32(temp_t2 + (uint32)(0)); goto label_80026e60;
label_80026e60: temp_t0 = TM3_DRAFT_U32(temp_t2 + (uint32)(4)); goto label_80026e64;
label_80026e64: TM3_DRAFT_U32(temp_s1 + (uint32)(28)) = (uint32)temp_a3; goto label_80026e68;
label_80026e68: TM3_DRAFT_U32(temp_s1 + (uint32)(32)) = (uint32)temp_t0; goto label_80026e6c;
label_80026e6c: temp_s0 = temp_s0 + (uint32)(4); goto label_80026ec4;
label_80026e70: temp_s0 = temp_s0 + (uint32)(4); goto label_80026e74;
label_80026e74: temp_v1 = TM3_DRAFT_I8(temp_a2 + (uint32)(3328)); goto label_80026e78;
label_80026e78: temp_v0 = 0u + (uint32)(1); goto label_80026e7c;
label_80026e7c: condition_value = (temp_v1 != temp_v0); temp_v1 = 0x80080000u; if (condition_value) goto label_80026ea4; goto label_80026e84;
label_80026e80: temp_v1 = 0x80080000u; goto label_80026e84;
label_80026e84: temp_a0 = temp_s1 + (uint32)(28); goto label_80026e88;
label_80026e88: temp_a1 = 0x80090000u; goto label_80026e8c;
label_80026e8c: temp_a2 = TM3_DRAFT_U32(temp_a2 + (uint32)(3924)); goto label_80026e90;
label_80026e90: temp_a1 = temp_a1 + (uint32)(-32576); goto label_80026e94;
label_80026e94: temp_a2 = (temp_a2 + temp_v0); temp_v0 = sub_800496E0(temp_a0, temp_a1, temp_a2); goto label_80026e9c;
label_80026e98: temp_a2 = (temp_a2 + temp_v0); goto label_80026e9c;
label_80026e9c: temp_s0 = temp_s0 + (uint32)(4); goto label_80026ec4;
label_80026ea0: temp_s0 = temp_s0 + (uint32)(4); goto label_80026ea4;
label_80026ea4: temp_v0 = TM3_DRAFT_U32(temp_a2 + (uint32)(3928)); goto label_80026ea8;
label_80026ea8: temp_v1 = temp_v1 + (uint32)(-372); goto label_80026eac;
label_80026eac: temp_v0 = (uint32)(temp_v0 << 2); goto label_80026eb0;
label_80026eb0: temp_v0 = (temp_v0 + temp_v1); goto label_80026eb4;
label_80026eb4: temp_a1 = TM3_DRAFT_U32(temp_v0 + (uint32)(0)); goto label_80026eb8;
label_80026eb8: temp_a0 = temp_s1 + (uint32)(28); temp_v0 = tm3_draft_indirect(0x800567f4u, 2u, temp_a0, temp_a1); goto label_80026ec0;
label_80026ebc: temp_a0 = temp_s1 + (uint32)(28); goto label_80026ec0;
label_80026ec0: temp_s0 = temp_s0 + (uint32)(4); goto label_80026ec4;
label_80026ec4: temp_v0 = 0x80090000u; goto label_80026ec8;
label_80026ec8: temp_v0 = temp_v0 + (uint32)(-26904); goto label_80026ecc;
label_80026ecc: TM3_DRAFT_U32(temp_s1 + (uint32)(44)) = (uint32)temp_v0; goto label_80026ed0;
label_80026ed0: temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(-4)); goto label_80026ed4;
label_80026ed4:  goto label_80026ed8;
label_80026ed8: temp_v1 = TM3_DRAFT_I16(temp_v0 + (uint32)(0)); goto label_80026edc;
label_80026edc: temp_a0 = TM3_DRAFT_I16(temp_v0 + (uint32)(2)); goto label_80026ee0;
label_80026ee0: temp_a1 = TM3_DRAFT_I16(temp_v0 + (uint32)(4)); goto label_80026ee4;
label_80026ee4: temp_v0 = temp_s1 + (uint32)(8); goto label_80026ee8;
label_80026ee8: TM3_DRAFT_U16(temp_s1 + (uint32)(8)) = (uint16)temp_v1; goto label_80026eec;
label_80026eec: TM3_DRAFT_U16(temp_v0 + (uint32)(2)) = (uint16)temp_a0; goto label_80026ef0;
label_80026ef0: TM3_DRAFT_U16(temp_v0 + (uint32)(4)) = (uint16)temp_a1; goto label_80026ef4;
label_80026ef4: temp_v1 = TM3_DRAFT_I16(temp_s1 + (uint32)(8)); goto label_80026ef8;
label_80026ef8: temp_v0 = TM3_DRAFT_I16(temp_v0 + (uint32)(2)); goto label_80026efc;
label_80026efc: temp_s0 = temp_s0 + (uint32)(4); goto label_80026f00;
label_80026f00: TM3_DRAFT_U16(temp_s1 + (uint32)(4)) = (uint16)temp_a1; goto label_80026f04;
label_80026f04: TM3_DRAFT_U16(temp_s1 + (uint32)(0)) = (uint16)temp_v1; goto label_80026f08;
label_80026f08: TM3_DRAFT_U16(temp_s1 + (uint32)(2)) = (uint16)temp_v0; goto label_80026f0c;
label_80026f0c: temp_a2 = TM3_DRAFT_U32(temp_s0 + (uint32)(-4)); goto label_80026f10;
label_80026f10: temp_a1 = TM3_DRAFT_U32(temp_s0 + (uint32)(0)); goto label_80026f14;
label_80026f14: temp_a0 = local_base + (uint32)(16); temp_v0 = sub_80013FB4(temp_a0, temp_a1, temp_a2); goto label_80026f1c;
label_80026f18: temp_a0 = local_base + (uint32)(16); goto label_80026f1c;
label_80026f1c: temp_v0 = local_base + (uint32)(16); goto label_80026f20;
label_80026f20: temp_v1 = *(uint32 *)(local_storage + 16); goto label_80026f24;
label_80026f24: temp_a0 = TM3_DRAFT_U32(temp_v0 + (uint32)(4)); goto label_80026f28;
label_80026f28: temp_a1 = TM3_DRAFT_U32(temp_v0 + (uint32)(8)); goto label_80026f2c;
label_80026f2c: temp_v0 = 0u + (uint32)(1); goto label_80026f30;
label_80026f30: TM3_DRAFT_U16(temp_s1 + (uint32)(16)) = (uint16)temp_v1; goto label_80026f34;
label_80026f34: temp_v1 = temp_s1 + (uint32)(16); goto label_80026f38;
label_80026f38: TM3_DRAFT_U16(temp_v1 + (uint32)(2)) = (uint16)temp_a0; goto label_80026f3c;
label_80026f3c: TM3_DRAFT_U16(temp_v1 + (uint32)(4)) = (uint16)temp_a1; goto label_80026f40;
label_80026f40: temp_v1 = (temp_v0 + 0u); goto label_80026f44;
label_80026f44: TM3_DRAFT_U32(temp_s1 + (uint32)(80)) = (uint32)0u; goto label_80026f48;
label_80026f48: TM3_DRAFT_U32(temp_s1 + (uint32)(88)) = (uint32)0u; goto label_80026f4c;
label_80026f4c: TM3_DRAFT_U32(temp_s1 + (uint32)(84)) = (uint32)temp_v1; goto label_80026f50;
label_80026f50:  goto label_80026f54;
label_80026f54:  goto label_80026f58;
label_80026f58:  goto label_80026f5c;
label_80026f5c:  return temp_v0;
label_80026f60:  return temp_v0;
}
