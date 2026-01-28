
/* from: ais_sphinx.cpp
   addr: 0042CB60 */

int __thiscall pjlSPHINX_SFX::StartSFX(pjlSPHINX_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  char cVar1;
  animINST *this_00;
  int iVar2;
  objOBJ *poVar3;
  objMOD_TEX_FRAME_ANIM *poVar4;
  uint uVar5;
  float extraout_ECX;
  float extraout_ECX_00;
  char *pcVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  char local_20 [32];
  
  this_00 = *(animINST **)(param_1 + 0xbc);
  animINST::SetAnimSeq(this_00,0,0.0);
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    sprintf(local_20,s_pPlane_02d,iVar2);
    uVar5 = 0xffffffff;
    pcVar6 = local_20;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    poVar3 = objFindNameN(*(objOBJ **)(this_00 + 0x10),local_20,~uVar5 - 1);
    if (poVar3 == (objOBJ *)0x0) {
      return 0;
    }
    poVar4 = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
    if (poVar4 == (objMOD_TEX_FRAME_ANIM *)0x0) {
      poVar4 = (objMOD_TEX_FRAME_ANIM *)0x0;
      fVar7 = extraout_ECX;
    }
    else {
      poVar4 = (objMOD_TEX_FRAME_ANIM *)objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(poVar4,0);
      fVar7 = extraout_ECX_00;
    }
    iVar11 = 1;
    fVar10 = -1.0;
    fVar9 = -1.0;
    iVar8 = -1;
    fVar7 = m3dRandMax(fVar7);
    objMOD_TEX_FRAME_ANIM::SetParams(poVar4,4,1,0.15,fVar7,iVar8,fVar9,fVar10,iVar11);
    (**(code **)(*(int *)poVar4 + 4))(poVar3);
    if (1 < iVar2) {
      return 1;
    }
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_sphinx.cpp
   addr: 0042CC30 */

int __thiscall pjlSPHINX::ProcessINIT(pjlSPHINX *this,physINIT *param_1)

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
  
  iVar2 = pjlPJL<struct_pjlSPHINX_SFX>::ProcessINIT((pjlPJL<struct_pjlSPHINX_SFX> *)this,param_1);
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
    *(sncCHANNEL **)(this + 0x198) = this_00;
    if (this_00 != (sncCHANNEL *)0x0) {
      gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_sphinx.cpp
   addr: 0042CED0 */

void __thiscall pjlSPHINX::AlignWithSpeed(pjlSPHINX *this)

{
  physMATH *this_00;
  objOBJ *this_01;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  m3dV local_8c [12];
  m3dMATR local_80 [64];
  m3dMATR local_40 [64];
  
  this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_rot_center);
  if (this_01 != (objOBJ *)0x0) {
    this_00 = *(physMATH **)(this + 0x14f);
    local_a4 = *(float *)(this_00 + 0x48) * ___real_bf800000;
    local_a0 = *(float *)(this_00 + 0x4c) * ___real_bf800000;
    local_9c = *(float *)(this_00 + 0x50) * ___real_bf800000;
    physMATH::GetPos(this_00,local_8c);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    m3dMATR::GetScale((m3dMATR *)(this_01 + 0x3c),&local_94,&local_90,&local_98);
    m3dMATR::Identity(local_80);
    m3dMATR::MakeLCS2WCS_VX(local_80,local_8c,(m3dV *)&local_a4);
    m3dMATR::Scale(local_80,local_94,local_90,local_98,1);
    m3dMATR::Invert((m3dMATR *)(*(int *)(this_01 + 0x2c) + 0x3c),local_40);
    m3dMultiplyMatr(local_80,local_40,(m3dMATR *)(this_01 + 0x7c));
    objOBJ::DeclareProcAnim(this_01);
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  }
  return;
}




/* from: ais_sphinx.cpp
   addr: 0042CFF0 */

void __thiscall pjlSPHINX::ProcessFRAME(pjlSPHINX *this)

{
  int iVar1;
  int local_10;
  msgDATA mStack_c;
  undefined1 uStack_b;
  undefined2 uStack_a;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = _apCfgReadBool((void **)&DAT_00604200,s_Debug,s_Decomp_OFF_AI,&local_10);
  if ((iVar1 == 0) || (local_10 == 0)) {
    if (((byte)gsSysCinema[0x80] & 1) == 0) {
      physPHYS::ProcessFRAME((physPHYS *)this);
      animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
    }
    iVar1 = (**(code **)(*(int *)this + 0x90))();
    if (*(int *)(this + 0x170) != iVar1) {
      mStack_c = (msgDATA)0x0;
      uStack_b = 0x40;
      uStack_4 = 0;
      uStack_8 = 7;
      uStack_a = 0xc;
      uStack_4 = (**(code **)(*(int *)this + 0x90))();
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&mStack_c,0x10000,0xfffffffd,0xfffffffd);
      *(undefined4 *)(this + 0x170) = uStack_4;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_sphinx.cpp
   addr: 0042D0C0 */

int __thiscall pjlSPHINX::ProcessCDT(pjlSPHINX *this,cdtINFO *param_1)

{
  int iVar1;
  int iVar2;
  msgDATA local_28;
  undefined1 local_27;
  undefined2 local_26;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  ulong local_4;
  
  local_10 = _m3dVUnitY;
  local_28 = (msgDATA)0x0;
  local_27 = 0x40;
  local_c = DAT_005f9994;
  local_8 = DAT_005f9998;
  local_4 = 0;
  local_24 = 0;
  local_26 = 0x28;
  if (((byte)this[0x88] & 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar1 == 0) || (iVar2 = *(int *)(iVar1 + 0x13c), iVar2 == 0)) {
      local_20 = 1;
    }
    else if ((*(byte *)(iVar2 + 0xb8) & 1) == 0) {
      if (*(int *)(iVar2 + 0x14) == 0x504c5952) {
        local_20 = 2;
      }
      else if (*(int *)(iVar2 + 0x14) == 0x244e5043) {
        local_20 = (*(int *)(iVar2 + 0x94) != 0) + 3;
      }
      else {
        local_20 = (-(uint)((*(byte *)(iVar1 + 4) & 0x48) != 0) & 0xfffffffc) + 5;
      }
    }
    else {
      local_20 = 0;
    }
    local_4 = gsEffEnvirColor(param_1,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
    local_1c = *(undefined4 *)(param_1 + 0x10);
    local_18 = *(undefined4 *)(param_1 + 0x14);
    local_14 = *(undefined4 *)(param_1 + 0x18);
    scnSCENE::GetCDTFace(gsScenePtr,param_1,(m3dPOLY *)0x0,(m3dV *)&local_10);
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_28,0xa0000,0xffffffff,0xfffffffd);
    (**(code **)(*(int *)this + 0x8c))(&local_28);
    (**(code **)(*(int *)this + 0x80))(param_1);
    if (((byte)this[0x88] & 4) != 0) {
      *(uint *)(this + 0x194) = *(uint *)(this + 0x194) | 1;
    }
  }
  return 0;
}




/* from: ais_sphinx.cpp
   addr: 0042D240 */

void __thiscall pjlSPHINX::ShowCollisSFX(pjlSPHINX *this,pjlEV_CDT *param_1)

{
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
  local_9c = 0x3f800000;
  entCreate(gsScenePtr,s_sfx_sphinx_pjl_expl,s_sfx_sphinx_pjl_expl,local_98,&local_9c,0);
  return;
}




/* from: ais_sphinx.cpp
   addr: 0042D2A0 */

int __fastcall aisSphinxInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_ai_sphinx,0x24445354,0x28,aisSPHINX::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_pjl_sphinx,0x53504858,0x32,pjlSPHINX::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_00604120 = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (DAT_00604120 == (txmTEXTURE *)0x0) {
    return 0;
  }
  DAT_00604128 = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (DAT_00604128 == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(2,(sncSOUND_DESCR_3D *)&DAT_00604130);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxSphinxInit();
  return (uint)(iVar1 != 0);
}




/* from: ais_sphinx.cpp
   addr: 0042D340 */

aisSPHINX_PARTS * __thiscall
aisSPHINX_PARTS::aisSPHINX_PARTS(aisSPHINX_PARTS *this,m3dPLANE *param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100,200.0,5.0);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.7916667,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.8333333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,2.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.5,1.5);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.1,0.05,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.8,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,180.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc11ccccd;
  *(undefined4 *)(this + 0xe4) = 0;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.041666668,2.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.625,4.0);
  *(undefined4 *)(this + 0xb4) = 0x40000000;
  *(undefined4 *)(this + 0xb8) = 0x40000000;
  *(m3dSPL **)(this + 0xbc) = pmVar2;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xe8) = 0x3f800000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_00604120);
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.35,0.2,4);
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
  return this;
}




/* from: ais_sphinx.cpp
   addr: 0042D5B0 */

aisSPHINX_SMOKE * __thiscall
aisSPHINX_SMOKE::aisSPHINX_SMOKE(aisSPHINX_SMOKE *this,m3dPLANE *param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10,12.5,2.6);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.8333333,12.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.875,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,2.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,2.3,0.3);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,1.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,3.0);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,3.5,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.125,76.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,120.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc0511111;
  *(undefined4 *)(this + 0xe4) = 0;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar2 + 4) = 0;
    *(undefined4 *)(pmVar2 + 8) = 0;
    *(undefined4 *)(pmVar2 + 0xc) = 0;
    *(undefined4 *)(pmVar2 + 0x14) = 8;
    *(undefined4 *)(pmVar2 + 0x18) = 8;
    *(undefined4 *)(pmVar2 + 0x1c) = 1;
    *(undefined4 *)(pmVar2 + 0x20) = 0;
    *(undefined4 *)(pmVar2 + 0x24) = 0;
    *(undefined4 *)(pmVar2 + 0x28) = 0;
    *(undefined4 *)(pmVar2 + 0x2c) = 0;
    *(undefined4 *)(pmVar2 + 0x30) = 0;
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.041666668,1.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.6666666,3.0);
  *(undefined4 *)(this + 0xb4) = 0x3f800000;
  *(undefined4 *)(this + 0xb8) = 0x3f800000;
  *(m3dSPL **)(this + 0xbc) = pmVar2;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,DAT_00604128);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.0,0.15,8);
  partEMITTER_PHYS::SetCDTPlane((partEMITTER_PHYS *)this,1,0,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,6.0,0.1);
  return this;
}




/* from: ais_sphinx.cpp
   addr: 0042D880 */

int __thiscall aisSPHINX::ProcessCDT_FIREABLE(aisSPHINX *this,dmgDAMAGE *param_1)

{
  if (((param_1 == (dmgDAMAGE *)0x0) || (*(int *)(param_1 + 4) != 1)) ||
     (*(int *)(param_1 + 0xc) != *(int *)(this + 0x8c))) {
    aisSTATUE::ProcessCDT_FIREABLE((aisSTATUE *)this,param_1);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_sphinx.cpp
   addr: 0042D8B0 */

void __thiscall aisSPHINX::StartDeath(aisSPHINX *this,dmgDAMAGE *param_1)

{
  objOBJ *this_00;
  int iVar1;
  aisSPHINX_PARTS *this_01;
  partEMITTER_PHYS *ppVar2;
  aisSPHINX_SMOKE *this_02;
  m3dV local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  aisSTATUE::StartDeath((aisSTATUE *)this,param_1);
  animINST::GetPos(*(animINST **)(this + 0xbc),local_44);
  gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00604130,local_44);
  this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
  if (this_00 != (objOBJ *)0x0) {
    objOBJ::GetOrigin(this_00,local_44);
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_38);
    iVar1 = wrsfxFindFloor(local_44,(m3dBOX *)&local_20);
    if (iVar1 != 0) {
      local_38 = local_18;
      local_34 = local_14;
      local_30 = local_10;
    }
    local_2c = _m3dVUnitY;
    local_28 = DAT_005f9994;
    local_24 = DAT_005f9998;
    this_01 = (aisSPHINX_PARTS *)operator_new(0x2c0);
    if (this_01 != (aisSPHINX_PARTS *)0x0) {
      ppVar2 = (partEMITTER_PHYS *)aisSPHINX_PARTS::aisSPHINX_PARTS(this_01,(m3dPLANE *)&local_38);
      if (ppVar2 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar2,local_44,(m3dV *)0x0,(m3dV *)0x0);
        partEMITTER_PHYS::StartEmission(ppVar2);
        this_02 = (aisSPHINX_SMOKE *)operator_new(0x2c0);
        if (this_02 != (aisSPHINX_SMOKE *)0x0) {
          ppVar2 = (partEMITTER_PHYS *)
                   aisSPHINX_SMOKE::aisSPHINX_SMOKE(this_02,(m3dPLANE *)&local_38);
          if (ppVar2 != (partEMITTER_PHYS *)0x0) {
            partEMITTER_PHYS::SetPosDirSpeed(ppVar2,local_44,(m3dV *)0x0,(m3dV *)0x0);
            partEMITTER_PHYS::StartEmission(ppVar2);
          }
        }
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_sphinx.cpp
   addr: 0042D9F0 */

int __thiscall aisSPHINX::ProcessINIT(aisSPHINX *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  objOBJ *poVar3;
  entENTITY *peVar4;
  m3dV local_a4 [12];
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  iVar2 = aisSTATUE::ProcessINIT((aisSTATUE *)this,param_1);
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_obj06_2);
  *(objOBJ **)(this + 0x5bb) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_flame_source);
  if (poVar3 != (objOBJ *)0x0) {
    objOBJ::GetOrigin(poVar3,local_a4);
    m3dMATR::Transform(local_86,(m3dMATR *)(*(int *)(this + 0xbc) + 0x60),0);
    m3dMATR::Translate(local_86,local_a4,0);
    peVar4 = entCreate(gsScenePtr,s_sfx_flame,s_sfx_flame,local_98,(void *)0x0,0);
    *(entENTITY **)(this + 0x5b3) = peVar4;
    if (peVar4 == (entENTITY *)0x0) {
      return 0;
    }
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
    poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_flame_emitter);
    *(objOBJ **)(this + 0x5b7) = poVar3;
    if (poVar3 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar3,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    *(undefined4 *)(this + 0x4a7) = 0x42c00000;
    *(undefined4 *)(this + 0x4ab) = 0x41c00000;
    *(undefined4 *)(this + 0x583) = 0x42e66667;
    *(undefined4 *)(this + 0xd0) = 0x41c80000;
    *(undefined4 *)(this + 0xcc) = 0x41c80000;
    *(undefined4 *)(this + 0x18b) = 0x41f00000;
    *(undefined4 *)(this + 0x187) = 0x41a00000;
    *(undefined4 *)(this + 0x597) = 0;
    *(undefined4 *)(this + 0x59b) = 0;
    *(undefined4 *)(this + 0x59f) = 0;
    *(undefined4 *)(this + 0x5a3) = 0;
    *(undefined4 *)(this + 0x5a7) = _m3dVZero;
    *(undefined4 *)(this + 0x5ab) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x52b) = 0x461c4000;
    *(undefined4 *)(this + 0x5af) = uVar1;
  }
  return 1;
}




/* from: ais_sphinx.cpp
   addr: 0042DBB0 */

void __thiscall aisSPHINX::ProcessTERM(aisSPHINX *this)

{
  aiMINO::ProcessTERM((aiMINO *)this);
  if (*(msgADDR **)(this + 0x5b3) != (msgADDR *)0x0) {
    msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + 0x5b3),2,(msgADDR *)0x0);
    *(undefined4 *)(this + 0x5b3) = 0;
  }
  return;
}




/* from: ais_sphinx.cpp
   addr: 0042DBE0 */

void __thiscall aisSPHINX::SetMovementSpeed(aisSPHINX *this)

{
  *(uint *)(this + 1099) = *(uint *)(this + 1099) | 0x400;
  aisSTATUE::SetMovementSpeed((aisSTATUE *)this);
  return;
}




/* from: ais_sphinx.cpp
   addr: 0042DC20 */

int __thiscall aisSPHINX::SetupAniSystem(aisSPHINX *this)

{
  animTPL *paVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  animSYSTEM *this_00;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  animSEQ *local_8;
  int local_4;
  
  paVar1 = *(animTPL **)(*(int *)(this + 0xbc) + 0x138);
  if (*(animSEQ **)(paVar1 + 0x90) == (animSEQ *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(paVar1 + 0x8c);
    local_8 = *(animSEQ **)(paVar1 + 0x90);
  }
  iVar6 = 2;
  *(undefined4 *)(paVar1 + 0x8c) = 2;
  puVar2 = (undefined4 *)operator_new(0x114);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = 2;
    puVar2 = puVar3;
    do {
      puVar7 = puVar2;
      for (iVar5 = 0x22; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      puVar2[0x20] = 2;
      iVar6 = iVar6 + -1;
      puVar2 = puVar2 + 0x22;
    } while (iVar6 != 0);
  }
  *(undefined4 **)(paVar1 + 0x90) = puVar3;
  _entAnimSetSeqName(paVar1,1,s_SPHINX_SEQ_ATTACK);
  _entAnimSetSeqName(paVar1,0,s_SPHINX_SEQ_IDLE);
  entAnimAssignTplSeq(paVar1,local_8,local_4);
  this_00 = (animSYSTEM *)operator_new(0x14);
  if ((this_00 != (animSYSTEM *)0x0) &&
     (piVar4 = (int *)animSYSTEM::animSYSTEM(this_00,2,0), piVar4 != (int *)0x0)) {
    *(int **)(paVar1 + 0xa4) = piVar4;
    (**(code **)(*piVar4 + 0x14))(1);
    if (local_8 != (animSEQ *)0x0) {
      operator_delete(local_8 + -4);
    }
    return 1;
  }
  return 0;
}




/* from: ais_sphinx.cpp
   addr: 0042DD30 */

void __thiscall aisSPHINX::ProcessINIT_LEVEL(aisSPHINX *this)

{
  objOBJ *this_00;
  m3dV local_c [12];
  
  aiNPC_WR::ProcessINIT_LEVEL((aiNPC_WR *)this);
  this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_flame_source);
  if (this_00 != (objOBJ *)0x0) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    objOBJ::GetOrigin(this_00,local_c);
    animINST::Translate(*(animINST **)(*(int *)(this + 0x5b3) + 0xbc),local_c,0);
  }
  return;
}




/* from: ais_sphinx.cpp
   addr: 0042DD90 */

void __thiscall aisSPHINX::ProcessMP_NOTIFY(aisSPHINX *this,gsEVENT *param_1)

{
  aiNPC_WR::ProcessMP_NOTIFY((aiNPC_WR *)this,param_1);
  if ((*(int *)(param_1 + 4) != -100) && (*(int *)(param_1 + 4) == 6)) {
    LaunchOneProjectile(this,(m3dV *)(param_1 + 8));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_sphinx.cpp
   addr: 0042DDC0 */

void __thiscall aisSPHINX::Think(aisSPHINX *this)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  m3dV local_2c [12];
  m3dV local_20 [12];
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 local_4;
  
  local_14 = (msgDATA)0x0;
  local_8 = DAT_00963740;
  local_13 = 0x40;
  local_c = _m3dVZero;
  local_4 = DAT_00963744;
  local_10 = 6;
  local_12 = 0x14;
  aiNPC_WR::Think((aiNPC_WR *)this);
  if ((*(int *)(this + 0x4c3) != 0) && (*(int *)(*(int *)(this + 0x4c3) + 0xbc) != 0)) {
    aiNPC::GetPosRooted((aiNPC *)this,local_20);
    aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_38);
    animINST::GetDir(*(animINST **)(this + 0xbc),local_2c);
    fVar1 = ___real_3f4ccccd;
    if (*(float *)(this + 0x59b) <= _DAT_005d1260) {
      if (*(int *)(this + 0x5a3) < 1) {
        *(uint *)(this + 0x597) = *(uint *)(this + 0x597) & 0xfffffffd;
        iVar3 = m3dIsBelongPointCone((m3dV *)&local_38,local_20,local_2c,80.0,0.5,80.0);
        if (iVar3 == 0) {
          uVar2 = *(uint *)(this + 0x597) & 0xfffffffe;
        }
        else {
          uVar2 = *(uint *)(this + 0x597) | 1;
        }
      }
      else {
        uVar2 = *(uint *)(this + 0x597) | 3;
      }
      *(uint *)(this + 0x597) = uVar2;
    }
    else {
      uVar2 = *(uint *)(this + 0x597);
      *(uint *)(this + 0x597) = uVar2 | 2;
      if (*(float *)(this + 0x59b) <= fVar1) {
        *(uint *)(this + 0x597) = uVar2 | 3;
      }
      else {
        *(uint *)(this + 0x597) = uVar2 & 0xfffffffe | 2;
      }
    }
    local_30 = DAT_00963744;
    local_38 = _m3dVZero;
    local_34 = DAT_00963740;
    if (((((*(uint *)(this + 0x597) & 1) != 0) && ((*(uint *)(this + 0x597) & 2) == 0)) &&
        (*(float *)(this + 0x3cf) < *(float *)(this + 0x18b) !=
         (*(float *)(this + 0x3cf) == *(float *)(this + 0x18b)))) &&
       ((*(uint *)(this + 1099) & 0x10000000) != 0)) {
      aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,30.0,(m3dV *)&local_38);
      iVar3 = m3dIsBelongPointCone
                        ((m3dV *)&local_38,local_20,local_2c,*(float *)(this + 0x18b),-1.0,
                         *(float *)(this + 0x187));
      if (iVar3 != 0) {
        local_c = local_38;
        local_4 = local_30;
        local_8 = local_34;
        local_34 = local_34 + ___real_3f19999a;
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0x10000,0xfffffffd,0xfffffffd)
        ;
        *(undefined4 *)(this + 0x5a3) = 1;
        *(undefined4 *)(this + 0x59f) = 0x3e800000;
        *(undefined4 *)(this + 0x5a7) = local_38;
        *(float *)(this + 0x5ab) = local_34;
        *(undefined4 *)(this + 0x5af) = local_30;
      }
    }
    if (0 < *(int *)(this + 0x5a3)) {
      if (*(float *)(this + 0x59f) < _DAT_005d1260) {
        local_c = *(undefined4 *)(this + 0x5a7);
        local_8 = *(float *)(this + 0x5ab);
        local_4 = *(undefined4 *)(this + 0x5af);
        gsMP_SERVER::SendMsgClientAll
                  (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0x10000,0xfffffffd,0xfffffffd)
        ;
        *(undefined4 *)(this + 0x59f) = 0x3e800000;
        *(int *)(this + 0x5a3) = *(int *)(this + 0x5a3) + -1;
      }
      if (*(int *)(this + 0x5a3) == 0) {
        *(undefined4 *)(this + 0x59b) = 0x3fe66666;
      }
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_sphinx.cpp
   addr: 0042E080 */

void __thiscall aisSPHINX::LaunchOneProjectile(aisSPHINX *this,m3dV *param_1)

{
  entENTITY *peVar1;
  ulonglong uVar2;
  undefined8 extraout_MM1;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined2 local_f6;
  float local_f4;
  float local_f0;
  float local_ec;
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
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_f4 = (float)_m3dVZero;
  local_e8 = _m3dVZero;
  local_d8 = DAT_005d1264;
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_f0 = (float)DAT_00963740;
  local_e4 = DAT_00963740;
  local_f8 = 0;
  local_f7 = 0x40;
  local_ec = (float)DAT_00963744;
  local_e0 = DAT_00963744;
  local_dc = 0x3dcccccd;
  local_d4 = 1;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = 0xbf800000;
  local_bc = 0;
  local_ac = 0xbf800000;
  local_a8 = 1;
  local_f6 = 0x51;
  if (((byte)this[0x88] & 4) != 0) {
    m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x5bb) + 0x3c),(m3dV *)&local_11c);
    animINST::GetDir(*(animINST **)(this + 0xbc),(m3dV *)&local_104);
    animINST::GetDirRight(*(animINST **)(this + 0xbc),local_a4);
    local_110 = _m3dVUnitY;
    local_11c = local_104 * ___real_3e99999a + local_11c;
    local_10c = DAT_005f9994;
    local_108 = DAT_005f9998;
    local_118 = local_100 * ___real_3e99999a + local_118;
    local_114 = local_fc * ___real_3e99999a + local_114;
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)&local_11c,(m3dV *)&local_110);
    local_dc = 0x3dcccccd;
    local_d8 = 0x447a0000;
    local_d4 = 5;
    local_f4 = *(float *)param_1 - local_11c;
    local_cc = 0x3f000000;
    local_d0 = 0x3f000000;
    local_ec = *(float *)(param_1 + 8) - local_114;
    local_120 = local_f4 * local_f4 + local_ec * local_ec;
    if (m3dSimdType == 0) {
      local_120 = local_120 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar6 = rsqrtss(ZEXT416((uint)local_120),ZEXT416((uint)local_120));
      fVar5 = auVar6._0_4_;
      local_120 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar5 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - local_120 * fVar5 * fVar5) *
                  local_120;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar2 = (ulonglong)(uint)local_120;
      uVar3 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar2);
      uVar4 = PackedFloatingMUL(uVar3,uVar3);
      uVar4 = PackedFloatingReciprocalSQRIter1(uVar4,uVar2);
      uVar3 = PackedFloatingReciprocalIter2(uVar4,uVar3);
      uVar3 = PackedFloatingMUL(uVar3,uVar2);
      local_120 = (float)uVar3;
      FastExitMediaState();
    }
    else {
      local_120 = SQRT(local_120);
    }
    local_120 = ___real_41f00000 / local_120;
    local_e4 = DAT_00963740;
    local_e0 = DAT_00963744;
    local_e8 = _m3dVZero;
    local_b0 = *(undefined4 *)(this + 0x8c);
    local_c0 = 0x40400000;
    local_bc = 0x3fc00000;
    local_b4 = 3;
    local_f4 = local_f4 * local_120;
    local_f0 = (*(float *)(param_1 + 4) - local_118) * local_120;
    local_ec = local_ec * local_120;
    peVar1 = entCreate(gsScenePtr,s_pjl_sphinx,s_pjl_sphinx,local_98,&local_f8,0);
    animINST::Scale(*(animINST **)(peVar1 + 0xbc),0.5,0.5,0.5,0);
    *(uint *)(this + 0x597) = *(uint *)(this + 0x597) | 4;
  }
  return;
}




/* from: ais_sphinx.cpp
   addr: 0042E3A0 */

int __thiscall aisSPHINX::IsArmoredObject(aisSPHINX *this,char *param_1)

{
  int iVar1;
  
  iVar1 = strnicmp(param_1,s_revol18_,8);
  return (uint)(iVar1 == 0);
}




/* from: ais_sphinx.cpp
   addr: 0042E3C0 */

void __thiscall aisSPHINX::PlaySounds(aisSPHINX *this)

{
  m3dV local_c [12];
  
  if (((byte)this[0x597] & 4) != 0) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_00604198,local_c);
    *(uint *)(this + 0x597) = *(uint *)(this + 0x597) & 0xfffffffb;
  }
  return;
}




/* from: ais_sphinx.cpp
   addr: 0042E410 */

int __thiscall
pjlPJL<struct_pjlSPHINX_SFX>::ProcessINIT(pjlPJL<struct_pjlSPHINX_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x153) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x157) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x4c);
  this[0x16b] = *(pjlPJL<struct_pjlSPHINX_SFX> *)(param_1 + 0x50);
  if (((byte)this[0x88] & 4) != 0) {
    if (*(int *)(param_1 + 0x48) != -1) {
      peVar2 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4);
      if (peVar2 != (entIACTIVE_OBJ *)0x0) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar2);
      }
    }
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x48);
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    pjlSPHINX_SFX::StartSFX((pjlSPHINX_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1)
    ;
  }
  return 1;
}




/* from: ais_sphinx.cpp
   addr: 0042E4C0 */

entENTITY * __fastcall aisSPHINX::Create(animINST *param_1)

{
  aisSTATUE *this;
  
  this = (aisSTATUE *)operator_new(0x5bf);
  if (this != (aisSTATUE *)0x0) {
    aisSTATUE::aisSTATUE(this);
    *(undefined4 *)(this + 0x597) = 0;
    *(undefined4 *)(this + 0x5b3) = 0;
    *(undefined4 *)(this + 0x5b7) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0x10;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ais_sphinx.cpp
   addr: 0042E520
   addr: 0042E520
   addr: 0042E520
   addr: 0042E520
   addr: 0042E520
   addr: 0042E520
   addr: 0042E520
   addr: 0042E520 */

void * __thiscall aisPERSEUS::_vector_deleting_destructor_(aisPERSEUS *this,uint param_1)

{
  aisSTATUE::~aisSTATUE((aisSTATUE *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ais_sphinx.cpp
   addr: 0042E540 */

entENTITY * __fastcall pjlSPHINX::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x19c);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x153) = 0xbf800000;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0xffffffff;
    *(undefined4 *)(this + 0x15f) = 0xffffffff;
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xbf800000;
    *(undefined4 *)(this + 0x16c) = 0;
    *(undefined ***)this = &pjlPJL<struct_pjlSPHINX_SFX>::_vftable_;
    *(undefined4 *)(this + 0x170) = 0;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = _m3dVZero;
    *(undefined4 *)(this + 0x188) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x18c) = uVar1;
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ais_sphinx.cpp
   addr: 0042E600
   addr: 0042E600
   addr: 0042E600
   addr: 0042E600 */

void * __thiscall pjlSPHINX::_scalar_deleting_destructor_(pjlSPHINX *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_pjlSPHINX_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: ais_sphinx.cpp
   addr: 0042E630 */

void __thiscall pjlPJL<struct_pjlSPHINX_SFX>::ProcessFRAME(pjlPJL<struct_pjlSPHINX_SFX> *this)

{
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
  }
  return;
}




/* from: ais_sphinx.cpp
   addr: 0042E660
   addr: 0042E660 */

void __thiscall
pjlPJL<struct_pjlSFX_NONE>::DispatchDamage(pjlPJL<struct_pjlSFX_NONE> *this,cdtINFO *param_1)

{
  if (this[0x16b] != (pjlPJL<struct_pjlSFX_NONE>)0x0) {
    dmgDispatchExplosDamage
              ((entENTITY *)this,(m3dV *)(param_1 + 0x10),*(float *)(this + 0x153),
               *(float *)(this + 0x157),*(int *)(this + 0x15f),*(int *)(this + 0x15b),param_1,
               *(ulong *)(this + 0x163),(dmgDISPATCHER *)0x0);
    return;
  }
  if (*(animINST **)(param_1 + 4) != (animINST *)0x0) {
    dmgDispatchExplosDamageInst
              (*(animINST **)(param_1 + 4),(entENTITY *)this,(m3dV *)(param_1 + 0x10),
               *(float *)(this + 0x153),*(float *)(this + 0x157),*(int *)(this + 0x15f),
               *(int *)(this + 0x15b),param_1,*(ulong *)(this + 0x163),(dmgDISPATCHER *)0x0);
  }
  return;
}




/* from: ais_sphinx.cpp
   addr: 0042E6F0
   addr: 0042E6F0 */

void __thiscall pjlPJL<struct_pjlSFX_NONE>::Terminate(pjlPJL<struct_pjlSFX_NONE> *this)

{
  if (*(int *)(this + 0x167) == -0x40800000) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
    return;
  }
  msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,*(float *)(this + 0x167));
  return;
}

