
/* from: wr_ui_server.cpp
   addr: 00490E40 */

int __thiscall wrUI_WAITSERVER_WND::StartAppearing(wrUI_WAITSERVER_WND *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  
  if (param_1 != 0) {
    fVar3 = 0.0;
    pcVar1 = gsMP_NETWORK::Server_GetStatus(gsSysNetwork);
    wrUI_MP_WND::SetStatusStr((wrUI_MP_WND *)this,pcVar1,fVar3);
  }
  iVar2 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar2;
}




/* WARNING: Type propagation algorithm not settling */
/* from: wr_ui_server.cpp
   addr: 00490E70 */

int __thiscall wrUI_WAITSERVER_WND::ProcessUpdate(wrUI_WAITSERVER_WND *this,void *param_1)

{
  gsSTRINGS *this_00;
  char *pcVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  int local_38 [2];
  char local_30 [28];
  uiINPUT_INFO *puStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_38[1] = 0x7b;
  pcVar1 = local_30;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = pcVar1 + 4;
  }
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if ((*(uint *)(this + 4) & 0x140) == 0) {
    iVar5 = gsMP_NETWORK::Server_IsStarted(gsSysNetwork);
    if (iVar5 != 0) {
      local_38[0] = 0x34;
      gsMP_NETWORK::Server_GetMainData(gsSysNetwork,local_38 + 1,local_38);
      iVar5 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_CANT_START_GAME);
      wrUI_SYSTEM::StartLoadingAction((wrUI_SYSTEM *)uiSystem,1,2,local_30,iVar5);
      iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
      return iVar5;
    }
    iVar5 = gsMP_NETWORK::Server_IsError(gsSysNetwork);
    if (iVar5 != 0) {
      pcVar1 = gsMP_NETWORK::Server_GetStatus(gsSysNetwork);
      iVar5 = gsSTRINGS::GetStringIdFmt(gsStrings,(char *)gsStrings,s_UI_NET_STATUS__s,pcVar1);
      if (iVar5 == 0) {
        pcVar1 = gsMP_NETWORK::Server_GetStatus(gsSysNetwork);
        puVar2 = gsSTRINGS::AsciiToUnicode(gsStrings,pcVar1);
      }
      else {
        puVar2 = gsSTRINGS::GetStringById(gsStrings,iVar5);
      }
      this_00 = gsStrings;
      pcVar1 = s_connection;
      iVar5 = *(int *)uiSystem;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_SERVER_REGISTER_ERROR);
      puVar4 = gsSTRINGS::GetStringById(this_00,iVar3);
      (**(code **)(iVar5 + 0x14))(puVar4,puVar2,uVar6,uVar7,uVar8,pcVar1);
      iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,puStack_14);
      return iVar5;
    }
  }
  fVar9 = 0.0;
  pcVar1 = gsMP_NETWORK::Server_GetStatus(gsSysNetwork);
  wrUI_MP_WND::SetStatusStr((wrUI_MP_WND *)this,pcVar1,fVar9);
  iVar5 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar5;
}




/* from: wr_ui_server.cpp
   addr: 00490FE0 */

void __thiscall wrUI_ADVSERV_RECORD::wrUI_ADVSERV_RECORD(wrUI_ADVSERV_RECORD *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 1;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}




/* from: wr_ui_server.cpp
   addr: 00491010 */

void __thiscall wrUI_ADVSERV_INFO::SetRecord(wrUI_ADVSERV_INFO *this,wrUI_ADVSERV_RECORD *param_1)

{
  int iVar1;
  wrUI_ADVSERV_INFO *pwVar2;
  int iVar3;
  
  *(wrUI_ADVSERV_RECORD **)(this + 0x138) = param_1;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffd7ff;
  uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this + 0x13c),*(int *)(param_1 + 0x1c));
  *(undefined4 *)(this + 300) = *(undefined4 *)(*(int *)(this + 0x138) + 0x18);
  if ((*(int *)(*(int *)(this + 0x138) + 0x10) == 1) &&
     (pwVar2 = this + 0x130, *(int *)(this + 0x130) != 0)) {
    iVar3 = 2;
    do {
      iVar1 = *(int *)pwVar2;
      pwVar2 = pwVar2 + 4;
      iVar3 = iVar3 + -1;
      *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 8;
    } while (iVar3 != 0);
  }
  wrUI_TEXT_SCROLL::UpdateArrows((wrUI_TEXT_SCROLL *)this);
  return;
}




/* from: wr_ui_server.cpp
   addr: 00491080
   addr: 00491080 */

void __thiscall wrUI_ADVSERV_INFO::ClearRecord(wrUI_ADVSERV_INFO *this)

{
  *(undefined4 *)(this + 0x138) = 0;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x2800;
  return;
}




/* from: wr_ui_server.cpp
   addr: 004910A0 */

ushort * __thiscall wrUI_ADVSERV_INFO::GetStr(wrUI_ADVSERV_INFO *this,int param_1)

{
  wrUI_STRINGS *this_00;
  char **ppcVar1;
  
  this_00 = *(wrUI_STRINGS **)(this + 0x138);
  if (this_00 == (wrUI_STRINGS *)0x0) {
    return (ushort *)u_;
  }
  ppcVar1 = (char **)wrUI_STRINGS::GetStr(this_00,param_1);
  if (*(ushort *)ppcVar1 == 0) {
    swprintf((wchar_t *)&apBuffer,u__i,*(undefined4 *)(*(int *)(this_00 + 0xc) + 4 + param_1 * 8));
    ppcVar1 = &apBuffer;
  }
  return (ushort *)ppcVar1;
}




/* from: wr_ui_server.cpp
   addr: 004910F0
   addr: 004910F0 */

void __thiscall wrUI_VIDEO_INFO::Init(wrUI_VIDEO_INFO *this,objOBJ *param_1)

{
  uiRENDER_ELEM *puVar1;
  
  wrUI_TEXT_SCROLL::Init((wrUI_TEXT_SCROLL *)this,param_1);
  puVar1 = uiRENDER_INFO::FindElement((uiRENDER_INFO *)(this + 0x6c),s_caption);
  *(uiRENDER_ELEM **)(this + 0x13c) = puVar1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 0x8000;
  return;
}




/* from: wr_ui_server.cpp
   addr: 00491120 */

int __thiscall wrUI_ADVSERV_WINDOW::ProcessInit(wrUI_ADVSERV_WINDOW *this,void *param_1)

{
  int iVar1;
  uiELEMENT *puVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x78) = 0;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_server_name);
  *(uiELEMENT **)(this + 0xa0c) = puVar2;
  (**(code **)(*(int *)puVar2 + 100))(0x20);
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




/* from: wr_ui_server.cpp
   addr: 00491240 */

int __thiscall wrUI_ADVSERV_WINDOW::StartAppearing(wrUI_ADVSERV_WINDOW *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    LoadOptions(this);
    *(undefined4 *)(this + 0xa10) = 0xffffffff;
    ResetList(this);
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_server.cpp
   addr: 00491270 */

void __thiscall
wrUI_ADVSERV_WINDOW::OnChildNotify(wrUI_ADVSERV_WINDOW *this,uiCHILD_NOTIFY *param_1)

{
  wrUI_ADVSERV_WINDOW *pwVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    if (*(int *)(param_1 + 8) == 0x43524541) {
      ResetList(this);
      SaveOptions(this,1);
      (**(code **)(*(int *)uiSystem + 0x10))(s_mp_wait_server,8);
      return;
    }
  }
  else if ((((*(int *)(param_1 + 4) == 0x54534352) && (*(int *)(param_1 + 8) == 0x43484e47)) &&
           (*(int *)(this + 0x74) == 0)) && (*(int *)param_1 == *(int *)(this + 0x980))) {
    ResetList(this);
  }
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
      return;
    }
  }
  return;
}




/* from: wr_ui_server.cpp
   addr: 00491360 */

void __thiscall wrUI_ADVSERV_WINDOW::LoadOptions(wrUI_ADVSERV_WINDOW *this)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  float local_104;
  char local_100 [256];
  
  iVar2 = _apCfgReadString((void **)0x0,s_Multiplayer,s_ServerName,local_100,0x100);
  if (iVar2 == 0) {
    do {
      cVar1 = s_Unnamed[iVar2];
      local_100[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
  }
  puVar3 = gsSTRINGS::AsciiToUnicode(gsStrings,local_100);
  uiTEXT_INPUT::SetEditText(*(uiTEXT_INPUT **)(this + 0xa0c),puVar3);
  *(undefined4 *)(this + 0xa14) = 0;
  *(undefined4 *)(this + 0xa3c) = 0;
  *(int *)(this + 0xa18) = 8;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerMaxPlayers,(int *)(this + 0xa18));
  *(undefined4 *)(this + 0xa1c) = 0;
  iVar2 = _apCfgReadFloat((void **)0x0,s_Multiplayer,s_ServerTimeLimit,&local_104);
  if (iVar2 != 0) {
    uVar4 = ftol();
    *(undefined4 *)(this + 0xa1c) = uVar4;
  }
  *(int *)(this + 0xa20) = 0x1e;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerFragLimit,(int *)(this + 0xa20));
  *(undefined4 *)(this + 0xa24) = 2;
  iVar2 = _apCfgReadFloat((void **)0x0,s_Multiplayer,s_ServerPlrGODAfterDeath,&local_104);
  if (iVar2 != 0) {
    uVar4 = ftol();
    *(undefined4 *)(this + 0xa24) = uVar4;
  }
  *(int *)(this + 0xa28) = 1;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_Difficulty,(int *)(this + 0xa28));
  *(int *)(this + 0xa2c) = 1;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerAllowHealth,(int *)(this + 0xa2c));
  *(int *)(this + 0xa30) = 1;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerAllowArmor,(int *)(this + 0xa30));
  *(int *)(this + 0xa34) = 0;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerPlrIsUnlimitAmmo,(int *)(this + 0xa34));
  *(int *)(this + 0xa38) = 1;
  _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerPlrIsFriendlyFire,(int *)(this + 0xa38));
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: wr_ui_server.cpp
   addr: 00491510 */

void __thiscall wrUI_ADVSERV_WINDOW::SaveOptions(wrUI_ADVSERV_WINDOW *this,int param_1)

{
  ushort *puVar1;
  int iVar2;
  char *pcVar3;
  int local_18c [2];
  char local_184 [31];
  undefined1 local_165;
  char local_164 [12];
  uint local_158;
  gsMP_SERVER_INFO local_154 [63];
  undefined1 local_115;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  char local_100 [256];
  
  local_18c[1] = 0x7b;
  pcVar3 = local_184;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  local_164[0] = '\0';
  local_164[1] = '\0';
  local_164[2] = '\0';
  local_164[3] = '\0';
  local_164[4] = '\0';
  local_164[5] = '\0';
  local_164[6] = '\0';
  local_164[7] = '\0';
  local_164[8] = '\0';
  local_164[9] = '\0';
  local_164[10] = '\0';
  local_164[0xb] = '\0';
  local_158 = 0;
  apCfgWriteString(s_Multiplayer,s_ServerMode,(&PTR_s_SINGLE_005da64c)[*(int *)(this + 0xa10)]);
  pcVar3 = local_100;
  iVar2 = 0x100;
  puVar1 = uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0xa0c));
  gsSTRINGS::UnicodeToAscii(gsStrings,puVar1,pcVar3,iVar2);
  apCfgWriteString(s_Multiplayer,s_ServerName,local_100);
  apCfgWriteString(s_Multiplayer,s_ServerLocation,
                   (char *)(&DAT_0060ee68)[*(int *)(this + 0xa14) * 2]);
  if (*(int *)(this + 0xa10) != 1) {
    *(undefined4 *)(this + 0xa3c) = 0;
  }
  *(undefined4 *)(this + 0xa3c) = 0;
  apCfgWriteBool(s_Multiplayer,s_ServerUseLadder,0);
  apCfgWriteInt(s_Multiplayer,s_ServerMaxPlayers,*(int *)(this + 0xa18));
  apCfgWriteFloat(s_Multiplayer,s_ServerTimeLimit,(float)*(int *)(this + 0xa1c) * ___real_42700000);
  apCfgWriteInt(s_Multiplayer,s_ServerFragLimit,*(int *)(this + 0xa20));
  apCfgWriteFloat(s_Multiplayer,s_ServerPlrGODAfterDeath,(float)*(int *)(this + 0xa24));
  apCfgWriteInt(s_Multiplayer,s_Difficulty,*(int *)(this + 0xa28));
  apCfgWriteInt(s_Multiplayer,s_ServerAllowHealth,*(int *)(this + 0xa2c));
  apCfgWriteInt(s_Multiplayer,s_ServerAllowArmor,*(int *)(this + 0xa30));
  apCfgWriteInt(s_Multiplayer,s_ServerPlrIsUnlimitAmmo,*(int *)(this + 0xa34));
  apCfgWriteInt(s_Multiplayer,s_ServerPlrIsFriendlyFire,*(int *)(this + 0xa38));
  if (param_1 != 0) {
    strncpy((char *)local_154,local_100,0x40);
    local_114 = *(undefined4 *)(this + 0xa18);
    local_115 = 0;
    if (*(int *)(this + 0xa3c) == 0) {
      local_104 = 0;
    }
    else {
      local_104 = *(int *)(this + 0xa10) + 1;
    }
    iVar2 = _apCfgReadInt((void **)0x0,s_Multiplayer,s_ServerPort,local_18c);
    if (iVar2 == 0) {
      local_18c[0] = 0x1e61;
    }
    local_108 = local_18c[0];
    local_110 = 0;
    local_10c = 0;
    strncpy(local_184,(char *)(&DAT_0060ee68)[*(int *)(this + 0xa14) * 2],0x20);
    local_165 = 0;
    strncpy(local_164,(&PTR_s_SINGLE_005da64c)[*(int *)(this + 0xa10)],0x10);
    local_158 = local_158 & 0xffffff;
    gsMP_NETWORK::Server_Start(gsSysNetwork,local_154);
    gsMP_NETWORK::Server_SetMainData(gsSysNetwork,local_18c + 1,0x34);
  }
  return;
}




/* from: wr_ui_server.cpp
   addr: 004917E0 */

void __thiscall wrUI_ADVSERV_WINDOW::ResetList(wrUI_ADVSERV_WINDOW *this)

{
  byte bVar1;
  code *pcVar2;
  wrUI_TEXT_SCROLL *this_00;
  int iVar3;
  wrUI_ADVSERV_WINDOW *pwVar4;
  byte *pbVar5;
  char **ppcVar6;
  int iVar7;
  wrUI_TEXT_SCROLL *pwVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  wrUI_ADVSERV_WINDOW *pwVar12;
  bool bVar13;
  int local_48;
  byte local_40 [64];
  
  uVar9 = 0xffffffff;
  if (*(int *)(this + 0xa10) != -1) {
    iVar10 = *(int *)(this + 0x78);
    if (0 < iVar10) {
      pwVar4 = this + 0x94;
      do {
        pcVar2 = *(code **)(pwVar4 + 8);
        if ((int)pcVar2 < 0x4845414d) {
          if (pcVar2 == (code *)0x4845414c) {
            *(undefined4 *)(this + 0xa2c) =
                 *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
          }
          else if ((int)pcVar2 < 0x44494647) {
            if (pcVar2 == (code *)0x44494646) {
              *(undefined4 *)(this + 0xa28) =
                   *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
            }
            else if (pcVar2 == (code *)0x4646) {
              *(undefined4 *)(this + 0xa38) =
                   *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
            }
            else if (pcVar2 == pteEMAP_CHROME::Create) {
              *(undefined4 *)(this + 0xa14) =
                   *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
            }
            else if (pcVar2 == (code *)0x41524d52) {
              *(undefined4 *)(this + 0xa30) =
                   *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
            }
          }
          else if (pcVar2 == (code *)0x46524147) {
            *(undefined4 *)(this + 0xa20) =
                 *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
          }
          else if (pcVar2 == (code *)0x474f4144) {
            *(undefined4 *)(this + 0xa24) =
                 *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
          }
        }
        else if ((int)pcVar2 < 0x4d58504d) {
          if (pcVar2 == (code *)0x4d58504c) {
            *(undefined4 *)(this + 0xa18) =
                 *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
          }
          else if (pcVar2 == (code *)0x4c414444) {
            *(undefined4 *)(this + 0xa3c) =
                 *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
          }
          else if (pcVar2 == (code *)0x4d4f4445) {
            uVar9 = *(uint *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
          }
        }
        else if (pcVar2 == (code *)0x54494d45) {
          *(undefined4 *)(this + 0xa1c) =
               *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
        }
        else if (pcVar2 == (code *)0x554e4c41) {
          *(undefined4 *)(this + 0xa34) =
               *(undefined4 *)(*(int *)(pwVar4 + -0xc) + 4 + *(int *)pwVar4 * 8);
        }
        pwVar4 = pwVar4 + 0x24;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    sprintf((char *)local_40,s_ServerLocation__s,(&PTR_s_SINGLE_005da64c)[*(int *)(this + 0xa10)]);
    apCfgWriteString(s_Multiplayer,(char *)local_40,
                     (char *)(&DAT_0060ee68)[*(int *)(this + 0xa14) * 2]);
    if (uVar9 != 0xffffffff) goto LAB_00491a0e;
  }
  _apCfgReadString((void **)0x0,s_Multiplayer,s_ServerMode,(char *)local_40,0x40);
  uVar9 = 0;
  do {
    pbVar11 = (&PTR_s_SINGLE_005da64c)[uVar9];
    pbVar5 = local_40;
    do {
      bVar1 = *pbVar5;
      bVar13 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_004919f3:
        iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_004919f8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar13 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_004919f3;
      pbVar5 = pbVar5 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    iVar10 = 0;
LAB_004919f8:
    if (iVar10 == 0) {
      if (uVar9 != 0xffffffff) goto LAB_00491a0e;
      break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  uVar9 = 1;
LAB_00491a0e:
  if (*(uint *)(this + 0xa10) != uVar9) {
    *(undefined4 *)(this + 0xa10) = 1;
    *(undefined4 *)(this + 0xa14) = 0;
    sprintf((char *)local_40,s_ServerLocation__s,PTR_s_DM_005da650);
    iVar10 = _apCfgReadString((void **)0x0,s_Multiplayer,(char *)local_40,(char *)&apBuffer,0x1000);
    if (iVar10 != 0) {
      iVar10 = 0;
      do {
        if (((&DAT_0060ee6c)[iVar10 * 2] & 1 << ((byte)*(undefined4 *)(this + 0xa10) & 0x1f)) != 0)
        {
          pbVar5 = (byte *)(&DAT_0060ee68)[iVar10 * 2];
          ppcVar6 = &apBuffer;
          do {
            bVar1 = *(byte *)ppcVar6;
            bVar13 = bVar1 < *pbVar5;
            if (bVar1 != *pbVar5) {
LAB_00491aad:
              iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_00491ab2;
            }
            if (bVar1 == 0) break;
            bVar1 = *(byte *)((int)ppcVar6 + 1);
            bVar13 = bVar1 < pbVar5[1];
            if (bVar1 != pbVar5[1]) goto LAB_00491aad;
            ppcVar6 = (char **)((int)ppcVar6 + 2);
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00491ab2:
          if (iVar7 == 0) {
            *(int *)(this + 0xa14) = iVar10;
            break;
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 == 0);
    }
    DoResetList(this);
    if (*(wrUI_SCROLL_BAR **)(this + 0xa00) != (wrUI_SCROLL_BAR *)0x0) {
      iVar10 = *(int *)(this + 0x78) - *(int *)(this + 0x97c);
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      wrUI_SCROLL_BAR::SetWindow(*(wrUI_SCROLL_BAR **)(this + 0xa00),(wrUI_WINDOW *)this,iVar10,1);
    }
    iVar10 = *(int *)(this + 0x78) - *(int *)(this + 0x74);
    if (*(int *)(this + 0x97c) <= iVar10) {
      iVar10 = *(int *)(this + 0x97c);
    }
    iVar7 = 0;
    if (0 < iVar10) {
      pwVar4 = this + *(int *)(this + 0x74) * 0x24 + 0x7c;
      pwVar12 = this + 0x980;
      local_48 = iVar10;
      do {
        (**(code **)(**(int **)pwVar12 + 0x10))(1);
        this_00 = *(wrUI_TEXT_SCROLL **)pwVar12;
        *(wrUI_ADVSERV_WINDOW **)(this_00 + 0x138) = pwVar4;
        *(uint *)(this_00 + 4) = *(uint *)(this_00 + 4) & 0xffffd7ff;
        uiRENDER_ELEM::SetTextId(*(uiRENDER_ELEM **)(this_00 + 0x13c),*(int *)(pwVar4 + 0x1c));
        *(undefined4 *)(this_00 + 300) = *(undefined4 *)(*(int *)(this_00 + 0x138) + 0x18);
        if ((*(int *)(*(int *)(this_00 + 0x138) + 0x10) == 1) &&
           (pwVar8 = this_00 + 0x130, *(int *)(this_00 + 0x130) != 0)) {
          iVar7 = 2;
          do {
            iVar3 = *(int *)pwVar8;
            pwVar8 = pwVar8 + 4;
            *(uint *)(iVar3 + 0x40) = *(uint *)(iVar3 + 0x40) | 8;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        wrUI_TEXT_SCROLL::UpdateArrows(this_00);
        pwVar12 = pwVar12 + 4;
        pwVar4 = pwVar4 + 0x24;
        local_48 = local_48 + -1;
        iVar7 = iVar10;
      } while (local_48 != 0);
    }
    if (iVar7 < *(int *)(this + 0x97c)) {
      pwVar4 = this + iVar7 * 4 + 0x980;
      do {
        iVar10 = *(int *)pwVar4;
        *(undefined4 *)(iVar10 + 0x138) = 0;
        *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) | 0x2800;
        (**(code **)(**(int **)pwVar4 + 0x10))(0);
        iVar7 = iVar7 + 1;
        pwVar4 = pwVar4 + 4;
      } while (iVar7 < *(int *)(this + 0x97c));
    }
    iVar10 = *(int *)(this + 0x78);
    iVar7 = *(int *)(this + 0x6c);
    if ((iVar10 != 0) && (iVar7 != -1)) {
      if (iVar7 < iVar10) {
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        *(int *)(this + 0x6c) = iVar7;
        return;
      }
      *(int *)(this + 0x6c) = iVar10 + -1;
      return;
    }
    *(undefined4 *)(this + 0x6c) = 0xffffffff;
  }
  return;
}




/* from: wr_ui_server.cpp
   addr: 00491C20 */

void __thiscall
wrUI_ADVSERV_WINDOW::AddNumRec
          (wrUI_ADVSERV_WINDOW *this,int param_1,char *param_2,int param_3,int param_4,int param_5,
          char *param_6,int param_7)

{
  wrUI_STRINGS *this_00;
  int iVar1;
  ulong uVar2;
  
  this_00 = (wrUI_STRINGS *)(this + *(int *)(this + 0x78) * 0x24 + 0x7c);
  wrUI_STRINGS::Clear(this_00);
  iVar1 = gsSTRINGS::GetStringId(gsStrings,param_2);
  *(int *)(this_00 + 0x1c) = iVar1;
  *(int *)(this_00 + 0x20) = param_1;
  wrUI_STRINGS::PreInit(this_00,((uint)(param_6 != (char *)0x0) - param_5) + param_4,0);
  if (param_6 != (char *)0x0) {
    wrUI_STRINGS::AddString(this_00,param_6,param_7);
  }
  uVar2 = param_4;
  if (param_4 < param_5) {
    do {
      wrUI_STRINGS::AddString(this_00,1,uVar2);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < param_5);
  }
  wrUI_STRINGS::Compact(this_00);
  if ((((param_6 == (char *)0x0) || (param_3 != param_7)) && (param_4 <= param_3)) &&
     (param_3 < param_5)) {
    *(uint *)(this_00 + 0x18) = ((uint)(param_6 != (char *)0x0) - param_4) + param_3;
    *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
    return;
  }
  *(undefined4 *)(this_00 + 0x18) = 0;
  *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
  return;
}




/* from: wr_ui_server.cpp
   addr: 00491D00 */

void __thiscall
wrUI_ADVSERV_WINDOW::AddNumRec
          (wrUI_ADVSERV_WINDOW *this,int param_1,char *param_2,int param_3,char *param_4,int param_5
          ,...)

{
  wrUI_STRINGS *this_00;
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  ulong in_stack_00000018;
  char *in_stack_0000001c;
  
  this_00 = (wrUI_STRINGS *)(param_1 + 0x7c + *(int *)(param_1 + 0x78) * 0x24);
  wrUI_STRINGS::Clear(this_00);
  iVar1 = gsSTRINGS::GetStringId(gsStrings,(char *)param_3);
  *(int *)(this_00 + 0x1c) = iVar1;
  *(char **)(this_00 + 0x20) = param_2;
  *(undefined4 *)(this_00 + 0x18) = 0;
  if (param_5 != 0) {
    wrUI_STRINGS::AddString(this_00,(char *)param_5,in_stack_00000018);
  }
  if (in_stack_0000001c != (char *)0xffffffff) {
    puVar2 = &stack0x0000001c;
    pcVar3 = in_stack_0000001c;
    do {
      wrUI_STRINGS::AddString(this_00,1,(ulong)pcVar3);
      if (param_4 == pcVar3) {
        *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x10) + -1;
      }
      pcVar3 = (char *)puVar2[1];
      puVar2 = puVar2 + 1;
    } while (pcVar3 != (char *)0xffffffff);
  }
  wrUI_STRINGS::Compact(this_00);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return;
}




/* from: wr_ui_server.cpp
   addr: 00491DA0 */

void __thiscall wrUI_ADVSERV_WINDOW::DoResetList(wrUI_ADVSERV_WINDOW *this)

{
  wrUI_STRINGS *pwVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  wrUI_ADVSERV_WINDOW *this_00;
  wrUI_ADVSERV_WINDOW *extraout_ECX;
  wrUI_ADVSERV_WINDOW *this_01;
  gsSTRINGS *extraout_ECX_00;
  gsSTRINGS *this_02;
  gsSTRINGS *extraout_ECX_01;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0;
  *(undefined4 *)(this + 0x78) = 0;
  if (*(int *)(this + 0xa10) != -1) {
    pwVar1 = (wrUI_STRINGS *)(this + 0x7c);
    *(undefined4 *)(this + 0x78) = 1;
    wrUI_STRINGS::Clear(pwVar1);
    iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ADVSERV_GAME_MODE);
    *(int *)(this + 0x98) = iVar3;
    *(undefined4 *)(this + 0x9c) = 0x4d4f4445;
    wrUI_STRINGS::PreInit(pwVar1,3,0x80);
    uVar6 = 1;
    iVar3 = gsSTRINGS::GetStringIdFmt
                      (gsStrings,(char *)gsStrings,s_GAME_MP_MODE_FULL__s,PTR_s_DM_005da650);
    wrUI_STRINGS::AddString(pwVar1,iVar3,uVar6);
    *(undefined4 *)(this + 0xa10) = 1;
    wrUI_STRINGS::Compact(pwVar1);
    *(int *)(this + 0x94) = *(int *)(this + 0xa10) + -1;
    iVar3 = *(int *)(this + 0x78);
    *(int *)(this + 0x78) = iVar3 + 1;
    pwVar1 = (wrUI_STRINGS *)(this + iVar3 * 0x24 + 0x7c);
    wrUI_STRINGS::Clear(pwVar1);
    iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ADVSERV_LOCATION);
    *(int *)(pwVar1 + 0x1c) = iVar3;
    *(code **)(pwVar1 + 0x20) = pteEMAP_CHROME::Create;
    wrUI_STRINGS::PreInit(pwVar1,1,0);
    *(undefined4 *)(pwVar1 + 0x18) = 0;
    if ((1 << ((byte)*(gsSTRINGS **)(this + 0xa10) & 0x1f) & DAT_0060ee6c) != 0) {
      iVar3 = gsSTRINGS::GetStringIdFmt
                        (*(gsSTRINGS **)(this + 0xa10),(char *)gsStrings,s_GAME_MP_MAP__s,
                         DAT_0060ee68);
      uVar6 = 0;
      if (iVar3 == 0) {
        puVar4 = gsSTRINGS::AsciiToUnicode(gsStrings,DAT_0060ee68);
        wrUI_STRINGS::AddString(pwVar1,puVar4,uVar6);
      }
      else {
        wrUI_STRINGS::AddString(pwVar1,iVar3,0);
      }
      if (*(int *)(this + 0xa14) == 0) {
        *(int *)(pwVar1 + 0x18) = *(int *)(pwVar1 + 0x10) + -1;
      }
    }
    wrUI_STRINGS::Compact(pwVar1);
    if (*(int *)(this + 0xa10) == 2) {
      iVar3 = 7;
    }
    else {
      iVar3 = (uint)(*(int *)(this + 0xa10) != 3) * 4 + 0xd;
    }
    AddNumRec(this,0x4d58504c,s_UI_ADVSERV_MAX_PLAYERS,*(int *)(this + 0xa18),2,iVar3,(char *)0x0,0)
    ;
    this_01 = this_00;
    if (*(int *)(this + 0xa10) != 2) {
      AddNumRec(this_00,(int)this,(char *)0x474f4144,0x5f3f40,*(char **)(this + 0xa24),0x5f3f50,0,1,
                2,3,4,5,0xffffffff);
      AddNumRec(*(wrUI_ADVSERV_WINDOW **)(this + 0xa1c),(int)this,(char *)0x54494d45,0x5f3f0c,
                (char *)*(wrUI_ADVSERV_WINDOW **)(this + 0xa1c),0x5f3f24,0,1,2,3,5,10,0xf,0x14,0x1e,
                0x2d,0x3c,0x5a,0x78,0xb4,0xffffffff);
      this_01 = extraout_ECX;
    }
    if (*(int *)(this + 0xa10) == 1) {
      AddNumRec(this_01,(int)this,(char *)0x46524147,0x5f3ed8,*(char **)(this + 0xa20),0x5f3ef0,0,1,
                5,10,0xf,0x14,0x1e,0x32,100,0x96,200,0xffffffff);
    }
    if (*(int *)(this + 0xa10) == 2) {
      iVar3 = *(int *)(this + 0x78);
      *(int *)(this + 0x78) = iVar3 + 1;
      pwVar1 = (wrUI_STRINGS *)(this + iVar3 * 0x24 + 0x7c);
      wrUI_STRINGS::Clear(pwVar1);
      iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ADVSERV_DIFFICULTY);
      *(int *)(pwVar1 + 0x1c) = iVar3;
      *(undefined4 *)(pwVar1 + 0x20) = 0x44494646;
      wrUI_STRINGS::PreInit(pwVar1,3,0);
      this_02 = extraout_ECX_00;
      do {
        uVar6 = uVar5;
        iVar3 = gsSTRINGS::GetStringIdFmt(this_02,(char *)gsStrings,s_UI_ADVSERV_DIFF__i,uVar5);
        wrUI_STRINGS::AddString(pwVar1,iVar3,uVar6);
        uVar5 = uVar5 + 1;
        this_02 = extraout_ECX_01;
      } while ((int)uVar5 < 3);
      wrUI_STRINGS::Compact(pwVar1);
      *(undefined4 *)(pwVar1 + 0x18) = *(undefined4 *)(this + 0xa28);
    }
    if ((*(int *)(this + 0xa10) == 2) || (*(int *)(this + 0xa10) == 3)) {
      uVar2 = *(undefined4 *)(this + 0xa38);
      pwVar1 = (wrUI_STRINGS *)(this + *(int *)(this + 0x78) * 0x24 + 0x7c);
      wrUI_STRINGS::Clear(pwVar1);
      iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ADVSERV_FRIENDLY_FIRE);
      *(int *)(pwVar1 + 0x1c) = iVar3;
      *(undefined4 *)(pwVar1 + 0x20) = 0x4646;
      wrUI_STRINGS::PreInit(pwVar1,2,0x10);
      wrUI_STRINGS::AddString(pwVar1,s_UI_SNO,0);
      wrUI_STRINGS::AddString(pwVar1,s_UI_SYES,1);
      wrUI_STRINGS::Compact(pwVar1);
      *(undefined4 *)(pwVar1 + 0x18) = uVar2;
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
    }
    if (*(int *)(this + 0xa10) != 2) {
      uVar2 = *(undefined4 *)(this + 0xa2c);
      pwVar1 = (wrUI_STRINGS *)(this + *(int *)(this + 0x78) * 0x24 + 0x7c);
      wrUI_STRINGS::Clear(pwVar1);
      iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ADVSERV_ALLOW_HEALTH);
      *(int *)(pwVar1 + 0x1c) = iVar3;
      *(undefined4 *)(pwVar1 + 0x20) = 0x4845414c;
      wrUI_STRINGS::PreInit(pwVar1,2,0x10);
      wrUI_STRINGS::AddString(pwVar1,s_UI_SNO,0);
      wrUI_STRINGS::AddString(pwVar1,s_UI_SYES,1);
      wrUI_STRINGS::Compact(pwVar1);
      *(undefined4 *)(pwVar1 + 0x18) = uVar2;
      iVar3 = *(int *)(this + 0x78);
      uVar2 = *(undefined4 *)(this + 0xa30);
      *(int *)(this + 0x78) = iVar3 + 1;
      pwVar1 = (wrUI_STRINGS *)(this + (iVar3 + 1) * 0x24 + 0x7c);
      wrUI_STRINGS::Clear(pwVar1);
      iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ADVSERV_ALLOW_ARMOR);
      *(int *)(pwVar1 + 0x1c) = iVar3;
      *(undefined4 *)(pwVar1 + 0x20) = 0x41524d52;
      wrUI_STRINGS::PreInit(pwVar1,2,0x10);
      wrUI_STRINGS::AddString(pwVar1,s_UI_SNO,0);
      wrUI_STRINGS::AddString(pwVar1,s_UI_SYES,1);
      wrUI_STRINGS::Compact(pwVar1);
      *(undefined4 *)(pwVar1 + 0x18) = uVar2;
      iVar3 = *(int *)(this + 0x78);
      uVar2 = *(undefined4 *)(this + 0xa34);
      *(int *)(this + 0x78) = iVar3 + 1;
      pwVar1 = (wrUI_STRINGS *)(this + (iVar3 + 1) * 0x24 + 0x7c);
      wrUI_STRINGS::Clear(pwVar1);
      iVar3 = gsSTRINGS::GetStringId(gsStrings,s_UI_ADVSERV_UNLIMITED_AMMO);
      *(int *)(pwVar1 + 0x1c) = iVar3;
      *(undefined4 *)(pwVar1 + 0x20) = 0x554e4c41;
      wrUI_STRINGS::PreInit(pwVar1,2,0x10);
      wrUI_STRINGS::AddString(pwVar1,s_UI_SNO,0);
      wrUI_STRINGS::AddString(pwVar1,s_UI_SYES,1);
      wrUI_STRINGS::Compact(pwVar1);
      *(undefined4 *)(pwVar1 + 0x18) = uVar2;
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + 1;
    }
  }
  return;
}




/* from: wr_ui_server.cpp
   addr: 00492200 */

void __thiscall
wrUI_ADVSERV_WINDOW::GetNextLocation(wrUI_ADVSERV_WINDOW *this,char *param_1,int param_2)

{
  do {
    if ((1 << ((byte)*(undefined4 *)(this + 0xa10) & 0x1f) & DAT_0060ee6c) != 0) break;
  } while (*(int *)(this + 0xa14) != 0);
  *(undefined4 *)(this + 0xa14) = 0;
  strncpy(param_1,DAT_0060ee68,param_2);
  param_1[param_2 + -1] = '\0';
  return;
}

