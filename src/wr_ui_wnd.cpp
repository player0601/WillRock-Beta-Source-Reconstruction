
/* from: wr_ui_wnd.cpp
   addr: 00494C40 */

void __thiscall wrUI_WINDOW::Init(wrUI_WINDOW *this,objOBJ *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uiELEMENT::Init((uiELEMENT *)this,param_1);
  iVar3 = *(int *)(this + 0x14);
  if ((iVar3 != 0) && (iVar4 = iVar3, *(int *)(iVar3 + 0x10) != 0)) {
    do {
      if (iVar3 == 0) {
LAB_00494cd9:
        iVar3 = *(int *)(iVar3 + 0x10);
      }
      else {
        iVar1 = *(int *)(iVar3 + 0x10);
        iVar2 = iVar3;
        do {
          if ((*(float *)(iVar2 + 0x5c) < *(float *)(iVar1 + 0x5c)) ||
             (*(float *)(iVar2 + 0x5c) == *(float *)(iVar1 + 0x5c))) break;
          iVar2 = *(int *)(iVar2 + 0xc);
        } while (iVar2 != 0);
        if (iVar2 == iVar3) goto LAB_00494cd9;
        if (*(int *)(iVar1 + 0x10) != 0) {
          *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc) = *(undefined4 *)(iVar1 + 0xc);
        }
        *(undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10) = *(undefined4 *)(iVar1 + 0x10);
        *(int *)(iVar1 + 0xc) = iVar2;
        if (iVar2 == 0) {
          *(int *)(iVar1 + 0x10) = iVar4;
          iVar4 = iVar1;
        }
        else {
          *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
          *(int *)(iVar2 + 0x10) = iVar1;
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          *(int *)(*(int *)(iVar1 + 0x10) + 0xc) = iVar1;
        }
      }
    } while (*(int *)(iVar3 + 0x10) != 0);
    *(int *)(this + 0x14) = iVar4;
  }
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00494CF0 */

wrUI_SCROLL_BAR * __thiscall wrUI_SCROLL_BAR::wrUI_SCROLL_BAR(wrUI_SCROLL_BAR *this)

{
  uiELEMENT::uiELEMENT((uiELEMENT *)this);
  uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x14c) = 1;
  *(undefined4 *)(this + 0x154) = 0xffffffff;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_wnd.cpp
   addr: 00494D90 */

void __thiscall wrUI_SCROLL_BAR::Init(wrUI_SCROLL_BAR *this,objOBJ *param_1)

{
  uiRENDER_INFO *this_00;
  char *pcVar1;
  float fVar2;
  psSHEET *this_01;
  float fVar3;
  int iVar4;
  uiRENDER_ELEM *puVar5;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  char local_40 [64];
  
  local_5c = DAT_00963758;
  local_54 = DAT_00963758;
  local_4c = DAT_00963758;
  local_44 = DAT_00963758;
  local_60 = _m2dVZero;
  local_58 = _m2dVZero;
  local_50 = _m2dVZero;
  local_48 = _m2dVZero;
  uiSCROLL::Init((uiSCROLL *)this,param_1);
  this_01 = *(psSHEET **)(param_1 + 0xf0);
  *(undefined4 *)(this + 0x15c) = 0;
  if (this_01 != (psSHEET *)0x0) {
    iVar4 = psSHEET::GetStr(this_01,s_UI_PROP,s_code,local_40,0x40);
    if (iVar4 != 0) {
      iVar4 = 0;
      do {
        pcVar1 = local_40 + iVar4;
        if (*pcVar1 == '\0') break;
        iVar4 = iVar4 + 1;
        *(int *)(this + 0x15c) = *(int *)(this + 0x15c) * 0x100 + (int)*pcVar1;
      } while (iVar4 < 4);
    }
  }
  this_00 = (uiRENDER_INFO *)(this + 0x6c);
  puVar5 = uiRENDER_INFO::FindElement(this_00,s_sld_box);
  *(uiRENDER_ELEM **)(this + 0x130) = puVar5;
  puVar5 = uiRENDER_INFO::FindElement(this_00,s_slider);
  *(uiRENDER_ELEM **)(this + 300) = puVar5;
  puVar5 = uiRENDER_INFO::FindElement(this_00,s_sld_area);
  *(uiRENDER_ELEM **)(this + 0x134) = puVar5;
  uiRENDER_INFO::SetAlpha(this_00,(float)*(byte *)(*(int *)(this + 0x130) + 0x8f));
  if (*(int *)(this + 0x134) != 0) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*(int *)(this + 0x134) + 0x4c + iVar4) =
           *(undefined4 *)(*(int *)(this + 0x130) + 0x4c + iVar4);
      *(undefined4 *)(iVar4 + 0x50 + *(int *)(this + 0x134)) =
           *(undefined4 *)(iVar4 + 0x50 + *(int *)(this + 0x130));
      iVar4 = iVar4 + 0x10;
    } while (iVar4 < 0x40);
  }
  uiRENDER_ELEM::CalcBBox(*(uiRENDER_ELEM **)(this + 300),(uiBOX *)&local_60);
  *(float *)(this + 0x138) = local_60 + local_58;
  *(float *)(this + 0x13c) = local_5c + local_54;
  *(float *)(this + 0x138) = *(float *)(this + 0x138) * ___real_3f000000;
  *(float *)(this + 0x13c) = *(float *)(this + 0x13c) * ___real_3f000000;
  iVar4 = *(int *)(this + 0x134);
  if (iVar4 != 0) {
    if (((byte)this[0x128] & 1) == 0) {
      *(float *)(iVar4 + 0x70) = *(float *)(this + 0x13c) - *(float *)(this + 0x148);
      *(float *)(*(int *)(this + 0x134) + 0x80) =
           *(float *)(this + 0x13c) - *(float *)(this + 0x148);
    }
    else {
      *(float *)(iVar4 + 0x6c) = *(float *)(this + 0x138) - *(float *)(this + 0x148);
      *(float *)(*(int *)(this + 0x134) + 0x5c) =
           *(float *)(this + 0x138) - *(float *)(this + 0x148);
    }
  }
  uiRENDER_ELEM::CalcBBox(*(uiRENDER_ELEM **)(this + 0x130),(uiBOX *)&local_50);
  if (((byte)this[0x128] & 1) == 0) {
    fVar3 = (local_54 - local_5c) * ___real_3f000000;
    *(float *)(this + 0x148) = fVar3;
    *(float *)(this + 0x144) = local_4c + fVar3;
    fVar2 = local_44;
  }
  else {
    fVar3 = (local_58 - local_60) * ___real_3f000000;
    *(float *)(this + 0x148) = fVar3;
    *(float *)(this + 0x144) = local_50 + fVar3;
    fVar2 = local_48;
  }
  *(undefined4 *)(this + 0x14c) = 1;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0xffffffff;
  *(float *)(this + 0x140) = fVar2 - fVar3;
  uiRENDER_INFO::SetColorText(this_00,0x5c000000);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x406;
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495010 */

int __thiscall wrUI_SCROLL_BAR::GetPos(wrUI_SCROLL_BAR *this)

{
  int iVar1;
  
  iVar1 = ftol();
  return iVar1;
}




/* from: wr_ui_wnd.cpp
   addr: 00495050 */

void __thiscall wrUI_SCROLL_BAR::DoScroll(wrUI_SCROLL_BAR *this,int param_1)

{
  m2dV *pmVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(this + 0x128) & 1) == 0) {
    fVar2 = *(float *)(this + 0x13c);
  }
  else {
    fVar2 = *(float *)(this + 0x138);
  }
  fVar2 = fVar2 + (float)(*(int *)(this + 0x150) * param_1);
  if (fVar2 <= *(float *)(this + 0x140)) {
    if (fVar2 < *(float *)(this + 0x144)) {
      fVar2 = *(float *)(this + 0x144);
    }
  }
  else {
    fVar2 = *(float *)(this + 0x140);
  }
  if ((*(uint *)(this + 0x128) & 1) == 0) {
    *(float *)(this + 0x13c) = fVar2;
  }
  else {
    *(float *)(this + 0x138) = fVar2;
  }
  pmVar1 = (m2dV *)(this + 0x138);
  uiRENDER_ELEM::MoveTo(*(uiRENDER_ELEM **)(this + 300),pmVar1);
  iVar3 = *(int *)(this + 0x134);
  if (iVar3 != 0) {
    if (((byte)this[0x128] & 1) == 0) {
      *(float *)(iVar3 + 0x70) = *(float *)(this + 0x13c) - *(float *)(this + 0x148);
      *(float *)(*(int *)(this + 0x134) + 0x80) =
           *(float *)(this + 0x13c) - *(float *)(this + 0x148);
    }
    else {
      *(float *)(iVar3 + 0x6c) = *(float *)pmVar1 - *(float *)(this + 0x148);
      *(float *)(*(int *)(this + 0x134) + 0x5c) = *(float *)pmVar1 - *(float *)(this + 0x148);
    }
  }
  if (*(int *)(this + 0x158) != 0) {
    iVar3 = *(int *)this;
    uVar4 = ftol();
    (**(code **)(iVar3 + 100))(uVar4);
  }
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495180 */

int __thiscall wrUI_SCROLL_BAR::OnMouseMove(wrUI_SCROLL_BAR *this,uiINPUT_INFO *param_1)

{
  m2dV *pmVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(wrUI_SCROLL_BAR **)(uiSystem + 8) == this) {
    if ((*(uint *)(this + 0x128) & 1) == 0) {
      fVar2 = *(float *)(param_1 + 8);
    }
    else {
      fVar2 = *(float *)(param_1 + 4);
    }
    if (fVar2 <= *(float *)(this + 0x140)) {
      if (fVar2 < *(float *)(this + 0x144)) {
        fVar2 = *(float *)(this + 0x144);
      }
    }
    else {
      fVar2 = *(float *)(this + 0x140);
    }
    if ((*(uint *)(this + 0x128) & 1) == 0) {
      *(float *)(this + 0x13c) = fVar2;
    }
    else {
      *(float *)(this + 0x138) = fVar2;
    }
    pmVar1 = (m2dV *)(this + 0x138);
    uiRENDER_ELEM::MoveTo(*(uiRENDER_ELEM **)(this + 300),pmVar1);
    iVar4 = *(int *)(this + 0x134);
    if (iVar4 != 0) {
      if (((byte)this[0x128] & 1) == 0) {
        *(float *)(iVar4 + 0x70) = *(float *)(this + 0x13c) - *(float *)(this + 0x148);
        *(float *)(*(int *)(this + 0x134) + 0x80) =
             *(float *)(this + 0x13c) - *(float *)(this + 0x148);
      }
      else {
        *(float *)(iVar4 + 0x6c) = *(float *)pmVar1 - *(float *)(this + 0x148);
        *(float *)(*(int *)(this + 0x134) + 0x5c) = *(float *)pmVar1 - *(float *)(this + 0x148);
      }
    }
    if (*(int *)(this + 0x158) != 0) {
      iVar4 = *(int *)this;
      uVar3 = ftol();
      (**(code **)(iVar4 + 100))(uVar3);
    }
  }
  iVar4 = uiELEMENT::OnMouseMove((uiELEMENT *)this,param_1);
  return iVar4;
}




/* from: wr_ui_wnd.cpp
   addr: 004952C0 */

int __thiscall wrUI_SCROLL_BAR::OnMouseButton(wrUI_SCROLL_BAR *this,uiINPUT_INFO *param_1)

{
  if (((byte)this[0x128] & 8) == 0) {
    if (*(int *)param_1 == 2) {
      *(wrUI_SCROLL_BAR **)(uiSystem + 8) = this;
      (**(code **)(*(int *)this + 0x4c))(param_1);
      return 0;
    }
    if (*(wrUI_SCROLL_BAR **)(uiSystem + 8) == this) {
      *(undefined4 *)(uiSystem + 8) = 0;
    }
  }
  return 1;
}




/* from: wr_ui_wnd.cpp
   addr: 00495300 */

int __thiscall wrUI_SCROLL_BAR::OnKbdFocus(wrUI_SCROLL_BAR *this,uiELEMENT *param_1)

{
  if (param_1 == (uiELEMENT *)this) {
    if (((byte)this[0x128] & 8) == 0) {
      uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),0xcf000000);
      return 1;
    }
  }
  else {
    uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(this + 0x6c),0x5c000000);
    if (*(wrUI_SCROLL_BAR **)(uiSystem + 8) == this) {
      *(undefined4 *)(uiSystem + 8) = 0;
    }
  }
  return 1;
}




/* from: wr_ui_wnd.cpp
   addr: 00495380 */

void __thiscall
wrUI_SCROLL_BAR::SetWindow(wrUI_SCROLL_BAR *this,wrUI_WINDOW *param_1,int param_2,int param_3)

{
  *(wrUI_WINDOW **)(this + 0x158) = param_1;
  *(int *)(this + 0x150) = param_3;
  *(int *)(this + 0x14c) = param_2 + 1;
  if (param_2 + 1 < 2) {
    *(uint *)(this + 0x128) = *(uint *)(this + 0x128) | 8;
    *(uint *)(*(int *)(this + 300) + 0x40) = *(uint *)(*(int *)(this + 300) + 0x40) | 8;
    return;
  }
  *(uint *)(this + 0x128) = *(uint *)(this + 0x128) & 0xfffffff7;
  *(uint *)(*(int *)(this + 300) + 0x40) = *(uint *)(*(int *)(this + 300) + 0x40) & 0xfffffff7;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_wnd.cpp
   addr: 004953E0 */

void __thiscall wrUI_SCROLL_BAR::SetPos(wrUI_SCROLL_BAR *this,int param_1)

{
  m2dV *pmVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar4 = *(uint *)(this + 0x128);
  if (((uVar4 & 8) == 0) && (iVar5 = *(int *)(this + 0x14c), 1 < iVar5)) {
    fVar2 = *(float *)(this + 0x140);
    fVar3 = *(float *)(this + 0x144);
    iVar6 = ftol();
    if (iVar6 != param_1) {
      fVar2 = ((float)param_1 * (fVar2 - fVar3)) / (float)iVar5 + *(float *)(this + 0x144) +
              (((fVar2 - fVar3) / (float)iVar5) * ___real_3f7f7cee * (float)param_1) /
              (float)(iVar5 + -1) + ___real_3a83126f;
      if (fVar2 <= *(float *)(this + 0x140)) {
        if (fVar2 < *(float *)(this + 0x144)) {
          fVar2 = *(float *)(this + 0x144);
        }
      }
      else {
        fVar2 = *(float *)(this + 0x140);
      }
      if ((uVar4 & 1) == 0) {
        *(float *)(this + 0x13c) = fVar2;
      }
      else {
        *(float *)(this + 0x138) = fVar2;
      }
      pmVar1 = (m2dV *)(this + 0x138);
      uiRENDER_ELEM::MoveTo(*(uiRENDER_ELEM **)(this + 300),pmVar1);
      iVar5 = *(int *)(this + 0x134);
      if (iVar5 != 0) {
        if (((byte)this[0x128] & 1) == 0) {
          *(float *)(iVar5 + 0x70) = *(float *)(this + 0x13c) - *(float *)(this + 0x148);
          *(float *)(*(int *)(this + 0x134) + 0x80) =
               *(float *)(this + 0x13c) - *(float *)(this + 0x148);
        }
        else {
          *(float *)(iVar5 + 0x6c) = *(float *)pmVar1 - *(float *)(this + 0x148);
          *(float *)(*(int *)(this + 0x134) + 0x5c) = *(float *)pmVar1 - *(float *)(this + 0x148);
        }
      }
      if (*(int *)(this + 0x158) != 0) {
        iVar5 = *(int *)this;
        uVar7 = ftol();
        (**(code **)(iVar5 + 100))(uVar7);
      }
    }
  }
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495580 */

void __thiscall wrUI_SCROLL_BAR::NotifyWindow(wrUI_SCROLL_BAR *this,int param_1)

{
  if ((*(int **)(this + 0x158) != (int *)0x0) && (param_1 != *(int *)(this + 0x154))) {
    *(int *)(this + 0x154) = param_1;
    (**(code **)(**(int **)(this + 0x158) + 0x60))(this,param_1);
  }
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 004955B0 */

wrUI_MSGBOX_WINDOW * __thiscall wrUI_MSGBOX_WINDOW::wrUI_MSGBOX_WINDOW(wrUI_MSGBOX_WINDOW *this)

{
  uiELEMENT::uiELEMENT((uiELEMENT *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x78] = (wrUI_MSGBOX_WINDOW)0x0;
  return this;
}




/* from: wr_ui_wnd.cpp
   addr: 004955D0 */

uiBUTTON * __thiscall
wrUI_MSGBOX_WINDOW::GetButton(wrUI_MSGBOX_WINDOW *this,int param_1,int param_2)

{
  uiELEMENT *puVar1;
  char local_20 [32];
  
  sprintf(local_20,s_msgbox_btn_02i,param_1);
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
  return (uiBUTTON *)puVar1;
}




/* from: wr_ui_wnd.cpp
   addr: 00495610 */

int __thiscall wrUI_MSGBOX_WINDOW::OnKeyboard(wrUI_MSGBOX_WINDOW *this,uiINPUT_INFO *param_1)

{
  uiELEMENT *puVar1;
  int iVar2;
  char local_20 [32];
  
  if (((*(int *)param_1 == 6) && (*(int *)(this + 0x70) == 0)) && (*(int *)(param_1 + 0xc) == 7)) {
    sprintf(local_20,s_msgbox_btn_02i,1);
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
    (**(code **)(*(int *)puVar1 + 100))();
  }
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar2;
}




/* from: wr_ui_wnd.cpp
   addr: 00495670 */

void __thiscall wrUI_MSGBOX_WINDOW::OnChildNotify(wrUI_MSGBOX_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  int iVar3;
  wrUI_MSGBOX_WINDOW *local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  char local_20 [32];
  
  local_34 = (wrUI_MSGBOX_WINDOW *)0x0;
  local_30 = 0;
  local_2c = 0;
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    if (*(int *)(this + 0x74) != 0) {
      local_28 = *(undefined4 *)(this + 0x6c);
      local_30 = 0x4d534742;
      local_34 = this;
      sprintf(local_20,s_msgbox_btn_02i,0);
      puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
      if (*(uiELEMENT **)param_1 == puVar2) {
        local_24 = 1;
        iVar1 = local_24;
      }
      else {
        sprintf(local_20,s_msgbox_btn_02i,1);
        puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
        if (*(uiELEMENT **)param_1 == puVar2) {
          local_24 = 2;
          iVar1 = local_24;
        }
        else {
          sprintf(local_20,s_msgbox_btn_02i,2);
          puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
          if (*(uiELEMENT **)param_1 == puVar2) {
            local_24 = 0;
            iVar1 = local_24;
          }
          else {
            iVar3 = 3;
            do {
              sprintf(local_20,s_msgbox_btn_02i,iVar3);
              puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
              iVar1 = local_24;
              if ((puVar2 == (uiELEMENT *)0x0) || (iVar1 = iVar3, *(uiELEMENT **)param_1 == puVar2))
              break;
              iVar3 = iVar3 + 1;
              iVar1 = local_24;
            } while (iVar3 < 99);
          }
        }
      }
      local_24 = iVar1;
      (**(code **)(**(int **)(this + 0x74) + 0x5c))(&local_34);
      if (local_30 == 0) {
        return;
      }
    }
    if (this[0x78] != (wrUI_MSGBOX_WINDOW)0x0) {
      (**(code **)(*(int *)uiSystem + 0x10))(this + 0x78,0);
    }
  }
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 004957B0 */

void __thiscall wrUI_MSGBOX_WINDOW::SetButtonsMask(wrUI_MSGBOX_WINDOW *this,int param_1)

{
  uiELEMENT *this_00;
  int iVar1;
  char local_20 [32];
  
  iVar1 = 0;
  do {
    sprintf(local_20,s_msgbox_btn_02i,iVar1);
    this_00 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
    if (this_00 == (uiELEMENT *)0x0) {
      return;
    }
    if ((param_1 & 1 << ((byte)iVar1 & 0x1f)) == 0) {
      uiAREA::SetTextId((uiAREA *)this_00,1);
      (**(code **)(*(int *)this_00 + 0x10))(0);
    }
    else {
      (**(code **)(*(int *)this_00 + 0x10))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495820 */

int __thiscall wrUI_MSGBOX_WINDOW::StartAppearing(wrUI_MSGBOX_WINDOW *this,int param_1)

{
  uiAREA *this_00;
  uiBUTTON *this_01;
  uiELEMENT *puVar1;
  int iVar2;
  char *pcVar3;
  char local_20 [32];
  
  if (param_1 != 0) {
    iVar2 = *(int *)(this + 0x70);
    *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
    if (iVar2 == 0) {
      iVar2 = 0;
      do {
        sprintf(local_20,s_msgbox_btn_02i,iVar2);
        puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
        if (puVar1 == (uiELEMENT *)0x0) break;
        if ((1 << ((byte)iVar2 & 0x1f) & 2U) == 0) {
          uiAREA::SetTextId((uiAREA *)puVar1,1);
          (**(code **)(*(int *)puVar1 + 0x10))(0);
        }
        else {
          (**(code **)(*(int *)puVar1 + 0x10))();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x20);
      sprintf(local_20,s_msgbox_btn_02i,1);
      this_00 = (uiAREA *)uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
      pcVar3 = s_UI_OK;
    }
    else if (iVar2 == 1) {
      iVar2 = 0;
      do {
        sprintf(local_20,s_msgbox_btn_02i,iVar2);
        puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
        if (puVar1 == (uiELEMENT *)0x0) break;
        if ((1 << ((byte)iVar2 & 0x1f) & 5U) == 0) {
          uiAREA::SetTextId((uiAREA *)puVar1,1);
          (**(code **)(*(int *)puVar1 + 0x10))(0);
        }
        else {
          (**(code **)(*(int *)puVar1 + 0x10))();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x20);
      sprintf(local_20,s_msgbox_btn_02i,0);
      puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
      iVar2 = gsSTRINGS::GetStringId(gsStrings,s_UI_YES);
      uiAREA::SetTextId((uiAREA *)puVar1,iVar2);
      sprintf(local_20,s_msgbox_btn_02i,2);
      this_00 = (uiAREA *)uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
      pcVar3 = s_UI_NO;
    }
    else if (iVar2 == 2) {
      iVar2 = 0;
      do {
        this_01 = GetButton(this,iVar2,1);
        if (this_01 == (uiBUTTON *)0x0) break;
        if ((1 << ((byte)iVar2 & 0x1f) & 5U) == 0) {
          uiAREA::SetTextId((uiAREA *)this_01,1);
          (**(code **)(*(int *)this_01 + 0x10))(0);
        }
        else {
          (**(code **)(*(int *)this_01 + 0x10))();
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x20);
      sprintf(local_20,s_msgbox_btn_02i,0);
      puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
      iVar2 = gsSTRINGS::GetStringId(gsStrings,s_UI_OK);
      uiAREA::SetTextId((uiAREA *)puVar1,iVar2);
      sprintf(local_20,s_msgbox_btn_02i,2);
      this_00 = (uiAREA *)uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
      pcVar3 = s_UI_CANCEL;
    }
    else {
      SetButtonsMask(this,2);
      sprintf(local_20,s_msgbox_btn_02i,1);
      this_00 = (uiAREA *)uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
      pcVar3 = s_UI_BACK;
    }
    iVar2 = gsSTRINGS::GetStringId(gsStrings,pcVar3);
    uiAREA::SetTextId(this_00,iVar2);
  }
  iVar2 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar2;
}




/* from: wr_ui_wnd.cpp
   addr: 00495A80 */

void __thiscall
wrUI_MSGBOX_WINDOW::Initialize
          (wrUI_MSGBOX_WINDOW *this,uiELEMENT *param_1,int param_2,int param_3,char *param_4)

{
  *(int *)(this + 0x6c) = param_3;
  *(int *)(this + 0x70) = param_2;
  *(uiELEMENT **)(this + 0x74) = param_1;
  if (param_4 != (char *)0x0) {
    strncpy((char *)(this + 0x78),param_4,0x40);
    this[0xb7] = (wrUI_MSGBOX_WINDOW)0x0;
    return;
  }
  this[0x78] = (wrUI_MSGBOX_WINDOW)0x0;
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495AD0 */

void __thiscall wrUI_MSGBOX_WINDOW::SetCaptionText(wrUI_MSGBOX_WINDOW *this,ushort *param_1)

{
  uiELEMENT *this_00;
  
  this_00 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_msgbox_head);
  uiAREA::SetTextW((uiAREA *)this_00,param_1,0x7fffffff);
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495AF0 */

void __thiscall wrUI_MSGBOX_WINDOW::SetMessageText(wrUI_MSGBOX_WINDOW *this,ushort *param_1)

{
  uiELEMENT *puVar1;
  wchar_t *pwVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *_Str;
  int iVar5;
  int local_38;
  ushort *local_2c;
  int local_28;
  int local_24;
  char local_20 [32];
  
  local_2c = (ushort *)0x0;
  local_24 = 0;
  local_28 = 0;
  arrVector<unsigned_short>::Resize((arrVector<unsigned_short> *)&local_2c,0);
  if (local_24 < 0x100) {
    if (0x100 < local_28) {
      arrVector<unsigned_short>::Resize((arrVector<unsigned_short> *)&local_2c,0x100);
    }
    local_2c = (ushort *)apRealloc(local_2c,0x200);
    local_24 = 0x100;
  }
  local_38 = 0;
  _Str = (wchar_t *)param_1;
  while( true ) {
    sprintf(local_20,s_msgbox_line_02i,local_38);
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
    if (puVar1 == (uiELEMENT *)0x0) break;
    pwVar2 = wcschr(_Str,L'\n');
    if (pwVar2 == (wchar_t *)0x0) {
      sVar3 = wcslen(_Str);
      pwVar2 = _Str + sVar3;
    }
    arrVector<unsigned_short>::Resize((arrVector<unsigned_short> *)&local_2c,0);
    iVar5 = (int)pwVar2 - (int)_Str >> 1;
    iVar4 = iVar5 + 1;
    if (local_24 < iVar4) {
      if (iVar4 < local_28) {
        arrVector<unsigned_short>::Resize((arrVector<unsigned_short> *)&local_2c,iVar4);
      }
      local_2c = (ushort *)apRealloc(local_2c,iVar4 * 2);
      local_24 = iVar4;
    }
    if (iVar5 != 0) {
      iVar4 = local_28 + iVar5;
      if (local_24 < iVar4) {
        if (iVar4 < local_24 * 2) {
          iVar4 = local_24 * 2;
        }
        if (local_24 < iVar4) {
          arrVector<unsigned_short>::Realloc((arrVector<unsigned_short> *)&local_2c,iVar4);
        }
      }
      memmove(local_2c + iVar5,local_2c,local_28 * 2);
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          if ((wchar_t *)(local_2c + iVar4) != (wchar_t *)0x0) {
            local_2c[iVar4] = *_Str;
          }
          _Str = _Str + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      local_28 = local_28 + iVar5;
    }
    param_1 = (ushort *)0x0;
    arrVector<unsigned_short>::Insert
              ((arrVector<unsigned_short> *)&local_2c,local_28,(ushort *)&param_1,1);
    uiAREA::SetTextW((uiAREA *)puVar1,local_2c,0x7fffffff);
    local_38 = local_38 + 1;
    if (*pwVar2 == L'\0') break;
    _Str = pwVar2 + 1;
  }
  while( true ) {
    sprintf(local_20,s_msgbox_line_02i,local_38);
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,local_20);
    if (puVar1 == (uiELEMENT *)0x0) break;
    uiAREA::SetTextW((uiAREA *)puVar1,(ushort *)u_,0x7fffffff);
    local_38 = local_38 + 1;
  }
  apFree(local_2c);
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495CF0 */

int __thiscall wrUI_MAIN_WINDOW::StartAppearing(wrUI_MAIN_WINDOW *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    (**(code **)(*(int *)uiSystem + 0x70))(0);
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_wnd.cpp
   addr: 00495D20 */

void __thiscall wrUI_MAIN_WINDOW::OnChildNotify(wrUI_MAIN_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  gsSTRINGS *this_00;
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  wrUI_MAIN_WINDOW *pwVar7;
  undefined4 uVar8;
  
  this_00 = gsStrings;
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    if (*(int *)(param_1 + 8) == 0x51554954) {
      iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_MSGCAP_QUIT);
      puVar2 = gsSTRINGS::GetStringById(this_00,iVar1);
      uVar8 = 0;
      uVar6 = 0x53555245;
      uVar5 = 1;
      iVar1 = *(int *)uiSystem;
      pwVar7 = this;
      iVar3 = gsSTRINGS::GetStringId(this_00,s_UI_MSGTEXT_QUIT_ACK);
      puVar4 = gsSTRINGS::GetStringById(this_00,iVar3);
      (**(code **)(iVar1 + 0x14))(puVar2,puVar4,uVar5,uVar6,pwVar7,uVar8);
    }
  }
  else if (*(int *)(param_1 + 4) == 0x4d534742) {
    if (*(int *)(param_1 + 0x10) != 0) {
      (**(code **)(*(int *)uiSystem + 0x10))(s_splash_frame);
      uiCURSOR::Show((uiCURSOR *)(uiSystem + 0x14),0);
      return;
    }
    (**(code **)(*(int *)uiSystem + 0x10))(&s_main,0);
    return;
  }
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495DF0 */

int __thiscall wrUI_IG_MAIN_WINDOW::StartAppearing(wrUI_IG_MAIN_WINDOW *this,int param_1)

{
  uiELEMENT *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) goto LAB_00495e75;
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_ig_load);
  if (puVar1 != (uiELEMENT *)0x0) {
    if (*(int *)(gsSysMP + 0x28) == 1) {
      iVar2 = plrPLAYER::IsCanLoadNow(plrPlayer);
      if (iVar2 == 0) goto LAB_00495e2e;
      uVar3 = 1;
    }
    else {
LAB_00495e2e:
      uVar3 = 0;
    }
    (**(code **)(*(int *)puVar1 + 0x10))(uVar3);
  }
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_ig_save);
  if (puVar1 == (uiELEMENT *)0x0) goto LAB_00495e75;
  if (*(int *)(gsSysMP + 0x28) == 1) {
    iVar2 = plrPLAYER::IsCanSaveNow(plrPlayer);
    if (iVar2 == 0) goto LAB_00495e6b;
    uVar3 = 1;
  }
  else {
LAB_00495e6b:
    uVar3 = 0;
  }
  (**(code **)(*(int *)puVar1 + 0x10))(uVar3);
LAB_00495e75:
  iVar2 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar2;
}




/* from: wr_ui_wnd.cpp
   addr: 00495E90 */

void __thiscall
wrUI_IG_MAIN_WINDOW::OnChildNotify(wrUI_IG_MAIN_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  gsSTRINGS *this_00;
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  wrUI_IG_MAIN_WINDOW *pwVar7;
  undefined4 uVar8;
  
  this_00 = gsStrings;
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    if (*(int *)(param_1 + 8) == 0x51554954) {
      iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_MSGCAP_STOP_GAME);
      puVar2 = gsSTRINGS::GetStringById(this_00,iVar1);
      uVar8 = 0;
      uVar6 = 0x53555245;
      iVar1 = *(int *)uiSystem;
      uVar5 = 1;
      pwVar7 = this;
      iVar3 = gsSTRINGS::GetStringId(this_00,s_UI_MSGTEXT_STOP_GAME_ACK);
      puVar4 = gsSTRINGS::GetStringById(this_00,iVar3);
      (**(code **)(iVar1 + 0x14))(puVar2,puVar4,uVar5,uVar6,pwVar7,uVar8);
    }
  }
  else if (*(int *)(param_1 + 4) == 0x4d534742) {
    if (*(int *)(param_1 + 0x10) != 0) {
      (**(code **)(*(int *)uiSystem + 0x3c))();
      gspPLAY_SYSTEM::StopGame(gspSysPlay);
      (**(code **)(*(int *)uiSystem + 0x38))(1,0);
      return;
    }
    (**(code **)(*(int *)uiSystem + 0x10))(s_ig_main,0);
    return;
  }
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495F90 */

void __thiscall
wrUI_LOADING_WND::SetParams(wrUI_LOADING_WND *this,int param_1,int param_2,char *param_3)

{
  *(int *)(this + 0x70) = param_1;
  if (param_1 != 0) {
    DAT_0060efa8 = param_2;
    strncpy(&DAT_0060eea4,param_3,0x104);
    DAT_0060efa7 = 0;
  }
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00495FD0 */

void __thiscall wrUI_LOADING_WND::UpdateLevelName(wrUI_LOADING_WND *this,char *param_1)

{
  uiELEMENT *this_00;
  uiELEMENT *this_01;
  int iVar1;
  int local_8;
  int local_4;
  
  this_00 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_loading_mission);
  this_01 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_loading_level);
  iVar1 = 1;
  if ((DAT_0060efa8 != 1) && (*(int *)(this + 0x70) != 2)) {
    iVar1 = 0;
  }
  _uiGetLevelNameStrId(param_1,&local_8,&local_4,iVar1);
  uiAREA::SetTextId((uiAREA *)this_00,local_8);
  uiAREA::SetTextId((uiAREA *)this_01,local_4);
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00496040 */

void __thiscall wrUI_LOADING_WND::ShowFrame(wrUI_LOADING_WND *this)

{
  (**(code **)(*(int *)uiSystem + 0x10))(*(int *)(this + 8) + 0x18,8);
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00496060 */

int __thiscall wrUI_LOADING_WND::IsActive(wrUI_LOADING_WND *this)

{
  uiFRAME *puVar1;
  
  puVar1 = uiFRAME_GROUP::GetActiveFrame(*(uiFRAME_GROUP **)(uiSystem + 300));
  return (uint)(puVar1 == *(uiFRAME **)(this + 8));
}




/* from: wr_ui_wnd.cpp
   addr: 004960A0 */

int __thiscall wrUI_LOADING_WND::StartAppearing(wrUI_LOADING_WND *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(this + 0x6c) = 2;
    uiCURSOR::Show((uiCURSOR *)(uiSystem + 0x14),0);
    iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
    return iVar1;
  }
  if ((*(int *)(uiSystem + 4) == 1) || (*(int *)(uiSystem + 4) == 2)) {
    uiCURSOR::Show((uiCURSOR *)(uiSystem + 0x14),1);
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,0);
  return iVar1;
}




/* from: wr_ui_wnd.cpp
   addr: 00496100 */

int __thiscall wrUI_LOADING_WND::ProcessUpdate(wrUI_LOADING_WND *this,void *param_1)

{
  gsSTRINGS *pgVar1;
  int iVar2;
  uiFRAME *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  uiFRAME_GROUP *this_00;
  uiINPUT_INFO *unaff_EBP;
  uiINPUT_INFO *unaff_retaddr;
  uiINPUT_INFO *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (((byte)this[4] & 0x40) == 0) {
    iVar2 = *(int *)(this + 0x6c);
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
      if (*(int *)(this + 0x70) == 1) {
        (**(code **)(*(int *)uiSystem + 0x38))(3,&s_null);
        *(undefined4 *)(this + 0x70) = 0;
        (**(code **)(*(int *)uiSystem + 0x10))(*(int *)(this + 8) + 0x18,8);
        iVar2 = gspPLAY_SYSTEM::StartGame(gspSysPlay,(gspSTART_GAME_DATA *)&DAT_0060eea0);
        if (iVar2 != 0) goto LAB_004962b9;
        this_00 = *(uiFRAME_GROUP **)(uiSystem + 300);
      }
      else {
        if (*(int *)(this + 0x70) != 2) goto LAB_004962b9;
        (**(code **)(*(int *)uiSystem + 0x38))(3,&s_null);
        *(undefined4 *)(this + 0x70) = 0;
        (**(code **)(*(int *)uiSystem + 0x10))(*(int *)(this + 8) + 0x18,8);
        iVar2 = gspPLAY_SYSTEM::LoadGame(gspSysPlay,(gspSTART_GAME_DATA *)&DAT_0060eea0);
        pgVar1 = gsStrings;
        if (iVar2 != 0) {
          uVar9 = 1;
          uVar8 = 0x40400000;
          iVar2 = *(int *)uiSystem;
          iVar6 = gsSTRINGS::GetStringId(gsStrings,s_GAME_MSG_GAME_LOADED);
          puVar4 = gsSTRINGS::GetStringById(pgVar1,iVar6);
          (**(code **)(iVar2 + 0x20))(puVar4,uVar8,uVar9);
          iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,unaff_EBP);
          return iVar2;
        }
        this_00 = *(uiFRAME_GROUP **)(uiSystem + 300);
      }
      puVar3 = uiFRAME_GROUP::GetActiveFrame(this_00);
      if (puVar3 == *(uiFRAME **)(this + 8)) {
        (**(code **)(*(int *)uiSystem + 0x98))(1);
        iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,unaff_retaddr);
        return iVar2;
      }
      (**(code **)(*(int *)uiSystem + 0x38))(1,&s_null);
      pgVar1 = gsStrings;
      iVar2 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERROR);
      puVar4 = gsSTRINGS::GetStringById(pgVar1,iVar2);
      puVar7 = (uiINPUT_INFO *)&s_main;
      iVar2 = *(int *)uiSystem;
      puVar5 = gsSTRINGS::Printf(*(gsSTRINGS **)(uiSystem + 0x160),(int)gsStrings,
                                 *(gsSTRINGS **)(uiSystem + 0x160),&DAT_0060eea4,0,0,0);
      (**(code **)(iVar2 + 0x14))(puVar4,puVar5);
      iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,puVar7);
      return iVar2;
    }
    if (0 < iVar2) {
      *(int *)(this + 0x6c) = iVar2 + -1;
    }
  }
LAB_004962b9:
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui_wnd.cpp
   addr: 004962D0 */

void __thiscall arrVector<unsigned_short>::Resize(arrVector<unsigned_short> *this,int param_1)

{
  void *pvVar1;
  
  if (((*(int *)(this + 4) <= param_1) && (*(int *)(this + 4) < param_1)) &&
     (*(int *)(this + 8) < param_1)) {
    pvVar1 = apRealloc(*(void **)this,param_1 * 2);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 00496310 */

void __thiscall
arrVector<unsigned_short>::Insert
          (arrVector<unsigned_short> *this,int param_1,ushort *param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar3 = *(int *)(this + 8);
    iVar1 = *(int *)(this + 4) + param_3;
    if (iVar3 < iVar1) {
      iVar5 = iVar3 * 2;
      if (iVar3 * 2 <= iVar1) {
        iVar5 = iVar1;
      }
      if (iVar3 < iVar5) {
        if (iVar5 < *(int *)(this + 4)) {
          *(int *)(this + 4) = iVar5;
        }
        pvVar4 = apRealloc(*(void **)this,iVar5 * 2);
        *(void **)this = pvVar4;
        *(int *)(this + 8) = iVar5;
      }
    }
    iVar1 = param_1 + param_3;
    memmove((void *)(*(int *)this + iVar1 * 2),(void *)(*(int *)this + param_1 * 2),
            (*(int *)(this + 4) - param_1) * 2);
    if (param_1 < iVar1) {
      do {
        puVar2 = (ushort *)(*(int *)this + param_1 * 2);
        if (puVar2 != (ushort *)0x0) {
          *puVar2 = *param_2;
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar1);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  }
  return;
}




/* from: wr_ui_wnd.cpp
   addr: 004963B0 */

void __thiscall arrVector<unsigned_short>::Realloc(arrVector<unsigned_short> *this,int param_1)

{
  void *pvVar1;
  
  if (param_1 != *(int *)(this + 8)) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 * 2);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}

