
/* from: m3d:cgm_wed.cpp
   addr: 0055B5B0 */

int __thiscall cgmWED::MeshGetFaceVertInd(cgmWED *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x38);
  uVar2 = (uint)*(ushort *)
                 ((uint)*(byte *)(*(int **)(iVar1 + 0x28) + 1) * param_1 + **(int **)(iVar1 + 0x28)
                  + 2 + param_2 * 2);
  if (*(int *)(iVar1 + 0x14) < (int)uVar2) {
    uVar2 = *(int *)(iVar1 + 0x14) - 1;
    *(short *)((uint)*(byte *)(*(int **)(iVar1 + 0x28) + 1) * param_1 + **(int **)(iVar1 + 0x28) + 2
              + param_2 * 2) = (short)uVar2;
  }
  return uVar2;
}




/* from: m3d:cgm_wed.cpp
   addr: 0055B610 */

void __thiscall cgmWED_SYS::cgmWED_SYS(cgmWED_SYS *this)

{
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  if (pQueryDefault == (cgmQUERY *)0x0) {
    pQueryDefault = (cgmQUERY *)&DAT_009637a8;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}




/* from: m3d:cgm_wed.cpp
   addr: 0055B660 */

int __thiscall cgmWED_SYS::Init(cgmWED_SYS *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  cgmWED_FACE *pcVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uStack_c;
  int iStack_8;
  int iStack_4;
  
  uVar10 = 0;
  iVar8 = 0;
  iVar11 = 0;
  iVar1 = (**(code **)(*(int *)this + 0xc))();
  if (0 < iVar1) {
    do {
      iVar1 = (**(code **)(*(int *)this + 0x14))(iVar11);
      iVar8 = iVar8 + iVar1;
      iVar11 = iVar11 + 1;
      iVar1 = (**(code **)(*(int *)this + 0xc))();
    } while (iVar11 < iVar1);
  }
  iVar11 = (**(code **)(*(int *)this + 0xc))();
  iVar1 = iVar8;
  iVar2 = (**(code **)(*(int *)this + 0x10))();
  iVar1 = Realloc(this,iVar2,iVar1,iVar11);
  if (iVar1 != 0) {
    uVar3 = (**(code **)(*(int *)this + 0x10))();
    *(undefined4 *)(this + 4) = uVar3;
    uVar3 = (**(code **)(*(int *)this + 0xc))();
    *(undefined4 *)(this + 0x14) = uVar3;
    uStack_c = 0;
    puVar12 = *(undefined4 **)(this + 8);
    for (uVar6 = *(int *)(this + 4) * 9 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar12 = 0;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    puVar12 = *(undefined4 **)(this + 0x10);
    for (uVar6 = iVar8 * 9 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    iVar8 = 0;
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar12 = 0;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    puVar12 = *(undefined4 **)(this + 0x18);
    for (uVar6 = (uint)(*(int *)(this + 0x14) * 0x1c) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined1 *)puVar12 = 0;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    if (0 < *(int *)(this + 0x14)) {
      do {
        iVar11 = 0;
        iVar1 = (**(code **)(*(int *)this + 0x14))(iVar8);
        if (0 < iVar1) {
          do {
            iVar1 = (**(code **)(*(int *)this + 0x18))(iVar8,iVar11);
            uVar10 = uVar10 + 2;
            piVar7 = (int *)(*(int *)(this + 8) + 8 + iVar1 * 0x24);
            iVar11 = iVar11 + 1;
            *piVar7 = *piVar7 + 2;
            iVar1 = (**(code **)(*(int *)this + 0x14))(iVar8);
          } while (iVar11 < iVar1);
        }
        iVar1 = (**(code **)(*(int *)this + 0x14))(iVar8);
        uStack_c = uStack_c + iVar1;
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(this + 0x14));
    }
    pvVar4 = apCalloc(uVar10,4);
    *(void **)(this + 0x20) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    iVar1 = 0;
    iVar8 = 0;
    if (0 < *(int *)(this + 4)) {
      iVar11 = 0;
      do {
        *(int *)(iVar11 + 4 + *(int *)(this + 8)) = iVar8;
        *(int *)(iVar11 + 0xc + *(int *)(this + 8)) = *(int *)(this + 0x20) + iVar1 * 4;
        iVar1 = iVar1 + *(int *)(iVar11 + 8 + *(int *)(this + 8));
        iVar8 = iVar8 + 1;
        *(undefined4 *)(iVar11 + 8 + *(int *)(this + 8)) = 0;
        iVar11 = iVar11 + 0x24;
      } while (iVar8 < *(int *)(this + 4));
    }
    pvVar4 = apCalloc(uStack_c,4);
    iVar1 = 0;
    *(void **)(this + 0x1c) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    uStack_c = 0;
    if (0 < *(int *)(this + 0x14)) {
      iStack_4 = 0;
      do {
        pcVar9 = (cgmWED_FACE *)(*(int *)(this + 0x18) + iStack_4);
        *(int *)(pcVar9 + 4) = iVar1;
        *(uint *)(pcVar9 + 0xc) = *(int *)(this + 0x1c) + uStack_c * 4;
        iVar8 = iVar1;
        iVar11 = (**(code **)(*(int *)this + 0x14))();
        uVar3 = (**(code **)(*(int *)this + 0x18))(iVar1,0);
        iVar2 = (**(code **)(*(int *)this + 0x18))(iVar1,iVar11 + -1,uVar3);
        iVar8 = AddFaceEdge(this,pcVar9,iVar2,iVar8);
        if (iVar8 == 0) goto LAB_0055b900;
        iVar8 = 1;
        if (1 < iStack_8) {
          do {
            iVar2 = iVar8;
            uVar3 = (**(code **)(*(int *)this + 0x18))(iVar1);
            iVar5 = (**(code **)(*(int *)this + 0x18))(iVar1,iVar8 + -1,uVar3);
            iVar2 = AddFaceEdge(this,pcVar9,iVar5,iVar2);
            if (iVar2 == 0) goto LAB_0055b900;
            iVar8 = iVar8 + 1;
          } while (iVar8 < iStack_8);
        }
        uStack_c = iVar11 + iStack_8;
        iVar1 = iVar1 + 1;
        iStack_4 = iStack_4 + 0x1c;
      } while (iVar1 < *(int *)(this + 0x14));
    }
    iVar1 = Realloc(this,*(int *)(this + 4),*(int *)(this + 0xc),*(int *)(this + 0x14));
    if (iVar1 != 0) {
      pvVar4 = apRealloc(*(void **)(this + 0x24),*(int *)(this + 4) << 2);
      *(void **)(this + 0x24) = pvVar4;
      if (pvVar4 != (void *)0x0) {
        pvVar4 = apRealloc(*(void **)(this + 0x28),*(int *)(this + 0x14) << 2);
        *(void **)(this + 0x28) = pvVar4;
        if (pvVar4 != (void *)0x0) {
          iVar1 = 0;
          if (0 < *(int *)(this + 0xc)) {
            iVar8 = *(int *)(this + 0x10);
            do {
              iVar2 = 0;
              iVar11 = *(int *)(*(int *)(iVar8 + 8) + 8);
              if (iVar11 < 1) {
                return 1;
              }
              piVar7 = *(int **)(*(int *)(iVar8 + 8) + 0xc);
              while (iVar8 != *piVar7) {
                iVar2 = iVar2 + 1;
                piVar7 = piVar7 + 1;
                if (iVar11 <= iVar2) {
                  return 1;
                }
              }
              if (iVar2 == -1) {
                return 1;
              }
              iVar2 = 0;
              iVar11 = *(int *)(*(int *)(iVar8 + 0xc) + 8);
              if (iVar11 < 1) {
                return 1;
              }
              piVar7 = *(int **)(*(int *)(iVar8 + 0xc) + 0xc);
              while (iVar8 != *piVar7) {
                iVar2 = iVar2 + 1;
                piVar7 = piVar7 + 1;
                if (iVar11 <= iVar2) {
                  return 1;
                }
              }
              if (iVar2 == -1) {
                return 1;
              }
              iVar1 = iVar1 + 1;
              iVar8 = iVar8 + 0x24;
            } while (iVar1 < *(int *)(this + 0xc));
          }
          return 1;
        }
      }
    }
  }
LAB_0055b900:
  (**(code **)(*(int *)this + 8))();
  return 0;
}




/* from: m3d:cgm_wed.cpp
   addr: 0055B990 */

void __thiscall cgmWED_SYS::Term(cgmWED_SYS *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0xc)) {
    iVar1 = 0;
    do {
      apFree(*(void **)(*(int *)(this + 0x10) + 0x20 + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x24;
    } while (iVar2 < *(int *)(this + 0xc));
  }
  apFree(*(void **)(this + 0x10));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  apFree(*(void **)(this + 8));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  apFree(*(void **)(this + 0x24));
  apFree(*(void **)(this + 0x28));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  apFree(*(void **)(this + 0x18));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  apFree(*(void **)(this + 0x1c));
  apFree(*(void **)(this + 0x20));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  return;
}




/* from: m3d:cgm_wed.cpp
   addr: 0055BA30 */

cgmWED_NODE * __thiscall cgmWED_NODE::IncidentNode(cgmWED_NODE *this,cgmWED_EDGE *param_1)

{
  cgmWED_NODE *pcVar1;
  
  pcVar1 = *(cgmWED_NODE **)(param_1 + 8);
  if (pcVar1 == this) {
    pcVar1 = *(cgmWED_NODE **)(param_1 + 0xc);
  }
  return pcVar1;
}




/* from: m3d:cgm_wed.cpp
   addr: 0055BA50 */

cgmWED_EDGE * __thiscall cgmWED_NODE::IsIncidentNode(cgmWED_NODE *this,cgmWED_NODE *param_1)

{
  cgmWED_EDGE *pcVar1;
  cgmWED_NODE *pcVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 8)) {
    piVar3 = *(int **)(this + 0xc);
    do {
      pcVar1 = (cgmWED_EDGE *)*piVar3;
      pcVar2 = *(cgmWED_NODE **)(pcVar1 + 8);
      if (pcVar2 == this) {
        pcVar2 = *(cgmWED_NODE **)(pcVar1 + 0xc);
      }
      if (pcVar2 == param_1) {
        return pcVar1;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)(this + 8));
  }
  return (cgmWED_EDGE *)0x0;
}




/* from: m3d:cgm_wed.cpp
   addr: 0055BAB0 */

int __thiscall cgmWED_SYS::Realloc(cgmWED_SYS *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = param_1 / 100;
  if (iVar2 < 0x65) {
    iVar2 = 100;
  }
  iVar5 = *(int *)(this + 0x2c);
  if (iVar2 + param_1 < iVar5) {
    iVar5 = iVar2 / 2 + param_1;
  }
  else if (iVar5 < param_1) {
    iVar5 = iVar2 + param_1;
  }
  iVar2 = param_2 / 100;
  if (iVar2 < 0x65) {
    iVar2 = 100;
  }
  iVar7 = *(int *)(this + 0x30);
  if (iVar2 + param_2 < iVar7) {
    iVar7 = iVar2 / 2 + param_2;
  }
  else if (iVar7 < param_2) {
    iVar7 = iVar2 + param_2;
  }
  iVar2 = param_3 / 100;
  if (iVar2 < 0x65) {
    iVar2 = 100;
  }
  iVar8 = *(int *)(this + 0x34);
  if (iVar2 + param_3 < iVar8) {
    iVar8 = iVar2 / 2 + param_3;
  }
  else if (iVar8 < param_3) {
    iVar8 = iVar2 + param_3;
  }
  if (iVar5 == *(int *)(this + 0x2c)) {
    param_1 = *(int *)(this + 8);
  }
  else {
    param_1 = (int)apRealloc(*(void **)(this + 8),iVar5 * 0x24);
    if ((void *)param_1 == (void *)0x0) {
      return 0;
    }
    *(int *)(this + 0x2c) = iVar5;
  }
  if (iVar8 == *(int *)(this + 0x34)) {
    pvVar3 = *(void **)(this + 0x18);
  }
  else {
    pvVar3 = apRealloc(*(void **)(this + 0x18),iVar8 * 0x1c);
    if (pvVar3 == (void *)0x0) {
      return 0;
    }
    *(int *)(this + 0x34) = iVar8;
  }
  if (iVar7 == *(int *)(this + 0x30)) {
    pvVar4 = *(void **)(this + 0x10);
  }
  else {
    pvVar4 = apRealloc(*(void **)(this + 0x10),iVar7 * 0x24);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    *(int *)(this + 0x30) = iVar7;
  }
  if (pvVar4 != *(void **)(this + 0x10)) {
    iVar2 = 0;
    if (0 < *(int *)(this + 4)) {
      piVar6 = (int *)(param_1 + 8);
      do {
        iVar5 = 0;
        if (0 < *piVar6) {
          do {
            piVar1 = (int *)(piVar6[1] + iVar5 * 4);
            *piVar1 = (int)pvVar4 + (*piVar1 - *(int *)(this + 0x10));
            iVar5 = iVar5 + 1;
          } while (iVar5 < *piVar6);
        }
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 9;
      } while (iVar2 < *(int *)(this + 4));
    }
    iVar2 = 0;
    if (0 < *(int *)(this + 0x14)) {
      piVar6 = (int *)((int)pvVar3 + 8);
      do {
        iVar5 = 0;
        if (0 < *piVar6) {
          do {
            piVar1 = (int *)(piVar6[1] + iVar5 * 4);
            *piVar1 = (int)pvVar4 + (*piVar1 - *(int *)(this + 0x10));
            iVar5 = iVar5 + 1;
          } while (iVar5 < *piVar6);
        }
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 7;
      } while (iVar2 < *(int *)(this + 0x14));
    }
    *(void **)(this + 0x10) = pvVar4;
  }
  if (param_1 != *(int *)(this + 8)) {
    iVar2 = 0;
    if (0 < *(int *)(this + 0xc)) {
      piVar6 = (int *)((int)pvVar4 + 0xc);
      do {
        piVar6[-1] = piVar6[-1] + (param_1 - *(int *)(this + 8));
        iVar2 = iVar2 + 1;
        *piVar6 = *piVar6 + (param_1 - *(int *)(this + 8));
        piVar6 = piVar6 + 9;
      } while (iVar2 < *(int *)(this + 0xc));
    }
    *(int *)(this + 8) = param_1;
  }
  if (pvVar3 != *(void **)(this + 0x18)) {
    iVar2 = 0;
    if (0 < *(int *)(this + 0xc)) {
      piVar6 = (int *)((int)pvVar4 + 0x14);
      do {
        if (piVar6[-1] != 0) {
          piVar6[-1] = (piVar6[-1] - *(int *)(this + 0x18)) + (int)pvVar3;
        }
        if (*piVar6 != 0) {
          *piVar6 = (*piVar6 - *(int *)(this + 0x18)) + (int)pvVar3;
        }
        iVar2 = iVar2 + 1;
        piVar6 = piVar6 + 9;
      } while (iVar2 < *(int *)(this + 0xc));
    }
    *(void **)(this + 0x18) = pvVar3;
  }
  return 1;
}




/* from: m3d:cgm_wed.cpp
   addr: 0055BD00 */

int __thiscall
cgmWED_SYS::AddFaceEdge(cgmWED_SYS *this,cgmWED_FACE *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  
  iVar4 = 0;
  uVar1 = *(int *)(this + 8) + param_2 * 0x24;
  uVar2 = *(int *)(this + 8) + param_3 * 0x24;
  if (0 < *(int *)(uVar1 + 8)) {
    piVar5 = *(int **)(uVar1 + 0xc);
    do {
      uVar6 = *(uint *)(*piVar5 + 8);
      if (uVar6 == uVar1) {
        uVar6 = *(uint *)(*piVar5 + 0xc);
      }
      if (*(int *)(uVar6 + 4) == *(int *)(uVar2 + 4)) {
        if (iVar4 != -1) {
          puVar7 = *(uint **)(*(int *)(uVar1 + 0xc) + iVar4 * 4);
          if (puVar7[5] == 0) {
            puVar7[5] = (uint)param_1;
            if (uVar1 == puVar7[2]) {
              *puVar7 = *puVar7 | 0x20;
            }
          }
          else {
            *puVar7 = *puVar7 | 0x40;
            pvVar3 = apRealloc((void *)puVar7[8],puVar7[7] * 4 + 4);
            puVar7[8] = (uint)pvVar3;
            if (pvVar3 == (void *)0x0) {
              return 0;
            }
            *(cgmWED_FACE **)((int)pvVar3 + puVar7[7] * 4) = param_1;
            puVar7[7] = puVar7[7] + 1;
          }
          goto LAB_0055be04;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(uVar1 + 8));
  }
  puVar7 = (uint *)(*(int *)(this + 0x10) + *(uint *)(this + 0xc) * 0x24);
  puVar7[1] = *(uint *)(this + 0xc);
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  puVar7[2] = uVar1;
  puVar7[3] = uVar2;
  puVar7[4] = (uint)param_1;
  puVar7[5] = 0;
  *puVar7 = 0;
  *(uint **)(*(int *)(uVar1 + 0xc) + *(int *)(uVar1 + 8) * 4) = puVar7;
  *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
  *(uint **)(*(int *)(uVar2 + 0xc) + *(int *)(uVar2 + 8) * 4) = puVar7;
  *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
LAB_0055be04:
  *(uint **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 8) * 4) = puVar7;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 1;
}




/* from: m3d:cgm_wed.cpp
   addr: 0055BE20 */

void __thiscall cgmWED_SYS::ClearState(cgmWED_SYS *this)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(this + 4)) {
    iVar2 = 0;
    do {
      *(uint *)(*(int *)(this + 8) + iVar2) = *(uint *)(*(int *)(this + 8) + iVar2) & 0xfffffffe;
      *(uint *)(*(int *)(this + 8) + iVar2) = *(uint *)(*(int *)(this + 8) + iVar2) & 0xfffffffd;
      puVar1 = (uint *)(*(int *)(this + 8) + iVar2);
      iVar2 = iVar2 + 0x24;
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar1 & 0xfffffffb;
    } while (iVar3 < *(int *)(this + 4));
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x14)) {
    iVar2 = 0;
    do {
      puVar1 = (uint *)(*(int *)(this + 0x18) + iVar2);
      iVar2 = iVar2 + 0x1c;
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar1 & 0xfffffffe;
    } while (iVar3 < *(int *)(this + 0x14));
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0xc)) {
    iVar2 = 0;
    do {
      puVar1 = (uint *)(*(int *)(this + 0x10) + iVar2);
      iVar2 = iVar2 + 0x24;
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar1 & 0xfffffffe;
    } while (iVar3 < *(int *)(this + 0xc));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: m3d:cgm_wed.cpp
   addr: 0055BEB0 */

float __thiscall cgmWED_3D::CalcDist(cgmWED_3D *this,cgmWED_EDGE *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  ulonglong uVar5;
  undefined8 in_MM1;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  iVar2 = *(int *)(this + 0x3c);
  if (iVar2 == 0) {
    return _DAT_005de5f0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 4);
  fVar8 = *(float *)(iVar2 + iVar3 * 0xc) -
          *(float *)(iVar2 + *(int *)(*(int *)(param_1 + 0xc) + 4) * 0xc);
  iVar1 = iVar2 + *(int *)(*(int *)(param_1 + 0xc) + 4) * 0xc;
  fVar4 = *(float *)(iVar2 + 4 + iVar3 * 0xc) - *(float *)(iVar1 + 4);
  fVar9 = *(float *)(iVar2 + iVar3 * 0xc + 8) - *(float *)(iVar1 + 8);
  fVar8 = fVar8 * fVar8 + fVar4 * fVar4 + fVar9 * fVar9;
  if (m3dSimdType != 0) {
    if (m3dSimdType != 1) {
      return SQRT(fVar8);
    }
    FastExitMediaState();
    uVar5 = (ulonglong)(uint)fVar8;
    uVar6 = PackedFloatingReciprocalSQRAprox(in_MM1,uVar5);
    uVar7 = PackedFloatingMUL(uVar6,uVar6);
    uVar7 = PackedFloatingReciprocalSQRIter1(uVar7,uVar5);
    uVar6 = PackedFloatingReciprocalIter2(uVar7,uVar6);
    uVar6 = PackedFloatingMUL(uVar6,uVar5);
    FastExitMediaState();
    return (float)uVar6;
  }
  fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
  auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
  fVar9 = auVar10._0_4_;
  return `float___cdecl_m3dSqrt(float)'::__l2::half * fVar9 *
         (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar9 * fVar9) * fVar8;
}

