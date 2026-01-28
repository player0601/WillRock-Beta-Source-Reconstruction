
/* from: engine:obj_iter.cpp
   addr: 004EEFE0 */

void __thiscall objOBJ_ITER_SAFE::objOBJ_ITER_SAFE(objOBJ_ITER_SAFE *this,objOBJ *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  if ((param_1 != (objOBJ *)0x0) && (iVar2 = *(int *)(param_1 + 0x38), iVar3 = iVar2, iVar2 != 0)) {
    do {
      if (0x7f < *(int *)(this + 0x200)) {
        return;
      }
      *(int *)(this + *(int *)(this + 0x200) * 4) = iVar3;
      *(int *)(this + 0x200) = *(int *)(this + 0x200) + 1;
      piVar1 = (int *)(iVar3 + 0x30);
      iVar3 = *piVar1;
    } while (*piVar1 != iVar2);
  }
  return;
}

