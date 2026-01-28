
/* from: bird_egg.cpp
   addr: 00459350 */

int __fastcall birdEggInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_bird_egg,0x42444547,0x37,birdEGG::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_egg,0x42444547,0x37,birdEGG_SFX::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  birdEGG::pTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_egg_scorch_mark,0x40003,1);
  if (birdEGG::pTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  birdEGG_SFX::pTexFire = txmMANAGER::Add(txmManager,s_sfx_egg_fire,0x40003,1);
  if (birdEGG_SFX::pTexFire == (txmTEXTURE *)0x0) {
    return 0;
  }
  birdEGG_SFX::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_egg_glow,0x40003,1);
  if (birdEGG_SFX::pTexGlow == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(3,(sncSOUND_DESCR_3D *)&DAT_0060e188);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: bird_egg.cpp
   addr: 00459410 */

int __thiscall
birdEGG_PJL_SFX::StartSFX(birdEGG_PJL_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  animINST *this_00;
  undefined4 uVar1;
  birdEGG_TRAIL *this_01;
  int iVar2;
  objOBJ *poVar3;
  pteSPOT *this_02;
  m3dCTRL_3D *pmVar4;
  m3dCOLOR amStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  
  this_00 = *(animINST **)(param_1 + 0xbc);
  local_1c = 0x45942b;
  animINST::SetAnimSeq(this_00,0,0.0);
  this_01 = (birdEGG_TRAIL *)operator_new(0x2c0);
  if (this_01 == (birdEGG_TRAIL *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = birdEGG_TRAIL::birdEGG_TRAIL(this_01);
  }
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(this_00 + 0x10),s_egg);
  *(objOBJ **)(this + 4) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  local_1c = 0x45947f;
  partSetAreaEmissionObj(*(partEMITTER_PHYS **)this,poVar3,-1,(m3dV *)0x0);
  this_02 = (pteSPOT *)operator_new(0x108);
  if (this_02 == (pteSPOT *)0x0) {
    this_02 = (pteSPOT *)0x0;
  }
  else {
    pteSPOT::pteSPOT(this_02,1);
    *(undefined4 *)(this_02 + 0xf8) = 0;
    *(undefined4 *)(this_02 + 0xfc) = 0;
    *(undefined4 *)(this_02 + 0x100) = 0;
    *(undefined4 *)(this_02 + 0x104) = 0;
    *(undefined ***)this_02 = &pteSPOT_ANIM::_vftable_;
  }
  *(pteSPOT **)(this + 8) = this_02;
  if (this_02 == (pteSPOT *)0x0) {
    return 0;
  }
  pmVar4 = (m3dCTRL_3D *)operator_new(0x2c);
  if (pmVar4 == (m3dCTRL_3D *)0x0) {
    pmVar4 = (m3dCTRL_3D *)0x0;
  }
  else {
    *(undefined4 *)(pmVar4 + 4) = 0;
    *(undefined4 *)(pmVar4 + 8) = 0;
    *(undefined4 *)(pmVar4 + 0xc) = 0x3f800000;
    *(undefined4 *)(pmVar4 + 0x10) = 0x3f800000;
    *(undefined4 *)(pmVar4 + 0x14) = 0;
    *(undefined ***)pmVar4 = &m3dCTRL_TIME::_vftable_;
    *(uint *)(pmVar4 + 4) = *(uint *)(pmVar4 + 4) | 1;
    *(undefined4 *)(pmVar4 + 0x18) = _m3dVZero;
    *(undefined4 *)(pmVar4 + 0x1c) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(animINST **)(pmVar4 + 0x24) = this_00;
    *(undefined4 *)(pmVar4 + 0x28) = 0;
    *(undefined4 *)(pmVar4 + 0x20) = uVar1;
    *(undefined ***)pmVar4 = &animCTRL_3D_FOLLOW::_vftable_;
    *(undefined4 *)(pmVar4 + 0x14) = 2;
  }
  pteSPOT_ANIM::SetCtrlPos(*(pteSPOT_ANIM **)(this + 8),pmVar4);
  pteSPOT::SetRadius(*(pteSPOT **)(this + 8),3.0);
  local_20 = 0x42aa0000;
  local_1c = 0x42840000;
  m3dCOLOR::m3dCOLOR(amStack_30,0);
  pteSPOT::SetColor(*(pteSPOT **)(this + 8));
  pteSHADER::Register(*(pteSHADER **)(this + 8));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: bird_egg.cpp
   addr: 004595A0 */

int __thiscall birdEGG::ProcessINIT(birdEGG *this,physINIT *param_1)

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
  
  iVar2 = pjlPJL<struct_birdEGG_PJL_SFX>::ProcessINIT
                    ((pjlPJL<struct_birdEGG_PJL_SFX> *)this,param_1);
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
    msgDATA::msgDATA(local_24);
    local_20 = 0xffffffff;
    local_18 = 0xffffffff;
    local_14 = 0xffffffff;
    local_22 = 0x24;
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
      msgSYSTEM::PostMsgData(&msgSystem,(msgADDR *)this,0x4d1,local_24,(msgADDR *)this);
    }
  }
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
    (**(code **)(**(int **)(this + 0x1a0) + 4))(&DAT_0060e188,0);
  }
  return 1;
}




/* from: bird_egg.cpp
   addr: 00459850 */

void __thiscall birdEGG::ShowCollisSFX(birdEGG *this,pjlEV_CDT *param_1)

{
  m3dV *pmVar1;
  undefined4 *puVar2;
  m3dSPL *this_00;
  m3dCTRL_TIME *this_01;
  sncSOUND_DESCR_3D *psVar3;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  puVar2 = *(undefined4 **)(this + 0x15b);
  if ((puVar2 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) < 2)) {
    if (*(int *)(param_1 + 8) == 0) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(this + 0x15b) = 0;
      return;
    }
    this_00 = (m3dSPL *)operator_new(0x34);
    if (this_00 == (m3dSPL *)0x0) {
      this_00 = (m3dSPL *)0x0;
    }
    else {
      *(undefined4 *)(this_00 + 4) = 0;
      *(undefined4 *)(this_00 + 8) = 0;
      *(undefined4 *)(this_00 + 0xc) = 0;
      *(undefined4 *)(this_00 + 0x14) = 8;
      *(undefined4 *)(this_00 + 0x18) = 8;
      *(undefined4 *)(this_00 + 0x1c) = 1;
      *(undefined4 *)(this_00 + 0x20) = 0;
      *(undefined4 *)(this_00 + 0x24) = 0;
      *(undefined4 *)(this_00 + 0x28) = 0;
      *(undefined4 *)(this_00 + 0x2c) = 0;
      *(undefined4 *)(this_00 + 0x30) = 0;
      *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
      m3dSPL::AllocKpList(this_00,4);
    }
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,3.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.1,6.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.2,6.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,3,1.0,0.0);
    this_01 = (m3dCTRL_TIME *)operator_new(0x20);
    if (this_01 == (m3dCTRL_TIME *)0x0) {
      this_01 = (m3dCTRL_TIME *)0x0;
    }
    else {
      *(undefined4 *)(this_01 + 4) = 0;
      *(undefined4 *)(this_01 + 8) = 0;
      *(undefined4 *)(this_01 + 0xc) = 0x3fc00000;
      *(undefined4 *)(this_01 + 0x10) = 0x3f800000;
      *(undefined4 *)(this_01 + 0x14) = 0;
      *(undefined ***)this_01 = &m3dCTRL_TIME::_vftable_;
      m3dCTRL_TIME::Enable(this_01,1);
      *(undefined4 *)(this_01 + 0x18) = 0;
      *(m3dSPL **)(this_01 + 0x1c) = this_00;
      *(undefined ***)this_01 = &m3dCTRL_1D_SPL::_vftable_;
    }
    *(uint *)((m3dCTRL_1D *)this_01 + 4) = *(uint *)((m3dCTRL_1D *)this_01 + 4) | 6;
    pteSPOT_ANIM::SetCtrlRad(*(pteSPOT_ANIM **)(this + 0x15b),(m3dCTRL_1D *)this_01);
    pteSPOT_ANIM::SetCurTime(*(pteSPOT_ANIM **)(this + 0x15b),0.0);
    *(uint *)(*(int *)(this + 0x15b) + 0xf4) = *(uint *)(*(int *)(this + 0x15b) + 0xf4) | 4;
    pmVar1 = (m3dV *)(param_1 + 0xc);
    *(uint *)(*(int *)(this + 0x15b) + 4) = *(uint *)(*(int *)(this + 0x15b) + 4) | 0x40;
    wrsfxSCORCHMARK::Add
              ((float)pTexScorchMark,(float)pmVar1,(txmTEXTURE *)0x3faccccd,(m3dV *)0x41200000,
               *(ulong *)(param_1 + 0x24),0x5343524d,0.0,0.0);
    m3dMATR::MakeLCS2WCS_VY(local_86,pmVar1,(m3dV *)(param_1 + 0x18));
    entCreate(gsScenePtr,s_sfx_egg,s_sfx_egg,local_98,(void *)0x0,0);
    if ((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 8) == 4)) {
      psVar3 = (sncSOUND_DESCR_3D *)&DAT_0060e258;
    }
    else {
      psVar3 = (sncSOUND_DESCR_3D *)&DAT_0060e1f0;
    }
    gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar1);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: bird_egg.cpp
   addr: 00459A50 */

int __thiscall birdEGG_SFX::ProcessINIT(birdEGG_SFX *this,void *param_1)

{
  int iVar1;
  objOBJ *this_00;
  birdEGG_SPARKS_1 *this_01;
  birdEGG_SPARKS_1_TRAIL *this_02;
  partEMITTER_PHYS *ppVar2;
  birdEGG_SPARKS_2 *this_03;
  birdEGG_SPARKS_2_TRAIL *this_04;
  m3dV local_38 [4];
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  iVar1 = dynDYNAMIC::ProcessINIT((dynDYNAMIC *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x173) = 1;
  msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,1.5);
  this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
  *(objOBJ **)(this + 0x177) = this_00;
  if (this_00 == (objOBJ *)0x0) {
    return 0;
  }
  objOBJ::SetStateProcYes(this_00,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  local_2c = _m3dVUnitY;
  local_24 = DAT_005f9998;
  local_28 = DAT_005f9994;
  animINST::GetPos(*(animINST **)(this + 0xbc),local_38);
  iVar1 = wrsfxFindFloor(local_38,(m3dBOX *)&local_20);
  if (iVar1 != 0) {
    local_34 = local_14;
  }
  this_01 = (birdEGG_SPARKS_1 *)operator_new(0x2c0);
  if (this_01 == (birdEGG_SPARKS_1 *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = birdEGG_SPARKS_1::birdEGG_SPARKS_1(this_01);
  }
  *(int *)(this + 0x17b) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  this_02 = (birdEGG_SPARKS_1_TRAIL *)operator_new(0x2c0);
  if (this_02 != (birdEGG_SPARKS_1_TRAIL *)0x0) {
    ppVar2 = (partEMITTER_PHYS *)birdEGG_SPARKS_1_TRAIL::birdEGG_SPARKS_1_TRAIL(this_02);
    if (ppVar2 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::AttachEmitter(*(partEMITTER_PHYS **)(this + 0x17b),ppVar2,0,0);
      *(uint *)(*(int *)(this + 0x17b) + 4) = *(uint *)(*(int *)(this + 0x17b) + 4) | 0x40000;
      partEMITTER_PHYS::SetCDTPlane(*(partEMITTER_PHYS **)(this + 0x17b),1,0,(m3dPLANE *)local_38);
      iVar1 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)(this + 0x17b),*(objOBJ **)(this + 0x177),-1,
                         (m3dV *)0x0);
      if (iVar1 == 0) {
        return 0;
      }
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17b));
      this_03 = (birdEGG_SPARKS_2 *)operator_new(0x2c0);
      if (this_03 == (birdEGG_SPARKS_2 *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = birdEGG_SPARKS_2::birdEGG_SPARKS_2(this_03);
      }
      *(int *)(this + 0x17f) = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      this_04 = (birdEGG_SPARKS_2_TRAIL *)operator_new(0x2c0);
      if (this_04 != (birdEGG_SPARKS_2_TRAIL *)0x0) {
        ppVar2 = (partEMITTER_PHYS *)birdEGG_SPARKS_2_TRAIL::birdEGG_SPARKS_2_TRAIL(this_04);
        if (ppVar2 != (partEMITTER_PHYS *)0x0) {
          partEMITTER_PHYS::AttachEmitter(*(partEMITTER_PHYS **)(this + 0x17f),ppVar2,0,0);
          *(uint *)(*(int *)(this + 0x17f) + 4) = *(uint *)(*(int *)(this + 0x17f) + 4) | 0x40000;
          partEMITTER_PHYS::SetCDTPlane
                    (*(partEMITTER_PHYS **)(this + 0x17f),1,0,(m3dPLANE *)local_38);
          iVar1 = partSetAreaEmissionObj
                            (*(partEMITTER_PHYS **)(this + 0x17f),*(objOBJ **)(this + 0x177),-1,
                             (m3dV *)0x0);
          if (iVar1 == 0) {
            return 0;
          }
          partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17f));
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}




/* from: bird_egg.cpp
   addr: 00459CD0 */

birdEGG_TRAIL * __thiscall birdEGG_TRAIL::birdEGG_TRAIL(birdEGG_TRAIL *this)

{
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,0.6);
  *(undefined ***)this = &_vftable_;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 8;
    *(undefined4 *)(this_00 + 0x18) = 8;
    *(undefined4 *)(this_00 + 0x1c) = 1;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.75);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,1.0,0.001);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.0,0.0,(m3dSPL_LINEAR1D *)this_00,1.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f000000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xb0) = 0x40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,birdEGG_SFX::pTexGlow);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  return this;
}




/* from: bird_egg.cpp
   addr: 00459DF0 */

birdEGG_SPARKS_1 * __thiscall birdEGG_SPARKS_1::birdEGG_SPARKS_1(birdEGG_SPARKS_1 *this)

{
  uint uVar1;
  m3dSPL *this_00;
  uint uVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x19,100.0,2.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.041666668,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.41666666,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,2.3,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.25,0.75);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.3,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc11ccccd;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x40600000;
  *(undefined4 *)(this + 0xb8) = 0x40200000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x3f866667;
  *(undefined4 *)(this + 0xc4) = 0x3f400000;
  *(undefined4 *)(this + 200) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,birdEGG_SFX::pTexGlow);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.1,0.0,0.0,-1);
  uVar1 = *(uint *)(this + 4);
  uVar2 = uVar1 | 0x30000;
  *(uint *)(this + 4) = uVar2;
  *(uint *)(this + 4) = CONCAT22((short)(uVar2 >> 0x10),(short)uVar1) | 0x2000;
  return this;
}




/* from: bird_egg.cpp
   addr: 00459F70 */

birdEGG_SPARKS_1_TRAIL * __thiscall
birdEGG_SPARKS_1_TRAIL::birdEGG_SPARKS_1_TRAIL(birdEGG_SPARKS_1_TRAIL *this)

{
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,500.0,0.4);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,20.0,(m3dSPL_LINEAR1D *)0x0);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(this_00 + 4) = 0;
    *(undefined4 *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0;
    *(undefined4 *)(this_00 + 0x14) = 8;
    *(undefined4 *)(this_00 + 0x18) = 8;
    *(undefined4 *)(this_00 + 0x1c) = 1;
    *(undefined4 *)(this_00 + 0x20) = 0;
    *(undefined4 *)(this_00 + 0x24) = 0;
    *(undefined4 *)(this_00 + 0x28) = 0;
    *(undefined4 *)(this_00 + 0x2c) = 0;
    *(undefined4 *)(this_00 + 0x30) = 0;
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.3);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,1.0,0.001);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.0,0.0,(m3dSPL_LINEAR1D *)this_00,1.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc0a00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3f000000;
  *(undefined4 *)(this + 0xd0) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,birdEGG_SFX::pTexGlow);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  return this;
}




/* from: bird_egg.cpp
   addr: 0045A090 */

birdEGG_SPARKS_2 * __thiscall birdEGG_SPARKS_2::birdEGG_SPARKS_2(birdEGG_SPARKS_2 *this)

{
  uint uVar1;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xd,100.0,7.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,0.041666668,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,2,0.20833333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.0,2.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.1,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc11ccccd;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xb4) = 0x40900000;
  *(undefined4 *)(this + 0xb8) = 0x3fc00000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0x3faccccd;
  *(undefined4 *)(this + 0xc4) = 0x3faccccd;
  *(undefined4 *)(this + 200) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,birdEGG_SFX::pTexGlow);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.05,0.3,0.1,4);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x410000;
  *(uint *)(this + 4) = CONCAT22((short)((uVar1 | 0x410000) >> 0x10),(short)uVar1) | 0x2000;
  return this;
}




/* from: bird_egg.cpp
   addr: 0045A210 */

birdEGG_SPARKS_2_TRAIL * __thiscall
birdEGG_SPARKS_2_TRAIL::birdEGG_SPARKS_2_TRAIL(birdEGG_SPARKS_2_TRAIL *this)

{
  m3dSPL *pmVar1;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,200.0,0.7);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.5,0.2);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,15.0,(m3dSPL_LINEAR1D *)0x0);
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar1,0,8,1);
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,1.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,1.0,0.001);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.0,0.0,(m3dSPL_LINEAR1D *)pmVar1,1.0);
  pmVar1 = (m3dSPL *)operator_new(0x34);
  if (pmVar1 == (m3dSPL *)0x0) {
    pmVar1 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar1,0,8,1);
    *(undefined ***)pmVar1 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar1,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar1,1,1.0,138.975);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar1);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,360.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0x40a00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0x3dcccccd;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xb4) = 0x3f000000;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3e99999a;
  *(undefined4 *)(this + 0xd0) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,birdEGG_SFX::pTexGlow);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  return this;
}




/* from: bird_egg.cpp
   addr: 0045A3A0 */

int __thiscall
pjlPJL<struct_birdEGG_PJL_SFX>::ProcessINIT(pjlPJL<struct_birdEGG_PJL_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x173) = *(undefined4 *)(param_1 + 0x4c);
  this[0x177] = *(pjlPJL<struct_birdEGG_PJL_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    birdEGG_PJL_SFX::StartSFX
              ((birdEGG_PJL_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: bird_egg.cpp
   addr: 0045A450 */

entENTITY * __fastcall birdEGG::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1a4);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0xbf800000;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x16f) = 0xffffffff;
    *(undefined4 *)(this + 0x173) = 0xbf800000;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined ***)this = &pjlPJL<struct_birdEGG_PJL_SFX>::_vftable_;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    *(undefined4 *)(this + 0x18c) = 0;
    *(undefined4 *)(this + 400) = _m3dVZero;
    *(undefined4 *)(this + 0x194) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x198) = uVar1;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: bird_egg.cpp
   addr: 0045A520 */

void __thiscall pjlPJL<struct_birdEGG_PJL_SFX>::ProcessTERM(pjlPJL<struct_birdEGG_PJL_SFX> *this)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x15b);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this + 0x15b) = 0;
  }
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: bird_egg.cpp
   addr: 0045A580 */

void __thiscall pjlPJL<struct_birdEGG_PJL_SFX>::ProcessFRAME(pjlPJL<struct_birdEGG_PJL_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
    if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
      partSetAreaEmissionObj
                (*(partEMITTER_PHYS **)(this + 0x153),*(objOBJ **)(this + 0x157),-1,(m3dV *)0x0);
    }
  }
  return;
}




/* from: bird_egg.cpp
   addr: 0045A5D0 */

void __thiscall
pjlPJL<struct_birdEGG_PJL_SFX>::DispatchDamage
          (pjlPJL<struct_birdEGG_PJL_SFX> *this,cdtINFO *param_1)

{
  if (this[0x177] != (pjlPJL<struct_birdEGG_PJL_SFX>)0x0) {
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)(param_1 + 0x10),*(float *)(this + 0x15f),
               *(float *)(this + 0x163),*(int *)(this + 0x16b),*(int *)(this + 0x167),param_1,
               *(ulong *)(this + 0x16f),(dmgDISPATCHER *)0x0);
    return;
  }
  if (*(animINST **)(param_1 + 4) != (animINST *)0x0) {
    dmgDispatchExplosDamageInst
              (*(animINST **)(param_1 + 4),(entENTITY *)this,(m3dV *)(param_1 + 0x10),
               *(float *)(this + 0x15f),*(float *)(this + 0x163),*(int *)(this + 0x16b),
               *(int *)(this + 0x167),param_1,*(ulong *)(this + 0x16f),(dmgDISPATCHER *)0x0);
  }
  return;
}




/* from: bird_egg.cpp
   addr: 0045A660 */

void __thiscall pjlPJL<struct_birdEGG_PJL_SFX>::Terminate(pjlPJL<struct_birdEGG_PJL_SFX> *this)

{
  if (*(int *)(this + 0x173) == -0x40800000) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    return;
  }
  msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,*(float *)(this + 0x173));
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: bird_egg.cpp
   addr: 0045A6A0 */

void __thiscall
pjlPJL<struct_birdEGG_PJL_SFX>::ProcessEV_CDT
          (pjlPJL<struct_birdEGG_PJL_SFX> *this,pjlEV_CDT *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(uint *)(this + 0x178) = *(uint *)(this + 0x178) | 1;
  puVar1 = *(undefined4 **)(this + 0x15b);
  if ((puVar1 != (undefined4 *)0x0) && (*(int *)(*(int *)(this + 0x14f) + 0xb0) == 0)) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(this + 0x15b) = 0;
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




/* from: bird_egg.cpp
   addr: 0045A760 */

void __thiscall
pjlNPC_PJL<struct_birdEGG_PJL_SFX>::ProcessFRAME(pjlNPC_PJL<struct_birdEGG_PJL_SFX> *this)

{
  int iVar1;
  msgDATA mStack_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
    if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
      partSetAreaEmissionObj
                (*(partEMITTER_PHYS **)(this + 0x153),*(objOBJ **)(this + 0x157),-1,(m3dV *)0x0);
    }
  }
  iVar1 = (**(code **)(*(int *)this + 0x90))();
  if (*(int *)(this + 0x17c) != iVar1) {
    mStack_c = (msgDATA)0x0;
    uStack_b = 0x40;
    uStack_4 = 0;
    uStack_8 = 7;
    uStack_a = 0xc;
    uStack_4 = (**(code **)(*(int *)this + 0x90))();
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&mStack_c,0x10000,0xfffffffd,0xfffffffd);
    *(undefined4 *)(this + 0x17c) = uStack_4;
  }
  return;
}




/* from: bird_egg.cpp
   addr: 0045A820
   addr: 0045A820
   addr: 0045A820
   addr: 0045A820 */

void * __thiscall birdEGG::_scalar_deleting_destructor_(birdEGG *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_birdEGG_PJL_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: bird_egg.cpp
   addr: 0045A850 */

entENTITY * __fastcall birdEGG_SFX::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x183);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = _m3dVZero;
    *(undefined4 *)(this + 0x167) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x16b) = uVar1;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: bird_egg.cpp
   addr: 0045A8E0
   addr: 0045A8E0 */

void * __thiscall birdEGG_SFX::_scalar_deleting_destructor_(birdEGG_SFX *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

