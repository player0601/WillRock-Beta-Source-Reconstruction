
/* from: m3d:m3d_noise.cpp
   addr: 0055BFB0 */

int __fastcall m3dInitNoise(void)

{
  float fVar1;
  m3dSPL *this;
  int iVar2;
  int local_4;
  
  this = (m3dSPL *)operator_new(0x34);
  if (this == (m3dSPL *)0x0) {
    DAT_009637b4 = (m3dSPL *)0x0;
    return 0;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 6;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 8;
  *(undefined4 *)(this + 0x18) = 8;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined ***)this = &m3dSPL_LAGRANGE::_vftable_;
  m3dSPL::AllocKpList(this,4);
  local_4 = 0;
  DAT_009637b4 = this;
  do {
    iVar2 = *(int *)(DAT_009637b4 + 0x10);
    if (local_4 < *(int *)(DAT_009637b4 + 0x10)) {
      iVar2 = local_4;
    }
    fVar1 = (float)local_4;
    local_4 = local_4 + 1;
    *(float *)(*(int *)(DAT_009637b4 + 0x18) * iVar2 + *(int *)(DAT_009637b4 + 0x24)) = fVar1;
  } while (local_4 < 4);
  m3dNoise = (m3dNOISE *)operator_new(0x18);
  if (m3dNoise == (m3dNOISE *)0x0) {
    m3dNoise = (m3dNOISE *)0x0;
    return 0;
  }
  *(int *)(m3dNoise + 4) = 0;
  *(int *)(m3dNoise + 8) = 0x200;
  *(int *)(m3dNoise + 0xc) = 0xc;
  *(int *)(m3dNoise + 0x10) = 0;
  *(int *)(m3dNoise + 0x14) = 0;
  *(undefined ***)m3dNoise = &m3dNOISE_GRAD::_vftable_;
  (**(code **)(*(int *)m3dNoise + 4))(0);
  return 1;
}




/* from: m3d:m3d_noise.cpp
   addr: 0055C0A0 */

void __fastcall m3dTermNoise(void)

{
  if (DAT_009637b4 != (int *)0x0) {
    (**(code **)(*DAT_009637b4 + 4))(1);
  }
  if (m3dNoise != (m3dNOISE *)0x0) {
    (*(code *)**(undefined4 **)m3dNoise)(1);
  }
  return;
}




/* from: m3d:m3d_noise.cpp
   addr: 0055C0D0 */

int __thiscall m3dNOISE::Fill(m3dNOISE *this,int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pvVar4 = apRealloc(*(void **)(this + 0x14),*(int *)(this + 8) << 2);
  *(void **)(this + 0x14) = pvVar4;
  if (pvVar4 == (void *)0x0) {
    return 0;
  }
  pvVar4 = apRealloc(*(void **)(this + 0x10),*(int *)(this + 0xc) * *(int *)(this + 8));
  *(void **)(this + 0x10) = pvVar4;
  if (pvVar4 != (void *)0x0) {
    uVar1 = *(uint *)(this + 8);
    iVar2 = *(int *)(this + 0x14);
    pvVar4 = apCalloc(uVar1,4);
    iVar5 = 0;
    if (pvVar4 != (void *)0x0) {
      if (0 < (int)uVar1) {
        do {
          *(int *)((int)pvVar4 + iVar5 * 4) = iVar5;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)uVar1);
      }
      iVar5 = 0;
      if (0 < (int)uVar1) {
        do {
          iVar7 = -1;
          m3dRandom();
          iVar6 = ftol();
          do {
            do {
              iVar3 = *(int *)((int)pvVar4 + iVar7 * 4 + 4);
              iVar7 = iVar7 + 1;
            } while (iVar3 == -1);
            iVar6 = iVar6 + -1;
          } while (0 < iVar6);
          *(int *)(iVar2 + iVar5 * 4) = iVar3;
          iVar5 = iVar5 + 1;
          *(undefined4 *)((int)pvVar4 + iVar7 * 4) = 0xffffffff;
        } while (iVar5 < (int)uVar1);
      }
      apFree(pvVar4);
      iVar5 = 1;
    }
    return iVar5;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_noise.cpp
   addr: 0055C1B0 */

int __thiscall m3dNOISE_GRAD::Fill(m3dNOISE_GRAD *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  float10 fVar5;
  float10 fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  unkbyte10 in_ST2;
  unkbyte10 in_ST4;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float local_8;
  
  pvVar1 = apRealloc(*(void **)(this + 0x14),*(int *)(this + 8) << 2);
  *(void **)(this + 0x14) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    pvVar1 = apRealloc(*(void **)(this + 0x10),*(int *)(this + 0xc) * *(int *)(this + 8));
    *(void **)(this + 0x10) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      iVar2 = _noiseFillHash(*(int **)(this + 0x14),*(int *)(this + 8));
      if (iVar2 != 0) {
        iVar2 = 0;
        pfVar3 = *(float **)(this + 0x10);
        if (0 < *(int *)(this + 8)) {
          do {
            uVar7 = (undefined8)in_ST2;
            in_ST2 = in_ST4;
            in_ST4 = in_ST6;
            in_ST6 = in_ST7;
            fVar10 = m3dRandom();
            fVar10 = ___real_3f800000 - (fVar10 + fVar10);
            local_8 = ___real_3f800000 - fVar10 * fVar10;
            if (m3dSimdType == 0) {
              local_8 = local_8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar9 = rsqrtss(ZEXT416((uint)local_8),ZEXT416((uint)local_8));
              fVar11 = auVar9._0_4_;
              local_8 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                        (`float___cdecl_m3dSqrt(float)'::__l2::three - local_8 * fVar11 * fVar11) *
                        local_8;
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar4 = (ulonglong)(uint)local_8;
              uVar7 = PackedFloatingReciprocalSQRAprox(uVar7,uVar4);
              uVar8 = PackedFloatingMUL(uVar7,uVar7);
              uVar8 = PackedFloatingReciprocalSQRIter1(uVar8,uVar4);
              uVar7 = PackedFloatingReciprocalIter2(uVar8,uVar7);
              uVar7 = PackedFloatingMUL(uVar7,uVar4);
              local_8 = (float)uVar7;
              FastExitMediaState();
            }
            else {
              local_8 = SQRT(local_8);
            }
            fVar11 = m3dRandom();
            fVar6 = (float10)___real_43b40000;
            pfVar3[2] = fVar10;
            fVar5 = (float10)fcos((float10)fVar11 * fVar6);
            iVar2 = iVar2 + 1;
            *pfVar3 = (float)(fVar5 * (float10)local_8);
            fVar6 = (float10)fsin((float10)fVar11 * fVar6);
            pfVar3[1] = (float)(fVar6 * (float10)local_8);
            pfVar3 = pfVar3 + 3;
            in_ST7 = in_ST6;
          } while (iVar2 < *(int *)(this + 8));
        }
        return 1;
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_noise.cpp
   addr: 0055C300 */

float __thiscall m3dNOISE_GRAD::GetValue(m3dNOISE_GRAD *this,m3dV *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  m3dV *pmVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float local_6c [3];
  int local_60;
  int local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  float afStack_30 [12];
  
  iVar9 = 3;
  pmVar5 = param_1;
  do {
    fVar4 = *(float *)pmVar5 -
            (float)(int)ROUND(*(float *)pmVar5 - `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
    *(int *)(pmVar5 + ((int)&local_48 - (int)param_1)) =
         (int)ROUND(*(float *)pmVar5 - `int___cdecl_m3dIntFloor(float)'::__l2::qqq);
    pmVar5 = pmVar5 + 4;
    iVar9 = iVar9 + -1;
    *(float *)(pmVar5 + ((int)&local_58 - (int)param_1)) = fVar4;
    *(float *)(pmVar5 + ((int)&local_40 - (int)param_1)) =
         (___real_40400000 - (fVar4 + fVar4)) * fVar4 * fVar4;
  } while (iVar9 != 0);
  iVar9 = *(int *)(this + 0x14);
  iVar2 = *(int *)(this + 0xc);
  iVar3 = *(int *)(this + 0x10);
  iVar6 = 0;
  uVar8 = *(int *)(this + 8) - 1;
  local_60 = 0;
  do {
    local_5c = 0;
    do {
      iVar6 = local_5c + iVar6 * 2;
      local_58 = 0;
      do {
        fVar4 = (float)local_58;
        iVar7 = *(int *)(iVar9 + (*(int *)(iVar9 + (*(int *)(iVar9 + (local_40 + local_58 & uVar8) *
                                                                     4) + local_44 + local_5c &
                                                   uVar8) * 4) + local_48 + local_60 & uVar8) * 4) *
                iVar2;
        iVar1 = local_58 + iVar6 * 2;
        local_58 = local_58 + 1;
        afStack_30[iVar1 + 4] =
             (local_54 - (float)local_60) * *(float *)(iVar7 + iVar3) +
             (local_50 - (float)local_5c) * *(float *)(iVar7 + 4 + iVar3) +
             (local_4c - fVar4) * *(float *)(iVar7 + 8 + iVar3);
      } while (local_58 < 2);
      local_5c = local_5c + 1;
      afStack_30[iVar6] =
           (afStack_30[iVar6 * 2 + 5] - afStack_30[iVar6 * 2 + 4]) * local_34 +
           afStack_30[iVar6 * 2 + 4];
      iVar6 = local_60;
    } while (local_5c < 2);
    iVar1 = local_60 * 2;
    iVar7 = local_60 * 2;
    iVar6 = local_60 + 1;
    local_60 = iVar6;
    local_6c[iVar6] = (afStack_30[iVar7 + 1] - afStack_30[iVar1]) * local_38 + afStack_30[iVar1];
  } while (iVar6 < 2);
  fVar4 = (local_6c[2] - local_6c[1]) * local_3c + local_6c[1];
  if (fVar4 < ___real_be99999a) {
    return ___real_bf800000;
  }
  if (___real_3e99999a < fVar4) {
    return ___real_3f800000;
  }
  return (fVar4 - ___real_be99999a) * ___real_40555555 - ___real_3f800000;
}




/* from: m3d:m3d_noise.cpp
   addr: 0055C4F0 */

int __fastcall _noiseFillHash(int *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  pvVar2 = apCalloc(param_2,4);
  iVar3 = 0;
  if (pvVar2 != (void *)0x0) {
    if (0 < param_2) {
      do {
        *(int *)((int)pvVar2 + iVar3 * 4) = iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2);
    }
    iVar3 = 0;
    if (0 < param_2) {
      do {
        iVar5 = -1;
        m3dRandom();
        iVar4 = ftol();
        do {
          do {
            iVar1 = *(int *)((int)pvVar2 + iVar5 * 4 + 4);
            iVar5 = iVar5 + 1;
          } while (iVar1 == -1);
          iVar4 = iVar4 + -1;
        } while (0 < iVar4);
        param_1[iVar3] = iVar1;
        iVar3 = iVar3 + 1;
        *(undefined4 *)((int)pvVar2 + iVar5 * 4) = 0xffffffff;
      } while (iVar3 < param_2);
    }
    apFree(pvVar2);
    iVar3 = 1;
  }
  return iVar3;
}




/* from: m3d:m3d_noise.cpp
   addr: 0055C580
   addr: 0055C580
   addr: 0055C580
   addr: 0055C580 */

void * __thiscall m3dNOISE::_vector_deleting_destructor_(m3dNOISE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x10));
  apFree(*(void **)(this + 0x14));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

