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
uint32 sub_80024648(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, ...)
{
    uint32 original_local_words[10];
    uint32 original_local_address = TM3_DRAFT_LOCAL_ADDRESS(original_local_words, sizeof(original_local_words));

    uint32 cpu_a0;
    uint32 cpu_a1;
    uint32 cpu_a2;
    uint32 cpu_v0;
    uint32 cpu_v1;
    FUNCTION_MARKER(0x80024648u, "SCUS_942.49");
  uint32 v15; 
  int v16; 
  uint32 v17; 
  int result; 
  int v20; 
  int v21; 
  int v22; 
  char v23; 
  uint32 v24; 
  int v25; 
  uint32 v26; 
  int v27; 
  uint32 v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 

  uint32 v40; /* Guest callback address */ 
  int v41; 
  int v50; 
  int v52; 
  int v53; 
  uint32 v54; 
  int v55; 
  uint32 v56; 
  uint32 v61; 
  uint32 v62; 
  uint32 v63; 
  uint32 v64; 
  uint32 v65; 
  uint32 v66; 
  sint16 v67; 
  uint32 v68; 
  int v69; 
  uint32 v70; 
  uint32 v71; 
  uint32 v78; 
  uint32 v79; 
  uint32 v80; 
  uint32 v81; 
  uint32 v82; 
  int v83; 
  uint32 v84; 
  uint32 v85; 
  sint16 v86; 
  sint16 v87; 
  uint32 v88; 
  int v89; 
  uint32 v90; 
  int v91; 

  v15 = (uint32)(a5 + 4 * a6);
  v16 = TM3_DRAFT_U32(TM3_DRAFT_U32(v15) + 4);
  v17 = (uint32)TM3_DRAFT_U32(a3);
  result = TM3_DRAFT_U32(a3) + 76 * v16 + 8 < a4;
  if ( TM3_DRAFT_U32(a3) + 76 * v16 + 8 < a4 )
  {
    v20 = TM3_DRAFT_U32(a5 + 56);
    TM3_DRAFT_I32(original_local_address + 16u) = TM3_DRAFT_U32(v15) + 36;
    TM3_DRAFT_I32(original_local_address + 28u) = ((uint32)v20 << 16) | ((uint32)v20 << 8) | (uint32)v20;
    v21 = (sint32)(((uint32)v20 - 127u) & (uint32)((sint32)((uint32)v20 - 127u) >> 31)) + 127;
    TM3_DRAFT_I32(original_local_address + 20u) = TM3_DRAFT_U32(v15 + 4u * (3));
    TM3_DRAFT_I32(original_local_address + 24u) = TM3_DRAFT_U32(v15 + 4u * (6));
    if ( TM3_DRAFT_U32(a5 + 64) )
      TM3_DRAFT_I32(original_local_address + 28u) |= 0x2000000u;
    TM3_DRAFT_I32(original_local_address + 32u) = 0;
    v22 = (uint8)TM3_DRAFT_U8(a1);
    TM3_DRAFT_I32(original_local_address + 36u) = TM3_DRAFT_U32(a5 + 52);
    if ( TM3_DRAFT_U8(a1) )
    {
      v23 = 2 * v21;
      v24 = a1 + 1;
      do
      {
        v25 = 24 * TM3_DRAFT_U8(v24);
        v26 = (uint32)(TM3_DRAFT_I32(original_local_address + 16u) + v25);
        v27 = TM3_DRAFT_I8(TM3_DRAFT_I32(original_local_address + 16u) + v25 + 23);
        v28 = (uint32)(TM3_DRAFT_I32(original_local_address + 16u) + v25 + 8 * TM3_DRAFT_I32(original_local_address + 36u));
        if ( v27 >= 0 )
        {
          if ( v27 == 1 )
          {
            v32 = TM3_DRAFT_I16(v26 + 2u * (10));
            v33 = TM3_DRAFT_I16(v26 + 2u * (9)) + TM3_DRAFT_I8(a5 + 167);
            TM3_DRAFT_U32(0x1F800014u) = TM3_DRAFT_I16(v26 + 2u * (8));
            TM3_DRAFT_U32(0x1F800018u) = v33;
            TM3_DRAFT_U32(0x1F80001Cu) = v32;
            sub_8001441C(-TM3_DRAFT_I16(a5 + 192), TM3_DRAFT_I16(a5 + 194) + 2048, 528482304);
            sub_8005B614((uint32)0x1F800080, (uint32)0x1F800000, (uint32)0x1F800000);
            v31 = 528482304;
            goto LABEL_19;
          }
          if ( !TM3_DRAFT_U8(TM3_DRAFT_I32(original_local_address + 16u) + v25 + 23) )
          {
            v29 = TM3_DRAFT_I16(v26 + 2u * (10));
            v30 = TM3_DRAFT_I16(v26 + 2u * (9)) + TM3_DRAFT_I8(a5 + 87);
            TM3_DRAFT_U32(0x1F800054u) = TM3_DRAFT_I16(v26 + 2u * (8));
            TM3_DRAFT_U32(0x1F800058u) = v30;
            TM3_DRAFT_U32(0x1F80005Cu) = v29;
            sub_8001441C(TM3_DRAFT_I16(a5 + 112), TM3_DRAFT_I16(a5 + 114), 528482368);
            sub_8005B614((uint32)0x1F800080, (uint32)0x1F800040, (uint32)0x1F800040);
            v31 = 528482368;
            goto LABEL_19;
          }
          if ( v27 == 2 )
          {
            v34 = TM3_DRAFT_I16(v26 + 2u * (10));
            v35 = TM3_DRAFT_I16(v26 + 2u * (9)) + TM3_DRAFT_I8(a5 + 327);
            TM3_DRAFT_U32(0x1F800074u) = TM3_DRAFT_I16(v26 + 2u * (8));
            TM3_DRAFT_U32(0x1F800078u) = v35;
            TM3_DRAFT_U32(0x1F80007Cu) = v34;
            sub_800142E4(TM3_DRAFT_I16(a5 + 352), 528482400);
            sub_8005B614((uint32)0x1F800080, (uint32)0x1F800060, (uint32)0x1F800060);
            v31 = 528482400;
            goto LABEL_19;
          }
          if ( v27 == 3 )
          {
            v36 = TM3_DRAFT_I16(v26 + 2u * (8));
            v37 = TM3_DRAFT_I16(v26 + 2u * (9));
            v38 = TM3_DRAFT_I16(v26 + 2u * (10));
            v39 = v37 + TM3_DRAFT_I8(a5 + 247);
            TM3_DRAFT_U32(0x1F800034u) = v36;
            TM3_DRAFT_U32(0x1F800038u) = v39;
            TM3_DRAFT_U32(0x1F80003Cu) = v38;
            sub_8001441C(-TM3_DRAFT_I16(a5 + 272), 2048, 528482336);
            sub_8005B614((uint32)0x1F800080, (uint32)0x1F800020, (uint32)0x1F800020);
            v31 = 528482336;
            goto LABEL_19;
          }
          v40 = TM3_DRAFT_U32(a5 + 48);
          if ( v40 )
          {
            v31 = tm3_draft_indirect(v40, 3u, a5, v27, TM3_DRAFT_I32(original_local_address + 16u) + v25) /* TODO: Guest callback adapter */;
            if ( !v31 )
              goto LABEL_37;
            goto LABEL_19;
          }
        }
        v31 = 528482432;
LABEL_19:
        v41 = 528482516;
        if ( v31 != TM3_DRAFT_I32(original_local_address + 32u) )
        {
          cpu_v1 = TM3_DRAFT_U32(v31);
          cpu_a0 = TM3_DRAFT_U32(v31 + 4);
          cpu_a1 = TM3_DRAFT_U32(v31 + 8);
          cpu_a2 = TM3_DRAFT_U32(v31 + 12);
          xport_gte_write_control(0u, (uint32)cpu_v1);
xport_gte_write_control(1u, (uint32)cpu_a0);
xport_gte_write_control(2u, (uint32)cpu_a1);
xport_gte_write_control(3u, (uint32)cpu_a2);
          cpu_v1 = TM3_DRAFT_U32(v31 + 16);
          cpu_a0 = TM3_DRAFT_U32(v31 + 20);
          cpu_a1 = TM3_DRAFT_U32(v31 + 24);
          cpu_a2 = TM3_DRAFT_U32(v31 + 28);
          xport_gte_write_control(4u, (uint32)cpu_v1);
xport_gte_write_control(5u, (uint32)cpu_a0);
xport_gte_write_control(6u, (uint32)cpu_a1);
xport_gte_write_control(7u, (uint32)cpu_a2);
          TM3_DRAFT_I32(original_local_address + 32u) = v31;
          v41 = 528482516;
        }
        v50 = TM3_DRAFT_I16(v28 + 2u * (3));
        cpu_v0 = TM3_DRAFT_I32(original_local_address + 24u) + 8 * TM3_DRAFT_I16(v28 + 2u * (2));
        while ( v50 > 0 )
        {
          xport_gte_write_data(0u, TM3_DRAFT_U32(cpu_v0 + 0u));
xport_gte_write_data(1u, TM3_DRAFT_U32(cpu_v0 + 4u));
xport_gte_write_data(2u, TM3_DRAFT_U32(cpu_v0 + 8u));
xport_gte_write_data(3u, TM3_DRAFT_U32(cpu_v0 + 0xCu));
xport_gte_write_data(4u, TM3_DRAFT_U32(cpu_v0 + 0x10u));
xport_gte_write_data(5u, TM3_DRAFT_U32(cpu_v0 + 0x14u));
          v41 += 12;
          xport_gte_execute(0x280030u);
          v50 -= 3;
          cpu_v0 += 24;
          TM3_DRAFT_U32(v41 + 0u) = xport_gte_read_data(12u);
TM3_DRAFT_U32(v41 + 4u) = xport_gte_read_data(13u);
TM3_DRAFT_U32(v41 + 8u) = xport_gte_read_data(14u);
        }
        v52 = TM3_DRAFT_I16(v28 + 2u * (1));
        if ( v52 > 0 )
        {
          v53 = TM3_DRAFT_I32(original_local_address + 20u) + 20 * TM3_DRAFT_I16(v28) + 14;
          v54 = v17 - 76;
          while ( 1 )
          {
            v55 = TM3_DRAFT_U8(v53 - 11) & 0x7F;
            if ( v55 == 36 )
              break;
            if ( v55 == 44 )
            {
              v71 = (uint32)v17;
              if ( (TM3_DRAFT_U8(v53 - 11) & 0x80) != 0 )
                goto LABEL_34;
              cpu_a0 = 4 * TM3_DRAFT_U8(v53 + 2) + 528482528;
              cpu_v1 = 4 * TM3_DRAFT_U8(v53 + 3) + 528482528;
              cpu_v0 = 4 * TM3_DRAFT_U8(v53 + 4) + 528482528;
              xport_gte_write_data(12u, TM3_DRAFT_U32(cpu_a0 + 0u));
xport_gte_write_data(13u, TM3_DRAFT_U32(cpu_v1 + 0u));
xport_gte_write_data(14u, TM3_DRAFT_U32(cpu_v0 + 0u));
xport_gte_execute(0x1400006u);
cpu_v0 = xport_gte_read_data(24u);
              if ( (sint32)cpu_v0 > 0 )
                goto LABEL_34;
              cpu_v0 = 4 * TM3_DRAFT_U8(v53 + 5) + 528482528;
              xport_gte_write_data(12u, TM3_DRAFT_U32(cpu_v0 + 0u));
xport_gte_execute(0x1400006u);
cpu_v0 = xport_gte_read_data(24u);
              if ( (sint32)cpu_v0 <= 0 )
              {
LABEL_34:
                v78 = v17 + 40;
                v79 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v53 + 2) + 0x1F8000E0);
                v80 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v53 + 3) + 0x1F8000E0);
                v81 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v53 + 4) + 0x1F8000E0);
                v82 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v53 + 5) + 0x1F8000E0);
                v83 = (TM3_DRAFT_U8(v53 - 11) & 0x7F) << 24;
                TM3_DRAFT_U32(v54 + 4u * (21)) = v79;
                TM3_DRAFT_U32(v54 + 4u * (23)) = v80;
                TM3_DRAFT_U32(v54 + 4u * (25)) = v81;
                TM3_DRAFT_U32(v54 + 4u * (27)) = v82;
                v84 = TM3_DRAFT_U32(v53 - 10);
                v85 = TM3_DRAFT_U32(v53 - 6);
                v86 = TM3_DRAFT_U16(v53 - 2);
                v87 = TM3_DRAFT_U16(v53);
                TM3_DRAFT_U32(v54 + 4u * (20)) = TM3_DRAFT_I32(original_local_address + 28u) | v83;
                TM3_DRAFT_U32(v54 + 4u * (22)) = v84;
                TM3_DRAFT_U32(v54 + 4u * (24)) = v85;
                TM3_DRAFT_U16(v54 + 104) = v86;
                TM3_DRAFT_U16(v54 + 112) = v87;
                v88 = v54 + 40;
                TM3_DRAFT_U8(v88 + 79) = 8;
                TM3_DRAFT_U8(v88 + 83) = 58;
                TM3_DRAFT_U32(v88 + 4u * (21)) = v79;
                TM3_DRAFT_U32(v88 + 4u * (23)) = v80;
                TM3_DRAFT_U32(v88 + 4u * (25)) = v81;
                TM3_DRAFT_U32(v88 + 4u * (27)) = v82;
                TM3_DRAFT_U8(v88 + 80) = 0;
                TM3_DRAFT_U8(v88 + 81) = v23;
                TM3_DRAFT_U8(v88 + 82) = v23;
                TM3_DRAFT_U8(v88 + 88) = 0;
                TM3_DRAFT_U8(v88 + 89) = 0;
                TM3_DRAFT_U8(v88 + 90) = v23;
                TM3_DRAFT_U8(v88 + 96) = 0;
                TM3_DRAFT_U8(v88 + 97) = v23;
                TM3_DRAFT_U8(v88 + 98) = v23;
                TM3_DRAFT_U8(v88 + 104) = v23;
                TM3_DRAFT_U8(v88 + 105) = v23;
                TM3_DRAFT_U8(v88 + 106) = v23;
                v54 = v88 + 36;
                v89 = (uint32)v78 & 0xFFFFFF;
                TM3_DRAFT_U32(v78) = TM3_DRAFT_U32(v78) & 0xFF000000 | TM3_DRAFT_U32(a2) & 0xFFFFFF;
                v17 = v78 + 36;
                v90 = TM3_DRAFT_U32(a2) & 0xFF000000 | v89;
                TM3_DRAFT_U32(a2) = v90;
                TM3_DRAFT_U32(v54) = v90 & 0xFFFFFF | 0x9000000;
                TM3_DRAFT_U32(a2) = v71 & 0xFFFFFF;
              }
LABEL_35:
              v53 += 20;
              goto LABEL_36;
            }
            v53 += 20;
LABEL_36:
            if ( --v52 <= 0 )
              goto LABEL_37;
          }
          v56 = (uint32)v17;
          if ( (TM3_DRAFT_U8(v53 - 11) & 0x80) != 0 )
            goto LABEL_30;
          cpu_a0 = 4 * TM3_DRAFT_U8(v53 + 2) + 528482528;
          cpu_v1 = 4 * TM3_DRAFT_U8(v53 + 3) + 528482528;
          cpu_v0 = 4 * TM3_DRAFT_U8(v53 + 4) + 528482528;
          xport_gte_write_data(12u, TM3_DRAFT_U32(cpu_a0 + 0u));
xport_gte_write_data(13u, TM3_DRAFT_U32(cpu_v1 + 0u));
xport_gte_write_data(14u, TM3_DRAFT_U32(cpu_v0 + 0u));
xport_gte_execute(0x1400006u);
cpu_v0 = xport_gte_read_data(24u);
          if ( (sint32)cpu_v0 > 0 )
          {
LABEL_30:
            v61 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v53 + 2) + 0x1F8000E0);
            v62 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v53 + 3) + 0x1F8000E0);
            v63 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v53 + 4) + 0x1F8000E0);
            v64 = v17 + 32;
            TM3_DRAFT_U32(v54 + 4u * (21)) = v61;
            TM3_DRAFT_U32(v54 + 4u * (23)) = v62;
            TM3_DRAFT_U32(v54 + 4u * (25)) = v63;
            v65 = TM3_DRAFT_U32(v53 - 10);
            v66 = TM3_DRAFT_U32(v53 - 6);
            v67 = TM3_DRAFT_U16(v53 - 2);
            TM3_DRAFT_U32(v54 + 4u * (20)) = TM3_DRAFT_I32(original_local_address + 28u) | 0x24000000;
            TM3_DRAFT_U32(v54 + 4u * (22)) = v65;
            TM3_DRAFT_U32(v54 + 4u * (24)) = v66;
            TM3_DRAFT_U16(v54 + 104) = v67;
            v68 = v54 + 32;
            TM3_DRAFT_U8(v68 + 79) = 6;
            TM3_DRAFT_U8(v68 + 83) = 50;
            TM3_DRAFT_U32(v68 + 4u * (21)) = v61;
            TM3_DRAFT_U32(v68 + 4u * (23)) = v62;
            TM3_DRAFT_U32(v68 + 4u * (25)) = v63;
            TM3_DRAFT_U8(v68 + 80) = v23;
            TM3_DRAFT_U8(v68 + 81) = v23;
            TM3_DRAFT_U8(v68 + 82) = v23;
            TM3_DRAFT_U8(v68 + 88) = 0;
            TM3_DRAFT_U8(v68 + 89) = v23;
            TM3_DRAFT_U8(v68 + 90) = v23;
            TM3_DRAFT_U8(v68 + 96) = 0;
            TM3_DRAFT_U8(v68 + 97) = 0;
            TM3_DRAFT_U8(v68 + 98) = v23;
            v54 = v68 + 28;
            v69 = (uint32)v64 & 0xFFFFFF;
            TM3_DRAFT_U32(v64) = TM3_DRAFT_U32(v64) & 0xFF000000 | TM3_DRAFT_U32(a2) & 0xFFFFFF;
            v17 = v64 + 28;
            v70 = TM3_DRAFT_U32(a2) & 0xFF000000 | v69;
            TM3_DRAFT_U32(a2) = v70;
            TM3_DRAFT_U32(v54 + 4u * (4)) = v70 & 0xFFFFFF | 0x7000000;
            TM3_DRAFT_U32(a2) = v56 & 0xFFFFFF;
          }
          goto LABEL_35;
        }
LABEL_37:
        --v22;
        ++v24;
      }
      while ( (uint8)v22 );
    }
    TM3_DRAFT_U8(v17 + 3) = 1;
    result = TM3_DRAFT_U32(0x800D2EF0u);
    v91 = -520093664;
    if ( TM3_DRAFT_U32(0x800D2EF0u) )
      v91 = -520093152;
    TM3_DRAFT_U32(v17 + 4u * (1)) = v91;
    TM3_DRAFT_U32(a3) = v17 + 8;
  }
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



