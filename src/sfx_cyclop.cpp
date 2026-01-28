
/* from: sfx_cyclop.cpp
   addr: 00464720 */

int __fastcall wrsfxCyclopInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_cyclop_walk,0x24534658,0x50,wrsfxCYCLOP_WALK::Create,(char *)0x0,1)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxCYCLOP_WALK::pGritTex = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (wrsfxCYCLOP_WALK::pGritTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxCYCLOP_WALK::pCloudTex = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (wrsfxCYCLOP_WALK::pCloudTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_cyclop_hit,0x24534658,0x50,wrsfxCYCLOP_HIT::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_cyclop_death,0x24534658,0x50,wrsfxCYCLOP_DEATH::Create,(char *)0x0,
                           1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 004647D0 */

wrsfxCYCLOP_WALK_GRIT * __thiscall
wrsfxCYCLOP_WALK_GRIT::wrsfxCYCLOP_WALK_GRIT(wrsfxCYCLOP_WALK_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x96,720.0,7.0);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,5);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.1,720.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.16666667,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,4,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  fVar2 = param_1 * ___real_40800000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar2;
  *(float *)(this + 0xec) = fVar2;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.5,1.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f400000,param_1 * ___real_3e800000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.53,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pGritTex);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  uVar1 = *(uint *)(this + 4);
  fVar2 = param_1 * ___real_41a00000;
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_41200000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = fVar2;
  *(float *)(this + 0xc4) = param_1 * ___real_40a00000;
  *(float *)(this + 0xe0) = param_1 * ___real_c1f00000;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.6,0.5,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10008;
  *(uint *)(this + 4) = uVar1 | 0x12008;
  *(uint *)(this + 4) = uVar1 | 0x1a008;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 00464A40 */

wrsfxCYCLOP_WALK_CLOUD * __thiscall
wrsfxCYCLOP_WALK_CLOUD::wrsfxCYCLOP_WALK_CLOUD(wrsfxCYCLOP_WALK_CLOUD *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x96,720.0,4.0);
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
    m3dSPL::AllocKpList(pmVar3,5);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.1,720.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.16666667,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,4,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41480000,param_1 * ___real_40200000,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,12.75);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xdffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,3.0);
  fVar2 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_3e800000;
  *(float *)(this + 0xc0) = param_1 * ___real_41a00000;
  *(float *)(this + 0xc4) = param_1 * ___real_41200000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 8;
  *(uint *)(this + 4) = uVar1 | 0x2008;
  *(uint *)(this + 4) = uVar1 | 0xa008;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 00464C70 */

wrsfxCYCLOPMINI_WALK_GRIT * __thiscall
wrsfxCYCLOPMINI_WALK_GRIT::wrsfxCYCLOPMINI_WALK_GRIT(wrsfxCYCLOPMINI_WALK_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x3d,300.0,7.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.16666667,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = param_1 + param_1;
  *(float *)(this + 0xec) = param_1 + param_1;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.5,1.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f100000,param_1 * ___real_3e400000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.53,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pGritTex);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  uVar1 = *(uint *)(this + 4);
  fVar2 = param_1 * ___real_41a00000;
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_41200000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = fVar2;
  *(float *)(this + 0xc4) = param_1 * ___real_40a00000;
  *(float *)(this + 0xe0) = param_1 * ___real_c2700000;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.6,0.5,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10008;
  *(uint *)(this + 4) = uVar1 | 0x12008;
  *(uint *)(this + 4) = uVar1 | 0x1a008;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 00464EE0 */

wrsfxCYCLOPMINI_WALK_CLOUD * __thiscall
wrsfxCYCLOPMINI_WALK_CLOUD::wrsfxCYCLOPMINI_WALK_CLOUD
          (wrsfxCYCLOPMINI_WALK_CLOUD *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x3d,300.0,4.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.16666667,150.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40c80000,param_1 * ___real_3fa00000,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,25.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xdffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,3.0);
  fVar2 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_3e800000;
  *(float *)(this + 0xc0) = param_1 * ___real_41700000;
  *(float *)(this + 0xc4) = param_1 * ___real_40f00000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 8;
  *(uint *)(this + 4) = uVar1 | 0x2008;
  *(uint *)(this + 4) = uVar1 | 0xa008;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 004650F0 */

int __thiscall
wrsfxCYCLOP_WALK::ProcessMsg
          (wrsfxCYCLOP_WALK *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  wrsfxCYCLOPMINI_WALK_GRIT *this_00;
  wrsfxCYCLOPMINI_WALK_CLOUD *this_01;
  wrsfxCYCLOP_WALK_GRIT *this_02;
  wrsfxCYCLOP_WALK_CLOUD *this_03;
  objOBJ *this_04;
  float in_EDX;
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
  if (param_1 != 1) {
    if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x14f))(1);
      }
      *(undefined4 *)(this + 0x14f) = 0;
      if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x153))(1);
      }
      *(undefined4 *)(this + 0x153) = 0;
      return 0;
    }
    if (param_1 != 1000) {
      return 0;
    }
    iVar2 = m3dUpdateTimeField((float *)(this + 0x157),in_EDX);
    if (iVar2 == 0) {
      return 0;
    }
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    return 0;
  }
  fVar1 = *(float *)((int)param_2 + 4);
  animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,2);
                    /* WARNING: Load size is inaccurate */
  if (*param_2 == 0) {
    this_02 = (wrsfxCYCLOP_WALK_GRIT *)operator_new(0x2c0);
    if (this_02 == (wrsfxCYCLOP_WALK_GRIT *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxCYCLOP_WALK_GRIT::wrsfxCYCLOP_WALK_GRIT(this_02,*(float *)((int)param_2 + 4));
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    this_03 = (wrsfxCYCLOP_WALK_CLOUD *)operator_new(0x2c0);
    if (this_03 == (wrsfxCYCLOP_WALK_CLOUD *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxCYCLOP_WALK_CLOUD::wrsfxCYCLOP_WALK_CLOUD(this_03,*(float *)((int)param_2 + 4));
    }
    *(int *)(this + 0x153) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    this_00 = (wrsfxCYCLOPMINI_WALK_GRIT *)operator_new(0x2c0);
    if (this_00 == (wrsfxCYCLOPMINI_WALK_GRIT *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxCYCLOPMINI_WALK_GRIT::wrsfxCYCLOPMINI_WALK_GRIT
                        (this_00,*(float *)((int)param_2 + 4));
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    this_01 = (wrsfxCYCLOPMINI_WALK_CLOUD *)operator_new(0x2c0);
    if (this_01 == (wrsfxCYCLOPMINI_WALK_CLOUD *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxCYCLOPMINI_WALK_CLOUD::wrsfxCYCLOPMINI_WALK_CLOUD
                        (this_01,*(float *)((int)param_2 + 4));
    }
    *(int *)(this + 0x153) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  this_04 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_Cylinder);
  if (((this_04 != (objOBJ *)0x0) &&
      (iVar2 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),this_04,-1,(m3dV *)0x0),
      iVar2 != 0)) &&
     (iVar2 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x153),this_04,-1,(m3dV *)0x0),
     iVar2 != 0)) {
    objOBJ::SetStateProcYes(this_04,0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::GetOrigin(this_04,local_38);
    local_2c = _m3dVUnitY;
    local_24 = DAT_005f9998;
    local_28 = DAT_005f9994;
    iVar2 = wrsfxFindFloor(local_38,(m3dBOX *)&local_20);
    if (iVar2 != 0) {
      local_34 = local_14;
    }
    partEMITTER_PHYS::SetCDTPlane(*(partEMITTER_PHYS **)(this + 0x14f),1,0,(m3dPLANE *)local_38);
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x157) = 0x40a00000;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 00465360 */

wrsfxCYCLOP_HIT_DUST * __thiscall
wrsfxCYCLOP_HIT_DUST::wrsfxCYCLOP_HIT_DUST(wrsfxCYCLOP_HIT_DUST *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x78,600.0,4.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.16666667,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  fVar1 = param_1 * ___real_40200000;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41960000,fVar1,(m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,12.75);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,90.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb4) = fVar1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb8) = param_1 + param_1;
  *(float *)(this + 0xc0) = param_1 * ___real_41f00000;
  *(float *)(this + 0xc4) = param_1 * ___real_41700000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0xa000;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 00465570 */

wrsfxCYCLOP_HIT_GRIT * __thiscall
wrsfxCYCLOP_HIT_GRIT::wrsfxCYCLOP_HIT_GRIT(wrsfxCYCLOP_HIT_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  uint uVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x78,600.0,7.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.16666667,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.5,1.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f900000,param_1 * ___real_3ec00000,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.1,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pGritTex);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,360.0);
  fVar2 = param_1 * ___real_40800000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 6;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 * ___real_41a00000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_41200000;
  *(float *)(this + 0xc0) = param_1 * ___real_41700000;
  *(float *)(this + 0xc4) = param_1 * ___real_40f00000;
  *(float *)(this + 0xe0) = param_1 * ___real_c1f00000;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.6,0.7,3);
  uVar1 = *(uint *)(this + 4);
  uVar4 = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar4;
  *(uint *)(this + 4) = CONCAT22((short)(uVar4 >> 0x10),(short)uVar1) | 0xa000;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 004657B0 */

wrsfxCYCLOPMINI_HIT_DUST * __thiscall
wrsfxCYCLOPMINI_HIT_DUST::wrsfxCYCLOPMINI_HIT_DUST(wrsfxCYCLOPMINI_HIT_DUST *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,300.0,2.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.16666667,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,300.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.5,0.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41160000,param_1 * ___real_3e000000,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,12.75);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,90.0);
  fVar1 = param_1 * ___real_40200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar1;
  *(float *)(this + 0xb8) = param_1 + param_1;
  *(float *)(this + 0xc0) = param_1 * ___real_41700000;
  *(float *)(this + 0xc4) = param_1 * ___real_40f00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0xa000;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 004659D0 */

wrsfxCYCLOPMINI_HIT_GRIT * __thiscall
wrsfxCYCLOPMINI_HIT_GRIT::wrsfxCYCLOPMINI_HIT_GRIT(wrsfxCYCLOPMINI_HIT_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  uint uVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,300.0,7.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.16666667,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,300.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.5,1.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f100000,param_1 * ___real_3e400000,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.5,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.1,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pGritTex);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,360.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 6;
  *(float *)(this + 0xe8) = param_1 + param_1;
  fVar2 = param_1 * ___real_41a00000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_41200000;
  *(float *)(this + 0xc0) = param_1 * ___real_41700000;
  *(float *)(this + 0xc4) = param_1 * ___real_40f00000;
  *(float *)(this + 0xe0) = param_1 * ___real_c2700000;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.6,0.1,3);
  uVar1 = *(uint *)(this + 4);
  uVar4 = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar4;
  *(uint *)(this + 4) = CONCAT22((short)(uVar4 >> 0x10),(short)uVar1) | 0xa000;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 00465C10 */

int __thiscall
wrsfxCYCLOP_HIT::ProcessMsg
          (wrsfxCYCLOP_HIT *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  objOBJ *this_00;
  wrsfxCYCLOPMINI_HIT_DUST *this_01;
  wrsfxCYCLOPMINI_HIT_GRIT *this_02;
  wrsfxCYCLOP_HIT_DUST *this_03;
  wrsfxCYCLOP_HIT_GRIT *this_04;
  float in_EDX;
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
  if (param_1 == 1) {
    fVar1 = *(float *)((int)param_2 + 4);
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    this_00 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_emitter);
    if (this_00 != (objOBJ *)0x0) {
      objOBJ::SetStateProcYes(this_00,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
                    /* WARNING: Load size is inaccurate */
      if (*param_2 == 0) {
        this_03 = (wrsfxCYCLOP_HIT_DUST *)operator_new(0x2c0);
        if (this_03 == (wrsfxCYCLOP_HIT_DUST *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = wrsfxCYCLOP_HIT_DUST::wrsfxCYCLOP_HIT_DUST(this_03,*(float *)((int)param_2 + 4));
        }
        *(int *)(this + 0x14f) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
        this_04 = (wrsfxCYCLOP_HIT_GRIT *)operator_new(0x2c0);
        if (this_04 == (wrsfxCYCLOP_HIT_GRIT *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = wrsfxCYCLOP_HIT_GRIT::wrsfxCYCLOP_HIT_GRIT(this_04,*(float *)((int)param_2 + 4));
        }
        *(int *)(this + 0x153) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
      }
      else {
        this_01 = (wrsfxCYCLOPMINI_HIT_DUST *)operator_new(0x2c0);
        if (this_01 == (wrsfxCYCLOPMINI_HIT_DUST *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = wrsfxCYCLOPMINI_HIT_DUST::wrsfxCYCLOPMINI_HIT_DUST
                            (this_01,*(float *)((int)param_2 + 4));
        }
        *(int *)(this + 0x14f) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
        this_02 = (wrsfxCYCLOPMINI_HIT_GRIT *)operator_new(0x2c0);
        if (this_02 == (wrsfxCYCLOPMINI_HIT_GRIT *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = wrsfxCYCLOPMINI_HIT_GRIT::wrsfxCYCLOPMINI_HIT_GRIT
                            (this_02,*(float *)((int)param_2 + 4));
        }
        *(int *)(this + 0x153) = iVar2;
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),this_00,-1,(m3dV *)0x0);
      if ((iVar2 != 0) &&
         (iVar2 = partSetAreaEmissionObj
                            (*(partEMITTER_PHYS **)(this + 0x153),this_00,-1,(m3dV *)0x0),
         iVar2 != 0)) {
        objOBJ::GetOrigin(this_00,(m3dV *)&local_38);
        iVar2 = wrsfxFindFloor((m3dV *)&local_38,(m3dBOX *)&local_20);
        if (iVar2 == 0) {
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
        partEMITTER_PHYS::SetCDTPlane
                  (*(partEMITTER_PHYS **)(this + 0x153),1,0,(m3dPLANE *)&local_38);
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
        partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
        *(undefined4 *)(this + 0x157) = 0x40e33333;
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
  else if ((param_1 == 1000) &&
          (iVar2 = m3dUpdateTimeField((float *)(this + 0x157),in_EDX), iVar2 != 0)) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 00465EA0 */

wrsfxCYCLOP_DEATH_SMOKE * __thiscall
wrsfxCYCLOP_DEATH_SMOKE::wrsfxCYCLOP_DEATH_SMOKE(wrsfxCYCLOP_DEATH_SMOKE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,800.0,6.0);
  *(undefined ***)this = &_vftable_;
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar4 + 4) = 0;
    *(undefined4 *)(pmVar4 + 8) = 0;
    *(undefined4 *)(pmVar4 + 0xc) = 0;
    *(undefined4 *)(pmVar4 + 0x14) = 8;
    *(undefined4 *)(pmVar4 + 0x18) = 8;
    *(undefined4 *)(pmVar4 + 0x1c) = 1;
    *(undefined4 *)(pmVar4 + 0x20) = 0;
    *(undefined4 *)(pmVar4 + 0x24) = 0;
    *(undefined4 *)(pmVar4 + 0x28) = 0;
    *(undefined4 *)(pmVar4 + 0x2c) = 0;
    *(undefined4 *)(pmVar4 + 0x30) = 0;
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.033333335,800.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,0.16666667,800.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,800.0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,4.5,1.5);
  fVar2 = param_1 * ___real_40a00000;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41c80000,fVar2,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,33.66);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,30.0);
  fVar3 = param_1 * ___real_41200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xe8) = fVar3;
  *(float *)(this + 0xc0) = fVar3;
  *(float *)(this + 0xc4) = fVar3;
  *(float *)(this + 0xb8) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 004660B0 */

wrsfxCYCLOP_DEATH_GRIT * __thiscall
wrsfxCYCLOP_DEATH_GRIT::wrsfxCYCLOP_DEATH_GRIT(wrsfxCYCLOP_DEATH_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  uint uVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x78,600.0,7.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.26666668,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.3,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.43333334,600.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.46666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.5,1.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f400000,param_1 * ___real_3fa00000,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.53,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pGritTex);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,360.0);
  fVar2 = param_1 * ___real_41a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 6;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_41200000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 * ___real_41d55555;
  *(float *)(this + 0xc4) = param_1 * ___real_41555555;
  *(float *)(this + 0xe0) = param_1 * ___real_c1f00000;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.6,0.6,3);
  uVar1 = *(uint *)(this + 4);
  uVar4 = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar4;
  *(uint *)(this + 4) = CONCAT22((short)(uVar4 >> 0x10),(short)uVar1) | 0xa000;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 004662F0 */

wrsfxCYCLOPMINI_DEATH_SMOKE * __thiscall
wrsfxCYCLOPMINI_DEATH_SMOKE::wrsfxCYCLOPMINI_DEATH_SMOKE
          (wrsfxCYCLOPMINI_DEATH_SMOKE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x50,400.0,6.0);
  *(undefined ***)this = &_vftable_;
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    *(undefined4 *)(pmVar4 + 4) = 0;
    *(undefined4 *)(pmVar4 + 8) = 0;
    *(undefined4 *)(pmVar4 + 0xc) = 0;
    *(undefined4 *)(pmVar4 + 0x14) = 8;
    *(undefined4 *)(pmVar4 + 0x18) = 8;
    *(undefined4 *)(pmVar4 + 0x1c) = 1;
    *(undefined4 *)(pmVar4 + 0x20) = 0;
    *(undefined4 *)(pmVar4 + 0x24) = 0;
    *(undefined4 *)(pmVar4 + 0x28) = 0;
    *(undefined4 *)(pmVar4 + 0x2c) = 0;
    *(undefined4 *)(pmVar4 + 0x30) = 0;
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,4);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.033333335,400.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,0.16666667,400.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,4.5,1.5);
  fVar2 = param_1 * ___real_40200000;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_41480000,fVar2,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,33.66);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,30.0);
  fVar3 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xe8) = fVar3;
  fVar3 = param_1 * ___real_40d55555;
  *(float *)(this + 0xb8) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xc0) = fVar3;
  *(float *)(this + 0xc4) = fVar3;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 00466500 */

wrsfxCYCLOPMINI_DEATH_GRIT * __thiscall
wrsfxCYCLOPMINI_DEATH_GRIT::wrsfxCYCLOPMINI_DEATH_GRIT
          (wrsfxCYCLOPMINI_DEATH_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x3d,300.0,7.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.033333335,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,0.16666667,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.5,1.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3ec00000,param_1 * ___real_3f200000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.53,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxCYCLOP_WALK::pGritTex);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,360.0);
  fVar2 = param_1 * ___real_41200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 6;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = fVar2;
  fVar3 = param_1 * ___real_41c80000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xc0) = fVar3;
  *(float *)(this + 0xc4) = fVar2;
  *(float *)(this + 0xe0) = param_1 * ___real_c1c80000;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,0.0,0.6,0.5,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10408;
  *(uint *)(this + 4) = uVar1 | 0x1e408;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_cyclop.cpp
   addr: 00466710 */

int __thiscall
wrsfxCYCLOP_DEATH::ProcessMsg
          (wrsfxCYCLOP_DEATH *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  wrsfxCYCLOPMINI_DEATH_SMOKE *this_00;
  wrsfxCYCLOPMINI_DEATH_GRIT *this_01;
  wrsfxCYCLOP_DEATH_SMOKE *this_02;
  wrsfxCYCLOP_DEATH_GRIT *this_03;
  objOBJ *this_04;
  uint uVar3;
  float in_EDX;
  char *pcVar4;
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
  if (param_1 != 1) {
    if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x153))(1);
        *(undefined4 *)(this + 0x153) = 0;
      }
      if (*(undefined4 **)(this + 0x14f) == (undefined4 *)0x0) {
        return 0;
      }
      (**(code **)**(undefined4 **)(this + 0x14f))(1);
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
    if (param_1 != 1000) {
      return 0;
    }
    iVar2 = m3dUpdateTimeField((float *)(this + 0x157),in_EDX);
    if (iVar2 == 0) {
      return 0;
    }
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    return 0;
  }
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
                    /* WARNING: Load size is inaccurate */
  if (*param_2 == 0) {
    this_02 = (wrsfxCYCLOP_DEATH_SMOKE *)operator_new(0x2c0);
    if (this_02 == (wrsfxCYCLOP_DEATH_SMOKE *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxCYCLOP_DEATH_SMOKE::wrsfxCYCLOP_DEATH_SMOKE(this_02,*(float *)((int)param_2 + 4))
      ;
    }
    *(int *)(this + 0x153) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    this_03 = (wrsfxCYCLOP_DEATH_GRIT *)operator_new(0x2c0);
    if (this_03 == (wrsfxCYCLOP_DEATH_GRIT *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxCYCLOP_DEATH_GRIT::wrsfxCYCLOP_DEATH_GRIT(this_03,*(float *)((int)param_2 + 4));
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    this_00 = (wrsfxCYCLOPMINI_DEATH_SMOKE *)operator_new(0x2c0);
    if (this_00 == (wrsfxCYCLOPMINI_DEATH_SMOKE *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxCYCLOPMINI_DEATH_SMOKE::wrsfxCYCLOPMINI_DEATH_SMOKE
                        (this_00,*(float *)((int)param_2 + 4));
    }
    *(int *)(this + 0x153) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
    this_01 = (wrsfxCYCLOPMINI_DEATH_GRIT *)operator_new(0x2c0);
    if (this_01 == (wrsfxCYCLOPMINI_DEATH_GRIT *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxCYCLOPMINI_DEATH_GRIT::wrsfxCYCLOPMINI_DEATH_GRIT
                        (this_01,*(float *)((int)param_2 + 4));
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = 0xffffffff;
  pcVar4 = s_pCylinder9;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  this_04 = objFindNameN(*(objOBJ **)(*(int *)(*(int *)((int)param_2 + 8) + 0xbc) + 0x10),
                         s_pCylinder9,~uVar3 - 1);
  if (this_04 != (objOBJ *)0x0) {
    partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),this_04,-1,(m3dV *)0x0);
    partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x153),this_04,-1,(m3dV *)0x0);
    objOBJ::GetOrigin(this_04,local_38);
    local_28 = DAT_005f9994;
    local_24 = DAT_005f9998;
    local_2c = _m3dVUnitY;
    iVar2 = wrsfxFindFloor(local_38,(m3dBOX *)&local_20);
    if (iVar2 != 0) {
      local_34 = local_14;
    }
    partEMITTER_PHYS::SetCDTPlane(*(partEMITTER_PHYS **)(this + 0x14f),1,0,(m3dPLANE *)local_38);
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
    *(undefined4 *)(this + 0x157) = 0x4188cccd;
  }
  return 0;
}




/* from: sfx_cyclop.cpp
   addr: 00466960 */

entENTITY * __fastcall wrsfxCYCLOP_WALK::Create(animINST *param_1)

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




/* from: sfx_cyclop.cpp
   addr: 004669B0
   addr: 004669B0 */

void * __thiscall
wrsfxCYCLOP_WALK::_vector_deleting_destructor_(wrsfxCYCLOP_WALK *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_cyclop.cpp
   addr: 004669E0 */

entENTITY * __fastcall wrsfxCYCLOP_HIT::Create(animINST *param_1)

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




/* from: sfx_cyclop.cpp
   addr: 00466A30
   addr: 00466A30 */

void * __thiscall wrsfxCYCLOP_HIT::_vector_deleting_destructor_(wrsfxCYCLOP_HIT *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_cyclop.cpp
   addr: 00466A60 */

entENTITY * __fastcall wrsfxCYCLOP_DEATH::Create(animINST *param_1)

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

