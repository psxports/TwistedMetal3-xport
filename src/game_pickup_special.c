#include "game_draft_signatures.h"

/* Original category intentionally rejects this pickup */
uint32 sub_8002C178(uint32 vehicle, uint32 pickup)
{
    FUNCTION_MARKER(0x8002C178u, "SCUS_942.49");
    (void)vehicle;
    (void)pickup;
    return 0;
}

/* Refill the vehicle field from its original capacity */
uint32 sub_8002C1C0(uint32 vehicle, uint32 pickup)
{
    FUNCTION_MARKER(0x8002C1C0u, "SCUS_942.49");
    (void)pickup;
    TM3_DRAFT_U32(vehicle + 4076u) = TM3_DRAFT_U32(vehicle + 4080u);
    return 1;
}

/* Grant pickup category thirteen */
uint32 sub_8002C294(uint32 vehicle, uint32 pickup)
{
    FUNCTION_MARKER(0x8002C294u, "SCUS_942.49");
    return sub_8002C050(vehicle, pickup, 13u);
}
