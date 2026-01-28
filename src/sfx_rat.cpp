
/* from: sfx_rat.cpp
   addr: 00475F30 */

int __fastcall wrsfxRatInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_rat_sparks,0x24534658,0x50,wrsfxRAT_SPARKS::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_rat_expl,0x24534658,0x50,wrsfxRAT_EXPL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxRAT_SPARKS::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_rat_sparks,0x40003,1);
  if (wrsfxRAT_SPARKS::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxRAT_EXPL::pTexBurn = txmMANAGER::Add(txmManager,s_sfx_rat_expl_burn,0x40003,1);
  if (wrsfxRAT_EXPL::pTexBurn == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxRAT_EXPL::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_discus_land_cloud,0x40003,1);
  if (wrsfxRAT_EXPL::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxRAT_EXPL::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_rat_expl_glow,0x40003,1);
  return (uint)(wrsfxRAT_EXPL::pTexGlow != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_rat.cpp
   addr: 00476000 */

wrsfxRAT_SPARKS_EMITTER * __thiscall
wrsfxRAT_SPARKS_EMITTER::wrsfxRAT_SPARKS_EMITTER(wrsfxRAT_SPARKS_EMITTER *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,40.0,1.5);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,40.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.0,0.5);
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
  fVar2 = param_1 * ___real_3ee66667;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,191.25);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxRAT_SPARKS::pTexSparks);
  fVar2 = param_1 * ___real_41200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_40a00000;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xe0) = param_1 * ___real_c2340000;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.5,0.5,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10001;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_rat.cpp
   addr: 004761D0 */

void __thiscall wrsfxRAT_SPARKS::Start(wrsfxRAT_SPARKS *this)

{
  int iVar1;
  float extraout_ECX;
  float extraout_EDX;
  float fVar2;
  m3dV local_44 [12];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  if (*(int *)(this + 0x15b) == 0) {
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x157),(m3dV *)&local_38);
    iVar1 = wrsfxFindFloor((m3dV *)&local_38,(m3dBOX *)&local_20);
    if (iVar1 == 0) {
      local_38 = _m3dVZero;
      local_34 = DAT_00963740;
      local_30 = DAT_00963744;
    }
    else {
      local_34 = local_14;
    }
    local_2c = _m3dVUnitY;
    local_24 = DAT_005f9998;
    local_28 = DAT_005f9994;
    partEMITTER_PHYS::SetCDTPlane(*(partEMITTER_PHYS **)(this + 0x14f),1,0,(m3dPLANE *)&local_38);
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
    fVar2 = m3dRandRange(extraout_ECX,extraout_EDX);
    animINST::Scale(*(animINST **)(this + 0xbc),fVar2,fVar2,fVar2,0);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x157),local_44);
    animINST::Translate(*(animINST **)(this + 0xbc),local_44,0);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x14f),local_44,(m3dV *)0x0,(m3dV *)0x0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
    *(undefined4 *)(this + 0x15b) = 1;
  }
  return;
}




/* from: sfx_rat.cpp
   addr: 00476320 */

void __thiscall wrsfxRAT_SPARKS::Stop(wrsfxRAT_SPARKS *this)

{
  if (*(int *)(this + 0x15b) != 0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x14f));
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
    *(undefined4 *)(this + 0x15b) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_rat.cpp
   addr: 00476360 */

int __thiscall
wrsfxRAT_SPARKS::ProcessMsg
          (wrsfxRAT_SPARKS *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  objOBJ *poVar1;
  wrsfxRAT_SPARKS_EMITTER *this_00;
  int iVar2;
  float in_EDX;
  float fVar3;
  m3dV local_c [12];
  
  if (param_1 < 4) {
    if (param_1 == 3) {
      if (*(void **)(this + 0x153) == param_2) {
        *(undefined4 *)(this + 0x15b) = 0;
        *(undefined4 *)(this + 0x153) = 0;
        *(undefined4 *)(this + 0x157) = 0;
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
        return 0;
      }
    }
    else if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)(this + 0x15f) = *param_2;
      *(undefined4 *)(this + 0x153) = *(undefined4 *)((int)param_2 + 4);
      poVar1 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_plane__bb__ds);
      if (poVar1 != (objOBJ *)0x0) {
        objOBJ::SetStateRendYes(poVar1,0x60);
        this_00 = (wrsfxRAT_SPARKS_EMITTER *)operator_new(0x2c0);
        if (this_00 == (wrsfxRAT_SPARKS_EMITTER *)0x0) {
          iVar2 = 0;
        }
        else {
                    /* WARNING: Load size is inaccurate */
          iVar2 = wrsfxRAT_SPARKS_EMITTER::wrsfxRAT_SPARKS_EMITTER(this_00,*param_2);
        }
        *(int *)(this + 0x14f) = iVar2;
        if (iVar2 != 0) {
          poVar1 = objFindName(*(objOBJ **)(*(int *)(*(int *)(this + 0x153) + 0xbc) + 0x10),
                               s_source_sparks);
          *(objOBJ **)(this + 0x157) = poVar1;
          if (poVar1 != (objOBJ *)0x0) {
            *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x11;
            objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
            *(undefined4 *)(this + 0x15b) = 0;
            *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
            return 0;
          }
        }
      }
    }
    else if ((param_1 == 2) && (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)(this + 0x14f))(1);
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
  }
  else if ((param_1 == 1000) && (*(int *)(this + 0x15b) != 0)) {
    fVar3 = m3dRandRange((float)this,in_EDX);
    animINST::Scale(*(animINST **)(this + 0xbc),fVar3,fVar3,fVar3,0);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    objOBJ::GetOrigin(*(objOBJ **)(this + 0x157),local_c);
    animINST::Translate(*(animINST **)(this + 0xbc),local_c,0);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x14f),local_c,(m3dV *)0x0,(m3dV *)0x0);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_rat.cpp
   addr: 00476570 */

wrsfxRAT_EXPL_BURN * __thiscall
wrsfxRAT_EXPL_BURN::wrsfxRAT_EXPL_BURN(wrsfxRAT_EXPL_BURN *this,float param_1)

{
  float fVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x23,100.0,0.6);
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
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.033333335,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.06666667,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.13333334,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.16666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.4,0.2);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_3fc00000);
  fVar1 = param_1 * ___real_40400000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,191.25);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxRAT_EXPL::pTexBurn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,120.0);
  fVar2 = param_1 * ___real_3f000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xe8) = fVar1;
  *(float *)(this + 0xb8) = fVar2;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,4.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_rat.cpp
   addr: 004767D0 */

wrsfxRAT_EXPL_SMOKE * __thiscall
wrsfxRAT_EXPL_SMOKE::wrsfxRAT_EXPL_SMOKE(wrsfxRAT_EXPL_SMOKE *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x14,200.0,1.2);
  *(undefined ***)this = &_vftable_;
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.9,0.3);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_3fe00000);
  fVar1 = param_1 * ___real_40600000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,178.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxRAT_EXPL::pTexSmoke);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar1 = param_1 * ___real_40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1;
  fVar1 = param_1 * ___real_3f000000;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar1;
  *(float *)(this + 0xe0) = param_1 * ___real_40800000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,4.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_rat.cpp
   addr: 00476A00 */

wrsfxRAT_EXPL_GLOW * __thiscall
wrsfxRAT_EXPL_GLOW::wrsfxRAT_EXPL_GLOW(wrsfxRAT_EXPL_GLOW *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xc,100.0,0.25);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.175,0.075);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_405ccccd);
  fVar1 = param_1 * ___real_41380000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxRAT_EXPL::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xe8) = param_1;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,4.0,0.1);
  return this;
}




/* from: sfx_rat.cpp
   addr: 00476C20 */

int __thiscall
wrsfxRAT_EXPL::ProcessMsg
          (wrsfxRAT_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  wrsfxRAT_EXPL_BURN *this_00;
  partEMITTER_PHYS *ppVar3;
  wrsfxRAT_EXPL_SMOKE *this_01;
  wrsfxRAT_EXPL_GLOW *this_02;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar1 = *param_2;
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    this_00 = (wrsfxRAT_EXPL_BURN *)operator_new(0x2c0);
    if (this_00 == (wrsfxRAT_EXPL_BURN *)0x0) {
      ppVar3 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar3 = (partEMITTER_PHYS *)wrsfxRAT_EXPL_BURN::wrsfxRAT_EXPL_BURN(this_00,fVar1);
    }
    *(partEMITTER_PHYS **)(this + 0x14f) = ppVar3;
    if (ppVar3 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
      this_01 = (wrsfxRAT_EXPL_SMOKE *)operator_new(0x2c0);
      if (this_01 == (wrsfxRAT_EXPL_SMOKE *)0x0) {
        ppVar3 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar3 = (partEMITTER_PHYS *)wrsfxRAT_EXPL_SMOKE::wrsfxRAT_EXPL_SMOKE(this_01,fVar1);
      }
      *(partEMITTER_PHYS **)(this + 0x153) = ppVar3;
      if (ppVar3 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
        this_02 = (wrsfxRAT_EXPL_GLOW *)operator_new(0x2c0);
        if (this_02 == (wrsfxRAT_EXPL_GLOW *)0x0) {
          ppVar3 = (partEMITTER_PHYS *)0x0;
        }
        else {
          ppVar3 = (partEMITTER_PHYS *)wrsfxRAT_EXPL_GLOW::wrsfxRAT_EXPL_GLOW(this_02,fVar1);
        }
        *(partEMITTER_PHYS **)(this + 0x157) = ppVar3;
        if (ppVar3 != (partEMITTER_PHYS *)0x0) {
          partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
          partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
          partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
          partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
          animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
          *(undefined4 *)(this + 0x15b) = 0x40000000;
        }
      }
    }
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x157) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x157))(1);
      *(undefined4 *)(this + 0x157) = 0;
    }
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
      *(undefined4 *)(this + 0x153) = 0;
    }
    if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x14f))(1);
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
  }
  else if (param_1 == 1000) {
    iVar2 = m3dUpdateTimeField((float *)(this + 0x15b),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    }
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
    return 0;
  }
  return 0;
}




/* from: sfx_rat.cpp
   addr: 00476E20 */

entENTITY * __fastcall wrsfxRAT_EXPL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_rat.cpp
   addr: 00476E70
   addr: 00476E70 */

void * __thiscall wrsfxRAT_EXPL::_vector_deleting_destructor_(wrsfxRAT_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_rat.cpp
   addr: 00476EA0 */

entENTITY * __fastcall wrsfxRAT_SPARKS::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x163);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_rat.cpp
   addr: 00476EF0
   addr: 00476EF0 */

void * __thiscall wrsfxRAT_SPARKS::_vector_deleting_destructor_(wrsfxRAT_SPARKS *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

