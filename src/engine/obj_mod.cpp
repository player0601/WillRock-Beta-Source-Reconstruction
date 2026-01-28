
/* from: engine:obj_mod.cpp
   addr: 004D1B90 */

void __thiscall objMODIFIER::objMODIFIER(objMODIFIER *this,ulong param_1,int param_2)

{
  *(undefined4 *)(this + 4) = 0;
  *(ulong *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &_vftable_;
  return;
}




/* from: engine:obj_mod.cpp
   addr: 004D1BC0
   addr: 004D1BC0 */

void * __thiscall objMODIFIER::_scalar_deleting_destructor_(objMODIFIER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: engine:obj_mod.cpp
   addr: 004D1BF0 */

int __fastcall objMODIFIER::SetViewPos(m3dV *param_1)

{
  uint local_4;
  
  local_4 = (uint)(ABS(_viewPos - *(float *)param_1) < _DAT_005dbd6c);
  if ((((float)local_4 != ___real_00000000) &&
      (local_4 = (uint)(ABS(_DAT_0093446c - *(float *)(param_1 + 4)) < _DAT_005dbd6c),
      (float)local_4 != ___real_00000000)) &&
     (local_4 = (uint)(ABS(_DAT_00934470 - *(float *)(param_1 + 8)) < _DAT_005dbd6c),
     (float)local_4 != ___real_00000000)) {
    return 0;
  }
  _viewPos = (float)*(undefined4 *)param_1;
  _DAT_0093446c = (float)*(undefined4 *)(param_1 + 4);
  _DAT_00934470 = (float)*(undefined4 *)(param_1 + 8);
  return 1;
}




/* from: engine:obj_mod.cpp
   addr: 004D1CF0 */

int __thiscall objMODIFIER::AddObj(objMODIFIER *this,objOBJ *param_1)

{
  short *psVar1;
  int iVar2;
  
  objOBJ::AllocGeom(param_1);
  iVar2 = objOBJ::AllocModifierList(param_1,*(ushort *)(*(int *)(param_1 + 0x28) + 0x58) + 1);
  if (iVar2 == 0) {
    return 0;
  }
  *(objOBJ **)(this + 0x18) = param_1;
  *(objMODIFIER **)
   (*(int *)(*(int *)(param_1 + 0x28) + 0x5a) +
   (uint)*(ushort *)(*(int *)(param_1 + 0x28) + 0x58) * 4) = this;
  psVar1 = (short *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x58);
  *psVar1 = *psVar1 + 1;
  qsort(*(void **)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x5a),
        (uint)*(ushort *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x58),4,_objCmpObjModifier);
  if (*(animINST **)(*(int *)(this + 0x18) + 0xbc) != (animINST *)0x0) {
    animINST::Invalidate(*(animINST **)(*(int *)(this + 0x18) + 0xbc),0x20000);
  }
  return 1;
}




/* from: engine:obj_mod.cpp
   addr: 004D1D80 */

void __thiscall objMODIFIER::DelObj(objMODIFIER *this)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(this + 0x18) != 0) {
    iVar3 = *(int *)(*(int *)(this + 0x18) + 0x28);
    iVar4 = 0;
    uVar2 = (uint)*(ushort *)(iVar3 + 0x58);
    if (uVar2 != 0) {
      do {
        iVar3 = *(int *)(iVar3 + 0x5a);
        if (*(objMODIFIER **)(iVar3 + iVar4 * 4) == this) {
          if (iVar4 < (int)(uVar2 - 1)) {
            puVar5 = (undefined4 *)(iVar3 + 4 + iVar4 * 4);
            puVar6 = (undefined4 *)(iVar3 + iVar4 * 4);
            for (uVar2 = (uVar2 - iVar4) * 4 - 4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
            for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
              *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
              puVar5 = (undefined4 *)((int)puVar5 + 1);
              puVar6 = (undefined4 *)((int)puVar6 + 1);
            }
          }
          *(undefined4 *)
           (*(int *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x5a) + -4 +
           (uint)*(ushort *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x58) * 4) = 0;
          psVar1 = (short *)(*(int *)(*(int *)(this + 0x18) + 0x28) + 0x58);
          *psVar1 = *psVar1 + -1;
          iVar4 = iVar4 + -1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = *(int *)(*(int *)(this + 0x18) + 0x28);
        uVar2 = (uint)*(ushort *)(iVar3 + 0x58);
      } while (iVar4 < (int)uVar2);
    }
    if (*(animINST **)(*(int *)(this + 0x18) + 0xbc) != (animINST *)0x0) {
      animINST::Invalidate(*(animINST **)(*(int *)(this + 0x18) + 0xbc),0x20000);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  return;
}




/* from: engine:obj_mod.cpp
   addr: 004D1E30 */

int __thiscall objOBJ::AssignModifiers(objOBJ *this,int param_1,objMODIFIER **param_2)

{
  objMODIFIER *poVar1;
  int iVar2;
  objOBJ *poVar3;
  objOBJ *local_8;
  int local_4;
  
  poVar3 = (objOBJ *)0x0;
  if (this != (objOBJ *)0x0) {
    poVar3 = *(objOBJ **)(this + 0x38);
    local_4 = 0;
    local_8 = poVar3;
  }
  if (*(short *)(this + 0x22) != -1) {
    poVar1 = param_2[*(short *)(this + 0x22)];
    if (poVar1 == (objMODIFIER *)0x0) {
      return (int)poVar1;
    }
    *(uint *)(poVar1 + 4) = *(uint *)(poVar1 + 4) | 2;
    iVar2 = (**(code **)(*(int *)poVar1 + 4))(this);
    if (iVar2 == 0) {
      return 0;
    }
  }
  for (; (poVar3 != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != poVar3))));
      local_8 = *(objOBJ **)(local_8 + 0x30)) {
    iVar2 = AssignModifiers(local_8,param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
    local_4 = 1;
  }
  return 1;
}




/* from: engine:obj_mod.cpp
   addr: 004D1ED0 */

void __thiscall objOBJ::RemoveModifiers(objOBJ *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0x28);
  if (iVar2 != 0) {
    iVar3 = 0;
    if (*(short *)(iVar2 + 0x58) != 0) {
      do {
        piVar1 = *(int **)(*(int *)(iVar2 + 0x5a) + iVar3 * 4);
        if ((*(byte *)(piVar1 + 1) & 2) == 0) {
          (**(code **)(*piVar1 + 8))();
          iVar3 = iVar3 + -1;
          (**(code **)*piVar1)(1);
        }
        iVar2 = *(int *)(this + 0x28);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*(ushort *)(iVar2 + 0x58));
    }
    FreeModifierList(this);
    *(undefined2 *)(*(int *)(this + 0x28) + 0x58) = 0;
  }
  return;
}




/* from: engine:obj_mod.cpp
   addr: 004D1F30 */

int __thiscall objOBJ::DuplicateModifiers(objOBJ *this,objOBJ *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0x28);
  if ((iVar2 != 0) && (iVar3 = 0, *(short *)(iVar2 + 0x58) != 0)) {
    do {
      piVar1 = (int *)(**(code **)(**(int **)(*(int *)(iVar2 + 0x5a) + iVar3 * 4) + 0xc))(1);
      if (piVar1 != (int *)0x0) {
        piVar1[1] = piVar1[1] & 0xfffffffd;
        iVar2 = (**(code **)(*piVar1 + 4))(param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      iVar2 = *(int *)(this + 0x28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(iVar2 + 0x58));
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return 1;
}




/* from: engine:obj_mod.cpp
   addr: 004D1FB0 */

void __thiscall objOBJ::ValidateModifiersHier(objOBJ *this,apSTATE *param_1,apSTATE *param_2)

{
  apSTATE *paVar1;
  apSTATE *paVar2;
  int iVar3;
  int iVar4;
  objOBJ *local_10;
  objOBJ *local_c;
  objOBJ *local_8;
  int local_4;
  
  local_10 = this;
  objOBJ_ITER::Rewind((objOBJ_ITER *)&local_10);
  if (this != (objOBJ *)0x0) {
    iVar4 = *(int *)(this + 0x28);
    paVar1 = (apSTATE *)(this + 0xe0);
    paVar2 = (apSTATE *)(this + 0xe4);
    *(undefined4 *)paVar1 = 0;
    *(undefined4 *)paVar2 = 0;
    if ((iVar4 != 0) && (iVar3 = 0, *(short *)(iVar4 + 0x58) != 0)) {
      do {
        *(uint *)paVar1 =
             *(uint *)paVar1 | *(uint *)(*(int *)(*(int *)(iVar4 + 0x5a) + iVar3 * 4) + 0x10);
        iVar4 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        *(uint *)paVar2 =
             *(uint *)paVar2 |
             *(uint *)(*(int *)(*(int *)(*(int *)(this + 0x28) + 0x5a) + iVar4) + 0x14);
        iVar4 = *(int *)(this + 0x28);
      } while (iVar3 < (int)(uint)*(ushort *)(iVar4 + 0x58));
    }
    for (; (local_c != (objOBJ *)0x0 && ((local_4 == 0 || (local_8 != local_c))));
        local_8 = *(objOBJ **)(local_8 + 0x30)) {
      ValidateModifiersHier(local_8,paVar1,paVar2);
      local_4 = 1;
    }
    if ((param_1 != (apSTATE *)0x0) && (param_2 != (apSTATE *)0x0)) {
      *(uint *)param_1 = *(uint *)param_1 | *(uint *)paVar1;
      *(uint *)param_2 = *(uint *)param_2 | *(uint *)paVar2;
    }
  }
  return;
}




/* from: engine:obj_mod.cpp
   addr: 004D2080 */

int __thiscall objOBJ::InvalidateModifiers(objOBJ *this,int param_1)

{
  objOBJ *poVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  objOBJ *this_00;
  uint uVar5;
  
  if (this != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(this + 0x38);
    bVar3 = false;
    if ((param_1 & *(uint *)(this + 0xe0)) != 0) {
      iVar2 = *(int *)(this + 0x28);
      this_00 = poVar1;
      if ((iVar2 != 0) && (uVar5 = (uint)*(ushort *)(iVar2 + 0x58), uVar5 != 0)) {
        piVar4 = *(int **)(iVar2 + 0x5a);
        do {
          if ((*(uint *)(*piVar4 + 0x10) & param_1) != 0) {
            param_1 = param_1 | *(uint *)(*piVar4 + 0x14);
          }
          piVar4 = piVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      for (; (poVar1 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar1))));
          this_00 = *(objOBJ **)(this_00 + 0x30)) {
        param_1 = InvalidateModifiers(this_00,param_1);
        bVar3 = true;
      }
    }
  }
  return param_1;
}




/* from: engine:obj_mod.cpp
   addr: 004D20F0 */

int __thiscall objOBJ::ValidateModifiers(objOBJ *this,int param_1)

{
  objOBJ *poVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  objOBJ *this_00;
  uint uVar5;
  
  if (this != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(this + 0x38);
    bVar3 = false;
    if ((param_1 & *(uint *)(this + 0xe4)) != 0) {
      iVar2 = *(int *)(this + 0x28);
      this_00 = poVar1;
      if ((iVar2 != 0) && (uVar5 = (uint)*(ushort *)(iVar2 + 0x58), uVar5 != 0)) {
        piVar4 = *(int **)(iVar2 + 0x5a);
        do {
          if ((*(uint *)(*piVar4 + 0x14) & param_1) != 0) {
            param_1 = param_1 | *(uint *)(*piVar4 + 0x10);
          }
          piVar4 = piVar4 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      for (; (poVar1 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar1))));
          this_00 = *(objOBJ **)(this_00 + 0x30)) {
        param_1 = ValidateModifiers(this_00,param_1);
        bVar3 = true;
      }
    }
  }
  return param_1;
}




/* from: engine:obj_mod.cpp
   addr: 004D2160 */

int __thiscall objOBJ::ApplyModifiers(objOBJ *this,int param_1)

{
  objOBJ *poVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  objOBJ *this_00;
  int iVar6;
  
  if (this != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(this + 0x38);
    bVar3 = false;
    if ((param_1 & *(uint *)(this + 0xe4)) != 0) {
      iVar4 = *(int *)(this + 0x28);
      this_00 = poVar1;
      if ((iVar4 != 0) && (*(short *)(iVar4 + 0x58) != 0)) {
        uVar5 = *(uint *)(this + 8) & 0x3f;
        if ((((uVar5 == 0) || (((*(uint *)(this + 8) & 0xf000) != 0 || ((param_1 & 0x205U) == 0))))
            && ((uVar5 == 0 || ((param_1 & 0x6400U) == 0)))) &&
           (iVar6 = 0, *(short *)(iVar4 + 0x58) != 0)) {
          do {
            piVar2 = *(int **)(*(int *)(iVar4 + 0x5a) + iVar6 * 4);
            if ((((piVar2[5] & param_1) != 0) && ((*(byte *)(piVar2 + 1) & 1) == 0)) &&
               (iVar4 = (**(code **)(*piVar2 + 0x18))(), iVar4 == 0)) {
              return 0;
            }
            iVar4 = *(int *)(this + 0x28);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(uint)*(ushort *)(iVar4 + 0x58));
        }
      }
      for (; (poVar1 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar1))));
          this_00 = *(objOBJ **)(this_00 + 0x30)) {
        iVar4 = ApplyModifiers(this_00,param_1);
        if (iVar4 == 0) {
          return 0;
        }
        bVar3 = true;
      }
    }
  }
  return 1;
}




/* from: engine:obj_mod.cpp
   addr: 004D2250 */

int __thiscall objOBJ::IsApplyModifiers(objOBJ *this,int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 8) & 0x3f;
  if (((uVar1 != 0) && ((*(uint *)(this + 8) & 0xf000) == 0)) && ((param_1 & 0x205U) != 0)) {
    return 0;
  }
  if ((uVar1 != 0) && ((param_1 & 0x6400U) != 0)) {
    return 0;
  }
  return 1;
}




/* from: engine:obj_mod.cpp
   addr: 004D22B0 */

void __thiscall objOBJ::AdvanceModifiersTime(objOBJ *this)

{
  objOBJ *poVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  objOBJ *this_00;
  int iVar5;
  
  if (this != (objOBJ *)0x0) {
    poVar1 = *(objOBJ **)(this + 0x38);
    bVar3 = false;
    if ((char)((uint)*(undefined4 *)(this + 0xe0) >> 8) < '\0') {
      iVar4 = *(int *)(this + 0x28);
      this_00 = poVar1;
      if ((iVar4 != 0) && (iVar5 = 0, *(short *)(iVar4 + 0x58) != 0)) {
        do {
          piVar2 = *(int **)(*(int *)(iVar4 + 0x5a) + iVar5 * 4);
          if ((*(byte *)(piVar2 + 1) & 1) == 0) {
            (**(code **)(*piVar2 + 0x14))();
          }
          iVar4 = *(int *)(this + 0x28);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)*(ushort *)(iVar4 + 0x58));
      }
      for (; (poVar1 != (objOBJ *)0x0 && ((!bVar3 || (this_00 != poVar1))));
          this_00 = *(objOBJ **)(this_00 + 0x30)) {
        AdvanceModifiersTime(this_00);
        bVar3 = true;
      }
    }
  }
  return;
}




/* from: engine:obj_mod.cpp
   addr: 004D2330 */

void __thiscall objOBJ::AnimateModifiers(objOBJ *this,int param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)(this + 0x28);
  if (*(short *)(iVar2 + 0x58) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar2 + 0x5a) + iVar3 * 4);
      if ((*(byte *)(piVar1 + 1) & 1) == 0) {
        (**(code **)(*piVar1 + 0x10))(param_1,param_2,param_3);
      }
      iVar2 = *(int *)(this + 0x28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(iVar2 + 0x58));
  }
  return;
}




/* from: engine:obj_mod.cpp
   addr: 004D2380 */

objMODIFIER * __thiscall
objOBJ::FindNextModifier(objOBJ *this,objMODIFIER *param_1,int param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x28);
  iVar2 = 0;
  if (*(ushort *)(iVar1 + 0x58) != 0) {
    do {
      if (((param_2 == 0) ||
          ((*(uint *)(*(int *)(*(int *)(iVar1 + 0x5a) + iVar2 * 4) + 0x14) & param_2) != 0)) &&
         ((param_3 == 0 || (*(ulong *)(*(int *)(*(int *)(iVar1 + 0x5a) + iVar2 * 4) + 8) == param_3)
          ))) {
        if (param_1 == (objMODIFIER *)0x0) {
          return *(objMODIFIER **)(*(int *)(iVar1 + 0x5a) + iVar2 * 4);
        }
        if (param_1 == *(objMODIFIER **)(*(int *)(iVar1 + 0x5a) + iVar2 * 4)) {
          param_1 = (objMODIFIER *)0x0;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(iVar1 + 0x58));
  }
  return (objMODIFIER *)0x0;
}




/* from: engine:obj_mod.cpp
   addr: 004D23F0 */

int __cdecl _objCmpObjModifier(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if (*(int *)(*param_1 + 0x14) != *(int *)(*param_2 + 0x14)) {
    return 0;
  }
  iVar1 = *(int *)(*param_2 + 0xc);
  iVar2 = *(int *)(*param_1 + 0xc);
  if (iVar2 < iVar1) {
    return -1;
  }
  return (uint)(iVar1 < iVar2);
}

