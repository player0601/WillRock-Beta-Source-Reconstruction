
/* from: sfx_fountain.cpp
   addr: 0046A690 */

int __fastcall wrsfxFountainInit(void)

{
  int iVar1;
  
  wrsfxFOUNTAIN::pPartTex = txmMANAGER::Add(txmManager,s_sfx_fountain_part,0x40003,1);
  if (wrsfxFOUNTAIN::pPartTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxFOUNTAIN::pDropTex = txmMANAGER::Add(txmManager,s_sfx_fountain_drop,0x40003,1);
  if (wrsfxFOUNTAIN::pDropTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_fountain,0x24534658,0x50,wrsfxFOUNTAIN::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_fountain.cpp
   addr: 0046A700 */

wrsfxFOUNTAIN_TOP_EMITTER_C * __thiscall
wrsfxFOUNTAIN_TOP_EMITTER_C::wrsfxFOUNTAIN_TOP_EMITTER_C
          (wrsfxFOUNTAIN_TOP_EMITTER_C *this,float param_1,ulong param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,400.0,0.8);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,10.0,(m3dSPL_LINEAR1D *)0x0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,param_1 * ___real_3dcccccd);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.5,param_1 * ___real_3d4ccccd);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,param_1 * ___real_00000000);
  fVar2 = param_1 * ___real_3e4ccccd;
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar4,10.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,51.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,param_2,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxFOUNTAIN::pPartTex);
  fVar3 = param_1 * ___real_c1a00000;
  *(undefined4 *)(this + 0xcc) = 0x40000000;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xe0) = fVar3;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x4000408;
  *(uint *)(this + 4) = uVar1 | 0xc000408;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_fountain.cpp
   addr: 0046A8C0 */

wrsfxFOUNTAIN_MED_EMITTER_C * __thiscall
wrsfxFOUNTAIN_MED_EMITTER_C::wrsfxFOUNTAIN_MED_EMITTER_C
          (wrsfxFOUNTAIN_MED_EMITTER_C *this,float param_1,ulong param_2)

{
  uint uVar1;
  m3dSPL *pmVar2;
  m3dMATR local_40 [64];
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,400.0,0.3);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,5.0,(m3dSPL_LINEAR1D *)0x0);
  pmVar2 = (m3dSPL *)operator_new(0x34);
  if (pmVar2 == (m3dSPL *)0x0) {
    pmVar2 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar2,0,8,1);
    *(undefined ***)pmVar2 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar2,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_3f8428f6);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,param_1 * ___real_40200000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f000000,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.14,61.199997);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,param_2,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  *(undefined4 *)(this + 0xcc) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxFOUNTAIN::pPartTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.0,0.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc1a00000;
  *(undefined4 *)(this + 0xe4) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x4000408;
  *(uint *)(this + 4) = uVar1 | 0x5000408;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,0.025,1.0,0.025);
  m3dMATR::Identity(local_40);
  partEMITTER_PHYS::SetScaleCS((partEMITTER_PHYS *)this,local_40);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_fountain.cpp
   addr: 0046AAD0 */

wrsfxFOUNTAIN_BOT_EMITTER_C * __thiscall
wrsfxFOUNTAIN_BOT_EMITTER_C::wrsfxFOUNTAIN_BOT_EMITTER_C
          (wrsfxFOUNTAIN_BOT_EMITTER_C *this,float param_1,ulong param_2)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  m3dMATR local_40 [64];
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,1200.0,0.3);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,10.0,(m3dSPL_LINEAR1D *)0x0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_3f8428f6);
  fVar2 = param_1 * ___real_40200000;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.14,61.199997);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,param_2,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  *(undefined4 *)(this + 0xcc) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxFOUNTAIN::pPartTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.0,0.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0xc1a00000;
  *(undefined4 *)(this + 0xe4) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x4000408;
  *(uint *)(this + 4) = uVar1 | 0x5000408;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,0.04,1.0,0.04);
  m3dMATR::Identity(local_40);
  partEMITTER_PHYS::SetScaleCS((partEMITTER_PHYS *)this,local_40);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_fountain.cpp
   addr: 0046ACC0 */

wrsfxFOUNTAIN_DROPS_EMITTER * __thiscall
wrsfxFOUNTAIN_DROPS_EMITTER::wrsfxFOUNTAIN_DROPS_EMITTER
          (wrsfxFOUNTAIN_DROPS_EMITTER *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  m3dMATR local_40 [64];
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,1.0);
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
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_00000000);
  fVar2 = param_1 * ___real_3fc00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.12,92.82);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxFOUNTAIN::pDropTex);
  fVar2 = param_1 * ___real_3e4ccccd;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xc0) = fVar2;
  *(float *)(this + 0xc4) = param_1 * ___real_3dcccccd;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0xa000;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  *(uint *)(this + 4) = uVar1 | 0x100a408;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,1.0,0.1,1.0);
  m3dMATR::Identity(local_40);
  partEMITTER_PHYS::SetScaleCS((partEMITTER_PHYS *)this,local_40);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000000;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_fountain.cpp
   addr: 0046AE90 */

int __thiscall wrsfxFOUNTAIN::ProcessINIT(wrsfxFOUNTAIN *this,float param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  partEMITTER_PHYS *ppVar6;
  wrsfxFOUNTAIN_TOP_EMITTER_C *this_00;
  objOBJ *poVar7;
  wrsfxFOUNTAIN_MED_EMITTER_C *this_01;
  wrsfxFOUNTAIN_BOT_EMITTER_C *this_02;
  wrsfxFOUNTAIN_DROPS_EMITTER *this_03;
  int iVar8;
  wrsfxFOUNTAIN *pwVar9;
  undefined **local_64;
  undefined4 local_60;
  undefined4 local_5c;
  m3dV local_58 [12];
  m3dV local_4c [12];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _m3dVZero;
  local_c = DAT_00963740;
  local_5c = 0;
  local_64 = &cdtREFINE::_vftable_;
  local_60 = 2;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_8 = DAT_00963744;
  local_4 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  m3dMATR::GetOrigin((m3dMATR *)(*(int *)(this + 0xbc) + 0x60),local_58);
  scnSCENE::FloorPlace
            (gsScenePtr,local_58,30.0,local_4c,10.0,1.0,0,(cdtREFINE *)&local_64,
             (cdtINFO *)&local_20);
  gsEffEnvirColor((cdtINFO *)&local_20,(m3dCOLOR *)&local_40,(m3dCOLOR *)&local_30);
  iVar2 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  uVar5 = ftol();
  uVar3 = ((iVar2 << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff) << 8 | uVar5 & 0xff;
  ppVar6 = (partEMITTER_PHYS *)operator_new(0x2c0);
  if (ppVar6 == (partEMITTER_PHYS *)0x0) {
    ppVar6 = (partEMITTER_PHYS *)0x0;
  }
  else {
    partEMITTER_PHYS::partEMITTER_PHYS(ppVar6,100.0,0.5);
    *(undefined ***)ppVar6 = &wrsfxFOUNTAIN_TOP_EMITTER::_vftable_;
    *(undefined4 *)(ppVar6 + 0xbc) = 0;
    *(undefined4 *)(ppVar6 + 200) = 0;
    *(float *)(ppVar6 + 0xb4) = param_1 + param_1;
    *(float *)(ppVar6 + 0xb8) = param_1 + param_1;
    fVar1 = param_1 * ___real_3e3851ec;
    *(float *)(ppVar6 + 0xc0) = fVar1;
    *(float *)(ppVar6 + 0xc4) = fVar1;
    uVar4 = *(uint *)(ppVar6 + 4);
    *(uint *)(ppVar6 + 4) = uVar4 | 0x2000;
    *(uint *)(ppVar6 + 4) = uVar4 | 0xa000;
    *(uint *)(ppVar6 + 4) = uVar4 | 0x40a000;
    *(uint *)(ppVar6 + 4) = uVar4 | 0x840a000;
  }
  *(partEMITTER_PHYS **)(this + 0x14f) = ppVar6;
  if (ppVar6 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  this_00 = (wrsfxFOUNTAIN_TOP_EMITTER_C *)operator_new(0x2c0);
  if (this_00 == (wrsfxFOUNTAIN_TOP_EMITTER_C *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxFOUNTAIN_TOP_EMITTER_C::wrsfxFOUNTAIN_TOP_EMITTER_C(this_00,param_1,uVar3);
  }
  *(int *)(this + 0x153) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar7 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_AreaTop);
  *(objOBJ **)(this + 0x157) = poVar7;
  if (poVar7 == (objOBJ *)0x0) {
    return 0;
  }
  ppVar6 = (partEMITTER_PHYS *)operator_new(0x2c0);
  if (ppVar6 == (partEMITTER_PHYS *)0x0) {
    ppVar6 = (partEMITTER_PHYS *)0x0;
  }
  else {
    partEMITTER_PHYS::partEMITTER_PHYS(ppVar6,200.0,0.3);
    fVar1 = param_1 * ___real_3f000000;
    *(undefined ***)ppVar6 = &wrsfxFOUNTAIN_MED_EMITTER::_vftable_;
    *(undefined4 *)(ppVar6 + 0xb8) = 0;
    *(undefined4 *)(ppVar6 + 0xbc) = 0;
    *(undefined4 *)(ppVar6 + 0xdc) = 0;
    *(undefined4 *)(ppVar6 + 0xe4) = 0;
    *(float *)(ppVar6 + 0xb4) = fVar1;
    *(float *)(ppVar6 + 0xe0) = param_1 * ___real_c1a00000;
    uVar4 = *(uint *)(ppVar6 + 4);
    *(uint *)(ppVar6 + 4) = uVar4 | 0x2000;
    *(uint *)(ppVar6 + 4) = uVar4 | 0xa000;
    *(uint *)(ppVar6 + 4) = uVar4 | 0x40a000;
    *(uint *)(ppVar6 + 4) = uVar4 | 0x840a000;
  }
  *(partEMITTER_PHYS **)(this + 0x15b) = ppVar6;
  if (ppVar6 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  this_01 = (wrsfxFOUNTAIN_MED_EMITTER_C *)operator_new(0x2c0);
  if (this_01 == (wrsfxFOUNTAIN_MED_EMITTER_C *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxFOUNTAIN_MED_EMITTER_C::wrsfxFOUNTAIN_MED_EMITTER_C(this_01,param_1,uVar3);
  }
  *(int *)(this + 0x15f) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar7 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_AreaMed);
  *(objOBJ **)(this + 0x163) = poVar7;
  if (poVar7 == (objOBJ *)0x0) {
    return 0;
  }
  ppVar6 = (partEMITTER_PHYS *)operator_new(0x2c0);
  if (ppVar6 == (partEMITTER_PHYS *)0x0) {
    ppVar6 = (partEMITTER_PHYS *)0x0;
  }
  else {
    partEMITTER_PHYS::partEMITTER_PHYS(ppVar6,400.0,0.3);
    fVar1 = param_1 * ___real_3f000000;
    *(undefined ***)ppVar6 = &wrsfxFOUNTAIN_BOT_EMITTER::_vftable_;
    *(undefined4 *)(ppVar6 + 0xb8) = 0;
    *(undefined4 *)(ppVar6 + 0xbc) = 0;
    *(undefined4 *)(ppVar6 + 0xdc) = 0;
    *(undefined4 *)(ppVar6 + 0xe4) = 0;
    *(float *)(ppVar6 + 0xb4) = fVar1;
    *(float *)(ppVar6 + 0xe0) = param_1 * ___real_c1a00000;
    uVar4 = *(uint *)(ppVar6 + 4);
    *(uint *)(ppVar6 + 4) = uVar4 | 0x2000;
    *(uint *)(ppVar6 + 4) = uVar4 | 0xa000;
    *(uint *)(ppVar6 + 4) = uVar4 | 0x40a000;
    *(uint *)(ppVar6 + 4) = uVar4 | 0x840a000;
  }
  *(partEMITTER_PHYS **)(this + 0x167) = ppVar6;
  if (ppVar6 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  this_02 = (wrsfxFOUNTAIN_BOT_EMITTER_C *)operator_new(0x2c0);
  if (this_02 == (wrsfxFOUNTAIN_BOT_EMITTER_C *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxFOUNTAIN_BOT_EMITTER_C::wrsfxFOUNTAIN_BOT_EMITTER_C(this_02,param_1,uVar3);
  }
  *(int *)(this + 0x16b) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar7 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_AreaBot);
  *(objOBJ **)(this + 0x16f) = poVar7;
  if (poVar7 == (objOBJ *)0x0) {
    return 0;
  }
  this_03 = (wrsfxFOUNTAIN_DROPS_EMITTER *)operator_new(0x2c0);
  if (this_03 == (wrsfxFOUNTAIN_DROPS_EMITTER *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = wrsfxFOUNTAIN_DROPS_EMITTER::wrsfxFOUNTAIN_DROPS_EMITTER(this_03,param_1);
  }
  *(int *)(this + 0x173) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar7 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_AreaDrops);
  *(objOBJ **)(this + 0x17b) = poVar7;
  if (poVar7 != (objOBJ *)0x0) {
    *(undefined4 *)(this + 0x177) = 0;
    iVar2 = 0;
    pwVar9 = this + 0x14f;
    while( true ) {
      if (*(partEMITTER_PHYS **)(pwVar9 + 4) != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::AttachEmitter
                  (*(partEMITTER_PHYS **)pwVar9,*(partEMITTER_PHYS **)(pwVar9 + 4),0,0);
        *(uint *)(*(int *)pwVar9 + 4) = *(uint *)(*(int *)pwVar9 + 4) | 0x40000;
      }
      iVar8 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)pwVar9,*(objOBJ **)(pwVar9 + 8),-1,(m3dV *)0x0);
      if (iVar8 == 0) break;
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)pwVar9);
      partAttachInst(*(partEMITTER_PHYS **)pwVar9,*(animINST **)(this + 0xbc));
      if (*(partEMITTER_PHYS **)(pwVar9 + 4) != (partEMITTER_PHYS *)0x0) {
        partAttachInst(*(partEMITTER_PHYS **)(pwVar9 + 4),*(animINST **)(this + 0xbc));
      }
      iVar2 = iVar2 + 1;
      pwVar9 = pwVar9 + 0xc;
      if (3 < iVar2) {
        return 1;
      }
    }
  }
  return 0;
}




/* from: sfx_fountain.cpp
   addr: 0046B380 */

int __thiscall
wrsfxFOUNTAIN::ProcessMsg
          (wrsfxFOUNTAIN *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  wrsfxFOUNTAIN *pwVar2;
  
  if (param_1 == 1) {
    ProcessINIT(this,1.0);
  }
  else if (param_1 == 2) {
    pwVar2 = this + 0x153;
    iVar1 = 4;
    do {
      if (*(undefined4 **)(pwVar2 + -4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(pwVar2 + -4))(1);
      }
      *(int *)(pwVar2 + -4) = 0;
      if (*(undefined4 **)pwVar2 != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)pwVar2)(1);
        *(int *)pwVar2 = 0;
      }
      pwVar2 = pwVar2 + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0;
  }
  return 0;
}




/* from: sfx_fountain.cpp
   addr: 0046B3E0 */

entENTITY * __fastcall wrsfxFOUNTAIN::Create(animINST *param_1)

{
  entENTITY *this;
  entENTITY *peVar1;
  int iVar2;
  
  this = (entENTITY *)operator_new(0x17f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    peVar1 = this + 0x153;
    iVar2 = 4;
    do {
      *(undefined4 *)(peVar1 + -4) = 0;
      *(undefined4 *)peVar1 = 0;
      *(undefined4 *)(peVar1 + 4) = 0;
      peVar1 = peVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_fountain.cpp
   addr: 0046B430
   addr: 0046B430 */

void * __thiscall wrsfxFOUNTAIN::_scalar_deleting_destructor_(wrsfxFOUNTAIN *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

