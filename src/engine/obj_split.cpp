
/* from: engine:obj_split.cpp
   addr: 004EDDC0 */

objSPLIT * __fastcall objSPLIT::Make(void)

{
  objSPLIT *poVar1;
  objSPLIT *poVar2;
  int iVar3;
  
  poVar1 = (objSPLIT *)operator_new(0x28);
  if (poVar1 != (objSPLIT *)0x0) {
    *(undefined2 *)poVar1 = 0;
    *(undefined4 *)(poVar1 + 2) = 0;
    poVar2 = poVar1 + 8;
    iVar3 = 4;
    do {
      poVar2[-2] = (objSPLIT)0x0;
      poVar2[-1] = (objSPLIT)0x0;
      *poVar2 = (objSPLIT)0x0;
      poVar2[1] = (objSPLIT)0x0;
      poVar2 = poVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined2 *)(poVar1 + 0x16) = 0;
    return poVar1;
  }
  return (objSPLIT *)0x0;
}




/* from: engine:obj_split.cpp
   addr: 004EDE00 */

int __thiscall objOBJ::CreateFaceSplitPerFace(objOBJ *this)

{
  ushort *puVar1;
  void *pvVar2;
  objFACE *poVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  int local_8;
  
  if (*(int *)(this + 0x10) == 0) {
    return 1;
  }
  puVar1 = (ushort *)operator_new(0x28);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    objMTL_CTRL_TBL::objMTL_CTRL_TBL((objMTL_CTRL_TBL *)(puVar1 + 3));
    iVar7 = *(int *)(this + 0x10);
    pvVar2 = apRealloc(*(void **)(puVar1 + 1),iVar7 * 0x70);
    *(void **)(puVar1 + 1) = pvVar2;
    if (pvVar2 != (void *)0x0) {
      uVar5 = (uint)*puVar1;
      if ((int)uVar5 < iVar7) {
        iVar6 = uVar5 * 0x70;
        do {
          puVar8 = (undefined4 *)(*(int *)(puVar1 + 1) + iVar6);
          for (iVar4 = 0x1c; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          *(short *)(*(int *)(puVar1 + 1) + 0x66 + iVar6) = (short)uVar5;
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0x70;
        } while ((int)uVar5 < iVar7);
      }
      *puVar1 = (ushort)iVar7;
      iVar7 = 0;
      if (0 < *(int *)(this + 0x10)) {
        local_8 = 0;
        do {
          *(short *)(*(int *)(puVar1 + 1) + 0x68 + local_8) = (short)iVar7;
          *(undefined2 *)(*(int *)(puVar1 + 1) + 0x6a + local_8) = 1;
          if (*(int *)(*(int *)(this + 0x28) + 0x18) != 0) {
            poVar3 = GetFace(this,iVar7);
            puVar8 = (undefined4 *)
                     (*(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2) +
                     (uint)*(ushort *)poVar3 * 0x70);
            puVar10 = (undefined4 *)(*(int *)(puVar1 + 1) + local_8);
            for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
            *(undefined2 *)puVar10 = *(undefined2 *)puVar8;
          }
          local_8 = local_8 + 0x70;
          *(short *)((uint)*(byte *)(*(int **)(this + 0x28) + 1) * iVar7 + **(int **)(this + 0x28))
               = (short)iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(this + 0x10));
      }
      if (*(int *)(*(int *)(this + 0x28) + 0x18) != 0) {
        puVar9 = (ushort *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 6);
        puVar11 = puVar1 + 3;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)puVar11 = *(undefined4 *)puVar9;
          puVar9 = puVar9 + 2;
          puVar11 = puVar11 + 2;
        }
        *puVar11 = *puVar9;
      }
      pvVar2 = *(void **)(*(int *)(this + 0x28) + 0x18);
      if (pvVar2 != (void *)0x0) {
        apFree(*(void **)((int)pvVar2 + 2));
        operator_delete(pvVar2);
      }
      *(ushort **)(*(int *)(this + 0x28) + 0x18) = puVar1;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_split.cpp
   addr: 004EDF80 */

void __thiscall objOBJ::SetDefaultTCHWIndID(objOBJ *this)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  char *pcVar9;
  float *pfVar10;
  uint uVar11;
  ushort *puVar12;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  
  if (*(int *)(this + 0x10) != 0) {
    local_c = 0;
    local_10 = 0;
    cVar5 = '\0';
    puVar12 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
    local_20 = 0;
    if (0 < (short)puVar12[0xb]) {
      local_1c = 0;
      do {
        iVar7 = local_1c + 6 + (int)puVar12;
        iVar6 = 0;
        local_18 = -1;
        if (0 < local_1c) {
          pcVar9 = (char *)((int)puVar12 + 7);
          do {
            if (*(char *)(iVar7 + 1) == *pcVar9) {
              local_18 = iVar6;
            }
            iVar6 = iVar6 + 1;
            pcVar9 = pcVar9 + 4;
          } while (iVar6 < local_20);
        }
        bVar4 = false;
        uVar11 = (uint)*puVar12;
        if (uVar11 != 0) {
          psVar8 = (short *)(*(int *)(puVar12 + 1) + 100);
          do {
            iVar6 = (int)*psVar8;
            if (0 < iVar6) {
              pfVar10 = (float *)(psVar8 + -0x30);
              do {
                if ((local_20 == *(char *)(pfVar10 + 5)) &&
                   ((local_24 = (uint)(ABS(*pfVar10 - ___real_3f800000) < _DAT_005dc410),
                    (float)local_24 == ___real_00000000 ||
                    (local_24 = (uint)(ABS(pfVar10[1] - ___real_3f800000) < _DAT_005dc410),
                    (float)local_24 == ___real_00000000)))) {
                  bVar4 = true;
                }
                pfVar10 = (float *)((int)pfVar10 + 0x19);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            psVar8 = psVar8 + 0x38;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if ((local_18 == -1) || (bVar4)) {
          *(char *)(iVar7 + 3) = cVar5;
          cVar5 = cVar5 + '\x01';
        }
        else {
          *(undefined1 *)(iVar7 + 3) = *(undefined1 *)((int)puVar12 + local_18 * 4 + 9);
        }
        if (*(char *)(iVar7 + 2) == '\x03') {
          local_10 = iVar7;
        }
        if (*(char *)(iVar7 + 2) == '\x01') {
          local_c = iVar7;
        }
        local_1c = local_1c + 4;
        local_20 = local_20 + 1;
        puVar12 = *(ushort **)(*(int *)(this + 0x28) + 0x18);
      } while (local_20 < (short)puVar12[0xb]);
      if ((local_10 != 0) && (local_c != 0)) {
        bVar2 = *(byte *)(local_10 + 3);
        bVar3 = *(byte *)(local_c + 3);
        if (bVar2 < bVar3) {
          iVar6 = 0;
          iVar7 = *(int *)(*(int *)(this + 0x28) + 0x18);
          if (0 < *(short *)(iVar7 + 0x16)) {
            do {
              pbVar1 = (byte *)(iVar7 + 9 + iVar6 * 4);
              if (*pbVar1 == bVar2) {
                *pbVar1 = bVar3;
              }
              else if (*pbVar1 == bVar3) {
                *pbVar1 = bVar2;
              }
              iVar6 = iVar6 + 1;
              iVar7 = *(int *)(*(int *)(this + 0x28) + 0x18);
            } while (iVar6 < *(short *)(iVar7 + 0x16));
          }
        }
      }
    }
  }
  return;
}




/* from: engine:obj_split.cpp
   addr: 004EE1A0 */

int __thiscall objOBJ::CompressFaceSplit(objOBJ *this)

{
  ushort uVar1;
  void *pvVar2;
  objFACE *poVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  undefined4 *puVar12;
  ushort *puVar13;
  int *local_b8;
  int *local_b4;
  int local_b0;
  undefined4 *local_ac;
  int *local_a8;
  undefined4 *local_a4;
  int local_a0 [20];
  undefined4 local_50 [20];
  
  puVar8 = (ushort *)0x0;
  local_a8 = (int *)0x0;
  local_a4 = (undefined4 *)0x0;
  if (*(int *)(this + 0x28) != 0) {
    if (0 < *(int *)(this + 0x10)) {
      local_b4 = local_a0;
      puVar10 = local_50;
      piVar9 = (int *)0x0;
      local_b0 = 0x14;
      local_b8 = (int *)0x0;
      local_ac = puVar10;
      if (0 < *(int *)(this + 0x10)) {
        do {
          if (puVar8 == (ushort *)0x0) {
            local_b8 = (int *)((int)piVar9 + 1);
            local_b4[(int)piVar9] = 0;
            puVar10[(int)piVar9] = 0;
            piVar9 = local_b8;
          }
          else {
            poVar3 = GetFace(this,(int)puVar8 + -1);
            uVar1 = *(ushort *)poVar3;
            iVar7 = *(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2);
            poVar3 = GetFace(this,(int)puVar8);
            iVar7 = CompMtlTbl((objMTL_TBL *)((uint)uVar1 * 0x70 + iVar7),
                               (objMTL_TBL *)
                               ((uint)*(ushort *)poVar3 * 0x70 +
                               *(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2)));
            puVar10 = local_ac;
            if (iVar7 != 0) {
              if (local_b0 <= (int)piVar9) {
                local_a8 = (int *)apRealloc(local_a8,local_b0 << 3);
                if (local_a8 == (int *)0x0) {
                  return 0;
                }
                local_a4 = (undefined4 *)apRealloc(local_a4,local_b0 << 3);
                if (local_a4 == (undefined4 *)0x0) {
                  return 0;
                }
                if (local_b0 == 0x14) {
                  piVar9 = local_a8;
                  for (iVar7 = 0x14; iVar7 != 0; iVar7 = iVar7 + -1) {
                    *piVar9 = *local_b4;
                    local_b4 = local_b4 + 1;
                    piVar9 = piVar9 + 1;
                  }
                  puVar10 = local_a4;
                  for (iVar7 = 0x14; piVar9 = local_b8, iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar10 = *local_ac;
                    local_ac = local_ac + 1;
                    puVar10 = puVar10 + 1;
                  }
                }
                local_b0 = local_b0 * 2;
                local_b4 = local_a8;
                local_ac = local_a4;
              }
              local_b4[(int)piVar9] = (int)puVar8;
              local_ac[(int)piVar9] = 0;
              piVar9 = (int *)((int)piVar9 + 1);
              puVar10 = local_ac;
              local_b8 = piVar9;
            }
          }
          puVar8 = (ushort *)((int)puVar8 + 1);
          puVar10[(int)piVar9 + -1] = puVar10[(int)piVar9 + -1] + 1;
        } while ((int)puVar8 < *(int *)(this + 0x10));
      }
      puVar8 = (ushort *)operator_new(0x28);
      if (puVar8 == (ushort *)0x0) {
        puVar8 = (ushort *)0x0;
      }
      else {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        objMTL_CTRL_TBL::objMTL_CTRL_TBL((objMTL_CTRL_TBL *)(puVar8 + 3));
      }
      pvVar2 = apRealloc(*(void **)(puVar8 + 1),(int)piVar9 * 0x70);
      *(void **)(puVar8 + 1) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return 0;
      }
      local_b8 = (int *)(uint)*puVar8;
      if ((int)local_b8 < (int)piVar9) {
        iVar7 = (int)local_b8 * 0x70;
        do {
          puVar10 = (undefined4 *)(*(int *)(puVar8 + 1) + iVar7);
          for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          *(short *)(*(int *)(puVar8 + 1) + 0x66 + iVar7) = (short)local_b8;
          local_b8 = (int *)((int)local_b8 + 1);
          iVar7 = iVar7 + 0x70;
          puVar10 = local_ac;
        } while ((int)local_b8 < (int)piVar9);
      }
      *puVar8 = (ushort)piVar9;
      if (0 < (int)piVar9) {
        iVar7 = (int)puVar10 - (int)local_b4;
        local_b0 = 0;
        local_b8 = local_b4;
        local_b4 = piVar9;
        do {
          *(short *)(*(int *)(puVar8 + 1) + 0x68 + local_b0) = (short)*local_b8;
          *(undefined2 *)(*(int *)(puVar8 + 1) + 0x6a + local_b0) =
               *(undefined2 *)(iVar7 + (int)local_b8);
          poVar3 = GetFace(this,*local_b8);
          puVar10 = (undefined4 *)
                    ((uint)*(ushort *)poVar3 * 0x70 +
                    *(int *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 2));
          puVar12 = (undefined4 *)(*(int *)(puVar8 + 1) + local_b0);
          for (iVar5 = 0x19; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar12 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar12 = puVar12 + 1;
          }
          local_b0 = local_b0 + 0x70;
          local_b8 = local_b8 + 1;
          local_b4 = (int *)((int)local_b4 + -1);
          *(undefined2 *)puVar12 = *(undefined2 *)puVar10;
        } while (local_b4 != (int *)0x0);
      }
      iVar7 = 0;
      local_b8 = (int *)0x0;
      if (*puVar8 != 0) {
        iVar5 = *(int *)(puVar8 + 1);
        do {
          iVar6 = iVar7 + iVar5;
          iVar4 = 0;
          if (*(short *)(iVar6 + 0x6a) != 0) {
            do {
              iVar5 = (uint)*(ushort *)(iVar6 + 0x68) + iVar4;
              iVar4 = iVar4 + 1;
              *(undefined2 *)
               (iVar5 * (uint)*(byte *)(*(int **)(this + 0x28) + 1) + **(int **)(this + 0x28)) =
                   local_b8._0_2_;
              iVar5 = *(int *)(puVar8 + 1);
              iVar6 = iVar7 + iVar5;
            } while (iVar4 < (int)(uint)*(ushort *)(iVar7 + 0x6a + iVar5));
          }
          local_b8 = (int *)((int)local_b8 + 1);
          iVar7 = iVar7 + 0x70;
        } while ((int)local_b8 < (int)(uint)*puVar8);
      }
      if (*(int *)(*(int *)(this + 0x28) + 0x18) != 0) {
        puVar11 = (ushort *)(*(int *)(*(int *)(this + 0x28) + 0x18) + 6);
        puVar13 = puVar8 + 3;
        for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(undefined4 *)puVar13 = *(undefined4 *)puVar11;
          puVar11 = puVar11 + 2;
          puVar13 = puVar13 + 2;
        }
        *puVar13 = *puVar11;
      }
    }
    pvVar2 = *(void **)(*(int *)(this + 0x28) + 0x18);
    if (pvVar2 != (void *)0x0) {
      apFree(*(void **)((int)pvVar2 + 2));
      operator_delete(pvVar2);
    }
    *(ushort **)(*(int *)(this + 0x28) + 0x18) = puVar8;
    FreeSplitUnshared(this);
    apFree(local_a8);
    apFree(local_a4);
  }
  return 1;
}




/* from: engine:obj_split.cpp
   addr: 004EE520 */

int __thiscall objSPLIT::Alloc(objSPLIT *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pvVar1 = apRealloc(*(void **)(this + 2),param_1 * 0x70);
  *(void **)(this + 2) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    uVar3 = (uint)*(ushort *)this;
    if ((int)uVar3 < param_1) {
      iVar4 = uVar3 * 0x70;
      do {
        puVar5 = (undefined4 *)(*(int *)(this + 2) + iVar4);
        for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        iVar4 = iVar4 + 0x70;
        *(short *)(*(int *)(this + 2) + -10 + iVar4) = (short)uVar3;
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < param_1);
    }
    *(short *)this = (short)param_1;
    return 1;
  }
  return 0;
}




/* from: engine:obj_split.cpp
   addr: 004EE5C0 */

objSPLIT * __thiscall objSPLIT::Duplicate(objSPLIT *this)

{
  ushort uVar1;
  objSPLIT *poVar2;
  objSPLIT *poVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  objSPLIT *poVar11;
  
  poVar2 = (objSPLIT *)operator_new(0x28);
  if (poVar2 != (objSPLIT *)0x0) {
    *(ushort *)poVar2 = 0;
    *(undefined4 *)(poVar2 + 2) = 0;
    poVar3 = poVar2 + 8;
    iVar5 = 4;
    do {
      poVar3[-2] = (objSPLIT)0x0;
      poVar3[-1] = (objSPLIT)0x0;
      *poVar3 = (objSPLIT)0x0;
      poVar3[1] = (objSPLIT)0x0;
      poVar3 = poVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(ushort *)(poVar2 + 0x16) = 0;
    uVar1 = *(ushort *)this;
    uVar7 = (uint)uVar1;
    pvVar4 = apRealloc(*(void **)(poVar2 + 2),uVar7 * 0x70);
    *(void **)(poVar2 + 2) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      uVar8 = (uint)*(ushort *)poVar2;
      if (uVar8 < uVar7) {
        iVar5 = uVar8 * 0x70;
        do {
          puVar9 = (undefined4 *)(*(int *)(poVar2 + 2) + iVar5);
          for (iVar6 = 0x1c; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          iVar5 = iVar5 + 0x70;
          *(short *)(*(int *)(poVar2 + 2) + -10 + iVar5) = (short)uVar8;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar7);
      }
      *(ushort *)poVar2 = uVar1;
      puVar9 = *(undefined4 **)(this + 2);
      puVar10 = *(undefined4 **)(poVar2 + 2);
      for (uVar7 = (uint)*(ushort *)this * 0x70 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      poVar3 = this + 6;
      poVar11 = poVar2 + 6;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)poVar11 = *(undefined4 *)poVar3;
        poVar3 = poVar3 + 4;
        poVar11 = poVar11 + 4;
      }
      *(ushort *)poVar11 = *(ushort *)poVar3;
      return poVar2;
    }
  }
  return (objSPLIT *)0x0;
}




/* from: engine:obj_split.cpp
   addr: 004EE6C0 */

void __thiscall objSPLIT::RestoreFaceSplitNmb(objSPLIT *this,objOBJ *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (*(short *)this != 0) {
    iVar3 = *(int *)(this + 2);
    iVar5 = 0;
    do {
      iVar2 = iVar5 + iVar3;
      iVar1 = 0;
      if (*(short *)(iVar2 + 0x6a) != 0) {
        do {
          iVar3 = (uint)*(ushort *)(iVar2 + 0x68) + iVar1;
          iVar1 = iVar1 + 1;
          *(short *)(iVar3 * (uint)*(byte *)(*(int **)(param_1 + 0x28) + 1) +
                    **(int **)(param_1 + 0x28)) = (short)iVar4;
          iVar3 = *(int *)(this + 2);
          iVar2 = iVar5 + iVar3;
        } while (iVar1 < (int)(uint)*(ushort *)(iVar5 + 0x6a + iVar3));
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar4 < (int)(uint)*(ushort *)this);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_split.cpp
   addr: 004EE720 */

int __thiscall
objSPLIT_ENTRY::CalcTexDensity
          (objSPLIT_ENTRY *this,objOBJ *param_1,int param_2,float *param_3,float *param_4)

{
  objOBJ *poVar1;
  objOBJ *poVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  txmTEXTURE *ptVar8;
  objFACE *poVar9;
  float *pfVar10;
  undefined4 *puVar11;
  m3dV *pmVar12;
  int iVar13;
  ushort *puVar14;
  objOBJ *poVar15;
  uint uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined8 extraout_MM1;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined4 local_270 [3];
  undefined4 local_264 [58];
  int local_17c;
  float local_178 [60];
  float local_88 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_48;
  int local_44;
  uint local_40;
  float *local_3c;
  int local_38;
  objSPLIT_ENTRY *local_34;
  float *local_30;
  float local_2c;
  uint local_28;
  float local_24;
  float local_20 [3];
  float local_14 [3];
  objOBJ *local_8;
  
  pfVar6 = param_4;
  local_34 = this;
  iVar7 = objMTL_CTRL_TBL::FindMtlCtrlID
                    ((objMTL_CTRL_TBL *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 6),param_2);
  if (iVar7 != -1) {
    local_8 = (objOBJ *)(uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + 6 + iVar7 * 4);
    local_40 = (uint)*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x18) + iVar7 * 4 + 7);
    *param_4 = 0.0;
    *param_3 = 0.0;
    uVar16 = (uint)*(ushort *)(local_34 + 0x68);
    local_28 = uVar16;
    ptVar8 = objOBJ::GetFaceTexRendMtl(param_1,uVar16,param_2);
    if (ptVar8 != (txmTEXTURE *)0x0) {
      local_2c = 0.0;
      local_38 = 0;
      if (*(short *)(local_34 + 0x6a) != 0) {
        local_48 = (int)local_8 * 6;
        do {
          local_44 = *(byte *)(*(int **)(param_1 + 0x28) + 1) * uVar16 + **(int **)(param_1 + 0x28);
          local_17c = 3;
          if (((byte)*param_1 & 1) == 0) {
            poVar1 = param_1 + 0x3c;
            local_30 = local_178;
            local_24 = 0.0;
            do {
              poVar9 = objOBJ::GetFace(param_1,uVar16);
              pfVar10 = local_30;
              local_3c = local_30;
              poVar2 = (objOBJ *)
                       (*(int *)(*(int *)(param_1 + 0x28) + 0x40) +
                       (uint)*(ushort *)(poVar9 + (int)local_24 * 2 + 2) * 0xc);
              local_8 = poVar2;
              if (m3dSimdType == 0) {
                if (((uint)poVar1 & 0xf) == 0) {
                  fVar28 = *(float *)poVar2;
                  fVar29 = *(float *)(poVar2 + 4);
                  fVar4 = *(float *)(poVar2 + 8);
                  fVar26 = fVar28 * *(float *)poVar1 + *(float *)(param_1 + 0x6c) +
                           fVar29 * *(float *)(param_1 + 0x4c) + fVar4 * *(float *)(param_1 + 0x5c);
                  fVar27 = fVar28 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x70) +
                           fVar29 * *(float *)(param_1 + 0x50) + fVar4 * *(float *)(param_1 + 0x60);
                  fVar28 = fVar28 * *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x74) +
                           fVar29 * *(float *)(param_1 + 0x54) + fVar4 * *(float *)(param_1 + 100);
                }
                else {
                  fVar28 = *(float *)poVar2;
                  fVar29 = *(float *)(poVar2 + 4);
                  fVar4 = *(float *)(poVar2 + 8);
                  fVar26 = fVar28 * (float)*(undefined8 *)poVar1 +
                           fVar29 * (float)*(undefined8 *)(param_1 + 0x4c) +
                           fVar4 * (float)*(undefined8 *)(param_1 + 0x5c) +
                           (float)*(undefined8 *)(param_1 + 0x6c);
                  fVar27 = fVar28 * (float)((ulonglong)*(undefined8 *)poVar1 >> 0x20) +
                           fVar29 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) +
                           fVar4 * (float)((ulonglong)*(undefined8 *)(param_1 + 0x5c) >> 0x20) +
                           (float)((ulonglong)*(undefined8 *)(param_1 + 0x6c) >> 0x20);
                  fVar28 = fVar28 * (float)*(undefined8 *)(param_1 + 0x44) +
                           fVar29 * (float)*(undefined8 *)(param_1 + 0x54) +
                           fVar4 * (float)*(undefined8 *)(param_1 + 100) +
                           (float)*(undefined8 *)(param_1 + 0x74);
                }
                *(ulonglong *)local_30 = CONCAT44(fVar27,fVar26);
                local_30[2] = fVar28;
              }
              else if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar17 = (undefined4)*(undefined8 *)poVar2;
                uVar19 = CONCAT44(uVar17,uVar17);
                uVar17 = (undefined4)((ulonglong)*(undefined8 *)poVar2 >> 0x20);
                uVar22 = CONCAT44(uVar17,uVar17);
                uVar25 = CONCAT44(*(float *)(poVar2 + 8),*(float *)(poVar2 + 8));
                uVar20 = PackedFloatingMUL(uVar19,*(undefined8 *)poVar1);
                uVar24 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_1 + 0x4c));
                uVar21 = PackedFloatingMUL(uVar25,*(undefined8 *)(param_1 + 0x5c));
                uVar20 = PackedFloatingADD(uVar20,*(undefined8 *)(param_1 + 0x6c));
                uVar23 = PackedFloatingMUL(uVar19,*(undefined8 *)(param_1 + 0x44));
                uVar19 = PackedFloatingADD(uVar24,uVar21);
                uVar24 = PackedFloatingMUL(uVar22,*(undefined8 *)(param_1 + 0x54));
                uVar25 = PackedFloatingMUL(uVar25,*(undefined8 *)(param_1 + 100));
                uVar22 = PackedFloatingADD(uVar23,*(undefined8 *)(param_1 + 0x74));
                uVar19 = PackedFloatingADD(uVar20,uVar19);
                uVar20 = PackedFloatingADD(uVar24,uVar25);
                *(undefined8 *)local_30 = uVar19;
                uVar19 = PackedFloatingADD(uVar22,uVar20);
                pfVar10[2] = (float)uVar19;
                FastExitMediaState();
              }
              else {
                iVar7 = 0;
                do {
                  iVar13 = 0;
                  *pfVar10 = 0.0;
                  poVar15 = poVar1 + -(int)local_30 + (int)pfVar10;
                  do {
                    iVar5 = iVar13 * 4;
                    fVar28 = *(float *)poVar15;
                    iVar13 = iVar13 + 1;
                    poVar15 = poVar15 + 0x10;
                    *pfVar10 = *(float *)(poVar2 + iVar5) * fVar28 + *pfVar10;
                  } while (iVar13 < 3);
                  iVar13 = iVar7 + iVar13 * 4;
                  iVar7 = iVar7 + 1;
                  *pfVar10 = *(float *)(poVar1 + iVar13 * 4) + *pfVar10;
                  pfVar10 = pfVar10 + 1;
                  uVar16 = local_28;
                  local_8 = poVar1 + -(int)local_30;
                } while (iVar7 < 3);
              }
              local_24 = (float)((int)local_24 + 1);
              local_30 = local_30 + 3;
            } while ((int)local_24 < local_17c);
          }
          else {
            iVar7 = 0;
            pfVar10 = local_178;
            do {
              pmVar12 = objOBJ::GetFaceVertPtr(param_1,local_28,iVar7);
              iVar7 = iVar7 + 1;
              *pfVar10 = *(float *)pmVar12;
              pfVar10[1] = *(float *)(pmVar12 + 4);
              pfVar10[2] = *(float *)(pmVar12 + 8);
              pfVar10 = pfVar10 + 3;
            } while (iVar7 < local_17c);
          }
          local_24 = m3dCalcPolyArea((m3dPOLY *)&local_17c);
          piVar3 = (int *)(*(int *)(param_1 + 0x28) + 0xc + local_40 * 4);
          iVar7 = 3;
          puVar11 = local_264;
          puVar14 = (ushort *)(local_48 + 8 + local_44);
          do {
            puVar11[-2] = *(undefined4 *)(*piVar3 + (uint)*puVar14 * 8);
            iVar7 = iVar7 + -1;
            uVar17 = *(undefined4 *)(*piVar3 + 4 + (uint)*puVar14 * 8);
            puVar11[-1] = 0;
            *puVar11 = uVar17;
            puVar11 = puVar11 + 3;
            puVar14 = puVar14 + 1;
          } while (iVar7 != 0);
          local_270[0] = 3;
          iVar7 = _m3dGetPolyNormal((m3dPOLY *)&local_17c,(m3dV *)local_14);
          if (((iVar7 != 0) &&
              (iVar7 = _m3dGetPolyNormal((m3dPOLY *)local_270,(m3dV *)local_14), iVar7 != 0)) &&
             (iVar7 = m3dMATR::MakePolyPoly
                                ((m3dMATR *)local_88,(m3dPOLY *)local_270,(m3dPOLY *)&local_17c),
             iVar7 != 0)) {
            local_8 = (objOBJ *)local_88;
            uVar19 = extraout_MM1;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar20 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),
                                           CONCAT44(local_88[1],local_88[0]));
                uVar19 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),
                                           CONCAT44(uStack_74,local_78));
                uVar22 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),
                                           CONCAT44(uStack_64,local_68));
                uVar24 = PackedFloatingMUL(CONCAT44(_m3dVUnitX,_m3dVUnitX),
                                           CONCAT44(local_88[3],local_88[2]));
                uVar19 = PackedFloatingADD(uVar19,uVar22);
                uVar22 = PackedFloatingMUL(CONCAT44(DAT_005f9988,DAT_005f9988),
                                           CONCAT44(uStack_6c,uStack_70));
                uVar25 = PackedFloatingMUL(CONCAT44(DAT_005f998c,DAT_005f998c),
                                           CONCAT44(uStack_5c,uStack_60));
                uVar20 = PackedFloatingADD(uVar20,uVar19);
                uVar22 = PackedFloatingADD(uVar22,uVar25);
                local_14[1] = (float)((ulonglong)uVar20 >> 0x20);
                local_14[0] = (float)uVar20;
                uVar20 = PackedFloatingADD(uVar24,uVar22);
                local_14[2] = (float)uVar20;
                FastExitMediaState();
              }
              else {
                iVar7 = 0;
                do {
                  *(undefined4 *)((int)local_14 + iVar7) = 0;
                  pmVar12 = &m3dVUnitX;
                  pfVar10 = (float *)((int)local_88 + iVar7);
                  fVar28 = ___real_00000000;
                  do {
                    fVar29 = *(float *)pmVar12;
                    fVar4 = *pfVar10;
                    pmVar12 = pmVar12 + 4;
                    pfVar10 = pfVar10 + 4;
                    fVar28 = fVar29 * fVar4 + fVar28;
                  } while ((int)pmVar12 < 0x5f9990);
                  *(float *)((int)local_14 + iVar7) = fVar28;
                  iVar7 = iVar7 + 4;
                } while (iVar7 < 0xc);
              }
            }
            local_8 = (objOBJ *)local_88;
            if (m3dSimdType != 0) {
              if (m3dSimdType == 1) {
                FastExitMediaState();
                uVar20 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),
                                           CONCAT44(local_88[1],local_88[0]));
                uVar19 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),
                                           CONCAT44(uStack_74,local_78));
                uVar22 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),
                                           CONCAT44(uStack_64,local_68));
                uVar24 = PackedFloatingMUL(CONCAT44(_m3dVUnitZ,_m3dVUnitZ),
                                           CONCAT44(local_88[3],local_88[2]));
                uVar19 = PackedFloatingADD(uVar19,uVar22);
                uVar22 = PackedFloatingMUL(CONCAT44(DAT_005f99a0,DAT_005f99a0),
                                           CONCAT44(uStack_6c,uStack_70));
                uVar25 = PackedFloatingMUL(CONCAT44(DAT_005f99a4,DAT_005f99a4),
                                           CONCAT44(uStack_5c,uStack_60));
                uVar20 = PackedFloatingADD(uVar20,uVar19);
                uVar22 = PackedFloatingADD(uVar22,uVar25);
                local_20[1] = (float)((ulonglong)uVar20 >> 0x20);
                local_20[0] = (float)uVar20;
                uVar20 = PackedFloatingADD(uVar24,uVar22);
                local_20[2] = (float)uVar20;
                FastExitMediaState();
              }
              else {
                iVar7 = 0;
                do {
                  *(undefined4 *)((int)local_20 + iVar7) = 0;
                  pmVar12 = &m3dVUnitZ;
                  pfVar10 = (float *)((int)local_88 + iVar7);
                  fVar28 = ___real_00000000;
                  do {
                    fVar29 = *(float *)pmVar12;
                    fVar4 = *pfVar10;
                    pmVar12 = pmVar12 + 4;
                    pfVar10 = pfVar10 + 4;
                    fVar28 = fVar29 * fVar4 + fVar28;
                  } while ((int)pmVar12 < 0x5f99a8);
                  *(float *)((int)local_20 + iVar7) = fVar28;
                  iVar7 = iVar7 + 4;
                } while (iVar7 < 0xc);
              }
            }
            fVar28 = local_14[0] * local_14[0] +
                     local_14[1] * local_14[1] + local_14[2] * local_14[2];
            if (m3dSimdType == 0) {
              fVar28 = fVar28 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar30 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
              fVar29 = auVar30._0_4_;
              param_2 = (int)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar29 *
                              (`float___cdecl_m3dSqrt(float)'::__l2::three -
                              fVar28 * fVar29 * fVar29) * fVar28);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar18 = (ulonglong)(uint)fVar28;
              uVar19 = PackedFloatingReciprocalSQRAprox(uVar19,uVar18);
              uVar20 = PackedFloatingMUL(uVar19,uVar19);
              uVar20 = PackedFloatingReciprocalSQRIter1(uVar20,uVar18);
              uVar19 = PackedFloatingReciprocalIter2(uVar20,uVar19);
              uVar19 = PackedFloatingMUL(uVar19,uVar18);
              param_2 = (int)uVar19;
              FastExitMediaState();
            }
            else {
              param_2 = (int)SQRT(fVar28);
            }
            *param_3 = local_24 / (float)param_2 + *param_3;
            fVar28 = local_20[0] * local_20[0] +
                     local_20[1] * local_20[1] + local_20[2] * local_20[2];
            if (m3dSimdType == 0) {
              fVar28 = fVar28 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
              auVar30 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
              fVar29 = auVar30._0_4_;
              param_2 = (int)(`float___cdecl_m3dSqrt(float)'::__l2::half * fVar29 *
                              (`float___cdecl_m3dSqrt(float)'::__l2::three -
                              fVar28 * fVar29 * fVar29) * fVar28);
            }
            else if (m3dSimdType == 1) {
              FastExitMediaState();
              uVar18 = (ulonglong)(uint)fVar28;
              uVar19 = PackedFloatingReciprocalSQRAprox(uVar19,uVar18);
              uVar20 = PackedFloatingMUL(uVar19,uVar19);
              uVar20 = PackedFloatingReciprocalSQRIter1(uVar20,uVar18);
              uVar19 = PackedFloatingReciprocalIter2(uVar20,uVar19);
              uVar19 = PackedFloatingMUL(uVar19,uVar18);
              param_2 = (int)uVar19;
              FastExitMediaState();
            }
            else {
              param_2 = (int)SQRT(fVar28);
            }
            *param_4 = local_24 / (float)param_2 + *param_4;
            local_2c = local_24 + local_2c;
          }
          local_38 = local_38 + 1;
          uVar16 = local_28 + 1;
          local_28 = uVar16;
        } while (local_38 < (int)(uint)*(ushort *)(local_34 + 0x6a));
      }
      param_4 = (float *)(uint)(ABS(local_2c) < _DAT_005dc410);
      if ((float)(int)param_4 == ___real_00000000) {
        local_2c = ___real_3f800000 / local_2c;
        *param_3 = local_2c * *param_3;
        *pfVar6 = local_2c * *pfVar6;
        return 1;
      }
    }
  }
  return 0;
}




/* from: engine:obj_split.cpp
   addr: 004EEF20 */

int __thiscall objSPLIT_UNSHARED::Alloc(objSPLIT_UNSHARED *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)operator_new(param_1 * 8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1;
    iVar3 = param_1;
    if (-1 < param_1 + -1) {
      do {
        *puVar2 = 0;
        puVar2[1] = 0xffffffff;
        iVar3 = iVar3 + -1;
        puVar2 = puVar2 + 2;
      } while (iVar3 != 0);
    }
  }
  *(undefined4 **)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *(int *)(this + 4) = param_1;
    return 1;
  }
  return 0;
}




/* from: engine:obj_split.cpp
   addr: 004EEF80 */

void __thiscall objMTL_CTRL_TBL::objMTL_CTRL_TBL(objMTL_CTRL_TBL *this)

{
  objMTL_CTRL_TBL *poVar1;
  int iVar2;
  
  iVar2 = 4;
  poVar1 = this + 2;
  do {
    poVar1[-2] = (objMTL_CTRL_TBL)0x0;
    poVar1[-1] = (objMTL_CTRL_TBL)0x0;
    *poVar1 = (objMTL_CTRL_TBL)0x0;
    poVar1[1] = (objMTL_CTRL_TBL)0x0;
    poVar1 = poVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined2 *)(this + 0x10) = 0;
  return;
}




/* from: engine:obj_split.cpp
   addr: 004EEFB0 */

m3dV * __thiscall objOBJ::GetFaceVertPtr(objOBJ *this,int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x28);
  return (m3dV *)(piVar1[0x10] +
                 (uint)*(ushort *)
                        ((uint)*(byte *)(piVar1 + 1) * param_1 + 2 + param_2 * 2 + *piVar1) * 0xc);
}

