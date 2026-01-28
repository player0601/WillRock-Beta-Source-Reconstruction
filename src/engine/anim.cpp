
/* from: engine:anim.cpp
   addr: 004C2BC0 */

void __thiscall animTPL::DestroyData(animTPL *this)

{
  objOBJ *this_00;
  psSHEET *this_01;
  int iVar1;
  int iVar2;
  animOBJ_ANIM *this_02;
  undefined4 *puVar3;
  
  AbvTerm(this);
  iVar2 = 0;
  if (0 < *(int *)(this + 0xa8)) {
    do {
      (**(code **)(**(int **)(*(int *)(this + 0xac) + iVar2 * 4) + 8))();
      puVar3 = *(undefined4 **)(*(int *)(this + 0xac) + iVar2 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xa8));
  }
  apFree(*(void **)(this + 0xac));
  this_00 = *(objOBJ **)(this + 0x88);
  *(undefined4 *)(this + 0xac) = 0;
  if (this_00 != (objOBJ *)0x0) {
    objOBJ::~objOBJ(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 0x88) = 0;
  if (*(int *)(this + 0x90) != 0) {
    operator_delete((void *)(*(int *)(this + 0x90) + -4));
  }
  iVar2 = *(int *)(this + 0xa0);
  *(undefined4 *)(this + 0x90) = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + -4);
    this_02 = (animOBJ_ANIM *)(iVar1 * 0x40 + iVar2);
    if (-1 < iVar1 + -1) {
      do {
        this_02 = this_02 + -0x40;
        animOBJ_ANIM::~animOBJ_ANIM(this_02);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    operator_delete((void *)(iVar2 + -4));
  }
  *(undefined4 *)(this + 0xa0) = 0;
  if (*(undefined4 **)(this + 0xa4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0xa4))(1);
  }
  iVar2 = *(int *)(this + 0xc0);
  *(undefined4 *)(this + 0xa4) = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + -4);
    if (-1 < iVar1 + -1) {
      puVar3 = (undefined4 *)(iVar2 + iVar1 * 0x4c + 0x48);
      do {
        operator_delete((void *)puVar3[-0x13]);
        iVar1 = iVar1 + -1;
        puVar3[-0x13] = 0;
        puVar3[-0x14] = 0;
        puVar3 = puVar3 + -0x13;
      } while (iVar1 != 0);
    }
    operator_delete((void *)(iVar2 + -4));
  }
  this_01 = *(psSHEET **)(this + 0xc4);
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  if (this_01 != (psSHEET *)0x0) {
    psSHEET::Empty(this_01);
    operator_delete(this_01);
  }
  *(undefined4 *)(this + 0xc4) = 0;
  return;
}




/* from: engine:anim.cpp
   addr: 004C2D30 */

int __thiscall animTPL::FindSeqName(animTPL *this,char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 0x8c)) {
    pbVar2 = *(byte **)(this + 0x90);
    pbVar5 = (byte *)param_1;
    pbVar6 = pbVar2;
LAB_004c2d4c:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_004c2d70;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_004c2d4c;
        }
        iVar3 = 0;
      }
      else {
LAB_004c2d70:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      pbVar2 = pbVar6 + 0x88;
      pbVar5 = (byte *)param_1;
      pbVar6 = pbVar2;
    } while (iVar4 < *(int *)(this + 0x8c));
  }
  return -1;
}




/* from: engine:anim.cpp
   addr: 004C2DA0 */

int __thiscall animTPL::IsDummy(animTPL *this)

{
  int iVar1;
  animTPL *paVar2;
  animTPL *paVar3;
  bool bVar4;
  
  iVar1 = 10;
  bVar4 = true;
  paVar2 = this + 4;
  paVar3 = (animTPL *)s___DUMMY__;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *paVar2 == *paVar3;
    paVar2 = paVar2 + 1;
    paVar3 = paVar3 + 1;
  } while (bVar4);
  return (uint)bVar4;
}




/* from: engine:anim.cpp
   addr: 004C2DC0 */

int __thiscall animINST::SetName(animINST *this,char *param_1)

{
  char *pcVar1;
  
  apFree(*(void **)(this + 0x18));
  *(undefined4 *)(this + 0x18) = 0;
  if (param_1 != (char *)0x0) {
    pcVar1 = apStrdup(param_1);
    *(char **)(this + 0x18) = pcVar1;
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
  }
  return 1;
}




/* from: engine:anim.cpp
   addr: 004C2E00 */

int __thiscall animINST::SetNameClass(animINST *this,char *param_1)

{
  char *pcVar1;
  
  apFree(*(void **)(this + 0x1c));
  *(undefined4 *)(this + 0x1c) = 0;
  if (param_1 != (char *)0x0) {
    pcVar1 = apStrdup(param_1);
    *(char **)(this + 0x1c) = pcVar1;
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
  }
  return 1;
}




/* from: engine:anim.cpp
   addr: 004C2E40 */

int __thiscall animINST::SetNameTpl(animINST *this,char *param_1)

{
  char *pcVar1;
  
  apFree(*(void **)(this + 0x20));
  *(undefined4 *)(this + 0x20) = 0;
  if (param_1 != (char *)0x0) {
    pcVar1 = apStrdup(param_1);
    *(char **)(this + 0x20) = pcVar1;
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
  }
  return 1;
}




/* from: engine:anim.cpp
   addr: 004C2E80 */

int __thiscall animINST::UpdateInvalidateState(animINST *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 & 1U) != 0) {
    uVar1 = 0x1c01;
  }
  if ((param_1 & 0x800U) != 0) {
    uVar1 = uVar1 | 0x1401;
  }
  if ((param_1 & 0x1000U) != 0) {
    uVar1 = uVar1 | 0x1401;
  }
  if ((param_1 & 2U) != 0) {
    uVar1 = uVar1 | 2;
  }
  if (((param_1 & 4U) != 0) && (uVar1 = 0x1e07, ((byte)this[4] & 0x80) == 0)) {
    uVar1 = 0x1e27;
  }
  if ((param_1 & 0x200U) != 0) {
    uVar1 = uVar1 | 0x1e03;
  }
  if ((param_1 & 8U) != 0) {
    uVar1 = uVar1 | 0x1e0f;
    if (((byte)this[4] & 0x80) == 0) {
      uVar1 = 0x1e2f;
    }
    if ((*(int *)(this + 0x100) != 0) && (*(int *)(*(int *)(this + 0x100) + 4) != 0)) {
      uVar1 = uVar1 | 0x40100;
    }
  }
  uVar2 = uVar1;
  if (((param_1 & 0x10U) != 0) && (uVar2 = uVar1 | 0x10, ((byte)this[4] & 0x80) == 0)) {
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(char)uVar2) | 0x20;
  }
  if ((char)param_1 < '\0') {
    uVar2 = uVar2 | 0x41fe7;
  }
  if ((param_1 & 0x100U) != 0) {
    uVar2 = uVar2 | 0x40100;
  }
  if ((param_1 & 0x20U) != 0) {
    uVar2 = uVar2 | 0x20;
  }
  if ((param_1 & 0x40U) != 0) {
    uVar2 = uVar2 | 0x40;
  }
  if ((param_1 & 0x40000U) != 0) {
    uVar2 = uVar2 | 0x40000;
  }
  if ((char)((uint)param_1 >> 8) < '\0') {
    uVar2 = uVar2 | 0x8000;
  }
  if ((param_1 & 0x10000U) != 0) {
    uVar2 = uVar2 | 0x10000;
  }
  if ((param_1 & 0x2000U) != 0) {
    uVar2 = uVar2 | 0x2000;
  }
  if ((param_1 & 0x4000U) != 0) {
    uVar2 = uVar2 | 0x4000;
  }
  return uVar2;
}




/* from: engine:anim.cpp
   addr: 004C2F60 */

int __thiscall animINST::UpdateValidateState(animINST *this,int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1U) != 0) {
    uVar1 = 0x21d;
  }
  if ((param_1 & 0x800U) != 0) {
    uVar1 = uVar1 | 0xa1c;
  }
  if ((param_1 & 0x400U) != 0) {
    uVar1 = uVar1 | 0x161d;
  }
  if ((param_1 & 0x1000U) != 0) {
    uVar1 = uVar1 | 0x1a1d;
  }
  if ((param_1 & 2U) != 0) {
    uVar1 = uVar1 | 0x21e;
  }
  if ((param_1 & 4U) != 0) {
    uVar1 = uVar1 | 0x1c;
  }
  if ((param_1 & 8U) != 0) {
    uVar1 = uVar1 | 0x18;
  }
  if ((param_1 & 0x10U) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((param_1 & 0x200U) != 0) {
    uVar1 = uVar1 | 0x21c;
  }
  if ((param_1 & 0x20U) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((param_1 & 0x100U) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  if ((param_1 & 0x40000U) != 0) {
    uVar1 = uVar1 | 0x40100;
  }
  if ((param_1 & 0x40U) != 0) {
    uVar1 = uVar1 | 0x40;
  }
  if ((char)((uint)param_1 >> 8) < '\0') {
    uVar1 = uVar1 | 0x8000;
  }
  if ((param_1 & 0x10000U) != 0) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((param_1 & 0x2000U) != 0) {
    uVar1 = uVar1 | 0x2000;
  }
  if ((param_1 & 0x4000U) != 0) {
    uVar1 = uVar1 | 0x4000;
  }
  return uVar1;
}




/* from: engine:anim.cpp
   addr: 004C3030 */

void __thiscall animINST::Invalidate(animINST *this,int param_1)

{
  objOBJ *this_00;
  cdtCOLL_ANIM *this_01;
  uint uVar1;
  
  if ((*(uint *)(this + 0xc) & param_1) != param_1) {
    if ((param_1 & 0x20000U) != 0) {
      param_1 = param_1 & 0xfffdffff;
      *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 0x20000;
    }
    if ((*(uint *)(this + 0xc) & 0x20000) != 0) {
      objOBJ::ValidateModifiersHier(*(objOBJ **)(this + 0x10),(apSTATE *)0x0,(apSTATE *)0x0);
      *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffdffff;
    }
    uVar1 = UpdateInvalidateState(this,param_1);
    this_00 = *(objOBJ **)(this + 0x10);
    if (this_00 != (objOBJ *)0x0) {
      if ((*(uint *)(this + 4) & 0x20000000) == 0) {
        if ((*(uint *)(this_00 + 0xe0) & uVar1) != 0) {
          uVar1 = uVar1 | *(uint *)(this_00 + 0xe4);
        }
      }
      else {
        uVar1 = objOBJ::InvalidateModifiers(this_00,uVar1);
      }
    }
    uVar1 = UpdateInvalidateState(this,uVar1);
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | uVar1;
    if (((((uVar1 & 0x40000) != 0) && (((byte)this[4] & 0x10) == 0)) &&
        (*(int *)(this + 0x148) != 0)) &&
       (this_01 = *(cdtCOLL_ANIM **)(*(int *)(this + 0x148) + 0x54), this_01 != (cdtCOLL_ANIM *)0x0)
       ) {
      cdtCOLL_ANIM::Invalidate(this_01,*(int *)(this + 0x14),0);
    }
  }
  return;
}




/* from: engine:anim.cpp
   addr: 004C30F0 */

void __thiscall animINST::Validate(animINST *this,int param_1)

{
  objOBJ *this_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  animINST *paVar4;
  undefined4 *puVar5;
  
  if ((param_1 & *(uint *)(this + 0xc)) == 0) {
    return;
  }
  if ((*(uint *)(this + 0xc) & 0x20000) != 0) {
    objOBJ::ValidateModifiersHier(*(objOBJ **)(this + 0x10),(apSTATE *)0x0,(apSTATE *)0x0);
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffdffff;
  }
  uVar1 = UpdateValidateState(this,param_1);
  this_00 = *(objOBJ **)(this + 0x10);
  if (this_00 != (objOBJ *)0x0) {
    if ((*(uint *)(this + 4) & 0x20000000) == 0) {
      if ((*(uint *)(this_00 + 0xe4) & uVar1) != 0) {
        uVar1 = uVar1 | *(uint *)(this_00 + 0xe0);
      }
    }
    else {
      uVar1 = objOBJ::ValidateModifiers(this_00,uVar1);
    }
    uVar1 = UpdateValidateState(this,uVar1);
  }
  if ((char)((uint)*(undefined4 *)(this + 0xc) >> 8) < '\0') {
    objOBJ::AdvanceModifiersTime(*(objOBJ **)(this + 0x10));
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffff7fff;
  }
  if ((char)this[0xc] < '\0') {
    if (*(int *)(this + 0x10) != 0) {
      paVar4 = this + 0x60;
      puVar5 = (undefined4 *)(*(int *)(this + 0x10) + 0x7c);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *(undefined4 *)paVar4;
        paVar4 = paVar4 + 4;
        puVar5 = puVar5 + 1;
      }
    }
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffffff7f;
  }
  if (((uVar1 & 0x18) != 0) && (((byte)this[0xc] & 0x18) != 0)) {
    ApplyAnim(this);
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffffffe7;
  }
  if (((uVar1 & 4) != 0) && (((byte)this[0xc] & 4) != 0)) {
    objCalcLTM(*(objOBJ **)(this + 0x10));
    objOBJ::ApplyModifiers(*(objOBJ **)(this + 0x10),4);
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffffb;
  }
  if (((uVar1 & 0x200) != 0) && ((*(uint *)(this + 0xc) & 0x200) != 0)) {
    if ((*(int *)(this + 0x10) != 0) &&
       (((*(uint *)(*(int *)(this + 0x10) + 0xe4) & 0x200) != 0 &&
        (*(objOBJ ***)(this + 300) != (objOBJ **)0x0)))) {
      objMOD_SKIN::StartApply(*(objOBJ ***)(this + 300));
      objOBJ::ApplyModifiers(*(objOBJ **)(this + 0x10),0x200);
    }
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffdff;
  }
  if (((uVar1 & 2) != 0) && (((byte)this[0xc] & 2) != 0)) {
    objCalcBBox(*(objOBJ **)(this + 0x10));
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffffd;
  }
  uVar3 = *(uint *)(this + 0xc) & 0x800;
  if (((uVar3 == 0) || ((uVar1 & 1) == 0)) || ((*(uint *)(this + 0xc) & 1) == 0)) {
    if (((uVar1 & 0x800) != 0) && (uVar3 != 0)) {
      objOBJ::CalcFacePerpVectors(*(objOBJ **)(this + 0x10));
      *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffff7ff;
    }
    if (((uVar1 & 1) != 0) && (((byte)this[0xc] & 1) != 0)) {
      objOBJ::NormalizeFacePerpVectors(*(objOBJ **)(this + 0x10));
      uVar3 = *(uint *)(this + 0xc) & 0xfffffffe;
      goto LAB_004c3289;
    }
  }
  else {
    objOBJ::CalcFaceNormals(*(objOBJ **)(this + 0x10));
    uVar3 = *(uint *)(this + 0xc) & 0xfffff7fe;
LAB_004c3289:
    *(uint *)(this + 0xc) = uVar3;
  }
  uVar3 = *(uint *)(this + 0xc) & 0x1000;
  if (((uVar3 == 0) || ((uVar1 & 0x400) == 0)) || ((*(uint *)(this + 0xc) & 0x400) == 0)) {
    if (((uVar1 & 0x1000) != 0) && (uVar3 != 0)) {
      objOBJ::CalcVertPerpVectors(*(objOBJ **)(this + 0x10));
      objOBJ::ApplyModifiers(*(objOBJ **)(this + 0x10),0x1000);
      *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffffefff;
    }
    if (((uVar1 & 0x400) == 0) || ((*(uint *)(this + 0xc) & 0x400) == 0)) goto LAB_004c3312;
    objOBJ::NormalizeVertPerpVectors(*(objOBJ **)(this + 0x10));
    objOBJ::ApplyModifiers(*(objOBJ **)(this + 0x10),0x400);
    uVar3 = *(uint *)(this + 0xc) & 0xfffffbff;
  }
  else {
    objOBJ::CalcVertNormals(*(objOBJ **)(this + 0x10));
    objOBJ::ApplyModifiers(*(objOBJ **)(this + 0x10),0x400);
    uVar3 = *(uint *)(this + 0xc) & 0xffffebff;
  }
  *(uint *)(this + 0xc) = uVar3;
LAB_004c3312:
  if (((uVar1 & 0x20) != 0) && (((byte)this[0xc] & 0x20) != 0)) {
    AbvUpdateBVList(this);
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffffffdf;
  }
  if (((uVar1 & 0x40) != 0) && (((byte)this[0xc] & 0x40) != 0)) {
    m3dMATR::Invert((m3dMATR *)(this + 0x60),(m3dMATR *)(this + 0xa0));
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffffffbf;
  }
  if (((uVar1 & 0x100) != 0) && ((*(uint *)(this + 0xc) & 0x100) != 0)) {
    iVar2 = *(int *)(this + 0x100);
    if (iVar2 != 0) {
      (**(code **)(**(int **)(iVar2 + 8) + 8))(this,iVar2);
      (**(code **)(**(int **)(*(int *)(iVar2 + 8) + 4) + 0x1c))(iVar2 + 0xc);
    }
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffffeff;
  }
  if (((uVar1 & 0x40000) != 0) && ((*(uint *)(this + 0xc) & 0x40000) != 0)) {
    ValidateBBox(this);
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffbffff;
  }
  if (((uVar1 & 0x2000) != 0) && ((*(uint *)(this + 0xc) & 0x2000) != 0)) {
    objOBJ::ApplyModifiers(*(objOBJ **)(this + 0x10),0x2000);
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffffdfff;
  }
  if (((uVar1 & 0x4000) != 0) && ((*(uint *)(this + 0xc) & 0x4000) != 0)) {
    objOBJ::ApplyModifiers(*(objOBJ **)(this + 0x10),0x4000);
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffffbfff;
  }
  if ((char)(uVar1 >> 8) < '\0') {
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xffff7fff;
  }
  if ((uVar1 & 0x10000) != 0) {
    objOBJ::ApplyModifiers(*(objOBJ **)(this + 0x10),0x10000);
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) & 0xfffeffff;
  }
  return;
}




/* from: engine:anim.cpp
   addr: 004C3420 */

void __thiscall animINST::MakeCreateData(animINST *this,animCREATE_DATA *param_1)

{
  animCREATE_DATA *paVar1;
  int iVar2;
  char *_Source;
  animINST *paVar3;
  animCREATE_DATA *paVar4;
  m3dMATR *pmVar5;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  paVar1 = param_1;
  paVar4 = param_1;
  for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)paVar4 = 0;
    paVar4 = paVar4 + 4;
  }
  *(undefined2 *)paVar4 = 0;
  if ((*(int *)(this + 0x138) == 0) || (*(int *)(*(int *)(this + 0x138) + 0x8c) < 1)) {
    *(undefined2 *)(param_1 + 0xc) = 0xffff;
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(this + 0xe0);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(this + 0xe4);
  }
  if ((*(int *)(this + 0x10) == 0) || (iVar2 = *(int *)(*(int *)(this + 0x10) + 0x38), iVar2 == 0))
  {
    local_10 = 1.0;
    local_14 = 1.0;
    param_1 = (animCREATE_DATA *)0x3f800000;
  }
  else {
    m3dMATR::GetScale((m3dMATR *)(iVar2 + 0x7c),(float *)&param_1,&local_14,&local_10);
  }
  paVar3 = this + 0x60;
  pmVar5 = (m3dMATR *)(paVar1 + 0x12);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pmVar5 = *(undefined4 *)paVar3;
    paVar3 = paVar3 + 4;
    pmVar5 = pmVar5 + 4;
  }
  m3dMATR::GetScale((m3dMATR *)(paVar1 + 0x12),&local_c,&local_8,&local_4);
  m3dMATR::RemoveScale((m3dMATR *)(paVar1 + 0x12));
  *(float *)paVar1 = local_c * (float)param_1;
  *(float *)(paVar1 + 4) = local_8 * local_14;
  *(float *)(paVar1 + 8) = local_4 * local_10;
  *(undefined4 *)(paVar1 + 0x92) = *(undefined4 *)(this + 0x134);
  _Source = *(char **)(this + 0x18);
  if (_Source == (char *)0x0) {
    _Source = s_;
  }
  strncpy((char *)(paVar1 + 0x52),_Source,0x3f);
  paVar1[0x90] = (animCREATE_DATA)0x0;
  return;
}




/* from: engine:anim.cpp
   addr: 004C3540 */

void __thiscall animINST::ApplyCreateData(animINST *this,animCREATE_DATA *param_1)

{
  m3dMATR *this_00;
  short sVar1;
  int iVar2;
  animCREATE_DATA *paVar3;
  char *pcVar4;
  int iVar5;
  float local_c;
  float local_8;
  float local_4;
  
  paVar3 = param_1;
  if (param_1 == (animCREATE_DATA *)0x0) {
    if ((*(int *)(this + 0x138) != 0) && (*(int *)(*(int *)(this + 0x138) + 0x8c) != 0)) {
      return;
    }
    *(undefined4 *)(this + 0xe0) = 0xffffffff;
    return;
  }
  this_00 = (m3dMATR *)(param_1 + 0x12);
  m3dMATR::GetScale(this_00,&local_4,&local_8,&local_c);
  m3dMATR::RemoveScale(this_00);
  m3dMATR::Transform((m3dMATR *)(this + 0x60),this_00,0);
  Invalidate(this,0xc4);
  sVar1 = *(short *)(param_1 + 0xc);
  if (-1 < sVar1) {
    iVar2 = *(int *)(this + 0x138);
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar2 + 0x8c);
    }
    if (sVar1 < iVar5) {
      param_1 = (animCREATE_DATA *)
                animSEQ::FrameToTime
                          ((animSEQ *)(*(int *)(iVar2 + 0x90) + sVar1 * 0x88),
                           *(float *)(param_1 + 0xe));
      goto LAB_004c35fd;
    }
  }
  param_1 = (animCREATE_DATA *)0x0;
LAB_004c35fd:
  SetAnimSeq(this,(int)*(short *)(paVar3 + 0xc),(float)param_1);
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(paVar3 + 0x92);
  if ((*(int *)(this + 0x10) != 0) && (iVar2 = *(int *)(*(int *)(this + 0x10) + 0x38), iVar2 != 0))
  {
    m3dMATR::Scale((m3dMATR *)(iVar2 + 0x7c),*(float *)paVar3 * local_4,
                   *(float *)(paVar3 + 4) * local_8,*(float *)(paVar3 + 8) * local_c,0);
  }
  Invalidate(this,0xc4);
  Invalidate(this,0x80);
  if (paVar3[0x52] != (animCREATE_DATA)0x0) {
    apFree(*(void **)(this + 0x18));
    *(undefined4 *)(this + 0x18) = 0;
    if (paVar3 + 0x52 != (animCREATE_DATA *)0x0) {
      pcVar4 = apStrdup((char *)(paVar3 + 0x52));
      *(char **)(this + 0x18) = pcVar4;
    }
  }
  return;
}




/* from: engine:anim.cpp
   addr: 004C36B0 */

void __thiscall animINST::DestroyData(animINST *this)

{
  objOBJ *this_00;
  psSHEET *this_01;
  
  apFree(*(void **)(this + 0x2c));
  AbvTerm(this);
  LODTerm(this);
  this_00 = *(objOBJ **)(this + 0x10);
  if (this_00 != (objOBJ *)0x0) {
    objOBJ::~objOBJ(this_00);
    operator_delete(this_00);
  }
  this_01 = *(psSHEET **)(this + 0x134);
  if (this_01 != (psSHEET *)0x0) {
    psSHEET::Empty(this_01);
    operator_delete(this_01);
  }
  if (*(void **)(this + 0x4c) != (void *)0x0) {
    apFree(*(void **)(this + 0x4c));
  }
  apFree(*(void **)(this + 300));
  if (*(undefined4 **)(this + 0x144) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x144))(1);
  }
  *(undefined4 *)(this + 0x144) = 0;
  apFree(*(void **)(this + 0x18));
  apFree(*(void **)(this + 0x1c));
  apFree(*(void **)(this + 0x20));
  *(undefined4 *)(this + 0x148) = 0;
  return;
}




/* from: engine:anim.cpp
   addr: 004C3770 */

int __thiscall animINST::SetObjInstRef(animINST *this)

{
  int iVar1;
  objOBJ *poVar2;
  bool bVar3;
  objOBJ *poVar4;
  
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 != 0) {
    poVar2 = *(objOBJ **)(iVar1 + 0x38);
    bVar3 = false;
    *(animINST **)(iVar1 + 0xbc) = this;
    for (poVar4 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (poVar4 != poVar2))));
        poVar4 = *(objOBJ **)(poVar4 + 0x30)) {
      _animSetObjInstRef(poVar4,this);
      bVar3 = true;
    }
  }
  return 1;
}




/* from: engine:anim.cpp
   addr: 004C37C0 */

void __thiscall animINST::RotateX(animINST *this,float param_1,int param_2)

{
  m3dMATR::RotateX((m3dMATR *)(this + 0x60),param_1,param_2);
  Invalidate(this,0xc4);
  return;
}




/* from: engine:anim.cpp
   addr: 004C37F0 */

void __thiscall animINST::RotateY(animINST *this,float param_1,int param_2)

{
  m3dMATR::RotateY((m3dMATR *)(this + 0x60),param_1,param_2);
  Invalidate(this,0xc4);
  return;
}




/* from: engine:anim.cpp
   addr: 004C3820 */

void __thiscall
animINST::Translate(animINST *this,float param_1,float param_2,float param_3,int param_4)

{
  m3dMATR::Translate((m3dMATR *)(this + 0x60),param_1,param_2,param_3,param_4);
  Invalidate(this,0xc4);
  return;
}




/* from: engine:anim.cpp
   addr: 004C3850 */

void __thiscall animINST::Translate(animINST *this,m3dV *param_1,int param_2)

{
  m3dMATR::Translate((m3dMATR *)(this + 0x60),param_1,param_2);
  Invalidate(this,0xc4);
  return;
}




/* from: engine:anim.cpp
   addr: 004C3880 */

void __thiscall
animINST::Scale(animINST *this,float param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  
  if ((*(int *)(this + 0x10) != 0) && (iVar1 = *(int *)(*(int *)(this + 0x10) + 0x38), iVar1 != 0))
  {
    m3dMATR::Scale((m3dMATR *)(iVar1 + 0x7c),param_1,param_2,param_3,param_4);
  }
  Invalidate(this,0xc4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim.cpp
   addr: 004C38C0 */

float __thiscall animINST::GetScale(animINST *this)

{
  int iVar1;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(int *)(this + 0x10) != 0) && (iVar1 = *(int *)(*(int *)(this + 0x10) + 0x38), iVar1 != 0))
  {
    m3dMATR::GetScale((m3dMATR *)(iVar1 + 0x7c),&local_c,&local_8,&local_4);
    return (local_c + local_8 + local_4) * ___real_3eaaaaab;
  }
  return (___real_3f800000 + 2.0) * ___real_3eaaaaab;
}




/* from: engine:anim.cpp
   addr: 004C3930 */

void __thiscall animINST::Transform(animINST *this,m3dMATR *param_1,int param_2)

{
  m3dMATR::Transform((m3dMATR *)(this + 0x60),param_1,param_2);
  Invalidate(this,0xc4);
  return;
}




/* from: engine:anim.cpp
   addr: 004C3960 */

void __thiscall animINST::SetPos(animINST *this,m3dV *param_1)

{
  m3dMATR::Translate((m3dMATR *)(this + 0x60),param_1,0);
  Invalidate(this,0xc4);
  return;
}




/* from: engine:anim.cpp
   addr: 004C3990 */

void __thiscall animINST::SetDir_XZ(animINST *this,m3dV *param_1)

{
  m3dV local_c [12];
  
  m3dMATR::GetOrigin((m3dMATR *)(this + 0x60),local_c);
  m3dMATR::MakeLCS2WCS_VZ((m3dMATR *)(this + 0x60),local_c,param_1);
  Invalidate(this,0xc4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* from: engine:anim.cpp
   addr: 004C39D0 */

void __thiscall animINST::SetDir_XZ_UsePivot(animINST *this,m3dV *param_1,m3dV *param_2)

{
  m3dMATR *this_00;
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [7];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  animINST *local_c;
  float *local_8;
  
  this_00 = (m3dMATR *)(this + 0x60);
  local_c = this;
  m3dMATR::GetOrigin(this_00,(m3dV *)&local_18);
  local_3c[6] = *(float *)param_2 - local_18;
  local_20 = *(float *)(param_2 + 4) - local_14;
  local_1c = *(float *)(param_2 + 8) - local_10;
  m3dMATR::GetAxisX(this_00,(m3dV *)&local_48);
  m3dMATR::GetAxisY(this_00,(m3dV *)&local_54);
  m3dMATR::GetAxisZ(this_00,(m3dV *)&local_60);
  local_3c[0] = local_3c[6] * local_48 + local_44 * local_20 + local_40 * local_1c;
  local_3c[1] = local_54 * local_3c[6] + local_50 * local_20 + local_4c * local_1c;
  local_3c[2] = local_60 * local_3c[6] + local_5c * local_20 + local_58 * local_1c;
  m3dMATR::MakeLCS2WCS_VZ(this_00,(m3dV *)&local_18,param_1);
  Invalidate(this,0xc4);
  local_8 = local_3c;
  if (m3dSimdType != 0) {
    if (m3dSimdType == 1) {
      FastExitMediaState();
      uVar8 = PackedFloatingMUL(CONCAT44(local_3c[0],local_3c[0]),*(undefined8 *)this_00);
      uVar9 = PackedFloatingMUL(CONCAT44(local_3c[1],local_3c[1]),*(undefined8 *)(this + 0x70));
      uVar10 = PackedFloatingMUL(CONCAT44(local_3c[2],local_3c[2]),*(undefined8 *)(this + 0x80));
      uVar8 = PackedFloatingADD(uVar8,*(undefined8 *)(this + 0x90));
      uVar11 = PackedFloatingMUL(CONCAT44(local_3c[0],local_3c[0]),*(undefined8 *)(this + 0x68));
      uVar9 = PackedFloatingADD(uVar9,uVar10);
      uVar12 = PackedFloatingMUL(CONCAT44(local_3c[1],local_3c[1]),*(undefined8 *)(this + 0x78));
      uVar13 = PackedFloatingMUL(CONCAT44(local_3c[2],local_3c[2]),*(undefined8 *)(this + 0x88));
      uVar10 = PackedFloatingADD(uVar11,*(undefined8 *)(this + 0x98));
      uVar8 = PackedFloatingADD(uVar8,uVar9);
      uVar9 = PackedFloatingADD(uVar12,uVar13);
      local_3c[4] = (float)((ulonglong)uVar8 >> 0x20);
      local_3c[3] = (float)uVar8;
      uVar8 = PackedFloatingADD(uVar10,uVar9);
      local_3c[5] = (float)uVar8;
      FastExitMediaState();
    }
    else {
      iVar7 = 0;
      pfVar5 = local_3c + 3;
      do {
        iVar4 = 0;
        *pfVar5 = 0.0;
        pfVar6 = (float *)(((int)this_00 - (int)(local_3c + 3)) + (int)pfVar5);
        fVar3 = ___real_00000000;
        do {
          pfVar1 = local_3c + iVar4;
          fVar2 = *pfVar6;
          iVar4 = iVar4 + 1;
          pfVar6 = pfVar6 + 4;
          fVar3 = *pfVar1 * fVar2 + fVar3;
        } while (iVar4 < 3);
        *pfVar5 = fVar3;
        iVar4 = iVar7 + iVar4 * 4;
        iVar7 = iVar7 + 1;
        *pfVar5 = fVar3 + *(float *)(this_00 + iVar4 * 4);
        pfVar5 = pfVar5 + 1;
        this = local_c;
      } while (iVar7 < 3);
    }
  }
  local_1c = local_3c[5] - *(float *)(param_2 + 8);
  local_18 = local_18 - (local_3c[3] - *(float *)param_2);
  local_14 = local_14 - (local_3c[4] - *(float *)(param_2 + 4));
  local_10 = local_10 - local_1c;
  m3dMATR::Translate(this_00,(m3dV *)&local_18,0);
  Invalidate(this,0xc4);
  return;
}




/* from: engine:anim.cpp
   addr: 004C3C60 */

void __thiscall animINST::SetPosDir_XZ(animINST *this,m3dV *param_1,m3dV *param_2)

{
  m3dMATR::MakeLCS2WCS_VZ((m3dMATR *)(this + 0x60),param_1,param_2);
  Invalidate(this,0xc4);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim.cpp
   addr: 004C3CC0 */

void __thiscall animINST::GetDirRight(animINST *this,m3dV *param_1)

{
  m3dMATR::GetAxisX((m3dMATR *)(this + 0x60),param_1);
  *(float *)param_1 = *(float *)param_1 * ___real_bf800000;
  *(float *)(param_1 + 4) = *(float *)(param_1 + 4) * ___real_bf800000;
  *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * ___real_bf800000;
  return;
}




/* from: engine:anim.cpp
   addr: 004C3D00 */

void __thiscall animINST::GetMatrL2W(animINST *this,m3dMATR *param_1)

{
  int iVar1;
  m3dMATR *pmVar2;
  m3dMATR *pmVar3;
  
  pmVar2 = (m3dMATR *)(this + 0x60);
  pmVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pmVar3 = *(undefined4 *)pmVar2;
    pmVar2 = pmVar2 + 4;
    pmVar3 = pmVar3 + 4;
  }
  if ((*(int *)(this + 0x10) != 0) && (iVar1 = *(int *)(*(int *)(this + 0x10) + 0x38), iVar1 != 0))
  {
    m3dMultiplyMatr((m3dMATR *)(iVar1 + 0x7c),(m3dMATR *)(this + 0x60),param_1);
  }
  return;
}




/* from: engine:anim.cpp
   addr: 004C3D40 */

void __thiscall animINST::GetCenter(animINST *this,m3dV *param_1)

{
  objOBJ *poVar1;
  
  poVar1 = *(objOBJ **)(this + 0xec);
  if (poVar1 == (objOBJ *)0x0) {
    Validate(this,0x100);
                    /* WARNING: Could not recover jumptable at 0x004c3d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(*(int *)(*(int *)(this + 0x100) + 8) + 4) + 0x24))();
    return;
  }
  if (poVar1 == *(objOBJ **)(this + 0x10)) {
    m3dMATR::GetOrigin((m3dMATR *)(this + 0x60),param_1);
    return;
  }
  objValidateLTM(poVar1);
  objOBJ::GetOrigin(*(objOBJ **)(this + 0xec),param_1);
  return;
}




/* from: engine:anim.cpp
   addr: 004C3DA0 */

void __thiscall animINST::GetBBox(animINST *this,m3dBOX *param_1)

{
  if ((*(uint *)(this + 0xc) & 0x40000) != 0) {
    Validate(this,0x40000);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x108);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x10c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x110);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x114);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x118);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x11c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x120);
  return;
}




/* from: engine:anim.cpp
   addr: 004C3E00 */

void __thiscall animINST::ValidateBBox(animINST *this)

{
  m3dOBB *this_00;
  int iVar1;
  m3dV local_60 [96];
  
  if (*(int *)(this + 0x100) == 0) {
    m3dMATR::GetOrigin((m3dMATR *)(this + 0x60),local_60);
    m3dBOX::CalcStart((m3dBOX *)(this + 0x104));
    m3dBOX::CalcUpdate((m3dBOX *)(this + 0x104),local_60);
  }
  else {
    this_00 = *(m3dOBB **)(*(int *)(*(int *)(this + 0x100) + 8) + 4);
    iVar1 = *(int *)(this_00 + 4);
    if (iVar1 == 1) {
      *(undefined4 *)(this + 0x108) = *(undefined4 *)(this_00 + 4);
      *(undefined4 *)(this + 0x10c) = *(undefined4 *)(this_00 + 8);
      *(undefined4 *)(this + 0x110) = *(undefined4 *)(this_00 + 0xc);
      *(undefined4 *)(this + 0x114) = *(undefined4 *)(this_00 + 0x10);
      *(undefined4 *)(this + 0x118) = *(undefined4 *)(this_00 + 0x14);
      *(undefined4 *)(this + 0x11c) = *(undefined4 *)(this_00 + 0x18);
      *(undefined4 *)(this + 0x120) = *(undefined4 *)(this_00 + 0x1c);
      return;
    }
    if (iVar1 == 2) {
      m3dPRISM::GetVertices((m3dPRISM *)this_00,local_60);
      m3dBOX::CalcStart((m3dBOX *)(this + 0x104));
      m3dBOX::CalcUpdate((m3dBOX *)(this + 0x104),local_60,8);
      return;
    }
    if (iVar1 == 4) {
      m3dOBB::GetVertices(this_00,local_60);
      m3dBOX::CalcStart((m3dBOX *)(this + 0x104));
      m3dBOX::CalcUpdate((m3dBOX *)(this + 0x104),local_60,8);
      return;
    }
  }
  return;
}




/* from: engine:anim.cpp
   addr: 004C3EF0 */

int __thiscall animINST::CDTInit(animINST *this)

{
  psSECT *ppVar1;
  psSHEET *ppVar2;
  int iVar3;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  char local_40 [64];
  
  ppVar2 = *(psSHEET **)(this + 0x134);
  if ((ppVar2 != (psSHEET *)0x0) ||
     (ppVar2 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), ppVar2 != (psSHEET *)0x0)) {
    ppVar1 = psSHEET::FindSect(ppVar2,s_COLL);
    if (ppVar1 != (psSECT *)0x0) {
      ppVar2 = *(psSHEET **)(this + 0x134);
      local_58 = 1.0;
      if ((ppVar2 != (psSHEET *)0x0) ||
         (ppVar2 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), ppVar2 != (psSHEET *)0x0)) {
        psSHEET::GetFloat(ppVar2,s_COLL,s_gridSize,&local_58);
      }
      local_54 = local_58;
      ppVar2 = *(psSHEET **)(this + 0x134);
      local_50 = local_58;
      local_4c = 10;
      if ((ppVar2 != (psSHEET *)0x0) ||
         (ppVar2 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), ppVar2 != (psSHEET *)0x0)) {
        psSHEET::GetInt(ppVar2,s_COLL,s_maxNVox,&local_4c);
      }
      ppVar2 = *(psSHEET **)(this + 0x134);
      local_40[0] = '\0';
      local_48 = local_4c;
      local_44 = local_4c;
      if ((ppVar2 != (psSHEET *)0x0) ||
         (ppVar2 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), ppVar2 != (psSHEET *)0x0)) {
        psSHEET::GetStr(ppVar2,s_COLL,s_seqName,local_40,0x40);
      }
      ppVar2 = *(psSHEET **)(this + 0x134);
      local_5c = 0.0;
      if ((ppVar2 != (psSHEET *)0x0) ||
         (ppVar2 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), ppVar2 != (psSHEET *)0x0)) {
        psSHEET::GetFloat(ppVar2,s_COLL,s_time,&local_5c);
      }
      iVar3 = CDTInit(this,(m3dV *)&local_58,(m3dVINT *)&local_4c,local_40,local_5c);
      return iVar3;
    }
  }
  return 1;
}




/* from: engine:anim.cpp
   addr: 004C4040 */

int __thiscall
animINST::CDTInit(animINST *this,m3dV *param_1,m3dVINT *param_2,char *param_3,float param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  cdtCOLL *this_00;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  
  if (param_3 != (char *)0x0) {
    iVar5 = -1;
    pcVar8 = param_3;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      iVar9 = 0;
      iVar5 = *(int *)(*(int *)(this + 0x138) + 0x8c);
      if (0 < iVar5) {
        pbVar3 = *(byte **)(*(int *)(this + 0x138) + 0x90);
        pbVar7 = (byte *)param_3;
        pbVar6 = pbVar3;
LAB_004c407d:
        do {
          bVar2 = *pbVar3;
          bVar10 = bVar2 < *pbVar7;
          if (bVar2 == *pbVar7) {
            if (bVar2 != 0) {
              bVar2 = pbVar3[1];
              bVar10 = bVar2 < pbVar7[1];
              if (bVar2 != pbVar7[1]) goto LAB_004c40a1;
              pbVar3 = pbVar3 + 2;
              pbVar7 = pbVar7 + 2;
              if (bVar2 != 0) goto LAB_004c407d;
            }
            iVar4 = 0;
          }
          else {
LAB_004c40a1:
            iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          }
          if (iVar4 == 0) {
            if (iVar9 != -1) {
              SetAnimSeq(this,iVar9,param_4);
            }
            break;
          }
          iVar9 = iVar9 + 1;
          pbVar3 = pbVar6 + 0x88;
          pbVar7 = (byte *)param_3;
          pbVar6 = pbVar3;
          if (iVar5 <= iVar9) break;
        } while( true );
      }
    }
  }
  Validate(this,7);
  if (*(undefined4 **)(this + 0x144) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x144))(1);
  }
  this_00 = (cdtCOLL *)operator_new(0x6c);
  if (this_00 == (cdtCOLL *)0x0) {
    this_00 = (cdtCOLL *)0x0;
  }
  else {
    cdtCOLL::cdtCOLL(this_00);
    *(undefined ***)this_00 = &cdtCOLL_INST::_vftable_;
  }
  *(cdtCOLL **)(this + 0x144) = this_00;
  if (this_00 == (cdtCOLL *)0x0) {
    return 0;
  }
  *(animINST **)(this_00 + 100) = this;
  iVar5 = cdtCOLL::CalcData2(*(cdtCOLL **)(this + 0x144),*(float *)param_1,*(float *)(param_1 + 4),
                             *(float *)(param_1 + 8),*(int *)param_2,*(int *)(param_2 + 4),
                             *(int *)(param_2 + 8),(m3dBOX *)0x0);
  if (iVar5 == 0) {
    return 0;
  }
  if (param_3 != (char *)0x0) {
    iVar5 = -1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      cdtCOLL_INST::SetCDTFrame(*(cdtCOLL_INST **)(this + 0x144),*(float *)(this + 0xe4));
    }
  }
  return 1;
}




/* from: engine:anim.cpp
   addr: 004C4190
   addr: 004C4190
   addr: 004C4190
   addr: 004C4190
   addr: 004C4190
   addr: 004C4190 */

void * __thiscall cdtCOLL_SCN::_scalar_deleting_destructor_(cdtCOLL_SCN *this,uint param_1)

{
  *(undefined ***)this = &cdtCOLL_OBJ::_vftable_;
  cdtCOLL::~cdtCOLL((cdtCOLL *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:anim.cpp
   addr: 004C41C0 */

int __thiscall
animINST::GetStr(animINST *this,char *param_1,char *param_2,char *param_3,int param_4)

{
  psSHEET *this_00;
  int iVar1;
  
  this_00 = *(psSHEET **)(this + 0x134);
  if ((this_00 != (psSHEET *)0x0) ||
     (this_00 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), this_00 != (psSHEET *)0x0)) {
    iVar1 = psSHEET::GetStr(this_00,param_1,param_2,param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:anim.cpp
   addr: 004C4210 */

int __thiscall animINST::GetInt(animINST *this,char *param_1,char *param_2,int *param_3)

{
  psSHEET *this_00;
  int iVar1;
  
  this_00 = *(psSHEET **)(this + 0x134);
  if ((this_00 != (psSHEET *)0x0) ||
     (this_00 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), this_00 != (psSHEET *)0x0)) {
    iVar1 = psSHEET::GetInt(this_00,param_1,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:anim.cpp
   addr: 004C4260 */

int __thiscall animINST::GetBool(animINST *this,char *param_1,char *param_2,int *param_3)

{
  psSHEET *this_00;
  int iVar1;
  
  this_00 = *(psSHEET **)(this + 0x134);
  if ((this_00 != (psSHEET *)0x0) ||
     (this_00 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), this_00 != (psSHEET *)0x0)) {
    iVar1 = psSHEET::GetBool(this_00,param_1,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:anim.cpp
   addr: 004C42B0 */

int __thiscall animINST::GetFloat(animINST *this,char *param_1,char *param_2,float *param_3)

{
  psSHEET *this_00;
  int iVar1;
  
  this_00 = *(psSHEET **)(this + 0x134);
  if ((this_00 != (psSHEET *)0x0) ||
     (this_00 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), this_00 != (psSHEET *)0x0)) {
    iVar1 = psSHEET::GetFloat(this_00,param_1,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:anim.cpp
   addr: 004C4300 */

int __thiscall animINST::GetColor(animINST *this,char *param_1,char *param_2,m3dCOLOR *param_3)

{
  psSHEET *this_00;
  int iVar1;
  
  this_00 = *(psSHEET **)(this + 0x134);
  if ((this_00 != (psSHEET *)0x0) ||
     (this_00 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), this_00 != (psSHEET *)0x0)) {
    iVar1 = psSHEET::GetColor(this_00,param_1,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:anim.cpp
   addr: 004C4350 */

int __thiscall animINST::GetHEX(animINST *this,char *param_1,char *param_2,ulong *param_3)

{
  psSHEET *this_00;
  int iVar1;
  
  this_00 = *(psSHEET **)(this + 0x134);
  if ((this_00 != (psSHEET *)0x0) ||
     (this_00 = *(psSHEET **)(*(int *)(this + 0x138) + 0xc4), this_00 != (psSHEET *)0x0)) {
    iVar1 = psSHEET::GetHEX(this_00,param_1,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:anim.cpp
   addr: 004C43A0 */

m3dSPHERE * __fastcall animGetObjBSphere(objOBJ *param_1)

{
  animINST *this;
  
  this = *(animINST **)(param_1 + 0xbc);
  if (this == (animINST *)0x0) {
    return (m3dSPHERE *)(*(int *)(param_1 + 0x28) + 0x28);
  }
  if ((-1 < *(short *)(param_1 + 0x1e)) && ((int)*(short *)(param_1 + 0x1e) < *(int *)(this + 0xf4))
     ) {
    animINST::Validate(this,0x20);
    return (m3dSPHERE *)(*(int *)(this + 0xf8) + 0xc + *(short *)(param_1 + 0x1e) * 0x24);
  }
  animINST::Validate(this,0x100);
  return (m3dSPHERE *)(*(int *)(this + 0x100) + 0xc);
}




/* from: engine:anim.cpp
   addr: 004C4410 */

void __thiscall
animCTRL_3D_FOLLOW::SetFollow(animCTRL_3D_FOLLOW *this,animINST *param_1,objOBJ *param_2)

{
  if ((param_2 != (objOBJ *)0x0) && (param_1 == (animINST *)0x0)) {
    param_1 = *(animINST **)(param_2 + 0xbc);
  }
  *(animINST **)(this + 0x24) = param_1;
  *(objOBJ **)(this + 0x28) = param_2;
  return;
}




/* from: engine:anim.cpp
   addr: 004C4430 */

int __thiscall animCTRL_3D_FOLLOW::IsFollow(animCTRL_3D_FOLLOW *this,animINST *param_1)

{
  if ((param_1 != (animINST *)0x0) && (param_1 == *(animINST **)(this + 0x24))) {
    return 1;
  }
  return 0;
}




/* from: engine:anim.cpp
   addr: 004C4450 */

int __thiscall animCTRL_3D_FOLLOW::IsFollow(animCTRL_3D_FOLLOW *this,objOBJ *param_1)

{
  if ((param_1 != (objOBJ *)0x0) && (param_1 == *(objOBJ **)(this + 0x28))) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim.cpp
   addr: 004C4470 */

void __thiscall animCTRL_3D_FOLLOW::GetValue(animCTRL_3D_FOLLOW *this,m3dV *param_1)

{
  animINST *this_00;
  
  this_00 = *(animINST **)(this + 0x24);
  if (this_00 == (animINST *)0x0) {
    if (*(int *)(this + 0x28) == 0) {
      *(undefined4 *)param_1 = _m3dVZero;
      *(undefined4 *)(param_1 + 4) = DAT_00963740;
      *(undefined4 *)(param_1 + 8) = DAT_00963744;
      return;
    }
  }
  else if (*(int *)(this + 0x28) == 0) {
    m3dMATR::GetOrigin((m3dMATR *)(this_00 + 0x60),param_1);
    return;
  }
  if (this_00 != (animINST *)0x0) {
    animINST::Validate(this_00,4);
  }
  objOBJ::GetOrigin(*(objOBJ **)(this + 0x28),param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:anim.cpp
   addr: 004C44D0 */

int __fastcall animAllocNormalsLCS(animTPL *param_1,objOBJ *param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  float local_10;
  float local_c;
  float local_8;
  animTPL *local_4;
  
  if (param_2 == (objOBJ *)0x0) {
    return 1;
  }
  poVar1 = *(objOBJ **)(param_2 + 0x38);
  bVar2 = false;
  if (*(short *)(param_2 + 0x22) != -1) {
    return 1;
  }
  if ((-1 < *(short *)(param_2 + 0x20)) &&
     (*(int *)(*(short *)(param_2 + 0x20) * 0x40 + 0x38 + *(int *)(param_1 + 0xa0)) != 0)) {
    return 1;
  }
  local_4 = param_1;
  m3dMATR::GetScale((m3dMATR *)(param_2 + 0x7c),&local_10,&local_c,&local_8);
  if (___real_3c23d70a < ABS(local_10 - local_c)) {
    return 1;
  }
  if (ABS(local_10 - local_8) <= ___real_3c23d70a) {
    if (___real_3c23d70a < ABS(local_c - local_8)) {
      return 1;
    }
    if (local_10 < ___real_00000000) {
      return 1;
    }
    poVar4 = poVar1;
    if ((0 < *(int *)(param_2 + 0x10)) && (*(short *)(param_2 + 0x22) == -1)) {
      iVar3 = objOBJ::AllocNormalListLCS(param_2,*(int *)(param_2 + 0x10));
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = objOBJ::AllocVertNormalListLCS(param_2,*(int *)(param_2 + 0x14));
      if (iVar3 == 0) {
        return 0;
      }
      objOBJ::CalcFaceNormalsLCS(param_2);
      objOBJ::CalcVertNormalsLCS(param_2);
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar4 != poVar1))));
        poVar4 = *(objOBJ **)(poVar4 + 0x30)) {
      animAllocNormalsLCS(local_4,poVar4);
      bVar2 = true;
    }
    return 0;
  }
  return 1;
}




/* from: engine:anim.cpp
   addr: 004C4630 */

int __fastcall _animSetObjInstRef(objOBJ *param_1,animINST *param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  objOBJ *poVar3;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    *(animINST **)(param_1 + 0xbc) = param_2;
    for (poVar3 = poVar1; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar3 != poVar1))));
        poVar3 = *(objOBJ **)(poVar3 + 0x30)) {
      _animSetObjInstRef(poVar3,param_2);
      bVar2 = true;
    }
  }
  return 1;
}




/* from: engine:anim.cpp
   addr: 004C4670 */

void __thiscall animOBJ_ANIM::~animOBJ_ANIM(animOBJ_ANIM *this)

{
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))(1);
  }
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))(1);
  }
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))(1);
  }
  if (*(int **)(this + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x3c) + 4))(1);
  }
  return;
}

