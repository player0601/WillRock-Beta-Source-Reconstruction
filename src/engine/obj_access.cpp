
/* from: engine:obj_access.cpp
   addr: 004ED720 */

txmTEXTURE * __thiscall objOBJ::GetFaceTexMtlNmb(objOBJ *this,int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x28);
  return *(txmTEXTURE **)
          ((uint)*(ushort *)((uint)*(byte *)(piVar1 + 1) * param_1 + *piVar1) * 0x70 +
           *(int *)(piVar1[6] + 2) + param_2 * 0x19);
}




/* from: engine:obj_access.cpp
   addr: 004ED760 */

txmTEXTURE * __thiscall objOBJ::GetFaceTexRendMtl(objOBJ *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  piVar1 = *(int **)(this + 0x28);
  iVar3 = 0;
  iVar2 = (uint)*(ushort *)((uint)*(byte *)(piVar1 + 1) * param_1 + *piVar1) * 0x70 +
          *(int *)(piVar1[6] + 2);
  if (0 < *(short *)(iVar2 + 100)) {
    pcVar4 = (char *)(iVar2 + 0x18);
    while ((uint)*(byte *)(piVar1[6] + 8 + *pcVar4 * 4) != param_2) {
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x19;
      if (*(short *)(iVar2 + 100) <= iVar3) {
        return (txmTEXTURE *)0x0;
      }
    }
    if (iVar3 != -1) {
      return *(txmTEXTURE **)(iVar2 + iVar3 * 0x19);
    }
  }
  return (txmTEXTURE *)0x0;
}




/* from: engine:obj_access.cpp
   addr: 004ED7E0 */

void __thiscall
objOBJ::GetFaceTexCoord(objOBJ *this,int param_1,int param_2,int param_3,m3dVTX *param_4)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar2 = *(int **)(this + 0x28);
  iVar4 = (uint)*(ushort *)(*piVar2 + (uint)*(byte *)(piVar2 + 1) * param_1) * 0x70 +
          *(int *)(piVar2[6] + 2) + param_3 * 0x19;
  pbVar1 = (byte *)(piVar2[6] + 6 + *(char *)(iVar4 + 0x18) * 4);
  uVar6 = (uint)*(ushort *)
                 (*piVar2 + 8 + (param_2 + (uint)*pbVar1 * 3) * 2 +
                 (uint)*(byte *)(piVar2 + 1) * param_1);
  uVar5 = (uint)pbVar1[1];
  if (*(ushort *)((int)piVar2 + uVar5 * 2 + 6) < uVar6) {
    uVar6 = 0;
  }
  iVar3 = piVar2[uVar5 + 3];
  *(undefined4 *)param_4 = *(undefined4 *)(iVar3 + uVar6 * 8);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(iVar3 + 4 + uVar6 * 8);
  *(float *)param_4 = *(float *)(iVar4 + 4) * *(float *)param_4;
  *(float *)(param_4 + 4) = *(float *)(iVar4 + 8) * *(float *)(param_4 + 4);
  return;
}




/* from: engine:obj_access.cpp
   addr: 004ED880 */

int __thiscall objOBJ::GetTCIndIDRendMtl(objOBJ *this,int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar1 = *(int *)(*(int *)(this + 0x28) + 0x18);
  iVar2 = 0;
  if (0 < *(short *)(iVar1 + 0x16)) {
    pbVar3 = (byte *)(iVar1 + 8);
    while ((uint)*pbVar3 != param_1) {
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 4;
      if (*(short *)(iVar1 + 0x16) <= iVar2) {
        return -1;
      }
    }
    if ((iVar2 != -1) && (pbVar3 = (byte *)(iVar1 + 6 + iVar2 * 4), pbVar3 != (byte *)0x0)) {
      return (uint)*pbVar3;
    }
  }
  return -1;
}




/* from: engine:obj_access.cpp
   addr: 004ED8E0 */

int __thiscall objOBJ::GetTCCoordIDRendMtl(objOBJ *this,int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar1 = *(int *)(*(int *)(this + 0x28) + 0x18);
  iVar2 = 0;
  if (0 < *(short *)(iVar1 + 0x16)) {
    pbVar3 = (byte *)(iVar1 + 8);
    while ((uint)*pbVar3 != param_1) {
      iVar2 = iVar2 + 1;
      pbVar3 = pbVar3 + 4;
      if (*(short *)(iVar1 + 0x16) <= iVar2) {
        return -1;
      }
    }
    if ((iVar2 != -1) && (iVar1 = iVar1 + 6 + iVar2 * 4, iVar1 != 0)) {
      return (uint)*(byte *)(iVar1 + 1);
    }
  }
  return -1;
}




/* from: engine:obj_access.cpp
   addr: 004ED940 */

txmTEXTURE * __thiscall objOBJ::GetSplitTexRendMtl(objOBJ *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  iVar1 = param_1 * 0x70 + *(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2);
  if (0 < *(short *)(iVar1 + 100)) {
    pcVar3 = (char *)(iVar1 + 0x18);
    while ((uint)*(byte *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 8 + *pcVar3 * 4) != param_2) {
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0x19;
      if (*(short *)(iVar1 + 100) <= iVar2) {
        return (txmTEXTURE *)0x0;
      }
    }
    if (iVar2 != -1) {
      return *(txmTEXTURE **)(iVar1 + iVar2 * 0x19);
    }
  }
  return (txmTEXTURE *)0x0;
}




/* from: engine:obj_access.cpp
   addr: 004ED9B0 */

objMTL * __thiscall objOBJ::GetSplitMtlRendMtl(objOBJ *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = 0;
  iVar1 = param_1 * 0x70 + *(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2);
  if (0 < *(short *)(iVar1 + 100)) {
    pcVar3 = (char *)(iVar1 + 0x18);
    while ((uint)*(byte *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 8 + *pcVar3 * 4) != param_2) {
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 0x19;
      if (*(short *)(iVar1 + 100) <= iVar2) {
        return (objMTL *)0x0;
      }
    }
    if (iVar2 != -1) {
      return (objMTL *)(iVar1 + iVar2 * 0x19);
    }
  }
  return (objMTL *)0x0;
}




/* from: engine:obj_access.cpp
   addr: 004EDA20 */

objMTL * __thiscall objOBJ::GetSplitMtlRendMtl(objOBJ *this,objSPLIT_ENTRY *param_1,int param_2)

{
  int iVar1;
  objSPLIT_ENTRY *poVar2;
  
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 100)) {
    poVar2 = param_1 + 0x18;
    while ((uint)*(byte *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 8 + (char)*poVar2 * 4) !=
           param_2) {
      iVar1 = iVar1 + 1;
      poVar2 = poVar2 + 0x19;
      if (*(short *)(param_1 + 100) <= iVar1) {
        return (objMTL *)0x0;
      }
    }
    if (iVar1 != -1) {
      return (objMTL *)(param_1 + iVar1 * 0x19);
    }
  }
  return (objMTL *)0x0;
}




/* from: engine:obj_access.cpp
   addr: 004EDA80 */

int __thiscall objOBJ::CalcMaxTCHWIndID(objOBJ *this)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (int)*(short *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 0x16);
  if (0 < iVar1) {
    pbVar2 = (byte *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 9);
    do {
      if (uVar3 < *pbVar2) {
        uVar3 = (uint)*pbVar2;
      }
      pbVar2 = pbVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar3 + 1;
}




/* from: engine:obj_access.cpp
   addr: 004EDAB0 */

int __thiscall objMTL_CTRL_TBL::FindFreeTCCoordID(objMTL_CTRL_TBL *this)

{
  bool bVar1;
  uint uVar2;
  objMTL_CTRL_TBL *poVar3;
  int iVar4;
  
  uVar2 = 0;
  while( true ) {
    bVar1 = false;
    if (*(short *)(this + 0x10) < 1) {
      return uVar2;
    }
    poVar3 = this + 1;
    iVar4 = (int)*(short *)(this + 0x10);
    do {
      if (uVar2 == (byte)*poVar3) {
        bVar1 = true;
      }
      poVar3 = poVar3 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (!bVar1) break;
    uVar2 = uVar2 + 1;
    if (2 < (int)uVar2) {
      return -1;
    }
  }
  return uVar2;
}




/* from: engine:obj_access.cpp
   addr: 004EDAF0 */

int __thiscall objMTL_CTRL_TBL::IsSharedTCCoordID(objMTL_CTRL_TBL *this,int param_1)

{
  objMTL_CTRL_TBL *poVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)*(short *)(this + 0x10);
  iVar3 = 0;
  if (0 < iVar2) {
    poVar1 = this + 1;
    do {
      if ((uint)(byte)*poVar1 == param_1) {
        iVar3 = iVar3 + 1;
      }
      poVar1 = poVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (1 < iVar3) {
      return 1;
    }
  }
  return 0;
}




/* from: engine:obj_access.cpp
   addr: 004EDB30 */

int __thiscall objMTL_CTRL_TBL::AddMtlCtrl(objMTL_CTRL_TBL *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  objMTL_CTRL_TBL *poVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)*(short *)(this + 0x10);
  iVar5 = 0;
  if (0 < iVar6) {
    poVar4 = this + 2;
    do {
      if ((uint)(byte)*poVar4 == param_1) {
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      poVar4 = poVar4 + 4;
    } while (iVar5 < iVar6);
  }
  uVar3 = 0;
  while( true ) {
    bVar1 = false;
    iVar5 = 0;
    if (iVar6 < 1) break;
    do {
      if (uVar3 == (byte)this[iVar5 * 4]) {
        bVar1 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
    if (!bVar1) break;
    uVar3 = uVar3 + 1;
    if (2 < (int)uVar3) {
      return -1;
    }
  }
  if (uVar3 == 0xffffffff) {
    return -1;
  }
  uVar2 = 0;
  while (bVar1 = false, 0 < iVar6) {
    poVar4 = this + 1;
    iVar5 = iVar6;
    do {
      if (uVar2 == (byte)*poVar4) {
        bVar1 = true;
      }
      poVar4 = poVar4 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (!bVar1) break;
    uVar2 = uVar2 + 1;
    if (2 < (int)uVar2) {
      return -1;
    }
  }
  if (uVar2 != 0xffffffff) {
    this[iVar6 * 4 + 2] = param_1._0_1_;
    this[*(short *)(this + 0x10) * 4] = SUB41(uVar3,0);
    this[*(short *)(this + 0x10) * 4 + 1] = SUB41(uVar2,0);
    this[*(short *)(this + 0x10) * 4 + 3] = SUB41(uVar2,0);
    *(short *)(this + 0x10) = *(short *)(this + 0x10) + 1;
    return *(short *)(this + 0x10) + -1;
  }
  return -1;
}




/* from: engine:obj_access.cpp
   addr: 004EDC30 */

int __thiscall objMTL_CTRL_TBL::FindMtlCtrlID(objMTL_CTRL_TBL *this,int param_1)

{
  int iVar1;
  objMTL_CTRL_TBL *poVar2;
  
  iVar1 = 0;
  if (0 < *(short *)(this + 0x10)) {
    poVar2 = this + 2;
    do {
      if ((uint)(byte)*poVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      poVar2 = poVar2 + 4;
    } while (iVar1 < *(short *)(this + 0x10));
  }
  return -1;
}




/* from: engine:obj_access.cpp
   addr: 004EDC60 */

objMTL_CTRL * __thiscall objMTL_CTRL_TBL::FindMtlCtrl(objMTL_CTRL_TBL *this,int param_1)

{
  int iVar1;
  objMTL_CTRL_TBL *poVar2;
  
  iVar1 = 0;
  if (0 < *(short *)(this + 0x10)) {
    poVar2 = this + 2;
    while ((uint)(byte)*poVar2 != param_1) {
      iVar1 = iVar1 + 1;
      poVar2 = poVar2 + 4;
      if (*(short *)(this + 0x10) <= iVar1) {
        return (objMTL_CTRL *)0x0;
      }
    }
    if (iVar1 != -1) {
      return (objMTL_CTRL *)(this + iVar1 * 4);
    }
  }
  return (objMTL_CTRL *)0x0;
}




/* from: engine:obj_access.cpp
   addr: 004EDCB0 */

int __thiscall objMTL_TBL::AddMtl(objMTL_TBL *this,int param_1,txmTEXTURE *param_2)

{
  int iVar1;
  objMTL_TBL *poVar2;
  objMTL_TBL *poVar3;
  txmTEXTURE *local_1c [6];
  undefined1 local_4;
  
  local_4 = (undefined1)param_1;
  local_1c[1] = (txmTEXTURE *)0x3f800000;
  local_1c[2] = (txmTEXTURE *)0x3f800000;
  local_1c[3] = (txmTEXTURE *)0x3f800000;
  local_1c[0] = param_2;
  poVar2 = (objMTL_TBL *)local_1c;
  poVar3 = this + *(short *)(this + 100) * 0x19;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)poVar3 = *(undefined4 *)poVar2;
    poVar2 = poVar2 + 4;
    poVar3 = poVar3 + 4;
  }
  *poVar3 = *poVar2;
  *(short *)(this + 100) = *(short *)(this + 100) + 1;
  return *(short *)(this + 100) + -1;
}




/* from: engine:obj_access.cpp
   addr: 004EDD30 */

objMTL * __thiscall
objSPLIT_ENTRY::FindMtlTCCoordID(objSPLIT_ENTRY *this,objOBJ *param_1,int param_2)

{
  objSPLIT_ENTRY *poVar1;
  int iVar2;
  
  iVar2 = 0;
  poVar1 = this + 100;
  if (0 < *(short *)poVar1) {
    do {
      if ((*(int *)this != 0) &&
         ((uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 7 +
                         (char)((objMTL *)this)[0x18] * 4) == param_2)) {
        return (objMTL *)this;
      }
      iVar2 = iVar2 + 1;
      this = (objSPLIT_ENTRY *)((objMTL *)this + 0x19);
    } while (iVar2 < *(short *)poVar1);
  }
  return (objMTL *)0x0;
}




/* from: engine:obj_access.cpp
   addr: 004EDD80 */

objMTL * __thiscall objSPLIT_ENTRY::FindMtlRendMtl(objSPLIT_ENTRY *this,objOBJ *param_1,int param_2)

{
  objSPLIT_ENTRY *poVar1;
  int iVar2;
  
  poVar1 = this + 100;
  iVar2 = 0;
  if (0 < *(short *)poVar1) {
    do {
      if ((uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 8 +
                         (char)((objMTL *)this)[0x18] * 4) == param_2) {
        return (objMTL *)this;
      }
      iVar2 = iVar2 + 1;
      this = (objSPLIT_ENTRY *)((objMTL *)this + 0x19);
    } while (iVar2 < *(short *)poVar1);
  }
  return (objMTL *)0x0;
}

