
/* from: sfx_flame.cpp
   addr: 00468E00 */

int __fastcall wrsfxFlameInit(void)

{
  int iVar1;
  
  wrsfxFLAME::pTexSmoke = txmMANAGER::Add(txmManager,s_sfx_mcg_cloud,0x40003,1);
  if (wrsfxFLAME::pTexSmoke == (txmTEXTURE *)0x0) {
    return 0;
  }
  wrsfxFLAME::pTexSpark = txmMANAGER::Add(txmManager,s_sfx_flame_spark,0x40003,1);
  if (wrsfxFLAME::pTexSpark == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_flame,0x24444e54,0x2d,wrsfxFLAME::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_flame.cpp
   addr: 00468E70 */

wrsfxFLAME_SPARKS * __thiscall
wrsfxFLAME_SPARKS::wrsfxFLAME_SPARKS(wrsfxFLAME_SPARKS *this,float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  m3dSPL *pmVar4;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0xfa,2000.0,1.7);
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
    m3dSPL::AllocKpList(pmVar4,3);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,0.041666668,2000.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,2,0.25,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,0.0,(m3dSPL_LINEAR1D *)pmVar4);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,0.85,0.65);
  fVar2 = param_1 * ___real_3e19999a;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xe8) = fVar2;
  fVar2 = param_1 + param_1;
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,fVar2 * ___real_3d99999a,fVar2 * ___real_3ccccccd,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,0,0.0,202.215);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar4,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar4);
  uVar1 = *(uint *)(this + 4);
  fVar3 = param_1 * ___real_c1000000;
  *(uint *)(this + 4) = uVar1 | 1;
  *(uint *)(this + 4) = uVar1 | 0x100005;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xe0) = fVar3;
  fVar3 = fVar2 * ___real_40400000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(float *)(this + 0xb4) = fVar3;
  *(float *)(this + 0xb8) = fVar2 * ___real_3fc00000;
  *(float *)(this + 0xc0) = fVar2 * ___real_3f19999a;
  *(float *)(this + 0xc4) = fVar2 * ___real_3e99999a;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxFLAME::pTexSpark);
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,2.0,0.0);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,40.0,80.0,4.0,0.2);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_flame.cpp
   addr: 00469090 */

wrsfxFLAME_SMOKE * __thiscall
wrsfxFLAME_SMOKE::wrsfxFLAME_SMOKE(wrsfxFLAME_SMOKE *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x32,50.0,2.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.041666668,50.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.9166666,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,50.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,1.0,0.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_3f2ccccc,param_1 * ___real_3e666667,
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,0.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.18,80.58);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,80.0);
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
  m3dSPL_LINEAR1D::SetKp
            ((m3dSPL_LINEAR1D *)pmVar3,0,param_1 * ___real_00000000,param_1 * ___real_40866666);
  m3dSPL_LINEAR1D::SetKp
            ((m3dSPL_LINEAR1D *)pmVar3,1,param_1 * ___real_3ff55555,param_1 * ___real_3f99999a);
  fVar2 = param_1 * ___real_3e4ccccd;
  *(undefined4 *)(this + 0xb4) = 0x40866666;
  *(undefined4 *)(this + 0xb8) = 0x3e800000;
  *(m3dSPL **)(this + 0xbc) = pmVar3;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0x41a00000;
  *(float *)(this + 0xe8) = fVar2;
  *(undefined4 *)(this + 0xfc) = 0;
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxFLAME::pTexSmoke);
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  partEMITTER_PHYS::SetAnimEmission((partEMITTER_PHYS *)this,2.0,0.0);
  partEMITTER_PHYS::SetDegFarParams((partEMITTER_PHYS *)this,40.0,80.0,2.0,0.3);
  return this;
}




/* from: sfx_flame.cpp
   addr: 00469310 */

entENTITY * __fastcall wrsfxFLAME::Create(animINST *param_1)

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




/* from: sfx_flame.cpp
   addr: 00469370 */

int __thiscall wrsfxFLAME::SetupAniSystem(wrsfxFLAME *this)

{
  animTPL *paVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  animSYSTEM *this_00;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  animSEQ *local_c;
  int local_8;
  int local_4;
  
  paVar1 = *(animTPL **)(*(animINST **)(this + 0xbc) + 0x138);
  iVar2 = animINST::GetInt(*(animINST **)(this + 0xbc),s_FLAME,s_isDayNight,&local_4);
  if ((iVar2 != 0) && (local_4 != 0)) {
    if (*(animSEQ **)(paVar1 + 0x90) == (animSEQ *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = *(int *)(paVar1 + 0x8c);
      local_c = *(animSEQ **)(paVar1 + 0x90);
    }
    iVar2 = 4;
    *(undefined4 *)(paVar1 + 0x8c) = 4;
    puVar3 = (undefined4 *)operator_new(0x224);
    if (puVar3 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = puVar3 + 1;
      *puVar3 = 4;
      puVar3 = puVar4;
      do {
        puVar7 = puVar3;
        for (iVar6 = 0x22; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        puVar3[0x20] = 2;
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + 0x22;
      } while (iVar2 != 0);
    }
    *(undefined4 **)(paVar1 + 0x90) = puVar4;
    _entAnimSetSeqName(paVar1,0,s_WRSFX_FLAME_SEQ_UNUSED);
    _entAnimSetSeqName(paVar1,1,s_WRSFX_FLAME_SEQ_STAY);
    _entAnimSetSeqName(paVar1,2,s_WRSFX_FLAME_SEQ_START);
    _entAnimSetSeqName(paVar1,3,s_WRSFX_FLAME_SEQ_STOP);
    entAnimAssignTplSeq(paVar1,local_c,local_8);
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x40) = 0;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x44) = 0x3f800000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x50) = 0x43fa0000;
    *(undefined4 *)(*(int *)(paVar1 + 0x90) + 0x80) = 0;
    this_00 = (animSYSTEM *)operator_new(0x14);
    if ((this_00 == (animSYSTEM *)0x0) ||
       (piVar5 = (int *)animSYSTEM::animSYSTEM(this_00,4,0), piVar5 == (int *)0x0)) {
      return 0;
    }
    *(int **)(paVar1 + 0xa4) = piVar5;
    (**(code **)(*piVar5 + 0xc))(0,0,1,0xffffffff);
    (**(code **)(*piVar5 + 0x14))(1);
    (**(code **)(*piVar5 + 4))(2,2,1,1,0);
    (**(code **)(*piVar5 + 4))(2,1,1,1,0);
    (**(code **)(*piVar5 + 4))(2,3,0,3,0);
    (**(code **)(*piVar5 + 4))(1,2,1,1,0);
    (**(code **)(*piVar5 + 4))(1,3,0,3,0);
    (**(code **)(*piVar5 + 4))(3,3,2,3,0);
    (**(code **)(*piVar5 + 4))(3,2,0,2,0);
    if (local_c != (animSEQ *)0x0) {
      operator_delete(local_c + -4);
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_flame.cpp
   addr: 00469590 */

int __thiscall
wrsfxFLAME::ProcessMsg(wrsfxFLAME *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  m3dNOISE *pmVar1;
  uint uVar2;
  objOBJ *poVar3;
  objMOD_TEX_FRAME_ANIM *poVar4;
  wrsfxFLAME_SPARKS *this_00;
  wrsfxFLAME_SMOKE *this_01;
  partEMITTER_PHYS *ppVar5;
  m3dSPL *this_02;
  m3dCTRL_TIME *pmVar6;
  pteSPOT *this_03;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_ECX_01;
  float extraout_ECX_02;
  float extraout_ECX_03;
  float extraout_ECX_04;
  float extraout_EDX;
  float extraout_EDX_00;
  float unaff_EBX;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined1 local_94 [4];
  m3dV amStack_90 [4];
  m3dV local_8c [64];
  char acStack_4c [76];
  
  if (0x3f4 < param_1) {
    if (param_1 == 0x3f8) {
      iVar8 = apNAME::IsName((apNAME *)((int)param_2 + 8),s_START);
      if (iVar8 == 0) {
        iVar8 = apNAME::IsName((apNAME *)((int)param_2 + 8),&s_STOP);
        if (iVar8 == 0) {
          return 0;
        }
        ppVar5 = *(partEMITTER_PHYS **)(this + 0x15b);
        if (ppVar5 != (partEMITTER_PHYS *)0x0) {
          partEMITTER_PHYS::StopEmission(ppVar5);
          partEMITTER_PHYS::StartEmission(ppVar5);
        }
        if (*(int **)(this + 0x157) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x157) + 4))(0);
        }
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffff7;
        uVar2 = *(uint *)(this + 0x84) | 2;
      }
      else {
        ppVar5 = *(partEMITTER_PHYS **)(this + 0x15f);
        if (ppVar5 != (partEMITTER_PHYS *)0x0) {
          partEMITTER_PHYS::StopEmission(ppVar5);
          partEMITTER_PHYS::StartEmission(ppVar5);
        }
        if (*(int **)(this + 0x157) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x157) + 4))(1);
        }
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 8;
        uVar2 = *(uint *)(this + 0x84) | 1;
      }
      *(uint *)(this + 0x84) = uVar2;
    }
    else if (param_1 == 0x4ce) {
      if (((byte)this[0x14f] & 1) != 0) {
        uVar2 = *(uint *)(this + 0x14f);
        *(uint *)(this + 0x14f) = uVar2 | 2;
        *(uint *)(this + 0x14f) = uVar2 & 0xfffffffb | 2;
        return 0;
      }
    }
    else if ((param_1 == 0x4cf) && (((byte)this[0x14f] & 1) != 0)) {
      uVar2 = *(uint *)(this + 0x14f);
      *(uint *)(this + 0x14f) = uVar2 & 0xfffffffd;
      *(uint *)(this + 0x14f) = uVar2 & 0xfffffffd | 4;
      return 0;
    }
    return 0;
  }
  if (param_1 == 0x3f4) {
    if (*(pteSHADER **)(this + 0x157) == (pteSHADER *)0x0) {
      return 0;
    }
    pteSHADER::CalcStaticData(*(pteSHADER **)(this + 0x157),1);
    (**(code **)(**(int **)(this + 0x157) + 4))(0);
    return 0;
  }
  if (param_1 == 1) {
    animINST::GetPos(*(animINST **)(this + 0xbc),local_8c);
    poVar3 = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),s_FLAME,5);
    if (poVar3 == (objOBJ *)0x0) {
      return 0;
    }
    *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
    poVar4 = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
    if (poVar4 == (objMOD_TEX_FRAME_ANIM *)0x0) {
      poVar4 = (objMOD_TEX_FRAME_ANIM *)0x0;
      fVar7 = extraout_ECX;
    }
    else {
      poVar4 = (objMOD_TEX_FRAME_ANIM *)objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(poVar4,0);
      fVar7 = extraout_ECX_00;
    }
    iVar11 = 1;
    fVar10 = 120.0;
    fVar9 = 60.0;
    iVar8 = 0x1e;
    fVar7 = m3dRandMax(fVar7);
    objMOD_TEX_FRAME_ANIM::SetParams(poVar4,4,8,1.5,fVar7,iVar8,fVar9,fVar10,iVar11);
    (**(code **)(*(int *)poVar4 + 4))(poVar3);
    objOBJ::SetTransparency(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0x40,0xff);
    objOBJ::SetConstColor(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10),0xffafafaf,2,0);
    iVar8 = animINST::GetInt(*(animINST **)(this + 0xbc),s_FLAME,s_isDayNight,&iStack_b4);
    if ((iVar8 == 0) || (iStack_b4 == 0)) {
      animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
    }
    else {
      unaff_EBX = 1.0;
      iVar8 = animINST::GetFloat(*(animINST **)(this + 0xbc),s_FLAME,s_size,
                                 (float *)&stack0xffffff48);
      if (iVar8 != 0) {
        animINST::Scale(*(animINST **)(this + 0xbc),1.0,1.0,1.0,1);
        animINST::Invalidate(*(animINST **)(this + 0xbc),4);
      }
      this_00 = (wrsfxFLAME_SPARKS *)operator_new(0x2c0);
      if (this_00 == (wrsfxFLAME_SPARKS *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = wrsfxFLAME_SPARKS::wrsfxFLAME_SPARKS(this_00,___real_3f169696 * 1.0);
      }
      *(int *)(this + 0x15f) = iVar8;
      if (iVar8 == 0) {
        return 0;
      }
      this_01 = (wrsfxFLAME_SMOKE *)operator_new(0x2c0);
      if (this_01 == (wrsfxFLAME_SMOKE *)0x0) {
        ppVar5 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar5 = (partEMITTER_PHYS *)
                 wrsfxFLAME_SMOKE::wrsfxFLAME_SMOKE(this_01,___real_3f169696 * 1.0);
      }
      *(partEMITTER_PHYS **)(this + 0x15b) = ppVar5;
      if (ppVar5 == (partEMITTER_PHYS *)0x0) {
        return 0;
      }
      partEMITTER_PHYS::SetPosDirSpeed(ppVar5,amStack_90,&m3dVUnitY,(m3dV *)0x0);
      partEMITTER_PHYS::SetPosDirSpeed
                (*(partEMITTER_PHYS **)(this + 0x15f),amStack_90,&m3dVUnitY,(m3dV *)0x0);
      partAttachInst(*(partEMITTER_PHYS **)(this + 0x15b),*(animINST **)(this + 0xbc));
      partAttachInst(*(partEMITTER_PHYS **)(this + 0x15f),*(animINST **)(this + 0xbc));
      iStack_a0 = 1;
      animINST::GetBool(*(animINST **)(this + 0xbc),s_FLAME,s_isStartSFX,&iStack_a0);
      if (iStack_a0 != 0) {
        if (*(int **)(this + 0x157) != (int *)0x0) {
          (**(code **)(**(int **)(this + 0x157) + 4))(1);
        }
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 8;
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 1;
      }
      *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
      this_02 = (m3dSPL *)operator_new(0x34);
      if (this_02 == (m3dSPL *)0x0) {
        this_02 = (m3dSPL *)0x0;
      }
      else {
        *(undefined4 *)(this_02 + 4) = 0;
        *(undefined4 *)(this_02 + 8) = 0;
        *(undefined4 *)(this_02 + 0xc) = 0;
        *(undefined4 *)(this_02 + 0x14) = 8;
        *(undefined4 *)(this_02 + 0x18) = 8;
        *(undefined4 *)(this_02 + 0x1c) = 1;
        *(undefined4 *)(this_02 + 0x20) = 0;
        *(undefined4 *)(this_02 + 0x24) = 0;
        *(undefined4 *)(this_02 + 0x28) = 0;
        *(undefined4 *)(this_02 + 0x2c) = 0;
        *(undefined4 *)(this_02 + 0x30) = 0;
        *(undefined ***)this_02 = &m3dSPL_LINEAR1D::_vftable_;
        m3dSPL::AllocKpList(this_02,3);
      }
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_02,0,0.0,0.0);
      fVar9 = 0.5;
      fVar7 = m3dRandRange(extraout_ECX_01,extraout_EDX);
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_02,1,fVar7,fVar9);
      m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)this_02,2,1.0,1.0);
      pmVar6 = (m3dCTRL_TIME *)operator_new(0x20);
      if (pmVar6 == (m3dCTRL_TIME *)0x0) {
        pmVar6 = (m3dCTRL_TIME *)0x0;
        fVar7 = extraout_ECX_02;
      }
      else {
        fStack_9c = m3dRandRange(extraout_ECX_02,extraout_EDX_00);
        m3dCTRL_TIME::m3dCTRL_TIME(pmVar6,fStack_9c);
        *(undefined4 *)(pmVar6 + 0x18) = 0;
        *(m3dSPL **)(pmVar6 + 0x1c) = this_02;
        *(undefined ***)pmVar6 = &m3dCTRL_1D_SPL::_vftable_;
        fVar7 = extraout_ECX_03;
      }
      *(m3dCTRL_TIME **)(this + 0x153) = pmVar6;
      fVar7 = m3dRandMax(fVar7);
      if ((*(byte *)(*(int *)(this + 0x153) + 4) & 1) != 0) {
        *(float *)(*(int *)(this + 0x153) + 8) = fVar7;
      }
    }
    iVar8 = animINST::GetInt(*(animINST **)(this + 0xbc),s_FLAME,s_isLight,&iStack_b4);
    if ((iVar8 != 0) && (iStack_b4 != 0)) {
      this_03 = (pteSPOT *)operator_new(0x108);
      if (this_03 == (pteSPOT *)0x0) {
        this_03 = (pteSPOT *)0x0;
      }
      else {
        pteSPOT::pteSPOT(this_03,1);
        *(undefined4 *)(this_03 + 0xf8) = 0;
        *(undefined4 *)(this_03 + 0xfc) = 0;
        *(undefined4 *)(this_03 + 0x100) = 0;
        *(undefined4 *)(this_03 + 0x104) = 0;
        *(undefined ***)this_03 = &pteSPOT_ANIM::_vftable_;
      }
      *(pteSPOT **)(this + 0x157) = this_03;
      if (this_03 == (pteSPOT *)0x0) {
        return 0;
      }
      pteSPOT::SetRadius(this_03,unaff_EBX * ___real_40a00000);
      pmVar6 = (m3dCTRL_TIME *)operator_new(0x48);
      pmVar1 = m3dNoise;
      if (pmVar6 == (m3dCTRL_TIME *)0x0) {
        pmVar6 = (m3dCTRL_TIME *)0x0;
      }
      else {
        uStack_b0 = 0x434c0000;
        uStack_ac = 0x42920000;
        uStack_a8 = 0;
        uStack_a4 = 0x437f0000;
        m3dCTRL_TIME::m3dCTRL_TIME(pmVar6);
        wrSTAT_WPN::wrSTAT_WPN((wrSTAT_WPN *)(pmVar6 + 0x18));
        *(m3dNOISE **)(pmVar6 + 0x28) = pmVar1;
        *(undefined4 *)(pmVar6 + 0x2c) = 0x3f000000;
        *(undefined4 *)(pmVar6 + 0x30) = 0x3f800000;
        *(undefined4 *)(pmVar6 + 0x38) = uStack_b0;
        *(undefined4 *)(pmVar6 + 0x34) = 0x41200000;
        *(undefined ***)pmVar6 = &m3dCTRL_COLOR_NOISE::_vftable_;
        *(undefined4 *)(pmVar6 + 0x3c) = uStack_ac;
        *(undefined4 *)(pmVar6 + 0x40) = uStack_a8;
        *(undefined4 *)(pmVar6 + 0x44) = uStack_a4;
        *(uint *)(pmVar6 + 4) = *(uint *)(pmVar6 + 4) | 4;
      }
      pteSPOT_ANIM::SetCtrlColorLM(*(pteSPOT_ANIM **)(this + 0x157),(m3dCTRL_COLOR *)pmVar6);
      iVar8 = *(int *)(this + 0x157);
      uStack_b0 = 0;
      uStack_ac = 0;
      *(undefined4 *)(iVar8 + 0xb8) = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      *(undefined4 *)(iVar8 + 0xbc) = 0;
      *(undefined4 *)(iVar8 + 0xc0) = 0;
      *(undefined4 *)(iVar8 + 0xc4) = 0;
      pteSHADER::Register(*(pteSHADER **)(this + 0x157));
      (**(code **)(**(int **)(this + 0x157) + 0x14))(amStack_90);
      fVar7 = m3dRandMax(extraout_ECX_04);
      pteSPOT_ANIM::SetCurTime(*(pteSPOT_ANIM **)(this + 0x157),fVar7);
      pteSHADER::SetInstCreate(*(pteSHADER **)(this + 0x157),*(animINST **)(this + 0xbc));
      (**(code **)(**(int **)(this + 0x157) + 4))(1);
      iVar8 = 1;
      do {
        sprintf((char *)local_8c,s_exclude__d,iVar8);
        iVar11 = animINST::GetStr(*(animINST **)(this + 0xbc),s_FLAME,(char *)local_8c,acStack_4c,
                                  0x40);
        if (iVar11 != 0) {
          poVar3 = objFindName(*(objOBJ **)(gsScenePtr + 0x44),acStack_4c);
          pteSPOT::AddObjExclude(*(pteSPOT **)(this + 0x157),poVar3);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 10);
      *(undefined4 *)(*(int *)(this + 0x157) + 0xf0) = 0x41a00000;
      iVar8 = animINST::GetFloat(*(animINST **)(this + 0xbc),s_FLAME,s_lightDistOff,&fStack_9c);
      if (iVar8 != 0) {
        *(float *)(*(int *)(this + 0x157) + 0x84) = fStack_9c;
      }
    }
    *(undefined4 *)(*(int *)(this + 0xbc) + 0xec) = *(undefined4 *)(*(int *)(this + 0xbc) + 0x10);
    return 0;
  }
  if (param_1 == 2) {
    *(undefined4 *)(this + 0x157) = 0;
    if (*(undefined4 **)(this + 0x15b) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x15b))(1);
    }
    *(undefined4 *)(this + 0x15b) = 0;
    if (*(undefined4 **)(this + 0x15f) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x15f))(1);
    }
    *(undefined4 *)(this + 0x15f) = 0;
    if (*(undefined4 **)(this + 0x153) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x153))(1);
    }
    *(undefined4 *)(this + 0x153) = 0;
    return 0;
  }
  if (param_1 != 1000) {
    return 0;
  }
  if ((*(byte *)(*(int *)(this + 0xbc) + 4) & 3) != 0) {
    return 0;
  }
  if (*(int **)(this + 0x153) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x153) + 4))(gsElapsedTime);
  }
  if (((byte)this[0x14f] & 1) == 0) {
    if (*(int **)(this + 0x157) == (int *)0x0) {
      return 0;
    }
    (**(code **)(**(int **)(this + 0x157) + 4))(1);
    return 0;
  }
  (**(code **)(**(int **)(this + 0x153) + 0xc))(local_94);
  if (fStack_98 <= ___real_3f000000) {
    if (((byte)this[0x14f] & 8) == 0) goto LAB_004696ba;
    ppVar5 = *(partEMITTER_PHYS **)(this + 0x15b);
    if (ppVar5 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::StopEmission(ppVar5);
      partEMITTER_PHYS::StartEmission(ppVar5);
    }
    if (*(int **)(this + 0x157) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x157) + 4))(0);
    }
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffff7;
    uVar2 = *(uint *)(this + 0x84) | 2;
  }
  else {
    if (((byte)this[0x14f] & 8) != 0) goto LAB_004696ba;
    ppVar5 = *(partEMITTER_PHYS **)(this + 0x15f);
    if (ppVar5 != (partEMITTER_PHYS *)0x0) {
      partEMITTER_PHYS::StopEmission(ppVar5);
      partEMITTER_PHYS::StartEmission(ppVar5);
    }
    if (*(int **)(this + 0x157) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x157) + 4))(1);
    }
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 8;
    uVar2 = *(uint *)(this + 0x84) | 1;
  }
  *(uint *)(this + 0x84) = uVar2;
LAB_004696ba:
  animSYSTEM_INST::AdvanceAnimation
            (*(animSYSTEM_INST **)(*(animINST **)(this + 0xbc) + 0xe8),*(animINST **)(this + 0xbc),
             (uint)(byte)((~(byte)this[0x14f] & 8 | 0x10) >> 3),gsElapsedTime);
  return 0;
}




/* from: sfx_flame.cpp
   addr: 00469EC0
   addr: 00469EC0
   addr: 00469EC0
   addr: 00469EC0
   addr: 00469EC0
   addr: 00469EC0
   addr: 00469EC0
   addr: 00469EC0 */

void * __thiscall
m3dCTRL_1D_NOISE::_vector_deleting_destructor_(m3dCTRL_1D_NOISE *this,uint param_1)

{
  *(undefined ***)this = &m3dCTRL_TIME::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: sfx_flame.cpp
   addr: 00469EE0
   addr: 00469EE0 */

void * __thiscall wrsfxFLAME::_scalar_deleting_destructor_(wrsfxFLAME *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

