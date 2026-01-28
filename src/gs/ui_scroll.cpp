
/* from: gs:ui_scroll.cpp
   addr: 005192E0 */

void __thiscall uiSCROLL::Init(uiSCROLL *this,objOBJ *param_1)

{
  int iVar1;
  char *pcVar2;
  char local_40 [64];
  
  uiAREA::Init((uiAREA *)this,param_1);
  if ((*(psSHEET **)(param_1 + 0xf0) == (psSHEET *)0x0) ||
     (iVar1 = psSHEET::GetStr(*(psSHEET **)(param_1 + 0xf0),s_UI_PROP,s_scroll,local_40,0x40),
     iVar1 == 0)) {
    *(uint *)(this + 0x128) = *(uint *)(this + 0x128) | 1;
    return;
  }
  pcVar2 = strstr(local_40,s_hor);
  if (pcVar2 != (char *)0x0) {
    *(uint *)(this + 0x128) = *(uint *)(this + 0x128) | 1;
  }
  pcVar2 = strstr(local_40,s_vert);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  *(uint *)(this + 0x128) = *(uint *)(this + 0x128) | 2;
  return;
}




/* from: gs:ui_scroll.cpp
   addr: 00519380 */

int __thiscall uiSCROLL::OnKeyboard(uiSCROLL *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  
  if (*(int *)param_1 != 6) {
    return 1;
  }
  iVar1 = 1;
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 3:
    if (((byte)this[0x128] & 1) != 0) {
      (**(code **)(*(int *)this + 0x60))(0xffffffff);
      return 0;
    }
    break;
  case 4:
    if (((byte)this[0x128] & 1) != 0) {
      (**(code **)(*(int *)this + 0x60))(1);
      iVar1 = 0;
    }
    break;
  case 5:
    if (((byte)this[0x128] & 2) != 0) {
      (**(code **)(*(int *)this + 0x60))(0xffffffff);
      return 0;
    }
    break;
  case 6:
    if (((byte)this[0x128] & 2) != 0) {
      (**(code **)(*(int *)this + 0x60))(1);
      return 0;
    }
  }
  return iVar1;
}

