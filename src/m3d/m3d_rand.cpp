
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 00556600 */

float __fastcall m3dRandom(void)

{
  int iVar1;
  
  iVar1 = rand();
  return (float)iVar1 * ___real_38000100;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 00556620 */

float __fastcall m3dRandMax(float param_1)

{
  int iVar1;
  float in_stack_00000004;
  
  iVar1 = rand();
  return (float)iVar1 * in_stack_00000004 * ___real_38000100;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 00556640 */

float __fastcall m3dRandRange(float param_1,float param_2)

{
  int iVar1;
  float in_stack_00000004;
  float in_stack_00000008;
  
  iVar1 = rand();
  return (in_stack_00000008 - in_stack_00000004) * (float)iVar1 * ___real_38000100 +
         in_stack_00000004;
}




/* from: m3d:m3d_rand.cpp
   addr: 00556670 */

int __fastcall m3dRandIntMax(int param_1)

{
  int iVar1;
  
  rand();
  iVar1 = ftol();
  if (param_1 < iVar1) {
    iVar1 = param_1;
  }
  return iVar1;
}




/* from: m3d:m3d_rand.cpp
   addr: 005566A0 */

int __fastcall m3dRandIntRange(int param_1,int param_2)

{
  int iVar1;
  
  rand();
  iVar1 = ftol();
  if (param_2 - param_1 < iVar1) {
    return (param_2 - param_1) + param_1;
  }
  return iVar1 + param_1;
}




/* from: m3d:m3d_rand.cpp
   addr: 005566E0 */

int __thiscall m3dRND_GEN::RndIntMax(m3dRND_GEN *this,int param_1)

{
  *(int *)this = *(int *)this * 0x343fd + 0x269ec3;
  return ((*(ushort *)(this + 2) & 0x7fff) * param_1) / 0x7fff;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 00556720 */

float __thiscall m3dRND_GEN::RndFloat(m3dRND_GEN *this)

{
  uint uVar1;
  
  uVar1 = *(int *)this * 0x343fd + 0x269ec3;
  *(uint *)this = uVar1;
  return (float)((float10)uVar1 * (float10)___real_3df0000000100000);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 00556760 */

float __thiscall m3dRND_GEN::RndFloatMax(m3dRND_GEN *this,float param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)this * 0x343fd + 0x269ec3;
  *(uint *)this = uVar1;
  return (float)uVar1 * param_1 * (float)___real_3df0000000100000;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 005567A0 */

float __thiscall m3dRND_GEN::RndFloatRange(m3dRND_GEN *this,float param_1,float param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)this * 0x343fd + 0x269ec3;
  *(uint *)this = uVar1;
  return (float)uVar1 * (param_2 - param_1) * (float)___real_3df0000000100000 + param_1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 005567F0 */

void __fastcall m3dRandBasicCoord(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = rand();
  fVar1 = (float)iVar3 * ___real_38000100;
  iVar3 = rand();
  fVar2 = (float)iVar3 * ___real_38000100;
  if (fVar1 + fVar2 < ___real_3f800000 != (fVar1 + fVar2 == ___real_3f800000)) {
    *param_1 = fVar1;
    *param_2 = fVar2;
    return;
  }
  *param_1 = ___real_3f800000 - fVar2;
  *param_2 = ___real_3f800000 - fVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 00556870 */

void __fastcall m3dMakeVUnitRandom(m3dV *param_1)

{
  int iVar1;
  
  iVar1 = rand();
  *(float *)param_1 = (float)iVar1 * ___real_38000100 - ___real_3f000000;
  iVar1 = rand();
  *(float *)(param_1 + 4) = (float)iVar1 * ___real_38000100 - ___real_3f000000;
  iVar1 = rand();
  *(float *)(param_1 + 8) = (float)iVar1 * ___real_38000100 - ___real_3f000000;
  m3dNormalize(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 005568E0 */

void __fastcall m3dMakeVUnitConusRandom(m3dV *param_1,float param_2,m3dV *param_3)

{
  int iVar1;
  ulonglong uVar2;
  float10 fVar3;
  float10 fVar4;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
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
  float local_8;
  float local_4;
  
  local_34 = *(float *)param_1 * *(float *)param_1 +
             *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
             *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  if (m3dSimdType == 0) {
    local_34 = local_34 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)local_34),ZEXT416((uint)local_34));
    fVar7 = auVar8._0_4_;
    local_34 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_34 * fVar7 * fVar7) * local_34;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)local_34;
    uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar2);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar2);
    local_34 = (float)uVar5;
    FastExitMediaState();
  }
  else {
    local_34 = SQRT(local_34);
  }
  if (local_34 < _DAT_005de5b0) {
    *(undefined4 *)((int)param_2 + 8) = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)param_2 = 0;
    return;
  }
  iVar1 = rand();
  local_24 = (float)iVar1 * ___real_38000100 - ___real_3f000000;
  iVar1 = rand();
  local_20 = (float)iVar1 * ___real_38000100 - ___real_3f000000;
  iVar1 = rand();
  local_1c = (float)iVar1 * ___real_38000100 - ___real_3f000000;
  m3dNormalize((m3dV *)&local_24);
  fVar7 = local_24 * *(float *)param_1 +
          local_1c * *(float *)(param_1 + 8) + local_20 * *(float *)(param_1 + 4);
  local_14 = fVar7 * *(float *)(param_1 + 4);
  local_10 = fVar7 * *(float *)(param_1 + 8);
  local_30 = local_24 - fVar7 * *(float *)param_1;
  local_2c = local_20 - local_14;
  local_28 = local_1c - local_10;
  local_34 = local_30 * local_30 + local_2c * local_2c + local_28 * local_28;
  if (m3dSimdType == 0) {
    local_34 = local_34 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)local_34),ZEXT416((uint)local_34));
    fVar7 = auVar8._0_4_;
    local_34 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_34 * fVar7 * fVar7) * local_34;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)local_34;
    uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar2);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar2);
    local_34 = (float)uVar5;
    FastExitMediaState();
  }
  else {
    local_34 = SQRT(local_34);
  }
  if (_DAT_005de5b0 < local_34) {
    m3dNormalize((m3dV *)&local_30);
    iVar1 = rand();
    fVar3 = (float10)iVar1 * (float10)(float)param_3 * (float10)___real_38000100 *
            (float10)_DAT_005de5b4 * (float10)___real_3bb60b61;
    fVar4 = (float10)fcos(fVar3);
    local_18 = (float)(fVar4 * (float10)*(float *)param_1);
    local_14 = (float)(fVar4 * (float10)*(float *)(param_1 + 4));
    fVar7 = *(float *)(param_1 + 8);
    fVar3 = (float10)fsin(fVar3);
    local_8 = (float)((float10)local_2c * fVar3);
    local_4 = (float)((float10)local_28 * fVar3);
    *(float *)param_2 = (float)((float10)local_30 * fVar3 + (float10)local_18);
    *(float *)((int)param_2 + 4) = local_8 + local_14;
    *(float *)((int)param_2 + 8) = (float)((float10)local_4 + fVar4 * (float10)fVar7);
    m3dNormalize((m3dV *)param_2);
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(param_1 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 00556BE0 */

void __fastcall m3dMakeVTangRandom(m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  int iVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_18 = *(float *)param_1;
  local_14 = *(float *)(param_1 + 4);
  local_10 = *(float *)(param_1 + 8);
  iVar2 = m3dNormalize((m3dV *)&local_18);
  if (iVar2 == 0) {
    local_18 = _m3dVUnitY;
    local_14 = DAT_005f9994;
    local_10 = DAT_005f9998;
  }
  iVar2 = rand();
  *(float *)param_2 = (float)iVar2 * ___real_38000100 - ___real_3f000000;
  iVar2 = rand();
  *(float *)(param_2 + 4) = (float)iVar2 * ___real_38000100 - ___real_3f000000;
  iVar2 = rand();
  *(float *)(param_2 + 8) = (float)iVar2 * ___real_38000100 - ___real_3f000000;
  m3dNormalize(param_2);
  fVar1 = local_18 * *(float *)param_2 +
          local_14 * *(float *)(param_2 + 4) + local_10 * *(float *)(param_2 + 8);
  local_8 = fVar1 * local_14;
  local_4 = fVar1 * local_10;
  *(float *)param_2 = *(float *)param_2 - local_18 * fVar1;
  *(float *)(param_2 + 4) = *(float *)(param_2 + 4) - local_8;
  *(float *)(param_2 + 8) = *(float *)(param_2 + 8) - local_4;
  m3dNormalize(param_2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_rand.cpp
   addr: 00556CE0 */

void __fastcall m3dMakeVCylinderRandom(m3dV *param_1,float param_2,float param_3,m3dV *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 in_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_1c = *(float *)param_1 * *(float *)param_1 +
             *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
             *(float *)(param_1 + 8) * *(float *)(param_1 + 8);
  if (m3dSimdType == 0) {
    local_1c = local_1c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)local_1c),ZEXT416((uint)local_1c));
    fVar5 = auVar6._0_4_;
    local_1c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_1c * fVar5 * fVar5) * local_1c;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)local_1c;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_1c = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_1c = SQRT(local_1c);
  }
  if (local_1c < _DAT_005de5b0) {
    *(undefined4 *)((int)param_2 + 8) = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)param_2 = 0;
    return;
  }
  iVar1 = rand();
  local_18 = (float)iVar1 * ___real_38000100 - ___real_3f000000;
  iVar1 = rand();
  local_14 = (float)iVar1 * ___real_38000100 - ___real_3f000000;
  iVar1 = rand();
  local_10 = (float)iVar1 * ___real_38000100 - ___real_3f000000;
  m3dNormalize((m3dV *)&local_18);
  fVar5 = local_10 * *(float *)(param_1 + 8) +
          local_18 * *(float *)param_1 + local_14 * *(float *)(param_1 + 4);
  local_8 = fVar5 * *(float *)(param_1 + 4);
  local_4 = fVar5 * *(float *)(param_1 + 8);
  local_18 = local_18 - fVar5 * *(float *)param_1;
  local_14 = local_14 - local_8;
  local_10 = local_10 - local_4;
  m3dNormalize((m3dV *)&local_18);
  iVar1 = rand();
  fVar5 = (float)iVar1 * param_3 * ___real_38000100;
  local_18 = local_18 * fVar5;
  local_14 = local_14 * fVar5;
  local_10 = local_10 * fVar5;
  iVar1 = rand();
  fVar5 = (float)iVar1 * (float)param_4 * ___real_38000100;
  *(float *)param_2 = fVar5 * *(float *)param_1;
  *(float *)((int)param_2 + 4) = fVar5 * *(float *)(param_1 + 4);
  *(float *)((int)param_2 + 8) = fVar5 * *(float *)(param_1 + 8);
  *(float *)param_2 = local_18 + *(float *)param_2;
  *(float *)((int)param_2 + 4) = local_14 + *(float *)((int)param_2 + 4);
  *(float *)((int)param_2 + 8) = local_10 + *(float *)((int)param_2 + 8);
  return;
}




/* from: m3d:m3d_rand.cpp
   addr: 00556F00 */

int __fastcall m3dRandSelect(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = rand();
  if (0x3ffe < iVar1) {
    param_1 = param_2;
  }
  return param_1;
}




/* from: m3d:m3d_rand.cpp
   addr: 00556F20 */

int __fastcall m3dRandSelect(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = rand();
  if (iVar1 < 0x2aaa) {
    return param_1;
  }
  if (0x5553 < iVar1) {
    param_2 = param_3;
  }
  return param_2;
}




/* from: m3d:m3d_rand.cpp
   addr: 00556F50 */

int __fastcall m3dRandSelect(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = rand();
  if (iVar1 < 0x1fff) {
    return param_1;
  }
  if (iVar1 < 0x3fff) {
    return param_2;
  }
  if (0x5ffe < iVar1) {
    param_3 = param_4;
  }
  return param_3;
}

