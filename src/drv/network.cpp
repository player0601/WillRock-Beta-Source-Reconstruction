
/* from: drv:network.cpp
   addr: 004A6C10 */

void __thiscall netDRV_SERVER_INFO::netDRV_SERVER_INFO(netDRV_SERVER_INFO *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)this = 0xffffffff;
  this[4] = (netDRV_SERVER_INFO)0x0;
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  *(undefined4 *)(this + 0x4c) = 9999;
  *(undefined4 *)(this + 0x68) = 1;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0xffffffff;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: drv:network.cpp
   addr: 004A6C50 */

netDRV * __thiscall netDRV::netDRV(netDRV *this)

{
  HANDLE pvVar1;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x96) = 0;
  *(undefined4 *)(this + 0x9e) = 0;
  *(undefined4 *)(this + 0x9a) = 0;
  *(undefined4 *)(this + 0xa2) = 0;
  *(undefined4 *)(this + 0xaa) = 0;
  *(undefined4 *)(this + 0xa6) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  this[0x14] = (netDRV)0x0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x70) = 1;
  *(undefined4 *)(this + 0x74) = 1;
  *(undefined4 *)(this + 0x7a) = 0;
  *(undefined2 *)(this + 0x78) = 0x1e61;
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)(this + 0x8e) = pvVar1;
  pvVar1 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)0x0);
  *(HANDLE *)(this + 0x92) = pvVar1;
  *(undefined4 *)(this + 0x7e) = 0;
  *(undefined4 *)(this + 0x82) = 0;
  *(undefined4 *)(this + 0x86) = 0;
  *(undefined4 *)(this + 0x8a) = 0;
  _netDbgStat = 0;
  DAT_00612028 = 0;
  DAT_0061202c = 0;
  DAT_00612030 = 0;
  _DAT_00612034 = 0;
  return this;
}




/* from: drv:network.cpp
   addr: 004A6D10
   addr: 004A6D10 */

void * __thiscall netDRV::_vector_deleting_destructor_(netDRV *this,uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined ***)this = &_vftable_;
  CloseHandle(*(HANDLE *)(this + 0x8e));
  CloseHandle(*(HANDLE *)(this + 0x92));
  iVar3 = 0;
  if (0 < *(int *)(this + 0xa6)) {
    iVar2 = 0;
    do {
      apFree(*(void **)(*(int *)(this + 0xa2) + 8 + iVar2));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < *(int *)(this + 0xa6));
  }
  apFree(*(void **)(this + 0xa2));
  iVar3 = 0;
  if (0 < *(int *)(this + 0x9a)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(this + 0x96);
      apFree(*(void **)(iVar1 + iVar2 + 0x5c));
      arrVector<unsigned_char>::~arrVector<unsigned_char>
                ((arrVector<unsigned_char> *)(iVar1 + iVar2 + 0x50));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x78;
    } while (iVar3 < *(int *)(this + 0x9a));
  }
  apFree(*(void **)(this + 0x96));
  apFree(*(void **)(this + 100));
  apFree(*(void **)(this + 0x58));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: drv:network.cpp
   addr: 004A6DF0 */

void __thiscall netDRV::~netDRV(netDRV *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined ***)this = &_vftable_;
  CloseHandle(*(HANDLE *)(this + 0x8e));
  CloseHandle(*(HANDLE *)(this + 0x92));
  iVar3 = 0;
  if (0 < *(int *)(this + 0xa6)) {
    iVar2 = 0;
    do {
      apFree(*(void **)(iVar2 + 8 + *(int *)(this + 0xa2)));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x14;
    } while (iVar3 < *(int *)(this + 0xa6));
  }
  apFree(*(void **)(this + 0xa2));
  iVar3 = 0;
  if (0 < *(int *)(this + 0x9a)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(this + 0x96);
      apFree(*(void **)(iVar1 + iVar2 + 0x5c));
      apFree(*(void **)(iVar1 + iVar2 + 0x50));
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x78;
    } while (iVar3 < *(int *)(this + 0x9a));
  }
  apFree(*(void **)(this + 0x96));
  apFree(*(void **)(this + 100));
  apFree(*(void **)(this + 0x58));
  return;
}




/* from: drv:network.cpp
   addr: 004A6EE0 */

void __thiscall netDRV::ProcessEvents(netDRV *this,int param_1)

{
  arrVector<struct_netDRV_EVENT> *this_00;
  void *pvVar1;
  undefined4 uVar2;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  void *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar9 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_1c = 0;
  arrVector<struct_netDRV_EVENT>::Resize((arrVector<struct_netDRV_EVENT> *)&local_20,0);
  if ((((*(int *)(this + 0x86) != 0) && (*(int *)(this + 0x8a) == 0)) && (*(int *)(this + 4) != 0))
     && (DVar3 = WaitForSingleObject(*(HANDLE *)(this + 0x8e),15000), DVar3 == 0)) {
    pvVar1 = *(void **)(this + 0xa2);
    iVar8 = *(int *)(this + 0xa6);
    this_00 = (arrVector<struct_netDRV_EVENT> *)(this + 0xa2);
    uVar2 = *(undefined4 *)(this + 0xaa);
    *(void **)this_00 = local_20;
    *(int *)(this + 0xa6) = local_1c;
    *(undefined4 *)(this + 0xaa) = local_18;
    local_20 = pvVar1;
    local_1c = iVar8;
    local_18 = uVar2;
    ReleaseMutex(*(HANDLE *)(this + 0x8e));
    if (0 < local_1c) {
      iVar8 = 0;
      do {
        if (((*(int *)((int)local_20 + iVar8) != 0) &&
            ((param_1 == 0 || (*(int *)((int)local_20 + iVar8) == 4)))) &&
           ((**(code **)(this + 4))(), *(int *)(this + 0x8a) != 0)) {
          iVar9 = iVar9 + 1;
          break;
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 0x14;
      } while (iVar9 < local_1c);
    }
    _netPckProcessed = local_1c - iVar9;
    if (iVar9 < local_1c) {
      WaitForSingleObject(*(HANDLE *)(this + 0x8e),15000);
      iVar8 = local_1c;
      pvStack_c = (void *)0x0;
      uStack_4 = 0;
      uStack_8 = 0;
      arrVector<char>::Resize((arrVector<char> *)&pvStack_c,0);
      iVar8 = iVar8 - iVar9;
      uStack_14 = 0;
      uStack_10 = 0xffffffff;
      if (iVar8 != 0) {
        iVar7 = *(int *)(this + 0xaa);
        iVar4 = *(int *)(this + 0xa6) + iVar8;
        if (iVar7 < iVar4) {
          if (iVar4 < iVar7 * 2) {
            iVar4 = iVar7 * 2;
          }
          if (iVar7 < iVar4) {
            arrVector<struct_netDRV_EVENT>::Realloc(this_00,iVar4);
          }
        }
        memmove((void *)((int)*(void **)this_00 + iVar8 * 0x14),*(void **)this_00,
                *(int *)(this + 0xa6) * 0x14);
        if (0 < iVar8) {
          iVar7 = 0;
          param_1 = iVar8;
          do {
            if ((netDRV_EVENT *)(*(int *)this_00 + iVar7) != (netDRV_EVENT *)0x0) {
              netDRV_EVENT::netDRV_EVENT
                        ((netDRV_EVENT *)(*(int *)this_00 + iVar7),(netDRV_EVENT *)&uStack_14);
            }
            iVar7 = iVar7 + 0x14;
            param_1 = param_1 + -1;
          } while (param_1 != 0);
        }
        *(int *)(this + 0xa6) = *(int *)(this + 0xa6) + iVar8;
      }
      apFree(pvStack_c);
      if (iVar9 < local_1c) {
        iVar7 = 0;
        iVar8 = iVar9 * 0x14;
        do {
          puVar5 = (undefined4 *)(*(int *)this_00 + iVar7);
          puVar6 = (undefined4 *)((int)local_20 + iVar8);
          iVar9 = iVar9 + 1;
          iVar8 = iVar8 + 0x14;
          uVar2 = *puVar5;
          iVar7 = iVar7 + 0x14;
          *puVar5 = *puVar6;
          *puVar6 = uVar2;
          uVar2 = puVar5[1];
          puVar5[1] = puVar6[1];
          puVar6[1] = uVar2;
          uVar2 = puVar5[2];
          puVar5[2] = puVar6[2];
          puVar6[2] = uVar2;
          uVar2 = puVar5[3];
          puVar5[3] = puVar6[3];
          puVar6[3] = uVar2;
          uVar2 = puVar5[4];
          puVar5[4] = puVar6[4];
          puVar6[4] = uVar2;
        } while (iVar9 < local_1c);
      }
      ReleaseMutex(*(HANDLE *)(this + 0x8e));
    }
  }
  iVar9 = 0;
  if (0 < local_1c) {
    iVar8 = 0;
    do {
      apFree(*(void **)(iVar8 + 8 + (int)local_20));
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 0x14;
    } while (iVar9 < local_1c);
  }
  apFree(local_20);
  return;
}




/* from: drv:network.cpp
   addr: 004A7180 */

void __thiscall netDRV::Drv_Init(netDRV *this,netDRV_INIT *param_1)

{
  *(undefined4 *)(this + 0x86) = 0;
  *(undefined4 *)(this + 0x8a) = 0;
  return;
}




/* from: drv:network.cpp
   addr: 004A71A0 */

char * __thiscall netDRV::Drv_GetStatus(netDRV *this)

{
  char *pcVar1;
  
  pcVar1 = s_Game_in_progress;
  if (*(int *)(this + 0x86) == 0) {
    pcVar1 = s_Driver_started;
  }
  return pcVar1;
}




/* from: drv:network.cpp
   addr: 004A71F0 */

void __thiscall netDRV::Server_Start(netDRV *this,netDRV_SERVER_CREATE *param_1)

{
  arrVector<unsigned_char> *this_00;
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  strncpy((char *)(this + 0x14),*(char **)param_1,0x40);
  this[0x53] = (netDRV)0x0;
  this_00 = (arrVector<unsigned_char> *)(this + 0x58);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 4);
  if ((*(int *)(this + 0x5c) < 0) && (*(int *)(this + 0x60) < 0)) {
    arrVector<unsigned_char>::Realloc(this_00,0);
  }
  *(undefined4 *)(this + 0x5c) = 0;
  puVar5 = *(undefined1 **)(param_1 + 8);
  puVar6 = puVar5 + (*(int *)(param_1 + 0xc) - (int)puVar5);
  if (puVar6 != (undefined1 *)0x0) {
    iVar3 = *(int *)(this + 0x60);
    puVar1 = puVar6 + *(int *)(this + 0x5c);
    if (iVar3 < (int)puVar1) {
      puVar4 = (undefined1 *)(iVar3 * 2);
      if (iVar3 * 2 <= (int)puVar1) {
        puVar4 = puVar1;
      }
      if (iVar3 < (int)puVar4) {
        if ((int)puVar4 < *(int *)(this + 0x5c)) {
          arrVector<char>::Resize((arrVector<char> *)this_00,(int)puVar4);
        }
        pvVar2 = apRealloc(*(void **)this_00,(uint)puVar4);
        *(void **)this_00 = pvVar2;
        *(undefined1 **)(this + 0x60) = puVar4;
      }
    }
    memmove((undefined1 *)((int)*(void **)this_00 + (int)puVar6),*(void **)this_00,
            *(size_t *)(this + 0x5c));
    iVar3 = 0;
    if (0 < (int)puVar6) {
      do {
        if ((undefined1 *)(*(int *)this_00 + iVar3) != (undefined1 *)0x0) {
          *(undefined1 *)(*(int *)this_00 + iVar3) = *puVar5;
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)puVar6);
    }
    *(undefined1 **)(this + 0x5c) = puVar6 + *(int *)(this + 0x5c);
  }
  if ((*(int *)(this + 0x68) < 0) && (*(int *)(this + 0x6c) < 0)) {
    pvVar2 = apRealloc(*(void **)(this + 100),0);
    *(void **)(this + 100) = pvVar2;
    *(undefined4 *)(this + 0x6c) = 0;
  }
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 1;
  *(undefined2 *)(this + 0x78) = *(undefined2 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x86) = 0;
  return;
}




/* from: drv:network.cpp
   addr: 004A7310 */

void __thiscall netDRV::Server_SetMainData(netDRV *this,void *param_1,int param_2)

{
  arrVector<char> *this_00;
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  this_00 = (arrVector<char> *)(this + 0x58);
  if ((*(int *)(this + 0x5c) < 0) && (*(int *)(this + 0x60) < 0)) {
    pvVar1 = apRealloc(*(void **)this_00,0);
    *(void **)this_00 = pvVar1;
    *(undefined4 *)(this + 0x60) = 0;
  }
  *(undefined4 *)(this + 0x5c) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(this + 0x70) = 0;
    return;
  }
  iVar2 = *(int *)(this + 0x60);
  if (iVar2 < param_2) {
    uVar3 = iVar2 * 2;
    if (iVar2 * 2 <= param_2) {
      uVar3 = param_2;
    }
    if (iVar2 < (int)uVar3) {
      if ((int)uVar3 < 0) {
        arrVector<char>::Resize(this_00,uVar3);
      }
      pvVar1 = apRealloc(*(void **)this_00,uVar3);
      *(void **)this_00 = pvVar1;
      *(uint *)(this + 0x60) = uVar3;
    }
  }
  memmove((void *)((int)*(void **)this_00 + param_2),*(void **)this_00,*(size_t *)(this + 0x5c));
  iVar2 = 0;
  if (0 < param_2) {
    do {
      if ((undefined1 *)(*(int *)this_00 + iVar2) != (undefined1 *)0x0) {
        *(undefined1 *)(*(int *)this_00 + iVar2) = *(undefined1 *)(iVar2 + (int)param_1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + param_2;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}




/* from: drv:network.cpp
   addr: 004A73D0 */

void __thiscall netDRV::Server_GetMainData(netDRV *this,void *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((param_1 != (void *)0x0) && (uVar2 = *(uint *)(this + 0x5c), (int)uVar2 <= *param_2)) {
    puVar3 = *(undefined4 **)(this + 0x58);
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)param_1 = *puVar3;
      puVar3 = puVar3 + 1;
      param_1 = (undefined4 *)((int)param_1 + 4);
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      param_1 = (undefined4 *)((int)param_1 + 1);
    }
    *param_2 = *(int *)(this + 0x5c);
    return;
  }
  *param_2 = *(int *)(this + 0x5c);
  return;
}




/* from: drv:network.cpp
   addr: 004A7450 */

int __thiscall netDRV::Browser_IsServerListUpdated(netDRV *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x82);
  *(undefined4 *)(this + 0x82) = 0;
  return iVar1;
}




/* from: drv:network.cpp
   addr: 004A7470 */

int __thiscall netDRV::Browser_GetNextServer(netDRV *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (param_1 != -1) {
    if (0 < *(int *)(this + 0x9a)) {
      piVar2 = *(int **)(this + 0x96);
      do {
        if (*piVar2 == param_1) goto LAB_004a749c;
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 0x1e;
      } while (iVar1 < *(int *)(this + 0x9a));
    }
    iVar1 = -1;
LAB_004a749c:
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(this + 0x9a) <= iVar1) {
    return -1;
  }
  return *(int *)(*(int *)(this + 0x96) + iVar1 * 0x78);
}




/* from: drv:network.cpp
   addr: 004A74D0 */

netDRV_SERVER_INFO * __thiscall netDRV::Browser_GetServerInfo(netDRV *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x9a)) {
    piVar2 = *(int **)(this + 0x96);
    while (*piVar2 != param_1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x1e;
      if (*(int *)(this + 0x9a) <= iVar1) {
        return (netDRV_SERVER_INFO *)0x0;
      }
    }
    if (iVar1 != -1) {
      return (netDRV_SERVER_INFO *)(*(int **)(this + 0x96) + iVar1 * 0x1e);
    }
  }
  return (netDRV_SERVER_INFO *)0x0;
}




/* from: drv:network.cpp
   addr: 004A7520 */

int __thiscall netDRV::FindServerIdx(netDRV *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(this + 0x9a)) {
    piVar2 = *(int **)(this + 0x96);
    do {
      if (*piVar2 == param_1) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0x1e;
    } while (iVar1 < *(int *)(this + 0x9a));
  }
  return -1;
}




/* from: drv:network.cpp
   addr: 004A7560 */

void __thiscall netDRV::ClearServersList(netDRV *this)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_4;
  
  if (*(int *)(this + 0x9a) != 0) {
    iVar3 = 0;
    *(undefined4 *)(this + 0x82) = 1;
    if (0 < *(int *)(this + 0x9a)) {
      iVar2 = 0;
      do {
        (**(code **)(*(int *)this + 0x98))(*(int *)(this + 0x96) + iVar2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x78;
      } while (iVar3 < *(int *)(this + 0x9a));
    }
    if (0 < *(int *)(this + 0x9a)) {
      iVar3 = 0;
      local_4 = 0;
      do {
        iVar2 = *(int *)(this + 0x96);
        apFree(*(void **)(iVar2 + local_4 + 0x5c));
        apFree(*(void **)(iVar2 + local_4 + 0x50));
        iVar3 = iVar3 + 1;
        local_4 = local_4 + 0x78;
      } while (iVar3 < *(int *)(this + 0x9a));
      *(undefined4 *)(this + 0x9a) = 0;
      return;
    }
    if (*(int *)(this + 0x9a) < 0) {
      if (*(int *)(this + 0x9e) < 0) {
        pvVar1 = apRealloc(*(void **)(this + 0x96),0);
        *(void **)(this + 0x96) = pvVar1;
        *(undefined4 *)(this + 0x9e) = 0;
      }
      if (*(int *)(this + 0x9a) < 0) {
        iVar3 = *(int *)(this + 0x9a) * 0x78;
        do {
          puVar4 = (undefined4 *)(*(int *)(this + 0x96) + iVar3);
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[0x14] = 0;
            puVar4[0x16] = 0;
            puVar4[0x15] = 0;
            arrVector<char>::Resize((arrVector<char> *)(puVar4 + 0x14),0);
            puVar4[0x17] = 0;
            puVar4[0x19] = 0;
            puVar4[0x18] = 0;
            *puVar4 = 0xffffffff;
            *(undefined1 *)(puVar4 + 1) = 0;
            puVar4[0x11] = 0xffffffff;
            puVar4[0x12] = 0xffffffff;
            puVar4[0x13] = 9999;
            puVar4[0x1a] = 1;
            puVar4[0x1b] = 0;
            puVar4[0x1c] = 0;
            puVar4[0x1d] = 0xffffffff;
          }
          iVar3 = iVar3 + 0x78;
        } while (iVar3 < 0);
      }
    }
    *(undefined4 *)(this + 0x9a) = 0;
  }
  return;
}




/* from: drv:network.cpp
   addr: 004A76A0 */

arrVector<struct_netDRV_SERVER_INFO> * __thiscall netDRV::LockServers(netDRV *this)

{
  WaitForSingleObject(*(HANDLE *)(this + 0x92),15000);
  return (arrVector<struct_netDRV_SERVER_INFO> *)(this + 0x96);
}




/* from: drv:network.cpp
   addr: 004A76D0 */

void __thiscall netDRV::AddEvent(netDRV *this,int param_1,int param_2,void *param_3,int param_4)

{
  arrVector<struct_netDRV_EVENT> *this_00;
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  WaitForSingleObject(*(HANDLE *)(this + 0x8e),15000);
  pvStack_c = (void *)0x0;
  uStack_4 = 0;
  uStack_8 = 0;
  arrVector<char>::Resize((arrVector<char> *)&pvStack_c,0);
  this_00 = (arrVector<struct_netDRV_EVENT> *)(this + 0xa2);
  uStack_14 = 0;
  uStack_10 = 0xffffffff;
  arrVector<struct_netDRV_EVENT>::Insert(this_00,*(int *)(this + 0xa6),(netDRV_EVENT *)&uStack_14,1)
  ;
  apFree(pvStack_c);
  *(int *)(*(int *)this_00 + -0x14 + *(int *)(this + 0xa6) * 0x14) = param_1;
  *(int *)(*(int *)this_00 + -0x10 + *(int *)(this + 0xa6) * 0x14) = param_2;
  piVar2 = (int *)(*(int *)this_00 + -0xc + *(int *)(this + 0xa6) * 0x14);
  if (param_4 != 0) {
    iVar4 = piVar2[2];
    uVar1 = piVar2[1] + param_4;
    if (iVar4 < (int)uVar1) {
      uVar5 = iVar4 * 2;
      if (iVar4 * 2 <= (int)uVar1) {
        uVar5 = uVar1;
      }
      if (iVar4 < (int)uVar5) {
        if ((int)uVar5 < piVar2[1]) {
          piVar2[1] = uVar5;
        }
        pvVar3 = apRealloc((void *)*piVar2,uVar5);
        *piVar2 = (int)pvVar3;
        piVar2[2] = uVar5;
      }
    }
    memmove((void *)(*piVar2 + param_4),(void *)*piVar2,piVar2[1]);
    iVar4 = 0;
    if (0 < param_4) {
      do {
        if ((undefined1 *)(*piVar2 + iVar4) != (undefined1 *)0x0) {
          *(undefined1 *)(*piVar2 + iVar4) = *(undefined1 *)(iVar4 + (int)param_3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_4);
    }
    piVar2[1] = piVar2[1] + param_4;
  }
  ReleaseMutex(*(HANDLE *)(this + 0x8e));
  return;
}




/* from: drv:network.cpp
   addr: 004A77F0 */

void __thiscall netDRV::EraseClientEvents(netDRV *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  WaitForSingleObject(*(HANDLE *)(this + 0x8e),15000);
  iVar2 = 0;
  if (0 < *(int *)(this + 0xa6)) {
    iVar1 = 0;
    do {
      if (*(int *)(*(int *)(this + 0xa2) + 4 + iVar1) == param_1) {
        *(undefined4 *)(*(int *)(this + 0xa2) + 4 + iVar1) = 0xffffffff;
        *(undefined4 *)(iVar1 + *(int *)(this + 0xa2)) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x14;
    } while (iVar2 < *(int *)(this + 0xa6));
  }
                    /* WARNING: Could not recover jumptable at 0x004a7859. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseMutex(*(HANDLE *)(this + 0x8e));
  return;
}




/* from: drv:network.cpp
   addr: 004A7870 */

void __thiscall
arrVector<struct_netDRV_EVENT>::Insert
          (arrVector<struct_netDRV_EVENT> *this,int param_1,netDRV_EVENT *param_2,int param_3)

{
  arrVector<unsigned_char> *this_00;
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int local_4;
  
  if (param_3 != 0) {
    iVar5 = *(int *)(this + 8);
    iVar7 = *(int *)(this + 4) + param_3;
    if (iVar5 < iVar7) {
      iVar3 = iVar5 * 2;
      if (iVar5 * 2 <= iVar7) {
        iVar3 = iVar7;
      }
      if (iVar5 < iVar3) {
        if (iVar3 < *(int *)(this + 4)) {
          iVar5 = iVar3 * 0x14;
          iVar7 = iVar3;
          do {
            apFree(*(void **)(iVar5 + 8 + *(int *)this));
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 0x14;
          } while (iVar7 < *(int *)(this + 4));
          *(int *)(this + 4) = iVar3;
        }
        pvVar1 = apRealloc(*(void **)this,iVar3 * 0x14);
        *(void **)this = pvVar1;
        *(int *)(this + 8) = iVar3;
      }
    }
    local_4 = param_3 + param_1;
    iVar7 = param_1 * 0x14;
    memmove((void *)(*(int *)this + local_4 * 0x14),(void *)(iVar7 + *(int *)this),
            *(int *)(this + 4) * 0x14 + param_1 * -0x14);
    if (param_1 < local_4) {
      local_4 = local_4 - param_1;
      do {
        puVar2 = (undefined4 *)(*(int *)this + iVar7);
        if (puVar2 != (undefined4 *)0x0) {
          this_00 = (arrVector<unsigned_char> *)(puVar2 + 2);
          *puVar2 = *(undefined4 *)param_2;
          puVar2[1] = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)this_00 = 0;
          puVar2[4] = 0;
          puVar2[3] = 0;
          puVar4 = *(undefined1 **)(param_2 + 8);
          puVar6 = puVar4 + (*(int *)(param_2 + 0xc) - (int)puVar4);
          if (puVar6 != (undefined1 *)0x0) {
            if (0 < (int)puVar6) {
              arrVector<unsigned_char>::Realloc(this_00,(int)puVar6);
            }
            memmove((undefined1 *)((int)*(void **)this_00 + (int)puVar6),*(void **)this_00,puVar2[3]
                   );
            iVar5 = 0;
            if (0 < (int)puVar6) {
              do {
                if ((undefined1 *)(*(int *)this_00 + iVar5) != (undefined1 *)0x0) {
                  *(undefined1 *)(*(int *)this_00 + iVar5) = *puVar4;
                }
                puVar4 = puVar4 + 1;
                iVar5 = iVar5 + 1;
              } while (iVar5 < (int)puVar6);
            }
            puVar2[3] = puVar6 + puVar2[3];
          }
        }
        iVar7 = iVar7 + 0x14;
        local_4 = local_4 + -1;
      } while (local_4 != 0);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + param_3;
  }
  return;
}




/* from: drv:network.cpp
   addr: 004A79C0
   addr: 004A79C0 */

void __thiscall arrVector<char>::Resize(arrVector<char> *this,int param_1)

{
  void *pvVar1;
  
  if (((*(int *)(this + 4) <= param_1) && (*(int *)(this + 4) < param_1)) &&
     (*(int *)(this + 8) < param_1)) {
    pvVar1 = apRealloc(*(void **)this,param_1);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: drv:network.cpp
   addr: 004A79F0 */

void __thiscall
arrVector<struct_netDRV_EVENT>::Resize(arrVector<struct_netDRV_EVENT> *this,int param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 < *(int *)(this + 4)) {
    iVar4 = param_1 * 0x14;
    iVar3 = param_1;
    do {
      apFree(*(void **)(iVar4 + 8 + *(int *)this));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar3 < *(int *)(this + 4));
    *(int *)(this + 4) = param_1;
    return;
  }
  if (*(int *)(this + 4) < param_1) {
    if (*(int *)(this + 8) < param_1) {
      pvVar1 = apRealloc(*(void **)this,param_1 * 0x14);
      *(void **)this = pvVar1;
      *(int *)(this + 8) = param_1;
    }
    iVar3 = *(int *)(this + 4);
    if (iVar3 < param_1) {
      iVar4 = iVar3 * 0x14;
      iVar3 = param_1 - iVar3;
      do {
        puVar2 = (undefined4 *)(*(int *)this + iVar4);
        if (puVar2 != (undefined4 *)0x0) {
          puVar2[2] = 0;
          puVar2[4] = 0;
          puVar2[3] = 0;
          *puVar2 = 0;
          puVar2[1] = 0xffffffff;
        }
        iVar4 = iVar4 + 0x14;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  *(int *)(this + 4) = param_1;
  return;
}




/* from: drv:network.cpp
   addr: 004A7A90 */

netDRV_EVENT * __thiscall netDRV_EVENT::netDRV_EVENT(netDRV_EVENT *this,netDRV_EVENT *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  puVar3 = *(undefined1 **)(param_1 + 8);
  puVar4 = puVar3 + (*(int *)(param_1 + 0xc) - (int)puVar3);
  if (puVar4 != (undefined1 *)0x0) {
    if (0 < (int)puVar4) {
      pvVar1 = apRealloc((void *)0x0,(uint)puVar4);
      *(void **)(this + 8) = pvVar1;
      *(undefined1 **)(this + 0x10) = puVar4;
    }
    memmove((undefined1 *)((int)*(void **)(this + 8) + (int)puVar4),*(void **)(this + 8),
            *(size_t *)(this + 0xc));
    iVar2 = 0;
    if (0 < (int)puVar4) {
      do {
        if ((undefined1 *)(*(int *)(this + 8) + iVar2) != (undefined1 *)0x0) {
          *(undefined1 *)(*(int *)(this + 8) + iVar2) = *puVar3;
        }
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)puVar4);
    }
    *(undefined1 **)(this + 0xc) = puVar4 + *(int *)(this + 0xc);
  }
  return this;
}




/* from: drv:network.cpp
   addr: 004A7B10
   addr: 004A7B10 */

void __thiscall arrVector<unsigned_char>::Realloc(arrVector<unsigned_char> *this,int param_1)

{
  void *pvVar1;
  
  if (param_1 != *(int *)(this + 8)) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}




/* from: drv:network.cpp
   addr: 004A7B40 */

void __thiscall
arrVector<struct_netDRV_EVENT>::Realloc(arrVector<struct_netDRV_EVENT> *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != *(int *)(this + 8)) {
    if (param_1 < *(int *)(this + 4)) {
      iVar3 = param_1 * 0x14;
      iVar2 = param_1;
      do {
        apFree(*(void **)(iVar3 + 8 + *(int *)this));
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < *(int *)(this + 4));
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 * 0x14);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}

