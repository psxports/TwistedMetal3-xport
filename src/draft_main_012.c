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
uint32 sub_80045CF4(uint32 a1)
{
    FUNCTION_MARKER(0x80045CF4u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint32 local_words[46];
    uint8 *local_storage = (uint8 *)local_words;
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_words));
    temp_a0 = a1;
label_80045cf4:
    goto label_80045cf8;
label_80045cf8:
    temp_v0 = 0x800d0000u;
    goto label_80045cfc;
label_80045cfc:
    goto label_80045d00;
label_80045d00:
    temp_s0 = temp_v0 + (uint32)(11912);
    goto label_80045d04;
label_80045d04:
    goto label_80045d08;
label_80045d08:
    goto label_80045d0c;
label_80045d0c:
    goto label_80045d10;
label_80045d10:
    goto label_80045d14;
label_80045d14:
    goto label_80045d18;
label_80045d18:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(204));
    goto label_80045d1c;
label_80045d1c:
    goto label_80045d20;
label_80045d20:
    condition_value = (temp_v0 == 0u);
    temp_s3 = (temp_a0 + 0u);
    if (condition_value)
        goto label_80045d94;
    goto label_80045d28;
label_80045d24:
    temp_s3 = (temp_a0 + 0u);
    goto label_80045d28;
label_80045d28:
    temp_a0 = local_base + (uint32)(32);
    goto label_80045d2c;
label_80045d2c:
    temp_v0 = 0x80090000u;
    goto label_80045d30;
label_80045d30:
    temp_v0 = temp_v0 + (uint32)(-32144);
    goto label_80045d34;
label_80045d34:
    temp_v1 = 0x80080000u;
    goto label_80045d38;
label_80045d38:
    *(uint32 *)(local_storage + 104) = (uint32)temp_v0;
    goto label_80045d3c;
label_80045d3c:
    *(uint32 *)(local_storage + 108) = (uint32)temp_a0;
    goto label_80045d40;
label_80045d40:
    temp_t1 = *(uint32 *)(local_storage + 104);
    goto label_80045d44;
label_80045d44:
    temp_t2 = *(uint32 *)(local_storage + 108);
    goto label_80045d48;
label_80045d48:
    *(uint32 *)(local_storage + 96) = (uint32)temp_t1;
    goto label_80045d4c;
label_80045d4c:
    *(uint32 *)(local_storage + 100) = (uint32)temp_t2;
    goto label_80045d50;
label_80045d50:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(16));
    goto label_80045d54;
label_80045d54:
    temp_v1 = temp_v1 + (uint32)(-372);
    goto label_80045d58;
label_80045d58:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_80045d5c;
label_80045d5c:
    temp_v0 = (temp_v0 + temp_s0);
    goto label_80045d60;
label_80045d60:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(24));
    goto label_80045d64;
label_80045d64:
    temp_a1 = 0x80090000u;
    goto label_80045d68;
label_80045d68:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_80045d6c;
label_80045d6c:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80045d70;
label_80045d70:
    temp_a2 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_80045d74;
label_80045d74:
    temp_a1 = temp_a1 + (uint32)(-32132);
    temp_v0 = sub_800496E0(temp_a0, temp_a1, temp_a2);
    goto label_80045d7c;
label_80045d78:
    temp_a1 = temp_a1 + (uint32)(-32132);
    goto label_80045d7c;
label_80045d7c:
    temp_a0 = (temp_s3 + 0u);
    goto label_80045d80;
label_80045d80:
    temp_a1 = 0x80080000u;
    goto label_80045d84;
label_80045d84:
    temp_a1 = temp_a1 + (uint32)(-3812);
    goto label_80045d88;
label_80045d88:
    temp_a2 = local_base + (uint32)(96);
    goto label_80045d8c;
label_80045d8c:
    temp_a3 = 0u + (uint32)(2);
    goto label_800460a0;
label_80045d90:
    temp_a3 = 0u + (uint32)(2);
    goto label_80045d94;
label_80045d94:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(184));
    goto label_80045d98;
label_80045d98:
    goto label_80045d9c;
label_80045d9c:
    condition_value = (temp_v0 == 0u);
    temp_v0 = 0x80090000u;
    if (condition_value)
        goto label_80045f24;
    goto label_80045da4;
label_80045da0:
    temp_v0 = 0x80090000u;
    goto label_80045da4;
label_80045da4:
    temp_t4 = temp_v0 + (uint32)(-32120);
    goto label_80045da8;
label_80045da8:
    temp_t1 = TM3_DRAFT_U32(temp_t4 + (uint32)(0));
    goto label_80045dac;
label_80045dac:
    temp_t2 = TM3_DRAFT_U32(temp_t4 + (uint32)(4));
    goto label_80045db0;
label_80045db0:
    temp_t3 = TM3_DRAFT_U32(temp_t4 + (uint32)(8));
    goto label_80045db4;
label_80045db4:
    *(uint32 *)(local_storage + 32) = (uint32)temp_t1;
    goto label_80045db8;
label_80045db8:
    *(uint32 *)(local_storage + 36) = (uint32)temp_t2;
    goto label_80045dbc;
label_80045dbc:
    *(uint32 *)(local_storage + 40) = (uint32)temp_t3;
    goto label_80045dc0;
label_80045dc0:
    temp_t1 = TM3_DRAFT_U32(temp_t4 + (uint32)(12));
    goto label_80045dc4;
label_80045dc4:
    temp_t2 = TM3_DRAFT_U32(temp_t4 + (uint32)(16));
    goto label_80045dc8;
label_80045dc8:
    temp_t3 = TM3_DRAFT_I16(temp_t4 + (uint32)(20));
    goto label_80045dcc;
label_80045dcc:
    *(uint32 *)(local_storage + 44) = (uint32)temp_t1;
    goto label_80045dd0;
label_80045dd0:
    *(uint32 *)(local_storage + 48) = (uint32)temp_t2;
    goto label_80045dd4;
label_80045dd4:
    *(uint16 *)(local_storage + 52) = (uint16)temp_t3;
    goto label_80045dd8;
label_80045dd8:
    temp_t1 = TM3_DRAFT_I8(temp_t4 + (uint32)(22));
    goto label_80045ddc;
label_80045ddc:
    goto label_80045de0;
label_80045de0:
    *(uint8 *)(local_storage + 54) = (uint8)temp_t1;
    goto label_80045de4;
label_80045de4:
    temp_v1 = TM3_DRAFT_U32(temp_s0 + (uint32)(8));
    goto label_80045de8;
label_80045de8:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(176));
    goto label_80045dec;
label_80045dec:
    goto label_80045df0;
label_80045df0:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_80045df4;
label_80045df4:
    temp_v0 = 0u + (uint32)(1);
    goto label_80045df8;
label_80045df8:
    condition_value = (temp_v1 != temp_v0);
    temp_t0 = local_base + (uint32)(32);
    if (condition_value)
        goto label_80045e28;
    goto label_80045e00;
label_80045dfc:
    temp_t0 = local_base + (uint32)(32);
    goto label_80045e00;
label_80045e00:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(136));
    goto label_80045e04;
label_80045e04:
    goto label_80045e08;
label_80045e08:
    condition_value = (temp_v0 == 0u);
    temp_a0 = (temp_s3 + 0u);
    if (condition_value)
        goto label_80045edc;
    goto label_80045e10;
label_80045e0c:
    temp_a0 = (temp_s3 + 0u);
    goto label_80045e10;
label_80045e10:
    *(uint32 *)(local_storage + 176) = (uint32)temp_t0;
    goto label_80045e14;
label_80045e14:
    temp_a1 = 0x80080000u;
    goto label_80045e18;
label_80045e18:
    temp_a1 = temp_a1 + (uint32)(-3812);
    goto label_80045e1c;
label_80045e1c:
    temp_a2 = local_base + (uint32)(176);
    goto label_80045e20;
label_80045e20:
    temp_a3 = 0u + (uint32)(1);
    goto label_800460a0;
label_80045e24:
    temp_a3 = 0u + (uint32)(1);
    goto label_80045e28;
label_80045e28:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(136));
    goto label_80045e2c;
label_80045e2c:
    goto label_80045e30;
label_80045e30:
    condition_value = (temp_v0 != 0u);
    temp_a0 = (temp_s3 + 0u);
    if (condition_value)
        goto label_80045e94;
    goto label_80045e38;
label_80045e34:
    temp_a0 = (temp_s3 + 0u);
    goto label_80045e38;
label_80045e38:
    temp_a1 = 0x80080000u;
    goto label_80045e3c;
label_80045e3c:
    temp_a1 = temp_a1 + (uint32)(-3812);
    goto label_80045e40;
label_80045e40:
    temp_a2 = local_base + (uint32)(112);
    goto label_80045e44;
label_80045e44:
    temp_v0 = 0x80090000u;
    goto label_80045e48;
label_80045e48:
    temp_v0 = temp_v0 + (uint32)(-32096);
    goto label_80045e4c;
label_80045e4c:
    *(uint32 *)(local_storage + 132) = (uint32)temp_v0;
    goto label_80045e50;
label_80045e50:
    temp_v0 = 0x80090000u;
    goto label_80045e54;
label_80045e54:
    temp_v0 = temp_v0 + (uint32)(-32076);
    goto label_80045e58;
label_80045e58:
    *(uint32 *)(local_storage + 136) = (uint32)temp_v0;
    goto label_80045e5c;
label_80045e5c:
    temp_v0 = 0x80090000u;
    goto label_80045e60;
label_80045e60:
    temp_v0 = temp_v0 + (uint32)(-32052);
    goto label_80045e64;
label_80045e64:
    *(uint32 *)(local_storage + 128) = (uint32)temp_t0;
    goto label_80045e68;
label_80045e68:
    *(uint32 *)(local_storage + 140) = (uint32)temp_v0;
    goto label_80045e6c;
label_80045e6c:
    temp_t1 = *(uint32 *)(local_storage + 128);
    goto label_80045e70;
label_80045e70:
    temp_t2 = *(uint32 *)(local_storage + 132);
    goto label_80045e74;
label_80045e74:
    temp_t3 = *(uint32 *)(local_storage + 136);
    goto label_80045e78;
label_80045e78:
    temp_t4 = *(uint32 *)(local_storage + 140);
    goto label_80045e7c;
label_80045e7c:
    *(uint32 *)(local_storage + 112) = (uint32)temp_t1;
    goto label_80045e80;
label_80045e80:
    *(uint32 *)(local_storage + 116) = (uint32)temp_t2;
    goto label_80045e84;
label_80045e84:
    *(uint32 *)(local_storage + 120) = (uint32)temp_t3;
    goto label_80045e88;
label_80045e88:
    *(uint32 *)(local_storage + 124) = (uint32)temp_t4;
    goto label_80045e8c;
label_80045e8c:
    temp_a3 = 0u + (uint32)(4);
    goto label_800460a0;
label_80045e90:
    temp_a3 = 0u + (uint32)(4);
    goto label_80045e94;
label_80045e94:
    temp_a1 = 0x80080000u;
    goto label_80045e98;
label_80045e98:
    temp_a1 = temp_a1 + (uint32)(-3812);
    goto label_80045e9c;
label_80045e9c:
    temp_a2 = local_base + (uint32)(128);
    goto label_80045ea0;
label_80045ea0:
    temp_v0 = 0x80090000u;
    goto label_80045ea4;
label_80045ea4:
    temp_v0 = temp_v0 + (uint32)(-32096);
    goto label_80045ea8;
label_80045ea8:
    *(uint32 *)(local_storage + 148) = (uint32)temp_v0;
    goto label_80045eac;
label_80045eac:
    temp_v0 = 0x80090000u;
    goto label_80045eb0;
label_80045eb0:
    temp_v0 = temp_v0 + (uint32)(-32052);
    goto label_80045eb4;
label_80045eb4:
    *(uint32 *)(local_storage + 144) = (uint32)temp_t0;
    goto label_80045eb8;
label_80045eb8:
    *(uint32 *)(local_storage + 152) = (uint32)temp_v0;
    goto label_80045ebc;
label_80045ebc:
    temp_t1 = *(uint32 *)(local_storage + 144);
    goto label_80045ec0;
label_80045ec0:
    temp_t2 = *(uint32 *)(local_storage + 148);
    goto label_80045ec4;
label_80045ec4:
    temp_t3 = *(uint32 *)(local_storage + 152);
    goto label_80045ec8;
label_80045ec8:
    *(uint32 *)(local_storage + 128) = (uint32)temp_t1;
    goto label_80045ecc;
label_80045ecc:
    *(uint32 *)(local_storage + 132) = (uint32)temp_t2;
    goto label_80045ed0;
label_80045ed0:
    *(uint32 *)(local_storage + 136) = (uint32)temp_t3;
    goto label_80045ed4;
label_80045ed4:
    temp_a3 = 0u + (uint32)(3);
    goto label_800460a0;
label_80045ed8:
    temp_a3 = 0u + (uint32)(3);
    goto label_80045edc;
label_80045edc:
    temp_a1 = 0x80080000u;
    goto label_80045ee0;
label_80045ee0:
    temp_a1 = temp_a1 + (uint32)(-3812);
    goto label_80045ee4;
label_80045ee4:
    temp_a2 = local_base + (uint32)(144);
    goto label_80045ee8;
label_80045ee8:
    temp_v0 = 0x80090000u;
    goto label_80045eec;
label_80045eec:
    temp_v0 = temp_v0 + (uint32)(-32028);
    goto label_80045ef0;
label_80045ef0:
    *(uint32 *)(local_storage + 164) = (uint32)temp_v0;
    goto label_80045ef4;
label_80045ef4:
    temp_v0 = 0x80090000u;
    goto label_80045ef8;
label_80045ef8:
    temp_v0 = temp_v0 + (uint32)(-32052);
    goto label_80045efc;
label_80045efc:
    *(uint32 *)(local_storage + 160) = (uint32)temp_t0;
    goto label_80045f00;
label_80045f00:
    *(uint32 *)(local_storage + 168) = (uint32)temp_v0;
    goto label_80045f04;
label_80045f04:
    temp_t1 = *(uint32 *)(local_storage + 160);
    goto label_80045f08;
label_80045f08:
    temp_t2 = *(uint32 *)(local_storage + 164);
    goto label_80045f0c;
label_80045f0c:
    temp_t3 = *(uint32 *)(local_storage + 168);
    goto label_80045f10;
label_80045f10:
    *(uint32 *)(local_storage + 144) = (uint32)temp_t1;
    goto label_80045f14;
label_80045f14:
    *(uint32 *)(local_storage + 148) = (uint32)temp_t2;
    goto label_80045f18;
label_80045f18:
    *(uint32 *)(local_storage + 152) = (uint32)temp_t3;
    goto label_80045f1c;
label_80045f1c:
    temp_a3 = 0u + (uint32)(3);
    goto label_800460a0;
label_80045f20:
    temp_a3 = 0u + (uint32)(3);
    goto label_80045f24;
label_80045f24:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(188));
    goto label_80045f28;
label_80045f28:
    goto label_80045f2c;
label_80045f2c:
    condition_value = (temp_v0 == 0u);
    temp_a0 = local_base + (uint32)(104);
    if (condition_value)
        goto label_80046068;
    goto label_80045f34;
label_80045f30:
    temp_a0 = local_base + (uint32)(104);
    goto label_80045f34;
label_80045f34:
    temp_a1 = (0u + 0u);
    goto label_80045f38;
label_80045f38:
    temp_a2 = 0u + (uint32)(8);
    temp_v0 = sub_800566A4(temp_a0, temp_a1, temp_a2);
    goto label_80045f40;
label_80045f3c:
    temp_a2 = 0u + (uint32)(8);
    goto label_80045f40;
label_80045f40:
    temp_v0 = 0x80090000u;
    goto label_80045f44;
label_80045f44:
    temp_v1 = TM3_DRAFT_U32(temp_s0 + (uint32)(20));
    goto label_80045f48;
label_80045f48:
    temp_v0 = temp_v0 + (uint32)(-32000);
    goto label_80045f4c;
label_80045f4c:
    *(uint32 *)(local_storage + 104) = (uint32)temp_v0;
    goto label_80045f50;
label_80045f50:
    temp_v0 = 0u + (uint32)(7);
    goto label_80045f54;
label_80045f54:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_80045f58;
label_80045f58:
    condition_value = (temp_v1 == temp_v0);
    temp_v0 = 0x80080000u;
    if (condition_value)
        goto label_80045f78;
    goto label_80045f60;
label_80045f5c:
    temp_v0 = 0x80080000u;
    goto label_80045f60;
label_80045f60:
    temp_v0 = temp_v0 + (uint32)(-404);
    goto label_80045f64;
label_80045f64:
    temp_v1 = (uint32)(temp_v1 << 2);
    goto label_80045f68;
label_80045f68:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_80045f6c;
label_80045f6c:
    temp_v0 = TM3_DRAFT_U32(temp_v1 + (uint32)(0));
    goto label_80045f70;
label_80045f70:
    *(uint32 *)(local_storage + 108) = (uint32)temp_v0;
    goto label_80045f84;
label_80045f74:
    *(uint32 *)(local_storage + 108) = (uint32)temp_v0;
    goto label_80045f78;
label_80045f78:
    temp_v0 = 0x80090000u;
    goto label_80045f7c;
label_80045f7c:
    temp_v0 = temp_v0 + (uint32)(-31988);
    goto label_80045f80;
label_80045f80:
    *(uint32 *)(local_storage + 108) = (uint32)temp_v0;
    goto label_80045f84;
label_80045f84:
    temp_a0 = (temp_s3 + 0u);
    goto label_80045f88;
label_80045f88:
    temp_a1 = 0x80080000u;
    goto label_80045f8c;
label_80045f8c:
    temp_a1 = temp_a1 + (uint32)(-3812);
    goto label_80045f90;
label_80045f90:
    temp_a2 = local_base + (uint32)(104);
    goto label_80045f94;
label_80045f94:
    temp_a3 = 0u + (uint32)(2);
    temp_v0 = tm3_draft_indirect(0x80045cd0u, 4u, temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_80045f9c;
label_80045f98:
    temp_a3 = 0u + (uint32)(2);
    goto label_80045f9c;
label_80045f9c:
    temp_v0 = 0x800d0000u;
    goto label_80045fa0;
label_80045fa0:
    temp_a2 = temp_v0 + (uint32)(11912);
    goto label_80045fa4;
label_80045fa4:
    temp_v0 = TM3_DRAFT_U32(temp_a2 + (uint32)(8));
    goto label_80045fa8;
label_80045fa8:
    temp_v1 = TM3_DRAFT_U32(temp_a2 + (uint32)(176));
    goto label_80045fac;
label_80045fac:
    goto label_80045fb0;
label_80045fb0:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80045fb4;
label_80045fb4:
    temp_v0 = (sint32)temp_v0 < 2;
    goto label_80045fb8;
label_80045fb8:
    condition_value = (temp_v0 == 0u);
    temp_s0 = local_base + (uint32)(112);
    if (condition_value)
        goto label_800460a8;
    goto label_80045fc0;
label_80045fbc:
    temp_s0 = local_base + (uint32)(112);
    goto label_80045fc0;
label_80045fc0:
    temp_a3 = (temp_s0 + 0u);
    goto label_80045fc4;
label_80045fc4:
    temp_a0 = TM3_DRAFT_U32(temp_a2 + (uint32)(136));
    goto label_80045fc8;
label_80045fc8:
    temp_a1 = TM3_DRAFT_U32(temp_a2 + (uint32)(20));
    goto label_80045fcc;
label_80045fcc:
    temp_a2 = TM3_DRAFT_U32(temp_a2 + (uint32)(24));
    goto label_80045fd0;
label_80045fd0:
    temp_a1 = temp_a1 + (uint32)(1);
    temp_v0 = tm3_draft_indirect(0x800512bcu, 4u, temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_80045fd8;
label_80045fd4:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_80045fd8;
label_80045fd8:
    temp_v0 = *(uint16 *)(local_storage + 112);
    goto label_80045fdc;
label_80045fdc:
    temp_s2 = (temp_s0 + 0u);
    goto label_80045fe0;
label_80045fe0:
    condition_value = (temp_v0 == 0u);
    *(uint8 *)(local_storage + 144) = (uint8)0u;
    if (condition_value)
        goto label_80046034;
    goto label_80045fe8;
label_80045fe4:
    *(uint8 *)(local_storage + 144) = (uint8)0u;
    goto label_80045fe8;
label_80045fe8:
    temp_v0 = 0x800d0000u;
    goto label_80045fec;
label_80045fec:
    temp_s4 = temp_v0 + (uint32)(7424);
    goto label_80045ff0;
label_80045ff0:
    temp_s0 = (0u + 0u);
    goto label_80045ff4;
label_80045ff4:
    temp_s1 = (temp_s2 + 0u);
    goto label_80045ff8;
label_80045ff8:
    temp_v0 = (temp_s1 + temp_s0);
    goto label_80045ffc;
label_80045ffc:
    temp_a0 = TM3_DRAFT_U16(temp_v0 + (uint32)(0));
    goto label_80046000;
label_80046000:
    temp_a1 = TM3_DRAFT_U8(temp_s4 + (uint32)(13));
    goto label_80046004;
label_80046004:
    temp_v0 = tm3_draft_indirect(0x8004f78cu, 2u, temp_a0, temp_a1);
    goto label_8004600c;
label_80046008:
    goto label_8004600c;
label_8004600c:
    condition_value = (temp_v0 == 0u);
    temp_a0 = local_base + (uint32)(144);
    if (condition_value)
        goto label_8004601c;
    goto label_80046014;
label_80046010:
    temp_a0 = local_base + (uint32)(144);
    goto label_80046014;
label_80046014:
    temp_a1 = (temp_v0 + 0u);
    temp_v0 = sub_800566D4(temp_a0, temp_a1);
    goto label_8004601c;
label_80046018:
    temp_a1 = (temp_v0 + 0u);
    goto label_8004601c;
label_8004601c:
    temp_s0 = temp_s0 + (uint32)(2);
    goto label_80046020;
label_80046020:
    temp_v0 = (temp_s1 + temp_s0);
    goto label_80046024;
label_80046024:
    temp_v0 = TM3_DRAFT_U16(temp_v0 + (uint32)(0));
    goto label_80046028;
label_80046028:
    goto label_8004602c;
label_8004602c:
    condition_value = (temp_v0 != 0u);
    temp_s1 = (temp_s2 + 0u);
    if (condition_value)
        goto label_80045ff8;
    goto label_80046034;
label_80046030:
    temp_s1 = (temp_s2 + 0u);
    goto label_80046034;
label_80046034:
    temp_a0 = local_base + (uint32)(144);
    goto label_80046038;
label_80046038:
    temp_a1 = 0x80080000u;
    goto label_8004603c;
label_8004603c:
    temp_a1 = temp_a1 + (uint32)(-3484);
    goto label_80046040;
label_80046040:
    temp_a2 = 0u + (uint32)(160);
    goto label_80046044;
label_80046044:
    temp_a3 = 0u + (uint32)(180);
    goto label_80046048;
label_80046048:
    temp_v0 = temp_s3 + (uint32)(88);
    goto label_8004604c;
label_8004604c:
    *(uint32 *)(local_storage + 20) = (uint32)temp_v0;
    goto label_80046050;
label_80046050:
    temp_v0 = 0u + (uint32)(4);
    goto label_80046054;
label_80046054:
    *(uint32 *)(local_storage + 16) = (uint32)temp_s3;
    goto label_80046058;
label_80046058:
    *(uint32 *)(local_storage + 24) = (uint32)temp_v0;
    temp_v0 = sub_80049284(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20), *(uint32 *)(local_storage + 24));
    goto label_80046060;
label_8004605c:
    *(uint32 *)(local_storage + 24) = (uint32)temp_v0;
    goto label_80046060;
label_80046060:
    goto label_800460a8;
label_80046064:
    goto label_80046068;
label_80046068:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(192));
    goto label_8004606c;
label_8004606c:
    goto label_80046070;
label_80046070:
    condition_value = (temp_v0 == 0u);
    temp_a0 = (temp_s3 + 0u);
    if (condition_value)
        goto label_800460a8;
    goto label_80046078;
label_80046074:
    temp_a0 = (temp_s3 + 0u);
    goto label_80046078;
label_80046078:
    temp_a1 = 0x80080000u;
    goto label_8004607c;
label_8004607c:
    temp_a1 = temp_a1 + (uint32)(-3812);
    goto label_80046080;
label_80046080:
    temp_a2 = local_base + (uint32)(112);
    goto label_80046084;
label_80046084:
    temp_a3 = 0u + (uint32)(2);
    goto label_80046088;
label_80046088:
    temp_v0 = 0x80090000u;
    goto label_8004608c;
label_8004608c:
    temp_v0 = temp_v0 + (uint32)(-31968);
    goto label_80046090;
label_80046090:
    *(uint32 *)(local_storage + 112) = (uint32)temp_v0;
    goto label_80046094;
label_80046094:
    temp_v0 = 0x80090000u;
    goto label_80046098;
label_80046098:
    temp_v0 = temp_v0 + (uint32)(-31952);
    goto label_8004609c;
label_8004609c:
    *(uint32 *)(local_storage + 116) = (uint32)temp_v0;
    goto label_800460a0;
label_800460a0:
    temp_v0 = tm3_draft_indirect(0x80045cd0u, 4u, temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_800460a8;
label_800460a4:
    goto label_800460a8;
label_800460a8:
    goto label_800460ac;
label_800460ac:
    goto label_800460b0;
label_800460b0:
    goto label_800460b4;
label_800460b4:
    goto label_800460b8;
label_800460b8:
    goto label_800460bc;
label_800460bc:
    goto label_800460c0;
label_800460c0:
    return temp_v0;
label_800460c4:
    return temp_v0;
}

uint32 sub_80045CD0(uint32 context, uint32 font, uint32 lines, uint32 count)
{
    FUNCTION_MARKER(0x80045CD0u, "SCUS_942.49");
    return sub_80045B84(context, font, lines, count, 120u);
}
