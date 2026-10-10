#include "game_draft_signatures.h"

/* Round signed fixed point products toward zero after 32 bit wrapping */
static sint32 tm3_ai_shift_zero(uint32 value, uint32 shift)
{
    if ((sint32)value < 0)
        value += (1u << shift) - 1u;
    return (sint32)value >> shift;
}

static uint32 tm3_ai_product(sint32 left, sint32 right)
{
    return (uint32)((sint64)left * right);
}

/* Preserve MIPS signed division result including its hardware corner cases */
static sint32 tm3_ai_divide(uint32 numerator, sint32 denominator)
{
    if (!denominator)
        return (sint32)numerator < 0 ? 1 : -1;
    if (numerator == 0x80000000u && denominator == -1)
        return (sint32)0x80000000u;
    return (sint32)numerator / denominator;
}

uint32 sub_8001D390(uint32 object)
{
    uint32 callback = sub_8001AE7C(object);
    uint32 model, node, front, left, right, specification, vertices;
    sint32 speed, x, y, width, ratio, turn, dot;
    sint16 dx, dy;

    if (callback)
        return callback;
    if (TM3_DRAFT_I16(object + 0xD3Au) >= 0)
    {
        callback = TM3_DRAFT_U32(object + 0xCFCu);
        TM3_DRAFT_U32(object + 0xCFCu) = 0;
        return callback;
    }

    speed = TM3_DRAFT_I16(object + 0xD40u);
    x = TM3_DRAFT_I16(object + 0x604u);
    y = TM3_DRAFT_I16(object + 0x610u);
    model = TM3_DRAFT_U32(object + 0xD44u);
    node = TM3_DRAFT_U32(object + 0xD48u);

    if (!TM3_DRAFT_U32(object + 0xF6Cu))
    {
        TM3_DRAFT_U16(object + 0xD0Au) += 1u;
        x = tm3_ai_shift_zero(tm3_ai_product(speed, x), 12u);
        y = tm3_ai_shift_zero(tm3_ai_product(speed, y), 12u);
        TM3_DRAFT_U16(object + 0xD1Cu) = (uint16)tm3_ai_shift_zero(0u - ((uint32)x << 11), 12u);
        TM3_DRAFT_U16(object + 0xD1Eu) = (uint16)tm3_ai_shift_zero(0u - ((uint32)y << 11), 12u);
        TM3_DRAFT_U16(object + 0xD20u) = 0;
        TM3_DRAFT_U16(object + 0xD22u) = 0;
        TM3_DRAFT_U16(object + 0xD24u) = 0;
        TM3_DRAFT_U16(object + 0xD26u) = 0;
        front = sub_800163A0(model, node, object + 0xD14u, object + 0xD1Cu, object + 0xD2Cu);
        if (TM3_DRAFT_I16(object + 0xD0Au) >= 41 || front)
            sub_8001C9F8(object);
        return 0;
    }

    TM3_DRAFT_U16(object + 0xD1Cu) = (uint16)tm3_ai_shift_zero(tm3_ai_product(speed, x), 12u);
    TM3_DRAFT_U16(object + 0xD1Eu) = (uint16)tm3_ai_shift_zero(tm3_ai_product(speed, y), 12u);
    specification = TM3_DRAFT_U32(object + 0xFC8u);
    width = TM3_DRAFT_I16(specification + 0x5Au);
    TM3_DRAFT_U16(object + 0xD20u) = (uint16)tm3_ai_shift_zero(tm3_ai_product(width, x - y), 12u);
    specification = TM3_DRAFT_U32(object + 0xFC8u);
    width = TM3_DRAFT_I16(specification + 0x5Au);
    TM3_DRAFT_U16(object + 0xD22u) = (uint16)tm3_ai_shift_zero(tm3_ai_product(width, y + x), 12u);
    specification = TM3_DRAFT_U32(object + 0xFC8u);
    width = TM3_DRAFT_I16(specification + 0x5Au);
    TM3_DRAFT_U16(object + 0xD24u) = (uint16)tm3_ai_shift_zero(tm3_ai_product(width, x + y), 12u);
    specification = TM3_DRAFT_U32(object + 0xFC8u);
    width = TM3_DRAFT_I16(specification + 0x5Au);
    TM3_DRAFT_U16(object + 0xD26u) = (uint16)tm3_ai_shift_zero(tm3_ai_product(width, y - x), 12u);

    front = sub_800163A0(model, node, object + 0xD14u, object + 0xD1Cu, object + 0xD2Cu);
    left = sub_800163A0(TM3_DRAFT_U32(object + 0xD44u), TM3_DRAFT_U32(object + 0xD48u), object + 0xD14u, object + 0xD20u, 0);
    right = sub_800163A0(TM3_DRAFT_U32(object + 0xD44u), TM3_DRAFT_U32(object + 0xD48u), object + 0xD14u, object + 0xD24u, 0);

    if (!left || !right)
    {
        specification = TM3_DRAFT_U32(object + 0xFC8u);
        if (!front)
        {
            TM3_DRAFT_U8(object + 0xD04u) = 0;
            TM3_DRAFT_U8(object + 0xD02u) = left ? 1u : right ? 255u : 0u;
            TM3_DRAFT_U8(object + 0xD03u) = TM3_DRAFT_U8(specification + 0x54u);
            return 0;
        }
        speed = TM3_DRAFT_I16(object + 0xD40u);
        if (speed >= TM3_DRAFT_I16(specification + 0x5Au))
        {
            dx = (sint16)(TM3_DRAFT_U16(object + 0xD2Cu) - TM3_DRAFT_U16(object + 0xD14u));
            dy = (sint16)(TM3_DRAFT_U16(object + 0xD2Eu) - TM3_DRAFT_U16(object + 0xD16u));
            ratio = tm3_ai_divide(sub_8005B124(tm3_ai_product(dx, dx) + tm3_ai_product(dy, dy)) << 12, TM3_DRAFT_I16(object + 0xD40u));
            if (ratio < 0)
                ratio = 0;
            else if (ratio > 4096)
                ratio = 4096;
            specification = TM3_DRAFT_U32(object + 0xFC8u);
            TM3_DRAFT_U8(object + 0xD03u) = (uint8)tm3_ai_shift_zero(tm3_ai_product(TM3_DRAFT_U8(specification + 0x54u), ratio), 12u);
            TM3_DRAFT_U8(object + 0xD04u) = 0;
            turn = tm3_ai_shift_zero((uint32)ratio, 8u);
            if (!left)
            {
                if (right)
                    turn = -turn;
                else
                {
                    model = TM3_DRAFT_U32(object + 0xD44u);
                    vertices = TM3_DRAFT_U32(model + 0x1Cu);
                    x = vertices + 4u * TM3_DRAFT_U16(front + 6u);
                    y = vertices + 4u * TM3_DRAFT_U16(front + 4u);
                    dot = (sint32)(tm3_ai_product(TM3_DRAFT_I16(object + 0xD1Cu), TM3_DRAFT_I16((uint32)x) - TM3_DRAFT_I16((uint32)y)) + tm3_ai_product(TM3_DRAFT_I16(object + 0xD1Eu), TM3_DRAFT_I16((uint32)x + 2u) - TM3_DRAFT_I16((uint32)y + 2u)));
                    if (dot > 0)
                        turn = -turn;
                }
            }
            TM3_DRAFT_U8(object + 0xD02u) = (uint8)turn;
            return 0;
        }
    }

    if (TM3_DRAFT_I16(object + 0xD40u) >= 201)
    {
        TM3_DRAFT_U8(object + 0xD03u) = 0;
        TM3_DRAFT_U8(object + 0xD04u) = 15;
        TM3_DRAFT_U8(object + 0xD02u) = 0;
        return 0;
    }
    specification = TM3_DRAFT_U32(object + 0xFC8u);
    TM3_DRAFT_U8(object + 0xD04u) = 0;
    TM3_DRAFT_U8(object + 0xD03u) = TM3_DRAFT_U8(specification + 0x55u);
    TM3_DRAFT_U8(object + 0xD02u) = (sub_80039FD4() & 1u) ? 16u : 240u;
    sub_8001C9EC(object);
    return 0;
}

uint32 sub_8001E2BC(uint32 object)
{
    uint32 value;
    uint32 specification;
    int phase;

    if (TM3_DRAFT_I16(object + 0xD40u) >= 200)
    {
        value = TM3_DRAFT_U32(object + 0xCFCu);
        TM3_DRAFT_U16(object + 0xD0Cu) = 10;
        TM3_DRAFT_U32(object + 0xCFCu) = 0;
        return value;
    }

    TM3_DRAFT_U16(object + 0xD0Cu) = (uint16)(TM3_DRAFT_U16(object + 0xD0Cu) - 1u);
    if (TM3_DRAFT_I16(object + 0xD0Cu) > 0)
        return 0;

    phase = TM3_DRAFT_I16(object + 0xD0Eu);
    switch (phase)
    {
        case 0:
        case 2:
        case 4:
            TM3_DRAFT_U8(object + 0xD02u) = phase == 0 ? 0u : (phase == 2 ? 240u : 16u);
            sub_8001C9EC(object);
            specification = TM3_DRAFT_U32(object + 0xFC8u);
            value = TM3_DRAFT_U8(specification + 0x55u);
            TM3_DRAFT_U8(object + 0xD04u) = 0;
            TM3_DRAFT_U8(object + 0xD03u) = (uint8)value;
            break;
        case 1:
        case 3:
        case 5:
            TM3_DRAFT_U8(object + 0xD02u) = phase == 1 ? 0u : 240u;
            sub_8001C9F8(object);
            specification = TM3_DRAFT_U32(object + 0xFC8u);
            value = TM3_DRAFT_U8(specification + 0x54u);
            TM3_DRAFT_U8(object + 0xD04u) = 0;
            TM3_DRAFT_U8(object + 0xD03u) = (uint8)value;
            break;
        case 6:
            TM3_DRAFT_U32(object + 0xF9Cu) = 0;
            break;
        case 7:
            TM3_DRAFT_U16(object + 0xD4Eu) = 30;
            break;
        default:
            break;
    }

    TM3_DRAFT_U16(object + 0xD0Eu) = (uint16)(TM3_DRAFT_U16(object + 0xD0Eu) + 1u);
    if (TM3_DRAFT_I16(object + 0xD0Eu) >= 8)
        TM3_DRAFT_U16(object + 0xD0Eu) = 0;
    TM3_DRAFT_U16(object + 0xD0Cu) = 10;
    return 0;
}
