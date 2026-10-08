#include "game_draft_signatures.h"

extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

#define dword_80089C94 TM3_DRAFT_U32(0x80089C94u)
#define dword_80089C00 TM3_DRAFT_U32(0x80089C00u)
#define dword_80089E58 TM3_DRAFT_U32(0x80089E58u)
#define dword_80089E60 TM3_DRAFT_U32(0x80089E60u)
#define dword_80089E90 TM3_DRAFT_U32(0x80089E90u)
#define dword_80089E74 TM3_DRAFT_U32(0x80089E74u)
#define dword_80089E68 TM3_DRAFT_U32(0x80089E68u)
#define dword_80089CBC TM3_DRAFT_U32(0x80089CBCu)
#define dword_80089E70 TM3_DRAFT_U32(0x80089E70u)
#define dword_80089CA0 TM3_DRAFT_U32(0x80089CA0u)
#define dword_80080BC4 TM3_DRAFT_U32(0x80080BC4u)
#define word_8007F27E TM3_DRAFT_U16(0x8007F27Eu)
#define word_8007F280 TM3_DRAFT_U16(0x8007F280u)
#define byte_8007F27C TM3_DRAFT_U8(0x8007F27Cu)
#define byte_8007F27D TM3_DRAFT_U8(0x8007F27Du)
#define dword_8007DF78 TM3_DRAFT_U32(0x8007DF78u)
#define dword_8007DF48 TM3_DRAFT_U32(0x8007DF48u)
#define dword_8007DF60 TM3_DRAFT_U32(0x8007DF60u)
#define dword_80089CE0 TM3_DRAFT_U32(0x80089CE0u)
#define dword_8007DF10 TM3_DRAFT_U32(0x8007DF10u)
#define dword_800896D4 TM3_DRAFT_U32(0x800896D4u)

/* Unverified decompiler-derived draft */
uint32 sub_800210B8(uint32 a1)
{
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  int v5; 
  int v6; 
  sint16 v7; 
  int v8; 
  int v9; 
  unsigned int v10; 
  int v11; 
  uint32 v12; 
  sint16 v13; 
  int v14; 
  sint32 v15; 
  char v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  signed int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  sint16 v31; 
  int v32; 
  int v33; 
  sint16 v34; 
  sint16 v35; 
  sint16 v36; 
  sint16 v37; 
  int v38; 
  int v39; 
  int v40; 
  sint16 v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  uint32 v50; 
  int v51; 
  uint32 v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  char v59; 
  uint32 v60; 
  int v61; 
  int v62; 
  int v63; 
  sint16 v64; 
  sint16 v65; 
  int v66; 
  uint32 v67; 
  int v68; 
  sint16 v69; 
  sint16 v70; 
  sint16 v71; 
  int v72; 
  int v73; 
  int v74; 
  uint32 v75; 
  sint16 v76; 
  sint16 v77; 
  sint16 v78; 
  sint16 v79; 
  uint32 v80; 
  int v81; 
  int v82; 
  sint32 v83; 
  sint16 v85; 
  sint16 v86; 
  sint32 v87; 
  sint16 v89; 
  sint16 v90; 
  sint16 v92; 
  sint16 v93; 
  uint32 v94; 
  int v95; 
  int v96; 
  int v97; 
  int v98; 
  uint32 v99; 
  int v100; 
  signed int v101; 
  uint32 v102; 
  int v103; 
  int v104; 
  int v105; 
  int v106; 
  int v107; 
  unsigned int v108; 
  int result; 
  sint16 direction_a[4];
  sint16 direction_b[4];
  sint16 v120[4]; 
  int transformed[4];
  int v124[4]; 
  int v125[4]; 
  sint16 point_a[4];
  sint16 point_b[4];
  sint16 v128[4]; 
  char v129[16]; 
  sint16 v130[4]; 
  char v131[16]; 
  sint16 v132[4]; 
  char v133[16]; 
  sint16 v134[4]; 
  char v135[4]; 
  char v136[4]; 
  char v137[4]; 
  char v138[4]; 
  int v139; 
  int v140; 
  uint32 v141; 
  uint32 v142; 
  uint32 v143; 
  uint32 v144; 

  sint16 offset_vector[4];
  v2 = TM3_DRAFT_U32(a1 + 388);
  v3 = a1 + 68;
  TM3_DRAFT_U32(a1 + 4048) = 0;
  TM3_DRAFT_U32(a1 + 4044) = 0;
  if ( v2 >= a1 + 68 )
  {
    v4 = a1 + 108;
    do
    {
      v5 = TM3_DRAFT_U32(v4);
      v6 = TM3_DRAFT_U32(v4) + sub_80015684(TM3_DRAFT_U32(v4 - 4), TM3_DRAFT_U32(v4 + 8), 18);
      TM3_DRAFT_U32(v4) = v6;
      if ( (v5 > 0) - ((unsigned int)v5 >> 31) == ((unsigned int)v6 >> 31) - (v6 > 0) )
        TM3_DRAFT_U32(v4) = 0;
      v7 = TM3_DRAFT_U16(v4 + 4) + sub_80015684(TM3_DRAFT_U32(v4), 1391, 18);
      v8 = TM3_DRAFT_U8(v4 + 37);
      TM3_DRAFT_U16(v4 + 4) = v7 & 0xFFF;
      if ( v8 )
      {
        v9 = TM3_DRAFT_U32(v4 - 12) + sub_80015684(TM3_DRAFT_U32(v4 - 16), 8738, 18);
        TM3_DRAFT_U32(v4 - 12) = v9;
        TM3_DRAFT_U32(a1 + 4044) += v9;
        TM3_DRAFT_U32(a1 + 4048) += TM3_DRAFT_U32(v4) * TM3_DRAFT_I16(v4 - 20);
      }
      v3 += 80;
      v4 += 80;
    }
    while ( TM3_DRAFT_U32(a1 + 388) >= v3 );
  }
  v10 = a1 + 1592;
  v11 = 0;
  if ( (unsigned int)(a1 + 1592) < TM3_DRAFT_U32(a1 + 2488) )
  {
    v12 = (uint32)(a1 + 1684);
    do
    {
      sub_80020FDC(v10);
      sub_8001F668(v10);
      if ( TM3_DRAFT_I16(v12) )
      {
        v13 = 2;
        if ( TM3_DRAFT_U32(v12 -(3) * 4u) )
          v13 = 1;
        TM3_DRAFT_I16(v12) = v13;
        if ( (v13 & 2) != 0 )
          ++v11;
      }
      v10 += 112;
      v12 += (56) * 2u;
    }
    while ( v10 < TM3_DRAFT_U32(a1 + 2488) );
  }
  v14 = TM3_DRAFT_U8(a1 + 3311);
  v15 = v14 == 0;
  v16 = v14 - 1;
  if ( !v15 )
    TM3_DRAFT_U8(a1 + 3311) = v16;
  v17 = TM3_DRAFT_U8(a1 + 3310);
  if ( v11 >= v17 )
  {
    if ( v17 < v11 )
    {
      v18 = TM3_DRAFT_U8(a1 + 3311);
      TM3_DRAFT_U8(a1 + 3310) = v11;
      if ( !v18 )
      {
        TM3_DRAFT_U8(a1 + 3311) = 30;
        v19 = TM3_DRAFT_U32(a1 + 1560) - TM3_DRAFT_U32(a1 + 1572);
        v20 = TM3_DRAFT_U32(a1 + 1564) - TM3_DRAFT_U32(a1 + 1576);
        v124[0] = TM3_DRAFT_U32(a1 + 1556) - TM3_DRAFT_U32(a1 + 1568);
        v124[1] = v19;
        v124[2] = v20;
        v21 = sub_80013E98((int)TM3_DRAFT_LOCAL_ADDRESS(v124, sizeof(v124)));
        v22 = sub_8005B124(v21);
        sub_80039FD4();
        sub_8004A294(22, 23, 25, a1, 8 * v22);
        if ( TM3_DRAFT_U8(a1 + 3328) == 1 )
        {
          v23 = 11;
          if ( v22 >= 43 )
          {
            v23 = 12;
            if ( v22 >= 85 )
            {
              v23 = 14;
              if ( v22 < 128 )
                v23 = 13;
            }
          }
          sub_80047364(TM3_DRAFT_U32(a1 + 3924), v23);
        }
      }
    }
  }
  else
  {
    TM3_DRAFT_U8(a1 + 3310) = v11;
  }
  v24 = TM3_DRAFT_U32(a1 + 1560);
  v25 = TM3_DRAFT_I16(a1 + 2388) + TM3_DRAFT_I16(a1 + 2276) + TM3_DRAFT_I16(a1 + 2164);
  v26 = TM3_DRAFT_I16(a1 + 2052);
  v27 = TM3_DRAFT_U32(a1 + 1564);
  TM3_DRAFT_U32(a1 + 1568) = TM3_DRAFT_U32(a1 + 1556);
  TM3_DRAFT_U32(a1 + 1572) = v24;
  TM3_DRAFT_U32(a1 + 1576) = v27;
  v28 = v25 + v26;
  v29 = (TM3_DRAFT_I16(a1 + 2390) + TM3_DRAFT_I16(a1 + 2278) + TM3_DRAFT_I16(a1 + 2166) + TM3_DRAFT_I16(a1 + 2054)) / 4;
  v30 = TM3_DRAFT_I16(a1 + 2392) + TM3_DRAFT_I16(a1 + 2280) + TM3_DRAFT_I16(a1 + 2168) + TM3_DRAFT_I16(a1 + 2056);
  v141 = 0;
  v140 = 0;
  TM3_DRAFT_U32(a1 + 1556) = v28 / 4;
  TM3_DRAFT_U32(a1 + 1560) = v29;
  TM3_DRAFT_U32(a1 + 1564) = v30 / 4;
  v31 = TM3_DRAFT_U16(a1 + 2278);
  v32 = 2 * TM3_DRAFT_U32(a1 + 1560);
  LOWORD(v25) = TM3_DRAFT_U16(a1 + 2390);
  v33 = TM3_DRAFT_I16(a1 + 2392) + TM3_DRAFT_I16(a1 + 2280) - 2 * TM3_DRAFT_U32(a1 + 1564);
  direction_a[0] = TM3_DRAFT_U16(a1 + 2388) + TM3_DRAFT_U16(a1 + 2276) - 2 * TM3_DRAFT_U16(a1 + 1556);
  direction_a[2] = v33;
  direction_a[1] = v25 + v31 - v32;
  sub_8005B284((int)TM3_DRAFT_LOCAL_ADDRESS(direction_a, sizeof(direction_a)), (int)TM3_DRAFT_LOCAL_ADDRESS(direction_a, sizeof(direction_a)));
  v139 = 0;
  v34 = TM3_DRAFT_U16(a1 + 2276);
  v35 = TM3_DRAFT_U16(a1 + 2166);
  v36 = TM3_DRAFT_U16(a1 + 2280);
  v37 = TM3_DRAFT_U16(a1 + 2168);
  v38 = TM3_DRAFT_U32(a1 + 1564);
  v39 = 2 * TM3_DRAFT_U32(a1 + 1556);
  v40 = 2 * TM3_DRAFT_U32(a1 + 1560);
  TM3_DRAFT_U16(a1 + 1540) = direction_a[0];
  TM3_DRAFT_U16(a1 + 1546) = direction_a[1];
  TM3_DRAFT_U16(a1 + 1552) = direction_a[2];
  v41 = TM3_DRAFT_U16(a1 + 2278);
  direction_b[0] = v34 + TM3_DRAFT_U16(a1 + 2164) - v39;
  direction_b[2] = v36 + v37 - 2 * v38;
  direction_b[1] = v41 + v35 - v40;
  sub_8005B284((int)TM3_DRAFT_LOCAL_ADDRESS(direction_b, sizeof(direction_b)), (int)TM3_DRAFT_LOCAL_ADDRESS(direction_b, sizeof(direction_b)));
  sub_80013EC8(TM3_DRAFT_LOCAL_ADDRESS(direction_a, sizeof(direction_a)), TM3_DRAFT_LOCAL_ADDRESS(direction_b, sizeof(direction_b)), TM3_DRAFT_LOCAL_ADDRESS(v120, sizeof(v120)));
  sub_8005B284((int)TM3_DRAFT_LOCAL_ADDRESS(v120, sizeof(v120)), (int)TM3_DRAFT_LOCAL_ADDRESS(v120, sizeof(v120)));
  TM3_DRAFT_U16(a1 + 1538) = v120[0];
  TM3_DRAFT_U16(a1 + 1544) = v120[1];
  TM3_DRAFT_U16(a1 + 1550) = v120[2];
  sub_80013EC8(TM3_DRAFT_LOCAL_ADDRESS(v120, sizeof(v120)), TM3_DRAFT_LOCAL_ADDRESS(direction_a, sizeof(direction_a)), TM3_DRAFT_LOCAL_ADDRESS(direction_b, sizeof(direction_b)));
  v43 = TM3_DRAFT_I16(a1 + 474);
  TM3_DRAFT_U16(a1 + 1536) = direction_b[0];
  TM3_DRAFT_U16(a1 + 1542) = direction_b[1];
  TM3_DRAFT_U16(a1 + 1548) = direction_b[2];
  sub_80014080(a1 + 1556, v43, TM3_DRAFT_LOCAL_ADDRESS(v120, sizeof(v120)), a1 + 1556);
  offset_vector[0] = 0;
  v44 = TM3_DRAFT_I16(a1 + 1544);
  v45 = TM3_DRAFT_I16(a1 + 1018);
  v46 = TM3_DRAFT_I16(a1 + 474);
  v142 = TM3_DRAFT_LOCAL_ADDRESS(point_a, sizeof(point_a));
  v143 = TM3_DRAFT_LOCAL_ADDRESS(v125, sizeof(v125));
  v144 = TM3_DRAFT_LOCAL_ADDRESS(point_b, sizeof(point_b));
  offset_vector[2] = 0;
  offset_vector[1] = ((v44 - 4096) * ((v45 - v46) / 2) + 2048) >> 12;
  sub_8005BB34((uint32)(a1 + 1536), TM3_DRAFT_LOCAL_ADDRESS(offset_vector, sizeof(offset_vector)), (int)TM3_DRAFT_LOCAL_ADDRESS(transformed, sizeof(transformed)));
  v47 = TM3_DRAFT_U32(a1 + 1560);
  v48 = transformed[1];
  v49 = TM3_DRAFT_U32(a1 + 1564) - transformed[2];
  TM3_DRAFT_U32(a1 + 1556) -= transformed[0];
  TM3_DRAFT_U32(a1 + 1564) = v49;
  TM3_DRAFT_U32(a1 + 1560) = v47 - v48;
  sub_80014080(a1 + 1580, ((TM3_DRAFT_I16(a1 + 1018) > 0) - TM3_DRAFT_I16(a1 + 1018)) >> 1, TM3_DRAFT_LOCAL_ADDRESS(v120, sizeof(v120)), a1 + 1556);
  v50 = (uint32)(a1 + 2492);
  do
  {
    v51 = a1 + 80 * v139 + 68;
    v52 = (uint32)TM3_DRAFT_U32(v50 + (1) * 4u);
    v53 = TM3_DRAFT_U32(v52 + (5) * 4u);
    v52 += (5) * 4u;
    v54 = TM3_DRAFT_U32(v52 + (1) * 4u);
    v55 = TM3_DRAFT_U32(v52 + (2) * 4u);
    v56 = TM3_DRAFT_U32(TM3_DRAFT_U32(v50) + 24);
    v57 = v55 - TM3_DRAFT_U32(TM3_DRAFT_U32(v50) + 28);
    transformed[0] = v53 - TM3_DRAFT_U32(TM3_DRAFT_U32(v50) + 20);
    transformed[1] = v54 - v56;
    transformed[2] = v57;
    v58 = (sub_80013A90(TM3_DRAFT_LOCAL_ADDRESS(transformed, sizeof(transformed)), TM3_DRAFT_LOCAL_ADDRESS(v120, sizeof(v120))) - TM3_DRAFT_U32(v50 + (2) * 4u) + 2048) >> 12;
    if ( TM3_DRAFT_I8(v51 + 19) - v58 >= 24 )
      ++v140;
    v59 = -12;
    if ( v58 >= -12 )
    {
      v59 = 12;
      if ( v58 <= 12 )
        v59 = v58;
    }
    v60 = TM3_DRAFT_U32(v51 + 4);
    TM3_DRAFT_U8(v51 + 19) = v59;
    if ( v60 )
    {
      v61 = TM3_DRAFT_U32(v51);
      if ( TM3_DRAFT_I32(TM3_DRAFT_U32(v51) + 96) > 0x400000
        && (TM3_DRAFT_U16(v61 + 92) & 1) != 0
        && TM3_DRAFT_U8(32 * TM3_DRAFT_U8(v61 + 95) + dword_80089C94 + 4) )
      {
        sub_8005BD24((uint32)(a1 + 1536));
        sub_8005BDB4((uint32)(a1 + 1536));
        v62 = (int)v142;
        v63 = (int)v143;
        v64 = TM3_DRAFT_U16(v60 + (10) * 2u);
        v65 = TM3_DRAFT_U16(v60 + (9) * 2u) + TM3_DRAFT_U16(v51 + 20) + TM3_DRAFT_I8(v51 + 19);
        v66 = (int)v142;
        point_a[0] = TM3_DRAFT_U16(v60 + (8) * 2u);
        TM3_DRAFT_I16(v142 + (1) * 2u) = v65;
        TM3_DRAFT_U16(v66 + 4) = v64;
        sub_8005C3C4(v62, v63, TM3_DRAFT_LOCAL_ADDRESS(v135, sizeof(v135)));
        v67 = v144;
        v68 = (int)v144;
        v69 = TM3_DRAFT_U16(TM3_DRAFT_U32(v51) + 16);
        v70 = TM3_DRAFT_U16(TM3_DRAFT_U32(v51) + 8);
        v71 = TM3_DRAFT_U16(TM3_DRAFT_U32(v51) + 14) - TM3_DRAFT_U16(TM3_DRAFT_U32(v51) + 6);
        point_b[0] = TM3_DRAFT_U16(TM3_DRAFT_U32(v51) + 12) - TM3_DRAFT_U16(TM3_DRAFT_U32(v51) + 4);
        TM3_DRAFT_I16(v144 + (1) * 2u) = v71;
        TM3_DRAFT_U16(v68 + 4) = v69 - v70;
        sub_80013EC8(v67, (uint32)(TM3_DRAFT_U32(v51) + 84), TM3_DRAFT_LOCAL_ADDRESS(v128, sizeof(v128)));
        sub_8005B284((int)TM3_DRAFT_LOCAL_ADDRESS(v128, sizeof(v128)), (int)TM3_DRAFT_LOCAL_ADDRESS(v128, sizeof(v128)));
        v73 = TM3_DRAFT_U32(v51 + 8);
        if ( v73 )
        {
          if ( (int)sub_80015724(v125[0] - TM3_DRAFT_I16(v73 + 4), v125[2] - TM3_DRAFT_I16(v73 + 8)) >= 257 )
          {
            v74 = TM3_DRAFT_U32(v51 + 8);
            v75 = sub_8004A294(
                    21,
                    (int)v143,
                    (int)TM3_DRAFT_LOCAL_ADDRESS(v128, sizeof(v128)),
                    TM3_DRAFT_I16(v51 + 22),
                    TM3_DRAFT_U8(TM3_DRAFT_U32(v51) + 95));
            TM3_DRAFT_U32(v51 + 8) = v75;
            v76 = TM3_DRAFT_U16(v75 +(3) * 2u);
            v77 = TM3_DRAFT_U16(v75 +(4) * 2u);
            TM3_DRAFT_U16(v74 + 20) = TM3_DRAFT_U16(v75 +(2) * 2u);
            TM3_DRAFT_U16(v74 + 22) = v76;
            TM3_DRAFT_U16(v74 + 24) = v77;
            v78 = TM3_DRAFT_U16(TM3_DRAFT_U32(v51 + 8) + 14);
            v79 = TM3_DRAFT_U16(TM3_DRAFT_U32(v51 + 8) + 16);
            TM3_DRAFT_U16(v74 + 28) = TM3_DRAFT_U16(TM3_DRAFT_U32(v51 + 8) + 12);
            TM3_DRAFT_U16(v74 + 30) = v78;
            TM3_DRAFT_U16(v74 + 32) = v79;
            TM3_DRAFT_U8(v74 + 37) = TM3_DRAFT_U8(TM3_DRAFT_U32(v51 + 8) + 36);
            sub_80018BF8(a1, (uint32)v74);
          }
        }
        else
        {
          TM3_DRAFT_U32(v51 + 8) = sub_8004A294(
                                   21,
                                   (int)v143,
                                   (int)TM3_DRAFT_LOCAL_ADDRESS(v128, sizeof(v128)),
                                   TM3_DRAFT_I16(v51 + 22),
                                   TM3_DRAFT_U8(TM3_DRAFT_U32(v51) + 95));
        }
        sub_80038480(TM3_DRAFT_U32(v51 + 8), TM3_DRAFT_LOCAL_ADDRESS(v125, sizeof(v125)), TM3_DRAFT_LOCAL_ADDRESS(v128, sizeof(v128)), TM3_DRAFT_I16(v51 + 22));
        if ( !v141 || TM3_DRAFT_U32(TM3_DRAFT_I32(v141) + 96) < TM3_DRAFT_U32(TM3_DRAFT_U32(v51) + 96) )
          v141 = (uint32)v51;
      }
      else
      {
        v80 = TM3_DRAFT_U32(v51 + 8);
        if ( v80 )
        {
          sub_80018BF8(a1, v80);
          TM3_DRAFT_U32(v51 + 8) = 0;
        }
      }
      sub_80014C04(TM3_DRAFT_LOCAL_ADDRESS(v124, sizeof(v124)), (uint32)(TM3_DRAFT_U32(v51) + 32), 1, 12);
      v82 = sub_80013D64((int)TM3_DRAFT_LOCAL_ADDRESS(v124, sizeof(v124)));
      v83 = v82 < 626;
      if ( v82 >= 1537 )
      {
        v83 = v82 < 626;
        if ( (TM3_DRAFT_U16(TM3_DRAFT_U32(v51) + 92) & 1) != 0 )
        {
          v83 = v82 < 626;
          if ( TM3_DRAFT_U8(32 * TM3_DRAFT_U8(TM3_DRAFT_U32(v51) + 95) + dword_80089C94 + 18) )
          {
            if ( !(TM3_DRAFT_U8(v51 + 79))-- )
            {
              if ( TM3_DRAFT_U8(32 * TM3_DRAFT_U8(TM3_DRAFT_U32(v51) + 95) + dword_80089C94) == 3 )
                sub_80018C38(a1);
              sub_8005BD24((uint32)(a1 + 1536));
              sub_8005BDB4((uint32)(a1 + 1536));
              v85 = TM3_DRAFT_U16(v60 + (10) * 2u);
              v86 = TM3_DRAFT_U16(v60 + (9) * 2u) + TM3_DRAFT_U16(v51 + 20) + TM3_DRAFT_I8(v51 + 19);
              v130[0] = TM3_DRAFT_U16(v60 + (8) * 2u);
              v130[1] = v86;
              v130[2] = v85;
              sub_8005C3C4((int)TM3_DRAFT_LOCAL_ADDRESS(v130, sizeof(v130)), (int)TM3_DRAFT_LOCAL_ADDRESS(v129, sizeof(v129)), TM3_DRAFT_LOCAL_ADDRESS(v136, sizeof(v136)));
              sub_8004A294(26, (int)TM3_DRAFT_LOCAL_ADDRESS(v129, sizeof(v129)), v82, TM3_DRAFT_U8(TM3_DRAFT_U32(v51) + 95));
              TM3_DRAFT_U8(v51 + 79) = 5;
            }
            v83 = v82 < 626;
          }
        }
      }
      v15 = v83;
      v87 = v82 < 1537;
      if ( !v15 )
      {
        v87 = v82 < 1537;
        if ( (TM3_DRAFT_U16(TM3_DRAFT_U32(v51) + 92) & 1) != 0 )
        {
          v87 = v82 < 1537;
          if ( TM3_DRAFT_U8(32 * TM3_DRAFT_U8(TM3_DRAFT_U32(v51) + 95) + dword_80089C94 + 11) )
          {
            if ( !(TM3_DRAFT_U8(v51 + 78))-- )
            {
              sub_8005BD24((uint32)(a1 + 1536));
              sub_8005BDB4((uint32)(a1 + 1536));
              v89 = TM3_DRAFT_U16(v60 + (10) * 2u);
              v90 = TM3_DRAFT_U16(v60 + (9) * 2u) + TM3_DRAFT_U16(v51 + 20) + TM3_DRAFT_I8(v51 + 19);
              v132[0] = TM3_DRAFT_U16(v60 + (8) * 2u);
              v132[1] = v90;
              v132[2] = v89;
              sub_8005C3C4((int)TM3_DRAFT_LOCAL_ADDRESS(v132, sizeof(v132)), (int)TM3_DRAFT_LOCAL_ADDRESS(v131, sizeof(v131)), TM3_DRAFT_LOCAL_ADDRESS(v137, sizeof(v137)));
              sub_8004A294(27, (int)TM3_DRAFT_LOCAL_ADDRESS(v131, sizeof(v131)), (int)TM3_DRAFT_LOCAL_ADDRESS(v124, sizeof(v124)), TM3_DRAFT_U8(TM3_DRAFT_U32(v51) + 95));
              TM3_DRAFT_U8(v51 + 78) = 5;
            }
            v87 = v82 < 1537;
          }
        }
      }
      if ( !v87 && (TM3_DRAFT_U16(TM3_DRAFT_U32(v51) + 92) & 1) != 0 )
      {
        if ( TM3_DRAFT_U8(32 * TM3_DRAFT_U8(TM3_DRAFT_U32(v51) + 95) + dword_80089C94 + 25) )
        {
          if ( !(TM3_DRAFT_U8(v51 + 18))-- )
          {
            sub_8005BD24((uint32)(a1 + 1536));
            sub_8005BDB4((uint32)(a1 + 1536));
            v92 = TM3_DRAFT_U16(v60 + (10) * 2u);
            v93 = TM3_DRAFT_U16(v60 + (9) * 2u) + TM3_DRAFT_U16(v51 + 20) + TM3_DRAFT_I8(v51 + 19);
            v134[0] = TM3_DRAFT_U16(v60 + (8) * 2u);
            v134[1] = v93;
            v134[2] = v92;
            sub_8005C3C4((int)TM3_DRAFT_LOCAL_ADDRESS(v134, sizeof(v134)), (int)TM3_DRAFT_LOCAL_ADDRESS(v133, sizeof(v133)), TM3_DRAFT_LOCAL_ADDRESS(v138, sizeof(v138)));
            sub_8004A294(28, (int)TM3_DRAFT_LOCAL_ADDRESS(v133, sizeof(v133)), (int)TM3_DRAFT_LOCAL_ADDRESS(v124, sizeof(v124)), TM3_DRAFT_U8(TM3_DRAFT_U32(v51) + 95));
            TM3_DRAFT_U8(v51 + 18) = 5;
          }
        }
      }
    }
    v50 += (6) * 4u;
    ++v139;
  }
  while ( v139 < 4 );
  if ( v140 >= 2 && TM3_DRAFT_I16(a1 + 1544) > 0 && !sub_80040DA8(a1, 24) )
  {
    sub_8004A294(22, 24, 17, a1);
    if ( TM3_DRAFT_U8(a1 + 3328) == 1 )
      sub_80047364(TM3_DRAFT_U32(a1 + 3924), 21);
  }
  v94 = v141;
  if ( !v141 )
  {
    v104 = TM3_DRAFT_U32(a1 + 3312);
    if ( !v104 )
      goto LABEL_88;
    v105 = TM3_DRAFT_I16(v104 + 42);
    if ( v105 >= 33 )
    {
      sub_80038AE8(v104, v105 - 32);
      goto LABEL_88;
    }
    goto LABEL_86;
  }
  v95 = TM3_DRAFT_I8(32 * TM3_DRAFT_U8(TM3_DRAFT_I32(v141) + 95) + dword_80089C94 + 10);
  if ( v95 <= 0 )
  {
    v104 = TM3_DRAFT_U32(a1 + 3312);
    if ( !v104 )
      goto LABEL_88;
LABEL_86:
    sub_8004A570(v104);
    TM3_DRAFT_U32(a1 + 3312) = 0;
    goto LABEL_88;
  }
  v96 = sub_80015684(TM3_DRAFT_U32(TM3_DRAFT_I32(v141) + 96) - 0x400000, 34, 18);
  v97 = TM3_DRAFT_I32(v94);
  v98 = v96 + 1962;
  v99 = TM3_DRAFT_U32(a1 + 3312);
  v100 = TM3_DRAFT_I8(32 * TM3_DRAFT_U8(v97 + 95) + dword_80089C94 + 9);
  if ( !v99 )
    goto LABEL_80;
  if ( TM3_DRAFT_U32(v99) >= v100 && v100 + v95 - 1 >= TM3_DRAFT_U32(v99) )
  {
    sub_80038AFC((int)v99, v98);
  }
  else
  {
    sub_8004A570((int)v99);
    TM3_DRAFT_U32(a1 + 3312) = 0;
  }
  if ( !TM3_DRAFT_U32(a1 + 3312) )
  {
LABEL_80:
    v101 = sub_80039FD4();
    v102 = sub_8004A294(22, v100 + v101 % v95, 5, a1, v98);
    v103 = TM3_DRAFT_I8(a1 + 3328);
    TM3_DRAFT_U32(a1 + 3312) = v102;
    if ( v103 == 1 )
      sub_80047364(TM3_DRAFT_U32(a1 + 3924), 18);
  }
LABEL_88:
  v106 = sub_80015684(abs32(TM3_DRAFT_U32(a1 + 4044)), TM3_DRAFT_U32(a1 + 3296), 18);
  v107 = TM3_DRAFT_U32(a1 + 3300);
  v108 = abs32(TM3_DRAFT_U32(a1 + 4048));
  TM3_DRAFT_U32(a1 + 4044) = v106;
  result = (int)(v108 * v107) >> 19;
  TM3_DRAFT_U32(a1 + 4048) = result;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8004BAC0(uint32 a1)
{
  char v2; 
  int v3; 
  int v4; 
  int v5; 
  uint32 v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  sint16 v16; 
  sint16 v17; 
  sint16 v18; 
  sint16 v19; 
  sint16 v20; 
  uint8 v21; 
  sint16 v22; 
  sint16 v23; 
  sint16 v24; 
  int v25; 
  int v26; 
  sint16 v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  uint32 v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  uint32 v39; 
  uint32 v40; 
  int v41; 
  uint32 v42; 
  int result; 
  uint32 v44; 
  int v45; 
  sint16 v46; 

  if ( TM3_DRAFT_U32(0x80089C00u + (1) * 4u) )
  {
    TM3_DRAFT_U32(0x80089E58u + (0) * 4u) = 1;
    TM3_DRAFT_U32(0x80089E60u + (0) * 4u) = 65537;
    TM3_DRAFT_U32(0x80089E90u + (0) * 4u) = 2816;
    LOWORD(TM3_DRAFT_U32(0x80089E90u + (1) * 4u)) = 6282;
    TM3_DRAFT_U32(0x80089E74u + (4) * 4u) = 2821;
    LOWORD(TM3_DRAFT_U32(0x80089E74u + (5) * 4u)) = 117;
    TM3_DRAFT_U32(0x80089E74u + (2) * 4u) = 268435904;
    LOWORD(TM3_DRAFT_U32(0x80089E74u + (3) * 4u)) = 691;
    TM3_DRAFT_U32(0x80089C00u + (1) * 4u) = 0;
    LOWORD(TM3_DRAFT_U32(0x80089E58u + (1) * 4u)) = -1;
    LOWORD(TM3_DRAFT_U32(0x80089E60u + (1) * 4u)) = -1;
    TM3_DRAFT_U32(0x80089E68u + (0) * 4u) = 0;
    LOWORD(TM3_DRAFT_U32(0x80089E68u + (1) * 4u)) = 0;
    TM3_DRAFT_U32(0x80089E74u + (0) * 4u) = 0;
    LOWORD(TM3_DRAFT_U32(0x80089E74u + (1) * 4u)) = 3711;
  }
  sub_8005AEB4(a1 + 134096);
  sub_8005AD94(a1 + 134096, 1);
  TM3_DRAFT_U8(a1 + 134100) = TM3_DRAFT_U8(dword_80089CBC);
  TM3_DRAFT_U8(a1 + 134101) = TM3_DRAFT_U8(dword_80089CBC + 1);
  v2 = TM3_DRAFT_U8(dword_80089CBC + 2);
  TM3_DRAFT_U16(a1 + 134108) = 320;
  TM3_DRAFT_U16(a1 + 134104) = 0;
  TM3_DRAFT_U16(a1 + 134106) = 0;
  TM3_DRAFT_U16(a1 + 134110) = 240;
  TM3_DRAFT_U8(a1 + 134102) = v2;
  v3 = TM3_DRAFT_U32(a1 + 134100);
  v4 = TM3_DRAFT_U32(a1 + 134104);
  v5 = TM3_DRAFT_U32(a1 + 134108);
  TM3_DRAFT_U32(a1 + 134112) = TM3_DRAFT_U32(a1 + 134096);
  TM3_DRAFT_U32(a1 + 134116) = v3;
  TM3_DRAFT_U32(a1 + 134120) = v4;
  TM3_DRAFT_U32(a1 + 134124) = v5;
  sub_8005AEF4(a1 + 134128, 0, TM3_DRAFT_U32(0x800d2ef0u), 0);
  sub_8005AE74(a1 + 134136);
  if ( TM3_DRAFT_U32(0x800d2f20u) == 2 )
    v6 = (uint32)(dword_80089E70 + 8);
  else
    v6 = (uint32)dword_80089CA0;
  TM3_DRAFT_U16(a1 + 134150) = TM3_DRAFT_U16(v6 +(1) * 2u);
  TM3_DRAFT_U16(a1 + 134162) = TM3_DRAFT_U16(v6 +(3) * 2u);
  v7 = TM3_DRAFT_U8(v6);
  v8 = TM3_DRAFT_U8(v6 + (4) * 1u);
  v9 = TM3_DRAFT_U8(v6 + (5) * 1u);
  v10 = TM3_DRAFT_U8(v6 + (1) * 1u);
  TM3_DRAFT_U8(a1 + 134148) = v7;
  v11 = v8 - v7;
  TM3_DRAFT_U8(a1 + 134149) = TM3_DRAFT_U8(v6 + (1) * 1u);
  v12 = v11 + 1;
  TM3_DRAFT_U8(a1 + 134160) = TM3_DRAFT_U8(v6) + v11 + 1;
  TM3_DRAFT_U8(a1 + 134161) = TM3_DRAFT_U8(v6 + (1) * 1u);
  v13 = v9 - v10;
  TM3_DRAFT_U8(a1 + 134172) = TM3_DRAFT_U8(v6);
  v14 = v13 + 1;
  TM3_DRAFT_U8(a1 + 134173) = TM3_DRAFT_U8(v6 + (1) * 1u) + v13 + 1;
  TM3_DRAFT_U8(a1 + 134184) = TM3_DRAFT_U8(v6) + v11 + 1;
  TM3_DRAFT_U8(a1 + 134185) = TM3_DRAFT_U8(v6 + (1) * 1u) + v13 + 1;
  if ( TM3_DRAFT_U32(0x800d2f20u) != 2 && sub_80048078(6) )
  {
    v12 *= 3;
    v14 *= 2;
  }
  v15 = 160 - v12 / 2;
  v16 = 60 - v14 / 2;
  v17 = v12 + 161 - v12 / 2;
  TM3_DRAFT_U16(a1 + 134146) = v16;
  TM3_DRAFT_U16(a1 + 134158) = v16;
  v18 = v14 + 61 - v14 / 2;
  TM3_DRAFT_U16(a1 + 134156) = v17;
  TM3_DRAFT_U16(a1 + 134180) = v17;
  TM3_DRAFT_U16(a1 + 134170) = v18;
  TM3_DRAFT_U16(a1 + 134182) = v18;
  TM3_DRAFT_U16(a1 + 134144) = v15;
  TM3_DRAFT_U16(a1 + 134168) = v15;
  TM3_DRAFT_U8(0x800d3923u) = 0;
  TM3_DRAFT_U8(0x800d3920u) = 0;
  TM3_DRAFT_U8(0x800d3924u) = 0;
  TM3_DRAFT_U8(0x800d3921u) = 0;
  TM3_DRAFT_U8(0x800d3925u) = 0;
  TM3_DRAFT_U8(0x800d3922u) = 0;
  TM3_DRAFT_U8(0x800d3937u) = 0;
  TM3_DRAFT_U8(0x800d3934u) = 0;
  TM3_DRAFT_U8(0x800d3938u) = 0;
  TM3_DRAFT_U8(0x800d3935u) = 0;
  TM3_DRAFT_U8(0x800d3939u) = 0;
  TM3_DRAFT_U8(0x800d3936u) = 0;
  TM3_DRAFT_U8(0x800d394bu) = 0;
  TM3_DRAFT_U8(0x800d3948u) = 0;
  TM3_DRAFT_U8(0x800d394cu) = 0;
  TM3_DRAFT_U8(0x800d3949u) = 0;
  TM3_DRAFT_U8(0x800d394du) = 0;
  TM3_DRAFT_U8(0x800d394au) = 0;
  TM3_DRAFT_U8(0x800d395fu) = 0;
  TM3_DRAFT_U8(0x800d395cu) = 0;
  TM3_DRAFT_U8(0x800d3960u) = 0;
  TM3_DRAFT_U8(0x800d395du) = 0;
  TM3_DRAFT_U8(0x800d3961u) = 0;
  TM3_DRAFT_U32(0x800d395eu) = 0;
  sub_8005AE34(a1 + 134188);
  sub_8005AD94(a1 + 134188, 1);
  TM3_DRAFT_U8(a1 + 134192) = 0;
  TM3_DRAFT_U8(a1 + 134193) = 0;
  TM3_DRAFT_U8(a1 + 134194) = 0;
  TM3_DRAFT_U16(a1 + 134202) = TM3_DRAFT_U16(v6 +(1) * 2u);
  TM3_DRAFT_U16(a1 + 134210) = TM3_DRAFT_U16(v6 +(3) * 2u);
  TM3_DRAFT_U8(a1 + 134200) = TM3_DRAFT_U8(v6);
  TM3_DRAFT_U8(a1 + 134201) = TM3_DRAFT_U8(v6 + (1) * 1u);
  TM3_DRAFT_U8(a1 + 134208) = TM3_DRAFT_U8(v6) + v12;
  TM3_DRAFT_U8(a1 + 134209) = TM3_DRAFT_U8(v6 + (1) * 1u);
  TM3_DRAFT_U8(a1 + 134216) = TM3_DRAFT_U8(v6);
  TM3_DRAFT_U8(a1 + 134217) = TM3_DRAFT_U8(v6 + (1) * 1u) + v14;
  v19 = TM3_DRAFT_U16(a1 + 134156);
  TM3_DRAFT_U8(a1 + 134224) = TM3_DRAFT_U8(v6) + v12;
  v20 = TM3_DRAFT_U16(a1 + 134144);
  v21 = TM3_DRAFT_U8(v6 + (1) * 1u);
  TM3_DRAFT_U16(a1 + 134204) = v19 + 4;
  TM3_DRAFT_U16(a1 + 134196) = v20 + 4;
  v22 = TM3_DRAFT_U16(a1 + 134168);
  TM3_DRAFT_U16(a1 + 134198) = TM3_DRAFT_U16(a1 + 134146) + 3;
  TM3_DRAFT_U16(a1 + 134206) = TM3_DRAFT_U16(a1 + 134158) + 3;
  v23 = TM3_DRAFT_U16(a1 + 134170);
  TM3_DRAFT_U16(a1 + 134212) = v22 + 4;
  TM3_DRAFT_U8(a1 + 134225) = v21 + v14;
  TM3_DRAFT_U16(a1 + 134214) = v23 + 3;
  v24 = TM3_DRAFT_U16(a1 + 134182) + 3;
  TM3_DRAFT_U16(a1 + 134220) = TM3_DRAFT_U16(a1 + 134180) + 4;
  TM3_DRAFT_U16(a1 + 134222) = v24;
  sub_8005AE54(a1 + 134228);
  sub_8005AD94(a1 + 134228, 1);
  TM3_DRAFT_U8(a1 + 134232) = TM3_DRAFT_U8(dword_80089CBC + 9);
  TM3_DRAFT_U8(a1 + 134233) = TM3_DRAFT_U8(dword_80089CBC + 10);
  TM3_DRAFT_U8(a1 + 134234) = TM3_DRAFT_U8(dword_80089CBC + 11);
  TM3_DRAFT_U8(a1 + 134240) = TM3_DRAFT_U8(dword_80089CBC + 9);
  TM3_DRAFT_U8(a1 + 134241) = TM3_DRAFT_U8(dword_80089CBC + 10);
  TM3_DRAFT_U8(a1 + 134242) = TM3_DRAFT_U8(dword_80089CBC + 11);
  TM3_DRAFT_U8(a1 + 134248) = TM3_DRAFT_U8(dword_80089CBC + 12);
  TM3_DRAFT_U8(a1 + 134249) = TM3_DRAFT_U8(dword_80089CBC + 13);
  TM3_DRAFT_U8(a1 + 134250) = TM3_DRAFT_U8(dword_80089CBC + 14);
  TM3_DRAFT_U8(a1 + 134256) = TM3_DRAFT_U8(dword_80089CBC + 12);
  TM3_DRAFT_U8(a1 + 134257) = TM3_DRAFT_U8(dword_80089CBC + 13);
  TM3_DRAFT_U8(a1 + 134258) = TM3_DRAFT_U8(dword_80089CBC + 14);
  sub_8005AE54(a1 + 134264);
  sub_8005AD94(a1 + 134264, 1);
  TM3_DRAFT_U8(a1 + 134268) = TM3_DRAFT_U8(dword_80089CBC + 15);
  TM3_DRAFT_U8(a1 + 134269) = TM3_DRAFT_U8(dword_80089CBC + 16);
  TM3_DRAFT_U8(a1 + 134270) = TM3_DRAFT_U8(dword_80089CBC + 17);
  TM3_DRAFT_U8(a1 + 134276) = TM3_DRAFT_U8(dword_80089CBC + 15);
  TM3_DRAFT_U8(a1 + 134277) = TM3_DRAFT_U8(dword_80089CBC + 16);
  TM3_DRAFT_U8(a1 + 134278) = TM3_DRAFT_U8(dword_80089CBC + 17);
  TM3_DRAFT_U8(a1 + 134284) = TM3_DRAFT_U8(dword_80089CBC + 18);
  v25 = 0;
  TM3_DRAFT_U8(a1 + 134285) = TM3_DRAFT_U8(dword_80089CBC + 19);
  TM3_DRAFT_U8(a1 + 134286) = TM3_DRAFT_U8(dword_80089CBC + 20);
  v26 = 134308;
  TM3_DRAFT_U8(a1 + 134292) = TM3_DRAFT_U8(dword_80089CBC + 18);
  TM3_DRAFT_U8(a1 + 134293) = TM3_DRAFT_U8(dword_80089CBC + 19);
  TM3_DRAFT_U8(a1 + 134294) = TM3_DRAFT_U8(dword_80089CBC + 20);
  v27 = sub_8005AD34(0, 0, 0, 0);
  sub_8005AEF4(a1 + 134300, 0, TM3_DRAFT_U32(0x800d2ef0u), v27);
  v28 = a1;
  do
  {
    sub_8005AEB4(a1 + v26);
    sub_8005AD94(a1 + v26, 0);
    v29 = v28 + 134308;
    TM3_DRAFT_U8(v28 + 134312) = TM3_DRAFT_U8(dword_80089CBC + 12);
    v28 += 16;
    TM3_DRAFT_U8(v29 + 5) = TM3_DRAFT_U8(dword_80089CBC + 13);
    ++v25;
    TM3_DRAFT_U8(v29 + 6) = TM3_DRAFT_U8(dword_80089CBC + 14);
    v26 += 16;
  }
  while ( v25 < 4 );
  sub_8005AEB4(a1 + 134436);
  sub_8005AD94(a1 + 134436, 0);
  TM3_DRAFT_U8(a1 + 134440) = 0;
  TM3_DRAFT_U8(a1 + 134441) = 0;
  TM3_DRAFT_U8(a1 + 134442) = 0;
  sub_8005AEB4(a1 + 134452);
  sub_8005AD94(a1 + 134452, 1);
  v30 = 0;
  v31 = a1;
  v32 = 134372;
  TM3_DRAFT_U8(a1 + 134456) = 0;
  TM3_DRAFT_U8(a1 + 134457) = 0;
  TM3_DRAFT_U8(a1 + 134458) = 0;
  do
  {
    sub_8005AEB4(a1 + v32);
    sub_8005AD94(a1 + v32, 0);
    v33 = (uint32)(v31 + 134372);
    v31 += 16;
    ++v30;
    TM3_DRAFT_U8(v33 + (4) * 1u) = -1;
    TM3_DRAFT_U8(v33 + (5) * 1u) = -1;
    TM3_DRAFT_U8(v33 + (6) * 1u) = -1;
    v32 += 16;
  }
  while ( v30 < 4 );
  v34 = 0;
  v35 = a1;
  v36 = 134468;
  TM3_DRAFT_U16(a1 + 134418) = 2;
  TM3_DRAFT_U16(a1 + 134386) = 2;
  TM3_DRAFT_U16(a1 + 134432) = 2;
  TM3_DRAFT_U16(a1 + 134400) = 2;
  do
  {
    sub_8005AE54(a1 + v36);
    v37 = v35 + 134468;
    v35 += 36;
    v36 += 36;
    ++v34;
    TM3_DRAFT_U8(v37 + 13) = 64;
    TM3_DRAFT_U8(v37 + 29) = 16;
    TM3_DRAFT_U16(v37 + 4) = 220;
    TM3_DRAFT_U8(v37 + 6) = 0;
    TM3_DRAFT_U8(v37 + 12) = -36;
    TM3_DRAFT_U8(v37 + 14) = 0;
    TM3_DRAFT_U16(v37 + 20) = 55;
    TM3_DRAFT_U8(v37 + 22) = 0;
    TM3_DRAFT_U8(v37 + 28) = 55;
    TM3_DRAFT_U8(v37 + 30) = 0;
  }
  while ( v34 < 2 );
  v38 = 0;
  v39 = dword_80080BC4;
  v40 = (uint32)a1;
  v41 = 134588;
  do
  {
    sub_8005AED4(a1 + v41);
    v42 = v40 + 134588;
    TM3_DRAFT_U8(v40 + (134592) * 1u) = TM3_DRAFT_U8((v39 + (4) * 4u));
    TM3_DRAFT_U8(v40 + (134593) * 1u) = TM3_DRAFT_U8((v39 + (5) * 4u));
    TM3_DRAFT_U8(v40 + (134594) * 1u) = TM3_DRAFT_U8((v39 + (6) * 4u));
    TM3_DRAFT_U8(v40 + (134600) * 1u) = TM3_DRAFT_U8((v39 + (12) * 4u));
    TM3_DRAFT_U8(v40 + (134601) * 1u) = TM3_DRAFT_U8((v39 + (13) * 4u));
    TM3_DRAFT_U8(v40 + (134602) * 1u) = TM3_DRAFT_U8((v39 + (14) * 4u));
    v40 += (20) * 1u;
    TM3_DRAFT_U16(v42 + (4) * 2u) = TM3_DRAFT_U16(v39);
    v41 += 20;
    TM3_DRAFT_U16(v42 + (5) * 2u) = TM3_DRAFT_U16(v39 +(1) * 2u);
    ++v38;
    TM3_DRAFT_U16(v42 + (8) * 2u) = TM3_DRAFT_U16(v39 +(4) * 2u);
    TM3_DRAFT_U16(v42 + (9) * 2u) = TM3_DRAFT_U16(v39 +(5) * 2u);
    v39 += (4) * 4u;
  }
  while ( v38 < 4 );
  word_8007F27E = TM3_DRAFT_U16(dword_80089CA0 + 198);
  word_8007F280 = TM3_DRAFT_U16(dword_80089CA0 + 194);
  byte_8007F27C = TM3_DRAFT_U8(dword_80089CA0 + 192);
  byte_8007F27D = TM3_DRAFT_U8(dword_80089CA0 + 193);
  result = 2;
  if ( TM3_DRAFT_U32(0x800d2f20u) == 2 )
  {
    sub_8005AE94(a1 + 134668);
    sub_8005ADC4(a1 + 134668, 1);
    v44 = (uint32)dword_80089E70;
    TM3_DRAFT_U16(a1 + 134684) = TM3_DRAFT_U8(dword_80089E70 + 4) - TM3_DRAFT_U8(dword_80089E70) + 1;
    TM3_DRAFT_U16(a1 + 134686) = (uint8)TM3_DRAFT_U8(v44 + (5) * 1u) - (uint8)TM3_DRAFT_U8(v44 + (1) * 1u) + 1;
    TM3_DRAFT_U8(a1 + 134680) = TM3_DRAFT_U8(v44);
    TM3_DRAFT_U8(a1 + 134681) = TM3_DRAFT_U8(dword_80089E70 + 1);
    v45 = dword_80089E70;
    TM3_DRAFT_U16(a1 + 134682) = TM3_DRAFT_U16(dword_80089E70 + 2);
    sub_8005AEF4(a1 + 134688, 0, TM3_DRAFT_U32(0x800d2ef0u), TM3_DRAFT_U16(v45 + 6));
    TM3_DRAFT_U16(a1 + 134676) = 0;
    TM3_DRAFT_U16(a1 + 134678) = 0;
    sub_8005AE54(a1 + 134696);
    sub_8005AD94(a1 + 134696, 1);
    TM3_DRAFT_U16(a1 + 134704) = 152;
    TM3_DRAFT_U16(a1 + 134720) = 152;
    TM3_DRAFT_U16(a1 + 134706) = 0;
    TM3_DRAFT_U32(a1 + 134712) = 160;
    TM3_DRAFT_U16(a1 + 134722) = 240;
    TM3_DRAFT_U16(a1 + 134728) = 160;
    TM3_DRAFT_U16(a1 + 134730) = 240;
    TM3_DRAFT_U8(a1 + 134700) = 0;
    TM3_DRAFT_U8(a1 + 134701) = 0;
    TM3_DRAFT_U8(a1 + 134702) = 0;
    TM3_DRAFT_U8(a1 + 134708) = 0x80;
    TM3_DRAFT_U8(a1 + 134709) = 0x80;
    TM3_DRAFT_U8(a1 + 134710) = 0x80;
    TM3_DRAFT_U8(a1 + 134716) = 0;
    TM3_DRAFT_U8(a1 + 134717) = 0;
    TM3_DRAFT_U8(a1 + 134718) = 0;
    TM3_DRAFT_U8(a1 + 134724) = 0x80;
    TM3_DRAFT_U8(a1 + 134725) = 0x80;
    TM3_DRAFT_U8(a1 + 134726) = 0x80;
    sub_8005AE54(a1 + 134732);
    sub_8005AD94(a1 + 134732, 1);
    TM3_DRAFT_U16(a1 + 134748) = 168;
    TM3_DRAFT_U16(a1 + 134764) = 168;
    TM3_DRAFT_U16(a1 + 134740) = 160;
    TM3_DRAFT_U16(a1 + 134742) = 0;
    TM3_DRAFT_U16(a1 + 134750) = 0;
    TM3_DRAFT_U16(a1 + 134756) = 160;
    TM3_DRAFT_U16(a1 + 134758) = 240;
    TM3_DRAFT_U16(a1 + 134766) = 240;
    TM3_DRAFT_U8(a1 + 134736) = 32;
    TM3_DRAFT_U8(a1 + 134737) = 32;
    TM3_DRAFT_U8(a1 + 134738) = 32;
    TM3_DRAFT_U8(a1 + 134744) = 0;
    TM3_DRAFT_U8(a1 + 134745) = 0;
    TM3_DRAFT_U8(a1 + 134746) = 0;
    TM3_DRAFT_U8(a1 + 134752) = 32;
    TM3_DRAFT_U8(a1 + 134753) = 32;
    TM3_DRAFT_U8(a1 + 134754) = 32;
    TM3_DRAFT_U8(a1 + 134760) = 0;
    TM3_DRAFT_U8(a1 + 134761) = 0;
    TM3_DRAFT_U8(a1 + 134762) = 0;
    v46 = sub_8005AD34(0, 2, 0, 0);
    return sub_8005AEF4(a1 + 134768, 0, TM3_DRAFT_U32(0x800d2ef0u), v46);
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001EC44(uint32 a1, uint32 a2)
{
  sint16 v4; 
  sint16 v5; 
  int v6; 
  int v7; 
  uint32 v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  sint16 v18; 
  sint16 v19; 
  sint16 v20; 
  sint16 v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  unsigned int v31; 
  int v32; 
  int v33; 
  uint32 v34; 
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
  uint32 v45; 
  int v46; 
  int v47; 
  int v48; 
  uint32 v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  uint32 v57; 
  sint16 v58; 
  sint16 v59; 
  int v60; 
  uint32 v61; 
  int v62; 
  int v63; 
  sint32 v64; 
  sint16 v65; 
  sint16 v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  uint32 v72; 
  int v73; 
  uint32 v74; 
  int v75; 
  int v76; 
  uint32 v77; 
  uint32 v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  uint32 v86; 
  uint32 v87; 
  int v88; 
  uint32 v89; 
  uint32 v90; 
  int v91; 
  int v92; 
  int v93; 
  int result; 
  sint16 v95[4]; 
  sint32 squared_vector[3];
  int v99; 
  int v100; 
  int v101; 
  int v102[4]; 

  sub_80026008(a1, 0, (uint32)(a1 + 88), (uint32)(a1 + 90));
  sub_80026008(a1, 3, (uint32)(a1 + 248), (uint32)(a1 + 250));
  sub_80026008(a1, 1, (uint32)(a1 + 168), (uint32)(a1 + 170));
  sub_80026008(a1, 2, (uint32)(a1 + 328), (uint32)(a1 + 330));
  if ( !TM3_DRAFT_U16(a1 + 88) )
    TM3_DRAFT_U16(a1 + 88) = TM3_DRAFT_U16(a1 + 168);
  if ( !TM3_DRAFT_U16(a1 + 168) )
    TM3_DRAFT_U16(a1 + 168) = TM3_DRAFT_U16(a1 + 88);
  if ( !TM3_DRAFT_U16(a1 + 328) )
    TM3_DRAFT_U16(a1 + 328) = TM3_DRAFT_U16(a1 + 248);
  if ( !TM3_DRAFT_U16(a1 + 248) )
    TM3_DRAFT_U16(a1 + 248) = TM3_DRAFT_U16(a1 + 328);
  if ( !TM3_DRAFT_U16(a1 + 88) )
  {
    if ( TM3_DRAFT_U16(a1 + 328) )
      v4 = TM3_DRAFT_U16(a1 + 328);
    else
      v4 = TM3_DRAFT_U16(a1 + 248);
    TM3_DRAFT_U16(a1 + 88) = v4;
    TM3_DRAFT_U16(a1 + 168) = v4;
  }
  if ( !TM3_DRAFT_U16(a1 + 328) )
  {
    if ( TM3_DRAFT_U16(a1 + 88) )
      v5 = TM3_DRAFT_U16(a1 + 88);
    else
      v5 = TM3_DRAFT_U16(a1 + 168);
    TM3_DRAFT_U16(a1 + 328) = v5;
    TM3_DRAFT_U16(a1 + 248) = v5;
  }
  v6 = 0;
  if ( !TM3_DRAFT_U16(a1 + 88) )
  {
    TM3_DRAFT_U16(a1 + 88) = 22;
    TM3_DRAFT_U16(a1 + 248) = 22;
    TM3_DRAFT_U16(a1 + 168) = 22;
    TM3_DRAFT_U16(a1 + 328) = 22;
  }
  v7 = a1;
  v8 = 0x8007DF78u;
  do
  {
    TM3_DRAFT_U32(v7 + 72) = sub_80025F98(a1, 0, TM3_DRAFT_I32(v8));
    if ( !a2 )
    {
      TM3_DRAFT_U8(v7 + 147) = v6 + 5;
      TM3_DRAFT_U8(v7 + 146) = v6 + 5;
      TM3_DRAFT_U8(v7 + 86) = v6 + 5;
    }
    v7 += 80;
    ++v6;
    (v8 += 4u);
  }
  while ( v6 < 4 );
  v9 = 0;
  v10 = a1;
  do
  {
    v11 = 0;
    v12 = 4 * v9;
    v13 = TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 2 * v9 + 8);
    TM3_DRAFT_U32(v10 + 3236) = v13;
    v14 = sub_80015684(v13, v13, 12);
    v15 = a1;
    TM3_DRAFT_U32(v10 + 3240) = sub_80015684(TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 4040) + 28), v14, 12);
    do
    {
      v16 = (sint32)((uint32)TM3_DRAFT_U32(TM3_DRAFT_U32(v15 + 68)) * (uint32)TM3_DRAFT_I16(v15 + 88) * (uint32)TM3_DRAFT_I16(v15 + 88)) / 2
          + sub_80015684(TM3_DRAFT_U32(v10 + 3236), TM3_DRAFT_U32(v10 + 3236), 12);
      ++v11;
      v15 += 80;
      v17 = a1 + v12;
      v12 += 80;
      TM3_DRAFT_U32(v17 + 120) = 0x40000000 / v16;
      TM3_DRAFT_U32(v17 + 120) = sub_80015684(0x40000000 / v16, 8738, 18);
    }
    while ( v11 < 4 );
    ++v9;
    v10 += 8;
  }
  while ( v9 < 6 );
  sub_800262D0(a1, (uint32)(a1 + 936), (uint32)(a1 + 944));
  sub_8001E8FC((uint32)(a1 + 936));
  v18 = TM3_DRAFT_U16(a1 + 938);
  v19 = TM3_DRAFT_U16(a1 + 940);
  TM3_DRAFT_U16(a1 + 392) = TM3_DRAFT_U16(a1 + 936);
  TM3_DRAFT_U16(a1 + 394) = v18;
  TM3_DRAFT_U16(a1 + 396) = v19;
  v20 = TM3_DRAFT_U16(a1 + 946);
  v21 = TM3_DRAFT_U16(a1 + 948);
  TM3_DRAFT_U16(a1 + 400) = TM3_DRAFT_U16(a1 + 944);
  TM3_DRAFT_U16(a1 + 402) = v20;
  TM3_DRAFT_U16(a1 + 404) = v21;
  v22 = TM3_DRAFT_U32(a1 + 4040);
  TM3_DRAFT_U16(a1 + 394) = (TM3_DRAFT_I16(a1 + 394) * TM3_DRAFT_I16(v22 + 44) + 2048) >> 12;
  v23 = TM3_DRAFT_I16(a1 + 392) * (TM3_DRAFT_I16(v22 + 46) + 4096);
  v24 = TM3_DRAFT_U32(a1 + 4040);
  TM3_DRAFT_U16(a1 + 392) = (v23 / 2 + 2048) >> 12;
  v25 = TM3_DRAFT_I16(a1 + 400) * (TM3_DRAFT_I16(v24 + 46) + 4096);
  v26 = TM3_DRAFT_U32(a1 + 4040);
  TM3_DRAFT_U16(a1 + 400) = (v25 / 2 + 2048) >> 12;
  v27 = TM3_DRAFT_I16(a1 + 396) * (TM3_DRAFT_I16(v26 + 48) + 4096);
  v28 = TM3_DRAFT_U32(a1 + 4040);
  TM3_DRAFT_U16(a1 + 396) = (v27 / 2 + 2048) >> 12;
  TM3_DRAFT_U16(a1 + 404) = (TM3_DRAFT_I16(a1 + 404) * (TM3_DRAFT_I16(v28 + 48) + 4096) / 2 + 2048) >> 12;
  sub_8001E8FC((uint32)(a1 + 392));
  v29 = TM3_DRAFT_I16(a1 + 1018);
  v30 = TM3_DRAFT_I16(a1 + 1020);
  squared_vector[0] = TM3_DRAFT_I16(a1 + 1016);
  squared_vector[1] = v29;
  squared_vector[2] = v30;
  sub_8005C0FC(TM3_DRAFT_LOCAL_ADDRESS(squared_vector, sizeof(squared_vector)), TM3_DRAFT_LOCAL_ADDRESS(squared_vector, sizeof(squared_vector)));
  v31 = sub_8005B124((sint32)((uint32)squared_vector[0] + (uint32)squared_vector[1] + (uint32)squared_vector[2]) / 4);
  v32 = 0;
  v33 = 0;
  v34 = (uint32)a1;
  v35 = a1;
  TM3_DRAFT_U32(a1 - 24) = v31;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  do
  {
    v36 = TM3_DRAFT_U32(v35 + 1592);
    v37 = (sint32)((uint32)TM3_DRAFT_I16(v34 + (476) * 2u) * (uint32)v36);
    v38 = (sint32)((uint32)TM3_DRAFT_I16(v34 + (477) * 2u) * (uint32)v36);
    v39 = TM3_DRAFT_I16(v34 + (478) * 2u);
    v34 += (4) * 2u;
    v35 += 112;
    ++v33;
    v32 = (sint32)((uint32)v32 + (uint32)v36);
    v99 = (sint32)((uint32)v99 + (uint32)v37);
    v100 = (sint32)((uint32)v100 + (uint32)v38);
    v101 = (sint32)((uint32)v101 + (uint32)v39 * (uint32)v36);
  }
  while ( v33 < 8 );
  v40 = v100 / v32;
  v41 = v101 / v32;
  v42 = 0;
  v43 = a1;
  v44 = 1488;
  v45 = 0x8007DF48u;
  TM3_DRAFT_U16(a1 + 1480) = v99 / v32;
  TM3_DRAFT_U16(a1 + 1482) = v40;
  TM3_DRAFT_U16(a1 + 1484) = v41;
  do
  {
    v46 = 0;
    v47 = 0;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    do
    {
      v48 = TM3_DRAFT_U8(0x8007DF48u + v47 + v42);
      v49 = (uint32)(8 * v48 + a1);
      v50 = TM3_DRAFT_U32(a1 + 112 * v48 + 1592);
      v51 = (sint32)((uint32)TM3_DRAFT_I16(v49 + (476) * 2u) * (uint32)v50);
      v49 += (476) * 2u;
      v52 = v51;
      v53 = (sint32)((uint32)TM3_DRAFT_I16(v49 + (2) * 2u) * (uint32)v50);
      ++v47;
      v46 = (sint32)((uint32)v46 + (uint32)v50);
      v54 = (sint32)((uint32)v100 + (uint32)TM3_DRAFT_I16(v49 + (1) * 2u) * (uint32)v50);
      v99 = (sint32)((uint32)v99 + (uint32)v52);
      v100 = v54;
      v101 = (sint32)((uint32)v101 + (uint32)v53);
    }
    while ( v47 < 4 );
    v55 = v100 / v46;
    v56 = v101 / v46;
    v57 = (uint32)(a1 + v44);
    TM3_DRAFT_U16(v57) = v99 / v46;
    TM3_DRAFT_U16(v57 + (1) * 2u) = v55;
    TM3_DRAFT_U16(v57 + (2) * 2u) = v56;
    if (v45 < 0x8007DF60u)
    {
      uint32 axis = ((v45 - 0x8007DF48u) / 4u) % 3u;
      uint32 selected = TM3_DRAFT_U8(v45);
      TM3_DRAFT_U16(a1 + v44 + 2u * axis) = TM3_DRAFT_U16(a1 + 952u + 8u * selected + 2u * axis);
    }
    (v45 += 4u);
    v42 += 4;
    v43 += 8;
    v44 += 8;
  }
  while ( (int)v45 < (int)0x8007DF60u );
  v58 = TM3_DRAFT_U16(a1 + 1544);
  v59 = TM3_DRAFT_U16(a1 + 1550);
  v95[0] = TM3_DRAFT_U16(a1 + 1538);
  v95[1] = v58;
  v95[2] = v59;
  sub_80014080(a1 + 1580, ((TM3_DRAFT_I16(a1 + 1018) > 0) - TM3_DRAFT_I16(a1 + 1018)) >> 1, TM3_DRAFT_LOCAL_ADDRESS(v95, sizeof(v95)), a1 + 1556);
  v60 = 0;
  if ( !a2 )
  {
    sub_80023B38(a1);
    v60 = 0;
  }
  v61 = (uint32)a1;
  v62 = 68;
  v63 = 1592;
  do
  {
    v64 = v60 < 4;
    if ( !a2 )
    {
      v65 = TM3_DRAFT_U16(a1 + v63 + 14);
      v66 = TM3_DRAFT_U16(a1 + v63 + 16);
      TM3_DRAFT_U16(a1 + v63 + 4) = TM3_DRAFT_U16(a1 + v63 + 12);
      v67 = a1 + v63 + 4;
      TM3_DRAFT_U16(v67 + 2) = v65;
      TM3_DRAFT_U16(v67 + 4) = v66;
      v64 = v60 < 4;
    }
    if ( v64 )
      TM3_DRAFT_U32(v61 + (418) * 4u) = a1 + v62;
    else
      TM3_DRAFT_U32(v61 + (418) * 4u) = 0;
    v68 = 0x40000000 / TM3_DRAFT_I32(v61 + (398) * 4u);
    TM3_DRAFT_U32(v61 + (423) * 4u) = TM3_DRAFT_U32(v61 + (398) * 4u) * dword_80089CE0;
    TM3_DRAFT_U32(v61 + (424) * 4u) = v68;
    v69 = sub_80015684(v68, 8738, 18);
    v62 += 80;
    v63 += 112;
    ++v60;
    TM3_DRAFT_U32(v61 + (424) * 4u) = v69;
    TM3_DRAFT_U32(v61 + (425) * 4u) = 0x40000000 / v69;
    v61 += (28) * 4u;
  }
  while ( v60 < 8 );
  TM3_DRAFT_U32(a1 + 2488) = a1 + 2488;
  v70 = 0;
  v71 = 2492;
  v72 = 0x8007DF10u;
  v73 = a1;
  do
  {
    v74 = (uint32)(a1 + v71 + 16);
    TM3_DRAFT_U32(v73 + 2492) = a1 + 112 * TM3_DRAFT_U8(v72) + 1592;
    v71 += 24;
    TM3_DRAFT_U32(v73 + 2496) = a1 + 112 * TM3_DRAFT_U8(v72 + 1u) + 1592;
    v75 = TM3_DRAFT_U8(v72 + 1u);
    v76 = TM3_DRAFT_U8(v72);
    v72 = (uint32)((uint32)(v72 + 2u));
    v77 = (uint32)(a1 + 8 * v75);
    v78 = (uint32)(a1 + 8 * v76);
    v79 = TM3_DRAFT_I16(v78 + (204) * 2u);
    v80 = TM3_DRAFT_I16(v78 + (205) * 2u);
    v81 = TM3_DRAFT_I16(v78 + (206) * 2u);
    v82 = TM3_DRAFT_I16(v77 + (204) * 2u) - v79;
    v83 = TM3_DRAFT_I16(v77 + (205) * 2u);
    v84 = TM3_DRAFT_I16(v77 + (206) * 2u);
    v102[0] = (sint32)((uint32)v82 << 12u);
    v102[1] = (sint32)((uint32)(v83 - v80) << 12u);
    v102[2] = (sint32)((uint32)(v84 - v81) << 12u);
    TM3_DRAFT_U32(v73 + 2500) = sub_800146A4(TM3_DRAFT_LOCAL_ADDRESS(v102, sizeof(v102)), v74);
    TM3_DRAFT_U8(v73 + 2504) = (unsigned int)v70++ < 4;
    v73 += 24;
  }
  while ( v70 < 28 );
  TM3_DRAFT_U32(a1 + 3164) = a1 + 3164;
  v85 = 0;
  v86 = (uint32)a1;
  do
  {
    v87 = 0x800896D4u + 2u * v85;
    TM3_DRAFT_U32(v86 + (794) * 4u) = 24 * TM3_DRAFT_U8(v87) + a1 + 2508;
    v88 = TM3_DRAFT_U8(v87 + (1) * 1u);
    v89 = (uint32)TM3_DRAFT_U32(v86 + (794) * 4u);
    v90 = (uint32)(a1 + 24 * v88 + 2492 + 16);
    TM3_DRAFT_U32(v86 + (795) * 4u) = v90;
    ++v85;
    v91 = (TM3_DRAFT_I16(v89) * TM3_DRAFT_I16(v90)
         + TM3_DRAFT_I16(v89 + (1) * 2u) * TM3_DRAFT_I16(a1 + 24 * v88 + 2492 + 18)
         + TM3_DRAFT_I16(v89 + (2) * 2u) * TM3_DRAFT_I16(a1 + 24 * v88 + 2492 + 20)
         + 2048) >> 12;
    TM3_DRAFT_U32(v86 + (792) * 4u) = -4096 * sub_80013BA0((((4096 - v91) << 11) + 2048) >> 12);
    v92 = sub_80013BA0((((v91 + 4096) << 11) + 2048) >> 12);
    TM3_DRAFT_U32(v86 + (793) * 4u) = v92;
    v93 = sub_80013BA0((((v92 + 4096) << 11) + 2048) >> 12);
    TM3_DRAFT_U32(v86 + (793) * 4u) = v93;
    TM3_DRAFT_U32(v86 + (793) * 4u) = sub_80013BA0((((v93 + 4096) << 11) + 2048) >> 12) << 12;
    v86 += (4) * 4u;
  }
  while ( v85 < 4 );
  result = a1 + 3232;
  TM3_DRAFT_U32(a1 + 3232) = a1 + 3232;
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_800206A8(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, ...)
{
  int v16; 
  int v17; 
  uint32 v18; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  sint16 v26; 
  sint16 v27; 
  sint16 v28; 
  sint16 v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  unsigned int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  signed int v40; 
  int result; 
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
  int v67; 
  int v68; 
  int v69; 
  uint32 v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  uint32 normal_words[2]; 

  uint32 cross_words[2]; 

  sint16 v81[4]; 
  sint16 v82[4]; 
  int v83[4]; 
  int v84[4]; 
  int v85[4]; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  uint32 v94; 
  uint32 v95; 

  v16 = TM3_DRAFT_U32(a1 + 3948);
  v17 = TM3_DRAFT_I32(a2 + (20) * 4u);
  v18 = (uint32)(a1 + 8 * v16 + 3236);
  if ( TM3_DRAFT_U8(v17 + 77) )
  {
    if ( v16 == 1 )
    {
      TM3_DRAFT_U32(v17 + 48) = TM3_DRAFT_U32(v17 + 56);
      v21 = sub_80015684(TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 4040) + 28), TM3_DRAFT_U32(v17 + 28), 12);
      v22 = TM3_DRAFT_U32(a1 + 3288);
      v86 = 0;
      TM3_DRAFT_U32(v17 + 24) = v22 - v21;
    }
    else
    {
      TM3_DRAFT_U32(v17 + 48) = TM3_DRAFT_U32(v17 + 4 * v16 + 52);
      v20 = sub_80015684(TM3_DRAFT_U32(a1 + 3288), TM3_DRAFT_I32(v18), 12);
      v86 = v20 - sub_80015684(TM3_DRAFT_I32(v18 + (1) * 4u), TM3_DRAFT_U32(v17 + 40), 12);
      TM3_DRAFT_U32(v17 + 24) = 12 * (sub_80015684(TM3_DRAFT_U32(v17 + 40), TM3_DRAFT_I32(v18), 12) - TM3_DRAFT_U32(v17 + 28));
    }
  }
  else
  {
    v23 = TM3_DRAFT_U32(v17 + 56);
    v86 = 0;
    TM3_DRAFT_U32(v17 + 48) = v23;
  }
  if ( TM3_DRAFT_U8(v17 + 76) )
  {
    v24 = TM3_DRAFT_U32(4 * a5 - 2146917520);
    v25 = TM3_DRAFT_U32(4 * a5 - 2146917480);
    v26 = TM3_DRAFT_U16(v17 + 14);
    v27 = TM3_DRAFT_U16(v17 + 16);
    LOWORD(normal_words[0]) = TM3_DRAFT_U16(v17 + 12);
    HIWORD(normal_words[0]) = v26;
    LOWORD(normal_words[1]) = v27;
  }
  else
  {
    v24 = TM3_DRAFT_U32(4 * a5 - 2146917680);
    v25 = TM3_DRAFT_U32(4 * a5 - 2146917600);
    v28 = TM3_DRAFT_U16(a1 + 1546);
    v29 = TM3_DRAFT_U16(a1 + 1552);
    LOWORD(normal_words[0]) = TM3_DRAFT_U16(a1 + 1540);
    HIWORD(normal_words[0]) = v28;
    LOWORD(normal_words[1]) = v29;
  }
  v30 = TM3_DRAFT_I16(TM3_DRAFT_U32(a1 + 4040) + 64);
  v31 = v25 + v30;
  v32 = v24 + v30;
  v88 = v31 * a3;
  v87 = v32 * a3;
  sub_8001560C(TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)), a4, TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
  sub_8005B284(TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
  sub_80013EC8(TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)), a4, TM3_DRAFT_LOCAL_ADDRESS(cross_words, sizeof(cross_words)));
  v34 = TM3_DRAFT_U32(v17 + 40) * TM3_DRAFT_I16(v17 + 20);
  sub_800155A4((a2 + (8) * 4u), a4, TM3_DRAFT_LOCAL_ADDRESS(v83, sizeof(v83)));
  sub_800148DC( TM3_DRAFT_LOCAL_ADDRESS(v83, sizeof(v83)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)), v34, 12);
  TM3_DRAFT_I32(a2 + (24) * 4u) = sub_800146A4( TM3_DRAFT_LOCAL_ADDRESS(v83, sizeof(v83)), TM3_DRAFT_LOCAL_ADDRESS(v82, sizeof(v82)));
  sub_800155A4((a2 + (11) * 4u), a4, TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)));
  v35 = TM3_DRAFT_U32(v17 + 40);
  if ( v35 )
  {
    v36 = (((int)v35 > 0) - (v35 >> 31)) * TM3_DRAFT_U32(v17 + 32);
    goto LABEL_19;
  }
  if ( TM3_DRAFT_I32(a2 + (24) * 4u) > 0 )
  {
    sub_800146A4( TM3_DRAFT_LOCAL_ADDRESS(v83, sizeof(v83)), TM3_DRAFT_LOCAL_ADDRESS(v81, sizeof(v81)));
LABEL_15:
    v38 = -v88;
    goto LABEL_16;
  }
  v37 = sub_800146A4( TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)), TM3_DRAFT_LOCAL_ADDRESS(v81, sizeof(v81)));
  if ( v87 < v37 )
    goto LABEL_15;
  v38 = -v37;
LABEL_16:
  sub_80014B6C( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), TM3_DRAFT_LOCAL_ADDRESS(v81, sizeof(v81)), v38, 12);
  v39 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
  v40 = TM3_DRAFT_U32(v17 + 32);
  if ( v40 >= (int)abs32(v86 + v39) )
  {
    TM3_DRAFT_U32(v17 + 36) = 0;
    return sub_800203D8(a2, a4, a3, v32, v31);
  }
  v36 = ((v86 + v39 > 0) - ((unsigned int)(v86 + v39) >> 31)) * v40;
LABEL_19:
  v86 -= v36;
  if ( TM3_DRAFT_I32(a2 + (24) * 4u) <= 0 )
    v88 = v87;
  sub_80014B6C( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), TM3_DRAFT_LOCAL_ADDRESS(v82, sizeof(v82)), -v88, 12);
  v42 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
  v43 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
  v89 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v83, sizeof(v83)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
  v44 = sub_8002062C(v42, v89, v86, v43, TM3_DRAFT_I32(a2 + (26) * 4u), TM3_DRAFT_I16(v17 + 20));
  v45 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), TM3_DRAFT_LOCAL_ADDRESS(cross_words, sizeof(cross_words)));
  v46 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)), TM3_DRAFT_LOCAL_ADDRESS(cross_words, sizeof(cross_words)));
  v47 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v83, sizeof(v83)), TM3_DRAFT_LOCAL_ADDRESS(cross_words, sizeof(cross_words)));
  v90 = sub_80020608(v45, v47, v46, TM3_DRAFT_I32(a2 + (26) * 4u));
  if ( v90 < v44 )
  {
    v52 = sub_80015684(TM3_DRAFT_I32(a2 + (26) * 4u), v90, 18);
    v53 = sub_80015684(2 * v86, 0x40000 / TM3_DRAFT_I16(v17 + 20), 18);
    v54 = sub_80015684(v43 + 3 * v42 + v53, v52, 18);
    v51 = 0;
    v44 = v90;
    v93 = (((unsigned int)(v89 + v54) >> 31) - (v89 + v54 > 0)) * v88;
    v50 = sub_8002062C(v93, v89 + v54, v86, v43, TM3_DRAFT_I32(a2 + (26) * 4u), TM3_DRAFT_I16(v17 + 20));
    if ( v90 + v50 > 0x3FFFF )
      v44 = 0x40000;
  }
  else
  {
    v48 = sub_80015684(TM3_DRAFT_I32(a2 + (26) * 4u), v44, 18);
    v49 = v47 + sub_80015684(v45 + v46, v48, 18);
    v50 = 0;
    v90 = v44;
    v92 = (((unsigned int)v49 >> 31) - (v49 > 0)) * v88;
    v51 = sub_80020608(v92, v49, v46, TM3_DRAFT_I32(a2 + (26) * 4u));
    if ( v44 + v51 > 0x3FFFF )
      v90 = 0x40000;
  }
  if ( v44 <= 0x3FFFF && v90 <= 0x3FFFF )
  {
    v58 = sub_80015684(v42, v44, 18);
    if ( v50 )
    {
      v58 += sub_80015684(v93, v50, 18);
      v44 += v50;
    }
    v94 = (a2 + (11) * 4u);
    sub_800148DC((a2 + (11) * 4u), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)), v58, 12);
    v59 = v90;
    TM3_DRAFT_U32(v17 + 36) = v58 * TM3_DRAFT_I16(v17 + 20);
    v60 = sub_80015684(v45, v59, 18);
    if ( v51 )
    {
      v60 += sub_80015684(v92, v51, 18);
      v90 += v51;
    }
    v95 = TM3_DRAFT_LOCAL_ADDRESS(cross_words, sizeof(cross_words));
    sub_800148DC(v94, TM3_DRAFT_LOCAL_ADDRESS(cross_words, sizeof(cross_words)), v60, 12);
    v61 = (0u - sub_80015684(v86, 0x40000 / TM3_DRAFT_I16(v17 + 20), 18));
    v91 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
    sub_800148DC( TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)), v61, 12);
    sub_800146A4( TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)), TM3_DRAFT_LOCAL_ADDRESS(v81, sizeof(v81)));
    sub_80014B6C( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), TM3_DRAFT_LOCAL_ADDRESS(v81, sizeof(v81)), -v87, 12);
    v62 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
    v63 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
    v64 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)), v95);
    v65 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), v95);
    if ( (int)abs32(v63) >= (int)abs32(v62) / 3 && (v66 = -v62, (int)abs32(v65) >= (int)abs32(v64)) )
    {
      v71 = v66 / 3;
      v72 = sub_80015684(v62 + v66 / 3 - v91, 0x40000 - v44, 18);
      sub_800148DC(v94, TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)), v72, 12);
      v73 = sub_80015684(v71 * TM3_DRAFT_I16(v17 + 20), 0x40000 - v44, 18);
      v74 = 0x40000 - v90;
      TM3_DRAFT_U32(v17 + 36) += v73;
      v75 = sub_80015684(v64, v74, 18);
      return sub_800148DC(v94, v95, -v75, 12);
    }
    else
    {
      sub_800146A4( TM3_DRAFT_LOCAL_ADDRESS(v85, sizeof(v85)), TM3_DRAFT_LOCAL_ADDRESS(v81, sizeof(v81)));
      sub_80014B6C( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), TM3_DRAFT_LOCAL_ADDRESS(v81, sizeof(v81)), -v88, 12);
      v67 = sub_80013A90( TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), TM3_DRAFT_LOCAL_ADDRESS(normal_words, sizeof(normal_words)));
      v68 = 0x40000 - (v44 - ((v44 - v90) & ((v44 - v90) >> 31)));
      v69 = sub_80015684(v67 * TM3_DRAFT_I16(v17 + 20), v68, 18);
      v70 = v94;
      TM3_DRAFT_U32(v17 + 36) += v86 + v69;
      return sub_8001498C(v70, TM3_DRAFT_LOCAL_ADDRESS(v84, sizeof(v84)), v68, 18);
    }
  }
  else
  {
    TM3_DRAFT_U32(v17 + 36) = v86 + v42 * TM3_DRAFT_I16(v17 + 20);
    v55 = TM3_DRAFT_I32(a2 + (12) * 4u);
    v56 = TM3_DRAFT_I32(a2 + (13) * 4u);
    v57 = v84[1];
    result = v84[2];
    TM3_DRAFT_I32(a2 + (11) * 4u) += v84[0];
    TM3_DRAFT_I32(a2 + (12) * 4u) = v55 + v57;
    TM3_DRAFT_I32(a2 + (13) * 4u) = v56 + result;
  }
  return result;
}
