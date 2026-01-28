
/* from: engine:obj_usr_data.cpp
   addr: 004ED550 */

int __fastcall objOBJ::RegisterUsrData(ulong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  iVar1 = 0;
  do {
    if ((&DAT_00940bc4)[iVar1] == param_1) {
      return iVar1;
    }
    if (((&DAT_00940bc4)[iVar1] == 0) && (iVar2 == -1)) {
      iVar2 = iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  (&DAT_00940bc4)[iVar2] = param_1;
  iVar1 = iVar2 + 1;
  if (iVar2 + 1 < DAT_00940bbc) {
    iVar1 = DAT_00940bbc;
  }
  DAT_00940bbc = iVar1;
  return iVar2;
}




/* from: engine:obj_usr_data.cpp
   addr: 004ED5A0 */

void __fastcall objOBJ::UnregisterUsrData(ulong param_1)

{
  ulong *puVar1;
  
  puVar1 = &DAT_00940bc4;
  do {
    if (*puVar1 == param_1) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0x940bd8);
  return;
}




/* from: engine:obj_usr_data.cpp
   addr: 004ED5C0 */

int __thiscall objOBJ::AddUsrData(objOBJ *this,int param_1,objUSR_DATA *param_2)

{
  void *pvVar1;
  
  if (*(int *)(this + 0xe8) == 0) {
    pvVar1 = apCalloc(4,DAT_00940bbc);
    *(void **)(this + 0xe8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
  }
  *(objUSR_DATA **)(*(int *)(this + 0xe8) + param_1 * 4) = param_2;
  return 1;
}




/* from: engine:obj_usr_data.cpp
   addr: 004ED610 */

int __thiscall objOBJ::DuplicateUsrData(objOBJ *this,objOBJ *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  if ((*(int *)(this + 0xe8) != 0) && (iVar4 = 0, 0 < (int)DAT_00940bbc)) {
    do {
      piVar1 = *(int **)(*(int *)(this + 0xe8) + iVar4 * 4);
      if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 8))(param_2), iVar2 != 0)) {
        if (*(int *)(param_1 + 0xe8) == 0) {
          pvVar3 = apCalloc(4,DAT_00940bbc);
          *(void **)(param_1 + 0xe8) = pvVar3;
          if (pvVar3 == (void *)0x0) {
            return 0;
          }
        }
        *(int *)(*(int *)(param_1 + 0xe8) + iVar4 * 4) = iVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)DAT_00940bbc);
  }
  return 1;
}




/* from: engine:obj_usr_data.cpp
   addr: 004ED6A0 */

void __thiscall objOBJ::DestroyUsrData(objOBJ *this)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(this + 0xe8) != 0) {
    iVar2 = 0;
    if (0 < DAT_00940bbc) {
      do {
        puVar1 = *(undefined4 **)(*(int *)(this + 0xe8) + iVar2 * 4);
        if (puVar1 != (undefined4 *)0x0) {
          (**(code **)*puVar1)(1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00940bbc);
    }
    apFree(*(void **)(this + 0xe8));
    *(undefined4 *)(this + 0xe8) = 0;
  }
  return;
}

