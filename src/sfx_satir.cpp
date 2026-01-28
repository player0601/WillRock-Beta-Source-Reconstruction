
/* from: sfx_satir.cpp
   addr: 00476F20 */

int __fastcall wrsfxSatirInit(void)

{
  int iVar1;
  
  wrsfxSATIR_ARROW_LAND::pCloudTex = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (wrsfxSATIR_ARROW_LAND::pCloudTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxSATIR_ARROW_LAND::pGritTex = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (wrsfxSATIR_ARROW_LAND::pGritTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_satir_arrow_land,0x24534658,0x50,wrsfxSATIR_ARROW_LAND::Create,
                           (char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_satir.cpp
   addr: 00476F90 */

wrsfxSATIR_ARROW_LAND_CLOUD * __thiscall
wrsfxSATIR_ARROW_LAND_CLOUD::wrsfxSATIR_ARROW_LAND_CLOUD
          (wrsfxSATIR_ARROW_LAND_CLOUD *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x32,300.0,3.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.13333334,200.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.16666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.5,0.5);
  fVar2 = param_1 * ___real_3f000000;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar2,param_1 * ___real_3e800000,(m3dSPL_LINEAR1D *)0x0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,27.285);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0x3fffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxSATIR_ARROW_LAND::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb4) = param_1;
  *(float *)(this + 0xb8) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 8;
  *(uint *)(this + 4) = uVar1 | 0x2008;
  *(uint *)(this + 4) = uVar1 | 0xa008;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_satir.cpp
   addr: 00477190 */

wrsfxSATIR_ARROW_LAND_GRIT * __thiscall
wrsfxSATIR_ARROW_LAND_GRIT::wrsfxSATIR_ARROW_LAND_GRIT
          (wrsfxSATIR_ARROW_LAND_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x28,100.0,4.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.13333334,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.2,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3d4ccccd,param_1 * ___real_3ccccccd,
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
            ((partEMITTER_PHYS *)this,0x80ffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxSATIR_ARROW_LAND::pGritTex);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  uVar1 = *(uint *)(this + 4);
  fVar2 = param_1 * ___real_40a00000;
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_40400000;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 * ___real_40200000;
  *(float *)(this + 0xc4) = param_1 * ___real_3fc00000;
  *(float *)(this + 0xe0) = param_1 * ___real_c1a00000;
  partEMITTER_PHYS::SetCDTParam
            ((partEMITTER_PHYS *)this,0.0,param_1 * ___real_3e99999a,param_1 * ___real_3f000000,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10008;
  *(uint *)(this + 4) = uVar1 | 0x12008;
  *(uint *)(this + 4) = uVar1 | 0x1a008;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* from: sfx_satir.cpp
   addr: 004773E0 */

int __thiscall wrsfxSATIR_ARROW_LAND::ProcessINIT(wrsfxSATIR_ARROW_LAND *this,void *param_1)

{
  wrsfxSATIR_ARROW_LAND_CLOUD *this_00;
  int iVar1;
  wrsfxSATIR_ARROW_LAND_GRIT *this_01;
  objOBJ *poVar2;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  if (param_1 == (void *)0x0) {
    param_1 = (void *)0x3dcccccd;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    param_1 = *param_1;
  }
  animINST::Scale(*(animINST **)(this + 0xbc),(float)param_1,(float)param_1,(float)param_1,2);
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  this_00 = (wrsfxSATIR_ARROW_LAND_CLOUD *)operator_new(0x2c0);
  if (this_00 == (wrsfxSATIR_ARROW_LAND_CLOUD *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = wrsfxSATIR_ARROW_LAND_CLOUD::wrsfxSATIR_ARROW_LAND_CLOUD(this_00,(float)param_1);
  }
  *(int *)(this + 0x14f) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  this_01 = (wrsfxSATIR_ARROW_LAND_GRIT *)operator_new(0x2c0);
  if (this_01 == (wrsfxSATIR_ARROW_LAND_GRIT *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = wrsfxSATIR_ARROW_LAND_GRIT::wrsfxSATIR_ARROW_LAND_GRIT(this_01,(float)param_1);
  }
  *(int *)(this + 0x153) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__h__nc_area);
  *(objOBJ **)(this + 0x157) = poVar2;
  if (poVar2 == (objOBJ *)0x0) {
    return 0;
  }
  iVar1 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),poVar2,-1,(m3dV *)0x0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = partSetAreaEmissionObj
                    (*(partEMITTER_PHYS **)(this + 0x153),*(objOBJ **)(this + 0x157),-1,(m3dV *)0x0)
  ;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)(this + 0xbc);
  m3dMATR::GetOrigin((m3dMATR *)(iVar1 + 0x60),local_18);
  m3dMATR::GetAxisY((m3dMATR *)(iVar1 + 0x60),local_c);
  partEMITTER_PHYS::SetCDTPlane(*(partEMITTER_PHYS **)(this + 0x153),1,0,(m3dPLANE *)local_18);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
  *(undefined4 *)(this + 0x15b) = 0x40833333;
  return 1;
}




/* from: sfx_satir.cpp
   addr: 00477550 */

int __thiscall
wrsfxSATIR_ARROW_LAND::ProcessMsg
          (wrsfxSATIR_ARROW_LAND *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  float in_EDX;
  
  if (param_1 == 1) {
    ProcessINIT(this,param_2);
  }
  else {
    if (param_1 == 2) {
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x14f));
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
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
    if (param_1 == 1000) {
      iVar1 = m3dUpdateTimeField((float *)(this + 0x15b),in_EDX);
      if (iVar1 != 0) {
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
        return 0;
      }
      animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
      return 0;
    }
  }
  return 0;
}




/* from: sfx_satir.cpp
   addr: 00477640 */

entENTITY * __fastcall wrsfxSATIR_ARROW_LAND::Create(animINST *param_1)

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




/* from: sfx_satir.cpp
   addr: 00477690
   addr: 00477690 */

void * __thiscall
wrsfxSATIR_ARROW_LAND::_vector_deleting_destructor_(wrsfxSATIR_ARROW_LAND *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

