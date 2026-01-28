
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_box.cpp
   addr: 005544B0 */

int __thiscall m3dBOX::IsBelongPoint(m3dBOX *this,m3dV *param_1)

{
  float fVar1;
  
  fVar1 = _DAT_005de5a8 * ___real_42c80000;
  if ((((*(float *)(this + 8) - fVar1 < *(float *)param_1) &&
       (*(float *)(this + 0xc) - fVar1 < *(float *)(param_1 + 4))) &&
      (*(float *)(this + 0x10) - fVar1 < *(float *)(param_1 + 8))) &&
     (((*(float *)param_1 < fVar1 + *(float *)(this + 0x14) &&
       (*(float *)(param_1 + 4) < fVar1 + *(float *)(this + 0x18))) &&
      (*(float *)(param_1 + 8) < fVar1 + *(float *)(this + 0x1c))))) {
    return 1;
  }
  return 0;
}




/* from: m3d:m3d_box.cpp
   addr: 00554540 */

int __thiscall
m3dBOX::IsIsectCyl(m3dBOX *this,m3dV *param_1,m3dV *param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  
  *(float *)(this + 8) = *(float *)(this + 8) - param_4;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) - param_4;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) - param_4;
  *(float *)(this + 0x14) = param_4 + *(float *)(this + 0x14);
  *(float *)(this + 0x18) = param_4 + *(float *)(this + 0x18);
  *(float *)(this + 0x1c) = param_4 + *(float *)(this + 0x1c);
  iVar2 = IsectRay(this,param_1,param_2,param_3,(m3dV *)0x0,(float *)0x0,(int *)0x0);
  fVar1 = -param_4;
  *(float *)(this + 8) = *(float *)(this + 8) - fVar1;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) - fVar1;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) - fVar1;
  *(float *)(this + 0x14) = fVar1 + *(float *)(this + 0x14);
  *(float *)(this + 0x18) = fVar1 + *(float *)(this + 0x18);
  *(float *)(this + 0x1c) = fVar1 + *(float *)(this + 0x1c);
  return (uint)(iVar2 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_box.cpp
   addr: 005545E0 */

int __thiscall
m3dBOX::IsectRay(m3dBOX *this,m3dV *param_1,m3dV *param_2,float param_3,m3dV *param_4,float *param_5
                ,int *param_6)

{
  int iVar1;
  m3dBOX *unaff_EBX;
  float fVar2;
  m3dV **ppmVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 extraout_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  m3dV *unaff_retaddr;
  m3dBOX *local_1c;
  float fStack_18;
  float fStack_14;
  m3dV amStack_10 [16];
  
  local_1c = this;
  iVar1 = (**(code **)(*(int *)this + 4))(param_1);
  if (iVar1 != 0) {
    return 2;
  }
  fVar2 = 0.0;
  ppmVar3 = &m3dBoxNorm;
  uVar4 = 0;
  do {
    if (*(float *)(param_1 + 4) * *(float *)((int)ppmVar3 + 4) +
        *(float *)param_1 * (float)*ppmVar3 + *(float *)((int)ppmVar3 + 8) * *(float *)(param_1 + 8)
        <= -_DAT_005de5a8) {
      if (uVar4 < 0x3d) {
                    /* WARNING: Could not recover jumptable at 0x0055464f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (*(code *)(&PTR_LAB_0055481c)[(int)fVar2])();
        return iVar1;
      }
      iVar1 = m3dIsectRayVNPlane(unaff_retaddr,param_1,amStack_10,(m3dV *)ppmVar3,(m3dV *)&local_1c,
                                 (float *)0x0);
      if (iVar1 != 0) {
        if ((float)param_2 * (float)param_2 <
            ((float)local_1c - *(float *)unaff_retaddr) *
            ((float)local_1c - *(float *)unaff_retaddr) +
            (fStack_18 - *(float *)(unaff_retaddr + 4)) *
            (fStack_18 - *(float *)(unaff_retaddr + 4)) +
            (fStack_14 - *(float *)(unaff_retaddr + 8)) *
            (fStack_14 - *(float *)(unaff_retaddr + 8))) {
          return 0;
        }
        iVar1 = IsBelongPointFace(unaff_EBX,(int)fVar2,(m3dV *)&local_1c);
        if (iVar1 != 0) {
          if (param_3 != 0.0) {
            *(m3dBOX **)param_3 = local_1c;
            *(float *)((int)param_3 + 4) = fStack_18;
            *(float *)((int)param_3 + 8) = fStack_14;
          }
          if (param_4 != (m3dV *)0x0) {
            fVar8 = ((float)local_1c - *(float *)unaff_retaddr) *
                    ((float)local_1c - *(float *)unaff_retaddr) +
                    (fStack_18 - *(float *)(unaff_retaddr + 4)) *
                    (fStack_18 - *(float *)(unaff_retaddr + 4)) +
                    (fStack_14 - *(float *)(unaff_retaddr + 8)) *
                    (fStack_14 - *(float *)(unaff_retaddr + 8));
            if (m3dSimdType == 0) {
              fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
              fVar9 = auVar10._0_4_;
              fVar8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
                      (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar5 = (ulonglong)(uint)fVar8;
              uVar6 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar5);
              uVar7 = PackedFloatingMUL(uVar6,uVar6);
              uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
              uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
              uVar6 = PackedFloatingMUL(uVar6,uVar5);
              fVar8 = (float)uVar6;
              FastExitMediaState();
            }
            else {
              fVar8 = SQRT(fVar8);
            }
            *(float *)param_4 = fVar8;
          }
          if (param_5 != (float *)0x0) {
            *param_5 = fVar2;
          }
          return 1;
        }
      }
    }
    ppmVar3 = (m3dV **)((int)ppmVar3 + 0xc);
    fVar2 = (float)((int)fVar2 + 1);
    uVar4 = uVar4 + 0xc;
    if (0x5f9a5f < (int)ppmVar3) {
      return 0;
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_box.cpp
   addr: 00554840 */

int __thiscall
m3dBOX::DistPoint(m3dBOX *this,m3dV *param_1,float param_2,m3dV *param_3,float *param_4,int *param_5
                 )

{
  int iVar1;
  m3dV *pmVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined4 uStack_c;
  float fStack_8;
  
  iVar1 = (**(code **)(*(int *)this + 4))(param_1);
  if (iVar1 != 0) {
    if (param_2 != 0.0) {
      *(undefined4 *)param_2 = *(undefined4 *)param_1;
      *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(param_1 + 8);
    }
    if (param_3 != (m3dV *)0x0) {
      *(undefined4 *)param_3 = 0;
    }
    return 2;
  }
  uVar4 = extraout_MM1;
  if (*(float *)param_1 <= *(float *)(this + 0x14)) {
    if (*(float *)(this + 8) <= *(float *)param_1) {
      if (*(float *)(param_1 + 8) <= *(float *)(this + 0x1c)) {
        if (*(float *)(this + 0x10) <= *(float *)(param_1 + 8)) {
          fVar6 = *(float *)param_1;
          fStack_8 = *(float *)(param_1 + 8);
          pmVar2 = param_1;
          fVar7 = ___real_00000000;
        }
        else {
          fStack_8 = *(float *)(this + 0x10);
          fVar6 = *(float *)param_1;
          pmVar2 = (m3dV *)0x0;
          fVar7 = *(float *)(this + 0x10) - *(float *)(param_1 + 8);
        }
      }
      else {
        fVar6 = *(float *)param_1;
        fStack_8 = *(float *)(this + 0x1c);
        pmVar2 = (m3dV *)&DAT_00000002;
        fVar7 = *(float *)(param_1 + 8) - *(float *)(this + 0x1c);
      }
    }
    else if (*(float *)(this + 0x10) <= *(float *)(param_1 + 8)) {
      if (*(float *)(param_1 + 8) <= *(float *)(this + 0x1c)) {
        fVar6 = *(float *)(this + 8);
        fStack_8 = *(float *)(param_1 + 8);
        pmVar2 = (m3dV *)0x3;
        fVar7 = *(float *)(this + 8) - *(float *)param_1;
      }
      else {
        fVar6 = *(float *)(this + 8);
        fStack_8 = *(float *)(this + 0x1c);
        fVar7 = (*(float *)param_1 - fVar6) * (*(float *)param_1 - fVar6) +
                (*(float *)(param_1 + 8) - fStack_8) * (*(float *)(param_1 + 8) - fStack_8);
        if (m3dSimdType == 0) {
          fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar8 = auVar9._0_4_;
          pmVar2 = (m3dV *)0x3;
          fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7;
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar3 = (ulonglong)(uint)fVar7;
          uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
          uVar5 = PackedFloatingMUL(uVar4,uVar4);
          uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
          uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
          uVar4 = PackedFloatingMUL(uVar4,uVar3);
          FastExitMediaState();
          pmVar2 = (m3dV *)0x3;
          fVar7 = (float)uVar4;
        }
        else {
          pmVar2 = (m3dV *)0x3;
          fVar7 = SQRT(fVar7);
        }
      }
    }
    else {
      fVar7 = (*(float *)param_1 - *(float *)(this + 8)) *
              (*(float *)param_1 - *(float *)(this + 8)) +
              (*(float *)(param_1 + 8) - *(float *)(this + 0x10)) *
              (*(float *)(param_1 + 8) - *(float *)(this + 0x10));
      if (m3dSimdType == 0) {
        fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar6 = auVar9._0_4_;
        fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar6 * fVar6) * fVar7;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)fVar7;
        uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        fVar7 = (float)uVar4;
        FastExitMediaState();
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      fVar6 = *(float *)(this + 8);
      fStack_8 = *(float *)(this + 0x10);
      pmVar2 = (m3dV *)0x3;
    }
  }
  else if (*(float *)(param_1 + 8) <= *(float *)(this + 0x1c)) {
    if (*(float *)(this + 0x10) <= *(float *)(param_1 + 8)) {
      fVar6 = *(float *)(this + 0x14);
      fStack_8 = *(float *)(param_1 + 8);
      pmVar2 = (m3dV *)0x1;
      fVar7 = *(float *)param_1 - *(float *)(this + 0x14);
    }
    else {
      fVar6 = *(float *)(this + 0x14);
      fStack_8 = *(float *)(this + 0x10);
      fVar7 = *(float *)param_1 - fVar6;
      fVar7 = fVar7 * fVar7 +
              (*(float *)(param_1 + 8) - fStack_8) * (*(float *)(param_1 + 8) - fStack_8);
      if (m3dSimdType == 0) {
        fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        pmVar2 = (m3dV *)0x1;
        fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)fVar7;
        uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        FastExitMediaState();
        pmVar2 = (m3dV *)0x1;
        fVar7 = (float)uVar4;
      }
      else {
        pmVar2 = (m3dV *)0x1;
        fVar7 = SQRT(fVar7);
      }
    }
  }
  else {
    fVar7 = (*(float *)param_1 - *(float *)(this + 0x14)) *
            (*(float *)param_1 - *(float *)(this + 0x14)) +
            (*(float *)(param_1 + 8) - *(float *)(this + 0x1c)) *
            (*(float *)(param_1 + 8) - *(float *)(this + 0x1c));
    if (m3dSimdType == 0) {
      fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar6 = auVar9._0_4_;
      fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar6 * fVar6) * fVar7;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar7;
      uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      fVar7 = (float)uVar4;
      FastExitMediaState();
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    fStack_8 = *(float *)(this + 0x1c);
    fVar6 = *(float *)(this + 0x14);
    pmVar2 = (m3dV *)0x1;
  }
  if (*(float *)(this + 0xc) <= *(float *)(param_1 + 4)) {
    if (*(float *)(param_1 + 4) <= *(float *)(this + 0x18)) {
      uStack_c = *(undefined4 *)(param_1 + 4);
    }
    else {
      if ((float)param_1 < *(float *)(param_1 + 4) - *(float *)(this + 0x18)) {
        return 0;
      }
      uStack_c = *(undefined4 *)(this + 0x18);
      pmVar2 = (m3dV *)0x5;
      fVar7 = fVar7 * fVar7 +
              (*(float *)(this + 0x18) - *(float *)(param_1 + 4)) *
              (*(float *)(this + 0x18) - *(float *)(param_1 + 4));
      if (m3dSimdType == 0) {
        fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar8 = auVar9._0_4_;
        fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar3 = (ulonglong)(uint)fVar7;
        uVar4 = PackedFloatingReciprocalSQRAprox(uVar4,uVar3);
        uVar5 = PackedFloatingMUL(uVar4,uVar4);
        uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
        uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
        uVar4 = PackedFloatingMUL(uVar4,uVar3);
        fVar7 = (float)uVar4;
        FastExitMediaState();
      }
      else {
        fVar7 = SQRT(fVar7);
      }
    }
  }
  else {
    fVar8 = *(float *)(this + 0xc) - *(float *)(param_1 + 4);
    if ((float)param_1 < fVar8) {
      return 0;
    }
    uStack_c = *(undefined4 *)(this + 0xc);
    pmVar2 = (m3dV *)0x4;
    fVar7 = fVar7 * fVar7 + fVar8 * fVar8;
    if (m3dSimdType == 0) {
      fVar7 = fVar7 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar7 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar7 * fVar8 * fVar8) * fVar7;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar7;
      uVar4 = PackedFloatingReciprocalSQRAprox(uVar4,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      uVar4 = PackedFloatingMUL(uVar4,uVar3);
      fVar7 = (float)uVar4;
      FastExitMediaState();
    }
    else {
      fVar7 = SQRT(fVar7);
    }
  }
  if (fVar7 <= (float)param_1) {
    if (param_2 != 0.0) {
      *(float *)param_2 = fVar6;
      *(undefined4 *)((int)param_2 + 4) = uStack_c;
      *(float *)((int)param_2 + 8) = fStack_8;
    }
    if (param_3 != (m3dV *)0x0) {
      *(float *)param_3 = fVar7;
    }
    if (param_4 != (float *)0x0) {
      *param_4 = (float)pmVar2;
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_box.cpp
   addr: 00554F00 */

void __thiscall m3dBOX::CalcStart(m3dBOX *this)

{
  float fVar1;
  
  fVar1 = _DAT_005de5ac;
  *(float *)(this + 8) = _DAT_005de5ac;
  *(float *)(this + 0xc) = fVar1;
  *(float *)(this + 0x10) = fVar1;
  fVar1 = -_DAT_005de5ac;
  *(float *)(this + 0x14) = fVar1;
  *(float *)(this + 0x18) = fVar1;
  *(float *)(this + 0x1c) = fVar1;
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 00554F40 */

void __thiscall m3dBOX::CalcUpdate(m3dBOX *this,m3dV *param_1)

{
  if (*(float *)param_1 < *(float *)(this + 8)) {
    *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  }
  if (*(float *)(param_1 + 4) < *(float *)(this + 0xc)) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  }
  if (*(float *)(param_1 + 8) < *(float *)(this + 0x10)) {
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  }
  if (*(float *)(this + 0x14) < *(float *)param_1) {
    *(undefined4 *)(this + 0x14) = *(undefined4 *)param_1;
  }
  if (*(float *)(this + 0x18) < *(float *)(param_1 + 4)) {
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 4);
  }
  if (*(float *)(this + 0x1c) < *(float *)(param_1 + 8)) {
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 8);
  }
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 00554FE0 */

void __thiscall m3dBOX::CalcUpdate(m3dBOX *this,m3dV *param_1,int param_2)

{
  m3dBOX *extraout_ECX;
  
  if (0 < param_2) {
    do {
      CalcUpdate(this,param_1);
      param_1 = param_1 + 0xc;
      param_2 = param_2 + -1;
      this = extraout_ECX;
    } while (param_2 != 0);
  }
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 00555000 */

void __thiscall m3dBOX::CalcUpdate(m3dBOX *this,m3dBOX *param_1)

{
  m3dBOX *this_00;
  
  CalcUpdate(this,(m3dV *)(param_1 + 8));
  CalcUpdate(this_00,(m3dV *)(param_1 + 0x14));
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 00555020 */

void __thiscall m3dBOX::Calc(m3dBOX *this,m3dV *param_1,int param_2,float param_3)

{
  m3dBOX *pmVar1;
  m3dBOX *pmVar2;
  m3dV *pmVar3;
  int iVar4;
  
  pmVar1 = this + 8;
  *(float *)pmVar1 = *(float *)param_1;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 8);
  pmVar2 = this + 0x14;
  *(float *)pmVar2 = *(float *)pmVar1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x10);
  if (1 < param_2) {
    iVar4 = param_2 + -1;
    do {
      pmVar3 = param_1 + 0xc;
      if (*(float *)pmVar2 < *(float *)pmVar3) {
        *(float *)pmVar2 = *(float *)pmVar3;
      }
      if (*(float *)(this + 0x18) < *(float *)(param_1 + 0x10)) {
        *(float *)(this + 0x18) = *(float *)(param_1 + 0x10);
      }
      if (*(float *)(this + 0x1c) < *(float *)(param_1 + 0x14)) {
        *(float *)(this + 0x1c) = *(float *)(param_1 + 0x14);
      }
      if (*(float *)pmVar3 < *(float *)pmVar1) {
        *(float *)pmVar1 = *(float *)pmVar3;
      }
      if (*(float *)(param_1 + 0x10) < *(float *)(this + 0xc)) {
        *(float *)(this + 0xc) = *(float *)(param_1 + 0x10);
      }
      if (*(float *)(param_1 + 0x14) < *(float *)(this + 0x10)) {
        *(float *)(this + 0x10) = *(float *)(param_1 + 0x14);
      }
      iVar4 = iVar4 + -1;
      param_1 = pmVar3;
    } while (iVar4 != 0);
  }
  if (ABS(*(float *)pmVar2 - *(float *)pmVar1) < param_3) {
    *(float *)pmVar2 = param_3 + *(float *)pmVar1;
  }
  if (ABS(*(float *)(this + 0x18) - *(float *)(this + 0xc)) < param_3) {
    *(float *)(this + 0x18) = param_3 + *(float *)(this + 0xc);
  }
  if (ABS(*(float *)(this + 0x1c) - *(float *)(this + 0x10)) < param_3) {
    *(float *)(this + 0x1c) = param_3 + *(float *)(this + 0x10);
  }
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 00555160 */

void __thiscall m3dBOX::CalcXZ(m3dBOX *this,m3dV *param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  m3dV *pmVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = uVar1;
  *(undefined4 *)(this + 0x1c) = uVar1;
  if (1 < param_2) {
    iVar3 = param_2 + -1;
    do {
      pmVar2 = param_1 + 0xc;
      if (*(float *)(this + 0x14) < *(float *)pmVar2) {
        *(float *)(this + 0x14) = *(float *)pmVar2;
      }
      if (*(float *)(this + 0x1c) < *(float *)(param_1 + 0x14)) {
        *(float *)(this + 0x1c) = *(float *)(param_1 + 0x14);
      }
      if (*(float *)pmVar2 < *(float *)(this + 8)) {
        *(float *)(this + 8) = *(float *)pmVar2;
      }
      if (*(float *)(param_1 + 0x14) < *(float *)(this + 0x10)) {
        *(float *)(this + 0x10) = *(float *)(param_1 + 0x14);
      }
      iVar3 = iVar3 + -1;
      param_1 = pmVar2;
    } while (iVar3 != 0);
  }
  if (ABS(*(float *)(this + 0x14) - *(float *)(this + 8)) < param_3) {
    *(float *)(this + 0x14) = param_3 + *(float *)(this + 8);
  }
  if (ABS(*(float *)(this + 0x1c) - *(float *)(this + 0x10)) < param_3) {
    *(float *)(this + 0x1c) = param_3 + *(float *)(this + 0x10);
  }
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 00555230 */

void __thiscall m3dBOX::MakePointPoint(m3dBOX *this,m3dV *param_1,m3dV *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)param_2;
  if (*(float *)param_1 < *(float *)param_2) {
    fVar1 = *(float *)param_1;
  }
  *(float *)(this + 8) = fVar1;
  fVar1 = *(float *)(param_2 + 4);
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    fVar1 = *(float *)(param_1 + 4);
  }
  *(float *)(this + 0xc) = fVar1;
  fVar1 = *(float *)(param_2 + 8);
  if (*(float *)(param_1 + 8) < *(float *)(param_2 + 8)) {
    fVar1 = *(float *)(param_1 + 8);
  }
  *(float *)(this + 0x10) = fVar1;
  fVar1 = *(float *)param_2;
  if (*(float *)param_2 < *(float *)param_1) {
    fVar1 = *(float *)param_1;
  }
  *(float *)(this + 0x14) = fVar1;
  fVar1 = *(float *)(param_2 + 4);
  if (*(float *)(param_2 + 4) < *(float *)(param_1 + 4)) {
    fVar1 = *(float *)(param_1 + 4);
  }
  *(float *)(this + 0x18) = fVar1;
  if (*(float *)(param_2 + 8) < *(float *)(param_1 + 8)) {
    *(float *)(this + 0x1c) = *(float *)(param_1 + 8);
    return;
  }
  *(float *)(this + 0x1c) = *(float *)(param_2 + 8);
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 005552F0 */

void __thiscall m3dBOX::GetVertices(m3dBOX *this,m3dV *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(this + 0x1c);
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 00555390 */

void __thiscall m3dBOX::GetEdgePoints(m3dBOX *this,int param_1,m3dV *param_2,m3dV *param_3)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x10);
    return;
  case 1:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x10);
    return;
  case 2:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x10);
    return;
  case 3:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x10);
    return;
  case 4:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x1c);
    return;
  case 5:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x1c);
    uVar1 = *(undefined4 *)(this + 0x14);
    break;
  case 6:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x18);
    uVar1 = *(undefined4 *)(this + 0x1c);
    goto LAB_0055556c;
  case 7:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x1c);
    return;
  case 8:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x1c);
    return;
  case 9:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)param_3 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x1c);
    return;
  case 10:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x10);
    uVar1 = *(undefined4 *)(this + 0x14);
    break;
  case 0xb:
    *(undefined4 *)param_2 = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x18);
    uVar1 = *(undefined4 *)(this + 0x10);
LAB_0055556c:
    *(undefined4 *)(param_2 + 8) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    break;
  default:
    goto switchD_0055539d_default;
  }
  *(undefined4 *)param_3 = uVar1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 0x1c);
switchD_0055539d_default:
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 005555C0 */

void __thiscall m3dBOX::GetFace(m3dBOX *this,int param_1,m3dPOLY *param_2,m3dV *param_3)

{
  m3dBOX *pmVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0) || (5 < param_1)) {
    param_1 = 0;
  }
  if (param_3 != (m3dV *)0x0) {
    *(m3dV **)param_3 = (&m3dBoxNorm)[param_1 * 3];
    *(undefined4 *)(param_3 + 4) = (&DAT_005f9a1c)[param_1 * 3];
    *(undefined4 *)(param_3 + 8) = (&DAT_005f9a20)[param_1 * 3];
  }
  if (param_2 == (m3dPOLY *)0x0) {
    return;
  }
  switch(param_1) {
  case 0:
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + 0x14);
    uVar2 = *(undefined4 *)(this + 0xc);
    goto LAB_005557e3;
  case 1:
    pmVar1 = this + 0x14;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pmVar1;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)pmVar1;
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)pmVar1;
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)param_2 = 4;
    return;
  case 2:
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)param_2 = 4;
    return;
  case 3:
    pmVar1 = this + 8;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)pmVar1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)pmVar1;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)pmVar1;
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(this + 0x1c);
    break;
  case 4:
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0xc);
    uVar2 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)param_2 = 4;
    *(undefined4 *)(param_2 + 0x30) = uVar2;
    return;
  case 5:
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(this + 8);
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(this + 0x1c);
    pmVar1 = this + 0x14;
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)pmVar1;
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(this + 0x1c);
    break;
  default:
    goto switchD_00555609_default;
  }
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)pmVar1;
  uVar2 = *(undefined4 *)(this + 0x18);
LAB_005557e3:
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x10);
switchD_00555609_default:
  *(undefined4 *)param_2 = 4;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_box.cpp
   addr: 00555810 */

int __thiscall m3dBOX::Check(m3dBOX *this)

{
  if (((_DAT_005de5a8 + *(float *)(this + 0x14) <= *(float *)(this + 8)) &&
      (_DAT_005de5a8 + *(float *)(this + 0x18) <= *(float *)(this + 0xc))) &&
     (_DAT_005de5a8 + *(float *)(this + 0x1c) <= *(float *)(this + 0x10))) {
    return 0;
  }
  return 1;
}




/* from: m3d:m3d_box.cpp
   addr: 00555860 */

void __thiscall m3dBOX::CalcEnclSph(m3dBOX *this,m3dSPHERE *param_1)

{
  ulonglong uVar1;
  undefined8 extraout_MM1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  (**(code **)(*(int *)this + 0x24))(param_1 + 8);
  fVar4 = *(float *)(this + 8) - *(float *)(param_1 + 8);
  fVar4 = fVar4 * fVar4 +
          (*(float *)(this + 0xc) - *(float *)(param_1 + 0xc)) *
          (*(float *)(this + 0xc) - *(float *)(param_1 + 0xc)) +
          (*(float *)(this + 0x10) - *(float *)(param_1 + 0x10)) *
          (*(float *)(this + 0x10) - *(float *)(param_1 + 0x10));
  if (m3dSimdType == 0) {
    fVar4 = fVar4 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    *(float *)(param_1 + 0x14) =
         `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar4 * fVar5 * fVar5) * fVar4;
    return;
  }
  if (m3dSimdType != 1) {
    *(float *)(param_1 + 0x14) = SQRT(fVar4);
    return;
  }
  FastExitMediaState();
  uVar1 = (ulonglong)(uint)fVar4;
  uVar2 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar1);
  uVar3 = PackedFloatingMUL(uVar2,uVar2);
  uVar3 = PackedFloatingReciprocalSQRIter1(uVar3,uVar1);
  uVar2 = PackedFloatingReciprocalIter2(uVar3,uVar2);
  uVar2 = PackedFloatingMUL(uVar2,uVar1);
  FastExitMediaState();
  *(int *)(param_1 + 0x14) = (int)uVar2;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_box.cpp
   addr: 00555950 */

int __thiscall m3dBOX::CheckEnclSph(m3dBOX *this,m3dSPHERE *param_1)

{
  int iVar1;
  int iVar2;
  m3dV *pmVar3;
  undefined **local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  m3dV local_60 [96];
  
  local_78 = &m3dSPHERE::_vftable_;
  local_74 = *(undefined4 *)(param_1 + 4);
  local_70 = *(undefined4 *)(param_1 + 8);
  local_64 = _DAT_005de5a8 * ___real_42c80000 + *(float *)(param_1 + 0x14);
  local_6c = *(undefined4 *)(param_1 + 0xc);
  local_68 = *(undefined4 *)(param_1 + 0x10);
  GetVertices(this,local_60);
  iVar2 = 0;
  pmVar3 = local_60;
  do {
    iVar1 = m3dSPHERE::IsBelongPoint((m3dSPHERE *)&local_78,pmVar3);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = iVar2 + 1;
    pmVar3 = pmVar3 + 0xc;
  } while (iVar2 < 8);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_box.cpp
   addr: 005559E0 */

int __thiscall m3dBOX::IsBelongPointFace(m3dBOX *this,int param_1,m3dV *param_2)

{
  ushort uVar1;
  
  switch(param_1) {
  case 0:
  case 2:
    if (*(float *)param_2 <= *(float *)(this + 8) - _DAT_005de5a8) {
      return 0;
    }
    if (*(float *)(param_2 + 4) <= *(float *)(this + 0xc) - _DAT_005de5a8) {
      return 0;
    }
    if (_DAT_005de5a8 + *(float *)(this + 0x14) <= *(float *)param_2) {
      return 0;
    }
    uVar1 = (ushort)(_DAT_005de5a8 + *(float *)(this + 0x18) < *(float *)(param_2 + 4)) << 8 |
            (ushort)(_DAT_005de5a8 + *(float *)(this + 0x18) == *(float *)(param_2 + 4)) << 0xe;
    goto LAB_00555acf;
  case 1:
  case 3:
    if (*(float *)(param_2 + 4) <= *(float *)(this + 0xc) - _DAT_005de5a8) {
      return 0;
    }
    if (*(float *)(param_2 + 8) <= *(float *)(this + 0x10) - _DAT_005de5a8) {
      return 0;
    }
    uVar1 = (ushort)(_DAT_005de5a8 + *(float *)(this + 0x18) < *(float *)(param_2 + 4)) << 8 |
            (ushort)(_DAT_005de5a8 + *(float *)(this + 0x18) == *(float *)(param_2 + 4)) << 0xe;
    break;
  case 4:
  case 5:
    if (*(float *)param_2 <= *(float *)(this + 8) - _DAT_005de5a8) {
      return 0;
    }
    if (*(float *)(param_2 + 8) <= *(float *)(this + 0x10) - _DAT_005de5a8) {
      return 0;
    }
    uVar1 = (ushort)(_DAT_005de5a8 + *(float *)(this + 0x14) < *(float *)param_2) << 8 |
            (ushort)(_DAT_005de5a8 + *(float *)(this + 0x14) == *(float *)param_2) << 0xe;
    break;
  default:
    goto switchD_005559ed_default;
  }
  if (uVar1 == 0) {
    uVar1 = (ushort)(_DAT_005de5a8 + *(float *)(this + 0x1c) < *(float *)(param_2 + 8)) << 8 |
            (ushort)(_DAT_005de5a8 + *(float *)(this + 0x1c) == *(float *)(param_2 + 8)) << 0xe;
LAB_00555acf:
    if (uVar1 == 0) {
      return 1;
    }
  }
switchD_005559ed_default:
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_box.cpp
   addr: 00555B00 */

void __thiscall m3dBOX::GetCenter(m3dBOX *this,m3dV *param_1)

{
  *(float *)param_1 = (*(float *)(this + 0x14) + *(float *)(this + 8)) * ___real_3f000000;
  *(float *)(param_1 + 4) = (*(float *)(this + 0x18) + *(float *)(this + 0xc)) * ___real_3f000000;
  *(float *)(param_1 + 8) = (*(float *)(this + 0x1c) + *(float *)(this + 0x10)) * ___real_3f000000;
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 00555B40 */

float __thiscall m3dBOX::GetArea(m3dBOX *this)

{
  float fVar1;
  
  fVar1 = (*(float *)(this + 0x1c) - *(float *)(this + 0x10)) *
          (*(float *)(this + 0x14) - *(float *)(this + 8)) +
          ((*(float *)(this + 0x1c) - *(float *)(this + 0x10)) +
          (*(float *)(this + 0x14) - *(float *)(this + 8))) *
          (*(float *)(this + 0x18) - *(float *)(this + 0xc));
  return fVar1 + fVar1;
}




/* from: m3d:m3d_box.cpp
   addr: 00555B70 */

int __thiscall m3dBOX::IsIsectBox(m3dBOX *this,m3dBOX *param_1)

{
  m3dBOX *pmVar1;
  int iVar2;
  m3dBOX *pmVar3;
  
  iVar2 = 0;
  pmVar3 = param_1 + 0x14;
  pmVar1 = this + 8;
  while ((*(float *)(pmVar1 + ((int)param_1 - (int)this)) <= *(float *)(pmVar1 + 0xc) &&
         (*(float *)pmVar1 <= *(float *)pmVar3))) {
    iVar2 = iVar2 + 1;
    pmVar1 = pmVar1 + 4;
    pmVar3 = pmVar3 + 4;
    if (2 < iVar2) {
      return 0;
    }
  }
  return 1;
}




/* from: m3d:m3d_box.cpp
   addr: 00555BC0 */

int __thiscall m3dBOX::IsIsectPoly(m3dBOX *this,m3dPOLY *param_1,m3dV *param_2)

{
  int iVar1;
  m3dPOLY *pmVar2;
  m3dPOLY *pmVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float local_424;
  float local_420;
  float local_41c;
  undefined **local_418;
  undefined4 local_414;
  undefined4 local_410;
  float local_40c;
  undefined4 local_408;
  undefined4 local_404;
  float local_400;
  undefined4 local_3fc;
  m3dV local_3f8 [4];
  float local_3f4;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  m3dV local_3e0 [12];
  int local_3d4;
  m3dPOLY local_3d0 [4];
  undefined4 local_3cc;
  m3dPOLY local_3c8 [232];
  int local_2e0;
  undefined4 auStack_2dc [40];
  m2dPOLY local_23c [164];
  m2dPOLY local_198 [164];
  m3dPOLY local_f4 [244];
  
  local_414 = 1;
  local_418 = &_vftable_;
  if (param_2 == (m3dV *)0x0) {
    m3dGetPolyNormal(param_1,local_3e0);
    param_2 = local_3e0;
  }
  if ((ABS(*(float *)param_2) < ABS(*(float *)(param_2 + 4))) ||
     (ABS(*(float *)param_2) < ABS(*(float *)(param_2 + 8)))) {
    if ((ABS(*(float *)(param_2 + 4)) < ABS(*(float *)param_2)) ||
       (ABS(*(float *)(param_2 + 4)) < ABS(*(float *)(param_2 + 8)))) {
      if (ABS(*(float *)(param_2 + 8)) < ABS(*(float *)param_2)) {
        return 0;
      }
      if (ABS(*(float *)(param_2 + 8)) < ABS(*(float *)(param_2 + 4))) {
        return 0;
      }
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    local_410 = *(undefined4 *)(this + 0x10);
    local_40c = *(float *)(this + 8);
    local_408 = *(undefined4 *)(this + 0xc);
    local_404 = *(undefined4 *)(this + 0x1c);
    local_400 = *(float *)(this + 0x14);
    local_3fc = *(undefined4 *)(this + 0x18);
    iVar1 = 0;
    local_3d4 = *(int *)param_1;
    if (0 < *(int *)param_1) {
      pmVar2 = local_3c8;
      pmVar3 = param_1 + 4;
      do {
        iVar1 = iVar1 + 1;
        *(undefined4 *)(pmVar3 + ((int)&local_3d4 - (int)param_1)) = *(undefined4 *)(pmVar3 + 8);
        *(undefined4 *)(pmVar2 + -4) = *(undefined4 *)pmVar3;
        *(undefined4 *)pmVar2 = *(undefined4 *)(pmVar3 + 4);
        pmVar3 = pmVar3 + 0xc;
        pmVar2 = pmVar2 + 0xc;
      } while (iVar1 < local_3d4);
    }
    local_424 = *(float *)(param_2 + 8);
    local_420 = *(float *)param_2;
    local_41c = *(float *)(param_2 + 4);
  }
  else if (iVar1 == 1) {
    local_414 = *(undefined4 *)(this + 4);
    local_410 = *(undefined4 *)(this + 8);
    local_40c = *(float *)(this + 0xc);
    local_404 = *(undefined4 *)(this + 0x14);
    local_408 = *(undefined4 *)(this + 0x10);
    local_400 = *(float *)(this + 0x18);
    local_3fc = *(undefined4 *)(this + 0x1c);
    local_3d4 = *(int *)param_1;
    pmVar3 = local_3d0;
    for (uVar5 = *(int *)param_1 * 3 & 0x3fffffff; param_1 = param_1 + 4, uVar5 != 0;
        uVar5 = uVar5 - 1) {
      *(undefined4 *)pmVar3 = *(undefined4 *)param_1;
      pmVar3 = pmVar3 + 4;
    }
    local_420 = *(float *)(param_2 + 4);
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pmVar3 = *param_1;
      param_1 = param_1 + 1;
      pmVar3 = pmVar3 + 1;
    }
    local_424 = *(float *)param_2;
    local_41c = *(float *)(param_2 + 8);
  }
  else if (iVar1 == 2) {
    local_40c = *(float *)(this + 0x10);
    local_410 = *(undefined4 *)(this + 0xc);
    local_404 = *(undefined4 *)(this + 0x18);
    local_408 = *(undefined4 *)(this + 8);
    local_3fc = *(undefined4 *)(this + 0x14);
    local_400 = *(float *)(this + 0x1c);
    iVar1 = 0;
    local_3d4 = *(int *)param_1;
    if (0 < *(int *)param_1) {
      puVar4 = &local_3cc;
      pmVar3 = param_1;
      do {
        pmVar2 = pmVar3 + 0xc;
        iVar1 = iVar1 + 1;
        puVar4[-1] = *(undefined4 *)(pmVar3 + 8);
        *puVar4 = *(undefined4 *)pmVar2;
        *(undefined4 *)(pmVar2 + ((int)&local_3d4 - (int)param_1)) = *(undefined4 *)(pmVar3 + 4);
        puVar4 = puVar4 + 3;
        pmVar3 = pmVar2;
      } while (iVar1 < local_3d4);
    }
    local_424 = *(float *)(param_2 + 4);
    local_420 = *(float *)(param_2 + 8);
    local_41c = *(float *)param_2;
  }
  GetFace((m3dBOX *)&local_418,4,local_f4,(m3dV *)0x0);
  m3xzPoly3DToPoly2D(local_f4,local_198);
  m3xzPoly3DToPoly2D((m3dPOLY *)&local_3d4,local_23c);
  iVar1 = m2dClipPolyRect(local_23c,local_198,(m2dPOLY *)&local_2e0);
  if (iVar1 == 1) {
    return 1;
  }
  iVar9 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar8 = 0;
  if (0 < local_2e0) {
    do {
      local_3ec = auStack_2dc[iVar8 * 2];
      local_3e4 = auStack_2dc[iVar8 * 2 + 1];
      local_3e8 = 0;
      m3dIsIsectYLinePlane((m3dV *)&local_3ec,(m3dV *)local_3d0,(m3dV *)&local_424,local_3f8);
      if ((local_40c <= local_3f4) && (local_3f4 < local_400 != (local_3f4 == local_400))) {
        iVar9 = iVar9 + 1;
      }
      if (local_400 < local_3f4) {
        iVar7 = iVar7 + 1;
      }
      if (local_3f4 < local_40c) {
        iVar6 = iVar6 + 1;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_2e0);
    if ((iVar6 != 0) || (iVar9 != 0)) {
      if (iVar7 == 0) {
        if (iVar9 == 0) {
          return 1;
        }
        if ((iVar6 == 0) && (iVar1 == -1)) {
          return -1;
        }
      }
      return 0;
    }
  }
  return 1;
}




/* from: m3d:m3d_box.cpp
   addr: 00556010 */

void __thiscall m3dBOX::Expand(m3dBOX *this,float param_1)

{
  *(float *)(this + 8) = *(float *)(this + 8) - param_1;
  *(float *)(this + 0xc) = *(float *)(this + 0xc) - param_1;
  *(float *)(this + 0x10) = *(float *)(this + 0x10) - param_1;
  *(float *)(this + 0x14) = param_1 + *(float *)(this + 0x14);
  *(float *)(this + 0x18) = param_1 + *(float *)(this + 0x18);
  *(float *)(this + 0x1c) = param_1 + *(float *)(this + 0x1c);
  return;
}




/* from: m3d:m3d_box.cpp
   addr: 00556050 */

int __thiscall
m3dBOX::ClipLSeg(m3dBOX *this,m3dV *param_1,m3dV *param_2,m3dV *param_3,m3dV *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar3 = *(float *)(this + 0xc);
  fVar4 = *(float *)(this + 8);
  local_c = *(float *)(this + 0x14);
  fVar5 = *(float *)(this + 0x10);
  local_8 = *(float *)(this + 0x18);
  local_4 = *(float *)(this + 0x1c);
  local_18 = fVar4;
  if (local_c < fVar4) {
    local_18 = local_c;
    local_c = fVar4;
  }
  local_14 = fVar3;
  if (local_8 < fVar3) {
    local_14 = local_8;
    local_8 = fVar3;
  }
  local_10 = fVar5;
  if (local_4 < fVar5) {
    local_10 = local_4;
    local_4 = fVar5;
  }
  *(undefined4 *)param_3 = *(undefined4 *)param_1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)param_4 = *(undefined4 *)param_2;
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_2 + 8);
  param_1 = (m3dV *)(uint)(*(float *)param_3 < local_18);
  if (*(float *)(param_3 + 4) < local_14) {
    param_1 = (m3dV *)((uint)param_1 | 2);
  }
  if (*(float *)(param_3 + 8) < local_10) {
    param_1 = (m3dV *)((uint)param_1 | 4);
  }
  if (local_c < *(float *)param_3) {
    param_1 = (m3dV *)((uint)param_1 | 8);
  }
  if (local_8 < *(float *)(param_3 + 4)) {
    param_1 = (m3dV *)((uint)param_1 | 0x10);
  }
  if (local_4 < *(float *)(param_3 + 8)) {
    param_1 = (m3dV *)((uint)param_1 | 0x20);
  }
  uVar6 = (uint)(*(float *)param_4 < local_18);
  if (*(float *)(param_4 + 4) < local_14) {
    uVar6 = uVar6 | 2;
  }
  if (*(float *)(param_4 + 8) < local_10) {
    uVar6 = uVar6 | 4;
  }
  if (local_c < *(float *)param_4) {
    uVar6 = uVar6 | 8;
  }
  if (local_8 < *(float *)(param_4 + 4)) {
    uVar6 = uVar6 | 0x10;
  }
  if (local_4 < *(float *)(param_4 + 8)) {
    uVar6 = uVar6 | 0x20;
  }
  if (uVar6 != 0 || param_1 != (m3dV *)0x0) {
    do {
      if (((uint)param_1 & uVar6) != 0) {
        return 0;
      }
      if (((uint)param_1 & 1) != 0) {
        *(float *)(param_3 + 8) =
             ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) * (local_18 - *(float *)param_3))
             / (*(float *)param_4 - *(float *)param_3) + *(float *)(param_3 + 8);
        fVar3 = (*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) * (local_18 - *(float *)param_3)
        ;
        fVar4 = *(float *)param_4 - *(float *)param_3;
        *(float *)param_3 = local_18;
        goto LAB_00556354;
      }
      if (((uint)param_1 & 2) != 0) {
        fVar3 = *(float *)(param_3 + 4);
        *(float *)(param_3 + 8) =
             ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) * (local_14 - fVar3)) /
             (*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) + *(float *)(param_3 + 8);
        fVar4 = *(float *)param_4;
        fVar5 = *(float *)(param_4 + 4);
        fVar1 = *(float *)(param_3 + 4);
        *(float *)(param_3 + 4) = local_14;
        *(float *)param_3 =
             ((fVar4 - *(float *)param_3) * (local_14 - fVar3)) / (fVar5 - fVar1) +
             *(float *)param_3;
        goto LAB_0055635e;
      }
      if (((uint)param_1 & 4) == 0) {
        if (((uint)param_1 & 8) != 0) {
          *(float *)(param_3 + 8) =
               ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) * (local_c - *(float *)param_3))
               / (*(float *)param_4 - *(float *)param_3) + *(float *)(param_3 + 8);
          fVar3 = (*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) *
                  (local_c - *(float *)param_3);
          fVar4 = *(float *)param_4 - *(float *)param_3;
          *(float *)param_3 = local_c;
          goto LAB_00556354;
        }
        if (((uint)param_1 & 0x10) == 0) {
          if (((uint)param_1 & 0x20) != 0) {
            *(float *)param_3 =
                 ((*(float *)param_4 - *(float *)param_3) * (local_4 - *(float *)(param_3 + 8))) /
                 (*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) + *(float *)param_3;
            fVar3 = (*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) *
                    (local_4 - *(float *)(param_3 + 8));
            fVar4 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
            *(float *)(param_3 + 8) = local_4;
            goto LAB_00556354;
          }
        }
        else {
          fVar3 = *(float *)(param_3 + 4);
          *(float *)(param_3 + 8) =
               ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) * (local_8 - fVar3)) /
               (*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) + *(float *)(param_3 + 8);
          fVar4 = *(float *)param_4;
          fVar5 = *(float *)(param_4 + 4);
          fVar1 = *(float *)(param_3 + 4);
          *(float *)(param_3 + 4) = local_8;
          *(float *)param_3 =
               ((fVar4 - *(float *)param_3) * (local_8 - fVar3)) / (fVar5 - fVar1) +
               *(float *)param_3;
        }
      }
      else {
        *(float *)param_3 =
             ((*(float *)param_4 - *(float *)param_3) * (local_10 - *(float *)(param_3 + 8))) /
             (*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) + *(float *)param_3;
        fVar3 = (*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) *
                (local_10 - *(float *)(param_3 + 8));
        fVar4 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
        *(float *)(param_3 + 8) = local_10;
LAB_00556354:
        *(float *)(param_3 + 4) = fVar3 / fVar4 + *(float *)(param_3 + 4);
      }
LAB_0055635e:
      param_1 = (m3dV *)(uint)(*(float *)param_3 < local_18);
      if (*(float *)(param_3 + 4) < local_14) {
        param_1 = (m3dV *)((uint)param_1 | 2);
      }
      if (*(float *)(param_3 + 8) < local_10) {
        param_1 = (m3dV *)((uint)param_1 | 4);
      }
      if (local_c < *(float *)param_3) {
        param_1 = (m3dV *)((uint)param_1 | 8);
      }
      if (local_8 < *(float *)(param_3 + 4)) {
        param_1 = (m3dV *)((uint)param_1 | 0x10);
      }
      if (local_4 < *(float *)(param_3 + 8)) {
        param_1 = (m3dV *)((uint)param_1 | 0x20);
      }
      if ((uVar6 & (uint)param_1) != 0) {
        return 0;
      }
      if ((uVar6 & 1) != 0) {
        *(float *)(param_4 + 8) =
             ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) * (local_18 - *(float *)param_3))
             / (*(float *)param_4 - *(float *)param_3) + *(float *)(param_3 + 8);
        fVar3 = ((*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) *
                (local_18 - *(float *)param_3)) / (*(float *)param_4 - *(float *)param_3) +
                *(float *)(param_3 + 4);
        *(float *)param_4 = local_18;
        goto LAB_00556568;
      }
      if ((uVar6 & 2) != 0) {
        *(float *)(param_4 + 8) =
             ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) *
             (local_14 - *(float *)(param_3 + 4))) /
             (*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) + *(float *)(param_3 + 8);
        fVar3 = *(float *)(param_3 + 4);
        fVar4 = *(float *)param_3;
        fVar5 = *(float *)(param_4 + 4);
        fVar1 = *(float *)(param_3 + 4);
        fVar2 = *(float *)param_3;
        *(float *)(param_4 + 4) = local_14;
        *(float *)param_4 =
             ((*(float *)param_4 - fVar4) * (local_14 - fVar3)) / (fVar5 - fVar1) + fVar2;
        goto LAB_0055656b;
      }
      if ((uVar6 & 4) == 0) {
        if ((uVar6 & 8) != 0) {
          *(float *)(param_4 + 8) =
               ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) * (local_c - *(float *)param_3))
               / (*(float *)param_4 - *(float *)param_3) + *(float *)(param_3 + 8);
          fVar3 = ((*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) *
                  (local_c - *(float *)param_3)) / (*(float *)param_4 - *(float *)param_3) +
                  *(float *)(param_3 + 4);
          *(float *)param_4 = local_c;
          goto LAB_00556568;
        }
        if ((uVar6 & 0x10) == 0) {
          if ((uVar6 & 0x20) != 0) {
            *(float *)param_4 =
                 ((*(float *)param_4 - *(float *)param_3) * (local_4 - *(float *)(param_3 + 8))) /
                 (*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) + *(float *)param_3;
            fVar3 = ((local_4 - *(float *)(param_3 + 8)) *
                    (*(float *)(param_4 + 4) - *(float *)(param_3 + 4))) /
                    (*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) + *(float *)(param_3 + 4);
            *(float *)(param_4 + 8) = local_4;
            goto LAB_00556568;
          }
        }
        else {
          *(float *)(param_4 + 8) =
               ((*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) *
               (local_8 - *(float *)(param_3 + 4))) /
               (*(float *)(param_4 + 4) - *(float *)(param_3 + 4)) + *(float *)(param_3 + 8);
          fVar3 = *(float *)(param_3 + 4);
          fVar4 = *(float *)param_3;
          fVar5 = *(float *)(param_4 + 4);
          fVar1 = *(float *)(param_3 + 4);
          fVar2 = *(float *)param_3;
          *(float *)(param_4 + 4) = local_8;
          *(float *)param_4 =
               ((*(float *)param_4 - fVar4) * (local_8 - fVar3)) / (fVar5 - fVar1) + fVar2;
        }
      }
      else {
        *(float *)param_4 =
             ((*(float *)param_4 - *(float *)param_3) * (local_10 - *(float *)(param_3 + 8))) /
             (*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) + *(float *)param_3;
        fVar3 = ((local_10 - *(float *)(param_3 + 8)) *
                (*(float *)(param_4 + 4) - *(float *)(param_3 + 4))) /
                (*(float *)(param_4 + 8) - *(float *)(param_3 + 8)) + *(float *)(param_3 + 4);
        *(float *)(param_4 + 8) = local_10;
LAB_00556568:
        *(float *)(param_4 + 4) = fVar3;
      }
LAB_0055656b:
      uVar6 = (uint)(*(float *)param_4 < local_18);
      if (*(float *)(param_4 + 4) < local_14) {
        uVar6 = uVar6 | 2;
      }
      if (*(float *)(param_4 + 8) < local_10) {
        uVar6 = uVar6 | 4;
      }
      if (local_c < *(float *)param_4) {
        uVar6 = uVar6 | 8;
      }
      if (local_8 < *(float *)(param_4 + 4)) {
        uVar6 = uVar6 | 0x10;
      }
      if (local_4 < *(float *)(param_4 + 8)) {
        uVar6 = uVar6 | 0x20;
      }
    } while (uVar6 != 0 || param_1 != (m3dV *)0x0);
  }
  return 1;
}

