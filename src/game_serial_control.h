#ifndef TM3_GAME_SERIAL_CONTROL_H
#define TM3_GAME_SERIAL_CONTROL_H
#include "psx.h"
uint32 tm3_serial_control(uint32 command, uint32 option, uint32 payload);
uint16 tm3_serial_register_read(uint32 offset);
void tm3_serial_register_write(uint32 offset, uint16 value);
#endif
