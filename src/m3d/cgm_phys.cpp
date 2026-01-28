
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cgm_phys.cpp
   addr: 0055B1C0 */

float __fastcall
cgmGetThrowSpeed_XZ(m3dV *param_1,m3dV *param_2,float param_3,float param_4,m3dV *param_5)

{
  float fVar1;
  float fVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)param_2 - *(float *)param_1;
  local_8 = 0.0;
  local_4 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  m3dNormalize((m3dV *)&local_c);
  local_10 = (*(float *)param_1 - *(float *)param_2) * (*(float *)param_1 - *(float *)param_2) +
             (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) *
             (*(float *)(param_1 + 8) - *(float *)(param_2 + 8));
  if (m3dSimdType == 0) {
    local_10 = local_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)local_10),ZEXT416((uint)local_10));
    fVar6 = auVar7._0_4_;
    local_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_10 * fVar6 * fVar6) * local_10;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar3 = (ulonglong)(uint)local_10;
    uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
    uVar5 = PackedFloatingMUL(uVar4,uVar4);
    uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
    uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
    uVar4 = PackedFloatingMUL(uVar4,uVar3);
    local_10 = (float)uVar4;
    FastExitMediaState();
  }
  else {
    local_10 = SQRT(local_10);
  }
  local_10 = local_10 / param_3;
  fVar6 = *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_1 + 4);
  *(float *)param_5 = local_c * param_3;
  *(float *)(param_5 + 4) = local_8 * param_3;
  fVar2 = local_10 * local_10 * param_4 * ___real_3f000000;
  *(float *)(param_5 + 8) = local_4 * param_3;
  *(float *)(param_5 + 4) = ((fVar6 - fVar1) - fVar2) / local_10;
  return local_10;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cgm_phys.cpp
   addr: 0055B300 */

float __fastcall
cgmGetThrowSpeed_H(m3dV *param_1,m3dV *param_2,float param_3,float param_4,m3dV *param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = ABS(param_4);
  fVar5 = local_10 * param_3 + local_10 * param_3;
  if (m3dSimdType == 0) {
    fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar6 = auVar7._0_4_;
    param_3 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)fVar5;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    param_3 = (float)uVar3;
    FastExitMediaState();
  }
  else {
    param_3 = SQRT(fVar5);
  }
  iVar1 = m3dSolveQuadraticEq((float)&local_14,(float)&local_18,param_4 * ___real_3f000000,
                              (float *)param_3,
                              (float *)(*(float *)(param_1 + 4) - *(float *)(param_2 + 4)));
  if (iVar1 == 0) {
    param_4 = 0.0;
    local_10 = 0.0;
  }
  else {
    if (local_14 <= local_18) {
      local_10 = local_18;
    }
    else {
      local_10 = local_14;
    }
    fVar5 = (*(float *)param_2 - *(float *)param_1) * (*(float *)param_2 - *(float *)param_1) +
            (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) *
            (*(float *)(param_2 + 8) - *(float *)(param_1 + 8));
    if (m3dSimdType == 0) {
      fVar5 = fVar5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      param_4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
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
      param_4 = (float)uVar3;
      FastExitMediaState();
    }
    else {
      param_4 = SQRT(fVar5);
    }
    param_4 = param_4 / local_10;
  }
  local_c = *(float *)param_2 - *(float *)param_1;
  local_8 = 0.0;
  local_4 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  m3dNormalize((m3dV *)&local_c);
  *(float *)param_5 = local_c * param_4;
  *(float *)(param_5 + 4) = local_8 * param_4;
  *(float *)(param_5 + 8) = param_4 * local_4;
  *(float *)(param_5 + 4) = param_3;
  return local_10;
}

