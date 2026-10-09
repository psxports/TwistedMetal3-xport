#include "game_draft_signatures.h"

/* Unverified drafts, pending guest buffers and original ABI integration */
extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

extern uint32 tm3_draft_local_address(const void *pointer, uint32 bytes);
#define TM3_DRAFT_LOCAL_ADDRESS(pointer, bytes) tm3_draft_local_address((pointer), (bytes))
#define dword_8007EA14 TM3_DRAFT_U32(0x8007EA14u)
#define dword_8007EA10 TM3_DRAFT_U32(0x8007EA10u)
#define byte_8007F270 TM3_DRAFT_U8(0x8007F270u)
#define off_8007E894 TM3_DRAFT_U32(0x8007E894u)
#define word_80089E00 TM3_DRAFT_U16(0x80089E00u)
#define word_80089E02 TM3_DRAFT_U16(0x80089E02u)
#define dword_80089788 TM3_DRAFT_U32(0x80089788u)
#define off_8007E588 TM3_DRAFT_U32(0x8007E588u)
#define byte_8007F018 TM3_DRAFT_U8(0x8007F018u)
#define byte_8007F004 TM3_DRAFT_U8(0x8007F004u)
#define off_800897E4 TM3_DRAFT_U32(0x800897E4u)
#define off_8007E570 TM3_DRAFT_U32(0x8007E570u)
#define byte_8007F264 TM3_DRAFT_U8(0x8007F264u)
#define dword_8007E598 TM3_DRAFT_U32(0x8007E598u)
#define dword_8007E9E0 TM3_DRAFT_U32(0x8007E9E0u)
#define dword_8007E9D4 TM3_DRAFT_U32(0x8007E9D4u)

/* Unverified decompiler-derived draft */
uint32 sub_8003B2A0(uint32 a1, uint32 a2, uint32 a3)
{
    FUNCTION_MARKER(0x8003B2A0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v4; 
  uint32 v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  uint32 v16; 
  int v17; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
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
  int v37; 
  sint16 v38; 
  int v39; 
  int v40; 
  int v41; 
  uint32 v42; 
  uint32 v43; 
  uint32 v44; 
  int v45; 
  sint16 v46; 
  uint32 v47; 
  int v48; 
  uint32 v49; 
  int v50; 
  sint16 v51; 
  sint16 v52; 
  int v53; 
  unsigned int v54; 
  int v55; 
  unsigned int v56; 
  uint32 v57; 
  int v58; 
  uint32 v59; 
  sint16 v60; 
  int v61; 
  sint16 v62; 
  int v63; 
  uint32 v64; 
  int v65; 
  sint16 v66; 
  int v67; 
  int v68; 
  int v69; 
  sint16 v70; 
  int v71; 
  unsigned int v72; 
  uint32 v73; 
  int v74; 
  int v75; 
  sint16 v76; 
  sint16 v77; 
  sint16 v78; 
  sint16 v79; 
  int v80; 
  unsigned int v81; 
  sint16 v82; 
  sint16 v83; 
  sint16 v84; 
  sint16 v85; 
  sint16 v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  uint32 v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  int v99; 
  char v100; 
  int v101; 
  uint32 v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  sint32 v109; 
  int v111; 
  int v112; 
  uint32 v113; 
  char v114; 
  char v115; 
  char v116; 
  char v117; 
  char v118; 
  char v119; 
  char v120; 
  char v121; 
  char v122; 
  char v123; 
  char v124; 
  sint16 v125[16]; 
  char v126[16]; 
  char v127; 
  char v128[3]; 
  int v129; 
  int v130; 
  int v131; 
  int v132; 
  unsigned int v133; 
  int v134; 
  int v135; 
  int v136; 
  int v137; 
  int v138; 
  int v139; 

  v4 = 0;
  v129 = 0;
  v131 = 0;
  v132 = 0;
  v134 = 0;
  v138 = 0;
  v5 = TM3_DRAFT_LOCAL_ADDRESS(&v122, sizeof(v122));
  v6 = -2146624256;
  do
  {
    v7 = TM3_DRAFT_U32(v6 + 4);
    v8 = TM3_DRAFT_U32(v6 + 8);
    v9 = TM3_DRAFT_U32(v6 + 12);
    TM3_DRAFT_U32(v5) = TM3_DRAFT_U32(v6);
    TM3_DRAFT_U32(v5 + 1) = v7;
    TM3_DRAFT_U32(v5 + 2) = v8;
    TM3_DRAFT_U32(v5 + 3) = v9;
    v10 = TM3_DRAFT_U32(v6 + 20);
    TM3_DRAFT_U32(v5 + 4) = TM3_DRAFT_U32(v6 + 16);
    TM3_DRAFT_U32(v5 + 5) = v10;
    v5 += (24) * 1u;
    ++v4;
    v6 += 24;
  }
  while ( v4 < 8 );
  sub_8003E7D4();
  sub_800407B0();
  sub_800438D4();
  v133 = -1;
  if ( a3 )
    v133 = -2;
  do
  {
    sub_8003DCCC();
    sub_80057750(0);
    sub_8005FA24(2);
    dword_8007EA14 = 1;
    dword_8007EA10 = 2;
    sub_8003DF8C();
    v11 = sub_8003DB80(-2146915128);
    v12 = TM3_DRAFT_I16(v11 + 133880);
    v13 = 0;
    if ( !TM3_DRAFT_U32(0x800d2f2cu)
      && (TM3_DRAFT_U32(0x800d2e9cu) || TM3_DRAFT_U32(0x800d2f44u))
      && TM3_DRAFT_U32(0x800d2e90u) + TM3_DRAFT_U32(0x800d2f38u) < 2 )
    {
      v13 = 1;
    }
    v14 = TM3_DRAFT_I16(v11 + 133882) + 4 + v13 * ((uint8)byte_8007F270 + 4);
    if ( TM3_DRAFT_I32(TM3_DRAFT_U32(TM3_DRAFT_U32(0x8007E894u + (TM3_DRAFT_U32(0x800d2e88u) - 1u) * 4u)) + (0) * 4u) == 1 )
      v15 = v14 + 57;
    else
      v15 = v14 + 68;
    v16 = (TM3_DRAFT_U32(TM3_DRAFT_U32(0x8007E894u + (TM3_DRAFT_U32(0x800d2e88u) - 1u) * 4u)) + (18
                                                      * TM3_DRAFT_U32(4 * (TM3_DRAFT_U32(0x800d2e88u) - 1) - 2146619768 + 116)
                                                      + 4 * a2) * 4u);
    v136 = ((uint16)word_80089E00 - v12) / 2 + TM3_DRAFT_U16((v16 + (6) * 4u));
    if ( v136 < 8 )
      v136 = 8;
    if ( 312 - v12 < v136 )
      v136 = 312 - v12;
    v137 = ((uint16)word_80089E02 - v15) / 2 + TM3_DRAFT_U16((v16 + (7) * 4u));
    if ( v137 < 8 )
      v137 = 8;
    if ( 232 - v15 < v137 )
      v137 = 232 - v15;
    sub_8003EDC0((uint32)0x800D1D00, 8);
    if ( TM3_DRAFT_I8(24 * (TM3_DRAFT_U32(0x800d2e88u) - 1) - 2146624256 + 14) != -1 && TM3_DRAFT_U32(0x800d2e88u) > 0 )
    {
      v17 = 1;
      while ( v17++ < TM3_DRAFT_U32(0x800d2e88u) )
        ;
    }
    v19 = TM3_DRAFT_I8(0x80089788u + a2);
    v20 = TM3_DRAFT_I8(24 * a2 - 2146624256 + 14);
    v139 = 24 * a2 - 2146624256;
    if ( v19 != v20 )
    {
      v139 = 0;
      v21 = 0;
      if ( a2 > 0 )
      {
        v22 = -2146624256;
        do
        {
          if ( v19 == TM3_DRAFT_I8(v22 + 14) )
            v139 = v22;
          ++v21;
          v22 += 24;
        }
        while ( v21 < a2 );
      }
    }
    if ( v133 != -2 )
    {
      if ( TM3_DRAFT_U32(0x800d2f20u) == 2 )
        v129 += 409;
      else
        v129 += 273;
      v25 = sub_8005AF24(v129);
      v26 = v137 + TM3_DRAFT_I16(v11 + 133882) + 4;
      v130 = v25 / 2 + 4096;
      v135 = v136 + 20;
      if ( v132 == 1 )
      {
        if ( v139 )
        {
          if ( (TM3_DRAFT_U16(v139 + 8) & 0x40) != 0 )
          {
            sub_80040508(17, 0, 0x3FFF, 0x3FFFu);
            v132 = 0;
          }
          if ( (TM3_DRAFT_U16(v139 + 8) & 0x4000) != 0 )
          {
            sub_80040508(18, 0, 0x3FFF, 0x3FFFu);
            v53 = 108 * a2 - 2146624064;
            v54 = TM3_DRAFT_U32(v53 + 100) + 1;
            TM3_DRAFT_U32(v53 + 100) = v54;
            if ( v54 >= 4 )
              TM3_DRAFT_U32(v53 + 100) = 0;
          }
          if ( (TM3_DRAFT_U16(v139 + 8) & 0x1000) != 0 )
          {
            sub_80040508(18, 0, 0x3FFF, 0x3FFFu);
            v55 = 108 * a2 - 2146624064;
            v56 = TM3_DRAFT_U32(v55 + 100) - 1;
            TM3_DRAFT_U32(v55 + 100) = v56;
            if ( v56 >= 4 )
              TM3_DRAFT_U32(v55 + 100) = 3;
          }
          TM3_DRAFT_U32(144 * a2 - 2146619768 + 384) = TM3_DRAFT_U32(108 * a2 - 2146624064 + 100);
        }
        v57 = (uint32)(108 * a2 - 2146624064);
        TM3_DRAFT_U32(v57 + (24) * 4u) = 1;
        sub_8003F24C(v57, 24 * a2 - 2146624256);
        v58 = 0;
        v59 = off_8007E588;
        v60 = TM3_DRAFT_U16(v11 + 133882) + v137 + 50;
        TM3_DRAFT_U16(v11 + 133962) = v60;
        TM3_DRAFT_U16(v11 + 133954) = v60;
        do
        {
          if ( v58 == TM3_DRAFT_U32(v57 + (25) * 4u) )
          {
            v61 = v135;
            v62 = ((uint8)byte_8007F018 >> 1) + v26;
            TM3_DRAFT_U16(v11 + 133946) = v62;
            TM3_DRAFT_U16(v11 + 133938) = v62;
            TM3_DRAFT_U16(v11 + 133926) = v62;
            TM3_DRAFT_U16(v11 + 133918) = v62;
            sub_80049284(TM3_DRAFT_I8(v59), (int)0x8007F004u, v61, v26, v11, v11 + 88, 18, (170 * v130) >> 12, (170 * v130) >> 12, (uint32)((170 * v130) >> 12), 1, 1);
            sub_80049284(TM3_DRAFT_I8(v59), (int)0x8007F004u, v135 - 1, v26 - 1, v11, v11 + 88, 2, 0, 0, 0);
          }
          else
          {
            sub_80049284(TM3_DRAFT_I8(v59), (int)0x8007F004u, v135, v26, v11, v11 + 88, 0);
          }
          v26 += 11;
          ++v58;
          (v59 += 1u);
        }
        while ( v58 < 4 );
        goto LABEL_182;
      }
      if ( v132 >= 2 )
      {
        if ( v132 == 2 )
        {
          if ( v139 )
          {
            if ( (TM3_DRAFT_U16(v139 + 8) & 0x40) != 0 )
            {
              sub_80040508(17, 0, 0x3FFF, 0x3FFFu);
              if ( v134 )
                v132 = 0;
              else
                v133 = v131;
            }
            else if ( (TM3_DRAFT_U16(v139 + 8) & 0x5000) != 0 )
            {
              sub_80040508(18, 0, 0x3FFF, 0x3FFFu);
              v134 ^= 1u;
            }
          }
          v63 = 0;
          v64 = (uint32)off_800897E4;
          v65 = v136 + TM3_DRAFT_I16(v11 + 133880) / 2;
          v66 = TM3_DRAFT_U16(v11 + 133882) + v137 + 61;
          TM3_DRAFT_U16(v11 + 133962) = v66;
          TM3_DRAFT_U16(v11 + 133954) = v66;
          sub_80049284(0x800897F4u, (int)0x8007F004u, v65, v26, v11, v11 + 88, 22, 96, 96, (uint32)0x80, 1, 1);
          v67 = v26 + 11;
          v68 = v26 + 33;
          sub_80049284(TM3_DRAFT_U32(0x8007E570u + (v131) * 4u), (int)0x8007F004u, v136 + TM3_DRAFT_I16(v11 + 133880) / 2, v67, v11, v11 + 88, 22, 96, 96, (uint32)0x80, 1, 1);
          do
          {
            if ( v63 == v134 )
            {
              v69 = v135;
              v70 = ((uint8)byte_8007F018 >> 1) + v68;
              TM3_DRAFT_U16(v11 + 133946) = v70;
              TM3_DRAFT_U16(v11 + 133938) = v70;
              TM3_DRAFT_U16(v11 + 133926) = v70;
              TM3_DRAFT_U16(v11 + 133918) = v70;
              sub_80049284(TM3_DRAFT_I8(v64), (int)0x8007F004u, v69, v68, v11, v11 + 88, 18, (170 * v130) >> 12, (170 * v130) >> 12, (uint32)((170 * v130) >> 12), 1, 1);
              sub_80049284(TM3_DRAFT_I8(v64), (int)0x8007F004u, v135 - 1, v68 - 1, v11, v11 + 88, 2, 0, 0, 0);
            }
            else
            {
              sub_80049284(TM3_DRAFT_I8(v64), (int)0x8007F004u, v135, v68, v11, v11 + 88, 0);
            }
            v68 += 11;
            ++v63;
            (v64 += 1u);
          }
          while ( v63 < 2 );
        }
        goto LABEL_182;
      }
      if ( v132 )
      {
LABEL_182:
        v71 = TM3_DRAFT_U32(v11 + 133864);
        TM3_DRAFT_U16(v11 + 133872) = v136;
        TM3_DRAFT_U16(v11 + 133874) = v137;
        TM3_DRAFT_U32(v11 + 133864) = v71 & 0xFF000000 | TM3_DRAFT_U32(v11 + 88) & 0xFFFFFF;
        v72 = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | (v11 + 133864) & 0xFFFFFF;
        TM3_DRAFT_U32(v11 + 88) = v72;
        TM3_DRAFT_U32(v11 + 133884) = TM3_DRAFT_U32(v11 + 133884) & 0xFF000000 | v72 & 0xFFFFFF;
        TM3_DRAFT_U32(v11 + 88) = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | (v11 + 133884) & 0xFFFFFF;
        if ( v139 )
        {
          if ( v132 || (unsigned int)(v131 - 2) >= 3 )
          {
            if ( TM3_DRAFT_U8(v139 + 13) == 1 )
              v73 = 0x80089804u;
            else
              v73 = 0x80089808u;
          }
          else
          {
            v73 = 0x80089800u;
          }
          sub_80049284(v73, (int)0x8007F264u, v136 + 2, TM3_DRAFT_I16(v11 + 133918) - ((uint8)byte_8007F270 >> 1), v11, v11 + 88, 0);
        }
        else
        {
          sub_80049284(0x800897FCu, (int)0x8007F004u, v136 + 5, TM3_DRAFT_I16(v11 + 133918) - ((uint8)byte_8007F018 >> 1), v11, v11 + 88, 18, 255, 255, 0, 1, 1);
        }
        v74 = 0;
        v75 = 133964;
        v76 = v136;
        v77 = v136 + 1;
        v78 = TM3_DRAFT_U16(v11 + 133880) + v136 - 1;
        v79 = TM3_DRAFT_U16(v11 + 133874) + TM3_DRAFT_U16(v11 + 133882);
        TM3_DRAFT_U16(v11 + 133910) = v79;
        TM3_DRAFT_U16(v11 + 133902) = v79;
        v80 = TM3_DRAFT_U32(v11 + 133892);
        TM3_DRAFT_U16(v11 + 133952) = v77;
        TM3_DRAFT_U16(v11 + 133936) = v77;
        TM3_DRAFT_U16(v11 + 133916) = v77;
        TM3_DRAFT_U16(v11 + 133900) = v77;
        TM3_DRAFT_U16(v11 + 133960) = v78;
        TM3_DRAFT_U16(v11 + 133944) = v78;
        TM3_DRAFT_U16(v11 + 133924) = v78;
        TM3_DRAFT_U16(v11 + 133908) = v78;
        TM3_DRAFT_U32(v11 + 133892) = v80 & 0xFF000000 | TM3_DRAFT_U32(v11 + 88) & 0xFFFFFF;
        v81 = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | (v11 + 133892) & 0xFFFFFF;
        TM3_DRAFT_U32(v11 + 88) = v81;
        TM3_DRAFT_U32(v11 + 133928) = TM3_DRAFT_U32(v11 + 133928) & 0xFF000000 | v81 & 0xFFFFFF;
        TM3_DRAFT_U32(v11 + 88) = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | (v11 + 133928) & 0xFFFFFF;
        LOWORD(v81) = TM3_DRAFT_U16(v11 + 133880);
        v82 = TM3_DRAFT_U16(v11 + 133874) + TM3_DRAFT_U16(v11 + 133882);
        TM3_DRAFT_U16(v11 + 133972) = v136;
        TM3_DRAFT_U16(v11 + 133974) = v82;
        v83 = TM3_DRAFT_U16(v11 + 133954);
        v84 = TM3_DRAFT_U16(v11 + 133902);
        TM3_DRAFT_U16(v11 + 133988) = v81 + v76 - 1;
        LOWORD(v81) = TM3_DRAFT_U16(v11 + 133974);
        v85 = v83 - v84 + 1;
        TM3_DRAFT_U16(v11 + 133978) = v85;
        TM3_DRAFT_U16(v11 + 133990) = v81;
        TM3_DRAFT_U16(v11 + 133994) = v85;
        v86 = TM3_DRAFT_U16(v11 + 133954);
        v87 = v11;
        TM3_DRAFT_U16(v11 + 134004) = v77;
        TM3_DRAFT_U16(v11 + 134006) = v86;
        do
        {
          v88 = v11 + v75;
          v75 += 16;
          ++v74;
          TM3_DRAFT_U32(v87 + 133964) = TM3_DRAFT_U32(v87 + 133964) & 0xFF000000 | TM3_DRAFT_U32(v11 + 88) & 0xFFFFFF;
          TM3_DRAFT_U32(v11 + 88) = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | v88 & 0xFFFFFF;
          v87 += 16;
        }
        while ( v74 < 3 );
        goto LABEL_193;
      }
      if ( !v139 )
        goto LABEL_113;
      if ( (TM3_DRAFT_U16(v139 + 8) & 0x40) == 0 )
      {
        v28 = 0;
        if ( (TM3_DRAFT_U16(v139 + 8) & 0x4000) != 0 )
        {
          v28 = 1;
        }
        else if ( (TM3_DRAFT_U16(v139 + 8) & 0x1000) != 0 )
        {
          v28 = -1;
        }
        while ( 1 )
        {
          v131 += v28;
          if ( v131 >= 0 )
          {
            if ( v131 >= 6 )
              v131 = 0;
          }
          else
          {
            v131 = 5;
          }
          v29 = v131;
          if ( v131 != 2 )
            break;
          if ( TM3_DRAFT_I32(TM3_DRAFT_U32(TM3_DRAFT_U32(0x8007E894u + (TM3_DRAFT_U32(0x800d2e88u) - 1u) * 4u)) + (0) * 4u) != 1 )
            goto LABEL_72;
        }
LABEL_85:
        if ( v29 == 3 )
        {
          if ( (TM3_DRAFT_U16(v139) & 0x2000) != 0 && TM3_DRAFT_U32(0x800d2ee8u) < 16 )
            ++TM3_DRAFT_U32(0x800d2ee8u);
          if ( (TM3_DRAFT_U16(v139) & 0x8000) != 0 && TM3_DRAFT_U32(0x800d2ee8u) > 0 )
            --TM3_DRAFT_U32(0x800d2ee8u);
        }
        if ( v131 == 4 )
        {
          if ( (TM3_DRAFT_U16(v139) & 0x2000) != 0 && TM3_DRAFT_U32(0x800d2eecu) < 16 )
            ++TM3_DRAFT_U32(0x800d2eecu);
          if ( (TM3_DRAFT_U16(v139) & 0x8000) != 0 && TM3_DRAFT_U32(0x800d2eecu) > 0 )
            --TM3_DRAFT_U32(0x800d2eecu);
          if ( v138 != 4 )
            sub_800438B4();
          sub_800408A4(TM3_DRAFT_U32(0x800d2eecu));
        }
        else
        {
          sub_800438D4();
        }
        sub_80040898(TM3_DRAFT_U32(0x800d2ee8u));
        if ( v131 == 3 )
        {
          v35 = 2;
          if ( v138 == 3 )
          {
            sub_80040710(0, 5119, 5119);
            goto LABEL_110;
          }
          v36 = 5119;
        }
        else
        {
          v35 = 18;
          if ( v138 == v131 )
            goto LABEL_110;
          v36 = 0x3FFF;
        }
        sub_80040508(v35, 0, v36, 0x3FFFu);
LABEL_110:
        if ( v138 == 3 )
        {
          v37 = v11 + 0x20000;
          if ( v131 == 3 )
            goto LABEL_114;
          sub_80040804(0);
        }
LABEL_113:
        v37 = v11 + 0x20000;
LABEL_114:
        v38 = v137 + v15;
        TM3_DRAFT_U16(v37 + 2890) = v137 + v15;
        TM3_DRAFT_U16(v37 + 2882) = v38;
        v138 = v131;
        if ( !TM3_DRAFT_U32(0x800d2f2cu) )
        {
          v39 = TM3_DRAFT_U32(0x800d2e9cu);
          if ( !TM3_DRAFT_U32(0x800d2e9cu) )
          {
            v40 = 0;
            if ( !TM3_DRAFT_U32(0x800d2f44u) )
              goto LABEL_128;
          }
          v40 = 0;
          if ( TM3_DRAFT_U32(0x800d2e90u) + TM3_DRAFT_U32(0x800d2f38u) >= 2 )
            goto LABEL_128;
          v41 = v11 + 88;
          if ( !v139 )
            goto LABEL_129;
          if ( TM3_DRAFT_U32(0x800d2f44u) )
            v39 = TM3_DRAFT_U32(0x800d2e9cu) + 1;
          sub_800512BC(TM3_DRAFT_U32(0x800d2f10u), v39, TM3_DRAFT_U32(0x800d2ea0u), v125);
          v126[0] = 0;
          if ( v125[0] )
          {
            v42 = (uint32)v125;
            do
            {
              v43 = (uint32)sub_8004F78C(TM3_DRAFT_U16(v42), TM3_DRAFT_U8(v139 + 13));
              if ( v43 )
                sub_800566D4(v126, v43);
              (v42 += 2u);
            }
            while ( TM3_DRAFT_U16(v42) );
          }
          sub_80049284(v126, (int)0x8007F264u, v136 + v12 / 2 + 1, v26, v11, v11 + 88, 4);
          v26 += 4 + (uint8)byte_8007F270;
        }
        v40 = 0;
LABEL_128:
        v41 = v11 + 88;
LABEL_129:
        v44 = off_8007E570;
        do
        {
          if ( v40 != 2 || TM3_DRAFT_I32(TM3_DRAFT_U32(TM3_DRAFT_U32(0x8007E894u + (TM3_DRAFT_U32(0x800d2e88u) - 1u) * 4u)) + (0) * 4u) != 1 )
          {
            if ( v40 == v131 )
            {
              if ( v40 == 3 )
              {
                TM3_DRAFT_U32(v11 + 134012) = TM3_DRAFT_U32(v11 + 134012) & 0xFF000000 | TM3_DRAFT_U32(v11 + 88) & 0xFFFFFF;
                TM3_DRAFT_U32(v11 + 88) = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | (v11 + 134012) & 0xFFFFFF;
              }
              if ( v40 == 4 )
              {
                TM3_DRAFT_U32(v11 + 134048) = TM3_DRAFT_U32(v11 + 134048) & 0xFF000000 | TM3_DRAFT_U32(v11 + 88) & 0xFFFFFF;
                TM3_DRAFT_U32(v11 + 88) = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | (v11 + 134048) & 0xFFFFFF;
              }
              v45 = v135;
              v46 = ((uint8)byte_8007F018 >> 1) + v26;
              TM3_DRAFT_U16(v11 + 133946) = v46;
              TM3_DRAFT_U16(v11 + 133938) = v46;
              TM3_DRAFT_U16(v11 + 133926) = v46;
              TM3_DRAFT_U16(v11 + 133918) = v46;
              sub_80049284(TM3_DRAFT_I8(v44), (int)0x8007F004u, v45, v26, v11, v41, 18, (170 * v130) >> 12, (170 * v130) >> 12, (uint32)((170 * v130) >> 12), 1, 1);
              sub_80049284(TM3_DRAFT_I8(v44), (int)0x8007F004u, v135 - 1, v26 - 1, v11, v41, 2, 0, 0, 0);
            }
            else
            {
              sub_80049284(TM3_DRAFT_I8(v44), (int)0x8007F004u, v135, v26, v11, v41, 0);
              if ( v40 == 3 )
              {
                TM3_DRAFT_U32(v11 + 134012) = TM3_DRAFT_U32(v11 + 134012) & 0xFF000000 | TM3_DRAFT_U32(v11 + 88) & 0xFFFFFF;
                TM3_DRAFT_U32(v11 + 88) = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | (v11 + 134012) & 0xFFFFFF;
              }
              if ( v40 == 4 )
              {
                TM3_DRAFT_U32(v11 + 134048) = TM3_DRAFT_U32(v11 + 134048) & 0xFF000000 | TM3_DRAFT_U32(v11 + 88) & 0xFFFFFF;
                TM3_DRAFT_U32(v11 + 88) = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | (v11 + 134048) & 0xFFFFFF;
              }
            }
            if ( v40 == 3 )
              TM3_DRAFT_U16(v11 + 134022) = v26 + 2;
            if ( v40 == 4 )
              TM3_DRAFT_U16(v11 + 134058) = v26 + 2;
            v26 += 11;
          }
          ++v40;
          (v44 += 1u);
        }
        while ( v40 < 6 );
        v47 = (uint32)v11;
        do
        {
          TM3_DRAFT_U16(v47 + (67018) * 2u) = v135;
          TM3_DRAFT_U16(v47 + (67010) * 2u) = v135;
          TM3_DRAFT_U16(v47 + (67014) * 2u) = v135;
          if ( v47 == (uint32)v11 )
            v48 = TM3_DRAFT_U32(0x800d2ee8u);
          else
            v48 = TM3_DRAFT_U32(0x800d2eecu);
          v49 = (v47 + (0x10000) * 2u);
          v50 = (v12 - ((sint16)TM3_DRAFT_U16(v47 + (67010) * 2u) - v136 + 8)) * v48;
          v47 += (18) * 2u;
          v51 = TM3_DRAFT_U16(v49 + (1475) * 2u);
          v52 = TM3_DRAFT_U16(v49 + (1478) * 2u) + v50 / 16;
          TM3_DRAFT_U16(v49 + (1478) * 2u) = v52;
          TM3_DRAFT_U16(v49 + (1486) * 2u) = v52;
          TM3_DRAFT_U16(v49 + (1479) * 2u) = v51;
          TM3_DRAFT_U16(v49 + (1487) * 2u) = v51 + 4;
          TM3_DRAFT_U16(v49 + (1483) * 2u) = v51 + 4;
        }
        while ( (int)v47 < v11 + 72 );
        goto LABEL_182;
      }
      if ( (unsigned int)(v131 - 3) >= 2 )
        sub_80040508(17, 0, 0x3FFF, 0x3FFFu);
      if ( v131 == 1 )
      {
        v132 = 1;
      }
      else if ( v131 >= 2 )
      {
        v27 = v131;
        if ( v131 != 5 )
          goto LABEL_73;
        v132 = 2;
        v134 = 1;
      }
      else if ( !v131 )
      {
        v133 = 0;
      }
LABEL_72:
      v27 = v131;
LABEL_73:
      if ( v27 == 2 )
      {
        v30 = 0;
        if ( (TM3_DRAFT_U16(v139 + 8) & 0x8000) != 0 )
        {
          v30 = -1;
        }
        else if ( (TM3_DRAFT_U16(v139 + 8) & 0x2000) != 0 )
        {
          v30 = 1;
        }
        if ( v30 )
        {
          TM3_DRAFT_U32(4 * (TM3_DRAFT_U32(0x800d2e88u) - 1) - 2146619768 + 116) += v30;
          v31 = 4 * (TM3_DRAFT_U32(0x800d2e88u) - 1);
          v32 = v31 - 2146619768;
          v33 = TM3_DRAFT_U32(v31 - 2146619768 + 116);
          v34 = (**(int (**)[19])((uint32)0x8007E894u + v31))[0] - 1;
          if ( v34 >= v33 )
          {
            if ( v33 < 0 )
              TM3_DRAFT_U32(v32 + 116) = v34;
          }
          else
          {
            TM3_DRAFT_U32(v32 + 116) = 0;
          }
          TM3_DRAFT_U32(4 * (TM3_DRAFT_U32(0x800d2e88u) - 1) - 2146621256 + 116) = TM3_DRAFT_U32(4 * (TM3_DRAFT_U32(0x800d2e88u) - 1)
                                                                                   - 2146619768
                                                                                   + 116);
          sub_80057750(0);
          sub_8003CD8C(-2146915128);
          sub_8003D0A8(-2146915128);
          sub_8003D0A8(-2146769840);
        }
      }
      v29 = v131;
      goto LABEL_85;
    }
    sub_80049284(0x800881DCu, (int)0x8007F004u, 160, 120, v11, v11 + 88, 20, 3, 2);
    v23 = 0;
    if ( TM3_DRAFT_U32(0x800d2e88u) > 0 )
    {
      v24 = -2146624256;
      while ( (TM3_DRAFT_U16(v24 + 8) & 0x800) == 0
           && TM3_DRAFT_I8(0x80089788u + v23) == TM3_DRAFT_I8(v24 + 14)
           && TM3_DRAFT_U32(v24 + 20) < 0xAu )
      {
        ++v23;
        v24 += 24;
        if ( v23 >= TM3_DRAFT_U32(0x800d2e88u) )
          goto LABEL_193;
      }
      a2 = v23;
      v133 = -1;
    }
LABEL_193:
    v89 = sub_8003DC9C();
    TM3_DRAFT_U32(v89 + 133800) = TM3_DRAFT_U32(v89 + 133800) & 0xFF000000 | TM3_DRAFT_U32(v11 + 88) & 0xFFFFFF;
    TM3_DRAFT_U32(v11 + 88) = TM3_DRAFT_U32(v11 + 88) & 0xFF000000 | (sub_8003DC9C() + 133800) & 0xFFFFFF;
    if ( TM3_DRAFT_U32(0x800d2e8cu) && TM3_DRAFT_U32(0x800d2f18u) == 3 )
    {
      v127 = v133;
      if ( sub_80047630(TM3_DRAFT_LOCAL_ADDRESS(&v127, sizeof(v127)), 1u, v128, 1u) )
      {
        if ( v127 == -1 )
        {
          v127 = 1;
        }
        else if ( v127 >= 0 )
        {
          if ( v127 )
          {
            if ( v127 == 5 )
              v127 = 3;
          }
          else
          {
            v127 = 2;
          }
        }
        else if ( v127 == -2 )
        {
          v127 = 0;
        }
        if ( v128[0] == -1 )
        {
          v128[0] = 1;
        }
        else if ( v128[0] >= 0 )
        {
          if ( v128[0] )
          {
            if ( v128[0] == 5 )
              v128[0] = 3;
          }
          else
          {
            v128[0] = 2;
          }
        }
        else if ( v128[0] == -2 )
        {
          v128[0] = 0;
        }
        v133 = TM3_DRAFT_I8(dword_8007E598 + 5 * v127 + v128[0]);
      }
      else if ( v133 != 5 )
      {
        v133 = -1;
      }
    }
  }
  while ( v133 >= 0xFFFFFFFE );
  TM3_DRAFT_I32(a1) = v11;
  sub_800407B0();
  sub_800438B4();
  sub_8003EDC0((uint32)0x800D1D00, 8);
  v90 = 0;
  if ( TM3_DRAFT_I8(24 * (TM3_DRAFT_U32(0x800d2e88u) - 1) - 2146624256 + 14) == -1 )
  {
    v101 = -2146624256;
    v102 = TM3_DRAFT_LOCAL_ADDRESS(&v122, sizeof(v122));
    do
    {
      v103 = TM3_DRAFT_U32(v102 + 1);
      v104 = TM3_DRAFT_U32(v102 + 2);
      v105 = TM3_DRAFT_U32(v102 + 3);
      TM3_DRAFT_U32(v101) = TM3_DRAFT_U32(v102);
      TM3_DRAFT_U32(v101 + 4) = v103;
      TM3_DRAFT_U32(v101 + 8) = v104;
      TM3_DRAFT_U32(v101 + 12) = v105;
      v106 = TM3_DRAFT_U32(v102 + 5);
      TM3_DRAFT_U32(v101 + 16) = TM3_DRAFT_U32(v102 + 4);
      TM3_DRAFT_U32(v101 + 20) = v106;
      v101 += 24;
      ++v90;
      v102 += (24) * 1u;
    }
    while ( v90 < 8 );
  }
  else
  {
    v91 = -2146624256;
    if ( TM3_DRAFT_U32(0x800d2e88u) > 0 )
    {
      do
      {
        TM3_DRAFT_U8(0x80089788u + v90++) = TM3_DRAFT_U8(v91 + 14);
        v91 += 24;
      }
      while ( v90 < TM3_DRAFT_U32(0x800d2e88u) );
      v90 = 0;
    }
    v92 = -2146624256;
    v93 = TM3_DRAFT_LOCAL_ADDRESS(&v122, sizeof(v122));
    do
    {
      v94 = TM3_DRAFT_U32(v93 + 1);
      v95 = TM3_DRAFT_U32(v93 + 2);
      v96 = TM3_DRAFT_U32(v93 + 3);
      TM3_DRAFT_U32(v92) = TM3_DRAFT_U32(v93);
      TM3_DRAFT_U32(v92 + 4) = v94;
      TM3_DRAFT_U32(v92 + 8) = v95;
      TM3_DRAFT_U32(v92 + 12) = v96;
      v97 = TM3_DRAFT_U32(v93 + 5);
      TM3_DRAFT_U32(v92 + 16) = TM3_DRAFT_U32(v93 + 4);
      TM3_DRAFT_U32(v92 + 20) = v97;
      v92 += 24;
      ++v90;
      v93 += (24) * 1u;
    }
    while ( v90 < 8 );
    v98 = 0;
    if ( TM3_DRAFT_U32(0x800d2e88u) > 0 )
    {
      v99 = -2146624256;
      do
      {
        v100 = TM3_DRAFT_U8(0x80089788u + v98++);
        TM3_DRAFT_U8(v99 + 14) = v100;
        v99 += 24;
      }
      while ( v98 < TM3_DRAFT_U32(0x800d2e88u) );
    }
  }
  v107 = 0;
  if ( TM3_DRAFT_U32(0x800d2e88u) > 0 )
  {
    v108 = -2146619768;
    do
    {
      v109 = 0;
      if ( TM3_DRAFT_U32(0x800d2f18u) == 3 )
        v109 = TM3_DRAFT_U32(v108 + 376) != 0;
      sub_8003E728(v107++, v109);
      v108 += 144;
    }
    while ( v107 < TM3_DRAFT_U32(0x800d2e88u) );
  }
  return v133;
}

/* Unverified decompiler-derived draft */
uint32 sub_8003F24C(uint32 a1, uint32 a2)
{
  union { uint64 align; uint8 bytes[0x150u]; } native_local_storage;
  uint8 *native_locals = native_local_storage.bytes;
  /* Original adjacent local buffers share one native storage area */
#define v112 (*((int *)(native_locals + 0x10u)))
#define v113 (*((int *)(native_locals + 0x14u)))
#define v114 (*((int *)(native_locals + 0x18u)))
#define v115 (*((int *)(native_locals + 0x20u)))
#define v116 (*((sint16 *)(native_locals + 0x24u)))
#define v117 ((int *)(native_locals + 0x28u))
#define v118 ((sint16 *)(native_locals + 0x48u))
#define v120 (*((int *)(native_locals + 0x58u)))
#define v121 (*((int *)(native_locals + 0x5Cu)))
#define v122 (*((int *)(native_locals + 0x60u)))
#define v123 (*((int *)(native_locals + 0x74u)))
#define v124 (*((uint16 *)(native_locals + 0x78u)))
#define v125 (*((sint16 *)(native_locals + 0x7Au)))
#define v126 (*((sint16 *)(native_locals + 0x7Cu)))
#define v127 (*((sint16 *)(native_locals + 0x80u)))
#define v128 (*((sint16 *)(native_locals + 0x82u)))
#define v129 (*((sint16 *)(native_locals + 0x84u)))
#define v130 ((int *)(native_locals + 0x88u))
#define v131 (*((sint16 *)(native_locals + 0x94u)))
#define v132 (*((sint16 *)(native_locals + 0x96u)))
#define v133 (*((sint16 *)(native_locals + 0x98u)))
#define v134 (*((sint16 *)(native_locals + 0x9Au)))
#define v135 (*((sint16 *)(native_locals + 0x9Cu)))
#define v136 (*((sint16 *)(native_locals + 0x9Eu)))
#define v137 (*((sint16 *)(native_locals + 0xA0u)))
#define v138 (*((sint16 *)(native_locals + 0xA2u)))
#define v139 (*((sint16 *)(native_locals + 0xA4u)))
#define v140 (*((sint16 *)(native_locals + 0xA6u)))
#define v141 (*((sint16 *)(native_locals + 0xA8u)))
#define v142 (*((sint16 *)(native_locals + 0xAAu)))
#define v143 (*((sint16 *)(native_locals + 0xB2u)))
#define v144 (*((sint16 *)(native_locals + 0xB4u)))
#define v145 (*((sint16 *)(native_locals + 0xB6u)))
#define v146 (*((sint16 *)(native_locals + 0xB8u)))
#define v147 (*((sint16 *)(native_locals + 0xBAu)))
#define v148 (*((sint16 *)(native_locals + 0xBCu)))
#define v149 (*((sint16 *)(native_locals + 0xBEu)))
#define v150 (*((sint16 *)(native_locals + 0xC0u)))
#define v151 ((int *)(native_locals + 0xD8u))
#define v152 ((int *)(native_locals + 0xE8u))
#define v153 ((int *)(native_locals + 0x108u))
#define v154 ((int *)(native_locals + 0x118u))
    FUNCTION_MARKER(0x8003F24Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v3; 
  int v4; 
  int v6; 
  int v7; 
  uint16 v8; 
  unsigned int v9; 
  sint32 v10; 
  sint16 v11; 
  int v12; 
  int v13; 
  int v14; 
  sint16 v15; 
  sint16 v16; 
  int v17; 
  int v18; 
  sint16 v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  unsigned int v27; 
  int v28; 
  int v29; 
  sint32 v30; 
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
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  uint32 v67; 
  uint32 v68; 
  uint32 v69; 
  sint16 v70; 
  sint16 v71; 
  sint16 v72; 
  sint16 v73; 
  int v74; 
  int v75; 
  int v76; 
  uint32 v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  uint32 v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  sint16 v87; 
  sint16 v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  sint16 v98; 
  int v99; 
  sint16 v100; 
  int v101; 
  uint32 v102; 
  uint32 v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  int v108; 
  sint16 v109; 
  int v110; 


  #define v119 ((uint16 *)(native_locals + 0x50u)) 



  v3 = a1;
  v4 = TM3_DRAFT_U32(a1 + (26) * 4u);
  if ( v4 )
  {
    v6 = TM3_DRAFT_U32(a1 + (13) * 4u);
    v7 = TM3_DRAFT_U32(a1 + (14) * 4u);
    TM3_DRAFT_U32(v3 + (9) * 4u) = TM3_DRAFT_U32(v3 + (12) * 4u);
    TM3_DRAFT_U32(v3 + (10) * 4u) = v6;
    TM3_DRAFT_U32(v3 + (11) * 4u) = v7;
    v8 = TM3_DRAFT_U16(0x800D2FA4u + 38u * TM3_DRAFT_U8(a2 + 13u) + 144u * (uint32)((sint32)((a2 - 0x800D1D00u) * 0xAAAAAAABu) >> 3));
    if ( (TM3_DRAFT_U16(a2) & v8) == 0 || TM3_DRAFT_U32(0x800d2f20u) )
    {
      v9 = TM3_DRAFT_U32(v3 + (25) * 4u);
      v10 = v9 < 5;
    }
    else
    {
      v9 = TM3_DRAFT_U32(v3 + (25) * 4u);
      v10 = v9 < 5;
      if ( v9 != 5 )
      {
        if ( v9 )
        {
          if ( v9 < 4 )
          {
            v11 = TM3_DRAFT_U16(v4 + 1552);
            v115 = TM3_DRAFT_U16(v4 + 1540);
            v116 = v11;
            sub_8005B284(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u));
            sub_80014080((int)((v3 + (12) * 4u)), TM3_DRAFT_I16(0x8007E9E0u + 2u * TM3_DRAFT_U32(v3 + (25) * 4u)), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u), v4 + 1580);
            TM3_DRAFT_U32(v3 + (13) * 4u) -= 192;
            v12 = TM3_DRAFT_U32(v4 + 1584);
            v13 = TM3_DRAFT_U32(v3 + (13) * 4u);
            v14 = TM3_DRAFT_U32(v4 + 1588) - TM3_DRAFT_U32(v3 + (14) * 4u);
            v112 = TM3_DRAFT_U32(v4 + 1580) - TM3_DRAFT_U32(v3 + (12) * 4u);
            v114 = v14;
            v113 = v12 - v13;
            sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u), v3 + 16u);
            v15 = TM3_DRAFT_U16((v3 + (10) * 2u));
            v16 = TM3_DRAFT_U16((v3 + (8) * 2u));
            TM3_DRAFT_U16((v3 + (1) * 2u)) = 0;
            TM3_DRAFT_U16(v3) = v15;
            TM3_DRAFT_U16((v3 + (2) * 2u)) = -v16;
            sub_8005B284((int)v3, (int)v3);
            sub_80013EC8(v3 + 16u, (uint32)v3, v3 + 8u);
            sub_8005B284((int)((v3 + (2) * 4u)), (int)((v3 + (2) * 4u)));
          }
          TM3_DRAFT_U32(v3 + (23) * 4u) = 0;
        }
        else
        {
          sub_8003F098((int)v3, v4, 1);
          TM3_DRAFT_U32(v3 + (23) * 4u) = 0;
        }
        goto LABEL_66;
      }
    }
    if ( v10 )
    {
      if ( !v9 )
      {
        sub_8003F098((int)v3, v4, 0);
        TM3_DRAFT_U32(v3 + (24) * 4u) = 0;
        goto LABEL_67;
      }
      TM3_DRAFT_U32(v3 + (13) * 4u) += 4;
      if ( abs16(TM3_DRAFT_U16(v4 + 1546)) >= 0xDDBu )
      {
        v19 = TM3_DRAFT_U16(v4 + 1550);
        v20 = -TM3_DRAFT_I16(v4 + 1538);
      }
      else
      {
        v19 = TM3_DRAFT_U16(v4 + 1552);
        v20 = -TM3_DRAFT_I16(v4 + 1540);
      }
      v115 = (uint16)v20;
      v116 = -v19;
      sub_8005B284(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u));
      v21 = TM3_DRAFT_U32(v3 + (23) * 4u) & 0xFFF;
      if ( TM3_DRAFT_U32(v3 + (23) * 4u) )
      {
        TM3_DRAFT_U32(v3 + (23) * 4u) = v21;
        sub_8001434C(v21, TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x28u, 32u));
        sub_8005BB84( TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x28u, 32u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u));
      }
      if ( (TM3_DRAFT_U16(a2 + 6) & v8) != 0 && (v22 = (int)((v3 + (12) * 4u)), !TM3_DRAFT_U32(0x800d2f20u))
        || (v22 = (int)((v3 + (12) * 4u)), TM3_DRAFT_U32(v3 + (24) * 4u))
        || TM3_DRAFT_U32(v3 + (23) * 4u) )
      {
        sub_80014080(v22, TM3_DRAFT_I16(0x8007E9E0u + 2u * TM3_DRAFT_U32(v3 + (25) * 4u)), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u), v4 + 1580);
      }
      else
      {
        v23 = TM3_DRAFT_U32(v4 + 1588);
        v24 = TM3_DRAFT_U32(v3 + (14) * 4u);
        v25 = TM3_DRAFT_U32(v4 + 1584) - TM3_DRAFT_U32(v3 + (13) * 4u);
        v112 = TM3_DRAFT_U32(v4 + 1580) - TM3_DRAFT_U32(v3 + (12) * 4u);
        v113 = v25;
        v114 = v23 - v24;
        v113 = v25 - TM3_DRAFT_I16(0x8007E9D4u + 2u * TM3_DRAFT_U32(v3 + (25) * 4u));
        v26 = sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x48u, 8u));
        v27 = sub_8005B124(v26);
        sub_80014080((int)((v3 + (12) * 4u)), v27 - TM3_DRAFT_I16(0x8007E9E0u + 2u * TM3_DRAFT_U32(v3 + (25) * 4u)), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x48u, 8u), (int)((v3 + (12) * 4u)));
        v28 = TM3_DRAFT_U32(v3 + (14) * 4u) - TM3_DRAFT_U32(v4 + 1588);
        v112 = TM3_DRAFT_U32(v3 + (12) * 4u) - TM3_DRAFT_U32(v4 + 1580);
        v113 = 0;
        v114 = v28;
        sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x48u, 8u));
        sub_80013EC8( TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x48u, 8u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x50u, 8u));
        v29 = (sint16)v119[1];
        v30 = (sint32)sub_80013E20(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x48u, 8u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x20u, 8u)) >= 0;
        v31 = v29 + 16;
        if ( !v30 )
        {
          if ( v29 < 0 )
            v32 = v29 - 0x2000;
          else
            v32 = 0x2000 - v29;
          v31 = v32 + 16;
        }
        sub_8001434C(v31 >> 5, TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x28u, 32u));
        v37 = TM3_DRAFT_U32(v3 + (13) * 4u);
        v38 = TM3_DRAFT_U32(v4 + 1584);
        v39 = TM3_DRAFT_U32(v3 + (14) * 4u) - TM3_DRAFT_U32(v4 + 1588);
        v112 = TM3_DRAFT_U32(v3 + (12) * 4u) - TM3_DRAFT_U32(v4 + 1580);
        v114 = v39;
        v113 = v37 - v38;
        sub_8005B774( TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x28u, 32u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u));
        v40 = v113;
        v41 = TM3_DRAFT_U32(v4 + 1584);
        v42 = v114 + TM3_DRAFT_U32(v4 + 1588);
        TM3_DRAFT_U32(v3 + (12) * 4u) = v112 + TM3_DRAFT_U32(v4 + 1580);
        TM3_DRAFT_U32(v3 + (14) * 4u) = v42;
        TM3_DRAFT_U32(v3 + (13) * 4u) = v40 + v41;
      }
      v43 = TM3_DRAFT_U32(v4 + 1584) - 68;
      if ( v43 < TM3_DRAFT_I32(v3 + (13) * 4u) )
        TM3_DRAFT_U32(v3 + (13) * 4u) = v43;
      v44 = sub_80013420(TM3_DRAFT_U32(v3 + (12) * 4u), TM3_DRAFT_U32(v3 + (13) * 4u), TM3_DRAFT_U32(v3 + (14) * 4u)) - TM3_DRAFT_I16(0x8007E9D4u + 2u * TM3_DRAFT_U32(v3 + (25) * 4u));
      if ( v44 < TM3_DRAFT_I32(v3 + (13) * 4u) )
        TM3_DRAFT_U32(v3 + (13) * 4u) = v44;
      v45 = TM3_DRAFT_U32(v3 + (13) * 4u);
      v46 = TM3_DRAFT_U32(v3 + (10) * 4u);
      v47 = TM3_DRAFT_U32(v3 + (14) * 4u) - TM3_DRAFT_U32(v3 + (11) * 4u);
      v112 = TM3_DRAFT_U32(v3 + (12) * 4u) - TM3_DRAFT_U32(v3 + (9) * 4u);
      v114 = v47;
      v113 = v45 - v46;
      v30 = (sint32)sub_80013E98(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u)) >= 64;
      v48 = v4 + 1580;
      if ( !v30 )
      {
        v49 = TM3_DRAFT_U32(v3 + (10) * 4u);
        v50 = TM3_DRAFT_U32(v3 + (11) * 4u);
        TM3_DRAFT_U32(v3 + (12) * 4u) = TM3_DRAFT_U32(v3 + (9) * 4u);
        TM3_DRAFT_U32(v3 + (13) * 4u) = v49;
        TM3_DRAFT_U32(v3 + (14) * 4u) = v50;
        v48 = v4 + 1580;
      }
      v51 = 0;
      v52 = TM3_DRAFT_U32(v48 + 4);
      v53 = TM3_DRAFT_U32(v48 + 8);
      v124 = TM3_DRAFT_U32(v4 + 1580);
      v125 = v52;
      v126 = v53;
      v54 = TM3_DRAFT_U32(v3 + (13) * 4u);
      v55 = TM3_DRAFT_U32(v3 + (14) * 4u);
      v127 = TM3_DRAFT_U32(v3 + (12) * 4u);
      v128 = v54;
      v129 = v55;
      while ( sub_80013484(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x78u, 8u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x80u, 8u), 1u, TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x58u, 32u)) == 1 )
      {
        if ( ++v51 >= 4 )
        {
          v56 = TM3_DRAFT_U32(v4 + 1584);
          v57 = TM3_DRAFT_U32(v4 + 1588);
          v124 = TM3_DRAFT_U32(v4 + 1580);
          v125 = v56;
          v126 = v57;
          v58 = TM3_DRAFT_U32(v3 + (13) * 4u);
          v59 = TM3_DRAFT_U32(v3 + (14) * 4u);
          v127 = TM3_DRAFT_U32(v3 + (12) * 4u);
          v128 = v58;
          v129 = v59;
          sub_80013484(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x78u, 8u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x80u, 8u), 0, TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x58u, 32u));
          v51 = 0;
          v60 = (v121 + 2048) >> 12;
          v61 = (v122 + 2048) >> 12;
          TM3_DRAFT_U32(v3 + (12) * 4u) = (v120 + 2048) >> 12;
          TM3_DRAFT_U32(v3 + (13) * 4u) = v60;
          TM3_DRAFT_U32(v3 + (14) * 4u) = v61;
          break;
        }
        v127 = (v120 + 2048) >> 12;
        v128 = (v121 + 2048) >> 12;
        v129 = (v122 + 2048) >> 12;
      }
      if ( v51 > 0 )
      {
        if ( v51 == 1 )
        {
          v134 = 3;
          v142 = -1;
          v143 = -1;
          v138 = 0;
          v147 = 1;
          v62 = TM3_DRAFT_U32(v4 + 1584);
          v63 = TM3_DRAFT_U32(v4 + 1588);
          v64 = 0;
          v131 = TM3_DRAFT_U32(v4 + 1580);
          v132 = v62;
          v133 = v63;
          v65 = TM3_DRAFT_U32(v3 + (13) * 4u);
          v66 = TM3_DRAFT_U32(v3 + (14) * 4u);
          v135 = TM3_DRAFT_U32(v3 + (12) * 4u);
          v136 = v65;
          v137 = v66;
          v139 = v127;
          v140 = v128;
          v141 = v129;
          do
          {
            v67 = (TM3_DRAFT_LOCAL_ADDRESS(v130, sizeof(v130)) + (2 * v64 + 3) * 4u);
            v68 = (TM3_DRAFT_LOCAL_ADDRESS(v130, sizeof(v130)) + (2 * v64 + 11) * 4u);
            v69 = (TM3_DRAFT_LOCAL_ADDRESS(v130, sizeof(v130)) + (2 * ((v64 + 1) % v134) + 3) * 4u);
            v70 = TM3_DRAFT_U16(v69);
            v71 = TM3_DRAFT_U16(v69 + 2u);
            v72 = TM3_DRAFT_U16(v69 + 4u);
            v69 = (uint32)TM3_DRAFT_I16(v67 + 2u);
            v73 = v72 - TM3_DRAFT_U16(v67 + 4u);
            TM3_DRAFT_U16(v68) = v70 - TM3_DRAFT_U16(v67);
            TM3_DRAFT_U16(v68 + 2u) = v71 - (_WORD)v69;
            TM3_DRAFT_U16(v68 + 4u) = v73;
            ++v64;
          }
          while ( v64 < v134 );
          v151[0] = v144;
          v151[2] = v146;
          v151[1] = v145;
          v152[0] = v148;
          v152[1] = v149;
          v152[2] = v150;
          sub_8005C1C0(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0xD8u, 12u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0xE8u, 12u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0xF8u, 12u));
          v130[0] = *(sint32 *)(native_locals + 0xF8u);
          v130[1] = *(sint32 *)(native_locals + 0xFCu);
          v130[2] = *(sint32 *)(native_locals + 0x100u);
          v74 = v123;
          v75 = 0;
          if ( TM3_DRAFT_I16(v123 + 18) > 0 )
          {
            v76 = 0;
            while ( 1 )
            {
              v77 = (uint32)(v74 + v76 + 12);
              v78 = TM3_DRAFT_I16(v77);
              v79 = TM3_DRAFT_I16(v77 + (1) * 2u);
              v80 = TM3_DRAFT_I16(v77 + (2) * 2u);
              v154[0] = v78;
              v154[1] = v79;
              v154[2] = v80;
              v81 = v75 + 1;
              v82 = (uint32)(v74 + 8 * ((v75 + 1) % TM3_DRAFT_I16(v74 + 18)) + 12);
              v83 = TM3_DRAFT_I16(v82) - v78;
              v84 = TM3_DRAFT_I16(v82 + (1) * 2u) - v79;
              v85 = TM3_DRAFT_I16(v82 + (2) * 2u) - v80;
              v154[3] = v83;
              v154[4] = v84;
              v154[5] = v85;
              v86 = sub_80014510( TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x88u, 80u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x118u, 24u), 0, TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x108u, 12u));
              v75 = v81;
              if ( v86 >= 0 )
                break;
              v74 = v123;
              v76 = 8 * v81;
              if ( v81 >= TM3_DRAFT_I16(v123 + 18) )
                goto LABEL_52;
            }
            v127 = (v153[0] + 2048) >> 12;
            v129 = (v153[2] + 2048) >> 12;
            v128 = (v153[1] + 2048) >> 12;
            v33 = TM3_DRAFT_U32(v4 + 1588);
            v34 = TM3_DRAFT_U32(v4 + 1584);
            v127 -= TM3_DRAFT_U16(v4 + 1580);
            v129 -= v33;
            v128 -= v34;
            sub_8005B284(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x80u, 8u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x80u, 8u));
            sub_80013FF0(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x80u, 8u), TM3_DRAFT_I16(0x8007E9E0u + 2u * TM3_DRAFT_U32(v3 + (25) * 4u)), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x80u, 8u));
            v35 = TM3_DRAFT_U32(v4 + 1584);
            v36 = v129 + TM3_DRAFT_U32(v4 + 1588);
            v127 += TM3_DRAFT_U16(v4 + 1580);
            v129 = v36;
            v128 += v35;
          }
        }
LABEL_52:
        v87 = v128;
        v88 = v129;
        TM3_DRAFT_U32(v3 + (12) * 4u) = v127;
        TM3_DRAFT_U32(v3 + (13) * 4u) = v87;
        TM3_DRAFT_U32(v3 + (14) * 4u) = v88;
      }
      v89 = TM3_DRAFT_U32(v4 + 1584);
      v90 = TM3_DRAFT_U32(v4 + 1588);
      v91 = TM3_DRAFT_U32(v3 + (13) * 4u);
      v92 = TM3_DRAFT_U32(v3 + (14) * 4u);
      v112 = TM3_DRAFT_U32(v4 + 1580) - TM3_DRAFT_U32(v3 + (12) * 4u);
      v113 = v89 - v91;
      v114 = v90 - v92;
      sub_8005B254(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u), TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u));
      v93 = TM3_DRAFT_I16((v3 + (9) * 2u));
      v94 = v114 - TM3_DRAFT_I16((v3 + (10) * 2u));
      v112 -= TM3_DRAFT_I16((v3 + (8) * 2u));
      v114 = v94;
      v113 -= v93;
      if ( (sint32)sub_80013E98(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u)) >= 256 )
      {
        v96 = TM3_DRAFT_I16((v3 + (9) * 2u));
        v97 = v113;
        v98 = TM3_DRAFT_U16((v3 + (10) * 2u)) + v114;
        TM3_DRAFT_U16((v3 + (8) * 2u)) += v112;
        TM3_DRAFT_U16((v3 + (10) * 2u)) = v98;
        v95 = v96 + v97;
        TM3_DRAFT_U16((v3 + (9) * 2u)) = v95;
      }
      v99 = (int)v3;
      if ( !TM3_DRAFT_U16((v3 + (8) * 2u)) )
      {
        v100 = TM3_DRAFT_U16((v3 + (10) * 2u));
        if ( !v100 )
        {
          v101 = -TM3_DRAFT_I16(v4 + 1552);
          TM3_DRAFT_U16(v3 + 8u) = (uint16)-TM3_DRAFT_U16(v4 + 1540);
          TM3_DRAFT_U16(v3 + 10u) = 0u;
          TM3_DRAFT_U16((v3 + (6) * 2u)) = v101;
          sub_8005B284((int)((v3 + (2) * 4u)), (int)((v3 + (2) * 4u)));
          v102 = (uint32)((v3 + (2) * 4u));
          v103 = (uint32)((v3 + (4) * 4u));
LABEL_63:
          sub_80013EC8(v102, v103, v3);
          TM3_DRAFT_U32(v3 + (24) * 4u) = 0;
          goto LABEL_67;
        }
LABEL_65:
        v109 = TM3_DRAFT_U16((v3 + (8) * 2u));
        TM3_DRAFT_U16((v3 + (1) * 2u)) = 0;
        TM3_DRAFT_U16(v3) = v100;
        TM3_DRAFT_U16((v3 + (2) * 2u)) = -v109;
        sub_8005B284(v99, (int)v3);
        sub_80013EC8(v3 + 16u, (uint32)v3, v3 + 8u);
        sub_8005B284((int)((v3 + (2) * 4u)), (int)((v3 + (2) * 4u)));
LABEL_66:
        TM3_DRAFT_U32(v3 + (24) * 4u) = 0;
        goto LABEL_67;
      }
    }
    else
    {
      if ( v9 != 5 )
      {
        TM3_DRAFT_U32(v3 + (24) * 4u) = 0;
LABEL_67:
        a1 = v3;
        return sub_8003EFF0((int)a1);
      }
      sub_8003FEFC((v3 + (12) * 4u), (uint32)(v4 + 1580));
      v104 = sub_80013420(TM3_DRAFT_U32(v3 + (12) * 4u), TM3_DRAFT_U32(v3 + (13) * 4u), TM3_DRAFT_U32(v3 + (14) * 4u)) - 68;
      if ( v104 < TM3_DRAFT_I32(v3 + (13) * 4u) )
        TM3_DRAFT_U32(v3 + (13) * 4u) = v104;
      v105 = TM3_DRAFT_U32(v4 + 1584);
      v106 = TM3_DRAFT_U32(v3 + (13) * 4u);
      v107 = TM3_DRAFT_U32(v4 + 1588) - TM3_DRAFT_U32(v3 + (14) * 4u);
      v112 = TM3_DRAFT_U32(v4 + 1580) - TM3_DRAFT_U32(v3 + (12) * 4u);
      v114 = v107;
      v113 = v105 - v106;
      sub_8005B240(TM3_DRAFT_LOCAL_ADDRESS(native_locals + 0x10u, 12u), v3 + 16u);
      v99 = (int)v3;
      if ( !TM3_DRAFT_U16((v3 + (8) * 2u)) )
      {
        v100 = TM3_DRAFT_U16((v3 + (10) * 2u));
        if ( !v100 )
        {
          v108 = -TM3_DRAFT_I16(v4 + 1552);
          TM3_DRAFT_U16(v3 + 8u) = (uint16)-TM3_DRAFT_U16(v4 + 1540);
          TM3_DRAFT_U16(v3 + 10u) = 0u;
          TM3_DRAFT_U16((v3 + (6) * 2u)) = v108;
          sub_8005B284((int)((v3 + (2) * 4u)), (int)((v3 + (2) * 4u)));
          v102 = (uint32)((v3 + (2) * 4u));
          v103 = (uint32)((v3 + (4) * 4u));
          goto LABEL_63;
        }
        goto LABEL_65;
      }
    }
    v100 = TM3_DRAFT_U16((v3 + (10) * 2u));
    goto LABEL_65;
  }
  return sub_8003EFF0((int)a1);
}

#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124
#undef v125
#undef v126
#undef v127
#undef v128
#undef v129
#undef v130
#undef v131
#undef v132
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v147
#undef v148
#undef v149
#undef v150
#undef v151
#undef v152
#undef v153
#undef v154
