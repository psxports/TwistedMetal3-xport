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
uint32 sub_8004E9B8(uint32 a1, uint32 a2, uint32 a3, uint32 a4,
    uint32 a5, uint32 a6, uint32 a7, uint32 a8)
{
    FUNCTION_MARKER(0x8004E9B8u, "SCUS_942.49");
    uint32 active = sub_8004E478(a3);
    if (active) {
        uint32 row_y = (a7 & 2u) ? a2 + (TM3_DRAFT_U8(0x8007F010u) >> 1) : a2 - 2u;
        return sub_8004E4B8(a1, a1 + 0x20BC4u, 0x8007F004u,
            row_y, a4, a5, a6, a7);
    }
    if ((sint32)a6 < 0) return a7 & 2u;
    if (a8 & 1u)
        return sub_80049284(TM3_DRAFT_U32(a5 + 4u * a6),
            0x8007F004u, 300u, a2, a1, a1 + 0x20BC8u,
            11u, 63u, 63u, 63u);
    /* The mode 24 path does not initialize the spare color argument */
    return sub_80049284(TM3_DRAFT_U32(a5 + 4u * a6),
        0x8007F004u, 300u, a2, a1, a1 + 0x20BC8u, 24u, 1u, 1u, 0u);
}
