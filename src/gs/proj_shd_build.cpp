
/* from: gs:proj_shd_build.cpp
   addr: 0052C300 */

void __thiscall pshSHADOW_SYSTEM::BuildShdObjStart(pshSHADOW_SYSTEM *this,pshOBJ_GROUP *param_1)

{
  *(undefined4 *)(this + 0x5830) = 0;
  *(undefined4 *)(this + 0x5834) = 0;
  *(undefined4 *)(this + 0x5838) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  return;
}




/* from: gs:proj_shd_build.cpp
   addr: 0052C330 */

void __thiscall
pshSHADOW_SYSTEM::BuildShdObjUpdate(pshSHADOW_SYSTEM *this,pshOBJ_GROUP *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 0x40;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30 + iVar1) = *(undefined4 *)(this + 0x5834);
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34 + iVar1) = *(undefined4 *)(this + 0x5840);
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38 + iVar1) = *(undefined4 *)(this + 0x5838);
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x3c + iVar1) = *(undefined4 *)(this + 0x5844);
  *(int *)(*(int *)(param_1 + 0x14c) + *(int *)(param_1 + 0x148) * 4) =
       *(int *)(param_1 + 0x10) + iVar1;
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
  *(int *)(this + 0x5830) = *(int *)(this + 0x5830) + *(int *)(this + 0x583c);
  *(int *)(this + 0x5834) = *(int *)(this + 0x5834) + *(int *)(this + 0x5840);
  *(int *)(this + 0x5838) = *(int *)(this + 0x5838) + *(int *)(this + 0x5844);
  return;
}




/* from: gs:proj_shd_build.cpp
   addr: 0052C3E0 */

void __thiscall
pshSHADOW_SYSTEM::BuildShdObj
          (pshSHADOW_SYSTEM *this,camCAMERA *param_1,pshOBJ_GROUP *param_2,int param_3,m3dV *param_4
          ,m3dV *param_5)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(param_3 * 0x40 + *(int *)(param_2 + 0x10));
  *puVar2 = *puVar2 & 0xfffffffd;
  if (*(int *)(*(int *)(puVar2[1] + 0x28) + 0x44) != 0) {
    BuildShilouette(this,param_1,param_2,param_3,param_4);
    if (0 < *(int *)(this + 0x5808)) {
      BuildCone(this,param_1,param_2,param_3,param_4,param_5);
      if ((*(uint *)param_2 & 0x80000) != 0) {
        BuildConeCap(this,param_1,param_2,param_3,param_4,param_5);
      }
      BuildConeGeom(this,param_1,param_2,param_3,param_4,param_5);
      puVar2[0xb] = 0;
      if (((*(uint *)param_2 & 0x800) != 0) && ((*(uint *)param_2 & 0x20) == 0)) {
        uVar1 = camCAMERA::QualBoxPOV(param_1,(m3dBOX *)(puVar2 + 3));
        puVar2[0xb] = uVar1;
      }
      if (puVar2[0xb] != 1) {
        *puVar2 = *puVar2 | 2;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:proj_shd_build.cpp
   addr: 0052C4B0 */

void __thiscall
pshSHADOW_SYSTEM::BuildShilouette
          (pshSHADOW_SYSTEM *this,camCAMERA *param_1,pshOBJ_GROUP *param_2,int param_3,m3dV *param_4
          )

{
  int iVar1;
  undefined8 *puVar2;
  uint *puVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined1 uVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  short *psVar13;
  int *piVar14;
  float *pfVar15;
  float *pfVar16;
  byte *pbVar17;
  int iVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_40 [3];
  undefined1 local_34 [8];
  int *local_2c;
  int local_28;
  undefined8 *local_24;
  float *local_20;
  byte *local_1c;
  undefined1 *local_18;
  byte *local_14;
  int local_10;
  pshSHADOW_SYSTEM *local_c;
  undefined4 local_8;
  
  local_c = this;
  pbVar17 = *(byte **)(param_3 * 0x40 + 4 + *(int *)(param_2 + 0x10));
  local_1c = pbVar17;
  if (*(int *)(pbVar17 + 0xe8) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(int *)(*(int *)(pbVar17 + 0xe8) + *(int *)(this + 4) * 4);
  }
  psVar13 = *(short **)(local_10 + 0xc);
  local_8 = *(undefined4 *)(local_10 + 0x10);
  param_3 = 0;
  if (0 < *(int *)(pbVar17 + 0x10)) {
    local_18 = (undefined1 *)0x0;
    do {
      piVar14 = *(int **)(pbVar17 + 0x28);
      uVar8 = (uint)*(ushort *)((uint)*(byte *)(piVar14 + 1) * param_3 + 2 + *piVar14);
      if ((*pbVar17 & 1) == 0) {
        puVar2 = (undefined8 *)(piVar14[0x10] + uVar8 * 0xc);
        local_20 = local_40;
        local_14 = pbVar17 + 0x3c;
        local_24 = puVar2;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar19 = (undefined4)*puVar2;
            uVar22 = CONCAT44(uVar19,uVar19);
            uVar19 = (undefined4)((ulonglong)*puVar2 >> 0x20);
            uVar25 = CONCAT44(uVar19,uVar19);
            uVar26 = CONCAT44(*(undefined4 *)(puVar2 + 1),*(undefined4 *)(puVar2 + 1));
            uVar20 = PackedFloatingMUL(uVar22,*(undefined8 *)local_14);
            uVar21 = PackedFloatingMUL(uVar25,*(undefined8 *)(pbVar17 + 0x4c));
            uVar23 = PackedFloatingMUL(uVar26,*(undefined8 *)(pbVar17 + 0x5c));
            uVar20 = PackedFloatingADD(uVar20,*(undefined8 *)(pbVar17 + 0x6c));
            uVar24 = PackedFloatingMUL(uVar22,*(undefined8 *)(pbVar17 + 0x44));
            uVar22 = PackedFloatingADD(uVar21,uVar23);
            uVar21 = PackedFloatingMUL(uVar25,*(undefined8 *)(pbVar17 + 0x54));
            uVar26 = PackedFloatingMUL(uVar26,*(undefined8 *)(pbVar17 + 100));
            uVar25 = PackedFloatingADD(uVar24,*(undefined8 *)(pbVar17 + 0x74));
            uVar22 = PackedFloatingADD(uVar20,uVar22);
            uVar20 = PackedFloatingADD(uVar21,uVar26);
            local_40[1] = (float)((ulonglong)uVar22 >> 0x20);
            local_40[0] = (float)uVar22;
            uVar22 = PackedFloatingADD(uVar25,uVar20);
            local_40[2] = (float)uVar22;
            FastExitMediaState();
          }
          else {
            iVar18 = 0;
            local_2c = (int *)((int)local_14 - (int)local_40);
            pfVar9 = local_40;
            do {
              piVar14 = local_2c;
              iVar11 = 0;
              *pfVar9 = 0.0;
              pfVar12 = (float *)((int)piVar14 + (int)pfVar9);
              do {
                iVar1 = iVar11 * 4;
                fVar29 = *pfVar12;
                iVar11 = iVar11 + 1;
                pfVar12 = pfVar12 + 4;
                *pfVar9 = *(float *)((int)puVar2 + iVar1) * fVar29 + *pfVar9;
              } while (iVar11 < 3);
              iVar11 = iVar18 + iVar11 * 4;
              iVar18 = iVar18 + 1;
              *pfVar9 = *(float *)(local_14 + iVar11 * 4) + *pfVar9;
              pfVar9 = pfVar9 + 1;
              this = local_c;
            } while (iVar18 < 3);
          }
        }
      }
      else {
        iVar18 = piVar14[0x10] + uVar8 * 0xc;
        local_40[0] = *(float *)(piVar14[0x10] + uVar8 * 0xc);
        local_40[1] = *(float *)(iVar18 + 4);
        local_40[2] = *(float *)(iVar18 + 8);
      }
      uVar7 = ftol();
      *(undefined1 *)(param_3 + *(int *)(this + 0x57c4)) = uVar7;
      param_3 = param_3 + 1;
      local_18 = (undefined1 *)((int)local_18 + 0xc);
    } while (param_3 < *(int *)(pbVar17 + 0x10));
  }
  iVar18 = 0;
  if (0 < *(int *)(pbVar17 + 0x14)) {
    iVar11 = 0;
    do {
      iVar18 = iVar18 + 1;
      *(undefined4 *)(iVar11 + *(int *)(this + 0x57c8)) = 0;
      iVar11 = iVar11 + 0x34;
    } while (iVar18 < *(int *)(pbVar17 + 0x14));
  }
  piVar14 = *(int **)(this + 0x580c);
  *(undefined4 *)(this + 0x5808) = 0;
  *(undefined4 *)(this + 0x5800) = 0;
  param_3 = 0;
  if (0 < *(int *)(local_10 + 8)) {
    local_18 = local_34 + -(int)piVar14;
    local_2c = piVar14;
    do {
      iVar18 = (int)*(char *)((int)*psVar13 + *(int *)(this + 0x57c4));
      if (psVar13[1] == -1) {
        iVar11 = iVar18;
        if (iVar18 < 0) {
          iVar11 = -iVar18;
        }
      }
      else {
        iVar11 = (int)*(char *)((int)psVar13[1] + *(int *)(this + 0x57c4));
      }
      psVar13 = psVar13 + 2;
      if (iVar11 * iVar18 < 0) {
        local_28 = 2;
        piVar14[2] = iVar18;
        do {
          iVar18 = *(int *)(local_18 + (int)piVar14);
          puVar3 = (uint *)(*(int *)(this + 0x57c8) + iVar18 * 0x34);
          *piVar14 = (int)puVar3;
          if ((*puVar3 & 1) == 0) {
            *puVar3 = *puVar3 | 1;
            iVar11 = *piVar14;
            pfVar9 = (float *)(iVar11 + 4);
            if ((*pbVar17 & 1) == 0) {
              pfVar16 = (float *)(pbVar17 + 0x3c);
              pfVar12 = (float *)(*(int *)(*(int *)(pbVar17 + 0x28) + 0x40) + iVar18 * 0xc);
              this = local_c;
              if (m3dSimdType == 0) {
                if (((uint)pfVar16 & 0xf) == 0) {
                  fVar29 = *pfVar12;
                  fVar5 = pfVar12[1];
                  fVar6 = pfVar12[2];
                  fVar27 = fVar29 * *pfVar16 + *(float *)(pbVar17 + 0x6c) +
                           fVar5 * *(float *)(pbVar17 + 0x4c) + fVar6 * *(float *)(pbVar17 + 0x5c);
                  fVar28 = fVar29 * *(float *)(pbVar17 + 0x40) + *(float *)(pbVar17 + 0x70) +
                           fVar5 * *(float *)(pbVar17 + 0x50) + fVar6 * *(float *)(pbVar17 + 0x60);
                  fVar29 = fVar29 * *(float *)(pbVar17 + 0x44) + *(float *)(pbVar17 + 0x74) +
                           fVar5 * *(float *)(pbVar17 + 0x54) + fVar6 * *(float *)(pbVar17 + 100);
                }
                else {
                  fVar29 = *pfVar12;
                  fVar5 = pfVar12[1];
                  fVar6 = pfVar12[2];
                  fVar27 = fVar29 * (float)*(undefined8 *)pfVar16 +
                           fVar5 * (float)*(undefined8 *)(pbVar17 + 0x4c) +
                           fVar6 * (float)*(undefined8 *)(pbVar17 + 0x5c) +
                           (float)*(undefined8 *)(pbVar17 + 0x6c);
                  fVar28 = fVar29 * (float)((ulonglong)*(undefined8 *)pfVar16 >> 0x20) +
                           fVar5 * (float)((ulonglong)*(undefined8 *)(pbVar17 + 0x4c) >> 0x20) +
                           fVar6 * (float)((ulonglong)*(undefined8 *)(pbVar17 + 0x5c) >> 0x20) +
                           (float)((ulonglong)*(undefined8 *)(pbVar17 + 0x6c) >> 0x20);
                  fVar29 = fVar29 * (float)*(undefined8 *)(pbVar17 + 0x44) +
                           fVar5 * (float)*(undefined8 *)(pbVar17 + 0x54) +
                           fVar6 * (float)*(undefined8 *)(pbVar17 + 100) +
                           (float)*(undefined8 *)(pbVar17 + 0x74);
                }
                *(ulonglong *)pfVar9 = CONCAT44(fVar28,fVar27);
                *(float *)(iVar11 + 0xc) = fVar29;
                pbVar17 = local_1c;
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar19 = (undefined4)*(undefined8 *)pfVar12;
                uVar22 = CONCAT44(uVar19,uVar19);
                uVar19 = (undefined4)((ulonglong)*(undefined8 *)pfVar12 >> 0x20);
                uVar25 = CONCAT44(uVar19,uVar19);
                uVar26 = CONCAT44(pfVar12[2],pfVar12[2]);
                uVar20 = PackedFloatingMUL(uVar22,*(undefined8 *)pfVar16);
                uVar21 = PackedFloatingMUL(uVar25,*(undefined8 *)(pbVar17 + 0x4c));
                uVar23 = PackedFloatingMUL(uVar26,*(undefined8 *)(pbVar17 + 0x5c));
                uVar20 = PackedFloatingADD(uVar20,*(undefined8 *)(pbVar17 + 0x6c));
                uVar24 = PackedFloatingMUL(uVar22,*(undefined8 *)(pbVar17 + 0x44));
                uVar22 = PackedFloatingADD(uVar21,uVar23);
                uVar21 = PackedFloatingMUL(uVar25,*(undefined8 *)(pbVar17 + 0x54));
                uVar26 = PackedFloatingMUL(uVar26,*(undefined8 *)(pbVar17 + 100));
                uVar25 = PackedFloatingADD(uVar24,*(undefined8 *)(pbVar17 + 0x74));
                uVar22 = PackedFloatingADD(uVar20,uVar22);
                uVar20 = PackedFloatingADD(uVar21,uVar26);
                *(undefined8 *)pfVar9 = uVar22;
                uVar22 = PackedFloatingADD(uVar25,uVar20);
                *(int *)(iVar11 + 0xc) = (int)uVar22;
                FastExitMediaState();
                pbVar17 = local_1c;
              }
              else {
                iVar18 = 0;
                pfVar10 = pfVar9;
                do {
                  iVar11 = 0;
                  *pfVar10 = 0.0;
                  pfVar15 = (float *)(((int)pfVar16 - (int)pfVar9) + (int)pfVar10);
                  do {
                    pfVar4 = pfVar12 + iVar11;
                    fVar29 = *pfVar15;
                    iVar11 = iVar11 + 1;
                    pfVar15 = pfVar15 + 4;
                    *pfVar10 = *pfVar4 * fVar29 + *pfVar10;
                  } while (iVar11 < 3);
                  iVar11 = iVar18 + iVar11 * 4;
                  iVar18 = iVar18 + 1;
                  *pfVar10 = pfVar16[iVar11] + *pfVar10;
                  pfVar10 = pfVar10 + 1;
                  pbVar17 = local_1c;
                } while (iVar18 < 3);
              }
            }
            else {
              pfVar12 = (float *)(*(int *)(*(int *)(pbVar17 + 0x28) + 0x40) + iVar18 * 0xc);
              *pfVar9 = *pfVar12;
              *(float *)(iVar11 + 8) = pfVar12[1];
              *(float *)(iVar11 + 0xc) = pfVar12[2];
            }
            *(int *)(*(int *)(this + 0x5804) + *(int *)(this + 0x5800) * 4) = *piVar14;
            *(int *)(this + 0x5800) = *(int *)(this + 0x5800) + 1;
          }
          piVar14 = piVar14 + 1;
          local_28 = local_28 + -1;
        } while (local_28 != 0);
        piVar14 = local_2c + 4;
        local_18 = local_18 + -0x10;
        *(int *)(this + 0x5808) = *(int *)(this + 0x5808) + 1;
        local_2c = piVar14;
      }
      param_3 = param_3 + 1;
    } while (param_3 < *(int *)(local_10 + 8));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:proj_shd_build.cpp
   addr: 0052CA70 */

void __thiscall
pshSHADOW_SYSTEM::BuildCone
          (pshSHADOW_SYSTEM *this,camCAMERA *param_1,pshOBJ_GROUP *param_2,int param_3,m3dV *param_4
          ,m3dV *param_5)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  *(undefined4 *)(this + 0x583c) = 0;
  if (0 < *(int *)(this + 0x5800)) {
    do {
      iVar4 = *(int *)(*(int *)(this + 0x5804) + iVar6 * 4);
      *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 4) - *(float *)param_4;
      *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 8) - *(float *)(param_4 + 4);
      *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0xc) - *(float *)(param_4 + 8);
      m3dNormalize((m3dV *)(iVar4 + 0x1c));
      *(int *)(iVar4 + 0x28) = *(int *)(this + 0x5830) + *(int *)(this + 0x583c);
      *(int *)(iVar4 + 0x2c) = *(int *)(this + 0x5830) + 1 + *(int *)(this + 0x583c);
      iVar6 = iVar6 + 1;
      *(int *)(this + 0x583c) = *(int *)(this + 0x583c) + 2;
    } while (iVar6 < *(int *)(this + 0x5800));
  }
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(this + 0x5870),
                      (*(int *)(this + 0x5808) + *(int *)(this + 0x5834)) * 6);
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(this + 0x588c),
                      (*(int *)(this + 0x5838) + *(int *)(this + 0x5808)) * 6);
  iVar6 = 0;
  *(undefined4 *)(this + 0x5840) = 0;
  *(undefined4 *)(this + 0x5844) = 0;
  param_4 = (m3dV *)0x0;
  if (0 < *(int *)(this + 0x5808)) {
    do {
      piVar5 = (int *)(*(int *)(this + 0x580c) + iVar6);
      iVar4 = *piVar5;
      iVar3 = piVar5[1];
      uVar2 = (uint)(___real_00000000 <
                    ((*(float *)(iVar4 + 0x20) * *(float *)(iVar3 + 0x24) -
                     *(float *)(iVar3 + 0x20) * *(float *)(iVar4 + 0x24)) * *(float *)param_5 +
                    (*(float *)(iVar3 + 0x1c) * *(float *)(iVar4 + 0x24) -
                    *(float *)(iVar4 + 0x1c) * *(float *)(iVar3 + 0x24)) * *(float *)(param_5 + 4) +
                    (*(float *)(iVar4 + 0x1c) * *(float *)(iVar3 + 0x20) -
                    *(float *)(iVar4 + 0x20) * *(float *)(iVar3 + 0x1c)) * *(float *)(param_5 + 8))
                    * (float)piVar5[2]);
      piVar5[3] = uVar2;
      if (uVar2 == 0) {
        iVar3 = *(int *)(this + 0x5834) + *(int *)(this + 0x5840);
        *(int *)(this + 0x5840) = *(int *)(this + 0x5840) + 2;
        iVar4 = *(int *)(this + 0x584c);
      }
      else {
        iVar3 = *(int *)(this + 0x5838) + *(int *)(this + 0x5844);
        *(int *)(this + 0x5844) = *(int *)(this + 0x5844) + 2;
        iVar4 = *(int *)(this + 0x5850);
      }
      puVar1 = (undefined2 *)(iVar4 + iVar3 * 6);
      iVar6 = iVar6 + 0x10;
      *puVar1 = *(undefined2 *)(*piVar5 + 0x28);
      puVar1[1] = *(undefined2 *)(piVar5[1] + 0x28);
      puVar1[2] = *(undefined2 *)(*piVar5 + 0x2c);
      puVar1[3] = *(undefined2 *)(piVar5[1] + 0x2c);
      puVar1[4] = *(undefined2 *)(*piVar5 + 0x2c);
      puVar1[5] = *(undefined2 *)(piVar5[1] + 0x28);
      param_4 = param_4 + 1;
    } while ((int)param_4 < *(int *)(this + 0x5808));
  }
  return;
}




/* from: gs:proj_shd_build.cpp
   addr: 0052CC70 */

void __thiscall
pshSHADOW_SYSTEM::BuildConeCap
          (pshSHADOW_SYSTEM *this,camCAMERA *param_1,pshOBJ_GROUP *param_2,int param_3,m3dV *param_4
          ,m3dV *param_5)

{
  pshSHADOW_SYSTEM *ppVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  camCAMERA::GetOrigin(param_1,(m3dV *)(this + 0x57d0));
  *(float *)(this + 0x57e8) = *(float *)(this + 0x57d0) - *(float *)param_4;
  *(float *)(this + 0x57ec) = *(float *)(this + 0x57d4) - *(float *)(param_4 + 4);
  *(float *)(this + 0x57f0) = *(float *)(this + 0x57d8) - *(float *)(param_4 + 8);
  m3dNormalize((m3dV *)(this + 0x57e8));
  iVar4 = *(int *)(this + 0x5830) + *(int *)(this + 0x583c);
  *(int *)(this + 0x57f4) = iVar4;
  *(int *)(this + 0x57f8) = iVar4 + 1;
  *(int *)(this + 0x583c) = *(int *)(this + 0x583c) + 2;
  ppVar1 = this + 0x57cc;
  *(pshSHADOW_SYSTEM **)(*(int *)(this + 0x5804) + *(int *)(this + 0x5800) * 4) = ppVar1;
  *(int *)(this + 0x5800) = *(int *)(this + 0x5800) + 1;
  *(uint *)ppVar1 = *(uint *)ppVar1 | 1;
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(this + 0x5870),
                      (*(int *)(this + 0x5834) + *(int *)(this + 0x5840) + *(int *)(this + 0x5808))
                      * 3);
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(this + 0x588c),
                      (*(int *)(this + 0x5838) + *(int *)(this + 0x5844) + *(int *)(this + 0x5808))
                      * 3);
  iVar4 = 0;
  if (0 < *(int *)(this + 0x5808)) {
    iVar6 = 0;
    do {
      piVar5 = (int *)(*(int *)(this + 0x580c) + iVar6);
      if (piVar5[3] == 0) {
        iVar7 = *(int *)(this + 0x584c);
        iVar3 = *(int *)(this + 0x5834) + *(int *)(this + 0x5840);
        *(int *)(this + 0x5840) = *(int *)(this + 0x5840) + 1;
      }
      else {
        iVar7 = *(int *)(this + 0x5850);
        iVar3 = *(int *)(this + 0x5838) + *(int *)(this + 0x5844);
        *(int *)(this + 0x5844) = *(int *)(this + 0x5844) + 1;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 0x10;
      puVar2 = (undefined2 *)(iVar7 + iVar3 * 6);
      *puVar2 = *(undefined2 *)(this + 0x57f8);
      puVar2[1] = *(undefined2 *)(*piVar5 + 0x2c);
      puVar2[2] = *(undefined2 *)(piVar5[1] + 0x2c);
    } while (iVar4 < *(int *)(this + 0x5808));
  }
  return;
}




/* from: gs:proj_shd_build.cpp
   addr: 0052CDE0 */

void __thiscall
pshSHADOW_SYSTEM::BuildConeGeom
          (pshSHADOW_SYSTEM *this,camCAMERA *param_1,pshOBJ_GROUP *param_2,int param_3,m3dV *param_4
          ,m3dV *param_5)

{
  m3dV *pmVar1;
  m3dBOX *this_00;
  undefined4 *puVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  m3dV *pmVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar9 = *(int *)(param_2 + 0x10);
  iVar7 = param_3 * 0x40;
  dsDYN_ARRAY::Expand((dsDYN_ARRAY *)(this + 0x5854),
                      *(int *)(this + 0x583c) + *(int *)(this + 0x5830));
  param_3 = 0;
  if (0 < *(int *)(this + 0x5800)) {
    do {
      iVar8 = *(int *)(*(int *)(this + 0x5804) + param_3 * 4);
      pmVar6 = (m3dV *)(iVar8 + 0x10);
      pmVar1 = (m3dV *)(iVar8 + 4);
      iVar5 = _m3dIsectRayVNPlane(pmVar1,(m3dV *)(iVar8 + 0x1c),(m3dV *)(param_2 + 0x5c),
                                  (m3dV *)(param_2 + 0x68),pmVar6,(float *)(iVar8 + 0x30));
      if (iVar5 == 0) {
        *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)(param_2 + 0x120);
        fVar4 = *(float *)(param_2 + 0x120);
        *(float *)pmVar6 = fVar4 * *(float *)(iVar8 + 0x1c) + *(float *)pmVar1;
        *(float *)(iVar8 + 0x14) = fVar4 * *(float *)(iVar8 + 0x20) + *(float *)(iVar8 + 8);
        *(float *)(iVar8 + 0x18) = fVar4 * *(float *)(iVar8 + 0x24) + *(float *)(iVar8 + 0xc);
      }
      puVar2 = (undefined4 *)(*(int *)(this + 0x5848) + *(int *)(iVar8 + 0x28) * 0xc);
      *puVar2 = *(undefined4 *)pmVar1;
      puVar2[1] = *(undefined4 *)(iVar8 + 8);
      puVar2[2] = *(undefined4 *)(iVar8 + 0xc);
      puVar2 = (undefined4 *)(*(int *)(this + 0x5848) + *(int *)(iVar8 + 0x2c) * 0xc);
      *puVar2 = *(undefined4 *)pmVar6;
      puVar2[1] = *(undefined4 *)(iVar8 + 0x14);
      puVar2[2] = *(undefined4 *)(iVar8 + 0x18);
      param_3 = param_3 + 1;
    } while (param_3 < *(int *)(this + 0x5800));
  }
  if ((*(uint *)param_2 & 0x200000) != 0) {
    if ((*(uint *)param_2 & 0x80000) == 0) {
      pmVar6 = (m3dV *)(param_2 + 0x74);
    }
    else {
      pmVar6 = (m3dV *)(param_2 + 0x8c);
    }
    iVar8 = 0;
    if (0 < *(int *)(this + 0x5800)) {
      do {
        iVar5 = *(int *)(*(int *)(this + 0x5804) + iVar8 * 4);
        iVar5 = _m3dIsectRayVNPlane((m3dV *)(iVar5 + 4),(m3dV *)(iVar5 + 0x1c),pmVar6,pmVar6 + 0xc,
                                    (m3dV *)&local_18,&local_1c);
        if (iVar5 == 0) {
          piVar3 = (int *)(*(int *)(this + 0x5804) + iVar8 * 4);
          iVar5 = *piVar3;
          local_c = -*(float *)(iVar5 + 0x1c);
          local_8 = -*(float *)(iVar5 + 0x20);
          local_4 = -*(float *)(iVar5 + 0x24);
          iVar5 = _m3dIsectRayVNPlane((m3dV *)(*piVar3 + 4),(m3dV *)&local_c,pmVar6,pmVar6 + 0xc,
                                      (m3dV *)&local_18,(float *)0x0);
          if (iVar5 != 0) {
            iVar5 = *(int *)(*(int *)(this + 0x5804) + iVar8 * 4);
            goto LAB_0052cfc1;
          }
        }
        else {
          iVar5 = *(int *)(*(int *)(this + 0x5804) + iVar8 * 4);
          if (local_1c <= *(float *)(iVar5 + 0x30)) {
LAB_0052cfc1:
            *(undefined4 *)(iVar5 + 4) = local_18;
            *(undefined4 *)(iVar5 + 8) = local_14;
            *(undefined4 *)(iVar5 + 0xc) = local_10;
          }
          else {
            *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar5 + 0x10);
            *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar5 + 0x14);
            *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar5 + 0x18);
          }
        }
        iVar8 = iVar8 + 1;
        iVar5 = *(int *)(*(int *)(this + 0x5804) + -4 + iVar8 * 4);
        puVar2 = (undefined4 *)(*(int *)(this + 0x5848) + *(int *)(iVar5 + 0x28) * 0xc);
        *puVar2 = *(undefined4 *)(iVar5 + 4);
        puVar2[1] = *(undefined4 *)(iVar5 + 8);
        puVar2[2] = *(undefined4 *)(iVar5 + 0xc);
      } while (iVar8 < *(int *)(this + 0x5800));
    }
  }
  if ((*(uint *)param_2 & 0x800) != 0) {
    this_00 = (m3dBOX *)(iVar7 + iVar9 + 0xc);
    m3dBOX::CalcStart(this_00);
    iVar9 = 0;
    if (0 < *(int *)(this + 0x5800)) {
      do {
        m3dBOX::CalcUpdate(this_00,(m3dV *)(*(int *)(*(int *)(this + 0x5804) + iVar9 * 4) + 4));
        m3dBOX::CalcUpdate(this_00,(m3dV *)(*(int *)(*(int *)(this + 0x5804) + iVar9 * 4) + 0x10));
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(this + 0x5800));
    }
  }
  return;
}

