#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

/* Unverified C reconstructed from complete original MIPS and pseudocode */
uint32 sub_8003231C(uint32 object)
{
    uint32 result, age, target;
    sint32 delta[3];
    uint32 delta_address = TM3_DRAFT_LOCAL_ADDRESS(delta, sizeof(delta));
    FUNCTION_MARKER(0x8003231Cu, "SCUS_942.49");
    if (TM3_DRAFT_U16(object + 110u)) {
        if (TM3_DRAFT_U8(object + 321u) == 1u)
            sub_8002DF70(object);
        age = TM3_DRAFT_U32(object + 148u) + 1u;
        TM3_DRAFT_U16(object + 110u) -= 1u;
        TM3_DRAFT_U32(object + 148u) = age;
        if (!TM3_DRAFT_U16(object + 110u))
            return sub_8004A570(object);
        return age;
    }
    target = TM3_DRAFT_U32(object + 88u);
    if (target && !TM3_DRAFT_U32(target - 48u))
        sub_8002DEA4(object);
    TM3_DRAFT_U16(object + 4u) = TM3_DRAFT_U16(object + 12u);
    TM3_DRAFT_U16(object) = TM3_DRAFT_U16(object + 8u);
    TM3_DRAFT_U16(object + 2u) = TM3_DRAFT_U16(object + 10u);
    sub_800140C8(object + 8u, 136u, object + 16u, object + 8u);
    for (uint32 axis = 0; axis < 3u; ++axis)
        delta[axis] = (sint32)TM3_DRAFT_I16(object + 8u + 2u * axis) - TM3_DRAFT_I16(object + 2u * axis);
    sub_80013D64(delta_address);
    for (uint32 axis = 0; axis < 3u; ++axis) {
        sint32 sum = (sint32)TM3_DRAFT_I16(object + 2u * axis) + TM3_DRAFT_I16(object + 8u + 2u * axis);
        TM3_DRAFT_U16(object - 20u + 2u * axis) = (uint16)((sum + (sint32)((uint32)sum >> 31u)) >> 1);
    }
    for (uint32 axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U32(object + 136u + 4u * axis) = (uint32)(sint32)TM3_DRAFT_I16(object + 8u + 2u * axis);
    if (TM3_DRAFT_U8(object + 321u))
        sub_8002DF70(object);
    result = TM3_DRAFT_U32(object + 148u) + 1u;
    age = TM3_DRAFT_U32(object + 152u);
    TM3_DRAFT_U32(object + 148u) = result;
    if (age < result) {
        TM3_DRAFT_U32(object + 68u) = 0u;
        return sub_8002DEA4(object);
    }
    return result;
}

uint32 sub_800324D0(uint32 object, uint32 ordering_table, uint32 cursor, uint32 end, uint32 view)
{
    uint32 matrix[8], address = TM3_DRAFT_LOCAL_ADDRESS(matrix, sizeof(matrix));
    uint32 result = TM3_DRAFT_U16(object + 110u);
    sint32 depth;
    FUNCTION_MARKER(0x800324D0u, "SCUS_942.49");
    if (result)
        return result;
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(object + 8u));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(object + 12u));
    tm3_draft_gte_command(0x480012u);
    depth = (sint32)tm3_draft_gte_read_data(27u);
    sub_8005B8D4();
    sub_8005B614(view, object + 116u, address);
    sub_8005BD24(address);
    sub_8005BDB4(address);
    if (depth > 0) {
        depth >>= 2;
        if (depth >= TM3_DRAFT_I32(0x80089DD0u))
            depth = (sint32)(TM3_DRAFT_U32(0x80089DD0u) - 1u);
        sub_8002B00C(TM3_DRAFT_U32(object + 160u), (uint32)(sint32)TM3_DRAFT_I16(object + 324u),
                    ordering_table + (uint32)depth * 4u, cursor, end);
    }
    sub_8005B978();
    result = TM3_DRAFT_U8(object + 335u);
    if (result)
        return sub_8002E6CC(object, ordering_table, cursor, end);
    return result;
}

uint32 sub_800325E0(uint32 object)
{
    sint16 point[4];
    uint32 color = 0x00104060u;
    uint32 position = TM3_DRAFT_LOCAL_ADDRESS(point, sizeof(point));
    uint32 color_address = TM3_DRAFT_LOCAL_ADDRESS(&color, sizeof(color));
    uint32 owner, result;
    FUNCTION_MARKER(0x800325E0u, "SCUS_942.49");
    /* TODO Original SVECTOR padding is unspecified */
    for (uint32 axis = 0; axis < 3u; ++axis)
        point[axis] = TM3_DRAFT_I16(object - 20u + 2u * axis);
    sub_8004A294(9u, position, color_address, 80u, 1024u, 384u, 20u,
                TM3_DRAFT_U32(object + 160u), 0u, 0u,
                TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089D14u) + 80u), 1u,
                TM3_DRAFT_U32(0x80089D30u), TM3_DRAFT_U32(0x80089D34u), 1u);
    point[1] = (sint16)((uint16)point[1] - 200u);
    sub_8002F2A8(position);
    owner = TM3_DRAFT_U32(object + 160u);
    result = sub_800470DC(owner);
    if (result)
        return sub_80033E94(owner, TM3_DRAFT_U8(object + 327u));
    return result;
}

uint32 sub_8002B00C(uint32 model, uint32 group_index, uint32 bucket, uint32 cursor, uint32 end)
{
    uint32 descriptor = TM3_DRAFT_U32(model) + 36u + (uint32)(sint32)(sint16)group_index * 24u;
    sint32 count = TM3_DRAFT_I16(descriptor + 2u);
    uint32 vertex, scratch = 0x1F800000u, primitive;
    sint32 remaining;
    FUNCTION_MARKER(0x8002B00Cu, "SCUS_942.49");
    if (TM3_DRAFT_U32(cursor) + (uint32)count * 40u >= end)
        return 0u;
    vertex = TM3_DRAFT_U32(model + 24u) + (uint32)(sint32)TM3_DRAFT_I16(descriptor + 4u) * 8u;
    remaining = TM3_DRAFT_I16(descriptor + 6u);
    while (remaining > 0) {
        for (uint32 reg = 0u; reg < 6u; ++reg)
            tm3_draft_gte_write_data(reg, TM3_DRAFT_U32(vertex + 4u * reg));
        tm3_draft_gte_command(0x280030u);
        for (uint32 reg = 0u; reg < 3u; ++reg)
            TM3_DRAFT_U32(scratch + 4u * reg) = tm3_draft_gte_read_data(12u + reg);
        remaining -= 3;
        vertex += 24u;
        scratch += 12u;
    }
    primitive = TM3_DRAFT_U32(model + 12u) + (uint32)(sint32)TM3_DRAFT_I16(descriptor) * 20u;
    while (count > 0) {
        uint32 opcode = TM3_DRAFT_U8(primitive + 3u), kind = opcode & 0x7Fu;
        if (kind == 0x24u || kind == 0x2Cu) {
            uint32 screen[4], packet;
            uint32 corners = kind == 0x24u ? 3u : 4u;
            sint32 area;
            for (uint32 index = 0u; index < 3u; ++index)
                screen[index] = TM3_DRAFT_U32(0x1F800000u + 4u * TM3_DRAFT_U8(primitive + 16u + index));
            if (!(opcode & 0x80u)) {
                for (uint32 index = 0u; index < 3u; ++index)
                    tm3_draft_gte_write_data(12u + index, screen[index]);
                tm3_draft_gte_command(0x1400006u);
                area = (sint32)tm3_draft_gte_read_data(24u);
                if (area <= 0) {
                    if (kind == 0x24u)
                        goto next_primitive;
                    tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(0x1F800000u + 4u * TM3_DRAFT_U8(primitive + 19u)));
                    tm3_draft_gte_command(0x1400006u);
                    if ((sint32)tm3_draft_gte_read_data(24u) > 0)
                        goto next_primitive;
                }
            }
            packet = TM3_DRAFT_U32(cursor);
            if (corners == 4u)
                screen[3] = TM3_DRAFT_U32(0x1F800000u + 4u * TM3_DRAFT_U8(primitive + 19u));
            for (uint32 index = 0u; index < corners; ++index)
                TM3_DRAFT_U32(packet + 8u + 8u * index) = screen[index];
            TM3_DRAFT_U32(packet + 12u) = TM3_DRAFT_U32(primitive + 4u);
            TM3_DRAFT_U32(packet + 20u) = TM3_DRAFT_U32(primitive + 8u);
            TM3_DRAFT_U16(packet + 28u) = TM3_DRAFT_U16(primitive + 12u);
            if (corners == 4u)
                TM3_DRAFT_U16(packet + 36u) = TM3_DRAFT_U16(primitive + 14u);
            TM3_DRAFT_U32(packet) = (TM3_DRAFT_U32(bucket) & 0xFFFFFFu) | ((corners == 4u ? 9u : 7u) << 24);
            TM3_DRAFT_U32(bucket) = packet & 0xFFFFFFu;
            TM3_DRAFT_U32(packet + 4u) = ((opcode & 0x7Fu) << 24) | 0x00808080u;
            TM3_DRAFT_U32(cursor) += corners == 4u ? 40u : 32u;
        }
next_primitive:
        --count;
        primitive += 20u;
    }
    return 1u;
}
