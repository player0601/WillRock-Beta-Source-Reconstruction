
/* from: gs:dynamic.cpp
   addr: 004F9920 */

int __fastcall dynInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_dynamic,0x2444594e,0x28,dynDYNAMIC::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* from: gs:dynamic.cpp
   addr: 004F9960 */

int __thiscall
dynDYNAMIC::ProcessMsg(dynDYNAMIC *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  apNAME *this_00;
  int iVar1;
  uint uVar2;
  float fVar3;
  gsEVENT local_14 [2];
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 < 0x3e9) {
    if (param_1 == 1000) {
      (**(code **)(*(int *)this + 0x6c))();
    }
    else if (param_1 == 1) {
      (**(code **)(*(int *)this + 0x68))(param_2);
    }
    else if (param_1 == 2) {
      (**(code **)(*(int *)this + 0x70))();
    }
    goto switchD_004f99d7_caseD_ffffff9d;
  }
  if (param_1 != 0x3f8) {
    if (param_1 == 0x40c) {
      switch(*(undefined4 *)((int)param_2 + 4)) {
      case 0:
        *(undefined4 *)(this + 0x14f) = *(undefined4 *)((int)param_2 + 8);
        animINST::SetAnimSeq
                  (*(animINST **)(this + 0xbc),*(int *)((int)param_2 + 0xc),
                   *(float *)((int)param_2 + 0x10));
        *(undefined4 *)(this + 0x173) = *(undefined4 *)((int)param_2 + 0x14);
        break;
      case 1:
        *(undefined4 *)(this + 0x14f) = *(undefined4 *)((int)param_2 + 8);
        animINST::SetAnimSeq
                  (*(animINST **)(this + 0xbc),*(int *)((int)param_2 + 0xc),
                   *(float *)((int)param_2 + 0x10));
        break;
      case 2:
        *(undefined4 *)(this + 0x14f) = *(undefined4 *)((int)param_2 + 8);
        animINST::SetAnimSeq
                  (*(animINST **)(this + 0xbc),*(int *)((int)param_2 + 0xc),
                   *(float *)((int)param_2 + 0x10));
        *(undefined4 *)(this + 0x173) = *(undefined4 *)((int)param_2 + 0x14);
        break;
      case 0xffffff9c:
        iVar1 = *(int *)((int)param_2 + 8);
        *(undefined4 *)(this + 0x14f) = *(undefined4 *)(iVar1 + 4);
        animINST::SetAnimSeq
                  (*(animINST **)(this + 0xbc),*(int *)(iVar1 + 8),*(float *)(iVar1 + 0xc));
        *(undefined4 *)(this + 0x173) = *(undefined4 *)(iVar1 + 0x10);
      }
    }
    goto switchD_004f99d7_caseD_ffffff9d;
  }
  this_00 = (apNAME *)((int)param_2 + 8);
  iVar1 = apNAME::IsName(this_00,s_START);
  if (iVar1 == 0) {
    iVar1 = apNAME::IsName(this_00,&s_STOP);
    if (iVar1 == 0) {
      iVar1 = apNAME::IsName(this_00,s_TOGGLE);
      if (iVar1 == 0) goto switchD_004f99d7_caseD_ffffff9d;
      if (((byte)this[0x14f] & 8) == 0) {
        fVar3 = *(float *)(*(int *)(this + 0xbc) + 0x24);
        iVar1 = *(int *)(*(int *)(this + 0xbc) + 0xe0);
        uVar2 = (uint)(*(int *)(this + 0x173) == 0);
        goto LAB_004f9ba6;
      }
      uVar2 = *(uint *)(this + 0x84);
    }
    else {
      uVar2 = *(uint *)(this + 0x84);
    }
    *(uint *)(this + 0x84) = uVar2 | 8;
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffff7;
    if ((((byte)this[0x88] & 4) != 0) && (*(int *)(this + 0x8c) != -1)) {
      gsEVENT::gsEVENT(local_14);
      local_c = *(undefined4 *)(this + 0x14f);
      local_10 = 1;
      local_12 = 0x14;
      local_8 = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
      local_4 = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
      entIACTIVE_OBJ::SendMP_Server_2_ClientAll((entIACTIVE_OBJ *)this,(msgDATA *)local_14,0x20000);
    }
  }
  else {
    iVar1 = animTPL::FindSeqName
                      (*(animTPL **)(*(int *)(this + 0xbc) + 0x138),(char *)((int)param_2 + 0x60));
    if (iVar1 == -1) goto switchD_004f99d7_caseD_ffffff9d;
    uVar2 = *(uint *)((int)param_2 + 0x58);
    fVar3 = *(float *)((int)param_2 + 0x50);
LAB_004f9ba6:
    StartAnim(this,iVar1,fVar3,uVar2);
  }
switchD_004f99d7_caseD_ffffff9d:
  iVar1 = cdtCOLL_OBJ::IsNearBVol((cdtCOLL_OBJ *)this,param_1,param_2,param_3,param_4);
  return iVar1;
}




/* from: gs:dynamic.cpp
   addr: 004F9C50 */

int __thiscall dynDYNAMIC::ProcessINIT(dynDYNAMIC *this,void *param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  int local_4;
  
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 0x40) != 0) {
    animINST::GetInt(*(animINST **)(this + 0xbc),s_DYN_PROP,s_PLACE_GROUND,&local_c);
  }
  iVar1 = animINST::GetInt(*(animINST **)(this + 0xbc),s_DYN_PROP,s_PLACE_GROUND_EVERY_FRAME,
                           &local_c);
  if ((iVar1 != 0) && (local_c != 0)) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
  }
  iVar1 = animINST::GetInt(*(animINST **)(this + 0xbc),s_DYN_PROP,s_PLACE_GROUND_ON_WATER,&local_c);
  if ((iVar1 != 0) && (local_c != 0)) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 2;
  }
  iVar1 = animINST::GetInt(*(animINST **)(this + 0xbc),s_DYN_PROP,s_PLACE_GROUND_ORIGIN,&local_c);
  if ((iVar1 != 0) && (local_c != 0)) {
    *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
  }
  iVar1 = *(int *)(*(animINST **)(this + 0xbc) + 0x138);
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x8c))) {
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),0,0.0);
  }
  if (((byte)(*(animINST **)(this + 0xbc))[4] & 0x40) != 0) {
    *(undefined4 *)(this + 0x1c) = 0x28;
  }
  local_8 = 1;
  animINST::GetBool(*(animINST **)(this + 0xbc),s_DYNAMIC,s_isStartAnim,&local_8);
  local_4 = 1;
  animINST::GetBool(*(animINST **)(this + 0xbc),s_DYNAMIC,s_isCycleAnim,&local_4);
  if (local_8 != 0) {
    StartAnim(this,0,0.0,local_4);
  }
  if ((*(byte *)(*(int *)(this + 0xbc) + 4) & 0x40) != 0) {
    gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
  }
  return 1;
}




/* from: gs:dynamic.cpp
   addr: 004F9DD0 */

void __thiscall dynDYNAMIC::ProcessFRAME(dynDYNAMIC *this)

{
  uint uVar1;
  int iVar2;
  gsEVENT local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)this[0x14f] & 8) != 0) {
    iVar2 = animINST::AdvanceTime
                      (*(animINST **)(this + 0xbc),gsElapsedTime,*(int *)(this + 0x173),(float *)0x0
                      );
    if (iVar2 != 0) {
      if (*(int *)(this + 0x173) == 1) {
        uVar1 = *(uint *)(this + 0x84);
        *(uint *)(this + 0x84) = uVar1 | 0x20;
        *(uint *)(this + 0x84) = uVar1 | 0x28;
        *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffff7;
        if ((((byte)this[0x88] & 4) != 0) && (*(int *)(this + 0x8c) != -1)) {
          gsEVENT::gsEVENT(&local_18);
          local_10 = *(undefined4 *)(this + 0x14f);
          local_14 = 1;
          local_16 = 0x14;
          local_c = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
          local_8 = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
          entIACTIVE_OBJ::SendMP_Server_2_ClientAll
                    ((entIACTIVE_OBJ *)this,(msgDATA *)&local_18,0x20000);
          return;
        }
      }
      else if ((*(int *)(this + 0x173) == 0) && (((byte)this[0x88] & 4) != 0)) {
        iVar2 = gsMP_SYSTEM::IsRegularMPID(gsSysMP,*(ulong *)(this + 0x8c));
        if (iVar2 != 0) {
          local_10 = *(undefined4 *)(this + 0x14f);
          local_18 = (gsEVENT)0x0;
          local_17 = 0x40;
          local_14 = 2;
          local_16 = 0x18;
          local_c = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
          local_8 = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
          local_4 = *(undefined4 *)(this + 0x173);
          entIACTIVE_OBJ::SendMP_Server_2_ClientAll
                    ((entIACTIVE_OBJ *)this,(msgDATA *)&local_18,0x10000);
        }
      }
    }
  }
  return;
}




/* from: gs:dynamic.cpp
   addr: 004F9F30 */

void __thiscall dynDYNAMIC::ProcessMP_GET_SYNC_DATA(dynDYNAMIC *this,void *param_1)

{
  undefined4 *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined4 *)0x0) {
    if ((DAT_009480fc & 1) == 0) {
      DAT_009480fc = DAT_009480fc | 1;
      DAT_00948104._0_1_ = 0;
      DAT_00948104._1_1_ = 0x40;
      DAT_00948108 = 0;
      DAT_0094810c = 0xffffffff;
      DAT_00948104._2_2_ = 0x14;
      atexit((_func_4879 *)&__E8);
    }
    puVar1 = &DAT_00948104;
    *(undefined4 **)param_1 = &DAT_00948104;
  }
  puVar1[1] = *(undefined4 *)(this + 0x14f);
  puVar1[2] = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
  puVar1[3] = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
  puVar1[4] = *(undefined4 *)(this + 0x173);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs:dynamic.cpp
   addr: 004F9FD0 */

void __thiscall dynDYNAMIC::ProcessMP_READ_SYNC_DATA(dynDYNAMIC *this,gsMSG_MP_SAVELOAD *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  short local_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar3 = *(undefined4 **)param_1;
  local_24 = 0;
  uStack_22 = 0xffff;
  uStack_20 = 0xffff;
  local_1e = 0xffffffff;
  local_1a = 0xffffffff;
  if (puVar3 == (undefined4 *)0x0) {
    if ((DAT_009480fc & 1) == 0) {
      DAT_009480fc = DAT_009480fc | 1;
      DAT_00948104._0_1_ = 0;
      DAT_00948104._1_1_ = 0x40;
      DAT_00948108 = 0;
      DAT_0094810c = 0xffffffff;
      DAT_00948104._2_2_ = 0x14;
      atexit((_func_4879 *)&__E8);
    }
    puVar3 = &DAT_00948104;
    local_10 = 0;
    local_c = 0xffffffff;
    *(undefined4 **)param_1 = &DAT_00948104;
    local_14._0_1_ = 0;
    local_14._1_1_ = 0x40;
    local_14._2_2_ = 0x14;
    puVar1 = &local_14;
    puVar4 = &DAT_00948104;
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_24);
  do {
    if ((iVar2 == 0) || (local_24 == 1)) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
      return;
    }
    switch(local_24) {
    case 0xf0:
      puVar1 = puVar3 + 1;
      break;
    case 0xf1:
      puVar1 = puVar3 + 2;
      break;
    case 0xf2:
      puVar1 = puVar3 + 3;
      break;
    case 0xf3:
      puVar1 = puVar3 + 4;
      break;
    default:
      goto switchD_004fa09c_default;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar1,4,4);
switchD_004fa09c_default:
    iVar2 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_24);
  } while( true );
}




/* from: gs:dynamic.cpp
   addr: 004FA100 */

void __thiscall dynDYNAMIC::StartAnim(dynDYNAMIC *this,int param_1,float param_2,int param_3)

{
  msgDATA local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  float local_8;
  undefined4 local_4;
  
  if (param_3 == 0) {
    *(undefined4 *)(this + 0x173) = 1;
  }
  else {
    *(undefined4 *)(this + 0x173) = 0;
  }
  animINST::SetAnimSeq(*(animINST **)(this + 0xbc),param_1,param_2);
  *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 8;
  *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 4;
  if ((((byte)this[0x88] & 4) != 0) && (*(int *)(this + 0x8c) != -1)) {
    local_10 = *(undefined4 *)(this + 0x14f);
    local_4 = *(undefined4 *)(this + 0x173);
    local_18 = (msgDATA)0x0;
    local_17 = 0x40;
    local_14 = 0;
    local_16 = 0x18;
    local_c = param_1;
    local_8 = param_2;
    entIACTIVE_OBJ::SendMP_Server_2_ClientAll((entIACTIVE_OBJ *)this,&local_18,0x20000);
  }
  return;
}




/* from: gs:dynamic.cpp
   addr: 004FA1C0 */

void __thiscall dynDYNAMIC::StopAnim(dynDYNAMIC *this)

{
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 8;
  local_c = *(uint *)(this + 0x14f) & 0xfffffff7;
  *(uint *)(this + 0x14f) = local_c;
  if ((((byte)this[0x88] & 4) != 0) && (*(int *)(this + 0x8c) != -1)) {
    local_14 = (msgDATA)0x0;
    local_13 = 0x40;
    local_10 = 1;
    local_12 = 0x14;
    local_8 = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
    local_4 = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
    entIACTIVE_OBJ::SendMP_Server_2_ClientAll((entIACTIVE_OBJ *)this,&local_14,0x20000);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs:dynamic.cpp
   addr: 004FA260 */

entENTITY * __fastcall dynDYNAMIC::Create(animINST *param_1)

{
  undefined4 uVar1;
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x177);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0;
    *(undefined4 *)(this + 0x157) = 0;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined4 *)(this + 0x15f) = 0;
    *(undefined4 *)(this + 0x163) = _m3dVZero;
    *(undefined4 *)(this + 0x167) = DAT_00963740;
    uVar1 = DAT_00963744;
    *(undefined4 *)(this + 0x16f) = 0;
    *(undefined4 *)(this + 0x16b) = uVar1;
    *(undefined ***)this = &_vftable_;
    return this;
  }
  return (entENTITY *)0x0;
}

