
/* from: wr_ui_audio.cpp
   addr: 00485C80 */

int __thiscall wrUI_AUDIO_WND::StartAppearing(wrUI_AUDIO_WND *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    LoadSettings(this);
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_audio.cpp
   addr: 00485CA0 */

void __thiscall
wrUI_AUDIO_WND::OnScrollNotify(wrUI_AUDIO_WND *this,wrUI_SCROLL_BAR *param_1,int param_2)

{
  char *pcVar1;
  
  if (*(int *)(param_1 + 0x15c) == 0x4d5553) {
    param_2 = (int)((float)param_2 - ___real_42480000);
    if (___real_00000000 < (float)param_2) {
      param_2 = 0;
    }
    pcVar1 = s_Music_Volume;
  }
  else {
    if (*(int *)(param_1 + 0x15c) != 0x534e44) {
      return;
    }
    param_2 = (int)((float)param_2 - ___real_42480000);
    if (___real_00000000 < (float)param_2) {
      param_2 = 0;
    }
    pcVar1 = s_Volume;
  }
  apCfgWriteFloat(s_Sound,pcVar1,(float)param_2);
  gsSND_SYSTEM::ApplySettings(gsSysSound);
  this[0x78] = (wrUI_AUDIO_WND)0x1;
  return;
}




/* from: wr_ui_audio.cpp
   addr: 00485D40 */

void __thiscall wrUI_AUDIO_WND::OnChildNotify(wrUI_AUDIO_WND *this,uiCHILD_NOTIFY *param_1)

{
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    if (*(int *)(param_1 + 8) == 0x414343) {
      ApplySettings(this);
      uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
      return;
    }
    if (*(int *)(param_1 + 8) == 0x4241434b) {
      RestoreSettings(this);
      uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 4) == 0x54534352) {
    this[0x78] = (wrUI_AUDIO_WND)0x1;
  }
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_audio.cpp
   addr: 00485DB0 */

void __thiscall wrUI_AUDIO_WND::LoadSettings(wrUI_AUDIO_WND *this)

{
  wrUI_AUDIO_WND *pwVar1;
  uiELEMENT *puVar2;
  int iVar3;
  float local_8;
  int local_4;
  
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_music_volume);
  wrUI_SCROLL_BAR::SetWindow((wrUI_SCROLL_BAR *)puVar2,(wrUI_WINDOW *)this,0x32,1);
  local_8 = 0.0;
  iVar3 = _apCfgReadBool((void **)0x0,s_Sound,s_Music,&local_4);
  if ((iVar3 == 0) || (local_4 != 0)) {
    iVar3 = _apCfgReadFloat((void **)0x0,s_Sound,s_Music_Volume,&local_8);
    if (iVar3 == 0) {
      local_8 = -15.0;
    }
  }
  else {
    local_8 = -50.0;
  }
  *(float *)(this + 0x6c) = local_8;
  iVar3 = ftol();
  wrUI_SCROLL_BAR::SetPos((wrUI_SCROLL_BAR *)puVar2,iVar3);
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_sfx_volume);
  wrUI_SCROLL_BAR::SetWindow((wrUI_SCROLL_BAR *)puVar2,(wrUI_WINDOW *)this,0x32,1);
  local_8 = 0.0;
  iVar3 = _apCfgReadBool((void **)0x0,s_Sound,s_SFX,&local_4);
  if ((iVar3 == 0) || (local_4 != 0)) {
    iVar3 = _apCfgReadFloat((void **)0x0,s_Sound,s_Volume,&local_8);
    if (iVar3 == 0) {
      local_8 = -15.0;
    }
  }
  else {
    local_8 = -50.0;
  }
  *(float *)(this + 0x70) = local_8;
  iVar3 = ftol();
  wrUI_SCROLL_BAR::SetPos((wrUI_SCROLL_BAR *)puVar2,iVar3);
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_reverse_stereo);
  pwVar1 = this + 0x74;
  iVar3 = _apCfgReadBool((void **)0x0,s_Sound,s_SwitchChn,(int *)pwVar1);
  if (iVar3 == 0) {
    *(int *)pwVar1 = 0;
  }
  (**(code **)(*(int *)puVar2 + 0x60))(*(int *)pwVar1 - *(int *)(puVar2 + 300));
  this[0x78] = (wrUI_AUDIO_WND)0x0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_audio.cpp
   addr: 00485F20 */

void __thiscall wrUI_AUDIO_WND::ApplySettings(wrUI_AUDIO_WND *this)

{
  uiELEMENT *puVar1;
  int iVar2;
  float local_4;
  
  if (this[0x78] != (wrUI_AUDIO_WND)0x0) {
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_music_volume);
    iVar2 = wrUI_SCROLL_BAR::GetPos((wrUI_SCROLL_BAR *)puVar1);
    apCfgWriteBool(s_Sound,s_Music,(uint)(iVar2 != 0));
    local_4 = (float)iVar2 - ___real_42480000;
    if (___real_00000000 < local_4) {
      local_4 = 0.0;
    }
    apCfgWriteFloat(s_Sound,s_Music_Volume,local_4);
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_sfx_volume);
    iVar2 = wrUI_SCROLL_BAR::GetPos((wrUI_SCROLL_BAR *)puVar1);
    apCfgWriteBool(s_Sound,s_SFX,(uint)(iVar2 != 0));
    local_4 = (float)iVar2 - ___real_42480000;
    if (___real_00000000 < local_4) {
      local_4 = 0.0;
    }
    apCfgWriteFloat(s_Sound,s_Volume,local_4);
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_reverse_stereo);
    apCfgWriteBool(s_Sound,s_SwitchChn,*(int *)(puVar1 + 300));
    gsSND_SYSTEM::ApplySettings(gsSysSound);
    return;
  }
  return;
}




/* from: wr_ui_audio.cpp
   addr: 00486030 */

void __thiscall wrUI_AUDIO_WND::RestoreSettings(wrUI_AUDIO_WND *this)

{
  int iVar1;
  uiELEMENT *puVar2;
  
  if (this[0x78] != (wrUI_AUDIO_WND)0x0) {
    uiELEMENT::FindChildElement((uiELEMENT *)this,s_music_volume);
    iVar1 = ftol();
    apCfgWriteBool(s_Sound,s_Music,(uint)(iVar1 != 0));
    apCfgWriteFloat(s_Sound,s_Music_Volume,*(float *)(this + 0x6c));
    uiELEMENT::FindChildElement((uiELEMENT *)this,s_sfx_volume);
    iVar1 = ftol();
    apCfgWriteBool(s_Sound,s_SFX,(uint)(iVar1 != 0));
    apCfgWriteFloat(s_Sound,s_Volume,*(float *)(this + 0x70));
    puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_reverse_stereo);
    (**(code **)(*(int *)puVar2 + 0x60))(*(int *)(this + 0x74) - *(int *)(puVar2 + 300));
    apCfgWriteBool(s_Sound,s_SwitchChn,*(int *)(this + 0x74));
    gsSND_SYSTEM::ApplySettings(gsSysSound);
    return;
  }
  return;
}

