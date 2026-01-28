
/* from: m3d:m3d_vol.cpp
   addr: 00554260 */

m3dVOL * __fastcall m3dVOL::Make(int param_1)

{
  m3dVOL *pmVar1;
  
  switch(param_1) {
  case 1:
    pmVar1 = (m3dVOL *)operator_new(0x20);
    if (pmVar1 != (m3dVOL *)0x0) {
      *(undefined4 *)(pmVar1 + 4) = 1;
      *(undefined ***)pmVar1 = &m3dBOX::_vftable_;
      return pmVar1;
    }
    break;
  case 2:
    pmVar1 = (m3dVOL *)operator_new(0xb4);
    if (pmVar1 != (m3dVOL *)0x0) {
      *(undefined4 *)(pmVar1 + 4) = 2;
      *(undefined ***)pmVar1 = &m3dPRISM::_vftable_;
      return pmVar1;
    }
    break;
  case 3:
    pmVar1 = (m3dVOL *)operator_new(0x18);
    if (pmVar1 != (m3dVOL *)0x0) {
      *(undefined4 *)(pmVar1 + 4) = 3;
      *(undefined ***)pmVar1 = &m3dSPHERE::_vftable_;
      return pmVar1;
    }
    break;
  case 4:
    pmVar1 = (m3dVOL *)operator_new(0x38);
    if (pmVar1 != (m3dVOL *)0x0) {
      *(undefined4 *)(pmVar1 + 4) = 4;
      *(undefined ***)pmVar1 = &m3dOBB::_vftable_;
      return pmVar1;
    }
  }
  return (m3dVOL *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vol.cpp
   addr: 00554300 */

int __thiscall m3dVOL::QualPlane(m3dVOL *this,m3dV *param_1,m3dV *param_2)

{
  int iVar1;
  m3dV *unaff_retaddr;
  undefined1 *puStack_1c;
  undefined **local_18;
  undefined4 local_14;
  float fStack_8;
  
  puStack_1c = (undefined1 *)&local_18;
  local_14 = 3;
  local_18 = &m3dSPHERE::_vftable_;
  (**(code **)(*(int *)this + 0x1c))();
  fStack_8 = fStack_8 * ___real_3f333333;
  iVar1 = m3dSPHERE::QualPlane((m3dSPHERE *)&puStack_1c,unaff_retaddr,param_1);
  return iVar1;
}




/* from: m3d:m3d_vol.cpp
   addr: 00554350 */

int __fastcall
m3dIsBelongPointCone
          (m3dV *param_1,m3dV *param_2,m3dV *param_3,float param_4,float param_5,float param_6)

{
  ulonglong uVar1;
  undefined8 in_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = (*(float *)param_2 - *(float *)param_1) * (*(float *)param_2 - *(float *)param_1) +
             (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) *
             (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) +
             (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) *
             (*(float *)(param_2 + 8) - *(float *)(param_1 + 8));
  if (m3dSimdType == 0) {
    local_10 = local_10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar4 = rsqrtss(ZEXT416((uint)local_10),ZEXT416((uint)local_10));
    fVar5 = auVar4._0_4_;
    local_10 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_10 * fVar5 * fVar5) * local_10;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar1 = (ulonglong)(uint)local_10;
    uVar2 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar1);
    uVar3 = PackedFloatingMUL(uVar2,uVar2);
    uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
    uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
    uVar2 = PackedFloatingMUL(uVar2,uVar1);
    local_10 = (float)uVar2;
    FastExitMediaState();
  }
  else {
    local_10 = SQRT(local_10);
  }
  if (param_5 <= local_10) {
    if (param_4 < local_10) {
      return 0;
    }
    local_c = *(float *)param_1 - *(float *)param_2;
    local_8 = *(float *)(param_1 + 4) - *(float *)(param_2 + 4);
    local_4 = *(float *)(param_1 + 8) - *(float *)(param_2 + 8);
    fVar5 = m3dAngleVector((m3dV *)&local_c,param_3);
    if (param_6 < ABS(fVar5)) {
      return 0;
    }
  }
  return 1;
}

