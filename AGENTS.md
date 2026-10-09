# Twisted Metal 3

Resolve `[XPORT_ROOT]` from `xport-project.json` and read `[XPORT_ROOT]/AGENTS.md`. Keep only stable game-specific facts and task-routing links here; put detailed evidence under `status`. Never create, edit, move, delete or regenerate `README.md`.

## Project facts

- Native short name: `TM3`; language: C
- Solution: `src/platform/win/TM3.sln`; Debug executable: `bin/TM3_debug.exe`; Release executable: `bin/TM3.exe`; working directory: `bin`; intermediates: `_build`
- Runtime data: `bin/DATA`; Red Book output when applicable: `bin/MUSIC`
- Original boot image: `SCUS_942.49`, SHA-256 `6272d8922853cecf2d163089a0869f3a22bb4161af3c9bc8016d935a7a3bbcec`; `orig/SYSTEM.CNF` names this executable
- Load base: `0x80010000`; payload: `499712` bytes; entry: `0x800624D4`; header GP: zero; runtime GP: `0x80089698`, initialized at `0x80062550`
- Disc: `iso/Twisted Metal III (USA) (v1.0).cue`; input hashes: `status/startup.json`; 36 Red Book audio tracks converted to `bin/MUSIC`
- Implementation language: C scaffold; original source language is unproven; no game-logic dummy scope has been agreed
- User permits stubs for BIOS/SDK calls missing from xport; agreement and recording BIOS identity: `status/function-coverage/first/boundary-stub-agreement.json`
- Accepted original evidence: `orig/images/SCUS_942.49`; acceptance receipt: `status/ida/accepted/startup-ida-v1.json`
- PsyQ review: `status/ghidra/classification.json`; 314 SKIP replacement boundaries; 14 ambiguous matches remain TODO; wrapper ABI and runtime equivalence are unproven
- Recording contract: `lockstep` schema 1 enabled for `SCUS_942.49`; user role port `2422`, lockstep role port `2423`; isolated settings under `tools/duckstation/data`
- `src/game_main.c` is an empty startup scaffold; `xport_gpu_graph_type_address = 0u` is unresolved and must be replaced using original-image evidence before GPU wrapper calls
- No translated game functions or reviewed game hooks/layouts exist yet; follow `function_converge NAME`, `stop`, then `coverage NAME`
- Launchers: `DuckStation.bat`, `record.bat`; startup completed with original analysis and Debug scaffold build, not a playable native port
