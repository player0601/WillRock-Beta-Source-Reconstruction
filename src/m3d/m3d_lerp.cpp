
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_lerp.cpp
   addr: 0055A140 */

int __fastcall m3dClampVector_L(m3dV *param_1,m3dV *param_2,float param_3,m3dV *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  undefined8 in_MM1;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_10;
  
  fVar1 = *(float *)param_2 - *(float *)param_1;
  fVar2 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_10 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if (m3dSimdType == 0) {
    local_10 = local_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)local_10),ZEXT416((uint)local_10));
    fVar9 = auVar10._0_4_;
    local_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_10 * fVar9 * fVar9) * local_10;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar6 = (ulonglong)(uint)local_10;
    uVar7 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar6);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar6);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    uVar7 = PackedFloatingMUL(uVar7,uVar6);
    local_10 = (float)uVar7;
    FastExitMediaState();
  }
  else {
    local_10 = SQRT(local_10);
  }
  fVar9 = local_10;
  local_10 = (float)(uint)(ABS(local_10) < _DAT_005de5e0 * ___real_42c80000);
  if ((float)(int)local_10 == ___real_00000000) {
    local_10 = param_3;
    fVar4 = ___real_00000000;
    if (param_3 < ___real_00000000) {
      local_10 = 0.0;
      fVar4 = param_3;
    }
    if ((fVar4 <= fVar9) && (fVar4 = fVar9, local_10 < fVar9)) {
      fVar4 = local_10;
    }
    fVar5 = fVar4 / fVar9;
    *(float *)param_4 = fVar1 * fVar5 + *(float *)param_1;
    *(float *)(param_4 + 4) = fVar2 * fVar5 + *(float *)(param_1 + 4);
    *(float *)(param_4 + 8) = fVar3 * fVar5 + *(float *)(param_1 + 8);
    if (fVar4 < fVar9 - _DAT_005de5e0 * ___real_42c80000) {
      return 0;
    }
  }
  else {
    *(undefined4 *)param_4 = *(undefined4 *)param_1;
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_1 + 8);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_lerp.cpp
   addr: 0055A320 */

int __fastcall m3dClampVector_L(m3dV *param_1,m3dV *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_1c;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = *(float *)param_2 - *(float *)param_1;
  fVar2 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_1c = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
  if (m3dSimdType == 0) {
    local_1c = local_1c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_1c),ZEXT416((uint)local_1c));
    fVar10 = auVar11._0_4_;
    local_1c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_1c * fVar10 * fVar10) * local_1c
    ;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)local_1c;
    uVar8 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    local_1c = (float)uVar8;
    FastExitMediaState();
  }
  else {
    local_1c = SQRT(local_1c);
  }
  fVar10 = local_1c;
  local_1c = (float)(uint)(ABS(local_1c) < _DAT_005de5e0 * ___real_42c80000);
  if ((float)(int)local_1c == ___real_00000000) {
    local_1c = param_3;
    fVar4 = ___real_00000000;
    if (param_3 < ___real_00000000) {
      local_1c = 0.0;
      fVar4 = param_3;
    }
    if ((fVar4 <= fVar10) && (fVar4 = fVar10, local_1c < fVar10)) {
      fVar4 = local_1c;
    }
    fVar5 = fVar4 / fVar10;
    local_c = fVar1 * fVar5 + *(float *)param_1;
    local_8 = fVar2 * fVar5 + *(float *)(param_1 + 4);
    local_4 = fVar5 * fVar3 + *(float *)(param_1 + 8);
    if (fVar4 < fVar10 - _DAT_005de5e0 * ___real_42c80000) {
      iVar6 = 0;
      goto LAB_0055a454;
    }
  }
  else {
    local_c = *(float *)param_1;
    local_8 = *(float *)(param_1 + 4);
    local_4 = *(float *)(param_1 + 8);
  }
  iVar6 = 1;
LAB_0055a454:
  *(float *)param_2 = local_c;
  *(float *)(param_2 + 4) = local_8;
  *(float *)(param_2 + 8) = local_4;
  return iVar6;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_lerp.cpp
   addr: 0055A510 */

int __fastcall
m3dClampVector_A(m3dV *param_1,m3dV *param_2,float param_3,m3dV *param_4,m3dV *param_5,int param_6)

{
  int iVar1;
  m3dV *pmVar2;
  m3dV *pmVar3;
  m3dV *pmVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_MM1;
  undefined8 in_MM2;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  m3dMATR local_114 [64];
  float local_d4 [4];
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  float local_94;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  m3dV *local_54;
  m3dV *local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined8 local_40;
  float local_38;
  m3dV *local_34;
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
  float *local_8;
  
  pmVar3 = param_4;
  local_14 = *(float *)param_1;
  local_10 = *(float *)(param_1 + 4);
  local_2c = *(float *)param_2;
  local_c = *(float *)(param_1 + 8);
  local_28 = *(float *)(param_2 + 4);
  local_24 = *(float *)(param_2 + 8);
  local_54 = param_2;
  local_50 = param_1;
  m3dNormalize((m3dV *)&local_14);
  m3dNormalize((m3dV *)&local_2c);
  local_20 = local_24 * local_10 - local_28 * local_c;
  local_1c = local_c * local_2c - local_24 * local_14;
  local_18 = local_28 * local_14 - local_10 * local_2c;
  local_30 = m3dAngleVector((m3dV *)&local_14,(m3dV *)&local_2c);
  if (___real_3dcccccd <= local_30) {
    fVar18 = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
    if (m3dSimdType == 0) {
      auVar19 = ZEXT416((uint)(fVar18 + `float___cdecl_m3dSqrt(float)'::__l2::very_small));
      rsqrtss(auVar19,auVar19);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (ulonglong)(uint)fVar18;
      uVar10 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar9);
      uVar11 = PackedFloatingMUL(uVar10,uVar10);
      uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
      uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
      PackedFloatingMUL(uVar10,uVar9);
      FastExitMediaState();
    }
    local_8 = (float *)param_3;
    fVar18 = ___real_00000000;
    if (param_3 < ___real_00000000) {
      local_8 = (float *)0x0;
      fVar18 = param_3;
    }
    param_3 = fVar18;
    if ((param_3 <= local_30) && (param_3 = local_30, (float)local_8 < local_30)) {
      param_3 = (float)local_8;
    }
    m3dNormalize((m3dV *)&local_20);
    local_4c = local_18 * local_10 - local_1c * local_c;
    local_48 = local_c * local_20 - local_18 * local_14;
    local_44 = local_1c * local_14 - local_10 * local_20;
    m3dMATR::MakeWCS2LCS(local_114,&m3dVZero,(m3dV *)&local_14,(m3dV *)&local_20,(m3dV *)&local_4c);
    m3dMATR::MakeRotY((m3dMATR *)local_d4,param_3);
    local_34 = (m3dV *)local_d4;
    local_8 = (float *)&local_40;
    if (m3dSimdType == 0) {
      if (((uint)local_d4 & 0xf) == 0) {
        fVar18 = _m3dVUnitX * local_d4[0] + DAT_005f9988 * local_c4 + DAT_005f998c * local_b4;
        fVar16 = _m3dVUnitX * local_d4[1] + DAT_005f9988 * fStack_c0 + DAT_005f998c * fStack_b0;
        local_38 = _m3dVUnitX * local_d4[2] + DAT_005f9988 * fStack_bc + DAT_005f998c * fStack_ac;
      }
      else {
        fVar18 = _m3dVUnitX * local_d4[0] + DAT_005f9988 * local_c4 + DAT_005f998c * local_b4;
        fVar16 = _m3dVUnitX * local_d4[1] + DAT_005f9988 * fStack_c0 + DAT_005f998c * fStack_b0;
        local_38 = _m3dVUnitX * local_d4[2] + DAT_005f9988 * fStack_bc + DAT_005f998c * fStack_ac;
      }
      local_40 = CONCAT44(fVar16,fVar18);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar10 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),CONCAT44(local_d4[1],local_d4[0]));
      uVar11 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),CONCAT44(fStack_c0,local_c4));
      uVar12 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),CONCAT44(fStack_b0,local_b4));
      uVar13 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),CONCAT44(local_d4[3],local_d4[2]));
      uVar11 = PackedFloatingADD(uVar11,uVar12);
      uVar12 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),CONCAT44(uStack_b8,fStack_bc));
      uVar14 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),CONCAT44(uStack_a8,fStack_ac));
      local_40 = PackedFloatingADD(uVar10,uVar11);
      uVar10 = PackedFloatingADD(uVar12,uVar14);
      uVar10 = PackedFloatingADD(uVar13,uVar10);
      local_38 = (float)uVar10;
      FastExitMediaState();
    }
    else {
      iVar7 = 0;
      do {
        *(undefined4 *)((int)&local_40 + iVar7) = 0;
        pmVar4 = &m3dVUnitX;
        pfVar6 = (float *)((int)local_d4 + iVar7);
        fVar18 = ___real_00000000;
        do {
          fVar16 = *(float *)pmVar4;
          fVar15 = *pfVar6;
          pmVar4 = pmVar4 + 4;
          pfVar6 = pfVar6 + 4;
          fVar18 = fVar16 * fVar15 + fVar18;
        } while ((int)pmVar4 < 0x5f9990);
        *(float *)((int)&local_40 + iVar7) = fVar18;
        iVar7 = iVar7 + 4;
      } while (iVar7 < 0xc);
    }
    m3dMATR::Invert(local_114,(m3dMATR *)&local_94);
    local_8 = &local_94;
    local_34 = (m3dV *)&local_40;
    fVar18 = (float)local_40;
    fVar16 = (float)((ulonglong)local_40 >> 0x20);
    uVar10 = extraout_MM1;
    if (m3dSimdType == 0) {
      if (((uint)&local_94 & 0xf) == 0) {
        fVar15 = fVar18 * local_94 + fVar16 * local_84 + local_38 * local_74;
        fVar17 = fVar18 * fStack_90 + fVar16 * fStack_80 + local_38 * fStack_70;
        fVar18 = fVar18 * fStack_8c + fVar16 * fStack_7c + local_38 * fStack_6c;
      }
      else {
        fVar15 = fVar18 * local_94 + fVar16 * local_84 + local_38 * local_74;
        fVar17 = fVar18 * fStack_90 + fVar16 * fStack_80 + local_38 * fStack_70;
        fVar18 = fVar18 * fStack_8c + fVar16 * fStack_7c + local_38 * fStack_6c;
      }
      *(ulonglong *)param_4 = CONCAT44(fVar17,fVar15);
      *(float *)(param_4 + 8) = fVar18;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar11 = PackedFloatingMUL(CONCAT44(fVar18,fVar18),CONCAT44(fStack_90,local_94));
      uVar10 = PackedFloatingMUL(CONCAT44(fVar16,fVar16),CONCAT44(fStack_80,local_84));
      uVar12 = PackedFloatingMUL(CONCAT44(local_38,local_38),CONCAT44(fStack_70,local_74));
      uVar13 = PackedFloatingMUL(CONCAT44(fVar18,fVar18),CONCAT44(uStack_88,fStack_8c));
      uVar10 = PackedFloatingADD(uVar10,uVar12);
      uVar12 = PackedFloatingMUL(CONCAT44(fVar16,fVar16),CONCAT44(uStack_78,fStack_7c));
      uVar14 = PackedFloatingMUL(CONCAT44(local_38,local_38),CONCAT44(uStack_68,fStack_6c));
      uVar11 = PackedFloatingADD(uVar11,uVar10);
      uVar12 = PackedFloatingADD(uVar12,uVar14);
      *(undefined8 *)param_4 = uVar11;
      uVar11 = PackedFloatingADD(uVar13,uVar12);
      *(int *)(param_4 + 8) = (int)uVar11;
      FastExitMediaState();
    }
    else {
      iVar8 = (int)&local_94 - (int)param_4;
      iVar7 = 3;
      do {
        fVar18 = ___real_00000000;
        *(float *)param_4 = 0.0;
        iVar5 = 0;
        pmVar4 = param_4 + iVar8;
        do {
          iVar1 = iVar5 * 4;
          fVar16 = *(float *)pmVar4;
          iVar5 = iVar5 + 1;
          pmVar4 = pmVar4 + 0x10;
          fVar18 = *(float *)((int)&local_40 + iVar1) * fVar16 + fVar18;
        } while (iVar5 < 3);
        *(float *)param_4 = fVar18;
        param_4 = param_4 + 4;
        iVar7 = iVar7 + -1;
        param_1 = local_50;
        param_2 = local_54;
      } while (iVar7 != 0);
    }
    fVar18 = *(float *)(param_2 + 8) * *(float *)(param_2 + 8) +
             *(float *)param_2 * *(float *)param_2 +
             *(float *)(param_2 + 4) * *(float *)(param_2 + 4);
    if (m3dSimdType == 0) {
      fVar18 = fVar18 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar19 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
      fVar16 = auVar19._0_4_;
      param_4 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar18 * fVar16 * fVar16) *
                        fVar18);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (ulonglong)(uint)fVar18;
      uVar10 = PackedFloatingReciprocalSQRAprox(uVar10,uVar9);
      uVar11 = PackedFloatingMUL(uVar10,uVar10);
      uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
      uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
      uVar10 = PackedFloatingMUL(uVar10,uVar9);
      param_4 = (m3dV *)uVar10;
      FastExitMediaState();
    }
    else {
      param_4 = (m3dV *)SQRT(fVar18);
    }
    pmVar4 = param_4;
    local_34 = param_4;
    fVar18 = *(float *)param_1 * *(float *)param_1 +
             *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
             *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
    if (m3dSimdType == 0) {
      fVar18 = fVar18 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar19 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
      fVar16 = auVar19._0_4_;
      param_4 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar18 * fVar16 * fVar16) *
                        fVar18);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (ulonglong)(uint)fVar18;
      uVar10 = PackedFloatingReciprocalSQRAprox(uVar10,uVar9);
      uVar11 = PackedFloatingMUL(uVar10,uVar10);
      uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
      uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
      uVar10 = PackedFloatingMUL(uVar10,uVar9);
      param_4 = (m3dV *)uVar10;
      FastExitMediaState();
    }
    else {
      param_4 = (m3dV *)SQRT(fVar18);
    }
    local_50 = (m3dV *)local_30;
    local_8 = (float *)0x0;
    local_54 = pmVar4;
    pmVar2 = param_4;
    if (local_30 < ___real_00000000) {
      local_50 = (m3dV *)0x0;
      local_8 = (float *)local_30;
      pmVar2 = pmVar4;
      pmVar4 = param_4;
    }
    fVar18 = ((param_3 - (float)local_8) * ((float)pmVar4 - (float)pmVar2)) /
             ((float)local_50 - (float)local_8) + (float)pmVar2;
    *(float *)pmVar3 = fVar18 * *(float *)pmVar3;
    *(float *)(pmVar3 + 4) = fVar18 * *(float *)(pmVar3 + 4);
    *(float *)(pmVar3 + 8) = fVar18 * *(float *)(pmVar3 + 8);
    m3dAngleVector(param_1,pmVar3);
    if (param_3 < local_30 - _DAT_005de5e0 * ___real_42c80000) {
      return 0;
    }
  }
  else {
    *(undefined4 *)param_4 = *(undefined4 *)param_2;
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_2 + 8);
  }
  return 1;
}




/* from: m3d:m3d_lerp.cpp
   addr: 0055ABD0 */

void __fastcall
m3dLerpVector_L(m3dV *param_1,m3dV *param_2,float param_3,float param_4,float param_5,m3dV *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  m3dV *pmVar5;
  float local_10;
  float local_c;
  float local_8;
  
  pmVar5 = param_6;
  local_8 = param_4;
  local_10 = param_3;
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)param_1;
  if (param_4 < param_3) {
    local_10 = param_4;
    local_8 = param_3;
    fVar2 = fVar1;
    fVar1 = *(float *)param_1;
  }
  local_c = param_4;
  param_6 = (m3dV *)param_3;
  *(float *)pmVar5 = ((param_5 - local_10) * (fVar1 - fVar2)) / (local_8 - local_10) + fVar2;
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_1 + 4);
  if (param_4 < param_3) {
    param_6 = (m3dV *)param_4;
    local_c = param_3;
    fVar2 = fVar1;
    fVar1 = *(float *)(param_1 + 4);
  }
  fVar4 = param_5 - (float)param_6;
  fVar3 = local_c - (float)param_6;
  local_c = param_4;
  param_6 = (m3dV *)param_3;
  *(float *)(pmVar5 + 4) = (fVar4 * (fVar1 - fVar2)) / fVar3 + fVar2;
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_1 + 8);
  if (param_4 < param_3) {
    param_6 = (m3dV *)param_4;
    local_c = param_3;
    fVar2 = fVar1;
    fVar1 = *(float *)(param_1 + 8);
  }
  *(float *)(pmVar5 + 8) =
       ((param_5 - (float)param_6) * (fVar1 - fVar2)) / (local_c - (float)param_6) + fVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_lerp.cpp
   addr: 0055AD20 */

float __fastcall
m3dLerpRectCorners(m2dV *param_1,m2dV *param_2,m2dV *param_3,float param_4,float param_5,
                  float param_6,float param_7)

{
  m2dV *pmVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  m2dV *pmVar6;
  m2dV *pmVar7;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float fVar3;
  
  pmVar7 = param_3;
  local_c = *(float *)param_2;
  fVar4 = *(float *)param_1;
  local_10 = (float)(uint)(ABS(local_c - fVar4) < _DAT_005de5e0);
  if ((float)(int)local_10 == ___real_00000000) {
    local_10 = param_6;
    fVar5 = param_4;
    fVar2 = fVar4;
    if (local_c < fVar4) {
      local_10 = param_4;
      fVar5 = param_6;
      fVar2 = local_c;
      local_c = fVar4;
    }
    fVar5 = fVar5 + ((*(float *)param_3 - fVar2) * (local_10 - fVar5)) / (local_c - fVar2);
  }
  else {
    fVar5 = (param_4 + param_6) * ___real_3f000000;
  }
  local_10 = *(float *)param_2;
  fVar4 = *(float *)param_1;
  local_c = (float)(uint)(ABS(local_10 - fVar4) < _DAT_005de5e0);
  if ((float)(int)local_c == ___real_00000000) {
    local_c = param_7;
    fVar2 = param_5;
    fVar3 = fVar4;
    if (local_10 < fVar4) {
      local_c = param_5;
      fVar2 = param_7;
      fVar3 = local_10;
      local_10 = fVar4;
    }
    fVar2 = fVar2 + ((*(float *)param_3 - fVar3) * (local_c - fVar2)) / (local_10 - fVar3);
  }
  else {
    fVar2 = (param_5 + param_7) * ___real_3f000000;
  }
  local_8 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 4);
  local_c = (float)(uint)(ABS(local_8 - fVar4) < _DAT_005de5e0);
  if ((float)(int)local_c == ___real_00000000) {
    local_14 = fVar5;
    local_10 = fVar4;
    local_c = fVar2;
    if (local_8 < fVar4) {
      local_14 = fVar2;
      local_10 = local_8;
      local_c = fVar5;
      local_8 = fVar4;
    }
    local_14 = ((*(float *)(param_3 + 4) - local_10) * (local_c - local_14)) / (local_8 - local_10)
               + local_14;
  }
  else {
    local_14 = (fVar2 + fVar5) * ___real_3f000000;
  }
  local_c = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 4);
  local_8 = (float)(uint)(ABS(local_c - fVar4) < _DAT_005de5e0);
  if ((float)(int)local_8 == ___real_00000000) {
    local_8 = param_5;
    fVar5 = fVar4;
    if (local_c < fVar4) {
      local_8 = param_4;
      param_4 = param_5;
      fVar5 = local_c;
      local_c = fVar4;
    }
    fVar4 = param_4 + ((*(float *)(param_3 + 4) - fVar5) * (local_8 - param_4)) / (local_c - fVar5);
  }
  else {
    fVar4 = (param_4 + param_5) * ___real_3f000000;
  }
  local_8 = *(float *)(param_2 + 4);
  pmVar1 = param_3 + 4;
  fVar5 = *(float *)(param_1 + 4);
  param_3 = (m2dV *)(uint)(ABS(local_8 - fVar5) < _DAT_005de5e0);
  if ((float)(int)param_3 == ___real_00000000) {
    param_3 = (m2dV *)param_7;
    fVar2 = fVar5;
    if (local_8 < fVar5) {
      param_3 = (m2dV *)param_6;
      param_6 = param_7;
      fVar2 = local_8;
      local_8 = fVar5;
    }
    fVar5 = param_6 + ((*(float *)pmVar1 - fVar2) * ((float)param_3 - param_6)) / (local_8 - fVar2);
  }
  else {
    fVar5 = (param_6 + param_7) * ___real_3f000000;
  }
  pmVar6 = *(m2dV **)param_1;
  pmVar1 = *(m2dV **)param_2;
  param_4 = (float)(uint)(ABS((float)pmVar1 - (float)pmVar6) < _DAT_005de5e0);
  if ((float)(int)param_4 != ___real_00000000) {
    return ((fVar5 + fVar4) * ___real_3f000000 + local_14) * ___real_3f000000;
  }
  param_3 = pmVar1;
  param_4 = (float)pmVar6;
  param_6 = fVar5;
  param_7 = fVar4;
  if ((float)pmVar1 < (float)pmVar6) {
    param_3 = pmVar6;
    param_4 = (float)pmVar1;
    param_6 = fVar4;
    param_7 = fVar5;
  }
  return (((*(float *)pmVar7 - param_4) * (param_6 - param_7)) / ((float)param_3 - param_4) +
          param_7 + local_14) * ___real_3f000000;
}

