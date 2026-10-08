#include "game_draft_signatures.h"
#include "psx_spu.h"
#include "game_disc_toc.h"

/* Original ResetGraph byte storage, verified at 0x80057480 */
const uint32 xport_gpu_graph_type_address = 0x80080e88u;
void xport_bind_native_spu_transfer(void);
void tm3_bind_native_bios_callback(void);

void xport_main(void)
{
    PSX_EXE executable = {
        "../orig/SCUS_942.49", 0x80010000u,
        0x80089c90u, 0x800d8ea0u, 0x80087cecu,
        0x800d8ea0u, 0x0071f158u
    };
    if (!xport_psx_exe_load(&executable)) {
        executable.path = "orig/SCUS_942.49";
        if (!xport_psx_exe_load(&executable)) {
            xport_message_error("Twisted Metal 3", "Cannot load orig/SCUS_942.49");
            xport_set_exit_code(2);
            return;
        }
    }
    if (!cd_mount_cue("../iso/Twisted Metal III (USA) (v1.0).cue")) {
        xport_message_error("Twisted Metal 3", "Cannot mount the original disc image");
        xport_set_exit_code(2);
        return;
    }
    if (CdSetToc(tm3_disc_toc, TM3_DISC_TRACK_COUNT) != TM3_DISC_TRACK_COUNT) {
        xport_message_error("Twisted Metal 3", "Cannot configure the original disc TOC");
        xport_set_exit_code(2);
        cd_unmount_image();
        return;
    }
    tm3_bind_native_bios_callback();
    xport_bind_native_spu_transfer();
    sub_8003A070();
    cd_unmount_image();
}
