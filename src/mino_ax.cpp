
/* from: mino_ax.cpp
   addr: 0045A9D0 */

int __fastcall minoAxInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_mino_ax,0x4d4e4158,0x37,minoAX::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  minoAX::pTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_ax_scorch_mark,0x40003,1);
  if (minoAX::pTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  minoAX::pTexTrail = txmMANAGER::Add(txmManager,s_sfx_ax_trail,0x40003,1);
  if (minoAX::pTexTrail == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(2,(sncSOUND_DESCR_3D *)&DAT_0060e2e0);
  return (uint)(iVar1 != 0);
}




/* from: mino_ax.cpp
   addr: 0045AA50 */

int __thiscall minoAX_TRAIL::StartSFX(minoAX_TRAIL *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  animINST *this_00;
  objOBJ *poVar1;
  minoAX_TRAIL_EMITTER *this_01;
  int iVar2;
  m3dV local_c [12];
  
  poVar1 = objFindName(*(objOBJ **)(*(int *)(param_1 + 0xbc) + 0x10),s_emitter_1);
  *(objOBJ **)(this + 4) = poVar1;
  this_01 = (minoAX_TRAIL_EMITTER *)operator_new(0x2c0);
  if (this_01 == (minoAX_TRAIL_EMITTER *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = minoAX_TRAIL_EMITTER::minoAX_TRAIL_EMITTER(this_01,1.0);
  }
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  this_00 = *(animINST **)(param_1 + 0xbc);
  animINST::Validate(this_00,4);
  if (*(objOBJ **)(this + 4) == (objOBJ *)0x0) {
    animINST::GetPos(this_00,local_c);
  }
  else {
    objOBJ::GetOrigin(*(objOBJ **)(this + 4),local_c);
  }
  partEMITTER_PHYS::SetPosDirSpeed
            (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)(param_1 + 0xe0));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* from: mino_ax.cpp
   addr: 0045AB00 */

void __thiscall minoAX_TRAIL::UpdateSFX(minoAX_TRAIL *this,physPHYS *param_1)

{
  animINST *this_00;
  m3dV local_c [12];
  
  if (*(int *)this != 0) {
    this_00 = *(animINST **)(param_1 + 0xbc);
    animINST::Validate(this_00,4);
    if (*(objOBJ **)(this + 4) == (objOBJ *)0x0) {
      animINST::GetPos(this_00,local_c);
    }
    else {
      objOBJ::GetOrigin(*(objOBJ **)(this + 4),local_c);
    }
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)(param_1 + 0xe0));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: mino_ax.cpp
   addr: 0045AB60 */

int __thiscall minoAX::ProcessINIT(minoAX *this,physINIT *param_1)

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
    this[0x173] = *(minoAX *)(param_1 + 0x50);
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
      minoAX_TRAIL::StartSFX((minoAX_TRAIL *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1)
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
    *(sncCHANNEL **)(this + 0x19c) = this_00;
    if (this_00 != (sncCHANNEL *)0x0) {
      gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
      (**(code **)(**(int **)(this + 0x19c) + 4))(&DAT_0060e2e0,0);
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: mino_ax.cpp
   addr: 0045AE60 */

void __thiscall minoAX::ProcessFRAME(minoAX *this)

{
  objOBJ *poVar1;
  int iVar2;
  float fVar3;
  gsEVENT local_50 [2];
  undefined2 local_4e;
  undefined4 local_4c;
  undefined4 local_48;
  undefined **local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  m3dV amStack_2c [12];
  uint local_20 [5];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_20[4] = _m3dVZero;
  local_c = DAT_00963740;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_8 = DAT_00963744;
  local_4 = 0;
  local_3c = 0;
  local_44 = &cdtREFINE::_vftable_;
  local_40 = 2;
  poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_rot_center);
  m3dMATR::RotateZ((m3dMATR *)(poVar1 + 0x7c),gsElapsedTime * ___real_c4340000,1);
  animINST::Invalidate(*(animINST **)(this + 0xbc),4);
  gsEVENT::gsEVENT(local_50);
  local_48 = 0;
  local_4c = 7;
  local_4e = 0xc;
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    minoAX_TRAIL::UpdateSFX((minoAX_TRAIL *)(this + 0x153),(physPHYS *)this);
  }
  iVar2 = (**(code **)(*(int *)this + 0x90))();
  if (*(int *)(this + 0x178) != iVar2) {
    msgDATA::msgDATA((msgDATA *)local_50);
    local_48 = 0;
    local_4c = 7;
    local_4e = 0xc;
    local_48 = (**(code **)(*(int *)this + 0x90))();
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)local_50,0x10000,0xfffffffd,
               0xfffffffd);
    *(undefined4 *)(this + 0x178) = local_48;
  }
  if ((((byte)this[0x88] & 4) != 0) && (((byte)this[0x174] & 1) == 0)) {
    animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&uStack_38);
    fVar3 = entENTITY::GetDistToClosestPlayer((entENTITY *)this,1.5,amStack_2c,(plgsACTION **)0x0);
    if (fVar3 < ___real_3fc00000) {
      scnSCENE::FloorPlace
                (gsScenePtr,amStack_2c,DAT_005d5270,(m3dV *)0x0,0.0,0.0,0,(cdtREFINE *)&local_44,
                 (cdtINFO *)local_20);
      if ((local_20[0] & 2) == 0) {
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
      }
      else {
        local_20[4] = uStack_38;
        local_c = uStack_34;
        local_8 = uStack_30;
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x3f9,local_20,(msgADDR *)this);
      }
      iVar2 = *(int *)(this + 0x14f);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x48) = _m3dVZero;
        *(undefined4 *)(iVar2 + 0x4c) = DAT_00963740;
        *(undefined4 *)(iVar2 + 0x50) = DAT_00963744;
      }
      objOBJ::SetStateProcYes
                (*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: mino_ax.cpp
   addr: 0045B080 */

void __thiscall minoAX::ShowCollisSFX(minoAX *this,pjlEV_CDT *param_1)

{
  m3dV *pmVar1;
  entENTITY *this_00;
  objOBJ *poVar2;
  objMOD_TEX_FRAME_ANIM *poVar3;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  pmVar1 = (m3dV *)(param_1 + 0xc);
  m3dMATR::MakeLCS2WCS_VY(local_86,pmVar1,(m3dV *)(param_1 + 0x18));
  this_00 = entCreate(gsScenePtr,s_dynamic,s_sfx_ax_explos,local_98,(void *)0x0,0);
  if (this_00 != (entENTITY *)0x0) {
    poVar2 = objFindName(*(objOBJ **)(*(int *)(this_00 + 0xbc) + 0x10),s__bb__ds_sprite__nf);
    if (poVar2 != (objOBJ *)0x0) {
      dynDYNAMIC::StartAnim((dynDYNAMIC *)this_00,0,0.0,0);
      msgSYSTEM::PostTimeMsg
                (&msgSystem,(msgADDR *)this_00,2,(msgADDR *)0x0,
                 *(float *)(*(int *)(*(int *)(*(int *)(this_00 + 0xbc) + 0x138) + 0x90) + 0x50) *
                 ___real_3a83126f + ___real_3dcccccd);
      *(uint *)(*(int *)(this_00 + 0xbc) + 4) = *(uint *)(*(int *)(this_00 + 0xbc) + 4) | 0x10;
      wrsfxSCORCHMARK::Add
                ((float)pTexScorchMark,(float)pmVar1,(txmTEXTURE *)0x3f400000,(m3dV *)0x41200000,
                 *(ulong *)(param_1 + 0x24),0x5343524d,0.0,0.0);
      poVar3 = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
      if (poVar3 == (objMOD_TEX_FRAME_ANIM *)0x0) {
        poVar3 = (objMOD_TEX_FRAME_ANIM *)0x0;
      }
      else {
        poVar3 = (objMOD_TEX_FRAME_ANIM *)objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(poVar3,0);
      }
      objMOD_TEX_FRAME_ANIM::SetParams(poVar3,4,8,1.0,0.0,-1,-1.0,-1.0,0);
      (**(code **)(*(int *)poVar3 + 4))(poVar2);
      gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060e348,pmVar1);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: mino_ax.cpp
   addr: 0045B1D0 */

minoAX_TRAIL_EMITTER * __thiscall
minoAX_TRAIL_EMITTER::minoAX_TRAIL_EMITTER(minoAX_TRAIL_EMITTER *this,float param_1)

{
  float fVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,50.0,2.5);
  *(undefined ***)this = &_vftable_;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,2.25,0.25);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_3f400000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_3a83126f);
  fVar1 = param_1 * ___real_00000000;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f0ccccd,fVar1,(m3dSPL_LINEAR1D *)pmVar3,1.0
            );
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,-240.0,0.0);
  fVar2 = param_1 * ___real_3e4ccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb8) = fVar1;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_3dcccccd;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xd0) = fVar1;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xb0) = 0x3ba3d70a;
  *(float *)(this + 0xcc) = fVar2;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,minoAX::pTexTrail);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,4.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: mino_ax.cpp
   addr: 0045B3D0 */

entENTITY * __fastcall minoAX::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1a0);
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
    *(undefined ***)this = &pjlPJL<struct_minoAX_TRAIL>::_vftable_;
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
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: mino_ax.cpp
   addr: 0045B4A0
   addr: 0045B4A0
   addr: 0045B4A0
   addr: 0045B4A0 */

void * __thiscall
pjlPJL<struct_minoAX_TRAIL>::_vector_deleting_destructor_
          (pjlPJL<struct_minoAX_TRAIL> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: mino_ax.cpp
   addr: 0045B4D0 */

int __thiscall
pjlPJL<struct_minoAX_TRAIL>::ProcessINIT(pjlPJL<struct_minoAX_TRAIL> *this,physINIT *param_1)

{
  animINST *this_00;
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  objOBJ *poVar3;
  minoAX_TRAIL_EMITTER *this_01;
  m3dV local_c [12];
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pjlPJL<struct_minoAX_TRAIL> *)(param_1 + 0x50);
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
    poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter_1);
    *(objOBJ **)(this + 0x157) = poVar3;
    this_01 = (minoAX_TRAIL_EMITTER *)operator_new(0x2c0);
    if (this_01 == (minoAX_TRAIL_EMITTER *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = minoAX_TRAIL_EMITTER::minoAX_TRAIL_EMITTER(this_01,1.0);
    }
    *(int *)(this + 0x153) = iVar1;
    if (iVar1 != 0) {
      this_00 = *(animINST **)(this + 0xbc);
      animINST::Validate(this_00,4);
      if (*(objOBJ **)(this + 0x157) == (objOBJ *)0x0) {
        animINST::GetPos(this_00,local_c);
      }
      else {
        objOBJ::GetOrigin(*(objOBJ **)(this + 0x157),local_c);
      }
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x153),local_c,(m3dV *)0x0,(m3dV *)(this + 0xe0));
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
    }
  }
  return 1;
}




/* from: mino_ax.cpp
   addr: 0045B610
   addr: 0045B610
   addr: 0045B610 */

void __thiscall pjlPJL<struct_minoAX_TRAIL>::ProcessTERM(pjlPJL<struct_minoAX_TRAIL> *this)

{
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: mino_ax.cpp
   addr: 0045B640 */

void __thiscall pjlPJL<struct_minoAX_TRAIL>::ProcessFRAME(pjlPJL<struct_minoAX_TRAIL> *this)

{
  animINST *this_00;
  m3dV local_c [12];
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    if (*(int *)(this + 0x153) != 0) {
      this_00 = *(animINST **)(this + 0xbc);
      animINST::Validate(this_00,4);
      if (*(objOBJ **)(this + 0x157) == (objOBJ *)0x0) {
        animINST::GetPos(this_00,local_c);
      }
      else {
        objOBJ::GetOrigin(*(objOBJ **)(this + 0x157),local_c);
      }
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x153),local_c,(m3dV *)0x0,(m3dV *)(this + 0xe0));
    }
  }
  return;
}

