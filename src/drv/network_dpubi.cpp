
/* from: drv:network_dpubi.cpp
   addr: 005769D0 */

netDRV_DPUBI * __thiscall netDRV_DPUBI::netDRV_DPUBI(netDRV_DPUBI *this)

{
  netDRV_DPUBI *pnVar1;
  HANDLE pvVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_84;
  undefined4 local_83 [32];
  
  netDRV::netDRV((netDRV *)this);
  pnVar1 = this + 0x1d6;
  *(undefined4 *)(this + 0xbe) = 0;
  *(undefined4 *)(this + 0xc6) = 0;
  *(undefined4 *)(this + 0xc2) = 0;
  *(undefined4 *)(this + 0x26e) = 0;
  *(undefined4 *)(this + 0x276) = 0;
  *(undefined4 *)(this + 0x272) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0xca) = 0;
  *(undefined4 *)(this + 0xce) = 0;
  this[0xd2] = (netDRV_DPUBI)0x0;
  this[0x112] = (netDRV_DPUBI)0x0;
  this[0x152] = (netDRV_DPUBI)0x0;
  this[0x192] = (netDRV_DPUBI)0x0;
  *(undefined4 *)(this + 0x1d2) = 0xffffffff;
  iVar3 = 2;
  do {
    *pnVar1 = (netDRV_DPUBI)0x0;
    pnVar1 = pnVar1 + 0x40;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(this + 0x25a) = 0;
  *(undefined4 *)(this + 0x25e) = 0;
  *(undefined4 *)(this + 0x262) = 0;
  *(undefined4 *)(this + 0x266) = 0;
  *(undefined4 *)(this + 0xae) = 0;
  *(undefined4 *)(this + 0xb2) = 0;
  *(undefined4 *)(this + 0xb6) = 0;
  *(undefined4 *)(this + 0xba) = 0;
  *(undefined4 *)(this + 0x256) = 0;
  local_84 = s_[0];
  puVar4 = local_83;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  InitializeSockets_4(&local_84);
  pvVar2 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)(this + 0x26a) = pvVar2;
  return this;
}




/* from: drv:network_dpubi.cpp
   addr: 00576AC0
   addr: 00576AC0 */

void * __thiscall netDRV_DPUBI::_vector_deleting_destructor_(netDRV_DPUBI *this,uint param_1)

{
  ~netDRV_DPUBI(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:network_dpubi.cpp
   addr: 00576AE0 */

void __thiscall netDRV_DPUBI::~netDRV_DPUBI(netDRV_DPUBI *this)

{
  netDP_SERVER *this_00;
  netDP_CLIENT *this_01;
  int iVar1;
  int local_4;
  
  *(undefined ***)this = &_vftable_;
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  iVar1 = 0;
  if (0 < *(int *)(this + 0x272)) {
    local_4 = 0;
    do {
      if (*(int *)(local_4 + *(int *)(this + 0x26e)) != 0) {
        ReleaseMutex(*(HANDLE *)(this + 0x26a));
        RemovePlayer(this,iVar1);
        WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
      }
      iVar1 = iVar1 + 1;
      local_4 = local_4 + 0x2c;
    } while (iVar1 < *(int *)(this + 0x272));
  }
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  netDRV::ProcessEvents((netDRV *)this,1);
  if (*(netDP_SERVER **)(this + 0xae) != (netDP_SERVER *)0x0) {
    netDP_SERVER::Shutdown(*(netDP_SERVER **)(this + 0xae));
    this_00 = *(netDP_SERVER **)(this + 0xae);
    if (this_00 != (netDP_SERVER *)0x0) {
      netDP_SERVER::~netDP_SERVER(this_00);
      operator_delete(this_00);
    }
  }
  if (*(int *)(this + 0xb2) != 0) {
    netDRV::ClearServersList((netDRV *)this);
    netDP_CLIENT::Shutdown(*(netDP_CLIENT **)(this + 0xb2));
    this_01 = *(netDP_CLIENT **)(this + 0xb2);
    if (this_01 != (netDP_CLIENT *)0x0) {
      netDP_CLIENT::~netDP_CLIENT(this_01);
      operator_delete(this_01);
    }
  }
  if (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0) {
    netUBI_SERVERREG::Shutdown(*(netUBI_SERVERREG **)(this + 0xb6));
    if (*(undefined4 **)(this + 0xb6) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0xb6))(1);
    }
  }
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    netUBI_CLIENT::Shutdown(*(netUBI_CLIENT **)(this + 0xba));
    if (*(int **)(this + 0xba) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xba) + 0x20))(1);
    }
  }
  UninitializeSockets_0();
  CloseHandle(*(HANDLE *)(this + 0x26a));
  apFree(*(void **)(this + 0x26e));
  apFree(*(void **)(this + 0xbe));
  netDRV::~netDRV((netDRV *)this);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00576C50 */

void __thiscall netDRV_DPUBI::Think(netDRV_DPUBI *this)

{
  netDP_SERVER *pnVar1;
  netUBI_SERVERREG *this_00;
  uint uVar2;
  netDP_CLIENT *pnVar3;
  netUBI_CLIENT *this_01;
  undefined4 uVar4;
  int *piVar5;
  arrVector<struct_netDRV_SERVER_INFO> *paVar6;
  int iVar7;
  netDRV_DPUBI *pnVar8;
  char *local_8 [2];
  
  switch(*(undefined4 *)(this + 0xca)) {
  case 0:
    break;
  case 1:
    if (*(int *)(this + 0xae) != 0) {
      (**(code **)(*(int *)this + 0x48))();
    }
    pnVar1 = (netDP_SERVER *)operator_new(0x14);
    if (pnVar1 == (netDP_SERVER *)0x0) {
      *(undefined4 *)(this + 0xae) = 0;
      netDP_SERVER::StartServer((netDP_SERVER *)0x0);
    }
    else {
      pnVar1 = (netDP_SERVER *)netDP_SERVER::netDP_SERVER(pnVar1,this);
      *(netDP_SERVER **)(this + 0xae) = pnVar1;
      netDP_SERVER::StartServer(pnVar1);
    }
    break;
  case 2:
    if (*(int *)(*(int *)(this + 0xae) + 8) == 0) {
      if (-1 < *(int *)(*(int *)(this + 0xae) + 0xc)) goto switchD_00576c6c_default;
      (**(code **)(*(int *)this + 0x48))();
    }
    break;
  case 3:
    this_00 = (netUBI_SERVERREG *)operator_new(0x16c);
    if (this_00 == (netUBI_SERVERREG *)0x0) {
      *(undefined4 *)(this + 0xb6) = 0;
    }
    else {
      uVar4 = netUBI_SERVERREG::netUBI_SERVERREG(this_00,this,*(int *)(this + 0x256));
      *(undefined4 *)(this + 0xb6) = uVar4;
    }
    break;
  case 4:
    iVar7 = netUBI_SERVERREG::IsConnected(*(netUBI_SERVERREG **)(this + 0xb6));
    if (iVar7 == 0) {
      iVar7 = netUBI_SERVERREG::IsError(*(netUBI_SERVERREG **)(this + 0xb6));
      if (iVar7 != 0) {
        (**(code **)(*(int *)this + 0x48))();
      }
      goto switchD_00576c6c_default;
    }
    break;
  case 5:
    *(undefined4 *)(this + 0x25e) = 1;
    break;
  case 6:
    netDRV::ClearServersList((netDRV *)this);
    break;
  case 7:
    if (*(netDP_CLIENT **)(this + 0xb2) != (netDP_CLIENT *)0x0) {
      netDP_CLIENT::DisconnectFromGame(*(netDP_CLIENT **)(this + 0xb2));
      netDP_CLIENT::StopBrowsing(*(netDP_CLIENT **)(this + 0xb2),0);
    }
    uVar2 = 0;
    pnVar8 = this + 0x1d6;
    do {
      local_8[uVar2] = (char *)pnVar8;
      uVar2 = uVar2 + 1;
      pnVar8 = pnVar8 + 0x40;
    } while (uVar2 < 2);
    pnVar3 = (netDP_CLIENT *)operator_new(0x3c);
    if (pnVar3 == (netDP_CLIENT *)0x0) {
      pnVar3 = (netDP_CLIENT *)0x0;
    }
    else {
      pnVar3 = (netDP_CLIENT *)netDP_CLIENT::netDP_CLIENT(pnVar3,this);
    }
    *(netDP_CLIENT **)(this + 0xb2) = pnVar3;
    netDP_CLIENT::StartBrowser(pnVar3,local_8,2);
    break;
  case 8:
    if (*(int *)(*(int *)(this + 0xb2) + 8) == 0) {
      if (*(int *)(*(int *)(this + 0xb2) + 0x10) < 0) {
        (**(code **)(*(int *)this + 0x78))(0);
      }
      goto switchD_00576c6c_default;
    }
    break;
  case 9:
    this_01 = (netUBI_CLIENT *)operator_new(0x138);
    if (this_01 == (netUBI_CLIENT *)0x0) {
      *(undefined4 *)(this + 0xba) = 0;
    }
    else {
      uVar4 = netUBI_CLIENT::netUBI_CLIENT(this_01,this);
      *(undefined4 *)(this + 0xba) = uVar4;
    }
    break;
  case 10:
    iVar7 = netUBI_CLIENT::IsConnected(*(netUBI_CLIENT **)(this + 0xba));
    if (iVar7 == 0) {
      iVar7 = netUBI_CLIENT::IsConnectError(*(netUBI_CLIENT **)(this + 0xba));
      if (iVar7 != 0) {
        (**(code **)(*(int *)this + 0x78))(0);
      }
      goto switchD_00576c6c_default;
    }
    break;
  case 0xb:
    pnVar3 = *(netDP_CLIENT **)(this + 0xb2);
    if (-1 < *(int *)(pnVar3 + 0x10)) {
      if (*(int *)(pnVar3 + 0x18) == 0) {
        netDP_CLIENT::EnumHosts(pnVar3,(char *)(this + 0xd2));
      }
      paVar6 = netDRV::LockServers((netDRV *)this);
      iVar7 = 0;
      if (*(int *)(paVar6 + 4) < 1) {
LAB_00576ed8:
        netDRV::UnlockServers((netDRV *)this);
      }
      else {
        piVar5 = (int *)(*(int *)paVar6 + 0x6c);
        do {
          if (*piVar5 == 0) {
            *(undefined4 *)(this + 0x1d2) = *(undefined4 *)(*(int *)paVar6 + iVar7 * 0x78);
            FinishAction(this);
            goto LAB_00576ed8;
          }
          iVar7 = iVar7 + 1;
          piVar5 = piVar5 + 0x1e;
        } while (iVar7 < *(int *)(paVar6 + 4));
        netDRV::UnlockServers((netDRV *)this);
      }
      goto switchD_00576c6c_default;
    }
    (**(code **)(*(int *)this + 0x90))();
    (**(code **)(*(int *)this + 0x78))(0);
    break;
  case 0xc:
    *(undefined4 *)(this + 0x262) = 1;
    (**(code **)(*(int *)this + 0x74))();
    break;
  case 0xd:
    paVar6 = netDRV::LockServers((netDRV *)this);
    iVar7 = netDRV::FindServerIdx((netDRV *)this,*(int *)(this + 0x1d2));
    netUBI_CLIENT::JoinGame
              (*(netUBI_CLIENT **)(this + 0xba),*(void **)(*(int *)paVar6 + 0x70 + iVar7 * 0x78));
    netDRV::UnlockServers((netDRV *)this);
    break;
  case 0xe:
    iVar7 = netUBI_CLIENT::IsJoined(*(netUBI_CLIENT **)(this + 0xba));
    if (iVar7 == 0) {
      iVar7 = netUBI_CLIENT::IsJoinError(*(netUBI_CLIENT **)(this + 0xba));
      if (iVar7 == 0) goto switchD_00576c6c_default;
      (**(code **)(*(int *)this + 0x90))();
    }
    break;
  case 0xf:
    paVar6 = netDRV::LockServers((netDRV *)this);
    iVar7 = netDRV::FindServerIdx((netDRV *)this,*(int *)(this + 0x1d2));
    netDP_CLIENT::JoinGame
              (*(netDP_CLIENT **)(this + 0xb2),
               *(netDP_SERVER_DATA **)(*(int *)paVar6 + 0x70 + iVar7 * 0x78),(char *)(this + 0xd2));
    netDRV::UnlockServers((netDRV *)this);
    break;
  case 0x10:
    if (*(int *)(*(int *)(this + 0xb2) + 0xc) == 0) {
      if (-1 < *(int *)(*(int *)(this + 0xb2) + 0x10)) goto switchD_00576c6c_default;
      (**(code **)(*(int *)this + 0x90))();
    }
    break;
  case 0x11:
    *(undefined4 *)(this + 0x266) = 1;
    break;
  default:
    goto switchD_00576c6c_default;
  }
  FinishAction(this);
switchD_00576c6c_default:
  netDRV::Think((netDRV *)this);
  if (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0) {
    if (*(int *)(this + 0x70) == 0) {
      netUBI_SERVERREG::UpdateGameInfo(*(netUBI_SERVERREG **)(this + 0xb6));
    }
    netUBI_SERVERREG::Think(*(netUBI_SERVERREG **)(this + 0xb6));
  }
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    netUBI_CLIENT::Think(*(netUBI_CLIENT **)(this + 0xba));
  }
  *(undefined4 *)(this + 0x70) = 1;
  if ((*(int *)(this + 0x25e) != 0) &&
     ((*(int *)(this + 0xae) == 0 || (*(int *)(*(int *)(this + 0xae) + 8) == 0)))) {
    *(undefined4 *)(this + 0x25e) = 0;
  }
  if (*(int *)(this + 0x262) != 0) {
    if (*(int *)(this + 0xce) == 0) {
      if ((*(int *)(this + 0xb2) == 0) || (*(int *)(*(int *)(this + 0xb2) + 8) == 0)) {
        (**(code **)(*(int *)this + 0x78))(0);
      }
    }
    else if ((*(netUBI_CLIENT **)(this + 0xba) == (netUBI_CLIENT *)0x0) ||
            (iVar7 = netUBI_CLIENT::IsConnected(*(netUBI_CLIENT **)(this + 0xba)), iVar7 == 0)) {
      (**(code **)(*(int *)this + 0x78))(0);
    }
  }
  if (*(int *)(this + 0x266) != 0) {
    if ((*(int *)(this + 0xb2) == 0) || (*(int *)(*(int *)(this + 0xb2) + 0xc) == 0)) {
      (**(code **)(*(int *)this + 0x90))();
    }
    if ((*(int *)(this + 0xce) != 0) &&
       (((*(netUBI_CLIENT **)(this + 0xba) == (netUBI_CLIENT *)0x0 ||
         (iVar7 = netUBI_CLIENT::IsJoined(*(netUBI_CLIENT **)(this + 0xba)), iVar7 == 0)) ||
        (iVar7 = netUBI_CLIENT::IsJoinError(*(netUBI_CLIENT **)(this + 0xba)), iVar7 != 0)))) {
      (**(code **)(*(int *)this + 0x90))();
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:network_dpubi.cpp
   addr: 00577120 */

float __thiscall netDRV_DPUBI::Drv_GetRefreshInterval(netDRV_DPUBI *this)

{
  if (*(int *)(this + 0xce) != 0) {
    return ___real_44160000;
  }
  return ___real_41700000;
}




/* from: drv:network_dpubi.cpp
   addr: 00577140 */

void __thiscall netDRV_DPUBI::Drv_Init(netDRV_DPUBI *this,netDRV_INIT *param_1)

{
  netDRV_DPUBI *pnVar1;
  int iVar2;
  
  netDRV::Drv_Init((netDRV *)this,param_1);
  iVar2 = *(int *)param_1;
  *(int *)(this + 0xce) = iVar2;
  if (iVar2 == 0) {
    this[0xd2] = (netDRV_DPUBI)0x0;
    this[0x112] = (netDRV_DPUBI)0x0;
    this[0x152] = (netDRV_DPUBI)0x0;
    this[0x192] = (netDRV_DPUBI)0x0;
  }
  else {
    strncpy((char *)(this + 0x152),*(char **)(param_1 + 4),0x40);
    this[0x191] = (netDRV_DPUBI)0x0;
    strncpy((char *)(this + 0x192),*(char **)(param_1 + 8),0x40);
    this[0x1d1] = (netDRV_DPUBI)0x0;
  }
  *(undefined4 *)(this + 0x1d2) = 0xffffffff;
  pnVar1 = this + 0x1d6;
  iVar2 = 2;
  do {
    *pnVar1 = (netDRV_DPUBI)0x0;
    pnVar1 = pnVar1 + 0x40;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(this + 0x25a) = 1;
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005771F0 */

void __thiscall netDRV_DPUBI::Drv_NotifyGameStarted(netDRV_DPUBI *this)

{
  int iVar1;
  
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    iVar1 = netUBI_CLIENT::IsJoined(*(netUBI_CLIENT **)(this + 0xba));
    if (iVar1 != 0) {
      netUBI_CLIENT::NotifyServerJoined(*(netUBI_CLIENT **)(this + 0xba));
    }
  }
  netDRV::Drv_NotifyGameStarted((netDRV *)this);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577230 */

void __thiscall netDRV_DPUBI::Server_Start(netDRV_DPUBI *this,netDRV_SERVER_CREATE *param_1)

{
  int iVar1;
  arrVector<void*> *this_00;
  undefined4 *puVar2;
  netDRV_SERVER_CREATE *pnVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pnVar3 = param_1;
  netDRV::Server_Start((netDRV *)this,param_1);
  strncpy((char *)(this + 0xd2),*(char **)(pnVar3 + 0x16),0x40);
  this[0x111] = (netDRV_DPUBI)0x0;
  strncpy((char *)(this + 0x112),*(char **)(pnVar3 + 0x1a),0x40);
  this[0x151] = (netDRV_DPUBI)0x0;
  if (*(int *)(this + 0xce) == 0) {
    *(undefined4 *)(this + 0x256) = 0;
  }
  else {
    *(undefined4 *)(this + 0x256) = *(undefined4 *)(pnVar3 + 0x12);
  }
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  arrVector<struct_netDRV_DPUBI_PLAYER>::Resize
            ((arrVector<struct_netDRV_DPUBI_PLAYER> *)(this + 0x26e),0);
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  this_00 = (arrVector<void*> *)(this + 0xbe);
  param_1 = (netDRV_SERVER_CREATE *)0x0;
  arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
  param_1 = (netDRV_SERVER_CREATE *)0x1;
  arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
  iVar5 = *(int *)(this + 0xc2);
  iVar1 = iVar5 + 1;
  if (*(int *)(this + 0xc6) < iVar1) {
    iVar4 = *(int *)(this + 0xc6) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    arrVector<int>::Reserve((arrVector<int> *)this_00,iVar4);
  }
  memmove((void *)(*(int *)this_00 + iVar1 * 4),(void *)(*(int *)this_00 + iVar5 * 4),
          (*(int *)(this + 0xc2) - iVar5) * 4);
  for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    puVar2 = (undefined4 *)(*(int *)this_00 + iVar5 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 2;
    }
  }
  *(int *)(this + 0xc2) = *(int *)(this + 0xc2) + 1;
  if (*(int *)(this + 0xce) != 0) {
    param_1 = (netDRV_SERVER_CREATE *)0x3;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    iVar5 = *(int *)(this + 0xc2);
    iVar1 = iVar5 + 1;
    if (*(int *)(this + 0xc6) < iVar1) {
      iVar4 = *(int *)(this + 0xc6) * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      arrVector<int>::Reserve((arrVector<int> *)this_00,iVar4);
    }
    memmove((void *)(*(int *)this_00 + iVar1 * 4),(void *)(*(int *)this_00 + iVar5 * 4),
            (*(int *)(this + 0xc2) - iVar5) * 4);
    for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
      puVar2 = (undefined4 *)(*(int *)this_00 + iVar5 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 4;
      }
    }
    *(int *)(this + 0xc2) = *(int *)(this + 0xc2) + 1;
  }
  iVar5 = *(int *)(this + 0xc2);
  iVar4 = *(int *)(this + 0xc6);
  iVar1 = iVar5 + 1;
  if (iVar4 < iVar1) {
    iVar6 = iVar4 * 2;
    if (iVar4 * 2 <= iVar1) {
      iVar6 = iVar1;
    }
    if (iVar4 < iVar6) {
      arrVector<class_uiAREA*>::Realloc((arrVector<class_uiAREA*> *)this_00,iVar6);
    }
  }
  memmove((void *)(*(int *)this_00 + iVar1 * 4),(void *)(*(int *)this_00 + iVar5 * 4),
          (*(int *)(this + 0xc2) - iVar5) * 4);
  for (; iVar5 < iVar1; iVar5 = iVar5 + 1) {
    puVar2 = (undefined4 *)(*(int *)this_00 + iVar5 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 5;
    }
  }
  *(int *)(this + 0xc2) = *(int *)(this + 0xc2) + 1;
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577440 */

int __thiscall netDRV_DPUBI::Server_IsError(netDRV_DPUBI *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0xae) != 0) && (*(int *)(*(int *)(this + 0xae) + 0xc) < 0)) {
    return 1;
  }
  if ((*(int *)(this + 0xce) != 0) &&
     (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0)) {
    iVar1 = netUBI_SERVERREG::IsError(*(netUBI_SERVERREG **)(this + 0xb6));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: drv:network_dpubi.cpp
   addr: 00577480 */

char * __thiscall netDRV_DPUBI::Server_GetStatus(netDRV_DPUBI *this)

{
  netDP_SERVER *pnVar1;
  char *pcVar2;
  int iVar3;
  
  pnVar1 = *(netDP_SERVER **)(this + 0xae);
  if ((pnVar1 != (netDP_SERVER *)0x0) && (*(int *)(pnVar1 + 0xc) < 0)) {
    pcVar2 = netDP_SERVER::GetErrorDesc(pnVar1);
    return pcVar2;
  }
  if ((*(int *)(this + 0xce) != 0) &&
     (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0)) {
    iVar3 = netUBI_SERVERREG::IsError(*(netUBI_SERVERREG **)(this + 0xb6));
    if (iVar3 != 0) {
      pcVar2 = netUBI_SERVERREG::GetErrorString(*(netUBI_SERVERREG **)(this + 0xb6));
      return pcVar2;
    }
  }
  pnVar1 = *(netDP_SERVER **)(this + 0xae);
  if ((pnVar1 != (netDP_SERVER *)0x0) && (*(int *)(pnVar1 + 8) == 0)) {
    pcVar2 = netDP_SERVER::GetStatusDesc(pnVar1);
    return pcVar2;
  }
  if ((*(int *)(this + 0xce) != 0) &&
     (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0)) {
    pcVar2 = netUBI_SERVERREG::GetStatusString(*(netUBI_SERVERREG **)(this + 0xb6));
    return pcVar2;
  }
  return s_Initializing_server;
}




/* from: drv:network_dpubi.cpp
   addr: 00577500 */

void __thiscall
netDRV_DPUBI::Server_SendToClient
          (netDRV_DPUBI *this,int param_1,void *param_2,int param_3,int param_4)

{
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x272))) {
    param_1 = *(int *)(*(int *)(this + 0x26e) + 0x28 + param_1 * 0x2c);
  }
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  netDP_SERVER::Send(*(netDP_SERVER **)(this + 0xae),param_1,param_2,param_3,param_4);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577570 */

void __thiscall netDRV_DPUBI::Server_Stop(netDRV_DPUBI *this)

{
  netDP_SERVER *this_00;
  int *piVar1;
  int iVar2;
  
  if (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0) {
    netUBI_SERVERREG::Shutdown(*(netUBI_SERVERREG **)(this + 0xb6));
    if (*(undefined4 **)(this + 0xb6) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0xb6))(1);
    }
    *(undefined4 *)(this + 0xb6) = 0;
  }
  if (*(netDP_SERVER **)(this + 0xae) != (netDP_SERVER *)0x0) {
    netDP_SERVER::StopServer(*(netDP_SERVER **)(this + 0xae));
    netDP_SERVER::Shutdown(*(netDP_SERVER **)(this + 0xae));
    this_00 = *(netDP_SERVER **)(this + 0xae);
    if (this_00 != (netDP_SERVER *)0x0) {
      netDP_SERVER::~netDP_SERVER(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)(this + 0xae) = 0;
  }
  if ((0 < *(int *)(this + 0xca)) && (*(int *)(this + 0xca) < 6)) {
    *(undefined4 *)(this + 0xca) = 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0xc2)) {
    piVar1 = *(int **)(this + 0xbe);
    do {
      if (*piVar1 == 0) break;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(this + 0xc2));
  }
  if (iVar2 != 0) {
    memmove(*(void **)(this + 0xbe),(void *)((int)*(void **)(this + 0xbe) + iVar2 * 4),
            (*(int *)(this + 0xc2) - iVar2) * 4);
    *(int *)(this + 0xc2) = *(int *)(this + 0xc2) - iVar2;
  }
  netDRV::ProcessEvents((netDRV *)this,1);
  *(undefined4 *)(this + 0x86) = 0;
  *(undefined4 *)(this + 0x25e) = 0;
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577660 */

void __thiscall netDRV_DPUBI::Server_StopLadder(netDRV_DPUBI *this)

{
  if (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0) {
    netUBI_SERVERREG::StopLadder(*(netUBI_SERVERREG **)(this + 0xb6));
    return;
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577670 */

void __thiscall netDRV_DPUBI::Server_ResetLadder(netDRV_DPUBI *this)

{
  if ((*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0) &&
     (*(int *)(this + 0x256) != 0)) {
    netUBI_SERVERREG::RestartLadder(*(netUBI_SERVERREG **)(this + 0xb6));
    return;
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577690 */

void __thiscall netDRV_DPUBI::Server_StartMatchData(netDRV_DPUBI *this)

{
  if (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0) {
    netUBI_SERVERREG::StartMatchData(*(netUBI_SERVERREG **)(this + 0xb6));
    return;
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005776A0 */

void __thiscall
netDRV_DPUBI::Server_SetMatchData(netDRV_DPUBI *this,char *param_1,int param_2,int param_3)

{
  if (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0) {
    netUBI_SERVERREG::SendMatchData(*(netUBI_SERVERREG **)(this + 0xb6),param_1,param_2,param_3);
    return;
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005776C0 */

void __thiscall netDRV_DPUBI::Server_FinishMatchData(netDRV_DPUBI *this)

{
  if (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0) {
    netUBI_SERVERREG::FinishMatchData(*(netUBI_SERVERREG **)(this + 0xb6));
    return;
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005776D0 */

int __thiscall netDRV_DPUBI::Server_GetMatchStatus(netDRV_DPUBI *this)

{
  int iVar1;
  
  if (*(netUBI_SERVERREG **)(this + 0xb6) != (netUBI_SERVERREG *)0x0) {
    iVar1 = netUBI_SERVERREG::GetMatchStatus(*(netUBI_SERVERREG **)(this + 0xb6));
    return iVar1;
  }
  return 0;
}




/* from: drv:network_dpubi.cpp
   addr: 005776F0 */

void __thiscall netDRV_DPUBI::Browser_Start(netDRV_DPUBI *this,netDRV_BROWSER_CREATE *param_1)

{
  arrVector<void*> *this_00;
  undefined4 *puVar1;
  netDRV_BROWSER_CREATE *pnVar2;
  netDRV_DPUBI *pnVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pnVar2 = param_1;
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  strncpy((char *)(this + 0xd2),*(char **)pnVar2,0x40);
  this[0x111] = (netDRV_DPUBI)0x0;
  strncpy((char *)(this + 0x112),*(char **)(pnVar2 + 4),0x40);
  this[0x151] = (netDRV_DPUBI)0x0;
  pnVar3 = this + 0x1d6;
  iVar5 = 2;
  do {
    *pnVar3 = (netDRV_DPUBI)0x0;
    pnVar3 = pnVar3 + 0x40;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  this_00 = (arrVector<void*> *)(this + 0xbe);
  *(undefined4 *)(this + 0x1d2) = 0xffffffff;
  param_1 = (netDRV_BROWSER_CREATE *)0x0;
  arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
  param_1 = (netDRV_BROWSER_CREATE *)0x6;
  arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
  if (*(int *)(this + 0xce) == 0) {
    param_1 = (netDRV_BROWSER_CREATE *)0x7;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    iVar6 = *(int *)(this + 0xc2);
    iVar5 = iVar6 + 1;
    if (*(int *)(this + 0xc6) < iVar5) {
      iVar4 = *(int *)(this + 0xc6) * 2;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      arrVector<int>::Reserve((arrVector<int> *)this_00,iVar4);
    }
    memmove((void *)(*(int *)this_00 + iVar5 * 4),(void *)(*(int *)this_00 + iVar6 * 4),
            (*(int *)(this + 0xc2) - iVar6) * 4);
    for (; iVar6 < iVar5; iVar6 = iVar6 + 1) {
      puVar1 = (undefined4 *)(*(int *)this_00 + iVar6 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 8;
      }
    }
  }
  else {
    param_1 = (netDRV_BROWSER_CREATE *)0x9;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    iVar6 = *(int *)(this + 0xc2);
    iVar5 = iVar6 + 1;
    if (*(int *)(this + 0xc6) < iVar5) {
      iVar4 = *(int *)(this + 0xc6) * 2;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      arrVector<int>::Reserve((arrVector<int> *)this_00,iVar4);
    }
    memmove((void *)(*(int *)this_00 + iVar5 * 4),(void *)(*(int *)this_00 + iVar6 * 4),
            (*(int *)(this + 0xc2) - iVar6) * 4);
    for (; iVar6 < iVar5; iVar6 = iVar6 + 1) {
      puVar1 = (undefined4 *)(*(int *)this_00 + iVar6 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 10;
      }
    }
  }
  iVar5 = *(int *)(this + 0xc2);
  iVar4 = iVar5 + 1;
  *(int *)(this + 0xc2) = iVar4;
  iVar6 = *(int *)(this + 0xc6);
  iVar5 = iVar5 + 2;
  if (iVar6 < iVar5) {
    iVar7 = iVar6 * 2;
    if (iVar6 * 2 <= iVar5) {
      iVar7 = iVar5;
    }
    if (iVar6 < iVar7) {
      arrVector<class_uiAREA*>::Realloc((arrVector<class_uiAREA*> *)this_00,iVar7);
    }
  }
  memmove((void *)(*(int *)this_00 + iVar5 * 4),(void *)(*(int *)this_00 + iVar4 * 4),
          (*(int *)(this + 0xc2) - iVar4) * 4);
  for (; iVar4 < iVar5; iVar4 = iVar4 + 1) {
    puVar1 = (undefined4 *)(*(int *)this_00 + iVar4 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xc;
    }
  }
  *(int *)(this + 0xc2) = *(int *)(this + 0xc2) + 1;
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005778F0 */

int __thiscall netDRV_DPUBI::Browser_IsError(netDRV_DPUBI *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0xb2) != 0) && (*(int *)(*(int *)(this + 0xb2) + 0x10) < 0)) {
    return 1;
  }
  if ((*(int *)(this + 0xce) != 0) && (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0)) {
    iVar1 = netUBI_CLIENT::IsConnectError(*(netUBI_CLIENT **)(this + 0xba));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: drv:network_dpubi.cpp
   addr: 00577930 */

char * __thiscall netDRV_DPUBI::Browser_GetStatus(netDRV_DPUBI *this)

{
  netDP_CLIENT *pnVar1;
  int iVar2;
  char *pcVar3;
  
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    iVar2 = netUBI_CLIENT::IsConnectError(*(netUBI_CLIENT **)(this + 0xba));
    if (iVar2 != 0) {
      pcVar3 = netUBI_CLIENT::GetConnectErrorString(*(netUBI_CLIENT **)(this + 0xba));
      return pcVar3;
    }
  }
  pnVar1 = *(netDP_CLIENT **)(this + 0xb2);
  if ((pnVar1 != (netDP_CLIENT *)0x0) && (*(int *)(pnVar1 + 0x10) < 0)) {
    pcVar3 = netDP_CLIENT::GetErrorDesc(pnVar1);
    return pcVar3;
  }
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    iVar2 = netUBI_CLIENT::IsConnected(*(netUBI_CLIENT **)(this + 0xba));
    if (iVar2 == 0) {
      pcVar3 = netUBI_CLIENT::GetStatusString(*(netUBI_CLIENT **)(this + 0xba));
      return pcVar3;
    }
  }
  pnVar1 = *(netDP_CLIENT **)(this + 0xb2);
  if ((pnVar1 != (netDP_CLIENT *)0x0) && (*(int *)(pnVar1 + 8) == 0)) {
    pcVar3 = netDP_CLIENT::GetStatusDesc(pnVar1);
    return pcVar3;
  }
  return s_Browser_started;
}




/* from: drv:network_dpubi.cpp
   addr: 005779B0 */

void __thiscall netDRV_DPUBI::Browser_RefreshServers(netDRV_DPUBI *this)

{
  if (*(int *)(this + 0xce) != 0) {
    netUBI_CLIENT::EnumServers(*(netUBI_CLIENT **)(this + 0xba));
    return;
  }
  netDP_CLIENT::EnumHosts(*(netDP_CLIENT **)(this + 0xb2),(char *)(this + 0xd2));
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005779E0 */

void __thiscall netDRV_DPUBI::Browser_Stop(netDRV_DPUBI *this,int param_1)

{
  netDP_CLIENT *this_00;
  int *piVar1;
  int iVar2;
  
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    netUBI_CLIENT::StopBrowsing(*(netUBI_CLIENT **)(this + 0xba),param_1);
  }
  if (*(netDP_CLIENT **)(this + 0xb2) != (netDP_CLIENT *)0x0) {
    netDP_CLIENT::StopBrowsing(*(netDP_CLIENT **)(this + 0xb2),param_1);
  }
  if (param_1 == 0) {
    netDRV::ClearServersList((netDRV *)this);
    if (*(netDP_CLIENT **)(this + 0xb2) != (netDP_CLIENT *)0x0) {
      netDP_CLIENT::Shutdown(*(netDP_CLIENT **)(this + 0xb2));
      this_00 = *(netDP_CLIENT **)(this + 0xb2);
      if (this_00 != (netDP_CLIENT *)0x0) {
        netDP_CLIENT::~netDP_CLIENT(this_00);
        operator_delete(this_00);
      }
      *(undefined4 *)(this + 0xb2) = 0;
    }
    if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
      netUBI_CLIENT::Shutdown(*(netUBI_CLIENT **)(this + 0xba));
      if (*(int **)(this + 0xba) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0xba) + 0x20))(1);
      }
      *(undefined4 *)(this + 0xba) = 0;
    }
  }
  if ((5 < *(int *)(this + 0xca)) && (*(int *)(this + 0xca) < 0xd)) {
    *(undefined4 *)(this + 0xca) = 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0xc2)) {
    piVar1 = *(int **)(this + 0xbe);
    do {
      if (*piVar1 == 0) break;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(this + 0xc2));
  }
  if (iVar2 != 0) {
    memmove(*(void **)(this + 0xbe),(void *)((int)*(void **)(this + 0xbe) + iVar2 * 4),
            (*(int *)(this + 0xc2) - iVar2) * 4);
    *(int *)(this + 0xc2) = *(int *)(this + 0xc2) - iVar2;
  }
  *(undefined4 *)(this + 0x262) = 0;
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577AE0 */

void __thiscall netDRV_DPUBI::Client_JoinGame(netDRV_DPUBI *this,netDRV_CLIENT_JOIN *param_1)

{
  arrVector<void*> *this_00;
  undefined4 *puVar1;
  netDRV_CLIENT_JOIN *pnVar2;
  netDRV_DPUBI *pnVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  pnVar2 = param_1;
  strncpy((char *)(this + 0xd2),*(char **)(param_1 + 8),0x40);
  this[0x111] = (netDRV_DPUBI)0x0;
  strncpy((char *)(this + 0x112),*(char **)(pnVar2 + 0xc),0x40);
  this[0x151] = (netDRV_DPUBI)0x0;
  netDRV::Client_JoinGame((netDRV *)this,pnVar2);
  iVar5 = 2;
  pnVar3 = this + 0x1d6;
  do {
    *pnVar3 = (netDRV_DPUBI)0x0;
    pnVar3 = pnVar3 + 0x40;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*(char **)(pnVar2 + 4) != (char *)0x0) {
    strncpy((char *)(this + 0x1d6),*(char **)(pnVar2 + 4),0x40);
    this[0x215] = (netDRV_DPUBI)0x0;
  }
  *(undefined4 *)(this + 0x1d2) = *(undefined4 *)pnVar2;
  if (*(netDP_CLIENT **)(this + 0xb2) != (netDP_CLIENT *)0x0) {
    netDP_CLIENT::DisconnectFromGame(*(netDP_CLIENT **)(this + 0xb2));
  }
  this_00 = (arrVector<void*> *)(this + 0xbe);
  param_1 = (netDRV_CLIENT_JOIN *)0x0;
  arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
  if (*(int *)(this + 0xce) == 0) {
    if (*(int *)(this + 0x1d2) == -1) {
      param_1 = (netDRV_CLIENT_JOIN *)0x6;
      arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
      param_1 = (netDRV_CLIENT_JOIN *)0x7;
      arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
      param_1 = (netDRV_CLIENT_JOIN *)0x8;
      arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
      param_1 = (netDRV_CLIENT_JOIN *)0xb;
      arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    }
    param_1 = (netDRV_CLIENT_JOIN *)0xf;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    iVar5 = *(int *)(this + 0xc2);
  }
  else {
    param_1 = (netDRV_CLIENT_JOIN *)0xd;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    param_1 = (netDRV_CLIENT_JOIN *)0xe;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    param_1 = (netDRV_CLIENT_JOIN *)0x6;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    param_1 = (netDRV_CLIENT_JOIN *)0x7;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    param_1 = (netDRV_CLIENT_JOIN *)0x8;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    param_1 = (netDRV_CLIENT_JOIN *)0xb;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    param_1 = (netDRV_CLIENT_JOIN *)0xf;
    arrVector<void*>::Insert(this_00,*(int *)(this + 0xc2),&param_1,1);
    iVar5 = *(int *)(this + 0xc2);
  }
  param_1 = (netDRV_CLIENT_JOIN *)0x10;
  arrVector<void*>::Insert(this_00,iVar5,&param_1,1);
  iVar6 = *(int *)(this + 0xc2);
  iVar5 = iVar6 + 1;
  if (*(int *)(this + 0xc6) < iVar5) {
    iVar4 = *(int *)(this + 0xc6) * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    arrVector<int>::Reserve((arrVector<int> *)this_00,iVar4);
  }
  memmove((void *)(*(int *)this_00 + iVar5 * 4),(void *)(*(int *)this_00 + iVar6 * 4),
          (*(int *)(this + 0xc2) - iVar6) * 4);
  for (; iVar6 < iVar5; iVar6 = iVar6 + 1) {
    puVar1 = (undefined4 *)(*(int *)this_00 + iVar6 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 6;
    }
  }
  iVar5 = *(int *)(this + 0xc2);
  *(int *)(this + 0xc2) = iVar5 + 1;
  param_1 = (netDRV_CLIENT_JOIN *)0x11;
  arrVector<void*>::Insert(this_00,iVar5 + 1,&param_1,1);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577D90 */

int __thiscall netDRV_DPUBI::Client_IsError(netDRV_DPUBI *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0xb2) != 0) && (*(int *)(*(int *)(this + 0xb2) + 0x10) < 0)) {
    return 1;
  }
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    iVar1 = netUBI_CLIENT::IsJoinError(*(netUBI_CLIENT **)(this + 0xba));
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}




/* from: drv:network_dpubi.cpp
   addr: 00577DD0 */

char * __thiscall netDRV_DPUBI::Client_GetStatus(netDRV_DPUBI *this)

{
  netDP_CLIENT *this_00;
  int iVar1;
  char *pcVar2;
  
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    iVar1 = netUBI_CLIENT::IsJoinError(*(netUBI_CLIENT **)(this + 0xba));
    if (iVar1 != 0) {
      pcVar2 = netUBI_CLIENT::GetJoinErrorString(*(netUBI_CLIENT **)(this + 0xba));
      return pcVar2;
    }
  }
  this_00 = *(netDP_CLIENT **)(this + 0xb2);
  if ((this_00 != (netDP_CLIENT *)0x0) && (*(int *)(this_00 + 0x10) < 0)) {
    pcVar2 = netDP_CLIENT::GetErrorDesc(this_00);
    return pcVar2;
  }
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    iVar1 = netUBI_CLIENT::IsJoined(*(netUBI_CLIENT **)(this + 0xba));
    if (iVar1 == 0) {
      pcVar2 = netUBI_CLIENT::GetStatusString(*(netUBI_CLIENT **)(this + 0xba));
      return pcVar2;
    }
  }
  if (*(netDP_CLIENT **)(this + 0xb2) != (netDP_CLIENT *)0x0) {
    pcVar2 = netDP_CLIENT::GetStatusDesc(*(netDP_CLIENT **)(this + 0xb2));
    return pcVar2;
  }
  return s_;
}




/* from: drv:network_dpubi.cpp
   addr: 00577E50 */

void __thiscall netDRV_DPUBI::Client_DisconnectFromGame(netDRV_DPUBI *this)

{
  int *piVar1;
  int iVar2;
  
  if (*(netDP_CLIENT **)(this + 0xb2) != (netDP_CLIENT *)0x0) {
    netDP_CLIENT::DisconnectFromGame(*(netDP_CLIENT **)(this + 0xb2));
  }
  if (*(netUBI_CLIENT **)(this + 0xba) != (netUBI_CLIENT *)0x0) {
    netUBI_CLIENT::DisconnectFromGame(*(netUBI_CLIENT **)(this + 0xba));
  }
  iVar2 = *(int *)(this + 0xca);
  if ((((0xc < iVar2) && (iVar2 < 0x12)) || (iVar2 == 6)) || (iVar2 == 0xb)) {
    *(undefined4 *)(this + 0xca) = 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(this + 0xc2)) {
    piVar1 = *(int **)(this + 0xbe);
    do {
      if (*piVar1 == 0) break;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < *(int *)(this + 0xc2));
  }
  if (iVar2 != 0) {
    memmove(*(void **)(this + 0xbe),(void *)((int)*(void **)(this + 0xbe) + iVar2 * 4),
            (*(int *)(this + 0xc2) - iVar2) * 4);
    *(int *)(this + 0xc2) = *(int *)(this + 0xc2) - iVar2;
  }
  netDRV::ProcessEvents((netDRV *)this,1);
  *(undefined4 *)(this + 0x86) = 0;
  *(undefined4 *)(this + 0x266) = 0;
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577F10 */

int __thiscall
netDRV_DPUBI::IsServersEqual
          (netDRV_DPUBI *this,netDRV_SERVER_INFO *param_1,netDRV_SERVER_INFO *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 != *(int *)(param_2 + 0x6c)) {
    return 0;
  }
  if (iVar1 == 0) {
    iVar1 = netDP_CLIENT::IsServersEqual
                      (*(netDP_CLIENT **)(this + 0xb2),*(netDP_SERVER_DATA **)(param_1 + 0x70),
                       *(netDP_SERVER_DATA **)(param_2 + 0x70));
    return iVar1;
  }
  if (iVar1 == 1) {
    iVar1 = netUBI_CLIENT::IsServersEqual
                      (*(netUBI_CLIENT **)(this + 0xba),*(void **)(param_1 + 0x70),
                       *(void **)(param_2 + 0x70));
    return iVar1;
  }
  return 1;
}




/* from: drv:network_dpubi.cpp
   addr: 00577F70 */

void __thiscall netDRV_DPUBI::OnServerDelete(netDRV_DPUBI *this,netDRV_SERVER_INFO *param_1)

{
  if (*(int *)(param_1 + 0x6c) == 0) {
    netDP_CLIENT::OnServerDelete
              (*(netDP_CLIENT **)(this + 0xb2),*(netDP_SERVER_DATA **)(param_1 + 0x70));
    *(undefined4 *)(this + 0x82) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x6c) == 1) {
    netUBI_CLIENT::OnServerDelete(*(netUBI_CLIENT **)(this + 0xba),*(void **)(param_1 + 0x70));
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00577FC0 */

void __thiscall netDRV_DPUBI::FinishAction(netDRV_DPUBI *this)

{
  int iVar1;
  undefined4 *_Dst;
  bool bVar2;
  
  bVar2 = false;
  if ((0 < *(int *)(this + 0xca)) && (*(int *)(this + 0xca) < 6)) {
    netDRV::AddEvent((netDRV *)this,2,-1,(void *)0x0,0);
    bVar2 = true;
  }
  if ((5 < *(int *)(this + 0xca)) && (*(int *)(this + 0xca) < 0xd)) {
    netDRV::AddEvent((netDRV *)this,6,-1,(void *)0x0,0);
    bVar2 = true;
  }
  iVar1 = *(int *)(this + 0xca);
  if ((((iVar1 < 0xd) || (0x11 < iVar1)) && (iVar1 != 6)) && (iVar1 != 0xb)) {
    if (bVar2) goto LAB_00578054;
    netDRV::AddEvent((netDRV *)this,2,-1,(void *)0x0,0);
    netDRV::AddEvent((netDRV *)this,6,-1,(void *)0x0,0);
  }
  netDRV::AddEvent((netDRV *)this,7,-1,(void *)0x0,0);
LAB_00578054:
  *(undefined4 *)(this + 0xca) = 0;
  if (*(int *)(this + 0xc2) != 0) {
    _Dst = *(undefined4 **)(this + 0xbe);
    *(undefined4 *)(this + 0xca) = *_Dst;
    memmove(_Dst,_Dst + 1,*(int *)(this + 0xc2) * 4 - 4);
    *(int *)(this + 0xc2) = *(int *)(this + 0xc2) + -1;
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005780A0 */

int __thiscall netDRV_DPUBI::FindDPlayPlayerPre(netDRV_DPUBI *this,char *param_1)

{
  netDRV_DPUBI nVar1;
  byte bVar2;
  netDRV_DPUBI *pnVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  netDRV_DPUBI *pnVar9;
  byte *pbVar10;
  int iVar11;
  bool bVar12;
  
  pnVar3 = this + 0xd2;
  pnVar9 = (netDRV_DPUBI *)param_1;
  do {
    nVar1 = *pnVar3;
    bVar12 = (byte)nVar1 < (byte)*pnVar9;
    if (nVar1 != *pnVar9) {
LAB_005780da:
      iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_005780df;
    }
    if (nVar1 == (netDRV_DPUBI)0x0) break;
    nVar1 = pnVar3[1];
    bVar12 = (byte)nVar1 < (byte)pnVar9[1];
    if (nVar1 != pnVar9[1]) goto LAB_005780da;
    pnVar3 = pnVar3 + 2;
    pnVar9 = pnVar9 + 2;
  } while (nVar1 != (netDRV_DPUBI)0x0);
  iVar4 = 0;
LAB_005780df:
  if (iVar4 == 0) {
    return -2;
  }
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  iVar4 = *(int *)(this + 0x272);
  iVar11 = 0;
  if (0 < iVar4) {
    pbVar7 = *(byte **)(this + 0x26e);
    pbVar8 = pbVar7 + 4;
    do {
      pbVar5 = pbVar8;
      pbVar10 = (byte *)param_1;
      if ((*pbVar7 & 3) != 0) {
        do {
          bVar2 = *pbVar5;
          bVar12 = bVar2 < *pbVar10;
          if (bVar2 != *pbVar10) {
LAB_0057814c:
            iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_00578151;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar12 = bVar2 < pbVar10[1];
          if (bVar2 != pbVar10[1]) goto LAB_0057814c;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_00578151:
        if (iVar6 == 0) break;
      }
      iVar11 = iVar11 + 1;
      pbVar7 = pbVar7 + 0x2c;
      pbVar8 = pbVar8 + 0x2c;
    } while (iVar11 < iVar4);
  }
  if (iVar4 <= iVar11) {
    ReleaseMutex(*(HANDLE *)(this + 0x26a));
    return -1;
  }
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  return iVar11;
}




/* from: drv:network_dpubi.cpp
   addr: 005781A0 */

int __thiscall netDRV_DPUBI::AddDPlayPlayer_Pre(netDRV_DPUBI *this,char *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  code *pcVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_2c [11];
  
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  if (*(int *)(this + 0xce) == 0) {
    iVar4 = *(int *)(this + 0x272);
    iVar11 = 0;
    if (0 < iVar4) {
      piVar7 = *(int **)(this + 0x26e);
      pbVar8 = (byte *)(piVar7 + 1);
      do {
        if (*piVar7 == 0) break;
        pbVar5 = (byte *)param_1;
        pbVar3 = pbVar8;
        if (*piVar7 == 1) {
          do {
            bVar2 = *pbVar5;
            bVar12 = bVar2 < *pbVar3;
            if (bVar2 != *pbVar3) {
LAB_00578319:
              iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_0057831e;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar5[1];
            bVar12 = bVar2 < pbVar3[1];
            if (bVar2 != pbVar3[1]) goto LAB_00578319;
            pbVar5 = pbVar5 + 2;
            pbVar3 = pbVar3 + 2;
          } while (bVar2 != 0);
          iVar6 = 0;
LAB_0057831e:
          if (iVar6 == 0) break;
        }
        iVar11 = iVar11 + 1;
        piVar7 = piVar7 + 0xb;
        pbVar8 = pbVar8 + 0x2c;
      } while (iVar11 < iVar4);
    }
    if (iVar11 == iVar4) {
      local_2c[0] = 0;
      arrVector<struct_netDRV_DPUBI_PLAYER>::Insert
                ((arrVector<struct_netDRV_DPUBI_PLAYER> *)(this + 0x26e),iVar4,
                 (netDRV_DPUBI_PLAYER *)local_2c,1);
    }
    iVar4 = iVar11 * 0x2c;
    *(uint *)(*(int *)(this + 0x26e) + iVar4) = *(uint *)(*(int *)(this + 0x26e) + iVar4) | 1;
    strncpy((char *)(*(int *)(this + 0x26e) + 4 + iVar4),param_1,0x24);
    *(undefined1 *)(*(int *)(this + 0x26e) + 0x27 + iVar4) = 0;
    pcVar10 = ReleaseMutex_exref;
LAB_005783a1:
    (*pcVar10)(*(undefined4 *)(this + 0x26a));
    return iVar11;
  }
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  pcVar10 = ReleaseMutex_exref;
  iVar11 = 0;
  if (0 < *(int *)(this + 0x272)) {
    pbVar5 = *(byte **)(this + 0x26e);
    pbVar8 = pbVar5 + 4;
    do {
      pbVar3 = pbVar8;
      pbVar9 = (byte *)param_1;
      if ((*pbVar5 & 4) != 0) {
        do {
          bVar2 = *pbVar3;
          bVar12 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_00578225:
            iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_0057822a;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar12 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_00578225;
          pbVar3 = pbVar3 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_0057822a:
        if (iVar4 == 0) {
          ReleaseMutex(*(HANDLE *)(this + 0x26a));
          if (iVar11 == -1) {
            ReleaseMutex(*(HANDLE *)(this + 0x26a));
            return -1;
          }
          puVar1 = (uint *)(*(int *)(this + 0x26e) + iVar11 * 0x2c);
          if ((*puVar1 & 2) != 0) {
            ReleaseMutex(*(HANDLE *)(this + 0x26a));
            return -1;
          }
          *puVar1 = *puVar1 | 1;
          goto LAB_005783a1;
        }
      }
      iVar11 = iVar11 + 1;
      pbVar5 = pbVar5 + 0x2c;
      pbVar8 = pbVar8 + 0x2c;
    } while (iVar11 < *(int *)(this + 0x272));
  }
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  return -1;
}




/* from: drv:network_dpubi.cpp
   addr: 005783C0 */

int __thiscall netDRV_DPUBI::AddDPlayPlayer_Fin(netDRV_DPUBI *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  if ((-1 < param_2) && (param_2 < *(int *)(this + 0x272))) {
    iVar2 = param_2 * 0x2c;
    uVar1 = *(uint *)(*(int *)(this + 0x26e) + iVar2);
    if (((uVar1 & 1) != 0) && ((uVar1 & 2) == 0)) {
      *(uint *)(*(int *)(this + 0x26e) + iVar2) = uVar1 | 2;
      *(int *)(*(int *)(this + 0x26e) + 0x28 + iVar2) = param_1;
      ReleaseMutex(*(HANDLE *)(this + 0x26a));
      netDRV::AddEvent((netDRV *)this,3,param_2,(void *)0x0,0);
      return param_2;
    }
  }
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  netDP_SERVER::DisconnectPlayer(*(netDP_SERVER **)(this + 0xae),param_1);
  return -1;
}




/* from: drv:network_dpubi.cpp
   addr: 00578460 */

int __thiscall netDRV_DPUBI::AddUbiPlayer(netDRV_DPUBI *this,char *param_1)

{
  arrVector<struct_netDRV_DPUBI_PLAYER> *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_2c [11];
  
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  iVar3 = *(int *)(this + 0x272);
  this_00 = (arrVector<struct_netDRV_DPUBI_PLAYER> *)(this + 0x26e);
  iVar2 = 0;
  if (0 < iVar3) {
    piVar1 = *(int **)this_00;
    do {
      if (*piVar1 == 0) break;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xb;
    } while (iVar2 < iVar3);
  }
  if (iVar2 == iVar3) {
    auStack_2c[0] = 0;
    arrVector<struct_netDRV_DPUBI_PLAYER>::Insert(this_00,iVar3,(netDRV_DPUBI_PLAYER *)auStack_2c,1)
    ;
  }
  iVar3 = iVar2 * 0x2c;
  *(uint *)(*(int *)this_00 + iVar3) = *(uint *)(*(int *)this_00 + iVar3) | 4;
  strncpy((char *)(*(int *)this_00 + 4 + iVar3),param_1,0x24);
  *(undefined1 *)(*(int *)this_00 + 0x27 + iVar3) = 0;
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  return iVar2;
}




/* from: drv:network_dpubi.cpp
   addr: 00578510 */

void __thiscall netDRV_DPUBI::RemovePlayer(netDRV_DPUBI *this,int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  char acStack_100 [255];
  undefined1 uStack_1;
  
  if (param_1 != -1) {
    WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
    if ((param_1 < 0) || (*(int *)(this + 0x272) <= param_1)) {
      ReleaseMutex(*(HANDLE *)(this + 0x26a));
    }
    else {
      iVar2 = param_1 * 0x2c;
      puVar3 = (uint *)(*(int *)(this + 0x26e) + iVar2);
      if (((*puVar3 & 4) != 0) && (*puVar3 = *puVar3 & 0xfffffffb, *(int *)(this + 0xb6) != 0)) {
        strncpy(acStack_100,(char *)(puVar3 + 1),0x100);
        uStack_1 = 0;
        ReleaseMutex(*(HANDLE *)(this + 0x26a));
        netUBI_SERVERREG::NotifyClientLeave(*(netUBI_SERVERREG **)(this + 0xb6),acStack_100);
        WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
        puVar3 = (uint *)(*(int *)(this + 0x26e) + iVar2);
      }
      if ((*puVar3 & 2) == 0) {
        bVar1 = false;
      }
      else {
        *puVar3 = *puVar3 & 0xfffffffd;
        if (*(int *)(this + 0xae) != 0) {
          *puVar3 = 0;
          ReleaseMutex(*(HANDLE *)(this + 0x26a));
          netDP_SERVER::DisconnectPlayer(*(netDP_SERVER **)(this + 0xae),puVar3[10]);
          WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
          puVar3 = (uint *)(*(int *)(this + 0x26e) + iVar2);
        }
        bVar1 = true;
      }
      *puVar3 = 0;
      ReleaseMutex(*(HANDLE *)(this + 0x26a));
      netDRV::EraseClientEvents((netDRV *)this,param_1);
      if (bVar1) {
        netDRV::AddEvent((netDRV *)this,4,param_1,(void *)0x0,0);
        return;
      }
    }
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00578690 */

void __thiscall netDRV_DPUBI::Dp_Server_FillAppDesc(netDRV_DPUBI *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  netDP_CLIENT::CharToWChar((char *)(this + 0x14),(ushort *)&apBuffer,0x800);
  *(undefined4 *)param_1 = 0x48;
  *(undefined4 *)((int)param_1 + 4) = 1;
  *(undefined4 *)((int)param_1 + 0x18) = DAT_005df0dc;
  *(undefined4 *)((int)param_1 + 0x1c) = DAT_005df0e0;
  *(undefined4 *)((int)param_1 + 0x20) = DAT_005df0e4;
  *(undefined4 *)((int)param_1 + 0x24) = DAT_005df0e8;
  *(undefined4 *)((int)param_1 + 0x28) = *(undefined4 *)(this + 0x54);
  *(char ***)((int)param_1 + 0x30) = &apBuffer;
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00578700 */

int __thiscall
netDRV_DPUBI::Dp_Server_OnQuery(netDRV_DPUBI *this,char *param_1,void **param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  if (*(int *)(this + 0xce) == 0) {
LAB_005787d2:
    *param_2 = *(void **)(this + 0x58);
    *param_3 = *(int *)(this + 0x5c);
    return 1;
  }
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  iVar5 = 0;
  if (0 < *(int *)(this + 0x272)) {
    pbVar4 = *(byte **)(this + 0x26e);
    pbVar7 = pbVar4 + 4;
    do {
      pbVar2 = pbVar7;
      pbVar6 = (byte *)param_1;
      if ((*pbVar4 & 4) != 0) {
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00578775:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_0057877a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00578775;
          pbVar2 = pbVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_0057877a:
        if (iVar3 == 0) {
          ReleaseMutex(*(HANDLE *)(this + 0x26a));
          if (iVar5 != -1) goto LAB_005787d2;
          goto LAB_005787b2;
        }
      }
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 0x2c;
      pbVar7 = pbVar7 + 0x2c;
    } while (iVar5 < *(int *)(this + 0x272));
  }
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
LAB_005787b2:
  *param_2 = (void *)0x0;
  *param_3 = 0;
  return 0;
}




/* from: drv:network_dpubi.cpp
   addr: 00578800 */

int __thiscall
netDRV_DPUBI::Dp_Server_OnConnectionAttempt(netDRV_DPUBI *this,char *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FindDPlayPlayerPre(this,param_1);
  if (iVar1 != -1) {
    return 0;
  }
  uVar2 = AddDPlayPlayer_Pre(this,param_1);
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  *param_2 = uVar2;
  return 1;
}




/* from: drv:network_dpubi.cpp
   addr: 00578850 */

void __thiscall netDRV_DPUBI::Dp_Server_OnPlayerDisconnected(netDRV_DPUBI *this,int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  iVar1 = *(int *)(this + 0x272);
  iVar3 = 0;
  if (0 < iVar1) {
    pbVar2 = *(byte **)(this + 0x26e);
    do {
      if (((*pbVar2 & 2) != 0) && (*(int *)(pbVar2 + 0x28) == param_1)) break;
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 0x2c;
    } while (iVar3 < iVar1);
  }
  if (iVar3 < iVar1) {
    ReleaseMutex(*(HANDLE *)(this + 0x26a));
    RemovePlayer(this,iVar3);
    return;
  }
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  RemovePlayer(this,-1);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005788D0 */

void __thiscall
netDRV_DPUBI::Dp_Server_OnDataReceived(netDRV_DPUBI *this,int param_1,void *param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  iVar1 = *(int *)(this + 0x272);
  iVar3 = 0;
  if (0 < iVar1) {
    pbVar2 = *(byte **)(this + 0x26e);
    do {
      if (((*pbVar2 & 2) != 0) && (*(int *)(pbVar2 + 0x28) == param_1)) break;
      iVar3 = iVar3 + 1;
      pbVar2 = pbVar2 + 0x2c;
    } while (iVar3 < iVar1);
  }
  if (iVar3 < iVar1) {
    ReleaseMutex(*(HANDLE *)(this + 0x26a));
    if (iVar3 != -1) {
      netDRV::AddEvent((netDRV *)this,5,iVar3,param_2,param_3);
    }
    return;
  }
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00578950 */

void __thiscall netDRV_DPUBI::Dp_Client_FillAppDesc(netDRV_DPUBI *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)param_1 = 0x48;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = DAT_005df0dc;
  *(undefined4 *)((int)param_1 + 0x1c) = DAT_005df0e0;
  *(undefined4 *)((int)param_1 + 0x20) = DAT_005df0e4;
  *(undefined4 *)((int)param_1 + 0x24) = DAT_005df0e8;
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* from: drv:network_dpubi.cpp
   addr: 005789A0 */

void __thiscall netDRV_DPUBI::Dp_Client_OnServerFound(netDRV_DPUBI *this,netDP_NEW_SERVER *param_1)

{
  arrVector<char> *this_00;
  int *piVar1;
  uchar *puVar2;
  arrVector<struct_netDRV_SERVER_INFO> *this_01;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  int *piVar9;
  uchar *puVar10;
  int local_78;
  char local_74 [63];
  undefined1 local_35;
  int local_34;
  int local_30;
  int local_2c;
  uchar *local_28;
  uchar *local_24;
  int local_20;
  void *apvStack_1c [3];
  int iStack_10;
  int local_c [3];
  
  netDRV_SERVER_INFO::netDRV_SERVER_INFO((netDRV_SERVER_INFO *)&local_78);
  strncpy(local_74,(char *)param_1,0x40);
  local_34 = *(int *)(param_1 + 0x40);
  local_30 = *(int *)(param_1 + 0x44);
  local_2c = *(int *)(param_1 + 0x48);
  local_c[1] = *(int *)(param_1 + 0x54);
  local_c[2] = *(int *)(this + 0x7a);
  local_35 = 0;
  local_c[0] = 0;
  arrVector<char>::Resize((arrVector<char> *)&local_28,0);
  puVar10 = *(uchar **)(param_1 + 0x4c);
  puVar8 = puVar10 + (*(int *)(param_1 + 0x50) - (int)puVar10);
  if (puVar8 != (uchar *)0x0) {
    puVar2 = local_24 + (int)puVar8;
    if (local_20 < (int)puVar2) {
      if ((int)puVar2 < local_20 * 2) {
        puVar2 = (uchar *)(local_20 * 2);
      }
      if (local_20 < (int)puVar2) {
        arrVector<unsigned_char>::Realloc((arrVector<unsigned_char> *)&local_28,(int)puVar2);
      }
    }
    memmove(puVar8 + (int)local_28,local_28,(size_t)local_24);
    iVar6 = 0;
    if (0 < (int)puVar8) {
      do {
        if (local_28 + iVar6 != (uchar *)0x0) {
          local_28[iVar6] = *puVar10;
        }
        puVar10 = puVar10 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)puVar8);
    }
    local_24 = local_24 + (int)puVar8;
  }
  this_01 = netDRV::LockServers((netDRV *)this);
  iVar6 = 0;
  if (0 < *(int *)(this_01 + 4)) {
    iVar7 = 0;
    do {
      if (*(int *)(*(int *)this_01 + iVar7 + 0x6c) == 0) {
        iVar3 = (**(code **)(*(int *)this + 0x94))(*(int *)this_01 + iVar7,&local_78);
        if (iVar3 != 0) break;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x78;
    } while (iVar6 < *(int *)(this_01 + 4));
  }
  if (iVar6 < *(int *)(this_01 + 4)) {
    iVar6 = iVar6 * 0x78;
    local_78 = *(int *)(iVar6 + *(int *)this_01);
    (**(code **)(*(int *)this + 0x98))(*(int *)this_01 + iVar6);
    piVar9 = (int *)(*(int *)this_01 + iVar6);
    *piVar9 = local_78;
    piVar4 = piVar9 + 1;
    do {
      *(char *)piVar4 = (local_74 + (-4 - (int)piVar9))[(int)piVar4];
      piVar4 = (int *)((int)piVar4 + 1);
    } while ((undefined1 *)((-4 - (int)piVar9) + (int)piVar4) < (undefined1 *)0x40);
    this_00 = (arrVector<char> *)(piVar9 + 0x14);
    piVar9[0x11] = local_34;
    piVar9[0x12] = local_30;
    piVar9[0x13] = local_2c;
    arrVector<char>::Resize(this_00,0);
    if ((uchar *)piVar9[0x16] != local_24) {
      arrVector<unsigned_char>::Realloc((arrVector<unsigned_char> *)this_00,piVar9[0x15]);
    }
    arrVector<unsigned_char>::Insert
              ((arrVector<unsigned_char> *)this_00,0,local_28,local_28 + (int)local_24);
    arrVector<unsigned_char>::operator=
              ((arrVector<unsigned_char> *)(piVar9 + 0x17),(arrVector<unsigned_char> *)apvStack_1c);
    uVar5 = 0;
    piVar9[0x1a] = iStack_10;
    piVar4 = piVar9 + 0x1b;
    do {
      piVar1 = local_c + uVar5;
      uVar5 = uVar5 + 1;
      *piVar4 = *piVar1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < 2);
    piVar9[0x1d] = local_c[2];
  }
  else {
    local_78 = netDRV::NewServerId((netDRV *)this);
    iVar7 = *(int *)(this_01 + 4);
    iVar6 = iVar7 + 1;
    if (*(int *)(this_01 + 8) < iVar6) {
      iVar3 = *(int *)(this_01 + 8) * 2;
      if (iVar3 <= iVar6) {
        iVar3 = iVar6;
      }
      arrVector<struct_netDRV_SERVER_INFO>::Reserve(this_01,iVar3);
    }
    iVar3 = iVar7 * 0x78;
    memmove((void *)(*(int *)this_01 + iVar6 * 0x78),(void *)(iVar3 + *(int *)this_01),
            *(int *)(this_01 + 4) * 0x78 + iVar7 * -0x78);
    if (iVar7 < iVar6) {
      iVar6 = iVar6 - iVar7;
      do {
        if ((netDRV_SERVER_INFO *)(*(int *)this_01 + iVar3) != (netDRV_SERVER_INFO *)0x0) {
          netDRV_SERVER_INFO::netDRV_SERVER_INFO
                    ((netDRV_SERVER_INFO *)(*(int *)this_01 + iVar3),(netDRV_SERVER_INFO *)&local_78
                    );
        }
        iVar3 = iVar3 + 0x78;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 1;
  }
  *(undefined4 *)(this + 0x82) = 1;
  netDRV::UnlockServers((netDRV *)this);
  apFree(apvStack_1c[0]);
  apFree(local_28);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00578C40 */

void __thiscall netDRV_DPUBI::Dp_Client_OnServerEnumEnd(netDRV_DPUBI *this)

{
  arrVector<struct_netDRV_SERVER_INFO> *paVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int iStack_10;
  int iStack_8;
  int local_4;
  
  paVar1 = netDRV::LockServers((netDRV *)this);
  local_4 = 0;
  if (0 < *(int *)(paVar1 + 4)) {
    iVar3 = 0;
    local_14 = 1;
    iVar4 = 0x78;
    do {
      iVar2 = *(int *)paVar1 + iVar3;
      if (*(int *)(iVar2 + 0x74) != *(int *)(this + 0x7a)) {
        if (*(int *)(iVar2 + 0x6c) == 0) {
          (**(code **)(*(int *)this + 0x98))(iVar2);
          if (local_4 < local_14) {
            iStack_8 = local_14 - local_4;
            iStack_10 = iVar3;
            do {
              iVar2 = *(int *)paVar1;
              apFree(*(void **)(iVar2 + iStack_10 + 0x5c));
              apFree(*(void **)(iVar2 + iStack_10 + 0x50));
              iStack_10 = iStack_10 + 0x78;
              iStack_8 = iStack_8 + -1;
            } while (iStack_8 != 0);
          }
          memmove((void *)(iVar3 + *(int *)paVar1),(void *)(*(int *)paVar1 + iVar4),
                  *(int *)(paVar1 + 4) * 0x78 - iVar4);
          local_4 = local_4 + -1;
          local_14 = local_14 + -1;
          *(int *)(paVar1 + 4) = *(int *)(paVar1 + 4) + -1;
          iVar3 = iVar3 + -0x78;
          *(undefined4 *)(this + 0x82) = 1;
          iVar4 = iVar4 + -0x78;
        }
        else {
          *(int *)(iVar2 + 0x74) = *(int *)(this + 0x7a);
        }
      }
      local_4 = local_4 + 1;
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 0x78;
      iVar4 = iVar4 + 0x78;
    } while (local_4 < *(int *)(paVar1 + 4));
  }
  netDRV::UnlockServers((netDRV *)this);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00578D60 */

void __thiscall netDRV_DPUBI::Dp_Client_OnDataReceived(netDRV_DPUBI *this,void *param_1,int param_2)

{
  netDRV::AddEvent((netDRV *)this,8,-1,param_1,param_2);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00578DF0 */

void __thiscall netDRV_DPUBI::Ubi_Server_GetGameInfo(netDRV_DPUBI *this,void **param_1,int *param_2)

{
  *param_1 = *(void **)(this + 0x58);
  *param_2 = *(int *)(this + 0x5c);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00578E20 */

void __thiscall netDRV_DPUBI::Ubi_Server_OnPlayerDisconnected(netDRV_DPUBI *this,char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  
  WaitForSingleObject(*(HANDLE *)(this + 0x26a),10000);
  iVar7 = 0;
  if (0 < *(int *)(this + 0x272)) {
    pbVar4 = *(byte **)(this + 0x26e);
    pbVar5 = pbVar4 + 4;
    do {
      pbVar2 = pbVar5;
      pbVar6 = (byte *)param_1;
      if ((*pbVar4 & 4) != 0) {
        do {
          bVar1 = *pbVar2;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_00578e87:
            iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00578e8c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_00578e87;
          pbVar2 = pbVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_00578e8c:
        if (iVar3 == 0) {
          ReleaseMutex(*(HANDLE *)(this + 0x26a));
          if (iVar7 != -1) {
            RemovePlayer(this,iVar7);
          }
          return;
        }
      }
      iVar7 = iVar7 + 1;
      pbVar4 = pbVar4 + 0x2c;
      pbVar5 = pbVar5 + 0x2c;
    } while (iVar7 < *(int *)(this + 0x272));
  }
                    /* WARNING: Could not recover jumptable at 0x00578eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseMutex(*(HANDLE *)(this + 0x26a));
  return;
}




/* WARNING: Type propagation algorithm not settling */
/* from: drv:network_dpubi.cpp
   addr: 00578EF0 */

void __thiscall
netDRV_DPUBI::Ubi_Client_OnServerFound(netDRV_DPUBI *this,netUBI_NEW_SERVER *param_1)

{
  arrVector<char> *this_00;
  int *piVar1;
  uchar *puVar2;
  arrVector<struct_netDRV_SERVER_INFO> *this_01;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uchar *puVar8;
  int *piVar9;
  uchar *puVar10;
  int local_78;
  char local_74 [63];
  undefined1 local_35;
  int local_34;
  int local_30;
  int local_2c;
  uchar *local_28;
  uchar *local_24;
  int local_20;
  void *apvStack_1c [3];
  int iStack_10;
  int local_c [3];
  
  netDRV_SERVER_INFO::netDRV_SERVER_INFO((netDRV_SERVER_INFO *)&local_78);
  strncpy(local_74,(char *)param_1,0x40);
  local_34 = *(int *)(param_1 + 0x40);
  local_30 = *(int *)(param_1 + 0x44);
  local_c[1] = *(int *)(param_1 + 0x50);
  local_c[2] = *(int *)(this + 0x7a);
  local_35 = 0;
  local_2c = 0;
  local_c[0] = 1;
  arrVector<char>::Resize((arrVector<char> *)&local_28,0);
  puVar10 = *(uchar **)(param_1 + 0x48);
  puVar8 = puVar10 + (*(int *)(param_1 + 0x4c) - (int)puVar10);
  if (puVar8 != (uchar *)0x0) {
    puVar2 = local_24 + (int)puVar8;
    if (local_20 < (int)puVar2) {
      if ((int)puVar2 < local_20 * 2) {
        puVar2 = (uchar *)(local_20 * 2);
      }
      if (local_20 < (int)puVar2) {
        arrVector<unsigned_char>::Realloc((arrVector<unsigned_char> *)&local_28,(int)puVar2);
      }
    }
    memmove(puVar8 + (int)local_28,local_28,(size_t)local_24);
    iVar6 = 0;
    if (0 < (int)puVar8) {
      do {
        if (local_28 + iVar6 != (uchar *)0x0) {
          local_28[iVar6] = *puVar10;
        }
        puVar10 = puVar10 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)puVar8);
    }
    local_24 = local_24 + (int)puVar8;
  }
  this_01 = netDRV::LockServers((netDRV *)this);
  iVar6 = 0;
  if (0 < *(int *)(this_01 + 4)) {
    iVar7 = 0;
    do {
      if (*(int *)(*(int *)this_01 + iVar7 + 0x6c) == 1) {
        iVar3 = (**(code **)(*(int *)this + 0x94))(*(int *)this_01 + iVar7,&local_78);
        if (iVar3 != 0) break;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x78;
    } while (iVar6 < *(int *)(this_01 + 4));
  }
  if (iVar6 < *(int *)(this_01 + 4)) {
    iVar6 = iVar6 * 0x78;
    local_78 = *(int *)(iVar6 + *(int *)this_01);
    (**(code **)(*(int *)this + 0x98))(*(int *)this_01 + iVar6);
    piVar9 = (int *)(*(int *)this_01 + iVar6);
    *piVar9 = local_78;
    piVar4 = piVar9 + 1;
    do {
      *(char *)piVar4 = (local_74 + (-4 - (int)piVar9))[(int)piVar4];
      piVar4 = (int *)((int)piVar4 + 1);
    } while ((undefined1 *)((-4 - (int)piVar9) + (int)piVar4) < (undefined1 *)0x40);
    this_00 = (arrVector<char> *)(piVar9 + 0x14);
    piVar9[0x11] = local_34;
    piVar9[0x12] = local_30;
    piVar9[0x13] = local_2c;
    arrVector<char>::Resize(this_00,0);
    if ((uchar *)piVar9[0x16] != local_24) {
      arrVector<unsigned_char>::Realloc((arrVector<unsigned_char> *)this_00,piVar9[0x15]);
    }
    arrVector<unsigned_char>::Insert
              ((arrVector<unsigned_char> *)this_00,0,local_28,local_28 + (int)local_24);
    arrVector<unsigned_char>::operator=
              ((arrVector<unsigned_char> *)(piVar9 + 0x17),(arrVector<unsigned_char> *)apvStack_1c);
    uVar5 = 0;
    piVar9[0x1a] = iStack_10;
    piVar4 = piVar9 + 0x1b;
    do {
      piVar1 = local_c + uVar5;
      uVar5 = uVar5 + 1;
      *piVar4 = *piVar1;
      piVar4 = piVar4 + 1;
    } while (uVar5 < 2);
    piVar9[0x1d] = local_c[2];
  }
  else {
    local_78 = netDRV::NewServerId((netDRV *)this);
    iVar7 = *(int *)(this_01 + 4);
    iVar6 = iVar7 + 1;
    if (*(int *)(this_01 + 8) < iVar6) {
      iVar3 = *(int *)(this_01 + 8) * 2;
      if (iVar3 <= iVar6) {
        iVar3 = iVar6;
      }
      arrVector<struct_netDRV_SERVER_INFO>::Reserve(this_01,iVar3);
    }
    iVar3 = iVar7 * 0x78;
    memmove((void *)(*(int *)this_01 + iVar6 * 0x78),(void *)(iVar3 + *(int *)this_01),
            *(int *)(this_01 + 4) * 0x78 + iVar7 * -0x78);
    if (iVar7 < iVar6) {
      iVar6 = iVar6 - iVar7;
      do {
        if ((netDRV_SERVER_INFO *)(*(int *)this_01 + iVar3) != (netDRV_SERVER_INFO *)0x0) {
          netDRV_SERVER_INFO::netDRV_SERVER_INFO
                    ((netDRV_SERVER_INFO *)(*(int *)this_01 + iVar3),(netDRV_SERVER_INFO *)&local_78
                    );
        }
        iVar3 = iVar3 + 0x78;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(int *)(this_01 + 4) = *(int *)(this_01 + 4) + 1;
  }
  *(undefined4 *)(this + 0x82) = 1;
  netDRV::UnlockServers((netDRV *)this);
  apFree(apvStack_1c[0]);
  apFree(local_28);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00579190 */

void __thiscall netDRV_DPUBI::Ubi_Client_OnServerEnumEnd(netDRV_DPUBI *this)

{
  arrVector<struct_netDRV_SERVER_INFO> *paVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int iStack_10;
  int iStack_8;
  int local_4;
  
  paVar1 = netDRV::LockServers((netDRV *)this);
  local_4 = 0;
  if (0 < *(int *)(paVar1 + 4)) {
    iVar3 = 0;
    local_14 = 1;
    iVar4 = 0x78;
    do {
      iVar2 = *(int *)paVar1 + iVar3;
      if (*(int *)(iVar2 + 0x74) != *(int *)(this + 0x7a)) {
        if (*(int *)(iVar2 + 0x6c) == 1) {
          (**(code **)(*(int *)this + 0x98))(iVar2);
          if (local_4 < local_14) {
            iStack_8 = local_14 - local_4;
            iStack_10 = iVar3;
            do {
              iVar2 = *(int *)paVar1;
              apFree(*(void **)(iVar2 + iStack_10 + 0x5c));
              apFree(*(void **)(iVar2 + iStack_10 + 0x50));
              iStack_10 = iStack_10 + 0x78;
              iStack_8 = iStack_8 + -1;
            } while (iStack_8 != 0);
          }
          memmove((void *)(iVar3 + *(int *)paVar1),(void *)(*(int *)paVar1 + iVar4),
                  *(int *)(paVar1 + 4) * 0x78 - iVar4);
          local_4 = local_4 + -1;
          local_14 = local_14 + -1;
          *(int *)(paVar1 + 4) = *(int *)(paVar1 + 4) + -1;
          iVar3 = iVar3 + -0x78;
          *(undefined4 *)(this + 0x82) = 1;
          iVar4 = iVar4 + -0x78;
        }
        else {
          *(int *)(iVar2 + 0x74) = *(int *)(this + 0x7a);
        }
      }
      local_4 = local_4 + 1;
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 0x78;
      iVar4 = iVar4 + 0x78;
    } while (local_4 < *(int *)(paVar1 + 4));
  }
  netDRV::UnlockServers((netDRV *)this);
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005792B0 */

void __thiscall
netDRV_DPUBI::Ubi_Client_OnJoinServerAddress
          (netDRV_DPUBI *this,char *param_1,ushort param_2,char *param_3,ushort param_4)

{
  netDRV_DPUBI *pnVar1;
  int iVar2;
  
  iVar2 = 2;
  pnVar1 = this + 0x1d6;
  do {
    *pnVar1 = (netDRV_DPUBI)0x0;
    pnVar1 = pnVar1 + 0x40;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(this + 0xca) == 0xe) {
    sprintf((char *)(this + 0x1d6),s__s__i,param_1,param_2);
    sprintf((char *)(this + 0x216),s__s__i,param_3,param_4);
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00579320 */

arrVector<unsigned_char> * __thiscall
arrVector<unsigned_char>::operator=
          (arrVector<unsigned_char> *this,arrVector<unsigned_char> *param_1)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  if ((*(int *)(this + 4) < 0) && (*(int *)(this + 8) < 0)) {
    Realloc(this,0);
  }
  *(undefined4 *)(this + 4) = 0;
  if ((*(int *)(this + 8) != *(int *)(param_1 + 4)) && (*(int *)(this + 8) != 0)) {
    pvVar2 = apRealloc(*(void **)this,0);
    *(void **)this = pvVar2;
    *(undefined4 *)(this + 8) = 0;
  }
  puVar5 = *(undefined1 **)param_1;
  puVar6 = puVar5 + (*(int *)(param_1 + 4) - (int)puVar5);
  if (puVar6 != (undefined1 *)0x0) {
    iVar3 = *(int *)(this + 8);
    puVar1 = puVar6 + *(int *)(this + 4);
    if (iVar3 < (int)puVar1) {
      puVar4 = (undefined1 *)(iVar3 * 2);
      if (iVar3 * 2 <= (int)puVar1) {
        puVar4 = puVar1;
      }
      if (iVar3 < (int)puVar4) {
        if ((int)puVar4 < *(int *)(this + 4)) {
          arrVector<char>::Resize((arrVector<char> *)this,(int)puVar4);
        }
        pvVar2 = apRealloc(*(void **)this,(uint)puVar4);
        *(void **)this = pvVar2;
        *(undefined1 **)(this + 8) = puVar4;
      }
    }
    memmove((undefined1 *)((int)*(void **)this + (int)puVar6),*(void **)this,*(size_t *)(this + 4));
    iVar3 = 0;
    if (0 < (int)puVar6) {
      do {
        if ((undefined1 *)(*(int *)this + iVar3) != (undefined1 *)0x0) {
          *(undefined1 *)(*(int *)this + iVar3) = *puVar5;
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)puVar6);
    }
    *(undefined1 **)(this + 4) = puVar6 + *(int *)(this + 4);
  }
  return this;
}




/* from: drv:network_dpubi.cpp
   addr: 005793E0 */

void __thiscall
arrVector<unsigned_char>::Insert
          (arrVector<unsigned_char> *this,int param_1,uchar *param_2,uchar *param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = (int)param_3 - (int)param_2;
  if (iVar4 != 0) {
    iVar2 = *(int *)(this + 8);
    uVar1 = *(int *)(this + 4) + iVar4;
    if (iVar2 < (int)uVar1) {
      uVar5 = iVar2 * 2;
      if (iVar2 * 2 <= (int)uVar1) {
        uVar5 = uVar1;
      }
      if (iVar2 < (int)uVar5) {
        if ((int)uVar5 < *(int *)(this + 4)) {
          *(uint *)(this + 4) = uVar5;
        }
        pvVar3 = apRealloc(*(void **)this,uVar5);
        *(void **)this = pvVar3;
        *(uint *)(this + 8) = uVar5;
      }
    }
    memmove((void *)(*(int *)this + iVar4 + param_1),(void *)(*(int *)this + param_1),
            *(int *)(this + 4) - param_1);
    iVar2 = iVar4 + param_1;
    if (param_1 < iVar2) {
      do {
        if ((uchar *)(*(int *)this + param_1) != (uchar *)0x0) {
          *(uchar *)(*(int *)this + param_1) = *param_2;
        }
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      } while (param_1 < iVar2);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + iVar4;
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00579480 */

void __thiscall
arrVector<struct_netDRV_DPUBI_PLAYER>::Resize
          (arrVector<struct_netDRV_DPUBI_PLAYER> *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(this + 4) <= param_1) && (*(int *)(this + 4) < param_1)) {
    if (*(int *)(this + 8) < param_1) {
      pvVar1 = apRealloc(*(void **)this,param_1 * 0x2c);
      *(void **)this = pvVar1;
      *(int *)(this + 8) = param_1;
    }
    iVar3 = *(int *)(this + 4);
    if (iVar3 < param_1) {
      iVar2 = iVar3 * 0x2c;
      iVar3 = param_1 - iVar3;
      do {
        if ((undefined4 *)(*(int *)this + iVar2) != (undefined4 *)0x0) {
          *(undefined4 *)(*(int *)this + iVar2) = 0;
        }
        iVar2 = iVar2 + 0x2c;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005794E0 */

void __thiscall
arrVector<struct_netDRV_DPUBI_PLAYER>::Insert
          (arrVector<struct_netDRV_DPUBI_PLAYER> *this,int param_1,netDRV_DPUBI_PLAYER *param_2,
          int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  netDRV_DPUBI_PLAYER *pnVar5;
  undefined4 *puVar6;
  
  if (param_3 != 0) {
    iVar3 = *(int *)(this + 8);
    iVar4 = *(int *)(this + 4) + param_3;
    if (iVar3 < iVar4) {
      iVar2 = iVar3 * 2;
      if (iVar3 * 2 <= iVar4) {
        iVar2 = iVar4;
      }
      if (iVar3 < iVar2) {
        if (iVar2 < *(int *)(this + 4)) {
          *(int *)(this + 4) = iVar2;
        }
        pvVar1 = apRealloc(*(void **)this,iVar2 * 0x2c);
        *(void **)this = pvVar1;
        *(int *)(this + 8) = iVar2;
      }
    }
    iVar4 = param_3 + param_1;
    iVar3 = param_1 * 0x2c;
    memmove((void *)(*(int *)this + iVar4 * 0x2c),(void *)(iVar3 + *(int *)this),
            *(int *)(this + 4) * 0x2c + param_1 * -0x2c);
    if (param_1 < iVar4) {
      iVar4 = iVar4 - param_1;
      do {
        if ((undefined4 *)(*(int *)this + iVar3) != (undefined4 *)0x0) {
          pnVar5 = param_2;
          puVar6 = (undefined4 *)(*(int *)this + iVar3);
          for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *(undefined4 *)pnVar5;
            pnVar5 = pnVar5 + 4;
            puVar6 = puVar6 + 1;
          }
        }
        iVar3 = iVar3 + 0x2c;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 005795A0 */

void __thiscall
arrVector<struct_netDRV_SERVER_INFO>::Reserve
          (arrVector<struct_netDRV_SERVER_INFO> *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 8) < param_1) {
    if (param_1 < *(int *)(this + 4)) {
      iVar3 = param_1 * 0x78;
      iVar4 = param_1;
      do {
        iVar1 = *(int *)this;
        apFree(*(void **)(iVar1 + iVar3 + 0x5c));
        apFree(*(void **)(iVar1 + iVar3 + 0x50));
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x78;
      } while (iVar4 < *(int *)(this + 4));
      *(int *)(this + 4) = param_1;
    }
    pvVar2 = apRealloc(*(void **)this,param_1 * 0x78);
    *(void **)this = pvVar2;
    *(int *)(this + 8) = param_1;
  }
  return;
}




/* from: drv:network_dpubi.cpp
   addr: 00579610 */

netDRV_SERVER_INFO * __thiscall
netDRV_SERVER_INFO::netDRV_SERVER_INFO(netDRV_SERVER_INFO *this,netDRV_SERVER_INFO *param_1)

{
  netDRV_SERVER_INFO *pnVar1;
  void *pvVar2;
  int iVar3;
  netDRV_SERVER_INFO *pnVar4;
  netDRV_SERVER_INFO *pnVar5;
  
  pnVar1 = param_1;
  *(undefined4 *)this = *(undefined4 *)param_1;
  pnVar5 = this + 4;
  pnVar4 = param_1;
  for (iVar3 = 0x10; pnVar4 = pnVar4 + 4, iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pnVar5 = *(undefined4 *)pnVar4;
    pnVar5 = pnVar5 + 4;
  }
  iVar3 = 0;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  pnVar4 = *(netDRV_SERVER_INFO **)(param_1 + 0x50);
  pnVar5 = pnVar4 + (*(int *)(param_1 + 0x54) - (int)pnVar4);
  if (pnVar5 != (netDRV_SERVER_INFO *)0x0) {
    if (0 < (int)pnVar5) {
      pvVar2 = apRealloc((void *)0x0,(uint)pnVar5);
      *(void **)(this + 0x50) = pvVar2;
      *(netDRV_SERVER_INFO **)(this + 0x58) = pnVar5;
    }
    memmove((netDRV_SERVER_INFO *)((int)*(void **)(this + 0x50) + (int)pnVar5),
            *(void **)(this + 0x50),*(size_t *)(this + 0x54));
    param_1 = pnVar4;
    if (0 < (int)pnVar5) {
      do {
        if ((netDRV_SERVER_INFO *)(*(int *)(this + 0x50) + iVar3) != (netDRV_SERVER_INFO *)0x0) {
          *(netDRV_SERVER_INFO *)(*(int *)(this + 0x50) + iVar3) = *param_1;
        }
        param_1 = param_1 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)pnVar5);
    }
    *(netDRV_SERVER_INFO **)(this + 0x54) = pnVar5 + *(int *)(this + 0x54);
  }
  iVar3 = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  param_1 = *(netDRV_SERVER_INFO **)(pnVar1 + 0x5c);
  pnVar4 = param_1 + (*(int *)(pnVar1 + 0x60) - (int)param_1);
  if (pnVar4 != (netDRV_SERVER_INFO *)0x0) {
    if (0 < (int)pnVar4) {
      pvVar2 = apRealloc((void *)0x0,(uint)pnVar4);
      *(void **)(this + 0x5c) = pvVar2;
      *(netDRV_SERVER_INFO **)(this + 100) = pnVar4;
    }
    memmove((netDRV_SERVER_INFO *)((int)*(void **)(this + 0x5c) + (int)pnVar4),
            *(void **)(this + 0x5c),*(size_t *)(this + 0x60));
    if (0 < (int)pnVar4) {
      do {
        if ((netDRV_SERVER_INFO *)(*(int *)(this + 0x5c) + iVar3) != (netDRV_SERVER_INFO *)0x0) {
          *(netDRV_SERVER_INFO *)(*(int *)(this + 0x5c) + iVar3) = *param_1;
        }
        param_1 = param_1 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)pnVar4);
    }
    *(netDRV_SERVER_INFO **)(this + 0x60) = pnVar4 + *(int *)(this + 0x60);
  }
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(pnVar1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(pnVar1 + 0x6c);
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(pnVar1 + 0x70);
  *(undefined4 *)(this + 0x74) = *(undefined4 *)(pnVar1 + 0x74);
  return this;
}

