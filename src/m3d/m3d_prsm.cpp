
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_prsm.cpp
   addr: 0055D750 */

int __thiscall m3dPRISM::IsBelongPoint(m3dPRISM *this,m3dV *param_1)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(float *)(this + 0xac) - ___real_3a83126f <= *(float *)(param_1 + 4)) &&
     (*(float *)(param_1 + 4) <= *(float *)(this + 0xb0) + ___real_3a83126f)) {
    local_8 = *(undefined4 *)param_1;
    local_4 = *(undefined4 *)(param_1 + 8);
    iVar1 = m2dIsBelongPointPoly_A((m2dPOLY *)(this + 8),(m2dV *)&local_8,0.2);
    return iVar1;
  }
  return 0;
}




/* from: m3d:m3d_prsm.cpp
   addr: 0055D7C0 */

int __thiscall
m3dPRISM::IsIsectCyl(m3dPRISM *this,m3dV *param_1,m3dV *param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  m3dPOLY *pmVar3;
  m3dPOLY amStack_5bc [1468];
  
  iVar1 = (**(code **)(*(int *)this + 4))(param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
    pmVar3 = amStack_5bc;
    do {
      (**(code **)(*(int *)this + 0x28))(iVar1,pmVar3,0);
      iVar1 = iVar1 + 1;
      pmVar3 = pmVar3 + 0xf4;
    } while (iVar1 < 6);
    iVar1 = 0;
    pmVar3 = amStack_5bc;
    while( true ) {
      iVar2 = m3dDistLSegPoly(param_1,(m3dV *)&stack0xfffffa38,pmVar3,(m3dV *)0x0,(m3dV *)0x0,
                              (m3dV *)0x0,&param_3,(int *)0x0,param_3);
      if (iVar2 != 0) break;
      iVar1 = iVar1 + 1;
      pmVar3 = pmVar3 + 0xf4;
      if (5 < iVar1) {
        return 0;
      }
    }
  }
  return 1;
}




/* from: m3d:m3d_prsm.cpp
   addr: 0055D890 */

int __thiscall
m3dPRISM::IsectRay(m3dPRISM *this,m3dV *param_1,m3dV *param_2,float param_3,m3dV *param_4,
                  float *param_5,int *param_6)

{
  int iVar1;
  m3dPOLY *pmVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  m3dPOLY amStack_5bc [1468];
  
  iVar1 = (**(code **)(*(int *)this + 4))(param_1);
  if (iVar1 != 0) {
    if (param_3 != 0.0) {
      *(undefined4 *)param_3 = *(undefined4 *)param_1;
      *(undefined4 *)((int)param_3 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)((int)param_3 + 8) = *(undefined4 *)(param_1 + 8);
    }
    if (param_4 != (m3dV *)0x0) {
      *(undefined4 *)param_4 = 0;
    }
    return 2;
  }
  iVar1 = 0;
  pmVar2 = amStack_5bc;
  do {
    (**(code **)(*(int *)this + 0x28))(iVar1,pmVar2,0);
    iVar1 = iVar1 + 1;
    pmVar2 = pmVar2 + 0xf4;
  } while (iVar1 < 6);
  fVar3 = 0.0;
  pmVar2 = amStack_5bc;
  do {
    iVar1 = m3dIsectRayPlane(param_1,param_1,pmVar2,(m3dV *)&fStack_5c8,(m3dV *)0x0,(float *)0x0);
    if (iVar1 != 0) {
      iVar1 = m3dIsBelongPointPoly_A(pmVar2,(m3dV *)&fStack_5c8,(m3dV *)0x0,DAT_005de62c);
      if (iVar1 != 0) {
        if (param_3 != 0.0) {
          *(float *)param_3 = fStack_5c8;
          *(float *)((int)param_3 + 4) = fStack_5c4;
          *(float *)((int)param_3 + 8) = fStack_5c0;
          fVar7 = (fStack_5c8 - *(float *)param_1) * (fStack_5c8 - *(float *)param_1) +
                  (fStack_5c4 - *(float *)(param_1 + 4)) * (fStack_5c4 - *(float *)(param_1 + 4)) +
                  (fStack_5c0 - *(float *)(param_1 + 8)) * (fStack_5c0 - *(float *)(param_1 + 8));
          if (m3dSimdType == 0) {
            fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
            auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
            fVar8 = auVar9._0_4_;
            fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar4 = (ulonglong)(uint)fVar7;
            uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
            uVar6 = PackedFloatingMUL(uVar5,uVar5);
            uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
            uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
            uVar5 = PackedFloatingMUL(uVar5,uVar4);
            fVar7 = (float)uVar5;
            FastExitMediaState();
          }
          else {
            fVar7 = SQRT(fVar7);
          }
          *(float *)param_4 = fVar7;
          *param_5 = fVar3;
        }
        return 1;
      }
    }
    fVar3 = (float)((int)fVar3 + 1);
    pmVar2 = pmVar2 + 0xf4;
  } while ((int)fVar3 < 6);
  return 0;
}




/* from: m3d:m3d_prsm.cpp
   addr: 0055DA70 */

int __thiscall
m3dPRISM::DistPoint(m3dPRISM *this,m3dV *param_1,float param_2,m3dV *param_3,float *param_4,
                   int *param_5)

{
  bool bVar1;
  int iVar2;
  m3dPOLY *pmVar3;
  undefined4 uVar4;
  float fVar5;
  m3dV *unaff_retaddr;
  m3dV *pmStack_5e8;
  float fStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  m3dV amStack_5c8 [12];
  m3dPOLY amStack_5bc [1468];
  
  iVar2 = (**(code **)(*(int *)this + 4))(param_1);
  if (iVar2 != 0) {
    return 2;
  }
  iVar2 = 0;
  pmVar3 = amStack_5bc;
  do {
    (**(code **)(*(int *)this + 0x28))(iVar2,pmVar3,0);
    iVar2 = iVar2 + 1;
    pmVar3 = pmVar3 + 0xf4;
  } while (iVar2 < 6);
  bVar1 = false;
  fVar5 = 0.0;
  pmVar3 = amStack_5bc;
  uVar4 = uStack_5e0;
  do {
    m3dGetPolyNormal(pmVar3,amStack_5c8);
    iVar2 = m3dDistPointPoly(unaff_retaddr,pmVar3,amStack_5c8,0,(m3dV *)&uStack_5d4,
                             (float *)&pmStack_5e8,DAT_005de630);
    if ((iVar2 != 0) && ((float)pmStack_5e8 < (float)param_1)) {
      uStack_5dc = uStack_5d0;
      uStack_5d8 = uStack_5cc;
      bVar1 = true;
      uVar4 = uStack_5d4;
      param_1 = pmStack_5e8;
      fStack_5e4 = fVar5;
    }
    fVar5 = (float)((int)fVar5 + 1);
    pmVar3 = pmVar3 + 0xf4;
  } while ((int)fVar5 < 6);
  if (!bVar1) {
    return 0;
  }
  if (param_3 != (m3dV *)0x0) {
    *(m3dV **)param_3 = param_1;
  }
  if (param_2 != 0.0) {
    *(undefined4 *)param_2 = uVar4;
    *(undefined4 *)((int)param_2 + 4) = uStack_5dc;
    *(undefined4 *)((int)param_2 + 8) = uStack_5d8;
  }
  if (param_4 != (float *)0x0) {
    *param_4 = fStack_5e4;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_prsm.cpp
   addr: 0055DBB0 */

int __thiscall m3dPRISM::Check(m3dPRISM *this)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_38;
  uint local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = m2dIsPolyConvexCCW((m2dPOLY *)(this + 8));
  if (iVar1 == 0) {
    return 0;
  }
  if (*(float *)(this + 0xb0) - DAT_005de62c < *(float *)(this + 0xac)) {
    return 0;
  }
  local_8 = *(float *)(this + 0x14) - *(float *)(this + 0xc);
  local_4 = *(float *)(this + 0x18) - *(float *)(this + 0x10);
  local_20 = *(float *)(this + 0x1c) - *(float *)(this + 0x14);
  local_1c = *(float *)(this + 0x20) - *(float *)(this + 0x18);
  local_18 = *(float *)(this + 0x24) - *(float *)(this + 0x1c);
  local_14 = *(float *)(this + 0x28) - *(float *)(this + 0x20);
  local_10 = *(float *)(this + 0xc) - *(float *)(this + 0x24);
  local_c = *(float *)(this + 0x10) - *(float *)(this + 0x28);
  fVar6 = local_8 * local_8 + local_4 * local_4;
  uVar3 = extraout_MM1;
  if (m3dSimdType == 0) {
    local_38 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
    fVar9 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar9 * fVar9) * local_38;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar6;
    uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar6);
  }
  fVar8 = local_38;
  fVar9 = local_18 * local_18 + local_14 * local_14;
  if (m3dSimdType == 0) {
    local_38 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
    fVar10 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar10 * fVar10) * local_38
    ;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar9;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar9);
  }
  local_28 = (uint)(ABS(fVar8 - local_38) < ___real_3ba3d70a);
  if ((float)local_28 == ___real_00000000) {
    return 0;
  }
  fVar8 = local_20 * local_20 + local_1c * local_1c;
  if (m3dSimdType == 0) {
    local_38 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
    fVar10 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar10 * fVar10) * local_38
    ;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar8;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar8);
  }
  fVar7 = local_38;
  fVar10 = local_10 * local_10 + local_c * local_c;
  if (m3dSimdType == 0) {
    local_38 = fVar10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
    fVar5 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar5 * fVar5) * local_38;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar10;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar10);
  }
  local_38 = (float)(uint)(ABS(fVar7 - local_38) < ___real_3ba3d70a);
  if ((float)(int)local_38 == ___real_00000000) {
    return 0;
  }
  if (m3dSimdType == 0) {
    local_38 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
    fVar7 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar7 * fVar7) * local_38;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar6;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar6);
  }
  if (local_38 < DAT_005de62c * ___real_41200000) {
    return 0;
  }
  if (m3dSimdType == 0) {
    fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar6;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar6);
  }
  if (DAT_005de62c <= ABS(local_38)) {
    local_8 = local_8 * (___real_3f800000 / local_38);
    local_4 = local_4 * (___real_3f800000 / local_38);
  }
  if (m3dSimdType == 0) {
    local_38 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
    fVar6 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar6 * fVar6) * local_38;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar8;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar8);
  }
  if (local_38 < DAT_005de62c * ___real_41200000) {
    return 0;
  }
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar6 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar6 * fVar6) * fVar8;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar8;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar8);
  }
  if (DAT_005de62c <= ABS(local_38)) {
    local_20 = local_20 * (___real_3f800000 / local_38);
    local_1c = local_1c * (___real_3f800000 / local_38);
  }
  if (m3dSimdType == 0) {
    local_38 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
    fVar6 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar6 * fVar6) * local_38;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar9;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar9);
  }
  if (local_38 < DAT_005de62c * ___real_41200000) {
    return 0;
  }
  if (m3dSimdType == 0) {
    fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar6 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar6 * fVar6) * fVar9;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar9;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar9);
  }
  if (DAT_005de62c <= ABS(local_38)) {
    local_18 = local_18 * (___real_3f800000 / local_38);
    local_14 = local_14 * (___real_3f800000 / local_38);
  }
  if (m3dSimdType == 0) {
    local_38 = fVar10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)local_38),ZEXT416((uint)local_38));
    fVar6 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_38 * fVar6 * fVar6) * local_38;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar10;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar10);
  }
  if (local_38 < DAT_005de62c * ___real_41200000) {
    return 0;
  }
  if (m3dSimdType == 0) {
    fVar10 = fVar10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar6 = auVar11._0_4_;
    local_38 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar10 * fVar6 * fVar6) * fVar10;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar10;
    uVar3 = PackedFloatingReciprocalSQRAprox(uVar3,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_38 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_38 = SQRT(fVar10);
  }
  if (DAT_005de62c <= ABS(local_38)) {
    local_10 = local_10 * (___real_3f800000 / local_38);
    local_c = local_c * (___real_3f800000 / local_38);
  }
  fVar6 = DAT_005de62c * ___real_447a0000;
  local_28 = (uint)(ABS(local_20 * local_8 + local_1c * local_4) < fVar6);
  if ((float)local_28 == ___real_00000000) {
    return 0;
  }
  local_28 = (uint)(ABS(local_18 * local_20 + local_14 * local_1c) < fVar6);
  if ((float)local_28 == ___real_00000000) {
    return 0;
  }
  local_28 = (uint)(ABS(local_10 * local_18 + local_c * local_14) < fVar6);
  if ((float)local_28 == ___real_00000000) {
    return 0;
  }
  local_28 = (uint)(ABS(local_10 * local_8 + local_c * local_4) < fVar6);
  if ((float)local_28 == ___real_00000000) {
    return 0;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_prsm.cpp
   addr: 0055E6B0 */

void __thiscall m3dPRISM::CalcEnclSph(m3dPRISM *this,m3dSPHERE *param_1)

{
  float fVar1;
  float unaff_ESI;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar5 = *(float *)(this + 0xc);
  fVar6 = *(float *)(this + 0xac);
  (**(code **)(*(int *)this + 0x24))(param_1 + 8);
  fVar1 = unaff_ESI - *(float *)(param_1 + 8);
  fVar5 = fVar1 * fVar1 +
          (fVar5 - *(float *)(param_1 + 0xc)) * (fVar5 - *(float *)(param_1 + 0xc)) +
          (fVar6 - *(float *)(param_1 + 0x10)) * (fVar6 - *(float *)(param_1 + 0x10));
  if (m3dSimdType == 0) {
    fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    fVar5 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar5;
    uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    fVar5 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  *(float *)(param_1 + 0x14) = fVar5 * ___real_3f000000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_prsm.cpp
   addr: 0055E7B0 */

int __thiscall m3dPRISM::CheckEnclSph(m3dPRISM *this,m3dSPHERE *param_1)

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
  m3dV local_60 [96];
  
  local_78 = &m3dSPHERE::_vftable_;
  local_74 = *(undefined4 *)(param_1 + 4);
  local_70 = *(undefined4 *)(param_1 + 8);
  local_64 = DAT_005de62c * ___real_42c80000 + *(float *)(param_1 + 0x14);
  local_6c = *(undefined4 *)(param_1 + 0xc);
  local_68 = *(undefined4 *)(param_1 + 0x10);
  GetVertices(this,local_60);
  iVar2 = 0;
  pmVar3 = local_60;
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
/* from: m3d:m3d_prsm.cpp
   addr: 0055E840 */

void __thiscall m3dPRISM::GetCenter(m3dPRISM *this,m3dV *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(this + 0x10);
  fVar2 = *(float *)(this + 0xac);
  fVar3 = *(float *)(this + 0x20);
  fVar4 = *(float *)(this + 0xac);
  *(float *)param_1 = (*(float *)(this + 0x1c) + *(float *)(this + 0xc)) * ___real_3f000000;
  *(float *)(param_1 + 4) = (fVar4 + fVar2) * ___real_3f000000;
  *(float *)(param_1 + 8) = (fVar3 + fVar1) * ___real_3f000000;
  return;
}




/* from: m3d:m3d_prsm.cpp
   addr: 0055E8A0 */

void __thiscall m3dPRISM::GetFace(m3dPRISM *this,int param_1,m3dPOLY *param_2,m3dV *param_3)

{
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  GetVertices(this,(m3dV *)&local_60);
  switch(param_1) {
  case 0:
    *(undefined4 *)(param_2 + 4) = local_3c;
    *(undefined4 *)(param_2 + 8) = local_38;
    *(undefined4 *)(param_2 + 0xc) = local_34;
    *(undefined4 *)(param_2 + 0x10) = local_c;
    *(undefined4 *)(param_2 + 0x14) = local_8;
    *(undefined4 *)(param_2 + 0x18) = local_4;
    *(undefined4 *)(param_2 + 0x1c) = local_30;
    *(undefined4 *)(param_2 + 0x20) = local_2c;
    local_4c = local_28;
    break;
  case 1:
    *(undefined4 *)(param_2 + 4) = local_48;
    *(undefined4 *)(param_2 + 8) = local_44;
    *(undefined4 *)(param_2 + 0xc) = local_40;
    *(undefined4 *)(param_2 + 0x10) = local_18;
    *(undefined4 *)(param_2 + 0x14) = local_14;
    *(undefined4 *)(param_2 + 0x18) = local_10;
    *(undefined4 *)(param_2 + 0x1c) = local_c;
    *(undefined4 *)(param_2 + 0x20) = local_8;
    local_40 = local_4;
    goto LAB_0055ea74;
  case 2:
    *(undefined4 *)param_2 = 4;
    *(undefined4 *)(param_2 + 4) = local_24;
    *(undefined4 *)(param_2 + 8) = local_20;
    *(undefined4 *)(param_2 + 0xc) = local_1c;
    *(undefined4 *)(param_2 + 0x10) = local_18;
    *(undefined4 *)(param_2 + 0x14) = local_14;
    *(undefined4 *)(param_2 + 0x18) = local_10;
    *(undefined4 *)(param_2 + 0x1c) = local_48;
    *(undefined4 *)(param_2 + 0x20) = local_44;
    *(undefined4 *)(param_2 + 0x24) = local_40;
    *(undefined4 *)(param_2 + 0x28) = local_54;
    *(undefined4 *)(param_2 + 0x2c) = local_50;
    *(undefined4 *)(param_2 + 0x30) = local_4c;
    return;
  case 3:
    *(undefined4 *)(param_2 + 4) = local_30;
    *(undefined4 *)(param_2 + 8) = local_2c;
    *(undefined4 *)(param_2 + 0xc) = local_28;
    *(undefined4 *)(param_2 + 0x10) = local_24;
    *(undefined4 *)(param_2 + 0x14) = local_20;
    *(undefined4 *)(param_2 + 0x18) = local_1c;
    *(undefined4 *)(param_2 + 0x1c) = local_54;
    *(undefined4 *)(param_2 + 0x20) = local_50;
    break;
  case 4:
    *(undefined4 *)(param_2 + 4) = local_60;
    *(undefined4 *)(param_2 + 8) = local_5c;
    *(undefined4 *)(param_2 + 0xc) = local_58;
    *(undefined4 *)(param_2 + 0x10) = local_54;
    *(undefined4 *)(param_2 + 0x14) = local_50;
    *(undefined4 *)(param_2 + 0x18) = local_4c;
    *(undefined4 *)(param_2 + 0x1c) = local_48;
    *(undefined4 *)(param_2 + 0x20) = local_44;
LAB_0055ea74:
    *(undefined4 *)(param_2 + 0x24) = local_40;
    *(undefined4 *)param_2 = 4;
    *(undefined4 *)(param_2 + 0x28) = local_3c;
    *(undefined4 *)(param_2 + 0x2c) = local_38;
    *(undefined4 *)(param_2 + 0x30) = local_34;
    return;
  case 5:
    *(undefined4 *)(param_2 + 4) = local_c;
    *(undefined4 *)(param_2 + 8) = local_8;
    *(undefined4 *)(param_2 + 0xc) = local_4;
    *(undefined4 *)(param_2 + 0x10) = local_18;
    *(undefined4 *)(param_2 + 0x14) = local_14;
    *(undefined4 *)(param_2 + 0x18) = local_10;
    *(undefined4 *)(param_2 + 0x1c) = local_24;
    *(undefined4 *)(param_2 + 0x20) = local_20;
    *(undefined4 *)(param_2 + 0x24) = local_1c;
    *(undefined4 *)(param_2 + 0x28) = local_30;
    *(undefined4 *)(param_2 + 0x2c) = local_2c;
    *(undefined4 *)(param_2 + 0x30) = local_28;
  default:
    *(undefined4 *)param_2 = 4;
    return;
  }
  *(undefined4 *)(param_2 + 0x24) = local_4c;
  *(undefined4 *)param_2 = 4;
  *(undefined4 *)(param_2 + 0x28) = local_60;
  *(undefined4 *)(param_2 + 0x2c) = local_5c;
  *(undefined4 *)(param_2 + 0x30) = local_58;
  return;
}




/* from: m3d:m3d_prsm.cpp
   addr: 0055EB40 */

void __thiscall m3dPRISM::GetVertices(m3dPRISM *this,m3dV *param_1)

{
  m3dV *pmVar1;
  m3dPRISM *pmVar2;
  int iVar3;
  
  pmVar1 = param_1 + 4;
  iVar3 = 4;
  pmVar2 = this + 0x10;
  do {
    *(undefined4 *)(pmVar1 + -4) = *(undefined4 *)(pmVar2 + -4);
    *(undefined4 *)(pmVar1 + 4) = *(undefined4 *)pmVar2;
    *(undefined4 *)pmVar1 = *(undefined4 *)(this + 0xac);
    *(undefined4 *)(pmVar1 + 0x2c) = *(undefined4 *)(pmVar2 + -4);
    *(undefined4 *)(pmVar1 + 0x34) = *(undefined4 *)pmVar2;
    *(undefined4 *)(pmVar1 + 0x30) = *(undefined4 *)(this + 0xb0);
    pmVar1 = pmVar1 + 0xc;
    iVar3 = iVar3 + -1;
    pmVar2 = pmVar2 + 8;
  } while (iVar3 != 0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_prsm.cpp
   addr: 0055EB90 */

int __thiscall m3dPRISM::Expand(m3dPRISM *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  ulonglong uVar2;
  undefined8 in_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_24;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = *(float *)(this + 0x14) - *(float *)(this + 0xc);
  local_c = *(float *)(this + 0x18) - *(float *)(this + 0x10);
  local_8 = *(float *)(this + 0x24) - *(float *)(this + 0xc);
  local_4 = *(float *)(this + 0x28) - *(float *)(this + 0x10);
  local_24 = local_10 * local_10 + local_c * local_c;
  if (m3dSimdType == 0) {
    local_24 = local_24 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)local_24),ZEXT416((uint)local_24));
    fVar6 = auVar9._0_4_;
    local_24 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_24 * fVar6 * fVar6) * local_24;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)local_24;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    in_MM1 = PackedFloatingMUL(uVar3,uVar2);
    local_24 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_24 = SQRT(local_24);
  }
  fVar6 = local_24;
  local_24 = local_4 * local_4 + local_8 * local_8;
  if (m3dSimdType == 0) {
    local_24 = local_24 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)local_24),ZEXT416((uint)local_24));
    fVar8 = auVar9._0_4_;
    local_24 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_24 * fVar8 * fVar8) * local_24;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)local_24;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    in_MM1 = PackedFloatingMUL(uVar3,uVar2);
    local_24 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_24 = SQRT(local_24);
  }
  fVar8 = DAT_005de62c * ___real_41200000;
  if ((fVar8 <= fVar6) || (fVar8 <= local_24)) {
    if (fVar6 < fVar8) {
      local_c = -local_8;
      local_10 = local_4;
    }
    else if (local_24 < fVar8) {
      local_8 = -local_c;
      local_4 = local_10;
    }
  }
  else {
    local_10 = _m2dVUnitX;
    local_c = DAT_005f99b8;
    local_8 = _m2dVUnitY;
    local_4 = DAT_005f99c0;
  }
  fVar6 = local_10 * local_10 + local_c * local_c;
  if (m3dSimdType == 0) {
    local_24 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)local_24),ZEXT416((uint)local_24));
    fVar8 = auVar9._0_4_;
    local_24 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_24 * fVar8 * fVar8) * local_24;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar6;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    in_MM1 = PackedFloatingMUL(uVar3,uVar2);
    local_24 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_24 = SQRT(fVar6);
  }
  fVar1 = local_24;
  fVar8 = local_4 * local_4 + local_8 * local_8;
  if (m3dSimdType == 0) {
    local_24 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)local_24),ZEXT416((uint)local_24));
    fVar5 = auVar9._0_4_;
    local_24 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_24 * fVar5 * fVar5) * local_24;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar8;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    in_MM1 = PackedFloatingMUL(uVar3,uVar2);
    local_24 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_24 = SQRT(fVar8);
  }
  fVar5 = local_24;
  if (m3dSimdType == 0) {
    fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar9._0_4_;
    local_24 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar6;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    in_MM1 = PackedFloatingMUL(uVar3,uVar2);
    local_24 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_24 = SQRT(fVar6);
  }
  if (DAT_005de62c <= ABS(local_24)) {
    local_10 = local_10 * (___real_3f800000 / local_24);
    local_c = (___real_3f800000 / local_24) * local_c;
  }
  if (m3dSimdType == 0) {
    fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar6 = auVar9._0_4_;
    local_24 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar6 * fVar6) * fVar8;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar8;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_24 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_24 = SQRT(fVar8);
  }
  if (DAT_005de62c <= ABS(local_24)) {
    local_8 = local_8 * (___real_3f800000 / local_24);
    local_4 = (___real_3f800000 / local_24) * local_4;
  }
  fVar6 = *(float *)param_2;
  *(float *)(this + 0xc) = local_10 * -fVar6 + *(float *)(this + 0xc);
  *(float *)(this + 0x10) = -fVar6 * local_c + *(float *)(this + 0x10);
  fVar6 = *(float *)param_2;
  *(float *)(this + 0x24) = local_10 * -fVar6 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = -fVar6 * local_c + *(float *)(this + 0x28);
  fVar6 = *(float *)param_1;
  *(float *)(this + 0x14) = local_10 * fVar6 + *(float *)(this + 0x14);
  *(float *)(this + 0x18) = fVar6 * local_c + *(float *)(this + 0x18);
  fVar6 = *(float *)param_1;
  *(float *)(this + 0x1c) = local_10 * fVar6 + *(float *)(this + 0x1c);
  *(float *)(this + 0x20) = fVar6 * local_c + *(float *)(this + 0x20);
  fVar6 = *(float *)(param_2 + 8);
  *(float *)(this + 0xc) = local_8 * -fVar6 + *(float *)(this + 0xc);
  *(float *)(this + 0x10) = -fVar6 * local_4 + *(float *)(this + 0x10);
  fVar6 = *(float *)(param_2 + 8);
  *(float *)(this + 0x14) = local_8 * -fVar6 + *(float *)(this + 0x14);
  *(float *)(this + 0x18) = -fVar6 * local_4 + *(float *)(this + 0x18);
  fVar6 = *(float *)(param_1 + 8);
  *(float *)(this + 0x1c) = local_8 * fVar6 + *(float *)(this + 0x1c);
  *(float *)(this + 0x20) = fVar6 * local_4 + *(float *)(this + 0x20);
  fVar6 = *(float *)(param_1 + 8);
  *(float *)(this + 0x24) = local_8 * fVar6 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = fVar6 * local_4 + *(float *)(this + 0x28);
  *(float *)(this + 0xac) = *(float *)(this + 0xac) - *(float *)(param_2 + 4);
  *(float *)(this + 0xb0) = *(float *)(param_1 + 4) + *(float *)(this + 0xb0);
  if (-*(float *)param_1 - *(float *)param_2 <= fVar1) {
    if (-*(float *)(param_1 + 8) - *(float *)(param_2 + 8) <= fVar5) {
      return 1;
    }
    return 0;
  }
  return 0;
}




/* from: m3d:m3d_prsm.cpp
   addr: 0055F1D0 */

void __thiscall m3dPRISM::Expand(m3dPRISM *this,float param_1)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = param_1;
  local_8 = param_1;
  local_4 = param_1;
  Expand(this,(m3dV *)&local_c,(m3dV *)&local_c);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_prsm.cpp
   addr: 0055F200 */

void __thiscall m3dPRISM::Calc(m3dPRISM *this,m3dV *param_1,int param_2)

{
  m3dV *pmVar1;
  m3dV *pmVar2;
  m3dV *pmVar3;
  int iVar4;
  m3dV *pmVar5;
  int iVar6;
  float fVar7;
  float local_14;
  float local_10;
  int local_c;
  float local_8;
  float local_4;
  
  iVar4 = param_2;
  pmVar3 = param_1;
  if (1 < param_2) {
    pmVar1 = *(m3dV **)(param_1 + 4);
    pmVar2 = pmVar1;
    if (1 < param_2) {
      pmVar5 = param_1 + 0x10;
      iVar6 = param_2 + -1;
      param_1 = pmVar1;
      param_2 = (int)pmVar1;
      do {
        pmVar1 = *(m3dV **)pmVar5;
        if ((float)param_1 < (float)*(m3dV **)pmVar5) {
          pmVar1 = param_1;
        }
        pmVar2 = (m3dV *)*(float *)pmVar5;
        if (*(float *)pmVar5 < (float)param_2) {
          pmVar2 = (m3dV *)param_2;
        }
        pmVar5 = pmVar5 + 0xc;
        iVar6 = iVar6 + -1;
        param_1 = pmVar1;
        param_2 = (int)pmVar2;
      } while (iVar6 != 0);
    }
    param_2 = (int)pmVar2;
    param_1 = pmVar1;
    *(m3dV **)(this + 0xac) = param_1;
    *(int *)(this + 0xb0) = param_2;
    iVar6 = 0;
    local_c = 0;
    local_14 = DAT_005de630;
    local_10 = 0.0;
    do {
      fVar7 = MakeBPrismRect(this,pmVar3,iVar4,local_10,&local_4,&local_8,(float *)&param_1,
                             (float *)&param_2);
      if (fVar7 < local_14) {
        local_14 = fVar7;
        local_c = iVar6;
      }
      iVar6 = iVar6 + 1;
      local_10 = (float)iVar6;
    } while ((float)iVar6 < ___real_42b40000);
    MakeBPrismRect(this,pmVar3,iVar4,(float)local_c,&local_4,&local_8,(float *)&param_1,
                   (float *)&param_2);
    MakeBPrismPolyBase(this,(float)local_c,local_4,local_8,(float)param_1,(float)param_2);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_prsm.cpp
   addr: 0055F340 */

float __thiscall
m3dPRISM::MakeBPrismRect
          (m3dPRISM *this,m3dV *param_1,int param_2,float param_3,float *param_4,float *param_5,
          float *param_6,float *param_7)

{
  m3dV *pmVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined8 local_24;
  undefined8 uStack_1c;
  float local_14 [3];
  undefined8 *local_8;
  
  m3dMATR::MakeRotY((m3dMATR *)&local_54,param_3);
  iVar8 = 0;
  if (0 < param_2) {
    local_8 = &local_54;
    do {
      pmVar1 = param_1 + iVar8 * 0xc;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar9 = (undefined4)*(undefined8 *)pmVar1;
          uVar12 = CONCAT44(uVar9,uVar9);
          uVar9 = (undefined4)((ulonglong)*(undefined8 *)pmVar1 >> 0x20);
          uVar15 = CONCAT44(uVar9,uVar9);
          uVar16 = CONCAT44(*(undefined4 *)(pmVar1 + 8),*(undefined4 *)(pmVar1 + 8));
          uVar10 = PackedFloatingMUL(uVar12,local_54);
          uVar11 = PackedFloatingMUL(uVar15,local_44);
          uVar13 = PackedFloatingMUL(uVar16,local_34);
          uVar10 = PackedFloatingADD(uVar10,local_24);
          uVar14 = PackedFloatingMUL(uVar12,uStack_4c);
          uVar12 = PackedFloatingADD(uVar11,uVar13);
          uVar11 = PackedFloatingMUL(uVar15,uStack_3c);
          uVar16 = PackedFloatingMUL(uVar16,uStack_2c);
          uVar15 = PackedFloatingADD(uVar14,uStack_1c);
          uVar12 = PackedFloatingADD(uVar10,uVar12);
          uVar10 = PackedFloatingADD(uVar11,uVar16);
          local_14[0] = (float)uVar12;
          uVar12 = PackedFloatingADD(uVar15,uVar10);
          local_14[2] = (float)uVar12;
          FastExitMediaState();
        }
        else {
          iVar6 = 0;
          do {
            iVar4 = 0;
            pfVar5 = (float *)((int)&local_54 + iVar6 * 4);
            local_14[iVar6] = 0.0;
            fVar3 = ___real_00000000;
            do {
              iVar7 = iVar4 * 4;
              fVar2 = *pfVar5;
              iVar4 = iVar4 + 1;
              pfVar5 = pfVar5 + 4;
              fVar3 = *(float *)(pmVar1 + iVar7) * fVar2 + fVar3;
            } while (iVar4 < 3);
            local_14[iVar6] = fVar3;
            iVar7 = iVar6 + 1;
            local_14[iVar6] = fVar3 + *(float *)((int)&local_54 + (iVar6 + iVar4 * 4) * 4);
            iVar6 = iVar7;
          } while (iVar7 < 3);
        }
      }
      if (iVar8 == 0) {
        *param_5 = local_14[0];
        *param_4 = local_14[0];
        *param_7 = local_14[2];
        *param_6 = local_14[2];
      }
      else {
        fVar3 = *param_4;
        if (local_14[0] <= *param_4) {
          fVar3 = local_14[0];
        }
        *param_4 = fVar3;
        fVar3 = *param_5;
        if (*param_5 <= local_14[0]) {
          fVar3 = local_14[0];
        }
        *param_5 = fVar3;
        fVar3 = *param_6;
        if (local_14[2] <= *param_6) {
          fVar3 = local_14[2];
        }
        *param_6 = fVar3;
        fVar3 = *param_7;
        if (*param_7 <= local_14[2]) {
          fVar3 = local_14[2];
        }
        *param_7 = fVar3;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
  }
  return (*param_7 - *param_6) + (*param_5 - *param_4);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: m3d:m3d_prsm.cpp
   addr: 0055F580 */

void __thiscall
m3dPRISM::MakeBPrismPolyBase
          (m3dPRISM *this,float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float local_64 [4];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float local_34 [3];
  undefined4 uStack_28;
  float local_24 [6];
  float *local_c;
  float *local_8;
  
  m3dMATR::MakeRotY((m3dMATR *)local_64,-param_1);
  *(undefined4 *)(this + 8) = 4;
  local_24[0] = param_2 - DAT_005de62c;
  local_24[1] = 0.0;
  local_24[2] = param_4 - DAT_005de62c;
  local_8 = local_24;
  local_c = local_64;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),CONCAT44(local_64[1],local_64[0]))
      ;
      uVar9 = PackedFloatingMUL(0,CONCAT44(uStack_50,local_54));
      uVar10 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_40,local_44));
      uVar8 = PackedFloatingADD(uVar8,CONCAT44(local_34[1],local_34[0]));
      uVar11 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),CONCAT44(local_64[3],local_64[2])
                                );
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      uVar12 = PackedFloatingMUL(0,CONCAT44(uStack_48,uStack_4c));
      uVar13 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_38,uStack_3c));
      uVar10 = PackedFloatingADD(uVar11,CONCAT44(uStack_28,local_34[2]));
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingADD(uVar12,uVar13);
      local_24[3] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar10,uVar9);
      local_24[5] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      iVar7 = 0;
      do {
        local_24[iVar7 + 3] = 0.0;
        iVar4 = 0;
        pfVar5 = local_64 + iVar7;
        fVar3 = ___real_00000000;
        do {
          pfVar1 = local_24 + iVar4;
          fVar2 = *pfVar5;
          iVar4 = iVar4 + 1;
          pfVar5 = pfVar5 + 4;
          fVar3 = *pfVar1 * fVar2 + fVar3;
        } while (iVar4 < 3);
        local_24[iVar7 + 3] = fVar3;
        iVar6 = iVar7 + 1;
        local_24[iVar7 + 3] = fVar3 + local_64[iVar7 + iVar4 * 4];
        iVar7 = iVar6;
      } while (iVar6 < 3);
    }
  }
  *(float *)(this + 0xc) = local_24[3];
  *(float *)(this + 0x10) = local_24[5];
  local_24[0] = DAT_005de62c + param_3;
  local_24[1] = 0.0;
  local_c = local_64;
  local_24[2] = param_4 - DAT_005de62c;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),CONCAT44(local_64[1],local_64[0]))
      ;
      uVar9 = PackedFloatingMUL(0,CONCAT44(uStack_50,local_54));
      uVar10 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_40,local_44));
      uVar8 = PackedFloatingADD(uVar8,CONCAT44(local_34[1],local_34[0]));
      uVar11 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),CONCAT44(local_64[3],local_64[2])
                                );
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      uVar12 = PackedFloatingMUL(0,CONCAT44(uStack_48,uStack_4c));
      uVar13 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_38,uStack_3c));
      uVar10 = PackedFloatingADD(uVar11,CONCAT44(uStack_28,local_34[2]));
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingADD(uVar12,uVar13);
      local_24[3] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar10,uVar9);
      local_24[5] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      iVar7 = 0;
      do {
        local_24[iVar7 + 3] = 0.0;
        iVar4 = 0;
        pfVar5 = local_64 + iVar7;
        fVar3 = ___real_00000000;
        do {
          pfVar1 = local_24 + iVar4;
          fVar2 = *pfVar5;
          iVar4 = iVar4 + 1;
          pfVar5 = pfVar5 + 4;
          fVar3 = *pfVar1 * fVar2 + fVar3;
        } while (iVar4 < 3);
        local_24[iVar7 + 3] = fVar3;
        iVar6 = iVar7 + 1;
        local_24[iVar7 + 3] = fVar3 + local_64[iVar7 + iVar4 * 4];
        iVar7 = iVar6;
      } while (iVar6 < 3);
    }
  }
  *(float *)(this + 0x14) = local_24[3];
  *(float *)(this + 0x18) = local_24[5];
  local_24[0] = DAT_005de62c + param_3;
  local_24[2] = DAT_005de62c + param_5;
  local_24[1] = 0.0;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),CONCAT44(local_64[1],local_64[0]))
      ;
      uVar9 = PackedFloatingMUL(0,CONCAT44(uStack_50,local_54));
      uVar10 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_40,local_44));
      uVar8 = PackedFloatingADD(uVar8,CONCAT44(local_34[1],local_34[0]));
      uVar11 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),CONCAT44(local_64[3],local_64[2])
                                );
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      uVar12 = PackedFloatingMUL(0,CONCAT44(uStack_48,uStack_4c));
      uVar13 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_38,uStack_3c));
      uVar10 = PackedFloatingADD(uVar11,CONCAT44(uStack_28,local_34[2]));
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingADD(uVar12,uVar13);
      local_24[3] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar10,uVar9);
      local_24[5] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      iVar7 = 0;
      do {
        local_24[iVar7 + 3] = 0.0;
        iVar4 = 0;
        pfVar5 = local_64 + iVar7;
        fVar3 = ___real_00000000;
        do {
          pfVar1 = local_24 + iVar4;
          fVar2 = *pfVar5;
          iVar4 = iVar4 + 1;
          pfVar5 = pfVar5 + 4;
          fVar3 = *pfVar1 * fVar2 + fVar3;
        } while (iVar4 < 3);
        local_24[iVar7 + 3] = fVar3;
        iVar6 = iVar7 + 1;
        local_24[iVar7 + 3] = fVar3 + local_64[iVar7 + iVar4 * 4];
        iVar7 = iVar6;
      } while (iVar6 < 3);
    }
  }
  *(float *)(this + 0x1c) = local_24[3];
  *(float *)(this + 0x20) = local_24[5];
  local_24[0] = param_2 - DAT_005de62c;
  local_24[2] = DAT_005de62c + param_5;
  local_24[1] = 0.0;
  if (m3dSimdType == 0) {
    *(float *)(this + 0x24) = local_24[3];
    *(float *)(this + 0x28) = local_24[5];
    return;
  }
  if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar8 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),CONCAT44(local_64[1],local_64[0]));
    uVar9 = PackedFloatingMUL(0,CONCAT44(uStack_50,local_54));
    uVar10 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_40,local_44));
    uVar8 = PackedFloatingADD(uVar8,CONCAT44(local_34[1],local_34[0]));
    uVar11 = PackedFloatingMUL(CONCAT44(local_24[0],local_24[0]),CONCAT44(local_64[3],local_64[2]));
    uVar9 = PackedFloatingADD(uVar9,uVar10);
    uVar12 = PackedFloatingMUL(0,CONCAT44(uStack_48,uStack_4c));
    uVar13 = PackedFloatingMUL(CONCAT44(local_24[2],local_24[2]),CONCAT44(uStack_38,uStack_3c));
    uVar10 = PackedFloatingADD(uVar11,CONCAT44(uStack_28,local_34[2]));
    uVar8 = PackedFloatingADD(uVar8,uVar9);
    uVar9 = PackedFloatingADD(uVar12,uVar13);
    local_24[3] = (float)uVar8;
    uVar8 = PackedFloatingADD(uVar10,uVar9);
    FastExitMediaState();
    *(float *)(this + 0x24) = local_24[3];
    *(int *)(this + 0x28) = (int)uVar8;
    return;
  }
  iVar7 = 0;
  do {
    local_24[iVar7 + 3] = 0.0;
    iVar4 = 0;
    pfVar5 = local_64 + iVar7;
    fVar3 = ___real_00000000;
    do {
      pfVar1 = local_24 + iVar4;
      fVar2 = *pfVar5;
      iVar4 = iVar4 + 1;
      pfVar5 = pfVar5 + 4;
      fVar3 = *pfVar1 * fVar2 + fVar3;
    } while (iVar4 < 3);
    local_24[iVar7 + 3] = fVar3;
    iVar6 = iVar7 + 1;
    local_24[iVar7 + 3] = fVar3 + local_64[iVar7 + iVar4 * 4];
    iVar7 = iVar6;
  } while (iVar6 < 3);
  *(float *)(this + 0x24) = local_24[3];
  *(float *)(this + 0x28) = local_24[5];
  return;
}

