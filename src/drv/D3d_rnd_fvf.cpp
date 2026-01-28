
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:D3d_rnd_fvf.cpp
   addr: 004B9AB0 */

int __thiscall d3dFVF_DESCR::IsEqualVert(d3dFVF_DESCR *this,void *param_1,void *param_2)

{
  int iVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  d3dFVF_DESCR *pdVar5;
  
  pvVar3 = param_1;
  fVar2 = _DAT_005db838 * ___real_42c80000;
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  iVar4 = 0;
  param_1 = (void *)(uint)(ABS(*param_1 - *param_2) < fVar2);
  if ((((float)(int)param_1 == ___real_00000000) ||
      (param_1 = (void *)(uint)(ABS(*(float *)((int)pvVar3 + 4) - *(float *)((int)param_2 + 4)) <
                               fVar2), (float)(int)param_1 == ___real_00000000)) ||
     (param_1 = (void *)(uint)(ABS(*(float *)((int)pvVar3 + 8) - *(float *)((int)param_2 + 8)) <
                              fVar2), (float)(int)param_1 == ___real_00000000)) {
    return 0;
  }
  if ((((byte)*this & 0x40) != 0) &&
     (*(int *)(*(int *)(this + 8) + (int)pvVar3) != *(int *)(*(int *)(this + 8) + (int)param_2))) {
    return 0;
  }
  if (0 < *(int *)(this + 0x24)) {
    pdVar5 = this + 0x14;
    do {
      iVar1 = *(int *)pdVar5;
      param_1 = (void *)(uint)(ABS(*(float *)(iVar1 + (int)pvVar3) -
                                   *(float *)(iVar1 + (int)param_2)) < fVar2);
      if ((float)(int)param_1 == ___real_00000000) {
        return 0;
      }
      param_1 = (void *)(uint)(ABS(*(float *)(iVar1 + 4 + (int)pvVar3) -
                                   *(float *)(iVar1 + 4 + (int)param_2)) < fVar2);
      if ((float)(int)param_1 == ___real_00000000) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      pdVar5 = pdVar5 + 4;
    } while (iVar4 < *(int *)(this + 0x24));
  }
  return 1;
}




/* from: drv:D3d_rnd_fvf.cpp
   addr: 004B9C70 */

void __thiscall d3dFVF_DESCR::Init(d3dFVF_DESCR *this,objOBJ *param_1,rendCFG *param_2)

{
  uint uVar1;
  rendMTL *prVar2;
  uint uVar3;
  
  if (param_1 == (objOBJ *)0x0) {
    Init(this,0x342);
    return;
  }
  *(undefined4 *)this = 2;
  if (((byte)param_2[0xb8] & 0x10) != 0) {
    *(undefined4 *)this = 0x42;
  }
  if ((*(uint *)(param_2 + 0xb8) & 0x800) != 0) {
    *(uint *)this = *(uint *)this | 0x10;
  }
  prVar2 = rendCFG::FindMtlRendMtl(param_2,4);
  if (prVar2 == (rendMTL *)0x0) {
    prVar2 = rendCFG::FindMtlRendMtl(param_2,6);
    if (prVar2 == (rendMTL *)0x0) goto LAB_004b9cd6;
  }
  *(uint *)this = *(uint *)this | 0xc0;
LAB_004b9cd6:
  prVar2 = rendCFG::FindMtlRendMtl(param_2,5);
  if (prVar2 != (rendMTL *)0x0) {
    *(uint *)this = *(uint *)this | 0x80;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x28) + 0x66) & 0x1f0) == 0) {
    uVar3 = *(uint *)this;
    *(uint *)this = uVar3 | 0x400;
    Init(this,uVar3 | 0x400);
    return;
  }
  uVar3 = objOBJ::CalcMaxTCHWIndID(param_1);
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      uVar3 = 0x100;
    }
    else if (uVar3 == 2) {
      uVar3 = 0x200;
    }
    else if (uVar3 == 3) {
      uVar3 = 0x300;
    }
    else {
      uVar3 = (uVar3 != 4) - 1 & 0x400;
    }
  }
  uVar1 = *(uint *)this;
  *(uint *)this = uVar1 | uVar3;
  Init(this,uVar1 | uVar3);
  return;
}




/* from: drv:D3d_rnd_fvf.cpp
   addr: 004B9D70 */

void __thiscall d3dFVF_DESCR::Init(d3dFVF_DESCR *this,int param_1)

{
  uint uVar1;
  d3dFVF_DESCR *pdVar2;
  int iVar3;
  int iVar4;
  
  *(int *)this = param_1;
  if ((param_1 & 2U) == 0) {
    *(undefined4 *)(this + 4) = 0x10;
  }
  else {
    *(undefined4 *)(this + 4) = 0xc;
  }
  if ((param_1 & 0x10U) != 0) {
    *(int *)(this + 0x10) = *(int *)(this + 4);
    *(int *)(this + 4) = *(int *)(this + 4) + 0xc;
  }
  if ((param_1 & 0x40U) != 0) {
    *(int *)(this + 8) = *(int *)(this + 4);
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
  }
  if ((char)param_1 < '\0') {
    *(int *)(this + 0xc) = *(int *)(this + 4);
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
  }
  iVar3 = *(int *)(this + 4);
  uVar1 = param_1 & 0xf00;
  iVar4 = 0;
  if (uVar1 == 0x400) {
    *(undefined4 *)(this + 0x24) = 4;
  }
  else if (uVar1 == 0x300) {
    *(undefined4 *)(this + 0x24) = 3;
  }
  else if (uVar1 == 0x200) {
    *(undefined4 *)(this + 0x24) = 2;
  }
  else if (uVar1 == 0x100) {
    *(undefined4 *)(this + 0x24) = 1;
  }
  else {
    *(undefined4 *)(this + 0x24) = 0;
  }
  *(int *)(this + 4) = iVar3 + *(int *)(this + 0x24) * 8;
  if (0 < *(int *)(this + 0x24)) {
    pdVar2 = this + 0x14;
    do {
      *(int *)pdVar2 = iVar3;
      iVar4 = iVar4 + 1;
      pdVar2 = pdVar2 + 4;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(this + 0x24));
  }
  return;
}

