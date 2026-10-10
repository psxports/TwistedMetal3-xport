#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

/* Unverified listing-derived control flow */
uint32 sub_8001FDCC(uint32 a1)
{
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    uint64 product;
    uint8 local_storage[136];
    /* TODO Local buffer address adapter and native aliases */
    local_base = TM3_DRAFT_LOCAL_ADDRESS(local_storage, sizeof(local_storage));
    temp_a0 = a1;
label_8001fdcc:
    goto label_8001fdd0;
label_8001fdd0:
    goto label_8001fdd4;
label_8001fdd4:
    temp_s1 = (temp_a0 + 0u);
    goto label_8001fdd8;
label_8001fdd8:
    goto label_8001fddc;
label_8001fddc:
    goto label_8001fde0;
label_8001fde0:
    goto label_8001fde4;
label_8001fde4:
    goto label_8001fde8;
label_8001fde8:
    goto label_8001fdec;
label_8001fdec:
    goto label_8001fdf0;
label_8001fdf0:
    goto label_8001fdf4;
label_8001fdf4:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3964));
    goto label_8001fdf8;
label_8001fdf8:
    goto label_8001fdfc;
label_8001fdfc:
    condition_value = (temp_v0 != 0u);
    if (condition_value)
        goto label_8001fe48;
    goto label_8001fe04;
label_8001fe00:
    goto label_8001fe04;
label_8001fe04:
    temp_a0 = TM3_DRAFT_U32(temp_s1 + (uint32)(4040));
    goto label_8001fe08;
label_8001fe08:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3940));
    goto label_8001fe0c;
label_8001fe0c:
    temp_v1 = TM3_DRAFT_U32(temp_a0 + (uint32)(40));
    goto label_8001fe10;
label_8001fe10:
    goto label_8001fe14;
label_8001fe14:
    product = (uint64)((sint64)(sint32)temp_v1 * (sint64)(sint32)temp_v0);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_8001fe18;
label_8001fe18:
    temp_v0 = TM3_DRAFT_U32(temp_a0 + (uint32)(32));
    goto label_8001fe1c;
label_8001fe1c:
    temp_t0 = lo_value;
    goto label_8001fe20;
label_8001fe20:
    temp_v1 = (uint32)(temp_t0 << 2);
    goto label_8001fe24;
label_8001fe24:
    temp_v1 = temp_v1 + (uint32)(32);
    goto label_8001fe28;
label_8001fe28:
    temp_v1 = (uint32)((sint32)temp_v1 >> 6);
    goto label_8001fe2c;
label_8001fe2c:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_8001fe30;
label_8001fe30:
    TM3_DRAFT_U32(temp_s1 + (uint32)(3292)) = (uint32)temp_v0;
    goto label_8001fe34;
label_8001fe34:
    TM3_DRAFT_U32(temp_s1 + (uint32)(340)) = (uint32)temp_v0;
    goto label_8001fe38;
label_8001fe38:
    TM3_DRAFT_U32(temp_s1 + (uint32)(260)) = (uint32)temp_v0;
    goto label_8001fe3c;
label_8001fe3c:
    TM3_DRAFT_U32(temp_s1 + (uint32)(180)) = (uint32)temp_v0;
    goto label_8001fe40;
label_8001fe40:
    TM3_DRAFT_U32(temp_s1 + (uint32)(100)) = (uint32)temp_v0;
    goto label_8001fe6c;
label_8001fe44:
    TM3_DRAFT_U32(temp_s1 + (uint32)(100)) = (uint32)temp_v0;
    goto label_8001fe48;
label_8001fe48:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(4040));
    goto label_8001fe4c;
label_8001fe4c:
    TM3_DRAFT_U32(temp_s1 + (uint32)(348)) = (uint32)0u;
    goto label_8001fe50;
label_8001fe50:
    TM3_DRAFT_U32(temp_s1 + (uint32)(268)) = (uint32)0u;
    goto label_8001fe54;
label_8001fe54:
    temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(32));
    goto label_8001fe58;
label_8001fe58:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(40));
    goto label_8001fe5c;
label_8001fe5c:
    goto label_8001fe60;
label_8001fe60:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_8001fe64;
label_8001fe64:
    TM3_DRAFT_U32(temp_s1 + (uint32)(340)) = (uint32)temp_v1;
    goto label_8001fe68;
label_8001fe68:
    TM3_DRAFT_U32(temp_s1 + (uint32)(260)) = (uint32)temp_v1;
    goto label_8001fe6c;
label_8001fe6c:
    temp_a0 = 0x00020000u;
    goto label_8001fe70;
label_8001fe70:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3932));
    goto label_8001fe74;
label_8001fe74:
    temp_s2 = TM3_DRAFT_U32(temp_s1 + (uint32)(3936));
    goto label_8001fe78;
label_8001fe78:
    temp_v1 = (uint32)(temp_v0 << 2);
    goto label_8001fe7c;
label_8001fe7c:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_8001fe80;
label_8001fe80:
    temp_v1 = (uint32)(temp_v1 << 2);
    goto label_8001fe84;
label_8001fe84:
    temp_v1 = (temp_v1 - temp_v0);
    goto label_8001fe88;
label_8001fe88:
    temp_v1 = (uint32)(temp_v1 << 2);
    goto label_8001fe8c;
label_8001fe8c:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_8001fe90;
label_8001fe90:
    temp_v1 = (uint32)(temp_v1 << 2);
    goto label_8001fe94;
label_8001fe94:
    temp_v1 = (temp_v1 - temp_v0);
    goto label_8001fe98;
label_8001fe98:
    temp_v1 = (uint32)(temp_v1 << 15);
    goto label_8001fe9c;
label_8001fe9c:
    temp_v1 = (temp_v1 + temp_a0);
    goto label_8001fea0;
label_8001fea0:
    condition_value = (temp_v0 == 0u);
    temp_s0 = (uint32)((sint32)temp_v1 >> 18);
    if (condition_value)
        goto label_8001ff4c;
    goto label_8001fea8;
label_8001fea4:
    temp_s0 = (uint32)((sint32)temp_v1 >> 18);
    goto label_8001fea8;
label_8001fea8:
    condition_value = (temp_s2 != 0u);
    if (condition_value)
        goto label_8001ff4c;
    goto label_8001feb0;
label_8001feac:
    goto label_8001feb0;
label_8001feb0:
    temp_v0 = TM3_DRAFT_U16(temp_s1 + (uint32)(1684));
    goto label_8001feb4;
label_8001feb4:
    goto label_8001feb8;
label_8001feb8:
    temp_v0 = temp_v0 & 0x1u;
    goto label_8001febc;
label_8001febc:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_8001ff4c;
    goto label_8001fec4;
label_8001fec0:
    goto label_8001fec4;
label_8001fec4:
    temp_v0 = TM3_DRAFT_U16(temp_s1 + (uint32)(1796));
    goto label_8001fec8;
label_8001fec8:
    goto label_8001fecc;
label_8001fecc:
    temp_v0 = temp_v0 & 0x1u;
    goto label_8001fed0;
label_8001fed0:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_8001ff4c;
    goto label_8001fed8;
label_8001fed4:
    goto label_8001fed8;
label_8001fed8:
    temp_v0 = TM3_DRAFT_U16(temp_s1 + (uint32)(1908));
    goto label_8001fedc;
label_8001fedc:
    goto label_8001fee0;
label_8001fee0:
    temp_v0 = temp_v0 & 0x1u;
    goto label_8001fee4;
label_8001fee4:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_8001ff4c;
    goto label_8001feec;
label_8001fee8:
    goto label_8001feec;
label_8001feec:
    temp_v0 = TM3_DRAFT_U16(temp_s1 + (uint32)(2020));
    goto label_8001fef0;
label_8001fef0:
    goto label_8001fef4;
label_8001fef4:
    temp_v0 = temp_v0 & 0x1u;
    goto label_8001fef8;
label_8001fef8:
    condition_value = (temp_v0 == 0u);
    temp_v0 = temp_s1 + (uint32)(1556);
    if (condition_value)
        goto label_8001ff4c;
    goto label_8001ff00;
label_8001fefc:
    temp_v0 = temp_s1 + (uint32)(1556);
    goto label_8001ff00;
label_8001ff00:
    temp_a3 = TM3_DRAFT_U32(temp_s1 + (uint32)(1556));
    goto label_8001ff04;
label_8001ff04:
    temp_a2 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_8001ff08;
label_8001ff08:
    temp_v1 = TM3_DRAFT_U32(temp_s1 + (uint32)(1568));
    goto label_8001ff0c;
label_8001ff0c:
    temp_a1 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_8001ff10;
label_8001ff10:
    temp_v0 = temp_s1 + (uint32)(1568);
    goto label_8001ff14;
label_8001ff14:
    temp_a3 = (temp_a3 - temp_v1);
    goto label_8001ff18;
label_8001ff18:
    temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_8001ff1c;
label_8001ff1c:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_8001ff20;
label_8001ff20:
    temp_a0 = local_base + (uint32)(48);
    goto label_8001ff24;
label_8001ff24:
    TM3_DRAFT_U32(local_base + 48u) = (uint32)temp_a3;
    goto label_8001ff28;
label_8001ff28:
    temp_a2 = (temp_a2 - temp_v1);
    goto label_8001ff2c;
label_8001ff2c:
    temp_a1 = (temp_a1 - temp_v0);
    goto label_8001ff30;
label_8001ff30:
    TM3_DRAFT_U32(temp_a0 + (uint32)(4)) = (uint32)temp_a2;
    goto label_8001ff34;
label_8001ff34:
    TM3_DRAFT_U32(temp_a0 + (uint32)(8)) = (uint32)temp_a1;
    temp_v0 = sub_80013E98(temp_a0);
    goto label_8001ff3c;
label_8001ff38:
    TM3_DRAFT_U32(temp_a0 + (uint32)(8)) = (uint32)temp_a1;
    goto label_8001ff3c;
label_8001ff3c:
    temp_v0 = (sint32)temp_v0 < 65;
    goto label_8001ff40;
label_8001ff40:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_8001ff4c;
    goto label_8001ff48;
label_8001ff44:
    goto label_8001ff48;
label_8001ff48:
    temp_s2 = 0u + (uint32)(5);
    goto label_8001ff4c;
label_8001ff4c:
    TM3_DRAFT_U16(temp_s1 + (uint32)(194)) = (uint16)temp_s0;
    goto label_8001ff50;
label_8001ff50:
    condition_value = ((sint32)temp_s0 < 0);
    TM3_DRAFT_U16(temp_s1 + (uint32)(114)) = (uint16)temp_s0;
    if (condition_value)
        goto label_8001ff78;
    goto label_8001ff58;
label_8001ff54:
    TM3_DRAFT_U16(temp_s1 + (uint32)(114)) = (uint16)temp_s0;
    goto label_8001ff58;
label_8001ff58:
    temp_v0 = 0x80080000u;
    goto label_8001ff5c;
label_8001ff5c:
    temp_v0 = temp_v0 + (uint32)(7736);
    goto label_8001ff60;
label_8001ff60:
    temp_v1 = (uint32)(temp_s0 << 2);
    goto label_8001ff64;
label_8001ff64:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_8001ff68;
label_8001ff68:
    temp_v0 = TM3_DRAFT_I16(temp_v1 + (uint32)(0));
    goto label_8001ff6c;
label_8001ff6c:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(0));
    goto label_8001ff70;
label_8001ff70:
    temp_v0 = (0u - temp_v0);
    goto label_8001ff90;
label_8001ff74:
    temp_v0 = (0u - temp_v0);
    goto label_8001ff78;
label_8001ff78:
    temp_v0 = 0x80080000u;
    goto label_8001ff7c;
label_8001ff7c:
    temp_v0 = temp_v0 + (uint32)(7736);
    goto label_8001ff80;
label_8001ff80:
    temp_v1 = (uint32)(temp_s0 << 2);
    goto label_8001ff84;
label_8001ff84:
    temp_v0 = (temp_v0 - temp_v1);
    goto label_8001ff88;
label_8001ff88:
    temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_8001ff8c;
label_8001ff8c:
    temp_v0 = TM3_DRAFT_I16(temp_v0 + (uint32)(0));
    goto label_8001ff90;
label_8001ff90:
    temp_v1 = (uint32)((sint32)temp_v1 >> 16);
    goto label_8001ff94;
label_8001ff94:
    temp_a0 = temp_s1 + (uint32)(1536);
    goto label_8001ff98;
label_8001ff98:
    temp_a1 = local_base + (uint32)(24);
    goto label_8001ff9c;
label_8001ff9c:
    temp_s0 = local_base + (uint32)(32);
    goto label_8001ffa0;
label_8001ffa0:
    temp_a2 = (temp_s0 + 0u);
    goto label_8001ffa4;
label_8001ffa4:
    temp_v0 = (0u - temp_v0);
    goto label_8001ffa8;
label_8001ffa8:
    TM3_DRAFT_U16(local_base + 24u) = (uint16)temp_v0;
    goto label_8001ffac;
label_8001ffac:
    TM3_DRAFT_U16(temp_a1 + (uint32)(2)) = (uint16)0u;
    goto label_8001ffb0;
label_8001ffb0:
    TM3_DRAFT_U16(temp_a1 + (uint32)(4)) = (uint16)temp_v1;
    temp_v0 = sub_8005BB34(temp_a0, temp_a1, temp_a2);
    goto label_8001ffb8;
label_8001ffb4:
    TM3_DRAFT_U16(temp_a1 + (uint32)(4)) = (uint16)temp_v1;
    goto label_8001ffb8;
label_8001ffb8:
    temp_v0 = TM3_DRAFT_U32(local_base + 32u);
    goto label_8001ffbc;
label_8001ffbc:
    temp_v1 = TM3_DRAFT_U32(temp_s0 + (uint32)(4));
    goto label_8001ffc0;
label_8001ffc0:
    temp_a1 = TM3_DRAFT_U32(temp_s0 + (uint32)(8));
    goto label_8001ffc4;
label_8001ffc4:
    TM3_DRAFT_U16(temp_s1 + (uint32)(80)) = (uint16)temp_v0;
    goto label_8001ffc8;
label_8001ffc8:
    temp_v0 = temp_s1 + (uint32)(80);
    goto label_8001ffcc;
label_8001ffcc:
    TM3_DRAFT_U16(temp_v0 + (uint32)(2)) = (uint16)temp_v1;
    goto label_8001ffd0;
label_8001ffd0:
    TM3_DRAFT_U16(temp_v0 + (uint32)(4)) = (uint16)temp_a1;
    goto label_8001ffd4;
label_8001ffd4:
    temp_v1 = TM3_DRAFT_I16(temp_s1 + (uint32)(80));
    goto label_8001ffd8;
label_8001ffd8:
    temp_a0 = TM3_DRAFT_I16(temp_v0 + (uint32)(2));
    goto label_8001ffdc;
label_8001ffdc:
    temp_v0 = temp_s1 + (uint32)(160);
    goto label_8001ffe0;
label_8001ffe0:
    TM3_DRAFT_U16(temp_s1 + (uint32)(160)) = (uint16)temp_v1;
    goto label_8001ffe4;
label_8001ffe4:
    TM3_DRAFT_U16(temp_v0 + (uint32)(2)) = (uint16)temp_a0;
    goto label_8001ffe8;
label_8001ffe8:
    TM3_DRAFT_U16(temp_v0 + (uint32)(4)) = (uint16)temp_a1;
    goto label_8001ffec;
label_8001ffec:
    temp_v1 = TM3_DRAFT_U32(temp_s1 + (uint32)(4040));
    goto label_8001fff0;
label_8001fff0:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3284));
    goto label_8001fff4;
label_8001fff4:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(20));
    goto label_8001fff8;
label_8001fff8:
    goto label_8001fffc;
label_8001fffc:
    temp_v0 = (temp_v0 - temp_v1);
    goto label_80020000;
label_80020000:
    product = (uint64)((sint64)(sint32)temp_v0 * (sint64)(sint32)temp_s2);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_80020004;
label_80020004:
    temp_a0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3996));
    goto label_80020008;
label_80020008:
    temp_t0 = lo_value;
    goto label_8002000c;
label_8002000c:
    temp_v0 = (uint32)(temp_t0 << 2);
    goto label_80020010;
label_80020010:
    temp_v0 = temp_v0 + (uint32)(32);
    goto label_80020014;
label_80020014:
    temp_v0 = (uint32)((sint32)temp_v0 >> 6);
    goto label_80020018;
label_80020018:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_8002001c;
label_8002001c:
    condition_value = (temp_a0 != 0u);
    TM3_DRAFT_U32(temp_s1 + (uint32)(3288)) = (uint32)temp_v1;
    if (condition_value)
        goto label_80020180;
    goto label_80020024;
label_80020020:
    TM3_DRAFT_U32(temp_s1 + (uint32)(3288)) = (uint32)temp_v1;
    goto label_80020024;
label_80020024:
    temp_v1 = TM3_DRAFT_U16(temp_s1 + (uint32)(1684));
    goto label_80020028;
label_80020028:
    temp_v0 = TM3_DRAFT_U16(temp_s1 + (uint32)(1796));
    goto label_8002002c;
label_8002002c:
    temp_a0 = TM3_DRAFT_U16(temp_s1 + (uint32)(1908));
    goto label_80020030;
label_80020030:
    temp_v1 = temp_v1 & 0x1u;
    goto label_80020034;
label_80020034:
    temp_v0 = temp_v0 & 0x1u;
    goto label_80020038;
label_80020038:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_8002003c;
label_8002003c:
    temp_a0 = temp_a0 & 0x1u;
    goto label_80020040;
label_80020040:
    temp_v0 = TM3_DRAFT_U16(temp_s1 + (uint32)(2020));
    goto label_80020044;
label_80020044:
    temp_v1 = (temp_v1 + temp_a0);
    goto label_80020048;
label_80020048:
    temp_v0 = temp_v0 & 0x1u;
    goto label_8002004c;
label_8002004c:
    temp_a2 = (temp_v1 + temp_v0);
    goto label_80020050;
label_80020050:
    temp_v0 = (sint32)temp_a2 < 3;
    goto label_80020054;
label_80020054:
    condition_value = (temp_v0 == 0u);
    temp_s3 = (0u + 0u);
    if (condition_value)
        goto label_800200f0;
    goto label_8002005c;
label_80020058:
    temp_s3 = (0u + 0u);
    goto label_8002005c;
label_8002005c:
    condition_value = (temp_a2 != 0u);
    temp_a2 = (0u + 0u);
    if (condition_value)
        goto label_8002007c;
    goto label_80020064;
label_80020060:
    temp_a2 = (0u + 0u);
    goto label_80020064;
label_80020064:
    temp_a0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3924));
    goto label_80020068;
label_80020068:
    temp_a1 = 0x80080000u;
    goto label_8002006c;
label_8002006c:
    temp_a1 = temp_a1 + (uint32)(32692);
    temp_v0 = sub_8004179C(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u), TM3_DRAFT_U32(local_base + 20u), TM3_DRAFT_U32(local_base + 24u));
    goto label_80020074;
label_80020070:
    temp_a1 = temp_a1 + (uint32)(32692);
    goto label_80020074;
label_80020074:
    goto label_80020180;
label_80020078:
    goto label_8002007c;
label_8002007c:
    temp_v1 = (temp_a2 + 0u);
    goto label_80020080;
label_80020080:
    temp_a0 = (temp_s1 + 0u);
    goto label_80020084;
label_80020084:
    temp_v0 = TM3_DRAFT_U32(temp_a0 + (uint32)(72));
    goto label_80020088;
label_80020088:
    goto label_8002008c;
label_8002008c:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_80020098;
    goto label_80020094;
label_80020090:
    goto label_80020094;
label_80020094:
    temp_a2 = temp_a2 + (uint32)(1);
    goto label_80020098;
label_80020098:
    temp_v1 = temp_v1 + (uint32)(1);
    goto label_8002009c;
label_8002009c:
    temp_v0 = (sint32)temp_v1 < 4;
    goto label_800200a0;
label_800200a0:
    condition_value = (temp_v0 != 0u);
    temp_a0 = temp_a0 + (uint32)(80);
    if (condition_value)
        goto label_80020084;
    goto label_800200a8;
label_800200a4:
    temp_a0 = temp_a0 + (uint32)(80);
    goto label_800200a8;
label_800200a8:
    temp_v0 = (uint32)(temp_a2 >> 31);
    goto label_800200ac;
label_800200ac:
    temp_v0 = (temp_a2 + temp_v0);
    goto label_800200b0;
label_800200b0:
    temp_a2 = (uint32)((sint32)temp_v0 >> 1);
    goto label_800200b4;
label_800200b4:
    temp_v0 = 0u + (uint32)(1);
    goto label_800200b8;
label_800200b8:
    condition_value = (temp_a2 != temp_v0);
    if (condition_value)
        goto label_800200d8;
    goto label_800200c0;
label_800200bc:
    goto label_800200c0;
label_800200c0:
    temp_a0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3924));
    goto label_800200c4;
label_800200c4:
    temp_a1 = 0x80080000u;
    goto label_800200c8;
label_800200c8:
    temp_a1 = temp_a1 + (uint32)(32716);
    temp_v0 = sub_8004179C(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u), TM3_DRAFT_U32(local_base + 20u), TM3_DRAFT_U32(local_base + 24u));
    goto label_800200d0;
label_800200cc:
    temp_a1 = temp_a1 + (uint32)(32716);
    goto label_800200d0;
label_800200d0:
    goto label_80020180;
label_800200d4:
    goto label_800200d8;
label_800200d8:
    temp_a0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3924));
    goto label_800200dc;
label_800200dc:
    temp_a1 = 0x80080000u;
    goto label_800200e0;
label_800200e0:
    temp_a1 = temp_a1 + (uint32)(32744);
    temp_v0 = sub_8004179C(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u), TM3_DRAFT_U32(local_base + 20u), TM3_DRAFT_U32(local_base + 24u));
    goto label_800200e8;
label_800200e4:
    temp_a1 = temp_a1 + (uint32)(32744);
    goto label_800200e8;
label_800200e8:
    goto label_80020180;
label_800200ec:
    goto label_800200f0;
label_800200f0:
    temp_s2 = (temp_s1 + 0u);
    goto label_800200f4;
label_800200f4:
    temp_s0 = 0u + (uint32)(1592);
    goto label_800200f8;
label_800200f8:
    temp_v0 = TM3_DRAFT_I16(temp_s1 + (uint32)(1538));
    goto label_800200fc;
label_800200fc:
    temp_v1 = TM3_DRAFT_I16(temp_s1 + (uint32)(1544));
    goto label_80020100;
label_80020100:
    temp_a0 = TM3_DRAFT_I16(temp_s1 + (uint32)(1550));
    goto label_80020104;
label_80020104:
    temp_v0 = (0u - temp_v0);
    goto label_80020108;
label_80020108:
    TM3_DRAFT_U16(local_base + 64u) = (uint16)temp_v0;
    goto label_8002010c;
label_8002010c:
    temp_v0 = local_base + (uint32)(64);
    goto label_80020110;
label_80020110:
    temp_v1 = (0u - temp_v1);
    goto label_80020114;
label_80020114:
    temp_a0 = (0u - temp_a0);
    goto label_80020118;
label_80020118:
    TM3_DRAFT_U16(temp_v0 + (uint32)(2)) = (uint16)temp_v1;
    goto label_8002011c;
label_8002011c:
    TM3_DRAFT_U16(temp_v0 + (uint32)(4)) = (uint16)temp_a0;
    goto label_80020120;
label_80020120:
    temp_a0 = (temp_s1 + temp_s0);
    goto label_80020124;
label_80020124:
    temp_a0 = temp_a0 + (uint32)(44);
    goto label_80020128;
label_80020128:
    temp_a1 = local_base + (uint32)(64);
    goto label_8002012c;
label_8002012c:
    temp_a3 = 0u + (uint32)(12);
    goto label_80020130;
label_80020130:
    temp_v0 = TM3_DRAFT_U32(temp_s2 + (uint32)(1592));
    goto label_80020134;
label_80020134:
    temp_s2 = temp_s2 + (uint32)(112);
    goto label_80020138;
label_80020138:
    temp_s0 = temp_s0 + (uint32)(112);
    goto label_8002013c;
label_8002013c:
    temp_s3 = temp_s3 + (uint32)(1);
    goto label_80020140;
label_80020140:
    temp_a2 = (uint32)(temp_v0 << 3);
    goto label_80020144;
label_80020144:
    temp_a2 = (temp_a2 + temp_v0);
    goto label_80020148;
label_80020148:
    temp_a2 = (uint32)(temp_a2 << 6);
    goto label_8002014c;
label_8002014c:
    temp_a2 = (temp_a2 - temp_v0);
    goto label_80020150;
label_80020150:
    temp_a2 = (uint32)(temp_a2 << 6);
    temp_v0 = sub_800148DC(temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_80020158;
label_80020154:
    temp_a2 = (uint32)(temp_a2 << 6);
    goto label_80020158;
label_80020158:
    temp_v0 = (sint32)temp_s3 < 8;
    goto label_8002015c;
label_8002015c:
    condition_value = (temp_v0 != 0u);
    temp_a0 = (temp_s1 + temp_s0);
    if (condition_value)
        goto label_80020124;
    goto label_80020164;
label_80020160:
    temp_a0 = (temp_s1 + temp_s0);
    goto label_80020164;
label_80020164:
    temp_v1 = TM3_DRAFT_I8(temp_s1 + (uint32)(3328));
    goto label_80020168;
label_80020168:
    temp_v0 = 0u + (uint32)(1);
    goto label_8002016c;
label_8002016c:
    condition_value = (temp_v1 != temp_v0);
    if (condition_value)
        goto label_80020180;
    goto label_80020174;
label_80020170:
    goto label_80020174;
label_80020174:
    temp_a0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3924));
    goto label_80020178;
label_80020178:
    temp_a1 = 0u + (uint32)(19);
    temp_v0 = sub_80047364(temp_a0, temp_a1);
    goto label_80020180;
label_8002017c:
    temp_a1 = 0u + (uint32)(19);
    goto label_80020180;
label_80020180:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3960));
    goto label_80020184;
label_80020184:
    goto label_80020188;
label_80020188:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_80020214;
    goto label_80020190;
label_8002018c:
    goto label_80020190;
label_80020190:
    temp_v1 = TM3_DRAFT_U32(temp_s1 + (uint32)(4076));
    goto label_80020194;
label_80020194:
    goto label_80020198;
label_80020198:
    condition_value = ((sint32)temp_v1 <= 0);
    temp_s0 = 0u + (uint32)(1);
    if (condition_value)
        goto label_80020214;
    goto label_800201a0;
label_8002019c:
    temp_s0 = 0u + (uint32)(1);
    goto label_800201a0;
label_800201a0:
    temp_v0 = TM3_DRAFT_I8(temp_s1 + (uint32)(3328));
    goto label_800201a4;
label_800201a4:
    goto label_800201a8;
label_800201a8:
    condition_value = (temp_v0 != temp_s0);
    temp_v0 = temp_v1 + (uint32)(-20);
    if (condition_value)
        goto label_800201b4;
    goto label_800201b0;
label_800201ac:
    temp_v0 = temp_v1 + (uint32)(-20);
    goto label_800201b0;
label_800201b0:
    TM3_DRAFT_U32(temp_s1 + (uint32)(4076)) = (uint32)temp_v0;
    goto label_800201b4;
label_800201b4:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(4076));
    goto label_800201b8;
label_800201b8:
    goto label_800201bc;
label_800201bc:
    condition_value = ((sint32)temp_v0 >= 0);
    temp_a1 = 0x80090000u;
    if (condition_value)
        goto label_800201dc;
    goto label_800201c4;
label_800201c0:
    temp_a1 = 0x80090000u;
    goto label_800201c4;
label_800201c4:
    temp_a0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3924));
    goto label_800201c8;
label_800201c8:
    temp_a1 = temp_a1 + (uint32)(-32760);
    goto label_800201cc;
label_800201cc:
    TM3_DRAFT_U32(temp_s1 + (uint32)(4076)) = (uint32)0u;
    temp_v0 = sub_8004179C(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u), TM3_DRAFT_U32(local_base + 20u), TM3_DRAFT_U32(local_base + 24u));
    goto label_800201d4;
label_800201d0:
    TM3_DRAFT_U32(temp_s1 + (uint32)(4076)) = (uint32)0u;
    goto label_800201d4;
label_800201d4:
    goto label_80020214;
label_800201d8:
    goto label_800201dc;
label_800201dc:
    temp_a0 = (temp_s1 + 0u);
    temp_v0 = sub_80018C38(temp_a0);
    goto label_800201e4;
label_800201e0:
    temp_a0 = (temp_s1 + 0u);
    goto label_800201e4;
label_800201e4:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(4040));
    goto label_800201e8;
label_800201e8:
    temp_a0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3284));
    goto label_800201ec;
label_800201ec:
    temp_a1 = TM3_DRAFT_I16(temp_v0 + (uint32)(422));
    goto label_800201f0;
label_800201f0:
    temp_a2 = 0u + (uint32)(12);
    temp_v0 = sub_80015684(temp_a0, temp_a1, temp_a2);
    goto label_800201f8;
label_800201f4:
    temp_a2 = 0u + (uint32)(12);
    goto label_800201f8;
label_800201f8:
    temp_v1 = TM3_DRAFT_I8(temp_s1 + (uint32)(3328));
    goto label_800201fc;
label_800201fc:
    goto label_80020200;
label_80020200:
    condition_value = (temp_v1 != temp_s0);
    TM3_DRAFT_U32(temp_s1 + (uint32)(3288)) = (uint32)temp_v0;
    if (condition_value)
        goto label_80020214;
    goto label_80020208;
label_80020204:
    TM3_DRAFT_U32(temp_s1 + (uint32)(3288)) = (uint32)temp_v0;
    goto label_80020208;
label_80020208:
    temp_a0 = TM3_DRAFT_U32(temp_s1 + (uint32)(3924));
    goto label_8002020c;
label_8002020c:
    temp_a1 = 0u + (uint32)(20);
    temp_v0 = sub_80047364(temp_a0, temp_a1);
    goto label_80020214;
label_80020210:
    temp_a1 = 0u + (uint32)(20);
    goto label_80020214;
label_80020214:
    temp_a0 = (temp_s1 + 0u);
    temp_v0 = sub_8001FA88(temp_a0);
    goto label_8002021c;
label_80020218:
    temp_a0 = (temp_s1 + 0u);
    goto label_8002021c;
label_8002021c:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(2488));
    goto label_80020220;
label_80020220:
    temp_s2 = temp_s1 + (uint32)(1592);
    goto label_80020224;
label_80020224:
    temp_v0 = (temp_s2 < temp_v0);
    goto label_80020228;
label_80020228:
    condition_value = (temp_v0 == 0u);
    temp_v0 = 0x80090000u;
    if (condition_value)
        goto label_800203b0;
    goto label_80020230;
label_8002022c:
    temp_v0 = 0x80090000u;
    goto label_80020230;
label_80020230:
    temp_s6 = temp_v0 + (uint32)(-23616);
    goto label_80020234;
label_80020234:
    temp_v0 = 0x80090000u;
    goto label_80020238;
label_80020238:
    temp_s5 = temp_v0 + (uint32)(-23816);
    goto label_8002023c;
label_8002023c:
    temp_s0 = temp_s1 + (uint32)(1687);
    goto label_80020240;
label_80020240:
    temp_s3 = temp_s1 + (uint32)(1676);
    goto label_80020244;
label_80020244:
    temp_s4 = temp_s1 + (uint32)(1636);
    goto label_80020248;
label_80020248:
    temp_a1 = TM3_DRAFT_U32(temp_s0 + (uint32)(-51));
    goto label_8002024c;
label_8002024c:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(-27));
    goto label_80020250;
label_80020250:
    temp_a2 = TM3_DRAFT_U32(temp_s0 + (uint32)(-43));
    goto label_80020254;
label_80020254:
    temp_v1 = TM3_DRAFT_U32(temp_s0 + (uint32)(-19));
    goto label_80020258;
label_80020258:
    temp_a0 = TM3_DRAFT_U32(temp_s0 + (uint32)(5));
    goto label_8002025c;
label_8002025c:
    temp_a1 = (temp_a1 + temp_v0);
    goto label_80020260;
label_80020260:
    temp_a2 = (temp_a2 + temp_v1);
    goto label_80020264;
label_80020264:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(-47));
    goto label_80020268;
label_80020268:
    temp_v1 = TM3_DRAFT_U32(temp_s0 + (uint32)(-23));
    goto label_8002026c;
label_8002026c:
    temp_v0 = (temp_v0 + temp_a0);
    goto label_80020270;
label_80020270:
    temp_a0 = TM3_DRAFT_I16(temp_s0 + (uint32)(-3));
    goto label_80020274;
label_80020274:
    TM3_DRAFT_U32(temp_s0 + (uint32)(-51)) = (uint32)temp_a1;
    goto label_80020278;
label_80020278:
    TM3_DRAFT_U32(temp_s0 + (uint32)(-43)) = (uint32)temp_a2;
    goto label_8002027c;
label_8002027c:
    TM3_DRAFT_U32(temp_s0 + (uint32)(-47)) = (uint32)temp_v0;
    goto label_80020280;
label_80020280:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80020284;
label_80020284:
    condition_value = (temp_a0 == 0u);
    TM3_DRAFT_U32(temp_s0 + (uint32)(-47)) = (uint32)temp_v0;
    if (condition_value)
        goto label_800202d0;
    goto label_8002028c;
label_80020288:
    TM3_DRAFT_U32(temp_s0 + (uint32)(-47)) = (uint32)temp_v0;
    goto label_8002028c;
label_8002028c:
    temp_v0 = TM3_DRAFT_U8(temp_s0 + (uint32)(0));
    goto label_80020290;
label_80020290:
    temp_v1 = 0x80090000u;
    goto label_80020294;
label_80020294:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(-25452));
    goto label_80020298;
label_80020298:
    temp_v0 = (uint32)(temp_v0 << 5);
    goto label_8002029c;
label_8002029c:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_800202a0;
label_800202a0:
    temp_v0 = TM3_DRAFT_I8(temp_v0 + (uint32)(0));
    goto label_800202a4;
label_800202a4:
    goto label_800202a8;
label_800202a8:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_800202ac;
label_800202ac:
    temp_v0 = (temp_v0 + temp_s6);
    goto label_800202b0;
label_800202b0:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_800202b4;
label_800202b4:
    goto label_800202b8;
label_800202b8:
    condition_value = (temp_v0 == 0u);
    temp_a0 = (temp_s4 + 0u);
    if (condition_value)
        goto label_800202d0;
    goto label_800202c0;
label_800202bc:
    temp_a0 = (temp_s4 + 0u);
    goto label_800202c0;
label_800202c0:
    temp_a1 = temp_s2 + (uint32)(32);
    goto label_800202c4;
label_800202c4:
    temp_a2 = (0u - temp_v0);
    goto label_800202c8;
label_800202c8:
    temp_a3 = 0u + (uint32)(12);
    temp_v0 = sub_8001498C(temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_800202d0;
label_800202cc:
    temp_a3 = 0u + (uint32)(12);
    goto label_800202d0;
label_800202d0:
    temp_a0 = (temp_s4 + 0u);
    goto label_800202d4;
label_800202d4:
    temp_a1 = (temp_s3 + 0u);
    temp_v0 = sub_80013A90(temp_a0, temp_a1);
    goto label_800202dc;
label_800202d8:
    temp_a1 = (temp_s3 + 0u);
    goto label_800202dc;
label_800202dc:
    temp_a2 = (temp_v0 + 0u);
    goto label_800202e0;
label_800202e0:
    condition_value = ((sint32)temp_a2 <= 0);
    temp_v0 = temp_a2 + (uint32)(2048);
    if (condition_value)
        goto label_800202f0;
    goto label_800202e8;
label_800202e4:
    temp_v0 = temp_a2 + (uint32)(2048);
    goto label_800202e8;
label_800202e8:
    temp_a2 = (0u + 0u);
    goto label_800202f8;
label_800202ec:
    temp_a2 = (0u + 0u);
    goto label_800202f0;
label_800202f0:
    temp_v0 = (uint32)((sint32)temp_v0 >> 12);
    goto label_800202f4;
label_800202f4:
    temp_a2 = (0u - temp_v0);
    goto label_800202f8;
label_800202f8:
    temp_v0 = TM3_DRAFT_U16(temp_s0 + (uint32)(-3));
    goto label_800202fc;
label_800202fc:
    goto label_80020300;
label_80020300:
    temp_v0 = temp_v0 & 0x2u;
    goto label_80020304;
label_80020304:
    condition_value = (temp_v0 == 0u);
    temp_a0 = (temp_s2 + 0u);
    if (condition_value)
        goto label_8002035c;
    goto label_8002030c;
label_80020308:
    temp_a0 = (temp_s2 + 0u);
    goto label_8002030c;
label_8002030c:
    temp_v0 = TM3_DRAFT_U8(temp_s0 + (uint32)(0));
    goto label_80020310;
label_80020310:
    temp_v1 = 0x80090000u;
    goto label_80020314;
label_80020314:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(-25452));
    goto label_80020318;
label_80020318:
    temp_v0 = (uint32)(temp_v0 << 5);
    goto label_8002031c;
label_8002031c:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80020320;
label_80020320:
    temp_v1 = TM3_DRAFT_I8(temp_v0 + (uint32)(0));
    goto label_80020324;
label_80020324:
    temp_v0 = 0x80090000u;
    goto label_80020328;
label_80020328:
    temp_v0 = temp_v0 + (uint32)(-23736);
    goto label_8002032c;
label_8002032c:
    temp_v1 = (uint32)(temp_v1 << 2);
    goto label_80020330;
label_80020330:
    temp_v0 = (temp_v1 + temp_v0);
    goto label_80020334;
label_80020334:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_80020338;
label_80020338:
    temp_v1 = (temp_v1 + temp_s5);
    goto label_8002033c;
label_8002033c:
    TM3_DRAFT_U32(local_base + 16u) = (uint32)temp_v0;
    goto label_80020340;
label_80020340:
    temp_a3 = TM3_DRAFT_U32(temp_v1 + (uint32)(0));
    goto label_80020344;
label_80020344:
    temp_a1 = (temp_s3 + 0u);
    temp_v0 = sub_800203D8(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u));
    goto label_8002034c;
label_80020348:
    temp_a1 = (temp_s3 + 0u);
    goto label_8002034c;
label_8002034c:
    temp_a2 = (0u + 0u);
    goto label_80020350;
label_80020350:
    TM3_DRAFT_U16(temp_s0 + (uint32)(-11)) = (uint16)0u;
    goto label_80020354;
label_80020354:
    TM3_DRAFT_U16(temp_s0 + (uint32)(-9)) = (uint16)0u;
    goto label_80020358;
label_80020358:
    TM3_DRAFT_U16(temp_s0 + (uint32)(-7)) = (uint16)0u;
    goto label_8002035c;
label_8002035c:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(-15));
    goto label_80020360;
label_80020360:
    goto label_80020364;
label_80020364:
    condition_value = (temp_v0 == 0u);
    temp_a0 = (temp_s1 + 0u);
    if (condition_value)
        goto label_80020394;
    goto label_8002036c;
label_80020368:
    temp_a0 = (temp_s1 + 0u);
    goto label_8002036c;
label_8002036c:
    temp_a1 = (temp_s2 + 0u);
    goto label_80020370;
label_80020370:
    temp_v0 = TM3_DRAFT_U8(temp_s0 + (uint32)(0));
    goto label_80020374;
label_80020374:
    temp_v1 = 0x80090000u;
    goto label_80020378;
label_80020378:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(-25452));
    goto label_8002037c;
label_8002037c:
    temp_v0 = (uint32)(temp_v0 << 5);
    goto label_80020380;
label_80020380:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80020384;
label_80020384:
    temp_v0 = TM3_DRAFT_I8(temp_v0 + (uint32)(0));
    goto label_80020388;
label_80020388:
    temp_a3 = (temp_s3 + 0u);
    goto label_8002038c;
label_8002038c:
    TM3_DRAFT_U32(local_base + 16u) = (uint32)temp_v0;
    temp_v0 = sub_800206A8(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u));
    goto label_80020394;
label_80020390:
    TM3_DRAFT_U32(local_base + 16u) = (uint32)temp_v0;
    goto label_80020394;
label_80020394:
    temp_s0 = temp_s0 + (uint32)(112);
    goto label_80020398;
label_80020398:
    temp_s3 = temp_s3 + (uint32)(112);
    goto label_8002039c;
label_8002039c:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(2488));
    goto label_800203a0;
label_800203a0:
    temp_s2 = temp_s2 + (uint32)(112);
    goto label_800203a4;
label_800203a4:
    temp_v0 = (temp_s2 < temp_v0);
    goto label_800203a8;
label_800203a8:
    condition_value = (temp_v0 != 0u);
    temp_s4 = temp_s4 + (uint32)(112);
    if (condition_value)
        goto label_80020248;
    goto label_800203b0;
label_800203ac:
    temp_s4 = temp_s4 + (uint32)(112);
    goto label_800203b0;
label_800203b0:
    goto label_800203b4;
label_800203b4:
    goto label_800203b8;
label_800203b8:
    goto label_800203bc;
label_800203bc:
    goto label_800203c0;
label_800203c0:
    goto label_800203c4;
label_800203c4:
    goto label_800203c8;
label_800203c8:
    goto label_800203cc;
label_800203cc:
    goto label_800203d0;
label_800203d0:
    return temp_v0;
label_800203d4:
    return temp_v0;
}
