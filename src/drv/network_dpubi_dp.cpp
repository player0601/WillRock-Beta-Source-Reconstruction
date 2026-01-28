
/* from: drv:network_dpubi_dp.cpp
   addr: 0057D190 */

void __thiscall netDP_SERVER::netDP_SERVER(netDP_SERVER *this,netDRV_DPUBI *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(netDRV_DPUBI **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(char **)(this + 0x10) = s_;
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D1B0 */

void __thiscall netDP_SERVER::~netDP_SERVER(netDP_SERVER *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,0,0x8000);
    (**(code **)(**(int **)(this + 4) + 0x5c))(*(int **)(this + 4),1);
    piVar1 = *(int **)(this + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(this + 4) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
  }
  piVar1 = *(int **)(this + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D210 */

void __thiscall netDP_SERVER::Shutdown(netDP_SERVER *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(piVar1,0,0x8000);
    (**(code **)(**(int **)(this + 4) + 0x5c))(*(int **)(this + 4),1);
    piVar1 = *(int **)(this + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(this + 4) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D250 */

void __thiscall netDP_SERVER::StartServer(netDP_SERVER *this)

{
  netDP_REF_PTR<struct_IDirectPlay8Client> *this_00;
  HRESULT HVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_ESI;
  int *unaff_EDI;
  code *pcVar5;
  int *piVar6;
  int *local_5c;
  undefined4 local_58 [2];
  netDP_REF_PTR<struct_IDirectPlay8Server> local_50 [80];
  
  local_58[0] = 0;
  netDP_REF_PTR<struct_IDirectPlay8Server>::AddRef
            ((netDP_REF_PTR<struct_IDirectPlay8Server> *)local_58);
  local_5c = (int *)0x0;
  netDP_REF_PTR<struct_IDirectPlay8Server>::AddRef
            ((netDP_REF_PTR<struct_IDirectPlay8Server> *)&local_5c);
  piVar6 = *(int **)(this + 4);
  this_00 = (netDP_REF_PTR<struct_IDirectPlay8Client> *)(this + 4);
  if (piVar6 != (int *)0x0) {
    if (*(int *)(this + 8) != 0) {
      (**(code **)(*piVar6 + 0x5c))(piVar6,1);
    }
    netDP_REF_PTR<struct_IDirectPlay8Server>::netDP_REF_PTR<struct_IDirectPlay8Server>
              (local_50,(IDirectPlay8Server *)0x0,1);
    netDP_REF_PTR<struct_IDirectPlay8Client>::operator=
              (this_00,(netDP_REF_PTR<struct_IDirectPlay8Client> *)local_50);
    netDP_REF_PTR<struct_IDirectPlay8Client>::Release
              ((netDP_REF_PTR<struct_IDirectPlay8Client> *)local_50);
  }
  *(undefined4 *)(this + 8) = 0;
  netDP_REF_PTR<struct_IDirectPlay8Client>::Release
            ((netDP_REF_PTR<struct_IDirectPlay8Client> *)&local_5c);
  HVar1 = CoCreateInstance((IID *)&_CLSID_DirectPlay8Server,(LPUNKNOWN)0x0,1,
                           (IID *)&_IID_IDirectPlay8Server,&local_5c);
  *(HRESULT *)(this + 0xc) = HVar1;
  if (HVar1 < 0) {
    *(char **)(this + 0x10) = s_DPlayServer_create__;
    netDP_REF_PTR<struct_IDirectPlay8Client>::Release
              ((netDP_REF_PTR<struct_IDirectPlay8Client> *)&local_5c);
    netDP_REF_PTR<struct_IDirectPlay8Client>::Release
              ((netDP_REF_PTR<struct_IDirectPlay8Client> *)local_58);
    return;
  }
  piVar6 = (int *)0x4;
  pcVar5 = DpMsgHandler;
  iVar2 = (**(code **)(*local_5c + 0xc))(local_5c,this);
  *(int *)(this + 0xc) = iVar2;
  if (iVar2 < 0) {
    *(char **)(this + 0x10) = s_DPlayServer_initialize__;
    netDP_REF_PTR<struct_IDirectPlay8Client>::Release
              ((netDP_REF_PTR<struct_IDirectPlay8Client> *)&stack0xffffff94);
    goto LAB_0057d4a7;
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    unaff_ESI = (int *)0x0;
  }
  HVar1 = CoCreateInstance((IID *)&_CLSID_DirectPlay8Address,(LPUNKNOWN)0x0,1,
                           (IID *)&_IID_IDirectPlay8Address,(LPVOID *)&stack0xffffff98);
  *(HRESULT *)(this + 0xc) = HVar1;
  if (HVar1 < 0) {
    *(char **)(this + 0x10) = s_DPlayAddr1_create__;
  }
  else {
    iVar2 = (**(code **)(*unaff_ESI + 0x34))(unaff_ESI,&_CLSID_DP8SP_TCPIP);
    *(int *)(this + 0xc) = iVar2;
    if (iVar2 < 0) {
      *(char **)(this + 0x10) = s_DPlayAddr1_provider__;
      if (pcVar5 != (code *)0x0) {
        (**(code **)(*(int *)pcVar5 + 8))(pcVar5);
      }
      if (piVar6 == (int *)0x0) {
        return;
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      return;
    }
    uVar3 = (**(code **)(**(int **)this + 0x9c))();
    uVar3 = uVar3 & 0xffff;
    if (uVar3 == 0) {
      uVar4 = 0;
LAB_0057d3d3:
      do {
        if (uVar3 != 0) {
          iVar2 = (**(code **)(*unaff_ESI + 0x48))(unaff_ESI,u_port,&stack0xffffff9c,4,2);
          *(int *)(this + 0xc) = iVar2;
          if (iVar2 < 0) {
            *(char **)(this + 0x10) = s_DPlayAddr1_port__;
            goto LAB_0057d499;
          }
        }
        (**(code **)(**(int **)this + 0xa4))(local_58);
        iVar2 = (**(code **)(*piVar6 + 0x34))(piVar6,&local_5c,&stack0xffffffa0,1,0,0,0,0);
        *(int *)(this + 0xc) = iVar2;
        if (-1 < iVar2) break;
        if ((iVar2 != -0x7fea7ce0) || ((int)uVar4 <= (int)uVar3)) {
          *(char **)(this + 0x10) = s_DPlay_host_create__;
          goto LAB_0057d499;
        }
        uVar3 = uVar3 + 1;
        *(undefined4 *)(this + 0xc) = 0;
      } while ((int)uVar3 <= (int)uVar4);
    }
    else {
      uVar4 = uVar3 + 10;
      if (uVar3 <= uVar4) goto LAB_0057d3d3;
    }
    if (unaff_EDI != (int *)0x0) {
      (**(code **)(*unaff_EDI + 4))(unaff_EDI);
    }
    piVar6 = *(int **)this_00;
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
      *(undefined4 *)this_00 = 0;
    }
    *(int **)this_00 = unaff_EDI;
    *(undefined4 *)(this + 8) = 1;
  }
LAB_0057d499:
  if (unaff_EDI != (int *)0x0) {
    (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  }
LAB_0057d4a7:
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D4C0 */

char * __thiscall netDP_SERVER::GetErrorDesc(netDP_SERVER *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = *(int *)(this + 0xc);
  pcVar3 = *(char **)(this + 0x10);
  if (iVar6 == -0x7fea7da0) {
    return s_Player_with_such_a_name_is_alrea;
  }
  if (iVar6 == -0x7fea79f0) {
    return s_Server_is_full;
  }
  iVar2 = 0;
  do {
    pcVar8 = s_Saber_internal_error__ + iVar2;
    (&DAT_00964288)[iVar2] = *pcVar8;
    iVar2 = iVar2 + 1;
  } while (*pcVar8 != '\0');
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar3 = &DAT_00964288;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar3 = (char *)DXGetErrorString8A_4(iVar6);
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar3 = &DAT_00964288;
  do {
    pcVar7 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return &DAT_00964288;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D560 */

char * __thiscall netDP_SERVER::GetStatusDesc(netDP_SERVER *this)

{
  char *pcVar1;
  
  pcVar1 = s_Server_started;
  if (*(int *)(this + 8) == 0) {
    pcVar1 = s_Starting_server;
  }
  return pcVar1;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D580 */

void __thiscall
netDP_SERVER::Send(netDP_SERVER *this,int param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_8;
  void *local_4;
  
  iVar1 = param_3;
  local_4 = param_2;
  uVar2 = 0;
  local_8 = param_3;
  param_3 = 0;
  if ((param_4 & 1U) == 0) {
    uVar3 = 0x12;
    if ((param_4 & 2U) != 0) {
      uVar2 = 500;
    }
  }
  else {
    uVar3 = 0x88;
  }
  *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + iVar1;
  (**(code **)(**(int **)(this + 4) + 0x38))
            (*(int **)(this + 4),param_1,&local_8,1,uVar2,0,&param_3,uVar3);
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D5F0 */

void __thiscall netDP_SERVER::DisconnectPlayer(netDP_SERVER *this,int param_1)

{
  (**(code **)(**(int **)(this + 4) + 0x60))(*(int **)(this + 4),param_1,0,0,0);
  (**(code **)(**(int **)this + 0xb0))(param_1);
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D620 */

void __thiscall netDP_SERVER::StopServer(netDP_SERVER *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(this + 8) != 0) {
      (**(code **)(*piVar1 + 0x5c))(piVar1,1);
    }
    piVar1 = *(int **)(this + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(this + 4) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D660 */

long __thiscall netDP_SERVER::MsgHandler(netDP_SERVER *this,ulong param_1,void *param_2)

{
  int iVar1;
  char local_24 [35];
  undefined1 local_1;
  
  if (*(int *)(this + 8) == 0) {
    return 1;
  }
  switch(param_1) {
  case 0xffff0007:
    (**(code **)(**(int **)this + 0xac))
              (*(undefined4 *)((int)param_2 + 4),*(undefined4 *)((int)param_2 + 8));
    return 0;
  case 0xffff0009:
    (**(code **)(**(int **)this + 0xb0))(*(undefined4 *)((int)param_2 + 4));
    return 0;
  case 0xffff000a:
    strncpy(local_24,*(char **)((int)param_2 + 0xc),0x24);
    local_1 = 0;
    iVar1 = (**(code **)(**(int **)this + 0xa0))(local_24,(int)param_2 + 0x18,(int)param_2 + 0x1c);
    if (iVar1 == 0) {
      return 1;
    }
    break;
  case 0xffff000e:
    strncpy(local_24,*(char **)((int)param_2 + 4),0x24);
    local_1 = 0;
    iVar1 = (**(code **)(**(int **)this + 0xa8))(local_24,(int)param_2 + 0x18);
    if (iVar1 == 0) {
      return 1;
    }
    break;
  case 0xffff0011:
    *(int *)(*(int *)this + 0xc) = *(int *)(*(int *)this + 0xc) + *(int *)((int)param_2 + 0x10);
    (**(code **)(**(int **)this + 0xb4))
              (*(undefined4 *)((int)param_2 + 4),*(undefined4 *)((int)param_2 + 0xc),
               *(undefined4 *)((int)param_2 + 0x10));
  }
  return 0;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D7C0 */

long netDP_SERVER::DpMsgHandler(void *param_1,ulong param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = MsgHandler((netDP_SERVER *)param_1,param_2,param_3);
  return lVar1;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D7E0 */

void __thiscall netDP_CLIENT::netDP_CLIENT(netDP_CLIENT *this,netDRV_DPUBI *param_1)

{
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(netDRV_DPUBI **)this = param_1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(char **)(this + 0x14) = s_;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D820 */

void __thiscall netDP_CLIENT::~netDP_CLIENT(netDP_CLIENT *this)

{
  netDP_REF_PTR<struct_IDirectPlay8Client> *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  netDP_CLIENT *local_4;
  
  iVar3 = 0;
  piVar1 = *(int **)(this + 4);
  this_00 = (netDP_REF_PTR<struct_IDirectPlay8Client> *)(this + 4);
  local_4 = this;
  if (piVar1 != (int *)0x0) {
    if (*(int *)(this + 8) != 0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,0,0x8000);
      *(undefined4 *)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
      if (*(int *)(this + 0xc) != 0) {
        (**(code **)(**(int **)this_00 + 0x38))(*(int **)this_00,1);
      }
    }
    local_4 = (netDP_CLIENT *)0x0;
    netDP_REF_PTR<struct_IDirectPlay8Server>::AddRef
              ((netDP_REF_PTR<struct_IDirectPlay8Server> *)&local_4);
    netDP_REF_PTR<struct_IDirectPlay8Client>::Release(this_00);
    *(netDP_CLIENT **)this_00 = local_4;
    if (local_4 != (netDP_CLIENT *)0x0) {
      (**(code **)(*(int *)local_4 + 8))(local_4);
    }
  }
  apFree(*(void **)(this + 0x30));
  if (0 < *(int *)(this + 0x24)) {
    do {
      iVar2 = *(int *)(this + 0x20);
      piVar1 = *(int **)(iVar2 + iVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(iVar2 + iVar3 * 4) = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x24));
  }
  apFree(*(void **)(this + 0x20));
  piVar1 = *(int **)this_00;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)this_00 = 0;
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D8E0 */

void __thiscall netDP_CLIENT::Shutdown(netDP_CLIENT *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(this + 8) != 0) {
      (**(code **)(*piVar1 + 0x18))(piVar1,0,0x8000);
      *(undefined4 *)(this + 0x18) = 0;
      *(undefined4 *)(this + 0x1c) = 0;
      if (*(int *)(this + 0xc) != 0) {
        (**(code **)(**(int **)(this + 4) + 0x38))(*(int **)(this + 4),1);
      }
    }
    piVar1 = *(int **)(this + 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(this + 4) = 0;
    }
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057D930 */

void __thiscall netDP_CLIENT::StartBrowser(netDP_CLIENT *this,char **param_1,int param_2)

{
  arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_> *this_00;
  netDP_CLIENT *ppv;
  netDP_REF_PTR<struct_IDirectPlay8Client> *this_01;
  int *piVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piStack_110;
  int *local_10c;
  int iStack_108;
  int iStack_104;
  wchar_t awStack_100 [128];
  
  local_10c = (int *)0x0;
  netDP_REF_PTR<struct_IDirectPlay8Server>::AddRef
            ((netDP_REF_PTR<struct_IDirectPlay8Server> *)&local_10c);
  piVar1 = *(int **)(this + 4);
  if ((piVar1 != (int *)0x0) && (*(int *)(this + 0xc) != 0)) {
    (**(code **)(*piVar1 + 0x38))(piVar1,1);
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  if (*(int *)(this + 4) != 0) {
    if (*(int *)(this + 8) != 0) {
      arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_>::Resize
                ((arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_> *)(this + 0x20),0);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
    netDP_REF_PTR<struct_IDirectPlay8Server>::netDP_REF_PTR<struct_IDirectPlay8Server>
              ((netDP_REF_PTR<struct_IDirectPlay8Server> *)&piStack_110,(IDirectPlay8Server *)0x0,1)
    ;
    netDP_REF_PTR<struct_IDirectPlay8Client>::operator=
              ((netDP_REF_PTR<struct_IDirectPlay8Client> *)(this + 4),
               (netDP_REF_PTR<struct_IDirectPlay8Client> *)&piStack_110);
    netDP_REF_PTR<struct_IDirectPlay8Client>::Release
              ((netDP_REF_PTR<struct_IDirectPlay8Client> *)&piStack_110);
  }
  this_00 = (arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_> *)(this + 0x20);
  *(undefined4 *)(this + 0x2c) = 0;
  arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_>::Resize(this_00,0);
  iStack_108 = 0;
  do {
    if ((param_1[iStack_108] != (char *)0x0) && (*param_1[iStack_108] != '\0')) {
      piStack_110 = (int *)0x0;
      netDP_REF_PTR<struct_IDirectPlay8Server>::AddRef
                ((netDP_REF_PTR<struct_IDirectPlay8Server> *)&piStack_110);
      arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_>::Insert
                (this_00,*(int *)(this + 0x24),
                 (netDP_REF_PTR<struct_IDirectPlay8Address> *)&piStack_110,1);
      netDP_REF_PTR<struct_IDirectPlay8Client>::Release
                ((netDP_REF_PTR<struct_IDirectPlay8Client> *)&piStack_110);
      this_01 = (netDP_REF_PTR<struct_IDirectPlay8Client> *)
                (*(int *)this_00 + -4 + *(int *)(this + 0x24) * 4);
      netDP_REF_PTR<struct_IDirectPlay8Client>::Release(this_01);
      HVar3 = CoCreateInstance((IID *)&_CLSID_DirectPlay8Address,(LPUNKNOWN)0x0,1,
                               (IID *)&_IID_IDirectPlay8Address,(LPVOID *)this_01);
      *(HRESULT *)(this + 0x10) = HVar3;
      if (HVar3 < 0) {
        *(char **)(this + 0x14) = s_DPlayAddr1_create__;
        netDP_REF_PTR<struct_IDirectPlay8Client>::Release
                  ((netDP_REF_PTR<struct_IDirectPlay8Client> *)&local_10c);
        return;
      }
      piVar1 = *(int **)(*(int *)this_00 + -4 + *(int *)(this + 0x24) * 4);
      iVar4 = (**(code **)(*piVar1 + 0x34))(piVar1,&_CLSID_DP8SP_TCPIP);
      *(int *)(this + 0x10) = iVar4;
      if (iVar4 < 0) {
        *(char **)(this + 0x14) = s_DPlayAddr1_service__;
        goto LAB_0057dc3f;
      }
      pwVar5 = awStack_100;
      pcVar6 = param_1[iStack_108];
      iVar4 = 0;
      pcVar8 = pcVar6;
      do {
        if (*pcVar8 == '\0') break;
        *pwVar5 = (short)*pcVar8;
        pwVar5 = pwVar5 + 1;
        pcVar8 = pcVar8 + 1;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x7f);
      *pwVar5 = L'\0';
      pcVar6 = strchr(pcVar6,0x3a);
      if (pcVar6 != (char *)0x0) {
        iStack_104 = atoi(pcVar6 + 1);
        iVar4 = *(int *)(this + 0x24);
        iVar2 = *(int *)this_00;
        awStack_100[(int)pcVar6 - (int)param_1[iStack_108]] = L'\0';
        piVar1 = *(int **)(iVar2 + -4 + iVar4 * 4);
        iVar4 = (**(code **)(*piVar1 + 0x48))(piVar1,u_port,&iStack_104,4,2);
        *(int *)(this + 0x10) = iVar4;
        if (iVar4 < 0) {
          *(char **)(this + 0x14) = s_DPlayAddr1_port__;
          if (local_10c == (int *)0x0) {
            return;
          }
          (**(code **)(*local_10c + 8))(local_10c);
          return;
        }
      }
      uVar9 = 1;
      piVar1 = *(int **)(*(int *)this_00 + -4 + *(int *)(this + 0x24) * 4);
      iVar4 = *piVar1;
      sVar7 = wcslen(awStack_100);
      iVar4 = (**(code **)(iVar4 + 0x48))(piVar1,&u_hostname,awStack_100,sVar7 * 2 + 2,uVar9);
      *(int *)(this + 0x10) = iVar4;
      if (iVar4 < 0) {
        *(char **)(this + 0x14) = s_DPlayAddr1_hostaddr__;
        goto LAB_0057dc3f;
      }
    }
    iStack_108 = iStack_108 + 1;
    if (1 < iStack_108) {
      if (*(int *)(this + 0x24) == 0) {
        piStack_110 = (int *)0x0;
        arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_>::Insert
                  (this_00,*(int *)(this + 0x24),
                   (netDP_REF_PTR<struct_IDirectPlay8Address> *)&piStack_110,1);
        if (piStack_110 != (int *)0x0) {
          (**(code **)(*piStack_110 + 8))(piStack_110);
        }
      }
      piVar1 = *(int **)(this + 4);
      ppv = this + 4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(LPVOID *)ppv = (LPVOID)0x0;
      }
      HVar3 = CoCreateInstance((IID *)&_CLSID_DirectPlay8Client,(LPUNKNOWN)0x0,1,
                               (IID *)&_IID_IDirectPlay8Client,(LPVOID *)ppv);
      *(HRESULT *)(this + 0x10) = HVar3;
      if (HVar3 < 0) {
        *(char **)(this + 0x14) = s_DPlayClient_create__;
      }
      else {
        iVar4 = (**(code **)(**(int **)ppv + 0xc))(*(int **)ppv,this,DpMsgHandler,4);
        *(int *)(this + 0x10) = iVar4;
        if (iVar4 < 0) {
          *(char **)(this + 0x14) = s_DPlayClient_initialize__;
          piVar1 = *(int **)ppv;
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
            *(LPVOID *)ppv = (LPVOID)0x0;
          }
          *(LPVOID *)ppv = (LPVOID)0x0;
          if (local_10c == (int *)0x0) {
            return;
          }
          (**(code **)(*local_10c + 8))(local_10c);
          return;
        }
        *(undefined4 *)(this + 8) = 1;
      }
LAB_0057dc3f:
      if (local_10c != (int *)0x0) {
        (**(code **)(*local_10c + 8))(local_10c);
      }
      return;
    }
  } while( true );
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057DC60 */

void __thiscall netDP_CLIENT::EnumHosts(netDP_CLIENT *this,char *param_1)

{
  arrVector<unsigned_char> *this_00;
  char cVar1;
  HRESULT HVar2;
  uint uVar3;
  int iVar4;
  int *unaff_EBX;
  char *pcVar5;
  int *unaff_ESI;
  int *piVar6;
  undefined1 local_48 [72];
  
  if (*(int *)(this + 0x18) == 0) {
    if (param_1 != (char *)0x0) {
      uVar3 = 0xffffffff;
      this_00 = (arrVector<unsigned_char> *)(this + 0x30);
      pcVar5 = param_1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      if (*(int *)(this + 0x34) < (int)uVar3) {
        if (*(int *)(this + 0x38) < (int)uVar3) {
          arrVector<unsigned_char>::Realloc(this_00,uVar3);
        }
        for (iVar4 = *(int *)(this + 0x34); iVar4 < (int)uVar3; iVar4 = iVar4 + 1) {
          if ((undefined1 *)(*(int *)this_00 + iVar4) != (undefined1 *)0x0) {
            *(undefined1 *)(*(int *)this_00 + iVar4) = 0;
          }
        }
      }
      *(uint *)(this + 0x34) = uVar3;
      pcVar5 = *(char **)this_00;
      do {
        cVar1 = *param_1;
        param_1 = param_1 + 1;
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) % *(int *)(this + 0x24);
    (**(code **)(**(int **)this + 0xb8))(local_48);
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      unaff_EBX = (int *)0x0;
    }
    HVar2 = CoCreateInstance((IID *)&_CLSID_DirectPlay8Address,(LPUNKNOWN)0x0,1,
                             (IID *)&_IID_IDirectPlay8Address,(LPVOID *)&stack0xffffffb0);
    *(HRESULT *)(this + 0x10) = HVar2;
    if (HVar2 < 0) {
      *(char **)(this + 0x14) = s_DPlayAddr2_create__;
      if (unaff_EBX != (int *)0x0) {
        (**(code **)(*unaff_EBX + 8))(unaff_EBX);
        return;
      }
    }
    else {
      iVar4 = (**(code **)(*unaff_EBX + 0x34))(unaff_EBX,&_CLSID_DP8SP_TCPIP);
      *(int *)(this + 0x10) = iVar4;
      if (iVar4 < 0) {
        *(char **)(this + 0x14) = s_DPlayAddr2_service__;
        if (unaff_ESI != (int *)0x0) {
          (**(code **)(*unaff_ESI + 8))(unaff_ESI);
          return;
        }
      }
      else {
        (**(code **)(**(int **)this + 0xbc))();
        piVar6 = *(int **)(this + 0x30);
        iVar4 = (**(code **)(**(int **)(this + 4) + 0x14))
                          (*(int **)(this + 4),&stack0xffffffac,
                           *(undefined4 *)(*(int *)(this + 0x20) + *(int *)(this + 0x2c) * 4),
                           unaff_ESI,piVar6,*(undefined4 *)(this + 0x34),0,0,0,0,this + 0x18,0);
        *(int *)(this + 0x10) = iVar4;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        if (iVar4 < 0) {
          *(char **)(this + 0x14) = s_EnumHosts__;
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 8))(piVar6);
            return;
          }
        }
        else if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
      }
    }
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057DE00 */

void __thiscall netDP_CLIENT::StopBrowsing(netDP_CLIENT *this,int param_1)

{
  arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_> *this_00;
  int *piVar1;
  int iVar2;
  
  if (*(int *)(this + 4) != 0) {
    if (*(int *)(this + 8) != 0) {
      this_00 = (arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_> *)(this + 0x20);
      if (*(int *)(this + 0x24) < 1) {
        if (*(int *)(this + 0x24) < 0) {
          arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_>::Reserve(this_00,0);
          if (*(int *)(this + 0x24) < 0) {
            iVar2 = *(int *)(this + 0x24) * 4;
            do {
              if ((netDP_REF_PTR<struct_IDirectPlay8Server> *)(*(int *)this_00 + iVar2) !=
                  (netDP_REF_PTR<struct_IDirectPlay8Server> *)0x0) {
                netDP_REF_PTR<struct_IDirectPlay8Server>::netDP_REF_PTR<struct_IDirectPlay8Server>
                          ((netDP_REF_PTR<struct_IDirectPlay8Server> *)(*(int *)this_00 + iVar2),
                           (IDirectPlay8Server *)0x0,1);
              }
              iVar2 = iVar2 + 4;
            } while (iVar2 < 0);
          }
        }
      }
      else {
        iVar2 = 0;
        do {
          netDP_REF_PTR<struct_IDirectPlay8Client>::Release
                    ((netDP_REF_PTR<struct_IDirectPlay8Client> *)(*(int *)this_00 + iVar2 * 4));
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(this + 0x24));
      }
      *(undefined4 *)(this + 0x24) = 0;
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
    if (param_1 == 0) {
      piVar1 = *(int **)(this + 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(this + 4) = 0;
      }
      *(undefined4 *)(this + 4) = 0;
    }
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057DE90 */

void __thiscall netDP_CLIENT::JoinGame(netDP_CLIENT *this,netDP_SERVER_DATA *param_1,char *param_2)

{
  netDP_SERVER_DATA nVar1;
  int iVar2;
  uint uVar3;
  netDP_SERVER_DATA *pnVar4;
  undefined4 *unaff_retaddr;
  undefined1 local_48 [72];
  
  (**(code **)(**(int **)this + 0xb8))(local_48);
  if (*(int *)(this + 0x18) != 0) {
    (**(code **)(**(int **)this + 0xc4))();
    *(undefined4 *)(this + 0x18) = 0;
  }
  uVar3 = 0xffffffff;
  pnVar4 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    nVar1 = *pnVar4;
    pnVar4 = pnVar4 + 1;
  } while (nVar1 != (netDP_SERVER_DATA)0x0);
  iVar2 = (**(code **)(**(int **)(this + 4) + 0x1c))
                    (*(int **)(this + 4),&stack0xffffffb4,*unaff_retaddr,unaff_retaddr[1],0,0,
                     param_1,~uVar3,0,this + 0x1c,0);
  *(int *)(this + 0x10) = iVar2;
  if (iVar2 < 0) {
    *(char **)(this + 0x14) = s_Connect__;
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057DF20 */

char * __thiscall netDP_CLIENT::GetErrorDesc(netDP_CLIENT *this)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  iVar6 = *(int *)(this + 0x10);
  pcVar3 = *(char **)(this + 0x14);
  if (iVar6 == -0x7fea7da0) {
    return s_Player_with_such_a_name_is_alrea;
  }
  if (iVar6 == -0x7fea79f0) {
    return s_Server_is_full;
  }
  iVar2 = 0;
  do {
    pcVar8 = s_Saber_internal_error__ + iVar2;
    (&DAT_00964288)[iVar2] = *pcVar8;
    iVar2 = iVar2 + 1;
  } while (*pcVar8 != '\0');
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar2 = -1;
  pcVar3 = &DAT_00964288;
  do {
    pcVar7 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  pcVar3 = (char *)DXGetErrorString8A_4(iVar6);
  uVar4 = 0xffffffff;
  do {
    pcVar8 = pcVar3;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar3 = &DAT_00964288;
  do {
    pcVar7 = pcVar3;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar7 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar7;
  } while (cVar1 != '\0');
  pcVar3 = pcVar8 + -uVar4;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar8 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar8 = pcVar8 + 1;
  }
  return &DAT_00964288;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057DFC0 */

char * __thiscall netDP_CLIENT::GetStatusDesc(netDP_CLIENT *this)

{
  char *pcVar1;
  
  if (*(int *)(this + 0x1c) != 0) {
    return s_Client_connecting;
  }
  if (*(int *)(this + 0x18) != 0) {
    return s_Searching_for_servers;
  }
  pcVar1 = s_Client_ready;
  if (*(int *)(this + 8) == 0) {
    pcVar1 = s_Initializing_client;
  }
  return pcVar1;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057DFF0 */

void __thiscall netDP_CLIENT::Send(netDP_CLIENT *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_8;
  void *local_4;
  
  iVar1 = param_2;
  local_4 = param_1;
  uVar2 = 0;
  local_8 = param_2;
  param_2 = 0;
  if ((param_3 & 1U) == 0) {
    uVar3 = 0x12;
    if ((param_3 & 2U) != 0) {
      uVar2 = 500;
    }
  }
  else {
    uVar3 = 0x88;
  }
  *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + iVar1;
  (**(code **)(**(int **)(this + 4) + 0x20))(*(int **)(this + 4),&local_8,1,uVar2,0,&param_2,uVar3);
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E060 */

void __thiscall netDP_CLIENT::DisconnectFromGame(netDP_CLIENT *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  if ((piVar1 != (int *)0x0) && (*(int *)(this + 0xc) != 0)) {
    (**(code **)(*piVar1 + 0x38))(piVar1,1);
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E090 */

int __thiscall
netDP_CLIENT::IsServersEqual
          (netDP_CLIENT *this,netDP_SERVER_DATA *param_1,netDP_SERVER_DATA *param_2)

{
  int iVar1;
  netDP_SERVER_DATA *pnVar2;
  netDP_SERVER_DATA *pnVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  pnVar2 = param_1 + 8;
  pnVar3 = param_2 + 8;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *(int *)pnVar2 == *(int *)pnVar3;
    pnVar2 = pnVar2 + 4;
    pnVar3 = pnVar3 + 4;
  } while (bVar4);
  return (uint)bVar4;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E0C0 */

void __thiscall netDP_CLIENT::OnServerDelete(netDP_CLIENT *this,netDP_SERVER_DATA *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar1 = *(int **)param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)param_1 = 0;
  }
  operator_delete(param_1);
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E120 */

long __thiscall netDP_CLIENT::MsgHandler(netDP_CLIENT *this,ulong param_1,void *param_2)

{
  netDP_REF_PTR<struct_IDirectPlay8Server> *pnVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  short sVar6;
  short *psVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 local_58 [64];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  netDP_REF_PTR<struct_IDirectPlay8Server> *local_4;
  
  if (*(int *)(this + 8) == 0) {
    return 1;
  }
  switch(param_1) {
  case 0xffff0003:
    if (*(int *)((int)param_2 + 4) == *(int *)(this + 0x18)) {
      *(undefined4 *)(this + 0x18) = 0;
      if ((*(int *)(this + 0x2c) < *(int *)(this + 0x24)) && (*(int *)(this + 0xc) == 0)) {
        EnumHosts(this,(char *)0x0);
        return 0;
      }
      (**(code **)(**(int **)this + 0xc4))();
      return 0;
    }
    if (*(int *)((int)param_2 + 4) == *(int *)(this + 0x1c)) {
      *(undefined4 *)(this + 0x1c) = 0;
      iVar2 = *(int *)((int)param_2 + 0xc);
      *(int *)(this + 0x10) = iVar2;
      if (iVar2 < 0) {
        *(char **)(this + 0x14) = s_Connect_fail__;
        return 0;
      }
      *(undefined4 *)(this + 0x10) = 1;
      return 0;
    }
    break;
  case 0xffff0005:
    if (*(int *)((int)param_2 + 4) == *(int *)(this + 0x1c)) {
      *(undefined4 *)(this + 0x1c) = 0;
      iVar2 = *(int *)((int)param_2 + 0xc);
      *(int *)(this + 0x10) = iVar2;
      if (iVar2 < 0) {
        *(char **)(this + 0x14) = s_Connection_result__;
      }
      *(uint *)(this + 0xc) = (uint)(-1 < *(int *)(this + 0x10));
      return 0;
    }
    break;
  case 0xffff000b:
    if (*(int *)(this + 0x18) != 0) {
      puVar8 = local_58;
      iVar9 = 0;
      iVar2 = *(int *)((int)param_2 + 0xc);
      psVar7 = *(short **)(iVar2 + 0x30);
      do {
        if (*psVar7 == 0) break;
        sVar6 = *psVar7;
        psVar7 = psVar7 + 1;
        *puVar8 = (char)sVar6;
        puVar8 = puVar8 + 1;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x3f);
      uVar3 = *(undefined4 *)((int)param_2 + 0x1c);
      *puVar8 = 0;
      local_18 = *(undefined4 *)(iVar2 + 0x28);
      local_14 = *(undefined4 *)(iVar2 + 0x2c);
      local_10 = uVar3;
      local_4 = (netDP_REF_PTR<struct_IDirectPlay8Server> *)operator_new(0x18);
      if (local_4 == (netDP_REF_PTR<struct_IDirectPlay8Server> *)0x0) {
        local_4 = (netDP_REF_PTR<struct_IDirectPlay8Server> *)0x0;
      }
      else {
        *(undefined4 *)local_4 = 0;
        netDP_REF_PTR<struct_IDirectPlay8Server>::AddRef(local_4);
        *(undefined4 *)(local_4 + 4) = 0;
        netDP_REF_PTR<struct_IDirectPlay8Server>::AddRef(local_4 + 4);
      }
      iVar2 = *(int *)((int)param_2 + 0xc);
      *(int *)(local_4 + 8) = *(int *)(iVar2 + 8);
      *(int *)(local_4 + 0xc) = *(int *)(iVar2 + 0xc);
      *(int *)(local_4 + 0x10) = *(int *)(iVar2 + 0x10);
      *(int *)(local_4 + 0x14) = *(int *)(iVar2 + 0x14);
      piVar4 = *(int **)((int)param_2 + 4);
      pnVar1 = local_4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
        pnVar1 = local_4;
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      piVar5 = *(int **)pnVar1;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        *(int *)pnVar1 = 0;
      }
      *(int **)pnVar1 = piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      piVar4 = *(int **)((int)param_2 + 8);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      pnVar1 = local_4 + 4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      piVar5 = *(int **)pnVar1;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        *(int *)pnVar1 = 0;
      }
      *(int **)pnVar1 = piVar4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      uStack_c = *(undefined4 *)((int)param_2 + 0x10);
      uStack_8 = *(undefined4 *)((int)param_2 + 0x14);
      piVar4 = *(int **)local_4;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      piVar4 = *(int **)(local_4 + 4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      (**(code **)(**(int **)this + 0xc0))(local_58);
      return 0;
    }
    break;
  case 0xffff0011:
    *(int *)(*(int *)this + 0xc) = *(int *)(*(int *)this + 0xc) + *(int *)((int)param_2 + 0x10);
    (**(code **)(**(int **)this + 200))
              (*(undefined4 *)((int)param_2 + 0xc),*(undefined4 *)((int)param_2 + 0x10));
    break;
  case 0xffff0016:
    *(undefined4 *)(this + 0xc) = 0;
    return 0;
  }
  return 0;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E3F0 */

long netDP_CLIENT::DpMsgHandler(void *param_1,ulong param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = MsgHandler((netDP_CLIENT *)param_1,param_2,param_3);
  return lVar1;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E410 */

void __fastcall netDP_CLIENT::CharToWChar(char *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3 + -1) {
    do {
      if (*param_1 == '\0') break;
      *param_2 = (short)*param_1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_3 + -1);
  }
  *param_2 = 0;
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E440
   addr: 0057E440
   addr: 0057E440 */

netDP_REF_PTR<struct_IDirectPlay8Server> * __thiscall
netDP_REF_PTR<struct_IDirectPlay8Server>::netDP_REF_PTR<struct_IDirectPlay8Server>
          (netDP_REF_PTR<struct_IDirectPlay8Server> *this,IDirectPlay8Server *param_1,int param_2)

{
  *(IDirectPlay8Server **)this = param_1;
  if ((param_2 != 0) && (param_1 != (IDirectPlay8Server *)0x0)) {
    (**(code **)(*(int *)param_1 + 4))(param_1);
  }
  return this;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E470
   addr: 0057E470 */

netDP_REF_PTR<struct_IDirectPlay8Client> * __thiscall
netDP_REF_PTR<struct_IDirectPlay8Client>::operator=
          (netDP_REF_PTR<struct_IDirectPlay8Client> *this,
          netDP_REF_PTR<struct_IDirectPlay8Client> *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E4B0
   addr: 0057E4B0
   addr: 0057E4B0
   addr: 0057E4B0 */

void __thiscall
netDP_REF_PTR<struct_IDirectPlay8Client>::Release(netDP_REF_PTR<struct_IDirectPlay8Client> *this)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)this = 0;
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E4E0 */

void __thiscall
arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_>::Resize
          (arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_> *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  
  iVar5 = param_1;
  if (param_1 < *(int *)(this + 4)) {
    do {
      iVar2 = *(int *)this;
      piVar3 = *(int **)(iVar2 + iVar5 * 4);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(iVar2 + iVar5 * 4) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 4));
    *(int *)(this + 4) = param_1;
    return;
  }
  if (*(int *)(this + 4) < param_1) {
    if (*(int *)(this + 8) < param_1) {
      pvVar4 = apRealloc(*(void **)this,param_1 * 4);
      *(void **)this = pvVar4;
      *(int *)(this + 8) = param_1;
    }
    for (iVar5 = *(int *)(this + 4); iVar5 < param_1; iVar5 = iVar5 + 1) {
      puVar1 = (undefined4 *)(*(int *)this + iVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
    }
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E560 */

void __thiscall
arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_>::Insert
          (arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_> *this,int param_1,
          netDP_REF_PTR<struct_IDirectPlay8Address> *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(this + 8);
    iVar5 = *(int *)(this + 4) + param_3;
    if (iVar1 < iVar5) {
      iVar6 = iVar1 * 2;
      if (iVar1 * 2 <= iVar5) {
        iVar6 = iVar5;
      }
      if (iVar1 < iVar6) {
        iVar5 = iVar6;
        if (iVar6 < *(int *)(this + 4)) {
          do {
            iVar1 = *(int *)this;
            piVar2 = *(int **)(iVar1 + iVar5 * 4);
            if (piVar2 != (int *)0x0) {
              (**(code **)(*piVar2 + 8))(piVar2);
              *(undefined4 *)(iVar1 + iVar5 * 4) = 0;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(this + 4));
          *(int *)(this + 4) = iVar6;
        }
        pvVar4 = apRealloc(*(void **)this,iVar6 * 4);
        *(void **)this = pvVar4;
        *(int *)(this + 8) = iVar6;
      }
    }
    iVar5 = param_1 + param_3;
    memmove((void *)(*(int *)this + iVar5 * 4),(void *)(*(int *)this + param_1 * 4),
            (*(int *)(this + 4) - param_1) * 4);
    if (param_1 < iVar5) {
      do {
        piVar2 = (int *)(*(int *)this + param_1 * 4);
        if (piVar2 != (int *)0x0) {
          piVar3 = *(int **)param_2;
          *piVar2 = (int)piVar3;
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 4))(piVar3);
          }
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar5);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  }
  return;
}




/* from: drv:network_dpubi_dp.cpp
   addr: 0057E630 */

void __thiscall
arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_>::Reserve
          (arrVector<struct_netDP_REF_PTR<struct_IDirectPlay8Address>_> *this,int param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  
  if (*(int *)(this + 8) < param_1) {
    iVar4 = param_1;
    if (param_1 < *(int *)(this + 4)) {
      do {
        iVar1 = *(int *)this;
        piVar2 = *(int **)(iVar1 + iVar4 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *(undefined4 *)(iVar1 + iVar4 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 4));
      *(int *)(this + 4) = param_1;
    }
    pvVar3 = apRealloc(*(void **)this,param_1 * 4);
    *(void **)this = pvVar3;
    *(int *)(this + 8) = param_1;
  }
  return;
}

