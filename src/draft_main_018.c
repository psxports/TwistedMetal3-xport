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
uint32 sub_80027B00(uint32 object, uint32 ordering_table, uint32 cursor, uint32 end)
{
    uint32 animation = TM3_DRAFT_U32(object + 28u);
    uint32 frame = TM3_DRAFT_U8(object + 27u);
    FUNCTION_MARKER(0x80027B00u, "SCUS_942.49");
    if ((sint32)frame >= TM3_DRAFT_I16(animation))
        return 0u;
    return sub_8002A190(object + 8u, (uint32)(sint32)TM3_DRAFT_I16(object + 20u), (uint32)(sint32)TM3_DRAFT_I16(object + 22u), TM3_DRAFT_U32(object + 24u), TM3_DRAFT_U32(animation + 8u + frame * 4u), ordering_table, cursor, 1u, end);
}
