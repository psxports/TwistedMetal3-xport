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
uint32 sub_8005DAB4(void)
{
    FUNCTION_MARKER(0x8005DAB4u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[80];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_8005DAB4;
label_8005dab4:
    goto label_8005dab8;
label_8005dab8:
    temp_v1 = 0x80080000u;
    goto label_8005dabc;
label_8005dabc:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(27032));
    goto label_8005dac0;
label_8005dac0:
    temp_v0 = 0u + (uint32)(1);
    goto label_8005dac4;
label_8005dac4:
    goto label_8005dac8;
label_8005dac8:
    goto label_8005dacc;
label_8005dacc:
    goto label_8005dad0;
label_8005dad0:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005dad4;
label_8005dad4:
    temp_a0 = 0x80080000u;
    goto label_8005dad8;
label_8005dad8:
    temp_a0 = TM3_DRAFT_U32(temp_a0 + (uint32)(27044));
    goto label_8005dadc;
label_8005dadc:
    goto label_8005dae0;
label_8005dae0:
    temp_v0 = TM3_DRAFT_U8(temp_a0 + (uint32)(0));
    goto label_8005dae4;
label_8005dae4:
    goto label_8005dae8;
label_8005dae8:
    temp_v0 = temp_v0 & 0x7u;
    goto label_8005daec;
label_8005daec:
    *(uint8 *)(local_storage + 16) = (uint8)temp_v0;
    goto label_8005daf0;
label_8005daf0:
    temp_v0 = *(uint8 *)(local_storage + 16);
    goto label_8005daf4;
label_8005daf4:
    goto label_8005daf8;
label_8005daf8:
    condition_value = (temp_v0 == 0u);
    temp_s1 = (0u + 0u);
    if (condition_value)
        goto label_8005dff8;
    goto label_8005db00;
label_8005dafc:
    temp_s1 = (0u + 0u);
    goto label_8005db00;
label_8005db00:
    goto label_8005db18;
label_8005db04:
    goto label_8005db08;
label_8005db08:
    temp_v0 = TM3_DRAFT_U8(temp_a0 + (uint32)(0));
    goto label_8005db0c;
label_8005db0c:
    goto label_8005db10;
label_8005db10:
    temp_v0 = temp_v0 & 0x7u;
    goto label_8005db14;
label_8005db14:
    *(uint8 *)(local_storage + 16) = (uint8)temp_v0;
    goto label_8005db18;
label_8005db18:
    temp_v0 = TM3_DRAFT_U8(temp_a0 + (uint32)(0));
    goto label_8005db1c;
label_8005db1c:
    temp_v1 = *(uint8 *)(local_storage + 16);
    goto label_8005db20;
label_8005db20:
    temp_v0 = temp_v0 & 0x7u;
    goto label_8005db24;
label_8005db24:
    condition_value = (temp_v1 != temp_v0);
    temp_s0 = (0u + 0u);
    if (condition_value)
        goto label_8005db08;
    goto label_8005db2c;
label_8005db28:
    temp_s0 = (0u + 0u);
    goto label_8005db2c;
label_8005db2c:
    temp_a0 = local_base + (uint32)(24);
    goto label_8005db30;
label_8005db30:
    temp_v0 = 0x80080000u;
    goto label_8005db34;
label_8005db34:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(27032));
    goto label_8005db38;
label_8005db38:
    goto label_8005db3c;
label_8005db3c:
    temp_v0 = TM3_DRAFT_U8(temp_v0 + (uint32)(0));
    goto label_8005db40;
label_8005db40:
    goto label_8005db44;
label_8005db44:
    temp_v0 = temp_v0 & 0x20u;
    goto label_8005db48;
label_8005db48:
    condition_value = (temp_v0 == 0u);
    temp_v1 = (temp_a0 + temp_s0);
    if (condition_value)
        goto label_8005db74;
    goto label_8005db50;
label_8005db4c:
    temp_v1 = (temp_a0 + temp_s0);
    goto label_8005db50;
label_8005db50:
    temp_v0 = 0x80080000u;
    goto label_8005db54;
label_8005db54:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(27036));
    goto label_8005db58;
label_8005db58:
    goto label_8005db5c;
label_8005db5c:
    temp_v0 = TM3_DRAFT_U8(temp_v0 + (uint32)(0));
    goto label_8005db60;
label_8005db60:
    temp_s0 = temp_s0 + (uint32)(1);
    goto label_8005db64;
label_8005db64:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005db68;
label_8005db68:
    temp_v0 = (sint32)temp_s0 < 8;
    goto label_8005db6c;
label_8005db6c:
    condition_value = (temp_v0 != 0u);
    if (condition_value)
        goto label_8005db30;
    goto label_8005db74;
label_8005db70:
    goto label_8005db74;
label_8005db74:
    temp_v0 = (sint32)temp_s0 < 8;
    goto label_8005db78;
label_8005db78:
    condition_value = (temp_v0 == 0u);
    temp_v1 = (temp_s0 + 0u);
    if (condition_value)
        goto label_8005db9c;
    goto label_8005db80;
label_8005db7c:
    temp_v1 = (temp_s0 + 0u);
    goto label_8005db80;
label_8005db80:
    temp_a0 = local_base + (uint32)(24);
    goto label_8005db84;
label_8005db84:
    temp_v0 = (temp_a0 + temp_v1);
    goto label_8005db88;
label_8005db88:
    TM3_DRAFT_U8(temp_v0 + (uint32)(0)) = (uint8)0u;
    goto label_8005db8c;
label_8005db8c:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_8005db90;
label_8005db90:
    temp_v0 = (sint32)temp_v1 < 8;
    goto label_8005db94;
label_8005db94:
    condition_value = (temp_v0 != 0u);
    temp_v0 = (temp_a0 + temp_v1);
    if (condition_value)
        goto label_8005db88;
    goto label_8005db9c;
label_8005db98:
    temp_v0 = (temp_a0 + temp_v1);
    goto label_8005db9c;
label_8005db9c:
    temp_v1 = 0x80080000u;
    goto label_8005dba0;
label_8005dba0:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(27032));
    goto label_8005dba4;
label_8005dba4:
    temp_v0 = 0u + (uint32)(1);
    goto label_8005dba8;
label_8005dba8:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005dbac;
label_8005dbac:
    temp_v0 = 0x80080000u;
    goto label_8005dbb0;
label_8005dbb0:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(27044));
    goto label_8005dbb4;
label_8005dbb4:
    temp_v1 = 0u + (uint32)(7);
    goto label_8005dbb8;
label_8005dbb8:
    TM3_DRAFT_U8(temp_v0 + (uint32)(0)) = (uint8)temp_v1;
    goto label_8005dbbc;
label_8005dbbc:
    temp_v0 = 0x80080000u;
    goto label_8005dbc0;
label_8005dbc0:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(27040));
    goto label_8005dbc4;
label_8005dbc4:
    goto label_8005dbc8;
label_8005dbc8:
    TM3_DRAFT_U8(temp_v0 + (uint32)(0)) = (uint8)temp_v1;
    goto label_8005dbcc;
label_8005dbcc:
    temp_v1 = *(uint8 *)(local_storage + 16);
    goto label_8005dbd0;
label_8005dbd0:
    temp_v0 = 0u + (uint32)(3);
    goto label_8005dbd4;
label_8005dbd4:
    condition_value = (temp_v1 != temp_v0);
    if (condition_value)
        goto label_8005dc04;
    goto label_8005dbdc;
label_8005dbd8:
    goto label_8005dbdc;
label_8005dbdc:
    temp_v0 = 0x80080000u;
    goto label_8005dbe0;
label_8005dbe0:
    temp_v0 = TM3_DRAFT_U8(temp_v0 + (uint32)(26353));
    goto label_8005dbe4;
label_8005dbe4:
    goto label_8005dbe8;
label_8005dbe8:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_8005dbec;
label_8005dbec:
    temp_at = 0x80080000u;
    goto label_8005dbf0;
label_8005dbf0:
    temp_at = (temp_at + temp_v0);
    goto label_8005dbf4;
label_8005dbf4:
    temp_v0 = TM3_DRAFT_U32(temp_at + (uint32)(26776));
    goto label_8005dbf8;
label_8005dbf8:
    goto label_8005dbfc;
label_8005dbfc:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_8005dc68;
    goto label_8005dc04;
label_8005dc00:
    goto label_8005dc04;
label_8005dc04:
    temp_v0 = 0x80080000u;
    goto label_8005dc08;
label_8005dc08:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(26336));
    goto label_8005dc0c;
label_8005dc0c:
    goto label_8005dc10;
label_8005dc10:
    temp_v0 = temp_v0 & 0x10u;
    goto label_8005dc14;
label_8005dc14:
    condition_value = (temp_v0 != 0u);
    if (condition_value)
        goto label_8005dc48;
    goto label_8005dc1c;
label_8005dc18:
    goto label_8005dc1c;
label_8005dc1c:
    temp_v0 = *(uint8 *)(local_storage + 24);
    goto label_8005dc20;
label_8005dc20:
    goto label_8005dc24;
label_8005dc24:
    temp_v0 = temp_v0 & 0x10u;
    goto label_8005dc28;
label_8005dc28:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_8005dc48;
    goto label_8005dc30;
label_8005dc2c:
    goto label_8005dc30;
label_8005dc30:
    temp_v0 = 0x80080000u;
    goto label_8005dc34;
label_8005dc34:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(26344));
    goto label_8005dc38;
label_8005dc38:
    goto label_8005dc3c;
label_8005dc3c:
    temp_v0 = temp_v0 + (uint32)(1);
    goto label_8005dc40;
label_8005dc40:
    temp_at = 0x80080000u;
    goto label_8005dc44;
label_8005dc44:
    TM3_DRAFT_U32(temp_at + (uint32)(26344)) = (uint32)temp_v0;
    goto label_8005dc48;
label_8005dc48:
    temp_v0 = *(uint8 *)(local_storage + 24);
    goto label_8005dc4c;
label_8005dc4c:
    temp_v1 = *(uint8 *)(local_storage + 25);
    goto label_8005dc50;
label_8005dc50:
    temp_v0 = temp_v0 & 0xffu;
    goto label_8005dc54;
label_8005dc54:
    temp_s1 = temp_v0 & 0x1du;
    goto label_8005dc58;
label_8005dc58:
    temp_at = 0x80080000u;
    goto label_8005dc5c;
label_8005dc5c:
    TM3_DRAFT_U32(temp_at + (uint32)(26336)) = (uint32)temp_v0;
    goto label_8005dc60;
label_8005dc60:
    temp_at = 0x80080000u;
    goto label_8005dc64;
label_8005dc64:
    TM3_DRAFT_U32(temp_at + (uint32)(26340)) = (uint32)temp_v1;
    goto label_8005dc68;
label_8005dc68:
    temp_v1 = *(uint8 *)(local_storage + 16);
    goto label_8005dc6c;
label_8005dc6c:
    temp_v0 = 0u + (uint32)(5);
    goto label_8005dc70;
label_8005dc70:
    condition_value = (temp_v1 != temp_v0);
    if (condition_value)
        goto label_8005dce0;
    goto label_8005dc78;
label_8005dc74:
    goto label_8005dc78;
label_8005dc78:
    temp_v0 = 0x80080000u;
    goto label_8005dc7c;
label_8005dc7c:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(26332));
    goto label_8005dc80;
label_8005dc80:
    goto label_8005dc84;
label_8005dc84:
    condition_value = ((sint32)temp_v0 <= 0);
    if (condition_value)
        goto label_8005dce0;
    goto label_8005dc8c;
label_8005dc88:
    goto label_8005dc8c;
label_8005dc8c:
    temp_a0 = 0x80090000u;
    goto label_8005dc90;
label_8005dc90:
    temp_a0 = temp_a0 + (uint32)(-28016);
    temp_v0 = tm3_draft_indirect(0x8005a3f4u, 1u, temp_a0);
    goto label_8005dc98;
label_8005dc94:
    temp_a0 = temp_a0 + (uint32)(-28016);
    goto label_8005dc98;
label_8005dc98:
    temp_v0 = 0x80080000u;
    goto label_8005dc9c;
label_8005dc9c:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(26332));
    goto label_8005dca0;
label_8005dca0:
    goto label_8005dca4;
label_8005dca4:
    condition_value = ((sint32)temp_v0 <= 0);
    if (condition_value)
        goto label_8005dce0;
    goto label_8005dcac;
label_8005dca8:
    goto label_8005dcac;
label_8005dcac:
    temp_v0 = 0x80080000u;
    goto label_8005dcb0;
label_8005dcb0:
    temp_v0 = TM3_DRAFT_U8(temp_v0 + (uint32)(26353));
    goto label_8005dcb4;
label_8005dcb4:
    temp_a2 = 0x80080000u;
    goto label_8005dcb8;
label_8005dcb8:
    temp_a2 = TM3_DRAFT_U32(temp_a2 + (uint32)(26336));
    goto label_8005dcbc;
label_8005dcbc:
    temp_a3 = 0x80080000u;
    goto label_8005dcc0;
label_8005dcc0:
    temp_a3 = TM3_DRAFT_U32(temp_a3 + (uint32)(26340));
    goto label_8005dcc4;
label_8005dcc4:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_8005dcc8;
label_8005dcc8:
    temp_a1 = 0x80080000u;
    goto label_8005dccc;
label_8005dccc:
    temp_a1 = (temp_a1 + temp_v0);
    goto label_8005dcd0;
label_8005dcd0:
    temp_a1 = TM3_DRAFT_U32(temp_a1 + (uint32)(26360));
    goto label_8005dcd4;
label_8005dcd4:
    temp_a0 = 0x80090000u;
    goto label_8005dcd8;
label_8005dcd8:
    temp_a0 = temp_a0 + (uint32)(-28004);
    temp_v0 = tm3_draft_indirect(0x8005a3f4u, 1u, temp_a0);
    goto label_8005dce0;
label_8005dcdc:
    temp_a0 = temp_a0 + (uint32)(-28004);
    goto label_8005dce0;
label_8005dce0:
    temp_v0 = *(uint8 *)(local_storage + 16);
    goto label_8005dce4;
label_8005dce4:
    goto label_8005dce8;
label_8005dce8:
    temp_v1 = temp_v0 + (uint32)(-1);
    goto label_8005dcec;
label_8005dcec:
    temp_v0 = temp_v1 < 5u;
    goto label_8005dcf0;
label_8005dcf0:
    condition_value = (temp_v0 == 0u);
    temp_v0 = (uint32)(temp_v1 << 2);
    if (condition_value)
        goto label_8005dfdc;
    goto label_8005dcf8;
label_8005dcf4:
    temp_v0 = (uint32)(temp_v1 << 2);
    goto label_8005dcf8;
label_8005dcf8:
    temp_at = 0x80090000u;
    goto label_8005dcfc;
label_8005dcfc:
    temp_at = (temp_at + temp_v0);
    goto label_8005dd00;
label_8005dd00:
    temp_v0 = TM3_DRAFT_U32(temp_at + (uint32)(-27944));
    goto label_8005dd04;
label_8005dd04:
    goto label_8005dd08;
label_8005dd08:
    temp_v0 = tm3_draft_indirect(temp_v0, 4u, temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_8005dd10;
label_8005dd0c:
    goto label_8005dd10;
label_8005dd10:
    condition_value = (temp_s1 == 0u);
    temp_v0 = 0u + (uint32)(5);
    if (condition_value)
        goto label_8005dd5c;
    goto label_8005dd18;
label_8005dd14:
    temp_v0 = 0u + (uint32)(5);
    goto label_8005dd18;
label_8005dd18:
    temp_v1 = 0x80080000u;
    goto label_8005dd1c;
label_8005dd1c:
    temp_v1 = temp_v1 + (uint32)(27056);
    goto label_8005dd20;
label_8005dd20:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005dd24;
label_8005dd24:
    temp_v1 = 0x800e0000u;
    goto label_8005dd28;
label_8005dd28:
    temp_v1 = temp_v1 + (uint32)(-31776);
    goto label_8005dd2c;
label_8005dd2c:
    condition_value = (temp_v1 == 0u);
    temp_a1 = local_base + (uint32)(24);
    if (condition_value)
        goto label_8005de54;
    goto label_8005dd34;
label_8005dd30:
    temp_a1 = local_base + (uint32)(24);
    goto label_8005dd34;
label_8005dd34:
    temp_a0 = 0u + (uint32)(7);
    goto label_8005dd38;
label_8005dd38:
    temp_a2 = 0u + (uint32)(-1);
    goto label_8005dd3c;
label_8005dd3c:
    temp_v0 = TM3_DRAFT_U8(temp_a1 + (uint32)(0));
    goto label_8005dd40;
label_8005dd40:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_8005dd44;
label_8005dd44:
    temp_a0 = temp_a0 + (uint32)(-1);
    goto label_8005dd48;
label_8005dd48:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005dd4c;
label_8005dd4c:
    condition_value = (temp_a0 != temp_a2);
    temp_v1 = temp_v1 + (uint32)(1);
    if (condition_value)
        goto label_8005dd3c;
    goto label_8005dd54;
label_8005dd50:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_8005dd54;
label_8005dd54:
    temp_v0 = 0u + (uint32)(2);
    goto label_8005dffc;
label_8005dd58:
    temp_v0 = 0u + (uint32)(2);
    goto label_8005dd5c;
label_8005dd5c:
    temp_v0 = 0x80080000u;
    goto label_8005dd60;
label_8005dd60:
    temp_v0 = TM3_DRAFT_U8(temp_v0 + (uint32)(26353));
    goto label_8005dd64;
label_8005dd64:
    goto label_8005dd68;
label_8005dd68:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_8005dd6c;
label_8005dd6c:
    temp_at = 0x80080000u;
    goto label_8005dd70;
label_8005dd70:
    temp_at = (temp_at + temp_v0);
    goto label_8005dd74;
label_8005dd74:
    temp_v0 = TM3_DRAFT_U32(temp_at + (uint32)(26520));
    goto label_8005dd78;
label_8005dd78:
    goto label_8005dd7c;
label_8005dd7c:
    condition_value = (temp_v0 == 0u);
    temp_v0 = 0u + (uint32)(3);
    if (condition_value)
        goto label_8005ddc8;
    goto label_8005dd84;
label_8005dd80:
    temp_v0 = 0u + (uint32)(3);
    goto label_8005dd84;
label_8005dd84:
    temp_v1 = 0x80080000u;
    goto label_8005dd88;
label_8005dd88:
    temp_v1 = temp_v1 + (uint32)(27056);
    goto label_8005dd8c;
label_8005dd8c:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005dd90;
label_8005dd90:
    temp_v1 = 0x800e0000u;
    goto label_8005dd94;
label_8005dd94:
    temp_v1 = temp_v1 + (uint32)(-31776);
    goto label_8005dd98;
label_8005dd98:
    condition_value = (temp_v1 == 0u);
    temp_a1 = local_base + (uint32)(24);
    if (condition_value)
        goto label_8005ddc0;
    goto label_8005dda0;
label_8005dd9c:
    temp_a1 = local_base + (uint32)(24);
    goto label_8005dda0;
label_8005dda0:
    temp_a0 = 0u + (uint32)(7);
    goto label_8005dda4;
label_8005dda4:
    temp_a2 = 0u + (uint32)(-1);
    goto label_8005dda8;
label_8005dda8:
    temp_v0 = TM3_DRAFT_U8(temp_a1 + (uint32)(0));
    goto label_8005ddac;
label_8005ddac:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_8005ddb0;
label_8005ddb0:
    temp_a0 = temp_a0 + (uint32)(-1);
    goto label_8005ddb4;
label_8005ddb4:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005ddb8;
label_8005ddb8:
    condition_value = (temp_a0 != temp_a2);
    temp_v1 = temp_v1 + (uint32)(1);
    if (condition_value)
        goto label_8005dda8;
    goto label_8005ddc0;
label_8005ddbc:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_8005ddc0;
label_8005ddc0:
    temp_v0 = 0u + (uint32)(1);
    goto label_8005dffc;
label_8005ddc4:
    temp_v0 = 0u + (uint32)(1);
    goto label_8005ddc8;
label_8005ddc8:
    temp_v1 = 0x80080000u;
    goto label_8005ddcc;
label_8005ddcc:
    temp_v1 = temp_v1 + (uint32)(27056);
    goto label_8005ddd0;
label_8005ddd0:
    temp_v0 = 0u + (uint32)(2);
    goto label_8005ddd4;
label_8005ddd4:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005ddd8;
label_8005ddd8:
    temp_v1 = 0x800e0000u;
    goto label_8005dddc;
label_8005dddc:
    temp_v1 = temp_v1 + (uint32)(-31776);
    goto label_8005dde0;
label_8005dde0:
    condition_value = (temp_v1 == 0u);
    temp_a1 = local_base + (uint32)(24);
    if (condition_value)
        goto label_8005de54;
    goto label_8005dde8;
label_8005dde4:
    temp_a1 = local_base + (uint32)(24);
    goto label_8005dde8;
label_8005dde8:
    temp_a0 = 0u + (uint32)(7);
    goto label_8005ddec;
label_8005ddec:
    temp_a2 = 0u + (uint32)(-1);
    goto label_8005ddf0;
label_8005ddf0:
    temp_v0 = TM3_DRAFT_U8(temp_a1 + (uint32)(0));
    goto label_8005ddf4;
label_8005ddf4:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_8005ddf8;
label_8005ddf8:
    temp_a0 = temp_a0 + (uint32)(-1);
    goto label_8005ddfc;
label_8005ddfc:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005de00;
label_8005de00:
    condition_value = (temp_a0 != temp_a2);
    temp_v1 = temp_v1 + (uint32)(1);
    if (condition_value)
        goto label_8005ddf0;
    goto label_8005de08;
label_8005de04:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_8005de08;
label_8005de08:
    temp_v0 = 0u + (uint32)(2);
    goto label_8005dffc;
label_8005de0c:
    temp_v0 = 0u + (uint32)(2);
    goto label_8005de10;
label_8005de10:
    condition_value = (temp_s1 == 0u);
    temp_v0 = 0u + (uint32)(2);
    if (condition_value)
        goto label_8005de1c;
    goto label_8005de18;
label_8005de14:
    temp_v0 = 0u + (uint32)(2);
    goto label_8005de18;
label_8005de18:
    temp_v0 = 0u + (uint32)(5);
    goto label_8005de1c;
label_8005de1c:
    temp_at = 0x80080000u;
    goto label_8005de20;
label_8005de20:
    TM3_DRAFT_U8(temp_at + (uint32)(27056)) = (uint8)temp_v0;
    goto label_8005de24;
label_8005de24:
    temp_v1 = 0x800e0000u;
    goto label_8005de28;
label_8005de28:
    temp_v1 = temp_v1 + (uint32)(-31776);
    goto label_8005de2c;
label_8005de2c:
    condition_value = (temp_v1 == 0u);
    temp_a1 = local_base + (uint32)(24);
    if (condition_value)
        goto label_8005de54;
    goto label_8005de34;
label_8005de30:
    temp_a1 = local_base + (uint32)(24);
    goto label_8005de34;
label_8005de34:
    temp_a0 = 0u + (uint32)(7);
    goto label_8005de38;
label_8005de38:
    temp_a2 = 0u + (uint32)(-1);
    goto label_8005de3c;
label_8005de3c:
    temp_v0 = TM3_DRAFT_U8(temp_a1 + (uint32)(0));
    goto label_8005de40;
label_8005de40:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_8005de44;
label_8005de44:
    temp_a0 = temp_a0 + (uint32)(-1);
    goto label_8005de48;
label_8005de48:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005de4c;
label_8005de4c:
    condition_value = (temp_a0 != temp_a2);
    temp_v1 = temp_v1 + (uint32)(1);
    if (condition_value)
        goto label_8005de3c;
    goto label_8005de54;
label_8005de50:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_8005de54;
label_8005de54:
    temp_v0 = 0u + (uint32)(2);
    goto label_8005dffc;
label_8005de58:
    temp_v0 = 0u + (uint32)(2);
    goto label_8005de5c;
label_8005de5c:
    condition_value = (temp_s1 == 0u);
    temp_v0 = 0u + (uint32)(1);
    if (condition_value)
        goto label_8005de70;
    goto label_8005de64;
label_8005de60:
    temp_v0 = 0u + (uint32)(1);
    goto label_8005de64;
label_8005de64:
    condition_value = (temp_s0 != temp_v0);
    if (condition_value)
        goto label_8005de70;
    goto label_8005de6c;
label_8005de68:
    goto label_8005de6c;
label_8005de6c:
    temp_s1 = (0u + 0u);
    goto label_8005de70;
label_8005de70:
    condition_value = (temp_s1 == 0u);
    temp_v1 = 0u + (uint32)(1);
    if (condition_value)
        goto label_8005de7c;
    goto label_8005de78;
label_8005de74:
    temp_v1 = 0u + (uint32)(1);
    goto label_8005de78;
label_8005de78:
    temp_v1 = 0u + (uint32)(5);
    goto label_8005de7c;
label_8005de7c:
    temp_v0 = 0x80080000u;
    goto label_8005de80;
label_8005de80:
    temp_v0 = temp_v0 + (uint32)(27056);
    goto label_8005de84;
label_8005de84:
    TM3_DRAFT_U8(temp_v0 + (uint32)(1)) = (uint8)temp_v1;
    goto label_8005de88;
label_8005de88:
    temp_v1 = 0x800e0000u;
    goto label_8005de8c;
label_8005de8c:
    temp_v1 = temp_v1 + (uint32)(-31768);
    goto label_8005de90;
label_8005de90:
    condition_value = (temp_v1 == 0u);
    temp_a1 = local_base + (uint32)(24);
    if (condition_value)
        goto label_8005deb8;
    goto label_8005de98;
label_8005de94:
    temp_a1 = local_base + (uint32)(24);
    goto label_8005de98;
label_8005de98:
    temp_a0 = 0u + (uint32)(7);
    goto label_8005de9c;
label_8005de9c:
    temp_a2 = 0u + (uint32)(-1);
    goto label_8005dea0;
label_8005dea0:
    temp_v0 = TM3_DRAFT_U8(temp_a1 + (uint32)(0));
    goto label_8005dea4;
label_8005dea4:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_8005dea8;
label_8005dea8:
    temp_a0 = temp_a0 + (uint32)(-1);
    goto label_8005deac;
label_8005deac:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005deb0;
label_8005deb0:
    condition_value = (temp_a0 != temp_a2);
    temp_v1 = temp_v1 + (uint32)(1);
    if (condition_value)
        goto label_8005dea0;
    goto label_8005deb8;
label_8005deb4:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_8005deb8;
label_8005deb8:
    temp_v0 = 0x80080000u;
    goto label_8005debc;
label_8005debc:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(27032));
    goto label_8005dec0;
label_8005dec0:
    goto label_8005dec4;
label_8005dec4:
    TM3_DRAFT_U8(temp_v0 + (uint32)(0)) = (uint8)0u;
    goto label_8005dec8;
label_8005dec8:
    temp_v1 = 0x80080000u;
    goto label_8005decc;
label_8005decc:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(27044));
    goto label_8005ded0;
label_8005ded0:
    temp_v0 = 0u + (uint32)(4);
    goto label_8005ded4;
label_8005ded4:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)0u;
    goto label_8005dffc;
label_8005ded8:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)0u;
    goto label_8005dedc;
label_8005dedc:
    temp_a0 = 0x800e0000u;
    goto label_8005dee0;
label_8005dee0:
    temp_a0 = temp_a0 + (uint32)(-31760);
    goto label_8005dee4;
label_8005dee4:
    temp_v0 = 0x80080000u;
    goto label_8005dee8;
label_8005dee8:
    temp_v0 = temp_v0 + (uint32)(27056);
    goto label_8005deec;
label_8005deec:
    temp_v1 = 0u + (uint32)(4);
    goto label_8005def0;
label_8005def0:
    TM3_DRAFT_U8(temp_v0 + (uint32)(2)) = (uint8)temp_v1;
    goto label_8005def4;
label_8005def4:
    temp_v1 = TM3_DRAFT_U8(temp_v0 + (uint32)(2));
    goto label_8005def8;
label_8005def8:
    temp_a1 = local_base + (uint32)(24);
    goto label_8005defc;
label_8005defc:
    TM3_DRAFT_U8(temp_v0 + (uint32)(1)) = (uint8)temp_v1;
    goto label_8005df00;
label_8005df00:
    condition_value = (temp_a0 == 0u);
    temp_v1 = 0u + (uint32)(7);
    if (condition_value)
        goto label_8005df24;
    goto label_8005df08;
label_8005df04:
    temp_v1 = 0u + (uint32)(7);
    goto label_8005df08;
label_8005df08:
    temp_a2 = 0u + (uint32)(-1);
    goto label_8005df0c;
label_8005df0c:
    temp_v0 = TM3_DRAFT_U8(temp_a1 + (uint32)(0));
    goto label_8005df10;
label_8005df10:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_8005df14;
label_8005df14:
    temp_v1 = temp_v1 + (uint32)(-1);
    goto label_8005df18;
label_8005df18:
    TM3_DRAFT_U8(temp_a0 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005df1c;
label_8005df1c:
    condition_value = (temp_v1 != temp_a2);
    temp_a0 = temp_a0 + (uint32)(1);
    if (condition_value)
        goto label_8005df0c;
    goto label_8005df24;
label_8005df20:
    temp_a0 = temp_a0 + (uint32)(1);
    goto label_8005df24;
label_8005df24:
    temp_v1 = 0x800e0000u;
    goto label_8005df28;
label_8005df28:
    temp_v1 = temp_v1 + (uint32)(-31768);
    goto label_8005df2c;
label_8005df2c:
    condition_value = (temp_v1 == 0u);
    temp_a1 = local_base + (uint32)(24);
    if (condition_value)
        goto label_8005df54;
    goto label_8005df34;
label_8005df30:
    temp_a1 = local_base + (uint32)(24);
    goto label_8005df34;
label_8005df34:
    temp_a0 = 0u + (uint32)(7);
    goto label_8005df38;
label_8005df38:
    temp_a2 = 0u + (uint32)(-1);
    goto label_8005df3c;
label_8005df3c:
    temp_v0 = TM3_DRAFT_U8(temp_a1 + (uint32)(0));
    goto label_8005df40;
label_8005df40:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_8005df44;
label_8005df44:
    temp_a0 = temp_a0 + (uint32)(-1);
    goto label_8005df48;
label_8005df48:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005df4c;
label_8005df4c:
    condition_value = (temp_a0 != temp_a2);
    temp_v1 = temp_v1 + (uint32)(1);
    if (condition_value)
        goto label_8005df3c;
    goto label_8005df54;
label_8005df50:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_8005df54;
label_8005df54:
    temp_v0 = 0u + (uint32)(4);
    goto label_8005dffc;
label_8005df58:
    temp_v0 = 0u + (uint32)(4);
    goto label_8005df5c;
label_8005df5c:
    temp_a0 = 0x800e0000u;
    goto label_8005df60;
label_8005df60:
    temp_a0 = temp_a0 + (uint32)(-31776);
    goto label_8005df64;
label_8005df64:
    temp_v0 = 0x80080000u;
    goto label_8005df68;
label_8005df68:
    temp_v0 = temp_v0 + (uint32)(27056);
    goto label_8005df6c;
label_8005df6c:
    temp_v1 = 0u + (uint32)(5);
    goto label_8005df70;
label_8005df70:
    TM3_DRAFT_U8(temp_v0 + (uint32)(1)) = (uint8)temp_v1;
    goto label_8005df74;
label_8005df74:
    temp_v1 = TM3_DRAFT_U8(temp_v0 + (uint32)(1));
    goto label_8005df78;
label_8005df78:
    temp_a1 = local_base + (uint32)(24);
    goto label_8005df7c;
label_8005df7c:
    TM3_DRAFT_U8(temp_v0 + (uint32)(0)) = (uint8)temp_v1;
    goto label_8005df80;
label_8005df80:
    condition_value = (temp_a0 == 0u);
    temp_v1 = 0u + (uint32)(7);
    if (condition_value)
        goto label_8005dfa4;
    goto label_8005df88;
label_8005df84:
    temp_v1 = 0u + (uint32)(7);
    goto label_8005df88;
label_8005df88:
    temp_a2 = 0u + (uint32)(-1);
    goto label_8005df8c;
label_8005df8c:
    temp_v0 = TM3_DRAFT_U8(temp_a1 + (uint32)(0));
    goto label_8005df90;
label_8005df90:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_8005df94;
label_8005df94:
    temp_v1 = temp_v1 + (uint32)(-1);
    goto label_8005df98;
label_8005df98:
    TM3_DRAFT_U8(temp_a0 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005df9c;
label_8005df9c:
    condition_value = (temp_v1 != temp_a2);
    temp_a0 = temp_a0 + (uint32)(1);
    if (condition_value)
        goto label_8005df8c;
    goto label_8005dfa4;
label_8005dfa0:
    temp_a0 = temp_a0 + (uint32)(1);
    goto label_8005dfa4;
label_8005dfa4:
    temp_v1 = 0x800e0000u;
    goto label_8005dfa8;
label_8005dfa8:
    temp_v1 = temp_v1 + (uint32)(-31768);
    goto label_8005dfac;
label_8005dfac:
    condition_value = (temp_v1 == 0u);
    temp_a1 = local_base + (uint32)(24);
    if (condition_value)
        goto label_8005dfd4;
    goto label_8005dfb4;
label_8005dfb0:
    temp_a1 = local_base + (uint32)(24);
    goto label_8005dfb4;
label_8005dfb4:
    temp_a0 = 0u + (uint32)(7);
    goto label_8005dfb8;
label_8005dfb8:
    temp_a2 = 0u + (uint32)(-1);
    goto label_8005dfbc;
label_8005dfbc:
    temp_v0 = TM3_DRAFT_U8(temp_a1 + (uint32)(0));
    goto label_8005dfc0;
label_8005dfc0:
    temp_a1 = temp_a1 + (uint32)(1);
    goto label_8005dfc4;
label_8005dfc4:
    temp_a0 = temp_a0 + (uint32)(-1);
    goto label_8005dfc8;
label_8005dfc8:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_8005dfcc;
label_8005dfcc:
    condition_value = (temp_a0 != temp_a2);
    temp_v1 = temp_v1 + (uint32)(1);
    if (condition_value)
        goto label_8005dfbc;
    goto label_8005dfd4;
label_8005dfd0:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_8005dfd4;
label_8005dfd4:
    temp_v0 = 0u + (uint32)(6);
    goto label_8005dffc;
label_8005dfd8:
    temp_v0 = 0u + (uint32)(6);
    goto label_8005dfdc;
label_8005dfdc:
    temp_a0 = 0x80090000u;
    goto label_8005dfe0;
label_8005dfe0:
    temp_a0 = temp_a0 + (uint32)(-27976);
    temp_v0 = tm3_draft_indirect(0x8005f214u, 4u, temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_8005dfe8;
label_8005dfe4:
    temp_a0 = temp_a0 + (uint32)(-27976);
    goto label_8005dfe8;
label_8005dfe8:
    temp_a1 = *(uint8 *)(local_storage + 16);
    goto label_8005dfec;
label_8005dfec:
    temp_a0 = 0x80090000u;
    goto label_8005dff0;
label_8005dff0:
    temp_a0 = temp_a0 + (uint32)(-27956);
    temp_v0 = tm3_draft_indirect(0x8005a3f4u, 1u, temp_a0);
    goto label_8005dff8;
label_8005dff4:
    temp_a0 = temp_a0 + (uint32)(-27956);
    goto label_8005dff8;
label_8005dff8:
    temp_v0 = (0u + 0u);
    goto label_8005dffc;
label_8005dffc:
    goto label_8005e000;
label_8005e000:
    goto label_8005e004;
label_8005e004:
    goto label_8005e008;
label_8005e008:
    return temp_v0;
label_8005e00c:
    return temp_v0;
}
