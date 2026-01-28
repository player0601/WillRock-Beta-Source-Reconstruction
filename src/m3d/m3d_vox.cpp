
/* from: m3d:m3d_vox.cpp
   addr: 005662B0 */

void __thiscall
voxGRID::GetPosInd(voxGRID *this,m3dV *param_1,int *param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = ftol();
    *param_2 = iVar1;
  }
  if (param_3 != (int *)0x0) {
    iVar1 = ftol();
    *param_3 = iVar1;
  }
  if (param_4 != (int *)0x0) {
    iVar1 = ftol();
    *param_4 = iVar1;
  }
  if (param_5 != 0) {
    if (param_2 != (int *)0x0) {
      iVar1 = *param_2;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (*(int *)this + -1 < iVar1) {
        iVar1 = *(int *)this + -1;
      }
      *param_2 = iVar1;
    }
    if (param_3 != (int *)0x0) {
      iVar1 = *param_3;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (*(int *)(this + 4) + -1 < iVar1) {
        iVar1 = *(int *)(this + 4) + -1;
      }
      *param_3 = iVar1;
    }
    if (param_4 != (int *)0x0) {
      iVar1 = *param_4;
      if (iVar1 < 0) {
        *param_4 = 0;
        return;
      }
      if (*(int *)(this + 8) + -1 < iVar1) {
        iVar1 = *(int *)(this + 8) + -1;
      }
      *param_4 = iVar1;
    }
  }
  return;
}




/* from: m3d:m3d_vox.cpp
   addr: 00566390 */

void __thiscall voxGRID::ClampIndices(voxGRID *this,int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (*(int *)this + -1 < iVar1) {
      iVar1 = *(int *)this + -1;
    }
    *param_1 = iVar1;
  }
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (*(int *)(this + 4) + -1 < iVar1) {
      iVar1 = *(int *)(this + 4) + -1;
    }
    *param_2 = iVar1;
  }
  if (param_3 != (int *)0x0) {
    iVar1 = *param_3;
    if (iVar1 < 0) {
      *param_3 = 0;
      return;
    }
    if (*(int *)(this + 8) + -1 < iVar1) {
      iVar1 = *(int *)(this + 8) + -1;
    }
    *param_3 = iVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vox.cpp
   addr: 00566400 */

int __thiscall voxGRID::CalcVoxSize(voxGRID *this)

{
  int iVar1;
  uint local_1c;
  
  iVar1 = 1;
  if (((0 < *(int *)this) && (0 < *(int *)(this + 4))) && (0 < *(int *)(this + 8))) {
    local_1c = (uint)(ABS(*(float *)(this + 0x20) - *(float *)(this + 0x14)) < _DAT_005de65c);
    if ((((float)local_1c != ___real_00000000) ||
        (local_1c = (uint)(ABS(*(float *)(this + 0x24) - *(float *)(this + 0x18)) < _DAT_005de65c),
        (float)local_1c != ___real_00000000)) ||
       (local_1c = (uint)(ABS(*(float *)(this + 0x28) - *(float *)(this + 0x1c)) < _DAT_005de65c),
       (float)local_1c != ___real_00000000)) {
      iVar1 = 0;
    }
    *(float *)(this + 0x2c) =
         (*(float *)(this + 0x20) - *(float *)(this + 0x14)) / (float)*(int *)this;
    *(float *)(this + 0x30) =
         (*(float *)(this + 0x24) - *(float *)(this + 0x18)) / (float)*(int *)(this + 4);
    *(float *)(this + 0x34) =
         (*(float *)(this + 0x28) - *(float *)(this + 0x1c)) / (float)*(int *)(this + 8);
    return iVar1;
  }
  return 0;
}




/* from: m3d:m3d_vox.cpp
   addr: 00566540 */

int __fastcall voxCalcNVoxel(float param_1,float param_2)

{
  int iVar1;
  
  iVar1 = ftol();
  return iVar1 + 1;
}




/* from: m3d:m3d_vox.cpp
   addr: 00566560 */

void __thiscall
voxGRID::CalcVoxBBox(voxGRID *this,int param_1,int param_2,int param_3,m3dBOX *param_4)

{
  *(float *)(param_4 + 8) = (float)param_1 * *(float *)(this + 0x2c) + *(float *)(this + 0x14);
  *(float *)(param_4 + 0xc) = (float)param_2 * *(float *)(this + 0x30) + *(float *)(this + 0x18);
  *(float *)(param_4 + 0x10) = (float)param_3 * *(float *)(this + 0x34) + *(float *)(this + 0x1c);
  *(float *)(param_4 + 0x14) = *(float *)(this + 0x2c) + *(float *)(param_4 + 8);
  *(float *)(param_4 + 0x18) = *(float *)(this + 0x30) + *(float *)(param_4 + 0xc);
  *(float *)(param_4 + 0x1c) = *(float *)(this + 0x34) + *(float *)(param_4 + 0x10);
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:m3d_vox.cpp
   addr: 005665B0 */

void __thiscall
voxGRID::MakeIndListRay
          (voxGRID *this,m3dV *param_1,m3dV *param_2,int *param_3,int *param_4,int param_5)

{
  m3dV *pmVar1;
  m3dV *pmVar2;
  m3dV *pmVar3;
  m3dV *pmVar4;
  float fVar5;
  m3dV *pmVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  m3dV *pmVar11;
  int iVar12;
  int iVar13;
  m3dV *pmVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  float10 extraout_ST0;
  float10 fVar20;
  double dVar21;
  float local_44;
  float local_40;
  float local_3c;
  int local_34;
  uint local_30;
  int local_2c;
  m3dV *local_24;
  m3dV *local_18;
  m3dV *local_14;
  m3dV *local_10;
  m3dV *local_c;
  m3dV *local_8;
  m3dV *local_4;
  
  *param_4 = 0;
  iVar9 = m3dBOX::ClipLSeg((m3dBOX *)(this + 0xc),param_1,param_2,(m3dV *)&local_18,(m3dV *)&local_c
                          );
  fVar8 = ___real_3f800000;
  if (iVar9 != 0) {
    pmVar1 = (m3dV *)(((float)local_18 - *(float *)(this + 0x14)) *
                     (___real_3f800000 / *(float *)(this + 0x2c)));
    pmVar3 = (m3dV *)(((float)local_14 - *(float *)(this + 0x18)) *
                     (___real_3f800000 / *(float *)(this + 0x30)));
    pmVar11 = (m3dV *)(((float)local_10 - *(float *)(this + 0x1c)) *
                      (___real_3f800000 / *(float *)(this + 0x34)));
    pmVar2 = (m3dV *)(((float)local_c - *(float *)(this + 0x14)) *
                     (___real_3f800000 / *(float *)(this + 0x2c)));
    pmVar4 = (m3dV *)(((float)local_8 - *(float *)(this + 0x18)) *
                     (___real_3f800000 / *(float *)(this + 0x30)));
    pmVar14 = (m3dV *)(((float)local_4 - *(float *)(this + 0x1c)) *
                      (___real_3f800000 / *(float *)(this + 0x34)));
    param_2 = (m3dV *)0x0;
    fVar5 = ___real_3f800000 - _DAT_005de65c;
    local_24 = (m3dV *)((float)*(int *)this * fVar5);
    pmVar6 = local_24;
    if ((float)local_24 < (float)___real_00000000) {
      param_2 = local_24;
      pmVar6 = ___real_00000000;
    }
    local_18 = param_2;
    if (((float)param_2 <= (float)pmVar1) && (local_18 = pmVar6, (float)pmVar1 <= (float)pmVar6)) {
      local_18 = pmVar1;
    }
    param_2 = (m3dV *)0x0;
    pmVar1 = (m3dV *)((float)*(int *)(this + 4) * fVar5);
    pmVar6 = pmVar1;
    if ((float)pmVar1 < (float)___real_00000000) {
      param_2 = pmVar1;
      pmVar6 = ___real_00000000;
    }
    local_14 = param_2;
    if (((float)param_2 <= (float)pmVar3) && (local_14 = pmVar6, (float)pmVar3 <= (float)pmVar6)) {
      local_14 = pmVar3;
    }
    param_2 = (m3dV *)0x0;
    pmVar3 = (m3dV *)((float)*(int *)(this + 8) * fVar5);
    pmVar6 = pmVar3;
    if ((float)pmVar3 < (float)___real_00000000) {
      param_2 = pmVar3;
      pmVar6 = ___real_00000000;
    }
    local_10 = param_2;
    if (((float)param_2 <= (float)pmVar11) && (local_10 = pmVar6, (float)pmVar11 <= (float)pmVar6))
    {
      local_10 = pmVar11;
    }
    param_2 = (m3dV *)0x0;
    pmVar11 = local_24;
    if ((float)local_24 < (float)___real_00000000) {
      param_2 = local_24;
      pmVar11 = ___real_00000000;
    }
    local_c = param_2;
    if (((float)param_2 <= (float)pmVar2) && (local_c = pmVar11, (float)pmVar2 <= (float)pmVar11)) {
      local_c = pmVar2;
    }
    param_2 = (m3dV *)0x0;
    if ((float)pmVar1 < (float)___real_00000000) {
      param_2 = pmVar1;
      pmVar1 = ___real_00000000;
    }
    local_8 = param_2;
    if (((float)param_2 <= (float)pmVar4) && (local_8 = pmVar1, (float)pmVar4 <= (float)pmVar1)) {
      local_8 = pmVar4;
    }
    param_2 = (m3dV *)0x0;
    if ((float)pmVar3 < (float)___real_00000000) {
      param_2 = pmVar3;
      pmVar3 = ___real_00000000;
    }
    local_4 = param_2;
    if (((float)param_2 <= (float)pmVar14) && (local_4 = pmVar3, (float)pmVar14 <= (float)pmVar3)) {
      local_4 = pmVar14;
    }
    fVar5 = (float)local_18 - (float)local_c;
    param_2 = (m3dV *)(uint)(ABS(fVar5) < _DAT_005de65c);
    if ((float)(int)param_2 == (float)___real_00000000) {
      if ((float)local_c <= (float)local_18) {
        local_2c = -1;
        param_2 = (m3dV *)(uint)(1.0 < _DAT_005de65c);
        pmVar11 = local_18;
        if ((float)(int)param_2 == (float)___real_00000000) {
          dVar21 = floor((double)(float)local_18);
          pmVar11 = (m3dV *)(float)dVar21;
        }
        fVar7 = (float)local_18 - (float)pmVar11;
      }
      else {
        fVar5 = (float)local_c - (float)local_18;
        local_2c = 1;
        param_2 = (m3dV *)(uint)(1.0 < _DAT_005de65c);
        pmVar11 = local_18;
        if ((float)(int)param_2 == (float)___real_00000000) {
          dVar21 = floor((double)(float)local_18);
          pmVar11 = (m3dV *)(float)dVar21;
        }
        fVar7 = ___real_3f800000 - ((float)local_18 - (float)pmVar11);
      }
      local_40 = fVar8 / fVar5;
      param_2 = (m3dV *)(fVar7 * local_40);
    }
    else {
      param_2 = DAT_005de660;
      local_c = local_18;
    }
    param_1 = (m3dV *)(uint)(ABS((float)local_14 - (float)local_8) < _DAT_005de65c);
    if ((float)(int)param_1 == (float)___real_00000000) {
      if ((float)local_8 <= (float)local_14) {
        local_3c = ___real_3f800000 / ((float)local_14 - (float)local_8);
        local_24 = (m3dV *)0xffffffff;
        param_1 = (m3dV *)(uint)(1.0 < _DAT_005de65c);
        pmVar11 = local_14;
        if ((float)(int)param_1 == (float)___real_00000000) {
          dVar21 = floor((double)(float)local_14);
          pmVar11 = (m3dV *)(float)dVar21;
        }
        fVar8 = (float)local_14 - (float)pmVar11;
      }
      else {
        local_24 = (m3dV *)0x1;
        local_3c = ___real_3f800000 / ((float)local_8 - (float)local_14);
        param_1 = (m3dV *)(uint)(1.0 < _DAT_005de65c);
        if ((float)(int)param_1 == (float)___real_00000000) {
          dVar21 = floor((double)(float)local_14);
          fVar8 = ___real_3f800000 - ((float)local_14 - (float)dVar21);
        }
        else {
          fVar8 = ___real_3f800000 - ((float)local_14 - (float)local_14);
        }
      }
      param_1 = (m3dV *)(fVar8 * local_3c);
    }
    else {
      local_8 = local_14;
      param_1 = DAT_005de660;
    }
    local_44 = ABS((float)local_10 - (float)local_4);
    local_30 = (uint)(local_44 < _DAT_005de65c);
    if ((float)local_30 == (float)___real_00000000) {
      if ((float)local_4 <= (float)local_10) {
        local_44 = ___real_3f800000 / ((float)local_10 - (float)local_4);
        local_34 = -1;
        local_30 = (uint)(1.0 < _DAT_005de65c);
        if ((float)local_30 == (float)___real_00000000) {
          floor((double)(float)local_10);
        }
      }
      else {
        local_34 = 1;
        local_44 = ___real_3f800000 / ((float)local_4 - (float)local_10);
        local_30 = (uint)(1.0 < _DAT_005de65c);
        if ((float)local_30 == (float)___real_00000000) {
          floor((double)(float)local_10);
        }
      }
    }
    else {
      local_4 = local_10;
    }
    iVar10 = ftol();
    pmVar11 = (m3dV *)ftol();
    iVar12 = ftol();
    iVar13 = ftol();
    pmVar14 = (m3dV *)ftol();
    iVar15 = ftol();
    uVar16 = iVar15 - iVar12 >> 0x1f;
    uVar17 = (int)pmVar14 - (int)pmVar11 >> 0x1f;
    uVar18 = iVar13 - iVar10 >> 0x1f;
    iVar9 = ((iVar15 - iVar12 ^ uVar16) - uVar16) +
            (((int)pmVar14 - (int)pmVar11 ^ uVar17) - uVar17) + 1 +
            ((iVar13 - iVar10 ^ uVar18) - uVar18);
    if (iVar10 == iVar13) {
      param_2 = DAT_005de660;
    }
    if (pmVar11 == pmVar14) {
      param_1 = DAT_005de660;
    }
    fVar20 = extraout_ST0;
    if (iVar12 == iVar15) {
      fVar20 = (float10)(float)DAT_005de660;
    }
    iVar19 = 0;
    if (0 < iVar9) {
      do {
        param_3[iVar19] = (int)(pmVar11 + *(int *)(this + 4) * iVar10) * *(int *)(this + 8) + iVar12
        ;
        if ((float)param_1 <= (float)param_2) {
          if (fVar20 <= (float10)(float)param_1) goto LAB_00566d9f;
          pmVar11 = pmVar11 + (int)local_24;
          if (pmVar11 == pmVar14) {
            param_1 = DAT_005de660;
          }
          else {
            param_1 = (m3dV *)(local_3c + (float)param_1);
          }
        }
        else if (fVar20 <= (float10)(float)param_2) {
LAB_00566d9f:
          iVar12 = iVar12 + local_34;
          if (iVar12 == iVar15) {
            fVar20 = (float10)(float)DAT_005de660;
          }
          else {
            fVar20 = fVar20 + (float10)local_44;
          }
        }
        else {
          iVar10 = iVar10 + local_2c;
          if (iVar10 == iVar13) {
            param_2 = DAT_005de660;
          }
          else {
            param_2 = (m3dV *)(local_40 + (float)param_2);
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar9);
    }
    *param_4 = iVar9;
  }
  return;
}

