
/* from: ai_skel_spear_pjl.cpp
   addr: 00451F00 */

int __fastcall aiSkelSpearPjlInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pjl_spear_skel,0x53504541,0x32,pjlSPEAR::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pjlSPEAR::pTexTrail = txmMANAGER::Add(txmManager,s_sfx_skel_spear_appear_part,0x40003,1);
  return (uint)(pjlSPEAR::pTexTrail != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear_pjl.cpp
   addr: 00451F50 */

entENTITY * __fastcall pjlSPEAR::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1ec);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0xbf800000;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xbf800000;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined ***)this = &pjlPJL<struct_pjlSPEAR_SFX>::_vftable_;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = _m3dVZero;
    *(undefined4 *)(this + 400) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x194) = uVar1;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_skel_spear_pjl.cpp
   addr: 00452010
   addr: 00452010
   addr: 00452010
   addr: 00452010 */

void * __thiscall pjlSPEAR::_vector_deleting_destructor_(pjlSPEAR *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_pjlSPEAR_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear_pjl.cpp
   addr: 00452040 */

int __thiscall pjlSPEAR::ProcessINIT(pjlSPEAR *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  sncCHANNEL *this_00;
  objOBJ *poVar4;
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
  
  *(undefined4 *)(param_1 + 0x20) = 0x447a0000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 10;
  iVar2 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
    this[0x173] = *(pjlSPEAR *)(param_1 + 0x50);
    if (((byte)this[0x88] & 4) != 0) {
      if (*(int *)(param_1 + 0x48) != -1) {
        peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
        if (peVar3 != (entIACTIVE_OBJ *)0x0) {
          physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar3);
        }
      }
      *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(int *)(gsSysMP + 0x28) != 4) {
      pjlSPEAR_SFX::StartSFX((pjlSPEAR_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1)
      ;
    }
    if ((((byte)this[0x88] & 4) != 0) && (*(int *)(param_1 + 0x48) != -1)) {
      peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar3 != (entIACTIVE_OBJ *)0x0) {
        local_60 = *(undefined4 *)(peVar3 + 0xbc);
        local_68 = &cdtREFINE::_vftable_;
        local_64 = 2;
        cdtINFO::cdtINFO((cdtINFO *)&local_44);
        pjlCDT::pjlCDT(local_24);
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
          local_10 = local_34;
          local_14 = local_38;
          local_4 = local_28;
          local_8 = local_2c;
          msgSYSTEM::PostMsgData
                    (&msgSystem,(msgADDR *)this,0x4d1,(msgDATA *)local_24,(msgADDR *)this);
        }
      }
    }
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
      *(undefined4 *)(this_00 + 0x84) = 0x40a00000;
      *(undefined4 *)(this_00 + 0x88) = 0x41f00000;
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
    *(sncCHANNEL **)(this + 0x1e8) = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
    poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_rot_center);
    *(objOBJ **)(this + 0x19c) = poVar4;
    if (poVar4 != (objOBJ *)0x0) {
      *(undefined4 *)(this + 0x1a0) = 0;
      *(undefined4 *)(this + 0x1a4) = 0;
      m3dMATR::Identity((m3dMATR *)(this + 0x1a8));
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10000000;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Removing unreachable block (ram,0x0045242c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear_pjl.cpp
   addr: 00452380 */

void __thiscall pjlSPEAR::GenerateCDTUponHittingPlayer(pjlSPEAR *this)

{
  plgsACTION *local_30;
  m3dV local_2c [12];
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_4 = 0;
  entENTITY::GetDistToClosestPlayer((entENTITY *)this,1.5,local_2c,&local_30);
  local_20 = local_20 | 2;
  *(int *)(*(int *)(this + 0x14f) + 0xb0) = *(int *)(*(int *)(this + 0x14f) + 0xb0) + 1;
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_10);
  local_1c = *(undefined4 *)(local_30 + 0xbc);
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x3f9,&local_20,(msgADDR *)this);
  *(int *)(*(int *)(this + 0x14f) + 0xb0) = *(int *)(*(int *)(this + 0x14f) + 0xb0) + 1;
  return;
}




/* from: ai_skel_spear_pjl.cpp
   addr: 00452460 */

void __thiscall pjlSPEAR::AlignWithSpeed(pjlSPEAR *this)

{
  physMATH *this_00;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  m3dV local_8c [12];
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  if (((byte)this[0x174] & 1) == 0) {
    this_00 = *(physMATH **)(this + 0x14f);
    local_98 = *(undefined4 *)(this_00 + 0x48);
    local_94 = *(undefined4 *)(this_00 + 0x4c);
    local_90 = *(undefined4 *)(this_00 + 0x50);
    physMATH::GetPos(this_00,local_8c);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    m3dMATR::GetScale((m3dMATR *)(*(int *)(this + 0x19c) + 0x3c),&local_9c,&local_a4,&local_a0);
    m3dMATR::Identity(local_80);
    m3dMATR::MakeLCS2WCS_VY(local_80,local_8c,(m3dV *)&local_98);
    m3dMATR::Scale(local_80,local_9c,local_a4,local_a0,1);
    m3dMATR::Invert((m3dMATR *)(*(int *)(*(int *)(this + 0x19c) + 0x2c) + 0x3c),local_40);
    m3dMultiplyMatr(local_80,local_40,(m3dMATR *)(*(int *)(this + 0x19c) + 0x7c));
    objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x19c));
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  }
  return;
}




/* from: ai_skel_spear_pjl.cpp
   addr: 00452550 */

sncSOUND_DESCR_3D * __thiscall pjlSPEAR::GetSpearSound(pjlSPEAR *this,int param_1)

{
  sncSOUND_DESCR_3D *psVar1;
  
  if (param_1 == 0) {
    psVar1 = aiSpearSkelGetSound(0);
    return psVar1;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return (sncSOUND_DESCR_3D *)0x0;
    }
    psVar1 = aiSpearSkelGetSound(2);
    return psVar1;
  }
  psVar1 = aiSpearSkelGetSound(1);
  return psVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear_pjl.cpp
   addr: 00452590 */

void __thiscall pjlSPEAR::ProcessFRAME(pjlSPEAR *this)

{
  int iVar1;
  float fVar2;
  gsEVENT local_c [2];
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)this[0x174] & 1) == 0) {
    gsEVENT::gsEVENT(local_c);
    local_4 = 0;
    local_8 = 7;
    local_a = 0xc;
    if (((byte)gsSysCinema[0x80] & 1) == 0) {
      physPHYS::ProcessFRAME((physPHYS *)this);
      if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
        partSetAreaEmissionObj
                  (*(partEMITTER_PHYS **)(this + 0x153),*(objOBJ **)(this + 0x157),-1,(m3dV *)0x0);
      }
    }
    iVar1 = (**(code **)(*(int *)this + 0x90))();
    if (*(int *)(this + 0x178) != iVar1) {
      msgDATA::msgDATA((msgDATA *)local_c);
      local_4 = 0;
      local_8 = 7;
      local_a = 0xc;
      local_4 = (**(code **)(*(int *)this + 0x90))();
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)local_c,0x10000,0xfffffffd,
                 0xfffffffd);
      *(undefined4 *)(this + 0x178) = local_4;
    }
  }
  AlignWithSpeed(this);
  pjlARROW_GENERIC::Vibrate((pjlARROW_GENERIC *)this);
  (**(code **)(*(int *)this + 0x98))();
  if ((((byte)this[0x88] & 4) != 0) && (((byte)this[0x174] & 1) == 0)) {
    fVar2 = entENTITY::GetDistToClosestPlayer
                      ((entENTITY *)this,1.5,(m3dV *)local_c,(plgsACTION **)0x0);
    if (fVar2 < ___real_3f800000) {
      GenerateCDTUponHittingPlayer(this);
      iVar1 = *(int *)(this + 0x14f);
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
        *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
        *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
      }
      objOBJ::SetStateProcYes
                (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
  }
  return;
}




/* from: ai_skel_spear_pjl.cpp
   addr: 004526F0
   addr: 004526F0 */

void __thiscall pjlARROW_GENERIC::Terminate(pjlARROW_GENERIC *this)

{
  msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,8.0);
  return;
}




/* from: ai_skel_spear_pjl.cpp
   addr: 00452710 */

void __thiscall pjlSPEAR::ShowCollisSFX(pjlSPEAR *this,pjlEV_CDT *param_1)

{
  entENTITY *this_00;
  int iVar1;
  undefined4 *puVar2;
  pjlSPEAR *ppVar3;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  if (*(int *)(param_1 + 8) == 1) {
    animCREATE_DATA::animCREATE_DATA(local_98);
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
    local_9c = 0x3e99999a;
    this_00 = entCreate(gsScenePtr,s_sfx_skel_spear_land,s_sfx_skel_spear_land,local_98,&local_9c,0)
    ;
    if (this_00 != (entENTITY *)0x0) {
      wrsfxSKELETON_SPEAR_LAND::Start((wrsfxSKELETON_SPEAR_LAND *)this_00);
      *(undefined4 *)(this + 0x1a4) = 0x3f19999a;
      *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) | 0x102;
      puVar2 = (undefined4 *)(*(int *)(this + 0x19c) + 0x7c);
      ppVar3 = this + 0x1a8;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)ppVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        ppVar3 = ppVar3 + 4;
      }
      return;
    }
  }
  else {
    objOBJ::SetStateProcYes
              (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) | 0x200;
  }
  return;
}




/* from: ai_skel_spear_pjl.cpp
   addr: 004527F0 */

int __thiscall pjlSPEAR_SFX::StartSFX(pjlSPEAR_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  int iVar1;
  pjlSPEAR_TRAIL *this_00;
  int iVar2;
  objOBJ *poVar3;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  this_00 = (pjlSPEAR_TRAIL *)operator_new(0x2c0);
  if (this_00 == (pjlSPEAR_TRAIL *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = pjlSPEAR_TRAIL::pjlSPEAR_TRAIL(this_00,0.07);
  }
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(iVar1 + 0x10),s_trail_emitter);
  *(objOBJ **)(this + 4) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  if (*(partEMITTER_PHYS **)this != (partEMITTER_PHYS *)0x0) {
    partSetAreaEmissionObj(*(partEMITTER_PHYS **)this,poVar3,-1,(m3dV *)0x0);
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear_pjl.cpp
   addr: 00452890 */

void __thiscall aiSKEL_SPEAR::AimSpearToPlayer(aiSKEL_SPEAR *this,m3dV *param_1,physINIT *param_2)

{
  float fVar1;
  m3dV *pmVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_MM2;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pmVar2 = param_1;
  animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_18);
  local_14 = 0.0;
  if (((byte)this[0x51b] & 0x10) == 0) {
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,27.0,(m3dV *)&local_c);
    if (iVar3 != 0) {
      local_8 = local_8 + ___real_3fc00000;
      local_20 = 0.0;
      local_24 = local_c - *(float *)param_1;
      local_1c = local_4 - *(float *)(param_1 + 8);
      m3dNormalize((m3dV *)&local_24);
      fVar9 = m3xzAngleVector((m3dV *)&local_24,(m3dV *)&local_18);
      if (*(float *)(this + 0x54b) < ABS(fVar9)) {
        local_24 = local_18;
        local_20 = local_14;
        local_1c = local_10;
      }
      goto LAB_00452981;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  in_MM2 = extraout_MM1;
LAB_00452981:
  local_20 = local_20 * ___real_41d80000;
  local_1c = local_1c * ___real_41d80000;
  fVar9 = (*(float *)param_1 - local_c) * (*(float *)param_1 - local_c) +
          (*(float *)(param_1 + 8) - local_4) * (*(float *)(param_1 + 8) - local_4);
  if (m3dSimdType == 0) {
    fVar9 = fVar9 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar7 = auVar8._0_4_;
    param_1 = (m3dV *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                       (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar9 * fVar7 * fVar7) * fVar9
                      );
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fVar9;
    uVar5 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    param_1 = (m3dV *)uVar5;
    FastExitMediaState();
  }
  else {
    param_1 = (m3dV *)SQRT(fVar9);
  }
  fVar7 = (float)param_1 * ___real_3d17b426;
  fVar9 = *(float *)(pmVar2 + 4);
  fVar1 = fVar7 * fVar7 * ___real_c0a00000;
  *(float *)(param_2 + 4) = local_24 * ___real_41d80000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * ___real_c1200000;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * ___real_c1200000;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * ___real_c1200000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear_pjl.cpp
   addr: 00452AD0 */

void __thiscall aiSKEL_SPEAR::LaunchOneProjectile(aiSKEL_SPEAR *this)

{
  uint uVar1;
  objOBJ *poVar2;
  entENTITY *peVar3;
  int iVar4;
  undefined4 *puVar5;
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
  local_d8 = DAT_005d4454;
  local_f0 = DAT_00963740;
  local_e4 = DAT_00963740;
  local_f8 = (physINIT)0x0;
  local_f7 = 0x40;
  local_ec = DAT_00963744;
  local_e0 = DAT_00963744;
  local_dc = 0x3dcccccd;
  local_d4 = 1;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0xbf800000;
  local_bc = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_ac = 0xbf800000;
  local_a8 = 1;
  local_f6 = 0x51;
  animCREATE_DATA::animCREATE_DATA(local_98);
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_SPEAR__lod);
  if (poVar2 != (objOBJ *)0x0) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    objOBJ::GetOrigin(poVar2,local_a4);
    uVar1 = *(uint *)(this + 1099);
    poVar2 = poVar2 + 0x3c;
    puVar5 = local_86;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *(undefined4 *)poVar2;
      poVar2 = poVar2 + 4;
      puVar5 = puVar5 + 1;
    }
    if ((uVar1 & 0x1000) != 0) {
      local_b0 = *(undefined4 *)(this + 0x8c);
      local_c0 = 0x41200000;
      local_bc = 0x3fc00000;
      local_b4 = 3;
      local_dc = 0x3e99999a;
      local_d8 = 0x40e00000;
      local_d4 = 1;
      local_cc = 0;
      local_c8 = 2;
      AimSpearToPlayer(this,local_a4,&local_f8);
      peVar3 = entCreate(gsScenePtr,s_pjl_spear_skel,s_pjl_spear_skel,local_98,&local_f8,0);
      if (peVar3 != (entENTITY *)0x0) {
        gsEffApplyLMChar(peVar3,(cdtINFO *)(this + 0x453),0);
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_skel_spear_pjl.cpp
   addr: 00452C70 */

pjlSPEAR_TRAIL * __thiscall pjlSPEAR_TRAIL::pjlSPEAR_TRAIL(pjlSPEAR_TRAIL *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,400.0,0.2);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,400.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.2,0.0);
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
  fVar2 = param_1 * ___real_3fc00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pjlSPEAR::pTexTrail);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,90.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xcc) = 0x3dcccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x200;
  *(uint *)(this + 4) = uVar1 | 0x609;
  *(uint *)(this + 4) = uVar1 | 0xa609;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* from: ai_skel_spear_pjl.cpp
   addr: 00452E20 */

int __thiscall
pjlPJL<struct_pjlSPEAR_SFX>::ProcessINIT(pjlPJL<struct_pjlSPEAR_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  pjlSPEAR_TRAIL *this_00;
  int iVar3;
  objOBJ *poVar4;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pjlPJL<struct_pjlSPEAR_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    iVar1 = *(int *)(this + 0xbc);
    this_00 = (pjlSPEAR_TRAIL *)operator_new(0x2c0);
    if (this_00 == (pjlSPEAR_TRAIL *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = pjlSPEAR_TRAIL::pjlSPEAR_TRAIL(this_00,0.07);
    }
    *(int *)(this + 0x153) = iVar3;
    if (iVar3 != 0) {
      poVar4 = objFindName(*(objOBJ **)(iVar1 + 0x10),s_trail_emitter);
      *(objOBJ **)(this + 0x157) = poVar4;
      if (poVar4 != (objOBJ *)0x0) {
        if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
          partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x153),poVar4,-1,(m3dV *)0x0);
        }
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
      }
    }
  }
  return 1;
}




/* from: ai_skel_spear_pjl.cpp
   addr: 00452F20 */

void __thiscall pjlPJL<struct_pjlSPEAR_SFX>::ProcessFRAME(pjlPJL<struct_pjlSPEAR_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
      partSetAreaEmissionObj
                (*(partEMITTER_PHYS **)(this + 0x153),*(objOBJ **)(this + 0x157),-1,(m3dV *)0x0);
    }
  }
  return;
}

