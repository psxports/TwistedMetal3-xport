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
uint32 sub_80026E28(uint32 object, uint32 parameters)
{
    uint32 owner = TM3_DRAFT_U32(parameters);
    uint32 position;
    uint32 axis;
    uint32 length;
    sint32 velocity[3];

    TM3_DRAFT_U32(object + 24u) = owner;
    if (TM3_DRAFT_U32(owner - 48u))
    {
        TM3_DRAFT_U32(object + 28u) = TM3_DRAFT_U32(0x800896E0u);
        TM3_DRAFT_U32(object + 32u) = TM3_DRAFT_U32(0x800896E4u);
    }
    else if (TM3_DRAFT_I8(owner + 0xD00u) == 1)
    {
        sub_800496E0(object + 28u, 0x800880C0u, TM3_DRAFT_U32(owner + 0xF54u) + 1u);
    }
    else
    {
        uint32 name = TM3_DRAFT_U32(0x8007FE8Cu + 4u * TM3_DRAFT_U32(owner + 0xF58u));
        sub_800567F4(object + 28u, name);
    }

    TM3_DRAFT_U32(object + 44u) = 0x800896E8u;
    position = TM3_DRAFT_U32(parameters + 4u);
    TM3_DRAFT_U16(object + 8u) = TM3_DRAFT_U16(position);
    TM3_DRAFT_U16(object + 10u) = TM3_DRAFT_U16(position + 2u);
    TM3_DRAFT_U16(object + 12u) = TM3_DRAFT_U16(position + 4u);
    TM3_DRAFT_U16(object + 4u) = TM3_DRAFT_U16(object + 12u);
    TM3_DRAFT_U16(object) = TM3_DRAFT_U16(object + 8u);
    TM3_DRAFT_U16(object + 2u) = TM3_DRAFT_U16(object + 10u);
    axis = TM3_DRAFT_U32(parameters + 8u);
    length = TM3_DRAFT_U32(parameters + 12u);
    sub_80013FB4(TM3_DRAFT_LOCAL_ADDRESS(velocity, sizeof(velocity)), length, axis);
    TM3_DRAFT_U16(object + 16u) = (uint16)velocity[0];
    TM3_DRAFT_U16(object + 18u) = (uint16)velocity[1];
    TM3_DRAFT_U16(object + 20u) = (uint16)velocity[2];
    TM3_DRAFT_U32(object + 80u) = 0;
    TM3_DRAFT_U32(object + 88u) = 0;
    TM3_DRAFT_U32(object + 84u) = 1;
    return 1;
}
