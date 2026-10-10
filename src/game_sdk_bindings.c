#include "game_sdk_bindings.h"
#include <ctype.h>
#include <stdio.h>
#include "game_serial_control.h"

/* Original SDK callback and command storage */
const uint32 xport_cd_sync_callback_address = 0x800866D0u;
const uint32 xport_cd_ready_callback_address = 0x800866D4u;
const uint32 xport_cd_status_address = 0x800866E0u;
const uint32 xport_cd_setloc_table_address = 0x80086648u;

/* Accepted original SDK boundary: open */
uint32 sub_80056464(uint32 a1, uint32 a2)
{
    const char *path = a1 ? (const char *)psx_addr(a1, 1u) : NULL;
    if (path && strcmp(path, "sio:") == 0)
    {
        fprintf(stderr, "TM3 BIOS open: SIO device unavailable, mode=%u\n", a2);
        return 0xFFFFFFFFu;
    }
    return (uint32)openPSX(path, a2);
}

/* Accepted original SDK boundary: close */
uint32 sub_80056494(uint32 a1)
{
    return (uint32)closePSX((sint32)a1);
}

/* Accepted original SDK boundary: toupper */
uint32 sub_800564E4(uint32 a1)
{
    return (uint32)toupper((int)a1);
}

/* Accepted original SDK boundary: memchr */
uint32 sub_80056554(uint32 a1, uint32 a2, uint32 a3)
{
    if (!a3)
        return 0u;
    return tm3_native_pointer_address(memchr(psx_addr(a1, a3), (int)a2, (size_t)a3));
}

/* Accepted original SDK boundary: memmove */
uint32 sub_80056634(uint32 a1, uint32 a2, uint32 a3)
{
    if (!a3)
        return a1;
    return tm3_native_pointer_address(memmove(psx_addr(a1, a3), psx_addr(a2, a3), (size_t)a3));
}

/* Accepted original SDK boundary: memset */
uint32 sub_800566A4(uint32 a1, uint32 a2, uint32 a3)
{
    if (!a3)
        return a1;
    return tm3_native_pointer_address(memset(psx_addr(a1, a3), (int)a2, (size_t)a3));
}

/* Accepted original SDK boundary: strcat */
uint32 sub_800566D4(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(strcat((char *)(a1 ? psx_addr(a1, sizeof(char)) : NULL), (const char *)(a2 ? psx_addr(a2, sizeof(char)) : NULL)));
}

/* Accepted original SDK boundary: strcmp */
uint32 sub_80056784(uint32 a1, uint32 a2)
{
    return (uint32)strcmp((const char *)(a1 ? psx_addr(a1, sizeof(char)) : NULL), (const char *)(a2 ? psx_addr(a2, sizeof(char)) : NULL));
}

/* Accepted original SDK boundary: strncmp */
uint32 sub_80056884(uint32 a1, uint32 a2, uint32 a3)
{
    return (uint32)strncmp((const char *)(a1 ? psx_addr(a1, sizeof(char)) : NULL), (const char *)(a2 ? psx_addr(a2, sizeof(char)) : NULL), (size_t)a3);
}

/* Accepted original SDK boundary: _card_write */
uint32 sub_80056904(uint32 a1, uint32 a2, uint32 a3)
{
    /* Explicit user-approved absent memory card */
    return 0u;
}

/* Accepted original SDK boundary: _card_read */
uint32 sub_80056914(uint32 a1, uint32 a2, uint32 a3)
{
    return (uint32)_card_read((sint32)a1, (sint32)a2, (uint8 *)(a3 ? psx_addr(a3, sizeof(uint8)) : NULL));
}

/* Accepted original SDK boundary: _new_card */
void sub_80056924(void)
{
    _new_card();
}

/* Accepted original SDK boundary: _card_status */
uint32 sub_80056934(uint32 a1)
{
    /* Explicit user-approved absent memory card */
    return 0u;
}

/* Accepted original SDK boundary: SetDefDrawEnv */
uint32 sub_800572E4(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5)
{
    return tm3_native_pointer_address(SetDefDrawEnv((DRAWENV *)(a1 ? psx_addr(a1, sizeof(DRAWENV)) : NULL), (sint32)a2, (sint32)a3, (sint32)a4, (sint32)a5));
}

/* Accepted original SDK boundary: SetDefDispEnv */
uint32 sub_80057398(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5)
{
    return tm3_native_pointer_address(SetDefDispEnv((DISPENV *)(a1 ? psx_addr(a1, sizeof(DISPENV)) : NULL), (sint32)a2, (sint32)a3, (sint32)a4, (sint32)a5));
}

extern uint64 sub_800434DC(void);

/* Native GPU submissions complete synchronously */
static void tm3_sdk_gpu_submission_complete(void)
{
    uint32 callback;
    TM3_DRAFT_U32(0x80080E90u) = 1u;
    if (DrawSync(0) != 0)
        return;
    callback = TM3_DRAFT_U32(0x80080E94u);
    if (!callback)
        return;
    if (callback != 0x800434DCu)
        tm3_draft_unimplemented("DrawSync completion unknown guest callback");
    TM3_DRAFT_U32(0x80080E90u) = 0u;
    sub_800434DC();
}

/* Accepted original SDK boundary: DrawSyncCallback */
uint32 sub_80057658(uint32 a1)
{
    uint32 previous;
    if (a1 && a1 != 0x800434DCu)
        tm3_draft_unimplemented("DrawSyncCallback unknown guest callback");
    if (TM3_DRAFT_U8(0x80080E8Au) >= 2u)
        printf("DrawSyncCallback(%08x)...\n", a1);
    previous = TM3_DRAFT_U32(0x80080E94u);
    TM3_DRAFT_U32(0x80080E94u) = a1;
    return previous;
}

/* Accepted original SDK boundary: DrawSync */
uint32 sub_80057750(uint32 a1)
{
    return (uint32)DrawSync((sint32)a1);
}

/* Accepted original SDK boundary: LoadImage */
uint32 sub_800579FC(uint32 a1, uint32 a2)
{
    uint32 result = (uint32)LoadImagePSX((PSX_RECT *)(a1 ? psx_addr(a1, sizeof(PSX_RECT)) : NULL), (uint32 *)(a2 ? psx_addr(a2, sizeof(uint32)) : NULL));
    if ((sint32)result >= 0)
        tm3_sdk_gpu_submission_complete();
    return result;
}

/* Accepted original SDK boundary: MoveImage */
uint32 sub_80057ABC(uint32 a1, uint32 a2, uint32 a3)
{
    uint32 result = (uint32)MoveImage((PSX_RECT *)(a1 ? psx_addr(a1, sizeof(PSX_RECT)) : NULL), (sint32)a2, (sint32)a3);
    if ((sint32)result >= 0)
        tm3_sdk_gpu_submission_complete();
    return result;
}

/* Accepted original SDK boundary: ClearOTagR */
uint32 sub_80057C3C(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(ClearOTagR((uint32 *)(a1 ? psx_addr(a1, sizeof(uint32)) : NULL), (sint32)a2));
}

/* Accepted original SDK boundary: DrawPrim */
void sub_80057CE8(uint32 a1)
{
    DrawPrim((void *)(a1 ? psx_addr(a1, 1u) : NULL));
}

/* Accepted original SDK boundary: DrawOTag */
void sub_80057D44(uint32 a1)
{
    DrawOTag((uint32 *)(a1 ? psx_addr(a1, sizeof(uint32)) : NULL));
    tm3_sdk_gpu_submission_complete();
}

/* Accepted original SDK boundary: PutDrawEnv */
uint32 sub_80057DB4(uint32 a1)
{
    uint32 result = tm3_native_pointer_address(PutDrawEnv((DRAWENV *)(a1 ? psx_addr(a1, sizeof(DRAWENV)) : NULL)));
    if (result)
        tm3_sdk_gpu_submission_complete();
    return result;
}

/* Accepted original SDK boundary: PutDispEnv */
uint32 sub_80057F80(uint32 a1)
{
    return tm3_native_pointer_address(PutDispEnv((DISPENV *)(a1 ? psx_addr(a1, sizeof(DISPENV)) : NULL)));
}

/* Accepted original SDK boundary: SetDrawEnv */
void sub_80058678(uint32 a1, uint32 a2)
{
    SetDrawEnv((void *)(a1 ? psx_addr(a1, 1u) : NULL), (DRAWENV *)(a2 ? psx_addr(a2, sizeof(DRAWENV)) : NULL));
}

/* Accepted original SDK boundary: GetTPage */
uint32 sub_8005AD34(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    return (uint32)GetTPage((sint32)a1, (sint32)a2, (sint32)a3, (sint32)a4);
}

/* Accepted original SDK boundary: GetClut */
uint32 sub_8005AD74(uint32 a1, uint32 a2)
{
    return (uint32)GetClut((sint32)a1, (sint32)a2);
}

/* Accepted original SDK boundary: SetDrawTPage */
uint32 sub_8005AEF4(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    void *packet = psx_addr(a1, 8u);
    setDrawMode1(packet, a2, a3, a4);
    return (uint32)psx_draw_mode(a2, a3, a4);
}

/* Accepted original SDK boundary: rsin */
uint32 sub_8005AF24(uint32 a1)
{
    return (uint32)rsin((sint32)a1);
}

/* Accepted original SDK boundary: rcos */
uint32 sub_8005AFF4(uint32 a1)
{
    return (uint32)rcos((sint32)a1);
}

/* Accepted original SDK boundary: SquareRoot0 */
uint32 sub_8005B124(uint32 a1)
{
    return (uint32)SquareRoot0((sint32)a1);
}

/* Original TM3 normalization table and GTE operations */
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

static uint32 tm3_sdk_vector_normal(uint32 input, uint32 output, uint32 short_input, uint32 short_output)
{
    uint32 components[3], sum, leading, normalized, shift, i;
    sint32 coefficient;
    for (i = 0; i < 3u; ++i)
    {
        components[i] = short_input ? (uint32)(sint32)TM3_DRAFT_I16(input + i * 2u) : TM3_DRAFT_U32(input + i * 4u);
        tm3_draft_gte_write_data(9u + i, components[i]);
    }
    tm3_draft_gte_command(0xA00428u);
    sum = tm3_draft_gte_read_data(25u) + tm3_draft_gte_read_data(26u) + tm3_draft_gte_read_data(27u);
    tm3_draft_gte_write_data(30u, sum);
    leading = tm3_draft_gte_read_data(31u) & ~1u;
    shift = (uint32)((31 - (sint32)leading) >> 1);
    normalized = leading < 24u ? (uint32)((sint32)sum >> ((24u - leading) & 31u)) : sum << ((leading - 24u) & 31u);
    coefficient = TM3_DRAFT_I16(0x8008199Cu + (normalized - 64u) * 2u);
    tm3_draft_gte_write_data(8u, (uint32)coefficient);
    for (i = 0; i < 3u; ++i)
        tm3_draft_gte_write_data(9u + i, components[i]);
    tm3_draft_gte_command(0x190003Du);
    for (i = 0; i < 3u; ++i)
    {
        sint32 value = (sint32)tm3_draft_gte_read_data(25u + i) >> (shift & 31u);
        if (short_output)
            TM3_DRAFT_U16(output + i * 2u) = (uint16)value;
        else
            TM3_DRAFT_U32(output + i * 4u) = (uint32)value;
    }
    return sum;
}

uint32 sub_8005B240(uint32 a1, uint32 a2)
{
    return tm3_sdk_vector_normal(a1, a2, 0u, 1u);
}

uint32 sub_8005B254(uint32 a1, uint32 a2)
{
    return tm3_sdk_vector_normal(a1, a2, 0u, 0u);
}

uint32 sub_8005B284(uint32 a1, uint32 a2)
{
    return tm3_sdk_vector_normal(a1, a2, 1u, 1u);
}

/* Accepted original SDK boundary: CompMatrix */
uint32 sub_8005B614(uint32 a1, uint32 a2, uint32 a3)
{
    uint32 first[3], second[3], third[3], i;
    for (i = 0u; i < 5u; ++i)
        tm3_draft_gte_write_control(i, TM3_DRAFT_U32(a1 + 4u * i));
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U16(a2) | (TM3_DRAFT_U32(a2 + 4u) & 0xFFFF0000u));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(a2 + 12u));
    tm3_draft_gte_command(0x486012u);
    for (i = 0u; i < 3u; ++i)
        first[i] = tm3_draft_gte_read_data(9u + i);
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U16(a2 + 2u) | (TM3_DRAFT_U32(a2 + 8u) << 16));
    tm3_draft_gte_write_data(1u, (uint32)TM3_DRAFT_I16(a2 + 14u));
    tm3_draft_gte_command(0x486012u);
    for (i = 0u; i < 3u; ++i)
        second[i] = tm3_draft_gte_read_data(9u + i);
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U16(a2 + 4u) | (TM3_DRAFT_U32(a2 + 8u) & 0xFFFF0000u));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(a2 + 16u));
    tm3_draft_gte_command(0x486012u);
    TM3_DRAFT_U32(a3) = (first[0] & 0xFFFFu) | (second[0] << 16);
    TM3_DRAFT_U32(a3 + 12u) = (first[2] & 0xFFFFu) | (second[2] << 16);
    for (i = 0u; i < 3u; ++i)
        third[i] = tm3_draft_gte_read_data(9u + i);
    TM3_DRAFT_U32(a3 + 16u) = third[2];
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U16(a2 + 20u) | (TM3_DRAFT_U32(a2 + 24u) << 16));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(a2 + 28u));
    tm3_draft_gte_command(0x486012u);
    TM3_DRAFT_U32(a3 + 4u) = (third[0] & 0xFFFFu) | (first[1] << 16);
    TM3_DRAFT_U32(a3 + 8u) = (second[1] & 0xFFFFu) | (third[1] << 16);
    for (i = 0u; i < 3u; ++i)
        third[i] = tm3_draft_gte_read_data(25u + i) + TM3_DRAFT_U32(a1 + 20u + 4u * i);
    for (i = 0u; i < 3u; ++i)
        TM3_DRAFT_U32(a3 + 20u + 4u * i) = third[i];
    return a3;
}

/* Accepted original SDK boundary: ApplyMatrixLV */
uint32 sub_8005B774(uint32 a1, uint32 a2, uint32 a3)
{
    VECTOR output;
    ApplyMatrixLV((MATRIX *)psx_addr(a1, sizeof(MATRIX)), (VECTOR *)psx_addr(a2, 12u), &output);
    TM3_DRAFT_U32(a3) = (uint32)output.vx;
    TM3_DRAFT_U32(a3 + 4u) = (uint32)output.vy;
    TM3_DRAFT_U32(a3 + 8u) = (uint32)output.vz;
    return a3;
}

/* Accepted original SDK boundary: PushMatrix */
void sub_8005B8D4(void)
{
    PushMatrix();
}

/* Accepted original SDK boundary: PopMatrix */
void sub_8005B978(void)
{
    PopMatrix();
}

/* Accepted original SDK boundary: ApplyMatrix */
uint32 sub_8005BB34(uint32 a1, uint32 a2, uint32 a3)
{
    return tm3_native_pointer_address(ApplyMatrix((MATRIX *)(a1 ? psx_addr(a1, sizeof(MATRIX)) : NULL), (SVECTOR *)(a2 ? psx_addr(a2, sizeof(SVECTOR)) : NULL), (VECTOR *)(a3 ? psx_addr(a3, sizeof(VECTOR)) : NULL)));
}

/* Accepted original SDK boundary: ApplyMatrixSV */
uint32 sub_8005BB84(uint32 a1, uint32 a2, uint32 a3)
{
    return tm3_native_pointer_address(ApplyMatrixSV((MATRIX *)(a1 ? psx_addr(a1, sizeof(MATRIX)) : NULL), (SVECTOR *)(a2 ? psx_addr(a2, sizeof(SVECTOR)) : NULL), (SVECTOR *)(a3 ? psx_addr(a3, sizeof(SVECTOR)) : NULL)));
}

/* Accepted original SDK boundary: ScaleMatrix */
uint32 sub_8005BBE4(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(ScaleMatrix((MATRIX *)(a1 ? psx_addr(a1, sizeof(MATRIX)) : NULL), (VECTOR *)(a2 ? psx_addr(a2, sizeof(VECTOR)) : NULL)));
}

/* Accepted original SDK boundary: SetRotMatrix */
void sub_8005BD24(uint32 a1)
{
    SetRotMatrix((MATRIX *)(a1 ? psx_addr(a1, sizeof(MATRIX)) : NULL));
}

/* Accepted original SDK boundary: SetTransMatrix */
void sub_8005BDB4(uint32 a1)
{
    SetTransMatrix((MATRIX *)(a1 ? psx_addr(a1, sizeof(MATRIX)) : NULL));
}

/* Accepted original SDK boundary: Square0 */
uint32 sub_8005C0FC(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(Square0((VECTOR *)(a1 ? psx_addr(a1, sizeof(VECTOR)) : NULL), (VECTOR *)(a2 ? psx_addr(a2, sizeof(VECTOR)) : NULL)));
}

/* Accepted original SDK boundary: OuterProduct0 */
uint32 sub_8005C1C0(uint32 a1, uint32 a2, uint32 a3)
{
    return tm3_native_pointer_address(OuterProduct0((VECTOR *)(a1 ? psx_addr(a1, sizeof(VECTOR)) : NULL), (VECTOR *)(a2 ? psx_addr(a2, sizeof(VECTOR)) : NULL), (VECTOR *)(a3 ? psx_addr(a3, sizeof(VECTOR)) : NULL)));
}

/* Accepted original SDK boundary: RotTransSV */
void sub_8005C234(uint32 a1, uint32 a2, uint32 a3)
{
    RotTransSV((SVECTOR *)(a1 ? psx_addr(a1, sizeof(SVECTOR)) : NULL), (SVECTOR *)(a2 ? psx_addr(a2, sizeof(SVECTOR)) : NULL), (sint32 *)(a3 ? psx_addr(a3, sizeof(sint32)) : NULL));
}

/* Accepted original SDK boundary: RotTransPers */
uint32 sub_8005C334(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    return (uint32)RotTransPers((SVECTOR *)(a1 ? psx_addr(a1, sizeof(SVECTOR)) : NULL), (sint32 *)(a2 ? psx_addr(a2, sizeof(sint32)) : NULL), (sint32 *)(a3 ? psx_addr(a3, sizeof(sint32)) : NULL), (sint32 *)(a4 ? psx_addr(a4, sizeof(sint32)) : NULL));
}

/* Accepted original SDK boundary: RotTransPers3 */
uint32 sub_8005C364(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8)
{
    xport_gte_write_data(0u, r_u32(a1));
    xport_gte_write_data(1u, r_u32(a1 + 4u));
    xport_gte_write_data(2u, r_u32(a2));
    xport_gte_write_data(3u, r_u32(a2 + 4u));
    xport_gte_write_data(4u, r_u32(a3));
    xport_gte_write_data(5u, r_u32(a3 + 4u));
    xport_gte_execute(0x4A280030u);
    w_u32(a4, xport_gte_read_data(12u));
    w_u32(a5, xport_gte_read_data(13u));
    w_u32(a6, xport_gte_read_data(14u));
    w_u32(a7, xport_gte_read_data(8u));
    w_u32(a8, xport_gte_read_flag());
    return (uint32)((sint32)xport_gte_read_data(19u) >> 2);
}

/* Accepted original SDK boundary: RotTrans */
void sub_8005C3C4(uint32 a1, uint32 a2, uint32 a3)
{
    VECTOR output;
    sint32 flags;
    RotTrans((SVECTOR *)psx_addr(a1, sizeof(SVECTOR)), &output, &flags);
    /* The original stores three MAC words without VECTOR padding */
    TM3_DRAFT_U32(a2) = xport_gte_read_data(25u);
    TM3_DRAFT_U32(a2 + 4u) = xport_gte_read_data(26u);
    TM3_DRAFT_U32(a2 + 8u) = xport_gte_read_data(27u);
    TM3_DRAFT_U32(a3) = (uint32)flags;
}

/* Accepted original SDK boundary: RotTransPers4 */
uint32 sub_8005C3F4(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8, uint32 a9, uint32 a10)
{
    uint32 flags;
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(a1));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(a1 + 4u));
    tm3_draft_gte_write_data(2u, TM3_DRAFT_U32(a2));
    tm3_draft_gte_write_data(3u, TM3_DRAFT_U32(a2 + 4u));
    tm3_draft_gte_write_data(4u, TM3_DRAFT_U32(a3));
    tm3_draft_gte_write_data(5u, TM3_DRAFT_U32(a3 + 4u));
    tm3_draft_gte_command(0x280030u);
    TM3_DRAFT_U32(a5) = tm3_draft_gte_read_data(12u);
    TM3_DRAFT_U32(a6) = tm3_draft_gte_read_data(13u);
    TM3_DRAFT_U32(a7) = tm3_draft_gte_read_data(14u);
    flags = tm3_draft_gte_read_control(31u);
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(a4));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(a4 + 4u));
    tm3_draft_gte_command(0x180001u);
    TM3_DRAFT_U32(a8) = tm3_draft_gte_read_data(14u);
    TM3_DRAFT_U32(a9) = tm3_draft_gte_read_data(8u);
    TM3_DRAFT_U32(a10) = tm3_draft_gte_read_control(31u) | flags;
    return (uint32)((sint32)tm3_draft_gte_read_data(19u) >> 2);
}

/* Accepted original SDK boundary: TransposeMatrix */
uint32 sub_8005C5B4(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(TransposeMatrix((MATRIX *)(a1 ? psx_addr(a1, sizeof(MATRIX)) : NULL), (MATRIX *)(a2 ? psx_addr(a2, sizeof(MATRIX)) : NULL)));
}

/* Accepted original SDK boundary: RotMatrix */
uint32 sub_8005C5F4(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(RotMatrix((SVECTOR *)(a1 ? psx_addr(a1, sizeof(SVECTOR)) : NULL), (MATRIX *)(a2 ? psx_addr(a2, sizeof(MATRIX)) : NULL)));
}

/* Accepted original SDK boundary: RotMatrixX */
uint32 sub_8005C884(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(RotMatrixX((sint32)a1, (MATRIX *)(a2 ? psx_addr(a2, sizeof(MATRIX)) : NULL)));
}

/* Accepted original SDK boundary: RotMatrixY */
uint32 sub_8005CA24(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(RotMatrixY((sint32)a1, (MATRIX *)(a2 ? psx_addr(a2, sizeof(MATRIX)) : NULL)));
}

/* Accepted original SDK boundary: RotMatrixZ */
uint32 sub_8005CBC4(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(RotMatrixZ((sint32)a1, (MATRIX *)(a2 ? psx_addr(a2, sizeof(MATRIX)) : NULL)));
}

/* Accepted original SDK boundary: ratan2 */
uint32 sub_8005CD64(uint32 a1, uint32 a2)
{
    return (uint32)ratan2((sint32)a1, (sint32)a2);
}

/* Accepted original SDK boundary: CdGetToc */
uint32 sub_8005CFC4(uint32 a1)
{
    return (uint32)CdGetToc((CdlLOC *)(a1 ? psx_addr(a1, sizeof(CdlLOC)) : NULL));
}

/* Accepted original SDK boundary: CdInit */
extern sint32 CdInit(void);

uint32 sub_8005D214(void)
{
    return (uint32)CdInit();
}

/* Accepted original SDK boundary: CdSync */
uint32 sub_8005D468(uint32 a1, uint32 a2)
{
    return (uint32)CD_sync((sint32)a1, a2 ? (uint8 *)psx_addr(a2, 1u) : NULL);
}

/* Accepted original SDK boundary: CdSyncCallback */
uint32 sub_8005D4A8(uint32 a1)
{
    return (uint32)CdSyncCallbackPSX((uint32)a1);
}

/* Accepted original SDK boundary: CdReadyCallback */
uint32 sub_8005D4BC(uint32 a1)
{
    return (uint32)CdReadyCallbackPSX((uint32)a1);
}

/* Accepted original SDK boundary: CdControl */
uint32 sub_8005D4D0(uint32 a1, uint32 a2, uint32 a3)
{
    return (uint32)CdControl((uint8)a1, (uint8 *)(a2 ? psx_addr(a2, sizeof(uint8)) : NULL), (uint8 *)(a3 ? psx_addr(a3, sizeof(uint8)) : NULL));
}

/* Accepted original SDK boundary: CdControlF */
uint32 sub_8005D60C(uint32 a1, uint32 a2)
{
    return (uint32)CdControlF((uint8)a1, (uint8 *)(a2 ? psx_addr(a2, sizeof(uint8)) : NULL));
}

/* Accepted original SDK boundary: CdControlB */
uint32 sub_8005D740(uint32 a1, uint32 a2, uint32 a3)
{
    return (uint32)CdControlBPSX((uint8)a1, (uint8 *)(a2 ? psx_addr(a2, sizeof(uint8)) : NULL), (uint8 *)(a3 ? psx_addr(a3, sizeof(uint8)) : NULL));
}

/* Accepted original SDK boundary: CdDataCallback */
uint32 sub_8005D8EC(uint32 a1)
{
    tm3_draft_unimplemented("sub_8005D8EC CdDataCallback");
    return 0u; /* Unreachable after the explicit missing SDK failure */
}

/* Accepted original SDK boundary: CdDataSync */
extern sint32 CdDataSync(sint32 mode);

uint32 sub_8005D910(uint32 a1)
{
    return (uint32)CdDataSync((sint32)a1);
}

/* Accepted original SDK boundary: CdIntToPos */
extern CdlLOC *CdIntToPos(sint32 sector, CdlLOC *position);

uint32 sub_8005D930(uint32 a1, uint32 a2)
{
    return tm3_native_pointer_address(CdIntToPos((sint32)a1, a2 ? (CdlLOC *)psx_addr(a2, sizeof(CdlLOC)) : NULL));
}

/* Accepted original SDK boundary: CD_getsector */
extern sint32 CD_getsector(uint32 guest_destination, uint32 words);

uint32 sub_8005EF44(uint32 a1, uint32 a2)
{
    return (uint32)CD_getsector(a1, a2);
}

/* Accepted original SDK boundary: puts */
uint32 sub_8005F214(uint32 a1)
{
    return (uint32)puts((const char *)(a1 ? psx_addr(a1, sizeof(char)) : NULL));
}

/* Accepted original SDK boundary: CDREAD_OBJ_32C */
uint32 sub_8005F5A0(uint32 a1)
{
    tm3_draft_unimplemented("sub_8005F5A0 CDREAD_OBJ_32C");
    return 0u; /* Unreachable after the explicit missing SDK failure */
}

/* Accepted original SDK boundary: CdRead */
extern sint32 CdRead(sint32 count, uint32 *destination, sint32 mode);

uint32 sub_8005F824(uint32 a1, uint32 a2, uint32 a3)
{
    uint32 bytes = (a3 & 0x20u) ? 2340u : 2048u;
    uint32 *destination = NULL;
    if ((sint32)a1 > 0 && a2 && a1 <= UINT32_MAX / bytes)
        destination = (uint32 *)psx_addr(a2, (size_t)a1 * bytes);
    return (uint32)CdRead((sint32)a1, destination, (sint32)a3);
}

/* Accepted original SDK boundary: CdReadSync */
extern sint32 CdReadSync(sint32 mode, uint8 *result);

uint32 sub_8005F924(uint32 a1, uint32 a2)
{
    return (uint32)CdReadSync((sint32)a1, a2 ? (uint8 *)psx_addr(a2, 1u) : NULL);
}

/* Accepted original SDK boundary: VSync */
uint32 sub_8005FA24(uint32 a1)
{
    return (uint32)VSync((sint32)a1);
}

/* Accepted original SDK boundary: VSyncCallback */
uint32 sub_8005FCD4(uint32 a1)
{
    return (uint32)VSyncCallbackPSX((uint32)a1);
}

/* Accepted original SDK boundary: _SpuInit */
extern uint32 _SpuInit(uint32 mode);

uint32 sub_800607E4(uint32 a1)
{
    return _SpuInit(a1);
}

/* Accepted original SDK boundary: _spu_Fw */
uint32 sub_80061188(uint32 a1, uint32 a2)
{
    return (uint32)_spu_Fw((uint32)a1, (uint32)a2);
}

/* Accepted original SDK boundary: SpuSetKey */
uint32 sub_80061574(uint32 a1, uint32 a2)
{
    uint32 mask = a2 & 0x00FFFFFFu;
    uint32 high_mask = mask >> 16;
    uint32 result;
    if (a1 > 1u)
        return 1u;
    SpuSetKey((sint32)a1, mask);
    /* Preserve original SDK guest shadow and incidental V0 */
    if ((TM3_DRAFT_U32(0x80087C34u) & 1u) == 0u)
    {
        result = TM3_DRAFT_U32(0x80087BD4u);
        result = a1 ? result | mask : result & ~mask;
        TM3_DRAFT_U32(0x80087BD4u) = result;
        return result;
    }
    {
        uint32 queued = a1 ? 0x800D8418u : 0x800D841Cu;
        uint32 opposite = a1 ? 0x800D841Cu : 0x800D8418u;
        TM3_DRAFT_U16(queued) = (uint16)mask;
        TM3_DRAFT_U16(queued + 2u) = (uint16)high_mask;
        TM3_DRAFT_U32(0x80087C00u) |= 1u;
        if (a1)
            TM3_DRAFT_U32(0x80087BFCu) |= mask;
        else
            TM3_DRAFT_U32(0x80087BFCu) &= ~mask;
        result = TM3_DRAFT_U16(opposite) & mask;
        if (result)
            TM3_DRAFT_U16(opposite) &= (uint16)~mask;
        result = TM3_DRAFT_U16(opposite + 2u) & high_mask;
        if (result)
        {
            result = TM3_DRAFT_U16(opposite + 2u) & ~high_mask;
            TM3_DRAFT_U16(opposite + 2u) = (uint16)result;
        }
        return result;
    }
}

/* Accepted original SDK boundary: SpuSetKeyOnWithAttr */
uint32 sub_80061734(uint32 a1)
{
    sub_80061B64(a1);
    return sub_80061574(1u, TM3_DRAFT_U32(a1));
}

/* Accepted original SDK boundary: SpuSetTransferStartAddr */
uint32 sub_800617C4(uint32 a1)
{
    return (uint32)SpuSetTransferStartAddr((uint32)a1);
}

/* Accepted original SDK boundary: SpuSetTransferMode */
uint32 sub_80061824(uint32 a1)
{
    return (uint32)SpuSetTransferMode((sint32)a1);
}

/* Accepted original SDK boundary: SpuIsTransferCompleted */
uint32 sub_80061854(uint32 a1)
{
    return (uint32)SpuIsTransferCompleted((sint32)a1);
}

/* Accepted original SDK boundary: SpuGetAllKeysStatus */
uint32 sub_800619E8(uint32 a1)
{
    uint32 voice;
    for (voice = 0; voice < 24u; ++voice)
    {
        sint32 native_status = SpuGetKeyStatus(1u << voice);
        uint32 envelope_on = native_status == SPU_ON || native_status == SPU_OFF_ENV_ON;
        uint32 keyed = TM3_DRAFT_U32(0x80087BD4u) & (1u << voice);
        TM3_DRAFT_U8(a1 + voice) = (uint8)(keyed ? (envelope_on ? 1u : 3u) : (envelope_on ? 2u : 0u));
    }
    return 0u;
}

/* Accepted original SDK boundary: SpuSetVoiceVolume */
void sub_80061A74(uint32 a1, uint32 a2, uint32 a3)
{
    SpuSetVoiceVolume((sint32)a1, (sint16)(a2 & 0x7fffu), (sint16)(a3 & 0x7fffu));
}

/* Accepted original SDK boundary: SpuSetVoicePitch */
void sub_80061AF4(uint32 a1, uint32 a2)
{
    SpuSetVoicePitch((sint32)a1, (uint16)a2);
}

/* Accepted original SDK boundary: SpuSetVoiceAttr */
void sub_80061B64(uint32 a1)
{
    SpuSetVoiceAttr((SpuVoiceAttr *)(a1 ? psx_addr(a1, sizeof(SpuVoiceAttr)) : NULL));
}

/* Accepted original SDK boundary: SpuSetCommonMasterVolume */
uint32 sub_80062454(uint32 a1, uint32 a2)
{
    SpuCommonAttr attr;
    memset(&attr, 0, sizeof(attr));
    attr.mask = SPU_COMMON_MVOLL | SPU_COMMON_MVOLR;
    attr.mvol.left = (sint16)(a1 & 0x7fffu);
    attr.mvol.right = (sint16)(a2 & 0x7fffu);
    SpuSetCommonAttr(&attr);
    return TM3_DRAFT_U32(0x80087C48u);
}

/* Accepted original SDK boundary: SpuSetCommonCDMix */
void sub_80062494(uint32 a1)
{
    SpuCommonAttr attr;
    attr.mask = 0x200u;
    attr.cd.mix = a1 != 0u;
    SpuSetCommonAttr(&attr);
}

/* Accepted original SDK boundary: __divdi3 */
uint64 sub_80062664(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
    sint64 left = (sint64)(((uint64)a2 << 32) | a1);
    sint64 right = (sint64)(((uint64)a4 << 32) | a3);
    if (!right)
        tm3_draft_unimplemented("__divdi3 division by zero");
    if (left == INT64_MIN && right == -1)
        return (uint64)INT64_MIN;
    return (uint64)(left / right);
}

/* Accepted original SDK boundary: AddCOMB */
void sub_80062D0C(void)
{
    sint32 restore = xport_bios_enter_critical();
    fprintf(stderr, "TM3 AddCOMB: SIO driver unavailable\n");
    if (restore == 1)
        xport_bios_exit_critical();
}

/* Accepted original SDK boundary: DelCOMB */
void sub_80062D50(void)
{
    sint32 restore = xport_bios_enter_critical();
    fprintf(stderr, "TM3 DelCOMB: SIO driver unavailable\n");
    FlushCache();
    if (restore == 1)
        xport_bios_exit_critical();
}

/* Accepted original SDK boundary: _comb_control */
uint32 sub_80063304(uint32 a1, ...)
{
    va_list arguments;
    uint32 option, payload = 0u;
    va_start(arguments, a1);
    option = va_arg(arguments, uint32);
    if ((a1 == 4u && option == 0u) || (a1 == 1u && (option == 1u || option == 3u || option == 4u)))
        payload = va_arg(arguments, uint32);
    va_end(arguments);
    return tm3_serial_control(a1, option, payload);
}

/* Accepted original SDK boundary: PadGetState */
uint32 sub_80063F08(uint32 a1)
{
    return (uint32)PadGetStatePSX((uint32)a1);
}

/* Accepted original SDK boundary: PadInfoMode */
uint32 sub_80063FD4(uint32 a1, uint32 a2, uint32 a3)
{
    return (uint32)PadInfoMode((sint32)a1, (sint32)a2, (sint32)a3);
}

/* Accepted original SDK boundary: PadSetActAlign */
uint32 sub_80064248(uint32 a1, uint32 a2)
{
    return (uint32)PadSetActAlignPSX((uint32)a1, (uint32)a2);
}

/* Accepted original SDK boundary: PadSetAct */
void sub_800642C8(uint32 a1, uint32 a2, uint32 a3)
{
    PadSetActPSX((uint32)a1, (uint32)a2, (uint32)a3);
}

/* Accepted original SDK boundary: setRC2wait */
uint32 sub_8006760C(uint32 a1)
{
    tm3_draft_unimplemented("sub_8006760C setRC2wait");
    return 0u; /* Unreachable after the explicit missing SDK failure */
}

/* Accepted original SDK boundary: chkRC2wait */
uint32 sub_8006762C(void)
{
    tm3_draft_unimplemented("sub_8006762C chkRC2wait");
    return 0u; /* Unreachable after the explicit missing SDK failure */
}

/* Original in-place matrix product, including GTE saturation and padding store */
uint32 sub_8005BA24(uint32 left, uint32 right)
{
    uint32 first[3], second[3], third[3], index;
    for (index = 0; index < 5u; ++index)
        tm3_draft_gte_write_control(index, TM3_DRAFT_U32(left + index * 4u));
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U16(right) | (TM3_DRAFT_U32(right + 4u) & 0xffff0000u));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(right + 12u));
    tm3_draft_gte_command(0x486012u);
    for (index = 0; index < 3u; ++index)
        first[index] = tm3_draft_gte_read_data(9u + index);
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U16(right + 2u) | (TM3_DRAFT_U32(right + 8u) << 16));
    tm3_draft_gte_write_data(1u, (uint32)(sint32)TM3_DRAFT_I16(right + 14u));
    tm3_draft_gte_command(0x486012u);
    for (index = 0; index < 3u; ++index)
        second[index] = tm3_draft_gte_read_data(9u + index);
    tm3_draft_gte_write_data(0u, TM3_DRAFT_U16(right + 4u) | (TM3_DRAFT_U32(right + 8u) & 0xffff0000u));
    tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(right + 16u));
    tm3_draft_gte_command(0x486012u);
    TM3_DRAFT_U32(left) = (first[0] & 0xffffu) | (second[0] << 16);
    TM3_DRAFT_U32(left + 12u) = (first[2] & 0xffffu) | (second[2] << 16);
    for (index = 0; index < 3u; ++index)
        third[index] = tm3_draft_gte_read_data(9u + index);
    TM3_DRAFT_U32(left + 4u) = (third[0] & 0xffffu) | (first[1] << 16);
    TM3_DRAFT_U32(left + 8u) = (second[1] & 0xffffu) | (third[1] << 16);
    TM3_DRAFT_U32(left + 16u) = third[2];
    return left;
}

/* Original geometry offset read in integer screen coordinates */
void sub_8005BDD4(uint32 x_output, uint32 y_output)
{
    sint32 x, y;
    ReadGeomOffset(&x, &y);
    TM3_DRAFT_U32(x_output) = (uint32)x;
    TM3_DRAFT_U32(y_output) = (uint32)y;
}

/* Original strcpy boundary returns zero for either null argument */
uint32 sub_800567F4(uint32 destination, uint32 source)
{
    if (!destination || !source)
        return 0u;
    strcpy((char *)psx_addr(destination, 1u), (const char *)psx_addr(source, 1u));
    return destination;
}

/* Original SDK boundary: MulMatrix0 */
uint32 sub_8005B504(uint32 left, uint32 right, uint32 destination)
{
    MulMatrix0((MATRIX *)psx_addr(left, sizeof(MATRIX)), (MATRIX *)psx_addr(right, sizeof(MATRIX)), (MATRIX *)psx_addr(destination, sizeof(MATRIX)));
    return destination;
}
