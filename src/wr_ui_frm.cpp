
/* from: wr_ui_frm.cpp
   addr: 00488FA0 */

void __thiscall wrUI_FRAME::Init(wrUI_FRAME *this,objOBJ *param_1)

{
  uiELEMENT::Init((uiELEMENT *)this,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  return;
}




/* from: wr_ui_frm.cpp
   addr: 00488FC0 */

int __thiscall wrUI_FRAME::ProcessInit(wrUI_FRAME *this,void *param_1)

{
  uiELEMENT *puVar1;
  
  uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,&s_back);
  if (puVar1 != (uiELEMENT *)0x0) {
    *(uiELEMENT **)(this + 0x70) = puVar1;
  }
  return 1;
}




/* from: wr_ui_frm.cpp
   addr: 00488FF0 */

int __thiscall wrUI_FRAME::OnKeyboard(wrUI_FRAME *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  bool bVar2;
  int local_10;
  int local_c;
  wrUI_FRAME *local_8;
  undefined4 local_4;
  
  local_c = 1;
  local_10 = 0;
  local_8 = (wrUI_FRAME *)0x0;
  local_4 = 0x7fffffff;
  if (*(int *)param_1 != 6) {
LAB_004890f0:
    iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
    return iVar1;
  }
  local_c = 0;
  if ((*(int *)(this + 0x70) != 0) && (*(int *)(param_1 + 0xc) == 7)) {
    (**(code **)(*(int *)uiSystem + 0x84))(3);
    (**(code **)(**(int **)(this + 0x70) + 100))();
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 1) {
LAB_00489074:
    local_c = 1;
  }
  else if (iVar1 == 2) {
    local_c = -1;
  }
  else {
    if (iVar1 != 5) {
      if (iVar1 != 6) goto LAB_004890f0;
      goto LAB_00489074;
    }
    local_c = -1;
  }
  if (*(int **)(uiSystem + 0x10) != (int *)0x0) {
    local_10 = (**(code **)(**(int **)(uiSystem + 0x10) + 0x18))();
    (**(code **)(*(int *)this + 0x1c))(&local_10);
    if ((local_8 != (wrUI_FRAME *)0x0) && (local_8 != this)) goto LAB_004890d6;
  }
  bVar2 = local_c != -1;
  local_c = 0;
  local_10 = (-(uint)bVar2 & 0x80000000) + 0x40000000;
  (**(code **)(*(int *)this + 0x1c))(&local_10);
LAB_004890d6:
  if (local_8 != (wrUI_FRAME *)0x0) {
    uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)local_8);
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_frm.cpp
   addr: 00489100 */

void __thiscall wrUI_FRAME::OnAppeared(wrUI_FRAME *this,int param_1)

{
  uiELEMENT *puVar1;
  undefined4 local_24;
  uiELEMENT *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uiFRAME::OnAppeared((uiFRAME *)this,param_1);
  if (param_1 != 0) {
    local_10 = _m2dVZero;
    local_c = DAT_00963758;
    local_8 = 0;
    local_4 = 0;
    local_24 = 0;
    local_20 = (uiELEMENT *)0x1;
    local_1c = 0;
    local_18 = 0x7fffffff;
    local_14 = 1;
    uiUI_SYSTEM::GetCursorPos(uiSystem,(m2dV *)&local_10);
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
    uiUI_SYSTEM::ProcessMouseMove(uiSystem,(uiINPUT_INFO *)&local_14);
    puVar1 = uiELEMENT::GetPathToChild((uiELEMENT *)this,*(uiELEMENT **)(uiSystem + 0x10));
    if (puVar1 == (uiELEMENT *)0x0) {
      local_24 = 0xc0000000;
      local_20 = (uiELEMENT *)0x0;
      (**(code **)(*(int *)this + 0x1c))(&local_24);
      if (local_20 != (uiELEMENT *)0x0) {
        uiUI_SYSTEM::SetKbdFocus(uiSystem,local_20);
      }
    }
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
  }
  return;
}




/* from: wr_ui_frm.cpp
   addr: 004891E0 */

void __thiscall wrUI_SPLASH_FRM::Action(wrUI_SPLASH_FRM *this,uiINPUT_INFO *param_1)

{
  if ((*(int *)param_1 == 2) || (*(int *)param_1 == 6)) {
    (**(code **)(*(int *)uiSystem + 0x3c))();
    gsMsgStopLoop();
  }
  return;
}




/* from: wr_ui_frm.cpp
   addr: 00489210 */

int __thiscall wrUI_SPLASH_FRM::StartAppearing(wrUI_SPLASH_FRM *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(this + 0x70) = 0x40e00000;
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_frm.cpp
   addr: 00489230 */

int __thiscall wrUI_SPLASH_FRM::ProcessUpdate(wrUI_SPLASH_FRM *this,void *param_1)

{
  int iVar1;
  float in_EDX;
  
  iVar1 = m3dUpdateTimeField((float *)(this + 0x70),in_EDX);
  if (iVar1 != 0) {
    (**(code **)(*(int *)uiSystem + 0x3c))();
    gsMsgStopLoop();
  }
  iVar1 = uiFRAME::ProcessUpdate((uiFRAME *)this,param_1);
  return iVar1;
}




/* from: wr_ui_frm.cpp
   addr: 00489270 */

void __thiscall wrUI_SPLASH_FRM::Init(wrUI_SPLASH_FRM *this,objOBJ *param_1)

{
  uiELEMENT::Init((uiELEMENT *)this,param_1);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 10;
  return;
}

