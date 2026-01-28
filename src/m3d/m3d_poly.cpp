
/* from: m3d:m3d_poly.cpp
   addr: 00557F00 */

void __fastcall m3dGetPolyEdge(m3dPOLY *param_1,int param_2,m3dV *param_3,m3dV *param_4)

{
  m3dPOLY *pmVar1;
  
  pmVar1 = param_1 + param_2 * 0xc + 4;
  *(undefined4 *)param_3 = *(undefined4 *)pmVar1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(pmVar1 + 4);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(pmVar1 + 8);
  pmVar1 = param_1 + ((param_2 + 1) % *(int *)param_1) * 0xc + 4;
  *(undefined4 *)param_4 = *(undefined4 *)pmVar1;
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(pmVar1 + 4);
  *(undefined4 *)(param_4 + 8) = *(undefined4 *)(pmVar1 + 8);
  return;
}




/* from: m3d:m3d_poly.cpp
   addr: 00557F50 */

void __fastcall m3xzPoly3DToPoly2D(m3dPOLY *param_1,m2dPOLY *param_2)

{
  m3dPOLY *pmVar1;
  m2dPOLY *pmVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)param_1) {
    pmVar2 = param_2 + 8;
    pmVar1 = param_1 + 0xc;
    do {
      *(undefined4 *)(pmVar2 + -4) = *(undefined4 *)(pmVar1 + -8);
      *(undefined4 *)pmVar2 = *(undefined4 *)pmVar1;
      iVar3 = iVar3 + 1;
      pmVar1 = pmVar1 + 0xc;
      pmVar2 = pmVar2 + 8;
    } while (iVar3 < *(int *)param_1);
    *(int *)param_2 = *(int *)param_1;
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)param_1;
  return;
}




/* from: m3d:m3d_poly.cpp
   addr: 00557F90 */

void __fastcall m3dGetPolyNormal(m3dPOLY *param_1,m3dV *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0xc);
  fVar7 = *(float *)(param_1 + 0x1c);
  fVar8 = *(float *)(param_1 + 0x10);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x18);
  *(float *)param_2 = (fVar11 - fVar12) * (fVar3 - fVar4) - (fVar9 - fVar10) * (fVar5 - fVar6);
  *(float *)(param_2 + 4) = (fVar5 - fVar6) * (fVar7 - fVar8) - (fVar11 - fVar12) * (fVar1 - fVar2);
  *(float *)(param_2 + 8) = (fVar9 - fVar10) * (fVar1 - fVar2) - (fVar3 - fVar4) * (fVar7 - fVar8);
  m3dNormalize(param_2);
  return;
}




/* from: m3d:m3d_poly.cpp
   addr: 00558000 */

int __fastcall _m3dGetPolyNormal(m3dPOLY *param_1,m3dV *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0xc);
  fVar7 = *(float *)(param_1 + 0x1c);
  fVar8 = *(float *)(param_1 + 0x10);
  fVar9 = *(float *)(param_1 + 0x20);
  fVar10 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x24);
  fVar12 = *(float *)(param_1 + 0x18);
  *(float *)param_2 = (fVar11 - fVar12) * (fVar3 - fVar4) - (fVar9 - fVar10) * (fVar5 - fVar6);
  *(float *)(param_2 + 4) = (fVar5 - fVar6) * (fVar7 - fVar8) - (fVar11 - fVar12) * (fVar1 - fVar2);
  *(float *)(param_2 + 8) = (fVar9 - fVar10) * (fVar1 - fVar2) - (fVar3 - fVar4) * (fVar7 - fVar8);
  iVar13 = _m3dNormalize(param_2);
  return (uint)(iVar13 != 0);
}




/* from: m3d:m3d_poly.cpp
   addr: 00558070 */

void __fastcall m3dGetPlaneNormal(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)param_1;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_1 + 8);
  fVar7 = *(float *)param_3;
  fVar8 = *(float *)param_2;
  fVar9 = *(float *)(param_3 + 4);
  fVar10 = *(float *)(param_2 + 4);
  fVar11 = *(float *)(param_3 + 8);
  fVar12 = *(float *)(param_2 + 8);
  *(float *)param_4 = (fVar11 - fVar12) * (fVar3 - fVar4) - (fVar9 - fVar10) * (fVar5 - fVar6);
  *(float *)(param_4 + 4) = (fVar5 - fVar6) * (fVar7 - fVar8) - (fVar11 - fVar12) * (fVar1 - fVar2);
  *(float *)(param_4 + 8) = (fVar9 - fVar10) * (fVar1 - fVar2) - (fVar7 - fVar8) * (fVar3 - fVar4);
  m3dNormalize(param_4);
  return;
}




/* from: m3d:m3d_poly.cpp
   addr: 005580F0 */

void __cdecl m3dGetPlanePerpVector(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (m3dSimdType == 0) {
    fVar12 = *(float *)param_2 - *(float *)param_1;
    fVar13 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
    fVar14 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
    fVar15 = *(float *)param_3 - *(float *)param_1;
    fVar17 = *(float *)(param_3 + 4) - *(float *)(param_1 + 4);
    fVar16 = *(float *)(param_3 + 8) - *(float *)(param_1 + 8);
    *(float *)param_4 = fVar13 * fVar16 - fVar14 * fVar17;
    *(float *)(param_4 + 4) = fVar14 * fVar15 - fVar16 * fVar12;
    *(float *)(param_4 + 8) = fVar12 * fVar17 - fVar13 * fVar15;
    return;
  }
  if (m3dSimdType != 1) {
    fVar12 = *(float *)param_2;
    fVar13 = *(float *)param_1;
    fVar14 = *(float *)(param_2 + 4);
    fVar15 = *(float *)(param_1 + 4);
    fVar16 = *(float *)(param_2 + 8);
    fVar17 = *(float *)(param_1 + 8);
    fVar1 = *(float *)param_3;
    fVar2 = *(float *)param_2;
    fVar3 = *(float *)(param_3 + 4);
    fVar4 = *(float *)(param_2 + 4);
    fVar5 = *(float *)(param_3 + 8);
    fVar6 = *(float *)(param_2 + 8);
    *(float *)param_4 = (fVar5 - fVar6) * (fVar14 - fVar15) - (fVar3 - fVar4) * (fVar16 - fVar17);
    *(float *)(param_4 + 4) =
         (fVar16 - fVar17) * (fVar1 - fVar2) - (fVar5 - fVar6) * (fVar12 - fVar13);
    *(float *)(param_4 + 8) =
         (fVar3 - fVar4) * (fVar12 - fVar13) - (fVar1 - fVar2) * (fVar14 - fVar15);
    return;
  }
  FastExitMediaState();
  uVar11 = *(undefined8 *)param_1;
  uVar10 = PackedFloatingSUB(*(undefined8 *)param_3,uVar11);
  uVar9 = PackedFloatingSUB(*(undefined8 *)param_2,uVar11);
  uVar8 = CONCAT44((int)uVar9,(int)uVar10);
  uVar7 = PackedFloatingSUB(CONCAT44(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_3 + 8)),
                            CONCAT44(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 8)));
  uVar9 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),(int)((ulonglong)uVar9 >> 0x20));
  uVar11 = PackedSwapDWords(uVar11,uVar7);
  uVar10 = PackedFloatingMUL(uVar8,uVar11);
  uVar7 = PackedFloatingMUL(uVar7,uVar9);
  uVar11 = PackedFloatingMUL(uVar8,uVar9);
  uVar8 = PackedFloatingNegAccumulate(uVar7,uVar10);
  uVar11 = PackedSwapDWords(uVar11,uVar11);
  uVar11 = PackedFloatingNegAccumulate(uVar11,uVar11);
  *(undefined8 *)param_4 = uVar8;
  *(int *)(param_4 + 8) = (int)uVar11;
  FastExitMediaState();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 00558290 */

float __fastcall m3dCalcTriArea2(m3dV *param_1,m3dV *param_2,m3dV *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (*(float *)(param_3 + 8) - *(float *)(param_1 + 8)) *
          (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) -
          (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) *
          (*(float *)(param_2 + 8) - *(float *)(param_1 + 8));
  fVar1 = (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) *
          (*(float *)param_3 - *(float *)param_1) -
          (*(float *)(param_3 + 8) - *(float *)(param_1 + 8)) *
          (*(float *)param_2 - *(float *)param_1);
  fVar3 = (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) *
          (*(float *)param_2 - *(float *)param_1) -
          (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) *
          (*(float *)param_3 - *(float *)param_1);
  return (fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) * ___real_3e800000;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 00558310 */

float __fastcall m3dCalcPolyArea(m3dPOLY *param_1)

{
  float fVar1;
  float fVar2;
  m3dPOLY *pmVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  unkbyte10 in_ST1;
  float fVar8;
  undefined1 auVar9 [16];
  float local_20;
  float local_1c;
  
  iVar4 = 1;
  local_1c = 0.0;
  if (0 < *(int *)param_1 + -2) {
    pmVar3 = param_1 + 0x18;
    do {
      fVar1 = (*(float *)(pmVar3 + 0xc) - *(float *)(param_1 + 0xc)) *
              (*(float *)(pmVar3 + -4) - *(float *)(param_1 + 8)) -
              (*(float *)(pmVar3 + 8) - *(float *)(param_1 + 8)) *
              (*(float *)pmVar3 - *(float *)(param_1 + 0xc));
      fVar8 = (*(float *)pmVar3 - *(float *)(param_1 + 0xc)) *
              (*(float *)(pmVar3 + 4) - *(float *)(param_1 + 4)) -
              (*(float *)(pmVar3 + 0xc) - *(float *)(param_1 + 0xc)) *
              (*(float *)(pmVar3 + -8) - *(float *)(param_1 + 4));
      fVar2 = (*(float *)(pmVar3 + 8) - *(float *)(param_1 + 8)) *
              (*(float *)(pmVar3 + -8) - *(float *)(param_1 + 4)) -
              (*(float *)(pmVar3 + -4) - *(float *)(param_1 + 8)) *
              (*(float *)(pmVar3 + 4) - *(float *)(param_1 + 4));
      local_20 = (fVar1 * fVar1 + fVar8 * fVar8 + fVar2 * fVar2) * ___real_3e800000;
      if (m3dSimdType == 0) {
        local_20 = local_20 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar9 = rsqrtss(ZEXT416((uint)local_20),ZEXT416((uint)local_20));
        fVar8 = auVar9._0_4_;
        local_20 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                   (`float___cdecl_m3dSqrt(float)'::__l2::three - local_20 * fVar8 * fVar8) *
                   local_20;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar5 = (ulonglong)(uint)local_20;
        uVar6 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar5);
        uVar7 = PackedFloatingMUL(uVar6,uVar6);
        uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
        uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
        uVar6 = PackedFloatingMUL(uVar6,uVar5);
        in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar6);
        local_20 = (float)uVar6;
        FastExitMediaState();
      }
      else {
        local_20 = SQRT(local_20);
      }
      iVar4 = iVar4 + 1;
      local_1c = local_20 + local_1c;
      pmVar3 = pmVar3 + 0xc;
    } while (iVar4 <= *(int *)param_1 + -2);
  }
  return local_1c;
}




/* from: m3d:m3d_poly.cpp
   addr: 00558460 */

void __fastcall m2dReOrientPoly(m2dPOLY *param_1)

{
  int iVar1;
  int iVar2;
  m2dPOLY *pmVar3;
  int *piVar4;
  int local_a4 [5];
  undefined4 local_90;
  undefined4 local_8c;
  
  local_a4[0] = *(int *)param_1;
  piVar4 = local_a4;
  iVar1 = 0;
  pmVar3 = param_1 + 4;
  for (iVar2 = local_a4[0] * 2; piVar4 = piVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *(int *)pmVar3;
    pmVar3 = pmVar3 + 4;
  }
  if (0 < local_a4[0]) {
    do {
      if (iVar1 == 0) {
        local_a4[1] = *(undefined4 *)(param_1 + 0x14);
        local_a4[2] = *(undefined4 *)(param_1 + 0x18);
      }
      else if (iVar1 == 1) {
        local_a4[3] = *(undefined4 *)(param_1 + 0xc);
        local_a4[4] = *(undefined4 *)(param_1 + 0x10);
      }
      else if (iVar1 == 2) {
        local_90 = *(undefined4 *)(param_1 + 4);
        local_8c = *(undefined4 *)(param_1 + 8);
      }
      else {
        local_a4[iVar1 * 2 + 1] = *(int *)(param_1 + (local_a4[0] - iVar1) * 8 + 0x14);
        local_a4[iVar1 * 2 + 2] = *(int *)(param_1 + (local_a4[0] - iVar1) * 8 + 0x18);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_a4[0]);
  }
  piVar4 = local_a4;
  for (iVar2 = 0x29; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(int *)param_1 = *piVar4;
    piVar4 = piVar4 + 1;
    param_1 = param_1 + 4;
  }
  return;
}




/* from: m3d:m3d_poly.cpp
   addr: 00558500 */

void __fastcall m3dReOrientPoly(m3dPOLY *param_1)

{
  int iVar1;
  int iVar2;
  m3dPOLY *pmVar3;
  undefined4 *puVar4;
  undefined4 local_f4 [4];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  
  pmVar3 = param_1;
  puVar4 = local_f4;
  for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *(undefined4 *)pmVar3;
    pmVar3 = pmVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  iVar1 = *(int *)param_1;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (iVar2 == 0) {
        local_f4[1] = *(undefined4 *)(param_1 + 0x1c);
        local_f4[2] = *(undefined4 *)(param_1 + 0x20);
        local_f4[3] = *(undefined4 *)(param_1 + 0x24);
      }
      else if (iVar2 == 1) {
        local_e4 = *(undefined4 *)(param_1 + 0x10);
        local_e0 = *(undefined4 *)(param_1 + 0x14);
        local_dc = *(undefined4 *)(param_1 + 0x18);
      }
      else if (iVar2 == 2) {
        local_d8 = *(undefined4 *)(param_1 + 4);
        local_d4 = *(undefined4 *)(param_1 + 8);
        local_d0 = *(undefined4 *)(param_1 + 0xc);
      }
      else {
        pmVar3 = param_1 + (iVar1 - iVar2) * 0xc + 0x1c;
        local_f4[iVar2 * 3 + 1] = *(undefined4 *)pmVar3;
        local_f4[iVar2 * 3 + 2] = *(undefined4 *)(pmVar3 + 4);
        local_f4[iVar2 * 3 + 3] = *(undefined4 *)(pmVar3 + 8);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  puVar4 = local_f4;
  for (iVar1 = 0x3d; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 005585D0 */

int __fastcall m2dIsPolyConvexCCW(m2dPOLY *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *(int *)param_1;
  if (0 < iVar1) {
    do {
      iVar1 = m2dQualPointLine_A((m2dV *)(param_1 + ((iVar2 + 2) % iVar1) * 8 + 4),
                                 (m2dV *)(param_1 + (iVar2 % iVar1) * 8 + 4),
                                 (m2dV *)(param_1 + ((iVar2 + 1) % iVar1) * 8 + 4),
                                 DAT_005de5d4 * ___real_41200000);
      if (iVar1 == 1) {
        return 0;
      }
      iVar1 = *(int *)param_1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 00558640 */

int __fastcall
m3dIsectRayPlane(m3dV *param_1,m3dV *param_2,m3dPOLY *param_3,m3dV *param_4,m3dV *param_5,
                float *param_6)

{
  float fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  if (param_5 == (m3dV *)0x0) {
    param_5 = (m3dV *)&local_c;
    local_c = (*(float *)(param_3 + 0x24) - *(float *)(param_3 + 0x18)) *
              (*(float *)(param_3 + 0x14) - *(float *)(param_3 + 8)) -
              (*(float *)(param_3 + 0x20) - *(float *)(param_3 + 0x14)) *
              (*(float *)(param_3 + 0x18) - *(float *)(param_3 + 0xc));
    local_8 = (*(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x10)) *
              (*(float *)(param_3 + 0x18) - *(float *)(param_3 + 0xc)) -
              (*(float *)(param_3 + 0x24) - *(float *)(param_3 + 0x18)) *
              (*(float *)(param_3 + 0x10) - *(float *)(param_3 + 4));
    local_4 = (*(float *)(param_3 + 0x20) - *(float *)(param_3 + 0x14)) *
              (*(float *)(param_3 + 0x10) - *(float *)(param_3 + 4)) -
              (*(float *)(param_3 + 0x14) - *(float *)(param_3 + 8)) *
              (*(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x10));
    m3dNormalize((m3dV *)&local_c);
  }
  fVar1 = *(float *)(param_2 + 4) * *(float *)(param_5 + 4) +
          *(float *)param_2 * *(float *)param_5 + *(float *)(param_5 + 8) * *(float *)(param_2 + 8);
  if (-DAT_005de5d4 < fVar1) {
    return 0;
  }
  fVar1 = (*(float *)param_1 * *(float *)param_5 +
          *(float *)(param_5 + 8) * *(float *)(param_1 + 8) +
          *(float *)(param_1 + 4) * *(float *)(param_5 + 4) +
          -(*(float *)(param_3 + 4) * *(float *)param_5 +
           *(float *)(param_3 + 0xc) * *(float *)(param_5 + 8) +
           *(float *)(param_3 + 8) * *(float *)(param_5 + 4))) / fVar1;
  if (___real_00000000 < fVar1) {
    return 0;
  }
  if (param_4 != (m3dV *)0x0) {
    *(float *)param_4 = *(float *)param_1 - fVar1 * *(float *)param_2;
    *(float *)(param_4 + 4) = *(float *)(param_1 + 4) - fVar1 * *(float *)(param_2 + 4);
    *(float *)(param_4 + 8) = *(float *)(param_1 + 8) - fVar1 * *(float *)(param_2 + 8);
  }
  if (param_6 != (float *)0x0) {
    *param_6 = -fVar1;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 005587B0 */

int __fastcall
m3dIsectRayVNPlane(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,m3dV *param_5,
                  float *param_6)

{
  float fVar1;
  
  fVar1 = *(float *)(param_4 + 8) * *(float *)(param_2 + 8) +
          *(float *)param_2 * *(float *)param_4 + *(float *)(param_2 + 4) * *(float *)(param_4 + 4);
  if (-DAT_005de5d4 < fVar1) {
    return 0;
  }
  fVar1 = (*(float *)(param_1 + 8) * *(float *)(param_4 + 8) +
          *(float *)param_1 * *(float *)param_4 +
          *(float *)(param_1 + 4) * *(float *)(param_4 + 4) +
          -(*(float *)param_3 * *(float *)param_4 +
           *(float *)(param_3 + 4) * *(float *)(param_4 + 4) +
           *(float *)(param_3 + 8) * *(float *)(param_4 + 8))) / fVar1;
  if (___real_00000000 < fVar1) {
    return 0;
  }
  if (param_5 != (m3dV *)0x0) {
    *(float *)param_5 = *(float *)param_1 - fVar1 * *(float *)param_2;
    *(float *)(param_5 + 4) = *(float *)(param_1 + 4) - fVar1 * *(float *)(param_2 + 4);
    *(float *)(param_5 + 8) = *(float *)(param_1 + 8) - fVar1 * *(float *)(param_2 + 8);
  }
  if (param_6 != (float *)0x0) {
    *param_6 = -fVar1;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 00558880 */

int __fastcall
_m3dIsectRayVNPlane(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,m3dV *param_5,
                   float *param_6)

{
  float fVar1;
  float fVar2;
  m3dV *pmVar3;
  
  pmVar3 = param_4;
  fVar1 = *(float *)(param_4 + 8) * *(float *)(param_2 + 8) +
          *(float *)param_2 * *(float *)param_4 + *(float *)(param_2 + 4) * *(float *)(param_4 + 4);
  param_4 = (m3dV *)(uint)(ABS(fVar1) < DAT_005de5d4);
  if ((float)(int)param_4 != ___real_00000000) {
    return 0;
  }
  fVar1 = (*(float *)(param_1 + 4) * *(float *)(pmVar3 + 4) +
          *(float *)(pmVar3 + 8) * *(float *)(param_1 + 8) +
          *(float *)param_1 * *(float *)pmVar3 +
          -(*(float *)param_3 * *(float *)pmVar3 +
           *(float *)(param_3 + 4) * *(float *)(pmVar3 + 4) +
           *(float *)(param_3 + 8) * *(float *)(pmVar3 + 8))) / fVar1;
  if (___real_00000000 < fVar1) {
    return 0;
  }
  if (param_5 != (m3dV *)0x0) {
    fVar2 = -fVar1;
    *(float *)param_5 = fVar2 * *(float *)param_2 + *(float *)param_1;
    *(float *)(param_5 + 4) = fVar2 * *(float *)(param_2 + 4) + *(float *)(param_1 + 4);
    *(float *)(param_5 + 8) = fVar2 * *(float *)(param_2 + 8) + *(float *)(param_1 + 8);
  }
  if (param_6 != (float *)0x0) {
    *param_6 = -fVar1;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: m3d:m3d_poly.cpp
   addr: 00558980 */

int __fastcall
m3dDistPointPoly(m3dV *param_1,m3dPOLY *param_2,m3dV *param_3,int param_4,m3dV *param_5,
                float *param_6,float param_7)

{
  int iVar1;
  m3dPOLY *pmVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  m3dV *pmVar8;
  m3dV *pmVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 extraout_MM1;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  unkbyte10 in_ST2;
  undefined8 uVar15;
  undefined8 uVar16;
  unkbyte10 in_ST3;
  undefined8 uVar17;
  unkbyte10 in_ST4;
  undefined8 uVar18;
  unkbyte10 in_ST5;
  unkbyte10 Var19;
  unkbyte10 Var20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  m3dV *pmVar27;
  int local_1cc;
  m3dV local_1c8 [240];
  float local_d8 [4];
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8 [3];
  undefined4 uStack_9c;
  float local_98 [4];
  float local_88;
  float fStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68 [3];
  undefined4 uStack_5c;
  float *local_58;
  int local_54;
  m3dV *local_50;
  m3dV *local_4c;
  m3dPOLY *local_48;
  m3dV *local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [3];
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pmVar8 = param_3;
  pmVar9 = (m3dV *)(param_2 + 4);
  local_28 = *(float *)param_1 - *(float *)pmVar9;
  local_24 = *(float *)(param_1 + 4) - *(float *)(param_2 + 8);
  local_20 = *(float *)(param_1 + 8) - *(float *)(param_2 + 0xc);
  local_44 = (m3dV *)(local_20 * *(float *)(param_3 + 8) +
                     local_24 * *(float *)(param_3 + 4) + local_28 * *(float *)param_3);
  if ((((float)local_44 <= param_7) && (-param_7 <= (float)local_44)) &&
     ((param_4 != 0 || (-DAT_005de5d4 <= (float)local_44)))) {
    local_10 = *(float *)(param_2 + 0x10) - *(float *)pmVar9;
    local_c = *(float *)(param_2 + 0x14) - *(float *)(param_2 + 8);
    local_8 = *(float *)(param_2 + 0x18) - *(float *)(param_2 + 0xc);
    local_50 = pmVar9;
    local_4c = param_1;
    local_48 = param_2;
    iVar3 = _m3dNormalize((m3dV *)&local_10);
    pmVar27 = local_50;
    if (iVar3 == 0) {
      local_10 = *(float *)(local_48 + 0x1c) - *(float *)local_50;
      pmVar9 = (m3dV *)(local_48 + 0x1c);
      local_c = *(float *)(local_48 + 0x20) - *(float *)(local_50 + 4);
      local_8 = *(float *)(local_48 + 0x24) - *(float *)(local_50 + 8);
      iVar3 = _m3dNormalize((m3dV *)&local_10);
      if (iVar3 != 0) {
        iVar3 = m3dDistPointLSeg(param_1,pmVar27,pmVar9,param_7,param_6,param_5,(float *)0x0);
        return iVar3;
      }
      fVar25 = (*(float *)pmVar27 - *(float *)param_1) * (*(float *)pmVar27 - *(float *)param_1) +
               (*(float *)(pmVar27 + 4) - *(float *)(param_1 + 4)) *
               (*(float *)(pmVar27 + 4) - *(float *)(param_1 + 4)) +
               (*(float *)(pmVar27 + 8) - *(float *)(param_1 + 8)) *
               (*(float *)(pmVar27 + 8) - *(float *)(param_1 + 8));
      if (m3dSimdType == 0) {
        fVar25 = fVar25 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar26 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
        fVar24 = auVar26._0_4_;
        param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar24 *
                           (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar25 * fVar24 * fVar24)
                          * fVar25);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar11 = (ulonglong)(uint)fVar25;
        uVar12 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar11);
        uVar13 = PackedFloatingMUL(uVar12,uVar12);
        uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
        uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
        uVar12 = PackedFloatingMUL(uVar12,uVar11);
        param_3 = (m3dV *)uVar12;
        FastExitMediaState();
      }
      else {
        param_3 = (m3dV *)SQRT(fVar25);
      }
      if ((float)param_3 < param_7) {
        if (param_6 != (float *)0x0) {
          *param_6 = (float)param_3;
        }
        if (param_5 != (m3dV *)0x0) {
          *(undefined4 *)param_5 = *(undefined4 *)pmVar27;
          *(undefined4 *)(param_5 + 4) = *(undefined4 *)(pmVar27 + 4);
          *(undefined4 *)(param_5 + 8) = *(undefined4 *)(pmVar27 + 8);
        }
        return 1;
      }
    }
    else {
      local_40 = local_c * *(float *)(param_3 + 8) - local_8 * *(float *)(param_3 + 4);
      local_3c = local_8 * *(float *)param_3 - local_10 * *(float *)(param_3 + 8);
      local_38 = local_10 * *(float *)(param_3 + 4) - local_c * *(float *)param_3;
      Var19 = in_ST5;
      Var20 = in_ST5;
      m3dMATR::MakeWCS2LCS((m3dMATR *)local_d8,pmVar9,(m3dV *)&local_10,param_3,(m3dV *)&local_40);
      local_44 = (m3dV *)local_d8;
      if (m3dSimdType == 0) {
        if (((uint)local_d8 & 0xf) == 0) {
          fVar25 = *(float *)local_4c * local_d8[0] + local_a8[0] +
                   *(float *)(local_4c + 4) * local_c8 + *(float *)(local_4c + 8) * local_b8;
          fVar24 = *(float *)local_4c * local_d8[1] + local_a8[1] +
                   *(float *)(local_4c + 4) * fStack_c4 + *(float *)(local_4c + 8) * fStack_b4;
        }
        else {
          fVar25 = *(float *)local_4c * local_d8[0] + *(float *)(local_4c + 4) * local_c8 +
                   *(float *)(local_4c + 8) * local_b8 + local_a8[0];
          fVar24 = *(float *)local_4c * local_d8[1] + *(float *)(local_4c + 4) * fStack_c4 +
                   *(float *)(local_4c + 8) * fStack_b4 + local_a8[1];
        }
        local_1c = CONCAT44(fVar24,fVar25);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar10 = (undefined4)*(undefined8 *)local_4c;
        uVar12 = CONCAT44(uVar10,uVar10);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)local_4c >> 0x20);
        uVar14 = CONCAT44(uVar10,uVar10);
        uVar17 = CONCAT44(*(float *)(local_4c + 8),*(float *)(local_4c + 8));
        uVar13 = PackedFloatingMUL(uVar12,CONCAT44(local_d8[1],local_d8[0]));
        uVar16 = PackedFloatingMUL(uVar14,CONCAT44(fStack_c4,local_c8));
        uVar18 = PackedFloatingMUL(uVar17,CONCAT44(fStack_b4,local_b8));
        in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar18);
        uVar13 = PackedFloatingADD(uVar13,CONCAT44(local_a8[1],local_a8[0]));
        uVar15 = PackedFloatingMUL(uVar12,CONCAT44(local_d8[3],local_d8[2]));
        uVar12 = PackedFloatingADD(uVar16,uVar18);
        uVar16 = PackedFloatingMUL(uVar14,CONCAT44(uStack_bc,uStack_c0));
        uVar17 = PackedFloatingMUL(uVar17,CONCAT44(uStack_ac,uStack_b0));
        in_ST5 = CONCAT28((short)((unkuint10)in_ST5 >> 0x40),uVar17);
        uVar14 = PackedFloatingADD(uVar15,CONCAT44(uStack_9c,local_a8[2]));
        local_1c = PackedFloatingADD(uVar13,uVar12);
        uVar12 = PackedFloatingADD(uVar16,uVar17);
        in_ST4 = CONCAT28((short)((unkuint10)in_ST4 >> 0x40),uVar12);
        uVar12 = PackedFloatingADD(uVar14,uVar12);
        in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),uVar12);
        local_14 = (float)uVar12;
        FastExitMediaState();
      }
      else {
        iVar3 = 0;
        do {
          *(undefined4 *)((int)&local_1c + iVar3 * 4) = 0;
          iVar4 = 0;
          pfVar6 = local_d8 + iVar3;
          fVar25 = ___real_00000000;
          do {
            iVar5 = iVar4 * 4;
            fVar24 = *pfVar6;
            iVar4 = iVar4 + 1;
            pfVar6 = pfVar6 + 4;
            fVar25 = *(float *)(param_1 + iVar5) * fVar24 + fVar25;
          } while (iVar4 < 3);
          *(float *)((int)&local_1c + iVar3 * 4) = fVar25;
          iVar4 = iVar3 + iVar4 * 4;
          iVar3 = iVar3 + 1;
          (&local_20)[iVar3] = fVar25 + local_d8[iVar4];
          Var19 = in_ST5;
          Var20 = in_ST5;
        } while (iVar3 < 3);
      }
      uVar12 = (undefined8)in_ST2;
      local_54 = 0;
      if (0 < *(int *)local_48) {
        param_4 = (int)local_1c8;
        local_58 = local_d8;
        iVar3 = 0xf0;
        pmVar9 = local_50;
        do {
          local_4c = (m3dV *)param_4;
          local_44 = pmVar9;
          if (m3dSimdType == 0) {
            if (((uint)local_58 & 0xf) == 0) {
              fVar25 = *(float *)pmVar9;
              fVar24 = *(float *)(pmVar9 + 4);
              fVar21 = *(float *)(pmVar9 + 8);
              fVar23 = fVar25 * *local_58 + local_58[0xc] + fVar24 * local_58[4] +
                       fVar21 * local_58[8];
              fVar22 = fVar25 * local_58[1] + local_58[0xd] + fVar24 * local_58[5] +
                       fVar21 * local_58[9];
              fVar25 = fVar25 * local_58[2] + local_58[0xe] + fVar24 * local_58[6] +
                       fVar21 * local_58[10];
            }
            else {
              fVar25 = *(float *)pmVar9;
              fVar24 = *(float *)(pmVar9 + 4);
              fVar21 = *(float *)(pmVar9 + 8);
              fVar23 = fVar25 * (float)*(undefined8 *)local_58 +
                       fVar24 * (float)*(undefined8 *)(local_58 + 4) +
                       fVar21 * (float)*(undefined8 *)(local_58 + 8) +
                       (float)*(undefined8 *)(local_58 + 0xc);
              fVar22 = fVar25 * (float)((ulonglong)*(undefined8 *)local_58 >> 0x20) +
                       fVar24 * (float)((ulonglong)*(undefined8 *)(local_58 + 4) >> 0x20) +
                       fVar21 * (float)((ulonglong)*(undefined8 *)(local_58 + 8) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(local_58 + 0xc) >> 0x20);
              fVar25 = fVar25 * (float)*(undefined8 *)(local_58 + 2) +
                       fVar24 * (float)*(undefined8 *)(local_58 + 6) +
                       fVar21 * (float)*(undefined8 *)(local_58 + 10) +
                       (float)*(undefined8 *)(local_58 + 0xe);
            }
            *(ulonglong *)param_4 = CONCAT44(fVar22,fVar23);
            *(float *)(param_4 + 8) = fVar25;
          }
          else if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar10 = (undefined4)*(undefined8 *)pmVar9;
            uVar12 = CONCAT44(uVar10,uVar10);
            uVar10 = (undefined4)((ulonglong)*(undefined8 *)pmVar9 >> 0x20);
            uVar14 = CONCAT44(uVar10,uVar10);
            uVar17 = CONCAT44(*(float *)(pmVar9 + 8),*(float *)(pmVar9 + 8));
            uVar13 = PackedFloatingMUL(uVar12,*(undefined8 *)local_58);
            uVar16 = PackedFloatingMUL(uVar14,*(undefined8 *)(local_58 + 4));
            uVar18 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_58 + 8));
            in_ST2 = CONCAT28((short)((unkuint10)in_ST2 >> 0x40),uVar18);
            uVar13 = PackedFloatingADD(uVar13,*(undefined8 *)(local_58 + 0xc));
            uVar15 = PackedFloatingMUL(uVar12,*(undefined8 *)(local_58 + 2));
            uVar12 = PackedFloatingADD(uVar16,uVar18);
            uVar16 = PackedFloatingMUL(uVar14,*(undefined8 *)(local_58 + 6));
            uVar17 = PackedFloatingMUL(uVar17,*(undefined8 *)(local_58 + 10));
            in_ST5 = CONCAT28((short)((unkuint10)in_ST5 >> 0x40),uVar17);
            uVar14 = PackedFloatingADD(uVar15,*(undefined8 *)(local_58 + 0xe));
            uVar12 = PackedFloatingADD(uVar13,uVar12);
            uVar13 = PackedFloatingADD(uVar16,uVar17);
            in_ST4 = CONCAT28((short)((unkuint10)in_ST4 >> 0x40),uVar13);
            *(undefined8 *)param_4 = uVar12;
            uVar12 = PackedFloatingADD(uVar14,uVar13);
            in_ST3 = CONCAT28((short)((unkuint10)in_ST3 >> 0x40),uVar12);
            *(int *)(param_4 + 8) = (int)uVar12;
            FastExitMediaState();
          }
          else {
            iVar4 = 0;
            pfVar6 = (float *)param_4;
            do {
              *pfVar6 = 0.0;
              iVar5 = 0;
              pfVar7 = (float *)(iVar3 + (int)pfVar6);
              fVar25 = ___real_00000000;
              do {
                iVar1 = iVar5 * 4;
                fVar24 = *pfVar7;
                iVar5 = iVar5 + 1;
                pfVar7 = pfVar7 + 4;
                fVar25 = *(float *)(pmVar9 + iVar1) * fVar24 + fVar25;
              } while (iVar5 < 3);
              iVar5 = iVar4 + iVar5 * 4;
              iVar4 = iVar4 + 1;
              *pfVar6 = fVar25 + local_d8[iVar5];
              pfVar6 = pfVar6 + 1;
              Var19 = in_ST5;
              Var20 = in_ST5;
            } while (iVar4 < 3);
          }
          uVar12 = (undefined8)in_ST2;
          param_4 = param_4 + 0xc;
          local_54 = local_54 + 1;
          iVar3 = iVar3 + -0xc;
          pmVar9 = pmVar9 + 0xc;
        } while (local_54 < *(int *)local_48);
      }
      local_1cc = *(int *)local_48;
      iVar3 = m3xzIsBelongPointPoly_A((m3dPOLY *)&local_1cc,(m3dV *)&local_1c,DAT_005de5d4);
      pmVar2 = local_48;
      if (iVar3 != 0) {
        if (param_6 != (float *)0x0) {
          *param_6 = ABS(local_1c._4_4_);
        }
        if (param_5 != (m3dV *)0x0) {
          local_1c = local_1c & 0xffffffff;
          m3dMATR::MakeLCS2WCS
                    ((m3dMATR *)local_98,local_50,(m3dV *)&local_10,param_3,(m3dV *)&local_40);
          fVar25 = (float)local_1c;
          fVar24 = (float)(local_1c >> 0x20);
          if (m3dSimdType != 0) {
            if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar12 = PackedFloatingMUL(CONCAT44(fVar25,fVar25),CONCAT44(local_98[1],local_98[0]));
              uVar13 = PackedFloatingMUL(CONCAT44(fVar24,fVar24),CONCAT44(fStack_84,local_88));
              uVar14 = PackedFloatingMUL(CONCAT44(local_14,local_14),CONCAT44(fStack_74,local_78));
              uVar12 = PackedFloatingADD(uVar12,CONCAT44(local_68[1],local_68[0]));
              uVar16 = PackedFloatingMUL(CONCAT44(fVar25,fVar25),CONCAT44(local_98[3],local_98[2]));
              uVar13 = PackedFloatingADD(uVar13,uVar14);
              uVar17 = PackedFloatingMUL(CONCAT44(fVar24,fVar24),CONCAT44(uStack_7c,fStack_80));
              uVar18 = PackedFloatingMUL(CONCAT44(local_14,local_14),CONCAT44(uStack_6c,fStack_70));
              uVar14 = PackedFloatingADD(uVar16,CONCAT44(uStack_5c,local_68[2]));
              uVar12 = PackedFloatingADD(uVar12,uVar13);
              uVar13 = PackedFloatingADD(uVar17,uVar18);
              *(undefined8 *)param_5 = uVar12;
              uVar12 = PackedFloatingADD(uVar14,uVar13);
              *(int *)(param_5 + 8) = (int)uVar12;
              FastExitMediaState();
              return 1;
            }
            iVar3 = 0;
            pmVar9 = param_5;
            do {
              fVar25 = ___real_00000000;
              *(float *)pmVar9 = 0.0;
              iVar4 = 0;
              pmVar8 = pmVar9 + ((int)local_98 - (int)param_5);
              do {
                iVar5 = iVar4 * 4;
                fVar24 = *(float *)pmVar8;
                iVar4 = iVar4 + 1;
                pmVar8 = pmVar8 + 0x10;
                fVar25 = *(float *)((int)&local_1c + iVar5) * fVar24 + fVar25;
              } while (iVar4 < 3);
              iVar4 = iVar3 + iVar4 * 4;
              iVar3 = iVar3 + 1;
              *(float *)pmVar9 = fVar25 + local_98[iVar4];
              pmVar9 = pmVar9 + 4;
            } while (iVar3 < 3);
            return 1;
          }
          if (((uint)local_98 & 0xf) == 0) {
            fVar21 = fVar25 * local_98[0] + local_68[0] + fVar24 * local_88 + local_14 * local_78;
            fVar23 = fVar25 * local_98[1] + local_68[1] + fVar24 * fStack_84 + local_14 * fStack_74;
            fVar25 = fVar25 * local_98[2] + local_68[2] + fVar24 * fStack_80 + local_14 * fStack_70;
          }
          else {
            fVar21 = fVar25 * local_98[0] + fVar24 * local_88 + local_14 * local_78 + local_68[0];
            fVar23 = fVar25 * local_98[1] + fVar24 * fStack_84 + local_14 * fStack_74 + local_68[1];
            fVar25 = fVar25 * local_98[2] + fVar24 * fStack_80 + local_14 * fStack_70 + local_68[2];
          }
          *(ulonglong *)param_5 = CONCAT44(fVar23,fVar21);
          *(float *)(param_5 + 8) = fVar25;
        }
        return 1;
      }
      param_3 = (m3dV *)m3xzDistPointLSeg_2((m3dV *)&local_1c,
                                            local_1c8 + *(int *)local_48 * 0xc + -0xc,local_1c8,
                                            (m3dV *)local_34);
      iVar3 = 0;
      if (*(int *)pmVar2 != 1 && -1 < *(int *)pmVar2 + -1) {
        pmVar9 = local_1c8;
        do {
          uVar12 = (undefined8)in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = Var19;
          Var19 = Var20;
          pmVar27 = (m3dV *)m3xzDistPointLSeg_2((m3dV *)&local_1c,pmVar9,pmVar9 + 0xc,
                                                (m3dV *)&local_28);
          if ((float)pmVar27 < (float)param_3) {
            local_34[0] = local_28;
            local_34[1] = local_24;
            local_34[2] = local_20;
            param_3 = pmVar27;
          }
          iVar3 = iVar3 + 1;
          pmVar9 = pmVar9 + 0xc;
        } while (iVar3 < *(int *)local_48 + -1);
      }
      if ((float)param_3 <= param_7 * param_7) {
        fVar25 = ((float)local_1c - local_34[0]) * ((float)local_1c - local_34[0]) +
                 (local_1c._4_4_ - local_34[1]) * (local_1c._4_4_ - local_34[1]) +
                 (local_14 - local_34[2]) * (local_14 - local_34[2]);
        if (m3dSimdType == 0) {
          fVar25 = fVar25 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar26 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
          fVar24 = auVar26._0_4_;
          param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar24 *
                             (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar25 * fVar24 * fVar24
                             ) * fVar25);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar11 = (ulonglong)(uint)fVar25;
          uVar12 = PackedFloatingReciprocalSQRAprox(uVar12,uVar11);
          uVar13 = PackedFloatingMUL(uVar12,uVar12);
          uVar13 = PackedFloatingReciprocalSQRIter1(uVar13,uVar11);
          uVar12 = PackedFloatingReciprocalIter2(uVar13,uVar12);
          uVar12 = PackedFloatingMUL(uVar12,uVar11);
          param_3 = (m3dV *)uVar12;
          FastExitMediaState();
        }
        else {
          param_3 = (m3dV *)SQRT(fVar25);
        }
        if ((float)param_3 <= DAT_005de5d4 * ___real_40a00000 + param_7) {
          if (param_6 != (float *)0x0) {
            *param_6 = (float)param_3;
          }
          if (param_5 != (m3dV *)0x0) {
            m3dMATR::MakeLCS2WCS
                      ((m3dMATR *)local_98,local_50,(m3dV *)&local_10,pmVar8,(m3dV *)&local_40);
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar12 = PackedFloatingMUL(CONCAT44(local_34[0],local_34[0]),
                                           CONCAT44(local_98[1],local_98[0]));
                uVar13 = PackedFloatingMUL(CONCAT44(local_34[1],local_34[1]),
                                           CONCAT44(fStack_84,local_88));
                uVar14 = PackedFloatingMUL(CONCAT44(local_34[2],local_34[2]),
                                           CONCAT44(fStack_74,local_78));
                uVar12 = PackedFloatingADD(uVar12,CONCAT44(local_68[1],local_68[0]));
                uVar16 = PackedFloatingMUL(CONCAT44(local_34[0],local_34[0]),
                                           CONCAT44(local_98[3],local_98[2]));
                uVar13 = PackedFloatingADD(uVar13,uVar14);
                uVar17 = PackedFloatingMUL(CONCAT44(local_34[1],local_34[1]),
                                           CONCAT44(uStack_7c,fStack_80));
                uVar18 = PackedFloatingMUL(CONCAT44(local_34[2],local_34[2]),
                                           CONCAT44(uStack_6c,fStack_70));
                uVar14 = PackedFloatingADD(uVar16,CONCAT44(uStack_5c,local_68[2]));
                uVar12 = PackedFloatingADD(uVar12,uVar13);
                uVar13 = PackedFloatingADD(uVar17,uVar18);
                *(undefined8 *)param_5 = uVar12;
                uVar12 = PackedFloatingADD(uVar14,uVar13);
                *(int *)(param_5 + 8) = (int)uVar12;
                FastExitMediaState();
                return 1;
              }
              iVar3 = 0;
              pmVar9 = param_5;
              do {
                fVar25 = ___real_00000000;
                *(float *)pmVar9 = 0.0;
                iVar4 = 0;
                pmVar8 = pmVar9 + ((int)local_98 - (int)param_5);
                do {
                  pfVar6 = local_34 + iVar4;
                  fVar24 = *(float *)pmVar8;
                  iVar4 = iVar4 + 1;
                  pmVar8 = pmVar8 + 0x10;
                  fVar25 = *pfVar6 * fVar24 + fVar25;
                } while (iVar4 < 3);
                iVar4 = iVar3 + iVar4 * 4;
                iVar3 = iVar3 + 1;
                *(float *)pmVar9 = fVar25 + local_98[iVar4];
                pmVar9 = pmVar9 + 4;
              } while (iVar3 < 3);
              return 1;
            }
            if (((uint)local_98 & 0xf) == 0) {
              fVar25 = local_34[0] * local_98[0] + local_68[0] + local_34[1] * local_88 +
                       local_34[2] * local_78;
              fVar24 = local_34[0] * local_98[1] + local_68[1] + local_34[1] * fStack_84 +
                       local_34[2] * fStack_74;
              fVar21 = local_34[0] * local_98[2] + local_68[2] + local_34[1] * fStack_80 +
                       local_34[2] * fStack_70;
            }
            else {
              fVar25 = local_34[0] * local_98[0] + local_34[1] * local_88 +
                       local_34[2] * local_78 + local_68[0];
              fVar24 = local_34[0] * local_98[1] + local_34[1] * fStack_84 +
                       local_34[2] * fStack_74 + local_68[1];
              fVar21 = local_34[0] * local_98[2] + local_34[1] * fStack_80 +
                       local_34[2] * fStack_70 + local_68[2];
            }
            *(ulonglong *)param_5 = CONCAT44(fVar24,fVar25);
            *(float *)(param_5 + 8) = fVar21;
          }
          return 1;
        }
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 00559420 */

int __fastcall
m3dDistLSegPoly(m3dV *param_1,m3dV *param_2,m3dPOLY *param_3,m3dV *param_4,m3dV *param_5,
               m3dV *param_6,float *param_7,int *param_8,float param_9)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_40;
  int local_3c;
  m3dV *local_38;
  m3dPOLY *local_34;
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
  
  local_34 = param_3 + 4;
  fVar2 = (*(float *)(param_1 + 4) - *(float *)(param_3 + 8)) * *(float *)(param_4 + 4) +
          (*(float *)(param_1 + 8) - *(float *)(param_3 + 0xc)) * *(float *)(param_4 + 8) +
          (*(float *)param_1 - *(float *)(param_3 + 4)) * *(float *)param_4;
  local_38 = (m3dV *)((*(float *)(param_2 + 4) - *(float *)(param_3 + 8)) * *(float *)(param_4 + 4)
                     + (*(float *)(param_2 + 8) - *(float *)(param_3 + 0xc)) *
                       *(float *)(param_4 + 8) +
                       (*(float *)param_2 - *(float *)local_34) * *(float *)param_4);
  if (((fVar2 <= param_9) || ((float)local_38 <= param_9)) &&
     ((___real_bd4ccccd <= fVar2 || (___real_bd4ccccd <= (float)local_38)))) {
    iVar3 = m3dIsectLSegPoly(param_1,param_2,param_3,param_4,(m3dV *)&local_24);
    if (iVar3 != 0) {
      *(undefined4 *)param_6 = local_24;
      *(undefined4 *)(param_6 + 4) = local_20;
      *(undefined4 *)(param_6 + 8) = local_1c;
      *(undefined4 *)param_5 = local_24;
      *(undefined4 *)(param_5 + 4) = local_20;
      *(undefined4 *)(param_5 + 8) = local_1c;
      *param_7 = 0.0;
      *param_8 = -1;
      return 1;
    }
    local_3c = 0;
    iVar3 = *(int *)param_3;
    if (0 < iVar3) {
      local_38 = (m3dV *)local_34;
      iVar4 = 0;
      do {
        iVar1 = iVar4 + 1;
        iVar3 = m3dDistLSegLSeg(param_1,param_2,local_38,
                                (m3dV *)(param_3 + (iVar1 % iVar3) * 0xc + 4),param_9,&local_40,
                                (m3dV *)&local_24,(m3dV *)&local_c);
        if (iVar3 != 0) {
          local_2c = local_20;
          local_30 = local_24;
          local_14 = local_8;
          local_28 = local_1c;
          local_18 = local_c;
          local_10 = local_4;
          param_9 = local_40;
          local_3c = 1;
          *param_8 = iVar4;
        }
        local_38 = local_38 + 0xc;
        iVar3 = *(int *)param_3;
        iVar4 = iVar1;
      } while (iVar1 < iVar3);
    }
    iVar3 = m3dDistPointPoly(param_1,param_3,param_4,1,(m3dV *)&local_18,&local_40,param_9);
    if (iVar3 != 0) {
      local_2c = *(undefined4 *)(param_1 + 4);
      local_30 = *(undefined4 *)param_1;
      local_28 = *(undefined4 *)(param_1 + 8);
      param_9 = local_40;
      local_3c = 1;
      *param_8 = -1;
    }
    iVar3 = m3dDistPointPoly(param_2,param_3,param_4,1,(m3dV *)&local_18,&local_40,param_9);
    if (iVar3 == 0) {
      local_40 = param_9;
      if (local_3c == 0) {
        return 0;
      }
    }
    else {
      local_30 = *(undefined4 *)param_2;
      local_2c = *(undefined4 *)(param_2 + 4);
      local_28 = *(undefined4 *)(param_2 + 8);
      local_3c = 1;
      *param_8 = -1;
    }
    *(undefined4 *)param_5 = local_30;
    *(undefined4 *)(param_5 + 4) = local_2c;
    *(undefined4 *)(param_5 + 8) = local_28;
    *(undefined4 *)param_6 = local_18;
    *(undefined4 *)(param_6 + 4) = local_14;
    *(undefined4 *)(param_6 + 8) = local_10;
    *param_7 = local_40;
    return local_3c;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 005596D0 */

int __fastcall
m3dDistLSegPlane(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,m3dV *param_5,m3dV *param_6
                ,float *param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  fVar3 = (*(float *)param_1 - *(float *)param_3) * *(float *)param_4 +
          (*(float *)(param_1 + 4) - *(float *)(param_3 + 4)) * *(float *)(param_4 + 4) +
          (*(float *)(param_1 + 8) - *(float *)(param_3 + 8)) * *(float *)(param_4 + 8);
  fVar1 = (*(float *)param_2 - *(float *)param_3) * *(float *)param_4 +
          (*(float *)(param_2 + 4) - *(float *)(param_3 + 4)) * *(float *)(param_4 + 4) +
          (*(float *)(param_2 + 8) - *(float *)(param_3 + 8)) * *(float *)(param_4 + 8);
  if (((param_8 < fVar3) && (param_8 < fVar1)) ||
     ((fVar3 < ___real_00000000 && (fVar1 < ___real_00000000)))) {
    return 0;
  }
  iVar5 = m3dIsectLSegPlane(param_1,param_2,param_3,param_4,(m3dV *)&local_c);
  if (iVar5 != 0) {
    *(undefined4 *)param_6 = local_c;
    *(undefined4 *)(param_6 + 4) = local_8;
    *(undefined4 *)(param_6 + 8) = local_4;
    *(undefined4 *)param_5 = local_c;
    *(undefined4 *)(param_5 + 4) = local_8;
    *(undefined4 *)(param_5 + 8) = local_4;
    *param_7 = 0.0;
    return 1;
  }
  fVar2 = fVar1;
  if (fVar3 < fVar1) {
    fVar2 = fVar3;
  }
  if (fVar2 <= param_8) {
    if (fVar1 <= fVar3) {
      *(undefined4 *)param_5 = *(undefined4 *)param_2;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_2 + 8);
      fVar4 = -((*(float *)param_2 - *(float *)param_3) * *(float *)param_4 +
               (*(float *)(param_2 + 4) - *(float *)(param_3 + 4)) * *(float *)(param_4 + 4) +
               (*(float *)(param_2 + 8) - *(float *)(param_3 + 8)) * *(float *)(param_4 + 8));
      fVar3 = *(float *)(param_4 + 4);
      fVar2 = *(float *)(param_4 + 8);
      *(float *)param_6 = fVar4 * *(float *)param_4 + *(float *)param_2;
      *(float *)(param_6 + 4) = fVar4 * fVar3 + *(float *)(param_2 + 4);
      *(float *)(param_6 + 8) = fVar4 * fVar2 + *(float *)(param_2 + 8);
      *param_7 = fVar1;
      return 1;
    }
    *(undefined4 *)param_5 = *(undefined4 *)param_1;
    *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_1 + 8);
    fVar4 = -((*(float *)param_1 - *(float *)param_3) * *(float *)param_4 +
             (*(float *)(param_1 + 4) - *(float *)(param_3 + 4)) * *(float *)(param_4 + 4) +
             (*(float *)(param_1 + 8) - *(float *)(param_3 + 8)) * *(float *)(param_4 + 8));
    fVar1 = *(float *)(param_4 + 4);
    fVar2 = *(float *)(param_4 + 8);
    *(float *)param_6 = fVar4 * *(float *)param_4 + *(float *)param_1;
    *(float *)(param_6 + 4) = fVar4 * fVar1 + *(float *)(param_1 + 4);
    *(float *)(param_6 + 8) = fVar4 * fVar2 + *(float *)(param_1 + 8);
    *param_7 = fVar3;
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 00559920 */

int __fastcall
m3dIsectLSegPlane(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,m3dV *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  m3dV *pmVar7;
  ulonglong uVar8;
  undefined8 in_MM1;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float local_20;
  
  pmVar7 = param_4;
  fVar2 = *(float *)param_2 - *(float *)param_1;
  fVar3 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_20 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
  if (m3dSimdType == 0) {
    local_20 = local_20 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar12 = rsqrtss(ZEXT416((uint)local_20),ZEXT416((uint)local_20));
    fVar11 = auVar12._0_4_;
    local_20 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_20 * fVar11 * fVar11) * local_20
    ;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar8 = (ulonglong)(uint)local_20;
    uVar9 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar8);
    uVar10 = PackedFloatingMUL(uVar9,uVar9);
    uVar10 = PackedFloatingReciprocalSQRIter1(uVar10,uVar8);
    uVar9 = PackedFloatingReciprocalIter2(uVar10,uVar9);
    uVar9 = PackedFloatingMUL(uVar9,uVar8);
    local_20 = (float)uVar9;
    FastExitMediaState();
  }
  else {
    local_20 = SQRT(local_20);
  }
  fVar11 = local_20;
  local_20 = (float)(uint)(ABS(local_20) < DAT_005de5d4);
  if ((float)(int)local_20 == ___real_00000000) {
    fVar6 = ___real_3f800000 / fVar11;
    fVar5 = fVar3 * fVar6 * *(float *)(param_4 + 4) +
            fVar6 * fVar4 * *(float *)(param_4 + 8) + fVar2 * fVar6 * *(float *)param_4;
    param_4 = (m3dV *)(uint)(ABS(fVar5) < DAT_005de5d4);
    if ((float)(int)param_4 != ___real_00000000) {
      return 0;
    }
    fVar5 = -((*(float *)param_1 * *(float *)pmVar7 +
              *(float *)(param_1 + 8) * *(float *)(pmVar7 + 8) +
              *(float *)(param_1 + 4) * *(float *)(pmVar7 + 4) +
              -(*(float *)param_3 * *(float *)pmVar7 +
               *(float *)(param_3 + 4) * *(float *)(pmVar7 + 4) +
               *(float *)(param_3 + 8) * *(float *)(pmVar7 + 8))) / fVar5);
    if (fVar5 < ___real_00000000) {
      return 0;
    }
    if (fVar11 < fVar5) {
      return 0;
    }
    fVar11 = *(float *)(param_1 + 4);
    fVar1 = *(float *)(param_1 + 8);
    if (param_5 != (m3dV *)0x0) {
      *(float *)param_5 = fVar2 * fVar6 * fVar5 + *(float *)param_1;
      *(float *)(param_5 + 4) = fVar3 * fVar6 * fVar5 + fVar11;
      *(float *)(param_5 + 8) = fVar6 * fVar4 * fVar5 + fVar1;
    }
  }
  else {
    param_4 = (m3dV *)(uint)(ABS((*(float *)param_1 - *(float *)param_3) * *(float *)param_4 +
                                 (*(float *)(param_1 + 4) - *(float *)(param_3 + 4)) *
                                 *(float *)(param_4 + 4) +
                                 (*(float *)(param_1 + 8) - *(float *)(param_3 + 8)) *
                                 *(float *)(param_4 + 8)) < DAT_005de5d4 * ___real_42c80000);
    if ((float)(int)param_4 == ___real_00000000) {
      return 0;
    }
    if (param_5 != (m3dV *)0x0) {
      *(undefined4 *)param_5 = *(undefined4 *)param_1;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_1 + 8);
      return 1;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_poly.cpp
   addr: 00559C30 */

int __fastcall
m3dIsectLSegPoly(m3dV *param_1,m3dV *param_2,m3dPOLY *param_3,m3dV *param_4,m3dV *param_5)

{
  float fVar1;
  m3dPOLY *pmVar2;
  m3dV *pmVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 in_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  pmVar3 = param_4;
  pmVar2 = param_3;
  local_24 = *(float *)param_2 - *(float *)param_1;
  local_20 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar1 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_2c = local_24 * local_24 + local_20 * local_20 + fVar1 * fVar1;
  if (m3dSimdType == 0) {
    local_2c = local_2c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar9 = rsqrtss(ZEXT416((uint)local_2c),ZEXT416((uint)local_2c));
    fVar8 = auVar9._0_4_;
    local_2c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_2c * fVar8 * fVar8) * local_2c;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar5 = (ulonglong)(uint)local_2c;
    uVar6 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar5);
    uVar7 = PackedFloatingMUL(uVar6,uVar6);
    uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
    uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
    uVar6 = PackedFloatingMUL(uVar6,uVar5);
    local_2c = (float)uVar6;
    FastExitMediaState();
  }
  else {
    local_2c = SQRT(local_2c);
  }
  fVar8 = local_2c;
  local_2c = (float)(uint)(ABS(local_2c) < DAT_005de5d4);
  if ((float)(int)local_2c == ___real_00000000) {
    local_1c = ___real_3f800000 / fVar8;
    local_24 = local_24 * local_1c;
    local_20 = local_20 * local_1c;
    local_1c = local_1c * fVar1;
    fVar1 = local_24 * *(float *)param_4 +
            local_20 * *(float *)(param_4 + 4) + local_1c * *(float *)(param_4 + 8);
    param_4 = (m3dV *)(uint)(ABS(fVar1) < DAT_005de5d4);
    if ((float)(int)param_4 != ___real_00000000) {
      return 0;
    }
    fVar1 = -((*(float *)param_1 * *(float *)pmVar3 +
              *(float *)(pmVar3 + 8) * *(float *)(param_1 + 8) +
              *(float *)(pmVar3 + 4) * *(float *)(param_1 + 4) +
              -(*(float *)pmVar3 * *(float *)(param_3 + 4) +
               *(float *)(param_3 + 8) * *(float *)(pmVar3 + 4) +
               *(float *)(param_3 + 0xc) * *(float *)(pmVar3 + 8))) / fVar1);
    if (fVar1 < ___real_00000000) {
      return 0;
    }
    if (fVar8 < fVar1) {
      return 0;
    }
    local_18 = local_24 * fVar1 + *(float *)param_1;
    local_14 = local_20 * fVar1 + *(float *)(param_1 + 4);
    local_10 = local_1c * fVar1 + *(float *)(param_1 + 8);
    iVar4 = m3dIsBelongPointPoly_A(param_3,(m3dV *)&local_18,pmVar3,DAT_005de5d4);
    if (iVar4 == 0) {
      return 0;
    }
    if (param_5 != (m3dV *)0x0) {
      *(float *)param_5 = local_18;
      *(float *)(param_5 + 4) = local_14;
      *(float *)(param_5 + 8) = local_10;
    }
  }
  else {
    local_c = *(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x10);
    local_8 = *(float *)(param_3 + 0x20) - *(float *)(param_3 + 0x14);
    local_24 = (*(float *)(param_3 + 0x24) - *(float *)(param_3 + 0x18)) *
               (*(float *)(param_3 + 0x14) - *(float *)(param_3 + 8)) -
               local_8 * (*(float *)(param_3 + 0x18) - *(float *)(param_3 + 0xc));
    local_20 = (*(float *)(param_3 + 0x18) - *(float *)(param_3 + 0xc)) * local_c -
               (*(float *)(param_3 + 0x24) - *(float *)(param_3 + 0x18)) *
               (*(float *)(param_3 + 0x10) - *(float *)(param_3 + 4));
    local_1c = local_8 * (*(float *)(param_3 + 0x10) - *(float *)(param_3 + 4)) -
               (*(float *)(param_3 + 0x14) - *(float *)(param_3 + 8)) * local_c;
    m3dNormalize((m3dV *)&local_24);
    param_3 = (m3dPOLY *)
              (uint)(ABS(local_24 * (*(float *)param_1 - *(float *)(param_3 + 4)) +
                         local_20 * (*(float *)(param_1 + 4) - *(float *)(param_3 + 8)) +
                         local_1c * (*(float *)(param_1 + 8) - *(float *)(param_3 + 0xc))) <
                    DAT_005de5d4 * ___real_42c80000);
    if ((float)(int)param_3 == ___real_00000000) {
      return 0;
    }
    iVar4 = m3dIsBelongPointPoly_A(pmVar2,param_1,param_4,DAT_005de5d4);
    if (iVar4 == 0) {
      return 0;
    }
    if (param_5 != (m3dV *)0x0) {
      *(undefined4 *)param_5 = *(undefined4 *)param_1;
      *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_1 + 8);
      return 1;
    }
  }
  return 1;
}




/* from: m3d:m3d_poly.cpp
   addr: 0055A000 */

void __fastcall m2dTriApplyBasisCoord(m2dTRI *param_1,float param_2,float param_3,m2dV *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 4);
  fVar5 = (*(float *)(param_1 + 8) - *(float *)param_1) * param_3 +
          (*(float *)(param_1 + 0x10) - *(float *)param_1) * (float)param_4;
  *(float *)param_2 = fVar5;
  fVar1 = (fVar3 - fVar4) * (float)param_4 + (fVar1 - fVar2) * param_3;
  *(float *)((int)param_2 + 4) = fVar1;
  *(float *)param_2 = fVar5 + *(float *)param_1;
  *(float *)((int)param_2 + 4) = fVar1 + *(float *)(param_1 + 4);
  return;
}




/* from: m3d:m3d_poly.cpp
   addr: 0055A060 */

void __fastcall m3dPolyApplyBasisCoord(m3dPOLY *param_1,float param_2,float param_3,m3dV *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar6 = *(float *)(param_1 + 8);
  fVar7 = *(float *)(param_1 + 0x24);
  fVar8 = *(float *)(param_1 + 0xc);
  fVar9 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 4)) * param_3 +
          (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 4)) * (float)param_4;
  *(float *)param_2 = fVar9;
  fVar1 = (fVar1 - fVar2) * param_3 + (fVar5 - fVar6) * (float)param_4;
  *(float *)((int)param_2 + 4) = fVar1;
  fVar2 = (fVar3 - fVar4) * param_3 + (fVar7 - fVar8) * (float)param_4;
  *(float *)((int)param_2 + 8) = fVar2;
  *(float *)param_2 = fVar9 + *(float *)(param_1 + 4);
  *(float *)((int)param_2 + 4) = fVar1 + *(float *)(param_1 + 8);
  *(float *)((int)param_2 + 8) = fVar2 + *(float *)(param_1 + 0xc);
  return;
}




/* from: m3d:m3d_poly.cpp
   addr: 0055A0F0 */

int __fastcall
m2dIsCrossLSegPolyBoundary_A(m2dPOLY *param_1,m2dV *param_2,m2dV *param_3,float param_4)

{
  int iVar1;
  m2dV *pmVar2;
  m2dV *pmVar3;
  m2dV *pmVar4;
  int iVar5;
  
  iVar1 = *(int *)param_1;
  pmVar4 = (m2dV *)(param_1 + 4);
  pmVar3 = (m2dV *)(param_1 + iVar1 * 8 + -4);
  while( true ) {
    pmVar2 = pmVar4;
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    iVar5 = m2dIsectLSegLSeg(pmVar3,pmVar2,param_2,param_3,(m2dV *)0x0);
    if (iVar5 != 0) break;
    pmVar4 = pmVar2 + 8;
    pmVar3 = pmVar2;
  }
  return 1;
}

