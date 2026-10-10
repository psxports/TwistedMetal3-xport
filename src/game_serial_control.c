#include "game_draft_support.h"
#include "game_serial_control.h"

/* Disconnected native UART retains configuration without a peer */
static uint16 serial_status = 0x0005u;
static uint16 serial_control;
static uint16 serial_mode;
static uint16 serial_baud;

uint16 tm3_serial_register_read(uint32 offset)
{
    switch (offset)
    {
        case 4u:
            return serial_status;
        case 8u:
            return serial_mode;
        case 10u:
            return serial_control;
        case 14u:
            return serial_baud;
    }
    tm3_draft_unimplemented("Serial register read offset");
}

void tm3_serial_register_write(uint32 offset, uint16 value)
{
    switch (offset)
    {
        case 4u:
            serial_status = (uint16)(value & serial_status);
            return;
        case 8u:
            serial_mode = value;
            return;
        case 10u:
            serial_control = value;
            return;
        case 14u:
            serial_baud = value;
            return;
    }
    tm3_draft_unimplemented("Serial register write offset");
}

/* Original _comb_control configuration and callback operations */
uint32 tm3_serial_control(uint32 command, uint32 option, uint32 payload)
{
    uint16 control;
    if (command == 4u && option == 0u)
    {
        uint32 previous = TM3_DRAFT_U32(0x800D8448u);
        TM3_DRAFT_U32(0x800D8448u) = payload;
        return previous;
    }
    if (command == 0u && option == 0u)
        return tm3_serial_register_read(4u);
    if (command == 0u && option == 1u)
    {
        control = tm3_serial_register_read(10u);
        return ((control >> 1u) & 1u) | ((control & 0x20u) ? 2u : 0u);
    }
    if (command == 1u && option == 1u)
    {
        control = (uint16)(tm3_serial_register_read(10u) & 0xFFDDu);
        TM3_DRAFT_U16(0x800D8442u) = control;
        control = (uint16)(control | ((payload & 1u) << 1u));
        if (payload & 2u)
            control = (uint16)(control | 0x20u);
        TM3_DRAFT_U16(0x800D8442u) = control;
        tm3_serial_register_write(10u, control);
        return 0u;
    }
    if (command == 1u && option == 3u)
    {
        uint16 divisor;
        if (!payload)
            tm3_draft_unimplemented("_comb_control baud division by zero");
        if (2073600u % payload)
            return 0xFFFFFFFFu;
        divisor = (uint16)(2073600u / payload);
        TM3_DRAFT_U16(0x800D8446u) = divisor;
        tm3_serial_register_write(14u, divisor);
        control = tm3_serial_register_read(10u);
        tm3_serial_register_write(10u, (uint16)(control | 0x10u));
        return 0u;
    }
    if (command == 1u && option == 4u)
    {
        sint16 mode;
        if (payload - 1u >= 8u)
            return 0u;
        mode = TM3_DRAFT_I16(0x80087D38u + payload * 2u);
        if (mode < 0)
            return (uint32)(sint32)mode;
        control = (uint16)(TM3_DRAFT_U16(0x800D8442u) & 0xFCFFu);
        TM3_DRAFT_U16(0x800D8442u) = control;
        control = (uint16)(control | (uint16)mode);
        TM3_DRAFT_U16(0x800D8442u) = control;
        tm3_serial_register_write(10u, control);
        return (uint32)(sint32)mode;
    }
    fprintf(stderr, "TM3 unsupported serial control: command=%u option=%u payload=0x%08x\n", command, option, payload);
    tm3_draft_unimplemented("_comb_control command");
}
