
/* from: ai_cerber_pjl.cpp
   addr: 00437560 */

int __fastcall aiCerberPjlTexturesInit(void)

{
  aiCERBER_GENERIC::pTexBurn = txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_burn,0x40003,1);
  if (aiCERBER_GENERIC::pTexBurn == (txmTEXTURE *)0x0) {
    return 0;
  }
  aiCERBER_GENERIC::pTexAcid = txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_acd,0x40003,1);
  return (uint)(aiCERBER_GENERIC::pTexAcid != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber_pjl.cpp
   addr: 004375B0 */

pjlCERBER_BURN * __thiscall pjlCERBER_BURN::pjlCERBER_BURN(pjlCERBER_BURN *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,66.666664,0.6);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,66.666664,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.55,0.05);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_40600000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_4080cccd,param_1 * ___real_3fc99999,
             (m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,229.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiCERBER_GENERIC::pTexBurn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,120.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xe8) = param_1;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f19999a;
  *(undefined4 *)(this + 0xd0) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x200;
  *(uint *)(this + 4) = uVar1 | 0x609;
  *(uint *)(this + 4) = uVar1 | 0x619;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,4.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber_pjl.cpp
   addr: 00437780 */

pjlCERBER_ACID_EMITTER * __thiscall
pjlCERBER_ACID_EMITTER::pjlCERBER_ACID_EMITTER(pjlCERBER_ACID_EMITTER *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,25.0,0.6);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_40800000);
  fVar2 = param_1 * ___real_41000000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,200.175);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiCERBER_GENERIC::pTexAcid);
  fVar2 = param_1 * ___real_3df5c28f;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 * ___real_40555555;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3ecccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_3f000000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x419;
  *(uint *)(this + 4) = uVar1 | 0x619;
  return this;
}




/* from: ai_cerber_pjl.cpp
   addr: 00437920 */

int __thiscall
pjlCERBER_FIREBALL_SFX::StartSFX
          (pjlCERBER_FIREBALL_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  physMATH *this_00;
  animINST *this_01;
  pjlCERBER_BURN *this_02;
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  animINST::SetAnimSeq(*(animINST **)(param_1 + 0xbc),0,0.0);
  this_02 = (pjlCERBER_BURN *)operator_new(0x2c0);
  if (this_02 == (pjlCERBER_BURN *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = pjlCERBER_BURN::pjlCERBER_BURN(this_02,0.1);
  }
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  this_00 = *(physMATH **)(param_1 + 0x14f);
  this_01 = *(animINST **)(param_1 + 0xbc);
  local_18 = *(undefined4 *)(this_00 + 0x48);
  local_14 = *(undefined4 *)(this_00 + 0x4c);
  local_10 = *(undefined4 *)(this_00 + 0x50);
  physMATH::GetPos(this_00,local_c);
  partEMITTER_PHYS::SetPosDirSpeed(*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)&local_18)
  ;
  animINST::AdvanceTime(this_01,gsElapsedTime,0,(float *)0x0);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* from: ai_cerber_pjl.cpp
   addr: 004379D0 */

void __thiscall pjlCERBER_FIREBALL_SFX::UpdateSFX(pjlCERBER_FIREBALL_SFX *this,physPHYS *param_1)

{
  physMATH *this_00;
  animINST *this_01;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  this_00 = *(physMATH **)(param_1 + 0x14f);
  this_01 = *(animINST **)(param_1 + 0xbc);
  if (*(int *)this != 0) {
    local_18 = *(undefined4 *)(this_00 + 0x48);
    local_14 = *(undefined4 *)(this_00 + 0x4c);
    local_10 = *(undefined4 *)(this_00 + 0x50);
    physMATH::GetPos(this_00,local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)&local_18);
  }
  animINST::AdvanceTime(this_01,gsElapsedTime,0,(float *)0x0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber_pjl.cpp
   addr: 00437A40 */

int __thiscall pjlCERBER_FIREBALL::ProcessINIT(pjlCERBER_FIREBALL *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  sncCHANNEL *this_00;
  undefined **local_68;
  undefined4 local_64;
  undefined4 local_60;
  m3dV local_5c [4];
  float local_58;
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
  
  iVar2 = pjlPJL<struct_pjlCERBER_FIREBALL_SFX>::ProcessINIT
                    ((pjlPJL<struct_pjlCERBER_FIREBALL_SFX> *)this,param_1);
  if (iVar2 != 0) {
    if ((((byte)this[0x88] & 4) != 0) && (*(int *)(param_1 + 0x48) != -1)) {
      peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar3 != (entIACTIVE_OBJ *)0x0) {
        local_60 = *(undefined4 *)(peVar3 + 0xbc);
        local_34 = _m3dVZero;
        local_68 = &cdtREFINE::_vftable_;
        local_64 = 2;
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
        animINST::GetPos(*(animINST **)(peVar3 + 0xbc),local_5c);
        animINST::GetPos(*(animINST **)(this + 0xbc),local_50);
        local_58 = local_58 + ___real_3fc00000;
        iVar2 = scnSCENE::IsVisiblePoint
                          (gsScenePtr,local_5c,local_50,0,(cdtREFINE *)&local_68,
                           (cdtINFO *)&local_44);
        if (iVar2 == 0) {
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
    }
    *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
    AlignWithSpeed(this);
    this_00 = (sncCHANNEL *)operator_new(0xbc);
    if (this_00 == (sncCHANNEL *)0x0) {
      this_00 = (sncCHANNEL *)0x0;
    }
    else {
      sncCHANNEL::sncCHANNEL(this_00);
      *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
      uVar1 = DAT_00963744;
      *(undefined4 *)(this_00 + 0x80) = 0;
      *(undefined4 *)(this_00 + 0x8c) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x90) = 0x43b40000;
      *(undefined4 *)(this_00 + 0x7c) = uVar1;
      *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_00 + 0x84) = 0x41200000;
      *(undefined4 *)(this_00 + 0x88) = 0x42820000;
      *(undefined4 *)(this_00 + 0x94) = 0;
      *(undefined4 *)(this_00 + 0x98) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x9c) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xa0) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xa4) = _m3dVZero;
      *(undefined4 *)(this_00 + 0xa8) = DAT_00963740;
      *(undefined4 *)(this_00 + 0xac) = DAT_00963744;
      *(undefined4 *)(this_00 + 0xb0) = _m3dVUnitZ;
      *(undefined4 *)(this_00 + 0xb4) = DAT_005f99a0;
      uVar1 = DAT_005f99a4;
      *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_00 + 0xb8) = uVar1;
    }
    *(sncCHANNEL **)(this + 0x1a0) = this_00;
    if (this_00 != (sncCHANNEL *)0x0) {
      gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
      return 1;
    }
  }
  return 0;
}




/* from: ai_cerber_pjl.cpp
   addr: 00437CE0 */

void __thiscall pjlCERBER_FIREBALL::AlignWithSpeed(pjlCERBER_FIREBALL *this)

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
    m3dMATR::MakeLCS2WCS_VY(local_80,local_8c,(m3dV *)&local_98);
    m3dMATR::Scale(local_80,local_9c,local_a4,local_a0,1);
    m3dMATR::Invert((m3dMATR *)(*(int *)(this_01 + 0x2c) + 0x3c),local_40);
    m3dMultiplyMatr(local_80,local_40,(m3dMATR *)(this_01 + 0x7c));
    objOBJ::DeclareProcAnim(this_01);
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  }
  return;
}




/* from: ai_cerber_pjl.cpp
   addr: 00437DD0 */

void __thiscall pjlCERBER_FIREBALL::ProcessFRAME(pjlCERBER_FIREBALL *this)

{
  physMATH *this_00;
  animINST *this_01;
  uint uVar1;
  int iVar2;
  sncSOUND_DESCR_3D *psVar3;
  m3dV *pmVar4;
  undefined4 uVar5;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  m3dV amStack_18 [12];
  m3dV local_c [12];
  
  iVar2 = _apCfgReadBool((void **)&DAT_0060ae30,s_Debug,s_Decomp_OFF_AI,&local_28);
  if ((iVar2 == 0) || (local_28 == 0)) {
    if (((byte)gsSysCinema[0x80] & 1) == 0) {
      physPHYS::ProcessFRAME((physPHYS *)this);
      this_00 = *(physMATH **)(this + 0x14f);
      this_01 = *(animINST **)(this + 0xbc);
      if (*(int *)(this + 0x153) != 0) {
        local_24 = *(undefined4 *)(this_00 + 0x48);
        local_20 = *(undefined4 *)(this_00 + 0x4c);
        local_1c = *(undefined4 *)(this_00 + 0x50);
        physMATH::GetPos(this_00,local_c);
        partEMITTER_PHYS::SetPosDirSpeed
                  (*(partEMITTER_PHYS **)(this + 0x153),local_c,(m3dV *)0x0,(m3dV *)&local_24);
      }
      animINST::AdvanceTime(this_01,gsElapsedTime,0,(float *)0x0);
    }
    iVar2 = (**(code **)(*(int *)this + 0x90))();
    if (*(int *)(this + 0x178) != iVar2) {
      local_1c = 0;
      local_20 = 7;
      local_24 = 0xc4000;
      local_1c = (**(code **)(*(int *)this + 0x90))();
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&local_24,0x10000,0xfffffffd,
                 0xfffffffd);
      *(undefined4 *)(this + 0x178) = local_1c;
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_18);
    uVar1 = *(uint *)(this + 0x19c);
    if ((uVar1 & 0x100) != 0) {
      pmVar4 = amStack_18;
      psVar3 = aiCerberGetSound(9);
      gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar4);
      *(uint *)(this + 0x19c) = *(uint *)(this + 0x19c) & 0xfffffeff;
      return;
    }
    if ((uVar1 & 0x200) != 0) {
      pmVar4 = amStack_18;
      psVar3 = aiCerberGetSound(10);
      gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar4);
      *(uint *)(this + 0x19c) = *(uint *)(this + 0x19c) & 0xfffffdff;
      return;
    }
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
      iVar2 = **(int **)(this + 0x1a0);
      psVar3 = aiCerberGetSound(8);
      (**(code **)(iVar2 + 4))(psVar3,uVar5);
      return;
    }
    iVar2 = **(int **)(this + 0x1a0);
    psVar3 = aiCerberGetSound(8);
    iVar2 = (**(code **)(iVar2 + 8))(psVar3);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(this + 0x1a0) + 0xc))();
    }
  }
  return;
}




/* from: ai_cerber_pjl.cpp
   addr: 00437FE0 */

void __thiscall pjlCERBER_FIREBALL::ShowCollisSFX(pjlCERBER_FIREBALL *this,pjlEV_CDT *param_1)

{
  uint uVar1;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  uVar1 = *(uint *)(this + 0x19c);
  *(uint *)(this + 0x19c) = uVar1 | 1;
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11((char)(uVar1 >> 8),(char)(uVar1 | 1))) | 0x100;
  }
  else {
    uVar1 = uVar1 | 0x201;
  }
  *(uint *)(this + 0x19c) = uVar1;
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
  local_9c = 0x3e4ccccd;
  entCreate(gsScenePtr,s_sfx_cerber_pjl_expl,s_sfx_cerber_pjl_expl,local_98,&local_9c,0);
  return;
}




/* from: ai_cerber_pjl.cpp
   addr: 00438070 */

int __thiscall
pjlCERBER_ACID_SFX::StartSFX(pjlCERBER_ACID_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  physMATH *this_00;
  pjlCERBER_ACID_EMITTER *this_01;
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  this_01 = (pjlCERBER_ACID_EMITTER *)operator_new(0x2c0);
  if (this_01 == (pjlCERBER_ACID_EMITTER *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = pjlCERBER_ACID_EMITTER::pjlCERBER_ACID_EMITTER(this_01,0.1);
  }
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  this_00 = *(physMATH **)(param_1 + 0x14f);
  local_18 = *(undefined4 *)(this_00 + 0x48);
  local_14 = *(undefined4 *)(this_00 + 0x4c);
  local_10 = *(undefined4 *)(this_00 + 0x50);
  physMATH::GetPos(this_00,local_c);
  partEMITTER_PHYS::SetPosDirSpeed(*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)&local_18)
  ;
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* from: ai_cerber_pjl.cpp
   addr: 00438100 */

void __thiscall pjlCERBER_ACID_SFX::StopSFX(pjlCERBER_ACID_SFX *this,physPHYS *param_1)

{
  if (*(undefined4 **)this != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)this)(1);
    *(undefined4 *)this = 0;
  }
  return;
}




/* from: ai_cerber_pjl.cpp
   addr: 00438120 */

void __thiscall pjlCERBER_ACID_SFX::UpdateSFX(pjlCERBER_ACID_SFX *this,physPHYS *param_1)

{
  physMATH *this_00;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  if (*(int *)this != 0) {
    this_00 = *(physMATH **)(param_1 + 0x14f);
    local_18 = *(undefined4 *)(this_00 + 0x48);
    local_14 = *(undefined4 *)(this_00 + 0x4c);
    local_10 = *(undefined4 *)(this_00 + 0x50);
    physMATH::GetPos(this_00,local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)&local_18);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber_pjl.cpp
   addr: 00438180 */

int __thiscall pjlCERBER_ACID::ProcessINIT(pjlCERBER_ACID *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  sncCHANNEL *this_00;
  undefined **local_68;
  undefined4 local_64;
  undefined4 local_60;
  m3dV local_5c [4];
  float local_58;
  m3dV local_50 [12];
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  pjlCDT local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = pjlPJL<struct_pjlCERBER_ACID_SFX>::ProcessINIT
                    ((pjlPJL<struct_pjlCERBER_ACID_SFX> *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (((((byte)this[0x88] & 4) != 0) && (*(int *)(param_1 + 0x48) != -1)) &&
     (peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4),
     peVar3 != (entIACTIVE_OBJ *)0x0)) {
    local_60 = *(undefined4 *)(peVar3 + 0xbc);
    local_34 = _m3dVZero;
    local_68 = &cdtREFINE::_vftable_;
    local_64 = 2;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = DAT_00963740;
    local_2c = DAT_00963744;
    local_28 = 0;
    pjlCDT::pjlCDT(local_24);
    animINST::GetPos(*(animINST **)(peVar3 + 0xbc),local_5c);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_50);
    local_58 = local_58 + ___real_3fc00000;
    iVar2 = scnSCENE::IsVisiblePoint
                      (gsScenePtr,local_5c,local_50,0,(cdtREFINE *)&local_68,(cdtINFO *)&local_44);
    if (iVar2 == 0) {
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
      msgSYSTEM::PostMsgData(&msgSystem,(msgADDR *)this,0x4d1,(msgDATA *)local_24,(msgADDR *)this);
    }
  }
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 2;
  if (*(int *)(gsSysMP + 0x28) != 4) {
    this_00 = (sncCHANNEL *)operator_new(0xbc);
    if (this_00 == (sncCHANNEL *)0x0) {
      this_00 = (sncCHANNEL *)0x0;
    }
    else {
      sncCHANNEL::sncCHANNEL(this_00);
      *(undefined4 *)(this_00 + 0x74) = _m3dVZero;
      *(undefined4 *)(this_00 + 0x78) = DAT_00963740;
      uVar1 = DAT_00963744;
      *(undefined4 *)(this_00 + 0x80) = 0;
      *(undefined ***)this_00 = &sncCHANNEL_3D::_vftable_;
      *(undefined4 *)(this_00 + 0x7c) = uVar1;
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
      uVar1 = DAT_005f99a4;
      *(undefined ***)this_00 = &sncCHANNEL_SPH::_vftable_;
      *(undefined4 *)(this_00 + 0xb8) = uVar1;
    }
    *(sncCHANNEL **)(this + 0x1a0) = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
  }
  return 1;
}




/* from: ai_cerber_pjl.cpp
   addr: 00438420 */

void __thiscall pjlCERBER_ACID::ProcessFRAME(pjlCERBER_ACID *this)

{
  physMATH *this_00;
  uint uVar1;
  int iVar2;
  sncSOUND_DESCR_3D *psVar3;
  m3dV *pmVar4;
  undefined4 uVar5;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  m3dV amStack_18 [12];
  m3dV local_c [12];
  
  iVar2 = _apCfgReadBool((void **)&DAT_0060ae3c,s_Debug,s_Decomp_OFF_AI,&local_28);
  if ((iVar2 == 0) || (local_28 == 0)) {
    if (((byte)gsSysCinema[0x80] & 1) == 0) {
      physPHYS::ProcessFRAME((physPHYS *)this);
      if (*(int *)(this + 0x153) != 0) {
        this_00 = *(physMATH **)(this + 0x14f);
        local_24 = *(undefined4 *)(this_00 + 0x48);
        local_20 = *(undefined4 *)(this_00 + 0x4c);
        local_1c = *(undefined4 *)(this_00 + 0x50);
        physMATH::GetPos(this_00,local_c);
        partEMITTER_PHYS::SetPosDirSpeed
                  (*(partEMITTER_PHYS **)(this + 0x153),local_c,(m3dV *)0x0,(m3dV *)&local_24);
      }
    }
    iVar2 = (**(code **)(*(int *)this + 0x90))();
    if (*(int *)(this + 0x178) != iVar2) {
      local_1c = 0;
      local_20 = 7;
      local_24 = 0xc4000;
      local_1c = (**(code **)(*(int *)this + 0x90))();
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&local_24,0x10000,0xfffffffd,
                 0xfffffffd);
      *(undefined4 *)(this + 0x178) = local_1c;
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_18);
    uVar1 = *(uint *)(this + 0x19c);
    if ((uVar1 & 0x100) != 0) {
      pmVar4 = amStack_18;
      psVar3 = aiCerberGetSound(0xc);
      gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar4);
      *(uint *)(this + 0x19c) = *(uint *)(this + 0x19c) & 0xfffffeff;
      return;
    }
    if ((uVar1 & 0x200) != 0) {
      pmVar4 = amStack_18;
      psVar3 = aiCerberGetSound(0xd);
      gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar4);
      *(uint *)(this + 0x19c) = *(uint *)(this + 0x19c) & 0xfffffdff;
      return;
    }
    if ((uVar1 & 1) == 0) {
      uVar5 = 0;
      iVar2 = **(int **)(this + 0x1a0);
      psVar3 = aiCerberGetSound(0xb);
      (**(code **)(iVar2 + 4))(psVar3,uVar5);
      return;
    }
    iVar2 = **(int **)(this + 0x1a0);
    psVar3 = aiCerberGetSound(0xb);
    iVar2 = (**(code **)(iVar2 + 8))(psVar3);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(this + 0x1a0) + 0xc))();
    }
  }
  return;
}




/* from: ai_cerber_pjl.cpp
   addr: 004385F0 */

void __thiscall pjlCERBER_ACID::ShowCollisSFX(pjlCERBER_ACID *this,pjlEV_CDT *param_1)

{
  uint uVar1;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  uVar1 = *(uint *)(this + 0x19c);
  *(uint *)(this + 0x19c) = uVar1 | 1;
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11((char)(uVar1 >> 8),(char)(uVar1 | 1))) | 0x100;
  }
  else {
    uVar1 = uVar1 | 0x201;
  }
  *(uint *)(this + 0x19c) = uVar1;
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
  local_9c = 0x3ecccccd;
  entCreate(gsScenePtr,s_sfx_cerber_pjl_acid_expl,s_,local_98,&local_9c,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber_pjl.cpp
   addr: 00438680 */

void __thiscall
aiCERBER_GENERIC::AimPjlToPlayer
          (aiCERBER_GENERIC *this,m3dV *param_1,physINIT *param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  local_14 = 0.0;
  if ((((byte)this[0x51b] & 0x10) == 0) &&
     (iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,30.0,(m3dV *)&local_24),
     iVar3 != 0)) {
    local_30 = local_24 - *(float *)param_1;
    local_2c = 0.0;
    local_28 = local_1c - *(float *)(param_1 + 8);
    m3dNormalize((m3dV *)&local_30);
    fVar9 = m3xzAngleVector((m3dV *)&local_30,(m3dV *)&local_18);
    if (*(float *)(this + 0x187) < ABS(fVar9)) {
      local_30 = local_18;
      local_2c = local_14;
      local_28 = local_10;
    }
  }
  else {
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_24);
    local_30 = local_18;
    local_2c = local_14;
    local_28 = local_10;
  }
  local_c = *(float *)param_1 - local_24;
  local_8 = 0.0;
  local_4 = *(float *)(param_1 + 8) - local_1c;
  m3dNormalize((m3dV *)&local_c);
  local_8 = local_8 * param_3;
  fVar9 = *(float *)param_1 - (local_c * param_3 + local_24);
  fVar7 = *(float *)(param_1 + 8) - (local_4 * param_3 + local_1c);
  fVar9 = fVar9 * fVar9 + fVar7 * fVar7;
  if (m3dSimdType == 0) {
    fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar7 = auVar8._0_4_;
    param_3 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
              (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar7 * fVar7) * fVar9;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar9;
    uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    param_3 = (float)uVar5;
    FastExitMediaState();
  }
  else {
    param_3 = SQRT(fVar9);
  }
  if (*(float *)(this + 0x18b) < param_3) {
    local_30 = local_18;
    local_2c = local_14;
    local_28 = local_10;
  }
  fVar9 = param_3 * ___real_3d088889;
  local_2c = local_2c * ___real_41f00000;
  local_28 = local_28 * ___real_41f00000;
  fVar7 = ___real_00000000;
  if (param_4 != 0) {
    fVar7 = ___real_c0e00000;
  }
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = fVar7 * fVar9 * fVar9 * ___real_3f000000;
  *(float *)(param_2 + 4) = local_30 * ___real_41f00000;
  *(float *)(param_2 + 8) = local_2c;
  *(float *)(param_2 + 0xc) = local_28;
  *(float *)(param_2 + 8) = (((local_8 + local_20) - fVar1) - fVar2) / fVar9;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * fVar7;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * fVar7;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * fVar7;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_cerber_pjl.cpp
   addr: 00438940 */

void __thiscall
aiCERBER_GENERIC::LaunchOneProjectile(aiCERBER_GENERIC *this,objOBJ *param_1,float param_2)

{
  entENTITY *peVar1;
  int iVar2;
  char *pcVar3;
  objOBJ *poVar4;
  undefined4 *puVar5;
  char *pcVar6;
  physINIT local_f8;
  undefined1 local_f7;
  undefined2 local_f6;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  undefined4 local_86 [33];
  
  local_f4 = _m3dVZero;
  local_e8 = _m3dVZero;
  local_d8 = DAT_005d2644;
  local_f0 = DAT_00963740;
  local_e4 = DAT_00963740;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
  local_d4 = 1;
  local_a8 = 1;
  local_f8 = (physINIT)0x0;
  local_f7 = 0x40;
  local_ec = DAT_00963744;
  local_e0 = DAT_00963744;
  local_dc = 0x3dcccccd;
  local_d0 = 0;
  local_cc = 0;
  local_c0 = 0xbf800000;
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_ac = 0xbf800000;
  local_f6 = 0x51;
  animCREATE_DATA::animCREATE_DATA(local_98);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(param_1,local_a4);
  local_b0 = *(undefined4 *)(this + 0x8c);
  poVar4 = param_1 + 0x3c;
  puVar5 = local_86;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *(undefined4 *)poVar4;
    poVar4 = poVar4 + 4;
    puVar5 = puVar5 + 1;
  }
  poVar4 = *(objOBJ **)(this + 0x567);
  local_dc = 0x3f19999a;
  local_d8 = 0x447a0000;
  local_d4 = 5;
  local_cc = 0x3f000000;
  local_d0 = 0x3f000000;
  local_b4 = 3;
  AimPjlToPlayer(this,local_a4,&local_f8,param_2,(uint)(param_1 == poVar4));
  if ((param_1 == poVar4) == 0) {
    local_c0 = 0x40400000;
    local_bc = 0x40400000;
    pcVar6 = s_pjl_cerber;
    pcVar3 = s_pjl_cerber_fireball;
  }
  else {
    local_c0 = 0x40a00000;
    local_bc = 0x3fc00000;
    pcVar6 = s_;
    pcVar3 = s_pjl_cerber_acid;
  }
  peVar1 = entCreate(gsScenePtr,pcVar3,pcVar6,local_98,&local_f8,0);
  if (peVar1 != (entENTITY *)0x0) {
    gsEffApplyLMChar(peVar1,(cdtINFO *)(this + 0x453),0);
  }
  return;
}

