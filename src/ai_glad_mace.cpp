
/* from: ai_glad_mace.cpp
   addr: 00442B10 */

entENTITY * __fastcall aiGLAD_MACE::Create(animINST *param_1)

{
  aiNPC *this;
  
  this = (aiNPC *)operator_new(0x5a3);
  if (this != (aiNPC *)0x0) {
    aiNPC::aiNPC(this);
    *(undefined4 *)(this + 0x51b) = 0;
    *(undefined4 *)(this + 0x527) = 0;
    *(undefined4 *)(this + 0x593) = 0;
    *(undefined4 *)(this + 0x597) = 0;
    *(undefined4 *)(this + 0x59b) = 0;
    *(undefined4 *)(this + 0x59f) = 0;
    *(undefined4 *)(this + 0x94) = 0xb;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: ai_glad_mace.cpp
   addr: 00442B70 */

int __thiscall aiGLAD_MACE::ProcessINIT(aiGLAD_MACE *this,void *param_1)

{
  int iVar1;
  aiGLAD_MACE_APPEAR_GLOW *paVar2;
  objOBJ *poVar3;
  char local_20 [32];
  
  iVar1 = aiGLAD_GENERIC::ProcessINIT((aiGLAD_GENERIC *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  paVar2 = (aiGLAD_MACE_APPEAR_GLOW *)operator_new(0x2c0);
  if (paVar2 == (aiGLAD_MACE_APPEAR_GLOW *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = aiGLAD_MACE_APPEAR_GLOW::aiGLAD_MACE_APPEAR_GLOW(paVar2,0.2);
  }
  *(int *)(this + 0x593) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  paVar2 = (aiGLAD_MACE_APPEAR_GLOW *)operator_new(0x2c0);
  if (paVar2 == (aiGLAD_MACE_APPEAR_GLOW *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = aiGLAD_MACE_APPEAR_GLOW::aiGLAD_MACE_APPEAR_GLOW(paVar2,0.2);
  }
  *(int *)(this + 0x59b) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter_left);
  *(objOBJ **)(this + 0x597) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter_right);
  *(objOBJ **)(this + 0x59f) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane21);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    sprintf(local_20,s_pPlane_d,iVar1);
    poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_20);
    if (poVar3 == (objOBJ *)0x0) break;
    objOBJ::SetStateRendNo(poVar3,0x80);
    objOBJ::SetStateRendYes(poVar3,0x68);
    objOBJ::SetStateYes(poVar3,0x30);
  } while (iVar1 < 0xc);
  *(undefined4 *)(this + 0xd0) = 0x41400000;
  *(undefined4 *)(this + 0x197) = 0x40000000;
  *(undefined4 *)(this + 0x52b) = 0x42c80000;
  *(undefined4 *)(this + 0x54b) = 0x13;
  return 1;
}




/* from: ai_glad_mace.cpp
   addr: 00442CE0 */

void __thiscall aiGLAD_MACE::ProcessTERM(aiGLAD_MACE *this)

{
  if (*(undefined4 **)(this + 0x59b) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x59b))(1);
    *(undefined4 *)(this + 0x59b) = 0;
  }
  if (*(undefined4 **)(this + 0x593) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x593))(1);
    *(undefined4 *)(this + 0x593) = 0;
  }
  m3dTerm2DMatr();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 00442D20 */

int __thiscall aiGLAD_MACE::EvalAnimGoalSeq(aiGLAD_MACE *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(this + 1099);
  if (((uVar1 & 1) != 0) || (iVar4 = 0xf, (uVar1 & 0x10000) != 0)) {
    iVar4 = 0xe;
  }
  if ((uVar1 & 0x200000) == 0) {
    iVar3 = aiENEMY::IsDead((aiENEMY *)(this + 0x4bb));
    if (iVar3 == 0) {
      uVar1 = *(uint *)(this + 0x53f);
      if ((uVar1 & 0x200) == 0) {
        uVar2 = *(uint *)(this + 1099);
        if ((uVar2 & 0x10000) == 0) {
          if ((uVar1 & 0x30) == 0) {
            if ((uVar1 & 8) == 0) {
              if (*(float *)(this + 0x517) <= _DAT_005d32d0) {
                if ((uVar2 & 0x1000) == 0) {
                  if ((uVar1 & 4) == 0) {
                    iVar3 = 0xe;
                    if ((uVar2 & 4) == 0) {
                      iVar3 = iVar4;
                    }
                  }
                  else {
                    iVar3 = m3dRandSelect(0x12,0x15);
                  }
                }
                else {
                  iVar3 = 0x11;
                }
              }
              else {
                iVar3 = 0xe;
              }
            }
            else {
              iVar3 = *(int *)(this + 0x54b);
            }
          }
          else {
            iVar3 = ((uVar2 & 0x200000) != 0) + 0x13;
            *(uint *)(this + 0x53f) = uVar1 & 0xffffffcf | 8;
            *(uint *)(this + 0x54f) = ~uVar2 >> 0x15 & 1;
            *(int *)(this + 0x54b) = iVar3;
          }
        }
        else {
          iVar3 = 0xe;
        }
      }
      else {
        iVar3 = 0x10;
      }
    }
    else {
      iVar3 = 0xe;
    }
  }
  else {
    iVar3 = 0x14;
  }
  if (((byte)this[0x53f] & 0x40) != 0) {
    iVar3 = iVar3 + 8;
  }
  return iVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 00442E40 */

aiGLAD_MACE_APPEAR_GLOW * __thiscall
aiGLAD_MACE_APPEAR_GLOW::aiGLAD_MACE_APPEAR_GLOW(aiGLAD_MACE_APPEAR_GLOW *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10.0,0.2);
  *(undefined ***)this = &_vftable_;
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
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.1,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.13333334,10.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.93333334,10.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,1.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.15,0.05);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40100000,param_1 * ___real_3e800000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiGLAD_MACE::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,30.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x800409;
  return this;
}




/* from: ai_glad_mace.cpp
   addr: 00443010 */

int __fastcall aiGladMacePjlInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_pjl_mace_glad,0x4d414345,0x32,pjlMACE::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  aiGLAD_MACE::pTexTrail = txmMANAGER::Add(txmManager,s_sfx_glad_mace_trail,0x40003,1);
  if (aiGLAD_MACE::pTexTrail == (txmTEXTURE *)0x0) {
    return 0;
  }
  aiGLAD_MACE::pTexScorchMark = txmMANAGER::Add(txmManager,s_sfx_ax_scorch_mark,0x40003,1);
  if (aiGLAD_MACE::pTexScorchMark == (txmTEXTURE *)0x0) {
    return 0;
  }
  aiGLAD_MACE::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_glad_mace_appear_glow,0x40003,1);
  return (uint)(aiGLAD_MACE::pTexGlow != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 004430A0 */

entENTITY * __fastcall pjlMACE::Create(animINST *param_1)

{
  undefined4 uVar1;
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x1c4);
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
    *(undefined ***)this = &pjlPJL<struct_pjlMACE_SFX>::_vftable_;
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




/* from: ai_glad_mace.cpp
   addr: 00443160
   addr: 00443160
   addr: 00443160
   addr: 00443160 */

void * __thiscall pjlMACE::_vector_deleting_destructor_(pjlMACE *this,uint param_1)

{
  *(undefined ***)this = &pjlPJL<struct_pjlMACE_SFX>::_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 00443190 */

int __thiscall pjlMACE::ProcessINIT(pjlMACE *this,physINIT *param_1)

{
  undefined4 uVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  sncCHANNEL *this_00;
  objOBJ *poVar4;
  float extraout_ECX;
  float fVar5;
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
  
  *(undefined4 *)(this + 0x1a8) = 0;
  iVar2 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
    this[0x173] = *(pjlMACE *)(param_1 + 0x50);
    if (((byte)this[0x88] & 4) != 0) {
      if ((*(int *)(param_1 + 0x48) != -1) &&
         (peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4),
         peVar3 != (entIACTIVE_OBJ *)0x0)) {
        physPHYS::AddEntCDTExclude((physPHYS *)this,(entENTITY *)peVar3);
      }
      *(undefined4 *)(this + 0x16b) = *(undefined4 *)(param_1 + 0x48);
    }
    if (*(int *)(gsSysMP + 0x28) != 4) {
      pjlMACE_SFX::StartSFX((pjlMACE_SFX *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
    }
    if (((((byte)this[0x88] & 4) != 0) && (*(int *)(param_1 + 0x48) != -1)) &&
       (peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(param_1 + 0x48),4),
       peVar3 != (entIACTIVE_OBJ *)0x0)) {
      local_60 = *(undefined4 *)(peVar3 + 0xbc);
      local_68 = &cdtREFINE::_vftable_;
      local_64 = 2;
      cdtINFO::cdtINFO((cdtINFO *)&local_44);
      pjlCDT::pjlCDT(local_24);
      animINST::GetPos(*(animINST **)(peVar3 + 0xbc),local_5c);
      animINST::GetPos(*(animINST **)(this + 0xbc),local_50);
      local_58 = local_58 + ___real_3fc00000;
      iVar2 = scnSCENE::IsVisiblePoint
                        (gsScenePtr,local_5c,local_50,0,(cdtREFINE *)&local_68,(cdtINFO *)&local_44)
      ;
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
        msgSYSTEM::PostMsgData(&msgSystem,(msgADDR *)this,0x4d1,(msgDATA *)local_24,(msgADDR *)this)
        ;
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
    *(sncCHANNEL **)(this + 0x1a4) = this_00;
    if (this_00 == (sncCHANNEL *)0x0) {
      return 0;
    }
    gsSND_SYSTEM::AddChannel(gsSysSound,this_00,(entIACTIVE_OBJ *)this,(objOBJ *)0x0);
    poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_rot_center);
    *(objOBJ **)(this + 0x19c) = poVar4;
    if (poVar4 != (objOBJ *)0x0) {
      *(undefined4 *)(this + 0x1a0) = 2;
      *(undefined4 *)(this + 0x1b0) = 0x3f800000;
      *(undefined4 *)(this + 0x1b4) = 0;
      *(undefined4 *)(this + 0x1b8) = 0;
      fVar5 = m3dRandMax(extraout_ECX);
      fVar5 = fVar5 + ___real_44098000;
      *(undefined4 *)(this + 0x1c0) = 2;
      *(float *)(this + 0x1bc) = fVar5;
      m3dMATR::RotateX((m3dMATR *)(*(int *)(this + 0x19c) + 0x7c),-90.0,1);
      return 1;
    }
  }
  return 0;
}




/* from: ai_glad_mace.cpp
   addr: 00443510 */

int __thiscall pjlMACE_SFX::StartSFX(pjlMACE_SFX *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  pjlMACE_TRAIL *this_00;
  int iVar1;
  objOBJ *poVar2;
  m3dV local_c [12];
  
  this_00 = (pjlMACE_TRAIL *)operator_new(0x2c0);
  if (this_00 == (pjlMACE_TRAIL *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = pjlMACE_TRAIL::pjlMACE_TRAIL(this_00,0.1);
  }
  *(int *)this = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(param_1 + 0xbc) + 0x10),s_trail_emitter);
  *(objOBJ **)(this + 4) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  if (*(int *)this != 0) {
    animINST::Validate(*(animINST **)(param_1 + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 4),local_c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)(param_1 + 0xe0));
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* WARNING: Removing unreachable block (ram,0x0044365c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 004435C0 */

void __thiscall pjlMACE::GenerateCDTUponHittingPlayer(pjlMACE *this)

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
  local_1c = *(undefined4 *)(local_30 + 0xbc);
  animINST::GetPos(*(animINST **)(this + 0xbc),(m3dV *)&local_10);
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)this,0x3f9,&local_20,(msgADDR *)this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 00443670 */

void __thiscall pjlMACE::ProcessFRAME(pjlMACE *this)

{
  uint uVar1;
  int iVar2;
  sncSOUND_DESCR_3D *psVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 extraout_MM1_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  m3dV *pmVar9;
  undefined4 uVar10;
  float fStack_20;
  int local_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  m3dV amStack_c [12];
  
  iVar2 = _apCfgReadBool((void **)&DAT_0060bf60,s_Debug,s_Decomp_OFF_AI,&local_1c);
  if ((iVar2 == 0) || (local_1c == 0)) {
    pjlEV_CHANGE_STATE::pjlEV_CHANGE_STATE((pjlEV_CHANGE_STATE *)&local_18);
    if (((byte)gsSysCinema[0x80] & 1) == 0) {
      physPHYS::ProcessFRAME((physPHYS *)this);
      pjlMACE_SFX::UpdateSFX((pjlMACE_SFX *)(this + 0x153),(physPHYS *)this);
    }
    iVar2 = (**(code **)(*(int *)this + 0x90))();
    uVar5 = extraout_MM1;
    if (*(int *)(this + 0x178) != iVar2) {
      pjlEV_CHANGE_STATE::pjlEV_CHANGE_STATE((pjlEV_CHANGE_STATE *)&local_18);
      fStack_10 = (float)(**(code **)(*(int *)this + 0x90))();
      gsMP_SERVER::SendMsgClientAll
                (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,(msgDATA *)&local_18,0x10000,0xfffffffd,
                 0xfffffffd);
      *(float *)(this + 0x178) = fStack_10;
      uVar5 = extraout_MM1_00;
    }
    iVar2 = *(int *)(this + 0x14f);
    local_18 = *(float *)(iVar2 + 0x48);
    fStack_14 = *(float *)(iVar2 + 0x4c);
    fStack_10 = *(float *)(iVar2 + 0x50);
    fStack_20 = local_18 * local_18 + fStack_14 * fStack_14 + fStack_10 * fStack_10;
    if (m3dSimdType == 0) {
      fStack_20 = fStack_20 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar7 = rsqrtss(ZEXT416((uint)fStack_20),ZEXT416((uint)fStack_20));
      fVar8 = auVar7._0_4_;
      fStack_20 = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar8 *
                  (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_20 * fVar8 * fVar8) *
                  fStack_20;
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar4 = (ulonglong)(uint)fStack_20;
      uVar5 = PackedFloatingReciprocalSQRAprox(uVar5,uVar4);
      uVar6 = PackedFloatingMUL(uVar5,uVar5);
      uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
      uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
      uVar5 = PackedFloatingMUL(uVar5,uVar4);
      fStack_20 = (float)uVar5;
      FastExitMediaState();
    }
    else {
      fStack_20 = SQRT(fStack_20);
    }
    fStack_20 = (float)(uint)(ABS(fStack_20) < ___real_3e4ccccd);
    if ((float)(int)fStack_20 != ___real_00000000) {
      iVar2 = *(int *)(this + 0x14f);
      *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) | 1;
      *(undefined4 *)(iVar2 + 0x48) = _m3dVZero;
      *(undefined4 *)(iVar2 + 0x4c) = DAT_00963740;
      *(undefined4 *)(iVar2 + 0x50) = DAT_00963744;
      *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
      msgSYSTEM::PostTimeMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this,5.0);
    }
    animINST::GetPos(*(animINST **)(this + 0xbc),amStack_c);
    uVar1 = *(uint *)(this + 0x1a0);
    if ((uVar1 & 0x100) == 0) {
      if ((uVar1 & 0x200) == 0) {
        if ((uVar1 & 1) == 0) {
          uVar10 = 0;
          iVar2 = **(int **)(this + 0x1a4);
          psVar3 = aiGladGetSound(10);
          (**(code **)(iVar2 + 4))(psVar3,uVar10);
        }
        else {
          iVar2 = **(int **)(this + 0x1a4);
          psVar3 = aiGladGetSound(10);
          iVar2 = (**(code **)(iVar2 + 8))(psVar3);
          if (iVar2 != 0) {
            (**(code **)(**(int **)(this + 0x1a4) + 0xc))();
          }
        }
      }
      else {
        pmVar9 = amStack_c;
        psVar3 = aiGladGetSound(0xc);
        gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar9);
        *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) & 0xfffffdff;
      }
    }
    else {
      pmVar9 = amStack_c;
      psVar3 = aiGladGetSound(0xb);
      gsSND_SYSTEM::Play(gsSysSound,psVar3,pmVar9);
      *(uint *)(this + 0x1a0) = *(uint *)(this + 0x1a0) & 0xfffffeff;
    }
    if (((byte)this[0x1a0] & 1) == 0) {
      m3dMATR::RotateX((m3dMATR *)(*(int *)(this + 0x19c) + 0x7c),
                       gsElapsedTime * *(float *)(this + 0x1bc) * *(float *)(this + 0x1b0),1);
      objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x19c));
      animINST::Invalidate(*(animINST **)(this + 0xbc),4);
    }
    if (((((byte)this[0x88] & 4) != 0) && (((byte)this[0x174] & 1) == 0)) &&
       (fVar8 = entENTITY::GetDistToClosestPlayer
                          ((entENTITY *)this,1.5,(m3dV *)&local_18,(plgsACTION **)0x0),
       fVar8 < *(float *)(this + 0x1ac))) {
      GenerateCDTUponHittingPlayer(this);
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




/* from: ai_glad_mace.cpp
   addr: 00443A10 */

void __thiscall pjlMACE::ShowCollisSFX(pjlMACE *this,pjlEV_CDT *param_1)

{
  uint uVar1;
  undefined4 local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  uVar1 = *(uint *)(this + 0x1a0);
  *(uint *)(this + 0x1a0) = uVar1 | 1;
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11((char)(uVar1 >> 8),(char)(uVar1 | 1))) | 0x100;
  }
  else {
    uVar1 = uVar1 | 0x201;
  }
  *(uint *)(this + 0x1a0) = uVar1;
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
  local_9c = 0x3dcccccd;
  entCreate(gsScenePtr,s_sfx_glad_mace_expl,s_sfx_glad_mace_expl,local_98,&local_9c,0);
  wrsfxSCORCHMARK::Add
            ((float)aiGLAD_MACE::pTexScorchMark,(float)(param_1 + 0xc),(txmTEXTURE *)0x3f400000,
             (m3dV *)0x41200000,*(ulong *)(param_1 + 0x24),0x5343524d,0.0,0.0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 00443AC0 */

void __thiscall aiGLAD_MACE::AimMaceToPlayer(aiGLAD_MACE *this,m3dV *param_1,physINIT *param_2)

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
    iVar3 = aiPLANNER::GetEnemyMeetPoint(aiAttackPlanner,(aiNPC *)this,30.0,(m3dV *)&local_c);
    if (iVar3 != 0) {
      local_8 = local_8 + ___real_3fc00000;
      local_20 = 0.0;
      local_24 = local_c - *(float *)param_1;
      local_1c = local_4 - *(float *)(param_1 + 8);
      m3dNormalize((m3dV *)&local_24);
      fVar9 = m3xzAngleVector((m3dV *)&local_24,(m3dV *)&local_18);
      if (*(float *)(this + 0x187) < ABS(fVar9)) {
        local_24 = local_18;
        local_20 = local_14;
        local_1c = local_10;
      }
      goto LAB_00443bb1;
    }
  }
  aiENEMY::GetPos((aiENEMY *)(this + 0x4bb),(m3dV *)&local_c);
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  in_MM2 = extraout_MM1;
LAB_00443bb1:
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
  if (*(float *)(this + 0x18b) < (float)param_1) {
    local_24 = local_18;
    local_20 = local_14;
    local_1c = local_10;
  }
  fVar7 = (float)param_1 * ___real_3d088889;
  local_20 = local_20 * ___real_41f00000;
  local_1c = local_1c * ___real_41f00000;
  fVar9 = *(float *)(pmVar2 + 4);
  *(float *)(param_2 + 4) = local_24 * ___real_41f00000;
  fVar1 = fVar7 * fVar7 * ___real_c0900000;
  *(float *)(param_2 + 8) = local_20;
  *(float *)(param_2 + 0xc) = local_1c;
  *(float *)(param_2 + 8) = ((local_8 - fVar9) - fVar1) / fVar7;
  *(float *)(param_2 + 0x10) = _m3dVUnitY * ___real_c1100000;
  *(float *)(param_2 + 0x14) = DAT_005f9994 * ___real_c1100000;
  *(float *)(param_2 + 0x18) = DAT_005f9998 * ___real_c1100000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 00443D20 */

void __thiscall aiGLAD_MACE::LaunchOneProjectile(aiGLAD_MACE *this)

{
  entENTITY *peVar1;
  int iVar2;
  char *pcVar3;
  objOBJ *poVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
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
  local_d8 = DAT_005d32d4;
  local_c8 = 0;
  local_c4 = 0;
  local_bc = 0;
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
  local_c0 = 0xbf800000;
  local_b8 = 0xffffffff;
  local_b4 = 0xffffffff;
  local_b0 = 0xffffffff;
  local_ac = 0xbf800000;
  local_a8 = 1;
  local_f6 = 0x51;
  animCREATE_DATA::animCREATE_DATA(local_98);
  poVar4 = *(objOBJ **)(this + 0x55b);
  animINST::Validate(*(animINST **)(this + 0xbc),4);
  objOBJ::GetOrigin(poVar4,local_a4);
  bVar7 = ((byte)this[0x53f] & 0x40) == 0;
  poVar4 = poVar4 + 0x3c;
  puVar6 = local_86;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)poVar4;
    poVar4 = poVar4 + 4;
    puVar6 = puVar6 + 1;
  }
  if (bVar7) {
    pcVar3 = s_pjl_gladM_mace;
  }
  else {
    pcVar3 = s_pjl_gladXL_mace;
  }
  uVar5 = (uint)bVar7;
  local_dc = (&DAT_005f082c)[uVar5];
  local_b0 = *(undefined4 *)(this + 0x8c);
  local_c0 = (&DAT_005f0834)[uVar5];
  local_bc = 0x40400000;
  local_b4 = 3;
  local_d8 = 0x447a0000;
  local_d4 = 2;
  local_cc = 0x3f000000;
  local_d0 = 0x3f000000;
  AimMaceToPlayer(this,local_a4,&local_f8);
  peVar1 = entCreate(gsScenePtr,s_pjl_mace_glad,pcVar3,local_98,&local_f8,0);
  if (peVar1 != (entENTITY *)0x0) {
    *(uint *)(peVar1 + 0x1a8) = uVar5;
    *(float *)(peVar1 + 0x1ac) = (float)(&DAT_005f082c)[uVar5] + ___real_3f000000;
    gsEffApplyLMChar(peVar1,(cdtINFO *)(this + 0x453),0);
  }
  return;
}




/* from: ai_glad_mace.cpp
   addr: 00443ED0 */

void __thiscall aiGLAD_MACE::UpdateSFX(aiGLAD_MACE *this)

{
  partEMITTER_PHYS *ppVar1;
  
  if ((*(uint *)(this + 0x53f) & 0x100) != 0) {
    ppVar1 = *(partEMITTER_PHYS **)(this + 0x593);
    partEMITTER_PHYS::StopEmission(ppVar1);
    partEMITTER_PHYS::StartEmission(ppVar1);
    ppVar1 = *(partEMITTER_PHYS **)(this + 0x59b);
    partEMITTER_PHYS::StopEmission(ppVar1);
    partEMITTER_PHYS::StartEmission(ppVar1);
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffeff;
  }
  partEMITTER_PHYS::SetCS
            (*(partEMITTER_PHYS **)(this + 0x593),(m3dMATR *)(*(int *)(this + 0x597) + 0x3c));
  partEMITTER_PHYS::SetCS
            (*(partEMITTER_PHYS **)(this + 0x59b),(m3dMATR *)(*(int *)(this + 0x59f) + 0x3c));
  return;
}




/* from: ai_glad_mace.cpp
   addr: 00443F50 */

void __thiscall aiGLAD_MACE::ProcessFRAME(aiGLAD_MACE *this)

{
  objOBJ *poVar1;
  
  aiNPC_WR_FLY::ProcessFRAME((aiNPC_WR_FLY *)this);
  if (((*(uint *)(this + 1099) & 0x800000) != 0) && ((*(uint *)(this + 0x53f) & 0x400) == 0)) {
    if (*(partEMITTER_PHYS **)(this + 0x593) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x593));
    }
    if (*(partEMITTER_PHYS **)(this + 0x59b) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x59b));
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_BULAVA_L__lod);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_BULAVA_R__lod);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane1);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane2);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),&s_pPlane3);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),&s_pPlane4);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane5);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane6);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane7);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane8);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane9);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane10);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane11);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_pPlane12);
    if (poVar1 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(poVar1,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x400;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 00444190 */

void __thiscall aiGLAD_MACE::ProcessActionFrame(aiGLAD_MACE *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 extraout_MM1;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fStack_3c;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float afStack_28 [2];
  float fStack_20;
  dmgGENERAL local_1c [8];
  float fStack_14;
  float fStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  dmgGENERAL::dmgGENERAL(local_1c);
  uVar3 = ((int)(char)this[0x53f] & 0x40U) >> 3;
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0xf,0);
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0xf,1);
  iVar2 = uVar3 + 0x11;
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),iVar2,0);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x1c4))();
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),iVar2,1);
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x1c4))();
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffffd;
  }
  iVar1 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),iVar2,2);
  if (iVar1 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 2;
    *(uint *)(this + 1099) = *(uint *)(this + 1099) & 0xffffefff;
    if ((0 < *(int *)(this + 0x547)) &&
       (iVar1 = *(int *)(this + 0x547) + -1, *(int *)(this + 0x547) = iVar1, iVar1 == 0)) {
      *(undefined4 *)(this + 0x543) = 0x40e00000;
    }
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),iVar2,3);
  if (iVar2 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) | 0x100;
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0x12,0);
  if ((iVar2 == 0) &&
     (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0x12,1), iVar2 == 0)) {
    iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0x15,0);
    if ((iVar2 == 0) &&
       (iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0x15,1), iVar2 == 0))
    goto LAB_0044449c;
  }
  m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0x55b) + 0x3c),(m3dV *)&fStack_34);
  (**(code **)(*(int *)this + 0xe4))(afStack_28);
  fStack_3c = (afStack_28[0] - fStack_34) * (afStack_28[0] - fStack_34) +
              (fStack_20 - fStack_2c) * (fStack_20 - fStack_2c);
  if (m3dSimdType == 0) {
    fStack_3c = fStack_3c + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
    auVar8 = rsqrtss(ZEXT416((uint)fStack_3c),ZEXT416((uint)fStack_3c));
    fVar7 = auVar8._0_4_;
    fStack_3c = `float___cdecl_m3dSqrt(float)'::__l2::half * fVar7 *
                (`float___cdecl_m3dSqrt(float)'::__l2::three - fStack_3c * fVar7 * fVar7) *
                fStack_3c;
  }
  else if (m3dSimdType == 1) {
    FastExitMediaState();
    uVar4 = (ulonglong)(uint)fStack_3c;
    uVar5 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar4);
    uVar6 = PackedFloatingMUL(uVar5,uVar5);
    uVar6 = PackedFloatingReciprocalSQRIter1(uVar6,uVar4);
    uVar5 = PackedFloatingReciprocalIter2(uVar6,uVar5);
    uVar5 = PackedFloatingMUL(uVar5,uVar4);
    fStack_3c = (float)uVar5;
    FastExitMediaState();
  }
  else {
    fStack_3c = SQRT(fStack_3c);
  }
  fVar7 = fStack_3c;
  fStack_4 = fStack_2c;
  fStack_c = fStack_34;
  uStack_8 = uStack_30;
  fStack_14 = ___real_41700000;
  if (((___real_3f800000 <= fStack_3c) &&
      (fStack_14 = ___real_00000000, fStack_3c <= ___real_3fa66666)) &&
     (fStack_3c = (float)(uint)(0.29999995 < _DAT_005d32d0), fStack_14 = ___real_40f00000,
     (float)(int)fStack_3c == ___real_00000000)) {
    fStack_14 = ___real_41700000 - (fVar7 - ___real_3f800000) * ___real_42480002;
  }
  if ((___real_3dcccccd < fStack_14) && (*(msgADDR **)(this + 0x4c3) != (msgADDR *)0x0)) {
    msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)(this + 0x4c3),0x4c5,local_1c,(msgADDR *)this);
  }
  *(undefined4 *)(this + 0x543) = 0x40000000;
LAB_0044449c:
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0x13,0);
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0x13,1);
  if ((iVar2 != 0) && (*(int *)(this + 0x54f) != 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
  }
  animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0x14,0);
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0x14,1);
  if ((iVar2 != 0) && (*(int *)(this + 0x54f) != 0)) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffff7;
  }
  iVar2 = animINST::IsActionFrame(*(animINST **)(this + 0xbc),uVar3 + 0x10,0);
  if (iVar2 != 0) {
    *(uint *)(this + 0x53f) = *(uint *)(this + 0x53f) & 0xfffffdff;
  }
  aiGLAD_GENERIC::ProcessActionFrame((aiGLAD_GENERIC *)this);
  return;
}




/* from: ai_glad_mace.cpp
   addr: 00444550 */

pjlMACE_TRAIL * __thiscall pjlMACE_TRAIL::pjlMACE_TRAIL(pjlMACE_TRAIL *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,150.0,0.45);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,150.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.325,0.125);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 + param_1;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,aiGLAD_MACE::pTexTrail);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,-450.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xe8) = fVar2;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3dcccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x419;
  *(uint *)(this + 4) = uVar1 | 0x619;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,4.0,0.1);
  return this;
}




/* from: ai_glad_mace.cpp
   addr: 00444720 */

int __thiscall
pjlPJL<struct_pjlMACE_SFX>::ProcessINIT(pjlPJL<struct_pjlMACE_SFX> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  pjlMACE_TRAIL *this_00;
  objOBJ *poVar3;
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
  this[0x173] = *(pjlPJL<struct_pjlMACE_SFX> *)(param_1 + 0x50);
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
    this_00 = (pjlMACE_TRAIL *)operator_new(0x2c0);
    if (this_00 == (pjlMACE_TRAIL *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = pjlMACE_TRAIL::pjlMACE_TRAIL(this_00,0.1);
    }
    *(int *)(this + 0x153) = iVar1;
    if (iVar1 != 0) {
      poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_trail_emitter);
      *(objOBJ **)(this + 0x157) = poVar3;
      if (poVar3 != (objOBJ *)0x0) {
        if (*(int *)(this + 0x153) != 0) {
          animINST::Validate(*(animINST **)(this + 0xbc),4);
          objOBJ::GetOrigin(*(objOBJ **)(this + 0x157),local_c);
          partEMITTER_PHYS::SetPosDirSpeed
                    (*(partEMITTER_PHYS **)(this + 0x153),local_c,(m3dV *)0x0,(m3dV *)(this + 0xe0))
          ;
        }
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
      }
    }
  }
  return 1;
}




/* from: ai_glad_mace.cpp
   addr: 00444860 */

void __thiscall pjlPJL<struct_pjlMACE_SFX>::ProcessFRAME(pjlPJL<struct_pjlMACE_SFX> *this)

{
  m3dV local_c [12];
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    if (*(int *)(this + 0x153) != 0) {
      animINST::Validate(*(animINST **)(this + 0xbc),4);
      objOBJ::GetOrigin(*(objOBJ **)(this + 0x157),local_c);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x153),local_c,(m3dV *)0x0,(m3dV *)(this + 0xe0));
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ai_glad_mace.cpp
   addr: 004448C0
   addr: 004448C0
   addr: 004448C0 */

void __thiscall
pjlPJL<struct_minoAX_TRAIL>::ProcessEV_CDT(pjlPJL<struct_minoAX_TRAIL> *this,pjlEV_CDT *param_1)

{
  int iVar1;
  
  *(uint *)(this + 0x174) = *(uint *)(this + 0x174) | 1;
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  if (*(int *)(gsSysMP + 0x28) != 4) {
    (**(code **)(*(int *)this + 0x84))(param_1);
  }
  iVar1 = *(int *)(this + 0x14f);
  *(undefined4 *)(iVar1 + 0x48) = _m3dVZero;
  *(undefined4 *)(iVar1 + 0x4c) = DAT_00963740;
  *(undefined4 *)(iVar1 + 0x50) = DAT_00963744;
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x10;
  (**(code **)(*(int *)this + 0x88))();
  return;
}




/* from: ai_glad_mace.cpp
   addr: 00444950
   addr: 00444950 */

void * __thiscall aiGLAD_MACE::_vector_deleting_destructor_(aiGLAD_MACE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  aiNPC::~aiNPC((aiNPC *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

