
/* from: m3d:m3d_clip.cpp
   addr: 00561780 */

int __fastcall m2dQualPointLine_A(m2dV *param_1,m2dV *param_2,m2dV *param_3,float param_4)

{
  float fVar1;
  
  fVar1 = (*(float *)(param_1 + 4) * *(float *)param_3 +
          ((*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) * *(float *)param_2 -
          (*(float *)param_3 - *(float *)param_1) * *(float *)(param_2 + 4))) -
          *(float *)param_1 * *(float *)(param_3 + 4);
  if (param_4 < fVar1) {
    return -1;
  }
  if (fVar1 < -param_4) {
    return 1;
  }
  return 0;
}




/* from: m3d:m3d_clip.cpp
   addr: 005617E0 */

int __fastcall m2dIsBelongPointTri_A(m2dTRI *param_1,m2dV *param_2,float param_3)

{
  int iVar1;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  
  local_a0 = *(undefined4 *)param_1;
  local_a4 = 3;
  local_9c = *(undefined4 *)(param_1 + 4);
  local_98 = *(undefined4 *)(param_1 + 8);
  local_94 = *(undefined4 *)(param_1 + 0xc);
  local_90 = *(undefined4 *)(param_1 + 0x10);
  local_8c = *(undefined4 *)(param_1 + 0x14);
  iVar1 = m2dIsBelongPointPoly_A((m2dPOLY *)&local_a4,param_2,param_3);
  return iVar1;
}




/* from: m3d:m3d_clip.cpp
   addr: 00561840 */

int __fastcall m2dIsBelongPointPoly_A(m2dPOLY *param_1,m2dV *param_2,float param_3)

{
  float fVar1;
  m2dPOLY *pmVar2;
  int iVar3;
  
  fVar1 = (*(float *)(param_1 + 0xc) * *(float *)(param_1 + 0x18) +
          ((*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x18)) * *(float *)(param_1 + 4) -
          (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x14)) * *(float *)(param_1 + 8))) -
          *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x14);
  if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
    iVar3 = 0;
    if (0 < *(int *)param_1 + -1) {
      pmVar2 = param_1 + 0x10;
      do {
        if (param_3 < (*(float *)(param_2 + 4) * *(float *)(pmVar2 + -4) +
                      ((*(float *)pmVar2 - *(float *)(param_2 + 4)) * *(float *)(pmVar2 + -0xc) -
                      (*(float *)(pmVar2 + -4) - *(float *)param_2) * *(float *)(pmVar2 + -8))) -
                      *(float *)pmVar2 * *(float *)param_2) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        pmVar2 = pmVar2 + 8;
      } while (iVar3 < *(int *)param_1 + -1);
    }
    if (param_3 < (*(float *)(param_1 + 4) * *(float *)(param_2 + 4) +
                  ((*(float *)(param_1 + 8) - *(float *)(param_2 + 4)) *
                   *(float *)(param_1 + iVar3 * 8 + 4) -
                  (*(float *)(param_1 + 4) - *(float *)param_2) *
                  *(float *)(param_1 + iVar3 * 8 + 8))) -
                  *(float *)param_2 * *(float *)(param_1 + 8)) {
      return 0;
    }
    return 1;
  }
  iVar3 = 0;
  if (0 < *(int *)param_1 + -1) {
    pmVar2 = param_1 + 0x10;
    do {
      fVar1 = (*(float *)(pmVar2 + -4) * *(float *)(param_2 + 4) +
              ((*(float *)pmVar2 - *(float *)(param_2 + 4)) * *(float *)(pmVar2 + -0xc) -
              (*(float *)(pmVar2 + -4) - *(float *)param_2) * *(float *)(pmVar2 + -8))) -
              *(float *)param_2 * *(float *)pmVar2;
      if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pmVar2 = pmVar2 + 8;
    } while (iVar3 < *(int *)param_1 + -1);
  }
  fVar1 = (*(float *)(param_2 + 4) * *(float *)(param_1 + 4) +
          ((*(float *)(param_1 + 8) - *(float *)(param_2 + 4)) * *(float *)(param_1 + iVar3 * 8 + 4)
          - (*(float *)(param_1 + 4) - *(float *)param_2) * *(float *)(param_1 + iVar3 * 8 + 8))) -
          *(float *)param_2 * *(float *)(param_1 + 8);
  if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
    return 0;
  }
  return 1;
}




/* from: m3d:m3d_clip.cpp
   addr: 005619E0 */

int __fastcall m3xzIsBelongPointPoly_A(m3dPOLY *param_1,m3dV *param_2,float param_3)

{
  float fVar1;
  m3dPOLY *pmVar2;
  int iVar3;
  
  fVar1 = (*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x24) +
          ((*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 4) -
          (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0xc))) -
          *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x1c);
  if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
    iVar3 = 0;
    if (0 < *(int *)param_1 + -1) {
      pmVar2 = param_1 + 0x18;
      do {
        if (param_3 < (*(float *)(param_2 + 8) * *(float *)(pmVar2 + -8) +
                      ((*(float *)pmVar2 - *(float *)(param_2 + 8)) * *(float *)(pmVar2 + -0x14) -
                      (*(float *)(pmVar2 + -8) - *(float *)param_2) * *(float *)(pmVar2 + -0xc))) -
                      *(float *)pmVar2 * *(float *)param_2) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        pmVar2 = pmVar2 + 0xc;
      } while (iVar3 < *(int *)param_1 + -1);
    }
    if (param_3 < (*(float *)(param_1 + 4) * *(float *)(param_2 + 8) +
                  ((*(float *)(param_1 + 0xc) - *(float *)(param_2 + 8)) *
                   *(float *)(param_1 + iVar3 * 0xc + 4) -
                  (*(float *)(param_1 + 4) - *(float *)param_2) *
                  *(float *)(param_1 + iVar3 * 0xc + 4 + 8))) -
                  *(float *)param_2 * *(float *)(param_1 + 0xc)) {
      return 0;
    }
    return 1;
  }
  iVar3 = 0;
  if (0 < *(int *)param_1 + -1) {
    pmVar2 = param_1 + 0x18;
    do {
      fVar1 = (*(float *)(pmVar2 + -8) * *(float *)(param_2 + 8) +
              ((*(float *)pmVar2 - *(float *)(param_2 + 8)) * *(float *)(pmVar2 + -0x14) -
              (*(float *)(pmVar2 + -8) - *(float *)param_2) * *(float *)(pmVar2 + -0xc))) -
              *(float *)param_2 * *(float *)pmVar2;
      if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pmVar2 = pmVar2 + 0xc;
    } while (iVar3 < *(int *)param_1 + -1);
  }
  fVar1 = (*(float *)(param_2 + 8) * *(float *)(param_1 + 4) +
          ((*(float *)(param_1 + 0xc) - *(float *)(param_2 + 8)) *
           *(float *)(param_1 + iVar3 * 0xc + 4) -
          (*(float *)(param_1 + 4) - *(float *)param_2) * *(float *)(param_1 + iVar3 * 0xc + 4 + 8))
          ) - *(float *)param_2 * *(float *)(param_1 + 0xc);
  if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
    return 0;
  }
  return 1;
}




/* from: m3d:m3d_clip.cpp
   addr: 00561B80 */

int __fastcall m3xyIsBelongPointPoly_A(m3dPOLY *param_1,m3dV *param_2,float param_3)

{
  float fVar1;
  m3dPOLY *pmVar2;
  int iVar3;
  
  fVar1 = (*(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x20) +
          ((*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 4) -
          (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 8))) -
          *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x1c);
  if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
    iVar3 = 0;
    if (0 < *(int *)param_1 + -1) {
      pmVar2 = param_1 + 0x14;
      do {
        if (param_3 < (*(float *)(param_2 + 4) * *(float *)(pmVar2 + -4) +
                      ((*(float *)pmVar2 - *(float *)(param_2 + 4)) * *(float *)(pmVar2 + -0x10) -
                      (*(float *)(pmVar2 + -4) - *(float *)param_2) * *(float *)(pmVar2 + -0xc))) -
                      *(float *)pmVar2 * *(float *)param_2) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        pmVar2 = pmVar2 + 0xc;
      } while (iVar3 < *(int *)param_1 + -1);
    }
    if (param_3 < (*(float *)(param_1 + 4) * *(float *)(param_2 + 4) +
                  ((*(float *)(param_1 + 8) - *(float *)(param_2 + 4)) *
                   *(float *)(param_1 + iVar3 * 0xc + 4) -
                  (*(float *)(param_1 + 4) - *(float *)param_2) *
                  *(float *)(param_1 + iVar3 * 0xc + 4 + 4))) -
                  *(float *)param_2 * *(float *)(param_1 + 8)) {
      return 0;
    }
    return 1;
  }
  iVar3 = 0;
  if (0 < *(int *)param_1 + -1) {
    pmVar2 = param_1 + 0x14;
    do {
      fVar1 = (*(float *)(pmVar2 + -4) * *(float *)(param_2 + 4) +
              ((*(float *)pmVar2 - *(float *)(param_2 + 4)) * *(float *)(pmVar2 + -0x10) -
              (*(float *)(pmVar2 + -4) - *(float *)param_2) * *(float *)(pmVar2 + -0xc))) -
              *(float *)param_2 * *(float *)pmVar2;
      if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pmVar2 = pmVar2 + 0xc;
    } while (iVar3 < *(int *)param_1 + -1);
  }
  fVar1 = (*(float *)(param_2 + 4) * *(float *)(param_1 + 4) +
          ((*(float *)(param_1 + 8) - *(float *)(param_2 + 4)) *
           *(float *)(param_1 + iVar3 * 0xc + 4) -
          (*(float *)(param_1 + 4) - *(float *)param_2) * *(float *)(param_1 + iVar3 * 0xc + 4 + 4))
          ) - *(float *)param_2 * *(float *)(param_1 + 8);
  if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
    return 0;
  }
  return 1;
}




/* from: m3d:m3d_clip.cpp
   addr: 00561D40 */

int __fastcall m3yzIsBelongPointPoly_A(m3dPOLY *param_1,m3dV *param_2,float param_3)

{
  float fVar1;
  m3dPOLY *pmVar2;
  int iVar3;
  
  fVar1 = (*(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x24) +
          ((*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 8) -
          (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0xc))) -
          *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x20);
  if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
    iVar3 = 0;
    if (0 < *(int *)param_1 + -1) {
      pmVar2 = param_1 + 0x14;
      do {
        if (param_3 < (*(float *)pmVar2 * *(float *)(param_2 + 8) +
                      ((*(float *)(pmVar2 + 4) - *(float *)(param_2 + 8)) *
                       *(float *)(pmVar2 + -0xc) -
                      (*(float *)pmVar2 - *(float *)(param_2 + 4)) * *(float *)(pmVar2 + -8))) -
                      *(float *)(param_2 + 4) * *(float *)(pmVar2 + 4)) {
          return 0;
        }
        iVar3 = iVar3 + 1;
        pmVar2 = pmVar2 + 0xc;
      } while (iVar3 < *(int *)param_1 + -1);
    }
    if (param_3 < (*(float *)(param_1 + 8) * *(float *)(param_2 + 8) +
                  ((*(float *)(param_1 + 0xc) - *(float *)(param_2 + 8)) *
                   *(float *)(param_1 + iVar3 * 0xc + 8) -
                  (*(float *)(param_1 + 8) - *(float *)(param_2 + 4)) *
                  *(float *)(param_1 + iVar3 * 0xc + 0xc))) -
                  *(float *)(param_1 + 0xc) * *(float *)(param_2 + 4)) {
      return 0;
    }
    return 1;
  }
  iVar3 = 0;
  if (0 < *(int *)param_1 + -1) {
    pmVar2 = param_1 + 0x14;
    do {
      fVar1 = (*(float *)pmVar2 * *(float *)(param_2 + 8) +
              ((*(float *)(pmVar2 + 4) - *(float *)(param_2 + 8)) * *(float *)(pmVar2 + -0xc) -
              (*(float *)pmVar2 - *(float *)(param_2 + 4)) * *(float *)(pmVar2 + -8))) -
              *(float *)(param_2 + 4) * *(float *)(pmVar2 + 4);
      if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      pmVar2 = pmVar2 + 0xc;
    } while (iVar3 < *(int *)param_1 + -1);
  }
  fVar1 = (*(float *)(param_1 + 8) * *(float *)(param_2 + 8) +
          ((*(float *)(param_1 + 0xc) - *(float *)(param_2 + 8)) *
           *(float *)(param_1 + iVar3 * 0xc + 8) -
          (*(float *)(param_1 + 8) - *(float *)(param_2 + 4)) *
          *(float *)(param_1 + iVar3 * 0xc + 0xc))) -
          *(float *)(param_1 + 0xc) * *(float *)(param_2 + 4);
  if ((fVar1 <= param_3) && (fVar1 < -param_3)) {
    return 0;
  }
  return 1;
}




/* from: m3d:m3d_clip.cpp
   addr: 00561EF0 */

int __fastcall m3dIsBelongPointPoly_A(m3dPOLY *param_1,m3dV *param_2,m3dV *param_3,float param_4)

{
  int iVar1;
  m3dV local_c [12];
  
  if (param_3 == (m3dV *)0x0) {
    m3dGetPolyNormal(param_1,local_c);
    param_3 = local_c;
  }
  if (ABS(*(float *)param_3) <= ABS(*(float *)(param_3 + 4))) {
    if (ABS(*(float *)(param_3 + 8)) < ABS(*(float *)(param_3 + 4))) {
      iVar1 = m3xzIsBelongPointPoly_A(param_1,param_2,param_4);
      return iVar1;
    }
  }
  else if (ABS(*(float *)(param_3 + 8)) < ABS(*(float *)param_3)) {
    iVar1 = m3yzIsBelongPointPoly_A(param_1,param_2,param_4);
    return iVar1;
  }
  iVar1 = m3xyIsBelongPointPoly_A(param_1,param_2,param_4);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_clip.cpp
   addr: 00561FE0 */

int __fastcall m3dClipPolyNearPlane(m3dPOLY *param_1,float param_2,m3dPOLY *param_3)

{
  m3dPOLY *pmVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int local_34;
  uint local_30;
  m3dPOLY *local_2c;
  uint local_28;
  int local_24;
  
  iVar8 = *(int *)param_1;
  local_28 = -1;
  local_34 = 0;
  local_24 = 0;
  if (0 < iVar8) {
    pfVar10 = (float *)((int)param_2 + 4);
    pfVar11 = (float *)((int)param_2 + -8);
    local_2c = param_1 + 4;
    do {
      fVar2 = *(float *)local_2c;
      fVar3 = *(float *)(local_2c + 4);
      fVar4 = *(float *)(local_2c + 8);
      if (local_24 == iVar8 + -1) {
        iVar8 = 0;
      }
      else {
        iVar8 = local_24 + 1;
      }
      pmVar1 = param_1 + iVar8 * 0xc + 4;
      fVar5 = *(float *)pmVar1;
      fVar6 = *(float *)(pmVar1 + 4);
      fVar7 = *(float *)(pmVar1 + 8);
      if (fVar4 < (float)param_3) {
        if ((float)param_3 <= fVar7) {
          fVar2 = ((fVar5 - fVar2) * ((float)param_3 - fVar4)) / (fVar7 - fVar4) + fVar2;
          fVar3 = ((fVar6 - fVar3) * ((float)param_3 - fVar4)) / (fVar7 - fVar4) + fVar3;
          if ((((local_34 == 0) ||
               (local_28 = (uint)(ABS(*pfVar11 - fVar2) < _DAT_005de63c),
               (float)local_28 == ___real_00000000)) ||
              (local_28 = (uint)(ABS(pfVar11[1] - fVar3) < _DAT_005de63c),
              (float)local_28 == ___real_00000000)) ||
             (local_28 = (uint)(ABS(pfVar11[2] - (float)param_3) < _DAT_005de63c),
             (float)local_28 == ___real_00000000)) {
            local_34 = local_34 + 1;
            pfVar11 = pfVar11 + 3;
            *pfVar10 = fVar2;
            pfVar10[1] = fVar3;
            pfVar10[2] = (float)param_3;
            pfVar10 = pfVar10 + 3;
          }
          local_28 = 0;
        }
      }
      else {
        if (((local_34 == 0) ||
            (local_30 = (uint)(ABS(*pfVar11 - fVar2) < _DAT_005de63c),
            (float)local_30 == ___real_00000000)) ||
           ((local_30 = (uint)(ABS(pfVar11[1] - fVar3) < _DAT_005de63c),
            (float)local_30 == ___real_00000000 ||
            (local_30 = (uint)(ABS(pfVar11[2] - fVar4) < _DAT_005de63c), pfVar9 = pfVar10,
            (float)local_30 == ___real_00000000)))) {
          local_34 = local_34 + 1;
          pfVar11 = pfVar11 + 3;
          *pfVar10 = fVar2;
          pfVar9 = pfVar10 + 3;
          pfVar10[1] = fVar3;
          pfVar10[2] = fVar4;
        }
        pfVar10 = pfVar9;
        if (fVar7 < (float)param_3) {
          fVar2 = ((fVar5 - fVar2) * ((float)param_3 - fVar4)) / (fVar7 - fVar4) + fVar2;
          fVar3 = ((fVar6 - fVar3) * ((float)param_3 - fVar4)) / (fVar7 - fVar4) + fVar3;
          if (((local_34 == 0) ||
              (local_28 = (uint)(ABS(*pfVar11 - fVar2) < _DAT_005de63c),
              (float)local_28 == ___real_00000000)) ||
             ((local_28 = (uint)(ABS(pfVar11[1] - fVar3) < _DAT_005de63c),
              (float)local_28 == ___real_00000000 ||
              (local_28 = (uint)(ABS(pfVar11[2] - (float)param_3) < _DAT_005de63c),
              (float)local_28 == ___real_00000000)))) {
            local_34 = local_34 + 1;
            pfVar11 = pfVar11 + 3;
            *pfVar9 = fVar2;
            pfVar10 = pfVar9 + 3;
            pfVar9[1] = fVar3;
            pfVar9[2] = (float)param_3;
          }
          local_28 = 0;
        }
      }
      local_24 = local_24 + 1;
      iVar8 = *(int *)param_1;
      local_2c = local_2c + 0xc;
    } while (local_24 < iVar8);
    if (2 < local_34) {
      *(int *)param_2 = local_34;
      return local_28;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_clip.cpp
   addr: 00562440 */

int __fastcall m3dClipPolyPlane(m3dPOLY *param_1,m3dV *param_2,m3dV *param_3,m3dPOLY *param_4)

{
  m3dPOLY *pmVar1;
  bool bVar2;
  float fVar3;
  m3dPOLY *pmVar4;
  float fVar5;
  m3dPOLY *pmVar6;
  int iVar7;
  m3dPOLY *pmVar8;
  float *pfVar9;
  m3dPOLY *pmVar10;
  int iVar11;
  int local_158;
  m3dPOLY *local_154;
  int local_150;
  float local_148 [21];
  int local_f4;
  float local_f0 [60];
  
  local_154 = param_1;
  if (param_2 != (m3dV *)0x0) {
    iVar11 = *(int *)param_1;
    if (0 < iVar11) {
      pmVar4 = param_1 + 0xc;
      iVar7 = iVar11;
      pfVar9 = local_f0;
      do {
        iVar7 = iVar7 + -1;
        *pfVar9 = *(float *)(pmVar4 + -8) - *(float *)param_2;
        pfVar9[1] = *(float *)(pmVar4 + -4) - *(float *)(param_2 + 4);
        *(float *)(pmVar4 + 0xc + (int)local_148 + (0x48 - (int)param_1)) =
             *(float *)pmVar4 - *(float *)(param_2 + 8);
        pmVar4 = pmVar4 + 0xc;
        pfVar9 = pfVar9 + 3;
      } while (iVar7 != 0);
    }
    local_154 = (m3dPOLY *)&local_f4;
    local_f4 = iVar11;
  }
  fVar5 = *(float *)local_154;
  iVar11 = 0;
  if (0 < (int)fVar5) {
    pmVar4 = local_154 + 8;
    do {
      iVar11 = iVar11 + 1;
      local_148[iVar11] =
           *(float *)pmVar4 * *(float *)(param_3 + 4) +
           *(float *)(pmVar4 + -4) * *(float *)param_3 +
           *(float *)(pmVar4 + 4) * *(float *)(param_3 + 8);
      pmVar4 = pmVar4 + 0xc;
    } while (iVar11 < (int)fVar5);
  }
  local_148[0] = -NAN;
  local_158 = 0;
  local_150 = 0;
  if (0 < (int)fVar5) {
    pmVar6 = param_4 + 4;
    pmVar4 = local_154;
    do {
      pmVar10 = pmVar4 + 0xc;
      if (local_150 == (int)fVar5 + -1) {
        iVar11 = 0;
      }
      else {
        iVar11 = local_150 + 1;
      }
      bVar2 = local_148[iVar11 + 1] < ___real_00000000;
      if (local_148[local_150 + 1] < ___real_00000000) {
        pmVar8 = pmVar6;
        iVar7 = local_158;
        if (!bVar2) {
          fVar5 = local_148[local_150 + 1] / (local_148[local_150 + 1] - local_148[iVar11 + 1]);
          if (___real_3f800000 - _DAT_005de63c * ___real_42c80000 <= fVar5) {
            local_148[0] = 0.0;
          }
          else {
            fVar3 = ___real_3f800000 - fVar5;
            local_148[0] = 0.0;
            pmVar8 = local_154 + iVar11 * 0xc + 4;
            *(float *)pmVar6 = fVar5 * *(float *)pmVar8 + fVar3 * *(float *)(pmVar4 + 4);
            *(float *)(pmVar6 + 4) = fVar5 * *(float *)(pmVar8 + 4) + fVar3 * *(float *)(pmVar4 + 8)
            ;
            *(float *)(pmVar6 + 8) = fVar3 * *(float *)pmVar10 + fVar5 * *(float *)(pmVar8 + 8);
            pmVar8 = pmVar6 + 0xc;
            iVar7 = local_158 + 1;
          }
        }
      }
      else {
        pmVar8 = pmVar6 + 0xc;
        *(float *)pmVar6 = *(float *)(pmVar4 + 4);
        *(float *)(pmVar6 + 4) = *(float *)(pmVar4 + 8);
        *(float *)(pmVar6 + 8) = *(float *)(pmVar4 + 0xc);
        iVar7 = local_158 + 1;
        if (bVar2) {
          fVar5 = local_148[local_150 + 1] / (local_148[local_150 + 1] - local_148[iVar11 + 1]);
          if (_DAT_005de63c * ___real_42c80000 < fVar5) {
            fVar3 = ___real_3f800000 - fVar5;
            pmVar1 = local_154 + iVar11 * 0xc + 4;
            *(float *)pmVar8 = fVar3 * *(float *)(pmVar4 + 4) + fVar5 * *(float *)pmVar1;
            *(float *)(pmVar6 + 0x10) =
                 fVar5 * *(float *)(pmVar1 + 4) + fVar3 * *(float *)(pmVar4 + 8);
            *(float *)(pmVar6 + 0x14) = fVar3 * *(float *)pmVar10 + fVar5 * *(float *)(pmVar1 + 8);
            pmVar8 = pmVar6 + 0x18;
            iVar7 = local_158 + 2;
          }
          local_158 = iVar7;
          local_148[0] = 0.0;
          iVar7 = local_158;
        }
      }
      local_158 = iVar7;
      fVar5 = *(float *)local_154;
      local_150 = local_150 + 1;
      pmVar6 = pmVar8;
      pmVar4 = pmVar10;
    } while (local_150 < (int)fVar5);
    if (2 < local_158) {
      if ((param_2 != (m3dV *)0x0) && (iVar11 = local_158, pmVar4 = param_4, 0 < local_158)) {
        do {
          pmVar6 = pmVar4 + 0xc;
          iVar11 = iVar11 + -1;
          *(float *)(pmVar4 + 4) = *(float *)(pmVar4 + 4) + *(float *)param_2;
          *(float *)(pmVar4 + 8) = *(float *)(param_2 + 4) + *(float *)(pmVar4 + 8);
          *(float *)pmVar6 = *(float *)pmVar6 + *(float *)(param_2 + 8);
          pmVar4 = pmVar6;
        } while (iVar11 != 0);
      }
      *(int *)param_4 = local_158;
      return (int)local_148[0];
    }
  }
  return 1;
}




/* from: m3d:m3d_clip.cpp
   addr: 00562700 */

int __fastcall m2dClipPolyRect(m2dPOLY *param_1,m2dPOLY *param_2,m2dPOLY *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  m2dPOLY *pmVar5;
  uint uVar6;
  int iVar7;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  local_10 = *(float *)(param_2 + 0x14);
  local_8 = *(float *)(param_2 + 0x18);
  local_14 = fVar1;
  if (local_10 < fVar1) {
    local_14 = local_10;
    local_10 = fVar1;
  }
  local_c = fVar2;
  if (local_8 < fVar2) {
    local_c = local_8;
    local_8 = fVar2;
  }
  iVar3 = *(int *)param_1;
  iVar4 = 0;
  uVar6 = 0;
  iVar7 = 0;
  if (0 < iVar3) {
    pmVar5 = param_1 + 4;
    do {
      if (*(float *)pmVar5 < local_14) {
        uVar6 = 1;
        iVar4 = 1;
        break;
      }
      iVar7 = iVar7 + 1;
      pmVar5 = pmVar5 + 8;
    } while (iVar7 < iVar3);
  }
  iVar7 = 0;
  if (0 < iVar3) {
    pmVar5 = param_1 + 4;
    do {
      if (local_10 < *(float *)pmVar5) {
        uVar6 = uVar6 | 4;
        iVar4 = iVar4 + 1;
        break;
      }
      iVar7 = iVar7 + 1;
      pmVar5 = pmVar5 + 8;
    } while (iVar7 < iVar3);
  }
  iVar7 = 0;
  if (0 < iVar3) {
    pmVar5 = param_1 + 8;
    do {
      if (*(float *)pmVar5 < local_c) {
        uVar6 = uVar6 | 8;
        iVar4 = iVar4 + 1;
        break;
      }
      iVar7 = iVar7 + 1;
      pmVar5 = pmVar5 + 8;
    } while (iVar7 < iVar3);
  }
  iVar7 = 0;
  if (0 < iVar3) {
    pmVar5 = param_1 + 8;
    do {
      if (local_8 < *(float *)pmVar5) {
        uVar6 = uVar6 | 2;
        iVar4 = iVar4 + 1;
        break;
      }
      iVar7 = iVar7 + 1;
      pmVar5 = pmVar5 + 8;
    } while (iVar7 < iVar3);
  }
  if (uVar6 != 0) {
    iVar3 = _m2dClipPolyRect(param_1,param_2,param_3,uVar6,iVar4);
    return iVar3;
  }
  for (iVar3 = 0x29; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)param_3 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    param_3 = param_3 + 4;
  }
  return -1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_clip.cpp
   addr: 00562840 */

int __fastcall
_m2dClipPolyRect(m2dPOLY *param_1,m2dPOLY *param_2,m2dPOLY *param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  m2dPOLY *pmVar6;
  int iVar7;
  m2dPOLY *pmVar8;
  m2dPOLY *pmVar9;
  m2dPOLY *pmVar10;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  m2dPOLY *local_28;
  int local_24;
  uint local_20;
  uint local_14;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 8);
  local_30 = *(float *)(param_2 + 0x14);
  local_2c = *(float *)(param_2 + 0x18);
  local_38 = fVar1;
  if (local_30 < fVar1) {
    local_38 = local_30;
    local_30 = fVar1;
  }
  local_34 = fVar5;
  if (local_2c < fVar5) {
    local_34 = local_2c;
    local_2c = fVar5;
  }
  local_20 = -1;
  iVar7 = param_5;
  local_28 = param_1;
  if ((param_4 & 1U) != 0) {
    pmVar9 = param_3;
    if (param_5 != 1) {
      pmVar9 = (m2dPOLY *)&DAT_009637d0;
    }
    iVar4 = *(int *)param_1;
    iVar7 = 0;
    local_24 = 0;
    if (iVar4 < 1) {
      return 1;
    }
    pmVar8 = param_1 + 4;
    pmVar6 = pmVar9 + 4;
    pmVar10 = pmVar9 + -4;
    do {
      fVar1 = *(float *)pmVar8;
      fVar5 = *(float *)(pmVar8 + 4);
      if (local_24 == iVar4 + -1) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_24 + 1;
      }
      fVar2 = *(float *)(param_1 + iVar4 * 8 + 4);
      fVar3 = *(float *)(param_1 + iVar4 * 8 + 8);
      if (fVar1 < local_38) {
        if (local_38 <= fVar2) {
          fVar5 = ((local_38 - fVar1) * (fVar3 - fVar5)) / (fVar2 - fVar1) + fVar5;
          if (((iVar7 == 0) ||
              (local_20 = (uint)(ABS(*(float *)pmVar10 - local_38) < _DAT_005de63c),
              (float)local_20 == ___real_00000000)) ||
             (local_20 = (uint)(ABS(*(float *)(pmVar10 + 4) - fVar5) < _DAT_005de63c),
             (float)local_20 == ___real_00000000)) {
            iVar7 = iVar7 + 1;
            *(float *)pmVar6 = local_38;
            *(float *)(pmVar6 + 4) = fVar5;
            pmVar10 = pmVar10 + 8;
            pmVar6 = pmVar6 + 8;
          }
          local_20 = 0;
        }
      }
      else {
        if (((iVar7 == 0) ||
            (local_28 = (m2dPOLY *)(uint)(ABS(*(float *)pmVar10 - fVar1) < _DAT_005de63c),
            (float)(int)local_28 == ___real_00000000)) ||
           (local_28 = (m2dPOLY *)(uint)(ABS(*(float *)(pmVar10 + 4) - fVar5) < _DAT_005de63c),
           (float)(int)local_28 == ___real_00000000)) {
          *(float *)pmVar6 = fVar1;
          *(float *)(pmVar6 + 4) = fVar5;
          iVar7 = iVar7 + 1;
          pmVar10 = pmVar10 + 8;
          pmVar6 = pmVar6 + 8;
        }
        if (fVar2 < local_38) {
          fVar5 = ((local_38 - fVar1) * (fVar3 - fVar5)) / (fVar2 - fVar1) + fVar5;
          if (((iVar7 == 0) ||
              (local_20 = (uint)(ABS(*(float *)pmVar10 - local_38) < _DAT_005de63c),
              (float)local_20 == ___real_00000000)) ||
             (local_20 = (uint)(ABS(*(float *)(pmVar10 + 4) - fVar5) < _DAT_005de63c),
             (float)local_20 == ___real_00000000)) {
            *(float *)pmVar6 = local_38;
            *(float *)(pmVar6 + 4) = fVar5;
            iVar7 = iVar7 + 1;
            pmVar10 = pmVar10 + 8;
            pmVar6 = pmVar6 + 8;
          }
          local_20 = 0;
        }
      }
      local_24 = local_24 + 1;
      iVar4 = *(int *)param_1;
      pmVar8 = pmVar8 + 8;
    } while (local_24 < iVar4);
    if (iVar7 < 3) {
      return 1;
    }
    param_5 = param_5 + -1;
    *(int *)pmVar9 = iVar7;
    local_28 = pmVar9;
  }
  if ((param_4 & 8U) != 0) {
    pmVar9 = param_3;
    if (param_5 != 1) {
      pmVar9 = (m2dPOLY *)&DAT_00963920;
    }
    iVar4 = *(int *)local_28;
    iVar7 = 0;
    local_24 = 0;
    if (iVar4 < 1) {
      return 1;
    }
    pmVar8 = local_28 + 4;
    pmVar6 = pmVar9 + 4;
    pmVar10 = pmVar9 + -4;
    do {
      fVar1 = *(float *)pmVar8;
      fVar5 = *(float *)(pmVar8 + 4);
      if (local_24 == iVar4 + -1) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_24 + 1;
      }
      fVar2 = *(float *)(local_28 + iVar4 * 8 + 4);
      fVar3 = *(float *)(local_28 + iVar4 * 8 + 8);
      if (fVar5 < local_34) {
        if (local_34 <= fVar3) {
          fVar1 = ((local_34 - fVar5) * (fVar2 - fVar1)) / (fVar3 - fVar5) + fVar1;
          if (((iVar7 == 0) ||
              (local_14 = (uint)(ABS(*(float *)pmVar10 - fVar1) < _DAT_005de63c),
              (float)local_14 == ___real_00000000)) ||
             (local_14 = (uint)(ABS(*(float *)(pmVar10 + 4) - local_34) < _DAT_005de63c),
             (float)local_14 == ___real_00000000)) {
            *(float *)pmVar6 = fVar1;
            goto LAB_00562e9c;
          }
          goto LAB_00562ea6;
        }
      }
      else {
        if (((iVar7 == 0) ||
            (local_14 = (uint)(ABS(*(float *)pmVar10 - fVar1) < _DAT_005de63c),
            (float)local_14 == ___real_00000000)) ||
           (local_14 = (uint)(ABS(*(float *)(pmVar10 + 4) - fVar5) < _DAT_005de63c),
           (float)local_14 == ___real_00000000)) {
          *(float *)pmVar6 = fVar1;
          *(float *)(pmVar6 + 4) = fVar5;
          iVar7 = iVar7 + 1;
          pmVar10 = pmVar10 + 8;
          pmVar6 = pmVar6 + 8;
        }
        if (fVar3 < local_34) {
          fVar1 = ((local_34 - fVar5) * (fVar2 - fVar1)) / (fVar3 - fVar5) + fVar1;
          if (((iVar7 == 0) ||
              (local_14 = (uint)(ABS(*(float *)pmVar10 - fVar1) < _DAT_005de63c),
              (float)local_14 == ___real_00000000)) ||
             (local_14 = (uint)(ABS(*(float *)(pmVar10 + 4) - local_34) < _DAT_005de63c),
             (float)local_14 == ___real_00000000)) {
            *(float *)pmVar6 = fVar1;
LAB_00562e9c:
            pmVar10 = pmVar10 + 8;
            *(float *)(pmVar6 + 4) = local_34;
            iVar7 = iVar7 + 1;
            pmVar6 = pmVar6 + 8;
          }
LAB_00562ea6:
          local_20 = 0;
        }
      }
      local_24 = local_24 + 1;
      iVar4 = *(int *)local_28;
      pmVar8 = pmVar8 + 8;
    } while (local_24 < iVar4);
    if (iVar7 < 3) {
      return 1;
    }
    param_5 = param_5 + -1;
    *(int *)pmVar9 = iVar7;
    local_28 = pmVar9;
  }
  if ((param_4 & 4U) != 0) {
    pmVar9 = param_3;
    if (param_5 != 1) {
      pmVar9 = (m2dPOLY *)&DAT_00963878;
    }
    iVar4 = *(int *)local_28;
    iVar7 = 0;
    local_24 = 0;
    if (iVar4 < 1) {
      return 1;
    }
    pmVar8 = local_28 + 4;
    pmVar6 = pmVar9 + 4;
    pmVar10 = pmVar9 + -4;
    do {
      fVar1 = *(float *)pmVar8;
      fVar5 = *(float *)(pmVar8 + 4);
      if (local_24 == iVar4 + -1) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_24 + 1;
      }
      fVar2 = *(float *)(local_28 + iVar4 * 8 + 4);
      fVar3 = *(float *)(local_28 + iVar4 * 8 + 8);
      if (fVar1 < local_30 == (fVar1 == local_30)) {
        if (fVar2 <= local_30) {
          fVar5 = ((local_30 - fVar1) * (fVar3 - fVar5)) / (fVar2 - fVar1) + fVar5;
          if (((iVar7 == 0) ||
              (param_5 = (int)(ABS(*(float *)pmVar10 - local_30) < _DAT_005de63c),
              (float)param_5 == ___real_00000000)) ||
             (param_5 = (int)(ABS(*(float *)(pmVar10 + 4) - fVar5) < _DAT_005de63c),
             (float)param_5 == ___real_00000000)) {
            *(float *)pmVar6 = local_30;
            goto LAB_005631b2;
          }
          goto LAB_005631bc;
        }
      }
      else {
        if (((iVar7 == 0) ||
            (param_5 = (int)(ABS(*(float *)pmVar10 - fVar1) < _DAT_005de63c),
            (float)param_5 == ___real_00000000)) ||
           (param_5 = (int)(ABS(*(float *)(pmVar10 + 4) - fVar5) < _DAT_005de63c),
           (float)param_5 == ___real_00000000)) {
          *(float *)pmVar6 = fVar1;
          *(float *)(pmVar6 + 4) = fVar5;
          iVar7 = iVar7 + 1;
          pmVar10 = pmVar10 + 8;
          pmVar6 = pmVar6 + 8;
        }
        if (local_30 < fVar2) {
          fVar5 = ((local_30 - fVar1) * (fVar3 - fVar5)) / (fVar2 - fVar1) + fVar5;
          if (((iVar7 == 0) ||
              (param_5 = (int)(ABS(*(float *)pmVar10 - local_30) < _DAT_005de63c),
              (float)param_5 == ___real_00000000)) ||
             (param_5 = (int)(ABS(*(float *)(pmVar10 + 4) - fVar5) < _DAT_005de63c),
             (float)param_5 == ___real_00000000)) {
            *(float *)pmVar6 = local_30;
LAB_005631b2:
            pmVar10 = pmVar10 + 8;
            *(float *)(pmVar6 + 4) = fVar5;
            iVar7 = iVar7 + 1;
            pmVar6 = pmVar6 + 8;
          }
LAB_005631bc:
          local_20 = 0;
        }
      }
      local_24 = local_24 + 1;
      iVar4 = *(int *)local_28;
      pmVar8 = pmVar8 + 8;
    } while (local_24 < iVar4);
    if (iVar7 < 3) {
      return 1;
    }
    *(int *)pmVar9 = iVar7;
    local_28 = pmVar9;
  }
  if ((param_4 & 2U) != 0) {
    iVar4 = *(int *)local_28;
    iVar7 = 0;
    local_24 = 0;
    if (iVar4 < 1) {
      return 1;
    }
    pmVar9 = local_28 + 4;
    pmVar8 = param_3 + 4;
    pmVar6 = param_3 + -4;
    do {
      fVar1 = *(float *)pmVar9;
      fVar5 = *(float *)(pmVar9 + 4);
      if (local_24 == iVar4 + -1) {
        iVar4 = 0;
      }
      else {
        iVar4 = local_24 + 1;
      }
      fVar2 = *(float *)(local_28 + iVar4 * 8 + 4);
      fVar3 = *(float *)(local_28 + iVar4 * 8 + 8);
      if (fVar5 < local_2c == (fVar5 == local_2c)) {
        if (fVar3 <= local_2c) {
          fVar1 = ((local_2c - fVar5) * (fVar2 - fVar1)) / (fVar3 - fVar5) + fVar1;
          if (((iVar7 == 0) ||
              (param_5 = (int)(ABS(*(float *)pmVar6 - fVar1) < _DAT_005de63c),
              (float)param_5 == ___real_00000000)) ||
             (param_5 = (int)(ABS(*(float *)(pmVar6 + 4) - local_2c) < _DAT_005de63c),
             (float)param_5 == ___real_00000000)) {
            *(float *)pmVar8 = fVar1;
            goto LAB_005634af;
          }
          goto LAB_005634b9;
        }
      }
      else {
        if (((iVar7 == 0) ||
            (param_5 = (int)(ABS(*(float *)pmVar6 - fVar1) < _DAT_005de63c),
            (float)param_5 == ___real_00000000)) ||
           (param_5 = (int)(ABS(*(float *)(pmVar6 + 4) - fVar5) < _DAT_005de63c),
           (float)param_5 == ___real_00000000)) {
          *(float *)pmVar8 = fVar1;
          *(float *)(pmVar8 + 4) = fVar5;
          iVar7 = iVar7 + 1;
          pmVar6 = pmVar6 + 8;
          pmVar8 = pmVar8 + 8;
        }
        if (local_2c < fVar3) {
          fVar1 = ((local_2c - fVar5) * (fVar2 - fVar1)) / (fVar3 - fVar5) + fVar1;
          if (((iVar7 == 0) ||
              (param_5 = (int)(ABS(*(float *)pmVar6 - fVar1) < _DAT_005de63c),
              (float)param_5 == ___real_00000000)) ||
             (param_5 = (int)(ABS(*(float *)(pmVar6 + 4) - local_2c) < _DAT_005de63c),
             (float)param_5 == ___real_00000000)) {
            *(float *)pmVar8 = fVar1;
LAB_005634af:
            pmVar6 = pmVar6 + 8;
            *(float *)(pmVar8 + 4) = local_2c;
            iVar7 = iVar7 + 1;
            pmVar8 = pmVar8 + 8;
          }
LAB_005634b9:
          local_20 = 0;
        }
      }
      local_24 = local_24 + 1;
      iVar4 = *(int *)local_28;
      pmVar9 = pmVar9 + 8;
    } while (local_24 < iVar4);
    if (iVar7 < 3) {
      return 1;
    }
    *(int *)param_3 = iVar7;
  }
  param_5 = (int)(ABS(*(float *)(param_3 + iVar7 * 8 + -4) - *(float *)(param_3 + 4)) <
                 _DAT_005de63c);
  if ((((float)param_5 != ___real_00000000) &&
      (param_5 = (int)(ABS(*(float *)(param_3 + iVar7 * 8) - *(float *)(param_3 + 8)) <
                      _DAT_005de63c), (float)param_5 != ___real_00000000)) &&
     (iVar7 = *(int *)param_3, *(int *)param_3 = iVar7 + -1, iVar7 + -1 < 3)) {
    return 1;
  }
  return local_20;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_clip.cpp
   addr: 005635A0 */

int __fastcall
m3xyClipLSegRect(m3dV *param_1,m3dV *param_2,m2dPOLY *param_3,m3dV *param_4,m3dV *param_5)

{
  m2dPOLY *pmVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  m3dV *pmVar7;
  float fVar8;
  ushort uVar9;
  int iVar10;
  m3dV *pmVar11;
  float local_c;
  m2dPOLY *local_8;
  float local_4;
  
  pmVar7 = param_4;
  pmVar1 = *(m2dPOLY **)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 8);
  local_8 = *(m2dPOLY **)(param_3 + 0x14);
  local_4 = *(float *)(param_3 + 0x18);
  param_3 = pmVar1;
  if ((float)local_8 < (float)pmVar1) {
    param_3 = local_8;
    local_8 = pmVar1;
  }
  local_c = fVar2;
  if (local_4 < fVar2) {
    local_c = local_4;
    local_4 = fVar2;
  }
  iVar10 = -1;
  *(undefined4 *)param_4 = *(undefined4 *)param_1;
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_4 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)param_5 = *(undefined4 *)param_2;
  *(undefined4 *)(param_5 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_2 + 8);
  pmVar11 = (m3dV *)(uint)(*(float *)param_4 < (float)param_3);
  if (*(float *)(param_4 + 4) < local_c) {
    pmVar11 = (m3dV *)((uint)pmVar11 | 8);
  }
  if ((float)local_8 < *(float *)param_4) {
    pmVar11 = (m3dV *)((uint)pmVar11 | 4);
  }
  if (local_4 < *(float *)(param_4 + 4)) {
    pmVar11 = (m3dV *)((uint)pmVar11 | 2);
  }
  uVar9 = (ushort)(*(float *)param_5 < (float)param_3);
  if (*(float *)(param_5 + 4) < local_c) {
    uVar9 = uVar9 | 8;
  }
  if ((float)local_8 < *(float *)param_5) {
    uVar9 = uVar9 | 4;
  }
  if (local_4 < *(float *)(param_5 + 4)) {
    uVar9 = uVar9 | 2;
  }
  if (uVar9 != 0 || (short)pmVar11 != 0) {
    iVar10 = 0;
    param_4 = pmVar11;
    do {
      if ((uVar9 & (ushort)param_4) != 0) {
        return 1;
      }
      if (((uint)param_4 & 1) == 0) {
        if (((uint)param_4 & 8) == 0) {
          if (((uint)param_4 & 4) == 0) {
            if (((uint)param_4 & 2) != 0) {
              fVar2 = *(float *)(pmVar7 + 8);
              fVar8 = local_4;
              goto LAB_005637b9;
            }
          }
          else {
            fVar2 = *(float *)pmVar7;
            *(float *)(pmVar7 + 8) =
                 ___real_3f800000 /
                 (((___real_3f800000 / *(float *)(param_5 + 8) -
                   ___real_3f800000 / *(float *)(pmVar7 + 8)) * ((float)local_8 - fVar2)) /
                  (*(float *)param_5 - *(float *)pmVar7) + ___real_3f800000 / *(float *)(pmVar7 + 8)
                 );
            fVar8 = *(float *)(param_5 + 4);
            fVar3 = *(float *)param_5;
            fVar4 = *(float *)pmVar7;
            *(m2dPOLY **)pmVar7 = local_8;
            *(float *)(pmVar7 + 4) =
                 ((fVar8 - *(float *)(pmVar7 + 4)) * ((float)local_8 - fVar2)) / (fVar3 - fVar4) +
                 *(float *)(pmVar7 + 4);
          }
        }
        else {
          fVar2 = *(float *)(pmVar7 + 8);
          fVar8 = local_c;
LAB_005637b9:
          fVar3 = *(float *)(pmVar7 + 4);
          *(float *)(pmVar7 + 8) =
               ___real_3f800000 /
               (((___real_3f800000 / *(float *)(param_5 + 8) - ___real_3f800000 / fVar2) *
                (fVar8 - fVar3)) / (*(float *)(param_5 + 4) - *(float *)(pmVar7 + 4)) +
               ___real_3f800000 / fVar2);
          fVar2 = *(float *)param_5;
          fVar4 = *(float *)(param_5 + 4);
          fVar5 = *(float *)(pmVar7 + 4);
          *(float *)(pmVar7 + 4) = fVar8;
          *(float *)pmVar7 =
               ((fVar2 - *(float *)pmVar7) * (fVar8 - fVar3)) / (fVar4 - fVar5) + *(float *)pmVar7;
        }
      }
      else {
        fVar2 = *(float *)pmVar7;
        *(float *)(pmVar7 + 8) =
             ___real_3f800000 /
             (((___real_3f800000 / *(float *)(param_5 + 8) -
               ___real_3f800000 / *(float *)(pmVar7 + 8)) * ((float)param_3 - fVar2)) /
              (*(float *)param_5 - *(float *)pmVar7) + ___real_3f800000 / *(float *)(pmVar7 + 8));
        fVar8 = *(float *)(param_5 + 4);
        fVar3 = *(float *)param_5;
        fVar4 = *(float *)pmVar7;
        *(m2dPOLY **)pmVar7 = param_3;
        *(float *)(pmVar7 + 4) =
             ((fVar8 - *(float *)(pmVar7 + 4)) * ((float)param_3 - fVar2)) / (fVar3 - fVar4) +
             *(float *)(pmVar7 + 4);
      }
      param_4 = (m3dV *)(uint)(*(float *)pmVar7 < (float)param_3);
      if (*(float *)(pmVar7 + 4) < local_c) {
        param_4 = (m3dV *)((uint)param_4 | 8);
      }
      if ((float)local_8 < *(float *)pmVar7) {
        param_4 = (m3dV *)((uint)param_4 | 4);
      }
      if (local_4 < *(float *)(pmVar7 + 4)) {
        param_4 = (m3dV *)((uint)param_4 | 2);
      }
      if (((ushort)param_4 & uVar9) != 0) {
        return 1;
      }
      if ((uVar9 & 1) == 0) {
        if ((uVar9 & 8) == 0) {
          if ((uVar9 & 4) == 0) {
            if ((uVar9 & 2) != 0) {
              *(float *)(param_5 + 8) =
                   ___real_3f800000 /
                   (((local_4 - *(float *)(pmVar7 + 4)) *
                    (___real_3f800000 / *(float *)(param_5 + 8) -
                    ___real_3f800000 / *(float *)(pmVar7 + 8))) /
                    (*(float *)(param_5 + 4) - *(float *)(pmVar7 + 4)) +
                   ___real_3f800000 / *(float *)(pmVar7 + 8));
              fVar2 = *(float *)param_5 - *(float *)pmVar7;
              fVar8 = local_4;
              goto LAB_0056398a;
            }
          }
          else {
            *(float *)(param_5 + 8) =
                 ___real_3f800000 /
                 ((((float)local_8 - *(float *)pmVar7) *
                  (___real_3f800000 / *(float *)(param_5 + 8) -
                  ___real_3f800000 / *(float *)(pmVar7 + 8))) /
                  (*(float *)param_5 - *(float *)pmVar7) + ___real_3f800000 / *(float *)(pmVar7 + 8)
                 );
            fVar2 = *(float *)pmVar7;
            fVar8 = *(float *)(pmVar7 + 4);
            fVar3 = *(float *)param_5;
            fVar4 = *(float *)pmVar7;
            fVar5 = *(float *)(pmVar7 + 4);
            *(m2dPOLY **)param_5 = local_8;
            *(float *)(param_5 + 4) =
                 ((*(float *)(param_5 + 4) - fVar8) * ((float)local_8 - fVar2)) / (fVar3 - fVar4) +
                 fVar5;
          }
        }
        else {
          *(float *)(param_5 + 8) =
               ___real_3f800000 /
               (((local_c - *(float *)(pmVar7 + 4)) *
                (___real_3f800000 / *(float *)(param_5 + 8) -
                ___real_3f800000 / *(float *)(pmVar7 + 8))) /
                (*(float *)(param_5 + 4) - *(float *)(pmVar7 + 4)) +
               ___real_3f800000 / *(float *)(pmVar7 + 8));
          fVar2 = *(float *)param_5 - *(float *)pmVar7;
          fVar8 = local_c;
LAB_0056398a:
          fVar3 = *(float *)(pmVar7 + 4);
          fVar4 = *(float *)(param_5 + 4);
          fVar5 = *(float *)(pmVar7 + 4);
          fVar6 = *(float *)pmVar7;
          *(float *)(param_5 + 4) = fVar8;
          *(float *)param_5 = ((fVar8 - fVar3) * fVar2) / (fVar4 - fVar5) + fVar6;
        }
      }
      else {
        *(float *)(param_5 + 8) =
             ___real_3f800000 /
             ((((float)param_3 - *(float *)pmVar7) *
              (___real_3f800000 / *(float *)(param_5 + 8) -
              ___real_3f800000 / *(float *)(pmVar7 + 8))) / (*(float *)param_5 - *(float *)pmVar7) +
             ___real_3f800000 / *(float *)(pmVar7 + 8));
        fVar2 = *(float *)pmVar7;
        fVar8 = *(float *)(pmVar7 + 4);
        fVar3 = *(float *)param_5;
        fVar4 = *(float *)pmVar7;
        fVar5 = *(float *)(pmVar7 + 4);
        *(m2dPOLY **)param_5 = param_3;
        *(float *)(param_5 + 4) =
             ((*(float *)(param_5 + 4) - fVar8) * ((float)param_3 - fVar2)) / (fVar3 - fVar4) +
             fVar5;
      }
      uVar9 = (ushort)(*(float *)param_5 < (float)param_3);
      if (*(float *)(param_5 + 4) < local_c) {
        uVar9 = uVar9 | 8;
      }
      if ((float)local_8 < *(float *)param_5) {
        uVar9 = uVar9 | 4;
      }
      if (local_4 < *(float *)(param_5 + 4)) {
        uVar9 = uVar9 | 2;
      }
    } while (uVar9 != 0 || (ushort)param_4 != 0);
  }
  return iVar10;
}




/* from: m3d:m3d_clip.cpp
   addr: 00563A10 */

int __fastcall m3dClipLSegNearFar(m3dV *param_1,m3dV *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  m3dV *pmVar6;
  int iVar7;
  
  pmVar6 = param_2;
  if (*(float *)(param_2 + 8) < *(float *)(param_1 + 8)) {
    pmVar6 = param_1;
    param_1 = param_2;
  }
  iVar7 = -1;
  if (*(float *)(param_1 + 8) < param_3) {
    if (*(float *)(pmVar6 + 8) < param_3) {
      return 1;
    }
    fVar1 = *(float *)(param_1 + 8);
    iVar7 = 0;
    *(float *)param_1 =
         ((*(float *)pmVar6 - *(float *)param_1) * (param_3 - fVar1)) /
         (*(float *)(pmVar6 + 8) - *(float *)(param_1 + 8)) + *(float *)param_1;
    fVar2 = *(float *)(pmVar6 + 4);
    fVar3 = *(float *)(pmVar6 + 8);
    fVar4 = *(float *)(param_1 + 8);
    *(float *)(param_1 + 8) = param_3;
    *(float *)(param_1 + 4) =
         ((fVar2 - *(float *)(param_1 + 4)) * (param_3 - fVar1)) / (fVar3 - fVar4) +
         *(float *)(param_1 + 4);
  }
  if (param_4 < *(float *)(pmVar6 + 8)) {
    if (param_4 < *(float *)(pmVar6 + 8)) {
      return 1;
    }
    *(float *)pmVar6 =
         ((*(float *)pmVar6 - *(float *)param_1) * (param_4 - *(float *)(param_1 + 8))) /
         (*(float *)(pmVar6 + 8) - *(float *)(param_1 + 8)) + *(float *)param_1;
    fVar1 = *(float *)(param_1 + 8);
    fVar2 = *(float *)(param_1 + 4);
    fVar3 = *(float *)(pmVar6 + 8);
    fVar4 = *(float *)(param_1 + 8);
    fVar5 = *(float *)(param_1 + 4);
    *(float *)(pmVar6 + 8) = param_4;
    iVar7 = 0;
    *(float *)(pmVar6 + 4) =
         ((*(float *)(pmVar6 + 4) - fVar2) * (param_4 - fVar1)) / (fVar3 - fVar4) + fVar5;
  }
  return iVar7;
}

