
/* from: sfx_sphinx.cpp
   addr: 004793D0 */

int __fastcall wrsfxSphinxInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_sfx_sphinx_pjl_expl,0x24534658,0x50,wrsfxSPHINX_EXPL::Create,
                           (char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  wrsfxSPHINX_EXPL::pTexSparks = txmMANAGER::Add(txmManager,s_sfx_sphinx_pjl_expl_sparks,0x40003,1);
  if (wrsfxSPHINX_EXPL::pTexSparks == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxSPHINX_EXPL::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_sphinx_pjl_expl_smoke,0x40003,1);
  return (uint)(wrsfxSPHINX_EXPL::pTexSmoke != (txmTEXTURE *)0x0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_sphinx.cpp
   addr: 00479440 */

wrsfxSPHINX_EXPL_SPARKS * __thiscall
wrsfxSPHINX_EXPL_SPARKS::wrsfxSPHINX_EXPL_SPARKS(wrsfxSPHINX_EXPL_SPARKS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,750.0,20.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,750.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.06666667,750.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.1,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.4,0.2);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  fVar2 = param_1 * ___real_3e800000;
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,fVar2);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,param_1 * ___real_00000000);
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar2,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,255.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxSPHINX_EXPL::pTexSparks);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100000;
  partEMITTER_PHYS::SetTextureScale((partEMITTER_PHYS *)this,0.2,0.0,1.0,0.0);
  fVar2 = param_1 * ___real_40400000;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar2;
  *(float *)(this + 0xb8) = param_1 * ___real_3fc00000;
  *(float *)(this + 0xc0) = param_1 * ___real_3e99999a;
  *(float *)(this + 0xc4) = param_1 * ___real_3e19999a;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x409;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_sphinx.cpp
   addr: 00479680 */

wrsfxSPHINX_EXPL_SMOKE * __thiscall
wrsfxSPHINX_EXPL_SMOKE::wrsfxSPHINX_EXPL_SMOKE(wrsfxSPHINX_EXPL_SMOKE *this,float param_1)

{
  float fVar1;
  m3dSPL *pmVar2;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10,33.333332,0.6);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,1,0.033333335,33.333332);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,2,0.1,33.333332);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar2,3,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar2);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.4,0.2);
  fVar1 = param_1 * ___real_3f000000;
  partEMITTER_PHYS::SetSize((partEMITTER_PHYS *)this,fVar1,0.0,(m3dSPL_LINEAR1D *)0x0,1.0);
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
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxSPHINX_EXPL::pTexSmoke);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,90.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xf8) = 0x43340000;
  *(undefined4 *)(this + 0xfc) = 0;
  *(float *)(this + 0xb4) = param_1;
  *(float *)(this + 0xb8) = fVar1;
  *(undefined4 *)(this + 0xbc) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x409;
  partEMITTER_PHYS::SetDegNearParams((partEMITTER_PHYS *)this,3.0,0.1);
  return this;
}




/* from: sfx_sphinx.cpp
   addr: 00479860 */

int __thiscall
wrsfxSPHINX_EXPL::ProcessMsg
          (wrsfxSPHINX_EXPL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  wrsfxSPHINX_EXPL_SPARKS *this_00;
  objOBJ *this_01;
  wrsfxSPHINX_EXPL_SMOKE *this_02;
  float in_EDX;
  m3dV local_c [12];
  
  if (param_1 == 1) {
                    /* WARNING: Load size is inaccurate */
    fVar1 = *param_2;
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,0);
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    objOBJ::SetStateYes(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x10);
    animINST::Validate(*(animINST **)(this + 0xbc),4);
    this_00 = (wrsfxSPHINX_EXPL_SPARKS *)operator_new(0x2c0);
    if (this_00 == (wrsfxSPHINX_EXPL_SPARKS *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxSPHINX_EXPL_SPARKS::wrsfxSPHINX_EXPL_SPARKS(this_00,fVar1);
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 != 0) {
      this_01 = objFindName(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_sparks_emitter);
      if (this_01 != (objOBJ *)0x0) {
        objOBJ::SetStateProcYes(this_01,8,(_func_int_objOBJ_ptr_void_ptr *)0x0);
        iVar2 = partSetAreaEmissionObj(*(partEMITTER_PHYS **)(this + 0x14f),this_01,-1,(m3dV *)0x0);
        if (iVar2 != 0) {
          this_02 = (wrsfxSPHINX_EXPL_SMOKE *)operator_new(0x2c0);
          if (this_02 == (wrsfxSPHINX_EXPL_SMOKE *)0x0) {
            iVar2 = 0;
          }
          else {
            iVar2 = wrsfxSPHINX_EXPL_SMOKE::wrsfxSPHINX_EXPL_SMOKE(this_02,fVar1);
          }
          *(int *)(this + 0x153) = iVar2;
          if (iVar2 != 0) {
            objOBJ::GetOrigin(this_01,local_c);
            partEMITTER_PHYS::SetPosDirSpeed
                      (*(partEMITTER_PHYS **)(this + 0x153),local_c,(m3dV *)0x0,(m3dV *)0x0);
            animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
            partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
            partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x153));
            *(undefined4 *)(this + 0x157) = 0x3f800000;
          }
        }
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
  else if (param_1 == 1000) {
    iVar2 = m3dUpdateTimeField((float *)(this + 0x157),in_EDX);
    if (iVar2 != 0) {
      msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
    }
    animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
    return 0;
  }
  return 0;
}




/* from: sfx_sphinx.cpp
   addr: 00479A60 */

entENTITY * __fastcall wrsfxSPHINX_EXPL::Create(animINST *param_1)

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




/* from: sfx_sphinx.cpp
   addr: 00479AB0
   addr: 00479AB0 */

void * __thiscall
wrsfxSPHINX_EXPL::_scalar_deleting_destructor_(wrsfxSPHINX_EXPL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

