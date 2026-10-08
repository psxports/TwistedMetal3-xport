#include "game_draft_support.h"
#include "game_draft_signatures.h"
#include "psx_spu.h"

/* Original SDK storage holding the SPU register base */
const uint32 xport_spu_register_pointer_address = 0x80087c48u;

static sint32 tm3_native_bios_callback(void *context, uint32 address)
{
    (void)context;
    if (address == 0x800434acu) {
        sub_800434AC();
        return 1;
    }
    fprintf(stderr, "TM3 missing BIOS callback: 0x%08x\n", address);
    tm3_draft_unimplemented("BIOS callback adapter");
}

void tm3_bind_native_bios_callback(void)
{
    psx_bios_bind_guest_callback_service(tm3_native_bios_callback, NULL);
}

void xport_bind_native_spu_transfer(void)
{
    const SpuNativeTransferGuestBinding binding = {
        0x80087bd8u, 0x80087c64u, 0x80087c60u, 0x80087c7cu,
        0x80087c80u, 0x80087c9cu, 0x80087ca0u, 3u
    };
    if (TM3_DRAFT_U32(binding.completion_callback) != 0u)
        tm3_draft_unimplemented("SPU transfer completion callback");
    if (!spu_bind_native_transfer_guest(&binding))
        tm3_draft_unimplemented("Native SPU transfer binding");
}

uint32 tm3_draft_indirect(uint32 target, uint32 argument_count, ...)
{
    if (target == 0x800517d0u && argument_count == 0u)
        return sub_800517D0();
    if (target == 0x8003a048u && argument_count == 1u)
        return sub_8003A048();
    if (target == 0x8002f584u && argument_count == 2u) {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002F584(object, payload);
    }
    if (target == 0x80018ab4u && argument_count == 1u) {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80018AB4(object);
    }
    if (target == 0x80038a40u && argument_count == 1u) {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80038A40(object);
    }
    if (target == 0x80035f60u && argument_count == 4u) {
        va_list arguments;
        uint32 object, packets, ordering_table, camera;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        packets = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        camera = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80035F60(object, packets, ordering_table, camera);
    }
    if (target == 0x8002f880u && argument_count == 1u) {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002F880(object);
    }
    if (target == 0x8001ca04u && argument_count == 1u) {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8001CA04(object);
    }
    if (target == 0x8001d888u && argument_count == 1u) {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8001D888(object);
    }
    if (target == 0x8001a40cu && argument_count == 1u) {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8001A40C(object);
    }
    if (target == 0x80018338u && argument_count == 1u) {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80018338(object);
    }
    if (target == 0x800387bcu && argument_count == 2u) {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800387BC(object, payload);
    }
    if (target == 0x80017c30u && argument_count == 2u) {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80017C30(object, payload);
    }
    if (target == 0x80035d74u && argument_count == 2u) {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80035D74(object, payload);
    }
    if (target == 0x800481e8u && argument_count == 1u) {
        va_list arguments;
        uint32 progress;
        va_start(arguments, argument_count);
        progress = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800481E8(progress);
    }
    if (target == 0x80048510u && argument_count == 2u) {
        va_list arguments;
        uint32 buffer;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80048510(buffer);
    }
    if (target == 0x80048590u && argument_count == 2u) {
        va_list arguments;
        uint32 buffer;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80048590(buffer);
    }
    if (target == 0x80048530u && argument_count == 2u) {
        va_list arguments;
        uint32 buffer;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80048530(buffer);
    }
    if (target == 0x8004864cu && argument_count == 2u) {
        va_list arguments;
        uint32 buffer, size;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        size = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004864C(buffer, size);
    }
    if (target == 0x80048a90u && argument_count == 2u) {
        va_list arguments;
        uint32 buffer, size;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        size = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80048A90(buffer, size);
    }
    fprintf(stderr, "TM3 missing callback adapter: target=0x%08x arguments=%u\n",
            target, argument_count);
    tm3_draft_unimplemented("Guest callback adapter");
}

void tm3_draft_unimplemented(const char *operation)
{
    fprintf(stderr, "TM3 unsupported operation: %s\n", operation);
    fflush(stderr);
    abort();
}

uint32 tm3_draft_local_address(void *buffer, uint32 size)
{
    uintptr_t address = (uintptr_t)buffer;
    if (address < 0x00200000u || address >= 0x80000000u ||
        !xport_memory_readable(buffer, size))
        tm3_draft_unimplemented("Native buffer cannot be represented by the 32-bit address ABI");
    return (uint32)address;
}

uint32 tm3_native_pointer_address(const void *buffer)
{
    uintptr_t address = (uintptr_t)buffer;
    uintptr_t dram = (uintptr_t)DRAM;
    uintptr_t scratchpad = (uintptr_t)SCRATCHPAD;
    if (!buffer)
        return 0;
    if (address >= dram && address - dram < sizeof(DRAM))
        return 0x80000000u | (uint32)(address - dram);
    if (address >= scratchpad && address - scratchpad < sizeof(SCRATCHPAD))
        return 0x1f800000u | (uint32)(address - scratchpad);
    return tm3_draft_local_address((void *)buffer, 1u);
}

void tm3_draft_gte_write_control(uint32 index, uint32 value)
{
    if (index >= 32u) {
        fprintf(stderr, "TM3 missing GTE control write: register=%u value=0x%08x\n",
                index, value);
        tm3_draft_unimplemented("GTE control write adapter");
    }
    xport_gte_write_control(index, value);
}

static uint32 tm3_gte_lzcs;
static uint32 tm3_gte_lzcr = 32u;

void tm3_draft_gte_write_data(uint32 index, uint32 value)
{
    if (index == 30u) {
        uint32 bits = (value & 0x80000000u) != 0u ? ~value : value;
        tm3_gte_lzcs = value;
        tm3_gte_lzcr = 0u;
        while (tm3_gte_lzcr < 32u && (bits & 0x80000000u) == 0u) {
            ++tm3_gte_lzcr;
            bits <<= 1u;
        }
        return;
    }
    if (index == 31u)
        return;
    xport_gte_write_data(index, value);
}

uint32 tm3_draft_gte_read_data(uint32 index)
{
    if (index == 30u)
        return tm3_gte_lzcs;
    if (index == 31u)
        return tm3_gte_lzcr;
    return xport_gte_read_data(index);
}

void tm3_draft_gte_command(uint32 instruction)
{
    if (instruction == 0x00a00428u) {
        VECTOR input, output;
        input.vx = (sint32)xport_gte_read_data(9u);
        input.vy = (sint32)xport_gte_read_data(10u);
        input.vz = (sint32)xport_gte_read_data(11u);
        Square0(&input, &output);
        return;
    }
    if (instruction == 0x0190003du) {
        SVECTOR input;
        VECTOR output;
        input.vx = (sint16)xport_gte_read_data(9u);
        input.vy = (sint16)xport_gte_read_data(10u);
        input.vz = (sint16)xport_gte_read_data(11u);
        gte_gpf0(&input, (sint32)xport_gte_read_data(8u), &output);
        return;
    }
    if (instruction == 0x01a8003eu) {
        SVECTOR input;
        VECTOR output;
        input.vx = (sint16)xport_gte_read_data(9u);
        input.vy = (sint16)xport_gte_read_data(10u);
        input.vz = (sint16)xport_gte_read_data(11u);
        gte_gpl12(&input, (sint32)xport_gte_read_data(8u), &output);
        return;
    }
    xport_gte_execute(instruction);
}

static uint32 tm3_matrix_register(const MATRIX *matrix, uint32 index)
{
    const sint16 *elements = &matrix->m[0][0];
    if (index == 4u)
        return (uint32)(sint32)elements[8];
    return (uint16)elements[index * 2u] |
           ((uint32)(uint16)elements[index * 2u + 1u] << 16);
}

uint32 tm3_draft_gte_read_control(uint32 index)
{
    PsxGteSnapshot snapshot;
    psx_gte_snapshot(&snapshot);
    if (index < 5u)
        return tm3_matrix_register(&snapshot.rotation, index);
    if (index < 8u)
        return (uint32)snapshot.translation[index - 5u];
    if (index < 13u)
        return tm3_matrix_register(&snapshot.light, index - 8u);
    if (index < 16u)
        return (uint32)snapshot.back_color[index - 13u];
    if (index < 21u)
        return tm3_matrix_register(&snapshot.color, index - 16u);
    if (index < 24u)
        return (uint32)snapshot.far_color[index - 21u];
    switch (index) {
        case 24: return (uint32)snapshot.ofx;
        case 25: return (uint32)snapshot.ofy;
        case 26: return (uint32)(sint32)(sint16)snapshot.h;
        case 27: return (uint32)(sint32)(sint16)snapshot.dqa;
        case 28: return (uint32)snapshot.dqb;
        case 29: return (uint32)(sint32)(sint16)snapshot.zsf3;
        case 30: return (uint32)(sint32)(sint16)snapshot.zsf4;
        case 31: return (uint32)snapshot.flag;
    }
    tm3_draft_unimplemented("Invalid GTE control register");
    return 0;
}
