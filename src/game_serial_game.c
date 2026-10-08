#include "game_draft_support.h"
#include "game_draft_signatures.h"
#include "game_sdk_bindings.h"
#include "game_serial_control.h"

static uint32 tm3_serial_bios_read(uint32 fd, uint32 buffer, uint32 size)
{
    (void)fd; (void)buffer; (void)size;
    tm3_draft_unimplemented("BIOS read for COMB serial transport");
}

static uint32 tm3_serial_bios_write(uint32 fd, uint32 buffer, uint32 size)
{
    (void)fd; (void)buffer; (void)size;
    tm3_draft_unimplemented("BIOS write for COMB serial transport");
}

uint32 sub_80047630(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  FUNCTION_MARKER(0x80047630u, "SCUS_942.49");
  unsigned int v8; 
  uint32 v9; 
  int v10; 
  uint32 v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  uint16 v18; 
  int result; 
  int v20; 
  uint32 v21; 
  int v22; 
  unsigned int v23; 
  uint32 v24; 
  int v25; 
  unsigned int v26; 
  int v27; 
  int v28; 
  int v29; 
  uint32 v30; 
  int v31; 
  unsigned int v32; 
  uint32 v33; 
  int v34; 
  unsigned int v35; 
  int v36; 
  int v37; 
  int v38; 
  unsigned int v39; 
  uint32 v40; 
  int v41; 
  uint32 v42; 
  int v43; 
  unsigned int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  uint32 local_words[2];
  uint32 local_address = TM3_DRAFT_LOCAL_ADDRESS(local_words, sizeof(local_words)); 

  if ( TM3_DRAFT_U32(0x800D3470u) != 2 )
  {
    if ( TM3_DRAFT_U32(0x800D3470u) != 1 )
      goto LABEL_65;
    v29 = 0;
    if ( !a4 )
      goto LABEL_52;
    v30 = a3;
    while ( 1 )
    {
      TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
      v31 = tm3_serial_bios_read(TM3_DRAFT_U32(0x800D3458u), v30, a4);
      v32 = 0;
      TM3_DRAFT_U8(local_address + 0u) = 113;
      if ( a4 )
      {
        v33 = a3;
        do
        {
          ++v32;
          TM3_DRAFT_U8(local_address + 0u) ^= TM3_DRAFT_U8(v33);
          v33 = (a3 + v32);
        }
        while ( v32 < a4 );
      }
      TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
      v34 = tm3_serial_bios_read(TM3_DRAFT_U32(0x800D3458u), (local_address + 2u), 1);
      TM3_DRAFT_U8(local_address + 1u) = v34 == 1 && TM3_DRAFT_U8(local_address + 2u) == TM3_DRAFT_U8(local_address + 0u);
      ++v29;
      TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
      v35 = tm3_serial_bios_write(TM3_DRAFT_U32(0x800D345Cu), (local_address + 1u), 1u);
      if ( v31 == a4 )
      {
        v36 = v29 < 9;
        if ( v34 != 1 )
          goto LABEL_48;
        v36 = v29 < 9;
        if ( v35 >= 2 )
          goto LABEL_48;
        v37 = v29 < 9;
        if ( TM3_DRAFT_U8(local_address + 1u) )
          goto LABEL_50;
      }
      v36 = v29 < 9;
LABEL_48:
      v30 = a3;
      if ( !v36 )
      {
        v37 = v29 < 9;
LABEL_50:
        if ( !v37 )
        {
          sub_80063304(2, 0, 0);
          v38 = sub_80063304(0, 1, 0);
          sub_80063304(1, 1, v38 & 0xFFFFFFFE);
          v18 = tm3_serial_register_read(4u);
          result = 0;
          goto LABEL_66;
        }
LABEL_52:
        if ( !a2 )
          goto LABEL_65;
        TM3_DRAFT_U8(local_address + 0u) = 113;
        v39 = 0;
        v40 = a1;
        do
        {
          ++v39;
          TM3_DRAFT_U8(local_address + 0u) ^= TM3_DRAFT_U8(v40);
          v40 = (a1 + v39);
        }
        while ( v39 < a2 );
        v41 = 0;
        v42 = a1;
        while ( 2 )
        {
          ++v41;
          TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
          v43 = tm3_serial_bios_write(TM3_DRAFT_U32(0x800D345Cu), v42, a2);
          TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
          v44 = tm3_serial_bios_write(TM3_DRAFT_U32(0x800D345Cu), (local_address + 0u), 1u);
          TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
          v45 = tm3_serial_bios_read(TM3_DRAFT_U32(0x800D3458u), (local_address + 1u), 1);
          if ( v43 == a2 || (v46 = v41 < 9, v43 == a2 - 1) )
          {
            if ( v44 >= 2 )
              goto LABEL_61;
            v46 = v41 < 9;
            if ( v45 == 1 )
            {
              v47 = v41 < 9;
              if ( TM3_DRAFT_U8(local_address + 1u) )
                goto LABEL_64;
LABEL_61:
              v46 = v41 < 9;
            }
          }
          v42 = a1;
          if ( !v46 )
          {
            v47 = v41 < 9;
LABEL_64:
            if ( !v47 )
              goto LABEL_15;
LABEL_65:
            v48 = sub_80063304(0, 1, 0);
            sub_80063304(1, 1, v48 & 0xFFFFFFFE);
            v18 = tm3_serial_register_read(4u);
            result = 1;
            goto LABEL_66;
          }
          continue;
        }
      }
    }
  }
  if ( !a2 )
    goto LABEL_16;
  TM3_DRAFT_U8(local_address + 0u) = 113;
  v8 = 0;
  v9 = a1;
  do
  {
    ++v8;
    TM3_DRAFT_U8(local_address + 0u) ^= TM3_DRAFT_U8(v9);
    v9 = (a1 + v8);
  }
  while ( v8 < a2 );
  v10 = 0;
  v11 = a1;
  do
  {
    ++v10;
    TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
    v12 = tm3_serial_bios_write(TM3_DRAFT_U32(0x800D345Cu), v11, a2);
    TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
    v13 = tm3_serial_bios_write(TM3_DRAFT_U32(0x800D345Cu), (local_address + 0u), 1u);
    TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
    v14 = tm3_serial_bios_read(TM3_DRAFT_U32(0x800D3458u), (local_address + 1u), 1);
    if ( v12 == a2 || (v15 = v10 < 9, v12 == a2 - 1) )
    {
      if ( v13 < 2 )
      {
        v15 = v10 < 9;
        if ( v14 != 1 )
          goto LABEL_12;
        v16 = v10 < 9;
        if ( TM3_DRAFT_U8(local_address + 1u) )
          goto LABEL_14;
      }
      v15 = v10 < 9;
    }
LABEL_12:
    v11 = a1;
  }
  while ( v15 );
  v16 = v10 < 9;
LABEL_14:
  if ( !v16 )
    goto LABEL_15;
LABEL_16:
  v20 = 0;
  if ( !a4 )
    goto LABEL_65;
  v21 = a3;
  while ( 2 )
  {
    TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
    v22 = tm3_serial_bios_read(TM3_DRAFT_U32(0x800D3458u), v21, a4);
    v23 = 0;
    TM3_DRAFT_U8(local_address + 0u) = 113;
    v24 = a3;
    do
    {
      ++v23;
      TM3_DRAFT_U8(local_address + 0u) ^= TM3_DRAFT_U8(v24);
      v24 = (a3 + v23);
    }
    while ( v23 < a4 );
    TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
    v25 = tm3_serial_bios_read(TM3_DRAFT_U32(0x800D3458u), (local_address + 2u), 1);
    TM3_DRAFT_U8(local_address + 1u) = v25 == 1 && TM3_DRAFT_U8(local_address + 2u) == TM3_DRAFT_U8(local_address + 0u);
    ++v20;
    TM3_DRAFT_U32(0x800D3468u) = TM3_DRAFT_U32(TM3_DRAFT_U32(0x800D3464u));
    v26 = tm3_serial_bios_write(TM3_DRAFT_U32(0x800D345Cu), (local_address + 1u), 1u);
    if ( v22 == a4 )
    {
      v27 = v20 < 9;
      if ( v25 == 1 )
      {
        v27 = v20 < 9;
        if ( v26 < 2 )
        {
          v28 = v20 < 9;
          if ( TM3_DRAFT_U8(local_address + 1u) )
            goto LABEL_31;
          goto LABEL_28;
        }
      }
    }
    else
    {
LABEL_28:
      v27 = v20 < 9;
    }
    v21 = a3;
    if ( v27 )
      continue;
    break;
  }
  v28 = v20 < 9;
LABEL_31:
  if ( v28 )
    goto LABEL_65;
LABEL_15:
  sub_80063304(2, 0, 0);
  v17 = sub_80063304(0, 1, 0);
  sub_80063304(1, 1, v17 & 0xFFFFFFFE);
  v18 = tm3_serial_register_read(4u);
  result = 0;
LABEL_66:
  tm3_serial_register_write(4u, (uint16)(v18 & 0xFF7Fu));
  return result;
}

