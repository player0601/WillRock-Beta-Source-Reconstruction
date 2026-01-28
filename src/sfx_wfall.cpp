
/* from: sfx_wfall.cpp
   addr: 0047B4D0 */

int __fastcall wrsfxWFallInit(void)

{
  int iVar1;
  
  wrsfxWATERFALL::pFoamTex = txmMANAGER::Add(txmManager,s_sfx_wfall_part,0x40003,1);
  if (wrsfxWATERFALL::pFoamTex == (txmTEXTURE *)0x0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_sfx_waterfall,0x24534658,0x50,wrsfxWATERFALL::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: sfx_wfall.cpp
   addr: 0047B520 */

wrsfxWATERFALL_FOAM * __thiscall
wrsfxWATERFALL_FOAM::wrsfxWATERFALL_FOAM(wrsfxWATERFALL_FOAM *this,float param_1)

{
  uint uVar1;
  float fVar2;
  m3dSPL *pmVar3;
  
  partEMITTER_PHYS::partEMITTER_PHYS((partEMITTER_PHYS *)this,10.0,1.6);
  *(undefined ***)this = &_vftable_;
  pmVar3 = (m3dSPL *)operator_new(0x34);
  if (pmVar3 == (m3dSPL *)0x0) {
    pmVar3 = (m3dSPL *)0x0;
  }
  else {
    m3dSPL::m3dSPL(pmVar3,0,8,1);
    *(undefined ***)pmVar3 = &m3dSPL_LINEAR1D::_vftable_;
    m3dSPL::AllocKpList(pmVar3,2);
  }
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,0,0.0,param_1 * ___real_00000000);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.5,param_1 * ___real_41340000);
  partEMITTER_PHYS::SetSize
            ((partEMITTER_PHYS *)this,param_1 * ___real_40f00000,0.0,(m3dSPL_LINEAR1D *)pmVar3,1.0);
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
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,1,0.215,31.212);
  m3dSPL_LINEAR1D::SetKp((m3dSPL_LINEAR1D *)pmVar3,2,1.0,0.0);
  partEMITTER_PHYS::SetColor
            ((partEMITTER_PHYS *)this,0xffffffff,(m3dSPL_COLOR *)0x0,(m3dSPL_LINEAR1D *)pmVar3);
  partEMITTER_PHYS::SetTexture((partEMITTER_PHYS *)this,wrsfxWATERFALL::pFoamTex);
  partEMITTER_PHYS::SetTextureRotAnim((partEMITTER_PHYS *)this,180.5,179.5,0.0,0.0);
  fVar2 = param_1 * ___real_41200000;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 4;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(float *)(this + 0xb4) = fVar2;
  fVar2 = param_1 * ___real_3f000000;
  *(undefined4 *)(this + 0xe4) = 0;
  *(float *)(this + 0xb8) = fVar2;
  *(float *)(this + 0xc0) = param_1 * ___real_40400000;
  *(float *)(this + 0xc4) = param_1 * ___real_3e19999a;
  *(float *)(this + 0xe0) = param_1 * ___real_c2200000;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar1 | 0x400;
  *(uint *)(this + 4) = uVar1 | 0x408;
  *(uint *)(this + 4) = uVar1 | 0x2408;
  *(uint *)(this + 4) = uVar1 | 0xa408;
  *(uint *)(this + 4) = uVar1 | 0xa409;
  *(uint *)(this + 4) = uVar1 | 0x800a409;
  return this;
}




/* from: sfx_wfall.cpp
   addr: 0047B6F0 */

int __thiscall wrsfxWATERFALL::ProcessINIT(wrsfxWATERFALL *this,float param_1)

{
  char cVar1;
  int iVar2;
  wrsfxWATERFALL_FOAM *this_00;
  partEMITTER_PHYS *ppVar3;
  int iVar4;
  uint uVar5;
  wrsfxWATERFALL *pwVar6;
  char *pcVar7;
  int iVar8;
  undefined **local_30;
  char *local_2c;
  int local_28;
  objOBJ *local_24 [9];
  
  uVar5 = 0xffffffff;
  local_2c = s__h__nc_area;
  local_30 = &objFILTER_NAME_LEN::_vftable_;
  pcVar7 = s__h__nc_area;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_28 = ~uVar5 - 1;
  *(uint *)(*(int *)(this + 0xbc) + 4) = *(uint *)(*(int *)(this + 0xbc) + 4) | 0x10;
  iVar2 = objMakePtrList((objOBJ **)(*(int *)(this + 0xbc) + 0x10),1,(objFILTER *)&local_30,local_24
                         ,9);
  iVar8 = 0;
  if (0 < iVar2) {
    pwVar6 = this + 0x14f;
    do {
      this_00 = (wrsfxWATERFALL_FOAM *)operator_new(0x2c0);
      if (this_00 == (wrsfxWATERFALL_FOAM *)0x0) {
        ppVar3 = (partEMITTER_PHYS *)0x0;
      }
      else {
        ppVar3 = (partEMITTER_PHYS *)wrsfxWATERFALL_FOAM::wrsfxWATERFALL_FOAM(this_00,param_1);
      }
      *(partEMITTER_PHYS **)pwVar6 = ppVar3;
      if (ppVar3 == (partEMITTER_PHYS *)0x0) {
        return 0;
      }
      iVar4 = partSetAreaEmissionObj(ppVar3,local_24[iVar8],-1,(m3dV *)0x0);
      if (iVar4 == 0) {
        return 0;
      }
      partEMITTER_PHYS::StartEmission(*(partEMITTER_PHYS **)pwVar6);
      partAttachInst(*(partEMITTER_PHYS **)pwVar6,*(animINST **)(this + 0xbc));
      iVar8 = iVar8 + 1;
      pwVar6 = pwVar6 + 4;
    } while (iVar8 < iVar2);
  }
  return 1;
}




/* from: sfx_wfall.cpp
   addr: 0047B7D0 */

int __thiscall
wrsfxWATERFALL::ProcessMsg
          (wrsfxWATERFALL *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  wrsfxWATERFALL *pwVar1;
  int iVar2;
  
  if (param_1 == 1) {
    ProcessINIT(this,1.0);
  }
  else if (param_1 == 2) {
    pwVar1 = this + 0x14f;
    iVar2 = 9;
    do {
      if (*(undefined4 **)pwVar1 != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)pwVar1)(1);
      }
      *(int *)pwVar1 = 0;
      pwVar1 = pwVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0;
  }
  return 0;
}




/* from: sfx_wfall.cpp
   addr: 0047B840 */

int __thiscall objFILTER_NAME_LEN::IsUse(objFILTER_NAME_LEN *this,objOBJ *param_1)

{
  int iVar1;
  
  if (*(char **)(param_1 + 0x18) != (char *)0x0) {
    iVar1 = strncmp(*(char **)(param_1 + 0x18),*(char **)(this + 4),*(size_t *)(this + 8));
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}




/* from: sfx_wfall.cpp
   addr: 0047B870 */

entENTITY * __fastcall wrsfxWATERFALL::Create(animINST *param_1)

{
  entENTITY *this;
  int iVar1;
  entENTITY *peVar2;
  
  this = (entENTITY *)operator_new(0x173);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    peVar2 = this + 0x14f;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)peVar2 = 0;
      peVar2 = peVar2 + 4;
    }
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: sfx_wfall.cpp
   addr: 0047B8B0
   addr: 0047B8B0 */

void * __thiscall wrsfxWATERFALL::_scalar_deleting_destructor_(wrsfxWATERFALL *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

