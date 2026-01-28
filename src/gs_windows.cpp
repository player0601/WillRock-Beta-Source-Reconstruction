
/* from: gs_windows.cpp
   addr: 00497180 */

void __fastcall
_gsGetCurTime(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  if (param_1 != (int *)0x0) {
    *param_1 = (uint)local_10.wYear;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = (uint)local_10.wMonth;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (uint)local_10.wDay;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = (uint)local_10.wHour;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = (uint)local_10.wMinute;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = (uint)local_10.wSecond;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_windows.cpp
   addr: 00497210 */

float __fastcall _gswinGetDblClickTime(void)

{
  UINT UVar1;
  
  UVar1 = GetDoubleClickTime();
  return (float)UVar1 * ___real_3a83126f;
}




/* WARNING: Removing unreachable block (ram,0x0049730c) */
/* WARNING: Removing unreachable block (ram,0x00497313) */
/* from: gs_windows.cpp
   addr: 00497240 */

int __fastcall _gsDetectDx9(void)

{
  HRESULT HVar1;
  int iVar2;
  int *unaff_EDI;
  int *piVar3;
  int *piVar4;
  ULONG *pUVar5;
  LPVOID local_2c [2];
  VARIANTARG VStack_24;
  undefined4 uStack_14;
  
  local_2c[0] = (int *)0x0;
  HVar1 = CoCreateInstance((IID *)&_CLSID_DxDiagProvider,(LPUNKNOWN)0x0,1,
                           (IID *)&_IID_IDxDiagProvider,local_2c);
  if (-1 < HVar1) {
    VStack_24.n1.decVal.Hi32 = 0x10;
    VStack_24.n1._8_4_ = 0x6f;
    VStack_24.n1._12_4_ = 0;
    pUVar5 = &VStack_24.n1.decVal.Hi32;
    uStack_14 = 0;
                    /* WARNING: Load size is inaccurate */
    piVar4 = (int *)local_2c[0];
    iVar2 = (**(code **)(*local_2c[0] + 0xc))();
    if (-1 < iVar2) {
      local_2c[0] = (int *)0x0;
      iVar2 = (**(code **)(*unaff_EDI + 0x10))(unaff_EDI,local_2c);
      if (-1 < iVar2) {
                    /* WARNING: Load size is inaccurate */
        piVar3 = (int *)local_2c[0];
        iVar2 = (**(code **)(*local_2c[0] + 0x14))(local_2c[0],u_DxDiag_SystemInfo,&stack0xffffffd0)
        ;
        if (-1 < iVar2) {
          VariantInit(&VStack_24);
          (**(code **)(*piVar4 + 0x20))(piVar4,&u_dwDirectXVersionMajo,&VStack_24);
          VariantClear((VARIANTARG *)&stack0xffffffd0);
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        (**(code **)(*pUVar5 + 8))(pUVar5);
      }
    }
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
  MessageBoxA(_apHMainWindow,s_DirectX_9_0_or_higher_is_require,s_Fatal_error,0x30);
  return 0;
}




/* from: gs_windows.cpp
   addr: 00497370 */

gsWIN_APP_SYSTEM * __thiscall
gsWIN_APP_SYSTEM::gsWIN_APP_SYSTEM(gsWIN_APP_SYSTEM *this,char *param_1,char *param_2,int param_3)

{
  gsAPP_SYSTEM::gsAPP_SYSTEM((gsAPP_SYSTEM *)this);
  *(undefined ***)this = &_vftable_;
  if (param_1 == (char *)0x0) {
    param_1 = s_SABER3D_WIN_CLASS_NAME;
  }
  strncpy((char *)(this + 4),param_1,0x40);
  this[0x43] = (gsWIN_APP_SYSTEM)0x0;
  if (param_2 == (char *)0x0) {
    param_2 = s_SABER3D_WIN_NAME;
  }
  strncpy((char *)(this + 0x44),param_2,0x40);
  this[0x83] = (gsWIN_APP_SYSTEM)0x0;
  *(int *)(this + 0x84) = param_3;
  return this;
}




/* from: gs_windows.cpp
   addr: 004973E0 */

int __thiscall gsWIN_APP_SYSTEM::Init(gsWIN_APP_SYSTEM *this)

{
  ATOM AVar1;
  HMENU hMenu;
  int iVar2;
  undefined4 *puVar3;
  INITCOMMONCONTROLSEX IStack_38;
  undefined1 auStack_30 [8];
  code *pcStack_28;
  int iStack_24;
  int iStack_20;
  HINSTANCE__ *pHStack_1c;
  HICON pHStack_18;
  HCURSOR pHStack_14;
  HBRUSH pHStack_10;
  LPCSTR pCStack_c;
  gsWIN_APP_SYSTEM *pgStack_8;
  HICON pHStack_4;
  
  InitCommonControls();
  IStack_38.dwSize = 8;
  IStack_38.dwICC = 0x800;
  InitCommonControlsEx(&IStack_38);
  puVar3 = (undefined4 *)auStack_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  auStack_30._0_4_ = 0x30;
  pHStack_4 = (HICON)0x0;
  auStack_30._4_4_ = 0x203;
  pcStack_28 = _gsWndProc;
  iStack_24 = 0;
  iStack_20 = 0;
  pHStack_1c = apHInstance;
  if (*(int *)(this + 0x84) < 0) {
    pHStack_18 = (HICON)0x0;
  }
  else {
    pHStack_18 = (HICON)LoadImageA(apHInstance,(LPCSTR)(uint)*(ushort *)(this + 0x84),1,0x20,0x20,0)
    ;
  }
  pHStack_14 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  pHStack_10 = (HBRUSH)GetStockObject(4);
  pCStack_c = (LPCSTR)0x0;
  pgStack_8 = this + 4;
  AVar1 = RegisterClassExA((WNDCLASSEXA *)auStack_30);
  if (AVar1 == 0) {
    AVar1 = RegisterClassA((WNDCLASSA *)(auStack_30 + 4));
    if (AVar1 == 0) {
      return 0;
    }
  }
  _apHMainWindow =
       CreateWindowExA(0,(LPCSTR)(this + 4),(LPCSTR)(this + 0x44),0x880000,0,0,0x280,0x1e0,(HWND)0x0
                       ,(HMENU)0x0,apHInstance,(LPVOID)0x0);
  if (_apHMainWindow == (HWND)0x0) {
    return 0;
  }
  ShowWindow(_apHMainWindow,5);
  UpdateWindow(_apHMainWindow);
  hMenu = GetSystemMenu(_apHMainWindow,0);
  iVar2 = 10;
  do {
    DeleteMenu(hMenu,0,0x400);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 1;
}




/* from: gs_windows.cpp
   addr: 00497550 */

void __thiscall gsWIN_APP_SYSTEM::Term(gsWIN_APP_SYSTEM *this)

{
  ShowWindow(_apHMainWindow,0);
  DestroyWindow(_apHMainWindow);
  UnregisterClassA((LPCSTR)(this + 4),apHInstance);
  return;
}




/* from: gs_windows.cpp
   addr: 00497590 */

int __thiscall gsWIN_APP_SYSTEM::IsAlreadyRunning(gsWIN_APP_SYSTEM *this)

{
  HWND hWnd;
  
  hWnd = FindWindowA((LPCSTR)(this + 4),(LPCSTR)0x0);
  if (hWnd != (HWND)0x0) {
    ShowWindow(hWnd,5);
    SetForegroundWindow(hWnd);
    return 1;
  }
  return 0;
}




/* from: gs_windows.cpp
   addr: 004975C0 */

void __thiscall gsWIN_APP_SYSTEM::ResizeWin(gsWIN_APP_SYSTEM *this)

{
  DWORD dwStyle;
  DWORD dwExStyle;
  int cy;
  int cx;
  UINT uFlags;
  int local_2c;
  int local_28;
  int local_24;
  tagRECT local_20;
  tagRECT local_10;
  
  _apCfgReadBool((void **)0x0,s_Video,s_VIDEO_FullScr,&local_2c);
  _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeX,&local_28);
  _apCfgReadInt((void **)0x0,s_Video,s_VIDEO_SizeY,&local_24);
  if (local_2c == 0) {
    local_20.right = local_28;
    local_20.top = 0;
    local_20.left = 0;
    local_20.bottom = local_24;
    GetWindowRect(_apHMainWindow,&local_10);
    dwStyle = GetWindowLongA(_apHMainWindow,-0x10);
    dwExStyle = GetWindowLongA(_apHMainWindow,-0x14);
    AdjustWindowRectEx(&local_20,dwStyle,0,dwExStyle);
    MoveWindow(_apHMainWindow,local_10.left,local_10.top,local_20.right - local_20.left,
               local_20.bottom - local_20.top,1);
    return;
  }
  uFlags = 0x40;
  cy = GetSystemMetrics(1);
  cx = GetSystemMetrics(0);
  SetWindowPos(_apHMainWindow,(HWND)0x0,0,0,cx,cy,uFlags);
  return;
}




/* from: gs_windows.cpp
   addr: 004976D0 */

void __thiscall gsWIN_APP_SYSTEM::ProcessActDeact(gsWIN_APP_SYSTEM *this)

{
  int iVar1;
  gsWIN_APP_SYSTEM *local_4;
  
  if ((gsAppState & 0x200000U) != 0) {
    return;
  }
  if ((gsAppState & 0x98U) != 0) {
    return;
  }
  local_4 = this;
  iVar1 = gsVideoIsChanging();
  if (iVar1 != 0) {
    return;
  }
  if (((gsAppState & 0x100000U) == 0) || ((gsAppState & 1U) != 0)) {
    if ((gsAppState & 0x100000U) == 0) {
      if ((gsAppState & 1U) == 0) goto LAB_00497805;
      gsAppState = gsAppState & 0xfffffffeU | 0x200000;
      iVar1 = _apCfgReadBool((void **)0x0,s_Debug,s_SwitchWindow,(int *)&local_4);
      if ((iVar1 != 0) && (local_4 != (gsWIN_APP_SYSTEM *)0x0)) {
        gsVideoTermHW();
        gsSND_SYSTEM::Mute(gsSysSound,1,1);
        ShowWindow(_apHMainWindow,6);
      }
    }
    else {
      if (((gsAppState & 1U) == 0) || ((gsAppState & 0x4000000U) == 0)) goto LAB_00497805;
      gsAppState = gsAppState | 0x200000;
      gsVideoTermHW();
      gsVideoSetHWMode(0);
    }
  }
  else {
    gsAppState = gsAppState | 0x200000;
    iVar1 = _apCfgReadBool((void **)0x0,s_Debug,s_SwitchWindow,(int *)&local_4);
    if ((iVar1 == 0) || (local_4 == (gsWIN_APP_SYSTEM *)0x0)) {
LAB_00497766:
      gsAppState = gsAppState & 0xfbdfffffU | 1;
      return;
    }
    ShowWindow(_apHMainWindow,9);
    iVar1 = gsVideoSetHWMode(0);
    gsSND_SYSTEM::Mute(gsSysSound,0,1);
    if (iVar1 != 0) goto LAB_00497766;
  }
  gsAppState = gsAppState & 0xffdfffff;
LAB_00497805:
  gsAppState = gsAppState & 0xfbffffff;
  return;
}




/* from: gs_windows.cpp
   addr: 00497820 */

void __thiscall gsWIN_APP_SYSTEM::MainLoop(gsWIN_APP_SYSTEM *this)

{
  int iVar1;
  uint uVar2;
  int local_24;
  gsWIN_APP_SYSTEM *local_20;
  tagMSG local_1c;
  
  uVar2 = gsAppState & 8;
  local_20 = this;
  while (uVar2 == 0) {
    if (((gsSysMP == (gsMP_SYSTEM *)0x0) || (*(int *)(gsSysMP + 0x28) == 1)) ||
       ((iVar1 = _apCfgReadBool((void **)&DAT_0060efb8,s_Debug,s_SwitchWindow,&local_24), iVar1 != 0
        && (local_24 == 0)))) {
      uVar2 = gsAppState | 0x1000000;
    }
    else {
      uVar2 = gsAppState & 0xfeffffff;
    }
    gsAppState = uVar2 | 0x20;
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
    while (iVar1 != 0) {
      TranslateMessage(&local_1c);
      DispatchMessageA(&local_1c);
      iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
    }
    (**(code **)(*(int *)local_20 + 0x28))();
    if (((gsAppState & 0x1000000U) != 0) && ((gsAppState & 1U) == 0)) {
      WaitMessage();
    }
    uVar2 = gsAppState & 0xffffffdf;
    if (((gsAppState & 0x800000U) == 0) || (gspCutscene == (gsCUTSCENE *)0x0)) {
      if (((((gsAppState & 1U) == 0) ||
           ((((gsAppState & 0x100000U) == 0 || ((gsAppState & 0x18U) != 0)) ||
            (gsAppState = uVar2, iVar1 = (**(code **)(*(int *)gsAppSystem + 0x2c))(),
            uVar2 = gsAppState, iVar1 == 0)))) &&
          ((gsAppState = uVar2, (gsAppState & 0x1000000U) == 0 ||
           (((gsAppState & 1U) != 0 && ((gsAppState & 0x100000U) != 0)))))) &&
         (((gsAppState & 0xa00100U) == 0 &&
          (((gsAppState & 0x18U) == 0 && (gsMsgCallFrame(), gsSysInput != (gsINP_SYSTEM *)0x0))))))
      {
        gsINP_SYSTEM::Acquire(gsSysInput);
      }
    }
    else {
      gsAppState = uVar2;
      (**(code **)(*(int *)gspCutscene + 0x10))();
    }
    uVar2 = gsAppState & 8;
  }
  return;
}




/* from: gs_windows.cpp
   addr: 00497990 */

void __thiscall gsWIN_APP_SYSTEM::ActivateApp(gsWIN_APP_SYSTEM *this)

{
  SetFocus(_apHMainWindow);
  SendMessageA(_apHMainWindow,0x401,1,0);
  return;
}




/* from: gs_windows.cpp
   addr: 004979C0 */

long _gsWndProc(HWND__ *param_1,uint param_2,uint param_3,long param_4)

{
  SHORT SVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  LRESULT LVar5;
  undefined4 uStack_c;
  uint uStack_8;
  
  if (gspCutscene != (gsCUTSCENE *)0x0) {
    (**(code **)(*(int *)gspCutscene + 0x14))(param_1,param_2,param_3,param_4);
  }
  if (0x102 < param_2) {
    if (param_2 < 0x117) {
      if (param_2 == 0x116) {
        return 0;
      }
      if (param_2 == 0x104) {
        if (((-1 < (char)((uint)gsAppState >> 8)) && (param_3 == 0xd)) &&
           (SVar1 = GetAsyncKeyState(0x12), SVar1 < 0)) {
          gsVideoSetHWMode(1);
        }
        return 0;
      }
      if (param_2 == 0x105) {
        return 0;
      }
      if (param_2 == 0x112) {
        uVar3 = param_3 & 0xfff0;
        if (uVar3 < 0xf131) {
          if (uVar3 == 0xf130) {
            return 0;
          }
          if (0xf060 < uVar3) {
            if (uVar3 == 0xf090) {
              return 0;
            }
            if (uVar3 == 0xf100) {
              return 0;
            }
            LVar5 = DefWindowProcA(param_1,0x112,param_3,param_4);
            return LVar5;
          }
          if (uVar3 == 0xf060) {
            return 0;
          }
          if (uVar3 == 0xf000) {
            return 0;
          }
          if (uVar3 == 0xf010) {
            return 0;
          }
          LVar5 = DefWindowProcA(param_1,0x112,param_3,param_4);
          return LVar5;
        }
        switch(uVar3) {
        case 0xf140:
        case 0xf150:
        case 0xf160:
        case 0xf170:
        case 0xf180:
          goto switchD_00497a18_caseD_50;
        }
      }
    }
    else if ((param_2 == 0x201) || (param_2 == 0x204)) {
      if ((gspCutscene != (gsCUTSCENE *)0x0) &&
         (iVar4 = (*(code *)**(undefined4 **)gspCutscene)(), iVar4 != 0)) {
        (**(code **)(*(int *)gspCutscene + 8))();
      }
    }
    else if (param_2 == 0x401) {
      return 0;
    }
    goto switchD_00497a18_caseD_7;
  }
  if (param_2 == 0x102) {
    uStack_c = 5;
    uStack_8 = param_3;
    if (uiSystem != (uiUI_SYSTEM *)0x0) {
      (**(code **)(*(int *)uiSystem + 0x28))(&uStack_c);
    }
switchD_00497a18_caseD_50:
    return 0;
  }
  switch(param_2) {
  case 6:
    if (gsSysInput != (gsINP_SYSTEM *)0x0) {
      gsINP_SYSTEM::Acquire(gsSysInput);
      LVar5 = DefWindowProcA(param_1,param_2,param_3,param_4);
      return LVar5;
    }
  default:
switchD_00497a18_caseD_7:
    LVar5 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar5;
  case 0x10:
    gsMsgStopLoop();
    return 0;
  case 0x14:
    if (gsSysRender == (gsRENDER_SYSTEM *)0x0) {
switchD_00497c89_caseD_4:
      return 1;
    }
    (**(code **)(*(int *)gsSysRender + 0x24))(0);
    return 1;
  case 0x1c:
    if ((short)param_3 == 0) {
      uVar2 = gsAppState & 0xffefffffU | 0x4000000;
      uVar3 = gsAppState & 0x800000;
      gsAppState = uVar2;
      if ((uVar3 != 0) && (gspCutscene != (gsCUTSCENE *)0x0)) {
        (**(code **)(*(int *)gspCutscene + 8))();
        (**(code **)(*(int *)gspCutscene + 0xc))(0);
      }
    }
    else {
      gsAppState = gsAppState | 0x100000;
      if (gsSysInput != (gsINP_SYSTEM *)0x0) {
        gsINP_SYSTEM::Acquire(gsSysInput);
      }
    }
    PostMessageA(param_1,0x401,param_3 & 0xffff,param_4);
    return 0;
  case 0x50:
    goto switchD_00497a18_caseD_50;
  case 0x84:
    LVar5 = DefWindowProcA(param_1,param_2,param_3,param_4);
    switch(LVar5) {
    case 4:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
      goto switchD_00497c89_caseD_4;
    default:
      return LVar5;
    }
  case 0x100:
    if ((gspCutscene != (gsCUTSCENE *)0x0) &&
       (iVar4 = (*(code *)**(undefined4 **)gspCutscene)(), iVar4 != 0)) {
      if ((param_3 == 0x1b) || (param_3 == 0x20)) {
        (**(code **)(*(int *)gspCutscene + 8))();
      }
      return 0;
    }
    if ((gsAppState & 0x100U) != 0) {
      gsAppState = gsAppState & 0xfffffeff;
      (**(code **)(*(int *)gsSysRender + 0x28))();
      gsINP_SYSTEM::FlushBuffers(gsSysInput);
      return 0;
    }
    if ((((uiSystem == (uiUI_SYSTEM *)0x0) ||
         ((*(int *)(uiSystem + 4) != 1 && (*(int *)(uiSystem + 4) != 2)))) &&
        (((gsAppState & 0x2000U) == 0 || (SVar1 = GetAsyncKeyState(0x10), SVar1 != 0)))) &&
       ((param_3 == 0x1b &&
        ((((gsSysCinema == (cinSYSTEM *)0x0 || (((byte)gsSysCinema[0x80] & 1) == 0)) &&
          (-1 < (char)((uint)gsAppState >> 8))) && (iVar4 = gsVideoShowOptions(), iVar4 == 0)))))) {
      gsMsgStopLoop();
    }
    uStack_c = 3;
    switch(param_3) {
    case 8:
switchD_00497c0a_caseD_8:
      uStack_8 = 0;
      break;
    case 9:
      SVar1 = GetAsyncKeyState(0x10);
      uStack_8 = (SVar1 != 0) + 1;
      break;
    default:
switchD_00497c0a_caseD_a:
      uStack_8 = -1;
      break;
    case 0xd:
switchD_00497c0a_caseD_d:
      uStack_8 = 9;
      break;
    case 0x1b:
switchD_00497c0a_caseD_1b:
      uStack_8 = 7;
      break;
    case 0x20:
switchD_00497c0a_caseD_20:
      uStack_8 = 8;
      break;
    case 0x25:
switchD_00497c0a_caseD_25:
      uStack_8 = 3;
      break;
    case 0x26:
switchD_00497c0a_caseD_26:
      uStack_8 = 5;
      break;
    case 0x27:
switchD_00497c0a_caseD_27:
      uStack_8 = 4;
      break;
    case 0x28:
switchD_00497c0a_caseD_28:
      uStack_8 = 6;
    }
LAB_00497c26:
    if (uStack_8 != -1) {
      (**(code **)(*(int *)uiSystem + 0x28))(&uStack_c);
    }
    return 0;
  case 0x101:
    uStack_c = 4;
    switch(param_3) {
    case 8:
      goto switchD_00497c0a_caseD_8;
    case 9:
      SVar1 = GetAsyncKeyState(0x10);
      uStack_8 = (SVar1 != 0) + 1;
      goto LAB_00497c26;
    default:
      goto switchD_00497c0a_caseD_a;
    case 0xd:
      goto switchD_00497c0a_caseD_d;
    case 0x1b:
      goto switchD_00497c0a_caseD_1b;
    case 0x20:
      goto switchD_00497c0a_caseD_20;
    case 0x25:
      goto switchD_00497c0a_caseD_25;
    case 0x26:
      goto switchD_00497c0a_caseD_26;
    case 0x27:
      goto switchD_00497c0a_caseD_27;
    case 0x28:
      goto switchD_00497c0a_caseD_28;
    }
  }
}

