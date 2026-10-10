#include "game_draft_signatures.h"

/* Unverified C draft, no equivalence or build claim */

uint32 sub_8004A66C(void)
{
    FUNCTION_MARKER(0x8004A66Cu, "SCUS_942.49");
    sub_8004A5A0();
    sub_8004A5D8(0x80089894u);
    return sub_8004A5D8(0x80089898u);
}

uint32 sub_80049F50(uint32 a1)
{
    FUNCTION_MARKER(0x80049F50u, "SCUS_942.49");
    uint32 result = r_u32(a1) + 1u;
    if ((r_u32(a1) & 3u) != 0u)
    {
        do
        {
            w_u32(a1, result);
        } while ((result++ & 3u) != 0u);
    }
    return result;
}

void sub_80038A10(uint32 a1)
{
    FUNCTION_MARKER(0x80038A10u, "SCUS_942.49");
    sint32 value = (sint32)r_u32(a1 + 8u);
    /* Cleanup caller discards the volatile return register */
    if (value >= 0)
        sub_80040804((uint32)value);
}

uint32 sub_8004A4E4(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004A4E4u, "SCUS_942.49");
    if (a2 == 0u)
        return 0u;
    for (;;)
    {
        if (a2 == a1)
            return 1u;
        a2 = r_u32(a2 + 8u);
        if (a2 == 0u)
            return 0u;
    }
}

uint32 sub_8002E668(uint32 a1)
{
    FUNCTION_MARKER(0x8002E668u, "SCUS_942.49");
    uint32 table = r_u32(a1 + 156u);
    /* The descriptor update receives the same object in A0 */
    return tm3_draft_indirect(r_u32(table + 8u), 1u, a1);
}

uint32 sub_80039FD4(void)
{
    FUNCTION_MARKER(0x80039FD4u, "SCUS_942.49");
    uint32 value = r_u32(0x80089da0u) * 1103515245u + 12345u;
    w_u32(0x80089da0u, value);
    return (value >> 16) & 0x7fffu;
}

uint32 sub_80052978(void)
{
    FUNCTION_MARKER(0x80052978u, "SCUS_942.49");
    return (sint32)(r_u32(0x800d28b8u) + r_u32(0x800d28bcu) + r_u32(0x800d2968u)) >= 2;
}

uint32 sub_8005ADC4(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8005ADC4u, "SCUS_942.49");
    uint32 value = r_u8(a1 + 7u);
    value = a2 != 0u ? value | 1u : value & 0xfeu;
    w_u8(a1 + 7u, value);
    return value;
}

uint32 sub_8005AD94(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8005AD94u, "SCUS_942.49");
    uint32 value = r_u8(a1 + 7u);
    value = a2 != 0u ? value | 2u : value & 0xfdu;
    w_u8(a1 + 7u, value);
    return value;
}

uint32 sub_80020608(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    FUNCTION_MARKER(0x80020608u, "SCUS_942.49");
    return sub_800205A4(a1 + a3, a2, a4);
}

uint32 sub_800607C4(void)
{
    FUNCTION_MARKER(0x800607C4u, "SCUS_942.49");
    return sub_800607E4(0u);
}

uint32 sub_8002C0F8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8002C0F8u, "SCUS_942.49");
    return sub_8002C050(a1, a2, 0u);
}

uint32 sub_80040DA8(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80040DA8u, "SCUS_942.49");
    return sub_80040D40(a1, a2, a2);
}

uint32 sub_8002C138(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8002C138u, "SCUS_942.49");
    return sub_8002C050(a1, a2, 1u);
}

uint32 sub_8004A1CC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004A1CCu, "SCUS_942.49");
    w_u32(a1 + 4u, 0u);
    uint32 result = r_u32(a2);
    uint32 empty = r_u32(a2) == 0u;
    w_u32(a1 + 8u, r_u32(a2));
    if (!empty)
        w_u32(result + 4u, a1);
    w_u32(a2, a1);
    return result;
}

uint32 sub_800266B4(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x800266B4u, "SCUS_942.49");
    return a2 == r_u32(a1 + 4384u) + 4u ? 0x1f800080u : 0u;
}

void sub_80056444(void)
{
    FUNCTION_MARKER(0x80056444u, "SCUS_942.49");
    xport_bios_exit_critical();
}

uint32 sub_80040388(uint32 a1)
{
    FUNCTION_MARKER(0x80040388u, "SCUS_942.49");
    return (uint32)(sint32)(sint16)r_u16(16u * a1 + 0x800d1fe8u + 4u);
}

uint32 sub_8005AE74(uint32 a1)
{
    FUNCTION_MARKER(0x8005AE74u, "SCUS_942.49");
    w_u8(a1 + 3u, 12u);
    w_u8(a1 + 7u, 60u);
    return 60u;
}

uint32 sub_80062474(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80062474u, "SCUS_942.49");
    uint32 result = r_u32(0x80087c48u);
    w_u16(result + 432u, a1);
    w_u16(result + 434u, a2);
    return result;
}

uint32 sub_8005AE54(uint32 a1)
{
    FUNCTION_MARKER(0x8005AE54u, "SCUS_942.49");
    w_u8(a1 + 3u, 8u);
    w_u8(a1 + 7u, 56u);
    return 56u;
}

uint32 sub_80040AD8(void)
{
    FUNCTION_MARKER(0x80040AD8u, "SCUS_942.49");
    uint32 result = r_u32(0x80089834u);
    w_u32(0x80089830u, r_u32(0x80089834u));
    return result;
}

uint32 sub_800435F0(void)
{
    FUNCTION_MARKER(0x800435F0u, "SCUS_942.49");
    return r_u32(0x80089858u) - 1u;
}

uint32 sub_80039FC8(void)
{
    FUNCTION_MARKER(0x80039FC8u, "SCUS_942.49");
    return r_u32(0x80089780u);
}

void sub_80040898(uint32 a1)
{
    FUNCTION_MARKER(0x80040898u, "SCUS_942.49");
    w_u32(0x8008982cu, a1);
}

void sub_80025F0C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80025F0Cu, "SCUS_942.49");
    w_u32(a1 + 52u, a2);
}

void sub_80027A50()
{
    FUNCTION_MARKER(0x80027A50u, "SCUS_942.49");
    /* Original function has no body */
}

void sub_80015904()
{
    FUNCTION_MARKER(0x80015904u, "SCUS_942.49");
    /* Original function has no body */
}

uint32 sub_8003E0FC(uint32 a1)
{
    FUNCTION_MARKER(0x8003E0FCu, "SCUS_942.49");
    uint32 base = a1 != 0u ? a1 : 0x8008980cu;
    w_u32(0x80089de0u, base);
    w_u32(0x80089de4u, base + 8u);
    w_u32(0x80089de8u, base + 8u + 176u * r_u8(base));
    w_u32(0x80089dd8u, r_u32(0x80089de8u) + (r_u8(base + 1u) << 7));
    uint32 result = 196u * r_u8(base + 2u);
    w_u32(0x80089ddcu, r_u32(0x80089dd8u) + result);
    return result;
}

uint32 sub_8001A8C4(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8001A8C4u, "SCUS_942.49");
    for (sint32 i = (sint32)r_u32(0x800d2e98u) - 1; i >= 0; --i)
        w_u32(r_u32(a1 + 3440u) + (uint32)i * 4u, 0u);
    uint32 old = r_u32(a1 + 3684u);
    if (old != 0u)
        w_u8(old + 3700u, r_u8(old + 3700u) - 1u);
    w_u32(a1 + 3684u, a2);
    w_u32(a1 + 3688u, a3);
    uint32 result;
    if (a2 != 0u)
    {
        w_u8(a2 + 3700u, r_u8(a2 + 3700u) + 1u);
        result = r_u16(r_u32(a1 + 3684u) + 3386u);
    }
    else
        result = 0xffffffffu;
    w_u16(a1 + 3702u, result);
    return result;
}

void sub_8001C2E0(uint32 a1)
{
    FUNCTION_MARKER(0x8001C2E0u, "SCUS_942.49");
    sint32 saved = (sint16)r_u16(a1 + 3702u);
    if (saved >= 0)
    {
        sint32 current = (sint16)r_u16(r_u32(a1 + 3684u) + 3386u);
        if (current >= 0 && current != saved && sub_8001BD70(a1, (uint32)current))
            w_u16(a1 + 3702u, r_u16(r_u32(a1 + 3684u) + 3386u));
    }
}

uint32 sub_80034750(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80034750u, "SCUS_942.49");
    for (uint32 i = 0u; i < 16u; ++i)
    {
        uint32 object = r_u32(a1 + 40u + i * 4u);
        if (object != 0u)
            sub_8004A570(object);
    }
    uint32 object = r_u32(a1 + 4u);
    if (object != 0u)
        sub_8004A570(object);
    if (r_u32(a1) == 0u)
    {
        w_u8(0x80089d20u, 255u);
        w_u8(0x80089d21u, 255u);
        w_u8(0x80089d22u, 255u);
        w_u32(0x80089838u, 0u);
    }
    return 255u;
}

uint32 sub_8004A914(uint32 a1)
{
    FUNCTION_MARKER(0x8004A914u, "SCUS_942.49");
    uint32 result = sub_8004A874(a1);
    uint32 node = result;
    if (node != 0u)
    {
        if (r_u32(node + 12u) == 0u && r_u32(node + 16u) == 0u)
        {
            uint32 head = r_u32(0x8008989cu);
            w_u32(0x8008989cu, node);
            w_u32(node + 20u, head);
        }
        if (r_u32(a1 + 44u) != 0u)
        {
            w_u32(a1 + 12u, r_u32(node + 12u));
            w_u32(node + 12u, a1);
        }
        result = r_u32(a1 + 36u);
        if (result != 0u)
        {
            result = r_u32(node + 16u);
            w_u32(a1 + 16u, result);
            w_u32(node + 16u, a1);
        }
    }
    return result;
}

uint32 sub_8004AF28(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004AF28u, "SCUS_942.49");
    if (r_u16(a2 + 106u) == 0u)
        return sub_8004AAD4(a1, a2);
    uint32 vector = a1 + 1556u;
    if (r_u32(a2 + 160u) != a1 || r_u32(a2 + 148u) >= 16u)
    {
        w_u32(a2 + 88u, a1);
        uint32 x = r_u32(vector), y = r_u32(vector + 4u), z = r_u32(vector + 8u);
        w_u32(a2 + 92u, x);
        w_u32(a2 + 96u, y);
        w_u32(a2 + 100u, z);
    }
    return 1u;
}

uint32 sub_800205A4(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800205A4u, "SCUS_942.49");
    sint32 value = (sint32)sub_80015684(a1, a3, 18u);
    if (value == 0)
        return (a2 != 0u) << 18;
    sint32 scaled = (sint32)sub_80015684(0u - a2, (uint32)(0x40000000 / value), 12u);
    return scaled >= 0 ? (uint32)scaled : 0x40000u;
}

uint32 sub_80015684(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80015684u, "SCUS_942.49");
    sint64 product = (sint64)(sint32)a1 * (sint32)a2;
    uint32 low = (uint32)product, high = (uint32)((uint64)product >> 32);
    uint32 shifted_low = low >> ((a3 - 1u) & 31u);
    return ((shifted_low >> 1u) | (high << ((32u - a3) & 31u))) + (shifted_low & 1u);
}

uint32 sub_80015764(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80015764u, "SCUS_942.49");
    sint32 x = (sint32)((sint32)a1 < 0 ? 0u - a1 : a1);
    sint32 y = (sint32)((sint32)a2 < 0 ? 0u - a2 : a2);
    sint32 z = (sint32)((sint32)a3 < 0 ? 0u - a3 : a3);
    if (z < x)
    {
        sint32 t = x;
        x = z;
        z = t;
    }
    if (y < x)
    {
        sint32 t = x;
        x = y;
        y = t;
    }
    if (z < y)
    {
        sint32 t = y;
        y = z;
        z = t;
    }
    /* TODO Preserve original abs and signed-add overflow behavior during integration */
    return (uint32)z + (uint32)(y / 2) + (uint32)(x / 4);
}

uint32 sub_80013A90(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80013A90u, "SCUS_942.49");
    sint64 product = (sint64)(sint32)TM3_DRAFT_U32(a1) * (sint16)TM3_DRAFT_U16(a2) + (sint64)(sint32)TM3_DRAFT_U32(a1 + 4u) * (sint16)TM3_DRAFT_U16(a2 + 2u) + (sint64)(sint32)TM3_DRAFT_U32(a1 + 8u) * (sint16)TM3_DRAFT_U16(a2 + 4u);
    return (uint32)(product >> 12) + (((uint32)product >> 11) & 1u);
}

uint32 sub_80040028(void)
{
    FUNCTION_MARKER(0x80040028u, "SCUS_942.49");
    sub_8005D214();
    for (uint32 i = 0u; i < 4u; ++i)
        sub_8005FA24(0u);
    sub_8005D468(0u, 0u);
    for (uint32 i = 0u; i < 4u; ++i)
        sub_8005FA24(0u);
    return 0u;
}

uint32 sub_8003177C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8003177Cu, "SCUS_942.49");
    uint32 object = r_u32(a1 + 4256u);
    if (object != 0u)
    {
        sub_8002DEA4(object);
        w_u32(a1 + 4256u, 0u);
    }
    else
        w_u32(a1 + 4256u, sub_80033754(a1, r_u32(a1 + 3968u), a2));
    return r_u32(a1 + 4256u);
}

uint32 sub_8003E7D4(void)
{
    FUNCTION_MARKER(0x8003E7D4u, "SCUS_942.49");
    for (uint32 i = 0u, record = 0x800d1c20u; i < 8u; ++i, record += 28u)
    {
        w_u8(record, 0u);
        w_u8(record + 1u, 0u);
        w_u8(record + 2u, 0u);
        w_u32(record + 4u, 0xffffffffu);
        w_u32(record + 8u, 0xffffffffu);
        w_u32(record + 12u, 0xffffffffu);
        w_u32(record + 16u, 0xffffffffu);
        w_u16(record + 24u, 0u);
        w_u32(record + 20u, 0u);
        w_u16(record + 26u, 255u);
    }
    return 0u;
}

uint32 sub_8004A1EC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004A1ECu, "SCUS_942.49");
    uint32 previous = r_u32(a1 + 4u);
    if (previous != 0u)
        w_u32(previous + 8u, r_u32(a1 + 8u));
    uint32 next = r_u32(a1 + 8u);
    if (next != 0u)
        w_u32(next + 4u, r_u32(a1 + 4u));
    uint32 result = r_u32(a2);
    if (r_u32(a2) == a1)
    {
        result = r_u32(a1 + 8u);
        w_u32(a2, result);
    }
    return result;
}

uint32 sub_80061764(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x80061764u, "SCUS_942.49");
    uint32 count = a2 > 0x7eff0u ? 520176u : a2;
    sub_80061188(a1, count);
    if (r_u32(0x80087c80u) == 0u)
        w_u32(0x80087c7cu, 0u);
    return count;
}

uint32 sub_80028A3C(uint32 a1)
{
    FUNCTION_MARKER(0x80028A3Cu, "SCUS_942.49");
    sub_80028B0C(a1);
    for (uint32 i = 0u; i < 4u; ++i)
        sub_8004A570(r_u32(a1 + (i + 1u) * 4u));
    return 0u;
}

uint32 sub_800452C4(void)
{
    FUNCTION_MARKER(0x800452C4u, "SCUS_942.49");
    if (r_u32(0x800d2f2cu) == 0u)
        return sub_800451B0();
    if (r_u32(0x800d2f2cu) == 1u)
        return sub_8004524C();
    return 1u;
}

uint32 sub_80033CB4(uint32 a1)
{
    FUNCTION_MARKER(0x80033CB4u, "SCUS_942.49");
    uint32 kind = r_u32(a1 + 3968u);
    return kind == 5u || kind == 8u || kind == 11u || (kind == 15u && r_u32(a1 + 4372u) == 0x800321f4u);
}

uint32 sub_800565A4(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800565A4u, "SCUS_942.49");
    for (;;)
    {
        uint32 value = r_u8(a1++);
        if (value != r_u8(a2))
            break;
        --a3;
        ++a2;
        if ((sint32)a3 <= 0)
            return 0u;
    }
    return r_u8(a1 - 1u) - r_u8(a2);
}

uint32 sub_800347F8(uint32 a1)
{
    FUNCTION_MARKER(0x800347F8u, "SCUS_942.49");
    uint32 result = 0xffffffffu;
    for (uint32 i = 0u; i < 16u; ++i, a1 += 4u)
    {
        uint32 object = r_u32(a1 + 40u);
        if (object != 0u)
        {
            if (r_u32(object + 68u) == 0u)
                return i;
        }
        else
            result = i;
    }
    return result;
}

uint32 sub_800470DC(uint32 a1)
{
    FUNCTION_MARKER(0x800470DCu, "SCUS_942.49");
    if ((sint32)r_u32(0x800d340cu) <= 0)
        return 0u;
    uint32 pointer = 0x800d2e88u;
    for (uint32 i = 1u;; ++i, pointer += 4u)
    {
        if (r_u32(pointer + 1424u) == a1)
            return 1u;
        if ((sint32)i >= (sint32)r_u32(0x800d340cu))
            return 0u;
    }
}

uint32 sub_8002F774(uint32 a1)
{
    FUNCTION_MARKER(0x8002F774u, "SCUS_942.49");
    uint32 result = sub_800470DC(r_u32(a1 + 36u));
    return result == 0u ? sub_8004A570(a1) : result;
}

uint32 sub_8001AE3C(uint32 a1)
{
    FUNCTION_MARKER(0x8001AE3Cu, "SCUS_942.49");
    if ((sint16)r_u16(a1 + 3386u) >= 0)
        return 0u;
    if (r_u32(a1 + 3324u) == 0u)
        w_u32(a1 + 3324u, r_u32(a1 + 3320u));
    return 0x8001d390u;
}

uint32 sub_8004A0BC(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8004A0BCu, "SCUS_942.49");
    uint32 count = r_u32(a1 + 4u);
    uint32 result = a1 + count * 8u;
    if (result == a2)
    {
        w_u32(a1 + 4u, count + r_u32(a2 + 4u));
        result = r_u32(a2);
        w_u32(a1, r_u32(a2));
    }
    else
        w_u32(a1, a2);
    return result;
}

uint32 sub_80053E14(void)
{
    FUNCTION_MARKER(0x80053E14u, "SCUS_942.49");
    uint32 result;
    if (r_u32(0x800d295cu) != 0u || (result = r_u32(0x800d296cu)) == 0u)
    {
        uint32 index = r_u32(0x80089becu);
        uint32 slot = index * 4u + 0x800d28b8u + 24u;
        uint32 value = sub_8004EB10(r_u32(slot), 0u, 15u, 1u);
        uint32 first = r_u32(0x80089becu), second = r_u32(0x80089becu);
        w_u32(r_u32(0x80089becu) * 4u + 0x800d28b8u + 24u, value);
        return sub_80053A3C(first, second);
    }
    return result;
}

uint32 sub_80065CEC(uint32 a1)
{
    FUNCTION_MARKER(0x80065CECu, "SCUS_942.49");
    /* TODO Resolve the original allocator function pointer during integration */
    uint32 result = tm3_draft_indirect(r_u32(0x80087dc4u), 1u, a1);
    uint32 buffer = r_u32(a1 + 60u);
    w_u32(0x80087e2cu, result);
    w_u8(buffer, 0u);
    return sub_80064BA0(a1, 0xfffffffeu);
}

uint32 sub_80065E0C(uint32 a1)
{
    FUNCTION_MARKER(0x80065E0Cu, "SCUS_942.49");
    if (r_u32(0x80087e2cu) != 0u)
    {
        /* TODO Resolve the original allocator function pointer */
        tm3_draft_indirect(r_u32(0x80087dc4u), 1u, r_u32(a1 + 12u) + 480u);
        tm3_draft_indirect(r_u32(0x80087dc4u), 1u, r_u32(a1 + 12u) + 720u);
    }
    uint32 mode = r_u8(a1 + 55u) == 0u ? r_u32(0x80087df8u) & 255u : 0u;
    sint32 result = (sint32)sub_80064DB0(a1, mode);
    if (result >= 0)
    {
        uint32 count = 2u * ((uint32)result & 15u);
        w_u32(0x80087e24u, count);
        result = 0;
        if (r_u32(0x80087e24u) == 0u)
            w_u32(0x80087e24u, 32u);
    }
    return (uint32)result;
}

uint32 sub_8002647C(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8002647Cu, "SCUS_942.49");
    w_u32(0x1f8000b4u, (uint32)(sint32)(sint16)r_u16(a3 + 16u));
    w_u32(0x1f8000b8u, (uint32)(sint32)(sint16)r_u16(a3 + 18u));
    w_u32(0x1f8000bcu, (uint32)(sint32)(sint16)r_u16(a3 + 20u));
    sub_800143B0(r_u32(a1 + 4384u), 0x1f8000a0u);
    /* TODO Native GTE SDK argument bridge */
    sub_8005B614(0x1f800080u, 0x1f8000a0u, 0x1f8000a0u);
    return 0x1f8000a0u;
}

uint32 sub_80026554(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80026554u, "SCUS_942.49");
    w_u32(0x1f8000b4u, (uint32)(sint32)(sint16)r_u16(a3 + 16u));
    w_u32(0x1f8000b8u, (uint32)(sint32)(sint16)r_u16(a3 + 18u));
    w_u32(0x1f8000bcu, (uint32)(sint32)(sint16)r_u16(a3 + 20u));
    sub_8001434C(r_u32(a1 + 4384u), 0x1f8000a0u);
    /* TODO Native GTE SDK argument bridge */
    sub_8005B614(0x1f800080u, 0x1f8000a0u, 0x1f8000a0u);
    return 0x1f8000a0u;
}

uint32 sub_8002662C(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8002662Cu, "SCUS_942.49");
    uint32 source = a1 + (a2 == 4u ? 308u : 228u);
    uint32 destination = a2 == 4u ? 0x1f8000a0u : 0x1f8000c0u;
    sint32 x = (sint16)r_u16(a3 + 16u), y = (sint16)r_u16(a3 + 18u), z = (sint16)r_u16(a3 + 20u);
    sint32 offset = (sint8)r_u8(source + 19u);
    w_u32(destination + 20u, (uint32)x);
    w_u32(destination + 24u, (uint32)(y + offset));
    w_u32(destination + 28u, (uint32)z);
    sub_800142E4((uint32)(sint32)(sint16)r_u16(source + 44u), destination);
    /* TODO Native GTE SDK argument bridge */
    sub_8005B614(0x1f800080u, destination, destination);
    return destination;
}

uint32 sub_80043858(uint32 a1)
{
    FUNCTION_MARKER(0x80043858u, "SCUS_942.49");
    uint32 parameter = a1;
    uint8 saved = (uint8)a1;
    for (;;)
    {
        uint32 result = sub_8005D4D0(parameter, 0u, 0u);
        if (result != 0u)
            return result;
        sub_8005D214();
        sub_8005D468(0u, 0u);
        sub_8005FA24(30u);
        parameter = (parameter & 0xffffff00u) | saved;
    }
}

uint32 sub_8003FEFC(uint32 output, uint32 target)
{
    sint32 closest = 0x7FFFFFFF;
    FUNCTION_MARKER(0x8003FEFCu, "SCUS_942.49");
    w_u32(output, (uint32)(sint16)r_u16(0x8008981Cu));
    w_u32(output + 4u, (uint32)(sint16)r_u16(0x8008981Eu));
    w_u32(output + 8u, (uint32)(sint16)r_u16(0x80089820u));
    for (uint32 i = 0u; i < 128u; ++i)
    {
        uint32 table = r_u32(0x80089C98u), point = table + 0x2400u + 8u * i;
        if (r_u8(point + 6u) == 1u)
        {
            sint32 distance = (sint32)sub_80015764(r_u32(target) - (uint32)(sint16)r_u16(point), r_u32(target + 4u) - (uint32)(sint16)r_u16(point + 2u), r_u32(target + 8u) - (uint32)(sint16)r_u16(point + 4u));
            if (distance < closest)
            {
                point = r_u32(0x80089C98u) + 0x2400u + 8u * i;
                closest = distance;
                w_u32(output, (uint32)(sint16)r_u16(point));
                w_u32(output + 4u, (uint32)(sint16)r_u16(point + 2u));
                w_u32(output + 8u, (uint32)(sint16)r_u16(point + 4u));
            }
        }
    }
    return 0u;
}
