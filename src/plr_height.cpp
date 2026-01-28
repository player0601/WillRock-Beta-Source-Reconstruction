
/* from: plr_height.cpp
   addr: 00428410 */

plrHEIGHT_CTRL * __thiscall plrHEIGHT_CTRL::plrHEIGHT_CTRL(plrHEIGHT_CTRL *this)

{
  m3dSPL *this_00;
  
  *(undefined4 *)(this + 0xc) = 0xbf800000;
  *(undefined4 *)(this + 0x10) = 0xbf800000;
  *(undefined4 *)this = 0x3fcccccd;
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)(this + 8) = 0x3fcccccd;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0x3df5c28f;
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 != (m3dSPL *)0x0) {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 4;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 0x1c;
    *(undefined4 *)(this_00 + 0x18) = 0x1c;
    *(undefined4 *)(this_00 + 0x1c) = 2;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_BEZIER2D::_vftable_;
    m3dSPL::AllocKpList(this_00,3);
    *(m3dSPL **)(this + 0x14) = this_00;
    return this;
  }
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_height.cpp
   addr: 004284B0 */

void __thiscall plrHEIGHT_CTRL::ApplySpeed(plrHEIGHT_CTRL *this,float param_1)

{
  bool bVar1;
  float fVar2;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  undefined4 local_8;
  float local_4;
  
  if (*(float *)(this + 0x10) <= ___real_00000000) {
    fVar2 = ___real_3f0ccccd;
    if ((___real_c1a00000 <= param_1) && (fVar2 = ___real_3d4ccccd, param_1 <= ___real_c0400000)) {
      fVar2 = ___real_3f0ccccd - (param_1 - ___real_c1a00000) * ___real_3cf0f0f1;
    }
    *(float *)(this + 0x10) = fVar2;
    bVar1 = ___real_c2200000 <= param_1;
    *(undefined4 *)(this + 0xc) = 0;
    local_10 = 0;
    local_c = 1.0;
    local_8 = 0;
    local_4 = 1.0;
    local_18 = 0;
    if (bVar1) {
      if (param_1 <= ___real_00000000) {
        local_14 = (param_1 - ___real_c2200000) * ___real_3c23d70a + ___real_3f19999a;
      }
      else {
        local_14 = 1.0;
      }
    }
    else {
      local_14 = 0.6;
    }
    m3dSPL_BEZIER2D::SetKp
              (*(m3dSPL_BEZIER2D **)(this + 0x14),0,0.0,(m2dV *)&local_10,(m2dV *)&local_8,
               (m2dV *)&local_18);
    local_10 = 0x3f800000;
    local_14 = ___real_3f000000;
    if ((___real_c2200000 <= param_1) && (local_14 = ___real_3f800000, param_1 <= ___real_00000000))
    {
      local_14 = (param_1 - ___real_c2200000) * ___real_3c4ccccd + ___real_3f000000;
    }
    local_8 = 0x3f59999a;
    local_18 = 0x3f933333;
    local_c = local_14;
    local_4 = local_14;
    m3dSPL_BEZIER2D::SetKp
              (*(m3dSPL_BEZIER2D **)(this + 0x14),1,*(float *)(this + 0x10) * ___real_3f000000,
               (m2dV *)&local_10,(m2dV *)&local_8,(m2dV *)&local_18);
    local_10 = 0x40000000;
    local_c = 1.0;
    local_8 = 0x3ff33333;
    local_4 = 1.0;
    local_18 = 0x40066666;
    local_14 = 1.0;
    m3dSPL_BEZIER2D::SetKp
              (*(m3dSPL_BEZIER2D **)(this + 0x14),2,*(float *)(this + 0x10),(m2dV *)&local_10,
               (m2dV *)&local_8,(m2dV *)&local_18);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_height.cpp
   addr: 004286A0 */

float __thiscall plrHEIGHT_CTRL::Update(plrHEIGHT_CTRL *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_10;
  float local_c;
  float local_8 [2];
  
  if ((*(uint *)(plrPlayer + 0x29b) & 0x200) == 0) {
    fVar1 = *(float *)(this + 0x18) - gsElapsedTime;
  }
  else {
    fVar1 = gsElapsedTime + *(float *)(this + 0x18);
  }
  *(float *)(this + 0x18) = fVar1;
  fVar1 = *(float *)(this + 0x18);
  fVar2 = *(float *)(this + 0x1c);
  local_10 = 0.0;
  if (fVar1 < ___real_00000000) {
    local_10 = fVar1;
    fVar1 = ___real_00000000;
  }
  fVar3 = local_10;
  if ((local_10 <= fVar2) && (fVar3 = fVar1, fVar2 <= fVar1)) {
    fVar3 = fVar2;
  }
  *(float *)(this + 0x18) = fVar3;
  fVar1 = *(float *)(this + 0x1c);
  local_c = 0.0;
  fVar2 = *(float *)(this + 4);
  local_10 = *(float *)(this + 8);
  if (fVar1 < ___real_00000000) {
    fVar2 = *(float *)(this + 8);
    local_10 = *(float *)(this + 4);
    local_c = fVar1;
    fVar1 = ___real_00000000;
  }
  fVar1 = ((fVar3 - local_c) * (fVar2 - local_10)) / (fVar1 - local_c) + local_10;
  *(float *)this = fVar1;
  if (___real_00000000 <= *(float *)(this + 0x10)) {
    local_8[0] = gsElapsedTime + *(float *)(this + 0xc);
    *(float *)(this + 0xc) = local_8[0];
    if (*(float *)(this + 0x10) < local_8[0]) {
      *(undefined4 *)(this + 0x10) = 0xbf800000;
      return fVar1;
    }
    (**(code **)(**(int **)(this + 0x14) + 0x10))
              (local_8[0] / *(float *)(this + 0x10) + local_8[0] / *(float *)(this + 0x10),local_8,0
              );
    fVar1 = local_10 * *(float *)this;
  }
  return fVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_height.cpp
   addr: 004287F0 */

void __thiscall plrCAM_CTRL::plrCAM_CTRL(plrCAM_CTRL *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x10) = _m3dVZero;
  *(undefined4 *)(this + 0x14) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_height.cpp
   addr: 00428830 */

float __thiscall plrCAM_CTRL::GetZoomStrength(plrCAM_CTRL *this)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)fptan((float10)*(float *)(this + 8) * (float10)_DAT_005d0b28 *
                         (float10)___real_3bb60b61);
  fVar2 = (float10)fptan((float10)*(float *)(gsCameraPtr + 0x14c) * (float10)_DAT_005d0b28 *
                         (float10)___real_3bb60b61);
  return (float)(fVar1 / fVar2);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_height.cpp
   addr: 00428870 */

void __thiscall plrCAM_CTRL::ZoomNotify(plrCAM_CTRL *this,int param_1)

{
  float fVar1;
  
  if (param_1 == 0) {
    if (*(int *)this != 0) {
      *(undefined4 *)this = 2;
      return;
    }
  }
  else {
    if (*(int *)this == 0) {
      *(undefined4 *)this = 1;
      fVar1 = *(float *)(gsCameraPtr + 0x14c);
      *(float *)(this + 8) = fVar1;
      fVar1 = fVar1 - ___real_425c0000;
      *(undefined4 *)(this + 0xc) = 0;
      *(float *)(this + 4) = fVar1;
      return;
    }
    camCAMERA::SetAngleHor(gsCameraPtr,*(float *)(this + 8));
    *(undefined4 *)this = 0;
  }
  return;
}




/* from: plr_height.cpp
   addr: 004288D0 */

void __thiscall plrCAM_CTRL::ZoomClear(plrCAM_CTRL *this)

{
  if (*(int *)this != 0) {
    camCAMERA::SetAngleHor(gsCameraPtr,*(float *)(this + 8));
    *(undefined4 *)this = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_height.cpp
   addr: 004288F0 */

void __thiscall plrCAM_CTRL::ShootNotify(plrCAM_CTRL *this,int param_1)

{
  byte bVar1;
  float extraout_ECX;
  float extraout_ECX_00;
  float fVar2;
  
  if (*(float *)(this + 0x20) <= _DAT_005d0b20) {
    *(undefined4 *)(this + 0x1c) = 0;
    if (param_1 - 1U < 10) {
      bVar1 = *(byte *)((int)&PTR_caseD_3_004289c4 + param_1 + 3);
      switch(param_1) {
      case 1:
        *(undefined4 *)(this + 0x20) = 0x3d8f5c29;
        fVar2 = m3dRandRange(0.0,(float)(uint)bVar1);
        *(float *)(this + 0x10) = fVar2;
        fVar2 = m3dRandMax(extraout_ECX);
        *(float *)(this + 0x14) = fVar2;
        fVar2 = m3dRandMax(extraout_ECX_00);
        *(float *)(this + 0x18) = -fVar2;
        return;
      case 2:
        *(undefined4 *)(this + 0x20) = 0x3eb33333;
        *(undefined4 *)(this + 0x14) = 0x3cf5c28f;
        *(undefined4 *)(this + 0x18) = 0xbe4ccccd;
        *(undefined4 *)(this + 0x10) = 0;
        return;
      case 6:
        *(undefined4 *)(this + 0x20) = 0x3f000000;
        *(undefined4 *)(this + 0x18) = 0xbe4ccccd;
        *(undefined4 *)(this + 0x14) = 0x3dcccccd;
        *(undefined4 *)(this + 0x10) = 0;
        return;
      case 10:
        *(undefined4 *)(this + 0x20) = 0;
        *(undefined4 *)(this + 0x18) = 0xbf000000;
        *(undefined4 *)(this + 0x14) = 0x3dcccccd;
        *(undefined4 *)(this + 0x10) = 0;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_height.cpp
   addr: 004289E0 */

void __thiscall plrCAM_CTRL::DeathNotify(plrCAM_CTRL *this,int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x40) = 0x3f800000;
  uVar1 = ___real_c1200000;
  if (param_1 != 0) {
    uVar1 = ___real_00000000;
  }
  *(undefined4 *)(this + 0x3c) = uVar1;
  camCAMERA::GetOrigin(gsCameraPtr,(m3dV *)(this + 0x24));
  camCAMERA::GetLookAt(gsCameraPtr,(m3dV *)(this + 0x30));
  return;
}




/* from: plr_height.cpp
   addr: 00428A40 */

void __thiscall
plrCAM_CTRL::PowerupNotify
          (plrCAM_CTRL *this,int param_1,plrPLAYER_TRALTAR_INFO *param_2,objOBJ *param_3)

{
  if (param_1 == 0) {
    *(undefined4 *)(this + 0x44) = 0;
    return;
  }
  *(undefined4 *)(this + 0x44) = 1;
  *(objOBJ **)(this + 0x48) = param_3;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_height.cpp
   addr: 00428A70 */

void __thiscall plrCAM_CTRL::Update(plrCAM_CTRL *this)

{
  float fVar1;
  float fVar2;
  m3dV *pmVar3;
  m3dV *pmVar4;
  float fVar5;
  float fVar6;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined **local_24;
  undefined4 local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  m3dV local_c [12];
  
  local_1c = 0.0;
  local_24 = &cdtREFINE::_vftable_;
  local_20 = 2;
  if (_DAT_005d0b20 < *(float *)(this + 0x40)) {
    fVar1 = gsElapsedTime + *(float *)(this + 0x3c);
    *(float *)(this + 0x3c) = fVar1;
    if (*(float *)(this + 0x40) < fVar1) {
      *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x40);
    }
    animINST::GetPos(*(animINST **)(plrPlayer + 0xbc),(m3dV *)&local_30);
    animINST::GetDirRight(*(animINST **)(plrPlayer + 0xbc),(m3dV *)&local_48);
    local_44 = 0.0;
    m3dNormalize((m3dV *)&local_48);
    local_60 = local_48 * ___real_3fd9999a + local_30;
    local_58 = local_40 * ___real_3fd9999a + local_28;
    local_5c = local_44 * ___real_3fd9999a + local_2c + ___real_40000000;
    if ((*(float *)(this + 0x3c) < ___real_00000000) ||
       (*(float *)(this + 0x40) - ___real_3dcccccd < *(float *)(this + 0x3c))) {
      *(float *)(this + 0x24) = local_60;
      *(float *)(this + 0x28) = local_5c;
      *(float *)(this + 0x2c) = local_58;
    }
    pmVar4 = (m3dV *)(this + 0x24);
    m3dClampVector_L(pmVar4,(m3dV *)&local_60,gsElapsedTime * ___real_40a00000,(m3dV *)&local_6c);
    scnSCENE::ConstrSphere
              (gsScenePtr,pmVar4,(m3dV *)&local_6c,0.55,0x10,(cdtREFINE *)&local_24,(cdtINFO *)0x0);
    camCAMERA::MoveTo(gsCameraPtr,(m3dV *)&local_6c);
    *(float *)pmVar4 = local_6c;
    *(float *)(this + 0x28) = local_68;
    *(undefined4 *)(this + 0x2c) = local_64;
    (**(code **)(*(int *)plrPlayer + 0x68))(&local_3c);
    local_3c = local_3c + ___real_3f800000;
    local_1c = local_40 - local_70;
    fStack_18 = local_3c - local_6c;
    fStack_14 = fStack_38 - local_68;
    m3dClampVector_A((m3dV *)(this + 0x30),(m3dV *)&local_1c,gsElapsedTime * ___real_43160000,
                     (m3dV *)&local_58,(m3dV *)0x0,0);
    camCAMERA::SetLookAt(gsCameraPtr,(m3dV *)&local_58);
    *(float *)(this + 0x30) = local_58;
    *(undefined4 *)(this + 0x34) = local_54;
    *(undefined4 *)(this + 0x38) = uStack_50;
    return;
  }
  if (*(int *)(this + 0x44) != 0) {
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x48),(m3dV *)&local_6c);
    camCAMERA::MoveTo(gsCameraPtr,(m3dV *)&local_6c);
    objOBJ::GetAxisZ(*(objOBJ **)(this + 0x48),(m3dV *)&local_54);
    camCAMERA::SetLookAt(gsCameraPtr,(m3dV *)&local_54);
    return;
  }
  if (*(int *)this == 1) {
    fVar1 = gsElapsedTime + *(float *)(this + 0xc);
    *(float *)(this + 0xc) = fVar1;
    local_74 = *(float *)(this + 4) - fVar1 * ___real_42340000;
    if (local_74 < ___real_41280000 != (local_74 == ___real_41280000)) {
      local_74 = 10.5;
      *(undefined4 *)this = 2;
    }
    camCAMERA::SetAngleHor(gsCameraPtr,local_74);
  }
  if (_DAT_005d0b20 <= *(float *)(this + 0x20)) {
    fVar1 = gsElapsedTime + *(float *)(this + 0x1c);
    *(float *)(this + 0x1c) = fVar1;
    if (*(float *)(this + 0x20) < fVar1) {
      *(undefined4 *)(this + 0x20) = 0;
      return;
    }
    fVar2 = *(float *)(this + 0x20) * ___real_3f000000;
    if (fVar2 <= fVar1) {
      fVar6 = *(float *)(this + 0x20);
      pmVar3 = (m3dV *)(this + 0x10);
      pmVar4 = &m3dVZero;
      fVar5 = fVar2;
    }
    else {
      pmVar4 = (m3dV *)(this + 0x10);
      pmVar3 = &m3dVZero;
      fVar5 = 0.0;
      fVar6 = fVar2;
    }
    m3dLerpVector_L(pmVar3,pmVar4,fVar5,fVar6,fVar1,local_c);
    camCAMERA::MoveRel(gsCameraPtr,local_c);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plr_height.cpp
   addr: 00428DD0 */

void __thiscall m3dSPL_BEZIER2D::SetKpValue(m3dSPL_BEZIER2D *this,int param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar4 = param_1;
  }
  iVar2 = *(int *)(this + 0x18);
  iVar3 = *(int *)(this + 0x24);
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)(iVar2 * iVar4 + 4 + iVar3) = *param_2;
  *(undefined4 *)(iVar2 * iVar4 + 8 + iVar3) = *(undefined4 *)((int)param_2 + 4);
  iVar4 = *(int *)(this + 0x10);
  if (param_1 < *(int *)(this + 0x10)) {
    iVar4 = param_1;
  }
  puVar1 = (undefined4 *)(*(int *)(this + 0x18) * iVar4 + 0x14 + *(int *)(this + 0x24));
  *puVar1 = _m2dVZero;
  puVar1[1] = DAT_00963758;
  if (*(int *)(this + 0x10) <= param_1) {
    param_1 = *(int *)(this + 0x10);
  }
  iVar4 = *(int *)(this + 0x18);
  iVar2 = *(int *)(this + 0x24);
  *(undefined4 *)(iVar4 * param_1 + 0xc + iVar2) = *puVar1;
  *(undefined4 *)(iVar4 * param_1 + 0x10 + iVar2) = puVar1[1];
  return;
}

