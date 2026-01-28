
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: ap:ap_wind.cpp
   addr: 004A1490 */

char * __cdecl
wifOpenFile(HWND__ *param_1,char *param_2,char *param_3,char *param_4,char *param_5,char *param_6,
           ulong param_7)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  char *pcVar4;
  
  if (param_6 == (char *)0x0) {
    param_6 = s_;
  }
  pcVar4 = &DAT_006117a0;
  do {
    cVar1 = *param_6;
    param_6 = param_6 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar2 = 0;
  do {
    pcVar4 = s_ + iVar2;
    (&DAT_006118a0)[iVar2] = *pcVar4;
    iVar2 = iVar2 + 1;
  } while (*pcVar4 != '\0');
  _DAT_00611e30 = 0x4c;
  if (param_1 == (HWND__ *)0x0) {
    param_1 = _apHMainWindow;
  }
  _DAT_00611e38 = apHInstance;
  _DAT_00611e3c = param_3;
  _DAT_00611e5c = param_2;
  _DAT_00611e40 = 0;
  _DAT_00611e44 = 0;
  _DAT_00611e48 = 1;
  DAT_00611e4c = &DAT_006117a0;
  _DAT_00611e50 = 0x100;
  _DAT_00611e54 = &DAT_006118a0;
  _DAT_00611e58 = 0x400;
  _DAT_00611e60 = param_5;
  _DAT_00611e68 = 0;
  _DAT_00611e6a = 0;
  _DAT_00611e6c = param_4;
  _DAT_00611e70 = 0;
  _DAT_00611e64 = param_7;
  _DAT_00611e74 = 0;
  _DAT_00611e78 = 0;
  _DAT_00611e34 = param_1;
  ShowCursor(1);
  BVar3 = GetOpenFileNameA_4((LPOPENFILENAMEA)&DAT_00611e30);
  if (BVar3 == 0) {
    ShowCursor(0);
    return (char *)0x0;
  }
  ShowCursor(0);
  return DAT_00611e4c;
}




/* from: ap:ap_wind.cpp
   addr: 004A15B0 */

int __cdecl mbShowOk(char *param_1,...)

{
  int iVar1;
  char local_100 [256];
  
  vsprintf(local_100,param_1,&stack0x00000008);
  iVar1 = MessageBoxA(_apHMainWindow,local_100,(LPCSTR)&apTitle,0x40);
  return iVar1;
}




/* from: ap:ap_wind.cpp
   addr: 004A15F0 */

int __cdecl mbShowStop(char *param_1,...)

{
  int iVar1;
  char local_100 [256];
  
  vsprintf(local_100,param_1,&stack0x00000008);
  iVar1 = MessageBoxA(_apHMainWindow,local_100,(LPCSTR)&apTitle,0x10);
  return iVar1;
}




/* from: ap:ap_wind.cpp
   addr: 004A1630 */

int __cdecl mbShowYesNo(char *param_1,...)

{
  int iVar1;
  char local_100 [256];
  
  vsprintf(local_100,param_1,&stack0x00000008);
  iVar1 = MessageBoxA(_apHMainWindow,local_100,(LPCSTR)&apTitle,0x24);
  return iVar1;
}




/* from: ap:ap_wind.cpp
   addr: 004A1670 */

void __cdecl SetCBItemState(HWND__ *param_1,uint param_2,int param_3)

{
  SendDlgItemMessageA(param_1,param_2,0xf1,(uint)(param_3 != 0),0);
  return;
}




/* from: ap:ap_wind.cpp
   addr: 004A16A0 */

int __cdecl GetCBItemState(HWND__ *param_1,uint param_2)

{
  LRESULT LVar1;
  
  LVar1 = SendDlgItemMessageA(param_1,param_2,0xf0,0,0);
  return (uint)(LVar1 == 1);
}




/* from: ap:ap_wind.cpp
   addr: 004A16C0 */

void __cdecl SetDlgItemFloat(HWND__ *param_1,uint param_2,float param_3)

{
  char local_100 [256];
  
  sprintf(local_100,s__f,(double)param_3);
  SetDlgItemTextA(param_1,param_2,local_100);
  return;
}




/* from: ap:ap_wind.cpp
   addr: 004A1710 */

float __cdecl GetDlgItemFloat(HWND__ *param_1,uint param_2)

{
  double dVar1;
  CHAR local_100 [256];
  
  GetDlgItemTextA(param_1,param_2,local_100,0x20);
  dVar1 = atof(local_100);
  return (float)dVar1;
}




/* from: ap:ap_wind.cpp
   addr: 004A1740 */

void __fastcall TabControl_AddPage(HWND__ *param_1,int param_2,int param_3,char *param_4)

{
  char cVar1;
  HWND hWnd;
  int iVar2;
  uint uVar3;
  char **ppcVar4;
  UINT Msg;
  char *local_1c [4];
  int local_c;
  
  ppcVar4 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  uVar3 = 0xffffffff;
  local_1c[3] = param_4;
  local_1c[0] = (char *)0x1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  local_c = ~uVar3 - 1;
  ppcVar4 = local_1c;
  Msg = 0x1307;
  hWnd = GetDlgItem(param_1,param_2);
  SendMessageA(hWnd,Msg,param_3,(LPARAM)ppcVar4);
  return;
}




/* from: ap:ap_wind.cpp
   addr: 004A17A0 */

int __fastcall ListView_AddColumn(HWND__ *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  uint uVar1;
  HWND hWnd;
  LRESULT LVar2;
  int iVar3;
  uint *puVar4;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  tagRECT local_30;
  uint local_20 [3];
  char *local_14;
  LRESULT local_c;
  int local_8;
  
  puVar4 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_20[0] = 0xf;
  local_20[1] = 0;
  local_c = param_2;
  if (param_2 == -1) {
    lParam = 0;
    wParam = 0;
    Msg = 0x1200;
    hWnd = (HWND)SendMessageA(param_1,0x101f,0,0);
    local_c = SendMessageA(hWnd,Msg,wParam,lParam);
  }
  local_14 = param_3;
  if (param_4 < 0) {
    GetClientRect(param_1,&local_30);
    iVar3 = (int)((ulonglong)((longlong)(local_30.right * param_4) * -0x51eb851f) >> 0x20);
    local_20[2] = (iVar3 >> 5) - (iVar3 >> 0x1f);
  }
  else {
    local_20[2] = param_4;
  }
  uVar1 = local_20[1] | 0x1000;
  if (param_5 != -1) {
    local_8 = param_5;
    local_20[0] = local_20[0] | 0x10;
    uVar1 = local_20[1] | 0x9800;
  }
  local_20[1] = uVar1;
  LVar2 = SendMessageA(param_1,0x101b,param_2,(LPARAM)local_20);
  return LVar2;
}




/* from: ap:ap_wind.cpp
   addr: 004A1870 */

void __fastcall ListView_GetMenuPos(HWND__ *param_1,tagPOINT *param_2)

{
  WPARAM WVar1;
  LRESULT LVar2;
  WPARAM wParam;
  tagRECT local_10;
  
  WVar1 = SendMessageA(param_1,0x1004,0,0);
  wParam = 0;
  if (0 < (int)WVar1) {
    do {
      LVar2 = SendMessageA(param_1,0x102c,wParam,2);
      if (LVar2 != 0) break;
      wParam = wParam + 1;
    } while ((int)wParam < (int)WVar1);
  }
  if (wParam != WVar1) {
    local_10.left = 2;
    LVar2 = SendMessageA(param_1,0x100e,wParam,(LPARAM)&local_10);
    if (LVar2 != 0) {
      MapWindowPoints(param_1,(HWND)0x0,(LPPOINT)&local_10,2);
      param_2->x = local_10.left;
      param_2->y = local_10.bottom;
      return;
    }
  }
  GetWindowRect(param_1,&local_10);
  param_2->x = local_10.left;
  param_2->y = local_10.top;
  return;
}




/* from: ap:ap_wind.cpp
   addr: 004A1920 */

ulong __fastcall
ListView_AddItem(HWND__ *param_1,int param_2,int param_3,char *param_4,int param_5,ulong param_6)

{
  ulong uVar1;
  int iVar2;
  LRESULT *pLVar3;
  LRESULT local_28 [2];
  int local_20;
  char *local_14;
  int local_c;
  ulong local_8;
  
  pLVar3 = local_28;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pLVar3 = 0;
    pLVar3 = pLVar3 + 1;
  }
  local_28[1] = param_2;
  if (param_2 == -1) {
    local_28[1] = SendMessageA(param_1,0x1004,0,0);
  }
  local_28[0] = 0x806;
  local_20 = param_3;
  if (param_4 != (char *)0x0) {
    local_28[0] = 0x807;
    local_14 = param_4;
  }
  local_c = param_5;
  local_8 = param_6;
  uVar1 = SendMessageA(param_1,0x1007,0,(LPARAM)local_28);
  return uVar1;
}




/* from: ap:ap_wind.cpp
   addr: 004A19A0 */

int __fastcall ListView_GetSelected(HWND__ *param_1)

{
  LRESULT LVar1;
  LRESULT LVar2;
  WPARAM wParam;
  
  LVar1 = SendMessageA(param_1,0x1004,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      LVar2 = SendMessageA(param_1,0x102c,wParam,2);
      if (LVar2 != 0) {
        return wParam;
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  return -1;
}




/* from: ap:ap_wind.cpp
   addr: 004A19F0 */

ulong __fastcall ListView_GetSelectedData(HWND__ *param_1)

{
  LRESULT LVar1;
  LRESULT LVar2;
  int iVar3;
  WPARAM *pWVar4;
  WPARAM local_28 [8];
  ulong local_8;
  
  LVar1 = SendMessageA(param_1,0x1004,0,0);
  local_28[1] = 0;
  if (0 < LVar1) {
    do {
      LVar2 = SendMessageA(param_1,0x102c,local_28[1],1);
      if (LVar2 != 0) {
        pWVar4 = local_28;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pWVar4 = 0;
          pWVar4 = pWVar4 + 1;
        }
        local_28[0] = 4;
        LVar1 = SendMessageA(param_1,0x1005,0,(LPARAM)local_28);
        if (LVar1 != 0) {
          return local_8;
        }
        return 0xffffffff;
      }
      local_28[1] = local_28[1] + 1;
    } while ((int)local_28[1] < LVar1);
  }
  return 0;
}

