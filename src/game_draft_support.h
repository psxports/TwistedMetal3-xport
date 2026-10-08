#ifndef TM3_GAME_DRAFT_SUPPORT_H
#define TM3_GAME_DRAFT_SUPPORT_H

#include "psx.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/* Scalar subword lvalues used by the decompiler */
#ifndef LOBYTE
#define LOBYTE(value) (*((uint8 *)&(value)))
#endif
#ifndef HIBYTE
#define HIBYTE(value) (*((uint8 *)&(value) + 1))
#endif
#ifndef LOWORD
#define LOWORD(value) (*((uint16 *)&(value)))
#endif
#ifndef HIWORD
#define HIWORD(value) (*((uint16 *)&(value) + 1))
#endif
#define LODWORD(value) (*((uint32 *)&(value)))
#define HIDWORD(value) (*((uint32 *)&(value) + 1))
#define BYTE1(value) (*((uint8 *)&(value) + 1))
#define BYTE2(value) (*((uint8 *)&(value) + 2))
#define BYTE3(value) (*((uint8 *)&(value) + 3))
#define SHIBYTE(value) (*((sint8 *)&(value) + 1))
#define SLOBYTE(value) (*((sint8 *)&(value)))
#define SLOWORD(value) (*((sint16 *)&(value)))
#define SHIWORD(value) (*((sint16 *)&(value) + 1))
#define __PAIR64__(high, low) (((uint64)(uint32)(high) << 32) | (uint32)(low))
#define __SPAIR64__(high, low) ((sint64)__PAIR64__(high, low))
static inline sint32 abs32(sint32 value)
{
    return (sint32)(value < 0 ? 0u - (uint32)value : (uint32)value);
}
static inline sint16 abs16(sint32 value)
{
    return (sint16)abs32((sint16)value);
}

/* Unverified draft memory expressions */
typedef uint8 _BYTE;
typedef uint16 _WORD;
typedef uint32 _DWORD;
typedef uint64 _QWORD;

#define TM3_DRAFT_U8(address) (*(uint8 *)psx_addr((uint32)(address), 1u))
#define TM3_DRAFT_U16(address) (*(uint16 *)psx_addr((uint32)(address), 2u))
#define TM3_DRAFT_U32(address) (*(uint32 *)psx_addr((uint32)(address), 4u))
#define TM3_DRAFT_U64(address) (*(uint64 *)psx_addr((uint32)(address), 8u))
#define TM3_DRAFT_I8(address) (*(sint8 *)psx_addr((uint32)(address), 1u))
#define TM3_DRAFT_I16(address) (*(sint16 *)psx_addr((uint32)(address), 2u))
#define TM3_DRAFT_I32(address) (*(sint32 *)psx_addr((uint32)(address), 4u))

/* TODO Supply fail-fast adapters during a separate integration pass */
uint32 tm3_draft_indirect(uint32 target, uint32 argument_count, ...);
__declspec(noreturn) void tm3_draft_unimplemented(const char *operation);
uint32 tm3_draft_local_address(void *buffer, uint32 size);
uint32 tm3_native_pointer_address(const void *buffer);
#define TM3_DRAFT_LOCAL_ADDRESS(buffer, size) tm3_draft_local_address((buffer), (uint32)(size))
void tm3_draft_gte_write_control(uint32 index, uint32 value);
void tm3_draft_gte_write_data(uint32 index, uint32 value);
uint32 tm3_draft_gte_read_control(uint32 index);
uint32 tm3_draft_gte_read_data(uint32 index);
void tm3_draft_gte_command(uint32 instruction);

#endif
