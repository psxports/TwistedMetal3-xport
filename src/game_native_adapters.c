#include "game_draft_support.h"
#include "game_draft_signatures.h"
#include "psx_spu.h"

/* Original SDK storage holding the SPU register base */
const uint32 xport_spu_register_pointer_address = 0x80087c48u;

#if defined(_WIN32)
__declspec(dllexport) __declspec(noinline)
#endif
void tm3_native_input_override(sint32 enabled, uint32 buttons)
{
    /* Keep the existing host input API callable in optimized native builds */
    xport_input_override(enabled, buttons);
}

static sint32 tm3_native_bios_callback(void *context, uint32 address)
{
    if (address == 0x800434acu)
    {
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
    const SpuNativeTransferGuestBinding binding = {0x80087bd8u, 0x80087c64u, 0x80087c60u, 0x80087c7cu, 0x80087c80u, 0x80087c9cu, 0x80087ca0u, 3u};
    if (TM3_DRAFT_U32(binding.completion_callback) != 0u)
        tm3_draft_unimplemented("SPU transfer completion callback");
    if (!spu_bind_native_transfer_guest(&binding))
        tm3_draft_unimplemented("Native SPU transfer binding");
}

uint32 tm3_draft_indirect(uint32 target, uint32 argument_count, ...)
{
    if (target == 0x80018d60u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80018D60(object);
    }
    if (target == 0x8002c32cu && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        sub_8002C32C(object);
        return 0u;
    }
    if (target == 0x8002bd84u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        sub_8002BD84(object);
        /* The update caller discards the return carrier */
        return 0u;
    }
    if (target == 0x8002b914u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, parameters;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        parameters = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002B914(object, parameters);
    }
    if (target == 0x8002bdf0u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, packets, packet_end, camera;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        packets = va_arg(arguments, uint32);
        packet_end = va_arg(arguments, uint32);
        camera = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002BDF0(object, ordering_table, packets, packet_end, camera);
    }
    if (target == 0x8002bce4u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002BCE4(object);
    }
    if (target == 0x8002c2b4u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, parameters;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        parameters = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002C2B4(object, parameters);
    }
    if (target == 0x8003a014u && argument_count == 1u)
    {
        va_list arguments;
        uint32 completed;
        va_start(arguments, argument_count);
        completed = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003A014(completed);
    }
    if (target == 0x80027a50u && argument_count == 1u)
    {
        sub_80027A50();
        /* The original empty destructor ignores the object and return carrier */
        return 0u;
    }
    if (target == 0x80018cacu && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80018CAC(object);
    }
    if (target == 0x8002886cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, parameters;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        parameters = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002886C(object, parameters);
    }
    if (target == 0x800284c8u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        sub_800284C8(object);
        /* The destruction caller discards the return carrier */
        return 0u;
    }
    if (target == 0x80027fe0u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, parameters;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        parameters = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80027FE0(object, parameters);
    }
    if (target == 0x80027b74u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, parameters;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        parameters = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80027B74(object, parameters);
    }
    if (argument_count == 1u && (target == 0x8002f650u || target == 0x8002de34u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        if (target == 0x8002f650u)
            return sub_8002F650(object);
        return sub_8002DE34(object);
    }
    if (target == 0x80054314u && argument_count == 0u)
        return sub_80054314();
    if (target == 0x80053e14u && argument_count == 0u)
        return sub_80053E14();
    if (target == 0x80053e90u && argument_count == 3u)
    {
        va_list arguments;
        uint32 context, x, y;
        va_start(arguments, argument_count);
        context = va_arg(arguments, uint32);
        x = va_arg(arguments, uint32);
        y = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80053E90(context, x, y);
    }
    if (target == 0x8002d624u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, parameters;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        parameters = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002D624(object, parameters);
    }
    if (target == 0x8002e668u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002E668(object);
    }
    if (target == 0x8002eae0u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002EAE0(object);
    }
    if (target == 0x8002e560u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, value;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        value = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002E560(object, value);
    }
    if (target == 0x80027a58u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80027A58(object);
    }
    if (target == 0x8001DDD8u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8001DDD8(object);
    }
    if (target == 0x800266B4u && (argument_count == 2u || argument_count == 3u))
    {
        va_list arguments;
        uint32 object, variant;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        variant = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800266B4(object, variant);
    }
    if (target == 0x8002647Cu && argument_count == 3u)
    {
        va_list arguments;
        uint32 object, kind, descriptor;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        kind = va_arg(arguments, uint32);
        descriptor = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002647C(object, kind, descriptor);
    }
    if (target == 0x800266D8u && argument_count == 3u)
    {
        va_list arguments;
        uint32 object, variant, descriptor;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        variant = va_arg(arguments, uint32);
        descriptor = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800266D8(object, variant, descriptor);
    }
    if (target == 0x80031FE8u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, mode;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80031FE8(object, mode);
    }
    if (target == 0x80031EA8u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, table, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80031EA8(object, table, cursor, end, view);
    }
    if (target == 0x8002662Cu && argument_count == 3u)
    {
        va_list arguments;
        uint32 model, kind, node;
        va_start(arguments, argument_count);
        model = va_arg(arguments, uint32);
        kind = va_arg(arguments, uint32);
        node = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002662C(model, kind, node);
    }
    if (target == 0x800265C0u && argument_count == 3u)
    {
        va_list arguments;
        uint32 object, kind, descriptor;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        kind = va_arg(arguments, uint32);
        descriptor = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800265C0(object, kind, descriptor);
    }
    if (target == 0x80031DFCu && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, mode;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80031DFC(vehicle, mode);
    }
    if (target == 0x800384BCu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800384BC(object, payload);
    }
    if (target == 0x8003858Cu && (argument_count == 4u || argument_count == 5u))
    {
        va_list arguments;
        uint32 object, ot, cursor, end;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ot = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        va_end(arguments);
        sub_8003858C(object, ot, cursor, end);
        return 0u;
    }
    if (target == 0x80028C74u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80028C74(object, payload);
    }
    if (target == 0x80028D80u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80028D80(object);
    }
    if (target == 0x80028E84u && (argument_count == 4u || argument_count == 5u))
    {
        va_list arguments;
        uint32 object, ot, cursor, end;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ot = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80028E84(object, ot, cursor, end);
    }
    if (target == 0x800312F0u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800312F0(object, payload);
    }
    if (target == 0x8003138Cu && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003138C(object);
    }
    if (target == 0x8003163Cu && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ot, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ot = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003163C(object, ot, cursor, end, view);
    }
    if (target == 0x80031774u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        sub_80031774(object);
        return 0u;
    }
    if (target == 0x80031210u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, value;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        value = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80031210(object, value);
    }
    if (argument_count == 2u && (target == 0x8002C118u || target == 0x8002C158u || target == 0x8002C178u || target == 0x8002C1A0u || target == 0x8002C1C0u || target == 0x8002C1D4u || target == 0x8002C1F4u || target == 0x8002C214u || target == 0x8002C234u || target == 0x8002C254u || target == 0x8002C274u || target == 0x8002C294u || target == 0x8002C0F8u || target == 0x8002C138u))
    {
        va_list arguments;
        uint32 vehicle, pickup;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        pickup = va_arg(arguments, uint32);
        va_end(arguments);
        switch (target)
        {
            case 0x8002C118u:
                return sub_8002C118(vehicle, pickup);
            case 0x8002C158u:
                return sub_8002C158(vehicle, pickup);
            case 0x8002C178u:
                return sub_8002C178(vehicle, pickup);
            case 0x8002C1A0u:
                return sub_8002C1A0(vehicle, pickup);
            case 0x8002C1C0u:
                return sub_8002C1C0(vehicle, pickup);
            case 0x8002C1D4u:
                return sub_8002C1D4(vehicle, pickup);
            case 0x8002C1F4u:
                return sub_8002C1F4(vehicle, pickup);
            case 0x8002C214u:
                return sub_8002C214(vehicle, pickup);
            case 0x8002C234u:
                return sub_8002C234(vehicle, pickup);
            case 0x8002C254u:
                return sub_8002C254(vehicle, pickup);
            case 0x8002C274u:
                return sub_8002C274(vehicle, pickup);
            case 0x8002C294u:
                return sub_8002C294(vehicle, pickup);
            case 0x8002C0F8u:
                return sub_8002C0F8(vehicle, pickup);
            case 0x8002C138u:
                return sub_8002C138(vehicle, pickup);
        }
    }
    if (target == 0x8002C180u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, pickup;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        pickup = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002C180(vehicle, pickup);
    }
    if (target == 0x8002BF14u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, pickup;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        pickup = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002BF14(vehicle, pickup);
    }
    if (target == 0x8004B468u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, pickup;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        pickup = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004B468(vehicle, pickup);
    }
    if (target == 0x8003431Cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003431C(object, payload);
    }
    if (target == 0x80034560u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80034560(object, payload);
    }
    if (target == 0x80034890u && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80034890(object);
    }
    if (target == 0x80034750u && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80034750(object, 0u);
    }
    if (target == 0x80034BECu && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80034BEC(object, ordering_table, cursor, end);
    }
    if (target == 0x80032B74u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, mode;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80032B74(vehicle, mode);
    }
    if (target == 0x80032AA4u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80032AA4(object, ordering_table, cursor, end, view);
    }
    if (target == 0x8003992Cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003992C(object, payload);
    }
    if (target == 0x80039BA8u && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80039BA8(object);
    }
    if (target == 0x80039CCCu && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80039CCC(object, ordering_table, cursor, end);
    }
    if (target == 0x80027CDCu && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80027CDC(object, 0u);
    }
    if (target == 0x80027E00u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80027E00(object, ordering_table, cursor, end, view);
    }
    if (target == 0x800264E8u && argument_count == 3u)
    {
        va_list arguments;
        uint32 object, kind, node;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        kind = va_arg(arguments, uint32);
        node = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800264E8(object, kind, node);
    }
    if (target == 0x80024648u && argument_count == 6u)
    {
        va_list arguments;
        uint32 groups, ordering_entry, cursor, end, model, selection;
        va_start(arguments, argument_count);
        groups = va_arg(arguments, uint32);
        ordering_entry = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        model = va_arg(arguments, uint32);
        selection = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80024648(groups, ordering_entry, cursor, end, model, selection);
    }
    if (target == 0x800330F8u && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 vehicle;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800330F8(vehicle);
    }
    if (target == 0x80038C00u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80038C00(object, payload);
    }
    if (target == 0x80038E30u && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80038E30(object);
    }
    if (target == 0x80038F24u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80038F24(object, ordering_table, cursor, end, view);
    }
    if (target == 0x80030E80u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, mode;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80030E80(object, mode);
    }
    if (target == 0x80030EA0u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, value;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        value = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80030EA0(object, value);
    }
    if (target == 0x80030EF4u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, value;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        value = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80030EF4(object, value);
    }
    if (target == 0x8003231Cu && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003231C(object);
    }
    if (target == 0x800325E0u && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800325E0(object);
    }
    if (target == 0x800324D0u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800324D0(object, ordering_table, cursor, end, view);
    }
    if (target == 0x800321F4u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, mode;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800321F4(vehicle, mode);
    }
    if (target == 0x80032720u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, mode;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80032720(vehicle, mode);
    }
    if (target == 0x8004B75Cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, gate;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        gate = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004B75C(vehicle, gate);
    }
    if (target == 0x8004B500u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, effect;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        effect = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004B500(vehicle, effect);
    }
    if (target == 0x8004AFA8u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, effect;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        effect = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004AFA8(vehicle, effect);
    }
    if (target == 0x8004B384u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, proxy;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        proxy = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004B384(vehicle, proxy);
    }
    if (target == 0x8004B16Cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, effect;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        effect = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004B16C(vehicle, effect);
    }
    if (target == 0x8004AAD4u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, effect;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        effect = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004AAD4(vehicle, effect);
    }
    if (target == 0x8004AF28u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, projectile;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        projectile = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004AF28(vehicle, projectile);
    }
    if (target == 0x800317D0u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800317D0(object);
    }
    if (target == 0x80031A10u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80031A10(object);
    }
    if (target == 0x800336B4u && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800336B4(object);
    }
    if (target == 0x80033534u && argument_count == 2u)
    {
        va_list arguments;
        uint32 vehicle, mode;
        va_start(arguments, argument_count);
        vehicle = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80033534(vehicle, mode);
    }
    if (target == 0x8003177Cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, mode;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003177C(object, mode);
    }
    if (target == 0x80032118u && argument_count == 2u)
    {
        va_list arguments;
        uint32 a0, a1;
        va_start(arguments, argument_count);
        a0 = va_arg(arguments, uint32);
        a1 = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80032118(a0, a1);
    }
    if (target == 0x800321CCu && argument_count == 1u)
    {
        va_list arguments;
        uint32 a0;
        va_start(arguments, argument_count);
        a0 = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800321CC(a0);
    }
    if (target == 0x80031CDCu && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80031CDC(object, ordering_table, cursor, end, view);
    }
    if (target == 0x80031104u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80031104(object, ordering_table, cursor, end, view);
    }
    if (target == 0x80030F2Cu && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80030F2C(object, ordering_table, cursor, end, view);
    }
    if (target == 0x80030AFCu && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, view;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80030AFC(object, ordering_table, cursor, end, view);
    }
    if (target == 0x80030A74u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80030A74(object);
    }
    if (target == 0x800326CCu && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800326CC(object);
    }
    if (target == 0x80031C30u && argument_count == 2u)
    {
        va_list arguments;
        uint32 a0, a1;
        va_start(arguments, argument_count);
        a0 = va_arg(arguments, uint32);
        a1 = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80031C30(a0, a1);
    }
    if (target == 0x800272E8u && argument_count == 1u)
    {
        va_list arguments;
        uint32 a0;
        va_start(arguments, argument_count);
        a0 = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800272E8(a0);
    }
    if (target == 0x80027358u && (argument_count == 4u || argument_count == 5u))
    {
        va_list arguments;
        uint32 a0, a1, a2, a3;
        va_start(arguments, argument_count);
        a0 = va_arg(arguments, uint32);
        a1 = va_arg(arguments, uint32);
        a2 = va_arg(arguments, uint32);
        a3 = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80027358(a0, a1, a2, a3);
    }
    if (target == 0x80026E28u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, parameters;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        parameters = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80026E28(object, parameters);
    }
    if (target == 0x80028354u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80028354(object);
    }
    if (target == 0x80045cd0u && argument_count == 4u)
    {
        va_list arguments;
        uint32 context, font, strings, count;
        va_start(arguments, argument_count);
        context = va_arg(arguments, uint32);
        font = va_arg(arguments, uint32);
        strings = va_arg(arguments, uint32);
        count = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80045CD0(context, font, strings, count);
    }
    if (target == 0x800512bcu && argument_count == 4u)
    {
        va_list arguments;
        uint32 seed, level, vehicle, output;
        va_start(arguments, argument_count);
        seed = va_arg(arguments, uint32);
        level = va_arg(arguments, uint32);
        vehicle = va_arg(arguments, uint32);
        output = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800512BC(seed, level, vehicle, output);
    }
    if (target == 0x8004f78cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 buttons, mode;
        va_start(arguments, argument_count);
        buttons = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004F78C(buttons, mode);
    }
    if (target == 0x800284d0u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, matrix;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        matrix = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800284D0(object, ordering_table, cursor, end, matrix);
    }
    if (target == 0x80027b00u && (argument_count == 4u || argument_count == 5u))
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        va_end(arguments);
        /* The original renderer does not read the extra matrix argument */
        return sub_80027B00(object, ordering_table, cursor, end);
    }
    if (target == 0x8002e61cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, mode;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002E61C(object, mode);
    }
    if (target == 0x8002e698u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, matrix;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        matrix = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002E698(object, ordering_table, cursor, end, matrix);
    }
    if (target == 0x8002f1c0u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor, end, matrix;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        matrix = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002F1C0(object, ordering_table, cursor, end, matrix);
    }
    if (target == 0x80052280u && argument_count == 0u)
        return sub_80052280();
    if (target == 0x80052388u && argument_count == 0u)
        return sub_80052388();
    if (target == 0x800524b8u && argument_count == 0u)
        return sub_800524B8();
    if (target == 0x800525e4u && argument_count == 0u)
        return sub_800525E4();
    if (target == 0x800528ccu && argument_count == 0u)
        return sub_800528CC();
    if (target == 0x800529a0u && argument_count == 0u)
        return sub_800529A0();
    if (target == 0x80051d04u && argument_count == 0u)
        return sub_80051D04();
    if (target == 0x80052874u && argument_count == 0u)
        return sub_80052874();
    if (target == 0x80052978u && argument_count == 0u)
        return sub_80052978();
    if (argument_count == 3u && (target == 0x800522bcu || target == 0x800523c4u || target == 0x800524f4u || target == 0x80052908u || target == 0x800529dcu))
    {
        va_list arguments;
        uint32 context, x, y;
        va_start(arguments, argument_count);
        context = va_arg(arguments, uint32);
        x = va_arg(arguments, uint32);
        y = va_arg(arguments, uint32);
        va_end(arguments);
        if (target == 0x800522bcu)
            return sub_800522BC(context, x, y);
        if (target == 0x800523c4u)
            return sub_800523C4(context, x, y);
        if (target == 0x80052908u)
            return sub_80052908(context, x, y);
        if (target == 0x800529dcu)
            return sub_800529DC(context, x, y);
        return sub_800524F4(context, x, y);
    }
    if (target == 0x80023f94u && argument_count == 6u)
    {
        va_list arguments;
        uint32 mesh, transform, packet_pointer, packet_limit, object, mode;
        va_start(arguments, argument_count);
        mesh = va_arg(arguments, uint32);
        transform = va_arg(arguments, uint32);
        packet_pointer = va_arg(arguments, uint32);
        packet_limit = va_arg(arguments, uint32);
        object = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80023F94(mesh, transform, packet_pointer, packet_limit, object, mode);
    }
    if (target == 0x8004ee48u && argument_count == 0u)
        return sub_8004EE48();
    if (target == 0x800517f8u && argument_count == 0u)
        return sub_800517F8();
    if (target == 0x800517d0u && argument_count == 0u)
        return sub_800517D0();
    if (target == 0x8003a048u && argument_count == 1u)
        return sub_8003A048();
    if (target == 0x800277ccu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, parameters;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        parameters = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800277CC(object, parameters);
    }
    if (target == 0x80022510u && argument_count == 2u)
    {
        va_list arguments;
        uint32 first_object, second_object;
        va_start(arguments, argument_count);
        first_object = va_arg(arguments, uint32);
        second_object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80022510(first_object, second_object);
    }
    if (target == 0x8002f584u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002F584(object, payload);
    }
    if (target == 0x80018ab4u && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80018AB4(object);
    }
    if (target == 0x80038a10u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        sub_80038A10(object);
        /* The destructor caller ignores the adapter result */
        return 0u;
    }
    if (target == 0x80038a40u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80038A40(object);
    }
    if (target == 0x80035f60u && (argument_count == 4u || argument_count == 5u))
    {
        va_list arguments;
        uint32 object, ordering_table, packet_pointer, packet_limit;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        packet_pointer = va_arg(arguments, uint32);
        packet_limit = va_arg(arguments, uint32);
        va_end(arguments);
        /* This renderer never reads the dispatcher matrix */
        return sub_80035F60(object, ordering_table, packet_pointer, packet_limit);
    }
    if (target == 0x8003372cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, mode;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        mode = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003372C(object, mode);
    }
    if (target == 0x800254a0u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, packet_pointer, packet_limit, matrix;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        packet_pointer = va_arg(arguments, uint32);
        packet_limit = va_arg(arguments, uint32);
        matrix = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800254A0(object, ordering_table, packet_pointer, packet_limit, matrix);
    }
    if (target == 0x8002f7b0u && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, packet_pointer, packet_limit, matrix;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        packet_pointer = va_arg(arguments, uint32);
        packet_limit = va_arg(arguments, uint32);
        matrix = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002F7B0(object, ordering_table, packet_pointer, packet_limit, matrix);
    }
    if (target == 0x8002f774u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8002F774(object);
    }
    if (target == 0x8002f880u && (argument_count == 1u || argument_count == 2u))
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        /* This callback never reads the dispatcher firing mode */
        return sub_8002F880(object);
    }
    if (target == 0x8001ca04u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8001CA04(object);
    }
    if (target == 0x8001d390u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8001D390(object);
    }
    if (target == 0x8001e2bcu && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8001E2BC(object);
    }
    if (target == 0x8001d888u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8001D888(object);
    }
    if (target == 0x8001a40cu && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8001A40C(object);
    }
    if (target == 0x80018338u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80018338(object);
    }
    if (target == 0x800387bcu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800387BC(object, payload);
    }
    if (target == 0x80036374u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80036374(object, payload);
    }
    if (target == 0x800365e8u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800365E8(object);
    }
    if (target == 0x8003614cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003614C(object, payload);
    }
    if (target == 0x800361a8u && argument_count == 1u)
    {
        va_list arguments;
        uint32 object;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800361A8(object);
    }
    if (target == 0x800443dcu && argument_count == 8u)
    {
        va_list arguments;
        uint32 values[8], index;
        va_start(arguments, argument_count);
        for (index = 0; index < 8u; ++index)
            values[index] = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800443DC(values[0], values[1], values[2], values[3], values[4], values[5], values[6], values[7]);
    }
    if (target == 0x8003680cu && argument_count == 5u)
    {
        va_list arguments;
        uint32 object, ordering_table, cursor_ptr, end, view_matrix;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        ordering_table = va_arg(arguments, uint32);
        cursor_ptr = va_arg(arguments, uint32);
        end = va_arg(arguments, uint32);
        view_matrix = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8003680C(object, ordering_table, cursor_ptr, end, view_matrix);
    }
    if (target == 0x80017c30u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80017C30(object, payload);
    }
    if (target == 0x80035d74u && argument_count == 2u)
    {
        va_list arguments;
        uint32 object, payload;
        va_start(arguments, argument_count);
        object = va_arg(arguments, uint32);
        payload = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80035D74(object, payload);
    }
    if (target == 0x800481e8u && argument_count == 1u)
    {
        va_list arguments;
        uint32 progress;
        va_start(arguments, argument_count);
        progress = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_800481E8(progress);
    }
    if (target == 0x80048510u && argument_count == 2u)
    {
        va_list arguments;
        uint32 buffer;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80048510(buffer);
    }
    if (target == 0x80048590u && argument_count == 2u)
    {
        va_list arguments;
        uint32 buffer;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80048590(buffer);
    }
    if (target == 0x80048530u && argument_count == 2u)
    {
        va_list arguments;
        uint32 buffer;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80048530(buffer);
    }
    if (target == 0x8004864cu && argument_count == 2u)
    {
        va_list arguments;
        uint32 buffer, size;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        size = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_8004864C(buffer, size);
    }
    if (target == 0x80048a90u && argument_count == 2u)
    {
        va_list arguments;
        uint32 buffer, size;
        va_start(arguments, argument_count);
        buffer = va_arg(arguments, uint32);
        size = va_arg(arguments, uint32);
        va_end(arguments);
        return sub_80048A90(buffer, size);
    }
    fprintf(stderr, "TM3 missing callback adapter: target=0x%08x arguments=%u\n", target, argument_count);
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
    if (address < 0x00200000u || address >= 0x80000000u || !xport_memory_readable(buffer, size))
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
    if (index >= 32u)
    {
        fprintf(stderr, "TM3 missing GTE control write: register=%u value=0x%08x\n", index, value);
        tm3_draft_unimplemented("GTE control write adapter");
    }
    xport_gte_write_control(index, value);
}

static uint32 tm3_gte_lzcs;
static uint32 tm3_gte_lzcr = 32u;

void tm3_draft_gte_write_data(uint32 index, uint32 value)
{
    if (index == 30u)
    {
        uint32 bits = (value & 0x80000000u) != 0u ? ~value : value;
        tm3_gte_lzcs = value;
        tm3_gte_lzcr = 0u;
        while (tm3_gte_lzcr < 32u && (bits & 0x80000000u) == 0u)
        {
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
    if (instruction == 0x00a00428u)
    {
        VECTOR input, output;
        input.vx = (sint32)xport_gte_read_data(9u);
        input.vy = (sint32)xport_gte_read_data(10u);
        input.vz = (sint32)xport_gte_read_data(11u);
        Square0(&input, &output);
        return;
    }
    if (instruction == 0x0190003du || instruction == 0x0198003du)
    {
        SVECTOR input;
        VECTOR output;
        input.vx = (sint16)xport_gte_read_data(9u);
        input.vy = (sint16)xport_gte_read_data(10u);
        input.vz = (sint16)xport_gte_read_data(11u);
        if (instruction == 0x0198003du)
            gte_gpf12(&input, (sint32)xport_gte_read_data(8u), &output);
        else
            gte_gpf0(&input, (sint32)xport_gte_read_data(8u), &output);
        return;
    }
    if (instruction == 0x01a8003eu)
    {
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
    return (uint16)elements[index * 2u] | ((uint32)(uint16)elements[index * 2u + 1u] << 16);
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
    switch (index)
    {
        case 24:
            return (uint32)snapshot.ofx;
        case 25:
            return (uint32)snapshot.ofy;
        case 26:
            return (uint32)(sint32)(sint16)snapshot.h;
        case 27:
            return (uint32)(sint32)(sint16)snapshot.dqa;
        case 28:
            return (uint32)snapshot.dqb;
        case 29:
            return (uint32)(sint32)(sint16)snapshot.zsf3;
        case 30:
            return (uint32)(sint32)(sint16)snapshot.zsf4;
        case 31:
            return (uint32)snapshot.flag;
    }
    tm3_draft_unimplemented("Invalid GTE control register");
    return 0;
}
