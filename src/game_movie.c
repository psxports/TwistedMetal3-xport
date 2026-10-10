#include "game_movie.h"
#include "game_draft_support.h"
#include "game_draft_signatures.h"
#include "psx_press.h"
#include "psx_stream.h"
#include "psx_spu.h"
#include "psx_gpu.h"
#include <stdio.h>

/* MOVIE_R.MOD entry table at code offset 0x229C */
static const uint32 movie_last_frame[16] = {
    80u, 1787u, 570u, 620u, 616u, 562u, 571u, 306u,
    614u, 599u, 536u, 663u, 531u, 547u, 559u, 588u
};
GDB_DATA volatile uint32 g_tm3_movie_id;
GDB_DATA volatile uint32 g_tm3_movie_frame;
GDB_DATA volatile uint32 g_tm3_movie_frames;
GDB_DATA volatile uint32 g_tm3_movie_active;

uint32 tm3_movie_play(uint32 movie, uint32 skippable)
{
    uint32 *ring, *vlc, *strip, *frame, *header;
    uint32 width, height, x, buffer = 0u, idle = 0u, count = 0u;
    CdlLOC location;
    DISPENV display;
    PSX_RECT rectangle;
    uint8 read_mode = 0xC0u;
    DecDCTCallback previous_in, previous_out;
    if (movie >= 16u) {
        fprintf(stderr, "TM3 movie: invalid selection %u\n", movie);
        abort();
    }
    ring = (uint32 *)malloc(0x80000u);
    vlc = (uint32 *)malloc(0x28000u);
    strip = (uint32 *)malloc(0x2D00u);
    if (!ring || !vlc || !strip) abort();
    memcpy(&location, psx_addr(0x8007EF84u + movie * 8u, 4u), 4u);
    previous_in = DecDCTinCallback(NULL);
    previous_out = DecDCToutCallback(NULL);
    DecDCTReset(0);
    DecDCTvlcSize(0);
    StSetRing(ring, 256u);
    StSetStream(1u, 1u, 0xFFFFFFFFu, NULL, NULL);
    stream_set_read_mode(read_mode);
    if (!CdControl(2u, (uint8 *)&location, NULL) || !CdRead2(read_mode)) abort();
    g_tm3_movie_id = movie;
    g_tm3_movie_frame = g_tm3_movie_frames = 0u;
    g_tm3_movie_active = 1u;
    fprintf(stderr, "TM3 movie %u: begin\n", movie);
    for (;;) {
        if (skippable) {
            sub_8003EDC0(0x800D1D00u, 8u);
            if (TM3_DRAFT_U16(0x800D1D08u) & 0x40u) break;
        }
        stream_pump();
        if (StGetNext(&frame, &header)) {
            if (VSync(0) < 0 || ++idle >= 300u) {
                fprintf(stderr, "TM3 movie %u: STR timeout after frame %u\n", movie, g_tm3_movie_frame);
                abort();
            }
            continue;
        }
        idle = 0u;
        width = ((StHEADER *)header)->width;
        height = ((StHEADER *)header)->height;
        if (!width || width > 320u || !height || height > 240u || (width & 15u) || (height & 15u)) abort();
        g_tm3_movie_frame = ((StHEADER *)header)->frameCount;
        if (DecDCTvlc(frame, vlc) != 0) abort();
        StFreeRing(frame);
        DecDCTin(vlc, 3);
        for (x = 0u; x < width; x += 16u) {
            DecDCTout(strip, (sint32)(12u * height));
            DecDCToutSync(0);
            rectangle.x = (sint16)(x * 3u / 2u);
            rectangle.y = (sint16)(buffer * 240u);
            rectangle.w = 24;
            rectangle.h = (sint16)height;
            LoadImagePSX(&rectangle, strip);
        }
        DrawSync(0);
        SetDefDispEnv(&display, 0, (sint32)(buffer * 240u), (sint32)width, (sint32)height);
        display.isrgb24 = 1;
        PutDispEnv(&display);
        SetDispMask(1);
        if (!gpu_present()) abort();
        ++count;
        g_tm3_movie_frames = count;
        if (g_tm3_movie_frame >= movie_last_frame[movie]) break;
        buffer ^= 1u;
    }
    CdControl(CdlPause, NULL, NULL);
    StUnSetRing();
    DecDCTinSync(0);
    DecDCToutSync(0);
    DecDCTinCallback(previous_in);
    DecDCToutCallback(previous_out);
    free(strip);
    free(vlc);
    free(ring);
    SetDefDispEnv(&display, 0, 0, 320, 240);
    PutDispEnv(&display);
    g_tm3_movie_active = 0u;
    fprintf(stderr, "TM3 movie %u: end, %u frames\n", movie, count);
    return 0u;
}
