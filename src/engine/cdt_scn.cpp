
/* from: engine:cdt_scn.cpp
   addr: 004D04B0 */

int __thiscall cdtREFINE::IsInclInst(cdtREFINE *this,animINST *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 & 0x11) != 0) {
    return 0;
  }
  uVar2 = *(uint *)(this + 4);
  if (((uVar2 & 2) != 0) && ((uVar1 & 0x48) == 0)) {
    return 0;
  }
  if (((uVar2 & 4) != 0) && ((uVar1 & 8) != 0)) {
    return 0;
  }
  if (((uVar2 & 8) != 0) && ((uVar1 & 0x48) != 0)) {
    return 0;
  }
  return (uint)(*(animINST **)(this + 8) != param_1);
}




/* from: engine:cdt_scn.cpp
   addr: 004D0510 */

int __thiscall cdtCOLL_SCN_INST::RefineInd(cdtCOLL_SCN_INST *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)this + 0x18))(param_1);
  uVar1 = *(uint *)(iVar2 + 8);
  if ((((uVar1 & 0x1f) == 0) || ((uVar1 & 0x10000) != 0)) && ((uVar1 & 0x40000) == 0)) {
    return 1;
  }
  return 0;
}




/* from: engine:cdt_scn.cpp
   addr: 004D0540 */

void __thiscall cdtCOLL_SCN_INST::RefineIndList(cdtCOLL_SCN_INST *this,cdtOFL *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)param_1) {
    do {
      iVar2 = (**(code **)(*(int *)this + 0x18))(*(undefined2 *)(*(int *)(param_1 + 4) + iVar4 * 2))
      ;
      uVar1 = *(uint *)(iVar2 + 8);
      if (((((uVar1 & 0x1f) == 0) || ((uVar1 & 0x10000) != 0)) && ((uVar1 & 0x40000) == 0)) &&
         (((param_2 & 0x200U) == 0 || ((uVar1 & 0x20) == 0)))) {
        iVar3 = iVar3 + 1;
        *(undefined2 *)(*(int *)(param_1 + 4) + -2 + iVar3 * 2) =
             *(undefined2 *)(*(int *)(param_1 + 4) + iVar4 * 2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)param_1);
  }
  *(int *)param_1 = iVar3;
  return;
}




/* from: engine:cdt_scn.cpp
   addr: 004D05B0 */

int __thiscall cdtCOLL_SCN_INST::GetIDBBox(cdtCOLL_SCN_INST *this,int param_1,m3dBOX *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x18))(param_1);
  if (*(int *)(iVar1 + 0x10) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0xc4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 200);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0xcc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0xd0);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0xd4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0xd8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0xdc);
  return 1;
}




/* from: engine:cdt_scn.cpp
   addr: 004D0610 */

int __thiscall cdtCOLL_SCN_INST::IsectIDBBox(cdtCOLL_SCN_INST *this,int param_1,m3dBOX *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  byte *pbVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  byte *pbVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_114;
  undefined4 local_110 [60];
  int local_20;
  int local_1c;
  float *local_18;
  byte *local_14;
  int local_10;
  int local_c;
  float *local_8;
  
  pbVar7 = (byte *)(**(code **)(*(int *)this + 0x18))(param_1);
  local_c = 0;
  if (0 < *(int *)(pbVar7 + 0x10)) {
    local_10 = 0;
    local_14 = pbVar7;
    do {
      local_114 = 3;
      if ((*pbVar7 & 1) == 0) {
        local_8 = (float *)(pbVar7 + 0x3c);
        param_1 = (int)local_110;
        local_1c = 0;
        do {
          piVar6 = *(int **)(pbVar7 + 0x28);
          local_20 = param_1;
          pfVar1 = (float *)(piVar6[0x10] +
                            (uint)*(ushort *)
                                   ((uint)*(byte *)(piVar6 + 1) * local_c + 2 + local_1c * 2 +
                                   *piVar6) * 0xc);
          local_18 = pfVar1;
          if (m3dSimdType == 0) {
            if (((uint)local_8 & 0xf) == 0) {
              fVar24 = *pfVar1;
              fVar4 = pfVar1[1];
              fVar5 = pfVar1[2];
              fVar22 = fVar24 * *local_8 + local_8[0xc] + fVar4 * local_8[4] + fVar5 * local_8[8];
              fVar23 = fVar24 * local_8[1] + local_8[0xd] + fVar4 * local_8[5] + fVar5 * local_8[9];
              fVar24 = fVar24 * local_8[2] + local_8[0xe] + fVar4 * local_8[6] + fVar5 * local_8[10]
              ;
            }
            else {
              fVar24 = *pfVar1;
              fVar4 = pfVar1[1];
              fVar5 = pfVar1[2];
              fVar22 = fVar24 * (float)*(undefined8 *)local_8 +
                       fVar4 * (float)*(undefined8 *)(local_8 + 4) +
                       fVar5 * (float)*(undefined8 *)(local_8 + 8) +
                       (float)*(undefined8 *)(local_8 + 0xc);
              fVar23 = fVar24 * (float)((ulonglong)*(undefined8 *)local_8 >> 0x20) +
                       fVar4 * (float)((ulonglong)*(undefined8 *)(local_8 + 4) >> 0x20) +
                       fVar5 * (float)((ulonglong)*(undefined8 *)(local_8 + 8) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(local_8 + 0xc) >> 0x20);
              fVar24 = fVar24 * (float)*(undefined8 *)(local_8 + 2) +
                       fVar4 * (float)*(undefined8 *)(local_8 + 6) +
                       fVar5 * (float)*(undefined8 *)(local_8 + 10) +
                       (float)*(undefined8 *)(local_8 + 0xe);
            }
            *(ulonglong *)param_1 = CONCAT44(fVar23,fVar22);
            *(float *)(param_1 + 8) = fVar24;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar14 = (undefined4)*(undefined8 *)pfVar1;
            uVar17 = CONCAT44(uVar14,uVar14);
            uVar14 = (undefined4)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
            uVar20 = CONCAT44(uVar14,uVar14);
            uVar21 = CONCAT44(pfVar1[2],pfVar1[2]);
            uVar15 = PackedFloatingMUL(uVar17,*(undefined8 *)local_8);
            uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_8 + 4));
            uVar18 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_8 + 8));
            uVar15 = PackedFloatingADD(uVar15,*(undefined8 *)(local_8 + 0xc));
            uVar19 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_8 + 2));
            uVar17 = PackedFloatingADD(uVar16,uVar18);
            uVar16 = PackedFloatingMUL(uVar20,*(undefined8 *)(local_8 + 6));
            uVar21 = PackedFloatingMUL(uVar21,*(undefined8 *)(local_8 + 10));
            uVar20 = PackedFloatingADD(uVar19,*(undefined8 *)(local_8 + 0xe));
            uVar17 = PackedFloatingADD(uVar15,uVar17);
            uVar15 = PackedFloatingADD(uVar16,uVar21);
            *(undefined8 *)param_1 = uVar17;
            uVar17 = PackedFloatingADD(uVar20,uVar15);
            *(int *)(param_1 + 8) = (int)uVar17;
            FastExitMediaState();
          }
          else {
            iVar12 = 0;
            pfVar8 = (float *)param_1;
            do {
              *pfVar8 = 0.0;
              iVar9 = 0;
              pfVar10 = (float *)(((int)local_8 - param_1) + (int)pfVar8);
              do {
                pfVar2 = pfVar1 + iVar9;
                fVar24 = *pfVar10;
                iVar9 = iVar9 + 1;
                pfVar10 = pfVar10 + 4;
                *pfVar8 = *pfVar2 * fVar24 + *pfVar8;
              } while (iVar9 < 3);
              iVar9 = iVar12 + iVar9 * 4;
              iVar12 = iVar12 + 1;
              *pfVar8 = local_8[iVar9] + *pfVar8;
              pfVar8 = pfVar8 + 1;
              pbVar7 = local_14;
            } while (iVar12 < 3);
          }
          local_1c = local_1c + 1;
          param_1 = param_1 + 0xc;
        } while (local_1c < 3);
      }
      else {
        iVar12 = 0;
        pbVar11 = pbVar7;
        puVar13 = local_110;
        do {
          pbVar7 = local_14;
          piVar6 = *(int **)(pbVar11 + 0x28);
          iVar9 = iVar12 * 2;
          iVar12 = iVar12 + 1;
          puVar3 = (undefined4 *)
                   (piVar6[0x10] +
                   (uint)*(ushort *)((uint)*(byte *)(piVar6 + 1) * local_c + 2 + iVar9 + *piVar6) *
                   0xc);
          *puVar13 = *puVar3;
          puVar13[1] = puVar3[1];
          puVar13[2] = puVar3[2];
          pbVar11 = pbVar7;
          puVar13 = puVar13 + 3;
        } while (iVar12 < 3);
      }
      iVar12 = local_10;
      iVar9 = m3dBOX::IsIsectPoly(param_2,(m3dPOLY *)&local_114,
                                  (m3dV *)(*(int *)(*(int *)(pbVar7 + 0x28) + 0x44) + local_10));
      if (iVar9 != 1) {
        return 1;
      }
      local_c = local_c + 1;
      local_10 = iVar12 + 0xc;
    } while (local_c < *(int *)(pbVar7 + 0x10));
  }
  return 0;
}




/* from: engine:cdt_scn.cpp
   addr: 004D08B0 */

int __thiscall
cdtCOLL_SCN_INST::GetID2BBox(cdtCOLL_SCN_INST *this,void *param_1,int param_2,m3dBOX *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_108 [60];
  float *local_18;
  int local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
                    /* WARNING: Load size is inaccurate */
  if ((*param_1 & 1) == 0) {
    pfVar6 = local_108;
    local_14 = 0;
    local_8 = (float *)((int)param_1 + 0x3c);
    local_c = pfVar6;
    do {
      piVar5 = *(int **)((int)param_1 + 0x28);
      local_10 = pfVar6;
      pfVar1 = (float *)(piVar5[0x10] +
                        (uint)*(ushort *)
                               ((uint)*(byte *)(piVar5 + 1) * param_2 + 2 + local_14 * 2 + *piVar5)
                        * 0xc);
      local_18 = pfVar1;
      if (m3dSimdType == 0) {
        if (((uint)local_8 & 0xf) == 0) {
          fVar21 = *pfVar1;
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar19 = fVar21 * *local_8 + local_8[0xc] + fVar3 * local_8[4] + fVar4 * local_8[8];
          fVar20 = fVar21 * local_8[1] + local_8[0xd] + fVar3 * local_8[5] + fVar4 * local_8[9];
          fVar21 = fVar21 * local_8[2] + local_8[0xe] + fVar3 * local_8[6] + fVar4 * local_8[10];
        }
        else {
          fVar21 = *pfVar1;
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar19 = fVar21 * (float)*(undefined8 *)local_8 +
                   fVar3 * (float)*(undefined8 *)(local_8 + 4) +
                   fVar4 * (float)*(undefined8 *)(local_8 + 8) +
                   (float)*(undefined8 *)(local_8 + 0xc);
          fVar20 = fVar21 * (float)((ulonglong)*(undefined8 *)local_8 >> 0x20) +
                   fVar3 * (float)((ulonglong)*(undefined8 *)(local_8 + 4) >> 0x20) +
                   fVar4 * (float)((ulonglong)*(undefined8 *)(local_8 + 8) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(local_8 + 0xc) >> 0x20);
          fVar21 = fVar21 * (float)*(undefined8 *)(local_8 + 2) +
                   fVar3 * (float)*(undefined8 *)(local_8 + 6) +
                   fVar4 * (float)*(undefined8 *)(local_8 + 10) +
                   (float)*(undefined8 *)(local_8 + 0xe);
        }
        *(ulonglong *)pfVar6 = CONCAT44(fVar20,fVar19);
        pfVar6[2] = fVar21;
        local_c = pfVar6;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar11 = (undefined4)*(undefined8 *)pfVar1;
        uVar14 = CONCAT44(uVar11,uVar11);
        uVar11 = (undefined4)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
        uVar17 = CONCAT44(uVar11,uVar11);
        uVar18 = CONCAT44(pfVar1[2],pfVar1[2]);
        uVar12 = PackedFloatingMUL(uVar14,*(undefined8 *)local_8);
        uVar13 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_8 + 4));
        uVar15 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_8 + 8));
        uVar12 = PackedFloatingADD(uVar12,*(undefined8 *)(local_8 + 0xc));
        uVar16 = PackedFloatingMUL(uVar14,*(undefined8 *)(local_8 + 2));
        uVar14 = PackedFloatingADD(uVar13,uVar15);
        uVar13 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_8 + 6));
        uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_8 + 10));
        uVar17 = PackedFloatingADD(uVar16,*(undefined8 *)(local_8 + 0xe));
        uVar14 = PackedFloatingADD(uVar12,uVar14);
        uVar12 = PackedFloatingADD(uVar13,uVar18);
        *(undefined8 *)pfVar6 = uVar14;
        uVar14 = PackedFloatingADD(uVar17,uVar12);
        pfVar6[2] = (float)uVar14;
        FastExitMediaState();
        local_c = pfVar6;
      }
      else {
        iVar10 = 0;
        iVar9 = (int)local_8 - (int)pfVar6;
        local_c = pfVar6;
        do {
          *pfVar6 = 0.0;
          iVar7 = 0;
          pfVar8 = (float *)(iVar9 + (int)pfVar6);
          do {
            pfVar2 = pfVar1 + iVar7;
            fVar21 = *pfVar8;
            iVar7 = iVar7 + 1;
            pfVar8 = pfVar8 + 4;
            *pfVar6 = *pfVar2 * fVar21 + *pfVar6;
          } while (iVar7 < 3);
          iVar7 = iVar10 + iVar7 * 4;
          iVar10 = iVar10 + 1;
          *pfVar6 = local_8[iVar7] + *pfVar6;
          pfVar6 = pfVar6 + 1;
        } while (iVar10 < 3);
      }
      local_14 = local_14 + 1;
      pfVar6 = local_c + 3;
      local_c = pfVar6;
    } while (local_14 < 3);
  }
  else {
    piVar5 = *(int **)((int)param_1 + 0x28);
    iVar9 = 0;
    pfVar6 = local_108;
    do {
      iVar10 = iVar9 * 2;
      iVar9 = iVar9 + 1;
      pfVar1 = (float *)(piVar5[0x10] +
                        (uint)*(ushort *)
                               ((uint)*(byte *)(piVar5 + 1) * param_2 + 2 + iVar10 + *piVar5) * 0xc)
      ;
      *pfVar6 = *pfVar1;
      pfVar6[1] = pfVar1[1];
      pfVar6[2] = pfVar1[2];
      pfVar6 = pfVar6 + 3;
    } while (iVar9 < 3);
  }
  (**(code **)(*(int *)param_3 + 0x14))(local_108,3);
  return 1;
}




/* from: engine:cdt_scn.cpp
   addr: 004D0B00 */

int __thiscall
cdtCOLL_SCN_INST::IsectID2BBox(cdtCOLL_SCN_INST *this,void *param_1,int param_2,m3dBOX *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_10c;
  float local_108 [60];
  float *local_18;
  int local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
                    /* WARNING: Load size is inaccurate */
  local_10c = 3;
  if ((*param_1 & 1) == 0) {
    pfVar6 = local_108;
    local_14 = 0;
    local_8 = (float *)((int)param_1 + 0x3c);
    local_c = pfVar6;
    do {
      piVar5 = *(int **)((int)param_1 + 0x28);
      local_10 = pfVar6;
      pfVar1 = (float *)(piVar5[0x10] +
                        (uint)*(ushort *)
                               ((uint)*(byte *)(piVar5 + 1) * param_2 + 2 + local_14 * 2 + *piVar5)
                        * 0xc);
      local_18 = pfVar1;
      if (m3dSimdType == 0) {
        if (((uint)local_8 & 0xf) == 0) {
          fVar21 = *pfVar1;
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar19 = fVar21 * *local_8 + local_8[0xc] + fVar3 * local_8[4] + fVar4 * local_8[8];
          fVar20 = fVar21 * local_8[1] + local_8[0xd] + fVar3 * local_8[5] + fVar4 * local_8[9];
          fVar21 = fVar21 * local_8[2] + local_8[0xe] + fVar3 * local_8[6] + fVar4 * local_8[10];
        }
        else {
          fVar21 = *pfVar1;
          fVar3 = pfVar1[1];
          fVar4 = pfVar1[2];
          fVar19 = fVar21 * (float)*(undefined8 *)local_8 +
                   fVar3 * (float)*(undefined8 *)(local_8 + 4) +
                   fVar4 * (float)*(undefined8 *)(local_8 + 8) +
                   (float)*(undefined8 *)(local_8 + 0xc);
          fVar20 = fVar21 * (float)((ulonglong)*(undefined8 *)local_8 >> 0x20) +
                   fVar3 * (float)((ulonglong)*(undefined8 *)(local_8 + 4) >> 0x20) +
                   fVar4 * (float)((ulonglong)*(undefined8 *)(local_8 + 8) >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(local_8 + 0xc) >> 0x20);
          fVar21 = fVar21 * (float)*(undefined8 *)(local_8 + 2) +
                   fVar3 * (float)*(undefined8 *)(local_8 + 6) +
                   fVar4 * (float)*(undefined8 *)(local_8 + 10) +
                   (float)*(undefined8 *)(local_8 + 0xe);
        }
        *(ulonglong *)pfVar6 = CONCAT44(fVar20,fVar19);
        pfVar6[2] = fVar21;
        local_c = pfVar6;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar11 = (undefined4)*(undefined8 *)pfVar1;
        uVar14 = CONCAT44(uVar11,uVar11);
        uVar11 = (undefined4)((ulonglong)*(undefined8 *)pfVar1 >> 0x20);
        uVar17 = CONCAT44(uVar11,uVar11);
        uVar18 = CONCAT44(pfVar1[2],pfVar1[2]);
        uVar12 = PackedFloatingMUL(uVar14,*(undefined8 *)local_8);
        uVar13 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_8 + 4));
        uVar15 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_8 + 8));
        uVar12 = PackedFloatingADD(uVar12,*(undefined8 *)(local_8 + 0xc));
        uVar16 = PackedFloatingMUL(uVar14,*(undefined8 *)(local_8 + 2));
        uVar14 = PackedFloatingADD(uVar13,uVar15);
        uVar13 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_8 + 6));
        uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(local_8 + 10));
        uVar17 = PackedFloatingADD(uVar16,*(undefined8 *)(local_8 + 0xe));
        uVar14 = PackedFloatingADD(uVar12,uVar14);
        uVar12 = PackedFloatingADD(uVar13,uVar18);
        *(undefined8 *)pfVar6 = uVar14;
        uVar14 = PackedFloatingADD(uVar17,uVar12);
        pfVar6[2] = (float)uVar14;
        FastExitMediaState();
        local_c = pfVar6;
      }
      else {
        iVar10 = 0;
        iVar9 = (int)local_8 - (int)pfVar6;
        local_c = pfVar6;
        do {
          *pfVar6 = 0.0;
          iVar7 = 0;
          pfVar8 = (float *)(iVar9 + (int)pfVar6);
          do {
            pfVar2 = pfVar1 + iVar7;
            fVar21 = *pfVar8;
            iVar7 = iVar7 + 1;
            pfVar8 = pfVar8 + 4;
            *pfVar6 = *pfVar2 * fVar21 + *pfVar6;
          } while (iVar7 < 3);
          iVar7 = iVar10 + iVar7 * 4;
          iVar10 = iVar10 + 1;
          *pfVar6 = local_8[iVar7] + *pfVar6;
          pfVar6 = pfVar6 + 1;
        } while (iVar10 < 3);
      }
      local_14 = local_14 + 1;
      pfVar6 = local_c + 3;
      local_c = pfVar6;
    } while (local_14 < 3);
  }
  else {
    piVar5 = *(int **)((int)param_1 + 0x28);
    iVar9 = 0;
    pfVar6 = local_108;
    do {
      iVar10 = iVar9 * 2;
      iVar9 = iVar9 + 1;
      pfVar1 = (float *)(piVar5[0x10] +
                        (uint)*(ushort *)
                               ((uint)*(byte *)(piVar5 + 1) * param_2 + 2 + iVar10 + *piVar5) * 0xc)
      ;
      *pfVar6 = *pfVar1;
      pfVar6[1] = pfVar1[1];
      pfVar6[2] = pfVar1[2];
      pfVar6 = pfVar6 + 3;
    } while (iVar9 < 3);
  }
  iVar9 = m3dBOX::IsIsectPoly(param_3,(m3dPOLY *)&local_10c,
                              (m3dV *)(*(int *)(*(int *)((int)param_1 + 0x28) + 0x44) +
                                      param_2 * 0xc));
  return (uint)(iVar9 != 1);
}




/* from: engine:cdt_scn.cpp
   addr: 004D0D70 */

void * __thiscall cdtCOLL_SCN::GetID2Ptr(cdtCOLL_SCN *this,int param_1)

{
  return *(void **)(*(int *)(*(int *)(this + 100) + 0x4c) + param_1 * 4);
}




/* from: engine:cdt_scn.cpp
   addr: 004D0D80 */

int __thiscall cdtCOLL_SCN::GetNID2(cdtCOLL_SCN *this,int param_1)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(this + 100) + 0x4c) + param_1 * 4) + 0x10);
}




/* from: engine:cdt_scn.cpp
   addr: 004D0DA0 */

void __thiscall cdtCOLL_SCN::GetBBoxAll(cdtCOLL_SCN *this,m3dBOX *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 100) + 0x44);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0xc4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 200);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0xcc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0xd0);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0xd4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0xd8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0xdc);
  return;
}




/* from: engine:cdt_scn.cpp
   addr: 004D0E00 */

int __thiscall
cdtCOLL_SCN::IsIsectRayBVol
          (cdtCOLL_SCN *this,void *param_1,int param_2,m3dV *param_3,m3dV *param_4,float param_5)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)(**(code **)(*(int *)this + 0x18))(param_2);
  iVar2 = cdtCOLL_OBJ::IsIsectRayBVolAll
                    ((cdtCOLL_OBJ *)this,pvVar1,(m3dV *)param_2,param_3,(float)param_4);
  return iVar2;
}




/* from: engine:cdt_scn.cpp
   addr: 004D0E40 */

int __thiscall
cdtCOLL_SCN::IsNearBVol(cdtCOLL_SCN *this,void *param_1,int param_2,m3dV *param_3,float param_4)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = (void *)(**(code **)(*(int *)this + 0x18))(param_2);
  iVar2 = cdtCOLL_OBJ::IsNearBVolAll((cdtCOLL_OBJ *)this,pvVar1,(m3dV *)param_2,(float)param_3);
  return iVar2;
}




/* from: engine:cdt_scn.cpp
   addr: 004D0E80 */

void * __thiscall cdtCOLL_INST::GetID2Ptr(cdtCOLL_INST *this,int param_1)

{
  return *(void **)(*(int *)(*(int *)(this + 100) + 300) + param_1 * 4);
}




/* from: engine:cdt_scn.cpp
   addr: 004D0EA0 */

int __thiscall cdtCOLL_INST::GetNID2(cdtCOLL_INST *this,int param_1)

{
  return *(int *)(*(int *)(*(int *)(*(int *)(this + 100) + 300) + param_1 * 4) + 0x10);
}




/* from: engine:cdt_scn.cpp
   addr: 004D0EC0 */

void __thiscall cdtCOLL_INST::GetBBoxAll(cdtCOLL_INST *this,m3dBOX *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(this + 100) + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0xc4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 200);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0xcc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0xd0);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0xd4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0xd8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0xdc);
  return;
}




/* from: engine:cdt_scn.cpp
   addr: 004D0F10 */

int __thiscall
cdtCOLL_INST::IsIsectRayBVolAll
          (cdtCOLL_INST *this,void *param_1,m3dV *param_2,m3dV *param_3,float param_4)

{
  int iVar1;
  
  animINST::Validate(*(animINST **)(this + 100),0x100);
  iVar1 = abvBVOL::IsectRay(*(abvBVOL **)(*(int *)(this + 100) + 0x100),param_2,param_3,param_4,
                            (cdtINFO *)0x0);
  return (uint)(iVar1 != 0);
}




/* from: engine:cdt_scn.cpp
   addr: 004D0F60 */

int __thiscall
cdtCOLL_INST::IsNearBVolAll(cdtCOLL_INST *this,void *param_1,m3dV *param_2,float param_3)

{
  int iVar1;
  
  animINST::Validate(*(animINST **)(this + 100),0x100);
  iVar1 = abvBVOL::DistPoint(*(abvBVOL **)(*(int *)(this + 100) + 0x100),param_2,param_3,
                             (cdtINFO *)0x0);
  return (uint)(iVar1 != 0);
}




/* from: engine:cdt_scn.cpp
   addr: 004D0FA0 */

void __thiscall cdtCOLL_INST::SetCDTFrame(cdtCOLL_INST *this,float param_1)

{
  *(float *)(this + 0x68) = param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:cdt_scn.cpp
   addr: 004D0FC0 */

int __thiscall cdtCOLL_INST::IsCDTFrame(cdtCOLL_INST *this)

{
  uint local_4;
  
  if ((*(uint *)(this + 4) & 0x100) == 0) {
    return 1;
  }
  local_4 = (uint)(ABS(*(float *)(*(int *)(this + 100) + 0xe4) - *(float *)(this + 0x68)) <
                  ___real_3ca3d70a);
  if ((float)local_4 != ___real_00000000) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:cdt_scn.cpp
   addr: 004D1040 */

int __thiscall cdtCOLL_ANIM_SCN::GetIDBBox(cdtCOLL_ANIM_SCN *this,int param_1,m3dBOX *param_2)

{
  animINST *this_00;
  int iVar1;
  
  this_00 = scnSCENE::InstPtr(*(scnSCENE **)(this + 0x70),param_1);
  iVar1 = scnSCENE::IsEmptyInst(*(scnSCENE **)(this + 0x70),this_00);
  if (iVar1 != 0) {
    m3dBOX::MakePointPoint(param_2,&m3dVZero,&m3dVOneXYZ);
    return 0;
  }
  if (((byte)this_00[4] & 0x10) == 0) {
    animINST::GetBBox(this_00,param_2);
    if (((ABS(*(float *)(param_2 + 0x14) - *(float *)(param_2 + 8)) <= ___real_447a0000) &&
        (ABS(*(float *)(param_2 + 0x18) - *(float *)(param_2 + 0xc)) <= ___real_447a0000)) &&
       (ABS(*(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x10)) <= ___real_447a0000)) {
      return 1;
    }
    animINST::Invalidate(this_00,2);
    animINST::Validate(this_00,2);
    iVar1 = *(int *)(this_00 + 0x10);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 0xc4);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 200);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 0xcc);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0xd0);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar1 + 0xd4);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(iVar1 + 0xd8);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(iVar1 + 0xdc);
    return 1;
  }
  return 0;
}

