
/* from: sfx_dust.cpp
   addr: 00468610 */

int __fastcall wrsfxDustInit(void)

{
  int iVar1;
  
  wrsfxDUST::pTexCloud = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (wrsfxDUST::pTexCloud == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_dust,0x24534658,0x50,wrsfxDUST::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: sfx_dust.cpp
   addr: 00468660 */

entENTITY * __fastcall wrsfxDUST::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x177);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = 0;
    *(undefined4 *)(this + 0x167) = 0x3f800000;
    *(undefined4 *)(this + 0x16b) = 0x40a00000;
    *(undefined4 *)(this + 0x16f) = 0x3f800000;
    *(undefined4 *)(this + 0x173) = 0x3f800000;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_dust.cpp
   addr: 004686E0
   addr: 004686E0 */

void * __thiscall wrsfxDUST::_vector_deleting_destructor_(wrsfxDUST *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x163) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x163))(1);
  }
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_dust.cpp
   addr: 00468720 */

wrsfxDUST_CLOUD * __thiscall wrsfxDUST_CLOUD::wrsfxDUST_CLOUD(wrsfxDUST_CLOUD *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,30.0,3.0);
  *(undefined ***)this = &_vftable_;
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,30.0,(m3dSPL_LINEAR1D *)0x0);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,2.0,1.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,param_1 * ___real_3f5f5c29);
  fVar2 = param_1 * ___real_40200000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,fVar2);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar4,1.0);
  pmVar4 = (m3dSPL *)operator_new(0x34);
  if (pmVar4 == (m3dSPL *)0x0) {
    pmVar4 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar4,0,8,1);
    *(undefined ***)pmVar4 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.355,44.37);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,0.0);
  fVar2 = param_1 * ___real_3e4ccccd;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3e4ccccd;
  *(float *)(this + 0xb4) = fVar2;
  fVar3 = param_1 * ___real_3e800000;
  *(undefined4 *)(this + 0xd0) = 0x3d4ccccd;
  *(float *)(this + 0xb8) = fVar3;
  *(float *)(this + 0xc0) = fVar2;
  *(float *)(this + 0xc4) = fVar3;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxDUST::pTexCloud);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_dust.cpp
   addr: 004688F0 */

int __thiscall
wrsfxDUST::ProcessMsg(wrsfxDUST *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  wrsfxDUST_CLOUD *this_00;
  int iVar1;
  objOBJ *poVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 extraout_MM1;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  cdtINFO acStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = _m3dVZero;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = DAT_00963740;
  local_8 = DAT_00963744;
  local_4 = 0;
  if (param_1 < 4) {
    if (param_1 == 3) {
      if ((*(void **)(this + 0xc0) != (void *)0x0) && (*(void **)(this + 0xc0) == param_2)) {
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
        return 0;
      }
    }
    else if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)(this + 0x167) = *param_2;
      *(undefined4 *)(this + 0x16b) = *(undefined4 *)((int)param_2 + 4);
      *(undefined4 *)(this + 0x16f) = *(undefined4 *)((int)param_2 + 8);
      *(undefined4 *)(this + 0x173) = *(undefined4 *)((int)param_2 + 0xc);
      this_00 = (wrsfxDUST_CLOUD *)operator_new(0x2c0);
      if (this_00 == (wrsfxDUST_CLOUD *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = wrsfxDUST_CLOUD::wrsfxDUST_CLOUD(this_00,*(float *)(this + 0x173));
      }
      *(int *)(this + 0x163) = iVar1;
      if (iVar1 != 0) {
        poVar2 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_DUST);
        *(objOBJ **)(this + 0x15f) = poVar2;
        if (poVar2 != (objOBJ *)0x0) {
          m3dMATR::Scale((m3dMATR *)(poVar2 + 0x7c),1.0,*(float *)(this + 0x16f),1.0,2);
          objOBJ::DeclareProcAnim(*(objOBJ **)(this + 0x15f));
          objOBJ::SetStateProcYes
                    (*(objOBJ **)(this + 0x15f),0x1008,(_func_int_objOBJ_ptr_void_ptr *)0x0);
          *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
          iVar1 = partSetAreaEmissionObj
                            (*(partEMITTER_PHYS **)(this + 0x163),*(objOBJ **)(this + 0x15f),-1,
                             (m3dV *)0x0);
          if (iVar1 != 0) {
            partAttachInst(*(partEMITTER_PHYS **)(this + 0x163),*(animINST **)(this + 0xbc));
            *(uint *)(*(int *)(this + 0x163) + 4) =
                 *(uint *)(*(int *)(this + 0x163) + 4) | 0x20000000;
            partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x163));
            *(undefined4 *)(this + 0x157) = 0x430c0000;
            *(undefined4 *)(this + 0x14f) = 0x437f0000;
            *(undefined4 *)(this + 0x153) = 0x43520000;
            *(undefined4 *)(this + 0x15b) = 0x437f0000;
            return 0;
          }
        }
      }
    }
    else if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x163) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x163))(1);
      }
      *(undefined4 *)(this + 0x163) = 0;
      return 0;
    }
  }
  else if (((param_1 == 1000) && (*(int *)(this + 0xc0) != 0)) &&
          (iVar1 = partSetAreaEmissionObj
                             (*(partEMITTER_PHYS **)(this + 0x163),*(objOBJ **)(this + 0x15f),-1,
                              (m3dV *)0x0), iVar1 != 0)) {
    iVar1 = (**(code **)(**(int **)(this + 0xc0) + 0x40))(&local_20);
    if (iVar1 != 0) {
      gsEffEnvirColor(acStack_24,(m3dCOLOR *)0x0,(m3dCOLOR *)0x0);
      iVar1 = **(int **)(this + 0x163);
      uVar3 = ftol(0,0);
      iVar4 = ftol();
      uVar5 = ftol();
      uVar6 = ftol();
      (**(code **)(iVar1 + 4))
                (((uVar3 & 0xff | iVar4 << 8) << 8 | uVar5 & 0xff) << 8 | uVar6 & 0xff);
    }
    partEMITTER_PHYS::SetPosDirSpeed
              (*(partEMITTER_PHYS **)(this + 0x163),(m3dV *)0x0,(m3dV *)0x0,(m3dV *)(this + 0xe0));
    fVar10 = *(float *)(this + 0xe0);
    fVar10 = fVar10 * fVar10 +
             *(float *)(this + 0xe4) * *(float *)(this + 0xe4) +
             *(float *)(this + 0xe8) * *(float *)(this + 0xe8);
    if (m3dSimdType == 0) {
      fVar10 = fVar10 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
      auVar12 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar11 = auVar12._0_4_;
      param_1 = (int)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar11 *
                      (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar10 * fVar11 * fVar11) *
                     fVar10);
    }
    else if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar7 = (ulonglong)(uint)fVar10;
      uVar8 = PackedFloatingReciprocalSQRAprox(extraout_MM1,uVar7);
      uVar9 = PackedFloatingMUL(uVar8,uVar8);
      uVar9 = PackedFloatingReciprocalSQRIter1(uVar9,uVar7);
      uVar8 = PackedFloatingReciprocalIter2(uVar9,uVar8);
      uVar8 = PackedFloatingMUL(uVar8,uVar7);
      param_1 = (int)uVar8;
      FastExitMediaState();
    }
    else {
      param_1 = (int)SQRT(fVar10);
    }
    iVar1 = param_1;
    param_1 = *(int *)(this + 0x16b);
    fVar10 = *(float *)(this + 0x167);
    fStack_50 = 0.0;
    fVar13 = 30.0;
    fVar11 = fVar10;
    if ((float)param_1 < fVar10) {
      fStack_50 = 30.0;
      fVar13 = 0.0;
      fVar11 = (float)param_1;
      param_1 = (int)fVar10;
    }
    if (fVar11 <= (float)iVar1) {
      if ((float)iVar1 <= (float)param_1) {
        fStack_44 = (float)param_1;
        fVar10 = fVar11;
        fStack_48 = fVar13;
        if ((float)param_1 < fVar11) {
          fStack_48 = fStack_50;
          fVar10 = (float)param_1;
          fStack_50 = fVar13;
          fStack_44 = fVar11;
        }
        fVar13 = (((float)iVar1 - fVar10) * (fStack_48 - fStack_50)) / (fStack_44 - fVar10) +
                 fStack_50;
      }
    }
    else {
      param_1 = (int)fStack_50;
      fVar13 = (float)param_1;
    }
    param_1 = (int)fVar13;
    partEMITTER_PHYS::SetIntensity
              (*(partEMITTER_PHYS **)(this + 0x163),(float)param_1,(m3dSPL_LINEAR1D *)0x0);
  }
  return 0;
}

