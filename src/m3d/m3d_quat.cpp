
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_quat.cpp
   addr: 00566E00 */

int __fastcall m3dIsEqualQuat_A(m3dQUAT *param_1,m3dQUAT *param_2,float param_3)

{
  uint local_4;
  
  local_4 = (uint)(ABS(*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) < param_3);
  if ((((float)local_4 != ___real_00000000) &&
      (local_4 = (uint)(ABS(*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) < param_3),
      (float)local_4 != ___real_00000000)) &&
     (local_4 = (uint)(ABS(*(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc)) < param_3),
     (float)local_4 != ___real_00000000)) {
    param_3 = (float)(uint)(ABS(*(float *)param_2 - *(float *)param_1) < param_3);
    if ((float)(int)param_3 == ___real_00000000) {
      return 0;
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_quat.cpp
   addr: 00566F10 */

void __fastcall m3dSlerpQuat(m3dQUAT *param_1,m3dQUAT *param_2,float param_3,m3dQUAT *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_30 [4];
  float local_20 [4];
  float local_10 [4];
  
  local_20[1] = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
  local_20[2] = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
  local_20[3] = *(float *)(param_1 + 0xc) - *(float *)(param_2 + 0xc);
  if ((*(float *)param_1 + *(float *)param_2) * (*(float *)param_1 + *(float *)param_2) +
      (*(float *)(param_1 + 4) + *(float *)(param_2 + 4)) *
      (*(float *)(param_1 + 4) + *(float *)(param_2 + 4)) +
      (*(float *)(param_1 + 8) + *(float *)(param_2 + 8)) *
      (*(float *)(param_1 + 8) + *(float *)(param_2 + 8)) +
      (*(float *)(param_1 + 0xc) + *(float *)(param_2 + 0xc)) *
      (*(float *)(param_1 + 0xc) + *(float *)(param_2 + 0xc)) <
      (*(float *)param_1 - *(float *)param_2) * (*(float *)param_1 - *(float *)param_2) +
      local_20[1] * local_20[1] + local_20[2] * local_20[2] + local_20[3] * local_20[3]) {
    *(float *)param_2 = *(float *)param_2 * ___real_bf800000;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * ___real_bf800000;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * ___real_bf800000;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * ___real_bf800000;
  }
  local_30[3] = *(float *)param_1;
  local_30[0] = *(float *)(param_1 + 4);
  local_30[1] = *(float *)(param_1 + 8);
  local_30[2] = *(float *)(param_1 + 0xc);
  local_10[3] = *(float *)param_2;
  local_10[0] = *(float *)(param_2 + 4);
  local_10[1] = *(float *)(param_2 + 8);
  local_10[2] = *(float *)(param_2 + 0xc);
  fVar1 = *(float *)param_2 * local_30[3] +
          *(float *)(param_2 + 4) * local_30[0] +
          *(float *)(param_2 + 8) * local_30[1] + *(float *)(param_2 + 0xc) * local_30[2];
  if (fVar1 + ___real_3f800000 <= _DAT_005de664) {
    local_20[0] = -local_30[1];
    local_20[2] = -local_30[3];
    local_20[1] = local_30[0];
    fVar6 = (float10)fsin(((float10)___real_3f800000 - (float10)param_3) * (float10)_DAT_005de668 *
                          (float10)___real_3f000000);
    fVar4 = (float10)fsin((float10)_DAT_005de668 * (float10)param_3 * (float10)___real_3f000000);
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 4;
      *(float *)((int)local_20 + iVar2) =
           (float)(fVar4 * (float10)*(float *)((int)local_20 + iVar2) +
                  fVar6 * (float10)*(float *)((int)local_30 + iVar2));
      iVar2 = iVar3;
      local_20[3] = local_30[2];
    } while (iVar3 < 0xc);
  }
  else {
    if (___real_3f800000 - fVar1 <= _DAT_005de664) {
      fVar6 = (float10)___real_3f800000 - (float10)param_3;
      fVar4 = (float10)param_3;
    }
    else {
      fVar4 = (float10)CIacos();
      fVar5 = (float10)fsin(fVar4);
      fVar6 = (float10)fsin(((float10)___real_3f800000 - (float10)param_3) * (float10)(float)fVar4);
      fVar6 = fVar6 * (float10)(float)((float10)___real_3f800000 / fVar5);
      fVar4 = (float10)fsin((float10)(float)fVar4 * (float10)param_3);
      fVar4 = fVar4 * (float10)(float)((float10)___real_3f800000 / fVar5);
    }
    iVar2 = 0;
    do {
      iVar3 = iVar2 + 4;
      *(float *)((int)local_20 + iVar2) =
           (float)(fVar6 * (float10)*(float *)((int)local_30 + iVar2) +
                  fVar4 * (float10)*(float *)((int)local_10 + iVar2));
      iVar2 = iVar3;
    } while (iVar3 < 0x10);
  }
  *(float *)(param_4 + 4) = local_20[0];
  *(float *)param_4 = local_20[3];
  *(float *)(param_4 + 8) = local_20[1];
  *(float *)(param_4 + 0xc) = local_20[2];
  return;
}




/* from: m3d:m3d_quat.cpp
   addr: 00567160 */

void __thiscall m3dQUAT::Identity(m3dQUAT *this)

{
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_quat.cpp
   addr: 00567180 */

void __thiscall m3dQUAT::Invert(m3dQUAT *this)

{
  *(float *)(this + 4) = *(float *)(this + 4) * ___real_bf800000;
  *(float *)(this + 8) = *(float *)(this + 8) * ___real_bf800000;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) * ___real_bf800000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_quat.cpp
   addr: 005671B0 */

void __thiscall m3dQUAT::SetAngAxis(m3dQUAT *this,float param_1,m3dV *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1 * (float10)___real_3f000000 * (float10)_DAT_005de668 *
          (float10)___real_3bb60b61;
  fVar2 = (float10)fsin(fVar1);
  fVar1 = (float10)fcos(fVar1);
  *(float *)this = (float)fVar1;
  *(float *)(this + 4) = (float)(fVar2 * (float10)*(float *)param_2);
  *(float *)(this + 8) = (float)(fVar2 * (float10)*(float *)(param_2 + 4));
  *(float *)(this + 0xc) = (float)(fVar2 * (float10)*(float *)(param_2 + 8));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_quat.cpp
   addr: 005671F0 */

void __thiscall m3dQUAT::GetMatr(m3dQUAT *this,m3dMATR *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 8);
  fVar4 = *(float *)(this + 0xc);
  fVar6 = ___real_40000000 / (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
  fVar7 = fVar6 * fVar3;
  fVar8 = fVar6 * fVar4;
  fVar5 = fVar6 * fVar2 * fVar1;
  fVar6 = fVar6 * fVar2 * fVar2;
  *(float *)param_1 = ___real_3f800000 - (fVar8 * fVar4 + fVar7 * fVar3);
  *(float *)(param_1 + 4) = fVar7 * fVar2 + fVar8 * fVar1;
  *(float *)(param_1 + 8) = fVar8 * fVar2 - fVar7 * fVar1;
  *(float *)(param_1 + 0x10) = fVar7 * fVar2 - fVar8 * fVar1;
  *(float *)(param_1 + 0x14) = ___real_3f800000 - (fVar8 * fVar4 + fVar6);
  *(float *)(param_1 + 0x18) = fVar5 + fVar8 * fVar3;
  *(float *)(param_1 + 0x20) = fVar8 * fVar2 + fVar7 * fVar1;
  *(float *)(param_1 + 0x24) = fVar8 * fVar3 - fVar5;
  fVar1 = ___real_3f800000 - (fVar7 * fVar3 + fVar6);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 0x28) = fVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_quat.cpp
   addr: 00567320 */

void __thiscall m3dQUAT::SetRotMatr(m3dQUAT *this,m3dMATR *param_1)

{
  m3dMATR *pmVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 in_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_10 [4];
  
  pmVar1 = param_1;
  local_10[0] = 1.4013e-45;
  local_10[1] = 2.8026e-45;
  local_10[2] = 0.0;
  fVar6 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x14) + *(float *)param_1 +
          ___real_3f800000;
  if (fVar6 <= _DAT_005de664) {
    uVar2 = (uint)(*(float *)param_1 < *(float *)(param_1 + 0x14));
    if (*(float *)(param_1 + uVar2 * 0x14) < *(float *)(param_1 + 0x28)) {
      uVar2 = 2;
    }
    fVar6 = local_10[uVar2];
    fVar7 = local_10[(int)fVar6];
    fVar8 = (*(float *)(param_1 + uVar2 * 0x14) -
            (*(float *)(param_1 + (int)fVar7 * 0x14) + *(float *)(param_1 + (int)fVar6 * 0x14))) +
            ___real_3f800000;
    if (m3dSimdType == 0) {
      fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar10._0_4_;
      param_1 = (m3dMATR *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar8;
      uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      param_1 = (m3dMATR *)uVar4;
      FastExitMediaState();
    }
    else {
      param_1 = (m3dMATR *)SQRT(fVar8);
    }
    local_10[uVar2] = (float)param_1 * ___real_3f000000;
    fVar8 = ___real_3f000000 / (float)param_1;
    local_10[3] = (*(float *)(pmVar1 + ((int)fVar7 + (int)fVar6 * 4) * 4) -
                  *(float *)(pmVar1 + ((int)fVar6 + (int)fVar7 * 4) * 4)) * fVar8;
    local_10[(int)fVar6] =
         (*(float *)(pmVar1 + (uVar2 + (int)fVar6 * 4) * 4) +
         *(float *)(pmVar1 + ((int)fVar6 + uVar2 * 4) * 4)) * fVar8;
    local_10[(int)fVar7] =
         (*(float *)(pmVar1 + (uVar2 + (int)fVar7 * 4) * 4) +
         *(float *)(pmVar1 + ((int)fVar7 + uVar2 * 4) * 4)) * fVar8;
  }
  else {
    if (m3dSimdType == 0) {
      fVar6 = fVar6 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar10 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar10._0_4_;
      param_1 = (m3dMATR *)
                (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar6 * fVar7 * fVar7) * fVar6);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar6;
      uVar4 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      param_1 = (m3dMATR *)uVar4;
      FastExitMediaState();
    }
    else {
      param_1 = (m3dMATR *)SQRT(fVar6);
    }
    local_10[3] = (float)param_1 * ___real_3f000000;
    local_10[2] = ___real_3f000000 / (float)param_1;
    local_10[0] = (*(float *)(pmVar1 + 0x18) - *(float *)(pmVar1 + 0x24)) * local_10[2];
    local_10[1] = (*(float *)(pmVar1 + 0x20) - *(float *)(pmVar1 + 8)) * local_10[2];
    local_10[2] = (*(float *)(pmVar1 + 4) - *(float *)(pmVar1 + 0x10)) * local_10[2];
  }
  *(float *)(this + 0xc) = local_10[2];
  *(float *)this = local_10[3];
  *(float *)(this + 4) = local_10[0];
  *(float *)(this + 8) = local_10[1];
  return;
}




/* from: m3d:m3d_quat.cpp
   addr: 005675B0 */

void __thiscall m3dQUAT::SetMatr(m3dQUAT *this,m3dMATR *param_1)

{
  float local_8c;
  float local_88;
  float local_84;
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  m3dMATR::GetScale(param_1,&local_8c,&local_84,&local_88);
  m3dMATR::Identity(local_80);
  m3dMATR::Scale(local_80,local_8c,local_84,local_88,0);
  m3dMATR::Invert(local_80,local_40);
  m3dMultiplyMatr(local_40,param_1,local_80);
  m3dMATR::Translate(local_80,&m3dVZero,0);
  SetRotMatr(this,local_80);
  return;
}

