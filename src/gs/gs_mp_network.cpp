
/* from: gs:gs_mp_network.cpp
   addr: 00519430 */

void __thiscall gsMP_STAT::Clear(gsMP_STAT *this)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  if ((*(int *)(this + 0x14) < 1) && (*(int *)(this + 0x14) < 0)) {
    if (*(int *)(this + 0x18) < 0) {
      pvVar1 = apRealloc(*(void **)(this + 0x10),0);
      *(void **)(this + 0x10) = pvVar1;
      *(undefined4 *)(this + 0x18) = 0;
    }
    if (*(int *)(this + 0x14) < 0) {
      iVar2 = *(int *)(this + 0x14) << 4;
      do {
        puVar3 = (undefined4 *)(*(int *)(this + 0x10) + iVar2);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
        }
        iVar2 = iVar2 + 0x10;
      } while (iVar2 < 0);
    }
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519490 */

void __thiscall gsMP_STAT::AddTraffic(gsMP_STAT *this,int param_1,int param_2)

{
  arrVector<struct_gsMP_STAT::TRAFFIC_REC> *this_00;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(this + 0x14)) {
    piVar1 = *(int **)(this + 0x10);
    piVar6 = piVar1;
    do {
      if (*piVar6 == param_1) {
        piVar1[iVar5 * 4 + 1] = piVar1[iVar5 * 4 + 1] + param_2;
        piVar1 = (int *)(*(int *)(this + 0x10) + 8 + iVar5 * 0x10);
        *piVar1 = *piVar1 + param_2;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 4;
    } while (iVar5 < *(int *)(this + 0x14));
  }
  if (iVar5 == *(int *)(this + 0x14)) {
    iVar2 = *(int *)(this + 0x14);
    this_00 = (arrVector<struct_gsMP_STAT::TRAFFIC_REC> *)(this + 0x10);
    iVar5 = iVar2 + 1;
    if (*(int *)(this + 0x18) < iVar5) {
      iVar3 = *(int *)(this + 0x18) * 2;
      if (iVar3 <= iVar5) {
        iVar3 = iVar5;
      }
      arrVector<struct_gsMP_STAT::TRAFFIC_REC>::Reserve(this_00,iVar3);
    }
    iVar3 = iVar2 * 0x10;
    memmove((void *)(iVar5 * 0x10 + *(int *)this_00),(void *)(iVar3 + *(int *)this_00),
            (*(int *)(this + 0x14) - iVar2) * 0x10);
    if (iVar2 < iVar5) {
      iVar5 = iVar5 - iVar2;
      do {
        puVar4 = (undefined4 *)(*(int *)this_00 + iVar3);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
        }
        iVar3 = iVar3 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(this + 0x14);
    *(int *)(this + 0x14) = iVar5 + 1;
    *(int *)((iVar5 + 1) * 0x10 + -0x10 + *(int *)this_00) = param_1;
    *(int *)(*(int *)(this + 0x14) * 0x10 + -0xc + *(int *)this_00) = param_2;
    *(int *)(*(int *)(this + 0x14) * 0x10 + -8 + *(int *)this_00) = param_2;
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519590 */

gsMP_NETWORK * __thiscall gsMP_NETWORK::gsMP_NETWORK(gsMP_NETWORK *this)

{
  arrVector<struct_gsMP_STAT::TRAFFIC_REC> *this_00;
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this_00 = (arrVector<struct_gsMP_STAT::TRAFFIC_REC> *)(this + 0xd4);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x4d414452;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &msgADDR::_vftable_;
  *(undefined4 *)this_00 = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  if (*(int *)(this + 0xd8) < 0) {
    arrVector<struct_gsMP_STAT::TRAFFIC_REC>::Reserve(this_00,0);
    if (*(int *)(this + 0xd8) < 0) {
      iVar1 = *(int *)(this + 0xd8) << 4;
      do {
        puVar2 = (undefined4 *)(*(int *)this_00 + iVar1);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
        }
        iVar1 = iVar1 + 0x10;
      } while (iVar1 < 0);
    }
  }
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x30] = (gsMP_NETWORK)0x0;
  this[0x70] = (gsMP_NETWORK)0x0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xcc) = 0;
  if (*(int *)(this + 0xd8) < 0) {
    if (*(int *)(this + 0xdc) < 0) {
      arrVector<struct_gsMP_STAT::TRAFFIC_REC>::Realloc
                ((arrVector<struct_gsMP_STAT::TRAFFIC_REC> *)(this + 0xd4),0);
    }
    if (*(int *)(this + 0xd8) < 0) {
      iVar1 = *(int *)(this + 0xd8) << 4;
      do {
        puVar2 = (undefined4 *)(*(int *)(this + 0xd4) + iVar1);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
        }
        iVar1 = iVar1 + 0x10;
      } while (iVar1 < 0);
    }
  }
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 005196B0
   addr: 005196B0 */

void * __thiscall gsMP_NETWORK::_vector_deleting_destructor_(gsMP_NETWORK *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    if (___real_00000000 < *(float *)(this + 0xb0)) {
      *(undefined4 *)(this + 0xb0) = 0;
    }
    (**(code **)(**(int **)(this + 0x2c) + 0x48))();
    (**(code **)(**(int **)(this + 0x2c) + 0x90))();
    (**(code **)(**(int **)(this + 0x2c) + 0x78))(0);
    if (*(undefined4 **)(this + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x2c))(1);
    }
    *(undefined4 *)(this + 0x2c) = 0;
  }
  apFree(*(void **)(this + 0xd4));
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519740 */

void __thiscall gsMP_NETWORK::UpdStat(gsMP_NETWORK *this,float param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = *(int *)(this + 0x2c);
  if (iVar4 != 0) {
    fVar1 = param_1 * ___real_44800000;
    *(float *)(this + 200) = (float)*(int *)(iVar4 + 0xc) / fVar1;
    *(float *)(this + 0xc4) = (float)*(int *)(iVar4 + 8) / fVar1;
    fVar1 = *(float *)(this + 0xd0);
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(iVar4 + 0x10);
    *(float *)(this + 0xd0) = param_1 + fVar1;
    if (___real_3f800000 < param_1 + fVar1) {
      iVar4 = 0;
      if (0 < *(int *)(this + 0xd8)) {
        do {
          iVar2 = *(int *)(this + 0xd4);
          uVar3 = ftol();
          *(undefined4 *)(iVar5 + iVar2 + 0xc) = uVar3;
          iVar4 = iVar4 + 1;
          *(undefined4 *)(iVar5 + 8 + *(int *)(this + 0xd4)) = 0;
          iVar5 = iVar5 + 0x10;
        } while (iVar4 < *(int *)(this + 0xd8));
      }
      *(undefined4 *)(this + 0xd0) = 0;
    }
    iVar4 = *(int *)(this + 0x2c);
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519800 */

void __thiscall gsMP_NETWORK::Drv_Create(gsMP_NETWORK *this,int param_1)

{
  netDRV_DPUBI *this_00;
  int *piVar1;
  undefined4 local_c;
  char *local_8;
  char *local_4;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    if (___real_00000000 < *(float *)(this + 0xb0)) {
      *(undefined4 *)(this + 0xb0) = 0;
    }
    (**(code **)(**(int **)(this + 0x2c) + 0x48))();
    (**(code **)(**(int **)(this + 0x2c) + 0x90))();
    (**(code **)(**(int **)(this + 0x2c) + 0x78))(0);
    if (*(undefined4 **)(this + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x2c))(1);
    }
    *(undefined4 *)(this + 0x2c) = 0;
  }
  *(int *)(this + 0x28) = param_1;
  if (param_1 == 0) {
    local_c = 0;
  }
  else {
    if (param_1 != 1) goto LAB_005198ab;
    local_c = 1;
    local_8 = s_WILLROCK_DEMO;
    local_4 = s_WRPC1_0;
  }
  this_00 = (netDRV_DPUBI *)operator_new(0x27a);
  if (this_00 == (netDRV_DPUBI *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)netDRV_DPUBI::netDRV_DPUBI(this_00);
  }
  *(int **)(this + 0x2c) = piVar1;
  (**(code **)(*piVar1 + 8))(&local_c);
LAB_005198ab:
  if (*(netDRV **)(this + 0x2c) != (netDRV *)0x0) {
    this[0x30] = (gsMP_NETWORK)0x0;
    this[0x70] = (gsMP_NETWORK)0x0;
    netDRV::SetCallback(*(netDRV **)(this + 0x2c),OnNetDrvEvent);
    *(undefined4 *)(this + 0xb0) = 0x41200000;
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 005198E0 */

int __thiscall gsMP_NETWORK::Drv_IsCreated(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0xc))();
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0xb0) = 0;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519910 */

int __thiscall gsMP_NETWORK::Drv_IsError(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x10))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (*(float *)(this + 0xb0) < ___real_00000000) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519950 */

char * __thiscall gsMP_NETWORK::Drv_GetStatus(gsMP_NETWORK *this)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int **)(this + 0x2c) == (int *)0x0) {
    return s_Unknown;
  }
  iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x10))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00519970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar2 = (char *)(**(code **)(**(int **)(this + 0x2c) + 0x14))();
    return pcVar2;
  }
  if (*(float *)(this + 0xb0) < ___real_00000000) {
    return s_Init_timeout;
  }
                    /* WARNING: Could not recover jumptable at 0x00519993. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar2 = (char *)(**(code **)(**(int **)(this + 0x2c) + 0x14))();
  return pcVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 005199A0 */

void __thiscall gsMP_NETWORK::Drv_Stop(gsMP_NETWORK *this)

{
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    if (___real_00000000 < *(float *)(this + 0xb0)) {
      *(undefined4 *)(this + 0xb0) = 0;
    }
    (**(code **)(**(int **)(this + 0x2c) + 0x48))();
    (**(code **)(**(int **)(this + 0x2c) + 0x90))();
    (**(code **)(**(int **)(this + 0x2c) + 0x78))(0);
    if (*(undefined4 **)(this + 0x2c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x2c))(1);
    }
    *(undefined4 *)(this + 0x2c) = 0;
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519A00 */

char * __thiscall gsMP_NETWORK::Drv_GetIdString(gsMP_NETWORK *this)

{
  if (*(int *)(this + 0x28) == 0) {
    return s_LAN;
  }
  if (*(int *)(this + 0x28) != 1) {
    return s_;
  }
  return s_UBI;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519A20 */

int __thiscall gsMP_NETWORK::Drv_IsPasswordRequired(gsMP_NETWORK *this)

{
  if ((*(int *)(this + 0x28) != 0) && (*(int *)(this + 0x28) == 1)) {
    return 1;
  }
  return 0;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519A40 */

void __thiscall
gsMP_NETWORK::Drv_SetUserNameAndPassword(gsMP_NETWORK *this,char *param_1,char *param_2)

{
  strncpy((char *)(this + 0x30),param_1,0x40);
  this[0x6f] = (gsMP_NETWORK)0x0;
  strncpy((char *)(this + 0x70),param_2,0x40);
  this[0xaf] = (gsMP_NETWORK)0x0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519AB0 */

float __thiscall gsMP_NETWORK::Drv_GetRefreshInterval(gsMP_NETWORK *this)

{
  float10 fVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00519ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = (float10)(**(code **)(**(int **)(this + 0x2c) + 0x28))();
    return (float)fVar1;
  }
  return ___real_41a00000;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519AD0 */

void __thiscall gsMP_NETWORK::Server_Start(gsMP_NETWORK *this,gsMP_SERVER_INFO *param_1)

{
  gsMP_SERVER_INFO *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined4 local_e;
  gsMP_NETWORK *local_a;
  gsMP_NETWORK *local_6;
  
  if (*(int *)(this + 0x28) == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x40);
    local_10 = *(undefined2 *)(param_1 + 0x4c);
    local_6 = (gsMP_NETWORK *)s_;
    local_e = 0;
  }
  else {
    if (*(int *)(this + 0x28) != 1) goto LAB_00519b59;
    local_1c = *(undefined4 *)(param_1 + 0x40);
    local_10 = *(undefined2 *)(param_1 + 0x4c);
    local_e = *(undefined4 *)(param_1 + 0x50);
    local_6 = this + 0x70;
  }
  local_a = this + 0x30;
  local_14 = 0;
  local_18 = 0;
  local_20 = param_1;
  (**(code **)(**(int **)(this + 0x2c) + 0x2c))(&local_20);
LAB_00519b59:
  *(undefined4 *)(this + 0xb4) = 0x41a00000;
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519B90 */

int __thiscall gsMP_NETWORK::Server_IsStarted(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x30))();
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0xb4) = 0;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519BC0 */

int __thiscall gsMP_NETWORK::Server_IsError(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x34))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (*(float *)(this + 0xb4) < ___real_00000000) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519C00 */

char * __thiscall gsMP_NETWORK::Server_GetStatus(gsMP_NETWORK *this)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int **)(this + 0x2c) == (int *)0x0) {
    return s_Unknown;
  }
  iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x34))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00519c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar2 = (char *)(**(code **)(**(int **)(this + 0x2c) + 0x38))();
    return pcVar2;
  }
  if (*(float *)(this + 0xb4) < ___real_00000000) {
    return s_Server_create_timeout;
  }
                    /* WARNING: Could not recover jumptable at 0x00519c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar2 = (char *)(**(code **)(**(int **)(this + 0x2c) + 0x38))();
  return pcVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519C50 */

void __thiscall gsMP_NETWORK::Server_Stop(gsMP_NETWORK *this)

{
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0x48))();
    if (___real_00000000 < *(float *)(this + 0xb4)) {
      *(undefined4 *)(this + 0xb4) = 0;
    }
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519C80 */

void __thiscall
gsMP_NETWORK::Server_SendDataToClient
          (gsMP_NETWORK *this,int param_1,void *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if ((*(int **)(this + 0x2c) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x30))(), iVar1 != 0)) {
    *(undefined4 *)(this + 0xb4) = 0;
                    /* WARNING: Could not recover jumptable at 0x00519cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x2c) + 0x3c))();
    return;
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519CF0 */

void __thiscall gsMP_NETWORK::Browser_Start(gsMP_NETWORK *this)

{
  gsMP_NETWORK *local_8;
  gsMP_NETWORK *local_4;
  
  if (*(int *)(this + 0x28) == 0) {
    local_4 = (gsMP_NETWORK *)s_;
  }
  else {
    if (*(int *)(this + 0x28) != 1) goto LAB_00519d2d;
    local_4 = this + 0x70;
  }
  local_8 = this + 0x30;
  (**(code **)(**(int **)(this + 0x2c) + 100))(&local_8);
LAB_00519d2d:
  *(undefined4 *)(this + 0xb8) = 0x41a00000;
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519D40 */

int __thiscall gsMP_NETWORK::Browser_IsStarted(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x68))();
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0xb8) = 0;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519D70 */

int __thiscall gsMP_NETWORK::Browser_IsError(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x6c))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (*(float *)(this + 0xb8) < ___real_00000000) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 00519DB0 */

char * __thiscall gsMP_NETWORK::Browser_GetStatus(gsMP_NETWORK *this)

{
  int iVar1;
  char *pcVar2;
  
  if (*(int **)(this + 0x2c) == (int *)0x0) {
    return s_Unknown;
  }
  iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x6c))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00519dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar2 = (char *)(**(code **)(**(int **)(this + 0x2c) + 0x70))();
    return pcVar2;
  }
  if (*(float *)(this + 0xb8) < ___real_00000000) {
    return s_Browser_create_timeout;
  }
                    /* WARNING: Could not recover jumptable at 0x00519df3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar2 = (char *)(**(code **)(**(int **)(this + 0x2c) + 0x70))();
  return pcVar2;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519E00 */

void __thiscall gsMP_NETWORK::Browser_Stop(gsMP_NETWORK *this,int param_1)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x68))();
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00519e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(this + 0x2c) + 0x78))();
      return;
    }
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519E30 */

void __thiscall gsMP_NETWORK::Browser_RefreshServers(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x68))();
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0xb8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00519e53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(this + 0x2c) + 0x74))();
      return;
    }
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519E60 */

int __thiscall gsMP_NETWORK::Browser_IsServerListUpdated(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x68))();
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0xb8) = 0;
      iVar1 = netDRV::Browser_IsServerListUpdated(*(netDRV **)(this + 0x2c));
      return iVar1;
    }
  }
  return 0;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519E90 */

int __thiscall gsMP_NETWORK::Browser_IsServerIdValid(gsMP_NETWORK *this,int param_1)

{
  netDRV_SERVER_INFO *pnVar1;
  
  pnVar1 = netDRV::Browser_GetServerInfo(*(netDRV **)(this + 0x2c),param_1);
  return (uint)(pnVar1 != (netDRV_SERVER_INFO *)0x0);
}




/* from: gs:gs_mp_network.cpp
   addr: 00519EC0 */

void __thiscall
gsMP_NETWORK::Browser_GetServerInfo(gsMP_NETWORK *this,int param_1,gsMP_SERVER_INFO *param_2)

{
  netDRV_SERVER_INFO *pnVar1;
  
  pnVar1 = netDRV::Browser_GetServerInfo(*(netDRV **)(this + 0x2c),param_1);
  strncpy((char *)param_2,(char *)(pnVar1 + 4),0x40);
  param_2[0x3f] = (gsMP_SERVER_INFO)0x0;
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(pnVar1 + 0x44);
  *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(pnVar1 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(pnVar1 + 0x4c);
  *(undefined4 *)(param_2 + 0x4c) = 0;
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519F10 */

void __thiscall
gsMP_NETWORK::Browser_GetServerMainData(gsMP_NETWORK *this,int param_1,void *param_2,int *param_3)

{
  netDRV_SERVER_INFO *pnVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  pnVar1 = netDRV::Browser_GetServerInfo(*(netDRV **)(this + 0x2c),param_1);
  if ((param_2 != (void *)0x0) && (uVar3 = *(uint *)(pnVar1 + 0x54), (int)uVar3 <= *param_3)) {
    puVar4 = *(undefined4 **)(pnVar1 + 0x50);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = (undefined4 *)((int)param_2 + 4);
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)param_2 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
    *param_3 = *(int *)(pnVar1 + 0x54);
    return;
  }
  *param_3 = *(int *)(pnVar1 + 0x54);
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519F60 */

void __thiscall gsMP_NETWORK::Client_JoinBrowsedGame(gsMP_NETWORK *this,int param_1)

{
  int local_10 [2];
  gsMP_NETWORK *local_8;
  gsMP_NETWORK *local_4;
  
  if ((-1 < *(int *)(this + 0x28)) && (*(int *)(this + 0x28) < 2)) {
    local_4 = this + 0x70;
    local_8 = this + 0x30;
    local_10[0] = param_1;
    local_10[1] = 0;
    (**(code **)(**(int **)(this + 0x2c) + 0x7c))(local_10);
  }
  *(undefined4 *)(this + 0xbc) = 0x41a00000;
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 00519FB0 */

void __thiscall gsMP_NETWORK::Client_JoinAddress(gsMP_NETWORK *this,char *param_1)

{
  undefined4 local_10;
  char *local_c;
  gsMP_NETWORK *local_8;
  gsMP_NETWORK *local_4;
  
  if ((-1 < *(int *)(this + 0x28)) && (*(int *)(this + 0x28) < 2)) {
    local_4 = this + 0x70;
    local_8 = this + 0x30;
    local_c = param_1;
    local_10 = 0xffffffff;
    (**(code **)(**(int **)(this + 0x2c) + 0x7c))(&local_10);
  }
  *(undefined4 *)(this + 0xbc) = 0x41a00000;
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 0051A000 */

int __thiscall gsMP_NETWORK::Client_IsJoined(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x80))();
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0xbc) = 0;
      return 1;
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 0051A030 */

int __thiscall gsMP_NETWORK::Client_IsError(gsMP_NETWORK *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x84))();
  if (iVar1 != 0) {
    return 1;
  }
  if (*(float *)(this + 0xbc) < ___real_00000000) {
    return 1;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 0051A070 */

char * __thiscall gsMP_NETWORK::Client_GetStatus(gsMP_NETWORK *this)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x84))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0051a088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar2 = (char *)(**(code **)(**(int **)(this + 0x2c) + 0x88))();
    return pcVar2;
  }
  if (*(float *)(this + 0xbc) < ___real_00000000) {
    return s_Client_create_timeout;
  }
                    /* WARNING: Could not recover jumptable at 0x0051a0ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar2 = (char *)(**(code **)(**(int **)(this + 0x2c) + 0x88))();
  return pcVar2;
}




/* from: gs:gs_mp_network.cpp
   addr: 0051A0C0 */

void __thiscall gsMP_NETWORK::Client_DisconnectFromGame(gsMP_NETWORK *this)

{
  int iVar1;
  
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x80))();
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0xbc) = 0;
                    /* WARNING: Could not recover jumptable at 0x0051a0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(this + 0x2c) + 0x90))();
      return;
    }
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 0051A0F0 */

void __thiscall
gsMP_NETWORK::Client_SendDataToServer(gsMP_NETWORK *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(int **)(this + 0x2c) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x80))(), iVar1 != 0)) {
    *(undefined4 *)(this + 0xbc) = 0;
                    /* WARNING: Could not recover jumptable at 0x0051a137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x2c) + 0x8c))();
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 0051A150 */

int __thiscall
gsMP_NETWORK::ProcessMsg(gsMP_NETWORK *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  float fVar1;
  
  if (param_1 == 1000) {
    if (*(int **)(this + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x2c) + 4))();
    }
    if ((___real_00000000 < *(float *)(this + 0xb0)) &&
       (fVar1 = *(float *)(this + 0xb0) - gsElapsedTime, *(float *)(this + 0xb0) = fVar1,
       fVar1 == ___real_00000000)) {
      *(undefined4 *)(this + 0xb0) = 0xbf800000;
    }
    if ((___real_00000000 < *(float *)(this + 0xb4)) &&
       (fVar1 = *(float *)(this + 0xb4) - gsElapsedTime, *(float *)(this + 0xb4) = fVar1,
       fVar1 == ___real_00000000)) {
      *(undefined4 *)(this + 0xb4) = 0xbf800000;
    }
    if ((___real_00000000 < *(float *)(this + 0xb8)) &&
       (fVar1 = *(float *)(this + 0xb8) - gsElapsedTime, *(float *)(this + 0xb8) = fVar1,
       fVar1 == ___real_00000000)) {
      *(undefined4 *)(this + 0xb8) = 0xbf800000;
    }
    if ((___real_00000000 < *(float *)(this + 0xbc)) &&
       (fVar1 = *(float *)(this + 0xbc) - gsElapsedTime, *(float *)(this + 0xbc) = fVar1,
       fVar1 == ___real_00000000)) {
      *(undefined4 *)(this + 0xbc) = 0xbf800000;
    }
    if ((___real_00000000 < *(float *)(this + 0xc0)) &&
       (fVar1 = *(float *)(this + 0xc0) - gsElapsedTime, *(float *)(this + 0xc0) = fVar1,
       fVar1 == ___real_00000000)) {
      *(undefined4 *)(this + 0xc0) = 0xbf800000;
    }
  }
  return 0;
}




/* from: gs:gs_mp_network.cpp
   addr: 0051A2A0 */

void __thiscall gsMP_NETWORK::Server_ResetLadder(gsMP_NETWORK *this)

{
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0x60))();
    *(undefined4 *)(this + 0xc0) = 0;
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 0051A2C0 */

void __thiscall gsMP_NETWORK::Server_StopLadder(gsMP_NETWORK *this)

{
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0x5c))();
    *(undefined4 *)(this + 0xc0) = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 0051A2E0 */

int __thiscall gsMP_NETWORK::Server_GetLadderStatus(gsMP_NETWORK *this)

{
  undefined4 uVar1;
  
  if (*(float *)(this + 0xc0) < ___real_00000000) {
switchD_0051a30a_caseD_4:
    return 3;
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(this + 0x2c) + 0x58))();
    switch(uVar1) {
    case 1:
    case 2:
      return 1;
    case 3:
      return 2;
    case 4:
      goto switchD_0051a30a_caseD_4;
    }
  }
  return 0;
}




/* from: gs:gs_mp_network.cpp
   addr: 0051A340 */

void __thiscall gsMP_NETWORK::Server_StartLadderSending(gsMP_NETWORK *this)

{
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 0x4c))();
    *(undefined4 *)(this + 0xc0) = 0x41a00000;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_network.cpp
   addr: 0051A380 */

void __fastcall gsMP_NETWORK::OnNetDrvEvent(netDRV_EVENT *param_1)

{
  switch(*(undefined4 *)param_1) {
  case 1:
    if ((___real_00000000 < *(float *)(gsSysNetwork + 0xb0)) &&
       (*(float *)(gsSysNetwork + 0xb0) = *(float *)(gsSysNetwork + 0xb0) + ___real_40a00000,
       *(float *)(gsSysNetwork + 0xb0) < ___real_41a00000)) {
      *(undefined4 *)(gsSysNetwork + 0xb0) = 0x41a00000;
      return;
    }
    break;
  case 2:
    if ((___real_00000000 < *(float *)(gsSysNetwork + 0xb4)) &&
       (*(float *)(gsSysNetwork + 0xb4) = *(float *)(gsSysNetwork + 0xb4) + ___real_40a00000,
       *(float *)(gsSysNetwork + 0xb4) < ___real_41a00000)) {
      *(undefined4 *)(gsSysNetwork + 0xb4) = 0x41a00000;
      return;
    }
    break;
  case 3:
    (**(code **)(*(int *)gsSysServer + 0x20))(*(undefined4 *)(param_1 + 4));
    return;
  case 4:
    (**(code **)(*(int *)gsSysServer + 0x24))(*(undefined4 *)(param_1 + 4));
    return;
  case 5:
    gsMP_SERVER::ReceiveMsg
              (gsSysServer,*(ulong *)(param_1 + 4),*(void **)(param_1 + 8),*(int *)(param_1 + 0xc));
    return;
  case 6:
    if ((___real_00000000 < *(float *)(gsSysNetwork + 0xb8)) &&
       (*(float *)(gsSysNetwork + 0xb8) = *(float *)(gsSysNetwork + 0xb8) + ___real_40a00000,
       *(float *)(gsSysNetwork + 0xb8) < ___real_41a00000)) {
      *(undefined4 *)(gsSysNetwork + 0xb8) = 0x41a00000;
      return;
    }
    break;
  case 7:
    if ((___real_00000000 < *(float *)(gsSysNetwork + 0xbc)) &&
       (*(float *)(gsSysNetwork + 0xbc) = *(float *)(gsSysNetwork + 0xbc) + ___real_40a00000,
       *(float *)(gsSysNetwork + 0xbc) < ___real_41a00000)) {
      *(undefined4 *)(gsSysNetwork + 0xbc) = 0x41a00000;
      return;
    }
    break;
  case 8:
    (**(code **)(*(int *)gsSysClient + 0x30))
              (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 0051A570 */

void __thiscall
arrVector<struct_gsMP_STAT::TRAFFIC_REC>::Reserve
          (arrVector<struct_gsMP_STAT::TRAFFIC_REC> *this,int param_1)

{
  void *pvVar1;
  
  if (*(int *)(this + 8) < param_1) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 << 4);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}




/* from: gs:gs_mp_network.cpp
   addr: 0051A5A0 */

void __thiscall
arrVector<struct_gsMP_STAT::TRAFFIC_REC>::Realloc
          (arrVector<struct_gsMP_STAT::TRAFFIC_REC> *this,int param_1)

{
  void *pvVar1;
  
  if (param_1 != *(int *)(this + 8)) {
    if (param_1 < *(int *)(this + 4)) {
      *(int *)(this + 4) = param_1;
    }
    pvVar1 = apRealloc(*(void **)this,param_1 << 4);
    *(void **)this = pvVar1;
    *(int *)(this + 8) = param_1;
  }
  return;
}

