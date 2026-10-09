#include "game_draft_signatures.h"

/* Unverified drafts, pending guest buffers and original ABI integration */
extern void tm3_draft_gte_write_control(uint32 index, uint32 value);
extern void tm3_draft_gte_write_data(uint32 index, uint32 value);
extern uint32 tm3_draft_gte_read_control(uint32 index);
extern uint32 tm3_draft_gte_read_data(uint32 index);
extern void tm3_draft_gte_command(uint32 instruction);

extern uint32 tm3_draft_local_address(const void *pointer, uint32 bytes);
#define TM3_DRAFT_LOCAL_ADDRESS(pointer, bytes) tm3_draft_local_address((pointer), (bytes))
#define dword_800676CC TM3_DRAFT_U32(0x800676CCu)
#define dword_800678D0 TM3_DRAFT_U32(0x800678D0u)
#define dword_80089C98 TM3_DRAFT_U32(0x80089C98u)
#define dword_80089CB0 TM3_DRAFT_U32(0x80089CB0u)
#define word_80089E00 TM3_DRAFT_U16(0x80089E00u)
#define dword_80089CC0 TM3_DRAFT_U32(0x80089CC0u)
#define dword_8007BC04 TM3_DRAFT_U32(0x8007BC04u)
#define dword_8007BC44 TM3_DRAFT_U32(0x8007BC44u)
#define dword_80089828 TM3_DRAFT_U32(0x80089828u)
#define dword_80089DD0 TM3_DRAFT_U32(0x80089DD0u)
#define dword_80089D14 TM3_DRAFT_U32(0x80089D14u)
#define dword_80089EF0 TM3_DRAFT_U32(0x80089EF0u)
#define dword_80089EF4 TM3_DRAFT_U32(0x80089EF4u)
#define dword_80089EF8 TM3_DRAFT_U32(0x80089EF8u)
#define dword_80089EFC TM3_DRAFT_U32(0x80089EFCu)
#define dword_80089F00 TM3_DRAFT_U32(0x80089F00u)
#define dword_80089F04 TM3_DRAFT_U32(0x80089F04u)
#define dword_80089F08 TM3_DRAFT_U32(0x80089F08u)
#define dword_800896A0 TM3_DRAFT_U32(0x800896A0u)
#define dword_80089898 TM3_DRAFT_U32(0x80089898u)
#define dword_80089C00 TM3_DRAFT_U32(0x80089C00u)

/* Unverified decompiler-derived draft */
uint32 sub_80010B1C(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6)
{
    FUNCTION_MARKER(0x80010B1Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 ida_AT, ida_T1; sint32 ida_V0, ida_V1; /* TODO Explicit adapter values */
  int v14; 
  sint16 v17; 
  sint16 v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  uint32 v24; 
  int v25; 
  sint16 v26; 
  sint16 v27; 
  int v28; 
  int v29; 
  unsigned int v30; 
  uint32 v31; 
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
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  unsigned int v53; 
  sint32 v54; 
  sint32 v55; 
  sint32 v56; 
  sint32 v57; 
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
  int v70; 
  int v71; 
  int v75; 
  int v76; 
  int v79; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  uint32 v87; 
  sint32 v88; 
  int v90; 
  int v91; 
  int v92; 
  int v93; 
  int v94; 
  int v95; 
  int v96; 
  int v97; 
  int v101; 
  int v102; 
  int v105; 
  int v107; 
  int v108; 
  int v109; 
  int v110; 
  int v111; 
  int v112; 
  int v113; 
  int v117; 
  int v118; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  int v133; 
  int v134; 
  int v136; 
  int v137; 
  uint32 list_addresses[4]; sint16 list_counts[4]; 
  int v139; 
  int v140; 
  int v141; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148; 
  int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  sint16 v156; 
  sint16 v157; 
  sint16 v158; 
  sint16 v159; 
  uint32 v160; 
  int v161; 
  int v162; 
  int v163; 

  /* Native C does not save the guest return address */
  v152 = a1;
  v153 = a2;
  v154 = a3 - 1;
  v155 = a4;
  v17 = TM3_DRAFT_U16(a6 + 72);
  v18 = TM3_DRAFT_U16(a6 + 76);
  TM3_DRAFT_U16(0x1f800002u) = 0;
  TM3_DRAFT_I16(0x1f800000u) = -v17;
  TM3_DRAFT_I16(0x1f800004u) = v18;
  sub_8005B284(528482304, 528482304);
  v19 = v152;
  v20 = v153;
  v21 = v154;
  v22 = (TM3_DRAFT_I16(0x1f800004u) + 8) >> 4;
  if ( v22 - 256 <= 0 )
  {
    if ( v22 + 256 < 0 )
      v22 = -256;
  }
  else
  {
    v22 = 256;
  }
  v23 = TM3_DRAFT_I8((0x800676CCu + (64) * 4u) + v22);
  if ( TM3_DRAFT_I16(0x1f800000u) < 0 )
    v23 = 256 - v23;
  v24 = (0x800678D0u + (322 * (((unsigned int)(v23 + 2) >> 2) & 0x3F)) * 4u);
  v25 = TM3_DRAFT_I16(v24 + 0x502u);
  v26 = TM3_DRAFT_I16(v24 + 0x502u);
  v27 = TM3_DRAFT_I16(v24 + 0x504u);
  v156 = TM3_DRAFT_I16(v24 + 0x500u);
  v157 = v25;
  v158 = v26;
  v159 = v27;
  v160 = v24;
  v161 = v24 + 2u * (uint32)(sint32)v156;
  v162 = v161;
  v163 = v161 + 2 * v25;
  v28 = (TM3_DRAFT_I32(a6 + 48) >> 10) + 32;
  v29 = (TM3_DRAFT_I32(a6 + 56) >> 10) + 32;
  v139 = a6 + 60;
  list_addresses[0]=v160; list_addresses[1]=v161; list_addresses[2]=v162; list_addresses[3]=v163;
  list_counts[0]=v156; list_counts[1]=v157; list_counts[2]=v158; list_counts[3]=v159;
  v30 = 0;
LABEL_8:
  v31 = list_addresses[v30];
  v32 = list_counts[v30];
  while ( 1 )
  {
    v33 = TM3_DRAFT_I8(v31);
    v34 = 12 * (v33 & 1);
    v35 = (v33 >> 1) + v28;
    v36 = TM3_DRAFT_I8(v31 + (1) * 1u) + v29;
    if ( v35 >= 0 )
    {
      v37 = v36 - 64;
      if ( v35 - 64 < 0 )
      {
        v38 = 2 * v35;
        if ( v36 >= 0 )
        {
          v39 = v36 << 7;
          if ( v37 < 0 )
          {
            v40 = TM3_DRAFT_U16(v38 + v39 + dword_80089C98);
            if ( v40 != 0xFFFF )
            {
              v41 = 56 * v40 + dword_80089C98 + 10300;
              v42 = TM3_DRAFT_U32(56 * v40 + dword_80089C98 + 10312);
              if ( v30 != 2 )
              {
                v140 = v20;
                if ( v42 )
                {
                  v142 = v41;
                  v143 = v19;
                  v144 = v21;
                  do
                  {
                    v141 = v42;
                    tm3_draft_indirect(TM3_DRAFT_U32(v42 + 44u), 5u, v42 + 48u, (uint32)v143, TM3_DRAFT_LOCAL_ADDRESS(&v140, sizeof(v140)), a4, a6 + 0x3Cu);
                    v42 = TM3_DRAFT_U32(v141 + 12);
                  }
                  while ( v42 );
                  v20 = v140;
                  v41 = v142;
                  v19 = v143;
                  v21 = v144;
                }
              }
              v43 = v41 + 8 * (v30 >> 1);
              if ( TM3_DRAFT_U8(v43 + 41) )
                break;
            }
          }
        }
      }
    }
LABEL_42:
    --v32;
    v31 += (2) * 1u;
    if ( v32 <= 0 )
    {
      v88 = (int)(v30 - 3) < 0;
      ++v30;
      if ( !v88 )
        return a5;
      goto LABEL_8;
    }
  }
  v44 = (sint32)a5 < (sint32)TM3_DRAFT_U8(v43+41u) ? (sint32)a5 : (sint32)TM3_DRAFT_U8(v43+41u);
  v45 = (sint32)(a4-(uint32)v20) >> 6;
  if (v45 > v44) v45=v44;
  if ( v45 )
  {
    v46 = 8 * TM3_DRAFT_U16(v43 + 42) + dword_80089CB0;
    ida_T1 = v46;
    v48 = 528482304;
    v49 = 528482608;
    v50 = 528482912;
    /* TODO GTE adapters */
  tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(ida_T1 + 0u));
  tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(ida_T1 + 4u));
  tm3_draft_gte_write_data(2u, TM3_DRAFT_U32(ida_T1 + 8u));
  tm3_draft_gte_write_data(3u, TM3_DRAFT_U32(ida_T1 + 12u));
  tm3_draft_gte_write_data(4u, TM3_DRAFT_U32(ida_T1 + 16u));
  tm3_draft_gte_write_data(5u, TM3_DRAFT_U32(ida_T1 + 20u));
    v51 = TM3_DRAFT_U8(v43 + 40) - 3;
    ida_T1 = v46 + 24;
    /* TODO GTE adapters */
  tm3_draft_gte_command(0x280030u);
    v53 = (uint16)word_80089E00;
    if ( v51 <= 0 )
      goto LABEL_24;
    /* TODO GTE adapters */
  TM3_DRAFT_U32(v48 + 0u) = tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32(v48 + 4u) = tm3_draft_gte_read_data(13u);
  TM3_DRAFT_U32(v48 + 8u) = tm3_draft_gte_read_data(14u);
  TM3_DRAFT_U32(v49 + 0u) = tm3_draft_gte_read_data(17u);
  TM3_DRAFT_U32(v49 + 4u) = tm3_draft_gte_read_data(18u);
  TM3_DRAFT_U32(v49 + 8u) = tm3_draft_gte_read_data(19u);
    do
    {
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(ida_T1 + 0u));
  tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(ida_T1 + 4u));
  tm3_draft_gte_write_data(2u, TM3_DRAFT_U32(ida_T1 + 8u));
  tm3_draft_gte_write_data(3u, TM3_DRAFT_U32(ida_T1 + 12u));
  tm3_draft_gte_write_data(4u, TM3_DRAFT_U32(ida_T1 + 16u));
  tm3_draft_gte_write_data(5u, TM3_DRAFT_U32(ida_T1 + 20u));
      v51 -= 3;
      ida_T1 += 24;
      /* TODO GTE adapters */
  tm3_draft_gte_command(0x280030u);
      v54 = v53 < TM3_DRAFT_U16(v48 + 4);
      v55 = v53 < TM3_DRAFT_U16(v48 + 8);
      TM3_DRAFT_U8(v50) = v53 < TM3_DRAFT_U16(v48);
      TM3_DRAFT_U8(v50 + 1) = v54;
      TM3_DRAFT_U8(v50 + 2) = v55;
      v50 += 3;
      v48 += 12;
      v49 += 12;
LABEL_24:
      /* TODO GTE adapters */
  TM3_DRAFT_U32(v48 + 0u) = tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32(v48 + 4u) = tm3_draft_gte_read_data(13u);
  TM3_DRAFT_U32(v48 + 8u) = tm3_draft_gte_read_data(14u);
  TM3_DRAFT_U32(v49 + 0u) = tm3_draft_gte_read_data(17u);
  TM3_DRAFT_U32(v49 + 4u) = tm3_draft_gte_read_data(18u);
  TM3_DRAFT_U32(v49 + 8u) = tm3_draft_gte_read_data(19u);
    }
    while ( v51 > 0 );
    v56 = v53 < TM3_DRAFT_U16(v48 + 4);
    v57 = v53 < TM3_DRAFT_U16(v48 + 8);
    TM3_DRAFT_U8(v50) = v53 < TM3_DRAFT_U16(v48);
    TM3_DRAFT_U8(v50 + 1) = v56;
    TM3_DRAFT_U8(v50 + 2) = v57;
    v58 = 528482304;
    v59 = 528482608;
    v60 = 528482912;
    v61 = dword_80089CC0 + TM3_DRAFT_U32(v43 + 44);
    while ( 1 )
    {
      v62 = TM3_DRAFT_U8(v61 + 3);
      v63 = 24;
      if ( v62 != 60 )
        break;
      v64 = TM3_DRAFT_I8(v61 + 4);
      v65 = TM3_DRAFT_I8(v61 + 5);
      v66 = TM3_DRAFT_I8(v61 + 6);
      v67 = TM3_DRAFT_I8(v61 + 7);
      if ( TM3_DRAFT_U8(v60 + v64) && TM3_DRAFT_U8(v60 + v65) && TM3_DRAFT_U8(v60 + v66) && TM3_DRAFT_U8(v60 + v67) )
        goto LABEL_41;
      v68 = 4 * v64;
      v69 = 4 * v65;
      v70 = 4 * v66;
      v71 = 4 * v67;
      ida_AT = v58 + v68;
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(ida_AT + 0u));
      ida_AT = v58 + v69;
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(13u, TM3_DRAFT_U32(ida_AT + 0u));
      ida_AT = v58 + v70;
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(14u, TM3_DRAFT_U32(ida_AT + 0u));
  tm3_draft_gte_command(0x1400006u);
      v75 = TM3_DRAFT_U32(v61 + 20) + v34;
      if ( !TM3_DRAFT_U8(v61 + 19) )
        goto LABEL_41;
      v76 = TM3_DRAFT_U32(v75 + 4);
      TM3_DRAFT_U32(v20 + 12) = TM3_DRAFT_U32(v75);
      TM3_DRAFT_U32(v20 + 24) = v76;
      /* TODO GTE adapters */
  TM3_DRAFT_U32(v20 + 8u) = tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32(v20 + 20u) = tm3_draft_gte_read_data(13u);
  TM3_DRAFT_U32(v20 + 32u) = tm3_draft_gte_read_data(14u);
  ida_V1 = tm3_draft_gte_read_data(24u);
      ida_AT = v58 + v71;
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(ida_AT + 0u));
      LOWORD(v76) = TM3_DRAFT_U16(v75 + 10);
      TM3_DRAFT_U16(v20 + 36) = TM3_DRAFT_U16(v75 + 8);
      TM3_DRAFT_U16(v20 + 48) = v76;
      /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
      v79 = (sint32)((TM3_DRAFT_U32(v59 + v68) + TM3_DRAFT_U32(v59 + v69) + TM3_DRAFT_U32(v59 + v70) + TM3_DRAFT_U32(v59 + v71))) >> 4;
      /* TODO GTE adapters */
  ida_V0 = tm3_draft_gte_read_data(24u);
      if ( v79 <= 0 || ida_V0 > 0 && ida_V1 <= 0 && !TM3_DRAFT_U8(v61 + 15) )
        goto LABEL_41;
      v81 = v79 + TM3_DRAFT_U8(v61 + 11) - v21;
      v82 = (v81 & (v81 >> 31)) + v21;
      if ( v79 >= 320 || (sint32)((uint32)v20 + 368u) >= (sint32)a4 )
      {
        /* TODO GTE adapters */
  TM3_DRAFT_U32(v20 + 44u) = tm3_draft_gte_read_data(12u);
        v83 = TM3_DRAFT_U32(v61 + 8);
        v84 = TM3_DRAFT_U32(v61 + 12);
        v85 = TM3_DRAFT_U32(v61 + 16);
        TM3_DRAFT_U32(v20 + 4) = TM3_DRAFT_U32(v61);
        TM3_DRAFT_U32(v20 + 16) = v83;
        TM3_DRAFT_U32(v20 + 28) = v84;
        TM3_DRAFT_U32(v20 + 40) = v85;
        v86 = 52;
LABEL_40:
        v87 = (uint32)(4 * v82 + v19);
        --a5;
        TM3_DRAFT_U32(v20) = ((v86 - 4) << 22) | TM3_DRAFT_I32(v87) & 0xFFFFFF;
        TM3_DRAFT_I32(v87) = v20 & 0xFFFFFF;
        v20 += v86;
        goto LABEL_41;
      }
      v143 = v19;
      v144 = v21;
      v145 = v45;
      v146 = v46;
      v147 = v58;
      v148 = v59;
      v149 = v60;
      v150 = v61;
      v20 = (int)sub_800115C4(v61, v46, (uint32)v20, (uint32)(4 * v82 + v19));
      v63 = 24;
      v19 = v143;
      v21 = v144;
      v46 = v146;
      v58 = v147;
      v59 = v148;
      v60 = v149;
      v61 = v150;
      v45 = (sint32)(a4-(uint32)v20) >> 6;
      if (v45 > v145) v45=v145;
      --a5;
LABEL_41:
      --v45;
      v61 += v63;
      if ( v45 <= 0 )
        goto LABEL_42;
    }
    v63 = 16;
    if ( v62 == 44 )
    {
      v90 = TM3_DRAFT_I8(v61 + 4);
      v91 = TM3_DRAFT_I8(v61 + 5);
      v92 = TM3_DRAFT_I8(v61 + 6);
      v93 = TM3_DRAFT_I8(v61 + 7);
      if ( TM3_DRAFT_U8(v60 + v90) && TM3_DRAFT_U8(v60 + v91) && TM3_DRAFT_U8(v60 + v92) && TM3_DRAFT_U8(v60 + v93) )
        goto LABEL_41;
      v94 = 4 * v90;
      v95 = 4 * v91;
      v96 = 4 * v92;
      v97 = 4 * v93;
      ida_AT = v58 + v94;
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(ida_AT + 0u));
      ida_AT = v58 + v95;
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(13u, TM3_DRAFT_U32(ida_AT + 0u));
      ida_AT = v58 + v96;
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(14u, TM3_DRAFT_U32(ida_AT + 0u));
  tm3_draft_gte_command(0x1400006u);
      v101 = TM3_DRAFT_U32(v61 + 12) + v34;
      if ( !TM3_DRAFT_U8(v61 + 10) )
        goto LABEL_41;
      v102 = TM3_DRAFT_U32(v101 + 4);
      TM3_DRAFT_U32(v20 + 12) = TM3_DRAFT_U32(v101);
      TM3_DRAFT_U32(v20 + 20) = v102;
      /* TODO GTE adapters */
  TM3_DRAFT_U32(v20 + 8u) = tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32(v20 + 16u) = tm3_draft_gte_read_data(13u);
  TM3_DRAFT_U32(v20 + 24u) = tm3_draft_gte_read_data(14u);
  ida_V1 = tm3_draft_gte_read_data(24u);
      ida_AT = v58 + v97;
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(ida_AT + 0u));
      LOWORD(v102) = TM3_DRAFT_U16(v101 + 10);
      TM3_DRAFT_U16(v20 + 28) = TM3_DRAFT_U16(v101 + 8);
      TM3_DRAFT_U16(v20 + 36) = v102;
      /* TODO GTE adapters */
  tm3_draft_gte_command(0x1400006u);
      v105 = (sint32)((TM3_DRAFT_U32(v59 + v94) + TM3_DRAFT_U32(v59 + v95) + TM3_DRAFT_U32(v59 + v96) + TM3_DRAFT_U32(v59 + v97))) >> 4;
      /* TODO GTE adapters */
  ida_V0 = tm3_draft_gte_read_data(24u);
      if ( v105 <= 0 || ida_V0 > 0 && ida_V1 <= 0 && !TM3_DRAFT_U8(v61 + 9) )
        goto LABEL_41;
      v107 = v105 + TM3_DRAFT_U8(v61 + 8) - v21;
      v82 = (v107 & (v107 >> 31)) + v21;
      if ( v105 < 320 && (sint32)((uint32)v20 + 288u) < (sint32)a4 )
      {
        v143 = v19;
        v144 = v21;
        v145 = v45;
        v146 = v46;
        v147 = v58;
        v148 = v59;
        v149 = v60;
        v150 = v61;
        v20 = (int)sub_80011D5C((uint32)v61, v46, (uint32)v20, (uint32)(4 * v82 + v19));
        v63 = 16;
        v19 = v143;
        v21 = v144;
        v46 = v146;
        v58 = v147;
        v59 = v148;
        v60 = v149;
        v61 = v150;
        v45 = (sint32)(a4-(uint32)v20) >> 6;
      if (v45 > v145) v45=v145;
        --a5;
        goto LABEL_41;
      }
      /* TODO GTE adapters */
  TM3_DRAFT_U32(v20 + 32u) = tm3_draft_gte_read_data(12u);
      TM3_DRAFT_U32(v20 + 4) = TM3_DRAFT_U32(v61);
      v86 = 40;
    }
    else
    {
      v63 = 24;
      if ( v62 == 52 )
      {
        v108 = TM3_DRAFT_I8(v61 + 4);
        v109 = TM3_DRAFT_I8(v61 + 5);
        v110 = TM3_DRAFT_I8(v61 + 6);
        if ( TM3_DRAFT_U8(v60 + v108) && TM3_DRAFT_U8(v60 + v109) && TM3_DRAFT_U8(v60 + v110) )
          goto LABEL_41;
        v111 = 4 * v108;
        v112 = 4 * v109;
        v113 = 4 * v110;
        ida_AT = v58 + v111;
        /* TODO GTE adapters */
  tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(ida_AT + 0u));
        ida_AT = v58 + v112;
        /* TODO GTE adapters */
  tm3_draft_gte_write_data(13u, TM3_DRAFT_U32(ida_AT + 0u));
        ida_AT = v58 + v113;
        /* TODO GTE adapters */
  tm3_draft_gte_write_data(14u, TM3_DRAFT_U32(ida_AT + 0u));
  tm3_draft_gte_command(0x1400006u);
        v117 = TM3_DRAFT_U32(v61 + 20) + v34;
        if ( !TM3_DRAFT_U8(v61 + 19) )
          goto LABEL_41;
        v118 = TM3_DRAFT_U32(v117 + 4);
        TM3_DRAFT_U32(v20 + 12) = TM3_DRAFT_U32(v117);
        TM3_DRAFT_U32(v20 + 24) = v118;
        /* TODO GTE adapters */
  TM3_DRAFT_U32(v20 + 8u) = tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32(v20 + 20u) = tm3_draft_gte_read_data(13u);
  TM3_DRAFT_U32(v20 + 32u) = tm3_draft_gte_read_data(14u);
  ida_V1 = tm3_draft_gte_read_data(24u);
        TM3_DRAFT_U16(v20 + 36) = TM3_DRAFT_U16(v117 + 8);
        v120 = (sint32)((2 * TM3_DRAFT_U32(v59 + v111) + TM3_DRAFT_U32(v59 + v112) + TM3_DRAFT_U32(v59 + v113))) >> 4;
        if ( v120 <= 0 || ida_V1 <= 0 && !TM3_DRAFT_U8(v61 + 15) )
          goto LABEL_41;
        v121 = v120 + TM3_DRAFT_U8(v61 + 11) - v21;
        v82 = (v121 & (v121 >> 31)) + v21;
        v122 = TM3_DRAFT_U32(v61 + 8);
        v123 = TM3_DRAFT_U32(v61 + 12);
        TM3_DRAFT_U32(v20 + 4) = TM3_DRAFT_U32(v61);
        TM3_DRAFT_U32(v20 + 16) = v122;
        TM3_DRAFT_U32(v20 + 28) = v123;
        v86 = 40;
      }
      else
      {
        v63 = 16;
        v124 = TM3_DRAFT_I8(v61 + 4);
        v125 = TM3_DRAFT_I8(v61 + 5);
        v126 = TM3_DRAFT_I8(v61 + 6);
        if ( TM3_DRAFT_U8(v60 + v124) && TM3_DRAFT_U8(v60 + v125) && TM3_DRAFT_U8(v60 + v126) )
          goto LABEL_41;
        v127 = 4 * v124;
        v128 = 4 * v125;
        v129 = 4 * v126;
        ida_AT = v58 + v127;
        /* TODO GTE adapters */
  tm3_draft_gte_write_data(12u, TM3_DRAFT_U32(ida_AT + 0u));
        ida_AT = v58 + v128;
        /* TODO GTE adapters */
  tm3_draft_gte_write_data(13u, TM3_DRAFT_U32(ida_AT + 0u));
        ida_AT = v58 + v129;
        /* TODO GTE adapters */
  tm3_draft_gte_write_data(14u, TM3_DRAFT_U32(ida_AT + 0u));
  tm3_draft_gte_command(0x1400006u);
        v133 = TM3_DRAFT_U32(v61 + 12) + v34;
        if ( !TM3_DRAFT_U8(v61 + 10) )
          goto LABEL_41;
        v134 = TM3_DRAFT_U32(v133 + 4);
        TM3_DRAFT_U32(v20 + 12) = TM3_DRAFT_U32(v133);
        TM3_DRAFT_U32(v20 + 20) = v134;
        /* TODO GTE adapters */
  TM3_DRAFT_U32(v20 + 8u) = tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32(v20 + 16u) = tm3_draft_gte_read_data(13u);
  TM3_DRAFT_U32(v20 + 24u) = tm3_draft_gte_read_data(14u);
  ida_V1 = tm3_draft_gte_read_data(24u);
        TM3_DRAFT_U16(v20 + 28) = TM3_DRAFT_U16(v133 + 8);
        v136 = (sint32)((2 * TM3_DRAFT_U32(v59 + v127) + TM3_DRAFT_U32(v59 + v128) + TM3_DRAFT_U32(v59 + v129))) >> 4;
        if ( v136 <= 0 || ida_V1 <= 0 && !TM3_DRAFT_U8(v61 + 9) )
          goto LABEL_41;
        v137 = v136 + TM3_DRAFT_U8(v61 + 8) - v21;
        v82 = (v137 & (v137 >> 31)) + v21;
        TM3_DRAFT_U32(v20 + 4) = TM3_DRAFT_U32(v61);
        v86 = 32;
      }
    }
    goto LABEL_40;
  }
  return a5;
}

/* Unverified decompiler-derived draft */
uint32 sub_800115C4(uint32 a1, uint32 a2, uint32 a3, uint32 a4)
{
  uint32 indices[4], points[4], i, j, uv, record, table, packet;
  const uint32 midpoints[5]={0x1F8002ACu,0x1F8002B4u,0x1F8002BCu,0x1F8002C4u,0x1F8002CCu};
  const uint32 pairs[5][2]={{0u,1u},{2u,3u},{4u,5u},{0u,2u},{1u,3u}};
  const uint32 scratch=0x1F8002D4u;
  FUNCTION_MARKER(0x800115C4u, "SCUS_942.49");
  for(i=0u;i<4u;++i)
  {
    indices[i]=TM3_DRAFT_U8(a1+4u+i);
    points[i]=a2+8u*indices[i];
  }
  for(i=0u;i<3u;++i)
  {
    uint32 left=i==2u?midpoints[0]:points[pairs[i][0]];
    uint32 right=i==2u?midpoints[1]:points[pairs[i][1]];
    for(j=0u;j<3u;++j)
      TM3_DRAFT_U16(midpoints[i]+2u*j)=(TM3_DRAFT_I16(left+2u*j)+TM3_DRAFT_I16(right+2u*j))/2;
  }
  for(i=0u;i<6u;++i)
    tm3_draft_gte_write_data(i,TM3_DRAFT_U32(midpoints[0]+4u*i));
  tm3_draft_gte_command(0x280030u);
  for(i=3u;i<5u;++i)
    for(j=0u;j<3u;++j)
      TM3_DRAFT_U16(midpoints[i]+2u*j)=(TM3_DRAFT_I16(points[pairs[i][0]]+2u*j)+TM3_DRAFT_I16(points[pairs[i][1]]+2u*j))/2;
  for(i=0u;i<3u;++i)
    TM3_DRAFT_U32(scratch+12u*(i+4u))=tm3_draft_gte_read_data(12u+i);
  /* The original second RTPT keeps the third input vector from the first command */
  for(i=0u;i<4u;++i)
    tm3_draft_gte_write_data(i,TM3_DRAFT_U32(midpoints[3]+4u*i));
  tm3_draft_gte_command(0x280030u);
  for(i=0u;i<4u;++i)
    TM3_DRAFT_U32(scratch+12u*i)=TM3_DRAFT_U32(0x1F800000u+4u*indices[i]);
  TM3_DRAFT_U32(scratch+12u*7u)=tm3_draft_gte_read_data(12u);
  TM3_DRAFT_U32(scratch+12u*8u)=tm3_draft_gte_read_data(13u);
  uv=TM3_DRAFT_U32(a1+20u);
  TM3_DRAFT_U16(scratch+4u)=TM3_DRAFT_U16(uv);
  TM3_DRAFT_U16(scratch+16u)=TM3_DRAFT_U16(uv+4u);
  TM3_DRAFT_U16(scratch+28u)=TM3_DRAFT_U16(uv+8u);
  TM3_DRAFT_U16(scratch+40u)=TM3_DRAFT_U16(uv+10u);
  TM3_DRAFT_U32(scratch+8u)=TM3_DRAFT_U32(a1);
  TM3_DRAFT_U32(scratch+20u)=TM3_DRAFT_U32(a1+8u);
  TM3_DRAFT_U32(scratch+32u)=TM3_DRAFT_U32(a1+12u);
  TM3_DRAFT_U32(scratch+44u)=TM3_DRAFT_U32(a1+16u);
  for(i=0u;i<5u;++i)
  {
    uint32 left=scratch+12u*pairs[i][0];
    uint32 right=scratch+12u*pairs[i][1];
    record=scratch+12u*(i+4u);
    for(j=0u;j<2u;++j)
      TM3_DRAFT_U8(record+4u+j)=(TM3_DRAFT_U8(left+4u+j)+TM3_DRAFT_U8(right+4u+j))>>1;
    for(j=0u;j<3u;++j)
      TM3_DRAFT_U8(record+8u+j)=(TM3_DRAFT_U8(left+8u+j)+TM3_DRAFT_U8(right+8u+j))>>1;
  }
  packet=a3;
  for(i=0u;i<8u;++i)
  {
    uint32 vertices=i<4u?4u:3u;
    table=i<4u?0x8007BC04u+i*16u:0x8007BC44u+(i-4u)*12u;
    for(j=0u;j<vertices;++j)
    {
      record=scratch+12u*TM3_DRAFT_U32(table+4u*j);
      TM3_DRAFT_U16(packet+12u+12u*j)=TM3_DRAFT_U16(record+4u);
      TM3_DRAFT_U32(packet+8u+12u*j)=TM3_DRAFT_U32(record);
      TM3_DRAFT_U32(packet+4u+12u*j)=TM3_DRAFT_U32(record+8u);
    }
    TM3_DRAFT_U8(packet+7u)=i<4u?0x3Cu:0x34u;
    TM3_DRAFT_U16(packet+26u)=TM3_DRAFT_U16(uv+6u);
    TM3_DRAFT_U16(packet+14u)=TM3_DRAFT_U16(uv+2u);
    TM3_DRAFT_U32(packet)=(TM3_DRAFT_U32(a4)&0xFFFFFFu)|(i<4u?0x0C000000u:0x09000000u);
    TM3_DRAFT_U32(a4)=packet&0xFFFFFFu;
    packet+=i<4u?52u:40u;
  }
  return packet;
}

/* Unverified decompiler-derived draft */
uint32 sub_800254A0(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5)
{
    FUNCTION_MARKER(0x800254A0u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  sint32 ida_A0, ida_A1, ida_A2, ida_S0, ida_T0, ida_V0, ida_V1; /* TODO Explicit adapter values */
  int v16; 
  int result; 
  int v19; 
  int v20; 
  sint32 v22; 
  int v23; 
  int v24; 
  int v27; 
  sint16 v28; 
  int v29; 
  int v31; 
  uint32 v32; 
  uint32 v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  uint32 v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  int v52; 
  uint32 v53; 
  int v54; 
  int v63; 
  uint8 v64; 
  int v65; 
  int v66; 
  uint32 v67; 
  uint32 v68; 
  sint32 scale_vector[4];
  uint32 scalar_result; 
  v16 = (sint32)(0x800D1DC0u + 108u * (uint32)dword_80089828);
  if ( TM3_DRAFT_U32(v16 + 100) || (result = TM3_DRAFT_U32(v16 + 104), result != a1) )
  {
    result = a1 + 1556;
    if ( !TM3_DRAFT_U32(a1 + 64)
      || (result = a1 + 1556, TM3_DRAFT_U32(a1 + 4100))
      || (result = a1 + 1556, TM3_DRAFT_U32(v16 + 104) == a1) )
    {
      v19 = TM3_DRAFT_U32(result + 4);
      v20 = TM3_DRAFT_U32(result + 8);
      result = 528482304;
      TM3_DRAFT_U16(0x1f800000u) = TM3_DRAFT_U32(a1 + 1556);
      TM3_DRAFT_U16(0x1f800002u) = v19;
      TM3_DRAFT_U16(0x1f800004u) = v20;
      /* TODO GTE adapters */
  tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(0x1f800000u));
  tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(0x1f800004u));
  tm3_draft_gte_command(0x480012u);
  ida_S0 = tm3_draft_gte_read_data(27u);
      v22 = ida_S0 <= 0;
      v23 = ida_S0 >> 4;
      if ( !v22 )
      {
        v24 = 4 * v23 - 96;
        if ( v24 >= 0 )
        {
          if ( v24 >= dword_80089DD0 )
            v24 = dword_80089DD0 - 1;
        }
        else
        {
          v24 = 0;
        }
        ida_V0 = a1 + 4112;
        if ( TM3_DRAFT_U16(a1 + 4118) )
        {
          /* TODO GTE adapters */
  tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(a1 + 4112u));
  tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(a1 + 4116u));
  tm3_draft_gte_command(0x480012u);
  ida_T0 = tm3_draft_gte_read_data(27u);
          v27 = TM3_DRAFT_I16(a1 + 4112) + TM3_DRAFT_I16(a1 + 1540) / 64;
          v28 = TM3_DRAFT_U16(a1 + 4116);
          v29 = TM3_DRAFT_I16(a1 + 1552);
          TM3_DRAFT_U16(0x1f800002u) = TM3_DRAFT_U16(a1 + 4114) + TM3_DRAFT_I16(a1 + 1546) / 64;
          TM3_DRAFT_U16(0x1f800004u) = v28 + v29 / 64;
          TM3_DRAFT_U16(0x1f800000u) = v27;
          /* TODO GTE adapters */
  tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(0x1f800000u));
  tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(0x1f800004u));
  tm3_draft_gte_command(0x480012u);
  ida_V1 = tm3_draft_gte_read_data(27u);
          v22 = ida_T0 >= ida_V1;
          v31 = v24;
          if ( !v22 )
          {
            v31 = v24 + 1;
            if ( v24 + 1 >= dword_80089DD0 )
              v31 = dword_80089DD0 - 1;
          }
          sub_8002A47C(a1 + 4112, TM3_DRAFT_I16(dword_80089D14 + 698) / 4, TM3_DRAFT_I16(dword_80089D14 + 700) / 4, 4210752, TM3_DRAFT_U32(dword_80089D14 + 704), a2 + 4 * v31, (int)a3, 1, a4);
        }
        v32 = (uint32)(a2 + 4 * v24);
        v33 = 0x800D1DF0u + 108u * (uint32)dword_80089828;
        v34 = TM3_DRAFT_U32(a1 + 1560) - TM3_DRAFT_U32(v33 + (1) * 4u);
        v35 = TM3_DRAFT_U32(a1 + 1564) - TM3_DRAFT_U32(v33 + (2) * 4u);
        TM3_DRAFT_U32(0x1f800000u) = TM3_DRAFT_U32(a1 + 1556) - TM3_DRAFT_U32(v33);
        TM3_DRAFT_U32(0x1f800004u) = v34;
        TM3_DRAFT_U32(0x1f800008u) = v35;
        v36 = sub_80015764(TM3_DRAFT_U32(0x1f800000u), v34, v35);
        v37 = 0;
        if ( v36 >= 2048 )
        {
          v37 = 2;
          if ( v36 < 0x2000 )
            v37 = 1;
        }
        sub_8005B8D4();
        if ( TM3_DRAFT_U32(a1 + 4072) )
        {
          v40 = TM3_DRAFT_U32(a1 + 1540);
          v41 = TM3_DRAFT_U32(a1 + 1544);
          TM3_DRAFT_U32(0x1f800080u) = TM3_DRAFT_U32(a1 + 1536);
          TM3_DRAFT_U32(0x1f800084u) = v40;
          TM3_DRAFT_U32(0x1f800088u) = v41;
          v42 = TM3_DRAFT_U32(a1 + 1552);
          v43 = TM3_DRAFT_U32(a1 + 1556);
          TM3_DRAFT_U32(0x1f80008cu) = TM3_DRAFT_U32(a1 + 1548);
          TM3_DRAFT_U32(0x1f800090u) = v42;
          TM3_DRAFT_U32(0x1f800094u) = v43;
          v44 = TM3_DRAFT_U32(a1 + 1564);
          TM3_DRAFT_U32(0x1f800098u) = TM3_DRAFT_U32(a1 + 1560);
          TM3_DRAFT_U32(0x1f80009cu) = v44;
          uint32 phase = TM3_DRAFT_U32(a1 + 4072u) - 6u;
          uint32 magnitude = (sint32)phase < 0 ? 0u - phase : phase;
          sint32 scaled_phase = (sint32)(magnitude << 12);
          sint64 division_product = (sint64)scaled_phase * 0x2AAAAAAB;
          scale_vector[0] = (sint32)(division_product >> 32) - (scaled_phase >> 31);
          scale_vector[1] = scale_vector[0];
          scale_vector[2] = scale_vector[0];
          sub_8005BBE4((uint32)0x1F800080, TM3_DRAFT_LOCAL_ADDRESS(scale_vector, sizeof(scale_vector)));
          v38 = (uint32)a5;
          v39 = 528482432;
        }
        else
        {
          v38 = (uint32)a5;
          v39 = a1 + 1536;
        }
        sub_8005B614(v38, (uint32)v39, (uint32)0x1F800080);
        v45 = 0;
        v46 = 3;
        v47 = a1 + 336;
        do
        {
          v48 = TM3_DRAFT_I16(v47 + 1604);
          v49 = TM3_DRAFT_I16(v47 + 1608);
          v47 -= 112;
          --v46;
          v45 += sub_80012388(v48, v49);
        }
        while ( v46 >= 0 );
        v50 = (uint32)(((uint64)((uint32)v45 * 255u) * 0x88888889u) >> 32) >> 5;
        v50 = ((v50 << 11) + 2048u) >> 12;
        v51 = v50 + ((TM3_DRAFT_U32(a1 + 60) * v50 + 2048) >> 12);
        if ( v51 >= 0x20 )
        {
          if ( v51 >= 0x8D )
            v51 = 140;
        }
        else
        {
          v51 = 32;
        }
        v52 = TM3_DRAFT_U32(a1 + 4100);
        TM3_DRAFT_U32(a1 + 56) = v51;
        if ( v52 )
        {
          if ( TM3_DRAFT_U32(a1 + 64) && TM3_DRAFT_U32(0x800D1DC0u + 108u * (uint32)dword_80089828 + 104u) != a1 )
            v53 = 0x80024DF0u;
          else
            v53 = 0x80024648u;
        }
        else
        {
          v53 = 0x80023F94u;
        }
        if ( v37 == 2 )
        {
          scalar_result = tm3_draft_indirect(v53, 6u, TM3_DRAFT_U32(a1 + 44), v32, a3, a4, a1, (uint32)v37);
        }
        else
        {
          sub_8005B240(0x1F800000u, 0x1F800000u);
          sub_8005C5B4((uint32)(a1 + 1536), 528482312);
          ida_V1 = TM3_DRAFT_U32(0x1f800008u);
          ida_A0 = TM3_DRAFT_U32(0x1f80000cu);
          ida_A1 = TM3_DRAFT_U32(0x1f800010u);
          ida_A2 = TM3_DRAFT_U32(0x1f800014u);
          ida_V0 = TM3_DRAFT_U32(0x1f800018u);
          /* TODO GTE adapters */
  tm3_draft_gte_write_control(0u, ida_V1);
  tm3_draft_gte_write_control(1u, ida_A0);
  tm3_draft_gte_write_control(2u, ida_A1);
  tm3_draft_gte_write_control(3u, ida_A2);
  tm3_draft_gte_write_control(4u, ida_V0);
  tm3_draft_gte_write_data(0u, TM3_DRAFT_U32(0x1f800000u));
  tm3_draft_gte_write_data(1u, TM3_DRAFT_U32(0x1f800004u));
  tm3_draft_gte_command(0x486012u);
  ida_A2 = tm3_draft_gte_read_data(25u);
  ida_V0 = tm3_draft_gte_read_data(26u);
  ida_A1 = tm3_draft_gte_read_data(27u);
          v63 = ((sint32)~(uint32)ida_V0 >> 31) & 8;
          v64 = v63;
          if ( ida_A1 < 2049 )
          {
            if ( ida_A1 >= -2047 )
            {
              if ( ida_A1 < 0 )
                v64 = v63 | 4;
            }
            else
            {
              v64 = v63 | 6;
            }
          }
          else
          {
            v64 = v63 | 2;
          }
          if ( ida_A2 < 0 )
            v64 |= 1u;
          scalar_result = tm3_draft_indirect(v53, 6u,
            TM3_DRAFT_U32(a1 + 4 * v37 + 36) + v64 * (TM3_DRAFT_U32(TM3_DRAFT_U32(a1 + 4 * v37)) + 1),
            v32,
            a3,
            a4, a1, (uint32)v37);
          v54 = a1;
          if ( !v37 )
            scalar_result = sub_80025AC0(a1, v32, a3, a4, a5);
        }
        /* Normal PopMatrix preserves the preceding scalar return */
        sub_8005B978();
        return scalar_result;
      }
    }
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_8001590C(uint32 a1)
{
    FUNCTION_MARKER(0x8001590Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  uint32 v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  sint32 v7; 
  int result; 
  int v9; 
  int v10; 
  uint32 v11; 
  uint32 v12; 
  uint32 v13; 
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
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v42; 
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

  v2 = (a1 + (7) * 4u);
  v3 = TM3_DRAFT_I32(a1 + (1) * 4u);
  v4 = TM3_DRAFT_I32(a1 + (2) * 4u);
  dword_80089EF0 = TM3_DRAFT_I32(a1);
  dword_80089EF4 = v3;
  dword_80089EF8 = v4;
  v5 = TM3_DRAFT_I32(a1 + (4) * 4u);
  v6 = TM3_DRAFT_I32(a1 + (5) * 4u);
  dword_80089EFC = TM3_DRAFT_I32(a1 + (3) * 4u);
  dword_80089F00 = v5;
  dword_80089F04 = v6;
  dword_80089F08 = TM3_DRAFT_I32(a1 + (6) * 4u);
  v7 = sub_80056784((uint32)0x80089EF0u, 0x800896ACu) == 0;
  result = 0;
  if ( v7 )
  {
    v9 = 0;
    if ( (_WORD)dword_80089EF8 )
    {
      v10 = 0;
      v11 = (a1 + (15) * 4u);
      do
      {
        v12 = (uint32)(v10 - 2146918384);
        v13 = v2;
        if ( (((uint8)v2 | (uint8)(v10 + 16)) & 3) != 0 )
        {
          do
          {
            v14 = TM3_DRAFT_I32(v13 + (1) * 4u);
            v15 = TM3_DRAFT_I32(v13 + (2) * 4u);
            v16 = TM3_DRAFT_I32(v13 + (3) * 4u);
            TM3_DRAFT_I32(v12) = TM3_DRAFT_I32(v13);
            TM3_DRAFT_I32(v12 + (1) * 4u) = v14;
            TM3_DRAFT_I32(v12 + (2) * 4u) = v15;
            TM3_DRAFT_I32(v12 + (3) * 4u) = v16;
            v13 += (4) * 4u;
            v12 += (4) * 4u;
          }
          while ( v13 != v11 );
          v11 += (10) * 4u;
        }
        else
        {
          do
          {
            v17 = TM3_DRAFT_I32(v13 + (1) * 4u);
            v18 = TM3_DRAFT_I32(v13 + (2) * 4u);
            v19 = TM3_DRAFT_I32(v13 + (3) * 4u);
            TM3_DRAFT_I32(v12) = TM3_DRAFT_I32(v13);
            TM3_DRAFT_I32(v12 + (1) * 4u) = v17;
            TM3_DRAFT_I32(v12 + (2) * 4u) = v18;
            TM3_DRAFT_I32(v12 + (3) * 4u) = v19;
            v13 += (4) * 4u;
            v12 += (4) * 4u;
          }
          while ( v13 != v11 );
          v11 += (10) * 4u;
        }
        v2 += (10) * 4u;
        v20 = TM3_DRAFT_I32(v13 + (1) * 4u);
        TM3_DRAFT_I32(v12) = TM3_DRAFT_I32(v13);
        TM3_DRAFT_I32(v12 + (1) * 4u) = v20;
        ++v9;
        v10 += 40;
      }
      while ( v9 < (uint16)dword_80089EF8 );
    }
    v21 = 0;
    if ( (_WORD)dword_80089EF8 )
    {
      v22 = -2146918384;
      do
      {
        v23 = TM3_DRAFT_U16(v22 + 22);
        v24 = TM3_DRAFT_U16(v22 + 24);
        ++v21;
        TM3_DRAFT_U32(v22 + 28) = v2;
        v25 = v2 + (uint32)v23 * 4u;
        TM3_DRAFT_U32(v22 + 32) = v25;
        v2 = v25 + (uint32)v24 * 8u;
        v22 += 40;
      }
      while ( v21 < (uint16)dword_80089EF8 );
    }
    v26 = 0;
    dword_80089F00 = (int)v2;
    v27 = (int)(v2 + (uint32)HIWORD(dword_80089EF8) * 28u);
    dword_80089F04 = v27;
    if ( HIWORD(dword_80089EF8) )
    {
      v28 = 0;
      do
      {
        TM3_DRAFT_U32(v28 + dword_80089F00 + 4) = v27;
        ++v26;
        v29 = v28 + dword_80089F00;
        v28 += 28;
        v27 += 4 * TM3_DRAFT_U8(v29 + 8);
      }
      while ( v26 < HIWORD(dword_80089EF8) );
    }
    v30 = 0;
    dword_80089F08 = v27;
    v31 = v27 + 36 * HIWORD(dword_80089EFC);
    if ( HIWORD(dword_80089EFC) )
    {
      v32 = 0;
      do
      {
        TM3_DRAFT_U32(v32 + dword_80089F08 + 32) = v31;
        ++v30;
        v33 = v32 + dword_80089F08;
        v32 += 36;
        v31 += 8 * TM3_DRAFT_I16(v33 + 18);
      }
      while ( v30 < HIWORD(dword_80089EFC) );
    }
    v34 = 0;
    if ( HIWORD(dword_80089EFC) )
    {
      v35 = 0;
      do
      {
        TM3_DRAFT_U32(v35 + dword_80089F08 + 24) = v31;
        v36 = v31 + 4 * TM3_DRAFT_I16(v35 + dword_80089F08 + 20);
        TM3_DRAFT_U32(v35 + dword_80089F08 + 28) = v36;
        v37 = 0;
        v31 = v36 + 2 * (TM3_DRAFT_I16(v35 + dword_80089F08 + 22) + TM3_DRAFT_I16(v35 + dword_80089F08 + 22) % 2);
        if ( TM3_DRAFT_I16(v35 + dword_80089F08 + 18) > 0 )
        {
          v38 = 0;
          do
          {
            TM3_DRAFT_U32(v38 + TM3_DRAFT_U32(v35 + dword_80089F08 + 32)) = v31;
            v39 = v31 + TM3_DRAFT_I16(v35 + dword_80089F08 + 20);
            if ( (TM3_DRAFT_U16(v35 + dword_80089F08 + 20) & 3) != 0 )
            {
              v40 = 0;
              while ( v40++ < 4 - TM3_DRAFT_I16(v35 + dword_80089F08 + 20) % 4 )
                ++v39;
            }
            TM3_DRAFT_U32(v38 + TM3_DRAFT_U32(v35 + dword_80089F08 + 32) + 4) = v39;
            v31 = v39 + TM3_DRAFT_I16(v35 + dword_80089F08 + 22);
            if ( (TM3_DRAFT_U16(v35 + dword_80089F08 + 22) & 3) != 0 )
            {
              v42 = 0;
              while ( v42++ < 4 - TM3_DRAFT_I16(v35 + dword_80089F08 + 22) % 4 )
                ++v31;
            }
            ++v37;
            v38 += 8;
          }
          while ( v37 < TM3_DRAFT_I16(v35 + dword_80089F08 + 18) );
        }
        ++v34;
        v35 += 36;
      }
      while ( v34 < HIWORD(dword_80089EFC) );
    }
    v44 = 0;
    if ( (_WORD)dword_80089EF8 )
    {
      v45 = -2146918384;
      do
      {
        v46 = TM3_DRAFT_U16(v45 + 26);
        v47 = 0;
        TM3_DRAFT_U32(v45 + 36) = v31;
        v31 += 28 * v46;
        if ( v46 )
        {
          v48 = 0;
          do
          {
            v49 = v48 + TM3_DRAFT_U32(v45 + 36);
            if ( TM3_DRAFT_U8(v49) )
            {
              TM3_DRAFT_U32(v49 + 20) = v31;
              v50 = TM3_DRAFT_U8(v48 + TM3_DRAFT_U32(v45 + 36));
              v31 += 2 * (v50 + (v50 & 1));
            }
            else
            {
              TM3_DRAFT_U32(v49 + 20) = 0;
            }
            ++v47;
            v48 += 28;
          }
          while ( v47 < TM3_DRAFT_U16(v45 + 26) );
        }
        v51 = 0;
        if ( TM3_DRAFT_U16(v45 + 26) )
        {
          v52 = 0;
          do
          {
            v53 = v52 + TM3_DRAFT_U32(v45 + 36);
            if ( TM3_DRAFT_U8(v53 + 1) )
            {
              TM3_DRAFT_U32(v53 + 24) = v31;
              v54 = TM3_DRAFT_U8(v52 + TM3_DRAFT_U32(v45 + 36) + 1);
              v31 += 2 * (v54 + (v54 & 1));
            }
            else
            {
              TM3_DRAFT_U32(v53 + 24) = 0;
            }
            ++v51;
            v52 += 28;
          }
          while ( v51 < TM3_DRAFT_U16(v45 + 26) );
        }
        ++v44;
        v45 += 40;
      }
      while ( v44 < (uint16)dword_80089EF8 );
    }
    result = 1;
    dword_800896A0 = 1;
  }
  else
  {
    dword_800896A0 = 0;
  }
  return result;
}

/* Unverified decompiler-derived draft */
uint32 sub_80040F1C(void)
{
  union { uint64 align; uint8 bytes[0x340u]; } native_local_storage;
  uint8 *native_locals = native_local_storage.bytes;
  uint32 local_base = TM3_DRAFT_LOCAL_ADDRESS(native_locals, sizeof(native_local_storage.bytes));
  /* Original adjacent local buffers share one native storage area */
#define v54 TM3_DRAFT_I32(local_base + 0x18u)
#define v55 TM3_DRAFT_I32(local_base + 0x1Cu)
#define v56 TM3_DRAFT_I32(local_base + 0x20u)
#define v57 TM3_DRAFT_I32(local_base + 0x24u)
#define v58 TM3_DRAFT_I32(local_base + 0x28u)
#define v59 TM3_DRAFT_I32(local_base + 0x2Cu)
#define v60 TM3_DRAFT_I32(local_base + 0x30u)
#define v61 TM3_DRAFT_I32(local_base + 0x34u)
#define v62 ((char *)(native_locals + 0x38u))
#define v63 (*((char *)(native_locals + 0x2D4u)))
#define v64 ((char *)(native_locals + 0x2D8u))
#define v65 ((int *)(native_locals + 0x2F0u))
#define v66 TM3_DRAFT_I32(local_base + 0x2F8u)
#define v67 (*((sint16 *)(native_locals + 0x300u)))
#define v68 (*((sint16 *)(native_locals + 0x302u)))
#define v69 TM3_DRAFT_I32(local_base + 0x304u)
#define v70 TM3_DRAFT_I32(local_base + 0x308u)
#define v71 TM3_DRAFT_I32(local_base + 0x30Cu)
#define v72 TM3_DRAFT_I32(local_base + 0x310u)
  uint32 a4; /* Local selected listener state */
    FUNCTION_MARKER(0x80040F1Cu, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v4; 
  int v5; 
  uint32 v6; 
  int v7; 
  uint32 v8; 
  uint32 v9; 
  int v10; 
  sint32 v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  uint32 v19; 
  int v20; 
  int v21; 
  int v22; 
  uint32 v23; 
  int v24; 
  int v25; 
  uint32 v26; 
  uint32 v27; 
  int v28; 
  uint32 v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  uint32 v35; 
  int v36; 
  int v37; 
  int v38; 
  uint32 v39; 
  uint16 v40; 
  int v41; 
  uint32 v42; 
  int v43; 
  int v44; 
  int v45; 
  int v47; 
  int v48; 
  uint32 v49; 
  sint16 v50; 
  int v51; 
  int v52; 



  v5 = 23;
  v6 = TM3_DRAFT_LOCAL_ADDRESS(&v63, sizeof(v63));
  do
  {
    TM3_DRAFT_U32(v6) = 0;
    --v5;
    v6 -= (4) * 1u;
  }
  while ( v5 >= 0 );
  v69 = 0;
  v7 = dword_80089898 + 48;
  if ( dword_80089898 )
  {
    v8 = local_base + 0x38u;
    v9 = local_base + 0x38u;
    do
    {
      v10 = TM3_DRAFT_U32(v7 + 8);
      v11 = v10 < 0;
      v12 = 4 * v10;
      if ( !v11 )
        *(_DWORD *)&v62[v12 + 576] = v7;
      if ( (TM3_DRAFT_U32(v7 + 12) & 3) != 0 )
      {
        v13 = 0x7FFFFFFF;
        v14 = 0;
        if ( TM3_DRAFT_I32(0x800d2e88u) > 0 )
        {
          v15 = -2146624064;
          v16 = -2146624016;
          do
          {
            v17 = TM3_DRAFT_I16(v7 + 26);
            v18 = TM3_DRAFT_U32(v16 + 4);
            v19 = (uint32)(TM3_DRAFT_I16(v7 + 28) - TM3_DRAFT_U32(v16 + 8));
            v58 = TM3_DRAFT_I16(v7 + 24) - TM3_DRAFT_U32(v16);
            v60 = v19;
            v59 = v17 - v18;
            
            
            
            v20 = sub_80015764(v58, v17 - v18, (int)v19);
            
            
            
            if ( v20 < v13 )
            {
              v13 = v20;
              a4 = v15;
              v54 = v58;
              v55 = v59;
              v56 = v60;
            }
            v15 += 108;
            ++v14;
            v16 += 108;
          }
          while ( v14 < TM3_DRAFT_U32(0x800d2e88u) );
        }
      }
      else
      {
        v13 = 0;
        a4 = 0;
      }
      if ( v69 >= 24 )
      {
        v24 = -1;
        v25 = 0;
        v26 = v8;
        do
        {
          if ( v24 < TM3_DRAFT_I32(v26 + 4u) )
          {
            v24 = TM3_DRAFT_I32(v26 + 4u);
            v4 = v25;
          }
          ++v25;
          v26 += (24) * 1u;
        }
        while ( v25 < v69 );
        if ( v13 < v24 )
        {
          v27 = v8 + 24u * (uint32)v4;
          TM3_DRAFT_I32(v27) = v7;
          TM3_DRAFT_I32(v27 + (1) * 4u) = v13;
          v28 = v55;
          v29 = v56;
          TM3_DRAFT_I32(v27 + (2) * 4u) = v54;
          TM3_DRAFT_I32(v27 + (3) * 4u) = v28;
          TM3_DRAFT_I32(v27 + (4) * 4u) = (int)v29;
          TM3_DRAFT_I32(v27 + (5) * 4u) = a4;
        }
      }
      else
      {
        v21 = v69 + 1;
        TM3_DRAFT_U32(v9) = v7;
        TM3_DRAFT_U32(v9 + 4u) = v13;
        v22 = v55;
        v23 = v56;
        v69 = v21;
        TM3_DRAFT_U32(v9 + 8u) = v54;
        TM3_DRAFT_U32(v9 + 12u) = v22;
        TM3_DRAFT_U32(v9 + 16u) = v23;
        TM3_DRAFT_U32(v9 + 20u) = a4;
        v9 += (24) * 1u;
      }
      v30 = TM3_DRAFT_U32(v7 - 40);
      v7 = v30 + 48;
    }
    while ( v30 );
  }
  sub_800619E8(v64);
  v31 = 0;
  v32 = v69;
  v33 = 0;
  if ( v69 > 0 )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = local_base + 0x38u + v34;
      v36 = *(_DWORD *)&v62[v34];
      v37 = TM3_DRAFT_U32(v36 + 8);
      if ( v37 < 0 )
        goto LABEL_40;
      if ( v64[v37] != 3 && v64[v37] )
        break;
      sub_80061574(0, 1u << ((uint32)(v37) & 31u));
      if ( sub_800403A4(TM3_DRAFT_U32(v36)) )
      {
        TM3_DRAFT_U32(v36 + 8) = -1;
LABEL_40:
        v34 += 24;
        goto LABEL_41;
      }
      sub_8004A570(v36);
      v34 += 24;
LABEL_41:
      if ( ++v31 >= v69 )
      {
        v32 = v69;
        goto LABEL_43;
      }
    }
    v38 = TM3_DRAFT_I32(v35 + (5) * 4u);
    v11 = v38 == 0;
    v39 = (uint32)(v38 + 60);
    if ( v11 )
    {
      sub_80040710(TM3_DRAFT_U32(v36 + 8), 0x3FFF, 0x3FFF);
    }
    else
    {
      sub_8005B774(v39, (v35 + (2) * 4u), v65);
      sub_80040C04(
        TM3_DRAFT_I32(v35 + (1) * 4u), 
        TM3_DRAFT_U16(v36 + 42), 
        v65[0], 
        v66, 
        (int)&v67, 
        (int)&v68);
      sub_80040710(TM3_DRAFT_U32(v36 + 8), v67, v68);
      if ( (TM3_DRAFT_U32(v36 + 12) & 3) != 0 )
        v40 = sub_80040DC8((uint32)TM3_DRAFT_I32(v35 + (5) * 4u), (uint32)v36);
      else
        v40 = TM3_DRAFT_U16(v36 + 40);
      sub_800406F0(TM3_DRAFT_U32(v36 + 8), v40);
    }
    v33 |= 1u << ((uint32)(TM3_DRAFT_U32(v36 + 8)) & 31u);
    goto LABEL_40;
  }
LABEL_43:
  v41 = 0;
  if ( v32 > 0 )
  {
    v42 = local_base + 0x38u;
    do
    {
      v43 = TM3_DRAFT_I32(v42);
      if ( TM3_DRAFT_I32(TM3_DRAFT_I32(v42) + 8) < 0 )
      {
        v44 = 0;
        if ( (v33 & 1) != 0 )
        {
          v45 = 1;
          while ( v33 & (1u << ((uint32)(v45++) & 31u)) )
            ;
          v44 = v45 - 1;
        }
        TM3_DRAFT_U32(v43 + 8) = v44;
        v47 = *(_DWORD *)&v62[4 * v44 + 576];
        if ( v47 )
          TM3_DRAFT_U32(v47 + 8) = -1;
        v48 = TM3_DRAFT_I32(v42 + (5) * 4u);
        v11 = v48 == 0;
        v49 = (uint32)(v48 + 60);
        if ( v11 )
        {
          v68 = 0x3FFF;
          v67 = 0x3FFF;
        }
        else
        {
          sub_8005B774(v49, (v42 + (2) * 4u), v65);
          sub_80040C04(
            TM3_DRAFT_I32(v42 + (1) * 4u), 
            TM3_DRAFT_U16(v43 + 42), 
            v65[0], 
            v66, 
            (int)&v67, 
            (int)&v68);
        }
        if ( (TM3_DRAFT_U32(v43 + 12) & 3) != 0 )
          v50 = sub_80040DC8((uint32)TM3_DRAFT_I32(v42 + (5) * 4u), (uint32)v43);
        else
          v50 = TM3_DRAFT_U16(v43 + 40);
        v51 = TM3_DRAFT_U32(v43 + 36);
        if ( v51 <= 0 )
          v52 = 0;
        else
          v52 = (sint32)(TM3_DRAFT_U32(v43 + 32) << 12) / v51;
        sub_800403DC(TM3_DRAFT_U32(v43), v52, TM3_DRAFT_U32(v43 + 8), v50, v67, v68);
        v33 |= 1u << ((uint32)(TM3_DRAFT_U32(v43 + 8)) & 31u);
      }
      ++v41;
      v42 += (6) * 4u;
    }
    while ( v41 < v69 );
  }
  sub_80061574(0, ~v33);
  /* Final original iteration comparison leaves V0 equal to zero */
  return 0u;
}

#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67
#undef v68
#undef v69
#undef v70
#undef v71
#undef v72

/* Unverified decompiler-derived draft */
uint32 sub_8004E4B8(uint32 a1, uint32 a2, uint32 a3, uint32 a4, uint32 a5, uint32 a6, uint32 a7, uint32 a8)
{
    FUNCTION_MARKER(0x8004E4B8u, "SCUS_942.49");
    /* TODO Original signed wrap, guest pointers and unresolved ABI effects remain unverified */

  int v20; 
  int v21; 
  uint32 v22; 
  int v23; 
  sint16 v24; 
  sint16 v25; 
  sint16 v26; 
  sint16 v27; 
  sint16 v28; 
  sint16 v29; 
  sint16 v30; 
  sint16 v31; 
  sint16 v32; 
  sint16 v33; 
  sint16 v34; 
  sint16 v35; 
  sint16 v36; 
  sint16 v37; 
  sint16 v38; 
  sint16 v39; 
  sint16 v40; 
  sint16 v41; 
  sint16 v42; 
  sint16 v43; 
  sint16 v44; 
  sint16 v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  uint32 v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  uint32 v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int result; 
  int v63; 
  uint32 v64; 
  char vars0; 
  char vars4; 
  char vars8; 
  char varsC; 
  char vars10; 

  v20 = 0;
  v21 = 0;
  if ( (sint32)a5 > 0 )
  {
    v22 = (uint32)a6;
    do
    {
      v23 = sub_80049130(a3, TM3_DRAFT_U32(v22));
      if ( (a8 & 1) != 0 )
      {
        v20 += v23;
      }
      else if ( v20 < v23 )
      {
        v20 = v23;
      }
      ++v21;
      (v22 += 4u);
    }
    while ( v21 < (sint32)a5 );
  }
  TM3_DRAFT_U16(a1 + 134448) = 8;
  TM3_DRAFT_U16(a1 + 134450) = 4;
  if ( (a8 & 1) != 0 )
  {
    TM3_DRAFT_U16(a1 + 134448) = TM3_DRAFT_U16(a1 + 134448) - 7 + v20 + 7 * a5;
    v24 = TM3_DRAFT_U16(a1 + 134450) + TM3_DRAFT_U8(a3 + 20);
  }
  else
  {
    TM3_DRAFT_U16(a1 + 134448) += v20;
    v24 = TM3_DRAFT_U16(a1 + 134450) - 5 + a5 * (TM3_DRAFT_U8(a3 + 20) + 5);
  }
  TM3_DRAFT_U16(a1 + 134450) = v24;
  v25 = TM3_DRAFT_U16(a1 + 134450) + 4;
  TM3_DRAFT_U16(a1 + 134448) += 8;
  TM3_DRAFT_U16(a1 + 134450) = v25;
  if ( (a8 & 2) != 0 )
    a4 -= (v25 + 2) / 2;
  v26 = TM3_DRAFT_U16(a1 + 134448);
  v27 = -20 - v26;
  if ( -20 - v26 < 0 )
    v27 = word_80089E00 - 20 - v26;
  TM3_DRAFT_U16(a1 + 134444) = v27;
  v28 = a4 + 1;
  if ( (sint32)(a4 + (uint32)(sint32)TM3_DRAFT_I16(a1 + 134450) + 1u) >= 202 )
    v28 = 200 - TM3_DRAFT_U16(a1 + 134450);
  TM3_DRAFT_U16(a1 + 134446) = v28;
  v29 = TM3_DRAFT_U16(a1 + 134444);
  v30 = TM3_DRAFT_U16(a1 + 134446);
  TM3_DRAFT_U16(a1 + 134386) = 1;
  TM3_DRAFT_U16(a1 + 134400) = 1;
  TM3_DRAFT_U16(a1 + 134418) = 1;
  TM3_DRAFT_U16(a1 + 134460) = v29 + 5;
  v31 = TM3_DRAFT_U16(a1 + 134448);
  TM3_DRAFT_U16(a1 + 134462) = v30 + 5;
  v32 = TM3_DRAFT_U16(a1 + 134450);
  TM3_DRAFT_U16(a1 + 134464) = v31 + 2;
  v33 = TM3_DRAFT_U16(a1 + 134444);
  TM3_DRAFT_U16(a1 + 134466) = v32 + 2;
  v34 = TM3_DRAFT_U16(a1 + 134446);
  TM3_DRAFT_U16(a1 + 134380) = v33 - 1;
  v35 = TM3_DRAFT_U16(a1 + 134448);
  TM3_DRAFT_U16(a1 + 134382) = v34 - 1;
  v36 = TM3_DRAFT_U16(a1 + 134444);
  v37 = v35;
  TM3_DRAFT_U16(a1 + 134384) = v35 + 2;
  v38 = TM3_DRAFT_U16(a1 + 134446);
  TM3_DRAFT_U16(a1 + 134396) = v36 + v37;
  v39 = TM3_DRAFT_U16(a1 + 134450);
  v40 = v39;
  TM3_DRAFT_U16(a1 + 134398) = v38 - 1;
  v41 = TM3_DRAFT_U16(a1 + 134444);
  TM3_DRAFT_U16(a1 + 134402) = v39 + 2;
  v42 = TM3_DRAFT_U16(a1 + 134446);
  TM3_DRAFT_U16(a1 + 134412) = v41 - 1;
  v43 = TM3_DRAFT_U16(a1 + 134448);
  TM3_DRAFT_U16(a1 + 134414) = v42 + v40;
  v44 = TM3_DRAFT_U16(a1 + 134444) - 1;
  TM3_DRAFT_U16(a1 + 134416) = v43 + 2;
  TM3_DRAFT_U16(a1 + 134428) = v44;
  TM3_DRAFT_U16(a1 + 134432) = 1;
  v45 = TM3_DRAFT_U16(a1 + 134446);
  TM3_DRAFT_U16(a1 + 134434) = v40 + 2;
  TM3_DRAFT_U16(a1 + 134430) = v45 - 1;
  if ( TM3_DRAFT_U32(0x800d2f20u) == 2 )
    v46 = TM3_DRAFT_U32(0x80089C00u + (5) * 4u) + 409;
  else
    v46 = TM3_DRAFT_U32(0x80089C00u + (5) * 4u) + 273;
  TM3_DRAFT_U32(0x80089C00u + (5) * 4u) = v46;
  v48 = 0;
  v47 = sub_8005AF24(v46);
  v49 = 0;
  v50 = 0;
  if ( (sint32)a5 > 0 )
  {
    v63 = 127 * (v47 / 2 + 4096);
    v51 = (uint32)a6;
    do
    {
      v52 = 40;
      if ( v50 == a7 )
      {
        v52 = v63 >> 12;
        v53 = v63 >> 12;
        v54 = v63 >> 12;
      }
      else
      {
        v53 = 35;
        v54 = 45;
      }
      sub_80049284(TM3_DRAFT_U32(v51), a3, TM3_DRAFT_I16(a1 + 134444) + v49 + 8, TM3_DRAFT_I16(a1 + 134446) + v48 + 4, a1, (int)a2, 2, v53, v52, v54, 0u, 0u);
      if ( (a8 & 1) != 0 )
        v49 += 7 + sub_80049130(a3, TM3_DRAFT_U32(v51));
      else
        v48 += 5 + TM3_DRAFT_U8(a3 + 20);
      ++v50;
      (v51 += 4u);
    }
    while ( v50 < (sint32)a5 );
  }
  v55 = 0;
  v56 = 134372;
  v57 = a1;
  do
  {
    v58 = a1 + v56;
    v56 += 16;
    v59 = (uint32)(v57 + 134372);
    v57 += 16;
    ++v55;
    TM3_DRAFT_U32(v59) = TM3_DRAFT_U32(v59) & 0xFF000000 | TM3_DRAFT_U32(a2) & 0xFFFFFF;
    v60 = TM3_DRAFT_U32(a2) & 0xFF000000 | v58 & 0xFFFFFF;
    TM3_DRAFT_U32(a2) = v60;
  }
  while ( v55 < 4 );
  TM3_DRAFT_U32(a1 + 134436) = TM3_DRAFT_U32(a1 + 134436) & 0xFF000000 | v60 & 0xFFFFFF;
  v61 = TM3_DRAFT_U32(a2) & 0xFF000000 | (a1 + 134436) & 0xFFFFFF;
  TM3_DRAFT_U32(a2) = v61;
  TM3_DRAFT_U32(a1 + 134452) = TM3_DRAFT_U32(a1 + 134452) & 0xFF000000 | v61 & 0xFFFFFF;
  result = TM3_DRAFT_U32(a2) & 0xFF000000 | (a1 + 134452) & 0xFFFFFF;
  TM3_DRAFT_U32(a2) = result;
  return result;
}
