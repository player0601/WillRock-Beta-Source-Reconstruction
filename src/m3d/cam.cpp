
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 005517F0 */

camCAMERA * __thiscall camCAMERA::camCAMERA(camCAMERA *this)

{
  camCAMERA *pcVar1;
  int iVar2;
  m3dMATR *pmVar3;
  camCAMERA *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  m3dMATR *pmVar7;
  camCAMERA *pcVar8;
  ulonglong uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  unkbyte10 extraout_ST1;
  unkbyte10 Var15;
  float fVar16;
  undefined1 auVar17 [16];
  float local_84;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  *(undefined4 *)(this + 0x80) = 0x3dcccccd;
  *(undefined4 *)(this + 0x84) = 0x47c35000;
  *(undefined4 *)(this + 0x154) = 0x3f400000;
  *(undefined4 *)(this + 0x14c) = 0x42a00000;
  fVar10 = (float10)fptan((float10)_DAT_005de598 * (float10)___real_3e638e39);
  fVar10 = (float10)fpatan(fVar10 * (float10)___real_3f400000,(float10)1);
  fVar10 = ((fVar10 + fVar10) / (float10)_DAT_005de598) * (float10)___real_43340000;
  *(float *)(this + 0x150) = (float)fVar10;
  fVar11 = (float10)fptan(fVar10 * (float10)_DAT_005de598 * (float10)___real_3bb60b61 *
                          (float10)___real_3f000000);
  fVar10 = (float10)___real_3e4ccccd;
  fVar12 = (float10)fptan((float10)_DAT_005de598 * (float10)___real_3ee38e39 *
                          (float10)___real_3f000000);
  SetViewportDx(this,(float)(fVar12 * (float10)___real_3e4ccccd));
  SetViewportDy(this,(float)(fVar11 * fVar10));
  m3dMATR::Identity((m3dMATR *)this);
  *(undefined4 *)(this + 0x28) = 0xbf800000;
  iVar6 = 3;
  pcVar4 = this;
  Var15 = extraout_ST1;
  do {
    iVar2 = 3;
    pcVar1 = pcVar4;
    local_84 = ___real_00000000;
    do {
      fVar16 = *(float *)pcVar1;
      pcVar1 = pcVar1 + 4;
      iVar2 = iVar2 + -1;
      local_84 = fVar16 * fVar16 + local_84;
    } while (iVar2 != 0);
    if (m3dSimdType == 0) {
      local_84 = local_84 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar17 = rsqrtss(ZEXT416((uint)local_84),ZEXT416((uint)local_84));
      fVar16 = auVar17._0_4_;
      local_84 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_84 * fVar16 * fVar16) *
                 local_84;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar9 = (ulonglong)(uint)local_84;
      uVar13 = PackedFloatingReciprocalSQRAprox((longlong)Var15,uVar9);
      uVar14 = PackedFloatingMUL(uVar13,uVar13);
      uVar14 = PackedFloatingReciprocalSQRIter1(uVar14,uVar9);
      uVar13 = PackedFloatingReciprocalIter2(uVar14,uVar13);
      uVar13 = PackedFloatingMUL(uVar13,uVar9);
      Var15 = CONCAT28((short)((unkuint10)Var15 >> 0x40),uVar13);
      local_84 = (float)uVar13;
      FastExitMediaState();
    }
    else {
      local_84 = SQRT(local_84);
    }
    local_84 = ___real_3f800000 / local_84;
    iVar2 = 3;
    pcVar1 = pcVar4;
    do {
      iVar2 = iVar2 + -1;
      *(float *)pcVar1 = local_84 * *(float *)pcVar1;
      pcVar1 = pcVar1 + 4;
    } while (iVar2 != 0);
    pcVar4 = pcVar4 + 0x10;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  pcVar4 = this + 0x40;
  pcVar1 = this;
  pcVar8 = pcVar4;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar1;
    pcVar1 = pcVar1 + 4;
    pcVar8 = pcVar8 + 4;
  }
  pmVar7 = local_80;
  puVar5 = local_74;
  local_84 = 4.2039e-45;
  do {
    iVar6 = 3;
    pcVar1 = pcVar4;
    pmVar3 = pmVar7;
    do {
      *(undefined4 *)pmVar3 = *(undefined4 *)pcVar1;
      pcVar1 = pcVar1 + 0x10;
      pmVar3 = pmVar3 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *puVar5 = 0;
    pmVar7 = pmVar7 + 0x10;
    puVar5 = puVar5 + 4;
    pcVar4 = pcVar4 + 4;
    local_84 = (float)((int)local_84 + -1);
  } while (local_84 != 0.0);
  local_44 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,(m3dMATR *)(this + 0x40));
  fVar16 = ___real_44200000 / *(float *)(this + 0x134);
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x144) = 0x44200000;
  *(undefined4 *)(this + 0x148) = 0x43f00000;
  *(float *)(this + 0x158) = fVar16;
  *(float *)(this + 0x15c) = ___real_43f00000 / *(float *)(this + 0x138);
  return this;
}




/* from: m3d:cam.cpp
   addr: 00551AB0 */

void __thiscall camCAMERA::~camCAMERA(camCAMERA *this)

{
  if (*(int **)(this + 0x1fc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1fc) + 4))(1);
  }
  if (*(int **)(this + 0x200) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x200) + 4))(1);
  }
  if (*(int **)(this + 0x204) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x204) + 4))(1);
  }
  if (*(int **)(this + 0x208) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x208) + 4))(1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00551B00 */

void __thiscall camCAMERA::SetViewportDx(camCAMERA *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 * ___real_bf000000;
  *(undefined4 *)(this + 0x88) = 4;
  *(float *)(this + 0x8c) = fVar1;
  fVar2 = param_1 * ___real_3f000000;
  *(float *)(this + 0x94) = fVar2;
  *(float *)(this + 0x9c) = fVar2;
  *(float *)(this + 0xa4) = fVar1;
  *(float *)(this + 300) = fVar1;
  *(float *)(this + 0x134) = param_1;
  *(float *)(this + 0x158) = *(float *)(this + 0x144) / param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00551B60 */

void __thiscall camCAMERA::SetViewportDy(camCAMERA *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 * ___real_bf000000;
  *(undefined4 *)(this + 0x88) = 4;
  *(float *)(this + 0x90) = fVar1;
  *(float *)(this + 0x98) = fVar1;
  fVar2 = param_1 * ___real_3f000000;
  *(float *)(this + 0xa0) = fVar2;
  *(float *)(this + 0xa8) = fVar2;
  *(float *)(this + 0x138) = param_1;
  *(float *)(this + 0x130) = fVar1;
  *(float *)(this + 0x15c) = *(float *)(this + 0x148) / param_1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00551BE0 */

void __thiscall camCAMERA::SetAspectRatioHW(camCAMERA *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  *(float *)(this + 0x154) = param_1;
  fVar4 = (float10)fptan((float10)*(float *)(this + 0x14c) * (float10)_DAT_005de598 *
                         (float10)___real_3bb60b61 * (float10)___real_3f000000);
  fVar5 = fVar4 * (float10)*(float *)(this + 0x80) + fVar4 * (float10)*(float *)(this + 0x80);
  fVar4 = (float10)fptan((float10)*(float *)(this + 0x150) * (float10)_DAT_005de598 *
                         (float10)___real_3bb60b61 * (float10)___real_3f000000);
  *(undefined4 *)(this + 0x88) = 4;
  fVar1 = (float)(fVar4 * (float10)*(float *)(this + 0x80) +
                 fVar4 * (float10)*(float *)(this + 0x80));
  fVar6 = (float10)___real_bf000000 * fVar5;
  *(float *)(this + 0x8c) = (float)fVar6;
  fVar4 = (float10)___real_3f000000;
  *(float *)(this + 0x94) = (float)(fVar5 * fVar4);
  *(float *)(this + 0x9c) = (float)(fVar5 * fVar4);
  *(float *)(this + 0xa4) = (float)fVar6;
  *(float *)(this + 300) = (float)fVar6;
  *(float *)(this + 0x134) = (float)fVar5;
  *(float *)(this + 0x158) = (float)((float10)*(float *)(this + 0x144) / fVar5);
  *(undefined4 *)(this + 0x88) = 4;
  fVar2 = fVar1 * ___real_bf000000;
  *(float *)(this + 0x90) = fVar2;
  *(float *)(this + 0x98) = fVar2;
  fVar3 = fVar1 * ___real_3f000000;
  *(float *)(this + 0xa0) = fVar3;
  *(float *)(this + 0xa8) = fVar3;
  *(float *)(this + 0x138) = fVar1;
  *(float *)(this + 0x130) = fVar2;
  *(float *)(this + 0x15c) = *(float *)(this + 0x148) / fVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00551CE0 */

void __thiscall camCAMERA::SetAngleHor(camCAMERA *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)___real_3f000000;
  *(float *)(this + 0x14c) = param_1;
  fVar4 = (float10)fptan((float10)param_1 * fVar4 * (float10)_DAT_005de598 *
                         (float10)___real_3bb60b61);
  fVar4 = (float10)fpatan(fVar4 * (float10)*(float *)(this + 0x154),(float10)1);
  fVar4 = ((fVar4 + fVar4) / (float10)_DAT_005de598) * (float10)___real_43340000;
  *(float *)(this + 0x150) = (float)fVar4;
  fVar5 = (float10)fptan((float10)param_1 * (float10)_DAT_005de598 * (float10)___real_3bb60b61 *
                         (float10)___real_3f000000);
  fVar1 = (float)(fVar5 * (float10)*(float *)(this + 0x80) +
                 fVar5 * (float10)*(float *)(this + 0x80));
  fVar4 = (float10)fptan(fVar4 * (float10)_DAT_005de598 * (float10)___real_3bb60b61 *
                         (float10)___real_3f000000);
  *(undefined4 *)(this + 0x88) = 4;
  fVar5 = fVar4 * (float10)*(float *)(this + 0x80) + fVar4 * (float10)*(float *)(this + 0x80);
  fVar2 = fVar1 * ___real_bf000000;
  *(float *)(this + 0x8c) = fVar2;
  fVar3 = fVar1 * ___real_3f000000;
  *(float *)(this + 0x94) = fVar3;
  *(float *)(this + 0x9c) = fVar3;
  *(float *)(this + 0xa4) = fVar2;
  *(float *)(this + 300) = fVar2;
  *(float *)(this + 0x134) = fVar1;
  *(float *)(this + 0x158) = *(float *)(this + 0x144) / fVar1;
  fVar6 = (float10)___real_bf000000 * fVar5;
  *(undefined4 *)(this + 0x88) = 4;
  *(float *)(this + 0x90) = (float)fVar6;
  *(float *)(this + 0x98) = (float)fVar6;
  fVar4 = (float10)___real_3f000000;
  *(float *)(this + 0xa0) = (float)(fVar5 * fVar4);
  *(float *)(this + 0xa8) = (float)(fVar5 * fVar4);
  *(float *)(this + 0x130) = (float)fVar6;
  *(float *)(this + 0x138) = (float)fVar5;
  *(float *)(this + 0x15c) = (float)((float10)*(float *)(this + 0x148) / fVar5);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00551E10 */

void __thiscall camCAMERA::SetAngleVert(camCAMERA *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)___real_3f000000;
  *(float *)(this + 0x150) = param_1;
  fVar4 = (float10)fptan((float10)param_1 * fVar4 * (float10)_DAT_005de598 *
                         (float10)___real_3bb60b61);
  fVar4 = (float10)fpatan(fVar4 / (float10)*(float *)(this + 0x154),(float10)1);
  fVar4 = ((fVar4 + fVar4) / (float10)_DAT_005de598) * (float10)___real_43340000;
  *(float *)(this + 0x14c) = (float)fVar4;
  fVar4 = (float10)fptan(fVar4 * (float10)_DAT_005de598 * (float10)___real_3bb60b61 *
                         (float10)___real_3f000000);
  fVar5 = fVar4 * (float10)*(float *)(this + 0x80) + fVar4 * (float10)*(float *)(this + 0x80);
  fVar4 = (float10)fptan((float10)param_1 * (float10)_DAT_005de598 * (float10)___real_3bb60b61 *
                         (float10)___real_3f000000);
  *(undefined4 *)(this + 0x88) = 4;
  fVar1 = (float)(fVar4 * (float10)*(float *)(this + 0x80) +
                 fVar4 * (float10)*(float *)(this + 0x80));
  fVar6 = (float10)___real_bf000000 * fVar5;
  *(float *)(this + 0x8c) = (float)fVar6;
  fVar4 = (float10)___real_3f000000;
  *(float *)(this + 0x94) = (float)(fVar5 * fVar4);
  *(float *)(this + 0x9c) = (float)(fVar5 * fVar4);
  *(float *)(this + 0xa4) = (float)fVar6;
  *(float *)(this + 300) = (float)fVar6;
  *(float *)(this + 0x134) = (float)fVar5;
  *(float *)(this + 0x158) = (float)((float10)*(float *)(this + 0x144) / fVar5);
  *(undefined4 *)(this + 0x88) = 4;
  fVar2 = fVar1 * ___real_bf000000;
  *(float *)(this + 0x90) = fVar2;
  *(float *)(this + 0x98) = fVar2;
  fVar3 = fVar1 * ___real_3f000000;
  *(float *)(this + 0xa0) = fVar3;
  *(float *)(this + 0xa8) = fVar3;
  *(float *)(this + 0x138) = fVar1;
  *(float *)(this + 0x130) = fVar2;
  *(float *)(this + 0x15c) = *(float *)(this + 0x148) / fVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00551F40 */

void __thiscall camCAMERA::SetNearPlane(camCAMERA *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  *(float *)(this + 0x80) = param_1;
  fVar4 = (float10)fptan((float10)*(float *)(this + 0x14c) * (float10)_DAT_005de598 *
                         (float10)___real_3bb60b61 * (float10)___real_3f000000);
  fVar5 = fVar4 * (float10)param_1 + fVar4 * (float10)param_1;
  fVar4 = (float10)_DAT_005de598;
  *(undefined4 *)(this + 0x88) = 4;
  fVar4 = (float10)fptan((float10)*(float *)(this + 0x150) * fVar4 * (float10)___real_3bb60b61 *
                         (float10)___real_3f000000);
  fVar1 = (float)(fVar4 * (float10)param_1 + fVar4 * (float10)param_1);
  fVar6 = (float10)___real_bf000000 * fVar5;
  *(float *)(this + 0x8c) = (float)fVar6;
  fVar4 = (float10)___real_3f000000;
  *(float *)(this + 0x94) = (float)(fVar5 * fVar4);
  *(float *)(this + 0x9c) = (float)(fVar5 * fVar4);
  *(float *)(this + 0xa4) = (float)fVar6;
  *(float *)(this + 300) = (float)fVar6;
  *(float *)(this + 0x134) = (float)fVar5;
  *(float *)(this + 0x158) = (float)((float10)*(float *)(this + 0x144) / fVar5);
  *(undefined4 *)(this + 0x88) = 4;
  fVar2 = fVar1 * ___real_bf000000;
  *(float *)(this + 0x90) = fVar2;
  *(float *)(this + 0x98) = fVar2;
  fVar3 = fVar1 * ___real_3f000000;
  *(float *)(this + 0xa0) = fVar3;
  *(float *)(this + 0xa8) = fVar3;
  *(float *)(this + 0x138) = fVar1;
  *(float *)(this + 0x130) = fVar2;
  *(float *)(this + 0x15c) = *(float *)(this + 0x148) / fVar1;
  return;
}




/* from: m3d:cam.cpp
   addr: 00552040 */

void __thiscall
camCAMERA::SetViewWindow(camCAMERA *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x13c) = param_1;
  *(float *)(this + 0x140) = param_2;
  *(float *)(this + 0x144) = param_3;
  *(float *)(this + 0x148) = param_4;
  *(float *)(this + 0x158) = param_3 / *(float *)(this + 0x134);
  *(float *)(this + 0x15c) = param_4 / *(float *)(this + 0x138);
  return;
}




/* from: m3d:cam.cpp
   addr: 00552090 */

void __thiscall
camCAMERA::SetViewPort(camCAMERA *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x8c) = param_1;
  *(float *)(this + 0x90) = param_2;
  *(float *)(this + 0x94) = param_1 + param_3;
  *(float *)(this + 0x9c) = param_1 + param_3;
  *(float *)(this + 0x98) = param_2;
  *(float *)(this + 0xa4) = param_1;
  *(float *)(this + 0xa0) = param_2 + param_4;
  *(float *)(this + 0xa8) = param_2 + param_4;
  *(float *)(this + 300) = param_1;
  *(float *)(this + 0x130) = param_2;
  *(float *)(this + 0x134) = param_3;
  *(float *)(this + 0x138) = param_4;
  *(float *)(this + 0x158) = *(float *)(this + 0x144) / param_3;
  *(float *)(this + 0x15c) = *(float *)(this + 0x148) / param_4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00552130 */

void __thiscall camCAMERA::MoveTo(camCAMERA *this,m3dV *param_1)

{
  m3dMATR *pmVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  camCAMERA *pcVar4;
  m3dMATR *pmVar5;
  int iVar6;
  undefined4 *puVar7;
  camCAMERA *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  m3dMATR *pmVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  unkbyte10 in_ST1;
  float fVar16;
  undefined1 auVar17 [16];
  float local_84;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 4);
  puVar10 = (undefined4 *)&stack0xffffff70;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x34) = uVar3;
  iVar11 = 3;
  *(undefined4 *)(this + 0x38) = uVar2;
  pcVar8 = this;
  do {
    iVar6 = 3;
    pcVar4 = pcVar8;
    local_84 = ___real_00000000;
    do {
      fVar16 = *(float *)pcVar4;
      pcVar4 = pcVar4 + 4;
      iVar6 = iVar6 + -1;
      local_84 = fVar16 * fVar16 + local_84;
    } while (iVar6 != 0);
    if (m3dSimdType == 0) {
      local_84 = local_84 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar17 = rsqrtss(ZEXT416((uint)local_84),ZEXT416((uint)local_84));
      fVar16 = auVar17._0_4_;
      local_84 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar16 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_84 * fVar16 * fVar16) *
                 local_84;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar13 = (ulonglong)(uint)local_84;
      uVar14 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar13);
      uVar15 = PackedFloatingMUL(uVar14,uVar14);
      uVar15 = PackedFloatingReciprocalSQRIter1(uVar15,uVar13);
      uVar14 = PackedFloatingReciprocalIter2(uVar15,uVar14);
      uVar14 = PackedFloatingMUL(uVar14,uVar13);
      in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar14);
      local_84 = (float)uVar14;
      FastExitMediaState();
    }
    else {
      local_84 = SQRT(local_84);
    }
    local_84 = ___real_3f800000 / local_84;
    iVar6 = 3;
    pcVar4 = pcVar8;
    do {
      iVar6 = iVar6 + -1;
      *(float *)pcVar4 = local_84 * *(float *)pcVar4;
      pcVar4 = pcVar4 + 4;
    } while (iVar6 != 0);
    pcVar8 = pcVar8 + 0x10;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  pmVar1 = (m3dMATR *)(this + 0x40);
  puVar9 = local_74;
  pcVar8 = this;
  pmVar12 = pmVar1;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)pmVar12 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pmVar12 = pmVar12 + 4;
  }
  local_84 = 4.2039e-45;
  pmVar12 = pmVar1;
  do {
    puVar10 = puVar10 + 4;
    iVar11 = 3;
    pmVar5 = pmVar12;
    puVar7 = puVar10;
    do {
      *puVar7 = *(undefined4 *)pmVar5;
      pmVar5 = pmVar5 + 0x10;
      puVar7 = puVar7 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    *puVar9 = 0;
    puVar9 = puVar9 + 4;
    pmVar12 = pmVar12 + 4;
    local_84 = (float)((int)local_84 + -1);
  } while (local_84 != 0.0);
  local_50 = 0;
  local_44 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,pmVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 005522F0 */

void __thiscall camCAMERA::MoveRelForw(camCAMERA *this,float param_1)

{
  m3dMATR *pmVar1;
  camCAMERA *pcVar2;
  m3dMATR *pmVar3;
  int iVar4;
  m3dMATR *pmVar5;
  camCAMERA *pcVar6;
  undefined4 *puVar7;
  m3dMATR *pmVar8;
  int iVar9;
  m3dMATR *pmVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  unkbyte10 extraout_ST1;
  unkbyte10 Var14;
  float fVar15;
  undefined1 auVar16 [16];
  float local_84;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  m3dMATR::Translate((m3dMATR *)this,0.0,0.0,-param_1,1);
  iVar9 = 3;
  pcVar6 = this;
  Var14 = extraout_ST1;
  do {
    iVar4 = 3;
    pcVar2 = pcVar6;
    local_84 = ___real_00000000;
    do {
      fVar15 = *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
      iVar4 = iVar4 + -1;
      local_84 = fVar15 * fVar15 + local_84;
    } while (iVar4 != 0);
    if (m3dSimdType == 0) {
      local_84 = local_84 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar16 = rsqrtss(ZEXT416((uint)local_84),ZEXT416((uint)local_84));
      fVar15 = auVar16._0_4_;
      local_84 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar15 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_84 * fVar15 * fVar15) *
                 local_84;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar11 = (ulonglong)(uint)local_84;
      uVar12 = PackedFloatingReciprocalSQRAprox((longlong)Var14,uVar11);
      uVar13 = PackedFloatingMUL(uVar12,uVar12);
      uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
      uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar11);
      Var14 = CONCAT28((short)((unkuint10)Var14 >> 0x40),uVar12);
      local_84 = (float)uVar12;
      FastExitMediaState();
    }
    else {
      local_84 = SQRT(local_84);
    }
    local_84 = ___real_3f800000 / local_84;
    iVar4 = 3;
    pcVar2 = pcVar6;
    do {
      iVar4 = iVar4 + -1;
      *(float *)pcVar2 = local_84 * *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
    } while (iVar4 != 0);
    pcVar6 = pcVar6 + 0x10;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pmVar1 = (m3dMATR *)(this + 0x40);
  puVar7 = local_74;
  pcVar6 = this;
  pmVar8 = pmVar1;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pmVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pmVar8 = pmVar8 + 4;
  }
  pmVar8 = local_80;
  local_84 = 4.2039e-45;
  pmVar10 = pmVar1;
  do {
    iVar9 = 3;
    pmVar3 = pmVar10;
    pmVar5 = pmVar8;
    do {
      *(undefined4 *)pmVar5 = *(undefined4 *)pmVar3;
      pmVar3 = pmVar3 + 0x10;
      pmVar5 = pmVar5 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *puVar7 = 0;
    pmVar8 = pmVar8 + 0x10;
    puVar7 = puVar7 + 4;
    pmVar10 = pmVar10 + 4;
    local_84 = (float)((int)local_84 + -1);
  } while (local_84 != 0.0);
  local_50 = 0;
  local_44 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,pmVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 005524B0 */

void __thiscall camCAMERA::MoveRelSide(camCAMERA *this,float param_1)

{
  m3dMATR *pmVar1;
  camCAMERA *pcVar2;
  m3dMATR *pmVar3;
  int iVar4;
  m3dMATR *pmVar5;
  camCAMERA *pcVar6;
  undefined4 *puVar7;
  m3dMATR *pmVar8;
  int iVar9;
  m3dMATR *pmVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  unkbyte10 extraout_ST1;
  unkbyte10 Var14;
  float fVar15;
  undefined1 auVar16 [16];
  float local_84;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  m3dMATR::Translate((m3dMATR *)this,param_1,0.0,0.0,1);
  iVar9 = 3;
  pcVar6 = this;
  Var14 = extraout_ST1;
  do {
    iVar4 = 3;
    pcVar2 = pcVar6;
    local_84 = ___real_00000000;
    do {
      fVar15 = *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
      iVar4 = iVar4 + -1;
      local_84 = fVar15 * fVar15 + local_84;
    } while (iVar4 != 0);
    if (m3dSimdType == 0) {
      local_84 = local_84 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar16 = rsqrtss(ZEXT416((uint)local_84),ZEXT416((uint)local_84));
      fVar15 = auVar16._0_4_;
      local_84 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar15 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_84 * fVar15 * fVar15) *
                 local_84;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar11 = (ulonglong)(uint)local_84;
      uVar12 = PackedFloatingReciprocalSQRAprox((longlong)Var14,uVar11);
      uVar13 = PackedFloatingMUL(uVar12,uVar12);
      uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
      uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar11);
      Var14 = CONCAT28((short)((unkuint10)Var14 >> 0x40),uVar12);
      local_84 = (float)uVar12;
      FastExitMediaState();
    }
    else {
      local_84 = SQRT(local_84);
    }
    local_84 = ___real_3f800000 / local_84;
    iVar4 = 3;
    pcVar2 = pcVar6;
    do {
      iVar4 = iVar4 + -1;
      *(float *)pcVar2 = local_84 * *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
    } while (iVar4 != 0);
    pcVar6 = pcVar6 + 0x10;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pmVar1 = (m3dMATR *)(this + 0x40);
  puVar7 = local_74;
  pcVar6 = this;
  pmVar8 = pmVar1;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pmVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pmVar8 = pmVar8 + 4;
  }
  pmVar8 = local_80;
  local_84 = 4.2039e-45;
  pmVar10 = pmVar1;
  do {
    iVar9 = 3;
    pmVar3 = pmVar10;
    pmVar5 = pmVar8;
    do {
      *(undefined4 *)pmVar5 = *(undefined4 *)pmVar3;
      pmVar3 = pmVar3 + 0x10;
      pmVar5 = pmVar5 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *puVar7 = 0;
    pmVar8 = pmVar8 + 0x10;
    puVar7 = puVar7 + 4;
    pmVar10 = pmVar10 + 4;
    local_84 = (float)((int)local_84 + -1);
  } while (local_84 != 0.0);
  local_44 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,pmVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00552660 */

void __thiscall camCAMERA::MoveRelUp(camCAMERA *this,float param_1)

{
  m3dMATR *pmVar1;
  camCAMERA *pcVar2;
  m3dMATR *pmVar3;
  int iVar4;
  m3dMATR *pmVar5;
  camCAMERA *pcVar6;
  undefined4 *puVar7;
  m3dMATR *pmVar8;
  int iVar9;
  m3dMATR *pmVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  unkbyte10 extraout_ST1;
  unkbyte10 Var14;
  float fVar15;
  undefined1 auVar16 [16];
  float local_84;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  m3dMATR::Translate((m3dMATR *)this,0.0,param_1,0.0,1);
  iVar9 = 3;
  pcVar6 = this;
  Var14 = extraout_ST1;
  do {
    iVar4 = 3;
    pcVar2 = pcVar6;
    local_84 = ___real_00000000;
    do {
      fVar15 = *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
      iVar4 = iVar4 + -1;
      local_84 = fVar15 * fVar15 + local_84;
    } while (iVar4 != 0);
    if (m3dSimdType == 0) {
      local_84 = local_84 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar16 = rsqrtss(ZEXT416((uint)local_84),ZEXT416((uint)local_84));
      fVar15 = auVar16._0_4_;
      local_84 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar15 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_84 * fVar15 * fVar15) *
                 local_84;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar11 = (ulonglong)(uint)local_84;
      uVar12 = PackedFloatingReciprocalSQRAprox((longlong)Var14,uVar11);
      uVar13 = PackedFloatingMUL(uVar12,uVar12);
      uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
      uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar11);
      Var14 = CONCAT28((short)((unkuint10)Var14 >> 0x40),uVar12);
      local_84 = (float)uVar12;
      FastExitMediaState();
    }
    else {
      local_84 = SQRT(local_84);
    }
    local_84 = ___real_3f800000 / local_84;
    iVar4 = 3;
    pcVar2 = pcVar6;
    do {
      iVar4 = iVar4 + -1;
      *(float *)pcVar2 = local_84 * *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
    } while (iVar4 != 0);
    pcVar6 = pcVar6 + 0x10;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pmVar1 = (m3dMATR *)(this + 0x40);
  puVar7 = local_74;
  pcVar6 = this;
  pmVar8 = pmVar1;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pmVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pmVar8 = pmVar8 + 4;
  }
  pmVar8 = local_80;
  local_84 = 4.2039e-45;
  pmVar10 = pmVar1;
  do {
    iVar9 = 3;
    pmVar3 = pmVar10;
    pmVar5 = pmVar8;
    do {
      *(undefined4 *)pmVar5 = *(undefined4 *)pmVar3;
      pmVar3 = pmVar3 + 0x10;
      pmVar5 = pmVar5 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *puVar7 = 0;
    pmVar8 = pmVar8 + 0x10;
    puVar7 = puVar7 + 4;
    pmVar10 = pmVar10 + 4;
    local_84 = (float)((int)local_84 + -1);
  } while (local_84 != 0.0);
  local_44 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,pmVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00552810 */

void __thiscall camCAMERA::MoveRel(camCAMERA *this,m3dV *param_1)

{
  m3dMATR *pmVar1;
  camCAMERA *pcVar2;
  m3dMATR *pmVar3;
  int iVar4;
  m3dMATR *pmVar5;
  camCAMERA *pcVar6;
  undefined4 *puVar7;
  m3dMATR *pmVar8;
  int iVar9;
  m3dMATR *pmVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  unkbyte10 extraout_ST1;
  unkbyte10 Var14;
  float fVar15;
  undefined1 auVar16 [16];
  float local_84;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  m3dMATR::Translate((m3dMATR *)this,*(float *)param_1,*(float *)(param_1 + 4),
                     *(float *)(param_1 + 8),1);
  iVar9 = 3;
  pcVar6 = this;
  Var14 = extraout_ST1;
  do {
    iVar4 = 3;
    pcVar2 = pcVar6;
    local_84 = ___real_00000000;
    do {
      fVar15 = *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
      iVar4 = iVar4 + -1;
      local_84 = fVar15 * fVar15 + local_84;
    } while (iVar4 != 0);
    if (m3dSimdType == 0) {
      local_84 = local_84 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar16 = rsqrtss(ZEXT416((uint)local_84),ZEXT416((uint)local_84));
      fVar15 = auVar16._0_4_;
      local_84 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar15 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_84 * fVar15 * fVar15) *
                 local_84;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar11 = (ulonglong)(uint)local_84;
      uVar12 = PackedFloatingReciprocalSQRAprox((longlong)Var14,uVar11);
      uVar13 = PackedFloatingMUL(uVar12,uVar12);
      uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
      uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar11);
      Var14 = CONCAT28((short)((unkuint10)Var14 >> 0x40),uVar12);
      local_84 = (float)uVar12;
      FastExitMediaState();
    }
    else {
      local_84 = SQRT(local_84);
    }
    local_84 = ___real_3f800000 / local_84;
    iVar4 = 3;
    pcVar2 = pcVar6;
    do {
      iVar4 = iVar4 + -1;
      *(float *)pcVar2 = local_84 * *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
    } while (iVar4 != 0);
    pcVar6 = pcVar6 + 0x10;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pmVar1 = (m3dMATR *)(this + 0x40);
  puVar7 = local_74;
  pcVar6 = this;
  pmVar8 = pmVar1;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pmVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pmVar8 = pmVar8 + 4;
  }
  pmVar8 = local_80;
  local_84 = 4.2039e-45;
  pmVar10 = pmVar1;
  do {
    iVar9 = 3;
    pmVar3 = pmVar10;
    pmVar5 = pmVar8;
    do {
      *(undefined4 *)pmVar5 = *(undefined4 *)pmVar3;
      pmVar3 = pmVar3 + 0x10;
      pmVar5 = pmVar5 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *puVar7 = 0;
    pmVar8 = pmVar8 + 0x10;
    puVar7 = puVar7 + 4;
    pmVar10 = pmVar10 + 4;
    local_84 = (float)((int)local_84 + -1);
  } while (local_84 != 0.0);
  local_50 = 0;
  local_44 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,pmVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 005529D0 */

void __thiscall camCAMERA::TurnRelAroundX(camCAMERA *this,float param_1)

{
  m3dMATR *pmVar1;
  camCAMERA *pcVar2;
  m3dMATR *pmVar3;
  int iVar4;
  m3dMATR *pmVar5;
  camCAMERA *pcVar6;
  undefined4 *puVar7;
  m3dMATR *pmVar8;
  int iVar9;
  m3dMATR *pmVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  unkbyte10 extraout_ST1;
  unkbyte10 Var14;
  float fVar15;
  undefined1 auVar16 [16];
  float local_84;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  m3dMATR::RotateX((m3dMATR *)this,param_1,1);
  iVar9 = 3;
  pcVar6 = this;
  Var14 = extraout_ST1;
  do {
    iVar4 = 3;
    pcVar2 = pcVar6;
    local_84 = ___real_00000000;
    do {
      fVar15 = *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
      iVar4 = iVar4 + -1;
      local_84 = fVar15 * fVar15 + local_84;
    } while (iVar4 != 0);
    if (m3dSimdType == 0) {
      local_84 = local_84 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar16 = rsqrtss(ZEXT416((uint)local_84),ZEXT416((uint)local_84));
      fVar15 = auVar16._0_4_;
      local_84 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar15 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_84 * fVar15 * fVar15) *
                 local_84;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar11 = (ulonglong)(uint)local_84;
      uVar12 = PackedFloatingReciprocalSQRAprox((longlong)Var14,uVar11);
      uVar13 = PackedFloatingMUL(uVar12,uVar12);
      uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
      uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar11);
      Var14 = CONCAT28((short)((unkuint10)Var14 >> 0x40),uVar12);
      local_84 = (float)uVar12;
      FastExitMediaState();
    }
    else {
      local_84 = SQRT(local_84);
    }
    local_84 = ___real_3f800000 / local_84;
    iVar4 = 3;
    pcVar2 = pcVar6;
    do {
      iVar4 = iVar4 + -1;
      *(float *)pcVar2 = local_84 * *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
    } while (iVar4 != 0);
    pcVar6 = pcVar6 + 0x10;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pmVar1 = (m3dMATR *)(this + 0x40);
  puVar7 = local_74;
  pcVar6 = this;
  pmVar8 = pmVar1;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pmVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pmVar8 = pmVar8 + 4;
  }
  pmVar8 = local_80;
  local_84 = 4.2039e-45;
  pmVar10 = pmVar1;
  do {
    iVar9 = 3;
    pmVar3 = pmVar10;
    pmVar5 = pmVar8;
    do {
      *(undefined4 *)pmVar5 = *(undefined4 *)pmVar3;
      pmVar3 = pmVar3 + 0x10;
      pmVar5 = pmVar5 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *puVar7 = 0;
    pmVar8 = pmVar8 + 0x10;
    puVar7 = puVar7 + 4;
    pmVar10 = pmVar10 + 4;
    local_84 = (float)((int)local_84 + -1);
  } while (local_84 != 0.0);
  local_44 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,pmVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00552B80 */

void __thiscall camCAMERA::TurnAroundVert(camCAMERA *this,float param_1)

{
  m3dMATR *pmVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  camCAMERA *pcVar5;
  m3dMATR *pmVar6;
  int iVar7;
  m3dMATR *pmVar8;
  camCAMERA *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  m3dMATR *pmVar12;
  m3dMATR *pmVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  unkbyte10 extraout_ST1;
  unkbyte10 Var17;
  float fVar18;
  undefined1 auVar19 [16];
  float local_8c;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  uVar2 = *(undefined4 *)(this + 0x30);
  uVar3 = *(undefined4 *)(this + 0x34);
  uVar4 = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  m3dMATR::RotateY((m3dMATR *)this,param_1,2);
  *(undefined4 *)(this + 0x34) = uVar3;
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar4;
  iVar10 = 3;
  pcVar9 = this;
  Var17 = extraout_ST1;
  do {
    iVar7 = 3;
    pcVar5 = pcVar9;
    local_8c = ___real_00000000;
    do {
      fVar18 = *(float *)pcVar5;
      pcVar5 = pcVar5 + 4;
      iVar7 = iVar7 + -1;
      local_8c = fVar18 * fVar18 + local_8c;
    } while (iVar7 != 0);
    if (m3dSimdType == 0) {
      local_8c = local_8c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar19 = rsqrtss(ZEXT416((uint)local_8c),ZEXT416((uint)local_8c));
      fVar18 = auVar19._0_4_;
      local_8c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar18 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8c * fVar18 * fVar18) *
                 local_8c;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar14 = (ulonglong)(uint)local_8c;
      uVar15 = PackedFloatingReciprocalSQRAprox((longlong)Var17,uVar14);
      uVar16 = PackedFloatingMUL(uVar15,uVar15);
      uVar16 = PackedFloatingReciprocalSQRIter1(uVar16,uVar14);
      uVar15 = PackedFloatingReciprocalIter2(uVar16,uVar15);
      uVar15 = PackedFloatingMUL(uVar15,uVar14);
      Var17 = CONCAT28((short)((unkuint10)Var17 >> 0x40),uVar15);
      local_8c = (float)uVar15;
      FastExitMediaState();
    }
    else {
      local_8c = SQRT(local_8c);
    }
    local_8c = ___real_3f800000 / local_8c;
    iVar7 = 3;
    pcVar5 = pcVar9;
    do {
      iVar7 = iVar7 + -1;
      *(float *)pcVar5 = local_8c * *(float *)pcVar5;
      pcVar5 = pcVar5 + 4;
    } while (iVar7 != 0);
    pcVar9 = pcVar9 + 0x10;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  pmVar1 = (m3dMATR *)(this + 0x40);
  puVar11 = local_74;
  pcVar9 = this;
  pmVar12 = pmVar1;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pmVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pmVar12 = pmVar12 + 4;
  }
  pmVar12 = local_80;
  local_8c = 4.2039e-45;
  pmVar13 = pmVar1;
  do {
    iVar10 = 3;
    pmVar6 = pmVar13;
    pmVar8 = pmVar12;
    do {
      *(undefined4 *)pmVar8 = *(undefined4 *)pmVar6;
      pmVar6 = pmVar6 + 0x10;
      pmVar8 = pmVar8 + 4;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    *puVar11 = 0;
    pmVar12 = pmVar12 + 0x10;
    puVar11 = puVar11 + 4;
    pmVar13 = pmVar13 + 4;
    local_8c = (float)((int)local_8c + -1);
  } while (local_8c != 0.0);
  local_44 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,pmVar1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00552D60 */

void __thiscall camCAMERA::ResetVertRotation(camCAMERA *this)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 in_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
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
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_38 = 0.0;
  local_3c = *(float *)(this + 0x20);
  local_34 = *(float *)(this + 0x28);
  local_4c = local_3c * local_3c + local_34 * local_34;
  if (m3dSimdType == 0) {
    local_4c = local_4c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)local_4c),ZEXT416((uint)local_4c));
    fVar5 = auVar6._0_4_;
    local_4c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_4c * fVar5 * fVar5) * local_4c;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar2 = (ulonglong)(uint)local_4c;
    uVar3 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar2);
    uVar4 = PackedFloatingMUL(uVar3,uVar3);
    uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
    uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
    uVar3 = PackedFloatingMUL(uVar3,uVar2);
    local_4c = (float)uVar3;
    FastExitMediaState();
  }
  else {
    local_4c = SQRT(local_4c);
  }
  local_4c = (float)(uint)(ABS(local_4c) < _DAT_005de594);
  if ((float)(int)local_4c == ___real_00000000) {
    m3dNormalize((m3dV *)&local_3c);
  }
  else {
    local_38 = 0.0;
    local_3c = 0.0;
    local_34 = 1.0;
  }
  local_c = *(undefined4 *)(this + 0x30);
  local_8 = *(undefined4 *)(this + 0x34);
  local_30 = local_3c;
  local_4 = *(undefined4 *)(this + 0x38);
  local_2c = local_38;
  local_28 = local_34;
  m3dNormalize((m3dV *)&local_30);
  fVar5 = _m3dVUnitY * local_30 + DAT_005f9994 * local_2c + DAT_005f9998 * local_28;
  local_20 = local_2c * fVar5;
  local_1c = local_28 * fVar5;
  local_48 = _m3dVUnitY - local_30 * fVar5;
  local_44 = DAT_005f9994 - local_20;
  local_40 = DAT_005f9998 - local_1c;
  iVar1 = _m3dNormalize((m3dV *)&local_48);
  if (iVar1 == 0) {
    local_48 = _m3dVUnitX;
    local_44 = DAT_005f9988;
    local_40 = DAT_005f998c;
  }
  local_18 = local_40 * local_2c - local_28 * local_44;
  local_14 = local_28 * local_48 - local_40 * local_30;
  local_10 = local_44 * local_30 - local_2c * local_48;
  SetParameters(this,(m3dV *)&local_c,(m3dV *)&local_48,(m3dV *)&local_18,(m3dV *)&local_30);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00552FD0 */

void __thiscall camCAMERA::SetInterest(camCAMERA *this,m3dV *param_1)

{
  float fVar1;
  int iVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_3c = *(float *)param_1 - *(float *)(this + 0x30);
  local_38 = *(float *)(param_1 + 4) - *(float *)(this + 0x34);
  local_34 = *(float *)(param_1 + 8) - *(float *)(this + 0x38);
  local_c = *(undefined4 *)(this + 0x30);
  local_8 = *(undefined4 *)(this + 0x34);
  local_4 = *(undefined4 *)(this + 0x38);
  local_30 = local_3c;
  local_2c = local_38;
  local_28 = local_34;
  m3dNormalize((m3dV *)&local_30);
  fVar1 = _m3dVUnitY * local_30 + DAT_005f9994 * local_2c + DAT_005f9998 * local_28;
  local_20 = local_2c * fVar1;
  local_1c = local_28 * fVar1;
  local_3c = _m3dVUnitY - local_30 * fVar1;
  local_38 = DAT_005f9994 - local_20;
  local_34 = DAT_005f9998 - local_1c;
  iVar2 = _m3dNormalize((m3dV *)&local_3c);
  if (iVar2 == 0) {
    local_3c = _m3dVUnitX;
    local_38 = DAT_005f9988;
    local_34 = DAT_005f998c;
  }
  local_18 = local_34 * local_2c - local_28 * local_38;
  local_14 = local_28 * local_3c - local_34 * local_30;
  local_10 = local_38 * local_30 - local_2c * local_3c;
  SetParameters(this,(m3dV *)&local_c,(m3dV *)&local_3c,(m3dV *)&local_18,(m3dV *)&local_30);
  *(undefined4 *)(this + 0x160) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00553170 */

void __thiscall camCAMERA::SetLookAt(camCAMERA *this,m3dV *param_1)

{
  float fVar1;
  int iVar2;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_30 = *(float *)param_1;
  local_c = *(undefined4 *)(this + 0x30);
  local_2c = *(float *)(param_1 + 4);
  local_8 = *(undefined4 *)(this + 0x34);
  local_28 = *(float *)(param_1 + 8);
  local_4 = *(undefined4 *)(this + 0x38);
  m3dNormalize((m3dV *)&local_30);
  fVar1 = _m3dVUnitY * local_30 + DAT_005f9994 * local_2c + DAT_005f9998 * local_28;
  local_20 = local_2c * fVar1;
  local_1c = local_28 * fVar1;
  local_3c = _m3dVUnitY - local_30 * fVar1;
  local_38 = DAT_005f9994 - local_20;
  local_34 = DAT_005f9998 - local_1c;
  iVar2 = _m3dNormalize((m3dV *)&local_3c);
  if (iVar2 == 0) {
    local_3c = _m3dVUnitX;
    local_38 = DAT_005f9988;
    local_34 = DAT_005f998c;
  }
  local_18 = local_34 * local_2c - local_28 * local_38;
  local_14 = local_28 * local_3c - local_34 * local_30;
  local_10 = local_38 * local_30 - local_2c * local_3c;
  SetParameters(this,(m3dV *)&local_c,(m3dV *)&local_3c,(m3dV *)&local_18,(m3dV *)&local_30);
  return;
}




/* from: m3d:cam.cpp
   addr: 005532C0 */

void __thiscall camCAMERA::GetVUp(camCAMERA *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x18);
  return;
}




/* from: m3d:cam.cpp
   addr: 005532E0 */

void __thiscall camCAMERA::GetVRight(camCAMERA *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)this;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 8);
  return;
}




/* from: m3d:cam.cpp
   addr: 00553300
   addr: 00553300 */

void __thiscall camCAMERA::GetLookAt(camCAMERA *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x28);
  return;
}




/* from: m3d:cam.cpp
   addr: 00553320 */

void __thiscall camCAMERA::TransformPoint(camCAMERA *this,m3dV *param_1,m3dV *param_2)

{
  camCAMERA *pcVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  m3dV *pmVar5;
  int iVar6;
  m3dV *pmVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  pcVar1 = this + 0x40;
  if (m3dSimdType == 0) {
    if (((uint)pcVar1 & 0xf) == 0) {
      fVar19 = *(float *)param_1;
      fVar3 = *(float *)(param_1 + 4);
      fVar4 = *(float *)(param_1 + 8);
      fVar17 = fVar19 * *(float *)pcVar1 + *(float *)(this + 0x70) + fVar3 * *(float *)(this + 0x50)
               + fVar4 * *(float *)(this + 0x60);
      fVar18 = fVar19 * *(float *)(this + 0x44) + *(float *)(this + 0x74) +
               fVar3 * *(float *)(this + 0x54) + fVar4 * *(float *)(this + 100);
      fVar19 = fVar19 * *(float *)(this + 0x48) + *(float *)(this + 0x78) +
               fVar3 * *(float *)(this + 0x58) + fVar4 * *(float *)(this + 0x68);
    }
    else {
      fVar19 = *(float *)param_1;
      fVar3 = *(float *)(param_1 + 4);
      fVar4 = *(float *)(param_1 + 8);
      fVar17 = fVar19 * (float)*(undefined8 *)pcVar1 + fVar3 * (float)*(undefined8 *)(this + 0x50) +
               fVar4 * (float)*(undefined8 *)(this + 0x60) + (float)*(undefined8 *)(this + 0x70);
      fVar18 = fVar19 * (float)((ulonglong)*(undefined8 *)pcVar1 >> 0x20) +
               fVar3 * (float)((ulonglong)*(undefined8 *)(this + 0x50) >> 0x20) +
               fVar4 * (float)((ulonglong)*(undefined8 *)(this + 0x60) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(this + 0x70) >> 0x20);
      fVar19 = fVar19 * (float)*(undefined8 *)(this + 0x48) +
               fVar3 * (float)*(undefined8 *)(this + 0x58) +
               fVar4 * (float)*(undefined8 *)(this + 0x68) + (float)*(undefined8 *)(this + 0x78);
    }
    *(ulonglong *)param_2 = CONCAT44(fVar18,fVar17);
    *(float *)(param_2 + 8) = fVar19;
    return;
  }
  if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar9 = (undefined4)*(undefined8 *)param_1;
    uVar12 = CONCAT44(uVar9,uVar9);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)param_1 >> 0x20);
    uVar15 = CONCAT44(uVar9,uVar9);
    uVar16 = CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
    uVar10 = PackedFloatingMUL(uVar12,*(undefined8 *)pcVar1);
    uVar11 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0x50));
    uVar13 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0x60));
    uVar10 = PackedFloatingADD(uVar10,*(undefined8 *)(this + 0x70));
    uVar14 = PackedFloatingMUL(uVar12,*(undefined8 *)(this + 0x48));
    uVar12 = PackedFloatingADD(uVar11,uVar13);
    uVar11 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0x58));
    uVar16 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0x68));
    uVar15 = PackedFloatingADD(uVar14,*(undefined8 *)(this + 0x78));
    uVar12 = PackedFloatingADD(uVar10,uVar12);
    uVar10 = PackedFloatingADD(uVar11,uVar16);
    *(undefined8 *)param_2 = uVar12;
    uVar12 = PackedFloatingADD(uVar15,uVar10);
    *(int *)(param_2 + 8) = (int)uVar12;
    FastExitMediaState();
    return;
  }
  iVar8 = 0;
  pmVar5 = param_2;
  do {
    iVar6 = 0;
    *(float *)pmVar5 = 0.0;
    pmVar7 = pmVar5 + ((int)pcVar1 - (int)param_2);
    do {
      iVar2 = iVar6 * 4;
      fVar19 = *(float *)pmVar7;
      iVar6 = iVar6 + 1;
      pmVar7 = pmVar7 + 0x10;
      *(float *)pmVar5 = *(float *)(param_1 + iVar2) * fVar19 + *(float *)pmVar5;
    } while (iVar6 < 3);
    iVar6 = iVar8 + iVar6 * 4;
    iVar8 = iVar8 + 1;
    *(float *)pmVar5 = *(float *)(pcVar1 + iVar6 * 4) + *(float *)pmVar5;
    pmVar5 = pmVar5 + 4;
  } while (iVar8 < 3);
  return;
}




/* from: m3d:cam.cpp
   addr: 005534A0 */

void __thiscall camCAMERA::TransformPointC2W(camCAMERA *this,m3dV *param_1,m3dV *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  m3dV *pmVar4;
  int iVar5;
  m3dV *pmVar6;
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
  
  if (m3dSimdType == 0) {
    if (((uint)this & 0xf) == 0) {
      fVar18 = *(float *)param_1;
      fVar2 = *(float *)(param_1 + 4);
      fVar3 = *(float *)(param_1 + 8);
      fVar16 = fVar18 * *(float *)this + *(float *)(this + 0x30) + fVar2 * *(float *)(this + 0x10) +
               fVar3 * *(float *)(this + 0x20);
      fVar17 = fVar18 * *(float *)(this + 4) + *(float *)(this + 0x34) +
               fVar2 * *(float *)(this + 0x14) + fVar3 * *(float *)(this + 0x24);
      fVar18 = fVar18 * *(float *)(this + 8) + *(float *)(this + 0x38) +
               fVar2 * *(float *)(this + 0x18) + fVar3 * *(float *)(this + 0x28);
    }
    else {
      fVar18 = *(float *)param_1;
      fVar2 = *(float *)(param_1 + 4);
      fVar3 = *(float *)(param_1 + 8);
      fVar16 = fVar18 * (float)*(undefined8 *)this + fVar2 * (float)*(undefined8 *)(this + 0x10) +
               fVar3 * (float)*(undefined8 *)(this + 0x20) + (float)*(undefined8 *)(this + 0x30);
      fVar17 = fVar18 * (float)((ulonglong)*(undefined8 *)this >> 0x20) +
               fVar2 * (float)((ulonglong)*(undefined8 *)(this + 0x10) >> 0x20) +
               fVar3 * (float)((ulonglong)*(undefined8 *)(this + 0x20) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(this + 0x30) >> 0x20);
      fVar18 = fVar18 * (float)*(undefined8 *)(this + 8) +
               fVar2 * (float)*(undefined8 *)(this + 0x18) +
               fVar3 * (float)*(undefined8 *)(this + 0x28) + (float)*(undefined8 *)(this + 0x38);
    }
    *(ulonglong *)param_2 = CONCAT44(fVar17,fVar16);
    *(float *)(param_2 + 8) = fVar18;
    return;
  }
  if (m3dSimdType != 1) {
    iVar7 = 0;
    pmVar4 = param_2;
    do {
      *(float *)pmVar4 = 0.0;
      iVar5 = 0;
      pmVar6 = pmVar4 + ((int)this - (int)param_2);
      do {
        iVar1 = iVar5 * 4;
        fVar18 = *(float *)pmVar6;
        iVar5 = iVar5 + 1;
        pmVar6 = pmVar6 + 0x10;
        *(float *)pmVar4 = *(float *)(param_1 + iVar1) * fVar18 + *(float *)pmVar4;
      } while (iVar5 < 3);
      iVar5 = iVar7 + iVar5 * 4;
      iVar7 = iVar7 + 1;
      *(float *)pmVar4 = *(float *)(this + iVar5 * 4) + *(float *)pmVar4;
      pmVar4 = pmVar4 + 4;
    } while (iVar7 < 3);
    return;
  }
  FastExitMediaState();
  uVar8 = (undefined4)*(undefined8 *)param_1;
  uVar11 = CONCAT44(uVar8,uVar8);
  uVar8 = (undefined4)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  uVar14 = CONCAT44(uVar8,uVar8);
  uVar15 = CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
  uVar9 = PackedFloatingMUL(uVar11,*(undefined8 *)this);
  uVar10 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0x10));
  uVar12 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0x20));
  uVar9 = PackedFloatingADD(uVar9,*(undefined8 *)(this + 0x30));
  uVar13 = PackedFloatingMUL(uVar11,*(undefined8 *)(this + 8));
  uVar11 = PackedFloatingADD(uVar10,uVar12);
  uVar10 = PackedFloatingMUL(uVar14,*(undefined8 *)(this + 0x18));
  uVar15 = PackedFloatingMUL(uVar15,*(undefined8 *)(this + 0x28));
  uVar14 = PackedFloatingADD(uVar13,*(undefined8 *)(this + 0x38));
  uVar11 = PackedFloatingADD(uVar9,uVar11);
  uVar9 = PackedFloatingADD(uVar10,uVar15);
  *(undefined8 *)param_2 = uVar11;
  uVar11 = PackedFloatingADD(uVar14,uVar9);
  *(int *)(param_2 + 8) = (int)uVar11;
  FastExitMediaState();
  return;
}




/* from: m3d:cam.cpp
   addr: 00553620 */

void __thiscall camCAMERA::TransformVector(camCAMERA *this,m3dV *param_1,m3dV *param_2)

{
  camCAMERA *pcVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  m3dV *pmVar6;
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
  float fVar17;
  float fVar18;
  float fVar19;
  
  pcVar1 = this + 0x40;
  if (m3dSimdType == 0) {
    if (((uint)pcVar1 & 0xf) == 0) {
      fVar19 = *(float *)param_1;
      fVar3 = *(float *)(param_1 + 4);
      fVar4 = *(float *)(param_1 + 8);
      fVar17 = fVar19 * *(float *)pcVar1 + fVar3 * *(float *)(this + 0x50) +
               fVar4 * *(float *)(this + 0x60);
      fVar18 = fVar19 * *(float *)(this + 0x44) + fVar3 * *(float *)(this + 0x54) +
               fVar4 * *(float *)(this + 100);
      fVar19 = fVar19 * *(float *)(this + 0x48) + fVar3 * *(float *)(this + 0x58) +
               fVar4 * *(float *)(this + 0x68);
    }
    else {
      fVar19 = *(float *)param_1;
      fVar3 = *(float *)(param_1 + 4);
      fVar4 = *(float *)(param_1 + 8);
      fVar17 = fVar19 * (float)*(undefined8 *)pcVar1 + fVar3 * (float)*(undefined8 *)(this + 0x50) +
               fVar4 * (float)*(undefined8 *)(this + 0x60);
      fVar18 = fVar19 * (float)((ulonglong)*(undefined8 *)pcVar1 >> 0x20) +
               fVar3 * (float)((ulonglong)*(undefined8 *)(this + 0x50) >> 0x20) +
               fVar4 * (float)((ulonglong)*(undefined8 *)(this + 0x60) >> 0x20);
      fVar19 = fVar19 * (float)*(undefined8 *)(this + 0x48) +
               fVar3 * (float)*(undefined8 *)(this + 0x58) +
               fVar4 * (float)*(undefined8 *)(this + 0x68);
    }
    *(ulonglong *)param_2 = CONCAT44(fVar18,fVar17);
    *(float *)(param_2 + 8) = fVar19;
    return;
  }
  if (m3dSimdType != 1) {
    iVar8 = (int)pcVar1 - (int)param_2;
    iVar7 = 3;
    do {
      *(float *)param_2 = 0.0;
      iVar5 = 0;
      pmVar6 = param_2 + iVar8;
      do {
        iVar2 = iVar5 * 4;
        fVar19 = *(float *)pmVar6;
        iVar5 = iVar5 + 1;
        pmVar6 = pmVar6 + 0x10;
        *(float *)param_2 = *(float *)(param_1 + iVar2) * fVar19 + *(float *)param_2;
      } while (iVar5 < 3);
      param_2 = param_2 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    return;
  }
  FastExitMediaState();
  uVar9 = (undefined4)*(undefined8 *)param_1;
  uVar12 = CONCAT44(uVar9,uVar9);
  uVar9 = (undefined4)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  uVar16 = CONCAT44(uVar9,uVar9);
  uVar13 = CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8));
  uVar10 = PackedFloatingMUL(uVar12,*(undefined8 *)pcVar1);
  uVar11 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0x50));
  uVar14 = PackedFloatingMUL(uVar13,*(undefined8 *)(this + 0x60));
  uVar15 = PackedFloatingMUL(uVar12,*(undefined8 *)(this + 0x48));
  uVar12 = PackedFloatingADD(uVar11,uVar14);
  uVar16 = PackedFloatingMUL(uVar16,*(undefined8 *)(this + 0x58));
  uVar11 = PackedFloatingMUL(uVar13,*(undefined8 *)(this + 0x68));
  uVar12 = PackedFloatingADD(uVar10,uVar12);
  uVar10 = PackedFloatingADD(uVar16,uVar11);
  *(undefined8 *)param_2 = uVar12;
  uVar12 = PackedFloatingADD(uVar15,uVar10);
  *(int *)(param_2 + 8) = (int)uVar12;
  FastExitMediaState();
  return;
}




/* from: m3d:cam.cpp
   addr: 00553770 */

void __thiscall camCAMERA::GetOrigin(camCAMERA *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x38);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00553790 */

void __thiscall camCAMERA::TransformMatrC2W(camCAMERA *this,m3dMATR *param_1,int param_2)

{
  camCAMERA *pcVar1;
  m3dMATR *pmVar2;
  int iVar3;
  int iVar4;
  m3dMATR *pmVar5;
  camCAMERA *pcVar6;
  undefined4 *puVar7;
  m3dMATR *pmVar8;
  m3dMATR *pmVar9;
  m3dMATR *pmVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  unkbyte10 in_ST1;
  unkbyte10 extraout_ST1;
  unkbyte10 extraout_ST1_00;
  float fVar14;
  undefined1 auVar15 [16];
  float local_c4;
  m3dMATR local_c0 [64];
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  if (param_2 == 0) {
    pmVar8 = local_c0;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pmVar8 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pmVar8 = pmVar8 + 4;
    }
  }
  else if (param_2 == 1) {
    m3dMultiplyMatr(param_1,(m3dMATR *)this,local_c0);
    in_ST1 = extraout_ST1_00;
  }
  else if (param_2 == 2) {
    m3dMultiplyMatr((m3dMATR *)this,param_1,local_c0);
    in_ST1 = extraout_ST1;
  }
  pmVar8 = local_c0;
  pcVar6 = this;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pmVar8;
    pmVar8 = pmVar8 + 4;
    pcVar6 = pcVar6 + 4;
  }
  iVar3 = 3;
  pcVar6 = this;
  do {
    iVar4 = 3;
    pcVar1 = pcVar6;
    local_c4 = ___real_00000000;
    do {
      fVar14 = *(float *)pcVar1;
      pcVar1 = pcVar1 + 4;
      iVar4 = iVar4 + -1;
      local_c4 = fVar14 * fVar14 + local_c4;
    } while (iVar4 != 0);
    if (m3dSimdType == 0) {
      local_c4 = local_c4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar15 = rsqrtss(ZEXT416((uint)local_c4),ZEXT416((uint)local_c4));
      fVar14 = auVar15._0_4_;
      local_c4 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar14 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_c4 * fVar14 * fVar14) *
                 local_c4;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar11 = (ulonglong)(uint)local_c4;
      uVar12 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar11);
      uVar13 = PackedFloatingMUL(uVar12,uVar12);
      uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
      uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar11);
      in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar12);
      local_c4 = (float)uVar12;
      FastExitMediaState();
    }
    else {
      local_c4 = SQRT(local_c4);
    }
    local_c4 = ___real_3f800000 / local_c4;
    iVar4 = 3;
    pcVar1 = pcVar6;
    do {
      iVar4 = iVar4 + -1;
      *(float *)pcVar1 = local_c4 * *(float *)pcVar1;
      pcVar1 = pcVar1 + 4;
    } while (iVar4 != 0);
    pcVar6 = pcVar6 + 0x10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pmVar8 = (m3dMATR *)(this + 0x40);
  pcVar6 = this;
  pmVar9 = pmVar8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pmVar9 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pmVar9 = pmVar9 + 4;
  }
  pmVar9 = local_80;
  puVar7 = local_74;
  local_c4 = 4.2039e-45;
  pmVar10 = pmVar8;
  do {
    iVar3 = 3;
    pmVar2 = pmVar10;
    pmVar5 = pmVar9;
    do {
      *(undefined4 *)pmVar5 = *(undefined4 *)pmVar2;
      pmVar2 = pmVar2 + 0x10;
      pmVar5 = pmVar5 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *puVar7 = 0;
    pmVar9 = pmVar9 + 0x10;
    puVar7 = puVar7 + 4;
    pmVar10 = pmVar10 + 4;
    local_c4 = (float)((int)local_c4 + -1);
  } while (local_c4 != 0.0);
  local_44 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,pmVar8);
  return;
}




/* from: m3d:cam.cpp
   addr: 005539B0 */

void __thiscall
camCAMERA::GetParameters(camCAMERA *this,m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  if (param_1 != (m3dV *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x38);
  }
  if (param_2 != (m3dV *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x18);
  }
  if (param_3 != (m3dV *)0x0) {
    *(undefined4 *)param_3 = *(undefined4 *)this;
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 4);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 8);
  }
  if (param_4 != (m3dV *)0x0) {
    *(undefined4 *)param_4 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(param_4 + 8) = *(undefined4 *)(this + 0x28);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00553A20 */

void __thiscall
camCAMERA::SetParameters(camCAMERA *this,m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  m3dMATR *pmVar1;
  camCAMERA *pcVar2;
  m3dMATR *pmVar3;
  int iVar4;
  m3dMATR *pmVar5;
  camCAMERA *pcVar6;
  undefined4 *puVar7;
  m3dMATR *pmVar8;
  int iVar9;
  m3dMATR *pmVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  unkbyte10 extraout_ST1;
  unkbyte10 Var14;
  float fVar15;
  undefined1 auVar16 [16];
  float local_84;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  m3dMATR::Identity((m3dMATR *)this);
  *(undefined4 *)this = *(undefined4 *)param_3;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)param_4;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 8);
  iVar9 = 3;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 8);
  pcVar6 = this;
  Var14 = extraout_ST1;
  do {
    iVar4 = 3;
    pcVar2 = pcVar6;
    local_84 = ___real_00000000;
    do {
      fVar15 = *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
      iVar4 = iVar4 + -1;
      local_84 = fVar15 * fVar15 + local_84;
    } while (iVar4 != 0);
    if (m3dSimdType == 0) {
      local_84 = local_84 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar16 = rsqrtss(ZEXT416((uint)local_84),ZEXT416((uint)local_84));
      fVar15 = auVar16._0_4_;
      local_84 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar15 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_84 * fVar15 * fVar15) *
                 local_84;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar11 = (ulonglong)(uint)local_84;
      uVar12 = PackedFloatingReciprocalSQRAprox((longlong)Var14,uVar11);
      uVar13 = PackedFloatingMUL(uVar12,uVar12);
      uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
      uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
      uVar12 = PackedFloatingMUL(uVar12,uVar11);
      Var14 = CONCAT28((short)((unkuint10)Var14 >> 0x40),uVar12);
      local_84 = (float)uVar12;
      FastExitMediaState();
    }
    else {
      local_84 = SQRT(local_84);
    }
    local_84 = ___real_3f800000 / local_84;
    iVar4 = 3;
    pcVar2 = pcVar6;
    do {
      iVar4 = iVar4 + -1;
      *(float *)pcVar2 = local_84 * *(float *)pcVar2;
      pcVar2 = pcVar2 + 4;
    } while (iVar4 != 0);
    pcVar6 = pcVar6 + 0x10;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  pmVar1 = (m3dMATR *)(this + 0x40);
  puVar7 = local_74;
  pcVar6 = this;
  pmVar8 = pmVar1;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *(undefined4 *)pmVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pmVar8 = pmVar8 + 4;
  }
  pmVar8 = local_80;
  local_84 = 4.2039e-45;
  pmVar10 = pmVar1;
  do {
    iVar9 = 3;
    pmVar3 = pmVar10;
    pmVar5 = pmVar8;
    do {
      *(undefined4 *)pmVar5 = *(undefined4 *)pmVar3;
      pmVar3 = pmVar3 + 0x10;
      pmVar5 = pmVar5 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *puVar7 = 0;
    pmVar8 = pmVar8 + 0x10;
    puVar7 = puVar7 + 4;
    pmVar10 = pmVar10 + 4;
    local_84 = (float)((int)local_84 + -1);
  } while (local_84 != 0.0);
  local_44 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(this + 0x70),-*(float *)(this + 0x74),
                     -*(float *)(this + 0x78),0);
  m3dMultiplyMatr(local_40,local_80,pmVar1);
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: m3d:cam.cpp
   addr: 00553C20 */

void __thiscall
camCAMERA::GetViewWindowRayDir(camCAMERA *this,float param_1,float param_2,m3dV *param_3)

{
  float *pfVar1;
  int iVar2;
  m3dV *pmVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_14 [4];
  
  local_14[2] = *(float *)(this + 0x80);
  local_14[0] = (param_1 - *(float *)(this + 0x13c)) / *(float *)(this + 0x158) +
                *(float *)(this + 300);
  local_14[1] = ((*(float *)(this + 0x148) + *(float *)(this + 0x140)) - param_2) /
                *(float *)(this + 0x15c) + *(float *)(this + 0x130);
  if (m3dSimdType == 0) {
    if (((uint)this & 0xf) == 0) {
      fVar11 = local_14[0] * *(float *)this + local_14[1] * *(float *)(this + 0x10) +
               local_14[2] * *(float *)(this + 0x20);
      fVar12 = local_14[0] * *(float *)(this + 4) + local_14[1] * *(float *)(this + 0x14) +
               local_14[2] * *(float *)(this + 0x24);
      fVar13 = local_14[0] * *(float *)(this + 8) + local_14[1] * *(float *)(this + 0x18) +
               local_14[2] * *(float *)(this + 0x28);
    }
    else {
      fVar11 = local_14[0] * (float)*(undefined8 *)this +
               local_14[1] * (float)*(undefined8 *)(this + 0x10) +
               local_14[2] * (float)*(undefined8 *)(this + 0x20);
      fVar12 = local_14[0] * (float)((ulonglong)*(undefined8 *)this >> 0x20) +
               local_14[1] * (float)((ulonglong)*(undefined8 *)(this + 0x10) >> 0x20) +
               local_14[2] * (float)((ulonglong)*(undefined8 *)(this + 0x20) >> 0x20);
      fVar13 = local_14[0] * (float)*(undefined8 *)(this + 8) +
               local_14[1] * (float)*(undefined8 *)(this + 0x18) +
               local_14[2] * (float)*(undefined8 *)(this + 0x28);
    }
    *(ulonglong *)param_3 = CONCAT44(fVar12,fVar11);
    *(float *)(param_3 + 8) = fVar13;
    return;
  }
  if (m3dSimdType != 1) {
    iVar4 = (int)this - (int)param_3;
    iVar5 = 3;
    do {
      *(float *)param_3 = 0.0;
      iVar2 = 0;
      pmVar3 = param_3 + iVar4;
      do {
        pfVar1 = local_14 + iVar2;
        fVar11 = *(float *)pmVar3;
        iVar2 = iVar2 + 1;
        pmVar3 = pmVar3 + 0x10;
        *(float *)param_3 = *pfVar1 * fVar11 + *(float *)param_3;
      } while (iVar2 < 3);
      param_3 = param_3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  FastExitMediaState();
  uVar6 = PackedFloatingMUL(CONCAT44(local_14[0],local_14[0]),*(undefined8 *)this);
  uVar7 = PackedFloatingMUL(CONCAT44(local_14[1],local_14[1]),*(undefined8 *)(this + 0x10));
  uVar8 = PackedFloatingMUL(CONCAT44(local_14[2],local_14[2]),*(undefined8 *)(this + 0x20));
  uVar9 = PackedFloatingMUL(CONCAT44(local_14[0],local_14[0]),*(undefined8 *)(this + 8));
  uVar7 = PackedFloatingADD(uVar7,uVar8);
  uVar8 = PackedFloatingMUL(CONCAT44(local_14[1],local_14[1]),*(undefined8 *)(this + 0x18));
  uVar10 = PackedFloatingMUL(CONCAT44(local_14[2],local_14[2]),*(undefined8 *)(this + 0x28));
  uVar6 = PackedFloatingADD(uVar6,uVar7);
  uVar7 = PackedFloatingADD(uVar8,uVar10);
  *(undefined8 *)param_3 = uVar6;
  uVar6 = PackedFloatingADD(uVar9,uVar7);
  *(int *)(param_3 + 8) = (int)uVar6;
  FastExitMediaState();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cam.cpp
   addr: 00553DB0 */

void __thiscall camCAMERA::Animate(camCAMERA *this,float param_1,camCAMERA *param_2)

{
  float fVar1;
  float fVar2;
  camCAMERA *pcVar3;
  int iVar4;
  camCAMERA *pcVar5;
  camCAMERA *this_00;
  int iVar6;
  m3dMATR *pmVar7;
  ulonglong uVar8;
  float10 fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  unkbyte10 extraout_ST1;
  unkbyte10 Var12;
  float fVar13;
  undefined1 auVar14 [16];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  this_00 = param_2;
  if (param_2 == (camCAMERA *)0x0) {
    this_00 = this;
  }
  param_2 = *(camCAMERA **)(this + 0x150);
  if (*(int **)(this + 0x1fc) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1fc) + 0x10))(param_1,&param_2,0);
  }
  *(camCAMERA **)(this_00 + 0x150) = param_2;
  fVar9 = (float10)fptan((float10)___real_3f000000 * (float10)(float)param_2 *
                         (float10)_DAT_005de598 * (float10)___real_3bb60b61);
  fVar9 = (float10)fpatan(fVar9 / (float10)*(float *)(this_00 + 0x154),(float10)1);
  fVar9 = ((fVar9 + fVar9) / (float10)_DAT_005de598) * (float10)___real_43340000;
  *(float *)(this_00 + 0x14c) = (float)fVar9;
  fVar9 = (float10)fptan(fVar9 * (float10)_DAT_005de598 * (float10)___real_3bb60b61 *
                         (float10)___real_3f000000);
  fVar13 = (float)(fVar9 * (float10)*(float *)(this_00 + 0x80) +
                  fVar9 * (float10)*(float *)(this_00 + 0x80));
  fVar9 = (float10)fptan((float10)(float)param_2 * (float10)_DAT_005de598 *
                         (float10)___real_3bb60b61 * (float10)___real_3f000000);
  *(undefined4 *)(this_00 + 0x88) = 4;
  fVar1 = fVar13 * ___real_bf000000;
  *(float *)(this_00 + 0x8c) = fVar1;
  fVar2 = fVar13 * ___real_3f000000;
  *(float *)(this_00 + 0x94) = fVar2;
  *(float *)(this_00 + 0x9c) = fVar2;
  *(float *)(this_00 + 0xa4) = fVar1;
  *(float *)(this_00 + 300) = fVar1;
  *(float *)(this_00 + 0x134) = fVar13;
  *(float *)(this_00 + 0x158) = *(float *)(this_00 + 0x144) / fVar13;
  SetViewportDy(this_00,(float)(fVar9 * (float10)*(float *)(this_00 + 0x80) +
                               fVar9 * (float10)*(float *)(this_00 + 0x80)));
  if (*(int **)(this + 0x204) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x204) + 0x10))(param_1,&fStack_24,0);
    *(float *)(this_00 + 0x30) = fStack_24;
    *(float *)(this_00 + 0x34) = fStack_20;
    *(float *)(this_00 + 0x38) = fStack_1c;
    iVar6 = 3;
    pcVar5 = this_00;
    Var12 = extraout_ST1;
    do {
      iVar4 = 3;
      pcVar3 = pcVar5;
      fStack_44 = ___real_00000000;
      do {
        fVar13 = *(float *)pcVar3;
        pcVar3 = pcVar3 + 4;
        iVar4 = iVar4 + -1;
        fStack_44 = fVar13 * fVar13 + fStack_44;
      } while (iVar4 != 0);
      if (m3dSimdType == 0) {
        fStack_44 = fStack_44 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar14 = rsqrtss(ZEXT416((uint)fStack_44),ZEXT416((uint)fStack_44));
        fVar13 = auVar14._0_4_;
        fStack_44 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                    (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_44 * fVar13 * fVar13) *
                    fStack_44;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar8 = (ulonglong)(uint)fStack_44;
        uVar10 = PackedFloatingReciprocalSQRAprox((longlong)Var12,uVar8);
        uVar11 = PackedFloatingMUL(uVar10,uVar10);
        uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar8);
        uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
        uVar10 = PackedFloatingMUL(uVar10,uVar8);
        Var12 = CONCAT28((short)((unkuint10)Var12 >> 0x40),uVar10);
        fStack_44 = (float)uVar10;
        FastExitMediaState();
      }
      else {
        fStack_44 = SQRT(fStack_44);
      }
      fStack_44 = ___real_3f800000 / fStack_44;
      iVar4 = 3;
      pcVar3 = pcVar5;
      do {
        iVar4 = iVar4 + -1;
        *(float *)pcVar3 = fStack_44 * *(float *)pcVar3;
        pcVar3 = pcVar3 + 4;
      } while (iVar4 != 0);
      pcVar5 = pcVar5 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    pcVar5 = this_00;
    pmVar7 = (m3dMATR *)(this_00 + 0x40);
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pmVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pmVar7 = pmVar7 + 4;
    }
    _camMatrInvert((m3dMATR *)(this_00 + 0x40));
  }
  if (*(int **)(this + 0x208) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x208) + 0x10))(param_1,&fStack_24,0);
    fStack_3c = fStack_30 - *(float *)(this_00 + 0x30);
    fStack_38 = fStack_2c - *(float *)(this_00 + 0x34);
    fStack_34 = fStack_28 - *(float *)(this_00 + 0x38);
    uStack_18 = *(undefined4 *)(this_00 + 0x30);
    uStack_14 = *(undefined4 *)(this_00 + 0x34);
    uStack_10 = *(undefined4 *)(this_00 + 0x38);
    m3dNormalize((m3dV *)&fStack_3c);
    fVar13 = _m3dVUnitY * fStack_3c + DAT_005f9994 * fStack_38 + DAT_005f9998 * fStack_34;
    fStack_20 = fStack_38 * fVar13;
    fStack_1c = fStack_34 * fVar13;
    fVar13 = _m3dVUnitY - fStack_3c * fVar13;
    fStack_44 = DAT_005f9994 - fStack_20;
    fStack_40 = DAT_005f9998 - fStack_1c;
    iVar6 = _m3dNormalize((m3dV *)&stack0xffffffb8);
    if (iVar6 == 0) {
      fStack_44 = DAT_005f9988;
      fStack_40 = DAT_005f998c;
      fVar13 = _m3dVUnitX;
    }
    fStack_24 = fStack_40 * fStack_38 - fStack_34 * fStack_44;
    fStack_20 = fStack_34 * fVar13 - fStack_40 * fStack_3c;
    fStack_1c = fStack_44 * fStack_3c - fStack_38 * fVar13;
    SetParameters(this_00,(m3dV *)&uStack_18,(m3dV *)&stack0xffffffb8,(m3dV *)&fStack_24,
                  (m3dV *)&fStack_3c);
    *(float *)(this_00 + 0x160) = fStack_30;
    *(float *)(this_00 + 0x164) = fStack_2c;
    *(float *)(this_00 + 0x168) = fStack_28;
  }
  return;
}




/* from: m3d:cam.cpp
   addr: 005541B0 */

void __fastcall _camMatrInvert(m3dMATR *param_1)

{
  m3dMATR *pmVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  m3dMATR *pmVar7;
  m3dMATR local_80 [12];
  undefined4 local_74 [9];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  m3dMATR local_40 [64];
  
  puVar5 = (undefined4 *)&stack0xffffff70;
  puVar4 = local_74;
  iVar6 = 3;
  pmVar7 = param_1;
  do {
    puVar5 = puVar5 + 4;
    iVar3 = 3;
    pmVar1 = pmVar7;
    puVar2 = puVar5;
    do {
      *puVar2 = *(undefined4 *)pmVar1;
      pmVar1 = pmVar1 + 0x10;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *puVar4 = 0;
    puVar4 = puVar4 + 4;
    pmVar7 = pmVar7 + 4;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_50 = 0;
  local_44 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  m3dMATR::Identity(local_40);
  m3dMATR::Translate(local_40,-*(float *)(param_1 + 0x30),-*(float *)(param_1 + 0x34),
                     -*(float *)(param_1 + 0x38),0);
  m3dMultiplyMatr(local_40,local_80,param_1);
  return;
}

