
/* from: wr_ui_sinfo.cpp
   addr: 00492260 */

int __thiscall wrUI_SI_INFO_WND::ProcessInit(wrUI_SI_INFO_WND *this,void *param_1)

{
  uiELEMENT *puVar1;
  undefined **ppuVar2;
  wrUI_SI_INFO_WND *pwVar3;
  
  ppuVar2 = &nameArray;
  pwVar3 = this + 0x6c;
  do {
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,*ppuVar2);
    *(uiELEMENT **)pwVar3 = puVar1;
    ppuVar2 = ppuVar2 + 1;
    pwVar3 = pwVar3 + 4;
  } while ((int)ppuVar2 < 0x5f3fd0);
  return 1;
}




/* from: wr_ui_sinfo.cpp
   addr: 004922A0 */

int __thiscall wrUI_SI_INFO_WND::StartAppearing(wrUI_SI_INFO_WND *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    uiAREA::SetTextW(*(uiAREA **)(this + 0x6c),(ushort *)u_SERVER_NAME_STRING,0x7fffffff);
    uiAREA::SetTextW(*(uiAREA **)(this + 0x70),(ushort *)u_192_168_255_164,0x7fffffff);
    uiAREA::SetTextW(*(uiAREA **)(this + 0x74),(ushort *)u_1000_MS,0x7fffffff);
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_sinfo.cpp
   addr: 004922F0 */

void __thiscall wrUI_SI_PLAYER_INFO::Init(wrUI_SI_PLAYER_INFO *this,objOBJ *param_1)

{
  uiRENDER_ELEM *puVar1;
  undefined **ppuVar2;
  wrUI_SI_PLAYER_INFO *pwVar3;
  
  uiAREA::Init((uiAREA *)this,param_1);
  ppuVar2 = &arrayNames;
  pwVar3 = this + 0x128;
  do {
    puVar1 = uiRENDER_INFO::FindElement((uiRENDER_INFO *)(this + 0x6c),*ppuVar2);
    *(uiRENDER_ELEM **)pwVar3 = puVar1;
    ppuVar2 = ppuVar2 + 1;
    pwVar3 = pwVar3 + 4;
  } while ((int)ppuVar2 < 0x5f3fdc);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  return;
}




/* from: wr_ui_sinfo.cpp
   addr: 00492340 */

void __thiscall
wrUI_SI_PLAYER_INFO::SetRecord(wrUI_SI_PLAYER_INFO *this,wrUI_SI_PLAYER_RECORD *param_1)

{
  ushort *puVar1;
  int iVar2;
  wchar_t local_80 [64];
  
  swprintf(local_80,u__d,*(undefined4 *)param_1);
  uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(this + 0x6c),(ushort *)local_80,0x7fffffff);
  iVar2 = 0x7fffffff;
  puVar1 = gsSTRINGS::AsciiToUnicode(gsStrings,(char *)(param_1 + 4));
  uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(this + 0x128),puVar1,iVar2);
  swprintf(local_80,u__d,*(undefined4 *)(param_1 + 0x44));
  uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(this + 300),(ushort *)local_80,0x7fffffff);
  swprintf(local_80,u__02d__02d,*(int *)(param_1 + 0x48) / 0x3c,*(int *)(param_1 + 0x48) % 0x3c);
  uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(this + 0x130),(ushort *)local_80,0x7fffffff);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_sinfo.cpp
   addr: 00492410 */

int __thiscall wrUI_SI_PLAYER_WND::ProcessInit(wrUI_SI_PLAYER_WND *this,void *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uiELEMENT *puVar3;
  int iVar4;
  float extraout_ECX;
  float extraout_ECX_00;
  float extraout_EDX;
  wrUI_SI_PLAYER_WND *pwVar5;
  int iVar6;
  wrUI_SI_PLAYER_WND *pwVar7;
  undefined8 uVar8;
  int local_4;
  
  *(undefined4 *)(this + 0x78) = 5;
  pwVar7 = this + 0x80;
  iVar4 = 1;
  do {
    *(int *)(pwVar7 + -4) = iVar4;
    sprintf((char *)pwVar7,s_PLAYER_2d,iVar4);
    m3dRandRange(extraout_ECX,extraout_EDX);
    uVar8 = ftol();
    *(int *)(pwVar7 + 0x40) = (int)uVar8;
    m3dRandRange(extraout_ECX_00,(float)((ulonglong)uVar8 >> 0x20));
    uVar2 = ftol();
    *(undefined4 *)(pwVar7 + 0x44) = uVar2;
    pwVar7 = pwVar7 + 0x4c;
    bVar1 = iVar4 < *(int *)(this + 0x78);
    iVar4 = iVar4 + 1;
  } while (bVar1);
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  puVar3 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 8),s_scrollbar);
  *(uiELEMENT **)(this + 0x1400) = puVar3;
  iVar4 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x137c) = 0;
  for (iVar6 = iVar4; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x10)) {
    if ((*(uint *)(iVar6 + 4) & 0x8000) != 0) {
      *(int *)(this + 0x137c) = *(int *)(this + 0x137c) + 1;
    }
  }
  *(undefined4 *)(this + 0x137c) = 0;
  for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x10)) {
    if ((*(uint *)(iVar4 + 4) & 0x8000) != 0) {
      *(int *)(this + *(int *)(this + 0x137c) * 4 + 0x1380) = iVar4;
      *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) & 0xfffffbff;
      *(int *)(this + 0x137c) = *(int *)(this + 0x137c) + 1;
    }
  }
  iVar4 = *(int *)(this + 0x1400);
  if (iVar4 != 0) {
    *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) & 0xfffffbff;
    *(uint *)(*(int *)(this + 0x1400) + 4) = *(uint *)(*(int *)(this + 0x1400) + 4) & 0xfffffffb;
    *(uint *)(*(int *)(this + 0x1400) + 4) = *(uint *)(*(int *)(this + 0x1400) + 4) & 0xfffffff7;
    iVar4 = *(int *)(this + 0x78) - *(int *)(this + 0x137c);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    wrUI_SCROLL_BAR::SetWindow(*(wrUI_SCROLL_BAR **)(this + 0x1400),(wrUI_WINDOW *)this,iVar4,1);
    wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x1400),0);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40c;
  iVar4 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x137c) <= iVar4) {
    iVar4 = *(int *)(this + 0x137c);
  }
  iVar6 = 0;
  if (0 < iVar4) {
    pwVar7 = this + 0x1380;
    pwVar5 = this + *(int *)(this + 0x74) * 0x4c + 0x7c;
    local_4 = iVar4;
    do {
      (**(code **)(**(int **)pwVar7 + 0x10))(1);
      wrUI_SI_PLAYER_INFO::SetRecord
                (*(wrUI_SI_PLAYER_INFO **)pwVar7,(wrUI_SI_PLAYER_RECORD *)pwVar5);
      pwVar7 = pwVar7 + 4;
      pwVar5 = (wrUI_SI_PLAYER_WND *)((wrUI_SI_PLAYER_RECORD *)pwVar5 + 0x4c);
      local_4 = local_4 + -1;
      iVar6 = iVar4;
    } while (local_4 != 0);
  }
  if (iVar6 < *(int *)(this + 0x137c)) {
    pwVar7 = this + iVar6 * 4 + 0x1380;
    do {
      (**(code **)(**(int **)pwVar7 + 0x10))(0);
      iVar6 = iVar6 + 1;
      pwVar7 = pwVar7 + 4;
    } while (iVar6 < *(int *)(this + 0x137c));
  }
  iVar4 = *(int *)(this + 0x78);
  iVar6 = *(int *)(this + 0x6c);
  if ((iVar4 != 0) && (iVar6 != -1)) {
    if (iVar4 <= iVar6) {
      *(int *)(this + 0x6c) = iVar4 + -1;
      return 1;
    }
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    *(int *)(this + 0x6c) = iVar6;
    return 1;
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return 1;
}

