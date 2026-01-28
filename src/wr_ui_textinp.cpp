
/* from: wr_ui_textinp.cpp
   addr: 00492660 */

void __thiscall wrUI_TEXT_INPUT::Init(wrUI_TEXT_INPUT *this,objOBJ *param_1)

{
  uiTEXT_INPUT::Init((uiTEXT_INPUT *)this,param_1);
  uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),0x5c000000);
  return;
}




/* from: wr_ui_textinp.cpp
   addr: 00492680 */

int __thiscall wrUI_TEXT_INPUT::OnMouseButton(wrUI_TEXT_INPUT *this,uiINPUT_INFO *param_1)

{
  uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)this);
  return 0;
}




/* from: wr_ui_textinp.cpp
   addr: 004926A0
   addr: 004926A0 */

int __thiscall wrUI_TEXT_INPUT::OnMouseFocus(wrUI_TEXT_INPUT *this,uiELEMENT *param_1)

{
  if (param_1 == (uiELEMENT *)this) {
    uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)this);
  }
  return 1;
}




/* from: wr_ui_textinp.cpp
   addr: 004926C0 */

int __thiscall wrUI_TEXT_INPUT::OnKbdFocus(wrUI_TEXT_INPUT *this,uiELEMENT *param_1)

{
  int iVar1;
  int iVar2;
  wrUI_TEXT_INPUT *local_c;
  undefined4 local_8;
  uint local_4;
  
  iVar1 = 0;
  local_c = (wrUI_TEXT_INPUT *)0x0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 == (uiELEMENT *)this) {
    *(undefined4 *)(this + 0x114) = 0xffd8ff02;
    if (0 < *(int *)(this + 0x11c)) {
      iVar2 = 0;
      do {
        iVar1 = iVar1 + 1;
        *(undefined4 *)(*(int *)(this + 0x118) + 0xa8 + iVar2) = 0xcf000000;
        iVar2 = iVar2 + 0xac;
      } while (iVar1 < *(int *)(this + 0x11c));
    }
  }
  else {
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),0x5c000000);
  }
  local_4 = (uint)(param_1 == (uiELEMENT *)this);
  local_8 = 0x464f4353;
  local_c = this;
  (**(code **)(**(int **)(this + 8) + 0x5c))(&local_c);
  return 1;
}

