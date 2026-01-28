
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vect.cpp
   addr: 0054D600 */

float __fastcall _m3dAngleVector(m3dV *param_1,m3dV *param_2)

{
  float10 fVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1 * *(float *)param_2 +
          *(float *)(param_1 + 4) * *(float *)(param_2 + 4) +
          *(float *)(param_1 + 8) * *(float *)(param_2 + 8);
  if (___real_bf800000 <= fVar2) {
    if (___real_3f800000 < fVar2) {
      fVar2 = 1.0;
    }
  }
  else {
    fVar2 = -1.0;
  }
  fVar1 = (float10)CIacos(fVar2);
  return (float)((fVar1 / (float10)_DAT_005de44c) * (float10)___real_43340000);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vect.cpp
   addr: 0054D670 */

float __fastcall m3dAngleVector_COS(m3dV *param_1,m3dV *param_2)

{
  ulonglong uVar1;
  undefined8 in_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_8;
  
  local_8 = *(float *)param_1 * *(float *)param_1 +
            *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
            *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  if (m3dSimdType == 0) {
    local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
    fVar4 = auVar6._0_4_;
    local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar4 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar4 * fVar4) * local_8;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)local_8;
    uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    in_MM1 = PackedFloatingMUL(uVar2,uVar1);
    local_8 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_8 = SQRT(local_8);
  }
  fVar4 = local_8;
  local_8 = *(float *)param_2 * *(float *)param_2 +
            *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
            *(float *)(param_2 + 8) * *(float *)(param_2 + 8);
  if (m3dSimdType == 0) {
    local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
    fVar5 = auVar6._0_4_;
    local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar5 * fVar5) * local_8;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)local_8;
    uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    uVar2 = PackedFloatingMUL(uVar2,uVar1);
    local_8 = (float)uVar2;
    FastExitMediaState();
  }
  else {
    local_8 = SQRT(local_8);
  }
  fVar4 = local_8 * fVar4;
  local_8 = (float)(uint)(ABS(fVar4) < _DAT_005de448);
  if ((float)(int)local_8 != ___real_00000000) {
    return ___real_3f800000;
  }
  fVar4 = (*(float *)(param_2 + 8) * *(float *)(param_1 + 8) +
          *(float *)param_1 * *(float *)param_2 + *(float *)(param_1 + 4) * *(float *)(param_2 + 4))
          / fVar4;
  if (fVar4 < ___real_bf800000) {
    return ___real_bf800000;
  }
  if (___real_3f800000 < fVar4) {
    fVar4 = ___real_3f800000;
  }
  return fVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vect.cpp
   addr: 0054D870 */

float __fastcall m3dAngleVector(m3dV *param_1,m3dV *param_2)

{
  ulonglong uVar1;
  float10 fVar2;
  undefined8 in_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  fVar5 = *(float *)param_1 * *(float *)param_1 +
          *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
          *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  if (m3dSimdType == 0) {
    fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar8._0_4_;
    fVar5 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)fVar5;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar1);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    in_MM1 = PackedFloatingMUL(uVar3,uVar1);
    fVar5 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  fVar6 = *(float *)param_2 * *(float *)param_2 +
          *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
          *(float *)(param_2 + 8) * *(float *)(param_2 + 8);
  if (m3dSimdType == 0) {
    fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)fVar6;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar1);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar1);
    fVar6 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  if ((float)(ABS(fVar6 * fVar5) < _DAT_005de448) == ___real_00000000) {
    fVar5 = (*(float *)(param_2 + 8) * *(float *)(param_1 + 8) +
            *(float *)param_1 * *(float *)param_2 +
            *(float *)(param_1 + 4) * *(float *)(param_2 + 4)) / (fVar6 * fVar5);
    fVar6 = ___real_bf800000;
    if ((___real_bf800000 <= fVar5) && (fVar6 = fVar5, ___real_3f800000 < fVar5)) {
      fVar6 = ___real_3f800000;
    }
  }
  else {
    fVar6 = 1.0;
  }
  fVar2 = (float10)CIacos(fVar6);
  return (float)(((float10)___real_43340000 / (float10)_DAT_005de44c) * fVar2);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vect.cpp
   addr: 0054DA90 */

float __fastcall m3xzAngleVector(m3dV *param_1,m3dV *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  ulonglong uVar4;
  float10 fVar5;
  undefined8 in_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  fVar3 = *(float *)param_1 * *(float *)param_1 +
          *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
          *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  if (m3dSimdType == 0) {
    auVar8 = ZEXT416((uint)(fVar3 + `float___cdecl_m3dSqrt(float)'::__l2::very_small));
    rsqrtss(auVar8,auVar8);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar3;
    uVar6 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
    uVar7 = PackedFloatingMUL(uVar6,uVar6);
    uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar4);
    uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
    in_MM1 = PackedFloatingMUL(uVar6,uVar4);
    FastExitMediaState();
  }
  fVar3 = *(float *)param_2 * *(float *)param_2 +
          *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
          *(float *)(param_2 + 8) * *(float *)(param_2 + 8);
  if (m3dSimdType == 0) {
    auVar8 = ZEXT416((uint)(fVar3 + `float___cdecl_m3dSqrt(float)'::__l2::very_small));
    rsqrtss(auVar8,auVar8);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar3;
    uVar6 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
    uVar7 = PackedFloatingMUL(uVar6,uVar6);
    uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar4);
    uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
    PackedFloatingMUL(uVar6,uVar4);
    FastExitMediaState();
  }
  fVar5 = (float10)CIacos();
  fVar5 = (fVar5 / (float10)_DAT_005de44c) * (float10)___real_43340000;
  if ((float10)___real_00000000 <= fVar5) {
    if ((float10)___real_43340000 < fVar5) {
      fVar5 = (float10)___real_43340000;
    }
  }
  else {
    fVar5 = (float10)___real_00000000;
  }
  if (*(float *)param_2 * *(float *)(param_1 + 8) - *(float *)(param_2 + 8) * *(float *)param_1 <
      ___real_00000000) {
    fVar5 = -fVar5;
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return (float)fVar5;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vect.cpp
   addr: 0054DD20 */

void __fastcall
m3dBasisCoord(m3dV *param_1,m3dV *param_2,m3dV *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 in_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float local_14;
  
  fVar7 = *(float *)param_1 * *(float *)(param_2 + 8) - *(float *)(param_1 + 8) * *(float *)param_2;
  fVar1 = *(float *)param_1 * *(float *)(param_2 + 4) - *(float *)param_2 * *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8) * *(float *)(param_2 + 4) -
          *(float *)(param_1 + 4) * *(float *)(param_2 + 8);
  fVar3 = _DAT_005de448 * ___real_3dcccccd;
  if (ABS(fVar7) < fVar3) {
    if (ABS(fVar1) < fVar3) {
      if (ABS(fVar2) < fVar3) {
        local_14 = *(float *)param_1 * *(float *)param_1 +
                   *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
                   *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
        if (m3dSimdType == 0) {
          local_14 = local_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar8 = rsqrtss(ZEXT416((uint)local_14),ZEXT416((uint)local_14));
          fVar7 = auVar8._0_4_;
          local_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_14 * fVar7 * fVar7) *
                     local_14;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar4 = (ulonglong)(uint)local_14;
          uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
          uVar6 = PackedFloatingMUL(uVar5,uVar5);
          uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
          uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
          in_MM1 = PackedFloatingMUL(uVar5,uVar4);
          local_14 = (float)in_MM1;
          FastExitMediaState();
        }
        else {
          local_14 = SQRT(local_14);
        }
        if (_DAT_005de448 * ___real_3dcccccd < local_14) {
          *param_4 = (*(float *)param_1 * *(float *)param_3 +
                     *(float *)(param_3 + 8) * *(float *)(param_1 + 8) +
                     *(float *)(param_3 + 4) * *(float *)(param_1 + 4)) / local_14;
          *param_5 = 0.0;
          return;
        }
        local_14 = *(float *)param_2 * *(float *)param_2 +
                   *(float *)(param_2 + 4) * *(float *)(param_2 + 4) +
                   *(float *)(param_2 + 8) * *(float *)(param_2 + 8);
        if (m3dSimdType == 0) {
          local_14 = local_14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar8 = rsqrtss(ZEXT416((uint)local_14),ZEXT416((uint)local_14));
          fVar7 = auVar8._0_4_;
          local_14 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - local_14 * fVar7 * fVar7) *
                     local_14;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar4 = (ulonglong)(uint)local_14;
          uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
          uVar6 = PackedFloatingMUL(uVar5,uVar5);
          uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
          uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
          uVar5 = PackedFloatingMUL(uVar5,uVar4);
          local_14 = (float)uVar5;
          FastExitMediaState();
        }
        else {
          local_14 = SQRT(local_14);
        }
        if (_DAT_005de448 * ___real_3dcccccd < local_14) {
          *param_5 = (*(float *)param_2 * *(float *)param_3 +
                     *(float *)(param_3 + 8) * *(float *)(param_2 + 8) +
                     *(float *)(param_3 + 4) * *(float *)(param_2 + 4)) / local_14;
          *param_4 = 0.0;
          return;
        }
        *param_5 = 0.0;
        *param_4 = 0.0;
        return;
      }
    }
  }
  if (ABS(fVar7) <= ABS(fVar1)) {
    if (ABS(fVar2) < ABS(fVar1)) {
      fVar2 = ___real_3f800000 / fVar1;
      *param_4 = (*(float *)param_3 * *(float *)(param_2 + 4) -
                 *(float *)(param_3 + 4) * *(float *)param_2) * fVar2;
      fVar1 = *(float *)(param_3 + 4) * *(float *)param_1;
      fVar7 = *(float *)param_3;
      goto LAB_0054e06e;
    }
  }
  else if (ABS(fVar2) < ABS(fVar7)) {
    fVar7 = ___real_3f800000 / fVar7;
    *param_4 = (*(float *)param_3 * *(float *)(param_2 + 8) -
               *(float *)(param_3 + 8) * *(float *)param_2) * fVar7;
    *param_5 = (*(float *)(param_3 + 8) * *(float *)param_1 -
               *(float *)(param_1 + 8) * *(float *)param_3) * fVar7;
    return;
  }
  fVar2 = ___real_3f800000 / fVar2;
  *param_4 = (*(float *)(param_3 + 8) * *(float *)(param_2 + 4) -
             *(float *)(param_3 + 4) * *(float *)(param_2 + 8)) * fVar2;
  fVar1 = *(float *)(param_3 + 4) * *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_3 + 8);
LAB_0054e06e:
  *param_5 = (fVar1 - fVar7 * *(float *)(param_1 + 4)) * fVar2;
  return;
}




/* from: m3d:m3d_vect.cpp
   addr: 0054E140 */

float __fastcall m2dAngleVector(m2dV *param_1,m2dV *param_2)

{
  float fVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)param_1;
  local_4 = *(undefined4 *)(param_1 + 4);
  local_10 = *(undefined4 *)(param_2 + 4);
  local_18 = *(undefined4 *)param_2;
  local_8 = 0;
  local_14 = 0;
  fVar1 = m3xzAngleVector((m3dV *)&local_c,(m3dV *)&local_18);
  return fVar1;
}




/* from: m3d:m3d_vect.cpp
   addr: 0054E180 */

void __fastcall m3dMirrorPointPlane(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_3 + 8);
  fVar4 = *(float *)(param_1 + 8);
  fVar8 = (*(float *)param_3 - *(float *)param_1) * *(float *)param_2 +
          (fVar1 - fVar2) * *(float *)(param_2 + 4) + (fVar3 - fVar4) * *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 4);
  fVar6 = *(float *)(param_2 + 8);
  fVar7 = (*(float *)param_3 - *(float *)param_1) -
          (fVar8 * *(float *)param_2 + fVar8 * *(float *)param_2);
  *(float *)param_4 = fVar7;
  fVar1 = (fVar1 - fVar2) - (fVar8 * fVar5 + fVar8 * fVar5);
  *(float *)(param_4 + 4) = fVar1;
  fVar2 = (fVar3 - fVar4) - (fVar8 * fVar6 + fVar8 * fVar6);
  *(float *)(param_4 + 8) = fVar2;
  *(float *)param_4 = fVar7 + *(float *)param_1;
  *(float *)(param_4 + 4) = fVar1 + *(float *)(param_1 + 4);
  *(float *)(param_4 + 8) = fVar2 + *(float *)(param_1 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vect.cpp
   addr: 0054E210 */

void __fastcall m3dReflectVector(m3dV *param_1,m3dV *param_2,m3dV *param_3)

{
  float fVar1;
  
  fVar1 = (*(float *)(param_1 + 4) * *(float *)(param_2 + 4) +
          *(float *)(param_2 + 8) * *(float *)(param_1 + 8) + *(float *)param_1 * *(float *)param_2)
          * ___real_c0000000;
  *(float *)param_3 = fVar1 * *(float *)param_1 + *(float *)param_2;
  *(float *)(param_3 + 4) = fVar1 * *(float *)(param_1 + 4) + *(float *)(param_2 + 4);
  *(float *)(param_3 + 8) = fVar1 * *(float *)(param_1 + 8) + *(float *)(param_2 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vect.cpp
   addr: 0054E250 */

void __fastcall m3dWCS2SphereCoord(m3dV *param_1,float *param_2,float *param_3)

{
  float10 fVar1;
  float10 extraout_ST1;
  
  fVar1 = (float10)CIacos();
  *param_2 = (float)fVar1;
  fVar1 = (float10)fcos(fVar1);
  if ((float10)*(float *)param_1 / fVar1 < (float10)___real_bf7ff972) {
    *param_3 = _DAT_005de44c;
    return;
  }
  if (___real_3f7ff972 < (float)((float10)*(float *)param_1 / fVar1)) {
    *param_3 = 0.0;
    return;
  }
  if (___real_00000000 <= *(float *)(param_1 + 8)) {
    fVar1 = (float10)CIacos();
    *param_3 = (float)fVar1;
    return;
  }
  fVar1 = (float10)CIacos();
  *param_3 = (float)(extraout_ST1 - fVar1);
  return;
}

