
/* from: engine:cdt_obj.cpp
   addr: 004EF9C0 */

void __thiscall
cdtCOLL_OBJ::GetFacePoly(cdtCOLL_OBJ *this,void *param_1,int param_2,m3dPOLY *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  m3dPOLY *pmVar8;
  int iVar9;
  m3dPOLY *pmVar10;
  m3dPOLY *pmVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int local_18;
  
  *(undefined4 *)param_3 = 3;
                    /* WARNING: Load size is inaccurate */
  if ((*param_1 & 1) != 0) {
    iVar12 = 0;
    pmVar11 = param_3 + 4;
    do {
      piVar7 = *(int **)((int)param_1 + 0x28);
      iVar9 = iVar12 * 2;
      iVar12 = iVar12 + 1;
      puVar4 = (undefined4 *)
               (piVar7[0x10] +
               (uint)*(ushort *)((uint)*(byte *)(piVar7 + 1) * param_2 + 2 + iVar9 + *piVar7) * 0xc)
      ;
      *(undefined4 *)pmVar11 = *puVar4;
      *(undefined4 *)(pmVar11 + 4) = puVar4[1];
      *(undefined4 *)(pmVar11 + 8) = puVar4[2];
      pmVar11 = pmVar11 + 0xc;
    } while (iVar12 < *(int *)param_3);
    return;
  }
  pfVar1 = (float *)((int)param_1 + 0x3c);
  pmVar11 = param_3 + 4;
  local_18 = 0;
  do {
    piVar7 = *(int **)((int)param_1 + 0x28);
    pfVar2 = (float *)(piVar7[0x10] +
                      (uint)*(ushort *)
                             ((uint)*(byte *)(piVar7 + 1) * param_2 + 2 + local_18 * 2 + *piVar7) *
                      0xc);
    if (m3dSimdType == 0) {
      if (((uint)pfVar1 & 0xf) == 0) {
        fVar23 = *pfVar2;
        fVar5 = pfVar2[1];
        fVar6 = pfVar2[2];
        fVar21 = fVar23 * *pfVar1 + *(float *)((int)param_1 + 0x6c) +
                 fVar5 * *(float *)((int)param_1 + 0x4c) + fVar6 * *(float *)((int)param_1 + 0x5c);
        fVar22 = fVar23 * *(float *)((int)param_1 + 0x40) + *(float *)((int)param_1 + 0x70) +
                 fVar5 * *(float *)((int)param_1 + 0x50) + fVar6 * *(float *)((int)param_1 + 0x60);
        fVar23 = fVar23 * *(float *)((int)param_1 + 0x44) + *(float *)((int)param_1 + 0x74) +
                 fVar5 * *(float *)((int)param_1 + 0x54) + fVar6 * *(float *)((int)param_1 + 100);
      }
      else {
        fVar23 = *pfVar2;
        fVar5 = pfVar2[1];
        fVar6 = pfVar2[2];
        fVar21 = fVar23 * (float)*(undefined8 *)pfVar1 +
                 fVar5 * (float)*(undefined8 *)((int)param_1 + 0x4c) +
                 fVar6 * (float)*(undefined8 *)((int)param_1 + 0x5c) +
                 (float)*(undefined8 *)((int)param_1 + 0x6c);
        fVar22 = fVar23 * (float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20) +
                 fVar5 * (float)((ulonglong)*(undefined8 *)((int)param_1 + 0x4c) >> 0x20) +
                 fVar6 * (float)((ulonglong)*(undefined8 *)((int)param_1 + 0x5c) >> 0x20) +
                 (float)((ulonglong)*(undefined8 *)((int)param_1 + 0x6c) >> 0x20);
        fVar23 = fVar23 * (float)*(undefined8 *)((int)param_1 + 0x44) +
                 fVar5 * (float)*(undefined8 *)((int)param_1 + 0x54) +
                 fVar6 * (float)*(undefined8 *)((int)param_1 + 100) +
                 (float)*(undefined8 *)((int)param_1 + 0x74);
      }
      *(ulonglong *)pmVar11 = CONCAT44(fVar22,fVar21);
      *(float *)(pmVar11 + 8) = fVar23;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar13 = (undefined4)*(undefined8 *)pfVar2;
      uVar16 = CONCAT44(uVar13,uVar13);
      uVar13 = (undefined4)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
      uVar19 = CONCAT44(uVar13,uVar13);
      uVar20 = CONCAT44(pfVar2[2],pfVar2[2]);
      uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)pfVar1);
      uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)((int)param_1 + 0x4c));
      uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)((int)param_1 + 0x5c));
      uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)((int)param_1 + 0x6c));
      uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)((int)param_1 + 0x44));
      uVar16 = PackedFloatingADD(uVar15,uVar17);
      uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)((int)param_1 + 0x54));
      uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)((int)param_1 + 100));
      uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)((int)param_1 + 0x74));
      uVar16 = PackedFloatingADD(uVar14,uVar16);
      uVar14 = PackedFloatingADD(uVar15,uVar20);
      *(undefined8 *)pmVar11 = uVar16;
      uVar16 = PackedFloatingADD(uVar19,uVar14);
      *(float *)(pmVar11 + 8) = (float)uVar16;
      FastExitMediaState();
    }
    else {
      iVar12 = 0;
      pmVar8 = pmVar11;
      do {
        *(float *)pmVar8 = 0.0;
        iVar9 = 0;
        pmVar10 = pmVar8 + ((int)pfVar1 - (int)pmVar11);
        do {
          pfVar3 = pfVar2 + iVar9;
          fVar23 = *(float *)pmVar10;
          iVar9 = iVar9 + 1;
          pmVar10 = pmVar10 + 0x10;
          *(float *)pmVar8 = *pfVar3 * fVar23 + *(float *)pmVar8;
        } while (iVar9 < 3);
        iVar9 = iVar12 + iVar9 * 4;
        iVar12 = iVar12 + 1;
        *(float *)pmVar8 = pfVar1[iVar9] + *(float *)pmVar8;
        pmVar8 = pmVar8 + 4;
      } while (iVar12 < 3);
    }
    local_18 = local_18 + 1;
    pmVar11 = pmVar11 + 0xc;
  } while (local_18 < *(int *)param_3);
  return;
}




/* from: engine:cdt_obj.cpp
   addr: 004EFC10 */

void __thiscall
cdtCOLL_OBJ::GetFaceNormal(cdtCOLL_OBJ *this,void *param_1,int param_2,m3dV *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x28) + 0x44) + param_2 * 0xc);
  *(undefined4 *)param_3 = *puVar1;
  *(undefined4 *)(param_3 + 4) = puVar1[1];
  *(undefined4 *)(param_3 + 8) = puVar1[2];
  return;
}




/* from: engine:cdt_obj.cpp
   addr: 004EFC40 */

void __thiscall
cdtCOLL_OBJ::GetFaceVert(cdtCOLL_OBJ *this,void *param_1,int param_2,int param_3,m3dV *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  m3dV *pmVar8;
  int iVar9;
  m3dV *pmVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
                    /* WARNING: Load size is inaccurate */
  if ((*param_1 & 1) != 0) {
    piVar7 = *(int **)((int)param_1 + 0x28);
    puVar4 = (undefined4 *)
             (piVar7[0x10] +
             (uint)*(ushort *)((uint)*(byte *)(piVar7 + 1) * param_2 + 2 + param_3 * 2 + *piVar7) *
             0xc);
    *(undefined4 *)param_4 = *puVar4;
    *(undefined4 *)(param_4 + 4) = puVar4[1];
    *(undefined4 *)(param_4 + 8) = puVar4[2];
    return;
  }
  piVar7 = *(int **)((int)param_1 + 0x28);
  pfVar1 = (float *)((int)param_1 + 0x3c);
  pfVar2 = (float *)(piVar7[0x10] +
                    (uint)*(ushort *)
                           ((uint)*(byte *)(piVar7 + 1) * param_2 + 2 + param_3 * 2 + *piVar7) * 0xc
                    );
  if (m3dSimdType == 0) {
    if (((uint)pfVar1 & 0xf) == 0) {
      fVar22 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
      fVar20 = fVar22 * *pfVar1 + *(float *)((int)param_1 + 0x6c) +
               fVar5 * *(float *)((int)param_1 + 0x4c) + fVar6 * *(float *)((int)param_1 + 0x5c);
      fVar21 = fVar22 * *(float *)((int)param_1 + 0x40) + *(float *)((int)param_1 + 0x70) +
               fVar5 * *(float *)((int)param_1 + 0x50) + fVar6 * *(float *)((int)param_1 + 0x60);
      fVar22 = fVar22 * *(float *)((int)param_1 + 0x44) + *(float *)((int)param_1 + 0x74) +
               fVar5 * *(float *)((int)param_1 + 0x54) + fVar6 * *(float *)((int)param_1 + 100);
    }
    else {
      fVar22 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
      fVar20 = fVar22 * (float)*(undefined8 *)pfVar1 +
               fVar5 * (float)*(undefined8 *)((int)param_1 + 0x4c) +
               fVar6 * (float)*(undefined8 *)((int)param_1 + 0x5c) +
               (float)*(undefined8 *)((int)param_1 + 0x6c);
      fVar21 = fVar22 * (float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20) +
               fVar5 * (float)((ulonglong)*(undefined8 *)((int)param_1 + 0x4c) >> 0x20) +
               fVar6 * (float)((ulonglong)*(undefined8 *)((int)param_1 + 0x5c) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)((int)param_1 + 0x6c) >> 0x20);
      fVar22 = fVar22 * (float)*(undefined8 *)((int)param_1 + 0x44) +
               fVar5 * (float)*(undefined8 *)((int)param_1 + 0x54) +
               fVar6 * (float)*(undefined8 *)((int)param_1 + 100) +
               (float)*(undefined8 *)((int)param_1 + 0x74);
    }
    *(ulonglong *)param_4 = CONCAT44(fVar21,fVar20);
    *(float *)(param_4 + 8) = fVar22;
    return;
  }
  if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar12 = (undefined4)*(undefined8 *)pfVar2;
    uVar15 = CONCAT44(uVar12,uVar12);
    uVar12 = (undefined4)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
    uVar18 = CONCAT44(uVar12,uVar12);
    uVar19 = CONCAT44(pfVar2[2],pfVar2[2]);
    uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)pfVar1);
    uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)((int)param_1 + 0x4c));
    uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)((int)param_1 + 0x5c));
    uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)((int)param_1 + 0x6c));
    uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)((int)param_1 + 0x44));
    uVar15 = PackedFloatingADD(uVar14,uVar16);
    uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)((int)param_1 + 0x54));
    uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)((int)param_1 + 100));
    uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)((int)param_1 + 0x74));
    uVar15 = PackedFloatingADD(uVar13,uVar15);
    uVar13 = PackedFloatingADD(uVar14,uVar19);
    *(undefined8 *)param_4 = uVar15;
    uVar15 = PackedFloatingADD(uVar18,uVar13);
    *(int *)(param_4 + 8) = (int)uVar15;
    FastExitMediaState();
    return;
  }
  iVar11 = 0;
  pmVar8 = param_4;
  do {
    iVar9 = 0;
    *(float *)pmVar8 = 0.0;
    pmVar10 = pmVar8 + ((int)pfVar1 - (int)param_4);
    do {
      pfVar3 = pfVar2 + iVar9;
      fVar22 = *(float *)pmVar10;
      iVar9 = iVar9 + 1;
      pmVar10 = pmVar10 + 0x10;
      *(float *)pmVar8 = *pfVar3 * fVar22 + *(float *)pmVar8;
    } while (iVar9 < 3);
    iVar9 = iVar11 + iVar9 * 4;
    iVar11 = iVar11 + 1;
    *(float *)pmVar8 = pfVar1[iVar9] + *(float *)pmVar8;
    pmVar8 = pmVar8 + 4;
  } while (iVar11 < 3);
  return;
}




/* from: engine:cdt_obj.cpp
   addr: 004EFE30 */

void __thiscall cdtCOLL_OBJ::GetBBoxAll(cdtCOLL_OBJ *this,m3dBOX *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 100);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0xc4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 200);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0xcc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0xd0);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0xd4);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0xd8);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0xdc);
  return;
}




/* from: engine:cdt_obj.cpp
   addr: 004EFE80 */

int __thiscall cdtCOLL_OBJ::GetIDBBox(cdtCOLL_OBJ *this,int param_1,m3dBOX *param_2)

{
  byte *pbVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  byte *pbVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float local_24 [3];
  byte *local_18;
  byte *local_14;
  undefined8 *local_10;
  float *local_c;
  int local_8;
  
  pbVar11 = *(byte **)(this + 100);
  if (*(int *)(pbVar11 + 0x10) == 0) {
    return 0;
  }
  local_18 = pbVar11;
  m3dBOX::CalcStart(param_2);
  local_8 = 2;
  do {
    piVar5 = *(int **)(pbVar11 + 0x28);
    if ((*pbVar11 & 1) == 0) {
      local_c = local_24;
      pbVar1 = pbVar11 + 0x3c;
      puVar3 = (undefined8 *)
               (piVar5[0x10] +
               (uint)*(ushort *)((uint)*(byte *)(piVar5 + 1) * param_1 + *piVar5 + local_8) * 0xc);
      local_10 = puVar3;
      local_14 = pbVar1;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar12 = (undefined4)*puVar3;
          uVar15 = CONCAT44(uVar12,uVar12);
          uVar12 = (undefined4)((ulonglong)*puVar3 >> 0x20);
          uVar18 = CONCAT44(uVar12,uVar12);
          uVar19 = CONCAT44(*(undefined4 *)(puVar3 + 1),*(undefined4 *)(puVar3 + 1));
          uVar13 = PackedFloatingMUL(uVar15,*(undefined8 *)pbVar1);
          uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(pbVar11 + 0x4c));
          uVar16 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar11 + 0x5c));
          uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(pbVar11 + 0x6c));
          uVar17 = PackedFloatingMUL(uVar15,*(undefined8 *)(pbVar11 + 0x44));
          uVar15 = PackedFloatingADD(uVar14,uVar16);
          uVar14 = PackedFloatingMUL(uVar18,*(undefined8 *)(pbVar11 + 0x54));
          uVar19 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar11 + 100));
          uVar18 = PackedFloatingADD(uVar17,*(undefined8 *)(pbVar11 + 0x74));
          uVar15 = PackedFloatingADD(uVar13,uVar15);
          uVar13 = PackedFloatingADD(uVar14,uVar19);
          local_24[1] = (float)((ulonglong)uVar15 >> 0x20);
          local_24[0] = (float)uVar15;
          uVar15 = PackedFloatingADD(uVar18,uVar13);
          local_24[2] = (float)uVar15;
          FastExitMediaState();
        }
        else {
          iVar10 = 0;
          local_14 = pbVar1 + -(int)local_24;
          pfVar6 = local_24;
          do {
            pbVar11 = local_14;
            iVar8 = 0;
            *pfVar6 = 0.0;
            pfVar9 = (float *)(pbVar11 + (int)pfVar6);
            do {
              iVar2 = iVar8 * 4;
              fVar4 = *pfVar9;
              iVar8 = iVar8 + 1;
              pfVar9 = pfVar9 + 4;
              *pfVar6 = *(float *)((int)puVar3 + iVar2) * fVar4 + *pfVar6;
            } while (iVar8 < 3);
            iVar8 = iVar10 + iVar8 * 4;
            iVar10 = iVar10 + 1;
            *pfVar6 = *(float *)(pbVar1 + iVar8 * 4) + *pfVar6;
            pfVar6 = pfVar6 + 1;
            pbVar11 = local_18;
          } while (iVar10 < 3);
        }
      }
    }
    else {
      uVar7 = (uint)*(ushort *)((uint)*(byte *)(piVar5 + 1) * param_1 + *piVar5 + local_8);
      iVar10 = piVar5[0x10] + uVar7 * 0xc;
      local_24[0] = *(float *)(piVar5[0x10] + uVar7 * 0xc);
      local_24[1] = *(float *)(iVar10 + 4);
      local_24[2] = *(float *)(iVar10 + 8);
    }
    m3dBOX::CalcUpdate(param_2,(m3dV *)local_24);
    local_8 = local_8 + 2;
  } while (local_8 < 8);
  return 1;
}




/* from: engine:cdt_obj.cpp
   addr: 004F00C0 */

int __thiscall cdtCOLL_OBJ::IsectIDBBox(cdtCOLL_OBJ *this,int param_1,m3dBOX *param_2)

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
  undefined4 local_110;
  float local_10c [60];
  float *local_1c;
  int local_18;
  float *local_14;
  byte *local_10;
  float *local_c;
  float *local_8;
  
  local_10 = *(byte **)(this + 100);
  local_110 = 3;
  if ((*local_10 & 1) == 0) {
    pfVar6 = local_10c;
    local_18 = 0;
    local_8 = (float *)(local_10 + 0x3c);
    local_c = pfVar6;
    do {
      piVar5 = *(int **)(local_10 + 0x28);
      local_14 = pfVar6;
      pfVar1 = (float *)(piVar5[0x10] +
                        (uint)*(ushort *)
                               ((uint)*(byte *)(piVar5 + 1) * param_1 + 2 + local_18 * 2 + *piVar5)
                        * 0xc);
      local_1c = pfVar1;
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
      local_18 = local_18 + 1;
      pfVar6 = local_c + 3;
      local_c = pfVar6;
    } while (local_18 < 3);
  }
  else {
    iVar9 = 0;
    pfVar6 = local_10c;
    do {
      piVar5 = *(int **)(local_10 + 0x28);
      iVar10 = iVar9 * 2;
      iVar9 = iVar9 + 1;
      pfVar1 = (float *)(piVar5[0x10] +
                        (uint)*(ushort *)
                               ((uint)*(byte *)(piVar5 + 1) * param_1 + 2 + iVar10 + *piVar5) * 0xc)
      ;
      *pfVar6 = *pfVar1;
      pfVar6[1] = pfVar1[1];
      pfVar6[2] = pfVar1[2];
      pfVar6 = pfVar6 + 3;
    } while (iVar9 < 3);
  }
  iVar9 = m3dBOX::IsIsectPoly(param_2,(m3dPOLY *)&local_110,
                              (m3dV *)(*(int *)(*(int *)(local_10 + 0x28) + 0x44) + param_1 * 0xc));
  return (uint)(iVar9 != 1);
}




/* from: engine:cdt_obj.cpp
   addr: 004F0330 */

int __thiscall
cdtCOLL_OBJ::IsIsectRayBVolAll
          (cdtCOLL_OBJ *this,void *param_1,m3dV *param_2,m3dV *param_3,float param_4)

{
  void *pvVar1;
  m3dV *pmVar2;
  m3dV *pmVar3;
  float fVar4;
  int iVar5;
  float unaff_EBP;
  
  fVar4 = param_4;
  pmVar3 = param_3;
  pmVar2 = param_2;
  pvVar1 = param_1;
  if (*(int *)((int)param_1 + 0x10) < 8) {
    return 1;
  }
  iVar5 = (**(code **)(*(int *)(*(int *)((int)param_1 + 0x28) + 0x28) + 0xc))
                    (param_2,param_3,param_4,0,&param_1);
  if (iVar5 == 0) {
    return 0;
  }
  if (unaff_EBP < 0.0) {
    return 0;
  }
  if (*(int *)((int)pvVar1 + 0xbc) != 0) {
    return 1;
  }
  iVar5 = (**(code **)(*(int *)((int)pvVar1 + 0xc0) + 0xc))(pmVar2,pmVar3,fVar4,0,0,0);
  return (uint)(iVar5 != 0);
}




/* from: engine:cdt_obj.cpp
   addr: 004F03E0 */

int __thiscall
cdtCOLL_OBJ::IsNearBVolAll(cdtCOLL_OBJ *this,void *param_1,m3dV *param_2,float param_3)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 in_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  pvVar2 = param_1;
  iVar3 = *(int *)((int)param_1 + 0x28);
  fVar7 = *(float *)(iVar3 + 0x30) - *(float *)param_2;
  fVar1 = *(float *)(iVar3 + 0x34) - *(float *)(param_2 + 4);
  fVar8 = *(float *)(iVar3 + 0x38) - *(float *)(param_2 + 8);
  fVar7 = fVar7 * fVar7 + fVar1 * fVar1 + fVar8 * fVar8;
  if (m3dSimdType == 0) {
    fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar9._0_4_;
    param_1 = (void *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar7;
    uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    param_1 = (void *)uVar5;
    FastExitMediaState();
  }
  else {
    param_1 = (void *)SQRT(fVar7);
  }
  if (param_3 + *(float *)(iVar3 + 0x3c) < (float)param_1) {
    return 0;
  }
  if (*(int *)((int)pvVar2 + 0xbc) == 0) {
    iVar3 = (**(code **)(*(int *)((int)pvVar2 + 0xc0) + 0x10))(param_2,param_3,0,0,0);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}

