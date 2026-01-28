
/* from: wr_cutscene.cpp
   addr: 00498460 */

void __thiscall wrCUTSCENE::Update(wrCUTSCENE *this)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  if (g_bContinue != 0) {
    puVar4 = local_8;
    puVar3 = local_4;
    puVar2 = local_c;
    iVar1 = (**(code **)(*IMediaEvent + 0x20))(IMediaEvent,puVar2,puVar3,puVar4,0);
    if (iVar1 != -0x7fffbffc) {
      (**(code **)(*IMediaEvent + 0x30))(IMediaEvent,puVar2,puVar4,puVar3);
      if (puVar2 == (undefined1 *)0x1) {
        (**(code **)(*(int *)this + 8))();
      }
    }
  }
  return;
}




/* from: wr_cutscene.cpp
   addr: 004984D0 */

void __thiscall wrCUTSCENE::Play(wrCUTSCENE *this,int param_1)

{
  char cVar1;
  int iVar2;
  HRESULT HVar3;
  char *pcVar4;
  char acStack_100 [256];
  
  if (IGraphBuilder != (int *)0x0) {
    (**(code **)(*IGraphBuilder + 8))(IGraphBuilder);
  }
  IGraphBuilder = (int *)0x0;
  if (IMediaControl != (int *)0x0) {
    (**(code **)(*IMediaControl + 8))(IMediaControl);
  }
  IMediaControl = (int *)0x0;
  if (IVideoWindow != (int *)0x0) {
    (**(code **)(*IVideoWindow + 8))(IVideoWindow);
  }
  IVideoWindow = (int *)0x0;
  if (IMediaEvent != (int *)0x0) {
    (**(code **)(*IMediaEvent + 8))(IMediaEvent);
  }
  IMediaEvent = (int *)0x0;
  if (_g_bEnable___C__PROJECTS_WillRock_Sources_wr_cutscene_cpp324185239__3HA == 0) {
    IMediaEvent = (int *)0x0;
    return;
  }
  if (param_1 == 0) {
    iVar2 = _apCfgReadString((void **)0x0,s_Movies,s_UbiSoftLogo,acStack_100,0x100);
    if (iVar2 != 0) goto LAB_004985c5;
    do {
      cVar1 = s____movies_ubilogo_mpg[iVar2];
      acStack_100[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    pcVar4 = s_UbiSoftLogo;
  }
  else {
    if (param_1 != 1) {
      IMediaEvent = (int *)0x0;
      return;
    }
    iVar2 = _apCfgReadString((void **)0x0,s_Movies,s_Saber3dLogo,acStack_100,0x100);
    if (iVar2 != 0) goto LAB_004985c5;
    do {
      cVar1 = s____movies_saber3d_mpg[iVar2];
      acStack_100[iVar2] = cVar1;
      iVar2 = iVar2 + 1;
    } while (cVar1 != '\0');
    pcVar4 = s_Saber3dLogo;
  }
  apCfgWriteString(s_Movies,pcVar4,acStack_100);
LAB_004985c5:
  HVar3 = CoCreateInstance((IID *)&_CLSID_FilterGraph,(LPUNKNOWN)0x0,3,(IID *)&_IID_IGraphBuilder,
                           &IGraphBuilder);
  if ((((HVar3 < 0) ||
       (HVar3 = (**(code **)*IGraphBuilder)(IGraphBuilder,&_IID_IMediaControl,&IMediaControl),
       HVar3 < 0)) ||
      (HVar3 = (**(code **)*IGraphBuilder)(IGraphBuilder,&_IID_IVideoWindow,&IVideoWindow),
      HVar3 < 0)) ||
     (HVar3 = (**(code **)*IGraphBuilder)(IGraphBuilder,&_IID_IMediaEventEx,&IMediaEvent), HVar3 < 0
     )) {
    if (IGraphBuilder != (int *)0x0) {
      (**(code **)(*IGraphBuilder + 8))(IGraphBuilder);
    }
    IGraphBuilder = (int *)0x0;
    if (IMediaControl != (int *)0x0) {
      (**(code **)(*IMediaControl + 8))(IMediaControl);
    }
    IMediaControl = (int *)0x0;
    if (IVideoWindow != (int *)0x0) {
      (**(code **)(*IVideoWindow + 8))(IVideoWindow);
    }
    IVideoWindow = (int *)0x0;
    if (IMediaEvent != (int *)0x0) {
      (**(code **)(*IMediaEvent + 8))(IMediaEvent);
    }
    IMediaEvent = (int *)0x0;
    if (HVar3 < 0) {
      CoUninitialize();
      return;
    }
  }
  PlayMedia();
  return;
}




/* from: wr_cutscene.cpp
   addr: 004986C0 */

void __thiscall wrCUTSCENE::Abort(wrCUTSCENE *this)

{
  g_bContinue = 0;
  if (IMediaControl != (int *)0x0) {
    (**(code **)(*IMediaControl + 0x24))(IMediaControl);
  }
  if (IGraphBuilder != (int *)0x0) {
    (**(code **)(*IGraphBuilder + 8))(IGraphBuilder);
  }
  IGraphBuilder = (int *)0x0;
  if (IMediaControl != (int *)0x0) {
    (**(code **)(*IMediaControl + 8))(IMediaControl);
  }
  IMediaControl = (int *)0x0;
  if (IVideoWindow != (int *)0x0) {
    (**(code **)(*IVideoWindow + 8))(IVideoWindow);
  }
  IVideoWindow = (int *)0x0;
  if (IMediaEvent != (int *)0x0) {
    (**(code **)(*IMediaEvent + 8))(IMediaEvent);
  }
  IMediaEvent = (int *)0x0;
  gsAppState = gsAppState & 0xff7fffff;
  return;
}




/* from: wr_cutscene.cpp
   addr: 00498760 */

void __thiscall
wrCUTSCENE::NotifyMsgHandler(wrCUTSCENE *this,void *param_1,uint param_2,int param_3,int param_4)

{
  if (IVideoWindow != (int *)0x0) {
    (**(code **)(*IVideoWindow + 0x98))(IVideoWindow,param_1,param_2,param_3,param_4);
  }
  return;
}


/* from: wr_cutscene.cpp
   addr: 00498230
   source dir: "C:\PROJECTS\WillRock\Sources\wr_cutscene.cpp" */

int __fastcall PlayMedia(LPCSTR param_1)

{
  HWND pHVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 *puVar5;
  int *piStack_248;
  int iVar6;
  WCHAR local_208 [260];
  
  if (param_1 == (LPCSTR)0x0) {
    return -0x7fffbffd;
  }
  piStack_248 = (int *)0x498261;
  MultiByteToWideChar(0,0,param_1,-1,local_208,0x104);
  iVar2 = (**(code **)(*IGraphBuilder + 0x34))();
  if (-1 < iVar2) {
    (**(code **)(*IVideoWindow + 0x28))();
    iVar6 = 0x40000000;
    piStack_248 = IVideoWindow;
    (**(code **)(*IVideoWindow + 0x24))();
    pHVar1 = _apHMainWindow;
    piVar3 = IVideoWindow;
    (**(code **)(*IVideoWindow + 0x74))();
    GetClientRect(_apHMainWindow,(LPRECT)&stack0xfffffdbc);
    puVar5 = &stack0xfffffdcc;
    piVar4 = IVideoWindow;
    (**(code **)(*IVideoWindow + 0xa4))(IVideoWindow,puVar5,&piStack_248);
    iVar2 = 0x1e0;
    if (((int)piStack_248 - (int)piVar3 < 0x280) || (iVar6 - (int)pHVar1 < 0x1e0)) {
      iVar2 = 0;
      piVar3 = IVideoWindow;
      (**(code **)(*IVideoWindow + 0x54))(IVideoWindow,0,piVar4,puVar5,0x1e0);
      (**(code **)(*IVideoWindow + 100))(IVideoWindow,0);
      (**(code **)(*IVideoWindow + 0x5c))(IVideoWindow,(int)puVar5 - iVar2);
      (**(code **)(*IVideoWindow + 0x6c))(IVideoWindow,(int)piVar4 - (int)piVar3);
    }
    else {
      (**(code **)(*IVideoWindow + 0x54))
                (IVideoWindow,(((int)piStack_248 - (int)piVar3) + -0x280) / 2);
      (**(code **)(*IVideoWindow + 100))(IVideoWindow,((int)pHVar1 + (-(int)piVar4 - iVar2)) / 2);
    }
    (**(code **)(*IVideoWindow + 0x94))(IVideoWindow,0);
    SetForegroundWindow(_apHMainWindow);
    iVar2 = (**(code **)(*IMediaControl + 0x20))(IMediaControl);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*IMediaControl + 0x1c))();
      if (-1 < iVar2) {
        g_bContinue = 1;
        gsAppState = gsAppState | 0x800000;
        return iVar2;
      }
    }
  }
  if (IGraphBuilder != (int *)0x0) {
    (**(code **)(*IGraphBuilder + 8))();
  }
  IGraphBuilder = (int *)0x0;
  if (IMediaControl != (int *)0x0) {
    (**(code **)(*IMediaControl + 8))();
  }
  IMediaControl = (int *)0x0;
  if (IVideoWindow != (int *)0x0) {
    (**(code **)(*IVideoWindow + 8))();
  }
  IVideoWindow = (int *)0x0;
  if (IMediaEvent != (int *)0x0) {
    (**(code **)(*IMediaEvent + 8))();
  }
  IMediaEvent = (int *)0x0;
  return iVar2;
}