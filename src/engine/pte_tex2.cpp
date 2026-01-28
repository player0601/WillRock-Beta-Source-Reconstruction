
/* from: engine:pte_tex2.cpp
   addr: 004D70E0 */

pteTEX2 * __thiscall pteTEX2::pteTEX2(pteTEX2 *this)

{
  pteSHADER::pteSHADER((pteSHADER *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x8c) = 1;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  return this;
}




/* from: engine:pte_tex2.cpp
   addr: 004D7130
   addr: 004D7130 */

void * __thiscall pteTEX2::_vector_deleting_destructor_(pteTEX2 *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(undefined4 **)(this + 0x9c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(this + 0x9c))(1);
  }
  pteSHADER::~pteSHADER((pteSHADER *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: engine:pte_tex2.cpp
   addr: 004D7170 */

void __thiscall pteTEX2::Init(pteTEX2 *this)

{
  objOBJ *this_00;
  
  pteSHADER::Init((pteSHADER *)this);
  *(undefined4 *)(this + 0x8c) = 1;
  (**(code **)(*(int *)this + 0x1c))(0xbb);
  SetBlendCoeff(this,0.0);
  this_00 = *(objOBJ **)(this + 100);
  if (this_00 == (objOBJ *)0x0) {
    this_00 = *(objOBJ **)(*(int *)(this + 0x60) + 0x10);
  }
  objOBJ::UnshareFaceSplit(this_00);
  return;
}




/* from: engine:pte_tex2.cpp
   addr: 004D71B0 */

void __thiscall pteTEX2::AddTexReplace(pteTEX2 *this,txmTEXTURE *param_1,txmTEXTURE *param_2)

{
  int iVar1;
  objOBJ *poVar2;
  pteTEX2 *ppVar3;
  
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x10;
  if (param_1 != (txmTEXTURE *)0x0) {
    if (*(int *)(this + 0x1e0) < 0x28) {
      *(txmTEXTURE **)(this + *(int *)(this + 0x1e0) * 4 + 0xa0) = param_1;
      *(txmTEXTURE **)(this + *(int *)(this + 0x1e0) * 4 + 0x140) = param_2;
      *(int *)(this + 0x1e0) = *(int *)(this + 0x1e0) + 1;
    }
    return;
  }
  poVar2 = *(objOBJ **)(this + 100);
  if (poVar2 == (objOBJ *)0x0) {
    poVar2 = *(objOBJ **)(*(int *)(this + 0x60) + 0x10);
  }
  iVar1 = objMakeTexList(poVar2,0,(txmTEXTURE **)(this + 0xa0),0x28);
  *(int *)(this + 0x1e0) = iVar1;
  iVar1 = 0;
  if (0 < *(int *)(this + 0x1e0)) {
    ppVar3 = this + 0x140;
    do {
      *(txmTEXTURE **)ppVar3 = param_2;
      iVar1 = iVar1 + 1;
      ppVar3 = ppVar3 + 4;
    } while (iVar1 < *(int *)(this + 0x1e0));
  }
  *(undefined4 *)(this + 0x90) = 1;
  return;
}




/* from: engine:pte_tex2.cpp
   addr: 004D7260 */

void __thiscall pteTEX2::AddTexReplace(pteTEX2 *this,char *param_1,char *param_2)

{
  txmTEXTURE *ptVar1;
  txmTEXTURE *ptVar2;
  
  ptVar1 = txmMANAGER::Add(txmManager,param_1,0x100,1);
  if (ptVar1 != (txmTEXTURE *)0x0) {
    ptVar2 = txmMANAGER::Add(txmManager,param_2,0x100,1);
    if (ptVar2 != (txmTEXTURE *)0x0) {
      if (((byte)ptVar1[4] & 0x10) != 0) {
        *(uint *)(ptVar2 + 4) = *(uint *)(ptVar2 + 4) | 0x10;
      }
      if (((byte)ptVar1[4] & 0x20) != 0) {
        *(uint *)(ptVar2 + 4) = *(uint *)(ptVar2 + 4) | 0x20;
      }
      if (((byte)ptVar1[4] & 8) != 0) {
        *(uint *)(ptVar2 + 4) = *(uint *)(ptVar2 + 4) | 8;
      }
      AddTexReplace(this,ptVar1,ptVar2);
    }
  }
  return;
}




/* from: engine:pte_tex2.cpp
   addr: 004D72E0 */

void __thiscall pteTEX2::SetupTexList(pteTEX2 *this,char **param_1,int param_2,char *param_3)

{
  int iVar1;
  char local_40 [64];
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      sprintf(local_40,s__s_s,param_1[iVar1],param_3);
      AddTexReplace(this,param_1[iVar1],local_40);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_tex2.cpp
   addr: 004D7340 */

void __thiscall pteTEX2::SetBlendCoeff(pteTEX2 *this,float param_1)

{
  bool bVar1;
  float fVar2;
  objOBJ *poVar3;
  int iVar4;
  undefined4 uVar5;
  pteTEX2 *ppVar6;
  txmTEXTURE *ptVar7;
  undefined4 uVar8;
  
  fVar2 = param_1 * ___real_437f0000;
  *(float *)(this + 0x94) = param_1;
  bVar1 = ___real_3f800000 <= fVar2;
  *(undefined4 *)(this + 0x6c) = 0x437f0000;
  uVar5 = 1;
  *(undefined4 *)(this + 0x70) = 0x437f0000;
  *(undefined4 *)(this + 0x74) = 0x437f0000;
  *(float *)(this + 0x78) = fVar2;
  if (bVar1) {
    if (___real_437e0000 < fVar2) {
      (**(code **)(*(int *)this + 4))(0);
      uVar5 = 0;
      if ((*(int *)(this + 0x8c) != 0) && (iVar4 = 0, 0 < *(int *)(this + 0x1e0))) {
        ppVar6 = this + 0xa0;
        do {
          poVar3 = *(objOBJ **)(this + 100);
          if (poVar3 == (objOBJ *)0x0) {
            ptVar7 = *(txmTEXTURE **)ppVar6;
            poVar3 = *(objOBJ **)(*(int *)(this + 0x60) + 0x10);
          }
          else {
            ptVar7 = *(txmTEXTURE **)ppVar6;
          }
          objOBJ::ReplaceTex(poVar3,ptVar7,*(txmTEXTURE **)(ppVar6 + 0xa0));
          iVar4 = iVar4 + 1;
          ppVar6 = ppVar6 + 4;
        } while (iVar4 < *(int *)(this + 0x1e0));
      }
      goto LAB_004d748a;
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  (**(code **)(*(int *)this + 4))(uVar8);
  if ((*(int *)(this + 0x8c) == 0) && (iVar4 = 0, 0 < *(int *)(this + 0x1e0))) {
    ppVar6 = this + 0x140;
    do {
      poVar3 = *(objOBJ **)(this + 100);
      if (poVar3 == (objOBJ *)0x0) {
        ptVar7 = *(txmTEXTURE **)ppVar6;
        poVar3 = *(objOBJ **)(*(int *)(this + 0x60) + 0x10);
      }
      else {
        ptVar7 = *(txmTEXTURE **)ppVar6;
      }
      objOBJ::ReplaceTex(poVar3,ptVar7,*(txmTEXTURE **)(ppVar6 + -0xa0));
      iVar4 = iVar4 + 1;
      ppVar6 = ppVar6 + 4;
    } while (iVar4 < *(int *)(this + 0x1e0));
    *(undefined4 *)(this + 0x8c) = 1;
    return;
  }
LAB_004d748a:
  *(undefined4 *)(this + 0x8c) = uVar5;
  return;
}




/* from: engine:pte_tex2.cpp
   addr: 004D74A0 */

void __thiscall pteTEX2::Update(pteTEX2 *this,float param_1)

{
  float unaff_ESI;
  
  if (*(int **)(this + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x9c) + 4))(param_1);
    (**(code **)(**(int **)(this + 0x9c) + 0xc))(&stack0x00000000);
    SetBlendCoeff(this,unaff_ESI);
  }
  return;
}




/* from: engine:pte_tex2.cpp
   addr: 004D74E0
   addr: 004D74E0 */

int __thiscall pteEMAP::IsShadeInst(pteEMAP *this,animINST *param_1)

{
  if ((*(animINST **)(this + 0x60) != (animINST *)0x0) && (param_1 != *(animINST **)(this + 0x60)))
  {
    return 0;
  }
  return 1;
}




/* from: engine:pte_tex2.cpp
   addr: 004D7500 */

int __thiscall pteTEX2::IsShadeObj(pteTEX2 *this,objOBJ *param_1)

{
  if (((byte)*param_1 & 0x20) != 0) {
    return 0;
  }
  if ((param_1 != *(objOBJ **)(this + 100)) &&
     ((*(int *)(param_1 + 0xbc) == 0 || (*(int *)(param_1 + 0xbc) != *(int *)(this + 0x60))))) {
    return 0;
  }
  return 1;
}




/* from: engine:pte_tex2.cpp
   addr: 004D7530 */

txmTEXTURE * __thiscall pteTEX2::GetTex(pteTEX2 *this,int param_1,objOBJ *param_2,int param_3)

{
  txmTEXTURE *ptVar1;
  int iVar2;
  pteTEX2 *ppVar3;
  
  if (*(int *)(this + 0x90) != 0) {
    return *(txmTEXTURE **)(this + 0x140);
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x1e0)) {
    ppVar3 = this + 0xa0;
    do {
      ptVar1 = objOBJ::GetFaceTexRendMtl(param_2,param_3,0);
      if (*(txmTEXTURE **)ppVar3 == ptVar1) {
        return *(txmTEXTURE **)(this + iVar2 * 4 + 0x140);
      }
      iVar2 = iVar2 + 1;
      ppVar3 = ppVar3 + 4;
    } while (iVar2 < *(int *)(this + 0x1e0));
  }
  return *(txmTEXTURE **)(this + 0x68);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_tex2.cpp
   addr: 004D75A0 */

int __thiscall
pteTEX2::ShadeFace(pteTEX2 *this,objOBJ *param_1,int param_2,pteSDR_INFO *param_3,
                  ptePOLY_DATA *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  ptePOLY_DATA *ppVar10;
  ptePOLY_DATA *ppVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int local_24;
  
  iVar16 = *(int *)(param_3 + 4);
  iVar9 = objMTL_CTRL_TBL::FindMtlCtrlID
                    ((objMTL_CTRL_TBL *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 6),0);
  piVar6 = *(int **)(param_1 + 0x28);
  iVar9 = piVar6[6] + iVar9 * 4;
  uVar13 = (uint)*(byte *)(iVar9 + 7);
  uVar12 = (uint)*(byte *)(iVar9 + 6);
  if (*(short *)((int)piVar6 + uVar13 * 2 + 6) == 0) {
    iVar9 = iVar16;
    ppVar10 = param_4;
    if (0 < iVar16) {
      do {
        *(undefined4 *)(ppVar10 + 4) = 0x3f000000;
        *(undefined4 *)(ppVar10 + 8) = 0x3f000000;
        iVar9 = iVar9 + -1;
        ppVar10 = ppVar10 + 8;
      } while (iVar9 != 0);
    }
  }
  else if (**(int **)param_3 == 0) {
    if (0 < iVar16) {
      param_3 = (pteSDR_INFO *)(uVar12 * 6 + 8);
      ppVar10 = param_4 + 4;
      local_24 = iVar16;
      do {
        piVar6 = *(int **)(param_1 + 0x28);
        iVar9 = piVar6[uVar13 + 3];
        uVar5 = *(ushort *)(param_3 + *piVar6 + (uint)*(byte *)(piVar6 + 1) * param_2);
        param_3 = param_3 + 2;
        *(float *)ppVar10 = *(float *)(iVar9 + (uint)uVar5 * 8);
        *(float *)(ppVar10 + 4) = *(float *)(iVar9 + 4 + (uint)uVar5 * 8);
        local_24 = local_24 + -1;
        *(float *)ppVar10 = *(float *)(this + 0x98) * *(float *)ppVar10;
        *(float *)(ppVar10 + 4) = *(float *)(this + 0x98) * *(float *)(ppVar10 + 4);
        ppVar10 = ppVar10 + 8;
      } while (local_24 != 0);
    }
  }
  else {
    iVar17 = piVar6[uVar13 + 3];
    iVar9 = (uint)*(byte *)(piVar6 + 1) * param_2 + uVar12 * 6;
    uVar12 = (uint)*(ushort *)(iVar9 + 8 + *piVar6);
    iVar9 = iVar9 + 8 + *piVar6;
    fVar7 = *(float *)(iVar17 + uVar12 * 8);
    fVar8 = *(float *)(iVar17 + uVar12 * 8 + 4);
    uVar12 = (uint)*(ushort *)(iVar9 + 2);
    fVar1 = *(float *)(iVar17 + uVar12 * 8);
    uVar13 = (uint)*(ushort *)(iVar9 + 4);
    fVar2 = *(float *)(iVar17 + uVar13 * 8);
    fVar3 = *(float *)(iVar17 + uVar12 * 8 + 4);
    fVar4 = *(float *)(iVar17 + uVar13 * 8 + 4);
    if (0 < iVar16) {
      iVar9 = 0xf8;
      iVar17 = iVar16;
      ppVar10 = param_4;
      do {
        ppVar11 = ppVar10 + 8;
        iVar15 = iVar9 + 4;
        iVar17 = iVar17 + -1;
        *(float *)(ppVar10 + 4) =
             (fVar1 - fVar7) * *(float *)(iVar9 + *(int *)param_3) +
             (fVar2 - fVar7) * *(float *)(*(int *)param_3 + 0x1c + iVar15) + fVar7;
        *(float *)ppVar11 =
             (fVar3 - fVar8) * *(float *)(iVar9 + *(int *)param_3) +
             (fVar4 - fVar8) * *(float *)(*(int *)param_3 + 0x1c + iVar15) + fVar8;
        *(float *)(ppVar10 + 4) = *(float *)(this + 0x98) * *(float *)(ppVar10 + 4);
        *(float *)ppVar11 = *(float *)(this + 0x98) * *(float *)ppVar11;
        iVar9 = iVar15;
        ppVar10 = ppVar11;
      } while (iVar17 != 0);
    }
  }
  if (0 < iVar16) {
    uVar12 = ftol();
    iVar9 = ftol();
    uVar13 = ftol();
    uVar14 = ftol();
    ppVar10 = param_4 + 0x44;
    for (; iVar16 != 0; iVar16 = iVar16 + -1) {
      *(uint *)ppVar10 = uVar14 & 0xff | ((uVar12 & 0xff | iVar9 << 8) << 8 | uVar13 & 0xff) << 8;
      ppVar10 = ppVar10 + 4;
    }
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:pte_tex2.cpp
   addr: 004D78A0 */

int __thiscall pteTEX2::ShadeVert(pteTEX2 *this,objOBJ *param_1,int param_2,pteVERT_DATA *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0xc);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(iVar2 + param_2 * 8);
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(iVar2 + 4 + param_2 * 8);
  *(float *)(param_3 + 1) = *(float *)(this + 0x98) * *(float *)(param_3 + 1);
  *(float *)(param_3 + 5) = *(float *)(this + 0x98) * *(float *)(param_3 + 5);
  if (((byte)this[0x7c] & 2) != 0) {
    uVar1 = ftol();
    iVar2 = ftol();
    uVar3 = ftol();
    uVar4 = ftol();
    *(uint *)(param_3 + 9) = ((uVar1 & 0xff | iVar2 << 8) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
    return 1;
  }
  iVar2 = ftol();
  uVar1 = ftol();
  uVar3 = ftol();
  uVar4 = ftol();
  *(uint *)(param_3 + 9) = ((iVar2 << 8 | uVar1 & 0xff) << 8 | uVar3 & 0xff) << 8 | uVar4 & 0xff;
  return 1;
}

