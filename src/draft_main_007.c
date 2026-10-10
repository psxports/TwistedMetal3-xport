#include "game_draft_signatures.h"

/* Continued unverified drafts without guest register or stack bookkeeping */

uint32 sub_80044018(void)
{
    FUNCTION_MARKER(0x80044018u, "SCUS_942.49");
    const uint32 base = 0x800d2e88u;
    w_u32(base, 1u);
    w_u32(base + 4u, 0u);
    w_u32(base + 12u, 1u);
    for (uint32 i = 0; i < 8u; ++i)
        w_u32(base + 0x34u - 4u * i, 0u);
    w_u32(base + 0x94u, 4u);
    w_u32(base + 0x60u, 8u);
    w_u32(base + 0x14u, 0u);
    w_u32(base + 0x88u, 1u);
    w_u32(base + 0x8cu, 0u);
    w_u32(base + 0xa0u, 0u);
    w_u32(base + 0x90u, 0u);
    w_u32(base + 0x58u, 0u);
    w_u32(base + 0x5cu, 0u);
    w_u32(base + 0x64u, 9u);
    w_u32(base + 0x68u, 1u);
    w_u32(base + 0x6cu, 0u);
    w_u32(base + 0x70u, 0u);
    for (uint32 i = 0; i < 4u; ++i)
        w_u32(base + 0x80u - 4u * i, 0u);
    w_u32(base + 0x84u, 0x45u);
    w_u32(base + 0xfcu, 1u);
    w_u32(base + 0x100u, 1u);
    w_u32(base + 0xacu, 1u);
    w_u32(base + 0xc4u, 1u);
    w_u32(base + 0xa4u, 0u);
    w_u32(base + 0xd8u, 0u);
    w_u32(base + 0xdcu, 0u);
    w_u32(base + 0xe0u, 0u);
    w_u32(base + 0xf8u, 0u);
    w_u32(base + 0xe4u, 0u);
    w_u32(base + 0xb0u, 0u);
    w_u32(base + 0xb4u, 0u);
    w_u32(base + 0xc8u, 0u);
    w_u32(base + 0xccu, 0u);
    w_u32(base + 0xd0u, 0u);
    w_u32(base + 0xd4u, 0xffffffffu);
    w_u32(base + 0xb8u, 0u);
    for (uint32 player = 0; player < 8u; ++player)
    {
        uint32 record = base + player * 0x90u;
        w_u32(record + 0x184u, 2u);
        w_u32(record + 0x178u, 1u);
        w_u32(record + 0x17cu, 0u);
        w_u32(record + 0x180u, 3u);
        sub_80043E2C(base, player, 0u);
        sub_80043E2C(base, player, 1u);
        sub_80043E2C(base, player, 2u);
    }
    sub_80054C24(0u);
    /* Memory cards are absent by user instruction */
    sub_80054C24(0u);
    for (uint32 offset = 0; offset < 0x5d0u; offset += 16u)
    {
        uint32 t0 = r_u32(base + offset);
        uint32 t1 = r_u32(base + offset + 4u);
        uint32 t2 = r_u32(base + offset + 8u);
        uint32 t3 = r_u32(base + offset + 12u);
        w_u32(0x800d28b8u + offset, t0);
        w_u32(0x800d28b8u + offset + 4u, t1);
        w_u32(0x800d28b8u + offset + 8u, t2);
        w_u32(0x800d28b8u + offset + 12u, t3);
    }
    return base + 0x5d0u;
}

uint32 sub_80043E2C(uint32 base, uint32 player, uint32 preset)
{
    FUNCTION_MARKER(0x80043E2Cu, "SCUS_942.49");
    uint32 address = base + player * 144u + 0x104u + preset * 38u;
    uint32 color;
    if (preset == 1u)
    {
        w_u16(address + 2u, 0x8000u);
        w_u16(address + 4u, 0x2000u);
        w_u16(address + 8u, 0x4000u);
        w_u16(address + 14u, 32u);
        w_u16(address + 18u, 8u);
        w_u16(address + 20u, 4u);
        w_u16(address + 22u, 0x1000u);
        w_u16(address, 0u);
        w_u16(address + 6u, 0u);
        w_u16(address + 10u, 0u);
        w_u16(address + 24u, 0u);
        w_u16(address + 12u, 16u);
        w_u16(address + 16u, 0u);
        color = 16u;
    }
    else if (preset == 0u)
    {
        w_u16(address + 2u, 0x8000u);
        w_u16(address + 4u, 0x2000u);
        w_u16(address + 8u, 64u);
        w_u16(address + 10u, 0x1080u);
        w_u16(address + 24u, 32u);
        w_u16(address + 12u, 0x4000u);
        w_u16(address + 14u, 8u);
        w_u16(address + 16u, 4u);
        w_u16(address + 20u, 1u);
        w_u16(address + 18u, 2u);
        w_u8(address + 26u, 0x80u);
        w_u8(address + 28u, 0x74u);
        w_u16(address, 0u);
        w_u16(address + 6u, 0u);
        w_u16(address + 22u, 16u);
        w_u8(address + 27u, 16u);
        w_u8(address + 29u, 0u);
        w_u8(address + 30u, 0u);
        w_u8(address + 31u, 0xffu);
        w_u8(address + 32u, 0u);
        w_u8(address + 33u, 0u);
        w_u8(address + 34u, 0xffu);
        w_u8(address + 35u, 0u);
        w_u8(address + 36u, 0u);
        w_u8(address + 37u, 0xffu);
        return 0xffu;
    }
    else if (preset == 2u)
    {
        w_u16(address + 2u, 0x8000u);
        w_u16(address + 4u, 0x2000u);
        w_u16(address + 8u, 64u);
        w_u16(address + 10u, 0x1080u);
        w_u16(address + 12u, 0x4200u);
        w_u16(address + 14u, 8u);
        w_u16(address + 16u, 4u);
        w_u16(address + 20u, 1u);
        w_u16(address + 22u, 0x410u);
        w_u16(address, 0u);
        w_u16(address + 6u, 0u);
        w_u16(address + 24u, 32u);
        w_u16(address + 18u, 2u);
        color = 32u;
    }
    else
    {
        return 0x8000u;
    }
    w_u8(address + 26u, 0x80u);
    w_u8(address + 27u, color);
    w_u8(address + 28u, 0x74u);
    w_u8(address + 29u, 0x80u);
    w_u8(address + 30u, color);
    w_u8(address + 31u, 0x74u);
    w_u8(address + 32u, 0x80u);
    w_u8(address + 33u, color);
    w_u8(address + 34u, 0x74u);
    w_u8(address + 35u, 0x80u);
    w_u8(address + 36u, color);
    w_u8(address + 37u, 0x74u);
    return 0x74u;
}

void sub_80056944(uint32 mode)
{
    FUNCTION_MARKER(0x80056944u, "SCUS_942.49");
    /* Memory cards are absent by user instruction */
}

uint32 sub_8003E778(void)
{
    FUNCTION_MARKER(0x8003E778u, "SCUS_942.49");
    uint32 address = 0x800d1c20u;
    uint32 count = 0u;
    do
    {
        w_u8(address, 0u);
        w_u8(address + 1u, 0u);
        w_u8(address + 2u, 0u);
        w_u8(address + 3u, 1u);
        w_u32(address + 4u, 0xffffffffu);
        w_u32(address + 8u, 0xffffffffu);
        w_u32(address + 12u, 0xffffffffu);
        w_u32(address + 16u, 0xffffffffu);
        w_u16(address + 24u, 0u);
        w_u32(address + 20u, 0u);
        w_u16(address + 26u, 0xffu);
        ++count;
        address += 28u;
    } while (count < 8u);
    return 0u;
}

uint32 sub_80054C24(uint32 value)
{
    FUNCTION_MARKER(0x80054C24u, "SCUS_942.49");
    w_u32(0x80089ec8u, 2u);
    w_u16(0x80089eccu, value & 0xffu);
    w_u32(0x80089ed0u, 0u);
    w_u16(0x80089eb8u, 0u);
    w_u32(0x80089ec4u, 0u);
    w_u32(0x80089ec0u, 0u);
    w_u16(0x80089ea8u, 0u);
    w_u32(0x80089eb0u, 0x11u);
    w_u32(0x80089eb4u, 0u);
    w_u32(0x80089ebcu, 0u);
    return 0x11u;
}

uint32 sub_8003E660(void)
{
    FUNCTION_MARKER(0x8003E660u, "SCUS_942.49");
    PadInitDirect((uint8 *)psx_addr(0x800d1bd8u, 8u), (uint8 *)psx_addr(0x800d1bfau, 8u));
    PadStartCom();
    uint32 result = sub_8003E6D8();
    return result;
}

uint32 sub_80064434(void)
{
    FUNCTION_MARKER(0x80064434u, "SCUS_942.49");
    w_u32(0x800d847cu, 0x800644c8u);
    w_u32(0x800d8480u, 0x80064460u);
    w_u32(0x800d8478u, 0u);
    w_u32(0x800d8484u, 0u);
    return 0x800d847cu;
}

uint32 sub_80060794(uint32 value)
{
    FUNCTION_MARKER(0x80060794u, "SCUS_942.49");
    uint32 previous = r_u32(0x80087bb8u);
    w_u32(0x80087bb8u, value);
    return previous;
}

uint32 sub_80056EC4(void)
{
    FUNCTION_MARKER(0x80056EC4u, "SCUS_942.49");
    /* User-authorized unimplemented BIOS boundary */
    abort();
}
