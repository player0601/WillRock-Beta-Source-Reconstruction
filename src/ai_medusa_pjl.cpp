
/* from: ai_medusa_pjl.cpp
   addr: 00446A60 */

int __fastcall aiPjlMedusaInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pjl_medusa,0x4d445a41,0x32,pjlMEDUSA::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pjlMEDUSA::pTexFire = txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_burn,0x40003,1);
  if (pjlMEDUSA::pTexFire == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = wrsfxMedusaInit();
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa_pjl.cpp
   addr: 00446AB0 */

entENTITY * __fastcall pjlMEDUSA::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1b8);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xbf800000;
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xffffffff;
    *(undefined4 *)(this + 0x173) = 0xffffffff;
    *(undefined4 *)(this + 0x177) = 0xbf800000;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined ***)this = &pjlPJL<struct_pjlMEDUSA_SFX>::_vftable_;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = 0;
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x194) = _m3dVZero;
    *(undefined4 *)(this + 0x198) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x19c) = uVar1;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa_pjl.cpp
   addr: 00446B90 */

pjlMEDUSA_SFX_FIRE * __thiscall
pjlMEDUSA_SFX_FIRE::pjlMEDUSA_SFX_FIRE(pjlMEDUSA_SFX_FIRE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,250.0,0.3);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.25,0.05);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_40f00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_40100000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.2,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pjlMEDUSA::pTexFire);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_41000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  *(float *)(this + 0xec) = fVar2;
  fVar2 = param_1 * ___real_42200000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_41200000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x800419;
  *(uint *)(this + 4) = uVar1 | 0x800619;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa_pjl.cpp
   addr: 00446D70 */

pjlMEDUSA_SFX_TRAIL * __thiscall
pjlMEDUSA_SFX_TRAIL::pjlMEDUSA_SFX_TRAIL(pjlMEDUSA_SFX_TRAIL *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,200.0,0.5);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_40200000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar3 + 4) = 0;
    *(undefined4 *)(pmVar3 + 8) = 0;
    *(undefined4 *)(pmVar3 + 0xc) = 0;
    *(undefined4 *)(pmVar3 + 0x14) = 8;
    *(undefined4 *)(pmVar3 + 0x18) = 8;
    *(undefined4 *)(pmVar3 + 0x1c) = 1;
    *(undefined4 *)(pmVar3 + 0x20) = 0;
    *(undefined4 *)(pmVar3 + 0x24) = 0;
    *(undefined4 *)(pmVar3 + 0x28) = 0;
    *(undefined4 *)(pmVar3 + 0x2c) = 0;
    *(undefined4 *)(pmVar3 + 0x30) = 0;
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pjlMEDUSA::pTexFire);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x609;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* from: ai_medusa_pjl.cpp
   addr: 00446F00 */

int __thiscall pjlMEDUSA_SFX::StartSFX(pjlMEDUSA_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  float fVar1;
  animINST *this_00;
  pjlMEDUSA_SFX_FIRE *this_01;
  int iVar2;
  objOBJ *poVar3;
  pjlMEDUSA_SFX_TRAIL *this_02;
  
  fVar1 = *(float *)(param_2 + 0x55);
  this_00 = *(animINST **)(param_1 + 0xbc);
  animINST::Scale(this_00,fVar1,fVar1,fVar1,0);
  this_01 = (pjlMEDUSA_SFX_FIRE *)operator_new(0x2c0);
  if (this_01 == (pjlMEDUSA_SFX_FIRE *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = pjlMEDUSA_SFX_FIRE::pjlMEDUSA_SFX_FIRE(this_01,*(float *)(param_2 + 0x55));
  }
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(this_00 + 0x10),s_trail_emitter);
  *(objOBJ **)(this + 4) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  this_02 = (pjlMEDUSA_SFX_TRAIL *)operator_new(0x2c0);
  if (this_02 == (pjlMEDUSA_SFX_TRAIL *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = pjlMEDUSA_SFX_TRAIL::pjlMEDUSA_SFX_TRAIL(this_02,*(float *)(param_2 + 0x55));
  }
  *(int *)(this + 8) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(this_00 + 0x10),s_trail_emitter);
  *(objOBJ **)(this + 0xc) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  animINST::SetAnimSeq(this_00,0,0.0);
  UpdateSFX(this,param_1);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 8));
  return 1;
}




/* from: ai_medusa_pjl.cpp
   addr: 00446FF0
   addr: 00446FF0 */

void __thiscall pjlMEDUSA_SFX::UpdateSFX(pjlMEDUSA_SFX *this,physPHYS *param_1)

{
  animINST *this_00;
  objOBJ *this_01;
  int iVar1;
  objOBJ *poVar2;
  m3dMATR *pmVar3;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  m3dMATR local_40 [64];
  
  this_00 = *(animINST **)(param_1 + 0xbc);
  animINST::AdvanceTime(this_00,gsElapsedTime,0,(float *)0x0);
  animINST::Validate(this_00,4);
  if (*(int *)(this + 8) != 0) {
    objOBJ::GetOrigin(*(objOBJ **)(this + 0xc),(m3dV *)&local_64);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 8),(m3dV *)&local_64,(m3dV *)0x0,(m3dV *)0x0);
  }
  if (*(int *)this != 0) {
    this_01 = objFindName(*(objOBJ **)(*(int *)(param_1 + 0xbc) + 0x10),s_rot_center);
    poVar2 = this_01 + 0x3c;
    pmVar3 = local_40;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pmVar3 = *(undefined4 *)poVar2;
      poVar2 = poVar2 + 4;
      pmVar3 = pmVar3 + 4;
    }
    m3dMATR::RemoveScale(local_40);
    partEMITTER_PHYS::SetCS(*(partEMITTER_PHYS **)this,local_40);
    objOBJ::GetOrigin(this_01,(m3dV *)&local_4c);
    objOBJ::GetOrigin(*(objOBJ **)(this + 4),(m3dV *)&local_58);
    local_64 = local_58 - local_4c;
    local_60 = local_54 - local_48;
    local_5c = local_50 - local_44;
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,(m3dV *)&local_64,(m3dV *)0x0,(m3dV *)0x0);
  }
  return;
}




/* from: ai_medusa_pjl.cpp
   addr: 004470E0
   addr: 004470E0 */

void __thiscall pjlMEDUSA::AlignWithSpeed(pjlMEDUSA *this)

{
  physMATH *this_00;
  objOBJ *this_01;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  m3dV local_8c [12];
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_rot_center);
  if (this_01 != (objOBJ *)0x0) {
    this_00 = *(physMATH **)(this + 0x14f);
    local_98 = *(undefined4 *)(this_00 + 0x48);
    local_94 = *(undefined4 *)(this_00 + 0x4c);
    local_90 = *(undefined4 *)(this_00 + 0x50);
    physMATH::GetPos(this_00,local_8c);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    m3dMATR::GetScale((m3dMATR *)(this_01 + 0x3c),&local_9c,&local_a4,&local_a0);
    m3dMATR::Identity(local_80);
    m3dMATR::MakeLCS2WCS_VX(local_80,local_8c,(m3dV *)&local_98);
    m3dMATR::Scale(local_80,local_9c,local_a4,local_a0,1);
    m3dMATR::Invert((m3dMATR *)(*(int *)(this_01 + 0x2c) + 0x3c),local_40);
    m3dMultiplyMatr(local_80,local_40,(m3dMATR *)(this_01 + 0x7c));
    objOBJ::DeclareProcAnim(this_01);
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa_pjl.cpp
   addr: 004471F0 */

int __thiscall pjlMEDUSA::ProcessINIT(pjlMEDUSA *this,physINIT *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  entIACTIVE_OBJ *peVar4;
  sncCHANNEL *this_00;
  float fVar5;
  undefined **local_74;
  undefined4 local_70;
  undefined4 local_6c;
  m3dV local_68 [4];
  float local_64;
  m3dV local_5c [12];
  m3dV local_50 [12];
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  msgDATA local_24 [2];
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = pjlPJL<struct_pjlMEDUSA_SFX>::ProcessINIT((pjlPJL<struct_pjlMEDUSA_SFX> *)this,param_1);
  if (iVar3 != 0) {
    if (((((byte)this[0x88] & 4) != 0) && (*(int *)(param_1 + 0x48) != -1)) &&
       (peVar4 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4),
       peVar4 != (entIACTIVE_OBJ *)0x0)) {
      local_6c = *(undefined4 *)(peVar4 + 0xbc);
      local_34 = _m3dVZero;
      local_74 = &cdtREFINE::_vftable_;
      local_70 = 2;
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_30 = DAT_00963740;
      local_2c = DAT_00963744;
      local_28 = 0;
      msgDATA::msgDATA(local_24);
      local_20 = 0xffffffff;
      local_18 = 0xffffffff;
      local_14 = 0xffffffff;
      local_22 = 0x24;
      animINST::GetPos(*(animINST **)(peVar4 + 0xbc),local_68);
      animINST::GetPos(*(animINST **)(this + 0xbc),local_5c);
      local_64 = local_64 + ___real_3fc00000;
      iVar3 = scnSCENE::IsVisiblePoint
                        (gsScenePtr,local_68,local_5c,0,(cdtREFINE *)&local_74,(cdtINFO *)&local_44)
      ;
      if (iVar3 == 0) {
        if ((local_40 == 0) || (*(int *)(local_40 + 0x13c) == 0)) {
          local_20 = 0xffffffff;
        }
        else {
          local_20 = *(undefined4 *)(*(int *)(local_40 + 0x13c) + 0x8c);
        }
        local_18 = local_3c;
        local_1c = local_44;
        local_c = local_30;
        local_14 = local_38;
        local_10 = local_34;
        local_8 = local_2c;
        local_4 = local_28;
        msgSYSTEM::PostMsgData(&msgSystem,(msgADDR *)this,0x4d1,local_24,(msgADDR *)this);
      }
    }
    fVar5 = *(float *)(param_1 + 0x55);
    *(float *)(this + 0x1a8) = fVar5;
    fVar1 = *(float *)(param_1 + 0x59);
    *(float *)(this + 0x1ac) = fVar1;
    *(undefined4 *)(this + 0x1a4) = *(undefined4 *)(param_1 + 0x51);
    fVar5 = m3dRandRange(fVar5,fVar1);
    *(float *)(this + 0x1b0) = fVar5 + ___real_40a00000;
    fVar5 = entENTITY::GetDistToClosestPlayer((entENTITY *)this,1.5,local_50,(plgsACTION **)0x0);
    if (___real_00000000 < fVar5 - ___real_42700000) {
      *(float *)(this + 0x1b0) =
           (fVar5 - ___real_42700000) * ___real_40a00000 + *(float *)(this + 0x1b0);
    }
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
    this_00 = (sncCHANNEL *)operator_new(0xbc);
    if (this_00 == (sncCHANNEL *)0x0) {
      this_00 = (sncCHANNEL *)0x0;
    }
    else {
      sncCHANNEL::sncCHANNEL(this_00);
      *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
      uVar2 = DAT_00963744;
      *(undefined4 *)(this_00 + 0x80) = 0;
      *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_00 + 0x7c) = uVar2;
      *(undefined4 *)(this_00 + 0x84) = 0x41200000;
      *(undefined4 *)(this_00 + 0x88) = 0x42820000;
      *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x94) = 0;
      *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
      *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
      *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
      uVar2 = DAT_005f99a4;
      *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_00 + 0xb8) = uVar2;
    }
    *(sncCHANNEL **)(this + 0x1b4) = this_00;
    if (this_00 != (sncCHANNEL *)0x0) {
      gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa_pjl.cpp
   addr: 00447530 */

void __thiscall pjlMEDUSA::ProcessFRAME(pjlMEDUSA *this)

{
  uint uVar1;
  int iVar2;
  sncSOUND_DESCR_3D *psVar3;
  float extraout_EDX;
  m3dV *pmVar4;
  undefined4 uVar5;
  int local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  m3dV amStack_c [12];
  
  iVar2 = _apCfgReadBool((void **)&DAT_0060c254,s_Debug,s_Decomp_OFF_AI,&local_40);
  if ((iVar2 == 0) || (local_40 == 0)) {
    msgDATA::msgDATA((msgDATA *)&local_30);
    local_28 = 0.0;
    local_2c = 9.80909e-45;
    local_30 = (float)CONCAT22(0xc,(undefined2)local_30);
    if (((byte)gsSysCinema[0x80] & 1) == 0) {
      physPHYS::ProcessFRAME((physPHYS *)this);
      pjlMEDUSA_SFX::UpdateSFX((pjlMEDUSA_SFX *)(this + 0x153),(physPHYS *)this);
    }
    iVar2 = (**(code **)(*(int *)this + 0x90))();
    if (*(int *)(this + 0x180) != iVar2) {
      local_28 = 0.0;
      local_2c = 9.80909e-45;
      local_30 = 1.124985e-39;
      local_28 = (float)(**(code **)(*(int *)this + 0x90))();
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&local_30,0x10000,0xfffffffd,
                 0xfffffffd);
      *(float *)(this + 0x180) = local_28;
    }
    AlignWithSpeed(this);
    if (*(int *)(this + 0x1a4) == 0) {
      m3dUpdateTimeField((float *)(this + 0x1b0),extraout_EDX);
      physMATH::GetPos(*(physMATH **)(this + 0x14f),(m3dV *)&fStack_18);
      iVar2 = *(int *)(this + 0x14f);
      fStack_3c = *(float *)(iVar2 + 0x48);
      fStack_38 = *(float *)(iVar2 + 0x4c);
      fStack_34 = *(float *)(iVar2 + 0x50);
      entENTITY::GetDistToClosestPlayer((entENTITY *)this,1.5,(m3dV *)&fStack_24,(plgsACTION **)0x0)
      ;
      if (*(float *)(this + 0x1b0) <= ___real_00000000) {
        local_30 = -_m3dVUnitY;
        local_2c = -DAT_005f9994;
        local_28 = -DAT_005f9998;
      }
      else {
        local_30 = fStack_24 - fStack_18;
        local_2c = fStack_20 - fStack_14;
        local_28 = fStack_1c - fStack_10;
        m3dNormalize((m3dV *)&local_30);
      }
      fStack_3c = local_30 * ___real_3f333333 + fStack_3c;
      fStack_38 = local_2c * ___real_3f333333 + fStack_38;
      fStack_34 = local_28 * ___real_3f333333 + fStack_34;
      m3dNormalize((m3dV *)&fStack_3c);
      fStack_3c = fStack_3c * ___real_41700000;
      iVar2 = *(int *)(this + 0x14f);
      fStack_38 = fStack_38 * ___real_41700000;
      fStack_34 = fStack_34 * ___real_41700000;
      *(float *)(iVar2 + 0x48) = fStack_3c;
      *(float *)(iVar2 + 0x4c) = fStack_38;
      *(float *)(iVar2 + 0x50) = fStack_34;
    }
    else {
      iVar2 = m3dUpdateTimeField((float *)(this + 0x1ac),gsElapsedTime);
      if (iVar2 != 0) {
        Split(this);
        countMedusaPJLs = countMedusaPJLs + 1;
      }
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_c);
    uVar1 = *(uint *)(this + 0x17c);
    if ((uVar1 & 0x100) != 0) {
      pmVar4 = amStack_c;
      psVar3 = aiMedusaGetSound(5);
      gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar4);
      *(uint *)(this + 0x17c) = *(uint *)(this + 0x17c) & 0xfffffeff;
      return;
    }
    if ((uVar1 & 0x200) != 0) {
      pmVar4 = amStack_c;
      psVar3 = aiMedusaGetSound(6);
      gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar4);
      *(uint *)(this + 0x17c) = *(uint *)(this + 0x17c) & 0xfffffdff;
      return;
    }
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
      iVar2 = **(int **)(this + 0x1b4);
      psVar3 = aiMedusaGetSound(4);
      (**(code **)(iVar2 + 4))(psVar3,uVar5);
      return;
    }
    iVar2 = **(int **)(this + 0x1b4);
    psVar3 = aiMedusaGetSound(4);
    iVar2 = (**(code **)(iVar2 + 8))(psVar3);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(this + 0x1b4) + 0xc))();
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa_pjl.cpp
   addr: 00447870 */

void __thiscall pjlMEDUSA::ShowCollisSFX(pjlMEDUSA *this,pjlEV_CDT *param_1)

{
  uint uVar1;
  float fVar2;
  m3dV *pmVar3;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  pmVar3 = (m3dV *)(param_1 + 0x18);
  fVar2 = m3dAngleVector_COS(pmVar3,&m3dVUnitY);
  fVar2 = ABS(fVar2);
  if ((fVar2 <= ___real_3f333333) || (fVar2 < ___real_3f800000 == (fVar2 == ___real_3f800000))) {
    pmVar3 = &m3dVUnitY;
  }
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),pmVar3);
  entCreate(gsScenePtr,s_sfx_medusa_expl,s_sfx_medusa_expl,local_98,this + 0x1a8,0);
  uVar1 = *(uint *)(this + 0x17c);
  *(uint *)(this + 0x17c) = uVar1 | 1;
  if (*(int *)(param_1 + 8) != 1) {
    *(uint *)(this + 0x17c) = uVar1 | 0x201;
    return;
  }
  *(uint *)(this + 0x17c) =
       CONCAT22((short)(uVar1 >> 0x10),CONCAT11((char)(uVar1 >> 8),(char)(uVar1 | 1))) | 0x100;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_medusa_pjl.cpp
   addr: 00447950 */

void __thiscall pjlMEDUSA::Split(pjlMEDUSA *this)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  physINIT local_f8 [2];
  undefined2 local_f6;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  int local_a7;
  float local_a3;
  undefined4 local_9f;
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  physINIT::physINIT(local_f8);
  iVar4 = *(int *)(this + 0x14f);
  local_c0 = 0xbf800000;
  local_bc = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_ac = 0xbf800000;
  local_a8 = 1;
  local_a7 = 0;
  local_a3 = 0.1;
  local_9f = 0x3f000000;
  local_f6 = 0x5d;
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_a3 = *(float *)(this + 0x1a8) * ___real_3f4ccccd;
  local_b0 = *(undefined4 *)(this + 0x173);
  local_a7 = *(int *)(this + 0x1a4) + -1;
  iVar1 = *(int *)(this + 0x14f);
  local_dc = *(float *)(iVar4 + 0x78) * ___real_3f4ccccd;
  local_d8 = *(undefined4 *)(iVar4 + 0x7c);
  local_d4 = *(undefined4 *)(iVar4 + 0x80);
  fVar7 = (float10)fcos((float10)_DAT_005d3804 * (float10)___real_3e638e39);
  local_cc = *(undefined4 *)(iVar4 + 0x88);
  local_d0 = *(undefined4 *)(iVar4 + 0x84);
  local_e8 = *(undefined4 *)(iVar4 + 0x6c);
  local_e4 = *(undefined4 *)(iVar4 + 0x70);
  local_e0 = *(undefined4 *)(iVar4 + 0x74);
  local_c0 = 0x41f00000;
  local_bc = 0x40000000;
  local_b4 = 3;
  puVar5 = (undefined4 *)(iVar1 + 8);
  puVar6 = local_86;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x4c);
  fVar8 = (float10)fsin((float10)_DAT_005d3804 * (float10)___real_3e638e39);
  fVar3 = *(float *)(iVar1 + 0x50) * (float)fVar8;
  fVar9 = (float10)*(float *)(iVar1 + 0x48) * fVar7;
  local_f4 = (float)(fVar9 + (float10)fVar3);
  fVar7 = fVar7 * (float10)*(float *)(iVar1 + 0x50);
  fVar8 = (float10)*(float *)(iVar1 + 0x48) * (float10)(float)fVar8;
  local_ec = (float)(fVar7 - fVar8);
  local_f0 = uVar2;
  entCreate(gsScenePtr,s_pjl_medusa,s_pjl_medusa,local_98,local_f8,0);
  local_f4 = (float)fVar9 - fVar3;
  local_f0 = uVar2;
  local_ec = (float)(fVar8 + fVar7);
  entCreate(gsScenePtr,s_pjl_medusa,s_pjl_medusa,local_98,local_f8,0);
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* from: ai_medusa_pjl.cpp
   addr: 00447B80 */

void __thiscall pjlMEDUSA::ProcessTERM(pjlMEDUSA *this)

{
  countMedusaPJLs = countMedusaPJLs + -1;
  if (*(partEMITTER_PHYS **)(this + 0x15b) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x15b));
    *(undefined4 *)(this + 0x15b) = 0;
  }
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: ai_medusa_pjl.cpp
   addr: 00447BD0
   addr: 00447BD0
   addr: 00447BD0
   addr: 00447BD0 */

void * __thiscall
pjlPJL<struct_pjlMEDUSA_SFX>::_vector_deleting_destructor_
          (pjlPJL<struct_pjlMEDUSA_SFX> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: ai_medusa_pjl.cpp
   addr: 00447C00 */

int __thiscall
pjlPJL<struct_pjlMEDUSA_SFX>::ProcessINIT(pjlPJL<struct_pjlMEDUSA_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x177) = *(undefined4 *)(param_1 + 0x4c);
  this[0x17b] = *(pjlPJL<struct_pjlMEDUSA_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x173) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pjlMEDUSA_SFX::StartSFX((pjlMEDUSA_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1)
    ;
  }
  return 1;
}




/* from: ai_medusa_pjl.cpp
   addr: 00447CB0
   addr: 00447CB0 */

void __thiscall pjlPJL<struct_pjlZEVS_SFX>::ProcessFRAME(pjlPJL<struct_pjlZEVS_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    pjlMEDUSA_SFX::UpdateSFX((pjlMEDUSA_SFX *)(this + 0x153),(physPHYS *)this);
  }
  return;
}




/* from: ai_medusa_pjl.cpp
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0
   addr: 00447CE0 */

void __thiscall
pjlPJL<struct_pjlSPEAR_SFX>::ProcessMP_NOTIFY(pjlPJL<struct_pjlSPEAR_SFX> *this,gsEVENT *param_1)

{
  physPHYS::ProcessMP_NOTIFY((physPHYS *)this,param_1);
  if (*(int *)(param_1 + 4) == 0) {
    *(int *)(*(int *)(this + 0x14f) + 0xb0) = *(int *)(*(int *)(this + 0x14f) + 0xb0) + 1;
    (**(code **)(*(int *)this + 0x8c))(param_1);
  }
  return;
}

