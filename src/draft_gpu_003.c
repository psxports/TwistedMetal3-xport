#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

#define dword_80089DD0 TM3_DRAFT_U32(0x80089DD0u)
#define dword_80089CA0 TM3_DRAFT_U32(0x80089CA0u)
#define dword_80089F00 TM3_DRAFT_U32(0x80089F00u)
#define dword_8007BCF4 TM3_DRAFT_U32(0x8007BCF4u)
#define dword_80089CFC TM3_DRAFT_U32(0x80089CFCu)
#define dword_80089760 TM3_DRAFT_U32(0x80089760u)
#define dword_80089764 TM3_DRAFT_U32(0x80089764u)
#define dword_80089C94 TM3_DRAFT_U32(0x80089C94u)
#define dword_80089BE8 TM3_DRAFT_U32(0x80089BE8u)
#define off_800804BC TM3_DRAFT_U32(0x800804BCu)
#define byte_800804E0 TM3_DRAFT_U8(0x800804E0u)
#define byte_800800F0 TM3_DRAFT_U8(0x800800F0u)
#define off_800800DC TM3_DRAFT_U32(0x800800DCu)
#define off_8008012C TM3_DRAFT_U32(0x8008012Cu)
#define byte_80080140 TM3_DRAFT_U8(0x80080140u)
#define dword_80081E38 TM3_DRAFT_U32(0x80081E38u)
#define word_80089D1C TM3_DRAFT_U16(0x80089D1Cu)
#define dword_80080E38 TM3_DRAFT_U32(0x80080E38u)
#define dword_8008263C TM3_DRAFT_U32(0x8008263Cu)
#define dword_80089D24 TM3_DRAFT_U32(0x80089D24u)
#define dword_80089CB8 TM3_DRAFT_U32(0x80089CB8u)
#define dword_80089E04 TM3_DRAFT_U32(0x80089E04u)
#define dword_80089D14 TM3_DRAFT_U32(0x80089D14u)
#define off_800883B0 TM3_DRAFT_U32(0x800883B0u)
#define off_800883B4 TM3_DRAFT_U32(0x800883B4u)
#define off_800883B8 TM3_DRAFT_U32(0x800883B8u)
#define off_800883CC TM3_DRAFT_U32(0x800883CCu)
#define off_800883D0 TM3_DRAFT_U32(0x800883D0u)
#define off_800883D4 TM3_DRAFT_U32(0x800883D4u)
#define byte_8007F11C TM3_DRAFT_U8(0x8007F11Cu)

/* Unverified decompiler-derived draft */
uint32 sub_8002A190(uint32 position, uint32 width, uint32 height, uint32 color, uint32 texture, uint32 ordering_table, uint32 cursor, uint32 blend, uint32 end)
{
    uint32 matrix[8] = {4096u, 0u, 4096u, 0u, 4096u, 0u, 0u, 0u};
    sint16 vertices[4][4];
    uint32 flags, clip, matrix_address, vertices_address, flags_address, clip_address;
    sint32 depth, bucket_index;
    uint32 packet, bucket, result;
    uint32 negative_width = 0u - width, negative_height = 0u - height;
    sint16 left = (sint16)((sint32)(negative_width + (negative_width >> 31)) >> 1);
    sint16 right = (sint16)((sint32)(width + (width >> 31)) >> 1);
    sint16 top = (sint16)((sint32)(negative_height + (negative_height >> 31)) >> 1);
    sint16 bottom = (sint16)((sint32)(height + (height >> 31)) >> 1);
    if (TM3_DRAFT_U32(cursor) + 48u >= end)
        return 0u;
    matrix_address = TM3_DRAFT_LOCAL_ADDRESS(matrix, sizeof(matrix));
    vertices_address = TM3_DRAFT_LOCAL_ADDRESS(vertices, sizeof(vertices));
    flags_address = TM3_DRAFT_LOCAL_ADDRESS(&flags, sizeof(flags));
    clip_address = TM3_DRAFT_LOCAL_ADDRESS(&clip, sizeof(clip));
    sub_8005B8D4();
    sub_8005C3C4(position, matrix_address + 20u, flags_address);
    vertices[0][0] = left;
    vertices[0][1] = top;
    vertices[0][2] = 0;
    vertices[1][0] = right;
    vertices[1][1] = top;
    vertices[1][2] = 0;
    vertices[2][0] = left;
    vertices[2][1] = bottom;
    vertices[2][2] = 0;
    vertices[3][0] = right;
    vertices[3][1] = bottom;
    vertices[3][2] = 0;
    sub_8005BD24(matrix_address);
    sub_8005BDB4(matrix_address);
    packet = TM3_DRAFT_U32(cursor);
    depth = (sint32)sub_8005C3F4(vertices_address, vertices_address + 8u, vertices_address + 16u, vertices_address + 24u, packet + 8u, packet + 16u, packet + 24u, packet + 32u, clip_address, flags_address);
    result = depth < 9;
    if (depth >= 9)
    {
        uint32 difference = 96u - (uint32)depth;
        bucket_index = (sint32)(0u - (difference & (uint32)((sint32)difference >> 31)));
        if (bucket_index >= TM3_DRAFT_I32(0x80089dd0u))
            bucket_index = (sint32)(TM3_DRAFT_U32(0x80089dd0u) - 1u);
        TM3_DRAFT_U32(packet + 4u) = color;
        TM3_DRAFT_U32(packet + 12u) = TM3_DRAFT_U32(texture);
        TM3_DRAFT_U32(packet + 20u) = TM3_DRAFT_U32(texture + 4u);
        TM3_DRAFT_U16(packet + 28u) = TM3_DRAFT_U16(texture + 8u);
        TM3_DRAFT_U16(packet + 36u) = TM3_DRAFT_U16(texture + 10u);
        TM3_DRAFT_U8(packet + 3u) = 9u;
        TM3_DRAFT_U8(packet + 7u) = 0x2cu;
        if (blend != 0u)
        {
            TM3_DRAFT_U16(packet + 22u) &= 0xff9fu;
            if (blend != 4u)
                TM3_DRAFT_U16(packet + 22u) |= (uint16)(blend << 5);
            TM3_DRAFT_U8(packet + 7u) |= 2u;
        }
        bucket = ordering_table + (uint32)bucket_index * 4u;
        TM3_DRAFT_U32(packet) = (TM3_DRAFT_U32(packet) & 0xff000000u) | (TM3_DRAFT_U32(bucket) & 0x00ffffffu);
        TM3_DRAFT_U32(bucket) = (TM3_DRAFT_U32(bucket) & 0xff000000u) | (packet & 0x00ffffffu);
        result = packet + 40u;
        TM3_DRAFT_U32(cursor) = result;
    }
    sub_8005B978();
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003AFA8(uint32 a1)
{
    uint32 v2;
    uint32 v3;
    uint32 v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v11;
    uint32 v12;
    int v13;
    int v14;
    int v15;
    sint16 v16;
    int v17;
    sint32 result;

    v2 = (uint32)(a1 + 133800);
    v3 = (uint32)(a1 + 24);
    v4 = (uint32)(a1 + 88);
    do
    {
        v5 = TM3_DRAFT_U32(v3 + (1) * 4u);
        v6 = TM3_DRAFT_U32(v3 + (2) * 4u);
        v7 = TM3_DRAFT_U32(v3 + (3) * 4u);
        TM3_DRAFT_U32(v2) = TM3_DRAFT_U32(v3);
        TM3_DRAFT_U32(v2 + (1) * 4u) = v5;
        TM3_DRAFT_U32(v2 + (2) * 4u) = v6;
        TM3_DRAFT_U32(v2 + (3) * 4u) = v7;
        v3 += (4) * 4u;
        v2 += (4) * 4u;
    } while (v3 != v4);
    sub_8005AE94(a1 + 133864);
    sub_8005ADC4(a1 + 133864, 1);
    sub_8005AD94(a1 + 133864, 0);
    v8 = dword_80089CA0;
    TM3_DRAFT_U16(a1 + 133880) = TM3_DRAFT_U8(dword_80089CA0 + 4) - TM3_DRAFT_U8(dword_80089CA0) + 1;
    v9 = 0;
    TM3_DRAFT_U16(a1 + 133882) = TM3_DRAFT_U8(v8 + 5) - TM3_DRAFT_U8(v8 + 1) + 1;
    TM3_DRAFT_U16(a1 + 133878) = TM3_DRAFT_U16(v8 + 2);
    TM3_DRAFT_U8(a1 + 133876) = TM3_DRAFT_U8(v8);
    TM3_DRAFT_U8(a1 + 133877) = TM3_DRAFT_U8(dword_80089CA0 + 1);
    v10 = 133964;
    sub_8005AEF4(a1 + 133884, 0, TM3_DRAFT_U32(0x800d2ef0u), TM3_DRAFT_U16(dword_80089CA0 + 6));
    sub_8005AE54(a1 + 133892);
    sub_8005AD94(a1 + 133892, 0);
    TM3_DRAFT_U8(a1 + 133896) = 8;
    TM3_DRAFT_U8(a1 + 133897) = 8;
    TM3_DRAFT_U8(a1 + 133898) = 8;
    TM3_DRAFT_U8(a1 + 133904) = 8;
    TM3_DRAFT_U8(a1 + 133905) = 8;
    TM3_DRAFT_U8(a1 + 133906) = 8;
    TM3_DRAFT_U8(a1 + 133912) = 8;
    TM3_DRAFT_U8(a1 + 133913) = 8;
    TM3_DRAFT_U8(a1 + 133914) = -1;
    TM3_DRAFT_U8(a1 + 133920) = 8;
    TM3_DRAFT_U8(a1 + 133921) = 8;
    TM3_DRAFT_U8(a1 + 133922) = -1;
    sub_8005AE54(a1 + 133928);
    sub_8005AD94(a1 + 133928, 0);
    v11 = a1;
    TM3_DRAFT_U8(a1 + 133932) = 8;
    TM3_DRAFT_U8(a1 + 133933) = 8;
    TM3_DRAFT_U8(a1 + 133934) = -1;
    TM3_DRAFT_U8(a1 + 133940) = 8;
    TM3_DRAFT_U8(a1 + 133941) = 8;
    TM3_DRAFT_U8(a1 + 133942) = -1;
    TM3_DRAFT_U8(a1 + 133948) = 8;
    TM3_DRAFT_U8(a1 + 133949) = 8;
    TM3_DRAFT_U8(a1 + 133950) = 8;
    TM3_DRAFT_U8(a1 + 133956) = 8;
    TM3_DRAFT_U8(a1 + 133957) = 8;
    TM3_DRAFT_U8(a1 + 133958) = 8;
    do
    {
        sub_8005AEB4(a1 + v10);
        sub_8005AD94(a1 + v10, 0);
        v12 = (uint32)(v11 + 133964);
        v11 += 16;
        ++v9;
        TM3_DRAFT_U8(v12 + (4) * 1u) = 0x80;
        TM3_DRAFT_U8(v12 + (5) * 1u) = 0x80;
        TM3_DRAFT_U8(v12 + (6) * 1u) = 0x80;
        v10 += 16;
    } while (v9 < 3);
    v13 = 0;
    v14 = a1;
    v15 = 134012;
    v16 = TM3_DRAFT_U16(a1 + 133880);
    TM3_DRAFT_U16(a1 + 133976) = 1;
    TM3_DRAFT_U16(a1 + 133992) = 1;
    TM3_DRAFT_U16(a1 + 134010) = 1;
    TM3_DRAFT_U16(a1 + 134008) = v16 - 2;
    do
    {
        sub_8005AE54(a1 + v15);
        sub_8005AD94(a1 + v15, 0);
        v17 = v14 + 134012;
        v14 += 36;
        v15 += 36;
        ++v13;
        TM3_DRAFT_U8(v17 + 5) = 0x80;
        TM3_DRAFT_U8(v17 + 21) = 64;
        result = v13 < 2;
        TM3_DRAFT_U8(v17 + 4) = 0;
        TM3_DRAFT_U8(v17 + 6) = -1;
        TM3_DRAFT_U8(v17 + 12) = 0;
        TM3_DRAFT_U16(v17 + 13) = 255;
        TM3_DRAFT_U8(v17 + 20) = 0;
        TM3_DRAFT_U8(v17 + 22) = 127;
        TM3_DRAFT_U8(v17 + 28) = 0;
        TM3_DRAFT_U8(v17 + 29) = 127;
        TM3_DRAFT_U8(v17 + 30) = 0;
    } while (v13 < 2);
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001B9A4(uint32 a1)
{
    int v2;
    int result;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    sint16 v9;
    signed int v10;
    int v11;
    int v12;
    int v13;
    sint32 v14;
    int v15;
    sint16 v16;
    sint16 v17;
    sint16 v18;
    sint16 v19;

    v2 = TM3_DRAFT_I16(a1 + 3386);
    if (v2 != TM3_DRAFT_I16(a1 + 3388))
    {
        TM3_DRAFT_U8(a1 + 3404) = 0;
        TM3_DRAFT_U8(a1 + 3405) = 0;
        v2 = TM3_DRAFT_I16(a1 + 3386);
    }
    result = -2146893824;
    if (v2 >= 0)
    {
        v4 = 28 * v2 + dword_80089F00;
        if (TM3_DRAFT_U8(v4 + 9) != 3 || TM3_DRAFT_U8(a1 + 3405))
        {
            v15 = 28 * TM3_DRAFT_I16(a1 + 3386) + dword_80089F00;
            result = 5;
            if (TM3_DRAFT_U8(v15 + 9) == 5)
            {
                result = TM3_DRAFT_U8(a1 + 3404);
                if (!TM3_DRAFT_U8(a1 + 3404))
                {
                    result = 1;
                    if (TM3_DRAFT_U16(v15 + 12) >= TM3_DRAFT_I16(a1 + 3384))
                    {
                        TM3_DRAFT_U32(a1 + 3996) = 0;
                        TM3_DRAFT_U8(a1 + 3404) = 1;
                    }
                }
            }
        }
        else
        {
            v5 = TM3_DRAFT_I16(a1 + 3384);
            result = TM3_DRAFT_U16(v4 + 12) < v5;
            if (TM3_DRAFT_U16(v4 + 12) >= v5)
            {
                result = TM3_DRAFT_U8(v4 + 8);
                v6 = result - 1;
                if (result - 1 >= 0)
                {
                    while (1)
                    {
                        v7 = 28 * TM3_DRAFT_I16(a1 + 3386) + dword_80089F00;
                        v8 = 28 * TM3_DRAFT_U16(4 * v6 + TM3_DRAFT_U32(v7 + 4) + 2) + dword_80089F00;
                        result = 4;
                        --v6;
                        if (TM3_DRAFT_U8(v8 + 9) == 4)
                            break;
                        if (v6 < 0)
                            return result;
                    }
                    v16 = TM3_DRAFT_U16(v8) - TM3_DRAFT_U16(v7);
                    v9 = TM3_DRAFT_U16(v8 + 2) - TM3_DRAFT_U16(28 * TM3_DRAFT_I16(a1 + 3386) + dword_80089F00 + 2);
                    v18 = v9;
                    v10 = sub_8005B124(v16 * v16 + v9 * v9);
                    if (v10)
                    {
                        v17 = (v16 << 12) / v10;
                        v19 = (v18 << 12) / v10;
                    }
                    else
                    {
                        v17 = 0;
                        v19 = 0;
                    }
                    v11 = (TM3_DRAFT_I16(a1 + 1540) * v17 + TM3_DRAFT_I16(a1 + 1552) * v19) / 4096;
                    v12 = -4096;
                    if (v11 >= -4096)
                    {
                        v12 = 4096;
                        if (v11 < 4097)
                            v12 = (TM3_DRAFT_I16(a1 + 1540) * v17 + TM3_DRAFT_I16(a1 + 1552) * v19) / 4096;
                    }
                    if (v12 >= 0)
                        v13 = 2048 - TM3_DRAFT_I16(0x8007BCF4u + v12);
                    else
                        v13 = TM3_DRAFT_I16(0x8007BCF4u - v12) + 2048;
                    v14 = v13 >= 684;
                    result = 30;
                    if (!v14)
                    {
                        TM3_DRAFT_U16(a1 + 3406) = 30;
                        result = 1;
                        TM3_DRAFT_U8(a1 + 3405) = 1;
                    }
                }
            }
        }
    }
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003138C(uint32 object)
{
    FUNCTION_MARKER(0x8003138Cu, "SCUS_942.49");
    sint32 delta[3];
    uint32 collision[8];
    uint16 direction[4];
    uint32 random_state[2];
    uint32 previous = object + 32u;
    uint32 current = object + 40u;
    for (uint32 axis = 0u; axis < 3u; ++axis)
        TM3_DRAFT_U16(previous + 2u * axis) = TM3_DRAFT_U16(current + 2u * axis);
    sub_800140C8(current, 136u, object + 48u, current);
    for (uint32 axis = 0u; axis < 3u; ++axis)
    {
        sint32 old_value = TM3_DRAFT_I16(previous + 2u * axis);
        sint32 new_value = TM3_DRAFT_I16(current + 2u * axis);
        TM3_DRAFT_U16(object - 20u + 2u * axis) = (uint16)((old_value + new_value) / 2);
        delta[axis] = new_value - old_value;
    }
    sint32 distance = (sint32)sub_80013D64(TM3_DRAFT_LOCAL_ADDRESS(delta, sizeof(delta)));
    TM3_DRAFT_U32(object - 24u) = (uint32)(distance / 2);
    TM3_DRAFT_U16(object + 50u) = (uint16)(TM3_DRAFT_U16(object + 50u) + TM3_DRAFT_U16(0x80089D08u));
    uint32 hit = sub_80013484(previous, current, 0u, TM3_DRAFT_LOCAL_ADDRESS(collision, sizeof(collision)));
    if (hit == 1u)
    {
        random_state[0] = TM3_DRAFT_U32(0x80089760u);
        random_state[1] = TM3_DRAFT_U32(0x80089764u);
        if (collision[6] != 0xFFFFFFFFu)
            sub_80012C20(TM3_DRAFT_U16(object + 46u), collision[6], current);
        sub_800274E0(current, 0u, 128u, 8u, 1u, 800u, (uint32)(sint32)TM3_DRAFT_I8(TM3_DRAFT_U32(0x80089C94u) + 32u * collision[5]), TM3_DRAFT_LOCAL_ADDRESS(random_state, sizeof(random_state)), 0xFFFFFFFFu);
        return sub_8004A570(object);
    }
    sub_8005B284(object + 48u, TM3_DRAFT_LOCAL_ADDRESS(direction, sizeof(direction)));
    for (uint32 axis = 0u; axis < 3u; ++axis)
        TM3_DRAFT_U32(object + 20u + 4u * axis) = (uint32)(sint32)TM3_DRAFT_I16(current + 2u * axis);
    TM3_DRAFT_U16(object + 4u) = direction[0];
    TM3_DRAFT_U16(object + 10u) = direction[1];
    TM3_DRAFT_U16(object + 16u) = direction[2];
    TM3_DRAFT_U16(object + 6u) = 0u;
    TM3_DRAFT_U16(object) = direction[2];
    TM3_DRAFT_U16(object + 12u) = (uint16)(0u - (uint32)direction[0]);
    sub_800150FC(object, 2u, 0u);
    if (TM3_DRAFT_U16(object + 62u) >= 2u)
    {
        uint16 frame = (uint16)(TM3_DRAFT_U16(object + 60u) + 1u);
        TM3_DRAFT_U16(object + 60u) = frame;
        if ((sint32)frame >= (sint32)TM3_DRAFT_I16(TM3_DRAFT_U32(object + 64u)))
            TM3_DRAFT_U16(object + 60u) = 0u;
        TM3_DRAFT_U16(object + 62u) = 0u;
    }
    uint32 result = TM3_DRAFT_U16(object + 62u) + 1u;
    TM3_DRAFT_U16(object + 62u) = (uint16)result;
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80029ED8(uint32 descriptor, uint32 primitives, uint32 vertices, uint32 ordering, uint32 cursor, uint32 limit)
{
    uint32 projected = 0x1F7FFFF4u;
    uint32 input;
    uint32 primitive;
    uint32 index;
    uint32 reg;
    uint32 packet;
    uint32 first;
    uint32 second;
    uint32 third;
    uint32 fourth;
    uint32 opcode;
    uint32 two_sided;
    uint32 words;
    uint32 bytes;
    sint32 remaining;
    sint32 area;

    if (TM3_DRAFT_U32(cursor) + 52u * TM3_DRAFT_U8(descriptor + 1u) >= limit)
        return 0;
    primitive = primitives + TM3_DRAFT_U32(descriptor + 4u);
    input = vertices + 8u * TM3_DRAFT_U16(descriptor + 2u);
    remaining = TM3_DRAFT_U8(descriptor);
    while (remaining > 0)
    {
        for (reg = 0; reg < 6u; ++reg)
            tm3_draft_gte_write_data(reg, TM3_DRAFT_U32(input + reg * 4u));
        projected += 12u;
        tm3_draft_gte_command(0x280030u);
        remaining -= 3;
        input += 24u;
        TM3_DRAFT_U32(projected) = tm3_draft_gte_read_data(12u);
        TM3_DRAFT_U32(projected + 4u) = tm3_draft_gte_read_data(13u);
        TM3_DRAFT_U32(projected + 8u) = tm3_draft_gte_read_data(14u);
    }
    for (index = 0; index < TM3_DRAFT_U8(descriptor + 1u); ++index, primitive += 20u)
    {
        first = 0x1F800000u + 4u * TM3_DRAFT_U8(primitive + 4u);
        second = 0x1F800000u + 4u * TM3_DRAFT_U8(primitive + 5u);
        third = 0x1F800000u + 4u * TM3_DRAFT_U8(primitive + 6u);
        opcode = TM3_DRAFT_U8(primitive + 3u);
        two_sided = TM3_DRAFT_U8(primitive + 15u);
        tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(first));
        tm3_draft_gte_write_data(13u, TM3_DRAFT_U32(second));
        tm3_draft_gte_write_data(14u, TM3_DRAFT_U32(third));
        packet = TM3_DRAFT_U32(cursor);
        if (opcode == 0x38u)
        {
            TM3_DRAFT_U32(packet + 8u) = TM3_DRAFT_U32(first);
            tm3_draft_gte_command(0x1400006u);
            area = (sint32)tm3_draft_gte_read_data(24u);
            if (!two_sided && area <= 0)
                continue;
            fourth = 0x1F800000u + 4u * TM3_DRAFT_U8(primitive + 7u);
            tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(fourth));
            TM3_DRAFT_U32(packet + 16u) = TM3_DRAFT_U32(second);
            TM3_DRAFT_U32(packet + 24u) = TM3_DRAFT_U32(third);
            TM3_DRAFT_U32(packet + 32u) = TM3_DRAFT_U32(fourth);
            TM3_DRAFT_U32(packet + 4u) = TM3_DRAFT_U32(primitive);
            TM3_DRAFT_U32(packet + 12u) = TM3_DRAFT_U32(primitive + 8u);
            TM3_DRAFT_U32(packet + 20u) = TM3_DRAFT_U32(primitive + 12u);
            TM3_DRAFT_U32(packet + 28u) = TM3_DRAFT_U32(primitive + 16u);
            words = 8u;
            bytes = 36u;
        }
        else
        {
            if (opcode != 0x30u)
                return 0;
            tm3_draft_gte_command(0x1400006u);
            area = (sint32)tm3_draft_gte_read_data(24u);
            TM3_DRAFT_U32(packet + 8u) = TM3_DRAFT_U32(first);
            if (!two_sided && area <= 0)
                continue;
            TM3_DRAFT_U32(packet + 16u) = TM3_DRAFT_U32(second);
            TM3_DRAFT_U32(packet + 24u) = TM3_DRAFT_U32(third);
            TM3_DRAFT_U32(packet + 4u) = TM3_DRAFT_U32(primitive);
            TM3_DRAFT_U32(packet + 12u) = TM3_DRAFT_U32(primitive + 8u);
            TM3_DRAFT_U32(packet + 20u) = TM3_DRAFT_U32(primitive + 12u);
            words = 6u;
            bytes = 28u;
        }
        TM3_DRAFT_U32(packet) = (TM3_DRAFT_U32(ordering) & 0xFFFFFFu) | (words << 24);
        TM3_DRAFT_U32(ordering) = TM3_DRAFT_U32(cursor) & 0xFFFFFFu;
        TM3_DRAFT_U32(cursor) += bytes;
    }
    return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_800525E4(void)
{
    int v0;
    int v1;
    int v2;
    int v3;
    uint32 v4;
    int result;
    int v6;
    uint32 v7;
    uint32 v8;

    TM3_DRAFT_U32(0x80089BE8u + (1) * 4u) = 0;
    if (!sub_80052874())
        TM3_DRAFT_U32(0x800d2968u) = 0;
    if (!sub_80052978())
        TM3_DRAFT_U32(0x800d2964u) = 0;
    v0 = 0;
    v1 = 0;
    if (TM3_DRAFT_U8(TM3_DRAFT_U32(0x800804BCu) + 20))
    {
        v2 = 0;
        while (!sub_8004C6C0(TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804BCu) + v2 + 28)) && TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804BCu) + v2 + 28) != -2146617632)
        {
            ++v1;
            v2 += 28;
            if (v1 >= TM3_DRAFT_U8(TM3_DRAFT_U32(0x800804BCu + (0) * 4u) + 20))
                goto LABEL_11;
        }
        v0 = v1;
    }
LABEL_11:
    v3 = 0;
    if (byte_800800F0)
    {
        v4 = 0x800800DCu;
        do
        {
            if (sub_8004C6C0((uint32)TM3_DRAFT_U32(v4 + 28)) || TM3_DRAFT_U32(v4 + 28) == (uint32)-2146617632)
            {
                if (TM3_DRAFT_I32(0x800d2968u) <= 0)
                {
                    if (TM3_DRAFT_U32(0x800d296cu))
                        TM3_DRAFT_U32(v4 + 28) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804BCu) + 28 * v0 + 28);
                    else
                        TM3_DRAFT_U32(v4 + 28) = TM3_DRAFT_U32(0x800804BCu + (0) * 4u);
                    TM3_DRAFT_U32(TM3_DRAFT_U32(v4 + 28) + (3) * 4u) = 0x800800DCu;
                }
                else
                {
                    TM3_DRAFT_U32(v4 + 28) = (uint32)0x8008012Cu;
                }
            }
            ++v3;
            v4 += 28;
        } while (v3 < (uint8)byte_800800F0);
    }
    result = (uint8)byte_80080140;
    v6 = 0;
    if (byte_80080140)
    {
        v7 = 0x8008012Cu;
        do
        {
            if ((sub_8004C6C0((uint32)TM3_DRAFT_U32(v7 + 28)) || TM3_DRAFT_U32(v7 + 28) == (uint32)-2146617632) && TM3_DRAFT_I32(0x800d2968u) > 0)
            {
                if (TM3_DRAFT_U32(0x800d296cu))
                    v8 = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800804BCu) + 28 * v0 + 28);
                else
                    v8 = TM3_DRAFT_U32(0x800804BCu + (0) * 4u);
                TM3_DRAFT_U32(v7 + 28) = v8;
                TM3_DRAFT_U32(TM3_DRAFT_U32(v7 + 28) + (3) * 4u) = 0x8008012Cu;
            }
            result = ++v6 < (uint8)byte_80080140;
            v7 += 28;
        } while (v6 < (uint8)byte_80080140);
    }
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002D3B4(uint32 object, uint32 matrix)
{
    sint32 displacement[3];
    sint16 normalized[4];
    sint16 origin[3];
    uint32 selected = 0u, best = 0x80000000u;
    uint32 candidate, distance, score, difference, magnitude, sign, dot, scaled;
    sint32 index = 0;
    sint32 direction_x, direction_z;

    origin[0] = TM3_DRAFT_I16(object - 20u);
    origin[1] = TM3_DRAFT_I16(object - 18u);
    origin[2] = TM3_DRAFT_I16(object - 16u);
    while (index < TM3_DRAFT_I32(0x800D340Cu))
    {
        candidate = TM3_DRAFT_U32(0x800D3418u + 4u * (uint32)index);
        ++index;
        if (candidate == object)
            continue;
        if (TM3_DRAFT_I8(object + 0xD00u) == 1)
        {
            if (!TM3_DRAFT_I8(candidate + 0xD00u))
                continue;
            if (TM3_DRAFT_I8(candidate + 0xD00u) == 1 && !TM3_DRAFT_U32(0x800D2F2Cu))
                continue;
        }
        distance = sub_80015764((uint32)(TM3_DRAFT_I16(candidate - 20u) - origin[0]), (uint32)(TM3_DRAFT_I16(candidate - 18u) - origin[1]), (uint32)(TM3_DRAFT_I16(candidate - 16u) - origin[2]));
        direction_x = TM3_DRAFT_I16(matrix + 4u);
        direction_z = TM3_DRAFT_I16(matrix + 16u);
        difference = 1u - distance;
        difference &= (uint32)((sint32)difference >> 31);
        magnitude = 1u - difference;
        displacement[0] = (sint32)((uint32)(sint32)TM3_DRAFT_I16(candidate - 20u) - TM3_DRAFT_U32(matrix + 20u));
        displacement[1] = (sint32)((uint32)(sint32)TM3_DRAFT_I16(candidate - 18u) - TM3_DRAFT_U32(matrix + 24u));
        displacement[2] = (sint32)((uint32)(sint32)TM3_DRAFT_I16(candidate - 16u) - TM3_DRAFT_U32(matrix + 28u));
        sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(displacement, sizeof(displacement)), TM3_DRAFT_LOCAL_ADDRESS(normalized, sizeof(normalized)));
        /* The original uses X and Z from the normalized vector */
        dot = (uint32)((sint64)direction_x * normalized[0]) + (uint32)((sint64)direction_z * normalized[2]);
        scaled = (uint32)((sint32)((dot << 4) + 2048u) >> 12);
        if ((sint32)dot < 0)
        {
            score = scaled + magnitude;
            sign = (uint32)((sint32)score >> 31);
            score = ((score ^ sign) - sign) + 0x80000000u;
        }
        else
            score = scaled - magnitude;
        if ((sint32)score >= (sint32)best)
        {
            best = score;
            selected = candidate;
        }
    }
    return selected;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002ADAC(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, ...)
{
    int result;
    int v19;
    int v20;
    uint32 v21;
    int v22;
    sint16 v23;
    uint32 v24;
    uint32 v25;
    int v26;
    int var4[3];

    result = TM3_DRAFT_U32(a4) + 32 < (unsigned int)a6;
    if (TM3_DRAFT_U32(a4) + 32 < (unsigned int)a6)
    {
        v19 = sub_8005C3F4(a1, a1 + 8, a1 + 16, a1 + 24, TM3_DRAFT_U32(a4) + 8, TM3_DRAFT_U32(a4) + 12, TM3_DRAFT_U32(a4) + 16, TM3_DRAFT_U32(a4) + 20, (int)&v26, (int)var4);
        result = v19 < 9;
        if (v19 >= 9)
        {
            v20 = (0u - ((a7 - v19) & ((a7 - v19) >> 31)));
            if (v20 >= dword_80089DD0)
                v20 = dword_80089DD0 - 1;
            TM3_DRAFT_U32(TM3_DRAFT_U32(a4) + 4) = a2;
            TM3_DRAFT_U8(TM3_DRAFT_U32(a4) + 3) = 5;
            TM3_DRAFT_U8(TM3_DRAFT_U32(a4) + 7) = 40;
            if (a5)
            {
                v21 = (uint32)(4 * v20 + a3);
                TM3_DRAFT_U8(TM3_DRAFT_U32(a4) + 7) |= 2u;
                TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) & 0xFF000000 | TM3_DRAFT_U32(v21) & 0xFFFFFF;
                TM3_DRAFT_U32(v21) = TM3_DRAFT_U32(v21) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
                v22 = TM3_DRAFT_U32(a4) + 24;
                TM3_DRAFT_U32(a4) = v22;
                if (a5 == 4)
                    v23 = 0;
                else
                    v23 = 32 * (a5 & 3);
                sub_8005AEF4(v22, 0, TM3_DRAFT_U32(0x800d2ef0u), v23);
                v24 = (uint32)(4 * v20 + a3);
                TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) & 0xFF000000 | TM3_DRAFT_U32(v24) & 0xFFFFFF;
                TM3_DRAFT_U32(v24) = TM3_DRAFT_U32(v24) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
                result = TM3_DRAFT_U32(a4) + 8;
            }
            else
            {
                v25 = (uint32)(4 * v20 + a3);
                TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) = TM3_DRAFT_U32(TM3_DRAFT_U32(a4)) & 0xFF000000 | TM3_DRAFT_U32(v25) & 0xFFFFFF;
                TM3_DRAFT_U32(v25) = TM3_DRAFT_U32(v25) & 0xFF000000 | TM3_DRAFT_U32(a4) & 0xFFFFFF;
                result = TM3_DRAFT_U32(a4) + 24;
            }
            TM3_DRAFT_U32(a4) = result;
        }
    }
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80029088(uint32 a1)
{
    uint32 v2;
    sint16 v3;
    sint16 v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    signed int v11;
    sint16 v12;
    sint16 v13;
    int v14;
    sint16 v15;
    unsigned int v16;
    int v17;
    unsigned int v18;
    int result;
    int v20[8];
    sint16 v22;
    sint16 v23;
    sint16 v24;
    int v25[4];
    sint16 v26[4];

    v2 = (uint32)(a1 + 12);
    v3 = TM3_DRAFT_U16(a1 + 14);
    v4 = TM3_DRAFT_U16(a1 + 16);
    TM3_DRAFT_U16(a1 + 4) = TM3_DRAFT_U16(a1 + 12);
    TM3_DRAFT_U16(a1 + 6) = v3;
    TM3_DRAFT_U16(a1 + 8) = v4;
    sub_800140C8(v2, 136, (uint32)(a1 + 20), v2);
    v22 = (TM3_DRAFT_I16(a1 + 4) + TM3_DRAFT_I16(a1 + 12)) / 2;
    v5 = TM3_DRAFT_I16(a1 + 6) + TM3_DRAFT_I16(a1 + 14);
    v23 = v5 / 2;
    v6 = TM3_DRAFT_I16(a1 + 8) + TM3_DRAFT_I16(a1 + 16);
    v7 = a1 - 20;
    v24 = v6 / 2;
    TM3_DRAFT_U16(a1 - 20) = v22;
    TM3_DRAFT_U16(v7 + 2) = v5 / 2;
    TM3_DRAFT_U16(v7 + 4) = v6 / 2;
    v8 = TM3_DRAFT_I16(v2 + (1) * 2u);
    v9 = TM3_DRAFT_I16(a1 + 6);
    v10 = TM3_DRAFT_I16(v2 + (2) * 2u) - TM3_DRAFT_I16(a1 + 8);
    v25[0] = TM3_DRAFT_I16(a1 + 12) - TM3_DRAFT_I16(a1 + 4);
    v25[2] = v10;
    v25[1] = v8 - v9;
    v11 = sub_80013D64((int)v25);
    TM3_DRAFT_U32(a1 - 24) = TM3_DRAFT_U16(a1 + 46) - ((TM3_DRAFT_U16(a1 + 46) - v11 / 2) & ((TM3_DRAFT_U16(a1 + 46) - v11 / 2) >> 31));
    if (sub_80013484((uint32)(a1 + 4), (uint32)v2, 0, v20) == 1)
    {
        if (v20[6] != -1)
            sub_80012C20(TM3_DRAFT_U16(a1 + 18), v20[6], v2);
        return sub_8004A570(a1);
    }
    if (TM3_DRAFT_U16(a1 + 10) >> 1 < TM3_DRAFT_U32(a1 + 28) && (sub_80039FD4() & 0x3F) == 1)
    {
        v12 = TM3_DRAFT_U16(a1 + 16);
        v13 = TM3_DRAFT_U16(a1 + 14) - 80;
        v26[0] = TM3_DRAFT_U16(a1 + 12);
        v26[1] = v13;
        v26[2] = v12;
        sub_800276AC((int)v26, 2, 128, 0, 0, -2);
    }
    if (TM3_DRAFT_U16(a1 + 34) >= (unsigned int)TM3_DRAFT_U16(a1 + 36))
    {
        v14 = TM3_DRAFT_U16(a1 + 32);
        if (v14 != 2)
            TM3_DRAFT_U16(a1 + 32) = v14 - 1;
        TM3_DRAFT_U16(a1 + 34) = 0;
    }
    v15 = TM3_DRAFT_U16(a1 + 40);
    v16 = TM3_DRAFT_U32(a1 + 28);
    ++TM3_DRAFT_U16(a1 + 34);
    v17 = TM3_DRAFT_U16(a1 + 42);
    TM3_DRAFT_U16(a1 + 40) = v15 + 8;
    v18 = TM3_DRAFT_U16(a1 + 10);
    TM3_DRAFT_U32(a1 + 28) = v16 + 1;
    result = v17 + 8;
    TM3_DRAFT_U16(a1 + 42) = result;
    if (v18 < v16)
        return sub_8004A570(a1);
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800317D0(uint32 object)
{
    FUNCTION_MARKER(0x800317D0u, "SCUS_942.49");
    uint32 result;
    if (TM3_DRAFT_U16(object + 110u) != 0u)
    {
        if (TM3_DRAFT_U8(object + 321u) == 1u)
            sub_8002DF70(object);
        result = TM3_DRAFT_U32(object + 148u) + 1u;
        uint16 remaining = TM3_DRAFT_U16(object + 110u) - 1u;
        TM3_DRAFT_U16(object + 110u) = remaining;
        TM3_DRAFT_U32(object + 148u) = result;
        return remaining == 0u ? sub_8004A570(object) : result;
    }
    uint32 moved = sub_80026F98(object, object, TM3_DRAFT_U16(object + 104u), TM3_DRAFT_U16(object + 104u));
    for (uint32 axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U32(object + 136u + 4u * axis) = (uint32)(sint32)TM3_DRAFT_I16(object + 8u + 2u * axis);
    if (moved == 0u)
        return sub_8002DEA4(object);

    sint16 steering[4];
    sint16 horizontal[4];
    sint32 forward[4];
    sint32 adjustment[4];
    sint32 velocity[4];
    sint32 normalized[4];
    forward[0] = TM3_DRAFT_I16(object + 120u);
    forward[1] = 0;
    forward[2] = TM3_DRAFT_I16(object + 132u);
    uint32 steering_address = TM3_DRAFT_LOCAL_ADDRESS(steering, sizeof(steering));
    sub_8005B284(object + 16u, steering_address);
    sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(forward, sizeof(forward)), TM3_DRAFT_LOCAL_ADDRESS(horizontal, sizeof(horizontal)));
    sub_80013FB4(TM3_DRAFT_LOCAL_ADDRESS(adjustment, sizeof(adjustment)), 768u, TM3_DRAFT_LOCAL_ADDRESS(horizontal, sizeof(horizontal)));
    for (uint32 axis = 0; axis < 3u; ++axis)
        steering[axis] = (sint16)((uint32)(sint32)steering[axis] + (uint32)adjustment[axis]);
    sub_8005B284(steering_address, steering_address);
    uint32 velocity_address = TM3_DRAFT_LOCAL_ADDRESS(velocity, sizeof(velocity));
    sub_80013FB4(velocity_address, TM3_DRAFT_U16(object + 112u), steering_address);
    for (uint32 axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U16(object + 16u + 2u * axis) = (uint16)velocity[axis];
    sub_8005B254(velocity_address, TM3_DRAFT_LOCAL_ADDRESS(normalized, sizeof(normalized)));
    for (uint32 axis = 0; axis < 3u; ++axis)
        TM3_DRAFT_U16(object + 120u + 6u * axis) = (uint16)normalized[axis];
    if (normalized[0] != 0 && normalized[2] != 0)
    {
        TM3_DRAFT_U16(object + 122u) = 0;
        TM3_DRAFT_U16(object + 116u) = (uint16)normalized[2];
        TM3_DRAFT_U16(object + 128u) = (uint16)(0u - (uint32)normalized[0]);
    }
    sub_800150FC(object + 116u, 2u, 0u);
    if (TM3_DRAFT_U8(object + 321u) != 0u)
        sub_8002DF70(object);
    result = TM3_DRAFT_U32(object + 148u) + 1u;
    uint32 maximum = TM3_DRAFT_U32(object + 152u);
    TM3_DRAFT_U32(object + 148u) = result;
    if (maximum < result)
    {
        TM3_DRAFT_U32(object + 68u) = 0u;
        return sub_8002DEA4(object);
    }
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80038F24(uint32 object, uint32 ordering_table, uint32 cursor, uint32 end, uint32 view)
{
    sint16 direction[4];
    sint16 vertices[4][4];
    sint32 width, height, offset_x, offset_z, depth;
    uint32 direction_address, packet, result, bucket, i;
    FUNCTION_MARKER(0x80038F24u, "SCUS_942.49");
    result = TM3_DRAFT_U32(cursor) + 40u < end;
    if (!result)
        return result;
    direction[0] = TM3_DRAFT_I16(view);
    direction[1] = 0;
    direction[2] = TM3_DRAFT_I16(view + 4u);
    /* TODO Original SVECTOR padding is undefined and unused by the GTE */
    direction_address = TM3_DRAFT_LOCAL_ADDRESS(direction, sizeof(direction));
    sub_8005B284(direction_address, direction_address);
    width = TM3_DRAFT_I16(object + 8u) / 32;
    height = TM3_DRAFT_I16(object + 10u) / 16;
    offset_x = (sint32)((uint32)direction[0] * (uint32)width) >> 12;
    offset_z = (sint32)((uint32)direction[2] * (uint32)width) >> 12;
    vertices[0][0] = vertices[2][0] = (sint16)(TM3_DRAFT_U16(object) - (uint32)offset_x);
    vertices[1][0] = vertices[3][0] = (sint16)(TM3_DRAFT_U16(object) + (uint32)offset_x);
    vertices[0][1] = vertices[1][1] = (sint16)(TM3_DRAFT_U16(object + 2u) - (uint32)height);
    vertices[2][1] = vertices[3][1] = TM3_DRAFT_I16(object + 2u);
    vertices[0][2] = vertices[2][2] = (sint16)(TM3_DRAFT_U16(object + 4u) - (uint32)offset_z);
    vertices[1][2] = vertices[3][2] = (sint16)(TM3_DRAFT_U16(object + 4u) + (uint32)offset_z);
    packet = TM3_DRAFT_U32(cursor);
    for (i = 0; i < 3u; ++i)
    {
        tm3_draft_gte_write_data(2u * i, (uint16)vertices[i][0] | ((uint32)(uint16)vertices[i][1] << 16));
        tm3_draft_gte_write_data(2u * i + 1u, (uint16)vertices[i][2]);
    }
    tm3_draft_gte_command(0x280030u);
    TM3_DRAFT_U32(packet + 12u) = TM3_DRAFT_U32(object + 20u);
    TM3_DRAFT_U32(packet + 20u) = TM3_DRAFT_U32(object + 24u);
    TM3_DRAFT_U32(packet + 8u) = tm3_draft_gte_read_data(12u);
    TM3_DRAFT_U32(packet + 16u) = tm3_draft_gte_read_data(13u);
    TM3_DRAFT_U32(packet + 24u) = tm3_draft_gte_read_data(14u);
    depth = (sint32)tm3_draft_gte_read_data(19u);
    tm3_draft_gte_write_data(0u, (uint16)vertices[3][0] | ((uint32)(uint16)vertices[3][1] << 16));
    tm3_draft_gte_write_data(1u, (uint16)vertices[3][2]);
    tm3_draft_gte_command(0x180001u);
    TM3_DRAFT_U16(packet + 28u) = TM3_DRAFT_U16(object + 28u);
    result = TM3_DRAFT_U16(object + 30u);
    TM3_DRAFT_U16(packet + 36u) = (uint16)result;
    if (depth > 0)
    {
        TM3_DRAFT_U32(packet + 32u) = tm3_draft_gte_read_data(14u);
        depth = (depth >> 2) - 24;
        if (depth < 0)
            depth = 0;
        result = depth < TM3_DRAFT_I32(0x80089DD0u);
        if (result)
        {
            TM3_DRAFT_U8(packet + 3u) = 9u;
            bucket = ordering_table + 4u * (uint32)depth;
            TM3_DRAFT_U32(packet + 4u) = TM3_DRAFT_U32(object + 16u);
            TM3_DRAFT_U8(packet + 7u) = 44u;
            result = (TM3_DRAFT_U32(bucket) & 0x00FFFFFFu) | 0x09000000u;
            TM3_DRAFT_U32(packet) = result;
            TM3_DRAFT_U32(bucket) = packet & 0x00FFFFFFu;
            packet += 40u;
        }
    }
    TM3_DRAFT_U32(cursor) = packet;
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002F36C(uint32 object)
{
    sint16 origin[4];
    sint32 collision[8];
    uint32 origin_address;
    uint32 collision_address;
    uint32 radius = TM3_DRAFT_U16(0x80089D1Cu);
    uint32 ring;
    uint32 sample;

    origin[0] = TM3_DRAFT_I16(object - 20u);
    origin[1] = TM3_DRAFT_I16(object - 18u);
    origin[2] = TM3_DRAFT_I16(object - 16u);
    origin_address = TM3_DRAFT_LOCAL_ADDRESS(origin, sizeof(origin));
    collision_address = TM3_DRAFT_LOCAL_ADDRESS(collision, sizeof(collision));
    for (ring = 0; ring < 8u; ++ring)
    {
        uint32 table = 0x80081E38u + 2048u * ring;
        sint32 horizontal_cosine = TM3_DRAFT_I16(table + 2u);
        sint32 horizontal_sine = -TM3_DRAFT_I16(table);
        sint32 angle = 1024;
        if ((sint32)(ring << 9) < 0)
        {
            table = 0x80081E38u - 2048u * ring;
            horizontal_cosine = TM3_DRAFT_I16(table + 2u);
            horizontal_sine = TM3_DRAFT_I16(table);
        }
        for (sample = 0; sample < 5u; ++sample)
        {
            uint32 destination = 0x8008A550u + ring * 40u + sample * 8u;
            uint32 absolute_angle;
            sint32 scale;
            sint32 vertical_sine;
            angle -= 409;
            absolute_angle = angle < 0 ? (uint32)-angle : (uint32)angle;
            table = 0x80081E38u + 4u * absolute_angle;
            scale = (sint32)(radius * (uint32)(sint32)TM3_DRAFT_I16(table + 2u) + 2048u) >> 12;
            vertical_sine = TM3_DRAFT_I16(table);
            if (angle >= 0)
                vertical_sine = -vertical_sine;
            TM3_DRAFT_U16(destination) = (uint16)((uint16)origin[0] + ((sint32)((uint32)scale * (uint32)horizontal_cosine + 2048u) >> 12));
            TM3_DRAFT_U16(destination + 2u) = (uint16)((uint16)origin[1] - ((sint32)((uint32)scale * (uint32)vertical_sine + 2048u) >> 12));
            TM3_DRAFT_U16(destination + 4u) = (uint16)((uint16)origin[2] + ((sint32)((uint32)scale * (uint32)horizontal_sine + 2048u) >> 12));
        }
    }

    for (ring = 0; ring < 8u; ++ring)
    {
        for (sample = 0; sample < 5u; ++sample)
        {
            uint32 point = 0x8008A550u + ring * 40u + sample * 8u;
            if (sub_80013484(origin_address, point, 0u, collision_address) == 1u && collision[6] != -1)
                sub_80012C20(TM3_DRAFT_U16(0x80089D74u), (uint32)collision[6], 0x8008A550u + sample * 40u);
        }
    }
    return 0;
}

/* Unverified decompiler-derived draft */
void sub_8003858C(uint32 object, uint32 ordering_table, uint32 cursor, uint32 end)
{
    uint32 packet = TM3_DRAFT_U32(cursor), next = packet + 52u;
    uint32 texture, index, near_depth, far_depth, difference, slot;
    sint32 depth, limit;
    FUNCTION_MARKER(0x8003858Cu, "SCUS_942.49");
    if (next >= end)
        return;
    for (index = 0; index < 6u; ++index)
        tm3_draft_gte_write_data(index, TM3_DRAFT_U32(object + 4u + 4u * index));
    TM3_DRAFT_U8(packet + 3u) = 12u;
    TM3_DRAFT_U8(packet + 7u) = 60u;
    tm3_draft_gte_command(0x280030u);
    texture = TM3_DRAFT_U32(0x80089CB8u) + 8u * (uint32)TM3_DRAFT_I8(TM3_DRAFT_U32(0x80089C94u) + 32u * TM3_DRAFT_U8(object + 38u) + 6u);
    TM3_DRAFT_U16(packet + 26u) = TM3_DRAFT_U16(texture + 6u);
    TM3_DRAFT_U16(packet + 14u) = TM3_DRAFT_U16(texture + 2u);
    TM3_DRAFT_U8(packet + 12u) = TM3_DRAFT_U8(texture);
    TM3_DRAFT_U8(packet + 13u) = TM3_DRAFT_U8(texture + 1u);
    TM3_DRAFT_U8(packet + 24u) = TM3_DRAFT_U8(texture + 4u);
    TM3_DRAFT_U8(packet + 25u) = TM3_DRAFT_U8(texture + 1u);
    TM3_DRAFT_U8(packet + 36u) = TM3_DRAFT_U8(texture);
    TM3_DRAFT_U8(packet + 37u) = TM3_DRAFT_U8(texture + 5u);
    TM3_DRAFT_U8(packet + 48u) = TM3_DRAFT_U8(texture + 4u);
    TM3_DRAFT_U8(packet + 49u) = TM3_DRAFT_U8(texture + 5u);
    for (index = 0; index < 3u; ++index)
    {
        TM3_DRAFT_U8(packet + 4u + index) = TM3_DRAFT_U8(object + 36u);
        TM3_DRAFT_U8(packet + 16u + index) = TM3_DRAFT_U8(object + 36u);
        TM3_DRAFT_U8(packet + 28u + index) = TM3_DRAFT_U8(object + 37u);
        TM3_DRAFT_U8(packet + 40u + index) = TM3_DRAFT_U8(object + 37u);
    }
    TM3_DRAFT_U32(packet + 8u) = tm3_draft_gte_read_data(12u);
    TM3_DRAFT_U32(packet + 20u) = tm3_draft_gte_read_data(13u);
    TM3_DRAFT_U32(packet + 32u) = tm3_draft_gte_read_data(14u);
    near_depth = tm3_draft_gte_read_data(17u);
    far_depth = tm3_draft_gte_read_data(19u);
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(object + 28u));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(object + 32u));
    tm3_draft_gte_command(0x180001u);
    difference = near_depth - far_depth;
    depth = (sint32)((difference & (uint32)((sint32)difference >> 31)) + far_depth - 64u) >> 2;
    if (depth <= 0)
        return;
    limit = TM3_DRAFT_I32(0x80089DD0u);
    if (depth >= limit)
        depth = (sint32)((uint32)limit - 1u);
    TM3_DRAFT_U32(packet + 44u) = tm3_draft_gte_read_data(14u);
    slot = ordering_table + ((uint32)depth << 2);
    TM3_DRAFT_U32(packet) = (TM3_DRAFT_U32(slot) & 0xFFFFFFu) | 0x0C000000u;
    TM3_DRAFT_U32(slot) = packet & 0xFFFFFFu;
    TM3_DRAFT_U32(cursor) = next;
}

/* Unverified decompiler-derived draft */
uint32 sub_80044B5C(void)
{
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int result;

    v0 = 0;
    TM3_DRAFT_U32(0x800d2f3cu) = 0;
    TM3_DRAFT_U32(0x800d296cu) = 0;
    if (TM3_DRAFT_U32(0x800d2e90u) > 0)
    {
        v1 = -2146619768;
        do
        {
            TM3_DRAFT_U32(v1 + 388) = 0;
            ++v0;
            v1 += 144;
        } while (v0 < TM3_DRAFT_U32(0x800d2e90u));
    }
    v2 = 0;
    if (TM3_DRAFT_U32(0x800d2f84u))
    {
        TM3_DRAFT_U32(0x800d2f88u) = 1;
        if (TM3_DRAFT_U32(0x800d2e90u) > 0)
        {
            v3 = -2146619768;
            do
            {
                TM3_DRAFT_U32(v3 + 392) = 0;
                TM3_DRAFT_U32(v3 + 396) = 0;
                ++v2;
                v3 += 144;
            } while (v2 < TM3_DRAFT_U32(0x800d2e90u));
        }
        TM3_DRAFT_U32(0x800d2f80u) = 0;
    }
    else
    {
        TM3_DRAFT_U32(0x800d2f88u) = TM3_DRAFT_U32(0x800d2f60u) || TM3_DRAFT_U32(0x800d2f6cu) && TM3_DRAFT_U32(0x800d2f6cu) != 2;
        if (TM3_DRAFT_U32(0x800d2f60u) == 1 && ++TM3_DRAFT_U32(0x800d2e9cu) >= 8u)
            TM3_DRAFT_U32(0x800d2e9cu) = 0;
    }
    if (TM3_DRAFT_U32(0x800d2f6cu) == 1 || !TM3_DRAFT_U32(0x800d2f6cu) && TM3_DRAFT_U32(0x800d2f84u))
    {
        v4 = 0;
        if (TM3_DRAFT_U32(0x800d2e94u) > 0)
        {
            while (1)
            {
                v5 = sub_80044AE0();
                v6 = 0;
                v7 = 0;
                if (TM3_DRAFT_U32(0x800d2e90u) + v4 > 0)
                {
                    v8 = -2146619768;
                    do
                    {
                        if (v5 == TM3_DRAFT_U32(v8 + 24))
                            v7 = 1;
                        ++v6;
                        v8 += 4;
                    } while (v6 < TM3_DRAFT_U32(0x800d2e90u) + v4);
                }
                if (!v7)
                {
                    TM3_DRAFT_U32(4 * (TM3_DRAFT_U32(0x800d2e90u) + v4++) - 2146619768 + 24) = v5;
                    if (v4 >= TM3_DRAFT_U32(0x800d2e94u))
                        break;
                }
            }
        }
    }
    result = -2146619768;
    TM3_DRAFT_U32(0x800d2f84u) = 0;
    TM3_DRAFT_U32(0x800d2f70u) = -1;
    TM3_DRAFT_U32(0x800d2f74u) = 0;
    TM3_DRAFT_U32(0x800d2f78u) = 0;
    TM3_DRAFT_U32(0x800d2f7cu) = 0;
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80043974(uint32 a1, uint32 a2)
{
    unsigned int v3;
    uint8 v4;
    int v5;
    uint32 v6;
    int result;
    uint8 v8[8];

    if (a1 == 1 || a1 == 4)
    {
        if (TM3_DRAFT_U32(0x80089E04u + (5) * 4u))
        {
            sub_8005D4D0(0xCu, 0, 0);
            TM3_DRAFT_U32(0x80089E04u + (5) * 4u) = 0;
        }
        if ((TM3_DRAFT_U8(a2 + (4) * 1u) & 0x80) != 0)
        {
            v5 = TM3_DRAFT_U32(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621688);
        }
        else
        {
            v3 = TM3_DRAFT_U8(a2 + (1) * 1u);
            v8[0] = TM3_DRAFT_U8(a2 + (3) * 1u);
            v4 = TM3_DRAFT_U8(a2 + (4) * 1u);
            v5 = 10 * (v3 >> 4) + (v3 & 0xF);
            v8[2] = 0;
            v8[1] = v4;
            TM3_DRAFT_U32(0x80089E04u + (3) * 4u) = sub_8005DA34(v8);
        }
        v6 = (uint32)(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621688);
        if (v5 != TM3_DRAFT_U32(v6) && v5 != TM3_DRAFT_U32(v6) - 1 || TM3_DRAFT_U32(0x80089E04u + (2) * 4u) < TM3_DRAFT_U32(0x80089E04u + (3) * 4u) || (result = -2146631680, TM3_DRAFT_U32(0x80089E04u + (3) * 4u) < TM3_DRAFT_U32(0x80089E04u + (1) * 4u)))
        {
            ++TM3_DRAFT_U32(0x800d2724u);
            if (TM3_DRAFT_U32(0x800d2724u) >= TM3_DRAFT_U32(0x800d2720u))
                TM3_DRAFT_U32(0x800d2724u) = TM3_DRAFT_U32(0x800d2720u) - 1;
            TM3_DRAFT_U32(0x80089E04u + (1) * 4u) = sub_8005DA34((uint32)(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621684));
            TM3_DRAFT_U32(0x80089E04u + (2) * 4u) = sub_8005DA34((uint32)(12 * TM3_DRAFT_U32(0x800d2724u) - 2146621680));
            TM3_DRAFT_U32(0x80089E04u + (3) * 4u) = TM3_DRAFT_U32(0x80089E04u + (1) * 4u);
            if (TM3_DRAFT_U32(0x80089E04u + (4) * 4u))
                tm3_draft_indirect(TM3_DRAFT_U32(0x80089E04u + 16), 1u, TM3_DRAFT_U32(0x800d2724u));
            return sub_800438F4(TM3_DRAFT_U32(0x80089E04u + (1) * 4u));
        }
    }
    else
    {
        if (TM3_DRAFT_U32(0x80089E04u + (4) * 4u))
            tm3_draft_indirect(TM3_DRAFT_U32(0x80089E04u + 16), 1u, TM3_DRAFT_U32(0x800d2724u));
        do
            result = sub_800438F4(TM3_DRAFT_U32(0x80089E04u + (1) * 4u));
        while (result);
    }
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80030AFC(uint32 object, uint32 ordering_table, uint32 cursor, uint32 end, uint32 view)
{
    uint32 matrix[8];
    sint16 vertices[4][4] = {{-70, 0, -400, 0}, {70, 0, -400, 0}, {-70, 0, 0, 0}, {70, 0, 0, 0}};
    uint32 matrix_address = TM3_DRAFT_LOCAL_ADDRESS(matrix, sizeof(matrix));
    uint32 vertices_address = TM3_DRAFT_LOCAL_ADDRESS(vertices, sizeof(vertices));
    uint32 geometry, texture, result;
    FUNCTION_MARKER(0x80030AFCu, "SCUS_942.49");
    if (TM3_DRAFT_U8(object + 321u) == 1u)
        sub_8002E2D4(object, ordering_table, cursor, end);
    result = TM3_DRAFT_U16(object + 110u);
    if (result != 0u)
        return result;
    geometry = TM3_DRAFT_U32(0x80089D14u);
    sub_8002A190(object + 8u, (uint32)(sint32)TM3_DRAFT_I16(geometry + 74u), (uint32)(sint32)TM3_DRAFT_I16(geometry + 76u), 0x80808080u, TM3_DRAFT_U32(geometry + 80u), ordering_table, cursor, 1u, end);
    sub_8005B8D4();
    sub_8005B614(view, object + 116u, matrix_address);
    sub_8005BD24(matrix_address);
    sub_8005BDB4(matrix_address);
    texture = TM3_DRAFT_U32(TM3_DRAFT_U32(object + 340u) + 4u * TM3_DRAFT_U8(object + 329u) + 8u);
    sub_8002A72C(vertices_address, 0x808080u, texture, ordering_table, cursor, 1u, end, 64u);
    vertices[0][0] = vertices[1][0] = vertices[2][0] = vertices[3][0] = 0;
    vertices[0][1] = vertices[2][1] = 70;
    vertices[1][1] = vertices[3][1] = -70;
    sub_8002A72C(vertices_address, 0x808080u, texture, ordering_table, cursor, 1u, end, 0u);
    sub_8005B978();
    result = TM3_DRAFT_U8(object + 335u);
    if (result != 0u)
        return sub_8002E6CC(object, ordering_table, cursor, end);
    return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8002E6CC(uint32 object, uint32 ordering_table, uint32 cursor, uint32 end)
{
    FUNCTION_MARKER(0x8002E6CCu, "SCUS_942.49");
    sint16 corners[4][4], transformed[4][4];
    uint32 index = TM3_DRAFT_U8(object + 326u);
    uint32 width = TM3_DRAFT_U8(0x8008A9E0u + index);
    uint32 height = TM3_DRAFT_U8(0x8008A808u + index);
    uint32 depth = TM3_DRAFT_U16(0x8008A9F8u + (index << 1));
    uint32 corners_ptr, transformed_ptr, vertex;
    corners[0][0] = (sint16)(0u - (width >> 1));
    corners[1][0] = (sint16)(width >> 1);
    corners[2][0] = (sint16)(0u - (height >> 1));
    corners[3][0] = (sint16)(height >> 1);
    corners[0][2] = corners[1][2] = (sint16)(0u - (depth >> 1));
    corners[2][2] = corners[3][2] = (sint16)(depth >> 1);
    for (vertex = 0u; vertex < 4u; ++vertex)
        corners[vertex][1] = 0;
    corners_ptr = TM3_DRAFT_LOCAL_ADDRESS(corners, sizeof(corners));
    transformed_ptr = TM3_DRAFT_LOCAL_ADDRESS(transformed, sizeof(transformed));
    sub_8005B8D4();
    for (vertex = 0u; vertex < 4u; ++vertex)
    {
        sint16 x, y, z;
        sub_8005BB84(object + 116u, corners_ptr + vertex * 8u, transformed_ptr + vertex * 8u);
        x = (sint16)((uint32)(sint32)transformed[vertex][0] + (uint32)(sint32)TM3_DRAFT_I16(object + 8u));
        y = (sint16)((uint32)(sint32)transformed[vertex][1] + (uint32)(sint32)TM3_DRAFT_I16(object + 10u));
        z = (sint16)((uint32)(sint32)transformed[vertex][2] + (uint32)(sint32)TM3_DRAFT_I16(object + 12u));
        transformed[vertex][0] = x;
        transformed[vertex][2] = z;
        transformed[vertex][1] = y;
        transformed[vertex][1] = (sint16)sub_80013420((uint32)(sint32)x, (uint32)(sint32)y, (uint32)(sint32)z);
    }
    sub_8005B978();
    return sub_8002ADAC(transformed_ptr, 0x101010u, ordering_table, cursor, 4u, end, 96u);
}

/* Unverified decompiler-derived draft */
uint32 sub_8004B1AC(uint32 a1, uint32 a2)
{
    uint8 tuple_23[8];
    uint8 tuple_20[8];
    uint8 tuple_15[16];
    int v3;
    sint32 v5;
    int v6;
    int v8;
    int v9;
    int v10;
    int v11;
    unsigned int v12;
    int v13;
    int v14;
    int v18[4];
    int v19[4];
    sint16 v26[4];
    sint16 v27[4];

    v3 = TM3_DRAFT_U32(a2 + 48);
    if (v3 == a1)
        return 0;
    v5 = sub_80028A88((uint32)(a2 + 52), a1) != 0;
    v6 = a1 - 20;
    if (!v5)
        return 0;
    v8 = TM3_DRAFT_I16(v6 + 2);
    v9 = TM3_DRAFT_I16(v6 + 4);
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 0u) = TM3_DRAFT_U16(a1 - 20);
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 2u) = v8;
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 4u) = v9;
    v10 = TM3_DRAFT_I16(a2 - 20 + 2);
    v11 = TM3_DRAFT_I16(a2 - 20 + 4);
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 0u) = TM3_DRAFT_U16(a2 - 20);
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 2u) = v10;
    TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 4u) = v11;
    v18[0] = TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_23, sizeof(tuple_23)) + 0u) - TM3_DRAFT_I16(TM3_DRAFT_LOCAL_ADDRESS(tuple_20, sizeof(tuple_20)) + 0u);
    v18[1] = v10 - v8;
    v18[2] = v11 - v9;
    v12 = sub_80013D64((int)v18);
    v13 = 1 - ((1 - v12) & ((int)(1 - v12) >> 31));
    if (sub_80048078(12))
        v14 = 4 * (7936 / v13 + 256);
    else
        v14 = 7936 / v13 + 256;
    if (TM3_DRAFT_U8(a1 + 3328) != 1 && TM3_DRAFT_U8(v3 + 3328) == 2)
        v14 -= v14 / 4;
    sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(v18, sizeof(v18)), TM3_DRAFT_LOCAL_ADDRESS(v26, sizeof(v26)));
    sub_80013F78((int)(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u), v14, v26);
    v27[0] = -v26[2];
    v27[2] = v26[0];
    v27[1] = v26[1];
    sub_80013F78((int)v19, v14 / 4, v27);
    TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u) += v19[0];
    TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 8u) += v19[2];
    TM3_DRAFT_I32(TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 4u) += v19[1];
    sub_80033D4C(a1, (TM3_DRAFT_LOCAL_ADDRESS(tuple_15, sizeof(tuple_15)) + 0u));
    return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_800274E0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9)
{
    FUNCTION_MARKER(0x800274E0u, "SCUS_942.49");
    /* TODO Original descriptor padding byte15 remains uninitialized */
    uint32 payload_words[5];
    uint16 position[4];
    uint32 payload = TM3_DRAFT_LOCAL_ADDRESS(payload_words, sizeof(payload_words));
    TM3_DRAFT_U8(payload) = 6u;
    TM3_DRAFT_U8(payload + 1u) = 0u;
    TM3_DRAFT_U16(payload + 2u) = (uint16)a3;
    for (uint32 axis = 0u; axis < 3u; ++axis)
        TM3_DRAFT_U16(payload + 4u + 2u * axis) = TM3_DRAFT_U16(a1 + 2u * axis);
    TM3_DRAFT_U16(payload + 10u) = 20u;
    TM3_DRAFT_U8(payload + 12u) = 3u;
    uint32 triple = (a3 << 1u) + a3;
    TM3_DRAFT_U16(payload + 18u) = (uint16)((sint32)(triple + (triple >> 31u)) >> 1);
    TM3_DRAFT_U8(payload + 13u) = (uint8)a4;
    TM3_DRAFT_U16(payload + 16u) = (uint16)a3;
    TM3_DRAFT_U8(payload + 14u) = 1u;
    uint32 angle = 0u;
    uint32 radius = 0u;
    uint32 negative_table = 0x80081E38u;
    uint32 positive_table = negative_table;
    for (sint32 index = 0; index < (sint32)a5; ++index)
    {
        sub_8004A294(6u, payload);
        uint32 sign = (uint32)((sint32)angle >> 31);
        uint32 magnitude = (angle ^ sign) - sign;
        uint32 x_product = (uint32)(sint32)TM3_DRAFT_I16(0x80081E3Au + 4u * magnitude) * radius;
        TM3_DRAFT_U16(payload + 4u) = (uint16)(TM3_DRAFT_U16(a1) + (uint32)((sint32)(x_product + 2048u) >> 12));
        uint32 z_basis = (sint32)angle < 0 ? (uint32)(sint32)TM3_DRAFT_I16(negative_table) : 0u - (uint32)(sint32)TM3_DRAFT_I16(positive_table);
        uint32 z_product = z_basis * radius;
        TM3_DRAFT_U16(payload + 8u) = (uint16)((uint32)(sint32)TM3_DRAFT_I16(a1 + 4u) + (uint32)((sint32)(z_product + 2048u) >> 12));
        negative_table -= 4096u;
        positive_table += 4096u;
        angle += 1024u;
        radius += 200u;
    }
    for (uint32 axis = 0u; axis < 3u; ++axis)
        position[axis] = TM3_DRAFT_U16(a1 + 2u * axis);
    return sub_8004A294(4u, a2, TM3_DRAFT_LOCAL_ADDRESS(position, sizeof(position)), a8, a6, a7, a9, 12u);
}

/* Unverified decompiler-derived draft */
uint32 sub_800203D8(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
    int v17;
    int v18;
    int v19;
    int result;
    uint32 v21;
    uint32 v22;
    int v23;
    int v24;
    int v25[4];
    int v26[4];
    _WORD v27[4];
    _WORD v28[4];

    sub_800155A4((a1 + (8) * 4u), a2, v26);
    sub_800155A4((a1 + (11) * 4u), a2, v25);
    TM3_DRAFT_I32(a1 + (24) * 4u) = sub_80013D08(v26);
    if (v26[0] || v26[1] || v26[2])
    {
        sub_8001498C(v26, v25, TM3_DRAFT_I32(a1 + (26) * 4u), 18);
        v24 = sub_80013D08(v26);
        if (sub_80015684(a5 * a3, TM3_DRAFT_I32(a1 + (26) * 4u), 18) >= v24)
            return sub_8001498C((a1 + (11) * 4u), v26, -TM3_DRAFT_I32(a1 + (27) * 4u), 12);
        sub_800146A4(v26, v28);
        v21 = (a1 + (11) * 4u);
        v22 = v28;
        v23 = (0u - a5 * a3);
    }
    else
    {
        if (a4 * a3 >= sub_80013D08(v25))
        {
            v17 = TM3_DRAFT_I32(a1 + (12) * 4u);
            v18 = TM3_DRAFT_I32(a1 + (13) * 4u);
            v19 = v25[1];
            result = v25[2];
            TM3_DRAFT_I32(a1 + (11) * 4u) -= v25[0];
            TM3_DRAFT_I32(a1 + (12) * 4u) = v17 - v19;
            TM3_DRAFT_I32(a1 + (13) * 4u) = v18 - result;
            return result;
        }
        sub_800146A4(v25, v27);
        v21 = (a1 + (11) * 4u);
        v22 = v27;
        v23 = (0u - a5) * a3;
    }
    return sub_800148DC(v21, v22, v23, 12);
}

/* Unverified decompiler-derived draft */
uint32 sub_80015FB8(uint32 a1, uint32 a2)
{
    uint32 ida_A0, ida_A2, ida_T3, ida_T4, ida_T5, ida_V0; /* TODO Explicit adapter values */
    int v3;
    int v4;
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int v13;
    int v15;
    int v16;
    int v17;
    int v18;
    int v19;
    int v20;
    int v27;
    sint32 v28;
    sint32 v29;
    uint32 v30;

    v3 = TM3_DRAFT_I16(a2 + 4);
    v4 = 4 * TM3_DRAFT_U16(a1 + 4);
    ida_T5 = TM3_DRAFT_I16(a2 + 8) - v3;
    v6 = TM3_DRAFT_U32(TM3_DRAFT_U32(a2) + 28);
    v7 = TM3_DRAFT_I16(v4 + v6);
    v8 = TM3_DRAFT_I16(4 * TM3_DRAFT_U16(a1 + 6) + v6);
    v9 = v3;
    if (ida_T5 > 0)
    {
        v10 = TM3_DRAFT_I16(a2 + 8);
    }
    else
    {
        v9 = TM3_DRAFT_I16(a2 + 8);
        v10 = TM3_DRAFT_I16(a2 + 4);
    }
    ida_T4 = v8 - v7;
    if (v8 - v7 > 0)
    {
        if (v10 < v7 || v8 < v9)
            return 0;
    }
    else if (v10 < v8 || v7 < v9)
    {
        return 0;
    }
    v13 = TM3_DRAFT_I16(a2 + 6);
    ida_T3 = TM3_DRAFT_I16(a2 + 10) - v13;
    v15 = TM3_DRAFT_U32(TM3_DRAFT_U32(a2) + 28);
    v16 = 4 * TM3_DRAFT_U16(a1 + 6) + v15;
    v17 = TM3_DRAFT_I16(4 * TM3_DRAFT_U16(a1 + 4) + v15 + 2);
    v18 = TM3_DRAFT_I16(v16 + 2);
    v19 = v13;
    if (ida_T3 > 0)
    {
        v20 = TM3_DRAFT_I16(a2 + 10);
    }
    else
    {
        v19 = TM3_DRAFT_I16(a2 + 10);
        v20 = TM3_DRAFT_I16(a2 + 6);
    }
    ida_A2 = v18 - v17;
    if (v18 - v17 > 0)
    {
        if (v20 < v17 || v18 < v19)
            return 0;
    }
    else if (v20 < v18 || v17 < v19)
    {
        return 0;
    }
    /* TODO GTE adapters */
    tm3_draft_gte_write_control(0u, ida_T5);
    tm3_draft_gte_write_control(2u, ida_T4);
    ida_V0 = v3 - v7;
    /* TODO GTE adapters */
    tm3_draft_gte_write_control(4u, ida_V0);
    tm3_draft_gte_write_data(9u, ida_T3);
    tm3_draft_gte_write_data(10u, ida_A2);
    ida_V0 = v13 - v17;
    /* TODO GTE adapters */
    tm3_draft_gte_write_data(11u, ida_V0);
    tm3_draft_gte_command(0x170000Cu);
    ida_V0 = tm3_draft_gte_read_data(26u);
    ida_A0 = tm3_draft_gte_read_data(27u);
    ida_A2 = tm3_draft_gte_read_data(25u);
    v27 = (0u - ida_V0);
    if (ida_A0 < 0)
        return 0;
    v28 = v27 < 0;
    v29 = ida_A0 < v27;
    if (v28 || v29 || ida_A2 < 0 || ida_A0 < ida_A2 || !ida_A0)
        return 0;
    v30 = TM3_DRAFT_U32(a2 + 20);
    if (v30)
    {
        TM3_DRAFT_U16(v30) = v3 + ida_A2 * TM3_DRAFT_U32(a2 + 12) / ida_A0;
        TM3_DRAFT_U16(TM3_DRAFT_U32(a2 + 20) + 2) = v13 + ida_A2 * TM3_DRAFT_U32(a2 + 16) / ida_A0;
    }
    return 1;
}

/* Unverified decompiler-derived draft */
uint32 sub_80046694(uint32 a1)
{
    uint32 v2;
    unsigned int v3;
    unsigned int v4;
    int result;
    int v6[4];
    int v7[4];

    if (sub_800474AC() && TM3_DRAFT_U32(0x800d2e8cu) && TM3_DRAFT_U32(0x800d2f28u))
    {
        v6[0] = (int)TM3_DRAFT_U32(0x800883B0u + (0) * 4u);
        v6[1] = (int)TM3_DRAFT_U32(0x800883B4u + (0) * 4u);
        v6[2] = (int)off_800883B8;
        v7[0] = (int)TM3_DRAFT_U32(0x800883CCu + (0) * 4u);
        v7[1] = (int)TM3_DRAFT_U32(0x800883D0u + (0) * 4u);
        v7[2] = (int)off_800883D4;
        v2 = v7;
        if (TM3_DRAFT_U32(0x800d2f28u) == 1)
            v2 = v6;
        sub_80045CD0(a1, 0x8007F11Cu, v2, 3);
        TM3_DRAFT_U32(a1 + (33524) * 4u) = TM3_DRAFT_U32(a1 + (33524) * 4u) & 0xFF000000 | TM3_DRAFT_U32(a1 + (22) * 4u) & 0xFFFFFF;
        v3 = TM3_DRAFT_U32(a1 + (22) * 4u) & 0xFF000000 | (unsigned int)((a1 + (33524) * 4u)) & 0xFFFFFF;
        TM3_DRAFT_U32(a1 + (22) * 4u) = v3;
        TM3_DRAFT_U32(a1 + (33528) * 4u) = TM3_DRAFT_U32(a1 + (33528) * 4u) & 0xFF000000 | v3 & 0xFFFFFF;
        v4 = TM3_DRAFT_U32(a1 + (22) * 4u) & 0xFF000000 | (unsigned int)((a1 + (33528) * 4u)) & 0xFFFFFF;
        TM3_DRAFT_U32(a1 + (22) * 4u) = v4;
        TM3_DRAFT_U32(a1 + (33532) * 4u) = TM3_DRAFT_U32(a1 + (33532) * 4u) & 0xFF000000 | v4 & 0xFFFFFF;
        result = TM3_DRAFT_U32(a1 + (22) * 4u) & 0xFF000000 | (unsigned int)((a1 + (33532) * 4u)) & 0xFFFFFF;
        TM3_DRAFT_U32(a1 + (22) * 4u) = result;
    }
    else
    {
        result = 1;
        if (TM3_DRAFT_U32(0x800d2f2cu))
        {
            if (TM3_DRAFT_U32(0x800d2f2cu) == 1)
                return sub_800460C8(a1);
        }
        else
        {
            return sub_80045CF4((int)a1);
        }
    }
    return result;
}
