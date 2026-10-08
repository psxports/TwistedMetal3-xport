#include "game_draft_support.h"
#include "game_draft_signatures.h"

/* Unverified draft; TODO items require later review */
uint32 sub_8001DDD8(uint32 a1)
{
    FUNCTION_MARKER(0x8001DDD8u, "SCUS_942.49");
    uint32 v0; /* TODO: Review undefined incoming or temporary value */
    uint32 v1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg0 = a1;
    uint32 arg1; /* TODO: Review undefined incoming or temporary value */
    uint32 arg2; /* TODO: Review undefined incoming or temporary value */
    uint32 arg3; /* TODO: Review undefined incoming or temporary value */
    uint32 s0; /* TODO: Review undefined incoming or temporary value */
    uint32 s1; /* TODO: Review undefined incoming or temporary value */
    uint32 s2; /* TODO: Review undefined incoming or temporary value */
    uint32 hi, lo;
    uint8 local_bytes[128]; /* Required local storage; uninitialized original values remain TODO */
    uint32 listing_local_address = TM3_DRAFT_LOCAL_ADDRESS(local_bytes, sizeof(local_bytes));
    L_8001DDD8:;
    L_8001DDDC:;
    L_8001DDE0:;
    s1 = arg0 + 0u;
    L_8001DDE4:;
    L_8001DDE8:;
    L_8001DDEC:;
    v0 = sub_8001AE7C(arg0);
    L_8001DDF4:;
    {
        uint32 branch = v0 != 0u;
        if (branch) goto L_8001E2A4;
    }
    L_8001DDFC:;
    arg0 = s1 + 0u;
    v0 = sub_8001AE3C(arg0);
    L_8001DE04:;
    {
        uint32 branch = v0 != 0u;
        if (branch) goto L_8001E2A4;
    }
    L_8001DE0C:;
    arg0 = s1 + 0u;
    v0 = sub_8001AF24(arg0);
    L_8001DE14:;
    {
        uint32 branch = v0 != 0u;
        if (branch) goto L_8001E2A4;
    }
    L_8001DE1C:;
    arg0 = s1 + 0u;
    v0 = sub_8001B010(arg0);
    L_8001DE24:;
    {
        uint32 branch = v0 != 0u;
        if (branch) goto L_8001E2A4;
    }
    L_8001DE2C:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(3684));
    L_8001DE30:;
    L_8001DE34:;
    {
        uint32 branch = v0 == 0u;
        if (branch) goto L_8001DE9C;
    }
    L_8001DE3C:;
    v1 = TM3_DRAFT_U32(s1 + (uint32)(3688));
    L_8001DE40:;
    L_8001DE44:;
    {
        uint32 branch = v1 == 0u;
        if (branch) goto L_8001DE70;
    }
    L_8001DE4C:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(4040));
    L_8001DE50:;
    v1 = TM3_DRAFT_I16(v1 + (uint32)(4));
    L_8001DE54:;
    v0 = TM3_DRAFT_I16(v0 + (uint32)(106));
    L_8001DE58:;
    L_8001DE5C:;
    v0 = (sint32)v0 < (sint32)v1;
    L_8001DE60:;
    {
        uint32 branch = v0 == 0u;
        v0 = 0x80020000u;
        if (branch) goto L_8001DEB4;
    }
    L_8001DE68:;
    v0 = v0 + (uint32)(-10104);
    goto L_8001E2A4;
    L_8001DE70:;
    arg1 = TM3_DRAFT_I16(v0 + (uint32)(3386));
    L_8001DE74:;
    arg0 = s1 + 0u;
    v0 = sub_8001BD70(arg0, arg1);
    L_8001DE7C:;
    {
        uint32 branch = v0 != 0u;
        v0 = 0x80020000u;
        if (branch) goto L_8001DEAC;
    }
    L_8001DE84:;
    arg0 = s1 + 0u;
    v0 = sub_8001C23C(arg0);
    L_8001DE8C:;
    {
        uint32 branch = v0 != 0u;
        v0 = 0x80020000u;
        if (branch) goto L_8001DEAC;
    }
    L_8001DE94:;
    v0 = 0u + 0u;
    goto L_8001E2A4;
    L_8001DE9C:;
    arg0 = s1 + 0u;
    v0 = sub_8001C23C(arg0);
    L_8001DEA4:;
    {
        uint32 branch = v0 == 0u;
        v0 = 0x80020000u;
        if (branch) goto L_8001E2A0;
    }
    L_8001DEAC:;
    v0 = v0 + (uint32)(-13820);
    goto L_8001E2A4;
    L_8001DEB4:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(3948));
    L_8001DEB8:;
    L_8001DEBC:;
    {
        uint32 branch = v0 == 0u;
        if (branch) goto L_8001E19C;
    }
    L_8001DEC4:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(3392));
    L_8001DEC8:;
    v0 = TM3_DRAFT_I16(s1 + (uint32)(1540));
    L_8001DECC:;
    L_8001DED0:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v1 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001DED4:;
    arg0 = lo;
    L_8001DED8:;
    {
        uint32 branch = (sint32)arg0 >= 0;
        if (branch) goto L_8001DEE4;
    }
    L_8001DEE0:;
    arg0 = arg0 + (uint32)(4095);
    L_8001DEE4:;
    v0 = TM3_DRAFT_I16(s1 + (uint32)(1552));
    L_8001DEE8:;
    L_8001DEEC:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v1 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001DEF0:;
    v0 = (uint32)((sint32)arg0 >> 12u);
    L_8001DEF4:;
    v1 = lo;
    L_8001DEF8:;
    {
        uint32 branch = (sint32)v1 >= 0;
        TM3_DRAFT_U16(s1 + (uint32)(3356)) = (uint16)v0;
        if (branch) goto L_8001DF04;
    }
    L_8001DF00:;
    v1 = v1 + (uint32)(4095);
    L_8001DF04:;
    arg0 = TM3_DRAFT_U32(s1 + (uint32)(4040));
    L_8001DF08:;
    v0 = (uint32)((sint32)v1 >> 12u);
    L_8001DF0C:;
    TM3_DRAFT_U16(s1 + (uint32)(3358)) = (uint16)v0;
    L_8001DF10:;
    v0 = TM3_DRAFT_I16(s1 + (uint32)(1540));
    L_8001DF14:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(1552));
    L_8001DF18:;
    arg0 = TM3_DRAFT_I16(arg0 + (uint32)(90));
    L_8001DF1C:;
    v0 = v0 - v1;
    L_8001DF20:;
    {
        uint64 product = (uint64)((int64_t)(sint32)arg0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001DF24:;
    v0 = lo;
    L_8001DF28:;
    {
        uint32 branch = (sint32)v0 >= 0;
        if (branch) goto L_8001DF34;
    }
    L_8001DF30:;
    v0 = v0 + (uint32)(4095);
    L_8001DF34:;
    arg0 = TM3_DRAFT_U32(s1 + (uint32)(4040));
    L_8001DF38:;
    v0 = (uint32)((sint32)v0 >> 12u);
    L_8001DF3C:;
    TM3_DRAFT_U16(s1 + (uint32)(3360)) = (uint16)v0;
    L_8001DF40:;
    v0 = TM3_DRAFT_I16(s1 + (uint32)(1552));
    L_8001DF44:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(1540));
    L_8001DF48:;
    arg0 = TM3_DRAFT_I16(arg0 + (uint32)(90));
    L_8001DF4C:;
    v0 = v0 + v1;
    L_8001DF50:;
    {
        uint64 product = (uint64)((int64_t)(sint32)arg0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001DF54:;
    v0 = lo;
    L_8001DF58:;
    {
        uint32 branch = (sint32)v0 >= 0;
        if (branch) goto L_8001DF64;
    }
    L_8001DF60:;
    v0 = v0 + (uint32)(4095);
    L_8001DF64:;
    arg0 = TM3_DRAFT_U32(s1 + (uint32)(4040));
    L_8001DF68:;
    v0 = (uint32)((sint32)v0 >> 12u);
    L_8001DF6C:;
    TM3_DRAFT_U16(s1 + (uint32)(3362)) = (uint16)v0;
    L_8001DF70:;
    v0 = TM3_DRAFT_I16(s1 + (uint32)(1540));
    L_8001DF74:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(1552));
    L_8001DF78:;
    arg0 = TM3_DRAFT_I16(arg0 + (uint32)(90));
    L_8001DF7C:;
    v0 = v0 + v1;
    L_8001DF80:;
    {
        uint64 product = (uint64)((int64_t)(sint32)arg0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001DF84:;
    v0 = lo;
    L_8001DF88:;
    {
        uint32 branch = (sint32)v0 >= 0;
        if (branch) goto L_8001DF94;
    }
    L_8001DF90:;
    v0 = v0 + (uint32)(4095);
    L_8001DF94:;
    arg0 = TM3_DRAFT_U32(s1 + (uint32)(4040));
    L_8001DF98:;
    v0 = (uint32)((sint32)v0 >> 12u);
    L_8001DF9C:;
    TM3_DRAFT_U16(s1 + (uint32)(3364)) = (uint16)v0;
    L_8001DFA0:;
    v0 = TM3_DRAFT_I16(s1 + (uint32)(1552));
    L_8001DFA4:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(1540));
    L_8001DFA8:;
    arg0 = TM3_DRAFT_I16(arg0 + (uint32)(90));
    L_8001DFAC:;
    v0 = v0 - v1;
    L_8001DFB0:;
    {
        uint64 product = (uint64)((int64_t)(sint32)arg0 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001DFB4:;
    v0 = lo;
    L_8001DFB8:;
    {
        uint32 branch = (sint32)v0 >= 0;
        if (branch) goto L_8001DFC4;
    }
    L_8001DFC0:;
    v0 = v0 + (uint32)(4095);
    L_8001DFC4:;
    s0 = s1 + (uint32)(3348);
    L_8001DFC8:;
    arg2 = s0 + 0u;
    L_8001DFCC:;
    v0 = (uint32)((sint32)v0 >> 12u);
    L_8001DFD0:;
    TM3_DRAFT_U16(s1 + (uint32)(3366)) = (uint16)v0;
    L_8001DFD4:;
    v0 = s1 + (uint32)(3372);
    L_8001DFD8:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_8001DFDC:;
    arg0 = TM3_DRAFT_U32(s1 + (uint32)(3396));
    L_8001DFE0:;
    arg1 = TM3_DRAFT_U32(s1 + (uint32)(3400));
    L_8001DFE4:;
    arg3 = s1 + (uint32)(3356);
    v0 = sub_800163A0(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_8001DFEC:;
    s2 = v0 + 0u;
    L_8001DFF0:;
    arg2 = s0 + 0u;
    L_8001DFF4:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)0u;
    L_8001DFF8:;
    arg0 = TM3_DRAFT_U32(s1 + (uint32)(3396));
    L_8001DFFC:;
    arg1 = TM3_DRAFT_U32(s1 + (uint32)(3400));
    L_8001E000:;
    arg3 = s1 + (uint32)(3360);
    v0 = sub_800163A0(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_8001E008:;
    arg2 = s0 + 0u;
    L_8001E00C:;
    arg3 = s1 + (uint32)(3364);
    L_8001E010:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)0u;
    L_8001E014:;
    arg0 = TM3_DRAFT_U32(s1 + (uint32)(3396));
    L_8001E018:;
    arg1 = TM3_DRAFT_U32(s1 + (uint32)(3400));
    L_8001E01C:;
    s0 = v0 + 0u;
    v0 = sub_800163A0(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_8001E024:;
    {
        uint32 branch = s0 == 0u;
        arg0 = v0 + 0u;
        if (branch) goto L_8001E034;
    }
    L_8001E02C:;
    {
        uint32 branch = arg0 != 0u;
        if (branch) goto L_8001E058;
    }
    L_8001E034:;
    {
        uint32 branch = s2 == 0u;
        if (branch) goto L_8001E0B8;
    }
    L_8001E03C:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(4040));
    L_8001E040:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(3392));
    L_8001E044:;
    v0 = TM3_DRAFT_I16(v0 + (uint32)(90));
    L_8001E048:;
    L_8001E04C:;
    v1 = (sint32)v1 < (sint32)v0;
    L_8001E050:;
    {
        uint32 branch = v1 == 0u;
        if (branch) goto L_8001E0B8;
    }
    L_8001E058:;
    v0 = TM3_DRAFT_I16(s1 + (uint32)(3392));
    L_8001E05C:;
    L_8001E060:;
    v0 = (sint32)v0 < 201;
    L_8001E064:;
    {
        uint32 branch = v0 != 0u;
        v0 = 0u + (uint32)(15);
        if (branch) goto L_8001E07C;
    }
    L_8001E06C:;
    TM3_DRAFT_U8(s1 + (uint32)(3331)) = (uint8)0u;
    L_8001E070:;
    TM3_DRAFT_U8(s1 + (uint32)(3332)) = (uint8)v0;
    L_8001E074:;
    TM3_DRAFT_U8(s1 + (uint32)(3330)) = (uint8)0u;
    goto L_8001E2A0;
    L_8001E07C:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(4040));
    L_8001E080:;
    v1 = TM3_DRAFT_U32(s1 + (uint32)(3688));
    L_8001E084:;
    v0 = TM3_DRAFT_U8(v0 + (uint32)(85));
    L_8001E088:;
    TM3_DRAFT_U8(s1 + (uint32)(3332)) = (uint8)0u;
    L_8001E08C:;
    TM3_DRAFT_U8(s1 + (uint32)(3331)) = (uint8)v0;
    L_8001E090:;
    v0 = TM3_DRAFT_I16(v1 + (uint32)(6));
    L_8001E094:;
    L_8001E098:;
    {
        uint32 branch = (sint32)v0 >= 0;
        v0 = 0u + (uint32)(16);
        if (branch) goto L_8001E0A4;
    }
    L_8001E0A0:;
    v0 = 0u + (uint32)(-16);
    L_8001E0A4:;
    TM3_DRAFT_U8(s1 + (uint32)(3330)) = (uint8)v0;
    L_8001E0A8:;
    arg0 = s1 + 0u;
    sub_8001C9EC(arg0);
    L_8001E0B0:;
    v0 = 0u + 0u;
    goto L_8001E2A4;
    L_8001E0B8:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(3688));
    L_8001E0BC:;
    L_8001E0C0:;
    v1 = TM3_DRAFT_U16(v0 + (uint32)(6));
    L_8001E0C4:;
    L_8001E0C8:;
    v0 = v1 + (uint32)(2048);
    L_8001E0CC:;
    v0 = v0 & 65535u;
    L_8001E0D0:;
    v0 = v0 < (uint32)(4097);
    L_8001E0D4:;
    {
        uint32 branch = v0 != 0u;
        v0 = v1 << 16u;
        if (branch) goto L_8001E120;
    }
    L_8001E0DC:;
    v1 = (uint32)((sint32)v0 >> 16u);
    L_8001E0E0:;
    {
        uint32 branch = (sint32)v1 < 0;
        if (branch) goto L_8001E104;
    }
    L_8001E0E8:;
    {
        uint32 branch = s0 != 0u;
        v0 = v1 + (uint32)(-4096);
        if (branch) goto L_8001E140;
    }
    L_8001E0F0:;
    {
        uint32 branch = (sint32)v0 >= 0;
        if (branch) goto L_8001E0FC;
    }
    L_8001E0F8:;
    v0 = v1 + (uint32)(-3969);
    L_8001E0FC:;
    v0 = (uint32)((sint32)v0 >> 7u);
    goto L_8001E148;
    L_8001E104:;
    {
        uint32 branch = arg0 != 0u;
        v0 = v1 + (uint32)(4096);
        if (branch) goto L_8001E140;
    }
    L_8001E10C:;
    {
        uint32 branch = (sint32)v0 >= 0;
        if (branch) goto L_8001E118;
    }
    L_8001E114:;
    v0 = v1 + (uint32)(4223);
    L_8001E118:;
    v0 = (uint32)((sint32)v0 >> 7u);
    goto L_8001E148;
    L_8001E120:;
    {
        uint32 branch = (sint32)v0 < 0;
        if (branch) goto L_8001E138;
    }
    L_8001E128:;
    {
        uint32 branch = s0 != 0u;
        v0 = 0u + (uint32)(-16);
        if (branch) goto L_8001E140;
    }
    L_8001E130:;
    TM3_DRAFT_U8(s1 + (uint32)(3330)) = (uint8)v0;
    goto L_8001E14C;
    L_8001E138:;
    {
        uint32 branch = arg0 == 0u;
        v0 = 0u + (uint32)(16);
        if (branch) goto L_8001E148;
    }
    L_8001E140:;
    TM3_DRAFT_U8(s1 + (uint32)(3330)) = (uint8)0u;
    goto L_8001E14C;
    L_8001E148:;
    TM3_DRAFT_U8(s1 + (uint32)(3330)) = (uint8)v0;
    L_8001E14C:;
    {
        uint32 branch = s2 == 0u;
        if (branch) goto L_8001E184;
    }
    L_8001E154:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(3688));
    L_8001E158:;
    v1 = TM3_DRAFT_U32(s1 + (uint32)(4040));
    L_8001E15C:;
    arg0 = TM3_DRAFT_I16(v0 + (uint32)(4));
    L_8001E160:;
    v0 = TM3_DRAFT_I16(v1 + (uint32)(104));
    L_8001E164:;
    L_8001E168:;
    v0 = (sint32)v0 < (sint32)arg0;
    L_8001E16C:;
    {
        uint32 branch = v0 != 0u;
        v0 = 0x80020000u;
        if (branch) goto L_8001E298;
    }
    L_8001E174:;
    arg0 = s1 + 0u;
    v0 = sub_8001C91C(arg0);
    L_8001E17C:;
    v0 = 0u + 0u;
    goto L_8001E2A4;
    L_8001E184:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(4040));
    L_8001E188:;
    L_8001E18C:;
    v0 = TM3_DRAFT_U8(v0 + (uint32)(84));
    L_8001E190:;
    TM3_DRAFT_U8(s1 + (uint32)(3332)) = (uint8)0u;
    L_8001E194:;
    TM3_DRAFT_U8(s1 + (uint32)(3331)) = (uint8)v0;
    goto L_8001E2A0;
    L_8001E19C:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(3392));
    L_8001E1A0:;
    v0 = TM3_DRAFT_I16(s1 + (uint32)(1540));
    L_8001E1A4:;
    L_8001E1A8:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v1 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001E1AC:;
    v0 = TM3_DRAFT_U16(s1 + (uint32)(3338));
    L_8001E1B0:;
    L_8001E1B4:;
    v0 = v0 + (uint32)(1);
    L_8001E1B8:;
    v1 = lo;
    L_8001E1BC:;
    {
        uint32 branch = (sint32)v1 >= 0;
        TM3_DRAFT_U16(s1 + (uint32)(3338)) = (uint16)v0;
        if (branch) goto L_8001E1C8;
    }
    L_8001E1C4:;
    v1 = v1 + (uint32)(4095);
    L_8001E1C8:;
    v0 = (uint32)((sint32)v1 >> 12u);
    L_8001E1CC:;
    v0 = v0 << 11u;
    L_8001E1D0:;
    arg0 = 0u - v0;
    L_8001E1D4:;
    {
        uint32 branch = (sint32)arg0 >= 0;
        if (branch) goto L_8001E1E0;
    }
    L_8001E1DC:;
    arg0 = arg0 + (uint32)(4095);
    L_8001E1E0:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(3392));
    L_8001E1E4:;
    v0 = TM3_DRAFT_I16(s1 + (uint32)(1552));
    L_8001E1E8:;
    L_8001E1EC:;
    {
        uint64 product = (uint64)((int64_t)(sint32)v1 * (int64_t)(sint32)v0);
        lo = (uint32)product;
        hi = (uint32)(product >> 32);
    }
    L_8001E1F0:;
    v0 = (uint32)((sint32)arg0 >> 12u);
    L_8001E1F4:;
    v1 = lo;
    L_8001E1F8:;
    {
        uint32 branch = (sint32)v1 >= 0;
        TM3_DRAFT_U16(s1 + (uint32)(3356)) = (uint16)v0;
        if (branch) goto L_8001E204;
    }
    L_8001E200:;
    v1 = v1 + (uint32)(4095);
    L_8001E204:;
    v0 = (uint32)((sint32)v1 >> 12u);
    L_8001E208:;
    v0 = v0 << 11u;
    L_8001E20C:;
    v0 = 0u - v0;
    L_8001E210:;
    {
        uint32 branch = (sint32)v0 >= 0;
        arg2 = s1 + (uint32)(3348);
        if (branch) goto L_8001E21C;
    }
    L_8001E218:;
    v0 = v0 + (uint32)(4095);
    L_8001E21C:;
    v0 = (uint32)((sint32)v0 >> 12u);
    L_8001E220:;
    TM3_DRAFT_U16(s1 + (uint32)(3358)) = (uint16)v0;
    L_8001E224:;
    v0 = s1 + (uint32)(3372);
    L_8001E228:;
    TM3_DRAFT_U16(s1 + (uint32)(3360)) = (uint16)0u;
    L_8001E22C:;
    TM3_DRAFT_U16(s1 + (uint32)(3362)) = (uint16)0u;
    L_8001E230:;
    TM3_DRAFT_U16(s1 + (uint32)(3364)) = (uint16)0u;
    L_8001E234:;
    TM3_DRAFT_U16(s1 + (uint32)(3366)) = (uint16)0u;
    L_8001E238:;
    TM3_DRAFT_U32(listing_local_address + 16u) = (uint32)v0;
    L_8001E23C:;
    arg0 = TM3_DRAFT_U32(s1 + (uint32)(3396));
    L_8001E240:;
    arg1 = TM3_DRAFT_U32(s1 + (uint32)(3400));
    L_8001E244:;
    arg3 = s1 + (uint32)(3356);
    v0 = sub_800163A0(arg0, arg1, arg2, arg3, TM3_DRAFT_U32(listing_local_address + 16u) /* TODO: Caller stack argument */);
    L_8001E24C:;
    v1 = TM3_DRAFT_I16(s1 + (uint32)(3338));
    L_8001E250:;
    L_8001E254:;
    v1 = (sint32)v1 < 41;
    L_8001E258:;
    {
        uint32 branch = v1 == 0u;
        s2 = v0 + 0u;
        if (branch) goto L_8001E28C;
    }
    L_8001E260:;
    {
        uint32 branch = s2 != 0u;
        if (branch) goto L_8001E28C;
    }
    L_8001E268:;
    v0 = TM3_DRAFT_U32(s1 + (uint32)(3688));
    L_8001E26C:;
    L_8001E270:;
    v0 = TM3_DRAFT_U16(v0 + (uint32)(6));
    L_8001E274:;
    L_8001E278:;
    v0 = v0 + (uint32)(682);
    L_8001E27C:;
    v0 = v0 & 65535u;
    L_8001E280:;
    v0 = v0 < (uint32)(1365);
    L_8001E284:;
    {
        uint32 branch = v0 == 0u;
        if (branch) goto L_8001E2A0;
    }
    L_8001E28C:;
    arg0 = s1 + 0u;
    v0 = sub_8001C9F8(arg0);
    L_8001E294:;
    v0 = 0x80020000u;
    L_8001E298:;
    v0 = v0 + (uint32)(-10104);
    goto L_8001E2A4;
    L_8001E2A0:;
    v0 = 0u + 0u;
    L_8001E2A4:;
    L_8001E2A8:;
    L_8001E2AC:;
    L_8001E2B0:;
    L_8001E2B4:;
    return v0;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80025AC0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    uint32 original_local_words[32];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    uint32 cpu_a0;
    uint32 cpu_a1;
    uint32 cpu_a2;
    uint32 cpu_v0;
    uint32 cpu_v1;
    FUNCTION_MARKER(0x80025AC0u, "SCUS_942.49");
  uint32 v13; 
  uint32 v16; 
  uint32 result; 
  int v19; 
  int v20; 
  uint32 v21; 
  uint32 v22; 
  uint32 v23; 
  int v24; 
  int v25; 
  sint32 v26; 
  uint32 v27; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  uint32 v51; 
  int v55; 
  uint32 v56; 
  uint32 v57; 
  int v58; 
  int v67; 
  uint32 v68; 
  int v69; 

  v16 = TM3_DRAFT_U32(a3);
  result = (uint32)(TM3_DRAFT_U32(a3) + 8) < a4;
  if ( (uint32)(TM3_DRAFT_U32(a3) + 8) < a4 )
  {
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = a1;
    do
    {
      v24 = TM3_DRAFT_I16(v23 + 6168);
      v25 = abs16(TM3_DRAFT_U16(v23 + 6168));
      if ( v19 >= v25 )
      {
        if ( v20 < v25 )
        {
          v20 = v25;
          v13 = v22;
          if ( v24 < 0 )
            v13 = v22 + 3;
        }
      }
      else
      {
        v20 = v19;
        v19 = v25;
        v13 = v21;
        v21 = v22;
        if ( v24 < 0 )
          v21 = v22 + 3;
      }
      ++v22;
      v23 = (uint32)((uint32)v23 + 8);
    }
    while ( v22 < 3 );
    v26 = v21 < v13;
    if ( v21 >= 3 )
    {
      v21 -= 3;
      if ( v13 < 3 )
        v13 += 3;
      else
        v13 -= 3;
      v26 = v21 < v13;
    }
    if ( v26 )
    {
      if ( v13 >= 3 &TM3_DRAFT_LOCAL_ADDRESS(&v21, sizeof(v21)) /* TODO: Local buffer adapter */ < v13 - 3 )
        --v13;
      --v13;
    }
    v27 = (0x8007DF88u + 4u * (4 * v21 + v13));
    if ( TM3_DRAFT_U32(a1 + 4u * (1018)) )
    {
      v37 = TM3_DRAFT_U32(a1 + 4u * (385));
      v38 = TM3_DRAFT_U32(a1 + 4u * (386));
      v39 = TM3_DRAFT_U32(a1 + 4u * (387));
      TM3_DRAFT_I32(original_local_address + 72u) = TM3_DRAFT_U32(a1 + 4u * (384));
      TM3_DRAFT_I32(original_local_address + 76u) = v37;
      TM3_DRAFT_I32(original_local_address + 80u) = v38;
      TM3_DRAFT_I32(original_local_address + 84u) = v39;
      v40 = TM3_DRAFT_U32(a1 + 4u * (389));
      v41 = TM3_DRAFT_U32(a1 + 4u * (390));
      v42 = TM3_DRAFT_U32(a1 + 4u * (391));
      TM3_DRAFT_I32(original_local_address + 88u) = TM3_DRAFT_U32(a1 + 4u * (388));
      TM3_DRAFT_I32(original_local_address + 92u) = v40;
      TM3_DRAFT_I32(original_local_address + 96u) = v41;
      TM3_DRAFT_I32(original_local_address + 100u) = v42;
      (*(int (*)[4])psx_addr(original_local_address + 104u, sizeof(int[4])))[0] = (int)(abs32(TM3_DRAFT_U32(a1 + 4u * (1018)) - 6) << 12) / 6;
      (*(int (*)[4])psx_addr(original_local_address + 104u, sizeof(int[4])))[1] = (*(int (*)[4])psx_addr(original_local_address + 104u, sizeof(int[4])))[0];
      (*(int (*)[4])psx_addr(original_local_address + 104u, sizeof(int[4])))[2] = (*(int (*)[4])psx_addr(original_local_address + 104u, sizeof(int[4])))[0];
      sub_8005BBE4(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 72u), sizeof(TM3_DRAFT_I32(original_local_address + 72u))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 104u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 104u, sizeof(int[4]))))));
      cpu_v0 = TM3_DRAFT_I32(original_local_address + 72u);
      cpu_v1 = TM3_DRAFT_I32(original_local_address + 76u);
      cpu_a0 = TM3_DRAFT_I32(original_local_address + 80u);
      cpu_a1 = TM3_DRAFT_I32(original_local_address + 84u);
      xport_gte_write_control(0u, (uint32)cpu_v0);
xport_gte_write_control(1u, (uint32)cpu_v1);
xport_gte_write_control(2u, (uint32)cpu_a0);
xport_gte_write_control(3u, (uint32)cpu_a1);
      cpu_v0 = TM3_DRAFT_I32(original_local_address + 88u);
      cpu_v1 = TM3_DRAFT_I32(original_local_address + 92u);
      cpu_a0 = TM3_DRAFT_I32(original_local_address + 96u);
      cpu_a1 = TM3_DRAFT_I32(original_local_address + 100u);
      xport_gte_write_control(4u, (uint32)cpu_v0);
xport_gte_write_control(5u, (uint32)cpu_v1);
xport_gte_write_control(6u, (uint32)cpu_a0);
xport_gte_write_control(7u, (uint32)cpu_a1);
    }
    else
    {
      cpu_v1 = TM3_DRAFT_U32(a1 + 4u * (384));
      cpu_a0 = TM3_DRAFT_U32(a1 + 4u * (385));
      cpu_a1 = TM3_DRAFT_U32(a1 + 4u * (386));
      cpu_a2 = TM3_DRAFT_U32(a1 + 4u * (387));
      xport_gte_write_control(0u, (uint32)cpu_v1);
xport_gte_write_control(1u, (uint32)cpu_a0);
xport_gte_write_control(2u, (uint32)cpu_a1);
xport_gte_write_control(3u, (uint32)cpu_a2);
      cpu_v1 = TM3_DRAFT_U32(a1 + 4u * (388));
      cpu_a0 = TM3_DRAFT_U32(a1 + 4u * (389));
      cpu_a1 = TM3_DRAFT_U32(a1 + 4u * (390));
      cpu_a2 = TM3_DRAFT_U32(a1 + 4u * (391));
      xport_gte_write_control(4u, (uint32)cpu_v1);
xport_gte_write_control(5u, (uint32)cpu_a0);
xport_gte_write_control(6u, (uint32)cpu_a1);
xport_gte_write_control(7u, (uint32)cpu_a2);
    }
    v36 = 0;
    v51 = TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[2])psx_addr(original_local_address + 40u, sizeof(int[2]))), sizeof((*(int (*)[2])psx_addr(original_local_address + 40u, sizeof(int[2])))));
    do
    {
      cpu_v0 = (a1 + 4u * (2 * TM3_DRAFT_U8(v27 + v36) + 238));
      xport_gte_write_data(0u, TM3_DRAFT_U32(cpu_v0 + 0u));
xport_gte_write_data(1u, TM3_DRAFT_U32(cpu_v0 + 4u));
xport_gte_execute(0x480012u);
cpu_v0 = xport_gte_read_data(25u);
cpu_v1 = xport_gte_read_data(27u);
      TM3_DRAFT_U16(v51) = cpu_v0;
      TM3_DRAFT_U16(v51 + 16) = cpu_v1;
      ++v36;
      v51 += 4u * (2);
    }
    while ( v36 < 4 );
    v55 = 0;
    v56 = TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[2])psx_addr(original_local_address + 40u, sizeof(int[2]))), sizeof((*(int (*)[2])psx_addr(original_local_address + 40u, sizeof(int[2])))));
    do
    {
      v57 = (uint32)(a1 + 4u * (28 * TM3_DRAFT_U8(v27 + v55++)));
      TM3_DRAFT_U16(v56 + 8) = sub_80013420(TM3_DRAFT_U16(v57 + 2u * (802)), TM3_DRAFT_U16(v57 + 2u * (803)), TM3_DRAFT_U16(v57 + 2u * (804)));
      v56 += 4u * (2);
    }
    while ( v55 < 4 );
    v58 = (TM3_DRAFT_U32(a1 + 4u * (14)) >> 3) | (TM3_DRAFT_U32(a1 + 4u * (14)) >> 3 << 8) | (TM3_DRAFT_U32(a1 + 4u * (14)) >> 3 << 16) | 0x2A000000;
    cpu_v0 = TM3_DRAFT_U32(a5);
    cpu_v1 = TM3_DRAFT_U32(a5 + 4);
    cpu_a0 = TM3_DRAFT_U32(a5 + 8);
    cpu_a1 = TM3_DRAFT_U32(a5 + 12);
    xport_gte_write_control(0u, (uint32)cpu_v0);
xport_gte_write_control(1u, (uint32)cpu_v1);
xport_gte_write_control(2u, (uint32)cpu_a0);
xport_gte_write_control(3u, (uint32)cpu_a1);
    cpu_v0 = TM3_DRAFT_U32(a5 + 16);
    cpu_v1 = TM3_DRAFT_U32(a5 + 20);
    cpu_a0 = TM3_DRAFT_U32(a5 + 24);
    cpu_a1 = TM3_DRAFT_U32(a5 + 28);
    xport_gte_write_control(4u, (uint32)cpu_v0);
xport_gte_write_control(5u, (uint32)cpu_v1);
xport_gte_write_control(6u, (uint32)cpu_a0);
xport_gte_write_control(7u, (uint32)cpu_a1);
    sub_8005C3F4(
      TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[2])psx_addr(original_local_address + 40u, sizeof(int[2]))), sizeof((*(int (*)[2])psx_addr(original_local_address + 40u, sizeof(int[2]))))) /* TODO: Local buffer adapter */,
      TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[8])psx_addr(original_local_address + 48u, sizeof(char[8]))), sizeof((*(char (*)[8])psx_addr(original_local_address + 48u, sizeof(char[8]))))) /* TODO: Local buffer adapter */,
      TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[8])psx_addr(original_local_address + 56u, sizeof(char[8]))), sizeof((*(char (*)[8])psx_addr(original_local_address + 56u, sizeof(char[8]))))) /* TODO: Local buffer adapter */,
      TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[8])psx_addr(original_local_address + 64u, sizeof(char[8]))), sizeof((*(char (*)[8])psx_addr(original_local_address + 64u, sizeof(char[8]))))) /* TODO: Local buffer adapter */,
      (int)(v16 + 8),
      (int)(v16 + 12),
      (int)(v16 + 16),
      (int)(v16 + 20),
      TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[4])psx_addr(original_local_address + 120u, sizeof(char[4]))), sizeof((*(char (*)[4])psx_addr(original_local_address + 120u, sizeof(char[4]))))) /* TODO: Local buffer adapter */,
      TM3_DRAFT_LOCAL_ADDRESS((*(char (*)[4])psx_addr(original_local_address + 124u, sizeof(char[4]))), sizeof((*(char (*)[4])psx_addr(original_local_address + 124u, sizeof(char[4]))))) /* TODO: Local buffer adapter */);
    TM3_DRAFT_U32(v16 + 4u * (1)) = v58;
    TM3_DRAFT_U32(v16) = TM3_DRAFT_U32(a2) & 0xFFFFFF | 0x5000000;
    v67 = (uint32)v16 & 0xFFFFFF;
    v68 = (uint32)(v16 + 24);
    TM3_DRAFT_U32(a2) = v67;
    TM3_DRAFT_U8(v68 + 12) = 1;
    v69 = -520093696;
    if ( TM3_DRAFT_U32(0x800D2EF0u) )
      v69 = -520093184;
    TM3_DRAFT_U32(v68 + 4u * (1)) = v69;
    TM3_DRAFT_U32(v68) = TM3_DRAFT_U32(v68) & 0xFF000000 | TM3_DRAFT_U32(a2) & 0xFFFFFF;
    result = TM3_DRAFT_U32(a2) & 0xFF000000 | (uint32)v68 & 0xFFFFFF;
    TM3_DRAFT_U32(a2) = result;
    TM3_DRAFT_U32(a3) = (uint32)(v68 + 8);
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001C354(uint32 a1)
{
    uint32 original_local_words[7];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8001C354u, "SCUS_942.49");
  uint32 v2; 
  sint16 v3; 
  int v4; 
  sint16 v5; 
  sint32 v6; 
  int v7; 
  int result; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  sint16 v13; 
  sint32 v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 

  v2 = TM3_DRAFT_U8(a1 + 3395) + 1 >= TM3_DRAFT_U8(a1 + 3394);
  TM3_DRAFT_U8(a1 + 3714) = 0;
  if ( v2 )
  {
    v21 = TM3_DRAFT_U8(a1 + 3395);
    TM3_DRAFT_U16(a1 + 3704) = 4096;
    v2 = TM3_DRAFT_U8(28 * TM3_DRAFT_U16(a1 + 2 * v21 + 3716) + TM3_DRAFT_U32(0x80089F00u) + 9) == 0;
    result = 1000;
    if ( !v2 )
      result = TM3_DRAFT_U16(TM3_DRAFT_U32(a1 + 4040) + 86);
    TM3_DRAFT_U16(a1 + 3706) = result;
  }
  else
  {
    v3 = TM3_DRAFT_U16(TM3_DRAFT_U32(a1 + 4040) + 86);
    v4 = TM3_DRAFT_U8(a1 + 3395);
    TM3_DRAFT_U16(a1 + 3704) = 4096;
    TM3_DRAFT_U16(a1 + 3706) = v3;
    TM3_DRAFT_I16(original_local_address + 24u) = TM3_DRAFT_U16(28 * TM3_DRAFT_U16(a1 + 2 * v4 + 3716) + TM3_DRAFT_U32(0x80089F00u)) - TM3_DRAFT_U16(a1 + 3348);
    v5 = TM3_DRAFT_U16(28 * TM3_DRAFT_U16(a1 + 2 * TM3_DRAFT_U8(a1 + 3395) + 3716) + TM3_DRAFT_U32(0x80089F00u) + 2)
       - TM3_DRAFT_U16(a1 + 3350);
    TM3_DRAFT_I16(original_local_address + 26u) = v5;
    v6 = sub_8005B124(TM3_DRAFT_I16(original_local_address + 24u) * TM3_DRAFT_I16(original_local_address + 24u) + v5 * v5);
    if ( v6 )
    {
      LOWORD(TM3_DRAFT_I32(original_local_address + 24u)) = (TM3_DRAFT_I16(original_local_address + 24u) << 12) / v6;
      HIWORD(TM3_DRAFT_I32(original_local_address + 24u)) = (TM3_DRAFT_I16(original_local_address + 26u) << 12) / v6;
    }
    else
    {
      TM3_DRAFT_I32(original_local_address + 24u) = 0;
    }
    v7 = TM3_DRAFT_U8(a1 + 3395) + 1;
    result = v7 < TM3_DRAFT_U8(a1 + 3394);
    v9 = 0;
    if ( v7 < TM3_DRAFT_U8(a1 + 3394) )
    {
      v10 = 2 * v7 + a1;
      do
      {
        v11 = a1 + 2 * (v7 - 1);
        v12 = 28 * TM3_DRAFT_U16(v11 + 3716) + TM3_DRAFT_U32(0x80089F00u);
        if ( TM3_DRAFT_U8(v12 + 9) == 1 )
        {
          result = TM3_DRAFT_U8(28 * TM3_DRAFT_U16(v10 + 3716) + TM3_DRAFT_U32(0x80089F00u) + 9);
          if ( result == 1 )
            break;
        }
        result = TM3_DRAFT_I16(a1 + 3710) < v9;
        if ( TM3_DRAFT_I16(a1 + 3710) < v9 )
          break;
        TM3_DRAFT_I16(original_local_address + 16u) = TM3_DRAFT_U16(28 * TM3_DRAFT_U16(v10 + 3716) + TM3_DRAFT_U32(0x80089F00u)) - TM3_DRAFT_U16(v12);
        v13 = TM3_DRAFT_U16(28 * TM3_DRAFT_U16(v10 + 3716) + TM3_DRAFT_U32(0x80089F00u) + 2)
            - TM3_DRAFT_U16(28 * TM3_DRAFT_U16(v11 + 3716) + TM3_DRAFT_U32(0x80089F00u) + 2);
        TM3_DRAFT_I16(original_local_address + 18u) = v13;
        v14 = sub_8005B124(TM3_DRAFT_I16(original_local_address + 16u) * TM3_DRAFT_I16(original_local_address + 16u) + v13 * v13);
        if ( v14 )
        {
          LOWORD(TM3_DRAFT_I32(original_local_address + 16u)) = (TM3_DRAFT_I16(original_local_address + 16u) << 12) / v14;
          HIWORD(TM3_DRAFT_I32(original_local_address + 16u)) = (TM3_DRAFT_I16(original_local_address + 18u) << 12) / v14;
        }
        else
        {
          TM3_DRAFT_I32(original_local_address + 16u) = 0;
        }
        v9 += v14;
        v15 = ((sint16)TM3_DRAFT_I32(original_local_address + 24u) * (sint16)TM3_DRAFT_I32(original_local_address + 16u) + SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) * SHIWORD(TM3_DRAFT_I32(original_local_address + 16u))) / 4096;
        v16 = -4096;
        if ( v15 >= -4096 )
        {
          v16 = 4096;
          if ( v15 < 4097 )
            v16 = ((sint16)TM3_DRAFT_I32(original_local_address + 24u) * (sint16)TM3_DRAFT_I32(original_local_address + 16u) + SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) * SHIWORD(TM3_DRAFT_I32(original_local_address + 16u))) / 4096;
        }
        v17 = v16 >= 0 ? TM3_DRAFT_I16(0x8007BCF4u + v16) : -TM3_DRAFT_I16(0x8007BCF4u - v16);
        v18 = (v17 + 2048) * (v17 + 2048) / 4096;
        if ( v18 < TM3_DRAFT_I16(a1 + 3704) )
        {
          v19 = TM3_DRAFT_U32(a1 + 4040);
          TM3_DRAFT_U16(a1 + 3704) = v18;
          v20 = TM3_DRAFT_I16(v19 + 86) * (sint16)v18 / 4096;
          TM3_DRAFT_U16(a1 + 3706) = v20;
          if ( (sint16)v20 < 1000 )
            TM3_DRAFT_U16(a1 + 3706) = 1000;
        }
        TM3_DRAFT_I32(original_local_address + 24u) = TM3_DRAFT_I32(original_local_address + 16u);
        result = ++v7 < TM3_DRAFT_U8(a1 + 3394);
        v10 += 2;
      }
      while ( v7 < TM3_DRAFT_U8(a1 + 3394) );
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80017C30(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80017C30u, "SCUS_942.49");
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  uint32 v7; 
  uint32 v8; 
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
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  uint32 v23; 
  int v24; 
  int v25; 
  int v26; 
  int vars0; 
  int vars4; 
  int vars8; 
  int varsC; 

  if ( TM3_DRAFT_U32(0x800896CCu) )
  {
    TM3_DRAFT_U32(0x8008A1B0u) = 4096;
    TM3_DRAFT_U32(0x8008A1B4u) = 4096;
    TM3_DRAFT_U32(0x8008A1B8u) = 4096;
    TM3_DRAFT_U32(0x8008A1A0u) = 4096;
    TM3_DRAFT_U32(0x800896CCu) = 0;
    TM3_DRAFT_U32(0x8008A1A4u) = 4096;
    TM3_DRAFT_U32(0x8008A1A8u) = 4096;
  }
  v3 = TM3_DRAFT_U32(a2);
  v4 = TM3_DRAFT_U32(a2 + 4u * (1));
  v5 = TM3_DRAFT_U32(a2 + 4u * (2));
  v6 = TM3_DRAFT_U32(a2 + 4u * (3));
  v7 = (uint32)TM3_DRAFT_U32(a2 + 4u * (4));
  v8 = (uint32)TM3_DRAFT_U32(a2 + 4u * (5));
  sub_800566A4((uint32)a1, 0, 4404);
  TM3_DRAFT_U32(a1 + 3920) = v4;
  TM3_DRAFT_U32(a1 + 3924) = v5;
  TM3_DRAFT_U32(a1 + 3928) = v3;
  v9 = sub_80026B24(v3, 0);
  TM3_DRAFT_U32(a1 + 4040) = v9;
  if ( !v9 )
    TM3_DRAFT_U32(a1 + 4040) = 0x8007DCF8u;
  TM3_DRAFT_U32(a1 + 3948) = 2;
  TM3_DRAFT_U32(a1 + 3996) = -1;
  TM3_DRAFT_U8(a1 + 3976) = 65;
  TM3_DRAFT_U32(a1 + 3940) = 15;
  TM3_DRAFT_U32(a1 + 3968) = 15;
  TM3_DRAFT_U8(a1 + 3977) = -64;
  TM3_DRAFT_U32(a1 + 3932) = 0;
  TM3_DRAFT_U32(a1 + 3936) = 0;
  TM3_DRAFT_U32(a1 + 3956) = 0;
  TM3_DRAFT_U32(a1 + 3952) = 0;
  TM3_DRAFT_U32(a1 + 3960) = 0;
  TM3_DRAFT_U32(a1 + 3964) = 0;
  TM3_DRAFT_U16(a1 + 4108) = 0;
  TM3_DRAFT_U16(a1 + 4110) = 0;
  v10 = TM3_DRAFT_U32(4 * TM3_DRAFT_U32(0x800D2F10u) - 2146917968);
  TM3_DRAFT_U32(a1 + 4080) = v10;
  TM3_DRAFT_U32(a1 + 4076) = v10;
  v11 = TM3_DRAFT_U32(4 * TM3_DRAFT_U32(0x800D2F10u) - 2146917984);
  TM3_DRAFT_U32(a1 + 4088) = v11;
  TM3_DRAFT_U32(a1 + 4084) = v11;
  v12 = TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 2 * (3 * v6 + TM3_DRAFT_U32(0x800D2F10u)) + 66);
  TM3_DRAFT_U32(a1 + 4096) = v12;
  TM3_DRAFT_U32(a1 + 4092) = v12;
  if ( v6 == 1 )
  {
    v13 = TM3_DRAFT_U32(a1 + 3924);
    v14 = 144 * v13;
    v15 = 144 * v13 - 2146619768;
    TM3_DRAFT_U16(a1 + 3978) = 0x10000 / (TM3_DRAFT_U8(v15 + 326) - TM3_DRAFT_U8(v15 + 325));
    TM3_DRAFT_U16(a1 + 3980) = 0x10000 / (TM3_DRAFT_U8(v15 + 370) - TM3_DRAFT_U8(v15 + 369));
    if ( TM3_DRAFT_U16(v15 + 298) == 1 )
      v16 = v14 + 6;
    else
      v16 = v14 + 3;
    v17 = TM3_DRAFT_U8(v16 - 2146619768 + 326);
    if ( TM3_DRAFT_U16(144 * v13 - 2146619768 + 298) == 1 )
      v18 = 144 * v13 + 6;
    else
      v18 = 144 * v13 + 3;
    TM3_DRAFT_U16(a1 + 3982) = 61440 / (v17 - TM3_DRAFT_U8(v18 - 2146619768 + 325));
    v19 = 144 * v13 - 2146619768;
    TM3_DRAFT_U16(a1 + 3984) = 61440 / (TM3_DRAFT_U8(v19 + 364) - TM3_DRAFT_U8(v19 + 363));
    TM3_DRAFT_U16(a1 + 3986) = 61440 / (TM3_DRAFT_U8(v19 + 367) - TM3_DRAFT_U8(v19 + 366));
    v20 = 144 * v13 + 6;
    if ( TM3_DRAFT_U16(v19 + 298) == 1 )
      v20 = 144 * v13 + 3;
    v21 = TM3_DRAFT_U8(v20 - 2146619768 + 326);
    if ( TM3_DRAFT_U16(144 * v13 - 2146619768 + 298) == 1 )
      v22 = 144 * v13 + 3;
    else
      v22 = 144 * v13 + 6;
    TM3_DRAFT_U16(a1 + 3988) = 61440 / (v21 - TM3_DRAFT_U8(v22 - 2146619768 + 325));
    v23 = (uint32)(144 * v13 - 2146619768);
    TM3_DRAFT_U16(a1 + 3990) = 61440 / (TM3_DRAFT_U8(v23 + 1u * (364)) - TM3_DRAFT_U8(v23 + 1u * (363)));
    TM3_DRAFT_U16(a1 + 3992) = 61440 / (TM3_DRAFT_U8(v23 + 1u * (367)) - TM3_DRAFT_U8(v23 + 1u * (366)));
  }
  sub_8001E430(a1, v7, v8);
  sub_8001978C(a1, v6);
  sub_800267F0((uint32)a1);
  sub_8001EC44(a1, 0);
  sub_800337F4(a1);
  v24 = TM3_DRAFT_U32(a1 + 1584);
  v25 = TM3_DRAFT_U32(a1 + 1588);
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U32(a1 + 1580);
  v26 = a1 - 20;
  TM3_DRAFT_U16(v26 + 2) = v24;
  TM3_DRAFT_U16(v26 + 4) = v25;
  TM3_DRAFT_U32(a1 + 4376) = sub_8004A294(
                             22,
                             TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 54),
                             1,
                             a1);
  sub_80046944((uint32)a1);
  return 1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80029AB0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, ...)
{
    uint32 cpu_a0;
    uint32 cpu_a2;
    uint32 cpu_a3;
    uint32 cpu_t0;
    uint32 cpu_t5;
    uint32 cpu_v0;
    uint32 cpu_v1;
    uint32 temporary_0;
    uint32 temporary_5;
    FUNCTION_MARKER(0x80029AB0u, "SCUS_942.49");
  uint32 v17; 
  int result; 
  int v19; 
  int v20; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  uint32 v26; 
  uint32 v27; 
  char v28; 
  char v29; 
  int v30; 
  int v31; 
  int v33; 
  int v35; 
  int v38; 
  int v40; 
  int v42; 
  uint32 v43; 
  int v44; 
  char v45; 
  int v46; 
  int v47; 
  int v49; 
  int v51; 
  int v53; 
  int v55; 

  v17 = TM3_DRAFT_U32(a7);
  if ( TM3_DRAFT_U32(a7) + 52u * TM3_DRAFT_U8(a1 + 1u) >= a8 )
    return 0;
  v19 = 528482292;
  v20 = 528482804;
  cpu_a2 = a3 + 8 * TM3_DRAFT_U16(a1 + 2);
  v22 = TM3_DRAFT_U8(a1);
  v23 = a2 + TM3_DRAFT_U32(a1 + 4);
  if ( TM3_DRAFT_U8(a1) )
  {
    do
    {
      xport_gte_write_data(0u, TM3_DRAFT_U32(cpu_a2 + 0u));
xport_gte_write_data(1u, TM3_DRAFT_U32(cpu_a2 + 4u));
xport_gte_write_data(2u, TM3_DRAFT_U32(cpu_a2 + 8u));
xport_gte_write_data(3u, TM3_DRAFT_U32(cpu_a2 + 0xCu));
xport_gte_write_data(4u, TM3_DRAFT_U32(cpu_a2 + 0x10u));
xport_gte_write_data(5u, TM3_DRAFT_U32(cpu_a2 + 0x14u));
      v20 += 12;
      v19 += 12;
      xport_gte_execute(0x280030u);
      v22 -= 3;
      cpu_a2 += 24;
      TM3_DRAFT_U32(v19 + 0u) = xport_gte_read_data(12u);
TM3_DRAFT_U32(v19 + 4u) = xport_gte_read_data(13u);
TM3_DRAFT_U32(v19 + 8u) = xport_gte_read_data(14u);
TM3_DRAFT_U32(v20 + 0u) = xport_gte_read_data(17u);
TM3_DRAFT_U32(v20 + 4u) = xport_gte_read_data(18u);
TM3_DRAFT_U32(v20 + 8u) = xport_gte_read_data(19u);
    }
    while ( v22 > 0 );
  }
  v24 = 0;
  if ( TM3_DRAFT_U8(a1 + 1u * (1)) )
  {
    v25 = 12 * a4;
    v26 = (uint32)v17 + 28;
    v27 = (uint32)(v23 + 6);
    while ( 1 )
    {
      v28 = TM3_DRAFT_U32(v27 - 3);
      if ( v28 == 38 )
        goto LABEL_20;
      if ( TM3_DRAFT_U32(v27 - 3) < 0x27u )
        break;
      if ( v28 != 44 )
      {
        result = 0;
        if ( v28 != 46 )
          return result;
      }
      v29 = TM3_DRAFT_U32(v27 - 5);
      v30 = TM3_DRAFT_U32(v27 + 2) + v25;
      v31 = 4 * TM3_DRAFT_U32(v27 - 2);
      cpu_a0 = v31 + 528482304;
      v33 = 4 * TM3_DRAFT_U32(v27 - 1);
      cpu_a2 = v33 + 528482304;
      v35 = 4 * TM3_DRAFT_U8(v27);
      cpu_a3 = v35 + 528482304;
      xport_gte_write_data(12u, TM3_DRAFT_U32(cpu_a0 + 0u));
xport_gte_write_data(13u, TM3_DRAFT_U32(cpu_a2 + 0u));
xport_gte_write_data(14u, TM3_DRAFT_U32(cpu_a3 + 0u));
      TM3_DRAFT_U32(v26 + 5) = TM3_DRAFT_U32(v30);
      TM3_DRAFT_U32(v26 + 13) = TM3_DRAFT_U32(v30 + 4);
      xport_gte_execute(0x1400006u);
      TM3_DRAFT_U32(v26 + 1) = TM3_DRAFT_U32(v31 + 528482304);
      TM3_DRAFT_U32(v26 + 9) = TM3_DRAFT_U32(v33 + 528482304);
      TM3_DRAFT_U32(v26 + 17) = TM3_DRAFT_U32(v35 + 528482304);
      cpu_a2 = xport_gte_read_data(24u);
      v38 = TM3_DRAFT_U8(v27 + 1u * (1));
      cpu_v0 = 4 * v38 + 528482304;
      xport_gte_write_data(12u, TM3_DRAFT_U32(cpu_v0 + 0u));
      TM3_DRAFT_U16(v26 + 21) = TM3_DRAFT_U16(v30 + 8);
      TM3_DRAFT_U16(v26 + 29) = TM3_DRAFT_U16(v30 + 10);
      xport_gte_execute(0x1400006u);
      v40 = (TM3_DRAFT_U32(v31 + 528482816)
           + TM3_DRAFT_U32(v33 + 528482816)
           + TM3_DRAFT_U32(v35 + 528482816)
           + TM3_DRAFT_U32(4 * v38 + 0x1F800200)) >> 4;
      cpu_a0 = xport_gte_read_data(24u);
      if ( (v29 || cpu_a0 <= 0 || cpu_a2 > 0) &TM3_DRAFT_LOCAL_ADDRESS(&v40, sizeof(v40)) /* TODO: Local buffer adapter */ >= 41 )
      {
        TM3_DRAFT_U32(v26 - 3) = a5;
        v42 = TM3_DRAFT_U32(4 * v38 + 0x1F800000);
        TM3_DRAFT_U8(v26) = v28;
        TM3_DRAFT_U32(v26 + 25) = v42;
        if ( v40 >= TM3_DRAFT_U32(0x80089DD0u) )
          v40 = TM3_DRAFT_U32(0x80089DD0u) - 1;
        v27 += 12;
        v43 = (uint32)(4 * v40 + a6);
        v26 += 40;
        v44 = (uint32)v17 & 0xFFFFFF;
        TM3_DRAFT_U32(v17) = TM3_DRAFT_U32(v43) & 0xFFFFFF | 0x9000000;
        v17 += 4u * (10);
        goto LABEL_27;
      }
LABEL_23:
      v27 += 12;
LABEL_28:
      if ( ++v24 >= TM3_DRAFT_U8(a1 + 1u * (1)) )
        return 1;
    }
    result = 0;
    if ( v28 != 36 )
      return result;
LABEL_20:
    v45 = TM3_DRAFT_U32(v27 - 5);
    v46 = TM3_DRAFT_U32(v27 + 2) + v25;
    v47 = 4 * TM3_DRAFT_U32(v27 - 2);
    cpu_a3 = (uint32)(v47 + 528482304);
    v49 = 4 * TM3_DRAFT_U32(v27 - 1);
    temporary_5 = (uint32)(v49 + 528482304);
    v51 = 4 * TM3_DRAFT_U8(v27);
    temporary_0 = (uint32)(v51 + 528482304);
    xport_gte_write_data(12u, TM3_DRAFT_U32(cpu_a3 + 0u));
xport_gte_write_data(13u, TM3_DRAFT_U32(temporary_5));
xport_gte_write_data(14u, TM3_DRAFT_U32(temporary_0));
    TM3_DRAFT_U32(v26 + 5) = TM3_DRAFT_U32(v46);
    TM3_DRAFT_U32(v26 + 13) = TM3_DRAFT_U32(v46 + 4);
    xport_gte_execute(0x1400006u);
    v53 = (TM3_DRAFT_U32(v47 + 528482816)
         + TM3_DRAFT_U32(v49 + 528482816)
         + TM3_DRAFT_U32(v51 + 528482816)
         + TM3_DRAFT_U32(v47 + 528482816)) >> 4;
    cpu_a2 = xport_gte_read_data(24u);
    TM3_DRAFT_U16(v26 + 21) = TM3_DRAFT_U16(v46 + 8);
    if ( (v45 || cpu_a2 > 0) &TM3_DRAFT_LOCAL_ADDRESS(&v53, sizeof(v53)) /* TODO: Local buffer adapter */ >= 41 )
    {
      TM3_DRAFT_U32(v26 + 1) = TM3_DRAFT_U32(cpu_a3);
      TM3_DRAFT_U32(v26 + 9) = TM3_DRAFT_U32(temporary_5);
      v55 = TM3_DRAFT_U32(temporary_0);
      TM3_DRAFT_U32(v26 - 3) = a5;
      TM3_DRAFT_U8(v26) = v28;
      TM3_DRAFT_U32(v26 + 17) = v55;
      if ( v53 >= TM3_DRAFT_U32(0x80089DD0u) )
        v53 = TM3_DRAFT_U32(0x80089DD0u) - 1;
      v27 += 12;
      v43 = (uint32)(4 * v53 + a6);
      v26 += 32;
      v44 = (uint32)v17 & 0xFFFFFF;
      TM3_DRAFT_U32(v17) = TM3_DRAFT_U32(v43) & 0xFFFFFF | 0x7000000;
      v17 += 4u * (8);
LABEL_27:
      TM3_DRAFT_U32(v43) = v44;
      TM3_DRAFT_U32(a7) = v17;
      goto LABEL_28;
    }
    goto LABEL_23;
  }
  return 1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_800417CC(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800417CCu, "SCUS_942.49");
  int result; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  uint32 v11; 
  sint16 v12; 
  int v13; 
  sint16 v14; 
  sint16 v15; 
  sint16 v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  uint32 v23; 
  uint32 v24; 
  char vars0; 
  char vars4; 
  char vars8; 

  result = a1 < 4;
  if ( a1 < 4 )
  {
    v6 = 2 * a1;
    result = TM3_DRAFT_U32(200 * a1 - 2146622488);
    v7 = 0;
    if ( result )
    {
      v8 = 0;
      v9 = 0;
      if ( result > 0 )
      {
        do
        {
          v10 = sub_80049130((int)0x8007F24Cu, (uint32)(8 * (8 * (v6 + a1) + a1) - 2146622480 + (v9 << 6)));
          v6 = 2 * a1;
          if ( v10 + 108 < (uint16)TM3_DRAFT_U16(0x80089E00u) - 16 )
          {
            ++v8;
            if ( v7 < v10 )
            {
              v7 = v10;
              v6 = 2 * a1;
            }
          }
          result = ++v9 < TM3_DRAFT_U32(8 * (8 * (v6 + a1) + a1) - 2146622488);
        }
        while ( v9 < TM3_DRAFT_U32(8 * (8 * (v6 + a1) + a1) - 2146622488) );
      }
      if ( v8 )
      {
        v11 = (uint32)(a2 + 1728 * a1 + 0x20000);
        TM3_DRAFT_U16(v11 + 2u * (4514)) = v7 + 4;
        v12 = v8 * ((uint8)TM3_DRAFT_U8(0x8007F260u) + 2);
        v13 = 16;
        v14 = TM3_DRAFT_U16(a2 + 1728 * a1 + 140100);
        TM3_DRAFT_U16(v11 + 2u * (4482)) = v14 + 2;
        TM3_DRAFT_U16(v11 + 2u * (4488)) = v14 + 102;
        TM3_DRAFT_U16(v11 + 2u * (4515)) = v12 + 2;
        v15 = TM3_DRAFT_U16(a2 + 1728 * a1 + 140102);
        TM3_DRAFT_U16(v11 + 2u * (4498)) = TM3_DRAFT_U16(v11 + 2u * (4514)) + 2;
        v16 = TM3_DRAFT_U16(a2 + 1728 * a1 + 140102);
        TM3_DRAFT_U16(v11 + 2u * (4491)) = v15 + 2;
        TM3_DRAFT_U16(v11 + 2u * (4497)) = v16 + 14;
        TM3_DRAFT_U16(v11 + 2u * (4507)) = v16 + 2;
        v17 = 0;
        if ( TM3_DRAFT_I32(200 * a1 - 2146622488) > 0 )
        {
          do
          {
            v18 = 200 * a1;
            if ( sub_80049130((int)0x8007F24Cu, (uint32)(200 * a1 - 2146622480 + (v17 << 6))) + 108 < (uint16)TM3_DRAFT_U16(0x80089E00u) - 16 )
            {
              sub_80049284(
                (uint32)(v18 - 2146622480 + (v17 << 6)),
                (int)0x8007F24Cu,
                104,
                v13,
                a2,
                (int)a3,
                18,
                128,
                128,
                (uint32)0x80,
                1,
                1);
              v13 += 2 + (uint8)TM3_DRAFT_U8(0x8007F260u);
            }
            ++v17;
          }
          while ( v17 < TM3_DRAFT_U32(v18 - 2146622488) );
        }
        v19 = 0;
        v20 = 1648;
        v21 = 1728 * a1 + a2;
        do
        {
          v22 = a2 + 1728 * a1 + 138376 + v20;
          v20 += 16;
          v23 = (uint32)(v21 + 140024);
          v21 += 16;
          ++v19;
          TM3_DRAFT_U32(v23) = TM3_DRAFT_U32(v23) & 0xFF000000 | TM3_DRAFT_U32(a3) & 0xFFFFFF;
          v24 = TM3_DRAFT_U32(a3) & 0xFF000000 | v22 & 0xFFFFFF;
          TM3_DRAFT_U32(a3) = v24;
        }
        while ( v19 < 4 );
        TM3_DRAFT_U32(1728 * a1 + a2 + 140088) = TM3_DRAFT_U32(1728 * a1 + a2 + 140088) & 0xFF000000 | v24 & 0xFFFFFF;
        result = (a2 + 1728 * a1 + 138376 + 1712) & 0xFFFFFF;
        TM3_DRAFT_U32(a3) = TM3_DRAFT_U32(a3) & 0xFF000000 | result;
      }
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002B914(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8002B914u, "SCUS_942.49");
  int v2; 
  int v4; 
  uint32 v5; 
  int result; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  uint32 v12; 
  uint32 v13; 
  uint32 v14; 
  uint32 v15; 
  int v16; 
  sint32 v17; 
  int v18; 
  uint32 v19; 
  sint16 v20; 
  sint16 v21; 
  uint32 v22; 
  uint32 v23; 
  int v24; 
  int v25; 
  int v26; 

  v2 = TM3_DRAFT_U32(a2);
  TM3_DRAFT_U32(a1 + 48) = TM3_DRAFT_U32(a2);
  v4 = TM3_DRAFT_U32(a1 + 48);
  TM3_DRAFT_U8(a1) = TM3_DRAFT_U8(v2 + 12);
  TM3_DRAFT_U16(a1 + 8) = TM3_DRAFT_U8(v4 + 13);
  v5 = sub_80048078(28) != 0;
  result = 0;
  if ( !v5 )
  {
    if ( TM3_DRAFT_U16(a1 + 8) != 255 )
    {
      if ( TM3_DRAFT_U8(a1) && TM3_DRAFT_U8(a1) != 15 )
        TM3_DRAFT_U16(a1 + 8) = 30 * ((TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 270) * TM3_DRAFT_U16(a1 + 8) + 2048) >> 12);
      else
        TM3_DRAFT_U16(a1 + 8) = 0;
    }
    if ( !TM3_DRAFT_U8(a1) || (v7 = 0, TM3_DRAFT_U8(a1) == 15) )
    {
      v5 = sub_80048078(26) != 0;
      result = 0;
      if ( v5 )
        return result;
      if ( sub_80048078(25) && TM3_DRAFT_U32(0x800D295Cu) == 1 )
        TM3_DRAFT_U16(a1 + 8) = 255;
    }
    else
    {
      if ( sub_80048078(17) )
      {
        TM3_DRAFT_U16(0x8008A468u) = 6;
        v7 = 1;
      }
      if ( sub_80048078(18) )
        TM3_DRAFT_U16(2 * v7++ - 2146917272) = 2;
      if ( sub_80048078(19) )
        TM3_DRAFT_U16(2 * v7++ - 2146917272) = 3;
      if ( sub_80048078(20) )
        TM3_DRAFT_U16(2 * v7++ - 2146917272) = 7;
      if ( v7 )
        TM3_DRAFT_U8(a1) = TM3_DRAFT_U8(2 * ((int)sub_80039FD4() % v7) - 2146917272);
    }
    v8 = TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 48) + 16);
    if ( v8 < 0 )
    {
      TM3_DRAFT_U8(a1 + 1u * (1)) = 2;
    }
    else
    {
      v9 = 316 * v8 + TM3_DRAFT_U32(0x80089CA4u);
      v10 = TM3_DRAFT_U32(v9 + 296);
      v11 = 0;
      if ( v10 )
      {
        v12 = TM3_DRAFT_U32(v9 + 296);
        while ( 1 )
        {
          v5 = TM3_DRAFT_U32(v12) == 0;
          v12 += 4u;
          if ( v5 )
            break;
          ++v11;
        }
      }
      v13 = sub_8004A000(4 * (v11 + 2));
      v14 = v13;
      if ( v13 )
      {
        v15 = (uint32)v10;
        if ( v10 )
        {
          while ( TM3_DRAFT_U32(v15) )
          {
            TM3_DRAFT_U32(v14) = TM3_DRAFT_U32(v15);
            v14 += 4u;
            v15 += 4u;
          }
        }
        TM3_DRAFT_U32(v14) = a1;
        TM3_DRAFT_U32(v14 + 4u * (1)) = 0;
        if ( v10 )
          sub_8004A0F8(v10);
        TM3_DRAFT_U32(316 * TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 48) + 16) + TM3_DRAFT_U32(0x80089CA4u) + 296) = v13;
        TM3_DRAFT_U8(a1 + 1u * (1)) = 0;
      }
    }
    v16 = TM3_DRAFT_U32(a1 + 48);
    TM3_DRAFT_U16(a1 + 4) = 0;
    TM3_DRAFT_U16(a1 + 2) = 1 - ((1 - TM3_DRAFT_U8(v16 + 14)) & ((1 - TM3_DRAFT_U8(v16 + 14)) >> 31));
    TM3_DRAFT_U32(a1 + 16) = 0;
    TM3_DRAFT_U32(a1 + 24) = 0;
    TM3_DRAFT_U32(a1 + 12) = 4096;
    TM3_DRAFT_U32(a1 + 20) = 4096;
    TM3_DRAFT_U16(a1 + 28) = 4096;
    v17 = sub_80039FD4();
    v18 = v17 >> 10;
    if ( v17 < 0 )
      v18 = (v17 + 1023) >> 10;
    v19 = (uint32)TM3_DRAFT_U32(a1 + 48);
    TM3_DRAFT_U16(a1 + 6) = v17 - ((uint16)v18 << 10);
    v20 = TM3_DRAFT_U16(v19 + 2u * (2));
    v21 = TM3_DRAFT_U16(v19 + 2u * (3));
    LOWORD(v19) = TM3_DRAFT_U16(v19 + 2u * (4));
    TM3_DRAFT_U16(a1 - 10) = v20;
    v22 = a1 - 20;
    TM3_DRAFT_U16(v22 + 2) = v21;
    TM3_DRAFT_U16(v22 + 4) = (uint16)v19;
    v23 = (uint32)TM3_DRAFT_U32(a1 + 48);
    v24 = TM3_DRAFT_U8(a1);
    TM3_DRAFT_U32(a1 + 32) = TM3_DRAFT_U16(v23 + 2u * (2));
    TM3_DRAFT_U32(a1 + 36) = TM3_DRAFT_U16(v23 + 2u * (3));
    v25 = TM3_DRAFT_U16(v23 + 2u * (4));
    v26 = TM3_DRAFT_U8(a1);
    TM3_DRAFT_U32(a1 - 6) = 40;
    TM3_DRAFT_U32(a1 + 44) = TM3_DRAFT_U32(0x80089CF8u) + 8 * v26;
    TM3_DRAFT_U32(a1 + 40) = v25;
    if ( !v24 || (result = 1, v24 == 15) )
    {
      v5 = sub_80048078(27) != 0;
      result = 1;
      if ( !v5 )
      {
        sub_80017A48(a1);
        return 1;
      }
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003EA38(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x8003EA38u, "SCUS_942.49");
  int v8; 
  int v9; 
  int result; 
  int v11; 
  int v12; 
  int v13; 
  char v14; 
  sint16 v15; 
  sint16 v16; 
  int v17; 
  sint16 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 

  if ( TM3_DRAFT_U8(a2 + 1) == 128 )
  {
    v8 = 0;
    v9 = 2;
    while ( a3 < a4 )
    {
      a3 = sub_8003EA38(a1 + v8++, a2 + v9, a3, a4);
      v9 += 8;
      if ( v8 >= 4 )
        return a3;
    }
    return a3;
  }
  else
  {
    switch ( sub_80063F08(a1) )
    {
      case 0:
        TM3_DRAFT_U8(28 * (4 * (a1 >> 4) + (a1 & 0xF)) - 2146624480 + 3) = 1;
        return a3;
      case 1:
        TM3_DRAFT_U8(28 * (4 * (a1 >> 4) + (a1 & 0xF)) - 2146624480 + 3) = 1;
        goto LABEL_34;
      case 6:
        if ( sub_80063FD4(a1, 2, 0) )
        {
          v11 = 28 * (4 * (a1 >> 4) + (a1 & 0xF)) - 2146624480;
          if ( TM3_DRAFT_U8(v11 + 3) )
          {
            sub_80064248(a1, 0x80089814u);
            sub_800642C8(a1, v11, 2);
            TM3_DRAFT_U8(v11 + 3) = 0;
          }
          if ( TM3_DRAFT_U8(v11 + 2) )
          {
            if ( (uint32)sub_80039FC8() >= TM3_DRAFT_U32(v11 + 4) )
            {
              TM3_DRAFT_U8(v11) = 0;
              TM3_DRAFT_U32(v11 + 4) = -1;
            }
            if ( (uint32)sub_80039FC8() >= TM3_DRAFT_U32(v11 + 8) )
            {
              if ( (uint32)sub_80039FC8() < TM3_DRAFT_U32(v11 + 16) )
              {
                TM3_DRAFT_U8(v11 + 1) = TM3_DRAFT_U8(v11 + 24)
                                    + ((uint32)(TM3_DRAFT_U32(v11 + 20) * (sub_80039FC8() - TM3_DRAFT_U32(v11 + 12))) >> 12);
                TM3_DRAFT_U32(v11 + 8) = sub_80039FC8() + 1;
              }
              else
              {
                TM3_DRAFT_U32(v11 + 8) = -1;
                TM3_DRAFT_U8(v11 + 1) = 0;
                TM3_DRAFT_U16(v11 + 26) = 255;
              }
            }
          }
        }
        goto LABEL_20;
      default:
LABEL_20:
        v12 = 24 * a3;
        v13 = 24 * a3 - 2146624256;
        TM3_DRAFT_U32(v13 + 20) = 0;
        TM3_DRAFT_U8(v13 + 13) = 0;
        v14 = TM3_DRAFT_U8(a2 + 1);
        v15 = TM3_DRAFT_U16(v13);
        TM3_DRAFT_U8(v13 + 14) = a1;
        TM3_DRAFT_U8(v13 + 12) = v14;
        TM3_DRAFT_U16(v13 + 6) = v15;
        v16 = ~_byteswap_ushort(TM3_DRAFT_U16(a2 + 2));
        v17 = TM3_DRAFT_U8(v13 + 12);
        v18 = v16;
        if ( v17 == 65 )
        {
          v22 = v12 - 2146624256;
          TM3_DRAFT_U16(v22 + 2) = 0;
          TM3_DRAFT_U16(v22 + 4) = 0;
        }
        else if ( TM3_DRAFT_U8(v13 + 12) >= 0x42u )
        {
          if ( v17 == 115 )
          {
            v21 = v12 - 2146624256;
            TM3_DRAFT_U16(v21 + 2) = TM3_DRAFT_U16(a2 + 4);
            TM3_DRAFT_U16(v21 + 4) = TM3_DRAFT_U16(a2 + 6);
            TM3_DRAFT_U8(v13 + 13) = 2;
          }
        }
        else if ( v17 == 35 )
        {
          v19 = v12 - 2146624256;
          TM3_DRAFT_U16(v19 + 2) = TM3_DRAFT_U16(a2 + 4);
          TM3_DRAFT_U16(v19 + 4) = TM3_DRAFT_U16(a2 + 6);
          v20 = v16 & 0x20;
          if ( TM3_DRAFT_U8(v13 + 5) >= 0x61u )
          {
            v18 = v16 | 4;
            v20 = v16 & 0x20;
          }
          if ( v20 )
            v18 = v18 & 0xFF9E | 0x40;
          TM3_DRAFT_U8(v13 + 13) = 1;
        }
        TM3_DRAFT_U16(24 * a3 - 2146624256) = v18;
LABEL_34:
        result = a3 + 1;
        break;
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80027FE0(uint32 a1, uint32 a2)
{
    uint32 original_local_words[8];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x80027FE0u, "SCUS_942.49");
  int v3; 
  uint32 v4; 
  uint32 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  sint16 v13; 
  uint32 v14; 
  uint32 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  sint16 v27; 
  sint16 v28; 
  int v29; 
  int v30; 
  uint32 v31; 
  int v32; 
  uint32 v33; 
  uint32 v34; 
  int v35; 
  int v36; 
  int v37; 

  v3 = a2 + 4;
  v4 = TM3_DRAFT_U32(v3 - 4);
  v3 += 4;
  v5 = TM3_DRAFT_U32(v3 - 4);
  v3 += 4;
  v6 = TM3_DRAFT_I16(v3 - 4);
  v3 += 4;
  TM3_DRAFT_U16(a1 + 140) = 8 - ((8 - v6) & ((8 - v6) >> 31));
  v7 = TM3_DRAFT_I16(v3 - 4);
  v3 += 4;
  TM3_DRAFT_U16(a1 + 142) = -(-(sint16)v7 & (-v7 >> 31));
  v8 = TM3_DRAFT_I16(v3 - 4);
  v3 += 4;
  TM3_DRAFT_U16(a1 + 144) = 32 - ((32 - v8) & ((32 - v8) >> 31));
  v9 = TM3_DRAFT_U32(v3 - 4);
  v3 += 4;
  TM3_DRAFT_U32(a1 + 136) = 1 - ((1 - v9) & ((1 - v9) >> 31));
  v10 = TM3_DRAFT_U32(v3 - 4);
  v11 = v3 + 4;
  TM3_DRAFT_U32(a1 + 224) = v10;
  v12 = TM3_DRAFT_U32(v11 - 4);
  if ( v12 )
  {
    v13 = TM3_DRAFT_U16(v12 + 4);
    TM3_DRAFT_U32(a1 + 252) = TM3_DRAFT_U32(v12);
    TM3_DRAFT_U16(a1 + 256) = v13;
    TM3_DRAFT_U16(a1 + 258) = 1;
  }
  else
  {
    TM3_DRAFT_U16(a1 + 256) = 0;
    TM3_DRAFT_U16(a1 + 254) = 0;
    TM3_DRAFT_U16(a1 + 252) = 0;
    TM3_DRAFT_U16(a1 + 258) = 0;
  }
  v14 = (uint32)(v11 + 4);
  v15 = (uint32)TM3_DRAFT_U32(v14 - 2);
  v14 += 2u * (2);
  v16 = TM3_DRAFT_U32(v14 - 2);
  v14 += 2u * (2);
  TM3_DRAFT_U32(a1 + 272) = v16;
  v17 = TM3_DRAFT_U32(v14 - 2);
  v14 += 2u * (2);
  TM3_DRAFT_U32(a1 + 248) = v17;
  v18 = TM3_DRAFT_U32(v14 - 2);
  v14 += 2u * (2);
  TM3_DRAFT_U32(a1 + 148) = v18;
  v19 = TM3_DRAFT_U32(v14 - 2);
  v20 = TM3_DRAFT_U32(a1 + 148);
  TM3_DRAFT_U32(a1 + 152) = v19;
  TM3_DRAFT_U16(a1 + 264) = TM3_DRAFT_U16(v14);
  TM3_DRAFT_U32(a1 + 156) = (v20 + v19) / 4;
  if ( v15 )
  {
    v21 = TM3_DRAFT_U32(v15 + 4u * (1));
    v22 = TM3_DRAFT_U32(v15 + 4u * (2));
    v23 = TM3_DRAFT_U32(v15 + 4u * (3));
    TM3_DRAFT_U32(a1 + 276) = TM3_DRAFT_U32(v15);
    TM3_DRAFT_U32(a1 + 280) = v21;
    TM3_DRAFT_U32(a1 + 284) = v22;
    TM3_DRAFT_U32(a1 + 288) = v23;
    v24 = TM3_DRAFT_U32(v15 + 4u * (5));
    v25 = TM3_DRAFT_U32(v15 + 4u * (6));
    v26 = TM3_DRAFT_U32(v15 + 4u * (7));
    TM3_DRAFT_U32(a1 + 292) = TM3_DRAFT_U32(v15 + 4u * (4));
    TM3_DRAFT_U32(a1 + 296) = v24;
    TM3_DRAFT_U32(a1 + 300) = v25;
    TM3_DRAFT_U32(a1 + 304) = v26;
  }
  else
  {
    TM3_DRAFT_U32(a1 + 280) = 0;
    TM3_DRAFT_U32(a1 + 288) = 0;
    TM3_DRAFT_U32(a1 + 276) = 4096;
    TM3_DRAFT_U32(a1 + 284) = 4096;
    TM3_DRAFT_U16(a1 + 292) = 4096;
  }
  TM3_DRAFT_U32(a1 + 296) = TM3_DRAFT_U16(v4);
  TM3_DRAFT_U32(a1 + 300) = TM3_DRAFT_U16(v4 + 2u * (1));
  TM3_DRAFT_U32(a1 + 304) = TM3_DRAFT_U16(v4 + 2u * (2));
  v27 = TM3_DRAFT_U16(v4 + 2u * (1));
  v28 = TM3_DRAFT_U16(v4 + 2u * (2));
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U16(v4);
  v29 = a1 - 20;
  TM3_DRAFT_U16(v29 + 2) = v27;
  TM3_DRAFT_U16(v29 + 4) = v28;
  v30 = TM3_DRAFT_I16(a1 + 144);
  TM3_DRAFT_U32(a1 - 24) = 1;
  TM3_DRAFT_U16(a1 + 128) = 0;
  TM3_DRAFT_U16(a1 + 130) = 0;
  TM3_DRAFT_U16(a1 + 146) = 16 - ((16 - v30 / 4) & ((16 - v30 / 4) >> 31));
  v31 = (uint32)a1;
  v32 = 0;
  v33 = TM3_DRAFT_U32(0x80081E38u);
  v34 = TM3_DRAFT_U32(0x80081E38u);
  TM3_DRAFT_U32(a1 + 132) = ((uint8)((uint8)BYTE2(TM3_DRAFT_U32(v5)) / TM3_DRAFT_I32(a1 + 136)) << 16) | ((uint8)((uint8)BYTE1(TM3_DRAFT_U32(v5)) / TM3_DRAFT_I32(a1 + 136)) << 8) | (uint8)((uint8)TM3_DRAFT_U32(v5) / TM3_DRAFT_I32(a1 + 136));
  do
  {
    TM3_DRAFT_U16(v31) = HIWORD(TM3_DRAFT_U32(0x80081E38u + 4u * (abs32(v32 << 7))));
    if ( (v32 & 0x1000000) != 0 )
      LOWORD(v35) = TM3_DRAFT_U16(v33);
    else
      v35 = -TM3_DRAFT_I16(v34);
    TM3_DRAFT_U16(v31 + 2u * (1)) = v35;
    v33 -= 128;
    v34 += 4u * (128);
    ++v32;
    v31 += 2u * (2);
  }
  while ( v32 < 32 );
  v36 = 15;
  v37 = a1 + 60;
  do
  {
    TM3_DRAFT_U32(v37 + 160) = 0;
    --v36;
    v37 -= 4;
  }
  while ( v36 >= 0 );
  TM3_DRAFT_U16(a1 + 260) = 26;
  TM3_DRAFT_U16(a1 + 262) = 1200;
  sub_8004A294(22, TM3_DRAFT_I16(a1 + 260), 22, TM3_DRAFT_U16(v4), TM3_DRAFT_U16(v4 + 2u * (1)), TM3_DRAFT_U16(v4 + 2u * (2)), TM3_DRAFT_I16(a1 + 262));
  TM3_DRAFT_U32(a1 + 268) = TM3_DRAFT_U32(v5);
  return sub_800288AC((uint32)(a1 + 228), v4, a1);
}


