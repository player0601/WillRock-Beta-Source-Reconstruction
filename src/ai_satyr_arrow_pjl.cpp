
/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044E870 */

int __fastcall pjlSatyrArrowInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pjl_satyr_arrow,0x41525257,0x32,pjlSATYR_ARROW::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  pjlARROW_GENERIC::pTexTrail = txmMANAGER::Add(txmManager,s_sfx_arrow_trail,0x40003,1);
  return (uint)(pjlARROW_GENERIC::pTexTrail != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044E8C0 */

int __thiscall pjlARROW_GENERIC::ProcessINIT(pjlARROW_GENERIC *this,physINIT *param_1)

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
  
  iVar2 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
    this[0x173] = *(pjlARROW_GENERIC *)(param_1 + 0x50);
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
      pjlARROW_GENERIC_SFX::StartSFX
                ((pjlARROW_GENERIC_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
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
      return 1;
    }
  }
  return 0;
}




/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044EBE0 */

void __thiscall pjlARROW_GENERIC::AlignWithSpeed(pjlARROW_GENERIC *this)

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
    m3dMATR::MakeLCS2WCS_VZ(local_80,local_8c,(m3dV *)&local_98);
    m3dMATR::Scale(local_80,local_9c,local_a4,local_a0,1);
    m3dMATR::Invert((m3dMATR *)(*(int *)(*(int *)(this + 0x19c) + 0x2c) + 0x3c),local_40);
    m3dMultiplyMatr(local_80,local_40,(m3dMATR *)(*(int *)(this + 0x19c) + 0x7c));
    objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x19c));
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044ECE0
   addr: 0044ECE0 */

void __thiscall pjlARROW_GENERIC::Vibrate(pjlARROW_GENERIC *this)

{
  float fVar1;
  int iVar2;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_EDX;
  pjlARROW_GENERIC *ppVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  
  if (((byte)this[0x174] & 1) != 0) {
    ppVar3 = this + 0x1a8;
    puVar4 = (undefined4 *)(*(int *)(this + 0x19c) + 0x7c);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *(undefined4 *)ppVar3;
      ppVar3 = ppVar3 + 4;
      puVar4 = puVar4 + 1;
    }
    animINST::Invalidate(*(animINST **)(this + 0xbc),4);
    if (((byte)this[0x1a0] & 2) != 0) {
      iVar2 = m3dUpdateTimeField((float *)(this + 0x1a4),extraout_EDX);
      if (iVar2 == 0) {
        fVar1 = *(float *)(this + 0x1a4) * ___real_40555555;
        fVar5 = m3dRandMax(extraout_ECX);
        fVar6 = m3dRandMax(extraout_ECX_00);
        m3dMATR::RotateX((m3dMATR *)(*(int *)(this + 0x19c) + 0x7c),fVar5 - fVar1,1);
        m3dMATR::RotateZ((m3dMATR *)(*(int *)(this + 0x19c) + 0x7c),fVar6 - fVar1,1);
        objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x19c));
        return;
      }
      *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) & 0xfffffffd;
    }
  }
  return;
}




/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044EDC0
   addr: 0044EDC0 */

void __thiscall pjlSPEAR::PlaySounds(pjlSPEAR *this)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(this + 0x1a0) & 0x100) == 0) {
    if ((*(uint *)(this + 0x1a0) & 0x200) == 0) {
      iVar1 = (**(code **)(*(int *)this + 0x9c))(0);
      if (iVar1 == 0) {
        return;
      }
      if (((byte)this[0x174] & 1) != 0) {
        iVar1 = (**(code **)(**(int **)(this + 0x1e8) + 8))(iVar1);
        if (iVar1 == 0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x0044ee45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(int **)(this + 0x1e8) + 0xc))();
        return;
      }
      goto LAB_0044ede7;
    }
    iVar1 = (**(code **)(*(int *)this + 0x9c))(2);
    uVar2 = *(uint *)(this + 0x1a0) & 0xfffffdff;
  }
  else {
    iVar1 = (**(code **)(*(int *)this + 0x9c))(1);
    uVar2 = *(uint *)(this + 0x1a0) & 0xfffffeff;
  }
  *(uint *)(this + 0x1a0) = uVar2;
LAB_0044ede7:
  if (iVar1 != 0) {
    (**(code **)(**(int **)(this + 0x1e8) + 4))(iVar1,0);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044EE50 */

void __thiscall pjlARROW_GENERIC::ProcessFRAME(pjlARROW_GENERIC *this)

{
  int iVar1;
  float fVar2;
  plgsACTION *ppStack_30;
  gsEVENT local_2c [2];
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (((byte)this[0x174] & 1) == 0) {
    gsEVENT::gsEVENT(local_2c);
    local_24 = 0;
    local_28 = 7;
    local_2a = 0xc;
    if (((byte)gsSysCinema[0x80] & 1) == 0) {
      physPHYS::ProcessFRAME((physPHYS *)this);
      pjlARROW_GENERIC_SFX::UpdateSFX((pjlARROW_GENERIC_SFX *)(this + 0x153),(physPHYS *)this);
    }
    iVar1 = (**(code **)(*(int *)this + 0x90))();
    if (*(int *)(this + 0x178) != iVar1) {
      gsEVENT::gsEVENT(local_2c);
      local_24 = 0;
      local_28 = 7;
      local_2a = 0xc;
      local_24 = (**(code **)(*(int *)this + 0x90))();
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)local_2c,0x10000,0xfffffffd,
                 0xfffffffd);
      *(undefined4 *)(this + 0x178) = local_24;
    }
  }
  AlignWithSpeed(this);
  Vibrate(this);
  (**(code **)(*(int *)this + 0x98))();
  if ((((byte)this[0x88] & 4) != 0) && (((byte)this[0x174] & 1) == 0)) {
    fVar2 = entENTITY::GetDistToClosestPlayer
                      ((entENTITY *)this,1.0,(m3dV *)local_2c,(plgsACTION **)0x0);
    if (fVar2 < ___real_3f59999a) {
      uStack_10 = _m3dVZero;
      uStack_c = DAT_00963740;
      uStack_8 = DAT_00963744;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_4 = 0;
      entENTITY::GetDistToClosestPlayer((entENTITY *)this,1.0,(m3dV *)local_2c,&ppStack_30);
      uStack_20 = uStack_20 | 2;
      uStack_1c = *(undefined4 *)(ppStack_30 + 0xbc);
      *(int *)(*(int *)(this + 0x14f) + 0xb0) = *(int *)(*(int *)(this + 0x14f) + 0xb0) + 1;
      animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&uStack_10);
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x3f9,&uStack_20,(msgADDR *)this);
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




/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044F040 */

int __thiscall
pjlARROW_GENERIC_SFX::StartSFX(pjlARROW_GENERIC_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  int iVar1;
  pjlARROW_TRAIL *this_00;
  int iVar2;
  objOBJ *poVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  iVar1 = *(int *)(param_1 + 0xbc);
  this_00 = (pjlARROW_TRAIL *)operator_new(0x2c0);
  if (this_00 == (pjlARROW_TRAIL *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = pjlARROW_TRAIL::pjlARROW_TRAIL(this_00,0.1);
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
  if (*(int *)this != 0) {
    iVar1 = *(int *)(param_1 + 0x14f);
    animINST::Validate(*(animINST **)(param_1 + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 4),local_c);
    local_18 = *(undefined4 *)(iVar1 + 0x48);
    local_14 = *(undefined4 *)(iVar1 + 0x4c);
    local_10 = *(undefined4 *)(iVar1 + 0x50);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)&local_18);
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044F110 */

void __thiscall pjlARROW_GENERIC_SFX::UpdateSFX(pjlARROW_GENERIC_SFX *this,physPHYS *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  m3dV local_c [12];
  
  if (*(int *)this != 0) {
    iVar1 = *(int *)(param_1 + 0x14f);
    animINST::Validate(*(animINST **)(param_1 + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 4),local_c);
    local_18 = *(undefined4 *)(iVar1 + 0x48);
    local_14 = *(undefined4 *)(iVar1 + 0x4c);
    local_10 = *(undefined4 *)(iVar1 + 0x50);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)&local_18);
  }
  return;
}




/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044F180
   addr: 0044F180
   addr: 0044F180
   addr: 0044F180 */

void __thiscall pjlGEFEST_SFX::StopSFX(pjlGEFEST_SFX *this,physPHYS *param_1)

{
  if (*(partEMITTER_PHYS **)this != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)this);
    *(undefined4 *)this = 0;
  }
  return;
}




/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044F1A0 */

void __thiscall pjlARROW_GENERIC::ShowCollisSFX(pjlARROW_GENERIC *this,pjlEV_CDT *param_1)

{
  entENTITY *peVar1;
  int iVar2;
  undefined4 *puVar3;
  pjlARROW_GENERIC *ppVar4;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  if (*(int *)(param_1 + 8) == 1) {
    animCREATE_DATA::animCREATE_DATA(local_98);
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
    local_9c = 0x3e99999a;
    peVar1 = entCreate(gsScenePtr,s_sfx_satir_arrow_land,s_sfx_satir_arrow_land,local_98,&local_9c,0
                      );
    if (peVar1 != (entENTITY *)0x0) {
      *(undefined4 *)(this + 0x1a4) = 0x3f19999a;
      *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) | 0x102;
      puVar3 = (undefined4 *)(*(int *)(this + 0x19c) + 0x7c);
      ppVar4 = this + 0x1a8;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined4 *)ppVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        ppVar4 = ppVar4 + 4;
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




/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044F270 */

sncSOUND_DESCR_3D * __thiscall pjlSATYR_ARROW::GetArrowSound(pjlSATYR_ARROW *this,int param_1)

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
    psVar1 = aiSatyrGetSound(1);
    return psVar1;
  }
  psVar1 = aiSpearSkelGetSound(1);
  return psVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044F2D0 */

void __thiscall aiSATYR::GetShootArrowPhysParam(aiSATYR *this,m3dV *param_1,physINIT *param_2)

{
  float fVar1;
  m3dV *pmVar2;
  int iVar3;
  ulonglong uVar4;
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
  if (((byte)this[0x51b] & 0x10) == 0) {
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,40.0,(m3dV *)&local_c);
    if (iVar3 != 0) {
      local_8 = local_8 + ___real_3f800000;
      local_20 = 0.0;
      local_24 = local_c - *(float *)param_1;
      local_1c = local_4 - *(float *)(param_1 + 8);
      m3dNormalize((m3dV *)&local_24);
      goto LAB_0044f371;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
LAB_0044f371:
  local_14 = 0.0;
  fVar9 = m3dAngleVector((m3dV *)&local_24,(m3dV *)&local_18);
  if (___real_41200000 < ABS(fVar9)) {
    local_24 = local_18;
    local_20 = local_14;
    local_1c = local_10;
  }
  local_20 = local_20 * ___real_42200000;
  local_1c = local_1c * ___real_42200000;
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
  fVar7 = (float)param_1 * ___real_3ccccccd;
  fVar9 = *(float *)(pmVar2 + 4);
  fVar1 = fVar7 * fVar7 * ___real_c0a00000;
  *(float *)(param_2 + 4) = local_24 * ___real_42200000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * ___real_c1200000;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * ___real_c1200000;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * ___real_c1200000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044F510 */

pjlARROW_TRAIL * __thiscall pjlARROW_TRAIL::pjlARROW_TRAIL(pjlARROW_TRAIL *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,200.0,0.3);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,200.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  fVar2 = param_1 * ___real_00000000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,fVar2);
  fVar3 = param_1 * ___real_40800000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.2,fVar3);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar3,0.0,(m3dSPL_LINEAR1D *)pmVar4,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.2,50.489998);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,pjlARROW_GENERIC::pTexTrail);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,90.0,0.0,0.0,0.0);
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,1.0,0.0,0.125,0.0);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 0x100004;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3d4ccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x449;
  *(uint *)(this + 4) = uVar1 | 0x649;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_satyr_arrow_pjl.cpp
   addr: 0044F6E0 */

entENTITY * __fastcall pjlSATYR_ARROW::Create(animINST *param_1)

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
    *(undefined ***)this = &pjlPJL<struct_pjlARROW_GENERIC_SFX>::_vftable_;
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
    *(undefined4 *)(this + 0x1e8) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}

