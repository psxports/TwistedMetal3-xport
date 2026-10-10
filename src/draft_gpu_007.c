#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

/* Unverified listing-derived control flow */
uint32 sub_80022510(uint32 a1, uint32 a2)
{
    uint32 temp_at, temp_v0, temp_v1, temp_a0, temp_a1, temp_a2, temp_a3, temp_t0, temp_t1, temp_t2, temp_t3, temp_t4, temp_t5, temp_t6, temp_t7, temp_s0, temp_s1, temp_s2, temp_s3, temp_s4, temp_s5, temp_s6, temp_s7, temp_t8, temp_t9, temp_k0, temp_k1, local_base, temp_fp;
    uint32 hi_value, lo_value, condition_value;
    uint64 product;
    uint8 local_storage[384];
    /* Original collision vectors and matrices share contiguous native storage */
    local_base = TM3_DRAFT_LOCAL_ADDRESS(local_storage, sizeof(local_storage));
    temp_a0 = a1;
    temp_a1 = a2;
label_80022510:
    goto label_80022514;
label_80022514:
    goto label_80022518;
label_80022518:
    temp_s6 = (0u + 0u);
    goto label_8002251c;
label_8002251c:
    goto label_80022520;
label_80022520:
    temp_s1 = local_base + (uint32)(144);
    goto label_80022524;
label_80022524:
    goto label_80022528;
label_80022528:
    temp_s0 = local_base + (uint32)(48);
    goto label_8002252c;
label_8002252c:
    TM3_DRAFT_U32(local_base + 352u) = (uint32)temp_a0;
    goto label_80022530;
label_80022530:
    temp_v0 = temp_a0 + (uint32)(68);
    goto label_80022534;
label_80022534:
    temp_t8 = (temp_a1 + 0u);
    goto label_80022538;
label_80022538:
    TM3_DRAFT_U32(local_base + 356u) = (uint32)temp_a1;
    goto label_8002253c;
label_8002253c:
    TM3_DRAFT_U32(local_base + 48u) = (uint32)temp_v0;
    goto label_80022540;
label_80022540:
    temp_v0 = temp_t8 + (uint32)(68);
    goto label_80022544;
label_80022544:
    goto label_80022548;
label_80022548:
    goto label_8002254c;
label_8002254c:
    goto label_80022550;
label_80022550:
    goto label_80022554;
label_80022554:
    goto label_80022558;
label_80022558:
    goto label_8002255c;
label_8002255c:
    goto label_80022560;
label_80022560:
    TM3_DRAFT_U32(local_base + 52u) = (uint32)temp_v0;
    goto label_80022564;
label_80022564:
    temp_a0 = TM3_DRAFT_U32(temp_s0 + (uint32)(0));
    goto label_80022568;
label_80022568:
    temp_a0 = temp_a0 + (uint32)(1468);
    sub_8005BD24(temp_a0);
    goto label_80022570;
label_8002256c:
    temp_a0 = temp_a0 + (uint32)(1468);
    goto label_80022570;
label_80022570:
    temp_a0 = TM3_DRAFT_U32(temp_s0 + (uint32)(0));
    goto label_80022574;
label_80022574:
    temp_s6 = temp_s6 + (uint32)(1);
    goto label_80022578;
label_80022578:
    temp_a0 = temp_a0 + (uint32)(1468);
    sub_8005BDB4(temp_a0);
    goto label_80022580;
label_8002257c:
    temp_a0 = temp_a0 + (uint32)(1468);
    goto label_80022580;
label_80022580:
    temp_a1 = (temp_s1 + 0u);
    goto label_80022584;
label_80022584:
    temp_a2 = local_base + (uint32)(240);
    goto label_80022588;
label_80022588:
    temp_s1 = temp_s1 + (uint32)(12);
    goto label_8002258c;
label_8002258c:
    temp_a0 = TM3_DRAFT_U32(temp_s0 + (uint32)(0));
    goto label_80022590;
label_80022590:
    temp_s0 = temp_s0 + (uint32)(4);
    goto label_80022594;
label_80022594:
    temp_a0 = temp_a0 + (uint32)(1412);
    sub_8005C3C4(temp_a0, temp_a1, temp_a2);
    goto label_8002259c;
label_80022598:
    temp_a0 = temp_a0 + (uint32)(1412);
    goto label_8002259c;
label_8002259c:
    temp_v0 = (sint32)temp_s6 < 2;
    goto label_800225a0;
label_800225a0:
    condition_value = (temp_v0 != 0u);
    temp_s5 = local_base + (uint32)(232);
    if (condition_value)
        goto label_80022564;
    goto label_800225a8;
label_800225a4:
    temp_s5 = local_base + (uint32)(232);
    goto label_800225a8;
label_800225a8:
    temp_a0 = local_base + (uint32)(168);
    goto label_800225ac;
label_800225ac:
    temp_s6 = (0u + 0u);
    goto label_800225b0;
label_800225b0:
    temp_v0 = local_base + (uint32)(144);
    goto label_800225b4;
label_800225b4:
    temp_fp = local_base + (uint32)(216);
    goto label_800225b8;
label_800225b8:
    temp_s4 = local_base + (uint32)(184);
    goto label_800225bc;
label_800225bc:
    TM3_DRAFT_U32(local_base + 256u) = (uint32)temp_v0;
    goto label_800225c0;
label_800225c0:
    temp_v0 = local_base + (uint32)(156);
    goto label_800225c4;
label_800225c4:
    temp_a3 = TM3_DRAFT_U32(local_base + 156u);
    goto label_800225c8;
label_800225c8:
    temp_a2 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_800225cc;
label_800225cc:
    temp_v1 = TM3_DRAFT_U32(local_base + 144u);
    goto label_800225d0;
label_800225d0:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_800225d4;
label_800225d4:
    temp_t8 = TM3_DRAFT_U32(local_base + 256u);
    goto label_800225d8;
label_800225d8:
    temp_a3 = (temp_a3 - temp_v1);
    goto label_800225dc;
label_800225dc:
    temp_v1 = TM3_DRAFT_U32(temp_t8 + (uint32)(4));
    goto label_800225e0;
label_800225e0:
    temp_a1 = TM3_DRAFT_U32(temp_t8 + (uint32)(8));
    goto label_800225e4;
label_800225e4:
    temp_s7 = (temp_s6 + 0u);
    goto label_800225e8;
label_800225e8:
    TM3_DRAFT_U32(local_base + 168u) = (uint32)temp_a3;
    goto label_800225ec;
label_800225ec:
    temp_a2 = (temp_a2 - temp_v1);
    goto label_800225f0;
label_800225f0:
    temp_v0 = (temp_v0 - temp_a1);
    goto label_800225f4;
label_800225f4:
    TM3_DRAFT_U32(temp_a0 + (uint32)(4)) = (uint32)temp_a2;
    goto label_800225f8;
label_800225f8:
    TM3_DRAFT_U32(temp_a0 + (uint32)(8)) = (uint32)temp_v0;
    temp_v0 = sub_80013D64(temp_a0);
    goto label_80022600;
label_800225fc:
    TM3_DRAFT_U32(temp_a0 + (uint32)(8)) = (uint32)temp_v0;
    goto label_80022600;
label_80022600:
    TM3_DRAFT_U32(local_base + 244u) = (uint32)temp_v0;
    goto label_80022604;
label_80022604:
    temp_s2 = (uint32)(temp_s6 << 2);
    goto label_80022608;
label_80022608:
    temp_t8 = local_base + (uint32)(48);
    goto label_8002260c;
label_8002260c:
    temp_s2 = (temp_t8 + temp_s2);
    goto label_80022610;
label_80022610:
    temp_s0 = local_base + (uint32)(56);
    goto label_80022614;
label_80022614:
    temp_v0 = (uint32)(temp_s6 << 5);
    goto label_80022618;
label_80022618:
    temp_s0 = (temp_s0 + temp_v0);
    goto label_8002261c;
label_8002261c:
    TM3_DRAFT_U32(local_base + 252u) = (uint32)temp_t8;
    goto label_80022620;
label_80022620:
    temp_s1 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_80022624;
label_80022624:
    temp_a1 = (temp_s0 + 0u);
    goto label_80022628;
label_80022628:
    temp_s3 = temp_s1 + (uint32)(1412);
    goto label_8002262c;
label_8002262c:
    temp_a0 = temp_s1 + (uint32)(1468);
    temp_v0 = sub_8005C5B4(temp_a0, temp_a1);
    goto label_80022634;
label_80022630:
    temp_a0 = temp_s1 + (uint32)(1468);
    goto label_80022634;
label_80022634:
    temp_a0 = (temp_s0 + 0u);
    goto label_80022638;
label_80022638:
    temp_a1 = (temp_s5 + 0u);
    goto label_8002263c;
label_8002263c:
    temp_a2 = (temp_fp + 0u);
    goto label_80022640;
label_80022640:
    temp_v0 = 0u + (uint32)(1);
    goto label_80022644;
label_80022644:
    temp_v0 = (temp_v0 - temp_s6);
    goto label_80022648;
label_80022648:
    temp_v1 = (uint32)(temp_v0 << 1);
    goto label_8002264c;
label_8002264c:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_80022650;
label_80022650:
    temp_v1 = (uint32)(temp_v1 << 2);
    goto label_80022654;
label_80022654:
    temp_t8 = TM3_DRAFT_U32(local_base + 256u);
    goto label_80022658;
label_80022658:
    temp_v0 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_8002265c;
label_8002265c:
    temp_v1 = (temp_t8 + temp_v1);
    goto label_80022660;
label_80022660:
    temp_a3 = TM3_DRAFT_U32(temp_v0 + (uint32)(1488));
    goto label_80022664;
label_80022664:
    temp_v0 = temp_v0 + (uint32)(1488);
    goto label_80022668;
label_80022668:
    temp_t2 = TM3_DRAFT_U32(temp_v1 + (uint32)(0));
    goto label_8002266c;
label_8002266c:
    temp_t1 = TM3_DRAFT_U32(temp_v1 + (uint32)(4));
    goto label_80022670;
label_80022670:
    temp_t0 = TM3_DRAFT_U32(temp_v1 + (uint32)(8));
    goto label_80022674;
label_80022674:
    temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_80022678;
label_80022678:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_8002267c;
label_8002267c:
    temp_t2 = (temp_t2 - temp_a3);
    goto label_80022680;
label_80022680:
    temp_t1 = (temp_t1 - temp_v1);
    goto label_80022684;
label_80022684:
    temp_t0 = (temp_t0 - temp_v0);
    goto label_80022688;
label_80022688:
    TM3_DRAFT_U16(local_base + 232u) = (uint16)temp_t2;
    goto label_8002268c;
label_8002268c:
    TM3_DRAFT_U16(temp_s5 + (uint32)(2)) = (uint16)temp_t1;
    goto label_80022690;
label_80022690:
    TM3_DRAFT_U16(temp_s5 + (uint32)(4)) = (uint16)temp_t0;
    temp_v0 = sub_8005BB34(temp_a0, temp_a1, temp_a2);
    goto label_80022698;
label_80022694:
    TM3_DRAFT_U16(temp_s5 + (uint32)(4)) = (uint16)temp_t0;
    goto label_80022698;
label_80022698:
    temp_a0 = (temp_s4 + 0u);
    goto label_8002269c;
label_8002269c:
    temp_a1 = (temp_s4 + 0u);
    goto label_800226a0;
label_800226a0:
    temp_a3 = TM3_DRAFT_U32(local_base + 216u);
    goto label_800226a4;
label_800226a4:
    temp_t0 = TM3_DRAFT_U32(temp_fp + (uint32)(4));
    goto label_800226a8;
label_800226a8:
    temp_v0 = TM3_DRAFT_I16(temp_s1 + (uint32)(1412));
    goto label_800226ac;
label_800226ac:
    temp_a2 = TM3_DRAFT_U32(temp_fp + (uint32)(8));
    goto label_800226b0;
label_800226b0:
    temp_v1 = TM3_DRAFT_I16(temp_s3 + (uint32)(4));
    goto label_800226b4;
label_800226b4:
    temp_a3 = (temp_a3 - temp_v0);
    goto label_800226b8;
label_800226b8:
    temp_v0 = TM3_DRAFT_I16(temp_s3 + (uint32)(2));
    goto label_800226bc;
label_800226bc:
    temp_a2 = (temp_a2 - temp_v1);
    goto label_800226c0;
label_800226c0:
    TM3_DRAFT_U32(local_base + 184u) = (uint32)temp_a3;
    goto label_800226c4;
label_800226c4:
    TM3_DRAFT_U32(temp_s4 + (uint32)(8)) = (uint32)temp_a2;
    goto label_800226c8;
label_800226c8:
    temp_t0 = (temp_t0 - temp_v0);
    goto label_800226cc;
label_800226cc:
    TM3_DRAFT_U32(temp_s4 + (uint32)(4)) = (uint32)temp_t0;
    temp_v0 = sub_8005B254(temp_a0, temp_a1);
    goto label_800226d4;
label_800226d0:
    TM3_DRAFT_U32(temp_s4 + (uint32)(4)) = (uint32)temp_t0;
    goto label_800226d4;
label_800226d4:
    temp_a0 = (temp_s3 + 0u);
    goto label_800226d8;
label_800226d8:
    temp_a1 = (temp_s4 + 0u);
    goto label_800226dc;
label_800226dc:
    temp_s0 = local_base + (uint32)(120);
    goto label_800226e0;
label_800226e0:
    temp_s0 = (temp_s0 + temp_s7);
    goto label_800226e4;
label_800226e4:
    temp_a3 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_800226e8;
label_800226e8:
    temp_s7 = temp_s7 + (uint32)(12);
    goto label_800226ec;
label_800226ec:
    TM3_DRAFT_U32(local_base + 16u) = (uint32)temp_s0;
    goto label_800226f0;
label_800226f0:
    temp_a2 = temp_a3 + (uint32)(868);
    goto label_800226f4;
label_800226f4:
    temp_a3 = temp_a3 + (uint32)(876);
    temp_v0 = sub_80021E44(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u));
    goto label_800226fc;
label_800226f8:
    temp_a3 = temp_a3 + (uint32)(876);
    goto label_800226fc;
label_800226fc:
    temp_a0 = (temp_s0 + 0u);
    goto label_80022700;
label_80022700:
    temp_s1 = local_base + (uint32)(40);
    goto label_80022704;
label_80022704:
    temp_v1 = (temp_s1 + temp_s6);
    goto label_80022708;
label_80022708:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    temp_v0 = sub_80013D64(temp_a0);
    goto label_80022710;
label_8002270c:
    TM3_DRAFT_U8(temp_v1 + (uint32)(0)) = (uint8)temp_v0;
    goto label_80022710;
label_80022710:
    temp_t8 = TM3_DRAFT_U32(local_base + 244u);
    goto label_80022714;
label_80022714:
    temp_s6 = temp_s6 + (uint32)(1);
    goto label_80022718;
label_80022718:
    temp_t8 = (temp_t8 - temp_v0);
    goto label_8002271c;
label_8002271c:
    temp_v0 = (sint32)temp_s6 < 2;
    goto label_80022720;
label_80022720:
    condition_value = (temp_v0 != 0u);
    TM3_DRAFT_U32(local_base + 244u) = (uint32)temp_t8;
    if (condition_value)
        goto label_80022604;
    goto label_80022728;
label_80022724:
    TM3_DRAFT_U32(local_base + 244u) = (uint32)temp_t8;
    goto label_80022728;
label_80022728:
    condition_value = ((sint32)temp_t8 >= 0);
    temp_t8 = 0x80090000u;
    if (condition_value)
        goto label_80022bc8;
    goto label_80022730;
label_8002272c:
    temp_t8 = 0x80090000u;
    goto label_80022730;
label_80022730:
    temp_a0 = local_base + (uint32)(168);
    goto label_80022734;
label_80022734:
    temp_s0 = 0x80090000u;
    goto label_80022738;
label_80022738:
    temp_s0 = temp_s0 + (uint32)(-24120);
    goto label_8002273c;
label_8002273c:
    temp_a1 = (temp_s0 + 0u);
    temp_v0 = sub_8005B240(temp_a0, temp_a1);
    goto label_80022744;
label_80022740:
    temp_a1 = (temp_s0 + 0u);
    goto label_80022744;
label_80022744:
    temp_s6 = (0u + 0u);
    goto label_80022748;
label_80022748:
    temp_s5 = 0x80090000u;
    goto label_8002274c;
label_8002274c:
    temp_t8 = TM3_DRAFT_U32(local_base + 252u);
    goto label_80022750;
label_80022750:
    temp_a0 = temp_s0 + (uint32)(-8);
    goto label_80022754;
label_80022754:
    TM3_DRAFT_U32(local_base + 260u) = (uint32)temp_s1;
    goto label_80022758;
label_80022758:
    temp_fp = (temp_s1 + 0u);
    goto label_8002275c;
label_8002275c:
    TM3_DRAFT_U32(local_base + 304u) = (uint32)0u;
    goto label_80022760;
label_80022760:
    TM3_DRAFT_U32(local_base + 308u) = (uint32)0u;
    goto label_80022764;
label_80022764:
    TM3_DRAFT_U32(local_base + 264u) = (uint32)temp_t8;
    goto label_80022768;
label_80022768:
    temp_v0 = TM3_DRAFT_I16(temp_a0 + (uint32)(8));
    goto label_8002276c;
label_8002276c:
    temp_s2 = (temp_t8 + 0u);
    goto label_80022770;
label_80022770:
    temp_v0 = (0u - temp_v0);
    goto label_80022774;
label_80022774:
    TM3_DRAFT_U16(temp_s0 + (uint32)(-8)) = (uint16)temp_v0;
    goto label_80022778;
label_80022778:
    temp_v0 = TM3_DRAFT_I16(temp_a0 + (uint32)(10));
    goto label_8002277c;
label_8002277c:
    temp_v1 = TM3_DRAFT_I16(temp_a0 + (uint32)(12));
    goto label_80022780;
label_80022780:
    temp_v0 = (0u - temp_v0);
    goto label_80022784;
label_80022784:
    temp_v1 = (0u - temp_v1);
    goto label_80022788;
label_80022788:
    TM3_DRAFT_U16(temp_a0 + (uint32)(2)) = (uint16)temp_v0;
    goto label_8002278c;
label_8002278c:
    TM3_DRAFT_U16(temp_a0 + (uint32)(4)) = (uint16)temp_v1;
    goto label_80022790;
label_80022790:
    temp_s4 = (0u + 0u);
    goto label_80022794;
label_80022794:
    temp_a0 = TM3_DRAFT_U32(local_base + 304u);
    goto label_80022798;
label_80022798:
    temp_v1 = 0x80090000u;
    goto label_8002279c;
label_8002279c:
    temp_v1 = temp_v1 + (uint32)(-24064);
    goto label_800227a0;
label_800227a0:
    temp_v0 = (temp_a0 + temp_v1);
    goto label_800227a4;
label_800227a4:
    temp_s4 = temp_s4 + (uint32)(1);
    goto label_800227a8;
label_800227a8:
    TM3_DRAFT_U32(temp_v0 + (uint32)(0)) = (uint32)0u;
    goto label_800227ac;
label_800227ac:
    TM3_DRAFT_U32(temp_v0 + (uint32)(4)) = (uint32)0u;
    goto label_800227b0;
label_800227b0:
    TM3_DRAFT_U32(temp_v0 + (uint32)(8)) = (uint32)0u;
    goto label_800227b4;
label_800227b4:
    temp_v0 = (sint32)temp_s4 < 8;
    goto label_800227b8;
label_800227b8:
    condition_value = (temp_v0 != 0u);
    temp_v1 = temp_v1 + (uint32)(12);
    if (condition_value)
        goto label_800227a0;
    goto label_800227c0;
label_800227bc:
    temp_v1 = temp_v1 + (uint32)(12);
    goto label_800227c0;
label_800227c0:
    temp_s1 = (0u + 0u);
    goto label_800227c4;
label_800227c4:
    temp_s4 = 0x80090000u;
    goto label_800227c8;
label_800227c8:
    temp_t5 = temp_s4 + (uint32)(-24080);
    goto label_800227cc;
label_800227cc:
    temp_s3 = (temp_s2 + 0u);
    goto label_800227d0;
label_800227d0:
    temp_s0 = (temp_fp + 0u);
    goto label_800227d4;
label_800227d4:
    temp_t6 = local_base + (uint32)(32);
    goto label_800227d8;
label_800227d8:
    temp_t4 = (temp_t6 + 0u);
    goto label_800227dc;
label_800227dc:
    temp_a0 = local_base + (uint32)(120);
    goto label_800227e0;
label_800227e0:
    temp_t8 = 0x80080000u;
    goto label_800227e4;
label_800227e4:
    temp_t8 = temp_t8 + (uint32)(-8376);
    goto label_800227e8;
label_800227e8:
    temp_t7 = TM3_DRAFT_U32(local_base + 308u);
    goto label_800227ec;
label_800227ec:
    temp_v0 = TM3_DRAFT_U8(temp_fp + (uint32)(0));
    goto label_800227f0;
label_800227f0:
    temp_v1 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_800227f4;
label_800227f4:
    temp_a0 = (temp_a0 + temp_t7);
    goto label_800227f8;
label_800227f8:
    temp_t0 = (uint32)(temp_v0 << 2);
    goto label_800227fc;
label_800227fc:
    temp_v0 = (uint32)(temp_v0 << 3);
    goto label_80022800;
label_80022800:
    temp_v0 = temp_v0 + (uint32)(1420);
    goto label_80022804;
label_80022804:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_80022808;
label_80022808:
    temp_a2 = TM3_DRAFT_U32(temp_a0 + (uint32)(0));
    goto label_8002280c;
label_8002280c:
    temp_a3 = TM3_DRAFT_U32(temp_a0 + (uint32)(4));
    goto label_80022810;
label_80022810:
    temp_v0 = TM3_DRAFT_I16(temp_v1 + (uint32)(0));
    goto label_80022814;
label_80022814:
    temp_a1 = TM3_DRAFT_U32(temp_a0 + (uint32)(8));
    goto label_80022818;
label_80022818:
    temp_a2 = (temp_a2 - temp_v0);
    goto label_8002281c;
label_8002281c:
    temp_v0 = TM3_DRAFT_I16(temp_v1 + (uint32)(2));
    goto label_80022820;
label_80022820:
    temp_v1 = TM3_DRAFT_I16(temp_v1 + (uint32)(4));
    goto label_80022824;
label_80022824:
    temp_s7 = (temp_t0 + temp_t8);
    goto label_80022828;
label_80022828:
    TM3_DRAFT_U32(temp_a0 + (uint32)(0)) = (uint32)temp_a2;
    goto label_8002282c;
label_8002282c:
    temp_a3 = (temp_a3 - temp_v0);
    goto label_80022830;
label_80022830:
    temp_a1 = (temp_a1 - temp_v1);
    goto label_80022834;
label_80022834:
    TM3_DRAFT_U32(temp_a0 + (uint32)(4)) = (uint32)temp_a3;
    goto label_80022838;
label_80022838:
    TM3_DRAFT_U32(temp_a0 + (uint32)(8)) = (uint32)temp_a1;
    goto label_8002283c;
label_8002283c:
    temp_t2 = (0u + 0u);
    goto label_80022840;
label_80022840:
    temp_t3 = (temp_t4 + 0u);
    goto label_80022844;
label_80022844:
    temp_t1 = (temp_t5 + 0u);
    goto label_80022848;
label_80022848:
    temp_v0 = 0u + (uint32)(4096);
    goto label_8002284c;
label_8002284c:
    TM3_DRAFT_U16(temp_t4 + (uint32)(0)) = (uint16)temp_v0;
    goto label_80022850;
label_80022850:
    temp_v0 = (temp_s7 + temp_s1);
    goto label_80022854;
label_80022854:
    temp_t0 = (temp_t7 + temp_t6);
    goto label_80022858;
label_80022858:
    temp_v1 = TM3_DRAFT_U8(temp_v0 + (uint32)(0));
    goto label_8002285c;
label_8002285c:
    temp_a0 = TM3_DRAFT_U32(temp_s3 + (uint32)(0));
    goto label_80022860;
label_80022860:
    temp_v0 = TM3_DRAFT_U8(temp_s0 + (uint32)(0));
    goto label_80022864;
label_80022864:
    temp_v1 = (uint32)(temp_v1 << 3);
    goto label_80022868;
label_80022868:
    temp_v1 = temp_v1 + (uint32)(884);
    goto label_8002286c;
label_8002286c:
    temp_v1 = (temp_a0 + temp_v1);
    goto label_80022870;
label_80022870:
    temp_v0 = (uint32)(temp_v0 << 3);
    goto label_80022874;
label_80022874:
    temp_v0 = temp_v0 + (uint32)(1420);
    goto label_80022878;
label_80022878:
    temp_a0 = (temp_a0 + temp_v0);
    goto label_8002287c;
label_8002287c:
    temp_a3 = TM3_DRAFT_I16(temp_v1 + (uint32)(0));
    goto label_80022880;
label_80022880:
    temp_a2 = TM3_DRAFT_I16(temp_v1 + (uint32)(2));
    goto label_80022884;
label_80022884:
    temp_v0 = TM3_DRAFT_I16(temp_a0 + (uint32)(0));
    goto label_80022888;
label_80022888:
    temp_a1 = TM3_DRAFT_I16(temp_v1 + (uint32)(4));
    goto label_8002288c;
label_8002288c:
    temp_v1 = TM3_DRAFT_I16(temp_a0 + (uint32)(4));
    goto label_80022890;
label_80022890:
    temp_a3 = (temp_a3 - temp_v0);
    goto label_80022894;
label_80022894:
    temp_v0 = TM3_DRAFT_I16(temp_a0 + (uint32)(2));
    goto label_80022898;
label_80022898:
    temp_a1 = (temp_a1 - temp_v1);
    goto label_8002289c;
label_8002289c:
    TM3_DRAFT_U32(temp_s4 + (uint32)(-24080)) = (uint32)temp_a3;
    goto label_800228a0;
label_800228a0:
    TM3_DRAFT_U32(temp_t5 + (uint32)(8)) = (uint32)temp_a1;
    goto label_800228a4;
label_800228a4:
    temp_a2 = (temp_a2 - temp_v0);
    goto label_800228a8;
label_800228a8:
    TM3_DRAFT_U32(temp_t5 + (uint32)(4)) = (uint32)temp_a2;
    goto label_800228ac;
label_800228ac:
    temp_a0 = TM3_DRAFT_U32(temp_t0 + (uint32)(88));
    goto label_800228b0;
label_800228b0:
    temp_v1 = TM3_DRAFT_U32(temp_t1 + (uint32)(0));
    goto label_800228b4;
label_800228b4:
    goto label_800228b8;
label_800228b8:
    temp_v0 = (temp_a0 ^ temp_v1);
    goto label_800228bc;
label_800228bc:
    condition_value = ((sint32)temp_v0 >= 0);
    if (condition_value)
        goto label_8002290c;
    goto label_800228c4;
label_800228c0:
    goto label_800228c4;
label_800228c4:
    condition_value = (temp_a0 == 0u);
    if (condition_value)
        goto label_8002290c;
    goto label_800228cc;
label_800228c8:
    goto label_800228cc;
label_800228cc:
    condition_value = (temp_v1 == 0u);
    temp_v0 = (temp_v1 + temp_a0);
    if (condition_value)
        goto label_8002290c;
    goto label_800228d4;
label_800228d0:
    temp_v0 = (temp_v1 + temp_a0);
    goto label_800228d4;
label_800228d4:
    temp_v0 = (uint32)(temp_v0 << 12);
    goto label_800228d8;
label_800228d8:
    if (!temp_v1)
        tm3_draft_unimplemented("TODO Division by zero");
    else
    {
        lo_value = (sint32)temp_v0 / (sint32)temp_v1;
        hi_value = (sint32)temp_v0 % (sint32)temp_v1;
    }
    goto label_800228dc;
label_800228dc:
    temp_v1 = lo_value;
    goto label_800228e0;
label_800228e0:
    goto label_800228e4;
label_800228e4:
    condition_value = ((sint32)temp_v1 >= 0);
    if (condition_value)
        goto label_800228f0;
    goto label_800228ec;
label_800228e8:
    goto label_800228ec;
label_800228ec:
    temp_v1 = (0u + 0u);
    goto label_800228f0;
label_800228f0:
    temp_v0 = TM3_DRAFT_I16(temp_t3 + (uint32)(0));
    goto label_800228f4;
label_800228f4:
    goto label_800228f8;
label_800228f8:
    product = (uint64)((sint64)(sint32)temp_v0 * (sint64)(sint32)temp_v1);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_800228fc;
label_800228fc:
    temp_t8 = lo_value;
    goto label_80022900;
label_80022900:
    temp_v0 = temp_t8 + (uint32)(2048);
    goto label_80022904;
label_80022904:
    temp_v0 = (uint32)((sint32)temp_v0 >> 12);
    goto label_80022908;
label_80022908:
    TM3_DRAFT_U16(temp_t3 + (uint32)(0)) = (uint16)temp_v0;
    goto label_8002290c;
label_8002290c:
    temp_t1 = temp_t1 + (uint32)(4);
    goto label_80022910;
label_80022910:
    temp_t2 = temp_t2 + (uint32)(1);
    goto label_80022914;
label_80022914:
    temp_v0 = (sint32)temp_t2 < 3;
    goto label_80022918;
label_80022918:
    condition_value = (temp_v0 != 0u);
    temp_t0 = temp_t0 + (uint32)(4);
    if (condition_value)
        goto label_800228ac;
    goto label_80022920;
label_8002291c:
    temp_t0 = temp_t0 + (uint32)(4);
    goto label_80022920;
label_80022920:
    temp_s1 = temp_s1 + (uint32)(1);
    goto label_80022924;
label_80022924:
    temp_v0 = (sint32)temp_s1 < 4;
    goto label_80022928;
label_80022928:
    condition_value = (temp_v0 != 0u);
    temp_t4 = temp_t4 + (uint32)(2);
    if (condition_value)
        goto label_8002283c;
    goto label_80022930;
label_8002292c:
    temp_t4 = temp_t4 + (uint32)(2);
    goto label_80022930;
label_80022930:
    temp_s1 = (0u + 0u);
    goto label_80022934;
label_80022934:
    temp_v0 = temp_s5 + (uint32)(-24112);
    goto label_80022938;
label_80022938:
    temp_t0 = (temp_v0 + 0u);
    goto label_8002293c;
label_8002293c:
    temp_v1 = 0u + (uint32)(1);
    goto label_80022940;
label_80022940:
    temp_v1 = (temp_v1 - temp_s6);
    goto label_80022944;
label_80022944:
    temp_t8 = TM3_DRAFT_U32(local_base + 264u);
    goto label_80022948;
label_80022948:
    temp_v0 = (uint32)(temp_v1 << 2);
    goto label_8002294c;
label_8002294c:
    temp_t2 = (temp_t8 + temp_v0);
    goto label_80022950;
label_80022950:
    temp_t8 = TM3_DRAFT_U32(local_base + 260u);
    goto label_80022954;
label_80022954:
    temp_t3 = (temp_s2 + 0u);
    goto label_80022958;
label_80022958:
    TM3_DRAFT_U32(temp_s5 + (uint32)(-24112)) = (uint32)0u;
    goto label_8002295c;
label_8002295c:
    TM3_DRAFT_U32(temp_t0 + (uint32)(4)) = (uint32)0u;
    goto label_80022960;
label_80022960:
    TM3_DRAFT_U32(temp_t0 + (uint32)(8)) = (uint32)0u;
    goto label_80022964;
label_80022964:
    temp_t1 = (temp_t8 + temp_v1);
    goto label_80022968;
label_80022968:
    temp_v0 = (temp_s7 + temp_s1);
    goto label_8002296c;
label_8002296c:
    temp_a3 = TM3_DRAFT_U32(temp_s5 + (uint32)(-24112));
    goto label_80022970;
label_80022970:
    temp_v1 = TM3_DRAFT_U8(temp_v0 + (uint32)(0));
    goto label_80022974;
label_80022974:
    temp_a2 = TM3_DRAFT_U32(temp_t0 + (uint32)(4));
    goto label_80022978;
label_80022978:
    temp_a1 = TM3_DRAFT_U32(temp_t0 + (uint32)(8));
    goto label_8002297c;
label_8002297c:
    temp_v0 = (uint32)(temp_v1 << 3);
    goto label_80022980;
label_80022980:
    temp_v0 = (temp_v0 - temp_v1);
    goto label_80022984;
label_80022984:
    temp_v0 = (uint32)(temp_v0 << 4);
    goto label_80022988;
label_80022988:
    temp_v1 = TM3_DRAFT_U32(temp_t3 + (uint32)(0));
    goto label_8002298c;
label_8002298c:
    temp_v0 = temp_v0 + (uint32)(1524);
    goto label_80022990;
label_80022990:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_80022994;
label_80022994:
    temp_v0 = TM3_DRAFT_U32(temp_v1 + (uint32)(32));
    goto label_80022998;
label_80022998:
    temp_v1 = temp_v1 + (uint32)(32);
    goto label_8002299c;
label_8002299c:
    temp_a3 = (temp_a3 + temp_v0);
    goto label_800229a0;
label_800229a0:
    temp_v0 = TM3_DRAFT_U32(temp_v1 + (uint32)(4));
    goto label_800229a4;
label_800229a4:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(8));
    goto label_800229a8;
label_800229a8:
    temp_t8 = 0x80080000u;
    goto label_800229ac;
label_800229ac:
    TM3_DRAFT_U32(temp_s5 + (uint32)(-24112)) = (uint32)temp_a3;
    goto label_800229b0;
label_800229b0:
    temp_a2 = (temp_a2 + temp_v0);
    goto label_800229b4;
label_800229b4:
    temp_a1 = (temp_a1 + temp_v1);
    goto label_800229b8;
label_800229b8:
    TM3_DRAFT_U32(temp_t0 + (uint32)(4)) = (uint32)temp_a2;
    goto label_800229bc;
label_800229bc:
    TM3_DRAFT_U32(temp_t0 + (uint32)(8)) = (uint32)temp_a1;
    goto label_800229c0;
label_800229c0:
    temp_v0 = TM3_DRAFT_U8(temp_t1 + (uint32)(0));
    goto label_800229c4;
label_800229c4:
    temp_t8 = temp_t8 + (uint32)(-8376);
    goto label_800229c8;
label_800229c8:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_800229cc;
label_800229cc:
    temp_v0 = (temp_s1 + temp_v0);
    goto label_800229d0;
label_800229d0:
    temp_v0 = (temp_v0 + temp_t8);
    goto label_800229d4;
label_800229d4:
    temp_v1 = TM3_DRAFT_U8(temp_v0 + (uint32)(0));
    goto label_800229d8;
label_800229d8:
    temp_s1 = temp_s1 + (uint32)(1);
    goto label_800229dc;
label_800229dc:
    temp_v0 = (uint32)(temp_v1 << 3);
    goto label_800229e0;
label_800229e0:
    temp_v0 = (temp_v0 - temp_v1);
    goto label_800229e4;
label_800229e4:
    temp_v0 = (uint32)(temp_v0 << 4);
    goto label_800229e8;
label_800229e8:
    temp_v1 = TM3_DRAFT_U32(temp_t2 + (uint32)(0));
    goto label_800229ec;
label_800229ec:
    temp_v0 = temp_v0 + (uint32)(1524);
    goto label_800229f0;
label_800229f0:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_800229f4;
label_800229f4:
    temp_v0 = temp_v1 + (uint32)(32);
    goto label_800229f8;
label_800229f8:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(32));
    goto label_800229fc;
label_800229fc:
    temp_a0 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_80022a00;
label_80022a00:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_80022a04;
label_80022a04:
    temp_a3 = (temp_a3 - temp_v1);
    goto label_80022a08;
label_80022a08:
    temp_a2 = (temp_a2 - temp_a0);
    goto label_80022a0c;
label_80022a0c:
    temp_a1 = (temp_a1 - temp_v0);
    goto label_80022a10;
label_80022a10:
    temp_v0 = (sint32)temp_s1 < 4;
    goto label_80022a14;
label_80022a14:
    TM3_DRAFT_U32(temp_s5 + (uint32)(-24112)) = (uint32)temp_a3;
    goto label_80022a18;
label_80022a18:
    TM3_DRAFT_U32(temp_t0 + (uint32)(4)) = (uint32)temp_a2;
    goto label_80022a1c;
label_80022a1c:
    condition_value = (temp_v0 != 0u);
    TM3_DRAFT_U32(temp_t0 + (uint32)(8)) = (uint32)temp_a1;
    if (condition_value)
        goto label_80022968;
    goto label_80022a24;
label_80022a20:
    TM3_DRAFT_U32(temp_t0 + (uint32)(8)) = (uint32)temp_a1;
    goto label_80022a24;
label_80022a24:
    temp_v0 = TM3_DRAFT_U32(temp_s5 + (uint32)(-24112));
    goto label_80022a28;
label_80022a28:
    goto label_80022a2c;
label_80022a2c:
    condition_value = ((sint32)temp_v0 >= 0);
    temp_s3 = temp_s5 + (uint32)(-24112);
    if (condition_value)
        goto label_80022a38;
    goto label_80022a34;
label_80022a30:
    temp_s3 = temp_s5 + (uint32)(-24112);
    goto label_80022a34;
label_80022a34:
    temp_v0 = temp_v0 + (uint32)(3);
    goto label_80022a38;
label_80022a38:
    temp_v1 = TM3_DRAFT_U32(temp_s3 + (uint32)(4));
    goto label_80022a3c;
label_80022a3c:
    temp_v0 = (uint32)((sint32)temp_v0 >> 2);
    goto label_80022a40;
label_80022a40:
    condition_value = ((sint32)temp_v1 >= 0);
    TM3_DRAFT_U32(temp_s5 + (uint32)(-24112)) = (uint32)temp_v0;
    if (condition_value)
        goto label_80022a4c;
    goto label_80022a48;
label_80022a44:
    TM3_DRAFT_U32(temp_s5 + (uint32)(-24112)) = (uint32)temp_v0;
    goto label_80022a48;
label_80022a48:
    temp_v1 = temp_v1 + (uint32)(3);
    goto label_80022a4c;
label_80022a4c:
    temp_a2 = TM3_DRAFT_U32(temp_s3 + (uint32)(8));
    goto label_80022a50;
label_80022a50:
    temp_v0 = (uint32)((sint32)temp_v1 >> 2);
    goto label_80022a54;
label_80022a54:
    condition_value = ((sint32)temp_a2 >= 0);
    TM3_DRAFT_U32(temp_s3 + (uint32)(4)) = (uint32)temp_v0;
    if (condition_value)
        goto label_80022a60;
    goto label_80022a5c;
label_80022a58:
    TM3_DRAFT_U32(temp_s3 + (uint32)(4)) = (uint32)temp_v0;
    goto label_80022a5c;
label_80022a5c:
    temp_a2 = temp_a2 + (uint32)(3);
    goto label_80022a60;
label_80022a60:
    temp_a0 = (temp_s3 + 0u);
    goto label_80022a64;
label_80022a64:
    temp_s0 = (uint32)(temp_s6 << 3);
    goto label_80022a68;
label_80022a68:
    temp_v0 = 0x80090000u;
    goto label_80022a6c;
label_80022a6c:
    temp_v0 = temp_v0 + (uint32)(-24128);
    goto label_80022a70;
label_80022a70:
    temp_s0 = (temp_s0 + temp_v0);
    goto label_80022a74;
label_80022a74:
    temp_a1 = (temp_s0 + 0u);
    goto label_80022a78;
label_80022a78:
    temp_v0 = (uint32)((sint32)temp_a2 >> 2);
    goto label_80022a7c;
label_80022a7c:
    TM3_DRAFT_U32(temp_s3 + (uint32)(8)) = (uint32)temp_v0;
    temp_v0 = sub_80013A90(temp_a0, temp_a1);
    goto label_80022a84;
label_80022a80:
    TM3_DRAFT_U32(temp_s3 + (uint32)(8)) = (uint32)temp_v0;
    goto label_80022a84;
label_80022a84:
    temp_a1 = (temp_v0 + 0u);
    goto label_80022a88;
label_80022a88:
    temp_a0 = TM3_DRAFT_U32(0x80089698u + (uint32)(1600));
    goto label_80022a8c;
label_80022a8c:
    temp_a2 = 0u + (uint32)(12);
    temp_v0 = sub_80015684(temp_a0, temp_a1, temp_a2);
    goto label_80022a94;
label_80022a90:
    temp_a2 = 0u + (uint32)(12);
    goto label_80022a94;
label_80022a94:
    temp_v1 = TM3_DRAFT_U32(0x80089698u + (uint32)(1612));
    goto label_80022a98;
label_80022a98:
    temp_t8 = TM3_DRAFT_U32(local_base + 244u);
    goto label_80022a9c;
label_80022a9c:
    goto label_80022aa0;
label_80022aa0:
    product = (uint64)((sint64)(sint32)temp_v1 * (sint64)(sint32)temp_t8);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_80022aa4;
label_80022aa4:
    temp_s1 = (0u + 0u);
    goto label_80022aa8;
label_80022aa8:
    temp_a0 = 0x80090000u;
    goto label_80022aac;
label_80022aac:
    temp_a0 = temp_a0 + (uint32)(-24096);
    goto label_80022ab0;
label_80022ab0:
    temp_a1 = (temp_s0 + 0u);
    goto label_80022ab4;
label_80022ab4:
    temp_a3 = 0u + (uint32)(12);
    goto label_80022ab8;
label_80022ab8:
    temp_s4 = TM3_DRAFT_U32(local_base + 304u);
    goto label_80022abc;
label_80022abc:
    temp_t8 = lo_value;
    goto label_80022ac0;
label_80022ac0:
    temp_v0 = (temp_t8 + temp_v0);
    goto label_80022ac4;
label_80022ac4:
    temp_a2 = (0u - temp_v0);
    temp_v0 = sub_80014B6C(temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_80022acc;
label_80022ac8:
    temp_a2 = (0u - temp_v0);
    goto label_80022acc;
label_80022acc:
    temp_a0 = (temp_s3 + 0u);
    goto label_80022ad0;
label_80022ad0:
    temp_a1 = (temp_s0 + 0u);
    goto label_80022ad4;
label_80022ad4:
    temp_a2 = (temp_s3 + 0u);
    temp_v0 = sub_800155A4(temp_a0, temp_a1, temp_a2);
    goto label_80022adc;
label_80022ad8:
    temp_a2 = (temp_s3 + 0u);
    goto label_80022adc;
label_80022adc:
    temp_a0 = (temp_s3 + 0u);
    goto label_80022ae0;
label_80022ae0:
    temp_a1 = (temp_s3 + 0u);
    goto label_80022ae4;
label_80022ae4:
    temp_a2 = TM3_DRAFT_U32(0x80089698u + (uint32)(1604));
    goto label_80022ae8;
label_80022ae8:
    temp_a3 = 0u + (uint32)(12);
    goto label_80022aec;
label_80022aec:
    temp_a2 = (0u - temp_a2);
    temp_v0 = sub_80014C04(temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_80022af4;
label_80022af0:
    temp_a2 = (0u - temp_a2);
    goto label_80022af4;
label_80022af4:
    temp_a1 = 0x80090000u;
    goto label_80022af8;
label_80022af8:
    temp_a1 = temp_a1 + (uint32)(-24096);
    goto label_80022afc;
label_80022afc:
    temp_a3 = 0u + (uint32)(12);
    goto label_80022b00;
label_80022b00:
    temp_s0 = (temp_s7 + temp_s1);
    goto label_80022b04;
label_80022b04:
    temp_v0 = (uint32)(temp_s1 << 1);
    goto label_80022b08;
label_80022b08:
    temp_v1 = (local_base + temp_v0);
    goto label_80022b0c;
label_80022b0c:
    temp_t8 = 0x80090000u;
    goto label_80022b10;
label_80022b10:
    temp_t8 = temp_t8 + (uint32)(-24064);
    goto label_80022b14;
label_80022b14:
    temp_v0 = TM3_DRAFT_U8(temp_s0 + (uint32)(0));
    goto label_80022b18;
label_80022b18:
    temp_a2 = TM3_DRAFT_I16(temp_v1 + (uint32)(32));
    goto label_80022b1c;
label_80022b1c:
    temp_a0 = (uint32)(temp_v0 << 1);
    goto label_80022b20;
label_80022b20:
    temp_a0 = (temp_a0 + temp_v0);
    goto label_80022b24;
label_80022b24:
    temp_a0 = (uint32)(temp_a0 << 2);
    goto label_80022b28;
label_80022b28:
    temp_a0 = (temp_a0 + temp_t8);
    goto label_80022b2c;
label_80022b2c:
    temp_a0 = (temp_s4 + temp_a0);
    temp_v0 = sub_8001498C(temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_80022b34;
label_80022b30:
    temp_a0 = (temp_s4 + temp_a0);
    goto label_80022b34;
label_80022b34:
    temp_s1 = temp_s1 + (uint32)(1);
    goto label_80022b38;
label_80022b38:
    temp_t8 = 0x80090000u;
    goto label_80022b3c;
label_80022b3c:
    temp_t8 = temp_t8 + (uint32)(-24064);
    goto label_80022b40;
label_80022b40:
    temp_v1 = TM3_DRAFT_U8(temp_s0 + (uint32)(0));
    goto label_80022b44;
label_80022b44:
    temp_a0 = TM3_DRAFT_U32(temp_s3 + (uint32)(8));
    goto label_80022b48;
label_80022b48:
    temp_v0 = (uint32)(temp_v1 << 1);
    goto label_80022b4c;
label_80022b4c:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80022b50;
label_80022b50:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_80022b54;
label_80022b54:
    temp_v0 = (temp_v0 + temp_t8);
    goto label_80022b58;
label_80022b58:
    temp_v0 = (temp_s4 + temp_v0);
    goto label_80022b5c;
label_80022b5c:
    temp_a2 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_80022b60;
label_80022b60:
    temp_a3 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_80022b64;
label_80022b64:
    temp_v1 = TM3_DRAFT_U32(temp_s5 + (uint32)(-24112));
    goto label_80022b68;
label_80022b68:
    temp_a1 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_80022b6c;
label_80022b6c:
    temp_a2 = (temp_a2 + temp_v1);
    goto label_80022b70;
label_80022b70:
    temp_v1 = TM3_DRAFT_U32(temp_s3 + (uint32)(4));
    goto label_80022b74;
label_80022b74:
    temp_a1 = (temp_a1 + temp_a0);
    goto label_80022b78;
label_80022b78:
    TM3_DRAFT_U32(temp_v0 + (uint32)(0)) = (uint32)temp_a2;
    goto label_80022b7c;
label_80022b7c:
    TM3_DRAFT_U32(temp_v0 + (uint32)(8)) = (uint32)temp_a1;
    goto label_80022b80;
label_80022b80:
    temp_a3 = (temp_a3 + temp_v1);
    goto label_80022b84;
label_80022b84:
    TM3_DRAFT_U32(temp_v0 + (uint32)(4)) = (uint32)temp_a3;
    goto label_80022b88;
label_80022b88:
    temp_v0 = (sint32)temp_s1 < 4;
    goto label_80022b8c;
label_80022b8c:
    condition_value = (temp_v0 != 0u);
    if (condition_value)
        goto label_80022af4;
    goto label_80022b94;
label_80022b90:
    goto label_80022b94;
label_80022b94:
    temp_s2 = temp_s2 + (uint32)(4);
    goto label_80022b98;
label_80022b98:
    temp_fp = temp_fp + (uint32)(1);
    goto label_80022b9c;
label_80022b9c:
    temp_t8 = TM3_DRAFT_U32(local_base + 304u);
    goto label_80022ba0;
label_80022ba0:
    temp_s6 = temp_s6 + (uint32)(1);
    goto label_80022ba4;
label_80022ba4:
    temp_t8 = temp_t8 + (uint32)(96);
    goto label_80022ba8;
label_80022ba8:
    TM3_DRAFT_U32(local_base + 304u) = (uint32)temp_t8;
    goto label_80022bac;
label_80022bac:
    temp_t8 = TM3_DRAFT_U32(local_base + 308u);
    goto label_80022bb0;
label_80022bb0:
    temp_v0 = (sint32)temp_s6 < 2;
    goto label_80022bb4;
label_80022bb4:
    temp_t8 = temp_t8 + (uint32)(12);
    goto label_80022bb8;
label_80022bb8:
    condition_value = (temp_v0 != 0u);
    TM3_DRAFT_U32(local_base + 308u) = (uint32)temp_t8;
    if (condition_value)
        goto label_80022790;
    goto label_80022bc0;
label_80022bbc:
    TM3_DRAFT_U32(local_base + 308u) = (uint32)temp_t8;
    goto label_80022bc0;
label_80022bc0:
    goto label_80023134;
label_80022bc4:
    goto label_80022bc8;
label_80022bc8:
    TM3_DRAFT_U32(local_base + 272u) = (uint32)temp_s5;
    goto label_80022bcc;
label_80022bcc:
    temp_s5 = temp_t8 + (uint32)(-24112);
    goto label_80022bd0;
label_80022bd0:
    temp_t8 = 0u + (uint32)(1);
    goto label_80022bd4;
label_80022bd4:
    TM3_DRAFT_U32(local_base + 292u) = (uint32)temp_t8;
    goto label_80022bd8;
label_80022bd8:
    temp_t8 = TM3_DRAFT_U32(local_base + 252u);
    goto label_80022bdc;
label_80022bdc:
    temp_s6 = (0u + 0u);
    goto label_80022be0;
label_80022be0:
    TM3_DRAFT_U32(local_base + 244u) = (uint32)0u;
    goto label_80022be4;
label_80022be4:
    TM3_DRAFT_U32(local_base + 300u) = (uint32)0u;
    goto label_80022be8;
label_80022be8:
    TM3_DRAFT_U32(local_base + 276u) = (uint32)temp_t8;
    goto label_80022bec;
label_80022bec:
    TM3_DRAFT_U32(local_base + 296u) = (uint32)temp_t8;
    goto label_80022bf0;
label_80022bf0:
    temp_t8 = TM3_DRAFT_U32(local_base + 292u);
    goto label_80022bf4;
label_80022bf4:
    temp_v0 = local_base + (uint32)(56);
    goto label_80022bf8;
label_80022bf8:
    temp_a0 = (uint32)(temp_t8 << 5);
    goto label_80022bfc;
label_80022bfc:
    temp_a0 = (temp_v0 + temp_a0);
    sub_8005BD24(temp_a0);
    goto label_80022c04;
label_80022c00:
    temp_a0 = (temp_v0 + temp_a0);
    goto label_80022c04;
label_80022c04:
    temp_t8 = TM3_DRAFT_U32(local_base + 300u);
    goto label_80022c08;
label_80022c08:
    temp_fp = TM3_DRAFT_U32(local_base + 292u);
    goto label_80022c0c;
label_80022c0c:
    TM3_DRAFT_U32(local_base + 268u) = (uint32)temp_t8;
    goto label_80022c10;
label_80022c10:
    temp_t8 = TM3_DRAFT_U32(local_base + 296u);
    goto label_80022c14;
label_80022c14:
    goto label_80022c18;
label_80022c18:
    TM3_DRAFT_U32(local_base + 280u) = (uint32)temp_t8;
    goto label_80022c1c;
label_80022c1c:
    temp_t8 = (temp_fp + 0u);
    goto label_80022c20;
label_80022c20:
    temp_v0 = (uint32)(temp_t8 << 2);
    goto label_80022c24;
label_80022c24:
    temp_t8 = TM3_DRAFT_U32(local_base + 276u);
    goto label_80022c28;
label_80022c28:
    temp_s4 = (0u + 0u);
    goto label_80022c2c;
label_80022c2c:
    TM3_DRAFT_U32(local_base + 284u) = (uint32)0u;
    goto label_80022c30;
label_80022c30:
    temp_s7 = (temp_t8 + temp_v0);
    goto label_80022c34;
label_80022c34:
    temp_t8 = 0u + (uint32)(1524);
    goto label_80022c38;
label_80022c38:
    TM3_DRAFT_U32(local_base + 288u) = (uint32)temp_t8;
    goto label_80022c3c;
label_80022c3c:
    temp_v0 = 0x80090000u;
    goto label_80022c40;
label_80022c40:
    temp_v0 = temp_v0 + (uint32)(-24064);
    goto label_80022c44;
label_80022c44:
    temp_s1 = local_base + (uint32)(216);
    goto label_80022c48;
label_80022c48:
    temp_t8 = TM3_DRAFT_U32(local_base + 284u);
    goto label_80022c4c;
label_80022c4c:
    temp_a1 = (temp_s1 + 0u);
    goto label_80022c50;
label_80022c50:
    temp_v0 = (temp_t8 + temp_v0);
    goto label_80022c54;
label_80022c54:
    temp_t8 = TM3_DRAFT_U32(local_base + 268u);
    goto label_80022c58;
label_80022c58:
    temp_a0 = TM3_DRAFT_U32(local_base + 272u);
    goto label_80022c5c;
label_80022c5c:
    temp_v0 = (temp_t8 + temp_v0);
    goto label_80022c60;
label_80022c60:
    TM3_DRAFT_U32(temp_v0 + (uint32)(0)) = (uint32)0u;
    goto label_80022c64;
label_80022c64:
    TM3_DRAFT_U32(temp_v0 + (uint32)(4)) = (uint32)0u;
    goto label_80022c68;
label_80022c68:
    TM3_DRAFT_U32(temp_v0 + (uint32)(8)) = (uint32)0u;
    goto label_80022c6c;
label_80022c6c:
    temp_t8 = TM3_DRAFT_U32(local_base + 280u);
    goto label_80022c70;
label_80022c70:
    temp_v1 = TM3_DRAFT_U32(temp_s7 + (uint32)(0));
    goto label_80022c74;
label_80022c74:
    temp_v0 = TM3_DRAFT_U32(temp_t8 + (uint32)(0));
    goto label_80022c78;
label_80022c78:
    temp_t8 = TM3_DRAFT_U32(local_base + 288u);
    goto label_80022c7c;
label_80022c7c:
    temp_a2 = TM3_DRAFT_U32(temp_v1 + (uint32)(1488));
    goto label_80022c80;
label_80022c80:
    temp_v1 = temp_v1 + (uint32)(1488);
    goto label_80022c84;
label_80022c84:
    temp_v0 = (temp_v0 + temp_t8);
    goto label_80022c88;
label_80022c88:
    temp_t1 = TM3_DRAFT_I16(temp_v0 + (uint32)(12));
    goto label_80022c8c;
label_80022c8c:
    temp_v0 = temp_v0 + (uint32)(12);
    goto label_80022c90;
label_80022c90:
    temp_t0 = TM3_DRAFT_I16(temp_v0 + (uint32)(2));
    goto label_80022c94;
label_80022c94:
    temp_a3 = TM3_DRAFT_I16(temp_v0 + (uint32)(4));
    goto label_80022c98;
label_80022c98:
    temp_v0 = TM3_DRAFT_U32(temp_v1 + (uint32)(4));
    goto label_80022c9c;
label_80022c9c:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(8));
    goto label_80022ca0;
label_80022ca0:
    temp_t8 = TM3_DRAFT_U32(local_base + 272u);
    goto label_80022ca4;
label_80022ca4:
    temp_t1 = (temp_t1 - temp_a2);
    goto label_80022ca8;
label_80022ca8:
    temp_t0 = (temp_t0 - temp_v0);
    goto label_80022cac;
label_80022cac:
    temp_a3 = (temp_a3 - temp_v1);
    goto label_80022cb0;
label_80022cb0:
    TM3_DRAFT_U16(local_base + 232u) = (uint16)temp_t1;
    goto label_80022cb4;
label_80022cb4:
    TM3_DRAFT_U16(temp_t8 + (uint32)(2)) = (uint16)temp_t0;
    goto label_80022cb8;
label_80022cb8:
    TM3_DRAFT_U16(temp_t8 + (uint32)(4)) = (uint16)temp_a3;
    temp_v0 = sub_80013DC4(temp_a0, temp_a1);
    goto label_80022cc0;
label_80022cbc:
    TM3_DRAFT_U16(temp_t8 + (uint32)(4)) = (uint16)temp_a3;
    goto label_80022cc0;
label_80022cc0:
    temp_a2 = TM3_DRAFT_U32(temp_s7 + (uint32)(0));
    goto label_80022cc4;
label_80022cc4:
    goto label_80022cc8;
label_80022cc8:
    temp_v0 = TM3_DRAFT_U16(temp_a2 + (uint32)(948));
    goto label_80022ccc;
label_80022ccc:
    goto label_80022cd0;
label_80022cd0:
    temp_a1 = (uint32)(temp_v0 << 16);
    goto label_80022cd4;
label_80022cd4:
    temp_a0 = (uint32)((sint32)temp_a1 >> 16);
    goto label_80022cd8;
label_80022cd8:
    temp_v0 = (0u - temp_a0);
    goto label_80022cdc;
label_80022cdc:
    temp_v1 = (uint32)(temp_v0 >> 31);
    goto label_80022ce0;
label_80022ce0:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80022ce4;
label_80022ce4:
    temp_v1 = TM3_DRAFT_U32(local_base + 216u);
    goto label_80022ce8;
label_80022ce8:
    temp_v0 = (uint32)((sint32)temp_v0 >> 1);
    goto label_80022cec;
label_80022cec:
    temp_v0 = ((sint32)temp_v0 < (sint32)temp_v1);
    goto label_80022cf0;
label_80022cf0:
    condition_value = (temp_v0 == 0u);
    temp_v0 = (uint32)(temp_a1 >> 31);
    if (condition_value)
        goto label_800230dc;
    goto label_80022cf8;
label_80022cf4:
    temp_v0 = (uint32)(temp_a1 >> 31);
    goto label_80022cf8;
label_80022cf8:
    temp_v0 = (temp_a0 + temp_v0);
    goto label_80022cfc;
label_80022cfc:
    temp_v0 = (uint32)((sint32)temp_v0 >> 1);
    goto label_80022d00;
label_80022d00:
    temp_v0 = ((sint32)temp_v1 < (sint32)temp_v0);
    goto label_80022d04;
label_80022d04:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_800230dc;
    goto label_80022d0c;
label_80022d08:
    goto label_80022d0c;
label_80022d0c:
    temp_v0 = TM3_DRAFT_U16(temp_a2 + (uint32)(952));
    goto label_80022d10;
label_80022d10:
    goto label_80022d14;
label_80022d14:
    temp_a1 = (uint32)(temp_v0 << 16);
    goto label_80022d18;
label_80022d18:
    temp_a0 = (uint32)((sint32)temp_a1 >> 16);
    goto label_80022d1c;
label_80022d1c:
    temp_v0 = (0u - temp_a0);
    goto label_80022d20;
label_80022d20:
    temp_v1 = (uint32)(temp_v0 >> 31);
    goto label_80022d24;
label_80022d24:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80022d28;
label_80022d28:
    temp_v1 = TM3_DRAFT_U32(local_base + 224u);
    goto label_80022d2c;
label_80022d2c:
    temp_v0 = (uint32)((sint32)temp_v0 >> 1);
    goto label_80022d30;
label_80022d30:
    temp_v0 = ((sint32)temp_v0 < (sint32)temp_v1);
    goto label_80022d34;
label_80022d34:
    condition_value = (temp_v0 == 0u);
    temp_v0 = (uint32)(temp_a1 >> 31);
    if (condition_value)
        goto label_800230dc;
    goto label_80022d3c;
label_80022d38:
    temp_v0 = (uint32)(temp_a1 >> 31);
    goto label_80022d3c;
label_80022d3c:
    temp_v0 = (temp_a0 + temp_v0);
    goto label_80022d40;
label_80022d40:
    temp_v0 = (uint32)((sint32)temp_v0 >> 1);
    goto label_80022d44;
label_80022d44:
    temp_v0 = ((sint32)temp_v1 < (sint32)temp_v0);
    goto label_80022d48;
label_80022d48:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_800230dc;
    goto label_80022d50;
label_80022d4c:
    goto label_80022d50;
label_80022d50:
    temp_v0 = TM3_DRAFT_U16(temp_a2 + (uint32)(950));
    goto label_80022d54;
label_80022d54:
    goto label_80022d58;
label_80022d58:
    temp_a1 = (uint32)(temp_v0 << 16);
    goto label_80022d5c;
label_80022d5c:
    temp_a0 = (uint32)((sint32)temp_a1 >> 16);
    goto label_80022d60;
label_80022d60:
    temp_v0 = (0u - temp_a0);
    goto label_80022d64;
label_80022d64:
    temp_v1 = (uint32)(temp_v0 >> 31);
    goto label_80022d68;
label_80022d68:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80022d6c;
label_80022d6c:
    temp_v1 = TM3_DRAFT_U32(local_base + 220u);
    goto label_80022d70;
label_80022d70:
    temp_v0 = (uint32)((sint32)temp_v0 >> 1);
    goto label_80022d74;
label_80022d74:
    temp_v0 = ((sint32)temp_v0 < (sint32)temp_v1);
    goto label_80022d78;
label_80022d78:
    condition_value = (temp_v0 == 0u);
    temp_v0 = (uint32)(temp_a1 >> 31);
    if (condition_value)
        goto label_800230dc;
    goto label_80022d80;
label_80022d7c:
    temp_v0 = (uint32)(temp_a1 >> 31);
    goto label_80022d80;
label_80022d80:
    temp_v0 = (temp_a0 + temp_v0);
    goto label_80022d84;
label_80022d84:
    temp_v0 = (uint32)((sint32)temp_v0 >> 1);
    goto label_80022d88;
label_80022d88:
    temp_v0 = ((sint32)temp_v1 < (sint32)temp_v0);
    goto label_80022d8c;
label_80022d8c:
    condition_value = (temp_v0 == 0u);
    if (condition_value)
        goto label_800230dc;
    goto label_80022d94;
label_80022d90:
    goto label_80022d94;
label_80022d94:
    temp_a0 = (temp_s1 + 0u);
    temp_v0 = sub_80013D64(temp_a0);
    goto label_80022d9c;
label_80022d98:
    temp_a0 = (temp_s1 + 0u);
    goto label_80022d9c;
label_80022d9c:
    temp_s0 = local_base + (uint32)(184);
    goto label_80022da0;
label_80022da0:
    temp_a0 = (temp_s0 + 0u);
    goto label_80022da4;
label_80022da4:
    temp_a3 = TM3_DRAFT_U32(local_base + 216u);
    goto label_80022da8;
label_80022da8:
    temp_a1 = (temp_s0 + 0u);
    goto label_80022dac;
label_80022dac:
    TM3_DRAFT_U32(local_base + 244u) = (uint32)temp_v0;
    goto label_80022db0;
label_80022db0:
    temp_t0 = TM3_DRAFT_U32(temp_s1 + (uint32)(4));
    goto label_80022db4;
label_80022db4:
    temp_v0 = TM3_DRAFT_U32(temp_s7 + (uint32)(0));
    goto label_80022db8;
label_80022db8:
    temp_a2 = TM3_DRAFT_U32(temp_s1 + (uint32)(8));
    goto label_80022dbc;
label_80022dbc:
    temp_s3 = temp_v0 + (uint32)(1412);
    goto label_80022dc0;
label_80022dc0:
    temp_v1 = TM3_DRAFT_I16(temp_v0 + (uint32)(1412));
    goto label_80022dc4;
label_80022dc4:
    temp_v0 = TM3_DRAFT_I16(temp_s3 + (uint32)(2));
    goto label_80022dc8;
label_80022dc8:
    temp_a3 = (temp_a3 - temp_v1);
    goto label_80022dcc;
label_80022dcc:
    temp_v1 = TM3_DRAFT_I16(temp_s3 + (uint32)(4));
    goto label_80022dd0;
label_80022dd0:
    temp_t0 = (temp_t0 - temp_v0);
    goto label_80022dd4;
label_80022dd4:
    TM3_DRAFT_U32(local_base + 184u) = (uint32)temp_a3;
    goto label_80022dd8;
label_80022dd8:
    TM3_DRAFT_U32(temp_s0 + (uint32)(4)) = (uint32)temp_t0;
    goto label_80022ddc;
label_80022ddc:
    temp_a2 = (temp_a2 - temp_v1);
    goto label_80022de0;
label_80022de0:
    TM3_DRAFT_U32(temp_s0 + (uint32)(8)) = (uint32)temp_a2;
    temp_v0 = sub_8005B254(temp_a0, temp_a1);
    goto label_80022de8;
label_80022de4:
    TM3_DRAFT_U32(temp_s0 + (uint32)(8)) = (uint32)temp_a2;
    goto label_80022de8;
label_80022de8:
    temp_a0 = (temp_s3 + 0u);
    goto label_80022dec;
label_80022dec:
    temp_a1 = (temp_s0 + 0u);
    goto label_80022df0;
label_80022df0:
    temp_s0 = local_base + (uint32)(120);
    goto label_80022df4;
label_80022df4:
    temp_v0 = (uint32)(temp_fp << 1);
    goto label_80022df8;
label_80022df8:
    temp_v0 = (temp_v0 + temp_fp);
    goto label_80022dfc;
label_80022dfc:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_80022e00;
label_80022e00:
    temp_a3 = TM3_DRAFT_U32(temp_s7 + (uint32)(0));
    goto label_80022e04;
label_80022e04:
    temp_s0 = (temp_s0 + temp_v0);
    goto label_80022e08;
label_80022e08:
    TM3_DRAFT_U32(local_base + 16u) = (uint32)temp_s0;
    goto label_80022e0c;
label_80022e0c:
    temp_a2 = temp_a3 + (uint32)(868);
    goto label_80022e10;
label_80022e10:
    temp_a3 = temp_a3 + (uint32)(876);
    temp_v0 = sub_80021E44(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u));
    goto label_80022e18;
label_80022e14:
    temp_a3 = temp_a3 + (uint32)(876);
    goto label_80022e18;
label_80022e18:
    temp_a0 = (temp_s0 + 0u);
    goto label_80022e1c;
label_80022e1c:
    temp_s0 = (temp_v0 + 0u);
    temp_v0 = sub_80013D64(temp_a0);
    goto label_80022e24;
label_80022e20:
    temp_s0 = (temp_v0 + 0u);
    goto label_80022e24;
label_80022e24:
    temp_t8 = TM3_DRAFT_U32(local_base + 244u);
    goto label_80022e28;
label_80022e28:
    goto label_80022e2c;
label_80022e2c:
    temp_t8 = (temp_t8 - temp_v0);
    goto label_80022e30;
label_80022e30:
    temp_v0 = (uint32)(temp_s0 << 16);
    goto label_80022e34;
label_80022e34:
    temp_v1 = (uint32)((sint32)temp_v0 >> 16);
    goto label_80022e38;
label_80022e38:
    temp_v0 = (sint32)temp_v1 < 3;
    goto label_80022e3c;
label_80022e3c:
    condition_value = (temp_v0 != 0u);
    TM3_DRAFT_U32(local_base + 244u) = (uint32)temp_t8;
    if (condition_value)
        goto label_80022e8c;
    goto label_80022e44;
label_80022e40:
    TM3_DRAFT_U32(local_base + 244u) = (uint32)temp_t8;
    goto label_80022e44;
label_80022e44:
    temp_a1 = (uint32)(temp_fp << 3);
    goto label_80022e48;
label_80022e48:
    temp_v0 = 0x80090000u;
    goto label_80022e4c;
label_80022e4c:
    temp_v0 = temp_v0 + (uint32)(-24128);
    goto label_80022e50;
label_80022e50:
    temp_a1 = (temp_a1 + temp_v0);
    goto label_80022e54;
label_80022e54:
    temp_v1 = temp_v1 + (uint32)(-3);
    goto label_80022e58;
label_80022e58:
    temp_v0 = TM3_DRAFT_U32(temp_s7 + (uint32)(0));
    goto label_80022e5c;
label_80022e5c:
    temp_v1 = (uint32)(temp_v1 << 1);
    goto label_80022e60;
label_80022e60:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80022e64;
label_80022e64:
    temp_v1 = TM3_DRAFT_I16(temp_v0 + (uint32)(1468));
    goto label_80022e68;
label_80022e68:
    temp_a0 = TM3_DRAFT_I16(temp_v0 + (uint32)(1474));
    goto label_80022e6c;
label_80022e6c:
    temp_v0 = TM3_DRAFT_I16(temp_v0 + (uint32)(1480));
    goto label_80022e70;
label_80022e70:
    temp_v1 = (0u - temp_v1);
    goto label_80022e74;
label_80022e74:
    temp_a0 = (0u - temp_a0);
    goto label_80022e78;
label_80022e78:
    temp_v0 = (0u - temp_v0);
    goto label_80022e7c;
label_80022e7c:
    TM3_DRAFT_U16(temp_a1 + (uint32)(0)) = (uint16)temp_v1;
    goto label_80022e80;
label_80022e80:
    TM3_DRAFT_U16(temp_a1 + (uint32)(2)) = (uint16)temp_a0;
    goto label_80022e84;
label_80022e84:
    TM3_DRAFT_U16(temp_a1 + (uint32)(4)) = (uint16)temp_v0;
    goto label_80022ec0;
label_80022e88:
    TM3_DRAFT_U16(temp_a1 + (uint32)(4)) = (uint16)temp_v0;
    goto label_80022e8c;
label_80022e8c:
    temp_a0 = (uint32)(temp_fp << 3);
    goto label_80022e90;
label_80022e90:
    temp_a1 = 0x80090000u;
    goto label_80022e94;
label_80022e94:
    temp_a1 = temp_a1 + (uint32)(-24128);
    goto label_80022e98;
label_80022e98:
    temp_v0 = TM3_DRAFT_U32(temp_s7 + (uint32)(0));
    goto label_80022e9c;
label_80022e9c:
    temp_v1 = (uint32)(temp_v1 << 1);
    goto label_80022ea0;
label_80022ea0:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_80022ea4;
label_80022ea4:
    temp_v1 = TM3_DRAFT_I16(temp_v0 + (uint32)(1468));
    goto label_80022ea8;
label_80022ea8:
    temp_a2 = TM3_DRAFT_I16(temp_v0 + (uint32)(1474));
    goto label_80022eac;
label_80022eac:
    temp_v0 = TM3_DRAFT_I16(temp_v0 + (uint32)(1480));
    goto label_80022eb0;
label_80022eb0:
    temp_a0 = (temp_a0 + temp_a1);
    goto label_80022eb4;
label_80022eb4:
    TM3_DRAFT_U16(temp_a0 + (uint32)(0)) = (uint16)temp_v1;
    goto label_80022eb8;
label_80022eb8:
    TM3_DRAFT_U16(temp_a0 + (uint32)(2)) = (uint16)temp_a2;
    goto label_80022ebc;
label_80022ebc:
    TM3_DRAFT_U16(temp_a0 + (uint32)(4)) = (uint16)temp_v0;
    goto label_80022ec0;
label_80022ec0:
    temp_s1 = (0u + 0u);
    goto label_80022ec4;
label_80022ec4:
    temp_v0 = 0x80090000u;
    goto label_80022ec8;
label_80022ec8:
    temp_a3 = temp_v0 + (uint32)(-24112);
    goto label_80022ecc;
label_80022ecc:
    temp_v0 = 0x80080000u;
    goto label_80022ed0;
label_80022ed0:
    temp_t1 = temp_v0 + (uint32)(-8376);
    goto label_80022ed4;
label_80022ed4:
    temp_v0 = (uint32)(temp_s0 << 16);
    goto label_80022ed8;
label_80022ed8:
    temp_t0 = (uint32)((sint32)temp_v0 >> 14);
    goto label_80022edc;
label_80022edc:
    temp_t8 = 0x80090000u;
    goto label_80022ee0;
label_80022ee0:
    TM3_DRAFT_U32(temp_t8 + (uint32)(-24112)) = (uint32)0u;
    goto label_80022ee4;
label_80022ee4:
    TM3_DRAFT_U32(temp_s5 + (uint32)(4)) = (uint32)0u;
    goto label_80022ee8;
label_80022ee8:
    TM3_DRAFT_U32(temp_s5 + (uint32)(8)) = (uint32)0u;
    goto label_80022eec;
label_80022eec:
    temp_v0 = (temp_s1 + temp_t0);
    goto label_80022ef0;
label_80022ef0:
    temp_t8 = 0x80090000u;
    goto label_80022ef4;
label_80022ef4:
    temp_v0 = (temp_v0 + temp_t1);
    goto label_80022ef8;
label_80022ef8:
    temp_a2 = TM3_DRAFT_U32(temp_t8 + (uint32)(-24112));
    goto label_80022efc;
label_80022efc:
    temp_v1 = TM3_DRAFT_U8(temp_v0 + (uint32)(0));
    goto label_80022f00;
label_80022f00:
    temp_a1 = TM3_DRAFT_U32(temp_a3 + (uint32)(4));
    goto label_80022f04;
label_80022f04:
    temp_a0 = TM3_DRAFT_U32(temp_a3 + (uint32)(8));
    goto label_80022f08;
label_80022f08:
    temp_v0 = (uint32)(temp_v1 << 3);
    goto label_80022f0c;
label_80022f0c:
    temp_v0 = (temp_v0 - temp_v1);
    goto label_80022f10;
label_80022f10:
    temp_v0 = (uint32)(temp_v0 << 4);
    goto label_80022f14;
label_80022f14:
    temp_v1 = TM3_DRAFT_U32(temp_s7 + (uint32)(0));
    goto label_80022f18;
label_80022f18:
    temp_v0 = temp_v0 + (uint32)(1524);
    goto label_80022f1c;
label_80022f1c:
    temp_v1 = (temp_v1 + temp_v0);
    goto label_80022f20;
label_80022f20:
    temp_v0 = TM3_DRAFT_U32(temp_v1 + (uint32)(32));
    goto label_80022f24;
label_80022f24:
    temp_v1 = temp_v1 + (uint32)(32);
    goto label_80022f28;
label_80022f28:
    temp_a2 = (temp_a2 - temp_v0);
    goto label_80022f2c;
label_80022f2c:
    temp_v0 = TM3_DRAFT_U32(temp_v1 + (uint32)(4));
    goto label_80022f30;
label_80022f30:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(8));
    goto label_80022f34;
label_80022f34:
    temp_s1 = temp_s1 + (uint32)(1);
    goto label_80022f38;
label_80022f38:
    TM3_DRAFT_U32(temp_t8 + (uint32)(-24112)) = (uint32)temp_a2;
    goto label_80022f3c;
label_80022f3c:
    temp_a1 = (temp_a1 - temp_v0);
    goto label_80022f40;
label_80022f40:
    temp_a0 = (temp_a0 - temp_v1);
    goto label_80022f44;
label_80022f44:
    temp_v0 = (sint32)temp_s1 < 4;
    goto label_80022f48;
label_80022f48:
    TM3_DRAFT_U32(temp_a3 + (uint32)(4)) = (uint32)temp_a1;
    goto label_80022f4c;
label_80022f4c:
    condition_value = (temp_v0 != 0u);
    TM3_DRAFT_U32(temp_a3 + (uint32)(8)) = (uint32)temp_a0;
    if (condition_value)
        goto label_80022eec;
    goto label_80022f54;
label_80022f50:
    TM3_DRAFT_U32(temp_a3 + (uint32)(8)) = (uint32)temp_a0;
    goto label_80022f54;
label_80022f54:
    temp_v0 = TM3_DRAFT_U32(temp_t8 + (uint32)(-24112));
    goto label_80022f58;
label_80022f58:
    goto label_80022f5c;
label_80022f5c:
    condition_value = ((sint32)temp_v0 >= 0);
    temp_t1 = (uint32)((sint32)temp_v0 >> 2);
    if (condition_value)
        goto label_80022f6c;
    goto label_80022f64;
label_80022f60:
    temp_t1 = (uint32)((sint32)temp_v0 >> 2);
    goto label_80022f64;
label_80022f64:
    temp_v0 = temp_v0 + (uint32)(3);
    goto label_80022f68;
label_80022f68:
    temp_t1 = (uint32)((sint32)temp_v0 >> 2);
    goto label_80022f6c;
label_80022f6c:
    temp_a2 = TM3_DRAFT_U32(temp_s5 + (uint32)(4));
    goto label_80022f70;
label_80022f70:
    temp_t8 = 0x80090000u;
    goto label_80022f74;
label_80022f74:
    condition_value = ((sint32)temp_a2 >= 0);
    TM3_DRAFT_U32(temp_t8 + (uint32)(-24112)) = (uint32)temp_t1;
    if (condition_value)
        goto label_80022f80;
    goto label_80022f7c;
label_80022f78:
    TM3_DRAFT_U32(temp_t8 + (uint32)(-24112)) = (uint32)temp_t1;
    goto label_80022f7c;
label_80022f7c:
    temp_a2 = temp_a2 + (uint32)(3);
    goto label_80022f80;
label_80022f80:
    temp_a3 = TM3_DRAFT_U32(temp_s5 + (uint32)(8));
    goto label_80022f84;
label_80022f84:
    temp_t0 = (uint32)((sint32)temp_a2 >> 2);
    goto label_80022f88;
label_80022f88:
    condition_value = ((sint32)temp_a3 >= 0);
    TM3_DRAFT_U32(temp_s5 + (uint32)(4)) = (uint32)temp_t0;
    if (condition_value)
        goto label_80022f94;
    goto label_80022f90;
label_80022f8c:
    TM3_DRAFT_U32(temp_s5 + (uint32)(4)) = (uint32)temp_t0;
    goto label_80022f90;
label_80022f90:
    temp_a3 = temp_a3 + (uint32)(3);
    goto label_80022f94;
label_80022f94:
    temp_a0 = (temp_s5 + 0u);
    goto label_80022f98;
label_80022f98:
    temp_a3 = (uint32)((sint32)temp_a3 >> 2);
    goto label_80022f9c;
label_80022f9c:
    temp_s0 = (uint32)(temp_fp << 3);
    goto label_80022fa0;
label_80022fa0:
    temp_v0 = 0x80090000u;
    goto label_80022fa4;
label_80022fa4:
    temp_v0 = temp_v0 + (uint32)(-24128);
    goto label_80022fa8;
label_80022fa8:
    TM3_DRAFT_U32(temp_s5 + (uint32)(8)) = (uint32)temp_a3;
    goto label_80022fac;
label_80022fac:
    temp_t8 = TM3_DRAFT_U32(local_base + 280u);
    goto label_80022fb0;
label_80022fb0:
    temp_s0 = (temp_s0 + temp_v0);
    goto label_80022fb4;
label_80022fb4:
    temp_v0 = TM3_DRAFT_U32(temp_t8 + (uint32)(0));
    goto label_80022fb8;
label_80022fb8:
    temp_t8 = TM3_DRAFT_U32(local_base + 288u);
    goto label_80022fbc;
label_80022fbc:
    temp_a1 = (temp_s0 + 0u);
    goto label_80022fc0;
label_80022fc0:
    temp_v0 = (temp_v0 + temp_t8);
    goto label_80022fc4;
label_80022fc4:
    temp_v1 = temp_v0 + (uint32)(32);
    goto label_80022fc8;
label_80022fc8:
    temp_t8 = 0x80090000u;
    goto label_80022fcc;
label_80022fcc:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(32));
    goto label_80022fd0;
label_80022fd0:
    temp_a2 = TM3_DRAFT_U32(temp_v1 + (uint32)(4));
    goto label_80022fd4;
label_80022fd4:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(8));
    goto label_80022fd8;
label_80022fd8:
    temp_v0 = (temp_t1 + temp_v0);
    goto label_80022fdc;
label_80022fdc:
    temp_a2 = (temp_t0 + temp_a2);
    goto label_80022fe0;
label_80022fe0:
    temp_a3 = (temp_a3 + temp_v1);
    goto label_80022fe4;
label_80022fe4:
    TM3_DRAFT_U32(temp_t8 + (uint32)(-24112)) = (uint32)temp_v0;
    goto label_80022fe8;
label_80022fe8:
    TM3_DRAFT_U32(temp_s5 + (uint32)(4)) = (uint32)temp_a2;
    goto label_80022fec;
label_80022fec:
    TM3_DRAFT_U32(temp_s5 + (uint32)(8)) = (uint32)temp_a3;
    temp_v0 = sub_80013A90(temp_a0, temp_a1);
    goto label_80022ff4;
label_80022ff0:
    TM3_DRAFT_U32(temp_s5 + (uint32)(8)) = (uint32)temp_a3;
    goto label_80022ff4;
label_80022ff4:
    temp_a1 = (temp_v0 + 0u);
    goto label_80022ff8;
label_80022ff8:
    temp_a0 = TM3_DRAFT_U32(0x80089698u + (uint32)(1600));
    goto label_80022ffc;
label_80022ffc:
    temp_a2 = 0u + (uint32)(12);
    temp_v0 = sub_80015684(temp_a0, temp_a1, temp_a2);
    goto label_80023004;
label_80023000:
    temp_a2 = 0u + (uint32)(12);
    goto label_80023004;
label_80023004:
    temp_v1 = TM3_DRAFT_U32(0x80089698u + (uint32)(1612));
    goto label_80023008;
label_80023008:
    temp_t8 = TM3_DRAFT_U32(local_base + 244u);
    goto label_8002300c;
label_8002300c:
    goto label_80023010;
label_80023010:
    product = (uint64)((sint64)(sint32)temp_v1 * (sint64)(sint32)temp_t8);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_80023014;
label_80023014:
    temp_a0 = (temp_s5 + 0u);
    goto label_80023018;
label_80023018:
    temp_a1 = (temp_s0 + 0u);
    goto label_8002301c;
label_8002301c:
    temp_a2 = (temp_s5 + 0u);
    goto label_80023020;
label_80023020:
    temp_t8 = lo_value;
    goto label_80023024;
label_80023024:
    temp_v0 = (temp_t8 + temp_v0);
    goto label_80023028;
label_80023028:
    temp_s3 = (0u - temp_v0);
    temp_v0 = sub_800155A4(temp_a0, temp_a1, temp_a2);
    goto label_80023030;
label_8002302c:
    temp_s3 = (0u - temp_v0);
    goto label_80023030;
label_80023030:
    temp_s2 = 0x80090000u;
    goto label_80023034;
label_80023034:
    temp_s1 = temp_s2 + (uint32)(-24096);
    goto label_80023038;
label_80023038:
    temp_a0 = (temp_s1 + 0u);
    goto label_8002303c;
label_8002303c:
    temp_a1 = (temp_s0 + 0u);
    goto label_80023040;
label_80023040:
    temp_a2 = (temp_s3 + 0u);
    goto label_80023044;
label_80023044:
    temp_a3 = 0u + (uint32)(12);
    temp_v0 = sub_80014B6C(temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_8002304c;
label_80023048:
    temp_a3 = 0u + (uint32)(12);
    goto label_8002304c;
label_8002304c:
    temp_a0 = (temp_s5 + 0u);
    goto label_80023050;
label_80023050:
    temp_a1 = (temp_s5 + 0u);
    goto label_80023054;
label_80023054:
    temp_a2 = TM3_DRAFT_U32(0x80089698u + (uint32)(1604));
    goto label_80023058;
label_80023058:
    temp_a3 = 0u + (uint32)(12);
    goto label_8002305c;
label_8002305c:
    temp_a2 = (0u - temp_a2);
    temp_v0 = sub_80014C04(temp_a0, temp_a1, temp_a2, temp_a3);
    goto label_80023064;
label_80023060:
    temp_a2 = (0u - temp_a2);
    goto label_80023064;
label_80023064:
    temp_v0 = 0x80090000u;
    goto label_80023068;
label_80023068:
    temp_v0 = temp_v0 + (uint32)(-24064);
    goto label_8002306c;
label_8002306c:
    temp_t8 = TM3_DRAFT_U32(local_base + 284u);
    goto label_80023070;
label_80023070:
    temp_v1 = TM3_DRAFT_U32(temp_s2 + (uint32)(-24096));
    goto label_80023074;
label_80023074:
    temp_v0 = (temp_t8 + temp_v0);
    goto label_80023078;
label_80023078:
    temp_t8 = TM3_DRAFT_U32(local_base + 268u);
    goto label_8002307c;
label_8002307c:
    temp_t0 = TM3_DRAFT_U32(temp_s1 + (uint32)(8));
    goto label_80023080;
label_80023080:
    temp_v0 = (temp_t8 + temp_v0);
    goto label_80023084;
label_80023084:
    temp_a0 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_80023088;
label_80023088:
    temp_a2 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_8002308c;
label_8002308c:
    temp_a1 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_80023090;
label_80023090:
    temp_a0 = (temp_a0 + temp_v1);
    goto label_80023094;
label_80023094:
    temp_v1 = TM3_DRAFT_U32(temp_s1 + (uint32)(4));
    goto label_80023098;
label_80023098:
    temp_t8 = 0x80090000u;
    goto label_8002309c;
label_8002309c:
    TM3_DRAFT_U32(temp_v0 + (uint32)(0)) = (uint32)temp_a0;
    goto label_800230a0;
label_800230a0:
    temp_a3 = (temp_a0 + 0u);
    goto label_800230a4;
label_800230a4:
    temp_a1 = (temp_a1 + temp_t0);
    goto label_800230a8;
label_800230a8:
    TM3_DRAFT_U32(temp_v0 + (uint32)(8)) = (uint32)temp_a1;
    goto label_800230ac;
label_800230ac:
    temp_a2 = (temp_a2 + temp_v1);
    goto label_800230b0;
label_800230b0:
    TM3_DRAFT_U32(temp_v0 + (uint32)(4)) = (uint32)temp_a2;
    goto label_800230b4;
label_800230b4:
    temp_a0 = (temp_a2 + 0u);
    goto label_800230b8;
label_800230b8:
    temp_v1 = TM3_DRAFT_U32(temp_t8 + (uint32)(-24112));
    goto label_800230bc;
label_800230bc:
    temp_a2 = TM3_DRAFT_U32(temp_s5 + (uint32)(8));
    goto label_800230c0;
label_800230c0:
    temp_a3 = (temp_a3 + temp_v1);
    goto label_800230c4;
label_800230c4:
    temp_v1 = TM3_DRAFT_U32(temp_s5 + (uint32)(4));
    goto label_800230c8;
label_800230c8:
    temp_a1 = (temp_a1 + temp_a2);
    goto label_800230cc;
label_800230cc:
    TM3_DRAFT_U32(temp_v0 + (uint32)(0)) = (uint32)temp_a3;
    goto label_800230d0;
label_800230d0:
    TM3_DRAFT_U32(temp_v0 + (uint32)(8)) = (uint32)temp_a1;
    goto label_800230d4;
label_800230d4:
    temp_a0 = (temp_a0 + temp_v1);
    goto label_800230d8;
label_800230d8:
    TM3_DRAFT_U32(temp_v0 + (uint32)(4)) = (uint32)temp_a0;
    goto label_800230dc;
label_800230dc:
    temp_t8 = TM3_DRAFT_U32(local_base + 284u);
    goto label_800230e0;
label_800230e0:
    temp_s4 = temp_s4 + (uint32)(1);
    goto label_800230e4;
label_800230e4:
    temp_t8 = temp_t8 + (uint32)(12);
    goto label_800230e8;
label_800230e8:
    TM3_DRAFT_U32(local_base + 284u) = (uint32)temp_t8;
    goto label_800230ec;
label_800230ec:
    temp_t8 = TM3_DRAFT_U32(local_base + 288u);
    goto label_800230f0;
label_800230f0:
    temp_v0 = (sint32)temp_s4 < 8;
    goto label_800230f4;
label_800230f4:
    temp_t8 = temp_t8 + (uint32)(112);
    goto label_800230f8;
label_800230f8:
    condition_value = (temp_v0 != 0u);
    TM3_DRAFT_U32(local_base + 288u) = (uint32)temp_t8;
    if (condition_value)
        goto label_80022c3c;
    goto label_80023100;
label_800230fc:
    TM3_DRAFT_U32(local_base + 288u) = (uint32)temp_t8;
    goto label_80023100;
label_80023100:
    temp_t8 = TM3_DRAFT_U32(local_base + 292u);
    goto label_80023104;
label_80023104:
    goto label_80023108;
label_80023108:
    temp_t8 = temp_t8 + (uint32)(-1);
    goto label_8002310c;
label_8002310c:
    TM3_DRAFT_U32(local_base + 292u) = (uint32)temp_t8;
    goto label_80023110;
label_80023110:
    temp_t8 = TM3_DRAFT_U32(local_base + 296u);
    goto label_80023114;
label_80023114:
    temp_s6 = temp_s6 + (uint32)(1);
    goto label_80023118;
label_80023118:
    temp_t8 = temp_t8 + (uint32)(4);
    goto label_8002311c;
label_8002311c:
    TM3_DRAFT_U32(local_base + 296u) = (uint32)temp_t8;
    goto label_80023120;
label_80023120:
    temp_t8 = TM3_DRAFT_U32(local_base + 300u);
    goto label_80023124;
label_80023124:
    temp_v0 = (sint32)temp_s6 < 2;
    goto label_80023128;
label_80023128:
    temp_t8 = temp_t8 + (uint32)(96);
    goto label_8002312c;
label_8002312c:
    condition_value = (temp_v0 != 0u);
    TM3_DRAFT_U32(local_base + 300u) = (uint32)temp_t8;
    if (condition_value)
        goto label_80022bf0;
    goto label_80023134;
label_80023130:
    TM3_DRAFT_U32(local_base + 300u) = (uint32)temp_t8;
    goto label_80023134;
label_80023134:
    temp_t8 = TM3_DRAFT_U32(local_base + 244u);
    goto label_80023138;
label_80023138:
    goto label_8002313c;
label_8002313c:
    condition_value = ((sint32)temp_t8 >= 0);
    temp_v0 = (0u + 0u);
    if (condition_value)
        goto label_800235f8;
    goto label_80023144;
label_80023140:
    temp_v0 = (0u + 0u);
    goto label_80023144;
label_80023144:
    temp_s0 = 0u + (uint32)(1);
    goto label_80023148;
label_80023148:
    temp_s4 = local_base + (uint32)(208);
    goto label_8002314c;
label_8002314c:
    temp_s1 = (temp_s4 + 0u);
    goto label_80023150;
label_80023150:
    temp_s3 = local_base + (uint32)(200);
    goto label_80023154;
label_80023154:
    temp_t8 = TM3_DRAFT_U32(local_base + 352u);
    goto label_80023158;
label_80023158:
    temp_s2 = (temp_s3 + 0u);
    goto label_8002315c;
label_8002315c:
    TM3_DRAFT_U32(local_base + 200u) = (uint32)temp_t8;
    goto label_80023160;
label_80023160:
    temp_t8 = TM3_DRAFT_U32(local_base + 356u);
    goto label_80023164;
label_80023164:
    temp_v0 = (temp_s0 + 0u);
    goto label_80023168;
label_80023168:
    TM3_DRAFT_U32(local_base + 208u) = (uint32)temp_v0;
    goto label_8002316c;
label_8002316c:
    TM3_DRAFT_U32(local_base + 212u) = (uint32)temp_v0;
    goto label_80023170;
label_80023170:
    TM3_DRAFT_U32(local_base + 204u) = (uint32)temp_t8;
    goto label_80023174;
label_80023174:
    temp_a1 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_80023178;
label_80023178:
    goto label_8002317c;
label_8002317c:
    temp_v1 = TM3_DRAFT_U32(temp_a1 + (uint32)(3928));
    goto label_80023180;
label_80023180:
    goto label_80023184;
label_80023184:
    condition_value = (temp_v1 == 0u);
    temp_v0 = 0u + (uint32)(6);
    if (condition_value)
        goto label_8002319c;
    goto label_8002318c;
label_80023188:
    temp_v0 = 0u + (uint32)(6);
    goto label_8002318c;
label_8002318c:
    condition_value = (temp_v1 == temp_v0);
    temp_v1 = (0u + 0u);
    if (condition_value)
        goto label_800231b8;
    goto label_80023194;
label_80023190:
    temp_v1 = (0u + 0u);
    goto label_80023194;
label_80023194:
    temp_v0 = temp_v1 & 0x2u;
    goto label_800231d4;
label_80023198:
    temp_v0 = temp_v1 & 0x2u;
    goto label_8002319c;
label_8002319c:
    temp_v0 = (uint32)(temp_s0 << 2);
    goto label_800231a0;
label_800231a0:
    temp_v0 = (temp_s3 + temp_v0);
    goto label_800231a4;
label_800231a4:
    temp_a0 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_800231a8;
label_800231a8:
    temp_v0 = sub_800220D4(temp_a0, temp_a1);
    goto label_800231b0;
label_800231ac:
    goto label_800231b0;
label_800231b0:
    temp_v1 = (temp_v0 + 0u);
    goto label_800231d0;
label_800231b4:
    temp_v1 = (temp_v0 + 0u);
    goto label_800231b8;
label_800231b8:
    temp_v0 = (uint32)(temp_s0 << 2);
    goto label_800231bc;
label_800231bc:
    temp_v0 = (temp_s3 + temp_v0);
    goto label_800231c0;
label_800231c0:
    temp_a0 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_800231c4;
label_800231c4:
    temp_v0 = sub_800222C4(temp_a0, temp_a1);
    goto label_800231cc;
label_800231c8:
    goto label_800231cc;
label_800231cc:
    temp_v1 = (temp_v0 + 0u);
    goto label_800231d0;
label_800231d0:
    temp_v0 = temp_v1 & 0x2u;
    goto label_800231d4;
label_800231d4:
    condition_value = (temp_v0 == 0u);
    temp_v0 = temp_v1 & 0x1u;
    if (condition_value)
        goto label_800231e0;
    goto label_800231dc;
label_800231d8:
    temp_v0 = temp_v1 & 0x1u;
    goto label_800231dc;
label_800231dc:
    TM3_DRAFT_U32(temp_s1 + (uint32)(0)) = (uint32)0u;
    goto label_800231e0;
label_800231e0:
    condition_value = (temp_v0 == 0u);
    temp_v0 = (uint32)(temp_s0 << 2);
    if (condition_value)
        goto label_800231f0;
    goto label_800231e8;
label_800231e4:
    temp_v0 = (uint32)(temp_s0 << 2);
    goto label_800231e8;
label_800231e8:
    temp_v0 = (temp_s4 + temp_v0);
    goto label_800231ec;
label_800231ec:
    TM3_DRAFT_U32(temp_v0 + (uint32)(0)) = (uint32)0u;
    goto label_800231f0;
label_800231f0:
    temp_s0 = temp_s0 + (uint32)(-1);
    goto label_800231f4;
label_800231f4:
    temp_s1 = temp_s1 + (uint32)(4);
    goto label_800231f8;
label_800231f8:
    temp_v0 = temp_s4 + (uint32)(8);
    goto label_800231fc;
label_800231fc:
    temp_v0 = ((sint32)temp_s1 < (sint32)temp_v0);
    goto label_80023200;
label_80023200:
    condition_value = (temp_v0 != 0u);
    temp_s2 = temp_s2 + (uint32)(4);
    if (condition_value)
        goto label_80023174;
    goto label_80023208;
label_80023204:
    temp_s2 = temp_s2 + (uint32)(4);
    goto label_80023208;
label_80023208:
    TM3_DRAFT_U32(local_base + 248u) = (uint32)0u;
    goto label_8002320c;
label_8002320c:
    temp_s6 = (0u + 0u);
    goto label_80023210;
label_80023210:
    temp_s7 = (temp_s6 + 0u);
    goto label_80023214;
label_80023214:
    temp_s5 = local_base + (uint32)(48);
    goto label_80023218;
label_80023218:
    temp_s3 = (temp_s6 + 0u);
    goto label_8002321c;
label_8002321c:
    temp_fp = local_base + (uint32)(200);
    goto label_80023220;
label_80023220:
    temp_s1 = (temp_fp + 0u);
    goto label_80023224;
label_80023224:
    temp_s2 = 0u + (uint32)(1);
    goto label_80023228;
label_80023228:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(0));
    goto label_8002322c;
label_8002322c:
    goto label_80023230;
label_80023230:
    temp_s0 = TM3_DRAFT_U32(temp_v0 + (uint32)(4380));
    goto label_80023234;
label_80023234:
    goto label_80023238;
label_80023238:
    condition_value = (temp_s0 == 0u);
    temp_v0 = (uint32)(temp_s2 << 2);
    if (condition_value)
        goto label_80023280;
    goto label_80023240;
label_8002323c:
    temp_v0 = (uint32)(temp_s2 << 2);
    goto label_80023240;
label_80023240:
    temp_v0 = (temp_fp + temp_v0);
    goto label_80023244;
label_80023244:
    temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_80023248;
label_80023248:
    temp_v0 = TM3_DRAFT_U32(temp_s0 + (uint32)(0));
    goto label_8002324c;
label_8002324c:
    goto label_80023250;
label_80023250:
    condition_value = (temp_v0 == temp_v1);
    if (condition_value)
        goto label_80023268;
    goto label_80023258;
label_80023254:
    goto label_80023258;
label_80023258:
    temp_s0 = TM3_DRAFT_U32(temp_s0 + (uint32)(8));
    goto label_8002325c;
label_8002325c:
    goto label_80023260;
label_80023260:
    condition_value = (temp_s0 != 0u);
    if (condition_value)
        goto label_80023248;
    goto label_80023268;
label_80023264:
    goto label_80023268;
label_80023268:
    condition_value = (temp_s0 == 0u);
    if (condition_value)
        goto label_80023280;
    goto label_80023270;
label_8002326c:
    goto label_80023270;
label_80023270:
    temp_v0 = sub_80039FC8();
    goto label_80023278;
label_80023274:
    goto label_80023278;
label_80023278:
    TM3_DRAFT_U32(temp_s0 + (uint32)(4)) = (uint32)temp_v0;
    goto label_800232cc;
label_8002327c:
    TM3_DRAFT_U32(temp_s0 + (uint32)(4)) = (uint32)temp_v0;
    goto label_80023280;
label_80023280:
    temp_a0 = 0u + (uint32)(12);
    temp_v0 = sub_8004A000(temp_a0);
    goto label_80023288;
label_80023284:
    temp_a0 = 0u + (uint32)(12);
    goto label_80023288;
label_80023288:
    temp_s0 = (temp_v0 + 0u);
    goto label_8002328c;
label_8002328c:
    condition_value = (temp_s0 == 0u);
    temp_v0 = (uint32)(temp_s2 << 2);
    if (condition_value)
        goto label_800232cc;
    goto label_80023294;
label_80023290:
    temp_v0 = (uint32)(temp_s2 << 2);
    goto label_80023294;
label_80023294:
    temp_v0 = (temp_fp + temp_v0);
    goto label_80023298;
label_80023298:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_8002329c;
label_8002329c:
    goto label_800232a0;
label_800232a0:
    TM3_DRAFT_U32(temp_s0 + (uint32)(0)) = (uint32)temp_v0;
    goto label_800232a4;
label_800232a4:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(0));
    goto label_800232a8;
label_800232a8:
    goto label_800232ac;
label_800232ac:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(4380));
    goto label_800232b0;
label_800232b0:
    TM3_DRAFT_U32(temp_s0 + (uint32)(8)) = (uint32)temp_v0;
    temp_v0 = sub_80039FC8();
    goto label_800232b8;
label_800232b4:
    TM3_DRAFT_U32(temp_s0 + (uint32)(8)) = (uint32)temp_v0;
    goto label_800232b8;
label_800232b8:
    TM3_DRAFT_U32(temp_s0 + (uint32)(4)) = (uint32)temp_v0;
    goto label_800232bc;
label_800232bc:
    temp_v0 = TM3_DRAFT_U32(temp_s1 + (uint32)(0));
    goto label_800232c0;
label_800232c0:
    temp_t8 = 0u + (uint32)(1);
    goto label_800232c4;
label_800232c4:
    TM3_DRAFT_U32(local_base + 248u) = (uint32)temp_t8;
    goto label_800232c8;
label_800232c8:
    TM3_DRAFT_U32(temp_v0 + (uint32)(4380)) = (uint32)temp_s0;
    goto label_800232cc;
label_800232cc:
    temp_v0 = (local_base + temp_s3);
    goto label_800232d0;
label_800232d0:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(208));
    goto label_800232d4;
label_800232d4:
    goto label_800232d8;
label_800232d8:
    condition_value = (temp_v0 == 0u);
    temp_v0 = 0x80090000u;
    if (condition_value)
        goto label_80023330;
    goto label_800232e0;
label_800232dc:
    temp_v0 = 0x80090000u;
    goto label_800232e0;
label_800232e0:
    temp_s4 = (0u + 0u);
    goto label_800232e4;
label_800232e4:
    temp_t1 = (temp_s5 + 0u);
    goto label_800232e8;
label_800232e8:
    temp_t0 = (temp_s7 + 0u);
    goto label_800232ec;
label_800232ec:
    temp_a3 = temp_v0 + (uint32)(-24064);
    goto label_800232f0;
label_800232f0:
    temp_a2 = 0u + (uint32)(1524);
    goto label_800232f4;
label_800232f4:
    temp_v1 = (temp_t0 + temp_a3);
    goto label_800232f8;
label_800232f8:
    temp_a3 = temp_a3 + (uint32)(12);
    goto label_800232fc;
label_800232fc:
    temp_s4 = temp_s4 + (uint32)(1);
    goto label_80023300;
label_80023300:
    temp_v0 = TM3_DRAFT_U32(temp_t1 + (uint32)(0));
    goto label_80023304;
label_80023304:
    temp_a0 = TM3_DRAFT_U32(temp_v1 + (uint32)(0));
    goto label_80023308;
label_80023308:
    temp_a1 = TM3_DRAFT_U32(temp_v1 + (uint32)(4));
    goto label_8002330c;
label_8002330c:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(8));
    goto label_80023310;
label_80023310:
    temp_v0 = (temp_v0 + temp_a2);
    goto label_80023314;
label_80023314:
    TM3_DRAFT_U32(temp_v0 + (uint32)(68)) = (uint32)temp_a0;
    goto label_80023318;
label_80023318:
    temp_v0 = temp_v0 + (uint32)(68);
    goto label_8002331c;
label_8002331c:
    TM3_DRAFT_U32(temp_v0 + (uint32)(4)) = (uint32)temp_a1;
    goto label_80023320;
label_80023320:
    TM3_DRAFT_U32(temp_v0 + (uint32)(8)) = (uint32)temp_v1;
    goto label_80023324;
label_80023324:
    temp_v0 = (sint32)temp_s4 < 8;
    goto label_80023328;
label_80023328:
    condition_value = (temp_v0 != 0u);
    temp_a2 = temp_a2 + (uint32)(112);
    if (condition_value)
        goto label_800232f4;
    goto label_80023330;
label_8002332c:
    temp_a2 = temp_a2 + (uint32)(112);
    goto label_80023330;
label_80023330:
    temp_s7 = temp_s7 + (uint32)(96);
    goto label_80023334;
label_80023334:
    temp_s5 = temp_s5 + (uint32)(4);
    goto label_80023338;
label_80023338:
    temp_s3 = temp_s3 + (uint32)(4);
    goto label_8002333c;
label_8002333c:
    temp_s1 = temp_s1 + (uint32)(4);
    goto label_80023340;
label_80023340:
    temp_s6 = temp_s6 + (uint32)(1);
    goto label_80023344;
label_80023344:
    temp_v0 = (sint32)temp_s6 < 2;
    goto label_80023348;
label_80023348:
    condition_value = (temp_v0 != 0u);
    temp_s2 = temp_s2 + (uint32)(-1);
    if (condition_value)
        goto label_80023228;
    goto label_80023350;
label_8002334c:
    temp_s2 = temp_s2 + (uint32)(-1);
    goto label_80023350;
label_80023350:
    temp_t8 = TM3_DRAFT_U32(local_base + 248u);
    goto label_80023354;
label_80023354:
    goto label_80023358;
label_80023358:
    condition_value = (temp_t8 == 0u);
    temp_s6 = (0u + 0u);
    if (condition_value)
        goto label_800235f4;
    goto label_80023360;
label_8002335c:
    temp_s6 = (0u + 0u);
    goto label_80023360;
label_80023360:
    temp_v0 = 0x80090000u;
    goto label_80023364;
label_80023364:
    temp_t0 = temp_v0 + (uint32)(-23872);
    goto label_80023368;
label_80023368:
    temp_t1 = local_base + (uint32)(200);
    goto label_8002336c;
label_8002336c:
    temp_v0 = TM3_DRAFT_U32(temp_t1 + (uint32)(0));
    goto label_80023370;
label_80023370:
    temp_t1 = temp_t1 + (uint32)(4);
    goto label_80023374;
label_80023374:
    temp_s6 = temp_s6 + (uint32)(1);
    goto label_80023378;
label_80023378:
    temp_v1 = temp_v0 + (uint32)(1556);
    goto label_8002337c;
label_8002337c:
    temp_a3 = TM3_DRAFT_U32(temp_v0 + (uint32)(1556));
    goto label_80023380;
label_80023380:
    temp_a0 = TM3_DRAFT_U32(temp_v0 + (uint32)(1568));
    goto label_80023384;
label_80023384:
    temp_v0 = temp_v0 + (uint32)(1568);
    goto label_80023388;
label_80023388:
    temp_a2 = TM3_DRAFT_U32(temp_v1 + (uint32)(4));
    goto label_8002338c;
label_8002338c:
    temp_a1 = TM3_DRAFT_U32(temp_v1 + (uint32)(8));
    goto label_80023390;
label_80023390:
    temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_80023394;
label_80023394:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_80023398;
label_80023398:
    temp_a3 = (temp_a3 - temp_a0);
    goto label_8002339c;
label_8002339c:
    temp_a2 = (temp_a2 - temp_v1);
    goto label_800233a0;
label_800233a0:
    temp_a1 = (temp_a1 - temp_v0);
    goto label_800233a4;
label_800233a4:
    TM3_DRAFT_U16(temp_t0 + (uint32)(0)) = (uint16)temp_a3;
    goto label_800233a8;
label_800233a8:
    TM3_DRAFT_U16(temp_t0 + (uint32)(2)) = (uint16)temp_a2;
    goto label_800233ac;
label_800233ac:
    TM3_DRAFT_U16(temp_t0 + (uint32)(4)) = (uint16)temp_a1;
    goto label_800233b0;
label_800233b0:
    temp_v0 = (sint32)temp_s6 < 2;
    goto label_800233b4;
label_800233b4:
    condition_value = (temp_v0 != 0u);
    temp_t0 = temp_t0 + (uint32)(8);
    if (condition_value)
        goto label_8002336c;
    goto label_800233bc;
label_800233b8:
    temp_t0 = temp_t0 + (uint32)(8);
    goto label_800233bc;
label_800233bc:
    temp_s1 = 0x80090000u;
    goto label_800233c0;
label_800233c0:
    temp_s1 = temp_s1 + (uint32)(-25392);
    goto label_800233c4;
label_800233c4:
    temp_a0 = (temp_s1 + 0u);
    goto label_800233c8;
label_800233c8:
    temp_a1 = (temp_s1 + 0u);
    goto label_800233cc;
label_800233cc:
    temp_s6 = (0u + 0u);
    goto label_800233d0;
label_800233d0:
    temp_s4 = 0u + (uint32)(1);
    goto label_800233d4;
label_800233d4:
    temp_s3 = local_base + (uint32)(200);
    goto label_800233d8;
label_800233d8:
    temp_s2 = (temp_s3 + 0u);
    goto label_800233dc;
label_800233dc:
    temp_v0 = 0x80090000u;
    goto label_800233e0;
label_800233e0:
    temp_a2 = TM3_DRAFT_I16(temp_v0 + (uint32)(-23872));
    goto label_800233e4;
label_800233e4:
    temp_v0 = temp_v0 + (uint32)(-23872);
    goto label_800233e8;
label_800233e8:
    temp_t0 = TM3_DRAFT_I16(temp_v0 + (uint32)(2));
    goto label_800233ec;
label_800233ec:
    temp_v1 = TM3_DRAFT_I16(temp_v0 + (uint32)(8));
    goto label_800233f0;
label_800233f0:
    temp_a3 = TM3_DRAFT_I16(temp_v0 + (uint32)(4));
    goto label_800233f4;
label_800233f4:
    temp_v0 = temp_v0 + (uint32)(8);
    goto label_800233f8;
label_800233f8:
    temp_a2 = (temp_a2 - temp_v1);
    goto label_800233fc;
label_800233fc:
    temp_v1 = TM3_DRAFT_I16(temp_v0 + (uint32)(2));
    goto label_80023400;
label_80023400:
    temp_v0 = TM3_DRAFT_I16(temp_v0 + (uint32)(4));
    goto label_80023404;
label_80023404:
    temp_s0 = 0x80090000u;
    goto label_80023408;
label_80023408:
    temp_s0 = temp_s0 + (uint32)(-25400);
    goto label_8002340c;
label_8002340c:
    TM3_DRAFT_U16(0x80089698u + (uint32)(1584)) = (uint16)temp_a2;
    goto label_80023410;
label_80023410:
    temp_t0 = (temp_t0 - temp_v1);
    goto label_80023414;
label_80023414:
    temp_v1 = TM3_DRAFT_U32(local_base + 200u);
    goto label_80023418;
label_80023418:
    temp_a3 = (temp_a3 - temp_v0);
    goto label_8002341c;
label_8002341c:
    TM3_DRAFT_U16(temp_s0 + (uint32)(2)) = (uint16)temp_t0;
    goto label_80023420;
label_80023420:
    TM3_DRAFT_U16(temp_s0 + (uint32)(4)) = (uint16)temp_a3;
    goto label_80023424;
label_80023424:
    temp_v0 = TM3_DRAFT_U32(local_base + 204u);
    goto label_80023428;
label_80023428:
    temp_t1 = TM3_DRAFT_U32(temp_v1 + (uint32)(1556));
    goto label_8002342c;
label_8002342c:
    temp_v1 = temp_v1 + (uint32)(1556);
    goto label_80023430;
label_80023430:
    temp_a2 = TM3_DRAFT_U32(temp_v0 + (uint32)(1556));
    goto label_80023434;
label_80023434:
    temp_v0 = temp_v0 + (uint32)(1556);
    goto label_80023438;
label_80023438:
    temp_t0 = TM3_DRAFT_U32(temp_v1 + (uint32)(4));
    goto label_8002343c;
label_8002343c:
    temp_a3 = TM3_DRAFT_U32(temp_v1 + (uint32)(8));
    goto label_80023440;
label_80023440:
    temp_v1 = TM3_DRAFT_U32(temp_v0 + (uint32)(4));
    goto label_80023444;
label_80023444:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(8));
    goto label_80023448;
label_80023448:
    temp_t1 = (temp_t1 - temp_a2);
    goto label_8002344c;
label_8002344c:
    temp_t0 = (temp_t0 - temp_v1);
    goto label_80023450;
label_80023450:
    temp_a3 = (temp_a3 - temp_v0);
    goto label_80023454;
label_80023454:
    TM3_DRAFT_U16(0x80089698u + (uint32)(1592)) = (uint16)temp_t1;
    goto label_80023458;
label_80023458:
    TM3_DRAFT_U16(temp_s1 + (uint32)(2)) = (uint16)temp_t0;
    goto label_8002345c;
label_8002345c:
    TM3_DRAFT_U16(temp_s1 + (uint32)(4)) = (uint16)temp_a3;
    temp_v0 = sub_8005B284(temp_a0, temp_a1);
    goto label_80023464;
label_80023460:
    TM3_DRAFT_U16(temp_s1 + (uint32)(4)) = (uint16)temp_a3;
    goto label_80023464;
label_80023464:
    temp_a0 = (temp_s0 + 0u);
    goto label_80023468;
label_80023468:
    temp_a1 = (temp_s1 + 0u);
    temp_v0 = sub_80013E5C(temp_a0, temp_a1);
    goto label_80023470;
label_8002346c:
    temp_a1 = (temp_s1 + 0u);
    goto label_80023470;
label_80023470:
    temp_s0 = (temp_v0 + 0u);
    goto label_80023474;
label_80023474:
    temp_v1 = (uint32)((sint32)temp_s0 >> 31);
    goto label_80023478;
label_80023478:
    temp_v0 = (temp_s0 ^ temp_v1);
    goto label_8002347c;
label_8002347c:
    temp_s0 = (temp_v0 - temp_v1);
    goto label_80023480;
label_80023480:
    temp_v0 = 0x80090000u;
    goto label_80023484;
label_80023484:
    temp_s5 = temp_v0 + (uint32)(-32700);
    goto label_80023488;
label_80023488:
    temp_v0 = 0x80080000u;
    goto label_8002348c;
label_8002348c:
    temp_s1 = temp_v0 + (uint32)(-372);
    goto label_80023490;
label_80023490:
    temp_a1 = (temp_s4 - temp_s6);
    goto label_80023494;
label_80023494:
    temp_a1 = (uint32)(temp_a1 << 2);
    goto label_80023498;
label_80023498:
    temp_a1 = (temp_s3 + temp_a1);
    goto label_8002349c;
label_8002349c:
    temp_v0 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_800234a0;
label_800234a0:
    temp_v1 = TM3_DRAFT_U32(temp_a1 + (uint32)(0));
    goto label_800234a4;
label_800234a4:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(4040));
    goto label_800234a8;
label_800234a8:
    temp_v1 = TM3_DRAFT_U32(temp_v1 + (uint32)(4040));
    goto label_800234ac;
label_800234ac:
    temp_a0 = TM3_DRAFT_I16(temp_v0 + (uint32)(62));
    goto label_800234b0;
label_800234b0:
    temp_v0 = TM3_DRAFT_I16(temp_v1 + (uint32)(60));
    goto label_800234b4;
label_800234b4:
    goto label_800234b8;
label_800234b8:
    product = (uint64)((sint64)(sint32)temp_a0 * (sint64)(sint32)temp_v0);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_800234bc;
label_800234bc:
    TM3_DRAFT_U32(local_base + 16u) = (uint32)temp_s5;
    goto label_800234c0;
label_800234c0:
    temp_t8 = lo_value;
    goto label_800234c4;
label_800234c4:
    temp_v0 = temp_t8 + (uint32)(2048);
    goto label_800234c8;
label_800234c8:
    temp_v0 = (uint32)((sint32)temp_v0 >> 12);
    goto label_800234cc;
label_800234cc:
    product = (uint64)((sint64)(sint32)temp_v0 * (sint64)(sint32)temp_s0);
    lo_value = (uint32)product;
    hi_value = (uint32)(product >> 32);
    goto label_800234d0;
label_800234d0:
    temp_v0 = TM3_DRAFT_U32(temp_a1 + (uint32)(0));
    goto label_800234d4;
label_800234d4:
    goto label_800234d8;
label_800234d8:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(3928));
    goto label_800234dc;
label_800234dc:
    goto label_800234e0;
label_800234e0:
    temp_v0 = (uint32)(temp_v0 << 2);
    goto label_800234e4;
label_800234e4:
    temp_v0 = (temp_v0 + temp_s1);
    goto label_800234e8;
label_800234e8:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(0));
    goto label_800234ec;
label_800234ec:
    temp_a3 = (0u + 0u);
    goto label_800234f0;
label_800234f0:
    TM3_DRAFT_U32(local_base + 20u) = (uint32)temp_v0;
    goto label_800234f4;
label_800234f4:
    temp_a0 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_800234f8;
label_800234f8:
    temp_a1 = TM3_DRAFT_U32(temp_a1 + (uint32)(0));
    goto label_800234fc;
label_800234fc:
    temp_t8 = lo_value;
    goto label_80023500;
label_80023500:
    temp_v0 = temp_t8 + (uint32)(2048);
    goto label_80023504;
label_80023504:
    temp_v0 = (uint32)((sint32)temp_v0 >> 12);
    goto label_80023508;
label_80023508:
    temp_a2 = (uint32)(temp_v0 << 14);
    goto label_8002350c;
label_8002350c:
    temp_a2 = (uint32)((sint32)temp_a2 >> 12);
    temp_v0 = sub_800239C0(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u), TM3_DRAFT_U32(local_base + 20u));
    goto label_80023514;
label_80023510:
    temp_a2 = (uint32)((sint32)temp_a2 >> 12);
    goto label_80023514;
label_80023514:
    temp_v0 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_80023518;
label_80023518:
    goto label_8002351c;
label_8002351c:
    temp_v0 = TM3_DRAFT_I8(temp_v0 + (uint32)(3328));
    goto label_80023520;
label_80023520:
    goto label_80023524;
label_80023524:
    condition_value = (temp_v0 != temp_s4);
    temp_v0 = (sint32)temp_s0 < 43;
    if (condition_value)
        goto label_80023564;
    goto label_8002352c;
label_80023528:
    temp_v0 = (sint32)temp_s0 < 43;
    goto label_8002352c;
label_8002352c:
    condition_value = (temp_v0 != 0u);
    temp_a1 = 0u + (uint32)(7);
    if (condition_value)
        goto label_80023550;
    goto label_80023534;
label_80023530:
    temp_a1 = 0u + (uint32)(7);
    goto label_80023534;
label_80023534:
    temp_v0 = (sint32)temp_s0 < 85;
    goto label_80023538;
label_80023538:
    condition_value = (temp_v0 != 0u);
    temp_a1 = 0u + (uint32)(8);
    if (condition_value)
        goto label_80023550;
    goto label_80023540;
label_8002353c:
    temp_a1 = 0u + (uint32)(8);
    goto label_80023540;
label_80023540:
    temp_v0 = (sint32)temp_s0 < 128;
    goto label_80023544;
label_80023544:
    condition_value = (temp_v0 == 0u);
    temp_a1 = 0u + (uint32)(10);
    if (condition_value)
        goto label_80023550;
    goto label_8002354c;
label_80023548:
    temp_a1 = 0u + (uint32)(10);
    goto label_8002354c;
label_8002354c:
    temp_a1 = 0u + (uint32)(9);
    goto label_80023550;
label_80023550:
    temp_v0 = TM3_DRAFT_U32(temp_s2 + (uint32)(0));
    goto label_80023554;
label_80023554:
    goto label_80023558;
label_80023558:
    temp_a0 = TM3_DRAFT_U32(temp_v0 + (uint32)(3924));
    goto label_8002355c;
label_8002355c:
    temp_v0 = sub_80047364(temp_a0, temp_a1);
    goto label_80023564;
label_80023560:
    goto label_80023564;
label_80023564:
    temp_s6 = temp_s6 + (uint32)(1);
    goto label_80023568;
label_80023568:
    temp_v0 = (sint32)temp_s6 < 2;
    goto label_8002356c;
label_8002356c:
    condition_value = (temp_v0 != 0u);
    temp_s2 = temp_s2 + (uint32)(4);
    if (condition_value)
        goto label_80023490;
    goto label_80023574;
label_80023570:
    temp_s2 = temp_s2 + (uint32)(4);
    goto label_80023574;
label_80023574:
    temp_v0 = sub_80039FD4();
    goto label_8002357c;
label_80023578:
    goto label_8002357c;
label_8002357c:
    temp_a0 = 0u + (uint32)(22);
    goto label_80023580;
label_80023580:
    temp_a1 = 0u + (uint32)(29);
    goto label_80023584;
label_80023584:
    temp_v1 = TM3_DRAFT_U32(local_base + 200u);
    goto label_80023588;
label_80023588:
    temp_t0 = TM3_DRAFT_U32(local_base + 204u);
    goto label_8002358c;
label_8002358c:
    temp_a3 = TM3_DRAFT_U32(temp_v1 + (uint32)(1556));
    goto label_80023590;
label_80023590:
    temp_v0 = TM3_DRAFT_U32(temp_t0 + (uint32)(1556));
    goto label_80023594;
label_80023594:
    temp_a2 = 0u + (uint32)(26);
    goto label_80023598;
label_80023598:
    temp_a3 = (temp_a3 + temp_v0);
    goto label_8002359c;
label_8002359c:
    temp_v0 = (uint32)(temp_a3 >> 31);
    goto label_800235a0;
label_800235a0:
    temp_a3 = (temp_a3 + temp_v0);
    goto label_800235a4;
label_800235a4:
    temp_v0 = TM3_DRAFT_U32(temp_v1 + (uint32)(1560));
    goto label_800235a8;
label_800235a8:
    temp_v1 = TM3_DRAFT_U32(temp_t0 + (uint32)(1560));
    goto label_800235ac;
label_800235ac:
    temp_a3 = (uint32)((sint32)temp_a3 >> 1);
    goto label_800235b0;
label_800235b0:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_800235b4;
label_800235b4:
    temp_v1 = (uint32)(temp_v0 >> 31);
    goto label_800235b8;
label_800235b8:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_800235bc;
label_800235bc:
    temp_v0 = (uint32)((sint32)temp_v0 >> 1);
    goto label_800235c0;
label_800235c0:
    TM3_DRAFT_U32(local_base + 16u) = (uint32)temp_v0;
    goto label_800235c4;
label_800235c4:
    temp_v1 = (temp_t0 + 0u);
    goto label_800235c8;
label_800235c8:
    temp_v0 = TM3_DRAFT_U32(local_base + 200u);
    goto label_800235cc;
label_800235cc:
    temp_t0 = TM3_DRAFT_U32(temp_v1 + (uint32)(1564));
    goto label_800235d0;
label_800235d0:
    temp_v0 = TM3_DRAFT_U32(temp_v0 + (uint32)(1564));
    goto label_800235d4;
label_800235d4:
    temp_v1 = (uint32)(temp_s0 << 3);
    goto label_800235d8;
label_800235d8:
    TM3_DRAFT_U32(local_base + 24u) = (uint32)temp_v1;
    goto label_800235dc;
label_800235dc:
    temp_v0 = (temp_v0 + temp_t0);
    goto label_800235e0;
label_800235e0:
    temp_v1 = (uint32)(temp_v0 >> 31);
    goto label_800235e4;
label_800235e4:
    temp_v0 = (temp_v0 + temp_v1);
    goto label_800235e8;
label_800235e8:
    temp_v0 = (uint32)((sint32)temp_v0 >> 1);
    goto label_800235ec;
label_800235ec:
    TM3_DRAFT_U32(local_base + 20u) = (uint32)temp_v0;
    temp_v0 = sub_8004A294(temp_a0, temp_a1, temp_a2, temp_a3, TM3_DRAFT_U32(local_base + 16u), TM3_DRAFT_U32(local_base + 20u), TM3_DRAFT_U32(local_base + 24u));
    goto label_800235f4;
label_800235f0:
    TM3_DRAFT_U32(local_base + 20u) = (uint32)temp_v0;
    goto label_800235f4;
label_800235f4:
    temp_v0 = TM3_DRAFT_U32(local_base + 244u);
    goto label_800235f8;
label_800235f8:
    goto label_800235fc;
label_800235fc:
    goto label_80023600;
label_80023600:
    goto label_80023604;
label_80023604:
    goto label_80023608;
label_80023608:
    goto label_8002360c;
label_8002360c:
    goto label_80023610;
label_80023610:
    goto label_80023614;
label_80023614:
    goto label_80023618;
label_80023618:
    goto label_8002361c;
label_8002361c:
    goto label_80023620;
label_80023620:
    return temp_v0;
label_80023624:
    return temp_v0;
}
