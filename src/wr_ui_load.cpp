
/* from: wr_ui_load.cpp
   addr: 0048DD30 */

void __thiscall wrUI_LS_INFO::Init(wrUI_LS_INFO *this,objOBJ *param_1)

{
  uiAREA::Init((uiAREA *)this,param_1);
  uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),0x5c000000);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8006;
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048DD60 */

void __thiscall wrUI_LS_INFO::SetActive(wrUI_LS_INFO *this,int param_1)

{
  bool bVar1;
  
  bVar1 = param_1 == 0;
  param_1 = -0x31000000;
  if (bVar1) {
    param_1 = 0x5c000000;
  }
  uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),param_1);
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048DD80
   addr: 0048DD80 */

int __thiscall wrUI_JOIN_INFO::OnMouseButton(wrUI_JOIN_INFO *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  wrUI_JOIN_INFO *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)param_1 == 2) {
    uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)this);
    iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
    return iVar1;
  }
  if (*(int *)param_1 == 4) {
    uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)this);
    local_8 = 0x44424c43;
    local_4 = 0x494e464f;
    local_c = this;
    (**(code **)(**(int **)(this + 8) + 0x5c))(&local_c);
  }
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_load.cpp
   addr: 0048DDF0
   addr: 0048DDF0 */

int __thiscall wrUI_LS_INFO::OnKbdFocus(wrUI_LS_INFO *this,uiELEMENT *param_1)

{
  wrUI_LS_INFO *local_c;
  undefined4 local_8;
  uint local_4;
  
  local_8 = 0x464f4353;
  local_4 = (uint)(param_1 == (uiELEMENT *)this);
  local_c = this;
  (**(code **)(**(int **)(this + 8) + 0x5c))(&local_c);
  return 1;
}




/* from: wr_ui_load.cpp
   addr: 0048DE30 */

void __thiscall wrUI_LS_INFO::SetRecord(wrUI_LS_INFO *this,wrUI_LS_RECORD *param_1)

{
  float fVar1;
  float fVar2;
  size_t sVar3;
  float *pfVar4;
  wrUI_LS_RECORD *pwVar5;
  ushort local_8 [4];
  
  fVar1 = *(float *)(this + 0x60);
  fVar2 = *(float *)(this + 0x58);
  sVar3 = wcslen((wchar_t *)(param_1 + 6));
  if (-1 < (int)sVar3) {
    pwVar5 = param_1 + sVar3 * 2 + 8;
    do {
      pfVar4 = (float *)uiFONT::GetStringSizeW
                                  (*(uiFONT **)(this + 0xfc),local_8,(m2dV *)(param_1 + 8),
                                   (int)(this + 0x108));
      if (*pfVar4 <= fVar1 - fVar2) break;
      *(undefined2 *)pwVar5 = 0;
      sVar3 = sVar3 - 1;
      pwVar5 = pwVar5 + -2;
    } while (-1 < (int)sVar3);
  }
  uiAREA::SetTextW((uiAREA *)this,(ushort *)(param_1 + 8),0x7fffffff);
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048DEC0 */

void __thiscall wrUI_LS_INFO::ClearRecord(wrUI_LS_INFO *this)

{
  float fVar1;
  float fVar2;
  size_t sVar3;
  float *pfVar4;
  ushort local_110 [4];
  undefined4 local_108;
  wchar_t local_102;
  ushort local_100 [128];
  
  fVar1 = *(float *)(this + 0x60);
  fVar2 = *(float *)(this + 0x58);
  local_100[0] = 0;
  local_108 = 0xffffffff;
  sVar3 = wcslen(&local_102);
  if (-1 < (int)sVar3) {
    do {
      pfVar4 = (float *)uiFONT::GetStringSizeW
                                  (*(uiFONT **)(this + 0xfc),local_110,(m2dV *)local_100,
                                   (int)(this + 0x108));
      if (*pfVar4 <= fVar1 - fVar2) break;
      local_100[sVar3] = 0;
      sVar3 = sVar3 - 1;
    } while (-1 < (int)sVar3);
  }
  uiAREA::SetTextW((uiAREA *)this,local_100,0x7fffffff);
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048DF60 */

int __thiscall wrUI_LS_WINDOW::ProcessInit(wrUI_LS_WINDOW *this,void *param_1)

{
  float fVar1;
  float fVar2;
  uiAREA *this_00;
  txmTEXTURE *ptVar3;
  uiELEMENT *puVar4;
  int iVar5;
  size_t sVar6;
  float *pfVar7;
  wrUI_LS_WINDOW *pwVar8;
  int iVar9;
  wrUI_LS_WINDOW *pwVar10;
  wrUI_LS_WINDOW *pwVar11;
  int iVar12;
  ulong uVar13;
  ushort auStack_18 [12];
  
  ptVar3 = txmMANAGER::Add(txmManager,s_wr_ui_screenshot,0xc00,0xffffffff);
  *(txmTEXTURE **)(this + 0x430c) = ptVar3;
  (**(code **)(*(int *)ptVar3 + 0x10))(0x80,0x80,1,2);
  puVar4 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_picture);
  *(uiELEMENT **)(this + 0x4310) = puVar4;
  uiRENDER_INFO::SetTex((uiRENDER_INFO *)(puVar4 + 0x6c),*(txmTEXTURE **)(this + 0x430c));
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  puVar4 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 8),s_scrollbar);
  *(uiELEMENT **)(this + 0x4300) = puVar4;
  iVar5 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x427c) = 0;
  for (iVar12 = iVar5; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x10)) {
    if ((*(uint *)(iVar12 + 4) & 0x8000) != 0) {
      *(int *)(this + 0x427c) = *(int *)(this + 0x427c) + 1;
    }
  }
  *(undefined4 *)(this + 0x427c) = 0;
  for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x10)) {
    if ((*(uint *)(iVar5 + 4) & 0x8000) != 0) {
      *(int *)(this + *(int *)(this + 0x427c) * 4 + 0x4280) = iVar5;
      *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) & 0xfffffbff;
      *(int *)(this + 0x427c) = *(int *)(this + 0x427c) + 1;
    }
  }
  iVar5 = *(int *)(this + 0x4300);
  if (iVar5 != 0) {
    *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) & 0xfffffbff;
    *(uint *)(*(int *)(this + 0x4300) + 4) = *(uint *)(*(int *)(this + 0x4300) + 4) & 0xfffffffb;
    *(uint *)(*(int *)(this + 0x4300) + 4) = *(uint *)(*(int *)(this + 0x4300) + 4) & 0xfffffff7;
    iVar5 = *(int *)(this + 0x78) - *(int *)(this + 0x427c);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    wrUI_SCROLL_BAR::SetWindow(*(wrUI_SCROLL_BAR **)(this + 0x4300),(wrUI_WINDOW *)this,iVar5,1);
    wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x4300),0);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40c;
  iVar5 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x427c) <= iVar5) {
    iVar5 = *(int *)(this + 0x427c);
  }
  iVar12 = 0;
  if (0 < iVar5) {
    pwVar11 = this + 0x4280;
    pwVar10 = this + *(int *)(this + 0x74) * 0x108 + 0x7c;
    iVar9 = iVar5;
    do {
      (**(code **)(**(int **)pwVar11 + 0x10))(1);
      this_00 = *(uiAREA **)pwVar11;
      fVar1 = *(float *)(this_00 + 0x60);
      fVar2 = *(float *)(this_00 + 0x58);
      sVar6 = wcslen((wchar_t *)(pwVar10 + 6));
      if (-1 < (int)sVar6) {
        pwVar8 = pwVar10 + sVar6 * 2 + 8;
        do {
          pfVar7 = (float *)uiFONT::GetStringSizeW
                                      (*(uiFONT **)(this_00 + 0xfc),auStack_18,(m2dV *)(pwVar10 + 8)
                                       ,(int)(this_00 + 0x108));
          if (*pfVar7 <= fVar1 - fVar2) break;
          sVar6 = sVar6 - 1;
          *(undefined2 *)pwVar8 = 0;
          pwVar8 = pwVar8 + -2;
        } while (-1 < (int)sVar6);
      }
      uiAREA::SetTextW(this_00,(ushort *)(pwVar10 + 8),0x7fffffff);
      pwVar11 = pwVar11 + 4;
      pwVar10 = pwVar10 + 0x108;
      iVar9 = iVar9 + -1;
      iVar12 = iVar5;
    } while (iVar9 != 0);
  }
  if (iVar12 < *(int *)(this + 0x427c)) {
    pwVar11 = this + iVar12 * 4 + 0x4280;
    do {
      wrUI_LS_INFO::ClearRecord(*(wrUI_LS_INFO **)pwVar11);
      (**(code **)(**(int **)pwVar11 + 0x10))(0);
      iVar12 = iVar12 + 1;
      pwVar11 = pwVar11 + 4;
    } while (iVar12 < *(int *)(this + 0x427c));
  }
  wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
            ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
             *(int *)(this + 0x6c),1);
  iVar5 = 0;
  if (0 < *(int *)(this + 0x427c)) {
    pwVar11 = this + 0x4280;
    do {
      if (iVar5 == *(int *)(this + 0x6c) - *(int *)(this + 0x74)) {
        uVar13 = 0xcf000000;
      }
      else {
        uVar13 = 0x5c000000;
      }
      uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(*(int *)pwVar11 + 0x6c),uVar13);
      iVar5 = iVar5 + 1;
      pwVar11 = pwVar11 + 4;
    } while (iVar5 < *(int *)(this + 0x427c));
  }
  *(undefined4 *)(this + 0x4314) = 0xfffffffe;
  *(undefined4 *)(this + 0x4318) = 0xffffffff;
  return 1;
}




/* from: wr_ui_load.cpp
   addr: 0048E240 */

int __thiscall wrUI_LS_WINDOW::StartAppearing(wrUI_LS_WINDOW *this,int param_1)

{
  int iVar1;
  wrUI_LS_WINDOW *pwVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    if (*(int *)(this + 0x6c) != -1) {
      *(undefined4 *)(this + 0x4318) = *(undefined4 *)(this + *(int *)(this + 0x6c) * 0x108 + 0x7c);
    }
  }
  else {
    RescanFileNames(this);
    iVar3 = *(int *)(this + 0x78);
    if (0 < iVar3) {
      iVar1 = 0;
      if (0 < iVar3) {
        pwVar2 = this + 0x7c;
        do {
          if (*(int *)pwVar2 == *(int *)(this + 0x4318)) break;
          iVar1 = iVar1 + 1;
          pwVar2 = pwVar2 + 0x108;
        } while (iVar1 < iVar3);
      }
      if (iVar1 == iVar3) {
        iVar1 = 0;
      }
      *(int *)(this + 0x6c) = iVar1;
      iVar3 = 0;
      if (0 < *(int *)(this + 0x427c)) {
        pwVar2 = this + 0x4280;
        do {
          if (iVar3 == *(int *)(this + 0x6c) - *(int *)(this + 0x74)) {
            uVar4 = 0xcf000000;
          }
          else {
            uVar4 = 0x5c000000;
          }
          uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(*(int *)pwVar2 + 0x6c),uVar4);
          iVar3 = iVar3 + 1;
          pwVar2 = pwVar2 + 4;
        } while (iVar3 < *(int *)(this + 0x427c));
      }
      iVar3 = *(int *)(this + 0x6c);
      if ((iVar3 != -1) &&
         (((iVar1 = *(int *)(this + 0x74), iVar3 < iVar1 && (0 < iVar1)) ||
          ((*(int *)(this + 0x427c) + iVar1 <= iVar3 &&
           (iVar1 < *(int *)(this + 0x78) - *(int *)(this + 0x427c))))))) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
        *(undefined4 *)(this + 0x4304) = 0x3ca3d70a;
        uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
        return 1;
      }
    }
  }
  uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return 1;
}




/* from: wr_ui_load.cpp
   addr: 0048E350 */

void __thiscall
wrUI_LS_WINDOW::OnScrollNotify(wrUI_LS_WINDOW *this,wrUI_SCROLL_BAR *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  wrUI_LS_WINDOW *pwVar3;
  int iVar4;
  uiELEMENT *puVar5;
  ulong uVar6;
  
  iVar4 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x74);
  if ((((iVar4 < iVar1) || (*(int *)(this + 0x427c) + iVar1 <= iVar4)) ||
      ((*(uint *)(*(int *)(this + (iVar4 - iVar1) * 4 + 0x4280) + 4) & 0x20) == 0)) &&
     (*(int *)(uiSystem + 0x10) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (*(int *)(this + 0x78) - *(int *)(this + 0x427c) < param_2) {
    param_2 = *(int *)(this + 0x78) - *(int *)(this + 0x427c);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (iVar1 != param_2) {
    *(int *)(this + 0x74) = param_2;
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
    wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::UpdateContext
              ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this);
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
    (**(code **)(*(int *)uiSystem + 0x84))(1);
    if (*(wrUI_SCROLL_BAR **)(this + 0x4300) != (wrUI_SCROLL_BAR *)0x0) {
      wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x4300),*(int *)(this + 0x74));
    }
  }
  if ((bVar2) && (iVar4 = *(int *)(this + 0x6c), iVar4 != -1)) {
    iVar1 = *(int *)(this + 0x74);
    if ((iVar4 < iVar1) || (*(int *)(this + 0x427c) + iVar1 <= iVar4)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      puVar5 = (uiELEMENT *)0x0;
    }
    else {
      puVar5 = *(uiELEMENT **)(this + (iVar4 - iVar1) * 4 + 0x4280);
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,puVar5);
  }
  iVar4 = 0;
  if (0 < *(int *)(this + 0x427c)) {
    pwVar3 = this + 0x4280;
    do {
      if (iVar4 == *(int *)(this + 0x6c) - *(int *)(this + 0x74)) {
        uVar6 = 0xcf000000;
      }
      else {
        uVar6 = 0x5c000000;
      }
      uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(*(int *)pwVar3 + 0x6c),uVar6);
      iVar4 = iVar4 + 1;
      pwVar3 = pwVar3 + 4;
    } while (iVar4 < *(int *)(this + 0x427c));
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x0048e4fb) */
/* WARNING: Removing unreachable block (ram,0x0048e50b) */
/* WARNING: Removing unreachable block (ram,0x0048e513) */
/* WARNING: Removing unreachable block (ram,0x0048e51b) */
/* WARNING: Removing unreachable block (ram,0x0048e523) */
/* from: wr_ui_load.cpp
   addr: 0048E490 */

void __thiscall wrUI_LS_WINDOW::OnChildNotify(wrUI_LS_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  gsSTRINGS *this_00;
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  wrUI_LS_WINDOW *pwVar4;
  char local_104 [260];
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0x42544e43) {
    if ((*(undefined **)(param_1 + 8) == &DAT_0044454c) && (*(int *)(this + 0x6c) != -1)) {
      *(undefined4 *)(this + 0x4318) = *(undefined4 *)(this + *(int *)(this + 0x6c) * 0x108 + 0x7c);
      this_00 = gsStrings;
      iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_DELETE_CONFIRM_CAP);
      puVar2 = gsSTRINGS::GetStringById(this_00,iVar1);
      iVar1 = *(int *)uiSystem;
      puVar3 = gsSTRINGS::Printf(gsStrings,(char *)gsStrings,s_UI_DELETE_CONFIRM,
                                 this + *(int *)(this + 0x6c) * 0x108 + 0x84,1,0x44454c45,this,
                                 *(int *)(this + 8) + 0x18);
      (**(code **)(iVar1 + 0x14))(puVar2,puVar3);
    }
    if (*(int *)(param_1 + 4) != 0x464f4353) {
      uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
      return;
    }
    iVar1 = 0;
    if (0 < *(int *)(this + 0x427c)) {
      pwVar4 = this + 0x4280;
      while (*(int *)param_1 != *(int *)pwVar4) {
        iVar1 = iVar1 + 1;
        pwVar4 = pwVar4 + 4;
        if (*(int *)(this + 0x427c) <= iVar1) {
          return;
        }
      }
      if ((*(int *)(this + 0x74) + iVar1 < *(int *)(this + 0x78)) && (*(int *)(param_1 + 8) != 0)) {
        wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
                  ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
                   *(int *)(this + 0x74) + iVar1,1);
      }
    }
  }
  else if (iVar1 == 0x464f4353) {
    iVar1 = 0;
    if (0 < *(int *)(this + 0x427c)) {
      pwVar4 = this + 0x4280;
      do {
        if (*(int *)param_1 == *(int *)pwVar4) {
          if (*(int *)(this + 0x74) + iVar1 < *(int *)(this + 0x78)) {
            if (*(int *)(param_1 + 8) == 0) {
              return;
            }
            wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
                      ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
                       *(int *)(this + 0x74) + iVar1,1);
          }
          break;
        }
        iVar1 = iVar1 + 1;
        pwVar4 = pwVar4 + 4;
      } while (iVar1 < *(int *)(this + 0x427c));
    }
    if ((*(int *)(param_1 + 8) != 0) && (iVar1 = 0, 0 < *(int *)(this + 0x427c))) {
      pwVar4 = this + 0x4280;
      do {
        wrUI_LS_INFO::SetActive
                  (*(wrUI_LS_INFO **)pwVar4,
                   (uint)(iVar1 == *(int *)(this + 0x6c) - *(int *)(this + 0x74)));
        iVar1 = iVar1 + 1;
        pwVar4 = pwVar4 + 4;
      } while (iVar1 < *(int *)(this + 0x427c));
      return;
    }
  }
  else {
    if (iVar1 != 0x4d534742) {
      wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::OnChildNotify
                ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,param_1);
      return;
    }
    if (*(int *)(param_1 + 0xc) != 0x44454c45) {
      uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
      return;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      BuildSaveName(this,*(int *)(this + 0x4318),local_104);
      fioFILE_DISK::DeleteFile(local_104);
      RescanFileNames(this);
      return;
    }
  }
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048E700 */

void __thiscall wrUI_LS_WINDOW::ChangePicture(wrUI_LS_WINDOW *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char local_20c [248];
  pctPICTURE *ppStack_114;
  undefined4 uStack_10c;
  undefined4 local_108 [2];
  undefined2 local_100;
  
  local_108[0] = 0;
  local_100 = 0;
  if (param_1 != *(int *)(this + 0x4314)) {
    *(int *)(this + 0x4314) = param_1;
    *(uint *)(*(int *)(this + 0x4310) + 4) = *(uint *)(*(int *)(this + 0x4310) + 4) & 0xffffdfff;
    iVar3 = *(int *)(this + 0x4314);
    if (iVar3 == -1) {
      (**(code **)(*(int *)this + 0x68))();
      return;
    }
    if (-1 < iVar3) {
      iVar2 = _apCfgReadString((void **)0x0,s_Level,s_pathSAVEGAME,local_20c,0x104);
      if (iVar2 == 0) {
        do {
          cVar1 = (&s____saves_)[iVar2];
          local_20c[iVar2] = cVar1;
          iVar2 = iVar2 + 1;
        } while (cVar1 != '\0');
        uVar4 = 0xffffffff;
        pcVar6 = local_20c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar4 - 1;
      }
      else {
        uVar4 = 0xffffffff;
        pcVar6 = local_20c;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~uVar4;
        uVar5 = uVar4 - 1;
        if ((uVar5 == 0) || ((local_20c[uVar4 - 2] != '\\' && (local_20c[uVar4 - 2] != '/')))) {
          local_20c[uVar4 - 1] = '\\';
          uVar5 = uVar4;
        }
      }
      sprintf(local_20c + uVar5,s_save_04i_wrs,iVar3);
      iVar3 = gslGetHdrEx(local_20c,(gslHDR_EX *)local_108);
      if (iVar3 != 0) {
        (**(code **)(**(int **)(this + 0x430c) + 0xc))(0xffffffff);
        (**(code **)(**(int **)(this + 0x430c) + 0x18))(uStack_10c,0xffffffff);
        pctDestroy(ppStack_114);
        return;
      }
      *(uint *)(*(int *)(this + 0x4310) + 4) = *(uint *)(*(int *)(this + 0x4310) + 4) | 0x2000;
    }
  }
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048E850 */

void __thiscall wrUI_LS_WINDOW::BuildSaveName(wrUI_LS_WINDOW *this,int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = _apCfgReadString((void **)0x0,s_Level,s_pathSAVEGAME,param_2,0x104);
  if (iVar2 == 0) {
    pcVar3 = &s____saves_;
    do {
      cVar1 = *pcVar3;
      (param_2 + -0x5f3a88)[(int)pcVar3] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar4 - 1;
  }
  else {
    uVar4 = 0xffffffff;
    pcVar3 = param_2;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    uVar5 = uVar4 - 1;
    if ((uVar5 == 0) || ((param_2[uVar4 - 2] != '\\' && (param_2[uVar4 - 2] != '/')))) {
      param_2[uVar5] = '\\';
      uVar5 = uVar4;
    }
  }
  sprintf(param_2 + uVar5,s_save_04i_wrs,param_1);
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048E8F0 */

void __thiscall wrUI_LS_WINDOW::RescanFileNames(wrUI_LS_WINDOW *this)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uiAREA *this_00;
  int iVar4;
  int iVar5;
  size_t sVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  wrUI_LS_WINDOW *pwVar10;
  int iVar11;
  uint uVar12;
  wrUI_LS_WINDOW *pwVar13;
  char *pcVar14;
  wrUI_LS_WINDOW *pwVar15;
  wrUI_LS_WINDOW *pwStack_334;
  wrUI_LS_WINDOW *pwStack_32c;
  int iStack_328;
  ushort auStack_31c [3];
  char acStack_316 [262];
  pctPICTURE *local_210;
  uint uStack_20c;
  wchar_t local_208 [128];
  undefined4 auStack_108 [2];
  undefined2 uStack_100;
  
  local_210 = (pctPICTURE *)0x0;
  local_208[0] = L'\0';
  *(undefined4 *)(this + 0x78) = 0;
  iVar4 = (**(code **)(*(int *)this + 0x6c))();
  uVar12 = -(uint)(iVar4 != 0) & 2;
  if (uVar12 < 0x40) {
    do {
      iVar4 = _apCfgReadString((void **)0x0,s_Level,s_pathSAVEGAME,acStack_316 + 2,0x104);
      if (iVar4 == 0) {
        do {
          cVar3 = (&s____saves_)[iVar4];
          acStack_316[iVar4 + 2] = cVar3;
          iVar4 = iVar4 + 1;
        } while (cVar3 != '\0');
        uVar8 = 0xffffffff;
        pcVar14 = acStack_316 + 2;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        uVar9 = ~uVar8 - 1;
      }
      else {
        uVar8 = 0xffffffff;
        pcVar14 = acStack_316 + 2;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar14;
          pcVar14 = pcVar14 + 1;
        } while (cVar3 != '\0');
        uVar8 = ~uVar8;
        uVar9 = uVar8 - 1;
        if ((uVar9 == 0) || ((acStack_316[uVar8] != '\\' && (acStack_316[uVar8] != '/')))) {
          acStack_316[uVar8 + 1] = '\\';
          uVar9 = uVar8;
        }
      }
      sprintf(acStack_316 + uVar9 + 2,s_save_04i_wrs,uVar12);
      iVar4 = gslGetHdrEx(acStack_316 + 2,(gslHDR_EX *)&local_210);
      if (iVar4 != 0) {
        iVar4 = *(int *)(this + 0x78);
        iVar11 = 0;
        if (0 < iVar4) {
          pwVar10 = this + 0x80;
          do {
            if (*(uint *)pwVar10 < uStack_20c) break;
            iVar11 = iVar11 + 1;
            pwVar10 = pwVar10 + 0x108;
          } while (iVar11 < iVar4);
        }
        if (iVar11 < iVar4) {
          iVar5 = iVar4 - iVar11;
          pwVar10 = this + iVar4 * 0x108 + 0x7c;
          do {
            iVar5 = iVar5 + -1;
            pwVar13 = pwVar10 + -0x108;
            pwVar15 = pwVar10;
            for (iVar4 = 0x42; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pwVar15 = *(undefined4 *)pwVar13;
              pwVar13 = pwVar13 + 4;
              pwVar15 = pwVar15 + 4;
            }
            pwVar10 = pwVar10 + -0x108;
          } while (iVar5 != 0);
        }
        *(uint *)(this + iVar11 * 0x108 + 0x7c) = uVar12;
        *(uint *)(this + iVar11 * 0x108 + 0x80) = uStack_20c;
        wcsncpy((wchar_t *)(this + iVar11 * 0x108 + 0x84),local_208,0x80);
        *(undefined2 *)(this + iVar11 * 0x108 + 0x182) = 0;
        *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
        pctDestroy(local_210);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 0x40);
  }
  iVar4 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x427c) <= iVar4) {
    iVar4 = *(int *)(this + 0x427c);
  }
  iVar11 = 0;
  if (0 < iVar4) {
    pwVar10 = this + 0x4280;
    pwStack_334 = this + *(int *)(this + 0x74) * 0x108 + 0x7c;
    iStack_328 = iVar4;
    do {
      (**(code **)(**(int **)pwVar10 + 0x10))(1);
      this_00 = *(uiAREA **)pwVar10;
      fVar1 = *(float *)(this_00 + 0x60);
      fVar2 = *(float *)(this_00 + 0x58);
      sVar6 = wcslen((wchar_t *)(pwStack_334 + 6));
      if (-1 < (int)sVar6) {
        pwStack_32c = pwStack_334 + sVar6 * 2 + 8;
        do {
          pfVar7 = (float *)uiFONT::GetStringSizeW
                                      (*(uiFONT **)(this_00 + 0xfc),auStack_31c,
                                       (m2dV *)(pwStack_334 + 8),(int)(this_00 + 0x108));
          if (*pfVar7 <= fVar1 - fVar2) break;
          sVar6 = sVar6 - 1;
          *(undefined2 *)pwStack_32c = 0;
          pwStack_32c = pwStack_32c + -2;
        } while (-1 < (int)sVar6);
      }
      uiAREA::SetTextW(this_00,(ushort *)(pwStack_334 + 8),0x7fffffff);
      pwVar10 = pwVar10 + 4;
      pwStack_334 = pwStack_334 + 0x108;
      iStack_328 = iStack_328 + -1;
      iVar11 = iVar4;
    } while (iStack_328 != 0);
  }
  if (iVar11 < *(int *)(this + 0x427c)) {
    pwVar10 = this + iVar11 * 4 + 0x4280;
    do {
      uStack_100 = 0;
      auStack_108[0] = 0xffffffff;
      wrUI_LS_INFO::SetRecord(*(wrUI_LS_INFO **)pwVar10,(wrUI_LS_RECORD *)auStack_108);
      (**(code **)(**(int **)pwVar10 + 0x10))(0);
      iVar11 = iVar11 + 1;
      pwVar10 = pwVar10 + 4;
    } while (iVar11 < *(int *)(this + 0x427c));
  }
  wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
            ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
             *(int *)(this + 0x6c),1);
  if (*(wrUI_SCROLL_BAR **)(this + 0x4300) != (wrUI_SCROLL_BAR *)0x0) {
    iVar4 = *(int *)(this + 0x78) - *(int *)(this + 0x427c);
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    wrUI_SCROLL_BAR::SetWindow(*(wrUI_SCROLL_BAR **)(this + 0x4300),(wrUI_WINDOW *)this,iVar4,1);
    wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x4300),*(int *)(this + 0x74));
  }
  *(undefined4 *)(this + 0x4314) = 0xfffffffe;
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048EC10 */

void __thiscall wrUI_LS_WINDOW::SetDefaultPicture(wrUI_LS_WINDOW *this)

{
  *(uint *)(*(int *)(this + 0x4310) + 4) = *(uint *)(*(int *)(this + 0x4310) + 4) | 0x2000;
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048EC20 */

int __thiscall wrUI_SAVE_WINDOW::ProcessInit(wrUI_SAVE_WINDOW *this,void *param_1)

{
  uiELEMENT *puVar1;
  txmTEXTURE *ptVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  wrUI_SAVE_WINDOW *pwVar6;
  wrUI_SAVE_WINDOW *pwVar7;
  
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_new_save);
  *(uiELEMENT **)(this + 0x431c) = puVar1;
  ptVar2 = txmMANAGER::Add(txmManager,s_wr_ui_screenshot,0xc00,0xffffffff);
  *(txmTEXTURE **)(this + 0x430c) = ptVar2;
  (**(code **)(*(int *)ptVar2 + 0x10))(0x80,0x80,1,2);
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_picture);
  *(uiELEMENT **)(this + 0x4310) = puVar1;
  uiRENDER_INFO::SetTex((uiRENDER_INFO *)(puVar1 + 0x6c),*(txmTEXTURE **)(this + 0x430c));
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  puVar1 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 8),s_scrollbar);
  *(uiELEMENT **)(this + 0x4300) = puVar1;
  iVar3 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x427c) = 0;
  for (iVar5 = iVar3; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x10)) {
    if ((*(uint *)(iVar5 + 4) & 0x8000) != 0) {
      *(int *)(this + 0x427c) = *(int *)(this + 0x427c) + 1;
    }
  }
  *(undefined4 *)(this + 0x427c) = 0;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x10)) {
    if ((*(uint *)(iVar3 + 4) & 0x8000) != 0) {
      *(int *)(this + *(int *)(this + 0x427c) * 4 + 0x4280) = iVar3;
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffbff;
      *(int *)(this + 0x427c) = *(int *)(this + 0x427c) + 1;
    }
  }
  iVar3 = *(int *)(this + 0x4300);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffbff;
    *(uint *)(*(int *)(this + 0x4300) + 4) = *(uint *)(*(int *)(this + 0x4300) + 4) & 0xfffffffb;
    *(uint *)(*(int *)(this + 0x4300) + 4) = *(uint *)(*(int *)(this + 0x4300) + 4) & 0xfffffff7;
    iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x427c);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    wrUI_SCROLL_BAR::SetWindow(*(wrUI_SCROLL_BAR **)(this + 0x4300),(wrUI_WINDOW *)this,iVar3,1);
    wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x4300),0);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40c;
  iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x427c) <= iVar3) {
    iVar3 = *(int *)(this + 0x427c);
  }
  iVar5 = 0;
  if (0 < iVar3) {
    pwVar7 = this + 0x4280;
    pwVar6 = this + *(int *)(this + 0x74) * 0x108 + 0x7c;
    iVar4 = iVar3;
    do {
      (**(code **)(**(int **)pwVar7 + 0x10))(1);
      wrUI_LS_INFO::SetRecord(*(wrUI_LS_INFO **)pwVar7,(wrUI_LS_RECORD *)pwVar6);
      pwVar7 = pwVar7 + 4;
      pwVar6 = (wrUI_SAVE_WINDOW *)((wrUI_LS_RECORD *)pwVar6 + 0x108);
      iVar4 = iVar4 + -1;
      iVar5 = iVar3;
    } while (iVar4 != 0);
  }
  if (iVar5 < *(int *)(this + 0x427c)) {
    pwVar7 = this + iVar5 * 4 + 0x4280;
    do {
      wrUI_LS_INFO::SetRecord(*(wrUI_LS_INFO **)pwVar7,(wrUI_LS_RECORD *)&stack0xfffffee8);
      (**(code **)(**(int **)pwVar7 + 0x10))(0);
      iVar5 = iVar5 + 1;
      pwVar7 = pwVar7 + 4;
    } while (iVar5 < *(int *)(this + 0x427c));
  }
  wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
            ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
             *(int *)(this + 0x6c),1);
  iVar3 = 0;
  if (0 < *(int *)(this + 0x427c)) {
    pwVar7 = this + 0x4280;
    do {
      wrUI_LS_INFO::SetActive
                (*(wrUI_LS_INFO **)pwVar7,
                 (uint)(iVar3 == *(int *)(this + 0x6c) - *(int *)(this + 0x74)));
      iVar3 = iVar3 + 1;
      pwVar7 = pwVar7 + 4;
    } while (iVar3 < *(int *)(this + 0x427c));
  }
  *(undefined4 *)(this + 0x4314) = 0xfffffffe;
  *(undefined4 *)(this + 0x4318) = 0xffffffff;
  return 1;
}




/* from: wr_ui_load.cpp
   addr: 0048EE80 */

int __thiscall wrUI_SAVE_WINDOW::StartAppearing(wrUI_SAVE_WINDOW *this,int param_1)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  char **_Dest;
  int local_9c;
  gsSTRINGS *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  wchar_t local_80;
  wchar_t local_7e [63];
  
  if (param_1 != 0) {
    _gsGetCurTime((int *)&local_98,&local_9c,&local_84,&local_94,&local_8c,(int *)0x0);
    pwVar2 = (wchar_t *)
             gsSTRINGS::Printf(local_98,(char *)gsStrings,s_UI_SAVEDATEFMT,local_98,local_9c,
                               local_84,local_94,local_8c);
    wcscpy(&local_80,pwVar2);
    iVar3 = _uiGetLevelNameStrId((char *)&gsSceneFullName,&local_88,&local_90,1);
    if (iVar3 == 0) {
      _Dest = &apBuffer;
      wcscpy((wchar_t *)&apBuffer,local_7e);
    }
    else {
      if (local_90 != 1) {
        local_88 = local_90;
      }
      gsSTRINGS::GetStringById(gsStrings,local_88,(ushort *)&apBuffer,0x800);
      pwVar2 = wcschr((wchar_t *)&apBuffer,L':');
      if (pwVar2 == (wchar_t *)0x0) {
        _Dest = &apBuffer;
      }
      else {
        _Dest = (char **)(pwVar2 + 1);
      }
      wVar1 = *(wchar_t *)_Dest;
      while (wVar1 == L' ') {
        _Dest = (char **)((int)_Dest + 2);
        wVar1 = *(wchar_t *)_Dest;
      }
      wcscat((wchar_t *)_Dest,&local_80);
    }
    uiTEXT_INPUT::SetEditText(*(uiTEXT_INPUT **)(this + 0x431c),(ushort *)_Dest);
  }
  iVar3 = wrUI_LS_WINDOW::StartAppearing((wrUI_LS_WINDOW *)this,param_1);
  return iVar3;
}




/* from: wr_ui_load.cpp
   addr: 0048EFA0 */

int __thiscall wrUI_SAVE_WINDOW::ProcessUpdate(wrUI_SAVE_WINDOW *this,void *param_1)

{
  wchar_t *_Str2;
  int iVar1;
  int iVar2;
  wrUI_SAVE_WINDOW *pwVar3;
  ulong uVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x78)) {
    pwVar3 = this + 0x84;
    do {
      _Str2 = (wchar_t *)uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0x431c));
      iVar1 = wcscmp((wchar_t *)pwVar3,_Str2);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      pwVar3 = pwVar3 + 0x108;
    } while (iVar2 < *(int *)(this + 0x78));
  }
  iVar1 = *(int *)(this + 0x78);
  if (iVar2 == iVar1) {
    if (*(int *)(this + 0x6c) != -1) {
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
    iVar2 = 0;
    if (0 < *(int *)(this + 0x427c)) {
      pwVar3 = this + 0x4280;
      do {
        wrUI_LS_INFO::SetActive
                  (*(wrUI_LS_INFO **)pwVar3,
                   (uint)(iVar2 == *(int *)(this + 0x6c) - *(int *)(this + 0x74)));
        iVar2 = iVar2 + 1;
        pwVar3 = pwVar3 + 4;
      } while (iVar2 < *(int *)(this + 0x427c));
    }
    iVar2 = -1;
  }
  else {
    if (iVar2 != *(int *)(this + 0x6c)) {
      if ((iVar1 == 0) || (iVar2 == -1)) {
        *(undefined4 *)(this + 0x6c) = 0xffffffff;
      }
      else if (iVar2 < iVar1) {
        iVar1 = iVar2;
        if (iVar2 < 0) {
          iVar1 = 0;
        }
        *(int *)(this + 0x6c) = iVar1;
      }
      else {
        *(int *)(this + 0x6c) = iVar1 + -1;
      }
      wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::EnsureSelectedVisible
                ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this);
    }
    iVar1 = 0;
    if (0 < *(int *)(this + 0x427c)) {
      pwVar3 = this + 0x4280;
      do {
        if (iVar1 == *(int *)(this + 0x6c) - *(int *)(this + 0x74)) {
          uVar4 = 0xcf000000;
        }
        else {
          uVar4 = 0x5c000000;
        }
        uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(*(int *)pwVar3 + 0x6c),uVar4);
        iVar1 = iVar1 + 1;
        pwVar3 = pwVar3 + 4;
      } while (iVar1 < *(int *)(this + 0x427c));
    }
    iVar2 = *(int *)(this + iVar2 * 0x108 + 0x7c);
  }
  wrUI_LS_WINDOW::ChangePicture((wrUI_LS_WINDOW *)this,iVar2);
  iVar2 = wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::ProcessUpdate
                    ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,param_1);
  return iVar2;
}




/* from: wr_ui_load.cpp
   addr: 0048F0D0 */

void __thiscall wrUI_SAVE_WINDOW::OnChildNotify(wrUI_SAVE_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  char cVar1;
  gsSTRINGS *this_00;
  wchar_t *_Source;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  size_t _Count;
  undefined4 uVar9;
  undefined4 local_210;
  char local_20c [260];
  undefined4 local_108;
  undefined4 local_104;
  wchar_t local_100 [127];
  undefined2 local_2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 < 0x44424c44) {
    if (iVar2 == 0x44424c43) {
      if (*(int *)(param_1 + 8) == 0x494e464f) {
        SaveGame(this);
        return;
      }
    }
    else if (iVar2 == 0x494e50) {
      if (*(int *)(param_1 + 8) == 0x454e5452) {
        SaveGame(this);
        wrUI_LS_WINDOW::OnChildNotify((wrUI_LS_WINDOW *)this,param_1);
        return;
      }
    }
    else if ((iVar2 == 0x42544e43) && (*(int *)(param_1 + 8) == 0x53415645)) {
      SaveGame(this);
      return;
    }
LAB_0048f16d:
    wrUI_LS_WINDOW::OnChildNotify((wrUI_LS_WINDOW *)this,param_1);
    return;
  }
  if (iVar2 == 0x464f4353) {
    wrUI_LS_WINDOW::OnChildNotify((wrUI_LS_WINDOW *)this,param_1);
    if (((*(int *)(param_1 + 8) != 0) && (iVar2 = *(int *)(this + 0x6c), -1 < iVar2)) &&
       (iVar2 < *(int *)(this + 0x78))) {
      uiTEXT_INPUT::SetEditText
                (*(uiTEXT_INPUT **)(this + 0x431c),(ushort *)(this + iVar2 * 0x108 + 0x84));
    }
  }
  else {
    if ((iVar2 != 0x4d534742) || (*(int *)(param_1 + 0xc) != 0x53415645)) goto LAB_0048f16d;
    if (*(int *)(param_1 + 0x10) != 0) {
      local_108 = 0;
      local_100[0] = L'\0';
      time((time_t *)&local_210);
      local_108 = *(undefined4 *)(uiSystem + 0x168);
      _Count = 0x80;
      local_104 = local_210;
      _Source = (wchar_t *)uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0x431c));
      wcsncpy(local_100,_Source,_Count);
      uVar8 = *(undefined4 *)(this + 0x4318);
      local_2 = 0;
      iVar2 = _apCfgReadString((void **)0x0,s_Level,s_pathSAVEGAME,local_20c,0x104);
      if (iVar2 == 0) {
        do {
          cVar1 = (&s____saves_)[iVar2];
          local_20c[iVar2] = cVar1;
          iVar2 = iVar2 + 1;
        } while (cVar1 != '\0');
        uVar5 = 0xffffffff;
        pcVar7 = local_20c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar5 - 1;
      }
      else {
        uVar5 = 0xffffffff;
        pcVar7 = local_20c;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5;
        uVar6 = uVar5 - 1;
        if ((uVar6 == 0) || ((local_20c[uVar5 - 2] != '\\' && (local_20c[uVar5 - 2] != '/')))) {
          local_20c[uVar5 - 1] = '\\';
          uVar6 = uVar5;
        }
      }
      sprintf(local_20c + uVar6,s_save_04i_wrs,uVar8);
      gslSave(local_20c,(gslHDR_EX *)&local_108);
      this_00 = gsStrings;
      uVar9 = 1;
      uVar8 = 0x40400000;
      iVar2 = *(int *)uiSystem;
      iVar3 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_GAME_SAVED);
      puVar4 = gsSTRINGS::GetStringById(this_00,iVar3);
      (**(code **)(iVar2 + 0x20))(puVar4,uVar8,uVar9);
      *(undefined4 *)(param_1 + 4) = 0;
      (**(code **)(*(int *)uiSystem + 0x3c))();
      plrPLAYER::ClearZoom(plrPlayer);
      (**(code **)(*(int *)uiSystem + 0x38))(3,0);
      return;
    }
  }
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048F330 */

void __thiscall wrUI_SAVE_WINDOW::FindTabstop(wrUI_SAVE_WINDOW *this,uiTABSTOP_SEARCH *param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x431c);
    return;
  }
  uiELEMENT::FindTabstop((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048F360 */

void __thiscall wrUI_SAVE_WINDOW::SetDefaultPicture(wrUI_SAVE_WINDOW *this)

{
  (**(code **)(**(int **)(this + 0x430c) + 0xc))(0xffffffff);
  (**(code **)(**(int **)(this + 0x430c) + 0x18))(*(undefined4 *)(uiSystem + 0x168),0xffffffff);
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048F390 */

void __thiscall wrUI_SAVE_WINDOW::SaveGame(wrUI_SAVE_WINDOW *this)

{
  char cVar1;
  gsSTRINGS *pgVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  wrUI_SAVE_WINDOW *pwVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 local_210;
  char local_20c [260];
  undefined4 local_108;
  undefined4 local_104;
  wchar_t local_100 [127];
  undefined2 local_2;
  
  if (*(int *)(this + 0x6c) == -1) {
    pwVar3 = (wchar_t *)uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0x431c));
    sVar4 = wcslen(pwVar3);
    if (sVar4 != 0) {
      iVar6 = *(int *)(this + 0x78);
      *(undefined4 *)(this + 0x4318) = 2;
      do {
        iVar5 = 0;
        if (0 < iVar6) {
          pwVar9 = this + 0x7c;
          do {
            if (*(int *)pwVar9 == *(int *)(this + 0x4318)) break;
            iVar5 = iVar5 + 1;
            pwVar9 = pwVar9 + 0x108;
          } while (iVar5 < iVar6);
        }
      } while ((iVar5 != iVar6) &&
              (iVar5 = *(int *)(this + 0x4318), *(int *)(this + 0x4318) = iVar5 + 1,
              iVar5 + 1 < 0x40));
      pgVar2 = gsStrings;
      if (*(int *)(this + 0x4318) == 0x40) {
        iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_NO_FREE_SLOTS);
        puVar7 = gsSTRINGS::GetStringById(pgVar2,iVar6);
        pgVar2 = gsStrings;
        iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERROR);
        puVar8 = gsSTRINGS::GetStringById(pgVar2,iVar6);
        (**(code **)(*(int *)uiSystem + 0x14))(puVar8,puVar7,0,0,0,*(int *)(this + 8) + 0x18);
        return;
      }
      local_108 = 0;
      local_100[0] = L'\0';
      time((time_t *)&local_210);
      local_108 = *(undefined4 *)(uiSystem + 0x168);
      sVar4 = 0x80;
      local_104 = local_210;
      pwVar3 = (wchar_t *)uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0x431c));
      wcsncpy(local_100,pwVar3,sVar4);
      uVar13 = *(undefined4 *)(this + 0x4318);
      local_2 = 0;
      iVar6 = _apCfgReadString((void **)0x0,s_Level,s_pathSAVEGAME,local_20c,0x104);
      if (iVar6 == 0) {
        do {
          cVar1 = (&s____saves_)[iVar6];
          local_20c[iVar6] = cVar1;
          iVar6 = iVar6 + 1;
        } while (cVar1 != '\0');
        uVar10 = 0xffffffff;
        pcVar12 = local_20c;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar11 = ~uVar10 - 1;
      }
      else {
        uVar10 = 0xffffffff;
        pcVar12 = local_20c;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        uVar11 = uVar10 - 1;
        if ((uVar11 == 0) || ((local_20c[uVar10 - 2] != '\\' && (local_20c[uVar10 - 2] != '/')))) {
          local_20c[uVar10 - 1] = '\\';
          uVar11 = uVar10;
        }
      }
      sprintf(local_20c + uVar11,s_save_04i_wrs,uVar13);
      gslSave(local_20c,(gslHDR_EX *)&local_108);
      pgVar2 = gsStrings;
      uVar14 = 1;
      uVar13 = 0x40400000;
      iVar6 = *(int *)uiSystem;
      iVar5 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_GAME_SAVED);
      puVar7 = gsSTRINGS::GetStringById(pgVar2,iVar5);
      (**(code **)(iVar6 + 0x20))(puVar7,uVar13,uVar14);
      (**(code **)(*(int *)uiSystem + 0x3c))();
      plrPLAYER::ClearZoom(plrPlayer);
      (**(code **)(*(int *)uiSystem + 0x38))(3,0);
      return;
    }
  }
  else {
    *(undefined4 *)(this + 0x4318) = *(undefined4 *)(this + *(int *)(this + 0x6c) * 0x108 + 0x7c);
    pgVar2 = gsStrings;
    iVar6 = gsSTRINGS::GetStringId(gsStrings,s_UI_SAVE_CONFIRM_CAP);
    puVar7 = gsSTRINGS::GetStringById(pgVar2,iVar6);
    iVar6 = *(int *)uiSystem;
    puVar8 = gsSTRINGS::Printf(gsStrings,(char *)gsStrings,s_UI_SAVE_CONFIRM,
                               this + *(int *)(this + 0x6c) * 0x108 + 0x84,1,0x53415645,this,
                               *(int *)(this + 8) + 0x18);
    (**(code **)(iVar6 + 0x14))(puVar7,puVar8);
  }
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048F640 */

void __thiscall wrUI_SAVE_WINDOW::QuickSave(wrUI_SAVE_WINDOW *this,int param_1)

{
  char cVar1;
  gsSTRINGS *pgVar2;
  int iVar3;
  ushort *puVar4;
  wchar_t *_Source;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  size_t _Count;
  undefined4 uVar10;
  undefined4 local_210;
  char local_20c [260];
  undefined4 local_108;
  undefined4 local_104;
  wchar_t local_100 [127];
  undefined2 local_2;
  
  pgVar2 = gsStrings;
  if ((param_1 == 0) || (param_1 != 1)) {
    iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_QUICKSAVE);
    puVar4 = gsSTRINGS::GetStringById(pgVar2,iVar3);
    uiTEXT_INPUT::SetEditText(*(uiTEXT_INPUT **)(this + 0x431c),puVar4);
    *(undefined4 *)(this + 0x4318) = 0;
  }
  else {
    iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_AUTOSAVE);
    puVar4 = gsSTRINGS::GetStringById(pgVar2,iVar3);
    uiTEXT_INPUT::SetEditText(*(uiTEXT_INPUT **)(this + 0x431c),puVar4);
    *(undefined4 *)(this + 0x4318) = 1;
  }
  local_108 = 0;
  local_100[0] = L'\0';
  time((time_t *)&local_210);
  local_108 = *(undefined4 *)(uiSystem + 0x168);
  _Count = 0x80;
  local_104 = local_210;
  _Source = (wchar_t *)uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0x431c));
  wcsncpy(local_100,_Source,_Count);
  uVar9 = *(undefined4 *)(this + 0x4318);
  local_2 = 0;
  iVar3 = _apCfgReadString((void **)0x0,s_Level,s_pathSAVEGAME,local_20c,0x104);
  if (iVar3 == 0) {
    do {
      cVar1 = (&s____saves_)[iVar3];
      local_20c[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    uVar6 = 0xffffffff;
    pcVar8 = local_20c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar6 - 1;
  }
  else {
    uVar6 = 0xffffffff;
    pcVar8 = local_20c;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    uVar7 = uVar6 - 1;
    if ((uVar7 == 0) || ((local_20c[uVar6 - 2] != '\\' && (local_20c[uVar6 - 2] != '/')))) {
      local_20c[uVar6 - 1] = '\\';
      uVar7 = uVar6;
    }
  }
  sprintf(local_20c + uVar7,s_save_04i_wrs,uVar9);
  gslSave(local_20c,(gslHDR_EX *)&local_108);
  pgVar2 = gsStrings;
  uVar10 = 1;
  uVar9 = 0x40400000;
  iVar3 = *(int *)uiSystem;
  iVar5 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_GAME_SAVED);
  puVar4 = gsSTRINGS::GetStringById(pgVar2,iVar5);
  (**(code **)(iVar3 + 0x20))(puVar4,uVar9,uVar10);
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048F7E0 */

int __thiscall wrUI_LOAD_WINDOW::ProcessUpdate(wrUI_LOAD_WINDOW *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wrUI_SCROLL_BAR *this_00;
  uiELEMENT *puVar4;
  
  iVar2 = *(int *)(this + 0x6c);
  if ((iVar2 < 0) || (*(int *)(this + 0x78) <= iVar2)) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(this + iVar2 * 0x108 + 0x7c);
  }
  wrUI_LS_WINDOW::ChangePicture((wrUI_LS_WINDOW *)this,iVar2);
  if (*(int *)(this + 0x4308) == 0) {
    wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::ProcessScroll
              ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this);
    iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar2;
  }
  if ((*(int *)(this + 0x6c) == -1) && (iVar2 = *(int *)(this + 0x78), iVar2 != 0)) {
    iVar1 = *(int *)(this + 0x74);
    if (iVar1 == -1) {
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
    else if (iVar1 < iVar2) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      *(int *)(this + 0x6c) = iVar1;
    }
    else {
      *(int *)(this + 0x6c) = iVar2 + -1;
    }
  }
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == -1) goto LAB_0048f9a8;
  iVar1 = *(int *)(this + 0x74);
  if (iVar2 < iVar1) {
LAB_0048f86f:
    if (*(int *)(this + 0x78) - *(int *)(this + 0x427c) < iVar2) {
      iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x427c);
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (iVar1 != iVar2) {
      *(int *)(this + 0x74) = iVar2;
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
      wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::UpdateContext
                ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this);
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
      (**(code **)(*(int *)uiSystem + 0x84))(1);
      if (*(wrUI_SCROLL_BAR **)(this + 0x4300) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x4300),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0x4300);
    if (this_00 != (wrUI_SCROLL_BAR *)0x0) {
      iVar2 = *(int *)(this + 0x74);
LAB_0048f964:
      wrUI_SCROLL_BAR::SetPos(this_00,iVar2);
    }
  }
  else if (*(int *)(this + 0x427c) + iVar1 <= iVar2) {
    if (iVar2 < iVar1) goto LAB_0048f86f;
    iVar2 = iVar2 - *(int *)(this + 0x427c);
    iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x427c);
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (iVar1 != iVar2) {
      *(int *)(this + 0x74) = iVar2;
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
      wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::UpdateContext
                ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this);
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
      (**(code **)(*(int *)uiSystem + 0x84))(1);
      if (*(wrUI_SCROLL_BAR **)(this + 0x4300) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x4300),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0x4300);
    if (this_00 == (wrUI_SCROLL_BAR *)0x0) goto LAB_0048f969;
    iVar2 = *(int *)(this + 0x74);
    goto LAB_0048f964;
  }
LAB_0048f969:
  if (*(int *)(this + 0x6c) != -1) {
    iVar2 = wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::IsSelectionVisible
                      ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this);
    if (iVar2 == 0) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      puVar4 = (uiELEMENT *)0x0;
    }
    else {
      puVar4 = *(uiELEMENT **)(this + (*(int *)(this + 0x6c) - *(int *)(this + 0x74)) * 4 + 0x4280);
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,puVar4);
  }
LAB_0048f9a8:
  *(undefined4 *)(this + 0x4308) = 0;
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui_load.cpp
   addr: 0048F9E0 */

void __thiscall wrUI_LOAD_WINDOW::OnChildNotify(wrUI_LOAD_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  char local_104 [260];
  
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    if (*(int *)(param_1 + 8) != 0x4c4f4144) goto LAB_0048faa8;
    if (*(int *)(this + 0x6c) == -1) {
      return;
    }
    uVar6 = *(undefined4 *)(this + *(int *)(this + 0x6c) * 0x108 + 0x7c);
    *(undefined4 *)(this + 0x4318) = uVar6;
    iVar2 = _apCfgReadString((void **)0x0,s_Level,s_pathSAVEGAME,local_104,0x104);
    if (iVar2 == 0) {
      do {
        cVar1 = (&s____saves_)[iVar2];
        local_104[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      pcVar5 = local_104;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar3 - 1;
    }
    else {
      uVar3 = 0xffffffff;
      pcVar5 = local_104;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      uVar4 = uVar3 - 1;
      if ((uVar4 == 0) || ((local_104[uVar3 - 2] != '\\' && (local_104[uVar3 - 2] != '/')))) {
        local_104[uVar3 - 1] = '\\';
        uVar4 = uVar3;
      }
    }
    pcVar5 = local_104 + uVar4;
  }
  else {
    if ((*(int *)(param_1 + 4) != 0x44424c43) || (*(int *)(param_1 + 8) != 0x494e464f)) {
LAB_0048faa8:
      wrUI_LS_WINDOW::OnChildNotify((wrUI_LS_WINDOW *)this,param_1);
      return;
    }
    if (*(int *)(this + 0x6c) == -1) {
      return;
    }
    uVar6 = *(undefined4 *)(this + *(int *)(this + 0x6c) * 0x108 + 0x7c);
    *(undefined4 *)(this + 0x4318) = uVar6;
    iVar2 = _apCfgReadString((void **)0x0,s_Level,s_pathSAVEGAME,local_104,0x104);
    if (iVar2 == 0) {
      do {
        cVar1 = (&s____saves_)[iVar2];
        local_104[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      pcVar5 = local_104;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = local_104 + (~uVar3 - 1);
    }
    else {
      uVar3 = 0xffffffff;
      pcVar5 = local_104;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      uVar4 = uVar3 - 1;
      if ((uVar4 == 0) || ((local_104[uVar3 - 2] != '\\' && (local_104[uVar3 - 2] != '/')))) {
        local_104[uVar3 - 1] = '\\';
        uVar4 = uVar3;
      }
      pcVar5 = local_104 + uVar4;
    }
  }
  sprintf(pcVar5,s_save_04i_wrs,uVar6);
  iVar2 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_CANT_LOAD_GAME);
  wrUI_SYSTEM::StartLoadingAction((wrUI_SYSTEM *)uiSystem,2,1,local_104,iVar2);
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048FB80 */

int __thiscall wrUI_LOAD_WINDOW::LoadLastSave(wrUI_LOAD_WINDOW *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char local_104 [260];
  
  wrUI_LS_WINDOW::RescanFileNames((wrUI_LS_WINDOW *)this);
  if (*(int *)(this + 0x78) == 0) {
    return 0;
  }
  uVar2 = *(undefined4 *)(this + 0x7c);
  *(undefined4 *)(this + 0x4318) = uVar2;
  iVar3 = _apCfgReadString((void **)0x0,s_Level,s_pathSAVEGAME,local_104,0x104);
  if (iVar3 == 0) {
    do {
      cVar1 = (&s____saves_)[iVar3];
      local_104[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
    uVar4 = 0xffffffff;
    pcVar6 = local_104;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar5 = ~uVar4 - 1;
  }
  else {
    uVar4 = 0xffffffff;
    pcVar6 = local_104;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    uVar5 = uVar4 - 1;
    if ((uVar5 == 0) || ((local_104[uVar4 - 2] != '\\' && (local_104[uVar4 - 2] != '/')))) {
      local_104[uVar4 - 1] = '\\';
      uVar5 = uVar4;
    }
  }
  sprintf(local_104 + uVar5,s_save_04i_wrs,uVar2);
  iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_CANT_LOAD_GAME);
  wrUI_SYSTEM::StartLoadingAction((wrUI_SYSTEM *)uiSystem,2,1,local_104,iVar3);
  return 1;
}




/* from: wr_ui_load.cpp
   addr: 0048FC60 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::EnsureSelectedVisible
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 != -1) {
    iVar2 = *(int *)(this + 0x74);
    if ((iVar2 <= iVar1) || (iVar2 < 1)) {
      if (iVar1 < *(int *)(this + 0x427c) + iVar2) {
        return;
      }
      if (*(int *)(this + 0x78) - *(int *)(this + 0x427c) <= iVar2) {
        return;
      }
    }
    *(undefined4 *)(this + 0x4304) = 0x3ca3d70a;
    *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
  }
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048FCA0 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::UpdateContext
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this)

{
  float fVar1;
  float fVar2;
  uiAREA *puVar3;
  int iVar4;
  size_t sVar5;
  float *pfVar6;
  int iVar7;
  wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *pwVar8;
  wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *pwVar9;
  int local_128;
  wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *local_124;
  int local_11c;
  ushort auStack_110 [4];
  undefined4 local_108;
  wchar_t local_102;
  ushort local_100 [128];
  
  iVar4 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x427c) <= iVar4) {
    iVar4 = *(int *)(this + 0x427c);
  }
  local_128 = 0;
  if (0 < iVar4) {
    pwVar9 = this + 0x4280;
    local_124 = this + *(int *)(this + 0x74) * 0x108 + 0x7c;
    local_11c = iVar4;
    do {
      (**(code **)(**(int **)pwVar9 + 0x10))(1);
      puVar3 = *(uiAREA **)pwVar9;
      fVar1 = *(float *)(puVar3 + 0x60);
      fVar2 = *(float *)(puVar3 + 0x58);
      sVar5 = wcslen((wchar_t *)(local_124 + 6));
      if (-1 < (int)sVar5) {
        pwVar8 = local_124 + sVar5 * 2 + 8;
        do {
          pfVar6 = (float *)uiFONT::GetStringSizeW
                                      (*(uiFONT **)(puVar3 + 0xfc),auStack_110,
                                       (m2dV *)(local_124 + 8),(int)(puVar3 + 0x108));
          if (*pfVar6 <= fVar1 - fVar2) break;
          *(undefined2 *)pwVar8 = 0;
          sVar5 = sVar5 - 1;
          pwVar8 = pwVar8 + -2;
        } while (-1 < (int)sVar5);
      }
      uiAREA::SetTextW(puVar3,(ushort *)(local_124 + 8),0x7fffffff);
      pwVar9 = pwVar9 + 4;
      local_124 = local_124 + 0x108;
      local_11c = local_11c + -1;
      local_128 = iVar4;
    } while (local_11c != 0);
  }
  if (local_128 < *(int *)(this + 0x427c)) {
    pwVar9 = this + local_128 * 4 + 0x4280;
    do {
      puVar3 = *(uiAREA **)pwVar9;
      local_100[0] = 0;
      fVar1 = *(float *)(puVar3 + 0x60);
      fVar2 = *(float *)(puVar3 + 0x58);
      local_108 = 0xffffffff;
      sVar5 = wcslen(&local_102);
      while ((-1 < (int)sVar5 &&
             (pfVar6 = (float *)uiFONT::GetStringSizeW
                                          (*(uiFONT **)(puVar3 + 0xfc),auStack_110,(m2dV *)local_100
                                           ,(int)(puVar3 + 0x108)), fVar1 - fVar2 < *pfVar6))) {
        local_100[sVar5] = 0;
        sVar5 = sVar5 - 1;
      }
      uiAREA::SetTextW(puVar3,local_100,0x7fffffff);
      (**(code **)(**(int **)pwVar9 + 0x10))(0);
      local_128 = local_128 + 1;
      pwVar9 = pwVar9 + 4;
    } while (local_128 < *(int *)(this + 0x427c));
  }
  iVar4 = *(int *)(this + 0x78);
  iVar7 = *(int *)(this + 0x6c);
  if ((iVar4 != 0) && (iVar7 != -1)) {
    if (iVar4 <= iVar7) {
      *(int *)(this + 0x6c) = iVar4 + -1;
      return;
    }
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    *(int *)(this + 0x6c) = iVar7;
    return;
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return;
}




/* from: wr_ui_load.cpp
   addr: 0048FEA0 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::ProcessUpdate
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wrUI_SCROLL_BAR *this_00;
  uiELEMENT *puVar4;
  
  if (*(int *)(this + 0x4308) == 0) {
    ProcessScroll(this);
    iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar2;
  }
  if ((*(int *)(this + 0x6c) == -1) && (iVar2 = *(int *)(this + 0x78), iVar2 != 0)) {
    iVar1 = *(int *)(this + 0x74);
    if (iVar1 == -1) {
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
    else if (iVar1 < iVar2) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      *(int *)(this + 0x6c) = iVar1;
    }
    else {
      *(int *)(this + 0x6c) = iVar2 + -1;
    }
  }
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 == -1) goto LAB_00490047;
  iVar1 = *(int *)(this + 0x74);
  if (iVar2 < iVar1) {
LAB_0048ff0c:
    if (*(int *)(this + 0x78) - *(int *)(this + 0x427c) < iVar2) {
      iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x427c);
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (iVar1 != iVar2) {
      *(int *)(this + 0x74) = iVar2;
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
      UpdateContext(this);
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
      (**(code **)(*(int *)uiSystem + 0x84))(1);
      if (*(wrUI_SCROLL_BAR **)(this + 0x4300) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x4300),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0x4300);
    if (this_00 != (wrUI_SCROLL_BAR *)0x0) {
      iVar2 = *(int *)(this + 0x74);
LAB_00490001:
      wrUI_SCROLL_BAR::SetPos(this_00,iVar2);
    }
  }
  else if (*(int *)(this + 0x427c) + iVar1 <= iVar2) {
    if (iVar2 < iVar1) goto LAB_0048ff0c;
    iVar2 = iVar2 - *(int *)(this + 0x427c);
    iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x427c);
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (iVar1 != iVar2) {
      *(int *)(this + 0x74) = iVar2;
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
      UpdateContext(this);
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
      (**(code **)(*(int *)uiSystem + 0x84))(1);
      if (*(wrUI_SCROLL_BAR **)(this + 0x4300) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x4300),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0x4300);
    if (this_00 == (wrUI_SCROLL_BAR *)0x0) goto LAB_00490006;
    iVar2 = *(int *)(this + 0x74);
    goto LAB_00490001;
  }
LAB_00490006:
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 != -1) {
    iVar1 = *(int *)(this + 0x74);
    if ((iVar2 < iVar1) || (*(int *)(this + 0x427c) + iVar1 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      puVar4 = (uiELEMENT *)0x0;
    }
    else {
      puVar4 = *(uiELEMENT **)(this + (iVar2 - iVar1) * 4 + 0x4280);
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,puVar4);
  }
LAB_00490047:
  *(undefined4 *)(this + 0x4308) = 0;
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui_load.cpp
   addr: 00490080 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::OnChildNotify
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this,
          uiCHILD_NOTIFY *param_1)

{
  wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *pwVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0x464f4353) {
    uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x427c)) {
    pwVar1 = this + 0x4280;
    while (*(int *)param_1 != *(int *)pwVar1) {
      iVar2 = iVar2 + 1;
      pwVar1 = pwVar1 + 4;
      if (*(int *)(this + 0x427c) <= iVar2) {
        return;
      }
    }
    iVar2 = *(int *)(this + 0x74) + iVar2;
    if ((iVar2 < *(int *)(this + 0x78)) && (*(int *)(param_1 + 8) != 0)) {
      if ((*(int *)(this + 0x78) != 0) && (iVar2 != -1)) {
        if (iVar2 < 0) {
          iVar2 = 0;
        }
        *(int *)(this + 0x6c) = iVar2;
        return;
      }
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
  }
  return;
}




/* from: wr_ui_load.cpp
   addr: 00490100 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::IsSelectionVisible
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this)

{
  if ((*(int *)(this + 0x74) <= *(int *)(this + 0x6c)) &&
     (*(int *)(this + 0x6c) < *(int *)(this + 0x427c) + *(int *)(this + 0x74))) {
    return 1;
  }
  return 0;
}

