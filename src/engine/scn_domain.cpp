
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_domain.cpp
   addr: 004DC1B0 */

int __thiscall scnDOMAIN::Init(scnDOMAIN *this)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  void *pvVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_d8;
  float local_d4 [40];
  float *local_34;
  byte *local_30;
  scnDOMAIN *local_2c;
  int local_28;
  float *local_24;
  float *local_20;
  byte *local_1c;
  byte *local_18;
  float local_14 [3];
  float *local_8;
  
  if (0 < (int)*(uint *)(*(int *)(this + 0x34) + 0x10)) {
    local_2c = this;
    pvVar4 = apCalloc(*(uint *)(*(int *)(this + 0x34) + 0x10),0x18);
    *(void **)(this + 0x30) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    pbVar5 = *(byte **)(this + 0x34);
    if ((*pbVar5 & 1) == 0) {
      puVar12 = *(undefined8 **)(*(int *)(pbVar5 + 0x28) + 0x40);
      local_18 = pbVar5 + 0x3c;
      local_24 = local_14;
      local_8 = (float *)puVar12;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar13 = (undefined4)*puVar12;
          uVar16 = CONCAT44(uVar13,uVar13);
          uVar13 = (undefined4)((ulonglong)*puVar12 >> 0x20);
          uVar19 = CONCAT44(uVar13,uVar13);
          uVar20 = CONCAT44(*(undefined4 *)(puVar12 + 1),*(undefined4 *)(puVar12 + 1));
          uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)local_18);
          uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar5 + 0x4c));
          uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar5 + 0x5c));
          uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(pbVar5 + 0x6c));
          uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(pbVar5 + 0x44));
          uVar16 = PackedFloatingADD(uVar15,uVar17);
          uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar5 + 0x54));
          uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar5 + 100));
          uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(pbVar5 + 0x74));
          uVar16 = PackedFloatingADD(uVar14,uVar16);
          uVar14 = PackedFloatingADD(uVar15,uVar20);
          local_14[1] = (float)((ulonglong)uVar16 >> 0x20);
          local_14[0] = (float)uVar16;
          uVar16 = PackedFloatingADD(uVar19,uVar14);
          local_14[2] = (float)uVar16;
          FastExitMediaState();
        }
        else {
          iVar10 = 0;
          local_28 = (int)local_18 - (int)local_14;
          pfVar8 = local_14;
          iVar11 = (int)local_18 - (int)local_14;
          do {
            iVar7 = 0;
            *pfVar8 = 0.0;
            pfVar9 = (float *)(iVar11 + (int)pfVar8);
            do {
              iVar11 = iVar7 * 4;
              fVar1 = *pfVar9;
              iVar7 = iVar7 + 1;
              pfVar9 = pfVar9 + 4;
              *pfVar8 = *(float *)((int)puVar12 + iVar11) * fVar1 + *pfVar8;
            } while (iVar7 < 3);
            iVar11 = iVar10 + iVar7 * 4;
            iVar10 = iVar10 + 1;
            *pfVar8 = *(float *)(local_18 + iVar11 * 4) + *pfVar8;
            pfVar8 = pfVar8 + 1;
            iVar11 = local_28;
          } while (iVar10 < 3);
        }
      }
    }
    else {
      pfVar8 = *(float **)(*(int *)(pbVar5 + 0x28) + 0x40);
      local_14[0] = *pfVar8;
      local_14[1] = pfVar8[1];
      local_14[2] = pfVar8[2];
    }
    fVar1 = local_14[1];
    pbVar5 = *(byte **)(this + 0x34);
    local_24 = (float *)local_14[1];
    local_18 = (byte *)0x1;
    if (1 < *(int *)(pbVar5 + 0x14)) {
      local_20 = (float *)0xc;
      do {
        if ((*pbVar5 & 1) == 0) {
          local_1c = pbVar5 + 0x3c;
          local_8 = local_14;
          local_30 = (byte *)(*(int *)(*(int *)(pbVar5 + 0x28) + 0x40) + (int)local_20);
          this = local_2c;
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar13 = (undefined4)*(undefined8 *)local_30;
              uVar16 = CONCAT44(uVar13,uVar13);
              uVar13 = (undefined4)((ulonglong)*(undefined8 *)local_30 >> 0x20);
              uVar19 = CONCAT44(uVar13,uVar13);
              uVar20 = CONCAT44(*(undefined4 *)(local_30 + 8),*(undefined4 *)(local_30 + 8));
              uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)local_1c);
              uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar5 + 0x4c));
              uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar5 + 0x5c));
              uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(pbVar5 + 0x6c));
              uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(pbVar5 + 0x44));
              uVar16 = PackedFloatingADD(uVar15,uVar17);
              uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar5 + 0x54));
              uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar5 + 100));
              uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(pbVar5 + 0x74));
              uVar16 = PackedFloatingADD(uVar14,uVar16);
              uVar14 = PackedFloatingADD(uVar15,uVar20);
              local_14[1] = (float)((ulonglong)uVar16 >> 0x20);
              local_14[0] = (float)uVar16;
              uVar16 = PackedFloatingADD(uVar19,uVar14);
              local_14[2] = (float)uVar16;
              FastExitMediaState();
            }
            else {
              iVar10 = 0;
              local_28 = (int)local_1c - (int)local_14;
              pfVar8 = local_14;
              iVar11 = (int)local_1c - (int)local_14;
              do {
                iVar7 = 0;
                *pfVar8 = 0.0;
                pfVar9 = (float *)(iVar11 + (int)pfVar8);
                do {
                  iVar11 = iVar7 * 4;
                  fVar2 = *pfVar9;
                  iVar7 = iVar7 + 1;
                  pfVar9 = pfVar9 + 4;
                  *pfVar8 = *(float *)(local_30 + iVar11) * fVar2 + *pfVar8;
                } while (iVar7 < 3);
                iVar11 = iVar10 + iVar7 * 4;
                iVar10 = iVar10 + 1;
                *pfVar8 = *(float *)(local_1c + iVar11 * 4) + *pfVar8;
                pfVar8 = pfVar8 + 1;
                iVar11 = local_28;
              } while (iVar10 < 3);
            }
          }
        }
        else {
          pfVar8 = (float *)(*(int *)(*(int *)(pbVar5 + 0x28) + 0x40) + (int)local_20);
          local_14[0] = *pfVar8;
          local_14[1] = pfVar8[1];
          local_14[2] = pfVar8[2];
        }
        local_8 = (float *)ABS(local_14[1] - fVar1);
        local_1c = (byte *)(uint)((float)local_8 < ___real_3a83126f);
        if ((float)(int)local_1c == ___real_00000000) {
          apLog(s_Domain__s_is_not_planar_,*(undefined4 *)(*(int *)(this + 0x34) + 0x18));
          break;
        }
        pbVar5 = *(byte **)(this + 0x34);
        local_18 = (byte *)((int)local_18 + 1);
        local_20 = local_20 + 3;
      } while ((int)local_18 < *(int *)(pbVar5 + 0x14));
    }
    local_18 = (byte *)0x0;
    if (0 < *(int *)(*(int *)(this + 0x34) + 0x10)) {
      local_28 = 0;
      do {
        local_d8 = 3;
        local_34 = local_d4;
        local_8 = (float *)&DAT_00000002;
        do {
          pbVar5 = *(byte **)(this + 0x34);
          if ((*pbVar5 & 1) == 0) {
            piVar3 = *(int **)(pbVar5 + 0x28);
            local_20 = local_14;
            local_30 = pbVar5 + 0x3c;
            local_1c = (byte *)(piVar3[0x10] +
                               (uint)*(ushort *)
                                      ((uint)*(byte *)(piVar3 + 1) * (int)local_18 + *piVar3 +
                                      (int)local_8) * 0xc);
            this = local_2c;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar13 = (undefined4)*(undefined8 *)local_1c;
                uVar16 = CONCAT44(uVar13,uVar13);
                uVar13 = (undefined4)((ulonglong)*(undefined8 *)local_1c >> 0x20);
                uVar19 = CONCAT44(uVar13,uVar13);
                uVar20 = CONCAT44(*(undefined4 *)((int)local_1c + 8),
                                  *(undefined4 *)((int)local_1c + 8));
                uVar14 = PackedFloatingMUL(uVar16,*(undefined8 *)local_30);
                uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar5 + 0x4c));
                uVar17 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar5 + 0x5c));
                uVar14 = PackedFloatingADD(uVar14,*(undefined8 *)(pbVar5 + 0x6c));
                uVar18 = PackedFloatingMUL(uVar16,*(undefined8 *)(pbVar5 + 0x44));
                uVar16 = PackedFloatingADD(uVar15,uVar17);
                uVar15 = PackedFloatingMUL(uVar19,*(undefined8 *)(pbVar5 + 0x54));
                uVar20 = PackedFloatingMUL(uVar20,*(undefined8 *)(pbVar5 + 100));
                uVar19 = PackedFloatingADD(uVar18,*(undefined8 *)(pbVar5 + 0x74));
                uVar16 = PackedFloatingADD(uVar14,uVar16);
                uVar14 = PackedFloatingADD(uVar15,uVar20);
                local_14[1] = (float)((ulonglong)uVar16 >> 0x20);
                local_14[0] = (float)uVar16;
                uVar16 = PackedFloatingADD(uVar19,uVar14);
                local_14[2] = (float)uVar16;
                FastExitMediaState();
              }
              else {
                iVar11 = 0;
                local_20 = (float *)(local_30 + -(int)local_14);
                pfVar8 = local_14;
                pfVar9 = (float *)(local_30 + -(int)local_14);
                do {
                  iVar10 = 0;
                  *pfVar8 = 0.0;
                  pfVar9 = (float *)((int)pfVar9 + (int)pfVar8);
                  do {
                    iVar7 = iVar10 * 4;
                    fVar1 = *pfVar9;
                    iVar10 = iVar10 + 1;
                    pfVar9 = pfVar9 + 4;
                    *pfVar8 = *(float *)((int)local_1c + iVar7) * fVar1 + *pfVar8;
                  } while (iVar10 < 3);
                  iVar10 = iVar11 + iVar10 * 4;
                  iVar11 = iVar11 + 1;
                  *pfVar8 = *(float *)(local_30 + iVar10 * 4) + *pfVar8;
                  pfVar8 = pfVar8 + 1;
                  pfVar9 = local_20;
                } while (iVar11 < 3);
              }
            }
          }
          else {
            piVar3 = *(int **)(pbVar5 + 0x28);
            uVar6 = (uint)*(ushort *)
                           ((uint)*(byte *)(piVar3 + 1) * (int)local_18 + *piVar3 + (int)local_8);
            iVar11 = piVar3[0x10] + uVar6 * 0xc;
            local_14[0] = *(float *)(piVar3[0x10] + uVar6 * 0xc);
            local_14[1] = *(float *)(iVar11 + 4);
            local_14[2] = *(float *)(iVar11 + 8);
          }
          fVar1 = local_14[2];
          puVar12 = (undefined8 *)((int)local_8 + 2);
          *local_34 = local_14[0];
          local_34[1] = fVar1;
          local_8 = (float *)puVar12;
          local_34 = local_34 + 2;
        } while ((int)puVar12 < 8);
        m2dReOrientPoly((m2dPOLY *)&local_d8);
        iVar11 = 3;
        pfVar8 = local_d4;
        do {
          iVar10 = *(int *)(this + 0x30);
          *(float *)(iVar10 + local_28) = *pfVar8;
          *(float *)(iVar10 + 4 + local_28) = pfVar8[1];
          local_28 = local_28 + 8;
          iVar11 = iVar11 + -1;
          pfVar8 = pfVar8 + 2;
        } while (iVar11 != 0);
        local_18 = (byte *)((int)local_18 + 1);
      } while ((int)local_18 < *(int *)(*(int *)(this + 0x34) + 0x10));
    }
    *(float **)(this + 8) = local_24;
    CalcBBox(this);
    *(float **)(this + 0xc) = local_24;
    CalcBBox(this);
    *(undefined4 *)(this + 4) = *(undefined4 *)(*(int *)(this + 0x34) + 0x10);
    CalcBBox(this);
  }
  return 1;
}




/* from: engine:scn_domain.cpp
   addr: 004DC870 */

void __thiscall scnDOMAIN::Term(scnDOMAIN *this)

{
  if (*(void **)(this + 0x30) != (void *)0x0) {
    apFree(*(void **)(this + 0x30));
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_domain.cpp
   addr: 004DC8A0 */

void __thiscall scnDOMAIN::SetHeight(scnDOMAIN *this,float param_1)

{
  byte *pbVar1;
  int iVar2;
  float fVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float local_20 [3];
  scnDOMAIN *local_14;
  byte *local_10;
  undefined8 *local_c;
  float *local_8;
  
  local_14 = this;
  if (*(int *)(this + 4) == 0) {
    *(float *)(this + 8) = _DAT_005dc2dc * ___real_bdcccccd;
    CalcBBox(this);
    fVar3 = _DAT_005dc2dc * ___real_3dcccccd;
  }
  else {
    pbVar4 = *(byte **)(this + 0x34);
    if ((*pbVar4 & 1) == 0) {
      pbVar1 = pbVar4 + 0x3c;
      puVar5 = *(undefined8 **)(*(int *)(pbVar4 + 0x28) + 0x40);
      local_8 = local_20;
      local_c = puVar5;
      local_10 = pbVar1;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar10 = (undefined4)*puVar5;
          uVar13 = CONCAT44(uVar10,uVar10);
          uVar10 = (undefined4)((ulonglong)*puVar5 >> 0x20);
          uVar16 = CONCAT44(uVar10,uVar10);
          uVar17 = CONCAT44(*(undefined4 *)(puVar5 + 1),*(undefined4 *)(puVar5 + 1));
          uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)pbVar1);
          uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(pbVar4 + 0x4c));
          uVar14 = PackedFloatingMUL(uVar17,*(undefined8 *)(pbVar4 + 0x5c));
          uVar11 = PackedFloatingADD(uVar11,*(undefined8 *)(pbVar4 + 0x6c));
          uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)(pbVar4 + 0x44));
          uVar13 = PackedFloatingADD(uVar12,uVar14);
          uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(pbVar4 + 0x54));
          uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(pbVar4 + 100));
          uVar16 = PackedFloatingADD(uVar15,*(undefined8 *)(pbVar4 + 0x74));
          uVar13 = PackedFloatingADD(uVar11,uVar13);
          uVar11 = PackedFloatingADD(uVar12,uVar17);
          local_20[1] = (float)((ulonglong)uVar13 >> 0x20);
          local_20[0] = (float)uVar13;
          uVar13 = PackedFloatingADD(uVar16,uVar11);
          local_20[2] = (float)uVar13;
          FastExitMediaState();
        }
        else {
          iVar9 = 0;
          local_10 = pbVar1 + -(int)local_20;
          pfVar6 = local_20;
          do {
            pbVar4 = local_10;
            iVar7 = 0;
            *pfVar6 = 0.0;
            pfVar8 = (float *)(pbVar4 + (int)pfVar6);
            do {
              iVar2 = iVar7 * 4;
              fVar3 = *pfVar8;
              iVar7 = iVar7 + 1;
              pfVar8 = pfVar8 + 4;
              *pfVar6 = *(float *)((int)puVar5 + iVar2) * fVar3 + *pfVar6;
            } while (iVar7 < 3);
            iVar7 = iVar9 + iVar7 * 4;
            iVar9 = iVar9 + 1;
            *pfVar6 = *(float *)(pbVar1 + iVar7 * 4) + *pfVar6;
            pfVar6 = pfVar6 + 1;
          } while (iVar9 < 3);
        }
      }
    }
    else {
      pfVar6 = *(float **)(*(int *)(pbVar4 + 0x28) + 0x40);
      local_20[0] = *pfVar6;
      local_20[1] = pfVar6[1];
      local_20[2] = pfVar6[2];
    }
    this = local_14;
    if (param_1 <= ___real_00000000) {
      *(float *)(local_14 + 8) = local_20[1] + param_1;
      CalcBBox(local_14);
      fVar3 = local_20[1];
    }
    else {
      *(float *)(local_14 + 8) = local_20[1];
      CalcBBox(local_14);
      fVar3 = local_20[1] + param_1;
    }
  }
  *(float *)(this + 0xc) = fVar3;
  CalcBBox(this);
  CalcBBox(this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_domain.cpp
   addr: 004DCAD0 */

int __thiscall scnDOMAIN::IsBelongPoint(scnDOMAIN *this,m3dV *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  if (*(int *)(this + 4) == 0) {
    return 1;
  }
  local_8 = (uint)(ABS(*(float *)(this + 8) - *(float *)(this + 0xc)) < ___real_38d1b717);
  if ((float)local_8 == ___real_00000000) {
    if (*(float *)(this + 0xc) < *(float *)(param_1 + 4)) {
      return 0;
    }
    if (*(float *)(param_1 + 4) < *(float *)(this + 8)) {
      return 0;
    }
  }
  else if (*(float *)(param_1 + 4) < *(float *)(this + 8) - DAT_005dc2d8) {
    return 0;
  }
  if ((((*(float *)(this + 0x18) <= *(float *)param_1) &&
       (*(float *)param_1 <= *(float *)(this + 0x24))) &&
      (*(float *)(this + 0x20) <= *(float *)(param_1 + 8))) &&
     (*(float *)(param_1 + 8) <= *(float *)(this + 0x2c))) {
    local_8 = *(uint *)param_1;
    local_4 = *(undefined4 *)(param_1 + 8);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(this + 0x34) + 0x10)) {
      do {
        iVar1 = m2dIsBelongPointTri_A
                          ((m2dTRI *)(*(int *)(this + 0x30) + iVar2),(m2dV *)&local_8,DAT_005dc2d8);
        if (iVar1 != 0) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x18;
      } while (iVar3 < *(int *)(*(int *)(this + 0x34) + 0x10));
    }
  }
  return 0;
}




/* from: engine:scn_domain.cpp
   addr: 004DCC00 */

int __thiscall scnDOMAIN::IsBelongPointXZ(scnDOMAIN *this,m3dV *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(this + 4) == 0) {
    return 1;
  }
  if ((((*(float *)(this + 0x18) <= *(float *)param_1) &&
       (*(float *)param_1 <= *(float *)(this + 0x24))) &&
      (*(float *)(this + 0x20) <= *(float *)(param_1 + 8))) &&
     (*(float *)(param_1 + 8) <= *(float *)(this + 0x2c))) {
    local_8 = *(undefined4 *)param_1;
    local_4 = *(undefined4 *)(param_1 + 8);
    iVar3 = 0;
    if (0 < *(int *)(*(int *)(this + 0x34) + 0x10)) {
      iVar2 = 0;
      do {
        iVar1 = m2dIsBelongPointTri_A
                          ((m2dTRI *)(*(int *)(this + 0x30) + iVar2),(m2dV *)&local_8,DAT_005dc2d8);
        if (iVar1 != 0) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x18;
      } while (iVar3 < *(int *)(*(int *)(this + 0x34) + 0x10));
    }
  }
  return 0;
}




/* from: engine:scn_domain.cpp
   addr: 004DCCB0 */

int __thiscall scnDOMAIN::IsLSegCrossBoundaryXZ(scnDOMAIN *this,m3dV *param_1,m3dV *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [40];
  
  if (*(int *)(this + 0x34) != 0) {
    iVar4 = 0;
    local_b4 = *(undefined4 *)param_1;
    local_b0 = *(undefined4 *)(param_1 + 8);
    local_ac = *(undefined4 *)param_2;
    local_a8 = *(undefined4 *)(param_2 + 8);
    if (0 < *(int *)(*(int *)(this + 0x34) + 0x10)) {
      iVar5 = 0;
      do {
        puVar2 = local_a0;
        iVar3 = 3;
        puVar1 = (undefined4 *)(*(int *)(this + 0x30) + iVar5);
        do {
          *puVar2 = *puVar1;
          puVar2[1] = puVar1[1];
          puVar2 = puVar2 + 2;
          iVar3 = iVar3 + -1;
          puVar1 = puVar1 + 2;
        } while (iVar3 != 0);
        local_a4 = 3;
        iVar3 = m2dIsCrossLSegPolyBoundary_A
                          ((m2dPOLY *)&local_a4,(m2dV *)&local_b4,(m2dV *)&local_ac,DAT_005dc2d8);
        if (iVar3 != 0) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x18;
      } while (iVar4 < *(int *)(*(int *)(this + 0x34) + 0x10));
    }
  }
  return 0;
}




/* from: engine:scn_domain.cpp
   addr: 004DCD80 */

int __thiscall scnDOMAIN::IsIsectBox(scnDOMAIN *this,m3dBOX *param_1)

{
  int iVar1;
  int iVar2;
  m3dV *pmVar3;
  m3dV local_60 [96];
  
  iVar1 = m3dBOX::IsIsectBox((m3dBOX *)(this + 0x10),param_1);
  if (iVar1 != 1) {
    m3dBOX::GetVertices(param_1,local_60);
    iVar1 = 0;
    pmVar3 = local_60;
    if (*(int *)(this + 0x38) == 0) {
      do {
        iVar2 = (**(code **)(*(int *)this + 0x10))(pmVar3);
        if (iVar2 != 0) {
          return 1;
        }
        iVar1 = iVar1 + 1;
        pmVar3 = pmVar3 + 0xc;
      } while (iVar1 < 8);
    }
    else {
      while (iVar2 = (**(code **)(*(int *)this + 0xc))(pmVar3), iVar2 != 0) {
        iVar1 = iVar1 + 1;
        pmVar3 = pmVar3 + 0xc;
        if (7 < iVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}




/* from: engine:scn_domain.cpp
   addr: 004DCE00 */

int __thiscall scnDOMAIN::IsIsectObj(scnDOMAIN *this,objOBJ *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  objOBJ *poVar6;
  objOBJ *poVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined **local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28 [3];
  int local_1c;
  scnDOMAIN *local_18;
  objOBJ *local_14;
  undefined8 *local_10;
  objOBJ *local_c;
  int local_8;
  
  local_18 = this;
  local_44 = 1;
  local_48 = &m3dBOX::_vftable_;
  if (param_1 != (objOBJ *)0x0) {
    if (*(int *)(this + 0x38) == 0) {
      if (*(int *)(this + 4) == 0) {
        return 1;
      }
      if (*(animINST **)(param_1 + 0xbc) == (animINST *)0x0) {
        local_44 = *(undefined4 *)(param_1 + 0xc4);
        local_40 = *(undefined4 *)(param_1 + 200);
        local_3c = *(undefined4 *)(param_1 + 0xcc);
        local_34 = *(undefined4 *)(param_1 + 0xd4);
        local_38 = *(undefined4 *)(param_1 + 0xd0);
        local_30 = *(undefined4 *)(param_1 + 0xd8);
        local_2c = *(undefined4 *)(param_1 + 0xdc);
      }
      else {
        animINST::GetBBox(*(animINST **)(param_1 + 0xbc),(m3dBOX *)&local_48);
      }
      iVar9 = m3dBOX::IsIsectBox((m3dBOX *)(this + 0x10),(m3dBOX *)&local_48);
      if ((iVar9 != 1) && (local_8 = 0, 0 < *(int *)(param_1 + 0x14))) {
        local_1c = 0;
        do {
          if (((byte)*param_1 & 1) == 0) {
            local_14 = (objOBJ *)local_28;
            poVar7 = param_1 + 0x3c;
            puVar8 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_1c);
            local_10 = puVar8;
            local_c = poVar7;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar10 = (undefined4)*puVar8;
                uVar13 = CONCAT44(uVar10,uVar10);
                uVar10 = (undefined4)((ulonglong)*puVar8 >> 0x20);
                uVar16 = CONCAT44(uVar10,uVar10);
                uVar17 = CONCAT44(*(undefined4 *)(puVar8 + 1),*(undefined4 *)(puVar8 + 1));
                uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)poVar7);
                uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x4c));
                uVar14 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x5c));
                uVar11 = PackedFloatingADD(uVar11,*(undefined8 *)(param_1 + 0x6c));
                uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)(param_1 + 0x44));
                uVar13 = PackedFloatingADD(uVar12,uVar14);
                uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x54));
                uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 100));
                uVar16 = PackedFloatingADD(uVar15,*(undefined8 *)(param_1 + 0x74));
                uVar13 = PackedFloatingADD(uVar11,uVar13);
                uVar11 = PackedFloatingADD(uVar12,uVar17);
                local_28[1] = (float)((ulonglong)uVar13 >> 0x20);
                local_28[0] = (float)uVar13;
                uVar13 = PackedFloatingADD(uVar16,uVar11);
                local_28[2] = (float)uVar13;
                FastExitMediaState();
              }
              else {
                iVar9 = 0;
                local_14 = poVar7 + -(int)local_28;
                pfVar2 = local_28;
                do {
                  poVar6 = local_14;
                  iVar4 = 0;
                  *pfVar2 = 0.0;
                  poVar6 = poVar6 + (int)pfVar2;
                  do {
                    iVar3 = iVar4 * 4;
                    fVar1 = *(float *)poVar6;
                    iVar4 = iVar4 + 1;
                    poVar6 = poVar6 + 0x10;
                    *pfVar2 = *(float *)((int)puVar8 + iVar3) * fVar1 + *pfVar2;
                  } while (iVar4 < 3);
                  iVar4 = iVar9 + iVar4 * 4;
                  iVar9 = iVar9 + 1;
                  *pfVar2 = *(float *)(poVar7 + iVar4 * 4) + *pfVar2;
                  pfVar2 = pfVar2 + 1;
                } while (iVar9 < 3);
              }
            }
          }
          else {
            pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_1c);
            local_28[0] = *pfVar2;
            local_28[1] = pfVar2[1];
            local_28[2] = pfVar2[2];
          }
          iVar9 = local_1c;
          iVar4 = (**(code **)(*(int *)local_18 + 0xc))(local_28);
          if (iVar4 != 0) {
            return 1;
          }
          local_8 = local_8 + 1;
          local_1c = iVar9 + 0xc;
        } while (local_8 < *(int *)(param_1 + 0x14));
      }
    }
    else if (*(int *)(param_1 + 0x14) != 0) {
      local_8 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        local_14 = (objOBJ *)0x0;
        do {
          if (((byte)*param_1 & 1) == 0) {
            local_c = (objOBJ *)local_28;
            poVar7 = param_1 + 0x3c;
            puVar8 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + (int)local_14);
            local_10 = puVar8;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar10 = (undefined4)*puVar8;
                uVar13 = CONCAT44(uVar10,uVar10);
                uVar10 = (undefined4)((ulonglong)*puVar8 >> 0x20);
                uVar16 = CONCAT44(uVar10,uVar10);
                uVar17 = CONCAT44(*(undefined4 *)(puVar8 + 1),*(undefined4 *)(puVar8 + 1));
                uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)poVar7);
                uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x4c));
                uVar14 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x5c));
                uVar11 = PackedFloatingADD(uVar11,*(undefined8 *)(param_1 + 0x6c));
                uVar15 = PackedFloatingMUL(uVar13,*(undefined8 *)(param_1 + 0x44));
                uVar13 = PackedFloatingADD(uVar12,uVar14);
                uVar12 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x54));
                uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 100));
                uVar16 = PackedFloatingADD(uVar15,*(undefined8 *)(param_1 + 0x74));
                uVar13 = PackedFloatingADD(uVar11,uVar13);
                uVar11 = PackedFloatingADD(uVar12,uVar17);
                local_28[1] = (float)((ulonglong)uVar13 >> 0x20);
                local_28[0] = (float)uVar13;
                uVar13 = PackedFloatingADD(uVar16,uVar11);
                local_28[2] = (float)uVar13;
                FastExitMediaState();
              }
              else {
                iVar9 = 0;
                local_1c = (int)poVar7 - (int)local_28;
                pfVar2 = local_28;
                do {
                  iVar4 = local_1c;
                  iVar3 = 0;
                  *pfVar2 = 0.0;
                  pfVar5 = (float *)(iVar4 + (int)pfVar2);
                  do {
                    iVar4 = iVar3 * 4;
                    fVar1 = *pfVar5;
                    iVar3 = iVar3 + 1;
                    pfVar5 = pfVar5 + 4;
                    *pfVar2 = *(float *)((int)puVar8 + iVar4) * fVar1 + *pfVar2;
                  } while (iVar3 < 3);
                  iVar4 = iVar9 + iVar3 * 4;
                  iVar9 = iVar9 + 1;
                  *pfVar2 = *(float *)(poVar7 + iVar4 * 4) + *pfVar2;
                  pfVar2 = pfVar2 + 1;
                } while (iVar9 < 3);
              }
            }
          }
          else {
            pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + (int)local_14);
            local_28[0] = *pfVar2;
            local_28[1] = pfVar2[1];
            local_28[2] = pfVar2[2];
          }
          poVar7 = local_14;
          iVar9 = (**(code **)(*(int *)local_18 + 0xc))(local_28);
          if (iVar9 == 0) {
            return 0;
          }
          local_8 = local_8 + 1;
          local_14 = (objOBJ *)((int)poVar7 + 0xc);
        } while (local_8 < *(int *)(param_1 + 0x14));
      }
      return 1;
    }
  }
  return 0;
}




/* from: engine:scn_domain.cpp
   addr: 004DD280 */

int __thiscall scnDOMAIN::IsIsectObj(scnDOMAIN *this,objOBJ *param_1)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar2 = 0;
  if (param_1 != (objOBJ *)0x0) {
    local_8 = *(int *)(param_1 + 0x38);
    local_4 = 0;
    iVar2 = local_8;
  }
  iVar1 = (**(code **)(*(int *)this + 0x20))(param_1);
  if (iVar1 == 0) {
    while( true ) {
      if ((iVar2 == 0) || ((local_4 != 0 && (local_8 == iVar2)))) {
        return 0;
      }
      iVar1 = (**(code **)(*(int *)this + 0x24))(local_8);
      if (iVar1 != 0) break;
      local_8 = *(int *)(local_8 + 0x30);
      local_4 = 1;
    }
  }
  return 1;
}




/* from: engine:scn_domain.cpp
   addr: 004DD310 */

int __thiscall scnDOMAIN::IsIsectInst(scnDOMAIN *this,animINST *param_1)

{
  int iVar1;
  
  if (param_1 == (animINST *)0x0) {
    return (int)param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x004dd324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(int *)this + 0x24))();
  return iVar1;
}




/* from: engine:scn_domain.cpp
   addr: 004DD330 */

int __thiscall scnDOMAIN::IsIsectInst(scnDOMAIN *this,animINST *param_1)

{
  int iVar1;
  m3dV local_c [12];
  
  if (param_1 == (animINST *)0x0) {
    return 0;
  }
  animINST::GetPos(param_1,local_c);
  iVar1 = (**(code **)(*(int *)this + 0xc))(local_c);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:scn_domain.cpp
   addr: 004DD370 */

void __thiscall scnDOMAIN::CalcBBox(scnDOMAIN *this)

{
  int iVar1;
  int iVar2;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  m3dBOX::CalcStart((m3dBOX *)(this + 0x10));
  iVar2 = 0;
  local_10 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      iVar1 = 3;
      do {
        local_c = *(undefined4 *)(*(int *)(this + 0x30) + iVar2);
        local_4 = ((undefined4 *)(*(int *)(this + 0x30) + iVar2))[1];
        local_8 = *(undefined4 *)(this + 8);
        m3dBOX::CalcUpdate((m3dBOX *)(this + 0x10),(m3dV *)&local_c);
        iVar2 = iVar2 + 8;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      local_10 = local_10 + 1;
    } while ((int)local_10 < *(int *)(this + 4));
  }
  local_10 = (uint)(ABS(*(float *)(this + 8) - *(float *)(this + 0xc)) < ___real_38d1b717);
  if ((float)local_10 != ___real_00000000) {
    *(float *)(this + 0x1c) = _DAT_005dc2dc * ___real_bdcccccd;
    *(float *)(this + 0x28) = _DAT_005dc2dc * ___real_3dcccccd;
    return;
  }
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0xc);
  return;
}




/* from: engine:scn_domain.cpp
   addr: 004DD450 */

void __thiscall scnDOMAIN::GetRandomPoint(scnDOMAIN *this,m3dV *param_1)

{
  int iVar1;
  float fVar2;
  m2dV *local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  m3dRandMax((float)this);
  iVar1 = ftol();
  m3dRandBasicCoord(&local_c,(float *)&local_10);
  m2dTriApplyBasisCoord
            ((m2dTRI *)(*(int *)(this + 0x30) + iVar1 * 0x18),(float)&local_8,local_c,local_10);
  *(undefined4 *)param_1 = local_8;
  fVar2 = m3dRandRange(*(float *)(this + 0xc),*(float *)(this + 8));
  *(float *)(param_1 + 4) = fVar2;
  *(undefined4 *)(param_1 + 8) = local_4;
  return;
}




/* from: engine:scn_domain.cpp
   addr: 004DD4D0 */

void __thiscall scnDOMAIN::GetPoly(scnDOMAIN *this,int param_1,m2dPOLY *param_2)

{
  int iVar1;
  int iVar2;
  m2dPOLY *pmVar3;
  int iVar4;
  
  iVar4 = 3;
  iVar2 = param_1 * 0x18;
  pmVar3 = param_2 + 4;
  do {
    iVar1 = *(int *)(this + 0x30);
    iVar4 = iVar4 + -1;
    *(undefined4 *)pmVar3 = *(undefined4 *)(iVar2 + iVar1);
    *(undefined4 *)(pmVar3 + 4) = *(undefined4 *)(iVar2 + 4 + iVar1);
    iVar2 = iVar2 + 8;
    pmVar3 = pmVar3 + 8;
  } while (iVar4 != 0);
  *(undefined4 *)param_2 = 3;
  return;
}

