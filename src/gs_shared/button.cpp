
/* from: gs_shared:button.cpp
   addr: 0053D890 */

int __fastcall bttnInit(void)

{
  int iVar1;
  
  iVar1 = entRegisterClass(s_button,0x4254544e,0x28,bttnBUTTON::Create,(char *)0x0,1);
  return (uint)(iVar1 != 0);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:button.cpp
   addr: 0053D8D0 */

int __thiscall
bttnBUTTON::ProcessMsg(bttnBUTTON *this,int param_1,void *param_2,msgADDR *param_3,int *param_4)

{
  apNAME *this_00;
  float fVar1;
  void *pvVar2;
  int iVar3;
  entIACTIVE_OBJ *peVar4;
  uint uVar5;
  gsMSG_MP_UPD_STATE local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  pvVar2 = param_2;
  if (param_1 < 0x3f9) {
    if (param_1 == 0x3f8) {
      this_00 = (apNAME *)((int)param_2 + 8);
      iVar3 = apNAME::IsName(this_00,s_PUSH);
      if (iVar3 == 0) {
        iVar3 = apNAME::IsName(this_00,s_POP);
        if (((iVar3 != 0) && (uVar5 = *(uint *)(this + 0x14f), (uVar5 & 1) != 0)) &&
           (((uVar5 & 0x10) == 0 || ((uVar5 & 0x20) == 0)))) {
          uVar5 = *(uint *)(this + 0x14f);
          *(uint *)(this + 0x14f) = uVar5 & 0xfffffffe;
          uVar5 = uVar5 & 0xfffffffc;
          *(uint *)(this + 0x14f) = uVar5;
          *(uint *)(this + 0x14f) = uVar5 | 8;
          animINST::SetAnimSeq(*(animINST **)(this + 0xbc),*(int *)(this + 0x157),0.0);
          *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 2;
          return 0;
        }
      }
      else if (((byte)this[0x14f] & 4) != 0) {
        uVar5 = *(uint *)(this + 0x14f);
        *(uint *)(this + 0x14f) = uVar5 & 0xfffffffb;
        uVar5 = uVar5 & 0xfffffff3;
        *(uint *)(this + 0x14f) = uVar5;
        *(uint *)(this + 0x14f) = uVar5 | 2;
        *(uint *)(this + 0x14f) = uVar5 | 0x22;
        animINST::SetAnimSeq(*(animINST **)(this + 0xbc),*(int *)(this + 0x153),0.0);
        *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 1;
        return 0;
      }
    }
    else if (param_1 == 1) {
      iVar3 = animTPL::FindSeqName(*(animTPL **)(*(int *)(this + 0xbc) + 0x138),s_PUSH);
      *(int *)(this + 0x153) = iVar3;
      if (iVar3 != -1) {
        iVar3 = animTPL::FindSeqName(*(animTPL **)(*(int *)(this + 0xbc) + 0x138),s_POP);
        *(int *)(this + 0x157) = iVar3;
        if (iVar3 != -1) {
          fVar1 = *(float *)(*(int *)(*(int *)(*(animINST **)(this + 0xbc) + 0x138) + 0x90) + 0x50 +
                            *(int *)(this + 0x153) * 0x88) * ___real_3a83126f;
          *(float *)(this + 0x15b) = fVar1;
          animINST::SetAnimSeq(*(animINST **)(this + 0xbc),iVar3,fVar1);
          *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
          animINST::GetInt(*(animINST **)(this + 0xbc),s_BUTTON,s_nmbLocks,(int *)(this + 0x30));
          iVar3 = animINST::GetBool(*(animINST **)(this + 0xbc),s_BUTTON,s_isPushOnce,
                                    (int *)&param_2);
          if ((iVar3 != 0) && (param_2 != (void *)0x0)) {
            *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x10;
          }
          *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 4;
          gsMP_SERVER::DeclSyncable(gsSysServer,(entIACTIVE_OBJ *)this);
          *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 0x40;
          iVar3 = animINST::GetBool(*(animINST **)(this + 0xbc),s_BUTTON,s_isCanShoot,
                                    (int *)&param_2);
          if ((iVar3 != 0) && (param_2 != (void *)0x0)) {
            *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xffffffbf;
            return 0;
          }
        }
      }
    }
    else if (param_1 == 1000) {
      if (((byte)this[0x88] & 4) == 0) {
        animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
        return 0;
      }
      if (((byte)this[0x14f] & 10) != 0) {
        iVar3 = animINST::AdvanceTime(*(animINST **)(this + 0xbc),gsElapsedTime,1,(float *)0x0);
        if (iVar3 != 0) {
          if (((byte)this[0x14f] & 2) != 0) {
            *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 1;
            *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 4;
          }
          if (((byte)this[0x14f] & 8) != 0) {
            *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) | 4;
            *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 8;
          }
          *(uint *)(this + 0x14f) = *(uint *)(this + 0x14f) & 0xfffffff5;
        }
        local_14 = (gsMSG_MP_UPD_STATE)0x0;
        local_13 = 0x40;
        local_10 = 0xffffff9d;
        local_8 = 0;
        local_4 = 0xffffffff;
        local_12 = 0x14;
        entIACTIVE_OBJ::PrepareMP_UPD_STATE((entIACTIVE_OBJ *)this,&local_14);
        local_8 = *(undefined4 *)(this + 0x14f);
        local_4 = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
        entIACTIVE_OBJ::SendMP_Server_2_ClientAll
                  ((entIACTIVE_OBJ *)this,(msgDATA *)&local_14,0x20000);
        return 0;
      }
    }
  }
  else if (param_1 == 0x40c) {
    iVar3 = *(int *)((int)param_2 + 4);
    if (iVar3 == -100) {
      iVar3 = *(int *)((int)param_2 + 8);
      *(undefined4 *)(this + 0x14f) = *(undefined4 *)(iVar3 + 4);
      animINST::SetAnimSeq(*(animINST **)(this + 0xbc),*(int *)(iVar3 + 8),*(float *)(iVar3 + 0xc));
    }
    else {
      if (iVar3 == -99) {
        if (*(int *)(*(animINST **)(this + 0xbc) + 0xe0) != *(int *)((int)param_2 + 0x10)) {
          animINST::SetAnimSeq(*(animINST **)(this + 0xbc),*(int *)((int)param_2 + 0x10),0.0);
        }
        *(undefined4 *)(this + 0x14f) = *(undefined4 *)((int)pvVar2 + 0xc);
        return 0;
      }
      if (iVar3 == 0) {
        peVar4 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)((int)param_2 + 8),0);
        (**(code **)(*(int *)this + 0x68))(peVar4);
        return 0;
      }
    }
  }
  else if ((param_1 == 0x4c5) && (((byte)this[0x14f] & 0x40) == 0)) {
    (**(code **)(*(int *)this + 0x68))(0);
    return 0;
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:button.cpp
   addr: 0053DD40 */

void __thiscall bttnBUTTON::ProcessMP_GET_SYNC_DATA(bttnBUTTON *this,void *param_1)

{
  undefined *puVar1;
  
                    /* WARNING: Load size is inaccurate */
  puVar1 = *param_1;
  if (puVar1 == (undefined *)0x0) {
    if ((DAT_00963310 & 1) == 0) {
      DAT_00963310 = DAT_00963310 | 1;
      DAT_00963300 = 0;
      DAT_00963301 = 0x40;
      DAT_00963304 = 0;
      DAT_00963308 = 0xffffffff;
      _DAT_00963302 = 0x10;
      atexit((_func_4879 *)&__E8);
    }
    puVar1 = &DAT_00963300;
    *(undefined1 **)param_1 = &DAT_00963300;
  }
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0x14f);
  *(undefined4 *)(puVar1 + 8) = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
  *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:button.cpp
   addr: 0053DDD0 */

void __thiscall bttnBUTTON::ProcessMP_READ_SYNC_DATA(bttnBUTTON *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  short local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_10;
  undefined4 local_4;
  
  puVar3 = *(undefined **)param_1;
  local_20 = 0;
  uStack_1e = 0xffff;
  uStack_1c = 0xffff;
  local_1a = 0xffffffff;
  local_16 = 0xffffffff;
  if (puVar3 == (undefined *)0x0) {
    if ((DAT_00963310 & 1) == 0) {
      DAT_00963310 = DAT_00963310 | 1;
      DAT_00963304 = 0;
      DAT_00963308 = 0xffffffff;
      _DAT_00963300 = 0x104000;
      atexit((_func_4879 *)&__E8);
    }
    puVar3 = &DAT_00963300;
    *(undefined **)param_1 = &DAT_00963300;
    local_10 = 0x104000;
    DAT_00963304 = 0;
    _DAT_00963300 = 0x104000;
    DAT_00963308 = 0xffffffff;
    DAT_0096330c = local_4;
  }
  iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_20);
  do {
    if ((iVar1 == 0) || (local_20 == 1)) {
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
      return;
    }
    if (local_20 == 0xf0) {
      puVar2 = puVar3 + 4;
LAB_0053deb3:
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2,4,4);
    }
    else {
      if (local_20 == 0xf1) {
        puVar2 = puVar3 + 8;
        goto LAB_0053deb3;
      }
      if (local_20 == 0xf2) {
        puVar2 = puVar3 + 0xc;
        goto LAB_0053deb3;
      }
    }
    iVar1 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_20);
  } while( true );
}




/* from: gs_shared:button.cpp
   addr: 0053DEF0 */

int __thiscall bttnBUTTON::Toggle(bttnBUTTON *this,plgsACTION *param_1)

{
  uint uVar1;
  msgDATA local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  if (0 < *(int *)(this + 0x30)) {
    return (int)(plgsACTION *)0x0;
  }
  if (((byte)this[0x88] & 4) == 0) {
    local_c = (msgDATA)0x0;
    local_b = 0x40;
    local_8 = 0;
    local_a = 0xc;
    if (param_1 == (plgsACTION *)0x0) {
      local_4 = 0xffffffff;
    }
    else {
      local_4 = *(undefined4 *)(param_1 + 0x8c);
    }
    entIACTIVE_OBJ::SendMP_Client_2_Server((entIACTIVE_OBJ *)this,&local_c,0x20000);
    return 1;
  }
  uVar1 = *(uint *)(this + 0x14f);
  if ((uVar1 & 4) != 0) {
    *(uint *)(this + 0x14f) = uVar1 & 0xfffffffb;
    uVar1 = uVar1 & 0xfffffff3;
    *(uint *)(this + 0x14f) = uVar1;
    *(uint *)(this + 0x14f) = uVar1 | 2;
    *(uint *)(this + 0x14f) = uVar1 | 0x22;
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),*(int *)(this + 0x153),0.0);
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 1;
    return 1;
  }
  if (((uVar1 & 1) != 0) &&
     (((uVar1 & 0x10) == 0 || (param_1 = (plgsACTION *)0x0, (uVar1 & 0x20) == 0)))) {
    uVar1 = *(uint *)(this + 0x14f);
    *(uint *)(this + 0x14f) = uVar1 & 0xfffffffe;
    uVar1 = uVar1 & 0xfffffffc;
    *(uint *)(this + 0x14f) = uVar1;
    *(uint *)(this + 0x14f) = uVar1 | 8;
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),*(int *)(this + 0x157),0.0);
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 2;
    return 1;
  }
  return (int)param_1;
}




/* from: gs_shared:button.cpp
   addr: 0053E050 */

entENTITY * __fastcall bttnBUTTON::Create(animINST *param_1)

{
  entENTITY *this;
  
  this = (entENTITY *)operator_new(0x15f);
  if (this != (entENTITY *)0x0) {
    entENTITY::entENTITY(this);
    *(undefined4 *)(this + 0x14f) = 0;
    *(undefined4 *)(this + 0x153) = 0xffffffff;
    *(undefined4 *)(this + 0x157) = 0xffffffff;
    *(undefined4 *)(this + 0x15b) = 0;
    *(undefined ***)this = &_vftable_;
    *(undefined4 *)(this + 0x94) = 0;
    return this;
  }
  return (entENTITY *)0x0;
}




/* from: gs_shared:button.cpp
   addr: 0053E0B0 */

int __thiscall bttnBUTTON::IsCanPush(bttnBUTTON *this,plgsACTION *param_1)

{
  if ((*(int *)(this + 0x30) < 1) &&
     (((*(uint *)(this + 0x14f) & 0x10) == 0 || ((*(uint *)(this + 0x14f) & 0x20) == 0)))) {
    return 1;
  }
  return 0;
}

