
/* from: sfx_lava.cpp
   addr: 0046D9A0 */

int __fastcall wrsfxLavaInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_lava_start,0x24534658,0x50,wrsfxLAVA_START::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_lava_pjl,0x24534658,0x50,wrsfxLAVA_PJL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_lava_expl,0x24534658,0x50,wrsfxLAVA_EXPL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_lava,0x4c415641,0x2d,wrsfxLAVA::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxLAVA::pTexBurn = txmMANAGER::Add(txmManager,s_sfx_cerber_pjl_burn,0x40003,1);
  if (wrsfxLAVA::pTexBurn == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxLAVA::pTexParts = txmMANAGER::Add(txmManager,s_sfx_lava_parts,0x40003,1);
  if (wrsfxLAVA::pTexParts == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxLAVA::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_gefest_hit_glow,0x40003,1);
  if (wrsfxLAVA::pTexGlow == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxLAVA::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_medusa_expl_sparks,0x40003,1);
  return (uint)(wrsfxLAVA::pTexSparks != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046DAB0 */

wrsfxLAVA_START_BURN * __thiscall
wrsfxLAVA_START_BURN::wrsfxLAVA_START_BURN(wrsfxLAVA_START_BURN *this,float param_1)

{
  uint uVar1;
  int iVar2;
  m3dSPL *pmVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = N_P_SC * ___real_43480000;
  fVar5 = 1.0;
  iVar2 = ftol();
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,iVar2,fVar4,fVar5);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,N_P_SC * ___real_43480000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.33333334,N_P_SC * ___real_43480000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.36666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.75,0.25);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3fe00000,param_1 * ___real_3f400000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxLAVA::pTexBurn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar4 = param_1 * ___real_41100000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc4) = param_1;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar4;
  *(undefined4 *)(this + 0xb0) = 0x3f000000;
  *(float *)(this + 0xb8) = param_1 + param_1;
  *(float *)(this + 0xc0) = param_1 * ___real_40900000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 1;
  *(uint *)(this + 4) = uVar1 | 0xa001;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046DCD0 */

wrsfxLAVA_START_PARTS * __thiscall
wrsfxLAVA_START_PARTS::wrsfxLAVA_START_PARTS(wrsfxLAVA_START_PARTS *this,float param_1)

{
  uint uVar1;
  int iVar2;
  m3dSPL *pmVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = N_P_SC * ___real_43fa0000;
  fVar5 = 0.6;
  iVar2 = ftol();
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,iVar2,fVar4,fVar5);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,N_P_SC * ___real_43fa0000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.06666667,N_P_SC * ___real_43fa0000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
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
  fVar4 = param_1 * ___real_3f19999a;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar4);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar4,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxLAVA::pTexParts);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar4 = param_1 * ___real_41f00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xb4) = fVar4;
  fVar4 = param_1 * ___real_41200000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar4;
  *(float *)(this + 0xc0) = param_1 * ___real_41400000;
  *(float *)(this + 0xc4) = param_1 * ___real_40800000;
  *(float *)(this + 0xe0) = param_1 * ___real_c11ccccd;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 1;
  *(uint *)(this + 4) = uVar1 | 0xa001;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* from: sfx_lava.cpp
   addr: 0046DF60 */

int __thiscall
wrsfxLAVA_START::ProcessMsg
          (wrsfxLAVA_START *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  wrsfxLAVA_START_BURN *this_00;
  wrsfxLAVA_START_PARTS *this_01;
  objOBJ *poVar3;
  uint uVar4;
  float in_EDX;
  char *pcVar5;
  
  if (param_1 == 1) {
    animINST::Scale(*(animINST **)(this + 0xbc),DAT_005d6e64,DAT_005d6e64,DAT_005d6e64,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    this_00 = (wrsfxLAVA_START_BURN *)operator_new(0x2c0);
    if (this_00 == (wrsfxLAVA_START_BURN *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxLAVA_START_BURN::wrsfxLAVA_START_BURN(this_00,DAT_005d6e64);
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 != 0) {
      this_01 = (wrsfxLAVA_START_PARTS *)operator_new(0x2c0);
      if (this_01 == (wrsfxLAVA_START_PARTS *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = wrsfxLAVA_START_PARTS::wrsfxLAVA_START_PARTS(this_01,DAT_005d6e64);
      }
      *(int *)(this + 0x153) = iVar2;
      if (iVar2 != 0) {
        uVar4 = 0xffffffff;
        pcVar5 = s_emitter;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        poVar3 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter,~uVar4 - 1);
        if (poVar3 != (objOBJ *)0x0) {
          iVar2 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),poVar3,-1,(m3dV *)0x0)
          ;
          if (iVar2 != 0) {
            iVar2 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x153),poVar3,-1,(m3dV *)0x0);
            if (iVar2 != 0) {
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
              partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
              *(undefined4 *)(this + 0x157) = 0x3fc00000;
            }
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
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
    iVar2 = m3dUpdateTimeField((float *)(this + 0x157),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046E100 */

wrsfxLAVA_TRAIL_BURN * __thiscall
wrsfxLAVA_TRAIL_BURN::wrsfxLAVA_TRAIL_BURN(wrsfxLAVA_TRAIL_BURN *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,N_P_SC * ___real_42c80000,0.6);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,N_P_SC * ___real_42c80000);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
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
  fVar2 = param_1 * ___real_3fc00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxLAVA::pTexBurn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_c0000000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xe8) = param_1;
  *(float *)(this + 0xe0) = fVar2;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3e99999a;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 1;
  *(uint *)(this + 4) = uVar1 | 0x201;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046E2F0 */

wrsfxLAVA_TRAIL_PARTS * __thiscall
wrsfxLAVA_TRAIL_PARTS::wrsfxLAVA_TRAIL_PARTS(wrsfxLAVA_TRAIL_PARTS *this,float param_1)

{
  uint uVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,N_P_SC * ___real_42c80000,0.7);
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
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,N_P_SC * ___real_42c80000);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.5,0.2);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3ec00000,param_1 * ___real_3e000000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxLAVA::pTexParts);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = param_1 + param_1;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 1;
  *(uint *)(this + 4) = uVar1 | 0x201;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* from: sfx_lava.cpp
   addr: 0046E4C0 */

int __thiscall
wrsfxLAVA_TRAIL::StartSFX(wrsfxLAVA_TRAIL *this,physPHYS *param_1,pjlPJL_INIT *param_2)

{
  animINST *paVar1;
  wrsfxLAVA_TRAIL_BURN *this_00;
  int iVar2;
  wrsfxLAVA_TRAIL_PARTS *this_01;
  m3dV local_c [12];
  
  paVar1 = *(animINST **)(param_1 + 0xbc);
  objOBJ::SetStateYes(*(objOBJ **)(paVar1 + 0x10),0x10);
  animINST::Scale(paVar1,DAT_005d6e60,DAT_005d6e60,DAT_005d6e60,0);
  this_00 = (wrsfxLAVA_TRAIL_BURN *)operator_new(0x2c0);
  if (this_00 == (wrsfxLAVA_TRAIL_BURN *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxLAVA_TRAIL_BURN::wrsfxLAVA_TRAIL_BURN(this_00,DAT_005d6e60);
  }
  *(int *)(this + 4) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  this_01 = (wrsfxLAVA_TRAIL_PARTS *)operator_new(0x2c0);
  if (this_01 == (wrsfxLAVA_TRAIL_PARTS *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxLAVA_TRAIL_PARTS::wrsfxLAVA_TRAIL_PARTS(this_01,DAT_005d6e60);
  }
  *(int *)this = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  animINST::SetAnimSeq(paVar1,0,0.0);
  paVar1 = *(animINST **)(param_1 + 0xbc);
  animINST::AdvanceTime(paVar1,gsElapsedTime,0,(float *)0x0);
  animINST::Validate(paVar1,4);
  animINST::GetPos(paVar1,local_c);
  if (*(partEMITTER_PHYS **)(this + 4) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 4),local_c,(m3dV *)0x0,(m3dV *)(param_1 + 0xe0));
  }
  if (*(partEMITTER_PHYS **)this != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)this,local_c,(m3dV *)0x0,(m3dV *)(param_1 + 0xe0));
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 4));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)this);
  return 1;
}




/* from: sfx_lava.cpp
   addr: 0046E5E0 */

void __thiscall wrsfxLAVA_PJL::ShowCollisSFX(wrsfxLAVA_PJL *this,pjlEV_CDT *param_1)

{
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)(param_1 + 0xc),(m3dV *)(param_1 + 0x18));
  entCreate(gsScenePtr,s_sfx_lava_expl,s_sfx_lava_expl,local_98,(void *)0x0,0);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046E630 */

wrsfxLAVA_EXPL_GLOW * __thiscall
wrsfxLAVA_EXPL_GLOW::wrsfxLAVA_EXPL_GLOW(wrsfxLAVA_EXPL_GLOW *this,float param_1)

{
  int iVar1;
  m3dSPL *pmVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = N_P_SC * ___real_43480000;
  fVar4 = 0.4;
  iVar1 = ftol();
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,iVar1,fVar3,fVar4);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,N_P_SC * ___real_43480000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,N_P_SC * ___real_43480000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.3,0.1);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_40c80000);
  fVar3 = param_1 * ___real_41480000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,fVar3);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar3,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxLAVA::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 9;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046E890 */

wrsfxLAVA_EXPL_BURN * __thiscall
wrsfxLAVA_EXPL_BURN::wrsfxLAVA_EXPL_BURN(wrsfxLAVA_EXPL_BURN *this,float param_1)

{
  uint uVar1;
  int iVar2;
  m3dSPL *pmVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = N_P_SC * ___real_42c80000;
  fVar5 = 0.7;
  iVar2 = ftol();
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,iVar2,fVar4,fVar5);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,N_P_SC * ___real_42c80000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.1,N_P_SC * ___real_42c80000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.5,0.2);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 + param_1,param_1 * ___real_3f000000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxLAVA::pTexBurn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  fVar4 = param_1 * ___real_40800000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xe8) = param_1;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = fVar4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xb0) = 0x3f800000;
  *(float *)(this + 0xb8) = param_1 + param_1;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 9;
  *(uint *)(this + 4) = uVar1 | 0xa009;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046EAA0 */

wrsfxLAVA_EXPL_SPARKS * __thiscall
wrsfxLAVA_EXPL_SPARKS::wrsfxLAVA_EXPL_SPARKS(wrsfxLAVA_EXPL_SPARKS *this,float param_1)

{
  uint uVar1;
  int iVar2;
  m3dSPL *pmVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = N_P_SC * ___real_44bb8000;
  fVar5 = 0.6;
  iVar2 = ftol();
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,iVar2,fVar4,fVar5);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,N_P_SC * ___real_44bb8000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.1,N_P_SC * ___real_44bb8000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.13333334,0.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_3e800000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3e4ccccd,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxLAVA::pTexSparks);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,1.0,0.0,8.0,0.0);
  fVar4 = param_1 * ___real_41a00000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar4;
  *(float *)(this + 0xb8) = fVar4;
  *(float *)(this + 0xc0) = param_1 + param_1;
  *(float *)(this + 0xc4) = param_1 + param_1;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 9;
  *(uint *)(this + 4) = uVar1 | 0xa009;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* from: sfx_lava.cpp
   addr: 0046ED00 */

int __thiscall
wrsfxLAVA_EXPL::ProcessMsg
          (wrsfxLAVA_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  wrsfxLAVA_EXPL_GLOW *this_00;
  partEMITTER_PHYS *this_01;
  wrsfxLAVA_EXPL_BURN *this_02;
  objOBJ *poVar3;
  wrsfxLAVA_EXPL_SPARKS *this_03;
  uint uVar4;
  float in_EDX;
  char *pcVar5;
  m3dV local_c [12];
  
  if (param_1 == 1) {
    animINST::Scale(*(animINST **)(this + 0xbc),DAT_005d6e68,DAT_005d6e68,DAT_005d6e68,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    this_00 = (wrsfxLAVA_EXPL_GLOW *)operator_new(0x2c0);
    if (this_00 == (wrsfxLAVA_EXPL_GLOW *)0x0) {
      this_01 = (partEMITTER_PHYS *)0x0;
    }
    else {
      this_01 = (partEMITTER_PHYS *)wrsfxLAVA_EXPL_GLOW::wrsfxLAVA_EXPL_GLOW(this_00,DAT_005d6e68);
    }
    *(partEMITTER_PHYS **)(this + 0x14f) = this_01;
    if (this_01 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed(this_01,local_c,(m3dV *)0x0,(m3dV *)0x0);
      this_02 = (wrsfxLAVA_EXPL_BURN *)operator_new(0x2c0);
      if (this_02 == (wrsfxLAVA_EXPL_BURN *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = wrsfxLAVA_EXPL_BURN::wrsfxLAVA_EXPL_BURN(this_02,DAT_005d6e68);
      }
      *(int *)(this + 0x153) = iVar2;
      if (iVar2 != 0) {
        uVar4 = 0xffffffff;
        pcVar5 = s__burn_emitter;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        poVar3 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__burn_emitter,~uVar4 - 1)
        ;
        if (poVar3 != (objOBJ *)0x0) {
          iVar2 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x153),poVar3,-1,(m3dV *)0x0)
          ;
          if (iVar2 != 0) {
            this_03 = (wrsfxLAVA_EXPL_SPARKS *)operator_new(0x2c0);
            if (this_03 == (wrsfxLAVA_EXPL_SPARKS *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = wrsfxLAVA_EXPL_SPARKS::wrsfxLAVA_EXPL_SPARKS(this_03,DAT_005d6e68);
            }
            *(int *)(this + 0x157) = iVar2;
            if (iVar2 != 0) {
              uVar4 = 0xffffffff;
              pcVar5 = s__sparks_emitter;
              do {
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1;
                cVar1 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 != '\0');
              poVar3 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__sparks_emitter,
                                    ~uVar4 - 1);
              if (poVar3 != (objOBJ *)0x0) {
                iVar2 = partSetAreaEmissionObj
                                  (*(partEMITTER_PHYS **)(this + 0x157),poVar3,-1,(m3dV *)0x0);
                if (iVar2 != 0) {
                  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
                  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
                  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
                  *(undefined4 *)(this + 0x15b) = 0x3f800000;
                }
              }
            }
          }
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
      return 0;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046EF60 */

void __thiscall wrsfxLAVA::LaunchOnePjl(wrsfxLAVA *this,m3dV *param_1)

{
  int iVar1;
  float extraout_ECX;
  float fVar2;
  undefined4 local_124;
  float local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_117;
  undefined2 local_116;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
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
  undefined1 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4 [2];
  float local_9c;
  animCREATE_DATA local_98 [18];
  m3dMATR local_86 [134];
  
  animCREATE_DATA::animCREATE_DATA(local_98);
  local_114 = (float)_m3dVZero;
  local_108 = (float)_m3dVZero;
  local_110 = (float)DAT_00963740;
  local_10c = (float)DAT_00963744;
  local_104 = (float)DAT_00963740;
  local_100 = (float)DAT_00963744;
  local_f8 = DAT_005d6e5c;
  local_118 = 0;
  local_117 = 0x40;
  local_fc = 0x3dcccccd;
  local_f4 = 1;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0xbf800000;
  local_dc = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0xffffffff;
  local_d0 = 0xffffffff;
  local_cc = 0xbf800000;
  local_c8 = 1;
  local_116 = 0x51;
  if (*(int *)(gsSysMP + 0x28) == 1) {
    iVar1 = *(int *)(this + 0x153);
    if (iVar1 != 0) {
      local_c4 = *(float *)(iVar1 + 0x6c);
      local_c0 = *(undefined4 *)(iVar1 + 0x70);
      local_bc = *(undefined4 *)(iVar1 + 0x74);
      local_b8 = *(undefined4 *)(iVar1 + 0x78);
      local_b4 = *(float *)(iVar1 + 0x6c);
      local_b0 = *(float *)(iVar1 + 0x70);
      local_ac = *(undefined4 *)(iVar1 + 0x74);
      local_a8 = *(undefined4 *)(iVar1 + 0x78);
      if (local_c4 < local_b0) {
        return;
      }
    }
    m3dMATR::MakeLCS2WCS_VY(local_86,param_1,&m3dVUnitY);
    entCreate(gsScenePtr,s_sfx_lava_start,s_sfx_lava_start,local_98,(void *)0x0,0);
    local_124 = *(undefined4 *)param_1;
    local_11c = *(undefined4 *)(param_1 + 8);
    local_120 = *(float *)(param_1 + 4) + ___real_3fc00000;
    m3dMATR::MakeLCS2WCS_VY(local_86,(m3dV *)&local_124,&m3dVUnitY);
    local_108 = _m3dVUnitY * _DAT_005d6e6c;
    local_dc = DAT_005d6e74;
    local_e0 = DAT_005d6e70;
    local_d4 = 2;
    local_104 = DAT_005f9994 * _DAT_005d6e6c;
    local_fc = 0x3f800000;
    local_f8 = 0x40e00000;
    local_f4 = 1000;
    local_ec = 0x3f000000;
    local_f0 = 0x3f000000;
    local_100 = DAT_005f9998 * _DAT_005d6e6c;
    m3dMakeVUnitRandom((m3dV *)local_a4);
    local_114 = local_a4[0] * *(float *)(this + 0x173);
    fVar2 = m3dRandMax(extraout_ECX);
    local_110 = (fVar2 + *(float *)(this + 0x177)) - *(float *)(this + 0x17b);
    local_10c = local_9c * *(float *)(this + 0x173);
    entCreate(gsScenePtr,s_sfx_lava_pjl,s_sfx_lava_pjl,local_98,&local_118,0);
  }
  return;
}




/* from: sfx_lava.cpp
   addr: 0046F1F0 */

void __thiscall wrsfxLAVA::GetControlParams(wrsfxLAVA *this)

{
  psSHEET *this_00;
  
  *(int *)(this + 0x163) = 100;
  *(float *)(this + 0x167) = DAT_005d6e78;
  *(int *)(this + 0x16b) = 2;
  *(int *)(this + 0x16f) = 1;
  *(float *)(this + 0x173) = DAT_005d6e7c;
  *(float *)(this + 0x177) = DAT_005d6e80;
  *(float *)(this + 0x17b) = DAT_005d6e84;
  this_00 = *(psSHEET **)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0xc4);
  if (this_00 != (psSHEET *)0x0) {
    psSHEET::GetInt(this_00,s_LAVA,s_countSrcPoly,(int *)(this + 0x163));
    psSHEET::GetFloat(this_00,s_LAVA,s_time,(float *)(this + 0x167));
    psSHEET::GetInt(this_00,s_LAVA,s_count,(int *)(this + 0x16b));
    psSHEET::GetInt(this_00,s_LAVA,s_countDisp,(int *)(this + 0x16f));
    psSHEET::GetFloat(this_00,s_LAVA,s_speedXZ,(float *)(this + 0x173));
    psSHEET::GetFloat(this_00,s_LAVA,s_speedY,(float *)(this + 0x177));
    psSHEET::GetFloat(this_00,s_LAVA,s_speedYDisp,(float *)(this + 0x17b));
  }
  return;
}




/* from: sfx_lava.cpp
   addr: 0046F310 */

int __thiscall
wrsfxLAVA::ProcessMsg(wrsfxLAVA *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  psSHEET *this_00;
  int *piVar4;
  int iVar5;
  int iVar6;
  objOBJ *this_01;
  void *pvVar7;
  int iVar8;
  objFACE *poVar9;
  uint uVar10;
  float *pfVar11;
  float extraout_EDX;
  objOBJ *poVar12;
  float *pfVar13;
  objOBJ *poVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  char local_a8 [72];
  float local_60;
  float local_58;
  float local_54;
  int local_50;
  msgADDR *local_4c;
  int local_48;
  int *local_44;
  int local_40;
  float local_3c [3];
  float local_30 [3];
  float local_24 [3];
  wrsfxLAVA *local_18;
  objOBJ *local_14;
  objOBJ *local_10;
  objOBJ *local_c;
  int local_8;
  
  local_8 = 0;
  local_18 = this;
  waterLAVA::ProcessMsg((waterLAVA *)this,param_1,param_2,param_3,param_4);
  if (param_1 == 1) {
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    GetControlParams(this);
    this_00 = *(psSHEET **)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0xc4);
    if (((this_00 == (psSHEET *)0x0) ||
        (iVar5 = psSHEET::GetStr(this_00,s_LAVA,s_nameEmitter,local_a8,0x40), iVar5 == 0)) ||
       (this_01 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),local_a8), this_01 == (objOBJ *)0x0))
    {
      this_01 = objFind(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),objIsNFace,(void *)0x0);
    }
    else {
      objOBJ::SetStateProcYes(this_01,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    }
    if (this_01 != (objOBJ *)0x0) {
      iVar5 = *(int *)(this_01 + 0x10);
      *(int *)(this + 0x157) = *(int *)(this + 0x163);
      if (iVar5 <= *(int *)(this + 0x163)) {
        *(int *)(this + 0x157) = iVar5;
      }
      local_50 = iVar5;
      pvVar7 = operator_new(*(int *)(this + 0x157) * 0xc);
      *(void **)(this + 0x15b) = pvVar7;
      iVar6 = *(int *)(this + 0x157);
      local_8 = iVar6;
      local_40 = 0;
      if (0 < iVar6) {
        local_48 = 0;
        do {
          iVar8 = local_40;
          if (iVar6 < iVar5) {
            iVar8 = m3dRND_GEN::RndIntMax((m3dRND_GEN *)&local_8,iVar5 + -1);
          }
          if (((byte)*this_01 & 1) == 0) {
            poVar9 = objOBJ::GetFace(this_01,iVar8);
            local_10 = (objOBJ *)local_3c;
            poVar14 = (objOBJ *)
                      (*(int *)(*(int *)(this_01 + 0x28) + 0x40) +
                      (uint)*(ushort *)(poVar9 + 2) * 0xc);
            local_14 = this_01 + 0x3c;
            local_c = poVar14;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar15 = (undefined4)*(undefined8 *)poVar14;
                uVar18 = CONCAT44(uVar15,uVar15);
                uVar15 = (undefined4)((ulonglong)*(undefined8 *)poVar14 >> 0x20);
                uVar21 = CONCAT44(uVar15,uVar15);
                uVar22 = CONCAT44(*(undefined4 *)(poVar14 + 8),*(undefined4 *)(poVar14 + 8));
                uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)local_14);
                uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this_01 + 0x4c));
                uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(this_01 + 0x5c));
                uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(this_01 + 0x6c));
                uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(this_01 + 0x44));
                uVar18 = PackedFloatingADD(uVar17,uVar19);
                uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this_01 + 0x54));
                uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(this_01 + 100));
                uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(this_01 + 0x74));
                uVar18 = PackedFloatingADD(uVar16,uVar18);
                uVar16 = PackedFloatingADD(uVar17,uVar22);
                local_3c[1] = (float)((ulonglong)uVar18 >> 0x20);
                local_3c[0] = (float)uVar18;
                uVar18 = PackedFloatingADD(uVar21,uVar16);
                local_3c[2] = (float)uVar18;
                FastExitMediaState();
              }
              else {
                iVar5 = 0;
                local_c = local_14 + -(int)local_3c;
                pfVar11 = local_3c;
                do {
                  poVar12 = local_c;
                  iVar6 = 0;
                  *pfVar11 = 0.0;
                  poVar12 = poVar12 + (int)pfVar11;
                  do {
                    iVar1 = iVar6 * 4;
                    fVar3 = *(float *)poVar12;
                    iVar6 = iVar6 + 1;
                    poVar12 = poVar12 + 0x10;
                    *pfVar11 = *(float *)(poVar14 + iVar1) * fVar3 + *pfVar11;
                  } while (iVar6 < 3);
                  iVar6 = iVar5 + iVar6 * 4;
                  iVar5 = iVar5 + 1;
                  *pfVar11 = *(float *)(local_14 + iVar6 * 4) + *pfVar11;
                  pfVar11 = pfVar11 + 1;
                  this = local_18;
                } while (iVar5 < 3);
              }
            }
          }
          else {
            piVar4 = *(int **)(this_01 + 0x28);
            uVar10 = (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * iVar8 + 2 + *piVar4);
            iVar5 = piVar4[0x10] + uVar10 * 0xc;
            local_3c[0] = *(float *)(piVar4[0x10] + uVar10 * 0xc);
            local_3c[1] = *(float *)(iVar5 + 4);
            local_3c[2] = *(float *)(iVar5 + 8);
          }
          if (((byte)*this_01 & 1) == 0) {
            piVar4 = *(int **)(this_01 + 0x28);
            local_c = (objOBJ *)local_30;
            local_14 = this_01 + 0x3c;
            poVar14 = (objOBJ *)
                      (piVar4[0x10] +
                      (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * iVar8 + 4 + *piVar4) * 0xc);
            local_10 = poVar14;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar15 = (undefined4)*(undefined8 *)poVar14;
                uVar18 = CONCAT44(uVar15,uVar15);
                uVar15 = (undefined4)((ulonglong)*(undefined8 *)poVar14 >> 0x20);
                uVar21 = CONCAT44(uVar15,uVar15);
                uVar22 = CONCAT44(*(undefined4 *)(poVar14 + 8),*(undefined4 *)(poVar14 + 8));
                uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)local_14);
                uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this_01 + 0x4c));
                uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(this_01 + 0x5c));
                uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(this_01 + 0x6c));
                uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(this_01 + 0x44));
                uVar18 = PackedFloatingADD(uVar17,uVar19);
                uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this_01 + 0x54));
                uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(this_01 + 100));
                uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(this_01 + 0x74));
                uVar18 = PackedFloatingADD(uVar16,uVar18);
                uVar16 = PackedFloatingADD(uVar17,uVar22);
                local_30[1] = (float)((ulonglong)uVar18 >> 0x20);
                local_30[0] = (float)uVar18;
                uVar18 = PackedFloatingADD(uVar21,uVar16);
                local_30[2] = (float)uVar18;
                FastExitMediaState();
              }
              else {
                iVar5 = 0;
                local_c = local_14 + -(int)local_30;
                pfVar11 = local_30;
                do {
                  poVar12 = local_c;
                  iVar6 = 0;
                  *pfVar11 = 0.0;
                  poVar12 = poVar12 + (int)pfVar11;
                  do {
                    iVar1 = iVar6 * 4;
                    fVar3 = *(float *)poVar12;
                    iVar6 = iVar6 + 1;
                    poVar12 = poVar12 + 0x10;
                    *pfVar11 = *(float *)(poVar14 + iVar1) * fVar3 + *pfVar11;
                  } while (iVar6 < 3);
                  iVar6 = iVar5 + iVar6 * 4;
                  iVar5 = iVar5 + 1;
                  *pfVar11 = *(float *)(local_14 + iVar6 * 4) + *pfVar11;
                  pfVar11 = pfVar11 + 1;
                  this = local_18;
                } while (iVar5 < 3);
              }
            }
          }
          else {
            poVar9 = objOBJ::GetFace(this_01,iVar8);
            pfVar11 = (float *)(*(int *)(*(int *)(this_01 + 0x28) + 0x40) +
                               (uint)*(ushort *)(poVar9 + 4) * 0xc);
            local_30[0] = *pfVar11;
            local_30[1] = pfVar11[1];
            local_30[2] = pfVar11[2];
          }
          if (((byte)*this_01 & 1) == 0) {
            local_c = (objOBJ *)local_24;
            piVar4 = *(int **)(this_01 + 0x28);
            poVar14 = this_01 + 0x3c;
            local_10 = poVar14;
            puVar2 = (undefined8 *)
                     (piVar4[0x10] +
                     (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * iVar8 + 6 + *piVar4) * 0xc);
            this = local_18;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar15 = (undefined4)*puVar2;
                uVar18 = CONCAT44(uVar15,uVar15);
                uVar15 = (undefined4)((ulonglong)*puVar2 >> 0x20);
                uVar21 = CONCAT44(uVar15,uVar15);
                uVar22 = CONCAT44(*(undefined4 *)(puVar2 + 1),*(undefined4 *)(puVar2 + 1));
                uVar16 = PackedFloatingMUL(uVar18,*(undefined8 *)poVar14);
                uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this_01 + 0x4c));
                uVar19 = PackedFloatingMUL(uVar22,*(undefined8 *)(this_01 + 0x5c));
                uVar16 = PackedFloatingADD(uVar16,*(undefined8 *)(this_01 + 0x6c));
                uVar20 = PackedFloatingMUL(uVar18,*(undefined8 *)(this_01 + 0x44));
                uVar18 = PackedFloatingADD(uVar17,uVar19);
                uVar17 = PackedFloatingMUL(uVar21,*(undefined8 *)(this_01 + 0x54));
                uVar22 = PackedFloatingMUL(uVar22,*(undefined8 *)(this_01 + 100));
                uVar21 = PackedFloatingADD(uVar20,*(undefined8 *)(this_01 + 0x74));
                uVar18 = PackedFloatingADD(uVar16,uVar18);
                uVar16 = PackedFloatingADD(uVar17,uVar22);
                local_24[1] = (float)((ulonglong)uVar18 >> 0x20);
                local_24[0] = (float)uVar18;
                uVar18 = PackedFloatingADD(uVar21,uVar16);
                local_24[2] = (float)uVar18;
                FastExitMediaState();
              }
              else {
                iVar5 = 0;
                pfVar11 = local_24;
                do {
                  iVar6 = 0;
                  *pfVar11 = 0.0;
                  pfVar13 = (float *)(((int)poVar14 - (int)local_24) + (int)pfVar11);
                  do {
                    iVar8 = iVar6 * 4;
                    fVar3 = *pfVar13;
                    iVar6 = iVar6 + 1;
                    pfVar13 = pfVar13 + 4;
                    *pfVar11 = *(float *)((int)puVar2 + iVar8) * fVar3 + *pfVar11;
                  } while (iVar6 < 3);
                  iVar6 = iVar5 + iVar6 * 4;
                  iVar5 = iVar5 + 1;
                  *pfVar11 = *(float *)(poVar14 + iVar6 * 4) + *pfVar11;
                  pfVar11 = pfVar11 + 1;
                  this = local_18;
                } while (iVar5 < 3);
              }
            }
          }
          else {
            piVar4 = *(int **)(this_01 + 0x28);
            uVar10 = (uint)*(ushort *)((uint)*(byte *)(piVar4 + 1) * iVar8 + 6 + *piVar4);
            iVar5 = piVar4[0x10] + uVar10 * 0xc;
            local_24[0] = *(float *)(piVar4[0x10] + uVar10 * 0xc);
            local_24[1] = *(float *)(iVar5 + 4);
            local_24[2] = *(float *)(iVar5 + 8);
          }
          m3dRandBasicCoord((float *)&param_4,(float *)&param_3);
          local_60 = local_30[2] - local_3c[2];
          local_4c = param_3;
          pfVar11 = (float *)(*(int *)(this + 0x15b) + local_48);
          local_44 = param_4;
          local_58 = local_24[1] - local_3c[1];
          local_54 = local_24[2] - local_3c[2];
          *pfVar11 = (local_24[0] - local_3c[0]) * (float)param_3 +
                     (local_30[0] - local_3c[0]) * (float)param_4;
          pfVar11[1] = local_58 * (float)param_3 + (local_30[1] - local_3c[1]) * (float)param_4;
          pfVar11[2] = local_54 * (float)param_3 + local_60 * (float)param_4;
          pfVar11 = (float *)(*(int *)(this + 0x15b) + local_48);
          pfVar13 = (float *)(*(int *)(this + 0x15b) + local_48);
          local_40 = local_40 + 1;
          local_48 = local_48 + 0xc;
          *pfVar13 = local_3c[0] + *pfVar11;
          pfVar13[1] = local_3c[1] + pfVar13[1];
          pfVar13[2] = local_3c[2] + pfVar13[2];
          iVar6 = *(int *)(this + 0x157);
          iVar5 = local_50;
        } while (local_40 < iVar6);
      }
      *(undefined4 *)(this + 0x15f) = *(undefined4 *)(this + 0x167);
    }
  }
  else if (param_1 == 2) {
    if (*(void **)(this + 0x15b) != (void *)0x0) {
      operator_delete(*(void **)(this + 0x15b));
      *(undefined4 *)(this + 0x15b) = 0;
      return 0;
    }
  }
  else if (param_1 == 1000) {
    iVar5 = m3dUpdateTimeField((float *)(this + 0x15f),extraout_EDX);
    if ((iVar5 != 0) &&
       (*(float *)(this + 0x15f) = *(float *)(this + 0x167),
       (*(byte *)(*(int *)(this + 0xbc) + 4) & 2) == 0)) {
      iVar5 = m3dRandIntMax(*(int *)(this + 0x16f) * 2);
      iVar5 = iVar5 + (*(int *)(this + 0x16b) - *(int *)(this + 0x16f));
      if (0 < iVar5) {
        do {
          iVar6 = m3dRandIntMax(*(int *)(this + 0x157) + -1);
          LaunchOnePjl(this,(m3dV *)(*(int *)(this + 0x15b) + iVar6 * 0xc));
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        return 0;
      }
    }
  }
  return 0;
}




/* from: sfx_lava.cpp
   addr: 0046FB50 */

objFACE * __thiscall objOBJ::GetFace(objOBJ *this,int param_1)

{
  return (objFACE *)
         ((uint)*(byte *)(*(int **)(this + 0x28) + 1) * param_1 + **(int **)(this + 0x28));
}




/* from: sfx_lava.cpp
   addr: 0046FB70 */

entENTITY * __fastcall wrsfxLAVA_START::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_lava.cpp
   addr: 0046FBC0
   addr: 0046FBC0 */

void * __thiscall wrsfxLAVA_START::_scalar_deleting_destructor_(wrsfxLAVA_START *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_lava.cpp
   addr: 0046FBF0 */

entENTITY * __fastcall wrsfxLAVA_PJL::Create(animINST *param_1)

{
  physPHYS *this;
  
  this = (physPHYS *)operator_new(0x17c);
  if (this != (physPHYS *)0x0) {
    physPHYS::physPHYS(this);
    *(undefined4 *)(this + 0x163) = 0xffffffff;
    *(undefined4 *)(this + 0x167) = 0xffffffff;
    *(undefined4 *)(this + 0x16b) = 0xffffffff;
    *(undefined4 *)(this + 0x15b) = 0xbf800000;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x16f) = 0xbf800000;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined ***)this = &_vftable_;
    return (entENTITY *)this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_lava.cpp
   addr: 0046FC60 */

int __thiscall
pjlPJL<struct_wrsfxLAVA_TRAIL>::ProcessINIT(pjlPJL<struct_wrsfxLAVA_TRAIL> *this,physINIT *param_1)

{
  int iVar1;
  entIACTIVE_OBJ *peVar2;
  
  iVar1 = physPHYS::ProcessINIT((physPHYS *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(this + 0x15b) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15f) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x167) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x163) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x16f) = *(undefined4 *)(param_1 + 0x4c);
  this[0x173] = *(pjlPJL<struct_wrsfxLAVA_TRAIL> *)(param_1 + 0x50);
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
    wrsfxLAVA_TRAIL::StartSFX
              ((wrsfxLAVA_TRAIL *)(this + 0x153),(physPHYS *)this,(pjlPJL_INIT *)param_1);
  }
  return 1;
}




/* from: sfx_lava.cpp
   addr: 0046FD10 */

void __thiscall pjlPJL<struct_wrsfxLAVA_TRAIL>::ProcessTERM(pjlPJL<struct_wrsfxLAVA_TRAIL> *this)

{
  if (*(partEMITTER_PHYS **)(this + 0x157) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x157));
    *(undefined4 *)(this + 0x157) = 0;
  }
  if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x153) = 0;
  }
  physPHYS::ProcessTERM((physPHYS *)this);
  return;
}




/* from: sfx_lava.cpp
   addr: 0046FD50 */

void __thiscall pjlPJL<struct_wrsfxLAVA_TRAIL>::ProcessFRAME(pjlPJL<struct_wrsfxLAVA_TRAIL> *this)

{
  animINST *this_00;
  m3dV local_c [12];
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    physPHYS::ProcessFRAME((physPHYS *)this);
    this_00 = *(animINST **)(this + 0xbc);
    animINST::AdvanceTime(this_00,gsElapsedTime,0,(float *)0x0);
    animINST::Validate(this_00,4);
    animINST::GetPos(this_00,local_c);
    if (*(partEMITTER_PHYS **)(this + 0x157) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x157),local_c,(m3dV *)0x0,(m3dV *)(this + 0xe0));
    }
    if (*(partEMITTER_PHYS **)(this + 0x153) != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x153),local_c,(m3dV *)0x0,(m3dV *)(this + 0xe0));
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0
   addr: 0046FDE0 */

int __thiscall
pjlPJL<struct_pwpCRB_PJL_SFX>::ProcessCDT(pjlPJL<struct_pwpCRB_PJL_SFX> *this,cdtINFO *param_1)

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
  local_8 = DAT_005f9998;
  local_20 = 1;
  local_28 = (msgDATA)0x0;
  local_27 = 0x40;
  local_c = DAT_005f9994;
  local_4 = 0;
  local_24 = 0;
  local_26 = 0x28;
  if (((byte)this[0x88] & 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x13c), iVar2 != 0)) {
      if ((*(byte *)(iVar2 + 0xb8) & 1) == 0) {
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
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_lava.cpp
   addr: 0046FF30 */

void __thiscall
pjlPJL<struct_wrsfxLAVA_TRAIL>::ProcessEV_CDT
          (pjlPJL<struct_wrsfxLAVA_TRAIL> *this,pjlEV_CDT *param_1)

{
  int iVar1;
  
  *(uint *)(this + 0x174) = *(uint *)(this + 0x174) | 1;
  if (*(partEMITTER_PHYS **)(this + 0x157) != (partEMITTER_PHYS *)0x0) {
    partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x157));
    *(undefined4 *)(this + 0x157) = 0;
  }
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




/* from: sfx_lava.cpp
   addr: 0046FFD0
   addr: 0046FFD0
   addr: 0046FFD0
   addr: 0046FFD0 */

void * __thiscall
pjlPJL<struct_wrsfxLAVA_TRAIL>::_vector_deleting_destructor_
          (pjlPJL<struct_wrsfxLAVA_TRAIL> *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  physPHYS::~physPHYS((physPHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_lava.cpp
   addr: 00470000 */

entENTITY * __fastcall wrsfxLAVA_EXPL::Create(animINST *param_1)

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




/* from: sfx_lava.cpp
   addr: 00470050
   addr: 00470050 */

void * __thiscall wrsfxLAVA_EXPL::_scalar_deleting_destructor_(wrsfxLAVA_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_lava.cpp
   addr: 00470080 */

entENTITY * __fastcall wrsfxLAVA::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x17f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_lava.cpp
   addr: 004700D0
   addr: 004700D0
   addr: 004700D0
   addr: 004700D0
   addr: 004700D0
   addr: 004700D0
   addr: 004700D0
   addr: 004700D0 */

void * __thiscall wrsfxLAVA::_scalar_deleting_destructor_(wrsfxLAVA *this,uint param_1)

{
  *(undefined ***)this = &waterLIQUID::_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

