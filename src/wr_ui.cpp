/* from: wr_ui.cpp
   addr: 004804B0 */

void __thiscall wrUI_ANIMTEX::Init(wrUI_ANIMTEX *this,objOBJ *param_1)

{
  psSHEET *this_00;
  float fVar1;
  float fVar2;
  objOBJ *poVar3;
  int iVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  float local_4;
  
  poVar3 = param_1;
  uiAREA::Init((uiAREA *)this,param_1);
  this_00 = *(psSHEET **)(poVar3 + 0xf0);
  if (this_00 != (psSHEET *)0x0) {
    iVar4 = psSHEET::GetInt(this_00,s_UI_PROP,s_texFramesX,(int *)&param_1);
    if (iVar4 == 0) {
      param_1 = (objOBJ *)0x1;
    }
    iVar4 = psSHEET::GetInt(this_00,s_UI_PROP,s_texFramesY,&local_14);
    if (iVar4 == 0) {
      local_14 = 1;
    }
    iVar4 = psSHEET::GetInt(this_00,s_UI_PROP,s_firstFrameX,&local_c);
    if (iVar4 == 0) {
      local_c = 0;
    }
    iVar4 = psSHEET::GetInt(this_00,s_UI_PROP,s_firstFrameY,&local_8);
    if (iVar4 == 0) {
      local_8 = 0;
    }
    iVar4 = psSHEET::GetInt(this_00,s_UI_PROP,s_nFrames,&local_10);
    if (iVar4 == 0) {
      local_10 = local_14 * (int)param_1;
    }
    iVar4 = psSHEET::GetFloat(this_00,s_UI_PROP,s_frameTime,&local_4);
    if (iVar4 == 0) {
      local_4 = ___real_3f800000 / (float)local_10;
    }
    *(undefined4 *)(this + 0x128) = 0;
    fVar1 = ___real_3f800000 / (float)(int)param_1;
    *(float *)(this + 0x138) = fVar1;
    fVar2 = ___real_3f800000 / (float)local_14;
    *(float *)(this + 0x13c) = fVar2;
    *(float *)(this + 0x130) = (float)local_c * fVar1;
    *(float *)(this + 0x134) = (float)local_8 * fVar2;
    *(float *)(this + 0x144) = local_4;
    *(float *)(this + 300) = local_4;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui.cpp
   addr: 00480600 */

int __thiscall wrUI_ANIMTEX::ProcessUpdate(wrUI_ANIMTEX *this,void *param_1)

{
  float fVar1;
  int iVar2;
  float in_EDX;
  float local_4;
  
  iVar2 = m3dUpdateTimeField((float *)(this + 300),in_EDX);
  if (iVar2 != 0) {
    iVar2 = *(int *)(this + 0x128);
    *(float *)(this + 300) = *(float *)(this + 0x144);
    *(int *)(this + 0x128) = iVar2 + 1;
    if (iVar2 + 1 < *(int *)(this + 0x140)) {
      local_4 = *(float *)(this + 0xc4);
      fVar1 = *(float *)(this + 0x138) + *(float *)(this + 0xc0);
      if (___real_3f800000 < *(float *)(this + 0x138) + *(float *)(this + 0xc0)) {
        local_4 = local_4 + *(float *)(this + 0x13c);
        fVar1 = ___real_00000000;
      }
    }
    else {
      local_4 = *(float *)(this + 0x134);
      *(undefined4 *)(this + 0x128) = 0;
      fVar1 = *(float *)(this + 0x130);
    }
    *(float *)(this + 0xc0) = fVar1;
    *(float *)(this + 0xc4) = local_4;
    *(float *)(this + 0xd4) = local_4;
    *(float *)(this + 0xd0) = fVar1 + *(float *)(this + 0x138);
    *(float *)(this + 0xe0) = fVar1 + *(float *)(this + 0x138);
    *(float *)(this + 0xe4) = local_4 + *(float *)(this + 0x13c);
    *(float *)(this + 0xf0) = fVar1;
    *(float *)(this + 0xf4) = local_4 + *(float *)(this + 0x13c);
  }
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui.cpp
   addr: 00480710 */

void __thiscall wrUI_BUTTON::Init(wrUI_BUTTON *this,objOBJ *param_1)

{
  psSHEET *this_00;
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char local_40 [64];
  
  uiBUTTON::Init((uiBUTTON *)this,param_1);
  if (*(int *)(this + 300) == 0x4241434b) {
    *(undefined4 *)(this + 0x1b4) = 3;
  }
  else if (*(int *)(this + 300) == 0x414343) {
    *(undefined4 *)(this + 0x1b4) = 4;
  }
  this_00 = *(psSHEET **)(param_1 + 0xf0);
  if (this_00 != (psSHEET *)0x0) {
    psSHEET::GetStr(this_00,s_UI_PROP,s_frameID,(char *)(this + 0x174),0x40);
    iVar1 = psSHEET::GetStr(this_00,s_UI_PROP,s_sndId,local_40,0x40);
    if (iVar1 != 0) {
      iVar1 = 5;
      bVar4 = true;
      pcVar2 = local_40;
      pcVar3 = &s_back;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        *(undefined4 *)(this + 0x1b4) = 3;
        return;
      }
      iVar1 = 7;
      bVar4 = true;
      pcVar2 = local_40;
      pcVar3 = s_accept;
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = *pcVar2 == *pcVar3;
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        *(undefined4 *)(this + 0x1b4) = 4;
        return;
      }
      *(undefined4 *)(this + 0x1b4) = 2;
    }
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00480800 */

void __thiscall wrUI_BUTTON::ProcessCommand(wrUI_BUTTON *this)

{
  uiBUTTON::ProcessCommand((uiBUTTON *)this);
  if (this[0x174] != (wrUI_BUTTON)0x0) {
    (**(code **)(*(int *)uiSystem + 0x10))(this + 0x174,0);
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00480830 */

int __thiscall wrUI_BUTTON::GetActionSoundId(wrUI_BUTTON *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1b4);
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  return iVar1;
}




/* from: wr_ui.cpp
   addr: 00480840 */

ulong __thiscall wrUI_BUTTON::GetColorText(wrUI_BUTTON *this,int param_1)

{
  switch(param_1) {
  case 0:
    return 0x9c000000;
  case 1:
  case 2:
    return 0xff000000;
  case 3:
    return 0x3c000000;
  default:
    return 0;
  }
}




/* from: wr_ui.cpp
   addr: 00480880 */

int __thiscall wrUI_BUTTON::OnMouseFocus(wrUI_BUTTON *this,uiELEMENT *param_1)

{
  int iVar1;
  
  if (param_1 == (uiELEMENT *)this) {
    uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)this);
  }
  iVar1 = uiBUTTON::OnMouseFocus((uiBUTTON *)this,param_1);
  return iVar1;
}




/* from: wr_ui.cpp
   addr: 004808B0 */

void __thiscall wrUI_BUTTON_WEBSITE::ProcessCommand(wrUI_BUTTON_WEBSITE *this)

{
  int iVar1;
  wrUI_BUTTON_WEBSITE *local_4;
  
  local_4 = this;
  iVar1 = _apCfgReadBool((void **)0x0,s_Debug,s_SwitchWindow,(int *)&local_4);
  if ((iVar1 != 0) && (local_4 != (wrUI_BUTTON_WEBSITE *)0x0)) {
    ShowWindow(_apHMainWindow,6);
    ShellExecuteA((HWND)0x0,s_open,s_www_saber3d_com,(LPCSTR)0x0,(LPCSTR)0x0,1);
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00480900 */

void __thiscall
wrUI_NEWGAME_WINDOW::OnChildNotify(wrUI_NEWGAME_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  char cVar1;
  uiUI_SYSTEM *puVar2;
  int iVar3;
  char local_100 [256];
  
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == 0x45415359) {
      iVar3 = 0;
    }
    else if (iVar3 == 0x48415244) {
      iVar3 = 2;
    }
    else {
      if (iVar3 != 0x4e4f524d) goto LAB_0048098d;
      iVar3 = 1;
    }
    apCfgWriteInt(s_Multiplayer,s_Difficulty,iVar3);
    iVar3 = _apCfgReadString((void **)0x0,s_Language,s_cmsIntro,local_100,0x100);
    if (iVar3 != 0) {
      iVar3 = wrUI_COMICS_FRAME::Start((uiELEMENT *)this,0x4e455747,local_100,0);
      if (iVar3 != 0) goto LAB_0048098d;
    }
  }
  else if (*(int *)(param_1 + 4) != 0x434f4d49) {
LAB_0048098d:
    uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
    return;
  }
  iVar3 = _apCfgReadString((void **)0x0,s_Debug,s_UiNewGameLevel,local_100,0x100);
  if (iVar3 == 0) {
    do {
      cVar1 = s_test_items[iVar3];
      local_100[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
    } while (cVar1 != '\0');
  }
  iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_CANT_START_GAME);
  puVar2 = uiSystem;
  wrUI_LOADING_WND::SetParams(*(wrUI_LOADING_WND **)(uiSystem + 0x130),1,1,local_100);
  wrUI_LOADING_WND::UpdateLevelName(*(wrUI_LOADING_WND **)(puVar2 + 0x130),local_100);
  wrUI_LOADING_WND::ShowFrame(*(wrUI_LOADING_WND **)(puVar2 + 0x130));
  *(int *)(puVar2 + 0x160) = iVar3;
  return;
}




/* from: wr_ui.cpp
   addr: 00480A30 */

wrUI_SYSTEM * __thiscall wrUI_SYSTEM::wrUI_SYSTEM(wrUI_SYSTEM *this)

{
  uiUI_SYSTEM::uiUI_SYSTEM((uiUI_SYSTEM *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  return this;
}




/* from: wr_ui.cpp
   addr: 00480A90 */

char * __thiscall wrUI_SYSTEM::GetFontName(wrUI_SYSTEM *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = _apCfgReadString((void **)0x0,s_Language,s_tplFontS,(char *)&apBuffer,0x1000);
    if (iVar2 == 0) {
      do {
        pcVar1 = s_font_s + iVar2;
        *(char *)((int)&apBuffer + iVar2) = *pcVar1;
        iVar2 = iVar2 + 1;
      } while (*pcVar1 != '\0');
    }
  }
  else if (param_1 == 1) {
    iVar2 = _apCfgReadString((void **)0x0,s_Language,s_tplFontB,(char *)&apBuffer,0x1000);
    if (iVar2 == 0) {
      do {
        pcVar1 = s_font_b + iVar2;
        *(char *)((int)&apBuffer + iVar2) = *pcVar1;
        iVar2 = iVar2 + 1;
      } while (*pcVar1 != '\0');
      return (char *)&apBuffer;
    }
  }
  else {
    if (param_1 != 2) {
      return (char *)0x0;
    }
    iVar2 = _apCfgReadString((void **)0x0,s_Language,s_tplFontH,(char *)&apBuffer,0x1000);
    if (iVar2 == 0) {
      do {
        pcVar1 = s_font_h + iVar2;
        *(char *)((int)&apBuffer + iVar2) = *pcVar1;
        iVar2 = iVar2 + 1;
      } while (*pcVar1 != '\0');
      return (char *)&apBuffer;
    }
  }
  return (char *)&apBuffer;
}




/* from: wr_ui.cpp
   addr: 00480B50 */

int __thiscall wrUI_SYSTEM::RegisterDefaultElements(wrUI_SYSTEM *this)

{
  int iVar1;
  
  uiUI_SYSTEM::RegisterDefaultElements((uiUI_SYSTEM *)this);
  iVar1 = uiElementRegister(s_wr_btn,wrUI_BUTTON::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_website,wrUI_BUTTON_WEBSITE::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_newgame_wnd,wrUI_NEWGAME_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_main_wnd,wrUI_MAIN_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_igmain_wnd,wrUI_IG_MAIN_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_game_opt_wnd,wrUI_GAME_OPT_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_txt_inp,wrUI_TEXT_INPUT::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_txt_scrl,wrUI_STR_SCROLL::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_num_scrl,wrUI_NUM_SCROLL::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_wnd,wrUI_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_frm,wrUI_FRAME::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_lrec,wrUI_LS_INFO::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_wnd_load,wrUI_LOAD_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_wnd_save,wrUI_SAVE_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_scr_bar,wrUI_SCROLL_BAR::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_switch,wrUI_SWITCH::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_psetup_wnd,wrUI_PSETUP_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_vwnd,wrUI_VIDEO_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_vinfo,wrUI_VIDEO_INFO::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_cwnd,wrUI_CTRL_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_cinfo,wrUI_CTRL_INFO::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_cadv_wnd,wrUI_CADV_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_hswnd,wrUI_HSCORE_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_jinfo,wrUI_JOIN_INFO::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_join_wnd,wrUI_JOIN_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_mp_drvinit_wnd,wrUI_DRVINIT_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_mp_wait_server_wnd,wrUI_WAITSERVER_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_mp_wait_browser_wnd,wrUI_WAITBROWSER_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_mp_wait_join_wnd,wrUI_WAITJOIN_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_loading_wnd,wrUI_LOADING_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_advserv_wnd,wrUI_ADVSERV_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_asinfo,wrUI_ADVSERV_INFO::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_ipaddr_wnd,wrUI_IPADDR_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_cfrm,wrUI_CR_FRAME::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_cback,wrUI_CR_BACK::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_crosshair,wrUI_CROSSHAIR::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_awnd,wrUI_AUDIO_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_siwnd,wrUI_SI_INFO_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_sipinfo,wrUI_SI_PLAYER_INFO::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_sipwnd,wrUI_SI_PLAYER_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_igresume,wrUI_IG_RESUME::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_igframe,wrUI_IG_FRAME::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_igbtn,wrUI_IG_BUTTON::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_msgbox_wnd,wrUI_MSGBOX_WINDOW::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_animtex,wrUI_ANIMTEX::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_frm_splash,wrUI_SPLASH_FRM::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_conn_wnd,wrUI_CONN_WND::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_comics,wrUI_COMICS::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = uiElementRegister(s_wr_frm_comics,wrUI_COMICS_FRAME::Create);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = wruiHUDRegister();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_ui_snd_woofer,0x55495549,0x50,wrUI_WOOFER::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = entRegisterClass(s_wr_ui_cherep,0x55495549,0x50,wrUI_SKULL::Create,(char *)0x0,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sncLinkSndListData(5,(sncSOUND_DESCR *)&DAT_0060ec40);
  return (uint)(iVar1 != 0);
}




/* from: wr_ui.cpp
   addr: 00480FB0 */

int __thiscall wrUI_SYSTEM::Init(wrUI_SYSTEM *this)

{
  int iVar1;
  uiELEMENT *puVar2;
  uiELEMENT *puVar3;
  
  iVar1 = uiUI_SYSTEM::Init((uiUI_SYSTEM *)this);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 300),s_hud);
  puVar3 = uiELEMENT::FindChildElement(puVar2,s_hud_wnd);
  *(uiELEMENT **)(this + 0x134) = puVar3;
  puVar3 = uiELEMENT::FindChildElement(puVar2,s_hud_mp_wnd);
  *(uiELEMENT **)(this + 0x138) = puVar3;
  puVar3 = uiELEMENT::FindChildElement(puVar2,s_hud_coop_wnd);
  *(uiELEMENT **)(this + 0x148) = puVar3;
  puVar3 = uiELEMENT::FindChildElement(puVar2,s_hud_th_wnd);
  *(uiELEMENT **)(this + 0x140) = puVar3;
  puVar3 = uiELEMENT::FindChildElement(puVar2,s_hud_sp_wnd);
  *(uiELEMENT **)(this + 0x13c) = puVar3;
  puVar3 = uiELEMENT::FindChildElement(puVar2,s_hud_uh_wnd);
  *(uiELEMENT **)(this + 0x144) = puVar3;
  puVar2 = uiELEMENT::FindChildElement(puVar2,s_hud_messages);
  *(uiELEMENT **)(this + 0x14c) = puVar2;
  puVar2 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 300),s_msgbox_wnd);
  *(uiELEMENT **)(this + 0x150) = puVar2;
  puVar2 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 300),s_loading_frame);
  puVar2 = uiELEMENT::FindChildElement(puVar2,s_loading_wnd);
  *(uiELEMENT **)(this + 0x130) = puVar2;
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  return 1;
}




/* from: wr_ui.cpp
   addr: 004810B0 */

void __thiscall wrUI_SYSTEM::Term(wrUI_SYSTEM *this)

{
  if (*(pctPICTURE **)(this + 0x168) != (pctPICTURE *)0x0) {
    pctDestroy(*(pctPICTURE **)(this + 0x168));
    *(undefined4 *)(this + 0x168) = 0;
  }
  uiUI_SYSTEM::Term((uiUI_SYSTEM *)this);
  return;
}




/* from: wr_ui.cpp
   addr: 004810E0 */

int __thiscall wrUI_SYSTEM::Activate(wrUI_SYSTEM *this,int param_1,char *param_2)

{
  gsINP_SYSTEM *this_00;
  pctPICTURE *ppVar1;
  gsiCONTEXT *pgVar2;
  int iVar3;
  float extraout_ECX;
  char *pcVar4;
  bool bVar5;
  float fVar6;
  char *pcVar7;
  pctHEADER local_114 [4];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  char acStack_100 [256];
  
  if (*(int *)(this + 4) == 3) {
    local_104 = 2;
    local_108 = 1;
    local_110 = 0x80;
    local_10c = 0x80;
    if (*(pctPICTURE **)(this + 0x168) != (pctPICTURE *)0x0) {
      pctDestroy(*(pctPICTURE **)(this + 0x168));
      *(undefined4 *)(this + 0x168) = 0;
    }
    ppVar1 = pctCreate(local_114);
    *(pctPICTURE **)(this + 0x168) = ppVar1;
    if (ppVar1 != (pctPICTURE *)0x0) {
      (**(code **)(*(int *)vidDriver + 0x28))(0,ppVar1);
    }
  }
  uiUI_SYSTEM::Activate((uiUI_SYSTEM *)this,param_1,(char *)0x0);
  if (param_1 != 3) {
    if (param_2 != (char *)0x0) {
      iVar3 = 5;
      bVar5 = true;
      pcVar7 = param_2;
      pcVar4 = &s_null;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = *pcVar7 == *pcVar4;
        pcVar7 = pcVar7 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) goto LAB_00481246;
      iVar3 = (**(code **)(*(int *)this + 0x10))(param_2,8);
      if (iVar3 != 0) goto LAB_00481246;
    }
    if (param_1 == 1) {
      if (DAT_005f2aec == 0) {
        (**(code **)(*(int *)this + 0x10))(&s_main,8);
        goto LAB_00481246;
      }
      DAT_005f2aec = 0;
      iVar3 = _apCfgReadString((void **)0x0,s_Language,s_cmsLogo,acStack_100,0x100);
      if (iVar3 != 0) {
        iVar3 = wrUI_COMICS_FRAME::Start((uiELEMENT *)0x0,0,acStack_100,0);
        if (iVar3 != 0) goto LAB_00481246;
      }
      pcVar7 = &s_main;
    }
    else {
      if (param_1 != 2) goto LAB_00481246;
      pcVar7 = s_ig_main;
    }
    (**(code **)(*(int *)this + 0x10))(pcVar7,8);
LAB_00481246:
    this_00 = gsSysInput;
    pgVar2 = (gsiCONTEXT *)(**(code **)(*(int *)gsSysInput + 0x1c))(&s_UI);
    gsINP_SYSTEM::SetCurCtx(this_00,pgVar2);
    gsINP_SYSTEM::SetMouseMode(gsSysInput,1);
    (**(code **)(*(int *)this + 0x70))(0);
    fVar6 = gsMsgGetElapsedTimeScale();
    *(float *)(this + 0x164) = fVar6;
    gsMsgSetElapsedTimeScale(extraout_ECX);
    return 1;
  }
  if (param_2 != (char *)0x0) {
    iVar3 = 5;
    bVar5 = true;
    pcVar7 = &s_null;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar5 = *param_2 == *pcVar7;
      param_2 = param_2 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar5);
    if (bVar5) goto LAB_00481185;
  }
  (**(code **)(*(int *)this + 0x1c))(0);
LAB_00481185:
  (**(code **)(*(int *)this + 0x70))(0xffffffff);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui.cpp
   addr: 004812A0 */

void __thiscall wrUI_SYSTEM::Deactivate(wrUI_SYSTEM *this)

{
  bool bVar1;
  gsINP_SYSTEM *this_00;
  gsiCONTEXT *pgVar2;
  float extraout_ECX;
  float fVar3;
  char *pcStack_24;
  m3dV amStack_18 [4];
  undefined1 auStack_14 [20];
  
  if ((*(int *)(this + 4) == 3) || (*(int *)(this + 4) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  pcStack_24 = (char *)0x4812c3;
  uiUI_SYSTEM::Deactivate((uiUI_SYSTEM *)this);
  this_00 = gsSysInput;
  if (bVar1) {
    pcStack_24 = s_GAME;
    pgVar2 = (gsiCONTEXT *)(**(code **)(*(int *)gsSysInput + 0x1c))();
    gsINP_SYSTEM::SetCurCtx(this_00,pgVar2);
    gsINP_SYSTEM::SetMouseMode(gsSysInput,0);
    (**(code **)(*(int *)gsSysInput + 0x18))();
    (**(code **)(*(int *)gsSysInput + 0x18))();
    *(undefined4 *)(this + 0x158) = 0xffffffff;
    (**(code **)(*(int *)this + 0x78))();
    if (___real_00000000 < *(float *)(this + 0x164)) {
      fVar3 = gsMsgGetElapsedTimeScale();
      if (fVar3 == ___real_3f800000) {
        gsMsgSetElapsedTimeScale(extraout_ECX);
      }
      *(undefined4 *)(this + 0x164) = 0;
    }
    (**(code **)(*(int *)plrPlayer + 0x68))(&stack0xffffffe4);
    (**(code **)(*(int *)plrPlayer + 0x70))(auStack_14);
    camCAMERA::MoveTo(gsCameraPtr,(m3dV *)&pcStack_24);
    camCAMERA::SetLookAt(gsCameraPtr,amStack_18);
  }
  return;
}




/* from: wr_ui.cpp
   addr: 004813B0 */

void __thiscall wrUI_SYSTEM::ShowHudFrame(wrUI_SYSTEM *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int local_84;
  char local_80 [128];
  
  iVar1 = _apCfgReadBool((void **)0x0,s_GameOpt,s_HideHUD,&local_84);
  if (iVar1 == 0) {
    local_84 = 0;
  }
  if (param_1 == 0) {
    iVar1 = 8;
    (**(code **)(*(int *)this + 0x10))(s_hud);
    uVar2 = *(uint *)(*(int *)(this + 0x134) + 4);
    if (iVar1 == 0) {
      uVar2 = uVar2 & 0xffffdfff;
    }
    else {
      uVar2 = uVar2 | 0x2000;
    }
    *(uint *)(*(int *)(this + 0x134) + 4) = uVar2;
    *(uint *)(*(int *)(this + 0x138) + 4) = *(uint *)(*(int *)(this + 0x138) + 4) | 0x2000;
    *(uint *)(*(int *)(this + 0x140) + 4) = *(uint *)(*(int *)(this + 0x140) + 4) | 0x2000;
    *(uint *)(*(int *)(this + 0x13c) + 4) = *(uint *)(*(int *)(this + 0x13c) + 4) | 0x2000;
    *(uint *)(*(int *)(this + 0x148) + 4) = *(uint *)(*(int *)(this + 0x148) + 4) | 0x2000;
  }
  else {
    if (param_1 == 1) {
      (**(code **)(*(int *)this + 0x10))(s_hud_cross,8);
      return;
    }
    if (param_1 == 2) {
      iVar1 = _apCfgReadString((void **)0x0,s_Language,s_cmsOutro,local_80,0x80);
      if ((iVar1 != 0) &&
         (iVar1 = wrUI_COMICS_FRAME::Start((uiELEMENT *)0x0,0,local_80,0), iVar1 != 0)) {
        return;
      }
      (**(code **)(*(int *)this + 0x10))(&s_main,8);
      return;
    }
  }
  return;
}




/* from: wr_ui.cpp
   addr: 004814C0 */

int __thiscall wrUI_SYSTEM::StartAppear(wrUI_SYSTEM *this,uiRENDER_INFO *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)operator_new(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0x3e4ccccd;
    puVar1[1] = (float)(byte)param_1[0xab];
    puVar1[2] = (float)(byte)param_1[0x8f];
    *(undefined4 **)(param_1 + 0xb8) = puVar1;
    if (param_2 != 0x100) {
      uiRENDER_INFO::SetAlphaText(param_1,0.0);
      uiRENDER_INFO::SetAlpha(param_1,0.0);
    }
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui.cpp
   addr: 00481550 */

int __thiscall wrUI_SYSTEM::ProcessAppear(wrUI_SYSTEM *this,uiRENDER_INFO *param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float in_EDX;
  
  pfVar1 = *(float **)(param_1 + 0xb8);
  iVar4 = m3dUpdateTimeField(pfVar1,in_EDX);
  if (iVar4 != 0) {
    uiRENDER_INFO::SetAlphaText(param_1,pfVar1[1]);
    uiRENDER_INFO::SetAlpha(param_1,pfVar1[2]);
    operator_delete(pfVar1);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    return 0;
  }
  if (___real_00000000 <= *pfVar1) {
    if (___real_3e4ccccd < *pfVar1) {
      *pfVar1 = 0.2;
    }
  }
  else {
    *pfVar1 = 0.0;
  }
  fVar3 = (___real_3e4ccccd - *pfVar1) * pfVar1[1] * ___real_40a00000;
  fVar2 = (___real_3e4ccccd - *pfVar1) * pfVar1[2] * ___real_40a00000;
  if (param_2 == 0x100) {
    uiRENDER_INFO::SetAlphaText(param_1,pfVar1[1] - fVar3);
    uiRENDER_INFO::SetAlpha(param_1,pfVar1[2] - fVar2);
    return 1;
  }
  uiRENDER_INFO::SetAlphaText(param_1,fVar3);
  uiRENDER_INFO::SetAlpha(param_1,fVar2);
  return 1;
}




/* from: wr_ui.cpp
   addr: 00481650 */

void __thiscall wrUI_SYSTEM::FinishAppear(wrUI_SYSTEM *this,uiRENDER_INFO *param_1,int param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0xb8);
  uiRENDER_INFO::SetAlphaText(param_1,*(float *)((int)pvVar1 + 4));
  uiRENDER_INFO::SetAlpha(param_1,*(float *)((int)pvVar1 + 8));
  operator_delete(pvVar1);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui.cpp
   addr: 00481690 */

void __thiscall wrUI_SYSTEM::Update(wrUI_SYSTEM *this)

{
  int iVar1;
  uint local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8 [2];
  
  uiUI_SYSTEM::Update((uiUI_SYSTEM *)this);
  uiUI_SYSTEM::GetCursorPos(uiSystem,(m2dV *)&local_14);
  local_1c = *(undefined4 *)(gsSysInput + 0x2c);
  local_18 = *(undefined4 *)(gsSysInput + 0x30);
  uiUCoord2SCoord((m2dV *)&local_1c,(m2dV *)&local_24);
  local_28 = (uint)(ABS(local_14 - local_24) < ___real_3c23d70a);
  if (((float)local_28 == ___real_00000000) ||
     (local_28 = (uint)(ABS(local_10 - local_20) < ___real_3c23d70a),
     (float)local_28 == ___real_00000000)) {
    uiCURSOR::MoveTo((uiCURSOR *)(uiSystem + 0x14),(m2dV *)&local_24);
    local_c = 0;
    uiUI_SYSTEM::GetCursorPos(uiSystem,(m2dV *)local_8);
    (**(code **)(*(int *)uiSystem + 0x28))(&local_c);
  }
  iVar1 = *(int *)(gsSysInput + 0x40);
  if ((((*(int *)(iVar1 + 8) < 0x3a) && (0x39 < *(int *)(iVar1 + 0xc))) &&
      (*(int *)(iVar1 + 8) < 0x3a)) &&
     (((0x39 < *(int *)(iVar1 + 0xc) &&
       ((*(uint *)(*(int *)(iVar1 + 4) + (0x39 - *(int *)(iVar1 + 8)) * 0x9c) & 1) != 0)) &&
      (iVar1 = gsINP_SYSTEM::IsToggled(gsSysInput,0x39), iVar1 != 0)))) {
    local_c = 1;
    local_8[0] = 0;
    (**(code **)(*(int *)uiSystem + 0x28))(&local_c);
  }
  iVar1 = *(int *)(gsSysInput + 0x40);
  if ((((*(int *)(iVar1 + 8) < 0x3a) && (0x39 < *(int *)(iVar1 + 0xc))) &&
      ((0x39 < *(int *)(iVar1 + 8) ||
       ((*(int *)(iVar1 + 0xc) < 0x3a ||
        ((*(uint *)(*(int *)(iVar1 + 4) + (0x39 - *(int *)(iVar1 + 8)) * 0x9c) & 1) == 0)))))) &&
     (iVar1 = gsINP_SYSTEM::IsToggled(gsSysInput,0x39), iVar1 != 0)) {
    local_c = 2;
    local_8[0] = 0;
    (**(code **)(*(int *)uiSystem + 0x28))(&local_c);
  }
  if (*(int *)(this + 4) == 3) {
    if (*(int *)(gsSysMP + 0x28) == 1) {
      iVar1 = *(int *)(gsSysInput + 0x40);
      if ((((((*(int *)(iVar1 + 8) < 0x29) && (0x28 < *(int *)(iVar1 + 0xc))) &&
            (*(int *)(iVar1 + 8) < 0x29)) &&
           ((0x28 < *(int *)(iVar1 + 0xc) &&
            ((*(uint *)(*(int *)(iVar1 + 4) + (0x28 - *(int *)(iVar1 + 8)) * 0x9c) & 1) != 0)))) &&
          (*(int *)(iVar1 + 8) < 0x29)) &&
         ((0x28 < *(int *)(iVar1 + 0xc) &&
          ((*(uint *)(*(int *)(iVar1 + 4) + (0x28 - *(int *)(iVar1 + 8)) * 0x9c) & 2) != 0)))) {
        (**(code **)(*(int *)this + 0x88))(0);
      }
      else {
        iVar1 = *(int *)(gsSysInput + 0x40);
        if (((*(int *)(iVar1 + 8) < 0x2a) &&
            (((0x29 < *(int *)(iVar1 + 0xc) && (*(int *)(iVar1 + 8) < 0x2a)) &&
             (0x29 < *(int *)(iVar1 + 0xc))))) &&
           (((*(uint *)(*(int *)(iVar1 + 4) + (0x29 - *(int *)(iVar1 + 8)) * 0x9c) & 1) != 0 &&
            (iVar1 = gsINP_SYSTEM::IsToggled(gsSysInput,0x29), iVar1 != 0)))) {
          (**(code **)(*(int *)this + 0x8c))();
        }
      }
      if (((gsAppState & 0x80000U) == 0) &&
         (((iVar1 = *(int *)(gsSysInput + 0x40), 0x27 < *(int *)(iVar1 + 8) ||
           (*(int *)(iVar1 + 0xc) < 0x28)) ||
          ((*(uint *)(*(int *)(iVar1 + 4) + (0x27 - *(int *)(iVar1 + 8)) * 0x9c) & 1) == 0)))) {
        *(uint *)(*(int *)(this + 0x13c) + 4) = *(uint *)(*(int *)(this + 0x13c) + 4) | 0x2000;
        return;
      }
      *(uint *)(*(int *)(this + 0x13c) + 4) = *(uint *)(*(int *)(this + 0x13c) + 4) & 0xffffdfff;
      return;
    }
    iVar1 = (**(code **)(*(int *)plrPlayer + 0x78))();
    if ((iVar1 != 0) || ((gsAppState & 0x80000U) != 0)) {
      plrPLAYER::ClearZoom(plrPlayer);
    }
    iVar1 = *(int *)(gsSysInput + 0x40);
    if ((((*(int *)(iVar1 + 8) < 0x28) && (0x27 < *(int *)(iVar1 + 0xc))) &&
        ((*(uint *)(*(int *)(iVar1 + 4) + (0x27 - *(int *)(iVar1 + 8)) * 0x9c) & 1) != 0)) ||
       ((iVar1 = (**(code **)(*(int *)plrPlayer + 0x78))(), iVar1 != 0 ||
        ((gsAppState & 0x80000U) != 0)))) {
      iVar1 = *(int *)(wrSysGO + 0x94);
      if (iVar1 == 1) {
        *(uint *)(*(int *)(this + 0x138) + 4) = *(uint *)(*(int *)(this + 0x138) + 4) & 0xffffdfff;
      }
      else {
        if (iVar1 == 2) {
          *(uint *)(*(int *)(this + 0x148) + 4) = *(uint *)(*(int *)(this + 0x148) + 4) & 0xffffdfff
          ;
          return;
        }
        if (iVar1 == 3) {
          *(uint *)(*(int *)(this + 0x140) + 4) = *(uint *)(*(int *)(this + 0x140) + 4) & 0xffffdfff
          ;
          return;
        }
      }
    }
    else {
      iVar1 = *(int *)(wrSysGO + 0x94);
      if (iVar1 == 1) {
        *(uint *)(*(int *)(this + 0x138) + 4) = *(uint *)(*(int *)(this + 0x138) + 4) | 0x2000;
        return;
      }
      if (iVar1 == 2) {
        *(uint *)(*(int *)(this + 0x148) + 4) = *(uint *)(*(int *)(this + 0x148) + 4) | 0x2000;
        return;
      }
      if (iVar1 == 3) {
        *(uint *)(*(int *)(this + 0x140) + 4) = *(uint *)(*(int *)(this + 0x140) + 4) | 0x2000;
        return;
      }
    }
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00481AD0 */

void __thiscall
wrUI_SYSTEM::MsgBoxW
          (wrUI_SYSTEM *this,ushort *param_1,ushort *param_2,int param_3,int param_4,
          uiELEMENT *param_5,char *param_6)

{
  wrUI_MSGBOX_WINDOW::Initialize
            (*(wrUI_MSGBOX_WINDOW **)(this + 0x150),param_5,param_3,param_4,param_6);
  wrUI_MSGBOX_WINDOW::SetCaptionText(*(wrUI_MSGBOX_WINDOW **)(this + 0x150),param_1);
  wrUI_MSGBOX_WINDOW::SetMessageText(*(wrUI_MSGBOX_WINDOW **)(this + 0x150),param_2);
  uiFRAME_GROUP::ShowFrame(*(uiFRAME_GROUP **)(this + 300),s_msgbox,0);
  return;
}




/* from: wr_ui.cpp
   addr: 00481B30 */

void __thiscall
wrUI_SYSTEM::MsgBoxW_Startup
          (wrUI_SYSTEM *this,ushort *param_1,ushort *param_2,int param_3,int param_4,
          uiELEMENT *param_5,char *param_6)

{
  wrUI_MSGBOX_WINDOW::Initialize
            (*(wrUI_MSGBOX_WINDOW **)(this + 0x150),param_5,param_3,param_4,param_6);
  wrUI_MSGBOX_WINDOW::SetCaptionText(*(wrUI_MSGBOX_WINDOW **)(this + 0x150),param_1);
  wrUI_MSGBOX_WINDOW::SetMessageText(*(wrUI_MSGBOX_WINDOW **)(this + 0x150),param_2);
  uiFRAME_GROUP::ShowFrame(*(uiFRAME_GROUP **)(this + 300),s_msgbox,8);
  return;
}




/* from: wr_ui.cpp
   addr: 00481B90 */

void __thiscall wrUI_SYSTEM::PlayAmbientMusic(wrUI_SYSTEM *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x154);
  if (iVar1 != 0) {
    if (param_1 == -1) {
      if ((sndSystem != (sndSYSTEM *)0x0) && (*(int *)(iVar1 + 0x17f) != -1)) {
        (**(code **)(*(int *)sndSystem + 0x4c))
                  (*(undefined4 *)(iVar1 + 0x173 + *(int *)(iVar1 + 0x17f) * 4));
      }
      *(undefined4 *)(iVar1 + 0x17f) = 0xffffffff;
      return;
    }
    if (sndSystem != (sndSYSTEM *)0x0) {
      (**(code **)(*(int *)sndSystem + 0x48))(*(undefined4 *)(iVar1 + 0x173 + param_1 * 4),0);
    }
    *(int *)(iVar1 + 0x17f) = param_1;
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00481C00 */

int __thiscall wrUI_SYSTEM::IsSndPlaying(wrUI_SYSTEM *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0x154);
  if (iVar1 == 0) {
    return 0;
  }
  iVar4 = 0;
  piVar2 = (int *)(iVar1 + 0x15f);
  do {
    if (*piVar2 == param_1) {
      iVar3 = sncCHANNEL::IsPlay(*(sncCHANNEL **)(iVar1 + 0x14f + iVar4 * 4),-1);
      if (iVar3 == 0) {
        *(undefined4 *)(iVar1 + 0x15f + iVar4 * 4) = 0xffffffff;
        return 0;
      }
      return 1;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar4 < 4);
  return 0;
}




/* from: wr_ui.cpp
   addr: 00481C60 */

int __thiscall wrUI_SYSTEM::PlaySnd(wrUI_SYSTEM *this,int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((*(int *)(this + 0x128) == 0) && (iVar1 = *(int *)(this + 0x154), iVar1 != 0)) {
    iVar4 = 0;
    puVar3 = (undefined4 *)(iVar1 + 0x14f);
    do {
      iVar2 = sncCHANNEL::IsPlay((sncCHANNEL *)*puVar3,-1);
      if (iVar2 == 0) {
        if (3 < iVar4) {
          return -1;
        }
        *(undefined4 *)(iVar1 + 0x15f + iVar4 * 4) = *(undefined4 *)(iVar1 + 0x16f);
        (**(code **)(**(int **)(iVar1 + 0x14f + iVar4 * 4) + 4))(&DAT_0060ec40 + param_1 * 0x60,0);
        iVar4 = *(int *)(iVar1 + 0x16f);
        *(int *)(iVar1 + 0x16f) = iVar4 + 1;
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 4);
    return -1;
  }
  return -1;
}




/* from: wr_ui.cpp
   addr: 00481CF0 */

int __thiscall wrUI_SYSTEM::PlaySnd(wrUI_SYSTEM *this,sncSOUND_DESCR *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (((*(int *)(this + 0x128) == 0) && (iVar1 = *(int *)(this + 0x154), iVar1 != 0)) &&
     (param_1 != (sncSOUND_DESCR *)0x0)) {
    iVar4 = 0;
    puVar3 = (undefined4 *)(iVar1 + 0x14f);
    do {
      iVar2 = sncCHANNEL::IsPlay((sncCHANNEL *)*puVar3,-1);
      if (iVar2 == 0) {
        if (3 < iVar4) {
          return -1;
        }
        *(undefined4 *)(iVar1 + 0x15f + iVar4 * 4) = *(undefined4 *)(iVar1 + 0x16f);
        (**(code **)(**(int **)(iVar1 + 0x14f + iVar4 * 4) + 4))(param_1,0);
        iVar4 = *(int *)(iVar1 + 0x16f);
        *(int *)(iVar1 + 0x16f) = iVar4 + 1;
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 4);
    return -1;
  }
  return -1;
}




/* from: wr_ui.cpp
   addr: 00481D80 */

void __thiscall wrUI_SYSTEM::StopSnd(wrUI_SYSTEM *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(this + 0x154) != 0) {
    puVar1 = (undefined4 *)(*(int *)(this + 0x154) + 0x14f);
    iVar2 = 4;
    do {
      if (puVar1[4] == param_1) {
        puVar1[4] = 0xffffffff;
        (**(code **)(*(int *)*puVar1 + 0xc))();
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00481DC0 */

void __thiscall wrUI_SYSTEM::StopAllSnd(wrUI_SYSTEM *this)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(this + 0x154) != 0) {
    puVar1 = (undefined4 *)(*(int *)(this + 0x154) + 0x14f);
    iVar2 = 4;
    do {
      puVar1[4] = 0xffffffff;
      (**(code **)(*(int *)*puVar1 + 0xc))();
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00481DF0 */

void __thiscall wrUI_SYSTEM::QuickSave(wrUI_SYSTEM *this,int param_1)

{
  int iVar1;
  pctPICTURE *ppVar2;
  uiELEMENT *puVar3;
  pctHEADER local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    iVar1 = plrPLAYER::IsCanSaveNow(plrPlayer);
    if (iVar1 != 0) {
      if (*(int *)(this + 4) == 3) {
        local_4 = 2;
        local_8 = 1;
        local_10 = 0x80;
        local_c = 0x80;
        if (*(pctPICTURE **)(this + 0x168) != (pctPICTURE *)0x0) {
          pctDestroy(*(pctPICTURE **)(this + 0x168));
          *(undefined4 *)(this + 0x168) = 0;
        }
        ppVar2 = pctCreate(local_14);
        *(pctPICTURE **)(this + 0x168) = ppVar2;
        if (ppVar2 != (pctPICTURE *)0x0) {
          (**(code **)(*(int *)vidDriver + 0x28))(0,ppVar2);
        }
      }
      puVar3 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 300),s_save_frame);
      puVar3 = uiELEMENT::FindChildElement(puVar3,s_save_wnd);
      wrUI_SAVE_WINDOW::QuickSave((wrUI_SAVE_WINDOW *)puVar3,param_1);
    }
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00481EB0 */

void __thiscall wrUI_SYSTEM::QuickLoadLast(wrUI_SYSTEM *this)

{
  gsSTRINGS *this_00;
  int iVar1;
  uiELEMENT *puVar2;
  
  if (((byte)gsSysCinema[0x80] & 1) == 0) {
    iVar1 = plrPLAYER::IsCanLoadNow(plrPlayer);
    if (iVar1 != 0) {
      puVar2 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 300),s_load_frame);
      puVar2 = uiELEMENT::FindChildElement(puVar2,s_load_wnd);
      (**(code **)(*(int *)uiSystem + 0x38))(1,&s_null);
      iVar1 = wrUI_LOAD_WINDOW::LoadLastSave((wrUI_LOAD_WINDOW *)puVar2);
      if (iVar1 == 0) {
        (**(code **)(*(int *)uiSystem + 0x38))(3,0);
      }
      this_00 = gsStrings;
      iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_QUICKLOAD);
      gsSTRINGS::GetStringById(this_00,iVar1);
    }
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00481F40 */

void __thiscall wrUI_SYSTEM::ShowPlayerPain(wrUI_SYSTEM *this,int param_1,ulong param_2)

{
  if (param_1 != 0) {
    wrUIHUD_UH_WINDOW::ShowPain(*(wrUIHUD_UH_WINDOW **)(this + 0x144),0.3,0,param_2);
    return;
  }
  wrUIHUD_UH_WINDOW::ShowPain(*(wrUIHUD_UH_WINDOW **)(this + 0x144),0.0,1,0);
  return;
}




/* from: wr_ui.cpp
   addr: 00481F70 */

void __thiscall
wrUI_SYSTEM::StartLoadingAction(wrUI_SYSTEM *this,int param_1,int param_2,char *param_3,int param_4)

{
  wrUI_LOADING_WND::SetParams(*(wrUI_LOADING_WND **)(this + 0x130),param_1,param_2,param_3);
  wrUI_LOADING_WND::UpdateLevelName(*(wrUI_LOADING_WND **)(this + 0x130),param_3);
  wrUI_LOADING_WND::ShowFrame(*(wrUI_LOADING_WND **)(this + 0x130));
  *(int *)(this + 0x160) = param_4;
  return;
}




/* from: wr_ui.cpp
   addr: 00481FC0 */

void __thiscall wrUI_SYSTEM::ShowLoadingScreen(wrUI_SYSTEM *this,char *param_1)

{
  int iVar1;
  
  iVar1 = wrUI_LOADING_WND::IsActive(*(wrUI_LOADING_WND **)(this + 0x130));
  if (iVar1 == 0) {
    wrUI_LOADING_WND::SetParams(*(wrUI_LOADING_WND **)(this + 0x130),0,-1,param_1);
    wrUI_LOADING_WND::UpdateLevelName(*(wrUI_LOADING_WND **)(this + 0x130),param_1);
    wrUI_LOADING_WND::ShowFrame(*(wrUI_LOADING_WND **)(this + 0x130));
    *(undefined4 *)(this + 0x160) = 0;
  }
  wrUI_LOADING_WND::UpdateLevelName(*(wrUI_LOADING_WND **)(this + 0x130),param_1);
  return;
}




/* from: wr_ui.cpp
   addr: 00482020 */

void __thiscall wrUI_SYSTEM::HideLoadingScreen(wrUI_SYSTEM *this,int param_1)

{
  gsSTRINGS *this_00;
  int iVar1;
  ushort *puVar2;
  char *pcVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  
  iVar1 = wrUI_LOADING_WND::IsActive(*(wrUI_LOADING_WND **)(this + 0x130));
  if (iVar1 != 0) {
    (**(code **)(*(int *)this + 0x24))();
    if (param_1 != 0) {
      if (*(int *)(this + 0x160) != 0) {
        (**(code **)(*(int *)this + 0x38))(1,&s_null);
        this_00 = gsStrings;
        iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERROR);
        puVar2 = gsSTRINGS::GetStringById(this_00,iVar1);
        iVar1 = *(int *)this;
        puVar8 = &s_main;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        pcVar3 = wrUI_LOADING_WND::GetLevelName(*(wrUI_LOADING_WND **)(this + 0x130));
        puVar4 = gsSTRINGS::Printf(gsStrings,(int)gsStrings,*(undefined4 *)(this + 0x160),pcVar3,
                                   uVar5,uVar6,uVar7,puVar8);
        (**(code **)(iVar1 + 0x14))(puVar2,puVar4);
        return;
      }
      (**(code **)(*(int *)this + 0x38))(1,0);
      return;
    }
    (**(code **)(*(int *)this + 0x38))(3,0);
  }
  return;
}




/* from: wr_ui.cpp
   addr: 004820D0 */

void __thiscall wrUI_SYSTEM::GetNextMpLevel(wrUI_SYSTEM *this,char *param_1,int param_2)

{
  uiELEMENT *this_00;
  
  this_00 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 300),s_adv_server_wnd);
  wrUI_ADVSERV_WINDOW::GetNextLocation((wrUI_ADVSERV_WINDOW *)this_00,param_1,param_2);
  return;
}




/* from: wr_ui.cpp
   addr: 004820F0 */

void * __thiscall
wrsfxDESTROY_VASE::_scalar_deleting_destructor_(wrsfxDESTROY_VASE *this,uint param_1)

{
  gsDOMAIN_LIST::~gsDOMAIN_LIST((gsDOMAIN_LIST *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_ui.cpp
   addr: 00482110 */

int __thiscall
wrUI_WOOFER::ProcessMsg(wrUI_WOOFER *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  int iVar1;
  wrUI_WOOFER *pwVar2;
  
  if (param_1 == 1) {
    ProcessINIT(this);
  }
  else if (param_1 == 2) {
    if ((sndSystem != (sndSYSTEM *)0x0) && (*(int *)(this + 0x17f) != -1)) {
      (**(code **)(*(int *)sndSystem + 0x4c))
                (*(undefined4 *)(this + *(int *)(this + 0x17f) * 4 + 0x173));
    }
    *(undefined4 *)(this + 0x17f) = 0xffffffff;
    pwVar2 = this + 0x173;
    iVar1 = 3;
    do {
      operator_delete(*(void **)pwVar2);
      *(undefined4 *)pwVar2 = 0;
      pwVar2 = pwVar2 + 4;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined4 *)(this + 0x17f) = 0xffffffff;
    *(undefined4 *)(uiSystem + 0x154) = 0;
    return 0;
  }
  return 0;
}




/* from: wr_ui.cpp
   addr: 004821A0 */

void __thiscall wrUI_WOOFER::ProcessINIT(wrUI_WOOFER *this)

{
  sncCHANNEL *psVar1;
  undefined4 *puVar2;
  int iVar3;
  wrUI_WOOFER *pwVar4;
  
  iVar3 = 4;
  pwVar4 = this + 0x14f;
  do {
    psVar1 = (sncCHANNEL *)operator_new(0x74);
    if (psVar1 == (sncCHANNEL *)0x0) {
      psVar1 = (sncCHANNEL *)0x0;
    }
    else {
      psVar1 = (sncCHANNEL *)sncCHANNEL::sncCHANNEL(psVar1);
    }
    *(sncCHANNEL **)pwVar4 = psVar1;
    sncCHANNEL::EnableMute(psVar1,0,0);
    gsSND_SYSTEM::AddChannel(gsSysSound,*(sncCHANNEL **)pwVar4,(entIACTIVE_OBJ *)this,(objOBJ *)0x0)
    ;
    pwVar4 = pwVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = (undefined4 *)operator_new(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
  }
  *(undefined4 **)(this + 0x173) = puVar2;
  apNAME::SetName((apNAME *)(puVar2 + 1),s_i_wanna_rock);
  **(uint **)(this + 0x173) = **(uint **)(this + 0x173) | 1;
  *(undefined4 *)(*(int *)(this + 0x173) + 0x44) = 0;
  puVar2 = (undefined4 *)operator_new(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
  }
  *(undefined4 **)(this + 0x177) = puVar2;
  apNAME::SetName((apNAME *)(puVar2 + 1),s_intro);
  **(uint **)(this + 0x177) = **(uint **)(this + 0x177) | 2;
  *(undefined4 *)(*(int *)(this + 0x177) + 0x44) = 0;
  puVar2 = (undefined4 *)operator_new(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
  }
  *(undefined4 **)(this + 0x17b) = puVar2;
  apNAME::SetName((apNAME *)(puVar2 + 1),&s_outro);
  **(uint **)(this + 0x17b) = **(uint **)(this + 0x17b) | 2;
  *(undefined4 *)(*(int *)(this + 0x17b) + 0x44) = 0;
  *(undefined4 *)(this + 0x17f) = 0xffffffff;
  *(wrUI_WOOFER **)(uiSystem + 0x154) = this;
  return;
}




/* from: wr_ui.cpp
   addr: 004822F0 */

int wrUI_SKULL::ProcessMsg(wrUI_SKULL *this,int messageType,void *param_2,msgADDR *param_3,int *param_4)

{
  objOBJ *skullObj;
  objMOD_TEX_FRAME_ANIM *texAnimMod;
  float randSeedFallback;
  float randSeedInit;
  float randSeed;
  int frameCount;
  float animWidth;
  float animHeight;
  int isLoop;
  
  if (messageType == 1) {
    skullObj = objFindNameN(*(objOBJ **)(*(int *)(this + 0xbc) + 0x10), cherep, 6);
    if (skullObj != (objOBJ *)0x0) {
      texAnimMod = (objMOD_TEX_FRAME_ANIM *)operator_new(0x4c);
      if (texAnimMod == (objMOD_TEX_FRAME_ANIM *)0x0) {
        texAnimMod = (objMOD_TEX_FRAME_ANIM *)0x0;
        randSeed = randSeedFallback;
      }
      else {
        texAnimMod = (objMOD_TEX_FRAME_ANIM *)objMOD_TEX_FRAME_ANIM::objMOD_TEX_FRAME_ANIM(texAnimMod, 0);
        randSeed = randSeedInit;
      }
      isLoop = 1; // if disabled, animates once then stops
      animHeight = 128.0f;
      animWidth = 128.0f;
      frameCount = 16;
      randSeed = m3dRandMax(randSeed);
      objMOD_TEX_FRAME_ANIM::SetParams(texAnimMod, 4, 4, 2.0f, randSeed, frameCount, animWidth, animHeight, isLoop); // 4x4 frames, 2.0 speed multiplier (below=fast, above=slow)
      (**(code **)(*(int *)texAnimMod + 4))(skullObj);
    }
  }
  return 0;
}




/* from: wr_ui.cpp
   addr: 00482370 */

int __fastcall _uiGetLevelNameStrId(char *param_1,int *param_2,int *param_3,int param_4)

{
  char *pcVar1;
  char *_Count;
  int iVar2;
  char local_40 [64];
  
  pcVar1 = strrchr(param_1,0x5c);
  if (pcVar1 != (char *)0x0) {
    param_1 = pcVar1 + 1;
  }
  pcVar1 = strchr(param_1,0x2e);
  if (pcVar1 != (char *)0x0) {
    pcVar1 = pcVar1 + (1 - (int)param_1);
    _Count = (char *)0x40;
    if ((int)pcVar1 < 0x41) {
      _Count = pcVar1;
    }
    strncpy(local_40,param_1,(size_t)_Count);
    if (0x40 < (int)pcVar1) {
      pcVar1 = (char *)0x40;
    }
    local_40[(int)(pcVar1 + -1)] = '\0';
    param_1 = local_40;
  }
  iVar2 = gsSTRINGS::GetStringIdFmt(gsStrings,(char *)gsStrings,s_GAME_MP_MAP__s,param_1);
  if (iVar2 == 0) {
    *param_2 = 1;
    *param_3 = 1;
    return 0;
  }
  *param_2 = iVar2;
  *param_3 = 1;
  return 1;
}




/* from: wr_ui.cpp
   addr: 00482420 */

void * __thiscall
wrUIHUD_MP_WINDOW::_scalar_deleting_destructor_(wrUIHUD_MP_WINDOW *this,uint param_1)

{
  *(undefined ***)this = &uiELEMENT::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_ui.cpp
   addr: 00482470 */

uiELEMENT * __fastcall wrUI_BUTTON::Create(void)

{
  uiELEMENT *this;
  uiELEMENT *puVar1;
  int iVar2;
  
  this = (uiELEMENT *)operator_new(0x1b8);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined ***)this = &uiAREA::_vftable_;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    puVar1 = this + 0x130;
    iVar2 = 4;
    do {
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      puVar1 = puVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(this + 0x170) = 0xffffffff;
    *(undefined4 *)(this + 0x1b4) = 0;
    *(undefined ***)this = &_vftable_;
    this[0x174] = (uiELEMENT)0x0;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482520 */

uiFONT * __thiscall wrUI_BUTTON::GetFont(wrUI_BUTTON *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uiFONT *puVar3;
  
  iVar1 = *(int *)uiSystem;
  uVar2 = (**(code **)(iVar1 + 0x50))(1);
  puVar3 = (uiFONT *)(**(code **)(iVar1 + 0x54))(uVar2);
  return puVar3;
}




/* from: wr_ui.cpp
   addr: 00482540 */

uiELEMENT * __fastcall wrUI_IG_BUTTON::Create(void)

{
  uiELEMENT *this;
  uiELEMENT *puVar1;
  int iVar2;
  
  this = (uiELEMENT *)operator_new(0x1f8);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined ***)this = &uiAREA::_vftable_;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    puVar1 = this + 0x130;
    iVar2 = 4;
    do {
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      puVar1 = puVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(this + 0x170) = 0xffffffff;
    *(undefined4 *)(this + 0x1b4) = 0;
    this[0x174] = (uiELEMENT)0x0;
    *(undefined ***)this = &_vftable_;
    this[0x1b8] = (uiELEMENT)0x0;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 004825E0 */

uiELEMENT * __fastcall wrUI_BUTTON_WEBSITE::Create(void)

{
  uiELEMENT *this;
  uiELEMENT *puVar1;
  int iVar2;
  
  this = (uiELEMENT *)operator_new(0x1b8);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined ***)this = &uiAREA::_vftable_;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    puVar1 = this + 0x130;
    iVar2 = 4;
    do {
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      puVar1 = puVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(this + 0x170) = 0xffffffff;
    *(undefined4 *)(this + 0x1b4) = 0;
    this[0x174] = (uiELEMENT)0x0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482680 */

uiELEMENT * __fastcall wrUI_TEXT_INPUT::Create(void)

{
  uiTEXT_INPUT *this;
  
  this = (uiTEXT_INPUT *)operator_new(0x140);
  if (this != (uiTEXT_INPUT *)0x0) {
    uiTEXT_INPUT::uiTEXT_INPUT(this);
    *(undefined ***)this = &_vftable_;
    return (uiELEMENT *)this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 004826C0 */

void __thiscall uiTEXT_INPUT::SetMaxLenght(uiTEXT_INPUT *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = param_1 + 2;
  *(int *)(this + 0x138) = param_1;
  if (*(int *)(this + 0x130) < iVar1) {
    if (iVar1 < *(int *)(this + 300)) {
      *(int *)(this + 300) = iVar1;
    }
    pvVar2 = apRealloc(*(void **)(this + 0x128),iVar1 * 2);
    *(void **)(this + 0x128) = pvVar2;
    *(int *)(this + 0x130) = iVar1;
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00482740
   addr: 00482740
   addr: 00482740
   addr: 00482740
   addr: 00482740
   addr: 00482740 */

void * __thiscall uiTEXT_INPUT::_scalar_deleting_destructor_(uiTEXT_INPUT *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  apFree(*(void **)(this + 0x128));
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




/* from: wr_ui.cpp
   addr: 004827D0 */

uiELEMENT * __fastcall wrUI_ANIMTEX::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x148);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 300) = 0x3f800000;
    *(undefined4 *)(this + 0x138) = 0x3f800000;
    *(undefined4 *)(this + 0x13c) = 0x3f800000;
    *(undefined4 *)(this + 0x144) = 0x3f800000;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 0x130) = 0;
    *(undefined4 *)(this + 0x134) = 0;
    *(undefined4 *)(this + 0x140) = 1;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482860 */

uiELEMENT * __fastcall wrUI_STR_SCROLL::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x150);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    arrVector<class_uiRENDER_ELEM>::Resize((arrVector<class_uiRENDER_ELEM> *)(this + 0x118),0);
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
    *(undefined4 *)(this + 0x144) = 0;
    *(undefined4 *)(this + 0x14c) = 0;
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 004828F0 */

void __thiscall
arrVector<class_uiRENDER_ELEM>::Resize(arrVector<class_uiRENDER_ELEM> *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < *(int *)(this + 4)) {
    iVar2 = param_1 * 0xac;
    iVar3 = param_1;
    do {
      uiRENDER_ELEM::~uiRENDER_ELEM((uiRENDER_ELEM *)(*(int *)this + iVar2));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xac;
    } while (iVar3 < *(int *)(this + 4));
    *(int *)(this + 4) = param_1;
    return;
  }
  if (*(int *)(this + 4) < param_1) {
    if (*(int *)(this + 8) < param_1) {
      pvVar1 = apRealloc(*(void **)this,param_1 * 0xac);
      *(void **)this = pvVar1;
      *(int *)(this + 8) = param_1;
    }
    iVar3 = *(int *)(this + 4);
    if (iVar3 < param_1) {
      iVar2 = iVar3 * 0xac;
      iVar3 = param_1 - iVar3;
      do {
        if ((uiRENDER_ELEM *)(*(int *)this + iVar2) != (uiRENDER_ELEM *)0x0) {
          uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(*(int *)this + iVar2));
        }
        iVar2 = iVar2 + 0xac;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: wr_ui.cpp
   addr: 004829C0
   addr: 004829C0 */

void * __thiscall wrUI_STR_SCROLL::_vector_deleting_destructor_(wrUI_STR_SCROLL *this,uint param_1)

{
  int iVar1;
  wrUI_STR_SCROLL *pwVar2;
  int iVar3;
  
  if (this == (wrUI_STR_SCROLL *)0x0) {
    pwVar2 = (wrUI_STR_SCROLL *)0x0;
  }
  else {
    pwVar2 = this + 0x138;
  }
  apFree(*(void **)(pwVar2 + 0xc));
  apFree(*(void **)pwVar2);
  *(undefined ***)this = &uiAREA::_vftable_;
  iVar3 = 0;
  if (0 < *(int *)(this + 0x11c)) {
    iVar1 = 0;
    do {
      uiRENDER_ELEM::~uiRENDER_ELEM((uiRENDER_ELEM *)(*(int *)(this + 0x118) + iVar1));
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0xac;
    } while (iVar3 < *(int *)(this + 0x11c));
  }
  apFree(*(void **)(this + 0x118));
  uiRENDER_ELEM::~uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
  *(undefined ***)this = &uiELEMENT::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_ui.cpp
   addr: 00482A60 */

uiELEMENT * __fastcall wrUI_NUM_SCROLL::Create(void)

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
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482AD0 */

void __thiscall wrUI_NUM_SCROLL::SetCurInt(wrUI_NUM_SCROLL *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00482aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x60))();
  return;
}




/* from: wr_ui.cpp
   addr: 00482B10 */

uiELEMENT * __fastcall wrUI_SWITCH::Create(void)

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
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482B80 */

uiELEMENT * __fastcall wrUI_CROSSHAIR::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x138);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482BE0 */

uiELEMENT * __fastcall wrUI_SCROLL_BAR::Create(void)

{
  wrUI_SCROLL_BAR *this;
  uiELEMENT *puVar1;
  
  this = (wrUI_SCROLL_BAR *)operator_new(0x160);
  if (this != (wrUI_SCROLL_BAR *)0x0) {
    puVar1 = (uiELEMENT *)wrUI_SCROLL_BAR(this);
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482C00 */

uiELEMENT * __fastcall wrUI_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x6c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482C30 */

uiELEMENT * __fastcall wrUI_FRAME::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x74);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482C60 */

uiELEMENT * __fastcall wrUI_NEWGAME_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x6c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482C90 */

uiELEMENT * __fastcall wrUI_LS_INFO::Create(void)

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




/* from: wr_ui.cpp
   addr: 00482CF0 */

uiELEMENT * __fastcall wrUI_LOAD_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x431c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x427c) = 0;
    *(undefined4 *)(this + 0x4300) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x4308) = 0;
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00482D40 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::OnKeyboard
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)param_1 != 6) goto LAB_00482dea;
  iVar5 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x74);
  if (((iVar5 < iVar1) || (iVar2 = *(int *)(this + 0x427c), iVar1 + iVar2 <= iVar5)) ||
     ((*(uint *)(*(int *)(this + (iVar5 - iVar1) * 4 + 0x4280) + 4) & 0x20) == 0))
  goto LAB_00482dea;
  if (*(int *)(param_1 + 0xc) == 5) {
    iVar4 = *(int *)(this + 0x78);
    iVar6 = iVar5 + -1;
    iVar3 = iVar4;
LAB_00482d94:
    if (iVar3 == 0) goto LAB_00482dc1;
    if (iVar6 < iVar4) {
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      *(int *)(this + 0x6c) = iVar6;
    }
    else {
      *(int *)(this + 0x6c) = iVar4 + -1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc) != 6) goto LAB_00482dea;
    iVar4 = *(int *)(this + 0x78);
    iVar6 = iVar5 + 1;
    if (iVar4 != 0) {
      iVar3 = iVar5 + 2;
      goto LAB_00482d94;
    }
LAB_00482dc1:
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
  }
  iVar6 = *(int *)(this + 0x6c);
  if (iVar5 != iVar6) {
    if ((iVar6 != -1) &&
       (((iVar6 < iVar1 && (0 < iVar1)) || ((iVar1 + iVar2 <= iVar6 && (iVar1 < iVar4 - iVar2))))))
    {
      *(undefined4 *)(this + 0x4304) = 0x3ca3d70a;
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
    }
    SetFocusToSelected(this);
    ProcessScroll(this);
    return 0;
  }
  if ((iVar4 == 0) || (iVar5 == -1)) {
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
    return iVar5;
  }
  if (iVar5 < iVar4) {
    if (iVar5 < 0) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = iVar4 + -1;
  }
  *(int *)(this + 0x6c) = iVar5;
LAB_00482dea:
  iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar5;
}




/* from: wr_ui.cpp
   addr: 00482E60 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::OnKbdFocus
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this,uiELEMENT *param_1)

{
  if (param_1 == (uiELEMENT *)this) {
    *(undefined4 *)(this + 0x4308) = 1;
  }
  return 1;
}




/* from: wr_ui.cpp
   addr: 00482E80 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetFocusToSelected
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 != -1) {
    iVar2 = *(int *)(this + 0x74);
    if ((iVar1 < iVar2) || (*(int *)(this + 0x427c) + iVar2 <= iVar1)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
      return;
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar1 - iVar2) * 4 + 0x4280));
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00482ED0 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::ProcessScroll
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float in_EDX;
  
  if (((byte)this[0x70] & 1) == 0) {
    return;
  }
  iVar3 = m3dUpdateTimeField((float *)(this + 0x4304),in_EDX);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(this + 0x74);
  *(float *)(this + 0x4304) = 0.02;
  if ((*(int *)(this + 0x6c) < iVar3) && (0 < iVar3)) {
    iVar3 = iVar3 + -1;
LAB_00482f27:
    (**(code **)(*(int *)this + 0x60))(0,iVar3);
  }
  else if ((*(int *)(this + 0x427c) + iVar3 <= *(int *)(this + 0x6c)) &&
          (iVar3 < *(int *)(this + 0x78) - *(int *)(this + 0x427c))) {
    iVar3 = iVar3 + 1;
    goto LAB_00482f27;
  }
  iVar3 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x74);
  if (iVar3 < iVar1) {
LAB_00482f7e:
    if (iVar1 < 1) goto LAB_00482f98;
  }
  else {
    if (iVar3 < *(int *)(this + 0x427c) + iVar1) {
      uVar2 = *(uint *)(this + 0x70);
      *(uint *)(this + 0x70) = uVar2 & 0xfffffffe;
      if ((uVar2 & 2) == 0) {
        return;
      }
      *(uint *)(this + 0x70) = uVar2 & 0xfffffffc;
      if (*(int *)(uiSystem + 0x10) != 0) {
        return;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar3 - iVar1) * 4 + 0x4280));
      return;
    }
    if (iVar3 < iVar1) goto LAB_00482f7e;
  }
  if (iVar3 < *(int *)(this + 0x427c) + iVar1) {
    return;
  }
  if (iVar1 < *(int *)(this + 0x78) - *(int *)(this + 0x427c)) {
    return;
  }
LAB_00482f98:
  *(uint *)(this + 0x70) = *(uint *)(this + 0x70) & 0xfffffffc;
  return;
}




/* from: wr_ui.cpp
   addr: 00482FB0 */

void * __thiscall
wrUI_SAVE_WINDOW::_vector_deleting_destructor_(wrUI_SAVE_WINDOW *this,uint param_1)

{
  wrUI_LS_WINDOW::~wrUI_LS_WINDOW((wrUI_LS_WINDOW *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_ui.cpp
   addr: 00482FD0 */

uiELEMENT * __fastcall wrUI_SAVE_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x4320);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x427c) = 0;
    *(undefined4 *)(this + 0x4300) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x4308) = 0;
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00483020 */

uiELEMENT * __fastcall wrUI_VIDEO_INFO::Create(void)

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
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00483090 */

uiELEMENT * __fastcall wrUI_VIDEO_WINDOW::Create(void)

{
  uiELEMENT *this;
  int iVar1;
  uiELEMENT *this_00;
  
  this = (uiELEMENT *)operator_new(0xa14);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &wrUI_WINDOW::_vftable_;
    this_00 = this + 0x7c;
    iVar1 = 0x40;
    do {
      wrUI_VIDEO_RECORD::wrUI_VIDEO_RECORD((wrUI_VIDEO_RECORD *)this_00);
      this_00 = (uiELEMENT *)((wrUI_VIDEO_RECORD *)this_00 + 0x24);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x97c) = 0;
    *(undefined4 *)(this + 0xa00) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0xa08) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00483100 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::OnKeyboard
          (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *this,
          uiINPUT_INFO *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)param_1 == 6) {
    iVar3 = *(int *)(this + 0x6c);
    iVar1 = *(int *)(this + 0x74);
    if (((iVar1 <= iVar3) && (iVar3 < *(int *)(this + 0x97c) + iVar1)) &&
       ((*(uint *)(*(int *)(this + (iVar3 - iVar1) * 4 + 0x980) + 4) & 0x20) != 0)) {
      if (*(int *)(param_1 + 0xc) == 5) {
        iVar4 = *(int *)(this + 0x78);
        iVar6 = iVar3 + -1;
        if (iVar4 == 0) {
LAB_004831a3:
          *(undefined4 *)(this + 0x6c) = 0xffffffff;
        }
        else {
          if (iVar6 < iVar4) {
            if (iVar6 < 0) {
              iVar6 = 0;
            }
          }
          else {
            iVar6 = iVar4 + -1;
          }
          iVar2 = *(int *)(this + iVar6 * 0x24 + 0x9c);
          iVar5 = iVar6;
          while (iVar2 != 0) {
            iVar5 = (iVar5 + -1) % iVar4;
            if (iVar5 == iVar6) goto LAB_004831a3;
            iVar2 = *(int *)(this + iVar5 * 0x24 + 0x9c);
          }
          *(int *)(this + 0x6c) = iVar5;
        }
        iVar6 = *(int *)(this + 0x6c);
        if (iVar3 != iVar6) {
LAB_004832e0:
          if ((iVar6 != -1) &&
             (((iVar6 < iVar1 && (0 < iVar1)) ||
              ((*(int *)(this + 0x97c) + iVar1 <= iVar6 && (iVar1 < iVar4 - *(int *)(this + 0x97c)))
              )))) {
            *(undefined4 *)(this + 0xa04) = 0x3ca3d70a;
            *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
          }
          SetFocusToSelected(this);
          wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::ProcessScroll
                    ((wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *)this)
          ;
          return 0;
        }
        if ((iVar4 != 0) && (iVar3 != -1)) {
          if (iVar3 < iVar4) {
            if (iVar3 < 0) {
              iVar3 = 0;
            }
          }
          else {
            iVar3 = iVar4 + -1;
          }
          iVar1 = *(int *)(this + iVar3 * 0x24 + 0x9c);
          iVar6 = iVar3;
          while (iVar1 != 0) {
            iVar6 = (iVar6 + 1) % iVar4;
            if (iVar6 == iVar3) goto LAB_004832c5;
            iVar1 = *(int *)(this + iVar6 * 0x24 + 0x9c);
          }
LAB_00483203:
          *(int *)(this + 0x6c) = iVar6;
          iVar3 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
          return iVar3;
        }
      }
      else {
        if (*(int *)(param_1 + 0xc) != 6) goto LAB_004832cc;
        iVar4 = *(int *)(this + 0x78);
        iVar6 = iVar3 + 1;
        if ((iVar4 == 0) || (iVar6 == -1)) {
LAB_0048326c:
          *(undefined4 *)(this + 0x6c) = 0xffffffff;
        }
        else {
          if (iVar6 < iVar4) {
            if (iVar6 < 0) {
              iVar6 = 0;
            }
          }
          else {
            iVar6 = iVar4 + -1;
          }
          iVar2 = *(int *)(this + iVar6 * 0x24 + 0x9c);
          iVar5 = iVar6;
          while (iVar2 != 0) {
            iVar5 = (iVar5 + 1) % iVar4;
            if (iVar5 == iVar6) goto LAB_0048326c;
            iVar2 = *(int *)(this + iVar5 * 0x24 + 0x9c);
          }
          *(int *)(this + 0x6c) = iVar5;
        }
        iVar6 = *(int *)(this + 0x6c);
        if (iVar3 != iVar6) goto LAB_004832e0;
        if ((iVar4 != 0) && (iVar3 != -1)) {
          if (iVar3 < iVar4) {
            if (iVar3 < 0) {
              iVar3 = 0;
            }
          }
          else {
            iVar3 = iVar4 + -1;
          }
          iVar1 = *(int *)(this + iVar3 * 0x24 + 0x9c);
          iVar6 = iVar3;
          while (iVar1 != 0) {
            iVar6 = (iVar6 + 1) % iVar4;
            if (iVar6 == iVar3) goto LAB_004832c5;
            iVar1 = *(int *)(this + iVar6 * 0x24 + 0x9c);
          }
          goto LAB_00483203;
        }
      }
LAB_004832c5:
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
  }
LAB_004832cc:
  iVar3 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar3;
}




/* from: wr_ui.cpp
   addr: 00483330 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::ProcessUpdate
          (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *this,void *param_1)

{
  int iVar1;
  int iVar2;
  wrUI_SCROLL_BAR *this_00;
  int iVar3;
  int iVar4;
  uiELEMENT *puVar5;
  
  if (*(int *)(this + 0xa08) == 0) {
    wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::ProcessScroll
              ((wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *)this);
    iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
    return iVar1;
  }
  if ((*(int *)(this + 0x6c) == -1) && (iVar1 = *(int *)(this + 0x78), iVar1 != 0)) {
    iVar3 = *(int *)(this + 0x74);
    if (iVar3 == -1) {
LAB_00483396:
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
    else {
      if (iVar3 < iVar1) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = iVar1 + -1;
      }
      iVar2 = *(int *)(this + iVar3 * 0x24 + 0x9c);
      iVar4 = iVar3;
      while (iVar2 != 0) {
        iVar4 = (iVar4 + 1) % iVar1;
        if (iVar4 == iVar3) goto LAB_00483396;
        iVar2 = *(int *)(this + iVar4 * 0x24 + 0x9c);
      }
      *(int *)(this + 0x6c) = iVar4;
    }
  }
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 == -1) goto LAB_00483502;
  iVar3 = *(int *)(this + 0x74);
  if (iVar1 < iVar3) {
LAB_004833c8:
    if (*(int *)(this + 0x78) - *(int *)(this + 0x97c) < iVar1) {
      iVar1 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if (iVar3 != iVar1) {
      *(int *)(this + 0x74) = iVar1;
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
      UpdateContext(this);
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
      (**(code **)(*(int *)uiSystem + 0x84))(1);
      if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0xa00);
    if (this_00 != (wrUI_SCROLL_BAR *)0x0) {
      iVar1 = *(int *)(this + 0x74);
LAB_004834bd:
      wrUI_SCROLL_BAR::SetPos(this_00,iVar1);
    }
  }
  else if (*(int *)(this + 0x97c) + iVar3 <= iVar1) {
    if (iVar1 < iVar3) goto LAB_004833c8;
    iVar1 = iVar1 - *(int *)(this + 0x97c);
    iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    if (iVar3 != iVar1) {
      *(int *)(this + 0x74) = iVar1;
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
      UpdateContext(this);
      *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
      (**(code **)(*(int *)uiSystem + 0x84))(1);
      if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0xa00);
    if (this_00 == (wrUI_SCROLL_BAR *)0x0) goto LAB_004834c2;
    iVar1 = *(int *)(this + 0x74);
    goto LAB_004834bd;
  }
LAB_004834c2:
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 != -1) {
    iVar3 = *(int *)(this + 0x74);
    if ((iVar1 < iVar3) || (*(int *)(this + 0x97c) + iVar3 <= iVar1)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      puVar5 = (uiELEMENT *)0x0;
    }
    else {
      puVar5 = *(uiELEMENT **)(this + (iVar1 - iVar3) * 4 + 0x980);
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,puVar5);
  }
LAB_00483502:
  *(undefined4 *)(this + 0xa08) = 0;
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar1;
}




/* from: wr_ui.cpp
   addr: 00483540 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::OnScrollNotify
          (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *this,
          wrUI_SCROLL_BAR *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *pwVar3;
  int iVar4;
  wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *pwVar5;
  
  iVar2 = *(int *)(this + 0x6c);
  iVar4 = *(int *)(this + 0x74);
  if ((((iVar4 <= iVar2) && (iVar2 < *(int *)(this + 0x97c) + iVar4)) &&
      ((*(uint *)(*(int *)(this + (iVar2 - iVar4) * 4 + 0x980) + 4) & 0x20) != 0)) ||
     (bVar1 = false, *(int *)(uiSystem + 0x10) == 0)) {
    bVar1 = true;
  }
  if (*(int *)(this + 0x78) - *(int *)(this + 0x97c) < param_2) {
    param_2 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (iVar4 != param_2) {
    *(int *)(this + 0x74) = param_2;
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
    iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
    if (*(int *)(this + 0x97c) <= iVar2) {
      iVar2 = *(int *)(this + 0x97c);
    }
    iVar4 = 0;
    if (0 < iVar2) {
      pwVar5 = this + 0x980;
      pwVar3 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
      param_2 = iVar2;
      do {
        (**(code **)(**(int **)pwVar5 + 0x10))(1);
        wrUI_VIDEO_INFO::SetRecord(*(wrUI_VIDEO_INFO **)pwVar5,(wrUI_VIDEO_RECORD *)pwVar3);
        pwVar5 = pwVar5 + 4;
        pwVar3 = (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *)
                 ((wrUI_VIDEO_RECORD *)pwVar3 + 0x24);
        param_2 = param_2 + -1;
        iVar4 = iVar2;
      } while (param_2 != 0);
    }
    if (iVar4 < *(int *)(this + 0x97c)) {
      pwVar5 = this + iVar4 * 4 + 0x980;
      do {
        wrUI_ADVSERV_INFO::ClearRecord(*(wrUI_ADVSERV_INFO **)pwVar5);
        (**(code **)(**(int **)pwVar5 + 0x10))(0);
        iVar4 = iVar4 + 1;
        pwVar5 = pwVar5 + 4;
      } while (iVar4 < *(int *)(this + 0x97c));
    }
    SetSelectedRec(this,*(int *)(this + 0x6c),1);
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
    (**(code **)(*(int *)uiSystem + 0x84))(1);
    if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
      wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),*(int *)(this + 0x74));
    }
  }
  if ((bVar1) && (iVar2 = *(int *)(this + 0x6c), iVar2 != -1)) {
    iVar4 = *(int *)(this + 0x74);
    if ((iVar2 < iVar4) || (*(int *)(this + 0x97c) + iVar4 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
      return;
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar2 - iVar4) * 4 + 0x980));
  }
  return;
}




/* from: wr_ui.cpp
   addr: 004836F0 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::SetSelectedRec
          (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *this,int param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x78);
  if ((iVar1 != 0) && ((param_1 != -1 || (param_2 < 0)))) {
    if (param_1 < iVar1) {
      if (param_1 < 0) {
        param_1 = 0;
      }
    }
    else {
      param_1 = iVar1 + -1;
    }
    iVar2 = *(int *)(this + param_1 * 0x24 + 0x9c);
    iVar3 = param_1;
    while( true ) {
      if (iVar2 == 0) {
        *(int *)(this + 0x6c) = iVar3;
        return;
      }
      iVar3 = (iVar3 + param_2) % iVar1;
      if (iVar3 == param_1) break;
      iVar2 = *(int *)(this + iVar3 * 0x24 + 0x9c);
    }
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return;
}




/* from: wr_ui.cpp
   addr: 00483760 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::ProcessScroll
          (wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float in_EDX;
  
  if (((byte)this[0x70] & 1) == 0) {
    return;
  }
  iVar3 = m3dUpdateTimeField((float *)(this + 0xa04),in_EDX);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(this + 0x74);
  *(float *)(this + 0xa04) = 0.02;
  if ((*(int *)(this + 0x6c) < iVar3) && (0 < iVar3)) {
    iVar3 = iVar3 + -1;
LAB_004837b7:
    (**(code **)(*(int *)this + 0x60))(0,iVar3);
  }
  else if ((*(int *)(this + 0x97c) + iVar3 <= *(int *)(this + 0x6c)) &&
          (iVar3 < *(int *)(this + 0x78) - *(int *)(this + 0x97c))) {
    iVar3 = iVar3 + 1;
    goto LAB_004837b7;
  }
  iVar3 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x74);
  if (iVar3 < iVar1) {
LAB_0048380e:
    if (iVar1 < 1) goto LAB_00483828;
  }
  else {
    if (iVar3 < *(int *)(this + 0x97c) + iVar1) {
      uVar2 = *(uint *)(this + 0x70);
      *(uint *)(this + 0x70) = uVar2 & 0xfffffffe;
      if ((uVar2 & 2) == 0) {
        return;
      }
      *(uint *)(this + 0x70) = uVar2 & 0xfffffffc;
      if (*(int *)(uiSystem + 0x10) != 0) {
        return;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar3 - iVar1) * 4 + 0x980));
      return;
    }
    if (iVar3 < iVar1) goto LAB_0048380e;
  }
  if (iVar3 < *(int *)(this + 0x97c) + iVar1) {
    return;
  }
  if (iVar1 < *(int *)(this + 0x78) - *(int *)(this + 0x97c)) {
    return;
  }
LAB_00483828:
  *(uint *)(this + 0x70) = *(uint *)(this + 0x70) & 0xfffffffc;
  return;
}




/* from: wr_ui.cpp
   addr: 00483840 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::UpdateContext
          (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *pwVar4;
  int iVar5;
  wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *pwVar6;
  int local_4;
  
  iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x97c) <= iVar2) {
    iVar2 = *(int *)(this + 0x97c);
  }
  iVar5 = 0;
  if (0 < iVar2) {
    pwVar6 = this + 0x980;
    pwVar4 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
    local_4 = iVar2;
    do {
      (**(code **)(**(int **)pwVar6 + 0x10))(1);
      wrUI_VIDEO_INFO::SetRecord(*(wrUI_VIDEO_INFO **)pwVar6,(wrUI_VIDEO_RECORD *)pwVar4);
      pwVar6 = pwVar6 + 4;
      pwVar4 = (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *)
               ((wrUI_VIDEO_RECORD *)pwVar4 + 0x24);
      local_4 = local_4 + -1;
      iVar5 = iVar2;
    } while (local_4 != 0);
  }
  if (iVar5 < *(int *)(this + 0x97c)) {
    pwVar6 = this + iVar5 * 4 + 0x980;
    do {
      wrUI_ADVSERV_INFO::ClearRecord(*(wrUI_ADVSERV_INFO **)pwVar6);
      (**(code **)(**(int **)pwVar6 + 0x10))(0);
      iVar5 = iVar5 + 1;
      pwVar6 = pwVar6 + 4;
    } while (iVar5 < *(int *)(this + 0x97c));
  }
  iVar5 = *(int *)(this + 0x78);
  iVar2 = *(int *)(this + 0x6c);
  if ((iVar5 != 0) && (iVar2 != -1)) {
    if (iVar2 < iVar5) {
      if (iVar2 < 0) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = iVar5 + -1;
    }
    iVar1 = *(int *)(this + iVar2 * 0x24 + 0x9c);
    iVar3 = iVar2;
    while( true ) {
      if (iVar1 == 0) {
        *(int *)(this + 0x6c) = iVar3;
        return;
      }
      iVar3 = (iVar3 + 1) % iVar5;
      if (iVar3 == iVar2) break;
      iVar1 = *(int *)(this + iVar3 * 0x24 + 0x9c);
    }
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return;
}




/* from: wr_ui.cpp
   addr: 00483920 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::OnChildNotify
          (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *this,
          uiCHILD_NOTIFY *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *pwVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 4) != 0x464f4353) {
    uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
    return;
  }
  iVar3 = 0;
  if (0 < *(int *)(this + 0x97c)) {
    pwVar4 = this + 0x980;
    while (*(int *)param_1 != *(int *)pwVar4) {
      iVar3 = iVar3 + 1;
      pwVar4 = pwVar4 + 4;
      if (*(int *)(this + 0x97c) <= iVar3) {
        return;
      }
    }
    iVar1 = *(int *)(this + 0x78);
    iVar3 = *(int *)(this + 0x74) + iVar3;
    if ((iVar3 < iVar1) && (*(int *)(param_1 + 8) != 0)) {
      if ((iVar1 != 0) && (iVar3 != -1)) {
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        iVar2 = *(int *)(this + iVar3 * 0x24 + 0x9c);
        iVar5 = iVar3;
        while( true ) {
          if (iVar2 == 0) {
            *(int *)(this + 0x6c) = iVar5;
            return;
          }
          iVar5 = (iVar5 + 1) % iVar1;
          if (iVar5 == iVar3) break;
          iVar2 = *(int *)(this + iVar5 * 0x24 + 0x9c);
        }
      }
      *(undefined4 *)(this + 0x6c) = 0xffffffff;
    }
  }
  return;
}




/* from: wr_ui.cpp
   addr: 004839D0 */

void * __thiscall
wrUI_VIDEO_WINDOW::_vector_deleting_destructor_(wrUI_VIDEO_WINDOW *this,uint param_1)

{
  wrUI_VIDEO_WINDOW *pwVar1;
  int iVar2;
  wrUI_VIDEO_WINDOW *pwVar3;
  
  iVar2 = 0x40;
  *(undefined ***)this =
       &wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::_vftable_;
  pwVar3 = this + 0x97c;
  do {
    pwVar1 = pwVar3 + -0x18;
    pwVar3 = pwVar3 + -0x24;
    apFree(*(void **)pwVar1);
    apFree(*(void **)pwVar3);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined ***)this = &uiELEMENT::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_ui.cpp
   addr: 00483A20 */

uiELEMENT * __fastcall wrUI_CTRL_INFO::Create(void)

{
  uiTEXT_INPUT *this;
  
  this = (uiTEXT_INPUT *)operator_new(0x158);
  if (this != (uiTEXT_INPUT *)0x0) {
    uiTEXT_INPUT::uiTEXT_INPUT(this);
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x144) = 0;
    *(undefined4 *)(this + 0x148) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x138) = 0x20;
    return (uiELEMENT *)this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00483A90 */

uiELEMENT * __fastcall wrUI_CTRL_WINDOW::Create(void)

{
  uiELEMENT *this;
  int iVar1;
  uiELEMENT *puVar2;
  
  this = (uiELEMENT *)operator_new(0xa0c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &wrUI_WINDOW::_vftable_;
    puVar2 = this + 0x7c;
    iVar1 = 0x40;
    do {
      *(undefined4 *)puVar2 = 0;
      _vector_constructor_iterator_(puVar2 + 4,0x10,2,wrUI_CTRL_SEQ::wrUI_CTRL_SEQ);
      puVar2 = puVar2 + 0x24;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x97c) = 0;
    *(undefined4 *)(this + 0xa00) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0xa08) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00483B10 */

int __thiscall
wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO>::ProcessUpdate
          (wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wrUI_SCROLL_BAR *this_00;
  uiELEMENT *puVar4;
  
  if (*(int *)(this + 0xa08) == 0) {
    wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::ProcessScroll
              ((wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *)this);
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
  if (iVar2 == -1) goto LAB_00483cb7;
  iVar1 = *(int *)(this + 0x74);
  if (iVar2 < iVar1) {
LAB_00483b7c:
    if (*(int *)(this + 0x78) - *(int *)(this + 0x97c) < iVar2) {
      iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
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
      if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0xa00);
    if (this_00 != (wrUI_SCROLL_BAR *)0x0) {
      iVar2 = *(int *)(this + 0x74);
LAB_00483c71:
      wrUI_SCROLL_BAR::SetPos(this_00,iVar2);
    }
  }
  else if (*(int *)(this + 0x97c) + iVar1 <= iVar2) {
    if (iVar2 < iVar1) goto LAB_00483b7c;
    iVar2 = iVar2 - *(int *)(this + 0x97c);
    iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
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
      if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0xa00);
    if (this_00 == (wrUI_SCROLL_BAR *)0x0) goto LAB_00483c76;
    iVar2 = *(int *)(this + 0x74);
    goto LAB_00483c71;
  }
LAB_00483c76:
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 != -1) {
    iVar1 = *(int *)(this + 0x74);
    if ((iVar2 < iVar1) || (*(int *)(this + 0x97c) + iVar1 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      puVar4 = (uiELEMENT *)0x0;
    }
    else {
      puVar4 = *(uiELEMENT **)(this + (iVar2 - iVar1) * 4 + 0x980);
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,puVar4);
  }
LAB_00483cb7:
  *(undefined4 *)(this + 0xa08) = 0;
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui.cpp
   addr: 00483CF0 */

void __thiscall
wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO>::OnScrollNotify
          (wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *this,
          wrUI_SCROLL_BAR *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *pwVar3;
  int iVar4;
  wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *pwVar5;
  
  iVar2 = *(int *)(this + 0x6c);
  iVar4 = *(int *)(this + 0x74);
  if ((((iVar4 <= iVar2) && (iVar2 < *(int *)(this + 0x97c) + iVar4)) &&
      ((*(uint *)(*(int *)(this + (iVar2 - iVar4) * 4 + 0x980) + 4) & 0x20) != 0)) ||
     (bVar1 = false, *(int *)(uiSystem + 0x10) == 0)) {
    bVar1 = true;
  }
  if (*(int *)(this + 0x78) - *(int *)(this + 0x97c) < param_2) {
    param_2 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (iVar4 != param_2) {
    *(int *)(this + 0x74) = param_2;
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
    iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
    if (*(int *)(this + 0x97c) <= iVar2) {
      iVar2 = *(int *)(this + 0x97c);
    }
    iVar4 = 0;
    if (0 < iVar2) {
      pwVar5 = this + 0x980;
      pwVar3 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
      param_2 = iVar2;
      do {
        (**(code **)(**(int **)pwVar5 + 0x10))(1);
        wrUI_CTRL_INFO::SetRecord(*(wrUI_CTRL_INFO **)pwVar5,(wrUI_CTRL_RECORD *)pwVar3);
        pwVar5 = pwVar5 + 4;
        pwVar3 = (wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *)
                 ((wrUI_CTRL_RECORD *)pwVar3 + 0x24);
        param_2 = param_2 + -1;
        iVar4 = iVar2;
      } while (param_2 != 0);
    }
    if (iVar4 < *(int *)(this + 0x97c)) {
      pwVar5 = this + iVar4 * 4 + 0x980;
      do {
        (**(code **)(**(int **)pwVar5 + 0x10))(0);
        iVar4 = iVar4 + 1;
        pwVar5 = pwVar5 + 4;
      } while (iVar4 < *(int *)(this + 0x97c));
    }
    wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
              ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
               *(int *)(this + 0x6c),1);
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
    (**(code **)(*(int *)uiSystem + 0x84))(1);
    if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
      wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),*(int *)(this + 0x74));
    }
  }
  if ((bVar1) && (iVar2 = *(int *)(this + 0x6c), iVar2 != -1)) {
    iVar4 = *(int *)(this + 0x74);
    if ((iVar2 < iVar4) || (*(int *)(this + 0x97c) + iVar4 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
      return;
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar2 - iVar4) * 4 + 0x980));
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00483E90
   addr: 00483E90
   addr: 00483E90
   addr: 00483E90
   addr: 00483E90 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
          (wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *this,int param_1,
          int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x78);
  if ((iVar1 != 0) && ((param_1 != -1 || (param_2 < 0)))) {
    if (iVar1 <= param_1) {
      *(int *)(this + 0x6c) = iVar1 + -1;
      return;
    }
    if (param_1 < 0) {
      param_1 = 0;
    }
    *(int *)(this + 0x6c) = param_1;
    return;
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return;
}




/* from: wr_ui.cpp
   addr: 00483ED0 */

void __thiscall
wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO>::UpdateContext
          (wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *this)

{
  int iVar1;
  wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *pwVar2;
  int iVar3;
  wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *pwVar4;
  int local_4;
  
  iVar1 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x97c) <= iVar1) {
    iVar1 = *(int *)(this + 0x97c);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    pwVar4 = this + 0x980;
    pwVar2 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
    local_4 = iVar1;
    do {
      (**(code **)(**(int **)pwVar4 + 0x10))(1);
      wrUI_CTRL_INFO::SetRecord(*(wrUI_CTRL_INFO **)pwVar4,(wrUI_CTRL_RECORD *)pwVar2);
      pwVar4 = pwVar4 + 4;
      pwVar2 = (wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *)
               ((wrUI_CTRL_RECORD *)pwVar2 + 0x24);
      local_4 = local_4 + -1;
      iVar3 = iVar1;
    } while (local_4 != 0);
  }
  if (iVar3 < *(int *)(this + 0x97c)) {
    pwVar4 = this + iVar3 * 4 + 0x980;
    do {
      (**(code **)(**(int **)pwVar4 + 0x10))(0);
      iVar3 = iVar3 + 1;
      pwVar4 = pwVar4 + 4;
    } while (iVar3 < *(int *)(this + 0x97c));
  }
  iVar1 = *(int *)(this + 0x78);
  iVar3 = *(int *)(this + 0x6c);
  if ((iVar1 != 0) && (iVar3 != -1)) {
    if (iVar3 < iVar1) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      *(int *)(this + 0x6c) = iVar3;
      return;
    }
    *(int *)(this + 0x6c) = iVar1 + -1;
    return;
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return;
}




/* from: wr_ui.cpp
   addr: 00483FA0 */

uiELEMENT * __fastcall wrUI_CADV_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x6c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00483FD0 */

uiELEMENT * __fastcall wrUI_GAME_OPT_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x6c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484000 */

uiELEMENT * __fastcall wrUI_HSCORE_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x6c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484030 */

uiELEMENT * __fastcall wrUI_CR_FRAME::Create(void)

{
  wrUI_CR_FRAME *this;
  uiELEMENT *puVar1;
  
  this = (wrUI_CR_FRAME *)operator_new(0x98);
  if (this != (wrUI_CR_FRAME *)0x0) {
    puVar1 = (uiELEMENT *)wrUI_CR_FRAME(this);
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484050 */

uiELEMENT * __fastcall wrUI_CR_BACK::Create(void)

{
  uiELEMENT *this;
  uiELEMENT *puVar1;
  int iVar2;
  
  this = (uiELEMENT *)operator_new(0x1bc);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined ***)this = &uiAREA::_vftable_;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    puVar1 = this + 0x130;
    iVar2 = 4;
    do {
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      puVar1 = puVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(this + 0x170) = 0xffffffff;
    *(undefined4 *)(this + 0x1b4) = 0;
    this[0x174] = (uiELEMENT)0x0;
    *(undefined4 *)(this + 0x1b8) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 004840F0 */

uiELEMENT * __fastcall wrUI_AUDIO_WND::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x79);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484120 */

uiELEMENT * __fastcall wrUI_IG_RESUME::Create(void)

{
  uiELEMENT *this;
  uiELEMENT *puVar1;
  int iVar2;
  
  this = (uiELEMENT *)operator_new(0x1b8);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    uiRENDER_ELEM::uiRENDER_ELEM((uiRENDER_ELEM *)(this + 0x6c));
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined ***)this = &uiAREA::_vftable_;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    puVar1 = this + 0x130;
    iVar2 = 4;
    do {
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)(puVar1 + 0xc) = 0;
      puVar1 = puVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(this + 0x170) = 0xffffffff;
    *(undefined4 *)(this + 0x1b4) = 0;
    this[0x174] = (uiELEMENT)0x0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 004841C0 */

uiELEMENT * __fastcall wrUI_IG_FRAME::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x78);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484200 */

uiELEMENT * __fastcall wrUI_MAIN_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x6c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484230 */

uiELEMENT * __fastcall wrUI_IG_MAIN_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x6c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484260 */

uiELEMENT * __fastcall wrUI_MSGBOX_WINDOW::Create(void)

{
  wrUI_MSGBOX_WINDOW *this;
  uiELEMENT *puVar1;
  
  this = (wrUI_MSGBOX_WINDOW *)operator_new(0xb8);
  if (this != (wrUI_MSGBOX_WINDOW *)0x0) {
    puVar1 = (uiELEMENT *)wrUI_MSGBOX_WINDOW(this);
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484280 */

entENTITY * __fastcall wrUI_WOOFER::Create(animINST *param_1)

{
  entENTITY *this;
  entENTITY *peVar1;
  int iVar2;
  
  this = (entENTITY *)operator_new(0x183);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    peVar1 = this + 0x15f;
    iVar2 = 4;
    do {
      *(undefined4 *)(peVar1 + -0x10) = 0;
      *(undefined4 *)peVar1 = 0xffffffff;
      peVar1 = peVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x173) = 0;
    *(undefined4 *)(this + 0x177) = 0;
    *(undefined4 *)(this + 0x17b) = 0;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: wr_ui.cpp
   addr: 004842F0 */

uiELEMENT * __fastcall wrUI_LOADING_WND::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x74);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484320 */

entENTITY * __fastcall wrUI_SKULL::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x14f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484350 */

uiELEMENT * __fastcall wrUI_SPLASH_FRM::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x74);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 004843B0 */

uiFONT * __thiscall wrUI_SYSTEM::GetDefaultFont(wrUI_SYSTEM *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uiFONT *puVar3;
  
  iVar1 = *(int *)this;
  uVar2 = (**(code **)(iVar1 + 0x50))(1);
  puVar3 = (uiFONT *)(**(code **)(iVar1 + 0x54))(uVar2);
  return puVar3;
}




/* from: wr_ui.cpp
   addr: 004843D0 */

void __thiscall wrUI_SYSTEM::ShowMsgW(wrUI_SYSTEM *this,ushort *param_1,float param_2,int param_3)

{
  wrUIHUD_MSG::ShowMsgW(*(wrUIHUD_MSG **)(this + 0x14c),param_1,param_2,param_3);
  return;
}




/* from: wr_ui.cpp
   addr: 00484400 */

uiELEMENT * __fastcall wrUI_CONN_WND::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x6c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484430 */

uiELEMENT * __fastcall wrUI_DRVINIT_WND::Create(void)

{
  wrUI_MP_WND *this;
  
  this = (wrUI_MP_WND *)operator_new(0x74);
  if (this != (wrUI_MP_WND *)0x0) {
    wrUI_MP_WND::wrUI_MP_WND(this);
    *(undefined ***)this = &_vftable_;
    return (uiELEMENT *)this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484460 */

uiELEMENT * __fastcall wrUI_IPADDR_WND::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x70);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484490 */

uiELEMENT * __fastcall wrUI_PSETUP_WND::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x80);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 004844C0 */

uiELEMENT * __fastcall wrUI_WAITBROWSER_WND::Create(void)

{
  wrUI_MP_WND *this;
  
  this = (wrUI_MP_WND *)operator_new(0x74);
  if (this != (wrUI_MP_WND *)0x0) {
    wrUI_MP_WND::wrUI_MP_WND(this);
    *(undefined ***)this = &_vftable_;
    return (uiELEMENT *)this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 004844F0 */

uiELEMENT * __fastcall wrUI_WAITSERVER_WND::Create(void)

{
  wrUI_MP_WND *this;
  
  this = (wrUI_MP_WND *)operator_new(0x74);
  if (this != (wrUI_MP_WND *)0x0) {
    wrUI_MP_WND::wrUI_MP_WND(this);
    *(undefined ***)this = &_vftable_;
    return (uiELEMENT *)this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484520 */

uiELEMENT * __fastcall wrUI_JOIN_INFO::Create(void)

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




/* from: wr_ui.cpp
   addr: 00484580 */

uiELEMENT * __fastcall wrUI_JOIN_WINDOW::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x210);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x200) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x208) = 0;
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}



/* from: wr_ui.cpp
   addr: 004845D0 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO>::ProcessInit
          (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *this,void *param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  puVar2 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 8),s_scrollbar);
  *(uiELEMENT **)(this + 0x200) = puVar2;
  iVar3 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x17c) = 0;
  for (iVar1 = iVar3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if ((*(uint *)(iVar1 + 4) & 0x8000) != 0) {
      *(int *)(this + 0x17c) = *(int *)(this + 0x17c) + 1;
    }
  }
  *(undefined4 *)(this + 0x17c) = 0;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x10)) {
    if ((*(uint *)(iVar3 + 4) & 0x8000) != 0) {
      *(int *)(this + *(int *)(this + 0x17c) * 4 + 0x180) = iVar3;
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffbff;
      *(int *)(this + 0x17c) = *(int *)(this + 0x17c) + 1;
    }
  }
  iVar3 = *(int *)(this + 0x200);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffbff;
    *(uint *)(*(int *)(this + 0x200) + 4) = *(uint *)(*(int *)(this + 0x200) + 4) & 0xfffffffb;
    *(uint *)(*(int *)(this + 0x200) + 4) = *(uint *)(*(int *)(this + 0x200) + 4) & 0xfffffff7;
    iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x17c);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    wrUI_SCROLL_BAR::SetWindow(*(wrUI_SCROLL_BAR **)(this + 0x200),(wrUI_WINDOW *)this,iVar3,1);
    wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x200),0);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40c;
  return 1;
}



/* from: wr_ui.cpp
   addr: 004846D0 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO>::OnKeyboard
          (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *this,
          uiINPUT_INFO *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)param_1 != 6) goto LAB_0048477a;
  iVar5 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x74);
  if (((iVar5 < iVar1) || (iVar2 = *(int *)(this + 0x17c), iVar1 + iVar2 <= iVar5)) ||
     ((*(uint *)(*(int *)(this + (iVar5 - iVar1) * 4 + 0x180) + 4) & 0x20) == 0)) goto LAB_0048477a;
  if (*(int *)(param_1 + 0xc) == 5) {
    iVar4 = *(int *)(this + 0x78);
    iVar6 = iVar5 + -1;
    iVar3 = iVar4;
LAB_00484724:
    if (iVar3 == 0) goto LAB_00484751;
    if (iVar6 < iVar4) {
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      *(int *)(this + 0x6c) = iVar6;
    }
    else {
      *(int *)(this + 0x6c) = iVar4 + -1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc) != 6) goto LAB_0048477a;
    iVar4 = *(int *)(this + 0x78);
    iVar6 = iVar5 + 1;
    if (iVar4 != 0) {
      iVar3 = iVar5 + 2;
      goto LAB_00484724;
    }
LAB_00484751:
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
  }
  iVar6 = *(int *)(this + 0x6c);
  if (iVar5 != iVar6) {
    if ((iVar6 != -1) &&
       (((iVar6 < iVar1 && (0 < iVar1)) || ((iVar1 + iVar2 <= iVar6 && (iVar1 < iVar4 - iVar2))))))
    {
      *(undefined4 *)(this + 0x204) = 0x3ca3d70a;
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
    }
    SetFocusToSelected(this);
    ProcessScroll(this);
    return 0;
  }
  if ((iVar4 == 0) || (iVar5 == -1)) {
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
    return iVar5;
  }
  if (iVar5 < iVar4) {
    if (iVar5 < 0) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = iVar4 + -1;
  }
  *(int *)(this + 0x6c) = iVar5;
LAB_0048477a:
  iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar5;
}




/* from: wr_ui.cpp
   addr: 004847F0 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO>::OnScrollNotify
          (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *this,
          wrUI_SCROLL_BAR *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *pwVar4;
  wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *pwVar5;
  
  iVar2 = *(int *)(this + 0x6c);
  iVar3 = *(int *)(this + 0x74);
  if ((((iVar3 <= iVar2) && (iVar2 < *(int *)(this + 0x17c) + iVar3)) &&
      ((*(uint *)(*(int *)(this + (iVar2 - iVar3) * 4 + 0x180) + 4) & 0x20) != 0)) ||
     (bVar1 = false, *(int *)(uiSystem + 0x10) == 0)) {
    bVar1 = true;
  }
  if (*(int *)(this + 0x78) - *(int *)(this + 0x17c) < param_2) {
    param_2 = *(int *)(this + 0x78) - *(int *)(this + 0x17c);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (iVar3 != param_2) {
    *(int *)(this + 0x74) = param_2;
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
    iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
    if (*(int *)(this + 0x17c) <= iVar2) {
      iVar2 = *(int *)(this + 0x17c);
    }
    iVar3 = 0;
    if (0 < iVar2) {
      pwVar5 = this + 0x180;
      pwVar4 = this + *(int *)(this + 0x74) * 4 + 0x7c;
      param_2 = iVar2;
      do {
        (**(code **)(**(int **)pwVar5 + 0x10))(1);
        wrUI_JOIN_INFO::SetRecord(*(wrUI_JOIN_INFO **)pwVar5,(wrUI_JOIN_RECORD *)pwVar4);
        pwVar5 = pwVar5 + 4;
        pwVar4 = (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *)
                 ((wrUI_JOIN_RECORD *)pwVar4 + 4);
        param_2 = param_2 + -1;
        iVar3 = iVar2;
      } while (param_2 != 0);
    }
    if (iVar3 < *(int *)(this + 0x17c)) {
      pwVar5 = this + iVar3 * 4 + 0x180;
      do {
        wrUI_JOIN_INFO::ClearRecord(*(wrUI_JOIN_INFO **)pwVar5);
        (**(code **)(**(int **)pwVar5 + 0x10))(0);
        iVar3 = iVar3 + 1;
        pwVar5 = pwVar5 + 4;
      } while (iVar3 < *(int *)(this + 0x17c));
    }
    wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
              ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
               *(int *)(this + 0x6c),1);
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
    (**(code **)(*(int *)uiSystem + 0x84))(1);
    if (*(wrUI_SCROLL_BAR **)(this + 0x200) != (wrUI_SCROLL_BAR *)0x0) {
      wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x200),*(int *)(this + 0x74));
    }
  }
  if ((bVar1) && (iVar2 = *(int *)(this + 0x6c), iVar2 != -1)) {
    iVar3 = *(int *)(this + 0x74);
    if ((iVar2 < iVar3) || (*(int *)(this + 0x17c) + iVar3 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
      return;
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar2 - iVar3) * 4 + 0x180));
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00484990 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO>::OnKbdFocus
          (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *this,uiELEMENT *param_1
          )

{
  if (param_1 == (uiELEMENT *)this) {
    *(undefined4 *)(this + 0x208) = 1;
  }
  return 1;
}




/* from: wr_ui.cpp
   addr: 004849B0 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO>::SetFocusToSelected
          (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 != -1) {
    iVar2 = *(int *)(this + 0x74);
    if ((iVar1 < iVar2) || (*(int *)(this + 0x17c) + iVar2 <= iVar1)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
      return;
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar1 - iVar2) * 4 + 0x180));
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00484A00 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO>::ProcessScroll
          (wrUI_WINDOW_SCROLL<struct_wrUI_JOIN_RECORD,class_wrUI_JOIN_INFO> *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float in_EDX;
  
  if (((byte)this[0x70] & 1) == 0) {
    return;
  }
  iVar3 = m3dUpdateTimeField((float *)(this + 0x204),in_EDX);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(this + 0x74);
  *(float *)(this + 0x204) = 0.02;
  if ((*(int *)(this + 0x6c) < iVar3) && (0 < iVar3)) {
    iVar3 = iVar3 + -1;
LAB_00484a57:
    (**(code **)(*(int *)this + 0x60))(0,iVar3);
  }
  else if ((*(int *)(this + 0x17c) + iVar3 <= *(int *)(this + 0x6c)) &&
          (iVar3 < *(int *)(this + 0x78) - *(int *)(this + 0x17c))) {
    iVar3 = iVar3 + 1;
    goto LAB_00484a57;
  }
  iVar3 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x74);
  if (iVar3 < iVar1) {
LAB_00484aae:
    if (iVar1 < 1) goto LAB_00484ac8;
  }
  else {
    if (iVar3 < *(int *)(this + 0x17c) + iVar1) {
      uVar2 = *(uint *)(this + 0x70);
      *(uint *)(this + 0x70) = uVar2 & 0xfffffffe;
      if ((uVar2 & 2) == 0) {
        return;
      }
      *(uint *)(this + 0x70) = uVar2 & 0xfffffffc;
      if (*(int *)(uiSystem + 0x10) != 0) {
        return;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar3 - iVar1) * 4 + 0x180));
      return;
    }
    if (iVar3 < iVar1) goto LAB_00484aae;
  }
  if (iVar3 < *(int *)(this + 0x17c) + iVar1) {
    return;
  }
  if (iVar1 < *(int *)(this + 0x78) - *(int *)(this + 0x17c)) {
    return;
  }
LAB_00484ac8:
  *(uint *)(this + 0x70) = *(uint *)(this + 0x70) & 0xfffffffc;
  return;
}




/* from: wr_ui.cpp
   addr: 00484AE0 */

uiELEMENT * __fastcall wrUI_WAITJOIN_WND::Create(void)

{
  wrUI_MP_WND *this;
  
  this = (wrUI_MP_WND *)operator_new(0x74);
  if (this != (wrUI_MP_WND *)0x0) {
    wrUI_MP_WND::wrUI_MP_WND(this);
    *(undefined ***)this = &_vftable_;
    return (uiELEMENT *)this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484B10 */

uiELEMENT * __fastcall wrUI_SI_INFO_WND::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x78);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484B40 */

uiELEMENT * __fastcall wrUI_SI_PLAYER_INFO::Create(void)

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
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484BA0 */

void * __thiscall wrUI_VIDEO_INFO::_scalar_deleting_destructor_(wrUI_VIDEO_INFO *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
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




/* from: wr_ui.cpp
   addr: 00484C20 */

uiELEMENT * __fastcall wrUI_SI_PLAYER_WND::Create(void)

{
  uiELEMENT *this;
  
  this = (uiELEMENT *)operator_new(0x140c);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x137c) = 0;
    *(undefined4 *)(this + 0x1400) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x1408) = 0;
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00484C70 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO>::OnKeyboard
          (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *this,
          uiINPUT_INFO *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)param_1 != 6) goto LAB_00484d1a;
  iVar5 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x74);
  if (((iVar5 < iVar1) || (iVar2 = *(int *)(this + 0x137c), iVar1 + iVar2 <= iVar5)) ||
     ((*(uint *)(*(int *)(this + (iVar5 - iVar1) * 4 + 0x1380) + 4) & 0x20) == 0))
  goto LAB_00484d1a;
  if (*(int *)(param_1 + 0xc) == 5) {
    iVar4 = *(int *)(this + 0x78);
    iVar6 = iVar5 + -1;
    iVar3 = iVar4;
LAB_00484cc4:
    if (iVar3 == 0) goto LAB_00484cf1;
    if (iVar6 < iVar4) {
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      *(int *)(this + 0x6c) = iVar6;
    }
    else {
      *(int *)(this + 0x6c) = iVar4 + -1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc) != 6) goto LAB_00484d1a;
    iVar4 = *(int *)(this + 0x78);
    iVar6 = iVar5 + 1;
    if (iVar4 != 0) {
      iVar3 = iVar5 + 2;
      goto LAB_00484cc4;
    }
LAB_00484cf1:
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
  }
  iVar6 = *(int *)(this + 0x6c);
  if (iVar5 != iVar6) {
    if ((iVar6 != -1) &&
       (((iVar6 < iVar1 && (0 < iVar1)) || ((iVar1 + iVar2 <= iVar6 && (iVar1 < iVar4 - iVar2))))))
    {
      *(undefined4 *)(this + 0x1404) = 0x3ca3d70a;
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
    }
    SetFocusToSelected(this);
    ProcessScroll(this);
    return 0;
  }
  if ((iVar4 == 0) || (iVar5 == -1)) {
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
    return iVar5;
  }
  if (iVar5 < iVar4) {
    if (iVar5 < 0) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = iVar4 + -1;
  }
  *(int *)(this + 0x6c) = iVar5;
LAB_00484d1a:
  iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar5;
}




/* from: wr_ui.cpp
   addr: 00484D90 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO>::ProcessUpdate
          (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *this,
          void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wrUI_SCROLL_BAR *this_00;
  uiELEMENT *puVar4;
  
  if (*(int *)(this + 0x1408) == 0) {
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
  if (iVar2 == -1) goto LAB_00484f37;
  iVar1 = *(int *)(this + 0x74);
  if (iVar2 < iVar1) {
LAB_00484dfc:
    if (*(int *)(this + 0x78) - *(int *)(this + 0x137c) < iVar2) {
      iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x137c);
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
      if (*(wrUI_SCROLL_BAR **)(this + 0x1400) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x1400),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0x1400);
    if (this_00 != (wrUI_SCROLL_BAR *)0x0) {
      iVar2 = *(int *)(this + 0x74);
LAB_00484ef1:
      wrUI_SCROLL_BAR::SetPos(this_00,iVar2);
    }
  }
  else if (*(int *)(this + 0x137c) + iVar1 <= iVar2) {
    if (iVar2 < iVar1) goto LAB_00484dfc;
    iVar2 = iVar2 - *(int *)(this + 0x137c);
    iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x137c);
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
      if (*(wrUI_SCROLL_BAR **)(this + 0x1400) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x1400),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0x1400);
    if (this_00 == (wrUI_SCROLL_BAR *)0x0) goto LAB_00484ef6;
    iVar2 = *(int *)(this + 0x74);
    goto LAB_00484ef1;
  }
LAB_00484ef6:
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 != -1) {
    iVar1 = *(int *)(this + 0x74);
    if ((iVar2 < iVar1) || (*(int *)(this + 0x137c) + iVar1 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      puVar4 = (uiELEMENT *)0x0;
    }
    else {
      puVar4 = *(uiELEMENT **)(this + (iVar2 - iVar1) * 4 + 0x1380);
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,puVar4);
  }
LAB_00484f37:
  *(undefined4 *)(this + 0x1408) = 0;
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui.cpp
   addr: 00484F70 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO>::OnScrollNotify
          (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *this,
          wrUI_SCROLL_BAR *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *pwVar3;
  int iVar4;
  wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *pwVar5;
  
  iVar2 = *(int *)(this + 0x6c);
  iVar4 = *(int *)(this + 0x74);
  if ((((iVar4 <= iVar2) && (iVar2 < *(int *)(this + 0x137c) + iVar4)) &&
      ((*(uint *)(*(int *)(this + (iVar2 - iVar4) * 4 + 0x1380) + 4) & 0x20) != 0)) ||
     (bVar1 = false, *(int *)(uiSystem + 0x10) == 0)) {
    bVar1 = true;
  }
  if (*(int *)(this + 0x78) - *(int *)(this + 0x137c) < param_2) {
    param_2 = *(int *)(this + 0x78) - *(int *)(this + 0x137c);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (iVar4 != param_2) {
    *(int *)(this + 0x74) = param_2;
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
    iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
    if (*(int *)(this + 0x137c) <= iVar2) {
      iVar2 = *(int *)(this + 0x137c);
    }
    iVar4 = 0;
    if (0 < iVar2) {
      pwVar5 = this + 0x1380;
      pwVar3 = this + *(int *)(this + 0x74) * 0x4c + 0x7c;
      param_2 = iVar2;
      do {
        (**(code **)(**(int **)pwVar5 + 0x10))(1);
        wrUI_SI_PLAYER_INFO::SetRecord
                  (*(wrUI_SI_PLAYER_INFO **)pwVar5,(wrUI_SI_PLAYER_RECORD *)pwVar3);
        pwVar5 = pwVar5 + 4;
        pwVar3 = (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *)
                 ((wrUI_SI_PLAYER_RECORD *)pwVar3 + 0x4c);
        param_2 = param_2 + -1;
        iVar4 = iVar2;
      } while (param_2 != 0);
    }
    if (iVar4 < *(int *)(this + 0x137c)) {
      pwVar5 = this + iVar4 * 4 + 0x1380;
      do {
        (**(code **)(**(int **)pwVar5 + 0x10))(0);
        iVar4 = iVar4 + 1;
        pwVar5 = pwVar5 + 4;
      } while (iVar4 < *(int *)(this + 0x137c));
    }
    wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
              ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
               *(int *)(this + 0x6c),1);
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
    (**(code **)(*(int *)uiSystem + 0x84))(1);
    if (*(wrUI_SCROLL_BAR **)(this + 0x1400) != (wrUI_SCROLL_BAR *)0x0) {
      wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0x1400),*(int *)(this + 0x74));
    }
  }
  if ((bVar1) && (iVar2 = *(int *)(this + 0x6c), iVar2 != -1)) {
    iVar4 = *(int *)(this + 0x74);
    if ((iVar2 < iVar4) || (*(int *)(this + 0x137c) + iVar4 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
      return;
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar2 - iVar4) * 4 + 0x1380));
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00485110 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO>::OnChildNotify
          (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *this,
          uiCHILD_NOTIFY *param_1)

{
  wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *pwVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0x464f4353) {
    uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x137c)) {
    pwVar1 = this + 0x1380;
    while (*(int *)param_1 != *(int *)pwVar1) {
      iVar2 = iVar2 + 1;
      pwVar1 = pwVar1 + 4;
      if (*(int *)(this + 0x137c) <= iVar2) {
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




/* from: wr_ui.cpp
   addr: 00485190 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO>::OnKbdFocus
          (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *this,
          uiELEMENT *param_1)

{
  if (param_1 == (uiELEMENT *)this) {
    *(undefined4 *)(this + 0x1408) = 1;
  }
  return 1;
}




/* from: wr_ui.cpp
   addr: 004851B0 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO>::SetFocusToSelected
          (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 != -1) {
    iVar2 = *(int *)(this + 0x74);
    if ((iVar1 < iVar2) || (*(int *)(this + 0x137c) + iVar2 <= iVar1)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
      return;
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar1 - iVar2) * 4 + 0x1380));
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00485200 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO>::ProcessScroll
          (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float in_EDX;
  
  if (((byte)this[0x70] & 1) == 0) {
    return;
  }
  iVar3 = m3dUpdateTimeField((float *)(this + 0x1404),in_EDX);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(this + 0x74);
  *(float *)(this + 0x1404) = 0.02;
  if ((*(int *)(this + 0x6c) < iVar3) && (0 < iVar3)) {
    iVar3 = iVar3 + -1;
LAB_00485257:
    (**(code **)(*(int *)this + 0x60))(0,iVar3);
  }
  else if ((*(int *)(this + 0x137c) + iVar3 <= *(int *)(this + 0x6c)) &&
          (iVar3 < *(int *)(this + 0x78) - *(int *)(this + 0x137c))) {
    iVar3 = iVar3 + 1;
    goto LAB_00485257;
  }
  iVar3 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x74);
  if (iVar3 < iVar1) {
LAB_004852ae:
    if (iVar1 < 1) goto LAB_004852c8;
  }
  else {
    if (iVar3 < *(int *)(this + 0x137c) + iVar1) {
      uVar2 = *(uint *)(this + 0x70);
      *(uint *)(this + 0x70) = uVar2 & 0xfffffffe;
      if ((uVar2 & 2) == 0) {
        return;
      }
      *(uint *)(this + 0x70) = uVar2 & 0xfffffffc;
      if (*(int *)(uiSystem + 0x10) != 0) {
        return;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar3 - iVar1) * 4 + 0x1380));
      return;
    }
    if (iVar3 < iVar1) goto LAB_004852ae;
  }
  if (iVar3 < *(int *)(this + 0x137c) + iVar1) {
    return;
  }
  if (iVar1 < *(int *)(this + 0x78) - *(int *)(this + 0x137c)) {
    return;
  }
LAB_004852c8:
  *(uint *)(this + 0x70) = *(uint *)(this + 0x70) & 0xfffffffc;
  return;
}




/* from: wr_ui.cpp
   addr: 004852E0 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO>::UpdateContext
          (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *this)

{
  int iVar1;
  wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *pwVar2;
  int iVar3;
  wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *pwVar4;
  int local_4;
  
  iVar1 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x137c) <= iVar1) {
    iVar1 = *(int *)(this + 0x137c);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    pwVar4 = this + 0x1380;
    pwVar2 = this + *(int *)(this + 0x74) * 0x4c + 0x7c;
    local_4 = iVar1;
    do {
      (**(code **)(**(int **)pwVar4 + 0x10))(1);
      wrUI_SI_PLAYER_INFO::SetRecord
                (*(wrUI_SI_PLAYER_INFO **)pwVar4,(wrUI_SI_PLAYER_RECORD *)pwVar2);
      pwVar4 = pwVar4 + 4;
      pwVar2 = (wrUI_WINDOW_SCROLL<struct_wrUI_SI_PLAYER_RECORD,class_wrUI_SI_PLAYER_INFO> *)
               ((wrUI_SI_PLAYER_RECORD *)pwVar2 + 0x4c);
      local_4 = local_4 + -1;
      iVar3 = iVar1;
    } while (local_4 != 0);
  }
  if (iVar3 < *(int *)(this + 0x137c)) {
    pwVar4 = this + iVar3 * 4 + 0x1380;
    do {
      (**(code **)(**(int **)pwVar4 + 0x10))(0);
      iVar3 = iVar3 + 1;
      pwVar4 = pwVar4 + 4;
    } while (iVar3 < *(int *)(this + 0x137c));
  }
  iVar1 = *(int *)(this + 0x78);
  iVar3 = *(int *)(this + 0x6c);
  if ((iVar1 != 0) && (iVar3 != -1)) {
    if (iVar3 < iVar1) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      *(int *)(this + 0x6c) = iVar3;
      return;
    }
    *(int *)(this + 0x6c) = iVar1 + -1;
    return;
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return;
}




/* from: wr_ui.cpp
   addr: 004853A0 */

uiELEMENT * __fastcall wrUI_ADVSERV_INFO::Create(void)

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
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00485420 */

uiELEMENT * __fastcall wrUI_ADVSERV_WINDOW::Create(void)

{
  uiELEMENT *this;
  int iVar1;
  uiELEMENT *this_00;
  
  this = (uiELEMENT *)operator_new(0xa40);
  if (this != (uiELEMENT *)0x0) {
    uiELEMENT::uiELEMENT(this);
    *(undefined ***)this = &wrUI_WINDOW::_vftable_;
    this_00 = this + 0x7c;
    iVar1 = 0x40;
    do {
      wrUI_ADVSERV_RECORD::wrUI_ADVSERV_RECORD((wrUI_ADVSERV_RECORD *)this_00);
      this_00 = (uiELEMENT *)((wrUI_ADVSERV_RECORD *)this_00 + 0x24);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x97c) = 0;
    *(undefined4 *)(this + 0xa00) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0xa08) = 0;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00485490 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::OnKeyboard
          (wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *this,
          uiINPUT_INFO *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)param_1 != 6) goto LAB_0048553a;
  iVar5 = *(int *)(this + 0x6c);
  iVar1 = *(int *)(this + 0x74);
  if (((iVar5 < iVar1) || (iVar2 = *(int *)(this + 0x97c), iVar1 + iVar2 <= iVar5)) ||
     ((*(uint *)(*(int *)(this + (iVar5 - iVar1) * 4 + 0x980) + 4) & 0x20) == 0)) goto LAB_0048553a;
  if (*(int *)(param_1 + 0xc) == 5) {
    iVar4 = *(int *)(this + 0x78);
    iVar6 = iVar5 + -1;
    iVar3 = iVar4;
LAB_004854e4:
    if (iVar3 == 0) goto LAB_00485511;
    if (iVar6 < iVar4) {
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      *(int *)(this + 0x6c) = iVar6;
    }
    else {
      *(int *)(this + 0x6c) = iVar4 + -1;
    }
  }
  else {
    if (*(int *)(param_1 + 0xc) != 6) goto LAB_0048553a;
    iVar4 = *(int *)(this + 0x78);
    iVar6 = iVar5 + 1;
    if (iVar4 != 0) {
      iVar3 = iVar5 + 2;
      goto LAB_004854e4;
    }
LAB_00485511:
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
  }
  iVar6 = *(int *)(this + 0x6c);
  if (iVar5 != iVar6) {
    if ((iVar6 != -1) &&
       (((iVar6 < iVar1 && (0 < iVar1)) || ((iVar1 + iVar2 <= iVar6 && (iVar1 < iVar4 - iVar2))))))
    {
      *(undefined4 *)(this + 0xa04) = 0x3ca3d70a;
      *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 1;
    }
    wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::SetFocusToSelected
              ((wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *)this);
    ProcessScroll(this);
    return 0;
  }
  if ((iVar4 == 0) || (iVar5 == -1)) {
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
    iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
    return iVar5;
  }
  if (iVar5 < iVar4) {
    if (iVar5 < 0) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = iVar4 + -1;
  }
  *(int *)(this + 0x6c) = iVar5;
LAB_0048553a:
  iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar5;
}




/* from: wr_ui.cpp
   addr: 004855B0 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::ProcessUpdate
          (wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *this,
          void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wrUI_SCROLL_BAR *this_00;
  uiELEMENT *puVar4;
  
  if (*(int *)(this + 0xa08) == 0) {
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
  if (iVar2 == -1) goto LAB_00485757;
  iVar1 = *(int *)(this + 0x74);
  if (iVar2 < iVar1) {
LAB_0048561c:
    if (*(int *)(this + 0x78) - *(int *)(this + 0x97c) < iVar2) {
      iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
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
      if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0xa00);
    if (this_00 != (wrUI_SCROLL_BAR *)0x0) {
      iVar2 = *(int *)(this + 0x74);
LAB_00485711:
      wrUI_SCROLL_BAR::SetPos(this_00,iVar2);
    }
  }
  else if (*(int *)(this + 0x97c) + iVar1 <= iVar2) {
    if (iVar2 < iVar1) goto LAB_0048561c;
    iVar2 = iVar2 - *(int *)(this + 0x97c);
    iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
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
      if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
        wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),*(int *)(this + 0x74));
      }
    }
    this_00 = *(wrUI_SCROLL_BAR **)(this + 0xa00);
    if (this_00 == (wrUI_SCROLL_BAR *)0x0) goto LAB_00485716;
    iVar2 = *(int *)(this + 0x74);
    goto LAB_00485711;
  }
LAB_00485716:
  iVar2 = *(int *)(this + 0x6c);
  if (iVar2 != -1) {
    iVar1 = *(int *)(this + 0x74);
    if ((iVar2 < iVar1) || (*(int *)(this + 0x97c) + iVar1 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      puVar4 = (uiELEMENT *)0x0;
    }
    else {
      puVar4 = *(uiELEMENT **)(this + (iVar2 - iVar1) * 4 + 0x980);
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,puVar4);
  }
LAB_00485757:
  *(undefined4 *)(this + 0xa08) = 0;
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui.cpp
   addr: 00485790 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::OnScrollNotify
          (wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *this,
          wrUI_SCROLL_BAR *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *pwVar3;
  int iVar4;
  wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *pwVar5;
  
  iVar2 = *(int *)(this + 0x6c);
  iVar4 = *(int *)(this + 0x74);
  if ((((iVar4 <= iVar2) && (iVar2 < *(int *)(this + 0x97c) + iVar4)) &&
      ((*(uint *)(*(int *)(this + (iVar2 - iVar4) * 4 + 0x980) + 4) & 0x20) != 0)) ||
     (bVar1 = false, *(int *)(uiSystem + 0x10) == 0)) {
    bVar1 = true;
  }
  if (*(int *)(this + 0x78) - *(int *)(this + 0x97c) < param_2) {
    param_2 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (iVar4 != param_2) {
    *(int *)(this + 0x74) = param_2;
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + 1;
    iVar2 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
    if (*(int *)(this + 0x97c) <= iVar2) {
      iVar2 = *(int *)(this + 0x97c);
    }
    iVar4 = 0;
    if (0 < iVar2) {
      pwVar5 = this + 0x980;
      pwVar3 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
      param_2 = iVar2;
      do {
        (**(code **)(**(int **)pwVar5 + 0x10))(1);
        wrUI_ADVSERV_INFO::SetRecord(*(wrUI_ADVSERV_INFO **)pwVar5,(wrUI_ADVSERV_RECORD *)pwVar3);
        pwVar5 = pwVar5 + 4;
        pwVar3 = (wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *)
                 ((wrUI_ADVSERV_RECORD *)pwVar3 + 0x24);
        param_2 = param_2 + -1;
        iVar4 = iVar2;
      } while (param_2 != 0);
    }
    if (iVar4 < *(int *)(this + 0x97c)) {
      pwVar5 = this + iVar4 * 4 + 0x980;
      do {
        wrUI_ADVSERV_INFO::ClearRecord(*(wrUI_ADVSERV_INFO **)pwVar5);
        (**(code **)(**(int **)pwVar5 + 0x10))(0);
        iVar4 = iVar4 + 1;
        pwVar5 = pwVar5 + 4;
      } while (iVar4 < *(int *)(this + 0x97c));
    }
    wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO>::SetSelectedRec
              ((wrUI_WINDOW_SCROLL<struct_wrUI_LS_RECORD,class_wrUI_LS_INFO> *)this,
               *(int *)(this + 0x6c),1);
    *(int *)(uiSystem + 0x128) = *(int *)(uiSystem + 0x128) + -1;
    (**(code **)(*(int *)uiSystem + 0x84))(1);
    if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
      wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),*(int *)(this + 0x74));
    }
  }
  if ((bVar1) && (iVar2 = *(int *)(this + 0x6c), iVar2 != -1)) {
    iVar4 = *(int *)(this + 0x74);
    if ((iVar2 < iVar4) || (*(int *)(this + 0x97c) + iVar4 <= iVar2)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
      return;
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar2 - iVar4) * 4 + 0x980));
  }
  return;
}




/* from: wr_ui.cpp
   addr: 00485940 */

int __thiscall
wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO>::OnKbdFocus
          (wrUI_WINDOW_SCROLL<class_wrUI_CTRL_RECORD,class_wrUI_CTRL_INFO> *this,uiELEMENT *param_1)

{
  if (param_1 == (uiELEMENT *)this) {
    *(undefined4 *)(this + 0xa08) = 1;
  }
  return 1;
}




/* from: wr_ui.cpp
   addr: 00485960 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::SetFocusToSelected
          (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x6c);
  if (iVar1 != -1) {
    iVar2 = *(int *)(this + 0x74);
    if ((iVar1 < iVar2) || (*(int *)(this + 0x97c) + iVar2 <= iVar1)) {
      if ((*(uint *)(this + 0x70) & 1) != 0) {
        *(uint *)(this + 0x70) = *(uint *)(this + 0x70) | 2;
      }
      uiUI_SYSTEM::SetKbdFocus(uiSystem,(uiELEMENT *)0x0);
      return;
    }
    uiUI_SYSTEM::SetKbdFocus(uiSystem,*(uiELEMENT **)(this + (iVar1 - iVar2) * 4 + 0x980));
  }
  return;
}




/* from: wr_ui.cpp
   addr: 004859B0 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::UpdateContext
          (wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *this)

{
  int iVar1;
  wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *pwVar2;
  int iVar3;
  wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *pwVar4;
  int local_4;
  
  iVar1 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
  if (*(int *)(this + 0x97c) <= iVar1) {
    iVar1 = *(int *)(this + 0x97c);
  }
  iVar3 = 0;
  if (0 < iVar1) {
    pwVar4 = this + 0x980;
    pwVar2 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
    local_4 = iVar1;
    do {
      (**(code **)(**(int **)pwVar4 + 0x10))(1);
      wrUI_ADVSERV_INFO::SetRecord(*(wrUI_ADVSERV_INFO **)pwVar4,(wrUI_ADVSERV_RECORD *)pwVar2);
      pwVar4 = pwVar4 + 4;
      pwVar2 = (wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *)
               ((wrUI_ADVSERV_RECORD *)pwVar2 + 0x24);
      local_4 = local_4 + -1;
      iVar3 = iVar1;
    } while (local_4 != 0);
  }
  if (iVar3 < *(int *)(this + 0x97c)) {
    pwVar4 = this + iVar3 * 4 + 0x980;
    do {
      wrUI_ADVSERV_INFO::ClearRecord(*(wrUI_ADVSERV_INFO **)pwVar4);
      (**(code **)(**(int **)pwVar4 + 0x10))(0);
      iVar3 = iVar3 + 1;
      pwVar4 = pwVar4 + 4;
    } while (iVar3 < *(int *)(this + 0x97c));
  }
  iVar1 = *(int *)(this + 0x78);
  iVar3 = *(int *)(this + 0x6c);
  if ((iVar1 != 0) && (iVar3 != -1)) {
    if (iVar3 < iVar1) {
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      *(int *)(this + 0x6c) = iVar3;
      return;
    }
    *(int *)(this + 0x6c) = iVar1 + -1;
    return;
  }
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  return;
}




/* from: wr_ui.cpp
   addr: 00485A70 */

void * __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::_vector_deleting_destructor_
          (wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *this,uint param_1
          )

{
  wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *pwVar1;
  int iVar2;
  wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *pwVar3;
  
  iVar2 = 0x40;
  *(undefined ***)this = &_vftable_;
  pwVar3 = this + 0x97c;
  do {
    pwVar1 = pwVar3 + -0x18;
    pwVar3 = pwVar3 + -0x24;
    apFree(*(void **)pwVar1);
    apFree(*(void **)pwVar3);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined ***)this = &uiELEMENT::_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: wr_ui.cpp
   addr: 00485AC0 */

int __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO>::ProcessInit
          (wrUI_WINDOW_SCROLL<struct_wrUI_VIDEO_RECORD,class_wrUI_VIDEO_INFO> *this,void *param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x6c) = 0xffffffff;
  puVar2 = uiELEMENT::FindChildElement(*(uiELEMENT **)(this + 8),s_scrollbar);
  *(uiELEMENT **)(this + 0xa00) = puVar2;
  iVar3 = *(int *)(this + 0x14);
  *(undefined4 *)(this + 0x97c) = 0;
  for (iVar1 = iVar3; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    if ((*(uint *)(iVar1 + 4) & 0x8000) != 0) {
      *(int *)(this + 0x97c) = *(int *)(this + 0x97c) + 1;
    }
  }
  *(undefined4 *)(this + 0x97c) = 0;
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x10)) {
    if ((*(uint *)(iVar3 + 4) & 0x8000) != 0) {
      *(int *)(this + *(int *)(this + 0x97c) * 4 + 0x980) = iVar3;
      *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffbff;
      *(int *)(this + 0x97c) = *(int *)(this + 0x97c) + 1;
    }
  }
  iVar3 = *(int *)(this + 0xa00);
  if (iVar3 != 0) {
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & 0xfffffbff;
    *(uint *)(*(int *)(this + 0xa00) + 4) = *(uint *)(*(int *)(this + 0xa00) + 4) & 0xfffffffb;
    *(uint *)(*(int *)(this + 0xa00) + 4) = *(uint *)(*(int *)(this + 0xa00) + 4) & 0xfffffff7;
    iVar3 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    wrUI_SCROLL_BAR::SetWindow(*(wrUI_SCROLL_BAR **)(this + 0xa00),(wrUI_WINDOW *)this,iVar3,1);
    wrUI_SCROLL_BAR::SetPos(*(wrUI_SCROLL_BAR **)(this + 0xa00),0);
  }
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x40c;
  return 1;
}




/* from: wr_ui.cpp
   addr: 00485BC0 */

void __thiscall
wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO>::OnChildNotify
          (wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *this,
          uiCHILD_NOTIFY *param_1)

{
  wrUI_WINDOW_SCROLL<struct_wrUI_ADVSERV_RECORD,class_wrUI_ADVSERV_INFO> *pwVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) != 0x464f4353) {
    uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
    return;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0x97c)) {
    pwVar1 = this + 0x980;
    while (*(int *)param_1 != *(int *)pwVar1) {
      iVar2 = iVar2 + 1;
      pwVar1 = pwVar1 + 4;
      if (*(int *)(this + 0x97c) <= iVar2) {
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




/* from: wr_ui.cpp
   addr: 00485C40 */

uiELEMENT * __fastcall wrUI_COMICS::Create(void)

{
  wrUI_COMICS *this;
  uiELEMENT *puVar1;
  
  this = (wrUI_COMICS *)operator_new(0x1a8);
  if (this != (wrUI_COMICS *)0x0) {
    puVar1 = (uiELEMENT *)wrUI_COMICS(this);
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}




/* from: wr_ui.cpp
   addr: 00485C60 */

uiELEMENT * __fastcall wrUI_COMICS_FRAME::Create(void)

{
  wrUI_COMICS_FRAME *this;
  uiELEMENT *puVar1;
  
  this = (wrUI_COMICS_FRAME *)operator_new(0x80);
  if (this != (wrUI_COMICS_FRAME *)0x0) {
    puVar1 = (uiELEMENT *)wrUI_COMICS_FRAME(this);
    return puVar1;
  }
  return (uiELEMENT *)0x0;
}




