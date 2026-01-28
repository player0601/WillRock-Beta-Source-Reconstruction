
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_line.cpp
   addr: 0055C5C0 */

int __fastcall
m2dIsectLSegLSeg(m2dV *param_1,m2dV *param_2,m2dV *param_3,m2dV *param_4,m2dV *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  m2dV local_8 [8];
  
  if (param_5 == (m2dV *)0x0) {
    param_5 = local_8;
  }
  fVar1 = *(float *)(param_4 + 4);
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = (*(float *)param_4 - *(float *)param_3) *
          (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) -
          (fVar1 - fVar2) * (*(float *)param_2 - *(float *)param_1);
  if ((((_DAT_005de624 <= fVar3) || (fVar3 <= -_DAT_005de624)) &&
      (fVar3 = ((*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) *
                (*(float *)param_2 - *(float *)param_1) -
               (*(float *)param_3 - *(float *)param_1) *
               (*(float *)(param_2 + 4) - *(float *)(param_1 + 4))) / fVar3, -_DAT_005de624 <= fVar3
      )) && (fVar3 <= _DAT_005de624 + ___real_3f800000)) {
    *(float *)param_5 = fVar3 * (*(float *)param_4 - *(float *)param_3) + *(float *)param_3;
    fVar1 = fVar3 * (fVar1 - fVar2) + *(float *)(param_3 + 4);
    *(float *)(param_5 + 4) = fVar1;
    fVar2 = *(float *)param_2;
    if (*(float *)param_1 < *(float *)param_2) {
      fVar2 = *(float *)param_1;
    }
    fVar3 = _DAT_005de624 * ___real_42c80000;
    if (fVar2 - fVar3 <= *(float *)param_5) {
      fVar2 = *(float *)param_2;
      if (*(float *)param_2 < *(float *)param_1) {
        fVar2 = *(float *)param_1;
      }
      if (*(float *)param_5 <= fVar3 + fVar2) {
        fVar2 = *(float *)(param_1 + 4);
        if (*(float *)(param_2 + 4) <= *(float *)(param_1 + 4)) {
          fVar2 = *(float *)(param_2 + 4);
        }
        if (fVar2 - fVar3 <= fVar1) {
          fVar2 = *(float *)(param_1 + 4);
          if (*(float *)(param_1 + 4) <= *(float *)(param_2 + 4)) {
            fVar2 = *(float *)(param_2 + 4);
          }
          if (fVar1 <= fVar3 + fVar2) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_line.cpp
   addr: 0055C790 */

float __fastcall m3xzDistPointLSeg_2(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  m3dV local_c [12];
  
  if (param_4 == (m3dV *)0x0) {
    param_4 = local_c;
  }
  fVar1 = *(float *)param_3 - *(float *)param_2;
  fVar2 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  fVar3 = fVar1 * fVar1 + fVar2 * fVar2;
  if (_DAT_005de624 * ___real_41200000 <= fVar3) {
    fVar3 = ((*(float *)param_1 - *(float *)param_2) * fVar1 +
            (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) * fVar2) / fVar3;
    if (___real_00000000 <= fVar3) {
      if (fVar3 <= ___real_3f800000) {
        *(float *)param_4 = fVar3 * fVar1 + *(float *)param_2;
        *(float *)(param_4 + 4) = fVar3 * ___real_00000000 + *(float *)(param_2 + 4);
        fVar1 = fVar3 * fVar2 + *(float *)(param_2 + 8);
        *(float *)(param_4 + 8) = fVar1;
        fVar1 = fVar1 - *(float *)(param_1 + 8);
        return (*(float *)param_4 - *(float *)param_1) * (*(float *)param_4 - *(float *)param_1) +
               fVar1 * fVar1;
      }
      *(float *)param_4 = *(float *)param_3;
      *(float *)(param_4 + 4) = *(float *)(param_3 + 4);
      *(float *)(param_4 + 8) = *(float *)(param_3 + 8);
      fVar2 = *(float *)param_3 - *(float *)param_1;
      fVar1 = *(float *)(param_3 + 8);
    }
    else {
      *(float *)param_4 = *(float *)param_2;
      *(float *)(param_4 + 4) = *(float *)(param_2 + 4);
      *(float *)(param_4 + 8) = *(float *)(param_2 + 8);
      fVar2 = *(float *)param_2 - *(float *)param_1;
      fVar1 = *(float *)(param_2 + 8);
    }
  }
  else {
    *(float *)param_4 = *(float *)param_2;
    *(float *)(param_4 + 4) = *(float *)(param_2 + 4);
    *(float *)(param_4 + 8) = *(float *)(param_2 + 8);
    fVar2 = *(float *)param_2 - *(float *)param_1;
    fVar1 = *(float *)(param_2 + 8);
  }
  return fVar2 * fVar2 + (fVar1 - *(float *)(param_1 + 8)) * (fVar1 - *(float *)(param_1 + 8));
}




/* from: m3d:m3d_line.cpp
   addr: 0055C900 */

float __fastcall m3dDistPointLine(m3dV *param_1,m3dV *param_2,m3dV *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 in_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_18;
  
  fVar8 = *(float *)param_3 - *(float *)param_2;
  fVar9 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  fVar3 = (*(float *)param_1 - *(float *)param_2) * fVar9 -
          (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) * fVar8;
  fVar7 = (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) * fVar1 -
          (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) * fVar9;
  fVar2 = (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) * fVar8 -
          (*(float *)param_1 - *(float *)param_2) * fVar1;
  local_18 = fVar3 * fVar3 + fVar7 * fVar7 + fVar2 * fVar2;
  if (m3dSimdType == 0) {
    local_18 = local_18 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar10 = rsqrtss(ZEXT416((uint)local_18),ZEXT416((uint)local_18));
    fVar7 = auVar10._0_4_;
    local_18 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_18 * fVar7 * fVar7) * local_18;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)local_18;
    uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    in_MM1 = PackedFloatingMUL(uVar5,uVar4);
    local_18 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_18 = SQRT(local_18);
  }
  fVar8 = fVar8 * fVar8 + fVar9 * fVar9 + fVar1 * fVar1;
  if (m3dSimdType != 0) {
    if (m3dSimdType != 1) {
      return local_18 / SQRT(fVar8);
    }
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar8;
    uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    FastExitMediaState();
    return local_18 / (float)uVar5;
  }
  fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
  auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
  fVar9 = auVar10._0_4_;
  return local_18 /
         (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
          (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_line.cpp
   addr: 0055CB00 */

int __fastcall
m3dDistPointLSeg(m3dV *param_1,m3dV *param_2,m3dV *param_3,float param_4,float *param_5,
                m3dV *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  m3dV *pmVar3;
  ulonglong uVar4;
  undefined8 in_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float local_24;
  
  pmVar3 = param_3;
  fVar9 = *(float *)param_3 - *(float *)param_2;
  fVar10 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  fVar7 = fVar10 * fVar10 + fVar1 * fVar1 + fVar9 * fVar9;
  if (m3dSimdType == 0) {
    fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar11 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar8 = auVar11._0_4_;
    param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar7;
    uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    in_MM1 = PackedFloatingMUL(uVar5,uVar4);
    param_3 = (m3dV *)in_MM1;
    FastExitMediaState();
  }
  else {
    param_3 = (m3dV *)SQRT(fVar7);
  }
  param_3 = (m3dV *)(uint)(ABS((float)param_3) < _DAT_005de624);
  if ((float)(int)param_3 == ___real_00000000) {
    fVar7 = fVar10 * fVar10 + fVar1 * fVar1 + fVar9 * fVar9;
    param_3 = (m3dV *)((___real_bf800000 / (fVar7 + fVar7)) *
                      ((*(float *)param_1 - *(float *)param_2) * fVar9 +
                      (*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) * fVar10 +
                      (*(float *)(param_1 + 8) - *(float *)(param_2 + 8)) * fVar1) *
                      ___real_c0000000);
    if (___real_00000000 <= (float)param_3) {
      if (___real_3f800000 < (float)param_3) {
        param_3 = (m3dV *)0x3f800000;
      }
    }
    else {
      param_3 = (m3dV *)0x0;
    }
    fVar9 = fVar9 * (float)param_3 + *(float *)param_2;
    fVar10 = fVar10 * (float)param_3 + *(float *)(param_2 + 4);
    fVar1 = fVar1 * (float)param_3 + *(float *)(param_2 + 8);
    fVar7 = fVar9 - *(float *)param_1;
    fVar2 = fVar10 - *(float *)(param_1 + 4);
    fVar8 = fVar1 - *(float *)(param_1 + 8);
    local_24 = fVar7 * fVar7 + fVar2 * fVar2 + fVar8 * fVar8;
    if (m3dSimdType == 0) {
      local_24 = local_24 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar11 = rsqrtss(ZEXT416((uint)local_24),ZEXT416((uint)local_24));
      fVar7 = auVar11._0_4_;
      local_24 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                 (`float___cdecl_m3dSqrt(float)'::__l2::three - local_24 * fVar7 * fVar7) * local_24
      ;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)local_24;
      uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      local_24 = (float)uVar5;
      FastExitMediaState();
    }
    else {
      local_24 = SQRT(local_24);
    }
    if (param_4 <= local_24) {
      return 0;
    }
    if (param_5 != (float *)0x0) {
      *param_5 = local_24;
    }
    if (param_6 != (m3dV *)0x0) {
      *(float *)param_6 = fVar9;
      *(float *)(param_6 + 4) = fVar10;
      *(float *)(param_6 + 8) = fVar1;
    }
    if (param_7 != (float *)0x0) {
      *param_7 = (float)param_3;
    }
  }
  else {
    fVar9 = *(float *)param_1 - *(float *)pmVar3;
    fVar9 = fVar9 * fVar9 +
            (*(float *)(param_1 + 4) - *(float *)(pmVar3 + 4)) *
            (*(float *)(param_1 + 4) - *(float *)(pmVar3 + 4)) +
            (*(float *)(param_1 + 8) - *(float *)(pmVar3 + 8)) *
            (*(float *)(param_1 + 8) - *(float *)(pmVar3 + 8));
    if (m3dSimdType == 0) {
      fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      param_3 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar10 *
                         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar10 * fVar10) *
                        fVar9);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)fVar9;
      uVar5 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      param_3 = (m3dV *)uVar5;
      FastExitMediaState();
    }
    else {
      param_3 = (m3dV *)SQRT(fVar9);
    }
    if (param_4 <= (float)param_3) {
      return 0;
    }
    if (param_5 != (float *)0x0) {
      *param_5 = (float)param_3;
    }
    if (param_6 != (m3dV *)0x0) {
      *(undefined4 *)param_6 = *(undefined4 *)param_2;
      *(undefined4 *)(param_6 + 4) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(param_6 + 8) = *(undefined4 *)(param_2 + 8);
    }
    if (param_7 != (float *)0x0) {
      *param_7 = 0.0;
      return 1;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_line.cpp
   addr: 0055CEF0 */

int __fastcall
m3dDistLSegLSeg(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4,float param_5,float *param_6
               ,m3dV *param_7,m3dV *param_8)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 in_MM1;
  undefined8 extraout_MM1;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  m3dV *local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  m3dV *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  local_24 = *(float *)param_2 - *(float *)param_1;
  local_20 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  local_1c = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  local_38 = local_24 * local_24;
  local_34 = local_1c * local_1c;
  local_2c = local_20 * local_20;
  local_40 = local_2c + local_34 + local_38;
  if (m3dSimdType == 0) {
    local_40 = local_40 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar16 = rsqrtss(ZEXT416((uint)local_40),ZEXT416((uint)local_40));
    fVar12 = auVar16._0_4_;
    local_40 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar12 *
               (`float___cdecl_m3dSqrt(float)'::__l2::three - local_40 * fVar12 * fVar12) * local_40
    ;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar9 = (ulonglong)(uint)local_40;
    uVar10 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar9);
    uVar11 = PackedFloatingMUL(uVar10,uVar10);
    uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
    uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
    in_MM1 = PackedFloatingMUL(uVar10,uVar9);
    local_40 = (float)in_MM1;
    FastExitMediaState();
  }
  else {
    local_40 = SQRT(local_40);
  }
  local_30 = ABS(local_40);
  local_28 = (m3dV *)(uint)(local_30 < _DAT_005de624);
  if ((float)(int)local_28 != ___real_00000000) {
    iVar8 = m3dDistPointLSeg(param_1,param_3,param_4,param_5,param_6,param_8,(float *)0x0);
    if (iVar8 == 0) {
      return 0;
    }
    if (param_7 == (m3dV *)0x0) {
      return 1;
    }
    *(undefined4 *)param_7 = *(undefined4 *)param_1;
    *(undefined4 *)(param_7 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_7 + 8) = *(undefined4 *)(param_1 + 8);
    return 1;
  }
  local_18 = *(float *)param_4 - *(float *)param_3;
  local_14 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  local_10 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
  local_30 = local_18 * local_18;
  local_28 = (m3dV *)(local_10 * local_10);
  fVar12 = local_14 * local_14 + (float)local_28 + local_30;
  if (m3dSimdType == 0) {
    fVar12 = fVar12 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar16 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar13 = auVar16._0_4_;
    param_4 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar13 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar12 * fVar13 * fVar13) *
                      fVar12);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar9 = (ulonglong)(uint)fVar12;
    uVar10 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar9);
    uVar11 = PackedFloatingMUL(uVar10,uVar10);
    uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
    uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
    uVar10 = PackedFloatingMUL(uVar10,uVar9);
    param_4 = (m3dV *)uVar10;
    FastExitMediaState();
  }
  else {
    param_4 = (m3dV *)SQRT(fVar12);
  }
  param_4 = (m3dV *)(uint)(ABS((float)param_4) < _DAT_005de624);
  if ((float)(int)param_4 != ___real_00000000) {
    iVar8 = m3dDistPointLSeg(param_3,param_1,param_2,param_5,param_6,param_7,(float *)0x0);
    if (iVar8 == 0) {
      return 0;
    }
    if (param_8 == (m3dV *)0x0) {
      return 1;
    }
    *(undefined4 *)param_8 = *(undefined4 *)param_3;
    *(undefined4 *)(param_8 + 4) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_8 + 8) = *(undefined4 *)(param_3 + 8);
    return 1;
  }
  fVar12 = *(float *)param_1 - *(float *)param_3;
  fVar3 = *(float *)(param_1 + 4) - *(float *)(param_3 + 4);
  fVar13 = *(float *)(param_1 + 8) - *(float *)(param_3 + 8);
  local_38 = local_2c + local_34 + local_38;
  local_30 = local_14 * local_14 + (float)local_28 + local_30;
  local_3c = (local_18 * local_24 + local_14 * local_20 + local_10 * local_1c) * ___real_c0000000;
  fVar4 = fVar12 * local_24 + fVar3 * local_20 + local_1c * fVar13;
  fVar4 = fVar4 + fVar4;
  local_40 = (fVar12 * local_18 + fVar3 * local_14 + local_10 * fVar13) * ___real_c0000000;
  local_34 = fVar12 * fVar12 + fVar3 * fVar3 + fVar13 * fVar13;
  local_2c = local_30 + local_30;
  param_4 = (m3dV *)(local_38 + local_38);
  iVar8 = m3dSolveLinSys2D((float)&local_48,(float)&local_44,(float)param_4,local_3c,local_3c,
                           local_2c,(float *)-fVar4,(float *)-local_40);
  if (iVar8 == 0) {
    local_48 = (m3dV *)(fVar4 / (float)param_4);
    local_44 = 0.0;
  }
  bVar1 = true;
  fVar12 = ___real_00000000;
  if (___real_00000000 <= (float)local_48) {
    if ((float)local_48 <= ___real_3f800000) {
      bVar1 = false;
      fVar12 = param_5;
      fVar13 = param_5;
    }
    else {
      local_28 = (m3dV *)0x3f800000;
      fVar13 = -((local_40 + local_3c) / local_2c);
      if ((___real_00000000 <= fVar13) && (fVar12 = fVar13, ___real_3f800000 < fVar13)) {
        fVar12 = ___real_3f800000;
      }
      fVar13 = (local_30 * fVar12 + local_40 + local_3c) * fVar12 + local_34 + fVar4 + local_38;
    }
  }
  else {
    local_28 = (m3dV *)0x0;
    fVar13 = -(local_40 / local_2c);
    if ((___real_00000000 <= fVar13) && (fVar12 = fVar13, ___real_3f800000 < fVar13)) {
      fVar12 = ___real_3f800000;
    }
    fVar13 = (local_30 * fVar12 + local_40) * fVar12 + local_34;
  }
  bVar2 = true;
  if (___real_00000000 <= local_44) {
    if (local_44 <= ___real_3f800000) {
      bVar2 = false;
      fVar3 = param_5;
    }
    else {
      local_2c = 1.0;
      param_4 = (m3dV *)-((fVar4 + local_3c) / (float)param_4);
      if (___real_00000000 <= (float)param_4) {
        if (___real_3f800000 < (float)param_4) {
          param_4 = (m3dV *)0x3f800000;
        }
      }
      else {
        param_4 = (m3dV *)0x0;
      }
      fVar3 = ((float)param_4 * local_38 + fVar4 + local_3c) * (float)param_4 + local_34 + local_40
              + local_30;
    }
  }
  else {
    local_2c = 0.0;
    param_4 = (m3dV *)-(fVar4 / (float)param_4);
    if (___real_00000000 <= (float)param_4) {
      if (___real_3f800000 < (float)param_4) {
        param_4 = (m3dV *)0x3f800000;
      }
    }
    else {
      param_4 = (m3dV *)0x0;
    }
    fVar3 = ((float)param_4 * local_38 + fVar4) * (float)param_4 + local_34;
  }
  if (bVar1) {
    local_44 = fVar12;
    if (!bVar2) {
      local_48 = local_28;
      goto LAB_0055d507;
    }
    if (fVar13 < fVar3) {
      local_48 = local_28;
      goto LAB_0055d507;
    }
  }
  else if (!bVar2) goto LAB_0055d507;
  local_44 = local_2c;
  local_48 = param_4;
LAB_0055d507:
  fVar12 = local_24 * (float)local_48 + *(float *)param_1;
  fVar13 = local_20 * (float)local_48 + *(float *)(param_1 + 4);
  fVar3 = local_1c * (float)local_48 + *(float *)(param_1 + 8);
  fVar4 = local_18 * local_44 + *(float *)param_3;
  fVar5 = local_14 * local_44 + *(float *)(param_3 + 4);
  fVar6 = local_10 * local_44 + *(float *)(param_3 + 8);
  fVar14 = fVar12 - fVar4;
  fVar7 = fVar13 - fVar5;
  fVar15 = fVar3 - fVar6;
  fVar14 = fVar14 * fVar14 + fVar7 * fVar7 + fVar15 * fVar15;
  if (m3dSimdType == 0) {
    fVar14 = fVar14 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar15 = auVar16._0_4_;
    param_4 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar15 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar14 * fVar15 * fVar15) *
                      fVar14);
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar9 = (ulonglong)(uint)fVar14;
    uVar10 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar9);
    uVar11 = PackedFloatingMUL(uVar10,uVar10);
    uVar11 = PackedFloatingReciprocalSQRIter1(uVar11,uVar9);
    uVar10 = PackedFloatingReciprocalIter2(uVar11,uVar10);
    uVar10 = PackedFloatingMUL(uVar10,uVar9);
    param_4 = (m3dV *)uVar10;
    FastExitMediaState();
  }
  else {
    param_4 = (m3dV *)SQRT(fVar14);
  }
  if ((float)param_4 < param_5) {
    if (param_6 != (float *)0x0) {
      *param_6 = (float)param_4;
    }
    if (param_7 != (m3dV *)0x0) {
      *(float *)param_7 = fVar12;
      *(float *)(param_7 + 4) = fVar13;
      *(float *)(param_7 + 8) = fVar3;
    }
    if (param_8 != (m3dV *)0x0) {
      *(float *)param_8 = fVar4;
      *(float *)(param_8 + 4) = fVar5;
      *(float *)(param_8 + 8) = fVar6;
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_line.cpp
   addr: 0055D690 */

int __fastcall m3dIsIsectYLinePlane(m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  float fVar1;
  m3dV *pmVar2;
  
  pmVar2 = param_3;
  param_3 = (m3dV *)(uint)(ABS(*(float *)(param_3 + 4)) < _DAT_005de624 * ___real_42c80000);
  if ((float)(int)param_3 != ___real_00000000) {
    return 0;
  }
  if (param_4 != (m3dV *)0x0) {
    fVar1 = ((*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) * *(float *)(pmVar2 + 4) +
            (*(float *)param_2 - *(float *)param_1) * *(float *)pmVar2 +
            (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) * *(float *)(pmVar2 + 8)) /
            *(float *)(pmVar2 + 4);
    *(float *)param_4 = _m3dVUnitY * fVar1 + *(float *)param_1;
    *(float *)(param_4 + 4) = DAT_005f9994 * fVar1 + *(float *)(param_1 + 4);
    *(float *)(param_4 + 8) = DAT_005f9998 * fVar1 + *(float *)(param_1 + 8);
  }
  return 1;
}

