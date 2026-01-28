
/* from: sfx_discus.cpp
   addr: 00467A90 */

int __fastcall wrsfxDiscusInit(void)

{
  int iVar1;
  
  wrsfxDISCUS_LAND::pTexGrit = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (wrsfxDISCUS_LAND::pTexGrit == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxDISCUS_LAND::pTexCloud = txmMANAGER::Add(txmManager,s_sfx_discus_land_cloud,0x40003,1);
  if (wrsfxDISCUS_LAND::pTexCloud == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxDISCUS_LAND::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_discus_land_spark,0x40003,1);
  if (wrsfxDISCUS_LAND::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_discus_land,0x24534658,0x50,wrsfxDISCUS_LAND::Create,(char *)0x0,1)
  ;
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_discus.cpp
   addr: 00467B20 */

wrsfxDISCUS_LAND_CLOUD * __thiscall
wrsfxDISCUS_LAND_CLOUD::wrsfxDISCUS_LAND_CLOUD(wrsfxDISCUS_LAND_CLOUD *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x2d,200.0,2.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.1,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  fVar1 = param_1 * ___real_40ac9ba6;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xe8) = fVar1;
  *(float *)(this + 0xf4) = param_1 * ___real_3f381062;
  partEMITTER_PHYS::SetPosDirSpeed((partEMITTER_PHYS *)this,(m3dV *)0x0,&m3dVUnitY,(m3dV *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.5,0.5);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,param_1 * ___real_3fcac083);
  fVar1 = param_1 * ___real_40c00000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,1.0,fVar1);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)pmVar2,1.0);
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
    m3dSPL::AllocKpList(pmVar2,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.09,54.825);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxDISCUS_LAND::pTexCloud);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  fVar1 = param_1 * ___real_41a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xc0) = fVar1;
  *(float *)(this + 0xc4) = param_1 * ___real_41200000;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.5);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,2.5,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_discus.cpp
   addr: 00467DD0 */

wrsfxDISCUS_LAND_GRIT * __thiscall
wrsfxDISCUS_LAND_GRIT::wrsfxDISCUS_LAND_GRIT(wrsfxDISCUS_LAND_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  uint uVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x2d,100.0,6.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.1,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  *(float *)(this + 0xe8) = param_1;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0x3f800000;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,4.5,1.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3ee66666,param_1 * ___real_3e19999a,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xfffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxDISCUS_LAND::pTexGrit);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,90.0);
  fVar2 = param_1 * ___real_41600000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 6;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_40e00000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 * ___real_41a00000;
  *(float *)(this + 0xc4) = param_1 * ___real_41200000;
  *(float *)(this + 0xe0) = param_1 * ___real_c1f00000;
  partEMITTER_PHYS::SetCDTParam
            ((partEMITTER_PHYS *)this,0.0,param_1 * ___real_3ecccccd,param_1 * ___real_3ecccccd,3);
  uVar1 = *(uint *)(this + 4);
  uVar4 = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar4;
  *(uint *)(this + 4) = CONCAT22((short)(uVar4 >> 0x10),(short)uVar1) | 0xa000;
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,6.5,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.5);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_discus.cpp
   addr: 00468030 */

wrsfxDISCUS_LAND_SPARKS * __thiscall
wrsfxDISCUS_LAND_SPARKS::wrsfxDISCUS_LAND_SPARKS(wrsfxDISCUS_LAND_SPARKS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100,500.0,0.3);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,500.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.1,500.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.2,0.1);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40100000,param_1 * ___real_3fe00000,
             (m3dSPL_LINEAR1D *)0x0,1.0);
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.075,0.0,1.0,0.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxDISCUS_LAND::pTexSparks);
  fVar2 = param_1 * ___real_42a00000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_42200000;
  *(float *)(this + 0xc0) = param_1 * ___real_41000000;
  *(float *)(this + 0xc4) = param_1 * ___real_40800000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x2000;
  *(uint *)(this + 4) = uVar1 | 0xa000;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,3.0,0.3);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,1.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x200;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_discus.cpp
   addr: 00468280 */

int __thiscall wrsfxDISCUS_LAND::ProcessINIT(wrsfxDISCUS_LAND *this,void *param_1)

{
  wrsfxDISCUS_LAND_CLOUD *this_00;
  partEMITTER_PHYS *this_01;
  wrsfxDISCUS_LAND_GRIT *this_02;
  int iVar1;
  objOBJ *poVar2;
  wrsfxDISCUS_LAND_SPARKS *this_03;
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
  if (param_1 == (void *)0x0) {
    param_1 = (void *)0x3f800000;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    param_1 = *param_1;
  }
  animINST::Scale(*(animINST **)(this + 0xbc),(float)param_1,(float)param_1,(float)param_1,2);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  iVar1 = *(int *)(this + 0xbc);
  m3dMATR::GetOrigin((m3dMATR *)(iVar1 + 0x60),local_38);
  m3dMATR::GetAxisY((m3dMATR *)(iVar1 + 0x60),(m3dV *)&local_2c);
  local_2c = _m3dVUnitY;
  local_28 = DAT_005f9994;
  local_24 = DAT_005f9998;
  this_00 = (wrsfxDISCUS_LAND_CLOUD *)operator_new(0x2c0);
  if (this_00 == (wrsfxDISCUS_LAND_CLOUD *)0x0) {
    this_01 = (partEMITTER_PHYS *)0x0;
  }
  else {
    this_01 = (partEMITTER_PHYS *)
              wrsfxDISCUS_LAND_CLOUD::wrsfxDISCUS_LAND_CLOUD(this_00,(float)param_1);
  }
  *(partEMITTER_PHYS **)(this + 0x15f) = this_01;
  if (this_01 == (partEMITTER_PHYS *)0x0) {
    return 0;
  }
  partEMITTER_PHYS::SetPosDirSpeed(this_01,local_38,(m3dV *)0x0,(m3dV *)0x0);
  this_02 = (wrsfxDISCUS_LAND_GRIT *)operator_new(0x2c0);
  if (this_02 == (wrsfxDISCUS_LAND_GRIT *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = wrsfxDISCUS_LAND_GRIT::wrsfxDISCUS_LAND_GRIT(this_02,(float)param_1);
  }
  *(int *)(this + 0x14f) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_areaGrit);
  *(objOBJ **)(this + 0x153) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  iVar1 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),poVar2,-1,(m3dV *)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wrsfxFindFloor(local_38,(m3dBOX *)&local_20);
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = local_14;
  }
  partEMITTER_PHYS::SetCDTPlane(*(partEMITTER_PHYS **)(this + 0x14f),1,0,(m3dPLANE *)local_38);
  this_03 = (wrsfxDISCUS_LAND_SPARKS *)operator_new(0x2c0);
  if (this_03 == (wrsfxDISCUS_LAND_SPARKS *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = wrsfxDISCUS_LAND_SPARKS::wrsfxDISCUS_LAND_SPARKS(this_03,(float)param_1);
  }
  *(int *)(this + 0x157) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_areaSparks);
  *(objOBJ **)(this + 0x15b) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  iVar1 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x157),poVar2,-1,(m3dV *)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x15f));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x157));
  partAttachInst(*(partEMITTER_PHYS **)(this + 0x15f),*(animINST **)(this + 0xbc));
  *(uint *)(*(int *)(this + 0x15f) + 4) = *(uint *)(*(int *)(this + 0x15f) + 4) | 0x20000000;
  partAttachInst(*(partEMITTER_PHYS **)(this + 0x14f),*(animINST **)(this + 0xbc));
  *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x20000000;
  partAttachInst(*(partEMITTER_PHYS **)(this + 0x157),*(animINST **)(this + 0xbc));
  *(uint *)(*(int *)(this + 0x157) + 4) = *(uint *)(*(int *)(this + 0x157) + 4) | 0x20000000;
  *(undefined4 *)(this + 0x163) = 0x40c00000;
  *(undefined4 *)(this + 0x157) = 0;
  *(undefined4 *)(this + 0x14f) = 0;
  *(undefined4 *)(this + 0x15f) = 0;
  msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
  return 1;
}




/* from: sfx_discus.cpp
   addr: 00468550 */

int __thiscall
wrsfxDISCUS_LAND::ProcessMsg
          (wrsfxDISCUS_LAND *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  if (param_1 == 1) {
    ProcessINIT(this,param_2);
  }
  else if (param_1 != 2) {
    return 0;
  }
  return 0;
}




/* from: sfx_discus.cpp
   addr: 00468580 */

entENTITY * __fastcall wrsfxDISCUS_LAND::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x167);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_discus.cpp
   addr: 004685E0
   addr: 004685E0 */

void * __thiscall
wrsfxDISCUS_LAND::_vector_deleting_destructor_(wrsfxDISCUS_LAND *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

