
/* from: sfx_niche.cpp
   addr: 004727A0 */

int __fastcall wrsfxNicheInit(void)

{
  int iVar1;
  
  wrsfxNICHE_EXPLODE::pTexDust = txmMANAGER::Add(txmManager,s_sfx_discus_land_cloud,0x40003,1);
  if (wrsfxNICHE_EXPLODE::pTexDust == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxNICHE_EXPLODE::pTexGrit = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (wrsfxNICHE_EXPLODE::pTexGrit == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_niche_explode,0x24534658,0x50,wrsfxNICHE_EXPLODE::Create,
                           (char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_niche.cpp
   addr: 00472810 */

wrsfxNICHE_EXPLODE_GRIT1 * __thiscall
wrsfxNICHE_EXPLODE_GRIT1::wrsfxNICHE_EXPLODE_GRIT1(wrsfxNICHE_EXPLODE_GRIT1 *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xaf,500.0,8.0);
  *(undefined ***)this = &_vftable_;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,500.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.7,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.0,3.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3ea66666,param_1 * ___real_3e333333,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.52,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxNICHE_EXPLODE::pTexGrit);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  fVar2 = param_1 * ___real_41200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 6;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xc0) = param_1 + param_1;
  *(float *)(this + 0xc4) = param_1 * ___real_3f000000;
  *(float *)(this + 0xe0) = param_1 * ___real_c19ccccd;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,param_1 * ___real_3e19999a,0.2,0.2,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10008;
  *(uint *)(this + 4) = uVar1 | 0x1a008;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_niche.cpp
   addr: 00472A10 */

wrsfxNICHE_EXPLODE_GRIT2 * __thiscall
wrsfxNICHE_EXPLODE_GRIT2::wrsfxNICHE_EXPLODE_GRIT2(wrsfxNICHE_EXPLODE_GRIT2 *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,8.0);
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
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.033333335,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.06666667,30.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,2.0333333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,5.0,3.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3ea66666,param_1 * ___real_3e333333,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.52,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxNICHE_EXPLODE::pTexGrit);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  fVar2 = param_1 * ___real_c11ccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 6;
  *(float *)(this + 0xe0) = fVar2;
  fVar2 = param_1 * ___real_3e19999a;
  *(float *)(this + 0xb4) = param_1;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  partEMITTER_PHYS::SetCDTParam((partEMITTER_PHYS *)this,fVar2,0.2,0.2,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10008;
  *(uint *)(this + 4) = uVar1 | 0x1a008;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_niche.cpp
   addr: 00472C00 */

void __thiscall
wrsfxNICHE_EXPLODE_DUST::PartCreate
          (wrsfxNICHE_EXPLODE_DUST *this,int param_1,partPART **param_2,float param_3,int param_4,
          int param_5)

{
  float fVar1;
  float unaff_ESI;
  partPART **unaff_EDI;
  float fVar2;
  int local_8;
  float local_4;
  
  fVar1 = *(float *)(this + 0x94) - param_3;
  fVar2 = fVar1;
  local_4 = fVar1;
  (**(code **)(**(int **)(this + 0x2c0) + 0x10))(fVar1,&local_8);
  (**(code **)(**(int **)(this + 0x2c4) + 0x10))(fVar1,&stack0xfffffff0);
  *(undefined4 *)(this + 0xb4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = ___real_3e4ccccd * 0.0;
  fVar2 = fVar2 * ___real_3e4ccccd;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xc4) = fVar2;
  *(undefined4 *)(this + 200) = 0;
  partEMITTER_PHYS::PartCreate((partEMITTER_PHYS *)this,0,unaff_EDI,unaff_ESI,local_8,(int)local_4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_niche.cpp
   addr: 00472CB0 */

wrsfxNICHE_EXPLODE_DUST * __thiscall
wrsfxNICHE_EXPLODE_DUST::wrsfxNICHE_EXPLODE_DUST(wrsfxNICHE_EXPLODE_DUST *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x6e,300.0,6.0);
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
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,300.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.7,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,4.5,1.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40880000,param_1 * ___real_3fa00000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.275,54.57);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxNICHE_EXPLODE::pTexDust);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
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
  *(m3dSPL **)(this + 0x2c0) = pmVar3;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.033333335,param_1 + param_1);
  m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)(this + 0x2c0),1,0.7,param_1 * ___real_3f000000);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_40800000;
  *(m3dSPL **)(this + 0x2c4) = pmVar3;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.033333335,fVar2);
  m3dSPL_LINEAR1D::SetKp(*(m3dSPL_LINEAR1D **)(this + 0x2c4),1,0.7,param_1);
  fVar2 = param_1 * ___real_bf800000;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xe0) = fVar2;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 8;
  *(uint *)(this + 4) = uVar1 | 0xa008;
  return this;
}




/* from: sfx_niche.cpp
   addr: 00472F90 */

int __thiscall wrsfxNICHE_EXPLODE::ProcessINIT(wrsfxNICHE_EXPLODE *this,void *param_1)

{
  float fVar1;
  wrsfxNICHE_EXPLODE_GRIT1 *this_00;
  int iVar2;
  objOBJ *poVar3;
  wrsfxNICHE_EXPLODE_GRIT2 *this_01;
  wrsfxNICHE_EXPLODE_DUST *this_02;
  int iVar4;
  wrsfxNICHE_EXPLODE *pwVar5;
  int iVar6;
  
                    /* WARNING: Load size is inaccurate */
  fVar1 = *param_1;
  animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  this_00 = (wrsfxNICHE_EXPLODE_GRIT1 *)operator_new(0x2c0);
  if (this_00 == (wrsfxNICHE_EXPLODE_GRIT1 *)0x0) {
    iVar2 = 0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    iVar2 = wrsfxNICHE_EXPLODE_GRIT1::wrsfxNICHE_EXPLODE_GRIT1(this_00,*param_1);
  }
  *(int *)(this + 0x14f) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_areaGrit1);
  *(objOBJ **)(this + 0x153) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  this_01 = (wrsfxNICHE_EXPLODE_GRIT2 *)operator_new(0x2c0);
  if (this_01 == (wrsfxNICHE_EXPLODE_GRIT2 *)0x0) {
    iVar2 = 0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    iVar2 = wrsfxNICHE_EXPLODE_GRIT2::wrsfxNICHE_EXPLODE_GRIT2(this_01,*param_1);
  }
  *(int *)(this + 0x157) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_areaGrit2);
  *(objOBJ **)(this + 0x15b) = poVar3;
  if (poVar3 == (objOBJ *)0x0) {
    return 0;
  }
  this_02 = (wrsfxNICHE_EXPLODE_DUST *)operator_new(0x2c8);
  if (this_02 == (wrsfxNICHE_EXPLODE_DUST *)0x0) {
    iVar2 = 0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    iVar2 = wrsfxNICHE_EXPLODE_DUST::wrsfxNICHE_EXPLODE_DUST(this_02,*param_1);
  }
  *(int *)(this + 0x15f) = iVar2;
  if (iVar2 == 0) {
    return 0;
  }
  poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_areaDust);
  *(objOBJ **)(this + 0x163) = poVar3;
  if (poVar3 != (objOBJ *)0x0) {
    iVar2 = *(int *)((int)param_1 + 4);
    iVar6 = 0;
    if (0 < iVar2) {
      iVar4 = 0;
      do {
        partEMITTER_PHYS::SetCDTPlane
                  (*(partEMITTER_PHYS **)(this + 0x14f),iVar2,iVar6,
                   (m3dPLANE *)(*(int *)((int)param_1 + 8) + iVar4));
        partEMITTER_PHYS::SetCDTPlane
                  (*(partEMITTER_PHYS **)(this + 0x157),*(int *)((int)param_1 + 4),iVar6,
                   (m3dPLANE *)(*(int *)((int)param_1 + 8) + iVar4));
        iVar2 = *(int *)((int)param_1 + 4);
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0x18;
      } while (iVar6 < iVar2);
    }
    iVar2 = 0;
    pwVar5 = this + 0x14f;
    while( true ) {
      iVar6 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)pwVar5,*(objOBJ **)(pwVar5 + 4),-1,(m3dV *)0x0);
      if (iVar6 == 0) break;
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)pwVar5);
      iVar2 = iVar2 + 1;
      pwVar5 = pwVar5 + 8;
      if (2 < iVar2) {
        *(undefined4 *)(this + 0x167) = 0x40f00000;
        return 1;
      }
    }
  }
  return 0;
}




/* from: sfx_niche.cpp
   addr: 00473140 */

int __thiscall
wrsfxNICHE_EXPLODE::ProcessMsg
          (wrsfxNICHE_EXPLODE *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  float in_EDX;
  wrsfxNICHE_EXPLODE *pwVar2;
  
  if (param_1 == 1) {
    ProcessINIT(this,param_2);
  }
  else {
    if (param_1 == 2) {
      pwVar2 = this + 0x14f;
      iVar1 = 3;
      do {
        if (*(undefined4 **)pwVar2 != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)pwVar2)(1);
        }
        *(int *)pwVar2 = 0;
        *(int *)(pwVar2 + 4) = 0;
        pwVar2 = pwVar2 + 8;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return 0;
    }
    if (param_1 == 1000) {
      iVar1 = m3dUpdateTimeField((float *)(this + 0x167),in_EDX);
      if (iVar1 != 0) {
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)0x0);
      }
      animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
      return 0;
    }
  }
  return 0;
}




/* from: sfx_niche.cpp
   addr: 004731E0
   addr: 004731E0 */

void * __thiscall
wrsfxNICHE_EXPLODE_DUST::_scalar_deleting_destructor_(wrsfxNICHE_EXPLODE_DUST *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(int **)(this + 0x2c0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c0) + 4))(1);
  }
  if (*(int **)(this + 0x2c4) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c4) + 4))(1);
  }
  partEMITTER_PHYS::~partEMITTER_PHYS((partEMITTER_PHYS *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_niche.cpp
   addr: 00473230 */

entENTITY * __fastcall wrsfxNICHE_EXPLODE::Create(animINST *param_1)

{
  entENTITY *this;
  entENTITY *peVar1;
  int iVar2;
  
  this = (entENTITY *)operator_new(0x16b);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x167) = 0;
    *(undefined ***)this = &_vftable_;
    peVar1 = this + 0x153;
    iVar2 = 3;
    do {
      *(undefined4 *)(peVar1 + -4) = 0;
      *(undefined4 *)peVar1 = 0;
      peVar1 = peVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_niche.cpp
   addr: 00473290
   addr: 00473290 */

void * __thiscall
wrsfxNICHE_EXPLODE::_scalar_deleting_destructor_(wrsfxNICHE_EXPLODE *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

