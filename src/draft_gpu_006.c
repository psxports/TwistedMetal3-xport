#include "game_draft_signatures.h"

/* Unverified listing-derived drafts */
uint32 sub_80030EA0(uint32 object, uint32 state)
{
    uint32 speed = TM3_DRAFT_U32(0x80089d18u);
    TM3_DRAFT_U32(state + 0x1004u) = (speed * 30u + 0x800u) >> 12;
    return sub_800276AC(object + 8u, 0u, 0x100u, 0u, 0u, 0xffffffffu);
}

uint32 sub_80046ECC(uint32 index, uint32 context)
{
    uint32 result = TM3_DRAFT_U32(0x800d2f30u);
    if (result)
    {
        result = (sint32)index < (sint32)TM3_DRAFT_U32(0x800d2e90u);
        if (result)
            result = sub_8004179C(context, 0x80088418u);
    }
    return result;
}

uint32 sub_8002E61C(uint32 object, uint32 mode)
{
    uint32 index = TM3_DRAFT_U8(object + 0x146u);
    uint32 value = TM3_DRAFT_U16(0x8008a7d8u + index * 2u);
    return sub_800276AC(object + 8u, 0u, value, mode, 0u, 0xffffffffu);
}

uint32 sub_800404CC(uint32 object, uint32 second, uint32 third, uint32 fourth, uint32 fifth)
{
    return sub_800403DC(object, 0u, second, third, fourth, fifth);
}

uint32 sub_80038480(uint32 object, uint32 second, uint32 third, uint32 fourth)
{
    return sub_80038398(object + 0x14u, object + 0x1cu, second, third, fourth);
}

uint32 sub_8004EB10(uint32 value, uint32 minimum, uint32 maximum, uint32 wrap)
{
    uint32 player, input;
    player = TM3_DRAFT_U32(0x80089becu);
    input = TM3_DRAFT_U16(0x800d1d08u + player * 24u);
    if ((input & 0x2000u) && (wrap || (sint32)value < (sint32)maximum))
    {
        ++value;
        sub_8004A294(0x16u, 0x12u, 0u);
    }
    if ((sint32)maximum < (sint32)value)
        value = minimum;
    player = TM3_DRAFT_U32(0x80089becu);
    input = TM3_DRAFT_U16(0x800d1d08u + player * 24u);
    if ((input & 0x8000u) && (wrap || (sint32)minimum < (sint32)value))
    {
        --value;
        sub_8004A294(0x16u, 0x12u, 0u);
    }
    if ((sint32)value < (sint32)minimum)
        value = maximum;
    return value;
}

uint32 sub_800523C4(uint32 context, uint32 unused, uint32 selected)
{
    char labels[4][8];
    uint32 addresses[4];
    uint32 count = sub_8005230C();
    uint32 index;
    (void)unused;
    /* TODO Confirm the original count fits the four local label slots */
    for (index = 0; (sint32)index < (sint32)count; ++index)
    {
        uint32 label = TM3_DRAFT_LOCAL_ADDRESS(labels[index], sizeof(labels[index]));
        sub_800496E0(label, 0x80089c80u, index + 1u);
        addresses[index] = label;
    }
    return sub_8004E9B8(context, selected, 0x800523c4u, count,
        TM3_DRAFT_LOCAL_ADDRESS(addresses, sizeof(addresses)), TM3_DRAFT_U32(0x800d28b8u) - 1u, 3u, 0u);
}

uint32 sub_80023BFC(uint32 object)
{
    uint32 index, result;
    for (index = 0; index < 8u; ++index)
    {
        uint32 entry = object + 0x638u + index * 0x70u;
        uint32 table, state;
        result = sub_8001F668(entry);
        state = TM3_DRAFT_U8(object + 0x697u + index * 0x70u);
        table = TM3_DRAFT_U32(0x80089c94u);
        if (TM3_DRAFT_I8(table + state * 32u) == 7)
            return sub_800239C0(object, 0u, TM3_DRAFT_U32(object + 0xffcu), 0u, 0x8008805cu);
    }
    return result;
}

uint32 sub_80048590(uint32 object)
{
    uint32 index = TM3_DRAFT_U32(0x80089e34u);
    uint32 positions = 0x8007ecb0u + index * 8u;
    uint32 x, y, packet, output, result;
    TM3_DRAFT_U32(0x8008a3ecu + index * 8u) = object;
    packet = object + TM3_DRAFT_U32(object + 0x10u);
    x = TM3_DRAFT_U32(positions);
    y = TM3_DRAFT_U32(positions + 4u);
    sub_80026C08(object, TM3_DRAFT_U16(packet), TM3_DRAFT_U16(packet + 2u), x & 0xffffu, y & 0xffffu);
    TM3_DRAFT_U16(packet) = (uint16)x;
    TM3_DRAFT_U16(packet + 2u) = (uint16)y;
    sub_80048304(packet);
    TM3_DRAFT_U32(0x80089e34u) = TM3_DRAFT_U32(0x80089e34u) + 1u;
    packet = object + TM3_DRAFT_U32(object + 0x14u);
    output = object + TM3_DRAFT_U32(object);
    result = sub_80040AEC(packet);
    TM3_DRAFT_U8(output + 0x37u) = (uint8)result;
    return TM3_DRAFT_U32(object + 0x10u);
}

void sub_800569B0(void)
{
    /* Memory cards are absent by user instruction */
}
