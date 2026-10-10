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
uint32 sub_800522BC(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x800522BCu, "SCUS_942.49");
    return sub_8004E9B8(a1, a3, 0x800522BCu, 2u, 0x80089918u, TM3_DRAFT_U32(0x800D295Cu), 3u, 0u);
}

/* Original leaf constructor omitted from the IDA function exports */
uint32 sub_8002886C(uint32 object, uint32 payload)
{
    uint32 position = TM3_DRAFT_U32(payload);
    uint32 parameter = TM3_DRAFT_U32(payload + 4u);
    uint32 owner = TM3_DRAFT_U32(payload + 8u);
    sint16 x = TM3_DRAFT_I16(position);
    sint16 y = TM3_DRAFT_I16(position + 2u);
    sint16 z = TM3_DRAFT_I16(position + 4u);
    uint32 value;

    FUNCTION_MARKER(0x8002886Cu, "SCUS_942.49");
    TM3_DRAFT_U16(object - 20u) = (uint16)x;
    TM3_DRAFT_U16(object - 18u) = (uint16)y;
    TM3_DRAFT_U16(object - 16u) = (uint16)z;
    value = TM3_DRAFT_U32(parameter);
    TM3_DRAFT_U32(object + 4u) = owner;
    TM3_DRAFT_U32(object - 24u) = value;
    return 1;
}

/* Original leaf constructor omitted from the IDA function exports */
uint32 sub_8002C2B4(uint32 object, uint32 payload)
{
    uint32 record = TM3_DRAFT_U32(payload);
    sint16 x = TM3_DRAFT_I16(record + 4u);
    sint16 y = TM3_DRAFT_I16(record + 6u);
    sint16 z = TM3_DRAFT_I16(record + 8u);
    uint16 flags;

    FUNCTION_MARKER(0x8002C2B4u, "SCUS_942.49");
    TM3_DRAFT_U16(object - 20u) = (uint16)x;
    TM3_DRAFT_U16(object - 18u) = (uint16)y;
    TM3_DRAFT_U16(object - 16u) = (uint16)z;
    flags = TM3_DRAFT_U16(record + 2u);
    TM3_DRAFT_U32(object - 24u) = flags;
    y = TM3_DRAFT_I16(record + 14u);
    z = TM3_DRAFT_I16(record + 16u);
    x = TM3_DRAFT_I16(record + 12u);
    TM3_DRAFT_U16(object + 4u) = (uint16)z;
    TM3_DRAFT_U16(object) = (uint16)x;
    TM3_DRAFT_U16(object + 2u) = (uint16)y;
    x = TM3_DRAFT_I16(record + 20u);
    y = TM3_DRAFT_I16(record + 22u);
    z = TM3_DRAFT_I16(record + 24u);
    TM3_DRAFT_U16(object + 8u) = (uint16)x;
    TM3_DRAFT_U16(object + 10u) = (uint16)y;
    TM3_DRAFT_U16(object + 12u) = (uint16)z;
    TM3_DRAFT_U8(object + 7u) = 0;
    return 1;
}

/* Vehicle breakup and impact effects */
uint32 sub_80023628(uint32 object, uint32 origin)
{
    uint32 position[4], velocity[4], color = 0x808080u, flags;
    sint16 effect_position[4];
    uint32 position_address = TM3_DRAFT_LOCAL_ADDRESS(position, sizeof(position));
    uint32 velocity_address = TM3_DRAFT_LOCAL_ADDRESS(velocity, sizeof(velocity));
    uint32 color_address = TM3_DRAFT_LOCAL_ADDRESS(&color, sizeof(color));
    uint32 flags_address = TM3_DRAFT_LOCAL_ADDRESS(&flags, sizeof(flags));
    uint32 effect_address = TM3_DRAFT_LOCAL_ADDRESS(effect_position, sizeof(effect_position));
    uint32 matrix = object + 0x600u;
    uint32 model, offset = 0x24u, index = 0;
    uint32 axis, delta, factor, scaled, radius;

    FUNCTION_MARKER(0x80023628u, "SCUS_942.49");
    sub_8005BD24(matrix);
    sub_8005BDB4(matrix);
    model = TM3_DRAFT_U32(object);
    while ((sint32)index < TM3_DRAFT_I32(model))
    {
        sub_8005C3C4(model + offset + 16u, position_address, flags_address);
        for (axis = 0; axis < 3u; ++axis)
            velocity[axis] = position[axis] - TM3_DRAFT_U32(origin + axis * 4u);
        if ((sint32)velocity[1] > 0)
            velocity[1] = 0u - velocity[1];
        velocity[1] <<= 2;
        sub_8005B254(velocity_address, velocity_address);
        for (axis = 0; axis < 3u; ++axis)
        {
            factor = (uint32)((sint32)sub_80039FD4() % 1024) + 512u;
            velocity[axis] *= factor;
        }
        for (axis = 0; axis < 3u; ++axis)
        {
            delta = TM3_DRAFT_U32(object + 0x614u + axis * 4u) - TM3_DRAFT_U32(object + 0x620u + axis * 4u);
            scaled = ((delta << 4) - delta) << 13;
            velocity[axis] += scaled;
        }
        sub_8004A294(13u, position_address, velocity_address, matrix, TM3_DRAFT_U32(object) + offset, TM3_DRAFT_U32(object + 12u), TM3_DRAFT_U32(object + 24u));
        model = TM3_DRAFT_U32(object);
        ++index;
        offset += 24u;
    }
    radius = TM3_DRAFT_U32(object - 24u) << 1;
    for (axis = 0; axis < 3u; ++axis)
        effect_position[axis] = (sint16)TM3_DRAFT_U32(origin + axis * 4u);
    sub_800276AC(effect_address, 0u, radius, 0u, 0u, 0xFFFFFFFFu);
    sub_8004A294(9u, effect_address, color_address, 80u, 0x555u, 128u, 30u, 0u, 0u, 0u, TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089D14u) + 0x258u), 1u, 512u, 512u, 1u);
    effect_position[1] = (sint16)((uint32)(uint16)effect_position[1] - (uint32)((sint32)radius >> 1));
    sub_800276AC(effect_address, 2u, radius, 0u, 0u, 0xFFFFFFFEu);
    sub_8004A294(22u, 21u, 4u, 1100u, 0u, 0xFFFFFFFEu, 30u);
    if (TM3_DRAFT_I8(object + 0xD00u) == 1)
        sub_80047364(TM3_DRAFT_U32(object + 0xF54u), 17u);
    return sub_8004A570(object);
}

/* Initialize a detached vehicle fragment */
uint32 sub_80036374(uint32 object, uint32 payload)
{
    uint32 position = TM3_DRAFT_U32(payload);
    uint32 velocity = TM3_DRAFT_U32(payload + 4u);
    uint32 matrix = TM3_DRAFT_U32(payload + 8u);
    uint32 x = TM3_DRAFT_U32(position);
    uint32 y = TM3_DRAFT_U32(position + 4u);
    uint32 z = TM3_DRAFT_U32(position + 8u);
    uint32 values[4];
    sint16 axis[4];
    uint32 axis_address = TM3_DRAFT_LOCAL_ADDRESS(axis, sizeof(axis));
    uint32 index;
    uint32 value;
    sint32 random;

    FUNCTION_MARKER(0x80036374u, "SCUS_942.49");
    TM3_DRAFT_U16(object + 2u) = (uint16)y;
    TM3_DRAFT_U16(object + 4u) = (uint16)z;
    TM3_DRAFT_U16(object) = (uint16)x;
    TM3_DRAFT_U32(object + 8u) = (uint32)TM3_DRAFT_I16(object) << 12;
    TM3_DRAFT_U32(object + 16u) = (uint32)((sint32)(z << 16) >> 4);
    TM3_DRAFT_U32(object + 12u) = (uint32)TM3_DRAFT_I16(object + 2u) << 12;
    for (index = 0; index < 3u; ++index)
        values[index] = TM3_DRAFT_U32(velocity + index * 4u);
    for (index = 0; index < 3u; ++index)
        TM3_DRAFT_U32(object + 20u + index * 4u) = values[index];
    value = TM3_DRAFT_U32(0x80089CE0u) << 12;
    TM3_DRAFT_U32(object + 32u) = value;
    value = sub_80015684(value, 0x2222u, 18u);
    TM3_DRAFT_U32(object + 32u) = value;
    value = sub_80015684(value, 0x2222u, 18u);
    TM3_DRAFT_U32(object + 32u) = value;
    sub_80014C04(object + 20u, object + 20u, 0x2222u, 18u);
    for (index = 0; index < 4u; ++index)
        values[index] = TM3_DRAFT_U32(matrix + index * 4u);
    for (index = 0; index < 4u; ++index)
        TM3_DRAFT_U32(object + 68u + index * 4u) = values[index];
    for (index = 0; index < 4u; ++index)
        values[index] = TM3_DRAFT_U32(matrix + 16u + index * 4u);
    for (index = 0; index < 4u; ++index)
        TM3_DRAFT_U32(object + 84u + index * 4u) = values[index];
    for (index = 0; index < 3u; ++index)
        TM3_DRAFT_U32(object + 88u + index * 4u) = (uint32)TM3_DRAFT_I16(object + index * 2u);
    for (index = 0; index < 3u; ++index)
        axis[index] = (sint16)((sint32)sub_80039FD4() % 128 - 64);
    sub_8005B284(axis_address, axis_address);
    random = (sint32)sub_80039FD4();
    sub_80014EA8(axis_address, (uint32)(random % 409), object + 36u);
    random = (sint32)sub_80039FD4();
    TM3_DRAFT_U32(object + 100u) = (uint32)(random % 4) + 1u;
    TM3_DRAFT_U32(object + 104u) = TM3_DRAFT_U32(payload + 12u);
    TM3_DRAFT_U32(object + 108u) = TM3_DRAFT_U32(payload + 16u);
    TM3_DRAFT_U32(object + 112u) = TM3_DRAFT_U32(payload + 20u);
    return 1;
}

/* Advance a detached fragment and handle collision */
uint32 sub_800365E8(uint32 object)
{
    uint32 collision[8];
    sint16 point[4], effect[4];
    uint32 collision_address = TM3_DRAFT_LOCAL_ADDRESS(collision, sizeof(collision));
    uint32 point_address = TM3_DRAFT_LOCAL_ADDRESS(point, sizeof(point));
    uint32 effect_address = TM3_DRAFT_LOCAL_ADDRESS(effect, sizeof(effect));
    uint32 matrix = object + 68u;
    uint32 result, radius, material;
    uint32 axis;

    FUNCTION_MARKER(0x800365E8u, "SCUS_942.49");
    TM3_DRAFT_U32(object + 24u) += TM3_DRAFT_U32(object + 32u);
    for (axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U32(object + 8u + axis * 4u) += TM3_DRAFT_U32(object + 20u + axis * 4u);
    TM3_DRAFT_U32(object + 88u) = (uint32)((sint32)(TM3_DRAFT_U32(object + 8u) + 2048u) >> 12);
    TM3_DRAFT_U32(object + 96u) = (uint32)((sint32)(TM3_DRAFT_U32(object + 16u) + 2048u) >> 12);
    TM3_DRAFT_U32(object + 92u) = (uint32)((sint32)(TM3_DRAFT_U32(object + 12u) + 2048u) >> 12);
    sub_8005BA24(matrix, object + 36u);
    result = TM3_DRAFT_U32(object + 100u) - 1u;
    TM3_DRAFT_U32(object + 100u) = result;
    if ((sint32)result > 0)
        return result;
    TM3_DRAFT_U32(object + 100u) = 4u;
    for (axis = 0; axis < 3u; ++axis)
        point[axis] = (sint16)TM3_DRAFT_U32(object + 88u + axis * 4u);
    if (sub_80013484(object, point_address, 0u, collision_address) == 1u)
    {
        radius = sub_8002612C(TM3_DRAFT_U32(object + 104u), TM3_DRAFT_U32(object + 112u));
        for (axis = 0; axis < 3u; ++axis)
            effect[axis] = (sint16)((sint32)(collision[axis] + 2048u) >> 12);
        material = (uint32)(sint32)TM3_DRAFT_I8(TM3_DRAFT_U32(0x80089C94u) + (collision[5] << 5));
        sub_800276AC(effect_address, 0u, radius << 1, material, 0u, 0xFFFFFFFFu);
        effect[1] = (sint16)((uint32)(uint16)effect[1] - radius);
        material = (uint32)(sint32)TM3_DRAFT_I8(TM3_DRAFT_U32(0x80089C94u) + (collision[5] << 5));
        sub_800276AC(effect_address, 2u, radius << 1, material, 0u, 0xFFFFFFFEu);
        return sub_8004A570(object);
    }
    for (axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U16(object + axis * 2u) = (uint16)point[axis];
    sub_80015298(matrix);
    for (axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U16(object - 20u + axis * 2u) = (uint16)point[axis];
    return object - 20u;
}

/* Compute the maximum distance from the vertex centroid */
uint32 sub_8002612C(uint32 descriptor, uint32 vertices)
{
    uint32 center[3] = {0u, 0u, 0u};
    uint32 difference[4];
    uint32 difference_address = TM3_DRAFT_LOCAL_ADDRESS(difference, sizeof(difference));
    uint32 axis, point, index = 0;
    uint32 sum, maximum = 0;
    sint32 count, numerator;

    FUNCTION_MARKER(0x8002612Cu, "SCUS_942.49");
    point = vertices;
    while ((sint32)index < TM3_DRAFT_I16(descriptor + 6u))
    {
        for (axis = 0; axis < 3u; ++axis)
            center[axis] += (uint32)TM3_DRAFT_I16(point + axis * 2u);
        ++index;
        point += 8u;
    }
    for (axis = 0; axis < 3u; ++axis)
    {
        count = TM3_DRAFT_I16(descriptor + 6u);
        numerator = (sint32)center[axis];
        if (!count)
            center[axis] = numerator < 0 ? 1u : 0xFFFFFFFFu;
        else if (numerator == (sint32)0x80000000u && count == -1)
            center[axis] = 0x80000000u;
        else
            center[axis] = (uint32)(numerator / count);
    }
    point = vertices;
    index = 0;
    while ((sint32)index < TM3_DRAFT_I16(descriptor + 6u))
    {
        for (axis = 0; axis < 3u; ++axis)
            difference[axis] = (uint32)TM3_DRAFT_I16(point + axis * 2u) - center[axis];
        sub_8005C0FC(difference_address, difference_address);
        sum = difference[0] + difference[1] + difference[2];
        if ((sint32)maximum < (sint32)sum)
            maximum = sum;
        ++index;
        point += 8u;
    }
    return sub_8005B124(maximum);
}

/* Schedule vehicle respawn and account for remaining lives */
void sub_80046AA8(uint32 id, uint32 player)
{
    uint32 base = 0x800D2E88u;
    uint32 index, marker, sector, record, total, donor = 0xFFFFFFFFu;
    sint16 axis[4];
    uint32 axis_address = TM3_DRAFT_LOCAL_ADDRESS(axis, sizeof(axis));
    uint32 component;
    uint32 lives;

    FUNCTION_MARKER(0x80046AA8u, "SCUS_942.49");
    if (id == TM3_DRAFT_U32(base + 16u))
        return;
    total = TM3_DRAFT_U32(base + 8u) + TM3_DRAFT_U32(base + 0xB0u);
    if ((sint32)id >= (sint32)total)
    {
        for (index = 0; index < 128u; ++index)
        {
            marker = TM3_DRAFT_U32(0x80089C98u) + index * 8u;
            if (TM3_DRAFT_U8(marker + 0x2406u) != 4u)
                continue;
            sector = TM3_DRAFT_U32(0x80089CA4u) + 316u * TM3_DRAFT_U8(marker + 0x2407u);
            if ((sint32)TM3_DRAFT_U8(sector + 1u) >= (sint32)TM3_DRAFT_U8(sector) - 1)
                continue;
            for (component = 0; component < 3u; ++component)
                axis[component] = (sint16)((sint32)sub_80039FD4() % 128 - 64);
            sub_8005B284(axis_address, axis_address);
            marker = TM3_DRAFT_U32(0x80089C98u) + index * 8u;
            sub_8004A294(12u, 150u, 0x800443DCu, 8u, id, 1u, (uint32)TM3_DRAFT_I16(marker + 0x2400u), (uint32)TM3_DRAFT_I16(marker + 0x2402u), (uint32)TM3_DRAFT_I16(marker + 0x2404u), (uint32)(sint32)axis[0], (uint32)(sint32)axis[1], (uint32)(sint32)axis[2]);
        }
        return;
    }
    if ((sint32)id >= TM3_DRAFT_I32(base + 8u))
        for (index = 0; (sint32)index < TM3_DRAFT_I32(base); ++index)
            sub_8004179C(index, 0x800883D8u);
    record = base + 144u * player;
    if (!TM3_DRAFT_U32(base + 0xACu))
    {
        lives = TM3_DRAFT_U32(record + 0x184u);
        if ((sint32)lives <= 0)
        {
            sub_8004179C(player, 0x80088408u);
            TM3_DRAFT_U32(record + 0x190u) = 1u;
            return;
        }
        if ((sint32)lives >= 2)
            sub_8004179C(player, 0x800883ECu, lives);
        else
            sub_8004179C(player, 0x800883FCu);
        --TM3_DRAFT_U32(record + 0x184u);
    }
    else
    {
        lives = 0;
        total = TM3_DRAFT_U32(base + 8u) + TM3_DRAFT_U32(base + 0xB0u);
        for (index = 0; (sint32)index < (sint32)total; ++index)
        {
            uint32 available = TM3_DRAFT_U32(base + 144u * index + 0x184u);
            lives += available;
            if ((sint32)available > 0 && index != player && donor == 0xFFFFFFFFu)
                donor = index;
        }
        if ((sint32)lives <= 0)
        {
            sub_8004179C(player, 0x80088408u);
            TM3_DRAFT_U32(record + 0x190u) = 1u;
            return;
        }
        if ((sint32)lives >= 2)
            sub_8004179C(player, 0x800883ECu, lives);
        else
            sub_8004179C(player, 0x800883FCu);
        if (TM3_DRAFT_I32(record + 0x184u) > 0)
            --TM3_DRAFT_U32(record + 0x184u);
        else
            --TM3_DRAFT_U32(base + 144u * donor + 0x184u);
    }
    sub_8004A294(12u, 150u, 0x800443DCu, 8u, id, 0u, 0u, 0u, 0u, 0u, 0u, 0u);
}

uint32 sub_800415A8(uint32 player)
{
    FUNCTION_MARKER(0x800415A8u, "SCUS_942.49");
    uint32 record = 0x800D23E8u + player * 200u;
    uint32 index = 1u, destination_offset = 0u, result;
    if (TM3_DRAFT_I32(record) > 1)
    {
        do
        {
            sub_800567F4(record + 8u + destination_offset, record + 8u + (index << 6));
            ++index;
            destination_offset += 64u;
        } while ((sint32)index < TM3_DRAFT_I32(record));
    }
    result = TM3_DRAFT_U32(record) - 1u;
    TM3_DRAFT_U32(record) = result;
    return result;
}

uint32 sub_800512BC(uint32 seed, uint32 level, uint32 vehicle, uint32 output)
{
    FUNCTION_MARKER(0x800512BCu, "SCUS_942.49");
    uint32 result;
    seed += level * 3u + vehicle * 24u;
    do
    {
        sub_800511CC(output, seed);
        seed += 384u;
        result = sub_80048140(output);
    } while (result != 0u);
    return result;
}

uint32 sub_80047FF8(uint32 input, uint32 expected)
{
    FUNCTION_MARKER(0x80047FF8u, "SCUS_942.49");
    uint32 value = TM3_DRAFT_U16(input);
    while (value != 0u)
    {
        uint32 reference = TM3_DRAFT_U16(expected);
        uint32 swapped;
        if (!reference)
            return 0u;
        swapped = ((value & 0xaaaau) >> 1) | ((value & 0x5555u) << 1);
        if (swapped != reference)
            return 0u;
        input += 2u;
        value = TM3_DRAFT_U16(input);
        expected += 2u;
    }
    return TM3_DRAFT_U16(expected) == 0u;
}

uint32 sub_80048140(uint32 input)
{
    FUNCTION_MARKER(0x80048140u, "SCUS_942.49");
    uint32 index;
    for (index = 0u; index < 30u; ++index)
        if (sub_80047FF8(input, TM3_DRAFT_U32(0x8007EBC0u + index * 8u)))
            return 1u;
    return 0u;
}

uint32 sub_8004F6E0(uint32 mask, uint32 mode)
{
    FUNCTION_MARKER(0x8004F6E0u, "SCUS_942.49");
    uint32 index, record, kind;
    for (index = 0u; index < 18u; ++index)
    {
        record = 0x80080C1Cu + index * 12u;
        if ((TM3_DRAFT_U16(record) & mask) == 0u)
            continue;
        kind = TM3_DRAFT_U8(record + 8u);
        if (mode == 1u)
        {
            if (kind - 104u < 2u)
                continue;
        }
        else if (kind == 97u || kind == 102u)
            continue;
        return record;
    }
    return 0u;
}

uint32 sub_8004F78C(uint32 mask, uint32 mode)
{
    FUNCTION_MARKER(0x8004F78Cu, "SCUS_942.49");
    uint32 record = sub_8004F6E0(mask & 0xffffu, mode);
    return record ? TM3_DRAFT_U32(record + 4u) : 0u;
}
