
/* from: wr_ui_ig.cpp
   addr: 0048CA00 */

void __thiscall wrUI_IG_RESUME::ProcessCommand(wrUI_IG_RESUME *this)

{
  (**(code **)(*(int *)uiSystem + 0x3c))();
  plrPLAYER::ClearZoom(plrPlayer);
  (**(code **)(*(int *)uiSystem + 0x38))(3,0);
  return;
}




/* from: wr_ui_ig.cpp
   addr: 0048CA30 */

int __thiscall wrUI_IG_FRAME::ProcessInit(wrUI_IG_FRAME *this,void *param_1)

{
  uiELEMENT *puVar1;
  
  wrUI_FRAME::ProcessInit((wrUI_FRAME *)this,param_1);
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_resume);
  if (puVar1 != (uiELEMENT *)0x0) {
    *(uiELEMENT **)(this + 0x74) = puVar1;
  }
  return 1;
}




/* from: wr_ui_ig.cpp
   addr: 0048CA60 */

int __thiscall wrUI_IG_FRAME::OnKeyboard(wrUI_IG_FRAME *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  
  if (((*(int *)param_1 == 6) && (*(int **)(this + 0x74) != (int *)0x0)) &&
     (*(int *)(param_1 + 0xc) == 7)) {
    (**(code **)(**(int **)(this + 0x74) + 100))();
    return 0;
  }
  iVar1 = wrUI_FRAME::OnKeyboard((wrUI_FRAME *)this,param_1);
  return iVar1;
}




/* from: wr_ui_ig.cpp
   addr: 0048CA90 */

void __thiscall wrUI_IG_BUTTON::Init(wrUI_IG_BUTTON *this,objOBJ *param_1)

{
  wrUI_BUTTON::Init((wrUI_BUTTON *)this,param_1);
  if (*(psSHEET **)(param_1 + 0xf0) != (psSHEET *)0x0) {
    psSHEET::GetStr(*(psSHEET **)(param_1 + 0xf0),s_UI_PROP,s_ig_frameID,(char *)(this + 0x1b8),0x40
                   );
  }
  return;
}




/* from: wr_ui_ig.cpp
   addr: 0048CAD0 */

void __thiscall wrUI_IG_BUTTON::ProcessCommand(wrUI_IG_BUTTON *this)

{
  if ((*(int *)(uiSystem + 4) == 2) && (this[0x1b8] != (wrUI_IG_BUTTON)0x0)) {
    uiBUTTON::ProcessCommand((uiBUTTON *)this);
    (**(code **)(*(int *)uiSystem + 0x10))(this + 0x1b8,0);
    return;
  }
  wrUI_BUTTON::ProcessCommand((wrUI_BUTTON *)this);
  return;
}

