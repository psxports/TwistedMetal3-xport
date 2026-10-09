#include "game_draft_support.h"
#include "game_draft_signatures.h"

/* Unverified draft; TODO items require later review */
uint32 sub_800460C8(uint32 a1)
{
    FUNCTION_MARKER(0x800460C8u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 t0; /* TODO: Review undefined incoming or temporary value */
    uint32 t1; /* TODO: Review undefined incoming or temporary value */
    uint32 t2; /* TODO: Review undefined incoming or temporary value */
    uint32 t3; /* TODO: Review undefined incoming or temporary value */
    uint32 s0; /* TODO: Review undefined incoming or temporary value */
    uint32 s1; /* TODO: Review undefined incoming or temporary value */
    uint32 s2; /* TODO: Review undefined incoming or temporary value */
    uint32 s3; /* TODO: Review undefined incoming or temporary value */
    uint32 s4; /* TODO: Review undefined incoming or temporary value */
    uint32 s5; /* TODO: Review undefined incoming or temporary value */
    uint32 s6; /* TODO: Review undefined incoming or temporary value */
    uint32 s7; /* TODO: Review undefined incoming or temporary value */
    uint32 fp; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[256]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_800460C8:;
    L_800460CC:;
    v0 = 0x800d0000u;
    L_800460D0:;
    L_800460D4:;
    s1 = v0 + (uint32)(11912);
    L_800460D8:;
    L_800460DC:;
    L_800460E0:;
    L_800460E4:;
    L_800460E8:;
    L_800460EC:;
    L_800460F0:;
    L_800460F4:;
    L_800460F8:;
    L_800460FC:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(236));
    L_80046100:;
    L_80046104:;
    {
        uint32 branch = v0 == 0u;
        s5 = arg0 + 0u;
        if (branch) goto L_8004661C;
    }
    L_8004610C:;
    arg0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 112, sizeof(local_bytes) - 112u) /* TODO: Local buffer adapter */;
    L_80046110:;
    arg1 = 0u + 0u;
    L_80046114:;
    arg2 = 0u + (uint32)(16);
    v0 = sub_800566A4(arg0, arg1, arg2); /* TODO: Missing BIOS or SDK adapter */
    L_8004611C:;
    arg0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 128, sizeof(local_bytes) - 128u) /* TODO: Local buffer adapter */;
    L_80046120:;
    arg1 = 0u + 0u;
    L_80046124:;
    s0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 32, sizeof(local_bytes) - 32u) /* TODO: Local buffer adapter */;
    L_80046128:;
    v0 = 0x80090000u;
    L_8004612C:;
    v0 = v0 + (uint32)(-31940);
    L_80046130:;
    L_80046134:;
    TM3_DRAFT_U32(listing_local_address + 116u) = (uint32)v0;
    L_80046138:;
    t0 = TM3_DRAFT_U32(listing_local_address + 112u);
    L_8004613C:;
    t1 = TM3_DRAFT_U32(listing_local_address + 116u);
    L_80046140:;
    t2 = TM3_DRAFT_U32(listing_local_address + 120u);
    L_80046144:;
    t3 = TM3_DRAFT_U32(listing_local_address + 124u);
    L_80046148:;
    TM3_DRAFT_U32(listing_local_address + 96u) = (uint32)t0;
    L_8004614C:;
    TM3_DRAFT_U32(listing_local_address + 100u) = (uint32)t1;
    L_80046150:;
    TM3_DRAFT_U32(listing_local_address + 104u) = (uint32)t2;
    L_80046154:;
    TM3_DRAFT_U32(listing_local_address + 108u) = (uint32)t3;
    L_80046158:;
    arg2 = 0u + (uint32)(16);
    v0 = sub_800566A4(arg0, arg1, arg2); /* TODO: Missing BIOS or SDK adapter */
    L_80046160:;
    v0 = 0x80090000u;
    L_80046164:;
    v0 = v0 + (uint32)(-31924);
    L_80046168:;
    L_8004616C:;
    TM3_DRAFT_U32(listing_local_address + 132u) = (uint32)v0;
    L_80046170:;
    t0 = TM3_DRAFT_U32(listing_local_address + 128u);
    L_80046174:;
    t1 = TM3_DRAFT_U32(listing_local_address + 132u);
    L_80046178:;
    t2 = TM3_DRAFT_U32(listing_local_address + 136u);
    L_8004617C:;
    t3 = TM3_DRAFT_U32(listing_local_address + 140u);
    L_80046180:;
    TM3_DRAFT_U32(listing_local_address + 112u) = (uint32)t0;
    L_80046184:;
    TM3_DRAFT_U32(listing_local_address + 116u) = (uint32)t1;
    L_80046188:;
    TM3_DRAFT_U32(listing_local_address + 120u) = (uint32)t2;
    L_8004618C:;
    TM3_DRAFT_U32(listing_local_address + 124u) = (uint32)t3;
    L_80046190:;
    arg2 = TM3_DRAFT_U32(s1 + (uint32)(232));
    L_80046194:;
    v0 = 0u + (uint32)(-1);
    L_80046198:;
    {
        uint32 branch = arg2 == v0;
        v0 = 0u + (uint32)(1);
        if (branch) goto L_800461D8;
    }
    L_800461A0:;
    v1 = TM3_DRAFT_U32(s1 + (uint32)(8));
    L_800461A4:;
    L_800461A8:;
    {
        uint32 branch = v1 != v0;
        arg0 = s0 + 0u;
        if (branch) goto L_800461C0;
    }
    L_800461B0:;
    v0 = 0x80090000u;
    L_800461B4:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(-26532));
    L_800461B8:;
    TM3_DRAFT_U32(listing_local_address + 32u) = (uint32)v0;
    goto L_800461D0;
    L_800461C0:;
    arg1 = 0x80090000u;
    L_800461C4:;
    arg1 = arg1 + (uint32)(-31904);
    L_800461C8:;
    arg2 = arg2 + (uint32)(1);
    v0 = sub_800496E0(arg0, arg1, arg2);
    L_800461D0:;
    arg2 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 96, sizeof(local_bytes) - 96u) /* TODO: Local buffer adapter */;
    goto L_80046210;
    L_800461D8:;
    v1 = TM3_DRAFT_U32(s1 + (uint32)(8));
    L_800461DC:;
    L_800461E0:;
    {
        uint32 branch = v1 != v0;
        v0 = 0x80090000u;
        if (branch) goto L_800461F8;
    }
    L_800461E8:;
    v0 = 0x80090000u;
    L_800461EC:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(-26532));
    L_800461F0:;
    TM3_DRAFT_U32(listing_local_address + 32u) = (uint32)v0;
    goto L_8004620C;
    L_800461F8:;
    t3 = v0 + (uint32)(-26528);
    L_800461FC:;
    t0 = TM3_DRAFT_U32(t3 + (uint32)(0));
    L_80046200:;
    t1 = TM3_DRAFT_U32(t3 + (uint32)(4));
    L_80046204:;
    TM3_DRAFT_U32(listing_local_address + 32u) = (uint32)t0;
    L_80046208:;
    TM3_DRAFT_U32(listing_local_address + 36u) = (uint32)t1;
    L_8004620C:;
    arg2 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 112, sizeof(local_bytes) - 112u) /* TODO: Local buffer adapter */;
    L_80046210:;
    s3 = 0u + (uint32)(24);
    L_80046214:;
    arg0 = s5 + 0u;
    L_80046218:;
    s0 = 0x80080000u;
    L_8004621C:;
    s0 = s0 + (uint32)(-3812);
    L_80046220:;
    arg1 = s0 + 0u;
    L_80046224:;
    arg3 = 0u + (uint32)(2);
    L_80046228:;
    v0 = 0u + (uint32)(160);
    L_8004622C:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_80046230:;
    v0 = 0u + (uint32)(4);
    L_80046234:;
    L_80046238:;
    TM3_DRAFT_U32(listing_local_address + 24u) = (uint32)v0;
    v0 = tm3_draft_indirect(0x80045a20u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_80046240:;
    v1 = TM3_DRAFT_U8(s0 + (uint32)(20));
    L_80046244:;
    L_80046248:;
    v1 = v1 >> 1u;
    L_8004624C:;
    s3 = v0 + v1;
    L_80046250:;
    v0 = 0x800d0000u;
    L_80046254:;
    arg2 = TM3_DRAFT_U32(v0 + (uint32)(12160));
    L_80046258:;
    v0 = 0u + (uint32)(1);
    L_8004625C:;
    {
        uint32 branch = arg2 != v0;
        arg0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 32, sizeof(local_bytes) - 32u) /* TODO: Local buffer adapter */;
        if (branch) goto L_8004628C;
    }
    L_80046264:;
    v0 = 0x80090000u;
    L_80046268:;
    t3 = v0 + (uint32)(-31892);
    L_8004626C:;
    t0 = TM3_DRAFT_U32(t3 + (uint32)(0));
    L_80046270:;
    t1 = TM3_DRAFT_U32(t3 + (uint32)(4));
    L_80046274:;
    t2 = TM3_DRAFT_I16(t3 + (uint32)(8));
    L_80046278:;
    TM3_DRAFT_U32(listing_local_address + 32u) = (uint32)t0;
    L_8004627C:;
    TM3_DRAFT_U32(listing_local_address + 36u) = (uint32)t1;
    L_80046280:;
    TM3_DRAFT_U16(listing_local_address + 40u) = (uint16)t2;
    L_80046284:;
    arg0 = s5 + 0u;
    goto L_8004629C;
    L_8004628C:;
    arg1 = 0x80090000u;
    L_80046290:;
    arg1 = arg1 + (uint32)(-31880);
    v0 = sub_800496E0(arg0, arg1, arg2);
    L_80046298:;
    arg0 = s5 + 0u;
    L_8004629C:;
    s0 = 0x80080000u;
    L_800462A0:;
    s0 = s0 + (uint32)(-3812);
    L_800462A4:;
    arg1 = s0 + 0u;
    L_800462A8:;
    s1 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 96, sizeof(local_bytes) - 96u) /* TODO: Local buffer adapter */;
    L_800462AC:;
    arg2 = s1 + 0u;
    L_800462B0:;
    arg3 = 0u + (uint32)(1);
    L_800462B4:;
    v0 = 0u + (uint32)(16);
    L_800462B8:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_800462BC:;
    L_800462C0:;
    TM3_DRAFT_U32(listing_local_address + 24u) = (uint32)0u;
    v0 = tm3_draft_indirect(0x80045a20u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_800462C8:;
    arg0 = s5 + 0u;
    L_800462CC:;
    arg1 = s0 + 0u;
    L_800462D0:;
    arg2 = s1 + 0u;
    L_800462D4:;
    v0 = 0x80090000u;
    L_800462D8:;
    arg3 = 0u + (uint32)(1);
    L_800462DC:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(-26520));
    L_800462E0:;
    s2 = 0u + (uint32)(4);
    L_800462E4:;
    TM3_DRAFT_U32(listing_local_address + 32u) = (uint32)v0;
    L_800462E8:;
    v0 = 0u + (uint32)(200);
    L_800462EC:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_800462F0:;
    L_800462F4:;
    v0 = tm3_draft_indirect(0x80045a20u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_800462FC:;
    arg0 = s5 + 0u;
    L_80046300:;
    arg1 = s0 + 0u;
    L_80046304:;
    arg2 = s1 + 0u;
    L_80046308:;
    arg3 = 0u + (uint32)(1);
    L_8004630C:;
    v0 = 0x80090000u;
    L_80046310:;
    t3 = v0 + (uint32)(-26516);
    L_80046314:;
    t0 = TM3_DRAFT_U32(t3 + (uint32)(0));
    L_80046318:;
    t1 = TM3_DRAFT_I8(t3 + (uint32)(4));
    L_8004631C:;
    TM3_DRAFT_U32(listing_local_address + 32u) = (uint32)t0;
    L_80046320:;
    TM3_DRAFT_U8(listing_local_address + 36u) = (uint8)t1;
    L_80046324:;
    v0 = 0u + (uint32)(280);
    L_80046328:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_8004632C:;
    L_80046330:;
    v0 = tm3_draft_indirect(0x80045a20u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_80046338:;
    s3 = v0 + 0u;
    L_8004633C:;
    v0 = 0x80080000u;
    L_80046340:;
    fp = v0 + (uint32)(-4092);
    L_80046344:;
    v0 = 0x800d0000u;
    L_80046348:;
    arg0 = v0 + (uint32)(11912);
    L_8004634C:;
    v1 = TM3_DRAFT_U32(arg0 + (uint32)(240));
    L_80046350:;
    v0 = 0u + (uint32)(3);
    L_80046354:;
    {
        uint32 branch = v1 == v0;
        v0 = 0u + (uint32)(1);
        if (branch) goto L_8004636C;
    }
    L_8004635C:;
    v1 = TM3_DRAFT_U32(arg0 + (uint32)(8));
    L_80046360:;
    L_80046364:;
    {
        uint32 branch = v1 != v0;
        s1 = 0u + 0u;
        if (branch) goto L_80046378;
    }
    L_8004636C:;
    t0 = 0u + (uint32)(-1);
    L_80046370:;
    TM3_DRAFT_U32(listing_local_address + 144u) = (uint32)t0;
    goto L_800463B0;
    L_80046378:;
    {
        uint32 branch = (sint32)v1 <= 0;
        arg2 = 0u + (uint32)(-1);
        if (branch) goto L_800463B0;
    }
    L_80046380:;
    arg1 = v1 + 0u;
    L_80046384:;
    v1 = arg0 + 0u;
    L_80046388:;
    v0 = TM3_DRAFT_U32(v1 + (uint32)(392));
    L_8004638C:;
    L_80046390:;
    v0 = (sint32)arg2 < (sint32)v0;
    L_80046394:;
    {
        uint32 branch = v0 == 0u;
        if (branch) goto L_800463A0;
    }
    L_8004639C:;
    L_800463A0:;
    s1 = s1 + (uint32)(1);
    L_800463A4:;
    v0 = (sint32)s1 < (sint32)arg1;
    L_800463A8:;
    {
        uint32 branch = v0 != 0u;
        v1 = v1 + (uint32)(144);
        if (branch) goto L_80046388;
    }
    L_800463B0:;
    v0 = 0x800d0000u;
    L_800463B4:;
    v1 = v0 + (uint32)(11912);
    L_800463B8:;
    v0 = TM3_DRAFT_U32(v1 + (uint32)(8));
    L_800463BC:;
    L_800463C0:;
    {
        uint32 branch = (sint32)v0 <= 0;
        s1 = 0u + 0u;
        if (branch) goto L_800464F8;
    }
    L_800463C8:;
    s4 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 96, sizeof(local_bytes) - 96u) /* TODO: Local buffer adapter */;
    L_800463CC:;
    v0 = 0x80090000u;
    L_800463D0:;
    s7 = v0 + (uint32)(-26508);
    L_800463D4:;
    s6 = v1 + 0u;
    L_800463D8:;
    s2 = s6 + 0u;
    L_800463DC:;
    v1 = TM3_DRAFT_U32(s6 + (uint32)(8));
    L_800463E0:;
    v0 = 0u + (uint32)(1);
    L_800463E4:;
    {
        uint32 branch = v1 != v0;
        arg0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 32, sizeof(local_bytes) - 32u) /* TODO: Local buffer adapter */;
        if (branch) goto L_800463FC;
    }
    L_800463EC:;
    v0 = 0x80090000u;
    L_800463F0:;
    v0 = TM3_DRAFT_U32(v0 + (uint32)(-26532));
    L_800463F4:;
    TM3_DRAFT_U32(listing_local_address + 32u) = (uint32)v0;
    goto L_8004640C;
    L_800463FC:;
    arg1 = 0x80090000u;
    L_80046400:;
    arg1 = arg1 + (uint32)(-31904);
    L_80046404:;
    arg2 = s1 + (uint32)(1);
    v0 = sub_800496E0(arg0, arg1, arg2);
    L_8004640C:;
    t1 = TM3_DRAFT_U32(listing_local_address + 144u);
    L_80046410:;
    L_80046414:;
    {
        uint32 branch = s1 != t1;
        s0 = 0u + 0u;
        if (branch) goto L_8004644C;
    }
    L_8004641C:;
    s0 = 0u + (uint32)(2);
    v0 = sub_80039FC8();
    L_80046424:;
    v0 = v0 & 4095u;
    L_80046428:;
    arg0 = v0 << 8u;
    v0 = sub_8005AF24(arg0); /* TODO: Missing BIOS or SDK adapter */
    L_80046430:;
    v1 = v0 >> 31u;
    L_80046434:;
    v1 = v1 + v0;
    L_80046438:;
    v1 = (uint32)((sint32)v1 >> 1u);
    L_8004643C:;
    v1 = v1 + (uint32)(4096);
    L_80046440:;
    TM3_DRAFT_U32(0x80089698u + (uint32)(1928)) = (uint32)v1;
    L_80046444:;
    arg0 = s5 + 0u;
    goto L_80046450;
    L_8004644C:;
    arg0 = s5 + 0u;
    L_80046450:;
    arg1 = fp + 0u;
    L_80046454:;
    arg2 = s4 + 0u;
    L_80046458:;
    arg3 = 0u + (uint32)(1);
    L_8004645C:;
    v0 = 0u + (uint32)(16);
    L_80046460:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_80046464:;
    L_80046468:;
    v0 = tm3_draft_indirect(0x80045a20u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_80046470:;
    arg0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 32, sizeof(local_bytes) - 32u) /* TODO: Local buffer adapter */;
    L_80046474:;
    arg1 = s7 + 0u;
    L_80046478:;
    arg2 = TM3_DRAFT_U32(s2 + (uint32)(392));
    L_8004647C:;
    s1 = s1 + (uint32)(1);
    v0 = sub_800496E0(arg0, arg1, arg2);
    L_80046484:;
    arg0 = s5 + 0u;
    L_80046488:;
    arg1 = fp + 0u;
    L_8004648C:;
    arg2 = s4 + 0u;
    L_80046490:;
    arg3 = 0u + (uint32)(1);
    L_80046494:;
    v0 = 0u + (uint32)(200);
    L_80046498:;
    s0 = s0 | 4u;
    L_8004649C:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_800464A0:;
    L_800464A4:;
    v0 = tm3_draft_indirect(0x80045a20u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_800464AC:;
    arg0 = TM3_DRAFT_LOCAL_ADDRESS(local_bytes + 32, sizeof(local_bytes) - 32u) /* TODO: Local buffer adapter */;
    L_800464B0:;
    arg1 = s7 + 0u;
    L_800464B4:;
    arg2 = TM3_DRAFT_U32(s2 + (uint32)(396));
    L_800464B8:;
    s2 = s2 + (uint32)(144);
    v0 = sub_800496E0(arg0, arg1, arg2);
    L_800464C0:;
    arg0 = s5 + 0u;
    L_800464C4:;
    arg1 = fp + 0u;
    L_800464C8:;
    arg2 = s4 + 0u;
    L_800464CC:;
    arg3 = 0u + (uint32)(1);
    L_800464D0:;
    v0 = 0u + (uint32)(280);
    L_800464D4:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_800464D8:;
    L_800464DC:;
    v0 = tm3_draft_indirect(0x80045a20u, 4u, arg0, arg1, arg2, arg3); /* TODO: Missing BIOS or SDK adapter */
    L_800464E4:;
    v1 = TM3_DRAFT_U32(s6 + (uint32)(8));
    L_800464E8:;
    L_800464EC:;
    v1 = (sint32)s1 < (sint32)v1;
    L_800464F0:;
    {
        uint32 branch = v1 != 0u;
        s3 = v0 + 0u;
        if (branch) goto L_800463DC;
    }
    L_800464F8:;
    v0 = 0x800d0000u;
    L_800464FC:;
    s0 = v0 + (uint32)(11912);
    L_80046500:;
    v0 = TM3_DRAFT_U32(s0 + (uint32)(244));
    L_80046504:;
    L_80046508:;
    {
        uint32 branch = v0 == 0u;
        arg2 = 0x00ff0000u;
        if (branch) goto L_8004656C;
    }
    L_80046510:;
    v0 = sub_80039FC8();
    L_80046518:;
    v1 = 0x88880000u;
    L_8004651C:;
    v1 = v1 | 34953u;
    L_80046520:;
    {
        uint64 product = (uint64)v0 * v1;
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_80046524:;
    t0 = hi;
    L_80046528:;
    v0 = t0 >> 3u;
    L_8004652C:;
    v0 = v0 & 1u;
    L_80046530:;
    {
        uint32 branch = v0 != 0u;
        arg2 = 0x00ff0000u;
        if (branch) goto L_8004656C;
    }
    L_80046538:;
    v1 = TM3_DRAFT_U32(s0 + (uint32)(240));
    L_8004653C:;
    v0 = 0u + (uint32)(3);
    L_80046540:;
    {
        uint32 branch = v1 != v0;
        arg0 = s5 + 0u;
        if (branch) goto L_80046558;
    }
    L_80046548:;
    arg1 = 0x80090000u;
    L_8004654C:;
    arg1 = arg1 + (uint32)(-26212);
    L_80046550:;
    goto L_80046560;
    L_80046558:;
    arg1 = 0x80090000u;
    L_8004655C:;
    arg1 = arg1 + (uint32)(-26200);
    L_80046560:;
    v0 = sub_8004D344(arg0, arg1);
    L_80046568:;
    arg2 = 0x00ff0000u;
    L_8004656C:;
    arg2 = arg2 | 65535u;
    L_80046570:;
    arg0 = 0x00020000u;
    L_80046574:;
    arg1 = arg0 + 0u;
    L_80046578:;
    arg1 = s5 + arg1;
    L_8004657C:;
    arg3 = 0xff000000u;
    L_80046580:;
    arg0 = arg0 | 3024u;
    L_80046584:;
    arg0 = s5 + arg0;
    L_80046588:;
    v1 = TM3_DRAFT_U32(arg1 + (uint32)(3024));
    L_8004658C:;
    v0 = TM3_DRAFT_U32(s5 + (uint32)(88));
    L_80046590:;
    v1 = v1 & arg3;
    L_80046594:;
    v0 = v0 & arg2;
    L_80046598:;
    v1 = v1 | v0;
    L_8004659C:;
    TM3_DRAFT_U32(arg1 + (uint32)(3024)) = (uint32)v1;
    L_800465A0:;
    v0 = TM3_DRAFT_U32(s5 + (uint32)(88));
    L_800465A4:;
    arg0 = arg0 & arg2;
    L_800465A8:;
    v0 = v0 & arg3;
    L_800465AC:;
    v0 = v0 | arg0;
    L_800465B0:;
    arg0 = 0x00020000u;
    L_800465B4:;
    TM3_DRAFT_U32(s5 + (uint32)(88)) = (uint32)v0;
    L_800465B8:;
    v0 = v0 & arg2;
    L_800465BC:;
    arg0 = arg0 | 3040u;
    L_800465C0:;
    v1 = TM3_DRAFT_U32(arg1 + (uint32)(3040));
    L_800465C4:;
    arg0 = s5 + arg0;
    L_800465C8:;
    v1 = v1 & arg3;
    L_800465CC:;
    v1 = v1 | v0;
    L_800465D0:;
    TM3_DRAFT_U32(arg1 + (uint32)(3040)) = (uint32)v1;
    L_800465D4:;
    v0 = TM3_DRAFT_U32(s5 + (uint32)(88));
    L_800465D8:;
    arg0 = arg0 & arg2;
    L_800465DC:;
    v0 = v0 & arg3;
    L_800465E0:;
    v0 = v0 | arg0;
    L_800465E4:;
    arg0 = 0x00020000u;
    L_800465E8:;
    TM3_DRAFT_U32(s5 + (uint32)(88)) = (uint32)v0;
    L_800465EC:;
    v0 = v0 & arg2;
    L_800465F0:;
    arg0 = arg0 | 3056u;
    L_800465F4:;
    v1 = TM3_DRAFT_U32(arg1 + (uint32)(3056));
    L_800465F8:;
    arg0 = s5 + arg0;
    L_800465FC:;
    v1 = v1 & arg3;
    L_80046600:;
    v1 = v1 | v0;
    L_80046604:;
    TM3_DRAFT_U32(arg1 + (uint32)(3056)) = (uint32)v1;
    L_80046608:;
    v0 = TM3_DRAFT_U32(s5 + (uint32)(88));
    L_8004660C:;
    arg0 = arg0 & arg2;
    L_80046610:;
    v0 = v0 & arg3;
    L_80046614:;
    v0 = v0 | arg0;
    L_80046618:;
    TM3_DRAFT_U32(s5 + (uint32)(88)) = (uint32)v0;
    L_8004661C:;
    L_80046620:;
    L_80046624:;
    L_80046628:;
    L_8004662C:;
    L_80046630:;
    L_80046634:;
    L_80046638:;
    L_8004663C:;
    L_80046640:;
    L_80046644:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80051D04(void)
{
    uint32 original_local_words[10];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80051D04u, "SCUS_942.49");
  int v0; 
  int v1; 
  uint32 v2; 
  int v3; 
  uint32 v4; 
  uint32 v5; 
  int v6; 
  uint32 v7; 
  int v8; 
  sint16 v9; 
  sint16 v10; 
  int v11; 
  uint32 v12; 
  uint32 v13; 
  uint32 v14; 
  uint32 v15; 
  uint32 v16; 
  int v17; 
  uint32 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int result; 
  int v25; 
  int v26; 
  uint32 v27; 

  v0 = 0;
  TM3_DRAFT_U32(0x800D296Cu) = 0;
  TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804bcu) + 0x20u) = 0x80089AC0u;
  TM3_DRAFT_U32(0x8008007Cu) = (int)0x8007FF14u;
  sub_80051C04();
  if ( sub_800474AC() )
  {
    v2 = 4 * (sub_800474AC() == 2);
    v1 = sub_800474AC();
    if ( sub_80047630((uint32)0x800D295C, v2, (uint32)0x800D295C, 4 * (v1 != 2)) != 1 )
      goto LABEL_15;
    if ( sub_80047630((uint32)0x800D28B8, 4u, (uint32)0x800D28BC, 4u) != 1 )
      goto LABEL_15;
    v4 = 4 * (sub_800474AC() == 2);
    v3 = sub_800474AC();
    if ( sub_80047630((uint32)0x800D2940, v4, (uint32)0x800D2940, 4 * (v3 != 2)) != 1 )
      goto LABEL_15;
    v5 = 0;
    if ( sub_800474AC() == 2 )
      v5 = 24;
    v6 = sub_800474AC();
    v7 = 0;
    if ( v6 != 2 )
      v7 = 24;
    if ( sub_80047630((uint32)(24 * TM3_DRAFT_U32(0x80089BE8u + 4u * (1)) - 2146624256), v5, original_local_address + 16u, v7) == 1 )
    {
      sub_80051C04();
      if ( sub_800474AC() == 1 )
      {
        TM3_DRAFT_U32(0x8008007Cu) = 0;
        if ( (TM3_DRAFT_I16(original_local_address + 26u) & 0x40) != 0 )
        {
          TM3_DRAFT_U16(24 * TM3_DRAFT_U32(0x80089BE8u + 4u * (1)) - 2146624256 + 10) |= 0x40u;
        }
        else if ( ((*(char (*)[10])psx_addr(original_local_address + 16u, 24u))[8] & 0x10) != 0 )
        {
          v8 = 24 * TM3_DRAFT_U32(0x80089BE8u + 4u * (1)) - 2146624256;
          v9 = TM3_DRAFT_U16(v8);
          v10 = TM3_DRAFT_U16(v8 + 8);
          TM3_DRAFT_U32(v8 + 16) = 0;
          TM3_DRAFT_U16(v8) = v9 | 0x10;
          TM3_DRAFT_U16(v8 + 8) = v10 | 0x10;
          TM3_DRAFT_U32(0x8008007Cu) = (int)0x8007FF14u;
        }
      }
    }
    else
    {
LABEL_15:
      v0 = 1;
    }
  }
  v11 = 0;
  if ( TM3_DRAFT_U8(0x80080084u) )
  {
    v12 = 0x80080070u;
    do
    {
      if ( sub_800474AC() == 1 && !v0 )
      {
        v14 = (uint32)TM3_DRAFT_U32(v12 + 4u * (8));
        if ( v14 == 0x80089AC0u )
        {
          TM3_DRAFT_U32(v12 + 4u * (8)) = (uint32)0x80089A98u;
          v14 = (uint32)TM3_DRAFT_U32(v12 + 4u * (8));
        }
        if ( v14 == 0x80089A98u )
        {
          if ( (TM3_DRAFT_I16(original_local_address + 26u) & 0x40) != 0 )
            TM3_DRAFT_U32(v12 + 4u * (7)) = TM3_DRAFT_U32(0x800804BCu + 4u * (0));
          else
            TM3_DRAFT_U32(v12 + 4u * (7)) = 0;
        }
      }
      else
      {
        v13 = (uint32)TM3_DRAFT_U32(v12 + 4u * (8));
        if ( v13 == 0x80089A98u )
        {
          TM3_DRAFT_U32(v12 + 4u * (8)) = (uint32)0x80089AC0u;
          v13 = (uint32)TM3_DRAFT_U32(v12 + 4u * (8));
        }
        if ( v13 == 0x80089AC0u )
          TM3_DRAFT_U32(v12 + 4u * (7)) = (uint32)TM3_DRAFT_U32(0x80089BB4u + 4u * (TM3_DRAFT_U32(0x800D295Cu)));
      }
      ++v11;
      v12 += 4u * (7);
    }
    while ( v11 < (uint8)TM3_DRAFT_U8(0x80080084u) );
  }
  if ( sub_800474AC() == 1 )
  {
    v15 = TM3_DRAFT_U32(0x800804BCu + 4u * (0));
  }
  else
  {
    TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804bcu) + 0x0cu) = TM3_DRAFT_U32(0x80089BB4u + 4u * (TM3_DRAFT_U32(0x800D295Cu)));
    if ( !sub_800474AC() )
    {
      v15 = (uint32)TM3_DRAFT_U32(0x80089BB4u + 4u * (TM3_DRAFT_U32(0x800D295Cu)));
      v16 = (uint32)0x80080070u;
      goto LABEL_37;
    }
    v15 = (uint32)TM3_DRAFT_U32(0x80089BB4u + 4u * (TM3_DRAFT_U32(0x800D295Cu)));
  }
  v16 = 0x8007FF14u;
LABEL_37:
  TM3_DRAFT_U32(v15 + 12) = v16;
  v17 = 0;
  if ( (sint32)(TM3_DRAFT_U32(0x800D28B8u) - 1u) > 0 )
  {
    v18 = 0x800804BCu;
    v19 = 1;
    do
    {
      v20 = 0;
      if ( TM3_DRAFT_U8(TM3_DRAFT_U32(v18) + 20u) )
      {
        v21 = 0;
        do
        {
          if ( sub_8004C6C0(TM3_DRAFT_U32(TM3_DRAFT_U32(v18) + v21 + 28)) || (v22 = v17, TM3_DRAFT_U32(TM3_DRAFT_U32(v18) + v21 + 28) == -2146617632) )
          {
            TM3_DRAFT_U32(TM3_DRAFT_U32(v18) + v21 + 28) = TM3_DRAFT_U32(0x800804BCu + 4u * (v19));
            v22 = v17;
          }
          ++v20;
          v21 += 28;
        }
        while ( v20 < (uint8)TM3_DRAFT_U8(TM3_DRAFT_U32(0x800804BCu + 4u * (v22)) + 20) );
      }
      if ( v17 > 0 )
        TM3_DRAFT_U32(TM3_DRAFT_U32(v18) + 12) = TM3_DRAFT_U32(0x800804BCu + 4u * (v17 - 1));
      v18 += 4u;
      ++v17;
      ++v19;
    }
    while ( v17 < (sint32)(TM3_DRAFT_U32(0x800D28B8u) - 1u) );
  }
  v23 = v17;
  result = (uint8)TM3_DRAFT_U8(TM3_DRAFT_U32(0x800804BCu + 4u * (v17)) + 20);
  v25 = 0;
  if ( TM3_DRAFT_U8(TM3_DRAFT_U32(0x800804BCu + 4u * (v17)) + 20) )
  {
    v26 = 0;
    do
    {
      v27 = (0x800804BCu + 4u * (v23));
      if ( sub_8004C6C0(TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804BCu + 4u * (v23)) + v26 + 28))
        || (v23 = v17, TM3_DRAFT_U32(TM3_DRAFT_U32(v27) + v26 + 28) == -2146617632) )
      {
        TM3_DRAFT_U32(TM3_DRAFT_U32(v27) + v26 + 28) = -2146617632;
        v23 = v17;
      }
      result = ++v25 < (uint8)TM3_DRAFT_U8(TM3_DRAFT_U32(0x800804BCu + 4u * (v23)) + 20);
      v26 += 28;
    }
    while ( v25 < (uint8)TM3_DRAFT_U8(TM3_DRAFT_U32(0x800804BCu + 4u * (v23)) + 20) );
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80012EB4(uint32 resource)
{
    uint32 local_directions[2];
    uint32 directions = TM3_DRAFT_LOCAL_ADDRESS(local_directions, sizeof(local_directions));
    uint32 records, cursor, index, count, value, slot;
    uint32 sector, block, polygons, vertices;
    uint32 x, z, direction, neighbor_x, neighbor_z;

    FUNCTION_MARKER(0x80012EB4u, "SCUS_942.49");
    TM3_DRAFT_U32(0x80089C98u) = resource;
    records = resource + 10300u + 56u * TM3_DRAFT_U16(resource + 10256u);
    for (index = 0; index < 192u; index += 16u) {
        uint32 words[4];
        for (slot = 0; slot < 4u; ++slot)
            words[slot] = TM3_DRAFT_U32(records + index + 4u * slot);
        for (slot = 0; slot < 4u; ++slot)
            TM3_DRAFT_U32(0x1F800340u + index + 4u * slot) = words[slot];
    }
    cursor = records + 24u * TM3_DRAFT_U16(resource + 10268u);
    TM3_DRAFT_U32(0x80089CB4u) = cursor;
    count = TM3_DRAFT_U32(resource + 10272u);
    index = 0;
    if (count != 0u) do {
        uint32 kind = TM3_DRAFT_U8(cursor);
        if (kind == 11u) {
            slot = cursor + 52u;
            value = TM3_DRAFT_U32(slot);
            TM3_DRAFT_U32(slot) = (value & 0x1F800000u) == 0x1F800000u
                ? records + 24u * ((value + 0xE07FFCC0u) / 24u) : value + resource;
        } else if (kind == 23u) {
            uint32 component = 0;
            uint32 part = cursor;
            if (TM3_DRAFT_U8(cursor + 27u) != 0u) do {
                slot = part + 76u;
                value = TM3_DRAFT_U32(slot);
                TM3_DRAFT_U32(slot) = (value & 0x1F800000u) == 0x1F800000u
                    ? records + 24u * ((value + 0xE07FFCC0u) / 24u) : value + resource;
                ++component;
                part += 52u;
            } while ((sint32)component < (sint32)TM3_DRAFT_U8(cursor + 27u));
        }
        ++index;
        value = TM3_DRAFT_U16(cursor + 10u);
        count = TM3_DRAFT_U32(resource + 10272u);
        cursor += value;
    } while (index < count);

    block = TM3_DRAFT_U32(0x80089CB4u) + TM3_DRAFT_U32(resource + 10276u);
    sector = block + 4u * TM3_DRAFT_U32(resource + 10284u);
    TM3_DRAFT_U32(0x80089C90u) = block;
    block = sector + 316u * TM3_DRAFT_U32(resource + 10280u);
    TM3_DRAFT_U32(0x80089EE8u) = block;
    count = TM3_DRAFT_U16(resource + 10264u);
    TM3_DRAFT_U32(0x80089EECu) = count;
    block += 2u * count;
    TM3_DRAFT_U32(0x80089EE0u) = block;
    count = TM3_DRAFT_U16(resource + 10266u);
    TM3_DRAFT_U32(0x80089CA4u) = sector;
    TM3_DRAFT_U32(0x80089EE4u) = count;
    block += 76u * count;
    TM3_DRAFT_U32(0x80089DA4u) = block;
    block += TM3_DRAFT_U16(resource + 10290u);
    TM3_DRAFT_U32(0x80089DA8u) = block;
    block += TM3_DRAFT_U32(resource + 10292u);
    TM3_DRAFT_U32(0x80089C94u) = block;
    polygons = block + 32u * TM3_DRAFT_U16(resource + 10270u);
    TM3_DRAFT_U32(0x80089CC0u) = polygons;
    cursor = polygons + 20u;
    index = 0;
    if (TM3_DRAFT_U16(resource + 10258u) != 0u) do {
        uint32 kind = TM3_DRAFT_U8(cursor - 17u);
        uint32 stride = 0;
        if (kind == 36u || kind == 44u) {
            slot = cursor - 8u;
            stride = 16u;
        } else if (kind == 52u || kind == 60u) {
            slot = cursor;
            stride = 24u;
        }
        if (stride != 0u) {
            value = TM3_DRAFT_U32(slot);
            TM3_DRAFT_U32(slot) = (value & 0x1F800000u) == 0x1F800000u
                ? records + 24u * ((value + 0xE07FFCC0u) / 24u) : value + resource;
            cursor += stride;
            polygons += stride;
        }
        ++index;
    } while ((sint32)index < (sint32)TM3_DRAFT_U16(resource + 10258u));
    TM3_DRAFT_U32(0x80089CB0u) = polygons;
    vertices = polygons + 8u * TM3_DRAFT_U32(resource + 10260u);
    TM3_DRAFT_U32(0x80089CA8u) = vertices;
    index = 0;
    cursor = vertices + 48u;
    if (TM3_DRAFT_U32(resource + 10296u) != 0u) do {
        value = TM3_DRAFT_U32(cursor);
        TM3_DRAFT_U32(cursor) = (value & 0x1F800000u) == 0x1F800000u
            ? records + 24u * ((value + 0xE07FFCC0u) / 24u) : value + resource;
        ++index;
        count = TM3_DRAFT_U32(resource + 10296u);
        cursor += 52u;
    } while (index < count);

    for (z = 0; z < 64u; ++z) for (x = 0; x < 64u; ++x) {
        local_directions[0] = TM3_DRAFT_U32(0x80089698u);
        local_directions[1] = TM3_DRAFT_U32(0x8008969Cu);
        value = TM3_DRAFT_U16(resource + 2u * x + (z << 7));
        if (value == 0xFFFFu) continue;
        sector = resource + 10300u + 56u * value;
        for (direction = 0; direction < 4u; ++direction) {
            neighbor_z = z + (uint32)(sint32)TM3_DRAFT_I8(directions + 2u * direction + 1u);
            neighbor_x = x + (uint32)(sint32)TM3_DRAFT_I8(directions + 2u * direction);
            value = 0;
            if (neighbor_x < 64u && (sint32)neighbor_z >= 0 && (sint32)neighbor_z < 64) {
                value = TM3_DRAFT_U16(resource + 2u * neighbor_x + (neighbor_z << 7));
                value = value == 0xFFFFu ? 0u : resource + 10300u + 56u * value;
            }
            TM3_DRAFT_U32(sector + 24u + 4u * direction) = value;
        }
    }
    return 0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001E430(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8001E430u, "SCUS_942.49");
  uint32 v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  sint16 v19; 
  sint16 v20; 
  sint16 v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int result; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 

  if ( TM3_DRAFT_U32(0x800896D4u + 4u * (2)) )
  {
    TM3_DRAFT_U32(0x80089CE0u) = 1888;
    TM3_DRAFT_U32(0x80089CE4u) = 0x10000;
    TM3_DRAFT_U32(0x80089CD8u) = 256;
    TM3_DRAFT_U32(0x80089CDCu) = 1638;
    TM3_DRAFT_U32(0x8008A370u) = 31744;
    TM3_DRAFT_U32(0x8008A374u) = 31744;
    TM3_DRAFT_U32(0x8008A378u) = 12288;
    TM3_DRAFT_U32(0x8008A37Cu) = 12288;
    TM3_DRAFT_U32(0x8008A380u) = 12288;
    TM3_DRAFT_U32(0x8008A384u) = 12288;
    TM3_DRAFT_U32(0x8008A388u) = 6144;
    TM3_DRAFT_U32(0x8008A38Cu) = 0;
    TM3_DRAFT_U32(0x8008A390u) = 12288;
    TM3_DRAFT_U32(0x8008A398u) = 0x2000;
    TM3_DRAFT_U32(0x8008A39Cu) = 0x2000;
    TM3_DRAFT_U32(0x8008A3A0u) = 6144;
    TM3_DRAFT_U32(0x8008A3A4u) = 6144;
    TM3_DRAFT_U32(0x8008A3A8u) = 6144;
    TM3_DRAFT_U32(0x8008A3ACu) = 6144;
    TM3_DRAFT_U32(0x8008A3B0u) = 2048;
    TM3_DRAFT_U32(0x8008A3B4u) = 0;
    TM3_DRAFT_U32(0x8008A3B8u) = 6144;
    TM3_DRAFT_U32(0x8008A2D0u) = 30720;
    TM3_DRAFT_U32(0x8008A2D4u) = 30720;
    TM3_DRAFT_U32(0x8008A2D8u) = 12288;
    TM3_DRAFT_U32(0x8008A2DCu) = 12288;
    TM3_DRAFT_U32(0x8008A2E0u) = 12288;
    TM3_DRAFT_U32(0x8008A2E4u) = 12288;
    TM3_DRAFT_U32(0x8008A2E8u) = 6144;
    TM3_DRAFT_U32(0x8008A2ECu) = 0;
    TM3_DRAFT_U32(0x8008A2F0u) = 12288;
    TM3_DRAFT_U32(0x8008A320u) = 0x2000;
    TM3_DRAFT_U32(0x800896D4u + 4u * (2)) = 0;
    TM3_DRAFT_U32(0x8008A324u) = 0x2000;
    TM3_DRAFT_U32(0x8008A328u) = 6144;
    TM3_DRAFT_U32(0x8008A32Cu) = 6144;
    TM3_DRAFT_U32(0x8008A330u) = 6144;
    TM3_DRAFT_U32(0x8008A334u) = 6144;
    TM3_DRAFT_U32(0x8008A338u) = 2048;
    TM3_DRAFT_U32(0x8008A33Cu) = 0;
    TM3_DRAFT_U32(0x8008A340u) = 6144;
    TM3_DRAFT_U32(0x8008A2F8u) = 3072;
    TM3_DRAFT_U32(0x8008A2FCu) = 3072;
    TM3_DRAFT_U32(0x8008A300u) = 3072;
    TM3_DRAFT_U32(0x8008A304u) = 3072;
    TM3_DRAFT_U32(0x8008A308u) = 3072;
    TM3_DRAFT_U32(0x8008A30Cu) = 3072;
    TM3_DRAFT_U32(0x8008A310u) = 3072;
    TM3_DRAFT_U32(0x8008A314u) = 0;
    TM3_DRAFT_U32(0x8008A318u) = 3072;
    TM3_DRAFT_U32(0x8008A348u) = 1536;
    TM3_DRAFT_U32(0x8008A34Cu) = 1536;
    TM3_DRAFT_U32(0x8008A350u) = 1536;
    TM3_DRAFT_U32(0x8008A354u) = 1536;
    TM3_DRAFT_U32(0x8008A358u) = 1536;
    TM3_DRAFT_U32(0x8008A35Cu) = 1536;
    TM3_DRAFT_U32(0x8008A360u) = 1536;
    TM3_DRAFT_U32(0x8008A364u) = 0;
    TM3_DRAFT_U32(0x8008A368u) = 1536;
    TM3_DRAFT_U32(0x8008A3C0u) = 0;
    TM3_DRAFT_U32(0x8008A3C4u) = 0;
    TM3_DRAFT_U32(0x8008A3C8u) = 0;
    TM3_DRAFT_U32(0x8008A3CCu) = 48;
    TM3_DRAFT_U32(0x8008A3D0u) = 48;
    TM3_DRAFT_U32(0x8008A3D4u) = 0;
    TM3_DRAFT_U32(0x8008A3D8u) = 0;
    TM3_DRAFT_U32(0x8008A3DCu) = 0;
    TM3_DRAFT_U32(0x8008A3E0u) = 0;
  }
  if ( sub_80048078(22) )
  {
    v6 = 0;
    v7 = -2146917440;
    v8 = -2146917560;
    v9 = -2146917640;
    v10 = -2146917600;
    v11 = -2146917680;
    v12 = -2146917480;
    v13 = -2146917520;
    do
    {
      ++v6;
      TM3_DRAFT_U32(v13) = TM3_DRAFT_U32(0x8008A388u);
      v13 += 4;
      TM3_DRAFT_U32(v12) = TM3_DRAFT_U32(0x8008A3B0u);
      v12 += 4;
      TM3_DRAFT_U32(v11) = TM3_DRAFT_U32(0x8008A2E8u);
      v11 += 4;
      TM3_DRAFT_U32(v10) = TM3_DRAFT_U32(0x8008A338u);
      v10 += 4;
      TM3_DRAFT_U32(v9) = TM3_DRAFT_U32(0x8008A310u);
      v9 += 4;
      TM3_DRAFT_U32(v8) = TM3_DRAFT_U32(0x8008A360u);
      v8 += 4;
      TM3_DRAFT_U32(v7) = TM3_DRAFT_U32(0x8008A3D8u);
      v7 += 4;
    }
    while ( v6 < 9 );
  }
  v14 = TM3_DRAFT_U32(a1 + 4040);
  TM3_DRAFT_U32(a1 + 1592) = TM3_DRAFT_U16(v14 + 6);
  TM3_DRAFT_U32(a1 + 1704) = TM3_DRAFT_U16(v14 + 6);
  TM3_DRAFT_U32(a1 + 1816) = TM3_DRAFT_U16(v14 + 6);
  TM3_DRAFT_U32(a1 + 1928) = TM3_DRAFT_U16(v14 + 6);
  TM3_DRAFT_U32(a1 + 2376) = TM3_DRAFT_U16(v14 + 4);
  TM3_DRAFT_U32(a1 + 2264) = TM3_DRAFT_U16(v14 + 4);
  TM3_DRAFT_U32(a1 + 2152) = TM3_DRAFT_U16(v14 + 4);
  TM3_DRAFT_U32(a1 + 2040) = TM3_DRAFT_U16(v14 + 4);
  if ( a2 )
  {
    TM3_DRAFT_U32(a1 + 1556) = TM3_DRAFT_I16(a2);
    TM3_DRAFT_U32(a1 + 1560) = TM3_DRAFT_I16(a2 + 2u * (1));
    v15 = TM3_DRAFT_U32(a1 + 1560);
    TM3_DRAFT_U32(a1 + 1564) = TM3_DRAFT_I16(a2 + 2u * (2));
    v16 = TM3_DRAFT_U32(a1 + 1556);
    v17 = TM3_DRAFT_U32(a1 + 1564);
    TM3_DRAFT_U32(a1 + 1572) = v15;
    TM3_DRAFT_U32(a1 + 1568) = v16;
    TM3_DRAFT_U32(a1 + 1576) = v17;
  }
  v18 = 0;
  if ( a3 )
  {
    v19 = TM3_DRAFT_U16(a3 + 2u * (2));
    TM3_DRAFT_U16(a1 + 1542) = 0;
    TM3_DRAFT_U16(a1 + 1536) = v19;
    v20 = TM3_DRAFT_U16(a3);
    TM3_DRAFT_U16(a1 + 1538) = 0;
    TM3_DRAFT_U16(a1 + 1544) = 4096;
    TM3_DRAFT_U16(a1 + 1550) = 0;
    TM3_DRAFT_U16(a1 + 1548) = -v20;
    v21 = TM3_DRAFT_U16(a3);
    TM3_DRAFT_U16(a1 + 1546) = 0;
    TM3_DRAFT_U16(a1 + 1540) = v21;
    TM3_DRAFT_U16(a1 + 1552) = TM3_DRAFT_U16(a3 + 2u * (2));
  }
  v22 = 1592;
  v23 = a1;
  do
  {
    TM3_DRAFT_U32(v23 + 68) = a1 + v22;
    if ( (uint32)v18 < 2 )
      TM3_DRAFT_U8(v23 + 144) = 1;
    v22 += 112;
    ++v18;
    v23 += 80;
  }
  while ( v18 < 4 );
  v24 = TM3_DRAFT_U32(a1 + 4040);
  v25 = v24;
  TM3_DRAFT_U32(a1 + 388) = a1 + 308;
  v26 = TM3_DRAFT_U32(v24 + 24);
  TM3_DRAFT_U32(a1 + 3300) = 4;
  TM3_DRAFT_U32(a1 + 3284) = v26;
  v27 = 0x40000000 / TM3_DRAFT_U32(v25 + 28);
  TM3_DRAFT_U32(a1 + 3296) = v27;
  v28 = 0x40000000 / sub_80015684(v26, v27, 18);
  v29 = TM3_DRAFT_U32(a1 + 4040);
  TM3_DRAFT_U32(a1 + 3296) = v28 / 2;
  v30 = TM3_DRAFT_I8(v29 + 3);
  if ( !TM3_DRAFT_U8(v29 + 3) )
  {
    v32 = TM3_DRAFT_U32(a1 + 3300);
    TM3_DRAFT_U8(a1 + 145) = 1;
    TM3_DRAFT_U8(a1 + 225) = 1;
    TM3_DRAFT_U8(a1 + 305) = 1;
    TM3_DRAFT_U8(a1 + 385) = 1;
    v33 = TM3_DRAFT_U32(a1 + 3296);
    TM3_DRAFT_U32(a1 + 3300) = v32 / 4;
    result = v33 / 4;
LABEL_24:
    TM3_DRAFT_U32(a1 + 3296) = result;
    return result;
  }
  result = 1;
  if ( v30 <= 0 )
  {
    result = 1;
    if ( v30 != -1 )
      return result;
    v34 = TM3_DRAFT_U32(a1 + 3300);
    TM3_DRAFT_U8(a1 + 145) = 0;
    TM3_DRAFT_U8(a1 + 225) = 0;
    TM3_DRAFT_U8(a1 + 305) = 1;
    TM3_DRAFT_U8(a1 + 385) = 1;
    goto LABEL_23;
  }
  if ( v30 == 1 )
  {
    v34 = TM3_DRAFT_U32(a1 + 3300);
    TM3_DRAFT_U8(a1 + 145) = 1;
    TM3_DRAFT_U8(a1 + 225) = 1;
    TM3_DRAFT_U8(a1 + 305) = 0;
    TM3_DRAFT_U8(a1 + 385) = 0;
LABEL_23:
    v35 = TM3_DRAFT_U32(a1 + 3296);
    TM3_DRAFT_U32(a1 + 3300) = v34 / 2;
    result = v35 / 2;
    goto LABEL_24;
  }
  return result;
}


