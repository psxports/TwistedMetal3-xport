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
uint32 sub_8004AFA8(uint32 vehicle, uint32 effect)
{
    uint32 delta[4], force[4];
    uint16 direction[4];
    uint32 delta_address, force_address, direction_address;
    uint32 slot, distance, value, product, attenuation;
    unsigned axis;
    FUNCTION_MARKER(0x8004AFA8u, "SCUS_942.49");
    if (!sub_80028A88(effect + 228u, vehicle))
        return 0;
    if (TM3_DRAFT_I16(effect + 264u) == 0 && TM3_DRAFT_U32(effect + 224u) == vehicle)
        return 0;
    if (TM3_DRAFT_U32(effect + 248u) == 1u)
    {
        slot = effect + (TM3_DRAFT_U32(vehicle + 3920u) << 2) + 160u;
        if (TM3_DRAFT_U32(slot))
            return 0;
        TM3_DRAFT_U32(slot) = 1;
    }
    for (axis = 0; axis < 3; ++axis)
        delta[axis] = (uint32)(sint32)TM3_DRAFT_I16(vehicle - 20u + 2u * axis)
                    - (uint32)(sint32)TM3_DRAFT_I16(effect - 20u + 2u * axis);
    delta_address = TM3_DRAFT_LOCAL_ADDRESS(delta, sizeof(delta));
    force_address = TM3_DRAFT_LOCAL_ADDRESS(force, sizeof(force));
    direction_address = TM3_DRAFT_LOCAL_ADDRESS(direction, sizeof(direction));
    distance = sub_80013D64(delta_address);
    value = TM3_DRAFT_U32(effect + 148u);
    product = (uint32)((sint64)(sint32)value * (sint64)(sint32)distance);
    if ((sint32)product < 0)
        product += 2047u;
    attenuation = value - (uint32)((sint32)product >> 11);
    sub_8005B240(delta_address, direction_address);
    sub_80013F78(force_address, attenuation, direction_address);
    value = TM3_DRAFT_U32(effect + 152u);
    product = (uint32)((sint64)(sint32)value * (sint64)(sint32)distance);
    if ((sint32)product < 0)
        product += 2047u;
    attenuation = value - (uint32)((sint32)product >> 11);
    force[1] -= attenuation << 12;
    sub_80033D4C(vehicle, force_address);
    value = TM3_DRAFT_U32(effect + 156u);
    product = (uint32)((sint64)(sint32)value * (sint64)(sint32)distance);
    if ((sint32)product < 0)
        product += 2047u;
    attenuation = value - (uint32)((sint32)product >> 11);
    sub_800239C0(vehicle, TM3_DRAFT_U32(effect + 224u), attenuation, 0u, 0u);
    return 1;
}
