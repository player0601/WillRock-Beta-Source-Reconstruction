
/* from: engine:Obj_misc.cpp
   addr: 004BB4F0 */

int __thiscall objOBJ::GetNObj(objOBJ *this,_func_int_objOBJ_ptr_void_ptr *param_1)

{
  int iVar1;
  int iVar2;
  void *unaff_ESI;
  objOBJ *unaff_EDI;
  objOBJ *poVar3;
  objOBJ *local_8;
  objOBJ *local_4;
  
  iVar2 = 0;
  poVar3 = local_4;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    poVar3 = (objOBJ *)0x0;
  }
  if ((param_1 == (_func_int_objOBJ_ptr_void_ptr *)0x0) ||
     (iVar1 = (*param_1)(unaff_EDI,unaff_ESI), iVar1 != 0)) {
    iVar2 = 1;
  }
  for (; (local_4 != (objOBJ *)0x0 && ((poVar3 == (objOBJ *)0x0 || (local_8 != local_4))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    iVar1 = GetNObj(local_8,param_1);
    iVar2 = iVar2 + iVar1;
    poVar3 = (objOBJ *)0x1;
  }
  return iVar2;
}




/* from: engine:Obj_misc.cpp
   addr: 004BB560 */

int __thiscall objOBJ::GetMaxNVert(objOBJ *this)

{
  int iVar1;
  int iVar2;
  objOBJ *poVar3;
  objOBJ *local_8;
  int local_4;
  
  poVar3 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    poVar3 = local_8;
  }
  iVar2 = *(int *)(this + 0x14);
  for (; (poVar3 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar3))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    iVar1 = GetMaxNVert(local_8);
    if (iVar2 <= iVar1) {
      iVar2 = iVar1;
    }
    local_4 = 1;
  }
  return iVar2;
}




/* from: engine:Obj_misc.cpp
   addr: 004BB5D0 */

int __thiscall objOBJ::SetIDHier(objOBJ *this,int param_1)

{
  int iVar1;
  objOBJ *poVar2;
  objOBJ *local_8;
  int local_4;
  
  poVar2 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    poVar2 = local_8;
  }
  *(short *)(this + 0x1c) = (short)param_1;
  iVar1 = param_1 + 1;
  for (; (poVar2 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar2))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    iVar1 = SetIDHier(local_8,iVar1);
    local_4 = 1;
  }
  return iVar1;
}




/* from: engine:Obj_misc.cpp
   addr: 004BB630 */

int __thiscall objOBJ::CompressFaceList(objOBJ *this,int param_1)

{
  size_t _Size;
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(this + 0x10) != 0) {
    if (param_1 == -1) {
      iVar5 = (int)*(short *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 0x16);
      uVar3 = 0xffffffff;
      if (0 < iVar5) {
        pbVar2 = (byte *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 6);
        do {
          if ((int)uVar3 <= (int)(uint)*pbVar2) {
            uVar3 = (uint)*pbVar2;
          }
          pbVar2 = pbVar2 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_1 = uVar3 + 1;
    }
    uVar3 = (uint)*(byte *)(*(int *)(this + 0x28) + 4);
    _Size = param_1 * 6 + 8;
    if ((int)_Size < (int)uVar3) {
      iVar5 = 0;
      if (0 < *(int *)(this + 0x10)) {
        iVar4 = 0;
        do {
          iVar1 = **(int **)(this + 0x28);
          memmove((void *)(iVar4 + iVar1),
                  (void *)((uint)*(byte *)(*(int **)(this + 0x28) + 1) * iVar5 + iVar1),_Size);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + _Size;
        } while (iVar5 < *(int *)(this + 0x10));
      }
      iVar5 = AllocFaceList(this,*(int *)(this + 0x10),param_1);
      if (iVar5 == 0) {
        return 0;
      }
    }
    else if ((int)uVar3 < (int)_Size) {
      iVar5 = AllocFaceList(this,*(int *)(this + 0x10),param_1);
      if (iVar5 == 0) {
        return 0;
      }
      iVar5 = *(int *)(this + 0x10) + -1;
      if (-1 < iVar5) {
        iVar4 = uVar3 * iVar5;
        do {
          iVar1 = **(int **)(this + 0x28);
          memmove((void *)((uint)*(byte *)(*(int **)(this + 0x28) + 1) * iVar5 + iVar1),
                  (void *)(iVar1 + iVar4),uVar3);
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 - uVar3;
        } while (-1 < iVar5);
      }
    }
  }
  return 1;
}




/* from: engine:Obj_misc.cpp
   addr: 004BB740 */

int __thiscall objOBJ::SortFaceList(objOBJ *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x10) != 0) {
    DAT_008b6710 = this;
    qsort((void *)**(undefined4 **)(this + 0x28),*(size_t *)(this + 0x10),
          (uint)*(byte *)(*(undefined4 **)(this + 0x28) + 1),_objCmpFace);
    if ((uint)**(ushort **)(*(int *)(this + 0x28) + 0x18) == *(uint *)(this + 0x10)) {
      iVar1 = CreateFaceSplitPerFace(this);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      iVar1 = CompressFaceSplit(this);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}




/* from: engine:Obj_misc.cpp
   addr: 004BB7A0 */

int __thiscall objOBJ::SortMtlList(objOBJ *this)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int local_8;
  
  iVar11 = 0;
  if ((*(short **)(*(int *)(this + 0x28) + 0x18) != (short *)0x0) &&
     (**(short **)(*(int *)(this + 0x28) + 0x18) != 0)) {
    DAT_008b6710 = this;
    qsort(*(void **)(*(ushort **)(*(int *)(this + 0x28) + 0x18) + 1),
          (uint)**(ushort **)(*(int *)(this + 0x28) + 0x18),0x70,_objCmpSplitEntry);
    puVar2 = (undefined4 *)
             apCalloc((uint)*(byte *)(*(int *)(this + 0x28) + 4),*(uint *)(this + 0x10));
    iVar3 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar10 = *(int **)(this + 0x28);
    puVar4 = (ushort *)piVar10[6];
    if (*puVar4 != 0) {
      local_8 = 0;
      do {
        iVar9 = *(int *)(puVar4 + 1) + local_8;
        uVar8 = (uint)*(byte *)(piVar10 + 1);
        uVar5 = *(ushort *)(iVar9 + 0x6a) * uVar8;
        puVar12 = (undefined4 *)(*(ushort *)(iVar9 + 0x68) * uVar8 + *piVar10);
        puVar13 = (undefined4 *)(uVar8 * iVar11 + (int)puVar2);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        iVar7 = 0;
        if (*(short *)(iVar9 + 0x6a) != 0) {
          do {
            iVar1 = iVar7 + iVar11;
            iVar7 = iVar7 + 1;
            *(short *)(iVar1 * (uint)*(byte *)(*(int *)(this + 0x28) + 4) + (int)puVar2) =
                 (short)iVar3;
          } while (iVar7 < (int)(uint)*(ushort *)(iVar9 + 0x6a));
        }
        *(short *)(iVar9 + 0x68) = (short)iVar11;
        iVar11 = iVar11 + (uint)*(ushort *)(iVar9 + 0x6a);
        piVar10 = *(int **)(this + 0x28);
        iVar3 = iVar3 + 1;
        local_8 = local_8 + 0x70;
        puVar4 = (ushort *)piVar10[6];
      } while (iVar3 < (int)(uint)*puVar4);
    }
    uVar6 = (uint)*(byte *)(*(undefined4 **)(this + 0x28) + 1) * *(int *)(this + 0x10);
    puVar12 = puVar2;
    puVar13 = (undefined4 *)**(undefined4 **)(this + 0x28);
    for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    apFree(puVar2);
    CompressFaceSplit(this);
  }
  return 1;
}




/* from: engine:Obj_misc.cpp
   addr: 004BB900 */

void __thiscall objOBJ::MarkUsedTex(objOBJ *this)

{
  byte *pbVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  iVar4 = 0;
  local_c = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_c = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    local_8 = local_c;
  }
  if (((*(int *)(this + 0x28) != 0) &&
      (puVar2 = *(ushort **)(*(int *)(this + 0x28) + 0x18), puVar2 != (ushort *)0x0)) &&
     (*puVar2 != 0)) {
    iVar5 = 0;
    do {
      iVar6 = 0;
      piVar3 = (int *)(*(int *)(puVar2 + 1) + iVar5);
      piVar7 = piVar3;
      if (0 < (short)piVar3[0x19]) {
        do {
          if (*piVar7 != 0) {
            pbVar1 = (byte *)(*piVar7 + 5);
            *pbVar1 = *pbVar1 | 2;
          }
          iVar6 = iVar6 + 1;
          piVar7 = (int *)((int)piVar7 + 0x19);
        } while (iVar6 < (short)piVar3[0x19]);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
      puVar2 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
    } while (iVar4 < (int)(uint)*puVar2);
  }
  while ((local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))))) {
    MarkUsedTex(local_8);
    local_8 = *(objOBJ **)(local_8 + 0x30);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BB9E0 */

void __thiscall objOBJ::ReplaceTex(objOBJ *this,txmTEXTURE *param_1,txmTEXTURE *param_2)

{
  bool bVar1;
  objMTL *poVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  objOBJ *local_10;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  local_10 = this;
  objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
  iVar7 = 0;
  bVar1 = false;
  if (0 < *(int *)(this + 0x10)) {
    if (param_1 == (txmTEXTURE *)0x0) {
      UnshareFaceSplit(this);
      iVar4 = 0;
      puVar3 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
      if (*puVar3 != 0) {
        do {
          poVar2 = objSPLIT_ENTRY::FindMtlRendMtl
                             ((objSPLIT_ENTRY *)(*(int *)(puVar3 + 1) + iVar7),this,0);
          if (*(int *)poVar2 != 0) {
            if ((*(uint *)(*(int *)poVar2 + 4) & 0x10000) != 0) {
              *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x30000;
            }
            *(txmTEXTURE **)poVar2 = param_2;
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 0x70;
          puVar3 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
        } while (iVar4 < (int)(uint)*puVar3);
      }
    }
    else {
      if ((*(uint *)(param_1 + 4) & 0x10000) != 0) {
        *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x30000;
      }
      local_14 = 0;
      puVar3 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
      if (*puVar3 != 0) {
        do {
          iVar4 = *(int *)(puVar3 + 1);
          iVar6 = 0;
          if (0 < *(short *)(iVar7 + 100 + iVar4)) {
            iVar5 = 0;
            do {
              if (*(txmTEXTURE **)(iVar7 + iVar5 + iVar4) == param_1) {
                if (!bVar1) {
                  UnshareFaceSplit(this);
                  bVar1 = true;
                }
                *(txmTEXTURE **)
                 (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) + iVar7 + iVar5) = param_2;
              }
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 0x19;
              iVar4 = *(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2);
            } while (iVar6 < *(short *)(iVar7 + 100 + iVar4));
          }
          local_14 = local_14 + 1;
          iVar7 = iVar7 + 0x70;
          puVar3 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
        } while (local_14 < (int)(uint)*puVar3);
      }
    }
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xdfffffff;
  }
  for (; (local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    ReplaceTex(local_8,param_1,param_2);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BBB60 */

void __thiscall objOBJ::SetTex(objOBJ *this,int param_1,txmTEXTURE *param_2)

{
  ushort *puVar1;
  objMTL *poVar2;
  int iVar3;
  int iVar4;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  iVar3 = 0;
  local_c = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    local_c = local_8;
  }
  if (0 < *(int *)(this + 0x10)) {
    UnshareFaceSplit(this);
    puVar1 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
    if (*puVar1 != 0) {
      iVar4 = 0;
      do {
        poVar2 = objSPLIT_ENTRY::FindMtlRendMtl
                           ((objSPLIT_ENTRY *)(*(int *)(puVar1 + 1) + iVar4),this,param_1);
        if (poVar2 != (objMTL *)0x0) {
          *(txmTEXTURE **)poVar2 = param_2;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x70;
        puVar1 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
      } while (iVar3 < (int)(uint)*puVar1);
    }
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xdfffffff;
  }
  while ((local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))))) {
    SetTex(local_8,param_1,param_2);
    local_8 = *(objOBJ **)(local_8 + 0x30);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BBC20 */

void __thiscall objOBJ::ReplaceTex(objOBJ *this,char *param_1,char *param_2)

{
  txmTEXTURE *ptVar1;
  txmTEXTURE *ptVar2;
  
  ptVar1 = txmMANAGER::Add(txmManager,param_1,0x100,1);
  if (ptVar1 != (txmTEXTURE *)0x0) {
    ptVar2 = txmMANAGER::Add(txmManager,param_2,0x100,1);
    if (ptVar2 != (txmTEXTURE *)0x0) {
      if (((byte)ptVar1[4] & 0x10) != 0) {
        *(uint *)(ptVar2 + 4) = *(uint *)(ptVar2 + 4) | 0x20010;
      }
      if (((byte)ptVar1[4] & 0x20) != 0) {
        *(uint *)(ptVar2 + 4) = *(uint *)(ptVar2 + 4) | 0x20020;
      }
      if (((byte)ptVar1[4] & 8) != 0) {
        *(uint *)(ptVar2 + 4) = *(uint *)(ptVar2 + 4) | 0x20008;
      }
      if ((*(uint *)(ptVar1 + 4) & 0x10000) != 0) {
        *(uint *)(ptVar2 + 4) = *(uint *)(ptVar2 + 4) | 0x30000;
      }
      ReplaceTex(this,ptVar1,ptVar2);
    }
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BBCB0 */

void __thiscall objOBJ::ReplaceTexList(objOBJ *this,char **param_1,int param_2,char *param_3)

{
  int iVar1;
  char local_40 [64];
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      sprintf(local_40,s__s_s,param_1[iVar1],param_3);
      ReplaceTex(this,param_1[iVar1],local_40);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BBD10 */

void __thiscall objOBJ::SetConstColor(objOBJ *this,ulong param_1,objAPPLY_COLOR param_2,int param_3)

{
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  local_c = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    local_c = local_8;
  }
  if ((0 < *(int *)(this + 0x10)) && ((param_3 & *(uint *)this) == 0)) {
    SetConstColor(this,param_1,param_2);
  }
  for (; (local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetConstColor(local_8,param_1,param_2,0);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BBD90 */

void __thiscall objOBJ::SetConstColor(objOBJ *this,ulong param_1,objAPPLY_COLOR param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 != 0) {
    if (param_2 != 0) {
      if (param_2 == 1) {
        *(uint *)(iVar1 + 0x5e) = (*(uint *)(iVar1 + 0x5e) ^ param_1) & 0xffffff ^ param_1;
        UpdRenderState(this);
        return;
      }
      if (param_2 != 2) {
        *(undefined4 *)(iVar1 + 0x5e) = 0;
        UpdRenderState(this);
        return;
      }
      *(uint *)(iVar1 + 0x5e) =
           (*(uint *)(iVar1 + 0x5e) ^ param_1) & 0xffffff ^ *(uint *)(iVar1 + 0x5e);
      UpdRenderState(this);
      return;
    }
    *(ulong *)(iVar1 + 0x5e) = param_1;
    UpdRenderState(this);
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BBE10 */

void __thiscall objOBJ::UpdRenderState(objOBJ *this)

{
  objOBJ *poVar1;
  objOBJ *local_8;
  int local_4;
  
  poVar1 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    poVar1 = local_8;
  }
  UpdRenderState(this);
  for (; (poVar1 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar1))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    UpdRenderState(local_8);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BBE60 */

void __thiscall objOBJ::UpdRenderState(objOBJ *this)

{
  int iVar1;
  bool bVar2;
  txmTEXTURE *ptVar3;
  int iVar4;
  uint uVar5;
  txmTEXTURE *ptVar6;
  
  if (*(int *)(this + 0x28) == 0) {
    return;
  }
  uVar5 = *(uint *)(this + 0x24);
  *(uint *)(this + 0x24) = uVar5 & 0xffffffc0;
  ptVar6 = (txmTEXTURE *)(uVar5 & 0x3fff);
  bVar2 = false;
  ptVar3 = ptVar6;
  if ((0 < *(int *)(this + 0x10)) &&
     (ptVar3 = GetFaceTexRendMtl(this,0,0), ptVar3 != (txmTEXTURE *)0x0)) {
    uVar5 = *(uint *)(this + 0x24);
    *(uint *)(this + 0x24) = uVar5 | 1;
    if (((byte)ptVar3[4] & 4) != 0) {
      bVar2 = true;
      *(uint *)(this + 0x24) = uVar5 | 5;
    }
  }
  iVar1 = *(int *)(this + 0x28);
  if (*(char *)(iVar1 + 0x61) != -1) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 10;
    bVar2 = true;
  }
  if ((((*(uint *)(iVar1 + 0x5e) & 0xffffff) != 0xffffff) || (ptVar3 == (txmTEXTURE *)0x0)) ||
     ((*(uint *)(this + 0x24) & 0x800) != 0)) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 10;
  }
  if (*(int *)(iVar1 + 0x4c) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x14)) {
      do {
        if (*(char *)(*(int *)(iVar1 + 0x4c) + 3 + iVar4 * 4) != -1) {
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 8;
          bVar2 = true;
        }
        if ((*(uint *)(*(int *)(iVar1 + 0x4c) + iVar4 * 4) & 0xffffff) != 0xffffff) {
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0x14));
    }
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x10;
  }
  uVar5 = *(uint *)(this + 0x24);
  if ((uVar5 & 0x1c0) == 0) {
    if (!bVar2) goto LAB_004bbf6f;
    uVar5 = uVar5 | 0xa0;
  }
  else {
    *(uint *)(this + 0x24) = uVar5 | 0x20;
    if ((uVar5 & 8) == 0) goto LAB_004bbf6f;
    uVar5 = CONCAT31((int3)(uVar5 >> 8),(char)(uVar5 | 0x20)) | 2;
  }
  *(uint *)(this + 0x24) = uVar5;
LAB_004bbf6f:
  if (ptVar6 != (txmTEXTURE *)(*(uint *)(this + 0x24) & 0x3fff)) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xdfffffff;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BBF90 */

void __thiscall objOBJ::SetTransparency(objOBJ *this,int param_1,uchar param_2)

{
  int iVar1;
  uchar uVar2;
  uint uVar3;
  objOBJ *poVar4;
  objOBJ *local_8;
  int local_4;
  
  uVar2 = param_2;
  _param_2 = (uint)param_2;
  poVar4 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    poVar4 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    local_8 = poVar4;
  }
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 == 0) goto LAB_004bbff3;
  uVar3 = *(uint *)(this + 0x24) & 0xffffff3f;
  *(uint *)(this + 0x24) = uVar3;
  if ((param_1 & 0x40U) == 0) {
    if ((char)param_1 < '\0') {
      uVar3 = uVar3 | 0xa0;
      goto LAB_004bbfd0;
    }
  }
  else {
    uVar3 = uVar3 | 0x60;
LAB_004bbfd0:
    *(uint *)(this + 0x24) = uVar3;
  }
  *(uint *)(iVar1 + 0x5e) = _param_2 << 0x18 | *(uint *)(iVar1 + 0x5e) & 0xffffff;
  UpdRenderState(this);
LAB_004bbff3:
  for (; (poVar4 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar4))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetTransparency(local_8,param_1,uVar2);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC030 */

void __thiscall objOBJ::SetTransparency(objOBJ *this,int param_1,uchar param_2)

{
  uint uVar1;
  
  _param_2 = (uint)param_2;
  uVar1 = *(uint *)(this + 0x24) & 0xffffff3f;
  *(uint *)(this + 0x24) = uVar1;
  if ((param_1 & 0x40U) == 0) {
    if (-1 < (char)param_1) goto LAB_004bc04e;
    uVar1 = uVar1 | 0xa0;
  }
  else {
    uVar1 = uVar1 | 0x60;
  }
  *(uint *)(this + 0x24) = uVar1;
LAB_004bc04e:
  *(uint *)(*(int *)(this + 0x28) + 0x5e) =
       _param_2 << 0x18 | *(uint *)(*(int *)(this + 0x28) + 0x5e) & 0xffffff;
  UpdRenderState(this);
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC080 */

void __thiscall objOBJ::SetStateYes(objOBJ *this,int param_1)

{
  objOBJ *poVar1;
  objOBJ *local_8;
  int local_4;
  
  poVar1 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    poVar1 = local_8;
  }
  *(uint *)this = *(uint *)this | param_1;
  for (; (poVar1 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar1))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetStateYes(local_8,param_1);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC0D0 */

void __thiscall objOBJ::SetStateRendYes(objOBJ *this,int param_1)

{
  uint uVar1;
  objOBJ *poVar2;
  objOBJ *local_8;
  int local_4;
  
  poVar2 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    poVar2 = local_8;
  }
  uVar1 = *(uint *)(this + 0x24) | param_1;
  *(uint *)(this + 0x24) = uVar1;
  if (((char)uVar1 < '\0') && ((uVar1 & 0x40) != 0)) {
    if ((char)param_1 < '\0') {
      *(uint *)(this + 0x24) = uVar1 & 0xffffffbf;
    }
    if ((param_1 & 0x40U) != 0) {
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xffffff7f;
    }
  }
  if ((param_1 & 0x3fffU) != 0) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xdfffffff;
  }
  if ((*(uint *)(this + 0x24) & 0x800) != 0) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
  }
  for (; (poVar2 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar2))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetStateRendYes(local_8,param_1);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC160 */

void __thiscall objOBJ::SetStateRendNo(objOBJ *this,int param_1)

{
  uint uVar1;
  objOBJ *poVar2;
  objOBJ *local_8;
  int local_4;
  
  poVar2 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    poVar2 = local_8;
  }
  uVar1 = *(uint *)(this + 0x24);
  *(uint *)(this + 0x24) = uVar1 & ~param_1;
  if ((param_1 & 0x3fffU) != 0) {
    *(uint *)(this + 0x24) = uVar1 & ~param_1 & 0xdfffffff;
  }
  for (; (poVar2 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar2))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetStateRendNo(local_8,param_1);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC1D0 */

void __thiscall objOBJ::SetStateRendYes(objOBJ *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x24) | param_1;
  *(uint *)(this + 0x24) = uVar1;
  if (((char)uVar1 < '\0') && ((uVar1 & 0x40) != 0)) {
    if ((char)param_1 < '\0') {
      *(uint *)(this + 0x24) = uVar1 & 0xffffffbf;
    }
    if ((param_1 & 0x40U) != 0) {
      *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xffffff7f;
    }
  }
  if ((param_1 & 0x3fffU) != 0) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) & 0xdfffffff;
  }
  if ((*(uint *)(this + 0x24) & 0x800) != 0) {
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 2;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC220 */

void __thiscall objOBJ::SetStateRendNo(objOBJ *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x24);
  *(uint *)(this + 0x24) = uVar1 & ~param_1;
  if ((param_1 & 0x3fffU) != 0) {
    *(uint *)(this + 0x24) = uVar1 & ~param_1 & 0xdfffffff;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC260 */

void __thiscall objOBJ::SetStateVBNo(objOBJ *this,int param_1)

{
  int iVar1;
  objOBJ *poVar2;
  objOBJ *local_8;
  int local_4;
  
  poVar2 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    poVar2 = local_8;
  }
  iVar1 = *(int *)(this + 0x28);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x66) = *(uint *)(iVar1 + 0x66) & ~param_1;
  }
  for (; (poVar2 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar2))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetStateVBNo(local_8,param_1);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC2C0 */

void __thiscall
objOBJ::SetStateProcYes(objOBJ *this,int param_1,_func_int_objOBJ_ptr_void_ptr *param_2)

{
  int iVar1;
  objOBJ *poVar2;
  void *unaff_ESI;
  objOBJ *unaff_EDI;
  uint in_stack_0000000c;
  _func_int_objOBJ_ptr_void_ptr *in_stack_00000010;
  objOBJ *local_8;
  int local_4;
  
  poVar2 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    poVar2 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    local_8 = poVar2;
  }
  if ((param_2 == (_func_int_objOBJ_ptr_void_ptr *)0x0) ||
     (iVar1 = (*param_2)(unaff_EDI,unaff_ESI), iVar1 != 0)) {
    *(uint *)(this + 8) = *(uint *)(this + 8) | in_stack_0000000c;
  }
  for (; (poVar2 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar2))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetStateProcYes(local_8,in_stack_0000000c,in_stack_00000010);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC350 */

void __thiscall
objOBJ::SetStateProcNo(objOBJ *this,int param_1,_func_int_objOBJ_ptr_void_ptr *param_2)

{
  int iVar1;
  objOBJ *poVar2;
  void *unaff_ESI;
  objOBJ *unaff_EDI;
  uint in_stack_0000000c;
  objOBJ *local_8;
  int local_4;
  
  poVar2 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    poVar2 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    local_8 = poVar2;
  }
  if ((param_2 == (_func_int_objOBJ_ptr_void_ptr *)0x0) ||
     (iVar1 = (*param_2)(unaff_EDI,unaff_ESI), iVar1 != 0)) {
    *(uint *)(this + 8) = *(uint *)(this + 8) & ~in_stack_0000000c;
  }
  for (; (poVar2 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar2))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetStateProcNo(local_8,in_stack_0000000c,(_func_int_objOBJ_ptr_void_ptr *)0x0);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC3C0 */

void __thiscall objOBJ::PropagateStateProc(objOBJ *this,int param_1,int param_2)

{
  uint uVar1;
  objOBJ *poVar2;
  objOBJ *local_8;
  int local_4;
  
  poVar2 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    poVar2 = local_8;
  }
  uVar1 = *(uint *)(this + 8);
  *(uint *)(this + 8) = uVar1 | param_2;
  for (; (poVar2 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar2))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    PropagateStateProc(local_8,param_1,(uVar1 | param_2) & param_1);
    local_4 = 1;
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC420 */

void __thiscall objOBJ::SetMtlCoeff(objOBJ *this,mtlCOEFF *param_1)

{
  int iVar1;
  objOBJ *poVar2;
  objOBJ *local_8;
  int local_4;
  
  poVar2 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    local_8 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    poVar2 = local_8;
  }
  if (0 < *(int *)(this + 0x10)) {
    iVar1 = *(int *)(*(int *)(this + 0x28) + 0x18);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)param_1;
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_1 + 0xc);
  }
  for (; (poVar2 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar2))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    SetMtlCoeff(local_8,param_1);
    local_4 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:Obj_misc.cpp
   addr: 004BC4A0 */

void __thiscall objOBJ::NormalizeTextCoord(objOBJ *this,int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  float local_c;
  float local_8;
  float local_4;
  
  iVar4 = param_1;
  local_c = -DAT_005db8b8;
  local_4 = DAT_005db8b8;
  uVar8 = (uint)*(ushort *)(*(int *)(this + 0x28) + 6 + param_1 * 2);
  local_8 = local_c;
  fVar3 = DAT_005db8b8;
  if (uVar8 != 0) {
    pfVar6 = *(float **)(*(int *)(this + 0x28) + 0xc + param_1 * 4);
    do {
      if (*pfVar6 <= fVar3) {
        fVar3 = *pfVar6;
      }
      if (local_8 <= *pfVar6) {
        local_8 = *pfVar6;
      }
      if (pfVar6[1] <= local_4) {
        local_4 = pfVar6[1];
      }
      if (local_c <= pfVar6[1]) {
        local_c = pfVar6[1];
      }
      pfVar6 = pfVar6 + 2;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (___real_c2c80000 <= fVar3) {
    if (___real_42c80000 < local_8) {
      param_1 = (int)(1.0 < _DAT_005db8b4);
      if ((float)param_1 == ___real_00000000) {
        dVar9 = floor((double)local_8);
        local_8 = (float)dVar9;
      }
      iVar5 = *(int *)(this + 0x28);
      iVar7 = 0;
      if (*(short *)(iVar5 + 6 + iVar4 * 2) != 0) {
        do {
          iVar2 = *(int *)(iVar5 + 0xc + iVar4 * 4);
          iVar5 = iVar7 * 8;
          iVar1 = iVar7 * 8;
          iVar7 = iVar7 + 1;
          *(float *)(iVar2 + iVar1) = *(float *)(iVar2 + iVar5) - local_8;
          iVar5 = *(int *)(this + 0x28);
        } while (iVar7 < (int)(uint)*(ushort *)(iVar5 + 6 + iVar4 * 2));
      }
    }
  }
  else {
    param_1 = (int)(1.0 < _DAT_005db8b4);
    if ((float)param_1 == ___real_00000000) {
      dVar9 = floor((double)fVar3);
      fVar3 = (float)dVar9;
    }
    iVar5 = *(int *)(this + 0x28);
    iVar7 = 0;
    if (*(short *)(iVar5 + 6 + iVar4 * 2) != 0) {
      do {
        iVar2 = *(int *)(iVar5 + 0xc + iVar4 * 4);
        iVar5 = iVar7 * 8;
        iVar1 = iVar7 * 8;
        iVar7 = iVar7 + 1;
        *(float *)(iVar2 + iVar1) = *(float *)(iVar2 + iVar5) - fVar3;
        iVar5 = *(int *)(this + 0x28);
      } while (iVar7 < (int)(uint)*(ushort *)(iVar5 + 6 + iVar4 * 2));
    }
  }
  if (___real_c2c80000 <= local_4) {
    if (___real_42c80000 < local_c) {
      param_1 = (int)(1.0 < _DAT_005db8b4);
      if ((float)param_1 == ___real_00000000) {
        dVar9 = floor((double)local_c);
        local_c = (float)dVar9;
      }
      iVar5 = *(int *)(this + 0x28);
      iVar7 = 0;
      if (*(short *)(iVar5 + 6 + iVar4 * 2) != 0) {
        do {
          iVar2 = *(int *)(iVar5 + 0xc + iVar4 * 4);
          iVar5 = iVar7 * 8;
          iVar1 = iVar7 * 8;
          iVar7 = iVar7 + 1;
          *(float *)(iVar2 + 4 + iVar1) = *(float *)(iVar2 + 4 + iVar5) - local_c;
          iVar5 = *(int *)(this + 0x28);
        } while (iVar7 < (int)(uint)*(ushort *)(iVar5 + 6 + iVar4 * 2));
      }
    }
  }
  else {
    param_1 = (int)(1.0 < _DAT_005db8b4);
    if ((float)param_1 == ___real_00000000) {
      dVar9 = floor((double)local_4);
      local_4 = (float)dVar9;
    }
    iVar5 = *(int *)(this + 0x28);
    iVar7 = 0;
    if (*(short *)(iVar5 + 6 + iVar4 * 2) != 0) {
      do {
        iVar2 = *(int *)(iVar5 + 0xc + iVar4 * 4);
        iVar5 = iVar7 * 8;
        iVar1 = iVar7 * 8;
        iVar7 = iVar7 + 1;
        *(float *)(iVar2 + 4 + iVar1) = *(float *)(iVar2 + 4 + iVar5) - local_4;
        iVar5 = *(int *)(this + 0x28);
      } while (iVar7 < (int)(uint)*(ushort *)(iVar5 + 6 + iVar4 * 2));
      return;
    }
  }
  return;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC7B0 */

m3dSPL * __fastcall objConvertSpl(objOBJ *param_1)

{
  m3dSPL *pmVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (((iVar2 != 0) && (iVar2 % 3 == 0)) &&
     (pmVar1 = m3dSPL::Make(5,iVar2 / 3), pmVar1 != (m3dSPL *)0x0)) {
    objOBJ::TransformPoints(param_1,(m3dMATR *)0x0,(m3dV *)0x0);
    local_4 = 0;
    if (0 < *(int *)(pmVar1 + 0xc)) {
      iVar2 = 2;
      do {
        iVar3 = *(int *)(pmVar1 + 0x10);
        if (local_4 < *(int *)(pmVar1 + 0x10)) {
          iVar3 = local_4;
        }
        iVar3 = *(int *)(pmVar1 + 0x18) * iVar3 + *(int *)(pmVar1 + 0x24);
        objOBJ::GetTransformedVert(param_1,iVar2 + -2,(m3dV *)(iVar3 + 0x10));
        objOBJ::GetTransformedVert(param_1,iVar2 + -1,(m3dV *)(iVar3 + 4));
        objOBJ::GetTransformedVert(param_1,iVar2,(m3dV *)(iVar3 + 0x1c));
        iVar2 = iVar2 + 3;
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(pmVar1 + 0xc));
    }
    return pmVar1;
  }
  return (m3dSPL *)0x0;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC870 */

objOBJ * __fastcall objFind(objOBJ *param_1,objFILTER *param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  objFILTER *unaff_EBX;
  objOBJ *poVar5;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    iVar3 = (*(code *)**(undefined4 **)param_2)(param_1);
    poVar5 = poVar1;
    if (iVar3 != 0) {
      return param_1;
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
        poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
      poVar4 = objFind(poVar5,unaff_EBX);
      if (poVar4 != (objOBJ *)0x0) {
        return poVar4;
      }
      bVar2 = true;
    }
  }
  return (objOBJ *)0x0;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC8D0 */

objOBJ * __fastcall objFind(objOBJ *param_1,_func_int_objOBJ_ptr_void_ptr *param_2,void *param_3)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  objOBJ *poVar5;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    iVar3 = (*(code *)objFILTER_FUNC::_vftable_)(param_1);
    poVar5 = poVar1;
    if (iVar3 != 0) {
      return param_1;
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
        poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
      poVar4 = objFind(poVar5,(objFILTER *)&stack0xfffffff0);
      if (poVar4 != (objOBJ *)0x0) {
        return poVar4;
      }
      bVar2 = true;
    }
  }
  return (objOBJ *)0x0;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC950 */

objOBJ * __thiscall objOBJ::FindObjMaxNVert(objOBJ *this)

{
  objOBJ *poVar1;
  objOBJ *poVar2;
  objOBJ *poVar3;
  objOBJ *this_00;
  int local_4;
  
  poVar2 = (objOBJ *)0x0;
  local_4 = 0;
  poVar3 = poVar2;
  if (this != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(this + 0x38);
    poVar3 = (objOBJ *)0x0;
    this_00 = poVar1;
    if ((((byte)this[8] & 0x3f) == 0) && (0 < *(int *)(this + 0x14))) {
      poVar3 = this;
      local_4 = *(int *)(this + 0x14);
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((poVar2 == (objOBJ *)0x0 || (this_00 != poVar1))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      poVar2 = FindObjMaxNVert(this_00,&local_4);
      if (poVar2 != (objOBJ *)0x0) {
        poVar3 = poVar2;
      }
      poVar2 = (objOBJ *)0x1;
    }
  }
  return poVar3;
}




/* from: engine:Obj_misc.cpp
   addr: 004BC9B0 */

objOBJ * __thiscall objOBJ::FindObjMaxNVert(objOBJ *this,int *param_1)

{
  objOBJ *poVar1;
  bool bVar2;
  objOBJ *poVar3;
  objOBJ *poVar4;
  objOBJ *this_00;
  
  if (this != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(this + 0x38);
    bVar2 = false;
    poVar4 = (objOBJ *)0x0;
    this_00 = poVar1;
    if ((((byte)this[8] & 0x3f) == 0) && (*param_1 < *(int *)(this + 0x14))) {
      *param_1 = *(int *)(this + 0x14);
      poVar4 = this;
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (this_00 != poVar1))));
        this_00 = *(objOBJ **)(this_00 + 0x30)) {
      poVar3 = FindObjMaxNVert(this_00,param_1);
      if (poVar3 != (objOBJ *)0x0) {
        poVar4 = poVar3;
      }
      bVar2 = true;
    }
    return poVar4;
  }
  return (objOBJ *)0x0;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCA10 */

int __fastcall objOBJ::CompMtlTbl(objMTL_TBL *param_1,objMTL_TBL *param_2)

{
  int iVar1;
  objMTL_TBL *poVar2;
  int local_4;
  
  local_4 = 0;
  poVar2 = param_2;
  do {
    iVar1 = (int)*(short *)(param_2 + 100);
    if ((int)*(short *)(param_1 + 100) < (int)*(short *)(param_2 + 100)) {
      iVar1 = (int)*(short *)(param_1 + 100);
    }
    if (iVar1 <= local_4) {
      return (int)*(short *)(param_1 + 100) - (int)*(short *)(param_2 + 100);
    }
    iVar1 = *(int *)poVar2;
    if (*(int *)(poVar2 + ((int)param_1 - (int)param_2)) == 0) {
      if (iVar1 != 0) {
        return -1;
      }
    }
    else {
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = stricmp((char *)(*(int *)(poVar2 + ((int)param_1 - (int)param_2)) + 8),
                      (char *)(iVar1 + 8));
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    local_4 = local_4 + 1;
    poVar2 = poVar2 + 0x19;
  } while( true );
}




/* from: engine:Obj_misc.cpp
   addr: 004BCAA0 */

objOBJ * __fastcall objFindName(objOBJ *param_1,char *param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  objOBJ *poVar5;
  
  if (param_1 == (objOBJ *)0x0) {
    return (objOBJ *)0x0;
  }
  if (param_2 != (char *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    iVar3 = (*(code *)objFILTER_NAME::_vftable_)(param_1);
    poVar5 = poVar1;
    if (iVar3 != 0) {
      return param_1;
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
        poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
      poVar4 = objFind(poVar5,(objFILTER *)&stack0xfffffff4);
      if (poVar4 != (objOBJ *)0x0) {
        return poVar4;
      }
      bVar2 = true;
    }
    return (objOBJ *)0x0;
  }
  return (objOBJ *)0x0;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCB20 */

objOBJ * __fastcall objFindNameN(objOBJ *param_1,char *param_2,int param_3)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  objOBJ *poVar5;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    iVar3 = (*(code *)objFILTER_NAME_LEN::_vftable_)(param_1);
    poVar5 = poVar1;
    if (iVar3 != 0) {
      return param_1;
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
        poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
      poVar4 = objFind(poVar5,(objFILTER *)&stack0xfffffff0);
      if (poVar4 != (objOBJ *)0x0) {
        return poVar4;
      }
      bVar2 = true;
    }
  }
  return (objOBJ *)0x0;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCBA0 */

objOBJ * __fastcall objFindID(objOBJ *param_1,int param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  objOBJ *poVar5;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    iVar3 = (*(code *)objFILTER_ID::_vftable_)(param_1);
    poVar5 = poVar1;
    if (iVar3 != 0) {
      return param_1;
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
        poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
      poVar4 = objFind(poVar5,(objFILTER *)&stack0xfffffff4);
      if (poVar4 != (objOBJ *)0x0) {
        return poVar4;
      }
      bVar2 = true;
    }
  }
  return (objOBJ *)0x0;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCC10 */

objOBJ * __fastcall objFindAnimNmb(objOBJ *param_1,int param_2)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  objOBJ *poVar5;
  
  if (param_1 != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(param_1 + 0x38);
    bVar2 = false;
    iVar3 = (*(code *)objFILTER_ANIM_NMB::_vftable_)(param_1);
    poVar5 = poVar1;
    if (iVar3 != 0) {
      return param_1;
    }
    for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar5 != poVar1))));
        poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
      poVar4 = objFind(poVar5,(objFILTER *)&stack0xfffffff4);
      if (poVar4 != (objOBJ *)0x0) {
        return poVar4;
      }
      bVar2 = true;
    }
  }
  return (objOBJ *)0x0;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCC80 */

int __thiscall objFILTER_NAME::IsUse(objFILTER_NAME *this,objOBJ *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = *(byte **)(param_1 + 0x18);
  if (pbVar2 == (byte *)0x0) {
    return (int)pbVar2;
  }
  pbVar3 = *(byte **)(this + 4);
  if (pbVar3 == (byte *)0x0) {
    return 0;
  }
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return (uint)(1 - bVar4 == (uint)(bVar4 != 0));
}




/* from: engine:Obj_misc.cpp
   addr: 004BCCF0 */

int __fastcall
objMakePtrList(objOBJ **param_1,int param_2,objFILTER *param_3,objOBJ **param_4,int param_5)

{
  objOBJ *poVar1;
  objOBJ *poVar2;
  bool bVar3;
  int iVar4;
  objOBJ *poVar5;
  int local_10;
  int local_c;
  objOBJ **local_8;
  int local_4;
  
  local_10 = 0;
  local_c = 0;
  iVar4 = 0;
  local_8 = param_1;
  local_4 = param_2;
  if (0 < param_2) {
    do {
      poVar1 = local_8[local_c];
      if (poVar1 != (objOBJ *)0x0) {
        poVar2 = *(objOBJ **)(poVar1 + 0x38);
        bVar3 = false;
        poVar5 = poVar2;
        if ((param_3 == (objFILTER *)0x0) ||
           (iVar4 = (*(code *)**(undefined4 **)param_3)(poVar1), iVar4 != 0)) {
          if (param_5 <= local_10) goto LAB_004bcd86;
          param_4[local_10] = poVar1;
          local_10 = local_10 + 1;
        }
        while ((poVar2 != (objOBJ *)0x0 &&
               (((!bVar3 || (poVar5 != poVar2)) &&
                (iVar4 = _objBuildObjPtrList(poVar5,param_3,param_4,param_5,&local_10), iVar4 != 0))
               ))) {
          poVar5 = *(objOBJ **)(poVar5 + 0x30);
          bVar3 = true;
        }
      }
LAB_004bcd86:
      local_c = local_c + 1;
      iVar4 = local_10;
    } while (local_c < local_4);
  }
  return iVar4;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCDB0 */

int __fastcall objMakePtrList(objOBJ **param_1,int param_2,objOBJ **param_3,int param_4)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  int local_10;
  int local_c;
  objOBJ **local_8;
  int local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = param_1;
  local_4 = param_2;
  if (0 < param_2) {
    do {
      poVar4 = local_8[local_c];
      if (poVar4 != (objOBJ *)0x0) {
        poVar1 = *(objOBJ **)(poVar4 + 0x38);
        bVar2 = false;
        if (local_10 < param_4) {
          param_3[local_10] = poVar4;
          local_10 = local_10 + 1;
          poVar4 = poVar1;
          while ((poVar1 != (objOBJ *)0x0 &&
                 (((!bVar2 || (poVar4 != poVar1)) &&
                  (iVar3 = _objBuildObjPtrList(poVar4,(objFILTER *)0x0,param_3,param_4,&local_10),
                  iVar3 != 0))))) {
            poVar4 = *(objOBJ **)(poVar4 + 0x30);
            bVar2 = true;
          }
        }
      }
      local_c = local_c + 1;
    } while (local_c < local_4);
    return local_10;
  }
  return 0;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCE60 */

int __fastcall objMakePtrListID(objOBJ *param_1,objOBJ **param_2,int param_3)

{
  short sVar1;
  objOBJ *poVar2;
  bool bVar3;
  int iVar4;
  objOBJ *poVar5;
  int local_8;
  objOBJ **local_4;
  
  local_8 = 0;
  if (param_1 != (objOBJ *)0x0) {
    sVar1 = *(short *)(param_1 + 0x1c);
    poVar2 = *(objOBJ **)(param_1 + 0x38);
    bVar3 = false;
    if ((sVar1 < param_3) && (-1 < sVar1)) {
      param_2[sVar1] = param_1;
      local_8 = 1;
      poVar5 = poVar2;
      local_4 = param_2;
      while ((poVar2 != (objOBJ *)0x0 &&
             (((!bVar3 || (poVar5 != poVar2)) &&
              (iVar4 = _objIncludePtrListID(poVar5,local_4,param_3,&local_8), iVar4 != 0))))) {
        poVar5 = *(objOBJ **)(poVar5 + 0x30);
        bVar3 = true;
      }
    }
  }
  return local_8;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCEE0 */

int __fastcall objMakeTexList(objOBJ *param_1,int param_2,txmTEXTURE **param_3,int param_4)

{
  DAT_008b6704 = 0;
  DAT_008b6714 = param_4;
  _objIncludeTexList(param_1,param_2,param_3);
  return DAT_008b6704;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCF10 */

int __thiscall objOBJ::IsAncestor(objOBJ *this,objOBJ *param_1)

{
  if (this != param_1) {
    do {
      param_1 = *(objOBJ **)(param_1 + 0x2c);
      if (param_1 == (objOBJ *)0x0) {
        return 0;
      }
    } while (this != param_1);
  }
  return 1;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCF40 */

int __cdecl _objCmpFace(void *param_1,void *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
                    /* WARNING: Load size is inaccurate */
  iVar3 = *(int *)(*(int *)(*(int *)(DAT_008b6710 + 0x28) + 0x18) + 2);
                    /* WARNING: Load size is inaccurate */
  iVar3 = objOBJ::CompMtlTbl((objMTL_TBL *)((uint)*param_1 * 0x70 + iVar3),
                             (objMTL_TBL *)((uint)*param_2 * 0x70 + iVar3));
  if (iVar3 == 0) {
    iVar4 = 0;
    iVar3 = (int)param_2 - (int)param_1;
    do {
      param_1 = (void *)((int)param_1 + 2);
                    /* WARNING: Load size is inaccurate */
      uVar1 = *param_1;
      uVar2 = *(ushort *)(iVar3 + (int)param_1);
      if (uVar1 < uVar2) {
        return -1;
      }
      if (uVar1 >= uVar2 && uVar1 != uVar2) {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    iVar3 = 0;
  }
  return iVar3;
}




/* from: engine:Obj_misc.cpp
   addr: 004BCFD0 */

int __fastcall
_objBuildObjPtrList(objOBJ *param_1,objFILTER *param_2,objOBJ **param_3,int param_4,int *param_5)

{
  objOBJ *poVar1;
  bool bVar2;
  int iVar3;
  objOBJ *poVar4;
  
  if (param_1 == (objOBJ *)0x0) {
    return 1;
  }
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  bVar2 = false;
  poVar4 = poVar1;
  if ((param_2 == (objFILTER *)0x0) ||
     (iVar3 = (*(code *)**(undefined4 **)param_2)(param_1), iVar3 != 0)) {
    if (param_4 <= *param_5) {
      return 0;
    }
    param_3[*param_5] = param_1;
    *param_5 = *param_5 + 1;
  }
  for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar4 != poVar1))));
      poVar4 = *(objOBJ **)(poVar4 + 0x30)) {
    iVar3 = _objBuildObjPtrList(poVar4,param_2,param_3,param_4,param_5);
    if (iVar3 == 0) {
      return 0;
    }
    bVar2 = true;
  }
  return 1;
}




/* from: engine:Obj_misc.cpp
   addr: 004BD080 */

int __fastcall _objIncludePtrListID(objOBJ *param_1,objOBJ **param_2,int param_3,int *param_4)

{
  short sVar1;
  objOBJ *poVar2;
  bool bVar3;
  int iVar4;
  objOBJ *poVar5;
  
  if (param_1 != (objOBJ *)0x0) {
    sVar1 = *(short *)(param_1 + 0x1c);
    poVar2 = *(objOBJ **)(param_1 + 0x38);
    bVar3 = false;
    if (param_3 <= sVar1) {
      return 0;
    }
    if (sVar1 < 0) {
      return 0;
    }
    param_2[sVar1] = param_1;
    *param_4 = *param_4 + 1;
    for (poVar5 = poVar2; (poVar2 != (objOBJ *)0x0 && ((!bVar3 || (poVar5 != poVar2))));
        poVar5 = *(objOBJ **)(poVar5 + 0x30)) {
      iVar4 = _objIncludePtrListID(poVar5,param_2,param_3,param_4);
      if (iVar4 == 0) {
        return 0;
      }
      bVar3 = true;
    }
  }
  return 1;
}




/* from: engine:Obj_misc.cpp
   addr: 004BD100 */

int __fastcall _objIncludeTexList(objOBJ *param_1,int param_2,txmTEXTURE **param_3)

{
  objOBJ *poVar1;
  bool bVar2;
  ushort *puVar3;
  txmTEXTURE *ptVar4;
  int iVar5;
  int iVar6;
  objOBJ *poVar7;
  int iVar8;
  
  iVar8 = 0;
  if (param_1 == (objOBJ *)0x0) {
    return 1;
  }
  poVar1 = *(objOBJ **)(param_1 + 0x38);
  bVar2 = false;
  poVar7 = poVar1;
  if (0 < *(int *)(param_1 + 0x10)) {
    iVar6 = 0;
    puVar3 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
    if (*puVar3 != 0) {
      do {
        ptVar4 = objOBJ::GetFaceTexRendMtl
                           (param_1,(uint)*(ushort *)(*(int *)(puVar3 + 1) + 0x68 + iVar8),param_2);
        if (ptVar4 != (txmTEXTURE *)0x0) {
          iVar5 = 0;
          if (0 < DAT_008b6704) {
            do {
              if (param_3[iVar5] == ptVar4) {
                if (iVar5 < DAT_008b6704) goto LAB_004bd1ae;
                break;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < DAT_008b6704);
          }
          if (DAT_008b6714 <= DAT_008b6704) break;
          param_3[DAT_008b6704] = ptVar4;
          DAT_008b6704 = DAT_008b6704 + 1;
        }
LAB_004bd1ae:
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x70;
        puVar3 = *(ushort **)(*(int *)(param_1 + 0x28) + 0x18);
      } while (iVar6 < (int)(uint)*puVar3);
    }
  }
  for (; (poVar1 != (objOBJ *)0x0 && ((!bVar2 || (poVar7 != poVar1))));
      poVar7 = *(objOBJ **)(poVar7 + 0x30)) {
    iVar8 = _objIncludeTexList(poVar7,param_2,param_3);
    if (iVar8 == 0) {
      return 0;
    }
    bVar2 = true;
  }
  return 1;
}




/* from: engine:Obj_misc.cpp
   addr: 004BD220 */

int __thiscall objFILTER_ID::IsUse(objFILTER_ID *this,objOBJ *param_1)

{
  return (uint)((int)*(short *)(param_1 + 0x1c) == *(int *)(this + 4));
}




/* from: engine:Obj_misc.cpp
   addr: 004BD250 */

int __thiscall objFILTER_ANIM_NMB::IsUse(objFILTER_ANIM_NMB *this,objOBJ *param_1)

{
  return (uint)((int)*(short *)(param_1 + 0x20) == *(int *)(this + 4));
}

