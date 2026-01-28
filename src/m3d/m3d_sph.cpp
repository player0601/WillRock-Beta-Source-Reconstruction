
/* from: m3d:m3d_sph.cpp
   addr: 00557560 */

int __thiscall m3dSPHERE::IsBelongPoint(m3dSPHERE *this,m3dV *param_1)

{
  ulonglong uVar1;
  undefined8 in_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  fVar4 = (*(float *)(this + 8) - *(float *)param_1) * (*(float *)(this + 8) - *(float *)param_1) +
          (*(float *)(this + 0xc) - *(float *)(param_1 + 4)) *
          (*(float *)(this + 0xc) - *(float *)(param_1 + 4)) +
          (*(float *)(this + 0x10) - *(float *)(param_1 + 8)) *
          (*(float *)(this + 0x10) - *(float *)(param_1 + 8));
  if (m3dSimdType == 0) {
    fVar4 = fVar4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar4 * fVar5 * fVar5) * fVar4
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)fVar4;
    uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    uVar2 = PackedFloatingMUL(uVar2,uVar1);
    param_1 = (m3dV *)uVar2;
    FastExitMediaState();
  }
  else {
    param_1 = (m3dV *)SQRT(fVar4);
  }
  if (*(float *)(this + 0x14) < (float)param_1) {
    return 0;
  }
  return 1;
}




/* from: m3d:m3d_sph.cpp
   addr: 00557640 */

int __thiscall
m3dSPHERE::IsIsectCyl(m3dSPHERE *this,m3dV *param_1,m3dV *param_2,float param_3,float param_4)

{
  int iVar1;
  
  *(float *)(this + 0x14) = param_4 + *(float *)(this + 0x14);
  iVar1 = IsectRay(this,param_1,param_2,param_3,(m3dV *)0x0,(float *)0x0,(int *)0x0);
  *(float *)(this + 0x14) = *(float *)(this + 0x14) - param_4;
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_sph.cpp
   addr: 00557680 */

int __thiscall
m3dSPHERE::IsectRay(m3dSPHERE *this,m3dV *param_1,m3dV *param_2,float param_3,m3dV *param_4,
                   float *param_5,int *param_6)

{
  float fVar1;
  m3dV *pmVar2;
  ulonglong uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  
  pmVar2 = param_1;
  fVar4 = (float10)*(float *)param_1 - (float10)*(float *)(this + 8);
  uVar7 = SUB108(fVar4,0);
  fVar5 = (float10)*(float *)(param_1 + 4) - (float10)*(float *)(this + 0xc);
  fVar6 = (float10)*(float *)(param_1 + 8) - (float10)*(float *)(this + 0x10);
  fVar9 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar11 = *(float *)(this + 0x14) * *(float *)(this + 0x14);
  if (fVar9 < (float10)fVar11) {
    if (param_5 != (float *)0x0) {
      *param_5 = 0.0;
    }
    if (param_4 != (m3dV *)0x0) {
      *(undefined4 *)param_4 = *(undefined4 *)param_1;
      *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_1 + 8);
    }
    return 2;
  }
  fVar1 = *(float *)param_2 * *(float *)param_2 +
          *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
          *(float *)(param_2 + 8) * *(float *)(param_2 + 8);
  fVar4 = fVar6 * (float10)*(float *)(param_2 + 8) +
          fVar5 * (float10)*(float *)(param_2 + 4) + fVar4 * (float10)*(float *)param_2;
  fVar12 = (float)fVar4;
  fVar4 = fVar4 * (float10)fVar12 - ((float10)(float)fVar9 - (float10)fVar11) * (float10)fVar1;
  fVar11 = (float)fVar4;
  if (fVar4 < (float10)___real_00000000) {
    return 0;
  }
  if (m3dSimdType == 0) {
    fVar11 = fVar11 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar10 = auVar13._0_4_;
    param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar11 * fVar10 * fVar10) *
                      fVar11);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar11;
    uVar7 = PackedFloatingReciprocalSQRAprox(uVar7,uVar3);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar3);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    uVar7 = PackedFloatingMUL(uVar7,uVar3);
    param_1 = (m3dV *)uVar7;
    FastExitMediaState();
  }
  else {
    param_1 = (m3dV *)SQRT(fVar11);
  }
  fVar1 = ___real_3f800000 / fVar1;
  fVar11 = ((float)param_1 - fVar12) * fVar1;
  fVar1 = (-fVar12 - (float)param_1) * fVar1;
  if (___real_00000000 <= fVar11) {
    if ((fVar1 <= ___real_00000000) || (fVar11 < fVar1)) {
      fVar1 = fVar11;
    }
  }
  else if (fVar1 < ___real_00000000) {
    return 0;
  }
  fVar11 = fVar1 * *(float *)param_2 + *(float *)pmVar2;
  fVar10 = fVar1 * *(float *)(param_2 + 4) + *(float *)(pmVar2 + 4);
  fVar12 = fVar1 * *(float *)(param_2 + 8) + *(float *)(pmVar2 + 8);
  if (param_4 != (m3dV *)0x0) {
    *(float *)param_4 = fVar11;
    *(float *)(param_4 + 4) = fVar10;
    *(float *)(param_4 + 8) = fVar12;
  }
  fVar11 = fVar11 - *(float *)pmVar2;
  fVar10 = fVar10 - *(float *)(pmVar2 + 4);
  fVar12 = fVar12 - *(float *)(pmVar2 + 8);
  fVar11 = fVar11 * fVar11 + fVar10 * fVar10 + fVar12 * fVar12;
  if (m3dSimdType == 0) {
    fVar11 = fVar11 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar13._0_4_;
    param_4 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar11 * fVar12 * fVar12) *
                      fVar11);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)fVar11;
    uVar7 = PackedFloatingReciprocalSQRAprox(uVar7,uVar3);
    uVar8 = PackedFloatingMUL(uVar7,uVar7);
    uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar3);
    uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
    uVar7 = PackedFloatingMUL(uVar7,uVar3);
    param_4 = (m3dV *)uVar7;
    FastExitMediaState();
  }
  else {
    param_4 = (m3dV *)SQRT(fVar11);
  }
  if ((float)param_4 <= param_3) {
    if (param_5 != (float *)0x0) {
      *param_5 = (float)param_4;
    }
    if (param_6 != (int *)0x0) {
      *param_6 = -1;
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_sph.cpp
   addr: 00557990 */

int __thiscall
m3dSPHERE::DistPoint
          (m3dSPHERE *this,m3dV *param_1,float param_2,m3dV *param_3,float *param_4,int *param_5)

{
  m3dV *pmVar1;
  ulonglong uVar2;
  undefined8 in_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  pmVar1 = param_1;
  fVar5 = (*(float *)param_1 - *(float *)(this + 8)) * (*(float *)param_1 - *(float *)(this + 8)) +
          (*(float *)(param_1 + 4) - *(float *)(this + 0xc)) *
          (*(float *)(param_1 + 4) - *(float *)(this + 0xc)) +
          (*(float *)(param_1 + 8) - *(float *)(this + 0x10)) *
          (*(float *)(param_1 + 8) - *(float *)(this + 0x10));
  if (m3dSimdType == 0) {
    fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar5;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    param_1 = (m3dV *)uVar3;
    FastExitMediaState();
  }
  else {
    param_1 = (m3dV *)SQRT(fVar5);
  }
  if ((float)param_1 < *(float *)(this + 0x14) == ((float)param_1 == *(float *)(this + 0x14))) {
    if ((float)param_1 - *(float *)(this + 0x14) <= param_2) {
      if (param_4 != (float *)0x0) {
        *param_4 = (float)param_1 - *(float *)(this + 0x14);
      }
      if (param_3 != (m3dV *)0x0) {
        fVar5 = ___real_3f800000 / (float)param_1;
        *(float *)param_3 =
             (*(float *)pmVar1 - *(float *)(this + 8)) * *(float *)(this + 0x14) * fVar5 +
             *(float *)(this + 8);
        *(float *)(param_3 + 4) =
             (*(float *)(pmVar1 + 4) - *(float *)(this + 0xc)) * *(float *)(this + 0x14) * fVar5 +
             *(float *)(this + 0xc);
        *(float *)(param_3 + 8) =
             (*(float *)(pmVar1 + 8) - *(float *)(this + 0x10)) * *(float *)(this + 0x14) * fVar5 +
             *(float *)(this + 0x10);
      }
      if (param_5 != (int *)0x0) {
        *param_5 = -1;
      }
      return 1;
    }
    return 0;
  }
  return 2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_sph.cpp
   addr: 00557AF0 */

int __thiscall m3dSPHERE::Check(m3dSPHERE *this)

{
  if (_DAT_005de5d0 < *(float *)(this + 0x14)) {
    return 1;
  }
  return 0;
}




/* from: m3d:m3d_sph.cpp
   addr: 00557B10 */

void __thiscall m3dSPHERE::CalcEnclSph(m3dSPHERE *this,m3dSPHERE *param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_sph.cpp
   addr: 00557B40 */

int __thiscall m3dSPHERE::CheckEnclSph(m3dSPHERE *this,m3dSPHERE *param_1)

{
  float fVar1;
  m3dSPHERE *pmVar2;
  
  pmVar2 = param_1;
  fVar1 = _DAT_005de5d0 * ___real_41200000;
  param_1 = (m3dSPHERE *)(uint)(ABS(*(float *)(param_1 + 8) - *(float *)(this + 8)) < fVar1);
  if ((((float)(int)param_1 != ___real_00000000) &&
      (param_1 = (m3dSPHERE *)(uint)(ABS(*(float *)(pmVar2 + 0xc) - *(float *)(this + 0xc)) < fVar1)
      , (float)(int)param_1 != ___real_00000000)) &&
     (param_1 = (m3dSPHERE *)
                (uint)(ABS(*(float *)(pmVar2 + 0x10) - *(float *)(this + 0x10)) < fVar1),
     (float)(int)param_1 != ___real_00000000)) {
    if (fVar1 < ABS(*(float *)(pmVar2 + 0x14) - *(float *)(this + 0x14))) {
      return 0;
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_sph.cpp
   addr: 00557C60 */

void __thiscall m3dSPHERE::Calc(m3dSPHERE *this,m3dV *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  m3dV *pmVar3;
  int iVar4;
  m3dV *pmVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 in_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_c;
  int local_8;
  
  iVar6 = param_2;
  local_c = -1.0;
  if (param_2 == 1) {
    param_2 = 0;
    local_8 = 0;
  }
  else if (0 < param_2) {
    pmVar3 = param_1 + 4;
    iVar4 = 0;
    do {
      iVar1 = iVar4 + 1;
      if (iVar1 < iVar6) {
        pmVar5 = pmVar3 + 0x10;
        iVar2 = iVar1;
        do {
          fVar10 = (*(float *)(pmVar3 + -4) - *(float *)(pmVar5 + -8)) *
                   (*(float *)(pmVar3 + -4) - *(float *)(pmVar5 + -8)) +
                   (*(float *)pmVar3 - *(float *)(pmVar5 + -4)) *
                   (*(float *)pmVar3 - *(float *)(pmVar5 + -4)) +
                   (*(float *)(pmVar3 + 4) - *(float *)pmVar5) *
                   (*(float *)(pmVar3 + 4) - *(float *)pmVar5);
          if (local_c < fVar10) {
            param_2 = iVar4;
            local_c = fVar10;
            local_8 = iVar2;
          }
          iVar2 = iVar2 + 1;
          pmVar5 = pmVar5 + 0xc;
        } while (iVar2 < iVar6);
      }
      pmVar3 = pmVar3 + 0xc;
      iVar4 = iVar1;
    } while (iVar1 < iVar6);
  }
  pmVar3 = param_1 + param_2 * 0xc;
  *(float *)(this + 8) =
       (*(float *)(param_1 + local_8 * 0xc) + *(float *)(param_1 + param_2 * 0xc)) *
       ___real_3f000000;
  *(float *)(this + 0xc) =
       (*(float *)(param_1 + local_8 * 0xc + 4) + *(float *)(pmVar3 + 4)) * ___real_3f000000;
  *(float *)(this + 0x10) =
       (*(float *)(param_1 + local_8 * 0xc + 8) + *(float *)(pmVar3 + 8)) * ___real_3f000000;
  param_2 = (int)((*(float *)pmVar3 - *(float *)(this + 8)) *
                  (*(float *)pmVar3 - *(float *)(this + 8)) +
                 (*(float *)(pmVar3 + 4) - *(float *)(this + 0xc)) *
                 (*(float *)(pmVar3 + 4) - *(float *)(this + 0xc)) +
                 (*(float *)(pmVar3 + 8) - *(float *)(this + 0x10)) *
                 (*(float *)(pmVar3 + 8) - *(float *)(this + 0x10)));
  if (0 < iVar6) {
    pmVar3 = param_1 + 8;
    do {
      fVar10 = (*(float *)(this + 8) - *(float *)(pmVar3 + -8)) *
               (*(float *)(this + 8) - *(float *)(pmVar3 + -8)) +
               (*(float *)(this + 0xc) - *(float *)(pmVar3 + -4)) *
               (*(float *)(this + 0xc) - *(float *)(pmVar3 + -4)) +
               (*(float *)(this + 0x10) - *(float *)pmVar3) *
               (*(float *)(this + 0x10) - *(float *)pmVar3);
      if ((float)param_2 <= fVar10) {
        param_2 = (int)fVar10;
      }
      pmVar3 = pmVar3 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (m3dSimdType == 0) {
    fVar10 = (float)param_2 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
    fVar11 = auVar12._0_4_;
    param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar10 * fVar11 * fVar11) *
                      fVar10);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar7 = (ulonglong)(uint)param_2;
    uVar8 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar7);
    uVar9 = PackedFloatingMUL(uVar8,uVar8);
    uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
    uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
    uVar8 = PackedFloatingMUL(uVar8,uVar7);
    param_1 = (m3dV *)uVar8;
    FastExitMediaState();
  }
  else {
    param_1 = (m3dV *)SQRT((float)param_2);
  }
  *(float *)(this + 0x14) = _DAT_005de5d0 * ___real_42c80000 + (float)param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_sph.cpp
   addr: 00557E70 */

int __thiscall m3dSPHERE::QualPlane(m3dSPHERE *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (*(float *)(this + 8) - *(float *)param_1) * *(float *)param_2 +
          (*(float *)(this + 0xc) - *(float *)(param_1 + 4)) * *(float *)(param_2 + 4) +
          (*(float *)(this + 0x10) - *(float *)(param_1 + 8)) * *(float *)(param_2 + 8);
  fVar1 = ABS(fVar2);
  if (fVar1 < *(float *)(this + 0x14) != (fVar1 == *(float *)(this + 0x14))) {
    return 0;
  }
  if (fVar2 < ___real_00000000) {
    return 1;
  }
  return -1;
}

