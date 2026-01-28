
/* from: wr_ui_gameopt.cpp
   addr: 004892C0 */

ushort * __thiscall wrUI_CROSSHAIR::GetStr(wrUI_CROSSHAIR *this,int param_1)

{
  gsSTRINGS *this_00;
  int iVar1;
  ushort *puVar2;
  
  this_00 = gsStrings;
  if (param_1 < 6) {
    return (ushort *)u_;
  }
  iVar1 = gsSTRINGS::GetStringId(gsStrings,s_UI_CUSOR_OFF);
  puVar2 = gsSTRINGS::GetStringById(this_00,iVar1);
  return puVar2;
}




/* from: wr_ui_gameopt.cpp
   addr: 004892F0 */

void __thiscall wrUI_CROSSHAIR::OnScrolled(wrUI_CROSSHAIR *this)

{
  txmTEXTURE *ptVar1;
  
  if (*(int *)(this + 300) == 6) {
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 1;
    return;
  }
  *(uint *)(this + 0xac) = *(uint *)(this + 0xac) & 0xfffffffe;
  ptVar1 = wrCURSORS::GetCursorTexture(wrCURSORS::pInstance,*(int *)(this + 300),0);
  uiRENDER_INFO::SetTex((uiRENDER_INFO *)(this + 0x6c),ptVar1);
  return;
}




/* from: wr_ui_gameopt.cpp
   addr: 00489330 */

int __thiscall wrUI_CROSSHAIR::ProcessInit(wrUI_CROSSHAIR *this,void *param_1)

{
  int iVar1;
  txmTEXTURE *ptVar2;
  
  uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  iVar1 = *(int *)wrCURSORS::pInstance;
  *(int *)(this + 300) = iVar1;
  if (iVar1 == 6) {
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 1;
    return 1;
  }
  *(uint *)(this + 0xac) = *(uint *)(this + 0xac) & 0xfffffffe;
  ptVar2 = wrCURSORS::GetCursorTexture(wrCURSORS::pInstance,*(int *)(this + 300),0);
  uiRENDER_INFO::SetTex((uiRENDER_INFO *)(this + 0x6c),ptVar2);
  return 1;
}




/* from: wr_ui_gameopt.cpp
   addr: 004893A0 */

int __thiscall wrUI_GAME_OPT_WINDOW::ProcessInit(wrUI_GAME_OPT_WINDOW *this,void *param_1)

{
  uiELEMENT *puVar1;
  int iVar2;
  gsSTRINGS *extraout_ECX;
  gsSTRINGS *this_00;
  gsSTRINGS *extraout_ECX_00;
  ulong uVar3;
  
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_autoweapon);
  wrUI_STRINGS::PreInit((wrUI_STRINGS *)(puVar1 + 0x138),4,0);
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_autoweapon);
  wrUI_STRINGS::Clear((wrUI_STRINGS *)(puVar1 + 0x138));
  uVar3 = 0;
  this_00 = extraout_ECX;
  while( true ) {
    iVar2 = gsSTRINGS::GetStringIdFmt(this_00,(char *)gsStrings,s_UI_AUTOWPN__i,uVar3);
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_autoweapon);
    if (iVar2 == 0) break;
    wrUI_STRINGS::AddString((wrUI_STRINGS *)(puVar1 + 0x138),iVar2,uVar3);
    uVar3 = uVar3 + 1;
    this_00 = extraout_ECX_00;
  }
  wrUI_STRINGS::Compact((wrUI_STRINGS *)(puVar1 + 0x138));
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui_gameopt.cpp
   addr: 00489430 */

int __thiscall wrUI_GAME_OPT_WINDOW::StartAppearing(wrUI_GAME_OPT_WINDOW *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    LoadSettings(this);
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_gameopt.cpp
   addr: 00489450 */

void __thiscall
wrUI_GAME_OPT_WINDOW::OnChildNotify(wrUI_GAME_OPT_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  uiELEMENT *puVar1;
  
  if ((*(int *)(param_1 + 4) == 0x42544e43) && (*(int *)(param_1 + 8) == 0x414343)) {
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_autoweapon);
    apCfgWriteInt(s_GameOpt,s_AutoWeapon,*(int *)(puVar1 + 300));
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_hide_hud);
    apCfgWriteBool(s_GameOpt,s_HideHUD,(uint)(*(int *)(puVar1 + 300) != 0));
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_crosshair);
    apCfgWriteInt(s_GameOpt,s_Crosshair,*(int *)(puVar1 + 300));
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_subtitles);
    apCfgWriteBool(s_GameOpt,s_Subtitles,(uint)(*(int *)(puVar1 + 300) != 0));
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_crosshair);
    wrCURSORS::SetCursor(wrCURSORS::pInstance,*(int *)(puVar1 + 300));
  }
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_gameopt.cpp
   addr: 00489540 */

void __thiscall wrUI_GAME_OPT_WINDOW::LoadSettings(wrUI_GAME_OPT_WINDOW *this)

{
  int iVar1;
  uiELEMENT *puVar2;
  int unaff_ESI;
  int local_8 [2];
  
  iVar1 = _apCfgReadInt((void **)0x0,s_GameOpt,s_AutoWeapon,local_8);
  if (iVar1 == 0) {
    local_8[0] = 0;
  }
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_autoweapon);
  (**(code **)(*(int *)puVar2 + 0x60))(local_8[0] - *(int *)(puVar2 + 300));
  iVar1 = _apCfgReadBool((void **)0x0,s_GameOpt,s_HideHUD,local_8);
  if (iVar1 == 0) {
    local_8[0] = 1;
  }
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_hide_hud);
  (**(code **)(*(int *)puVar2 + 0x60))((uint)(local_8[0] != 0) - *(int *)(puVar2 + 300));
  iVar1 = _apCfgReadInt((void **)0x0,s_GameOpt,s_Crosshair,(int *)&stack0xfffffff0);
  if (iVar1 == 0) {
    unaff_ESI = 0;
  }
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_crosshair);
  (**(code **)(*(int *)puVar2 + 0x60))(unaff_ESI - *(int *)(puVar2 + 300));
  iVar1 = _apCfgReadBool((void **)0x0,s_GameOpt,s_Subtitles,(int *)&stack0xfffffff0);
  if (iVar1 == 0) {
    unaff_ESI = 1;
  }
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_subtitles);
  (**(code **)(*(int *)puVar2 + 0x60))((uint)(unaff_ESI != 0) - *(int *)(puVar2 + 300));
  return;
}

