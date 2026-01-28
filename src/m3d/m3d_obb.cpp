
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_obb.cpp
   addr: 0055FC20 */

int __thiscall m3dOBB::IsBelongPoint(m3dOBB *this,m3dV *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float local_78 [4];
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float local_48 [3];
  undefined4 uStack_3c;
  undefined **local_38;
  undefined4 local_34;
  float fStack_1c;
  undefined8 local_18;
  float local_10;
  float *local_c;
  undefined8 *local_8;
  
  local_34 = 1;
  local_38 = &m3dBOX::_vftable_;
  GetMatrW2L(this,(m3dMATR *)local_78,(m3dMATR *)0x0,(m3dBOX *)&local_38);
  local_8 = &local_18;
  local_c = local_78;
  if (m3dSimdType == 0) {
    if (((uint)local_78 & 0xf) == 0) {
      fVar2 = *(float *)param_1;
      fVar4 = *(float *)(param_1 + 4);
      fVar3 = *(float *)(param_1 + 8);
      fVar16 = fVar2 * local_78[0] + local_48[0] + fVar4 * local_68 + fVar3 * local_58;
      fVar17 = fVar2 * local_78[1] + local_48[1] + fVar4 * fStack_64 + fVar3 * fStack_54;
      local_10 = fVar2 * local_78[2] + local_48[2] + fVar4 * fStack_60 + fVar3 * fStack_50;
    }
    else {
      fVar2 = *(float *)param_1;
      fVar4 = *(float *)(param_1 + 4);
      fVar3 = *(float *)(param_1 + 8);
      fVar16 = fVar2 * local_78[0] + fVar4 * local_68 + fVar3 * local_58 + local_48[0];
      fVar17 = fVar2 * local_78[1] + fVar4 * fStack_64 + fVar3 * fStack_54 + local_48[1];
      local_10 = fVar2 * local_78[2] + fVar4 * fStack_60 + fVar3 * fStack_50 + local_48[2];
    }
    local_18 = CONCAT44(fVar17,fVar16);
    iVar7 = m3dBOX::IsBelongPoint((m3dBOX *)&local_38,(m3dV *)&local_18);
    return iVar7;
  }
  if (m3dSimdType != 1) {
    iVar7 = 0;
    do {
      *(undefined4 *)((int)&local_18 + iVar7 * 4) = 0;
      iVar5 = 0;
      pfVar6 = local_78 + iVar7;
      fVar2 = ___real_00000000;
      do {
        iVar1 = iVar5 * 4;
        fVar4 = *pfVar6;
        iVar5 = iVar5 + 1;
        pfVar6 = pfVar6 + 4;
        fVar2 = *(float *)(param_1 + iVar1) * fVar4 + fVar2;
      } while (iVar5 < 3);
      *(float *)((int)&local_18 + iVar7 * 4) = fVar2;
      iVar5 = iVar7 + iVar5 * 4;
      iVar7 = iVar7 + 1;
      (&fStack_1c)[iVar7] = fVar2 + local_78[iVar5];
    } while (iVar7 < 3);
    iVar7 = m3dBOX::IsBelongPoint((m3dBOX *)&local_38,(m3dV *)&local_18);
    return iVar7;
  }
  FastExitMediaState();
  uVar8 = (undefined4)*(undefined8 *)param_1;
  uVar11 = CONCAT44(uVar8,uVar8);
  uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  uVar14 = CONCAT44(uVar8,uVar8);
  uVar15 = CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
  uVar9 = PackedFloatingMUL(uVar11,CONCAT44(local_78[1],local_78[0]));
  uVar10 = PackedFloatingMUL(uVar14,CONCAT44(fStack_64,local_68));
  uVar12 = PackedFloatingMUL(uVar15,CONCAT44(fStack_54,local_58));
  uVar9 = PackedFloatingADD(uVar9,CONCAT44(local_48[1],local_48[0]));
  uVar13 = PackedFloatingMUL(uVar11,CONCAT44(local_78[3],local_78[2]));
  uVar11 = PackedFloatingADD(uVar10,uVar12);
  uVar10 = PackedFloatingMUL(uVar14,CONCAT44(uStack_5c,fStack_60));
  uVar15 = PackedFloatingMUL(uVar15,CONCAT44(uStack_4c,fStack_50));
  uVar14 = PackedFloatingADD(uVar13,CONCAT44(uStack_3c,local_48[2]));
  local_18 = PackedFloatingADD(uVar9,uVar11);
  uVar11 = PackedFloatingADD(uVar10,uVar15);
  uVar11 = PackedFloatingADD(uVar14,uVar11);
  local_10 = (float)uVar11;
  FastExitMediaState();
  iVar7 = m3dBOX::IsBelongPoint((m3dBOX *)&local_38,(m3dV *)&local_18);
  return iVar7;
}




/* WARNING: Removing unreachable block (ram,0x0055ff1d) */
/* WARNING: Removing unreachable block (ram,0x0056006d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_obb.cpp
   addr: 0055FDE0 */

int __thiscall
m3dOBB::IsIsectCyl(m3dOBB *this,m3dV *param_1,m3dV *param_2,float param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float local_80 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float local_50 [3];
  undefined4 uStack_44;
  undefined **local_40;
  undefined4 local_3c;
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  float *local_8;
  
  local_3c = 1;
  local_40 = &m3dBOX::_vftable_;
  GetMatrW2L(this,(m3dMATR *)local_80,(m3dMATR *)0x0,(m3dBOX *)&local_40);
  m3dBOX::Expand((m3dBOX *)&local_40,param_4);
  local_8 = local_80;
  if (m3dSimdType == 0) {
    fVar2 = *(float *)param_1;
    fVar4 = *(float *)(param_1 + 4);
    fVar3 = *(float *)(param_1 + 8);
    local_14 = CONCAT44(fVar2 * local_80[1] + local_50[1] + fVar4 * fStack_6c + fVar3 * fStack_5c,
                        fVar2 * local_80[0] + local_50[0] + fVar4 * local_70 + fVar3 * local_60);
    local_c = fVar2 * local_80[2] + local_50[2] + fVar4 * fStack_68 + fVar3 * fStack_58;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar8 = (undefined4)*(undefined8 *)param_1;
    uVar11 = CONCAT44(uVar8,uVar8);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    uVar14 = CONCAT44(uVar8,uVar8);
    uVar15 = CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
    uVar9 = PackedFloatingMUL(uVar11,CONCAT44(local_80[1],local_80[0]));
    uVar10 = PackedFloatingMUL(uVar14,CONCAT44(fStack_6c,local_70));
    uVar12 = PackedFloatingMUL(uVar15,CONCAT44(fStack_5c,local_60));
    uVar9 = PackedFloatingADD(uVar9,CONCAT44(local_50[1],local_50[0]));
    uVar13 = PackedFloatingMUL(uVar11,CONCAT44(local_80[3],local_80[2]));
    uVar11 = PackedFloatingADD(uVar10,uVar12);
    uVar10 = PackedFloatingMUL(uVar14,CONCAT44(uStack_64,fStack_68));
    uVar15 = PackedFloatingMUL(uVar15,CONCAT44(uStack_54,fStack_58));
    uVar14 = PackedFloatingADD(uVar13,CONCAT44(uStack_44,local_50[2]));
    local_14 = PackedFloatingADD(uVar9,uVar11);
    uVar11 = PackedFloatingADD(uVar10,uVar15);
    uVar11 = PackedFloatingADD(uVar14,uVar11);
    local_c = (float)uVar11;
    FastExitMediaState();
  }
  else {
    iVar7 = 0;
    do {
      *(undefined4 *)((int)&local_14 + iVar7 * 4) = 0;
      iVar5 = 0;
      pfVar6 = local_80 + iVar7;
      fVar2 = ___real_00000000;
      do {
        iVar1 = iVar5 * 4;
        fVar4 = *pfVar6;
        iVar5 = iVar5 + 1;
        pfVar6 = pfVar6 + 4;
        fVar2 = *(float *)(param_1 + iVar1) * fVar4 + fVar2;
      } while (iVar5 < 3);
      *(float *)((int)&local_14 + iVar7 * 4) = fVar2;
      iVar5 = iVar7 + iVar5 * 4;
      iVar7 = iVar7 + 1;
      (&local_18)[iVar7] = fVar2 + local_80[iVar5];
    } while (iVar7 < 3);
  }
  if (m3dSimdType == 0) {
    fVar2 = *(float *)param_2;
    fVar4 = *(float *)(param_2 + 4);
    fVar3 = *(float *)(param_2 + 8);
    local_18 = fVar2 * local_80[2] + fVar4 * fStack_68 + fVar3 * fStack_58;
    local_20 = CONCAT44(fVar2 * local_80[1] + fVar4 * fStack_6c + fVar3 * fStack_5c,
                        fVar2 * local_80[0] + fVar4 * local_70 + fVar3 * local_60);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar8 = (undefined4)*(undefined8 *)param_2;
    uVar11 = CONCAT44(uVar8,uVar8);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    uVar14 = CONCAT44(uVar8,uVar8);
    uVar15 = CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8));
    uVar9 = PackedFloatingMUL(uVar11,CONCAT44(local_80[1],local_80[0]));
    uVar10 = PackedFloatingMUL(uVar14,CONCAT44(fStack_6c,local_70));
    uVar12 = PackedFloatingMUL(uVar15,CONCAT44(fStack_5c,local_60));
    uVar13 = PackedFloatingMUL(uVar11,CONCAT44(local_80[3],local_80[2]));
    uVar11 = PackedFloatingADD(uVar10,uVar12);
    uVar14 = PackedFloatingMUL(uVar14,CONCAT44(uStack_64,fStack_68));
    uVar10 = PackedFloatingMUL(uVar15,CONCAT44(uStack_54,fStack_58));
    local_20 = PackedFloatingADD(uVar9,uVar11);
    uVar11 = PackedFloatingADD(uVar14,uVar10);
    uVar11 = PackedFloatingADD(uVar13,uVar11);
    local_18 = (float)uVar11;
    FastExitMediaState();
  }
  else {
    iVar7 = 0;
    do {
      *(undefined4 *)((int)&local_20 + iVar7) = 0;
      iVar5 = 0;
      pfVar6 = (float *)((int)local_80 + iVar7);
      fVar2 = ___real_00000000;
      do {
        iVar1 = iVar5 * 4;
        fVar4 = *pfVar6;
        iVar5 = iVar5 + 1;
        pfVar6 = pfVar6 + 4;
        fVar2 = *(float *)(param_2 + iVar1) * fVar4 + fVar2;
      } while (iVar5 < 3);
      *(float *)((int)&local_20 + iVar7) = fVar2;
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0xc);
  }
  iVar7 = m3dBOX::IsectRay((m3dBOX *)&local_40,(m3dV *)&local_14,(m3dV *)&local_20,param_3,
                           (m3dV *)0x0,(float *)0x0,(int *)0x0);
  return (uint)(iVar7 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_obb.cpp
   addr: 005600F0 */

int __thiscall
m3dOBB::IsectRay(m3dOBB *this,m3dV *param_1,m3dV *param_2,float param_3,m3dV *param_4,float *param_5
                ,int *param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_c4 [4];
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  float local_94 [3];
  undefined4 uStack_88;
  float local_84 [4];
  float local_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  float local_54 [3];
  undefined4 uStack_48;
  undefined **local_44;
  undefined4 local_40;
  undefined8 *local_24;
  undefined8 local_20;
  float local_18;
  float *local_14;
  float local_10 [3];
  
  local_40 = 1;
  local_44 = &m3dBOX::_vftable_;
  GetMatrW2L(this,(m3dMATR *)local_84,(m3dMATR *)local_c4,(m3dBOX *)&local_44);
  local_24 = &local_20;
  local_14 = local_84;
  if (m3dSimdType == 0) {
    if (((uint)local_84 & 0xf) == 0) {
      fVar18 = *(float *)param_1;
      fVar2 = *(float *)(param_1 + 4);
      fVar1 = *(float *)(param_1 + 8);
      fVar16 = fVar18 * local_84[0] + local_54[0] + fVar2 * local_74 + fVar1 * local_64;
      fVar17 = fVar18 * local_84[1] + local_54[1] + fVar2 * fStack_70 + fVar1 * fStack_60;
      local_18 = fVar18 * local_84[2] + local_54[2] + fVar2 * fStack_6c + fVar1 * fStack_5c;
    }
    else {
      fVar18 = *(float *)param_1;
      fVar2 = *(float *)(param_1 + 4);
      fVar1 = *(float *)(param_1 + 8);
      fVar16 = fVar18 * local_84[0] + fVar2 * local_74 + fVar1 * local_64 + local_54[0];
      fVar17 = fVar18 * local_84[1] + fVar2 * fStack_70 + fVar1 * fStack_60 + local_54[1];
      local_18 = fVar18 * local_84[2] + fVar2 * fStack_6c + fVar1 * fStack_5c + local_54[2];
    }
    local_20 = CONCAT44(fVar17,fVar16);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar8 = (undefined4)*(undefined8 *)param_1;
    uVar11 = CONCAT44(uVar8,uVar8);
    uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    uVar14 = CONCAT44(uVar8,uVar8);
    uVar15 = CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
    uVar9 = PackedFloatingMUL(uVar11,CONCAT44(local_84[1],local_84[0]));
    uVar10 = PackedFloatingMUL(uVar14,CONCAT44(fStack_70,local_74));
    uVar12 = PackedFloatingMUL(uVar15,CONCAT44(fStack_60,local_64));
    uVar9 = PackedFloatingADD(uVar9,CONCAT44(local_54[1],local_54[0]));
    uVar13 = PackedFloatingMUL(uVar11,CONCAT44(local_84[3],local_84[2]));
    uVar11 = PackedFloatingADD(uVar10,uVar12);
    uVar10 = PackedFloatingMUL(uVar14,CONCAT44(uStack_68,fStack_6c));
    uVar15 = PackedFloatingMUL(uVar15,CONCAT44(uStack_58,fStack_5c));
    uVar14 = PackedFloatingADD(uVar13,CONCAT44(uStack_48,local_54[2]));
    local_20 = PackedFloatingADD(uVar9,uVar11);
    uVar11 = PackedFloatingADD(uVar10,uVar15);
    uVar11 = PackedFloatingADD(uVar14,uVar11);
    local_18 = (float)uVar11;
    FastExitMediaState();
  }
  else {
    iVar6 = 0;
    do {
      *(undefined4 *)((int)&local_20 + iVar6 * 4) = 0;
      iVar3 = 0;
      pfVar5 = local_84 + iVar6;
      fVar18 = ___real_00000000;
      do {
        iVar4 = iVar3 * 4;
        fVar2 = *pfVar5;
        iVar3 = iVar3 + 1;
        pfVar5 = pfVar5 + 4;
        fVar18 = *(float *)(param_1 + iVar4) * fVar2 + fVar18;
      } while (iVar3 < 3);
      *(float *)((int)&local_20 + iVar6 * 4) = fVar18;
      iVar3 = iVar6 + iVar3 * 4;
      iVar6 = iVar6 + 1;
      (&local_24)[iVar6] = (undefined8 *)(fVar18 + local_84[iVar3]);
    } while (iVar6 < 3);
  }
  local_14 = local_84;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = (undefined4)*(undefined8 *)param_2;
      uVar11 = CONCAT44(uVar8,uVar8);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_2 >> 0x20);
      uVar14 = CONCAT44(uVar8,uVar8);
      uVar15 = CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 8));
      uVar9 = PackedFloatingMUL(uVar11,CONCAT44(local_84[1],local_84[0]));
      uVar10 = PackedFloatingMUL(uVar14,CONCAT44(fStack_70,local_74));
      uVar12 = PackedFloatingMUL(uVar15,CONCAT44(fStack_60,local_64));
      uVar13 = PackedFloatingMUL(uVar11,CONCAT44(local_84[3],local_84[2]));
      uVar11 = PackedFloatingADD(uVar10,uVar12);
      uVar14 = PackedFloatingMUL(uVar14,CONCAT44(uStack_68,fStack_6c));
      uVar10 = PackedFloatingMUL(uVar15,CONCAT44(uStack_58,fStack_5c));
      uVar11 = PackedFloatingADD(uVar9,uVar11);
      uVar9 = PackedFloatingADD(uVar14,uVar10);
      local_10[1] = (float)((ulonglong)uVar11 >> 0x20);
      local_10[0] = (float)uVar11;
      uVar11 = PackedFloatingADD(uVar13,uVar9);
      local_10[2] = (float)uVar11;
      FastExitMediaState();
    }
    else {
      iVar6 = 0;
      do {
        *(undefined4 *)((int)local_10 + iVar6) = 0;
        iVar3 = 0;
        pfVar5 = (float *)((int)local_84 + iVar6);
        fVar18 = ___real_00000000;
        do {
          iVar4 = iVar3 * 4;
          fVar2 = *pfVar5;
          iVar3 = iVar3 + 1;
          pfVar5 = pfVar5 + 4;
          fVar18 = *(float *)(param_2 + iVar4) * fVar2 + fVar18;
        } while (iVar3 < 3);
        *(float *)((int)local_10 + iVar6) = fVar18;
        iVar6 = iVar6 + 4;
      } while (iVar6 < 0xc);
    }
  }
  iVar6 = m3dBOX::IsectRay((m3dBOX *)&local_44,(m3dV *)&local_20,(m3dV *)local_10,param_3,param_4,
                           param_5,param_6);
  if ((iVar6 != 0) && (param_4 != (m3dV *)0x0)) {
    if (m3dSimdType != 0) {
      if (m3dSimdType != 1) {
        iVar3 = 0;
        do {
          local_10[iVar3] = 0.0;
          iVar4 = 0;
          pfVar5 = local_c4 + iVar3;
          fVar18 = ___real_00000000;
          do {
            iVar7 = iVar4 * 4;
            fVar2 = *pfVar5;
            iVar4 = iVar4 + 1;
            pfVar5 = pfVar5 + 4;
            fVar18 = *(float *)(param_4 + iVar7) * fVar2 + fVar18;
          } while (iVar4 < 3);
          local_10[iVar3] = fVar18;
          iVar7 = iVar3 + 1;
          local_10[iVar3] = fVar18 + local_c4[iVar3 + iVar4 * 4];
          iVar3 = iVar7;
        } while (iVar7 < 3);
        *(float *)param_4 = local_10[0];
        *(float *)(param_4 + 4) = local_10[1];
        *(float *)(param_4 + 8) = local_10[2];
        return iVar6;
      }
      FastExitMediaState();
      uVar8 = (undefined4)*(undefined8 *)param_4;
      uVar11 = CONCAT44(uVar8,uVar8);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_4 >> 0x20);
      uVar14 = CONCAT44(uVar8,uVar8);
      uVar15 = CONCAT44(*(undefined4 *)(param_4 + 8),*(undefined4 *)(param_4 + 8));
      uVar9 = PackedFloatingMUL(uVar11,CONCAT44(local_c4[1],local_c4[0]));
      uVar10 = PackedFloatingMUL(uVar14,CONCAT44(fStack_b0,local_b4));
      uVar12 = PackedFloatingMUL(uVar15,CONCAT44(fStack_a0,local_a4));
      uVar9 = PackedFloatingADD(uVar9,CONCAT44(local_94[1],local_94[0]));
      uVar13 = PackedFloatingMUL(uVar11,CONCAT44(local_c4[3],local_c4[2]));
      uVar11 = PackedFloatingADD(uVar10,uVar12);
      uVar10 = PackedFloatingMUL(uVar14,CONCAT44(uStack_a8,fStack_ac));
      uVar15 = PackedFloatingMUL(uVar15,CONCAT44(uStack_98,fStack_9c));
      uVar14 = PackedFloatingADD(uVar13,CONCAT44(uStack_88,local_94[2]));
      uVar11 = PackedFloatingADD(uVar9,uVar11);
      uVar9 = PackedFloatingADD(uVar10,uVar15);
      *(undefined8 *)param_4 = uVar11;
      uVar11 = PackedFloatingADD(uVar14,uVar9);
      *(int *)(param_4 + 8) = (int)uVar11;
      FastExitMediaState();
      return iVar6;
    }
    if (((uint)local_c4 & 0xf) == 0) {
      fVar18 = *(float *)param_4;
      fVar2 = *(float *)(param_4 + 4);
      fVar1 = *(float *)(param_4 + 8);
      fVar16 = fVar18 * local_c4[0] + local_94[0] + fVar2 * local_b4 + fVar1 * local_a4;
      fVar17 = fVar18 * local_c4[1] + local_94[1] + fVar2 * fStack_b0 + fVar1 * fStack_a0;
      fVar18 = fVar18 * local_c4[2] + local_94[2] + fVar2 * fStack_ac + fVar1 * fStack_9c;
    }
    else {
      fVar18 = *(float *)param_4;
      fVar2 = *(float *)(param_4 + 4);
      fVar1 = *(float *)(param_4 + 8);
      fVar16 = fVar18 * local_c4[0] + fVar2 * local_b4 + fVar1 * local_a4 + local_94[0];
      fVar17 = fVar18 * local_c4[1] + fVar2 * fStack_b0 + fVar1 * fStack_a0 + local_94[1];
      fVar18 = fVar18 * local_c4[2] + fVar2 * fStack_ac + fVar1 * fStack_9c + local_94[2];
    }
    *(ulonglong *)param_4 = CONCAT44(fVar17,fVar16);
    *(float *)(param_4 + 8) = fVar18;
  }
  return iVar6;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_obb.cpp
   addr: 00560590 */

int __thiscall
m3dOBB::DistPoint(m3dOBB *this,m3dV *param_1,float param_2,m3dV *param_3,float *param_4,int *param_5
                 )

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_b8 [4];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88 [3];
  undefined4 uStack_7c;
  float local_78 [4];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48 [3];
  undefined4 uStack_3c;
  undefined **local_38;
  undefined4 local_34;
  float *local_18;
  float *local_14;
  float local_10 [3];
  
  local_34 = 1;
  local_38 = &m3dBOX::_vftable_;
  GetMatrW2L(this,(m3dMATR *)local_78,(m3dMATR *)local_b8,(m3dBOX *)&local_38);
  local_18 = local_10;
  local_14 = local_78;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = (undefined4)*(undefined8 *)param_1;
      uVar11 = CONCAT44(uVar8,uVar8);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      uVar14 = CONCAT44(uVar8,uVar8);
      uVar15 = CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
      uVar9 = PackedFloatingMUL(uVar11,CONCAT44(local_78[1],local_78[0]));
      uVar10 = PackedFloatingMUL(uVar14,CONCAT44(uStack_64,local_68));
      uVar12 = PackedFloatingMUL(uVar15,CONCAT44(uStack_54,local_58));
      uVar9 = PackedFloatingADD(uVar9,CONCAT44(local_48[1],local_48[0]));
      uVar13 = PackedFloatingMUL(uVar11,CONCAT44(local_78[3],local_78[2]));
      uVar11 = PackedFloatingADD(uVar10,uVar12);
      uVar10 = PackedFloatingMUL(uVar14,CONCAT44(uStack_5c,uStack_60));
      uVar15 = PackedFloatingMUL(uVar15,CONCAT44(uStack_4c,uStack_50));
      uVar14 = PackedFloatingADD(uVar13,CONCAT44(uStack_3c,local_48[2]));
      uVar11 = PackedFloatingADD(uVar9,uVar11);
      uVar9 = PackedFloatingADD(uVar10,uVar15);
      local_10[1] = (float)((ulonglong)uVar11 >> 0x20);
      local_10[0] = (float)uVar11;
      uVar11 = PackedFloatingADD(uVar14,uVar9);
      local_10[2] = (float)uVar11;
      FastExitMediaState();
    }
    else {
      iVar4 = 0;
      do {
        local_10[iVar4] = 0.0;
        iVar3 = 0;
        pfVar5 = local_78 + iVar4;
        fVar18 = ___real_00000000;
        do {
          iVar6 = iVar3 * 4;
          fVar2 = *pfVar5;
          iVar3 = iVar3 + 1;
          pfVar5 = pfVar5 + 4;
          fVar18 = *(float *)(param_1 + iVar6) * fVar2 + fVar18;
        } while (iVar3 < 3);
        local_10[iVar4] = fVar18;
        iVar6 = iVar4 + 1;
        local_10[iVar4] = fVar18 + local_78[iVar4 + iVar3 * 4];
        iVar4 = iVar6;
      } while (iVar6 < 3);
    }
  }
  iVar4 = m3dBOX::DistPoint((m3dBOX *)&local_38,(m3dV *)local_10,param_2,param_3,param_4,param_5);
  if ((iVar4 != 0) && (param_3 != (m3dV *)0x0)) {
    if (m3dSimdType != 0) {
      if (m3dSimdType != 1) {
        iVar3 = 0;
        do {
          local_10[iVar3] = 0.0;
          iVar6 = 0;
          pfVar5 = local_b8 + iVar3;
          fVar18 = ___real_00000000;
          do {
            iVar7 = iVar6 * 4;
            fVar2 = *pfVar5;
            iVar6 = iVar6 + 1;
            pfVar5 = pfVar5 + 4;
            fVar18 = *(float *)(param_3 + iVar7) * fVar2 + fVar18;
          } while (iVar6 < 3);
          local_10[iVar3] = fVar18;
          iVar7 = iVar3 + 1;
          local_10[iVar3] = fVar18 + local_b8[iVar3 + iVar6 * 4];
          iVar3 = iVar7;
        } while (iVar7 < 3);
        *(float *)param_3 = local_10[0];
        *(float *)(param_3 + 4) = local_10[1];
        *(float *)(param_3 + 8) = local_10[2];
        return iVar4;
      }
      FastExitMediaState();
      uVar8 = (undefined4)*(undefined8 *)param_3;
      uVar11 = CONCAT44(uVar8,uVar8);
      uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
      uVar14 = CONCAT44(uVar8,uVar8);
      uVar15 = CONCAT44(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8));
      uVar9 = PackedFloatingMUL(uVar11,CONCAT44(local_b8[1],local_b8[0]));
      uVar10 = PackedFloatingMUL(uVar14,CONCAT44(fStack_a4,local_a8));
      uVar12 = PackedFloatingMUL(uVar15,CONCAT44(fStack_94,local_98));
      uVar9 = PackedFloatingADD(uVar9,CONCAT44(local_88[1],local_88[0]));
      uVar13 = PackedFloatingMUL(uVar11,CONCAT44(local_b8[3],local_b8[2]));
      uVar11 = PackedFloatingADD(uVar10,uVar12);
      uVar10 = PackedFloatingMUL(uVar14,CONCAT44(uStack_9c,fStack_a0));
      uVar15 = PackedFloatingMUL(uVar15,CONCAT44(uStack_8c,fStack_90));
      uVar14 = PackedFloatingADD(uVar13,CONCAT44(uStack_7c,local_88[2]));
      uVar11 = PackedFloatingADD(uVar9,uVar11);
      uVar9 = PackedFloatingADD(uVar10,uVar15);
      *(undefined8 *)param_3 = uVar11;
      uVar11 = PackedFloatingADD(uVar14,uVar9);
      *(int *)(param_3 + 8) = (int)uVar11;
      FastExitMediaState();
      return iVar4;
    }
    if (((uint)local_b8 & 0xf) == 0) {
      fVar18 = *(float *)param_3;
      fVar2 = *(float *)(param_3 + 4);
      fVar1 = *(float *)(param_3 + 8);
      fVar16 = fVar18 * local_b8[0] + local_88[0] + fVar2 * local_a8 + fVar1 * local_98;
      fVar17 = fVar18 * local_b8[1] + local_88[1] + fVar2 * fStack_a4 + fVar1 * fStack_94;
      fVar18 = fVar18 * local_b8[2] + local_88[2] + fVar2 * fStack_a0 + fVar1 * fStack_90;
    }
    else {
      fVar18 = *(float *)param_3;
      fVar2 = *(float *)(param_3 + 4);
      fVar1 = *(float *)(param_3 + 8);
      fVar16 = fVar18 * local_b8[0] + fVar2 * local_a8 + fVar1 * local_98 + local_88[0];
      fVar17 = fVar18 * local_b8[1] + fVar2 * fStack_a4 + fVar1 * fStack_94 + local_88[1];
      fVar18 = fVar18 * local_b8[2] + fVar2 * fStack_a0 + fVar1 * fStack_90 + local_88[2];
    }
    *(ulonglong *)param_3 = CONCAT44(fVar17,fVar16);
    *(float *)(param_3 + 8) = fVar18;
  }
  return iVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_obb.cpp
   addr: 005608E0 */

void __thiscall m3dOBB::GetMatrW2L(m3dOBB *this,m3dMATR *param_1,m3dMATR *param_2,m3dBOX *param_3)

{
  ulonglong uVar1;
  undefined8 in_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_30 = *(float *)(this + 0x14) * *(float *)(this + 0x14) +
             *(float *)(this + 0x18) * *(float *)(this + 0x18) +
             *(float *)(this + 0x1c) * *(float *)(this + 0x1c);
  if (m3dSimdType == 0) {
    local_30 = local_30 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)local_30),ZEXT416((uint)local_30));
    fVar4 = auVar7._0_4_;
    local_30 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_30 * fVar4 * fVar4) * local_30;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)local_30;
    uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    in_MM1 = PackedFloatingMUL(uVar2,uVar1);
    local_30 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_30 = SQRT(local_30);
  }
  fVar4 = local_30;
  local_30 = *(float *)(this + 0x20) * *(float *)(this + 0x20) +
             *(float *)(this + 0x24) * *(float *)(this + 0x24) +
             *(float *)(this + 0x28) * *(float *)(this + 0x28);
  if (m3dSimdType == 0) {
    local_30 = local_30 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)local_30),ZEXT416((uint)local_30));
    fVar5 = auVar7._0_4_;
    local_30 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_30 * fVar5 * fVar5) * local_30;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)local_30;
    uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    in_MM1 = PackedFloatingMUL(uVar2,uVar1);
    local_30 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_30 = SQRT(local_30);
  }
  fVar5 = local_30;
  local_30 = *(float *)(this + 0x2c) * *(float *)(this + 0x2c) +
             *(float *)(this + 0x30) * *(float *)(this + 0x30) +
             *(float *)(this + 0x34) * *(float *)(this + 0x34);
  if (m3dSimdType == 0) {
    local_30 = local_30 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)local_30),ZEXT416((uint)local_30));
    fVar6 = auVar7._0_4_;
    local_30 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_30 * fVar6 * fVar6) * local_30;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)local_30;
    uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    uVar2 = PackedFloatingMUL(uVar2,uVar1);
    local_30 = (float)uVar2;
    FastExitMediaState();
  }
  else {
    local_30 = SQRT(local_30);
  }
  local_4 = ___real_3f800000 / fVar4;
  local_c = local_4 * *(float *)(this + 0x14);
  local_8 = local_4 * *(float *)(this + 0x18);
  local_4 = local_4 * *(float *)(this + 0x1c);
  local_10 = ___real_3f800000 / fVar5;
  local_18 = local_10 * *(float *)(this + 0x20);
  local_14 = local_10 * *(float *)(this + 0x24);
  local_10 = local_10 * *(float *)(this + 0x28);
  local_1c = ___real_3f800000 / local_30;
  local_24 = local_1c * *(float *)(this + 0x2c);
  local_20 = local_1c * *(float *)(this + 0x30);
  local_1c = local_1c * *(float *)(this + 0x34);
  m3dMATR::MakeWCS2LCS
            (param_1,(m3dV *)(this + 8),(m3dV *)&local_c,(m3dV *)&local_18,(m3dV *)&local_24);
  if (param_2 != (m3dMATR *)0x0) {
    m3dMATR::MakeLCS2WCS
              (param_2,(m3dV *)(this + 8),(m3dV *)&local_c,(m3dV *)&local_18,(m3dV *)&local_24);
  }
  if (param_3 != (m3dBOX *)0x0) {
    *(undefined4 *)(param_3 + 8) = _m3dVZero;
    *(undefined4 *)(param_3 + 0xc) = DAT_00963740;
    *(undefined4 *)(param_3 + 0x10) = DAT_00963744;
    *(float *)(param_3 + 0x14) = fVar4;
    *(float *)(param_3 + 0x18) = fVar5;
    *(float *)(param_3 + 0x1c) = local_30;
  }
  return;
}




/* from: m3d:m3d_obb.cpp
   addr: 00560BF0 */

void __thiscall m3dOBB::CalcEnclSph(m3dOBB *this,m3dSPHERE *param_1)

{
  ulonglong uVar1;
  undefined8 extraout_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  (**(code **)(*(int *)this + 0x24))(param_1 + 8);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(this + 8);
  fVar4 = fVar4 * fVar4 +
          (*(float *)(param_1 + 0xc) - *(float *)(this + 0xc)) *
          (*(float *)(param_1 + 0xc) - *(float *)(this + 0xc)) +
          (*(float *)(param_1 + 0x10) - *(float *)(this + 0x10)) *
          (*(float *)(param_1 + 0x10) - *(float *)(this + 0x10));
  if (m3dSimdType == 0) {
    fVar4 = fVar4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    *(float *)(param_1 + 0x14) =
         `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar4 * fVar5 * fVar5) * fVar4;
    return;
  }
  if (m3dSimdType != 1) {
    *(float *)(param_1 + 0x14) = SQRT(fVar4);
    return;
  }
  FastExitMediaState();
  uVar1 = (ulonglong)(uint)fVar4;
  uVar2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar1);
  uVar3 = PackedFloatingMUL(uVar2,uVar2);
  uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
  uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
  uVar2 = PackedFloatingMUL(uVar2,uVar1);
  FastExitMediaState();
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_obb.cpp
   addr: 00560CE0 */

int __thiscall m3dOBB::CheckEnclSph(m3dOBB *this,m3dSPHERE *param_1)

{
  int iVar1;
  int iVar2;
  m3dV *pmVar3;
  undefined **local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_78 = &m3dSPHERE::_vftable_;
  local_74 = *(undefined4 *)(param_1 + 4);
  local_64 = _DAT_005de634 * ___real_42c80000 + *(float *)(param_1 + 0x14);
  local_70 = *(undefined4 *)(param_1 + 8);
  local_6c = *(undefined4 *)(param_1 + 0xc);
  local_68 = *(undefined4 *)(param_1 + 0x10);
  local_54 = *(float *)(this + 0x14) + *(float *)(this + 8);
  local_60 = *(float *)(this + 8);
  local_50 = *(float *)(this + 0xc) + *(float *)(this + 0x18);
  local_5c = *(float *)(this + 0xc);
  local_58 = *(float *)(this + 0x10);
  local_4c = *(float *)(this + 0x10) + *(float *)(this + 0x1c);
  local_48 = local_54 + *(float *)(this + 0x20);
  local_44 = local_50 + *(float *)(this + 0x24);
  local_40 = local_4c + *(float *)(this + 0x28);
  local_3c = local_60 + *(float *)(this + 0x20);
  local_38 = local_5c + *(float *)(this + 0x24);
  local_34 = local_58 + *(float *)(this + 0x28);
  local_30 = local_60 + *(float *)(this + 0x2c);
  local_2c = local_5c + *(float *)(this + 0x30);
  local_28 = local_58 + *(float *)(this + 0x34);
  local_24 = local_54 + *(float *)(this + 0x2c);
  local_20 = local_50 + *(float *)(this + 0x30);
  local_1c = local_4c + *(float *)(this + 0x34);
  local_18 = local_48 + *(float *)(this + 0x2c);
  local_14 = local_44 + *(float *)(this + 0x30);
  local_10 = local_40 + *(float *)(this + 0x34);
  local_c = local_3c + *(float *)(this + 0x2c);
  iVar2 = 0;
  pmVar3 = (m3dV *)&local_60;
  local_8 = local_38 + *(float *)(this + 0x30);
  local_4 = local_34 + *(float *)(this + 0x34);
  do {
    iVar1 = m3dSPHERE::IsBelongPoint((m3dSPHERE *)&local_78,pmVar3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    pmVar3 = pmVar3 + 0xc;
  } while (iVar2 < 8);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_obb.cpp
   addr: 00560E60 */

void __thiscall m3dOBB::GetCenter(m3dOBB *this,m3dV *param_1)

{
  *(float *)param_1 = *(float *)(this + 0x14) * ___real_3f000000 + *(float *)(this + 8);
  *(float *)(param_1 + 4) = *(float *)(this + 0x18) * ___real_3f000000 + *(float *)(this + 0xc);
  *(float *)(param_1 + 8) = *(float *)(this + 0x1c) * ___real_3f000000 + *(float *)(this + 0x10);
  *(float *)param_1 = *(float *)(this + 0x20) * ___real_3f000000 + *(float *)param_1;
  *(float *)(param_1 + 4) = *(float *)(this + 0x24) * ___real_3f000000 + *(float *)(param_1 + 4);
  *(float *)(param_1 + 8) = *(float *)(this + 0x28) * ___real_3f000000 + *(float *)(param_1 + 8);
  *(float *)param_1 = *(float *)(this + 0x2c) * ___real_3f000000 + *(float *)param_1;
  *(float *)(param_1 + 4) = *(float *)(this + 0x30) * ___real_3f000000 + *(float *)(param_1 + 4);
  *(float *)(param_1 + 8) = *(float *)(this + 0x34) * ___real_3f000000 + *(float *)(param_1 + 8);
  return;
}




/* from: m3d:m3d_obb.cpp
   addr: 00560EF0 */

void __thiscall m3dOBB::GetFace(m3dOBB *this,int param_1,m3dPOLY *param_2,m3dV *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar4 = *(float *)(this + 8) + *(float *)(this + 0x14);
  fVar5 = *(float *)(this + 0xc) + *(float *)(this + 0x18);
  fVar1 = *(float *)(this + 8);
  fVar2 = *(float *)(this + 0xc);
  fVar6 = *(float *)(this + 0x10) + *(float *)(this + 0x1c);
  fVar3 = *(float *)(this + 0x10);
  fVar7 = fVar4 + *(float *)(this + 0x20);
  fVar8 = fVar5 + *(float *)(this + 0x24);
  fVar9 = fVar6 + *(float *)(this + 0x28);
  fVar10 = fVar1 + *(float *)(this + 0x20);
  fVar11 = fVar2 + *(float *)(this + 0x24);
  fVar12 = fVar3 + *(float *)(this + 0x28);
  fVar13 = fVar1 + *(float *)(this + 0x2c);
  fVar14 = fVar2 + *(float *)(this + 0x30);
  fVar15 = fVar3 + *(float *)(this + 0x34);
  fVar16 = fVar4 + *(float *)(this + 0x2c);
  fVar17 = fVar5 + *(float *)(this + 0x30);
  fVar18 = fVar6 + *(float *)(this + 0x34);
  fVar19 = fVar7 + *(float *)(this + 0x2c);
  fVar20 = fVar8 + *(float *)(this + 0x30);
  fVar21 = fVar9 + *(float *)(this + 0x34);
  fVar22 = fVar10 + *(float *)(this + 0x2c);
  fVar23 = fVar11 + *(float *)(this + 0x30);
  fVar24 = fVar12 + *(float *)(this + 0x34);
  switch(param_1) {
  case 0:
    *(undefined4 *)param_2 = 4;
    *(float *)(param_2 + 4) = fVar10;
    *(float *)(param_2 + 8) = fVar11;
    *(float *)(param_2 + 0xc) = fVar12;
    *(float *)(param_2 + 0x10) = fVar22;
    *(float *)(param_2 + 0x14) = fVar23;
    *(float *)(param_2 + 0x18) = fVar24;
    *(float *)(param_2 + 0x1c) = fVar13;
    *(float *)(param_2 + 0x20) = fVar14;
    *(float *)(param_2 + 0x24) = fVar15;
    *(float *)(param_2 + 0x28) = fVar1;
    *(float *)(param_2 + 0x2c) = fVar2;
    *(float *)(param_2 + 0x30) = fVar3;
    return;
  case 1:
    *(float *)(param_2 + 4) = fVar7;
    *(float *)(param_2 + 8) = fVar8;
    *(float *)(param_2 + 0xc) = fVar9;
    *(float *)(param_2 + 0x10) = fVar19;
    *(float *)(param_2 + 0x14) = fVar20;
    *(float *)(param_2 + 0x18) = fVar21;
    *(float *)(param_2 + 0x1c) = fVar22;
    *(float *)(param_2 + 0x20) = fVar23;
    break;
  case 2:
    *(float *)(param_2 + 4) = fVar16;
    *(undefined4 *)param_2 = 4;
    *(float *)(param_2 + 8) = fVar17;
    *(float *)(param_2 + 0xc) = fVar18;
    *(float *)(param_2 + 0x10) = fVar19;
    *(float *)(param_2 + 0x14) = fVar20;
    *(float *)(param_2 + 0x18) = fVar21;
    *(float *)(param_2 + 0x1c) = fVar7;
    *(float *)(param_2 + 0x20) = fVar8;
    *(float *)(param_2 + 0x24) = fVar9;
    *(float *)(param_2 + 0x28) = fVar4;
    *(float *)(param_2 + 0x2c) = fVar5;
    *(float *)(param_2 + 0x30) = fVar6;
    return;
  case 3:
    *(undefined4 *)param_2 = 4;
    *(float *)(param_2 + 4) = fVar13;
    *(float *)(param_2 + 8) = fVar14;
    *(float *)(param_2 + 0xc) = fVar15;
    *(float *)(param_2 + 0x10) = fVar16;
    *(float *)(param_2 + 0x14) = fVar17;
    *(float *)(param_2 + 0x18) = fVar18;
    *(float *)(param_2 + 0x1c) = fVar4;
    *(float *)(param_2 + 0x20) = fVar5;
    *(float *)(param_2 + 0x24) = fVar6;
    *(float *)(param_2 + 0x28) = fVar1;
    *(float *)(param_2 + 0x2c) = fVar2;
    *(float *)(param_2 + 0x30) = fVar3;
    return;
  case 4:
    *(float *)(param_2 + 4) = fVar1;
    *(float *)(param_2 + 8) = fVar2;
    *(float *)(param_2 + 0xc) = fVar3;
    *(float *)(param_2 + 0x10) = fVar4;
    *(float *)(param_2 + 0x14) = fVar5;
    *(float *)(param_2 + 0x18) = fVar6;
    *(float *)(param_2 + 0x1c) = fVar7;
    *(float *)(param_2 + 0x20) = fVar8;
    fVar24 = fVar9;
    break;
  case 5:
    *(float *)(param_2 + 4) = fVar22;
    *(float *)(param_2 + 8) = fVar23;
    *(float *)(param_2 + 0xc) = fVar24;
    *(float *)(param_2 + 0x10) = fVar19;
    *(float *)(param_2 + 0x14) = fVar20;
    *(float *)(param_2 + 0x18) = fVar21;
    *(float *)(param_2 + 0x1c) = fVar16;
    *(float *)(param_2 + 0x20) = fVar17;
    *(float *)(param_2 + 0x24) = fVar18;
    *(float *)(param_2 + 0x28) = fVar13;
    *(float *)(param_2 + 0x2c) = fVar14;
    *(float *)(param_2 + 0x30) = fVar15;
  default:
    *(undefined4 *)param_2 = 4;
    return;
  }
  *(float *)(param_2 + 0x24) = fVar24;
  *(undefined4 *)param_2 = 4;
  *(float *)(param_2 + 0x28) = fVar10;
  *(float *)(param_2 + 0x2c) = fVar11;
  *(float *)(param_2 + 0x30) = fVar12;
  return;
}




/* from: m3d:m3d_obb.cpp
   addr: 00561270 */

void __thiscall m3dOBB::GetVertices(m3dOBB *this,m3dV *param_1)

{
  *(float *)param_1 = *(float *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x10);
  *(float *)(param_1 + 0xc) = *(float *)(this + 8) + *(float *)(this + 0x14);
  *(float *)(param_1 + 0x10) = *(float *)(this + 0xc) + *(float *)(this + 0x18);
  *(float *)(param_1 + 0x14) = *(float *)(this + 0x10) + *(float *)(this + 0x1c);
  *(float *)(param_1 + 0x18) = *(float *)(this + 0x20) + *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x10) + *(float *)(this + 0x24);
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x14) + *(float *)(this + 0x28);
  *(float *)(param_1 + 0x24) = *(float *)(this + 0x20) + *(float *)param_1;
  *(float *)(param_1 + 0x28) = *(float *)(this + 0x24) + *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x2c) = *(float *)(this + 0x28) + *(float *)(param_1 + 8);
  *(float *)(param_1 + 0x30) = *(float *)(this + 0x2c) + *(float *)param_1;
  *(float *)(param_1 + 0x34) = *(float *)(this + 0x30) + *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x38) = *(float *)(this + 0x34) + *(float *)(param_1 + 8);
  *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0xc) + *(float *)(this + 0x2c);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x10) + *(float *)(this + 0x30);
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x14) + *(float *)(this + 0x34);
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x18) + *(float *)(this + 0x2c);
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x1c) + *(float *)(this + 0x30);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x20) + *(float *)(this + 0x34);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x24) + *(float *)(this + 0x2c);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x28) + *(float *)(this + 0x30);
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x2c) + *(float *)(this + 0x34);
  return;
}




/* from: m3d:m3d_obb.cpp
   addr: 00561370 */

void __thiscall m3dOBB::Expand(m3dOBB *this,float param_1)

{
  m3dOBB *pmVar1;
  m3dOBB *pmVar2;
  m3dOBB *pmVar3;
  float fVar4;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pmVar1 = this + 0x14;
  local_24 = *(float *)pmVar1;
  local_20 = *(float *)(this + 0x18);
  local_1c = *(float *)(this + 0x1c);
  m3dNormalize((m3dV *)&local_24);
  pmVar2 = this + 0x20;
  local_18 = *(float *)pmVar2;
  local_14 = *(float *)(this + 0x24);
  local_10 = *(float *)(this + 0x28);
  m3dNormalize((m3dV *)&local_18);
  pmVar3 = this + 0x2c;
  local_c = *(float *)pmVar3;
  local_8 = *(float *)(this + 0x30);
  local_4 = *(float *)(this + 0x34);
  m3dNormalize((m3dV *)&local_c);
  fVar4 = -param_1;
  *(float *)(this + 8) = local_24 * fVar4 + *(float *)(this + 8);
  *(float *)(this + 0xc) = local_20 * fVar4 + *(float *)(this + 0xc);
  *(float *)(this + 0x10) = local_1c * fVar4 + *(float *)(this + 0x10);
  *(float *)(this + 8) = local_18 * fVar4 + *(float *)(this + 8);
  *(float *)(this + 0xc) = local_14 * fVar4 + *(float *)(this + 0xc);
  *(float *)(this + 0x10) = local_10 * fVar4 + *(float *)(this + 0x10);
  *(float *)(this + 8) = local_c * fVar4 + *(float *)(this + 8);
  *(float *)(this + 0xc) = local_8 * fVar4 + *(float *)(this + 0xc);
  *(float *)(this + 0x10) = local_4 * fVar4 + *(float *)(this + 0x10);
  fVar4 = param_1 + param_1;
  *(float *)pmVar1 = local_24 * fVar4 + *(float *)pmVar1;
  *(float *)(this + 0x18) = local_20 * fVar4 + *(float *)(this + 0x18);
  *(float *)(this + 0x1c) = local_1c * fVar4 + *(float *)(this + 0x1c);
  *(float *)pmVar2 = local_18 * fVar4 + *(float *)pmVar2;
  *(float *)(this + 0x24) = local_14 * fVar4 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = local_10 * fVar4 + *(float *)(this + 0x28);
  *(float *)pmVar3 = local_c * fVar4 + *(float *)pmVar3;
  *(float *)(this + 0x30) = local_8 * fVar4 + *(float *)(this + 0x30);
  *(float *)(this + 0x34) = local_4 * fVar4 + *(float *)(this + 0x34);
  return;
}

