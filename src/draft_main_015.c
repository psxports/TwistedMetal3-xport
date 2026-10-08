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
uint32 sub_8004E9B8(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8)
{
    FUNCTION_MARKER(0x8004E9B8u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[104];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_8004E9B8;
    temp_a1 = a1;
    temp_a2 = a2;
    temp_a3 = a3;
    *(uint32 *)(local_storage + 88) = a4;
    *(uint32 *)(local_storage + 92) = a5;
    *(uint32 *)(local_storage + 96) = a6;
    *(uint32 *)(local_storage + 100) = a7;
    *(uint32 *)(local_storage + 104) = a8;
label_8004e9b8:  goto label_8004e9bc;
label_8004e9bc:  goto label_8004e9c0;
label_8004e9c0: temp_s3 = a4; goto label_8004e9c4;
label_8004e9c4:  goto label_8004e9c8;
label_8004e9c8: temp_s2 = a5; goto label_8004e9cc;
label_8004e9cc:  goto label_8004e9d0;
label_8004e9d0: temp_s1 = (temp_a0 + 0u); goto label_8004e9d4;
label_8004e9d4:  goto label_8004e9d8;
label_8004e9d8: temp_s0 = (temp_a1 + 0u); goto label_8004e9dc;
label_8004e9dc:  goto label_8004e9e0;
label_8004e9e0: temp_s4 = a6; goto label_8004e9e4;
label_8004e9e4: temp_a0 = (temp_a2 + 0u); goto label_8004e9e8;
label_8004e9e8:  goto label_8004e9ec;
label_8004e9ec:  goto label_8004e9f0;
label_8004e9f0: temp_s5 = (temp_a3 + 0u); temp_v0 = sub_8004E478(temp_a0); goto label_8004e9f8;
label_8004e9f4: temp_s5 = (temp_a3 + 0u); goto label_8004e9f8;
label_8004e9f8: condition_value = (temp_v0 == 0u); temp_v0 = temp_s4 & 0x2u; if (condition_value) goto label_8004ea58; goto label_8004ea00;
label_8004e9fc: temp_v0 = temp_s4 & 0x2u; goto label_8004ea00;
label_8004ea00: condition_value = (temp_v0 == 0u); temp_v0 = 0x80080000u; if (condition_value) goto label_8004ea1c; goto label_8004ea08;
label_8004ea04: temp_v0 = 0x80080000u; goto label_8004ea08;
label_8004ea08: temp_v0 = TM3_DRAFT_U8(temp_v0 + (uint32)(-4080)); goto label_8004ea0c;
label_8004ea0c:  goto label_8004ea10;
label_8004ea10: temp_v0 = (uint32)(temp_v0 >> 1); goto label_8004ea14;
label_8004ea14: temp_s0 = (temp_s0 + temp_v0); goto label_8004ea20;
label_8004ea18: temp_s0 = (temp_s0 + temp_v0); goto label_8004ea1c;
label_8004ea1c: temp_s0 = temp_s0 + (uint32)(-2); goto label_8004ea20;
label_8004ea20: temp_a1 = 0x00020000u; goto label_8004ea24;
label_8004ea24: temp_a1 = temp_a1 | 0xbc4u; goto label_8004ea28;
label_8004ea28: temp_a0 = (temp_s1 + 0u); goto label_8004ea2c;
label_8004ea2c: temp_a1 = (temp_a0 + temp_a1); goto label_8004ea30;
label_8004ea30: temp_a2 = 0x80080000u; goto label_8004ea34;
label_8004ea34: temp_a2 = temp_a2 + (uint32)(-4092); goto label_8004ea38;
label_8004ea38: temp_a3 = (temp_s0 + 0u); goto label_8004ea3c;
label_8004ea3c: *(uint32 *)(local_storage + 16) = (uint32)temp_s5; goto label_8004ea40;
label_8004ea40: *(uint32 *)(local_storage + 20) = (uint32)temp_s3; goto label_8004ea44;
label_8004ea44: *(uint32 *)(local_storage + 24) = (uint32)temp_s2; goto label_8004ea48;
label_8004ea48: *(uint32 *)(local_storage + 28) = (uint32)temp_s4; temp_v0 = sub_8004E4B8(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20), *(uint32 *)(local_storage + 24), *(uint32 *)(local_storage + 28), *(uint32 *)(local_storage + 32), *(uint32 *)(local_storage + 36), *(uint32 *)(local_storage + 40), *(uint32 *)(local_storage + 44), *(uint32 *)(local_storage + 48), *(uint32 *)(local_storage + 52), *(uint32 *)(local_storage + 56), *(uint32 *)(local_storage + 60)); goto label_8004ea50;
label_8004ea4c: *(uint32 *)(local_storage + 28) = (uint32)temp_s4; goto label_8004ea50;
label_8004ea50:  goto label_8004eaec;
label_8004ea54:  goto label_8004ea58;
label_8004ea58: condition_value = ((sint32)temp_s2 < 0);  if (condition_value) goto label_8004eaec; goto label_8004ea60;
label_8004ea5c:  goto label_8004ea60;
label_8004ea60: temp_v0 = a7; goto label_8004ea64;
label_8004ea64:  goto label_8004ea68;
label_8004ea68: temp_v0 = temp_v0 & 0x1u; goto label_8004ea6c;
label_8004ea6c: condition_value = (temp_v0 == 0u); temp_v0 = 0x00020000u; if (condition_value) goto label_8004eaa8; goto label_8004ea74;
label_8004ea70: temp_v0 = 0x00020000u; goto label_8004ea74;
label_8004ea74: temp_v0 = temp_v0 | 0xbc8u; goto label_8004ea78;
label_8004ea78: temp_a1 = 0x80080000u; goto label_8004ea7c;
label_8004ea7c: temp_a1 = temp_a1 + (uint32)(-4092); goto label_8004ea80;
label_8004ea80: temp_a2 = 0u + (uint32)(300); goto label_8004ea84;
label_8004ea84: temp_v0 = (temp_s1 + temp_v0); goto label_8004ea88;
label_8004ea88: *(uint32 *)(local_storage + 20) = (uint32)temp_v0; goto label_8004ea8c;
label_8004ea8c: temp_v0 = 0u + (uint32)(11); goto label_8004ea90;
label_8004ea90: *(uint32 *)(local_storage + 24) = (uint32)temp_v0; goto label_8004ea94;
label_8004ea94: temp_v0 = 0u + (uint32)(63); goto label_8004ea98;
label_8004ea98: *(uint32 *)(local_storage + 28) = (uint32)temp_v0; goto label_8004ea9c;
label_8004ea9c: *(uint32 *)(local_storage + 32) = (uint32)temp_v0; goto label_8004eaa0;
label_8004eaa0: *(uint32 *)(local_storage + 36) = (uint32)temp_v0; goto label_8004ead4;
label_8004eaa4: *(uint32 *)(local_storage + 36) = (uint32)temp_v0; goto label_8004eaa8;
label_8004eaa8: temp_v0 = temp_v0 | 0xbc8u; goto label_8004eaac;
label_8004eaac: temp_a1 = 0x80080000u; goto label_8004eab0;
label_8004eab0: temp_a1 = temp_a1 + (uint32)(-4092); goto label_8004eab4;
label_8004eab4: temp_a2 = 0u + (uint32)(300); goto label_8004eab8;
label_8004eab8: temp_v0 = (temp_s1 + temp_v0); goto label_8004eabc;
label_8004eabc: *(uint32 *)(local_storage + 20) = (uint32)temp_v0; goto label_8004eac0;
label_8004eac0: temp_v0 = 0u + (uint32)(24); goto label_8004eac4;
label_8004eac4: *(uint32 *)(local_storage + 24) = (uint32)temp_v0; goto label_8004eac8;
label_8004eac8: temp_v0 = 0u + (uint32)(1); goto label_8004eacc;
label_8004eacc: *(uint32 *)(local_storage + 28) = (uint32)temp_v0; goto label_8004ead0;
label_8004ead0: *(uint32 *)(local_storage + 32) = (uint32)temp_v0; goto label_8004ead4;
label_8004ead4: temp_v0 = (uint32)(temp_s2 << 2); goto label_8004ead8;
label_8004ead8: temp_v0 = (temp_v0 + temp_s3); goto label_8004eadc;
label_8004eadc: *(uint32 *)(local_storage + 16) = (uint32)temp_s1; goto label_8004eae0;
label_8004eae0: temp_a0 = TM3_DRAFT_U32(temp_v0 + (uint32)(0)); goto label_8004eae4;
label_8004eae4: temp_a3 = (temp_s0 + 0u); temp_v0 = sub_80049284(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20), *(uint32 *)(local_storage + 24), *(uint32 *)(local_storage + 28), *(uint32 *)(local_storage + 32), *(uint32 *)(local_storage + 36), *(uint32 *)(local_storage + 40), *(uint32 *)(local_storage + 44), *(uint32 *)(local_storage + 48), *(uint32 *)(local_storage + 52), *(uint32 *)(local_storage + 56), *(uint32 *)(local_storage + 60), *(uint32 *)(local_storage + 64), *(uint32 *)(local_storage + 68), *(uint32 *)(local_storage + 72)); goto label_8004eaec;
label_8004eae8: temp_a3 = (temp_s0 + 0u); goto label_8004eaec;
label_8004eaec:  goto label_8004eaf0;
label_8004eaf0:  goto label_8004eaf4;
label_8004eaf4:  goto label_8004eaf8;
label_8004eaf8:  goto label_8004eafc;
label_8004eafc:  goto label_8004eb00;
label_8004eb00:  goto label_8004eb04;
label_8004eb04:  goto label_8004eb08;
label_8004eb08:  return temp_v0;
label_8004eb0c:  return temp_v0;
}
