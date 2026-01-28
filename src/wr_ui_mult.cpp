
/* from: wr_ui_mult.cpp
   addr: 00490120 */

wrUI_MP_WND * __thiscall wrUI_MP_WND::wrUI_MP_WND(wrUI_MP_WND *this)

{
  uiELEMENT::uiELEMENT((uiELEMENT *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  return this;
}




/* from: wr_ui_mult.cpp
   addr: 00490140 */

int __thiscall wrUI_MP_WND::ProcessInit(wrUI_MP_WND *this,void *param_1)

{
  uiELEMENT *puVar1;
  int iVar2;
  
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_status_str);
  *(uiELEMENT **)(this + 0x6c) = puVar1;
  *(uint *)(this + 4) = *(uint *)(this + 4) | 8;
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui_mult.cpp
   addr: 00490170 */

void __thiscall wrUI_MP_WND::SetStatusStr(wrUI_MP_WND *this,char *param_1,float param_2)

{
  int iVar1;
  wchar_t *_Str;
  wchar_t *pwVar2;
  
  if (*(int *)(this + 0x6c) != 0) {
    *(float *)(this + 0x70) = param_2;
    iVar1 = gsSTRINGS::GetStringIdFmt(gsStrings,(char *)gsStrings,s_UI_NET_STATUS__s,param_1);
    if (iVar1 == 0) {
      _Str = (wchar_t *)gsSTRINGS::AsciiToUnicode(gsStrings,param_1);
    }
    else {
      _Str = (wchar_t *)gsSTRINGS::GetStringById(gsStrings,iVar1);
    }
    pwVar2 = wcsrchr(_Str,L'\n');
    if (pwVar2 != (wchar_t *)0x0) {
      uiAREA::SetTextW(*(uiAREA **)(this + 0x6c),(ushort *)(pwVar2 + 1),0x7fffffff);
      return;
    }
    uiAREA::SetTextW(*(uiAREA **)(this + 0x6c),(ushort *)_Str,0x7fffffff);
  }
  return;
}




/* from: wr_ui_mult.cpp
   addr: 004901F0 */

int __thiscall wrUI_MP_WND::OnPreInput(wrUI_MP_WND *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  
  if ((*(int *)param_1 == 6) && (*(int *)(param_1 + 0xc) == 9)) {
    return 0;
  }
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_mult.cpp
   addr: 00490210 */

int __thiscall wrUI_MP_WND::OnKeyboard(wrUI_MP_WND *this,uiINPUT_INFO *param_1)

{
  int iVar1;
  wrUI_MP_WND *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = (wrUI_MP_WND *)0x0;
  local_8 = 0;
  local_4 = 0;
  if ((*(int *)param_1 == 6) && (*(int *)(param_1 + 0xc) == 7)) {
    local_8 = 0x42544e43;
    local_4 = 0x4241434b;
    local_c = this;
    (**(code **)(*(int *)this + 0x5c))(&local_c);
  }
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_mult.cpp
   addr: 00490270 */

int __thiscall wrUI_CONN_WND::StartAppearing(wrUI_CONN_WND *this,int param_1)

{
  uiELEMENT *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    mpMode = -1;
    gsMP_NETWORK::Drv_Stop(gsSysNetwork);
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_conn_btn04);
    if (puVar1 != (uiELEMENT *)0x0) {
      *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) | 0x800;
      uiRENDER_INFO::SetAlphaText((uiRENDER_INFO *)(puVar1 + 0x6c),40.0);
    }
    puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_conn_btn05);
    if (puVar1 != (uiELEMENT *)0x0) {
      *(uint *)(puVar1 + 4) = *(uint *)(puVar1 + 4) | 0x800;
      uiRENDER_INFO::SetAlphaText((uiRENDER_INFO *)(puVar1 + 0x6c),40.0);
    }
  }
  iVar2 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar2;
}




/* from: wr_ui_mult.cpp
   addr: 004902F0 */

void __thiscall wrUI_CONN_WND::OnChildNotify(wrUI_CONN_WND *this,uiCHILD_NOTIFY *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 0x42544e43) goto LAB_004903cf;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 0x4c414e54) {
    if (iVar1 == 0x4c414e53) {
      mpMode = 0;
      iVar1 = 0;
      goto LAB_004903a4;
    }
    if (iVar1 == 0x495043) {
      mpMode = 2;
      iVar1 = 0;
      goto LAB_004903a4;
    }
    if (iVar1 == 0x4241434b) {
      gsMP_NETWORK::Drv_Stop(gsSysNetwork);
    }
    else if (iVar1 == 0x4c414e43) {
      mpMode = 1;
      iVar1 = 0;
      goto LAB_004903a4;
    }
  }
  else {
    if (iVar1 != 0x55424943) {
      if (iVar1 == 0x55424953) {
        mpMode = 3;
        gsMP_NETWORK::Drv_Create(gsSysNetwork,1);
        (**(code **)(*(int *)uiSystem + 0x10))(s_mp_wait_drvinit,8);
      }
      goto LAB_004903af;
    }
    mpMode = 4;
    iVar1 = 1;
LAB_004903a4:
    gsMP_NETWORK::Drv_Create(gsSysNetwork,iVar1);
  }
LAB_004903af:
  if (mpMode != -1) {
    (**(code **)(*(int *)uiSystem + 0x10))(s_mp_wait_drvinit,8);
    return;
  }
LAB_004903cf:
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_mult.cpp
   addr: 004903E0
   addr: 004903E0 */

void __thiscall
wrUI_WAITSERVER_WND::OnChildNotify(wrUI_WAITSERVER_WND *this,uiCHILD_NOTIFY *param_1)

{
  if ((*(int *)(param_1 + 4) == 0x42544e43) && (*(int *)(param_1 + 8) == 0x4241434b)) {
    gsMP_NETWORK::Drv_Stop(gsSysNetwork);
    (**(code **)(*(int *)uiSystem + 0x10))(s_connection,0);
    return;
  }
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_mult.cpp
   addr: 00490420 */

int __thiscall wrUI_DRVINIT_WND::StartAppearing(wrUI_DRVINIT_WND *this,int param_1)

{
  char *pcVar1;
  int iVar2;
  wchar_t *_Str;
  wchar_t *pwVar3;
  gsSTRINGS *this_00;
  
  if ((param_1 != 0) &&
     (pcVar1 = gsMP_NETWORK::Drv_GetStatus(gsSysNetwork), *(int *)(this + 0x6c) != 0)) {
    *(undefined4 *)(this + 0x70) = 0;
    iVar2 = gsSTRINGS::GetStringIdFmt(this_00,(char *)gsStrings,s_UI_NET_STATUS__s,pcVar1);
    if (iVar2 == 0) {
      _Str = (wchar_t *)gsSTRINGS::AsciiToUnicode(gsStrings,pcVar1);
    }
    else {
      _Str = (wchar_t *)gsSTRINGS::GetStringById(gsStrings,iVar2);
    }
    pwVar3 = wcsrchr(_Str,L'\n');
    if (pwVar3 != (wchar_t *)0x0) {
      _Str = pwVar3 + 1;
    }
    uiAREA::SetTextW(*(uiAREA **)(this + 0x6c),(ushort *)_Str,0x7fffffff);
  }
  iVar2 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar2;
}




/* from: wr_ui_mult.cpp
   addr: 004904B0 */

int __thiscall wrUI_DRVINIT_WND::ProcessUpdate(wrUI_DRVINIT_WND *this,void *param_1)

{
  int iVar1;
  char *pcVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  wchar_t *pwVar6;
  wchar_t *_Str;
  gsSTRINGS *extraout_ECX;
  gsSTRINGS *pgVar7;
  uiINPUT_INFO *unaff_ESI;
  undefined4 uVar8;
  undefined4 uVar9;
  uiINPUT_INFO *puVar10;
  
  if ((*(uint *)(this + 4) & 0x140) == 0) {
    iVar1 = gsMP_NETWORK::Drv_IsCreated(gsSysNetwork);
    if (iVar1 != 0) {
      (**(code **)(*(int *)uiSystem + 0x10))(s_setup_player,0);
      iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,unaff_ESI);
      return iVar1;
    }
    iVar1 = gsMP_NETWORK::Drv_IsError(gsSysNetwork);
    if (iVar1 != 0) {
      pcVar2 = gsMP_NETWORK::Drv_GetStatus(gsSysNetwork);
      iVar1 = gsSTRINGS::GetStringIdFmt(gsStrings,(char *)gsStrings,s_UI_NET_STATUS__s,pcVar2);
      if (iVar1 == 0) {
        pcVar2 = gsMP_NETWORK::Drv_GetStatus(gsSysNetwork);
        puVar3 = gsSTRINGS::AsciiToUnicode(gsStrings,pcVar2);
      }
      else {
        puVar3 = gsSTRINGS::GetStringById(gsStrings,iVar1);
      }
      pgVar7 = gsStrings;
      pcVar2 = s_connection;
      iVar1 = *(int *)uiSystem;
      puVar10 = (uiINPUT_INFO *)0x0;
      uVar9 = 0;
      uVar8 = 0;
      iVar4 = gsSTRINGS::GetStringId(gsStrings,s_UI_ERR_NET_DRV_INIT_ERROR);
      puVar5 = gsSTRINGS::GetStringById(pgVar7,iVar4);
      (**(code **)(iVar1 + 0x14))(puVar5,puVar3,uVar8,uVar9,puVar10,pcVar2);
      iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,puVar10);
      return iVar1;
    }
    pcVar2 = gsMP_NETWORK::Drv_GetStatus(gsSysNetwork);
    if (*(int *)(this + 0x6c) == 0) goto LAB_00490625;
    *(undefined4 *)(this + 0x70) = 0;
    pgVar7 = extraout_ECX;
  }
  else {
    pcVar2 = gsMP_NETWORK::Drv_GetStatus(gsSysNetwork);
    if (*(int *)(this + 0x6c) == 0) goto LAB_00490625;
    *(undefined4 *)(this + 0x70) = 0;
    pgVar7 = gsStrings;
  }
  iVar1 = gsSTRINGS::GetStringIdFmt(pgVar7,(char *)gsStrings,s_UI_NET_STATUS__s,pcVar2);
  if (iVar1 == 0) {
    _Str = (wchar_t *)gsSTRINGS::AsciiToUnicode(gsStrings,pcVar2);
  }
  else {
    _Str = (wchar_t *)gsSTRINGS::GetStringById(gsStrings,iVar1);
  }
  pwVar6 = wcsrchr(_Str,L'\n');
  if (pwVar6 != (wchar_t *)0x0) {
    _Str = pwVar6 + 1;
  }
  uiAREA::SetTextW(*(uiAREA **)(this + 0x6c),(ushort *)_Str,0x7fffffff);
LAB_00490625:
  iVar1 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar1;
}




/* from: wr_ui_mult.cpp
   addr: 00490640 */

int __thiscall wrUI_PSETUP_WND::ProcessInit(wrUI_PSETUP_WND *this,void *param_1)

{
  ulong uVar1;
  uiELEMENT *puVar2;
  int iVar3;
  int iVar4;
  gsSTRINGS *extraout_ECX;
  gsSTRINGS *this_00;
  gsSTRINGS *extraout_ECX_00;
  uiINPUT_INFO *unaff_EBX;
  ulong uVar5;
  
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_player_name);
  *(uiELEMENT **)(this + 0x6c) = puVar2;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_player_password);
  *(uiELEMENT **)(this + 0x70) = puVar2;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_player_skin);
  *(uiELEMENT **)(this + 0x74) = puVar2;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_char_pct);
  *(uiELEMENT **)(this + 0x78) = puVar2;
  puVar2 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_connection_type);
  *(uiELEMENT **)(this + 0x7c) = puVar2;
  wrUI_STRINGS::PreInit((wrUI_STRINGS *)(*(int *)(this + 0x74) + 0x138),6,0x60);
  iVar3 = 0;
  this_00 = extraout_ECX;
  do {
    iVar3 = iVar3 + 1;
    uVar5 = 0;
    iVar4 = gsSTRINGS::GetStringIdFmt(this_00,(char *)gsStrings,s_UI_SKIN__i,iVar3);
    wrUI_STRINGS::AddString((wrUI_STRINGS *)(*(int *)(this + 0x74) + 0x138),iVar4,uVar5);
    this_00 = extraout_ECX_00;
  } while (iVar3 < 6);
  wrUI_STRINGS::Compact((wrUI_STRINGS *)(*(int *)(this + 0x74) + 0x138));
  wrUI_STRINGS::PreInit((wrUI_STRINGS *)(*(int *)(this + 0x7c) + 0x138),8,0x100);
  wrUI_STRINGS::Clear((wrUI_STRINGS *)(*(int *)(this + 0x7c) + 0x138));
  uVar5 = 0;
  do {
    uVar1 = uVar5 + 1;
    iVar3 = gsSTRINGS::GetStringIdFmt(gsStrings,(char *)gsStrings,s_UI_CONNECTION__i,uVar1);
    if (iVar3 == 0) break;
    wrUI_STRINGS::AddString((wrUI_STRINGS *)(*(int *)(this + 0x7c) + 0x138),iVar3,uVar5);
    uVar5 = uVar1;
  } while ((int)uVar1 < 99);
  wrUI_STRINGS::Compact((wrUI_STRINGS *)(*(int *)(this + 0x7c) + 0x138));
  (**(code **)(**(int **)(this + 0x6c) + 100))(0x14);
  (**(code **)(**(int **)(this + 0x70) + 100))(0x20);
  *(uint *)(*(int *)(this + 0x70) + 0x13c) = *(uint *)(*(int *)(this + 0x70) + 0x13c) | 4;
  iVar3 = uiELEMENT::OnChar((uiELEMENT *)this,unaff_EBX);
  return iVar3;
}




/* from: wr_ui_mult.cpp
   addr: 00490780 */

int __thiscall wrUI_PSETUP_WND::StartAppearing(wrUI_PSETUP_WND *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    LoadSettings(this);
  }
  iVar1 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar1;
}




/* from: wr_ui_mult.cpp
   addr: 004907A0 */

void __thiscall wrUI_PSETUP_WND::OnChildNotify(wrUI_PSETUP_WND *this,uiCHILD_NOTIFY *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  txmTEXTURE *ptVar3;
  
  if (*(int *)(param_1 + 4) == 0x42544e43) {
    if ((*(int *)(param_1 + 8) != 0x4241434b) &&
       (SaveSettings(this), *(int *)(param_1 + 8) == 0x4e455854)) {
      pwVar1 = (wchar_t *)uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0x6c));
      if (*pwVar1 == L'\0') {
        return;
      }
      while (pwVar2 = wcschr((wchar_t *)PTR_u___________<>_________005da5d8,*pwVar1),
            pwVar2 != (wchar_t *)0x0) {
        pwVar1 = pwVar1 + 1;
        if (*pwVar1 == L'\0') {
          return;
        }
      }
      switch(wrUI_CONN_WND::mpMode) {
      case 0:
      case 3:
        (**(code **)(*(int *)uiSystem + 0x10))(s_create_server,0);
        uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
        return;
      case 1:
      case 4:
        gsMP_NETWORK::Browser_Start(gsSysNetwork);
        (**(code **)(*(int *)uiSystem + 0x10))(s_mp_wait_browser,8);
        uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
        return;
      case 2:
        (**(code **)(*(int *)uiSystem + 0x10))(s_ip_addr,0);
        uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
        return;
      }
    }
  }
  else if (((*(int *)(param_1 + 4) == 0x54534352) && (*(int *)(param_1 + 8) == 0x43484e47)) &&
          (*(int *)param_1 == *(int *)(this + 0x74))) {
    ptVar3 = txmMANAGER::Add(txmManager,
                             s_SkinIcon_01_005eec20 + *(int *)(*(int *)(this + 0x74) + 300) * 0xb8,0
                             ,0xffffffff);
    if (ptVar3 != (txmTEXTURE *)0x0) {
      *(uint *)(*(int *)(this + 0x78) + 4) = *(uint *)(*(int *)(this + 0x78) + 4) & 0xffffdfff;
      uiRENDER_INFO::SetTex((uiRENDER_INFO *)(*(int *)(this + 0x78) + 0x6c),ptVar3);
      uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
      return;
    }
    *(uint *)(*(int *)(this + 0x78) + 4) = *(uint *)(*(int *)(this + 0x78) + 4) | 0x2000;
  }
  uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
  return;
}




/* from: wr_ui_mult.cpp
   addr: 00490950 */

void __thiscall wrUI_PSETUP_WND::SaveSettings(wrUI_PSETUP_WND *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char local_c0 [64];
  char local_80 [64];
  char local_40 [64];
  
  iVar2 = 0;
  do {
    cVar1 = s_PlayerName_[iVar2];
    local_c0[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = gsMP_NETWORK::Drv_GetIdString(gsSysNetwork);
  uVar5 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  iVar9 = 0x40;
  iVar2 = -1;
  pcVar3 = local_c0;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar5;
  pcVar8 = pcVar7 + -1;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  pcVar7 = local_40;
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  puVar4 = uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0x6c));
  iVar2 = gsSTRINGS::UnicodeToAscii(gsStrings,puVar4,pcVar7,iVar9);
  if (iVar2 != 0) {
    apCfgWriteString(s_Multiplayer,local_c0,local_40);
    apCfgWriteString(s_Multiplayer,s_PlayerName,local_40);
  }
  apCfgWriteInt(s_Multiplayer,s_PlayerSkin,*(int *)(*(int *)(this + 0x74) + 300));
  iVar2 = gsMP_NETWORK::Drv_IsPasswordRequired(gsSysNetwork);
  if (iVar2 == 0) {
    local_80[0] = '\0';
  }
  else {
    iVar2 = 0;
    do {
      cVar1 = s_PlayerPassword_[iVar2];
      local_c0[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = gsMP_NETWORK::Drv_GetIdString(gsSysNetwork);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar9 = 0x40;
    iVar2 = -1;
    pcVar3 = local_c0;
    do {
      pcVar7 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar7 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar7;
    } while (cVar1 != '\0');
    pcVar3 = pcVar8 + -uVar5;
    pcVar8 = pcVar7 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar8 = pcVar8 + 4;
    }
    pcVar7 = local_80;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar8 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar8 = pcVar8 + 1;
    }
    puVar4 = uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0x70));
    iVar2 = gsSTRINGS::UnicodeToAscii(gsStrings,puVar4,pcVar7,iVar9);
    if (iVar2 != 0) {
      apCfgWriteString(s_Multiplayer,local_c0,local_80);
    }
  }
  gsMP_NETWORK::Drv_SetUserNameAndPassword(gsSysNetwork,local_40,local_80);
  return;
}




/* from: wr_ui_mult.cpp
   addr: 00490AC0 */

void __thiscall wrUI_PSETUP_WND::LoadSettings(wrUI_PSETUP_WND *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ushort *puVar4;
  txmTEXTURE *ptVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBX;
  char *pcVar8;
  char *pcVar9;
  char local_140 [64];
  char local_100 [256];
  
  iVar2 = 0;
  do {
    cVar1 = s_PlayerName_[iVar2];
    local_140[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = gsMP_NETWORK::Drv_GetIdString(gsSysNetwork);
  uVar6 = 0xffffffff;
  do {
    pcVar9 = pcVar3;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar2 = -1;
  pcVar3 = local_140;
  do {
    pcVar8 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  pcVar3 = pcVar9 + -uVar6;
  pcVar9 = pcVar8 + -1;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar2 = _apCfgReadString((void **)0x0,s_Multiplayer,local_140,local_100,0x100);
  if (iVar2 == 0) {
    do {
      cVar1 = s_WillRock[iVar2];
      local_100[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
  }
  puVar4 = gsSTRINGS::AsciiToUnicode(gsStrings,local_100);
  uiTEXT_INPUT::SetEditText(*(uiTEXT_INPUT **)(this + 0x6c),puVar4);
  iVar2 = gsMP_NETWORK::Drv_IsPasswordRequired(gsSysNetwork);
  if (iVar2 == 0) {
    (**(code **)(**(int **)(this + 0x70) + 0x10))(0);
    for (iVar2 = *(int *)(this + 0x14); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
      if ((*(byte *)(iVar2 + 0x68) & 2) != 0) {
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x2000;
      }
    }
  }
  else {
    iVar2 = 0;
    do {
      cVar1 = s_PlayerPassword_[iVar2];
      local_140[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = gsMP_NETWORK::Drv_GetIdString(gsSysNetwork);
    uVar6 = 0xffffffff;
    do {
      pcVar9 = pcVar3;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar9;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar2 = -1;
    pcVar3 = local_140;
    do {
      pcVar8 = pcVar3;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar8 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar8;
    } while (cVar1 != '\0');
    pcVar3 = pcVar9 + -uVar6;
    pcVar9 = pcVar8 + -1;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar9 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar9 = pcVar9 + 1;
    }
    iVar2 = _apCfgReadString((void **)0x0,s_Multiplayer,local_140,local_100,0x100);
    if (iVar2 == 0) {
      local_100[0] = '\0';
    }
    puVar4 = gsSTRINGS::AsciiToUnicode(gsStrings,local_100);
    uiTEXT_INPUT::SetEditText(*(uiTEXT_INPUT **)(this + 0x70),puVar4);
    (**(code **)(**(int **)(this + 0x70) + 0x10))(1);
    for (iVar2 = *(int *)(this + 0x14); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x10)) {
      if ((*(byte *)(iVar2 + 0x68) & 2) != 0) {
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xffffdfff;
      }
    }
  }
  iVar2 = _apCfgReadInt((void **)0x0,s_Multiplayer,s_PlayerSkin,(int *)&stack0xfffffeb4);
  if (((iVar2 == 0) || (unaff_EBX < 0)) || (5 < unaff_EBX)) {
    unaff_EBX = 0;
  }
  (**(code **)(**(int **)(this + 0x74) + 0x60))(unaff_EBX - (*(int **)(this + 0x74))[0x4b]);
  ptVar5 = txmMANAGER::Add(txmManager,
                           s_SkinIcon_01_005eec20 + *(int *)(*(int *)(this + 0x74) + 300) * 0xb8,0,
                           0xffffffff);
  if (ptVar5 != (txmTEXTURE *)0x0) {
    *(uint *)(*(int *)(this + 0x78) + 4) = *(uint *)(*(int *)(this + 0x78) + 4) & 0xffffdfff;
    uiRENDER_INFO::SetTex((uiRENDER_INFO *)(*(int *)(this + 0x78) + 0x6c),ptVar5);
    return;
  }
  *(uint *)(*(int *)(this + 0x78) + 4) = *(uint *)(*(int *)(this + 0x78) + 4) | 0x2000;
  return;
}




/* from: wr_ui_mult.cpp
   addr: 00490CF0 */

int __thiscall wrUI_IPADDR_WND::ProcessInit(wrUI_IPADDR_WND *this,void *param_1)

{
  uiELEMENT *puVar1;
  int iVar2;
  
  puVar1 = uiELEMENT::FindChildElement((uiELEMENT *)this,s_ip_addr_edit);
  *(uiELEMENT **)(this + 0x6c) = puVar1;
  iVar2 = uiELEMENT::OnChar((uiELEMENT *)this,(uiINPUT_INFO *)param_1);
  return iVar2;
}




/* from: wr_ui_mult.cpp
   addr: 00490D10 */

int __thiscall wrUI_IPADDR_WND::StartAppearing(wrUI_IPADDR_WND *this,int param_1)

{
  char cVar1;
  int iVar2;
  ushort *puVar3;
  char local_100 [256];
  
  if (param_1 != 0) {
    iVar2 = _apCfgReadString((void **)0x0,s_Multiplayer,s_ClientServerAddr,local_100,0x100);
    if (iVar2 == 0) {
      do {
        cVar1 = (&s_0_0_0_0)[iVar2];
        local_100[iVar2] = cVar1;
        iVar2 = iVar2 + 1;
      } while (cVar1 != '\0');
    }
    puVar3 = gsSTRINGS::AsciiToUnicode(gsStrings,local_100);
    uiTEXT_INPUT::SetEditText(*(uiTEXT_INPUT **)(this + 0x6c),puVar3);
  }
  iVar2 = uiELEMENT::StartAppearing((uiELEMENT *)this,param_1);
  return iVar2;
}




/* from: wr_ui_mult.cpp
   addr: 00490D80 */

void __thiscall wrUI_IPADDR_WND::OnChildNotify(wrUI_IPADDR_WND *this,uiCHILD_NOTIFY *param_1)

{
  ushort *puVar1;
  char *pcVar2;
  int iVar3;
  char local_100 [256];
  
  pcVar2 = local_100;
  if (((*(int *)(param_1 + 4) != 0x42544e43) || (*(int *)(param_1 + 8) != 0x4e455854)) &&
     ((*(int *)(param_1 + 4) != 0x494e50 || (*(int *)(param_1 + 8) != 0x454e5452)))) {
    uiELEMENT::OnChildNotify((uiELEMENT *)this,param_1);
    return;
  }
  iVar3 = 0x100;
  puVar1 = uiTEXT_INPUT::GetEditText(*(uiTEXT_INPUT **)(this + 0x6c));
  gsSTRINGS::UnicodeToAscii(gsStrings,puVar1,pcVar2,iVar3);
  apCfgWriteString(s_Multiplayer,s_ClientServerAddr,local_100);
  gsMP_NETWORK::Client_JoinAddress(gsSysNetwork,local_100);
  (**(code **)(*(int *)uiSystem + 0x10))(s_mp_wait_join,8);
  return;
}

