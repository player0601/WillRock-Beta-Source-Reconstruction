
/* from: gs:ui_main.cpp
   addr: 00503540 */

int __thiscall uiBOX::IsBelongBox(uiBOX *this,uiBOX *param_1)

{
  if ((((*(float *)this < *(float *)param_1) && (*(float *)(this + 4) < *(float *)(param_1 + 4))) &&
      (*(float *)(param_1 + 8) < *(float *)(this + 8))) &&
     (*(float *)(param_1 + 0xc) < *(float *)(this + 0xc))) {
    return 1;
  }
  if (((*(float *)this <= *(float *)(param_1 + 8)) &&
      (*(float *)(this + 4) <= *(float *)(param_1 + 0xc))) &&
     ((*(float *)param_1 <= *(float *)(this + 8) &&
      (*(float *)(param_1 + 4) <= *(float *)(this + 0xc))))) {
    return 1;
  }
  return 0;
}




/* from: gs:ui_main.cpp
   addr: 005035D0 */

void __thiscall uiBOX::AddVertex(uiBOX *this,m2dV *param_1)

{
  if (*(float *)this <= *(float *)param_1) {
    if (*(float *)(this + 8) < *(float *)param_1) {
      *(undefined4 *)(this + 8) = *(undefined4 *)param_1;
    }
  }
  else {
    *(undefined4 *)this = *(undefined4 *)param_1;
  }
  if (*(float *)(param_1 + 4) < *(float *)(this + 4)) {
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    return;
  }
  if (*(float *)(this + 8) < *(float *)param_1) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 4);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00503630 */

void __thiscall uiELEMENT::uiELEMENT(uiELEMENT *this)

{
  *(undefined4 *)(this + 0x58) = _m2dVZero;
  *(undefined4 *)(this + 0x5c) = DAT_00963758;
  *(undefined4 *)(this + 0x60) = _m2dVZero;
  *(undefined4 *)(this + 100) = DAT_00963758;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x18] = (uiELEMENT)0x0;
  *(undefined4 *)(this + 0x68) = 0;
  return;
}




/* from: gs:ui_main.cpp
   addr: 00503680 */

void __thiscall uiELEMENT::Init(uiELEMENT *this,objOBJ *param_1)

{
  psSHEET *this_00;
  int iVar1;
  char *_Source;
  uiELEMENT *puVar2;
  int iVar3;
  objOBJ *local_4c;
  objOBJ *local_48;
  int local_44;
  char local_40 [63];
  undefined1 uStack_1;
  
  iVar3 = 0;
  local_4c = (objOBJ *)0x0;
  if (param_1 != (objOBJ *)0x0) {
    local_4c = *(objOBJ **)(param_1 + 0x38);
    local_44 = 0;
    local_48 = local_4c;
  }
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 200);
  *(float *)(this + 0x5c) = -*(float *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0xd4);
  *(float *)(this + 100) = -*(float *)(param_1 + 0xcc);
  this_00 = *(psSHEET **)(param_1 + 0xf0);
  strncpy((char *)(this + 0x18),*(char **)(param_1 + 0x18),0x40);
  this[0x57] = (uiELEMENT)0x0;
  if (this_00 != (psSHEET *)0x0) {
    *(undefined4 *)(this + 0x68) = 0;
    do {
      sprintf(local_40,s_group_i,iVar3);
      iVar1 = psSHEET::GetBool(this_00,s_UI_PROP,local_40,(int *)&param_1);
      if ((iVar1 != 0) && (param_1 != (objOBJ *)0x0)) {
        *(uint *)(this + 0x68) = *(uint *)(this + 0x68) | 1 << ((byte)iVar3 & 0x1f);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  do {
    while( true ) {
      if ((local_4c == (objOBJ *)0x0) || ((local_44 != 0 && (local_48 == local_4c)))) {
        return;
      }
      iVar3 = (**(code **)(*(int *)this + 4))();
      if (iVar3 != -1) break;
LAB_00503883:
      local_48 = *(objOBJ **)(local_48 + 0x30);
      local_44 = 1;
    }
    if ((*(psSHEET **)(local_48 + 0xf0) == (psSHEET *)0x0) ||
       (iVar1 = psSHEET::GetStr(*(psSHEET **)(local_48 + 0xf0),s_UI_PROP,s_type,local_40,0x40),
       iVar1 == 0)) {
      _Source = (char *)(**(code **)(*(int *)uiSystem + 0x48))(iVar3);
      strncpy(local_40,_Source,0x40);
      uStack_1 = 0;
    }
    puVar2 = uiElementCreate(local_40,local_48,this);
    if (puVar2 == (uiELEMENT *)0x0) goto LAB_00503883;
    if (*(float *)(this + 0x58) <= *(float *)(puVar2 + 0x58)) {
      if (*(float *)(this + 0x60) < *(float *)(puVar2 + 0x58)) {
        *(undefined4 *)(this + 0x60) = *(undefined4 *)(puVar2 + 0x58);
      }
    }
    else {
      *(undefined4 *)(this + 0x58) = *(undefined4 *)(puVar2 + 0x58);
    }
    if (*(float *)(this + 0x5c) <= *(float *)(puVar2 + 0x5c)) {
      if (*(float *)(this + 0x60) < *(float *)(puVar2 + 0x58)) {
        *(undefined4 *)(this + 100) = *(undefined4 *)(puVar2 + 0x5c);
      }
    }
    else {
      *(undefined4 *)(this + 0x5c) = *(undefined4 *)(puVar2 + 0x5c);
    }
    if (*(float *)(this + 0x58) <= *(float *)(puVar2 + 0x60)) {
      if (*(float *)(this + 0x60) < *(float *)(puVar2 + 0x60)) {
        *(undefined4 *)(this + 0x60) = *(undefined4 *)(puVar2 + 0x60);
      }
    }
    else {
      *(undefined4 *)(this + 0x58) = *(undefined4 *)(puVar2 + 0x60);
    }
    if (*(float *)(this + 0x5c) <= *(float *)(puVar2 + 100)) {
      if (*(float *)(this + 0x60) < *(float *)(puVar2 + 0x60)) {
        *(undefined4 *)(this + 100) = *(undefined4 *)(puVar2 + 100);
      }
      goto LAB_00503883;
    }
    local_44 = 1;
    *(undefined4 *)(this + 0x5c) = *(undefined4 *)(puVar2 + 100);
    local_48 = *(objOBJ **)(local_48 + 0x30);
  } while( true );
}




/* from: gs:ui_main.cpp
   addr: 005038A0 */

uiELEMENT * __thiscall uiELEMENT::GetPathToChild(uiELEMENT *this,uiELEMENT *param_1)

{
  uiELEMENT *puVar1;
  
  puVar1 = param_1;
  if (param_1 != (uiELEMENT *)0x0) {
    do {
      param_1 = *(uiELEMENT **)(puVar1 + 8);
      if (param_1 == this) {
        return puVar1;
      }
      puVar1 = param_1;
    } while (param_1 != (uiELEMENT *)0x0);
  }
  return param_1;
}




/* from: gs:ui_main.cpp
   addr: 005038C0 */

uiELEMENT * __thiscall uiELEMENT::FindChildElement(uiELEMENT *this,char *param_1)

{
  uiELEMENT uVar1;
  uiELEMENT *this_00;
  uiELEMENT *puVar2;
  uiELEMENT *puVar3;
  int iVar4;
  uiELEMENT *puVar5;
  bool bVar6;
  
  this_00 = *(uiELEMENT **)(this + 0x14);
  puVar2 = this_00;
  do {
    if (puVar2 == (uiELEMENT *)0x0) {
      while( true ) {
        if (this_00 == (uiELEMENT *)0x0) {
          return (uiELEMENT *)0x0;
        }
        puVar2 = FindChildElement(this_00,param_1);
        if (puVar2 != (uiELEMENT *)0x0) break;
        this_00 = *(uiELEMENT **)(this_00 + 0x10);
      }
      return puVar2;
    }
    puVar3 = puVar2 + 0x18;
    puVar5 = (uiELEMENT *)param_1;
    do {
      uVar1 = *puVar3;
      bVar6 = (byte)uVar1 < (byte)*puVar5;
      if (uVar1 != *puVar5) {
LAB_005038fa:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005038ff;
      }
      if (uVar1 == (uiELEMENT)0x0) break;
      uVar1 = puVar3[1];
      bVar6 = (byte)uVar1 < (byte)puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_005038fa;
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != (uiELEMENT)0x0);
    iVar4 = 0;
LAB_005038ff:
    if (iVar4 == 0) {
      return puVar2;
    }
    puVar2 = *(uiELEMENT **)(puVar2 + 0x10);
  } while( true );
}




/* from: gs:ui_main.cpp
   addr: 00503940 */

void __thiscall uiELEMENT::Enable(uiELEMENT *this,int param_1)

{
  if (param_1 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffff7ff;
    return;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x800;
  return;
}




/* from: gs:ui_main.cpp
   addr: 00503960 */

int __thiscall uiELEMENT::CanAcceptMouseFocus(uiELEMENT *this)

{
  if (((*(uint *)(this + 4) & 2) != 0) && ((*(uint *)(this + 4) & 0x2801) == 0)) {
    return 1;
  }
  return 0;
}




/* from: gs:ui_main.cpp
   addr: 00503980 */

int __thiscall uiELEMENT::CanAcceptKbdFocus(uiELEMENT *this)

{
  if (((*(uint *)(this + 4) & 4) != 0) && ((*(uint *)(this + 4) & 0x2801) == 0)) {
    return 1;
  }
  return 0;
}




/* from: gs:ui_main.cpp
   addr: 005039A0 */

int __thiscall uiELEMENT::CanBeTabstop(uiELEMENT *this)

{
  if (((*(uint *)(this + 4) & 0x2801) == 0) && ((*(uint *)(this + 4) & 0x400) != 0)) {
    return 1;
  }
  return 0;
}




/* from: gs:ui_main.cpp
   addr: 005039C0 */

int __thiscall uiELEMENT::GetTabstopId(uiELEMENT *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ftol();
  iVar2 = ftol();
  return (iVar1 + 2 >> 2) * 0x4000 - iVar2;
}




/* from: gs:ui_main.cpp
   addr: 005039F0 */

void __thiscall uiELEMENT::FindTabstop(uiELEMENT *this,uiTABSTOP_SEARCH *param_1)

{
  int *piVar1;
  int iVar2;
  
  for (piVar1 = *(int **)(this + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
    (**(code **)(*piVar1 + 0x1c))(param_1);
  }
  iVar2 = (**(code **)(*(int *)this + 0x14))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)this + 0x18))();
    if (((*(int *)(param_1 + 4) != 1) || (*(int *)param_1 < iVar2)) &&
       ((*(int *)(param_1 + 4) != -1 || (iVar2 < *(int *)param_1)))) {
      iVar2 = *(int *)param_1 - iVar2;
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < *(int *)(param_1 + 0xc)) {
        *(int *)(param_1 + 0xc) = iVar2;
        *(uiELEMENT **)(param_1 + 8) = this;
      }
    }
  }
  return;
}




/* from: gs:ui_main.cpp
   addr: 00503A60 */

int __thiscall uiELEMENT::StartAppearing(uiELEMENT *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != 0) {
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffe;
  }
  piVar3 = *(int **)(this + 0x14);
  iVar2 = 0;
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = (**(code **)(*piVar3 + 0x20))(param_1);
      if (iVar1 != 0) {
        iVar2 = 1;
      }
      piVar3 = (int *)piVar3[4];
    } while (piVar3 != (int *)0x0);
    if (iVar2 != 0) {
      if (param_1 != 0) {
        *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffffe | 0x40;
        return iVar2;
      }
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x100;
    }
  }
  return iVar2;
}




/* from: gs:ui_main.cpp
   addr: 00503AF0 */

void __thiscall uiELEMENT::FinishAppearing(uiELEMENT *this)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(this + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
    (**(code **)(*piVar1 + 0x24))();
  }
  if ((*(uint *)(this + 4) & 0x100) == 0) {
    (**(code **)(*(int *)this + 0x2c))(1);
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffcbf;
    return;
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 1;
  (**(code **)(*(int *)this + 0x2c))(0);
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xfffffcbf;
  return;
}




/* from: gs:ui_main.cpp
   addr: 00503B50 */

int __thiscall uiELEMENT::ProcessAppearing(uiELEMENT *this)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  if ((*(uint *)(this + 4) & 0x40) == 0) {
    if ((*(uint *)(this + 4) & 0x100) == 0) {
      return 0;
    }
    uVar4 = 0x100;
  }
  else {
    uVar4 = 0x40;
  }
  piVar5 = *(int **)(this + 0x14);
  bVar1 = false;
  if (piVar5 != (int *)0x0) {
    do {
      iVar2 = (**(code **)(*piVar5 + 0x28))();
      if (iVar2 != 0) {
        bVar1 = true;
      }
      piVar5 = (int *)piVar5[4];
    } while (piVar5 != (int *)0x0);
    if (bVar1) {
      return 1;
    }
  }
  if ((*(uint *)(this + 4) & 0x200) != 0) {
    return 1;
  }
  uVar3 = ~uVar4 & *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar3;
  if (uVar4 == 0x100) {
    *(uint *)(this + 4) = uVar3 | 1;
    (**(code **)(*(int *)this + 0x2c))(0);
    return 0;
  }
  (**(code **)(*(int *)this + 0x2c))(1);
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00503BE0 */

int __thiscall uiELEMENT::OnMouseMove(uiELEMENT *this,uiINPUT_INFO *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = (**(code **)(*(int *)this + 0xc))();
  if (iVar5 != 0) {
    fVar1 = (*(float *)(uiSystem + 0x20) + *(float *)(uiSystem + 0x18)) - ___real_41200000;
    fVar3 = (*(float *)(uiSystem + 0x24) + *(float *)(uiSystem + 0x1c)) - ___real_41200000;
    fVar2 = *(float *)(uiSystem + 0x20) + *(float *)(uiSystem + 0x18) + ___real_41200000;
    fVar4 = *(float *)(uiSystem + 0x24) + *(float *)(uiSystem + 0x1c) + ___real_41200000;
    if ((((*(float *)(this + 0x58) < fVar1) && (*(float *)(this + 0x5c) < fVar3)) &&
        (fVar2 < *(float *)(this + 0x60))) && (fVar4 < *(float *)(this + 100))) {
      *(uiELEMENT **)(param_1 + 0x10) = this;
      return 0;
    }
    if (((*(float *)(this + 0x58) <= fVar2) && (*(float *)(this + 0x5c) <= fVar4)) &&
       ((fVar1 <= *(float *)(this + 0x60) && (fVar3 <= *(float *)(this + 100))))) {
      *(uiELEMENT **)(param_1 + 0x10) = this;
      return 0;
    }
  }
  return 1;
}




/* from: gs:ui_main.cpp
   addr: 00503CE0 */

int __thiscall uiELEMENT::ProcessAction(uiELEMENT *this,int param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uiELEMENT *puVar4;
  
  switch(param_1) {
  case 0:
    iVar2 = (**(code **)(*(int *)this + 0x3c))(param_2);
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(uiELEMENT **)(this + 0x14);
    if (puVar4 == (uiELEMENT *)0x0) {
      return 1;
    }
    do {
      ProcessAction(puVar4,0,param_2);
      puVar4 = *(uiELEMENT **)(puVar4 + 0x10);
    } while (puVar4 != (uiELEMENT *)0x0);
    return 1;
  case 1:
    iVar2 = (**(code **)(*(int *)this + 0x44))(param_2);
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(uiELEMENT **)(this + 0x14);
    if (puVar4 == (uiELEMENT *)0x0) {
      return 1;
    }
    do {
      ProcessAction(puVar4,1,param_2);
      puVar4 = *(uiELEMENT **)(puVar4 + 0x10);
    } while (puVar4 != (uiELEMENT *)0x0);
    return 1;
  case 2:
    iVar2 = (**(code **)(*(int *)this + 0x40))(param_2);
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(uiELEMENT **)(this + 0x14);
    if (puVar4 == (uiELEMENT *)0x0) {
      return 1;
    }
    do {
      ProcessAction(puVar4,2,param_2);
      puVar4 = *(uiELEMENT **)(puVar4 + 0x10);
    } while (puVar4 != (uiELEMENT *)0x0);
    return 1;
  case 3:
    iVar2 = (**(code **)(*(int *)this + 0x48))(param_2);
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(uiELEMENT **)(this + 0x14);
    bVar1 = true;
    if (puVar4 != (uiELEMENT *)0x0) {
      do {
        iVar2 = ProcessAction(puVar4,3,param_2);
        if (iVar2 == 0) {
          bVar1 = false;
        }
        puVar4 = *(uiELEMENT **)(puVar4 + 0x10);
      } while (puVar4 != (uiELEMENT *)0x0);
      if (!bVar1) {
        return 0;
      }
    }
    iVar2 = (**(code **)(*(int *)this + 0x4c))(param_2);
    break;
  case 4:
    iVar2 = (**(code **)(*(int *)this + 0x48))(param_2);
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(uiELEMENT **)(this + 0x14);
    bVar1 = true;
    if (puVar4 != (uiELEMENT *)0x0) {
      do {
        iVar2 = ProcessAction(puVar4,4,param_2);
        if (iVar2 == 0) {
          bVar1 = false;
        }
        puVar4 = *(uiELEMENT **)(puVar4 + 0x10);
      } while (puVar4 != (uiELEMENT *)0x0);
      if (!bVar1) {
        return 0;
      }
    }
    iVar2 = (**(code **)(*(int *)this + 0x50))(param_2);
    break;
  case 5:
    iVar2 = (**(code **)(*(int *)this + 0x48))(param_2);
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(uiELEMENT **)(this + 0x14);
    bVar1 = true;
    if (puVar4 != (uiELEMENT *)0x0) {
      do {
        iVar2 = ProcessAction(puVar4,5,param_2);
        if (iVar2 == 0) {
          bVar1 = false;
        }
        puVar4 = *(uiELEMENT **)(puVar4 + 0x10);
      } while (puVar4 != (uiELEMENT *)0x0);
      if (!bVar1) {
        return 0;
      }
    }
    if ((((byte)this[4] & 8) == 0) && (this != *(uiELEMENT **)(uiSystem + 0x10))) {
      return 1;
    }
    iVar2 = (**(code **)(*(int *)this + 0x54))(param_2);
    break;
  case 6:
    iVar2 = (**(code **)(*(int *)this + 0x48))(param_2);
    if (iVar2 == 0) {
      return 0;
    }
    puVar4 = *(uiELEMENT **)(this + 0x14);
    bVar1 = true;
    if (puVar4 != (uiELEMENT *)0x0) {
      do {
        iVar2 = ProcessAction(puVar4,6,param_2);
        if (iVar2 == 0) {
          bVar1 = false;
        }
        puVar4 = *(uiELEMENT **)(puVar4 + 0x10);
      } while (puVar4 != (uiELEMENT *)0x0);
      if (!bVar1) {
        return 0;
      }
    }
    if ((((byte)this[4] & 8) == 0) && (this != *(uiELEMENT **)(uiSystem + 0x10))) {
      return 1;
    }
    iVar2 = (**(code **)(*(int *)this + 0x58))(param_2);
    break;
  case 7:
    if (param_2 == (void *)0x0) {
      uVar3 = *(uint *)(this + 4) | 1;
    }
    else {
      uVar3 = *(uint *)(this + 4) & 0xfffffffe;
    }
    *(uint *)(this + 4) = uVar3;
    for (puVar4 = *(uiELEMENT **)(this + 0x14); puVar4 != (uiELEMENT *)0x0;
        puVar4 = *(uiELEMENT **)(puVar4 + 0x10)) {
      ProcessAction(puVar4,7,param_2);
    }
    return 1;
  default:
    goto switchD_00503cf3_default;
  }
  if (iVar2 != 0) {
    return 1;
  }
switchD_00503cf3_default:
  return 0;
}




/* from: gs:ui_main.cpp
   addr: 00503F60 */

int __thiscall uiFRAME::ProcessRender(uiFRAME *this,void *param_1)

{
  if ((*(uint *)(this + 4) & 0x2001) != 0) {
    return 0;
  }
  return ~*(uint *)(this + 4) >> 0xd & 1;
}




/* from: gs:ui_main.cpp
   addr: 00503F80 */

int __thiscall uiFRAME::OnPreInput(uiFRAME *this,uiINPUT_INFO *param_1)

{
  if (((*(uint *)(this + 4) & 0x2901) == 0) && ((*(uint *)(this + 4) & 0x40) == 0)) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00503FA0 */

void __thiscall uiFRAME::OnAppeared(uiFRAME *this,int param_1)

{
  uiUI_SYSTEM *this_00;
  int iVar1;
  uiELEMENT *puVar2;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  uiELEMENT *local_4;
  
  local_8 = 0;
  local_4 = (uiELEMENT *)0x0;
  local_14 = 1;
  local_10 = *(float *)(uiSystem + 0x20) + *(float *)(uiSystem + 0x18);
  local_c = *(float *)(uiSystem + 0x24) + *(float *)(uiSystem + 0x1c);
  *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
  this_00 = uiSystem;
  if ((gsAppState & 0x1000U) != 0) {
    if (*(uiELEMENT **)(uiSystem + 8) == (uiELEMENT *)0x0) {
      iVar1 = uiELEMENT::ProcessAction(*(uiELEMENT **)(uiSystem + 300),3,&local_14);
      puVar2 = local_4;
      if (iVar1 != 0) {
        puVar2 = (uiELEMENT *)0x0;
      }
      uiUI_SYSTEM::SetMouseFocus(this_00,puVar2);
    }
    else {
      uiELEMENT::ProcessAction(*(uiELEMENT **)(uiSystem + 8),3,&local_14);
    }
  }
  *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
  return;
}




/* from: gs:ui_main.cpp
   addr: 00504060 */

void __thiscall uiFRAME_GROUP::Init(uiFRAME_GROUP *this,objOBJ *param_1)

{
  int iVar1;
  
  uiELEMENT::Init((uiELEMENT *)this,param_1);
  for (iVar1 = *(int *)(this + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 1;
  }
  return;
}




/* from: gs:ui_main.cpp
   addr: 005040A0 */

int __thiscall uiFRAME_GROUP::ShowFrame(uiFRAME_GROUP *this,char *param_1,int param_2)

{
  uiELEMENT uVar1;
  uiELEMENT *this_00;
  uiELEMENT *puVar2;
  int iVar3;
  uiELEMENT *puVar4;
  uiELEMENT *puVar5;
  bool bVar6;
  
  this_00 = *(uiELEMENT **)(this + 0x14);
  for (puVar4 = this_00; puVar2 = this_00, puVar4 != (uiELEMENT *)0x0;
      puVar4 = *(uiELEMENT **)(puVar4 + 0x10)) {
    puVar2 = puVar4 + 0x18;
    puVar5 = (uiELEMENT *)param_1;
    do {
      uVar1 = *puVar2;
      bVar6 = (byte)uVar1 < (byte)*puVar5;
      if (uVar1 != *puVar5) {
LAB_005040df:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005040e4;
      }
      if (uVar1 == (uiELEMENT)0x0) break;
      uVar1 = puVar2[1];
      bVar6 = (byte)uVar1 < (byte)puVar5[1];
      if (uVar1 != puVar5[1]) goto LAB_005040df;
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 2;
    } while (uVar1 != (uiELEMENT)0x0);
    iVar3 = 0;
LAB_005040e4:
    if (iVar3 == 0) goto LAB_0050410a;
  }
  for (; puVar2 != (uiELEMENT *)0x0; puVar2 = *(uiELEMENT **)(puVar2 + 0x10)) {
    puVar4 = uiELEMENT::FindChildElement(puVar2,param_1);
    if (puVar4 != (uiELEMENT *)0x0) goto LAB_0050414d;
  }
  puVar4 = (uiELEMENT *)0x0;
LAB_0050410a:
  puVar2 = this_00;
  if (puVar4 == (uiELEMENT *)0x0) {
    while (puVar4 = puVar2, puVar4 != (uiELEMENT *)0x0) {
      iVar3 = 5;
      bVar6 = true;
      puVar2 = puVar4 + 0x18;
      puVar5 = (uiELEMENT *)&s_main;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar6 = *puVar2 == *puVar5;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      } while (bVar6);
      if (bVar6) goto LAB_0050414d;
      puVar2 = *(uiELEMENT **)(puVar4 + 0x10);
    }
    for (; this_00 != (uiELEMENT *)0x0; this_00 = *(uiELEMENT **)(this_00 + 0x10)) {
      puVar4 = uiELEMENT::FindChildElement(this_00,&s_main);
      if (puVar4 != (uiELEMENT *)0x0) goto LAB_0050414d;
    }
    puVar4 = (uiELEMENT *)0x0;
  }
LAB_0050414d:
  iVar3 = ShowFrame(this,(uiFRAME *)puVar4,param_2);
  return iVar3;
}




/* from: gs:ui_main.cpp
   addr: 00504170 */

int __thiscall uiFRAME_GROUP::ShowFrame(uiFRAME_GROUP *this,uiFRAME *param_1,int param_2)

{
  if (*(int **)(this + 0x6c) == (int *)0x0) {
    *(uiFRAME **)(this + 0x6c) = param_1;
    if (param_1 != (uiFRAME *)0x0) {
      (**(code **)(*(int *)param_1 + 0x20))(1);
      (**(code **)(**(int **)(this + 0x6c) + 0x24))();
    }
    return 1;
  }
  if ((*(int *)(this + 0x74) == 1) || (*(int *)(this + 0x74) == 2)) {
    (**(code **)(**(int **)(this + 0x6c) + 0x24))();
  }
  if ((*(int *)(this + 0x74) != 3) && (*(int *)(this + 0x74) != 4)) {
    (**(code **)(**(int **)(this + 0x6c) + 0x20))(0);
  }
  if ((param_2 & 8U) != 0) {
    if (param_1 != (uiFRAME *)0x0) {
      *(uiFRAME **)(this + 0x70) = param_1;
      *(undefined4 *)(this + 0x74) = 4;
      return 1;
    }
    (**(code **)(**(int **)(this + 0x6c) + 0x24))();
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x74) = 0;
    return 1;
  }
  *(uiFRAME **)(this + 0x70) = param_1;
  *(undefined4 *)(this + 0x74) = 3;
  return 1;
}




/* from: gs:ui_main.cpp
   addr: 00504230 */

int __thiscall uiFRAME_GROUP::ProcessUpdate(uiFRAME_GROUP *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  
  switch(*(undefined4 *)(this + 0x74)) {
  case 1:
    if ((*(int **)(this + 0x6c) != (int *)0x0) &&
       ((**(code **)(**(int **)(this + 0x6c) + 0x28))(),
       (*(byte *)(*(int *)(this + 0x6c) + 4) & 0x40) != 0)) {
      return 1;
    }
    break;
  case 2:
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 0x24))();
      *(undefined4 *)(this + 0x74) = 0;
      return 1;
    }
    break;
  case 3:
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 0x28))();
      uVar1 = *(uint *)(*(int *)(this + 0x6c) + 4);
      if ((uVar1 & 0x100) != 0) {
        return 1;
      }
      *(uint *)(*(int *)(this + 0x6c) + 4) = uVar1 | 1;
    }
    iVar2 = *(int *)(this + 0x70);
    *(undefined4 *)(this + 0x70) = 0;
    *(int *)(this + 0x6c) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(this + 0x74) = 1;
LAB_005042e8:
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffffe;
      (**(code **)(**(int **)(this + 0x6c) + 0x20))(1);
      return 1;
    }
    break;
  case 4:
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 0x24))();
      *(uint *)(*(int *)(this + 0x6c) + 4) = *(uint *)(*(int *)(this + 0x6c) + 4) | 1;
    }
    iVar2 = *(int *)(this + 0x70);
    *(undefined4 *)(this + 0x70) = 0;
    *(int *)(this + 0x6c) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(this + 0x74) = 2;
      goto LAB_005042e8;
    }
    break;
  default:
    goto switchD_0050423d_default;
  }
  *(undefined4 *)(this + 0x74) = 0;
switchD_0050423d_default:
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00504320 */

void __thiscall uiCURSOR::Init(uiCURSOR *this,objOBJ *param_1)

{
  float fVar1;
  float local_c;
  float local_8;
  
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 200);
  *(float *)(this + 0x20) = -*(float *)(param_1 + 0xd8);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0xd4);
  *(float *)(this + 0x28) = -*(float *)(param_1 + 0xcc);
  local_c = (*(float *)(this + 0x24) + *(float *)(this + 0x1c)) * ___real_3f000000;
  fVar1 = _m2dVZero - local_c;
  local_8 = DAT_00963758 - (*(float *)(this + 0x28) + *(float *)(this + 0x20)) * ___real_3f000000;
  *(float *)(this + 0x1c) = fVar1 + *(float *)(this + 0x1c);
  *(float *)(this + 0x20) = local_8 + *(float *)(this + 0x20);
  *(float *)(this + 0x24) = fVar1 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = local_8 + *(float *)(this + 0x28);
  uiRENDER_ELEM::Init((uiRENDER_ELEM *)(this + 0x2c),param_1);
  *(float *)(this + 0x14) = *(float *)(this + 0x24) - *(float *)(this + 0x1c);
  *(float *)(this + 0x18) = *(float *)(this + 0x28) - *(float *)(this + 0x20);
  *(float *)(this + 0x14) = *(float *)(this + 0x14) * ___real_3f000000;
  *(float *)(this + 0x18) = *(float *)(this + 0x18) * ___real_3f000000;
  objOBJ::GetOrigin(param_1,(m3dV *)&local_c);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(float *)(this + 4) =
       local_c - (*(float *)(this + 0x98) + *(float *)(this + 0x78)) * ___real_3f000000;
  *(float *)(this + 8) =
       -local_8 - (*(float *)(this + 0x9c) + *(float *)(this + 0x7c)) * ___real_3f000000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00504430 */

void __thiscall uiCURSOR::MoveTo(uiCURSOR *this,m2dV *param_1)

{
  m2dV *pmVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pmVar1 = (m2dV *)(this + 0xc);
  fVar2 = *(float *)(uiSystem + 0xec);
  fVar3 = *(float *)(uiSystem + 0xf0);
  *(undefined4 *)pmVar1 = *(undefined4 *)param_1;
  fVar4 = *(float *)pmVar1 - *(float *)(this + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 4);
  fVar5 = *(float *)(this + 0x10) - *(float *)(this + 8);
  *(float *)pmVar1 = fVar4;
  *(float *)(this + 0x10) = fVar5;
  if (fVar4 + *(float *)(this + 0x14) <= fVar2) {
    if (fVar4 - *(float *)(this + 0x14) < ___real_00000000) {
      *(undefined4 *)pmVar1 = *(undefined4 *)(this + 0x14);
    }
  }
  else {
    *(float *)pmVar1 = fVar2 - *(float *)(this + 0x14);
  }
  if (fVar5 + *(float *)(this + 0x18) <= fVar3) {
    if (fVar5 - *(float *)(this + 0x18) < ___real_00000000) {
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x18);
    }
  }
  else {
    *(float *)(this + 0x10) = fVar3 - *(float *)(this + 0x18);
  }
  fVar2 = *(float *)pmVar1 - (*(float *)(this + 0x1c) + *(float *)(this + 0x24)) * ___real_3f000000;
  fVar3 = *(float *)(this + 0x10) -
          (*(float *)(this + 0x28) + *(float *)(this + 0x20)) * ___real_3f000000;
  *(float *)(this + 0x1c) = fVar2 + *(float *)(this + 0x1c);
  *(float *)(this + 0x20) = fVar3 + *(float *)(this + 0x20);
  *(float *)(this + 0x24) = fVar2 + *(float *)(this + 0x24);
  *(float *)(this + 0x28) = fVar3 + *(float *)(this + 0x28);
  uiRENDER_ELEM::MoveTo((uiRENDER_ELEM *)(this + 0x2c),pmVar1);
  return;
}




/* from: gs:ui_main.cpp
   addr: 00504550 */

void __thiscall uiCURSOR::Show(uiCURSOR *this,int param_1)

{
  if (param_1 == 0) {
    *(uint *)this = *(uint *)this | 1;
    return;
  }
  *(uint *)this = *(uint *)this & 0xfffffffe;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00504570 */

uiUI_SYSTEM * __thiscall uiUI_SYSTEM::uiUI_SYSTEM(uiUI_SYSTEM *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x30) = _m2dVZero;
  *(undefined4 *)(this + 0x34) = DAT_00963758;
  *(undefined4 *)(this + 0x38) = _m2dVZero;
  *(undefined4 *)(this + 0x3c) = DAT_00963758;
  uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x40));
  uVar1 = _m2dVZero;
  *(undefined4 *)(this + 0x28) = _m2dVZero;
  uVar2 = DAT_00963758;
  *(undefined4 *)(this + 0x2c) = DAT_00963758;
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar2;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xfc) = _m2dVOneXY;
  *(undefined4 *)(this + 0x100) = DAT_005f99c8;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x104) = 0x447a0000;
  return this;
}




/* from: gs:ui_main.cpp
   addr: 00504640 */

void __thiscall uiUI_SYSTEM::~uiUI_SYSTEM(uiUI_SYSTEM *this)

{
  *(undefined ***)this = &_vftable_;
  apFree(*(void **)(this + 0x118));
  uiRENDER_ELEM::~uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x40));
  return;
}




/* from: gs:ui_main.cpp
   addr: 00504670 */

int __thiscall uiUI_SYSTEM::RegisterDefaultElements(uiUI_SYSTEM *this)

{
  arrVector<struct_uiELEMENT_INFO> *paVar1;
  uiUI_SYSTEM *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  uiELEMENT_INFO local_44 [68];
  
  puVar2 = uiSystem;
  iVar4 = 0;
  if (0 < *(int *)(uiSystem + 0x11c)) {
    pcVar6 = *(char **)(uiSystem + 0x118);
    do {
      iVar3 = 5;
      bVar8 = true;
      pcVar5 = &s_area;
      pcVar7 = pcVar6;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        if (*(int *)(uiSystem + 0x118) + iVar4 * 0x44 != 0) goto LAB_00504713;
        break;
      }
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 0x44;
    } while (iVar4 < *(int *)(uiSystem + 0x11c));
  }
  paVar1 = (arrVector<struct_uiELEMENT_INFO> *)(uiSystem + 0x118);
  arrVector<struct_uiELEMENT_INFO>::Insert(paVar1,*(int *)(uiSystem + 0x11c),local_44,1);
  pcVar6 = (char *)(*(int *)paVar1 + -0x44 + *(int *)(puVar2 + 0x11c) * 0x44);
  strncpy(pcVar6,&s_area,0x40);
  pcVar6[0x3f] = '\0';
  *(code **)(pcVar6 + 0x40) = uiAREA::Create;
LAB_00504713:
  puVar2 = uiSystem;
  iVar4 = 0;
  if (0 < *(int *)(uiSystem + 0x11c)) {
    pcVar6 = *(char **)(uiSystem + 0x118);
    do {
      iVar3 = 7;
      bVar8 = true;
      pcVar5 = s_window;
      pcVar7 = pcVar6;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        if (*(int *)(uiSystem + 0x118) + iVar4 * 0x44 != 0) goto LAB_005047a6;
        break;
      }
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 0x44;
    } while (iVar4 < *(int *)(uiSystem + 0x11c));
  }
  paVar1 = (arrVector<struct_uiELEMENT_INFO> *)(uiSystem + 0x118);
  arrVector<struct_uiELEMENT_INFO>::Insert(paVar1,*(int *)(uiSystem + 0x11c),local_44,1);
  pcVar6 = (char *)(*(int *)paVar1 + -0x44 + *(int *)(puVar2 + 0x11c) * 0x44);
  strncpy(pcVar6,s_window,0x40);
  pcVar6[0x3f] = '\0';
  *(code **)(pcVar6 + 0x40) = uiWINDOW::Create;
LAB_005047a6:
  puVar2 = uiSystem;
  iVar4 = 0;
  if (0 < *(int *)(uiSystem + 0x11c)) {
    pcVar6 = *(char **)(uiSystem + 0x118);
    do {
      iVar3 = 6;
      bVar8 = true;
      pcVar5 = s_frame;
      pcVar7 = pcVar6;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        if (*(int *)(uiSystem + 0x118) + iVar4 * 0x44 != 0) goto LAB_00504839;
        break;
      }
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 0x44;
    } while (iVar4 < *(int *)(uiSystem + 0x11c));
  }
  paVar1 = (arrVector<struct_uiELEMENT_INFO> *)(uiSystem + 0x118);
  arrVector<struct_uiELEMENT_INFO>::Insert(paVar1,*(int *)(uiSystem + 0x11c),local_44,1);
  pcVar6 = (char *)(*(int *)paVar1 + -0x44 + *(int *)(puVar2 + 0x11c) * 0x44);
  strncpy(pcVar6,s_frame,0x40);
  pcVar6[0x3f] = '\0';
  *(code **)(pcVar6 + 0x40) = uiFRAME::Create;
LAB_00504839:
  puVar2 = uiSystem;
  iVar4 = 0;
  if (0 < *(int *)(uiSystem + 0x11c)) {
    pcVar6 = *(char **)(uiSystem + 0x118);
    do {
      iVar3 = 8;
      bVar8 = true;
      pcVar5 = &s_frm_grp;
      pcVar7 = pcVar6;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *pcVar5 == *pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        if (*(int *)(uiSystem + 0x118) + iVar4 * 0x44 != 0) {
          return 1;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      pcVar6 = pcVar6 + 0x44;
    } while (iVar4 < *(int *)(uiSystem + 0x11c));
  }
  paVar1 = (arrVector<struct_uiELEMENT_INFO> *)(uiSystem + 0x118);
  arrVector<struct_uiELEMENT_INFO>::Insert(paVar1,*(int *)(uiSystem + 0x11c),local_44,1);
  pcVar6 = (char *)(*(int *)paVar1 + -0x44 + *(int *)(puVar2 + 0x11c) * 0x44);
  strncpy(pcVar6,&s_frm_grp,0x40);
  pcVar6[0x3f] = '\0';
  *(code **)(pcVar6 + 0x40) = uiFRAME_GROUP::Create;
  return 1;
}




/* from: gs:ui_main.cpp
   addr: 005048E0 */

char * __thiscall uiUI_SYSTEM::GetTypeName(uiUI_SYSTEM *this,int param_1)

{
  if (param_1 == 0) {
    return &s_area;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return (char *)0x0;
    }
    return s_frame;
  }
  return s_window;
}




/* from: gs:ui_main.cpp
   addr: 00504910 */

int __thiscall uiUI_SYSTEM::GetTextFlags(uiUI_SYSTEM *this,char *param_1)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  pcVar1 = strstr(param_1,s_left);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(param_1,s_centerx);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(param_1,s_right);
      if (pcVar1 != (char *)0x0) {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  pcVar1 = strstr(param_1,s_top);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strstr(param_1,s_centery);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = strstr(param_1,s_bottom);
      if (pcVar1 == (char *)0x0) {
        strstr(param_1,s_baseline);
      }
      else {
        uVar2 = uVar2 | 8;
      }
    }
    else {
      uVar2 = uVar2 | 0xc;
    }
  }
  else {
    uVar2 = uVar2 | 4;
  }
  pcVar1 = strstr(param_1,s_fixed);
  if (pcVar1 != (char *)0x0) {
    uVar2 = uVar2 | 0x10;
  }
  return uVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 005049D0 */

void __thiscall uiUI_SYSTEM::Resize(uiUI_SYSTEM *this)

{
  int iVar1;
  float fVar2;
  
  if (((*(float *)(this + 0xec) != ___real_00000000) ||
      (*(float *)(this + 0xf0) != ___real_00000000)) &&
     ((*(int *)(this + 0xf4) != 0 || (*(int *)(this + 0xf8) != 0)))) {
    fVar2 = (float)*(int *)(this + 0xf4) / *(float *)(this + 0xec);
    *(float *)(this + 0xfc) = fVar2;
    *(float *)(this + 0x100) = (float)*(int *)(this + 0xf8) / *(float *)(this + 0xf0);
    if ((*(int *)(*(int *)(this + 0x124) + 0x10) != 0) &&
       (iVar1 = *(int *)(*(int *)(*(int *)(this + 0x124) + 0x10) + 0x38), iVar1 != 0)) {
      m3dMATR::Scale((m3dMATR *)(iVar1 + 0x7c),fVar2,
                     (float)*(int *)(this + 0xf8) / *(float *)(this + 0xf0),1.0,0);
    }
    camCAMERA::SetViewWindow
              (*(camCAMERA **)(this + 0x110),0.0,0.0,(float)*(int *)(this + 0xf4),
               (float)*(int *)(this + 0xf8));
  }
  return;
}




/* from: gs:ui_main.cpp
   addr: 00504AA0 */

void __thiscall uiUI_SYSTEM::Resize(uiUI_SYSTEM *this,int param_1,int param_2)

{
  *(int *)(this + 0xf4) = param_1;
  *(int *)(this + 0xf8) = param_2;
  Resize(this);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00504AC0 */

int __thiscall uiUI_SYSTEM::Init(uiUI_SYSTEM *this)

{
  int iVar1;
  char *pcVar2;
  animTPL *paVar3;
  animINST *paVar4;
  objOBJ *poVar5;
  void *pvVar6;
  uiELEMENT *puVar7;
  camCAMERA *pcVar8;
  int iVar9;
  m3dV amStack_14 [20];
  
  (**(code **)(*(int *)this + 0x2c))();
  iVar1 = (**(code **)(*(int *)this + 0x40))();
  if (iVar1 == 0) {
    return 0;
  }
  iVar9 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x4c))();
  if (0 < iVar1) {
    do {
      pcVar2 = (char *)(**(code **)(*(int *)this + 0x50))(iVar9);
      iVar1 = uiFONT_MANAGER::CreateFont(fontManager,pcVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar9 = iVar9 + 1;
      iVar1 = (**(code **)(*(int *)this + 0x4c))();
    } while (iVar9 < iVar1);
  }
  iVar1 = (**(code **)(*(int *)this + 0x44))();
  if (iVar1 == 0) {
    return 0;
  }
  paVar3 = (animTPL *)(**(code **)(*(int *)gsSysLevel + 0x24))(iVar1);
  if (paVar3 == (animTPL *)0x0) {
    return 0;
  }
  paVar4 = scnSCENE::CreateInst(gsScenePtr,paVar3,(animCREATE_DATA *)0x0,-1);
  *(animINST **)(this + 0x124) = paVar4;
  if (paVar4 == (animINST *)0x0) {
    return 0;
  }
  (**(code **)(*(int *)gsSysLevel + 0x2c))(paVar4);
  *(uint *)(*(int *)(this + 0x124) + 4) = *(uint *)(*(int *)(this + 0x124) + 4) | 0x11;
  *(uint *)(*(int *)(this + 0x124) + 4) = *(uint *)(*(int *)(this + 0x124) + 4) | 0x10000;
  animINST::Validate(*(animINST **)(this + 0x124),6);
  poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0x124) + 0x10),s_ui_top);
  if (poVar5 == (objOBJ *)0x0) {
    return 0;
  }
  *(float *)(this + 0xec) = *(float *)(poVar5 + 0xd4) - *(float *)(poVar5 + 200);
  *(float *)(this + 0xf0) = *(float *)(poVar5 + 0xd8) - *(float *)(poVar5 + 0xcc);
  iVar1 = *(int *)(this + 0x11c);
  if (iVar1 != *(int *)(this + 0x120)) {
    pvVar6 = apRealloc(*(void **)(this + 0x118),iVar1 * 0x44);
    *(void **)(this + 0x118) = pvVar6;
    *(int *)(this + 0x120) = iVar1;
  }
  puVar7 = uiElementCreate(&s_frm_grp,poVar5,(uiELEMENT *)0x0);
  if (puVar7 == (uiELEMENT *)0x0) {
    return 0;
  }
  *(uiELEMENT **)(this + 300) = puVar7;
  poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0x124) + 0x10),s_ui_camera);
  if (poVar5 == (objOBJ *)0x0) {
    return 0;
  }
  m3dMATR::GetOrigin((m3dMATR *)(poVar5 + 0x3c),amStack_14);
  m3dMATR::GetAxisZ((m3dMATR *)(poVar5 + 0x3c),(m3dV *)&stack0xffffffe0);
  pcVar8 = (camCAMERA *)operator_new(0x20c);
  if (pcVar8 == (camCAMERA *)0x0) {
    pcVar8 = (camCAMERA *)0x0;
  }
  else {
    pcVar8 = (camCAMERA *)camCAMERA::camCAMERA(pcVar8);
  }
  *(camCAMERA **)(this + 0x110) = pcVar8;
  camCAMERA::SetViewWindow(pcVar8,0.0,0.0,*(float *)(this + 0xec),*(float *)(this + 0xf0));
  camCAMERA::SetViewPort(*(camCAMERA **)(this + 0x110),0.0,0.0,1.0,1.0);
  camCAMERA::SetLookAt(*(camCAMERA **)(this + 0x110),(m3dV *)&stack0xffffffe0);
  camCAMERA::MoveTo(*(camCAMERA **)(this + 0x110),amStack_14);
  poVar5 = objFindName(*(objOBJ **)(*(int *)(this + 0x124) + 0x10),s_ui_cursor);
  if (poVar5 == (objOBJ *)0x0) {
    return 0;
  }
  uiCURSOR::Init((uiCURSOR *)(this + 0x14),poVar5);
  Resize(this);
  uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 300),0,(void *)0x0);
  return 1;
}




/* from: gs:ui_main.cpp
   addr: 00504D50 */

void __thiscall uiUI_SYSTEM::Term(uiUI_SYSTEM *this)

{
  camCAMERA *this_00;
  undefined4 *puVar1;
  uiELEMENT *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  this_00 = *(camCAMERA **)(this + 0x110);
  if (this_00 != (camCAMERA *)0x0) {
    camCAMERA::~camCAMERA(this_00);
    operator_delete(this_00);
  }
  *(undefined4 *)(this + 0x110) = 0;
  gsAppState = gsAppState & 0xffffefff;
  puVar1 = *(undefined4 **)(this + 300);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (uiELEMENT *)puVar1[5];
    while (puVar2 != (uiELEMENT *)0x0) {
      uiElementDestroy(puVar2);
      puVar2 = (uiELEMENT *)puVar1[5];
    }
    if (puVar1[3] == 0) {
      if (puVar1[2] != 0) {
        *(undefined4 *)(puVar1[2] + 0x14) = puVar1[4];
      }
    }
    else {
      *(undefined4 *)(puVar1[3] + 0x10) = puVar1[4];
    }
    if (puVar1[4] != 0) {
      *(undefined4 *)(puVar1[4] + 0xc) = puVar1[3];
    }
    (**(code **)*puVar1)(1);
    *(undefined4 *)(this + 300) = 0;
  }
  iVar5 = 0;
  iVar3 = (**(code **)(*(int *)this + 0x4c))();
  if (0 < iVar3) {
    do {
      pcVar4 = (char *)(**(code **)(*(int *)this + 0x50))(iVar5);
      uiFONT_MANAGER::DestroyFont(fontManager,pcVar4);
      iVar5 = iVar5 + 1;
      iVar3 = (**(code **)(*(int *)this + 0x4c))();
    } while (iVar5 < iVar3);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00504E10 */

int __thiscall uiUI_SYSTEM::Activate(uiUI_SYSTEM *this,int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  animINST *paVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 != *(int *)(this + 4)) {
    (**(code **)(*(int *)this + 0x3c))();
    *(int *)(this + 4) = param_1;
    uiFRAME_GROUP::ShowFrame(*(uiFRAME_GROUP **)(this + 300),(uiFRAME *)0x0,8);
    if (*(int *)(this + 4) != 3) {
      if ((gsAppState & 0x40000U) == 0) {
        if ((DAT_0094dce0 & 1) == 0) {
          DAT_0094dce0 = DAT_0094dce0 | 1;
          DAT_0094dcf0 = 0;
          DAT_0094dcf1 = 0x40;
          _DAT_0094de38 = 0;
          _DAT_0094de3c = 0;
          _DAT_0094de40 = 0;
          DAT_0094dcf4 = 0;
          DAT_0094ddf8 = 0;
          _DAT_0094dcf2 = 0x154;
          atexit((_func_4879 *)&__E9);
        }
        for (paVar3 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0); paVar3 != (animINST *)0x0;
            paVar3 = scnSCENE::FindNextInst(gsScenePtr,paVar3)) {
          iVar2 = *(int *)(paVar3 + 0x13c);
          if ((iVar2 != 0) && ((*(uint *)(iVar2 + 0xb4) & 0x40) != 0)) {
            *(uint *)(iVar2 + 0xb4) = *(uint *)(iVar2 + 0xb4) & 0xfffffffb;
          }
        }
        pcVar4 = (char *)(**(code **)(*(int *)this + 0x40))();
        pcVar5 = &DAT_0094dcf4;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysLevel,0x3ec,&DAT_0094dcf0,(msgADDR *)0x0);
        for (paVar3 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0); paVar3 != (animINST *)0x0;
            paVar3 = scnSCENE::FindNextInst(gsScenePtr,paVar3)) {
          if ((*(uint *)(paVar3 + 4) & 0x800) != 0) {
            *(uint *)(paVar3 + 4) = *(uint *)(paVar3 + 4) | 0x40001010;
            iVar2 = *(int *)(paVar3 + 0x138);
            if (iVar2 != 0) {
              *(uint *)(iVar2 + 0x84) = *(uint *)(iVar2 + 0x84) & 0xfffff7ff;
            }
            iVar2 = *(int *)(paVar3 + 0x13c);
            if (iVar2 != 0) {
              *(uint *)(iVar2 + 0xb4) = *(uint *)(iVar2 + 0xb4) | 4;
              *(uint *)(*(int *)(paVar3 + 0x13c) + 0xb4) =
                   *(uint *)(*(int *)(paVar3 + 0x13c) + 0xb4) | 0x40;
              *(int *)(*(int *)(paVar3 + 0x13c) + 0x24) =
                   *(int *)(*(int *)(paVar3 + 0x13c) + 0x24) + 1;
              gsMP_SERVER::UnDeclSyncable(gsSysServer,*(entIACTIVE_OBJ **)(paVar3 + 0x13c));
            }
          }
        }
      }
      *(camCAMERA **)(this + 0x114) = gsCameraPtr;
      gsCameraPtr = *(camCAMERA **)(this + 0x110);
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) & 0xfffffffe;
      *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) | 0x100;
      gsAppState = gsAppState | 0x1000;
      gsMsgChangeMode(0);
      return 1;
    }
    *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
    *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) & 0xfffffeff;
    (**(code **)(*(int *)rendDrv + 0x88))(gsScenePtr);
  }
  return 1;
}




/* from: gs:ui_main.cpp
   addr: 00505050 */

void __thiscall uiUI_SYSTEM::Deactivate(uiUI_SYSTEM *this)

{
  if (*(int *)(this + 4) != 3) {
    if (*(int *)(this + 4) != 0) {
      gsAppState = gsAppState & 0xffffefff;
      *(uint *)(this + 0x14) = *(uint *)(this + 0x14) | 1;
      *(undefined4 *)(this + 8) = 0;
      camCAMERA::SetViewWindow
                (*(camCAMERA **)(this + 0x114),0.0,0.0,*(float *)(gsCameraPtr + 0x144),
                 *(float *)(gsCameraPtr + 0x148));
      gsCameraPtr = *(camCAMERA **)(this + 0x114);
      *(undefined4 *)(this + 0x114) = 0;
      gsMsgChangeMode(1);
      *(uint *)(rendDrv + 4) = *(uint *)(rendDrv + 4) & 0xfffffeff;
    }
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  *(undefined4 *)(this + 4) = 0;
  return;
}




/* from: gs:ui_main.cpp
   addr: 005050E0 */

void __thiscall
uiUI_SYSTEM::MsgBoxW
          (uiUI_SYSTEM *this,ushort *param_1,ushort *param_2,int param_3,int param_4,
          uiELEMENT *param_5,char *param_6)

{
  if (param_6 != (char *)0x0) {
    (**(code **)(*(int *)this + 0x10))(param_6,0);
  }
  return;
}




/* from: gs:ui_main.cpp
   addr: 00505110 */

int __thiscall uiUI_SYSTEM::SetMouseFocus(uiUI_SYSTEM *this,uiELEMENT *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != *(uiELEMENT **)(this + 0xc)) {
    if (param_1 != (uiELEMENT *)0x0) {
      iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
      if (iVar2 == 0) {
        return 0;
      }
    }
    piVar1 = *(int **)(this + 0xc);
    *(undefined4 *)(this + 0x104) = 0x461c4000;
    if (param_1 != (uiELEMENT *)0x0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    }
    if (piVar1 != (int *)0x0) {
      piVar1[1] = piVar1[1] & 0xffffffef;
    }
    *(uiELEMENT **)(this + 0xc) = param_1;
    if (param_1 != (uiELEMENT *)0x0) {
      iVar2 = (**(code **)(*(int *)param_1 + 0x30))(param_1);
      if (iVar2 == 0) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
        if (piVar1 != (int *)0x0) {
          piVar1[1] = piVar1[1] | 0x10;
        }
        *(int **)(this + 0xc) = piVar1;
        return 0;
      }
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x30))(param_1);
    }
  }
  return 1;
}




/* from: gs:ui_main.cpp
   addr: 005051B0 */

int __thiscall uiUI_SYSTEM::SetKbdFocus(uiUI_SYSTEM *this,uiELEMENT *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != *(uiELEMENT **)(this + 0x10)) {
    if ((param_1 != (uiELEMENT *)0x0) && (iVar2 = (**(code **)(*(int *)param_1 + 8))(), iVar2 == 0))
    {
      return 0;
    }
    piVar1 = *(int **)(this + 0x10);
    *(undefined4 *)(this + 0x104) = 0x461c4000;
    if (param_1 != (uiELEMENT *)0x0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    }
    if (piVar1 != (int *)0x0) {
      piVar1[1] = piVar1[1] & 0xffffffdf;
    }
    *(uiELEMENT **)(this + 0x10) = param_1;
    if ((param_1 != (uiELEMENT *)0x0) &&
       (iVar2 = (**(code **)(*(int *)param_1 + 0x34))(param_1), iVar2 == 0)) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffdf;
      if (piVar1 != (int *)0x0) {
        piVar1[1] = piVar1[1] | 0x20;
      }
      *(int **)(this + 0x10) = piVar1;
      return 1;
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x34))(param_1);
    }
    if (param_1 != (uiELEMENT *)0x0) {
      (**(code **)(*(int *)this + 0x84))(1);
    }
  }
  return 1;
}




/* from: gs:ui_main.cpp
   addr: 00505260 */

void __thiscall uiUI_SYSTEM::Render(uiUI_SYSTEM *this)

{
  if (((byte)gsAppState & 1) != 0) {
    uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 300),2,*(void **)(this + 0x110));
    if (((byte)this[0x14] & 1) == 0) {
      uiRENDER_ELEM::Render((uiRENDER_ELEM *)(this + 0x40),*(camCAMERA **)(this + 0x110));
    }
  }
  return;
}




/* from: gs:ui_main.cpp
   addr: 005052A0 */

void __thiscall uiUI_SYSTEM::Update(uiUI_SYSTEM *this)

{
  if (((byte)gsAppState & 1) != 0) {
    uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 300),1,(void *)0x0);
    *(float *)(this + 0x104) = gsElapsedTime + *(float *)(this + 0x104);
  }
  return;
}




/* from: gs:ui_main.cpp
   addr: 005052D0 */

void __thiscall uiUI_SYSTEM::ProcessMouseMove(uiUI_SYSTEM *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  
  if ((gsAppState & 0x1000U) != 0) {
    if (*(uiELEMENT **)(this + 8) != (uiELEMENT *)0x0) {
      uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 8),3,param_1);
      return;
    }
    iVar1 = uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 300),3,param_1);
    if (iVar1 != 0) {
      SetMouseFocus(this,(uiELEMENT *)0x0);
      return;
    }
    SetMouseFocus(this,*(uiELEMENT **)(param_1 + 0x10));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00505330 */

void __thiscall uiUI_SYSTEM::OnSysInput(uiUI_SYSTEM *this,uiSYSINPUT_INFO *param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_MM2;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  uiELEMENT *local_4;
  
  local_10 = (float)_m2dVZero;
  local_8 = 0;
  local_4 = (uiELEMENT *)0x0;
  local_c = (float)DAT_00963758;
  if ((gsAppState & 0x1000U) == 0) {
    return;
  }
  switch(*(undefined4 *)param_1) {
  case 0:
    local_10 = *(float *)(this + 0x20) + *(float *)(this + 0x18);
    local_14 = 1;
    local_c = *(float *)(this + 0x24) + *(float *)(this + 0x1c);
    if (*(uiELEMENT **)(this + 8) != (uiELEMENT *)0x0) {
      uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 8),3,&local_14);
      return;
    }
    iVar1 = uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 300),3,&local_14);
    if (iVar1 != 0) {
      SetMouseFocus(this,(uiELEMENT *)0x0);
      return;
    }
    SetMouseFocus(this,local_4);
    return;
  case 1:
    if (*(int *)(param_1 + 4) == 0) {
      local_10 = *(float *)(this + 0x20) + *(float *)(this + 0x18);
      puVar2 = *(uiELEMENT **)(this + 8);
      local_14 = 2;
      local_8 = 0;
      local_c = *(float *)(this + 0x24) + *(float *)(this + 0x1c);
      if ((puVar2 != (uiELEMENT *)0x0) ||
         (puVar2 = *(uiELEMENT **)(this + 0xc), puVar2 != (uiELEMENT *)0x0)) {
        uiELEMENT::ProcessAction(puVar2,4,&local_14);
      }
      fVar8 = _gswinGetDblClickTime();
      if (*(float *)(this + 0x104) < fVar8) {
        fVar8 = (local_10 - *(float *)(this + 0x108)) * (local_10 - *(float *)(this + 0x108)) +
                (local_c - *(float *)(this + 0x10c)) * (local_c - *(float *)(this + 0x10c));
        if (m3dSimdType == 0) {
          fVar8 = fVar8 + `float___cdecl_m3dSqrt(float)'::__l2::very_small;
          auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
          fVar6 = auVar7._0_4_;
          param_1 = (uiSYSINPUT_INFO *)
                    (`float___cdecl_m3dSqrt(float)'::__l2::half * fVar6 *
                     (`float___cdecl_m3dSqrt(float)'::__l2::three - fVar8 * fVar6 * fVar6) * fVar8);
        }
        else if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar3 = (ulonglong)(uint)fVar8;
          uVar4 = PackedFloatingReciprocalSQRAprox(in_MM2,uVar3);
          uVar5 = PackedFloatingMUL(uVar4,uVar4);
          uVar5 = PackedFloatingReciprocalSQRIter1(uVar5,uVar3);
          uVar4 = PackedFloatingReciprocalIter2(uVar5,uVar4);
          uVar4 = PackedFloatingMUL(uVar4,uVar3);
          param_1 = (uiSYSINPUT_INFO *)uVar4;
          FastExitMediaState();
        }
        else {
          param_1 = (uiSYSINPUT_INFO *)SQRT(fVar8);
        }
        if ((((float)param_1 < ___real_40a00000) && (local_14 = 4, (gsAppState & 0x1000U) != 0)) &&
           ((puVar2 = *(uiELEMENT **)(this + 8), puVar2 != (uiELEMENT *)0x0 ||
            (puVar2 = *(uiELEMENT **)(this + 0xc), puVar2 != (uiELEMENT *)0x0)))) {
          uiELEMENT::ProcessAction(puVar2,4,&local_14);
        }
      }
      *(undefined4 *)(this + 0x104) = 0;
      *(float *)(this + 0x108) = local_10;
      *(float *)(this + 0x10c) = local_c;
      return;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 4) == 0) {
      local_10 = *(float *)(this + 0x20) + *(float *)(this + 0x18);
      local_14 = 3;
      local_8 = 0;
      local_c = *(float *)(this + 0x24) + *(float *)(this + 0x1c);
      if (*(uiELEMENT **)(this + 8) != (uiELEMENT *)0x0) {
        uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 8),4,&local_14);
        return;
      }
      if (*(uiELEMENT **)(this + 0xc) != (uiELEMENT *)0x0) {
        uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 0xc),4,&local_14);
        return;
      }
    }
    break;
  case 3:
    local_8 = *(undefined4 *)(param_1 + 4);
    local_14 = 6;
    goto LAB_005055e6;
  case 4:
    local_8 = *(undefined4 *)(param_1 + 4);
    local_14 = 7;
LAB_005055e6:
    if (*(uiELEMENT **)(this + 8) != (uiELEMENT *)0x0) {
      uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 8),5,&local_14);
      return;
    }
    uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 300),5,&local_14);
    return;
  case 5:
    local_8 = *(undefined4 *)(param_1 + 4);
    local_14 = 8;
    if (*(uiELEMENT **)(this + 8) != (uiELEMENT *)0x0) {
      uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 8),6,&local_14);
      return;
    }
    uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 300),6,&local_14);
  }
  return;
}




/* from: gs:ui_main.cpp
   addr: 00505680 */

void __thiscall uiUI_SYSTEM::GetCursorPos(uiUI_SYSTEM *this,m2dV *param_1)

{
  *(float *)param_1 = *(float *)(this + 0x20) + *(float *)(this + 0x18);
  *(float *)(param_1 + 4) = *(float *)(this + 0x24) + *(float *)(this + 0x1c);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 005056A0 */

void __thiscall uiUI_SYSTEM::GetCursorBBox(uiUI_SYSTEM *this,uiBOX *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(this + 0x20);
  fVar2 = *(float *)(this + 0x18);
  fVar3 = *(float *)(this + 0x24);
  fVar4 = *(float *)(this + 0x1c);
  *(float *)param_1 = (fVar1 + fVar2) - ___real_41200000;
  *(float *)(param_1 + 4) = (fVar3 + fVar4) - ___real_41200000;
  *(float *)(param_1 + 8) = fVar1 + fVar2 + ___real_41200000;
  *(float *)(param_1 + 0xc) = fVar3 + fVar4 + ___real_41200000;
  return;
}




/* from: gs:ui_main.cpp
   addr: 005056E0 */

void __thiscall uiUI_SYSTEM::Notify(uiUI_SYSTEM *this,int param_1,void *param_2)

{
  undefined4 *unaff_retaddr;
  
  if (param_1 == 0x48414c54) {
    (**(code **)(*(int *)this + 0x38))(1,&s_null);
    (**(code **)(*(int *)this + 0x18))
              (unaff_retaddr[1],unaff_retaddr[2],*unaff_retaddr,0,0,unaff_retaddr[3]);
  }
  return;
}




/* from: gs:ui_main.cpp
   addr: 00505720 */

int __fastcall uiElementRegister(char *param_1,_func_uiELEMENT_ptr *param_2)

{
  char *_Dest;
  byte bVar1;
  byte *pbVar2;
  uiUI_SYSTEM *puVar3;
  byte *pbVar4;
  int iVar5;
  void *pvVar6;
  arrVector<struct_uiELEMENT_INFO> *this;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined4 local_44 [17];
  
  puVar3 = uiSystem;
  iVar12 = 0;
  if (0 < *(int *)(uiSystem + 0x11c)) {
    pbVar2 = *(byte **)(uiSystem + 0x118);
    pbVar4 = (byte *)param_1;
    pbVar8 = pbVar2;
    pbVar7 = pbVar2;
LAB_00505752:
    do {
      bVar1 = *pbVar4;
      bVar14 = bVar1 < *pbVar8;
      if (bVar1 == *pbVar8) {
        if (bVar1 != 0) {
          bVar1 = pbVar4[1];
          bVar14 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_00505776;
          pbVar4 = pbVar4 + 2;
          pbVar8 = pbVar8 + 2;
          if (bVar1 != 0) goto LAB_00505752;
        }
        iVar5 = 0;
      }
      else {
LAB_00505776:
        iVar5 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
      }
      if (iVar5 == 0) {
        if (pbVar2 + iVar12 * 0x44 != (byte *)0x0) {
          return 1;
        }
        break;
      }
      iVar12 = iVar12 + 1;
      pbVar8 = pbVar7 + 0x44;
      pbVar4 = (byte *)param_1;
      pbVar7 = pbVar8;
    } while (iVar12 < *(int *)(uiSystem + 0x11c));
  }
  this = (arrVector<struct_uiELEMENT_INFO> *)(uiSystem + 0x118);
  iVar5 = *(int *)(uiSystem + 0x11c);
  iVar10 = *(int *)(uiSystem + 0x120);
  iVar12 = iVar5 + 1;
  if (iVar10 < iVar12) {
    iVar9 = iVar10 * 2;
    if (iVar10 * 2 <= iVar12) {
      iVar9 = iVar12;
    }
    if (iVar10 < iVar9) {
      if (iVar9 < iVar5) {
        arrVector<struct_uiELEMENT_INFO>::Resize(this,iVar9);
      }
      pvVar6 = apRealloc(*(void **)this,iVar9 * 0x44);
      *(void **)this = pvVar6;
      *(int *)(puVar3 + 0x120) = iVar9;
    }
  }
  iVar10 = iVar5 * 0x44;
  memmove((void *)(*(int *)this + iVar12 * 0x44),(void *)(iVar10 + *(int *)this),
          *(int *)(puVar3 + 0x11c) * 0x44 + iVar5 * -0x44);
  if (iVar5 < iVar12) {
    iVar12 = iVar12 - iVar5;
    do {
      if ((undefined4 *)(*(int *)this + iVar10) != (undefined4 *)0x0) {
        puVar11 = local_44;
        puVar13 = (undefined4 *)(*(int *)this + iVar10);
        for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
      }
      iVar10 = iVar10 + 0x44;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  iVar12 = *(int *)(puVar3 + 0x11c);
  iVar5 = *(int *)this;
  *(int *)(puVar3 + 0x11c) = iVar12 + 1;
  _Dest = (char *)(iVar5 + -0x44 + (iVar12 + 1) * 0x44);
  strncpy(_Dest,param_1,0x40);
  _Dest[0x3f] = '\0';
  *(_func_uiELEMENT_ptr **)(_Dest + 0x40) = param_2;
  return 1;
}




/* from: gs:ui_main.cpp
   addr: 00505880 */

uiELEMENT * __fastcall uiElementCreate(char *param_1,objOBJ *param_2,uiELEMENT *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uiELEMENT *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = 0;
  if (*(int *)(uiSystem + 0x11c) < 1) {
    return (uiELEMENT *)0x0;
  }
  pbVar2 = *(byte **)(uiSystem + 0x118);
  pbVar3 = (byte *)param_1;
  pbVar7 = pbVar2;
  pbVar6 = pbVar2;
LAB_005058b2:
  do {
    bVar1 = *pbVar3;
    bVar9 = bVar1 < *pbVar7;
    if (bVar1 == *pbVar7) {
      if (bVar1 != 0) {
        bVar1 = pbVar3[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_005058d6;
        pbVar3 = pbVar3 + 2;
        pbVar7 = pbVar7 + 2;
        if (bVar1 != 0) goto LAB_005058b2;
      }
      iVar4 = 0;
    }
    else {
LAB_005058d6:
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if (iVar4 == 0) {
      if (pbVar2 + iVar8 * 0x44 == (byte *)0x0) {
        return (uiELEMENT *)0x0;
      }
      puVar5 = (uiELEMENT *)(**(code **)(pbVar2 + iVar8 * 0x44 + 0x40))();
      if (puVar5 != (uiELEMENT *)0x0) {
        *(uiELEMENT **)(puVar5 + 8) = param_3;
        if (param_3 != (uiELEMENT *)0x0) {
          iVar8 = *(int *)(param_3 + 0x14);
          if (iVar8 == 0) {
            *(uiELEMENT **)(param_3 + 0x14) = puVar5;
          }
          else {
            for (iVar4 = *(int *)(iVar8 + 0x10); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
              iVar8 = iVar4;
            }
            *(uiELEMENT **)(iVar8 + 0x10) = puVar5;
            *(int *)(puVar5 + 0xc) = iVar8;
          }
        }
        (**(code **)(*(int *)puVar5 + 0x38))(param_2);
      }
      return puVar5;
    }
    iVar8 = iVar8 + 1;
    pbVar7 = pbVar6 + 0x44;
    pbVar3 = (byte *)param_1;
    pbVar6 = pbVar7;
    if (*(int *)(uiSystem + 0x11c) <= iVar8) {
      return (uiELEMENT *)0x0;
    }
  } while( true );
}




/* from: gs:ui_main.cpp
   addr: 00505960 */

void __fastcall uiElementDestroy(uiELEMENT *param_1)

{
  uiELEMENT *puVar1;
  
  puVar1 = *(uiELEMENT **)(param_1 + 0x14);
  while (puVar1 != (uiELEMENT *)0x0) {
    uiElementDestroy(puVar1);
    puVar1 = *(uiELEMENT **)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x14) = *(undefined4 *)(param_1 + 0x10);
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10) = *(undefined4 *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc) = *(undefined4 *)(param_1 + 0xc);
  }
  (*(code *)**(undefined4 **)param_1)(1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 005059B0 */

void __fastcall uiGetObjRenderRect(objOBJ *param_1,uiVERTEX *param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  objOBJ *poVar7;
  objOBJ *poVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float local_6c [8];
  undefined **local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c [3];
  float *local_20;
  uint local_1c;
  objOBJ *local_18;
  objOBJ *local_14;
  float *local_10;
  objOBJ *local_c;
  uiVERTEX *local_8;
  
  local_8 = param_2;
  local_c = param_1;
  local_48 = 1;
  local_4c = &m3dBOX::_vftable_;
  if (*(int *)(param_1 + 0x38) == 0) {
    local_48 = *(undefined4 *)(param_1 + 0xc4);
    local_44 = *(float *)(param_1 + 200);
    local_40 = *(float *)(param_1 + 0xcc);
    local_38 = *(float *)(param_1 + 0xd4);
    local_3c = *(undefined4 *)(param_1 + 0xd0);
    local_34 = *(float *)(param_1 + 0xd8);
    local_30 = *(undefined4 *)(param_1 + 0xdc);
  }
  else {
    m3dBOX::CalcStart((m3dBOX *)&local_4c);
    local_1c = 0;
    poVar8 = param_1;
    do {
      if (((byte)*poVar8 & 1) == 0) {
        local_10 = local_2c;
        poVar7 = poVar8 + 0x3c;
        puVar9 = (undefined8 *)(*(int *)(*(int *)(poVar8 + 0x28) + 0x40) + local_1c);
        local_14 = (objOBJ *)puVar9;
        local_18 = poVar7;
        param_1 = local_c;
        param_2 = local_8;
        if (m3dSimdType != 0) {
          if (m3dSimdType == 1) {
            FastExitMediaState();
            uVar11 = (undefined4)*puVar9;
            uVar14 = CONCAT44(uVar11,uVar11);
            uVar11 = (undefined4)((ulonglong)*puVar9 >> 0x20);
            uVar17 = CONCAT44(uVar11,uVar11);
            uVar18 = CONCAT44(*(undefined4 *)(puVar9 + 1),*(undefined4 *)(puVar9 + 1));
            uVar12 = PackedFloatingMUL(uVar14,*(undefined8 *)poVar7);
            uVar13 = PackedFloatingMUL(uVar17,*(undefined8 *)(poVar8 + 0x4c));
            uVar15 = PackedFloatingMUL(uVar18,*(undefined8 *)(poVar8 + 0x5c));
            uVar12 = PackedFloatingADD(uVar12,*(undefined8 *)(poVar8 + 0x6c));
            uVar16 = PackedFloatingMUL(uVar14,*(undefined8 *)(poVar8 + 0x44));
            uVar14 = PackedFloatingADD(uVar13,uVar15);
            uVar13 = PackedFloatingMUL(uVar17,*(undefined8 *)(poVar8 + 0x54));
            uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(poVar8 + 100));
            uVar17 = PackedFloatingADD(uVar16,*(undefined8 *)(poVar8 + 0x74));
            uVar14 = PackedFloatingADD(uVar12,uVar14);
            uVar12 = PackedFloatingADD(uVar13,uVar18);
            local_2c[1] = (float)((ulonglong)uVar14 >> 0x20);
            local_2c[0] = (float)uVar14;
            uVar14 = PackedFloatingADD(uVar17,uVar12);
            local_2c[2] = (float)uVar14;
            FastExitMediaState();
          }
          else {
            iVar10 = 0;
            local_20 = (float *)((int)poVar7 - (int)local_2c);
            pfVar6 = local_2c;
            do {
              pfVar5 = local_20;
              iVar4 = 0;
              *pfVar6 = 0.0;
              pfVar5 = (float *)((int)pfVar5 + (int)pfVar6);
              do {
                iVar1 = iVar4 * 4;
                fVar2 = *pfVar5;
                iVar4 = iVar4 + 1;
                pfVar5 = pfVar5 + 4;
                *pfVar6 = *(float *)((int)puVar9 + iVar1) * fVar2 + *pfVar6;
              } while (iVar4 < 3);
              iVar4 = iVar10 + iVar4 * 4;
              iVar10 = iVar10 + 1;
              *pfVar6 = *(float *)(poVar7 + iVar4 * 4) + *pfVar6;
              pfVar6 = pfVar6 + 1;
              param_1 = local_c;
              param_2 = local_8;
            } while (iVar10 < 3);
          }
        }
      }
      else {
        pfVar6 = (float *)(*(int *)(*(int *)(poVar8 + 0x28) + 0x40) + local_1c);
        local_2c[0] = *pfVar6;
        local_2c[1] = pfVar6[1];
        local_2c[2] = pfVar6[2];
        param_1 = poVar8;
      }
      uVar3 = local_1c;
      m3dBOX::CalcUpdate((m3dBOX *)&local_4c,(m3dV *)local_2c);
      local_1c = uVar3 + 0xc;
      poVar8 = param_1;
    } while ((int)(uVar3 + 0xc) < 0x30);
  }
  local_20 = *(float **)(*(int *)(param_1 + 0x28) + 0xc);
  if (local_20 == (float *)0x0) {
    pfVar6 = local_6c;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar6 = 0.0;
      pfVar6 = pfVar6 + 1;
    }
    local_20 = local_6c;
  }
  local_10 = (float *)0x0;
  do {
    pfVar6 = local_10;
    if (((byte)*param_1 & 1) == 0) {
      puVar9 = (undefined8 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + (int)local_10);
      poVar7 = param_1 + 0x3c;
      local_18 = (objOBJ *)puVar9;
      local_14 = poVar7;
      poVar8 = local_c;
      param_2 = local_8;
      if (m3dSimdType != 0) {
        if (m3dSimdType == 1) {
          FastExitMediaState();
          uVar11 = (undefined4)*puVar9;
          uVar14 = CONCAT44(uVar11,uVar11);
          uVar11 = (undefined4)((ulonglong)*puVar9 >> 0x20);
          uVar17 = CONCAT44(uVar11,uVar11);
          uVar18 = CONCAT44(*(undefined4 *)(puVar9 + 1),*(undefined4 *)(puVar9 + 1));
          uVar12 = PackedFloatingMUL(uVar14,*(undefined8 *)poVar7);
          uVar13 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x4c));
          uVar15 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 0x5c));
          uVar12 = PackedFloatingADD(uVar12,*(undefined8 *)(param_1 + 0x6c));
          uVar16 = PackedFloatingMUL(uVar14,*(undefined8 *)(param_1 + 0x44));
          uVar14 = PackedFloatingADD(uVar13,uVar15);
          uVar13 = PackedFloatingMUL(uVar17,*(undefined8 *)(param_1 + 0x54));
          uVar18 = PackedFloatingMUL(uVar18,*(undefined8 *)(param_1 + 100));
          uVar17 = PackedFloatingADD(uVar16,*(undefined8 *)(param_1 + 0x74));
          uVar14 = PackedFloatingADD(uVar12,uVar14);
          uVar12 = PackedFloatingADD(uVar13,uVar18);
          local_2c[1] = (float)((ulonglong)uVar14 >> 0x20);
          local_2c[0] = (float)uVar14;
          PackedFloatingADD(uVar17,uVar12);
          FastExitMediaState();
        }
        else {
          iVar10 = 0;
          local_1c = (int)poVar7 - (int)local_2c;
          pfVar5 = local_2c;
          do {
            uVar3 = local_1c;
            iVar4 = 0;
            *pfVar5 = 0.0;
            pfVar6 = (float *)(uVar3 + (int)pfVar5);
            do {
              iVar1 = iVar4 * 4;
              fVar2 = *pfVar6;
              iVar4 = iVar4 + 1;
              pfVar6 = pfVar6 + 4;
              *pfVar5 = *(float *)((int)puVar9 + iVar1) * fVar2 + *pfVar5;
            } while (iVar4 < 3);
            iVar4 = iVar10 + iVar4 * 4;
            iVar10 = iVar10 + 1;
            *pfVar5 = *(float *)(poVar7 + iVar4 * 4) + *pfVar5;
            pfVar5 = pfVar5 + 1;
            pfVar6 = local_10;
            poVar8 = local_c;
            param_2 = local_8;
          } while (iVar10 < 3);
        }
      }
    }
    else {
      local_10 = (float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x40) + (int)local_10);
      local_2c[0] = *local_10;
      local_2c[1] = local_10[1];
      local_2c[2] = local_10[2];
      poVar8 = param_1;
    }
    local_1c = (uint)(ABS(local_2c[0] - local_44) < ___real_3e4ccccd);
    if ((float)local_1c == ___real_00000000) {
LAB_00505e58:
      local_1c = (uint)(ABS(local_2c[0] - local_38) < ___real_3e4ccccd);
      if ((float)local_1c != ___real_00000000) {
        local_1c = 1;
        local_10 = (float *)ABS(local_2c[1] - local_34);
        if (___real_3e4ccccd <= (float)local_10) {
          local_1c = 0;
        }
        local_1c = (uint)(___real_3e4ccccd > (float)local_10);
        if ((float)local_1c != ___real_00000000) {
          *(float *)(param_2 + 0x10) = local_2c[0];
          *(float *)(param_2 + 0x14) = -local_2c[1];
          *(float *)(param_2 + 0x18) = *local_20;
          *(float *)(param_2 + 0x1c) = local_20[1];
          goto LAB_00505f4a;
        }
      }
      local_1c = 1;
      local_10 = (float *)ABS(local_2c[0] - local_38);
      if (___real_3e4ccccd <= (float)local_10) {
        local_1c = 0;
      }
      local_1c = (uint)(___real_3e4ccccd > (float)local_10);
      if ((float)local_1c == ___real_00000000) {
        *(float *)param_2 = local_2c[0];
        *(float *)(param_2 + 4) = -local_2c[1];
        *(float *)(param_2 + 8) = *local_20;
        *(float *)(param_2 + 0xc) = local_20[1];
      }
      else {
        *(float *)(param_2 + 0x20) = local_2c[0];
        *(float *)(param_2 + 0x24) = -local_2c[1];
        *(float *)(param_2 + 0x28) = *local_20;
        *(float *)(param_2 + 0x2c) = local_20[1];
      }
    }
    else {
      local_1c = 1;
      local_10 = (float *)ABS(local_2c[1] - local_40);
      if (___real_3e4ccccd <= (float)local_10) {
        local_1c = 0;
      }
      local_1c = (uint)(___real_3e4ccccd > (float)local_10);
      if ((float)local_1c == ___real_00000000) goto LAB_00505e58;
      *(float *)(param_2 + 0x30) = local_2c[0];
      *(float *)(param_2 + 0x34) = -local_2c[1];
      *(float *)(param_2 + 0x38) = *local_20;
      *(float *)(param_2 + 0x3c) = local_20[1];
    }
LAB_00505f4a:
    local_20 = local_20 + 2;
    local_10 = (float *)((int)pfVar6 + 0xc);
    param_1 = poVar8;
    if (0x2f < (int)pfVar6 + 0xc) {
      iVar10 = 4;
      do {
        if (___real_40000000 <= *(float *)param_2) {
          if (___real_447f8000 < *(float *)param_2) {
            *(float *)param_2 = 1026.0;
          }
        }
        else {
          *(float *)param_2 = 0.0;
        }
        if (*(float *)(param_2 + 4) < ___real_40000000) {
          *(float *)(param_2 + 4) = 0.0;
        }
        if (___real_443f8000 < *(float *)(param_2 + 4)) {
          *(float *)(param_2 + 4) = 769.0;
        }
        param_2 = param_2 + 0x10;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      return;
    }
  } while( true );
}




/* from: gs:ui_main.cpp
   addr: 00505FE0 */

void __fastcall uiUCoord2SCoord(m2dV *param_1,m2dV *param_2)

{
  *(float *)param_2 = *(float *)(uiSystem + 0xec) * *(float *)param_1;
  *(float *)(param_2 + 4) = *(float *)(uiSystem + 0xf0) * *(float *)(param_1 + 4);
  return;
}




/* from: gs:ui_main.cpp
   addr: 00506010 */

void __thiscall
arrVector<struct_uiELEMENT_INFO>::Resize(arrVector<struct_uiELEMENT_INFO> *this,int param_1)

{
  void *pvVar1;
  
  if (((*(int *)(this + 4) <= param_1) && (*(int *)(this + 4) < param_1)) &&
     (*(int *)(this + 8) < param_1)) {
    pvVar1 = apRealloc(*(void **)this,param_1 * 0x44);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: gs:ui_main.cpp
   addr: 00506050 */

void __thiscall
arrVector<struct_uiELEMENT_INFO>::Insert
          (arrVector<struct_uiELEMENT_INFO> *this,int param_1,uiELEMENT_INFO *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uiELEMENT_INFO *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (param_3 != 0) {
    iVar5 = *(int *)(this + 8);
    iVar3 = *(int *)(this + 4) + param_3;
    if (iVar5 < iVar3) {
      iVar2 = iVar5 * 2;
      if (iVar5 * 2 <= iVar3) {
        iVar2 = iVar3;
      }
      if (iVar5 < iVar2) {
        if (iVar2 < *(int *)(this + 4)) {
          *(int *)(this + 4) = iVar2;
        }
        pvVar1 = apRealloc(*(void **)this,iVar2 * 0x44);
        *(void **)this = pvVar1;
        *(int *)(this + 8) = iVar2;
      }
    }
    iVar3 = param_1 * 0x44;
    iVar5 = param_3 + param_1;
    memmove((void *)(*(int *)this + iVar5 * 0x44),(void *)(iVar3 + *(int *)this),
            *(int *)(this + 4) * 0x44 + param_1 * -0x44);
    if (param_1 < iVar5) {
      iVar5 = iVar5 - param_1;
      do {
        if ((undefined4 *)(*(int *)this + iVar3) != (undefined4 *)0x0) {
          puVar4 = param_2;
          puVar6 = (undefined4 *)(*(int *)this + iVar3);
          for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *(undefined4 *)puVar4;
            puVar4 = puVar4 + 4;
            puVar6 = puVar6 + 1;
          }
        }
        iVar3 = iVar3 + 0x44;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00506120 */

uiELEMENT * __fastcall uiAREA::Create(void)

{
  uiELEMENT *puVar1;
  
  puVar1 = (uiELEMENT *)operator_new(0x128);
  if (puVar1 != (uiELEMENT *)0x0) {
    *(undefined4 *)(puVar1 + 0x58) = _m2dVZero;
    *(undefined4 *)(puVar1 + 0x5c) = DAT_00963758;
    *(undefined4 *)(puVar1 + 0x60) = _m2dVZero;
    *(undefined4 *)(puVar1 + 100) = DAT_00963758;
    *(undefined ***)puVar1 = &uiELEMENT::_vftable_;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0x18] = (uiELEMENT)0x0;
    *(undefined4 *)(puVar1 + 0x68) = 0;
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(puVar1 + 0x6c));
    *(undefined4 *)(puVar1 + 0x118) = 0;
    *(undefined4 *)(puVar1 + 0x120) = 0;
    *(undefined4 *)(puVar1 + 0x11c) = 0;
    *(undefined4 *)(puVar1 + 0x124) = 0;
    *(undefined ***)puVar1 = &_vftable_;
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 005061B0 */

uiELEMENT * __fastcall uiWINDOW::Create(void)

{
  uiELEMENT *puVar1;
  
  puVar1 = (uiELEMENT *)operator_new(0x6c);
  if (puVar1 != (uiELEMENT *)0x0) {
    *(undefined4 *)(puVar1 + 0x58) = _m2dVZero;
    *(undefined4 *)(puVar1 + 0x5c) = DAT_00963758;
    *(undefined4 *)(puVar1 + 0x60) = _m2dVZero;
    *(undefined4 *)(puVar1 + 100) = DAT_00963758;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0x18] = (uiELEMENT)0x0;
    *(undefined4 *)(puVar1 + 0x68) = 0;
    *(undefined ***)puVar1 = &_vftable_;
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00506210 */

uiELEMENT * __fastcall uiFRAME::Create(void)

{
  uiELEMENT *puVar1;
  
  puVar1 = (uiELEMENT *)operator_new(0x70);
  if (puVar1 != (uiELEMENT *)0x0) {
    *(undefined4 *)(puVar1 + 0x58) = _m2dVZero;
    *(undefined4 *)(puVar1 + 0x5c) = DAT_00963758;
    *(undefined4 *)(puVar1 + 0x60) = _m2dVZero;
    *(undefined4 *)(puVar1 + 100) = DAT_00963758;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0x18] = (uiELEMENT)0x0;
    *(undefined4 *)(puVar1 + 0x68) = 0;
    *(undefined ***)puVar1 = &_vftable_;
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:ui_main.cpp
   addr: 00506270 */

uiELEMENT * __fastcall uiFRAME_GROUP::Create(void)

{
  uiELEMENT *puVar1;
  
  puVar1 = (uiELEMENT *)operator_new(0x78);
  if (puVar1 != (uiELEMENT *)0x0) {
    *(undefined4 *)(puVar1 + 0x58) = _m2dVZero;
    *(undefined4 *)(puVar1 + 0x5c) = DAT_00963758;
    *(undefined4 *)(puVar1 + 0x60) = _m2dVZero;
    *(undefined4 *)(puVar1 + 100) = DAT_00963758;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0x18] = (uiELEMENT)0x0;
    *(undefined4 *)(puVar1 + 0x68) = 0;
    *(undefined ***)puVar1 = &_vftable_;
    *(undefined4 *)(puVar1 + 0x6c) = 0;
    *(undefined4 *)(puVar1 + 0x70) = 0;
    *(undefined4 *)(puVar1 + 0x74) = 0;
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}

