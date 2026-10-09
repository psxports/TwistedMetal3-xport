#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

#define dword_8007F294 TM3_DRAFT_U32(0x8007F294u)
#define dword_8007F298 TM3_DRAFT_U32(0x8007F298u)
#define dword_8007F29C TM3_DRAFT_U32(0x8007F29Cu)
#define dword_80089F00 TM3_DRAFT_U32(0x80089F00u)
#define dword_800896B4 TM3_DRAFT_U32(0x800896B4u)
#define dword_8007BC74 TM3_DRAFT_U32(0x8007BC74u)
#define dword_8007BCB4 TM3_DRAFT_U32(0x8007BCB4u)

/* Unverified decompiler-derived draft */
uint32 sub_8001B100(uint32 a1)
{
  uint8 hit_flags[12];
  int i; 
  uint32 v3; 
  int v4; 
  int j; 
  uint32 v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  uint32 v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  sint16 v19; 
  int result; 
  sint16 v21; 
  int v22; 
  int v23; 
  int v24; 
  signed int v25; 
  int v26; 
  int v27; 
  signed int v28; 
  int v29; 
  int v30; 
  signed int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  signed int v38; 
  int v39; 
  int v40; 
  signed int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 












  sint16 v58; 
  sint16 v59; 

  for ( i = 11; i >= 0; --i )
  {
    v3 = TM3_DRAFT_LOCAL_ADDRESS(hit_flags, sizeof(hit_flags)) + i;
    TM3_DRAFT_I8(v3) = 0;
  }
  v4 = TM3_DRAFT_U32(a1 + 3692);
  for ( j = 0; v4; v4 = TM3_DRAFT_U32(v4 + 12) )
  {
    v6 = TM3_DRAFT_U32(a1 + 4040);
    v7 = TM3_DRAFT_I16(v6 + (60) * 2u);
    v8 = TM3_DRAFT_I16(v4 + 6);
    if ( -v7 >= v8 || v8 >= v7 )
    {
      v10 = TM3_DRAFT_I16(v6 + (61) * 2u);
      v11 = TM3_DRAFT_I16(v4 + 6);
      if ( -v10 >= v11 || v11 >= v10 )
      {
        v13 = TM3_DRAFT_U32(a1 + 4040);
        v14 = TM3_DRAFT_I16(v4 + 6);
        v15 = TM3_DRAFT_I16(v13 + (62) * 2u);
        if ( v15 >= v14 && v14 >= -v15 )
        {
          v17 = TM3_DRAFT_I16(v13 + (63) * 2u);
          if ( v17 < v14 || v14 < -v17 )
          {
            v18 = TM3_DRAFT_I16(v4 + 4);
            if ( v18 >= TM3_DRAFT_I16(v13 + (64) * 2u) )
            {
              if ( v18 >= TM3_DRAFT_I16(v13 + (65) * 2u) )
              {
                if ( v18 < TM3_DRAFT_I16(v13 + (66) * 2u) )
                {
                  hit_flags[11] = 1;
                  j += TM3_DRAFT_U32(a1 + 3664);
                }
              }
              else
              {
                hit_flags[10] = 1;
                j += TM3_DRAFT_U32(a1 + 3644);
              }
            }
            else
            {
              hit_flags[9] = 1;
              j += TM3_DRAFT_U32(a1 + 3624);
            }
          }
        }
        else
        {
          v16 = TM3_DRAFT_I16(v4 + 4);
          if ( v16 >= TM3_DRAFT_I16(v13 + (64) * 2u) )
          {
            if ( v16 >= TM3_DRAFT_I16(v13 + (65) * 2u) )
            {
              if ( v16 < TM3_DRAFT_I16(v13 + (66) * 2u) )
              {
                hit_flags[8] = 1;
                j += TM3_DRAFT_U32(a1 + 3604);
              }
            }
            else
            {
              hit_flags[7] = 1;
              j += TM3_DRAFT_U32(a1 + 3584);
            }
          }
          else
          {
            hit_flags[6] = 1;
            j += TM3_DRAFT_U32(a1 + 3564);
          }
        }
      }
      else
      {
        v12 = TM3_DRAFT_I16(v4 + 4);
        if ( v12 >= TM3_DRAFT_I16(v6 + (64) * 2u) )
        {
          if ( v12 >= TM3_DRAFT_I16(v6 + (65) * 2u) )
          {
            if ( v12 < TM3_DRAFT_I16(v6 + (66) * 2u) )
            {
              hit_flags[5] = 1;
              j += TM3_DRAFT_U32(a1 + 3544);
            }
          }
          else
          {
            hit_flags[4] = 1;
            j += TM3_DRAFT_U32(a1 + 3524);
          }
        }
        else
        {
          hit_flags[3] = 1;
          j += TM3_DRAFT_U32(a1 + 3504);
        }
      }
    }
    else
    {
      v9 = TM3_DRAFT_I16(v4 + 4);
      if ( v9 >= TM3_DRAFT_I16(v6 + (64) * 2u) )
      {
        if ( v9 >= TM3_DRAFT_I16(v6 + (65) * 2u) )
        {
          if ( v9 < TM3_DRAFT_I16(v6 + (66) * 2u) )
          {
            hit_flags[2] = 1;
            j += TM3_DRAFT_U32(a1 + 3484);
          }
        }
        else
        {
          hit_flags[1] = 1;
          j += TM3_DRAFT_U32(a1 + 3464);
        }
      }
      else
      {
        hit_flags[0] = 1;
        j += TM3_DRAFT_U32(a1 + 3444);
      }
    }
  }
  TM3_DRAFT_U32(a1 + 3956) = hit_flags[0] || hit_flags[1];
  if ( hit_flags[0] || hit_flags[1] || hit_flags[2] || hit_flags[6] || hit_flags[7] || hit_flags[8] )
  {
    if ( TM3_DRAFT_I16(a1 + 3420) >= 0 )
    {
      v19 = TM3_DRAFT_U16(a1 + 3422) - 1;
      TM3_DRAFT_U16(a1 + 3422) = v19;
      if ( (v19 & 0x8000) != 0 )
      {
        TM3_DRAFT_U32(a1 + 3996) = 0;
        result = sub_80039FD4();
        TM3_DRAFT_U16(a1 + 3422) = result % TM3_DRAFT_I16(a1 + 3420);
        return result;
      }
    }
    if ( TM3_DRAFT_I16(a1 + 3424) >= 0 )
    {
      v21 = TM3_DRAFT_U16(a1 + 3426) - 1;
      TM3_DRAFT_U16(a1 + 3426) = v21;
      if ( (v21 & 0x8000) != 0 )
      {
        TM3_DRAFT_U32(a1 + 3996) = 3;
        result = sub_80039FD4();
        TM3_DRAFT_U16(a1 + 3426) = result % TM3_DRAFT_I16(a1 + 3424) + 225;
        return result;
      }
    }
  }
  if ( TM3_DRAFT_U32(a1 + 4208) )
  {
    if ( TM3_DRAFT_I16(a1 + 3414) >= 0 )
    {
      v22 = TM3_DRAFT_I16(a1 + 3348);
      if ( TM3_DRAFT_U16(a1 + 3414) )
      {
        v23 = TM3_DRAFT_I16(a1 + 3432) - v22;
        v24 = TM3_DRAFT_I16(a1 + 3434) - TM3_DRAFT_I16(a1 + 3350);
        --TM3_DRAFT_U16(a1 + 3414);
        v25 = sub_80015724(v23, v24);
        v26 = TM3_DRAFT_U32(a1 + 4040);
        if ( TM3_DRAFT_I16(v26 + 380) < v25
          && sub_8001BC78(a1, TM3_DRAFT_U32(a1 + 3436), (uint32)(a1 + 3432), TM3_DRAFT_I16(v26 + 382)) )
        {
          TM3_DRAFT_U32(a1 + 3968) = 5;
          goto LABEL_61;
        }
      }
      else if ( TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 380) < (int)sub_80015724(
                                                                    TM3_DRAFT_I16(a1 + 3432) - v22,
                                                                    TM3_DRAFT_I16(a1 + 3434) - TM3_DRAFT_I16(a1 + 3350)) )
      {
        TM3_DRAFT_U32(a1 + 3968) = 5;
LABEL_61:
        TM3_DRAFT_U32(a1 + 3952) = 1;
        result = -1;
        TM3_DRAFT_U16(a1 + 3414) = -1;
        return result;
      }
    }
  }
  else
  {
    TM3_DRAFT_U16(a1 + 3414) = -1;
  }
  v27 = TM3_DRAFT_U32(a1 + 4256);
  if ( v27 )
  {
    v58 = TM3_DRAFT_U16(v27 + 8);
    v59 = TM3_DRAFT_U16(TM3_DRAFT_U32(a1 + 4256) + 12);
    v28 = sub_80015724(v58 - TM3_DRAFT_I16(a1 + 3348), v59 - TM3_DRAFT_I16(a1 + 3350));
    v29 = TM3_DRAFT_U32(a1 + 4040);
    if ( TM3_DRAFT_I16(v29 + 384) < v28 )
    {
      if ( sub_8001BC78(a1, TM3_DRAFT_U32(a1 + 3396), &v58, TM3_DRAFT_I16(v29 + 386)) )
      {
        TM3_DRAFT_U32(a1 + 3968) = 8;
        goto LABEL_107;
      }
    }
  }
  v30 = TM3_DRAFT_U32(a1 + 4368);
  if ( v30 )
  {
    if ( TM3_DRAFT_U32(a1 + 3928) == 11 )
    {
      v58 = TM3_DRAFT_U16(v30 + 8);
      v59 = TM3_DRAFT_U16(TM3_DRAFT_U32(a1 + 4368) + 12);
      v31 = sub_80015724(v58 - TM3_DRAFT_I16(a1 + 3348), v59 - TM3_DRAFT_I16(a1 + 3350));
      v32 = TM3_DRAFT_U32(a1 + 4040);
      if ( TM3_DRAFT_I16(v32 + 388) < v31 )
      {
        if ( sub_8001BC78(a1, TM3_DRAFT_U32(a1 + 3396), &v58, TM3_DRAFT_I16(v32 + 390)) )
        {
          TM3_DRAFT_U32(a1 + 3968) = 15;
LABEL_107:
          result = 1;
LABEL_108:
          TM3_DRAFT_U32(a1 + 3952) = 1;
          return result;
        }
      }
    }
  }
  v33 = TM3_DRAFT_U16(a1 + 3412) - 1;
  TM3_DRAFT_U16(a1 + 3412) = v33;
  result = v33 << 16;
  if ( result < 0 )
  {
    v34 = TM3_DRAFT_U32(a1 + 3684);
    if ( v34 && TM3_DRAFT_U8(v34 + 3328) < 2u )
    {
      result = TM3_DRAFT_U16(a1 + 3408);
      TM3_DRAFT_U16(a1 + 3412) = result;
    }
    else
    {
      result = TM3_DRAFT_U16(a1 + 3410);
      TM3_DRAFT_U16(a1 + 3412) = result;
    }
    v37 = 0;
    if ( j > 0 )
    {
      v35 = 0;
      v38 = sub_80039FD4();
      v39 = 11;
      v40 = a1 + 220;
      while ( 1 )
      {
        if ( hit_flags[v39] )
        {
          v37 += TM3_DRAFT_U32(v40 + 3444);
          if ( v37 >= v38 % j )
            break;
        }
        --v39;
        v40 -= 20;
        if ( v39 < 0 )
          goto LABEL_84;
      }
      v35 = v39;
LABEL_84:
      v42 = 0;
      v41 = sub_80039FD4();
      v36 = 0;
      v43 = 15;
      v44 = v41 % 100;
      v45 = 20 * v35 + 15;
      while ( 1 )
      {
        v42 += TM3_DRAFT_U8(a1 + v45 + 3448);
        if ( v42 >= v44 )
          break;
        v45 = --v43 + 20 * v35;
        if ( v43 < 0 )
          goto LABEL_87;
      }
      v36 = v43;
LABEL_87:
      result = -2146959360;
      switch ( v36 )
      {
        case 0:
          TM3_DRAFT_U32(a1 + 3968) = 0;
          goto LABEL_89;
        case 1:
          result = v35 < 6;
          TM3_DRAFT_U32(a1 + 3968) = 1;
          if ( v35 >= 6 )
          {
            result = 2;
LABEL_110:
            TM3_DRAFT_U32(a1 + 3996) = 2;
          }
          else
          {
            TM3_DRAFT_U32(a1 + 3952) = 1;
          }
          break;
        case 2:
          result = v35 < 6;
          TM3_DRAFT_U32(a1 + 3968) = 2;
          if ( v35 < 6 )
            goto LABEL_107;
          TM3_DRAFT_U32(a1 + 3996) = 2;
          return result;
        case 3:
          TM3_DRAFT_U32(a1 + 3968) = 3;
          goto LABEL_89;
        case 4:
          TM3_DRAFT_U32(a1 + 3968) = 4;
          goto LABEL_89;
        case 5:
          result = 5;
          if ( !TM3_DRAFT_U32(a1 + 4208) )
          {
            TM3_DRAFT_U32(a1 + 3968) = 5;
            TM3_DRAFT_U32(a1 + 3952) = 1;
            TM3_DRAFT_U16(a1 + 3414) = 75;
            TM3_DRAFT_U32(a1 + 3432) = TM3_DRAFT_U32(a1 + 3348);
            result = TM3_DRAFT_U32(a1 + 3396);
            TM3_DRAFT_U32(a1 + 3436) = result;
          }
          return result;
        case 6:
          TM3_DRAFT_U32(a1 + 3968) = 4;
          goto LABEL_89;
        case 7:
          TM3_DRAFT_U32(a1 + 3968) = 7;
          goto LABEL_89;
        case 8:
          result = 8;
          if ( TM3_DRAFT_U32(a1 + 4256) )
            return result;
          TM3_DRAFT_U32(a1 + 3968) = 8;
LABEL_89:
          result = 1;
          if ( v35 < 6 )
            goto LABEL_108;
          result = 2;
          goto LABEL_110;
        case 9:
          TM3_DRAFT_U32(a1 + 3968) = 9;
          goto LABEL_89;
        case 15:
          if ( TM3_DRAFT_U32(a1 + 3928) == 11 )
          {
            result = 15;
            if ( TM3_DRAFT_U32(a1 + 4368) )
              return result;
          }
          TM3_DRAFT_U32(a1 + 3968) = 15;
          result = 2;
          if ( v35 < 6 )
            goto LABEL_107;
          goto LABEL_110;
        default:
          return result;
      }
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80049710(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x80049710u, "SCUS_942.49");
  uint32 v4; 
  int v6; 
  uint32 v7; 
  uint32 v8; 
  unsigned int v9; 
  int v10; 
  unsigned int v11; 
  uint32 v12; 
  int v13; 
  int v14; 
  int i; 
  unsigned int v16; 
  unsigned int v17; 
  uint32 v18; 
  unsigned int v19; 
  uint32 v20; 
  uint32 v21; 
  unsigned int v22; 
  int v23; 
  uint32 v24; 
  uint32 v25; 
  uint32 v26; 
  uint32 v27; 
  uint32 v28; 
  uint32 v29; 
  unsigned int v31; 
  int v32; 
  int v33; 

  v4 = a2;
  v6 = TM3_DRAFT_U8(a2);
  v7 = 0;
  if ( v6 )
  {
    do
    {
      v8 = (uint32)(a1 + v7);
      if ( v6 == 37 )
      {
        v31 = dword_8007F294;
        v32 = dword_8007F298;
        v33 = dword_8007F29C;
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v6 = TM3_DRAFT_U8(v4 += 1u);
                  if ( v6 != 45 )
                    break;
                  v31 |= 1u;
                }
                if ( v6 != 43 )
                  break;
                v31 |= 2u;
              }
              if ( v6 != 32 )
                break;
              BYTE1(v31) = 32;
            }
            if ( v6 != 35 )
              break;
            v31 |= 4u;
          }
          if ( v6 != 48 )
            break;
          v31 |= 8u;
        }
        v9 = v6 - 48;
        if ( v6 == 42 )
        {
          a3 += 4;
          v10 = TM3_DRAFT_U32(a3 - 4);
          v32 = v10;
          if ( v10 < 0 )
          {
            v32 = (sint32)(0u - (uint32)v10);
            v31 |= 1u;
          }
          v6 = TM3_DRAFT_U8(v4 += 1u);
        }
        else
        {
          while ( v9 < 0xA )
          {
            (v4 += 1u);
            v32 = (sint32)(10u * (uint32)v32 - 48u + (uint32)v6);
            v6 = TM3_DRAFT_U8(v4);
            v9 = v6 - 48;
          }
        }
        if ( v6 == 46 )
        {
          v6 = TM3_DRAFT_U8(v4 += 1u);
          v11 = v6 - 48;
          if ( v6 == 42 )
          {
            a3 += 4;
            (v4 += 1u);
            v33 = TM3_DRAFT_U32(a3 - 4);
            v6 = TM3_DRAFT_U8(v4);
          }
          else
          {
            while ( v11 < 0xA )
            {
              (v4 += 1u);
              v33 = (sint32)(10u * (uint32)v33 - 48u + (uint32)v6);
              v6 = TM3_DRAFT_U8(v4);
              v11 = v6 - 48;
            }
          }
          if ( v33 >= 0 )
            v31 |= 0x10u;
        }
        v12 = -2146617632;
        if ( (v31 & 1) != 0 )
          v31 &= ~8u;
        while ( 2 )
        {
          switch ( v6 )
          {
            case 'L':
              (v4 += 1u);
              v13 = v31 | 0x80;
              goto LABEL_33;
            case 'X':
              goto LABEL_75;
            case 'c':
              v12 = -2146617633;
              a3 += 4;
              i = 1;
              TM3_DRAFT_U8(0x800d36dfu) = TM3_DRAFT_U8(a3 - 4);
              goto LABEL_107;
            case 'd':
            case 'i':
              a3 += 4;
              v14 = TM3_DRAFT_U32(a3 - 4);
              if ( ((v31 >> 5) & 1) != 0 )
                v14 = (sint16)v14;
              if ( v14 >= 0 )
              {
                if ( ((v31 >> 1) & 1) != 0 )
                  BYTE1(v31) = 43;
              }
              else
              {
                v14 = (sint32)(0u - (uint32)v14);
                BYTE1(v31) = 45;
              }
              goto LABEL_43;
            case 'h':
              (v4 += 1u);
              v13 = v31 | 0x20;
              goto LABEL_33;
            case 'l':
              (v4 += 1u);
              v13 = v31 | 0x40;
LABEL_33:
              v31 = v13;
              v6 = TM3_DRAFT_U8(v4);
              continue;
            case 'n':
              a3 += 4;
              v27 = TM3_DRAFT_U32(a3 - 4);
              if ( ((v31 >> 5) & 1) != 0 )
                TM3_DRAFT_U16(v27) = v7;
              else
                TM3_DRAFT_U32(v27) = v7;
              goto LABEL_114;
            case 'o':
              a3 += 4;
              v19 = TM3_DRAFT_U32(a3 - 4);
              if ( ((v31 >> 5) & 1) != 0 )
                v19 = (uint16)TM3_DRAFT_U32(a3 - 4);
              if ( ((v31 >> 4) & 1) == 0 )
              {
                if ( ((v31 >> 3) & 1) != 0 )
                  v33 = v32;
                if ( v33 <= 0 )
                  v33 = 1;
              }
              for ( i = 0; v19; ++i )
              {
                TM3_DRAFT_U8(--v12) = (v19 & 7) + 48;
                v19 >>= 3;
              }
              if ( ((v31 >> 2) & 1) != 0 && i && TM3_DRAFT_U8(v12) != 48 )
              {
                TM3_DRAFT_U8(--v12) = 48;
                ++i;
              }
              if ( i < v33 )
              {
                v20 = (uint32)(v12 - 1);
                do
                {
                  TM3_DRAFT_U8(v20) = 48;
                  ++i;
                  (v20 -= 1u);
                }
                while ( i < v33 );
                v12 = (int)(v20 + 1);
              }
              goto LABEL_107;
            case 'p':
              v33 = 8;
              v31 |= 0x50u;
LABEL_75:
              v21 = 0x80088468u;
              goto LABEL_77;
            case 's':
              a3 += 4;
              v12 = TM3_DRAFT_U32(a3 - 4);
              if ( ((v31 >> 2) & 1) != 0 )
              {
                i = TM3_DRAFT_U8(v12);
                ++v12;
                if ( (v31 & 0x10) != 0 && v33 < i )
                  i = v33;
              }
              else if ( (v31 & 0x10) != 0 )
              {
                v26 = sub_80056554(TM3_DRAFT_U32(a3 - 4), 0, v33);
                i = (sint32)(v26 - v12);
                if ( !v26 )
                  i = v33;
              }
              else
              {
                i = sub_80056844(TM3_DRAFT_U32(a3 - 4));
              }
              goto LABEL_107;
            case 'u':
              a3 += 4;
              v14 = TM3_DRAFT_U32(a3 - 4);
              if ( ((v31 >> 5) & 1) != 0 )
                v14 = (uint16)TM3_DRAFT_U32(a3 - 4);
              BYTE1(v31) = 0;
LABEL_43:
              if ( ((v31 >> 4) & 1) == 0 )
              {
                if ( ((v31 >> 3) & 1) != 0 )
                {
                  v33 = v32;
                  if ( BYTE1(v31) )
                    v33 = (sint32)((uint32)v32 - 1u);
                }
                if ( v33 <= 0 )
                  v33 = 1;
              }
              i = 0;
              if ( v14 )
              {
                do
                {
                  --v12;
                  ++i;
                  v16 = v14;
                  v17 = v14 % 0xAu + 48;
                  v14 /= 0xAu;
                  TM3_DRAFT_U8(v12) = v17;
                }
                while ( v16 / 0xA );
              }
              if ( i < v33 )
              {
                v18 = (uint32)(v12 - 1);
                do
                {
                  TM3_DRAFT_U8(v18) = 48;
                  ++i;
                  (v18 -= 1u);
                }
                while ( i < v33 );
                v12 = (int)(v18 + 1);
              }
              if ( BYTE1(v31) )
              {
                TM3_DRAFT_U8(--v12) = BYTE1(v31);
                ++i;
              }
              goto LABEL_107;
            case 'x':
              v21 = 0x8008847Cu;
LABEL_77:
              a3 += 4;
              v22 = TM3_DRAFT_U32(a3 - 4);
              if ( ((v31 >> 5) & 1) != 0 )
                v22 = (uint16)TM3_DRAFT_U32(a3 - 4);
              if ( ((v31 >> 4) & 1) == 0 )
              {
                if ( ((v31 >> 3) & 1) != 0 )
                {
                  v33 = v32;
                  if ( ((v31 >> 2) & 1) != 0 )
                    v33 = (sint32)((uint32)v32 - 2u);
                }
                if ( v33 <= 0 )
                  v33 = 1;
              }
              for ( i = 0; v22; TM3_DRAFT_U8(v12) = TM3_DRAFT_I8(v21 + (v23) * 1u) )
              {
                --v12;
                v23 = v22 & 0xF;
                v22 >>= 4;
                ++i;
              }
              if ( i < v33 )
              {
                v24 = (uint32)(v12 - 1);
                do
                {
                  TM3_DRAFT_U8(v24) = 48;
                  ++i;
                  (v24 -= 1u);
                }
                while ( i < v33 );
                v12 = (int)(v24 + 1);
              }
              if ( ((v31 >> 2) & 1) != 0 )
              {
                v25 = (uint32)(v12 - 1);
                TM3_DRAFT_U8(v25) = v6;
                v12 = (int)(v25 - 1);
                i += 2;
                TM3_DRAFT_U8(v12) = 48;
              }
LABEL_107:
              v28 = (uint32)(a1 + v7);
              if ( i >= v32 )
                goto LABEL_111;
              v29 = (uint32)v12;
              if ( (v31 & 1) == 0 )
              {
                do
                {
                  TM3_DRAFT_U8(a1 + v7) = 32;
                  --v32;
                  ++v7;
                }
                while ( i < v32 );
                v28 = (uint32)(a1 + v7);
LABEL_111:
                v29 = (uint32)v12;
              }
              sub_80056634(v28, v29, i);
              for ( v7 += i; i < v32; ++v7 )
              {
                TM3_DRAFT_U8(a1 + v7) = 32;
                ++i;
              }
              break;
            default:
              v8 = (uint32)(a1 + v7);
              if ( v6 == 37 )
                goto LABEL_106;
              goto LABEL_115;
          }
          break;
        }
      }
      else
      {
LABEL_106:
        TM3_DRAFT_U8(v8) = v6;
        ++v7;
      }
LABEL_114:
      v6 = TM3_DRAFT_U8(v4 += 1u);
    }
    while ( TM3_DRAFT_U8(v4) );
  }
LABEL_115:
  TM3_DRAFT_U8(a1 + v7) = 0;
  return v7;
}

/* Unverified decompiler-derived draft */
uint32 sub_80023F94(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6)
{
  uint32 ida_A0, ida_A1, ida_A2, ida_V0, ida_V1; /* TODO Explicit adapter values */
  uint32 v15; 
  int v16; 
  int v17; 
  int result; 
  int v19; 
  int v20; 
  uint32 v21; 
  int v22; 
  uint32 v23; 
  int v24; 
  uint32 v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  uint32 v37; /* TODO Guest callback signature */ 
  int v38; 
  int v47; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  sint16 v62; 
  int v63; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  sint16 v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 

  v15 = (uint32)(a5 + 4 * a6);
  v16 = TM3_DRAFT_U32(TM3_DRAFT_U32(v15) + 4);
  v17 = TM3_DRAFT_I32(a3);
  result = TM3_DRAFT_U32(a3) + 40u * (uint32)v16 + 8u < a4;
  if ( TM3_DRAFT_U32(a3) + 40u * (uint32)v16 + 8u < a4 )
  {
    result = TM3_DRAFT_U32(a5 + 56);
    v78 = TM3_DRAFT_U32(v15) + 36;
    v19 = ((uint32)result << 16) | ((uint32)result << 8) | (uint32)result;
    v81 = v19;
    v79 = TM3_DRAFT_U32(v15 + (3) * 4u);
    v83 = TM3_DRAFT_U32(a5 + 64);
    v80 = TM3_DRAFT_U32(v15 + (6) * 4u);
    if ( v83 )
    {
      result = 0x2000000;
      v81 = v19 | 0x2000000;
    }
    v82 = 0;
    v20 = (uint8)TM3_DRAFT_U8(a1);
    v84 = TM3_DRAFT_U32(a5 + 52);
    if ( TM3_DRAFT_U8(a1) )
    {
      v21 = a1 + 1;
      do
      {
        v22 = 24 * TM3_DRAFT_U8(v21);
        v23 = (uint32)(v78 + v22);
        v24 = TM3_DRAFT_I8(v78 + v22 + 23);
        v25 = (uint32)(v78 + v22 + 8 * v84);
        if ( v24 >= 0 )
        {
          if ( v24 == 1 )
          {
            v29 = TM3_DRAFT_I16(v23 + (10) * 2u);
            v30 = TM3_DRAFT_I16(v23 + (9) * 2u) + TM3_DRAFT_I8(a5 + 167);
            TM3_DRAFT_U32(0x1f800014u) = TM3_DRAFT_I16(v23 + (8) * 2u);
            TM3_DRAFT_U32(0x1f800018u) = v30;
            TM3_DRAFT_U32(0x1f80001cu) = v29;
            sub_8001441C(-TM3_DRAFT_I16(a5 + 192), TM3_DRAFT_I16(a5 + 194) + 2048, 528482304);
            sub_8005B614((uint32)0x1F800080, (uint32)0x1F800000, (uint32)0x1F800000);
            v28 = 528482304;
            goto LABEL_19;
          }
          if ( !TM3_DRAFT_U8(v78 + v22 + 23) )
          {
            v26 = TM3_DRAFT_I16(v23 + (10) * 2u);
            v27 = TM3_DRAFT_I16(v23 + (9) * 2u) + TM3_DRAFT_I8(a5 + 87);
            TM3_DRAFT_U32(0x1f800054u) = TM3_DRAFT_I16(v23 + (8) * 2u);
            TM3_DRAFT_U32(0x1f800058u) = v27;
            TM3_DRAFT_U32(0x1f80005cu) = v26;
            sub_8001441C(TM3_DRAFT_I16(a5 + 112), TM3_DRAFT_I16(a5 + 114), 528482368);
            sub_8005B614((uint32)0x1F800080, (uint32)0x1F800040, (uint32)0x1F800040);
            v28 = 528482368;
            goto LABEL_19;
          }
          if ( v24 == 2 )
          {
            v31 = TM3_DRAFT_I16(v23 + (10) * 2u);
            v32 = TM3_DRAFT_I16(v23 + (9) * 2u) + TM3_DRAFT_I8(a5 + 327);
            TM3_DRAFT_U32(0x1f800074u) = TM3_DRAFT_I16(v23 + (8) * 2u);
            TM3_DRAFT_U32(0x1f800078u) = v32;
            TM3_DRAFT_U32(0x1f80007cu) = v31;
            sub_800142E4(TM3_DRAFT_I16(a5 + 352), 528482400);
            sub_8005B614((uint32)0x1F800080, (uint32)0x1F800060, (uint32)0x1F800060);
            v28 = 528482400;
            goto LABEL_19;
          }
          if ( v24 == 3 )
          {
            v33 = TM3_DRAFT_I16(v23 + (8) * 2u);
            v34 = TM3_DRAFT_I16(v23 + (9) * 2u);
            v35 = TM3_DRAFT_I16(v23 + (10) * 2u);
            v36 = v34 + TM3_DRAFT_I8(a5 + 247);
            TM3_DRAFT_U32(0x1f800034u) = v33;
            TM3_DRAFT_U32(0x1f800038u) = v36;
            TM3_DRAFT_U32(0x1f80003cu) = v35;
            sub_8001441C(-TM3_DRAFT_I16(a5 + 272), 2048, 528482336);
            sub_8005B614((uint32)0x1F800080, (uint32)0x1F800020, (uint32)0x1F800020);
            v28 = 528482336;
            goto LABEL_19;
          }
          v37 = TM3_DRAFT_U32(a5 + 48u);
          if ( v37 )
          {
            v28 = tm3_draft_indirect(v37, 3u, a5, v24, v78 + v22);
            if ( !v28 )
              goto LABEL_37;
            goto LABEL_19;
          }
        }
        v28 = 528482432;
LABEL_19:
        v38 = 528482516;
        if ( v28 != v82 )
        {
          ida_V1 = TM3_DRAFT_U32(v28);
          ida_A0 = TM3_DRAFT_U32(v28 + 4);
          ida_A1 = TM3_DRAFT_U32(v28 + 8);
          ida_A2 = TM3_DRAFT_U32(v28 + 12);
          /* TODO GTE adapters */
  tm3_draft_gte_write_control(0u, ida_V1);
  tm3_draft_gte_write_control(1u, ida_A0);
  tm3_draft_gte_write_control(2u, ida_A1);
  tm3_draft_gte_write_control(3u, ida_A2);
          ida_V1 = TM3_DRAFT_U32(v28 + 16);
          ida_A0 = TM3_DRAFT_U32(v28 + 20);
          ida_A1 = TM3_DRAFT_U32(v28 + 24);
          ida_A2 = TM3_DRAFT_U32(v28 + 28);
          /* TODO GTE adapters */
  tm3_draft_gte_write_control(4u, ida_V1);
  tm3_draft_gte_write_control(5u, ida_A0);
  tm3_draft_gte_write_control(6u, ida_A1);
  tm3_draft_gte_write_control(7u, ida_A2);
          v82 = v28;
          v38 = 528482516;
        }
        v47 = TM3_DRAFT_I16(v25 + (3) * 2u);
        ida_V0 = v80 + 8 * TM3_DRAFT_I16(v25 + (2) * 2u);
        while ( v47 > 0 )
        {
          /* TODO GTE adapters */
  tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(ida_V0 + 0u));
  tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(ida_V0 + 4u));
  tm3_draft_gte_write_data(2u, TM3_DRAFT_U32(ida_V0 + 8u));
  tm3_draft_gte_write_data(3u, TM3_DRAFT_U32(ida_V0 + 12u));
  tm3_draft_gte_write_data(4u, TM3_DRAFT_U32(ida_V0 + 16u));
  tm3_draft_gte_write_data(5u, TM3_DRAFT_U32(ida_V0 + 20u));
          v38 += 12;
          /* TODO GTE adapters */
  tm3_draft_gte_command(0x280030u);
          v47 -= 3;
          ida_V0 += 24;
          /* TODO GTE adapters */
  TM3_DRAFT_U32((uint32)v38 + 0u) = tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32((uint32)v38 + 4u) = tm3_draft_gte_read_data(13u);
  TM3_DRAFT_U32((uint32)v38 + 8u) = tm3_draft_gte_read_data(14u);
        }
        v49 = TM3_DRAFT_I16(v25 + (1) * 2u);
        if ( v49 > 0 )
        {
          v50 = v79 + 20 * TM3_DRAFT_I16(v25) + 14;
          v51 = v17 - 40;
          while ( 1 )
          {
            v52 = TM3_DRAFT_U8(v50 - 11) & 0x7F;
            if ( v52 == 36 )
              break;
            if ( v52 == 44 )
            {
              v63 = v17;
              if ( (TM3_DRAFT_U8(v50 - 11) & 0x80) != 0 )
                goto LABEL_34;
              ida_A0 = 4 * TM3_DRAFT_U8(v50 + 2) + 528482528;
              ida_V1 = 4 * TM3_DRAFT_U8(v50 + 3) + 528482528;
              ida_V0 = 4 * TM3_DRAFT_U8(v50 + 4) + 528482528;
              /* TODO GTE adapters */
  tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(ida_A0));
  tm3_draft_gte_write_data(13u, TM3_DRAFT_U32(ida_V1));
  tm3_draft_gte_write_data(14u, TM3_DRAFT_U32(ida_V0));
  tm3_draft_gte_command(0x1400006u);
  ida_V0 = tm3_draft_gte_read_data(24u);
              if ( (sint32)ida_V0 > 0 )
                goto LABEL_34;
              ida_V0 = 4 * TM3_DRAFT_U8(v50 + 5) + 528482528;
              /* TODO GTE adapters */
  tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(ida_V0));
  tm3_draft_gte_command(0x1400006u);
  ida_V0 = tm3_draft_gte_read_data(24u);
              if ( (sint32)ida_V0 <= 0 )
              {
LABEL_34:
                v17 += 40;
                v70 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v50 + 2) + 0x1F8000E0);
                v71 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v50 + 3) + 0x1F8000E0);
                v72 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v50 + 4) + 0x1F8000E0);
                TM3_DRAFT_U32(v51 + 72) = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v50 + 5) + 0x1F8000E0);
                v73 = v52 << 24;
                TM3_DRAFT_U32(v51 + 48) = v70;
                TM3_DRAFT_U32(v51 + 56) = v71;
                TM3_DRAFT_U32(v51 + 64) = v72;
                v74 = TM3_DRAFT_U32(v50 - 10);
                v75 = TM3_DRAFT_U32(v50 - 6);
                LOWORD(v70) = TM3_DRAFT_U16(v50 - 2);
                v76 = TM3_DRAFT_U16(v50);
                TM3_DRAFT_U32(v51 + 44) = v81 | v73;
                TM3_DRAFT_U32(v51 + 52) = v74;
                TM3_DRAFT_U32(v51 + 60) = v75;
                TM3_DRAFT_U16(v51 + 68) = v70;
                TM3_DRAFT_U16(v51 + 76) = v76;
                v51 += 40;
                TM3_DRAFT_U32(v51) = TM3_DRAFT_I32(a2) & 0xFFFFFF | 0x9000000;
                TM3_DRAFT_I32(a2) = v63 & 0xFFFFFF;
              }
LABEL_35:
              v50 += 20;
              goto LABEL_36;
            }
            v50 += 20;
LABEL_36:
            if ( --v49 <= 0 )
              goto LABEL_37;
          }
          v53 = v17;
          if ( (TM3_DRAFT_U8(v50 - 11) & 0x80) != 0 )
            goto LABEL_30;
          ida_A0 = 4 * TM3_DRAFT_U8(v50 + 2) + 528482528;
          ida_V1 = 4 * TM3_DRAFT_U8(v50 + 3) + 528482528;
          ida_V0 = 4 * TM3_DRAFT_U8(v50 + 4) + 528482528;
          /* TODO GTE adapters */
  tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(ida_A0));
  tm3_draft_gte_write_data(13u, TM3_DRAFT_U32(ida_V1));
  tm3_draft_gte_write_data(14u, TM3_DRAFT_U32(ida_V0));
  tm3_draft_gte_command(0x1400006u);
  ida_V0 = tm3_draft_gte_read_data(24u);
          if ( (sint32)ida_V0 > 0 )
          {
LABEL_30:
            v58 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v50 + 3) + 0x1F8000E0);
            v59 = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v50 + 4) + 0x1F8000E0);
            v17 += 32;
            TM3_DRAFT_U32(v51 + 48) = TM3_DRAFT_U32(4 * TM3_DRAFT_U8(v50 + 2) + 0x1F8000E0);
            TM3_DRAFT_U32(v51 + 56) = v58;
            TM3_DRAFT_U32(v51 + 64) = v59;
            v60 = TM3_DRAFT_U32(v50 - 10);
            v61 = TM3_DRAFT_U32(v50 - 6);
            v62 = TM3_DRAFT_U16(v50 - 2);
            TM3_DRAFT_U32(v51 + 44) = v81 | 0x24000000;
            TM3_DRAFT_U32(v51 + 52) = v60;
            TM3_DRAFT_U32(v51 + 60) = v61;
            TM3_DRAFT_U16(v51 + 68) = v62;
            v51 += 32;
            TM3_DRAFT_U32(v51 + 8) = TM3_DRAFT_I32(a2) & 0xFFFFFF | 0x7000000;
            TM3_DRAFT_I32(a2) = v53 & 0xFFFFFF;
          }
          goto LABEL_35;
        }
LABEL_37:
        result = (uint8)--v20;
        (v21 += 1u);
      }
      while ( (_BYTE)v20 );
    }
    if ( v83 )
    {
      TM3_DRAFT_U8(v17 + 3) = 1;
      result = TM3_DRAFT_U32(0x800d2ef0u);
      v77 = -520093600;
      if ( TM3_DRAFT_U32(0x800d2ef0u) )
        v77 = -520093088;
      TM3_DRAFT_U32(v17 + 4) = v77;
      v17 += 8;
    }
    TM3_DRAFT_I32(a3) = v17;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80016EA8(uint32 a1, uint32 a2, uint32 a3)
{
  int v4; 
  int v5; 
  int v6; 
  sint16 v7; 
  int v8; 
  int v9; 
  int v10; 
  sint16 v11; 
  uint32 v12; 
  int v14; 
  int v15; 
  int v16; 
  sint16 v17; 
  uint32 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  signed int v28; 
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
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  sint32 v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v50; 

  v4 = 28 * (sint16)a2;
  if ( !TM3_DRAFT_U8(v4 + dword_80089F00 + 11) )
    return 0;
  v5 = a2;
  LOWORD(v6) = -1;
  v7 = HIWORD(TM3_DRAFT_U32(0x800896B4u + (0) * 4u));
  v8 = 4999;
  TM3_DRAFT_U16(v4 + dword_80089F00 + 14) = 0;
  HIWORD(TM3_DRAFT_U32(0x800896B4u + (0) * 4u)) = v7 + 1;
  TM3_DRAFT_U8(v4 + dword_80089F00 + 20) = 0;
  TM3_DRAFT_U16(v4 + dword_80089F00 + 18) = HIWORD(TM3_DRAFT_U32(0x800896B4u + (0) * 4u));
  TM3_DRAFT_U8(v4 + dword_80089F00 + 21) = 1;
  TM3_DRAFT_U16(v4 + dword_80089F00 + 22) = -1;
  TM3_DRAFT_U16(v4 + dword_80089F00 + 24) = -1;
  TM3_DRAFT_U16(v4 + dword_80089F00 + 26) = -1;
  while ( 1 )
  {
    if ( (v5 & 0x8000u) != 0 )
    {
      if ( (v6 & 0x8000u) == 0 )
      {
        v9 = TM3_DRAFT_U8(28 * (sint16)v6 + dword_80089F00 + 20) + 1;
        v10 = TM3_DRAFT_U8(28 * (sint16)v6 + dword_80089F00 + 20);
        if ( v9 >= 101 )
        {
          v9 = 100;
          v10 = 99;
        }
        v11 = v6;
        v12 = (uint32)(2 * v10 + a1);
        do
        {
          TM3_DRAFT_U16((v12 -= 2u) + 2u) = v11;
          v11 = TM3_DRAFT_U16(28 * v11 + dword_80089F00 + 22);
        }
        while ( v11 >= 0 );
        return v9;
      }
      return 0;
    }
    v14 = 28 * (sint16)v5 + dword_80089F00;
    v15 = TM3_DRAFT_U8(v14 + 20) + 1;
    v6 = v5;
    if ( v15 >= a3 )
      break;
    v19 = TM3_DRAFT_I16(v14 + 26);
    v5 = v19;
    if ( v19 >= 0 )
      TM3_DRAFT_U16(28 * v19 + dword_80089F00 + 24) = -1;
    v20 = 28 * (sint16)v6;
    TM3_DRAFT_U8(v20 + dword_80089F00 + 21) = 2;
    v21 = TM3_DRAFT_U8(v20 + dword_80089F00 + 8) - 1;
    v22 = v8;
    if ( v21 >= 0 )
    {
      v23 = v6 << 16;
      while ( 1 )
      {
        v24 = 28 * (v23 >> 16);
        v25 = 4 * v21 + TM3_DRAFT_U32(v24 + dword_80089F00 + 4);
        v26 = 28 * TM3_DRAFT_I16(v25 + 2);
        v27 = TM3_DRAFT_U16(v25 + 2);
        if ( TM3_DRAFT_U8(v26 + dword_80089F00 + 11) )
        {
          v50 = a1;
          v28 = sub_80039FD4();
          a1 = v50;
          v29 = v26 + dword_80089F00;
          v30 = TM3_DRAFT_U16(v24 + dword_80089F00 + 14) + v28 % 4096;
          if ( TM3_DRAFT_U16(v26 + dword_80089F00 + 18) != HIWORD(TM3_DRAFT_U32(0x800896B4u + (0) * 4u)) )
          {
            TM3_DRAFT_U16(v29 + 18) = HIWORD(TM3_DRAFT_U32(0x800896B4u + (0) * 4u));
            TM3_DRAFT_U16(v26 + dword_80089F00 + 14) = v30;
            TM3_DRAFT_U16(v26 + dword_80089F00 + 22) = v6;
            TM3_DRAFT_U8(v26 + dword_80089F00 + 20) = TM3_DRAFT_U8(v24 + dword_80089F00 + 20) + 1;
            TM3_DRAFT_U8(v26 + dword_80089F00 + 21) = 1;
LABEL_32:
            v35 = v5 << 16;
LABEL_33:
            v36 = v5;
            if ( v35 >= 0 )
            {
              v38 = -1;
              v39 = 28 * (sint16)v27;
              v40 = v39 + dword_80089F00;
              while ( 1 )
              {
                v41 = 28 * (sint16)v36 + dword_80089F00;
                v42 = v38 << 16;
                if ( TM3_DRAFT_U16(v41 + 14) >= (unsigned int)TM3_DRAFT_U16(v39 + dword_80089F00 + 14) )
                  break;
                v38 = v36;
                v36 = TM3_DRAFT_I16(v41 + 26);
                if ( v36 < 0 )
                {
                  v42 = v38 << 16;
                  break;
                }
              }
              v43 = v42 >> 16;
              v44 = v42 >> 16 < 0;
              v45 = 8 * (v42 >> 16);
              if ( v44 )
              {
                v48 = v5 << 16;
                TM3_DRAFT_U16(v40 + 26) = v5;
                v5 = v27;
                TM3_DRAFT_U16(v39 + dword_80089F00 + 24) = -1;
                TM3_DRAFT_U16(28 * (v48 >> 16) + dword_80089F00 + 24) = v27;
              }
              else
              {
                v46 = 4 * (v45 - v43);
                TM3_DRAFT_U16(v40 + 26) = TM3_DRAFT_U16(v46 + dword_80089F00 + 26);
                v47 = TM3_DRAFT_I16(v39 + dword_80089F00 + 26);
                if ( v47 >= 0 )
                  TM3_DRAFT_U16(28 * v47 + dword_80089F00 + 24) = v27;
                TM3_DRAFT_U16(v46 + dword_80089F00 + 26) = v27;
                TM3_DRAFT_U16(v39 + dword_80089F00 + 24) = v38;
              }
            }
            else
            {
              v37 = 28 * (sint16)v27;
              TM3_DRAFT_U16(v37 + dword_80089F00 + 26) = -1;
              v5 = v27;
              TM3_DRAFT_U16(v37 + dword_80089F00 + 24) = -1;
            }
            goto LABEL_44;
          }
          v31 = TM3_DRAFT_U8(v29 + 21);
          if ( v31 == 1 )
          {
            if ( (uint16)(TM3_DRAFT_U16(v24 + dword_80089F00 + 14) + v28 % 4096) < (unsigned int)TM3_DRAFT_U16(v29 + 14) )
            {
              TM3_DRAFT_U16(v29 + 22) = v6;
              TM3_DRAFT_U16(v26 + dword_80089F00 + 14) = v30;
              TM3_DRAFT_U8(v26 + dword_80089F00 + 20) = TM3_DRAFT_U8(v24 + dword_80089F00 + 20) + 1;
              v32 = TM3_DRAFT_I16(v26 + dword_80089F00 + 24);
              if ( v32 < 0 )
                v5 = -1;
              else
                TM3_DRAFT_U16(28 * v32 + dword_80089F00 + 26) = TM3_DRAFT_U16(v26 + dword_80089F00 + 26);
              v33 = 28 * (sint16)v27 + dword_80089F00;
              v34 = TM3_DRAFT_I16(v33 + 26);
              if ( v34 >= 0 )
                TM3_DRAFT_U16(28 * v34 + dword_80089F00 + 24) = TM3_DRAFT_U16(v33 + 24);
              goto LABEL_32;
            }
          }
          else
          {
            v35 = v5 << 16;
            if ( v31 != 2 )
              goto LABEL_33;
          }
        }
LABEL_44:
        --v21;
        v23 = v6 << 16;
        if ( v21 < 0 )
        {
          v22 = v8;
          break;
        }
      }
    }
    --v8;
    if ( v22 <= 0 )
      return 0;
  }
  v16 = TM3_DRAFT_U8(v14 + 20);
  if ( v15 >= 101 )
  {
    v15 = 100;
    v16 = 99;
  }
  v17 = v5;
  v18 = (uint32)(2 * v16 + a1);
  do
  {
    TM3_DRAFT_U16((v18 -= 2u) + 2u) = v17;
    v17 = TM3_DRAFT_U16(28 * v17 + dword_80089F00 + 22);
  }
  while ( v17 >= 0 );
  return v15;
}

/* Unverified decompiler-derived draft */
uint32 sub_80011D5C(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  uint32 ida_S6, ida_T2; /* TODO Explicit adapter values */
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  uint32 v11; 
  uint32 v12; 
  uint32 v13; 
  int v14; 
  int v15; 
  int v16; 
  uint32 v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  uint32 v28; 
  int v29; 
  uint32 v30; 
  int v31; 
  uint32 v32; 
  int v33; 
  int v34; 
  uint32 v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  uint32 v41; 
  uint32 v42; 
  uint32 v43; 
  int v44; 
  int v45; 
  int v46; 

  ida_T2 = 528482988;
  v7 = TM3_DRAFT_U8(a1 + 4u);
  v8 = TM3_DRAFT_U8(a1 + 5u);
  v9 = TM3_DRAFT_U8(a1 + 6u);
  v10 = TM3_DRAFT_U8(a1 + 7u);
  v11 = (uint32)(a2 + 8 * v7);
  v12 = (uint32)(a2 + 8 * v8);
  v13 = (uint32)(a2 + 8 * v9);
  v14 = TM3_DRAFT_I16(v11 + (1) * 2u);
  v15 = TM3_DRAFT_I16(v12 + (1) * 2u);
  v16 = TM3_DRAFT_I16(v11 + (2) * 2u) + TM3_DRAFT_I16(v12 + (2) * 2u);
  TM3_DRAFT_U16(0x1f8002acu) = (TM3_DRAFT_I16(v11) + TM3_DRAFT_I16(v12)) / 2;
  v17 = (uint32)(a2 + 8 * v10);
  TM3_DRAFT_U16(0x1f8002aeu) = (v14 + v15) / 2;
  TM3_DRAFT_U16(0x1f8002b0u) = v16 / 2;
  v18 = TM3_DRAFT_I16(v17 + (1) * 2u);
  v19 = TM3_DRAFT_I16(v13 + (1) * 2u);
  v20 = TM3_DRAFT_I16(v13 + (2) * 2u) + TM3_DRAFT_I16(v17 + (2) * 2u);
  TM3_DRAFT_I16(0x1f8002b4u) = (TM3_DRAFT_I16(v13) + TM3_DRAFT_I16(v17)) / 2;
  TM3_DRAFT_I16(0x1f8002b6u) = (v19 + v18) / 2;
  TM3_DRAFT_I16(0x1f8002b8u) = v20 / 2;
  TM3_DRAFT_U16(0x1f8002bcu) = (TM3_DRAFT_I16(0x1f8002acu) + TM3_DRAFT_I16(0x1f8002b4u)) / 2;
  TM3_DRAFT_U16(0x1f8002beu) = (TM3_DRAFT_I16(0x1f8002aeu) + TM3_DRAFT_I16(0x1f8002b6u)) / 2;
  TM3_DRAFT_U16(0x1f8002c0u) = (TM3_DRAFT_I16(0x1f8002b0u) + TM3_DRAFT_I16(0x1f8002b8u)) / 2;
  /* TODO GTE adapters */
  tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(0x1F8002ACu + 0u));
  tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(0x1F8002ACu + 4u));
  tm3_draft_gte_write_data(2u, TM3_DRAFT_U32(0x1F8002ACu + 8u));
  tm3_draft_gte_write_data(3u, TM3_DRAFT_U32(0x1F8002ACu + 12u));
  tm3_draft_gte_write_data(4u, TM3_DRAFT_U32(0x1F8002ACu + 16u));
  tm3_draft_gte_write_data(5u, TM3_DRAFT_U32(0x1F8002ACu + 20u));
  tm3_draft_gte_command(0x280030u);
  v21 = TM3_DRAFT_I16(v13 + (1) * 2u);
  v22 = TM3_DRAFT_I16(v11 + (1) * 2u);
  v23 = TM3_DRAFT_I16(v11 + (2) * 2u) + TM3_DRAFT_I16(v13 + (2) * 2u);
  TM3_DRAFT_U16(0x1f8002c4u) = (TM3_DRAFT_I16(v11) + TM3_DRAFT_I16(v13)) / 2;
  TM3_DRAFT_U16(0x1f8002c6u) = (v22 + v21) / 2;
  TM3_DRAFT_U16(0x1f8002c8u) = v23 / 2;
  v24 = TM3_DRAFT_I16(v17 + (1) * 2u);
  v25 = TM3_DRAFT_I16(v12 + (1) * 2u);
  v26 = TM3_DRAFT_I16(v12 + (2) * 2u) + TM3_DRAFT_I16(v17 + (2) * 2u);
  TM3_DRAFT_U16(0x1f8002ccu) = (TM3_DRAFT_I16(v12) + TM3_DRAFT_I16(v17)) / 2;
  TM3_DRAFT_U16(0x1f8002ceu) = (v25 + v24) / 2;
  TM3_DRAFT_U16(0x1f8002d0u) = v26 / 2;
  /* TODO GTE adapters */
  TM3_DRAFT_U32(0x1F8002F4u) = tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32(0x1F8002FCu) = tm3_draft_gte_read_data(13u);
  TM3_DRAFT_U32(0x1F800304u) = tm3_draft_gte_read_data(14u);
  ida_S6 = 528483012;
  /* TODO GTE adapters */
  tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(0x1F8002C4u + 0u));
  tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(0x1F8002C4u + 4u));
  tm3_draft_gte_write_data(2u, TM3_DRAFT_U32(0x1F8002C4u + 8u));
  tm3_draft_gte_write_data(3u, TM3_DRAFT_U32(0x1F8002C4u + 12u));
  tm3_draft_gte_command(0x280030u);
  v28 = (uint32)TM3_DRAFT_I32(a1 + (3) * 4u);
  TM3_DRAFT_U32(0x1f8002d4u) = TM3_DRAFT_U32(4 * v7 + 0x1F800000);
  TM3_DRAFT_U32(0x1f8002dcu) = TM3_DRAFT_U32(4 * v8 + 0x1F800000);
  TM3_DRAFT_U32(0x1f8002e4u) = TM3_DRAFT_U32(4 * v9 + 0x1F800000);
  TM3_DRAFT_U32(0x1f8002ecu) = TM3_DRAFT_U32(4 * v10 + 0x1F800000);
  /* TODO GTE adapters */
  TM3_DRAFT_U32(0x1F80030Cu) = tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32(0x1F800314u) = tm3_draft_gte_read_data(13u);
  v29 = 0;
  TM3_DRAFT_U16(0x1f8002d8u) = TM3_DRAFT_U16(v28);
  v30 = 0x8007BC74u;
  TM3_DRAFT_U16(0x1f8002e0u) = TM3_DRAFT_U16(v28 + (2) * 2u);
  TM3_DRAFT_U16(0x1f8002e8u) = TM3_DRAFT_U16(v28 + (4) * 2u);
  LOWORD(v26) = TM3_DRAFT_U16(v28 + (5) * 2u);
  TM3_DRAFT_U8(0x1f8002f8u) = (TM3_DRAFT_U8(0x1f8002d8u) + TM3_DRAFT_U8(0x1f8002e0u)) >> 1;
  TM3_DRAFT_U8(0x1f8002f9u) = (TM3_DRAFT_U8(0x1f8002d9u) + TM3_DRAFT_U8(0x1f8002e1u)) >> 1;
  TM3_DRAFT_U16(0x1f8002f0u) = (uint16)v26;
  TM3_DRAFT_U8(0x1f800310u) = (TM3_DRAFT_U8(0x1f8002d8u) + TM3_DRAFT_U8(0x1f8002e8u)) >> 1;
  TM3_DRAFT_U8(0x1f800311u) = (TM3_DRAFT_U8(0x1f8002d9u) + TM3_DRAFT_U8(0x1f8002e9u)) >> 1;
  TM3_DRAFT_U8(0x1f800300u) = (TM3_DRAFT_U8(0x1f8002e8u) + (uint8)v26) >> 1;
  TM3_DRAFT_U8(0x1f800301u) = (TM3_DRAFT_U8(0x1f8002e9u) + BYTE1(v26)) >> 1;
  TM3_DRAFT_U8(0x1f800308u) = (TM3_DRAFT_U8(0x1f8002f8u) + TM3_DRAFT_U8(0x1f800300u)) >> 1;
  TM3_DRAFT_U8(0x1f800309u) = (TM3_DRAFT_U8(0x1f8002f9u) + TM3_DRAFT_U8(0x1f800301u)) >> 1;
  TM3_DRAFT_U8(0x1f800318u) = (TM3_DRAFT_U8(0x1f8002e0u) + (uint8)v26) >> 1;
  v31 = BYTE1(v26);
  v32 = (uint32)(a3 + 14u);
  TM3_DRAFT_U8(0x1f800319u) = (TM3_DRAFT_U8(0x1f8002e1u) + v31) >> 1;
  v33 = TM3_DRAFT_I32(a1);
  do
  {
    v34 = TM3_DRAFT_I32(v30 + (3) * 4u);
    v35 = (uint32)(8 * TM3_DRAFT_I32(v30) + 528483028);
    v36 = 8 * TM3_DRAFT_I32(v30 + (1) * 4u) + 528483028;
    v37 = 8 * TM3_DRAFT_I32(v30 + (2) * 4u) + 528483028;
    TM3_DRAFT_U16(v32 -(1) * 2u) = TM3_DRAFT_U16(8 * TM3_DRAFT_I32(v30) + 0x1F8002D8);
    TM3_DRAFT_U16(v32 +(3) * 2u) = TM3_DRAFT_U16(v36 + 4);
    v38 = 8 * v34 + 528483028;
    TM3_DRAFT_U16(v32 +(7) * 2u) = TM3_DRAFT_U16(v37 + 4);
    TM3_DRAFT_U16(v32 +(11) * 2u) = TM3_DRAFT_U16(v38 + 4);
    TM3_DRAFT_U32(v32 - 6) = TM3_DRAFT_U32(v35);
    TM3_DRAFT_U32(v32 + 2) = TM3_DRAFT_U32(v36);
    TM3_DRAFT_U32(v32 + 10) = TM3_DRAFT_U32(v37);
    v39 = TM3_DRAFT_U32(v38);
    TM3_DRAFT_U32(v32 - 10) = v33;
    TM3_DRAFT_I8(v32 - 7) = 44;
    TM3_DRAFT_U32(v32 + 18) = v39;
    v30 += (4) * 4u;
    TM3_DRAFT_U16(v32 +(4) * 2u) = TM3_DRAFT_U16(v28 + (3) * 2u);
    ++v29;
    TM3_DRAFT_U16(v32) = TM3_DRAFT_U16(v28 + (1) * 2u);
    v32 += (40) * 1u;
    TM3_DRAFT_U32(a3) = TM3_DRAFT_U32(a4) & 0xFFFFFF | 0x9000000;
    TM3_DRAFT_U32(a4) = (unsigned int)a3 & 0xFFFFFF;
    a3 += (10) * 4u;
  }
  while ( v29 < 4 );
  v40 = 0;
  v41 = 0x8007BCB4u;
  v42 = (uint32)(a3 + 14u);
  do
  {
    v43 = (uint32)(8 * TM3_DRAFT_I32(v41) + 528483028);
    v44 = 8 * TM3_DRAFT_I32(v41 + (1) * 4u) + 528483028;
    v45 = 8 * TM3_DRAFT_I32(v41 + (2) * 4u);
    TM3_DRAFT_U16(v42 -(1) * 2u) = TM3_DRAFT_U16(8 * TM3_DRAFT_I32(v41) + 0x1F8002D8);
    TM3_DRAFT_U16(v42 +(3) * 2u) = TM3_DRAFT_U16(v44 + 4);
    TM3_DRAFT_U16(v42 +(7) * 2u) = TM3_DRAFT_U16(v45 + 528483032);
    TM3_DRAFT_U32(v42 - 6) = TM3_DRAFT_U32(v43);
    TM3_DRAFT_U32(v42 + 2) = TM3_DRAFT_U32(v44);
    v46 = TM3_DRAFT_U32(v45 + 528483028);
    TM3_DRAFT_U32(v42 - 10) = v33;
    TM3_DRAFT_I8(v42 - 7) = 36;
    TM3_DRAFT_U32(v42 + 10) = v46;
    ++v40;
    TM3_DRAFT_U16(v42 +(4) * 2u) = TM3_DRAFT_U16(v28 + (3) * 2u);
    v41 += (3) * 4u;
    TM3_DRAFT_U16(v42) = TM3_DRAFT_U16(v28 + (1) * 2u);
    v42 += (32) * 1u;
    TM3_DRAFT_U32(a3) = TM3_DRAFT_U32(a4) & 0xFFFFFF | 0x7000000;
    TM3_DRAFT_U32(a4) = (unsigned int)a3 & 0xFFFFFF;
    a3 += (8) * 4u;
  }
  while ( v40 < 4 );
  return a3;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001682C(uint32 a1, uint32 a2, uint32 a3)
{
  int v5; 
  int result; 
  sint16 v7; 
  int v8; 
  int v9; 
  sint16 v10; 
  int v11; 
  int v12; 
  sint16 v13; 
  uint32 v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  uint32 v19; 
  int v20; 
  int v21; 
  int v22; 
  uint16 v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  sint32 v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 

  if ( !TM3_DRAFT_U8(28 * a3 + dword_80089F00 + 11) )
    return 0;
  v5 = 28 * (sint16)a2;
  result = 0;
  if ( TM3_DRAFT_U8(v5 + dword_80089F00 + 11) )
  {
    v7 = TM3_DRAFT_U32(0x800896B4u + (0) * 4u);
    v8 = 4999;
    TM3_DRAFT_U16(v5 + dword_80089F00 + 14) = 0;
    LOWORD(TM3_DRAFT_U32(0x800896B4u + (0) * 4u)) = v7 + 1;
    TM3_DRAFT_U8(v5 + dword_80089F00 + 20) = 0;
    TM3_DRAFT_U16(v5 + dword_80089F00 + 18) = TM3_DRAFT_U32(0x800896B4u + (0) * 4u);
    TM3_DRAFT_U8(v5 + dword_80089F00 + 21) = 1;
    TM3_DRAFT_U16(v5 + dword_80089F00 + 22) = -1;
    TM3_DRAFT_U16(v5 + dword_80089F00 + 24) = -1;
    TM3_DRAFT_U16(v5 + dword_80089F00 + 26) = -1;
    while ( 1 )
    {
      if ( (a2 & 0x8000u) != 0 )
        return 0;
      v9 = TM3_DRAFT_I16(28 * (sint16)a2 + dword_80089F00 + 26);
      v10 = a2;
      a2 = v9;
      if ( v9 >= 0 )
        TM3_DRAFT_U16(28 * v9 + dword_80089F00 + 24) = -1;
      v11 = 28 * v10;
      TM3_DRAFT_U8(v11 + dword_80089F00 + 21) = 2;
      if ( v10 == a3 )
      {
        v12 = TM3_DRAFT_U8(v11 + dword_80089F00 + 20) + 1;
        v13 = v10;
        if ( v12 >= 101 )
          v12 = 100;
        if ( v10 >= 0 )
        {
          v14 = (uint32)(2 * (v12 - 1) + a1);
          do
          {
            TM3_DRAFT_U16((v14 -= 2u) + 2u) = v13;
            v13 = TM3_DRAFT_U16(28 * v13 + dword_80089F00 + 22);
          }
          while ( v13 >= 0 );
        }
        return v12;
      }
      v15 = TM3_DRAFT_U8(v11 + dword_80089F00 + 8) - 1;
      v16 = v8;
      if ( v15 < 0 )
        goto LABEL_42;
      v17 = 8 * v10;
      do
      {
        v18 = 4 * (v17 - v10);
        v19 = (uint32)(4 * v15 + TM3_DRAFT_U32(v18 + dword_80089F00 + 4));
        v20 = 28 * (sint16)TM3_DRAFT_U16(v19 + (1) * 2u);
        v21 = v20 + dword_80089F00;
        v22 = (uint16)TM3_DRAFT_U16(v19 + (1) * 2u);
        if ( !TM3_DRAFT_U8(v20 + dword_80089F00 + 11) )
          goto LABEL_40;
        v23 = TM3_DRAFT_U16(v18 + dword_80089F00 + 14) + TM3_DRAFT_U16(v19);
        if ( TM3_DRAFT_U16(v21 + 18) == LOWORD(TM3_DRAFT_U32(0x800896B4u + (0) * 4u)) )
        {
          v24 = TM3_DRAFT_U8(v21 + 21);
          if ( v24 != 1 )
          {
            v28 = a2 << 16;
            if ( v24 == 2 )
              goto LABEL_40;
            goto LABEL_29;
          }
          if ( v23 >= (unsigned int)TM3_DRAFT_U16(v21 + 14) )
            goto LABEL_40;
          TM3_DRAFT_U16(v21 + 22) = v10;
          TM3_DRAFT_U16(v20 + dword_80089F00 + 14) = v23;
          TM3_DRAFT_U8(v20 + dword_80089F00 + 20) = TM3_DRAFT_U8(v18 + dword_80089F00 + 20) + 1;
          v25 = TM3_DRAFT_I16(v20 + dword_80089F00 + 24);
          if ( v25 < 0 )
            a2 = -1;
          else
            TM3_DRAFT_U16(28 * v25 + dword_80089F00 + 26) = TM3_DRAFT_U16(v20 + dword_80089F00 + 26);
          v26 = 28 * (sint16)v22 + dword_80089F00;
          v27 = TM3_DRAFT_I16(v26 + 26);
          if ( v27 >= 0 )
            TM3_DRAFT_U16(28 * v27 + dword_80089F00 + 24) = TM3_DRAFT_U16(v26 + 24);
        }
        else
        {
          TM3_DRAFT_U16(v21 + 18) = TM3_DRAFT_U32(0x800896B4u + (0) * 4u);
          TM3_DRAFT_U16(v20 + dword_80089F00 + 14) = v23;
          TM3_DRAFT_U16(v20 + dword_80089F00 + 22) = v10;
          TM3_DRAFT_U8(v20 + dword_80089F00 + 20) = TM3_DRAFT_U8(v18 + dword_80089F00 + 20) + 1;
          TM3_DRAFT_U8(v20 + dword_80089F00 + 21) = 1;
        }
        v28 = a2 << 16;
LABEL_29:
        v29 = a2;
        if ( v28 >= 0 )
        {
          v31 = -1;
          v32 = 28 * (sint16)v22;
          v33 = v32 + dword_80089F00;
          while ( 1 )
          {
            v34 = 28 * (sint16)v29 + dword_80089F00;
            v35 = v31 << 16;
            if ( TM3_DRAFT_U16(v34 + 14) >= (unsigned int)TM3_DRAFT_U16(v32 + dword_80089F00 + 14) )
              break;
            v31 = v29;
            v29 = TM3_DRAFT_I16(v34 + 26);
            if ( v29 < 0 )
            {
              v35 = v31 << 16;
              break;
            }
          }
          v36 = v35 >> 16;
          v37 = v35 >> 16 < 0;
          v38 = 8 * (v35 >> 16);
          if ( v37 )
          {
            v41 = a2 << 16;
            TM3_DRAFT_U16(v33 + 26) = a2;
            a2 = v22;
            TM3_DRAFT_U16(v32 + dword_80089F00 + 24) = -1;
            TM3_DRAFT_U16(28 * (v41 >> 16) + dword_80089F00 + 24) = v22;
          }
          else
          {
            v39 = 4 * (v38 - v36);
            TM3_DRAFT_U16(v33 + 26) = TM3_DRAFT_U16(v39 + dword_80089F00 + 26);
            v40 = TM3_DRAFT_I16(v32 + dword_80089F00 + 26);
            if ( v40 >= 0 )
              TM3_DRAFT_U16(28 * v40 + dword_80089F00 + 24) = v22;
            TM3_DRAFT_U16(v39 + dword_80089F00 + 26) = v22;
            TM3_DRAFT_U16(v32 + dword_80089F00 + 24) = v31;
          }
        }
        else
        {
          v30 = 28 * (sint16)v22;
          TM3_DRAFT_U16(v30 + dword_80089F00 + 26) = -1;
          a2 = v22;
          TM3_DRAFT_U16(v30 + dword_80089F00 + 24) = -1;
        }
LABEL_40:
        --v15;
        v17 = 8 * v10;
      }
      while ( v15 >= 0 );
      v16 = v8;
LABEL_42:
      --v8;
      if ( v16 <= 0 )
        return 0;
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004AAD4(uint32 vehicle, uint32 projectile)
{
    FUNCTION_MARKER(0x8004AAD4u, "SCUS_942.49");
    if (TM3_DRAFT_U32(projectile + 24u) == vehicle) return 0u;
    sint32 inverse[8];
    sint16 delta[4];
    sint32 previous[6];
    sint32 current[6];
    sint32 intersection[4];
    sint16 point[4];
    uint32 flags;
    uint32 inverse_address = TM3_DRAFT_LOCAL_ADDRESS(inverse, sizeof(inverse));
    uint32 delta_address = TM3_DRAFT_LOCAL_ADDRESS(delta, sizeof(delta));
    uint32 previous_address = TM3_DRAFT_LOCAL_ADDRESS(previous, sizeof(previous));
    uint32 current_address = TM3_DRAFT_LOCAL_ADDRESS(current, sizeof(current));
    uint32 intersection_address = TM3_DRAFT_LOCAL_ADDRESS(intersection, sizeof(intersection));
    sub_8005C5B4(vehicle + 1536u, inverse_address);
    sub_8005BD24(inverse_address);
    for (uint32 axis = 0; axis < 3u; ++axis)
        delta[axis] = (sint16)((uint32)(sint32)TM3_DRAFT_I16(projectile + 8u + 2u * axis)
                            - TM3_DRAFT_U32(vehicle + 1556u + 4u * axis));
    sub_80013DC4(delta_address, current_address);
    for (uint32 axis = 0; axis < 3u; ++axis)
        delta[axis] = (sint16)((uint32)(sint32)TM3_DRAFT_I16(projectile + 2u * axis)
                            - TM3_DRAFT_U32(vehicle + 1556u + 4u * axis));
    sub_80013DC4(delta_address, previous_address);
    for (uint32 axis = 0; axis < 3u; ++axis) {
        previous[axis + 3u] = (sint32)((uint32)current[axis] - (uint32)previous[axis]);
        current[axis + 3u] = (sint32)((uint32)previous[axis] - (uint32)current[axis]);
    }
    for (uint32 face = 0; ; ++face) {
        uint32 plane = vehicle + 1024u + 76u * face;
        if ((sint32)sub_80014510(plane, previous_address, 0u, intersection_address) >= 0
            || (sint32)sub_80014510(plane, current_address, 0u, intersection_address) >= 0)
            break;
        sint32 *inside = 0;
        if (TM3_DRAFT_I16(vehicle + 936u) < previous[0] && previous[0] < TM3_DRAFT_I16(vehicle + 944u)
            && TM3_DRAFT_I16(vehicle + 940u) < previous[2] && previous[2] < TM3_DRAFT_I16(vehicle + 948u)
            && TM3_DRAFT_I16(vehicle + 938u) < previous[1] && previous[1] < TM3_DRAFT_I16(vehicle + 946u))
            inside = previous;
        else if (TM3_DRAFT_I16(vehicle + 936u) < current[0] && current[0] < TM3_DRAFT_I16(vehicle + 944u)
            && TM3_DRAFT_I16(vehicle + 940u) < current[2] && current[2] < TM3_DRAFT_I16(vehicle + 948u)
            && TM3_DRAFT_I16(vehicle + 938u) < current[1] && current[1] < TM3_DRAFT_I16(vehicle + 946u))
            inside = current;
        if (inside != 0) {
            for (uint32 axis = 0; axis < 3u; ++axis)
                intersection[axis] = (sint32)((uint32)inside[axis] << 12);
            break;
        }
        if (face >= 5u) return 0u;
    }
    for (uint32 axis = 0; axis < 3u; ++axis)
        point[axis] = (sint16)((sint32)((uint32)intersection[axis] + 2048u) >> 12);
    if (TM3_DRAFT_U32(projectile + 88u) != 0u) {
        uint32 old_distance = 0u;
        uint32 new_distance = 0u;
        for (uint32 axis = 0; axis < 3u; ++axis) {
            uint32 origin = (uint32)(sint32)TM3_DRAFT_I16(projectile + 2u * axis);
            uint32 old_delta = TM3_DRAFT_U32(projectile + 92u + 4u * axis) - origin;
            uint32 new_delta = (uint32)(sint32)point[axis] - origin;
            old_distance += old_delta * old_delta;
            new_distance += new_delta * new_delta;
        }
        if ((sint32)new_distance >= (sint32)old_distance) return 0u;
    }
    TM3_DRAFT_U32(projectile + 88u) = vehicle;
    sub_8005BD24(vehicle + 1536u);
    sub_8005BDB4(vehicle + 1536u);
    sub_8005C3C4(TM3_DRAFT_LOCAL_ADDRESS(point, sizeof(point)), projectile + 92u,
                TM3_DRAFT_LOCAL_ADDRESS(&flags, sizeof(flags)));
    if (TM3_DRAFT_I8(vehicle + 3328u) == 1)
        sub_80047364(TM3_DRAFT_U32(vehicle + 3924u), 15u);
    return 1u;
}
