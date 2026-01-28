
/* from: sfx_skeleton.cpp
   addr: 004776C0 */

int __fastcall wrsfxSkeletonInit(void)

{
  int iVar1;
  
  wrsfxSKELETON_SPEAR_APPEAR::pCylTex =
       txmMANAGER::Add(txmManager,s_sfx_skel_spear_appear_part,0x40003,1);
  if (wrsfxSKELETON_SPEAR_APPEAR::pCylTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_skel_spear_appear,0x24534658,0x50,
                           wrsfxSKELETON_SPEAR_APPEAR::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxSKELETON_SPEAR_LAND::pGritTex = txmMANAGER::Add(txmManager,s_sfx_mcg_part,0x40003,1);
  if (wrsfxSKELETON_SPEAR_LAND::pGritTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxSKELETON_SPEAR_LAND::pCloudTex = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (wrsfxSKELETON_SPEAR_LAND::pCloudTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_skel_spear_land,0x24534658,0x50,wrsfxSKELETON_SPEAR_LAND::Create,
                           (char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxSKELETON_DEATH::pShardTex = txmMANAGER::Add(txmManager,s_sfx_skel_death_shard,0x40003,1);
  if (wrsfxSKELETON_DEATH::pShardTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxSKELETON_DEATH::pDustTex = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (wrsfxSKELETON_DEATH::pDustTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_skel_death,0x24534658,0x50,wrsfxSKELETON_DEATH::Create,(char *)0x0,
                           1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_skeleton.cpp
   addr: 004777D0 */

wrsfxSKELETON_SPEAR_APPEAR_CYL * __thiscall
wrsfxSKELETON_SPEAR_APPEAR_CYL::wrsfxSKELETON_SPEAR_APPEAR_CYL
          (wrsfxSKELETON_SPEAR_APPEAR_CYL *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,100.0,0.2);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.5,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.7,78.4);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.93333334,28.175);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,1.1666666,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.033333335,param_1);
  fVar2 = param_1 * ___real_00000000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.1666666,fVar2);
  *(float *)(this + 0xe8) = param_1;
  *(m3dSPL **)(this + 0xf0) = pmVar3;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.2,0.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_40d80000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,param_1 * ___real_40580000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,fVar2);
  fVar2 = param_1 * ___real_3f000000;
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.0,fVar2,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxSKELETON_SPEAR_APPEAR::pCylTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,10.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xb4) = param_1;
  *(float *)(this + 0xb8) = fVar2;
  *(undefined4 *)(this + 0xbc) = 0;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0x2409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  *(uint *)(this + 4) = uVar1 | 0x100a409;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,0.33,0.33,1.0);
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.3);
  return this;
}




/* from: sfx_skeleton.cpp
   addr: 00477A50 */

void __thiscall wrsfxSKELETON_SPEAR_APPEAR::Start(wrsfxSKELETON_SPEAR_APPEAR *this,int param_1)

{
  float fVar1;
  float fVar2;
  objOBJ *poVar3;
  int iVar4;
  undefined4 *puVar5;
  m3dMATR *pmVar6;
  m3dV local_4c [12];
  m3dMATR local_40 [64];
  
  if (param_1 == 0) {
    poVar3 = objFindName(*(objOBJ **)(*(int *)(*(int *)(this + 0x15f) + 0xbc) + 0x10),s_SPEAR_FX);
    *(objOBJ **)(this + 0x163) = poVar3;
    *(undefined4 *)(this + 0x16b) = 0x3f800000;
  }
  else {
    poVar3 = objFindName(*(objOBJ **)(*(int *)(*(int *)(this + 0x15f) + 0xbc) + 0x10),s_SWORD__lod);
    *(objOBJ **)(this + 0x163) = poVar3;
    *(undefined4 *)(this + 0x16b) = 0x3f1c28f6;
  }
  *(undefined4 *)(this + 0x167) = 0x3f800000;
  *(undefined4 *)(this + 0x16f) = 0x3f800000;
  *(undefined4 *)(this + 0x157) = 0x3f947ae1;
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  fVar1 = *(float *)(this + 0x16b);
  fVar2 = *(float *)(this + 0x167);
  puVar5 = (undefined4 *)(*(int *)(this + 0x163) + 0x3c);
  pmVar6 = local_40;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pmVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    pmVar6 = pmVar6 + 4;
  }
  m3dMATR::Scale(local_40,fVar2,fVar1,*(float *)(this + 0x16f),1);
  animINST::Transform(*(animINST **)(this + 0xbc),local_40,0);
  animINST::RotateY(*(animINST **)(this + 0xbc),90.0,1);
  iVar4 = partSetAreaEmissionObj
                    (*(partEMITTER_PHYS **)(this + 0x14f),*(objOBJ **)(this + 0x153),-1,(m3dV *)0x0)
  ;
  if (iVar4 != 0) {
    m3dMATR::GetOrigin(local_40,local_4c);
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x14f),local_4c,(m3dV *)0x0,(m3dV *)0x0);
    *(undefined4 *)(this + 0x15b) = 1;
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  }
  return;
}




/* from: sfx_skeleton.cpp
   addr: 00477BA0 */

int __thiscall
wrsfxSKELETON_SPEAR_APPEAR::ProcessMsg
          (wrsfxSKELETON_SPEAR_APPEAR *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  wrsfxSKELETON_SPEAR_APPEAR_CYL *this_00;
  int iVar3;
  objOBJ *poVar4;
  undefined4 *puVar5;
  m3dMATR *pmVar6;
  m3dV local_5c [12];
  char local_50 [16];
  m3dMATR local_40 [64];
  
  if (param_1 < 4) {
    if (param_1 == 3) {
      if (*(void **)(this + 0x15f) == param_2) {
        *(undefined4 *)(this + 0x15f) = 0;
        *(undefined4 *)(this + 0x163) = 0;
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
        return 0;
      }
    }
    else if (param_1 == 1) {
      if (param_2 == (void *)0x0) {
        param_2 = (void *)0x3d8f5c29;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        param_2 = *param_2;
      }
      this_00 = (wrsfxSKELETON_SPEAR_APPEAR_CYL *)operator_new(0x2c0);
      if (this_00 == (wrsfxSKELETON_SPEAR_APPEAR_CYL *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = wrsfxSKELETON_SPEAR_APPEAR_CYL::wrsfxSKELETON_SPEAR_APPEAR_CYL
                          (this_00,(float)param_2);
      }
      *(int *)(this + 0x14f) = iVar3;
      if (iVar3 != 0) {
        poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_Cylinder);
        *(objOBJ **)(this + 0x153) = poVar4;
        if (poVar4 != (objOBJ *)0x0) {
          iVar3 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),poVar4,-1,(m3dV *)0x0)
          ;
          if (iVar3 != 0) {
            iVar3 = 0;
            while( true ) {
              iVar3 = iVar3 + 1;
              sprintf(local_50,s__ds_Plane_d,iVar3);
              poVar4 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),local_50);
              if (poVar4 == (objOBJ *)0x0) break;
              objOBJ::SetStateRendYes(poVar4,0x60);
              if (3 < iVar3) {
                objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
                *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x11;
                objOBJ::SetStateProcYes
                          (*(objOBJ **)(this + 0x153),0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
                partEMITTER_PHYS::SetScaleCS
                          (*(partEMITTER_PHYS **)(this + 0x14f),
                           (m3dMATR *)(*(int *)(this + 0x153) + 0x3c));
                *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
                return 0;
              }
            }
          }
        }
      }
    }
    else if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x14f))(1);
      }
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
  }
  else if ((((param_1 == 1000) && (*(int *)(this + 0x15b) != 0)) &&
           ((*(byte *)((int)*(float *)(*(int *)(this + 0x15f) + 0xbc) + 4) & 1) == 0)) &&
          (*(int *)(this + 0x163) != 0)) {
    iVar3 = m3dUpdateTimeField((float *)(this + 0x157),*(float *)(*(int *)(this + 0x15f) + 0xbc));
    if (iVar3 != 0) {
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
      partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x14f));
      *(undefined4 *)(this + 0x15b) = 0;
      return 0;
    }
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
    fVar1 = *(float *)(this + 0x16f);
    fVar2 = *(float *)(this + 0x16b);
    puVar5 = (undefined4 *)(*(int *)(this + 0x163) + 0x3c);
    pmVar6 = local_40;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pmVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      pmVar6 = pmVar6 + 4;
    }
    m3dMATR::Scale(local_40,*(float *)(this + 0x167),fVar2,fVar1,1);
    animINST::Transform(*(animINST **)(this + 0xbc),local_40,0);
    animINST::RotateY(*(animINST **)(this + 0xbc),90.0,1);
    iVar3 = partSetAreaEmissionObj
                      (*(partEMITTER_PHYS **)(this + 0x14f),*(objOBJ **)(this + 0x153),-1,
                       (m3dV *)0x0);
    if (iVar3 != 0) {
      m3dMATR::GetOrigin(local_40,local_5c);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x14f),local_5c,(m3dV *)0x0,(m3dV *)0x0);
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_skeleton.cpp
   addr: 00477E90 */

wrsfxSKELETON_SPEAR_LAND_GRIT * __thiscall
wrsfxSKELETON_SPEAR_LAND_GRIT::wrsfxSKELETON_SPEAR_LAND_GRIT
          (wrsfxSKELETON_SPEAR_LAND_GRIT *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xf,87.5,5.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,75.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.083333336,87.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.13333334,75.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,4,0.16666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  *(float *)(this + 0xec) = param_1;
  *(float *)(this + 0xe8) = param_1;
  *(undefined4 *)(this + 0xf0) = 0;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,4.0,1.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3e0f5c29,param_1 * ___real_3d8f5c29,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.555,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxSKELETON_SPEAR_LAND::pGritTex);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  uVar1 = *(uint *)(this + 4);
  fVar2 = param_1 * ___real_41400000;
  *(uint *)(this + 4) = uVar1 | 4;
  *(uint *)(this + 4) = uVar1 | 6;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_40c00000;
  *(float *)(this + 0xc4) = param_1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 + param_1;
  *(float *)(this + 0xe0) = param_1 * ___real_c1f00000;
  partEMITTER_PHYS::SetCDTParam
            ((partEMITTER_PHYS *)this,0.0,param_1 * ___real_3ecccccd,param_1 * ___real_3ecccccd,3);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x10000;
  *(uint *)(this + 4) = uVar1 | 0x10008;
  *(uint *)(this + 4) = uVar1 | 0x12008;
  *(uint *)(this + 4) = uVar1 | 0x1a008;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_skeleton.cpp
   addr: 00478100 */

wrsfxSKELETON_SPEAR_LAND_CLOUDS * __thiscall
wrsfxSKELETON_SPEAR_LAND_CLOUDS::wrsfxSKELETON_SPEAR_LAND_CLOUDS
          (wrsfxSKELETON_SPEAR_LAND_CLOUDS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xf,79.166664,2.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,66.666664);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.083333336,79.166664);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.13333334,66.666664);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,4,0.16666667,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  fVar2 = param_1 * ___real_3f000000;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xe8) = fVar2;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.5,0.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3fc00000,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,34.782);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0x1fffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxSKELETON_SPEAR_LAND::pCloudTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,60.0);
  fVar2 = param_1 * ___real_3f19999a;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_3e99999a;
  *(float *)(this + 0xc0) = param_1 * ___real_3f4ccccd;
  *(float *)(this + 0xc4) = param_1 * ___real_3ecccccd;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 8;
  *(uint *)(this + 4) = uVar1 | 0x2008;
  *(uint *)(this + 4) = uVar1 | 0xa008;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.1);
  return this;
}




/* from: sfx_skeleton.cpp
   addr: 00478300 */

void __thiscall wrsfxSKELETON_SPEAR_LAND::Start(wrsfxSKELETON_SPEAR_LAND *this)

{
  *(undefined4 *)(this + 0x15b) = 0x40a33333;
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
  *(undefined4 *)(this + 0x15f) = 1;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_skeleton.cpp
   addr: 00478340 */

int __thiscall
wrsfxSKELETON_SPEAR_LAND::ProcessMsg
          (wrsfxSKELETON_SPEAR_LAND *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  wrsfxSKELETON_SPEAR_LAND_GRIT *this_00;
  wrsfxSKELETON_SPEAR_LAND_CLOUDS *this_01;
  objOBJ *poVar3;
  float in_EDX;
  m3dV local_18 [12];
  m3dV local_c [12];
  
  if (param_1 == 1) {
    if (param_2 == (void *)0x0) {
      param_1 = 0x3f333333;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      param_1 = *param_2;
    }
    fVar1 = (float)param_1 * ___real_3f000000;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,2);
    this_00 = (wrsfxSKELETON_SPEAR_LAND_GRIT *)operator_new(0x2c0);
    if (this_00 == (wrsfxSKELETON_SPEAR_LAND_GRIT *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxSKELETON_SPEAR_LAND_GRIT::wrsfxSKELETON_SPEAR_LAND_GRIT(this_00,(float)param_1);
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 != 0) {
      this_01 = (wrsfxSKELETON_SPEAR_LAND_CLOUDS *)operator_new(0x2c0);
      if (this_01 == (wrsfxSKELETON_SPEAR_LAND_CLOUDS *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = wrsfxSKELETON_SPEAR_LAND_CLOUDS::wrsfxSKELETON_SPEAR_LAND_CLOUDS
                          (this_01,(float)param_1);
      }
      *(int *)(this + 0x153) = iVar2;
      if (iVar2 != 0) {
        poVar3 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_Circle);
        *(objOBJ **)(this + 0x157) = poVar3;
        if (poVar3 != (objOBJ *)0x0) {
          iVar2 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),poVar3,-1,(m3dV *)0x0)
          ;
          if (iVar2 != 0) {
            iVar2 = *(int *)(this + 0xbc);
            m3dMATR::GetOrigin((m3dMATR *)(iVar2 + 0x60),local_18);
            m3dMATR::GetAxisY((m3dMATR *)(iVar2 + 0x60),local_c);
            partEMITTER_PHYS::SetCDTPlane
                      (*(partEMITTER_PHYS **)(this + 0x14f),1,0,(m3dPLANE *)local_18);
            iVar2 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x153),*(objOBJ **)(this + 0x157),-1,
                               (m3dV *)0x0);
            if (iVar2 != 0) {
              objOBJ::SetStateProcYes
                        (*(objOBJ **)(this + 0x157),0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
              *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
            }
          }
        }
      }
    }
  }
  else {
    if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x153))(1);
      }
      *(undefined4 *)(this + 0x153) = 0;
      if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x14f))(1);
      }
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
    if ((param_1 == 1000) && (*(int *)(this + 0x15f) != 0)) {
      iVar2 = m3dUpdateTimeField((float *)(this + 0x15b),in_EDX);
      if (iVar2 != 0) {
        *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
        *(undefined4 *)(this + 0x15f) = 0;
        partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x14f));
        partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
        return 0;
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_skeleton.cpp
   addr: 00478550 */

wrsfxSKELETON_DEATH_SHARD * __thiscall
wrsfxSKELETON_DEATH_SHARD::wrsfxSKELETON_DEATH_SHARD
          (wrsfxSKELETON_DEATH_SHARD *this,wrsfxSKELETON_DEATH_EMITTER_INI *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  m3dSPL *this_00;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x1e,100.0,4.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,*(m3dSPL_LINEAR1D **)param_1);
  fVar1 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 0x14);
  *(undefined4 *)(this + 0xf0) = 0;
  *(float *)(this + 0xe8) = fVar1 * fVar2;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,3.0,1.0);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,*(float *)(param_1 + 0x14) * ___real_3f133333,
             *(float *)(param_1 + 0x14) * ___real_3e800000,(m3dSPL_LINEAR1D *)0x0,1.0);
  this_00 = (m3dSPL *)operator_new(0x34);
  if (this_00 == (m3dSPL *)0x0) {
    this_00 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(this_00,0,8,1);
    *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(this_00,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,0,0.515,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_00,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)this_00);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxSKELETON_DEATH::pShardTex);
  partEMITTER_PHYS::SetTextureFrameAnim((partEMITTER_PHYS *)this,2,2,0.0,3.0);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  uVar5 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar5 | 4;
  *(uint *)(this + 4) = uVar5 | 6;
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0x14);
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar3 * fVar4;
  *(float *)(this + 0xb8) = fVar1 * fVar2;
  fVar1 = *(float *)(param_1 + 0x14) * ___real_c2480000;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xe0) = fVar1;
  partEMITTER_PHYS::SetCDTParam
            ((partEMITTER_PHYS *)this,*(float *)(param_1 + 0x14) * ___real_3e444444,
             *(float *)(param_1 + 0x14) * ___real_3e4ccccd,
             *(float *)(param_1 + 0x14) * ___real_3f333333,3);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10000;
  *(undefined4 *)(this + 0xcc) = 0x3ecccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  uVar5 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar5 | 0x200000;
  *(uint *)(this + 4) = uVar5 | 0x200010;
  *(uint *)(this + 4) = uVar5 | 0x200018;
  *(uint *)(this + 4) = uVar5 | 0x202018;
  *(uint *)(this + 4) = uVar5 | 0x20a018;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.2);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_skeleton.cpp
   addr: 00478750 */

wrsfxSKELETON_DEATH_DUST * __thiscall
wrsfxSKELETON_DEATH_DUST::wrsfxSKELETON_DEATH_DUST
          (wrsfxSKELETON_DEATH_DUST *this,wrsfxSKELETON_DEATH_EMITTER_INI *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  m3dSPL_LINEAR1D *this_00;
  m3dSPL *pmVar6;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x19,47.6,2.0);
  *(undefined ***)this = &_vftable_;
  this_00 = *(m3dSPL_LINEAR1D **)param_1;
  if (this_00 == (m3dSPL_LINEAR1D *)0x0) {
    this_00 = (m3dSPL_LINEAR1D *)operator_new(0x34);
    if (this_00 == (m3dSPL_LINEAR1D *)0x0) {
      this_00 = (m3dSPL_LINEAR1D *)0x0;
    }
    else {
      m3dSPL::m3dSPL((m3dSPL *)this_00,0,8,1);
      *(undefined ***)this_00 = &m3dSPL_LINEAR1D::_vftable_;
      m3dSPL::AllocKpList((m3dSPL *)this_00,5);
    }
    m3dSPL_LINEAR1D::SetKp(this_00,0,0.0,0.0);
    m3dSPL_LINEAR1D::SetKp(this_00,1,0.033333335,40.0);
    m3dSPL_LINEAR1D::SetKp(this_00,2,0.16666667,47.6);
    m3dSPL_LINEAR1D::SetKp(this_00,3,0.33333334,40.0);
    m3dSPL_LINEAR1D::SetKp(this_00,4,0.53333336,0.0);
  }
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,119.0,this_00);
  fVar1 = ___real_3c23d70a;
  if (___real_00000000 < *(float *)(param_1 + 4)) {
    fVar1 = *(float *)(param_1 + 4);
  }
  *(float *)(this + 0xe8) = *(float *)(param_1 + 0x14) * fVar1;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.5,0.5);
  pmVar6 = (m3dSPL *)operator_new(0x34);
  if (pmVar6 == (m3dSPL *)0x0) {
    pmVar6 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar6,0,8,1);
    *(undefined ***)pmVar6 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar6,2);
  }
  m3dSPL_LINEAR1D::SetKp
            ((m3dSPL_LINEAR1D *)pmVar6,0,0.0,*(float *)(param_1 + 0x14) * ___real_40bc6667);
  m3dSPL_LINEAR1D::SetKp
            ((m3dSPL_LINEAR1D *)pmVar6,1,1.0,*(float *)(param_1 + 0x14) * ___real_40f00000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,*(float *)(param_1 + 0x14) * ___real_40f00000,0.0,
             (m3dSPL_LINEAR1D *)pmVar6,1.0);
  pmVar6 = (m3dSPL *)operator_new(0x34);
  if (pmVar6 == (m3dSPL *)0x0) {
    pmVar6 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar6,0,8,1);
    *(undefined ***)pmVar6 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar6,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar6,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar6,1,0.105,17.748001);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar6,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xeffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar6);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxSKELETON_DEATH::pDustTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  fVar1 = *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0xc);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar4 = *(float *)(param_1 + 8);
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xb4) = fVar3 * fVar4;
  *(float *)(this + 0xb8) = fVar1 * fVar2;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 8);
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xc0) = fVar1 * fVar2 * fVar4;
  *(float *)(this + 0xc4) = fVar1 * fVar2 * fVar3;
  fVar1 = *(float *)(param_1 + 0x14) * ___real_c1a00000;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3e4ccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(float *)(this + 0xe0) = fVar1;
  uVar5 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar5 | 0x200000;
  *(uint *)(this + 4) = uVar5 | 0x200010;
  *(uint *)(this + 4) = uVar5 | 0x200018;
  *(uint *)(this + 4) = uVar5 | 0x202018;
  *(uint *)(this + 4) = uVar5 | 0x20a018;
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,10.0,30.0,2.0,0.2);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_skeleton.cpp
   addr: 00478A20 */

void __thiscall
wrsfxSKELETON_DEATH::AddPiece(wrsfxSKELETON_DEATH *this,entENTITY *param_1,objOBJ *param_2)

{
  char *pcVar1;
  m3dSPL *pmVar2;
  wrsfxSKELETON_DEATH_DUST *pwVar3;
  partEMITTER_PHYS *ppVar4;
  wrsfxSKELETON_DEATH_SHARD *pwVar5;
  int iVar6;
  int iVar7;
  m3dSPL_LINEAR1D *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  m3dSPL_LINEAR1D *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined **local_20;
  undefined4 local_1c;
  undefined4 local_14;
  
  local_54 = *(undefined4 *)(this + 0x18b);
  local_1c = 1;
  local_20 = &m3dBOX::_vftable_;
  local_40 = 0;
  local_64 = 0;
  local_68 = (m3dSPL_LINEAR1D *)0x0;
  local_58 = 0x3f800000;
  local_3c = local_54;
  pcVar1 = strstr(*(char **)(param_2 + 0x18),s_Pelvis_1);
  if (pcVar1 != (char *)0x0) {
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
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,40.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.36666667,20.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.53333336,0.0);
    local_64 = 0;
    local_60 = 0x41200000;
    local_5c = 0x40a00000;
    local_58 = 0;
    local_68 = (m3dSPL_LINEAR1D *)pmVar2;
    pwVar3 = (wrsfxSKELETON_DEATH_DUST *)operator_new(0x2c0);
    if (pwVar3 == (wrsfxSKELETON_DEATH_DUST *)0x0) {
      ppVar4 = (partEMITTER_PHYS *)0x0;
    }
    else {
      ppVar4 = (partEMITTER_PHYS *)
               wrsfxSKELETON_DEATH_DUST::wrsfxSKELETON_DEATH_DUST
                         (pwVar3,(wrsfxSKELETON_DEATH_EMITTER_INI *)&local_68);
    }
    *(partEMITTER_PHYS **)(this + 0x17f) = ppVar4;
    if (ppVar4 == (partEMITTER_PHYS *)0x0) {
      return;
    }
    *(entENTITY **)(this + 0x183) = param_1;
    *(objOBJ **)(this + 0x187) = param_2;
    partSetAreaEmissionObj(ppVar4,param_2,-1,(m3dV *)0x0);
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x17f));
    return;
  }
  pcVar1 = strstr(*(char **)(param_2 + 0x18),s_ArmL_1);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(*(char **)(param_2 + 0x18),s_GR);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(*(char **)(param_2 + 0x18),s_XR1);
      if (pcVar1 == (char *)0x0) {
        return;
      }
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
        m3dSPL::AllocKpList(pmVar2,5);
      }
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,0,0.0,0.0);
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,125.0);
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.16666667,125.0);
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.36666667,75.0);
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,4,0.53333336,0.0);
      local_4c = 0;
      local_48 = 0x40a00000;
      local_44 = 0x40200000;
      local_50 = (m3dSPL_LINEAR1D *)pmVar2;
      pwVar5 = (wrsfxSKELETON_DEATH_SHARD *)operator_new(0x2c0);
      if (pwVar5 == (wrsfxSKELETON_DEATH_SHARD *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = wrsfxSKELETON_DEATH_SHARD::wrsfxSKELETON_DEATH_SHARD
                          (pwVar5,(wrsfxSKELETON_DEATH_EMITTER_INI *)&local_50);
      }
      *(int *)(this + 0x16f) = iVar6;
      if (iVar6 == 0) {
        return;
      }
      local_60 = 0x41700000;
      local_5c = 0x40f00000;
      pwVar3 = (wrsfxSKELETON_DEATH_DUST *)operator_new(0x2c0);
      if (pwVar3 == (wrsfxSKELETON_DEATH_DUST *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = wrsfxSKELETON_DEATH_DUST::wrsfxSKELETON_DEATH_DUST
                          (pwVar3,(wrsfxSKELETON_DEATH_EMITTER_INI *)&local_68);
      }
      *(int *)(this + 0x173) = iVar6;
      if (iVar6 == 0) {
        return;
      }
      iVar6 = 2;
    }
    else {
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
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.2,25.0);
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.23333333,0.0);
      local_4c = 0x3e4ccccd;
      local_48 = 0x41700000;
      local_44 = 0x40f00000;
      local_50 = (m3dSPL_LINEAR1D *)pmVar2;
      pwVar5 = (wrsfxSKELETON_DEATH_SHARD *)operator_new(0x2c0);
      if (pwVar5 == (wrsfxSKELETON_DEATH_SHARD *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = wrsfxSKELETON_DEATH_SHARD::wrsfxSKELETON_DEATH_SHARD
                          (pwVar5,(wrsfxSKELETON_DEATH_EMITTER_INI *)&local_50);
      }
      *(int *)(this + 0x15f) = iVar6;
      if (iVar6 == 0) {
        return;
      }
      local_60 = 0x41700000;
      local_5c = 0x40f00000;
      pwVar3 = (wrsfxSKELETON_DEATH_DUST *)operator_new(0x2c0);
      if (pwVar3 == (wrsfxSKELETON_DEATH_DUST *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = wrsfxSKELETON_DEATH_DUST::wrsfxSKELETON_DEATH_DUST
                          (pwVar3,(wrsfxSKELETON_DEATH_EMITTER_INI *)&local_68);
      }
      *(int *)(this + 0x163) = iVar6;
      if (iVar6 == 0) {
        return;
      }
      iVar6 = 1;
    }
  }
  else {
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
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,82.5);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.23333333,50.0);
    m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.43333334,0.0);
    local_4c = 0x3d4ccccd;
    local_48 = 0x41a00000;
    local_44 = 0x41200000;
    local_50 = (m3dSPL_LINEAR1D *)pmVar2;
    pwVar5 = (wrsfxSKELETON_DEATH_SHARD *)operator_new(0x2c0);
    if (pwVar5 == (wrsfxSKELETON_DEATH_SHARD *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = wrsfxSKELETON_DEATH_SHARD::wrsfxSKELETON_DEATH_SHARD
                        (pwVar5,(wrsfxSKELETON_DEATH_EMITTER_INI *)&local_50);
    }
    *(int *)(this + 0x14f) = iVar6;
    if (iVar6 == 0) {
      return;
    }
    local_60 = 0x41000000;
    local_5c = 0x40800000;
    pwVar3 = (wrsfxSKELETON_DEATH_DUST *)operator_new(0x2c0);
    if (pwVar3 == (wrsfxSKELETON_DEATH_DUST *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = wrsfxSKELETON_DEATH_DUST::wrsfxSKELETON_DEATH_DUST
                        (pwVar3,(wrsfxSKELETON_DEATH_EMITTER_INI *)&local_68);
    }
    *(int *)(this + 0x153) = iVar6;
    if (iVar6 == 0) {
      return;
    }
    iVar6 = 0;
  }
  iVar6 = iVar6 * 0x10;
  *(entENTITY **)(this + iVar6 + 0x157) = param_1;
  *(objOBJ **)(this + iVar6 + 0x15b) = param_2;
  iVar7 = partSetAreaEmissionObj
                    (*(partEMITTER_PHYS **)(this + iVar6 + 0x153),param_2,-1,(m3dV *)0x0);
  if ((iVar7 != 0) &&
     (iVar7 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)(this + iVar6 + 0x14f),
                         *(objOBJ **)(this + iVar6 + 0x15b),-1,(m3dV *)0x0), iVar7 != 0)) {
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + iVar6 + 0x153));
    partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + iVar6 + 0x14f));
    objOBJ::GetOrigin(param_2,(m3dV *)&local_38);
    iVar7 = wrsfxFindFloor((m3dV *)&local_38,(m3dBOX *)&local_20);
    if (iVar7 == 0) {
      local_38 = _m3dVZero;
      local_34 = DAT_00963740;
      local_30 = DAT_00963744;
    }
    else {
      local_34 = local_14;
    }
    local_2c = _m3dVUnitY;
    local_28 = DAT_005f9994;
    local_24 = DAT_005f9998;
    partEMITTER_PHYS::SetCDTPlane
              (*(partEMITTER_PHYS **)(this + iVar6 + 0x14f),1,0,(m3dPLANE *)&local_38);
  }
  return;
}




/* from: sfx_skeleton.cpp
   addr: 00479030 */

void __thiscall wrsfxSKELETON_DEATH::ProcessFRAME(wrsfxSKELETON_DEATH *this)

{
  int iVar1;
  int iVar2;
  float in_EDX;
  wrsfxSKELETON_DEATH *pwVar3;
  
  iVar1 = m3dUpdateTimeField((float *)(this + 399),in_EDX);
  if (iVar1 != 0) {
    msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    return;
  }
  iVar1 = 0;
  pwVar3 = this + 0x15b;
  do {
    if (*(int *)(pwVar3 + -4) != 0) {
      iVar2 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)(pwVar3 + -8),*(objOBJ **)pwVar3,-1,(m3dV *)0x0);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)(pwVar3 + -0xc),*(objOBJ **)pwVar3,-1,(m3dV *)0x0);
      if (iVar2 == 0) {
        return;
      }
    }
    iVar1 = iVar1 + 1;
    pwVar3 = pwVar3 + 0x10;
    if (2 < iVar1) {
      if (*(int *)(this + 0x183) != 0) {
        partSetAreaEmissionObj
                  (*(partEMITTER_PHYS **)(this + 0x17f),*(objOBJ **)(this + 0x187),-1,(m3dV *)0x0);
      }
      return;
    }
  } while( true );
}




/* from: sfx_skeleton.cpp
   addr: 004790C0 */

void __thiscall wrsfxSKELETON_DEATH::ProcessTERM(wrsfxSKELETON_DEATH *this)

{
  int iVar1;
  wrsfxSKELETON_DEATH *pwVar2;
  
  iVar1 = 3;
  pwVar2 = this + 0x14f;
  do {
    if (*(int *)(pwVar2 + 8) != 0) {
      *(int *)(pwVar2 + 8) = 0;
      if (*(undefined4 **)pwVar2 != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)pwVar2)(1);
      }
      *(int *)pwVar2 = 0;
      if (*(undefined4 **)(pwVar2 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(pwVar2 + 4))(1);
      }
      *(int *)(pwVar2 + 4) = 0;
    }
    pwVar2 = pwVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(this + 0x183) != 0) {
    if (*(undefined4 **)(this + 0x17f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x17f))(1);
    }
    *(undefined4 *)(this + 0x17f) = 0;
  }
  return;
}




/* from: sfx_skeleton.cpp
   addr: 00479130 */

void __thiscall
wrsfxSKELETON_DEATH::ProcessDESTROY_ENT(wrsfxSKELETON_DEATH *this,entENTITY *param_1)

{
  int iVar1;
  wrsfxSKELETON_DEATH *pwVar2;
  
  if (*(entENTITY **)(this + 0x183) == param_1) {
    *(undefined4 *)(this + 0x183) = 0;
    if (*(undefined4 **)(this + 0x17f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x17f))(1);
    }
    *(undefined4 *)(this + 0x17f) = 0;
    return;
  }
  pwVar2 = this + 0x14f;
  iVar1 = 3;
  do {
    if (*(entENTITY **)(pwVar2 + 8) == param_1) {
      *(int *)(pwVar2 + 8) = 0;
      if (*(undefined4 **)pwVar2 != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)pwVar2)(1);
      }
      *(int *)pwVar2 = 0;
      if (*(undefined4 **)(pwVar2 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(pwVar2 + 4))(1);
      }
      *(int *)(pwVar2 + 4) = 0;
    }
    pwVar2 = pwVar2 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}




/* from: sfx_skeleton.cpp
   addr: 004791B0 */

int __thiscall
wrsfxSKELETON_DEATH::ProcessMsg
          (wrsfxSKELETON_DEATH *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  undefined4 uVar1;
  
  if (param_1 < 4) {
    if (param_1 == 3) {
      ProcessDESTROY_ENT(this,(entENTITY *)param_2);
      return 0;
    }
    if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
      uVar1 = *param_2;
      *(undefined4 *)(this + 399) = 0x40800000;
      *(undefined4 *)(this + 0x18b) = uVar1;
      *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
      return 0;
    }
    if (param_1 == 2) {
      ProcessTERM(this);
      return 0;
    }
  }
  else if (param_1 == 1000) {
    ProcessFRAME(this);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_skeleton.cpp
   addr: 00479210 */

entENTITY * __fastcall wrsfxSKELETON_SPEAR_APPEAR::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x173);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x167) = _m3dVZero;
    *(undefined4 *)(this + 0x16b) = DAT_00963740;
    *(undefined4 *)(this + 0x16f) = DAT_00963744;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_skeleton.cpp
   addr: 00479290
   addr: 00479290 */

void * __thiscall
wrsfxSKELETON_SPEAR_APPEAR::_vector_deleting_destructor_
          (wrsfxSKELETON_SPEAR_APPEAR *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_skeleton.cpp
   addr: 004792C0 */

entENTITY * __fastcall wrsfxSKELETON_SPEAR_LAND::Create(animINST *param_1)

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




/* from: sfx_skeleton.cpp
   addr: 00479310
   addr: 00479310 */

void * __thiscall
wrsfxSKELETON_SPEAR_LAND::_vector_deleting_destructor_(wrsfxSKELETON_SPEAR_LAND *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_skeleton.cpp
   addr: 00479340 */

entENTITY * __fastcall wrsfxSKELETON_DEATH::Create(animINST *param_1)

{
  entENTITY *this;
  entENTITY *peVar1;
  int iVar2;
  
  this = (entENTITY *)operator_new(0x193);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    peVar1 = this + 0x153;
    iVar2 = 3;
    do {
      *(undefined4 *)(peVar1 + 4) = 0;
      *(undefined4 *)peVar1 = 0;
      *(undefined4 *)(peVar1 + -4) = 0;
      peVar1 = peVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(this + 0x17f) = 0;
    *(undefined4 *)(this + 0x183) = 0;
    *(undefined4 *)(this + 399) = 0;
    *(undefined4 *)(this + 0x18b) = 0;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_skeleton.cpp
   addr: 004793A0
   addr: 004793A0 */

void * __thiscall
wrsfxSKELETON_DEATH::_scalar_deleting_destructor_(wrsfxSKELETON_DEATH *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

