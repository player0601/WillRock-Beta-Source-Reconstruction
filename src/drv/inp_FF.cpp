
/* from: drv:inp_FF.cpp
   addr: 00579730 */

int __thiscall _inpINPUT::InitFF(_inpINPUT *this)

{
  int *piVar1;
  int iVar2;
  uint unaff_ESI;
  undefined4 local_2c [11];
  
  piVar1 = *(int **)(this + 0x19dc);
  if (piVar1 == (int *)0x0) {
    return (int)piVar1;
  }
  *(undefined4 *)(this + 0x2544) = 0;
  local_2c[0] = 0x2c;
  iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,local_2c);
  if (iVar2 != 0) {
    return 0;
  }
  if ((unaff_ESI & 0x100) != 0) {
    *(undefined4 *)(this + 0x2544) = 1;
  }
  return 1;
}




/* from: drv:inp_FF.cpp
   addr: 00579790 */

void __thiscall _inpINPUT::TermFF(_inpINPUT *this)

{
  int *piVar1;
  _inpINPUT *p_Var2;
  int iVar3;
  
  p_Var2 = this + 0x2548;
  iVar3 = 0x1e;
  do {
    piVar1 = *(int **)p_Var2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int *)p_Var2 = 0;
    p_Var2 = p_Var2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}




/* from: drv:inp_FF.cpp
   addr: 005797C0 */

int __thiscall _inpINPUT::EnableFF(_inpINPUT *this,int param_1)

{
  int iVar1;
  int iVar2;
  _inpINPUT *p_Var3;
  
  if (((*(int *)(this + 0x19dc) == 0) || (*(int *)(this + 0x2544) == 0)) ||
     (((byte)this[4] & 8) == 0)) {
    return 0;
  }
  if (param_1 == 0) {
    iVar2 = 0;
    p_Var3 = this + 0x2548;
    do {
      if (((*(int *)p_Var3 != 0) && (iVar1 = (**(code **)(*(int *)this + 0x38))(iVar2), iVar1 != 0))
         && (iVar1 = (**(code **)(**(int **)p_Var3 + 0x20))(*(int **)p_Var3), iVar1 != 0)) {
        *(undefined4 *)(this + 0x25c0) = 0;
        return 0;
      }
      iVar2 = iVar2 + 1;
      p_Var3 = p_Var3 + 4;
    } while (iVar2 < 0x1e);
  }
  *(int *)(this + 0x25c0) = param_1;
  return 1;
}




/* WARNING: Type propagation algorithm not settling */
/* from: drv:inp_FF.cpp
   addr: 00579840 */

int __thiscall _inpINPUT::CreateFF(_inpINPUT *this,int param_1,ulong param_2,ulong param_3,...)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined4 *puVar9;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84 [9];
  uint *local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint *local_50;
  int local_48;
  int local_44;
  uint local_40 [6];
  uint local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 0x19dc);
  if (((piVar1 == (int *)0x0) || (*(int *)(param_1 + 0x2544) == 0)) ||
     ((*(byte *)(param_1 + 4) & 8) == 0)) {
    return 0;
  }
  iVar6 = 0;
  piVar2 = (int *)(param_1 + 0x2548);
  while (*piVar2 != 0) {
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 1;
    if (0x1d < iVar6) {
      return -1;
    }
  }
  if (iVar6 == -1) {
    return -1;
  }
  puVar7 = local_84;
  for (iVar4 = 0xe; puVar7 = (uint *)((int)puVar7 + 4), iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
  }
  local_5c = local_40;
  local_60 = local_40 + 3;
  local_84[1] = 0x38;
  bVar8 = (param_2 & 1) != 0;
  local_84[4] = 0;
  local_84[6] = 0xffffffff;
  local_84[7] = 0;
  local_84[5] = 10000;
  if (bVar8) {
    local_40[3] = 0;
    local_40[0] = param_3 >> 0x14 & 0x3ff;
  }
  local_84[8] = (uint)bVar8;
  uVar3 = (uint)bVar8;
  if ((param_2 & 2) != 0) {
    local_40[uVar3 + 3] = 4;
    local_40[uVar3] = param_3 >> 10 & 0x3ff;
    local_84[8] = uVar3 + 1;
  }
  if ((param_2 & 4) != 0) {
    local_40[local_84[8] + 3] = 8;
    local_40[local_84[8]] = param_3 & 0x3ff;
    local_84[8] = local_84[8] + 1;
  }
  if (local_84[8] != 1) {
    return -1;
  }
  local_84[2] = 0x12;
  local_58 = 0;
  local_84[3] = in_stack_00000010 * 1000;
  if ((param_2 & 0x10) == 0) {
    if ((param_2 & 0x100) != 0) {
      local_50 = (uint *)&local_48;
      local_54 = 8;
      local_48 = in_stack_00000014 * 10;
      local_44 = in_stack_00000018 * 10;
      iVar4 = (**(code **)(*piVar1 + 0x48))
                        (piVar1,&_GUID_RampForce,local_84 + 1,param_1 + 0x2548 + iVar6 * 4,0);
      goto joined_r0x00579cf9;
    }
    if ((param_2 & 0x1f000) == 0) {
      if ((param_2 & 0xf00000) == 0) {
        return iVar6;
      }
      local_50 = (uint *)&local_18;
      local_54 = 0x18;
      local_8 = 10000;
      local_18 = in_stack_00000014 * 10;
      local_c = 10000;
      local_4 = in_stack_00000018 * 10;
      local_14 = in_stack_0000001c * 10;
      local_10 = in_stack_00000020 * 10;
      if ((param_2 & 0x100000) == 0) {
        if ((param_2 & 0x200000) == 0) {
          if ((param_2 & 0x400000) == 0) {
            if ((param_2 & 0x800000) == 0) {
              return -1;
            }
            local_94 = _GUID_Friction;
            local_90 = DAT_005deecc;
            local_8c = DAT_005deed0;
            local_88 = DAT_005deed4;
          }
          else {
            local_94 = _GUID_Inertia;
            local_90 = DAT_005deedc;
            local_8c = DAT_005deee0;
            local_88 = DAT_005deee4;
          }
        }
        else {
          local_94 = _GUID_Damper;
          local_90 = DAT_005deeec;
          local_8c = DAT_005deef0;
          local_88 = DAT_005deef4;
        }
      }
      else {
        local_94 = _GUID_Spring;
        local_90 = DAT_005deefc;
        local_8c = DAT_005def00;
        local_88 = DAT_005def04;
      }
      iVar4 = (**(code **)(*piVar1 + 0x48))
                        (piVar1,&local_94,local_84 + 1,param_1 + 0x2548 + iVar6 * 4,0);
      goto joined_r0x00579cf9;
    }
    local_50 = local_40 + 6;
    local_54 = 0x10;
    local_20 = 0;
    local_28 = in_stack_00000014 * 10;
    local_24 = in_stack_00000018 * 10;
    local_1c = in_stack_0000001c * 1000;
    if ((param_2 & 0x1000) == 0) {
      if ((param_2 & 0x2000) == 0) {
        if ((param_2 & 0x4000) == 0) {
          if ((char)(param_2 >> 8) < '\0') {
            local_94 = _GUID_SawtoothUp;
            local_90 = DAT_005def1c;
            local_8c = DAT_005def20;
            local_88 = DAT_005def24;
          }
          else {
            if ((param_2 & 0x10000) == 0) {
              return -1;
            }
            local_94 = _GUID_SawtoothDown;
            local_90 = DAT_005def0c;
            local_8c = DAT_005def10;
            local_88 = DAT_005def14;
          }
        }
        else {
          local_94 = _GUID_Triangle;
          local_90 = DAT_005def2c;
          local_8c = DAT_005def30;
          local_88 = DAT_005def34;
        }
      }
      else {
        local_94 = _GUID_Sine;
        local_90 = DAT_005def3c;
        local_8c = DAT_005def40;
        local_88 = DAT_005def44;
      }
    }
    else {
      local_94 = _GUID_Square;
      local_90 = DAT_005def4c;
      local_8c = DAT_005def50;
      local_88 = DAT_005def54;
    }
    iVar5 = *piVar1;
    iVar4 = param_1 + 0x2548 + iVar6 * 4;
    puVar9 = &local_94;
  }
  else {
    local_50 = local_84;
    local_54 = 4;
    local_84[0] = in_stack_00000014 * 10;
    iVar5 = *piVar1;
    iVar4 = param_1 + 0x2548 + iVar6 * 4;
    puVar9 = (undefined4 *)&_GUID_ConstantForce;
  }
  iVar4 = (**(code **)(iVar5 + 0x48))(piVar1,puVar9,local_84 + 1,iVar4,0);
joined_r0x00579cf9:
  if (iVar4 == 0) {
    return iVar6;
  }
  return -1;
}




/* from: drv:inp_FF.cpp
   addr: 00579D20 */

int __thiscall _inpINPUT::DestroyFF(_inpINPUT *this,int param_1)

{
  int *piVar1;
  
  if ((((*(int *)(this + 0x19dc) != 0) && (*(int *)(this + 0x2544) != 0)) &&
      (((byte)this[4] & 8) != 0)) &&
     (((-1 < param_1 && (param_1 < 0x1e)) &&
      (piVar1 = *(int **)(this + param_1 * 4 + 0x2548), piVar1 != (int *)0x0)))) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + param_1 * 4 + 0x2548) = 0;
    return 1;
  }
  return 0;
}




/* from: drv:inp_FF.cpp
   addr: 00579D80 */

int __thiscall _inpINPUT::PlayFF(_inpINPUT *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((((*(int *)(this + 0x19dc) != 0) && (*(int *)(this + 0x2544) != 0)) &&
      (((byte)this[4] & 8) != 0)) &&
     (((-1 < param_1 && (param_1 < 0x1e)) &&
      (piVar1 = *(int **)(this + param_1 * 4 + 0x2548), piVar1 != (int *)0x0)))) {
    if (*(int *)(this + 0x25c0) == 0) {
      return 1;
    }
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,1,0);
    return (uint)(iVar2 == 0);
  }
  return 0;
}




/* from: drv:inp_FF.cpp
   addr: 00579DE0 */

int __thiscall _inpINPUT::StopFF(_inpINPUT *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((((*(int *)(this + 0x19dc) != 0) && (*(int *)(this + 0x2544) != 0)) &&
      (((byte)this[4] & 8) != 0)) &&
     (((-1 < param_1 && (param_1 < 0x1e)) &&
      (piVar1 = *(int **)(this + param_1 * 4 + 0x2548), piVar1 != (int *)0x0)))) {
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1);
    return (uint)(iVar2 == 0);
  }
  return 0;
}




/* from: drv:inp_FF.cpp
   addr: 00579E30 */

int __thiscall _inpINPUT::IsPlayFF(_inpINPUT *this,int param_1)

{
  int *piVar1;
  
  if ((((*(int *)(this + 0x19dc) != 0) && (*(int *)(this + 0x2544) != 0)) &&
      (((byte)this[4] & 8) != 0)) &&
     (((-1 < param_1 && (param_1 < 0x1e)) &&
      (piVar1 = *(int **)(this + param_1 * 4 + 0x2548), piVar1 != (int *)0x0)))) {
    (**(code **)(*piVar1 + 0x24))(piVar1);
  }
  return 0;
}

