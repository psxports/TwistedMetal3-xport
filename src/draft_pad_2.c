#include "game_draft_support.h"
#include "game_draft_signatures.h"

/* Unverified draft; TODO items require later review */
uint32 sub_8001CA04(uint32 a1)
{
    uint32 original_local_words[12];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8001CA04u, "SCUS_942.49");

  uint32 result; /* Guest callback address */ 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  sint16 v8; 
  int v9; 
  sint32 v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  char v28; 
  char v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  char v34; 
  char v35; 
  char v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int vars0; 
  int vars0a; 
  int vars0b; 
  int vars0c; 

  result = (uint32)sub_8001AE7C(a1);
  if ( !result )
  {
    result = sub_8001AE3C(a1);
    if ( !result )
    {
      result = sub_8001AF24(a1);
      if ( !result )
      {
        v3 = TM3_DRAFT_I8(a1 + 3329);
        if ( v3 == 1 )
        {
          if ( TM3_DRAFT_U32(a1 + 3684) )
          {
            if ( TM3_DRAFT_U32(a1 + 3688) )
              return 0x8001D888u;
            goto LABEL_36;
          }
        }
        else
        {
          if ( v3 != 3 )
          {
            if ( v3 == 4 )
            {
              v4 = TM3_DRAFT_U32(a1 + 3692);
              if ( v4 )
              {
                while ( 1 )
                {
                  if ( TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 104) < TM3_DRAFT_I16(v4 + 4) )
                  {
                    v5 = TM3_DRAFT_U32(v4);
                    v6 = TM3_DRAFT_I8(TM3_DRAFT_U32(v4) + 3328);
                    if ( v6 == 1 )
                    {
                      if ( TM3_DRAFT_U8(a1 + 3328) == 2
                        && TM3_DRAFT_U8(v5 + 3700) < (uint32)TM3_DRAFT_U8(v5 + 3701) )
                      {
                        v7 = a1;
                        goto LABEL_30;
                      }
                    }
                    else if ( v6 >= 2 )
                    {
                      if ( v6 == 2 )
                      {
                        if ( TM3_DRAFT_U8(a1 + 3328) == 2 )
                        {
                          if ( !TM3_DRAFT_U8(v5 + 3700) )
                          {
                            sub_8001A8C4(a1, v5, v4);
                            result = 0x8001D888u;
                            TM3_DRAFT_U8(a1 + 3329) = 1;
                            return result;
                          }
                        }
                        else if ( !TM3_DRAFT_U8(v5 + 3700) )
                        {
                          sub_8001A8C4(a1, TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 3692)), TM3_DRAFT_U32(a1 + 3692));
                          sub_8001A8C4(a1, TM3_DRAFT_U32(v4), v4);
                          result = 0x8001D888u;
                          TM3_DRAFT_U8(a1 + 3329) = 1;
                          return result;
                        }
                      }
                    }
                    else if ( !TM3_DRAFT_U8(TM3_DRAFT_U32(v4) + 3328) && TM3_DRAFT_U8(a1 + 3328) == 2 && !TM3_DRAFT_U8(v5 + 3700) )
                    {
                      v7 = a1;
LABEL_30:
                      sub_8001A8C4(v7, v5, v4);
                      result = 0x8001D888u;
                      TM3_DRAFT_U8(a1 + 3329) = 3;
                      return result;
                    }
                  }
                  v4 = TM3_DRAFT_U32(v4 + 12);
                  if ( !v4 )
                    goto LABEL_36;
                }
              }
            }
            goto LABEL_36;
          }
          if ( TM3_DRAFT_U32(a1 + 3684) )
          {
            if ( TM3_DRAFT_U32(a1 + 3688) )
              return 0x8001D888u;
            sub_8001C2E0(a1);
LABEL_36:
            TM3_DRAFT_U16(a1 + 3376) = TM3_DRAFT_U16(28 * TM3_DRAFT_I16(a1 + 3390) + TM3_DRAFT_U32(0x80089F00u)) - TM3_DRAFT_U16(a1 + 3348);
            v8 = TM3_DRAFT_U16(28 * TM3_DRAFT_I16(a1 + 3390) + TM3_DRAFT_U32(0x80089F00u) + 2) - TM3_DRAFT_U16(a1 + 3350);
            v9 = TM3_DRAFT_I16(a1 + 3376) * TM3_DRAFT_I16(a1 + 3376);
            TM3_DRAFT_U16(a1 + 3378) = v8;
            v10 = sub_8005B124(v9 + v8 * v8);
            if ( v10 )
            {
              LOWORD(TM3_DRAFT_I32(original_local_address + 24u)) = (sint32)((uint32)(sint32)TM3_DRAFT_I16(a1 + 3376) << 12u) / v10;
              HIWORD(TM3_DRAFT_I32(original_local_address + 24u)) = (sint32)((uint32)(sint32)TM3_DRAFT_I16(a1 + 3378) << 12u) / v10;
            }
            else
            {
              TM3_DRAFT_I32(original_local_address + 24u) = 0;
            }
            v11 = v10;
            if ( v10 >= 8193 )
            {
              TM3_DRAFT_U16(a1 + 3376) = 2 * TM3_DRAFT_I32(original_local_address + 24u);
              v11 = 0x2000;
              TM3_DRAFT_U16(a1 + 3378) = 2 * HIWORD(TM3_DRAFT_I32(original_local_address + 24u));
            }
            if ( sub_800163A0(
                   TM3_DRAFT_U32(a1 + 3396),
                   TM3_DRAFT_U32(a1 + 3400),
                   a1 + 3348,
                   (uint32)(a1 + 3376),
                   0) )
            {
              if ( sub_8001BD70(a1, TM3_DRAFT_U16(a1 + 2 * (TM3_DRAFT_U8(a1 + 3394) - 1) + 3716)) )
                return 0x8001CA04u;
              return 0;
            }
            v12 = 28 * TM3_DRAFT_I16(a1 + 3390) + TM3_DRAFT_U32(0x80089F00u);
            if ( TM3_DRAFT_U16(v12 + 12) >= v11 )
            {
              v13 = TM3_DRAFT_U8(a1 + 3395) + 1;
              if ( v13 >= TM3_DRAFT_U8(a1 + 3394) )
              {
                sub_8001C23C(a1);
                return 0;
              }
              if ( TM3_DRAFT_U8(v12 + 9) != 1
                || TM3_DRAFT_U8(28 * TM3_DRAFT_U16(a1 + 2 * v13 + 3716) + TM3_DRAFT_U32(0x80089F00u) + 9) != 1 )
              {
                TM3_DRAFT_U8(a1 + 3395) = v13;
                TM3_DRAFT_U16(a1 + 3390) = TM3_DRAFT_U16(a1 + 2 * (uint8)v13 + 3716);
                sub_8001C354(a1);
                return 0;
              }
            }
            TM3_DRAFT_I32(original_local_address + 32u) = TM3_DRAFT_I16(a1 + 1540);
            TM3_DRAFT_I32(original_local_address + 36u) = TM3_DRAFT_I16(a1 + 1552);
            v14 = ((sint16)TM3_DRAFT_I32(original_local_address + 24u) * TM3_DRAFT_I32(original_local_address + 36u) - SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) * TM3_DRAFT_I32(original_local_address + 32u)) / 4096;
            v15 = -4096;
            if ( v14 >= -4096 )
            {
              v15 = 4096;
              if ( v14 < 4097 )
                v15 = ((sint16)TM3_DRAFT_I32(original_local_address + 24u) * TM3_DRAFT_I16(a1 + 1552) - SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) * TM3_DRAFT_I32(original_local_address + 32u)) / 4096;
            }
            if ( v15 >= 0 )
              v16 = TM3_DRAFT_I16(0x8007BCF4u + 2u * (uint32)v15);
            else
              v16 = -TM3_DRAFT_I16(0x8007BCF4u - 2u * (uint32)v15);
            if ( TM3_DRAFT_U32(a1 + 3948) )
            {
              v17 = TM3_DRAFT_I16(a1 + 3392) * TM3_DRAFT_I16(a1 + 1552);
              TM3_DRAFT_U16(a1 + 3356) = TM3_DRAFT_I16(a1 + 3392) * TM3_DRAFT_I16(a1 + 1540) / 4096;
              v18 = TM3_DRAFT_U32(a1 + 4040);
              TM3_DRAFT_U16(a1 + 3358) = v17 / 4096;
              v19 = TM3_DRAFT_I16(v18 + 90) * (TM3_DRAFT_I16(a1 + 1540) - TM3_DRAFT_I16(a1 + 1552));
              v20 = TM3_DRAFT_U32(a1 + 4040);
              TM3_DRAFT_U16(a1 + 3360) = v19 / 4096;
              v21 = TM3_DRAFT_I16(v20 + 90) * (TM3_DRAFT_I16(a1 + 1552) + TM3_DRAFT_I16(a1 + 1540));
              v22 = TM3_DRAFT_U32(a1 + 4040);
              TM3_DRAFT_U16(a1 + 3362) = v21 / 4096;
              v23 = TM3_DRAFT_I16(v22 + 90) * (TM3_DRAFT_I16(a1 + 1540) + TM3_DRAFT_I16(a1 + 1552));
              v24 = TM3_DRAFT_U32(a1 + 4040);
              TM3_DRAFT_U16(a1 + 3364) = v23 / 4096;
              TM3_DRAFT_U16(a1 + 3366) = TM3_DRAFT_I16(v24 + 90)
                                    * (TM3_DRAFT_I16(a1 + 1552) - TM3_DRAFT_I16(a1 + 1540))
                                    / 4096;
              v25 = sub_800163A0(
                      TM3_DRAFT_U32(a1 + 3396),
                      TM3_DRAFT_U32(a1 + 3400),
                      a1 + 3348,
                      (uint32)(a1 + 3356),
                      a1 + 3372);
              v27 = sub_800163A0(
                      TM3_DRAFT_U32(a1 + 3396),
                      TM3_DRAFT_U32(a1 + 3400),
                      a1 + 3348,
                      (uint32)(a1 + 3360),
                      0);
              v26 = sub_800163A0(
                      TM3_DRAFT_U32(a1 + 3396),
                      TM3_DRAFT_U32(a1 + 3400),
                      a1 + 3348,
                      (uint32)(a1 + 3364),
                      0);
              if ( v27 && v26 || v25 && TM3_DRAFT_I16(a1 + 3392) < TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 90) )
              {
                if ( TM3_DRAFT_I16(a1 + 3392) < 201 )
                {
                  v28 = TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 85);
                  TM3_DRAFT_U8(a1 + 3332) = 0;
                  TM3_DRAFT_U8(a1 + 3331) = v28;
                  v29 = 16;
                  if ( v16 >= 0 )
                    v29 = -16;
LABEL_76:
                  TM3_DRAFT_U8(a1 + 3330) = v29;
                  sub_8001C9EC(a1);
                  return 0;
                }
              }
              else
              {
                v30 = (sint16)TM3_DRAFT_I32(original_local_address + 24u) * TM3_DRAFT_I32(original_local_address + 32u) + SHIWORD(TM3_DRAFT_I32(original_local_address + 24u)) * TM3_DRAFT_I32(original_local_address + 36u);
                v31 = v30 >> 12;
                if ( v30 < 0 )
                  v31 = (v30 + 4095) >> 12;
                v32 = -4096;
                if ( v31 >= -4096 )
                {
                  v32 = 4096;
                  if ( v31 < 4097 )
                    v32 = v31;
                }
                if ( v32 > 0 )
                {
                  v33 = TM3_DRAFT_I16(a1 + 3390);
                  TM3_DRAFT_U8(a1 + 3330) = v16 / 128;
                  sub_8001C79C(a1, (sint16)(v11 - TM3_DRAFT_U16(28 * v33 + TM3_DRAFT_U32(0x80089F00u) + 12)));
                  return 0;
                }
                if ( (uint32)(v16 + 682) >= 0x555 )
                {
                  v35 = -16;
                  if ( v16 >= 0 )
                    v35 = 16;
                  TM3_DRAFT_U8(a1 + 3330) = v35;
                  v36 = TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 84);
                  TM3_DRAFT_U8(a1 + 3332) = 0;
                  TM3_DRAFT_U8(a1 + 3331) = v36;
                  return 0;
                }
                if ( TM3_DRAFT_I16(a1 + 3392) < 201 )
                {
                  v34 = TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + 85);
                  TM3_DRAFT_U8(a1 + 3332) = 0;
                  TM3_DRAFT_U8(a1 + 3331) = v34;
                  v29 = -16;
                  if ( v16 >= 0 )
                    v29 = 16;
                  goto LABEL_76;
                }
              }
              TM3_DRAFT_U8(a1 + 3331) = 0;
              TM3_DRAFT_U8(a1 + 3332) = 15;
              TM3_DRAFT_U8(a1 + 3330) = 0;
            }
            else
            {
              v37 = TM3_DRAFT_I16(a1 + 3392) * TM3_DRAFT_I16(a1 + 1540);
              ++TM3_DRAFT_U16(a1 + 3338);
              v38 = -2048 * (v37 / 4096);
              v39 = TM3_DRAFT_I16(a1 + 3392) * TM3_DRAFT_I16(a1 + 1552);
              TM3_DRAFT_U16(a1 + 3356) = v38 / 4096;
              TM3_DRAFT_U16(a1 + 3358) = -2048 * (v39 / 4096) / 4096;
              TM3_DRAFT_U16(a1 + 3360) = 0;
              TM3_DRAFT_U16(a1 + 3362) = 0;
              TM3_DRAFT_U16(a1 + 3364) = 0;
              TM3_DRAFT_U16(a1 + 3366) = 0;
              v40 = sub_800163A0(
                      TM3_DRAFT_U32(a1 + 3396),
                      TM3_DRAFT_U32(a1 + 3400),
                      a1 + 3348,
                      (uint32)(a1 + 3356),
                      a1 + 3372);
              v41 = TM3_DRAFT_I16(original_local_address + 24u) * TM3_DRAFT_I32(original_local_address + 32u) + TM3_DRAFT_I16(original_local_address + 26u) * TM3_DRAFT_I32(original_local_address + 36u);
              v42 = v41 >> 12;
              if ( v41 < 0 )
                v42 = (v41 + 4095) >> 12;
              v43 = -4096;
              if ( v42 >= -4096 )
              {
                v43 = 4096;
                if ( v42 < 4097 )
                  v43 = v42;
              }
              if ( TM3_DRAFT_I16(a1 + 3338) < 41 && !v40 )
              {
                if ( v43 <= 0 || v16 >= 683 )
                  return 0;
                result = 0;
                if ( v16 < -682 )
                  return result;
              }
              sub_8001C9F8(a1);
            }
            return 0;
          }
        }
        if ( !sub_8001C23C(a1) )
          return 0;
        return 0x8001CA04u;
      }
    }
  }
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8003D0A8(uint32 a1)
{
    uint32 original_local_words[5];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8003D0A8u, "SCUS_942.49");
  int v1; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  uint32 v6; 
  int v7; 
  int v8; 
  uint32 v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  char v16; 
  int v17; 
  int v18; 
  uint32 v19; 
  int v20; 
  sint16 v21; 
  sint16 v22; 
  sint16 v23; 
  sint16 v24; 
  sint16 v25; 
  uint32 v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  sint16 v32; 
  sint16 v33; 
  uint32 v34; 
  sint16 v35; 
  int v36; 
  uint32 v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  char v45; 
  int v46; 
  int v47; 
  uint32 v48; 
  sint32 result; 

  v1 = 4 * (TM3_DRAFT_U32(0x800D2E88u) - 1);
  v2 = TM3_DRAFT_U32(v1 - 2146619768 + 116);
  v3 = TM3_DRAFT_I32((uint32)0x8007E894u + v1);
  v4 = v3 + 72 * v2 + 4;
  v5 = 0;
  if ( TM3_DRAFT_U8(v4 + 2) )
  {
    v6 = (uint32)(v3 + 72 * v2 + 4);
    v7 = a1;
    v8 = 133696;
    do
    {
      sub_8005AEB4(a1 + v8);
      v9 = (uint32)(v7 + 133696);
      TM3_DRAFT_U8(v7 + 133700) = 0;
      TM3_DRAFT_U8(v7 + 133701) = 0;
      TM3_DRAFT_U8(v7 + 133702) = 0;
      TM3_DRAFT_U16(v7 + 133704) = TM3_DRAFT_U16(v6 + 2u * (6));
      v7 += 16;
      TM3_DRAFT_U16(v9 + 2u * (5)) = TM3_DRAFT_U16(v6 + 2u * (7));
      v8 += 16;
      TM3_DRAFT_U16(v9 + 2u * (6)) = TM3_DRAFT_U16(v6 + 2u * (8));
      ++v5;
      TM3_DRAFT_U16(v9 + 2u * (7)) = TM3_DRAFT_U16(v6 + 2u * (9));
      v6 += 2u * (8);
    }
    while ( v5 < TM3_DRAFT_U8(v4 + 2) );
  }
  v10 = 0;
  v11 = 122680;
  do
  {
    sub_8005AE94(a1 + v11);
    sub_8005ADC4(a1 + v11, 0);
    ++v10;
    v11 += 20;
  }
  while ( v10 < 512 );
  TM3_DRAFT_U16(0x8007F006u) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 30);
  TM3_DRAFT_U16(0x8007F008u) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 26);
  TM3_DRAFT_U8(0x8007F004u) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 24);
  TM3_DRAFT_U8(0x8007F005u) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 25);
  TM3_DRAFT_U16(0x8007F11Eu) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 22);
  TM3_DRAFT_U16(0x8007F120u) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 18);
  TM3_DRAFT_U8(0x8007F11Cu) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 16);
  TM3_DRAFT_U8(0x8007F11Du) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 17);
  TM3_DRAFT_U16(0x8007F266u) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 46);
  TM3_DRAFT_U16(0x8007F268u) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 42);
  TM3_DRAFT_U8(0x8007F264u) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 40);
  TM3_DRAFT_U8(0x8007F265u) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 41);
  TM3_DRAFT_U16(0x8007F24Eu) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 38);
  TM3_DRAFT_U16(0x8007F250u) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 34);
  v12 = 0;
  TM3_DRAFT_U8(0x8007F24Cu) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 32);
  TM3_DRAFT_U8(0x8007F24Du) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 33);
  TM3_DRAFT_U16(0x8007F236u) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 14);
  TM3_DRAFT_U16(0x8007F238u) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 10);
  TM3_DRAFT_U8(0x8007F234u) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 8);
  TM3_DRAFT_U8(0x8007F235u) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 9);
  sub_8003AFA8(a1);
  v13 = 133760;
  sub_8004BAC0(a1);
  v14 = a1;
  do
  {
    sub_8005AEB4(a1 + v13);
    sub_8005AD94(a1 + v13, 1);
    v15 = v14 + 133760;
    TM3_DRAFT_U8(v14 + 133764) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CBCu));
    v14 += 16;
    v13 += 16;
    TM3_DRAFT_U8(v15 + 5) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CBCu) + 1);
    ++v12;
    v16 = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CBCu) + 2);
    TM3_DRAFT_U16(v15 + 12) = 320;
    TM3_DRAFT_U16(v15 + 14) = 240;
    TM3_DRAFT_U16(v15 + 8) = 0;
    TM3_DRAFT_U16(v15 + 10) = 0;
    TM3_DRAFT_U8(v15 + 6) = v16;
  }
  while ( v12 < 2 );
  TM3_DRAFT_I32(original_local_address + 16u) = 138376;
  sub_8005AEF4(a1 + 133792, 0, TM3_DRAFT_U32(0x800D2EF0u), 96);
  v17 = a1;
  do
  {
    v18 = a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1280;
    sub_8005AE94(v18);
    sub_8005ADC4(v18, 1);
    sub_8005AD94(v18, 1);
    v19 = (uint32)TM3_DRAFT_U32(0x80089CA0u);
    TM3_DRAFT_U16(v17 + 139672) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 52) - TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 48) + 1;
    TM3_DRAFT_U16(v17 + 139674) = (uint8)TM3_DRAFT_U8(v19 + 1u * (53)) - (uint8)TM3_DRAFT_U8(v19 + 1u * (49)) + 1;
    TM3_DRAFT_U8(v17 + 139668) = TM3_DRAFT_U8(v19 + 1u * (48));
    TM3_DRAFT_U8(v17 + 139669) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 49);
    v20 = TM3_DRAFT_U32(0x80089CA0u);
    TM3_DRAFT_U16(v17 + 139670) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 50);
    sub_8005AEF4(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1300, 0, TM3_DRAFT_U32(0x800D2EF0u), TM3_DRAFT_U16(v20 + 54));
    v21 = TM3_DRAFT_U16(0x80089E02u) - 56;
    TM3_DRAFT_U16(v17 + 139664) = TM3_DRAFT_U16(0x80089E00u) - 70;
    TM3_DRAFT_U16(v17 + 139666) = v21;
    sub_8005AE54(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1308);
    sub_8005AD94(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1308, 0);
    TM3_DRAFT_U8(v17 + 139688) = 96;
    TM3_DRAFT_U8(v17 + 139689) = 96;
    TM3_DRAFT_U8(v17 + 139704) = 96;
    TM3_DRAFT_U8(v17 + 139705) = 96;
    TM3_DRAFT_U8(v17 + 139690) = -64;
    TM3_DRAFT_U8(v17 + 139696) = -64;
    TM3_DRAFT_U8(v17 + 139697) = -64;
    TM3_DRAFT_U8(v17 + 139706) = -64;
    TM3_DRAFT_U8(v17 + 139712) = -64;
    TM3_DRAFT_U8(v17 + 139713) = -64;
    TM3_DRAFT_U8(v17 + 139698) = -1;
    TM3_DRAFT_U8(v17 + 139714) = -1;
    v22 = TM3_DRAFT_U16(0x80089E00u) - 17;
    v23 = TM3_DRAFT_U16(0x80089E02u) - 53;
    v24 = TM3_DRAFT_U16(0x80089E00u) - 13;
    v25 = TM3_DRAFT_U16(0x80089E02u) - 28;
    TM3_DRAFT_U16(v17 + 139692) = TM3_DRAFT_U16(0x80089E00u) - 17;
    TM3_DRAFT_U16(v17 + 139694) = v23;
    TM3_DRAFT_U16(v17 + 139700) = v24;
    TM3_DRAFT_U16(v17 + 139702) = v23;
    TM3_DRAFT_U16(v17 + 139708) = v22;
    TM3_DRAFT_U16(v17 + 139710) = v25;
    TM3_DRAFT_U16(v17 + 139716) = v24;
    TM3_DRAFT_U16(v17 + 139718) = v25;
    sub_8005AE94(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1344);
    sub_8005ADC4(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1344, 1);
    sub_8005AD94(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1344, 1);
    v26 = (uint32)TM3_DRAFT_U32(0x80089CA0u);
    v27 = 0;
    TM3_DRAFT_U16(v17 + 139736) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 60) - TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 56) + 1;
    v28 = 14;
    TM3_DRAFT_U16(v17 + 139738) = (uint8)TM3_DRAFT_U8(v26 + 1u * (61)) - (uint8)TM3_DRAFT_U8(v26 + 1u * (57)) + 1;
    v29 = v17;
    TM3_DRAFT_U8(v17 + 139732) = TM3_DRAFT_U8(v26 + 1u * (56));
    v30 = 1408;
    TM3_DRAFT_U8(v17 + 139733) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 57);
    v31 = TM3_DRAFT_U32(0x80089CA0u);
    TM3_DRAFT_U16(v17 + 139734) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 58);
    sub_8005AEF4(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1364, 0, TM3_DRAFT_U32(0x800D2EF0u), TM3_DRAFT_U16(v31 + 62));
    v32 = TM3_DRAFT_U16(0x80089E02u);
    TM3_DRAFT_U16(v17 + 139728) = 10;
    TM3_DRAFT_U16(v17 + 139730) = v32 - 41;
    sub_8005AE54(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1372);
    sub_8005AD94(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1372, 0);
    TM3_DRAFT_U8(v17 + 139768) = 0x80;
    TM3_DRAFT_U8(v17 + 139769) = 0x80;
    TM3_DRAFT_U8(v17 + 139777) = 0x80;
    TM3_DRAFT_U8(v17 + 139752) = -1;
    TM3_DRAFT_U16(v17 + 139753) = 255;
    TM3_DRAFT_U8(v17 + 139760) = 0;
    TM3_DRAFT_U16(v17 + 139761) = 255;
    TM3_DRAFT_U8(v17 + 139770) = 0;
    TM3_DRAFT_U8(v17 + 139776) = 0;
    TM3_DRAFT_U8(v17 + 139778) = 0;
    v33 = TM3_DRAFT_U16(0x80089E02u);
    TM3_DRAFT_U16(v17 + 139764) = 61;
    TM3_DRAFT_U16(v17 + 139780) = 61;
    TM3_DRAFT_U16(v17 + 139756) = 13;
    TM3_DRAFT_U16(v17 + 139772) = 13;
    TM3_DRAFT_U16(v17 + 139758) = v33 - 21;
    TM3_DRAFT_U16(v17 + 139766) = v33 - 21;
    v33 -= 15;
    TM3_DRAFT_U16(v17 + 139774) = v33;
    TM3_DRAFT_U16(v17 + 139782) = v33;
    do
    {
      sub_8005AEB4(a1 + TM3_DRAFT_I32(original_local_address + 16u) + v30);
      v34 = (uint32)(v29 + 139784);
      TM3_DRAFT_U16(v29 + 139792) = v28;
      v28 += 6;
      v29 += 16;
      v30 += 16;
      ++v27;
      v35 = TM3_DRAFT_U16(0x80089E02u);
      TM3_DRAFT_U16(v34 + 2u * (6)) = 5;
      TM3_DRAFT_U16(v34 + 2u * (7)) = 5;
      TM3_DRAFT_U16(v34 + 2u * (5)) = v35 - 30;
    }
    while ( v27 < 2 );
    v36 = a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1440;
    sub_8005AE94(v36);
    sub_8005ADC4(v36, 1);
    sub_8005AD94(v36, 1);
    v37 = (uint32)TM3_DRAFT_U32(0x80089CA0u);
    TM3_DRAFT_U16(v17 + 139832) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 68) - TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 64) + 1;
    v38 = 0;
    TM3_DRAFT_U16(v17 + 139834) = (uint8)TM3_DRAFT_U8(v37 + 1u * (69)) - (uint8)TM3_DRAFT_U8(v37 + 1u * (65)) + 1;
    TM3_DRAFT_U8(v17 + 139828) = TM3_DRAFT_U8(v37 + 1u * (64));
    v39 = v17;
    TM3_DRAFT_U8(v17 + 139829) = TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CA0u) + 65);
    v40 = TM3_DRAFT_U32(0x80089CA0u);
    v41 = 1468;
    TM3_DRAFT_U16(v17 + 139830) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CA0u) + 66);
    sub_8005AEF4(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1460, 0, TM3_DRAFT_U32(0x800D2EF0u), TM3_DRAFT_U16(v40 + 70));
    TM3_DRAFT_U16(v17 + 139824) = 10;
    TM3_DRAFT_U16(v17 + 139826) = 12;
    sub_8005AE54(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1612);
    sub_8005AD94(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1612, 0);
    TM3_DRAFT_U8(v17 + 140008) = 0x80;
    TM3_DRAFT_U8(v17 + 140009) = 0x80;
    TM3_DRAFT_U8(v17 + 140017) = 0x80;
    TM3_DRAFT_U16(v17 + 139998) = 15;
    TM3_DRAFT_U16(v17 + 140006) = 15;
    TM3_DRAFT_U8(v17 + 139992) = -1;
    TM3_DRAFT_U16(v17 + 139993) = 255;
    TM3_DRAFT_U8(v17 + 140000) = 0;
    TM3_DRAFT_U16(v17 + 140001) = 255;
    TM3_DRAFT_U8(v17 + 140010) = 0;
    TM3_DRAFT_U8(v17 + 140016) = 0;
    TM3_DRAFT_U8(v17 + 140018) = 0;
    TM3_DRAFT_U16(v17 + 139996) = 14;
    TM3_DRAFT_U16(v17 + 140004) = 91;
    TM3_DRAFT_U16(v17 + 140012) = 14;
    TM3_DRAFT_U16(v17 + 140014) = 22;
    TM3_DRAFT_U16(v17 + 140020) = 91;
    TM3_DRAFT_U16(v17 + 140022) = 22;
    do
    {
      sub_8005AEB4(a1 + TM3_DRAFT_I32(original_local_address + 16u) + v41);
      v42 = v39 + 139844;
      v39 += 16;
      ++v38;
      TM3_DRAFT_U16(v42 + 12) = 2;
      TM3_DRAFT_U16(v42 + 14) = 2;
      v41 += 16;
    }
    while ( v38 < 9 );
    v43 = 0;
    v44 = v17;
    v45 = TM3_DRAFT_U8(v17 + 139979);
    v46 = 1648;
    TM3_DRAFT_U8(v17 + 139976) = -1;
    TM3_DRAFT_U8(v17 + 139977) = -1;
    TM3_DRAFT_U8(v17 + 139978) = -1;
    v47 = a1 + TM3_DRAFT_I32(original_local_address + 16u);
    TM3_DRAFT_U16(v17 + 139980) = 33;
    TM3_DRAFT_U16(v17 + 139984) = 2;
    TM3_DRAFT_U16(v17 + 139986) = 2;
    TM3_DRAFT_U16(v17 + 139982) = 48;
    TM3_DRAFT_U8(v17 + 139979) = v45 | 2;
    sub_8005AEB4(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1712);
    sub_8005AD94(a1 + TM3_DRAFT_I32(original_local_address + 16u) + 1712, 1);
    TM3_DRAFT_U16(v17 + 140096) = 102;
    TM3_DRAFT_U8(v17 + 140092) = 0;
    TM3_DRAFT_U8(v17 + 140093) = 0;
    TM3_DRAFT_U8(v17 + 140094) = 0;
    TM3_DRAFT_U16(v17 + 140098) = 14;
    do
    {
      sub_8005AEB4(v47 + v46);
      sub_8005AD94(v47 + v46, 1);
      v48 = (uint32)(v44 + 140024);
      v44 += 16;
      ++v43;
      TM3_DRAFT_U8(v48 + 1u * (4)) = -1;
      TM3_DRAFT_U8(v48 + 1u * (5)) = -1;
      TM3_DRAFT_U8(v48 + 1u * (6)) = -1;
      v46 += 16;
    }
    while ( v43 < 4 );
    TM3_DRAFT_I32(original_local_address + 16u) += 1728;
    TM3_DRAFT_U16(v17 + 140032) = 101;
    TM3_DRAFT_U16(v17 + 140034) = 12;
    TM3_DRAFT_U16(v17 + 140050) = 13;
    TM3_DRAFT_U16(v17 + 140038) = 2;
    TM3_DRAFT_U16(v17 + 140052) = 2;
    TM3_DRAFT_U16(v17 + 140064) = 101;
    TM3_DRAFT_U16(v17 + 140070) = 2;
    TM3_DRAFT_U16(v17 + 140080) = 100;
    TM3_DRAFT_U16(v17 + 140082) = 13;
    TM3_DRAFT_U16(v17 + 140084) = 2;
    v17 += 1728;
    result = v17 < a1 + 6912;
  }
  while ( v17 < a1 + 6912 );
  return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8002D624(uint32 a1, uint32 a2)
{
    uint32 original_local_words[24];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    FUNCTION_MARKER(0x8002D624u, "SCUS_942.49");
  int v3; 
  uint32 v4; 
  int v5; 
  uint32 v6; 
  int v7; 
  int v8; 
  sint16 v9; 
  sint16 v10; 
  sint16 v11; 
  sint16 v12; 
  uint32 v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  uint16 v20; 
  sint16 v21; 
  sint16 v22; 
  sint16 v23; 
  int v24; 
  int v25; 
  int v26; 
  sint32 v27; 
  uint32 v28; 
  char v29; 
  char v30; 
  char v31; 
  int v32; 
  int v33; 
  uint32 v34; 
  sint16 v35; 
  sint16 v36; 
  int v37; 
  int v38; 
  sint16 v39; 
  uint32 v40; 
  int v41; 
  uint32 vector_44[2];
  uint32 vector_47[2];

  v3 = TM3_DRAFT_U32(a2);
  v4 = TM3_DRAFT_U32(a2 + 4u * (1));
  v5 = TM3_DRAFT_U32(a2 + 4u * (2));
  v6 = (uint32)TM3_DRAFT_U32(a2 + 4u * (4));
  v7 = TM3_DRAFT_U32(a2 + 4u * (5));
  v8 = TM3_DRAFT_U32(a2 + 4u * (6));
  TM3_DRAFT_U32(a1 + 164) = TM3_DRAFT_U32(a2 + 4u * (3));
  TM3_DRAFT_U8(a1 + 327) = v3;
  TM3_DRAFT_U32(a1 + 160) = v5;
  TM3_DRAFT_U8(a1 + 326) = v4;
  TM3_DRAFT_U32(a1 + 156) = (0x8007E270u + 4u * (7 * v4));
  v9 = TM3_DRAFT_U16(v7 + 10);
  v10 = TM3_DRAFT_U16(v7 + 16);
  LOWORD(vector_47[0]) = TM3_DRAFT_U16(v7 + 4);
  LOWORD(vector_47[1]) = v10;
  HIWORD(vector_47[0]) = v9;
  v11 = TM3_DRAFT_U16(2 * v4 - 2146915576);
  v12 = TM3_DRAFT_U16(2 * v4 - 2146915528);
  v13 = (uint32)v5;
  (*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4])))[0] = TM3_DRAFT_U16(2 * v4 - 2146915624);
  (*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4])))[1] = v11;
  (*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4])))[2] = v12;
  sub_8005BB84((uint32)v7, TM3_DRAFT_LOCAL_ADDRESS((*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4]))), sizeof((*(sint16 (*)[4])psx_addr(original_local_address + 32u, sizeof(sint16[4]))))) /* TODO: Local buffer adapter */, TM3_DRAFT_LOCAL_ADDRESS(&vector_44[0], sizeof(vector_44)) /* TODO: Local buffer adapter */);
  (*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4])))[0] = (sint16)vector_47[0] + (sint16)vector_44[0];
  (*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4])))[1] = SHIWORD(vector_47[0]) + SHIWORD(vector_44[0]);
  (*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4])))[2] = (sint16)vector_47[1] + (sint16)vector_44[1];
  sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))), sizeof((*(int (*)[4])psx_addr(original_local_address + 48u, sizeof(int[4]))))), TM3_DRAFT_LOCAL_ADDRESS(&vector_47[0], sizeof(vector_47)));
  TM3_DRAFT_U16(a1 + 120) = vector_47[0];
  TM3_DRAFT_U16(a1 + 126) = HIWORD(vector_47[0]);
  TM3_DRAFT_U16(a1 + 132) = vector_47[1];
  v14 = a1 + 116;
  if ( (uint16)vector_47[0] && (uint16)vector_47[1] )
  {
    TM3_DRAFT_U16(a1 + 116) = vector_47[1];
    TM3_DRAFT_U16(a1 + 122) = 0;
    TM3_DRAFT_U16(a1 + 128) = -(sint16)vector_47[0];
    v14 = a1 + 116;
  }
  sub_800150FC(v14, 2, 0);
  TM3_DRAFT_U32(a1 + 148) = 0;
  TM3_DRAFT_U16(a1 + 104) = TM3_DRAFT_U16(2 * v4 - 2146915968);
  v15 = 4 * v4;
  TM3_DRAFT_U16(a1 + 108) = TM3_DRAFT_U16(2 * v4 - 2146915920);
  v16 = TM3_DRAFT_U32(4 * v4 - 2146915344);
  TM3_DRAFT_U8(a1 + 328) = 0;
  TM3_DRAFT_U32(a1 + 152) = ((uint32)v16 * 30u + 2048u) >> 12;
  if ( sub_80048078(10) )
    v17 = 2 * TM3_DRAFT_U32(v15 - 2146915248);
  else
    v17 = TM3_DRAFT_U16(v15 - 2146915248);
  TM3_DRAFT_U16(a1 + 112) = v17;
  if ( sub_80048078(15) )
    v18 = 2 * TM3_DRAFT_U32(4 * v4 - 2146916696);
  else
    v18 = TM3_DRAFT_U16(4 * v4 - 2146916696);
  TM3_DRAFT_U16(a1 + 114) = v18;
  v19 = 2 * v4;
  TM3_DRAFT_U8(a1 + 334) = TM3_DRAFT_U8(2 * v4 - 2146915736);
  TM3_DRAFT_U16(a1 + 322) = TM3_DRAFT_U16(2 * v4 - 2146915456);
  if ( !v8 )
  {
    LOWORD(vector_44[0]) = -(sint16)vector_47[0];
    LOWORD(vector_44[1]) = -(sint16)vector_47[1];
    HIWORD(vector_44[0]) = -HIWORD(vector_47[0]);
    sub_80013F78(TM3_DRAFT_LOCAL_ADDRESS((*(uint32 (*)[4])psx_addr(original_local_address + 80u, sizeof(uint32[4]))), sizeof((*(uint32 (*)[4])psx_addr(original_local_address + 80u, sizeof(uint32[4]))))) /* TODO: Local buffer adapter */, TM3_DRAFT_U32(4 * v4 - 2146916064), (uint32)TM3_DRAFT_LOCAL_ADDRESS(&vector_44[0], sizeof(vector_44)) /* TODO: Local buffer adapter */);
    sub_80033D4C((int)v13, TM3_DRAFT_LOCAL_ADDRESS((*(uint32 (*)[4])psx_addr(original_local_address + 80u, sizeof(uint32[4]))), sizeof((*(uint32 (*)[4])psx_addr(original_local_address + 80u, sizeof(uint32[4]))))));
  }
  vector_44[0] = vector_47[0];
  LOWORD(vector_44[1]) = vector_47[1];
  TM3_DRAFT_I32(original_local_address + 64u) = ((sint32)(TM3_DRAFT_U32(v13 + 4u * (602)) + TM3_DRAFT_U32(v13 + 4u * (574)))) / 2;
  TM3_DRAFT_I32(original_local_address + 68u) = ((sint32)(TM3_DRAFT_U32(v13 + 4u * (603)) + TM3_DRAFT_U32(v13 + 4u * (575)))) / 2;
  TM3_DRAFT_I32(original_local_address + 72u) = ((sint32)(TM3_DRAFT_U32(v13 + 4u * (604)) + TM3_DRAFT_U32(v13 + 4u * (576)))) / 2;
  v20 = TM3_DRAFT_U16(a1 + 112) + ((sint32)(sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 64u), 12u) /* TODO: Local buffer adapter */, (uint32)TM3_DRAFT_LOCAL_ADDRESS(&vector_44[0], sizeof(vector_44)) /* TODO: Local buffer adapter */) + 2048u) >> 12);
  TM3_DRAFT_U16(a1 + 112) = v20;
  sub_80013FB4((int)TM3_DRAFT_LOCAL_ADDRESS(&TM3_DRAFT_I32(original_local_address + 64u), 12u) /* TODO: Local buffer adapter */, v20, (uint32)TM3_DRAFT_LOCAL_ADDRESS(&vector_44[0], sizeof(vector_44)) /* TODO: Local buffer adapter */);
  v21 = TM3_DRAFT_I32(original_local_address + 68u);
  v22 = TM3_DRAFT_I32(original_local_address + 72u);
  TM3_DRAFT_U16(a1 + 16) = TM3_DRAFT_I32(original_local_address + 64u);
  TM3_DRAFT_U16(a1 + 18) = v21;
  TM3_DRAFT_U16(a1 + 20) = v22;
  sub_80026F64(a1, TM3_DRAFT_U32(a1 + 160u), v6,
    TM3_DRAFT_LOCAL_ADDRESS(vector_47, sizeof(vector_47)),
    TM3_DRAFT_U16(a1 + 112u));
  if ( sub_80048078(14) )
    v23 = 2 * TM3_DRAFT_U16(v19 - 2146916512);
  else
    v23 = TM3_DRAFT_U16(v19 - 2146916512);
  TM3_DRAFT_U16(a1 + 106) = v23;
  v24 = TM3_DRAFT_I16(a1 + 8);
  v25 = TM3_DRAFT_I16(a1 + 10);
  v26 = TM3_DRAFT_I16(a1 + 12);
  v27 = TM3_DRAFT_U8(a1 + 327) < 0xFu;
  TM3_DRAFT_U32(a1 - 24) = TM3_DRAFT_U16(a1 + 106);
  TM3_DRAFT_U32(a1 + 136) = v24;
  TM3_DRAFT_U32(a1 + 140) = v25;
  TM3_DRAFT_U32(a1 + 144) = v26;
  if ( v27 )
    v28 = TM3_DRAFT_U32(0x8007E130u + 4u * (5 * TM3_DRAFT_U8(a1 + 327) + 1));
  else
    v28 = 0x800896f4u;
  TM3_DRAFT_U32(a1 + 44) = v28;
  v29 = TM3_DRAFT_U8(v4 - 2146916536);
  TM3_DRAFT_U8(a1 + 321) = v29;
  if ( v29 == 1 )
  {
    if ( TM3_DRAFT_U16(2 * v4 - 2146916112)
      && (TM3_DRAFT_U8(v4 - 2146915480) || TM3_DRAFT_U8(v4 - 2146916416) || TM3_DRAFT_U8(v4 - 2146915152)) )
    {
      TM3_DRAFT_U8(a1 + 316) = TM3_DRAFT_U8(2 * v4 - 2146916112);
      TM3_DRAFT_U8(a1 + 317) = TM3_DRAFT_U8(2 * v4 - 2146916464);
      TM3_DRAFT_U16(a1 + 266) = TM3_DRAFT_U16(2 * v4 - 2146916320);
      v30 = (TM3_DRAFT_U8(a1 + 316u) ? TM3_DRAFT_U8(v4 - 2146916416) / TM3_DRAFT_U8(a1 + 316u) : 0xFFFFFFFFu);
      v31 = (TM3_DRAFT_U8(a1 + 316u) ? TM3_DRAFT_U8(v4 - 2146915152) / TM3_DRAFT_U8(a1 + 316u) : 0xFFFFFFFFu);
      v32 = TM3_DRAFT_U8(a1 + 316);
      v33 = 0;
      TM3_DRAFT_U8(a1 + 318) = (TM3_DRAFT_U8(a1 + 316u) ? TM3_DRAFT_U8(v4 - 2146915480) / TM3_DRAFT_U8(a1 + 316u) : 0xFFFFFFFFu);
      TM3_DRAFT_U8(a1 + 319) = v30;
      TM3_DRAFT_U8(a1 + 320) = v31;
      if ( v32 )
      {
        v34 = (uint32)a1;
        do
        {
          TM3_DRAFT_U16(v34 + 2u * (84)) = TM3_DRAFT_U16(v6);
          TM3_DRAFT_U16(v34 + 2u * (85)) = TM3_DRAFT_U16(v6 + 2u * (1));
          TM3_DRAFT_U16(v34 + 2u * (86)) = TM3_DRAFT_U16(v6 + 2u * (2));
          TM3_DRAFT_U16(v34 + 2u * (109)) = TM3_DRAFT_U16(v6);
          TM3_DRAFT_U16(v34 + 2u * (110)) = TM3_DRAFT_U16(v6 + 2u * (1));
          TM3_DRAFT_U16(v34 + 2u * (111)) = TM3_DRAFT_U16(v6 + 2u * (2));
          TM3_DRAFT_U16(v34 + 2u * (134)) = TM3_DRAFT_U16(v6);
          TM3_DRAFT_U16(v34 + 2u * (135)) = TM3_DRAFT_U16(v6 + 2u * (1));
          ++v33;
          TM3_DRAFT_U16(v34 + 2u * (136)) = TM3_DRAFT_U16(v6 + 2u * (2));
          v34 += 2u * (3);
        }
        while ( v33 < TM3_DRAFT_U8(a1 + 316) );
      }
      TM3_DRAFT_U16(a1 + 216) = TM3_DRAFT_U8(a1 + 316) - 1;
    }
    else
    {
      TM3_DRAFT_U8(a1 + 321) = 0;
    }
  }
  else
  {
    TM3_DRAFT_U8(a1 + 316) = TM3_DRAFT_U8(2 * v4 - 2146916112);
    TM3_DRAFT_U8(a1 + 317) = TM3_DRAFT_U8(2 * v4 - 2146916464);
    TM3_DRAFT_U16(a1 + 266) = TM3_DRAFT_U16(2 * v4 - 2146916320);
  }
  v35 = TM3_DRAFT_U16(v6 + 2u * (1));
  v36 = TM3_DRAFT_U16(v6 + 2u * (2));
  TM3_DRAFT_U16(a1 - 20) = TM3_DRAFT_U16(v6);
  v37 = a1 - 20;
  TM3_DRAFT_U16(v37 + 2) = v35;
  TM3_DRAFT_U16(v37 + 4) = v36;
  v37 = TM3_DRAFT_U16(TM3_DRAFT_U32(a1 + 156));
  TM3_DRAFT_U16(a1 + 330) = v37;
  if ( (v37 & 0x8000) == 0 )
  {
    v38 = TM3_DRAFT_I16(a1 + 330);
    v39 = TM3_DRAFT_U16(TM3_DRAFT_U32(a1 + 156) + 2);
    TM3_DRAFT_U16(a1 + 332) = v39;
    sub_8004A294(22, v38, 13, a1, v39, TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 156) + 4));
  }
  v40 = (uint32)(2 * v4 - 2146916512);
  TM3_DRAFT_U8(a1 + 336) = TM3_DRAFT_U8(v40);
  TM3_DRAFT_U8(a1 + 337) = TM3_DRAFT_U8(v40);
  v41 = TM3_DRAFT_U32(0x80089CF0u);
  TM3_DRAFT_U16(a1 + 110) = 0;
  TM3_DRAFT_U8(a1 + 329) = 0;
  TM3_DRAFT_U32(a1 + 340) = v41 + 312;
  TM3_DRAFT_U8(a1 + 335) = TM3_DRAFT_U8(v4 - 2146916344) && TM3_DRAFT_U8(v4 - 2146915872) && TM3_DRAFT_U16(2 * v4 - 2146915848);
  return 1;
}


/* Unverified draft; TODO items require later review */
uint32 sub_80024648(uint32 groups, uint32 ordering_entry, uint32 cursor, uint32 end, uint32 model, uint32 selection)
{
    uint32 entry = model + 4u * selection;
    uint32 resource = TM3_DRAFT_U32(entry);
    uint32 packet = TM3_DRAFT_U32(cursor);
    uint32 result = packet + 76u * TM3_DRAFT_U32(resource + 4u) + 8u < end;
    uint32 nodes, polygons, vertices, frame, color, glow, last_matrix = 0u;
    uint32 group_count, group, node, shape, matrix, callback, i, source, scratch;
    uint32 primitive, raw_code, code, point[4], overlay, original, tag;
    sint32 kind, brightness, count, polygon_count, clip;
    FUNCTION_MARKER(0x80024648u, "SCUS_942.49");
    if (!result)
        return result;
    brightness = TM3_DRAFT_I32(model + 56u);
    nodes = resource + 36u;
    color = ((uint32)brightness << 16) | ((uint32)brightness << 8) | (uint32)brightness;
    glow = (uint32)((sint32)(((uint32)brightness - 127u) & (uint32)((sint32)((uint32)brightness - 127u) >> 31)) + 127) * 2u;
    polygons = TM3_DRAFT_U32(entry + 12u);
    vertices = TM3_DRAFT_U32(entry + 24u);
    if (TM3_DRAFT_U32(model + 64u))
        color |= 0x02000000u;
    frame = TM3_DRAFT_U32(model + 52u);
    group_count = TM3_DRAFT_U8(groups);
    for (group = 0; group < group_count; ++group)
    {
        node = nodes + 24u * TM3_DRAFT_U8(groups + 1u + group);
        shape = node + 8u * frame;
        kind = TM3_DRAFT_I8(node + 23u);
        matrix = 0x1F800080u;
        if (kind >= 0)
        {
            if (kind <= 3)
            {
                uint32 part = model + (kind == 0 ? 68u : kind == 1 ? 148u : kind == 2 ? 308u : 228u);
                matrix = kind == 0 ? 0x1F800040u : kind == 1 ? 0x1F800000u : kind == 2 ? 0x1F800060u : 0x1F800020u;
                TM3_DRAFT_U32(matrix + 20u) = (uint32)(sint32)TM3_DRAFT_I16(node + 16u);
                TM3_DRAFT_U32(matrix + 24u) = (uint32)(TM3_DRAFT_I16(node + 18u) + TM3_DRAFT_I8(part + 19u));
                TM3_DRAFT_U32(matrix + 28u) = (uint32)(sint32)TM3_DRAFT_I16(node + 20u);
                if (kind == 0)
                    sub_8001441C((uint32)(sint32)TM3_DRAFT_I16(part + 44u), (uint32)(sint32)TM3_DRAFT_I16(part + 46u), matrix);
                else if (kind == 1)
                    sub_8001441C(0u - (uint32)(sint32)TM3_DRAFT_I16(part + 44u), (uint32)(TM3_DRAFT_I16(part + 46u) + 2048), matrix);
                else if (kind == 2)
                    sub_800142E4((uint32)(sint32)TM3_DRAFT_I16(part + 44u), matrix);
                else
                    sub_8001441C(0u - (uint32)(sint32)TM3_DRAFT_I16(part + 44u), 2048u, matrix);
                sub_8005B614(0x1F800080u, matrix, matrix);
            }
            else
            {
                callback = TM3_DRAFT_U32(model + 48u);
                if (callback)
                {
                    matrix = tm3_draft_indirect(callback, 3u, model, (uint32)kind, node);
                    if (!matrix)
                        continue;
                }
            }
        }
        if (matrix != last_matrix)
        {
            for (i = 0; i < 8u; ++i)
                xport_gte_write_control(i, TM3_DRAFT_U32(matrix + 4u * i));
            last_matrix = matrix;
        }
        count = TM3_DRAFT_I16(shape + 6u);
        source = vertices + 8u * (uint32)(sint32)TM3_DRAFT_I16(shape + 4u);
        scratch = 0x1F8000E0u;
        while (count > 0)
        {
            for (i = 0; i < 6u; ++i)
                xport_gte_write_data(i, TM3_DRAFT_U32(source + 4u * i));
            xport_gte_execute(0x280030u);
            count -= 3;
            source += 24u;
            TM3_DRAFT_U32(scratch) = xport_gte_read_data(12u);
            TM3_DRAFT_U32(scratch + 4u) = xport_gte_read_data(13u);
            TM3_DRAFT_U32(scratch + 8u) = xport_gte_read_data(14u);
            scratch += 12u;
        }
        polygon_count = TM3_DRAFT_I16(shape + 2u);
        primitive = polygons + 20u * (uint32)(sint32)TM3_DRAFT_I16(shape);
        while (polygon_count-- > 0)
        {
            raw_code = TM3_DRAFT_U8(primitive + 3u);
            code = raw_code & 0x7Fu;
            if (code != 36u && code != 44u)
            {
                primitive += 20u;
                continue;
            }
            if (!(raw_code & 0x80u))
            {
                for (i = 0; i < 3u; ++i)
                    xport_gte_write_data(12u + i, TM3_DRAFT_U32(0x1F8000E0u + 4u * TM3_DRAFT_U8(primitive + 16u + i)));
                xport_gte_execute(0x1400006u);
                clip = (sint32)xport_gte_read_data(24u);
                if (clip <= 0)
                {
                    if (code == 36u)
                    {
                        primitive += 20u;
                        continue;
                    }
                    xport_gte_write_data(12u, TM3_DRAFT_U32(0x1F8000E0u + 4u * TM3_DRAFT_U8(primitive + 19u)));
                    xport_gte_execute(0x1400006u);
                    if ((sint32)xport_gte_read_data(24u) > 0)
                    {
                        primitive += 20u;
                        continue;
                    }
                }
            }
            original = packet;
            for (i = 0; i < (code == 36u ? 3u : 4u); ++i)
            {
                point[i] = TM3_DRAFT_U32(0x1F8000E0u + 4u * TM3_DRAFT_U8(primitive + 16u + i));
                TM3_DRAFT_U32(packet + 8u + 8u * i) = point[i];
            }
            TM3_DRAFT_U32(packet + 4u) = color | (code << 24);
            TM3_DRAFT_U32(packet + 12u) = TM3_DRAFT_U32(primitive + 4u);
            TM3_DRAFT_U32(packet + 20u) = TM3_DRAFT_U32(primitive + 8u);
            TM3_DRAFT_U16(packet + 28u) = TM3_DRAFT_U16(primitive + 12u);
            if (code == 44u)
                TM3_DRAFT_U16(packet + 36u) = TM3_DRAFT_U16(primitive + 14u);
            overlay = packet + (code == 36u ? 32u : 40u);
            TM3_DRAFT_U8(overlay + 3u) = code == 36u ? 6u : 8u;
            TM3_DRAFT_U8(overlay + 7u) = code == 36u ? 50u : 58u;
            for (i = 0; i < (code == 36u ? 3u : 4u); ++i)
                TM3_DRAFT_U32(overlay + 8u + 8u * i) = point[i];
            if (code == 36u)
            {
                TM3_DRAFT_U8(overlay + 4u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 5u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 6u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 12u) = 0u;
                TM3_DRAFT_U8(overlay + 13u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 14u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 20u) = 0u;
                TM3_DRAFT_U8(overlay + 21u) = 0u;
                TM3_DRAFT_U8(overlay + 22u) = (uint8)glow;
            }
            else
            {
                TM3_DRAFT_U8(overlay + 4u) = 0u;
                TM3_DRAFT_U8(overlay + 5u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 6u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 12u) = 0u;
                TM3_DRAFT_U8(overlay + 13u) = 0u;
                TM3_DRAFT_U8(overlay + 14u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 20u) = 0u;
                TM3_DRAFT_U8(overlay + 21u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 22u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 28u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 29u) = (uint8)glow;
                TM3_DRAFT_U8(overlay + 30u) = (uint8)glow;
            }
            tag = (TM3_DRAFT_U32(overlay) & 0xFF000000u) | (TM3_DRAFT_U32(ordering_entry) & 0x00FFFFFFu);
            TM3_DRAFT_U32(overlay) = tag;
            tag = (TM3_DRAFT_U32(ordering_entry) & 0xFF000000u) | (overlay & 0x00FFFFFFu);
            TM3_DRAFT_U32(ordering_entry) = tag;
            TM3_DRAFT_U32(original) = (tag & 0x00FFFFFFu) | (code == 36u ? 0x07000000u : 0x09000000u);
            TM3_DRAFT_U32(ordering_entry) = original & 0x00FFFFFFu;
            packet = overlay + (code == 36u ? 28u : 36u);
            primitive += 20u;
        }
    }
    TM3_DRAFT_U8(packet + 3u) = 1u;
    result = TM3_DRAFT_U32(0x800D2EF0u);
    TM3_DRAFT_U32(packet + 4u) = result ? 0xE1000220u : 0xE1000020u;
    TM3_DRAFT_U32(cursor) = packet + 8u;
    return result;
}


/* Unverified draft; TODO items require later review */
uint32 sub_8001978C(uint32 a1, uint32 a2)
{
    FUNCTION_MARKER(0x8001978Cu, "SCUS_942.49");
  char v3; 
  uint32 v4; 
  uint32 v5; 
  int v6; 
  sint16 v7; 
  int v8; 
  int v9; 
  int i; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  char v25; 
  int v26; 
  int v27; 
  int v28; 
  sint16 v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  sint32 v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  sint32 v42; 
  int v43; 
  int v44; 
  int v45; 
  uint32 v46; 
  int result; 

  v3 = a2;
  if ( a2 == 1 )
  {
    v4 = 0x80018D60u;
LABEL_9:
    TM3_DRAFT_U32(a1 + 3316) = v4;
    goto LABEL_10;
  }
  if ( !a2 || a2 == 2 )
  {
    if ( TM3_DRAFT_U32(0x800896A0u) )
      v4 = 0x8001A40Cu;
    else
      v4 = 0x8001A3F8u;
    goto LABEL_9;
  }
LABEL_10:
  TM3_DRAFT_U32(a1 + 3440) = sub_8004A000(4 * TM3_DRAFT_U32(0x800D2E98u));
  v5 = sub_8004A000(16 * TM3_DRAFT_U32(0x800D2E98u));
  v6 = TM3_DRAFT_U32(a1 + 3920);
  TM3_DRAFT_U32(a1 + 3696) = v5;
  TM3_DRAFT_U8(a1 + 3328) = v3;
  LOWORD(v5) = v6 % 4;
  LOWORD(v6) = TM3_DRAFT_U16(a1 + 1556);
  v7 = TM3_DRAFT_U16(a1 + 1564);
  TM3_DRAFT_U16(a1 + 3334) = (uint16)v5;
  TM3_DRAFT_U16(a1 + 3336) = (uint16)v5;
  TM3_DRAFT_U16(a1 + 3340) = 40;
  TM3_DRAFT_U16(a1 + 3342) = 0;
  TM3_DRAFT_U16(a1 + 3352) = 0;
  TM3_DRAFT_U16(a1 + 3354) = 0;
  TM3_DRAFT_U16(a1 + 3392) = 0;
  TM3_DRAFT_U16(a1 + 3706) = 1000;
  TM3_DRAFT_U16(a1 + 3710) = 1000;
  TM3_DRAFT_U16(a1 + 3348) = v6;
  TM3_DRAFT_U16(a1 + 3350) = v7;
  v8 = sub_80015F2C(0);
  TM3_DRAFT_U32(a1 + 3396) = v8;
  v9 = TM3_DRAFT_U32(v8 + 36);
  TM3_DRAFT_U16(a1 + 3390) = 0;
  TM3_DRAFT_U16(a1 + 3386) = -1;
  TM3_DRAFT_U16(a1 + 3388) = -1;
  TM3_DRAFT_U16(a1 + 3412) = 0;
  TM3_DRAFT_U16(a1 + 3414) = -1;
  TM3_DRAFT_U16(a1 + 3418) = -1;
  TM3_DRAFT_U8(a1 + 3404) = 0;
  TM3_DRAFT_U8(a1 + 3405) = 0;
  TM3_DRAFT_U16(a1 + 3406) = -1;
  TM3_DRAFT_U32(a1 + 3400) = v9;
  for ( i = 0; i < TM3_DRAFT_U32(0x800D2E98u); ++i )
    TM3_DRAFT_U32(4 * i + TM3_DRAFT_U32(a1 + 3440)) = 0;
  v11 = 0;
  v12 = 0;
  v13 = a1;
  TM3_DRAFT_U32(a1 + 3684) = 0;
  TM3_DRAFT_U32(a1 + 3688) = 0;
  TM3_DRAFT_U32(a1 + 3692) = 0;
  TM3_DRAFT_U8(a1 + 3700) = 0;
  do
  {
    v14 = TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 4040) + v12 + 140) * TM3_DRAFT_U32(TM3_DRAFT_U32(0x80089CBCu) + v12 + 24);
    v15 = 0;
    v16 = 0;
    v11 += v14 / 100;
    TM3_DRAFT_U32(v13 + 3444) = v14 / 100;
    v17 = v12;
    do
    {
      ++v16;
      v18 = (uint64)(1374389535LL
                             * TM3_DRAFT_U8(TM3_DRAFT_U32(a1 + 4040) + v17 + 144)
                             * TM3_DRAFT_U8(TM3_DRAFT_U32(0x80089CBCu) + v17 + 28)) >> 32;
      TM3_DRAFT_U8(a1 + v17 + 3448) = v18 >> 5;
      v15 += (uint8)(v18 >> 5);
      v17 = v16 + v12;
    }
    while ( v16 < 16 );
    v19 = 0;
    v20 = v12;
    do
    {
      ++v19;
      TM3_DRAFT_U8(a1 + v20 + 3448) = 100 * TM3_DRAFT_U8(a1 + v20 + 3448) / v15;
      v20 = v19 + v12;
    }
    while ( v19 < 16 );
    v13 += 20;
    v12 += 20;
  }
  while ( v13 < a1 + 240 );
  v21 = 0;
  v22 = a1;
  do
  {
    ++v21;
    TM3_DRAFT_U32(v22 + 3444) = 100 * TM3_DRAFT_U32(v22 + 3444) / v11;
    v22 += 20;
  }
  while ( v21 < 12 );
  v23 = TM3_DRAFT_U32(a1 + 4096);
  v24 = TM3_DRAFT_U32(a1 + 4092) << 12;
  TM3_DRAFT_U8(a1 + 3329) = 1;
  TM3_DRAFT_U32(a1 + 3324) = 0;
  TM3_DRAFT_U32(a1 + 3320) = 0x8001D888u;
  TM3_DRAFT_U16(a1 + 3344) = v24 / v23;
  v25 = TM3_DRAFT_U32(0x800D2F10u);
  if ( TM3_DRAFT_U32(0x800D2F10u) )
  {
    if ( TM3_DRAFT_U32(0x800D2F10u) == 1 )
    {
      if ( TM3_DRAFT_U32(0x800D2F2Cu) )
      {
        TM3_DRAFT_U16(a1 + 3916) = 819;
        TM3_DRAFT_U8(a1 + 3701) = v25;
      }
      else
      {
        v30 = TM3_DRAFT_U32(0x80089CBCu);
        TM3_DRAFT_U16(a1 + 3916) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CBCu) + 292);
        TM3_DRAFT_U8(a1 + 3701) = TM3_DRAFT_U8(v30 + 286);
      }
      v31 = TM3_DRAFT_U32(0x80089CBCu);
      v32 = TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 114) * TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 264) / 4096;
      TM3_DRAFT_U16(a1 + 3408) = v32;
      v33 = TM3_DRAFT_I16(v31 + 266);
      TM3_DRAFT_U16(a1 + 3416) = 15;
      TM3_DRAFT_U16(a1 + 3420) = 225;
      TM3_DRAFT_U16(a1 + 3410) = (v32 << 16 >> 4) / v33;
      v34 = sub_80039FD4();
      v35 = TM3_DRAFT_I16(a1 + 3420);
      TM3_DRAFT_U16(a1 + 3424) = 675;
      TM3_DRAFT_U16(a1 + 3422) = v34 % v35;
      v36 = (int)sub_80039FD4() % TM3_DRAFT_I16(a1 + 3424);
      v37 = TM3_DRAFT_U32(0x80089CBCu);
      TM3_DRAFT_U16(a1 + 3426) = v36 + 225;
      v29 = TM3_DRAFT_U16(v37 + 280);
    }
    else
    {
      if ( TM3_DRAFT_U32(0x800D2F2Cu) )
      {
        TM3_DRAFT_U16(a1 + 3916) = 1229;
        TM3_DRAFT_U8(a1 + 3701) = 2;
      }
      else
      {
        v38 = TM3_DRAFT_U32(0x80089CBCu);
        TM3_DRAFT_U16(a1 + 3916) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CBCu) + 294);
        TM3_DRAFT_U8(a1 + 3701) = TM3_DRAFT_U8(v38 + 288);
      }
      v39 = TM3_DRAFT_U32(0x80089CBCu);
      v40 = TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 116) * TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 264) / 4096;
      TM3_DRAFT_U16(a1 + 3408) = v40;
      v41 = TM3_DRAFT_I16(v39 + 266);
      TM3_DRAFT_U16(a1 + 3416) = 4;
      TM3_DRAFT_U16(a1 + 3420) = 150;
      TM3_DRAFT_U16(a1 + 3410) = (v40 << 16 >> 4) / v41;
      v42 = sub_80039FD4();
      v43 = TM3_DRAFT_I16(a1 + 3420);
      TM3_DRAFT_U16(a1 + 3424) = 337;
      TM3_DRAFT_U16(a1 + 3422) = v42 % v43;
      v44 = (int)sub_80039FD4() % TM3_DRAFT_I16(a1 + 3424);
      v45 = TM3_DRAFT_U32(0x80089CBCu);
      TM3_DRAFT_U16(a1 + 3426) = v44 + 225;
      v29 = TM3_DRAFT_U16(v45 + 282);
    }
  }
  else
  {
    if ( TM3_DRAFT_U32(0x800D2F2Cu) )
    {
      TM3_DRAFT_U16(a1 + 3916) = 0;
      TM3_DRAFT_U8(a1 + 3701) = 1;
    }
    else
    {
      v26 = TM3_DRAFT_U32(0x80089CBCu);
      TM3_DRAFT_U16(a1 + 3916) = TM3_DRAFT_U16(TM3_DRAFT_U32(0x80089CBCu) + 290);
      TM3_DRAFT_U8(a1 + 3701) = TM3_DRAFT_U8(v26 + 284);
    }
    v27 = TM3_DRAFT_U32(0x80089CBCu);
    v28 = TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 112) * TM3_DRAFT_I16(TM3_DRAFT_U32(0x80089CBCu) + 264) / 4096;
    TM3_DRAFT_U16(a1 + 3408) = v28;
    LOWORD(v28) = (v28 << 16 >> 4) / TM3_DRAFT_I16(v27 + 266);
    TM3_DRAFT_U16(a1 + 3416) = 22;
    TM3_DRAFT_U16(a1 + 3420) = -1;
    TM3_DRAFT_U16(a1 + 3424) = -1;
    TM3_DRAFT_U16(a1 + 3410) = v28;
    v29 = TM3_DRAFT_U16(v27 + 278);
  }
  TM3_DRAFT_U16(a1 + 3428) = v29;
  TM3_DRAFT_U16(a1 + 3430) = TM3_DRAFT_U16(a1 + 3428) + (int)sub_80039FD4() % 300 / 4;
  v46 = sub_80048078(11) == 0;
  result = 8;
  if ( !v46 )
    TM3_DRAFT_U8(a1 + 3701) = 8;
  return result;
}



