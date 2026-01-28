
/* from: sfx_opp_appear.cpp
   addr: 00473320 */

int __fastcall wrsfxOppAppearInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_opp_appear,0x24534658,0x50,wrsfxOPP_APPEAR::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxOPP_APPEAR::pTexGlow = txmMANAGER::Add(txmManager,s_sfx_opp_appear_glow,3,1);
  if (wrsfxOPP_APPEAR::pTexGlow == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxOPP_APPEAR::pTexLgtn = txmMANAGER::Add(txmManager,s_sfx_opp_appear_lgtn,3,1);
  if (wrsfxOPP_APPEAR::pTexLgtn == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(1,(sncSOUND_DESCR_3D *)&DAT_0060e7e8);
  if (iVar1 == 0) {
    apMsg(s_Cannot_link_sound_data);
    return 0;
  }
  return 1;
}




/* from: sfx_opp_appear.cpp
   addr: 004733B0 */

entENTITY * __fastcall wrsfxOPP_APPEAR::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x157);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_opp_appear.cpp
   addr: 004733F0
   addr: 004733F0 */

void * __thiscall wrsfxOPP_APPEAR::_vector_deleting_destructor_(wrsfxOPP_APPEAR *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_opp_appear.cpp
   addr: 00473420 */

wrsfxOPP_APPEAR_GLOW * __thiscall
wrsfxOPP_APPEAR_GLOW::wrsfxOPP_APPEAR_GLOW(wrsfxOPP_APPEAR_GLOW *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,30.0,0.9);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,30.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.5,30.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.53333336,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.6,0.3);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_418c0000);
  fVar2 = param_1 * ___real_420c0000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar2);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxOPP_APPEAR::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x609;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_opp_appear.cpp
   addr: 00473630 */

wrsfxOPP_APPEAR_LGTN * __thiscall
wrsfxOPP_APPEAR_LGTN::wrsfxOPP_APPEAR_LGTN(wrsfxOPP_APPEAR_LGTN *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x14,20.0,0.2);
  *(undefined ***)this = &_vftable_;
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.033333335,20.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,0.53333336,20.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,3,0.56666666,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.15,0.05);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  fVar2 = param_1 * ___real_41200000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.0,param_1 * ___real_41500000);
  fVar3 = param_1 * ___real_40a00000;
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,fVar3,(m3dSPL_LINEAR1D *)pmVar4,1.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxOPP_APPEAR::pTexLgtn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xe8) = fVar3;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x609;
  return this;
}




/* from: sfx_opp_appear.cpp
   addr: 00473840 */

int __thiscall
wrsfxOPP_APPEAR::ProcessMsg
          (wrsfxOPP_APPEAR *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  wrsfxOPP_APPEAR_GLOW *this_00;
  partEMITTER_PHYS *ppVar1;
  wrsfxOPP_APPEAR_LGTN *this_01;
  m3dV local_c [12];
  
  if (param_1 == 1) {
    m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),local_c);
    this_00 = (wrsfxOPP_APPEAR_GLOW *)operator_new(0x2c0);
    if (this_00 == (wrsfxOPP_APPEAR_GLOW *)0x0) {
      ppVar1 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar1 = (partEMITTER_PHYS *)wrsfxOPP_APPEAR_GLOW::wrsfxOPP_APPEAR_GLOW(this_00,0.1);
    }
    *(partEMITTER_PHYS **)(this + 0x14f) = ppVar1;
    if (ppVar1 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed(ppVar1,local_c,(m3dV *)0x0,(m3dV *)0x0);
      this_01 = (wrsfxOPP_APPEAR_LGTN *)operator_new(0x2c0);
      if (this_01 == (wrsfxOPP_APPEAR_LGTN *)0x0) {
        ppVar1 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar1 = (partEMITTER_PHYS *)wrsfxOPP_APPEAR_LGTN::wrsfxOPP_APPEAR_LGTN(this_01,0.1);
      }
      *(partEMITTER_PHYS **)(this + 0x153) = ppVar1;
      if (ppVar1 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar1,local_c,(m3dV *)0x0,(m3dV *)0x0);
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
        gsSND_SYSTEM::Play(gsSysSound,(sncSOUND_DESCR_3D *)&DAT_0060e7e8,local_c);
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
      }
    }
  }
  return 0;
}

