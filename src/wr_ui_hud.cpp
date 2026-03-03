/* from: wr_ui_hud.cpp
   addr: 004896A0 */

int wruiHUDRegister(void)

{
  int result;
  
  result = uiElementRegister(s_wrh_iconbar,wrUIHUD_ICONBAR::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wr_slider,wrUIHUD_SLIDER::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wrh_msg,wrUIHUD_MSG::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wrh_scope_zoom,wrUIHUD_ZOOM::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wr_hud_wnd,wrUIHUD_WINDOW::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wr_hud_uh_wnd,wrUIHUD_UH_WINDOW::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wr_hud_mp_wnd,wrUIHUD_MP_WINDOW::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wr_hud_coop_wnd,wrUIHUD_COOP_WINDOW::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wr_hud_th_wnd,wrUIHUD_TH_WINDOW::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wr_hud_sp_wnd,wrUIHUD_SP_WINDOW::Create);
  if (result == 0) {
    return 0;
  }
  result = uiElementRegister(s_wrh_dbg_msg,wrUIHUD_DBGMSG::Create);
  return (uint)(result != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_hud.cpp
   addr: 00489780 */

void __thiscall wrUIHUD_SLIDER::SetPosition(wrUIHUD_SLIDER *this,float param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (___real_00000000 <= param_1) {
    if (___real_3f800000 < param_1) {
      param_1 = 1.0;
    }
  }
  else {
    param_1 = 0.0;
  }
  iVar4 = *(int *)(this + 0x118);
  fVar1 = *(float *)(iVar4 + 0x7c);
  uVar2 = *(undefined4 *)(iVar4 + 0x80);
  fVar3 = *(float *)(iVar4 + 0x5c);
  uVar5 = *(undefined4 *)(iVar4 + 0x60);
  *(float *)(this + 0xe8) = fVar1;
  *(undefined4 *)(this + 0xcc) = uVar5;
  *(undefined4 *)(this + 0xbc) = uVar5;
  *(undefined4 *)(this + 0xec) = uVar2;
  fVar3 = (fVar3 - fVar1) * param_1 + fVar1;
  *(float *)(this + 0xd8) = fVar3;
  *(undefined4 *)(this + 0xdc) = uVar2;
  *(float *)(this + 200) = fVar3;
  *(float *)(this + 0xb8) = fVar1;
  return;
}




/* from: wr_ui_hud.cpp
   addr: 00489820 */

int __thiscall wrUIHUD_SLIDER::ProcessInit(wrUIHUD_SLIDER *this,void *param_1)

{
  int iVar1;
  uiINPUT_INFO *unaff_retaddr;
  
  (**(code **)(*(int *)this + 0x60))(0x3f800000);
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,unaff_retaddr);
  return iVar1;
}




/* from: wr_ui_hud.cpp
   addr: 00489840 */

void __thiscall wrUIHUD_ICONBAR::Init(wrUIHUD_ICONBAR *this,objOBJ *param_1)

{
  uiAREA::Init((uiAREA *)this,param_1);
  uiRENDER_INFO::SetElementIdx((uiRENDER_INFO *)(this + 0x6c),s_text,0);
  uiRENDER_INFO::SetElementIdx((uiRENDER_INFO *)(this + 0x6c),s_icon,1);
  *(undefined4 *)(*(int *)(this + 0x118) + 0xa8) = 0xffa9b5d7;
  *(undefined4 *)(this + 0xf8) = 0xffa9b5d7;
  return;
}




/* from: wr_ui_hud.cpp
   addr: 00489890 */

int __thiscall wrUIHUD_ICONBAR::StartAppearing(wrUIHUD_ICONBAR *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined4 *)(this + 300) = 0;
    UpdateTexture(this);
  }
  iVar1 = uiAREA::StartAppearing((uiAREA *)this,param_1);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_hud.cpp
   addr: 004898C0 */

void __thiscall wrUIHUD_ICONBAR::UpdateTexture(wrUIHUD_ICONBAR *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x118);
  uVar2 = *(uint *)(this + 300) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  *(float *)(iVar1 + 0x100) = (float)(int)uVar2 * ___real_3e800000;
  *(float *)(iVar1 + 0x104) =
       (float)((int)(*(int *)(this + 300) + (*(int *)(this + 300) >> 0x1f & 3U)) >> 2) *
       ___real_3e800000;
  uVar2 = *(uint *)(this + 300) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  *(float *)(iVar1 + 0x110) = (float)(int)(uVar2 + 1) * ___real_3e800000;
  *(float *)(iVar1 + 0x114) =
       (float)((int)(*(int *)(this + 300) + (*(int *)(this + 300) >> 0x1f & 3U)) >> 2) *
       ___real_3e800000;
  uVar2 = *(uint *)(this + 300) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  *(float *)(iVar1 + 0x120) = (float)(int)(uVar2 + 1) * ___real_3e800000;
  *(float *)(iVar1 + 0x124) =
       (float)(((int)(*(int *)(this + 300) + (*(int *)(this + 300) >> 0x1f & 3U)) >> 2) + 1) *
       ___real_3e800000;
  uVar2 = *(uint *)(this + 300) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  *(float *)(iVar1 + 0x130) = (float)(int)uVar2 * ___real_3e800000;
  *(float *)(iVar1 + 0x134) =
       (float)(((int)(*(int *)(this + 300) + (*(int *)(this + 300) >> 0x1f & 3U)) >> 2) + 1) *
       ___real_3e800000;
  return;
}




/* from: wr_ui_hud.cpp
   addr: 004899F0 */

int __thiscall wrUIHUD_ICONBAR::ProcessUpdate(wrUIHUD_ICONBAR *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  float in_EDX;
  
  if ((*(int *)(this + 300) != 0) || (*(int *)(this + 0x128) != 0)) {
    iVar1 = m3dUpdateTimeField((float *)(this + 0x130),in_EDX);
    if (iVar1 != 0) {
      if ((*(int *)(this + 300) == 0) && (0 < *(int *)(this + 0x128))) {
        *(int *)(this + 0x128) = *(int *)(this + 0x128) + -1;
      }
      *(float *)(this + 0x130) = 0.0625;
      uVar2 = *(int *)(this + 300) + 1U & 0x8000000f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff0) + 1;
      }
      *(uint *)(this + 300) = uVar2;
      UpdateTexture(this);
    }
  }
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar1;
}




/* from: wr_ui_hud.cpp
   addr: 00489A70 */

int __thiscall wrUIHUD_ZOOM::ProcessUpdate(wrUIHUD_ZOOM *this,void *param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  gsSTRINGS *this_00;
  int iVar3;
  
  iVar3 = 0x7fffffff;
  plrPLAYER::GetZoomStrength(plrPlayer);
  uVar1 = ftol();
  puVar2 = gsSTRINGS::Printf(this_00,(char *)gsStrings,s_UI_HUD_ZOOM,uVar1);
  uiAREA::SetTextW((uiAREA *)this,puVar2,iVar3);
  return 1;
}




/* from: wr_ui_hud.cpp
   addr: 00489AC0 */

void __thiscall wrUIHUD_MSG::ClearMsg(wrUIHUD_MSG *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x130);
  if (iVar1 < *(int *)(this + 0x11c)) {
    iVar2 = iVar1 * 0xac;
    do {
      iVar1 = iVar1 + 1;
      *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar2) =
           *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar2) | 8;
      iVar2 = iVar2 + 0xac;
    } while (iVar1 < *(int *)(this + 0x11c));
  }
  iVar1 = 0;
  *(undefined4 *)(this + 0x128) = 1;
  *(undefined4 *)(this + 300) = 0;
  if (0 < *(int *)(this + 0x138)) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar2) =
           *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar2) | 8;
      iVar2 = iVar2 + 0xac;
      *(undefined4 *)(*(int *)(this + 0x134) + -8 + iVar1 * 8) = 1;
      *(undefined4 *)(*(int *)(this + 0x134) + -4 + iVar1 * 8) = 0;
    } while (iVar1 < *(int *)(this + 0x138));
  }
  return;
}




/* from: wr_ui_hud.cpp
   addr: 00489B70 */

void __thiscall wrUIHUD_MSG::ShowMsgW(wrUIHUD_MSG *this,ushort *param_1,float param_2,int param_3)

{
  byte *pbVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_204;
  wchar_t local_200 [255];
  undefined2 local_2;
  
  if ((*(int *)(wrSysGO + 0x94) == 0) || (*(int *)(wrSysGO + 0x94) == 2)) {
    param_3 = param_3 & 0xfffffffe;
  }
  if ((param_3 & 1U) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(this + 0x138)) {
      pbVar1 = (byte *)(*(int *)(this + 0x118) + 0x40);
      do {
        if ((*pbVar1 & 8) != 0) break;
        iVar4 = iVar4 + 1;
        pbVar1 = pbVar1 + 0xac;
      } while (iVar4 < *(int *)(this + 0x138));
      if ((0 < iVar4) && ((param_3 & 2U) != 0)) {
        pwVar2 = (wchar_t *)
                 uiRENDER_ELEM_TEXT::GetString
                           ((uiRENDER_ELEM_TEXT *)(*(int *)(this + 0x118) + iVar4 * 0xac + -0x18));
        iVar3 = wcscmp((wchar_t *)param_1,pwVar2);
        if (iVar3 == 0) {
          iVar4 = iVar4 + -1;
        }
      }
    }
    if (iVar4 == *(int *)(this + 0x138)) {
      RemoveConMsgLine(this,0);
      iVar4 = iVar4 + -1;
    }
    iVar3 = iVar4 * 0xac;
    uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar3),param_1,0x7fffffff);
    uiRENDER_ELEM::SetAlphaText((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar3),255.0);
    *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar3) =
         *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar3) & 0xfffffff7;
    *(undefined4 *)(*(int *)(this + 0x134) + 4 + iVar4 * 8) = 0x40e00000;
    *(undefined4 *)(*(int *)(this + 0x134) + iVar4 * 8) = 0;
  }
  iVar4 = *(int *)(this + 0x130);
  if (iVar4 < *(int *)(this + 0x11c)) {
    iVar3 = iVar4 * 0xac;
    do {
      iVar4 = iVar4 + 1;
      *(uint *)(iVar3 + 0x40 + *(int *)(this + 0x118)) =
           *(uint *)(iVar3 + 0x40 + *(int *)(this + 0x118)) | 8;
      iVar3 = iVar3 + 0xac;
    } while (iVar4 < *(int *)(this + 0x11c));
  }
  iVar4 = *(int *)(this + 0x130);
  *(undefined4 *)(this + 0x128) = 1;
  *(undefined4 *)(this + 300) = 0;
  pwVar2 = wcschr((wchar_t *)param_1,L'\n');
  if (pwVar2 != (wchar_t *)0x0) {
    iVar3 = iVar4 * 0xac;
    local_204 = iVar4;
    do {
      if (iVar4 < *(int *)(this + 0x11c)) {
        iVar5 = (int)pwVar2 - (int)param_1 >> 1;
        wcsncpy(local_200,(wchar_t *)param_1,iVar5 + 1);
        iVar4 = *(int *)(this + 0x118);
        local_200[iVar5] = L'\0';
        uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(iVar4 + iVar3),(ushort *)local_200,0x7fffffff);
        uiRENDER_ELEM::SetAlphaText((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar3),255.0);
        iVar4 = local_204 + 1;
        *(uint *)(iVar3 + 0x40 + *(int *)(this + 0x118)) =
             *(uint *)(iVar3 + 0x40 + *(int *)(this + 0x118)) & 0xfffffff7;
        iVar3 = iVar3 + 0xac;
        local_204 = iVar4;
      }
      param_1 = (ushort *)((wchar_t *)param_1 + ((int)pwVar2 - (int)param_1 >> 1) + 1);
      pwVar2 = wcschr((wchar_t *)param_1,L'\n');
    } while (pwVar2 != (wchar_t *)0x0);
  }
  if (iVar4 < *(int *)(this + 0x11c)) {
    wcsncpy(local_200,(wchar_t *)param_1,0x100);
    local_2 = 0;
    iVar4 = iVar4 * 0xac;
    uiRENDER_ELEM::SetTextW
              ((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar4),(ushort *)local_200,0x7fffffff);
    uiRENDER_ELEM::SetAlphaText((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar4),255.0);
    *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar4) =
         *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar4) & 0xfffffff7;
  }
  *(undefined4 *)(this + 0x128) = 0;
  *(float *)(this + 300) = param_2;
  return;
}




/* from: wr_ui_hud.cpp
   addr: 00489E50 */

int __thiscall wrUIHUD_MSG::ProcessInit(wrUIHUD_MSG *this,void *param_1)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  qsort(*(void **)(this + 0x118),*(size_t *)(this + 0x11c),0xac,_compareRectY);
  iVar4 = 0;
  if (0 < *(int *)(this + 0x11c)) {
    iVar3 = 0;
    do {
      pcVar1 = strstr((char *)(*(int *)(this + 0x118) + iVar3),s_con_msg);
      if (pcVar1 == (char *)0x0) break;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xac;
    } while (iVar4 < *(int *)(this + 0x11c));
  }
  *(int *)(this + 0x130) = iVar4;
  if ((*(int *)(this + 0x138) < iVar4) && (*(int *)(this + 0x13c) < iVar4)) {
    pvVar2 = apRealloc(*(void **)(this + 0x134),iVar4 * 8);
    *(void **)(this + 0x134) = pvVar2;
    *(int *)(this + 0x13c) = iVar4;
  }
  *(int *)(this + 0x138) = iVar4;
  iVar4 = *(int *)(this + 0x130);
  if (iVar4 < *(int *)(this + 0x11c)) {
    iVar3 = iVar4 * 0xac;
    do {
      iVar4 = iVar4 + 1;
      *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar3) =
           *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar3) | 8;
      iVar3 = iVar3 + 0xac;
    } while (iVar4 < *(int *)(this + 0x11c));
  }
  iVar4 = 0;
  *(undefined4 *)(this + 0x128) = 1;
  *(undefined4 *)(this + 300) = 0;
  if (0 < *(int *)(this + 0x138)) {
    iVar3 = 0;
    do {
      iVar4 = iVar4 + 1;
      *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar3) =
           *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar3) | 8;
      iVar3 = iVar3 + 0xac;
      *(undefined4 *)(*(int *)(this + 0x134) + -8 + iVar4 * 8) = 1;
      *(undefined4 *)(*(int *)(this + 0x134) + -4 + iVar4 * 8) = 0;
    } while (iVar4 < *(int *)(this + 0x138));
  }
  return 1;
}




/* from: wr_ui_hud.cpp
   addr: 00489FB0 */

int __cdecl _compareRectY(void *param_1,void *param_2)

{
  if (*(float *)((int)param_1 + 0x50) < *(float *)((int)param_2 + 0x50)) {
    return -1;
  }
  if (*(float *)((int)param_1 + 0x50) == *(float *)((int)param_2 + 0x50)) {
    return 0;
  }
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_hud.cpp
   addr: 0048A010 */

int __thiscall wrUIHUD_MSG::ProcessUpdate(wrUIHUD_MSG *this,void *param_1)

{
  wrUIHUD_MSG *pwVar1;
  int iVar2;
  int iVar3;
  float in_EDX;
  int iVar4;
  
  pwVar1 = this + 300;
  iVar2 = m3dUpdateTimeField((float *)pwVar1,in_EDX);
  if (iVar2 != 0) {
    if (*(int *)(this + 0x128) == 0) {
      *(undefined4 *)(this + 0x128) = 1;
      *(float *)pwVar1 = 1.5;
    }
    else {
      iVar2 = *(int *)(this + 0x130);
      if (iVar2 < *(int *)(this + 0x11c)) {
        iVar4 = iVar2 * 0xac;
        do {
          iVar2 = iVar2 + 1;
          *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar4) =
               *(uint *)(*(int *)(this + 0x118) + 0x40 + iVar4) | 8;
          iVar4 = iVar4 + 0xac;
        } while (iVar2 < *(int *)(this + 0x11c));
      }
    }
  }
  if (((*(int *)(this + 0x128) != 0) && (___real_00000000 < *(float *)pwVar1)) &&
     (iVar2 = *(int *)(this + 0x130), iVar2 < *(int *)(this + 0x11c))) {
    iVar4 = iVar2 * 0xac;
    do {
      uiRENDER_ELEM::SetAlphaText
                ((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar4),
                 *(float *)pwVar1 * ___real_432a0000);
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xac;
    } while (iVar2 < *(int *)(this + 0x11c));
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x138)) {
    iVar4 = 0;
    do {
      if ((*(byte *)(*(int *)(this + 0x118) + 0x40 + iVar4) & 8) != 0) {
        return 1;
      }
      iVar3 = m3dUpdateTimeField((float *)((int)*(float *)(this + 0x134) + 4 + iVar2 * 8),
                                 *(float *)(this + 0x134));
      if (iVar3 == 0) {
LAB_0048a169:
        if (*(int *)(*(int *)(this + 0x134) + iVar2 * 8) != 0) {
          uiRENDER_ELEM::SetAlphaText
                    ((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar4),
                     *(float *)(*(int *)(this + 0x134) + iVar2 * 8 + 4) * ___real_432a0000);
        }
      }
      else {
        if (*(int *)(*(int *)(this + 0x134) + iVar2 * 8) == 0) {
          *(undefined4 *)(*(int *)(this + 0x134) + iVar2 * 8) = 1;
          *(undefined4 *)(*(int *)(this + 0x134) + 4 + iVar2 * 8) = 0x3fc00000;
          goto LAB_0048a169;
        }
        RemoveConMsgLine(this,iVar2);
        iVar2 = iVar2 + -1;
        iVar4 = iVar4 + -0xac;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 0xac;
    } while (iVar2 < *(int *)(this + 0x138));
  }
  return 1;
}




/* from: wr_ui_hud.cpp
   addr: 0048A1C0 */

void __thiscall wrUIHUD_MSG::RemoveConMsgLine(wrUIHUD_MSG *this,int param_1)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_1 + 1;
  if (iVar5 < *(int *)(this + 0x138)) {
    iVar4 = iVar5 * 0xac;
    do {
      iVar6 = 0x7fffffff;
      iVar3 = *(int *)(this + 0x134) + iVar5 * 8;
      *(undefined4 *)(iVar3 + -8) = *(undefined4 *)(*(int *)(this + 0x134) + iVar5 * 8);
      *(undefined4 *)(iVar3 + -4) = *(undefined4 *)(iVar3 + 4);
      iVar3 = *(int *)(this + 0x118);
      puVar2 = uiRENDER_ELEM_TEXT::GetString((uiRENDER_ELEM_TEXT *)(iVar3 + iVar4 + 0x94));
      uiRENDER_ELEM::SetTextW((uiRENDER_ELEM *)(iVar3 + iVar4 + -0xac),puVar2,iVar6);
      *(undefined4 *)(iVar4 + *(int *)(this + 0x118) + -4) =
           *(undefined4 *)(iVar4 + 0xa8 + *(int *)(this + 0x118));
      iVar3 = *(int *)(this + 0x118) + iVar4;
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xac;
      *(undefined4 *)(iVar3 + -0x6c) = *(undefined4 *)(iVar3 + 0x40);
    } while (iVar5 < *(int *)(this + 0x138));
  }
  uiRENDER_ELEM::SetTextW
            ((uiRENDER_ELEM *)(iVar5 * 0xac + -0xac + *(int *)(this + 0x118)),(ushort *)u_,
             0x7fffffff);
  puVar1 = (uint *)(iVar5 * 0xac + -0x6c + *(int *)(this + 0x118));
  *puVar1 = *puVar1 | 8;
  return;
}




/* from: wr_ui_hud.cpp
   addr: 0048A2A0 */

int __thiscall wrUIHUD_DBGMSG::ProcessInit(wrUIHUD_DBGMSG *this,void *param_1)

{
  undefined4 uVar1;
  uiFONT *puVar2;
  int iVar3;
  int iVar4;
  
  uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  iVar4 = *(int *)uiSystem;
  uVar1 = (**(code **)(iVar4 + 0x50))(0);
  puVar2 = (uiFONT *)(**(code **)(iVar4 + 0x54))(uVar1);
  uiAREA::SetFont((uiAREA *)this,puVar2);
  qsort(*(void **)(this + 0x118),*(size_t *)(this + 0x11c),0xac,_compareRectY);
  iVar4 = 0;
  if (0 < *(int *)(this + 0x11c)) {
    iVar3 = 0;
    do {
      uiRENDER_ELEM::SetTextId((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar3),1);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xac;
    } while (iVar4 < *(int *)(this + 0x11c));
  }
  return 1;
}




/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_hud.cpp
   addr: 0048A330 */

int __thiscall wrUIHUD_DBGMSG::ProcessUpdate(wrUIHUD_DBGMSG *this,void *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char **_Str;
  int iVar5;
  int local_228 [2];
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float local_214;
  float fStack_210;
  float fStack_20c;
  wchar_t local_208 [258];
  
  local_228[1] = 0;
  _apCfgReadBool((void **)&DAT_0060ee4c,s_Debug,s_ShowProfInfo,local_228 + 1);
  iVar5 = 0;
  iVar3 = _apCfgReadBool((void **)&DAT_0060ee48,s_Debug,s_ShowFPS_PPF,local_228);
  if ((iVar3 != 0) && (local_228[0] != 0)) {
    if ((char)((uint)gsAppState >> 8) < '\0') {
      swprintf(local_208,u___2f____d,SUB84((double)*(float *)(vidDriver + 0x22c),0),
               (int)((ulonglong)(double)*(float *)(vidDriver + 0x22c) >> 0x20),
               *(undefined4 *)(vidDriver + 0x228));
    }
    else {
      fVar1 = *(float *)(vidDriver + 0x22c);
      uVar2 = *(undefined4 *)(vidDriver + 0x228);
      iVar3 = aiNPC::GetNOpp((char *)0x0,(char *)0x0);
      swprintf(local_208,u___2f____d____d,SUB84((double)fVar1,0),
               (int)((ulonglong)(double)fVar1 >> 0x20),uVar2,iVar3);
    }
    iVar5 = 1;
    uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(this + 0x118),(ushort *)local_208,0x7fffffff);
  }
  iVar3 = iVar5;
  if (plrPlayer != (plrPLAYER *)0x0) {
    if ((char)((uint)gsAppState >> 8) < '\0') goto LAB_0048a610;
    (**(code **)(*(int *)plrPlayer + 0x68))(&local_214);
    (**(code **)(*(int *)plrPlayer + 0x70))(local_228 + 1);
    iVar3 = 0;
    do {
      pcVar4 = (char *)((int)&gsSceneFullName + iVar3);
      *(char *)((int)&apBuffer + iVar3) = *pcVar4;
      iVar3 = iVar3 + 1;
    } while (*pcVar4 != '\0');
    pcVar4 = strrchr((char *)&apBuffer,0x2e);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    _Str = &apBuffer;
    while( true ) {
      pcVar4 = strchr((char *)_Str,0x5c);
      if (pcVar4 == (char *)0x0) break;
      _Str = (char **)(pcVar4 + 1);
    }
    swprintf(local_208,u__S_____pos_____5_2f_,_Str,(double)local_214,(double)fStack_210,
             (double)fStack_20c,SUB84((double)fStack_220,0),
             (int)((ulonglong)(double)fStack_220 >> 0x20),SUB84((double)fStack_21c,0),
             (int)((ulonglong)(double)fStack_21c >> 0x20),SUB84((double)fStack_218,0),
             (int)((ulonglong)(double)fStack_218 >> 0x20));
    iVar3 = iVar5 + 1;
    uiRENDER_ELEM::SetTextW
              ((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar5 * 0xac),(ushort *)local_208,
               0x7fffffff);
  }
  if ((-1 < (char)((uint)gsAppState >> 8)) && (*(int *)(gsSysMP + 0x28) != 1)) {
    swprintf(local_208,u______2f_____2f__ping,SUB84((double)*(float *)(gsSysNetwork + 0xc4),0),
             (int)((ulonglong)(double)*(float *)(gsSysNetwork + 0xc4) >> 0x20),
             SUB84((double)*(float *)(gsSysNetwork + 200),0),
             (int)((ulonglong)(double)*(float *)(gsSysNetwork + 200) >> 0x20),
             *(undefined4 *)(gsSysNetwork + 0xcc));
    uiRENDER_ELEM::SetTextW
              ((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar3 * 0xac),(ushort *)local_208,
               0x7fffffff);
    swprintf(local_208,u_MsgToSend___i__BPS__,_netDbgStat,DAT_00612028,_netPckProcessed);
    iVar5 = iVar3 + 2;
    uiRENDER_ELEM::SetTextW
              ((uiRENDER_ELEM *)(*(int *)(this + 0x118) + (iVar3 + 1) * 0xac),(ushort *)local_208,
               0x7fffffff);
    swprintf(local_208,u_PckSend___i__PckRece,DAT_0061202c,DAT_00612030);
    iVar3 = iVar3 + 3;
    uiRENDER_ELEM::SetTextW
              ((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar5 * 0xac),(ushort *)local_208,
               0x7fffffff);
  }
LAB_0048a610:
  if (iVar3 < *(int *)(this + 0x11c)) {
    iVar5 = iVar3 * 0xac;
    do {
      uiRENDER_ELEM::SetTextId((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar5),1);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xac;
    } while (iVar3 < *(int *)(this + 0x11c));
  }
  iVar3 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar3;
}




/* from: wr_ui_hud.cpp
   addr: 0048A660 */

int __thiscall wrUIHUD_MP_WINDOW::ProcessInit(wrUIHUD_MP_WINDOW *this,void *param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  uint uVar3;
  wrUIHUD_MP_WINDOW *pwVar4;
  
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  pwVar4 = this + 0x6c;
  do {
    uVar3 = uVar3 + 1;
    sprintf((char *)&apBuffer,s_plr_02i,uVar3);
    puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,(char *)&apBuffer);
    *(uiELEMENT **)pwVar4 = puVar2;
    qsort(*(void **)(puVar2 + 0x118),*(size_t *)(puVar2 + 0x11c),0xac,_compareRectX);
    pwVar4 = pwVar4 + 4;
  } while (uVar3 < 0x10);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
  return 1;
}




/* from: wr_ui_hud.cpp
   addr: 0048A6E0
   addr: 0048A6E0 */

int __cdecl _compareRectX(void *param_1,void *param_2)

{
  if (*(float *)((int)param_1 + 0x4c) < *(float *)((int)param_2 + 0x4c)) {
    return -1;
  }
  if (*(float *)((int)param_1 + 0x4c) == *(float *)((int)param_2 + 0x4c)) {
    return 0;
  }
  return 1;
}




/* from: wr_ui_hud.cpp
   addr: 0048A720 */

int __thiscall wrUIHUD_MP_WINDOW::ProcessUpdate(wrUIHUD_MP_WINDOW *this,void *param_1)

{
  int iVar1;
  entENTITY *peVar2;
  int iVar3;
  char *pcVar4;
  ushort *puVar5;
  wrUIHUD_MP_WINDOW *pwVar6;
  uint uVar7;
  uint uVar8;
  int local_40;
  undefined1 local_3c [60];
  
  if ((*(uint *)(this + 4) & 0x2000) != 0) {
    iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar1;
  }
  iVar1 = 0;
  for (peVar2 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,(entENTITY *)0x0); peVar2 != (entENTITY *)0x0;
      peVar2 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,peVar2)) {
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        if ((*(int *)(*(int *)(local_3c + iVar3 * 4 + -4) + 0x2b7) * 0x10000 -
            *(int *)(*(int *)(local_3c + iVar3 * 4 + -4) + 699)) + 0xffff <
            (*(int *)(peVar2 + 0x2b7) * 0x10000 - *(int *)(peVar2 + 699)) + 0xffff) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    memmove(local_3c + iVar3 * 4,local_3c + iVar3 * 4 + -4,(iVar1 - iVar3) * 4);
    iVar1 = iVar1 + 1;
    *(entENTITY **)(local_3c + iVar3 * 4 + -4) = peVar2;
    if (iVar1 == 0x10) break;
  }
  uVar7 = 0;
  if (0 < iVar1) {
    pwVar6 = this + 0x6c;
    do {
      pcVar4 = *(char **)(*(int *)(*(int *)(local_3c + uVar7 * 4 + -4) + 0xbc) + 0x18);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = s_;
      }
      iVar3 = 0x7fffffff;
      puVar5 = gsSTRINGS::AsciiToUnicode(gsStrings,pcVar4);
      uiAREA::SetTextW(*(uiAREA **)pwVar6,puVar5,iVar3);
      swprintf((wchar_t *)&apBuffer,u__i,
               *(undefined4 *)(*(int *)(local_3c + uVar7 * 4 + -4) + 0x2b7));
      uiRENDER_ELEM::SetTextW
                (*(uiRENDER_ELEM **)(*(int *)pwVar6 + 0x118),(ushort *)&apBuffer,0x7fffffff);
      swprintf((wchar_t *)&apBuffer,u__i,*(undefined4 *)(*(int *)(local_3c + uVar7 * 4 + -4) + 699))
      ;
      uiRENDER_ELEM::SetTextW
                ((uiRENDER_ELEM *)(*(int *)(*(int *)pwVar6 + 0x118) + 0xac),(ushort *)&apBuffer,
                 0x7fffffff);
      if (plrPlayer == *(plrPLAYER **)(local_3c + uVar7 * 4 + -4)) {
        uVar8 = 0xffc8c855;
      }
      else {
        uVar8 = ftol();
        uVar8 = uVar8 & 0xff | 0xffa9b500;
      }
      uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(*(int *)pwVar6 + 0x6c),uVar8);
      iVar3 = *(int *)pwVar6;
      pwVar6 = pwVar6 + 4;
      uVar7 = uVar7 + 1;
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xffffdfff;
    } while ((int)uVar7 < iVar1);
    if (0xf < uVar7) goto LAB_0048a904;
  }
  pwVar6 = this + uVar7 * 4 + 0x6c;
  iVar1 = 0x10 - uVar7;
  do {
    iVar3 = *(int *)pwVar6;
    pwVar6 = pwVar6 + 4;
    iVar1 = iVar1 + -1;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x2000;
  } while (iVar1 != 0);
LAB_0048a904:
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar1;
}




/* from: wr_ui_hud.cpp
   addr: 0048A920 */

int __thiscall wrUIHUD_COOP_WINDOW::ProcessInit(wrUIHUD_COOP_WINDOW *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  uiELEMENT *puVar3;
  wrUIHUD_COOP_WINDOW *pwVar4;
  
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  pwVar4 = this + 0x6c;
  do {
    uVar2 = uVar2 + 1;
    sprintf((char *)&apBuffer,s_plrline_02i,uVar2);
    puVar3 = uiELEMENT::FindChildElement((uiELEMENT *)this,(char *)&apBuffer);
    *(uiELEMENT **)pwVar4 = puVar3;
    pwVar4 = pwVar4 + 4;
  } while (uVar2 < 0x10);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
  return 1;
}




/* from: wr_ui_hud.cpp
   addr: 0048A980 */

int __thiscall wrUIHUD_COOP_WINDOW::ProcessUpdate(wrUIHUD_COOP_WINDOW *this,void *param_1)

{
  uiRENDER_ELEM *this_00;
  int iVar1;
  entENTITY *peVar2;
  char *pcVar3;
  ushort *puVar4;
  wrUIHUD_COOP_WINDOW *pwVar5;
  wrUIHUD_COOP_WINDOW *pwVar6;
  wrUIHUD_COOP_WINDOW *pwVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int local_1c;
  int local_10;
  undefined1 local_c [12];
  
  if ((*(uint *)(this + 4) & 0x2000) != 0) {
    iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar1;
  }
  local_1c = 0;
  for (peVar2 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,(entENTITY *)0x0); peVar2 != (entENTITY *)0x0;
      peVar2 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,peVar2)) {
    iVar1 = 0;
    if (0 < local_1c) {
      do {
        if ((*(int *)(*(int *)(local_c + iVar1 * 4 + -4) + 0x2b7) * 0x10000 -
            *(int *)(*(int *)(local_c + iVar1 * 4 + -4) + 699)) + 0xffff <
            (*(int *)(peVar2 + 0x2b7) * 0x10000 - *(int *)(peVar2 + 699)) + 0xffff) break;
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_1c);
    }
    memmove(local_c + iVar1 * 4,local_c + iVar1 * 4 + -4,(local_1c - iVar1) * 4);
    local_1c = local_1c + 1;
    *(entENTITY **)(local_c + iVar1 * 4 + -4) = peVar2;
    if (local_1c == 4) break;
  }
  iVar1 = 0;
  uVar8 = 0;
  if (0 < local_1c) {
    pwVar5 = this + 0x6c;
    do {
      pcVar3 = *(char **)(*(int *)(*(int *)(local_c + iVar1 * 4 + -4) + 0xbc) + 0x18);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = s_;
      }
      iVar9 = 0x7fffffff;
      this_00 = *(uiRENDER_ELEM **)(*(int *)pwVar5 + 0x118);
      puVar4 = gsSTRINGS::AsciiToUnicode(gsStrings,pcVar3);
      uiRENDER_ELEM::SetTextW(this_00,puVar4,iVar9);
      if (plrPlayer == *(plrPLAYER **)(local_c + iVar1 * 4 + -4)) {
        uVar10 = 0xffc8c855;
      }
      else {
        uVar10 = ftol();
        uVar10 = uVar10 & 0xff | 0xffa9b500;
      }
      uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(*(int *)pwVar5 + 0x6c),uVar10);
      pwVar6 = pwVar5 + 4;
      *(uint *)(*(int *)pwVar5 + 4) = *(uint *)(*(int *)pwVar5 + 4) & 0xffffdfff;
      swprintf((wchar_t *)&apBuffer,u__i,*(undefined4 *)(*(int *)(local_c + iVar1 * 4 + -4) + 0x2b7)
              );
      uiRENDER_ELEM::SetTextW
                (*(uiRENDER_ELEM **)(*(int *)pwVar6 + 0x118),(ushort *)&apBuffer,0x7fffffff);
      uVar10 = ftol();
      uiRENDER_INFO::SetColorText
                ((uiRENDER_INFO *)(*(int *)pwVar6 + 0x6c),uVar10 & 0xff | 0xffa9b500);
      pwVar7 = pwVar5 + 8;
      *(uint *)(*(int *)pwVar6 + 4) = *(uint *)(*(int *)pwVar6 + 4) & 0xffffdfff;
      swprintf((wchar_t *)&apBuffer,u__i,*(undefined4 *)(*(int *)(local_c + iVar1 * 4 + -4) + 699));
      uiRENDER_ELEM::SetTextW
                (*(uiRENDER_ELEM **)(*(int *)pwVar7 + 0x118),(ushort *)&apBuffer,0x7fffffff);
      uVar10 = ftol();
      uiRENDER_INFO::SetColorText
                ((uiRENDER_INFO *)(*(int *)pwVar7 + 0x6c),uVar10 & 0xff | 0xffa9b500);
      pwVar6 = pwVar5 + 0xc;
      *(uint *)(*(int *)pwVar7 + 4) = *(uint *)(*(int *)pwVar7 + 4) & 0xffffdfff;
      swprintf((wchar_t *)&apBuffer,u__i,*(undefined4 *)(*(int *)(local_c + iVar1 * 4 + -4) + 699));
      uiRENDER_ELEM::SetTextW
                (*(uiRENDER_ELEM **)(*(int *)pwVar6 + 0x118),(ushort *)&apBuffer,0x7fffffff);
      uVar10 = ftol();
      uiRENDER_INFO::SetColorText
                ((uiRENDER_INFO *)(*(int *)pwVar6 + 0x6c),uVar10 & 0xff | 0xffa9b500);
      pwVar5 = pwVar5 + 0x10;
      uVar8 = uVar8 + 4;
      *(uint *)(*(int *)pwVar6 + 4) = *(uint *)(*(int *)pwVar6 + 4) & 0xffffdfff;
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_1c);
    if (0xf < uVar8) goto LAB_0048ac71;
  }
  pwVar5 = this + uVar8 * 4 + 0x6c;
  iVar1 = 0x10 - uVar8;
  do {
    iVar9 = *(int *)pwVar5;
    pwVar5 = pwVar5 + 4;
    iVar1 = iVar1 + -1;
    *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 0x2000;
  } while (iVar1 != 0);
LAB_0048ac71:
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar1;
}




/* from: wr_ui_hud.cpp
   addr: 0048AC90 */

int __thiscall wrUIHUD_TH_WINDOW::ProcessInit(wrUIHUD_TH_WINDOW *this,void *param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  uint uVar3;
  wrUIHUD_TH_WINDOW *pwVar4;
  
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_total);
  *(uiELEMENT **)(this + 0x6c) = puVar2;
  uVar3 = 0;
  pwVar4 = this + 0x70;
  do {
    uVar3 = uVar3 + 1;
    sprintf((char *)&apBuffer,s_plr_02i,uVar3);
    puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,(char *)&apBuffer);
    *(uiELEMENT **)pwVar4 = puVar2;
    qsort(*(void **)(puVar2 + 0x118),*(size_t *)(puVar2 + 0x11c),0xac,_compareRectX);
    pwVar4 = pwVar4 + 4;
  } while (uVar3 < 0x11);
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_hud.cpp
   addr: 0048AD20 */

void __thiscall
wrUIHUD_TH_WINDOW::SetupLine
          (wrUIHUD_TH_WINDOW *this,int param_1,int param_2,ushort *param_3,int param_4,int param_5,
          int param_6)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  gsSTRINGS *this_00;
  uint uVar4;
  int iVar5;
  
  if (param_3 == (ushort *)0x0) {
    *(uint *)(*(int *)(this + param_2 * 4 + 0x70) + 4) =
         *(uint *)(*(int *)(this + param_2 * 4 + 0x70) + 4) | 0x2000;
    return;
  }
  if (param_1 == 0) {
    uiAREA::SetTextW(*(uiAREA **)(this + param_2 * 4 + 0x70),(ushort *)u___,0x7fffffff);
    uiAREA::AppendTextW(*(uiAREA **)(this + param_2 * 4 + 0x70),param_3,0x7fffffff);
    uVar4 = ftol();
    uVar4 = uVar4 & 0xff | 0xffa9b500;
  }
  else if (param_1 == 1) {
    uiAREA::SetTextW(*(uiAREA **)(this + param_2 * 4 + 0x70),param_3,0x7fffffff);
    uVar4 = 0xffc8c8c8;
  }
  else {
    if (param_1 != 2) goto LAB_0048adf1;
    uiAREA::SetTextW(*(uiAREA **)(this + param_2 * 4 + 0x70),(ushort *)u___,0x7fffffff);
    uiAREA::AppendTextW(*(uiAREA **)(this + param_2 * 4 + 0x70),param_3,0x7fffffff);
    uVar4 = 0xffc8c855;
  }
  uiRENDER_INFO::SetColorText((uiRENDER_INFO *)(*(int *)(this + param_2 * 4 + 0x70) + 0x6c),uVar4);
LAB_0048adf1:
  iVar5 = 0x7fffffff;
  iVar1 = wrGO_SYSTEM::GetNMP_TreasureVictory(wrSysGO);
  iVar2 = wrGO_SYSTEM::GetNMP_TreasureTotal(wrSysGO);
  puVar3 = gsSTRINGS::Printf(this_00,(char *)gsStrings,s_UI_HUD_MP_TOTAL_TREASURES,iVar2,iVar1);
  uiAREA::SetTextW(*(uiAREA **)(this + 0x6c),puVar3,iVar5);
  if (param_1 == 1) {
    iVar1 = wrGO_SYSTEM::GetNMP_TreasureVictory(wrSysGO);
    swprintf((wchar_t *)&apBuffer,u__i__i,param_4,iVar1);
    iVar1 = wrGO_SYSTEM::GetNMP_TreasureVictory(wrSysGO);
    if (iVar1 != 0) {
      wrGO_SYSTEM::GetNMP_TreasureVictory(wrSysGO);
      uVar4 = ftol();
      iVar1 = ftol();
      *(uint *)(*(int *)(*(int *)(this + param_2 * 4 + 0x70) + 0x118) + 0xa8) =
           (uVar4 & 0xff | iVar1 << 8) << 8 | 0xff000014;
    }
  }
  else {
    swprintf((wchar_t *)&apBuffer,u__i,param_4);
  }
  uiRENDER_ELEM::SetTextW
            (*(uiRENDER_ELEM **)(*(int *)(this + param_2 * 4 + 0x70) + 0x118),(ushort *)&apBuffer,
             0x7fffffff);
  swprintf((wchar_t *)&apBuffer,u__i,param_5);
  uiRENDER_ELEM::SetTextW
            ((uiRENDER_ELEM *)(*(int *)(*(int *)(this + param_2 * 4 + 0x70) + 0x118) + 0xac),
             (ushort *)&apBuffer,0x7fffffff);
  swprintf((wchar_t *)&apBuffer,u__i,param_6);
  uiRENDER_ELEM::SetTextW
            ((uiRENDER_ELEM *)(*(int *)(*(int *)(this + param_2 * 4 + 0x70) + 0x118) + 0x158),
             (ushort *)&apBuffer,0x7fffffff);
  *(uint *)(*(int *)(this + param_2 * 4 + 0x70) + 4) =
       *(uint *)(*(int *)(this + param_2 * 4 + 0x70) + 4) & 0xffffdfff;
  return;
}




/* from: wr_ui_hud.cpp
   addr: 0048AFA0 */

int __thiscall wrUIHUD_TH_WINDOW::ProcessUpdate(wrUIHUD_TH_WINDOW *this,void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  entENTITY *peVar4;
  char *pcVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_5c;
  int local_58;
  gsSTRINGS *local_54;
  int local_50;
  int local_4c;
  int local_44;
  undefined1 local_40 [64];
  
  if ((*(uint *)(this + 4) & 0x2000) != 0) {
    iVar3 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar3;
  }
  local_5c = 0;
  for (peVar4 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,(entENTITY *)0x0); peVar4 != (entENTITY *)0x0;
      peVar4 = gsMP_SYSTEM::GetNextPlayer(gsSysMP,peVar4)) {
    iVar3 = 0;
    if (0 < local_5c) {
      do {
        iVar1 = *(int *)(local_40 + iVar3 * 4 + -4);
        if (((*(int *)(peVar4 + 0x2b3) * 0x8000 + *(int *)(peVar4 + 0x2b7)) * 0x8000 -
            *(int *)(peVar4 + 699)) + 0x7fff <
            ((*(int *)(iVar1 + 0x2b3) * 0x8000 + *(int *)(iVar1 + 0x2b7)) * 0x8000 -
            *(int *)(iVar1 + 699)) + 0x7fff) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_5c);
    }
    memmove(local_40 + iVar3 * 4,local_40 + iVar3 * 4 + -4,(local_5c - iVar3) * 4);
    local_5c = local_5c + 1;
    *(entENTITY **)(local_40 + iVar3 * 4 + -4) = peVar4;
    if (local_5c == 0xe) break;
  }
  uVar7 = 0;
  local_4c = 0;
  iVar3 = 0;
  do {
    local_50 = 0;
    local_54 = (gsSTRINGS *)0x0;
    local_58 = 0;
    uVar8 = uVar7;
    while ((uVar2 = uVar8 + 1, iVar3 < local_5c &&
           (iVar1 = *(int *)(local_40 + iVar3 * 4 + -4), *(int *)(iVar1 + 0x2b3) == local_4c))) {
      iVar10 = *(int *)(iVar1 + 0x2b7);
      iVar9 = *(int *)(iVar1 + 0x2bf);
      local_54 = local_54 + iVar10;
      local_50 = local_50 + iVar9;
      iVar11 = *(int *)(iVar1 + 699);
      pcVar5 = *(char **)(*(int *)(iVar1 + 0xbc) + 0x18);
      local_58 = local_58 + iVar11;
      if (pcVar5 == (char *)0x0) {
        pcVar5 = s_;
      }
      puVar6 = gsSTRINGS::AsciiToUnicode(gsStrings,pcVar5);
      SetupLine(this,(*(plrPLAYER **)(local_40 + iVar3 * 4 + -4) != plrPlayer) - 1 & 2,uVar2,puVar6,
                iVar9,iVar10,iVar11);
      iVar3 = iVar3 + 1;
      uVar8 = uVar2;
    }
    local_4c = local_4c + 1;
    puVar6 = gsSTRINGS::Printf(local_54,(char *)gsStrings,s_UI_HUD_MP_TEAM,local_4c);
    SetupLine(this,1,uVar7,puVar6,local_50,(int)local_54,local_58);
    SetupLine(this,0,uVar2,(ushort *)0x0,0,0,0);
    uVar7 = uVar8 + 2;
  } while (local_4c < 2);
  for (; uVar7 < 0x11; uVar7 = uVar7 + 1) {
    SetupLine(this,1,uVar7,(ushort *)0x0,0,0,0);
  }
  iVar3 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar3;
}




/* from: wr_ui_hud.cpp
   addr: 0048B1C0 */

int __thiscall wrUIHUD_SP_WINDOW::ProcessInit(wrUIHUD_SP_WINDOW *this,void *param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_sp_time);
  *(uiELEMENT **)(this + 0x6c) = puVar2;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_sp_kills);
  *(uiELEMENT **)(this + 0x70) = puVar2;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_sp_secrets);
  *(uiELEMENT **)(this + 0x74) = puVar2;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_sp_money);
  *(uiELEMENT **)(this + 0x78) = puVar2;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_sp_fav_wheapon);
  *(uiELEMENT **)(this + 0x7c) = puVar2;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_sp_accuracy);
  *(uiELEMENT **)(this + 0x80) = puVar2;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2000;
  return 1;
}




/* from: wr_ui_hud.cpp
   addr: 0048B250 */

int __thiscall wrUIHUD_SP_WINDOW::ProcessUpdate(wrUIHUD_SP_WINDOW *this,void *param_1)

{
  uiRENDER_ELEM *puVar1;
  int iVar2;
  ushort *puVar3;
  gsSTRINGS *this_00;
  int iVar4;
  gsSTRINGS *local_8;
  gsSTRINGS *local_4;
  
  if ((*(uint *)(this + 4) & 0x2000) != 0) {
    iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar2;
  }
  wrSTAT_SYSTEM::GetMapTime(wrSysStat);
  iVar2 = ftol();
  local_4 = (gsSTRINGS *)(iVar2 / 0xe10);
  iVar4 = 0x7fffffff;
  local_8 = (gsSTRINGS *)((iVar2 / 0x3c) % 0x3c);
  puVar1 = *(uiRENDER_ELEM **)(*(int *)(this + 0x6c) + 0x118);
  puVar3 = gsSTRINGS::Printf(gsStrings,(char *)gsStrings,s_UI_HUD_SP_MAP_TIME_FMT,local_4,local_8,
                             iVar2 % 0x3c);
  uiRENDER_ELEM::SetTextW(puVar1,puVar3,iVar4);
  local_4 = (gsSTRINGS *)
            wrSTAT_SYSTEM::GetMapKills(wrSysStat,(plrPLAYER_COMMON *)plrPlayer,(int *)&local_8);
  iVar2 = 0x7fffffff;
  puVar1 = *(uiRENDER_ELEM **)(*(gsSTRINGS **)(this + 0x70) + 0x118);
  puVar3 = gsSTRINGS::Printf(*(gsSTRINGS **)(this + 0x70),(char *)gsStrings,
                             s_UI_HUD_SP_MAP_KILLS_FMT,local_4,local_8);
  uiRENDER_ELEM::SetTextW(puVar1,puVar3,iVar2);
  local_4 = (gsSTRINGS *)
            wrSTAT_SYSTEM::GetMapSecrets(wrSysStat,(plrPLAYER_COMMON *)plrPlayer,(int *)&local_8);
  iVar2 = 0x7fffffff;
  puVar1 = *(uiRENDER_ELEM **)(*(gsSTRINGS **)(this + 0x74) + 0x118);
  puVar3 = gsSTRINGS::Printf(*(gsSTRINGS **)(this + 0x74),(char *)gsStrings,
                             s_UI_HUD_SP_MAP_SECRETS_FMT,local_4,local_8);
  uiRENDER_ELEM::SetTextW(puVar1,puVar3,iVar2);
  local_4 = (gsSTRINGS *)
            wrSTAT_SYSTEM::GetMapMoney(wrSysStat,(plrPLAYER_COMMON *)plrPlayer,(int *)&local_8);
  iVar2 = 0x7fffffff;
  puVar1 = *(uiRENDER_ELEM **)(*(gsSTRINGS **)(this + 0x78) + 0x118);
  puVar3 = gsSTRINGS::Printf(*(gsSTRINGS **)(this + 0x78),(char *)gsStrings,
                             s_UI_HUD_SP_MAP_MONEY_FMT,local_4,local_8);
  uiRENDER_ELEM::SetTextW(puVar1,puVar3,iVar2);
  local_4 = (gsSTRINGS *)wrSTAT_SYSTEM::GetFavouriteWpn(wrSysStat,(plrPLAYER_COMMON *)plrPlayer);
  iVar4 = 0x7fffffff;
  puVar1 = *(uiRENDER_ELEM **)(*(int *)(this + 0x7c) + 0x118);
  iVar2 = gsSTRINGS::GetStringIdFmt(this_00,(char *)gsStrings,s_WPN__i,local_4);
  puVar3 = gsSTRINGS::GetStringById(gsStrings,iVar2);
  uiRENDER_ELEM::SetTextW(puVar1,puVar3,iVar4);
  wrSTAT_SYSTEM::GetShootAccuracy
            (wrSysStat,(plrPLAYER_COMMON *)plrPlayer,(int *)&local_8,(int *)&local_4);
  if ((int)local_8 < (int)local_4) {
    local_4 = local_8;
  }
  if (local_8 == (gsSTRINGS *)0x0) {
    iVar2 = 100;
  }
  else {
    iVar2 = ((int)local_8 / 2 + (int)local_4 * 100) / (int)local_8;
  }
  iVar4 = 0x7fffffff;
  puVar1 = *(uiRENDER_ELEM **)(*(int *)(this + 0x80) + 0x118);
  puVar3 = gsSTRINGS::Printf(local_8,(char *)gsStrings,s_UI_HUD_SP_MAP_ACCURACY_FMT,local_4,local_8,
                             iVar2);
  uiRENDER_ELEM::SetTextW(puVar1,puVar3,iVar4);
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui_hud.cpp
   addr: 0048B4A0 */

void __thiscall
wrUIHUD_UH_WINDOW::ShowPain(wrUIHUD_UH_WINDOW *this,float param_1,int param_2,ulong param_3)

{
  if ((*(float *)(this + 0x6c) < param_1) || (param_2 != 0)) {
    *(float *)(this + 0x6c) = param_1;
    *(float *)(this + 0x70) = param_1;
    if (*(int *)(this + 0x74) != 0) {
      uiRENDER_INFO::SetColor((uiRENDER_INFO *)(*(int *)(this + 0x74) + 0x6c),param_3);
    }
  }
  return;
}




/* from: wr_ui_hud.cpp
   addr: 0048B4E0 */

int __thiscall wrUIHUD_UH_WINDOW::ProcessInit(wrUIHUD_UH_WINDOW *this,void *param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_blood_pic);
  *(uiELEMENT **)(this + 0x74) = puVar2;
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_hud.cpp
   addr: 0048B510 */

int __thiscall wrUIHUD_UH_WINDOW::ProcessUpdate(wrUIHUD_UH_WINDOW *this,void *param_1)

{
  wrUIHUD_UH_WINDOW *pwVar1;
  int iVar2;
  float in_EDX;
  
  pwVar1 = this + 0x6c;
  m3dUpdateTimeField((float *)pwVar1,in_EDX);
  if (*(float *)pwVar1 != ___real_00000000) {
    uiRENDER_INFO::SetAlpha
              ((uiRENDER_INFO *)(*(int *)(this + 0x74) + 0x6c),
               (*(float *)pwVar1 / *(float *)(this + 0x70)) * ___real_437f0000);
    *(uint *)(*(int *)(this + 0x74) + 4) = *(uint *)(*(int *)(this + 0x74) + 4) & 0xffffdfff;
    iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar2;
  }
  *(uint *)(*(int *)(this + 0x74) + 4) = *(uint *)(*(int *)(this + 0x74) + 4) | 0x2000;
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui_hud.cpp
   addr: 0048B590 */

wrUIHUD_WINDOW * __thiscall wrUIHUD_WINDOW::wrUIHUD_WINDOW(wrUIHUD_WINDOW *this)

{
  int iVar1;
  wrUIHUD_WINDOW *pwVar2;
  
  uiELEMENT::uiELEMENT((uiELEMENT *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x94) = 1;
  pwVar2 = this + 0xb0;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pwVar2 = 0;
    pwVar2 = pwVar2 + 4;
  }
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0xec) = 0xffffffff;
  *(undefined4 *)(this + 0xf0) = 0xffffffff;
  *(undefined4 *)(this + 0xf8) = 0xffffffff;
  *(undefined4 *)(this + 0xf4) = 0xffffffff;
  *(undefined4 *)(this + 0xfc) = 0xffffffff;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  return this;
}




/* from: wr_ui_hud.cpp
   addr: 0048B640 */

int wrUIHUD_WINDOW::ProcessInit(wrUIHUD_WINDOW* this, uiINPUT_INFO* inputInfo)

{
  int pRender;
  txmTEXTURE *pTexture;
  int i;
  uiELEMENT *pChildElement;
  wrUIHUD_WINDOW *pSlotPtr;
  char nameBuffer [256];

  // initializes 4x4 icons 
  pTexture = txmMANAGER::Add(txmManager, key_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + keyTex) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, helf_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + healthTex) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, gold_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + goldTex) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, lopata_item_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoShovel) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, pulia_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoPistol) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, shotgun_ammo_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoShotgun) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, mashinegun_ammo_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoMCG) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, minigun_ammo_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoMinigun) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, crossbow_ammo_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoCrossbow) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, acid_ammo_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoAcid) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, atomic_ammo_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoAtomic) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, bazooka_ammo_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoBazooka) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, meduzagun_item_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoMeduza) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, pwp_bmb_ammo_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + ammoBomb) = pTexture;
  i = 0;
  pSlotPtr = this + armorTex;
  do {
    i = i + 1;
    sprintf(nameBuffer, armor_i_4x4, i);
    pTexture = txmMANAGER::Add(txmManager, nameBuffer, 0, 0xffffffff);
    *(txmTEXTURE **)pSlotPtr = pTexture;
    pSlotPtr = pSlotPtr + 4;
  } while (i < 4);
  pTexture = txmMANAGER::Add(txmManager, power_qdam_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + powerQDam) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, power_shield_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + powerShield) = pTexture;
  pTexture = txmMANAGER::Add(txmManager, power_chasi_4x4, 0, 0xffffffff);
  *(txmTEXTURE **)(this + powerChasi) = pTexture;
  i = 0;
  pSlotPtr = this + 0x84;
  do {
    i = i + 1;
    sprintf(nameBuffer, powerup_02i, i);
    pChildElement = uiELEMENT::FindChildElement((uiELEMENT *)this,nameBuffer);
    *(uiELEMENT **)pSlotPtr = pChildElement;
    *(undefined4 *)(pChildElement + 0x128) = 0xffffffff;
    if (*(int *)(pSlotPtr + 0x5c) != *(int *)(*(int *)(*(int *)pSlotPtr + 0x118) + 0xf4)) {
      *(int *)(*(int *)(*(int *)pSlotPtr + 0x118) + 0xf4) = *(int *)(pSlotPtr + 0x5c);
    }
    pSlotPtr = pSlotPtr + 4;
  } while (i < 3);
  // initializes bar icons
  pChildElement = uiELEMENT::FindChildElement((uiELEMENT *)this, key_bar);
  *(uiELEMENT **)(this + keyBar) = pChildElement;
  pChildElement = uiELEMENT::FindChildElement((uiELEMENT *)this, boss_bar);
  *(uiELEMENT **)(this + bossBar) = pChildElement;
  pChildElement = uiELEMENT::FindChildElement((uiELEMENT *)this, health_bar);
  *(uiELEMENT **)(this + healthBar) = pChildElement;
  pChildElement = uiELEMENT::FindChildElement((uiELEMENT *)this, armor_bar);
  *(uiELEMENT **)(this + armorBar) = pChildElement;
  pChildElement = uiELEMENT::FindChildElement((uiELEMENT *)this, money_bar);
  *(uiELEMENT **)(this + moneyBar) = pChildElement;
  pChildElement = uiELEMENT::FindChildElement((uiELEMENT *)this, ammo_bar);
  *(uiELEMENT **)(this + ammoBar) = pChildElement;
  pChildElement = uiELEMENT::FindChildElement((uiELEMENT *)this, underwater);
  *(uiELEMENT **)(this + underwaterBar) = pChildElement;
  *(undefined4 *)(*(int *)(this + keyBar) + 0x128) = 0;
  *(undefined4 *)(*(int *)(this + bossBar) + 0x128) = 0;
  *(undefined4 *)(*(int *)(this + healthBar) + 0x128) = 0;
  *(undefined4 *)(*(int *)(this + armorBar) + 0x128) = 0;
  *(undefined4 *)(*(int *)(this + moneyBar) + 0x128) = 0;
  *(undefined4 *)(*(int *)(this + ammoBar) + 0x128) = 0;
  // assigns 4x4 icons into bars
  if (*(int *)(this + healthTex) != *(int *)(*(int *)(*(int *)(this + healthBar) + 0x118) + 0xf4)) {
    *(int *)(*(int *)(*(int *)(this + healthBar) + 0x118) + 0xf4) = *(int *)(this + healthTex);
  }
  if (*(int *)(this + armorTex) != *(int *)(*(int *)(*(int *)(this + armorBar) + 0x118) + 0xf4)) {
    *(int *)(*(int *)(*(int *)(this + armorBar) + 0x118) + 0xf4) = *(int *)(this + armorTex);
  }
  if (*(int *)(this + goldTex) != *(int *)(*(int *)(*(int *)(this + moneyBar) + 0x118) + 0xf4)) {
    *(int *)(*(int *)(*(int *)(this + moneyBar) + 0x118) + 0xf4) = *(int *)(this + goldTex);
  }
  if (*(int *)(this + ammoShovel) != *(int *)(*(int *)(*(int *)(this + ammoBar) + 0x118) + 0xf4)) {
    *(int *)(*(int *)(*(int *)(this + ammoBar) + 0x118) + 0xf4) = *(int *)(this + ammoShovel);
  }
  if (*(int *)(this + healthTex) != *(int *)(*(int *)(*(int *)(this + bossBar) + 0x118) + 0xf4)) {
    *(int *)(*(int *)(*(int *)(this + bossBar) + 0x118) + 0xf4) = *(int *)(this + healthTex);
  }
  i = *(int *)(this + keyBar);
  pRender = *(int *)(i + 0x118);
  *(uint *)(pRender + 0x40) = *(uint *)(pRender + 0x40) | 8;
  uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(i + 0x118),1);
  if (*(int *)(this + keyTex) != *(int *)(*(int *)(*(int *)(this + keyBar) + 0x118) + 0xf4)) {
    *(int *)(*(int *)(*(int *)(this + keyBar) + 0x118) + 0xf4) = *(int *)(this + keyTex);
  }
  *(undefined4 *)(this + 0x94) = 1;
  i = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)inputInfo);
  return i;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_hud.cpp
   addr: 0048BA40 */

int __thiscall wrUIHUD_WINDOW::ProcessUpdate(wrUIHUD_WINDOW *this,void *param_1)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  plrPLAYER *ppVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  txmTEXTURE *ptVar8;
  int iVar9;
  uint uVar10;
  wrUIHUD_WINDOW *pwVar11;
  float fVar12;
  float local_4c;
  float local_48;
  int local_44;
  wchar_t local_40 [32];
  
  if (plrPlayer == (plrPLAYER *)0x0) {
    iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar5;
  }
  if ((*(uint *)(this + 4) & 0x2000) != 0) goto LAB_0048c5b2;
  if (*(int *)(this + 0x6c) != 0) {
    puVar1 = (uint *)(*(int *)(this + 0x6c) + 4);
    *puVar1 = *puVar1 | 0x2000;
  }
  *(uint *)(this + 0x94) = *(uint *)(this + 0x94) | ~*(uint *)(*(int *)(this + 0x80) + 4) >> 0xd & 1
  ;
  if (*(int *)(this + 0x80) != 0) {
    iVar5 = aiPLANNER::GetBossHealth(aiAttackPlanner,&local_48,&local_4c,&local_44);
    if (iVar5 != *(int *)(this + 0x94)) {
      *(int *)(this + 0x94) = iVar5;
      iVar9 = *(int *)(this + 0x80);
      if (iVar5 == 0) {
        uVar10 = *(uint *)(iVar9 + 4) | 0x2000;
      }
      else {
        *(undefined4 *)(iVar9 + 0x128) = 0xffffffff;
        iVar9 = *(int *)(this + 0x80);
        uVar10 = *(uint *)(iVar9 + 4) & 0xffffdfff;
      }
      *(uint *)(iVar9 + 4) = uVar10;
    }
    if (*(int *)(this + 0x94) != 0) {
      ftol();
      swprintf(local_40,u__i);
      iVar5 = *(int *)(this + 0x80);
      iVar9 = *(int *)(iVar5 + 0x118);
      uVar10 = *(uint *)(iVar9 + 0x40);
      if (local_40[0] == L'\0') {
        uVar10 = uVar10 | 8;
      }
      else {
        uVar10 = uVar10 & 0xfffffff7;
      }
      *(uint *)(iVar9 + 0x40) = uVar10;
      uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(iVar5 + 0x118),(ushort *)local_40,0x7fffffff);
      uVar10 = ftol();
      iVar5 = ftol();
      uVar6 = ftol();
      uVar7 = ftol();
      *(uint *)(*(int *)(*(int *)(this + 0x80) + 0x118) + 0xa8) =
           ((uVar10 & 0xff | iVar5 << 8) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff;
      uVar10 = ftol();
      iVar5 = ftol();
      uVar6 = ftol();
      uVar7 = ftol();
      *(uint *)(*(int *)(this + 0x80) + 0xf8) =
           ((uVar10 & 0xff | iVar5 << 8) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff;
      switch(local_44) {
      case 0x11:
        ptVar8 = txmMANAGER::Add(txmManager,s_boss_cyclop_4x4,0,0xffffffff);
        break;
      case 0x12:
        ptVar8 = txmMANAGER::Add(txmManager,s_boss_gefest_4x4,0,0xffffffff);
        break;
      case 0x13:
        ptVar8 = txmMANAGER::Add(txmManager,s_boss_meduza_4x4,0,0xffffffff);
        break;
      case 0x14:
        ptVar8 = txmMANAGER::Add(txmManager,s_boss_zeus_4x4,0,0xffffffff);
        break;
      default:
        ptVar8 = *(txmTEXTURE **)(this + 0x9c);
      }
      if (ptVar8 != *(txmTEXTURE **)(*(int *)(*(int *)(this + 0x80) + 0x118) + 0xf4)) {
        *(txmTEXTURE **)(*(int *)(*(int *)(this + 0x80) + 0x118) + 0xf4) = ptVar8;
      }
    }
  }
  ppVar4 = plrPlayer;
  if (*(int *)(this + 0x70) != 0) {
    if (((byte)plrPlayer[0x29b] & 4) == 0) {
      iVar5 = ftol();
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      iVar9 = (**(code **)(*(int *)ppVar4 + 0x78))();
      if ((iVar9 == 0) && (iVar5 == 0)) {
        iVar5 = 1;
      }
    }
    else {
      iVar5 = 9999;
    }
    if (iVar5 != *(int *)(this + 0xec)) {
      *(int *)(this + 0xec) = iVar5;
      if (((byte)plrPlayer[0x29b] & 4) == 0) {
        swprintf(local_40,u__i);
        iVar5 = *(int *)(this + 0x70);
        iVar9 = *(int *)(iVar5 + 0x118);
        uVar10 = *(uint *)(iVar9 + 0x40);
        if (local_40[0] == L'\0') {
          uVar10 = uVar10 | 8;
        }
        else {
          uVar10 = uVar10 & 0xfffffff7;
        }
        *(uint *)(iVar9 + 0x40) = uVar10;
        uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(iVar5 + 0x118),(ushort *)local_40,0x7fffffff);
      }
      else {
        iVar9 = gsSTRINGS::GetStringId(gsStrings,s_UI_HUD_GOD);
        iVar5 = *(int *)(this + 0x70);
        if ((iVar9 == 0) || (iVar9 == 1)) {
          *(uint *)(*(int *)(iVar5 + 0x118) + 0x40) = *(uint *)(*(int *)(iVar5 + 0x118) + 0x40) | 8;
          uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(iVar5 + 0x118),iVar9);
        }
        else {
          *(uint *)(*(int *)(iVar5 + 0x118) + 0x40) =
               *(uint *)(*(int *)(iVar5 + 0x118) + 0x40) & 0xfffffff7;
          uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(iVar5 + 0x118),iVar9);
        }
      }
      uVar10 = ftol();
      iVar5 = ftol();
      uVar6 = ftol();
      uVar7 = ftol();
      *(uint *)(*(int *)(*(int *)(this + 0x70) + 0x118) + 0xa8) =
           ((uVar10 & 0xff | iVar5 << 8) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff;
      uVar10 = ftol();
      iVar5 = ftol();
      uVar6 = ftol();
      uVar7 = ftol();
      *(uint *)(*(int *)(this + 0x70) + 0xf8) =
           ((uVar10 & 0xff | iVar5 << 8) << 8 | uVar6 & 0xff) << 8 | uVar7 & 0xff;
      iVar5 = *(int *)(*(int *)(this + 0x70) + 0x128);
      if (-1 < iVar5) {
        if (iVar5 < 2) {
          iVar5 = 1;
        }
        *(int *)(*(int *)(this + 0x70) + 0x128) = iVar5;
      }
    }
  }
  if ((*(int *)(this + 0x74) != 0) && (iVar5 = ftol(), iVar5 != *(int *)(this + 0xf0))) {
    *(int *)(this + 0xf0) = iVar5;
    swprintf(local_40,u__i);
    iVar5 = ftol();
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (3 < iVar5) {
      iVar5 = 3;
    }
    iVar9 = *(int *)(this + 0x74);
    iVar2 = *(int *)(iVar9 + 0x118);
    uVar10 = *(uint *)(iVar2 + 0x40);
    if (local_40[0] == L'\0') {
      uVar10 = uVar10 | 8;
    }
    else {
      uVar10 = uVar10 & 0xfffffff7;
    }
    *(uint *)(iVar2 + 0x40) = uVar10;
    uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(iVar9 + 0x118),(ushort *)local_40,0x7fffffff);
    if (*(int *)(this + iVar5 * 4 + 0xa0) !=
        *(int *)(*(int *)(*(int *)(this + 0x74) + 0x118) + 0xf4)) {
      *(int *)(*(int *)(*(int *)(this + 0x74) + 0x118) + 0xf4) = *(int *)(this + iVar5 * 4 + 0xa0);
    }
    iVar5 = *(int *)(*(int *)(this + 0x74) + 0x128);
    if (-1 < iVar5) {
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      *(int *)(*(int *)(this + 0x74) + 0x128) = iVar5;
    }
  }
  iVar5 = *(int *)(this + 0x78);
  if (iVar5 != 0) {
    if ((*(int *)(wrSysGO + 0x94) == 0) || (*(int *)(wrSysGO + 0x94) == 2)) {
      iVar5 = ftol();
      if (iVar5 != *(int *)(this + 0xf4)) {
        *(int *)(this + 0xf4) = iVar5;
        swprintf(local_40,u__i);
        iVar5 = *(int *)(this + 0x78);
        iVar9 = *(int *)(iVar5 + 0x118);
        uVar10 = *(uint *)(iVar9 + 0x40);
        if (local_40[0] == L'\0') {
          uVar10 = uVar10 | 8;
        }
        else {
          uVar10 = uVar10 & 0xfffffff7;
        }
        *(uint *)(iVar9 + 0x40) = uVar10;
        uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(iVar5 + 0x118),(ushort *)local_40,0x7fffffff);
        iVar5 = *(int *)(*(int *)(this + 0x78) + 0x128);
        if (-1 < iVar5) {
          if (iVar5 < 2) {
            iVar5 = 1;
          }
          *(int *)(*(int *)(this + 0x78) + 0x128) = iVar5;
        }
      }
      iVar5 = *(int *)(this + 0x78);
      uVar10 = *(uint *)(iVar5 + 4) & 0xffffdfff;
    }
    else {
      uVar10 = *(uint *)(iVar5 + 4) | 0x2000;
    }
    *(uint *)(iVar5 + 4) = uVar10;
  }
  if (*(int *)(this + 0x7c) == 0) goto LAB_0048c3de;
  iVar5 = *(int *)(*(int *)(plrPlayer + 0x23f) + *(int *)(plrPlayer + 0x243) * 4);
  iVar9 = ftol();
  bVar3 = false;
  if ((iVar9 != *(int *)(this + 0xf8)) || (iVar5 != *(int *)(this + 0x100))) {
    bVar3 = true;
  }
  switch(*(undefined4 *)(iVar5 + 0x94)) {
  case 0:
    wcscpy(local_40,u____);
    goto LAB_0048c329;
  case 1:
    swprintf(local_40,u______3i);
LAB_0048c329:
    if (iVar5 == *(int *)(this + 0x100)) {
      bVar3 = false;
    }
    break;
  default:
    swprintf(local_40,u__3i__3i,iVar9);
    break;
  case 3:
  case 6:
    ftol();
    swprintf(local_40,u__3i);
    if (iVar9 <= *(int *)(this + 0xf8)) goto LAB_0048c329;
  }
  *(int *)(this + 0x100) = iVar5;
  *(int *)(this + 0xf8) = iVar9;
  if (bVar3) {
    iVar9 = *(int *)(*(int *)(this + 0x7c) + 0x128);
    if (-1 < iVar9) {
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      *(int *)(*(int *)(this + 0x7c) + 0x128) = iVar9;
    }
  }
  iVar5 = *(int *)(this + *(int *)(iVar5 + 0x94) * 4 + 0xb0);
  if (iVar5 == 0) {
    iVar5 = *(int *)(this + 0xb0);
  }
  if (iVar5 != *(int *)(*(int *)(*(int *)(this + 0x7c) + 0x118) + 0xf4)) {
    *(int *)(*(int *)(*(int *)(this + 0x7c) + 0x118) + 0xf4) = iVar5;
  }
  iVar5 = *(int *)(this + 0x7c);
  iVar9 = *(int *)(iVar5 + 0x118);
  uVar10 = *(uint *)(iVar9 + 0x40);
  if (local_40[0] == L'\0') {
    uVar10 = uVar10 | 8;
  }
  else {
    uVar10 = uVar10 & 0xfffffff7;
  }
  *(uint *)(iVar9 + 0x40) = uVar10;
  uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(iVar5 + 0x118),(ushort *)local_40,0x7fffffff);
LAB_0048c3de:
  iVar5 = 0;
  pwVar11 = this + 0x84;
  do {
    if (*(int *)(plrPlayer + iVar5 + 0x2c7) == 0) {
      *(undefined4 *)(*(int *)pwVar11 + 0x128) = 0;
      puVar1 = (uint *)(*(int *)(*(int *)pwVar11 + 0x118) + 0xec);
      *puVar1 = *puVar1 | 8;
LAB_0048c513:
      iVar9 = *(int *)pwVar11;
      iVar2 = *(int *)(iVar9 + 0x118);
      *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) | 8;
      uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(iVar9 + 0x118),1);
    }
    else {
      *(uint *)(*(int *)(*(int *)pwVar11 + 0x118) + 0xec) =
           *(uint *)(*(int *)(*(int *)pwVar11 + 0x118) + 0xec) & 0xfffffff7;
      if (*(int *)(plrPlayer + iVar5 + 0x2c7) != 2) {
        *(undefined4 *)(*(int *)pwVar11 + 0x128) = 0;
        goto LAB_0048c513;
      }
      *(undefined4 *)(*(int *)pwVar11 + 0x128) = 0xffffffff;
      iVar9 = ftol();
      if (iVar9 < 6) {
        *(undefined4 *)(*(int *)(*(int *)pwVar11 + 0x118) + 0xa8) = 0xffdc0000;
      }
      else if (iVar9 < 0x10) {
        *(undefined4 *)(*(int *)(*(int *)pwVar11 + 0x118) + 0xa8) = 0xfff0dc00;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)pwVar11 + 0x118) + 0xa8) = 0xffa9b5d7;
      }
      swprintf(local_40,u__2_1f,(double)*(float *)(plrPlayer + iVar5 + 0x2cb));
      iVar9 = *(int *)pwVar11;
      iVar2 = *(int *)(iVar9 + 0x118);
      uVar10 = *(uint *)(iVar2 + 0x40);
      if (local_40[0] == L'\0') {
        uVar10 = uVar10 | 8;
      }
      else {
        uVar10 = uVar10 & 0xfffffff7;
      }
      *(uint *)(iVar2 + 0x40) = uVar10;
      uiRENDER_ELEM::SetTextW(*(uiRENDER_ELEM **)(iVar9 + 0x118),(ushort *)local_40,0x7fffffff);
    }
    iVar5 = iVar5 + 8;
    pwVar11 = pwVar11 + 4;
  } while (iVar5 < 0x18);
  if ((*(int *)(this + 0x90) != 0) &&
     (iVar5 = (**(code **)(*(int *)plrPlayer + 0x78))(), iVar5 == 0)) {
    fVar12 = plrPLAYER::GetUnderwaterTimeLeft(plrPlayer);
    if (___real_3f7d70a4 <= fVar12) {
      iVar5 = *(int *)(this + 0x90);
      uVar10 = *(uint *)(iVar5 + 4) | 0x2000;
    }
    else {
      (**(code **)(**(int **)(this + 0x90) + 0x60))(fVar12);
      *(undefined4 *)(*(int *)(this + 0x90) + 0xf8) = 0xc832c8ff;
      iVar5 = *(int *)(this + 0x90);
      uVar10 = *(uint *)(iVar5 + 4) & 0xffffdfff;
    }
    *(uint *)(iVar5 + 4) = uVar10;
  }
LAB_0048c5b2:
  iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar5;
}




/* from: wr_ui_hud.cpp
   addr: 0048C600 */

uiELEMENT * __fastcall wrUIHUD_ZOOM::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x128);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C660 */

uiELEMENT * __fastcall wrUIHUD_SLIDER::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x128);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C6C0 */

uiELEMENT * __fastcall wrUIHUD_MSG::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x140);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x134) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C730
   addr: 0048C730 */

void * __thiscall wrUIHUD_MSG::_vector_deleting_destructor_(wrUIHUD_MSG *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  apFree(*(void **)(this + 0x134));
  *(undefined ***)this = &uiAREA::_vftable_;
  iVar2 = 0;
  if (0 < *(int *)(this + 0x11c)) {
    iVar1 = 0;
    do {
      uiRENDER_ELEM::~uiRENDER_ELEM((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar1));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xac;
    } while (iVar2 < *(int *)(this + 0x11c));
  }
  apFree(*(void **)(this + 0x118));
  uiRENDER_ELEM::~uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
  *(undefined ***)this = &uiELEMENT::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_ui_hud.cpp
   addr: 0048C7C0 */

uiELEMENT * __fastcall wrUIHUD_DBGMSG::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x128);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C820 */

uiELEMENT * __fastcall wrUIHUD_ICONBAR::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x134);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    *(undefined4 *)(this + 0x130) = 0x3d800000;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C890 */

uiELEMENT * __fastcall wrUIHUD_WINDOW::Create(void)

{
  wrUIHUD_WINDOW *this;
  uiELEMENT *puVar1;
  
  this = (wrUIHUD_WINDOW *)operator_new(0x104);
  if (this != (wrUIHUD_WINDOW *)0x0) {
    puVar1 = (uiELEMENT *)wrUIHUD_WINDOW(this);
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C8B0 */

uiELEMENT * __fastcall wrUIHUD_UH_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x78);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0x3f800000;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C8F0 */

uiELEMENT * __fastcall wrUIHUD_MP_WINDOW::Create(void)

{
  uiELEMENT *this;
  int iVar1;
  uiELEMENT *puVar2;
  
  this = (uiELEMENT *)operator_new(0xac);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    puVar2 = this + 0x6c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)puVar2 = 0;
      puVar2 = puVar2 + 4;
    }
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C930 */

uiELEMENT * __fastcall wrUIHUD_COOP_WINDOW::Create(void)

{
  uiELEMENT *this;
  int iVar1;
  uiELEMENT *puVar2;
  
  this = (uiELEMENT *)operator_new(0xac);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    puVar2 = this + 0x6c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)puVar2 = 0;
      puVar2 = puVar2 + 4;
    }
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C970 */

uiELEMENT * __fastcall wrUIHUD_TH_WINDOW::Create(void)

{
  uiELEMENT *this;
  int iVar1;
  uiELEMENT *puVar2;
  
  this = (uiELEMENT *)operator_new(0xb4);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    puVar2 = this + 0x70;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)puVar2 = 0;
      puVar2 = puVar2 + 4;
    }
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui_hud.cpp
   addr: 0048C9B0 */

uiELEMENT * __fastcall wrUIHUD_SP_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x84);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x7c) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




