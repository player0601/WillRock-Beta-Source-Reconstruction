
/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B020 */

void ExtAlloc_Malloc_4(uint param_1)

{
  apMalloc(param_1);
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B030 */

void ExtAlloc_Realloc_8(void *param_1,uint param_2)

{
  apRealloc(param_1,param_2);
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B060 */

int __thiscall netUBI_DOWNLOADER::StartDownload(netUBI_DOWNLOADER *this,char *param_1,char *param_2)

{
  BYTE BVar1;
  void *pvVar2;
  LSTATUS LVar3;
  int iVar4;
  undefined4 uVar5;
  DWORD local_30c;
  HKEY local_308;
  DWORD DStack_304;
  BYTE aBStack_300 [256];
  char acStack_200 [512];
  
  if (isGsIniDownloaded == 0) {
    pvVar2 = HttpAlgorithmInterface::GSHttpInitialize_0();
    *(void **)this = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    local_30c = 1;
    RegOpenKeyExA((HKEY)0x80000002,s_SOFTWARE_Ubi_Soft_Game_Service,0,1,&local_308);
    DStack_304 = 0x100;
    local_30c = 1;
    LVar3 = RegQueryValueExA(local_308,s_ConnectURL,(LPDWORD)0x0,&local_30c,aBStack_300,&DStack_304)
    ;
    if (LVar3 != 0) {
      iVar4 = 0;
      do {
        BVar1 = s_http___gsconnect_ubisoft_com_gsi[iVar4];
        aBStack_300[iVar4] = BVar1;
        iVar4 = iVar4 + 1;
      } while (BVar1 != '\0');
    }
    RegCloseKey(local_308);
    sprintf(acStack_200,(char *)aBStack_300,param_1,param_2);
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = 0;
    uVar5 = GSHttpSave_24(*(undefined4 *)this,acStack_200,s___gs_ini,0,UbiHttpCallback,this);
    *(undefined4 *)(this + 4) = uVar5;
  }
  return 1;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B160 */

void netUBI_DOWNLOADER::UbiHttpCallback
               (uint param_1,GSHTTPResult param_2,char *param_3,uint param_4,uchar param_5,
               void *param_6)

{
  *(GSHTTPResult *)((int)param_6 + 8) = param_2;
  *(undefined4 *)((int)param_6 + 0xc) = 1;
  if (param_2 == 0) {
    isGsIniDownloaded = 1;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B180 */

netUBI_SERVERREG * __thiscall
netUBI_SERVERREG::netUBI_SERVERREG(netUBI_SERVERREG *this,netDRV_DPUBI *param_1,int param_2)

{
  CRegisterServer::CRegisterServer((CRegisterServer *)this);
  *(netDRV_DPUBI **)(this + 0x130) = param_1;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x144) = 3;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  if (param_2 != 0) {
    *(undefined4 *)(this + 0x160) = 0;
    *(undefined4 *)(this + 0x15c) = 1;
    return this;
  }
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0xffffffff;
  return this;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B210
   addr: 0057B210 */

void * __thiscall
netUBI_SERVERREG::_vector_deleting_destructor_(netUBI_SERVERREG *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  Shutdown(this);
  CRegisterServer::~CRegisterServer((CRegisterServer *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B240 */

void __thiscall netUBI_SERVERREG::Shutdown(netUBI_SERVERREG *this)

{
  int *piVar1;
  char *pcVar2;
  
  piVar1 = *(int **)(this + 0x138);
  *(undefined4 *)(this + 0x15c) = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      if (piVar1[1] != -1) {
        GSHttpCancelRequest_8(*piVar1,piVar1[1]);
        piVar1[1] = -1;
      }
      GSHttpUninitialize_4(*piVar1);
      piVar1[3] = 1;
      *piVar1 = 0;
    }
    piVar1 = *(int **)(this + 0x138);
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        if (piVar1[1] != -1) {
          GSHttpCancelRequest_8(*piVar1,piVar1[1]);
          piVar1[1] = -1;
        }
        GSHttpUninitialize_4(*piVar1);
        piVar1[3] = 1;
        *piVar1 = 0;
      }
      operator_delete(piVar1);
    }
    *(undefined4 *)(this + 0x138) = 0;
  }
  if (*(int *)(this + 0x168) != 0) {
    if (*(int *)(*(int *)(this + 0x168) + 0x124) != 0) {
      pcVar2 = (char *)(**(code **)(**(int **)(this + 0x130) + 0xcc))();
      CRegisterServer::RegServerSend_LobbyServerMemberLeave((CRegisterServer *)this,pcVar2);
    }
    if (*(int **)(this + 0x168) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x168) + 0x20))(1);
    }
    *(undefined4 *)(this + 0x168) = 0;
  }
  if (*(int *)(this + 0x140) != 0) {
    CRegisterServer::RegServerSend_LobbyServerClose((CRegisterServer *)this);
    CRegisterServer::RegServer_Engine((CRegisterServer *)this);
    *(undefined4 *)(this + 0x140) = 0;
  }
  if (*(int *)(this + 0x13c) != 0) {
    CRegisterServer::RegServer_Engine((CRegisterServer *)this);
    CRegisterServer::RegServerSend_RouterDisconnect((CRegisterServer *)this);
    *(undefined4 *)(this + 0x13c) = 0;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B360 */

int __thiscall netUBI_SERVERREG::IsError(netUBI_SERVERREG *this)

{
  if ((*(int *)(this + 0x144) == 3) && (*(int *)(this + 0x148) == 0)) {
    return 0;
  }
  return 1;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B380 */

void __thiscall netUBI_SERVERREG::Think(netUBI_SERVERREG *this)

{
  int *piVar1;
  uchar uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  void *unaff_EBX;
  int unaff_EBP;
  int iVar7;
  char *pcVar8;
  void *pvVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  int *piStack_8;
  undefined1 auStack_4 [4];
  
  CRegisterServer::RegServer_Engine((CRegisterServer *)this);
  if ((*(int **)(this + 0x138) != (int *)0x0) && (iVar6 = **(int **)(this + 0x138), iVar6 != 0)) {
    GSHttpEngine_8(iVar6,5000);
  }
  if (*(clMSClientClass **)(this + 0x168) != (clMSClientClass *)0x0) {
    clMSClientClass::Engine(*(clMSClientClass **)(this + 0x168),500,800);
    piVar1 = *(int **)(this + 0x168);
    if ((piVar1[0x43] != 3) || (piVar1[0x44] != 0)) {
      *(int *)(this + 0x144) = piVar1[0x43];
      *(int *)(this + 0x148) = piVar1[0x44];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x20))(1);
      }
      *(undefined4 *)(this + 0x168) = 0;
    }
  }
  if ((*(int *)(this + 0x144) == 3) && (*(int *)(this + 0x148) == 0)) {
    if ((*(int *)(this + 0x134) == 0xc) &&
       ((*(int *)(this + 0x168) == 0 || (*(int *)(*(int *)(this + 0x168) + 0x120) == 0)))) {
      *(undefined4 *)(this + 0x144) = 3;
      *(undefined4 *)(this + 0x148) = 3;
    }
    switch(*(int *)(this + 0x134)) {
    case 0:
      puVar4 = (undefined4 *)operator_new(0x10);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0xffffffff;
        puVar4[2] = 0;
        puVar4[3] = 1;
      }
      piVar1 = *(int **)(this + 0x130);
      *(undefined4 **)(this + 0x138) = puVar4;
      piStack_8 = piVar1;
      pcVar8 = (char *)(**(code **)(*piVar1 + 0xd4))();
      pcVar5 = (char *)(**(code **)(*piVar1 + 0xcc))();
      iVar6 = netUBI_DOWNLOADER::StartDownload(*(netUBI_DOWNLOADER **)(this + 0x138),pcVar5,pcVar8);
      if (iVar6 != 0) {
        *(undefined4 *)(this + 0x134) = 1;
        return;
      }
      *(undefined4 *)(this + 0x144) = 3;
      *(undefined4 *)(this + 0x148) = 1;
      return;
    case 1:
      piVar1 = *(int **)(this + 0x138);
      if (piVar1[3] != 0) {
        if (piVar1[2] == 0) {
          *(undefined4 *)(this + 0x134) = 2;
        }
        else {
          *(undefined4 *)(this + 0x144) = 2;
          *(int *)(this + 0x148) = piVar1[2];
          if (*piVar1 != 0) {
            if (piVar1[1] != -1) {
              GSHttpCancelRequest_8(*piVar1,piVar1[1]);
              piVar1[1] = -1;
            }
            GSHttpUninitialize_4(*piVar1);
            piVar1[3] = 1;
            *piVar1 = 0;
          }
        }
        if (*(netUBI_DOWNLOADER **)(this + 0x138) != (netUBI_DOWNLOADER *)0x0) {
          netUBI_DOWNLOADER::_scalar_deleting_destructor_(*(netUBI_DOWNLOADER **)(this + 0x138),1);
        }
        *(undefined4 *)(this + 0x138) = 0;
        return;
      }
      break;
    case 2:
      OnNextRouterAddress(this);
      return;
    case 4:
      if (*(int *)(*(int *)(this + 0x168) + 0x11c) != 0) {
        piVar1 = *(int **)(this + 0x130);
        piStack_8 = piVar1;
        pcVar8 = (char *)(**(code **)(*piVar1 + 0xd4))();
        pcVar5 = (char *)(**(code **)(*piVar1 + 0xd8))();
        uVar2 = clMSClientClass::JoinGameServer
                          (*(clMSClientClass **)(this + 0x168),*(int *)(this + 0x14c),
                           *(int *)(this + 0x150),s_,pcVar5,pcVar8);
        if (uVar2 == '\0') {
          *(undefined4 *)(this + 0x144) = 3;
          *(undefined4 *)(this + 0x148) = 8;
          return;
        }
        *(undefined4 *)(*(int *)(this + 0x168) + 0x118) = *(undefined4 *)(this + 0x150);
        *(undefined4 *)(this + 0x134) = 10;
        return;
      }
      break;
    case 9:
      if (*(int *)(this + 0x164) != 0) {
        *(undefined4 *)(this + 0x160) = 1;
        *(undefined4 *)(this + 0x134) = 4;
        return;
      }
      break;
    case 10:
      if (*(int *)(*(int *)(this + 0x168) + 0x120) != 0) {
        *(undefined4 *)(this + 0x158) = 0;
        if (*(int *)(this + 0x160) != -1) {
          *(undefined4 *)(this + 0x134) = 0xb;
          return;
        }
        *(undefined4 *)(this + 0x160) = 0;
        *(undefined4 *)(this + 0x134) = 0xc;
        return;
      }
      break;
    case 0xb:
      if (*(int *)(*(int *)(this + 0x168) + 300) != 0) {
        *(undefined4 *)(this + 0x160) = 1;
        *(undefined4 *)(this + 0x134) = 0xc;
        return;
      }
      break;
    case 0xc:
      if ((*(int *)(this + 0x154) == 0) && (*(int *)(this + 0x158) == 0)) {
        (**(code **)(**(int **)(this + 0x130) + 0xe8))(auStack_4,&piStack_8);
        piVar1 = *(int **)(this + 0x130);
        uVar3 = (**(code **)(*piVar1 + 0xe4))();
        iVar12 = 0;
        pvVar11 = (void *)0x0;
        iVar10 = 0;
        pvVar9 = (void *)0x0;
        pcVar8 = s_;
        iVar7 = 0;
        iVar6 = (**(code **)(*piVar1 + 0xe0))();
        uVar2 = CRegisterServer::RegServerSend_UpdateGroupSettings
                          ((CRegisterServer *)this,*(int *)(this + 0x150),'\x01','\x01','\0',iVar6,
                           iVar7,pcVar8,unaff_EBX,unaff_EBP,pvVar9,iVar10,pvVar11,iVar12,uVar3);
        if (uVar2 != '\0') {
          *(undefined4 *)(this + 0x154) = 1;
          *(undefined4 *)(this + 0x158) = 1;
        }
      }
    }
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B760 */

void * __thiscall
netUBI_DOWNLOADER::_scalar_deleting_destructor_(netUBI_DOWNLOADER *this,uint param_1)

{
  if (*(int *)this != 0) {
    if (*(int *)(this + 4) != -1) {
      GSHttpCancelRequest_8(*(int *)this,*(int *)(this + 4));
      *(undefined4 *)(this + 4) = 0xffffffff;
    }
    GSHttpUninitialize_4(*(undefined4 *)this);
    *(undefined4 *)(this + 0xc) = 1;
    *(undefined4 *)this = 0;
  }
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B7B0 */

char * __thiscall netUBI_SERVERREG::GetStatusString(netUBI_SERVERREG *this)

{
  switch(*(undefined4 *)(this + 0x134)) {
  case 0:
    return s_Starting_server;
  case 1:
    return s_Downloading_routers_list;
  case 2:
    return s_Trying_to_connect_to_router;
  case 3:
    return s_Login_to_router;
  case 4:
    return s_Waiting_local_client_to_start;
  case 5:
    return s_Requesting_lobby_list;
  case 6:
    return s_Registering_game_server;
  case 7:
    return s_Login_to_lobby;
  default:
    return s_Ready;
  case 9:
  case 0xb:
    return s_Starting_match;
  case 10:
    return s_Waiting_local_client_to_join;
  }
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057B840 */

void __thiscall netUBI_SERVERREG::OnNextRouterAddress(netUBI_SERVERREG *this)

{
  int *piVar1;
  uchar uVar2;
  UINT UVar3;
  UINT UVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  clMSClientClass *this_00;
  int iVar8;
  char local_c4 [64];
  char local_84 [132];
  
  if (*(int *)(this + 0x134) == 2) {
    iVar8 = 0;
    while( true ) {
      sprintf(local_c4,s_RouterIP_i,iVar8);
      GetPrivateProfileStringA(s_Servers,local_c4,s_,local_84,0x81,s___gs_ini);
      sprintf(local_c4,s_RouterLauncherPort_i,iVar8);
      UVar3 = GetPrivateProfileIntA(s_Servers,local_c4,0,s___gs_ini);
      sprintf(local_c4,s_RouterPort_i,iVar8);
      UVar4 = GetPrivateProfileIntA(s_Servers,local_c4,0,s___gs_ini);
      if (((local_84[0] == '\0') || (UVar3 == 0)) || (UVar4 == 0)) break;
      uVar2 = CRegisterServer::RegServerSend_RouterConnect((CRegisterServer *)this,local_84,UVar3);
      if (uVar2 != '\0') {
        piVar1 = *(int **)(this + 0x130);
        pcVar5 = (char *)(**(code **)(*piVar1 + 0xd8))();
        pcVar6 = (char *)(**(code **)(*piVar1 + 0xd0))();
        pcVar7 = (char *)(**(code **)(*piVar1 + 0xcc))();
        uVar2 = CRegisterServer::RegServerSend_LoginRouter
                          ((CRegisterServer *)this,pcVar7,pcVar6,pcVar5);
        if (uVar2 != '\0') {
          if (*(int **)(this + 0x168) != (int *)0x0) {
            (**(code **)(**(int **)(this + 0x168) + 0x20))(1);
          }
          this_00 = (clMSClientClass *)operator_new(0x138);
          if (this_00 == (clMSClientClass *)0x0) {
            this_00 = (clMSClientClass *)0x0;
          }
          else {
            clMSClientClass::clMSClientClass(this_00);
            *(undefined ***)this_00 = &netUBI_MINICLIENT::_vftable__for__clLoginCallbacks__;
            *(undefined ***)(this_00 + 4) = &netUBI_MINICLIENT::_vftable__for__clFriendsCallbacks__;
            *(undefined ***)(this_00 + 8) = &netUBI_MINICLIENT::_vftable__for__clSessionCallbacks__;
            *(undefined ***)(this_00 + 0xc) = &netUBI_MINICLIENT::_vftable__for__clLobbyCallbacks__;
            *(undefined4 *)(this_00 + 0x10c) = 3;
            *(undefined4 *)(this_00 + 0x110) = 0;
            *(undefined4 *)(this_00 + 0x11c) = 0;
            *(undefined4 *)(this_00 + 0x120) = 0;
            *(undefined4 *)(this_00 + 0x114) = 0;
            *(undefined4 *)(this_00 + 0x118) = 0;
            *(undefined4 *)(this_00 + 0x124) = 0;
            *(undefined4 *)(this_00 + 300) = 0;
            *(undefined4 *)(this_00 + 0x128) = 0xffffffff;
            *(undefined4 *)(this_00 + 0x130) = 0;
            *(undefined4 *)(this_00 + 0x134) = 0;
          }
          piVar1 = *(int **)(this + 0x130);
          *(clMSClientClass **)(this + 0x168) = this_00;
          pcVar5 = (char *)(**(code **)(*piVar1 + 0xd8))();
          pcVar6 = (char *)(**(code **)(*piVar1 + 0xd0))();
          pcVar7 = (char *)(**(code **)(*piVar1 + 0xcc))();
          uVar2 = clMSClientClass::Initialize
                            (*(clMSClientClass **)(this + 0x168),local_84,(ushort)UVar4,pcVar7,
                             pcVar6,pcVar5);
          if (uVar2 == '\0') {
            *(undefined4 *)(this + 0x144) = 3;
            *(undefined4 *)(this + 0x148) = 9;
            return;
          }
          *(undefined4 *)(this + 0x134) = 3;
          return;
        }
      }
      iVar8 = iVar8 + 1;
      if (0x62 < iVar8) {
        return;
      }
    }
    *(undefined4 *)(this + 0x144) = 3;
    *(undefined4 *)(this + 0x148) = 2;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BAC0 */

void __thiscall
netUBI_MINICLIENT::MatchStartedCB(netUBI_MINICLIENT *this,int param_1,int param_2,uint param_3)

{
  clMSClientClass::MatchStarted
            ((clMSClientClass *)this,*(int *)(this + 0x114),*(int *)(this + 0x118));
  *(undefined4 *)(this + 300) = 1;
  *(uint *)(this + 0x128) = param_3;
  *(undefined4 *)(this + 0x130) = 0;
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BB00 */

void __thiscall
netUBI_MINICLIENT::SubmitMatchCB(netUBI_MINICLIENT *this,uchar param_1,int param_2,uint param_3)

{
  if (param_1 == '&') {
    *(undefined4 *)(this + 0x130) = 1;
  }
  else {
    *(int *)(this + 0x134) = param_2;
  }
  clMSClientClass::UninitMatchResult((clMSClientClass *)this);
  clMSClientClass::MatchFinished
            ((clMSClientClass *)this,*(int *)(this + 0x114),*(int *)(this + 0x118));
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BB50 */

void __thiscall netUBI_MINICLIENT::InitFinishedCB(netUBI_MINICLIENT *this,int param_1,char *param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(this + 0x10c) = 0;
    *(int *)(this + 0x110) = param_1;
    return;
  }
  *(undefined4 *)(this + 0x11c) = 1;
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BB80 */

void __thiscall
netUBI_MINICLIENT::JoinFinishedCB
          (netUBI_MINICLIENT *this,int param_1,int param_2,void *param_3,int param_4,char *param_5,
          char *param_6,ushort param_7)

{
  *(int *)(this + 0x114) = param_1;
  clMSClientClass::GameServerConnected((clMSClientClass *)this,param_1,*(int *)(this + 0x118));
  *(undefined4 *)(this + 0x120) = 1;
  *(undefined4 *)(this + 0x124) = 1;
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BBC0 */

void __thiscall
netUBI_MINICLIENT::ErrorCB(netUBI_MINICLIENT *this,int param_1,int param_2,int param_3)

{
  *(undefined4 *)(this + 0x10c) = 1;
  *(int *)(this + 0x110) = param_1;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BBF0 */

void __thiscall netUBI_MINICLIENT::LobbyDisconnectCB(netUBI_MINICLIENT *this)

{
  if ((*(int *)(this + 0x10c) == 3) && (*(int *)(this + 0x110) == 0)) {
    *(undefined4 *)(this + 0x110) = 3;
  }
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 300) = 0;
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BC30
   addr: 0057BC30 */

void * __thiscall
netUBI_MINICLIENT::_scalar_deleting_destructor_(netUBI_MINICLIENT *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__clLoginCallbacks__;
  *(undefined ***)(this + 4) = &_vftable__for__clFriendsCallbacks__;
  *(undefined ***)(this + 8) = &_vftable__for__clSessionCallbacks__;
  *(undefined ***)(this + 0xc) = &_vftable__for__clLobbyCallbacks__;
  if (*(int *)(this + 0x124) != 0) {
    clMSClientClass::LeaveGameServer
              ((clMSClientClass *)this,*(int *)(this + 0x114),*(int *)(this + 0x118));
    clMSClientClass::Engine((clMSClientClass *)this,1000,1000);
  }
  clMSClientClass::Uninitialize((clMSClientClass *)this);
  clMSClientClass::~clMSClientClass((clMSClientClass *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BD40 */

void __thiscall netUBI_SERVERREG::OnGroupsReceived(netUBI_SERVERREG *this,int param_1)

{
  int *piVar1;
  uchar uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  void *unaff_EDI;
  ushort uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  void *pvVar12;
  int iVar13;
  void *pvVar14;
  int iVar15;
  char *pcVar16;
  uchar uVar17;
  undefined1 local_8 [4];
  int *local_4;
  
  puVar11 = local_8;
  if (*(int *)(this + 0x134) == 5) {
    (**(code **)(**(int **)(this + 0x130) + 0xe8))(&local_4);
    if (local_4 != (int *)0x0) {
      *(undefined4 *)(this + 0x144) = 0;
      *(int **)(this + 0x148) = local_4;
      return;
    }
    piVar1 = *(int **)(this + 0x130);
    uVar17 = '\0';
    uVar2 = '\x01';
    local_4 = piVar1;
    pcVar4 = (char *)(**(code **)(*piVar1 + 0xd8))();
    pcVar16 = s_1_0;
    uVar3 = (**(code **)(*piVar1 + 0xe4))();
    iVar15 = 0;
    pvVar14 = (void *)0x0;
    iVar13 = 0;
    pvVar12 = (void *)0x0;
    pcVar10 = s_;
    uVar9 = 0;
    uVar5 = (**(code **)(*piVar1 + 0xe0))();
    uVar8 = 6;
    pcVar6 = (char *)(**(code **)(*piVar1 + 0xd4))();
    pcVar7 = (char *)(**(code **)(*piVar1 + 0xdc))();
    uVar2 = CRegisterServer::RegServerSend_RegisterServerOnLobby
                      ((CRegisterServer *)this,0,0,pcVar7,pcVar6,uVar8,uVar5,uVar9,pcVar10,unaff_EDI
                       ,(int)puVar11,pvVar12,iVar13,pvVar14,iVar15,uVar3,pcVar16,pcVar4,uVar2,uVar17
                      );
    if (uVar2 != '\0') {
      *(undefined4 *)(this + 0x134) = 6;
      return;
    }
    *(undefined4 *)(this + 0x144) = 3;
    *(undefined4 *)(this + 0x148) = 5;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BE30 */

void __thiscall
netUBI_SERVERREG::OnServerRegistered
          (netUBI_SERVERREG *this,int param_1,char *param_2,int param_3,int param_4)

{
  uchar uVar1;
  char *pcVar2;
  
  if (*(int *)(this + 0x134) == 6) {
    if (param_1 != 0) {
      *(undefined4 *)(this + 0x144) = 0;
      *(int *)(this + 0x148) = param_1;
      return;
    }
    uVar1 = CRegisterServer::RegServerSend_LobbyServerConnection
                      ((CRegisterServer *)this,param_2,(ushort)param_3,0,0x19,0x78);
    if (uVar1 != '\0') {
      pcVar2 = (char *)(**(code **)(**(int **)(this + 0x130) + 0xcc))();
      uVar1 = CRegisterServer::RegServerSend_LobbyServerLogin
                        ((CRegisterServer *)this,pcVar2,param_4);
      if (uVar1 != '\0') {
        *(undefined4 *)(this + 0x134) = 7;
        return;
      }
      *(undefined4 *)(this + 0x148) = 6;
      *(undefined4 *)(this + 0x144) = 3;
      return;
    }
    *(undefined4 *)(this + 0x148) = 7;
    *(undefined4 *)(this + 0x144) = 3;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BEE0 */

void __thiscall netUBI_SERVERREG::NotifyClientLeave(netUBI_SERVERREG *this,char *param_1)

{
  if ((*(int *)(this + 0x134) == 0xc) && (*(int *)(this + 0x140) != 0)) {
    CRegisterServer::RegServerSend_LobbyServerMemberLeave((CRegisterServer *)this,param_1);
    return;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BF00 */

char * __thiscall netUBI_SERVERREG::GetErrorString(netUBI_SERVERREG *this)

{
  char *pcVar1;
  
  pcVar1 = _ubiGetErrorString(*(int *)(this + 0x144),*(int *)(this + 0x148));
  return pcVar1;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057BF20 */

char * __fastcall _ubiGetErrorString(int param_1,int param_2)

{
  switch(param_1 & 0x7fffffff) {
  case 0:
    switch(param_2 & 0x7fffffff) {
    case 1:
      return s_Router__Invalid_username;
    case 2:
      return s_Router__Invalid_password;
    case 3:
      return s_Router__User_already_connected;
    case 4:
      return s_Router__Arena_not_available;
    case 5:
      return s_Router__Friends_not_available;
    case 6:
      return s_Router__Name_already_used;
    case 7:
      return s_Router__Player_not_connected;
    case 8:
      return s_Router__Player_not_registered;
    case 9:
      return s_Router__Player_already_connected;
    case 10:
      return s_Router__Player_already_registere;
    case 0xb:
      return s_Router__Old_client_version;
    case 0xc:
      return s_Router__Database_in_backup_mode;
    case 0xd:
      return s_Router__Database_problem;
    default:
      return s_Router__Unknown_error;
    case 0x32:
      return s_Router__Invalid_client;
    }
  case 1:
    switch(param_2 & 0x7fffffff) {
    case 1:
      return s_Lobby__Server_not_exist;
    case 2:
      return s_Lobby__Game_not_allowed;
    default:
      return s_Lobby__Unknown_error;
    case 4:
      return s_Lobby__Spectators_not_allowed;
    case 5:
    case 6:
    case 7:
      return s_Lobby__Server_is_full;
    case 8:
      return s_Lobby__Member_not_registered;
    case 9:
    case 10:
      return s_Lobby__Game_in_progress;
    case 0xb:
      return s_Lobby__Invalid_password;
    case 0xc:
      return s_Lobby__Already_in_group;
    case 0xd:
      return s_Lobby__Not_a_master;
    case 0xe:
      return s_Lobby__Not_in_group;
    case 0xf:
      return s_Lobby__To_few_players;
    case 0x10:
      return s_Lobby__Connect_add_connection;
    case 0x11:
      return s_Lobby__Connect_send_login_msg;
    case 0x12:
      return s_Lobby__Error_login_msg;
    case 0x13:
      return s_Lobby__No_host_lobyy_server;
    case 0x14:
      return s_Lobby__Server_disconnected;
    case 0x15:
      return s_Lobby__Invalid_group_name;
    case 0x16:
      return s_Lobby__Invalid_game_type;
    case 0x17:
      return s_Lobby__No_more_game_modules;
    case 0x18:
      return s_Lobby__Create_not_allowed;
    case 0x19:
      return s_Lobby__Server_close;
    case 0x1a:
      return s_Lobby__Wrong_server_type;
    case 0x1b:
      return s_Lobby__Member_not_found;
    case 0x1e:
      return s_Lobby__Match_not_exist;
    case 0x1f:
      return s_Lobby__Match_not_finished;
    case 0x20:
      return s_Lobby__Game_not_inited;
    case 0x21:
      return s_Lobby__Begin_aready_done;
    case 0x22:
      return s_Lobby__Match_already_finished;
    case 0x23:
    case 0x24:
    case 0x25:
      return s_Lobby__Match_score_submission_fa;
    case 0x26:
      return s_Lobby__Member_banned;
    case 0x27:
      return s_Lobby__Passport_fail;
    case 0x28:
      return s_Lobby__Not_creator;
    case 0x29:
      return s_Lobby__Game_not_finished;
    case 0x2a:
      return s_Lobby__Passport_timeout;
    case 0x2b:
      return s_Lobby__Passport_not_found;
    }
  case 2:
    switch(param_2) {
    case 0:
      return s_No_error;
    case 1:
      return s_HTTP__Out_of_mem;
    case 2:
      return s_HTTP_Buffer_overflow;
    case 3:
      return s_HTTP_Invalid_URL;
    case 4:
      return s_HTTP_Unable_to_reserve_socket;
    case 5:
      return s_HTTP_Connection_failure;
    case 6:
      return s_HTTP_Illegal_response;
    case 7:
      return s_HTTP_400_Illegal_response;
    case 8:
      return s_HTTP_401_Unauthorized;
    case 9:
      return s_HTTP_403_Forbidden;
    case 10:
      return s_HTTP_404_Not_Found;
    case 0xb:
      return s_HTTP_5xx___Server_error;
    case 0xc:
      return s_HTTP_Cannot_save_gs_ini;
    case 0xd:
      return s_HTTP_Cannot_write_to_gs_ini;
    case 0xe:
      return s_HTTP_Timed_out;
    }
    break;
  case 3:
    switch(param_2 & 0x7fffffff) {
    case 2:
      return s_Cannot_connect_to_any_router;
    case 4:
      return s_Fail_on_router_connect;
    case 5:
      return s_Fail_on_register_server;
    case 6:
      return s_Fail_on_lobby_login;
    case 7:
      return s_Fail_on_lobby_connect;
    case 8:
      return s_Fail_on_join_game;
    case 9:
      return s_Fail_on_client_init;
    }
  }
  return s_Unknown_error;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C2F0 */

int __thiscall netUBI_SERVERREG::GetMatchStatus(netUBI_SERVERREG *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x160) == 2) {
    if ((*(int *)(this + 0x144) == 3) && (*(int *)(this + 0x148) == 0)) {
      iVar1 = *(int *)(this + 0x168);
      if (iVar1 != 0) {
        if ((*(int *)(iVar1 + 0x10c) == 3) && (*(int *)(iVar1 + 0x110) == 0)) {
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x130) != 0)) {
            *(undefined4 *)(this + 0x160) = 3;
          }
        }
        else {
          *(undefined4 *)(this + 0x160) = 4;
        }
      }
    }
    else {
      *(undefined4 *)(this + 0x160) = 4;
    }
  }
  iVar1 = *(int *)(this + 0x160);
  if ((iVar1 == -1) || (*(int *)(this + 0x140) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C380 */

void __thiscall netUBI_SERVERREG::RestartLadder(netUBI_SERVERREG *this)

{
  if ((*(int *)(this + 0x140) != 0) && (*(uint *)(this + 0x15c) != 0)) {
    *(undefined4 *)(this + 0x160) = 1;
    CRegisterServer::RegServerSend_MatchStart((CRegisterServer *)this,*(uint *)(this + 0x15c));
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C3B0 */

void __thiscall netUBI_SERVERREG::StopLadder(netUBI_SERVERREG *this)

{
  if ((*(int *)(this + 0x164) != 0) && (*(int *)(this + 0x140) != 0)) {
    *(undefined4 *)(this + 0x164) = 0;
    CRegisterServer::RegServerSend_MatchFinish((CRegisterServer *)this);
    return;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C3E0 */

void __thiscall netUBI_SERVERREG::StartMatchData(netUBI_SERVERREG *this)

{
  clMSClientClass *this_00;
  
  if ((((*(int *)(this + 0x160) == 1) && (*(int *)(this + 0x164) != 0)) &&
      (*(int *)(this + 0x140) != 0)) &&
     (this_00 = *(clMSClientClass **)(this + 0x168), *(int *)(this_00 + 300) != 0)) {
    clMSClientClass::InitMatchResult(this_00,*(uint *)(this_00 + 0x128));
    *(undefined4 *)(this + 0x160) = 2;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C430 */

void __thiscall
netUBI_SERVERREG::SendMatchData(netUBI_SERVERREG *this,char *param_1,int param_2,int param_3)

{
  clMSClientClass *this_00;
  
  if ((((*(int *)(this + 0x160) == 2) && (*(int *)(this + 0x164) != 0)) &&
      (*(int *)(this + 0x140) != 0)) &&
     ((this_00 = *(clMSClientClass **)(this + 0x168), this_00 != (clMSClientClass *)0x0 &&
      (*(int *)(this_00 + 300) != 0)))) {
    clMSClientClass::SetMatchResult(this_00,param_1,param_2,param_3);
    return;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C470 */

void __thiscall netUBI_SERVERREG::FinishMatchData(netUBI_SERVERREG *this)

{
  clMSClientClass *this_00;
  
  if ((((*(int *)(this + 0x160) == 2) && (*(int *)(this + 0x164) != 0)) &&
      (*(int *)(this + 0x140) != 0)) &&
     (this_00 = *(clMSClientClass **)(this + 0x168), *(int *)(this_00 + 300) != 0)) {
    clMSClientClass::SubmitMatchResult(this_00,*(int *)(this_00 + 0x114),*(int *)(this_00 + 0x118));
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C4C0 */

void __thiscall
netUBI_SERVERREG::RegServerRcv_LoginRouterResult
          (netUBI_SERVERREG *this,uchar param_1,int param_2,char *param_3)

{
  uchar uVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == '&') {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 | 0x80000000;
  }
  if (*(int *)(this + 0x134) == 3) {
    if (uVar2 != 0) {
      *(undefined4 *)(this + 0x144) = 0;
      *(uint *)(this + 0x148) = uVar2;
      return;
    }
    pcVar3 = (char *)(**(code **)(**(int **)(this + 0x130) + 0xd4))();
    uVar1 = CRegisterServer::RegServerSend_RequestParentGroupOnLobby((CRegisterServer *)this,pcVar3)
    ;
    if (uVar1 != '\0') {
      *(undefined4 *)(this + 0x134) = 5;
      return;
    }
    *(undefined4 *)(this + 0x144) = 3;
    *(undefined4 *)(this + 0x148) = 4;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C540 */

void __thiscall
netUBI_SERVERREG::RegServerRcv_RegisterServerResult
          (netUBI_SERVERREG *this,uchar param_1,int param_2,int param_3,char *param_4,ushort param_5
          ,char *param_6)

{
  uint uVar1;
  
  *(int *)(this + 0x150) = param_3;
  if (param_1 == '&') {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2 | 0x80000000;
  }
  OnServerRegistered(this,uVar1,param_4,(uint)param_5,param_3);
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C580 */

void __thiscall
netUBI_SERVERREG::RegServerRcv_LobbyServerLoginResults
          (netUBI_SERVERREG *this,uchar param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  *(int *)(this + 0x14c) = param_3;
  if (param_1 == '&') {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2 | 0x80000000;
  }
  if (*(int *)(this + 0x134) == 7) {
    if (uVar1 != 0) {
      *(undefined4 *)(this + 0x144) = 1;
      *(uint *)(this + 0x148) = uVar1;
      return;
    }
    *(undefined4 *)(this + 0x140) = 1;
    if (*(int *)(this + 0x160) != -1) {
      *(undefined4 *)(this + 0x164) = 0;
      CRegisterServer::RegServerSend_MatchStart((CRegisterServer *)this,*(uint *)(this + 0x15c));
      *(undefined4 *)(this + 0x134) = 9;
      return;
    }
    *(undefined4 *)(this + 0x134) = 4;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C610 */

void __thiscall netUBI_SERVERREG::RegServerRcv_LobbyServerDisconnection(netUBI_SERVERREG *this)

{
  *(undefined4 *)(this + 0x140) = 0;
  if ((*(int *)(this + 0x144) == 3) && (*(int *)(this + 0x148) == 0)) {
    if (*(int *)(this + 0x13c) != 0) {
      *(undefined4 *)(this + 0x134) = 5;
      return;
    }
    *(undefined4 *)(this + 0x134) = 2;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C650 */

void __thiscall
netUBI_SERVERREG::RegServerRcv_RequestParentGroupResult
          (netUBI_SERVERREG *this,uchar param_1,int param_2,int param_3,int param_4,char *param_5,
          uint param_6,uint param_7)

{
  if (param_1 == '&') {
    if (param_4 == 0) {
      OnGroupsReceived(this,0);
      return;
    }
  }
  else {
    OnGroupsReceived(this,param_2 | 0x80000000);
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C6C0 */

void __thiscall
netUBI_SERVERREG::RegServerRcv_LobbyServerMatchStartReply
          (netUBI_SERVERREG *this,uchar param_1,int param_2,int param_3)

{
  *(undefined4 *)(this + 0x164) = 1;
  *(undefined4 *)(this + 0x160) = 1;
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C6E0 */

void __thiscall
netUBI_SERVERREG::RegServerRcv_LobbyServerMatchFinishReply
          (netUBI_SERVERREG *this,uchar param_1,int param_2,int param_3)

{
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x160) = 0xffffffff;
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C700 */

void __thiscall
netUBI_SERVERREG::RegServerRcv_LobbyServerMemberNew
          (netUBI_SERVERREG *this,char *param_1,uchar param_2,char *param_3,char *param_4,
          void *param_5,uint param_6,ushort param_7)

{
  (**(code **)(**(int **)(this + 0x130) + 0xec))(param_1);
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C730 */

netUBI_CLIENT * __thiscall netUBI_CLIENT::netUBI_CLIENT(netUBI_CLIENT *this,netDRV_DPUBI *param_1)

{
  clMSClientClass::clMSClientClass((clMSClientClass *)this);
  *(netDRV_DPUBI **)(this + 0x10c) = param_1;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined ***)this = &_vftable__for__clLoginCallbacks__;
  *(undefined ***)(this + 4) = &_vftable__for__clFriendsCallbacks__;
  *(undefined ***)(this + 8) = &_vftable__for__clSessionCallbacks__;
  *(undefined ***)(this + 0xc) = &_vftable__for__clLobbyCallbacks__;
  *(undefined4 *)(this + 0x114) = 3;
  *(undefined4 *)(this + 0x120) = 3;
  return this;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C7B0
   addr: 0057C7B0 */

void * __thiscall netUBI_CLIENT::_vector_deleting_destructor_(netUBI_CLIENT *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__clLoginCallbacks__;
  *(undefined ***)(this + 4) = &_vftable__for__clFriendsCallbacks__;
  *(undefined ***)(this + 8) = &_vftable__for__clSessionCallbacks__;
  *(undefined ***)(this + 0xc) = &_vftable__for__clLobbyCallbacks__;
  if (*(int *)(this + 0x130) != 0) {
    clMSClientClass::LeaveGameServer
              ((clMSClientClass *)this,*(int *)(this + 0x128),*(int *)(this + 300));
    clMSClientClass::Engine((clMSClientClass *)this,1000,0x5dc);
    *(undefined4 *)(this + 0x130) = 0;
  }
  if (*(int *)(this + 0x11c) != 0) {
    if (*(int *)(this + 0x130) != 0) {
      clMSClientClass::LeaveGameServer
                ((clMSClientClass *)this,*(int *)(this + 0x128),*(int *)(this + 300));
      clMSClientClass::Engine((clMSClientClass *)this,1000,0x5dc);
      *(undefined4 *)(this + 0x130) = 0;
    }
    clMSClientClass::Uninitialize((clMSClientClass *)this);
    *(undefined4 *)(this + 0x11c) = 0;
  }
  clMSClientClass::~clMSClientClass((clMSClientClass *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C880 */

void __thiscall netUBI_CLIENT::Shutdown(netUBI_CLIENT *this)

{
  if (*(int *)(this + 0x130) != 0) {
    clMSClientClass::LeaveGameServer
              ((clMSClientClass *)this,*(int *)(this + 0x128),*(int *)(this + 300));
    clMSClientClass::Engine((clMSClientClass *)this,1000,0x5dc);
    *(undefined4 *)(this + 0x130) = 0;
  }
  if (*(int *)(this + 0x11c) != 0) {
    if (*(int *)(this + 0x130) != 0) {
      clMSClientClass::LeaveGameServer
                ((clMSClientClass *)this,*(int *)(this + 0x128),*(int *)(this + 300));
      clMSClientClass::Engine((clMSClientClass *)this,1000,0x5dc);
      *(undefined4 *)(this + 0x130) = 0;
    }
    clMSClientClass::Uninitialize((clMSClientClass *)this);
    *(undefined4 *)(this + 0x11c) = 0;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057C920 */

void __thiscall netUBI_CLIENT::Think(netUBI_CLIENT *this)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  clMSClientClass::Engine((clMSClientClass *)this,1000,0x5dc);
  if ((*(int **)(this + 0x110) != (int *)0x0) && (iVar5 = **(int **)(this + 0x110), iVar5 != 0)) {
    GSHttpEngine_8(iVar5,5000);
  }
  if ((*(int *)(this + 0x114) == 3) && (*(int *)(this + 0x118) == 0)) {
    if (*(int *)(this + 0x11c) == 0) {
      if (netUBI_DOWNLOADER::isGsIniDownloaded != 0) {
        StartConnect(this);
        return;
      }
      puVar2 = (undefined4 *)operator_new(0x10);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0xffffffff;
        puVar2[2] = 0;
        puVar2[3] = 1;
      }
      piVar1 = *(int **)(this + 0x10c);
      *(undefined4 **)(this + 0x110) = puVar2;
      pcVar3 = (char *)(**(code **)(*piVar1 + 0xd4))();
      pcVar4 = (char *)(**(code **)(*piVar1 + 0xcc))();
      iVar5 = netUBI_DOWNLOADER::StartDownload(*(netUBI_DOWNLOADER **)(this + 0x110),pcVar4,pcVar3);
      if (iVar5 == 0) {
        *(undefined4 *)(this + 0x114) = 3;
        *(undefined4 *)(this + 0x118) = 1;
        return;
      }
      *(undefined4 *)(this + 0x11c) = 1;
    }
    else if ((*(int *)(this + 0x11c) == 1) &&
            (iVar5 = *(int *)(this + 0x110), *(int *)(iVar5 + 0xc) != 0)) {
      if (*(int *)(iVar5 + 8) == 0) {
        StartConnect(this);
      }
      else {
        *(undefined4 *)(this + 0x114) = 2;
        *(undefined4 *)(this + 0x118) = *(undefined4 *)(iVar5 + 8);
      }
      piVar1 = *(int **)(this + 0x110);
      if (piVar1 != (int *)0x0) {
        if (*piVar1 != 0) {
          if (piVar1[1] != -1) {
            GSHttpCancelRequest_8(*piVar1,piVar1[1]);
            piVar1[1] = -1;
          }
          GSHttpUninitialize_4(*piVar1);
          piVar1[3] = 1;
          *piVar1 = 0;
        }
        operator_delete(piVar1);
      }
      *(undefined4 *)(this + 0x110) = 0;
      return;
    }
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CAB0 */

void __thiscall netUBI_CLIENT::StartConnect(netUBI_CLIENT *this)

{
  int *piVar1;
  uchar uVar2;
  UINT UVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  char local_c4 [64];
  char local_84 [132];
  
  piVar1 = *(int **)(this + 0x110);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      if (piVar1[1] != -1) {
        GSHttpCancelRequest_8(*piVar1,piVar1[1]);
        piVar1[1] = -1;
      }
      GSHttpUninitialize_4(*piVar1);
      piVar1[3] = 1;
      *piVar1 = 0;
    }
    operator_delete(piVar1);
    *(undefined4 *)(this + 0x110) = 0;
  }
  iVar7 = 0;
  do {
    sprintf(local_c4,s_RouterIP_i,iVar7);
    GetPrivateProfileStringA(s_Servers,local_c4,s_,local_84,0x81,s___gs_ini);
    sprintf(local_c4,s_RouterPort_i,iVar7);
    UVar3 = GetPrivateProfileIntA(s_Servers,local_c4,0,s___gs_ini);
    if ((local_84[0] == '\0') || (UVar3 == 0)) break;
    piVar1 = *(int **)(this + 0x10c);
    pcVar4 = (char *)(**(code **)(*piVar1 + 0xd8))();
    pcVar5 = (char *)(**(code **)(*piVar1 + 0xd0))();
    pcVar6 = (char *)(**(code **)(*piVar1 + 0xcc))();
    uVar2 = clMSClientClass::Initialize
                      ((clMSClientClass *)this,local_84,(ushort)UVar3,pcVar6,pcVar5,pcVar4);
    if (uVar2 != '\0') {
      *(undefined4 *)(this + 0x11c) = 2;
      return;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 99);
  *(undefined4 *)(this + 0x114) = 3;
  *(undefined4 *)(this + 0x118) = 2;
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CC10 */

void __thiscall netUBI_CLIENT::EnumServers(netUBI_CLIENT *this)

{
  uchar uVar1;
  char *pcVar2;
  
  if (((((*(int *)(this + 0x11c) == 3) && (*(int *)(this + 0x114) == 3)) &&
       (*(int *)(this + 0x118) == 0)) &&
      (((*(int *)(this + 0x130) != 2 || (*(int *)(this + 0x120) != 3)) ||
       (*(int *)(this + 0x124) != 0)))) && (*(int *)(this + 0x134) == 0)) {
    pcVar2 = (char *)(**(code **)(**(int **)(this + 0x10c) + 0xd4))();
    uVar1 = clMSClientClass::RequestGameServers((clMSClientClass *)this,pcVar2);
    if (uVar1 != '\0') {
      *(undefined4 *)(this + 0x134) = 1;
                    /* WARNING: Could not recover jumptable at 0x0057cc84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(this + 0x10c) + 0xf4))();
      return;
    }
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CC90 */

void __thiscall netUBI_CLIENT::JoinGame(netUBI_CLIENT *this,void *param_1)

{
  int *piVar1;
  uchar uVar2;
  char *pcVar3;
  char *pcVar4;
  
                    /* WARNING: Load size is inaccurate */
  *(undefined4 *)(this + 0x128) = *param_1;
  piVar1 = *(int **)(this + 0x10c);
  *(undefined4 *)(this + 300) = *(undefined4 *)((int)param_1 + 4);
  pcVar3 = (char *)(**(code **)(*piVar1 + 0xd4))();
  pcVar4 = (char *)(**(code **)(*piVar1 + 0xd8))();
  uVar2 = clMSClientClass::JoinGameServer
                    ((clMSClientClass *)this,*(int *)(this + 0x128),*(int *)(this + 300),s_,pcVar4,
                     pcVar3);
  if (uVar2 == '\0') {
    *(undefined4 *)(this + 0x120) = 3;
    *(undefined4 *)(this + 0x124) = 8;
    return;
  }
  *(undefined4 *)(this + 0x130) = 1;
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CD20 */

int __thiscall netUBI_CLIENT::IsConnected(netUBI_CLIENT *this)

{
  if (((*(int *)(this + 0x11c) == 3) && (*(int *)(this + 0x114) == 3)) &&
     (*(int *)(this + 0x118) == 0)) {
    return 1;
  }
  return 0;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CD50 */

int __thiscall netUBI_CLIENT::IsConnectError(netUBI_CLIENT *this)

{
  if ((*(int *)(this + 0x114) == 3) && (*(int *)(this + 0x118) == 0)) {
    return 0;
  }
  return 1;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CD70 */

int __thiscall netUBI_CLIENT::IsJoined(netUBI_CLIENT *this)

{
  if (((*(int *)(this + 0x130) == 2) && (*(int *)(this + 0x120) == 3)) &&
     (*(int *)(this + 0x124) == 0)) {
    return 1;
  }
  return 0;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CDA0 */

int __thiscall netUBI_CLIENT::IsJoinError(netUBI_CLIENT *this)

{
  if ((*(int *)(this + 0x120) == 3) && (*(int *)(this + 0x124) == 0)) {
    return 0;
  }
  return 1;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CDC0 */

char * __thiscall netUBI_CLIENT::GetConnectErrorString(netUBI_CLIENT *this)

{
  char *pcVar1;
  
  pcVar1 = _ubiGetErrorString(*(int *)(this + 0x114),*(int *)(this + 0x118));
  return pcVar1;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CDE0 */

char * __thiscall netUBI_CLIENT::GetJoinErrorString(netUBI_CLIENT *this)

{
  char *pcVar1;
  
  pcVar1 = _ubiGetErrorString(*(int *)(this + 0x120),*(int *)(this + 0x124));
  return pcVar1;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CE00 */

char * __thiscall netUBI_CLIENT::GetStatusString(netUBI_CLIENT *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x11c);
  if (iVar1 == 0) {
    return s_Initializing_client;
  }
  if (iVar1 == 1) {
    return s_Downloading_routers_list;
  }
  if (iVar1 == 2) {
    return s_Connecting_to_Ubi_Com_service;
  }
  iVar1 = *(int *)(this + 0x130);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      return s_Connecting_to_game_server;
    }
    if (iVar1 != 2) {
      return s_Unknown;
    }
    return s_Connected;
  }
  if (*(int *)(this + 0x134) != 0) {
    return s_Searching_for_servers;
  }
  return s_Ready;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CE60 */

int __thiscall netUBI_CLIENT::IsServersEqual(netUBI_CLIENT *this,void *param_1,void *param_2)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  if ((*param_1 == *param_2) && (*(int *)((int)param_1 + 4) == *(int *)((int)param_2 + 4))) {
    return 1;
  }
  return 0;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CEA0 */

void __thiscall netUBI_CLIENT::StopBrowsing(netUBI_CLIENT *this,int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(this + 0x134) = 0;
    return;
  }
  if (*(int *)(this + 0x11c) != 0) {
    if (*(int *)(this + 0x130) != 0) {
      clMSClientClass::LeaveGameServer
                ((clMSClientClass *)this,*(int *)(this + 0x128),*(int *)(this + 300));
      clMSClientClass::Engine((clMSClientClass *)this,1000,0x5dc);
      *(undefined4 *)(this + 0x130) = 0;
    }
    clMSClientClass::Uninitialize((clMSClientClass *)this);
    *(undefined4 *)(this + 0x11c) = 0;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CF20 */

void __thiscall netUBI_CLIENT::DisconnectFromGame(netUBI_CLIENT *this)

{
  if (*(int *)(this + 0x130) != 0) {
    clMSClientClass::LeaveGameServer
              ((clMSClientClass *)this,*(int *)(this + 0x128),*(int *)(this + 300));
    clMSClientClass::Engine((clMSClientClass *)this,1000,0x5dc);
    *(undefined4 *)(this + 0x130) = 0;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CF60 */

void __thiscall netUBI_CLIENT::NotifyServerJoined(netUBI_CLIENT *this)

{
  if (*(int *)(this + 0x130) == 0) {
    clMSClientClass::GameServerConnected
              ((clMSClientClass *)this,*(int *)(this + 0x128),*(int *)(this + 300));
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CF80 */

void __thiscall netUBI_CLIENT::ErrorCB(netUBI_CLIENT *this,int param_1,int param_2,int param_3)

{
  if (*(int *)(this + 0x130) != 0) {
    *(undefined4 *)(this + 0x120) = 1;
    *(int *)(this + 0x124) = param_1;
    return;
  }
  if (*(int *)(this + 0x11c) == 0) {
    *(undefined4 *)(this + 0x114) = 1;
    *(int *)(this + 0x118) = param_1;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057CFD0 */

void __thiscall netUBI_CLIENT::InitFinishedCB(netUBI_CLIENT *this,int param_1,char *param_2)

{
  if (*(int *)(this + 0x11c) == 2) {
    if (param_1 != 0) {
      *(undefined4 *)(this + 0x114) = 0;
      *(int *)(this + 0x118) = param_1;
      return;
    }
    *(undefined4 *)(this + 0x11c) = 3;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057D010 */

void __thiscall netUBI_CLIENT::LobbyDisconnectCB(netUBI_CLIENT *this)

{
  if (((*(int *)(this + 0x130) != 0) && (*(int *)(this + 0x120) == 3)) &&
     (*(int *)(this + 0x124) == 0)) {
    *(undefined4 *)(this + 0x120) = 3;
    *(undefined4 *)(this + 0x124) = 3;
  }
  if (((*(int *)(this + 0x11c) == 0) && (*(int *)(this + 0x114) == 3)) &&
     (*(int *)(this + 0x118) == 0)) {
    *(undefined4 *)(this + 0x114) = 3;
    *(undefined4 *)(this + 0x118) = 3;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057D070 */

void __thiscall
netUBI_CLIENT::GameServerCB
          (netUBI_CLIENT *this,int param_1,int param_2,short param_3,char *param_4,int param_5,
          char *param_6,char *param_7,char *param_8,char *param_9,char *param_10,void *param_11,
          int param_12,uint param_13,uint param_14,uint param_15,uint param_16,char *param_17,
          char *param_18,int param_19)

{
  char local_54 [63];
  undefined1 local_15;
  uint local_14;
  uint local_10;
  void *local_c;
  int local_8;
  int *local_4;
  
  if (*(int *)(this + 0x134) != 0) {
    strncpy(local_54,param_4,0x40);
    local_15 = 0;
    local_4 = (int *)operator_new(8);
    local_4[1] = param_2;
    *local_4 = param_1;
    local_10 = param_14;
    local_14 = param_13;
    local_8 = param_12;
    local_c = param_11;
    (**(code **)(**(int **)(this + 0x10c) + 0xf8))(local_54);
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057D100 */

void __thiscall netUBI_CLIENT::RequestFinishedCB(netUBI_CLIENT *this)

{
  if (*(int *)(this + 0x134) != 0) {
    *(undefined4 *)(this + 0x134) = 0;
                    /* WARNING: Could not recover jumptable at 0x0057d11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x10c) + 0xfc))();
    return;
  }
  return;
}




/* from: drv:network_dpubi_ubi.cpp
   addr: 0057D130 */

void __thiscall
netUBI_CLIENT::JoinFinishedCB
          (netUBI_CLIENT *this,int param_1,int param_2,void *param_3,int param_4,char *param_5,
          char *param_6,ushort param_7)

{
  undefined2 in_stack_0000001e;
  
  if (*(int *)(this + 0x130) == 1) {
    *(int *)(this + 0x128) = param_1;
    *(undefined4 *)(this + 0x130) = 2;
    *(int *)(this + 300) = param_2;
    (**(code **)(**(int **)(this + 0x10c) + 0x100))(param_5,_param_7,param_6,_param_7);
  }
  return;
}

