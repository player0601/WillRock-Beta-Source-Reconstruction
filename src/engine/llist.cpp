
/* from: engine:llist.cpp
   addr: 004EBA80 */

void __thiscall lstLIST_SIMPLE::Insert(lstLIST_SIMPLE *this,lstNODE *param_1,lstNODE *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(lstNODE **)(this + 4) == (lstNODE *)0x0) {
    *(lstNODE **)(this + 4) = param_1;
    return;
  }
  if (param_2 == (lstNODE *)0x0) {
    param_2 = *(lstNODE **)(this + 4);
  }
  uVar1 = *(undefined4 *)param_2;
  *(lstNODE **)(param_1 + 4) = param_2;
  *(undefined4 *)param_1 = uVar1;
  *(lstNODE **)param_2 = param_1;
  if (*(int *)param_1 == 0) {
    *(lstNODE **)(this + 4) = param_1;
    return;
  }
  *(lstNODE **)(*(int *)param_1 + 4) = param_1;
  return;
}




/* from: engine:llist.cpp
   addr: 004EBAD0 */

void __thiscall lstLIST_SIMPLE::Remove(lstLIST_SIMPLE *this,lstNODE *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)param_1;
  piVar2 = *(int **)(param_1 + 4);
  if (iVar1 == 0) {
    *(int **)(this + 4) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
  }
  else {
    *(int **)(iVar1 + 4) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




/* from: engine:llist.cpp
   addr: 004EBB10 */

void __thiscall lstLIST_SIMPLE::Clear(lstLIST_SIMPLE *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 4);
  while (iVar1 != 0) {
    (**(code **)(*(int *)this + 0xc))(iVar1);
    iVar1 = *(int *)(this + 4);
  }
  return;
}




/* from: engine:llist.cpp
   addr: 004EBB30 */

void __thiscall lstLIST::Insert(lstLIST *this,lstNODE *param_1,lstNODE *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 4) == 0) {
    *(lstNODE **)(this + 8) = param_1;
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(lstNODE **)(this + 4) == (lstNODE *)0x0) {
    *(lstNODE **)(this + 4) = param_1;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    return;
  }
  if (param_2 == (lstNODE *)0x0) {
    param_2 = *(lstNODE **)(this + 4);
  }
  uVar1 = *(undefined4 *)param_2;
  *(lstNODE **)(param_1 + 4) = param_2;
  *(undefined4 *)param_1 = uVar1;
  *(lstNODE **)param_2 = param_1;
  if (*(int *)param_1 == 0) {
    *(lstNODE **)(this + 4) = param_1;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    return;
  }
  *(lstNODE **)(*(int *)param_1 + 4) = param_1;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  return;
}




/* from: engine:llist.cpp
   addr: 004EBBA0 */

void __thiscall lstLIST::Remove(lstLIST *this,lstNODE *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(lstNODE **)(this + 8) == param_1) {
    *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
  }
  iVar1 = *(int *)param_1;
  piVar2 = *(int **)(param_1 + 4);
  if (iVar1 == 0) {
    *(int **)(this + 4) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
    }
  }
  else {
    *(int **)(iVar1 + 4) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
    }
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
  return;
}




/* from: engine:llist.cpp
   addr: 004EBBF0 */

void __thiscall lstPLIST::Insert(lstPLIST *this,lstNODE *param_1)

{
  lstNODE *plVar1;
  
  if (*(int *)(this + 8) == 0) {
    *(lstNODE **)(this + 4) = param_1;
    *(lstNODE **)(this + 8) = param_1;
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    return;
  }
  plVar1 = FindFirstGreater_Fast(this,param_1);
  if (plVar1 != (lstNODE *)0x0) {
    *(lstNODE **)(param_1 + 4) = plVar1;
    *(undefined4 *)param_1 = *(undefined4 *)plVar1;
    *(lstNODE **)plVar1 = param_1;
    if (plVar1 == *(lstNODE **)(this + 4)) {
      *(lstNODE **)(this + 4) = param_1;
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      return;
    }
    *(lstNODE **)(*(int *)param_1 + 4) = param_1;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
    return;
  }
  *(lstNODE **)(*(int *)(this + 8) + 4) = param_1;
  *(undefined4 *)param_1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(param_1 + 4) = 0;
  *(lstNODE **)(this + 8) = param_1;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  return;
}




/* from: engine:llist.cpp
   addr: 004EBC80 */

lstNODE * __thiscall lstPLIST::FindFirstGreater_Fast(lstPLIST *this,lstNODE *param_1)

{
  lstNODE *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_EDI;
  
  plVar1 = *(lstNODE **)(this + 4);
  if (plVar1 == (lstNODE *)0x0) {
    return plVar1;
  }
  iVar3 = 0;
  do {
    iVar5 = iVar3;
    (&DAT_00934d18)[iVar5] = plVar1;
    plVar1 = *(lstNODE **)(plVar1 + 4);
    iVar3 = iVar5 + 1;
  } while (plVar1 != (lstNODE *)0x0);
  uVar2 = (**(code **)(*(int *)this + 0x18))(param_1,DAT_00934d18);
  iVar3 = (**(code **)(*(int *)this + 0x18))(param_1,(&DAT_00934d18)[iVar5]);
  if (iVar3 == 0) {
    return (lstNODE *)0x0;
  }
  iVar3 = 0;
  if (unaff_EDI == 1) {
    return DAT_00934d18;
  }
  while (iVar5 != iVar3) {
    iVar6 = (iVar5 - iVar3) / 2 + iVar3;
    iVar4 = (**(code **)(*(int *)this + 0x18))(uVar2,(&DAT_00934d18)[iVar6]);
    if (iVar4 == 1) {
      iVar5 = iVar5 + -1;
      if (iVar6 < iVar5) {
        iVar5 = iVar6;
      }
    }
    else {
      iVar3 = iVar3 + 1;
      if (iVar3 < iVar6) {
        iVar3 = iVar6;
      }
    }
  }
  return (&DAT_00934d18)[iVar5];
}

