
/* from: engine:Object.cpp
   addr: 004BF1B0 */

int __fastcall objInit(void)

{
  int iVar1;
  
  iVar1 = dsDYN_ARRAY::Init((dsDYN_ARRAY *)&DAT_008b6f68,0xc,100,(void **)0x0,0,0);
  return (uint)(iVar1 != 0);
}




/* from: engine:Object.cpp
   addr: 004BF1E0 */

objOBJ * __thiscall objOBJ::objOBJ(objOBJ *this)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc4) = 1;
  *(undefined ***)(this + 0xc0) = &m3dBOX::_vftable_;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined2 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined2 *)(this + 0x1e) = 0xffff;
  *(undefined2 *)(this + 0x20) = 0xffff;
  *(undefined2 *)(this + 0x22) = 0xffff;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined2 *)(this + 0xec) = 0xffff;
  *(undefined2 *)(this + 0xee) = 0;
  *(objOBJ **)(this + 0x30) = this;
  *(objOBJ **)(this + 0x34) = this;
  m3dMATR::Identity((m3dMATR *)(this + 0x7c));
  m3dMATR::Identity((m3dMATR *)(this + 0x3c));
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  return this;
}




/* from: engine:Object.cpp
   addr: 004BF290 */

void __thiscall objOBJ::~objOBJ(objOBJ *this)

{
  objOBJ *this_00;
  
  this_00 = *(objOBJ **)(this + 0x38);
  while (this_00 != (objOBJ *)0x0) {
    ~objOBJ(this_00);
    operator_delete(this_00);
    this_00 = *(objOBJ **)(this + 0x38);
  }
  Detach(this);
  DestroyData(this);
  *(undefined ***)(this + 0xc0) = &m3dVOL::_vftable_;
  return;
}




/* from: engine:Object.cpp
   addr: 004BF2D0 */

void __thiscall objOBJ::Attach(objOBJ *this,objOBJ *param_1)

{
  *(objOBJ **)(this + 0x2c) = param_1;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(int *)(this + 0x30) = *(int *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x34);
    *(objOBJ **)(*(int *)(*(int *)(param_1 + 0x38) + 0x34) + 0x30) = this;
    *(objOBJ **)(*(int *)(param_1 + 0x38) + 0x34) = this;
  }
  *(objOBJ **)(param_1 + 0x38) = this;
  return;
}




/* from: engine:Object.cpp
   addr: 004BF300 */

void __thiscall objOBJ::Detach(objOBJ *this)

{
  short sVar1;
  int iVar2;
  
  if (*(objOBJ **)(this + 0x34) == this) {
    if (*(int *)(this + 0x2c) != 0) {
      *(undefined4 *)(*(int *)(this + 0x2c) + 0x38) = 0;
    }
  }
  else {
    *(objOBJ **)(*(int *)(this + 0x30) + 0x34) = *(objOBJ **)(this + 0x34);
    *(undefined4 *)(*(int *)(this + 0x34) + 0x30) = *(undefined4 *)(this + 0x30);
    iVar2 = *(int *)(this + 0x2c);
    if ((iVar2 != 0) && (*(objOBJ **)(iVar2 + 0x38) == this)) {
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(this + 0x30);
    }
  }
  iVar2 = *(int *)(this + 0xbc);
  if (iVar2 != 0) {
    sVar1 = *(short *)(this + 0x1c);
    if (-1 < sVar1) {
      if ((int)sVar1 < *(int *)(iVar2 + 0x128)) {
        *(undefined4 *)(*(int *)(iVar2 + 300) + sVar1 * 4) = 0;
      }
    }
    if (*(int *)(this + 0x2c) == 0) {
      *(undefined4 *)(*(int *)(this + 0xbc) + 0x10) = 0;
    }
  }
  *(objOBJ **)(this + 0x34) = this;
  *(objOBJ **)(this + 0x30) = this;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined2 *)(this + 0x1e) = 0xffff;
  *(undefined2 *)(this + 0x20) = 0xffff;
  *(undefined2 *)(this + 0x22) = 0xffff;
  return;
}




/* from: engine:Object.cpp
   addr: 004BF3B0 */

void __thiscall objOBJ::DestroyData(objOBJ *this)

{
  psSHEET *this_00;
  int iVar1;
  
  FreeName(this);
  FreeVertList(this);
  FreeFaceList(this);
  iVar1 = 0;
  do {
    FreeTexCoord(this,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  FreeColorList(this);
  FreeFaceSplit(this);
  if (((byte)this[4] & 0x40) == 0) {
    this_00 = *(psSHEET **)(this + 0xf0);
    if (this_00 != (psSHEET *)0x0) {
      psSHEET::Empty(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0xf0) = 0;
  }
  FreeNormalListLCS(this);
  FreeVertNormalListLCS(this);
  RemoveModifiers(this);
  DestroyUsrData(this);
  FreeNormalList(this);
  FreeVertNormalList(this);
  FreeStateVertList(this);
  FreeStateFaceList(this);
  FreeSplitUnshared(this);
  operator_delete(*(void **)(this + 0xf4));
  *(undefined4 *)(this + 0xf4) = 0;
  FreeGeom(this);
  return;
}




/* from: engine:Object.cpp
   addr: 004BF470 */

objOBJ * __thiscall objOBJ::Duplicate(objOBJ *this,int param_1)

{
  objOBJ *this_00;
  undefined2 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  objOBJ *poVar5;
  undefined4 *puVar6;
  objOBJ *poVar7;
  undefined4 *puVar8;
  int local_4;
  
  this_00 = Make();
  if (this_00 == (objOBJ *)0x0) {
    return (objOBJ *)0x0;
  }
  *(undefined4 *)this_00 = *(undefined4 *)this;
  *(undefined4 *)(this_00 + 4) = *(undefined4 *)(this + 4);
  *(undefined4 *)(this_00 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this_00 + 0x14) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)(this_00 + 0x18) = *(undefined4 *)(this + 0x18);
  *(undefined2 *)(this_00 + 0x1c) = *(undefined2 *)(this + 0x1c);
  *(undefined2 *)(this_00 + 0x1e) = *(undefined2 *)(this + 0x1e);
  *(undefined2 *)(this_00 + 0x20) = *(undefined2 *)(this + 0x20);
  *(undefined2 *)(this_00 + 0x22) = *(undefined2 *)(this + 0x22);
  *(undefined4 *)(this_00 + 0x24) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(this_00 + 0x28) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)(this_00 + 0x2c) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(this_00 + 0x30) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(this_00 + 0x34) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(this_00 + 0x38) = *(undefined4 *)(this + 0x38);
  poVar5 = this + 0x3c;
  poVar7 = this_00 + 0x3c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)poVar7 = *(undefined4 *)poVar5;
    poVar5 = poVar5 + 4;
    poVar7 = poVar7 + 4;
  }
  poVar5 = this + 0x7c;
  poVar7 = this_00 + 0x7c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)poVar7 = *(undefined4 *)poVar5;
    poVar5 = poVar5 + 4;
    poVar7 = poVar7 + 4;
  }
  *(undefined4 *)(this_00 + 0xbc) = *(undefined4 *)(this + 0xbc);
  *(undefined4 *)(this_00 + 0xc4) = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(this_00 + 200) = *(undefined4 *)(this + 200);
  *(undefined4 *)(this_00 + 0xcc) = *(undefined4 *)(this + 0xcc);
  *(undefined4 *)(this_00 + 0xd0) = *(undefined4 *)(this + 0xd0);
  *(undefined4 *)(this_00 + 0xd4) = *(undefined4 *)(this + 0xd4);
  *(undefined4 *)(this_00 + 0xd8) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(this_00 + 0xdc) = *(undefined4 *)(this + 0xdc);
  *(undefined4 *)(this_00 + 0xe0) = *(undefined4 *)(this + 0xe0);
  *(undefined4 *)(this_00 + 0xe4) = *(undefined4 *)(this + 0xe4);
  *(undefined4 *)(this_00 + 0xe8) = *(undefined4 *)(this + 0xe8);
  *(undefined2 *)(this_00 + 0xec) = *(undefined2 *)(this + 0xec);
  *(undefined2 *)(this_00 + 0xee) = *(undefined2 *)(this + 0xee);
  *(undefined4 *)(this_00 + 0xf0) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)(this_00 + 0xf4) = *(undefined4 *)(this + 0xf4);
  *(undefined4 *)(this_00 + 0x38) = 0;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  *(objOBJ **)(this_00 + 0x30) = this_00;
  *(objOBJ **)(this_00 + 0x34) = this_00;
  *(undefined4 *)(this_00 + 0xe8) = 0;
  *(undefined4 *)(this_00 + 0x28) = 0;
  *(uint *)(this_00 + 0x24) = *(uint *)(this_00 + 0x24) & 0xdfffffff;
  *(uint *)(this_00 + 8) = *(uint *)(this_00 + 8) & 0xffffffc0;
  *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) | 0xc0;
  if (*(int *)(this + 0x28) == 0) {
LAB_004bf746:
    if (param_1 != 0) goto LAB_004bf774;
  }
  else {
    AllocGeom(this_00);
    puVar6 = *(undefined4 **)(this + 0x28);
    puVar8 = *(undefined4 **)(this_00 + 0x28);
    local_4 = 3;
    *puVar8 = *puVar6;
    *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar6 + 1);
    *(undefined1 *)((int)puVar8 + 5) = *(undefined1 *)((int)puVar6 + 5);
    puVar1 = (undefined2 *)((int)puVar8 + 6);
    do {
      *puVar1 = *(undefined2 *)(((int)puVar6 - (int)puVar8) + (int)puVar1);
      puVar1 = puVar1 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    puVar2 = puVar8 + 3;
    local_4 = 3;
    do {
      *puVar2 = *(undefined4 *)((int)puVar2 + ((int)puVar6 - (int)puVar8));
      puVar2 = puVar2 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    puVar8[6] = puVar6[6];
    puVar8[7] = puVar6[7];
    puVar8[8] = puVar6[8];
    puVar8[9] = puVar6[9];
    m3dSPHERE::operator=((m3dSPHERE *)(puVar8 + 10),(m3dSPHERE *)(puVar6 + 10));
    puVar8[0x10] = puVar6[0x10];
    puVar8[0x11] = puVar6[0x11];
    puVar8[0x12] = puVar6[0x12];
    puVar8[0x13] = puVar6[0x13];
    puVar8[0x14] = puVar6[0x14];
    puVar8[0x15] = puVar6[0x15];
    *(undefined2 *)(puVar8 + 0x16) = *(undefined2 *)(puVar6 + 0x16);
    *(undefined4 *)((int)puVar8 + 0x5a) = *(undefined4 *)((int)puVar6 + 0x5a);
    *(undefined4 *)((int)puVar8 + 0x5e) = *(undefined4 *)((int)puVar6 + 0x5e);
    *(undefined4 *)((int)puVar8 + 0x62) = *(undefined4 *)((int)puVar6 + 0x62);
    puVar6 = (undefined4 *)((int)puVar6 + 0x66);
    puVar8 = (undefined4 *)((int)puVar8 + 0x66);
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) | 0x3f;
    *(uint *)(*(int *)(this_00 + 0x28) + 0x66) = *(uint *)(*(int *)(this_00 + 0x28) + 0x66) | 2;
    bVar3 = 0;
    iVar4 = 0xc;
    do {
      if (*(int *)(iVar4 + *(int *)(this + 0x28)) != 0) {
        *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) | 0x400 << (bVar3 & 0x1f);
      }
      iVar4 = iVar4 + 4;
      bVar3 = bVar3 + 1;
    } while (iVar4 < 0x18);
    *(undefined4 *)(*(int *)(this_00 + 0x28) + 0x20) = 0;
    *(undefined4 *)(*(int *)(this_00 + 0x28) + 0x24) = 0;
    *(undefined4 *)(*(int *)(this_00 + 0x28) + 0x44) = 0;
    *(undefined4 *)(*(int *)(this_00 + 0x28) + 0x48) = 0;
    *(undefined4 *)(*(int *)(this_00 + 0x28) + 0x1c) = 0;
    *(undefined2 *)(*(int *)(this_00 + 0x28) + 0x58) = 0;
    *(undefined4 *)(*(int *)(this_00 + 0x28) + 0x5a) = 0;
    if (param_1 != 0) {
      iVar4 = DuplicateModifiers(this,this_00);
      if (iVar4 == 0) {
        return (objOBJ *)0x0;
      }
      goto LAB_004bf746;
    }
  }
  *(undefined4 *)(this_00 + 0xbc) = 0;
  *(undefined2 *)(this_00 + 0x1e) = 0xffff;
  *(undefined2 *)(this_00 + 0x20) = 0xffff;
  *(undefined2 *)(this_00 + 0x22) = 0xffff;
  UnshareAll(this_00);
  if (param_1 == 0) {
    return this_00;
  }
LAB_004bf774:
  iVar4 = DuplicateUsrData(this,this_00,param_1);
  if (iVar4 != 0) {
    return this_00;
  }
  return (objOBJ *)0x0;
}




/* from: engine:Object.cpp
   addr: 004BF7C0 */

m3dSPHERE * __thiscall m3dSPHERE::operator=(m3dSPHERE *this,m3dSPHERE *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return this;
}




/* from: engine:Object.cpp
   addr: 004BF7F0 */

objOBJ * __thiscall objOBJ::Duplicate(objOBJ *this,objOBJ *param_1)

{
  objOBJ *poVar1;
  objOBJ *poVar2;
  objOBJ_ITER_SAFE local_208 [512];
  int local_8;
  int local_4;
  
  objOBJ_ITER_SAFE::objOBJ_ITER_SAFE(local_208,this);
  poVar1 = Duplicate(this,1);
  if (poVar1 == (objOBJ *)0x0) {
    return (objOBJ *)0x0;
  }
  if (param_1 != (objOBJ *)0x0) {
    *(objOBJ **)(poVar1 + 0x2c) = param_1;
    if (*(int *)(param_1 + 0x38) != 0) {
      *(int *)(poVar1 + 0x30) = *(int *)(param_1 + 0x38);
      *(undefined4 *)(poVar1 + 0x34) = *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x34);
      *(objOBJ **)(*(int *)(*(int *)(param_1 + 0x38) + 0x34) + 0x30) = poVar1;
      *(objOBJ **)(*(int *)(param_1 + 0x38) + 0x34) = poVar1;
    }
    *(objOBJ **)(param_1 + 0x38) = poVar1;
  }
  local_4 = 0;
  if (0 < local_8) {
    do {
      poVar2 = Duplicate(*(objOBJ **)(local_208 + local_4 * 4),poVar1);
      if (poVar2 == (objOBJ *)0x0) {
        return (objOBJ *)0x0;
      }
      local_4 = local_4 + 1;
    } while (local_4 < local_8);
  }
  return poVar1;
}




/* from: engine:Object.cpp
   addr: 004BF8A0 */

int __thiscall objOBJ::SetName(objOBJ *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffffffff;
  pcVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = AllocName(this,~uVar3 - 1);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar4 = *(char **)(this + 0x18);
  do {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return 1;
}




/* from: engine:Object.cpp
   addr: 004BF910 */

void __fastcall objCalcLTM(objOBJ *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  objOBJ *poVar5;
  objOBJ *poVar6;
  
  if (param_1 == (objOBJ *)0x0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  bVar2 = false;
  poVar4 = poVar1;
  if (iVar3 == 0) {
    poVar5 = param_1 + 0x7c;
  }
  else {
    if ((*(uint *)param_1 & 0x1000) == 0) {
      m3dMultiplyMatr((m3dMATR *)(param_1 + 0x7c),(m3dMATR *)(iVar3 + 0x3c),
                      (m3dMATR *)(param_1 + 0x3c));
      goto LAB_004bf960;
    }
    poVar5 = (objOBJ *)(iVar3 + 0x3c);
  }
  poVar6 = param_1 + 0x3c;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)poVar6 = *(undefined4 *)poVar5;
    poVar5 = poVar5 + 4;
    poVar6 = poVar6 + 4;
  }
LAB_004bf960:
  for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar4 != poVar1))));
      poVar4 = *(objOBJ **)(poVar4 + 0x30)) {
    objCalcLTM(poVar4);
    bVar2 = true;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x004bfade) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Object.cpp
   addr: 004BF990 */

void __thiscall objOBJ::ScaleVertList(objOBJ *this,float param_1,float param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float local_20 [3];
  float afStack_14 [4];
  
  m3dMATR::Identity((m3dMATR *)local_50);
  m3dMATR::Scale((m3dMATR *)local_50,param_1,param_2,param_3,2);
  iVar8 = 0;
  param_1 = 0.0;
  if (0 < *(int *)(this + 0x14)) {
    do {
      pfVar9 = (float *)(*(int *)(*(int *)(this + 0x28) + 0x40) + iVar8);
      if (m3dSimdType == 0) {
        fVar2 = *pfVar9;
        fVar4 = pfVar9[1];
        fVar3 = pfVar9[2];
        *(ulonglong *)pfVar9 =
             CONCAT44(fVar2 * local_50[1] + local_20[1] + fVar4 * fStack_3c + fVar3 * fStack_2c,
                      fVar2 * local_50[0] + local_20[0] + fVar4 * local_40 + fVar3 * local_30);
        pfVar9[2] = fVar2 * local_50[2] + local_20[2] + fVar4 * fStack_38 + fVar3 * fStack_28;
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar10 = (undefined4)*(undefined8 *)pfVar9;
        uVar13 = CONCAT44(uVar10,uVar10);
        uVar10 = (undefined4)((ulonglong)*(undefined8 *)pfVar9 >> 0x20);
        uVar16 = CONCAT44(uVar10,uVar10);
        uVar17 = CONCAT44(pfVar9[2],pfVar9[2]);
        uVar11 = PackedFloatingMUL(uVar13,CONCAT44(local_50[1],local_50[0]));
        uVar12 = PackedFloatingMUL(uVar16,CONCAT44(fStack_3c,local_40));
        uVar14 = PackedFloatingMUL(uVar17,CONCAT44(fStack_2c,local_30));
        uVar11 = PackedFloatingADD(uVar11,CONCAT44(local_20[1],local_20[0]));
        uVar15 = PackedFloatingMUL(uVar13,CONCAT44(local_50[3],local_50[2]));
        uVar13 = PackedFloatingADD(uVar12,uVar14);
        uVar12 = PackedFloatingMUL(uVar16,CONCAT44(uStack_34,fStack_38));
        uVar17 = PackedFloatingMUL(uVar17,CONCAT44(uStack_24,fStack_28));
        uVar16 = PackedFloatingADD(uVar15,CONCAT44(afStack_14[0],local_20[2]));
        uVar13 = PackedFloatingADD(uVar11,uVar13);
        uVar11 = PackedFloatingADD(uVar12,uVar17);
        *(undefined8 *)pfVar9 = uVar13;
        uVar13 = PackedFloatingADD(uVar16,uVar11);
        pfVar9[2] = (float)uVar13;
        FastExitMediaState();
      }
      else {
        iVar7 = 0;
        do {
          iVar5 = 0;
          pfVar6 = local_50 + iVar7;
          afStack_14[iVar7 + 1] = 0.0;
          fVar2 = ___real_00000000;
          do {
            pfVar1 = pfVar9 + iVar5;
            fVar4 = *pfVar6;
            iVar5 = iVar5 + 1;
            pfVar6 = pfVar6 + 4;
            fVar2 = *pfVar1 * fVar4 + fVar2;
          } while (iVar5 < 3);
          iVar5 = iVar7 + iVar5 * 4;
          iVar7 = iVar7 + 1;
          afStack_14[iVar7] = fVar2 + local_50[iVar5];
        } while (iVar7 < 3);
        *pfVar9 = afStack_14[1];
        pfVar9[1] = afStack_14[2];
        pfVar9[2] = afStack_14[3];
      }
      param_1 = (float)((int)param_1 + 1);
      iVar8 = iVar8 + 0xc;
    } while ((int)param_1 < *(int *)(this + 0x14));
  }
  return;
}




/* from: engine:Object.cpp
   addr: 004BFB90 */

void __thiscall objOBJ::TransformPoints(objOBJ *this,m3dMATR *param_1,m3dV *param_2)

{
  uint uVar1;
  int iVar2;
  m3dV *pmVar3;
  m3dMATR local_40 [64];
  
  if (param_2 == (m3dV *)0x0) {
    dsDYN_ARRAY::Expand((dsDYN_ARRAY *)&DAT_008b6f68,*(int *)(this + 0x14));
    DAT_008b6f64 = DAT_008b6f64 + 1;
    param_2 = (m3dV *)*DAT_008b6f80;
  }
  if (((byte)*this & 1) == 0) {
    if (param_1 == (m3dMATR *)0x0) {
      param_1 = (m3dMATR *)(this + 0x3c);
    }
    else {
      m3dMultiplyMatr((m3dMATR *)(this + 0x3c),param_1,local_40);
      param_1 = local_40;
    }
  }
  else if (param_1 == (m3dMATR *)0x0) {
    pmVar3 = *(m3dV **)(*(int *)(this + 0x28) + 0x40);
    for (uVar1 = *(int *)(this + 0x14) * 3 & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pmVar3;
      pmVar3 = pmVar3 + 4;
      param_2 = param_2 + 4;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *pmVar3;
      pmVar3 = pmVar3 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  m3dMATR::TransformPointList
            (*(m3dMATR **)(this + 0x14),(int)param_1,*(m3dMATR **)(this + 0x14),
             *(int *)(*(int *)(this + 0x28) + 0x40),(void *)0xc,(int)param_2);
  return;
}




/* from: engine:Object.cpp
   addr: 004BFC40 */

void __thiscall objOBJ::GetTransformedVert(objOBJ *this,int param_1,m3dV *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*DAT_008b6f80 + param_1 * 0xc);
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)(param_2 + 4) = puVar1[1];
  *(undefined4 *)(param_2 + 8) = puVar1[2];
  return;
}




/* from: engine:Object.cpp
   addr: 004BFC70 */

void __fastcall objCalcBSphereCenter(objOBJ *param_1,m3dSPHERE *param_2)

{
  objOBJ *poVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  unkbyte10 in_ST1;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  objOBJ *local_38;
  objOBJ *local_34;
  int local_30;
  float local_2c [3];
  objOBJ *local_20;
  int local_1c;
  int local_18;
  float local_14;
  undefined8 *local_10;
  m3dSPHERE *local_c;
  float *local_8;
  
  local_c = param_2;
  local_20 = param_1;
  local_38 = (objOBJ *)0x0;
  if (param_1 != (objOBJ *)0x0) {
    local_38 = *(objOBJ **)(param_1 + 0x38);
    local_30 = 0;
    local_34 = local_38;
  }
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_1c = 0;
    do {
      if (((byte)*param_1 & 1) == 0) {
        poVar1 = param_1 + 0x3c;
        local_8 = local_2c;
        puVar6 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_1c);
        local_10 = puVar6;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar8 = (undefined4)*puVar6;
            uVar11 = CONCAT44(uVar8,uVar8);
            uVar8 = (undefined4)((ulonglong)*puVar6 >> 0x20);
            uVar15 = CONCAT44(uVar8,uVar8);
            uVar16 = CONCAT44(*(undefined4 *)(puVar6 + 1),*(undefined4 *)(puVar6 + 1));
            uVar12 = PackedFloatingMUL(uVar11,*(undefined8 *)poVar1);
            uVar10 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x4c));
            uVar13 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 0x5c));
            uVar12 = PackedFloatingADD(uVar12,*(undefined8 *)(param_1 + 0x6c));
            uVar14 = PackedFloatingMUL(uVar11,*(undefined8 *)(param_1 + 0x44));
            uVar11 = PackedFloatingADD(uVar10,uVar13);
            in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar11);
            uVar10 = PackedFloatingMUL(uVar15,*(undefined8 *)(param_1 + 0x54));
            uVar16 = PackedFloatingMUL(uVar16,*(undefined8 *)(param_1 + 100));
            uVar15 = PackedFloatingADD(uVar14,*(undefined8 *)(param_1 + 0x74));
            uVar11 = PackedFloatingADD(uVar12,uVar11);
            uVar12 = PackedFloatingADD(uVar10,uVar16);
            local_2c[1] = (float)((ulonglong)uVar11 >> 0x20);
            local_2c[0] = (float)uVar11;
            uVar11 = PackedFloatingADD(uVar15,uVar12);
            local_2c[2] = (float)uVar11;
            FastExitMediaState();
            param_2 = local_c;
          }
          else {
            iVar7 = 0;
            local_14 = (float)((int)poVar1 - (int)local_2c);
            pfVar4 = local_2c;
            do {
              fVar17 = local_14;
              iVar3 = 0;
              *pfVar4 = 0.0;
              pfVar5 = (float *)((int)fVar17 + (int)pfVar4);
              do {
                iVar2 = iVar3 * 4;
                fVar17 = *pfVar5;
                iVar3 = iVar3 + 1;
                pfVar5 = pfVar5 + 4;
                *pfVar4 = *(float *)((int)puVar6 + iVar2) * fVar17 + *pfVar4;
              } while (iVar3 < 3);
              iVar3 = iVar7 + iVar3 * 4;
              iVar7 = iVar7 + 1;
              *pfVar4 = *(float *)(poVar1 + iVar3 * 4) + *pfVar4;
              pfVar4 = pfVar4 + 1;
              param_2 = local_c;
              param_1 = local_20;
            } while (iVar7 < 3);
          }
        }
      }
      else {
        pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + local_1c);
        local_2c[0] = *pfVar4;
        local_2c[1] = pfVar4[1];
        local_2c[2] = pfVar4[2];
      }
      fVar17 = (*(float *)(param_2 + 8) - local_2c[0]) * (*(float *)(param_2 + 8) - local_2c[0]) +
               (*(float *)(param_2 + 0xc) - local_2c[1]) * (*(float *)(param_2 + 0xc) - local_2c[1])
               + (*(float *)(param_2 + 0x10) - local_2c[2]) *
                 (*(float *)(param_2 + 0x10) - local_2c[2]);
      if (m3dSimdType == 0) {
        fVar17 = fVar17 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
        auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        fVar18 = auVar19._0_4_;
        local_8 = (float *)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar18 *
                            (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar17 * fVar18 * fVar18)
                           * fVar17);
      }
      else if (m3dSimdType == 1) {
        FastExitMediaState();
        uVar9 = (ulonglong)(uint)fVar17;
        uVar11 = PackedFloatingReciprocalSQRAprox((longlong)in_ST1,uVar9);
        uVar12 = PackedFloatingMUL(uVar11,uVar11);
        uVar12 = PackedFloatingReciprocalSQRIter1(uVar12,uVar9);
        uVar11 = PackedFloatingReciprocalIter2(uVar12,uVar11);
        uVar11 = PackedFloatingMUL(uVar11,uVar9);
        in_ST1 = CONCAT28((short)((unkuint10)in_ST1 >> 0x40),uVar11);
        local_8 = (float *)uVar11;
        FastExitMediaState();
      }
      else {
        local_8 = (float *)SQRT(fVar17);
      }
      local_14 = *(float *)(param_2 + 0x14);
      pfVar4 = local_8;
      if ((float)local_8 < local_14) {
        pfVar4 = (float *)local_14;
      }
      *(float **)(param_2 + 0x14) = pfVar4;
      local_18 = local_18 + 1;
      local_1c = local_1c + 0xc;
    } while (local_18 < *(int *)(param_1 + 0x14));
  }
  while ((local_38 != (objOBJ *)0x0 && ((local_30 == 0 || (local_34 != local_38))))) {
    objCalcBSphereCenter(local_34,param_2);
    local_34 = *(objOBJ **)(local_34 + 0x30);
    local_30 = 1;
    param_2 = local_c;
  }
  return;
}




/* from: engine:Object.cpp
   addr: 004BFF70 */

void __fastcall objCalcBPrism(objOBJ *param_1,m3dPRISM *param_2)

{
  objOBJ::TransformPoints(param_1,(m3dMATR *)0x0,(m3dV *)0x0);
  (**(code **)(*(int *)param_2 + 0x14))(*DAT_008b6f80,*(undefined4 *)(param_1 + 0x14));
  return;
}




/* from: engine:Object.cpp
   addr: 004BFFA0 */

int __fastcall objCalcBBox(objOBJ *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  objOBJ *poVar4;
  undefined4 local_10;
  objOBJ *local_c;
  undefined4 local_8;
  
  if (param_1 != (objOBJ *)0x0) {
    uVar1 = *(uint *)(param_1 + 8);
    poVar4 = *(objOBJ **)(param_1 + 0x38);
    iVar3 = 0;
    if (((uVar1 & 0x1c) == 0) || ((uVar1 & 0xf000) != 0)) {
      iVar2 = 0;
      local_c = poVar4;
      if ((0 < *(int *)(param_1 + 0x14)) && (((uVar1 & 0x3f) == 0 || ((uVar1 & 0xf000) != 0)))) {
        objOBJ::TransformPoints(param_1,(m3dMATR *)0x0,(m3dV *)0x0);
        m3dBOX::Calc((m3dBOX *)(param_1 + 0xc0),(m3dV *)*DAT_008b6f80,*(int *)(param_1 + 0x14),0.01)
        ;
        iVar2 = 1;
      }
      do {
        while( true ) {
          if ((local_c == (objOBJ *)0x0) || ((iVar3 != 0 && (poVar4 == local_c)))) {
            if (iVar2 == 0) {
              m3dMATR::GetOrigin((m3dMATR *)(param_1 + 0x3c),(m3dV *)&local_10);
              *(undefined4 *)(param_1 + 0xd4) = local_10;
              *(objOBJ **)(param_1 + 0xd8) = local_c;
              *(undefined4 *)(param_1 + 0xdc) = local_8;
              *(undefined4 *)(param_1 + 200) = local_10;
              *(objOBJ **)(param_1 + 0xcc) = local_c;
              *(undefined4 *)(param_1 + 0xd0) = local_8;
              (**(code **)(*(int *)(param_1 + 0xc0) + 0x2c))(0x3c23d70a);
            }
            return iVar2;
          }
          iVar3 = objCalcBBox(poVar4);
          if (iVar3 != 0) break;
LAB_004c009e:
          poVar4 = *(objOBJ **)(poVar4 + 0x30);
          iVar3 = 1;
        }
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(poVar4 + 0xc4);
          iVar2 = 1;
          *(undefined4 *)(param_1 + 200) = *(undefined4 *)(poVar4 + 200);
          *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(poVar4 + 0xcc);
          *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(poVar4 + 0xd0);
          *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(poVar4 + 0xd4);
          *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(poVar4 + 0xd8);
          *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(poVar4 + 0xdc);
          goto LAB_004c009e;
        }
        m3dBOX::CalcUpdate((m3dBOX *)(param_1 + 0xc0),(m3dBOX *)(poVar4 + 0xc0));
        poVar4 = *(objOBJ **)(poVar4 + 0x30);
        iVar2 = 1;
        iVar3 = iVar2;
      } while( true );
    }
  }
  return 0;
}




/* from: engine:Object.cpp
   addr: 004C0110 */

int __thiscall objSET::Alloc(objSET *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = apCalloc(param_1,4);
  *(void **)(this + 0xc) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  *(int *)(this + 4) = param_1;
  *(undefined4 *)(this + 8) = 0;
  return 1;
}




/* from: engine:Object.cpp
   addr: 004C0150 */

int __thiscall objSET::AddObj(objSET *this,objOBJ *param_1)

{
  if (*(int *)(this + 4) <= *(int *)(this + 8)) {
    return 0;
  }
  *(objOBJ **)(*(int *)(this + 0xc) + *(int *)(this + 8) * 4) = param_1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return 1;
}

