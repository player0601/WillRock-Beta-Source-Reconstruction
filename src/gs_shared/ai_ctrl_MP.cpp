
/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 00531830 */

void __thiscall aiNPC::NotifyAIState(aiNPC *this)

{
  msgDATA local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = (msgDATA)0x0;
  local_8 = 0;
  local_4 = *(undefined4 *)(this + 1099);
  local_b = 0x40;
  local_a = 0xc;
  gsMP_SERVER::SendMsgClientAll
            (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_c,0x20000,0xffffffff,0xfffffffd);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 00531890 */

void __thiscall aiNPC::ProcessMP_GET_SYNC_DATA(aiNPC *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* WARNING: Load size is inaccurate */
  puVar3 = *param_1;
  if (puVar3 == (undefined4 *)0x0) {
    if ((DAT_0095d8c5 & 1) == 0) {
      DAT_0095d8c5 = DAT_0095d8c5 | 1;
      DAT_0095d850._0_1_ = 0;
      DAT_0095d850._1_1_ = 0x40;
      DAT_0095d854 = 0;
      DAT_0095d858 = 0xffffffff;
      DAT_0095d85c = 0;
      DAT_0095d860 = 0xffffffff;
      DAT_0095d864 = 0;
      DAT_0095d878 = _m3dVZero;
      DAT_0095d87c = DAT_00963740;
      DAT_0095d880 = DAT_00963744;
      _DAT_0095d884 = _m3dVZero;
      _DAT_0095d888 = DAT_00963740;
      _DAT_0095d88c = DAT_00963744;
      DAT_0095d890 = _m3dVZero;
      DAT_0095d894 = DAT_00963740;
      DAT_0095d898 = DAT_00963744;
      DAT_0095d89c = 0;
      DAT_0095d8a0 = _m3dVZero;
      DAT_0095d8a4 = DAT_00963740;
      DAT_0095d8a8 = DAT_00963744;
      DAT_0095d850._2_2_ = 0x5c;
      atexit((_func_4879 *)&__E10);
    }
    puVar3 = &DAT_0095d850;
    *(undefined4 **)param_1 = &DAT_0095d850;
  }
  puVar3[1] = *(undefined4 *)(this + 0xcc);
  puVar3[2] = *(undefined4 *)(*(int *)(this + 0xbc) + 0xe0);
  puVar3[3] = *(undefined4 *)(*(int *)(this + 0xbc) + 0x24);
  if (*(int *)(this + 0x49f) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x49f) + 0x8c);
  }
  puVar3[4] = uVar1;
  puVar3[5] = *(undefined4 *)(this + 0x4a3);
  puVar3[6] = *(undefined4 *)(this + 1099);
  uVar1 = (**(code **)(*(int *)this + 0x114))();
  puVar3[7] = uVar1;
  uVar1 = (**(code **)(*(int *)this + 0x118))();
  puVar3[8] = uVar1;
  uVar1 = (**(code **)(*(int *)this + 0x11c))();
  puVar3[9] = uVar1;
  if ((*(uint *)(this + 1099) & 0x100) != 0) {
    iVar2 = *(int *)(this + 0x43f);
    puVar3[10] = *(undefined4 *)(iVar2 + 0xb4);
    puVar3[0xb] = *(undefined4 *)(iVar2 + 0xb8);
    puVar3[0xc] = *(undefined4 *)(iVar2 + 0xbc);
    physMATH::GetPos(*(physMATH **)(this + 0x43f),(m3dV *)(puVar3 + 0xd));
    iVar2 = *(int *)(this + 0x43f);
    puVar3[0x10] = *(undefined4 *)(iVar2 + 0x48);
    puVar3[0x11] = *(undefined4 *)(iVar2 + 0x4c);
    puVar3[0x12] = *(undefined4 *)(iVar2 + 0x50);
  }
  puVar3[0x13] = *(undefined4 *)(this + 0x3ef);
  puVar3[0x14] = *(undefined4 *)(this + 0x3f3);
  puVar3[0x15] = *(undefined4 *)(this + 0x3f7);
  puVar3[0x16] = *(undefined4 *)(this + 0x3fb);
  if (-1 < (int)puVar3[2]) {
    if (*(int *)(*(int *)(this + 0xbc) + 0x138) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x8c);
    }
    if ((int)puVar3[2] < iVar2) goto LAB_00531a81;
  }
  puVar3[2] = 0;
LAB_00531a81:
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
  return;
}




/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 00531AA0 */

void __thiscall aiNPC::ProcessMP_WRITE_SYNC_DATA(aiNPC *this,gsMSG_MP_SAVELOAD *param_1)

{
  int iVar1;
  gsMSG_MP_SAVELOAD *pgVar2;
  int iVar3;
  int iStack_70;
  int iStack_64;
  undefined1 *puStack_58;
  undefined1 *puStack_4c;
  undefined1 *puStack_40;
  undefined2 *puStack_34;
  gsMSG_MP_SAVELOAD **ppgStack_28;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  undefined2 uStack_4;
  
  pgVar2 = param_1;
  iVar1 = *(int *)param_1;
  local_10 = 0;
  local_e = 0xffffffff;
  local_a = 0xffff;
  uStack_8 = 0xffff;
  local_6 = 0xffff;
  uStack_4 = 0xffff;
  if (-1 < *(int *)(iVar1 + 8)) {
    if (*(int *)(*(int *)(this + 0xbc) + 0x138) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x8c);
    }
    if (*(int *)(iVar1 + 8) < iVar3) goto LAB_00531aec;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
LAB_00531aec:
  ppgStack_28 = (gsMSG_MP_SAVELOAD **)0x531afe;
  fioFILE::WriteChunk(*(fioFILE **)(param_1 + 4),0xf0,(fioCHUNK *)&local_10);
  param_1 = *(gsMSG_MP_SAVELOAD **)(iVar1 + 4);
  ppgStack_28 = &param_1;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&stack0xffffffe4);
  puStack_34 = (undefined2 *)0x531b35;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf1,(fioCHUNK *)&stack0xffffffe4);
  uStack_8 = (undefined2)*(undefined4 *)(iVar1 + 8);
  local_6 = (undefined2)((uint)*(undefined4 *)(iVar1 + 8) >> 0x10);
  puStack_34 = &uStack_8;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&ppgStack_28);
  puStack_40 = (undefined1 *)0x531b6c;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf2,(fioCHUNK *)&ppgStack_28);
  puStack_40 = &stack0xffffffec;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_34);
  puStack_4c = (undefined1 *)0x531ba3;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf3,(fioCHUNK *)&puStack_34);
  puStack_4c = &stack0xffffffe0;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_40);
  puStack_58 = (undefined1 *)0x531bda;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf4,(fioCHUNK *)&puStack_40);
  puStack_58 = &stack0xffffffd4;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_4c);
  iStack_64 = 0x531c11;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf5,(fioCHUNK *)&puStack_4c);
  iStack_64 = iVar1 + 0x18;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_58);
  if ((*(uint *)(this + 1099) & 0x100) != 0) {
    iStack_70 = 0x531c4f;
    fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf6,(fioCHUNK *)&puStack_58);
    iStack_70 = iVar1 + 0x28;
    (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&iStack_64);
    fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf7,(fioCHUNK *)&iStack_64);
    (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(iVar1 + 0x34,0xc,4);
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&iStack_70);
    fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf8,(fioCHUNK *)&iStack_70);
    (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(iVar1 + 0x40,0xc,4);
    fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&puStack_58);
  }
  iStack_70 = 0x531cdc;
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xf9,(fioCHUNK *)&puStack_58);
  iStack_70 = iVar1 + 0x4c;
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))();
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&iStack_64);
  fioFILE::WriteChunk(*(fioFILE **)(pgVar2 + 4),0xfa,(fioCHUNK *)&iStack_64);
  (**(code **)(**(int **)(pgVar2 + 4) + 0x18))(this + 0x3f3,0xc,4);
  fioFILE::UpdateChunk(*(fioFILE **)(pgVar2 + 4),(fioCHUNK *)&iStack_70);
  fioFILE::WriteLastChunk(*(fioFILE **)(pgVar2 + 4));
  rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)pgVar2);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 00531D50 */

void __thiscall aiNPC::ProcessMP_READ_SYNC_DATA(aiNPC *this,gsMSG_MP_SAVELOAD *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  short local_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = *(undefined4 **)param_1;
  local_6c = 0;
  uStack_6a = 0xffff;
  uStack_68 = 0xffff;
  local_66 = 0xffffffff;
  local_62 = 0xffffffff;
  if (puVar4 == (undefined4 *)0x0) {
    if ((DAT_0095d8c5 & 1) == 0) {
      DAT_0095d8c5 = DAT_0095d8c5 | 1;
      aiSYNC_DATA::aiSYNC_DATA((aiSYNC_DATA *)&DAT_0095d850);
      atexit((_func_4879 *)&__E10);
    }
    puVar4 = &DAT_0095d850;
    local_54 = 0xffffffff;
    *(undefined4 **)param_1 = &DAT_0095d850;
    local_4c = 0xffffffff;
    local_48 = 0;
    local_30 = DAT_00963740;
    local_24 = DAT_00963740;
    local_18 = DAT_00963740;
    local_10 = 0;
    local_8 = DAT_00963740;
    local_5c._0_1_ = 0;
    local_5c._1_1_ = 0x40;
    local_58 = 0;
    local_50 = 0;
    local_34 = _m3dVZero;
    local_2c = DAT_00963744;
    local_28 = _m3dVZero;
    local_20 = DAT_00963744;
    local_1c = _m3dVZero;
    local_14 = DAT_00963744;
    local_c = _m3dVZero;
    local_4 = DAT_00963744;
    local_5c._2_2_ = 0x5c;
    puVar2 = &local_5c;
    puVar5 = &DAT_0095d850;
    for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_6c);
  do {
    if ((iVar3 == 0) || (local_6c == 1)) {
      if ((int)puVar4[5] < 0) {
        puVar4[5] = 0;
      }
      rendDRIVER::ConfigureTransp((rendDRIVER *)this,(camCAMERA *)param_1);
      return;
    }
    switch(local_6c) {
    case 0xf0:
      uVar6 = 4;
      puVar2 = puVar4 + 1;
      break;
    case 0xf1:
      piVar1 = puVar4 + 2;
      (**(code **)(**(int **)(param_1 + 4) + 0x14))(piVar1,4,4);
      if (-1 < *piVar1) {
        if (*(int *)(*(int *)(this + 0xbc) + 0x138) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(*(int *)(this + 0xbc) + 0x138) + 0x8c);
        }
        if (*piVar1 < iVar3) goto switchD_00531e6e_default;
      }
      *piVar1 = 0;
      goto switchD_00531e6e_default;
    case 0xf2:
      uVar6 = 4;
      puVar2 = puVar4 + 3;
      break;
    case 0xf3:
      uVar6 = 4;
      puVar2 = puVar4 + 4;
      break;
    case 0xf4:
      uVar6 = 4;
      puVar2 = puVar4 + 5;
      break;
    case 0xf5:
      uVar6 = 0x10;
      puVar2 = puVar4 + 6;
      break;
    case 0xf6:
      puVar2 = puVar4 + 10;
      goto LAB_00531ef9;
    case 0xf7:
      puVar2 = puVar4 + 0xd;
      goto LAB_00531ef9;
    case 0xf8:
      puVar2 = puVar4 + 0x10;
      goto LAB_00531ef9;
    case 0xf9:
      uVar6 = 4;
      puVar2 = puVar4 + 0x13;
      break;
    case 0xfa:
      puVar2 = puVar4 + 0x14;
LAB_00531ef9:
      uVar6 = 0xc;
      break;
    default:
      goto switchD_00531e6e_default;
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x14))(puVar2,uVar6,4);
switchD_00531e6e_default:
    iVar3 = fioFILE::ReadChunk(*(fioFILE **)(param_1 + 4),(fioCHUNK *)&local_6c);
  } while( true );
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 00531F70 */

gsMSG_MP_UPD_STATE * __thiscall aiNPC::GetMP_UPD_STATE(aiNPC *this)

{
  float10 fVar1;
  
  if ((DAT_0095d8ac & 1) == 0) {
    DAT_0095d8ac = DAT_0095d8ac | 1;
    DAT_0095d8b4 = 0;
    DAT_0095d8b5 = 0x40;
    _DAT_0095d8b8 = 0xffffff9d;
    DAT_0095d8c0 = 0xff;
    _DAT_0095d8c1 = 1.0;
    _DAT_0095d8b6 = 0x11;
    atexit((_func_4879 *)&__E12);
  }
  DAT_0095d8c0 = (**(code **)(*(int *)this + 200))();
  fVar1 = (float10)(**(code **)(*(int *)this + 0xcc))();
  _DAT_0095d8c1 = (float)(fVar1 * (float10)*(float *)(this + 0x513));
  return (gsMSG_MP_UPD_STATE *)&DAT_0095d8b4;
}




/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 00532010 */

void __thiscall aiNPC::UpdateOnClientOnly(aiNPC *this)

{
  if ((*(uint *)(this + 1099) & 0x10000) == 0) {
    (**(code **)(*(int *)this + 0xc4))();
    if ((*(uint *)(this + 1099) & 0x200000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00532038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)this + 0x90))();
      return;
    }
  }
  return;
}




/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 00532040 */

void __thiscall aiNPC::NotifyHealthChange(aiNPC *this,dmgDAMAGE *param_1)

{
  msgDATA local_14;
  undefined1 local_13;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)this[0x88] & 4) != 0) {
    local_8 = *(undefined4 *)(this + 0xcc);
    local_14 = (msgDATA)0x0;
    local_13 = 0x40;
    local_10 = 1;
    local_c = *(undefined4 *)(param_1 + 0xc);
    local_12 = 0x14;
    if (*(int *)(param_1 + 4) == 0) {
      local_4 = *(undefined4 *)(param_1 + 0x1c);
    }
    else {
      local_4 = 0xffffffff;
    }
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_14,0x10000,0xffffffff,0xfffffffd);
  }
  return;
}




/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 005320C0 */

void __thiscall aiNPC::NotifyDeath(aiNPC *this,dmgDAMAGE *param_1)

{
  msgDATA local_c;
  undefined1 local_b;
  undefined2 local_a;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((byte)this[0x88] & 4) != 0) {
    local_c = (msgDATA)0x0;
    local_b = 0x40;
    local_8 = 2;
    local_a = 0xc;
    if (param_1 == (dmgDAMAGE *)0x0) {
      local_4 = 0xffffffff;
    }
    else {
      local_4 = *(undefined4 *)(param_1 + 0xc);
    }
    gsMP_SERVER::SendMsgClientAll
              (gsSysServer,(entIACTIVE_OBJ *)this,0x40c,&local_c,0x20000,0xffffffff,0xfffffffd);
  }
  return;
}




/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 00532130 */

void __thiscall aiNPC::ProcessMP_NOTIFY(aiNPC *this,gsEVENT *param_1)

{
  int iVar1;
  int iVar2;
  entIACTIVE_OBJ *peVar3;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    *(undefined4 *)(this + 1099) = *(undefined4 *)(param_1 + 8);
    return;
  case 1:
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 0xc);
    return;
  case 2:
    (**(code **)(*(int *)this + 0x8c))(0);
    break;
  case 0xffffff9c:
    iVar1 = *(int *)(param_1 + 8);
    *(undefined4 *)(this + 0x4c7) = *(undefined4 *)(iVar1 + 8);
    animINST::SetAnimSeq(*(animINST **)(this + 0xbc),*(int *)(iVar1 + 8),*(float *)(iVar1 + 0xc));
    if (*(int *)(iVar1 + 0x10) != -1) {
      peVar3 = gsMP_SYSTEM::FindEnt(gsSysMP,*(int *)(iVar1 + 0x10),0);
      *(entIACTIVE_OBJ **)(this + 0x49f) = peVar3;
      *(undefined4 *)(this + 0x4a3) = *(undefined4 *)(iVar1 + 0x14);
    }
    *(undefined4 *)(this + 1099) = *(undefined4 *)(iVar1 + 0x18);
    (**(code **)(*(int *)this + 0x120))(*(undefined4 *)(iVar1 + 0x1c));
    (**(code **)(*(int *)this + 0x124))(*(undefined4 *)(iVar1 + 0x20));
    (**(code **)(*(int *)this + 0x128))(*(undefined4 *)(iVar1 + 0x24));
    if ((*(uint *)(this + 1099) & 0x10000) == 0) {
      (**(code **)(*(int *)this + 0x16c))(1);
    }
    else {
      (**(code **)(*(int *)this + 0xf8))();
    }
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(iVar1 + 4);
    if (((*(uint *)(this + 1099) & 0x100) != 0) && (iVar2 = *(int *)(this + 0x43f), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(iVar1 + 0x28);
      *(undefined4 *)(iVar2 + 0xb8) = *(undefined4 *)(iVar1 + 0x2c);
      *(undefined4 *)(iVar2 + 0xbc) = *(undefined4 *)(iVar1 + 0x30);
      physMATH::SetPos(*(physMATH **)(this + 0x43f),(m3dV *)(iVar1 + 0x34));
      iVar2 = *(int *)(this + 0x43f);
      *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar1 + 0x48);
    }
    *(undefined4 *)(this + 0x3ef) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(this + 0x3f3) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(this + 0x3f7) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(this + 0x3fb) = *(undefined4 *)(iVar1 + 0x58);
    return;
  case 0xffffff9d:
    *(int *)(this + 0x4c7) = (int)(char)param_1[0xc];
    *(undefined4 *)(this + 0x4cb) = *(undefined4 *)(param_1 + 0xd);
    return;
  case 0xffffff9f:
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(param_1 + 8);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* from: gs_shared:ai_ctrl_MP.cpp
   addr: 00532370 */

void __thiscall aiSYNC_DATA::aiSYNC_DATA(aiSYNC_DATA *this)

{
  undefined4 uVar1;
  
  *(undefined2 *)(this + 2) = 0xffff;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *this = (aiSYNC_DATA)0x0;
  this[1] = (aiSYNC_DATA)0x40;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x28) = _m3dVZero;
  *(undefined4 *)(this + 0x2c) = DAT_00963740;
  *(undefined4 *)(this + 0x30) = DAT_00963744;
  *(undefined4 *)(this + 0x34) = _m3dVZero;
  *(undefined4 *)(this + 0x38) = DAT_00963740;
  *(undefined4 *)(this + 0x3c) = DAT_00963744;
  *(undefined4 *)(this + 0x40) = _m3dVZero;
  *(undefined4 *)(this + 0x44) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x48) = uVar1;
  *(undefined4 *)(this + 0x50) = _m3dVZero;
  *(undefined4 *)(this + 0x54) = DAT_00963740;
  uVar1 = DAT_00963744;
  *(undefined2 *)(this + 2) = 0x5c;
  *(undefined4 *)(this + 0x58) = uVar1;
  return;
}

