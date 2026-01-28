
/* from: wr_ui_ctrl.cpp
   addr: 00487B40 */

int __fastcall _ctrlBuildSeqName(int param_1,int *param_2,ushort *param_3,int param_4)

{
  gsSTRINGS gVar1;
  bool bVar2;
  int iVar3;
  gsSTRINGS *pgVar4;
  undefined4 local_300;
  gsSTRINGS local_100 [256];
  
  bVar2 = true;
  inpINPUT::GetShortcutName
            (*(inpINPUT **)(gsSysInput + 0x3c),param_2,param_1,(ushort *)&local_300,0x100,0x100);
  iVar3 = wcscmp((wchar_t *)&local_300,u_MS_Left);
  if ((((iVar3 == 0) || (iVar3 = wcscmp((wchar_t *)&local_300,u_MS_Right), iVar3 == 0)) ||
      (iVar3 = wcscmp((wchar_t *)&local_300,u_MS_Forw), iVar3 == 0)) ||
     (iVar3 = wcscmp((wchar_t *)&local_300,u_MS_Back), iVar3 == 0)) {
    *param_3 = 0;
    return 0;
  }
  iVar3 = 0;
  if ((short)local_300 != 0) {
    pgVar4 = (gsSTRINGS *)&local_300;
    do {
      if (0x7f < (ushort)local_300) {
        bVar2 = false;
        break;
      }
      gVar1 = *pgVar4;
      pgVar4 = pgVar4 + 2;
      local_100[iVar3] = gVar1;
      iVar3 = iVar3 + 1;
      local_300 = (uint)*(ushort *)pgVar4;
    } while (*(ushort *)pgVar4 != 0);
  }
  local_100[iVar3] = *(gsSTRINGS *)((int)&local_300 + iVar3 * 2);
  if ((bVar2) &&
     (iVar3 = gsSTRINGS::GetStringIdFmt(local_100,(char *)gsStrings,s_CTRL__s,local_100), iVar3 != 0
     )) {
    gsSTRINGS::GetStringById(gsStrings,iVar3,param_3,param_4);
    return 1;
  }
  wcscpy((wchar_t *)param_3,(wchar_t *)&local_300);
  return 1;
}




/* from: wr_ui_ctrl.cpp
   addr: 00487C90 */

ushort * __thiscall wrUI_CTRL_RECORD::BuildSeqName(wrUI_CTRL_RECORD *this)

{
  int iVar1;
  wchar_t *_Source;
  int iVar2;
  size_t sVar3;
  wrUI_CTRL_RECORD *pwVar4;
  wchar_t local_200 [256];
  
  iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_CTRL_OR);
  _Source = (wchar_t *)gsSTRINGS::GetStringById(gsStrings,iVar1);
  sVar3 = 0;
  local_200[0] = L'\0';
  pwVar4 = this + 4;
  iVar1 = 2;
  do {
    if (*(int *)pwVar4 != 0) {
      if (sVar3 != 0) {
        wcscat(local_200 + sVar3,_Source);
        sVar3 = wcslen(local_200);
      }
      iVar2 = _ctrlBuildSeqName(*(int *)pwVar4,(int *)(pwVar4 + 4),(ushort *)(local_200 + sVar3),
                                0x100 - sVar3);
      if (iVar2 != 0) {
        sVar3 = wcslen(local_200);
      }
    }
    pwVar4 = pwVar4 + 0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (sVar3 == 0) {
    iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_CTRL_NONE);
    gsSTRINGS::GetStringById(gsStrings,iVar1,(ushort *)local_200,0x100);
  }
  wcscpy((wchar_t *)&apBuffer,local_200);
  return (ushort *)&apBuffer;
}




/* from: wr_ui_ctrl.cpp
   addr: 00487D70 */

void __thiscall wrUI_CTRL_INFO::SetRecord(wrUI_CTRL_INFO *this,wrUI_CTRL_RECORD *param_1)

{
  int iVar1;
  ushort *puVar2;
  
  *(wrUI_CTRL_RECORD **)(this + 0x144) = param_1;
  iVar1 = gsSTRINGS::GetStringIdFmt
                    (gsStrings,(char *)gsStrings,s_UI_CTRL_CMD__s,*(int *)param_1 + 4);
  uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this + 0x140),iVar1);
  puVar2 = wrUI_CTRL_RECORD::BuildSeqName(*(wrUI_CTRL_RECORD **)(this + 0x144));
  uiTEXT_INPUT::SetEditText((uiTEXT_INPUT *)this,puVar2);
  return;
}




/* from: wr_ui_ctrl.cpp
   addr: 00487DC0 */

void __thiscall wrUI_CTRL_INFO::Init(wrUI_CTRL_INFO *this,objOBJ *param_1)

{
  uiRENDER_ELEM *puVar1;
  
  wrUI_TEXT_INPUT::Init((wrUI_TEXT_INPUT *)this,param_1);
  puVar1 = uiRENDER_INFO::FindElement((uiRENDER_INFO *)(this + 0x6c),s_caption);
  *(uiRENDER_ELEM **)(this + 0x140) = puVar1;
  *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) & 0xfffffffe;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  return;
}




/* from: wr_ui_ctrl.cpp
   addr: 00487E00 */

int __thiscall wrUI_CTRL_INFO::OnMouseButton(wrUI_CTRL_INFO *this,uiINPUT_INFO *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(this + 0x13c);
  if ((uVar1 & 0x10) != 0) {
    iVar2 = wrUI_TEXT_INPUT::OnMouseButton((wrUI_TEXT_INPUT *)this,param_1);
    return iVar2;
  }
  if (*(int *)param_1 == 2) {
    *(uint *)(this + 0x13c) = uVar1 | 8;
    return 0;
  }
  if ((uVar1 & 8) != 0) {
    *(uint *)(this + 0x13c) = uVar1 & 0xfffffff7;
    (**(code **)(*(int *)uiSystem + 0x84))(2);
    *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) | 0x10;
    uiTEXT_INPUT::SetEditText((uiTEXT_INPUT *)this,(ushort *)u_);
    *(undefined4 *)(this + 0x148) = 0;
    iVar2 = inpINPUT::StartGetShortcut(*(inpINPUT **)(gsSysInput + 0x3c));
    if (iVar2 != 0) {
      *(wrUI_CTRL_INFO **)(uiSystem + 8) = this;
      uiCURSOR::Show((uiCURSOR *)(uiSystem + 0x14),0);
      *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) | 1;
      (**(code **)(**(int **)(gsSysInput + 0x3c) + 0xc))(1);
    }
  }
  return 0;
}




/* from: wr_ui_ctrl.cpp
   addr: 00487ED0 */

int __thiscall wrUI_CTRL_INFO::OnKeyboard(wrUI_CTRL_INFO *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  
  if ((((*(uint *)(this + 0x13c) & 0x10) == 0) && (*(int *)param_1 == 7)) &&
     (*(int *)(param_1 + 0xc) == 9)) {
    *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) & 0xfffffff7;
    (**(code **)(*(int *)uiSystem + 0x84))(2);
    *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) | 0x10;
    uiTEXT_INPUT::SetEditText((uiTEXT_INPUT *)this,(ushort *)u_);
    *(undefined4 *)(this + 0x148) = 0;
    iVar1 = inpINPUT::StartGetShortcut(*(inpINPUT **)(gsSysInput + 0x3c));
    if (iVar1 != 0) {
      *(wrUI_CTRL_INFO **)(uiSystem + 8) = this;
      uiCURSOR::Show((uiCURSOR *)(uiSystem + 0x14),0);
      *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) | 1;
      (**(code **)(**(int **)(gsSysInput + 0x3c) + 0xc))(1);
    }
    return 0;
  }
  iVar1 = uiTEXT_INPUT::OnKeyboard((uiTEXT_INPUT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_ctrl.cpp
   addr: 00487F90 */

int __thiscall wrUI_CTRL_INFO::ProcessUpdate(wrUI_CTRL_INFO *this,void *param_1)

{
  wrUI_CTRL_WINDOW *this_00;
  uiTEXT_INPUT *this_01;
  int iVar1;
  ushort *puVar2;
  wrUI_CTRL_WINDOW *pwVar3;
  int iVar4;
  wrUI_CTRL_WINDOW *pwVar5;
  int local_410;
  int iStack_40c;
  int iStack_408;
  wrUI_CTRL_INFO *local_404;
  int local_400 [256];
  
  local_404 = this;
  uiTEXT_INPUT::ProcessUpdate((uiTEXT_INPUT *)this,param_1);
  if (((byte)this[0x13c] & 0x10) != 0) {
    this_00 = *(wrUI_CTRL_WINDOW **)(this + 8);
    iVar1 = inpINPUT::ContinueGetShortcut(*(inpINPUT **)(gsSysInput + 0x3c),1,&local_410,local_400);
    if (iVar1 != 0) {
      if (local_410 < 1) {
        (**(code **)(*(int *)uiSystem + 0x84))(3);
      }
      else {
        local_410 = 1;
        iVar1 = wrUI_CTRL_WINDOW::StoreCommand
                          (this_00,*(wrUI_CTRL_RECORD **)(this + 0x144),1,local_400);
        if (iVar1 == 0) {
          iVar1 = inpINPUT::StartGetShortcut(*(inpINPUT **)(gsSysInput + 0x3c));
          if (iVar1 != 0) {
            return 1;
          }
        }
        else {
          (**(code **)(*(int *)uiSystem + 0x84))(4);
        }
      }
      puVar2 = wrUI_CTRL_RECORD::BuildSeqName(*(wrUI_CTRL_RECORD **)(this + 0x144));
      uiTEXT_INPUT::SetEditText((uiTEXT_INPUT *)this,puVar2);
      iVar1 = *(int *)(this_00 + 0x78) - *(int *)(this_00 + 0x74);
      if (*(int *)(this_00 + 0x97c) <= iVar1) {
        iVar1 = *(int *)(this_00 + 0x97c);
      }
      iVar4 = 0;
      if (0 < iVar1) {
        pwVar5 = this_00 + 0x980;
        pwVar3 = this_00 + *(int *)(this_00 + 0x74) * 0x24 + 0x7c;
        iStack_40c = iVar1;
        iStack_408 = iVar1;
        do {
          (**(code **)(**(int **)pwVar5 + 0x10))(1);
          this_01 = *(uiTEXT_INPUT **)pwVar5;
          *(wrUI_CTRL_WINDOW **)(this_01 + 0x144) = pwVar3;
          iVar1 = gsSTRINGS::GetStringIdFmt
                            (gsStrings,(char *)gsStrings,s_UI_CTRL_CMD__s,*(int *)pwVar3 + 4);
          uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this_01 + 0x140),iVar1);
          puVar2 = wrUI_CTRL_RECORD::BuildSeqName(*(wrUI_CTRL_RECORD **)(this_01 + 0x144));
          uiTEXT_INPUT::SetEditText(this_01,puVar2);
          pwVar5 = pwVar5 + 4;
          pwVar3 = pwVar3 + 0x24;
          iStack_40c = iStack_40c + -1;
        } while (iStack_40c != 0);
        iStack_40c = 0;
        this = local_404;
        iVar4 = iStack_408;
      }
      if (iVar4 < *(int *)(this_00 + 0x97c)) {
        pwVar5 = this_00 + iVar4 * 4 + 0x980;
        do {
          (**(code **)(**(int **)pwVar5 + 0x10))(0);
          iVar4 = iVar4 + 1;
          pwVar5 = pwVar5 + 4;
        } while (iVar4 < *(int *)(this_00 + 0x97c));
      }
      iVar1 = *(int *)(this_00 + 0x78);
      iVar4 = *(int *)(this_00 + 0x6c);
      if ((iVar1 == 0) || (iVar4 == -1)) {
        *(undefined4 *)(this_00 + 0x6c) = 0xffffffff;
      }
      else if (iVar4 < iVar1) {
        if (iVar4 < 0) {
          iVar4 = 0;
        }
        *(int *)(this_00 + 0x6c) = iVar4;
      }
      else {
        *(int *)(this_00 + 0x6c) = iVar1 + -1;
      }
      *(undefined4 *)(uiSystem + 8) = 0;
      uiCURSOR::Show((uiCURSOR *)(uiSystem + 0x14),1);
      *(uint *)(this + 0x13c) = *(uint *)(this + 0x13c) & 0xffffffee;
    }
  }
  return 1;
}




/* from: wr_ui_ctrl.cpp
   addr: 00488180 */

int __thiscall wrUI_CTRL_WINDOW::ProcessInit(wrUI_CTRL_WINDOW *this,void *param_1)

{
  gsiCOMMAND *this_00;
  uiTEXT_INPUT *this_01;
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  wrUI_CTRL_WINDOW *pwVar5;
  ushort *puVar6;
  uiELEMENT *puVar7;
  char *pcVar8;
  wrUI_CTRL_WINDOW *pwVar9;
  int iVar10;
  int iStack_10;
  int iStack_c;
  
  iVar1 = (**(code **)(*(int *)gsSysInput + 0x1c))(s_GAME);
  *(undefined4 *)(this + 0x78) = 0;
  iVar10 = *(int *)(iVar1 + 8);
  if (iVar10 < *(int *)(iVar1 + 0xc)) {
    do {
      iVar2 = iVar10 - *(int *)(iVar1 + 8);
      iVar4 = *(int *)(iVar1 + 4) + iVar2 * 0x9c;
      if (((((*(byte *)(*(int *)(iVar1 + 4) + iVar2 * 0x9c) & 0x60) == 0) &&
           (pcVar8 = (char *)(iVar4 + 4), *(int *)(iVar4 + 4) != s_DBG_._0_4_)) &&
          ((pcVar3 = strstr(pcVar8,s_WPN_), pcVar3 == (char *)0x0 ||
           ((iVar4 = sscanf(pcVar8,s_WPN__d,&iStack_10), iVar4 != 1 ||
            (iStack_10 <= (int)((-(uint)((gsAppState & 0x8000U) != 0) & 0xfffffffc) + 0xb))))))) &&
         (((pcVar3 = strstr(pcVar8,s_CINEMA), pcVar3 == (char *)0x0 &&
           (((pcVar3 = strstr(pcVar8,s_SWITCH_MODE), pcVar3 == (char *)0x0 &&
             (pcVar3 = strstr(pcVar8,s_LOOK_), pcVar3 == (char *)0x0)) &&
            (pcVar3 = strstr(pcVar8,s_ROTATE_), pcVar3 == (char *)0x0)))) &&
          (((pcVar3 = strstr(pcVar8,s_MOVE_UP), pcVar3 == (char *)0x0 &&
            (pcVar3 = strstr(pcVar8,s_MOVE_DOWN), pcVar3 == (char *)0x0)) &&
           (pcVar8 = strstr(pcVar8,&s_UI), pcVar8 == (char *)0x0)))))) {
        *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(iVar1 + 0xc));
  }
  iVar1 = (**(code **)(*(int *)gsSysInput + 0x1c))(s_GAME);
  iVar10 = *(int *)(iVar1 + 8);
  iStack_c = iVar1;
  if (iVar10 < *(int *)(iVar1 + 0xc)) {
    pwVar5 = this + 0x7c;
    do {
      iVar2 = iVar10 - *(int *)(iVar1 + 8);
      iVar4 = *(int *)(iVar1 + 4) + iVar2 * 0x9c;
      if (((((*(byte *)(*(int *)(iVar1 + 4) + iVar2 * 0x9c) & 0x60) == 0) &&
           (pcVar8 = (char *)(iVar4 + 4), *(int *)(iVar4 + 4) != s_DBG_._0_4_)) &&
          ((pcVar3 = strstr(pcVar8,s_WPN_), pcVar3 == (char *)0x0 ||
           ((iVar4 = sscanf(pcVar8,s_WPN__d,&iStack_10), iVar4 != 1 ||
            (iStack_10 <= (int)((-(uint)((gsAppState & 0x8000U) != 0) & 0xfffffffc) + 0xb))))))) &&
         ((pcVar3 = strstr(pcVar8,s_CINEMA), pcVar3 == (char *)0x0 &&
          (((((pcVar3 = strstr(pcVar8,s_SWITCH_MODE), pcVar3 == (char *)0x0 &&
              (pcVar3 = strstr(pcVar8,s_LOOK_), pcVar3 == (char *)0x0)) &&
             (pcVar3 = strstr(pcVar8,s_ROTATE_), pcVar3 == (char *)0x0)) &&
            ((pcVar3 = strstr(pcVar8,s_MOVE_UP), pcVar3 == (char *)0x0 &&
             (pcVar3 = strstr(pcVar8,s_MOVE_DOWN), pcVar3 == (char *)0x0)))) &&
           (pcVar8 = strstr(pcVar8,&s_UI), pcVar8 == (char *)0x0)))))) {
        iVar4 = 0;
        pwVar9 = pwVar5 + 4;
        this_00 = (gsiCOMMAND *)(*(int *)(iVar1 + 4) + (iVar10 - *(int *)(iVar1 + 8)) * 0x9c);
        *(gsiCOMMAND **)pwVar5 = this_00;
        do {
          gsiCOMMAND::GetKSeq(this_00,iVar4,(int *)pwVar9,(int *)(pwVar9 + 4));
          iVar4 = iVar4 + 1;
          pwVar9 = pwVar9 + 0x10;
        } while (iVar4 < 2);
        pwVar5 = pwVar5 + 0x24;
        iVar1 = iStack_c;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(iVar1 + 0xc));
  }
  iVar10 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x97c) <= iVar10) {
    iVar10 = *(int *)(this + 0x97c);
  }
  iVar1 = 0;
  if (0 < iVar10) {
    pwVar5 = this + 0x980;
    pwVar9 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
    iStack_c = iVar10;
    do {
      (**(code **)(**(int **)pwVar5 + 0x10))(1);
      this_01 = *(uiTEXT_INPUT **)pwVar5;
      *(wrUI_CTRL_WINDOW **)(this_01 + 0x144) = pwVar9;
      iVar1 = gsSTRINGS::GetStringIdFmt
                        (gsStrings,(char *)gsStrings,s_UI_CTRL_CMD__s,*(int *)pwVar9 + 4);
      uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this_01 + 0x140),iVar1);
      puVar6 = wrUI_CTRL_RECORD::BuildSeqName(*(wrUI_CTRL_RECORD **)(this_01 + 0x144));
      uiTEXT_INPUT::SetEditText(this_01,puVar6);
      pwVar5 = pwVar5 + 4;
      pwVar9 = pwVar9 + 0x24;
      iVar10 = iVar10 + -1;
      iVar1 = iStack_c;
    } while (iVar10 != 0);
  }
  if (iVar1 < *(int *)(this + 0x97c)) {
    pwVar5 = this + iVar1 * 4 + 0x980;
    do {
      (**(code **)(**(int **)pwVar5 + 0x10))(0);
      iVar1 = iVar1 + 1;
      pwVar5 = pwVar5 + 4;
    } while (iVar1 < *(int *)(this + 0x97c));
  }
  wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
            ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
             *(int *)(this + 0x6c),1);
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  puVar7 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 8),s_scrollbar);
  *(uiELEMENT **)(this + 0xa00) = puVar7;
  iVar10 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x97c) = 0;
  for (iVar1 = iVar10; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if ((*(uint *)(iVar1 + 4) & 0x8000) != 0) {
      *(int *)(this + 0x97c) = *(int *)(this + 0x97c) + 1;
    }
  }
  *(undefined4 *)(this + 0x97c) = 0;
  for (; iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x10)) {
    if ((*(uint *)(iVar10 + 4) & 0x8000) != 0) {
      *(int *)(this + *(int *)(this + 0x97c) * 4 + 0x980) = iVar10;
      *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) & 0xfffffbff;
      *(int *)(this + 0x97c) = *(int *)(this + 0x97c) + 1;
    }
  }
  iVar10 = *(int *)(this + 0xa00);
  if (iVar10 != 0) {
    *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) & 0xfffffbff;
    *(uint *)(*(int *)(this + 0xa00) + 4) = *(uint *)(*(int *)(this + 0xa00) + 4) & 0xfffffffb;
    *(uint *)(*(int *)(this + 0xa00) + 4) = *(uint *)(*(int *)(this + 0xa00) + 4) & 0xfffffff7;
    iVar10 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    wrUI_SCROLL_BAR::SetWindow(*(wrUI_SCROLL_BAR **)(this + 0xa00),(wrUI_WINDOW *)this,iVar10,1);
    wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),0);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40c;
  return 1;
}




/* from: wr_ui_ctrl.cpp
   addr: 00488610 */

int __thiscall wrUI_CTRL_WINDOW::StartAppearing(wrUI_CTRL_WINDOW *this,int param_1)

{
  uiTEXT_INPUT *this_00;
  int iVar1;
  int iVar2;
  ushort *puVar3;
  wrUI_CTRL_WINDOW *pwVar4;
  wrUI_CTRL_WINDOW *pwVar5;
  int local_8;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
    if (*(int *)(this + 0x97c) <= iVar1) {
      iVar1 = *(int *)(this + 0x97c);
    }
    iVar2 = 0;
    if (0 < iVar1) {
      pwVar5 = this + 0x980;
      pwVar4 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
      local_8 = iVar1;
      do {
        (**(code **)(**(int **)pwVar5 + 0x10))(1);
        this_00 = *(uiTEXT_INPUT **)pwVar5;
        *(wrUI_CTRL_WINDOW **)(this_00 + 0x144) = pwVar4;
        iVar2 = gsSTRINGS::GetStringIdFmt
                          (gsStrings,(char *)gsStrings,s_UI_CTRL_CMD__s,*(int *)pwVar4 + 4);
        uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this_00 + 0x140),iVar2);
        puVar3 = wrUI_CTRL_RECORD::BuildSeqName(*(wrUI_CTRL_RECORD **)(this_00 + 0x144));
        uiTEXT_INPUT::SetEditText(this_00,puVar3);
        pwVar5 = pwVar5 + 4;
        pwVar4 = pwVar4 + 0x24;
        local_8 = local_8 + -1;
        iVar2 = iVar1;
      } while (local_8 != 0);
    }
    if (iVar2 < *(int *)(this + 0x97c)) {
      pwVar5 = this + iVar2 * 4 + 0x980;
      do {
        (**(code **)(**(int **)pwVar5 + 0x10))(0);
        iVar2 = iVar2 + 1;
        pwVar5 = pwVar5 + 4;
      } while (iVar2 < *(int *)(this + 0x97c));
    }
    iVar1 = *(int *)(this + 0x78);
    iVar2 = *(int *)(this + 0x6c);
    if ((iVar1 != 0) && (iVar2 != -1)) {
      if (iVar2 < iVar1) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        *(int *)(this + 0x6c) = iVar2;
        iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
        return iVar1;
      }
      *(int *)(this + 0x6c) = iVar1 + -1;
      iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
      return iVar1;
    }
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_ctrl.cpp
   addr: 00488740 */

void __thiscall wrUI_CTRL_WINDOW::OnChildNotify(wrUI_CTRL_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  gsiCOMMAND *this_00;
  undefined *puVar1;
  gsSTRINGS *pgVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  ushort *puVar8;
  ushort *puVar9;
  int *piVar10;
  uiELEMENT *puVar11;
  wrUI_CTRL_WINDOW *unaff_EBX;
  int iVar12;
  wrUI_CTRL_WINDOW *pwVar13;
  int iVar14;
  wrUI_CTRL_WINDOW *pwVar15;
  wrUI_CTRL_WINDOW *pwStack_c;
  int iStack_4;
  
  pgVar2 = gsStrings;
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    puVar1 = *(undefined **)(param_1 + 8);
    if (puVar1 == (undefined *)0x414343) {
      piVar10 = (int *)(**(code **)(*(int *)gsSysInput + 0x1c))(s_GAME);
      iVar14 = 0;
      if (0 < *(int *)(this + 0x78)) {
        pwVar13 = this + 0x7c;
        do {
          iVar3 = 0;
          pwVar15 = pwVar13 + 4;
          do {
            gsiCOMMAND::SetKSeq(*(gsiCOMMAND **)pwVar13,iVar3,*(int *)pwVar15,(int *)(pwVar15 + 4));
            iVar3 = iVar3 + 1;
            pwVar15 = pwVar15 + 0x10;
          } while (iVar3 < 2);
          iVar14 = iVar14 + 1;
          pwVar13 = pwVar13 + 0x24;
          this = unaff_EBX;
        } while (iVar14 < *(int *)(unaff_EBX + 0x78));
      }
      (**(code **)(*piVar10 + 0x24))();
      goto LAB_00488b84;
    }
    if (puVar1 == &DAT_00444546) {
      iVar14 = gsSTRINGS::GetStringId(gsStrings,s_UI_CTRL_DEFAULTS_CONFIRM);
      puVar8 = gsSTRINGS::GetStringById(pgVar2,iVar14);
      pgVar2 = gsStrings;
      iVar14 = gsSTRINGS::GetStringId(gsStrings,s_UI_CTRL_DEFAULTS_CAP);
      puVar9 = gsSTRINGS::GetStringById(pgVar2,iVar14);
      (**(code **)(*(int *)uiSystem + 0x14))
                (puVar9,puVar8,1,&DAT_00444546,this,*(int *)(this + 8) + 0x18);
      goto LAB_00488b84;
    }
    if (puVar1 != (undefined *)0x4241434b) goto LAB_00488b84;
    iVar3 = (**(code **)(*(int *)gsSysInput + 0x1c))(s_GAME);
    iVar14 = *(int *)(iVar3 + 8);
    if (iVar14 < *(int *)(iVar3 + 0xc)) {
      pwStack_c = this + 0x7c;
      do {
        iVar4 = iVar14 - *(int *)(iVar3 + 8);
        iVar6 = *(int *)(iVar3 + 4) + iVar4 * 0x9c;
        if ((((*(byte *)(*(int *)(iVar3 + 4) + iVar4 * 0x9c) & 0x60) == 0) &&
            (pcVar7 = (char *)(iVar6 + 4), *(int *)(iVar6 + 4) != s_DBG_._0_4_)) &&
           ((((pcVar5 = strstr(pcVar7,s_WPN_), pcVar5 == (char *)0x0 ||
              ((iVar6 = sscanf(pcVar7,s_WPN__d,&iStack_4), iVar6 != 1 ||
               (iStack_4 <= (int)((-(uint)((gsAppState & 0x8000U) != 0) & 0xfffffffc) + 0xb))))) &&
             (pcVar5 = strstr(pcVar7,s_CINEMA), pcVar5 == (char *)0x0)) &&
            ((((pcVar5 = strstr(pcVar7,s_SWITCH_MODE), pcVar5 == (char *)0x0 &&
               (pcVar5 = strstr(pcVar7,s_LOOK_), pcVar5 == (char *)0x0)) &&
              (pcVar5 = strstr(pcVar7,s_ROTATE_), pcVar5 == (char *)0x0)) &&
             (((pcVar5 = strstr(pcVar7,s_MOVE_UP), pcVar5 == (char *)0x0 &&
               (pcVar5 = strstr(pcVar7,s_MOVE_DOWN), pcVar5 == (char *)0x0)) &&
              (pcVar7 = strstr(pcVar7,&s_UI), pcVar7 == (char *)0x0)))))))) {
          iVar6 = 0;
          pwVar13 = pwStack_c + 4;
          this_00 = (gsiCOMMAND *)(*(int *)(iVar3 + 4) + (iVar14 - *(int *)(iVar3 + 8)) * 0x9c);
          *(gsiCOMMAND **)pwStack_c = this_00;
          do {
            gsiCOMMAND::GetKSeq(this_00,iVar6,(int *)pwVar13,(int *)(pwVar13 + 4));
            iVar6 = iVar6 + 1;
            pwVar13 = pwVar13 + 0x10;
          } while (iVar6 < 2);
          pwStack_c = pwStack_c + 0x24;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(iVar3 + 0xc));
    }
  }
  else {
    if (((*(int *)(param_1 + 4) != 0x4d534742) || (*(undefined **)(param_1 + 0xc) != &DAT_00444546))
       || (*(int *)(param_1 + 0x10) == 0)) goto LAB_00488b84;
    iVar3 = (**(code **)(*(int *)gsSysInput + 0x1c))(s_GAME_DEF);
    iVar14 = *(int *)(iVar3 + 8);
    if (iVar14 < *(int *)(iVar3 + 0xc)) {
      pwStack_c = this + 0x80;
      do {
        iVar4 = iVar14 - *(int *)(iVar3 + 8);
        iVar6 = *(int *)(iVar3 + 4) + iVar4 * 0x9c;
        if ((((((*(byte *)(*(int *)(iVar3 + 4) + iVar4 * 0x9c) & 0x60) == 0) &&
              (pcVar7 = (char *)(iVar6 + 4), *(int *)(iVar6 + 4) != s_DBG_._0_4_)) &&
             ((pcVar5 = strstr(pcVar7,s_WPN_), pcVar5 == (char *)0x0 ||
              ((iVar6 = sscanf(pcVar7,s_WPN__d,&iStack_4), iVar6 != 1 ||
               (iStack_4 <= (int)((-(uint)((gsAppState & 0x8000U) != 0) & 0xfffffffc) + 0xb)))))))
            && ((pcVar5 = strstr(pcVar7,s_CINEMA), pcVar5 == (char *)0x0 &&
                ((((pcVar5 = strstr(pcVar7,s_SWITCH_MODE), pcVar5 == (char *)0x0 &&
                   (pcVar5 = strstr(pcVar7,s_LOOK_), pcVar5 == (char *)0x0)) &&
                  (pcVar5 = strstr(pcVar7,s_ROTATE_), pcVar5 == (char *)0x0)) &&
                 ((pcVar5 = strstr(pcVar7,s_MOVE_UP), pcVar5 == (char *)0x0 &&
                  (pcVar5 = strstr(pcVar7,s_MOVE_DOWN), pcVar5 == (char *)0x0)))))))) &&
           (pcVar7 = strstr(pcVar7,&s_UI), pcVar7 == (char *)0x0)) {
          iVar6 = *(int *)(iVar3 + 8);
          iVar4 = *(int *)(iVar3 + 4);
          iVar12 = 0;
          pwVar13 = pwStack_c;
          do {
            gsiCOMMAND::GetKSeq((gsiCOMMAND *)(iVar4 + (iVar14 - iVar6) * 0x9c),iVar12,
                                (int *)pwVar13,(int *)(pwVar13 + 4));
            iVar12 = iVar12 + 1;
            pwVar13 = pwVar13 + 0x10;
          } while (iVar12 < 2);
          pwStack_c = pwStack_c + 0x24;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < *(int *)(iVar3 + 0xc));
    }
  }
  wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO>::UpdateContext
            ((wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *)this);
LAB_00488b84:
  if (*(int *)(param_1 + 4) != 0x464f4353) {
    uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
    return;
  }
  iVar14 = 0;
  if (0 < *(int *)((uiELEMENT *)this + 0x97c)) {
    puVar11 = (uiELEMENT *)this + 0x980;
    while (*(int *)param_1 != *(int *)puVar11) {
      iVar14 = iVar14 + 1;
      puVar11 = puVar11 + 4;
      if (*(int *)((uiELEMENT *)this + 0x97c) <= iVar14) {
        return;
      }
    }
    iVar14 = *(int *)((uiELEMENT *)this + 0x74) + iVar14;
    if ((iVar14 < *(int *)((uiELEMENT *)this + 0x78)) && (*(int *)(param_1 + 8) != 0)) {
      if ((*(int *)((uiELEMENT *)this + 0x78) != 0) && (iVar14 != -1)) {
        if (iVar14 < 0) {
          iVar14 = 0;
        }
        *(int *)((uiELEMENT *)this + 0x6c) = iVar14;
        return;
      }
      *(undefined4 *)((uiELEMENT *)this + 0x6c) = 0xffffffff;
    }
  }
  return;
}




/* from: wr_ui_ctrl.cpp
   addr: 00488C40 */

int __thiscall
wrUI_CTRL_WINDOW::StoreCommand
          (wrUI_CTRL_WINDOW *this,wrUI_CTRL_RECORD *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  wrUI_CTRL_RECORD *pwVar3;
  wrUI_CTRL_RECORD *pwVar4;
  wrUI_CTRL_WINDOW *pwVar5;
  int iVar6;
  wrUI_CTRL_WINDOW *pwVar7;
  wrUI_CTRL_WINDOW *pwVar8;
  wrUI_CTRL_RECORD *pwVar9;
  int *piVar10;
  bool bVar11;
  int local_218;
  int local_20c [3];
  ushort local_200 [256];
  
  iVar1 = _ctrlBuildSeqName(param_2,param_3,local_200,0x100);
  if (iVar1 == 0) {
    return 0;
  }
  local_218 = 0;
  if (0 < *(int *)(this + 0x78)) {
    pwVar7 = this + 0x7c;
    do {
      if (pwVar7 != (wrUI_CTRL_WINDOW *)param_1) {
        iVar1 = 0;
        pwVar8 = pwVar7 + 8;
        do {
          if (*(int *)(pwVar8 + -4) == param_2) {
            iVar2 = 0;
            pwVar5 = pwVar8;
            if (0 < param_2) {
              do {
                if (*(int *)pwVar5 != param_3[iVar2]) break;
                iVar2 = iVar2 + 1;
                pwVar5 = pwVar5 + 4;
              } while (iVar2 < param_2);
            }
            if (iVar2 == param_2) {
              if (iVar1 != -1) {
                *(undefined4 *)(pwVar7 + iVar1 * 0x10 + 4) = 0;
              }
              break;
            }
          }
          iVar1 = iVar1 + 1;
          pwVar8 = pwVar8 + 0x10;
        } while (iVar1 < 2);
      }
      local_218 = local_218 + 1;
      pwVar7 = pwVar7 + 0x24;
    } while (local_218 < *(int *)(this + 0x78));
  }
  local_218 = 0;
  pwVar3 = param_1 + 4;
  pwVar4 = pwVar3;
  do {
    iVar1 = *(int *)pwVar4;
    bVar11 = iVar1 == 0;
    piVar10 = local_20c;
    pwVar9 = pwVar4;
    for (; pwVar9 = pwVar9 + 4, iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar10 = *(int *)pwVar9;
      piVar10 = piVar10 + 1;
    }
    if (bVar11) break;
    local_218 = local_218 + 1;
    pwVar4 = pwVar4 + 0x10;
  } while (local_218 < 2);
  iVar1 = 0;
  pwVar4 = param_1 + 8;
  do {
    if (*(int *)(pwVar4 + -4) == param_2) {
      iVar2 = 0;
      pwVar9 = pwVar4;
      if (0 < param_2) {
        do {
          if (*(int *)pwVar9 != param_3[iVar2]) break;
          iVar2 = iVar2 + 1;
          pwVar9 = pwVar9 + 4;
        } while (iVar2 < param_2);
      }
      if (iVar2 == param_2) {
        if (iVar1 != -1) {
          *(undefined4 *)(param_1 + iVar1 * 0x10 + 4) = 0;
        }
        goto LAB_00488dab;
      }
    }
    iVar1 = iVar1 + 1;
    pwVar4 = pwVar4 + 0x10;
    if (1 < iVar1) {
LAB_00488dab:
      if (local_218 == 2) {
        iVar1 = 0;
        do {
          iVar2 = *(int *)pwVar3;
          piVar10 = local_20c;
          pwVar4 = pwVar3;
          for (iVar6 = iVar2; pwVar4 = pwVar4 + 4, iVar6 != 0; iVar6 = iVar6 + -1) {
            *piVar10 = *(int *)pwVar4;
            piVar10 = piVar10 + 1;
          }
          iVar2 = _ctrlBuildSeqName(iVar2,local_20c,local_200,0x100);
          if (iVar2 != 0) {
            *(int *)pwVar3 = 0;
            local_218 = iVar1;
          }
          iVar1 = iVar1 + 1;
          pwVar3 = pwVar3 + 0x10;
        } while (iVar1 < 2);
      }
      if (2 < param_2) {
        param_2 = 3;
      }
      *(int *)(param_1 + local_218 * 0x10 + 4) = param_2;
      pwVar4 = param_1 + local_218 * 0x10 + 8;
      for (; param_2 != 0; param_2 = param_2 + -1) {
        *(int *)pwVar4 = *param_3;
        param_3 = param_3 + 1;
        pwVar4 = pwVar4 + 4;
      }
      return 1;
    }
  } while( true );
}




/* from: wr_ui_ctrl.cpp
   addr: 00488E40 */

int __thiscall wrUI_CADV_WINDOW::StartAppearing(wrUI_CADV_WINDOW *this,int param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  int iVar3;
  wrUI_CADV_WINDOW *local_4;
  
  iVar3 = param_1;
  local_4 = this;
  if (param_1 != 0) {
    iVar1 = _apCfgReadFloat((void **)0x0,s_Input,s_MouseSens,(float *)&param_1);
    if (iVar1 == 0) {
      param_1 = 0x3f000000;
    }
    puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_mouse_sens);
    wrUI_SCROLL_BAR::SetWindow((wrUI_SCROLL_BAR *)puVar2,(wrUI_WINDOW *)this,100,1);
    iVar1 = ftol();
    wrUI_SCROLL_BAR::SetPos((wrUI_SCROLL_BAR *)puVar2,iVar1);
    iVar1 = _apCfgReadBool((void **)0x0,s_Input,s_InvertMouse,(int *)&local_4);
    if (iVar1 == 0) {
      local_4 = (wrUI_CADV_WINDOW *)0x0;
    }
    puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_inv_mouse);
    (**(code **)(*(int *)puVar2 + 0x60))
              ((uint)(local_4 != (wrUI_CADV_WINDOW *)0x0) - *(int *)(puVar2 + 300));
  }
  iVar3 = uiELEMENT::StartAppearing((uiELEMENT *)this,iVar3);
  return iVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_ctrl.cpp
   addr: 00488F00 */

void __thiscall wrUI_CADV_WINDOW::OnChildNotify(wrUI_CADV_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  uiELEMENT *puVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 4) == 0x42544e43) && (*(int *)(param_1 + 8) == 0x414343)) {
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_mouse_sens);
    iVar2 = wrUI_SCROLL_BAR::GetPos((wrUI_SCROLL_BAR *)puVar1);
    apCfgWriteFloat(s_Input,s_MouseSens,(float)iVar2 * ___real_3d1fbe77 + ___real_3dcccccd);
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_inv_mouse);
    apCfgWriteBool(s_Input,s_InvertMouse,(uint)(*(int *)(puVar1 + 300) != 0));
    gsINP_SYSTEM::ApplySettings(gsSysInput);
  }
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}

