
/* from: gs:gs_cfg.cpp
   addr: 005245F0 */

void __cdecl gsCFG_SYSTEM::ShowMsg(char *param_1,...)

{
  HWND hWnd;
  WPARAM wParam;
  char local_200 [512];
  
  vsprintf(local_200,param_1,&stack0x00000008);
  if (DAT_0095d040 != (HWND)0x0) {
    hWnd = GetDlgItem(DAT_0095d040,0x447);
    wParam = SendMessageA(hWnd,0x180,0,(LPARAM)local_200);
    SendMessageA(hWnd,0x186,wParam,0);
    UpdateWindow(hWnd);
  }
  return;
}




/* from: gs:gs_cfg.cpp
   addr: 00524660 */

void __cdecl gsCFG_SYSTEM::ShowMsgErr(char *param_1,...)

{
  HWND hWnd;
  WPARAM wParam;
  char local_200 [512];
  
  vsprintf(local_200,param_1,&stack0x00000008);
  if (DAT_0095d044 != (HWND)0x0) {
    hWnd = GetDlgItem(DAT_0095d044,0x447);
    wParam = SendMessageA(hWnd,0x180,0,(LPARAM)local_200);
    SendMessageA(hWnd,0x186,wParam,0);
    UpdateWindow(hWnd);
  }
  return;
}




/* from: gs:gs_cfg.cpp
   addr: 005246D0 */

void __cdecl gsCFG_SYSTEM::ShowMsgBox(char *param_1,...)

{
  vsprintf((char *)&apBuffer,param_1,&stack0x00000008);
  mbShowStop((char *)&apBuffer);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_cfg.cpp
   addr: 00524700 */

gsCFG_SYSTEM * __thiscall gsCFG_SYSTEM::gsCFG_SYSTEM(gsCFG_SYSTEM *this)

{
  *(undefined ***)this = &_vftable_;
  _DAT_0095cff0 = 0x77;
  _DAT_0095d000 = 0x77;
  _DAT_0095cf80 = 0x76;
  _DAT_0095cf88 = _gsCfgLoadSave_WND;
  _DAT_0095cf8c = s_Load_Save;
  _DAT_0095cf70 = 0x6a;
  DAT_0095cf78 = _gsCfgMP_WND;
  DAT_0095cf7c = s_Multiplayer;
  _DAT_0095cf90 = 0x74;
  _DAT_0095cf98 = _gsCfgVideo_WND;
  _DAT_0095cf9c = s_Video;
  _DAT_0095cfa0 = 0x75;
  _DAT_0095cfa8 = _gsCfgSound_WND;
  _DAT_0095cfac = s_Sound;
  _DAT_0095cfb0 = 0x73;
  _DAT_0095cfb8 = _gsCfgControl_WND;
  _DAT_0095cfbc = s_Controls;
  _DAT_0095cfc0 = 0x79;
  _DAT_0095cfc8 = _gsCfgScale_WND;
  _DAT_0095cfcc = s_Scalability;
  _DAT_0095cfd0 = 0x78;
  _DAT_0095cfd8 = _gsCfgDebug_WND;
  _DAT_0095cfdc = s_Debug;
  _DAT_0095cfe0 = 0x72;
  _DAT_0095cfe8 = _gsCfgDebug_1_WND;
  _DAT_0095cfec = s_Debug_1;
  _DAT_0095cff8 = _gsCfgLog_WND;
  _DAT_0095cffc = s_Log;
  _DAT_0095d008 = _gsCfgLog_WND;
  _DAT_0095d00c = s_LogErr;
  *(undefined4 *)(this + 4) = 10;
  *(undefined4 *)(this + 8) = 1;
  apSetMsgCB(ShowMsg);
  apSetMsgBoxCB(ShowMsgBox);
  apSetLogCB(ShowMsg);
  apSetLogErrCB(ShowMsgErr);
  apLogErr(s_QQQ);
  return this;
}




/* from: gs:gs_cfg.cpp
   addr: 00524880 */

int __thiscall gsCFG_SYSTEM::Init(gsCFG_SYSTEM *this)

{
  DAT_0095d010 = vidGetDriverList((vidDRIVER ***)&DAT_0095d078);
  if (DAT_0095d010 == 0) {
    return 0;
  }
  gsCfgScaleInit();
  DAT_0095d014 = CreateDialogParamA(apHInstance,(LPCSTR)0x71,_apHMainWindow,_gsCfgMain_WND,0);
  if (DAT_0095d014 == (HWND)0x0) {
    mbShowStop(s_CreateWindowEx_main_dialog___fai);
    return 0;
  }
  return 1;
}




/* from: gs:gs_cfg.cpp
   addr: 005248E0 */

void __thiscall gsCFG_SYSTEM::Term(gsCFG_SYSTEM *this)

{
  ShowWindow(DAT_0095d014,0);
  DestroyWindow(DAT_0095d014);
  return;
}




/* from: gs:gs_cfg.cpp
   addr: 00524900 */

int __thiscall gsCFG_SYSTEM::Show(gsCFG_SYSTEM *this,int param_1)

{
  gsCFG_SYSTEM *pgVar1;
  HWND hWnd;
  int iVar2;
  WPARAM wParam;
  UINT Msg;
  LPARAM lParam;
  tagMSG tStack_1c;
  
  gsAppState = gsAppState | 0x80;
  if (param_1 == 0) {
    gsSND_SYSTEM::Mute(gsSysSound,1,2);
  }
  DAT_0095d07c = param_1;
  ShowWindow(DAT_0095d014,5);
  UpdateWindow(DAT_0095d014);
  ShowWindow(_apHMainWindow,0);
  iVar2 = 0;
  if (0 < *(int *)(this + 4)) {
    do {
      if ((HWND)(&DAT_0095d020)[iVar2] != (HWND)0x0) {
        SendMessageA((HWND)(&DAT_0095d020)[iVar2],0x400,0,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 4));
  }
  pgVar1 = gsSysCfg;
  if (*(int *)(this + 8) != 0) {
    iVar2 = 0;
    wParam = 2;
    if (0 < *(int *)(gsSysCfg + 4)) {
      do {
        if ((HWND)(&DAT_0095d020)[iVar2] == (HWND)0x0) {
          if (iVar2 <= (int)wParam) {
            wParam = wParam - 1;
          }
        }
        else {
          ShowWindow((HWND)(&DAT_0095d020)[iVar2],(iVar2 != 2) - 1 & 5);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(pgVar1 + 4));
    }
    lParam = 0;
    Msg = 0x130c;
    hWnd = GetDlgItem(DAT_0095d014,0x404);
    SendMessageA(hWnd,Msg,wParam,lParam);
    *(undefined4 *)(this + 8) = 0;
  }
  DAT_0095d070 = DAT_0095d070 & 0xfffffffc;
  iVar2 = GetMessageA(&tStack_1c,(HWND)0x0,0,0);
  while ((iVar2 != 0 && ((DAT_0095d070 & 3) == 0))) {
    TranslateMessage(&tStack_1c);
    DispatchMessageA(&tStack_1c);
    iVar2 = GetMessageA(&tStack_1c,(HWND)0x0,0,0);
  }
  if ((DAT_0095d070 & 1) != 0) {
    ShowWindow(_apHMainWindow,5);
    ShowWindow(DAT_0095d014,0);
    gsINP_SYSTEM::ApplySettings(gsSysInput);
    if (param_1 == 0) {
      gsSND_SYSTEM::Mute(gsSysSound,0,2);
      gsSND_SYSTEM::ApplySettings(gsSysSound);
    }
  }
  gsAppState = gsAppState & 0xffffff7f;
  PostMessageA(_apHMainWindow,0x401,0,0);
  return DAT_0095d070 & 1;
}




/* from: gs:gs_cfg.cpp
   addr: 00524AF0 */

int _gsCfgMain_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  gsCFG_SYSTEM *pgVar1;
  uint uVar2;
  long lParam;
  HWND pHVar3;
  WPARAM wParam;
  int iVar4;
  LRESULT LVar5;
  WPARAM WVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  UINT UVar10;
  WPARAM WVar11;
  LPARAM LVar12;
  tagRECT tStack_10;
  
  uVar2 = param_3;
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      iVar7 = 0;
      iVar9 = 0;
      puVar8 = &DAT_0095cf78;
      do {
        iVar4 = (**(code **)(*(int *)gsSysCfg + 4))(iVar9);
        if (iVar4 == 0) {
          (&DAT_0095d020)[iVar9] = 0;
        }
        else {
          TabControl_AddPage(param_1,0x404,iVar7,(char *)puVar8[1]);
          pHVar3 = CreateDialogParamA(apHInstance,(LPCSTR)(uint)*(ushort *)(puVar8 + -2),param_1,
                                      (DLGPROC)*puVar8,0);
          puVar8[-1] = iVar7;
          (&DAT_0095d020)[iVar9] = pHVar3;
          iVar7 = iVar7 + 1;
        }
        iVar9 = iVar9 + 1;
        puVar8 = puVar8 + 4;
      } while (iVar9 < 10);
      (*(code *)**(undefined4 **)gsSysCfg)(param_1);
      iVar7 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Show,(int *)&param_2);
      if ((iVar7 != 0) && (param_2 != 0)) {
        SetCBItemState(param_1,0x3eb,1);
      }
      return 1;
    }
    if (param_2 == 5) {
      pHVar3 = GetDlgItem(param_1,0x404);
      GetWindowRect(pHVar3,&tStack_10);
      SendMessageA(pHVar3,0x1328,0,(LPARAM)&tStack_10);
      tStack_10.right = tStack_10.right - tStack_10.left;
      tStack_10.bottom = tStack_10.bottom - tStack_10.top;
      ScreenToClient(param_1,(LPPOINT)&tStack_10);
      iVar7 = 0;
      if (0 < *(int *)(gsSysCfg + 4)) {
        do {
          if ((HWND)(&DAT_0095d020)[iVar7] != (HWND)0x0) {
            SetWindowPos((HWND)(&DAT_0095d020)[iVar7],(HWND)0x0,tStack_10.left,tStack_10.top,
                         tStack_10.right,tStack_10.bottom,4);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(gsSysCfg + 4));
        return 0;
      }
    }
    else if (((param_2 == 0x4e) && (param_3 == 0x404)) && (*(int *)(param_4 + 8) == -0x227)) {
      LVar12 = 0;
      WVar11 = 0;
      UVar10 = 0x130b;
      pHVar3 = GetDlgItem(param_1,0x404);
      wParam = SendMessageA(pHVar3,UVar10,WVar11,LVar12);
      pgVar1 = gsSysCfg;
      WVar6 = 0;
      WVar11 = wParam;
      if (0 < *(int *)(gsSysCfg + 4)) {
        do {
          if ((HWND)(&DAT_0095d020)[WVar6] == (HWND)0x0) {
            WVar11 = WVar11 + 1;
          }
          else {
            ShowWindow((HWND)(&DAT_0095d020)[WVar6],(WVar6 != WVar11) - 1 & 5);
          }
          WVar6 = WVar6 + 1;
        } while ((int)WVar6 < *(int *)(pgVar1 + 4));
      }
      LVar12 = 0;
      UVar10 = 0x130c;
      pHVar3 = GetDlgItem(DAT_0095d014,0x404);
      SendMessageA(pHVar3,UVar10,wParam,LVar12);
      return 0;
    }
  }
  else if (param_2 == 0x111) {
    if ((param_3 == 1) || (param_3 == 2)) {
      iVar7 = GetCBItemState(param_1,0x3eb);
      apCfgWriteBool(s_Video,s_VIDEO_Show,iVar7);
      LVar12 = 0;
      WVar11 = 0;
      UVar10 = 0x130b;
      pHVar3 = GetDlgItem(param_1,0x404);
      LVar5 = SendMessageA(pHVar3,UVar10,WVar11,LVar12);
      lParam = param_4;
      DAT_0095d074 = (uint)(LVar5 != DAT_0095cf84);
      iVar7 = 0;
      if (0 < *(int *)(gsSysCfg + 4)) {
        do {
          if ((HWND)(&DAT_0095d020)[iVar7] != (HWND)0x0) {
            SendMessageA((HWND)(&DAT_0095d020)[iVar7],0x111,1,lParam);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(gsSysCfg + 4));
      }
    }
    if (uVar2 == 1) {
      DAT_0095d070 = DAT_0095d070 | 1;
      return 0;
    }
    if (uVar2 == 2) {
      DAT_0095d070 = DAT_0095d070 | 2;
    }
  }
  return 0;
}




/* from: gs:gs_cfg.cpp
   addr: 00524E10 */

int _gsCfgLoadSave_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  HWND pHVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  int iStack_558;
  int local_554;
  uint local_550;
  uint local_54c [47];
  char local_490 [64];
  char acStack_450 [64];
  CHAR local_410 [260];
  char local_30c [260];
  CHAR local_208 [260];
  char local_104 [260];
  
  local_54c[8] = 0x416;
  local_54c[9] = 0x419;
  local_54c[10] = 0x41c;
  local_54c[0xb] = 0x41f;
  local_54c[0xc] = 0x422;
  local_54c[0xd] = 0x425;
  local_54c[0xe] = 0x42e;
  local_54c[0xf] = 0x433;
  local_54c[0] = 0x426;
  local_54c[1] = 0x417;
  local_54c[2] = 0x41a;
  local_54c[3] = 0x41d;
  local_54c[4] = 0x420;
  local_54c[5] = 0x423;
  local_54c[6] = 0x42f;
  local_54c[7] = 0x434;
  local_54c[0x1f] = 0x427;
  local_54c[0x20] = 0x418;
  local_54c[0x21] = 0x41b;
  local_54c[0x22] = 0x41e;
  local_54c[0x23] = 0x421;
  local_54c[0x24] = 0x424;
  local_54c[0x25] = 0x432;
  local_54c[0x26] = 0x435;
  local_54c[0x10] = 0x42d;
  local_54c[0x11] = 0x436;
  local_54c[0x12] = 0x437;
  local_54c[0x13] = 0x438;
  local_54c[0x14] = 0x439;
  local_54c[0x15] = 0x43a;
  local_54c[0x16] = 0x43b;
  local_54c[0x17] = 0x43c;
  local_54c[0x18] = 0x43d;
  local_54c[0x19] = 0x43e;
  local_54c[0x1a] = 0x42a;
  local_54c[0x1b] = 0x42b;
  local_54c[0x1c] = 0x440;
  local_54c[0x1d] = 0x441;
  local_54c[0x1e] = 0x42c;
  if (param_2 != 0x110) {
    if (param_2 == 0x111) {
      if ((short)param_3 == 1) {
        iVar2 = GetCBItemState(param_1,0x430);
        apCfgWriteBool(s_Level,s_ForceReload,iVar2);
        iVar2 = GetCBItemState(param_1,0x443);
        apCfgWriteBool(s_Level,s_PreloadComm,iVar2);
        iVar2 = GetCBItemState(param_1,0x444);
        apCfgWriteBool(s_Level,s_PreloadMP,iVar2);
        iVar2 = GetCBItemState(param_1,0x431);
        apCfgWriteBool(s_Level,s_PreloadScn,iVar2);
        iVar2 = GetCBItemState(param_1,0x442);
        apCfgWriteBool(s_Level,s_PreloadScnUpd,iVar2);
        uVar5 = 0;
        do {
          iVar2 = GetCBItemState(param_1,local_54c[uVar5 + 0x10]);
          if (iVar2 != 0) {
            apCfgWriteInt(s_Level,s_CurLevel,uVar5);
            iVar2 = 0;
            do {
              GetDlgItemTextA(param_1,local_54c[iVar2],local_208,0x104);
              sprintf((char *)(local_54c + 0x1f),s_Level__d__d,uVar5,iVar2);
              apCfgWriteString(s_Level,(char *)(local_54c + 0x1f),local_208);
              iVar2 = iVar2 + 1;
            } while (iVar2 < 8);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xf);
        uVar5 = 0;
        do {
          iVar2 = GetCBItemState(param_1,*(uint *)((int)local_54c + uVar5 + 0x20));
          if (iVar2 != 0) {
            GetDlgItemTextA(param_1,*(int *)((int)local_54c + uVar5),local_410,0x104);
            apCfgWriteString(s_Level,s_File,local_410);
            if ((DAT_0095d074 == 0) &&
               ((iVar2 = stricmp(local_410,(char *)&gsSceneFullName), iVar2 != 0 ||
                (iVar2 = GetCBItemState(param_1,0x430), iVar2 != 0)))) {
              if (gspSysPlay == (gspPLAY_SYSTEM *)0x0) {
                return 0;
              }
              msgSYSTEM::PostMsg(&msgSystem,(msgADDR *)gspSysPlay,0x3ea,(msgADDR *)0x0);
              return 0;
            }
          }
          uVar5 = uVar5 + 4;
          if (0x1f < uVar5) {
            return 0;
          }
        } while( true );
      }
      uVar5 = 0;
      local_550 = param_3 & 0xffff;
      do {
        if ((param_3 & 0xffff) == *(uint *)((int)local_54c + uVar5 + 0x7c)) {
          iVar2 = *(int *)((int)local_54c + uVar5);
          GetDlgItemTextA(param_1,iVar2,local_410,0x104);
          uVar11 = 0x1000;
          pcVar10 = (char *)0x0;
          pcVar9 = s_Choose_Level_;
          pcVar8 = s___lg;
          pcVar7 = s_Level____lg_;
          pcVar3 = fnmGetPath(local_410);
          pcVar3 = wifOpenFile(param_1,pcVar3,pcVar7,pcVar8,pcVar9,pcVar10,uVar11);
          if (pcVar3 != (char *)0x0) {
            SetDlgItemTextA(param_1,iVar2,pcVar3);
          }
        }
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x20);
      if (param_3 >> 0x10 == 0) {
        uVar5 = 0;
        do {
          if (local_550 == local_54c[uVar5 + 0x10]) {
            _apCfgReadInt((void **)0x0,s_Level,s_CurLevel,&local_554);
            iVar2 = local_554;
            iVar6 = 0;
            do {
              GetDlgItemTextA(param_1,local_54c[iVar6],local_208,0x104);
              sprintf(acStack_450,s_Level__d__d,iVar2,iVar6);
              apCfgWriteString(s_Level,acStack_450,local_208);
              iVar6 = iVar6 + 1;
            } while (iVar6 < 8);
            iVar2 = 0;
            do {
              sprintf(local_490,s_Level__d__d,uVar5,iVar2);
              _apCfgReadString((void **)0x0,s_Level,local_490,local_30c,0x104);
              SetDlgItemTextA(param_1,local_54c[iVar2],local_30c);
              iVar2 = iVar2 + 1;
            } while (iVar2 < 8);
            apCfgWriteInt(s_Level,s_CurLevel,uVar5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0xf);
        uVar5 = 0;
        do {
          iVar2 = GetCBItemState(param_1,*(uint *)((int)local_54c + uVar5 + 0x20));
          iStack_558 = iVar2;
          pHVar4 = GetDlgItem(param_1,*(int *)((int)local_54c + uVar5));
          EnableWindow(pHVar4,iVar2);
          iVar2 = iStack_558;
          pHVar4 = GetDlgItem(param_1,*(int *)((int)local_54c + uVar5 + 0x7c));
          EnableWindow(pHVar4,iVar2);
          uVar5 = uVar5 + 4;
        } while (uVar5 < 0x20);
      }
    }
    return 0;
  }
  uVar5 = 0;
  do {
    SetCBItemState(param_1,local_54c[uVar5 + 0x10],0);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xf);
  local_554 = 0;
  _apCfgReadInt((void **)0x0,s_Level,s_CurLevel,&local_554);
  SetCBItemState(param_1,local_54c[local_554 + 0x10],1);
  iVar2 = local_554;
  iVar6 = 0;
  do {
    sprintf(local_490,s_Level__d__d,iVar2,iVar6);
    _apCfgReadString((void **)0x0,s_Level,local_490,local_30c,0x104);
    SetDlgItemTextA(param_1,local_54c[iVar6],local_30c);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  _apCfgReadString((void **)0x0,s_Level,s_File,local_104,0x104);
  uVar5 = 0;
  do {
    iVar2 = *(int *)((int)local_54c + uVar5);
    GetDlgItemTextA(param_1,iVar2,local_410,0x104);
    iVar6 = stricmp(local_410,local_104);
    if (iVar6 == 0) {
      iVar6 = -1;
      pcVar3 = local_410;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (iVar6 == -2) goto LAB_00525451;
      iStack_558 = 1;
    }
    else {
LAB_00525451:
      iStack_558 = 0;
    }
    SetCBItemState(param_1,*(uint *)((int)local_54c + uVar5 + 0x20),iStack_558);
    iVar6 = iStack_558;
    pHVar4 = GetDlgItem(param_1,iVar2);
    EnableWindow(pHVar4,iVar6);
    iVar2 = iStack_558;
    pHVar4 = GetDlgItem(param_1,*(int *)((int)local_54c + uVar5 + 0x7c));
    EnableWindow(pHVar4,iVar2);
    uVar5 = uVar5 + 4;
    if (0x1f < uVar5) {
      iVar2 = _apCfgReadBool((void **)0x0,s_Level,s_ForceReload,&iStack_558);
      if ((iVar2 != 0) && (iStack_558 != 0)) {
        SetCBItemState(param_1,0x430,iStack_558);
      }
      iVar2 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadComm,&iStack_558);
      if ((iVar2 != 0) && (iStack_558 != 0)) {
        SetCBItemState(param_1,0x443,iStack_558);
      }
      iVar2 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadMP,&iStack_558);
      if ((iVar2 != 0) && (iStack_558 != 0)) {
        SetCBItemState(param_1,0x444,iStack_558);
      }
      iVar2 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadScn,&iStack_558);
      if ((iVar2 != 0) && (iStack_558 != 0)) {
        SetCBItemState(param_1,0x431,iStack_558);
      }
      iVar2 = _apCfgReadBool((void **)0x0,s_Level,s_PreloadScnUpd,&iStack_558);
      if ((iVar2 != 0) && (iStack_558 != 0)) {
        SetCBItemState(param_1,0x442,iStack_558);
      }
      return 1;
    }
  } while( true );
}




/* from: gs:gs_cfg.cpp
   addr: 005255D0 */

int _gsCfgMP_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  char cVar1;
  HWND pHVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  BOOL BVar8;
  char *pcVar9;
  uint uVar10;
  ulong uVar11;
  int local_118;
  uint local_114 [4];
  CHAR local_104 [260];
  
  local_114[1] = 0x437;
  local_114[2] = 0x438;
  local_114[3] = 0x439;
  if (param_2 == 0x110) {
    SetCBItemState(param_1,0x437,0);
    SetCBItemState(param_1,0x438,0);
    SetCBItemState(param_1,0x439,0);
    SetCBItemState(param_1,0x43a,0);
    _apCfgReadBool((void **)0x0,s_Multiplayer,s_DemoPlay,&local_118);
    _apCfgReadBool((void **)0x0,s_Multiplayer,s_DemoRecord,(int *)local_114);
    SetCBItemState(param_1,0x43e,local_114[0]);
    SetCBItemState(param_1,0x43f,local_118);
    if ((local_114[0] == 0) && (local_118 == 0)) {
      iVar3 = gsMP_SYSTEM::ReadMode(gsSysMP);
      uVar10 = local_114[iVar3];
    }
    else {
      uVar10 = 0x43a;
    }
    SetCBItemState(param_1,uVar10,1);
    iVar3 = _apCfgReadString((void **)0x0,s_Multiplayer,s_ServerIP,local_104,0x40);
    if (iVar3 == 0) {
      do {
        cVar1 = s_[iVar3];
        local_104[iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      } while (cVar1 != '\0');
    }
    SetDlgItemTextA(param_1,0x43b,local_104);
    iVar3 = _apCfgReadString((void **)0x0,s_Multiplayer,s_PlayerName,local_104,0x40);
    if (iVar3 == 0) {
      do {
        cVar1 = s_[iVar3];
        local_104[iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      } while (cVar1 != '\0');
    }
    SetDlgItemTextA(param_1,0x43d,local_104);
    iVar3 = _apCfgReadString((void **)0x0,s_Multiplayer,s_ServerName,local_104,0x40);
    if (iVar3 == 0) {
      do {
        cVar1 = s_[iVar3];
        local_104[iVar3] = cVar1;
        iVar3 = iVar3 + 1;
      } while (cVar1 != '\0');
    }
    SetDlgItemTextA(param_1,0x43c,local_104);
    local_104[0] = '\0';
    _apCfgReadString((void **)0x0,s_Multiplayer,s_DemoFile,local_104,0x40);
    SetDlgItemTextA(param_1,0x441,local_104);
  }
  else if (param_2 == 0x111) {
    if ((short)param_3 == 1) {
      GetDlgItemTextA(param_1,0x43b,local_104,0x40);
      apCfgWriteString(s_Multiplayer,s_ServerIP,local_104);
      GetDlgItemTextA(param_1,0x43d,local_104,0x40);
      apCfgWriteString(s_Multiplayer,s_PlayerName,local_104);
      GetDlgItemTextA(param_1,0x43c,local_104,0x40);
      apCfgWriteString(s_Multiplayer,s_ServerName,local_104);
      iVar3 = GetCBItemState(param_1,0x43a);
      if (iVar3 == 0) {
        apCfgWriteBool(s_Multiplayer,s_DemoPlay,0);
        apCfgWriteBool(s_Multiplayer,s_DemoRecord,0);
        iVar3 = GetCBItemState(param_1,0x437);
        if (iVar3 == 0) {
          iVar3 = GetCBItemState(param_1,0x438);
          if (iVar3 == 0) {
            iVar3 = GetCBItemState(param_1,0x439);
            uVar10 = 3;
            if (iVar3 == 0) {
              uVar10 = local_114[0];
            }
          }
          else {
            uVar10 = 2;
          }
        }
        else {
          uVar10 = 1;
        }
      }
      else {
        local_118 = GetCBItemState(param_1,0x43f);
        apCfgWriteBool(s_Multiplayer,s_DemoPlay,local_118);
        apCfgWriteBool(s_Multiplayer,s_DemoRecord,(uint)(local_118 == 0));
        uVar10 = (local_118 != 0) + 2;
      }
      pcVar4 = gsMP_SYSTEM::Mode2String(gsSysMP,uVar10);
      apCfgWriteString(s_Multiplayer,s_Mode,pcVar4);
      GetDlgItemTextA(param_1,0x441,local_104,0x40);
      apCfgWriteString(s_Multiplayer,s_DemoFile,local_104);
      return 0;
    }
    if ((short)param_3 == 0x442) {
      GetDlgItemTextA(param_1,0x441,local_104,0x104);
      uVar11 = 0x1000;
      pcVar9 = (char *)0x0;
      pcVar7 = s_Choose_Demo_File;
      pcVar6 = s___sdf;
      pcVar5 = s_Level____sdf_;
      pcVar4 = fnmGetPath(local_104);
      pcVar4 = wifOpenFile(param_1,pcVar4,pcVar5,pcVar6,pcVar7,pcVar9,uVar11);
      if (pcVar4 != (char *)0x0) {
        SetDlgItemTextA(param_1,0x441,pcVar4);
        return 0;
      }
    }
  }
  else if (param_2 == 0x400) {
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x437);
    EnableWindow(pHVar2,BVar8);
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x438);
    EnableWindow(pHVar2,BVar8);
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x439);
    EnableWindow(pHVar2,BVar8);
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x43c);
    EnableWindow(pHVar2,BVar8);
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x43d);
    EnableWindow(pHVar2,BVar8);
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x43a);
    EnableWindow(pHVar2,BVar8);
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x43e);
    EnableWindow(pHVar2,BVar8);
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x43f);
    EnableWindow(pHVar2,BVar8);
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x441);
    EnableWindow(pHVar2,BVar8);
    BVar8 = 1;
    pHVar2 = GetDlgItem(param_1,0x442);
    EnableWindow(pHVar2,BVar8);
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_cfg.cpp
   addr: 00525A80 */

int _gsCfgVideo_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  int iVar1;
  HWND pHVar2;
  LPARAM lParam;
  WPARAM WVar3;
  LRESULT LVar4;
  vidDRIVER *this;
  vidMODE *pvVar5;
  byte *pbVar6;
  code *pcVar7;
  code *pcVar8;
  undefined4 uVar9;
  BOOL BVar10;
  undefined4 uVar11;
  int local_11c;
  float local_118;
  WPARAM WStack_114;
  WPARAM local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  char acStack_100 [256];
  
  if (param_2 < 0x112) {
    if (param_2 != 0x111) {
      if (param_2 != 0x4e) {
        if (param_2 != 0x110) {
          return 0;
        }
        iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FullScr,&local_11c);
        if ((iVar1 != 0) && (local_11c == 0)) {
          SetCBItemState(param_1,0x3ef,1);
        }
        iVar1 = 0;
        pHVar2 = GetDlgItem(param_1,0x3f0);
        ShowWindow(pHVar2,iVar1);
        iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_Wait_VSync,&local_11c);
        if ((iVar1 != 0) && (local_11c != 0)) {
          SetCBItemState(param_1,0x400,1);
        }
        iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_Wait_Pending,&local_11c);
        if ((iVar1 != 0) && (local_11c != 0)) {
          SetCBItemState(param_1,0x401,1);
        }
        iVar1 = _apCfgReadBool((void **)0x0,s_Video,s_UseMenu,&local_11c);
        if ((iVar1 != 0) && (local_11c != 0)) {
          SetCBItemState(param_1,0x43f,local_11c);
        }
        SendDlgItemMessageA(param_1,0x402,0x406,1,0x340002);
        SendDlgItemMessageA(param_1,0x402,0x414,5,0);
        iVar1 = _apCfgReadFloat((void **)0x0,s_Video,s_Gamma,&local_118);
        if (iVar1 == 0) {
          local_118 = 1.4;
        }
        lParam = ftol();
        SendDlgItemMessageA(param_1,0x402,0x405,1,lParam);
        SetDlgItemFloat(param_1,0x40c,local_118);
        iVar1 = 0;
        if (0 < DAT_0095d010) {
          do {
            WVar3 = SendDlgItemMessageA(param_1,0x3ea,0x143,0,*(int *)(DAT_0095d078 + iVar1 * 4) + 8
                                       );
            SendDlgItemMessageA(param_1,0x3ea,0x151,WVar3,*(LPARAM *)(DAT_0095d078 + iVar1 * 4));
            iVar1 = iVar1 + 1;
          } while (iVar1 < DAT_0095d010);
        }
        BVar10 = DAT_0095d07c;
        pHVar2 = GetDlgItem(param_1,0x3ea);
        EnableWindow(pHVar2,BVar10);
        return 1;
      }
      if ((short)param_3 != 0x402) {
        return 1;
      }
      local_110 = SendDlgItemMessageA(param_1,0x402,0x400,0,0);
      local_118 = (float)(int)local_110 * ___real_3dcccccd;
      SetDlgItemFloat(param_1,0x40c,local_118);
      return 1;
    }
    if ((short)param_3 == 1) {
      WVar3 = SendDlgItemMessageA(param_1,0x3ea,0x147,0,0);
      LVar4 = SendDlgItemMessageA(param_1,0x3ea,0x150,WVar3,0);
      if ((WVar3 != 0xffffffff) && (LVar4 != 0)) {
        iVar1 = GetCBItemState(param_1,0x400);
        apCfgWriteBool(s_Video,s_Wait_VSync,iVar1);
        iVar1 = GetCBItemState(param_1,0x401);
        apCfgWriteBool(s_Video,s_Wait_Pending,iVar1);
        iVar1 = GetCBItemState(param_1,0x43f);
        apCfgWriteBool(s_Video,s_UseMenu,iVar1);
        local_110 = SendDlgItemMessageA(param_1,0x402,0x400,0,0);
        local_118 = (float)(int)local_110 * ___real_3dcccccd;
        apCfgWriteFloat(s_Video,s_Gamma,local_118);
        apCfgWriteString(s_Video,s_VIDEO_Drv,(char *)(LVar4 + 8));
        iVar1 = GetCBItemState(param_1,0x3ef);
        apCfgWriteBool(s_Video,s_VIDEO_FullScr,(uint)(iVar1 == 0));
        WVar3 = SendDlgItemMessageA(param_1,0x3f4,0x147,0,0);
        LVar4 = SendDlgItemMessageA(param_1,0x3f4,0x150,WVar3,0);
        if ((WVar3 != 0xffffffff) && (LVar4 != 0)) {
          apCfgWriteInt(s_Video,s_VIDEO_SizeX,*(int *)(LVar4 + 8));
          apCfgWriteInt(s_Video,s_VIDEO_SizeY,*(int *)(LVar4 + 0xc));
          apCfgWriteInt(s_Video,s_VIDEO_BPP,*(int *)(LVar4 + 0x10));
          return 0;
        }
      }
      MessageBeep(0xffffffff);
      return 1;
    }
    if ((short)param_3 == 0x3ea) {
      pcVar7 = EnableWindow_exref;
      if (param_3 >> 0x10 != 9) {
        return 0;
      }
      goto LAB_00525eb5;
    }
    if ((short)param_3 != 0x3f4) {
      return 0;
    }
    pcVar7 = GetDlgItem_exref;
    pcVar8 = EnableWindow_exref;
    if (param_3 >> 0x10 != 9) {
      return 0;
    }
  }
  else {
    if (param_2 != 0x400) {
      return 0;
    }
    BVar10 = DAT_0095d07c;
    pHVar2 = GetDlgItem(param_1,0x3ea);
    pcVar7 = EnableWindow_exref;
    EnableWindow(pHVar2,BVar10);
    _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FullScr,&local_11c);
    SetCBItemState(param_1,0x3ef,(uint)(local_11c == 0));
    iVar1 = _apCfgReadString((void **)0x0,s_Video,s_VIDEO_Drv,acStack_100,0x100);
    if (iVar1 == 0) {
      return 1;
    }
    WVar3 = SendDlgItemMessageA(param_1,0x3ea,0x14c,0xffffffff,(LPARAM)acStack_100);
    if (WVar3 == 0xffffffff) {
      return 1;
    }
    SendDlgItemMessageA(param_1,0x3ea,0x14e,WVar3,0);
LAB_00525eb5:
    SendDlgItemMessageA(param_1,0x3f4,0x14b,0,0);
    WVar3 = SendDlgItemMessageA(param_1,0x3ea,0x147,0,0);
    if (WVar3 == 0xffffffff) {
      return 1;
    }
    this = (vidDRIVER *)SendDlgItemMessageA(param_1,0x3ea,0x150,WVar3,0);
    if (this == (vidDRIVER *)0x0) {
      pHVar2 = GetDlgItem(param_1,1);
      (*pcVar7)(pHVar2,this);
      return 1;
    }
    uVar9 = 1;
    pHVar2 = GetDlgItem(param_1,1);
    (*pcVar7)(pHVar2,uVar9);
    local_110 = 0xffffffff;
    iStack_10c = 0x280;
    iStack_108 = 0x1e0;
    iStack_104 = 0x10;
    _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeX,&iStack_10c);
    _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeY,&iStack_108);
    _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_BPP,&iStack_104);
    iVar1 = 0;
    if (*(int *)(this + 0x244) < 1) {
LAB_0052613e:
      WVar3 = 0;
    }
    else {
      do {
        pvVar5 = vidDRIVER::operator[](this,iVar1);
        if (((byte)*pvVar5 & 1) != 0) {
          pvVar5 = vidDRIVER::operator[](this,iVar1);
          uVar9 = *(undefined4 *)(pvVar5 + 0x10);
          pvVar5 = vidDRIVER::operator[](this,iVar1);
          uVar11 = *(undefined4 *)(pvVar5 + 0xc);
          pvVar5 = vidDRIVER::operator[](this,iVar1);
          sprintf((char *)&apBuffer,s__i____i___i_bpp_,*(undefined4 *)(pvVar5 + 8),uVar11,uVar9);
          WStack_114 = SendDlgItemMessageA(param_1,0x3f4,0x143,0,0x60ff80);
          pvVar5 = vidDRIVER::operator[](this,iVar1);
          SendDlgItemMessageA(param_1,0x3f4,0x151,WStack_114,(LPARAM)pvVar5);
          pvVar5 = vidDRIVER::operator[](this,iVar1);
          if (((*(int *)(pvVar5 + 8) == iStack_10c) &&
              (pvVar5 = vidDRIVER::operator[](this,iVar1), *(int *)(pvVar5 + 0xc) == iStack_108)) &&
             (pvVar5 = vidDRIVER::operator[](this,iVar1), *(int *)(pvVar5 + 0x10) == iStack_104)) {
            local_110 = WStack_114;
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x244));
      WVar3 = local_110;
      if (local_110 == 0xffffffff) goto LAB_0052613e;
    }
    SendDlgItemMessageA(param_1,0x3f4,0x14e,WVar3,0);
    if (((byte)this[4] & 4) == 0) {
      SetCBItemState(param_1,0x3ef,0);
      pcVar7 = GetDlgItem_exref;
      BVar10 = 0;
      pHVar2 = GetDlgItem(param_1,0x3ef);
      pcVar8 = EnableWindow_exref;
      EnableWindow(pHVar2,BVar10);
    }
    else {
      BVar10 = 1;
      pHVar2 = GetDlgItem(param_1,0x3ef);
      EnableWindow(pHVar2,BVar10);
      pcVar7 = GetDlgItem_exref;
      pcVar8 = EnableWindow_exref;
    }
  }
  WStack_114 = SendDlgItemMessageA(param_1,0x3ea,0x147,0,0);
  LVar4 = SendDlgItemMessageA(param_1,0x3ea,0x150,WStack_114,0);
  if ((WStack_114 == 0xffffffff) || (LVar4 == 0)) {
LAB_0052623d:
    uVar11 = 0;
    uVar9 = 1;
  }
  else {
    if ((*(byte *)(LVar4 + 4) & 4) != 0) {
      WStack_114 = SendDlgItemMessageA(param_1,0x3f4,0x147,0,0);
      if (WStack_114 == 0xffffffff) goto LAB_0052623d;
      uVar9 = (*pcVar7)(param_1,1,1);
      (*pcVar8)(uVar9);
      pbVar6 = (byte *)SendDlgItemMessageA(param_1,0x3f4,0x150,WStack_114,0);
      if ((*pbVar6 & 2) != 0) {
        uVar11 = 1;
        uVar9 = 0x3ef;
        goto LAB_00526241;
      }
    }
    SetCBItemState(param_1,0x3ef,0);
    uVar11 = 0;
    uVar9 = 0x3ef;
  }
LAB_00526241:
  uVar9 = (*pcVar7)(param_1,uVar9,uVar11);
  (*pcVar8)(uVar9);
  return 1;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_cfg.cpp
   addr: 00526260 */

int _gsCfgSound_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  HWND hWnd;
  int iVar1;
  LRESULT LVar2;
  LPARAM LVar3;
  BOOL bEnable;
  
  if (param_2 == 0x110) {
    iVar1 = _apCfgReadBool((void **)0x0,s_Sound,s_Sound,(int *)&param_3);
    if ((iVar1 != 0) && (param_3 != 0)) {
      SetCBItemState(param_1,0x407,1);
    }
    SendDlgItemMessageA(param_1,0x408,0x406,1,0x320000);
    SendDlgItemMessageA(param_1,0x408,0x414,5,0);
    iVar1 = _apCfgReadFloat((void **)0x0,s_Sound,s_Volume,(float *)&param_2);
    if (iVar1 == 0) {
      LVar3 = 0x32;
    }
    else {
      LVar3 = ftol();
    }
    SendDlgItemMessageA(param_1,0x408,0x405,1,LVar3);
    iVar1 = _apCfgReadBool((void **)0x0,s_Sound,s_Music,(int *)&param_3);
    if ((iVar1 != 0) && (param_3 != 0)) {
      SetCBItemState(param_1,0x409,1);
    }
    SendDlgItemMessageA(param_1,0x40a,0x406,1,0x320000);
    SendDlgItemMessageA(param_1,0x40a,0x414,5,0);
    iVar1 = _apCfgReadFloat((void **)0x0,s_Sound,s_Music_Volume,(float *)&param_2);
    if (iVar1 == 0) {
      LVar3 = 0xe;
    }
    else {
      LVar3 = ftol();
    }
    SendDlgItemMessageA(param_1,0x40a,0x405,1,LVar3);
    iVar1 = _apCfgReadBool((void **)0x0,s_Sound,s_SFX,(int *)&param_3);
    if ((iVar1 != 0) && (param_3 != 0)) {
      SetCBItemState(param_1,0x40b,1);
    }
    SendDlgItemMessageA(param_1,0x40d,0x406,1,0x320000);
    SendDlgItemMessageA(param_1,0x40d,0x414,5,0);
    iVar1 = _apCfgReadFloat((void **)0x0,s_Sound,s_SFX_Volume,(float *)&param_2);
    if (iVar1 == 0) {
      LVar3 = 0xe;
    }
    else {
      LVar3 = ftol();
    }
    SendDlgItemMessageA(param_1,0x40d,0x405,1,LVar3);
    iVar1 = _apCfgReadBool((void **)0x0,s_Sound,s_Voice,(int *)&param_3);
    if ((iVar1 != 0) && (param_3 != 0)) {
      SetCBItemState(param_1,0x410,1);
    }
    SendDlgItemMessageA(param_1,0x40c,0x406,1,0x320000);
    SendDlgItemMessageA(param_1,0x40c,0x414,5,0);
    iVar1 = _apCfgReadFloat((void **)0x0,s_Sound,s_Voice_Volume,(float *)&param_2);
    if (iVar1 == 0) {
      LVar3 = 0xe;
    }
    else {
      LVar3 = ftol();
    }
    SendDlgItemMessageA(param_1,0x40c,0x405,1,LVar3);
    iVar1 = _apCfgReadBool((void **)0x0,s_Sound,s_SwitchChn,(int *)&param_3);
    if ((iVar1 != 0) && (param_3 != 0)) {
      SetCBItemState(param_1,0x46e,1);
    }
    return 1;
  }
  if (param_2 == 0x111) {
    if ((short)param_3 == 1) {
      iVar1 = GetCBItemState(param_1,0x407);
      apCfgWriteBool(s_Sound,s_Sound,iVar1);
      LVar2 = SendDlgItemMessageA(param_1,0x408,0x400,0,0);
      param_2 = (uint)((float)LVar2 - ___real_42480000);
      apCfgWriteFloat(s_Sound,s_Volume,(float)param_2);
      iVar1 = GetCBItemState(param_1,0x409);
      apCfgWriteBool(s_Sound,s_Music,iVar1);
      LVar2 = SendDlgItemMessageA(param_1,0x40a,0x400,0,0);
      param_2 = (uint)((float)LVar2 - ___real_42480000);
      apCfgWriteFloat(s_Sound,s_Music_Volume,(float)param_2);
      iVar1 = GetCBItemState(param_1,0x40b);
      apCfgWriteBool(s_Sound,s_SFX,iVar1);
      LVar2 = SendDlgItemMessageA(param_1,0x40d,0x400,0,0);
      param_2 = (uint)((float)LVar2 - ___real_42480000);
      apCfgWriteFloat(s_Sound,s_SFX_Volume,(float)param_2);
      iVar1 = GetCBItemState(param_1,0x410);
      apCfgWriteBool(s_Sound,s_Voice,iVar1);
      LVar2 = SendDlgItemMessageA(param_1,0x40c,0x400,0,0);
      param_2 = (uint)((float)LVar2 - ___real_42480000);
      apCfgWriteFloat(s_Sound,s_Voice_Volume,(float)param_2);
      iVar1 = GetCBItemState(param_1,0x46e);
      apCfgWriteBool(s_Sound,s_SwitchChn,iVar1);
    }
  }
  else if (param_2 == 0x400) {
    bEnable = DAT_0095d07c;
    hWnd = GetDlgItem(param_1,0x407);
    EnableWindow(hWnd,bEnable);
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_cfg.cpp
   addr: 005266D0 */

int _gsCfgControl_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  LRESULT LVar1;
  int iVar2;
  INT_PTR IVar3;
  int iVar4;
  HWND pHVar5;
  ulong uVar6;
  LPARAM LVar7;
  LONG LVar8;
  HMENU pHVar9;
  short sVar10;
  int iVar11;
  char *pcVar12;
  float local_3b4;
  int iStack_3b0;
  int local_3ac;
  tagRECT local_3a8;
  int local_398 [3];
  tagPOINT tStack_38c;
  char acStack_384 [300];
  ushort auStack_258 [300];
  
  if (param_2 == 0x7b) {
    LVar8 = GetWindowLongA((HWND)param_3,-0xc);
    if (LVar8 != 0x40a) {
      return 1;
    }
    pHVar5 = GetDlgItem(param_1,0x40a);
    uVar6 = ListView_GetSelectedData(pHVar5);
    if (uVar6 != 0xffffffff) {
      pHVar5 = GetDlgItem(param_1,0x40a);
      ListView_GetMenuPos(pHVar5,&tStack_38c);
      pHVar9 = LoadMenuA(apHInstance,(LPCSTR)0x6b);
      pHVar9 = GetSubMenu(pHVar9,0);
      TrackPopupMenu(pHVar9,2,tStack_38c.x,tStack_38c.y,0,param_1,(RECT *)0x0);
      return 1;
    }
    mbShowOk(s_You_can_t_change_this_assigments);
    goto LAB_00526d0a;
  }
  if (param_2 == 0x110) {
    iVar2 = _apCfgReadBool((void **)0x0,s_Input,s_InvertMouse,&local_3ac);
    if ((iVar2 != 0) && (local_3ac != 0)) {
      SetCBItemState(param_1,0x40d,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Input,s_UseJoy,&local_3ac);
    if ((iVar2 != 0) && (local_3ac != 0)) {
      SetCBItemState(param_1,0x40e,1);
    }
    SendDlgItemMessageA(param_1,0x408,0x406,1,0x780003);
    SendDlgItemMessageA(param_1,0x408,0x414,5,0);
    iVar2 = _apCfgReadFloat((void **)0x0,s_Input,s_MouseSens,&local_3b4);
    if (iVar2 == 0) {
      LVar7 = 9;
    }
    else {
      LVar7 = ftol();
    }
    SendDlgItemMessageA(param_1,0x408,0x405,1,LVar7);
    SendDlgItemMessageA(param_1,0x409,0x406,1,0x780003);
    SendDlgItemMessageA(param_1,0x409,0x414,5,0);
    iVar2 = _apCfgReadFloat((void **)0x0,s_Input,s_MouseSensIface,&local_3b4);
    if (iVar2 == 0) {
      LVar7 = 9;
    }
    else {
      LVar7 = ftol();
    }
    SendDlgItemMessageA(param_1,0x409,0x405,1,LVar7);
    GetClientRect(param_1,&local_3a8);
    iVar11 = -1;
    iStack_3b0 = local_3a8.right - local_3a8.left;
    iVar2 = ftol();
    pcVar12 = s_Command_Name;
    pHVar5 = GetDlgItem(param_1,0x40a);
    ListView_AddColumn(pHVar5,0,pcVar12,iVar2,iVar11);
    iVar11 = -1;
    iStack_3b0 = local_3a8.right - local_3a8.left;
    iVar2 = ftol();
    pcVar12 = s_First_Assignment;
    pHVar5 = GetDlgItem(param_1,0x40a);
    ListView_AddColumn(pHVar5,1,pcVar12,iVar2,iVar11);
    iVar11 = -1;
    iStack_3b0 = local_3a8.right - local_3a8.left;
    iVar2 = ftol();
    pcVar12 = s_Second_Assignment;
    pHVar5 = GetDlgItem(param_1,0x40a);
    ListView_AddColumn(pHVar5,2,pcVar12,iVar2,iVar11);
    _gsCfgUpdateCmdList(param_1);
    return 1;
  }
  if (param_2 != 0x111) {
    return 0;
  }
  sVar10 = (short)param_3;
  if (sVar10 == 1) {
    LVar1 = SendDlgItemMessageA(param_1,0x408,0x400,0,0);
    local_3b4 = (float)LVar1 * ___real_3d088889;
    apCfgWriteFloat(s_Input,s_MouseSens,local_3b4);
    LVar1 = SendDlgItemMessageA(param_1,0x409,0x400,0,0);
    local_3b4 = (float)LVar1 * ___real_3d088889;
    apCfgWriteFloat(s_Input,s_MouseSensIface,local_3b4);
    iVar2 = GetCBItemState(param_1,0x40d);
    apCfgWriteBool(s_Input,s_InvertMouse,iVar2);
    iVar2 = GetCBItemState(param_1,0x40e);
    apCfgWriteBool(s_Input,s_UseJoy,iVar2);
    gsINP_SYSTEM::SaveLayout(gsSysInput);
    return 1;
  }
  if ((sVar10 == -0x63b6) || (sVar10 == -0x63b5)) {
    pHVar5 = GetDlgItem(param_1,0x40a);
    iVar2 = ListView_GetSelected(pHVar5);
    pHVar5 = GetDlgItem(param_1,0x40a);
    uVar6 = ListView_GetSelectedData(pHVar5);
    if (iVar2 == -1) {
      return 1;
    }
    if ((param_3 & 0xffff) == 0x9c4a) {
      iVar2 = 0;
    }
    else {
      if ((param_3 & 0xffff) != 0x9c4b) goto LAB_00526a4f;
      iVar2 = 1;
    }
    gsiCOMMAND::SetKSeq((gsiCOMMAND *)
                        (*(int *)(*(int *)(gsSysInput + 0x40) + 4) +
                        (uVar6 - *(int *)(*(int *)(gsSysInput + 0x40) + 8)) * 0x9c),iVar2,0,
                        (int *)0x0);
LAB_00526a4f:
    _gsCfgUpdateCmdList(param_1);
    return 1;
  }
  if ((sVar10 != -0x63b8) && (sVar10 != -0x63b7)) {
    return 1;
  }
  IVar3 = DialogBoxParamA(apHInstance,(LPCSTR)0x6d,param_1,_gsCfgShortCut_WND,(LPARAM)local_398);
  if (0 < IVar3) {
    inpINPUT::GetShortcutName
              (*(inpINPUT **)(gsSysInput + 0x3c),local_398,IVar3,auStack_258,300,0x3c);
    gsSTRINGS::UnicodeToAscii(gsStrings,auStack_258,acStack_384,300);
    iVar2 = *(int *)(gsSysInput + 0x40);
    iVar11 = *(int *)(iVar2 + 8);
    if (iVar11 < *(int *)(iVar2 + 0xc)) {
      do {
        iVar2 = gsiCOMMAND::FindKSeq
                          ((gsiCOMMAND *)
                           (*(int *)(iVar2 + 4) + (iVar11 - *(int *)(iVar2 + 8)) * 0x9c),IVar3,
                           local_398);
        if (iVar2 != -1) {
          iVar4 = mbShowYesNo(s_Shortcut___s__is_currently_assig,acStack_384,
                              *(int *)(*(int *)(gsSysInput + 0x40) + 4) + 4 +
                              (iVar11 - *(int *)(*(int *)(gsSysInput + 0x40) + 8)) * 0x9c);
          if (iVar4 == 6) {
            gsiCOMMAND::SetKSeq((gsiCOMMAND *)
                                (*(int *)(*(int *)(gsSysInput + 0x40) + 4) +
                                (iVar11 - *(int *)(*(int *)(gsSysInput + 0x40) + 8)) * 0x9c),iVar2,0
                                ,(int *)0x0);
          }
          SetFocus(param_1);
          if (iVar4 != 6) goto LAB_005269c6;
          break;
        }
        iVar11 = iVar11 + 1;
        iVar2 = *(int *)(gsSysInput + 0x40);
      } while (iVar11 < *(int *)(iVar2 + 0xc));
    }
    pHVar5 = GetDlgItem(param_1,0x40a);
    iVar2 = ListView_GetSelected(pHVar5);
    pHVar5 = GetDlgItem(param_1,0x40a);
    uVar6 = ListView_GetSelectedData(pHVar5);
    if (iVar2 != -1) {
      if ((param_3 & 0xffff) == 0x9c48) {
        iVar2 = 0;
      }
      else {
        if ((param_3 & 0xffff) != 0x9c49) goto LAB_005269c6;
        iVar2 = 1;
      }
      gsiCOMMAND::SetKSeq((gsiCOMMAND *)
                          (*(int *)(*(int *)(gsSysInput + 0x40) + 4) +
                          (uVar6 - *(int *)(*(int *)(gsSysInput + 0x40) + 8)) * 0x9c),iVar2,IVar3,
                          local_398);
    }
  }
LAB_005269c6:
  _gsCfgUpdateCmdList(param_1);
LAB_00526d0a:
  SetFocus(param_1);
  return 1;
}




/* from: gs:gs_cfg.cpp
   addr: 00526D30 */

void __fastcall _gsCfgUpdateCmdList(HWND__ *param_1)

{
  HWND pHVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  UINT UVar5;
  int iVar6;
  WPARAM wParam;
  WPARAM WVar7;
  ulong uVar8;
  undefined1 *lParam;
  LPARAM lParam_00;
  int iStack_3e4;
  int aiStack_3e0 [3];
  undefined1 auStack_3d4 [8];
  int iStack_3cc;
  char *pcStack_3c0;
  undefined1 auStack_3ac [8];
  int iStack_3a4;
  char *pcStack_398;
  char acStack_384 [300];
  ushort auStack_258 [300];
  
  lParam_00 = 0;
  WVar7 = 0;
  UVar5 = 0x1009;
  pHVar1 = GetDlgItem(param_1,0x40a);
  SendMessageA(pHVar1,UVar5,WVar7,lParam_00);
  WVar7 = 0;
  iVar3 = *(int *)(gsSysInput + 0x40);
  uVar2 = *(ulong *)(iVar3 + 8);
  if ((int)uVar2 < *(int *)(iVar3 + 0xc)) {
    do {
      iVar6 = -1;
      pcVar4 = (char *)(*(int *)(iVar3 + 4) + 4 + (uVar2 - *(int *)(iVar3 + 8)) * 0x9c);
      iVar3 = 0;
      uVar8 = uVar2;
      pHVar1 = GetDlgItem(param_1,0x40a);
      ListView_AddItem(pHVar1,WVar7,iVar3,pcVar4,iVar6,uVar8);
      iVar3 = 0;
      do {
        gsiCOMMAND::GetKSeq((gsiCOMMAND *)
                            (*(int *)(*(int *)(gsSysInput + 0x40) + 4) +
                            (uVar2 - *(int *)(*(int *)(gsSysInput + 0x40) + 8)) * 0x9c),iVar3,
                            &iStack_3e4,aiStack_3e0);
        if (iStack_3e4 < 1) {
          iStack_3a4 = iVar3 + 1;
          lParam = auStack_3ac;
          pcStack_398 = s_none;
        }
        else {
          inpINPUT::GetShortcutName
                    (*(inpINPUT **)(gsSysInput + 0x3c),aiStack_3e0,iStack_3e4,auStack_258,300,0x3c);
          gsSTRINGS::UnicodeToAscii(gsStrings,auStack_258,acStack_384,300);
          iStack_3cc = iVar3 + 1;
          pcStack_3c0 = acStack_384;
          lParam = auStack_3d4;
        }
        iVar3 = iVar3 + 1;
        UVar5 = 0x102e;
        wParam = WVar7;
        pHVar1 = GetDlgItem(param_1,0x40a);
        SendMessageA(pHVar1,UVar5,wParam,(LPARAM)lParam);
      } while (iVar3 < 2);
      uVar2 = uVar2 + 1;
      WVar7 = WVar7 + 1;
      iVar3 = *(int *)(gsSysInput + 0x40);
    } while ((int)uVar2 < *(int *)(iVar3 + 0xc));
  }
  return;
}




/* from: gs:gs_cfg.cpp
   addr: 00526E90 */

int _gsCfgShortCut_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  HWND pHVar1;
  BOOL BVar2;
  LPRECT lpRect;
  int iVar3;
  tagRECT local_3c;
  undefined1 local_2c [12];
  int iStack_20;
  INT_PTR IStack_c;
  int iStack_4;
  
  if (param_2 == 6) {
    (**(code **)(**(int **)(gsSysInput + 0x3c) + 0xc))(1);
  }
  else {
    if (param_2 == 0x110) {
      GetWindowRect(param_1,&local_3c);
      lpRect = (LPRECT)local_2c;
      pHVar1 = GetParent(param_1);
      GetWindowRect(pHVar1,lpRect);
      MoveWindow(param_1,((int)(local_2c._8_4_ - local_2c._0_4_) / 2 -
                         (local_3c.right - local_3c.left) / 2) + local_2c._0_4_,
                 ((iStack_20 - local_2c._4_4_) / 2 - (local_3c.bottom - local_3c.top) / 2) +
                 local_2c._4_4_,local_3c.right - local_3c.left,local_3c.bottom - local_3c.top,1);
      ShowWindow(param_1,5);
      UpdateWindow(param_1);
      InvalidateRect(param_1,(RECT *)0x0,1);
      iVar3 = 5;
      pHVar1 = GetDlgItem(param_1,0x41f);
      ShowWindow(pHVar1,iVar3);
      pHVar1 = GetDlgItem(param_1,0x41f);
      UpdateWindow(pHVar1);
      iVar3 = (**(code **)(**(int **)(gsSysInput + 0x3c) + 0x10))(param_1,1);
      if (iVar3 != 0) {
        (**(code **)(**(int **)(gsSysInput + 0x3c) + 0xc))(1);
        iVar3 = inpINPUT::StartGetShortcut(*(inpINPUT **)(gsSysInput + 0x3c));
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = inpINPUT::ContinueGetShortcut
                          (*(inpINPUT **)(gsSysInput + 0x3c),1,&iStack_4,(int *)0x110);
        while (iVar3 == 0) {
          BVar2 = PeekMessageA((LPMSG)(local_2c + 8),(HWND)0x0,0,0,1);
          if ((BVar2 != 0) && (local_2c._8_4_ == _apHMainWindow)) {
            TranslateMessage((MSG *)(local_2c + 8));
            DispatchMessageA((MSG *)(local_2c + 8));
          }
          inpINPUT::GetInput(*(inpINPUT **)(gsSysInput + 0x3c));
          iVar3 = inpINPUT::ContinueGetShortcut
                            (*(inpINPUT **)(gsSysInput + 0x3c),1,&iStack_4,(int *)0x110);
        }
      }
      (**(code **)(**(int **)(gsSysInput + 0x3c) + 0x10))(_apHMainWindow,0);
      iVar3 = 0;
      pHVar1 = GetDlgItem(param_1,0x41f);
      ShowWindow(pHVar1,iVar3);
      EndDialog(param_1,IStack_c);
      return 1;
    }
    if (param_2 == 0x111) {
      if (param_3 == 1) {
        EndDialog(param_1,0);
        return 1;
      }
      if (param_3 == 2) {
        EndDialog(param_1,0);
        return 1;
      }
    }
  }
  return 0;
}




/* from: gs:gs_cfg.cpp
   addr: 005270E0 */

int _gsCfgDebug_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  short sVar1;
  int iVar2;
  UINT UVar3;
  char *pcVar4;
  float fVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  int local_118;
  float local_114;
  UINT local_110;
  ulong local_10c;
  UINT local_108;
  CHAR local_104 [260];
  
  if (param_2 == 0x110) {
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_ShowFPS_PPF,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x406,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_GameOpt,s_HideHUD,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,1099,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_FixedFps,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x40c,1);
    }
    iVar2 = _apCfgReadFloat((void **)0x0,s_Debug,s_FixedFpsVal,&local_114);
    if (iVar2 != 0) {
      SetDlgItemFloat(param_1,0x40e,local_114);
    }
    iVar2 = _apCfgReadString((void **)0x0,s_Debug,s_ScrShotPath,local_104,0x104);
    if (iVar2 != 0) {
      SetDlgItemTextA(param_1,0x414,local_104);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_ShowGrid,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x3f9,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_SwitchWindow,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x400,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_NoColl,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x3f5,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_ShowGrass,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x44a,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_2PassRend,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x46d,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LightMaps,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x3fe,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseShaders,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x42b,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_WBuf,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x3fc,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_CompressTex,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x431,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseHTL,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x42a,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Filtration,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x3f6,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_MipMaps,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x3f7,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseWhiteTex,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x3ff,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseBlackTex,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x401,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_StencilBuf,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x432,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_Particles,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x433,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_LOD,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x435,1);
    }
    iVar2 = _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_LODNmb,(int *)&local_108);
    if (iVar2 != 0) {
      SetDlgItemInt(param_1,0x443,local_108,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_UseEMBM,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x436,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Visual,s_FOG,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x40f,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Visual,s_FOG_Setup,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x3fb,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Visual,s_ShowLogo,&local_118);
    if ((iVar2 != 0) && (local_118 != 0)) {
      SetCBItemState(param_1,0x3fa,1);
    }
    iVar2 = _apCfgReadDword((void **)0x0,s_Visual,s_FOG_Color,&local_10c);
    if (iVar2 != 0) {
      sprintf(local_104,s__0x_X,local_10c);
      SetDlgItemTextA(param_1,0x410,local_104);
    }
    iVar2 = _apCfgReadFloat((void **)0x0,s_Visual,s_FOG_Near,&local_114);
    if (iVar2 != 0) {
      SetDlgItemFloat(param_1,0x411,local_114);
    }
    iVar2 = _apCfgReadFloat((void **)0x0,s_Visual,s_FOG_Far,&local_114);
    if (iVar2 != 0) {
      SetDlgItemFloat(param_1,0x412,local_114);
    }
    iVar2 = _apCfgReadFloat((void **)0x0,s_Visual,s_FOG_FarInt,&local_114);
    if (iVar2 != 0) {
      SetDlgItemFloat(param_1,0x413,local_114);
    }
    local_110 = 1;
    _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_nTexStageUse,(int *)&local_110);
    SetDlgItemInt(param_1,0x448,local_110,1);
    return 1;
  }
  if (param_2 == 0x111) {
    sVar1 = (short)param_3;
    if (sVar1 == 1) {
      iVar2 = GetCBItemState(param_1,0x406);
      apCfgWriteBool(s_Debug,s_ShowFPS_PPF,iVar2);
      iVar2 = GetCBItemState(param_1,1099);
      apCfgWriteBool(s_GameOpt,s_HideHUD,iVar2);
      iVar2 = GetCBItemState(param_1,0x40c);
      apCfgWriteBool(s_Debug,s_FixedFps,iVar2);
      fVar5 = GetDlgItemFloat(param_1,0x40e);
      apCfgWriteFloat(s_Debug,s_FixedFpsVal,fVar5);
      GetDlgItemTextA(param_1,0x414,local_104,0x104);
      apCfgWriteString(s_Debug,s_ScrShotPath,local_104);
      iVar2 = GetCBItemState(param_1,0x3f9);
      apCfgWriteBool(s_Debug,s_ShowGrid,iVar2);
      iVar2 = GetCBItemState(param_1,0x400);
      apCfgWriteBool(s_Debug,s_SwitchWindow,iVar2);
      iVar2 = GetCBItemState(param_1,0x3f5);
      apCfgWriteBool(s_Debug,s_NoColl,iVar2);
      iVar2 = GetCBItemState(param_1,0x44a);
      apCfgWriteBool(s_Debug,s_ShowGrass,iVar2);
      iVar2 = GetCBItemState(param_1,0x46d);
      apCfgWriteBool(s_Video,s_VIDEO_2PassRend,iVar2);
      iVar2 = GetCBItemState(param_1,0x3fe);
      apCfgWriteBool(s_Video,s_VIDEO_LightMaps,iVar2);
      iVar2 = GetCBItemState(param_1,0x42b);
      apCfgWriteBool(s_Video,s_VIDEO_UseShaders,iVar2);
      iVar2 = GetCBItemState(param_1,0x3fc);
      apCfgWriteBool(s_Video,s_VIDEO_WBuf,iVar2);
      iVar2 = GetCBItemState(param_1,0x431);
      apCfgWriteBool(s_Video,s_VIDEO_CompressTex,iVar2);
      iVar2 = GetCBItemState(param_1,0x3f6);
      apCfgWriteBool(s_Video,s_VIDEO_Filtration,iVar2);
      iVar2 = GetCBItemState(param_1,0x3f7);
      apCfgWriteBool(s_Video,s_VIDEO_MipMaps,iVar2);
      iVar2 = GetCBItemState(param_1,0x3ff);
      apCfgWriteBool(s_Video,s_VIDEO_UseWhiteTex,iVar2);
      iVar2 = GetCBItemState(param_1,0x401);
      apCfgWriteBool(s_Video,s_VIDEO_UseBlackTex,iVar2);
      iVar2 = GetCBItemState(param_1,0x42a);
      apCfgWriteBool(s_Video,s_VIDEO_UseHTL,iVar2);
      iVar2 = GetCBItemState(param_1,0x432);
      apCfgWriteBool(s_Video,s_VIDEO_StencilBuf,iVar2);
      iVar2 = GetCBItemState(param_1,0x433);
      apCfgWriteBool(s_Video,s_VIDEO_Particles,iVar2);
      iVar2 = GetCBItemState(param_1,0x435);
      apCfgWriteBool(s_Video,s_VIDEO_LOD,iVar2);
      UVar3 = GetDlgItemInt(param_1,0x443,(BOOL *)0x0,1);
      apCfgWriteInt(s_Video,s_VIDEO_LODNmb,UVar3);
      iVar2 = GetCBItemState(param_1,0x436);
      apCfgWriteBool(s_Video,s_VIDEO_UseEMBM,iVar2);
      local_110 = GetDlgItemInt(param_1,0x448,(BOOL *)0x0,1);
      if ((int)local_110 < -1) {
        local_110 = 0xffffffff;
      }
      apCfgWriteInt(s_Video,s_VIDEO_nTexStageUse,local_110);
      iVar2 = GetCBItemState(param_1,0x40f);
      apCfgWriteBool(s_Visual,s_FOG,iVar2);
      iVar2 = GetCBItemState(param_1,0x3fb);
      apCfgWriteBool(s_Visual,s_FOG_Setup,iVar2);
      iVar2 = GetCBItemState(param_1,0x3fa);
      apCfgWriteBool(s_Visual,s_ShowLogo,iVar2);
      fVar5 = GetDlgItemFloat(param_1,0x411);
      apCfgWriteFloat(s_Visual,s_FOG_Near,fVar5);
      fVar5 = GetDlgItemFloat(param_1,0x412);
      apCfgWriteFloat(s_Visual,s_FOG_Far,fVar5);
      fVar5 = GetDlgItemFloat(param_1,0x413);
      apCfgWriteFloat(s_Visual,s_FOG_FarInt,fVar5);
      GetDlgItemTextA(param_1,0x410,local_104,0x104);
      sscanf(local_104,s__0x_X,&local_10c);
      apCfgWriteDword(s_Visual,s_FOG_Color,local_10c);
      return 0;
    }
    if (sVar1 == 0x415) {
      _apCfgReadString((void **)0x0,s_Debug,s_ScrShotPath,local_104,0x104);
      uVar10 = 4;
      pcVar9 = (char *)0x0;
      pcVar8 = s_Choose_Screen_Shot_path;
      pcVar7 = s___bmp;
      pcVar6 = s_Screen_Shot____bmp_;
      pcVar4 = fnmGetPath(local_104);
      pcVar4 = wifOpenFile(param_1,pcVar4,pcVar6,pcVar7,pcVar8,pcVar9,uVar10);
      if (pcVar4 != (char *)0x0) {
        SetDlgItemTextA(param_1,0x414,pcVar4);
        return 0;
      }
    }
    else if (sVar1 == 0x467) {
      apGPF_FILTER::GPFExeptFunc((_EXCEPTION_POINTERS *)0x0);
    }
  }
  return 0;
}




/* from: gs:gs_cfg.cpp
   addr: 00527C00 */

int _gsCfgDebug_1_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  animINST *paVar4;
  txmTEXTURE *ptVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ulong uVar10;
  int local_114;
  float local_110;
  float local_10c;
  float local_108;
  CHAR local_104 [260];
  
  if (param_2 == 0x110) {
    iVar2 = _apCfgReadString((void **)0x0,s_Debug,s_MemReportFile,local_104,0x104);
    if (iVar2 != 0) {
      SetDlgItemTextA(param_1,0x444,local_104);
    }
    iVar2 = _apCfgReadString((void **)0x0,s_Debug,s_InstListFile,local_104,0x104);
    if (iVar2 != 0) {
      SetDlgItemTextA(param_1,0x446,local_104);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_OFF_Rend_Low,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x430,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_OFF_Rend_High,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x435,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_OFF_AI,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x433,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_OFF_Rigid,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x434,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_OFF_Anim,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x436,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_OFF_SIMD,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x437,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_OFF_PVS,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x438,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_ProfCallFr,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x431,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decomp_FreezePVS,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x432,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decompose1,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x42c,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decompose2,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x42d,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decompose3,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x42e,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_Decompose4,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x42f,1);
    }
    iVar2 = _apCfgReadBool((void **)0x0,s_Debug,s_ShowProfInfo,&local_114);
    if ((iVar2 != 0) && (local_114 != 0)) {
      SetCBItemState(param_1,0x449,1);
    }
    return 1;
  }
  if (param_2 == 0x111) {
    sVar1 = (short)param_3;
    if (sVar1 == 1) {
      GetDlgItemTextA(param_1,0x444,local_104,0x104);
      apCfgWriteString(s_Debug,s_MemReportFile,local_104);
      GetDlgItemTextA(param_1,0x446,local_104,0x104);
      apCfgWriteString(s_Debug,s_InstListFile,local_104);
      iVar2 = GetCBItemState(param_1,0x430);
      apCfgWriteBool(s_Debug,s_Decomp_OFF_Rend_Low,iVar2);
      iVar2 = GetCBItemState(param_1,0x435);
      apCfgWriteBool(s_Debug,s_Decomp_OFF_Rend_High,iVar2);
      iVar2 = GetCBItemState(param_1,0x433);
      apCfgWriteBool(s_Debug,s_Decomp_OFF_AI,iVar2);
      iVar2 = GetCBItemState(param_1,0x434);
      apCfgWriteBool(s_Debug,s_Decomp_OFF_Rigid,iVar2);
      iVar2 = GetCBItemState(param_1,0x436);
      apCfgWriteBool(s_Debug,s_Decomp_OFF_Anim,iVar2);
      iVar2 = GetCBItemState(param_1,0x437);
      apCfgWriteBool(s_Debug,s_Decomp_OFF_SIMD,iVar2);
      iVar2 = GetCBItemState(param_1,0x438);
      apCfgWriteBool(s_Debug,s_Decomp_OFF_PVS,iVar2);
      iVar2 = GetCBItemState(param_1,0x431);
      apCfgWriteBool(s_Debug,s_Decomp_ProfCallFr,iVar2);
      iVar2 = GetCBItemState(param_1,0x432);
      apCfgWriteBool(s_Debug,s_Decomp_FreezePVS,iVar2);
      iVar2 = GetCBItemState(param_1,0x42c);
      apCfgWriteBool(s_Debug,s_Decompose1,iVar2);
      iVar2 = GetCBItemState(param_1,0x42d);
      apCfgWriteBool(s_Debug,s_Decompose2,iVar2);
      iVar2 = GetCBItemState(param_1,0x42e);
      apCfgWriteBool(s_Debug,s_Decompose3,iVar2);
      iVar2 = GetCBItemState(param_1,0x42f);
      apCfgWriteBool(s_Debug,s_Decompose4,iVar2);
      iVar2 = GetCBItemState(param_1,0x449);
      apCfgWriteBool(s_Debug,s_ShowProfInfo,iVar2);
      return 0;
    }
    if (sVar1 == 0x445) {
      local_104[0] = '\0';
      GetDlgItemTextA(param_1,0x444,local_104,0x104);
      uVar10 = 4;
      pcVar9 = (char *)0x0;
      pcVar8 = s_Choose_Report_path;
      pcVar7 = s___txt;
      pcVar6 = s_Memory_report____txt_;
      pcVar3 = fnmGetPath(local_104);
      pcVar3 = wifOpenFile(param_1,pcVar3,pcVar6,pcVar7,pcVar8,pcVar9,uVar10);
      if (pcVar3 != (char *)0x0) {
        SetDlgItemTextA(param_1,0x444,pcVar3);
        return 0;
      }
    }
    else if (sVar1 == 0x447) {
      local_104[0] = '\0';
      GetDlgItemTextA(param_1,0x446,local_104,0x104);
      uVar10 = 4;
      pcVar9 = (char *)0x0;
      pcVar8 = s_Choose_List_path;
      pcVar7 = s___txt;
      pcVar6 = s_Instance_list____txt_;
      pcVar3 = fnmGetPath(local_104);
      pcVar3 = wifOpenFile(param_1,pcVar3,pcVar6,pcVar7,pcVar8,pcVar9,uVar10);
      if (pcVar3 != (char *)0x0) {
        SetDlgItemTextA(param_1,0x446,pcVar3);
        return 0;
      }
    }
    else if (sVar1 == 0x417) {
      GetDlgItemTextA(param_1,0x446,local_104,0x104);
      iVar2 = scnSCENE::GetNInst(gsScenePtr);
      apMsgBox(s_nInst___d,iVar2);
      for (paVar4 = scnSCENE::FindNextInst(gsScenePtr,(animINST *)0x0); paVar4 != (animINST *)0x0;
          paVar4 = scnSCENE::FindNextInst(gsScenePtr,paVar4)) {
      }
      ptVar5 = txmMANAGER::GetNext(txmManager,(txmTEXTURE *)0x0);
      if (ptVar5 != (txmTEXTURE *)0x0) {
        do {
          ptVar5 = txmMANAGER::GetNext(txmManager,ptVar5);
        } while (ptVar5 != (txmTEXTURE *)0x0);
        return 0;
      }
    }
    else if (sVar1 == 0x46f) {
      local_110 = GetDlgItemFloat(param_1,0x470);
      local_10c = GetDlgItemFloat(param_1,0x471);
      local_108 = GetDlgItemFloat(param_1,0x472);
      animINST::SetPos(*(animINST **)(plgsPlayer + 0xbc),(m3dV *)&local_110);
    }
  }
  return 0;
}




/* from: gs:gs_cfg.cpp
   addr: 00528340 */

int _gsCfgLog_WND(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  return (uint)(param_2 == 0x110);
}




/* from: gs:gs_cfg.cpp
   addr: 00528360
   addr: 00528360 */

void * __thiscall gsCFG_SYSTEM::_scalar_deleting_destructor_(gsCFG_SYSTEM *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

