
/* from: wr_ui_credits.cpp
   addr: 00487650 */

wrUI_CR_FRAME * __thiscall wrUI_CR_FRAME::wrUI_CR_FRAME(wrUI_CR_FRAME *this)

{
  uiELEMENT::uiELEMENT((uiELEMENT *)this);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x74) = 3;
  *(undefined4 *)(this + 0x78) = 0xffffffff;
  *(undefined4 *)(this + 0x90) = 0x3f800000;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  return this;
}




/* from: wr_ui_credits.cpp
   addr: 004876B0 */

void * __thiscall wrUI_CR_FRAME::_vector_deleting_destructor_(wrUI_CR_FRAME *this,uint param_1)

{
  apFree(*(void **)(this + 0x84));
  *(undefined ***)this = &uiELEMENT::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_ui_credits.cpp
   addr: 004876E0 */

int __thiscall wrUI_CR_FRAME::ProcessInit(wrUI_CR_FRAME *this,void *param_1)

{
  int iVar1;
  arrVector<class_uiAREA*> *this_00;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uiELEMENT *puVar5;
  int iVar6;
  int iVar7;
  char local_40 [64];
  
  wrUI_FRAME::ProcessInit((wrUI_FRAME *)this,param_1);
  puVar5 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_credits_static_wnd);
  *(uiELEMENT **)(this + 0x7c) = puVar5;
  param_1 = (void *)0x1;
  while( true ) {
    sprintf(local_40,s_string_02i,param_1);
    puVar5 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_40);
    if (puVar5 == (uiELEMENT *)0x0) break;
    iVar7 = *(int *)(this + 0x88);
    iVar3 = *(int *)(this + 0x8c);
    this_00 = (arrVector<class_uiAREA*> *)(this + 0x84);
    iVar1 = iVar7 + 1;
    if (iVar3 < iVar1) {
      iVar6 = iVar3 * 2;
      if (iVar3 * 2 <= iVar1) {
        iVar6 = iVar1;
      }
      if (iVar3 < iVar6) {
        arrVector<class_uiAREA*>::Realloc(this_00,iVar6);
      }
    }
    memmove((void *)(*(int *)this_00 + iVar1 * 4),(void *)(*(int *)this_00 + iVar7 * 4),
            (*(int *)(this + 0x88) - iVar7) * 4);
    for (; iVar7 < iVar1; iVar7 = iVar7 + 1) {
      puVar2 = (undefined4 *)(*(int *)this_00 + iVar7 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = puVar5;
      }
    }
    param_1 = (void *)((int)param_1 + 1);
    *(int *)(this + 0x88) = *(int *)(this + 0x88) + 1;
  }
  uVar4 = *(undefined4 *)(**(int **)(this + 0x84) + 0x108);
  *(undefined4 *)(this + 0x74) = 3;
  *(undefined4 *)(this + 0x90) = uVar4;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_credits.cpp
   addr: 004877E0 */

void __thiscall wrUI_CR_FRAME::ShowNextPage(wrUI_CR_FRAME *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  wchar_t *_Str;
  size_t sVar7;
  int unaff_EBX;
  int iVar8;
  int iVar9;
  
  while( true ) {
    *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
    bVar3 = false;
    *(undefined4 *)(this + 0x94) = 0;
    iVar8 = 0;
    if (0 < *(int *)(this + 0x88)) {
      do {
        iVar1 = iVar8 + 1;
        iVar4 = gsSTRINGS::GetStringIdFmt
                          (gsStrings,(char *)gsStrings,s_UI_CREDITS_STRING__i__i,
                           *(int *)(this + 0x78) + 1,iVar1);
        if (iVar4 == 0) {
          uiAREA::SetTextId(*(uiAREA **)(*(int *)(this + 0x84) + iVar8 * 4),1);
        }
        else {
          bVar3 = true;
          puVar5 = gsSTRINGS::GetStringById(gsStrings,iVar4);
          iVar8 = iVar8 * 4;
          if (*puVar5 == 0x2a) {
            iVar2 = *(int *)(*(int *)(this + 0x84) + iVar8);
            uVar6 = (**(code **)(*(int *)uiSystem + 0x50))(1);
            uVar6 = (**(code **)(unaff_EBX + 0x54))(uVar6);
            *(undefined4 *)(iVar2 + 0xfc) = uVar6;
            iVar2 = *(int *)(this + 0x84);
            iVar9 = 0x7fffffff;
            puVar5 = gsSTRINGS::GetStringById(gsStrings,iVar4);
            uiAREA::SetTextW(*(uiAREA **)(iVar2 + iVar8),puVar5 + 1,iVar9);
          }
          else {
            iVar2 = *(int *)(*(int *)(this + 0x84) + iVar8);
            uVar6 = (**(code **)(*(int *)uiSystem + 0x50))(0);
            uVar6 = (**(code **)(unaff_EBX + 0x54))(uVar6);
            *(undefined4 *)(iVar2 + 0xfc) = uVar6;
            uiAREA::SetTextId(*(uiAREA **)(*(int *)(this + 0x84) + iVar8),iVar4);
          }
          _Str = (wchar_t *)
                 uiRENDER_ELEM_TEXT::GetString
                           ((uiRENDER_ELEM_TEXT *)(*(int *)(iVar8 + *(int *)(this + 0x84)) + 0x100))
          ;
          sVar7 = wcslen(_Str);
          *(float *)(this + 0x94) = (float)sVar7 + *(float *)(this + 0x94);
        }
        iVar8 = iVar1;
      } while (iVar1 < *(int *)(this + 0x88));
    }
    *(float *)(this + 0x94) = *(float *)(this + 0x94) * ___real_3d23d70a + ___real_3f800000;
    if ((*(int *)(this + 0x78) == 0) || (bVar3)) break;
    *(undefined4 *)(this + 0x78) = 0xffffffff;
  }
  return;
}




/* from: wr_ui_credits.cpp
   addr: 00487990 */

int __thiscall wrUI_CR_FRAME::StartAppearing(wrUI_CR_FRAME *this,int param_1)

{
  if ((*(int *)(this + 0x74) == 3) && (param_1 != 0)) {
    *(undefined4 *)(this + 0x78) = 0xffffffff;
    ShowNextPage(this);
  }
  uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  if ((*(int **)(this + 0x7c) != (int *)0x0) && (*(int *)(this + 0x74) != 3)) {
    (**(code **)(**(int **)(this + 0x7c) + 0x24))();
    uiELEMENT::ProcessAction(*(uiELEMENT **)(this + 0x7c),7,(void *)0x1);
  }
  return 1;
}




/* from: wr_ui_credits.cpp
   addr: 004879E0 */

int __thiscall wrUI_CR_FRAME::ProcessUpdate(wrUI_CR_FRAME *this,void *param_1)

{
  int iVar1;
  float extraout_EDX;
  float fVar2;
  undefined8 uVar3;
  
  iVar1 = uiFRAME::ProcessUpdate((uiFRAME *)this,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (((*(uint *)(this + 4) & 0x100) != 0) ||
     (fVar2 = extraout_EDX, (*(uint *)(this + 4) & 0x40) != 0)) {
    if (*(int *)(this + 0x74) == 3) {
      return 1;
    }
    uVar3 = (**(code **)(*(int *)this + 0x28))();
    fVar2 = (float)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      return 1;
    }
  }
  switch(*(undefined4 *)(this + 0x74)) {
  case 0:
    iVar1 = m3dUpdateTimeField((float *)(this + 0x80),fVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x74) = 1;
      (**(code **)(*(int *)this + 0x20))(0);
      return 1;
    }
    break;
  case 1:
    *(undefined4 *)(this + 0x74) = 2;
    ShowNextPage(this);
    (**(code **)(*(int *)this + 0x20))(1);
    return 1;
  case 2:
  case 3:
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x80) = *(undefined4 *)(this + 0x94);
  }
  return 1;
}




/* from: wr_ui_credits.cpp
   addr: 00487AB0 */

int __thiscall wrUI_CR_FRAME::OnKeyboard(wrUI_CR_FRAME *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  
  if ((*(int *)param_1 == 6) && (*(int *)(param_1 + 0xc) == 8)) {
    *(undefined4 *)(this + 0x80) = 0x3a83126f;
    return 1;
  }
  iVar1 = wrUI_FRAME::OnKeyboard((wrUI_FRAME *)this,param_1);
  return iVar1;
}




/* from: wr_ui_credits.cpp
   addr: 00487AE0 */

int __thiscall wrUI_CR_BACK::ProcessInit(wrUI_CR_BACK *this,void *param_1)

{
  *(undefined4 *)(this + 0x1b8) = *(undefined4 *)(*(int *)(this + 8) + 8);
  return 1;
}




/* from: wr_ui_credits.cpp
   addr: 00487B00 */

void __thiscall wrUI_CR_BACK::ProcessCommand(wrUI_CR_BACK *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 0x1b8);
  piVar1[0x1d] = 3;
  (**(code **)(*piVar1 + 0x24))();
  wrUI_BUTTON::ProcessCommand((wrUI_BUTTON *)this);
  return;
}


