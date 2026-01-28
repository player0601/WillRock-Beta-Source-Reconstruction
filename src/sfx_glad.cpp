
/* from: sfx_glad.cpp
   addr: 0046C7F0 */

int __fastcall wrsfxGladInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_glad_mace_expl,0x24534658,0x50,wrsfxGLAD_MACE_EXPL::Create,
                           (char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxGLAD_MACE_EXPL::pTexBurn = txmMANAGER::Add(txmManager,s_sfx_glad_mace_expl_burn,0x40003,1);
  if (wrsfxGLAD_MACE_EXPL::pTexBurn == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxGLAD_MACE_EXPL::pTexGlow = txmMANAGER::Add(txmManager,s_pwp_amg_pjl_expl_sparks,0x40003,1);
  if (wrsfxGLAD_MACE_EXPL::pTexGlow == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxGLAD_MACE_EXPL::pTexSparks = txmMANAGER::Add(txmManager,s_pwp_crb_pjl_sparks,0x40000,1);
  if (wrsfxGLAD_MACE_EXPL::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxGLAD_MACE_EXPL::pTexBurn1 = txmMANAGER::Add(txmManager,s_sfx_glad_mace_expl_burn1,0x40003,1);
  return (uint)(wrsfxGLAD_MACE_EXPL::pTexBurn1 != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_glad.cpp
   addr: 0046C8A0 */

wrsfxGLAD_MACE_EXPL_BURN * __thiscall
wrsfxGLAD_MACE_EXPL_BURN::wrsfxGLAD_MACE_EXPL_BURN(wrsfxGLAD_MACE_EXPL_BURN *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x14,200.0,0.6);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.45,0.15);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41180000,param_1 * ___real_3fc00000,
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGLAD_MACE_EXPL::pTexBurn);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,120.0);
  fVar1 = param_1 * ___real_40400000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xe8) = fVar1;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb8) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = param_1 + param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_glad.cpp
   addr: 0046CAC0 */

wrsfxGLAD_MACE_EXPL_GLOW * __thiscall
wrsfxGLAD_MACE_EXPL_GLOW::wrsfxGLAD_MACE_EXPL_GLOW(wrsfxGLAD_MACE_EXPL_GLOW *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,7,50.0,0.6);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,50.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.06666667,50.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.35,0.25);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_40a00000);
  fVar1 = param_1 * ___real_41a00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,1.0,fVar1);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGLAD_MACE_EXPL::pTexGlow);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_glad.cpp
   addr: 0046CD00 */

wrsfxGLAD_MACE_EXPL_SPARKS * __thiscall
wrsfxGLAD_MACE_EXPL_SPARKS::wrsfxGLAD_MACE_EXPL_SPARKS
          (wrsfxGLAD_MACE_EXPL_SPARKS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,300,3000.0,0.6);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,3000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.06666667,3000.0);
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
  fVar2 = param_1 * ___real_3f400000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGLAD_MACE_EXPL::pTexSparks);
  fVar2 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 * ___real_41700000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_40f00000;
  *(float *)(this + 0xc0) = param_1 * ___real_40400000;
  *(float *)(this + 0xc4) = param_1 * ___real_3fc00000;
  *(float *)(this + 0xe0) = param_1 * ___real_c0a00000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_glad.cpp
   addr: 0046CF20 */

wrsfxGLAD_MACE_EXPL_BURN1 * __thiscall
wrsfxGLAD_MACE_EXPL_BURN1::wrsfxGLAD_MACE_EXPL_BURN1(wrsfxGLAD_MACE_EXPL_BURN1 *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xf,100.0,0.4);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.033333335,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.06666667,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.1,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.13333334,0.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_40a00000);
  fVar1 = param_1 * ___real_41a00000;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxGLAD_MACE_EXPL::pTexBurn1);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,7.0,30.0,4.0,0.6);
  return this;
}




/* from: sfx_glad.cpp
   addr: 0046D180 */

int __thiscall
wrsfxGLAD_MACE_EXPL::ProcessMsg
          (wrsfxGLAD_MACE_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  wrsfxGLAD_MACE_EXPL_BURN *this_00;
  partEMITTER_PHYS *ppVar3;
  wrsfxGLAD_MACE_EXPL_GLOW *this_01;
  wrsfxGLAD_MACE_EXPL_SPARKS *this_02;
  objOBJ *this_03;
  wrsfxGLAD_MACE_EXPL_BURN1 *this_04;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar1 = *param_2;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
    animINST::GetPos(*(animINST **)(this + 0xbc),local_c);
    this_00 = (wrsfxGLAD_MACE_EXPL_BURN *)operator_new(0x2c0);
    if (this_00 == (wrsfxGLAD_MACE_EXPL_BURN *)0x0) {
      ppVar3 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar3 = (partEMITTER_PHYS *)wrsfxGLAD_MACE_EXPL_BURN::wrsfxGLAD_MACE_EXPL_BURN(this_00,fVar1)
      ;
    }
    *(partEMITTER_PHYS **)(this + 0x14f) = ppVar3;
    if (ppVar3 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
      this_01 = (wrsfxGLAD_MACE_EXPL_GLOW *)operator_new(0x2c0);
      if (this_01 == (wrsfxGLAD_MACE_EXPL_GLOW *)0x0) {
        ppVar3 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar3 = (partEMITTER_PHYS *)
                 wrsfxGLAD_MACE_EXPL_GLOW::wrsfxGLAD_MACE_EXPL_GLOW(this_01,fVar1);
      }
      *(partEMITTER_PHYS **)(this + 0x153) = ppVar3;
      if (ppVar3 != (partEMITTER_PHYS *)0x0) {
        partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
        this_02 = (wrsfxGLAD_MACE_EXPL_SPARKS *)operator_new(0x2c0);
        if (this_02 == (wrsfxGLAD_MACE_EXPL_SPARKS *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = wrsfxGLAD_MACE_EXPL_SPARKS::wrsfxGLAD_MACE_EXPL_SPARKS(this_02,fVar1);
        }
        *(int *)(this + 0x157) = iVar2;
        if (iVar2 != 0) {
          this_03 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_sparks_emitter);
          if (this_03 != (objOBJ *)0x0) {
            objOBJ::SetStateProcYes(this_03,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
            iVar2 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x157),this_03,-1,(m3dV *)0x0);
            if (iVar2 != 0) {
              this_04 = (wrsfxGLAD_MACE_EXPL_BURN1 *)operator_new(0x2c0);
              if (this_04 == (wrsfxGLAD_MACE_EXPL_BURN1 *)0x0) {
                ppVar3 = (partEMITTER_PHYS *)0x0;
              }
              else {
                ppVar3 = (partEMITTER_PHYS *)
                         wrsfxGLAD_MACE_EXPL_BURN1::wrsfxGLAD_MACE_EXPL_BURN1(this_04,fVar1);
              }
              *(partEMITTER_PHYS **)(this + 0x15b) = ppVar3;
              if (ppVar3 != (partEMITTER_PHYS *)0x0) {
                partEMITTER_PHYS::SetPosDirSpeed(ppVar3,local_c,(m3dV *)0x0,(m3dV *)0x0);
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
                partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x15b));
                *(undefined4 *)(this + 0x15f) = 0x3f800000;
                animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
                *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
              }
            }
          }
        }
      }
    }
  }
  else if (param_1 == 2) {
    if (*(undefined4 **)(this + 0x15b) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x15b))(1);
      *(undefined4 *)(this + 0x15b) = 0;
    }
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
    iVar2 = m3dUpdateTimeField((float *)(this + 0x15f),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    }
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
    return 0;
  }
  return 0;
}




/* from: sfx_glad.cpp
   addr: 0046D400 */

entENTITY * __fastcall wrsfxGLAD_MACE_EXPL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x163);
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




/* from: sfx_glad.cpp
   addr: 0046D450
   addr: 0046D450 */

void * __thiscall
wrsfxGLAD_MACE_EXPL::_vector_deleting_destructor_(wrsfxGLAD_MACE_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

