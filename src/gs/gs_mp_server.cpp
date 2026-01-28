
/* from: gs:gs_mp_server.cpp
   addr: 004FCA40 */

gsMP_SERVER * __thiscall gsMP_SERVER::gsMP_SERVER(gsMP_SERVER *this)

{
  int iVar1;
  gsMP_SERVER *pgVar2;
  int iVar3;
  gsMP_SERVER *pgVar4;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x4d414452;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined ***)this = &msgADDR::_vftable_;
  this[0x28] = (gsMP_SERVER)0x0;
  gsMP_CONNECTION::gsMP_CONNECTION((gsMP_CONNECTION *)(this + 0x68));
  *(undefined ***)this = &gsMP_COMM::_vftable_;
  *(undefined4 *)(this + 0x470) = 0;
  pgVar2 = this + 0x474;
  iVar3 = 0x10;
  do {
    pgVar2[8] = (gsMP_SERVER)0x0;
    pgVar4 = pgVar2;
    for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pgVar4 = 0;
      pgVar4 = pgVar4 + 4;
    }
    *(undefined4 *)(pgVar2 + 0x50) = 0x3d088889;
    *(undefined4 *)pgVar2 = 0xfffffffd;
    pgVar2 = pgVar2 + 0x58;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1c) = 10;
  *(undefined4 *)(this + 0x9f4) = 0;
  *(undefined4 *)(this + 0x9fc) = 0;
  return this;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCAD0
   addr: 004FCAD0 */

void * __thiscall gsMP_SERVER::_vector_deleting_destructor_(gsMP_SERVER *this,uint param_1)

{
  *(undefined ***)this = &_vftable_;
  gsMP_CONNECTION::~gsMP_CONNECTION((gsMP_CONNECTION *)(this + 0x68));
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCB00
   addr: 004FCB00 */

void * __thiscall gsMP_COMM::_scalar_deleting_destructor_(gsMP_COMM *this,uint param_1)

{
  gsMP_CONNECTION::~gsMP_CONNECTION((gsMP_CONNECTION *)(this + 0x68));
  msgADDR::~msgADDR((msgADDR *)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCB30 */

void __thiscall gsMP_SERVER::~gsMP_SERVER(gsMP_SERVER *this)

{
  *(undefined ***)this = &_vftable_;
  gsMP_CONNECTION::~gsMP_CONNECTION((gsMP_CONNECTION *)(this + 0x68));
  msgADDR::~msgADDR((msgADDR *)this);
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCB50 */

int __thiscall gsMP_SERVER::AddClient(gsMP_SERVER *this,ulong param_1)

{
  if (0xf < *(int *)(this + 0x9f4)) {
    return 0;
  }
  *(ulong *)(this + *(int *)(this + 0x9f4) * 0x58 + 0x474) = param_1;
  *(int *)(this + 0x9f4) = *(int *)(this + 0x9f4) + 1;
  return 1;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCB90 */

void __thiscall gsMP_SERVER::RemoveClient(gsMP_SERVER *this,ulong param_1)

{
  gsMP_SERVER *pgVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  gsMP_SERVER *pgVar5;
  
  if ((*(int *)(gsSysMP + 0x28) == 1) && (param_1 == 0xffffffff)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    if (*(int *)(this + 0x9f4) < 1) {
      return;
    }
    pgVar1 = this + 0x474;
    while (*(ulong *)pgVar1 != param_1) {
      iVar4 = iVar4 + 1;
      pgVar1 = pgVar1 + 0x58;
      if (*(int *)(this + 0x9f4) <= iVar4) {
        return;
      }
    }
    if (iVar4 < 0) {
      return;
    }
    if ((param_1 != 0xffffffff) && (*(msgADDR **)(this + iVar4 * 0x58 + 0x478) != (msgADDR *)0x0)) {
      msgSYSTEM::PostMsg(&msgSystem,*(msgADDR **)(this + iVar4 * 0x58 + 0x478),2,(msgADDR *)0x0);
    }
  }
  if (iVar4 < *(int *)(this + 0x9f4) + -1) {
    pgVar1 = this + iVar4 * 0x58 + 0x4cc;
    pgVar5 = this + iVar4 * 0x58 + 0x474;
    for (uVar2 = (uint)(((*(int *)(this + 0x9f4) - iVar4) + -1) * 0x58) >> 2; uVar2 != 0;
        uVar2 = uVar2 - 1) {
      *(undefined4 *)pgVar5 = *(undefined4 *)pgVar1;
      pgVar1 = pgVar1 + 4;
      pgVar5 = pgVar5 + 4;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pgVar5 = *pgVar1;
      pgVar1 = pgVar1 + 1;
      pgVar5 = pgVar5 + 1;
    }
  }
  iVar4 = *(int *)(this + 0x9f4);
  *(int *)(this + 0x9f4) = iVar4 + -1;
  pgVar1 = this + (iVar4 + -1) * 0x58 + 0x474;
  for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pgVar1 = 0;
    pgVar1 = pgVar1 + 4;
  }
  *(undefined4 *)(this + *(int *)(this + 0x9f4) * 0x58 + 0x474) = 0xfffffffd;
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCC90 */

void __thiscall gsMP_SERVER::AddPlayer(gsMP_SERVER *this,entENTITY *param_1,ulong param_2)

{
  int iVar1;
  gsMP_SERVER *pgVar2;
  char *pcVar3;
  
  if (((byte)this[0x470] & 1) == 0) {
    if ((*(int *)(gsSysMP + 0x28) == 1) && (param_2 == 0xffffffff)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      if (0 < *(int *)(this + 0x9f4)) {
        pgVar2 = this + 0x474;
        do {
          if (*(ulong *)pgVar2 == param_2) goto LAB_004fccde;
          iVar1 = iVar1 + 1;
          pgVar2 = pgVar2 + 0x58;
        } while (iVar1 < *(int *)(this + 0x9f4));
      }
      iVar1 = -1;
    }
  }
  else {
    iVar1 = 0;
  }
LAB_004fccde:
  *(entENTITY **)(this + iVar1 * 0x58 + 0x478) = param_1;
  pcVar3 = *(char **)(*(int *)(param_1 + 0xbc) + 0x18);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = s_;
  }
  apNAME::SetName((apNAME *)(this + iVar1 * 0x58 + 0x47c),pcVar3);
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCD20 */

entENTITY * __thiscall gsMP_SERVER::GetNextPlayer(gsMP_SERVER *this,entENTITY *param_1)

{
  int iVar1;
  
  if (((byte)this[0x470] & 1) != 0) {
    if (param_1 != (entENTITY *)0x0) {
      return (entENTITY *)0x0;
    }
    return *(entENTITY **)(this + 0x478);
  }
  if (param_1 == (entENTITY *)0x0) {
    *(undefined4 *)(this + 0x9f8) = 0;
  }
  else {
    if (*(int *)(this + 0x9f4) <= *(int *)(this + 0x9f8)) {
      return (entENTITY *)0x0;
    }
    iVar1 = *(int *)(this + 0x9f8) + 1;
    *(int *)(this + 0x9f8) = iVar1;
    if (*(int *)(this + 0x9f4) <= iVar1) {
      return (entENTITY *)0x0;
    }
  }
  return *(entENTITY **)(this + (*(int *)(this + 0x9f8) + 0xd) * 0x58);
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCD90 */

int __thiscall gsMP_SERVER::GetNPlayer(gsMP_SERVER *this)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(int *)(gsSysMP + 0x28) != 1) {
    iVar1 = *(int *)(this + 0x9f4);
  }
  return iVar1;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCDB0 */

entENTITY * __thiscall gsMP_SERVER::GetPlayer(gsMP_SERVER *this,int param_1)

{
  if ((*(int *)(gsSysMP + 0x28) == 1) && (param_1 == 0)) {
    return *(entENTITY **)(this + 0x478);
  }
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x9f4))) {
    return *(entENTITY **)(this + param_1 * 0x58 + 0x478);
  }
  return (entENTITY *)0x0;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCDF0 */

void __thiscall gsMP_SERVER::DeclSyncable(gsMP_SERVER *this,entIACTIVE_OBJ *param_1)

{
  if (*(int *)(param_1 + 0x8c) == -1) {
    if (*(int *)(gsSysMP + 0x28) == 3) {
      *(undefined4 *)(param_1 + 0x8c) = 0xfffffffd;
      return;
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 6;
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(this + 0x9fc);
    *(int *)(this + 0x9fc) = *(int *)(this + 0x9fc) + 1;
  }
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCE50 */

void __thiscall gsMP_SERVER::UnDeclSyncable(gsMP_SERVER *this,entIACTIVE_OBJ *param_1)

{
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCE70 */

void __thiscall gsMP_SERVER::NotifyNewMPID(gsMP_SERVER *this,ulong param_1)

{
  if (*(uint *)(this + 0x9fc) <= param_1) {
    *(ulong *)(this + 0x9fc) = param_1 + 1;
  }
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCE90 */

int __thiscall
gsMP_SERVER::CreateSyncInfo(gsMP_SERVER *this,entIACTIVE_OBJ *param_1,gsMSG_MP_SYNC *param_2)

{
  gsMSG_MP_SYNC gVar1;
  entIACTIVE_OBJ eVar2;
  int iVar3;
  char *pcVar4;
  entIACTIVE_OBJ *peVar5;
  
  iVar3 = (**(code **)(*(int *)param_1 + 0x10))();
  if (iVar3 == 0) {
    return 0;
  }
  pcVar4 = s_;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x14);
  do {
    gVar1 = (gsMSG_MP_SYNC)*pcVar4;
    (param_2 + -0x601fd0)[(int)pcVar4] = gVar1;
    pcVar4 = (char *)((gsMSG_MP_SYNC *)pcVar4 + 1);
  } while (gVar1 != (gsMSG_MP_SYNC)0x0);
  pcVar4 = s_;
  do {
    gVar1 = (gsMSG_MP_SYNC)*pcVar4;
    (param_2 + -0x601f90)[(int)pcVar4] = gVar1;
    pcVar4 = (char *)((gsMSG_MP_SYNC *)pcVar4 + 1);
  } while (gVar1 != (gsMSG_MP_SYNC)0x0);
  peVar5 = param_1 + 0x44;
  iVar3 = 0x98 - (int)peVar5;
  do {
    eVar2 = *peVar5;
    peVar5[(int)(param_2 + iVar3)] = eVar2;
    peVar5 = peVar5 + 1;
  } while (eVar2 != (entIACTIVE_OBJ)0x0);
  (**(code **)(*(int *)param_1 + 0x14))(param_2);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x30);
  return 1;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCF10 */

msgDATA * __thiscall gsMP_SERVER::CreateSyncUsrInfo(gsMP_SERVER *this,entIACTIVE_OBJ *param_1)

{
  entIACTIVE_OBJ *peVar1;
  int iVar2;
  
  peVar1 = param_1;
  iVar2 = (**(code **)(*(int *)param_1 + 0x10))();
  if (iVar2 == 0) {
    return (msgDATA *)0x0;
  }
  param_1 = (entIACTIVE_OBJ *)0x0;
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar1,0x404,&param_1,(msgADDR *)0x0);
  return (msgDATA *)param_1;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FCF50 */

void __thiscall gsMP_SERVER::SyncClient(gsMP_SERVER *this,entENTITY *param_1)

{
  char cVar1;
  entIACTIVE_OBJ eVar2;
  entIACTIVE_OBJ *peVar3;
  int iVar4;
  entIACTIVE_OBJ *peVar5;
  msgADDR *pmVar6;
  entENTITY *peVar7;
  gsMP_SERVER *pgVar8;
  gsMSG_MP_PTR *pgStack_1f8;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d0;
  undefined1 auStack_1cc [4];
  gsMSG_MP_PTR local_1c8 [2];
  undefined2 local_1c6;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  char local_1b0 [64];
  char acStack_170 [64];
  entIACTIVE_OBJ local_130 [64];
  undefined4 local_f0;
  animCREATE_DATA local_ec [128];
  undefined1 auStack_6c [4];
  gsMSG_MP_UPD_POS agStack_68 [104];
  
  pgStack_1f8 = (gsMSG_MP_PTR *)0x4fcf65;
  gsMSG_MP_PTR::gsMSG_MP_PTR(local_1c8);
  local_1c0 = 0xffffffff;
  local_1bc = 0xfffffffd;
  local_1b8 = 0;
  local_f0 = 0xffffffff;
  pgStack_1f8 = (gsMSG_MP_PTR *)0x4fcf8f;
  animCREATE_DATA::animCREATE_DATA(local_ec);
  local_1b0[0] = '\0';
  local_130[0] = (entIACTIVE_OBJ)0x0;
  local_1c6 = 0x172;
  local_1dc = 0xffffffff;
  local_1d8 = 1;
  pgStack_1f8 = (gsMSG_MP_PTR *)0x4fcfc7;
  for (peVar3 = entFindNextIO((entIACTIVE_OBJ *)0x0); peVar3 != (entIACTIVE_OBJ *)0x0;
      peVar3 = entFindNextIO(peVar3)) {
    if (peVar3 != (entIACTIVE_OBJ *)param_1) {
      pgStack_1f8 = (gsMSG_MP_PTR *)0x4fcfe7;
      iVar4 = (**(code **)(*(int *)peVar3 + 0x10))();
      if (iVar4 != 0) {
        local_1c0 = *(undefined4 *)(peVar3 + 0x8c);
        iVar4 = 0;
        local_1bc = *(undefined4 *)(peVar3 + 0x14);
        do {
          cVar1 = s_[iVar4];
          local_1b0[iVar4] = cVar1;
          iVar4 = iVar4 + 1;
        } while (cVar1 != '\0');
        iVar4 = 0;
        do {
          cVar1 = s_[iVar4];
          acStack_170[iVar4] = cVar1;
          iVar4 = iVar4 + 1;
        } while (cVar1 != '\0');
        peVar5 = peVar3 + 0x44;
        iVar4 = -(int)peVar5;
        do {
          eVar2 = *peVar5;
          peVar5[(int)(local_130 + iVar4)] = eVar2;
          peVar5 = peVar5 + 1;
        } while (eVar2 != (entIACTIVE_OBJ)0x0);
        pgStack_1f8 = local_1c8;
        (**(code **)(*(int *)peVar3 + 0x14))();
        local_1b8 = *(undefined4 *)(peVar3 + 0x30);
        (**(code **)(*(int *)this + 0x2c))
                  (*(undefined4 *)(param_1 + 0x90),0,0x403,auStack_1cc,0x20000);
      }
    }
    pgStack_1f8 = (gsMSG_MP_PTR *)0x4fd070;
  }
  pgStack_1f8 = (gsMSG_MP_PTR *)0x20000;
  local_1bc = 0xffffffff;
  local_1c4 = 0;
  (**(code **)(*(int *)this + 0x2c))(*(undefined4 *)(param_1 + 0x90),0,0x403,local_1c8);
  for (pmVar6 = (msgADDR *)entFindNextIO((entIACTIVE_OBJ *)0x0); pmVar6 != (msgADDR *)0x0;
      pmVar6 = (msgADDR *)entFindNextIO((entIACTIVE_OBJ *)pmVar6)) {
    if ((pmVar6 != (msgADDR *)param_1) &&
       (iVar4 = (**(code **)(*(int *)pmVar6 + 0x10))(), iVar4 != 0)) {
      pgStack_1f8 = (gsMSG_MP_PTR *)0x0;
      msgSYSTEM::SendMsg(&msgSystem,pmVar6,0x404,&pgStack_1f8,(msgADDR *)0x0);
      if (pgStack_1f8 != (gsMSG_MP_PTR *)0x0) {
        gsEV_SYNC::gsEV_SYNC((gsEV_SYNC *)&stack0xfffffe18);
        (**(code **)(*(int *)this + 0x2c))
                  (*(undefined4 *)(param_1 + 0x90),pmVar6,0x40c,&stack0xfffffe18,0x20000);
      }
    }
  }
  for (peVar7 = entFindNext((entENTITY *)0x0); peVar7 != (entENTITY *)0x0;
      peVar7 = entFindNext(peVar7)) {
    if ((peVar7 != param_1) && ((*(uint *)(peVar7 + 0xb4) & 0x100) != 0)) {
      gsMSG_MP_UPD_POS::gsMSG_MP_UPD_POS(agStack_68);
      (**(code **)(*(int *)peVar7 + 0x50))(agStack_68);
      (**(code **)(*(int *)this + 0x2c))
                (*(undefined4 *)(param_1 + 0x90),peVar7,0x40a,auStack_6c,0x20000);
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(this + 0x9f4)) {
    pgVar8 = this + 0x478;
    do {
      if ((*(int *)(pgVar8 + 0x44) != 0) && (*(entENTITY **)pgVar8 != param_1)) {
        (**(code **)(*(int *)this + 0x2c))
                  (*(undefined4 *)(param_1 + 0x90),0,0x405,&stack0xfffffe0c,0x20000);
      }
      iVar4 = iVar4 + 1;
      pgVar8 = pgVar8 + 0x58;
    } while (iVar4 < *(int *)(this + 0x9f4));
  }
  uStack_1d0 = 0xfffffffe;
  local_1d8 = 0;
  (**(code **)(*(int *)this + 0x2c))(*(undefined4 *)(param_1 + 0x90),0,0x403,&local_1dc,0x20000);
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FD240 */

void __thiscall gsMP_SERVER::DeActivateClientAll(gsMP_SERVER *this)

{
  gsMP_SERVER *pgVar1;
  int iVar2;
  undefined1 local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  local_c = 0;
  local_b = 0x40;
  local_8 = 0xffffffff;
  local_a = 0xc;
  local_4 = 0;
  if (0 < *(int *)(this + 0x9f4)) {
    pgVar1 = this + 0x478;
    do {
      if ((*(int *)(pgVar1 + -4) != -1) && (*(msgADDR **)pgVar1 != (msgADDR *)0x0)) {
        msgSYSTEM::SendMsg(&msgSystem,*(msgADDR **)pgVar1,0x405,&local_c,(msgADDR *)0x0);
        *(undefined4 *)(pgVar1 + 0x44) = 0;
      }
      iVar2 = iVar2 + 1;
      pgVar1 = pgVar1 + 0x58;
    } while (iVar2 < *(int *)(this + 0x9f4));
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:gs_mp_server.cpp
   addr: 004FD2C0 */

int __thiscall
gsMP_SERVER::ProcessMsg(gsMP_SERVER *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  entIACTIVE_OBJ *peVar4;
  entENTITY *peVar5;
  int iVar6;
  char *pcVar7;
  gsMP_SERVER *pgVar8;
  int iVar9;
  gsMP_SERVER *pgVar10;
  undefined **local_324;
  undefined2 local_320;
  undefined2 uStack_31e;
  undefined2 uStack_31c;
  undefined2 uStack_31a;
  undefined2 uStack_318;
  m3dV local_314 [12];
  m3dV local_308 [4];
  gsMSG_MP_PTR agStack_304 [2];
  undefined2 uStack_302;
  undefined4 uStack_2fc;
  char acStack_2b8 [64];
  char acStack_278 [64];
  undefined4 uStack_238;
  animCREATE_DATA aaStack_234 [132];
  undefined1 auStack_1b0 [4];
  char acStack_1ac [16];
  undefined1 uStack_19c;
  undefined1 uStack_19b;
  undefined2 uStack_19a;
  undefined1 uStack_198;
  undefined1 uStack_94;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char acStack_40 [64];
  
  iVar9 = -3;
  if (param_1 == 0x400) {
    local_324 = (undefined **)0xffffffff;
    local_320 = 0xffff;
    uStack_31e = 0xfffd;
    uStack_31c = 0xffff;
    uStack_31a = 0;
    uStack_318 = 0;
    gsMP_CONNECTION::UnPack((gsMP_CONNECTION *)(this + 0x68),(gsMSG_MP_WRAP *)&local_324,param_2,-1)
    ;
    uStack_31e = 0xffff;
    uStack_31c = 0xffff;
    msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysServer,0x3ff,&local_324,(msgADDR *)this);
    return 0;
  }
  if (param_1 == 0x3ff) {
                    /* WARNING: Load size is inaccurate */
    iVar9 = *(int *)((int)param_2 + 6);
    if (*param_2 != -2) {
      peVar4 = gsMP_SYSTEM::FindEnt(gsSysMP,*param_2,4);
      if (peVar4 != (entIACTIVE_OBJ *)0x0) {
        if (*(short *)((int)param_2 + 4) == 0x40b) {
          *(uint *)(peVar4 + 0x88) = *(uint *)(peVar4 + 0x88) | 0x10;
          *(undefined2 *)((int)param_2 + 4) = 0x40a;
        }
        else if ((*(short *)((int)param_2 + 4) == 0x40c) &&
                (*(int *)(*(int *)((int)param_2 + 10) + 4) == -0x62)) {
          *(uint *)(peVar4 + 0x88) = *(uint *)(peVar4 + 0x88) | 0x10;
          *(undefined4 *)(*(int *)((int)param_2 + 10) + 4) = 0xffffff9d;
        }
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)peVar4,(int)*(short *)((int)param_2 + 4),
                           *(void **)((int)param_2 + 10),(msgADDR *)this);
      }
      return 1;
    }
    param_1 = (int)*(short *)((int)param_2 + 4);
    param_2 = *(void **)((int)param_2 + 10);
  }
  if (param_1 < 0x403) {
    if (param_1 == 0x402) {
      CreateEntitySyncable(this,(gsMSG_MP_CREATE_ENT *)param_2);
      return 0;
    }
    if (param_1 == 3) {
      if (-1 < *(int *)((int)param_2 + 0x90)) {
        (**(code **)(*(int *)this + 0x24))(*(int *)((int)param_2 + 0x90));
      }
      pgVar8 = gsSysServer;
      if (*(int *)((int)param_2 + 0x8c) != -1) {
        local_320 = 0xffff;
        uStack_31e = 0xffff;
        local_324 = &gsMP_CLIENT_FILTER_CLIENT2::_vftable_;
        uStack_31c = 0xfffd;
        uStack_31a = 0xffff;
        if ((*(int *)(gsSysServer + 0x9f4) != 0) && (iVar9 = 0, 0 < *(int *)(gsSysServer + 0x9f4)))
        {
          pgVar10 = gsSysServer + 0x474;
          do {
            iVar6 = (*(code *)*local_324)(iVar9);
            if (iVar6 != 0) {
              sprintf(acStack_40,s_mp_send__s_log,(gsMSG_MP_CREATE_ENT *)((int)param_2 + 0x44));
              (**(code **)(*(int *)pgVar8 + 0x2c))(*(undefined4 *)pgVar10,param_2,2,0,0x20000);
            }
            iVar9 = iVar9 + 1;
            pgVar10 = pgVar10 + 0x58;
          } while (iVar9 < *(int *)(pgVar8 + 0x9f4));
          return 0;
        }
      }
    }
    else if (param_1 == 1000) {
      iVar9 = 0;
      if (0 < *(int *)(this + 0x9f4)) {
        pgVar8 = this + 0x4c8;
        do {
          fVar3 = *(float *)pgVar8 - gsElapsedTime;
          *(float *)pgVar8 = fVar3;
          if (___real_00000000 <= fVar3) {
            *(float *)(pgVar8 + -8) = 0.0;
          }
          else {
            *(float *)(pgVar8 + -8) = 1.4013e-45;
            *(float *)pgVar8 = *(float *)(pgVar8 + -4);
          }
          iVar9 = iVar9 + 1;
          pgVar8 = pgVar8 + 0x58;
        } while (iVar9 < *(int *)(this + 0x9f4));
        return 0;
      }
    }
    else if (param_1 == 0x401) {
      if ((*(uint *)(this + 0x470) & 1) == 0) {
        if (((*(uint *)(this + 0x470) & 2) != 0) && (iVar9 == -3)) {
          iVar9 = -1;
        }
        gsMP_SYSTEM::SelectStartPosDir(gsSysMP,local_314,local_308);
        m3dMATR::MakeLCS2WCS_VZ((m3dMATR *)((int)param_2 + 0xe2),local_314,local_308);
        if ((iVar9 == -1) && (((byte)this[0x470] & 2) != 0)) {
          peVar5 = gsMP_SYSTEM::FindPlrLocal(gsSysMP);
          *(uint *)(peVar5 + 0x88) = *(uint *)(peVar5 + 0x88) & 0xfffffffe | 6;
        }
        else {
          peVar5 = entCreate(gsScenePtr,s_player_mp,s_player_mp,
                             (animCREATE_DATA *)((int)param_2 + 0xd0),*(void **)((int)param_2 + 4),5
                            );
        }
        animINST::SetName(*(animINST **)(peVar5 + 0xbc),(char *)((int)param_2 + 0xc));
        *(undefined4 *)(peVar5 + 0x8c) = 0xffffffff;
        if (*(int *)(gsSysMP + 0x28) == 3) {
          *(undefined4 *)(peVar5 + 0x8c) = 0xfffffffd;
        }
        else {
          *(uint *)(peVar5 + 0x88) = *(uint *)(peVar5 + 0x88) | 6;
          *(undefined4 *)(peVar5 + 0x8c) = *(undefined4 *)(this + 0x9fc);
          *(int *)(this + 0x9fc) = *(int *)(this + 0x9fc) + 1;
        }
        *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)(peVar5 + 0x8c);
        *(int *)(peVar5 + 0x90) = iVar9;
        (**(code **)(*(int *)this + 0x28))(peVar5,iVar9);
        if (iVar9 != -1) {
          uStack_19c = 0;
          uStack_19b = 0x40;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_198 = 0;
          uStack_94 = 0;
          uStack_19a = 0x154;
          gsMSG_MP_PTR::gsMSG_MP_PTR(agStack_304);
          uStack_2fc = 0xffffffff;
          uStack_238 = 0xffffffff;
          animCREATE_DATA::animCREATE_DATA(aaStack_234);
          acStack_2b8[0] = '\0';
          acStack_278[0] = '\0';
          uStack_302 = 0x166;
          (**(code **)(*(int *)this + 0x2c))(*(undefined4 *)(peVar5 + 0x90),0,0x401,param_2,0x20000)
          ;
          iVar6 = 0;
          do {
            cVar1 = *(char *)((int)&gsSceneFullName + iVar6);
            acStack_1ac[iVar6] = cVar1;
            iVar6 = iVar6 + 1;
          } while (cVar1 != '\0');
          (**(code **)(*(int *)this + 0x2c))(iVar9,0,0x3ec,auStack_1b0,0x20000);
          iVar9 = 0;
          do {
            cVar1 = s_player_mp[iVar9];
            acStack_278[iVar9] = cVar1;
            iVar9 = iVar9 + 1;
          } while (cVar1 != '\0');
          iVar9 = 0;
          do {
            cVar1 = s_player_mp[iVar9];
            acStack_2b8[iVar9] = cVar1;
            iVar9 = iVar9 + 1;
          } while (cVar1 != '\0');
          uStack_2fc = *(undefined4 *)(peVar5 + 0x8c);
          animINST::MakeCreateData(*(animINST **)(peVar5 + 0xbc),aaStack_234);
          local_324 = (undefined **)0xffffffff;
          if (*(int *)(this + 0x9f4) != 0) {
            SendMsgClientAll(this,(entIACTIVE_OBJ *)0x0,0x402,(msgDATA *)agStack_304,0x20000,
                             (gsMP_CLIENT_FILTER *)&stack0xfffffcd4);
          }
          SyncClient(this,peVar5);
        }
        pcVar7 = *(char **)(*(int *)(peVar5 + 0xbc) + 0x18);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = s_;
        }
        apNAME::SetName((apNAME *)(peVar5 + 0x44),pcVar7);
        return 0;
      }
      peVar5 = gsMP_SYSTEM::FindPlrLocal(gsSysMP);
      uVar2 = *(uint *)(peVar5 + 0x88);
      *(undefined4 *)(peVar5 + 0x8c) = 0xffffffff;
      *(uint *)(peVar5 + 0x88) = uVar2 & 0xfffffffe | 6;
      if (*(int *)(gsSysMP + 0x28) == 3) {
        *(undefined4 *)(peVar5 + 0x8c) = 0xfffffffd;
        (**(code **)(*(int *)this + 0x28))(peVar5,*(undefined4 *)(peVar5 + 0x90));
        return 0;
      }
      *(uint *)(peVar5 + 0x88) = uVar2 & 0xfffffffe | 6;
      *(undefined4 *)(peVar5 + 0x8c) = *(undefined4 *)(this + 0x9fc);
      *(int *)(this + 0x9fc) = *(int *)(this + 0x9fc) + 1;
      (**(code **)(*(int *)this + 0x28))(peVar5,*(undefined4 *)(peVar5 + 0x90));
      return 0;
    }
  }
  else if (param_1 == 0x405) {
    if ((*(int *)(gsSysMP + 0x28) == 1) && (iVar9 == -1)) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      if (*(int *)(this + 0x9f4) < 1) {
        return 0;
      }
      pgVar8 = this + 0x474;
      while (*(int *)pgVar8 != iVar9) {
        iVar6 = iVar6 + 1;
        pgVar8 = pgVar8 + 0x58;
        if (*(int *)(this + 0x9f4) <= iVar6) {
          return 0;
        }
      }
      if (iVar6 < 0) {
        return 0;
      }
    }
    *(undefined4 *)(this + iVar6 * 0x58 + 0x4bc) = 1;
    uStack_31c = 1;
    uStack_31a = 0;
    local_324 = (undefined **)0xc4000;
    local_320 = (undefined2)*(undefined4 *)(*(int *)(this + iVar6 * 0x58 + 0x478) + 0x8c);
    uStack_31e = (undefined2)
                 ((uint)*(undefined4 *)(*(int *)(this + iVar6 * 0x58 + 0x478) + 0x8c) >> 0x10);
    SendMsgClientAll(this,(entIACTIVE_OBJ *)0x0,0x405,(msgDATA *)&local_324,0x20000,0xfffffffd,
                     0xfffffffd);
  }
  else if ((param_1 == 0x40c) && (*(int *)((int)param_2 + 4) == -200)) {
    if ((*(int *)(gsSysMP + 0x28) == 1) && (iVar9 == -1)) {
      iVar6 = 0;
LAB_004fd8d8:
      *(undefined4 *)(this + iVar6 * 0x58 + 0x4c4) = *(undefined4 *)((int)param_2 + 8);
      return 0;
    }
    iVar6 = 0;
    if (0 < *(int *)(this + 0x9f4)) {
      pgVar8 = this + 0x474;
      while (*(int *)pgVar8 != iVar9) {
        iVar6 = iVar6 + 1;
        pgVar8 = pgVar8 + 0x58;
        if (*(int *)(this + 0x9f4) <= iVar6) {
          return 0;
        }
      }
      if (-1 < iVar6) goto LAB_004fd8d8;
    }
  }
  return 0;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FD9B0 */

entENTITY * __thiscall
gsMP_SERVER::CreateEntitySyncable(gsMP_SERVER *this,gsMSG_MP_CREATE_ENT *param_1)

{
  gsMSG_MP_CREATE_ENT *pgVar1;
  int iVar2;
  entENTITY *peVar3;
  int iVar4;
  gsMP_SERVER *pgVar5;
  
  pgVar1 = param_1;
  if ((*(uint *)(this + 0x470) & 3) == 0) {
    iVar2 = 4;
    iVar4 = -3;
  }
  else {
    iVar2 = 6;
    iVar4 = -1;
  }
  peVar3 = entCreate(gsScenePtr,(char *)(param_1 + 0x4c),(char *)(param_1 + 0x8c),
                     *(int *)(param_1 + 0xcc),(animCREATE_DATA *)(param_1 + 0xd0),
                     *(void **)(param_1 + 4),iVar2);
  if (*(int *)(peVar3 + 0x8c) == -1) {
    if (*(int *)(gsSysMP + 0x28) == 3) {
      *(undefined4 *)(peVar3 + 0x8c) = 0xfffffffd;
    }
    else {
      *(uint *)(peVar3 + 0x88) = *(uint *)(peVar3 + 0x88) | 6;
      *(undefined4 *)(peVar3 + 0x8c) = *(undefined4 *)(this + 0x9fc);
      *(int *)(this + 0x9fc) = *(int *)(this + 0x9fc) + 1;
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(peVar3 + 0x8c);
  *(int *)(peVar3 + 0x90) = iVar4;
  if (*(int *)(this + 0x9f4) == 0) {
    if (iVar4 == -3) {
      (**(code **)(*(int *)this + 0x2c))(0xffffffff,0,0x402,param_1,0xa0000);
      return peVar3;
    }
  }
  else {
    param_1 = (gsMSG_MP_CREATE_ENT *)0x0;
    if (0 < *(int *)(this + 0x9f4)) {
      pgVar5 = this + 0x474;
      do {
        iVar2 = (*(code *)gsMP_CLIENT_FILTER_CLIENT2::_vftable_)(param_1);
        if ((iVar2 != 0) && (*(int *)(pgVar5 + 0x48) != 0)) {
          (**(code **)(*(int *)this + 0x2c))(*(undefined4 *)pgVar5,0,0x402,pgVar1,0xa0000);
        }
        param_1 = param_1 + 1;
        pgVar5 = pgVar5 + 0x58;
      } while ((int)param_1 < *(int *)(this + 0x9f4));
    }
  }
  return peVar3;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FDB10 */

int __thiscall gsMP_SERVER::Init(gsMP_SERVER *this)

{
  *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 2;
  *(undefined4 *)(this + 0x9fc) = 0;
  return 1;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FDB40 */

int __thiscall gsMP_SERVER::InitGame(gsMP_SERVER *this,int param_1)

{
  entIACTIVE_OBJ *peVar1;
  int iVar2;
  
  *(int *)(this + 0x470) = param_1;
  if ((param_1 & 1U) != 0) {
    *(uint *)(this + 0x470) = param_1 | 2;
  }
  *(undefined4 *)(this + 0x9fc) = 0;
  for (peVar1 = entFindNextIO((entIACTIVE_OBJ *)0x0); peVar1 != (entIACTIVE_OBJ *)0x0;
      peVar1 = entFindNextIO(peVar1)) {
    iVar2 = gsMP_SYSTEM::IsRegularMPID(gsSysMP,*(ulong *)(peVar1 + 0x8c));
    if (iVar2 != 0) {
      *(undefined4 *)(peVar1 + 0x8c) = 0xfffffffd;
    }
  }
  return 1;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FDBB0 */

void __thiscall gsMP_SERVER::TermGame(gsMP_SERVER *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x9f4);
  while (0 < iVar1) {
    (**(code **)(*(int *)this + 0x24))(*(undefined4 *)(this + 0x474));
    iVar1 = *(int *)(this + 0x9f4);
  }
  gsMP_NETWORK::Server_Stop(gsSysNetwork);
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FDBF0 */

void __thiscall
gsMP_SERVER::SendMsgClient
          (gsMP_SERVER *this,entENTITY *param_1,int param_2,msgDATA *param_3,int param_4)

{
  if (param_1 != (entENTITY *)0x0) {
    if (*(int *)(gsSysMP + 0x28) == 1) {
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)param_1,param_2,param_3,(msgADDR *)0x0);
      return;
    }
    if (*(int *)(param_1 + 0x90) != -3) {
      (**(code **)(*(int *)this + 0x2c))(*(int *)(param_1 + 0x90),param_1,param_2,param_3,param_4);
    }
  }
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FDC50 */

void __thiscall
gsMP_SERVER::SendMsgClient
          (gsMP_SERVER *this,ulong param_1,entIACTIVE_OBJ *param_2,int param_3,msgDATA *param_4,
          int param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  gsMP_CONNECTION *this_00;
  msgADDR *pmVar4;
  undefined4 local_10;
  undefined2 local_c;
  undefined4 local_a;
  undefined4 local_6;
  
  local_10 = 0xffffffff;
  local_c = 0xffff;
  local_a = 0xfffffffd;
  local_6 = 0;
  if (param_1 != 0xfffffffd) {
    gsMP_COMM::PrepareMsgWrap((gsMP_COMM *)this,(gsMSG_MP_WRAP *)&local_10,param_2,param_3,param_4);
    if (param_1 == 0xffffffff) {
      if (((byte)this[0x470] & 8) == 0) {
        msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysClient,0x3ff,&local_10,(msgADDR *)this);
        return;
      }
      gsMP_CONNECTION::Pack((gsMP_CONNECTION *)(this + 0x68),(gsMSG_MP_WRAP *)&local_10);
      pmVar4 = (msgADDR *)0x0;
      pcVar1 = gsMP_CONNECTION::GetBuffer((gsMP_CONNECTION *)(this + 0x68));
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysClient,0x400,pcVar1,pmVar4);
      return;
    }
    if (param_1 == 0xfffffffe) {
      msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsDemoClient,0x3ff,&local_10,(msgADDR *)this);
      return;
    }
    gsMP_COMM::PrepareConn((gsMP_COMM *)this,(gsMSG_MP_WRAP *)&local_10);
    this_00 = (gsMP_CONNECTION *)(this + 0x68);
    gsMP_CONNECTION::GetBufferSize(this_00);
    if (param_2 == (entIACTIVE_OBJ *)0x0) {
      iVar2 = gsMP_CONNECTION::GetBufferSize(this_00);
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(param_2 + 0x14);
      iVar2 = gsMP_CONNECTION::GetBufferSize(this_00);
    }
    gsMP_STAT::AddTraffic((gsMP_STAT *)(gsSysNetwork + 0xc4),iVar3,iVar2);
    iVar3 = gsMP_CONNECTION::GetBufferSize(this_00);
    pcVar1 = gsMP_CONNECTION::GetBuffer(this_00);
    gsMP_NETWORK::Server_SendDataToClient(gsSysNetwork,param_1,pcVar1,iVar3,param_5);
  }
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FDDB0 */

void __thiscall
gsMP_SERVER::SendMsgClientAll
          (gsMP_SERVER *this,entIACTIVE_OBJ *param_1,int param_2,msgDATA *param_3,int param_4,
          ulong param_5,ulong param_6)

{
  int iVar1;
  int iVar2;
  gsMP_SERVER *pgVar3;
  char acStack_40 [64];
  
  if (*(int *)(this + 0x9f4) == 0) {
    if ((param_5 == 0xfffffffd) && (param_6 == 0xfffffffd)) {
      (**(code **)(*(int *)this + 0x2c))(0xffffffff,param_1,param_2,param_3,param_4);
      return;
    }
  }
  else {
    iVar2 = 0;
    if (0 < *(int *)(this + 0x9f4)) {
      pgVar3 = this + 0x474;
      do {
        iVar1 = (*(code *)gsMP_CLIENT_FILTER_CLIENT2::_vftable_)(iVar2);
        if ((iVar1 != 0) && ((*(int *)(pgVar3 + 0x48) != 0 || ((param_4 & 0x90000U) == 0)))) {
          if (param_1 != (entIACTIVE_OBJ *)0x0) {
            sprintf(acStack_40,s_mp_send__s_log,param_1 + 0x44);
          }
          (**(code **)(*(int *)this + 0x2c))(*(undefined4 *)pgVar3,param_1,param_2,param_3,param_4);
        }
        iVar2 = iVar2 + 1;
        pgVar3 = pgVar3 + 0x58;
      } while (iVar2 < *(int *)(this + 0x9f4));
    }
  }
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FDE90 */

void __thiscall
gsMP_SERVER::SendMsgClientAll
          (gsMP_SERVER *this,entIACTIVE_OBJ *param_1,int param_2,msgDATA *param_3,int param_4,
          gsMP_CLIENT_FILTER *param_5)

{
  int iVar1;
  int iVar2;
  gsMP_SERVER *pgVar3;
  char acStack_40 [64];
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x9f4)) {
    pgVar3 = this + 0x474;
    do {
      if (((param_5 == (gsMP_CLIENT_FILTER *)0x0) ||
          (iVar1 = (*(code *)**(undefined4 **)param_5)(iVar2), iVar1 != 0)) &&
         ((*(int *)(pgVar3 + 0x48) != 0 || ((param_4 & 0x90000U) == 0)))) {
        if (param_1 != (entIACTIVE_OBJ *)0x0) {
          sprintf(acStack_40,s_mp_send__s_log,param_1 + 0x44);
        }
        (**(code **)(*(int *)this + 0x2c))(*(undefined4 *)pgVar3,param_1,param_2,param_3,param_4);
      }
      iVar2 = iVar2 + 1;
      pgVar3 = pgVar3 + 0x58;
    } while (iVar2 < *(int *)(this + 0x9f4));
  }
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FDF20 */

void __thiscall gsMP_SERVER::ReceiveMsg(gsMP_SERVER *this,ulong param_1,void *param_2,int param_3)

{
  undefined4 local_10;
  undefined2 local_c;
  ulong local_a;
  undefined4 local_6;
  
  local_10 = 0xffffffff;
  local_c = 0xffff;
  local_a = 0xfffffffd;
  local_6 = 0;
  gsMP_CONNECTION::UnPack
            ((gsMP_CONNECTION *)(this + 0x68),(gsMSG_MP_WRAP *)&local_10,param_2,param_3);
  local_a = param_1;
  msgSYSTEM::SendMsg(&msgSystem,(msgADDR *)gsSysServer,0x3ff,&local_10,(msgADDR *)this);
  return;
}




/* from: gs:gs_mp_server.cpp
   addr: 004FDF90 */

int __thiscall gsMP_CLIENT_FILTER_CLIENT2::IsSend(gsMP_CLIENT_FILTER_CLIENT2 *this,int param_1)

{
  if ((*(int *)(gsSysServer + param_1 * 0x58 + 0x474) != *(int *)(this + 4)) &&
     (*(int *)(gsSysServer + param_1 * 0x58 + 0x474) != *(int *)(this + 8))) {
    return 1;
  }
  return 0;
}

