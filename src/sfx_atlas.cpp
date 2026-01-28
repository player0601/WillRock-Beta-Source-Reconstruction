
/* from: sfx_atlas.cpp
   addr: 0045EC00 */

int __fastcall wrsfxAtlasInit(void)

{
  int iVar1;
  
  wrsfxATLAS_GLOBE_APPEAR::pTexLgtn =
       txmMANAGER::Add(txmManager,s_sfx_atlas_globe_appear_lgtn,0x40003,1);
  if (wrsfxATLAS_GLOBE_APPEAR::pTexLgtn == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_atlas_globe_appear,0x24534658,0x50,wrsfxATLAS_GLOBE_APPEAR::Create,
                           (char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxATLAS_GLOBE_LAND::pFlashTex =
       txmMANAGER::Add(txmManager,s_sfx_atlas_globe_land_flash,0x40003,1);
  if (wrsfxATLAS_GLOBE_LAND::pFlashTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_atlas_globe_land,0x24534658,0x50,wrsfxATLAS_GLOBE_LAND::Create,
                           (char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_atlas.cpp
   addr: 0045EC90 */

wrsfxATLAS_GLOBE_APPEAR_LGTN * __thiscall
wrsfxATLAS_GLOBE_APPEAR_LGTN::wrsfxATLAS_GLOBE_APPEAR_LGTN
          (wrsfxATLAS_GLOBE_APPEAR_LGTN *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x14,20.0,0.4);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.033333335,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.6333333,20.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.6333333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  fVar2 = param_1 * ___real_00000000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.033333335,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.6333333,param_1 * ___real_40800000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.6333333,fVar2);
  *(undefined4 *)(this + 0xe8) = 0x40800000;
  *(m3dSPL **)(this + 0xf0) = pmVar3;
  *(undefined4 *)(this + 0xec) = 0;
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.4,0.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_41480000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,25.0,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.51,127.5);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,150.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxATLAS_GLOBE_APPEAR::pTexLgtn);
  fVar2 = param_1 * ___real_3e4ccccd;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xcc) = fVar2;
  *(float *)(this + 0xb4) = param_1 * ___real_41a00000;
  *(float *)(this + 0xb8) = param_1 * ___real_41200000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x200408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_atlas.cpp
   addr: 0045EF40 */

wrsfxATLAS_GLOBE_APPEAR_SPHERE * __thiscall
wrsfxATLAS_GLOBE_APPEAR_SPHERE::wrsfxATLAS_GLOBE_APPEAR_SPHERE
          (wrsfxATLAS_GLOBE_APPEAR_SPHERE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x5a,100.0,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.6333333,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.3666667,12.326);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.6333333,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.0,0.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_3fa00000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,param_1 * ___real_3f200000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,0.1,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)0x0);
  fVar2 = param_1 * ___real_3e4ccccd;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0xcc) = fVar2;
  *(float *)(this + 0xb4) = param_1 * ___real_c1c80000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x8000;
  *(uint *)(this + 4) = uVar1 | 0xa000;
  *(uint *)(this + 4) = uVar1 | 0xa000;
  *(uint *)(this + 4) = uVar1 | 0x20a000;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* from: sfx_atlas.cpp
   addr: 0045F110 */

void __thiscall wrsfxATLAS_GLOBE_APPEAR::Start(wrsfxATLAS_GLOBE_APPEAR *this)

{
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
  animINST::Transform(*(animINST **)(this + 0xbc),(m3dMATR *)(*(int *)(this + 0x157) + 0x3c),0);
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  *(undefined4 *)(this + 0x15f) = 0x40000000;
  objOBJ::SetStateRendYes(*(objOBJ **)(this + 0x157),0x8000000);
  *(undefined4 *)(this + 0x163) = 1;
  return;
}




/* from: sfx_atlas.cpp
   addr: 0045F190 */

int __thiscall
wrsfxATLAS_GLOBE_APPEAR::ProcessMsg
          (wrsfxATLAS_GLOBE_APPEAR *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  objOBJ *poVar2;
  wrsfxATLAS_GLOBE_APPEAR_LGTN *this_00;
  wrsfxATLAS_GLOBE_APPEAR_SPHERE *this_01;
  objOBJ *this_02;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
    poVar2 = objFindName(*(objOBJ **)((int)param_2 + 4),&s_SHAR);
    *(objOBJ **)(this + 0x157) = poVar2;
    if (poVar2 != (objOBJ *)0x0) {
      this_00 = (wrsfxATLAS_GLOBE_APPEAR_LGTN *)operator_new(0x2c0);
      if (this_00 == (wrsfxATLAS_GLOBE_APPEAR_LGTN *)0x0) {
        iVar1 = 0;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        iVar1 = wrsfxATLAS_GLOBE_APPEAR_LGTN::wrsfxATLAS_GLOBE_APPEAR_LGTN(this_00,*param_2);
      }
      *(int *)(this + 0x14f) = iVar1;
      if (iVar1 != 0) {
        this_01 = (wrsfxATLAS_GLOBE_APPEAR_SPHERE *)operator_new(0x2c0);
        if (this_01 == (wrsfxATLAS_GLOBE_APPEAR_SPHERE *)0x0) {
          iVar1 = 0;
        }
        else {
                    /* WARNING: Load size is inaccurate */
          iVar1 = wrsfxATLAS_GLOBE_APPEAR_SPHERE::wrsfxATLAS_GLOBE_APPEAR_SPHERE(this_01,*param_2);
        }
        *(int *)(this + 0x153) = iVar1;
        if (iVar1 != 0) {
          poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_Sphere);
          *(objOBJ **)(this + 0x15b) = poVar2;
          if (poVar2 != (objOBJ *)0x0) {
            iVar1 = partSetAreaEmissionObj
                              (*(partEMITTER_PHYS **)(this + 0x153),poVar2,-1,(m3dV *)0x0);
            if (iVar1 != 0) {
              poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__bb_Plane1);
              if (poVar2 != (objOBJ *)0x0) {
                this_02 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s__bb_Plane2);
                if (this_02 != (objOBJ *)0x0) {
                  objOBJ::SetStateRendNo(poVar2,0x80);
                  objOBJ::SetStateRendNo(this_02,0x80);
                  objOBJ::SetStateRendYes(poVar2,0x60);
                  objOBJ::SetStateRendYes(this_02,0x60);
                  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x11
                  ;
                  objOBJ::SetStateProcYes
                            (*(objOBJ **)(this + 0x15b),0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0)
                  ;
                  partAttachInst(*(partEMITTER_PHYS **)(this + 0x14f),*(animINST **)(this + 0xbc));
                  *(uint *)(*(int *)(this + 0x14f) + 4) =
                       *(uint *)(*(int *)(this + 0x14f) + 4) | 0x20000000;
                  partAttachInst(*(partEMITTER_PHYS **)(this + 0x153),*(animINST **)(this + 0xbc));
                  *(uint *)(*(int *)(this + 0x153) + 4) =
                       *(uint *)(*(int *)(this + 0x153) + 4) | 0x20000000;
                }
              }
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
      if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x14f))(1);
      }
      *(undefined4 *)(this + 0x153) = 0;
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
    if ((param_1 == 1000) && (*(int *)(this + 0x163) != 0)) {
      iVar1 = m3dUpdateTimeField((float *)(this + 0x15f),in_EDX);
      if (iVar1 != 0) {
        *(undefined4 *)(this + 0x163) = 0;
        objOBJ::SetStateRendNo(*(objOBJ **)(this + 0x157),0x8000000);
        partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x153));
        partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x14f));
        *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
        return 0;
      }
      iVar1 = *(int *)(this + 0x157);
      m3dMATR::GetOrigin((m3dMATR *)(iVar1 + 0x3c),local_c);
      animINST::Transform(*(animINST **)(this + 0xbc),(m3dMATR *)(iVar1 + 0x3c),0);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x14f),local_c,(m3dV *)0x0,(m3dV *)0x0);
      iVar1 = partSetAreaEmissionObj
                        (*(partEMITTER_PHYS **)(this + 0x153),*(objOBJ **)(this + 0x15b),-1,
                         (m3dV *)0x0);
      if (iVar1 != 0) {
        animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
        return 0;
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_atlas.cpp
   addr: 0045F460 */

wrsfxATLAS_GLOBE_LAND_FLASH * __thiscall
wrsfxATLAS_GLOBE_LAND_FLASH::wrsfxATLAS_GLOBE_LAND_FLASH
          (wrsfxATLAS_GLOBE_LAND_FLASH *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10,100.0,0.6);
  *(undefined ***)this = &_vftable_;
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.008333334,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.033333335,100.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.4,0.2);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,param_1 * ___real_42160000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,param_1 * ___real_42960000);
  fVar2 = param_1 * ___real_3f000000;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_43160000,fVar2,(m3dSPL_LINEAR1D *)pmVar4,1.0
            );
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,107.355);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxATLAS_GLOBE_LAND::pFlashTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,30.0);
  fVar3 = param_1 * ___real_3ca3d70a;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(float *)(this + 0xe8) = fVar3;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xf4) = fVar2;
  partEMITTER_PHYS::SetPosDirSpeed((partEMITTER_PHYS *)this,(m3dV *)0x0,&m3dVUnitY,(m3dV *)0x0);
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xc0) = param_1 + param_1;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_atlas.cpp
   addr: 0045F6B0 */

void __thiscall wrsfxATLAS_GLOBE_LAND::Start(wrsfxATLAS_GLOBE_LAND *this,m3dMATR *param_1)

{
  m3dV local_c [4];
  float local_8;
  
  animINST::Transform(*(animINST **)(this + 0xbc),param_1,0);
  m3dMATR::GetOrigin(param_1,local_c);
  local_8 = local_8 + ___real_3dcccccd;
  partEMITTER_PHYS::SetPosDirSpeed
            (*(partEMITTER_PHYS **)(this + 0x14f),local_c,(m3dV *)0x0,(m3dV *)0x0);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  *(undefined4 *)(this + 0x153) = 0x3f910625;
  *(undefined4 *)(this + 0x15b) = 1;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) & 0xfffffffe;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_atlas.cpp
   addr: 0045F740 */

int __thiscall
wrsfxATLAS_GLOBE_LAND::ProcessMsg
          (wrsfxATLAS_GLOBE_LAND *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  wrsfxATLAS_GLOBE_LAND *pwVar1;
  int iVar2;
  wrsfxATLAS_GLOBE_LAND_FLASH *this_00;
  float in_EDX;
  
  if (param_1 == 1) {
    pwVar1 = this + 0x157;
    iVar2 = animINST::GetFloat(*(animINST **)(this + 0xbc),s_ANIM_PROP,s_scale,(float *)pwVar1);
    if (iVar2 == 0) {
      *(float *)pwVar1 = 0.1;
      animINST::Scale(*(animINST **)(this + 0xbc),0.1,0.1,0.1,0);
    }
    this_00 = (wrsfxATLAS_GLOBE_LAND_FLASH *)operator_new(0x2c0);
    if (this_00 == (wrsfxATLAS_GLOBE_LAND_FLASH *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxATLAS_GLOBE_LAND_FLASH::wrsfxATLAS_GLOBE_LAND_FLASH
                        (this_00,*(float *)pwVar1 * ___real_3f000000);
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 != 0) {
      *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x11;
      partAttachInst(*(partEMITTER_PHYS **)(this + 0x14f),*(animINST **)(this + 0xbc));
      *(uint *)(*(int *)(this + 0x14f) + 4) = *(uint *)(*(int *)(this + 0x14f) + 4) | 0x20000000;
      FUCK = FUCK + 1;
    }
  }
  else {
    if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x14f))(1);
      }
      *(undefined4 *)(this + 0x14f) = 0;
      FUCK = FUCK + -1;
      return 0;
    }
    if ((param_1 == 1000) && (*(int *)(this + 0x15b) != 0)) {
      iVar2 = m3dUpdateTimeField((float *)(this + 0x153),in_EDX);
      if (iVar2 != 0) {
        *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 1;
        partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x14f));
        *(undefined4 *)(this + 0x15b) = 0;
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
        return 0;
      }
      animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,0,(float *)0x0);
      return 0;
    }
  }
  return 0;
}




/* from: sfx_atlas.cpp
   addr: 0045F8C0 */

entENTITY * __fastcall wrsfxATLAS_GLOBE_APPEAR::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x167);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_atlas.cpp
   addr: 0045F910
   addr: 0045F910 */

void * __thiscall
wrsfxATLAS_GLOBE_APPEAR::_vector_deleting_destructor_(wrsfxATLAS_GLOBE_APPEAR *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_atlas.cpp
   addr: 0045F940 */

entENTITY * __fastcall wrsfxATLAS_GLOBE_LAND::Create(animINST *param_1)

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




/* from: sfx_atlas.cpp
   addr: 0045F990
   addr: 0045F990 */

void * __thiscall
wrsfxATLAS_GLOBE_LAND::_vector_deleting_destructor_(wrsfxATLAS_GLOBE_LAND *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

