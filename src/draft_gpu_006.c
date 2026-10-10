#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

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
    /* Player enumeration limits positive counts to four */
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
    uint32 index;
    for (index = 0; index < 8u; ++index)
    {
        uint32 entry = object + 0x638u + index * 0x70u;
        uint32 table, state;
        sub_8001F668(entry);
        state = TM3_DRAFT_U8(object + 0x697u + index * 0x70u);
        table = TM3_DRAFT_U32(0x80089c94u);
        if (TM3_DRAFT_I8(table + state * 32u) == 7)
            return sub_800239C0(object, 0u, TM3_DRAFT_U32(object + 0xffcu), 0u, 0x8008805cu);
    }
    return 0u;
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

void sub_800284C8(uint32 object)
{
    /* Original destructor immediately returns */
    (void)object;
}

void sub_8002C32C(uint32 object)
{
    /* Original update immediately returns */
    (void)object;
}

/* Type 13 textured geometry render callback */
uint32 sub_8003680C(uint32 object, uint32 ordering_table, uint32 cursor, uint32 end, uint32 view_matrix)
{
    uint32 descriptor = TM3_DRAFT_U32(object + 0x68u);
    uint32 group = descriptor + 8u;
    uint32 required = (uint32)(sint32)TM3_DRAFT_I16(group + 2u) * 40u;
    uint32 matrix[8], matrix_address, vertex, scratch, face, bucket;
    sint32 depth, count;
    uint32 index;
    if (TM3_DRAFT_U32(cursor) + required >= end)
        return required;
    matrix_address = TM3_DRAFT_LOCAL_ADDRESS(matrix, sizeof(matrix));
    sub_8005B8D4();
    sub_8005B614(view_matrix, object + 0x44u, matrix_address);
    for (index = 0; index < 8u; ++index)
        tm3_draft_gte_write_control(index, matrix[index]);
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(object));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(object + 4u));
    tm3_draft_gte_command(0x480012u);
    depth = (sint32)tm3_draft_gte_read_data(16u);
    if (depth > 0)
    {
        depth >>= 2;
        if (depth >= TM3_DRAFT_I32(0x80089dd0u))
            depth = (sint32)(TM3_DRAFT_U32(0x80089dd0u) - 1u);
        bucket = ordering_table + (uint32)depth * 4u;
        descriptor = TM3_DRAFT_U32(object + 0x68u);
        if (!TM3_DRAFT_U8(descriptor + 22u))
        {
            TM3_DRAFT_U32(0x8007e564u) = 0u - (uint32)(sint32)TM3_DRAFT_I16(descriptor + 16u);
            TM3_DRAFT_U32(0x8007e568u) = 0u - (uint32)(sint32)TM3_DRAFT_I16(descriptor + 18u);
            TM3_DRAFT_U32(0x8007e56cu) = 0u - (uint32)(sint32)TM3_DRAFT_I16(descriptor + 20u);
            sub_8005B614(matrix_address, 0x8007e550u, matrix_address);
        }
        for (index = 0; index < 8u; ++index)
            tm3_draft_gte_write_control(index, matrix[index]);
        vertex = TM3_DRAFT_U32(object + 0x70u) + (uint32)(sint32)TM3_DRAFT_I16(group + 4u) * 8u;
        scratch = 0x1f800000u;
        for (count = TM3_DRAFT_I16(group + 6u); count > 0; count -= 3)
        {
            for (index = 0; index < 6u; ++index)
                tm3_draft_gte_write_data(index, TM3_DRAFT_U32(vertex + index * 4u));
            tm3_draft_gte_command(0x280030u);
            for (index = 0; index < 3u; ++index)
                TM3_DRAFT_U32(scratch + index * 4u) = tm3_draft_gte_read_data(12u + index);
            vertex += 24u;
            scratch += 12u;
        }
        face = TM3_DRAFT_U32(object + 0x6cu) + (uint32)(sint32)TM3_DRAFT_I16(group) * 20u;
        for (count = TM3_DRAFT_I16(group + 2u); count > 0; --count, face += 20u)
        {
            uint32 command = TM3_DRAFT_U8(face + 3u) & 0x7fu;
            uint32 packet, size, length;
            if (command != 0x24u && command != 0x2cu)
                continue;
            packet = TM3_DRAFT_U32(cursor);
            for (index = 0; index < (command == 0x24u ? 3u : 4u); ++index)
                TM3_DRAFT_U32(packet + 8u + index * 8u) = TM3_DRAFT_U32(0x1f800000u + 4u * TM3_DRAFT_U8(face + 16u + index));
            TM3_DRAFT_U32(packet + 4u) = (command << 24) | 0x0060707fu;
            TM3_DRAFT_U32(packet + 12u) = TM3_DRAFT_U32(face + 4u);
            TM3_DRAFT_U32(packet + 20u) = TM3_DRAFT_U32(face + 8u);
            TM3_DRAFT_U16(packet + 28u) = TM3_DRAFT_U16(face + 12u);
            if (command == 0x2cu)
                TM3_DRAFT_U16(packet + 36u) = TM3_DRAFT_U16(face + 14u);
            size = command == 0x24u ? 32u : 40u;
            length = command == 0x24u ? 0x07000000u : 0x09000000u;
            TM3_DRAFT_U32(cursor) += size;
            TM3_DRAFT_U32(packet) = (TM3_DRAFT_U32(bucket) & 0x00ffffffu) | length;
            TM3_DRAFT_U32(bucket) = packet & 0x00ffffffu;
        }
    }
    sub_8005B978();
    /* TODO Original callback result is an unused SDK register carrier */
    return 0u;
}

/* Timer callback constructor */
uint32 sub_8003614C(uint32 object, uint32 payload)
{
    uint32 index = 0;
    TM3_DRAFT_U32(object) = TM3_DRAFT_U32(payload);
    TM3_DRAFT_U32(object + 4u) = TM3_DRAFT_U32(payload + 4u);
    TM3_DRAFT_U32(object + 8u) = TM3_DRAFT_U32(payload + 8u);
    if (TM3_DRAFT_I32(object + 8u) > 0)
        do
        {
            TM3_DRAFT_U32(object + 12u + index * 4u) = TM3_DRAFT_U32(payload + 12u + index * 4u);
            ++index;
        } while ((sint32)index < TM3_DRAFT_I32(object + 8u));
    return 1u;
}

/* Invoke the saved arguments before marking the timer object for deletion */
uint32 sub_800361A8(uint32 object)
{
    uint32 timer = TM3_DRAFT_U32(object) - 1u;
    TM3_DRAFT_U32(object) = timer;
    if ((sint32)timer > 0)
        return timer;
    switch (TM3_DRAFT_U32(object + 8u))
    {
    case 0u:
        tm3_draft_indirect(TM3_DRAFT_U32(object + 4u), 0u);
        break;
    case 1u:
        tm3_draft_indirect(TM3_DRAFT_U32(object + 4u), 1u, TM3_DRAFT_U32(object + 12u));
        break;
    case 2u:
        tm3_draft_indirect(TM3_DRAFT_U32(object + 4u), 2u, TM3_DRAFT_U32(object + 12u), TM3_DRAFT_U32(object + 16u));
        break;
    case 3u:
        tm3_draft_indirect(TM3_DRAFT_U32(object + 4u), 3u, TM3_DRAFT_U32(object + 12u), TM3_DRAFT_U32(object + 16u), TM3_DRAFT_U32(object + 20u));
        break;
    case 4u:
        tm3_draft_indirect(TM3_DRAFT_U32(object + 4u), 4u, TM3_DRAFT_U32(object + 12u), TM3_DRAFT_U32(object + 16u), TM3_DRAFT_U32(object + 20u), TM3_DRAFT_U32(object + 24u));
        break;
    case 5u:
        tm3_draft_indirect(TM3_DRAFT_U32(object + 4u), 5u, TM3_DRAFT_U32(object + 12u), TM3_DRAFT_U32(object + 16u), TM3_DRAFT_U32(object + 20u), TM3_DRAFT_U32(object + 24u), TM3_DRAFT_U32(object + 28u));
        break;
    case 6u:
        tm3_draft_indirect(TM3_DRAFT_U32(object + 4u), 6u, TM3_DRAFT_U32(object + 12u), TM3_DRAFT_U32(object + 16u), TM3_DRAFT_U32(object + 20u), TM3_DRAFT_U32(object + 24u), TM3_DRAFT_U32(object + 28u), TM3_DRAFT_U32(object + 32u));
        break;
    case 7u:
        tm3_draft_indirect(TM3_DRAFT_U32(object + 4u), 7u, TM3_DRAFT_U32(object + 12u), TM3_DRAFT_U32(object + 16u), TM3_DRAFT_U32(object + 20u), TM3_DRAFT_U32(object + 24u), TM3_DRAFT_U32(object + 28u), TM3_DRAFT_U32(object + 32u), TM3_DRAFT_U32(object + 36u));
        break;
    case 8u:
        tm3_draft_indirect(TM3_DRAFT_U32(object + 4u), 8u, TM3_DRAFT_U32(object + 12u), TM3_DRAFT_U32(object + 16u), TM3_DRAFT_U32(object + 20u), TM3_DRAFT_U32(object + 24u), TM3_DRAFT_U32(object + 28u), TM3_DRAFT_U32(object + 32u), TM3_DRAFT_U32(object + 36u), TM3_DRAFT_U32(object + 40u));
        break;
    default:
        break;
    }
    return sub_8004A570(object);
}

/* Draw a vertically centered list of text entries */
uint32 sub_80045B84(uint32 context, uint32 font, uint32 strings, uint32 count, uint32 center_y)
{
    uint32 height = TM3_DRAFT_U8(font + 20u);
    uint32 step = height + (height >> 1);
    uint32 half = (uint32)((sint32)count / 2);
    uint32 y, result, index;
    if (count & 1u)
    {
        result = half;
        y = center_y - ((height >> 1) + half * step);
    }
    else
    {
        result = step;
        y = center_y - (half * step - (height >> 2));
    }
    for (index = 0u; (sint32)index < (sint32)count; ++index)
    {
        uint32 text = TM3_DRAFT_U32(strings + index * 4u);
        if (text != 0u)
        {
            uint32 color = TM3_DRAFT_U32(0x80089cbcu);
            sub_80049284(text, font, 160u, y, context, context + 88u, 22u,
                TM3_DRAFT_U8(color + 3u), TM3_DRAFT_U8(color + 4u), TM3_DRAFT_U8(color + 5u), 2u, 2u);
        }
        height = TM3_DRAFT_U8(font + 20u);
        y += height + (height >> 1);
        result = (sint32)(index + 1u) < (sint32)count;
    }
    return result;
}

/* Generate five button masks while preserving the gameplay RNG state */
void sub_800511CC(uint32 output, uint32 seed)
{
    uint32 saved_state = sub_8003A008();
    uint32 index = 0u;
    sub_80039FFC(seed);
    while (index < 5u)
    {
        uint32 button = 1u << (sub_80039FD4() & 15u);
        if (button == 0x200u || button == 0x400u)
            continue;
        TM3_DRAFT_U16(output + index * 2u) = (uint16)button;
        ++index;
    }
    TM3_DRAFT_U16(output + 10u) = 0u;
    sub_80039FFC(saved_state);
}

/* Read the current gameplay RNG state */
uint32 sub_8003A008(void)
{
    return TM3_DRAFT_U32(0x80089da0u);
}

void sub_80031774(uint32 object)
{
    FUNCTION_MARKER(0x80031774u, "SCUS_942.49");
    /* Original destructor immediately returns */
    (void)object;
}

/* Unverified decompiler-derived draft */
uint32 sub_800321F4(uint32 vehicle, uint32 mode)
{
    uint32 active, target, created, model, point_words[2], matrix_words[8];
    uint32 point = TM3_DRAFT_LOCAL_ADDRESS(point_words, sizeof(point_words));
    uint32 matrix = TM3_DRAFT_LOCAL_ADDRESS(matrix_words, sizeof(matrix_words));
    FUNCTION_MARKER(0x800321F4u, "SCUS_942.49");
    active = TM3_DRAFT_U32(vehicle + 4368u);
    if (active != 0u)
    {
        sub_8002DEA4(active);
        TM3_DRAFT_U32(vehicle + 4368u) = 0u;
    }
    else
    {
        target = sub_8002E964(mode, vehicle, matrix);
        sub_80026B88(vehicle, 2u, point);
        created = sub_8004A294(8u, 15u, 16u, vehicle, target, point, matrix, mode);
        if (created != 0u)
        {
            uint32 index = 0u;
            sint32 count;
            TM3_DRAFT_U16(created + 324u) = 0u;
            model = TM3_DRAFT_U32(vehicle);
            count = TM3_DRAFT_I32(model);
            while ((sint32)index < count)
            {
                if (TM3_DRAFT_I8(model + 59u) == 4)
                {
                    TM3_DRAFT_U16(created + 324u) = (uint16)index;
                    break;
                }
                ++index;
                model += 24u;
            }
            TM3_DRAFT_U32(vehicle + 4368u) = created;
        }
    }
    /* Sound flags 5 consume only sound, flags, vehicle and intensity */
    sub_8004A294(22u, TM3_DRAFT_U8(TM3_DRAFT_U32(vehicle + 4040u) + 55u),
                5u, vehicle, 1200u);
    return TM3_DRAFT_U32(vehicle + 4368u);
}
