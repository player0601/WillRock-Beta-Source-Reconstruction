
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_math.cpp
   addr: 00549350 */

int __fastcall
m3dSolveQuadraticEq(float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  ulonglong uVar2;
  undefined8 in_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  uint local_4;
  
  local_4 = (uint)(ABS(param_3) < _DAT_005de438);
  if ((float)local_4 != ___real_00000000) {
    param_3 = (float)(uint)(ABS((float)param_4) < _DAT_005de438);
    if ((float)(int)param_3 != ___real_00000000) {
      return 0;
    }
    *(float *)param_2 = -((float)param_5 / (float)param_4);
    *(float *)param_1 = -((float)param_5 / (float)param_4);
    return 1;
  }
  param_5 = (float *)((float)param_4 * (float)param_4 - param_3 * (float)param_5 * ___real_40800000)
  ;
  if (_DAT_005de438 * ___real_c1200000 <= (float)param_5) {
    if ((float)param_5 <= ___real_00000000) {
      param_5 = (float *)0x0;
    }
    fVar1 = ___real_3f800000 / (param_3 + param_3);
    if ((float)param_5 < _DAT_005de438 * ___real_41200000) {
      *(float *)param_2 = -(fVar1 * (float)param_4);
      *(float *)param_1 = -(fVar1 * (float)param_4);
      return 1;
    }
    if (m3dSimdType == 0) {
      fVar5 = (float)param_5 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      param_3 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar5 * fVar6 * fVar6) * fVar5;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar2 = ZEXT48(param_5);
      uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
      uVar4 = PackedFloatingMUL(uVar3,uVar3);
      uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
      uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
      uVar3 = PackedFloatingMUL(uVar3,uVar2);
      param_3 = (float)uVar3;
      FastExitMediaState();
    }
    else {
      param_3 = SQRT((float)param_5);
    }
    *(float *)param_1 = (-(float)param_4 - param_3) * fVar1;
    *(float *)param_2 = (param_3 - (float)param_4) * fVar1;
    return 2;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_math.cpp
   addr: 00549550 */

int __fastcall m3dUpdateTimeField(float *param_1,float param_2)

{
  bool bVar1;
  float in_stack_00000004;
  
  if (*param_1 < _DAT_005de438 + in_stack_00000004) {
    bVar1 = _DAT_005de438 < *param_1;
    *param_1 = 0.0;
    return (uint)bVar1;
  }
  *param_1 = *param_1 - in_stack_00000004;
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_math.cpp
   addr: 005495A0 */

int __fastcall
m3dSolveLinSys2D(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,float *param_7,float *param_8)

{
  float fVar1;
  uint local_4;
  
  fVar1 = param_3 * param_6 - param_4 * param_5;
  local_4 = (uint)(ABS(fVar1) < _DAT_005de438);
  if ((float)local_4 != ___real_00000000) {
    return 0;
  }
  fVar1 = ___real_3f800000 / fVar1;
  *(float *)param_1 = (param_6 * (float)param_7 - param_4 * (float)param_8) * fVar1;
  *(float *)param_2 = (param_3 * (float)param_8 - param_5 * (float)param_7) * fVar1;
  return 1;
}




/* from: m3d:m3d_math.cpp
   addr: 00549640 */

int __fastcall m3dLimitChange_Float(float param_1,float param_2,float param_3,float *param_4)

{
  float fVar1;
  float in_stack_0000000c;
  
  if ((float)param_4 <= param_3) {
    fVar1 = param_3 - in_stack_0000000c;
    *(float *)param_1 = fVar1;
    if (fVar1 < (float)param_4 != (fVar1 == (float)param_4)) {
      *(float **)param_1 = param_4;
      return 1;
    }
  }
  else {
    *(float *)param_1 = param_3 + in_stack_0000000c;
    if ((float)param_4 <= param_3 + in_stack_0000000c) {
      *(float **)param_1 = param_4;
      return 1;
    }
  }
  return 0;
}

