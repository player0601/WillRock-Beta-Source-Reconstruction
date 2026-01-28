
/* from: sfx_bird.cpp
   addr: 004604C0 */

int __fastcall wrsfxBirdInit(void)

{
  int iVar1;
  
  wrsfxBIRD_DEATH::pTex = txmMANAGER::Add(txmManager,s_sfx_bird_death_part,0x40003,1);
  if (wrsfxBIRD_DEATH::pTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_bird_death,0x24534658,0x50,wrsfxBIRD_DEATH::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_bird.cpp
   addr: 00460510 */

wrsfxBIRD_DEATH_EMITTER * __thiscall
wrsfxBIRD_DEATH_EMITTER::wrsfxBIRD_DEATH_EMITTER(wrsfxBIRD_DEATH_EMITTER *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,0x50,583.0,6.0);
  *(undefined ***)this = &_vftable_;
  *(float *)(this + 0x2c0) = param_1;
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.033333335,500.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,0.06666667,583.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,3,0.1,500.0);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,4,0.13333334,0.0);
  partEMITTER_PHYS::SetIntensity((partEMITTER_PHYS *)this,583.0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTimeLifePart((partEMITTER_PHYS *)this,4.5,1.5);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,*(float *)(this + 0x2c0) * ___real_3ec00000,
             *(float *)(this + 0x2c0) * ___real_3e000000,(m3dSPL_LINEAR1D *)0x0,1.0);
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.51,191.76);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  *(float *)(this + 0xe8) = *(float *)(this + 0x2c0) * ___real_40200000;
  fVar2 = *(float *)(this + 0x2c0) * ___real_3f958106;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(float *)(this + 0xf4) = fVar2;
  partEMITTER_PHYS::SetPosDirSpeed((partEMITTER_PHYS *)this,(m3dV *)0x0,&m3dVUnitY,(m3dV *)0x0);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxBIRD_DEATH::pTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,0.0,180.0,0.0,60.0);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xb4) = 0;
  fVar2 = *(float *)(this + 0x2c0) * ___real_40e66666;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = *(float *)(this + 0x2c0) + *(float *)(this + 0x2c0);
  *(float *)(this + 0xc4) = *(float *)(this + 0x2c0) * ___real_40200000;
  *(float *)(this + 0xe0) = *(float *)(this + 0x2c0) * ___real_be99999a;
  *(float *)(this + 0xb0) = *(float *)(this + 0x2c0) * ___real_40900000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x1000408;
  partEMITTER_PHYS::SetScaleCSVal((partEMITTER_PHYS *)this,1.0,0.353,1.0);
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_bird.cpp
   addr: 00460780 */

void __thiscall
wrsfxBIRD_DEATH_EMITTER::PartUpdate
          (wrsfxBIRD_DEATH_EMITTER *this,int param_1,partPART **param_2,float param_3)

{
  float fVar1;
  partPART *ppVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  
  partEMITTER_PHYS::PartUpdate((partEMITTER_PHYS *)this,param_1,param_2,param_3);
  iVar3 = 0;
  if (0 < param_1) {
    do {
      ppVar2 = param_2[iVar3];
      if (((byte)ppVar2[0x38] & 8) == 0) {
        local_18 = *(float *)(ppVar2 + 0x10) * ___real_3f000000;
        local_14 = *(float *)(ppVar2 + 0x14) * ___real_3f000000;
        local_10 = *(float *)(ppVar2 + 0x18) * ___real_3f000000;
        fVar4 = (float10)(**(code **)(*(int *)m3dNoise + 8))(&local_18);
        local_10 = (float)(fVar4 * (float10)*(float *)(this + 0x2c0) * (float10)___real_3f000000);
        local_18 = local_18 + ___real_3fc8f5c3;
        local_14 = local_14 + ___real_3fc8f5c3;
        fVar4 = (float10)(**(code **)(*(int *)m3dNoise + 8))(&stack0xffffffe4);
        local_10 = (float)(fVar4 * (float10)*(float *)(this + 0x2c0) * (float10)___real_3f000000);
        local_18 = local_18 + ___real_3fc8f5c3;
        fVar5 = (float10)(**(code **)(*(int *)m3dNoise + 8))(&stack0xffffffe0);
        fVar1 = *(float *)(this + 0x2c0);
        fVar4 = (float10)___real_3f000000;
        *(float *)(ppVar2 + 0x1c) = fStack_c * param_3 + *(float *)(ppVar2 + 0x1c);
        *(float *)(ppVar2 + 0x20) = fStack_8 * param_3 + *(float *)(ppVar2 + 0x20);
        *(float *)(ppVar2 + 0x24) =
             (float)(fVar5 * (float10)fVar1 * fVar4 * (float10)param_3 +
                    (float10)*(float *)(ppVar2 + 0x24));
        *(float *)(ppVar2 + 0x10) = param_3 * *(float *)(ppVar2 + 0x1c) + *(float *)(ppVar2 + 0x10);
        *(float *)(ppVar2 + 0x14) = param_3 * *(float *)(ppVar2 + 0x20) + *(float *)(ppVar2 + 0x14);
        *(float *)(ppVar2 + 0x18) = param_3 * *(float *)(ppVar2 + 0x24) + *(float *)(ppVar2 + 0x18);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1);
  }
  return;
}




/* from: sfx_bird.cpp
   addr: 004608F0 */

int __thiscall wrsfxBIRD_DEATH::Start(wrsfxBIRD_DEATH *this,m3dMATR *param_1)

{
  m3dV local_c [12];
  
  if (*(int *)(this + 0x15b) != 0) {
    return 1;
  }
  m3dMATR::GetOrigin(param_1,local_c);
  partEMITTER_PHYS::SetPosDirSpeed
            (*(partEMITTER_PHYS **)(this + 0x14f),local_c,(m3dV *)0x0,(m3dV *)0x0);
  partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)(this + 0x14f));
  *(undefined4 *)(this + 0x153) = 0x40c00000;
  *(undefined4 *)(this + 0x15b) = 1;
  return 1;
}




/* from: sfx_bird.cpp
   addr: 00460960 */

int __thiscall
wrsfxBIRD_DEATH::ProcessMsg
          (wrsfxBIRD_DEATH *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  wrsfxBIRD_DEATH_EMITTER *this_00;
  float in_EDX;
  m3dMATR local_40 [64];
  
  if (param_1 == 1) {
    if (param_2 == (void *)0x0) {
      *(undefined4 *)(this + 0x157) = 0x3f000000;
    }
    else {
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)(this + 0x157) = *param_2;
    }
    fVar1 = *(float *)(this + 0x157);
    animINST::Scale(*(animINST **)(this + 0xbc),fVar1,fVar1,fVar1,1);
    this_00 = (wrsfxBIRD_DEATH_EMITTER *)operator_new(0x2c4);
    if (this_00 == (wrsfxBIRD_DEATH_EMITTER *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = wrsfxBIRD_DEATH_EMITTER::wrsfxBIRD_DEATH_EMITTER(this_00,*(float *)(this + 0x157));
    }
    *(int *)(this + 0x14f) = iVar2;
    if (iVar2 != 0) {
      m3dMATR::Identity(local_40);
      partEMITTER_PHYS::SetScaleCS(*(partEMITTER_PHYS **)(this + 0x14f),local_40);
    }
  }
  else {
    if (param_1 == 2) {
      if (*(undefined4 **)(this + 0x14f) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(this + 0x14f))(1);
      }
      *(undefined4 *)(this + 0x14f) = 0;
      return 0;
    }
    if ((param_1 == 1000) && (*(int *)(this + 0x15b) != 0)) {
      iVar2 = m3dUpdateTimeField((float *)(this + 0x153),in_EDX);
      if (iVar2 != 0) {
        *(undefined4 *)(this + 0x15b) = 0;
        partEMITTER_PHYS::StopEmission(*(partEMITTER_PHYS **)(this + 0x14f));
        msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)this,2,(msgADDR *)this);
        return 0;
      }
    }
  }
  return 0;
}




/* from: sfx_bird.cpp
   addr: 00460AA0 */

entENTITY * __fastcall wrsfxBIRD_DEATH::Create(animINST *param_1)

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




/* from: sfx_bird.cpp
   addr: 00460AF0
   addr: 00460AF0 */

void * __thiscall wrsfxBIRD_DEATH::_vector_deleting_destructor_(wrsfxBIRD_DEATH *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

