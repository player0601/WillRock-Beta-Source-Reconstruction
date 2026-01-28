
/* from: m3d:m3d_misc.cpp
   addr: 00556FB0 */

int __fastcall m3dGetClosestVert(int param_1,m3dV *param_2,m3dV *param_3)

{
  m3dV *pmVar1;
  m3dV *pmVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  unkbyte10 in_ST1;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  m3dV *local_4;
  
  pmVar1 = param_3;
  iVar3 = -1;
  iVar4 = 0;
  local_4 = DAT_005de5cc;
  if (0 < param_1) {
    pmVar2 = param_2 + 8;
    do {
      fVar8 = (*(float *)pmVar1 - *(float *)(pmVar2 + -8)) *
              (*(float *)pmVar1 - *(float *)(pmVar2 + -8)) +
              (*(float *)(pmVar1 + 4) - *(float *)(pmVar2 + -4)) *
              (*(float *)(pmVar1 + 4) - *(float *)(pmVar2 + -4)) +
              (*(float *)(pmVar1 + 8) - *(float *)pmVar2) *
              (*(float *)(pmVar1 + 8) - *(float *)pmVar2);
      if (m3dSimdType == 0) {
        fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar9 = auVar10._0_4_;
        param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                           (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) *
                          fVar8);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar5 = (ulonglong)(uint)fVar8;
        uVar6 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar5);
        uVar7 = PackedFloatingMUL(uVar6,uVar6);
        uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
        uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
        uVar6 = PackedFloatingMUL(uVar6,uVar5);
        in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar6);
        param_3 = (m3dV *)uVar6;
        FastExitMediaState();
      }
      else {
        param_3 = (m3dV *)SQRT(fVar8);
      }
      if ((float)param_3 < (float)local_4) {
        local_4 = param_3;
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
      pmVar2 = pmVar2 + 0xc;
    } while (iVar4 < param_1);
  }
  return iVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_misc.cpp
   addr: 005570C0 */

int __fastcall _m3xzIsIsectPolyCircle(m3dPOLY *param_1,m3dV *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  m3dPOLY *pmVar6;
  int iVar7;
  
  fVar2 = param_3 * param_3;
  iVar1 = *(int *)param_1;
  iVar7 = 0;
  if (0 < iVar1) {
    pmVar6 = param_1 + 4;
    do {
      if ((*(float *)pmVar6 - *(float *)param_2) * (*(float *)pmVar6 - *(float *)param_2) +
          (*(float *)(pmVar6 + 8) - *(float *)(param_2 + 8)) *
          (*(float *)(pmVar6 + 8) - *(float *)(param_2 + 8)) < fVar2) {
        return 1;
      }
      iVar7 = iVar7 + 1;
      pmVar6 = pmVar6 + 0xc;
    } while (iVar7 < iVar1);
  }
  iVar7 = 0;
  if (0 < iVar1 + -1) {
    pmVar6 = param_1 + 0xc;
    do {
      fVar3 = *(float *)(pmVar6 + 4) - *(float *)(pmVar6 + -8);
      fVar4 = *(float *)(pmVar6 + 0xc) - *(float *)pmVar6;
      fVar5 = ((*(float *)(param_2 + 8) - *(float *)pmVar6) * fVar4 +
              (*(float *)param_2 - *(float *)(pmVar6 + -8)) * fVar3) /
              (fVar3 * fVar3 + fVar4 * fVar4);
      if (((___real_00000000 < fVar5) && (fVar5 < ___real_3f800000)) &&
         (fVar3 = (fVar3 * fVar5 + *(float *)(pmVar6 + -8)) - *(float *)param_2,
         fVar4 = (fVar4 * fVar5 + *(float *)pmVar6) - *(float *)(param_2 + 8),
         fVar3 * fVar3 + fVar4 * fVar4 < fVar2)) {
        return 1;
      }
      iVar7 = iVar7 + 1;
      pmVar6 = pmVar6 + 0xc;
    } while (iVar7 < iVar1 + -1);
  }
  fVar3 = *(float *)(param_1 + 4) - *(float *)(param_1 + iVar7 * 0xc + 4);
  pmVar6 = param_1 + iVar7 * 0xc + 4;
  fVar4 = *(float *)(param_1 + 0xc) - *(float *)(pmVar6 + 8);
  fVar5 = ((*(float *)(param_2 + 8) - *(float *)(pmVar6 + 8)) * fVar4 +
          (*(float *)param_2 - *(float *)pmVar6) * fVar3) / (fVar3 * fVar3 + fVar4 * fVar4);
  if (((___real_00000000 < fVar5) && (fVar5 < ___real_3f800000)) &&
     (fVar3 = (fVar3 * fVar5 + *(float *)pmVar6) - *(float *)param_2,
     fVar4 = (fVar4 * fVar5 + *(float *)(pmVar6 + 8)) - *(float *)(param_2 + 8),
     fVar3 * fVar3 + fVar4 * fVar4 < fVar2)) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_misc.cpp
   addr: 00557290 */

int __fastcall m3xzIsIsectPolyCircle(m3dPOLY *param_1,m3dV *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float local_34;
  undefined **local_20;
  undefined4 local_1c;
  float local_18;
  float local_10;
  float local_c;
  float local_4;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  iVar3 = m3xzIsBelongPointPoly_A(param_1,param_2,DAT_005de5c8);
  if (iVar3 == 0) {
    m3dBOX::CalcXZ((m3dBOX *)&local_20,(m3dV *)(param_1 + 4),*(int *)param_1,0.0);
    fVar1 = (local_c + local_18) * ___real_3f000000;
    fVar2 = (local_4 + local_10) * ___real_3f000000;
    fVar7 = fVar1 - *(float *)param_2;
    fVar8 = fVar2 - *(float *)(param_2 + 8);
    local_34 = fVar7 * fVar7 + fVar8 * fVar8;
    uVar5 = extraout_MM1;
    if (m3dSimdType == 0) {
      local_34 = local_34 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar9 = rsqrtss(ZEXT416((uint)local_34),ZEXT416((uint)local_34));
      fVar7 = auVar9._0_4_;
      local_34 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_34 * fVar7 * fVar7) * local_34
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)local_34;
      uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      local_34 = (float)uVar5;
      FastExitMediaState();
    }
    else {
      local_34 = SQRT(local_34);
    }
    fVar7 = local_34;
    fVar1 = fVar1 - local_18;
    fVar2 = fVar2 - local_10;
    local_34 = fVar1 * fVar1 + fVar2 * fVar2;
    if (m3dSimdType == 0) {
      local_34 = local_34 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar9 = rsqrtss(ZEXT416((uint)local_34),ZEXT416((uint)local_34));
      fVar8 = auVar9._0_4_;
      local_34 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_34 * fVar8 * fVar8) * local_34
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)local_34;
      uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      local_34 = (float)uVar5;
      FastExitMediaState();
    }
    else {
      local_34 = SQRT(local_34);
    }
    if (local_34 + param_3 < fVar7) {
      return 0;
    }
    iVar3 = _m3xzIsIsectPolyCircle(param_1,param_2,param_3);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}




/* from: m3d:m3d_misc.cpp
   addr: 00557490 */

void __fastcall _m3xzDist2PointPoly(m3dV *param_1,m3dPOLY *param_2,m3dV *param_3,float *param_4)

{
  int iVar1;
  m3dV *pmVar2;
  float fVar3;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pmVar2 = (m3dV *)(param_2 + 4);
  local_1c = m3xzDistPointLSeg_2(param_1,(m3dV *)(param_2 + *(int *)param_2 * 0xc + -8),pmVar2,
                                 (m3dV *)&local_18);
  iVar1 = 0;
  if (*(int *)param_2 != 1 && -1 < *(int *)param_2 + -1) {
    do {
      fVar3 = m3xzDistPointLSeg_2(param_1,pmVar2,pmVar2 + 0xc,(m3dV *)&local_c);
      if (fVar3 < local_1c) {
        local_18 = local_c;
        local_14 = local_8;
        local_10 = local_4;
        local_1c = fVar3;
      }
      iVar1 = iVar1 + 1;
      pmVar2 = pmVar2 + 0xc;
    } while (iVar1 < *(int *)param_2 + -1);
  }
  if (param_4 != (float *)0x0) {
    *param_4 = local_1c;
  }
  if (param_3 != (m3dV *)0x0) {
    *(undefined4 *)param_3 = local_18;
    *(undefined4 *)(param_3 + 4) = local_14;
    *(undefined4 *)(param_3 + 8) = local_10;
  }
  return;
}

