
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_anim.cpp
   addr: 00427B30 */

void __thiscall plrPLAYER::Animate(plrPLAYER *this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  float fVar6;
  uint uStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar5 = 1;
  if ((*(uint *)(this + 0x2a3) & 0x20) != 0) {
    iVar5 = 0x6a;
    *(uint *)(this + 0x2a3) = *(uint *)(this + 0x2a3) & 0xffffffdf;
  }
  if ((*(uint *)(this + 0x29b) & 0x2000000) == 0) {
    if ((*(uint *)(this + 0x29b) & 0x4000000) != 0) {
      iVar5 = 0x3a;
    }
  }
  else {
    iVar5 = 0x34;
  }
  *(byte *)(*(int *)(this + 0x297) + 0xd) = *(byte *)(*(int *)(this + 0x297) + 0xd) & 0xf;
  iVar2 = plrPLAYER_COMMON::GetMountType((plrPLAYER_COMMON *)this,-1);
  if ((iVar2 == 3) && (((byte)this[0x29b] & 0x40) != 0)) {
    animCHN::Start(*(animCHN **)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 4));
    *(byte *)(*(int *)(this + 0x297) + 0xd) = *(byte *)(*(int *)(this + 0x297) + 0xd) | 0x10;
  }
  iVar2 = plrPLAYER_COMMON::GetMountType((plrPLAYER_COMMON *)this,-1);
  if ((iVar2 == 4) && (((byte)this[0x29b] & 0x40) != 0)) {
    animCHN::Start((animCHN *)(*(int *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 4) + 0x18));
    *(byte *)(*(int *)(this + 0x297) + 0xd) = *(byte *)(*(int *)(this + 0x297) + 0xd) | 0x20;
  }
  *(uint *)(this + 0x29f) = *(uint *)(this + 0x29f) & 0xfffffff0;
  fVar6 = _plrMOVE_CTRL::GetValue(&_plrCtrlSide);
  if (fVar6 <= ___real_3c23d70a) {
    fVar6 = _plrMOVE_CTRL::GetValue(&_plrCtrlSide);
    if (fVar6 < ___real_bc23d70a) {
      uVar3 = *(uint *)(this + 0x29f) | 1;
      goto LAB_00427c45;
    }
  }
  else {
    uVar3 = *(uint *)(this + 0x29f) | 2;
LAB_00427c45:
    iVar5 = 7;
    *(uint *)(this + 0x29f) = uVar3;
  }
  fVar6 = _plrMOVE_CTRL::GetValue(&_plrCtrlForw);
  if ((___real_3c23d70a < fVar6) || (DAT_00603f7c != 0)) {
    iVar5 = 7;
    uVar3 = *(uint *)(this + 0x29f) | 4;
  }
  else {
    fVar6 = _plrMOVE_CTRL::GetValue(&_plrCtrlForw);
    if ((___real_bc23d70a <= fVar6) && (DAT_00603f80 == 0)) goto LAB_00427cb4;
    iVar5 = 0x12;
    uVar3 = *(uint *)(this + 0x29f) | 8;
  }
  *(uint *)(this + 0x29f) = uVar3;
LAB_00427cb4:
  uVar3 = *(uint *)(this + 0x29b);
  if ((uVar3 & 0x800) != 0) {
    iVar5 = 0x46;
  }
  if ((uVar3 & 0x100) != 0) {
    iVar5 = 0x23;
  }
  if ((uVar3 & 0x200) != 0) {
    if (iVar5 == 1) {
      iVar5 = 0x52;
    }
    else if ((iVar5 == 7) || (iVar5 == 0x12)) {
      iVar5 = 0x4c;
    }
  }
  if ((uVar3 & 0x400000) != 0) {
    iVar5 = 0x40;
  }
  iVar2 = (**(code **)(*(int *)this + 0x78))();
  if (iVar2 != 0) {
    iVar5 = (-(uint)((*(uint *)(this + 0x29b) & 0x800) != 0) & 0x3b) + 0x1d;
  }
  if (((byte)this[0xb4] & 0x10) == 0) {
    animSYSTEM_INST::AdvanceAnimation
              (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc)
               ,iVar5,gsElapsedTime);
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&fStack_24);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&fStack_18);
    fStack_14 = 0.0;
    m3dNormalize((m3dV *)&fStack_18);
    if ((((((*(int *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 0x20) != 2) ||
           ((*(uint *)(this + 0x29b) & 0x9000000) != 0)) ||
          (uStack_28 = (uint)(ABS(_m3dVZero - *(float *)(this + 0x2f7)) < ___real_3c23d70a),
          (float)uStack_28 == ___real_00000000)) ||
         (((uStack_28 = (uint)(ABS(DAT_00963740 - *(float *)(this + 0x2fb)) < ___real_3c23d70a),
           (float)uStack_28 == ___real_00000000 ||
           (uStack_28 = (uint)(ABS(DAT_00963744 - *(float *)(this + 0x2ff)) < ___real_3c23d70a),
           (float)uStack_28 == ___real_00000000)) ||
          ((fVar6 = _plrMOVE_CTRL::GetValue(&_plrCtrlForw), ___real_3a83126f <= ABS(fVar6) ||
           ((fVar6 = _plrMOVE_CTRL::GetValue(&_plrCtrlSide), ___real_3a83126f <= ABS(fVar6) ||
            (*(int *)(this + 899) != 0)))))))) || (*(float *)(this + 0x337) <= ___real_3f800000)) ||
       (((char)((uint)*(undefined4 *)(this + 0x29b) >> 8) < '\0' ||
        (___real_3dcccccd <= *(float *)(this + 0x32b))))) {
      if ((*(uint *)(this + 0x29b) & 0x400000) == 0) {
        *(float *)(this + 0x26b) = fStack_24 - fStack_18 * ___real_3f000000;
        *(float *)(this + 0x26f) = fStack_20 - fStack_14 * ___real_3f000000;
        *(float *)(this + 0x273) = fStack_1c - fStack_10 * ___real_3f000000;
      }
      else {
        *(float *)(this + 0x26b) = fStack_24;
        *(float *)(this + 0x26f) = fStack_20;
        *(float *)(this + 0x273) = fStack_1c;
      }
    }
    if (((*(int *)(this + 899) == 0) && (-1 < (char)(*(uint *)(this + 0x29b) >> 8))) &&
       ((*(uint *)(this + 0x29b) & 0x1000000) != 0)) {
      m3dClampVector_L((m3dV *)(this + 0x277),(m3dV *)(this + 0x26b),
                       gsElapsedTime * ___real_40e00000,(m3dV *)(this + 0x26b));
    }
    if (*(int *)(*(int *)(*(int *)(this + 0xbc) + 0xe8) + 0x20) == 0x47) {
      *(float *)(this + 0x26f) = *(float *)(this + 0x26f) + ___real_3f800000;
    }
    *(undefined4 *)(this + 0x277) = *(undefined4 *)(this + 0x26b);
    *(undefined4 *)(this + 0x27b) = *(undefined4 *)(this + 0x26f);
    *(undefined4 *)(this + 0x27f) = *(undefined4 *)(this + 0x273);
    *(char *)(*(int *)(this + 0x297) + 0xc) = (char)iVar5;
    bVar1 = *(byte *)(*(int *)(this + 0x297) + 0xd);
    *(byte *)(*(int *)(this + 0x297) + 0xd) =
         (*(byte *)(*(int *)(*(int *)(*(int *)(this + 0x23f) + *(int *)(this + 0x243) * 4) + 0xbc) +
                   0xe0) ^ bVar1) & 0xf ^ bVar1;
    *(undefined4 *)(*(int *)(this + 0x297) + 0x17) = *(undefined4 *)(this + 0x24b);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&uStack_c);
    uStack_8 = 0;
    m3dNormalize((m3dV *)&uStack_c);
    *(undefined4 *)(*(int *)(this + 0x297) + 0x1b) = uStack_c;
    *(undefined4 *)(*(int *)(this + 0x297) + 0x1f) = uStack_4;
    *(byte *)(*(int *)(this + 0x297) + 0xe) = (byte)this[0x29f] & 0xf;
    uVar4 = entENTITY::GetColor((entENTITY *)this,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0,1);
    *(ulong *)(*(int *)(this + 0x297) + 0x23) = uVar4;
    if ((*(byte *)(*(int *)(this + 0x297) + 0xd) & 0xf0) != 0) {
      *(uint *)(this + 0x88) = *(uint *)(this + 0x88) | 0x10;
    }
    if ((gsAppState & 0x800U) == 0) {
      (**(code **)(**(int **)(this + 0x377) + 0x11c))(*(int *)(this + 0x297));
      animINST::SetPosDir_XZ
                (*(animINST **)(*(int *)(this + 0x377) + 0xbc),(m3dV *)(this + 0x26b),
                 (m3dV *)(this + 0x25f));
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_anim.cpp
   addr: 004280E0 */

void __thiscall plrPLAYER_MP::AnimateProcedural(plrPLAYER_MP *this)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  float extraout_EDX;
  float *local_2c;
  float *local_28;
  float fStack_24;
  float *local_20;
  float *local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  m3dV amStack_c [12];
  
  local_20 = (float *)0x0;
  local_1c = (float *)0x0;
  local_28 = (float *)0x0;
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) == 0) {
    animINST::Invalidate(*(animINST **)(this + 0xbc),8);
    animINST::Validate(*(animINST **)(this + 0xbc),8);
    objValidateLTM(*(objOBJ **)(this + 0x2f7));
    uVar1 = *(uint *)(this + 0x29f);
    local_2c = (float *)0x0;
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 1) != 0) {
        if ((uVar1 & 4) == 0) {
          local_2c = (float *)0xc2200000;
          if ((uVar1 & 8) == 0) {
            local_2c = (float *)0x42700000;
          }
        }
        else {
          local_2c = (float *)0x42200000;
        }
      }
    }
    else if ((uVar1 & 4) == 0) {
      if ((uVar1 & 8) == 0) {
        local_2c = (float *)0xc2700000;
      }
      else {
        local_2c = (float *)0x42200000;
      }
    }
    else {
      local_2c = (float *)0xc2200000;
    }
    iVar3 = (**(code **)(*(int *)this + 0x78))();
    if (iVar3 != 0) {
      local_2c = (float *)0x0;
    }
    m3dLimitChange_Float
              ((float)&local_2c,*(float *)(this + 0x24f),*(float *)(this + 0x24f),local_2c);
    *(float **)(this + 0x24f) = local_2c;
    objOBJ::RotateGlbAxis(*(objOBJ **)(this + 0x2ef),(float)local_2c,&m3dVUnitY);
    animINST::GetDir(*(animINST **)(this + 0xbc),amStack_c);
    fStack_24 = m3xzAngleVector((m3dV *)(this + 0x25f),amStack_c);
    uStack_18 = _m3dVUnitY;
    fStack_24 = fStack_24 + (float)local_2c;
    uStack_14 = DAT_005f9994;
    uStack_10 = DAT_005f9998;
    m3dNormalize((m3dV *)&uStack_18);
    if ((((fStack_24 < ___real_00000000) || ((*(uint *)(this + 0x29f) & 2) != 0)) ||
        (___real_00000000 < fStack_24)) || ((*(uint *)(this + 0x29f) & 1) != 0)) {
      local_20 = (float *)(fStack_24 * ___real_bf0ccccd);
      local_1c = (float *)(fStack_24 * ___real_be99999a);
    }
    m3dLimitChange_Float((float)&local_20,*(float *)(this + 599),*(float *)(this + 599),local_20);
    m3dLimitChange_Float((float)&local_1c,extraout_EDX,*(float *)(this + 0x253),local_1c);
    objOBJ::RotateGlbAxis(*(objOBJ **)(this + 0x2f3),(float)local_20,(m3dV *)&uStack_18);
    objOBJ::RotateGlbAxis(*(objOBJ **)(this + 0x2f7),(float)local_1c,(m3dV *)&uStack_18);
    *(float **)(this + 0x253) = local_1c;
    *(float **)(this + 599) = local_20;
    animINST::GetDirRight(*(animINST **)(this + 0xbc),(m3dV *)&uStack_18);
    if (((byte)this[0x29f] & 1) == 0) {
      fVar2 = ___real_bf955555;
      if (___real_42b40000 < *(float *)(this + 0x24b)) {
        fVar2 = ___real_becccccd;
      }
      local_28 = (float *)((*(float *)(this + 0x24b) - ___real_42b40000) * fVar2);
    }
    else {
      local_28 = (float *)0x0;
    }
    iVar3 = (**(code **)(*(int *)this + 0x78))();
    if (iVar3 != 0) {
      local_28 = (float *)0x0;
    }
    m3dLimitChange_Float
              ((float)&local_28,*(float *)(this + 0x25b),*(float *)(this + 0x25b),local_28);
    fVar2 = (float)local_28 * ___real_3f266666;
    *(float **)(this + 0x25b) = local_28;
    objOBJ::RotateGlbAxis(*(objOBJ **)(this + 0x2f3),fVar2,(m3dV *)&uStack_18);
    objOBJ::RotateGlbAxis
              (*(objOBJ **)(this + 0x2f7),(float)local_28 * ___real_3e4ccccd,(m3dV *)&uStack_18);
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  }
  return;
}

