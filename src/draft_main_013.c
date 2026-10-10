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
uint32 sub_800222C4(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800222C4u, "SCUS_942.49");
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    /* TODO Incoming volatile values not supplied by the provisional API remain unresolved */
    uint64 product;
    uint8 local_storage[96];
    /* TODO Local buffer address adapter and native aliases */
    local_base = tm3_draft_local_address(local_storage, sizeof(local_storage));
    temp_a0 = sub_800222C4;
    temp_a1 = a1;
    temp_a2 = a2;
label_800222c4:
    goto label_800222c8;
label_800222c8:
    goto label_800222cc;
label_800222cc:
    temp_s0 = (temp_a1 + 0u);
    goto label_800222d0;
label_800222d0:
    goto label_800222d4;
label_800222d4:
    goto label_800222d8;
label_800222d8:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(4384));
    goto label_800222dc;
label_800222dc:
    goto label_800222e0;
label_800222e0:
    condition_value = ((sint32)temp_v0 <= 0);
    temp_s1 = (temp_a0 + 0u);
    if (condition_value)
        goto label_800224f8;
    goto label_800222e8;
label_800222e4:
    temp_s1 = (temp_a0 + 0u);
    goto label_800222e8;
label_800222e8:
    temp_a1 = TM3_DRAFT_I16(temp_s0 + (uint32)(1540));
    goto label_800222ec;
label_800222ec:
    temp_a2 = TM3_DRAFT_I16(temp_s0 + (uint32)(1546));
    goto label_800222f0;
label_800222f0:
    temp_a3 = TM3_DRAFT_I16(temp_s0 + (uint32)(1552));
    goto label_800222f4;
label_800222f4:
    temp_a0 = local_base + (uint32)(24);
    goto label_800222f8;
label_800222f8:
    *(uint16 *)(local_storage + 24) = (uint16)temp_a1;
    goto label_800222fc;
label_800222fc:
    TM3_DRAFT_U16(temp_a0 + (uint32)(2)) = (uint16)temp_a2;
    goto label_80022300;
label_80022300:
    TM3_DRAFT_U16(temp_a0 + (uint32)(4)) = (uint16)temp_a3;
    goto label_80022304;
label_80022304:
    temp_v1 = TM3_DRAFT_U32(temp_s0 + (uint32)(4388));
    goto label_80022308;
label_80022308:
    temp_v0 = 0u + (uint32)(1);
    goto label_8002230c;
label_8002230c:
    condition_value = (temp_v1 != temp_v0);
    temp_v0 = temp_s0 + (uint32)(1556);
    if (condition_value)
        goto label_80022330;
    goto label_80022314;
label_80022310:
    temp_v0 = temp_s0 + (uint32)(1556);
    goto label_80022314;
label_80022314:
    temp_v0 = (0u - temp_a1);
    goto label_80022318;
label_80022318:
    *(uint16 *)(local_storage + 24) = (uint16)temp_v0;
    goto label_8002231c;
label_8002231c:
    temp_v0 = (0u - temp_a2);
    goto label_80022320;
label_80022320:
    TM3_DRAFT_U16(temp_a0 + (uint32)(2)) = (uint16)temp_v0;
    goto label_80022324;
label_80022324:
    temp_v0 = (0u - temp_a3);
    goto label_80022328;
label_80022328:
    TM3_DRAFT_U16(temp_a0 + (uint32)(4)) = (uint16)temp_v0;
    goto label_8002232c;
label_8002232c:
    temp_v0 = temp_s0 + (uint32)(1556);
    goto label_80022330;
label_80022330:
    temp_a0 = TM3_DRAFT_U32(temp_s0 + (uint32)(1556));
    goto label_80022334;
label_80022334:
    temp_t1 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_80022338;
label_80022338:
    temp_v1 = TM3_DRAFT_U32(temp_s0 + (uint32)(1568));
    goto label_8002233c;
label_8002233c:
    temp_t0 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_80022340;
label_80022340:
    temp_v0 = temp_s0 + (uint32)(1568);
    goto label_80022344;
label_80022344:
    temp_a0 = (temp_a0 - temp_v1);
    goto label_80022348;
label_80022348:
    temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_8002234c;
label_8002234c:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_80022350;
label_80022350:
    temp_t2 = local_base + (uint32)(32);
    goto label_80022354;
label_80022354:
    *(uint16 *)(local_storage + 32) = (uint16)temp_a0;
    goto label_80022358;
label_80022358:
    temp_a0 = (uint32)(temp_a0 << 16);
    goto label_8002235c;
label_8002235c:
    temp_t1 = (temp_t1 - temp_v1);
    goto label_80022360;
label_80022360:
    temp_t0 = (temp_t0 - temp_v0);
    goto label_80022364;
label_80022364:
    TM3_DRAFT_U16(temp_t2 + (uint32)(2)) = (uint16)temp_t1;
    goto label_80022368;
label_80022368:
    TM3_DRAFT_U16(temp_t2 + (uint32)(4)) = (uint16)temp_t0;
    goto label_8002236c;
label_8002236c:
    temp_t4 = *(sint16 *)(local_storage + 24);
    goto label_80022370;
label_80022370:
    temp_t3 = (uint32)((sint32)temp_a0 >> 16);
    goto label_80022374;
label_80022374:
    product = (uint64)((sint64)(sint32)temp_t4 * (sint64)(sint32)temp_t3);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_80022378;
label_80022378:
    temp_t6 = *(sint16 *)(local_storage + 26);
    goto label_8002237c;
label_8002237c:
    temp_a0 = lo_value;
    goto label_80022380;
label_80022380:
    temp_v0 = *(sint16 *)(local_storage + 34);
    goto label_80022384;
label_80022384:
    goto label_80022388;
label_80022388:
    product = (uint64)((sint64)(sint32)temp_t6 * (sint64)(sint32)temp_v0);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_8002238c;
label_8002238c:
    temp_t5 = *(sint16 *)(local_storage + 28);
    goto label_80022390;
label_80022390:
    temp_v1 = lo_value;
    goto label_80022394;
label_80022394:
    temp_v0 = *(sint16 *)(local_storage + 36);
    goto label_80022398;
label_80022398:
    goto label_8002239c;
label_8002239c:
    product = (uint64)((sint64)(sint32)temp_t5 * (sint64)(sint32)temp_v0);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_800223a0;
label_800223a0:
    temp_v0 = (temp_a0 + temp_v1);
    goto label_800223a4;
label_800223a4:
    temp_t8 = lo_value;
    goto label_800223a8;
label_800223a8:
    temp_v0 = (temp_v0 + temp_t8);
    goto label_800223ac;
label_800223ac:
    condition_value = ((sint32)temp_v0 <= 0);
    temp_t1 = (uint32)(temp_t1 << 16);
    if (condition_value)
        goto label_800224f8;
    goto label_800223b4;
label_800223b0:
    temp_t1 = (uint32)(temp_t1 << 16);
    goto label_800223b4;
label_800223b4:
    temp_t1 = (uint32)((sint32)temp_t1 >> 16);
    goto label_800223b8;
label_800223b8:
    temp_t0 = (uint32)(temp_t0 << 16);
    goto label_800223bc;
label_800223bc:
    temp_v0 = temp_s1 + (uint32)(1556);
    goto label_800223c0;
label_800223c0:
    temp_a2 = TM3_DRAFT_U32(temp_s1 + (uint32)(1556));
    goto label_800223c4;
label_800223c4:
    temp_a3 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_800223c8;
label_800223c8:
    temp_v1 = TM3_DRAFT_U32(temp_s1 + (uint32)(1568));
    goto label_800223cc;
label_800223cc:
    temp_a1 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_800223d0;
label_800223d0:
    temp_v0 = temp_s1 + (uint32)(1568);
    goto label_800223d4;
label_800223d4:
    temp_a2 = (temp_a2 - temp_v1);
    goto label_800223d8;
label_800223d8:
    temp_a0 = (uint32)(temp_a2 << 16);
    goto label_800223dc;
label_800223dc:
    temp_a0 = (uint32)((sint32)temp_a0 >> 16);
    goto label_800223e0;
label_800223e0:
    temp_a0 = (temp_t3 - temp_a0);
    goto label_800223e4;
label_800223e4:
    temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_800223e8;
label_800223e8:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_800223ec;
label_800223ec:
    temp_a3 = (temp_a3 - temp_v1);
    goto label_800223f0;
label_800223f0:
    temp_a1 = (temp_a1 - temp_v0);
    goto label_800223f4;
label_800223f4:
    temp_v0 = (uint32)(temp_a3 << 16);
    goto label_800223f8;
label_800223f8:
    temp_v0 = (uint32)((sint32)temp_v0 >> 16);
    goto label_800223fc;
label_800223fc:
    temp_t1 = (temp_t1 - temp_v0);
    goto label_80022400;
label_80022400:
    temp_v0 = (uint32)(temp_a0 << 16);
    goto label_80022404;
label_80022404:
    temp_v0 = (uint32)((sint32)temp_v0 >> 16);
    goto label_80022408;
label_80022408:
    product = (uint64)((sint64)(sint32)temp_t4 * (sint64)(sint32)temp_v0);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_8002240c;
label_8002240c:
    temp_t0 = (uint32)((sint32)temp_t0 >> 16);
    goto label_80022410;
label_80022410:
    *(uint16 *)(local_storage + 40) = (uint16)temp_a2;
    goto label_80022414;
label_80022414:
    temp_v1 = (uint32)(temp_a1 << 16);
    goto label_80022418;
label_80022418:
    temp_v1 = (uint32)((sint32)temp_v1 >> 16);
    goto label_8002241c;
label_8002241c:
    temp_t0 = (temp_t0 - temp_v1);
    goto label_80022420;
label_80022420:
    temp_v0 = local_base + (uint32)(40);
    goto label_80022424;
label_80022424:
    TM3_DRAFT_U16(temp_v0 + (uint32)(2)) = (uint16)temp_a3;
    goto label_80022428;
label_80022428:
    TM3_DRAFT_U16(temp_v0 + (uint32)(4)) = (uint16)temp_a1;
    goto label_8002242c;
label_8002242c:
    *(uint16 *)(local_storage + 32) = (uint16)temp_a0;
    goto label_80022430;
label_80022430:
    TM3_DRAFT_U16(temp_t2 + (uint32)(2)) = (uint16)temp_t1;
    goto label_80022434;
label_80022434:
    TM3_DRAFT_U16(temp_t2 + (uint32)(4)) = (uint16)temp_t0;
    goto label_80022438;
label_80022438:
    temp_t3 = lo_value;
    goto label_8002243c;
label_8002243c:
    temp_v0 = *(sint16 *)(local_storage + 34);
    goto label_80022440;
label_80022440:
    goto label_80022444;
label_80022444:
    product = (uint64)((sint64)(sint32)temp_t6 * (sint64)(sint32)temp_v0);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_80022448;
label_80022448:
    temp_v1 = lo_value;
    goto label_8002244c;
label_8002244c:
    temp_v0 = *(sint16 *)(local_storage + 36);
    goto label_80022450;
label_80022450:
    goto label_80022454;
label_80022454:
    product = (uint64)((sint64)(sint32)temp_t5 * (sint64)(sint32)temp_v0);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_80022458;
label_80022458:
    temp_v0 = (temp_t3 + temp_v1);
    goto label_8002245c;
label_8002245c:
    temp_t0 = lo_value;
    goto label_80022460;
label_80022460:
    temp_v0 = (temp_v0 + temp_t0);
    goto label_80022464;
label_80022464:
    condition_value = ((sint32)temp_v0 <= 0);
    temp_v0 = (0u + 0u);
    if (condition_value)
        goto label_800224fc;
    goto label_8002246c;
label_80022468:
    temp_v0 = (0u + 0u);
    goto label_8002246c;
label_8002246c:
    temp_v1 = TM3_DRAFT_U32(temp_s0 + (uint32)(4392));
    goto label_80022470;
label_80022470:
    goto label_80022474;
label_80022474:
    condition_value = (temp_v1 == 0u);
    if (condition_value)
        goto label_8002249c;
    goto label_8002247c;
label_80022478:
    goto label_8002247c;
label_8002247c:
    temp_v0 = TM3_DRAFT_U32(temp_v1 + (uint32)(0));
    goto label_80022480;
label_80022480:
    goto label_80022484;
label_80022484:
    condition_value = (temp_v0 == temp_s1);
    temp_v0 = (0u + 0u);
    if (condition_value)
        goto label_800224fc;
    goto label_8002248c;
label_80022488:
    temp_v0 = (0u + 0u);
    goto label_8002248c;
label_8002248c:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(4));
    goto label_80022490;
label_80022490:
    goto label_80022494;
label_80022494:
    condition_value = (temp_v1 != 0u);
    if (condition_value)
        goto label_8002247c;
    goto label_8002249c;
label_80022498:
    goto label_8002249c;
label_8002249c:
    temp_a0 = 0u + (uint32)(8);
    temp_v0 = sub_8004A000(temp_a0);
    goto label_800224a4;
label_800224a0:
    temp_a0 = 0u + (uint32)(8);
    goto label_800224a4;
label_800224a4:
    temp_v1 = (temp_v0 + 0u);
    goto label_800224a8;
label_800224a8:
    condition_value = (temp_v1 == 0u);
    temp_a0 = (temp_s1 + 0u);
    if (condition_value)
        goto label_800224f8;
    goto label_800224b0;
label_800224ac:
    temp_a0 = (temp_s1 + 0u);
    goto label_800224b0;
label_800224b0:
    temp_a1 = (temp_s0 + 0u);
    goto label_800224b4;
label_800224b4:
    TM3_DRAFT_U32(temp_v1 + (uint32)(0)) = (uint32)temp_s1;
    goto label_800224b8;
label_800224b8:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(4392));
    goto label_800224bc;
label_800224bc:
    temp_a2 = 0u + (uint32)(600);
    goto label_800224c0;
label_800224c0:
    TM3_DRAFT_U32(temp_v1 + (uint32)(4)) = (uint32)temp_v0;
    goto label_800224c4;
label_800224c4:
    temp_v0 = 0x80090000u;
    goto label_800224c8;
label_800224c8:
    temp_v0 = temp_v0 + (uint32)(-32724);
    goto label_800224cc;
label_800224cc:
    TM3_DRAFT_U32(temp_s0 + (uint32)(4392)) = (uint32)temp_v1;
    goto label_800224d0;
label_800224d0:
    temp_v1 = 0x80080000u;
    goto label_800224d4;
label_800224d4:
    *(uint32 *)(local_storage + 16) = (uint32)temp_v0;
    goto label_800224d8;
label_800224d8:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(3928));
    goto label_800224dc;
label_800224dc:
    temp_v1 = temp_v1 + (uint32)(-372);
    goto label_800224e0;
label_800224e0:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_800224e4;
label_800224e4:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_800224e8;
label_800224e8:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_800224ec;
label_800224ec:
    temp_a3 = (0u + 0u);
    goto label_800224f0;
label_800224f0:
    *(uint32 *)(local_storage + 20) = (uint32)temp_v0;
    temp_v0 = sub_800239C0(temp_a0, temp_a1, temp_a2, temp_a3, *(uint32 *)(local_storage + 16), *(uint32 *)(local_storage + 20), *(uint32 *)(local_storage + 24), *(uint32 *)(local_storage + 28), *(uint32 *)(local_storage + 32), *(uint32 *)(local_storage + 36));
    goto label_800224f8;
label_800224f4:
    *(uint32 *)(local_storage + 20) = (uint32)temp_v0;
    goto label_800224f8;
label_800224f8:
    temp_v0 = (0u + 0u);
    goto label_800224fc;
label_800224fc:
    goto label_80022500;
label_80022500:
    goto label_80022504;
label_80022504:
    goto label_80022508;
label_80022508:
    return temp_v0;
label_8002250c:
    return temp_v0;
}
