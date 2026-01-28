
/* from: plw_bsk.cpp
   addr: 00407E20 */

int __fastcall pwpBSKInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pwp_bsk,0x5042534b,0x50,pwpBASOOKA::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_bsk_bullet,0x5042534b,0x2d,pwpBSK_BULLET::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pwpBASOOKA::pTexExplos = txmMANAGER::Add(txmManager,s_sfx_bsk_explos,0x40003,1);
  if (pwpBASOOKA::pTexExplos == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpBASOOKA::pTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_bsk_scorch_mark,0x40003,1);
  if (pwpBASOOKA::pTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpBASOOKA::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_bsk_smoke,0x40003,1);
  if (pwpBASOOKA::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpBASOOKA::pTexTrail = txmMANAGER::Add(txmManager,s_sfx_cloud,0x40003,1);
  if (pwpBASOOKA::pTexTrail == (txmTEXTURE *)0x0) {
    return 0;
  }
  pwpBASOOKA::pTexRipple = txmMANAGER::Add(txmManager,s_sfx_ripple,0x40003,1);
  if (pwpBASOOKA::pTexRipple == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(4,(sncSOUND_DESCR_3D *)&DAT_00602008);
  return (uint)(iVar1 != 0);
}




/* from: plw_bsk.cpp
   addr: 00407F20 */

entENTITY * __fastcall pwpBSK_BULLET::Create(animINST *param_1)

{
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x194);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x16b) = 0;
    *(undefined4 *)(this + 0x16f) = 0xffffffff;
    *(undefined4 *)(this + 0x173) = 0xffffffff;
    *(undefined4 *)(this + 0x177) = 0xffffffff;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x167) = 0xbf800000;
    *(undefined4 *)(this + 0x17b) = 0xbf800000;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bsk.cpp
   addr: 00407FA0 */

int __thiscall pwpBASOOKA::ProcessINIT(pwpBASOOKA *this)

{
  int iVar1;
  entENTITY *peVar2;
  int iVar3;
  objOBJ *poVar4;
  objMOD_TEX_FRAME_ANIM *poVar5;
  m3dV amStack_a8 [12];
  animCREATE_DATA aaStack_9c [4];
  animCREATE_DATA local_98 [14];
  m3dMATR amStack_8a [138];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  iVar1 = pwpWEAPON::ProcessINIT((pwpWEAPON *)this);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x18b) = 0xffffffff;
  *(undefined4 *)(this + 399) = 0xffffffff;
  *(undefined4 *)(this + 0x197) = 2;
  (**(code **)(*(int *)this + 0xa0))(0x3f36db6e);
  *(undefined4 *)(this + 0x15b) = 0x42b40000;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
  wpnWEAPON::SetAmmo((wpnWEAPON *)this,0.0);
  objOBJ::AllocVertNormalList(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10));
  wpnWEAPON::GetOrgDirTip((wpnWEAPON *)this,(m3dV *)&stack0xffffff4c,amStack_a8);
  m3dMATR::MakeLCS2WCS_VZ(amStack_8a,(m3dV *)&stack0xffffff4c,amStack_a8);
  peVar2 = entCreate(gsScenePtr,s_dynamic,s_sfx_bsk_smoke,aaStack_9c,(void *)0x0,0);
  *(entENTITY **)(this + 0x1b3) = peVar2;
  if (peVar2 == (entENTITY *)0x0) {
    return 0;
  }
  objOBJ::SetStateRendYes(*(objOBJ **)(*(int *)(peVar2 + 0xbc) + 0x10),0x1000000);
  objOBJ::SetStateYes(*(objOBJ **)(*(int *)(*(int *)(this + 0x1b3) + 0xbc) + 0x10),0x10);
  *(uint *)(*(int *)(*(int *)(this + 0x1b3) + 0xbc) + 4) =
       *(uint *)(*(int *)(*(int *)(this + 0x1b3) + 0xbc) + 4) | 0x10;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x1b3) + 0xbc) + 0x138) + 0x90);
  *(float *)(iVar1 + 0x50) = *(float *)(iVar1 + 0x50) * ___real_3eb33333;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(this + 0x1b3) + 0xbc) + 0x138) + 0x90);
  iVar3 = ftol();
  *(int *)(iVar1 + 0x58) = iVar3 + 1;
  dynDYNAMIC::StartAnim
            (*(dynDYNAMIC **)(this + 0x1b3),0,
             *(float *)(*(int *)(*(int *)(*(int *)(*(dynDYNAMIC **)(this + 0x1b3) + 0xbc) + 0x138) +
                                0x90) + 0x50) * ___real_3a83126f,0);
  *(uint *)(*(int *)(this + 0x1b3) + 0xb4) = *(uint *)(*(int *)(this + 0x1b3) + 0xb4) | 4;
  poVar4 = objFindName(*(objOBJ **)(*(int *)(*(int *)(this + 0x1b3) + 0xbc) + 0x10),s__bb__trl_flame
                      );
  if (poVar4 == (objOBJ *)0x0) {
    return 0;
  }
  poVar5 = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
  if (poVar5 == (objMOD_TEX_FRAME_ANIM *)0x0) {
    poVar5 = (objMOD_TEX_FRAME_ANIM *)0x0;
  }
  else {
    poVar5 = (objMOD_TEX_FRAME_ANIM *)objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(poVar5,0);
  }
  *(objMOD_TEX_FRAME_ANIM **)(this + 0x1af) = poVar5;
  objMOD_TEX_FRAME_ANIM::SetParams(poVar5,4,4,0.25,0.0,-1,-1.0,-1.0,0);
  (**(code **)(**(int **)(this + 0x1af) + 4))(poVar4);
  *(undefined4 *)(this + 0x157) = 0x42c80000;
  poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_rocket);
  *(objOBJ **)(this + 0x1b7) = poVar4;
  return (uint)(poVar4 != (objOBJ *)0x0);
}




/* from: plw_bsk.cpp
   addr: 00408200 */

void __thiscall pwpBASOOKA::ProcessTERM(pwpBASOOKA *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b3);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & 0xfffffffb;
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x1b3),2,(msgADDR *)0x0);
  }
  m3dTerm2DMatr();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bsk.cpp
   addr: 00408240 */

void __thiscall pwpBASOOKA::ProcessFRAME(pwpBASOOKA *this)

{
  objMOD_TEX_FRAME_ANIM *this_00;
  int iVar1;
  m3dV local_c [12];
  
  wpnWEAPON::ProcessFRAME((wpnWEAPON *)this);
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 1) == 0) {
    iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,0);
    if (iVar1 == 0) {
      if ((___real_00000000 < *(float *)(this + 0x17f)) &&
         ((iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),7,1), iVar1 != 0 ||
          (iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),6,1), iVar1 != 0)))) {
        objOBJ::SetStateProcNo(*(objOBJ **)(this + 0x1b7),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
      }
    }
    else {
      objOBJ::SetStateProcYes(*(objOBJ **)(this + 0x1b7),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    if ((*(byte *)(*(int *)(*(int *)(this + 0x1b3) + 0xbc) + 0x28) & 1) != 0) {
      this_00 = *(objMOD_TEX_FRAME_ANIM **)(this + 0x1af);
      *(undefined4 *)(this_00 + 0x3c) = 0;
      *(undefined4 *)(this_00 + 0x48) = 0;
      objMOD_TEX_FRAME_ANIM::ApplyFrameNmb(this_00,0);
    }
    wpnWEAPON::GetOrgDirTip((wpnWEAPON *)this,local_c,(m3dV *)0x0);
    animINST::SetPos(*(animINST **)(*(int *)(this + 0x1b3) + 0xbc),local_c);
    return;
  }
  return;
}




/* from: plw_bsk.cpp
   addr: 00408330 */

int __thiscall pwpBASOOKA::Shoot(pwpBASOOKA *this,entENTITY *param_1,m3dV *param_2)

{
  int iVar1;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_2c = 0;
  local_2b = 0x40;
  local_28 = 6;
  local_2a = 0x2c;
  iVar1 = wpnWEAPON::Shoot((wpnWEAPON *)this,*(entENTITY **)(this + 0x187),param_2);
  if (iVar1 == 0) {
    return 0;
  }
  wpnWEAPON::GetOrgDirTip((wpnWEAPON *)this,(m3dV *)&local_38,(m3dV *)&local_44);
  local_44 = *(float *)param_2 - local_38;
  local_40 = *(float *)(param_2 + 4) - local_34;
  local_3c = *(float *)(param_2 + 8) - local_30;
  m3dNormalize((m3dV *)&local_44);
  local_1c = *(undefined4 *)(param_2 + 8);
  local_24 = *(undefined4 *)param_2;
  local_20 = *(undefined4 *)(param_2 + 4);
  local_10 = local_30;
  local_18 = local_38;
  local_4 = local_3c;
  local_14 = local_34;
  local_c = local_44;
  local_8 = local_40;
  (**(code **)(*(int *)gsSysClient + 0x2c))(plrPlayer,0x4c6,&local_2c,0x20000);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bsk.cpp
   addr: 00408420 */

void __thiscall pwpBASOOKA::ProcessSHOOT(pwpBASOOKA *this,void *param_1)

{
  float10 fVar1;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR amStack_86 [134];
  
  local_e8 = _m3dVZero;
  local_dc = _m3dVZero;
  local_cc = DAT_005cef7c;
  local_e4 = DAT_00963740;
  local_d8 = DAT_00963740;
  local_e0 = DAT_00963744;
  local_d4 = DAT_00963744;
  local_d0 = 0x3dcccccd;
  local_c8 = 1;
  local_c4 = 0;
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = -1.0;
  local_b0 = 0;
  local_ac = 0xffffffff;
  local_a8 = 0xffffffff;
  local_a4 = 0xffffffff;
  local_a0 = 0xbf800000;
  local_9c = 1;
  local_ec = 7.461634e-39;
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (((byte)this[0x88] & 4) != 0) {
    (**(code **)(*(int *)this + 0x68))(0x3f800000);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,*(entIACTIVE_OBJ **)(this + 0x187),0x4c6,(msgDATA *)param_1,0x90000,
               0xffffffff,0xfffffffd);
    local_ec = *(float *)((int)param_1 + 0x20) * ___real_42480000;
    local_d0 = 0x41c80000;
    local_c4 = 0;
    local_c8 = 0;
    local_e8 = *(float *)((int)param_1 + 0x24) * ___real_42480000;
    local_cc = 1000;
    local_d4 = 0.2;
    local_e4 = *(float *)((int)param_1 + 0x28) * ___real_42480000;
    local_e0 = *(float *)((int)param_1 + 0x20) * ___real_42480000;
    local_dc = *(float *)((int)param_1 + 0x24) * ___real_42480000;
    local_d8 = *(float *)((int)param_1 + 0x28) * ___real_42480000;
    fVar1 = (float10)(**(code **)(*(int *)this + 0xa4))();
    local_b0 = 0x40a00000;
    local_b4 = (float)fVar1;
    local_a8 = 0;
    local_ac = 6;
    local_a4 = *(undefined4 *)(*(int *)(this + 0x187) + 0x8c);
    m3dMATR::MakeLCS2WCS_VZ(amStack_86,(m3dV *)((int)param_1 + 0x14),(m3dV *)((int)param_1 + 0x20));
    entCreate(gsScenePtr,s_sfx_bsk_bullet,s_sfx_bsk_bullet,local_98,&local_ec,0);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    animINST::SetPos(*(animINST **)(*(int *)(this + 0x1b3) + 0xbc),(m3dV *)((int)param_1 + 0x14));
    dynDYNAMIC::StartAnim(*(dynDYNAMIC **)(this + 0x1b3),0,0.0,0);
  }
  (**(code **)(**(int **)(this + 0x183) + 4))(&DAT_00602008,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bsk.cpp
   addr: 00408640 */

pwpBSK_EXPLOS * __thiscall pwpBSK_EXPLOS::pwpBSK_EXPLOS(pwpBSK_EXPLOS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x37,80.0,1.0);
  *(undefined ***)this = &_vftable_;
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,0,8,1);
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,80.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.20833333,80.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.625,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,4.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.0,0.0);
  fVar2 = param_1 * ___real_40400000;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar2,param_1 * ___real_00000000,(m3dSPL_LINEAR1D *)0x0,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,4,4,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 2;
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  fVar3 = param_1 * ___real_3f4ccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb4) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xe8) = param_1;
  *(float *)(this + 0xb8) = fVar3;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0x42aa0000;
  *(undefined4 *)(this + 0xfc) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpBASOOKA::pTexExplos);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,10.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bsk.cpp
   addr: 004087E0 */

pwpBSK_TRAIL * __thiscall pwpBSK_TRAIL::pwpBSK_TRAIL(pwpBSK_TRAIL *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,1.0);
  *(undefined ***)this = &_vftable_;
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.083333336,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,0.16666667,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,3,0.625,100.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,100.0,(m3dSPL_LINEAR1D *)pmVar4);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.8,0.2);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.05);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.5,0.45);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,0.65);
  fVar2 = param_1 * ___real_00000000;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3e800000,fVar2,(m3dSPL_LINEAR1D *)pmVar4,1.0
            );
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.15,102.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,180.0);
  fVar3 = param_1 * ___real_3ca3d70a;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xcc) = fVar3;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xd0) = fVar2;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pwpBASOOKA::pTexTrail);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bsk.cpp
   addr: 00408A30 */

int __thiscall pwpBSK_PJL_SFX::StartSFX(pwpBSK_PJL_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  animINST *this_00;
  undefined4 uVar1;
  pteSPOT *this_01;
  m3dCTRL_3D *pmVar2;
  pwpBSK_TRAIL *this_02;
  int iVar3;
  m3dCOLOR amStack_30 [16];
  undefined4 local_20;
  
  this_00 = *(animINST **)(param_1 + 0xbc);
  animINST::SetAnimSeq(this_00,0,0.0);
  objOBJ::SetTransparency(*(objOBJ **)(this_00 + 0x10),0x80,'\0');
  this_01 = (pteSPOT *)operator_new(0x108);
  if (this_01 == (pteSPOT *)0x0) {
    this_01 = (pteSPOT *)0x0;
  }
  else {
    pteSPOT::pteSPOT(this_01,1);
    *(undefined4 *)(this_01 + 0xf8) = 0;
    *(undefined4 *)(this_01 + 0xfc) = 0;
    *(undefined4 *)(this_01 + 0x100) = 0;
    *(undefined4 *)(this_01 + 0x104) = 0;
    *(undefined ***)this_01 = &pteSPOT_ANIM::_vftable_;
  }
  *(pteSPOT **)(this + 4) = this_01;
  if (this_01 == (pteSPOT *)0x0) {
    return 0;
  }
  pmVar2 = (m3dCTRL_3D *)operator_new(0x2c);
  if (pmVar2 == (m3dCTRL_3D *)0x0) {
    pmVar2 = (m3dCTRL_3D *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0x3f800000;
    *(undefined4 *)(pmVar2 + 0x10) = 0x3f800000;
    *(undefined4 *)(pmVar2 + 0x14) = 0;
    *(undefined ***)pmVar2 = &m3dCTRL_TIME::_vftable_;
    *(uint *)(pmVar2 + 4) = *(uint *)(pmVar2 + 4) | 1;
    *(undefined4 *)(pmVar2 + 0x18) = _m3dVZero;
    *(undefined4 *)(pmVar2 + 0x1c) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(animINST **)(pmVar2 + 0x24) = this_00;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x20) = uVar1;
    *(undefined ***)pmVar2 = &animCTRL_3D_FOLLOW::_vftable_;
    *(undefined4 *)(pmVar2 + 0x14) = 2;
  }
  pteSPOT_ANIM::SetCtrlPos(*(pteSPOT_ANIM **)(this + 4),pmVar2);
  pteSPOT::SetRadius(*(pteSPOT **)(this + 4),7.0);
  local_20 = 0x42aa0000;
  m3dCOLOR::m3dCOLOR(amStack_30,0xffffc850);
  pteSPOT::SetColor(*(pteSPOT **)(this + 4));
  pteSHADER::Register(*(pteSHADER **)(this + 4));
  this_02 = (pwpBSK_TRAIL *)operator_new(0x2c0);
  if (this_02 == (pwpBSK_TRAIL *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = pwpBSK_TRAIL::pwpBSK_TRAIL(this_02,1.0);
  }
  *(int *)this = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  animINST::GetPos(this_00,(m3dV *)(this + 8));
  local_20 = 0x408ba3;
  partEMITTER_PHYS::SetPosDirSpeed
            (*(partEMITTER_PHYS **)this,(m3dV *)(this + 8),(m3dV *)0x0,(m3dV *)0x0);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bsk.cpp
   addr: 00408BC0 */

int __thiscall pwpBSK_BULLET::ProcessINIT(pwpBSK_BULLET *this,physINIT *param_1)

{
  physMATH *this_00;
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  objOBJ *this_01;
  sncCHANNEL *this_02;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  m3dV local_8c [12];
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  iVar2 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x173) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x17b) = *(undefined4 *)(param_1 + 0x4c);
  this[0x17f] = *(pwpBSK_BULLET *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if ((*(int *)(param_1 + 0x48) != -1) &&
       (peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4),
       peVar3 != (entIACTIVE_OBJ *)0x0)) {
      physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar3);
    }
    *(undefined4 *)(this + 0x177) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pwpBSK_PJL_SFX::StartSFX
              ((pwpBSK_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_BULLET);
  this_00 = *(physMATH **)(this + 0x14f);
  local_a4 = *(float *)(this_00 + 0x48) * ___real_bf800000;
  local_a0 = *(float *)(this_00 + 0x4c) * ___real_bf800000;
  local_9c = *(float *)(this_00 + 0x50) * ___real_bf800000;
  physMATH::GetPos(this_00,local_8c);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  m3dMATR::GetScale((m3dMATR *)(this_01 + 0x3c),&local_94,&local_90,&local_98);
  m3dMATR::Identity(local_80);
  m3dMATR::MakeLCS2WCS_VY(local_80,local_8c,(m3dV *)&local_a4);
  m3dMATR::Scale(local_80,local_94,local_90,local_98,1);
  m3dMATR::Invert((m3dMATR *)(*(int *)(this_01 + 0x2c) + 0x3c),local_40);
  m3dMultiplyMatr(local_80,local_40,(m3dMATR *)(this_01 + 0x7c));
  objOBJ::DeclareProcAnim(this_01);
  animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  if (*(int *)(gsSysMP + 0x28) != 4) {
    this_02 = (sncCHANNEL *)operator_new(0xbc);
    if (this_02 == (sncCHANNEL *)0x0) {
      this_02 = (sncCHANNEL *)0x0;
    }
    else {
      sncCHANNEL::sncCHANNEL(this_02);
      *(undefined4 *)(this_02 + 0x74) = _m3dVZero;
      *(undefined4 *)(this_02 + 0x78) = DAT_00963740;
      uVar1 = DAT_00963744;
      *(undefined4 *)(this_02 + 0x80) = 0;
      *(undefined ***)this_02 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_02 + 0x7c) = uVar1;
      *(undefined4 *)(this_02 + 0x84) = 0x41200000;
      *(undefined4 *)(this_02 + 0x88) = 0x42340000;
      *(undefined4 *)(this_02 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_02 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_02 + 0x94) = 0;
      *(undefined4 *)(this_02 + 0x98) = _m3dVZero;
      *(undefined4 *)(this_02 + 0x9c) = DAT_00963740;
      *(undefined4 *)(this_02 + 0xa0) = DAT_00963744;
      *(undefined4 *)(this_02 + 0xa4) = _m3dVZero;
      *(undefined4 *)(this_02 + 0xa8) = DAT_00963740;
      *(undefined4 *)(this_02 + 0xac) = DAT_00963744;
      *(undefined4 *)(this_02 + 0xb0) = _m3dVUnitZ;
      *(undefined4 *)(this_02 + 0xb4) = DAT_005f99a0;
      uVar1 = DAT_005f99a4;
      *(undefined ***)this_02 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_02 + 0xb8) = uVar1;
    }
    *(sncCHANNEL **)(this + 400) = this_02;
    if (this_02 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_02,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
    (**(code **)(**(int **)(this + 400) + 4))(&DAT_00602070,0);
  }
  return 1;
}




/* from: plw_bsk.cpp
   addr: 00408ED0 */

void __thiscall pwpBSK_BULLET::ShowCollisSFX(pwpBSK_BULLET *this,pjlEV_CDT *param_1)

{
  undefined4 *puVar1;
  pwpBSK_EXPLOS *this_00;
  partEMITTER_PHYS *this_01;
  m3dSPL *this_02;
  m3dCTRL_TIME *this_03;
  sncSOUND_DESCR_3D *psVar2;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  if (*(int *)(this + 0x157) == 0) {
    return;
  }
  animINST::GetPos(*(animINST **)(this + 0xbc),local_a4);
  if (*(int *)(param_1 + 8) == 0) {
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),&m3dVUnitY);
    entCreate(gsScenePtr,s_sfx_water_expl,s_sfx_water_expl,local_98,(void *)0x0,0);
    if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x157))(1);
    }
    psVar2 = (sncSOUND_DESCR_3D *)&DAT_00602140;
  }
  else {
    this_00 = (pwpBSK_EXPLOS *)operator_new(0x2c0);
    if (this_00 == (pwpBSK_EXPLOS *)0x0) {
      return;
    }
    this_01 = (partEMITTER_PHYS *)pwpBSK_EXPLOS::pwpBSK_EXPLOS(this_00,1.0);
    if (this_01 == (partEMITTER_PHYS *)0x0) {
      return;
    }
    partEMITTER_PHYS::SetPosDirSpeed(this_01,local_a4,(m3dV *)(param_1 + 0x18),(m3dV *)0x0);
    partEMITTER_PHYS::StartEmission(this_01);
    wrsfxSCORCHMARK::Add
              ((float)pwpBASOOKA::pTexScorchMark,(float)(param_1 + 0xc),(txmTEXTURE *)0x40400000,
               (m3dV *)0x41200000,*(ulong *)(param_1 + 0x24),0x5343524d,0.0,0.0);
    this_02 = (m3dSPL *)operator_new(0x34);
    if (this_02 == (m3dSPL *)0x0) {
      this_02 = (m3dSPL *)0x0;
    }
    else {
      *(undefined4 *)(this_02 + 4) = 0;
      *(undefined4 *)(this_02 + 8) = 0;
      *(undefined4 *)(this_02 + 0xc) = 0;
      *(undefined4 *)(this_02 + 0x14) = 8;
      *(undefined4 *)(this_02 + 0x18) = 8;
      *(undefined4 *)(this_02 + 0x1c) = 1;
      *(undefined4 *)(this_02 + 0x20) = 0;
      *(undefined4 *)(this_02 + 0x24) = 0;
      *(undefined4 *)(this_02 + 0x28) = 0;
      *(undefined4 *)(this_02 + 0x2c) = 0;
      *(undefined4 *)(this_02 + 0x30) = 0;
      *(undefined ***)this_02 = &m3dSPL_LINEAR1D::_vftable_;
      m3dSPL::AllocKpList(this_02,4);
    }
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_02,0,0.0,7.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_02,1,0.1,14.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_02,2,0.2,14.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_02,3,1.0,0.0);
    this_03 = (m3dCTRL_TIME *)operator_new(0x20);
    if (this_03 == (m3dCTRL_TIME *)0x0) {
      this_03 = (m3dCTRL_TIME *)0x0;
    }
    else {
      m3dCTRL_TIME::m3dCTRL_TIME(this_03,1.5);
      *(undefined4 *)(this_03 + 0x18) = 0;
      *(m3dSPL **)(this_03 + 0x1c) = this_02;
      *(undefined ***)this_03 = &m3dCTRL_1D_SPL::_vftable_;
    }
    *(uint *)((m3dCTRL_1D *)this_03 + 4) = *(uint *)((m3dCTRL_1D *)this_03 + 4) | 6;
    pteSPOT_ANIM::SetCtrlRad(*(pteSPOT_ANIM **)(this + 0x157),(m3dCTRL_1D *)this_03);
    pteSPOT_ANIM::SetCurTime(*(pteSPOT_ANIM **)(this + 0x157),0.0);
    *(uint *)(*(int *)(this + 0x157) + 0xf4) = *(uint *)(*(int *)(this + 0x157) + 0xf4) | 4;
    psVar2 = (sncSOUND_DESCR_3D *)&DAT_006020d8;
    *(uint *)(*(int *)(this + 0x157) + 4) = *(uint *)(*(int *)(this + 0x157) + 4) | 0x40;
  }
  *(undefined4 *)(this + 0x157) = 0;
  gsSND_SYSTEM::Play(gsSysSound,psVar2,local_a4);
  puVar1 = *(undefined4 **)(this + 0x157);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this + 0x157) = 0;
  }
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  return;
}




/* from: plw_bsk.cpp
   addr: 00409130
   addr: 00409130
   addr: 00409130
   addr: 00409130 */

void * __thiscall
pjlPJL<struct_pwpBSK_PJL_SFX>::_vector_deleting_destructor_
          (pjlPJL<struct_pwpBSK_PJL_SFX> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: plw_bsk.cpp
   addr: 00409160 */

int __thiscall
pjlPJL<struct_pwpBSK_PJL_SFX>::ProcessINIT(pjlPJL<struct_pwpBSK_PJL_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x173) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x17b) = *(undefined4 *)(param_1 + 0x4c);
  this[0x17f] = *(pjlPJL<struct_pwpBSK_PJL_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x177) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pwpBSK_PJL_SFX::StartSFX
              ((pwpBSK_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: plw_bsk.cpp
   addr: 00409210 */

void __thiscall pjlPJL<struct_pwpBSK_PJL_SFX>::ProcessTERM(pjlPJL<struct_pwpBSK_PJL_SFX> *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x157);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this + 0x157) = 0;
  }
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bsk.cpp
   addr: 00409270 */

void __thiscall pjlPJL<struct_pwpBSK_PJL_SFX>::ProcessFRAME(pjlPJL<struct_pwpBSK_PJL_SFX> *this)

{
  animINST *this_00;
  float fVar1;
  uchar uVar2;
  ulonglong uVar3;
  undefined8 extraout_MM1;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float local_c;
  float local_8;
  float local_4;
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    this_00 = *(animINST **)(this + 0xbc);
    animINST::Validate(this_00,4);
    animINST::GetPos(this_00,(m3dV *)&local_c);
    animINST::AdvanceTime(this_00,gsElapsedTime,(uint)(*(int *)(this_00 + 0xe0) != 0),(float *)0x0);
    fVar1 = (local_c - *(float *)(this + 0x15b)) * (local_c - *(float *)(this + 0x15b)) +
            (local_8 - *(float *)(this + 0x15f)) * (local_8 - *(float *)(this + 0x15f)) +
            (local_4 - *(float *)(this + 0x163)) * (local_4 - *(float *)(this + 0x163));
    if (m3dSimdType == 0) {
      auVar6 = ZEXT416((uint)(fVar1 + `float___cdecl_m3dSqrt(float)'::__l2::very_small));
      rsqrtss(auVar6,auVar6);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar3 = (ulonglong)(uint)fVar1;
      uVar4 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar3);
      uVar5 = PackedFloatingMUL(uVar4,uVar4);
      uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
      uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
      PackedFloatingMUL(uVar4,uVar3);
      FastExitMediaState();
    }
    uVar2 = ftol();
    objOBJ::SetTransparency(*(objOBJ **)(this_00 + 0x10),0x80,uVar2);
    if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x153),(m3dV *)&local_c,(m3dV *)0x0,(m3dV *)0x0);
    }
  }
  return;
}




/* from: plw_bsk.cpp
   addr: 00409410 */

void __thiscall
pjlPJL<struct_pwpBSK_PJL_SFX>::DispatchDamage(pjlPJL<struct_pwpBSK_PJL_SFX> *this,cdtINFO *param_1)

{
  if (this[0x17f] != (pjlPJL<struct_pwpBSK_PJL_SFX>)0x0) {
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)(param_1 + 0x10),*(float *)(this + 0x167),
               *(float *)(this + 0x16b),*(int *)(this + 0x173),*(int *)(this + 0x16f),param_1,
               *(ulong *)(this + 0x177),(dmgDISPATCHER *)0x0);
    return;
  }
  if (*(animINST **)(param_1 + 4) != (animINST *)0x0) {
    dmgDispatchExplosDamageInst
              (*(animINST **)(param_1 + 4),(entENTITY *)this,(m3dV *)(param_1 + 0x10),
               *(float *)(this + 0x167),*(float *)(this + 0x16b),*(int *)(this + 0x173),
               *(int *)(this + 0x16f),param_1,*(ulong *)(this + 0x177),(dmgDISPATCHER *)0x0);
  }
  return;
}




/* from: plw_bsk.cpp
   addr: 004094A0 */

void __thiscall pjlPJL<struct_pwpBSK_PJL_SFX>::Terminate(pjlPJL<struct_pwpBSK_PJL_SFX> *this)

{
  if (*(int *)(this + 0x17b) == -0x40800000) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    return;
  }
  msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,*(float *)(this + 0x17b));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: plw_bsk.cpp
   addr: 004094E0 */

void __thiscall
pjlPJL<struct_pwpBSK_PJL_SFX>::ProcessEV_CDT(pjlPJL<struct_pwpBSK_PJL_SFX> *this,pjlEV_CDT *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(uint *)(this + 0x180) = *(uint *)(this + 0x180) | 1;
  puVar1 = *(undefined4 **)(this + 0x157);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this + 0x157) = 0;
  }
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  iVar2 = *(int *)(this + 0x14f);
  *(undefined4 *)(iVar2 + 0x48) = _m3dVZero;
  *(undefined4 *)(iVar2 + 0x4c) = DAT_00963740;
  *(undefined4 *)(iVar2 + 0x50) = DAT_00963744;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* from: plw_bsk.cpp
   addr: 004095A0 */

void __thiscall m3dCTRL_TIME::m3dCTRL_TIME(m3dCTRL_TIME *this,float param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(float *)(this + 0xc) = param_1;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined ***)this = &_vftable_;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  return;
}




/* from: plw_bsk.cpp
   addr: 004095D0 */

entENTITY * __fastcall pwpBASOOKA::Create(animINST *param_1)

{
  wpnWEAPON *this;
  
  this = (wpnWEAPON *)operator_new(0x1bb);
  if (this != (wpnWEAPON *)0x0) {
    wpnWEAPON::wpnWEAPON(this);
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 0x187) = 0;
    *(undefined4 *)(this + 0x1af) = 0;
    *(undefined4 *)(this + 0x1b3) = 0;
    *(undefined4 *)(this + 0x1b7) = 0;
    *(undefined4 *)(this + 0x1a7) = 0x3f800000;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 6;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

